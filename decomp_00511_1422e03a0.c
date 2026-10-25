// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1422e03a0 FAudioStreamingManager body=211 status=ok
// SIG undefined FAudioStreamingManager(void)

undefined8 * FAudioStreamingManager::FAudioStreamingManager(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1450350e8;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1a));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x1a),4000);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x1f),4000);
  return param_1;
}



// FUNCTION 1422e0480 FUN_1422e0480 body=195 status=ok
// SIG undefined FUN_1422e0480(void)

undefined4 * FUN_1422e0480(undefined4 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  *param_1 = *(undefined4 *)((longlong)param_2 + 0xc);
  lVar4 = (**(code **)(*param_2 + 0x148))(param_2);
  uVar1 = *(undefined4 *)(lVar4 + 0xc);
  param_1[1] = uVar1;
  param_1[2] = (int)param_2[0x92];
  param_1[4] = param_1[4] ^ (*(uint *)(param_2 + 0x93) ^ param_1[4]) & 1;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)((longlong)param_2 + 0x49c);
  *(longlong *)(param_1 + 6) = param_2[0x94];
  *(longlong *)(param_1 + 8) = param_2[0x95];
  param_1[10] = (int)param_2[0x96];
  param_1[0xb] = *(undefined4 *)((longlong)param_2 + 0x4b4);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x4bc);
  lVar4 = param_2[0x98];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x4c4);
  param_1[0xc] = (int)param_2[0x97];
  param_1[0xd] = uVar2;
  param_1[0xe] = (int)lVar4;
  param_1[0xf] = uVar3;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x4cc);
  lVar4 = param_2[0x9a];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x4d4);
  param_1[0x10] = (int)param_2[0x99];
  param_1[0x11] = uVar2;
  param_1[0x12] = (int)lVar4;
  param_1[0x13] = uVar3;
  param_1[0x14] = (int)param_2[0x9b];
  uVar5 = (**(code **)(*(longlong *)param_2[0x8e] + 0x6d0))
                    ((longlong *)param_2[0x8e],0,CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1));
  *(undefined8 *)(param_1 + 0x16) = uVar5;
  return param_1;
}



// FUNCTION 1422e0550 FUN_1422e0550 body=23 status=ok
// SIG undefined FUN_1422e0550(void)

undefined8 FUN_1422e0550(undefined8 param_1)

{
  FUN_1422f9470();
  return param_1;
}



// FUNCTION 1422e0570 FBasedPosition body=33 status=ok
// SIG undefined FBasedPosition(void)

undefined8 * FBasedPosition::FBasedPosition(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1422e05a0 FBoneContainer body=369 status=ok
// SIG undefined FBoneContainer(void)

undefined8 * FBoneContainer::FBoneContainer(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FWeakObjectPtr::operator=(param_1 + 6,0);
  FWeakObjectPtr::operator=(param_1 + 7,0);
  FWeakObjectPtr::operator=(param_1 + 8,0);
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
  *(undefined2 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)((longlong)param_1 + 0xd2) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (*(int *)((longlong)param_1 + 0x5c) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 10,0);
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (*(int *)((longlong)param_1 + 0x6c) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0xc,0);
  }
  return param_1;
}



// FUNCTION 1422e0720 FUN_1422e0720 body=622 status=ok
// SIG undefined FUN_1422e0720(void)

longlong * FUN_1422e0720(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  void *pvVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined2 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong local_78;
  ulonglong local_70;
  undefined2 *local_68;
  int local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  
  pvVar4 = ThreadLocalStoragePointer;
  uVar11 = (ulonglong)_tls_index;
  uVar15 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if ((*(int *)(*(longlong *)((longlong)pvVar4 + uVar11 * 8) + 0x38) < DAT_146aefa20) &&
     (_Init_thread_header(&DAT_146aefa20), DAT_146aefa20 == -1)) {
    FName::FName(&DAT_146aefa18,L"CameraPhotography",1);
    _Init_thread_footer(&DAT_146aefa20);
  }
  uVar3 = DAT_146aefa18;
  plVar9 = (longlong *)FUN_141593110();
  local_78 = 0;
  local_70 = 0;
  iVar7 = (**(code **)(*plVar9 + 8))(plVar9,uVar3);
  uVar14 = uVar15;
  uVar11 = uVar15;
  uVar17 = uVar15;
  if (0 < iVar7) {
    do {
      lVar10 = (**(code **)(*plVar9 + 0x10))(plVar9,uVar3,uVar17);
      uVar5 = local_70;
      uVar13 = lVar10 - 8;
      if (lVar10 == 0) {
        uVar13 = uVar15;
      }
      lVar10 = (longlong)(int)local_70;
      iVar8 = (int)local_70 + 1;
      local_70 = CONCAT44(local_70._4_4_,iVar8);
      if ((int)uVar11 < iVar8) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                  (&local_78,uVar5 & 0xffffffff);
        uVar11 = local_70 >> 0x20;
        uVar14 = local_78;
      }
      uVar16 = (int)uVar17 + 1;
      *(ulonglong *)(uVar14 + lVar10 * 8) = uVar13;
      uVar17 = (ulonglong)uVar16;
    } while ((int)uVar16 < iVar7);
  }
  while ((iVar7 = (int)uVar15, -1 < iVar7 && (iVar7 < (int)local_70))) {
    plVar9 = (longlong *)*param_1;
    if (plVar9 != (longlong *)0x0) goto LAB_1422e08cf;
    plVar9 = *(longlong **)(uVar14 + (longlong)iVar7 * 8);
    plVar9 = (longlong *)(**(code **)(*plVar9 + 0x40))(plVar9,local_58);
    if (param_1 != plVar9) {
      *param_1 = *plVar9;
      *plVar9 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 1,plVar9 + 1);
    }
    plVar9 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      uVar14 = local_78;
      if ((int)lVar10 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        uVar14 = local_78;
        if (iVar8 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
          uVar14 = local_78;
        }
      }
    }
    uVar15 = (ulonglong)(iVar7 + 1);
  }
  plVar9 = (longlong *)*param_1;
  if (plVar9 == (longlong *)0x0) {
    cVar6 = '\0';
  }
  else {
LAB_1422e08cf:
    cVar6 = (**(code **)(*plVar9 + 0x28))();
  }
  plVar9 = DAT_146aef888;
  FString::PrintfImpl(&local_68,&DAT_143f3edc0,cVar6 != '\0');
  puVar12 = &DAT_143f3eda8;
  if (local_60 != 0) {
    puVar12 = local_68;
  }
  (**(code **)(*plVar9 + 0x60))(plVar9,puVar12,0x8000000);
  if (local_68 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (uVar14 != 0) {
    FMemory::Free(uVar14);
  }
  return param_1;
}



// FUNCTION 1422e0990 FCreateAudioDeviceResults body=22 status=ok
// SIG undefined FCreateAudioDeviceResults(void)

undefined4 *
FAudioDeviceManager::FCreateAudioDeviceResults::FCreateAudioDeviceResults(undefined4 *param_1)

{
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xfe;
  *param_1 = 0xffffffff;
  *(undefined8 *)(param_1 + 2) = 0;
  return param_1;
}



// FUNCTION 1422e09b0 FInteriorSettings body=63 status=ok
// SIG undefined FInteriorSettings(void)

uint * FInteriorSettings::FInteriorSettings(uint *param_1)

{
  *param_1 = *param_1 & 0xfffffffe;
  param_1[1] = 0x3f800000;
  param_1[2] = 0x3f000000;
  param_1[3] = 0x469c4000;
  param_1[4] = 0x3f000000;
  param_1[5] = 0x3f800000;
  param_1[6] = 0x3f000000;
  param_1[7] = 0x469c4000;
  param_1[8] = 0x3f000000;
  return param_1;
}



// FUNCTION 1422e09f0 FUN_1422e09f0 body=131 status=ok
// SIG undefined FUN_1422e09f0(void)

undefined8 * FUN_1422e09f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__145037770;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = FUN_1422e8b30(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 1422e0a80 UAudioSettings body=549 status=ok
// SIG undefined UAudioSettings(void)

undefined8 * UAudioSettings::UAudioSettings(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 local_res8;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong *local_28;
  undefined4 local_18 [4];
  
  UDeveloperSettings::UDeveloperSettings();
  *param_1 = &PTR__scalar_deleting_destructor__1450349a0;
  plVar3 = param_1 + 0x18;
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
  *plVar3 = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  FName::FName(&local_res8,L"Audio",1);
  param_1[6] = local_res8;
  FText::FText(local_30);
  local_18[0] = 0x20;
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_48,L"Default",L"AudioSettings",L"DefaultSettingsName");
  FText::operator=(local_30,uVar5);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  FConfigCacheIni::GetInt(DAT_1468b6148,L"Audio",L"MaxChannels",local_18,&DAT_1468e2360);
  iVar4 = *(int *)(param_1 + 0x19);
  *(int *)(param_1 + 0x19) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0xcc) < iVar4 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar3,iVar4);
  }
  lVar6 = (longlong)iVar4 * 0x20 + *plVar3;
  FText::FText(lVar6,local_30);
  *(undefined4 *)(lVar6 + 0x18) = local_18[0];
  *(uint *)(param_1 + 0x1a) = *(uint *)(param_1 + 0x1a) | 1;
  *(undefined4 *)(param_1 + 0x17) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x16) = 16000;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 100;
  *(undefined4 *)(param_1 + 0x1b) = 8;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_28 + 8))(local_28,1);
      }
    }
  }
  *(uint *)(param_1 + 0x1a) = *(uint *)(param_1 + 0x1a) | 1;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  return param_1;
}



// FUNCTION 1422e0cb0 UBlueprint body=136 status=ok
// SIG undefined UBlueprint(void)

undefined8 * UBlueprint::UBlueprint(undefined8 *param_1)

{
  FUN_141781840();
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *param_1 = &PTR_FUN_145033480;
  *(undefined2 *)(param_1 + 7) = 1;
  param_1[0xb] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 2;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 2;
  return param_1;
}



// FUNCTION 1422e0d40 UBlueprintCore body=57 status=ok
// SIG undefined UBlueprintCore(void)

undefined8 * UBlueprintCore::UBlueprintCore(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_145033208;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined2 *)(param_1 + 7) = 1;
  return param_1;
}



// FUNCTION 1422e0d80 UBlueprintFunctionLibrary body=33 status=ok
// SIG undefined UBlueprintFunctionLibrary(void)

undefined8 * UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_143f4b3b0;
  return param_1;
}



// FUNCTION 1422e0db0 FUN_1422e0db0 body=211 status=ok
// SIG undefined FUN_1422e0db0(void)

undefined8 * FUN_1422e0db0(undefined8 *param_1)

{
  FUN_1417142f0();
  *param_1 = &PTR__scalar_deleting_destructor__1450345f0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x28c) = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x57));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x57),4000);
  *(byte *)((longlong)param_1 + 0x204) = *(byte *)((longlong)param_1 + 0x204) & 0xfc;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return param_1;
}



// FUNCTION 1422e0e90 FUN_1422e0e90 body=43 status=ok
// SIG undefined FUN_1422e0e90(void)

undefined8 * FUN_1422e0e90(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1450353b8;
  param_1[8] = 0;
  param_1[9] = 0;
  return param_1;
}



// FUNCTION 1422e0ec0 UBreakpoint body=41 status=ok
// SIG undefined UBreakpoint(void)

undefined8 * UBreakpoint::UBreakpoint(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffffe;
  *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) & 0xfffffff8;
  *param_1 = &PTR_FUN_143fce9d0;
  return param_1;
}



// FUNCTION 1422e0ef0 UBrushBuilder body=298 status=ok
// SIG undefined UBrushBuilder(void)

undefined8 * UBrushBuilder::UBrushBuilder(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_141781840();
  iVar2 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__145035630;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  if ((wchar_t *)param_1[5] != L"BBGeneric") {
    *(undefined4 *)(param_1 + 6) = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 5,10);
    iVar1 = *(int *)(param_1 + 6);
    *(int *)(param_1 + 6) = iVar1 + 10;
    if (*(int *)((longlong)param_1 + 0x34) < iVar1 + 10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 5);
    }
    builtin_wcsncpy((wchar_t *)param_1[5],L"BBGeneric",10);
  }
  if ((wchar_t *)param_1[7] != L"BrushBuilderName_Generic") {
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)((longlong)param_1 + 0x44) != 0x19) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 7,0x19);
      iVar2 = *(int *)(param_1 + 8);
    }
    *(int *)(param_1 + 8) = iVar2 + 0x19;
    if (*(int *)((longlong)param_1 + 0x44) < iVar2 + 0x19) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 7,iVar2);
    }
    builtin_wcsncpy((wchar_t *)param_1[7],L"BrushBuilderName_Generic",0x19);
  }
  *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 1;
  return param_1;
}



// FUNCTION 1422e1020 UCameraAnim body=60 status=ok
// SIG undefined UCameraAnim(void)

undefined8 * UCameraAnim::UCameraAnim(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__145036cb0;
  FUN_142741540(param_1 + 0xc);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 6) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x42b40000;
  return param_1;
}



// FUNCTION 1422e1060 UCameraAnimInst body=186 status=ok
// SIG undefined UCameraAnimInst(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * UCameraAnimInst::UCameraAnimInst(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  
  FUN_141781840();
  *param_1 = &PTR_FUN_145036f28;
  uVar4 = uRam0000000146aef5bc;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(uint *)((longlong)param_1 + 0xdc) = uVar4;
  uVar4 = uRam0000000146aef5b4 & uRam0000000146aef5c4;
  uVar5 = uRam0000000146aef5b8 & uRam0000000146aef5c8;
  uVar6 = uRam0000000146aef5bc & uRam0000000146aef5cc;
  *(uint *)(param_1 + 0x1e) = _DAT_146aef5b0 & _DAT_146aef5c0;
  *(uint *)((longlong)param_1 + 0xf4) = uVar4;
  *(uint *)(param_1 + 0x1f) = uVar5;
  *(uint *)((longlong)param_1 + 0xfc) = uVar6;
  *(uint *)((longlong)param_1 + 0x3c) = *(uint *)((longlong)param_1 + 0x3c) | 3;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xf) = 0;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"InterpGroupInst0",1);
  uVar3 = *puVar1;
  uVar2 = UInterpGroupInst::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[6] = uVar3;
  return param_1;
}



// FUNCTION 1422e1120 FUN_1422e1120 body=230 status=ok
// SIG undefined FUN_1422e1120(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1422e1120(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_14237f6c0();
  *param_1 = &PTR__scalar_deleting_destructor__145036728;
  param_1[5] = &PTR_LAB_145036c80;
  FUN_142741540(param_1 + 0x60);
  uVar1 = uRam0000000146aef5bc;
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)((longlong)param_1 + 0x904) = 0;
  *(undefined4 *)(param_1 + 0x121) = 0;
  *(uint *)((longlong)param_1 + 0x90c) = uVar1;
  uVar1 = uRam0000000146aef5b4 & uRam0000000146aef5c4;
  uVar2 = uRam0000000146aef5b8 & uRam0000000146aef5c8;
  uVar3 = uRam0000000146aef5bc & uRam0000000146aef5cc;
  *(uint *)(param_1 + 0x124) = _DAT_146aef5b0 & _DAT_146aef5c0;
  *(uint *)((longlong)param_1 + 0x924) = uVar1;
  *(uint *)(param_1 + 0x125) = uVar2;
  *(uint *)((longlong)param_1 + 0x92c) = uVar3;
  param_1[0x127] = 0;
  param_1[0x128] = 0;
  param_1[0x129] = 0;
  param_1[0x12a] = 0;
  *(uint *)(param_1 + 299) = *(uint *)(param_1 + 299) | 1;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 2;
  *(uint *)(param_1 + 0x5d) = *(uint *)(param_1 + 0x5d) & 0xfffffff6;
  *(uint *)(param_1 + 0x5d) = *(uint *)(param_1 + 0x5d) | 6;
  *(undefined4 *)(param_1 + 0x5a) = 0x42b40000;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = 0x3fe38e3b;
  param_1[0x5b] = 0x44000000;
  *(undefined4 *)(param_1 + 0x5c) = 0x4a000000;
  *(undefined4 *)(param_1 + 0x5e) = 0x3f800000;
  return param_1;
}



// FUNCTION 1422e1210 UCameraModifier body=37 status=ok
// SIG undefined UCameraModifier(void)

undefined8 * UCameraModifier::UCameraModifier(undefined8 *param_1)

{
  FUN_141781840();
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0x7f;
  *param_1 = &PTR_FUN_1450371a0;
  return param_1;
}



// FUNCTION 1422e1240 FUN_1422e1240 body=62 status=ok
// SIG undefined FUN_1422e1240(void)

undefined8 * FUN_1422e1240(undefined8 *param_1)

{
  FUN_141781840();
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0x7f;
  *param_1 = &PTR__scalar_deleting_destructor__145037468;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x3f000000;
  return param_1;
}



// FUNCTION 1422e1280 ~TSparseArray<TSetElement<TTuple<FName,FBufferVisualizationData::Record>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=392 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FName,FBufferVisualizationData::Record>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FName,FBufferVisualizationData::Record>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FName,FBufferVisualizationData::Record>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

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
      if (bVar4) goto LAB_1422e1341;
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
LAB_1422e1341:
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
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
                ((longlong)iStack_1c * 0x40 + 8 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1,0);
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



// FUNCTION 1422e1410 ~FAudioDeviceManager body=313 status=ok
// SIG undefined ~FAudioDeviceManager(void)

void FAudioDeviceManager::~FAudioDeviceManager(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = (int)param_1[1] + -1;
  lVar4 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      FUN_1422edb20(param_1,*(undefined8 *)(*param_1 + lVar4 * 8));
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  if (param_1[0x22] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x22] + 0x48);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      FGraphEvent::Recycle();
    }
  }
  if (param_1[0x1e] != 0) {
    FMemory::Free();
  }
  if (param_1[0x1c] != 0) {
    FMemory::Free();
  }
  if (param_1[0x1a] != 0) {
    FMemory::Free();
  }
  if (param_1[0x18] != 0) {
    FMemory::Free();
  }
  if (param_1[0x16] != 0) {
    FMemory::Free();
  }
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  lVar4 = param_1[0x11];
  while (lVar4 != 0) {
    plVar2 = (longlong *)param_1[0x11];
    param_1[0x11] = *plVar2;
    FMemory::operator_delete(plVar2,0x10);
    lVar4 = param_1[0x11];
  }
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 2);
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1422e1550 operator!= body=102 status=ok
// SIG undefined operator!=(void)

longlong FInteriorSettings::operator!=(uint *param_1,uint *param_2)

{
  uint3 uVar1;
  
  uVar1 = (uint3)((*param_2 ^ *param_1) >> 8);
  if ((((((((*param_2 ^ *param_1) & 1) == 0) && ((float)param_1[1] == (float)param_2[1])) &&
        ((float)param_1[2] == (float)param_2[2])) &&
       (((float)param_1[3] == (float)param_2[3] && ((float)param_1[4] == (float)param_2[4])))) &&
      (((float)param_1[5] == (float)param_2[5] &&
       (((float)param_1[6] == (float)param_2[6] && ((float)param_1[7] == (float)param_2[7])))))) &&
     ((float)param_1[8] == (float)param_2[8])) {
    return (ulonglong)uVar1 << 8;
  }
  return CONCAT71((uint7)uVar1,1);
}



// FUNCTION 1422e15c0 FUN_1422e15c0 body=680 status=ok
// SIG undefined FUN_1422e15c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1422e15c0(longlong *param_1,longlong *param_2)

{
  float fVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  undefined8 *puVar13;
  float *pfVar14;
  float fVar15;
  float fVar16;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  float local_b0;
  longlong local_a8;
  float fStack_a0;
  float fStack_9c;
  undefined8 local_98;
  float local_90;
  undefined1 local_88 [128];
  
  if (*param_1 == 0) {
    lVar3 = param_1[2];
    *param_2 = param_1[1];
    *(int *)(param_2 + 1) = (int)lVar3;
  }
  else {
    lVar3 = *(longlong *)(*param_1 + 0x168);
    if (lVar3 == 0) {
      local_b8 = _DAT_1468b5d90;
      local_b0 = DAT_1468b5d98;
    }
    else {
      local_b8 = *(undefined8 *)(lVar3 + 0x220);
      local_b0 = *(float *)(lVar3 + 0x228);
    }
    local_98 = local_b8;
    local_90 = local_b0;
    if (lVar3 == 0) {
      fVar15 = (float)DAT_1468b5da0;
      fVar16 = (float)((ulonglong)DAT_1468b5da0 >> 0x20);
      fStack_a0 = DAT_1468b5da8;
    }
    else {
      fVar15 = *(float *)(lVar3 + 0x210);
      local_a8 = *(longlong *)(lVar3 + 0x210);
      fStack_a0 = *(float *)(lVar3 + 0x218);
      fStack_9c = *(float *)(lVar3 + 0x21c);
      auVar4._4_4_ = -(uint)(*(float *)(lVar3 + 0x254) != *(float *)(lVar3 + 0x214));
      auVar4._0_4_ = -(uint)(*(float *)(lVar3 + 0x250) != fVar15);
      auVar4._8_4_ = -(uint)(*(float *)(lVar3 + 600) != fStack_a0);
      auVar4._12_4_ = -(uint)(*(float *)(lVar3 + 0x25c) != fStack_9c);
      iVar12 = movmskps(local_b0,auVar4);
      if (iVar12 != 0) {
        *(float *)(lVar3 + 0x250) = fVar15;
        *(float *)(lVar3 + 0x254) = *(float *)(lVar3 + 0x214);
        *(float *)(lVar3 + 600) = fStack_a0;
        *(float *)(lVar3 + 0x25c) = fStack_9c;
        puVar13 = (undefined8 *)FQuat::Rotator(&local_a8,&local_c8);
        *(undefined8 *)(lVar3 + 0x260) = *puVar13;
        *(undefined4 *)(lVar3 + 0x268) = *(undefined4 *)(puVar13 + 1);
      }
      fVar15 = (float)*(undefined8 *)(lVar3 + 0x260);
      fVar16 = (float)((ulonglong)*(undefined8 *)(lVar3 + 0x260) >> 0x20);
      fStack_a0 = *(float *)(lVar3 + 0x268);
    }
    fVar11 = local_90;
    fVar9 = (float)local_98;
    fVar10 = local_98._4_4_;
    local_a8 = CONCAT44(fVar16,fVar15);
    if (((((float)local_98 != *(float *)((longlong)param_1 + 0x14)) ||
         (local_98._4_4_ != *(float *)(param_1 + 3))) ||
        (local_90 != *(float *)((longlong)param_1 + 0x1c))) ||
       (((fVar15 != *(float *)(param_1 + 4) || (fVar16 != *(float *)((longlong)param_1 + 0x24))) ||
        (fStack_a0 != *(float *)(param_1 + 5))))) {
      *(undefined8 *)((longlong)param_1 + 0x14) = local_b8;
      *(float *)((longlong)param_1 + 0x1c) = local_b0;
      param_1[4] = local_a8;
      *(float *)(param_1 + 5) = fStack_a0;
      fVar15 = *(float *)((longlong)param_1 + 0xc);
      fVar16 = *(float *)(param_1 + 2);
      fVar1 = *(float *)(param_1 + 1);
      local_c8 = param_1[1];
      uStack_c0 = (undefined4)param_1[2];
      uStack_bc = 0x3f800000;
      pfVar14 = (float *)FRotationMatrix::FRotationMatrix(local_88,&local_a8);
      fVar5 = pfVar14[0xe];
      fVar6 = pfVar14[6];
      fVar7 = pfVar14[10];
      fVar8 = pfVar14[2];
      *(ulonglong *)((longlong)param_1 + 0x2c) =
           CONCAT44(pfVar14[0xd] * 1.0 + fVar16 * pfVar14[9] +
                    fVar15 * pfVar14[5] + fVar1 * pfVar14[1] + fVar10,
                    pfVar14[0xc] * 1.0 + fVar16 * pfVar14[8] +
                    fVar15 * pfVar14[4] + fVar1 * *pfVar14 + fVar9);
      *(float *)((longlong)param_1 + 0x34) =
           fVar5 * 1.0 + fVar16 * fVar7 + fVar15 * fVar6 + fVar1 * fVar8 + fVar11;
    }
    uVar2 = *(undefined4 *)((longlong)param_1 + 0x34);
    *param_2 = *(longlong *)((longlong)param_1 + 0x2c);
    *(undefined4 *)(param_2 + 1) = uVar2;
  }
  return param_2;
}



// FUNCTION 1422e1870 operator() body=252 status=ok
// SIG undefined operator()(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void <lambda_043070ee77315251823a80a60def9d5e>::operator()(undefined8 *param_1)

{
  double dVar1;
  BOOL BVar2;
  undefined8 uVar3;
  longlong *plVar4;
  LARGE_INTEGER local_res8 [4];
  
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aef698);
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aef698);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146aef698);
  QueryPerformanceCounter(local_res8);
  uVar3 = 0;
  dVar1 = (double)local_res8[0].QuadPart * DAT_1468b02f8;
  if (*(int *)(param_1 + 8) != 0) {
    plVar4 = (longlong *)param_1[6];
    if ((longlong *)param_1[6] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    if (plVar4 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 8))();
    }
  }
  (*(code *)*param_1)(uVar3);
  QueryPerformanceCounter(local_res8);
  dVar1 = ((double)local_res8[0].QuadPart * DAT_1468b02f8 - dVar1) * 1000.0;
  if (_DAT_146aef598 < dVar1) {
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aef698);
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aef698);
    }
    _DAT_146aef598 = dVar1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146aef698);
  }
  return;
}



// FUNCTION 1422e1970 FUN_1422e1970 body=341 status=ok
// SIG undefined FUN_1422e1970(void)

void FUN_1422e1970(longlong *param_1)

{
  float fVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  int *piVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  undefined1 *local_res10;
  undefined1 **local_res18;
  undefined1 ***local_res20;
  
  lVar2 = *param_1;
  iVar3 = (int)param_1[1];
  plVar8 = (longlong *)(lVar2 + 0x488);
  if (*(int *)(lVar2 + 0x490) != *(int *)(lVar2 + 0x4bc)) {
    lVar5 = *(longlong *)(lVar2 + 0x4c8);
    if (*(longlong *)(lVar2 + 0x4c8) == 0) {
      lVar5 = lVar2 + 0x4c0;
    }
    iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(lVar2 + 0x4d0) - 1U & (longlong)iVar3) * 4);
    if (iVar4 != -1) {
      do {
        piVar6 = (int *)((longlong)iVar4 * 0x70 + *plVar8);
        if (*piVar6 == iVar3) {
          if (iVar4 != -1) goto LAB_1422e19e1;
          break;
        }
        iVar4 = piVar6[0x1a];
      } while (iVar4 != -1);
    }
  }
  piVar6 = (int *)0x0;
LAB_1422e19e1:
  piVar7 = piVar6 + 2;
  if (piVar6 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  if (piVar7 != (int *)0x0) {
    fVar1 = (float)piVar7[2];
    *piVar7 = iVar3;
    piVar7[1] = *(int *)((longlong)param_1 + 0xc);
    piVar7[2] = (int)param_1[2];
    piVar7[4] = piVar7[4] ^ (*(uint *)(param_1 + 3) ^ piVar7[4]) & 1;
    *(undefined1 *)(piVar7 + 5) = *(undefined1 *)((longlong)param_1 + 0x1c);
    *(longlong *)(piVar7 + 6) = param_1[4];
    *(longlong *)(piVar7 + 8) = param_1[5];
    piVar7[10] = (int)param_1[6];
    piVar7[0xb] = *(int *)((longlong)param_1 + 0x34);
    iVar3 = *(int *)((longlong)param_1 + 0x3c);
    lVar5 = param_1[8];
    iVar4 = *(int *)((longlong)param_1 + 0x44);
    piVar7[0xc] = (int)param_1[7];
    piVar7[0xd] = iVar3;
    piVar7[0xe] = (int)lVar5;
    piVar7[0xf] = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x4c);
    lVar5 = param_1[10];
    iVar4 = *(int *)((longlong)param_1 + 0x54);
    piVar7[0x10] = (int)param_1[9];
    piVar7[0x11] = iVar3;
    piVar7[0x12] = (int)lVar5;
    piVar7[0x13] = iVar4;
    piVar7[0x14] = (int)param_1[0xb];
    *(longlong *)(piVar7 + 0x16) = param_1[0xc];
    if (fVar1 != *(float *)(param_1 + 2)) {
      local_res10 = local_res8;
      local_res8[0] = 0;
      local_res18 = &local_res10;
      if (0 < *(int *)(lVar2 + 0x490) - *(int *)(lVar2 + 0x4bc)) {
        TSparseArray<TSetElement<TTuple<unsigned_int,FAudioVolumeProxy>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::Compact(plVar8);
        local_res20 = &local_res18;
        AlgoImpl::
        IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,TSparseArray<TSetElement<TTuple<unsigned_int,FAudioVolumeProxy>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FAudioVolumeProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FAudioVolumeProxy,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>_>::FValueComparisonClass<<lambda_7945e159cc296d55399f795510545d4b>_>_>_>_>_>
                  (*plVar8,(longlong)(*(int *)(lVar2 + 0x490) - *(int *)(lVar2 + 0x4bc)),
                   local_res8[0],&local_res20);
      }
      TSet<TTuple<unsigned_int,FAudioVolumeProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>,FDefaultSetAllocator>
      ::Rehash(plVar8);
    }
  }
  return;
}



// FUNCTION 1422e1ad0 FUN_1422e1ad0 body=154 status=ok
// SIG undefined FUN_1422e1ad0(void)

void FUN_1422e1ad0(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if ((*(uint *)(param_2 + 8) >> 0x12 & 1) != 0) {
    plVar2 = (longlong *)*param_1;
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    iVar1 = (int)plVar2[1];
    *(int *)(plVar2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = uVar3;
    uVar3 = FUN_14178ca30(param_2);
    param_1 = (longlong *)*param_1;
    iVar1 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
    }
    *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar3;
  }
  return;
}



// FUNCTION 1422e1b70 FUN_1422e1b70 body=155 status=ok
// SIG undefined FUN_1422e1b70(void)

void FUN_1422e1b70(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  undefined1 *local_res10;
  undefined1 **local_res18;
  undefined8 **local_res20;
  longlong *local_28;
  longlong *local_20;
  
  lVar2 = *param_1;
  local_28 = param_1 + 1;
  puVar1 = (undefined8 *)(lVar2 + 0x488);
  local_20 = local_28;
  FUN_1422ddd70(puVar1,local_res8,&local_28,0);
  local_res10 = local_res8;
  local_res8[0] = 0;
  local_res18 = &local_res10;
  if (0 < *(int *)(lVar2 + 0x490) - *(int *)(lVar2 + 0x4bc)) {
    TSparseArray<TSetElement<TTuple<unsigned_int,FAudioVolumeProxy>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Compact(puVar1);
    local_res20 = &local_res18;
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,TSparseArray<TSetElement<TTuple<unsigned_int,FAudioVolumeProxy>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FAudioVolumeProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FAudioVolumeProxy,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>_>::FValueComparisonClass<<lambda_7945e159cc296d55399f795510545d4b>_>_>_>_>_>
              (*puVar1,(longlong)(*(int *)(lVar2 + 0x490) - *(int *)(lVar2 + 0x4bc)),local_res8[0],
               &local_res20);
  }
  TSet<TTuple<unsigned_int,FAudioVolumeProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>,FDefaultSetAllocator>
  ::Rehash(puVar1);
  FUN_1422d0f00(lVar2);
  return;
}



// FUNCTION 1422e1c10 FUN_1422e1c10 body=186 status=ok
// SIG undefined FUN_1422e1c10(void)

void FUN_1422e1c10(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  
  cVar2 = FUN_1422f4270(param_2,*param_1);
  cVar3 = FUN_141790310(param_2);
  if (cVar3 == '\0') {
    iVar1 = *(int *)(param_2 + 0xc);
    lVar7 = 0;
    lVar6 = lVar7;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar5;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar5) * 0x18;
    }
    if (((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0) && (cVar2 == '\0')) {
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar5 = iVar1 >> 0x1f & 0xffff;
        uVar4 = iVar1 + uVar5;
        lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                (longlong)(int)((uVar4 & 0xffff) - uVar5) * 0x18;
      }
      *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | 0x20000000;
    }
  }
  return;
}



// FUNCTION 1422e1cd0 operator() body=215 status=ok
// SIG undefined operator()(void)

void <lambda_7c9e846b588821949e7eddb85b6fab51>::operator()
               (longlong *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  BOOL BVar6;
  longlong *plVar7;
  
  lVar2 = *param_1;
  lVar5 = param_1[1];
  lVar3 = *(longlong *)(param_3 + 0x10);
  lVar4 = *(longlong *)(lVar2 + 0x50);
  if (((*(char *)(param_3 + 0x73) == '\0') || (lVar3 == 0)) &&
     (*(undefined8 *)(param_3 + 0x10) = 0, lVar3 != 0)) {
    plVar7 = (longlong *)operator_new(0x18);
    plVar7[1] = lVar2;
    *plVar7 = lVar3;
    *(int *)(plVar7 + 2) = (int)lVar5;
    BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0xd0));
    if (BVar6 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0xd0));
    }
    iVar1 = *(int *)(lVar4 + 200);
    *(int *)(lVar4 + 200) = iVar1 + 1;
    if (*(int *)(lVar4 + 0xcc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar4 + 0xc0,iVar1);
    }
    *(longlong **)(*(longlong *)(lVar4 + 0xc0) + (longlong)iVar1 * 8) = plVar7;
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0xd0));
  }
  LOCK();
  *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + -1;
  UNLOCK();
  return;
}



// FUNCTION 1422e1dc0 FUN_1422e1dc0 body=87 status=ok
// SIG undefined FUN_1422e1dc0(void)

undefined8 * FUN_1422e1dc0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_1[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[1] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1422e1e20 FUN_1422e1e20 body=73 status=ok
// SIG undefined FUN_1422e1e20(void)

longlong FUN_1422e1e20(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x480) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4e0);
  }
  return param_1;
}



// FUNCTION 1422e1e70 FUN_1422e1e70 body=90 status=ok
// SIG undefined FUN_1422e1e70(void)

longlong FUN_1422e1e70(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xa78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa68) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa90);
  }
  return param_1;
}



// FUNCTION 1422e1ed0 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FAudioEffectsManager::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145034c38;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1f8);
  }
  return param_1;
}



// FUNCTION 1422e1f00 `scalar_deleting_destructor' body=201 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FAudioStreamingManager::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__1450350e8;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1a));
  if (param_1[0x18] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FSoftObjectPath,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FSoftObjectPath,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xe);
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 2);
  *param_1 = &PTR_FUN_14412c180;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 1422e1fd0 FUN_1422e1fd0 body=148 status=ok
// SIG undefined FUN_1422e1fd0(void)

undefined8 * FUN_1422e1fd0(undefined8 *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_145034970;
  uVar1 = FUN_14178e3a0();
  FUN_140483870(uVar1,param_1);
  uVar1 = FUN_14178e330();
  FUN_140483870(uVar1,param_1);
  uVar1 = FUN_14178e3a0();
  FUN_140483870(uVar1,param_1);
  uVar1 = FUN_14178e330();
  FUN_140483870(uVar1,param_1);
  FUN_1415b5910(param_1[1]);
  param_1[1] = 0;
  *param_1 = &PTR_IsPromotedBuild_143f60558;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1422e2070 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145037770;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1422e20c0 `scalar_deleting_destructor' body=214 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FStreamingWaveData::_scalar_deleting_destructor_(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = 0;
  do {
    FUN_1422e60d0(param_1,0);
    cVar2 = UpdateStreamingStatus(param_1);
    if (cVar2 == '\0') break;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  lVar5 = *(longlong *)(param_1 + 0x10);
  lVar3 = (longlong)*(int *)(param_1 + 0x18) * 0x20 + lVar5;
  for (; lVar5 != lVar3; lVar5 = lVar5 + 0x20) {
    FreeLoadedChunk(param_1,lVar5);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1422e21a0 `scalar_deleting_destructor' body=161 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UAudioSettings::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FMemory::Free();
  }
  TArray<FTTLHUDMissionCommandGoalItemParams,FDefaultAllocator>::
  ~TArray<FTTLHUDMissionCommandGoalItemParams,FDefaultAllocator>(param_1 + 0xc0);
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 1422e2250 FUN_1422e2250 body=111 status=ok
// SIG undefined FUN_1422e2250(void)

longlong FUN_1422e2250(longlong param_1,ulonglong param_2)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xc0);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xa8);
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 1422e22c0 `scalar_deleting_destructor' body=217 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UBlueprintGeneratedClass::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2b8));
  TIndirectArray<FCustomPropertyListNode,FDefaultAllocator>::
  ~TIndirectArray<FCustomPropertyListNode,FDefaultAllocator>(param_1 + 0x2a8);
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  if (*(longlong *)(param_1 + 0x298) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FBlueprintCookedComponentInstancingData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 600,0);
  if (*(longlong *)(param_1 + 0x278) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 600) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x218) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x208) != 0) {
    FMemory::Free();
  }
  UClass::~UClass(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2e0);
  }
  return param_1;
}



// FUNCTION 1422e23a0 `scalar_deleting_destructor' body=126 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UBookMark::_scalar_deleting_destructor_(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x48);
  plVar1 = *(longlong **)(param_1 + 0x40);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x40);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1422e2420 `scalar_deleting_destructor' body=168 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UBrushBuilder::_scalar_deleting_destructor_(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x68);
  plVar1 = *(longlong **)(param_1 + 0x60);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 5;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x60);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
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
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 1422e24d0 `scalar_deleting_destructor' body=90 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong AFGBuildableDockingStation::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x648) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x638) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x670);
  }
  return param_1;
}



// FUNCTION 1422e2530 `scalar_deleting_destructor' body=119 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UCameraComponent::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x948) != 0) {
    FMemory::Free();
  }
  FUN_140e409f0(param_1 + 0x938);
  if (*(longlong *)(param_1 + 0x8e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x8d8) != 0) {
    FMemory::Free();
  }
  FUN_1405911f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x960);
  }
  return param_1;
}



// FUNCTION 1422e25b0 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FOpenGLBufferedGPUTiming::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1422e2610 FUN_1422e2610 body=1407 status=ok
// SIG undefined FUN_1422e2610(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1422e2610(longlong param_1,float *param_2,float param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 in_EAX;
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar14;
  float fVar15;
  undefined1 auVar13 [16];
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
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  
  *(uint *)(param_1 + 0x2e8) = *(uint *)(param_1 + 0x2e8) | 0x10;
  fVar28 = fRam0000000146aef5b8;
  fVar27 = fRam0000000146aef5b4;
  fVar25 = _DAT_146aef5b0;
  auVar10 = *(undefined1 (*) [16])(param_2 + 8);
  fVar2 = auVar10._0_4_;
  fVar4 = auVar10._4_4_;
  fVar6 = auVar10._8_4_;
  fVar8 = auVar10._12_4_;
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x920);
  fVar3 = auVar1._0_4_;
  fVar5 = auVar1._4_4_;
  fVar7 = auVar1._8_4_;
  auVar10 = minps(auVar1,auVar10);
  auVar11._4_4_ = -(uint)(auVar10._4_4_ < fRam0000000146aef854);
  auVar11._0_4_ = -(uint)(auVar10._0_4_ < _DAT_146aef850);
  auVar11._8_4_ = -(uint)(auVar10._8_4_ < fRam0000000146aef858);
  auVar11._12_4_ = -(uint)(auVar10._12_4_ < fRam0000000146aef85c);
  iVar9 = movmskps(in_EAX,auVar11);
  if (iVar9 == 0) {
    fVar25 = *param_2;
    fVar27 = param_2[1];
    fVar28 = param_2[2];
    fVar16 = param_2[3];
    fVar17 = *(float *)(param_1 + 0x900);
    fVar26 = *(float *)(param_1 + 0x904);
    fVar12 = *(float *)(param_1 + 0x908);
    fVar29 = *(float *)(param_1 + 0x90c);
    fVar30 = *(float *)(param_1 + 0x910) * fVar2;
    fVar20 = *(float *)(param_1 + 0x914) * fVar4;
    fVar19 = *(float *)(param_1 + 0x918) * fVar6;
    fVar21 = *(float *)(param_1 + 0x91c) * fVar8;
    fVar18 = fVar29 * fVar25 * _DAT_146aef820 + fVar16 * fVar17 + fVar27 * fVar12 * _DAT_146aef810 +
             fVar28 * fVar26 * _DAT_146aef800;
    fVar14 = fVar12 * fVar25 * fRam0000000146aef824 + fVar16 * fVar26 +
             fVar27 * fVar29 * fRam0000000146aef814 + fVar28 * fVar17 * fRam0000000146aef804;
    fVar23 = fVar26 * fVar25 * fRam0000000146aef828 + fVar16 * fVar12 +
             fVar27 * fVar17 * fRam0000000146aef818 + fVar28 * fVar29 * fRam0000000146aef808;
    fVar15 = fVar17 * fVar25 * fRam0000000146aef82c + fVar16 * fVar29 +
             fVar27 * fVar26 * fRam0000000146aef81c + fVar28 * fVar12 * fRam0000000146aef80c;
    fVar17 = fVar19 * fVar27 - fVar20 * fVar28;
    fVar26 = fVar30 * fVar28 - fVar19 * fVar25;
    fVar12 = fVar20 * fVar25 - fVar30 * fVar27;
    fVar29 = fVar21 * fVar16 - fVar21 * fVar16;
    fVar17 = fVar17 + fVar17;
    fVar26 = fVar26 + fVar26;
    fVar12 = fVar12 + fVar12;
    fVar29 = fVar29 + fVar29;
    local_b8 = (fVar12 * fVar27 - fVar26 * fVar28) + fVar16 * fVar17 + fVar30 + param_2[4];
    fStack_b4 = (fVar17 * fVar28 - fVar12 * fVar25) + fVar16 * fVar26 + fVar20 + param_2[5];
    fStack_b0 = (fVar26 * fVar25 - fVar17 * fVar27) + fVar16 * fVar12 + fVar19 + param_2[6];
    fVar25 = (fVar29 * fVar16 - fVar29 * fVar16) + fVar16 * fVar29 + fVar21 + param_2[7];
  }
  else {
    fVar16 = *param_2;
    fVar17 = param_2[1];
    fVar26 = param_2[2];
    fVar12 = param_2[3];
    fVar18 = fVar17 + fVar17;
    fVar21 = fVar26 + fVar26;
    fVar29 = param_2[4];
    fVar30 = param_2[5];
    fVar20 = param_2[6];
    fVar23 = fVar16 * (fVar16 + fVar16);
    fVar19 = (fVar16 + fVar16) * fVar12;
    fVar31 = fVar4 * (fVar18 * fVar16 - fVar21 * fVar12);
    fVar33 = fVar6 * (fVar21 * fVar17 - fVar19);
    fVar35 = fVar2 * (fVar21 * fVar16 - fVar18 * fVar12);
    fVar40 = (fVar21 * fVar12 + fVar18 * fVar16) * fVar2;
    fVar41 = (fVar19 + fVar21 * fVar17) * fVar4;
    fVar42 = (fVar18 * fVar12 + fVar21 * fVar16) * fVar6;
    fVar19 = (float)((uint)((_DAT_146aef5b0 - (fVar26 * fVar21 + fVar17 * fVar18)) * fVar2) &
                    _DAT_146aef5c0);
    fVar21 = (float)((uint)((fRam0000000146aef5b4 - (fVar26 * fVar21 + fVar23)) * fVar4) &
                    uRam0000000146aef5c4);
    fVar14 = (float)((uint)((fRam0000000146aef5b8 - (fVar17 * fVar18 + fVar23)) * fVar6) &
                    uRam0000000146aef5c8);
    fVar15 = (float)((uint)((fRam0000000146aef5bc - (fVar23 + fVar23)) * fVar8) &
                    uRam0000000146aef5cc);
    fVar16 = *(float *)(param_1 + 0x900);
    fVar17 = *(float *)(param_1 + 0x904);
    fVar26 = *(float *)(param_1 + 0x908);
    fVar12 = *(float *)(param_1 + 0x90c);
    fVar23 = fVar17 + fVar17;
    fVar22 = fVar26 + fVar26;
    fVar24 = fVar16 * (fVar16 + fVar16);
    fVar18 = (fVar16 + fVar16) * fVar12;
    fVar37 = (fVar22 * fVar12 + fVar23 * fVar16) * fVar3;
    fVar38 = (fVar18 + fVar22 * fVar17) * fVar5;
    fVar39 = (fVar23 * fVar12 + fVar22 * fVar16) * fVar7;
    fVar32 = fVar5 * (fVar23 * fVar16 - fVar22 * fVar12);
    fVar34 = fVar7 * (fVar22 * fVar17 - fVar18);
    fVar36 = fVar3 * (fVar22 * fVar16 - fVar23 * fVar12);
    fVar12 = (float)((uint)((_DAT_146aef5b0 - (fVar26 * fVar22 + fVar17 * fVar23)) * fVar3) &
                    _DAT_146aef5c0);
    fVar18 = (float)((uint)((fRam0000000146aef5b4 - (fVar26 * fVar22 + fVar24)) * fVar5) &
                    uRam0000000146aef5c4);
    fVar23 = (float)((uint)((fRam0000000146aef5b8 - (fVar17 * fVar23 + fVar24)) * fVar7) &
                    uRam0000000146aef5c8);
    fVar22 = (float)((uint)((fRam0000000146aef5bc - (fVar24 + fVar24)) * auVar1._12_4_) &
                    uRam0000000146aef5cc);
    fVar16 = *(float *)(param_1 + 0x910);
    fVar17 = *(float *)(param_1 + 0x914);
    fVar26 = *(float *)(param_1 + 0x918);
    local_e8 = fVar37 * fVar31 + fVar12 * fVar19 + fVar36 * fVar42 + fVar22 * fVar29;
    fStack_e4 = fVar37 * fVar21 + fVar12 * fVar40 + fVar36 * fVar33 + fVar22 * fVar30;
    fStack_e0 = fVar37 * fVar41 + fVar12 * fVar35 + fVar36 * fVar14 + fVar22 * fVar20;
    fStack_dc = fVar37 * fVar15 + fVar12 * fVar15 + fVar36 * fVar15 + fVar22 * fRam0000000146aef5bc;
    local_d8 = fVar18 * fVar31 + fVar32 * fVar19 + fVar38 * fVar42 + fVar22 * fVar29;
    fStack_d4 = fVar18 * fVar21 + fVar32 * fVar40 + fVar38 * fVar33 + fVar22 * fVar30;
    fStack_d0 = fVar18 * fVar41 + fVar32 * fVar35 + fVar38 * fVar14 + fVar22 * fVar20;
    fStack_cc = fVar18 * fVar15 + fVar32 * fVar15 + fVar38 * fVar15 + fVar22 * fRam0000000146aef5bc;
    local_c8 = fVar34 * fVar31 + fVar39 * fVar19 + fVar23 * fVar42 + fVar22 * fVar29;
    fStack_c4 = fVar34 * fVar21 + fVar39 * fVar40 + fVar23 * fVar33 + fVar22 * fVar30;
    fStack_c0 = fVar34 * fVar41 + fVar39 * fVar35 + fVar23 * fVar14 + fVar22 * fVar20;
    fStack_bc = fVar34 * fVar15 + fVar39 * fVar15 + fVar23 * fVar15 + fVar22 * fRam0000000146aef5bc;
    local_b8 = fVar17 * fVar31 + fVar16 * fVar19 + fVar26 * fVar42 + fRam0000000146aef5bc * fVar29;
    fStack_b4 = fVar17 * fVar21 + fVar16 * fVar40 + fVar26 * fVar33 + fRam0000000146aef5bc * fVar30;
    fStack_b0 = fVar17 * fVar41 + fVar16 * fVar35 + fVar26 * fVar14 + fRam0000000146aef5bc * fVar20;
    fStack_ac = fVar17 * fVar15 + fVar16 * fVar15 + fVar26 * fVar15 +
                fRam0000000146aef5bc * fRam0000000146aef5bc;
    FMatrix::RemoveScaling(&local_e8);
    fVar25 = (float)(-(uint)(_DAT_146aef850 <= fVar2 * fVar3) & (_DAT_146aef700 ^ (uint)fVar25) ^
                    _DAT_146aef700);
    fVar27 = (float)(-(uint)(fRam0000000146aef854 <= fVar4 * fVar5) &
                     (uRam0000000146aef704 ^ (uint)fVar27) ^ uRam0000000146aef704);
    fVar28 = (float)(-(uint)(fRam0000000146aef858 <= fVar6 * fVar7) &
                     (uRam0000000146aef708 ^ (uint)fVar28) ^ uRam0000000146aef708);
    local_e8 = local_e8 * fVar25;
    fStack_e4 = fStack_e4 * fVar25;
    fStack_e0 = fStack_e0 * fVar25;
    fStack_d4 = fStack_d4 * fVar27;
    fStack_d0 = fStack_d0 * fVar27;
    local_d8 = local_d8 * fVar27;
    fStack_c4 = fStack_c4 * fVar28;
    fStack_c0 = fStack_c0 * fVar28;
    local_c8 = local_c8 * fVar28;
    FQuat::FQuat(&local_f8,&local_e8);
    auVar13._0_4_ = local_f8 * local_f8 + fStack_f0 * fStack_f0;
    auVar13._4_4_ = fStack_f4 * fStack_f4 + fStack_ec * fStack_ec;
    auVar13._8_4_ = fStack_f0 * fStack_f0 + local_f8 * local_f8;
    auVar13._12_4_ = fStack_ec * fStack_ec + fStack_f4 * fStack_f4;
    fVar26 = auVar13._4_4_ + auVar13._0_4_;
    fVar12 = auVar13._8_4_ + auVar13._4_4_;
    fVar29 = auVar13._12_4_ + auVar13._8_4_;
    fVar30 = auVar13._0_4_ + auVar13._12_4_;
    auVar10._4_4_ = fVar12;
    auVar10._0_4_ = fVar26;
    auVar10._8_4_ = fVar29;
    auVar10._12_4_ = fVar30;
    auVar10 = rsqrtps(auVar13,auVar10);
    fVar27 = auVar10._0_4_;
    fVar28 = auVar10._4_4_;
    fVar16 = auVar10._8_4_;
    fVar17 = auVar10._12_4_;
    fVar27 = (_DAT_146aef840 - fVar27 * fVar27 * fVar26 * _DAT_146aef840) * fVar27 + fVar27;
    fVar28 = (fRam0000000146aef844 - fVar28 * fVar28 * fVar12 * fRam0000000146aef844) * fVar28 +
             fVar28;
    fVar16 = (fRam0000000146aef848 - fVar16 * fVar16 * fVar29 * fRam0000000146aef848) * fVar16 +
             fVar16;
    fVar17 = (fRam0000000146aef84c - fVar17 * fVar17 * fVar30 * fRam0000000146aef84c) * fVar17 +
             fVar17;
    fVar25 = 0.0;
    fVar18 = (float)(((uint)(((_DAT_146aef840 - fVar27 * fVar27 * fVar26 * _DAT_146aef840) * fVar27
                             + fVar27) * local_f8) ^ _DAT_146aef830) & -(uint)(1e-08 <= fVar26) ^
                    _DAT_146aef830);
    fVar14 = (float)(((uint)(((fRam0000000146aef844 -
                              fVar28 * fVar28 * fVar12 * fRam0000000146aef844) * fVar28 + fVar28) *
                            fStack_f4) ^ uRam0000000146aef834) & -(uint)(1e-08 <= fVar12) ^
                    uRam0000000146aef834);
    fVar23 = (float)(((uint)(((fRam0000000146aef848 -
                              fVar16 * fVar16 * fVar29 * fRam0000000146aef848) * fVar16 + fVar16) *
                            fStack_f0) ^ uRam0000000146aef838) & -(uint)(1e-08 <= fVar29) ^
                    uRam0000000146aef838);
    fVar15 = (float)(((uint)(((fRam0000000146aef84c -
                              fVar17 * fVar17 * fVar30 * fRam0000000146aef84c) * fVar17 + fVar17) *
                            fStack_ec) ^ uRam0000000146aef83c) & -(uint)(1e-08 <= fVar30) ^
                    uRam0000000146aef83c);
  }
  *(float *)(param_1 + 0x900) = fVar18;
  *(float *)(param_1 + 0x904) = fVar14;
  *(float *)(param_1 + 0x908) = fVar23;
  *(float *)(param_1 + 0x90c) = fVar15;
  *(float *)(param_1 + 0x910) = local_b8;
  *(float *)(param_1 + 0x914) = fStack_b4;
  *(float *)(param_1 + 0x918) = fStack_b0;
  *(float *)(param_1 + 0x91c) = fVar25;
  *(float *)(param_1 + 0x920) = fVar2 * fVar3;
  *(float *)(param_1 + 0x924) = fVar4 * fVar5;
  *(float *)(param_1 + 0x928) = fVar6 * fVar7;
  *(float *)(param_1 + 0x92c) = fVar8 * auVar1._12_4_;
  *(float *)(param_1 + 0x930) = param_3 + *(float *)(param_1 + 0x930);
  return;
}



// FUNCTION 1422e2b90 FUN_1422e2b90 body=466 status=ok
// SIG undefined FUN_1422e2b90(void)

longlong *
FUN_1422e2b90(longlong param_1,longlong *param_2,float param_3,undefined4 param_4,
             undefined8 *param_5,char param_6)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 local_38;
  undefined4 local_30;
  
  if (param_2 != (longlong *)0x0) {
    plVar3 = (longlong *)UNodeMappingContainer::GetPrivateStaticClass();
    plVar10 = param_2;
    do {
      if (plVar10 == plVar3) {
        uVar4 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x148))();
        cVar2 = FUN_142880f60(DAT_146b17150,uVar4);
        if (cVar2 != '\0') {
          param_3 = param_3 * *(float *)(param_1 + 0x68);
        }
        plVar3 = (longlong *)UNodeMappingContainer::GetPrivateStaticClass();
        plVar10 = param_2;
        goto LAB_1422e2c10;
      }
      plVar10 = (longlong *)plVar10[6];
    } while (plVar10 != (longlong *)0x0);
  }
  return (longlong *)0x0;
  while (plVar10 = (longlong *)plVar10[6], plVar10 != (longlong *)0x0) {
LAB_1422e2c10:
    plVar9 = param_2;
    if (plVar10 == plVar3) goto LAB_1422e2c25;
  }
  plVar9 = (longlong *)0x0;
LAB_1422e2c25:
  lVar5 = plVar9[0x1f];
  if (lVar5 == 0) {
    (**(code **)(*plVar9 + 0x368))(plVar9);
    lVar5 = plVar9[0x1f];
  }
  if ((lVar5 != 0) && ((*(byte *)(lVar5 + 0x28) & 1) != 0)) {
    plVar10 = *(longlong **)(param_1 + 0x58);
    plVar3 = plVar10 + (longlong)*(int *)(param_1 + 0x60) * 0x2c;
    for (; plVar10 != plVar3; plVar10 = plVar10 + 0x2c) {
      if (*plVar10 != 0) {
        plVar6 = (longlong *)UNodeMappingContainer::GetPrivateStaticClass();
        plVar9 = (longlong *)*plVar10;
        for (plVar8 = plVar9; plVar8 != (longlong *)0x0; plVar8 = (longlong *)plVar8[6]) {
          if (plVar8 == plVar6) goto LAB_1422e2c96;
        }
      }
      plVar9 = (longlong *)0x0;
LAB_1422e2c96:
      plVar6 = (longlong *)UNodeMappingContainer::GetPrivateStaticClass();
      plVar8 = param_2;
      do {
        plVar7 = param_2;
        if (plVar8 == plVar6) goto LAB_1422e2cb5;
        plVar8 = (longlong *)plVar8[6];
      } while (plVar8 != (longlong *)0x0);
      plVar7 = (longlong *)0x0;
LAB_1422e2cb5:
      if (plVar9 == plVar7) goto LAB_1422e2cf8;
    }
  }
  iVar1 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = iVar1 + 1;
  if (*(int *)(param_1 + 100) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<352,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0x58,iVar1);
  }
  plVar10 = (longlong *)((longlong)iVar1 * 0x160 + *(longlong *)(param_1 + 0x58));
  FUN_1422ff720(plVar10,param_2);
LAB_1422e2cf8:
  if (param_6 != '\0') {
    *(undefined4 *)((longlong)plVar10 + 0xc) = 0xbf800000;
  }
  local_38 = *param_5;
  local_30 = *(undefined4 *)(param_5 + 1);
  FUN_1423169e0(plVar10,*(undefined8 *)(param_1 + 0x30),param_3,param_4,&local_38);
  return plVar10;
}



// FUNCTION 1422e2d70 AddElement body=257 status=ok
// SIG undefined AddElement(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FScriptSetHelper::AddElement(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_e8 [32];
  code **local_c8;
  code **local_c0;
  undefined1 **local_b8;
  undefined8 local_a8;
  undefined8 *puStack_a0;
  code *local_98;
  undefined8 *puStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 *local_78;
  undefined8 *puStack_70;
  code *local_68;
  undefined8 *puStack_60;
  code *local_58;
  undefined8 *puStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_a8 = *param_1;
  local_28 = param_1[4];
  puStack_70 = &local_88;
  local_20 = *(undefined4 *)(param_1 + 5);
  puStack_60 = &local_48;
  puStack_a0 = &local_80;
  local_78 = &LAB_141784950;
  local_38 = param_1[2];
  uStack_30 = param_1[3];
  puStack_90 = &local_a8;
  local_b8 = &local_78;
  local_c0 = &local_68;
  local_68 = FUN_1417849a0;
  local_c8 = &local_58;
  local_58 = FUN_141784a00;
  local_98 = FUN_141784930;
  local_88 = local_a8;
  local_80 = local_a8;
  puStack_50 = puStack_a0;
  local_48 = local_a8;
  local_40 = param_2;
  FUN_141782d20(param_1[1],local_28,param_1 + 2,&local_98);
  return;
}



// FUNCTION 1422e2e80 FUN_1422e2e80 body=171 status=ok
// SIG undefined FUN_1422e2e80(void)

void FUN_1422e2e80(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x940);
  *(int *)(param_1 + 0x940) = iVar1 + 1;
  if (*(int *)(param_1 + 0x944) < iVar1 + 1) {
    FUN_140e5a9b0(param_1 + 0x938,iVar1);
  }
  FUN_140a25aa0((longlong)iVar1 * 0x600 + *(longlong *)(param_1 + 0x938),param_2);
  iVar1 = *(int *)(param_1 + 0x950);
  *(int *)(param_1 + 0x950) = iVar1 + 1;
  if (*(int *)(param_1 + 0x954) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x948,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x948) + (longlong)iVar1 * 4) = param_3;
  return;
}



// FUNCTION 1422e2f30 FUN_1422e2f30 body=823 status=ok
// SIG undefined FUN_1422e2f30(void)

void FUN_1422e2f30(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  float param_5,float param_6,float param_7,byte param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 uStack_20;
  
  fVar6 = param_7;
  fVar5 = param_6;
  uVar4 = *param_4;
  uStack_20 = CONCAT44(0x3f800000,(int)param_4[1]);
  if (param_6 == 0.0) {
    if (param_7 == 0.0) {
      puVar7 = (undefined4 *)FUN_1422dd650(0x2c,param_1);
      if (puVar7 != (undefined4 *)0x0) {
        uVar1 = *(undefined4 *)((longlong)param_2 + 4);
        uVar2 = *(undefined4 *)(param_2 + 1);
        *puVar7 = *(undefined4 *)param_2;
        puVar7[1] = uVar1;
        puVar7[2] = uVar2;
        puVar7[3] = 0x3f800000;
        *(undefined8 *)(puVar7 + 4) = DAT_1468b5d88;
        param_6 = param_5;
        *(undefined8 *)(puVar7 + 6) = uVar4;
        *(undefined8 *)(puVar7 + 8) = uStack_20;
        FHitProxyId::GetColor(&param_6,puVar7 + 10);
      }
      puVar7 = (undefined4 *)FUN_1422dd650(0x2c,param_1);
      if (puVar7 != (undefined4 *)0x0) {
        uVar1 = *(undefined4 *)((longlong)param_3 + 4);
        uVar2 = *(undefined4 *)(param_3 + 1);
        *puVar7 = *(undefined4 *)param_3;
        puVar7[1] = uVar1;
        puVar7[2] = uVar2;
        puVar7[3] = 0x3f800000;
        *(undefined8 *)(puVar7 + 4) = DAT_1468b5d88;
        param_6 = param_5;
        *(undefined8 *)(puVar7 + 6) = uVar4;
        *(undefined8 *)(puVar7 + 8) = uStack_20;
        FHitProxyId::GetColor(&param_6,puVar7 + 10);
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 0x30);
      *(int *)(param_1 + 0x30) = iVar3 + 1;
      if (*(int *)(param_1 + 0x34) < iVar3 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x28,iVar3);
      }
      plVar9 = (longlong *)(param_1 + 0x38);
      *(float *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar3 * 4) = fVar6;
      iVar3 = *(int *)(param_1 + 0x40);
      *(int *)(param_1 + 0x40) = iVar3 + 1;
      if (*(int *)(param_1 + 0x44) < iVar3 + 1) {
        TArray<UTTLCameraModifier::FTTLCameraPostFx,FDefaultAllocator>::ResizeGrow(plVar9,iVar3);
      }
      puVar7 = (undefined4 *)((longlong)iVar3 * 0x2c + *plVar9);
      if (puVar7 != (undefined4 *)0x0) {
        uVar1 = *(undefined4 *)((longlong)param_2 + 4);
        uVar2 = *(undefined4 *)(param_2 + 1);
        *puVar7 = *(undefined4 *)param_2;
        puVar7[1] = uVar1;
        puVar7[2] = uVar2;
        puVar7[3] = 0x3f800000;
        *(undefined8 *)(puVar7 + 4) = DAT_1468b5d88;
        *(undefined8 *)(puVar7 + 6) = uVar4;
        *(undefined8 *)(puVar7 + 8) = uStack_20;
        param_6 = param_5;
        FHitProxyId::GetColor(&param_6,puVar7 + 10);
      }
      iVar3 = *(int *)(param_1 + 0x40);
      *(int *)(param_1 + 0x40) = iVar3 + 1;
      if (*(int *)(param_1 + 0x44) < iVar3 + 1) {
        TArray<UTTLCameraModifier::FTTLCameraPostFx,FDefaultAllocator>::ResizeGrow(plVar9,iVar3);
      }
      puVar7 = (undefined4 *)((longlong)iVar3 * 0x2c + *plVar9);
      if (puVar7 != (undefined4 *)0x0) {
        uVar1 = *(undefined4 *)((longlong)param_3 + 4);
        uVar2 = *(undefined4 *)(param_3 + 1);
        *puVar7 = *(undefined4 *)param_3;
        puVar7[1] = uVar1;
        puVar7[2] = uVar2;
        puVar7[3] = 0x3f800000;
        *(undefined8 *)(puVar7 + 4) = DAT_1468b5d88;
        *(undefined8 *)(puVar7 + 6) = uVar4;
        *(undefined8 *)(puVar7 + 8) = uStack_20;
        param_6 = param_5;
        FHitProxyId::GetColor(&param_6,puVar7 + 10);
      }
      iVar3 = *(int *)(param_1 + 0x40);
      *(int *)(param_1 + 0x40) = iVar3 + 1;
      if (*(int *)(param_1 + 0x44) < iVar3 + 1) {
        TArray<UTTLCameraModifier::FTTLCameraPostFx,FDefaultAllocator>::ResizeGrow(plVar9,iVar3);
      }
      puVar7 = (undefined4 *)((longlong)iVar3 * 0x2c + *plVar9);
      if (puVar7 != (undefined4 *)0x0) {
        uVar1 = *(undefined4 *)((longlong)param_3 + 4);
        uVar2 = *(undefined4 *)(param_3 + 1);
        *puVar7 = *(undefined4 *)param_3;
        puVar7[1] = uVar1;
        puVar7[2] = uVar2;
        puVar7[3] = 0x3f800000;
        *(undefined8 *)(puVar7 + 4) = DAT_1468b5d88;
        *(undefined8 *)(puVar7 + 6) = uVar4;
        *(undefined8 *)(puVar7 + 8) = uStack_20;
        param_6 = param_5;
        FHitProxyId::GetColor(&param_6,puVar7 + 10);
      }
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x50);
    *(int *)(param_1 + 0x50) = iVar3 + 1;
    if (*(int *)(param_1 + 0x54) < iVar3 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                ((longlong *)(param_1 + 0x48),iVar3);
    }
    puVar8 = (undefined8 *)((longlong)iVar3 * 0x38 + *(longlong *)(param_1 + 0x48));
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      *(undefined4 *)((longlong)puVar8 + 0x2c) = 0xffffffff;
    }
    *puVar8 = *param_2;
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined8 *)((longlong)puVar8 + 0xc) = *param_3;
    *(undefined4 *)((longlong)puVar8 + 0x14) = *(undefined4 *)(param_3 + 1);
    *(undefined8 *)((longlong)puVar8 + 0x1c) = uVar4;
    *(undefined8 *)((longlong)puVar8 + 0x24) = uStack_20;
    *(float *)((longlong)puVar8 + 0x2c) = param_5;
    *(float *)(puVar8 + 6) = param_7;
    *(float *)(puVar8 + 3) = fVar5;
    *(uint *)((longlong)puVar8 + 0x34) = (uint)param_8;
  }
  return;
}



// FUNCTION 1422e3270 AddNewLoadedChunk body=143 status=ok
// SIG undefined AddNewLoadedChunk(void)

int FStreamingWaveData::AddNewLoadedChunk(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  iVar2 = *(int *)(param_1 + 0x18);
  plVar1 = (longlong *)(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x18) = iVar2 + 1;
  if (*(int *)(param_1 + 0x1c) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar1,iVar2);
  }
  puVar4 = (undefined8 *)((longlong)iVar2 * 0x20 + *plVar1);
  lVar5 = (longlong)iVar3 * 0x20;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *(undefined4 *)(lVar5 + 0x14 + *plVar1) = param_2;
  *(undefined4 *)(*plVar1 + 0x18 + lVar5) = param_3;
  return iVar3;
}



// FUNCTION 1422e3300 FUN_1422e3300 body=171 status=ok
// SIG undefined FUN_1422e3300(void)

void FUN_1422e3300(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 *param_4,
                  undefined4 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 local_res18 [16];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar2 = *(int *)(param_1 + 0x20);
  local_28 = *param_4;
  uStack_24 = param_4[1];
  uStack_20 = param_4[2];
  *(int *)(param_1 + 0x20) = iVar2 + 1;
  uStack_1c = 0x3f800000;
  if (*(int *)(param_1 + 0x24) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              ((longlong *)(param_1 + 0x18),iVar2);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0xffffffff;
  }
  *puVar1 = *param_2;
  uVar3 = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)puVar1 + 0xc) = param_3;
  *(undefined4 *)(puVar1 + 1) = uVar3;
  puVar4 = (undefined4 *)FLinearColor::ToFColor(&local_28,local_res18,1);
  uVar3 = *puVar4;
  *(undefined4 *)((longlong)puVar1 + 0x14) = param_5;
  *(undefined4 *)(puVar1 + 2) = uVar3;
  return;
}



// FUNCTION 1422e33b0 FUN_1422e33b0 body=303 status=ok
// SIG undefined FUN_1422e33b0(void)

void FUN_1422e33b0(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 local_res8;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  uint local_b8;
  undefined1 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  uVar1 = (**(code **)(*param_1 + 0x148))();
  lVar2 = UWorld::GetAudioDevice(uVar1);
  if (lVar2 != 0) {
    FUN_1422e0480(&local_c8,param_1);
    uVar4 = (uint)local_b0;
    local_28 = 0;
    local_18 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x70,local_48);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_FUN_1450377e0;
      puVar3[1] = lVar2;
      *(undefined4 *)(puVar3 + 3) = local_c0;
      *(undefined4 *)(puVar3 + 2) = local_c8;
      *(undefined4 *)((longlong)puVar3 + 0x14) = local_c4;
      *(uint *)(puVar3 + 4) = *(uint *)(puVar3 + 4) & 0xfffffffe;
      *(uint *)(puVar3 + 4) = *(uint *)(puVar3 + 4) | ((uVar4 ^ local_b8) & 1 ^ uVar4) & 1;
      *(undefined1 *)((longlong)puVar3 + 0x24) = local_b4;
      puVar3[5] = local_b0;
      puVar3[6] = local_a8;
      *(undefined4 *)(puVar3 + 7) = local_a0;
      *(undefined4 *)((longlong)puVar3 + 0x3c) = local_9c;
      *(undefined4 *)(puVar3 + 8) = local_98;
      *(undefined4 *)((longlong)puVar3 + 0x44) = uStack_94;
      *(undefined4 *)(puVar3 + 9) = uStack_90;
      *(undefined4 *)((longlong)puVar3 + 0x4c) = uStack_8c;
      puVar3[10] = local_88;
      puVar3[0xb] = uStack_80;
      *(undefined4 *)(puVar3 + 0xc) = local_78;
      puVar3[0xd] = local_70;
    }
    local_58[0] = &LAB_1422e7400;
    FUN_1422f8a30(local_58,local_res8);
  }
  return;
}



// FUNCTION 1422e34e0 FUN_1422e34e0 body=116 status=ok
// SIG undefined FUN_1422e34e0(void)

void FUN_1422e34e0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  plVar1 = *(longlong **)(param_1 + 0x90);
  uVar2 = (longlong)*(int *)(param_1 + 0x98) & 0x1fffffffffffffff;
  if (plVar1 + *(int *)(param_1 + 0x98) < plVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FUN_1422c0bf0(*plVar1,param_2);
      }
      plVar1 = plVar1 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



// FUNCTION 1422e3560 FUN_1422e3560 body=375 status=ok
// SIG undefined FUN_1422e3560(void)

void FUN_1422e3560(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  do {
    if (lVar1 == 0) {
      return;
    }
    lVar7 = UBlueprintGeneratedClass::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      lVar7 = *(longlong *)(lVar1 + 0x248);
      if (lVar7 != 0) {
        plVar9 = (longlong *)(*(int *)(lVar7 + 0x44) + param_1);
        lVar8 = *plVar9;
        if (lVar8 != 0) {
          lVar10 = *(longlong *)(param_2 + 0x10);
          if (lVar10 == 0) {
            FReferenceCollector::CreatePersistentFrameReferenceCollectorArchive(param_2);
            lVar8 = *plVar9;
            lVar7 = *(longlong *)(lVar1 + 0x248);
            lVar10 = *(longlong *)(param_2 + 0x10);
          }
          uVar2 = *(undefined8 *)(lVar10 + 0x90);
          uVar3 = *(undefined8 *)(lVar10 + 0x78);
          uVar4 = *(undefined8 *)(lVar10 + 0x98);
          uVar5 = *(undefined8 *)(lVar10 + 0xa0);
          *(undefined8 *)(lVar10 + 0x90) = *(undefined8 *)(lVar1 + 0x250);
          *(longlong *)(lVar10 + 0xa0) = lVar8;
          *(longlong *)(lVar10 + 0x98) = param_1;
          *(longlong *)(lVar10 + 0x78) = lVar7;
          (**(code **)(**(longlong **)(lVar1 + 0x250) + 0x298))
                    (*(longlong **)(lVar1 + 0x250),lVar10,*plVar9);
          *(undefined8 *)(lVar10 + 0xa0) = uVar5;
          *(undefined8 *)(lVar10 + 0x90) = uVar2;
          *(undefined8 *)(lVar10 + 0x78) = uVar3;
          *(undefined8 *)(lVar10 + 0x98) = uVar4;
        }
      }
    }
    else if ((*(uint *)(lVar1 + 0xb4) >> 7 & 1) != 0) {
      (**(code **)(lVar1 + 0xa8))(param_1,param_2);
      return;
    }
    lVar1 = *(longlong *)(lVar1 + 0x30);
  } while( true );
}



// FUNCTION 1422e36e0 FUN_1422e36e0 body=152 status=ok
// SIG undefined FUN_1422e36e0(void)

void FUN_1422e36e0(longlong param_1,int param_2,char param_3,char param_4)

{
  if (param_4 == '\0') {
    if (param_3 == '\0') {
      if (*(int *)(param_1 + 0xc) < (param_2 * 2 + 19999 + *(int *)(param_1 + 0x10)) / 20000) {
        TArray<void_*,FDefaultAllocator>::ResizeTo();
        return;
      }
    }
    else {
      if (*(int *)(param_1 + 0x34) < *(int *)(param_1 + 0x30) + param_2) {
        TArray<float,FDefaultAllocator>::ResizeTo();
      }
      if (*(int *)(param_1 + 0x44) < param_2 * 3 + *(int *)(param_1 + 0x40)) {
        TArray<FInterpCurvePoint<FVector>,FDefaultAllocator>::ResizeTo();
        return;
      }
    }
  }
  else if (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0x50) + param_2 * 2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo();
  }
  return;
}



// FUNCTION 1422e37a0 FUN_1422e37a0 body=292 status=ok
// SIG undefined FUN_1422e37a0(void)

void FUN_1422e37a0(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                  longlong *param_5,undefined8 *param_6,undefined4 param_7,undefined4 param_8,
                  float param_9,undefined4 param_10,float param_11,undefined1 param_12)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  
  iVar2 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = iVar2 + 1;
  if (*(int *)(param_1 + 100) < iVar2 + 1) {
    TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 0x58),iVar2);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar2 * 0x48);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
  }
  *puVar1 = *param_2;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(puVar1 + 2) = param_4;
  *(undefined4 *)((longlong)puVar1 + 0xc) = param_3;
  puVar1[3] = param_5;
  uVar3 = *param_6;
  uVar4 = param_6[1];
  *(undefined4 *)(puVar1 + 6) = param_7;
  puVar1[4] = uVar3;
  puVar1[5] = uVar4;
  *(undefined4 *)((longlong)puVar1 + 0x34) = param_8;
  if (param_9 == 0.0) {
    uVar5 = (**(code **)(*param_5 + 0x40))(param_5);
    param_9 = (float)uVar5;
  }
  *(float *)(puVar1 + 7) = param_9;
  *(undefined4 *)((longlong)puVar1 + 0x3c) = param_10;
  if (param_11 == 0.0) {
    uVar5 = (**(code **)(*param_5 + 0x48))(param_5);
    *(float *)(puVar1 + 8) = (float)uVar5;
  }
  else {
    *(float *)(puVar1 + 8) = param_11;
  }
  *(undefined1 *)((longlong)puVar1 + 0x44) = param_12;
  return;
}



// FUNCTION 1422e38d0 FUN_1422e38d0 body=425 status=ok
// SIG undefined FUN_1422e38d0(void)

void FUN_1422e38d0(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  BOOL BVar5;
  longlong *plVar6;
  ulonglong uVar7;
  void *_Src;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong local_res10;
  
  plVar3 = *(longlong **)(param_2 + 0x10);
  if ((plVar3 != (longlong *)0x0) &&
     (local_res10 = param_2, cVar4 = FWaveInstance::IsStreaming(plVar3), cVar4 != '\0')) {
    plVar6 = (longlong *)UAudioSettings::GetPrivateStaticClass();
    lVar10 = plVar6[0x1f];
    if (lVar10 == 0) {
      (**(code **)(*plVar6 + 0x368))(plVar6);
      lVar10 = plVar6[0x1f];
    }
    iVar1 = *(int *)(lVar10 + 0xbc);
    BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf8));
    if (BVar5 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf8));
    }
    iVar2 = *(int *)(param_1 + 0x68);
    uVar7 = 0;
    uVar9 = uVar7;
    if (0 < iVar2) {
      do {
        if ((longlong)iVar1 <= (longlong)uVar7) break;
        plVar6 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x60) + uVar7 * 8) + 0x10);
        iVar8 = (int)uVar9;
        if (((plVar6 == (longlong *)0x0) || (lVar10 = *plVar6, lVar10 == 0)) ||
           (*(int *)(lVar10 + 0xac) < *(int *)(*plVar3 + 0xac))) {
          if (iVar8 != -1) {
            iVar2 = *(int *)(param_1 + 0x68);
            *(int *)(param_1 + 0x68) = iVar2 + 1;
            if (*(int *)(param_1 + 0x6c) < iVar2 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (param_1 + 0x60,iVar2);
            }
            _Src = (void *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar8 * 8);
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)_Src + 8),_Src,(longlong)(iVar2 - iVar8) << 3);
            *(longlong *)((longlong)iVar8 * 8 + *(longlong *)(param_1 + 0x60)) = param_2;
            goto LAB_1422e39ca;
          }
          break;
        }
        uVar7 = uVar7 + 1;
        uVar9 = (ulonglong)(iVar8 + 1);
      } while ((longlong)uVar7 < (longlong)iVar2);
    }
    if (iVar2 < iVar1) {
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x60,&local_res10);
    }
LAB_1422e39ca:
    for (lVar10 = (longlong)(*(int *)(param_1 + 0x68) + -1); iVar1 <= lVar10; lVar10 = lVar10 + -1)
    {
      (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x60) + lVar10 * 8) + 0x38))();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf8));
  }
  return;
}



// FUNCTION 1422e3a80 FUN_1422e3a80 body=512 status=ok
// SIG undefined FUN_1422e3a80(void)

void FUN_1422e3a80(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar2;
  undefined4 *puVar3;
  char cVar4;
  BOOL BVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong local_res10;
  int local_res18 [2];
  undefined1 local_res20 [8];
  longlong *local_48;
  longlong *local_40;
  longlong **local_38;
  
  local_res10 = param_2;
  cVar4 = USoundWave::IsStreaming(param_2);
  if (cVar4 == '\0') {
    return;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xf8);
  BVar5 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar5 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  plVar1 = (longlong *)(param_1 + 0x10);
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(plVar1,local_res18,local_res10);
  if (((local_res18[0] == -1) || (lVar2 = *plVar1 + (longlong)local_res18[0] * 0x18, lVar2 == 0)) ||
     (*(longlong *)(lVar2 + 8) == 0)) {
    plVar7 = (longlong *)operator_new(0x58);
    plVar8 = (longlong *)0x0;
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = 0;
      *(undefined4 *)(plVar7 + 1) = 0;
      plVar7[2] = 0;
      plVar7[3] = 0;
      plVar7[4] = 0;
      plVar7[5] = 0;
      plVar7[6] = 0;
      plVar7[7] = 0;
      plVar7[8] = 0;
      plVar7[10] = 0;
      plVar8 = plVar7;
    }
    local_48 = plVar8;
    if ((local_res10 != 0) && (*(int *)(*(longlong *)(local_res10 + 0x1e8) + 0x18) != 0)) {
      *plVar8 = local_res10;
      plVar8[10] = param_1;
      *(undefined4 *)(plVar8 + 3) = 0;
      if (*(int *)((longlong)plVar8 + 0x1c) < 4) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
                  (plVar8 + 2,4);
      }
      puVar3 = (undefined4 *)**(undefined8 **)(*(longlong *)(*plVar8 + 0x1e8) + 0x10);
      iVar6 = FStreamingWaveData::AddNewLoadedChunk(plVar8,*puVar3,puVar3[1]);
      *(undefined4 *)((longlong)iVar6 * 0x20 + plVar8[2] + 0x1c) = 0;
      cVar4 = USoundWave::GetChunkData(*plVar8,0);
      if (cVar4 != '\0') {
        iVar6 = (int)plVar8[6];
        *(int *)(plVar8 + 6) = iVar6 + 1;
        if (*(int *)((longlong)plVar8 + 0x34) < iVar6 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar8 + 5,iVar6);
        }
        *(undefined4 *)(plVar8[5] + (longlong)iVar6 * 4) = 0;
        iVar6 = (int)plVar8[8];
        *(int *)(plVar8 + 8) = iVar6 + 1;
        if (*(int *)((longlong)plVar8 + 0x44) < iVar6 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar8 + 7,iVar6);
        }
        *(undefined4 *)(plVar8[7] + (longlong)iVar6 * 4) = 0;
        local_40 = &local_res10;
        local_38 = &local_48;
        FUN_1405c0510(plVar1,local_res20,&local_40,0);
        goto LAB_1422e3c67;
      }
    }
    if (local_48 != (longlong *)0x0) {
      FStreamingWaveData::_scalar_deleting_destructor_(local_48,1);
    }
  }
LAB_1422e3c67:
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 1422e3c80 AddTriangle body=81 status=ok
// SIG undefined AddTriangle(void)

void FBatchedElements::AddTriangle(void)

{
  FUN_1422e3d20();
  return;
}



// FUNCTION 1422e3ce0 AddTriangle body=54 status=ok
// SIG undefined AddTriangle(void)

void FBatchedElements::AddTriangle(void)

{
  FUN_1422e3d20();
  return;
}



// FUNCTION 1422e3d20 FUN_1422e3d20 body=909 status=ok
// SIG undefined FUN_1422e3d20(void)

void FUN_1422e3d20(longlong param_1,int param_2,int param_3,int param_4,longlong param_5,
                  longlong param_6,int param_7,uint *param_8)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  
  piVar10 = (int *)0x0;
  if (0 < *(int *)(param_1 + 0x138)) {
    piVar8 = piVar10;
    piVar7 = piVar10;
    piVar9 = piVar10;
    lVar6 = *(longlong *)(param_1 + 0x130);
    if (*(longlong *)(param_1 + 0x130) == 0) {
      lVar6 = param_1 + 0x70;
    }
    do {
      if (((((*(longlong *)((longlong)piVar8 + lVar6 + 0x28) == param_6) &&
            (*(longlong *)((longlong)piVar8 + lVar6 + 0x30) == param_5)) &&
           (*(int *)((longlong)piVar8 + lVar6 + 0x38) == param_7)) &&
          ((*(int *)((longlong)piVar8 + lVar6 + 0x20) + 3 < *(int *)(param_1 + 0x68) &&
           (uVar11 = *(uint *)((longlong)piVar8 + lVar6 + 0x3c) & 1, (*param_8 & 1) == uVar11)))) &&
         ((uVar11 == 0 ||
          ((((*(float *)((longlong)piVar8 + lVar6 + 0x40) == (float)param_8[1] &&
             (*(float *)((longlong)piVar8 + lVar6 + 0x44) == (float)param_8[2])) &&
            ((*(float *)((longlong)piVar8 + lVar6 + 0x48) == (float)param_8[3] &&
             (((*(float *)((longlong)piVar8 + lVar6 + 0x4c) == (float)param_8[4] &&
               (*(float *)((longlong)piVar8 + lVar6 + 0x50) == (float)param_8[5])) &&
              (*(float *)((longlong)piVar8 + lVar6 + 0x54) == (float)param_8[6])))))) &&
           ((*(float *)((longlong)piVar8 + lVar6 + 0x58) == (float)param_8[7] &&
            (*(float *)((longlong)piVar8 + lVar6 + 0x5c) == (float)param_8[8])))))))) {
        iVar5 = *(int *)((longlong)piVar8 + lVar6);
        if ((-1 < param_2 - iVar5) &&
           (((iVar4 = *(int *)(param_1 + 0x6c), param_2 - iVar5 < iVar4 && (-1 < param_3 - iVar5))
            && ((param_3 - iVar5 < iVar4 && ((-1 < param_4 - iVar5 && (param_4 - iVar5 < iVar4))))))
           )) {
          lVar6 = *(longlong *)(param_1 + 0x130);
          if (*(longlong *)(param_1 + 0x130) == 0) {
            lVar6 = param_1 + 0x70;
          }
          piVar8 = (int *)(lVar6 + (longlong)(int)piVar9 * 0x60);
          if (piVar8 != (int *)0x0) goto LAB_1422e3fce;
          break;
        }
      }
      piVar7 = (int *)((longlong)piVar7 + 1);
      piVar8 = piVar8 + 0x18;
      piVar9 = (int *)(ulonglong)((int)piVar9 + 1);
    } while ((longlong)piVar7 < (longlong)*(int *)(param_1 + 0x138));
  }
  uVar11 = param_2 - param_3 >> 0x1f;
  if (((int)((param_2 - param_3 ^ uVar11) - uVar11) < *(int *)(param_1 + 0x6c)) &&
     (uVar11 = param_2 - param_4 >> 0x1f,
     (int)((param_2 - param_4 ^ uVar11) - uVar11) < *(int *)(param_1 + 0x6c))) {
    iVar5 = *(int *)(param_1 + 0x138);
    *(int *)(param_1 + 0x138) = iVar5 + 1;
    if (*(int *)(param_1 + 0x13c) < iVar5 + 1) {
      TArray<FBatchedElements::FBatchedMeshElement,TInlineAllocator<2,FDefaultAllocator>_>::
      ResizeGrow(param_1 + 0x70,iVar5);
    }
    lVar6 = *(longlong *)(param_1 + 0x130);
    if (*(longlong *)(param_1 + 0x130) == 0) {
      lVar6 = param_1 + 0x70;
    }
    piVar7 = (int *)((longlong)iVar5 * 0x60 + lVar6);
    piVar8 = piVar10;
    if (piVar7 != (int *)0x0) {
      piVar7[6] = 0;
      piVar7[7] = 0;
      piVar7[8] = 0;
      piVar7[9] = 0;
      piVar7[0xc] = 0;
      piVar7[0xd] = 0;
      piVar7[0xf] = piVar7[0xf] & 0xfffffffe;
      piVar7[0x10] = 0;
      piVar7[0x11] = 0;
      piVar7[0x12] = 0;
      piVar7[0x13] = 0;
      piVar7[0x14] = 0;
      piVar7[0x15] = 0;
      piVar7[0x16] = 0;
      piVar7[0x17] = 0;
      piVar8 = piVar7;
    }
    *(longlong *)(piVar8 + 10) = param_6;
    puVar1 = *(undefined8 **)(piVar8 + 0xc);
    *(longlong *)(piVar8 + 0xc) = param_5;
    if (param_5 != 0) {
      *(int *)(param_5 + 8) = *(int *)(param_5 + 8) + 1;
    }
    if (puVar1 != (undefined8 *)0x0) {
      piVar10 = (int *)(puVar1 + 1);
      *piVar10 = *piVar10 + -1;
      if (*piVar10 == 0) {
        (**(code **)*puVar1)(puVar1,1);
      }
    }
    piVar8[0xe] = param_7;
    uVar11 = param_8[1];
    uVar2 = param_8[2];
    uVar3 = param_8[3];
    iVar5 = param_3;
    if (param_2 <= param_3) {
      iVar5 = param_2;
    }
    piVar8[0xf] = *param_8;
    piVar8[0x10] = uVar11;
    piVar8[0x11] = uVar2;
    piVar8[0x12] = uVar3;
    uVar11 = param_8[5];
    uVar2 = param_8[6];
    uVar3 = param_8[7];
    piVar8[0x13] = param_8[4];
    piVar8[0x14] = uVar11;
    piVar8[0x15] = uVar2;
    piVar8[0x16] = uVar3;
    piVar8[0x17] = param_8[8];
    iVar4 = param_4;
    if (iVar5 <= param_4) {
      iVar4 = iVar5;
    }
    piVar8[1] = param_2;
    *piVar8 = iVar4;
LAB_1422e3fce:
    iVar5 = piVar8[8];
    piVar10 = piVar8 + 2;
    iVar4 = *piVar8;
    piVar8[8] = iVar5 + 1;
    if (piVar8[9] < iVar5 + 1) {
      TArray<unsigned_short,TInlineAllocator<6,FDefaultAllocator>_>::ResizeGrow(piVar10,iVar5);
    }
    piVar7 = *(int **)(piVar8 + 6);
    if (*(int **)(piVar8 + 6) == (int *)0x0) {
      piVar7 = piVar10;
    }
    *(short *)((longlong)piVar7 + (longlong)iVar5 * 2) = (short)param_2 - (short)iVar4;
    iVar5 = piVar8[8];
    iVar4 = *piVar8;
    piVar8[8] = iVar5 + 1;
    if (piVar8[9] < iVar5 + 1) {
      TArray<unsigned_short,TInlineAllocator<6,FDefaultAllocator>_>::ResizeGrow(piVar10,iVar5);
    }
    piVar7 = *(int **)(piVar8 + 6);
    if (*(int **)(piVar8 + 6) == (int *)0x0) {
      piVar7 = piVar10;
    }
    *(short *)((longlong)piVar7 + (longlong)iVar5 * 2) = (short)param_3 - (short)iVar4;
    iVar5 = piVar8[8];
    iVar4 = *piVar8;
    piVar8[8] = iVar5 + 1;
    if (piVar8[9] < iVar5 + 1) {
      TArray<unsigned_short,TInlineAllocator<6,FDefaultAllocator>_>::ResizeGrow(piVar10,iVar5);
    }
    piVar7 = *(int **)(piVar8 + 6);
    if (*(int **)(piVar8 + 6) == (int *)0x0) {
      piVar7 = piVar10;
    }
    *(short *)((longlong)piVar7 + (longlong)iVar5 * 2) = (short)param_4 - (short)iVar4;
    iVar5 = piVar8[1];
    if (piVar8[1] <= param_2) {
      iVar5 = param_2;
    }
    if (param_3 <= iVar5) {
      param_3 = iVar5;
    }
    if (param_4 <= param_3) {
      param_4 = param_3;
    }
    piVar8[1] = param_4;
  }
  return;
}



// FUNCTION 1422e40b0 FUN_1422e40b0 body=213 status=ok
// SIG undefined FUN_1422e40b0(void)

undefined4
FUN_1422e40b0(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4,
             undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined4 local_res8 [2];
  
  iVar4 = *(int *)(param_1 + 0x1f8);
  uVar5 = *(undefined4 *)(param_1 + 0x1f8);
  iVar6 = iVar4 + 1;
  *(int *)(param_1 + 0x1f8) = iVar6;
  if (*(int *)(param_1 + 0x1fc) < iVar6) {
    FUN_1422f8760(param_1 + 0x140);
  }
  lVar7 = *(longlong *)(param_1 + 0x1f0);
  if (*(longlong *)(param_1 + 0x1f0) == 0) {
    lVar7 = param_1 + 0x140;
  }
  puVar8 = (undefined4 *)(lVar7 + (longlong)iVar4 * 0x2c);
  if (puVar8 != (undefined4 *)0x0) {
    uVar1 = param_2[1];
    uVar2 = param_2[3];
    uVar3 = param_2[2];
    *puVar8 = *param_2;
    puVar8[1] = uVar1;
    puVar8[2] = uVar3;
    puVar8[3] = uVar2;
    *(undefined8 *)(puVar8 + 4) = *param_3;
    uVar1 = param_4[1];
    uVar2 = param_4[2];
    uVar3 = param_4[3];
    local_res8[0] = param_5;
    puVar8[6] = *param_4;
    puVar8[7] = uVar1;
    puVar8[8] = uVar2;
    puVar8[9] = uVar3;
    FHitProxyId::GetColor(local_res8,puVar8 + 10);
  }
  return uVar5;
}



// FUNCTION 1422e4190 AdvanceAnim body=470 status=ok
// SIG undefined AdvanceAnim(void)

void UCameraAnimInst::AdvanceAnim(longlong param_1,float param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if ((lVar1 != 0) && (uVar4 = *(uint *)(param_1 + 0x3c), (uVar4 & 1) == 0)) {
    bVar3 = false;
    fVar5 = param_2 * *(float *)(param_1 + 0x50) + *(float *)(param_1 + 0x38);
    *(float *)(param_1 + 0x38) = fVar5;
    if ((uVar4 & 8) != 0) {
      *(float *)(param_1 + 0x48) = param_2 + *(float *)(param_1 + 0x48);
    }
    if ((uVar4 & 0x10) != 0) {
      *(float *)(param_1 + 0x4c) = param_2 + *(float *)(param_1 + 0x4c);
    }
    fVar6 = *(float *)(lVar1 + 0x30);
    if ((uVar4 & 4) == 0) {
      if (fVar5 <= fVar6) {
        if (fVar6 - *(float *)(param_1 + 0x44) < fVar5) {
          uVar4 = uVar4 | 0x10;
          *(uint *)(param_1 + 0x3c) = uVar4;
          *(float *)(param_1 + 0x4c) =
               fVar5 - (*(float *)(lVar1 + 0x30) - *(float *)(param_1 + 0x44));
        }
      }
      else {
        bVar3 = true;
      }
    }
    else if (fVar6 < fVar5) {
      *(float *)(param_1 + 0x38) = fVar5 - fVar6;
    }
    if (((uVar4 & 8) != 0) &&
       ((*(float *)(param_1 + 0x40) < *(float *)(param_1 + 0x48) ||
        (*(float *)(param_1 + 0x40) == 0.0)))) {
      uVar4 = uVar4 & 0xfffffff7;
      *(uint *)(param_1 + 0x3c) = uVar4;
    }
    if (((uVar4 & 0x10) != 0) && (*(float *)(param_1 + 0x44) < *(float *)(param_1 + 0x4c))) {
      *(float *)(param_1 + 0x4c) = *(float *)(param_1 + 0x44);
      bVar3 = true;
    }
    fVar5 = 1.0;
    if ((uVar4 & 8) == 0) {
      fVar6 = 1.0;
    }
    else {
      fVar6 = *(float *)(param_1 + 0x48) / *(float *)(param_1 + 0x40);
    }
    if ((uVar4 & 0x10) != 0) {
      fVar5 = 1.0 - *(float *)(param_1 + 0x4c) / *(float *)(param_1 + 0x44);
    }
    if (fVar6 <= fVar5) {
      fVar5 = fVar6;
    }
    fVar6 = *(float *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x58) = 0x3f800000;
    *(float *)(param_1 + 0x5c) = fVar5 * *(float *)(param_1 + 0x54) * fVar6;
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x28);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x278))
                (plVar2,*(undefined4 *)(param_1 + 0x38),*(longlong *)(param_1 + 0x30),0,param_3);
      uVar4 = *(uint *)(param_1 + 0x3c);
    }
    if ((uVar4 & 2) != 0) {
      if (bVar3) {
        plVar2 = *(longlong **)(param_1 + 0x30);
        if (plVar2[5] != 0) {
          (**(code **)(*plVar2 + 0x2a0))(plVar2,1);
          *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x28) = 0;
          uVar4 = *(uint *)(param_1 + 0x3c);
        }
        *(undefined8 *)(param_1 + 0x68) = 0;
        *(uint *)(param_1 + 0x3c) = uVar4 | 1;
        *(undefined8 *)(param_1 + 0x70) = 0;
      }
      else if ((0.0 < *(float *)(param_1 + 0x60)) &&
              (param_2 = *(float *)(param_1 + 0x60) - param_2, *(float *)(param_1 + 0x60) = param_2,
              param_2 <= 0.0)) {
        Stop(param_1,0);
      }
    }
  }
  return;
}



// FUNCTION 1422e4370 FUN_1422e4370 body=4542 status=ok
// SIG undefined FUN_1422e4370(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1422e4370(longlong param_1,float *param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  undefined8 *puVar8;
  int iVar9;
  float fVar14;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar15;
  float fVar19;
  float fVar20;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar18 [16];
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
  undefined1 auStack_208 [32];
  undefined1 local_1e8;
  undefined8 local_1d8;
  float fStack_1d0;
  float fStack_1cc;
  undefined8 local_1c8;
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
  undefined4 local_178;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined1 local_158 [64];
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
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  if ((0.0 < *(float *)(param_1 + 0x5c)) &&
     (lVar5 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x278))(), lVar5 != 0)) {
    lVar6 = FUN_14290f280();
    fVar36 = fRam0000000146aef5b8;
    fVar32 = fRam0000000146aef5b4;
    fVar29 = _DAT_146aef5b0;
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      if ((*(byte *)(*(longlong *)(param_1 + 0x28) + 0x50) & 1) != 0) {
        if (*(longlong *)(lVar5 + 0x168) == 0) {
          pfVar7 = (float *)&DAT_1468b5b70;
        }
        else {
          pfVar7 = (float *)(*(longlong *)(lVar5 + 0x168) + 0x210);
        }
        fVar38 = pfVar7[4];
        fVar26 = pfVar7[5];
        local_1c8 = *(undefined8 *)(pfVar7 + 4);
        fStack_1c0 = pfVar7[6];
        fStack_1bc = pfVar7[7];
        auVar17 = *(undefined1 (*) [16])(param_1 + 0xf0);
        fVar27 = auVar17._0_4_;
        fVar30 = auVar17._4_4_;
        fVar33 = auVar17._8_4_;
        fVar37 = auVar17._12_4_;
        auVar16._0_4_ = (float)((uint)fVar27 & _DAT_146aef720);
        auVar16._4_4_ = (float)((uint)fVar30 & uRam0000000146aef724);
        auVar16._8_4_ = (float)((uint)fVar33 & uRam0000000146aef728);
        auVar16._12_4_ = (float)((uint)fVar37 & uRam0000000146aef72c);
        fVar21 = *pfVar7;
        fVar23 = pfVar7[1];
        fVar50 = pfVar7[2];
        fVar35 = pfVar7[3];
        auVar13 = *(undefined1 (*) [16])(pfVar7 + 8);
        fVar24 = auVar13._0_4_;
        fVar14 = auVar13._4_4_;
        fVar52 = auVar13._8_4_;
        auVar10._4_4_ = -(uint)(fRam0000000146aef784 < auVar16._4_4_);
        auVar10._0_4_ = -(uint)(_DAT_146aef780 < auVar16._0_4_);
        auVar10._8_4_ = -(uint)(fRam0000000146aef788 < auVar16._8_4_);
        auVar10._12_4_ = -(uint)(fRam0000000146aef78c < auVar16._12_4_);
        iVar4 = movmskps((int)pfVar7,auVar10);
        fVar43 = _DAT_1468b5b70;
        fVar45 = fRam00000001468b5b74;
        fVar47 = fRam00000001468b5b78;
        fVar49 = fRam00000001468b5b7c;
        fVar15 = _DAT_1468b5b90;
        fVar19 = fRam00000001468b5b94;
        fVar20 = fRam00000001468b5b98;
        fVar22 = fRam00000001468b5b9c;
        fVar39 = _DAT_1468b5b80;
        fVar40 = fRam00000001468b5b84;
        fVar41 = fRam00000001468b5b88;
        fVar42 = fRam00000001468b5b8c;
        if (iVar4 != 0) {
          fVar43 = *(float *)(param_1 + 0xd0) * _DAT_146aef790;
          fVar45 = *(float *)(param_1 + 0xd4) * fRam0000000146aef794;
          fVar47 = *(float *)(param_1 + 0xd8) * fRam0000000146aef798;
          fVar49 = *(float *)(param_1 + 0xdc) * fRam0000000146aef79c;
          auVar17 = rcpps(auVar16,auVar17);
          fVar15 = auVar17._0_4_;
          fVar19 = auVar17._4_4_;
          fVar20 = auVar17._8_4_;
          fVar22 = auVar17._12_4_;
          fVar15 = (fVar15 + fVar15) - fVar15 * fVar15 * fVar27;
          fVar19 = (fVar19 + fVar19) - fVar19 * fVar19 * fVar30;
          fVar20 = (fVar20 + fVar20) - fVar20 * fVar20 * fVar33;
          fVar22 = (fVar22 + fVar22) - fVar22 * fVar22 * fVar37;
          fVar15 = (fVar15 + fVar15) - fVar15 * fVar15 * fVar27;
          fVar19 = (fVar19 + fVar19) - fVar19 * fVar19 * fVar30;
          fVar20 = (fVar20 + fVar20) - fVar20 * fVar20 * fVar33;
          fVar22 = (fVar22 + fVar22) - fVar22 * fVar22 * fVar37;
          fVar15 = (float)((-(uint)((float)((uint)fVar27 & _DAT_146aef720) <= _DAT_146aef780) &
                            (uint)fVar15 ^ (uint)fVar15) & _DAT_146aef5c0);
          fVar19 = (float)((-(uint)((float)((uint)fVar30 & uRam0000000146aef724) <=
                                   fRam0000000146aef784) & (uint)fVar19 ^ (uint)fVar19) &
                          uRam0000000146aef5c4);
          fVar20 = (float)((-(uint)((float)((uint)fVar33 & uRam0000000146aef728) <=
                                   fRam0000000146aef788) & (uint)fVar20 ^ (uint)fVar20) &
                          uRam0000000146aef5c8);
          fVar22 = (float)((-(uint)((float)((uint)fVar37 & uRam0000000146aef72c) <=
                                   fRam0000000146aef78c) & (uint)fVar22 ^ (uint)fVar22) &
                          uRam0000000146aef5cc);
          fVar39 = *(float *)(param_1 + 0xe0) * fVar15;
          fVar40 = *(float *)(param_1 + 0xe4) * fVar19;
          fVar41 = *(float *)(param_1 + 0xe8) * fVar20;
          fVar42 = *(float *)(param_1 + 0xec) * fVar22;
          fVar27 = fVar41 * fVar45 - fVar40 * fVar47;
          fVar30 = fVar39 * fVar47 - fVar41 * fVar43;
          fVar33 = fVar40 * fVar43 - fVar39 * fVar45;
          fVar37 = fVar42 * fVar49 - fVar42 * fVar49;
          fVar27 = fVar27 + fVar27;
          fVar30 = fVar30 + fVar30;
          fVar33 = fVar33 + fVar33;
          fVar37 = fVar37 + fVar37;
          fVar39 = (float)((uint)(0.0 - ((fVar33 * fVar45 - fVar30 * fVar47) +
                                        fVar49 * fVar27 + fVar39)) & _DAT_146aef5c0);
          fVar40 = (float)((uint)(0.0 - ((fVar27 * fVar47 - fVar33 * fVar43) +
                                        fVar49 * fVar30 + fVar40)) & uRam0000000146aef5c4);
          fVar41 = (float)((uint)(0.0 - ((fVar30 * fVar43 - fVar27 * fVar45) +
                                        fVar49 * fVar33 + fVar41)) & uRam0000000146aef5c8);
          fVar42 = (float)((uint)(0.0 - ((fVar37 * fVar49 - fVar37 * fVar49) +
                                        fVar49 * fVar37 + fVar42)) & uRam0000000146aef5cc);
        }
        auVar17._4_4_ = fVar19;
        auVar17._0_4_ = fVar15;
        auVar17._8_4_ = fVar20;
        auVar17._12_4_ = fVar22;
        auVar17 = minps(auVar13,auVar17);
        auVar11._4_4_ = -(uint)(auVar17._4_4_ < fRam0000000146aef854);
        auVar11._0_4_ = -(uint)(auVar17._0_4_ < _DAT_146aef850);
        auVar11._8_4_ = -(uint)(auVar17._8_4_ < fRam0000000146aef858);
        auVar11._12_4_ = -(uint)(auVar17._12_4_ < fRam0000000146aef85c);
        iVar4 = movmskps(iVar4,auVar11);
        if (iVar4 == 0) {
          fVar38 = fVar15 * fVar38;
          fVar26 = fVar19 * fVar26;
          fVar30 = fVar20 * fStack_1c0;
          fVar33 = fVar22 * fStack_1bc;
          local_118 = fVar43 * fVar35 * _DAT_146aef820 + fVar49 * fVar21 +
                      fVar45 * fVar50 * _DAT_146aef810 + fVar47 * fVar23 * _DAT_146aef800;
          fStack_114 = fVar43 * fVar50 * fRam0000000146aef824 + fVar49 * fVar23 +
                       fVar45 * fVar35 * fRam0000000146aef814 +
                       fVar47 * fVar21 * fRam0000000146aef804;
          fStack_110 = fVar43 * fVar23 * fRam0000000146aef828 + fVar49 * fVar50 +
                       fVar45 * fVar21 * fRam0000000146aef818 +
                       fVar47 * fVar35 * fRam0000000146aef808;
          fStack_10c = fVar43 * fVar21 * fRam0000000146aef82c + fVar49 * fVar35 +
                       fVar45 * fVar23 * fRam0000000146aef81c +
                       fVar47 * fVar50 * fRam0000000146aef80c;
          fVar29 = fVar30 * fVar45 - fVar26 * fVar47;
          fVar32 = fVar38 * fVar47 - fVar30 * fVar43;
          fVar36 = fVar26 * fVar43 - fVar38 * fVar45;
          fVar27 = fVar33 * fVar49 - fVar33 * fVar49;
          fVar29 = fVar29 + fVar29;
          fVar32 = fVar32 + fVar32;
          fVar36 = fVar36 + fVar36;
          fVar27 = fVar27 + fVar27;
          local_108._4_4_ = (fVar29 * fVar47 - fVar36 * fVar43) + fVar49 * fVar32 + fVar26 + fVar40;
          local_108._0_4_ = (fVar36 * fVar45 - fVar32 * fVar47) + fVar49 * fVar29 + fVar38 + fVar39;
          fStack_100 = (fVar32 * fVar43 - fVar29 * fVar45) + fVar49 * fVar36 + fVar30 + fVar41;
          fStack_fc = (fVar27 * fVar49 - fVar27 * fVar49) + fVar49 * fVar27 + fVar33 + fVar42;
        }
        else {
          fVar30 = fVar45 + fVar45;
          fVar33 = fVar47 + fVar47;
          fVar25 = (fVar43 + fVar43) * fVar43;
          fVar27 = (fVar43 + fVar43) * fVar49;
          fVar42 = fVar23 + fVar23;
          fVar37 = fVar50 + fVar50;
          fVar51 = (fVar33 * fVar49 + fVar30 * fVar43) * fVar15;
          fVar53 = (fVar27 + fVar33 * fVar45) * fVar19;
          fVar54 = (fVar30 * fVar49 + fVar33 * fVar43) * fVar20;
          fVar28 = fVar19 * (fVar30 * fVar43 - fVar33 * fVar49);
          fVar31 = fVar20 * (fVar33 * fVar45 - fVar27);
          fVar34 = fVar15 * (fVar33 * fVar43 - fVar30 * fVar49);
          fVar49 = (fVar21 + fVar21) * fVar21;
          fVar27 = (float)((uint)((_DAT_146aef5b0 - (fVar33 * fVar47 + fVar30 * fVar45)) * fVar15) &
                          _DAT_146aef5c0);
          fVar33 = (float)((uint)((fRam0000000146aef5b4 - (fVar33 * fVar47 + fVar25)) * fVar19) &
                          uRam0000000146aef5c4);
          fVar43 = (float)((uint)((fRam0000000146aef5b8 - (fVar30 * fVar45 + fVar25)) * fVar20) &
                          uRam0000000146aef5c8);
          fVar45 = (float)((uint)((fRam0000000146aef5bc - (fVar25 + fVar25)) * fVar22) &
                          uRam0000000146aef5cc);
          fVar30 = (fVar21 + fVar21) * fVar35;
          fVar44 = (fVar37 * fVar35 + fVar42 * fVar21) * fVar24;
          fVar46 = (fVar30 + fVar37 * fVar23) * fVar14;
          fVar48 = (fVar42 * fVar35 + fVar37 * fVar21) * fVar52;
          fVar47 = fVar14 * (fVar42 * fVar21 - fVar37 * fVar35);
          fVar25 = fVar52 * (fVar37 * fVar23 - fVar30);
          fVar35 = fVar24 * (fVar37 * fVar21 - fVar42 * fVar35);
          fVar30 = (float)((uint)((_DAT_146aef5b0 - (fVar37 * fVar50 + fVar42 * fVar23)) * fVar24) &
                          _DAT_146aef5c0);
          fVar37 = (float)((uint)((fRam0000000146aef5b4 - (fVar37 * fVar50 + fVar49)) * fVar14) &
                          uRam0000000146aef5c4);
          fVar21 = (float)((uint)((fRam0000000146aef5b8 - (fVar42 * fVar23 + fVar49)) * fVar52) &
                          uRam0000000146aef5c8);
          fVar23 = (float)((uint)((fRam0000000146aef5bc - (fVar49 + fVar49)) * auVar13._12_4_) &
                          uRam0000000146aef5cc);
          local_1b8 = fVar44 * fVar28 + fVar30 * fVar27 + fVar35 * fVar54 + fVar23 * fVar39;
          fStack_1b4 = fVar44 * fVar33 + fVar30 * fVar51 + fVar35 * fVar31 + fVar23 * fVar40;
          fStack_1b0 = fVar44 * fVar53 + fVar30 * fVar34 + fVar35 * fVar43 + fVar23 * fVar41;
          fStack_1ac = fVar44 * fVar45 + fVar30 * fVar45 + fVar35 * fVar45 +
                       fVar23 * fRam0000000146aef5bc;
          local_1a8 = fVar37 * fVar28 + fVar47 * fVar27 + fVar46 * fVar54 + fVar23 * fVar39;
          fStack_1a4 = fVar37 * fVar33 + fVar47 * fVar51 + fVar46 * fVar31 + fVar23 * fVar40;
          fStack_1a0 = fVar37 * fVar53 + fVar47 * fVar34 + fVar46 * fVar43 + fVar23 * fVar41;
          fStack_19c = fVar37 * fVar45 + fVar47 * fVar45 + fVar46 * fVar45 +
                       fVar23 * fRam0000000146aef5bc;
          local_198 = fVar25 * fVar28 + fVar48 * fVar27 + fVar21 * fVar54 + fVar23 * fVar39;
          fStack_194 = fVar25 * fVar33 + fVar48 * fVar51 + fVar21 * fVar31 + fVar23 * fVar40;
          fStack_190 = fVar25 * fVar53 + fVar48 * fVar34 + fVar21 * fVar43 + fVar23 * fVar41;
          fStack_18c = fVar25 * fVar45 + fVar48 * fVar45 + fVar21 * fVar45 +
                       fVar23 * fRam0000000146aef5bc;
          local_188 = fVar26 * fVar28 + fVar38 * fVar27 + fStack_1c0 * fVar54 +
                      fRam0000000146aef5bc * fVar39;
          fStack_184 = fVar26 * fVar33 + fVar38 * fVar51 + fStack_1c0 * fVar31 +
                       fRam0000000146aef5bc * fVar40;
          fStack_180 = fVar26 * fVar53 + fVar38 * fVar34 + fStack_1c0 * fVar43 +
                       fRam0000000146aef5bc * fVar41;
          fStack_17c = fVar26 * fVar45 + fVar38 * fVar45 + fStack_1c0 * fVar45 +
                       fRam0000000146aef5bc * fRam0000000146aef5bc;
          FMatrix::RemoveScaling(&local_1b8);
          fVar29 = (float)(-(uint)(_DAT_146aef850 <= fVar15 * fVar24) &
                           (_DAT_146aef700 ^ (uint)fVar29) ^ _DAT_146aef700);
          fVar32 = (float)(-(uint)(fRam0000000146aef854 <= fVar19 * fVar14) &
                           (uRam0000000146aef704 ^ (uint)fVar32) ^ uRam0000000146aef704);
          fVar36 = (float)(-(uint)(fRam0000000146aef858 <= fVar20 * fVar52) &
                           (uRam0000000146aef708 ^ (uint)fVar36) ^ uRam0000000146aef708);
          local_1b8 = local_1b8 * fVar29;
          fStack_1b4 = fStack_1b4 * fVar29;
          fStack_1b0 = fStack_1b0 * fVar29;
          fStack_1a4 = fStack_1a4 * fVar32;
          fStack_1a0 = fStack_1a0 * fVar32;
          local_1a8 = local_1a8 * fVar32;
          fStack_194 = fStack_194 * fVar36;
          fStack_190 = fStack_190 * fVar36;
          local_198 = local_198 * fVar36;
          FQuat::FQuat(&local_1c8,&local_1b8);
          local_178 = 0x322bcc77;
          auVar18._0_4_ = (float)local_1c8 * (float)local_1c8 + fStack_1c0 * fStack_1c0;
          auVar18._4_4_ = local_1c8._4_4_ * local_1c8._4_4_ + fStack_1bc * fStack_1bc;
          auVar18._8_4_ = fStack_1c0 * fStack_1c0 + (float)local_1c8 * (float)local_1c8;
          auVar18._12_4_ = fStack_1bc * fStack_1bc + local_1c8._4_4_ * local_1c8._4_4_;
          fVar30 = auVar18._4_4_ + auVar18._0_4_;
          fVar33 = auVar18._8_4_ + auVar18._4_4_;
          fVar37 = auVar18._12_4_ + auVar18._8_4_;
          fVar38 = auVar18._0_4_ + auVar18._12_4_;
          auVar1._4_4_ = fVar33;
          auVar1._0_4_ = fVar30;
          auVar1._8_4_ = fVar37;
          auVar1._12_4_ = fVar38;
          auVar17 = rsqrtps(auVar18,auVar1);
          fVar29 = auVar17._0_4_;
          fVar32 = auVar17._4_4_;
          fVar36 = auVar17._8_4_;
          fVar27 = auVar17._12_4_;
          fVar29 = (_DAT_146aef840 - fVar29 * fVar29 * fVar30 * _DAT_146aef840) * fVar29 + fVar29;
          fVar32 = (fRam0000000146aef844 - fVar32 * fVar32 * fVar33 * fRam0000000146aef844) * fVar32
                   + fVar32;
          fVar36 = (fRam0000000146aef848 - fVar36 * fVar36 * fVar37 * fRam0000000146aef848) * fVar36
                   + fVar36;
          fVar27 = (fRam0000000146aef84c - fVar27 * fVar27 * fVar38 * fRam0000000146aef84c) * fVar27
                   + fVar27;
          local_108._4_4_ = fStack_184;
          local_108._0_4_ = local_188;
          fStack_100 = fStack_180;
          local_118 = (float)(((uint)(((_DAT_146aef840 - fVar29 * fVar29 * fVar30 * _DAT_146aef840)
                                       * fVar29 + fVar29) * (float)local_1c8) ^ _DAT_146aef830) &
                              -(uint)(1e-08 <= fVar30) ^ _DAT_146aef830);
          fStack_114 = (float)(((uint)(((fRam0000000146aef844 -
                                        fVar32 * fVar32 * fVar33 * fRam0000000146aef844) * fVar32 +
                                       fVar32) * local_1c8._4_4_) ^ uRam0000000146aef834) &
                               -(uint)(1e-08 <= fVar33) ^ uRam0000000146aef834);
          fStack_110 = (float)(((uint)(((fRam0000000146aef848 -
                                        fVar36 * fVar36 * fVar37 * fRam0000000146aef848) * fVar36 +
                                       fVar36) * fStack_1c0) ^ uRam0000000146aef838) &
                               -(uint)(1e-08 <= fVar37) ^ uRam0000000146aef838);
          fStack_10c = (float)(((uint)(((fRam0000000146aef84c -
                                        fVar27 * fVar27 * fVar38 * fRam0000000146aef84c) * fVar27 +
                                       fVar27) * fStack_1bc) ^ uRam0000000146aef83c) &
                               -(uint)(1e-08 <= fVar38) ^ uRam0000000146aef83c);
          fStack_fc = 0.0;
        }
        fStack_ec = fVar22 * auVar13._12_4_;
        fStack_f0 = fVar20 * fVar52;
        fStack_f4 = fVar19 * fVar14;
        local_f8 = fVar15 * fVar24;
        local_1e8 = 0;
        FUN_14223d270(lVar5,&local_118,0,0);
      }
      fVar29 = *(float *)(param_1 + 0x5c);
      FRotationMatrix::FRotationMatrix(&local_1b8,param_2 + 3);
      fVar43 = fStack_17c;
      fVar35 = fStack_180;
      fVar50 = fStack_184;
      fVar23 = local_188;
      fVar21 = fStack_18c;
      fVar26 = fStack_190;
      fVar38 = fStack_194;
      fVar37 = local_198;
      fVar52 = fStack_19c;
      fVar33 = fStack_1a0;
      fVar14 = fStack_1a4;
      fVar30 = local_1a8;
      fVar24 = fStack_1ac;
      fVar27 = fStack_1b0;
      fVar36 = fStack_1b4;
      fVar32 = local_1b8;
      if (*(char *)(param_1 + 0x78) == '\0') {
        lVar6 = *(longlong *)(lVar5 + 0x168);
        if (lVar6 == 0) {
          local_1d8 = _DAT_1468b5d90;
          fStack_1d0 = DAT_1468b5d98;
        }
        else {
          local_1d8 = *(undefined8 *)(lVar6 + 0x220);
          fStack_1d0 = *(float *)(lVar6 + 0x228);
        }
        fVar45 = (float)local_1d8 * fVar29;
        fVar47 = (float)((ulonglong)local_1d8 >> 0x20) * fVar29;
        fStack_1c0 = fStack_1d0 * fVar29;
        local_1c8 = CONCAT44(fVar47,fVar45);
        fStack_1bc = 0.0;
        *param_2 = local_188 * 0.0 + fStack_1c0 * local_198 +
                   fVar47 * local_1a8 + fVar45 * local_1b8 + *param_2;
        param_2[1] = fStack_184 * 0.0 + fStack_1c0 * fStack_194 +
                     fVar47 * fStack_1a4 + fVar45 * fStack_1b4 + param_2[1];
        param_2[2] = fStack_180 * 0.0 + fStack_1c0 * fStack_190 +
                     fVar47 * fStack_1a0 + fVar45 * fStack_1b0 + param_2[2];
        lVar6 = *(longlong *)(lVar5 + 0x168);
        fVar45 = DAT_1468b5da8;
        uVar2 = DAT_1468b5da0;
        if (lVar6 != 0) {
          fVar45 = *(float *)(lVar6 + 0x210);
          local_1d8 = *(undefined8 *)(lVar6 + 0x210);
          fVar47 = *(float *)(lVar6 + 0x218);
          fStack_1cc = *(float *)(lVar6 + 0x21c);
          auVar12._4_4_ = -(uint)(*(float *)(lVar6 + 0x254) != *(float *)(lVar6 + 0x214));
          auVar12._0_4_ = -(uint)(*(float *)(lVar6 + 0x250) != fVar45);
          auVar12._8_4_ = -(uint)(*(float *)(lVar6 + 600) != fVar47);
          auVar12._12_4_ = -(uint)(*(float *)(lVar6 + 0x25c) != fStack_1cc);
          iVar4 = movmskps(fStack_1d0,auVar12);
          if (iVar4 != 0) {
            *(float *)(lVar6 + 0x250) = fVar45;
            *(float *)(lVar6 + 0x254) = *(float *)(lVar6 + 0x214);
            *(float *)(lVar6 + 600) = fVar47;
            *(float *)(lVar6 + 0x25c) = fStack_1cc;
            fStack_1d0 = fVar47;
            puVar8 = (undefined8 *)FQuat::Rotator(&local_1d8,&local_1c8);
            *(undefined8 *)(lVar6 + 0x260) = *puVar8;
            *(undefined4 *)(lVar6 + 0x268) = *(undefined4 *)(puVar8 + 1);
          }
          fVar45 = *(float *)(lVar6 + 0x268);
          uVar2 = *(undefined8 *)(lVar6 + 0x260);
        }
        fStack_1d0 = fVar45 * fVar29;
        local_1d8 = CONCAT44((float)((ulonglong)uVar2 >> 0x20) * fVar29,(float)uVar2 * fVar29);
        local_1c8 = uVar2;
        fStack_1c0 = fVar45;
        FRotationMatrix::FRotationMatrix(&local_1b8,&local_1d8);
        local_118 = fStack_1b4 * fVar30 + local_1b8 * fVar32 + fStack_1b0 * fVar37 +
                    fStack_1ac * fVar23;
        fStack_114 = fStack_1b4 * fVar14 + local_1b8 * fVar36 + fStack_1b0 * fVar38 +
                     fStack_1ac * fVar50;
        fStack_110 = fStack_1b4 * fVar33 + local_1b8 * fVar27 + fStack_1b0 * fVar26 +
                     fStack_1ac * fVar35;
        fStack_10c = fStack_1b4 * fVar52 + local_1b8 * fVar24 + fStack_1b0 * fVar21 +
                     fStack_1ac * fVar43;
        local_108._4_4_ =
             fStack_1a4 * fVar14 + local_1a8 * fVar36 + fStack_1a0 * fVar38 + fStack_19c * fVar50;
        local_108._0_4_ =
             fStack_1a4 * fVar30 + local_1a8 * fVar32 + fStack_1a0 * fVar37 + fStack_19c * fVar23;
        fStack_100 = fStack_1a4 * fVar33 + local_1a8 * fVar27 + fStack_1a0 * fVar26 +
                     fStack_19c * fVar35;
        fStack_fc = fStack_1a4 * fVar52 + local_1a8 * fVar24 + fStack_1a0 * fVar21 +
                    fStack_19c * fVar43;
        local_f8 = fStack_194 * fVar30 + local_198 * fVar32 + fStack_190 * fVar37 +
                   fStack_18c * fVar23;
        fStack_f4 = fStack_194 * fVar14 + local_198 * fVar36 + fStack_190 * fVar38 +
                    fStack_18c * fVar50;
        fStack_f0 = fStack_194 * fVar33 + local_198 * fVar27 + fStack_190 * fVar26 +
                    fStack_18c * fVar35;
        fStack_ec = fStack_194 * fVar52 + local_198 * fVar24 + fStack_190 * fVar21 +
                    fStack_18c * fVar43;
        local_e8 = fStack_184 * fVar30 + local_188 * fVar32 + fStack_180 * fVar37 +
                   fStack_17c * fVar23;
        fStack_e4 = fStack_184 * fVar14 + local_188 * fVar36 + fStack_180 * fVar38 +
                    fStack_17c * fVar50;
        fStack_e0 = fStack_184 * fVar33 + local_188 * fVar27 + fStack_180 * fVar26 +
                    fStack_17c * fVar35;
        fStack_dc = fStack_184 * fVar52 + local_188 * fVar24 + fStack_180 * fVar21 +
                    fStack_17c * fVar43;
        puVar8 = (undefined8 *)FMatrix::Rotator(&local_118,&local_1c8);
      }
      else {
        pfVar7 = (float *)(param_1 + 0x80);
        if (*(char *)(param_1 + 0x78) != '\x02') {
          pfVar7 = (float *)&DAT_1464aa7d0;
        }
        local_118 = *pfVar7;
        fStack_114 = pfVar7[1];
        fStack_110 = pfVar7[2];
        fStack_10c = pfVar7[3];
        fVar32 = pfVar7[5];
        fVar36 = pfVar7[6];
        _local_108 = *(undefined1 (*) [16])(pfVar7 + 4);
        local_f8 = pfVar7[8];
        fStack_f4 = pfVar7[9];
        fStack_f0 = pfVar7[10];
        fStack_ec = pfVar7[0xb];
        local_e8 = pfVar7[0xc];
        fStack_e4 = pfVar7[0xd];
        fStack_e0 = pfVar7[0xe];
        fStack_dc = pfVar7[0xf];
        lVar6 = *(longlong *)(lVar5 + 0x168);
        if (lVar6 == 0) {
          fStack_1c0 = DAT_1468b5d98;
          puVar8 = &local_1c8;
          local_1c8 = _DAT_1468b5d90;
        }
        else {
          puVar8 = &local_1d8;
          fStack_1d0 = (float)*(undefined4 *)(lVar6 + 0x228);
          local_1d8 = *(undefined8 *)(lVar6 + 0x220);
        }
        fVar27 = (float)*puVar8 * fVar29;
        fVar24 = (float)((ulonglong)*puVar8 >> 0x20) * fVar29;
        fStack_1c0 = *(float *)(puVar8 + 1) * fVar29;
        local_1d8 = 0;
        fStack_1d0 = 0.0;
        local_1c8 = CONCAT44(fVar24,fVar27);
        fStack_1bc = 0.0;
        *param_2 = local_e8 * 0.0 + fStack_1c0 * local_f8 +
                   fVar24 * *(float *)*(undefined1 (*) [16])(pfVar7 + 4) + fVar27 * local_118 +
                   *param_2;
        param_2[1] = fStack_e4 * 0.0 + fStack_1c0 * fStack_f4 +
                     fVar24 * fVar32 + fVar27 * fStack_114 + param_2[1];
        param_2[2] = fStack_e0 * 0.0 + fStack_1c0 * fStack_f0 +
                     fVar24 * fVar36 + fVar27 * fStack_110 + param_2[2];
        pfVar7 = (float *)FMatrix::Inverse(&local_118,local_158);
        fVar32 = pfVar7[4];
        fVar36 = pfVar7[5];
        fVar27 = pfVar7[6];
        fVar24 = pfVar7[7];
        fVar30 = *pfVar7;
        fVar14 = pfVar7[1];
        fVar33 = pfVar7[2];
        fVar52 = pfVar7[3];
        fVar37 = pfVar7[8];
        fVar38 = pfVar7[9];
        fVar26 = pfVar7[10];
        fVar21 = pfVar7[0xb];
        fVar23 = pfVar7[0xc];
        fVar50 = pfVar7[0xd];
        fVar35 = pfVar7[0xe];
        fVar43 = pfVar7[0xf];
        fVar45 = local_1b8 * fVar30 + fStack_1b4 * fVar32 + fStack_1b0 * fVar37 +
                 fStack_1ac * fVar23;
        fVar47 = local_1b8 * fVar14 + fStack_1b4 * fVar36 + fStack_1b0 * fVar38 +
                 fStack_1ac * fVar50;
        fVar49 = local_1b8 * fVar33 + fStack_1b4 * fVar27 + fStack_1b0 * fVar26 +
                 fStack_1ac * fVar35;
        fVar15 = local_1b8 * fVar52 + fStack_1b4 * fVar24 + fStack_1b0 * fVar21 +
                 fStack_1ac * fVar43;
        lVar6 = *(longlong *)(lVar5 + 0x168);
        fVar19 = local_1a8 * fVar30 + fStack_1a4 * fVar32 + fStack_1a0 * fVar37 +
                 fStack_19c * fVar23;
        fVar20 = local_1a8 * fVar14 + fStack_1a4 * fVar36 + fStack_1a0 * fVar38 +
                 fStack_19c * fVar50;
        fVar22 = local_1a8 * fVar33 + fStack_1a4 * fVar27 + fStack_1a0 * fVar26 +
                 fStack_19c * fVar35;
        fVar39 = local_1a8 * fVar52 + fStack_1a4 * fVar24 + fStack_1a0 * fVar21 +
                 fStack_19c * fVar43;
        local_108._4_4_ = fVar20;
        local_108._0_4_ = fVar19;
        fStack_100 = fVar22;
        fStack_fc = fVar39;
        fVar40 = local_198 * fVar30 + fStack_194 * fVar32 + fStack_190 * fVar37 +
                 fStack_18c * fVar23;
        fVar41 = local_198 * fVar14 + fStack_194 * fVar36 + fStack_190 * fVar38 +
                 fStack_18c * fVar50;
        fVar42 = local_198 * fVar33 + fStack_194 * fVar27 + fStack_190 * fVar26 +
                 fStack_18c * fVar35;
        fVar25 = local_198 * fVar52 + fStack_194 * fVar24 + fStack_190 * fVar21 +
                 fStack_18c * fVar43;
        local_168 = local_188 * fVar30 + fStack_184 * fVar32 + fStack_180 * fVar37 +
                    fStack_17c * fVar23;
        fStack_164 = local_188 * fVar14 + fStack_184 * fVar36 + fStack_180 * fVar38 +
                     fStack_17c * fVar50;
        fStack_160 = local_188 * fVar33 + fStack_184 * fVar27 + fStack_180 * fVar26 +
                     fStack_17c * fVar35;
        fStack_15c = local_188 * fVar52 + fStack_184 * fVar24 + fStack_180 * fVar21 +
                     fStack_17c * fVar43;
        fVar32 = DAT_1468b5da8;
        uVar2 = DAT_1468b5da0;
        local_118 = fVar45;
        fStack_114 = fVar47;
        fStack_110 = fVar49;
        fStack_10c = fVar15;
        local_f8 = fVar40;
        fStack_f4 = fVar41;
        fStack_f0 = fVar42;
        fStack_ec = fVar25;
        local_e8 = local_168;
        fStack_e4 = fStack_164;
        fStack_e0 = fStack_160;
        fStack_dc = fStack_15c;
        if (lVar6 != 0) {
          fVar32 = *(float *)(lVar6 + 0x210);
          local_1d8 = *(undefined8 *)(lVar6 + 0x210);
          fStack_1d0 = *(float *)(lVar6 + 0x218);
          fStack_1cc = *(float *)(lVar6 + 0x21c);
          auVar13._4_4_ = -(uint)(*(float *)(lVar6 + 0x254) != *(float *)(lVar6 + 0x214));
          auVar13._0_4_ = -(uint)(*(float *)(lVar6 + 0x250) != fVar32);
          auVar13._8_4_ = -(uint)(*(float *)(lVar6 + 600) != fStack_1d0);
          auVar13._12_4_ = -(uint)(*(float *)(lVar6 + 0x25c) != fStack_1cc);
          iVar4 = movmskps((int)pfVar7,auVar13);
          if (iVar4 != 0) {
            *(float *)(lVar6 + 0x250) = fVar32;
            *(float *)(lVar6 + 0x254) = *(float *)(lVar6 + 0x214);
            *(float *)(lVar6 + 600) = fStack_1d0;
            *(float *)(lVar6 + 0x25c) = fStack_1cc;
            puVar8 = (undefined8 *)FQuat::Rotator(&local_1d8,&local_1c8);
            *(undefined8 *)(lVar6 + 0x260) = *puVar8;
            *(undefined4 *)(lVar6 + 0x268) = *(undefined4 *)(puVar8 + 1);
          }
          fVar32 = *(float *)(lVar6 + 0x268);
          uVar2 = *(undefined8 *)(lVar6 + 0x260);
        }
        fStack_1d0 = fVar32 * fVar29;
        local_1d8 = CONCAT44((float)((ulonglong)uVar2 >> 0x20) * fVar29,(float)uVar2 * fVar29);
        local_1c8 = uVar2;
        fStack_1c0 = fVar32;
        FRotationMatrix::FRotationMatrix(&local_1b8,&local_1d8);
        pfVar7 = (float *)FMatrix::Inverse(&local_118,local_158);
        fVar32 = pfVar7[4];
        fVar36 = pfVar7[5];
        fVar27 = pfVar7[6];
        fVar24 = pfVar7[7];
        fVar30 = *pfVar7;
        fVar14 = pfVar7[1];
        fVar33 = pfVar7[2];
        fVar52 = pfVar7[3];
        fVar37 = pfVar7[8];
        fVar38 = pfVar7[9];
        fVar26 = pfVar7[10];
        fVar21 = pfVar7[0xb];
        fVar23 = pfVar7[0xc];
        fVar50 = pfVar7[0xd];
        fVar35 = pfVar7[0xe];
        fVar43 = pfVar7[0xf];
        fVar57 = local_1b8 * fVar30 + fStack_1b4 * fVar32 + fStack_1b0 * fVar37 +
                 fStack_1ac * fVar23;
        fVar58 = local_1b8 * fVar14 + fStack_1b4 * fVar36 + fStack_1b0 * fVar38 +
                 fStack_1ac * fVar50;
        fVar59 = local_1b8 * fVar33 + fStack_1b4 * fVar27 + fStack_1b0 * fVar26 +
                 fStack_1ac * fVar35;
        fVar60 = local_1b8 * fVar52 + fStack_1b4 * fVar24 + fStack_1b0 * fVar21 +
                 fStack_1ac * fVar43;
        fVar53 = local_1a8 * fVar30 + fStack_1a4 * fVar32 + fStack_1a0 * fVar37 +
                 fStack_19c * fVar23;
        fVar54 = local_1a8 * fVar14 + fStack_1a4 * fVar36 + fStack_1a0 * fVar38 +
                 fStack_19c * fVar50;
        fVar55 = local_1a8 * fVar33 + fStack_1a4 * fVar27 + fStack_1a0 * fVar26 +
                 fStack_19c * fVar35;
        fVar56 = local_1a8 * fVar52 + fStack_1a4 * fVar24 + fStack_1a0 * fVar21 +
                 fStack_19c * fVar43;
        fVar44 = local_198 * fVar30 + fStack_194 * fVar32 + fStack_190 * fVar37 +
                 fStack_18c * fVar23;
        fVar46 = local_198 * fVar14 + fStack_194 * fVar36 + fStack_190 * fVar38 +
                 fStack_18c * fVar50;
        fVar48 = local_198 * fVar33 + fStack_194 * fVar27 + fStack_190 * fVar26 +
                 fStack_18c * fVar35;
        fVar51 = local_198 * fVar52 + fStack_194 * fVar24 + fStack_190 * fVar21 +
                 fStack_18c * fVar43;
        fVar32 = local_188 * fVar30 + fStack_184 * fVar32 + fStack_180 * fVar37 +
                 fStack_17c * fVar23;
        fVar36 = local_188 * fVar14 + fStack_184 * fVar36 + fStack_180 * fVar38 +
                 fStack_17c * fVar50;
        fVar27 = local_188 * fVar33 + fStack_184 * fVar27 + fStack_180 * fVar26 +
                 fStack_17c * fVar35;
        fVar24 = local_188 * fVar52 + fStack_184 * fVar24 + fStack_180 * fVar21 +
                 fStack_17c * fVar43;
        fVar23 = fVar47 * fVar53 + fVar45 * fVar57 + fVar49 * fVar44 + fVar15 * fVar32;
        fVar35 = fVar47 * fVar54 + fVar45 * fVar58 + fVar49 * fVar46 + fVar15 * fVar36;
        fVar28 = fVar47 * fVar55 + fVar45 * fVar59 + fVar49 * fVar48 + fVar15 * fVar27;
        fVar47 = fVar47 * fVar56 + fVar45 * fVar60 + fVar49 * fVar51 + fVar15 * fVar24;
        fVar33 = fVar20 * fVar53 + fVar19 * fVar57 + fVar22 * fVar44 + fVar39 * fVar32;
        fVar15 = fVar20 * fVar54 + fVar19 * fVar58 + fVar22 * fVar46 + fVar39 * fVar36;
        fVar31 = fVar20 * fVar55 + fVar19 * fVar59 + fVar22 * fVar48 + fVar39 * fVar27;
        fVar22 = fVar20 * fVar56 + fVar19 * fVar60 + fVar22 * fVar51 + fVar39 * fVar24;
        fVar52 = fVar41 * fVar53 + fVar40 * fVar57 + fVar42 * fVar44 + fVar25 * fVar32;
        fVar21 = fVar41 * fVar54 + fVar40 * fVar58 + fVar42 * fVar46 + fVar25 * fVar36;
        fVar34 = fVar41 * fVar55 + fVar40 * fVar59 + fVar42 * fVar48 + fVar25 * fVar27;
        fVar42 = fVar41 * fVar56 + fVar40 * fVar60 + fVar42 * fVar51 + fVar25 * fVar24;
        fVar25 = fStack_164 * fVar53 + local_168 * fVar57 + fStack_160 * fVar44 +
                 fStack_15c * fVar32;
        fVar44 = fStack_164 * fVar54 + local_168 * fVar58 + fStack_160 * fVar46 +
                 fStack_15c * fVar36;
        fVar46 = fStack_164 * fVar55 + local_168 * fVar59 + fStack_160 * fVar48 +
                 fStack_15c * fVar27;
        fVar48 = fStack_164 * fVar56 + local_168 * fVar60 + fStack_160 * fVar51 +
                 fStack_15c * fVar24;
        FRotationMatrix::FRotationMatrix(&local_1b8,param_2 + 3);
        fVar50 = fVar47 * local_188;
        fVar43 = fVar47 * fStack_184;
        fVar45 = fVar47 * fStack_180;
        fVar47 = fVar47 * fStack_17c;
        fVar32 = fVar33 * local_1b8;
        fVar27 = fVar33 * fStack_1b4;
        fVar30 = fVar33 * fStack_1b0;
        fVar33 = fVar33 * fStack_1ac;
        fVar37 = fVar21 * local_1a8;
        fVar38 = fVar21 * fStack_1a4;
        fVar26 = fVar21 * fStack_1a0;
        fVar21 = fVar21 * fStack_19c;
        fVar49 = fVar22 * local_188;
        fVar19 = fVar22 * fStack_184;
        fVar20 = fVar22 * fStack_180;
        fVar22 = fVar22 * fStack_17c;
        fVar36 = fVar52 * local_1b8;
        fVar24 = fVar52 * fStack_1b4;
        fVar14 = fVar52 * fStack_1b0;
        fVar52 = fVar52 * fStack_1ac;
        fVar39 = fVar42 * local_188;
        fVar40 = fVar42 * fStack_184;
        fVar41 = fVar42 * fStack_180;
        fVar42 = fVar42 * fStack_17c;
        local_188 = fVar44 * local_1a8 + fVar25 * local_1b8 + fVar46 * local_198 +
                    fVar48 * local_188;
        fStack_184 = fVar44 * fStack_1a4 + fVar25 * fStack_1b4 + fVar46 * fStack_194 +
                     fVar48 * fStack_184;
        fStack_180 = fVar44 * fStack_1a0 + fVar25 * fStack_1b0 + fVar46 * fStack_190 +
                     fVar48 * fStack_180;
        fStack_17c = fVar44 * fStack_19c + fVar25 * fStack_1ac + fVar46 * fStack_18c +
                     fVar48 * fStack_17c;
        local_1b8 = fVar35 * local_1a8 + fVar23 * local_1b8 + fVar28 * local_198 + fVar50;
        fStack_1b4 = fVar35 * fStack_1a4 + fVar23 * fStack_1b4 + fVar28 * fStack_194 + fVar43;
        fStack_1b0 = fVar35 * fStack_1a0 + fVar23 * fStack_1b0 + fVar28 * fStack_190 + fVar45;
        fStack_1ac = fVar35 * fStack_19c + fVar23 * fStack_1ac + fVar28 * fStack_18c + fVar47;
        local_1a8 = fVar15 * local_1a8 + fVar32 + fVar31 * local_198 + fVar49;
        fStack_1a4 = fVar15 * fStack_1a4 + fVar27 + fVar31 * fStack_194 + fVar19;
        fStack_1a0 = fVar15 * fStack_1a0 + fVar30 + fVar31 * fStack_190 + fVar20;
        fStack_19c = fVar15 * fStack_19c + fVar33 + fVar31 * fStack_18c + fVar22;
        local_198 = fVar37 + fVar36 + fVar34 * local_198 + fVar39;
        fStack_194 = fVar38 + fVar24 + fVar34 * fStack_194 + fVar40;
        fStack_190 = fVar26 + fVar14 + fVar34 * fStack_190 + fVar41;
        fStack_18c = fVar21 + fVar52 + fVar34 * fStack_18c + fVar42;
        puVar8 = (undefined8 *)FMatrix::Rotator(&local_1b8,&local_1c8);
      }
      *(undefined8 *)(param_2 + 3) = *puVar8;
      param_2[5] = *(float *)(puVar8 + 1);
      if ((*(byte *)(param_1 + 0x3c) & 0x20) != 0) {
        fVar32 = *(float *)(*(longlong *)(lVar5 + 0x460) + 0x2d0);
        if ((*(byte *)(*(longlong *)(param_1 + 0x28) + 0x50) & 2) == 0) {
          fVar36 = param_2[6];
          fVar27 = fVar32 - fVar36;
          iVar4 = 1;
          if (fVar27 <= 0.0) {
            iVar9 = (0.0 <= fVar27) - 1;
          }
          else {
            iVar9 = 1;
          }
          fVar24 = *(float *)(param_1 + 0x100);
          fVar30 = fVar32 - fVar24;
          if (fVar30 <= 0.0) {
            iVar4 = (0.0 <= fVar30) - 1;
          }
          if (iVar9 == iVar4) {
            fVar27 = fVar30 * fVar29 + fVar36;
            fVar36 = fVar32;
            if ((fVar32 <= fVar27) && (fVar36 = fVar24, fVar27 <= fVar24)) {
              fVar36 = fVar27;
            }
          }
          else {
            fVar27 = fVar27 * fVar29 + fVar36;
            if ((fVar36 <= fVar27) && (fVar36 = fVar27, fVar32 <= fVar27)) {
              fVar36 = fVar32;
            }
          }
        }
        else {
          fVar36 = (fVar32 - *(float *)(param_1 + 0x100)) * fVar29 + param_2[6];
        }
        fVar32 = 5.0;
        if ((5.0 <= fVar36) && (fVar32 = fVar36, 170.0 <= fVar36)) {
          fVar32 = 170.0;
        }
        param_2[6] = fVar32;
      }
      if (*(char *)(param_1 + 0x104) != '\0') {
        param_2[6] = ((*(float *)(*(longlong *)(lVar5 + 0x460) + 0x2d4) - 1.0) * fVar29 + 1.0) *
                     param_2[6];
      }
    }
  }
  return;
}



// FUNCTION 1422e5530 BeginFence body=250 status=ok
// SIG undefined BeginFence(void)

void FAudioCommandFence::BeginFence(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong local_res18 [2];
  undefined1 local_28 [32];
  
  if (DAT_146aef581 == '\0') {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 == 0) {
      return;
    }
    LOCK();
    piVar1 = (int *)(lVar3 + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 != 1) {
      return;
    }
    FGraphEvent::Recycle();
    return;
  }
  uVar7 = FAudioAsyncBatcher::GetAsyncPrereq(&DAT_146aef6c0);
  plVar8 = (longlong *)TGraphTask<FNullGraphTask>::CreateTask(local_28,uVar7,2);
  *(undefined4 *)(*plVar8 + 0x10) = 1;
  lVar3 = *plVar8;
  lVar6 = plVar8[2];
  lVar4 = plVar8[1];
  lVar5 = *(longlong *)(lVar3 + 0x18);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + 1;
    UNLOCK();
  }
  local_res18[0] = lVar5;
  FUN_141599db0(lVar3,lVar4,(int)lVar6,1);
  if (param_1 == local_res18) {
    if (lVar5 == 0) goto LAB_1422e55dd;
    LOCK();
    piVar1 = (int *)(lVar5 + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    lVar3 = local_res18[0];
  }
  else {
    lVar3 = *param_1;
    *param_1 = lVar5;
    if (lVar3 == 0) goto LAB_1422e55dd;
    LOCK();
    piVar1 = (int *)(lVar3 + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  if (iVar2 == 1) {
    FGraphEvent::Recycle(lVar3);
  }
LAB_1422e55dd:
  if (DAT_146aef581 == '\0') {
    return;
  }
  FUN_1422ed880(&DAT_146aef6c0);
  return;
}



// FUNCTION 1422e5630 FUN_1422e5630 body=800 status=ok
// SIG undefined FUN_1422e5630(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_1422e5630(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  uchar *puVar12;
  int *piVar13;
  int iVar14;
  undefined2 *puVar15;
  int iVar16;
  longlong lVar17;
  int *piVar18;
  undefined1 auStack_e8 [32];
  undefined1 **local_c8;
  undefined8 local_c0;
  int local_b8;
  int *local_b0;
  longlong *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined1 *local_98 [2];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  piVar18 = (int *)*param_3;
  piVar13 = piVar18 + *(int *)(param_3 + 1);
  do {
    if (piVar18 == piVar13) {
      if (*(int *)(param_2 + 1) < 1) {
        LOCK();
        uVar1 = *(uint *)(param_1 + 1);
        *(uint *)(param_1 + 1) = 1;
        piVar13 = (int *)(ulonglong)uVar1;
        UNLOCK();
      }
      else {
        LOCK();
        *(undefined4 *)(param_1 + 1) = 2;
        UNLOCK();
        piVar18 = (int *)*param_2;
        piVar13 = piVar18 + *(int *)(param_2 + 1);
        local_b0 = piVar13;
        if (piVar18 != piVar13) {
          do {
            iVar16 = *piVar18;
            puVar4 = *(undefined4 **)
                      (*(longlong *)(*(longlong *)(*param_1 + 0x1e8) + 0x10) + (longlong)iVar16 * 8)
            ;
            local_b8 = (int)param_1[3];
            lVar17 = (longlong)local_b8;
            uVar2 = *puVar4;
            uVar3 = puVar4[1];
            *(int *)(param_1 + 3) = local_b8 + 1;
            if (*(int *)((longlong)param_1 + 0x1c) < local_b8 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
              ::ResizeGrow(param_1 + 2,local_b8);
            }
            iVar6 = local_b8;
            puVar8 = (undefined8 *)(lVar17 * 0x20 + param_1[2]);
            *puVar8 = 0;
            puVar8[1] = 0;
            puVar8[2] = 0;
            puVar8[3] = 0;
            lVar17 = (longlong)local_b8 * 0x20;
            *(undefined4 *)(lVar17 + 0x14 + param_1[2]) = uVar2;
            *(undefined4 *)(param_1[2] + 0x18 + lVar17) = uVar3;
            lVar17 = param_1[2] + lVar17;
            *(int *)(lVar17 + 0x1c) = iVar16;
            LOCK();
            *(int *)(param_1 + 1) = (int)param_1[1] + 1;
            UNLOCK();
            cVar5 = FUntypedBulkData::IsStoredCompressedOnDisk((WriteBytesMem *)(puVar4 + 2));
            if (cVar5 != '\0') {
              LowLevelFatalErrorHandler
                        ("Unknown",0x149,L"Package level compression is no longer supported.");
              FDebug::AssertFailed
                        (&DAT_14502e39d,"Unknown",0x149,
                         L"Package level compression is no longer supported.");
            }
            if (param_1[4] == 0) {
              uVar9 = FPlatformFileManager::Get();
              plVar10 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar9);
              if (puVar4[0x1a] == 0) {
                puVar15 = &DAT_143f3eda8;
              }
              else {
                puVar15 = *(undefined2 **)(puVar4 + 0x18);
              }
              lVar11 = (**(code **)(*plVar10 + 0x100))(plVar10,puVar15);
              param_1[4] = lVar11;
            }
            iStack_a0 = iVar6;
            local_68 = (longlong *)0x0;
            local_58 = 0;
            local_a8 = param_1;
            puVar8 = (undefined8 *)FUN_140438ef0(0x18,local_88);
            if (puVar8 != (undefined8 *)0x0) {
              *puVar8 = &PTR_FUN_143f77c18;
              puVar8[1] = local_a8;
              puVar8[2] = CONCAT44(uStack_9c,iStack_a0);
            }
            plVar10 = (longlong *)param_1[4];
            iVar16 = *(int *)(lVar17 + 0x14);
            local_98[0] = &LAB_1422e7450;
            lVar11 = *plVar10;
            puVar12 = AK::WriteBytesMem::Bytes((WriteBytesMem *)(puVar4 + 2));
            local_c8 = local_98;
            local_c0 = 0;
            piVar13 = (int *)(**(code **)(lVar11 + 0x10))(plVar10,puVar12,(longlong)iVar16,4);
            *(int **)(lVar17 + 8) = piVar13;
            if (piVar13 == (int *)0x0) {
              LOCK();
              *(int *)(param_1 + 1) = (int)param_1[1] + -1;
              UNLOCK();
            }
            if (local_58 != 0) {
              plVar10 = local_88;
              if (local_68 != (longlong *)0x0) {
                plVar10 = local_68;
              }
              if (plVar10 != (longlong *)0x0) {
                piVar13 = (int *)(**(code **)(*plVar10 + 0x10))(plVar10,0);
              }
            }
            if (local_68 != (longlong *)0x0) {
              piVar13 = (int *)FMemory::Free();
            }
            piVar18 = piVar18 + 1;
          } while (piVar18 != local_b0);
        }
        LOCK();
        *(int *)(param_1 + 1) = (int)param_1[1] + -1;
        UNLOCK();
      }
      return piVar13;
    }
    iVar16 = 0;
    if (0 < (int)param_1[3]) {
      piVar7 = (int *)(param_1[2] + 0x1c);
      do {
        if (*piVar7 == *piVar18) {
          FStreamingWaveData::FreeLoadedChunk(param_1,(longlong)iVar16 * 0x20 + param_1[2]);
          iVar6 = (int)param_1[3];
          iVar14 = (iVar6 - iVar16) + -1;
          if (iVar14 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(param_1[2] + (longlong)iVar16 * 0x20),
                       (void *)((longlong)(iVar16 + 1) * 0x20 + param_1[2]),(longlong)iVar14 << 5);
            iVar6 = (int)param_1[3];
          }
          *(int *)(param_1 + 3) = iVar6 + -1;
          TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink();
          break;
        }
        iVar16 = iVar16 + 1;
        piVar7 = piVar7 + 8;
      } while (iVar16 < (int)param_1[3]);
    }
    piVar18 = piVar18 + 1;
  } while( true );
}



// FUNCTION 1422e5950 FUN_1422e5950 body=177 status=ok
// SIG undefined FUN_1422e5950(void)

void FUN_1422e5950(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  uint local_c;
  
  if ((char)param_1[0x8b] != '\0') {
    iVar1 = FUN_142235230();
    if (iVar1 != 3) {
      if (*(byte *)(param_1 + 0x8b) == 0) {
        iVar1 = -1;
      }
      else {
        iVar1 = *(byte *)(param_1 + 0x8b) - 1;
      }
      uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
      UWorld::RegisterAutoActivateCamera(uVar2,param_1,iVar1);
      plVar3 = (longlong *)UGameplayStatics::GetPlayerController(param_1,iVar1);
      if (plVar3 != (longlong *)0x0) {
        local_c = local_c & 0xfffffffe;
        local_18 = 0;
        local_10 = 0x40000000;
        local_14 = 1;
        (**(code **)(*plVar3 + 0xe18))(plVar3,param_1,&local_18);
      }
    }
  }
  FUN_142223710(param_1);
  return;
}



// FUNCTION 1422e5a10 Bind body=53 status=ok
// SIG undefined Bind(void)

void UBlueprintGeneratedClass::Bind(longlong param_1)

{
  char cVar1;
  
  FUN_1417171c0();
  cVar1 = FUN_1422fc1b0();
  if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0x250) != 0)) {
    *(code **)(param_1 + 0xa8) = FUN_1422e3560;
  }
  return;
}



// FUNCTION 1422e5a50 FUN_1422e5a50 body=430 status=ok
// SIG undefined FUN_1422e5a50(void)

void FUN_1422e5a50(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  do {
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(param_1 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
         (longlong)*(int *)(param_1 + 0x90) * 8) != param_1 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return;
    }
    lVar3 = UBlueprintGeneratedClass::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      plVar4 = *(longlong **)(param_1 + 0x208);
      uVar6 = (longlong)*(int *)(param_1 + 0x210) & 0x1fffffffffffffff;
      if (plVar4 + *(int *)(param_1 + 0x210) < plVar4) {
        uVar6 = 0;
      }
      uVar7 = 0;
      if (uVar6 != 0) {
        do {
          plVar5 = (longlong *)*plVar4;
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x278))(plVar5,param_2);
          }
          plVar4 = plVar4 + 1;
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar6);
      }
    }
    else {
      lVar3 = UDynamicClass::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        plVar5 = *(longlong **)(param_1 + 0x230);
        plVar4 = plVar5 + *(int *)(param_1 + 0x238);
        for (; plVar5 != plVar4; plVar5 = plVar5 + 1) {
          plVar1 = (longlong *)*plVar5;
          if (plVar1 != (longlong *)0x0) {
            lVar3 = UDynamicBlueprintBinding::GetPrivateStaticClass();
            if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
                lVar3 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              (**(code **)(*plVar1 + 0x278))(plVar1,param_2);
            }
          }
        }
      }
    }
    param_1 = *(longlong *)(param_1 + 0x30);
  } while (param_1 != 0);
  return;
}



// FUNCTION 1422e5c00 BlockTillAllRequestsFinished body=1229 status=ok
// SIG undefined BlockTillAllRequestsFinished(void)

undefined4 FAudioStreamingManager::BlockTillAllRequestsFinished(longlong param_1,float param_2)

{
  longlong *plVar1;
  uint *puVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  double dVar7;
  char cVar8;
  BOOL BVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 uVar15;
  LARGE_INTEGER local_res20;
  int local_d8;
  uint uStack_d4;
  uint uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  int iStack_b0;
  uint uStack_ac;
  uint *local_a8;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  longlong *local_90;
  undefined8 uStack_88;
  uint *puStack_80;
  uint uStack_78;
  uint uStack_74;
  undefined8 uStack_70;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xf8);
  BVar9 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar9 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  plVar1 = (longlong *)(param_1 + 0x10);
  uVar15 = 0;
  local_90 = plVar1;
  if (param_2 == 0.0) {
    uVar3 = *(uint *)(param_1 + 0x38);
    puVar2 = (uint *)(param_1 + 0x20);
    uStack_d4 = 1;
    local_d8 = 0;
    uStack_c4 = 0;
    iStack_c0 = 0;
    if (uVar3 != 0) {
      puVar14 = *(uint **)(param_1 + 0x30);
      if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
        puVar14 = puVar2;
      }
      uVar4 = *puVar14;
      while (uVar4 == 0) {
        lVar12 = (longlong)local_d8;
        iStack_c0 = iStack_c0 + 0x20;
        iVar10 = local_d8 + 1;
        bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_d8;
        local_d8 = iVar10;
        if (bVar6) goto LAB_1422e5d1c;
        uVar4 = puVar14[lVar12 + 1];
      }
      uStack_d4 = -uVar4 & uVar4;
      iVar10 = 0x1f;
      if (uStack_d4 != 0) {
        for (; uStack_d4 >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      if (uStack_d4 == 0) {
        iVar10 = 0x20;
      }
      else {
        iVar10 = 0x1f - iVar10;
      }
      uStack_c4 = (iStack_c0 - iVar10) + 0x1f;
      if ((int)uVar3 < (int)uStack_c4) {
LAB_1422e5d1c:
        uStack_c4 = uVar3;
      }
    }
    uVar4 = *(uint *)(param_1 + 0x38);
    uStack_a0 = 0xffffffff;
    uStack_9c = uStack_c4;
    local_98 = CONCAT44(uStack_bc,iStack_c0);
    uStack_88 = CONCAT44(uStack_d4,local_d8);
    uVar13 = uVar4 & 0xffffffe0;
    iStack_b0 = local_d8;
    uStack_ac = uStack_d4;
    local_a8 = puVar2;
    puStack_80 = puVar2;
    uStack_70 = local_98;
    uStack_78 = uStack_a0;
    uStack_74 = uStack_9c;
    uStack_c4 = uVar4;
    if (uVar4 != uVar3) {
      puVar14 = *(uint **)(param_1 + 0x30);
      if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
        puVar14 = puVar2;
      }
      uVar11 = puVar14[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
      iVar10 = (int)uVar4 >> 5;
      while (uVar11 == 0) {
        uVar13 = uVar13 + 0x20;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
        goto LAB_1422e5de2;
        uVar11 = puVar14[(longlong)iVar10 + 1];
        iVar10 = iVar10 + 1;
      }
      uVar11 = -uVar11 & uVar11;
      iVar10 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      if (uVar11 == 0) {
        iVar10 = 0x20;
      }
      else {
        iVar10 = 0x1f - iVar10;
      }
      uStack_c4 = (uVar13 - iVar10) + 0x1f;
      if ((int)uVar3 < (int)uStack_c4) {
LAB_1422e5de2:
        uStack_c4 = uVar3;
      }
    }
    while ((uStack_9c != uStack_c4 || (local_a8 != puVar2))) {
      FUN_1422e60d0(*(undefined8 *)(*plVar1 + 8 + (longlong)(int)uStack_9c * 0x18),0);
      uStack_a0 = uStack_a0 & ~uStack_ac;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_b0);
    }
  }
  else {
    QueryPerformanceCounter(&local_res20);
    puVar2 = (uint *)(param_1 + 0x20);
    uVar3 = *(uint *)(param_1 + 0x38);
    uStack_d4 = 1;
    local_d8 = 0;
    uStack_c4 = 0;
    iStack_c0 = 0;
    dVar7 = (double)local_res20.QuadPart * DAT_1468b02f8;
    if (uVar3 != 0) {
      puVar14 = *(uint **)(param_1 + 0x30);
      if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
        puVar14 = puVar2;
      }
      uVar4 = *puVar14;
      while (uVar4 == 0) {
        lVar12 = (longlong)local_d8;
        iStack_c0 = iStack_c0 + 0x20;
        iVar10 = local_d8 + 1;
        bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_d8;
        local_d8 = iVar10;
        if (bVar6) goto LAB_1422e5f1c;
        uVar4 = puVar14[lVar12 + 1];
      }
      uStack_d4 = -uVar4 & uVar4;
      iVar10 = 0x1f;
      if (uStack_d4 != 0) {
        for (; uStack_d4 >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      if (uStack_d4 == 0) {
        iVar10 = 0x20;
      }
      else {
        iVar10 = 0x1f - iVar10;
      }
      uStack_c4 = (iStack_c0 - iVar10) + 0x1f;
      if ((int)uVar3 < (int)uStack_c4) {
LAB_1422e5f1c:
        uStack_c4 = uVar3;
      }
    }
    uVar4 = *(uint *)(param_1 + 0x38);
    local_98 = CONCAT44(uStack_bc,iStack_c0);
    uStack_88 = CONCAT44(uStack_d4,local_d8);
    uStack_78 = 0xffffffff;
    uStack_74 = uStack_c4;
    uVar13 = uVar4 & 0xffffffe0;
    iStack_b0 = local_d8;
    uStack_ac = uStack_d4;
    uStack_a0 = 0xffffffff;
    uStack_9c = uStack_c4;
    local_a8 = puVar2;
    puStack_80 = puVar2;
    uStack_70 = local_98;
    uStack_c4 = uVar4;
    if (uVar4 != uVar3) {
      puVar14 = *(uint **)(param_1 + 0x30);
      if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
        puVar14 = puVar2;
      }
      uVar11 = puVar14[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
      iVar10 = (int)uVar4 >> 5;
      while (uVar11 == 0) {
        uVar13 = uVar13 + 0x20;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
        goto LAB_1422e5fe2;
        uVar11 = puVar14[(longlong)iVar10 + 1];
        iVar10 = iVar10 + 1;
      }
      uVar11 = -uVar11 & uVar11;
      iVar10 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      if (uVar11 == 0) {
        iVar10 = 0x20;
      }
      else {
        iVar10 = 0x1f - iVar10;
      }
      uStack_c4 = (uVar13 - iVar10) + 0x1f;
      if ((int)uVar3 < (int)uStack_c4) {
LAB_1422e5fe2:
        uStack_c4 = uVar3;
      }
    }
    while( true ) {
      lVar12 = (longlong)(int)uStack_9c;
      if ((uStack_9c == uStack_c4) && (local_a8 == puVar2)) goto LAB_1422e6082;
      lVar5 = *plVar1;
      QueryPerformanceCounter(&local_res20);
      if (((float)((dVar7 + 16777216.0 + (double)param_2) -
                  ((double)local_res20.QuadPart * DAT_1468b02f8 + 16777216.0)) < 0.001) ||
         (cVar8 = FUN_1422e60d0(*(undefined8 *)(lVar5 + 8 + lVar12 * 0x18)), cVar8 == '\0')) break;
      uStack_a0 = uStack_a0 & ~uStack_ac;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_b0);
    }
    uVar15 = 1;
  }
LAB_1422e6082:
  ProcessPendingAsyncFileResults(param_1);
  LeaveCriticalSection(lpCriticalSection);
  return uVar15;
}



// FUNCTION 1422e60d0 FUN_1422e60d0 body=387 status=ok
// SIG undefined FUN_1422e60d0(void)

undefined8 FUN_1422e60d0(longlong param_1,float param_2)

{
  undefined8 *puVar1;
  double dVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  LARGE_INTEGER local_res18;
  
  if (param_2 == 0.0) {
    lVar4 = *(longlong *)(param_1 + 0x10);
    lVar5 = (longlong)*(int *)(param_1 + 0x18) * 0x20 + lVar4;
    for (; lVar4 != lVar5; lVar4 = lVar4 + 0x20) {
      plVar3 = *(longlong **)(lVar4 + 8);
      if (plVar3 != (longlong *)0x0) {
        if (*(char *)((longlong)plVar3 + 0x71) == '\0') {
          (**(code **)(*plVar3 + 8))(plVar3,0);
          plVar3 = *(longlong **)(lVar4 + 8);
        }
        if (plVar3 != (longlong *)0x0) {
          (**(code **)*plVar3)(plVar3,1);
        }
        *(undefined8 *)(lVar4 + 8) = 0;
      }
    }
  }
  else {
    QueryPerformanceCounter(&local_res18);
    lVar4 = *(longlong *)(param_1 + 0x10);
    lVar5 = (longlong)*(int *)(param_1 + 0x18) * 0x20 + lVar4;
    dVar2 = (double)local_res18.QuadPart * DAT_1468b02f8;
    for (; lVar4 != lVar5; lVar4 = lVar4 + 0x20) {
      if (*(longlong *)(lVar4 + 8) != 0) {
        QueryPerformanceCounter(&local_res18);
        if (((float)((dVar2 + 16777216.0 + (double)param_2) -
                    ((double)local_res18.QuadPart * DAT_1468b02f8 + 16777216.0)) < 0.001) ||
           ((plVar3 = *(longlong **)(lVar4 + 8), *(char *)((longlong)plVar3 + 0x71) == '\0' &&
            ((**(code **)(*plVar3 + 8))(plVar3), *(char *)((longlong)plVar3 + 0x71) == '\0')))) {
          return 0;
        }
        puVar1 = *(undefined8 **)(lVar4 + 8);
        if (puVar1 != (undefined8 *)0x0) {
          (**(code **)*puVar1)(puVar1,1);
        }
        *(undefined8 *)(lVar4 + 8) = 0;
      }
    }
  }
  return 1;
}



// FUNCTION 1422e6260 BoneIsChildOf body=43 status=ok
// SIG undefined BoneIsChildOf(void)

ulonglong FBoneContainer::BoneIsChildOf(longlong param_1,int *param_2,int *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)*param_2;
  if (*param_3 < *param_2) {
    uVar2 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x90) + uVar2 * 4);
    do {
      if ((int)uVar2 == *param_3) {
        return CONCAT71((int7)(uVar2 >> 8),1);
      }
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x90) + (longlong)(int)uVar2 * 4);
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 != 0xffffffff);
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1422e6290 BoneIsChildOf body=51 status=ok
// SIG undefined BoneIsChildOf(void)

ulonglong FBoneContainer::BoneIsChildOf(longlong param_1,int param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong in_RAX;
  
  if (param_3 < param_2) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x20);
    in_RAX = (ulonglong)*(uint *)(lVar2 + 8 + (longlong)param_2 * 0x10);
    do {
      if ((int)in_RAX == param_3) {
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
      uVar1 = *(uint *)(lVar2 + 8 + (longlong)(int)in_RAX * 0x10);
      in_RAX = (ulonglong)uVar1;
    } while (uVar1 != 0xffffffff);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1422e62d0 BuildCachedArrayPropertyList body=487 status=ok
// SIG undefined BuildCachedArrayPropertyList(void)

void FBlueprintCookedComponentInstancingData::BuildCachedArrayPropertyList
               (longlong param_1,longlong param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  
  iVar2 = *param_4;
  if (iVar2 < *(int *)(param_1 + 0x10)) {
    do {
      lVar8 = 0;
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 0x18);
      if ((lVar6 != 0) && (lVar6 != *(longlong *)(param_2 + 0x18))) {
        return;
      }
      *param_4 = iVar2 + 1;
      plVar1 = (longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 0x18);
      if (*plVar1 != 0) {
        lVar8 = *(longlong *)(param_2 + 0x70);
      }
      uVar5 = FMemory::Malloc(0x20);
      iVar2 = *(int *)(param_1 + 0x38);
      *(int *)(param_1 + 0x38) = iVar2 + 1;
      if (*(int *)(param_1 + 0x3c) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x30,iVar2);
      }
      plVar7 = (longlong *)0x0;
      *(undefined8 *)((longlong)iVar2 * 8 + *(longlong *)(param_1 + 0x30)) = uVar5;
      plVar3 = *(longlong **)((longlong)iVar2 * 8 + *(longlong *)(param_1 + 0x30));
      if (plVar3 != (longlong *)0x0) {
        lVar6 = plVar1[1];
        *plVar3 = lVar8;
        *(int *)(plVar3 + 1) = (int)lVar6;
        plVar3[2] = 0;
        plVar3[3] = 0;
        plVar7 = plVar3;
      }
      *param_3 = (longlong)plVar7;
      if (lVar8 != 0) {
        lVar6 = UStructProperty::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          BuildCachedPropertyList(param_1,*param_3 + 0x10,*(undefined8 *)(lVar8 + 0x70),param_4);
        }
        else {
          lVar6 = UArrayProperty::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            BuildCachedArrayPropertyList(param_1,lVar8,*param_3 + 0x10,param_4);
          }
        }
      }
      iVar2 = *param_4;
      param_3 = (longlong *)(*param_3 + 0x18);
    } while (iVar2 < *(int *)(param_1 + 0x10));
  }
  return;
}



// FUNCTION 1422e64c0 BuildCachedPropertyList body=600 status=ok
// SIG undefined BuildCachedPropertyList(void)

void FBlueprintCookedComponentInstancingData::BuildCachedPropertyList
               (longlong param_1,longlong *param_2,longlong param_3,int *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int *piVar9;
  int local_res8 [2];
  longlong local_58;
  longlong local_50;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  
  local_res8[0] = 0;
  piVar9 = local_res8;
  if (param_4 != (int *)0x0) {
    piVar9 = param_4;
  }
  iVar8 = *piVar9;
  if (iVar8 < *(int *)(param_1 + 0x10)) {
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x10 + (longlong)iVar8 * 0x18) != param_3) {
        return;
      }
      lVar7 = 0;
      *piVar9 = iVar8 + 1;
      plVar1 = (longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar8 * 0x18);
      lVar6 = param_3;
      do {
        if (lVar6 == 0) break;
        lVar2 = *plVar1;
        if (((int)lVar2 == 0) && ((int)((ulonglong)lVar2 >> 0x20) == 0)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if (!bVar4) {
          local_50 = *(longlong *)(lVar6 + 0x38);
          local_48 = 0xffffffff;
          local_44 = 0x101;
          local_42 = 0;
          local_58 = lVar6;
          FUN_140472e10(&local_58);
          lVar7 = local_50;
          while (local_50 = lVar7, lVar7 != 0) {
            if (*(longlong *)(lVar7 + 0x18) == lVar2) goto LAB_1422e65c5;
            local_50 = *(longlong *)(lVar7 + 0x28);
            FUN_140472e10(&local_58);
            lVar7 = local_50;
          }
        }
        lVar7 = 0;
LAB_1422e65c5:
        lVar6 = *(longlong *)(lVar6 + 0x30);
      } while (lVar7 == 0);
      uVar5 = FMemory::Malloc(0x20);
      iVar8 = *(int *)(param_1 + 0x38);
      *(int *)(param_1 + 0x38) = iVar8 + 1;
      if (*(int *)(param_1 + 0x3c) < iVar8 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x30,iVar8);
      }
      *(undefined8 *)((longlong)iVar8 * 8 + *(longlong *)(param_1 + 0x30)) = uVar5;
      plVar3 = *(longlong **)((longlong)iVar8 * 8 + *(longlong *)(param_1 + 0x30));
      if (plVar3 != (longlong *)0x0) {
        lVar6 = plVar1[1];
        *plVar3 = lVar7;
        *(int *)(plVar3 + 1) = (int)lVar6;
        plVar3[2] = 0;
        plVar3[3] = 0;
      }
      if (param_2 != (longlong *)0x0) {
        *param_2 = (longlong)plVar3;
      }
      if (lVar7 != 0) {
        lVar6 = UStructProperty::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          BuildCachedPropertyList(param_1,plVar3 + 2,*(undefined8 *)(lVar7 + 0x70),piVar9);
        }
        else {
          lVar6 = UArrayProperty::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            BuildCachedArrayPropertyList(param_1,lVar7,plVar3 + 2,piVar9);
          }
        }
      }
      iVar8 = *piVar9;
      param_2 = plVar3 + 3;
    } while (iVar8 < *(int *)(param_1 + 0x10));
  }
  return;
}



// FUNCTION 1422e6720 FUN_1422e6720 body=1324 status=ok
// SIG undefined FUN_1422e6720(void)

undefined8
FUN_1422e6720(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
             longlong *param_5,int param_6)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  void *_Dst;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  int iVar19;
  longlong *plVar20;
  uint local_64;
  void *local_58;
  uint local_50;
  undefined4 local_4c;
  
  iVar15 = (int)param_4[1];
  iVar1 = *(int *)(*(longlong *)(param_2 + 0x70) + 0x34);
  if (param_6 < iVar15) {
    iVar11 = iVar1 * param_6;
    plVar14 = (longlong *)0x0;
    local_64 = 0;
    plVar18 = param_3;
    plVar10 = plVar14;
    iVar19 = param_6;
    do {
      iVar6 = (int)param_5[1];
      if (iVar6 <= iVar19 - param_6) {
        uVar16 = iVar15 - iVar6;
        uVar17 = (ulonglong)uVar16;
        local_58 = (void *)0x0;
        plVar10 = *(longlong **)(param_2 + 0x70);
        local_4c = 0;
        local_50 = uVar16;
        if (0 < (int)uVar16) {
          FScriptArray::ResizeGrow(&local_58,0,*(undefined4 *)((longlong)plVar10 + 0x34));
          plVar10 = *(longlong **)(param_2 + 0x70);
        }
        if ((*(uint *)(plVar10 + 7) >> 9 & 1) == 0) {
          _Dst = local_58;
          if (0 < (int)uVar16) {
            do {
              if ((*(uint *)(plVar10 + 7) >> 9 & 1) == 0) {
                (**(code **)(*plVar10 + 0x330))();
              }
              else {
                _guard_xfg_dispatch_icall_nop
                          (_Dst,0,(longlong)(*(int *)((longlong)plVar10 + 0x34) * (int)plVar10[6]));
              }
              plVar10 = *(longlong **)(param_2 + 0x70);
              uVar17 = uVar17 - 1;
              _Dst = (void *)((longlong)_Dst + (longlong)*(int *)((longlong)plVar10 + 0x34));
            } while (uVar17 != 0);
          }
        }
        else {
          _guard_xfg_dispatch_icall_nop
                    (local_58,0,(longlong)(int)(*(int *)((longlong)plVar10 + 0x34) * uVar16));
        }
        FUN_1422e6720(param_1,param_2,plVar18,param_4,&local_58,iVar19);
        if (local_58 != (void *)0x0) {
          FMemory::Free();
        }
        break;
      }
      plVar13 = plVar14;
      if (iVar15 != 0) {
        plVar13 = (longlong *)((longlong)iVar11 + *param_4);
      }
      plVar20 = plVar14;
      if (iVar6 != 0) {
        plVar20 = (longlong *)((longlong)(int)plVar10 + *param_5);
      }
      lVar2 = *(longlong *)(param_2 + 0x70);
      if (lVar2 == 0) {
LAB_1422e6921:
        lVar2 = *(longlong *)(param_2 + 0x70);
        if (lVar2 != 0) {
          lVar7 = UArrayProperty::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            plVar10 = (longlong *)(param_1 + 0x2a8);
            uVar8 = FMemory::Malloc(0x20);
            iVar15 = *(int *)(param_1 + 0x2b0);
            *(int *)(param_1 + 0x2b0) = iVar15 + 1;
            if (*(int *)(param_1 + 0x2b4) < iVar15 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar10,iVar15);
            }
            *(undefined8 *)(*plVar10 + (longlong)iVar15 * 8) = uVar8;
            plVar3 = *(longlong **)(*plVar10 + (longlong)iVar15 * 8);
            plVar12 = plVar14;
            if (plVar3 != (longlong *)0x0) {
              *(int *)(plVar3 + 1) = iVar19;
              *plVar3 = param_2;
              plVar3[2] = 0;
              plVar3[3] = 0;
              plVar12 = plVar3;
            }
            *plVar18 = (longlong)plVar12;
            cVar5 = FUN_1422e6720(param_1,lVar2,plVar12 + 2,plVar13,plVar20,0);
            if (cVar5 == '\0') {
              iVar15 = *(int *)(param_1 + 0x2b0);
              lVar2 = (longlong)iVar15 * 8 + -8;
              FMemory::Free(*(undefined8 *)(lVar2 + *plVar10));
              iVar6 = *(int *)(param_1 + 0x2b0);
              iVar9 = (iVar6 - (iVar15 + -1)) + -1;
              if (iVar9 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(*plVar10 + lVar2),(void *)(*plVar10 + (longlong)iVar15 * 8),
                           (longlong)iVar9 << 3);
                iVar6 = *(int *)(param_1 + 0x2b0);
              }
              *(int *)(param_1 + 0x2b0) = iVar6 + -1;
              TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar10);
              *plVar18 = 0;
            }
            else {
              plVar18 = (longlong *)(*plVar18 + 0x18);
            }
            goto LAB_1422e6ada;
          }
        }
        cVar5 = (**(code **)(**(longlong **)(param_2 + 0x70) + 0x2b8))
                          (*(longlong **)(param_2 + 0x70),plVar13,plVar20,0);
        if (cVar5 == '\0') {
          plVar10 = (longlong *)(param_1 + 0x2a8);
          uVar8 = FMemory::Malloc(0x20);
          iVar15 = *(int *)(param_1 + 0x2b0);
          *(int *)(param_1 + 0x2b0) = iVar15 + 1;
          if (*(int *)(param_1 + 0x2b4) < iVar15 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar10,iVar15);
          }
          *(undefined8 *)(*plVar10 + (longlong)iVar15 * 8) = uVar8;
          plVar10 = *(longlong **)(*plVar10 + (longlong)iVar15 * 8);
          plVar13 = plVar14;
          if (plVar10 != (longlong *)0x0) {
            *(int *)(plVar10 + 1) = iVar19;
            *plVar10 = param_2;
            plVar10[2] = 0;
            plVar10[3] = 0;
            plVar13 = plVar10;
          }
          *plVar18 = (longlong)plVar13;
          plVar18 = plVar13 + 3;
        }
      }
      else {
        lVar7 = UStructProperty::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) goto LAB_1422e6921;
        plVar10 = (longlong *)(param_1 + 0x2a8);
        uVar8 = FMemory::Malloc(0x20);
        iVar15 = *(int *)(param_1 + 0x2b0);
        *(int *)(param_1 + 0x2b0) = iVar15 + 1;
        if (*(int *)(param_1 + 0x2b4) < iVar15 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar10,iVar15);
        }
        *(undefined8 *)(*plVar10 + (longlong)iVar15 * 8) = uVar8;
        plVar3 = *(longlong **)(*plVar10 + (longlong)iVar15 * 8);
        plVar12 = plVar14;
        if (plVar3 != (longlong *)0x0) {
          *(int *)(plVar3 + 1) = iVar19;
          *plVar3 = param_2;
          plVar3[2] = 0;
          plVar3[3] = 0;
          plVar12 = plVar3;
        }
        *plVar18 = (longlong)plVar12;
        cVar5 = FUN_1422e6c50(param_1,plVar12 + 2,*(undefined8 *)(lVar2 + 0x70),plVar13,plVar20);
        if (cVar5 == '\0') {
          iVar15 = *(int *)(param_1 + 0x2b0);
          lVar2 = (longlong)iVar15 * 8 + -8;
          FMemory::Free(*(undefined8 *)(lVar2 + *plVar10));
          iVar6 = *(int *)(param_1 + 0x2b0);
          iVar9 = (iVar6 - (iVar15 + -1)) + -1;
          if (iVar9 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar10 + lVar2),(void *)(*plVar10 + (longlong)iVar15 * 8),
                       (longlong)iVar9 << 3);
            iVar6 = *(int *)(param_1 + 0x2b0);
          }
          *(int *)(param_1 + 0x2b0) = iVar6 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar10);
          *plVar18 = 0;
        }
        else {
          plVar18 = (longlong *)(*plVar18 + 0x18);
        }
      }
LAB_1422e6ada:
      iVar19 = iVar19 + 1;
      local_64 = local_64 + iVar1;
      plVar10 = (longlong *)(ulonglong)local_64;
      iVar11 = iVar11 + iVar1;
      iVar15 = (int)param_4[1];
    } while (iVar19 < iVar15);
  }
  if ((*param_3 == 0) && ((int)param_4[1] == (int)param_5[1])) {
    return 0;
  }
  return 1;
}



// FUNCTION 1422e6c50 FUN_1422e6c50 body=1104 status=ok
// SIG undefined FUN_1422e6c50(void)

bool FUN_1422e6c50(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  int iVar13;
  void *_Dst;
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  
  if (param_3 != 0) {
    lVar9 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
         ) != lVar9 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    lVar9 = param_3;
    if (bVar6) goto LAB_1422e6cbd;
  }
  lVar9 = 0;
LAB_1422e6cbd:
  plVar3 = *(longlong **)(param_3 + 0x58);
  plVar14 = param_2;
  do {
    if (plVar3 == (longlong *)0x0) {
      return *param_2 != 0;
    }
    uVar4 = plVar3[7];
    if (((uVar4 >> 0xe & 1) == 0) || ((lVar9 != 0 && ((*(uint *)(lVar9 + 0xb4) >> 10 & 1) != 0)))) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if ((!bVar6) && (((uVar4 & 0x800000202000) == 0 || ((uVar4 & 0x8000080000) == 0)))) {
      iVar8 = (int)plVar3[6];
      iVar17 = 0;
      if (0 < iVar8) {
        do {
          lVar16 = (longlong)(*(int *)((longlong)plVar3 + 0x34) * iVar17) +
                   (longlong)*(int *)((longlong)plVar3 + 0x44);
          lVar2 = lVar16 + param_4;
          if ((param_5 == 0) ||
             (*(int *)(param_3 + 0x40) <
              *(int *)((longlong)plVar3 + 0x34) * iVar8 + *(int *)((longlong)plVar3 + 0x44))) {
            lVar16 = 0;
          }
          else {
            lVar16 = lVar16 + param_5;
          }
          lVar10 = UStructProperty::GetPrivateStaticClass();
          if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
              != lVar10 + 0x88)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (bVar6) {
            plVar1 = (longlong *)(param_1 + 0x2a8);
            uVar11 = FMemory::Malloc(0x20);
            iVar8 = *(int *)(param_1 + 0x2b0);
            *(int *)(param_1 + 0x2b0) = iVar8 + 1;
            if (*(int *)(param_1 + 0x2b4) < iVar8 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar8);
            }
            *(undefined8 *)(*plVar1 + (longlong)iVar8 * 8) = uVar11;
            puVar5 = *(undefined8 **)(*plVar1 + (longlong)iVar8 * 8);
            puVar12 = (undefined8 *)0x0;
            if (puVar5 != (undefined8 *)0x0) {
              *puVar5 = plVar3;
              *(int *)(puVar5 + 1) = iVar17;
              puVar5[2] = 0;
              puVar5[3] = 0;
              puVar12 = puVar5;
            }
            *plVar14 = (longlong)puVar12;
            cVar7 = FUN_1422e6c50(param_1,puVar12 + 2,plVar3[0xe],lVar2,lVar16);
            if (cVar7 == '\0') {
              lVar2 = (longlong)*(int *)(param_1 + 0x2b0) * 8 + -8;
              iVar15 = *(int *)(param_1 + 0x2b0) + -1;
              FMemory::Free(*(undefined8 *)(lVar2 + *plVar1));
              iVar8 = *(int *)(param_1 + 0x2b0);
              iVar13 = (iVar8 - iVar15) + -1;
              if (iVar13 != 0) {
                lVar16 = *plVar1;
                _Dst = (void *)(lVar2 + lVar16);
LAB_1422e6e80:
                _guard_xfg_dispatch_icall_nop
                          (_Dst,(void *)(lVar16 + (longlong)(iVar15 + 1) * 8),(longlong)iVar13 << 3)
                ;
                iVar8 = *(int *)(param_1 + 0x2b0);
              }
LAB_1422e6e96:
              *(int *)(param_1 + 0x2b0) = iVar8 + -1;
              TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x2a8);
              *plVar14 = 0;
            }
            else {
              plVar14 = (longlong *)(*plVar14 + 0x18);
            }
          }
          else {
            lVar10 = UArrayProperty::GetPrivateStaticClass();
            if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
                lVar10 + 0x88)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (bVar6) {
              plVar1 = (longlong *)(param_1 + 0x2a8);
              uVar11 = FMemory::Malloc(0x20);
              iVar8 = *(int *)(param_1 + 0x2b0);
              *(int *)(param_1 + 0x2b0) = iVar8 + 1;
              if (*(int *)(param_1 + 0x2b4) < iVar8 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar8);
              }
              *(undefined8 *)(*plVar1 + (longlong)iVar8 * 8) = uVar11;
              puVar5 = *(undefined8 **)(*plVar1 + (longlong)iVar8 * 8);
              puVar12 = (undefined8 *)0x0;
              if (puVar5 != (undefined8 *)0x0) {
                *puVar5 = plVar3;
                *(int *)(puVar5 + 1) = iVar17;
                puVar5[2] = 0;
                puVar5[3] = 0;
                puVar12 = puVar5;
              }
              *plVar14 = (longlong)puVar12;
              cVar7 = FUN_1422e6720(param_1,plVar3,puVar12 + 2,lVar2,lVar16,0);
              if (cVar7 == '\0') {
                lVar2 = (longlong)*(int *)(param_1 + 0x2b0) * 8 + -8;
                iVar15 = *(int *)(param_1 + 0x2b0) + -1;
                FMemory::Free(*(undefined8 *)(lVar2 + *plVar1));
                iVar8 = *(int *)(param_1 + 0x2b0);
                iVar13 = (iVar8 - iVar15) + -1;
                if (iVar13 != 0) {
                  lVar16 = *plVar1;
                  _Dst = (void *)(lVar16 + lVar2);
                  goto LAB_1422e6e80;
                }
                goto LAB_1422e6e96;
              }
              plVar14 = (longlong *)(*plVar14 + 0x18);
            }
            else {
              cVar7 = (**(code **)(*plVar3 + 0x2b8))(plVar3,lVar2,lVar16,0);
              if (cVar7 == '\0') {
                plVar1 = (longlong *)(param_1 + 0x2a8);
                uVar11 = FMemory::Malloc(0x20);
                iVar8 = *(int *)(param_1 + 0x2b0);
                *(int *)(param_1 + 0x2b0) = iVar8 + 1;
                if (*(int *)(param_1 + 0x2b4) < iVar8 + 1) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
                }
                *(undefined8 *)(*plVar1 + (longlong)iVar8 * 8) = uVar11;
                puVar5 = *(undefined8 **)(*plVar1 + (longlong)iVar8 * 8);
                if (puVar5 != (undefined8 *)0x0) {
                  *puVar5 = plVar3;
                  *(int *)(puVar5 + 1) = iVar17;
                  puVar5[2] = 0;
                  puVar5[3] = 0;
                }
                *plVar14 = (longlong)puVar5;
                plVar14 = puVar5 + 3;
              }
            }
          }
          iVar8 = (int)plVar3[6];
          iVar17 = iVar17 + 1;
        } while (iVar17 < iVar8);
      }
    }
    plVar3 = (longlong *)plVar3[10];
  } while( true );
}



// FUNCTION 1422e70a0 FUN_1422e70a0 body=712 status=ok
// SIG undefined FUN_1422e70a0(void)

void FUN_1422e70a0(longlong param_1,char *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  ushort uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined2 *puVar14;
  longlong lVar15;
  longlong local_48;
  undefined8 local_40;
  longlong local_38 [2];
  
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x40);
  if (cVar3 == '\0') {
    *(undefined4 *)(param_1 + 200) = 0;
    if ((*(int *)(param_1 + 0xcc) < 0) && (*(int *)(param_1 + 0xcc) != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xc0,0);
      return;
    }
  }
  else {
    uVar5 = FWeakObjectPtr::Get(param_1 + 0x40);
    lVar6 = USkeleton::GetSmartNameContainer(uVar5,&DAT_146aef308);
    if (lVar6 != 0) {
      plVar13 = (longlong *)0x0;
      plVar1 = (longlong *)(param_1 + 0xc0);
      *(undefined4 *)(param_1 + 200) = 0;
      if (0x7fffffff < *(uint *)(param_1 + 0xcc)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar1,0);
      }
      uVar4 = *(short *)(lVar6 + 8) - 1;
      if (uVar4 != 0xffff) {
        iVar9 = *(int *)(param_1 + 200) + 1 + (uint)uVar4;
        *(int *)(param_1 + 200) = iVar9;
        if (*(int *)(param_1 + 0xcc) < iVar9) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1);
          iVar9 = *(int *)(param_1 + 200);
        }
        puVar14 = (undefined2 *)*plVar1;
        plVar10 = (longlong *)((longlong)iVar9 & 0x7fffffffffffffff);
        if (puVar14 + iVar9 < puVar14) {
          plVar10 = plVar13;
        }
        if (plVar10 != (longlong *)0x0) {
          for (; plVar10 != (longlong *)0x0; plVar10 = (longlong *)((longlong)plVar10 + -1)) {
            *puVar14 = 0xffff;
            puVar14 = puVar14 + 1;
          }
        }
        local_48 = 0;
        local_40 = 0;
        UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(lVar6,&local_48);
        local_38[0] = 0;
        local_38[1] = 0;
        FSmartNameMapping::FillUidArray(lVar6,local_38);
        if ((0 < (int)local_40) &&
           (lVar15 = (longlong)((int)local_40 + -1), plVar10 = plVar13, -1 < (int)local_40 + -1)) {
          do {
            if (*param_2 != '\0') {
              plVar12 = *(longlong **)(param_2 + 8);
              if (plVar12 != (longlong *)0x0) {
                plVar11 = (longlong *)*plVar12;
                plVar12 = plVar11 + (int)plVar12[1];
                if (plVar11 != plVar12) {
                  do {
                    if (*plVar11 == *(longlong *)(local_48 + lVar15 * 8)) goto LAB_1422e72f5;
                    plVar11 = plVar11 + 1;
                  } while (plVar11 != plVar12);
                }
              }
              lVar2 = *(longlong *)(local_48 + lVar15 * 8);
              if (*(int *)(lVar6 + 0x18) != *(int *)(lVar6 + 0x44)) {
                lVar7 = *(longlong *)(lVar6 + 0x50);
                if (*(longlong *)(lVar6 + 0x50) == 0) {
                  lVar7 = lVar6 + 0x48;
                }
                iVar9 = *(int *)(lVar7 + ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                                         (longlong)*(int *)(lVar6 + 0x58) - 1U) * 4);
                if (iVar9 != -1) {
                  do {
                    plVar12 = (longlong *)((longlong)iVar9 * 0x30 + *(longlong *)(lVar6 + 0x10));
                    if (*plVar12 == lVar2) {
                      if (iVar9 != -1) goto LAB_1422e7275;
                      break;
                    }
                    iVar9 = (int)plVar12[5];
                  } while (iVar9 != -1);
                }
              }
              plVar12 = plVar13;
LAB_1422e7275:
              plVar11 = plVar12 + 1;
              if (plVar12 == (longlong *)0x0) {
                plVar11 = plVar13;
              }
              if (plVar11 == (longlong *)0x0) {
LAB_1422e72da:
                *(short *)(*plVar1 + (ulonglong)*(ushort *)(local_38[0] + lVar15 * 2) * 2) =
                     (short)plVar10;
                plVar10 = (longlong *)(ulonglong)((int)plVar10 + 1);
              }
              else if (*(int *)(param_2 + 0x10) <= (int)(uint)*(byte *)(plVar11 + 3)) {
                if ((int)plVar11[2] < 1) goto LAB_1422e72da;
                piVar8 = (int *)(plVar11[1] + 8);
                plVar12 = plVar13;
                do {
                  if ((char)piVar8[1] == '\0') {
                    iVar9 = piVar8[2];
LAB_1422e72c6:
                    if (iVar9 != -1) goto LAB_1422e72da;
                  }
                  else if (*piVar8 != -1) {
                    iVar9 = *(int *)(*(longlong *)(param_1 + 0x80) + (longlong)*piVar8 * 4);
                    goto LAB_1422e72c6;
                  }
                  plVar12 = (longlong *)((longlong)plVar12 + 1);
                  piVar8 = piVar8 + 6;
                } while ((longlong)plVar12 < (longlong)(int)plVar11[2]);
              }
            }
LAB_1422e72f5:
            lVar15 = lVar15 + -1;
          } while (-1 < lVar15);
        }
        if (local_38[0] != 0) {
          FMemory::Free();
        }
        if (local_48 != 0) {
          FMemory::Free(local_48);
        }
      }
    }
  }
  return;
}



// FUNCTION 1422e7380 FUN_1422e7380 body=49 status=ok
// SIG undefined FUN_1422e7380(void)

void FUN_1422e7380(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong local_res8;
  undefined8 local_res10 [3];
  
  local_res8 = (longlong)*(int *)(param_1 + 2) + *param_3;
  local_res10[0] = *param_2;
  (*(code *)*param_1)(param_1[1],local_res10,&local_res8);
  return;
}



// FUNCTION 1422e7410 Call body=55 status=ok
// SIG undefined Call(void)

void UE4Function_Private::
     TFunctionRefCaller<<lambda_ba633f788b7b3e2fa7fc79535baf4331>,void___cdecl(void)>::Call
               (undefined8 *param_1)

{
  longlong local_18 [3];
  
  local_18[0] = 0;
  local_18[1] = 0;
  FUN_141591a60(*param_1,local_18,0xff);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1422e7460 FUN_1422e7460 body=37 status=ok
// SIG undefined FUN_1422e7460(void)

void FUN_1422e7460(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  TSet<TTuple<unsigned_int,FAudioVolumeProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>,FDefaultSetAllocator>
  ::Remove(lVar1 + 0x488,(int)param_1[1]);
  FUN_1422d0f00(lVar1);
  return;
}



// FUNCTION 1422e7490 CanBeClusterRoot body=43 status=ok
// SIG undefined CanBeClusterRoot(void)

undefined1 UBlueprintGeneratedClass::CanBeClusterRoot(void)

{
  longlong lVar1;
  
  if (DAT_146aef578 != 0) {
    lVar1 = UObjectBaseUtility::GetOutermost();
    if ((*(uint *)(lVar1 + 0x50) >> 0x11 & 1) == 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1422e74c0 FUN_1422e74c0 body=262 status=ok
// SIG undefined FUN_1422e74c0(void)

bool FUN_1422e74c0(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  BOOL BVar4;
  longlong *plVar5;
  longlong lVar6;
  int *piVar7;
  ulonglong uVar8;
  bool bVar9;
  ulonglong uVar10;
  undefined1 local_res8 [8];
  
  plVar5 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  lVar6 = plVar5[0x1f];
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 0x368))(plVar5);
    lVar6 = plVar5[0x1f];
  }
  iVar1 = *(int *)(lVar6 + 0xbc);
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf8));
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf8));
  }
  lVar6 = *param_2;
  if (lVar6 != 0) {
    piVar7 = (int *)TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
                    ::FindId(param_1 + 0x10,local_res8);
    if (*piVar7 != -1) {
      iVar2 = *(int *)(param_1 + 0x68);
      if (iVar2 < iVar1) {
        bVar9 = true;
        goto LAB_1422e7597;
      }
      uVar8 = 0;
      if (0 < iVar2) {
        plVar5 = *(longlong **)(param_1 + 0x60);
        uVar10 = uVar8;
        do {
          if (((*(longlong **)(*plVar5 + 0x10) == (longlong *)0x0) ||
              (lVar3 = **(longlong **)(*plVar5 + 0x10), lVar3 == 0)) ||
             (*(int *)(lVar3 + 0xac) < *(int *)(lVar6 + 0xac))) {
            bVar9 = (int)uVar10 < iVar1;
            goto LAB_1422e7597;
          }
          uVar10 = (ulonglong)((int)uVar10 + 1);
          uVar8 = uVar8 + 1;
          plVar5 = plVar5 + 1;
        } while ((longlong)uVar8 < (longlong)iVar2);
      }
    }
  }
  bVar9 = false;
LAB_1422e7597:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf8));
  return bVar9;
}



// FUNCTION 1422e75d0 FUN_1422e75d0 body=1127 status=ok
// SIG undefined FUN_1422e75d0(void)

void FUN_1422e75d0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  uint local_res10;
  longlong local_168;
  uint local_160;
  uint local_15c;
  longlong *local_158;
  uint local_150;
  uint local_14c;
  longlong *local_148;
  undefined8 local_140;
  undefined8 local_138;
  longlong local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  int local_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  undefined **local_108 [5];
  byte local_df;
  byte local_de;
  byte local_dd;
  ulonglong local_d8;
  undefined8 local_a0;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  
  lVar5 = *(longlong *)(param_1 + 0x10);
  plVar10 = (longlong *)0x0;
  local_168 = 0;
  local_15c = 0;
  plVar7 = plVar10;
  plVar12 = plVar10;
  for (; lVar4 = local_168, iVar11 = (int)plVar7, lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
    lVar2 = UBlueprintGeneratedClass::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) break;
    local_160 = iVar11 + 1;
    if ((int)plVar12 < (int)local_160) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_168,plVar7);
      plVar12 = (longlong *)(ulonglong)local_15c;
    }
    plVar7 = (longlong *)(ulonglong)local_160;
    *(longlong *)(local_168 + (longlong)iVar11 * 8) = lVar5;
  }
  if (0 < iVar11) {
    lVar2 = (longlong)(iVar11 + -1);
    lVar5 = *(longlong *)(*(longlong *)(lVar4 + lVar2 * 8) + 0x30);
    local_130 = lVar2;
    if (lVar5 != 0) {
      lVar3 = UDynamicClass::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        local_148 = (longlong *)0x0;
        local_140 = 0;
        UClass::GetDefaultObjectSubobjects(lVar5,&local_148);
        local_158 = (longlong *)0x0;
        local_res10 = 0;
        local_14c = 0;
        plVar7 = local_148 + (int)local_140;
        plVar9 = local_148;
        plVar12 = plVar10;
        plVar14 = plVar10;
        if (local_148 != plVar7) {
          do {
            lVar5 = *plVar9;
            if (lVar5 != 0) {
              lVar4 = FUN_1428e7a40();
              if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (bVar1) {
                iVar11 = (int)plVar12;
                local_150 = iVar11 + 1;
                if ((int)plVar14 < (int)local_150) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                            (&local_158,plVar12);
                  plVar14 = (longlong *)(ulonglong)local_14c;
                }
                plVar12 = (longlong *)(ulonglong)local_150;
                local_158[iVar11] = lVar5;
                plVar10 = local_158;
              }
            }
            plVar9 = plVar9 + 1;
          } while (plVar9 != plVar7);
          local_res10 = (uint)plVar12;
          lVar4 = local_168;
        }
        while (-1 < lVar2) {
          lVar5 = FUN_1422f1d40(*(undefined8 *)(lVar4 + lVar2 * 8),0);
          if ((lVar5 != 0) && (0 < (int)plVar12)) {
            uVar15 = 0;
            uVar13 = (ulonglong)((longlong)(plVar10 + (int)plVar12) + (7 - (longlong)plVar10)) >> 3;
            if (plVar10 + (int)plVar12 < plVar10) {
              uVar13 = uVar15;
            }
            if (uVar13 != 0) {
              do {
                UInheritableComponentHandler::FindKey
                          (lVar5,&local_128,*(undefined8 *)(*plVar10 + 0x18));
                lVar4 = CONCAT44(uStack_11c,uStack_120);
                if (((CONCAT44(uStack_124,local_128) == 0) ||
                    (((local_118 == 0 && iStack_114 == 0) && iStack_110 == 0) && iStack_10c == 0))
                   || ((lVar4 != 0 && (lVar4 == 0)))) {
                  bVar1 = false;
                }
                else {
                  bVar1 = true;
                }
                if (bVar1) {
                  local_138 = 0;
                  if ((lVar4 == 0) ||
                     (((local_118 == 0 && iStack_114 == 0) && iStack_110 == 0) && iStack_10c == 0))
                  {
                    bVar1 = false;
                  }
                  else {
                    bVar1 = true;
                  }
                  if (bVar1) {
                    local_68 = local_128;
                    uStack_64 = uStack_124;
                    uStack_60 = uStack_120;
                    uStack_5c = uStack_11c;
                    local_58 = local_118;
                    iStack_54 = iStack_114;
                    iStack_50 = iStack_110;
                    iStack_4c = iStack_10c;
                    pcVar6 = (char *)UInheritableComponentHandler::GetOverridenComponentTemplateData
                                               (lVar5);
                    if (((pcVar6 != (char *)0x0) && (*pcVar6 != '\0')) &&
                       (plVar7 = (longlong *)UObject::GetDefaultSubobjectByName(param_1),
                       plVar7 != (longlong *)0x0)) {
                      FUN_1417510e0(lVar5);
                      uVar8 = FBlueprintCookedComponentInstancingData::GetCachedPropertyList(pcVar6)
                      ;
                      FArchive::FArchive(local_108);
                      local_70 = pcVar6 + 0x40;
                      local_78 = 0;
                      local_108[0] = &PTR_FUN_144f50fa8;
                      FArchive::SetIsLoading(local_108,1);
                      FArchive::SetIsPersistent(local_108,0);
                      local_de = local_de & 0xfd;
                      local_df = local_df & 0xdf;
                      local_dd = local_dd | 0x10;
                      local_108[0] = &PTR_FUN_145010640;
                      local_a0 = uVar8;
                      FUN_141695520(local_108,1);
                      local_d8 = local_d8 | 0x1000;
                      (**(code **)(*plVar7 + 0xa8))(plVar7);
                      FArchive::~FArchive(local_108);
                    }
                  }
                }
                plVar10 = plVar10 + 1;
                uVar15 = uVar15 + 1;
                lVar4 = local_168;
              } while (uVar15 != uVar13);
            }
          }
          lVar2 = local_130 + -1;
          plVar10 = local_158;
          plVar12 = (longlong *)(ulonglong)local_res10;
          local_130 = lVar2;
        }
        if (local_158 != (longlong *)0x0) {
          FMemory::Free();
        }
        if (local_148 != (longlong *)0x0) {
          FMemory::Free();
        }
      }
    }
  }
  if (lVar4 != 0) {
    FMemory::Free(lVar4);
  }
  return;
}



// FUNCTION 1422e7a40 ClampValues body=329 status=ok
// SIG undefined ClampValues(void)

void FAudioEQEffect::ClampValues(longlong param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_1 + 8);
  if (20.0 <= fVar1) {
    if (20000.0 <= fVar1) {
      fVar1 = 20000.0;
    }
  }
  else {
    fVar1 = 20.0;
  }
  fVar2 = *(float *)(param_1 + 0x14);
  *(float *)(param_1 + 8) = fVar1;
  if (20.0 <= fVar2) {
    if (20000.0 <= fVar2) {
      fVar2 = 20000.0;
    }
  }
  else {
    fVar2 = 20.0;
  }
  fVar1 = *(float *)(param_1 + 0x20);
  *(float *)(param_1 + 0x14) = fVar2;
  if (20.0 <= fVar1) {
    if (20000.0 <= fVar1) {
      fVar1 = 20000.0;
    }
  }
  else {
    fVar1 = 20.0;
  }
  fVar2 = *(float *)(param_1 + 0x2c);
  *(float *)(param_1 + 0x20) = fVar1;
  fVar1 = 20.0;
  if ((20.0 <= fVar2) && (fVar1 = fVar2, 20000.0 <= fVar2)) {
    fVar1 = 20000.0;
  }
  fVar2 = *(float *)(param_1 + 0xc);
  *(float *)(param_1 + 0x2c) = fVar1;
  if (0.0 <= fVar2) {
    if (7.94 <= fVar2) {
      fVar2 = 7.94;
    }
  }
  else {
    fVar2 = 0.0;
  }
  fVar1 = *(float *)(param_1 + 0x18);
  *(float *)(param_1 + 0xc) = fVar2;
  if (0.0 <= fVar1) {
    if (7.94 <= fVar1) {
      fVar1 = 7.94;
    }
  }
  else {
    fVar1 = 0.0;
  }
  fVar2 = *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x18) = fVar1;
  if (0.0 <= fVar2) {
    if (7.94 <= fVar2) {
      fVar2 = 7.94;
    }
  }
  else {
    fVar2 = 0.0;
  }
  fVar1 = *(float *)(param_1 + 0x30);
  *(float *)(param_1 + 0x24) = fVar2;
  fVar2 = 0.0;
  if ((0.0 <= fVar1) && (fVar2 = fVar1, 7.94 <= fVar1)) {
    fVar2 = 7.94;
  }
  fVar1 = *(float *)(param_1 + 0x10);
  *(float *)(param_1 + 0x30) = fVar2;
  if (0.1 <= fVar1) {
    if (2.0 <= fVar1) {
      fVar1 = 2.0;
    }
  }
  else {
    fVar1 = 0.1;
  }
  fVar2 = *(float *)(param_1 + 0x1c);
  *(float *)(param_1 + 0x10) = fVar1;
  if (0.1 <= fVar2) {
    if (2.0 <= fVar2) {
      fVar2 = 2.0;
    }
  }
  else {
    fVar2 = 0.1;
  }
  fVar1 = *(float *)(param_1 + 0x28);
  *(float *)(param_1 + 0x1c) = fVar2;
  if (0.1 <= fVar1) {
    if (2.0 <= fVar1) {
      fVar1 = 2.0;
    }
  }
  else {
    fVar1 = 0.1;
  }
  fVar2 = *(float *)(param_1 + 0x34);
  *(float *)(param_1 + 0x28) = fVar1;
  if (0.1 <= fVar2) {
    if (2.0 <= fVar2) {
      fVar2 = 2.0;
    }
    *(float *)(param_1 + 0x34) = fVar2;
    return;
  }
  *(undefined4 *)(param_1 + 0x34) = 0x3dcccccd;
  return;
}



// FUNCTION 1422e7b90 Clear body=30 status=ok
// SIG undefined Clear(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FBasedPosition::Clear(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 2) = DAT_1468b5d98;
  return;
}



// FUNCTION 1422e7bb0 FUN_1422e7bb0 body=60 status=ok
// SIG undefined FUN_1422e7bb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1422e7bb0(longlong param_1)

{
  undefined8 uVar1;
  
  *(uint *)(param_1 + 0x2e8) = *(uint *)(param_1 + 0x2e8) & 0xffffffef;
  uVar1 = uRam00000001468b5b78;
  *(undefined8 *)(param_1 + 0x900) = _DAT_1468b5b70;
  *(undefined8 *)(param_1 + 0x908) = uVar1;
  uVar1 = uRam00000001468b5b88;
  *(undefined8 *)(param_1 + 0x910) = _DAT_1468b5b80;
  *(undefined8 *)(param_1 + 0x918) = uVar1;
  uVar1 = uRam00000001468b5b98;
  *(undefined8 *)(param_1 + 0x920) = _DAT_1468b5b90;
  *(undefined8 *)(param_1 + 0x928) = uVar1;
  *(undefined4 *)(param_1 + 0x930) = 0;
  return;
}



// FUNCTION 1422e7bf0 FUN_1422e7bf0 body=160 status=ok
// SIG undefined FUN_1422e7bf0(void)

void FUN_1422e7bf0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x940);
  if (iVar2 != 0) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x938) + 0x5d8);
    do {
      if (plVar1[2] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 0xc0;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0x940) = 0;
  if (*(int *)(param_1 + 0x944) != 0) {
    FUN_1422f8870(param_1 + 0x938,0);
  }
  *(undefined4 *)(param_1 + 0x950) = 0;
  if (*(int *)(param_1 + 0x954) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x948,0);
  }
  return;
}



// FUNCTION 1422e7c90 ClearMixSettings body=223 status=ok
// SIG undefined ClearMixSettings(void)

void FAudioEffectsManager::ClearMixSettings(longlong param_1)

{
  float fVar1;
  double dVar2;
  
  if (*(longlong *)(param_1 + 0x140) != 0) {
    *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_1 + 0x180);
    *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x188);
    *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_1 + 400);
    *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_1 + 0x198);
    *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_1 + 0x1a0);
    *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_1 + 0x1a8);
    *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_1 + 0x1b0);
    dVar2 = DAT_1468b5a78;
    *(double *)(param_1 + 0x148) = DAT_1468b5a78;
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined8 *)(param_1 + 0x1c0) = 0x3f80000044160000;
    *(undefined8 *)(param_1 + 0x1c8) = 0x447a00003f800000;
    *(undefined8 *)(param_1 + 0x1d0) = 0x3f8000003f800000;
    *(undefined8 *)(param_1 + 0x1d8) = 0x3f80000044fa0000;
    *(undefined8 *)(param_1 + 0x1e0) = 0x461c40003f800000;
    *(undefined8 *)(param_1 + 0x1e8) = 0x3f8000003f800000;
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x140) + 0x84);
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(double *)(param_1 + 0x1b8) = (double)fVar1 + dVar2;
  }
  return;
}



// FUNCTION 1422e7d70 Compact body=412 status=ok
// SIG undefined Compact(void)

ulonglong TSparseArray<TSetElement<UClass_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
          ::Compact(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  ulonglong in_RAX;
  int iVar8;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  
  iVar2 = *(int *)((longlong)param_1 + 0x34);
  if (iVar2 != 0) {
    iVar3 = (int)param_1[1];
    uVar13 = 0;
    iVar8 = (int)param_1[6];
    lVar5 = *param_1;
    iVar14 = iVar3 - iVar2;
    iVar12 = iVar3;
    if (iVar8 != -1) {
      do {
        iVar4 = *(int *)(*param_1 + 4 + (longlong)iVar8 * 0x10);
        iVar11 = iVar12;
        if (iVar8 < iVar14) {
          bVar6 = (byte)iVar12 & 0x1f;
          uVar10 = 1 << bVar6 | 1U >> 0x20 - bVar6;
          plVar9 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar9 = param_1 + 2;
          }
          do {
            iVar11 = iVar12 + -1;
            uVar10 = uVar10 >> 1 | (uint)((uVar10 & 1) != 0) << 0x1f;
            iVar7 = iVar11;
            if (iVar11 < 0) {
              iVar7 = iVar12 + 0x1e;
            }
            iVar12 = iVar11;
          } while ((*(uint *)((longlong)plVar9 + (longlong)(iVar7 >> 5) * 4) & uVar10) == 0);
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar8 * 0x10 + lVar5),
                     (void *)((longlong)iVar11 * 0x10 + lVar5),0x10);
          plVar9 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar9 = param_1 + 2;
          }
          iVar12 = iVar8;
          if (iVar8 < 0) {
            iVar12 = iVar8 + 0x1f;
          }
          uVar13 = 1;
          puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
        }
        iVar12 = iVar11;
        iVar8 = iVar4;
      } while (iVar4 != -1);
      iVar12 = (int)param_1[1];
    }
    iVar8 = (iVar12 - iVar14) - iVar2;
    if (iVar8 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)((longlong)iVar14 * 0x10 + *param_1),
                 (void *)((longlong)iVar3 * 0x10 + *param_1),(longlong)iVar8 << 4);
      iVar12 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar12 - iVar2;
    TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1);
    TBitArray<FDefaultBitArrayAllocator>::RemoveAt(param_1 + 2,iVar14,iVar2);
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    return uVar13;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1422e7f10 Compact body=402 status=ok
// SIG undefined Compact(void)

ulonglong TSparseArray<TSetElement<TTuple<unsigned_int,FAudioVolumeProxy>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
          ::Compact(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  ulonglong in_RAX;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  
  iVar2 = *(int *)((longlong)param_1 + 0x34);
  if (iVar2 != 0) {
    iVar3 = (int)param_1[1];
    uVar13 = 0;
    iVar8 = (int)param_1[6];
    lVar5 = *param_1;
    iVar14 = iVar3 - iVar2;
    iVar12 = iVar3;
    if (iVar8 != -1) {
      do {
        iVar4 = *(int *)((longlong)iVar8 * 0x70 + 4 + *param_1);
        iVar11 = iVar12;
        if (iVar8 < iVar14) {
          bVar6 = (byte)iVar12 & 0x1f;
          uVar10 = 1 << bVar6 | 1U >> 0x20 - bVar6;
          plVar9 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar9 = param_1 + 2;
          }
          do {
            iVar11 = iVar12 + -1;
            uVar10 = uVar10 >> 1 | (uint)((uVar10 & 1) != 0) << 0x1f;
            iVar7 = iVar11;
            if (iVar11 < 0) {
              iVar7 = iVar12 + 0x1e;
            }
            iVar12 = iVar11;
          } while ((*(uint *)((longlong)plVar9 + (longlong)(iVar7 >> 5) * 4) & uVar10) == 0);
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar8 * 0x70 + lVar5),
                     (void *)((longlong)iVar11 * 0x70 + lVar5),0x70);
          plVar9 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar9 = param_1 + 2;
          }
          iVar12 = iVar8;
          if (iVar8 < 0) {
            iVar12 = iVar8 + 0x1f;
          }
          uVar13 = 1;
          puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
        }
        iVar12 = iVar11;
        iVar8 = iVar4;
      } while (iVar4 != -1);
      iVar12 = (int)param_1[1];
    }
    iVar8 = (iVar12 - iVar14) - iVar2;
    if (iVar8 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)((longlong)iVar14 * 0x70 + *param_1),
                 (void *)((longlong)iVar3 * 0x70 + *param_1),(longlong)iVar8 * 0x70);
      iVar12 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar12 - iVar2;
    TArray<FSvoNode,FDefaultAllocator>::ResizeShrink(param_1);
    TBitArray<FDefaultBitArrayAllocator>::RemoveAt(param_1 + 2,iVar14,iVar2);
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    return uVar13;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1422e80b0 CopyToEmptyStorage body=79 status=ok
// SIG undefined CopyToEmptyStorage(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_043070ee77315251823a80a60def9d5e>_>::
CopyToEmptyStorage(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x70);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_1450377c8;
    ::TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar1 + 2,param_1 + 0x10);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1422e8100 FUN_1422e8100 body=170 status=ok
// SIG undefined FUN_1422e8100(void)

undefined8 * FUN_1422e8100(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x70);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1450377e0;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar2 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(uint *)(puVar2 + 4) =
         *(uint *)(puVar2 + 4) ^ (*(uint *)(param_1 + 0x20) ^ *(uint *)(puVar2 + 4)) & 1;
    *(undefined1 *)((longlong)puVar2 + 0x24) = *(undefined1 *)(param_1 + 0x24);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[6] = *(undefined8 *)(param_1 + 0x30);
    *(undefined4 *)(puVar2 + 7) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)((longlong)puVar2 + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    puVar2[8] = *(undefined8 *)(param_1 + 0x40);
    puVar2[9] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    puVar2[10] = *(undefined8 *)(param_1 + 0x50);
    puVar2[0xb] = uVar1;
    *(undefined4 *)(puVar2 + 0xc) = *(undefined4 *)(param_1 + 0x60);
    puVar2[0xd] = *(undefined8 *)(param_1 + 0x68);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1422e81b0 CopyToEmptyStorage body=63 status=ok
// SIG undefined CopyToEmptyStorage(void)

void UE4Function_Private::TFunction_OwnedObject<<lambda_ba633f788b7b3e2fa7fc79535baf4331>_>::
     CopyToEmptyStorage(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_CopyToEmptyStorage_1450377b0;
    lVar1 = *(longlong *)(param_1 + 8);
    puVar2[1] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0x48) = *(int *)(lVar1 + 0x48) + 1;
      UNLOCK();
      return;
    }
  }
  return;
}



// FUNCTION 1422e81f0 FUN_1422e81f0 body=666 status=ok
// SIG undefined FUN_1422e81f0(void)

bool FUN_1422e81f0(longlong param_1,char param_2,uint *param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  bool bVar11;
  uint uStack_24;
  
  uStack_24 = uStack_24 & 0xfffffffe;
  *param_3 = 0xffffffff;
  param_3[1] = uStack_24;
  param_3[2] = 0;
  param_3[3] = 0;
  if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
    bVar1 = *(byte *)(param_1 + 0x7c);
    if (bVar1 != 1) {
      if ((bVar1 < 2) || ((param_2 != '\0' && (bVar1 < 8)))) {
        lVar7 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x48))();
        *(longlong *)(param_3 + 2) = lVar7;
        if (lVar7 == 0) {
          return false;
        }
        uVar9 = 0xffffffff;
        if (*(uint *)(param_1 + 0x78) < 0x21) {
          iVar2 = *(int *)(param_1 + 0x68);
          *(int *)(param_1 + 0x68) = iVar2 + 1;
          if (*(int *)(param_1 + 0x6c) < iVar2 + 1) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0x60,iVar2);
          }
          *(undefined1 *)((longlong)iVar2 + *(longlong *)(param_1 + 0x60)) = 0;
          iVar2 = *(int *)(param_1 + 0x98);
          uVar9 = *(int *)(param_1 + 0x68) - 1;
          *(int *)(param_1 + 0x98) = iVar2 + 1;
          if (*(int *)(param_1 + 0x9c) < iVar2 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x90,iVar2);
          }
          *(undefined8 *)(*(longlong *)(param_1 + 0x90) + (longlong)iVar2 * 8) =
               *(undefined8 *)(param_3 + 2);
        }
        else {
          lVar7 = **(longlong **)(param_1 + 0x88);
          if (lVar7 != 0) {
            uVar9 = *(uint *)(lVar7 + 8);
            uVar3 = *(undefined8 *)(param_1 + 0x88);
            *(longlong *)(param_1 + 0x88) = lVar7;
            *(undefined4 *)(lVar7 + 8) = 0;
            FMemory::operator_delete(uVar3,0x10);
          }
          *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + -1;
          *(undefined8 *)(*(longlong *)(param_1 + 0x90) + (longlong)(int)uVar9 * 8) =
               *(undefined8 *)(param_3 + 2);
        }
        *(byte *)(param_3 + 1) = (byte)param_3[1] | 1;
        uVar9 = (uint)*(byte *)(*(longlong *)(param_1 + 0x60) + (longlong)(int)uVar9) << 0x18 |
                uVar9;
        *param_3 = uVar9;
        *(uint *)(*(longlong *)(param_3 + 2) + 0x3c) = uVar9;
      }
      else {
        *(char *)(param_1 + 0x7d) = *(char *)(param_1 + 0x7d) + '\x01';
        lVar7 = FUN_142875430(DAT_146b17150);
        if (lVar7 != 0) {
          *param_3 = *(uint *)(lVar7 + 0x3c);
          *(longlong *)(param_3 + 2) = lVar7;
        }
      }
      *(char *)(param_1 + 0x7c) = *(char *)(param_1 + 0x7c) + '\x01';
      plVar6 = (longlong *)UAudioSettings::GetPrivateStaticClass();
      lVar7 = plVar6[0x1f];
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x368))(plVar6);
        lVar7 = plVar6[0x1f];
      }
      lVar8 = *(longlong *)(lVar7 + 0xc0);
      lVar10 = (longlong)*(int *)(lVar7 + 200) * 0x20 + lVar8;
      iVar2 = -1;
      for (; lVar8 != lVar10; lVar8 = lVar8 + 0x20) {
        iVar5 = *(int *)(lVar8 + 0x18);
        if (*(int *)(lVar8 + 0x18) <= iVar2) {
          iVar5 = iVar2;
        }
        iVar2 = iVar5;
      }
      cVar4 = FUN_1422cff30(*(undefined8 *)(param_3 + 2));
      if (cVar4 == '\0') {
        FUN_1422fa430(param_1,*param_3);
        *param_3 = 0xffffffff;
        param_3[1] = uStack_24;
        param_3[2] = 0;
        param_3[3] = 0;
      }
      else {
        lVar8 = FUN_142874ac0(DAT_146b17150);
        iVar2 = *(int *)(lVar8 + 0xa8);
        iVar5 = 0;
        if ((-1 < iVar2) && (iVar5 = *(int *)(lVar7 + 200) + -1, iVar2 < iVar5)) {
          iVar5 = iVar2;
        }
        (**(code **)(**(longlong **)(param_3 + 2) + 0x38))
                  (*(longlong **)(param_3 + 2),
                   *(undefined4 *)((longlong)iVar5 * 0x20 + 0x18 + *(longlong *)(lVar7 + 0xc0)));
      }
      bVar11 = *(longlong **)(param_3 + 2) == (longlong *)0x0;
      if (!bVar11) {
        (**(code **)(**(longlong **)(param_3 + 2) + 0x28))();
        bVar11 = *(longlong *)(param_3 + 2) == 0;
      }
      return !bVar11;
    }
    plVar6 = (longlong *)FUN_142875430(DAT_146b17150);
    if (plVar6 != (longlong *)0x0) {
      *param_3 = *(uint *)((longlong)plVar6 + 0x3c);
      *(longlong **)(param_3 + 2) = plVar6;
      (**(code **)(*plVar6 + 0x28))(plVar6);
      return true;
    }
  }
  return false;
}



// FUNCTION 1422e8490 FUN_1422e8490 body=471 status=ok
// SIG undefined FUN_1422e8490(void)

void FUN_1422e8490(longlong param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  
  cVar3 = UObjectBaseUtility::IsTemplate(param_2,0x30);
  if (cVar3 == '\0') {
    iVar1 = *(int *)(param_2 + 0xc);
    uVar9 = 0;
    uVar5 = uVar9;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar8 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar8;
      uVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
    }
    if (((*(uint *)(uVar5 + 8) >> 0x1d & 1) == 0) && (param_1 != 0)) {
      lVar6 = UBlueprintGeneratedClass::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        plVar11 = *(longlong **)(param_1 + 0x228);
        uVar5 = (longlong)*(int *)(param_1 + 0x230) & 0x1fffffffffffffff;
        if (plVar11 + *(int *)(param_1 + 0x230) < plVar11) {
          uVar5 = uVar9;
        }
        if (uVar5 != 0) {
          do {
            if ((*plVar11 != 0) && ((*(byte *)(*plVar11 + 0x30) & 8) != 0)) {
              FUN_1422e8c00(param_2);
            }
            plVar11 = plVar11 + 1;
            uVar9 = uVar9 + 1;
          } while (uVar9 != uVar5);
        }
      }
      else {
        lVar6 = UDynamicClass::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          plVar10 = *(longlong **)(param_1 + 0x250);
          plVar11 = plVar10 + *(int *)(param_1 + 600);
          for (; plVar10 != plVar11; plVar10 = plVar10 + 1) {
            lVar6 = *plVar10;
            if (lVar6 != 0) {
              lVar7 = UTimelineTemplate::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if ((bVar2) && ((*(byte *)(lVar6 + 0x30) & 8) != 0)) {
                FUN_1422e8c00(param_2,lVar6);
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1422e8670 FUN_1422e8670 body=78 status=ok
// SIG undefined FUN_1422e8670(void)

void FUN_1422e8670(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1450377f8;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_FUN_145037840;
  }
  return;
}



// FUNCTION 1422e86c0 FUN_1422e86c0 body=471 status=ok
// SIG undefined FUN_1422e86c0(void)

void FUN_1422e86c0(longlong param_1,longlong param_2,char param_3,char param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  void *_Dst;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = *(longlong *)(param_1 + 200);
  if (lVar6 != 0) {
    lVar5 = UBlueprint::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (*(char *)(lVar6 + 0xa0) == '\x02')) {
      return;
    }
  }
  if ((((param_2 != 0) && (cVar4 = FUN_1422fc1b0(), cVar4 != '\0')) &&
      (*(longlong *)(param_1 + 0x248) != 0)) && (lVar6 = *(longlong *)(param_1 + 0x250), lVar6 != 0)
     ) {
    lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0x248) + 0x44);
    lVar5 = *(longlong *)(lVar7 + param_2);
    if (param_3 == '\0') {
      if (lVar5 != 0) {
        FMemory::Free(lVar5);
        *(undefined8 *)(lVar7 + param_2) = 0;
        lVar6 = *(longlong *)(param_1 + 0x250);
      }
    }
    else if (lVar5 != 0) goto LAB_1422e885e;
    _Dst = (void *)0x0;
    if ((*(uint *)(lVar6 + 8) >> 0x15 & 1) != 0) {
      _Dst = (void *)FMemory::Malloc((longlong)
                                     (int)(*(int *)(lVar6 + 0x40) + -1 + *(int *)(lVar6 + 0x44) &
                                          ~(*(int *)(lVar6 + 0x44) - 1U)),0);
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x250) + 0x44);
      _guard_xfg_dispatch_icall_nop
                (_Dst,0,(longlong)
                        (int)(*(int *)(*(longlong *)(param_1 + 0x250) + 0x40) + -1 + iVar1 &
                             ~(iVar1 - 1U)));
      for (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x250) + 0x58); plVar2 != (longlong *)0x0
          ; plVar2 = (longlong *)plVar2[10]) {
        if ((*(uint *)(plVar2 + 7) >> 9 & 1) == 0) {
          (**(code **)(*plVar2 + 0x330))(plVar2);
        }
        else {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)*(int *)((longlong)plVar2 + 0x44) + (longlong)_Dst),0,
                     (longlong)(*(int *)((longlong)plVar2 + 0x34) * (int)plVar2[6]));
        }
      }
    }
    *(void **)(lVar7 + param_2) = _Dst;
  }
LAB_1422e885e:
  if (param_4 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x318))
              (*(longlong **)(param_1 + 0x30),param_2,param_3,0,0);
  }
  return;
}



// FUNCTION 1422e88a0 FUN_1422e88a0 body=642 status=ok
// SIG undefined FUN_1422e88a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1422e88a0(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined1 auStack_2f8 [32];
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_208;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  longlong local_f0;
  undefined4 local_e8;
  undefined1 local_e0 [64];
  longlong local_a0;
  undefined4 local_98;
  char local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined2 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  undefined2 local_28;
  undefined1 local_26;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_2f8;
  local_208 = 0;
  local_188 = 0;
  local_170 = _DAT_1468b5d78;
  uStack_168 = uRam00000001468b5d80;
  local_1b8 = *param_3;
  local_160 = _DAT_1468b5d78;
  uStack_158 = uRam00000001468b5d80;
  local_180 = 0xffffffff;
  local_1b4 = param_3[1];
  local_1b0 = param_3[2];
  local_1ac = param_3[3];
  local_198 = 0;
  uStack_190 = 0;
  local_150 = _DAT_1464aa6c0;
  uStack_148 = _DAT_1464aa6c8;
  local_138 = 0x42c80000;
  local_80 = 0x3f800000;
  local_58 = 0;
  uStack_50 = 0;
  local_7c = 0xbf800000;
  local_2d8 = _DAT_1468b5d90;
  local_48 = 0;
  uStack_40 = 0;
  local_2c8 = _DAT_1464aa7d0;
  uStack_2c0 = _DAT_1464aa7d8;
  local_2b8 = _DAT_1464aa7e0;
  uStack_2b0 = _DAT_1464aa7e8;
  local_2a8 = _DAT_1464aa7f0;
  uStack_2a0 = _DAT_1464aa7f8;
  local_288 = *param_2;
  uStack_280 = param_2[1];
  local_298 = _DAT_1464aa800;
  uStack_290 = uRam00000001464aa808;
  local_278 = param_2[2];
  uStack_270 = param_2[3];
  local_268 = *(undefined4 *)(param_2 + 4);
  uStack_264 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_260 = *(undefined4 *)(param_2 + 5);
  uStack_25c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_258 = *(undefined4 *)(param_2 + 6);
  uStack_254 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_250 = *(undefined4 *)(param_2 + 7);
  uStack_24c = *(undefined4 *)((longlong)param_2 + 0x3c);
  local_178 = 0;
  local_140 = 0;
  local_130 = 0;
  local_128 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0xffffffff;
  local_fc = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_90 = '\0';
  local_88 = 0xffffffffffffffff;
  local_78 = 0;
  local_70 = 0;
  local_6c = 0x100;
  local_68 = 0x42b40000;
  local_64 = 0x42b40000;
  local_60 = 0;
  local_38 = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = 1;
  local_26 = 0;
  local_2d0 = DAT_1468b5d98;
  local_1a8 = local_1b8;
  local_1a4 = local_1b4;
  local_1a0 = local_1b0;
  local_19c = local_1ac;
  FUN_142742170(param_1,&local_2d8);
  if (local_90 != '\0') {
    local_90 = '\0';
    local_98 = 0;
    if (local_a0 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (local_e0);
  }
  local_e8 = 0;
  if (local_f0 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_130);
  return param_1;
}



// FUNCTION 1422e8b30 FUN_1422e8b30 body=198 status=ok
// SIG undefined FUN_1422e8b30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1422e8b30(undefined8 param_1)

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
  local_88 = 0x10100;
  local_84 = 0x80101;
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



// FUNCTION 1422e8c00 FUN_1422e8c00 body=1392 status=ok
// SIG undefined FUN_1422e8c00(void)

void FUN_1422e8c00(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  undefined2 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined2 *puVar15;
  undefined8 local_res8;
  longlong local_res18 [2];
  undefined8 in_stack_ffffffffffffff48;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  int local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  
  uVar14 = (uint)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  if ((((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_2 + 0x30) & 8) != 0)) &&
     (cVar3 = UObjectBaseUtility::IsTemplate(param_1,0x30), cVar3 == '\0')) {
    iVar1 = *(int *)(param_1 + 0xc);
    uVar13 = 0;
    uVar5 = uVar13;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar10 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar10;
      uVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar10) * 0x18;
    }
    if ((*(uint *)(uVar5 + 8) >> 0x1d & 1) == 0) {
      puVar6 = (undefined8 *)FUN_1428927f0(&local_48,*(undefined8 *)(param_2 + 0x18));
      puVar15 = &DAT_143f3eda8;
      if (*(int *)(puVar6 + 1) == 0) {
        puVar11 = &DAT_143f3eda8;
      }
      else {
        puVar11 = (undefined2 *)*puVar6;
      }
      FName::FName(local_res18,puVar11,1);
      if (CONCAT44(uStack_44,local_48) != 0) {
        FMemory::Free();
      }
      local_res8 = 0;
      if (local_res18[0] == 0) {
        FUN_1417846f0(param_1,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
      }
      uVar7 = UMaterialInstanceDynamic::GetPrivateStaticClass();
      lVar8 = FUN_1417985e0(uVar7,param_1,local_res18[0],0,(ulonglong)uVar14 << 0x20,0,0,0,0);
      *(undefined1 *)(lVar8 + 0xca) = 2;
      iVar1 = *(int *)(param_1 + 0x328);
      *(int *)(param_1 + 0x328) = iVar1 + 1;
      if (*(int *)(param_1 + 0x32c) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 800,iVar1);
      }
      *(longlong *)(*(longlong *)(param_1 + 800) + (longlong)iVar1 * 8) = lVar8;
      FUN_1423511e0(lVar8);
      FUN_14288e1c0(lVar8,param_1);
      puVar6 = (undefined8 *)UTimelineTemplate::GetDirectionPropertyName(param_2,&local_res8);
      FUN_14288d420(lVar8,*puVar6);
      FUN_14288e6a0(lVar8,*(undefined4 *)(param_2 + 0x28));
      FUN_14288e6f0(lVar8,*(undefined1 *)(param_2 + 0x2c));
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      puVar6 = (undefined8 *)FUN_1428927f0(&local_48,*(undefined8 *)(param_2 + 0x18));
      if (*(int *)(puVar6 + 1) != 0) {
        puVar15 = (undefined2 *)*puVar6;
      }
      FName::FName(&local_res8,puVar15,0);
      plVar9 = (longlong *)FUN_140c2d5e0(uVar7,local_res8);
      if (CONCAT44(uStack_44,local_48) != 0) {
        FMemory::Free();
      }
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x380))(plVar9,*(int *)((longlong)plVar9 + 0x44) + param_1,lVar8);
      }
      uVar5 = uVar13;
      if (0 < *(int *)(param_2 + 0x40)) {
        do {
          lVar2 = *(longlong *)(param_2 + 0x38);
          if (*(longlong *)(uVar5 + 0x10 + lVar2) != 0) {
            FWeakObjectPtr::operator=(&local_88,0);
            local_80 = 0;
            puVar6 = (undefined8 *)
                     UTimelineTemplate::GetEventTrackFunctionName(param_2,&local_res8,uVar13);
            FWeakObjectPtr::operator=(&local_88,param_1);
            local_80 = *puVar6;
            FRichCurve::GetKeyIterator(*(longlong *)(uVar5 + 0x10 + lVar2) + 0x30);
            for (; (-1 < local_50 && (local_50 < (int)local_58[1])); local_50 = local_50 + 1) {
              local_48 = local_88;
              uStack_44 = local_84;
              local_40 = local_80;
              FUN_142864ea0(lVar8,*(undefined4 *)((longlong)local_50 * 0x1c + 4 + *local_58),
                            &local_48);
            }
          }
          uVar14 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar14;
          uVar5 = uVar5 + 0x18;
        } while ((int)uVar14 < *(int *)(param_2 + 0x40));
      }
      uVar12 = 0;
      uVar5 = uVar12;
      uVar13 = uVar12;
      if (0 < *(int *)(param_2 + 0x50)) {
        do {
          lVar2 = *(longlong *)(param_2 + 0x48);
          if (*(longlong *)(uVar5 + 0x10 + lVar2) != 0) {
            FWeakObjectPtr::operator=(&local_48,0);
            local_40 = 0;
            puVar6 = (undefined8 *)
                     UTimelineTemplate::GetTrackPropertyName
                               (param_2,&local_res8,*(undefined8 *)(uVar5 + lVar2));
            FUN_142865210(lVar8,*(undefined8 *)(uVar5 + 0x10 + lVar2),&local_48,*puVar6,
                          *(undefined8 *)(uVar5 + lVar2));
          }
          uVar14 = (int)uVar13 + 1;
          uVar5 = uVar5 + 0x18;
          uVar13 = (ulonglong)uVar14;
        } while ((int)uVar14 < *(int *)(param_2 + 0x50));
      }
      uVar5 = uVar12;
      uVar13 = uVar12;
      if (0 < *(int *)(param_2 + 0x60)) {
        do {
          lVar2 = *(longlong *)(param_2 + 0x58);
          if (*(longlong *)(uVar5 + 0x10 + lVar2) != 0) {
            FWeakObjectPtr::operator=(&local_48,0);
            local_40 = 0;
            puVar6 = (undefined8 *)
                     UTimelineTemplate::GetTrackPropertyName
                               (param_2,&local_res8,*(undefined8 *)(uVar5 + lVar2));
            FUN_142865470(lVar8,*(undefined8 *)(uVar5 + 0x10 + lVar2),&local_48,*puVar6,
                          *(undefined8 *)(uVar5 + lVar2));
          }
          uVar14 = (int)uVar13 + 1;
          uVar5 = uVar5 + 0x18;
          uVar13 = (ulonglong)uVar14;
        } while ((int)uVar14 < *(int *)(param_2 + 0x60));
      }
      uVar5 = uVar12;
      if (0 < *(int *)(param_2 + 0x70)) {
        do {
          lVar2 = *(longlong *)(param_2 + 0x68);
          if (*(longlong *)(uVar12 + 0x10 + lVar2) != 0) {
            FWeakObjectPtr::operator=(&local_48,0);
            local_40 = 0;
            puVar6 = (undefined8 *)
                     UTimelineTemplate::GetTrackPropertyName
                               (param_2,&local_res8,*(undefined8 *)(uVar12 + lVar2));
            FUN_142865340(lVar8,*(undefined8 *)(uVar12 + 0x10 + lVar2),&local_48,*puVar6,
                          *(undefined8 *)(uVar12 + lVar2));
          }
          uVar14 = (int)uVar5 + 1;
          uVar12 = uVar12 + 0x18;
          uVar5 = (ulonglong)uVar14;
        } while ((int)uVar14 < *(int *)(param_2 + 0x70));
      }
      FWeakObjectPtr::operator=(&local_78,0);
      local_70 = 0;
      puVar6 = (undefined8 *)UTimelineTemplate::GetUpdateFunctionName(param_2,&local_res8);
      FWeakObjectPtr::operator=(&local_78,param_1);
      local_70 = *puVar6;
      local_48 = local_78;
      uStack_44 = local_74;
      local_40 = local_70;
      FUN_14288e700(lVar8,&local_48);
      FWeakObjectPtr::operator=(&local_68,0);
      local_60 = 0;
      puVar6 = (undefined8 *)UTimelineTemplate::GetFinishedFunctionName(param_2,&local_res8);
      FWeakObjectPtr::operator=(&local_68,param_1);
      local_60 = *puVar6;
      local_48 = local_68;
      uStack_44 = local_64;
      local_40 = local_60;
      FUN_14288e680(lVar8,&local_48);
      FUN_14234b150(lVar8);
      uVar14 = *(uint *)(param_2 + 0x30);
      if ((uVar14 & 1) != 0) {
        *(byte *)(lVar8 + 0xba) = *(byte *)(lVar8 + 0xba) | 2;
        FUN_1428846a0(lVar8);
        uVar14 = *(uint *)(param_2 + 0x30);
      }
      if ((uVar14 & 2) != 0) {
        FUN_14288d660(lVar8,1);
        uVar14 = *(uint *)(param_2 + 0x30);
      }
      if ((uVar14 & 4) != 0) {
        FUN_142350b20(lVar8,1);
        uVar14 = *(uint *)(param_2 + 0x30);
      }
      if ((uVar14 & 0x10) != 0) {
        FUN_14288d600(lVar8,1);
      }
    }
  }
  return;
}



// FUNCTION 1422e9170 DefaultConstrainCamera body=136 status=ok
// SIG undefined DefaultConstrainCamera(void)

void FCameraPhotographyManager::DefaultConstrainCamera
               (longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
               undefined8 *param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  uVar1 = *(undefined4 *)(param_2 + 1);
  *param_5 = *param_2;
  *(undefined4 *)(param_5 + 1) = uVar1;
  param_1 = (longlong *)*param_1;
  if (param_1 != (longlong *)0x0) {
    local_30 = *(undefined4 *)(param_4 + 1);
    local_38 = *param_4;
    local_20 = *(undefined4 *)(param_3 + 1);
    local_10 = *(undefined4 *)(param_2 + 1);
    local_28 = *param_3;
    local_18 = *param_2;
    (**(code **)(*param_1 + 0x38))(param_1,&local_18,&local_28,&local_38,param_5,param_6);
  }
  return;
}



// FUNCTION 1422e9200 FUN_1422e9200 body=231 status=ok
// SIG undefined FUN_1422e9200(void)

void FUN_1422e9200(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong local_18;
  longlong *local_10;
  
  plVar6 = DAT_146aef570;
  if (DAT_146aef570 != (longlong *)0x0) {
    if ((*DAT_146aef570 != 0) && (local_10 = (longlong *)0x0, DAT_146aef570 != &local_18)) {
      plVar4 = DAT_146aef570 + 1;
      *DAT_146aef570 = 0;
      local_18 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(plVar4,&local_10);
      plVar4 = local_10;
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_10 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_10)(local_10);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_10 + 8))(local_10,1);
          }
        }
      }
    }
    plVar4 = (longlong *)plVar6[1];
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
    FMemory::operator_delete(plVar6,0x10);
  }
  DAT_146aef570 = (longlong *)0x0;
  return;
}



// FUNCTION 1422e92f0 FUN_1422e92f0 body=228 status=ok
// SIG undefined FUN_1422e92f0(void)

void FUN_1422e92f0(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  
  if ((((param_2 != 0) && (cVar3 = FUN_1422fc1b0(), cVar3 != '\0')) &&
      (*(longlong *)(param_1 + 0x248) != 0)) && (*(longlong *)(param_1 + 0x250) != 0)) {
    lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + 0x248) + 0x44);
    lVar1 = *(longlong *)(lVar4 + param_2);
    *(undefined8 *)(lVar4 + param_2) = 0;
    if (lVar1 != 0) {
      for (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x250) + 0x58); plVar2 != (longlong *)0x0
          ; plVar2 = (longlong *)plVar2[10]) {
        if ((~(byte)((ulonglong)plVar2[7] >> 0x24) & 1) != 0) {
          (**(code **)(*plVar2 + 0x328))(plVar2,*(int *)((longlong)plVar2 + 0x44) + lVar1);
        }
      }
      FMemory::Free(lVar1);
    }
  }
  if (param_3 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 800))(*(longlong **)(param_1 + 0x30),param_2,0);
  }
  return;
}



// FUNCTION 1422e9400 FUN_1422e9400 body=12717 status=ok
// SIG undefined FUN_1422e9400(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1422e9400(float *param_1,longlong param_2,undefined8 *param_3,undefined4 param_4,
             undefined1 param_5,longlong param_6,undefined1 param_7,undefined4 param_8,uint param_9)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  void *_Src;
  char cVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  void *pvVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  float *pfVar17;
  ulonglong uVar18;
  float *pfVar19;
  int iVar20;
  longlong lVar21;
  int *piVar22;
  uint uVar23;
  longlong lVar24;
  uint uVar25;
  void *pvVar26;
  longlong lVar27;
  float *pfVar28;
  ulonglong *puVar29;
  bool bVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar41 [16];
  float fVar42;
  undefined1 auVar43 [16];
  float fVar44;
  undefined1 auStack_a28 [32];
  float local_a08;
  float *local_a00;
  float *local_9f8;
  float *local_9f0;
  float *local_9e8;
  undefined1 local_9e0;
  undefined4 local_9d8;
  int *local_9d0;
  longlong local_9c8;
  float local_9b8;
  float local_9b4;
  undefined8 *local_9b0;
  float local_9a8;
  float local_9a4;
  float local_9a0;
  float local_99c;
  float local_998;
  undefined1 local_994 [4];
  undefined4 local_990;
  undefined4 local_98c;
  int local_988;
  float *local_980;
  float local_978;
  float local_974;
  uint local_970;
  float local_968;
  float local_964;
  float local_960;
  longlong local_958;
  uint local_950;
  uint local_94c;
  longlong local_948;
  int local_940;
  int local_93c;
  float *local_938;
  int local_930 [2];
  undefined1 local_928 [16];
  longlong local_918;
  void *local_910;
  longlong local_908;
  undefined1 local_8f8 [16];
  undefined4 local_8e8 [2];
  undefined4 local_8e0 [2];
  undefined4 local_8d8 [2];
  undefined4 local_8d0 [2];
  undefined4 local_8c8 [2];
  undefined4 local_8c0 [2];
  undefined4 local_8b8 [2];
  undefined4 local_8b0 [2];
  undefined4 local_8a8 [2];
  undefined4 local_8a0 [2];
  undefined4 local_898 [2];
  undefined4 local_890 [2];
  undefined4 local_888 [2];
  undefined4 local_880 [2];
  undefined4 local_878 [2];
  undefined4 local_870 [2];
  undefined4 local_868 [2];
  undefined4 local_860 [2];
  undefined4 local_858 [2];
  undefined4 local_850 [2];
  undefined4 local_848 [2];
  undefined4 local_840 [2];
  undefined4 local_838 [2];
  undefined4 local_830 [2];
  undefined4 local_828 [2];
  undefined4 local_820 [2];
  undefined4 local_818 [2];
  undefined2 local_810 [2];
  undefined8 local_80c;
  undefined2 local_804;
  undefined2 local_800 [2];
  undefined4 local_7fc;
  float local_7f8;
  undefined2 local_7f4;
  float local_7e8;
  float fStack_7e4;
  float fStack_7e0;
  float fStack_7dc;
  float local_7d8;
  float fStack_7d4;
  float fStack_7d0;
  float fStack_7cc;
  float local_7c8;
  float fStack_7c4;
  float fStack_7c0;
  undefined4 uStack_7bc;
  undefined8 local_7b8;
  undefined4 uStack_7b0;
  undefined4 uStack_7ac;
  undefined4 uStack_7a8;
  undefined4 uStack_7a4;
  undefined4 local_7a0;
  float local_79c;
  float fStack_798;
  float fStack_794;
  undefined4 uStack_790;
  undefined8 local_78c;
  undefined4 uStack_784;
  undefined4 uStack_780;
  undefined4 uStack_77c;
  undefined4 uStack_778;
  undefined4 local_774;
  float local_770;
  float fStack_76c;
  float fStack_768;
  undefined4 uStack_764;
  undefined4 local_760;
  undefined4 uStack_75c;
  undefined4 uStack_758;
  undefined4 uStack_754;
  undefined4 uStack_750;
  undefined4 uStack_74c;
  undefined4 local_748;
  float local_744;
  float fStack_740;
  float fStack_73c;
  undefined4 uStack_738;
  undefined4 uStack_734;
  undefined4 uStack_730;
  undefined4 uStack_72c;
  undefined4 uStack_728;
  undefined4 uStack_724;
  undefined4 uStack_720;
  undefined4 local_71c;
  float local_718;
  float fStack_714;
  float fStack_710;
  undefined4 uStack_70c;
  undefined4 local_708;
  undefined4 uStack_704;
  undefined4 uStack_700;
  undefined4 uStack_6fc;
  undefined4 uStack_6f8;
  undefined4 uStack_6f4;
  undefined4 local_6f0;
  float local_6ec;
  float fStack_6e8;
  float fStack_6e4;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  undefined4 uStack_6d8;
  undefined4 uStack_6d4;
  undefined4 uStack_6d0;
  undefined4 uStack_6cc;
  undefined4 uStack_6c8;
  undefined4 local_6c4;
  float local_6c0;
  float fStack_6bc;
  float fStack_6b8;
  undefined4 uStack_6b4;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  undefined4 uStack_6a8;
  undefined4 uStack_6a4;
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  undefined4 local_698;
  float local_694;
  float fStack_690;
  float fStack_68c;
  undefined4 uStack_688;
  undefined8 local_684;
  undefined4 uStack_67c;
  undefined4 uStack_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined4 local_66c;
  float local_668;
  float fStack_664;
  float fStack_660;
  undefined4 uStack_65c;
  undefined4 local_658;
  undefined4 uStack_654;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  undefined4 uStack_648;
  undefined4 uStack_644;
  undefined4 local_640;
  float local_63c;
  float fStack_638;
  float fStack_634;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined4 uStack_628;
  undefined4 uStack_624;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  undefined4 uStack_618;
  undefined4 local_614;
  float local_610;
  float fStack_60c;
  float fStack_608;
  undefined4 uStack_604;
  undefined4 local_600;
  undefined4 uStack_5fc;
  undefined4 uStack_5f8;
  undefined4 uStack_5f4;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  undefined4 local_5e8;
  float local_5e4;
  float fStack_5e0;
  float fStack_5dc;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined4 uStack_5c8;
  undefined4 uStack_5c4;
  undefined4 uStack_5c0;
  undefined4 local_5bc;
  float local_5b8;
  float fStack_5b4;
  float fStack_5b0;
  undefined4 uStack_5ac;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined4 uStack_598;
  undefined4 uStack_594;
  undefined4 local_590;
  float local_58c;
  float fStack_588;
  float fStack_584;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined4 uStack_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined4 uStack_568;
  undefined4 local_564;
  float local_560;
  float fStack_55c;
  float fStack_558;
  undefined4 uStack_554;
  undefined4 local_550;
  undefined4 uStack_54c;
  undefined4 uStack_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined4 local_538;
  float local_534;
  float fStack_530;
  float fStack_52c;
  undefined4 uStack_528;
  undefined4 uStack_524;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  undefined4 uStack_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 local_50c;
  float local_508;
  float fStack_504;
  float fStack_500;
  undefined4 uStack_4fc;
  undefined4 local_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined4 uStack_4e8;
  undefined4 uStack_4e4;
  undefined4 local_4e0;
  float local_4dc;
  float fStack_4d8;
  float fStack_4d4;
  undefined4 uStack_4d0;
  undefined4 local_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 local_4b4;
  float local_4b0;
  float fStack_4ac;
  float fStack_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined4 local_488;
  float local_484;
  float fStack_480;
  float fStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 local_45c;
  float local_458;
  float fStack_454;
  float fStack_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 local_430;
  float local_42c;
  float fStack_428;
  float fStack_424;
  undefined4 uStack_420;
  undefined8 local_41c;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 local_404;
  float local_400;
  float fStack_3fc;
  float fStack_3f8;
  undefined4 uStack_3f4;
  undefined8 local_3f0;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 local_3d8;
  float local_3d4;
  float fStack_3d0;
  float fStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 local_3ac;
  float local_3a8;
  float fStack_3a4;
  float fStack_3a0;
  undefined4 uStack_39c;
  float local_398;
  float fStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 local_380;
  float local_37c;
  float fStack_378;
  float fStack_374;
  undefined4 uStack_370;
  float local_36c;
  float fStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 local_354;
  float local_350;
  float fStack_34c;
  float fStack_348;
  undefined4 uStack_344;
  float local_340;
  float fStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  float local_324;
  float fStack_320;
  float fStack_31c;
  undefined4 uStack_318;
  float local_314;
  float fStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 local_2fc;
  float local_2f8;
  float fStack_2f4;
  float fStack_2f0;
  undefined4 uStack_2ec;
  float local_2e8;
  float fStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 local_2d0;
  float local_2cc;
  float fStack_2c8;
  float fStack_2c4;
  undefined4 uStack_2c0;
  float local_2bc;
  float fStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  uint local_2a4 [3];
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  void *local_278;
  float local_270;
  float local_26c;
  ulonglong local_268;
  float local_260;
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
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  float *pfStack_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  uint local_168;
  int local_164 [16];
  undefined1 auStack_124 [4];
  undefined8 local_120;
  undefined4 local_118;
  ulonglong local_114;
  undefined8 local_10c;
  undefined4 local_104;
  ulonglong local_f8;
  
  local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_a28;
  uVar18 = 0;
  local_958 = param_6;
  pfVar28 = (float *)(param_6 + 0x590);
  local_9b8 = (float)(*(int *)(param_6 + 0x374) - *(int *)(param_6 + 0x36c));
  uVar23 = *(int *)(param_6 + 0x370) - *(int *)(param_6 + 0x368);
  local_168 = *(uint *)(param_2 + 0x98);
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  pfStack_180 = (float *)0x0;
  local_170 = 0;
  local_16c = 0x26;
  local_164[0] = 0;
  local_164[1] = 0;
  local_164[2] = 0;
  local_164[3] = 0;
  local_164[4] = 0;
  local_164[5] = 0;
  local_164[6] = 0;
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
  uVar16 = uVar18;
  if (local_168 != 0) {
    do {
      lVar27 = *(longlong *)(param_2 + 0xa0 + uVar16 * 0x18);
      if (lVar27 == 0) {
        local_164[uVar16] = 0;
      }
      else {
        local_164[uVar16] = *(int *)(lVar27 + 0x3c);
        local_164[uVar16 + 8] = *(int *)(lVar27 + 0x40);
      }
      auStack_124[uVar16] = *(undefined1 *)(param_2 + 0xb0 + uVar16 * 0x18);
      *(undefined1 *)((longlong)&local_120 + uVar16 + 4) =
           *(undefined1 *)(param_2 + 0xb1 + uVar16 * 0x18);
      if (local_164[uVar16] != 0) {
        local_104 = CONCAT22(local_104._2_2_,(short)*(undefined4 *)(lVar27 + 0x38));
      }
      uVar25 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar25;
    } while (uVar25 < local_168);
  }
  lVar27 = *(longlong *)(param_2 + 0x160);
  if (lVar27 == 0) {
    local_114 = local_114 & 0xffffffff00000000;
  }
  else {
    uVar18 = (ulonglong)*(uint *)(lVar27 + 0x3c);
    local_114 = *(ulonglong *)(lVar27 + 0x3c);
  }
  local_10c = *(undefined8 *)(param_2 + 0x168);
  if ((int)uVar18 != 0) {
    local_104 = CONCAT22(local_104._2_2_,(short)*(undefined4 *)(lVar27 + 0x38));
  }
  local_188 = *param_3;
  local_178 = param_3[1];
  local_98c = *(undefined4 *)(param_3 + 5);
  local_990 = param_4;
  local_980 = param_1;
  local_94c = uVar23;
  local_938 = pfVar28;
  pfStack_180 = (float *)FUN_140985530();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468509e4) && (_Init_thread_header(&DAT_1468509e4), DAT_1468509e4 == -1))
  {
    uVar9 = FCommandLine::Get();
    DAT_1468509e0 = FParse::Param(uVar9,L"nullrhi");
    _Init_thread_footer(&DAT_1468509e4);
  }
  if ((((DAT_1468b616c != '\0') && (DAT_1468b616d == '\0')) || (DAT_1468509e0 != '\0')) ||
     ((((param_1[4] == 0.0 && (param_1[8] == 0.0)) &&
       ((param_1[0x18] == 0.0 && ((param_1[0x4e] == 0.0 && (param_1[0x14] == 0.0)))))) &&
      ((int)param_1[0xc] < 1)))) {
    return 0;
  }
  FMatrix::Inverse(pfVar28,&local_228);
  local_1e8 = 0x3f800000;
  uStack_1e4 = 0;
  uStack_1e0 = 0;
  uStack_1dc = 0;
  local_9a8 = 0.0;
  local_258 = local_1f8 * 0.0 + local_208 * 0.0 + local_218 * 0.0 + local_228 * 1.0;
  fStack_254 = fStack_1f4 * 0.0 + fStack_204 * 0.0 + fStack_214 * 0.0 + fStack_224 * 1.0;
  fStack_250 = fStack_1f0 * 0.0 + fStack_200 * 0.0 + fStack_210 * 0.0 + fStack_220 * 1.0;
  fStack_24c = fStack_1ec * 0.0 + fStack_1fc * 0.0 + fStack_20c * 0.0 + fStack_21c * 1.0;
  fVar31 = fStack_254 * fStack_254 + local_258 * local_258 + fStack_250 * fStack_250;
  if (fVar31 <= 1e-08) {
    fVar31 = 0.0;
    local_99c = 0.0;
    auVar41 = ZEXT816(0);
  }
  else {
    auVar41 = rsqrtss(ZEXT416((uint)fVar31),ZEXT416((uint)fVar31));
    local_26c = auVar41._0_4_;
    local_26c = local_26c + local_26c * (0.5 - fVar31 * 0.5 * local_26c * local_26c);
    local_26c = local_26c + local_26c * (0.5 - fVar31 * 0.5 * local_26c * local_26c);
    fVar31 = local_26c * local_258;
    local_99c = local_26c * fStack_254;
    auVar41._0_4_ = local_26c * fStack_250;
  }
  local_1d8 = 0;
  uStack_1d4 = 0x3f800000;
  uStack_1d0 = 0;
  uStack_1cc = 0;
  local_970 = auVar41._0_4_;
  local_298 = local_1f8 * 0.0 + local_208 * 0.0 + local_218 * 1.0 + local_228 * 0.0;
  fStack_294 = fStack_1f4 * 0.0 + fStack_204 * 0.0 + fStack_214 * 1.0 + fStack_224 * 0.0;
  fStack_290 = fStack_1f0 * 0.0 + fStack_200 * 0.0 + fStack_210 * 1.0 + fStack_220 * 0.0;
  fStack_28c = fStack_1ec * 0.0 + fStack_1fc * 0.0 + fStack_20c * 1.0 + fStack_21c * 0.0;
  fVar32 = fStack_294 * fStack_294 + local_298 * local_298 + fStack_290 * fStack_290;
  if (fVar32 <= 1e-08) {
    local_9a0 = 0.0;
    auVar43 = ZEXT816(0);
  }
  else {
    auVar43 = rsqrtss(ZEXT416((uint)fVar32),ZEXT416((uint)fVar32));
    local_270 = auVar43._0_4_;
    local_270 = local_270 + local_270 * (0.5 - fVar32 * 0.5 * local_270 * local_270);
    local_270 = local_270 + local_270 * (0.5 - fVar32 * 0.5 * local_270 * local_270);
    local_9a8 = local_270 * local_298;
    local_9a0 = local_270 * fStack_294;
    auVar43._0_4_ = local_270 * fStack_290;
  }
  fVar32 = local_9a8;
  local_1c8 = 0;
  uStack_1c4 = 0;
  uStack_1c0 = 0x3f800000;
  uStack_1bc = 0;
  local_960 = auVar43._0_4_;
  local_288 = local_1f8 * 0.0 + local_208 * 1.0 + local_218 * 0.0 + local_228 * 0.0;
  fStack_284 = fStack_1f4 * 0.0 + fStack_204 * 1.0 + fStack_214 * 0.0 + fStack_224 * 0.0;
  fStack_280 = fStack_1f0 * 0.0 + fStack_200 * 1.0 + fStack_210 * 0.0 + fStack_220 * 0.0;
  fStack_27c = fStack_1ec * 0.0 + fStack_1fc * 1.0 + fStack_20c * 0.0 + fStack_21c * 0.0;
  fVar33 = fStack_284 * fStack_284 + local_288 * local_288 + fStack_280 * fStack_280;
  if (1e-08 < fVar33) {
    auVar35 = rsqrtss(ZEXT416((uint)fVar33),ZEXT416((uint)fVar33));
    local_260 = auVar35._0_4_;
    local_260 = local_260 + local_260 * (0.5 - fVar33 * 0.5 * local_260 * local_260);
    local_260 = local_260 + local_260 * (0.5 - fVar33 * 0.5 * local_260 * local_260);
  }
  local_16c = 0;
  local_998 = fVar31;
  local_978 = fVar31;
  local_974 = local_99c;
  local_968 = local_9a8;
  local_964 = local_9a0;
  local_928 = auVar43;
  local_8f8 = auVar41;
  pfStack_180 = (float *)FUN_140985530();
  local_950 = param_9;
  if (((((0 < (int)param_1[4]) || (0 < (int)param_1[8])) || (0 < (int)param_1[0x14])) ||
      (0 < (int)param_1[0xc])) && ((param_9 & 1) != 0)) {
    if (0 < (int)param_1[4]) {
      local_9c8 = param_6;
      local_9d0 = (int *)0x0;
      local_9d8 = param_8;
      local_9e0 = param_7;
      local_9e8 = DAT_146ac3d68;
      local_9f0 = (float *)0x0;
      local_9f8 = (float *)CONCAT71(local_9f8._1_7_,param_5);
      local_a08 = 0.0;
      local_16c = 2;
      local_a00 = pfVar28;
      FUN_1422f6680(param_1,param_2,&local_1b8);
      puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar12 + 3;
      if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
        puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar8 = puVar12 + 3;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar8;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      local_9b4 = 0.0;
      **(undefined8 **)(param_2 + 8) = puVar12;
      *(undefined8 **)(param_2 + 8) = puVar12 + 1;
      puVar12[1] = 0;
      *puVar12 = &PTR_LAB_143f489c0;
      *(undefined4 *)(puVar12 + 2) = local_98c;
      fVar33 = param_1[4];
      if (0 < ((int)fVar33 + 19999) / 20000) {
        local_918 = 0;
        do {
          pvVar26 = (void *)0x0;
          if (((int)local_9b4 < 0) || ((int)param_1[2] <= (int)local_9b4)) {
            local_910 = (void *)0x0;
            pvVar13 = pvVar26;
          }
          else {
            iVar10 = 20000;
            local_910 = *(void **)(local_918 + *(longlong *)param_1);
            if ((int)fVar33 < (int)local_9b4 * 20000 + 20000) {
              iVar10 = (int)fVar33 + (int)local_9b4 * -20000;
            }
            pvVar13 = (void *)((longlong)iVar10 * 0x2c + (longlong)local_910);
          }
          _Src = local_910;
          iVar20 = (int)((ulonglong)(longlong)DAT_1464c9c30 / 0x2c >> 1) * 2;
          iVar10 = 0x10000;
          if (iVar20 < 0x10001) {
            iVar10 = iVar20;
          }
          iVar20 = (int)((ulonglong)(((longlong)pvVar13 - (longlong)local_910) / 0x2c) >> 1) * 2;
          if (0 < iVar20) {
            do {
              local_988 = iVar20 - (int)pvVar26;
              local_278 = (void *)0x0;
              if (iVar10 <= local_988) {
                local_988 = iVar10;
              }
              pvVar13 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
              local_988 = local_988 / 2;
              local_9a4 = (float)(local_988 * 2);
              uVar23 = local_988 * 0x58;
              uVar16 = (longlong)(int)uVar23 + (longlong)pvVar13;
              if (*(ulonglong *)(param_2 + 0x38) < uVar16) {
                FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar23 + 0x10);
                pvVar13 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
                uVar16 = (longlong)(int)uVar23 + (longlong)pvVar13;
              }
              *(ulonglong *)(param_2 + 0x30) = uVar16;
              *(int *)(param_2 + 0x174) = local_988;
              *(undefined4 *)(param_2 + 0x170) = 2;
              *(float *)(param_2 + 0x178) = local_9a4;
              *(undefined4 *)(param_2 + 0x17c) = 0x2c;
              *(void **)(param_2 + 0x180) = pvVar13;
              local_278 = pvVar13;
              _guard_xfg_dispatch_icall_nop(pvVar13,_Src,(ulonglong)uVar23);
              puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar8 = puVar12 + 5;
              if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
                FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
                puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar8 = puVar12 + 5;
              }
              uVar23 = (int)pvVar26 + (int)local_9a4;
              pvVar26 = (void *)(ulonglong)uVar23;
              *(undefined8 **)(param_2 + 0x30) = puVar8;
              *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
              **(undefined8 **)(param_2 + 8) = puVar12;
              uVar9 = *(undefined8 *)(param_2 + 0x180);
              uVar3 = *(undefined4 *)(param_2 + 0x178);
              uVar4 = *(undefined4 *)(param_2 + 0x17c);
              uVar5 = *(undefined4 *)(param_2 + 0x174);
              uVar6 = *(undefined4 *)(param_2 + 0x170);
              *(undefined8 **)(param_2 + 8) = puVar12 + 1;
              puVar12[1] = 0;
              *puVar12 = &PTR_LAB_144d91e10;
              *(undefined4 *)(puVar12 + 2) = uVar6;
              *(undefined4 *)((longlong)puVar12 + 0x14) = uVar5;
              *(undefined4 *)(puVar12 + 3) = uVar3;
              *(undefined4 *)((longlong)puVar12 + 0x1c) = uVar4;
              puVar12[4] = uVar9;
              *(undefined8 *)(param_2 + 0x180) = 0;
              *(undefined4 *)(param_2 + 0x178) = 0;
            } while ((int)uVar23 < iVar20);
            fVar33 = local_980[4];
            param_1 = local_980;
          }
          local_9b4 = (float)((int)local_9b4 + 1);
          local_918 = local_918 + 8;
          pfVar28 = local_938;
          uVar23 = local_94c;
        } while ((int)local_9b4 < ((int)fVar33 + 19999) / 20000);
      }
    }
    local_9c8 = param_6;
    local_9d0 = (int *)0x0;
    local_9d8 = param_8;
    local_9e8 = DAT_146ac3d68;
    local_9f0 = (float *)0x0;
    local_9f8 = (float *)CONCAT71(local_9f8._1_7_,param_5);
    local_16c = 0;
    local_a08 = 0.0;
    local_a00 = pfVar28;
    local_9e0 = param_7;
    FUN_1422f6680(param_1,param_2,&local_1b8,local_990);
    puVar29 = (ulonglong *)(param_2 + 0x30);
    puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar12 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(puVar29,0x20);
      puVar12 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar12 + 3;
    }
    *puVar29 = (ulonglong)puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar12;
    *(undefined8 **)(param_2 + 8) = puVar12 + 1;
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_143f489c0;
    *(undefined4 *)(puVar12 + 2) = local_98c;
    local_9f8 = &local_968;
    local_a00 = &local_978;
    local_a08 = local_9b8;
    FUN_1422ec5b0(param_1,param_2,pfVar28,uVar23);
    fVar33 = param_1[0x14];
    if (0 < (int)fVar33) {
      local_9a4 = 1.0;
      if (1.0 < *(float *)(param_6 + 0x3cc) || *(float *)(param_6 + 0x3cc) == 1.0) {
        local_9a4 = 1.0 / *(float *)(param_6 + 0x390);
      }
      iVar10 = 0;
      if (0 < (int)fVar33) {
        lVar27 = 0;
        do {
          fVar36 = local_9a4;
          puVar29 = (ulonglong *)(param_2 + 0x30);
          lVar24 = lVar27 * 0x38;
          iVar20 = iVar10 + 1;
          lVar27 = lVar27 + 1;
          local_7f8 = *(float *)(*(longlong *)(param_1 + 0x12) + 0x30 + lVar24);
          if (iVar20 < (int)fVar33) {
            iVar11 = 1;
            pfVar17 = (float *)(*(longlong *)(param_1 + 0x12) + 0x30 + lVar27 * 0x38);
            do {
              if ((local_7f8 != *pfVar17) || (0x7ff < iVar11)) break;
              iVar20 = iVar20 + 1;
              iVar11 = iVar11 + 1;
              lVar27 = lVar27 + 1;
              pfVar17 = pfVar17 + 0xe;
            } while (lVar27 < (int)fVar33);
          }
          local_9b4 = (float)(iVar20 - iVar10);
          local_800[0] = 2;
          local_7fc = 0;
          local_7f4 = 1;
          local_988 = iVar20;
          (**(code **)(*DAT_146ab6358 + 0x30))(DAT_146ab6358,&local_938,local_800);
          pfStack_180 = local_938;
          local_9c8 = local_958;
          local_9d0 = (int *)0x0;
          local_9e0 = param_7;
          local_9e8 = DAT_146ac3d68;
          local_9f0 = (float *)0x0;
          local_9f8 = (float *)CONCAT71(local_9f8._1_7_,param_5);
          local_a08 = 1.4013e-44;
          local_a00 = pfVar28;
          local_9d8 = param_8;
          FUN_1422f6680(param_1,param_2,&local_1b8,local_990);
          puVar12 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
          puVar8 = puVar12 + 3;
          if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
            FMemStackBase::AllocateNewChunk(puVar29);
            puVar12 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
            puVar8 = puVar12 + 3;
          }
          *puVar29 = (ulonglong)puVar8;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          **(undefined8 **)(param_2 + 8) = puVar12;
          *(undefined8 **)(param_2 + 8) = puVar12 + 1;
          puVar12[1] = 0;
          *puVar12 = &PTR_LAB_143f489c0;
          *(undefined4 *)(puVar12 + 2) = local_98c;
          local_268 = 0;
          local_9b8 = (float)((int)local_9b4 * 0x18);
          local_9b0 = (undefined8 *)CONCAT44(local_9b0._4_4_,(int)local_9b4 * 8);
          uVar16 = *puVar29 + 0xf & 0xfffffffffffffff0;
          local_908 = (longlong)((int)local_9b4 * 0x420);
          uVar18 = local_908 + uVar16;
          if (*(ulonglong *)(param_2 + 0x38) < uVar18) {
            FMemStackBase::AllocateNewChunk(puVar29,(int)local_9b4 * 0x420 + 0x10);
            uVar16 = *puVar29 + 0xf & 0xfffffffffffffff0;
            uVar18 = local_908 + uVar16;
          }
          *puVar29 = uVar18;
          *(float *)(param_2 + 0x178) = local_9b8;
          local_908 = (longlong)(int)local_9b4;
          *(undefined4 *)(param_2 + 0x170) = 0;
          *(float *)(param_2 + 0x174) = local_9b0._0_4_;
          *(undefined4 *)(param_2 + 0x17c) = 0x2c;
          *(ulonglong *)(param_2 + 0x180) = uVar16;
          iVar10 = iVar20;
          local_268 = uVar16;
          if (0 < local_908) {
            uVar18 = (ulonglong)local_94c;
            local_9b0 = (undefined8 *)(uVar16 + 0x58);
            fStack_7dc = 1.0;
            fStack_7cc = 1.0;
            do {
              lVar15 = *(longlong *)(param_1 + 0x12);
              local_7e8 = *(float *)(lVar24 + lVar15);
              fStack_7e4 = *(float *)(lVar24 + 4 + lVar15);
              fStack_7e0 = *(float *)(lVar24 + 8 + lVar15);
              fVar33 = ABS(*(float *)(lVar24 + 0x18 + lVar15));
              local_7d8 = *(float *)(lVar24 + 0xc + lVar15);
              local_248 = local_7e8 * *pfVar28 + fStack_7e4 * pfVar28[4] +
                          fStack_7e0 * pfVar28[8] + fStack_7dc * pfVar28[0xc];
              fStack_244 = local_7e8 * pfVar28[1] + fStack_7e4 * pfVar28[5] +
                           fStack_7e0 * pfVar28[9] + fStack_7dc * pfVar28[0xd];
              fStack_240 = local_7e8 * pfVar28[2] + fStack_7e4 * pfVar28[6] +
                           fStack_7e0 * pfVar28[10] + fStack_7dc * pfVar28[0xe];
              fStack_23c = local_7e8 * pfVar28[3] + fStack_7e4 * pfVar28[7] +
                           fStack_7e0 * pfVar28[0xb] + fStack_7dc * pfVar28[0xf];
              fStack_7d4 = *(float *)(lVar24 + 0x10 + lVar15);
              fStack_7d0 = *(float *)(lVar24 + 0x14 + lVar15);
              local_238 = local_7d8 * *pfVar28 + fStack_7d4 * pfVar28[4] +
                          fStack_7d0 * pfVar28[8] + fStack_7cc * pfVar28[0xc];
              fStack_234 = local_7d8 * pfVar28[1] + fStack_7d4 * pfVar28[5] +
                           fStack_7d0 * pfVar28[9] + fStack_7cc * pfVar28[0xd];
              fStack_230 = local_7d8 * pfVar28[2] + fStack_7d4 * pfVar28[6] +
                           fStack_7d0 * pfVar28[10] + fStack_7cc * pfVar28[0xe];
              fStack_22c = local_7d8 * pfVar28[3] + fStack_7d4 * pfVar28[7] +
                           fStack_7d0 * pfVar28[0xb] + fStack_7cc * pfVar28[0xf];
              fVar31 = 1.0;
              if (*(int *)(lVar24 + 0x34 + lVar15) == 0) {
                local_9a4 = 1.0;
                fVar34 = 1.0;
                fVar36 = 1.0;
              }
              else {
                fVar33 = fVar33 + fVar33;
                fVar31 = (1.0 / (float)uVar18) * fStack_22c;
                fVar34 = (1.0 / (float)uVar18) * fStack_23c;
              }
              local_8e8[0] = *(undefined4 *)(lVar24 + 0x2c + lVar15);
              uStack_790 = 0x3f800000;
              local_78c = 0x3f800000;
              fVar31 = fVar33 * fVar36 * fVar31;
              fVar34 = fVar33 * fVar36 * fVar34;
              local_9b4 = fVar31 * local_998 * 0.5;
              local_9b8 = fVar31 * (float)local_928._0_4_ * 0.5;
              fVar38 = fVar34 * local_998 * 0.5;
              fVar33 = fVar34 * fVar32 * 0.5;
              fVar36 = fVar34 * auVar41._0_4_ * 0.5;
              fVar37 = fVar34 * local_99c * 0.5;
              fVar39 = fVar34 * auVar43._0_4_ * 0.5;
              local_79c = (fVar38 + *(float *)(lVar24 + lVar15)) - fVar33;
              fVar32 = fVar34 * local_9a0 * 0.5;
              fVar44 = fVar31 * local_99c * 0.5;
              fVar42 = fVar31 * auVar41._0_4_ * 0.5;
              fStack_798 = (fVar37 + *(float *)(lVar24 + 4 + lVar15)) - fVar32;
              fVar40 = fVar31 * local_9a8 * 0.5;
              fStack_794 = (fVar36 + *(float *)(lVar24 + 8 + lVar15)) - fVar39;
              fVar34 = fVar31 * local_9a0 * 0.5;
              puVar1 = (undefined4 *)(lVar24 + 0x1c + lVar15);
              uStack_784 = *puVar1;
              uStack_780 = puVar1[1];
              uStack_77c = puVar1[2];
              uStack_778 = puVar1[3];
              FHitProxyId::GetColor(local_8e8,&local_774);
              local_9b0[-0xb] = CONCAT44(fStack_798,local_79c);
              local_9b0[-10] = CONCAT44(uStack_790,fStack_794);
              local_9b0[-9] = local_78c;
              local_9b0[-8] = CONCAT44(uStack_780,uStack_784);
              local_9b0[-7] = CONCAT44(uStack_778,uStack_77c);
              *(undefined4 *)(local_9b0 + -6) = local_774;
              local_8e0[0] = *(undefined4 *)(lVar24 + 0x2c + lVar15);
              local_770 = fVar38 + *(float *)(lVar24 + lVar15) + fVar33;
              fStack_76c = fVar37 + *(float *)(lVar24 + 4 + lVar15) + fVar32;
              uStack_764 = 0x3f800000;
              local_760 = 0x3f800000;
              uStack_75c = 0x3f800000;
              fStack_768 = fVar36 + *(float *)(lVar24 + 8 + lVar15) + fVar39;
              puVar1 = (undefined4 *)(lVar24 + 0x1c + lVar15);
              uStack_758 = *puVar1;
              uStack_754 = puVar1[1];
              uStack_750 = puVar1[2];
              uStack_74c = puVar1[3];
              FHitProxyId::GetColor(local_8e0,&local_748);
              uStack_738 = 0x3f800000;
              uStack_734 = 0;
              *(ulonglong *)((longlong)local_9b0 + -0x2c) = CONCAT44(fStack_76c,local_770);
              *(ulonglong *)((longlong)local_9b0 + -0x24) = CONCAT44(uStack_764,fStack_768);
              uStack_730 = 0;
              *(ulonglong *)((longlong)local_9b0 + -0x1c) = CONCAT44(uStack_75c,local_760);
              *(ulonglong *)((longlong)local_9b0 + -0x14) = CONCAT44(uStack_754,uStack_758);
              *(ulonglong *)((longlong)local_9b0 + -0xc) = CONCAT44(uStack_74c,uStack_750);
              *(undefined4 *)((longlong)local_9b0 + -4) = local_748;
              local_8d8[0] = *(undefined4 *)(lVar24 + 0x2c + lVar15);
              local_744 = (*(float *)(lVar24 + lVar15) - fVar38) - fVar33;
              fStack_740 = (*(float *)(lVar24 + 4 + lVar15) - fVar37) - fVar32;
              fStack_73c = (*(float *)(lVar24 + 8 + lVar15) - fVar36) - fVar39;
              puVar1 = (undefined4 *)(lVar24 + 0x1c + lVar15);
              uStack_72c = *puVar1;
              uStack_728 = puVar1[1];
              uStack_724 = puVar1[2];
              uStack_720 = puVar1[3];
              FHitProxyId::GetColor(local_8d8,&local_71c);
              uStack_70c = 0x3f800000;
              *local_9b0 = CONCAT44(fStack_740,local_744);
              local_9b0[1] = CONCAT44(uStack_738,fStack_73c);
              local_708 = 0x3f800000;
              local_9b0[2] = CONCAT44(uStack_730,uStack_734);
              local_9b0[3] = CONCAT44(uStack_728,uStack_72c);
              uStack_704 = 0x3f800000;
              local_9b0[4] = CONCAT44(uStack_720,uStack_724);
              *(undefined4 *)(local_9b0 + 5) = local_71c;
              local_8d0[0] = *(undefined4 *)(lVar24 + 0x2c + lVar15);
              local_718 = fVar33 + fVar38 + *(float *)(lVar24 + lVar15);
              fStack_710 = fVar39 + fVar36 + *(float *)(lVar24 + 8 + lVar15);
              fStack_714 = fVar32 + fVar37 + *(float *)(lVar24 + 4 + lVar15);
              puVar1 = (undefined4 *)(lVar24 + 0x1c + lVar15);
              uStack_700 = *puVar1;
              uStack_6fc = puVar1[1];
              uStack_6f8 = puVar1[2];
              uStack_6f4 = puVar1[3];
              FHitProxyId::GetColor(local_8d0,&local_6f0);
              *(ulonglong *)((longlong)local_9b0 + 0x2c) = CONCAT44(fStack_714,local_718);
              *(ulonglong *)((longlong)local_9b0 + 0x34) = CONCAT44(uStack_70c,fStack_710);
              *(ulonglong *)((longlong)local_9b0 + 0x3c) = CONCAT44(uStack_704,local_708);
              *(ulonglong *)((longlong)local_9b0 + 0x44) = CONCAT44(uStack_6fc,uStack_700);
              uStack_6e0 = 0x3f800000;
              uStack_6dc = 0;
              *(ulonglong *)((longlong)local_9b0 + 0x4c) = CONCAT44(uStack_6f4,uStack_6f8);
              *(undefined4 *)((longlong)local_9b0 + 0x54) = local_6f0;
              local_8c8[0] = *(undefined4 *)(lVar24 + 0x2c + lVar15);
              uStack_6d8 = 0;
              fStack_6e4 = (*(float *)(lVar24 + 8 + lVar15) - fVar36) - fVar39;
              local_6ec = (*(float *)(lVar24 + lVar15) - fVar38) - fVar33;
              fStack_6e8 = (*(float *)(lVar24 + 4 + lVar15) - fVar37) - fVar32;
              puVar1 = (undefined4 *)(lVar24 + 0x1c + lVar15);
              uStack_6d4 = *puVar1;
              uStack_6d0 = puVar1[1];
              uStack_6cc = puVar1[2];
              uStack_6c8 = puVar1[3];
              FHitProxyId::GetColor(local_8c8,&local_6c4);
              uStack_6b4 = 0x3f800000;
              uStack_6b0 = 0;
              local_9b0[0xb] = CONCAT44(fStack_6e8,local_6ec);
              local_9b0[0xc] = CONCAT44(uStack_6e0,fStack_6e4);
              uStack_6ac = 0x3f800000;
              local_9b0[0xd] = CONCAT44(uStack_6d8,uStack_6dc);
              local_9b0[0xe] = CONCAT44(uStack_6d0,uStack_6d4);
              local_9b0[0xf] = CONCAT44(uStack_6c8,uStack_6cc);
              *(undefined4 *)(local_9b0 + 0x10) = local_6c4;
              local_8c0[0] = *(undefined4 *)(lVar24 + 0x2c + lVar15);
              local_6c0 = fVar33 + (*(float *)(lVar24 + lVar15) - fVar38);
              fStack_6b8 = fVar39 + (*(float *)(lVar24 + 8 + lVar15) - fVar36);
              fStack_6bc = fVar32 + (*(float *)(lVar24 + 4 + lVar15) - fVar37);
              puVar1 = (undefined4 *)(lVar24 + 0x1c + lVar15);
              uStack_6a8 = *puVar1;
              uStack_6a4 = puVar1[1];
              uStack_6a0 = puVar1[2];
              uStack_69c = puVar1[3];
              FHitProxyId::GetColor(local_8c0,&local_698);
              *(ulonglong *)((longlong)local_9b0 + 0x84) = CONCAT44(fStack_6bc,local_6c0);
              *(ulonglong *)((longlong)local_9b0 + 0x8c) = CONCAT44(uStack_6b4,fStack_6b8);
              *(ulonglong *)((longlong)local_9b0 + 0x94) = CONCAT44(uStack_6ac,uStack_6b0);
              *(ulonglong *)((longlong)local_9b0 + 0x9c) = CONCAT44(uStack_6a4,uStack_6a8);
              *(ulonglong *)((longlong)local_9b0 + 0xa4) = CONCAT44(uStack_69c,uStack_6a0);
              *(undefined4 *)((longlong)local_9b0 + 0xac) = local_698;
              local_818[0] = *(undefined4 *)(lVar24 + 0x2c + lVar15);
              local_694 = (local_9b4 + *(float *)(lVar24 + 0xc + lVar15)) - fVar40;
              fStack_690 = (fVar44 + *(float *)(lVar24 + 0x10 + lVar15)) - fVar34;
              fStack_68c = (fVar42 + *(float *)(lVar24 + 0x14 + lVar15)) - local_9b8;
              puVar1 = (undefined4 *)(lVar24 + 0x1c + lVar15);
              uStack_67c = *puVar1;
              uStack_678 = puVar1[1];
              uStack_674 = puVar1[2];
              uStack_670 = puVar1[3];
              uStack_688 = 0x3f800000;
              local_684 = 0x3f800000;
              FHitProxyId::GetColor(local_818,&local_66c);
              uStack_65c = 0x3f800000;
              local_9b0[0x16] = CONCAT44(fStack_690,local_694);
              local_9b0[0x17] = CONCAT44(uStack_688,fStack_68c);
              local_658 = 0x3f800000;
              local_9b0[0x18] = local_684;
              local_9b0[0x19] = CONCAT44(uStack_678,uStack_67c);
              uStack_654 = 0x3f800000;
              local_9b0[0x1a] = CONCAT44(uStack_670,uStack_674);
              *(undefined4 *)(local_9b0 + 0x1b) = local_66c;
              local_820[0] = *(undefined4 *)(lVar24 + 0x2c + lVar15);
              local_668 = fVar40 + local_9b4 + *(float *)(lVar24 + 0xc + lVar15);
              fStack_664 = fVar34 + fVar44 + *(float *)(lVar24 + 0x10 + lVar15);
              fStack_660 = fVar42 + *(float *)(lVar24 + 0x14 + lVar15) + local_9b8;
              puVar1 = (undefined4 *)(lVar24 + 0x1c + lVar15);
              uStack_650 = *puVar1;
              uStack_64c = puVar1[1];
              uStack_648 = puVar1[2];
              uStack_644 = puVar1[3];
              FHitProxyId::GetColor(local_820,&local_640);
              uStack_630 = 0x3f800000;
              uStack_62c = 0;
              *(ulonglong *)((longlong)local_9b0 + 0xdc) = CONCAT44(fStack_664,local_668);
              *(ulonglong *)((longlong)local_9b0 + 0xe4) = CONCAT44(uStack_65c,fStack_660);
              uStack_628 = 0;
              *(ulonglong *)((longlong)local_9b0 + 0xec) = CONCAT44(uStack_654,local_658);
              *(ulonglong *)((longlong)local_9b0 + 0xf4) = CONCAT44(uStack_64c,uStack_650);
              *(ulonglong *)((longlong)local_9b0 + 0xfc) = CONCAT44(uStack_644,uStack_648);
              *(undefined4 *)((longlong)local_9b0 + 0x104) = local_640;
              local_838[0] = *(undefined4 *)(lVar24 + 0x2c + lVar15);
              fStack_634 = (*(float *)(lVar24 + 0x14 + lVar15) - fVar42) - local_9b8;
              local_63c = (*(float *)(lVar24 + 0xc + lVar15) - local_9b4) - fVar40;
              fStack_638 = (*(float *)(lVar24 + 0x10 + lVar15) - fVar44) - fVar34;
              puVar1 = (undefined4 *)(lVar24 + 0x1c + lVar15);
              uStack_624 = *puVar1;
              uStack_620 = puVar1[1];
              uStack_61c = puVar1[2];
              uStack_618 = puVar1[3];
              FHitProxyId::GetColor(local_838,&local_614);
              local_9b0[0x21] = CONCAT44(fStack_638,local_63c);
              local_9b0[0x22] = CONCAT44(uStack_630,fStack_634);
              local_9b0[0x23] = CONCAT44(uStack_628,uStack_62c);
              local_9b0[0x24] = CONCAT44(uStack_620,uStack_624);
              local_9b0[0x25] = CONCAT44(uStack_618,uStack_61c);
              *(undefined4 *)(local_9b0 + 0x26) = local_614;
              local_840[0] = *(undefined4 *)(lVar24 + 0x2c + lVar15);
              uStack_604 = 0x3f800000;
              local_610 = local_9b4 + *(float *)(lVar24 + 0xc + lVar15) + fVar40;
              local_600 = 0x3f800000;
              uStack_5fc = 0x3f800000;
              fStack_608 = fVar42 + *(float *)(lVar24 + 0x14 + lVar15) + local_9b8;
              fStack_60c = fVar44 + *(float *)(lVar24 + 0x10 + lVar15) + fVar34;
              puVar1 = (undefined4 *)(lVar24 + 0x1c + lVar15);
              uStack_5f8 = *puVar1;
              uStack_5f4 = puVar1[1];
              uStack_5f0 = puVar1[2];
              uStack_5ec = puVar1[3];
              FHitProxyId::GetColor(local_840,&local_5e8);
              uStack_5d8 = 0x3f800000;
              uStack_5d4 = 0;
              *(ulonglong *)((longlong)local_9b0 + 0x134) = CONCAT44(fStack_60c,local_610);
              *(ulonglong *)((longlong)local_9b0 + 0x13c) = CONCAT44(uStack_604,fStack_608);
              uStack_5d0 = 0;
              *(ulonglong *)((longlong)local_9b0 + 0x144) = CONCAT44(uStack_5fc,local_600);
              *(ulonglong *)((longlong)local_9b0 + 0x14c) = CONCAT44(uStack_5f4,uStack_5f8);
              *(ulonglong *)((longlong)local_9b0 + 0x154) = CONCAT44(uStack_5ec,uStack_5f0);
              *(undefined4 *)((longlong)local_9b0 + 0x15c) = local_5e8;
              local_848[0] = *(undefined4 *)(lVar24 + 0x2c + lVar15);
              fStack_5dc = (*(float *)(lVar24 + 0x14 + lVar15) - fVar42) - local_9b8;
              local_5e4 = (*(float *)(lVar24 + 0xc + lVar15) - local_9b4) - fVar40;
              fStack_5e0 = (*(float *)(lVar24 + 0x10 + lVar15) - fVar44) - fVar34;
              puVar1 = (undefined4 *)(lVar24 + 0x1c + lVar15);
              uStack_5cc = *puVar1;
              uStack_5c8 = puVar1[1];
              uStack_5c4 = puVar1[2];
              uStack_5c0 = puVar1[3];
              FHitProxyId::GetColor(local_848,&local_5bc);
              uStack_5ac = 0x3f800000;
              uStack_5a8 = 0;
              local_9b0[0x2c] = CONCAT44(fStack_5e0,local_5e4);
              local_9b0[0x2d] = CONCAT44(uStack_5d8,fStack_5dc);
              uStack_5a4 = 0x3f800000;
              local_9b0[0x2e] = CONCAT44(uStack_5d0,uStack_5d4);
              local_9b0[0x2f] = CONCAT44(uStack_5c8,uStack_5cc);
              local_9b0[0x30] = CONCAT44(uStack_5c0,uStack_5c4);
              *(undefined4 *)(local_9b0 + 0x31) = local_5bc;
              local_850[0] = *(undefined4 *)(lVar24 + 0x2c + lVar15);
              fStack_5b0 = (*(float *)(lVar24 + 0x14 + lVar15) - fVar42) + local_9b8;
              local_5b8 = (*(float *)(lVar24 + 0xc + lVar15) - local_9b4) + fVar40;
              fStack_5b4 = (*(float *)(lVar24 + 0x10 + lVar15) - fVar44) + fVar34;
              puVar1 = (undefined4 *)(lVar24 + 0x1c + lVar15);
              uStack_5a0 = *puVar1;
              uStack_59c = puVar1[1];
              uStack_598 = puVar1[2];
              uStack_594 = puVar1[3];
              FHitProxyId::GetColor(local_850,&local_590);
              uStack_580 = 0x3f800000;
              uStack_57c = 0;
              *(ulonglong *)((longlong)local_9b0 + 0x18c) = CONCAT44(fStack_5b4,local_5b8);
              *(ulonglong *)((longlong)local_9b0 + 0x194) = CONCAT44(uStack_5ac,fStack_5b0);
              uStack_578 = 0;
              *(ulonglong *)((longlong)local_9b0 + 0x19c) = CONCAT44(uStack_5a4,uStack_5a8);
              *(ulonglong *)((longlong)local_9b0 + 0x1a4) = CONCAT44(uStack_59c,uStack_5a0);
              *(ulonglong *)((longlong)local_9b0 + 0x1ac) = CONCAT44(uStack_594,uStack_598);
              *(undefined4 *)((longlong)local_9b0 + 0x1b4) = local_590;
              local_860[0] = *(undefined4 *)(lVar24 + 0x2c + lVar15);
              fStack_584 = (*(float *)(lVar24 + 8 + lVar15) - fVar36) - fVar39;
              local_58c = (*(float *)(lVar24 + lVar15) - fVar38) - fVar33;
              fStack_588 = (*(float *)(lVar24 + 4 + lVar15) - fVar37) - fVar32;
              puVar1 = (undefined4 *)(lVar24 + 0x1c + lVar15);
              uStack_574 = *puVar1;
              uStack_570 = puVar1[1];
              uStack_56c = puVar1[2];
              uStack_568 = puVar1[3];
              FHitProxyId::GetColor(local_860,&local_564);
              uStack_554 = 0x3f800000;
              local_9b0[0x37] = CONCAT44(fStack_588,local_58c);
              local_9b0[0x38] = CONCAT44(uStack_580,fStack_584);
              local_550 = 0x3f800000;
              local_9b0[0x39] = CONCAT44(uStack_578,uStack_57c);
              local_9b0[0x3a] = CONCAT44(uStack_570,uStack_574);
              uStack_54c = 0x3f800000;
              local_9b0[0x3b] = CONCAT44(uStack_568,uStack_56c);
              *(undefined4 *)(local_9b0 + 0x3c) = local_564;
              local_888[0] = *(undefined4 *)(lVar24 + 0x2c + lVar15);
              fStack_558 = fVar36 + *(float *)(lVar24 + 8 + lVar15) + fVar39;
              local_560 = fVar38 + *(float *)(lVar24 + lVar15) + fVar33;
              fStack_55c = fVar37 + *(float *)(lVar24 + 4 + lVar15) + fVar32;
              puVar1 = (undefined4 *)(lVar24 + 0x1c + lVar15);
              uStack_548 = *puVar1;
              uStack_544 = puVar1[1];
              uStack_540 = puVar1[2];
              uStack_53c = puVar1[3];
              FHitProxyId::GetColor(local_888,&local_538);
              *(ulonglong *)((longlong)local_9b0 + 0x1e4) = CONCAT44(fStack_55c,local_560);
              *(ulonglong *)((longlong)local_9b0 + 0x1ec) = CONCAT44(uStack_554,fStack_558);
              *(ulonglong *)((longlong)local_9b0 + 500) = CONCAT44(uStack_54c,local_550);
              *(ulonglong *)((longlong)local_9b0 + 0x1fc) = CONCAT44(uStack_544,uStack_548);
              *(ulonglong *)((longlong)local_9b0 + 0x204) = CONCAT44(uStack_53c,uStack_540);
              *(undefined4 *)((longlong)local_9b0 + 0x20c) = local_538;
              local_828[0] = *(undefined4 *)(lVar24 + 0x2c + lVar15);
              fStack_530 = (*(float *)(lVar24 + 0x10 + lVar15) - fVar44) - fVar34;
              local_534 = (*(float *)(lVar24 + 0xc + lVar15) - local_9b4) - fVar40;
              fStack_52c = (*(float *)(lVar24 + 0x14 + lVar15) - fVar42) - local_9b8;
              puVar1 = (undefined4 *)(lVar24 + 0x1c + lVar15);
              uStack_51c = *puVar1;
              uStack_518 = puVar1[1];
              uStack_514 = puVar1[2];
              uStack_510 = puVar1[3];
              uStack_528 = 0x3f800000;
              uStack_524 = 0;
              uStack_520 = 0;
              FHitProxyId::GetColor(local_828,&local_50c);
              uStack_4fc = 0x3f800000;
              local_9b0[0x42] = CONCAT44(fStack_530,local_534);
              local_9b0[0x43] = CONCAT44(uStack_528,fStack_52c);
              local_4f8 = 0x3f800000;
              local_9b0[0x44] = CONCAT44(uStack_520,uStack_524);
              local_9b0[0x45] = CONCAT44(uStack_518,uStack_51c);
              uStack_4f4 = 0x3f800000;
              local_9b0[0x46] = CONCAT44(uStack_510,uStack_514);
              *(undefined4 *)(local_9b0 + 0x47) = local_50c;
              local_858[0] = *(undefined4 *)(lVar24 + 0x2c + lVar15);
              fStack_500 = fVar36 + *(float *)(lVar24 + 8 + lVar15) + fVar39;
              local_508 = fVar38 + *(float *)(lVar24 + lVar15) + fVar33;
              fStack_504 = fVar37 + *(float *)(lVar24 + 4 + lVar15) + fVar32;
              puVar1 = (undefined4 *)(lVar24 + 0x1c + lVar15);
              uStack_4f0 = *puVar1;
              uStack_4ec = puVar1[1];
              uStack_4e8 = puVar1[2];
              uStack_4e4 = puVar1[3];
              FHitProxyId::GetColor(local_858,&local_4e0);
              uStack_4d0 = 0x3f800000;
              *(ulonglong *)((longlong)local_9b0 + 0x23c) = CONCAT44(fStack_504,local_508);
              *(ulonglong *)((longlong)local_9b0 + 0x244) = CONCAT44(uStack_4fc,fStack_500);
              local_4cc = 0x3f800000;
              *(ulonglong *)((longlong)local_9b0 + 0x24c) = CONCAT44(uStack_4f4,local_4f8);
              *(ulonglong *)((longlong)local_9b0 + 0x254) = CONCAT44(uStack_4ec,uStack_4f0);
              uStack_4c8 = 0x3f800000;
              *(ulonglong *)((longlong)local_9b0 + 0x25c) = CONCAT44(uStack_4e4,uStack_4e8);
              *(undefined4 *)((longlong)local_9b0 + 0x264) = local_4e0;
              local_830[0] = *(undefined4 *)(lVar24 + 0x2c + lVar15);
              fStack_4d4 = fVar42 + *(float *)(lVar24 + 0x14 + lVar15) + local_9b8;
              local_4dc = local_9b4 + *(float *)(lVar24 + 0xc + lVar15) + fVar40;
              fStack_4d8 = fVar44 + *(float *)(lVar24 + 0x10 + lVar15) + fVar34;
              puVar1 = (undefined4 *)(lVar24 + 0x1c + lVar15);
              uStack_4c4 = *puVar1;
              uStack_4c0 = puVar1[1];
              uStack_4bc = puVar1[2];
              uStack_4b8 = puVar1[3];
              FHitProxyId::GetColor(local_830,&local_4b4);
              local_9b0[0x4d] = CONCAT44(fStack_4d8,local_4dc);
              local_9b0[0x4e] = CONCAT44(uStack_4d0,fStack_4d4);
              local_9b0[0x4f] = CONCAT44(uStack_4c8,local_4cc);
              local_9b0[0x50] = CONCAT44(uStack_4c0,uStack_4c4);
              local_9b0[0x51] = CONCAT44(uStack_4b8,uStack_4bc);
              *(undefined4 *)(local_9b0 + 0x52) = local_4b4;
              local_8b8[0] = *(undefined4 *)(lVar24 + 0x2c + lVar15);
              fStack_4a8 = (*(float *)(lVar24 + 0x14 + lVar15) - fVar42) - local_9b8;
              uStack_4a4 = 0x3f800000;
              uStack_4a0 = 0;
              local_4b0 = (*(float *)(lVar24 + 0xc + lVar15) - local_9b4) - fVar40;
              uStack_49c = 0;
              fStack_4ac = (*(float *)(lVar24 + 0x10 + lVar15) - fVar44) - fVar34;
              puVar1 = (undefined4 *)(lVar24 + 0x1c + lVar15);
              uStack_498 = *puVar1;
              uStack_494 = puVar1[1];
              uStack_490 = puVar1[2];
              uStack_48c = puVar1[3];
              FHitProxyId::GetColor(local_8b8,&local_488);
              uStack_478 = 0x3f800000;
              uStack_474 = 0;
              *(ulonglong *)((longlong)local_9b0 + 0x294) = CONCAT44(fStack_4ac,local_4b0);
              *(ulonglong *)((longlong)local_9b0 + 0x29c) = CONCAT44(uStack_4a4,fStack_4a8);
              uStack_470 = 0x3f800000;
              *(ulonglong *)((longlong)local_9b0 + 0x2a4) = CONCAT44(uStack_49c,uStack_4a0);
              *(ulonglong *)((longlong)local_9b0 + 0x2ac) = CONCAT44(uStack_494,uStack_498);
              *(ulonglong *)((longlong)local_9b0 + 0x2b4) = CONCAT44(uStack_48c,uStack_490);
              *(undefined4 *)((longlong)local_9b0 + 700) = local_488;
              local_8b0[0] = *(undefined4 *)(lVar24 + 0x2c + lVar15);
              fStack_47c = (*(float *)(lVar24 + 8 + lVar15) - fVar36) + fVar39;
              local_484 = (*(float *)(lVar24 + lVar15) - fVar38) + fVar33;
              fStack_480 = (*(float *)(lVar24 + 4 + lVar15) - fVar37) + fVar32;
              puVar1 = (undefined4 *)(lVar24 + 0x1c + lVar15);
              uStack_46c = *puVar1;
              uStack_468 = puVar1[1];
              uStack_464 = puVar1[2];
              uStack_460 = puVar1[3];
              FHitProxyId::GetColor(local_8b0,&local_45c);
              uStack_7bc = 0x3f800000;
              local_9b0[0x58] = CONCAT44(fStack_480,local_484);
              local_9b0[0x59] = CONCAT44(uStack_478,fStack_47c);
              local_7b8 = 0x3f800000;
              local_9b0[0x5a] = CONCAT44(uStack_470,uStack_474);
              local_9b0[0x5b] = CONCAT44(uStack_468,uStack_46c);
              local_9b0[0x5c] = CONCAT44(uStack_460,uStack_464);
              *(undefined4 *)(local_9b0 + 0x5d) = local_45c;
              local_8a8[0] = *(undefined4 *)(lVar24 + 0x2c + lVar15);
              fStack_7c0 = (fVar36 + *(float *)(lVar24 + 8 + lVar15)) - fVar39;
              local_7c8 = (fVar38 + *(float *)(lVar24 + lVar15)) - fVar33;
              fStack_7c4 = (fVar37 + *(float *)(lVar24 + 4 + lVar15)) - fVar32;
              puVar1 = (undefined4 *)(lVar24 + 0x1c + lVar15);
              uStack_7b0 = *puVar1;
              uStack_7ac = puVar1[1];
              uStack_7a8 = puVar1[2];
              uStack_7a4 = puVar1[3];
              FHitProxyId::GetColor(local_8a8,&local_7a0);
              uStack_44c = 0x3f800000;
              uStack_448 = 0;
              *(ulonglong *)((longlong)local_9b0 + 0x2ec) = CONCAT44(fStack_7c4,local_7c8);
              *(ulonglong *)((longlong)local_9b0 + 0x2f4) = CONCAT44(uStack_7bc,fStack_7c0);
              uStack_444 = 0x3f800000;
              *(undefined8 *)((longlong)local_9b0 + 0x2fc) = local_7b8;
              *(ulonglong *)((longlong)local_9b0 + 0x304) = CONCAT44(uStack_7ac,uStack_7b0);
              *(ulonglong *)((longlong)local_9b0 + 0x30c) = CONCAT44(uStack_7a4,uStack_7a8);
              *(undefined4 *)((longlong)local_9b0 + 0x314) = local_7a0;
              local_8a0[0] = *(undefined4 *)(lVar24 + 0x2c + lVar15);
              fStack_450 = (*(float *)(lVar24 + 0x14 + lVar15) - fVar42) + local_9b8;
              local_458 = (*(float *)(lVar24 + 0xc + lVar15) - local_9b4) + fVar40;
              fStack_454 = (*(float *)(lVar24 + 0x10 + lVar15) - fVar44) + fVar34;
              puVar1 = (undefined4 *)(lVar24 + 0x1c + lVar15);
              uStack_440 = *puVar1;
              uStack_43c = puVar1[1];
              uStack_438 = puVar1[2];
              uStack_434 = puVar1[3];
              FHitProxyId::GetColor(local_8a0,&local_430);
              uStack_420 = 0x3f800000;
              local_9b0[99] = CONCAT44(fStack_454,local_458);
              local_9b0[100] = CONCAT44(uStack_44c,fStack_450);
              local_41c = 0x3f800000;
              *(undefined4 *)(local_9b0 + 0x65) = uStack_448;
              *(undefined4 *)((longlong)local_9b0 + 0x32c) = uStack_444;
              *(undefined4 *)(local_9b0 + 0x66) = uStack_440;
              *(undefined4 *)((longlong)local_9b0 + 0x334) = uStack_43c;
              local_9b0[0x67] = CONCAT44(uStack_434,uStack_438);
              *(undefined4 *)(local_9b0 + 0x68) = local_430;
              puVar1 = (undefined4 *)(lVar24 + 0x1c + lVar15);
              uStack_414 = *puVar1;
              uStack_410 = puVar1[1];
              uStack_40c = puVar1[2];
              uStack_408 = puVar1[3];
              local_898[0] = *(undefined4 *)(lVar24 + 0x2c + lVar15);
              local_42c = (fVar38 + *(float *)(lVar24 + lVar15)) - fVar33;
              fStack_428 = (fVar37 + *(float *)(lVar24 + 4 + lVar15)) - fVar32;
              fStack_424 = (fVar36 + *(float *)(lVar24 + 8 + lVar15)) - fVar39;
              FHitProxyId::GetColor(local_898,&local_404);
              fVar31 = local_9b4;
              *(ulonglong *)((longlong)local_9b0 + 0x344) = CONCAT44(fStack_428,local_42c);
              *(ulonglong *)((longlong)local_9b0 + 0x34c) = CONCAT44(uStack_420,fStack_424);
              *(undefined8 *)((longlong)local_9b0 + 0x354) = local_41c;
              *(ulonglong *)((longlong)local_9b0 + 0x35c) = CONCAT44(uStack_410,uStack_414);
              *(ulonglong *)((longlong)local_9b0 + 0x364) = CONCAT44(uStack_408,uStack_40c);
              *(undefined4 *)((longlong)local_9b0 + 0x36c) = local_404;
              local_890[0] = *(undefined4 *)(lVar24 + 0x2c + lVar15);
              fStack_3f8 = (fVar42 + *(float *)(lVar24 + 0x14 + lVar15)) - local_9b8;
              local_400 = (local_9b4 + *(float *)(lVar24 + 0xc + lVar15)) - fVar40;
              fStack_3fc = (fVar44 + *(float *)(lVar24 + 0x10 + lVar15)) - fVar34;
              puVar1 = (undefined4 *)(lVar24 + 0x1c + lVar15);
              uStack_3e8 = *puVar1;
              uStack_3e4 = puVar1[1];
              uStack_3e0 = puVar1[2];
              uStack_3dc = puVar1[3];
              uStack_3f4 = 0x3f800000;
              local_3f0 = 0x3f800000;
              FHitProxyId::GetColor(local_890,&local_3d8);
              uStack_3c8 = 0x3f800000;
              uStack_3c4 = 0;
              local_9b0[0x6e] = CONCAT44(fStack_3fc,local_400);
              local_9b0[0x6f] = CONCAT44(uStack_3f4,fStack_3f8);
              uStack_3c0 = 0x3f800000;
              local_9b0[0x70] = local_3f0;
              local_9b0[0x71] = CONCAT44(uStack_3e4,uStack_3e8);
              local_9b0[0x72] = CONCAT44(uStack_3dc,uStack_3e0);
              *(undefined4 *)(local_9b0 + 0x73) = local_3d8;
              local_930[0] = *(int *)(lVar24 + 0x2c + lVar15);
              fStack_3cc = (*(float *)(lVar24 + 0x14 + lVar15) - fVar42) + local_9b8;
              local_3d4 = (*(float *)(lVar24 + 0xc + lVar15) - fVar31) + fVar40;
              fStack_3d0 = (*(float *)(lVar24 + 0x10 + lVar15) - fVar44) + fVar34;
              puVar1 = (undefined4 *)(lVar24 + 0x1c + lVar15);
              uStack_3bc = *puVar1;
              uStack_3b8 = puVar1[1];
              uStack_3b4 = puVar1[2];
              uStack_3b0 = puVar1[3];
              FHitProxyId::GetColor(local_930,&local_3ac);
              lVar24 = lVar24 + 0x38;
              *(ulonglong *)((longlong)local_9b0 + 0x39c) = CONCAT44(fStack_3d0,local_3d4);
              *(ulonglong *)((longlong)local_9b0 + 0x3a4) = CONCAT44(uStack_3c8,fStack_3cc);
              *(ulonglong *)((longlong)local_9b0 + 0x3ac) = CONCAT44(uStack_3c0,uStack_3c4);
              *(ulonglong *)((longlong)local_9b0 + 0x3b4) = CONCAT44(uStack_3b8,uStack_3bc);
              *(ulonglong *)((longlong)local_9b0 + 0x3bc) = CONCAT44(uStack_3b0,uStack_3b4);
              *(undefined4 *)((longlong)local_9b0 + 0x3c4) = local_3ac;
              local_9b0 = local_9b0 + 0x84;
              local_908 = local_908 + -1;
              fVar36 = local_9a4;
              auVar41 = local_8f8;
              auVar43 = local_928;
              fVar32 = local_9a8;
            } while (local_908 != 0);
            local_908 = 0;
            fVar31 = local_998;
            iVar10 = local_988;
          }
          puVar29 = (ulonglong *)(param_2 + 0x30);
          puVar12 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
          puVar8 = puVar12 + 5;
          if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
            FMemStackBase::AllocateNewChunk(puVar29,0x30);
            puVar12 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
            puVar8 = puVar12 + 5;
          }
          pfVar17 = local_938;
          *puVar29 = (ulonglong)puVar8;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          **(undefined8 **)(param_2 + 8) = puVar12;
          uVar9 = *(undefined8 *)(param_2 + 0x180);
          uVar3 = *(undefined4 *)(param_2 + 0x178);
          uVar4 = *(undefined4 *)(param_2 + 0x17c);
          uVar5 = *(undefined4 *)(param_2 + 0x174);
          uVar6 = *(undefined4 *)(param_2 + 0x170);
          *(undefined8 **)(param_2 + 8) = puVar12 + 1;
          puVar12[1] = 0;
          *puVar12 = &PTR_LAB_144d91e10;
          *(undefined4 *)(puVar12 + 2) = uVar6;
          *(undefined4 *)((longlong)puVar12 + 0x14) = uVar5;
          *(undefined4 *)(puVar12 + 3) = uVar3;
          *(undefined4 *)((longlong)puVar12 + 0x1c) = uVar4;
          puVar12[4] = uVar9;
          *(undefined8 *)(param_2 + 0x180) = 0;
          *(undefined4 *)(param_2 + 0x178) = 0;
          if (local_938 != (float *)0x0) {
            LOCK();
            pfVar19 = local_938 + 2;
            fVar31 = *pfVar19;
            *pfVar19 = (float)((int)*pfVar19 + -1);
            UNLOCK();
            if (fVar31 == 1.4013e-45) {
              if ((*(char *)(local_938 + 4) == '\0') &&
                 ((DAT_146ab62f5 != '\0' ||
                  (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), cVar7 == '\0')))) {
                LOCK();
                bVar30 = pfVar17[3] == 0.0;
                if (bVar30) {
                  pfVar17[3] = 1.4013e-45;
                }
                UNLOCK();
                if (bVar30) {
                  TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,pfVar17);
                }
              }
              else {
                (*(code *)**(undefined8 **)pfVar17)(pfVar17,1);
              }
            }
            auVar41 = ZEXT416(local_970);
            auVar43 = ZEXT416((uint)local_960);
            local_998 = local_978;
            local_9a0 = local_964;
            local_9a8 = local_968;
            fVar31 = local_978;
            fVar32 = local_968;
            local_99c = local_974;
            local_928 = auVar43;
            local_8f8 = auVar41;
          }
          fVar33 = param_1[0x14];
        } while (iVar10 < (int)fVar33);
      }
      pfStack_180 = (float *)FUN_140985530();
      param_6 = local_958;
    }
    puVar29 = (ulonglong *)(param_2 + 0x30);
    fVar32 = param_1[0xc];
    local_9b0 = (undefined8 *)CONCAT44(local_9b0._4_4_,fVar32);
    if (0 < (int)fVar32) {
      local_810[0] = 1;
      local_80c = 0;
      local_804 = 1;
      iVar10 = (int)((ulonglong)(longlong)DAT_1464c9c30 / 0x84) * 3;
      iVar20 = 0x10000;
      if (iVar10 < 0x10001) {
        iVar20 = iVar10;
      }
      local_988 = (int)(((longlong)iVar20 / 3 + ((longlong)iVar20 >> 0x3f) & 0xffffffffU) >> 0x1f) +
                  iVar20 / 3 + (iVar20 >> 0x1f);
      fVar31 = 0.0;
      do {
        fVar33 = (float)((int)fVar31 + 1);
        if ((int)fVar31 + local_988 <= (int)fVar32) {
          fVar32 = (float)((int)fVar31 + local_988);
        }
        fVar36 = *(float *)(*(longlong *)(param_1 + 10) + (longlong)(int)fVar31 * 4);
        fVar34 = fVar32;
        if ((int)fVar33 < (int)fVar32) {
          lVar27 = (longlong)(int)fVar33;
          pfVar17 = (float *)(*(longlong *)(param_1 + 10) + lVar27 * 4);
          do {
            fVar34 = fVar33;
            if (fVar36 != *pfVar17) break;
            fVar33 = (float)((int)fVar33 + 1);
            lVar27 = lVar27 + 1;
            pfVar17 = pfVar17 + 1;
            fVar34 = fVar32;
          } while (lVar27 < (int)fVar32);
        }
        local_80c = CONCAT44(local_80c._4_4_,fVar36);
        (**(code **)(*DAT_146ab6358 + 0x30))(DAT_146ab6358,&local_980,local_810);
        pfStack_180 = local_980;
        local_9d0 = (int *)0x0;
        local_9e0 = param_7;
        local_9e8 = DAT_146ac3d68;
        local_9f0 = (float *)0x0;
        local_9f8 = (float *)CONCAT71(local_9f8._1_7_,param_5);
        local_a08 = 0.0;
        local_a00 = pfVar28;
        local_9d8 = param_8;
        local_9c8 = param_6;
        FUN_1422f6680(param_1,param_2,&local_1b8,local_990);
        puVar12 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
        puVar8 = puVar12 + 3;
        if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
          FMemStackBase::AllocateNewChunk(puVar29,0x20);
          puVar12 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
          puVar8 = puVar12 + 3;
        }
        *puVar29 = (ulonglong)puVar8;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        local_a08 = 6.16571e-44;
        **(undefined8 **)(param_2 + 8) = puVar12;
        *(undefined8 **)(param_2 + 8) = puVar12 + 1;
        puVar12[1] = 0;
        *puVar12 = &PTR_LAB_143f489c0;
        *(undefined4 *)(puVar12 + 2) = local_98c;
        FUN_141a14d80(param_2,0,(int)fVar34 - (int)fVar31,
                      (longlong)((int)fVar31 * 3) * 0x2c + *(longlong *)(param_1 + 0xe));
        pfVar17 = local_980;
        if (local_980 != (float *)0x0) {
          LOCK();
          pfVar19 = local_980 + 2;
          fVar31 = *pfVar19;
          *pfVar19 = (float)((int)*pfVar19 + -1);
          UNLOCK();
          if (fVar31 == 1.4013e-45) {
            if ((*(char *)(local_980 + 4) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), cVar7 == '\0')))) {
              LOCK();
              bVar30 = pfVar17[3] == 0.0;
              if (bVar30) {
                pfVar17[3] = 1.4013e-45;
              }
              UNLOCK();
              if (bVar30) {
                TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,pfVar17);
              }
            }
            else {
              (*(code *)**(undefined8 **)pfVar17)(pfVar17,1);
            }
          }
        }
        param_6 = local_958;
        fVar32 = local_9b0._0_4_;
        fVar31 = fVar34;
      } while ((int)fVar34 < (int)local_9b0._0_4_);
      pfStack_180 = (float *)FUN_140985530();
      auVar41 = ZEXT416(local_970);
      local_99c = local_974;
      local_998 = local_978;
      local_9a0 = local_964;
      local_9a8 = local_968;
      local_928 = ZEXT416((uint)local_960);
      fVar32 = local_960;
      fVar31 = local_978;
      local_8f8 = auVar41;
      goto LAB_1422eba12;
    }
  }
  fVar32 = (float)local_928._0_4_;
LAB_1422eba12:
  fVar37 = local_99c;
  fVar34 = local_9a0;
  fVar36 = local_9a8;
  fVar33 = param_1[0x18];
  if (0 < (int)fVar33) {
    FUN_1422df420(*(longlong *)(param_1 + 0x16),(longlong)(int)param_1[0x18],local_994[0],local_994)
    ;
    local_948 = 0;
    local_940 = 0;
    pfVar17 = *(float **)(*(longlong *)(param_1 + 0x16) + 0x18);
    local_9a4 = (float)(uint)*(byte *)(*(longlong *)(param_1 + 0x16) + 0x44);
    local_93c = 0;
    local_980 = pfVar17;
    if (0 < (int)fVar33 * 6) {
      TArray<FInterpCurvePoint<FVector>,FDefaultAllocator>::ResizeTo(&local_948);
    }
    lVar24 = 0;
    lVar27 = local_948;
    iVar10 = local_940;
    local_938 = (float *)(longlong)(int)fVar33;
    if (0 < (int)fVar33) {
      do {
        lVar15 = *(longlong *)(param_1 + 0x16);
        bVar2 = *(byte *)(lVar15 + 0x44 + lVar24);
        if ((bVar2 == 0) || (((bVar2 - 1 & 0xfffffffa) == 0 && ((float)(uint)bVar2 != 2.8026e-45))))
        {
          uVar23 = 1;
        }
        else {
          uVar23 = 2;
        }
        if ((local_950 & uVar23) != 0) {
          pfVar19 = *(float **)(lVar15 + 0x18 + lVar24);
          if (((pfVar17 != pfVar19) || (local_9a4 != (float)(uint)bVar2)) && (2 < iVar10)) {
            local_9c8 = local_958;
            local_9d0 = (int *)0x0;
            local_9e0 = param_7;
            local_9f0 = (float *)0x0;
            local_930[0] = (int)(((longlong)iVar10 / 3 + ((longlong)iVar10 >> 0x3f) & 0xffffffffU)
                                >> 0x1f) + iVar10 / 3 + (iVar10 >> 0x1f);
            local_9f8 = (float *)CONCAT71(local_9f8._1_7_,param_5);
            local_a08 = local_9a4;
            local_a00 = pfVar28;
            local_9e8 = pfVar17;
            local_9d8 = param_8;
            FUN_1422f6680(param_1,param_2,&local_1b8,local_990);
            puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar8 = puVar12 + 3;
            if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
              FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
              puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar8 = puVar12 + 3;
            }
            *(undefined8 **)(param_2 + 0x30) = puVar8;
            *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
            local_a08 = 6.16571e-44;
            **(undefined8 **)(param_2 + 8) = puVar12;
            *(undefined8 **)(param_2 + 8) = puVar12 + 1;
            puVar12[1] = 0;
            *puVar12 = &PTR_LAB_143f489c0;
            *(undefined4 *)(puVar12 + 2) = local_98c;
            FUN_141a14d80(param_2,0,local_930[0],lVar27);
            local_940 = 0;
            iVar10 = 0;
            if (local_93c != 6) {
              TArray<FInterpCurvePoint<FVector>,FDefaultAllocator>::ResizeTo(&local_948,6);
              lVar27 = local_948;
              iVar10 = local_940;
            }
            pfVar19 = *(float **)(lVar15 + 0x18 + lVar24);
            local_9a4 = (float)(uint)*(byte *)(lVar15 + 0x44 + lVar24);
            local_980 = pfVar19;
          }
          lVar21 = (longlong)iVar10;
          local_940 = iVar10 + 6;
          if (local_93c < local_940) {
            TArray<UTTLCameraModifier::FTTLCameraPostFx,FDefaultAllocator>::ResizeGrow
                      (&local_948,iVar10);
            pfVar19 = *(float **)(lVar15 + 0x18 + lVar24);
            lVar27 = local_948;
          }
          fVar33 = *(float *)(lVar15 + 0xc + lVar24);
          fVar38 = -*(float *)(lVar15 + 0x10 + lVar24);
          fVar31 = fVar33 * fVar31;
          fVar42 = fVar33 * auVar41._0_4_;
          fVar40 = fVar38 * fVar36 * DAT_1464c9c24;
          fVar33 = fVar33 * fVar37;
          fVar39 = fVar38 * fVar34 * DAT_1464c9c24;
          fVar44 = fVar38 * fVar32 * DAT_1464c9c24;
          uVar23 = (**(code **)(*(longlong *)pfVar19 + 0x40))(pfVar19);
          fVar32 = *(float *)(lVar15 + 0x34 + lVar24);
          fVar36 = *(float *)(lVar15 + 0x38 + lVar24);
          fVar38 = fVar32 / (float)uVar23;
          uVar23 = (**(code **)(**(longlong **)(lVar15 + 0x18 + lVar24) + 0x40))();
          fVar34 = (fVar32 + fVar36) / (float)uVar23;
          uVar23 = (**(code **)(**(longlong **)(lVar15 + 0x18 + lVar24) + 0x48))();
          fVar32 = *(float *)(lVar15 + 0x3c + lVar24);
          fVar36 = *(float *)(lVar15 + 0x40 + lVar24);
          fVar37 = fVar32 / (float)uVar23;
          uVar23 = (**(code **)(**(longlong **)(lVar15 + 0x18 + lVar24) + 0x48))();
          uStack_39c = 0x3f800000;
          local_880[0] = *(undefined4 *)(lVar15 + 0x30 + lVar24);
          fStack_3a4 = (fVar33 + *(float *)(lVar15 + 4 + lVar24)) - fVar39;
          fVar32 = (fVar32 + fVar36) / (float)uVar23;
          local_3a8 = (fVar31 + *(float *)(lVar15 + lVar24)) - fVar40;
          fStack_3a0 = (fVar42 + *(float *)(lVar15 + 8 + lVar24)) - fVar44;
          puVar1 = (undefined4 *)(lVar15 + 0x20 + lVar24);
          uStack_390 = *puVar1;
          uStack_38c = puVar1[1];
          uStack_388 = puVar1[2];
          uStack_384 = puVar1[3];
          local_398 = fVar34;
          fStack_394 = fVar37;
          FHitProxyId::GetColor(local_880,&local_380);
          lVar14 = lVar21 * 0x2c;
          *(undefined8 *)(lVar14 + lVar27) = CONCAT44(fStack_3a4,local_3a8);
          ((undefined8 *)(lVar14 + lVar27))[1] = CONCAT44(uStack_39c,fStack_3a0);
          puVar8 = (undefined8 *)(lVar14 + 0x10 + lVar27);
          *puVar8 = CONCAT44(fStack_394,local_398);
          puVar8[1] = CONCAT44(uStack_38c,uStack_390);
          *(ulonglong *)(lVar14 + 0x20 + lVar27) = CONCAT44(uStack_384,uStack_388);
          *(undefined4 *)(lVar14 + 0x28 + lVar27) = local_380;
          local_878[0] = *(undefined4 *)(lVar15 + 0x30 + lVar24);
          uStack_370 = 0x3f800000;
          local_37c = fVar31 + *(float *)(lVar15 + lVar24) + fVar40;
          fStack_378 = fVar33 + *(float *)(lVar15 + 4 + lVar24) + fVar39;
          fStack_374 = fVar42 + *(float *)(lVar15 + 8 + lVar24) + fVar44;
          puVar1 = (undefined4 *)(lVar15 + 0x20 + lVar24);
          uStack_364 = *puVar1;
          uStack_360 = puVar1[1];
          uStack_35c = puVar1[2];
          uStack_358 = puVar1[3];
          local_36c = fVar34;
          fStack_368 = fVar32;
          FHitProxyId::GetColor(local_878,&local_354);
          uStack_344 = 0x3f800000;
          lVar14 = (lVar21 + 1) * 0x2c;
          *(undefined8 *)(lVar14 + lVar27) = CONCAT44(fStack_378,local_37c);
          ((undefined8 *)(lVar14 + lVar27))[1] = CONCAT44(uStack_370,fStack_374);
          puVar8 = (undefined8 *)(lVar14 + 0x10 + lVar27);
          *puVar8 = CONCAT44(fStack_368,local_36c);
          puVar8[1] = CONCAT44(uStack_360,uStack_364);
          *(ulonglong *)(lVar14 + 0x20 + lVar27) = CONCAT44(uStack_358,uStack_35c);
          *(undefined4 *)(lVar14 + 0x28 + lVar27) = local_354;
          local_870[0] = *(undefined4 *)(lVar15 + 0x30 + lVar24);
          fStack_348 = (*(float *)(lVar15 + 8 + lVar24) - fVar42) - fVar44;
          local_350 = (*(float *)(lVar15 + lVar24) - fVar31) - fVar40;
          fStack_34c = (*(float *)(lVar15 + 4 + lVar24) - fVar33) - fVar39;
          puVar1 = (undefined4 *)(lVar15 + 0x20 + lVar24);
          uStack_338 = *puVar1;
          uStack_334 = puVar1[1];
          uStack_330 = puVar1[2];
          uStack_32c = puVar1[3];
          local_340 = fVar38;
          fStack_33c = fVar37;
          FHitProxyId::GetColor(local_870,&local_328);
          lVar14 = (lVar21 + 2) * 0x2c;
          *(undefined8 *)(lVar14 + lVar27) = CONCAT44(fStack_34c,local_350);
          ((undefined8 *)(lVar14 + lVar27))[1] = CONCAT44(uStack_344,fStack_348);
          puVar8 = (undefined8 *)(lVar14 + 0x10 + lVar27);
          *puVar8 = CONCAT44(fStack_33c,local_340);
          puVar8[1] = CONCAT44(uStack_334,uStack_338);
          *(ulonglong *)(lVar14 + 0x20 + lVar27) = CONCAT44(uStack_32c,uStack_330);
          *(undefined4 *)(lVar14 + 0x28 + lVar27) = local_328;
          local_868[0] = *(undefined4 *)(lVar15 + 0x30 + lVar24);
          local_324 = fVar40 + fVar31 + *(float *)(lVar15 + lVar24);
          fStack_320 = fVar39 + fVar33 + *(float *)(lVar15 + 4 + lVar24);
          fStack_31c = fVar44 + fVar42 + *(float *)(lVar15 + 8 + lVar24);
          puVar1 = (undefined4 *)(lVar15 + 0x20 + lVar24);
          uStack_30c = *puVar1;
          uStack_308 = puVar1[1];
          uStack_304 = puVar1[2];
          uStack_300 = puVar1[3];
          uStack_318 = 0x3f800000;
          local_314 = fVar34;
          fStack_310 = fVar32;
          FHitProxyId::GetColor(local_868,&local_2fc);
          uStack_2ec = 0x3f800000;
          lVar14 = (lVar21 + 3) * 0x2c;
          *(undefined8 *)(lVar14 + lVar27) = CONCAT44(fStack_320,local_324);
          ((undefined8 *)(lVar14 + lVar27))[1] = CONCAT44(uStack_318,fStack_31c);
          puVar8 = (undefined8 *)(lVar14 + 0x10 + lVar27);
          *puVar8 = CONCAT44(fStack_310,local_314);
          puVar8[1] = CONCAT44(uStack_308,uStack_30c);
          *(ulonglong *)(lVar14 + 0x20 + lVar27) = CONCAT44(uStack_300,uStack_304);
          *(undefined4 *)(lVar14 + 0x28 + lVar27) = local_2fc;
          local_918 = CONCAT44(local_918._4_4_,*(undefined4 *)(lVar15 + 0x30 + lVar24));
          fStack_2f0 = (*(float *)(lVar15 + 8 + lVar24) - fVar42) - fVar44;
          local_2f8 = (*(float *)(lVar15 + lVar24) - fVar31) - fVar40;
          fStack_2f4 = (*(float *)(lVar15 + 4 + lVar24) - fVar33) - fVar39;
          puVar1 = (undefined4 *)(lVar15 + 0x20 + lVar24);
          uStack_2e0 = *puVar1;
          uStack_2dc = puVar1[1];
          uStack_2d8 = puVar1[2];
          uStack_2d4 = puVar1[3];
          local_2e8 = fVar38;
          fStack_2e4 = fVar37;
          FHitProxyId::GetColor(&local_918,&local_2d0);
          uStack_2c0 = 0x3f800000;
          lVar14 = (lVar21 + 4) * 0x2c;
          *(undefined8 *)(lVar14 + lVar27) = CONCAT44(fStack_2f4,local_2f8);
          ((undefined8 *)(lVar14 + lVar27))[1] = CONCAT44(uStack_2ec,fStack_2f0);
          puVar8 = (undefined8 *)(lVar14 + 0x10 + lVar27);
          *puVar8 = CONCAT44(fStack_2e4,local_2e8);
          puVar8[1] = CONCAT44(uStack_2dc,uStack_2e0);
          *(ulonglong *)(lVar14 + 0x20 + lVar27) = CONCAT44(uStack_2d4,uStack_2d8);
          *(undefined4 *)(lVar14 + 0x28 + lVar27) = local_2d0;
          local_910 = (void *)CONCAT44(local_910._4_4_,*(undefined4 *)(lVar15 + 0x30 + lVar24));
          local_2cc = fVar40 + (*(float *)(lVar15 + lVar24) - fVar31);
          puVar1 = (undefined4 *)(lVar15 + 0x20 + lVar24);
          uStack_2b4 = *puVar1;
          uStack_2b0 = puVar1[1];
          uStack_2ac = puVar1[2];
          uStack_2a8 = puVar1[3];
          fStack_2c8 = fVar39 + (*(float *)(lVar15 + 4 + lVar24) - fVar33);
          fStack_2c4 = fVar44 + (*(float *)(lVar15 + 8 + lVar24) - fVar42);
          local_2bc = fVar38;
          fStack_2b8 = fVar32;
          FHitProxyId::GetColor(&local_910,local_2a4);
          lVar15 = (lVar21 + 5) * 0x2c;
          *(undefined8 *)(lVar15 + lVar27) = CONCAT44(fStack_2c8,local_2cc);
          ((undefined8 *)(lVar15 + lVar27))[1] = CONCAT44(uStack_2c0,fStack_2c4);
          puVar8 = (undefined8 *)(lVar15 + 0x10 + lVar27);
          *puVar8 = CONCAT44(fStack_2b8,local_2bc);
          puVar8[1] = CONCAT44(uStack_2b0,uStack_2b4);
          *(ulonglong *)(lVar15 + 0x20 + lVar27) = CONCAT44(uStack_2a8,uStack_2ac);
          *(uint *)(lVar15 + 0x28 + lVar27) = local_2a4[0];
          pfVar17 = local_980;
          fVar31 = local_998;
          auVar41 = local_8f8;
          iVar10 = local_940;
        }
        lVar24 = lVar24 + 0x48;
        local_938 = (float *)((longlong)local_938 + -1);
        fVar32 = (float)local_928._0_4_;
        fVar36 = local_9a8;
        fVar34 = local_9a0;
        fVar37 = local_99c;
      } while (local_938 != (float *)0x0);
    }
    if (2 < iVar10) {
      if (((uint)local_9a4 < 2) || (uVar23 = 2, (int)local_9a4 - 5U < 2)) {
        uVar23 = 1;
      }
      if ((local_950 & uVar23) != 0) {
        local_9c8 = local_958;
        local_9d0 = (int *)0x0;
        local_9d8 = param_8;
        local_9e0 = param_7;
        local_9f0 = (float *)0x0;
        local_9f8 = (float *)CONCAT71(local_9f8._1_7_,param_5);
        local_a08 = local_9a4;
        local_a00 = pfVar28;
        local_9e8 = pfVar17;
        FUN_1422f6680(param_1,param_2,&local_1b8,local_990);
        puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar8 = puVar12 + 3;
        if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
          puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar8 = puVar12 + 3;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar8;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        local_a08 = 6.16571e-44;
        **(undefined8 **)(param_2 + 8) = puVar12;
        *(undefined8 **)(param_2 + 8) = puVar12 + 1;
        puVar12[1] = 0;
        *puVar12 = &PTR_LAB_143f489c0;
        *(undefined4 *)(puVar12 + 2) = local_98c;
        FUN_141a14d80(param_2,0,iVar10 / 3,lVar27);
      }
    }
    if (lVar27 != 0) {
      FMemory::Free();
    }
  }
  lVar27 = local_958;
  if (0 < (int)param_1[0x4e]) {
    iVar10 = 0;
    local_980 = (float *)0x0;
    do {
      pfVar17 = *(float **)(param_1 + 0x4c);
      if (*(float **)(param_1 + 0x4c) == (float *)0x0) {
        pfVar17 = param_1 + 0x1c;
      }
      piVar22 = (int *)((longlong)pfVar17 + (longlong)local_980);
      local_a08 = (float)piVar22[0xe];
      if (((uint)local_a08 < 2) || (uVar23 = 2, (int)local_a08 - 5U < 2)) {
        uVar23 = 1;
      }
      if ((local_950 & uVar23) != 0) {
        local_9d0 = piVar22 + 0xf;
        local_9c8 = lVar27;
        local_9d8 = param_8;
        local_9e0 = param_7;
        local_9e8 = *(float **)(piVar22 + 10);
        local_9f0 = *(float **)(piVar22 + 0xc);
        local_9f8 = (float *)CONCAT71(local_9f8._1_7_,param_5);
        local_a00 = pfVar28;
        FUN_1422f6680(param_1,param_2,&local_1b8,local_990);
        puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar8 = puVar12 + 3;
        if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
          puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar8 = puVar12 + 3;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar8;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        local_9e8 = (float *)CONCAT44(local_9e8._4_4_,0x2c);
        **(undefined8 **)(param_2 + 8) = puVar12;
        *(undefined8 **)(param_2 + 8) = puVar12 + 1;
        puVar12[1] = 0;
        *puVar12 = &PTR_LAB_143f489c0;
        *(undefined4 *)(puVar12 + 2) = local_98c;
        local_9f0 = *(float **)(param_1 + 0x7c);
        if (*(float **)(param_1 + 0x7c) == (float *)0x0) {
          local_9f0 = param_1 + 0x50;
        }
        local_9f0 = local_9f0 + (longlong)*piVar22 * 0xb;
        local_9f8 = (float *)CONCAT44(local_9f8._4_4_,2);
        local_a00 = (float *)*(int **)(piVar22 + 6);
        if (*(int **)(piVar22 + 6) == (int *)0x0) {
          local_a00 = (float *)(piVar22 + 2);
        }
        iVar20 = piVar22[8];
        local_a08 = (float)(iVar20 / 3 + (iVar20 >> 0x1f) +
                           (int)(((longlong)iVar20 / 3 + ((longlong)iVar20 >> 0x3f) & 0xffffffffU)
                                >> 0x1f));
        FUN_141abae60(param_2,0,0,(piVar22[1] - *piVar22) + 1);
      }
      iVar10 = iVar10 + 1;
      local_980 = local_980 + 0x18;
    } while (iVar10 < (int)param_1[0x4e]);
  }
  return 1;
}



// FUNCTION 1422ec5b0 FUN_1422ec5b0 body=1947 status=ok
// SIG undefined FUN_1422ec5b0(void)

void FUN_1422ec5b0(longlong param_1,longlong param_2,longlong param_3,uint param_4,
                  undefined8 param_5,float *param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  undefined8 *puVar17;
  ulonglong *puVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  longlong local_res8;
  longlong local_res10;
  longlong local_res18;
  undefined4 local_150 [2];
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  ulonglong local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_bc;
  
  iVar3 = *(int *)(param_1 + 0x20);
  lVar14 = (longlong)iVar3;
  if (0 < iVar3) {
    puVar18 = (ulonglong *)(param_2 + 0x30);
    iVar16 = iVar3 * 0x108;
    local_138 = *(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0;
    uVar12 = (longlong)iVar16 + local_138;
    local_res8 = param_1;
    local_res10 = param_2;
    local_res18 = param_3;
    if (*(ulonglong *)(param_2 + 0x38) < uVar12) {
      FMemStackBase::AllocateNewChunk(puVar18,iVar16 + 0x10);
      local_138 = *puVar18 + 0xf & 0xfffffffffffffff0;
      uVar12 = (longlong)iVar16 + local_138;
    }
    lVar11 = local_res18;
    lVar10 = local_res8;
    *puVar18 = uVar12;
    lVar19 = 0;
    *(int *)(param_2 + 0x178) = iVar3 * 6;
    *(undefined4 *)(param_2 + 0x170) = 0;
    *(int *)(param_2 + 0x174) = iVar3 * 2;
    *(undefined4 *)(param_2 + 0x17c) = 0x2c;
    *(ulonglong *)(param_2 + 0x180) = local_138;
    if (0 < iVar3) {
      puVar13 = (undefined8 *)(local_138 + 0x58);
      fStack_13c = 1.0;
      fVar27 = 1.0 / (float)param_4;
      do {
        lVar8 = *(longlong *)(lVar10 + 0x18);
        local_bc = 0x3f800000;
        fVar1 = *(float *)(lVar19 + 0xc + lVar8);
        local_148 = *(float *)(lVar19 + lVar8);
        lVar15 = lVar8 + 0x10 + lVar19;
        fStack_144 = *(float *)(lVar19 + 4 + lVar8);
        fVar26 = -fVar1;
        fStack_140 = *(float *)(lVar19 + 8 + lVar8);
        fVar20 = fStack_13c * *(float *)(lVar11 + 0x3c) + fStack_140 * *(float *)(lVar11 + 0x2c) +
                 fStack_144 * *(float *)(lVar11 + 0x1c) + local_148 * *(float *)(lVar11 + 0xc);
        fVar25 = fVar1 * *param_6 * fVar27 * fVar20;
        fVar24 = fVar1 * param_6[1] * fVar27 * fVar20;
        fVar22 = fVar1 * param_6[2] * fVar27 * fVar20;
        fVar23 = fVar26 * *param_7 * fVar27 * fVar20;
        fVar21 = fVar26 * param_7[1] * fVar27 * fVar20;
        fVar20 = fVar26 * param_7[2] * fVar27 * fVar20;
        FLinearColor::FLinearColor(&local_130,lVar15);
        uVar7 = uStack_124;
        uVar6 = uStack_128;
        uVar5 = uStack_12c;
        uVar4 = local_130;
        fVar1 = *(float *)(lVar19 + lVar8);
        fVar26 = *(float *)(lVar19 + 4 + lVar8);
        fVar2 = *(float *)(lVar19 + 8 + lVar8);
        local_res8._0_4_ = *(undefined4 *)(lVar19 + 0x14 + lVar8);
        FHitProxyId::GetColor(&local_res8,local_150);
        puVar13[-0xb] = CONCAT44((fVar24 + fVar26) - fVar21,(fVar25 + fVar1) - fVar23);
        puVar13[-10] = CONCAT44(0x3f800000,(fVar22 + fVar2) - fVar20);
        *(undefined4 *)(puVar13 + -9) = 0x3f800000;
        *(undefined4 *)((longlong)puVar13 + -0x44) = 0;
        *(undefined4 *)(puVar13 + -8) = uVar4;
        *(undefined4 *)((longlong)puVar13 + -0x3c) = uVar5;
        puVar13[-7] = CONCAT44(uVar7,uVar6);
        *(undefined4 *)(puVar13 + -6) = local_150[0];
        FLinearColor::FLinearColor(&local_120,lVar15);
        uVar7 = uStack_114;
        uVar6 = uStack_118;
        uVar5 = uStack_11c;
        uVar4 = local_120;
        local_res8._0_4_ = *(undefined4 *)(lVar19 + 0x14 + lVar8);
        fVar1 = *(float *)(lVar19 + 8 + lVar8);
        fVar26 = *(float *)(lVar19 + lVar8);
        fVar2 = *(float *)(lVar19 + 4 + lVar8);
        FHitProxyId::GetColor(&local_res8,local_150);
        *(ulonglong *)((longlong)puVar13 + -0x2c) =
             CONCAT44(fVar24 + fVar2 + fVar21,fVar25 + fVar26 + fVar23);
        *(ulonglong *)((longlong)puVar13 + -0x24) = CONCAT44(0x3f800000,fVar22 + fVar1 + fVar20);
        *(undefined4 *)((longlong)puVar13 + -0x1c) = 0x3f800000;
        *(undefined4 *)(puVar13 + -3) = 0x3f800000;
        *(undefined4 *)((longlong)puVar13 + -0x14) = uVar4;
        *(undefined4 *)(puVar13 + -2) = uVar5;
        *(ulonglong *)((longlong)puVar13 + -0xc) = CONCAT44(uVar7,uVar6);
        *(undefined4 *)((longlong)puVar13 + -4) = local_150[0];
        FLinearColor::FLinearColor(&local_110,lVar15);
        uVar7 = uStack_104;
        uVar6 = uStack_108;
        uVar5 = uStack_10c;
        uVar4 = local_110;
        fVar1 = *(float *)(lVar19 + 8 + lVar8);
        fVar26 = *(float *)(lVar19 + lVar8);
        fVar2 = *(float *)(lVar19 + 4 + lVar8);
        local_res8._0_4_ = *(undefined4 *)(lVar19 + 0x14 + lVar8);
        FHitProxyId::GetColor(&local_res8,local_150);
        *puVar13 = CONCAT44((fVar2 - fVar24) - fVar21,(fVar26 - fVar25) - fVar23);
        puVar13[1] = CONCAT44(0x3f800000,(fVar1 - fVar22) - fVar20);
        *(undefined4 *)(puVar13 + 2) = 0;
        *(undefined4 *)((longlong)puVar13 + 0x14) = 0;
        *(undefined4 *)(puVar13 + 3) = uVar4;
        *(undefined4 *)((longlong)puVar13 + 0x1c) = uVar5;
        puVar13[4] = CONCAT44(uVar7,uVar6);
        *(undefined4 *)(puVar13 + 5) = local_150[0];
        FLinearColor::FLinearColor(&local_100,lVar15);
        uVar7 = uStack_f4;
        uVar6 = uStack_f8;
        uVar5 = uStack_fc;
        uVar4 = local_100;
        fVar1 = *(float *)(lVar19 + lVar8);
        fVar26 = *(float *)(lVar19 + 4 + lVar8);
        fVar2 = *(float *)(lVar19 + 8 + lVar8);
        local_res8._0_4_ = *(undefined4 *)(lVar19 + 0x14 + lVar8);
        FHitProxyId::GetColor(&local_res8,local_150);
        *(ulonglong *)((longlong)puVar13 + 0x2c) =
             CONCAT44(fVar21 + fVar24 + fVar26,fVar23 + fVar25 + fVar1);
        *(ulonglong *)((longlong)puVar13 + 0x34) = CONCAT44(0x3f800000,fVar20 + fVar22 + fVar2);
        *(undefined4 *)((longlong)puVar13 + 0x3c) = 0x3f800000;
        *(undefined4 *)(puVar13 + 8) = 0x3f800000;
        *(undefined4 *)((longlong)puVar13 + 0x44) = uVar4;
        *(undefined4 *)(puVar13 + 9) = uVar5;
        *(ulonglong *)((longlong)puVar13 + 0x4c) = CONCAT44(uVar7,uVar6);
        *(undefined4 *)((longlong)puVar13 + 0x54) = local_150[0];
        FLinearColor::FLinearColor(&local_f0,lVar15);
        uVar7 = uStack_e4;
        uVar6 = uStack_e8;
        uVar5 = uStack_ec;
        uVar4 = local_f0;
        fVar1 = *(float *)(lVar19 + 8 + lVar8);
        fVar26 = *(float *)(lVar19 + lVar8);
        fVar2 = *(float *)(lVar19 + 4 + lVar8);
        local_res8._0_4_ = *(undefined4 *)(lVar19 + 0x14 + lVar8);
        FHitProxyId::GetColor(&local_res8,local_150);
        puVar13[0xb] = CONCAT44((fVar2 - fVar24) - fVar21,(fVar26 - fVar25) - fVar23);
        puVar13[0xc] = CONCAT44(0x3f800000,(fVar1 - fVar22) - fVar20);
        *(undefined4 *)(puVar13 + 0xd) = 0;
        *(undefined4 *)((longlong)puVar13 + 0x6c) = 0;
        *(undefined4 *)(puVar13 + 0xe) = uVar4;
        *(undefined4 *)((longlong)puVar13 + 0x74) = uVar5;
        puVar13[0xf] = CONCAT44(uVar7,uVar6);
        *(undefined4 *)(puVar13 + 0x10) = local_150[0];
        FLinearColor::FLinearColor(&local_e0,lVar15);
        uVar7 = uStack_d4;
        uVar6 = uStack_d8;
        uVar5 = uStack_dc;
        uVar4 = local_e0;
        fVar1 = *(float *)(lVar19 + lVar8);
        fVar26 = *(float *)(lVar19 + 4 + lVar8);
        fVar2 = *(float *)(lVar19 + 8 + lVar8);
        local_res8 = CONCAT44(local_res8._4_4_,*(undefined4 *)(lVar19 + 0x14 + lVar8));
        FHitProxyId::GetColor(&local_res8,local_150);
        lVar19 = lVar19 + 0x18;
        *(ulonglong *)((longlong)puVar13 + 0x84) =
             CONCAT44(fVar21 + (fVar26 - fVar24),fVar23 + (fVar1 - fVar25));
        *(ulonglong *)((longlong)puVar13 + 0x8c) = CONCAT44(0x3f800000,fVar20 + (fVar2 - fVar22));
        *(undefined8 *)((longlong)puVar13 + 0x94) = 0x3f80000000000000;
        *(ulonglong *)((longlong)puVar13 + 0x9c) = CONCAT44(uVar5,uVar4);
        *(ulonglong *)((longlong)puVar13 + 0xa4) = CONCAT44(uVar7,uVar6);
        *(undefined4 *)((longlong)puVar13 + 0xac) = local_150[0];
        puVar13 = puVar13 + 0x21;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      puVar18 = (ulonglong *)(local_res10 + 0x30);
      param_2 = local_res10;
    }
    puVar17 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar17 + 5;
    if ((undefined8 *)puVar18[1] < puVar13) {
      FMemStackBase::AllocateNewChunk(puVar18,0x30);
      puVar17 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar17 + 5;
    }
    *puVar18 = (ulonglong)puVar13;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar17;
    uVar9 = *(undefined8 *)(param_2 + 0x180);
    uVar4 = *(undefined4 *)(param_2 + 0x178);
    uVar5 = *(undefined4 *)(param_2 + 0x17c);
    uVar6 = *(undefined4 *)(param_2 + 0x174);
    uVar7 = *(undefined4 *)(param_2 + 0x170);
    *(undefined8 **)(param_2 + 8) = puVar17 + 1;
    puVar17[1] = 0;
    *puVar17 = &PTR_LAB_144d91e10;
    *(undefined4 *)(puVar17 + 2) = uVar7;
    *(undefined4 *)((longlong)puVar17 + 0x14) = uVar6;
    *(undefined4 *)(puVar17 + 3) = uVar4;
    *(undefined4 *)((longlong)puVar17 + 0x1c) = uVar5;
    puVar17[4] = uVar9;
    *(undefined8 *)(param_2 + 0x180) = 0;
    *(undefined4 *)(param_2 + 0x178) = 0;
  }
  return;
}



// FUNCTION 1422ecd60 Execute body=82 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,AAudioVolume,TTypeWrapper<void>___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType)>
     ::Execute(longlong param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0001422ecdaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1422ecdc0 ExecuteIfSafe body=111 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined1
TBaseUObjectMethodDelegateInstance<0,AAudioVolume,void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType)>
::ExecuteIfSafe(longlong param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  uVar2 = (undefined1)lVar3;
  if (lVar3 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,param_4);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 1422ece40 FUN_1422ece40 body=2243 status=ok
// SIG undefined FUN_1422ece40(void)

longlong FUN_1422ece40(longlong param_1,longlong param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 (*pauVar6) [16];
  undefined2 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  ulonglong local_res8;
  ulonglong local_res18 [2];
  undefined1 local_188 [16];
  int local_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  undefined2 *local_168;
  undefined8 local_160;
  undefined2 *local_158;
  undefined8 local_150;
  undefined2 *local_148;
  undefined8 local_140;
  undefined2 *local_138;
  undefined8 local_130;
  undefined2 *local_128;
  undefined8 local_120;
  undefined2 *local_118;
  undefined8 local_110;
  undefined2 *local_108;
  undefined8 local_100;
  undefined2 *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  longlong local_a0 [2];
  longlong local_90 [2];
  longlong local_80 [2];
  longlong local_70 [3];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  
  lVar8 = 0;
  if (*(longlong *)(param_1 + 0x238) == 0) {
    return 0;
  }
  local_res18[0] = param_3;
  lVar3 = AWarriorSkills1AIController::GetPrivateStaticClass();
  lVar4 = param_1;
  do {
    if (lVar4 == lVar3) {
      return 0;
    }
    lVar4 = *(longlong *)(lVar4 + 0x30);
  } while (lVar4 != 0);
  local_res8 = local_res18[0] & 0xffffffff;
  do {
    lVar4 = *(longlong *)(param_1 + 0x238);
    if (lVar4 == 0) {
LAB_1422ecf4a:
      lVar4 = FUN_1422f1d40(param_1,0);
      if (lVar4 == 0) goto LAB_1422ed623;
      if ((DAT_1468c21ab != '\0') && ((*(uint *)(lVar4 + 8) >> 10 & 1) != 0)) {
        puVar5 = (undefined8 *)FName::ToString(local_res18,local_a0);
        if (*(int *)(puVar5 + 1) == 0) {
          puVar11 = &DAT_143f3eda8;
        }
        else {
          puVar11 = (undefined2 *)*puVar5;
        }
        if ((param_2 == 0) || (*(longlong *)(param_2 + 0x10) == 0)) {
          local_150 = 5;
          local_158 = (undefined2 *)0x0;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0);
          FGenericPlatformString::Memcpy(local_158,&DAT_143f3edc8,10);
        }
        else {
          UObjectBaseUtility::GetFullName(param_2,&local_158,0);
        }
        puVar10 = &DAT_143f3eda8;
        if ((int)local_150 != 0) {
          puVar10 = local_158;
        }
        if (*(longlong *)(lVar4 + 0x10) == 0) {
          local_160 = 5;
          local_168 = (undefined2 *)0x0;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,0);
          FGenericPlatformString::Memcpy(local_168,&DAT_143f3edc8,10);
        }
        else {
          UObjectBaseUtility::GetFullName(lVar4,&local_168,0);
        }
        puVar7 = &DAT_143f3eda8;
        if ((int)local_160 != 0) {
          puVar7 = local_168;
        }
        LowLevelFatalErrorHandler
                  ("Unknown",0x2ff,
                   L"%s had RF_NeedLoad when searching for an archetype of %s named %s",puVar7,
                   puVar10,puVar11);
        if (local_168 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (local_158 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (local_a0[0] != 0) {
          FMemory::Free();
        }
        puVar5 = (undefined8 *)FName::ToString(local_res18,local_90);
        if (*(int *)(puVar5 + 1) == 0) {
          puVar11 = &DAT_143f3eda8;
        }
        else {
          puVar11 = (undefined2 *)*puVar5;
        }
        if ((param_2 == 0) || (*(longlong *)(param_2 + 0x10) == 0)) {
          local_130 = 5;
          local_138 = (undefined2 *)0x0;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
          FGenericPlatformString::Memcpy(local_138,&DAT_143f3edc8,10);
        }
        else {
          UObjectBaseUtility::GetFullName(param_2,&local_138,0);
        }
        puVar10 = &DAT_143f3eda8;
        if ((int)local_130 != 0) {
          puVar10 = local_138;
        }
        if (*(longlong *)(lVar4 + 0x10) == 0) {
          local_140 = 5;
          local_148 = (undefined2 *)0x0;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
          FGenericPlatformString::Memcpy(local_148,&DAT_143f3edc8,10);
        }
        else {
          UObjectBaseUtility::GetFullName(lVar4,&local_148,0);
        }
        puVar7 = &DAT_143f3eda8;
        if ((int)local_140 != 0) {
          puVar7 = local_148;
        }
        FDebug::AssertFailed
                  (&DAT_14502e2c7,"Unknown",0x2ff,
                   L"%s had RF_NeedLoad when searching for an archetype of %s named %s",puVar7,
                   puVar10,puVar11);
        if (local_148 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (local_138 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (local_90[0] != 0) {
          FMemory::Free();
        }
      }
      UInheritableComponentHandler::FindKey(lVar4,local_188,local_res18[0]);
      lVar3 = local_188._0_8_;
      lVar9 = local_188._8_8_;
      if (((local_188._0_8_ == 0) ||
          (((local_178 == 0 && iStack_174 == 0) && iStack_170 == 0) && iStack_16c == 0)) ||
         ((local_188._8_8_ != 0 && (local_res18[1] = 0, local_188._8_8_ == 0)))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) || (local_res18[0] == local_res8)) {
        uVar12 = local_188._0_4_;
        uVar13 = local_188._4_4_;
        uVar14 = local_188._8_4_;
        uVar15 = local_188._12_4_;
        auVar1 = local_188;
      }
      else {
        pauVar6 = (undefined1 (*) [16])
                  UInheritableComponentHandler::FindKey(lVar4,&local_c0,local_res8);
        auVar1 = *pauVar6;
        local_188._8_8_ = auVar1._8_8_;
        local_178 = *(int *)pauVar6[1];
        iStack_174 = *(int *)(pauVar6[1] + 4);
        iStack_170 = *(int *)(pauVar6[1] + 8);
        iStack_16c = *(int *)(pauVar6[1] + 0xc);
        lVar3 = auVar1._0_8_;
        if (((lVar3 == 0) ||
            (((iStack_16c == 0 && iStack_174 == 0) && local_178 == 0) && iStack_170 == 0)) ||
           ((local_e8 = 0, local_188._8_8_ != 0 && (local_e0 = 0, local_188._8_8_ == 0)))) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        lVar9 = local_188._8_8_;
        uVar12 = auVar1._0_4_;
        uVar13 = auVar1._4_4_;
        uVar14 = auVar1._8_4_;
        uVar15 = auVar1._12_4_;
        if (bVar2) {
          local_d8 = 0;
          if ((local_188._8_8_ == 0) ||
             (((iStack_16c == 0 && iStack_174 == 0) && local_178 == 0) && iStack_170 == 0)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            local_c0 = 0;
            uStack_b8 = 0;
            local_c0._0_4_ = 0;
            local_c0._4_4_ = 0;
            uStack_b8._0_4_ = 0;
            uStack_b8._4_4_ = 0;
            local_b0 = 0;
            uStack_a8 = 0;
            local_188._0_8_ = 0;
            lVar3 = local_188._0_8_;
            local_188._0_12_ = ZEXT812(0);
            local_188._12_4_ = 0;
            auVar1 = local_188;
            local_188._8_8_ = 0;
            local_178 = 0;
            iStack_174 = 0;
            iStack_170 = 0;
            iStack_16c = 0;
            lVar9 = local_188._8_8_;
            uVar12 = (undefined4)local_c0;
            uVar13 = local_c0._4_4_;
            uVar14 = (undefined4)uStack_b8;
            uVar15 = uStack_b8._4_4_;
          }
        }
      }
      local_188 = auVar1;
      if (((lVar3 == 0) ||
          (((iStack_16c == 0 && iStack_174 == 0) && local_178 == 0) && iStack_170 == 0)) ||
         ((local_d0 = 0, lVar9 != 0 && (local_c8 = 0, lVar9 == 0)))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((!bVar2) ||
         (local_58 = uVar12, uStack_54 = uVar13, uStack_50 = uVar14, uStack_4c = uVar15,
         local_48 = local_178, iStack_44 = iStack_174, iStack_40 = iStack_170,
         iStack_3c = iStack_16c,
         lVar8 = UInheritableComponentHandler::GetOverridenComponentTemplate(lVar4,&local_58),
         DAT_1468c21ab == '\0')) goto LAB_1422ed623;
      if (lVar8 != 0) {
        if ((*(uint *)(lVar8 + 8) >> 10 & 1) != 0) {
          puVar5 = (undefined8 *)FName::ToString(local_res18,local_80);
          if (*(int *)(puVar5 + 1) == 0) {
            puVar11 = &DAT_143f3eda8;
          }
          else {
            puVar11 = (undefined2 *)*puVar5;
          }
          if ((param_2 == 0) || (*(longlong *)(param_2 + 0x10) == 0)) {
            local_118 = (undefined2 *)0x0;
            local_110 = 5;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
            FGenericPlatformString::Memcpy(local_118,&DAT_143f3edc8,10);
          }
          else {
            UObjectBaseUtility::GetFullName(param_2,&local_118,0);
          }
          puVar10 = &DAT_143f3eda8;
          if ((int)local_110 != 0) {
            puVar10 = local_118;
          }
          if (*(longlong *)(lVar8 + 0x10) == 0) {
            local_120 = 5;
            local_128 = (undefined2 *)0x0;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
            FGenericPlatformString::Memcpy(local_128,&DAT_143f3edc8,10);
          }
          else {
            UObjectBaseUtility::GetFullName(lVar8,&local_128,0);
          }
          puVar7 = &DAT_143f3eda8;
          if ((int)local_120 != 0) {
            puVar7 = local_128;
          }
          LowLevelFatalErrorHandler
                    ("Unknown",799,
                     L"%s had RF_NeedLoad when searching for an archetype of %s named %s",puVar7,
                     puVar10,puVar11);
          if (local_128 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          if (local_118 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          if (local_80[0] != 0) {
            FMemory::Free();
          }
          puVar5 = (undefined8 *)FName::ToString(local_res18,local_70);
          if (*(int *)(puVar5 + 1) == 0) {
            puVar11 = &DAT_143f3eda8;
          }
          else {
            puVar11 = (undefined2 *)*puVar5;
          }
          if ((param_2 == 0) || (*(longlong *)(param_2 + 0x10) == 0)) {
            local_f8 = (undefined2 *)0x0;
            local_f0 = 5;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
            FGenericPlatformString::Memcpy(local_f8,&DAT_143f3edc8,10);
          }
          else {
            UObjectBaseUtility::GetFullName(param_2,&local_f8,0);
          }
          puVar10 = &DAT_143f3eda8;
          if ((int)local_f0 != 0) {
            puVar10 = local_f8;
          }
          if (*(longlong *)(lVar8 + 0x10) == 0) {
            local_108 = (undefined2 *)0x0;
            local_100 = 5;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
            FGenericPlatformString::Memcpy(local_108,&DAT_143f3edc8,10);
          }
          else {
            UObjectBaseUtility::GetFullName(lVar8,&local_108,0);
          }
          puVar7 = &DAT_143f3eda8;
          if ((int)local_100 != 0) {
            puVar7 = local_108;
          }
          FDebug::AssertFailed
                    (&DAT_14502e2fa,"Unknown",799,
                     L"%s had RF_NeedLoad when searching for an archetype of %s named %s",puVar7,
                     puVar10,puVar11);
          if (local_108 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          if (local_f8 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          if (local_70[0] != 0) {
            FMemory::Free();
          }
        }
        goto LAB_1422ed623;
      }
    }
    else {
      if ((*(uint *)(lVar4 + 8) >> 10 & 1) != 0) {
        USimpleConstructionScript::PreloadChain(lVar4);
      }
      lVar4 = FUN_142777740(lVar4,local_res18[0]);
      if (lVar4 == 0) goto LAB_1422ecf4a;
      lVar4 = *(longlong *)(lVar4 + 0x30);
      if (lVar4 != 0) {
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(param_2 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(param_2 + 0x90) * 8) != param_2 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          lVar8 = lVar4;
        }
      }
LAB_1422ed623:
      if (lVar8 != 0) goto LAB_1422ed6d5;
    }
    lVar8 = FUN_1417a3f20(param_1,param_2,local_res8);
    if ((lVar8 != 0) ||
       ((local_res18[0] != local_res8 && (lVar8 = FUN_1417a3f20(param_1,param_2), lVar8 != 0)))) {
LAB_1422ed6d5:
      for (; (param_2 != 0 && (param_2 != *(longlong *)(lVar8 + 0x10)));
          param_2 = *(longlong *)(param_2 + 0x30)) {
      }
      return lVar8;
    }
    param_1 = *(longlong *)(param_1 + 0x30);
    if (param_1 == 0) {
      return lVar8;
    }
    lVar4 = UBlueprintGeneratedClass::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return lVar8;
    }
  } while( true );
}



// FUNCTION 1422ed710 FUN_1422ed710 body=60 status=ok
// SIG undefined FUN_1422ed710(void)

longlong FUN_1422ed710(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (0 < *(int *)(param_1 + 0x220)) {
    plVar2 = *(longlong **)(param_1 + 0x218);
    lVar3 = 0;
    do {
      lVar1 = *plVar2;
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x18) == *param_2)) {
        return lVar1;
      }
      lVar3 = lVar3 + 1;
      plVar2 = plVar2 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x220));
  }
  return 0;
}



// FUNCTION 1422ed750 FUN_1422ed750 body=290 status=ok
// SIG undefined FUN_1422ed750(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1422ed750(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                      undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    local_60 = *param_3;
    uStack_58 = param_3[1];
    local_70 = *param_5;
    uStack_68 = param_5[1];
    local_40 = *(undefined4 *)(param_3 + 4);
    local_50 = param_3[2];
    uStack_48 = param_3[3];
    local_88 = param_2;
    iVar2 = (*(code *)*param_4)(param_4[1],&local_88);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar2) * 4);
    while (iVar2 != -1) {
      lVar4 = (longlong)(*(int *)(param_3 + 4) * iVar2) + *param_1;
      local_80 = lVar4;
      local_78 = param_2;
      cVar1 = FUN_1422e7380(&local_70,&local_78,&local_80);
      if (cVar1 != '\0') {
        if (iVar2 == -1) {
          return 0;
        }
        return (longlong)(*(int *)(param_3 + 4) * iVar2) + (longlong)*(int *)((longlong)param_3 + 4)
               + *param_1;
      }
      iVar2 = *(int *)(*(int *)((longlong)param_3 + 0xc) + lVar4);
    }
  }
  return 0;
}



// FUNCTION 1422ed880 FUN_1422ed880 body=662 status=ok
// SIG undefined FUN_1422ed880(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1422ed880(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_128 [40];
  longlong local_100;
  longlong local_f8;
  undefined1 local_f0 [24];
  undefined1 local_d8 [80];
  code *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  if ((int)param_1[6] != 0) {
    plVar9 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar9 = param_1;
    }
    lVar3 = *plVar9;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 0x48) = *(int *)(lVar3 + 0x48) + 1;
      UNLOCK();
      LOCK();
      *(int *)(lVar3 + 0x48) = *(int *)(lVar3 + 0x48) + 1;
      UNLOCK();
    }
    local_58 = (longlong *)0x0;
    local_48 = 0;
    local_100 = lVar3;
    puVar7 = (undefined8 *)FUN_140438ef0(0x10,local_78);
    lVar10 = lVar3;
    if (puVar7 != (undefined8 *)0x0) {
      local_100 = 0;
      *puVar7 = &PTR_CopyToEmptyStorage_1450377b0;
      puVar7[1] = lVar3;
      lVar10 = 0;
    }
    local_88[0] = UE4Function_Private::
                  TFunctionRefCaller<<lambda_ba633f788b7b3e2fa7fc79535baf4331>,void___cdecl(void)>::
                  Call;
    if (lVar10 != 0) {
      LOCK();
      piVar1 = (int *)(lVar10 + 0x48);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        FGraphEvent::Recycle(local_100);
      }
    }
    lVar8 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_d8,local_88);
    plVar9 = (longlong *)FUN_140596960(local_f0,0,0xff);
    lVar10 = *plVar9;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(lVar10 + 0x10,lVar8);
    *(undefined4 *)(lVar10 + 0x60) = 1;
    lVar10 = *plVar9;
    lVar6 = plVar9[2];
    lVar4 = plVar9[1];
    lVar5 = *(longlong *)(lVar10 + 0x78);
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + 1;
      UNLOCK();
    }
    local_f8 = lVar5;
    FUN_1405ab110(lVar10,lVar4,(int)lVar6,1);
    if (*(int *)(lVar8 + 0x40) != 0) {
      plVar9 = *(longlong **)(lVar8 + 0x30);
      if (*(longlong **)(lVar8 + 0x30) == (longlong *)0x0) {
        plVar9 = (longlong *)(lVar8 + 0x10);
      }
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x10))(plVar9,0);
      }
    }
    if (*(longlong *)(lVar8 + 0x30) != 0) {
      FMemory::Free();
    }
    if (lVar5 != 0) {
      LOCK();
      piVar1 = (int *)(lVar5 + 0x48);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        FGraphEvent::Recycle(local_f8);
      }
    }
    iVar11 = (int)param_1[5];
    plVar9 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar9 = param_1;
    }
    for (; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar9 != 0) {
        LOCK();
        piVar1 = (int *)(*plVar9 + 0x48);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FGraphEvent::Recycle();
        }
      }
      plVar9 = plVar9 + 1;
    }
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) != 0) {
      TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeTo(param_1,0);
    }
    *(undefined4 *)(param_1 + 6) = 0;
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
    if (lVar3 != 0) {
      LOCK();
      piVar1 = (int *)(lVar3 + 0x48);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        FGraphEvent::Recycle(lVar3);
      }
    }
  }
  return;
}



// FUNCTION 1422edb20 FUN_1422edb20 body=358 status=ok
// SIG undefined FUN_1422edb20(void)

void FUN_1422edb20(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  bool bVar11;
  
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x48))(param_2);
    uVar5 = 0;
    lVar2 = (longlong)(int)param_1[1];
    if ((int)param_1[1] != 0) {
      bVar11 = *(longlong **)*param_1 != param_2;
      uVar3 = uVar5;
      uVar7 = uVar5;
      uVar9 = uVar5;
      do {
        iVar6 = (int)uVar7;
        uVar3 = uVar3 + 1;
        uVar7 = (ulonglong)(iVar6 + 1);
        if ((longlong)uVar3 < lVar2) {
          puVar1 = (undefined8 *)(*param_1 + uVar3 * 8);
          do {
            if (bVar11 != ((longlong *)*puVar1 != param_2)) break;
            uVar7 = (ulonglong)((int)uVar7 + 1);
            uVar3 = uVar3 + 1;
            puVar1 = puVar1 + 1;
          } while ((longlong)uVar3 < lVar2);
        }
        iVar10 = (int)uVar7 - iVar6;
        if (bVar11 != false) {
          iVar8 = (int)uVar9;
          if (iVar8 != iVar6) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*param_1 + (longlong)iVar8 * 8),
                       (void *)(*param_1 + (longlong)iVar6 * 8),(longlong)iVar10 << 3);
          }
          uVar9 = (ulonglong)(uint)(iVar8 + iVar10);
        }
        bVar11 = (bool)(bVar11 ^ 1);
      } while ((longlong)uVar3 < lVar2);
      *(int *)(param_1 + 1) = (int)uVar9;
    }
    plVar4 = (longlong *)param_1[0x12];
    uVar3 = (longlong)(int)param_1[0x13] & 0x1fffffffffffffff;
    if (plVar4 + (int)param_1[0x13] < plVar4) {
      uVar3 = uVar5;
    }
    if (uVar3 != 0) {
      do {
        if (*plVar4 != 0) {
          FUN_1422da2f0(*plVar4,param_2);
        }
        plVar4 = plVar4 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar3);
    }
    (**(code **)*param_2)(param_2,1);
  }
  return;
}



// FUNCTION 1422edc90 FreeLoadedChunk body=154 status=ok
// SIG undefined FreeLoadedChunk(void)

void FStreamingWaveData::FreeLoadedChunk(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_2[1];
  if (plVar1 != (longlong *)0x0) {
    if (*(char *)((longlong)plVar1 + 0x73) == '\0') {
      *(undefined1 *)((longlong)plVar1 + 0x73) = 1;
      *(undefined1 *)(plVar1 + 0xe) = 1;
      if (*(char *)((longlong)plVar1 + 0x71) == '\0') {
        (**(code **)(*plVar1 + 0x10))();
      }
    }
    plVar1 = (longlong *)param_2[1];
    if (*(char *)((longlong)plVar1 + 0x71) == '\0') {
      (**(code **)(*plVar1 + 8))(plVar1,0);
      plVar1 = (longlong *)param_2[1];
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)*plVar1)(plVar1,1);
    }
    param_2[1] = 0;
    FAudioStreamingManager::ProcessPendingAsyncFileResults(*(undefined8 *)(param_1 + 0x50));
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  *param_2 = 0;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
  return;
}



// FUNCTION 1422edd30 FUN_1422edd30 body=153 status=ok
// SIG undefined FUN_1422edd30(void)

void FUN_1422edd30(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  iVar1 = *(int *)(param_2 + 0x1d8);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
      lVar3 = *(longlong *)(param_1 + 0x50);
      if (*(longlong *)(param_1 + 0x50) == 0) {
        lVar3 = param_1 + 0x48;
      }
      iVar2 = *(int *)(lVar3 + ((longlong)*(int *)(param_1 + 0x58) - 1U & (longlong)iVar1) * 4);
      if (iVar2 != -1) {
        lVar3 = *(longlong *)(param_1 + 0x10);
        do {
          lVar4 = (longlong)iVar2;
          if (*(int *)(lVar3 + lVar4 * 0x18) == iVar1) {
            if ((iVar2 != -1) && (lVar3 = lVar3 + lVar4 * 0x18, lVar3 != 0)) {
              uVar5 = *(undefined8 *)(lVar3 + 8);
              goto LAB_1422edd99;
            }
            break;
          }
          iVar2 = *(int *)(lVar3 + 0x10 + lVar4 * 0x18);
        } while (iVar2 != -1);
      }
    }
    uVar5 = 0;
LAB_1422edd99:
    FUN_1422edb20(param_1,uVar5);
    *(undefined4 *)(param_2 + 0x1d8) = 0;
  }
  return;
}



// FUNCTION 1422eddd0 GenericMap_Add body=515 status=ok
// SIG undefined GenericMap_Add(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UBlueprintMapLibrary::GenericMap_Add
               (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_1d8 [32];
  code **local_1b8;
  code **local_1b0;
  code **local_1a8;
  code *local_198;
  undefined1 **ppuStack_190;
  code *local_188;
  code **ppcStack_180;
  code *local_178;
  undefined8 *puStack_170;
  code *local_168;
  undefined8 *puStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 *local_118;
  undefined8 *puStack_110;
  code *local_108;
  undefined8 *puStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined1 *local_b8;
  undefined8 *puStack_b0;
  undefined1 *local_a8;
  undefined8 *puStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  code *local_68;
  undefined8 *puStack_60;
  code *local_58;
  undefined8 *puStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  ulonglong local_18;
  
  if (param_1 != 0) {
    local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
    local_150 = *(undefined8 *)(param_2 + 0x70);
    local_c0 = *(undefined4 *)(param_2 + 0xa0);
    local_158 = *(undefined8 *)(param_2 + 0x78);
    local_e0 = *(undefined8 *)(param_2 + 0x80);
    uStack_d8 = *(undefined8 *)(param_2 + 0x88);
    puStack_a0 = &local_158;
    local_d0 = *(undefined8 *)(param_2 + 0x90);
    uStack_c8 = *(undefined8 *)(param_2 + 0x98);
    puStack_110 = &local_150;
    local_118 = &LAB_141784950;
    puStack_50 = &local_138;
    puStack_100 = &local_128;
    local_108 = FUN_1417849a0;
    puStack_170 = &local_148;
    puStack_160 = &local_140;
    local_78 = *(undefined4 *)(param_2 + 0xa0);
    ppuStack_190 = &local_b8;
    local_b8 = &LAB_141784950;
    local_98 = *(undefined8 *)(param_2 + 0x80);
    uStack_90 = *(undefined8 *)(param_2 + 0x88);
    local_28 = *(undefined4 *)(param_2 + 0xa0);
    local_a8 = &LAB_141784950;
    local_88 = *(undefined8 *)(param_2 + 0x90);
    uStack_80 = *(undefined8 *)(param_2 + 0x98);
    ppcStack_180 = &local_68;
    local_198 = FUN_141784a20;
    local_1a8 = &local_198;
    local_58 = FUN_1417849a0;
    local_38 = *(undefined8 *)(param_2 + 0x90);
    uStack_30 = *(undefined8 *)(param_2 + 0x98);
    local_68 = FUN_1417849a0;
    local_48 = *(undefined8 *)(param_2 + 0x80);
    uStack_40 = *(undefined8 *)(param_2 + 0x88);
    local_188 = FUN_141784a70;
    local_168 = FUN_141784930;
    local_178 = FUN_141784a00;
    local_1b0 = &local_188;
    local_1b8 = &local_178;
    local_148 = local_150;
    local_140 = local_150;
    local_138 = local_158;
    local_130 = param_4;
    local_128 = local_150;
    local_120 = param_3;
    local_f8 = local_150;
    local_f0 = local_158;
    local_e8 = param_1;
    puStack_b0 = puStack_110;
    puStack_60 = puStack_100;
    FUN_141782d20(0x41784930,param_3,&uStack_d8,&local_168);
  }
  return;
}



// FUNCTION 1422edfe0 GenericMap_Clear body=244 status=ok
// SIG undefined GenericMap_Clear(void)

void UBlueprintMapLibrary::GenericMap_Clear(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  
  if (param_1 != 0) {
    local_48 = *(undefined8 *)(param_2 + 0x70);
    local_30 = *(undefined4 *)(param_2 + 0x80);
    uStack_2c = *(undefined4 *)(param_2 + 0x84);
    uStack_28 = *(undefined4 *)(param_2 + 0x88);
    uStack_24 = *(undefined4 *)(param_2 + 0x8c);
    local_20 = *(undefined4 *)(param_2 + 0x90);
    uStack_1c = *(undefined4 *)(param_2 + 0x94);
    uStack_18 = *(undefined4 *)(param_2 + 0x98);
    uStack_14 = *(undefined4 *)(param_2 + 0x9c);
    local_40 = *(undefined8 *)(param_2 + 0x78);
    uVar1 = *(undefined4 *)(param_2 + 0xa0);
    if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
      local_38 = param_1;
      local_10 = uVar1;
      FUN_14176f320(&local_48,0);
      *(undefined4 *)(param_1 + 8) = 0;
      if (*(int *)(param_1 + 0xc) != 0) {
        FScriptArray::ResizeTo(param_1,0,uVar1);
      }
      *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x34) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      if (*(int *)(param_1 + 0x2c) != 0) {
        *(undefined4 *)(param_1 + 0x2c) = 0;
        FScriptBitArray::Realloc(param_1 + 0x10,0);
      }
      puVar3 = *(undefined4 **)(param_1 + 0x40);
      if (*(undefined4 **)(param_1 + 0x40) == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)(param_1 + 0x38);
      }
      uVar2 = (longlong)*(int *)(param_1 + 0x48) & 0x3fffffffffffffff;
      if (puVar3 + *(int *)(param_1 + 0x48) < puVar3) {
        uVar2 = 0;
      }
      if (uVar2 != 0) {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar3 = 0xffffffff;
          puVar3 = puVar3 + 1;
        }
      }
    }
  }
  return;
}



// FUNCTION 1422ee0e0 FUN_1422ee0e0 body=403 status=ok
// SIG undefined FUN_1422ee0e0(void)

bool FUN_1422ee0e0(longlong param_1,longlong param_2,undefined8 param_3,void *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 local_res8;
  undefined8 local_78;
  undefined8 *puStack_70;
  code *local_68;
  undefined8 *puStack_60;
  code *local_58;
  undefined8 *puStack_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  
  if (param_1 == 0) {
    return false;
  }
  local_40 = *(undefined8 *)(param_2 + 0x78);
  local_res8 = *(undefined8 *)(param_2 + 0x70);
  local_30 = *(undefined8 *)(param_2 + 0x80);
  uStack_28 = *(undefined8 *)(param_2 + 0x88);
  local_10 = *(undefined4 *)(param_2 + 0xa0);
  local_20 = *(undefined4 *)(param_2 + 0x90);
  uStack_1c = *(undefined4 *)(param_2 + 0x94);
  uStack_18 = *(undefined4 *)(param_2 + 0x98);
  uStack_14 = *(undefined4 *)(param_2 + 0x9c);
  puStack_70 = &local_res8;
  puStack_60 = &local_78;
  local_58 = FUN_141784a00;
  local_68 = FUN_141784930;
  local_78 = local_res8;
  puStack_50 = puStack_70;
  local_48 = local_res8;
  local_38 = param_1;
  lVar2 = FUN_1422ed750(0x41784930,param_3,&local_30,&local_68,&local_58);
  if (param_4 != (void *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x78);
    if (lVar2 != 0) {
      (**(code **)(*plVar1 + 0x318))(plVar1,param_4,lVar2);
      return lVar2 != 0;
    }
    if ((*(uint *)(plVar1 + 7) >> 9 & 1) != 0) {
      _guard_xfg_dispatch_icall_nop
                (param_4,0,(longlong)(*(int *)((longlong)plVar1 + 0x34) * (int)plVar1[6]));
      return false;
    }
    (**(code **)(*plVar1 + 0x330))(plVar1,param_4);
  }
  return lVar2 != 0;
}



// FUNCTION 1422ee280 FUN_1422ee280 body=621 status=ok
// SIG undefined FUN_1422ee280(void)

void FUN_1422ee280(longlong *param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  void *_Dst;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  int local_res8 [2];
  int local_74;
  
  if ((param_1 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) {
    plVar5 = (longlong *)
             (**(code **)(**(longlong **)(param_4 + 0x70) + 0x338))
                       (*(longlong **)(param_4 + 0x70),local_res8);
    plVar6 = (longlong *)(**(code **)(**(longlong **)(param_2 + 0x70) + 0x338))();
    if (*plVar6 == *plVar5) {
      iVar1 = *(int *)(param_2 + 0xa0);
      iVar3 = *(int *)(param_2 + 0x80);
      plVar5 = *(longlong **)(param_4 + 0x70);
      uVar14 = *(uint *)(param_3 + 1);
      uVar11 = (ulonglong)uVar14;
      iVar9 = *(int *)((longlong)plVar5 + 0x34);
      local_res8[0] = iVar9;
      if (uVar14 != 0) {
        if (((plVar5[7] & 0x1040000000U) == 0) && (0 < (int)uVar14)) {
          do {
            if ((~(byte)((ulonglong)plVar5[7] >> 0x24) & 1) != 0) {
              (**(code **)(*plVar5 + 0x328))(plVar5);
            }
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        iVar9 = local_res8[0];
        *(undefined4 *)(param_3 + 1) = 0;
        if (*(int *)((longlong)param_3 + 0xc) != 0) {
          FScriptArray::ResizeTo(param_3);
        }
      }
      iVar10 = 0;
      plVar6 = *(longlong **)(param_4 + 0x70);
      iVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
      if (iVar13 != 0) {
        uVar14 = 1;
        local_74 = 0;
        do {
          if ((-1 < iVar10) && (iVar10 < (int)param_1[5])) {
            plVar7 = (longlong *)param_1[4];
            if ((longlong *)param_1[4] == (longlong *)0x0) {
              plVar7 = param_1 + 2;
            }
            iVar4 = iVar10;
            if (iVar10 < 0) {
              iVar4 = iVar10 + 0x1f;
            }
            if ((*(uint *)((longlong)plVar7 + (longlong)(iVar4 >> 5) * 4) & uVar14) != 0) {
              iVar2 = (int)param_3[1];
              iVar4 = iVar2 + 1;
              *(int *)(param_3 + 1) = iVar4;
              if (*(int *)((longlong)param_3 + 0xc) < iVar4) {
                FScriptArray::ResizeGrow(param_3,iVar2,iVar9);
                iVar4 = (int)param_3[1];
              }
              if (iVar4 == 0) {
                _Dst = (void *)0x0;
              }
              else {
                _Dst = (void *)((longlong)(iVar9 * iVar2) + *param_3);
              }
              if ((*(uint *)(plVar5 + 7) >> 9 & 1) == 0) {
                (**(code **)(*plVar5 + 0x330))(plVar5);
              }
              else {
                _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)local_res8[0]);
              }
              if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
                lVar12 = 0;
              }
              else {
                lVar12 = (longlong)local_74 + (longlong)iVar3 + *param_1;
              }
              if ((int)param_3[1] == 0) {
                lVar8 = 0;
              }
              else {
                lVar8 = (longlong)(iVar9 * iVar2) + *param_3;
              }
              (**(code **)(*plVar6 + 0x300))(plVar6,lVar8,lVar12);
              iVar13 = iVar13 + -1;
            }
          }
          local_74 = local_74 + iVar1;
          iVar10 = iVar10 + 1;
          uVar14 = uVar14 << 1 | (uint)((int)uVar14 < 0);
          iVar9 = local_res8[0];
        } while (iVar13 != 0);
      }
    }
  }
  return;
}



// FUNCTION 1422ee4f0 GenericMap_Length body=15 status=ok
// SIG undefined GenericMap_Length(void)

int UBlueprintMapLibrary::GenericMap_Length(longlong param_1)

{
  if (param_1 != 0) {
    return *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  }
  return 0;
}



// FUNCTION 1422ee500 FUN_1422ee500 body=388 status=ok
// SIG undefined FUN_1422ee500(void)

undefined8 FUN_1422ee500(longlong *param_1,longlong param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  undefined8 local_res8;
  undefined8 local_res20;
  code *local_78;
  undefined8 *puStack_70;
  code *local_68;
  undefined8 *puStack_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  
  if (param_1 != (longlong *)0x0) {
    local_res8 = *(undefined8 *)(param_2 + 0x70);
    local_50 = *(undefined8 *)(param_2 + 0x78);
    local_40 = *(undefined8 *)(param_2 + 0x80);
    uStack_38 = *(undefined8 *)(param_2 + 0x88);
    local_20 = *(undefined4 *)(param_2 + 0xa0);
    local_30 = *(undefined4 *)(param_2 + 0x90);
    iStack_2c = *(int *)(param_2 + 0x94);
    uStack_28 = *(undefined4 *)(param_2 + 0x98);
    uStack_24 = *(undefined4 *)(param_2 + 0x9c);
    puStack_60 = &local_res8;
    puStack_70 = &local_res20;
    local_68 = FUN_141784a00;
    local_78 = FUN_141784930;
    local_res20 = local_res8;
    local_58 = local_res8;
    local_48 = param_1;
    lVar3 = FUN_1422ed750(0x41784930,param_3,&local_40,&local_78,&local_68);
    plVar7 = local_48;
    if (lVar3 != 0) {
      iVar9 = 1;
      uVar4 = (lVar3 - *local_48) / (longlong)iStack_2c;
      FUN_14176f320(&local_58,uVar4 & 0xffffffff,1);
      bVar1 = (byte)uVar4 & 0x1f;
      uVar8 = 1 << bVar1 | 1U >> 0x20 - bVar1;
      do {
        iVar6 = (int)uVar4;
        if ((-1 < iVar6) && (iVar6 < (int)plVar7[5])) {
          plVar5 = (longlong *)plVar7[4];
          if ((longlong *)plVar7[4] == (longlong *)0x0) {
            plVar5 = plVar7 + 2;
          }
          iVar2 = iVar6;
          if (iVar6 < 0) {
            iVar2 = iVar6 + 0x1f;
          }
          if ((*(uint *)((longlong)plVar5 + (longlong)(iVar2 >> 5) * 4) & uVar8) != 0) {
            FScriptSet::RemoveAt(plVar7,uVar4 & 0xffffffff,&uStack_38);
            iVar9 = iVar9 + -1;
            plVar7 = local_48;
          }
        }
        uVar4 = (ulonglong)(iVar6 + 1);
        uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      } while (iVar9 != 0);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1422ee690 FUN_1422ee690 body=220 status=ok
// SIG undefined FUN_1422ee690(void)

void FUN_1422ee690(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong local_28;
  longlong *local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  if ((param_1 != 0) &&
     ((local_28 = *(longlong *)(param_1 + 0x10), (int)param_2 != 0 ||
      ((int)((ulonglong)param_2 >> 0x20) != 0)))) {
    if (local_28 == 0) {
      local_20 = (longlong *)0x0;
    }
    else {
      local_20 = *(longlong **)(local_28 + 0x38);
    }
    local_18 = 0xffffffff;
    local_14 = 0x101;
    local_12 = 0;
    FUN_140b61120(&local_28);
    if (local_20 != (longlong *)0x0) {
      while (local_20[3] != param_2) {
        local_20 = (longlong *)local_20[5];
        FUN_140b61120(&local_28);
        if (local_20 == (longlong *)0x0) {
          return;
        }
      }
      (**(code **)(*local_20 + 0x2e8))
                (local_20,*(int *)((longlong)local_20 + 0x44) + param_1,param_3,1);
    }
  }
  return;
}



// FUNCTION 1422ee770 FUN_1422ee770 body=621 status=ok
// SIG undefined FUN_1422ee770(void)

void FUN_1422ee770(longlong *param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  void *_Dst;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  int local_res8 [2];
  int local_74;
  
  if ((param_1 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) {
    plVar5 = (longlong *)
             (**(code **)(**(longlong **)(param_4 + 0x70) + 0x338))
                       (*(longlong **)(param_4 + 0x70),local_res8);
    plVar6 = (longlong *)(**(code **)(**(longlong **)(param_2 + 0x78) + 0x338))();
    if (*plVar6 == *plVar5) {
      iVar1 = *(int *)(param_2 + 0xa0);
      iVar3 = *(int *)(param_2 + 0x84);
      plVar5 = *(longlong **)(param_4 + 0x70);
      uVar14 = *(uint *)(param_3 + 1);
      uVar11 = (ulonglong)uVar14;
      iVar9 = *(int *)((longlong)plVar5 + 0x34);
      local_res8[0] = iVar9;
      if (uVar14 != 0) {
        if (((plVar5[7] & 0x1040000000U) == 0) && (0 < (int)uVar14)) {
          do {
            if ((~(byte)((ulonglong)plVar5[7] >> 0x24) & 1) != 0) {
              (**(code **)(*plVar5 + 0x328))(plVar5);
            }
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        iVar9 = local_res8[0];
        *(undefined4 *)(param_3 + 1) = 0;
        if (*(int *)((longlong)param_3 + 0xc) != 0) {
          FScriptArray::ResizeTo(param_3);
        }
      }
      iVar10 = 0;
      plVar6 = *(longlong **)(param_4 + 0x70);
      iVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
      if (iVar13 != 0) {
        uVar14 = 1;
        local_74 = 0;
        do {
          if ((-1 < iVar10) && (iVar10 < (int)param_1[5])) {
            plVar7 = (longlong *)param_1[4];
            if ((longlong *)param_1[4] == (longlong *)0x0) {
              plVar7 = param_1 + 2;
            }
            iVar4 = iVar10;
            if (iVar10 < 0) {
              iVar4 = iVar10 + 0x1f;
            }
            if ((*(uint *)((longlong)plVar7 + (longlong)(iVar4 >> 5) * 4) & uVar14) != 0) {
              iVar2 = (int)param_3[1];
              iVar4 = iVar2 + 1;
              *(int *)(param_3 + 1) = iVar4;
              if (*(int *)((longlong)param_3 + 0xc) < iVar4) {
                FScriptArray::ResizeGrow(param_3,iVar2,iVar9);
                iVar4 = (int)param_3[1];
              }
              if (iVar4 == 0) {
                _Dst = (void *)0x0;
              }
              else {
                _Dst = (void *)((longlong)(iVar9 * iVar2) + *param_3);
              }
              if ((*(uint *)(plVar5 + 7) >> 9 & 1) == 0) {
                (**(code **)(*plVar5 + 0x330))(plVar5);
              }
              else {
                _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)local_res8[0]);
              }
              if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
                lVar12 = 0;
              }
              else {
                lVar12 = (longlong)local_74 + (longlong)iVar3 + *param_1;
              }
              if ((int)param_3[1] == 0) {
                lVar8 = 0;
              }
              else {
                lVar8 = (longlong)(iVar9 * iVar2) + *param_3;
              }
              (**(code **)(*plVar6 + 0x300))(plVar6,lVar8,lVar12);
              iVar13 = iVar13 + -1;
            }
          }
          local_74 = local_74 + iVar1;
          iVar10 = iVar10 + 1;
          uVar14 = uVar14 << 1 | (uint)((int)uVar14 < 0);
          iVar9 = local_res8[0];
        } while (iVar13 != 0);
      }
    }
  }
  return;
}



// FUNCTION 1422ee9e0 GenericSet_Add body=102 status=ok
// SIG undefined GenericSet_Add(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UBlueprintSetLibrary::GenericSet_Add(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  if (param_1 != 0) {
    local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
    local_48 = *(undefined8 *)(param_2 + 0x70);
    local_38 = *(undefined4 *)(param_2 + 0x78);
    uStack_34 = *(undefined4 *)(param_2 + 0x7c);
    uStack_30 = *(undefined4 *)(param_2 + 0x80);
    uStack_2c = *(undefined4 *)(param_2 + 0x84);
    local_20 = *(undefined4 *)(param_2 + 0x90);
    local_28 = *(undefined8 *)(param_2 + 0x88);
    local_40 = param_1;
    FScriptSetHelper::AddElement(&local_48,param_3);
  }
  return;
}



// FUNCTION 1422eea50 GenericSet_AddItems body=216 status=ok
// SIG undefined GenericSet_AddItems(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UBlueprintSetLibrary::GenericSet_AddItems
               (longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  if ((param_1 != 0) &&
     (local_28 = DAT_1468387a8 ^ (ulonglong)auStack_78, param_3 != (longlong *)0x0)) {
    iVar1 = *(int *)(*(longlong *)(param_4 + 0x70) + 0x34);
    if (0 < (int)*(uint *)(param_3 + 1)) {
      uVar3 = (ulonglong)*(uint *)(param_3 + 1);
      lVar4 = 0;
      do {
        if ((int)param_3[1] == 0) {
          lVar2 = 0;
        }
        else {
          lVar2 = *param_3 + lVar4;
        }
        local_58 = *(undefined8 *)(param_2 + 0x70);
        local_48 = *(undefined4 *)(param_2 + 0x78);
        uStack_44 = *(undefined4 *)(param_2 + 0x7c);
        uStack_40 = *(undefined4 *)(param_2 + 0x80);
        uStack_3c = *(undefined4 *)(param_2 + 0x84);
        local_38 = *(undefined8 *)(param_2 + 0x88);
        local_30 = *(undefined4 *)(param_2 + 0x90);
        local_50 = param_1;
        FScriptSetHelper::AddElement(&local_58,lVar2);
        lVar4 = lVar4 + iVar1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  return;
}



// FUNCTION 1422eeb30 FUN_1422eeb30 body=398 status=ok
// SIG undefined FUN_1422eeb30(void)

void FUN_1422eeb30(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  
  if (param_1 != (longlong *)0x0) {
    uVar3 = *(ulonglong *)(param_2 + 0x80);
    uVar1 = *(undefined4 *)(param_2 + 0x90);
    plVar8 = *(longlong **)(param_2 + 0x70);
    iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (iVar5 != 0) {
      iVar7 = 0;
      if ((plVar8[7] & 0x1040000000U) == 0) {
        uVar6 = 1;
        lVar9 = *param_1;
        do {
          if ((-1 < iVar7) && (iVar7 < (int)param_1[5])) {
            plVar4 = (longlong *)param_1[4];
            if ((longlong *)param_1[4] == (longlong *)0x0) {
              plVar4 = param_1 + 2;
            }
            iVar2 = iVar7;
            if (iVar7 < 0) {
              iVar2 = iVar7 + 0x1f;
            }
            if ((*(uint *)((longlong)plVar4 + (longlong)(iVar2 >> 5) * 4) & uVar6) != 0) {
              if ((~(byte)((ulonglong)plVar8[7] >> 0x24) & 1) != 0) {
                (**(code **)(*plVar8 + 0x328))(plVar8,*(int *)((longlong)plVar8 + 0x44) + lVar9);
              }
              iVar5 = iVar5 + -1;
            }
          }
          lVar9 = lVar9 + (uVar3 >> 0x20);
          uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
          iVar7 = iVar7 + 1;
        } while (iVar5 != 0);
      }
      *(undefined4 *)(param_1 + 1) = 0;
      if (*(int *)((longlong)param_1 + 0xc) != 0) {
        FScriptArray::ResizeTo(param_1,0,uVar1);
      }
      *(undefined4 *)(param_1 + 6) = 0xffffffff;
      *(undefined4 *)((longlong)param_1 + 0x34) = 0;
      *(undefined4 *)(param_1 + 5) = 0;
      if (*(int *)((longlong)param_1 + 0x2c) != 0) {
        *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
        FScriptBitArray::Realloc(param_1 + 2,0);
      }
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      uVar3 = (longlong)(int)param_1[9] & 0x3fffffffffffffff;
      if ((longlong *)((longlong)plVar8 + (longlong)(int)param_1[9] * 4) < plVar8) {
        uVar3 = 0;
      }
      if (uVar3 != 0) {
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined4 *)plVar8 = 0xffffffff;
          plVar8 = (longlong *)((longlong)plVar8 + 4);
        }
      }
    }
  }
  return;
}



// FUNCTION 1422eecc0 FUN_1422eecc0 body=263 status=ok
// SIG undefined FUN_1422eecc0(void)

bool FUN_1422eecc0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 local_res8;
  undefined8 local_res20;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68 [3];
  undefined4 local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  if (param_1 == (longlong *)0x0) {
    return false;
  }
  local_res20 = *(undefined8 *)(param_2 + 0x70);
  local_50 = *(undefined4 *)(param_2 + 0x78);
  iStack_4c = *(int *)(param_2 + 0x7c);
  uStack_48 = *(undefined4 *)(param_2 + 0x80);
  uStack_44 = *(undefined4 *)(param_2 + 0x84);
  iVar1 = *(int *)(param_2 + 0x90);
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    local_res8 = param_3;
    local_68[0] = local_res20;
    iVar3 = FUN_141784930(&local_res20,&local_res8);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    iVar3 = *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar3) * 4);
    if (iVar3 != -1) {
      lVar5 = (longlong)iStack_4c;
      do {
        lVar6 = (longlong)(iVar1 * iVar3) + *param_1;
        local_78 = lVar6;
        local_70 = param_3;
        cVar2 = FUN_141784a00(local_68,&local_70,&local_78);
        if (cVar2 != '\0') goto LAB_1422eed8f;
        iVar3 = *(int *)(lVar5 + lVar6);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_1422eed8f:
  return iVar3 != -1;
}



// FUNCTION 1422eedd0 FUN_1422eedd0 body=928 status=ok
// SIG undefined FUN_1422eedd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1422eedd0(longlong *param_1,longlong param_2,longlong *param_3,longlong param_4,
                  longlong *param_5,longlong param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_f8 [32];
  int local_d8;
  int local_d4;
  uint local_d0;
  int local_cc;
  undefined8 local_c8;
  ulonglong local_c0;
  undefined8 local_b8;
  longlong local_b0;
  ulonglong local_a8;
  undefined8 local_a0 [3];
  undefined8 local_88;
  undefined8 uStack_80;
  longlong *local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  if (((param_1 != (longlong *)0x0) &&
      (local_38 = DAT_1468387a8 ^ (ulonglong)auStack_f8, param_3 != (longlong *)0x0)) &&
     (param_5 != (longlong *)0x0)) {
    local_d4 = *(int *)(param_2 + 0x90);
    local_c8 = *(undefined8 *)(param_4 + 0x70);
    local_cc = *(int *)(param_4 + 0x90);
    local_88 = *(undefined8 *)(param_4 + 0x78);
    uStack_80 = *(undefined8 *)(param_4 + 0x80);
    iVar9 = 0;
    plVar5 = *(longlong **)(param_6 + 0x70);
    local_48 = *(undefined8 *)(param_6 + 0x88);
    local_58 = *(undefined4 *)(param_6 + 0x78);
    uStack_54 = *(undefined4 *)(param_6 + 0x7c);
    uStack_50 = *(undefined4 *)(param_6 + 0x80);
    uStack_4c = *(undefined4 *)(param_6 + 0x84);
    local_d8 = *(undefined4 *)(param_6 + 0x90);
    local_60 = param_5;
    uVar8 = 1;
    local_d0 = 1;
    iVar10 = (int)param_5[1] - *(int *)((longlong)param_5 + 0x34);
    local_68 = plVar5;
    local_40 = local_d8;
    if (iVar10 != 0) {
      if ((plVar5[7] & 0x1040000000U) == 0) {
        lVar11 = *param_5;
        uVar4 = *(ulonglong *)(param_6 + 0x80) >> 0x20;
        local_c0 = uVar4;
        do {
          if ((-1 < iVar9) && (iVar9 < (int)param_5[5])) {
            plVar6 = (longlong *)param_5[4];
            if ((longlong *)param_5[4] == (longlong *)0x0) {
              plVar6 = param_5 + 2;
            }
            iVar2 = iVar9;
            if (iVar9 < 0) {
              iVar2 = iVar9 + 0x1f;
            }
            if ((*(uint *)((longlong)plVar6 + (longlong)(iVar2 >> 5) * 4) & uVar8) != 0) {
              if ((~(byte)((ulonglong)plVar5[7] >> 0x24) & 1) != 0) {
                (**(code **)(*plVar5 + 0x328))(plVar5,*(int *)((longlong)plVar5 + 0x44) + lVar11);
                uVar4 = local_c0;
              }
              iVar10 = iVar10 + -1;
            }
          }
          lVar11 = lVar11 + uVar4;
          uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
          iVar9 = iVar9 + 1;
        } while (iVar10 != 0);
      }
      *(undefined4 *)(param_5 + 1) = 0;
      if (*(int *)((longlong)param_5 + 0xc) != 0) {
        FScriptArray::ResizeTo(param_5,0,local_d8);
      }
      *(undefined4 *)(param_5 + 6) = 0xffffffff;
      *(undefined4 *)((longlong)param_5 + 0x34) = 0;
      *(undefined4 *)(param_5 + 5) = 0;
      if (*(int *)((longlong)param_5 + 0x2c) != 0) {
        *(undefined4 *)((longlong)param_5 + 0x2c) = 0;
        FScriptBitArray::Realloc(param_5 + 2,0);
      }
      plVar5 = (longlong *)param_5[8];
      if ((longlong *)param_5[8] == (longlong *)0x0) {
        plVar5 = param_5 + 7;
      }
      uVar4 = (longlong)(int)param_5[9] & 0x3fffffffffffffff;
      if ((longlong *)((longlong)plVar5 + (longlong)(int)param_5[9] * 4) < plVar5) {
        uVar4 = 0;
      }
      if (uVar4 != 0) {
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)plVar5 = 0xffffffff;
          plVar5 = (longlong *)((longlong)plVar5 + 4);
        }
      }
    }
    iVar9 = 0;
    iVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (iVar10 != 0) {
      lVar11 = (longlong)local_88._4_4_;
      local_d8 = 0;
      iVar2 = local_d4;
      uVar8 = 1;
      do {
        uVar4 = 0;
        if ((-1 < iVar9) && (iVar9 < (int)param_1[5])) {
          plVar5 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar5 = param_1 + 2;
          }
          iVar3 = iVar9;
          if (iVar9 < 0) {
            iVar3 = iVar9 + 0x1f;
          }
          iVar2 = local_d4;
          if ((*(uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4) & uVar8) != 0) {
            if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
              uVar4 = (longlong)local_d8 + *param_1;
            }
            local_b8 = local_c8;
            local_a0[0] = local_c8;
            if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
              local_c0 = uVar4;
              iVar2 = FUN_141784930(&local_b8,&local_c0);
              plVar5 = (longlong *)param_3[8];
              if ((longlong *)param_3[8] == (longlong *)0x0) {
                plVar5 = param_3 + 7;
              }
              iVar2 = *(int *)((longlong)plVar5 +
                              ((longlong)(int)param_3[9] - 1U & (longlong)iVar2) * 4);
              while (iVar2 != -1) {
                lVar7 = (longlong)(local_cc * iVar2) + *param_3;
                local_b0 = lVar7;
                local_a8 = uVar4;
                cVar1 = FUN_141784a00(local_a0,&local_a8,&local_b0);
                if (cVar1 != '\0') {
                  if (iVar2 != -1) goto LAB_1422ef0f3;
                  break;
                }
                iVar2 = *(int *)(lVar11 + lVar7);
              }
            }
            FScriptSetHelper::AddElement(&local_68,uVar4);
LAB_1422ef0f3:
            iVar10 = iVar10 + -1;
            iVar2 = local_d4;
            uVar8 = local_d0;
          }
        }
        local_d8 = local_d8 + iVar2;
        local_d0 = uVar8 << 1 | (uint)((int)uVar8 < 0);
        iVar9 = iVar9 + 1;
        uVar8 = local_d0;
      } while (iVar10 != 0);
    }
  }
  return;
}



// FUNCTION 1422ef170 FUN_1422ef170 body=940 status=ok
// SIG undefined FUN_1422ef170(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1422ef170(longlong *param_1,longlong param_2,longlong *param_3,longlong param_4,
                  longlong *param_5,longlong param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_f8 [32];
  int local_d8;
  uint local_d4;
  int local_d0;
  undefined8 local_c8;
  int local_c0;
  ulonglong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  ulonglong local_a0;
  undefined8 local_98 [3];
  undefined8 local_80;
  undefined8 uStack_78;
  longlong *local_60;
  longlong *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  if (((param_1 != (longlong *)0x0) &&
      (local_30 = DAT_1468387a8 ^ (ulonglong)auStack_f8, param_3 != (longlong *)0x0)) &&
     (param_5 != (longlong *)0x0)) {
    local_d0 = *(int *)(param_2 + 0x90);
    local_c8 = *(undefined8 *)(param_4 + 0x70);
    local_c0 = *(int *)(param_4 + 0x90);
    local_80 = *(undefined8 *)(param_4 + 0x78);
    uStack_78 = *(undefined8 *)(param_4 + 0x80);
    iVar9 = 0;
    plVar5 = *(longlong **)(param_6 + 0x70);
    local_40 = *(undefined8 *)(param_6 + 0x88);
    local_50 = *(undefined4 *)(param_6 + 0x78);
    uStack_4c = *(undefined4 *)(param_6 + 0x7c);
    uStack_48 = *(undefined4 *)(param_6 + 0x80);
    uStack_44 = *(undefined4 *)(param_6 + 0x84);
    local_d8 = *(undefined4 *)(param_6 + 0x90);
    local_58 = param_5;
    uVar8 = 1;
    local_d4 = 1;
    iVar11 = (int)param_5[1] - *(int *)((longlong)param_5 + 0x34);
    local_60 = plVar5;
    local_38 = local_d8;
    if (iVar11 != 0) {
      if ((plVar5[7] & 0x1040000000U) == 0) {
        lVar12 = *param_5;
        uVar4 = *(ulonglong *)(param_6 + 0x80) >> 0x20;
        local_b8 = uVar4;
        do {
          if ((-1 < iVar9) && (iVar9 < (int)param_5[5])) {
            plVar6 = (longlong *)param_5[4];
            if ((longlong *)param_5[4] == (longlong *)0x0) {
              plVar6 = param_5 + 2;
            }
            iVar2 = iVar9;
            if (iVar9 < 0) {
              iVar2 = iVar9 + 0x1f;
            }
            if ((*(uint *)((longlong)plVar6 + (longlong)(iVar2 >> 5) * 4) & uVar8) != 0) {
              if ((~(byte)((ulonglong)plVar5[7] >> 0x24) & 1) != 0) {
                (**(code **)(*plVar5 + 0x328))(plVar5,*(int *)((longlong)plVar5 + 0x44) + lVar12);
                uVar4 = local_b8;
              }
              iVar11 = iVar11 + -1;
            }
          }
          lVar12 = lVar12 + uVar4;
          uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
          iVar9 = iVar9 + 1;
        } while (iVar11 != 0);
      }
      *(undefined4 *)(param_5 + 1) = 0;
      if (*(int *)((longlong)param_5 + 0xc) != 0) {
        FScriptArray::ResizeTo(param_5,0,local_d8);
      }
      *(undefined4 *)(param_5 + 6) = 0xffffffff;
      *(undefined4 *)((longlong)param_5 + 0x34) = 0;
      *(undefined4 *)(param_5 + 5) = 0;
      if (*(int *)((longlong)param_5 + 0x2c) != 0) {
        *(undefined4 *)((longlong)param_5 + 0x2c) = 0;
        FScriptBitArray::Realloc(param_5 + 2,0);
      }
      plVar5 = (longlong *)param_5[8];
      if ((longlong *)param_5[8] == (longlong *)0x0) {
        plVar5 = param_5 + 7;
      }
      uVar4 = (longlong)(int)param_5[9] & 0x3fffffffffffffff;
      if ((longlong *)((longlong)plVar5 + (longlong)(int)param_5[9] * 4) < plVar5) {
        uVar4 = 0;
      }
      if (uVar4 != 0) {
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)plVar5 = 0xffffffff;
          plVar5 = (longlong *)((longlong)plVar5 + 4);
        }
      }
    }
    iVar9 = 0;
    iVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (iVar11 != 0) {
      lVar12 = (longlong)local_80._4_4_;
      local_d8 = 0;
      uVar10 = local_c8;
      iVar2 = local_d0;
      uVar8 = 1;
      do {
        uVar4 = 0;
        if ((-1 < iVar9) && (iVar9 < (int)param_1[5])) {
          plVar5 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar5 = param_1 + 2;
          }
          iVar3 = iVar9;
          if (iVar9 < 0) {
            iVar3 = iVar9 + 0x1f;
          }
          iVar2 = local_d0;
          if ((*(uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4) & uVar8) != 0) {
            if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
              uVar4 = (longlong)local_d8 + *param_1;
            }
            if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
              local_b8 = uVar4;
              local_b0 = uVar10;
              local_98[0] = uVar10;
              iVar2 = FUN_141784930(&local_b0,&local_b8);
              plVar5 = (longlong *)param_3[8];
              if ((longlong *)param_3[8] == (longlong *)0x0) {
                plVar5 = param_3 + 7;
              }
              iVar2 = *(int *)((longlong)plVar5 +
                              ((longlong)(int)param_3[9] - 1U & (longlong)iVar2) * 4);
              while (uVar10 = local_c8, uVar8 = local_d4, iVar2 != -1) {
                lVar7 = (longlong)(local_c0 * iVar2) + *param_3;
                local_a8 = lVar7;
                local_a0 = uVar4;
                cVar1 = FUN_141784a00(local_98,&local_a0,&local_a8);
                if (cVar1 != '\0') {
                  uVar10 = local_c8;
                  uVar8 = local_d4;
                  if (iVar2 != -1) {
                    FScriptSetHelper::AddElement(&local_60,uVar4);
                    uVar10 = local_c8;
                    uVar8 = local_d4;
                  }
                  break;
                }
                iVar2 = *(int *)(lVar12 + lVar7);
              }
            }
            iVar11 = iVar11 + -1;
            iVar2 = local_d0;
          }
        }
        local_d8 = local_d8 + iVar2;
        local_d4 = uVar8 << 1 | (uint)((int)uVar8 < 0);
        iVar9 = iVar9 + 1;
        uVar8 = local_d4;
      } while (iVar11 != 0);
    }
  }
  return;
}



// FUNCTION 1422ef520 FUN_1422ef520 body=313 status=ok
// SIG undefined FUN_1422ef520(void)

undefined8 FUN_1422ef520(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 local_res8;
  undefined8 local_res20;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined4 local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  int local_38;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  local_res20 = *(undefined8 *)(param_2 + 0x70);
  local_50 = *(undefined4 *)(param_2 + 0x78);
  iStack_4c = *(int *)(param_2 + 0x7c);
  uStack_48 = *(undefined4 *)(param_2 + 0x80);
  uStack_44 = *(undefined4 *)(param_2 + 0x84);
  local_40 = *(undefined8 *)(param_2 + 0x88);
  iVar1 = *(int *)(param_2 + 0x90);
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    local_res8 = param_3;
    local_68 = local_res20;
    local_60 = local_res20;
    local_58 = param_1;
    local_38 = iVar1;
    iVar3 = FUN_141784930(&local_res20,&local_res8);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    iVar3 = *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar3) * 4);
    if (iVar3 != -1) {
      lVar5 = (longlong)iStack_4c;
      do {
        lVar6 = (longlong)(iVar1 * iVar3) + *param_1;
        local_78 = lVar6;
        local_70 = param_3;
        cVar2 = FUN_141784a00(&local_68,&local_70,&local_78);
        if (cVar2 != '\0') {
          if (iVar3 == -1) {
            return 0;
          }
          FScriptSetHelper::RemoveAt(&local_60,iVar3,1);
          return 1;
        }
        iVar3 = *(int *)(lVar5 + lVar6);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 1422ef660 FUN_1422ef660 body=439 status=ok
// SIG undefined FUN_1422ef660(void)

void FUN_1422ef660(longlong *param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong local_res8;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined4 local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  int local_40;
  
  if ((param_1 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) {
    local_70 = (longlong)*(int *)(*(longlong *)(param_4 + 0x70) + 0x34);
    local_res8 = (ulonglong)*(uint *)(param_3 + 1);
    if (0 < (int)*(uint *)(param_3 + 1)) {
      lVar7 = 0;
      do {
        if ((int)param_3[1] == 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = *param_3 + lVar7;
        }
        local_90 = *(undefined8 *)(param_2 + 0x70);
        local_58 = *(undefined4 *)(param_2 + 0x78);
        iStack_54 = *(int *)(param_2 + 0x7c);
        uStack_50 = *(undefined4 *)(param_2 + 0x80);
        uStack_4c = *(undefined4 *)(param_2 + 0x84);
        iVar1 = *(int *)(param_2 + 0x90);
        local_48 = *(undefined8 *)(param_2 + 0x88);
        if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
          local_98 = lVar8;
          local_78 = local_90;
          local_68 = local_90;
          local_60 = param_1;
          local_40 = iVar1;
          iVar3 = FUN_141784930(&local_90,&local_98);
          plVar4 = (longlong *)param_1[8];
          if ((longlong *)param_1[8] == (longlong *)0x0) {
            plVar4 = param_1 + 7;
          }
          iVar3 = *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar3) * 4
                          );
          if (iVar3 != -1) {
            lVar5 = (longlong)iStack_54;
            do {
              lVar6 = (longlong)(iVar1 * iVar3) + *param_1;
              local_88 = lVar6;
              local_80 = lVar8;
              cVar2 = FUN_141784a00(&local_78,&local_80,&local_88);
              if (cVar2 != '\0') {
                if (iVar3 != -1) {
                  FScriptSetHelper::RemoveAt(&local_68,iVar3,1);
                }
                break;
              }
              iVar3 = *(int *)(lVar5 + lVar6);
            } while (iVar3 != -1);
          }
        }
        lVar7 = lVar7 + local_70;
        local_res8 = local_res8 - 1;
      } while (local_res8 != 0);
    }
  }
  return;
}



// FUNCTION 1422ef820 FUN_1422ef820 body=220 status=ok
// SIG undefined FUN_1422ef820(void)

void FUN_1422ef820(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong local_28;
  longlong *local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  if ((param_1 != 0) &&
     ((local_28 = *(longlong *)(param_1 + 0x10), (int)param_2 != 0 ||
      ((int)((ulonglong)param_2 >> 0x20) != 0)))) {
    if (local_28 == 0) {
      local_20 = (longlong *)0x0;
    }
    else {
      local_20 = *(longlong **)(local_28 + 0x38);
    }
    local_18 = 0xffffffff;
    local_14 = 0x101;
    local_12 = 0;
    FUN_1422f46c0(&local_28);
    if (local_20 != (longlong *)0x0) {
      while (local_20[3] != param_2) {
        local_20 = (longlong *)local_20[5];
        FUN_1422f46c0(&local_28);
        if (local_20 == (longlong *)0x0) {
          return;
        }
      }
      (**(code **)(*local_20 + 0x2e8))
                (local_20,*(int *)((longlong)local_20 + 0x44) + param_1,param_3,1);
    }
  }
  return;
}



// FUNCTION 1422ef900 GenericSet_ToArray body=223 status=ok
// SIG undefined GenericSet_ToArray(void)

void UBlueprintSetLibrary::GenericSet_ToArray
               (longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  
  if ((param_1 != (longlong *)0x0) && (param_3 != 0)) {
    iVar4 = 0;
    iVar1 = *(int *)(param_2 + 0x90);
    iVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (iVar8 != 0) {
      iVar5 = 0;
      uVar6 = 1;
      do {
        if ((-1 < iVar4) && (iVar4 < (int)param_1[5])) {
          plVar3 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar3 = param_1 + 2;
          }
          iVar2 = iVar4;
          if (iVar4 < 0) {
            iVar2 = iVar4 + 0x1f;
          }
          if ((*(uint *)((longlong)plVar3 + (longlong)(iVar2 >> 5) * 4) & uVar6) != 0) {
            if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
              lVar7 = 0;
            }
            else {
              lVar7 = (longlong)iVar5 + *param_1;
            }
            FUN_1425246d0(param_3,param_4,lVar7);
            iVar8 = iVar8 + -1;
          }
        }
        iVar4 = iVar4 + 1;
        uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
        iVar5 = iVar5 + iVar1;
      } while (iVar8 != 0);
    }
  }
  return;
}



// FUNCTION 1422ef9e0 FUN_1422ef9e0 body=1134 status=ok
// SIG undefined FUN_1422ef9e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1422ef9e0(longlong *param_1,longlong param_2,longlong *param_3,longlong param_4,
                  longlong *param_5,longlong param_6)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_198 [32];
  code **local_178;
  code **local_170;
  undefined1 **local_168;
  undefined4 local_158;
  int local_154;
  int local_150;
  longlong *local_148;
  longlong *local_140;
  longlong *local_138 [2];
  undefined1 *local_128;
  longlong **pplStack_120;
  code *local_118;
  longlong **pplStack_110;
  code *local_108;
  longlong **pplStack_100;
  code *local_f8;
  longlong **pplStack_f0;
  undefined1 *local_e8;
  longlong **pplStack_e0;
  code *local_d8;
  longlong **pplStack_d0;
  code *local_c8;
  longlong **pplStack_c0;
  code *local_b8;
  longlong **pplStack_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined4 local_80;
  longlong *local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  if (param_1 != (longlong *)0x0) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_198;
    if ((param_3 != (longlong *)0x0) && (param_5 != (longlong *)0x0)) {
      local_154 = *(int *)(param_2 + 0x90);
      iVar6 = 0;
      local_150 = (int)param_5[1] - *(int *)((longlong)param_5 + 0x34);
      uVar9 = 1;
      local_68 = *(undefined8 *)(param_4 + 0x78);
      uStack_60 = *(undefined8 *)(param_4 + 0x80);
      local_58 = *(undefined8 *)(param_4 + 0x88);
      local_148 = (longlong *)CONCAT44(local_148._4_4_,*(undefined4 *)(param_4 + 0x90));
      local_158 = *(undefined4 *)(param_6 + 0x90);
      local_98 = *(undefined1 (*) [16])(param_6 + 0x78);
      uVar13 = local_98._0_4_;
      uVar14 = local_98._4_4_;
      uVar15 = local_98._8_4_;
      uVar16 = local_98._12_4_;
      plVar5 = *(longlong **)(param_6 + 0x70);
      local_88 = *(undefined8 *)(param_6 + 0x88);
      local_a0 = param_5;
      local_138[0] = param_3;
      local_a8 = plVar5;
      local_80 = local_158;
      if (local_150 != 0) {
        if ((plVar5[7] & 0x1040000000U) == 0) {
          lVar12 = *param_5;
          plVar8 = (longlong *)(local_98._8_8_ >> 0x20);
          uVar10 = uVar9;
          local_140 = plVar8;
          iVar7 = local_150;
          do {
            if ((-1 < iVar6) && (iVar6 < (int)param_5[5])) {
              plVar4 = (longlong *)param_5[4];
              if ((longlong *)param_5[4] == (longlong *)0x0) {
                plVar4 = param_5 + 2;
              }
              iVar1 = iVar6;
              if (iVar6 < 0) {
                iVar1 = iVar6 + 0x1f;
              }
              if ((*(uint *)((longlong)plVar4 + (longlong)(iVar1 >> 5) * 4) & uVar10) != 0) {
                if ((~(byte)((ulonglong)plVar5[7] >> 0x24) & 1) != 0) {
                  (**(code **)(*plVar5 + 0x328))(plVar5,*(int *)((longlong)plVar5 + 0x44) + lVar12);
                  plVar8 = local_140;
                  iVar7 = local_150;
                }
                local_150 = iVar7 + -1;
                iVar7 = local_150;
              }
            }
            lVar12 = lVar12 + (longlong)plVar8;
            uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
            iVar6 = iVar6 + 1;
          } while (iVar7 != 0);
        }
        param_3 = local_138[0];
        *(undefined4 *)(param_5 + 1) = 0;
        if (*(int *)((longlong)param_5 + 0xc) != 0) {
          FScriptArray::ResizeTo(param_5,0,local_158);
        }
        *(undefined4 *)(param_5 + 6) = 0xffffffff;
        *(undefined4 *)((longlong)param_5 + 0x34) = 0;
        *(undefined4 *)(param_5 + 5) = 0;
        if (*(int *)((longlong)param_5 + 0x2c) != 0) {
          *(undefined4 *)((longlong)param_5 + 0x2c) = 0;
          FScriptBitArray::Realloc(param_5 + 2,0);
        }
        plVar8 = (longlong *)param_5[8];
        if ((longlong *)param_5[8] == (longlong *)0x0) {
          plVar8 = param_5 + 7;
        }
        uVar3 = (longlong)(int)param_5[9] & 0x3fffffffffffffff;
        if ((longlong *)((longlong)plVar8 + (longlong)(int)param_5[9] * 4) < plVar8) {
          uVar3 = 0;
        }
        if (uVar3 != 0) {
          for (; uVar3 != 0; uVar3 = uVar3 - 1) {
            *(undefined4 *)plVar8 = 0xffffffff;
            plVar8 = (longlong *)((longlong)plVar8 + 4);
          }
        }
      }
      iVar1 = 0;
      iVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
      local_78 = plVar5;
      iVar6 = local_154;
      uVar10 = uVar9;
      local_50 = local_158;
      iVar7 = iVar1;
      if (iVar11 != 0) {
        do {
          lVar12 = 0;
          if ((-1 < iVar1) && (iVar1 < (int)param_1[5])) {
            plVar5 = (longlong *)param_1[4];
            if ((longlong *)param_1[4] == (longlong *)0x0) {
              plVar5 = param_1 + 2;
            }
            iVar2 = iVar1;
            if (iVar1 < 0) {
              iVar2 = iVar1 + 0x1f;
            }
            iVar6 = local_154;
            if ((*(uint *)((longlong)plVar5 + (longlong)(iVar2 >> 5) * 4) & uVar10) != 0) {
              if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
                lVar12 = (longlong)iVar7 + *param_1;
              }
              FScriptSetHelper::AddElement(&local_a8,lVar12);
              iVar11 = iVar11 + -1;
              iVar6 = local_154;
            }
          }
          iVar1 = iVar1 + 1;
          uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
          iVar7 = iVar7 + iVar6;
        } while (iVar11 != 0);
        local_78 = local_a8;
        uVar13 = local_98._0_4_;
        uVar14 = local_98._4_4_;
        uVar15 = local_98._8_4_;
        uVar16 = local_98._12_4_;
        local_50 = local_80;
      }
      iVar7 = 0;
      iVar6 = (int)param_3[1] - *(int *)((longlong)param_3 + 0x34);
      if (iVar6 != 0) {
        iVar1 = (int)local_148;
        iVar11 = iVar7;
        do {
          local_70 = 0;
          if ((-1 < iVar7) && (iVar7 < (int)param_3[5])) {
            plVar5 = (longlong *)param_3[4];
            if ((longlong *)param_3[4] == (longlong *)0x0) {
              plVar5 = param_3 + 2;
            }
            iVar2 = iVar7;
            if (iVar7 < 0) {
              iVar2 = iVar7 + 0x1f;
            }
            if ((*(uint *)((longlong)plVar5 + (longlong)(iVar2 >> 5) * 4) & uVar9) != 0) {
              if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
                local_70 = (longlong)iVar11 + *param_3;
              }
              pplStack_120 = local_138;
              pplStack_110 = &local_78;
              pplStack_100 = &local_140;
              local_108 = FUN_141784a00;
              pplStack_f0 = &local_148;
              local_f8 = FUN_141784930;
              local_168 = &local_e8;
              local_170 = &local_d8;
              local_128 = &LAB_141784950;
              local_e8 = &LAB_141784950;
              local_58 = local_88;
              local_178 = &local_c8;
              local_118 = FUN_1417849a0;
              local_d8 = FUN_1417849a0;
              local_c8 = FUN_141784a00;
              local_68 = CONCAT44(uVar14,uVar13);
              uStack_60 = CONCAT44(uVar16,uVar15);
              local_b8 = FUN_141784930;
              local_148 = local_78;
              local_140 = local_78;
              local_138[0] = local_78;
              pplStack_e0 = pplStack_120;
              pplStack_d0 = pplStack_110;
              pplStack_c0 = pplStack_100;
              pplStack_b0 = pplStack_f0;
              FUN_141782d20(local_a0,local_70,local_98,&local_b8);
              iVar6 = iVar6 + -1;
              local_78 = local_a8;
              uVar13 = local_98._0_4_;
              uVar14 = local_98._4_4_;
              uVar15 = local_98._8_4_;
              uVar16 = local_98._12_4_;
              local_50 = local_80;
            }
          }
          iVar7 = iVar7 + 1;
          uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
          iVar11 = iVar11 + iVar1;
        } while (iVar6 != 0);
      }
    }
  }
  return;
}



// FUNCTION 1422efe50 FUN_1422efe50 body=228 status=ok
// SIG undefined FUN_1422efe50(void)

longlong FUN_1422efe50(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_res8 [32];
  longlong *local_18;
  int local_10;
  
  if (DAT_146aef570 == 0) {
    lVar1 = operator_new(0x10);
    lVar2 = 0;
    if (lVar1 != 0) {
      lVar2 = FUN_1422e0720(lVar1);
    }
    DAT_146aef570 = lVar2;
    plVar3 = (longlong *)FMemory::Realloc(0,0x20);
    local_10 = 2;
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_GetPoolName_143f3f048;
      plVar3[1] = (longlong)FUN_1422e9200;
      local_18 = plVar3;
      lVar2 = FDelegateHandle::GenerateNewID();
      plVar3[3] = lVar2;
      *plVar3 = (longlong)&PTR_GetPoolName_143f3f090;
      FMulticastDelegateBase<FWeakObjectPtr>::AddInternal(&DAT_1464af178,local_res8,&local_18);
      plVar3 = local_18;
      if (local_10 != 0) {
        if (local_18 == (longlong *)0x0) {
          return DAT_146aef570;
        }
        (**(code **)(*local_18 + 0x28))(local_18,0);
        plVar3 = (longlong *)FMemory::Realloc(plVar3,0,0);
      }
      if (plVar3 != (longlong *)0x0) {
        FMemory::Free(plVar3);
      }
    }
  }
  return DAT_146aef570;
}



// FUNCTION 1422effa0 GetAsyncPrereq body=238 status=ok
// SIG undefined GetAsyncPrereq(void)

longlong * FAudioAsyncBatcher::GetAsyncPrereq(longlong *param_1)

{
  ulonglong *puVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong local_res18 [2];
  
  if (DAT_146531ad0 == 0) {
    return (longlong *)0x0;
  }
  if (((int)param_1[6] < DAT_146531ad4) && ((int)param_1[5] != 0)) {
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1;
    }
    if (*plVar5 != 0) {
      puVar1 = (ulonglong *)(*plVar5 + 8);
      LOCK();
      uVar4 = *puVar1;
      if (uVar4 == 0) {
        *puVar1 = 0;
        uVar4 = 0;
      }
      UNLOCK();
      if ((uVar4 >> 0x1a & 1) == 0) goto LAB_1422efffd;
    }
  }
  FUN_1422ed880(param_1);
LAB_1422efffd:
  if ((int)param_1[5] == 0) {
    plVar5 = (longlong *)FUN_1415914c0(local_res18);
    iVar3 = (int)param_1[5];
    *(int *)(param_1 + 5) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0x2c) < iVar3 + 1) {
      TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (param_1,iVar3);
    }
    plVar6 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar6 = param_1;
    }
    plVar6[iVar3] = *plVar5;
    *plVar5 = 0;
    if (local_res18[0] != 0) {
      LOCK();
      piVar2 = (int *)(local_res18[0] + 0x48);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FGraphEvent::Recycle();
      }
    }
  }
  *(int *)(param_1 + 6) = (int)param_1[6] + 1;
  return param_1;
}



// FUNCTION 1422f0090 GetAudioDevice body=76 status=ok
// SIG undefined GetAudioDevice(void)

undefined8 FAudioDeviceManager::GetAudioDevice(longlong param_1,uint param_2)

{
  if ((((*(longlong *)(param_1 + 0x70) != 0) && (param_2 != 0xffffffff)) &&
      ((int)(param_2 & 0xffffff) < *(int *)(param_1 + 0x68))) &&
     (*(char *)((ulonglong)(param_2 & 0xffffff) + *(longlong *)(param_1 + 0x60)) ==
      (char)(param_2 >> 0x18))) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x90) + (ulonglong)(param_2 & 0xffffff) * 8);
  }
  return 0;
}



// FUNCTION 1422f00e0 FUN_1422f00e0 body=23 status=ok
// SIG undefined FUN_1422f00e0(void)

int FUN_1422f00e0(longlong param_1)

{
  if (*(byte *)(param_1 + 0x458) != 0) {
    return *(byte *)(param_1 + 0x458) - 1;
  }
  return -1;
}



// FUNCTION 1422f0100 GetEmpty body=33 status=ok
// SIG undefined GetEmpty(void)

undefined * FTestAudioComponent::GetEmpty(void)

{
  if (DAT_146531ba0 == '\0') {
    DAT_146531ba0 = '\x01';
  }
  return &DAT_146531b10;
}



// FUNCTION 1422f0130 GetCachedPropertyList body=100 status=ok
// SIG undefined GetCachedPropertyList(void)

undefined8 FBlueprintCookedComponentInstancingData::GetCachedPropertyList(longlong param_1)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = 0;
  if (*(int *)(param_1 + 0x38) == 0) {
    if (0 < *(int *)(param_1 + 0x10)) {
      if (*(int *)(param_1 + 0x3c) < *(int *)(param_1 + 0x10)) {
        TArray<void_*,FDefaultAllocator>::ResizeTo();
      }
      BuildCachedPropertyList(param_1,local_res8,*(undefined8 *)(param_1 + 0x20),0);
      return local_res8[0];
    }
  }
  else if (0 < *(int *)(param_1 + 0x38)) {
    return **(undefined8 **)(param_1 + 0x30);
  }
  return 0;
}



// FUNCTION 1422f01a0 FUN_1422f01a0 body=4142 status=ok
// SIG undefined FUN_1422f01a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1422f01a0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  uint *puVar1;
  int *piVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  char cVar8;
  uint uVar9;
  undefined4 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  float *pfVar13;
  undefined8 *puVar14;
  int iVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar27;
  float fVar29;
  undefined1 auVar25 [16];
  float fVar28;
  float fVar30;
  undefined1 auVar26 [16];
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
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 auStack_3e8 [32];
  ulonglong local_3c8;
  undefined4 local_3b8;
  undefined4 local_3b0;
  undefined4 local_3a8;
  float local_3a0;
  float fStack_39c;
  float local_398;
  float local_388;
  float fStack_384;
  float fStack_380;
  float fStack_37c;
  float local_378;
  float fStack_374;
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
  float local_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  longlong *local_308;
  longlong *local_300;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined4 local_2f0;
  float local_2e0;
  undefined1 local_2d8 [8];
  float local_2d0;
  undefined8 local_2c8;
  undefined4 local_2c0;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float local_290;
  undefined4 local_284;
  undefined8 local_278;
  undefined8 uStack_270;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  undefined1 local_238 [12];
  undefined1 local_22c [20];
  float local_218;
  float fStack_214;
  float fStack_210;
  uint uStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
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
  undefined1 local_178 [8];
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
  undefined8 local_148;
  undefined8 uStack_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [48];
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_3e8;
  uVar12 = DAT_146b17150;
  if (((DAT_146b17150 != 0) && (*(longlong *)(DAT_146b17150 + 0xac8) != 0)) &&
     ((*(longlong *)(param_1 + 0x120) != 0 ||
      (lVar11 = FUN_1423407b0(param_1), uVar12 = DAT_146b17150, lVar11 != 0)))) {
    lVar11 = *(longlong *)(param_1 + 0x120);
    if (lVar11 == 0) {
      lVar11 = FUN_1423407b0(param_1);
    }
    uVar12 = DAT_146b17150;
    if (*(int *)(lVar11 + 0x708) != 2) {
      plVar16 = *(longlong **)(DAT_146b17150 + 0xac8);
      uVar12 = (**(code **)(*plVar16 + 0xd0))(plVar16,&local_308,0);
      if ((local_308 != (longlong *)0x0) &&
         (uVar12 = (**(code **)(*plVar16 + 0xf0))(plVar16), (char)uVar12 != '\0')) {
        plVar16 = *(longlong **)(param_1 + 400);
        local_138 = (float)((uint)_DAT_146aef5b0 & _DAT_146aef5c0);
        fStack_134 = (float)((uint)fRam0000000146aef5b4 & uRam0000000146aef5c4);
        fStack_130 = (float)((uint)fRam0000000146aef5b8 & uRam0000000146aef5c8);
        fStack_12c = (float)((uint)fRam0000000146aef5bc & uRam0000000146aef5cc);
        local_158 = 0.0;
        fStack_154 = 0.0;
        fStack_150 = 0.0;
        fStack_14c = fRam0000000146aef5bc;
        local_148 = 0;
        uStack_140 = 0;
        if (plVar16 == (longlong *)0x0) {
          local_188 = 0.0;
          fStack_184 = 0.0;
          fStack_180 = 0.0;
          fStack_17c = fRam0000000146aef5bc;
          _local_178 = ZEXT816(0);
          local_168 = local_138;
          fStack_164 = fStack_134;
          fStack_160 = fStack_130;
          fStack_15c = fStack_12c;
        }
        else if ((*(byte *)(param_1 + 0x24c) & 0x1c) == 0) {
          pfVar13 = (float *)(**(code **)(*plVar16 + 0x420))
                                       (plVar16,local_f8,*(ulonglong *)(param_1 + 0x198),0);
          fVar49 = fRam0000000146aef5bc;
          fVar46 = fRam0000000146aef5b8;
          fVar43 = fRam0000000146aef5b4;
          fVar40 = _DAT_146aef5b0;
          auVar3._4_4_ = fStack_134;
          auVar3._0_4_ = local_138;
          auVar3._8_4_ = fStack_130;
          auVar3._12_4_ = fStack_12c;
          auVar18 = *(undefined1 (*) [16])(pfVar13 + 8);
          fVar27 = auVar18._0_4_;
          fVar29 = auVar18._4_4_;
          fVar35 = auVar18._8_4_;
          fVar39 = auVar18._12_4_;
          auVar18 = minps(auVar3,auVar18);
          auVar22._4_4_ = -(uint)(auVar18._4_4_ < fRam0000000146aef854);
          auVar22._0_4_ = -(uint)(auVar18._0_4_ < _DAT_146aef850);
          auVar22._8_4_ = -(uint)(auVar18._8_4_ < fRam0000000146aef858);
          auVar22._12_4_ = -(uint)(auVar18._12_4_ < fRam0000000146aef85c);
          iVar15 = movmskps((int)plVar16,auVar22);
          if (iVar15 == 0) {
            fVar40 = *pfVar13;
            fVar43 = pfVar13[1];
            fVar46 = pfVar13[2];
            fVar49 = pfVar13[3];
            fVar33 = (float)local_148 * fVar27;
            fVar34 = local_148._4_4_ * fVar29;
            fVar36 = (float)uStack_140 * fVar35;
            fVar38 = uStack_140._4_4_ * fVar39;
            local_188 = fVar40 * fStack_14c * _DAT_146aef820 + local_158 * fVar49 +
                        fVar43 * fStack_150 * _DAT_146aef810 + fVar46 * fStack_154 * _DAT_146aef800;
            fStack_184 = fVar40 * fStack_150 * fRam0000000146aef824 + fStack_154 * fVar49 +
                         fVar43 * fStack_14c * fRam0000000146aef814 +
                         fVar46 * local_158 * fRam0000000146aef804;
            fStack_180 = fVar40 * fStack_154 * fRam0000000146aef828 + fStack_150 * fVar49 +
                         fVar43 * local_158 * fRam0000000146aef818 +
                         fVar46 * fStack_14c * fRam0000000146aef808;
            fStack_17c = fVar40 * local_158 * fRam0000000146aef82c + fStack_14c * fVar49 +
                         fVar43 * fStack_154 * fRam0000000146aef81c +
                         fVar46 * fStack_150 * fRam0000000146aef80c;
            fVar31 = fVar36 * fVar43 - fVar34 * fVar46;
            fVar57 = fVar33 * fVar46 - fVar36 * fVar40;
            fVar37 = fVar34 * fVar40 - fVar33 * fVar43;
            fVar58 = fVar38 * fVar49 - fVar38 * fVar49;
            fVar31 = fVar31 + fVar31;
            fVar57 = fVar57 + fVar57;
            fVar37 = fVar37 + fVar37;
            fVar58 = fVar58 + fVar58;
            local_178._4_4_ =
                 (fVar31 * fVar46 - fVar37 * fVar40) + fVar57 * fVar49 + fVar34 + pfVar13[5];
            local_178._0_4_ =
                 (fVar37 * fVar43 - fVar57 * fVar46) + fVar31 * fVar49 + fVar33 + pfVar13[4];
            fStack_170 = (fVar57 * fVar40 - fVar31 * fVar43) + fVar37 * fVar49 + fVar36 + pfVar13[6]
            ;
            fStack_16c = (fVar58 * fVar49 - fVar58 * fVar49) + fVar58 * fVar49 + fVar38 + pfVar13[7]
            ;
            local_168 = local_138 * fVar27;
            fStack_164 = fStack_134 * fVar29;
            fStack_160 = fStack_130 * fVar35;
            fStack_15c = fStack_12c * fVar39;
          }
          else {
            fVar31 = *pfVar13;
            fVar57 = pfVar13[1];
            fVar37 = pfVar13[2];
            fVar58 = pfVar13[3];
            local_1d8 = pfVar13[4];
            fStack_1d4 = pfVar13[5];
            fStack_1d0 = pfVar13[6];
            fVar33 = fVar57 + fVar57;
            fVar36 = fVar37 + fVar37;
            fVar59 = local_138 * fVar27;
            fVar60 = fStack_134 * fVar29;
            fVar61 = fStack_130 * fVar35;
            fVar62 = fStack_12c * fVar39;
            fVar38 = (fVar31 + fVar31) * fVar31;
            fVar34 = (fVar31 + fVar31) * fVar58;
            fStack_204 = (fVar36 * fVar58 + fVar33 * fVar31) * fVar27;
            fStack_1f0 = (fVar34 + fVar36 * fVar57) * fVar29;
            local_1e8 = (fVar33 * fVar58 + fVar36 * fVar31) * fVar35;
            local_1f8 = fVar29 * (fVar33 * fVar31 - fVar36 * fVar58);
            fStack_1e4 = fVar35 * (fVar36 * fVar57 - fVar34);
            fStack_200 = fVar27 * (fVar36 * fVar31 - fVar33 * fVar58);
            local_208 = (float)((uint)((_DAT_146aef5b0 - (fVar36 * fVar37 + fVar33 * fVar57)) *
                                      fVar27) & _DAT_146aef5c0);
            fStack_1f4 = (float)((uint)((fRam0000000146aef5b4 - (fVar36 * fVar37 + fVar38)) * fVar29
                                       ) & uRam0000000146aef5c4);
            fStack_1e0 = (float)((uint)((fRam0000000146aef5b8 - (fVar33 * fVar57 + fVar38)) * fVar35
                                       ) & uRam0000000146aef5c8);
            fStack_1fc = (float)((uint)((fRam0000000146aef5bc - (fVar38 + fVar38)) * fVar39) &
                                uRam0000000146aef5cc);
            fVar27 = fStack_154 + fStack_154;
            fVar29 = fStack_150 + fStack_150;
            fVar39 = local_158 * (local_158 + local_158);
            fVar35 = fStack_14c * (local_158 + local_158);
            fStack_1cc = fRam0000000146aef5bc;
            fStack_1c4 = (fStack_14c * fVar29 + local_158 * fVar27) * local_138;
            fStack_1b0 = (fVar35 + fStack_154 * fVar29) * fStack_134;
            local_1a8 = (fStack_14c * fVar27 + local_158 * fVar29) * fStack_130;
            local_1b8 = fStack_134 * (local_158 * fVar27 - fStack_14c * fVar29);
            fStack_1a4 = fStack_130 * (fStack_154 * fVar29 - fVar35);
            fStack_1c0 = local_138 * (local_158 * fVar29 - fStack_14c * fVar27);
            local_1c8 = (float)((uint)((_DAT_146aef5b0 - (fStack_150 * fVar29 + fStack_154 * fVar27)
                                       ) * local_138) & _DAT_146aef5c0);
            fStack_1b4 = (float)((uint)((fRam0000000146aef5b4 - (fStack_150 * fVar29 + fVar39)) *
                                       fStack_134) & uRam0000000146aef5c4);
            fStack_1a0 = (float)((uint)((fRam0000000146aef5b8 - (fStack_154 * fVar27 + fVar39)) *
                                       fStack_130) & uRam0000000146aef5c8);
            fStack_1bc = (float)((uint)((fRam0000000146aef5bc - (fVar39 + fVar39)) * fStack_12c) &
                                uRam0000000146aef5cc);
            local_198 = (float)local_148;
            fStack_194 = local_148._4_4_;
            fStack_190 = (float)uStack_140;
            fStack_18c = fRam0000000146aef5bc;
            local_388 = fStack_1c4 * local_1f8 + local_1c8 * local_208 + fStack_1c0 * local_1e8 +
                        fStack_1bc * local_1d8;
            fStack_384 = fStack_1c4 * fStack_1f4 + local_1c8 * fStack_204 + fStack_1c0 * fStack_1e4
                         + fStack_1bc * fStack_1d4;
            fStack_380 = fStack_1c4 * fStack_1f0 + local_1c8 * fStack_200 + fStack_1c0 * fStack_1e0
                         + fStack_1bc * fStack_1d0;
            fStack_37c = fStack_1c4 * fStack_1fc + local_1c8 * fStack_1fc + fStack_1c0 * fStack_1fc
                         + fStack_1bc * fRam0000000146aef5bc;
            local_378 = fStack_1b4 * local_1f8 + local_1b8 * local_208 + fStack_1b0 * local_1e8 +
                        fStack_1bc * local_1d8;
            fStack_374 = fStack_1b4 * fStack_1f4 + local_1b8 * fStack_204 + fStack_1b0 * fStack_1e4
                         + fStack_1bc * fStack_1d4;
            fStack_370 = fStack_1b4 * fStack_1f0 + local_1b8 * fStack_200 + fStack_1b0 * fStack_1e0
                         + fStack_1bc * fStack_1d0;
            fStack_36c = fStack_1b4 * fStack_1fc + local_1b8 * fStack_1fc + fStack_1b0 * fStack_1fc
                         + fStack_1bc * fRam0000000146aef5bc;
            local_368 = fStack_1a4 * local_1f8 + local_1a8 * local_208 + fStack_1a0 * local_1e8 +
                        fStack_1bc * local_1d8;
            fStack_364 = fStack_1a4 * fStack_1f4 + local_1a8 * fStack_204 + fStack_1a0 * fStack_1e4
                         + fStack_1bc * fStack_1d4;
            fStack_360 = fStack_1a4 * fStack_1f0 + local_1a8 * fStack_200 + fStack_1a0 * fStack_1e0
                         + fStack_1bc * fStack_1d0;
            fStack_35c = fStack_1a4 * fStack_1fc + local_1a8 * fStack_1fc + fStack_1a0 * fStack_1fc
                         + fStack_1bc * fRam0000000146aef5bc;
            local_358 = local_148._4_4_ * local_1f8 + (float)local_148 * local_208 +
                        (float)uStack_140 * local_1e8 + fRam0000000146aef5bc * local_1d8;
            fStack_354 = local_148._4_4_ * fStack_1f4 + (float)local_148 * fStack_204 +
                         (float)uStack_140 * fStack_1e4 + fRam0000000146aef5bc * fStack_1d4;
            fStack_350 = local_148._4_4_ * fStack_1f0 + (float)local_148 * fStack_200 +
                         (float)uStack_140 * fStack_1e0 + fRam0000000146aef5bc * fStack_1d0;
            fStack_34c = local_148._4_4_ * fStack_1fc + (float)local_148 * fStack_1fc +
                         (float)uStack_140 * fStack_1fc +
                         fRam0000000146aef5bc * fRam0000000146aef5bc;
            fStack_1ec = fStack_1fc;
            fStack_1dc = fStack_1fc;
            fStack_1ac = fStack_1bc;
            fStack_19c = fStack_1bc;
            FMatrix::RemoveScaling(&local_388);
            local_218 = (float)(-(uint)(_DAT_146aef850 <= fVar59) & (_DAT_146aef700 ^ (uint)fVar40)
                               ^ _DAT_146aef700);
            fStack_214 = (float)(-(uint)(fRam0000000146aef854 <= fVar60) &
                                 (uRam0000000146aef704 ^ (uint)fVar43) ^ uRam0000000146aef704);
            fStack_210 = (float)(-(uint)(fRam0000000146aef858 <= fVar61) &
                                 (uRam0000000146aef708 ^ (uint)fVar46) ^ uRam0000000146aef708);
            uStack_20c = -(uint)(fRam0000000146aef85c <= fVar62) &
                         (uRam0000000146aef70c ^ (uint)fVar49) ^ uRam0000000146aef70c;
            local_388 = local_388 * local_218;
            fStack_384 = fStack_384 * local_218;
            fStack_380 = fStack_380 * local_218;
            fStack_374 = fStack_374 * fStack_214;
            fStack_370 = fStack_370 * fStack_214;
            local_378 = local_378 * fStack_214;
            fStack_364 = fStack_364 * fStack_210;
            fStack_360 = fStack_360 * fStack_210;
            local_368 = local_368 * fStack_210;
            FQuat::FQuat(&local_2a8,&local_388);
            local_3b8 = 0x322bcc77;
            auVar25._0_4_ = local_2a8 * local_2a8 + fStack_2a0 * fStack_2a0;
            auVar25._4_4_ = fStack_2a4 * fStack_2a4 + fStack_29c * fStack_29c;
            auVar25._8_4_ = fStack_2a0 * fStack_2a0 + local_2a8 * local_2a8;
            auVar25._12_4_ = fStack_29c * fStack_29c + fStack_2a4 * fStack_2a4;
            fVar40 = auVar25._4_4_ + auVar25._0_4_;
            fVar43 = auVar25._8_4_ + auVar25._4_4_;
            fVar46 = auVar25._12_4_ + auVar25._8_4_;
            fVar49 = auVar25._0_4_ + auVar25._12_4_;
            auVar18._4_4_ = fVar43;
            auVar18._0_4_ = fVar40;
            auVar18._8_4_ = fVar46;
            auVar18._12_4_ = fVar49;
            auVar18 = rsqrtps(auVar25,auVar18);
            fVar27 = auVar18._0_4_;
            fVar29 = auVar18._4_4_;
            fVar35 = auVar18._8_4_;
            fVar39 = auVar18._12_4_;
            fVar27 = (_DAT_146aef840 - fVar27 * fVar27 * fVar40 * _DAT_146aef840) * fVar27 + fVar27;
            fVar29 = (fRam0000000146aef844 - fVar29 * fVar29 * fVar43 * fRam0000000146aef844) *
                     fVar29 + fVar29;
            fVar35 = (fRam0000000146aef848 - fVar35 * fVar35 * fVar46 * fRam0000000146aef848) *
                     fVar35 + fVar35;
            fVar39 = (fRam0000000146aef84c - fVar39 * fVar39 * fVar49 * fRam0000000146aef84c) *
                     fVar39 + fVar39;
            local_178._4_4_ = fStack_354;
            local_178._0_4_ = local_358;
            fStack_170 = fStack_350;
            local_2a8 = (float)(((uint)(((_DAT_146aef840 - fVar27 * fVar27 * fVar40 * _DAT_146aef840
                                         ) * fVar27 + fVar27) * local_2a8) ^ _DAT_146aef830) &
                                -(uint)(1e-08 <= fVar40) ^ _DAT_146aef830);
            fStack_2a4 = (float)(((uint)(((fRam0000000146aef844 -
                                          fVar29 * fVar29 * fVar43 * fRam0000000146aef844) * fVar29
                                         + fVar29) * fStack_2a4) ^ uRam0000000146aef834) &
                                 -(uint)(1e-08 <= fVar43) ^ uRam0000000146aef834);
            fStack_2a0 = (float)(((uint)(((fRam0000000146aef848 -
                                          fVar35 * fVar35 * fVar46 * fRam0000000146aef848) * fVar35
                                         + fVar35) * fStack_2a0) ^ uRam0000000146aef838) &
                                 -(uint)(1e-08 <= fVar46) ^ uRam0000000146aef838);
            fStack_29c = (float)(((uint)(((fRam0000000146aef84c -
                                          fVar39 * fVar39 * fVar49 * fRam0000000146aef84c) * fVar39
                                         + fVar39) * fStack_29c) ^ uRam0000000146aef83c) &
                                 -(uint)(1e-08 <= fVar49) ^ uRam0000000146aef83c);
            fStack_16c = 0.0;
            local_188 = local_2a8;
            fStack_184 = fStack_2a4;
            fStack_180 = fStack_2a0;
            fStack_17c = fStack_29c;
            local_168 = fVar59;
            fStack_164 = fVar60;
            fStack_160 = fVar61;
            fStack_15c = fVar62;
          }
        }
        else {
          local_3c8 = *(ulonglong *)(param_1 + 0x198);
          FUN_142385450(param_1,&local_188,&local_158,plVar16);
        }
        (**(code **)(*local_308 + 0x38))
                  (local_308,&local_188,param_1,
                   CONCAT31((uint3)(*(uint *)(param_1 + 0x2e8) >> 10),
                            ~(byte)(*(uint *)(param_1 + 0x2e8) >> 2)) & 0xffffff01);
        if ((*(byte *)(param_1 + 0x2e8) & 4) != 0) {
          cVar8 = (**(code **)(*local_308 + 0x28))(local_308,&local_278,&local_2f8);
          if (cVar8 == '\0') {
            FUN_142395db0(param_1);
          }
          else {
            local_128 = local_278;
            uStack_120 = uStack_270;
            local_118._4_4_ = local_2f4;
            local_118._0_4_ = local_2f8;
            local_118._8_4_ = local_2f0;
            local_118._12_4_ = 0;
            local_108._4_4_ = DAT_1464aa788._4_4_;
            local_108._0_4_ = (undefined4)DAT_1464aa788;
            local_108._8_4_ = DAT_1464aa790;
            local_108._12_4_ = 0;
            local_3c8 = local_3c8 & 0xffffffffffffff00;
            FUN_142398770(param_1,&local_128,0,0);
          }
        }
        uVar12 = (**(code **)(*local_308 + 0x30))(local_308,param_1 + 0x2d0);
      }
      if (local_300 != (longlong *)0x0) {
        LOCK();
        puVar1 = (uint *)(local_300 + 1);
        uVar9 = *puVar1;
        uVar12 = (ulonglong)uVar9;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if (uVar9 == 1) {
          uVar12 = (**(code **)*local_300)(local_300);
          LOCK();
          piVar2 = (int *)((longlong)local_300 + 0xc);
          iVar15 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            uVar12 = (**(code **)(*local_300 + 8))(local_300,1);
          }
        }
      }
    }
  }
  uVar9 = (uint)uVar12;
  if ((*(byte *)(param_1 + 0x2e8) & 8) != 0) {
    plVar16 = *(longlong **)(param_1 + 0x118);
    if ((plVar16 == (longlong *)0x0) || (uVar9 = FUN_1422df870(plVar16), (char)uVar9 == '\0')) {
      plVar17 = (longlong *)0x0;
      plVar16 = plVar17;
    }
    else {
      plVar17 = (longlong *)plVar16[0x92];
    }
    if (((plVar17 != (longlong *)0x0) &&
        (uVar9 = *(uint *)((longlong)plVar17 + 0x4cc) >> 1, (uVar9 & 1) != 0)) &&
       (uVar9 = (**(code **)(*plVar17 + 0x768))(), (char)uVar9 != '\0')) {
      uVar10 = (**(code **)(*plVar16 + 0x788))(plVar16,&local_3a0);
      local_2b8 = *(float *)(param_1 + 0x210);
      fStack_2b4 = *(float *)(param_1 + 0x214);
      fStack_2b0 = *(float *)(param_1 + 0x218);
      fStack_2ac = *(float *)(param_1 + 0x21c);
      auVar19._4_4_ = -(uint)(*(float *)(param_1 + 0x254) != fStack_2b4);
      auVar19._0_4_ = -(uint)(*(float *)(param_1 + 0x250) != local_2b8);
      auVar19._8_4_ = -(uint)(*(float *)(param_1 + 600) != fStack_2b0);
      auVar19._12_4_ = -(uint)(*(float *)(param_1 + 0x25c) != fStack_2ac);
      iVar15 = movmskps(uVar10,auVar19);
      if (iVar15 != 0) {
        *(float *)(param_1 + 0x250) = local_2b8;
        *(float *)(param_1 + 0x254) = fStack_2b4;
        *(float *)(param_1 + 600) = fStack_2b0;
        *(float *)(param_1 + 0x25c) = fStack_2ac;
        puVar14 = (undefined8 *)FQuat::Rotator(&local_2b8,local_238);
        *(undefined8 *)(param_1 + 0x260) = *puVar14;
        *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(puVar14 + 1);
      }
      local_2e0 = *(float *)(param_1 + 0x268);
      local_3b0 = 0x38d1b717;
      fVar27 = (float)DAT_146aef870;
      fVar29 = DAT_146aef870._4_4_;
      fVar35 = DAT_146aef870._8_4_;
      fVar39 = DAT_146aef870._12_4_;
      local_3a0 = local_3a0 - (float)*(undefined8 *)(param_1 + 0x260);
      fStack_39c = fStack_39c - (float)((ulonglong)*(undefined8 *)(param_1 + 0x260) >> 0x20);
      auVar20._4_4_ = fStack_39c;
      auVar20._0_4_ = local_3a0;
      auVar20._8_4_ = local_398 - local_2e0;
      auVar20._12_4_ = 0;
      auVar18 = divps(auVar20,_DAT_146aef870);
      local_3a0 = local_3a0 - (float)(int)auVar18._0_4_ * fVar27;
      fStack_39c = fStack_39c - (float)(int)auVar18._4_4_ * fVar29;
      fVar46 = (local_398 - local_2e0) - (float)(int)auVar18._8_4_ * fVar35;
      fVar49 = 0.0 - (float)(int)auVar18._12_4_ * fVar39;
      fVar40 = (float)(((uint)(local_3a0 + fVar27) ^ (uint)local_3a0) & -(uint)(0.0 <= local_3a0) ^
                      (uint)(local_3a0 + fVar27));
      fVar43 = (float)(((uint)(fStack_39c + fVar29) ^ (uint)fStack_39c) & -(uint)(0.0 <= fStack_39c)
                      ^ (uint)(fStack_39c + fVar29));
      fVar46 = (float)(((uint)(fVar46 + fVar35) ^ (uint)fVar46) & -(uint)(0.0 <= fVar46) ^
                      (uint)(fVar46 + fVar35));
      fVar49 = (float)(((uint)(fVar49 + fVar39) ^ (uint)fVar49) & -(uint)(0.0 <= fVar49) ^
                      (uint)(fVar49 + fVar39));
      auVar21._4_4_ =
           -(uint)(0.0001 < (float)((((uint)(fVar43 - fVar29) ^ (uint)fVar43) &
                                     -(uint)(fRam0000000146aef864 < fVar43) ^ (uint)fVar43) &
                                   uRam0000000146aef724));
      auVar21._0_4_ =
           -(uint)(0.0001 < (float)((((uint)(fVar40 - fVar27) ^ (uint)fVar40) &
                                     -(uint)(_DAT_146aef860 < fVar40) ^ (uint)fVar40) &
                                   _DAT_146aef720));
      auVar21._8_4_ =
           -(uint)(0.0001 < (float)((((uint)(fVar46 - fVar35) ^ (uint)fVar46) &
                                     -(uint)(fRam0000000146aef868 < fVar46) ^ (uint)fVar46) &
                                   uRam0000000146aef728));
      auVar21._12_4_ =
           -(uint)(0.0001 < (float)((((uint)(fVar49 - fVar39) ^ (uint)fVar49) &
                                     -(uint)(fRam0000000146aef86c < fVar49) ^ (uint)fVar49) &
                                   uRam0000000146aef72c));
      iVar15 = movmskps(local_2e0,auVar21);
      uVar9 = 0;
      if (iVar15 != 0) {
        local_2d0 = local_398;
        local_3c8 = local_3c8 & 0xffffffffffffff00;
        uVar9 = FUN_142399b90(param_1,local_2d8,0,0);
      }
    }
  }
  fVar43 = fRam0000000146aef858;
  fVar40 = fRam0000000146aef854;
  fVar39 = _DAT_146aef850;
  fVar35 = fRam0000000146aef5b8;
  fVar29 = fRam0000000146aef5b4;
  fVar27 = _DAT_146aef5b0;
  if ((*(byte *)(param_1 + 0x2e8) & 0x10) == 0) {
    uVar10 = *(undefined4 *)(param_1 + 0x224);
    local_284 = *(undefined4 *)(param_1 + 0x228);
    *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 0x220);
    *(undefined4 *)((longlong)param_3 + 4) = uVar10;
    *(undefined4 *)(param_3 + 1) = local_284;
    local_248 = *(float *)(param_1 + 0x210);
    fStack_244 = *(float *)(param_1 + 0x214);
    fStack_240 = *(float *)(param_1 + 0x218);
    fStack_23c = *(float *)(param_1 + 0x21c);
    auVar24._4_4_ = -(uint)(*(float *)(param_1 + 0x254) != fStack_244);
    auVar24._0_4_ = -(uint)(*(float *)(param_1 + 0x250) != local_248);
    auVar24._8_4_ = -(uint)(*(float *)(param_1 + 600) != fStack_240);
    auVar24._12_4_ = -(uint)(*(float *)(param_1 + 0x25c) != fStack_23c);
    iVar15 = movmskps(local_284,auVar24);
    if (iVar15 != 0) {
      *(float *)(param_1 + 0x250) = local_248;
      *(float *)(param_1 + 0x254) = fStack_244;
      *(float *)(param_1 + 600) = fStack_240;
      *(float *)(param_1 + 0x25c) = fStack_23c;
      puVar14 = (undefined8 *)FQuat::Rotator(&local_248,local_22c);
      *(undefined8 *)(param_1 + 0x260) = *puVar14;
      *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(puVar14 + 1);
    }
    *(undefined8 *)((longlong)param_3 + 0xc) = *(undefined8 *)(param_1 + 0x260);
    local_2c0 = *(undefined4 *)(param_1 + 0x268);
  }
  else {
    fVar33 = *(float *)(param_1 + 0x210);
    fVar34 = *(float *)(param_1 + 0x214);
    fVar36 = *(float *)(param_1 + 0x218);
    fVar38 = *(float *)(param_1 + 0x21c);
    auVar18 = *(undefined1 (*) [16])(param_1 + 0x920);
    fVar46 = auVar18._0_4_;
    fVar31 = auVar18._4_4_;
    fVar37 = auVar18._8_4_;
    auVar3 = *(undefined1 (*) [16])(param_1 + 0x230);
    fVar49 = auVar3._0_4_;
    fVar57 = auVar3._4_4_;
    fVar58 = auVar3._8_4_;
    fVar59 = *(float *)(param_1 + 0x900);
    fVar60 = *(float *)(param_1 + 0x904);
    fVar61 = *(float *)(param_1 + 0x908);
    fVar62 = *(float *)(param_1 + 0x90c);
    fVar5 = *(float *)(param_1 + 0x220);
    fVar6 = *(float *)(param_1 + 0x224);
    fVar7 = *(float *)(param_1 + 0x228);
    auVar22 = minps(auVar18,auVar3);
    auVar23._4_4_ = -(uint)(auVar22._4_4_ < fRam0000000146aef854);
    auVar23._0_4_ = -(uint)(auVar22._0_4_ < _DAT_146aef850);
    auVar23._8_4_ = -(uint)(auVar22._8_4_ < fRam0000000146aef858);
    auVar23._12_4_ = -(uint)(auVar22._12_4_ < fRam0000000146aef85c);
    iVar15 = movmskps(uVar9,auVar23);
    if (iVar15 == 0) {
      fVar49 = fVar49 * *(float *)(param_1 + 0x910);
      fVar57 = fVar57 * *(float *)(param_1 + 0x914);
      fVar58 = fVar58 * *(float *)(param_1 + 0x918);
      local_258 = fVar33 * fVar62 * _DAT_146aef820 + fVar38 * fVar59 +
                  fVar34 * fVar61 * _DAT_146aef810 + fVar36 * fVar60 * _DAT_146aef800;
      fStack_254 = fVar33 * fVar61 * fRam0000000146aef824 + fVar38 * fVar60 +
                   fVar34 * fVar62 * fRam0000000146aef814 + fVar36 * fVar59 * fRam0000000146aef804;
      fStack_250 = fVar33 * fVar60 * fRam0000000146aef828 + fVar38 * fVar61 +
                   fVar34 * fVar59 * fRam0000000146aef818 + fVar36 * fVar62 * fRam0000000146aef808;
      fStack_24c = fVar33 * fVar59 * fRam0000000146aef82c + fVar38 * fVar62 +
                   fVar34 * fVar60 * fRam0000000146aef81c + fVar36 * fVar61 * fRam0000000146aef80c;
      fVar35 = fVar58 * fVar34 - fVar57 * fVar36;
      fVar39 = fVar49 * fVar36 - fVar58 * fVar33;
      fVar40 = fVar57 * fVar33 - fVar49 * fVar34;
      fVar35 = fVar35 + fVar35;
      fVar39 = fVar39 + fVar39;
      fVar40 = fVar40 + fVar40;
      fVar27 = (fVar40 * fVar34 - fVar39 * fVar36) + fVar35 * fVar38 + fVar49 +
               *(float *)(param_1 + 0x220);
      fVar29 = (fVar35 * fVar36 - fVar40 * fVar33) + fVar39 * fVar38 + fVar57 +
               *(float *)(param_1 + 0x224);
      local_290 = (fVar39 * fVar33 - fVar35 * fVar34) + fVar40 * fVar38 + fVar58 +
                  *(float *)(param_1 + 0x228);
    }
    else {
      fVar28 = fVar34 + fVar34;
      fVar30 = fVar36 + fVar36;
      fVar32 = fVar33 * (fVar33 + fVar33);
      fVar50 = fVar38 * (fVar33 + fVar33);
      fVar54 = (fVar38 * fVar30 + fVar33 * fVar28) * fVar49;
      fVar55 = (fVar50 + fVar34 * fVar30) * fVar57;
      fVar56 = (fVar38 * fVar28 + fVar33 * fVar30) * fVar58;
      fVar41 = fVar57 * (fVar33 * fVar28 - fVar38 * fVar30);
      fVar44 = fVar58 * (fVar34 * fVar30 - fVar50);
      fVar47 = fVar49 * (fVar33 * fVar30 - fVar38 * fVar28);
      fVar33 = fVar60 + fVar60;
      fVar50 = fVar61 + fVar61;
      fVar38 = (float)((uint)((_DAT_146aef5b0 - (fVar36 * fVar30 + fVar34 * fVar28)) * fVar49) &
                      _DAT_146aef5c0);
      fVar30 = (float)((uint)((fRam0000000146aef5b4 - (fVar36 * fVar30 + fVar32)) * fVar57) &
                      uRam0000000146aef5c4);
      fVar28 = (float)((uint)((fRam0000000146aef5b8 - (fVar34 * fVar28 + fVar32)) * fVar58) &
                      uRam0000000146aef5c8);
      fVar32 = (float)((uint)((fRam0000000146aef5bc - (fVar32 + fVar32)) * auVar3._12_4_) &
                      uRam0000000146aef5cc);
      fVar36 = fVar59 * (fVar59 + fVar59);
      fStack_2ac = fRam0000000146aef5bc;
      fVar34 = (fVar59 + fVar59) * fVar62;
      fVar51 = (fVar50 * fVar62 + fVar33 * fVar59) * fVar46;
      fVar52 = (fVar34 + fVar50 * fVar60) * fVar31;
      fVar53 = (fVar33 * fVar62 + fVar50 * fVar59) * fVar37;
      fVar42 = fVar31 * (fVar33 * fVar59 - fVar50 * fVar62);
      fVar45 = fVar37 * (fVar50 * fVar60 - fVar34);
      fVar48 = fVar46 * (fVar50 * fVar59 - fVar33 * fVar62);
      fVar59 = (float)((uint)((_DAT_146aef5b0 - (fVar61 * fVar50 + fVar60 * fVar33)) * fVar46) &
                      _DAT_146aef5c0);
      fVar61 = (float)((uint)((fRam0000000146aef5b4 - (fVar61 * fVar50 + fVar36)) * fVar31) &
                      uRam0000000146aef5c4);
      fVar60 = (float)((uint)((fRam0000000146aef5b8 - (fVar60 * fVar33 + fVar36)) * fVar37) &
                      uRam0000000146aef5c8);
      fVar62 = (float)((uint)((fRam0000000146aef5bc - (fVar36 + fVar36)) * auVar18._12_4_) &
                      uRam0000000146aef5cc);
      fVar33 = *(float *)(param_1 + 0x910);
      fVar34 = *(float *)(param_1 + 0x914);
      fVar36 = *(float *)(param_1 + 0x918);
      local_348 = fVar51 * fVar41 + fVar59 * fVar38 + fVar48 * fVar56 + fVar62 * fVar5;
      fStack_344 = fVar51 * fVar30 + fVar59 * fVar54 + fVar48 * fVar44 + fVar62 * fVar6;
      fStack_340 = fVar51 * fVar55 + fVar59 * fVar47 + fVar48 * fVar28 + fVar62 * fVar7;
      fStack_33c = fVar51 * fVar32 + fVar59 * fVar32 + fVar48 * fVar32 +
                   fVar62 * fRam0000000146aef5bc;
      local_338 = fVar61 * fVar41 + fVar42 * fVar38 + fVar52 * fVar56 + fVar62 * fVar5;
      fStack_334 = fVar61 * fVar30 + fVar42 * fVar54 + fVar52 * fVar44 + fVar62 * fVar6;
      fStack_330 = fVar61 * fVar55 + fVar42 * fVar47 + fVar52 * fVar28 + fVar62 * fVar7;
      fStack_32c = fVar61 * fVar32 + fVar42 * fVar32 + fVar52 * fVar32 +
                   fVar62 * fRam0000000146aef5bc;
      local_328 = fVar45 * fVar41 + fVar53 * fVar38 + fVar60 * fVar56 + fVar62 * fVar5;
      fStack_324 = fVar45 * fVar30 + fVar53 * fVar54 + fVar60 * fVar44 + fVar62 * fVar6;
      fStack_320 = fVar45 * fVar55 + fVar53 * fVar47 + fVar60 * fVar28 + fVar62 * fVar7;
      fStack_31c = fVar45 * fVar32 + fVar53 * fVar32 + fVar60 * fVar32 +
                   fVar62 * fRam0000000146aef5bc;
      local_318 = fVar34 * fVar41 + fVar33 * fVar38 + fVar36 * fVar56 + fRam0000000146aef5bc * fVar5
      ;
      fStack_314 = fVar34 * fVar30 + fVar33 * fVar54 + fVar36 * fVar44 +
                   fRam0000000146aef5bc * fVar6;
      fStack_310 = fVar34 * fVar55 + fVar33 * fVar47 + fVar36 * fVar28 +
                   fRam0000000146aef5bc * fVar7;
      fStack_30c = fVar34 * fVar32 + fVar33 * fVar32 + fVar36 * fVar32 +
                   fRam0000000146aef5bc * fRam0000000146aef5bc;
      local_2b8 = fVar5;
      fStack_2b4 = fVar6;
      fStack_2b0 = fVar7;
      FMatrix::RemoveScaling(&local_348);
      fVar27 = (float)(-(uint)(fVar39 <= fVar49 * fVar46) & (_DAT_146aef700 ^ (uint)fVar27) ^
                      _DAT_146aef700);
      fVar29 = (float)(-(uint)(fVar40 <= fVar57 * fVar31) & (uRam0000000146aef704 ^ (uint)fVar29) ^
                      uRam0000000146aef704);
      fVar35 = (float)(-(uint)(fVar43 <= fVar58 * fVar37) & (uRam0000000146aef708 ^ (uint)fVar35) ^
                      uRam0000000146aef708);
      local_348 = local_348 * fVar27;
      fStack_344 = fStack_344 * fVar27;
      fStack_340 = fStack_340 * fVar27;
      fStack_334 = fStack_334 * fVar29;
      fStack_330 = fStack_330 * fVar29;
      local_338 = local_338 * fVar29;
      fStack_324 = fStack_324 * fVar35;
      fStack_320 = fStack_320 * fVar35;
      local_328 = local_328 * fVar35;
      FQuat::FQuat(&local_268,&local_348);
      local_3a8 = 0x322bcc77;
      auVar26._0_4_ = local_268 * local_268 + fStack_260 * fStack_260;
      auVar26._4_4_ = fStack_264 * fStack_264 + fStack_25c * fStack_25c;
      auVar26._8_4_ = fStack_260 * fStack_260 + local_268 * local_268;
      auVar26._12_4_ = fStack_25c * fStack_25c + fStack_264 * fStack_264;
      fVar40 = auVar26._4_4_ + auVar26._0_4_;
      fVar43 = auVar26._8_4_ + auVar26._4_4_;
      fVar46 = auVar26._12_4_ + auVar26._8_4_;
      fVar49 = auVar26._0_4_ + auVar26._12_4_;
      auVar4._4_4_ = fVar43;
      auVar4._0_4_ = fVar40;
      auVar4._8_4_ = fVar46;
      auVar4._12_4_ = fVar49;
      auVar18 = rsqrtps(auVar26,auVar4);
      fVar27 = auVar18._0_4_;
      fVar29 = auVar18._4_4_;
      fVar35 = auVar18._8_4_;
      fVar39 = auVar18._12_4_;
      fVar27 = (_DAT_146aef840 - fVar27 * fVar27 * fVar40 * _DAT_146aef840) * fVar27 + fVar27;
      fVar29 = (fRam0000000146aef844 - fVar29 * fVar29 * fVar43 * fRam0000000146aef844) * fVar29 +
               fVar29;
      fVar35 = (fRam0000000146aef848 - fVar35 * fVar35 * fVar46 * fRam0000000146aef848) * fVar35 +
               fVar35;
      fVar39 = (fRam0000000146aef84c - fVar39 * fVar39 * fVar49 * fRam0000000146aef84c) * fVar39 +
               fVar39;
      local_258 = (float)(((uint)(((_DAT_146aef840 - fVar27 * fVar27 * fVar40 * _DAT_146aef840) *
                                   fVar27 + fVar27) * local_268) ^ _DAT_146aef830) &
                          -(uint)(1e-08 <= fVar40) ^ _DAT_146aef830);
      fStack_254 = (float)(((uint)(((fRam0000000146aef844 -
                                    fVar29 * fVar29 * fVar43 * fRam0000000146aef844) * fVar29 +
                                   fVar29) * fStack_264) ^ uRam0000000146aef834) &
                           -(uint)(1e-08 <= fVar43) ^ uRam0000000146aef834);
      fStack_250 = (float)(((uint)(((fRam0000000146aef848 -
                                    fVar35 * fVar35 * fVar46 * fRam0000000146aef848) * fVar35 +
                                   fVar35) * fStack_260) ^ uRam0000000146aef838) &
                           -(uint)(1e-08 <= fVar46) ^ uRam0000000146aef838);
      fStack_24c = (float)(((uint)(((fRam0000000146aef84c -
                                    fVar39 * fVar39 * fVar49 * fRam0000000146aef84c) * fVar39 +
                                   fVar39) * fStack_25c) ^ uRam0000000146aef83c) &
                           -(uint)(1e-08 <= fVar49) ^ uRam0000000146aef83c);
      fVar27 = local_318;
      fVar29 = fStack_314;
      local_290 = fStack_310;
    }
    *param_3 = CONCAT44(fVar29,fVar27);
    *(float *)(param_3 + 1) = local_290;
    FQuat::Rotator(&local_258,&local_2c8);
    *(undefined8 *)((longlong)param_3 + 0xc) = local_2c8;
  }
  *(undefined4 *)((longlong)param_3 + 0x14) = local_2c0;
  if ((*(byte *)(param_1 + 0x2e8) & 0x10) == 0) {
    fVar27 = *(float *)(param_1 + 0x2d0);
  }
  else {
    fVar27 = *(float *)(param_1 + 0x930) + *(float *)(param_1 + 0x2d0);
  }
  *(float *)(param_3 + 3) = fVar27 * *(float *)(param_1 + 0x2d4);
  *(undefined4 *)(param_3 + 6) = *(undefined4 *)(param_1 + 0x2e4);
  *(uint *)((longlong)param_3 + 0x34) =
       *(uint *)((longlong)param_3 + 0x34) ^
       (*(uint *)((longlong)param_3 + 0x34) ^ *(uint *)(param_1 + 0x2e8)) & 1;
  *(uint *)((longlong)param_3 + 0x34) =
       *(uint *)((longlong)param_3 + 0x34) ^
       (*(uint *)((longlong)param_3 + 0x34) ^ *(uint *)(param_1 + 0x2e8)) & 2;
  *(undefined1 *)(param_3 + 7) = *(undefined1 *)(param_1 + 0x2ec);
  *(undefined4 *)((longlong)param_3 + 0x24) = *(undefined4 *)(param_1 + 0x2d8);
  *(undefined4 *)(param_3 + 5) = *(undefined4 *)(param_1 + 0x2dc);
  *(undefined4 *)((longlong)param_3 + 0x2c) = *(undefined4 *)(param_1 + 0x2e0);
  *(undefined4 *)((longlong)param_3 + 0x3c) = *(undefined4 *)(param_1 + 0x2f0);
  if (0.0 < *(float *)(param_1 + 0x2f0)) {
    FUN_140a296b0(param_3 + 8,param_1 + 0x300);
  }
  return;
}



// FUNCTION 1422f11e0 GetDesc body=433 status=ok
// SIG undefined GetDesc(void)

undefined8 UBlueprint::GetDesc(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  undefined2 *puVar7;
  undefined8 local_res8;
  wchar_t *local_38;
  int local_30;
  int local_2c;
  undefined2 *local_28;
  int local_20;
  
  cVar1 = *(char *)(param_1 + 0xa0);
  local_2c = 0;
  local_38 = (wchar_t *)0x0;
  local_30 = 0;
  if (cVar1 == '\x01') {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_38,0xe);
    local_30 = local_30 + 0xe;
    if (local_2c < local_30) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38);
    }
    builtin_wcsncpy(local_38,L"const extends",0xe);
  }
  else if (cVar1 == '\x02') {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_38,0xb);
    local_30 = local_30 + 0xb;
    if (local_2c < local_30) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38);
    }
    builtin_wcsncpy(local_38,L"macros for",0xb);
  }
  else if (cVar1 != '\x03') {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_38,8);
    local_30 = local_30 + 8;
    if (local_2c < local_30) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38);
    }
    builtin_wcsncpy(local_38,L"extends",8);
  }
  pwVar3 = local_38;
  lVar5 = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    lVar4 = UObject::GetPrivateStaticClass();
    for (lVar2 = *(longlong *)(param_1 + 0x58);
        (lVar5 = 0, lVar2 != 0 && (lVar5 = *(longlong *)(param_1 + 0x58), lVar2 != lVar4));
        lVar2 = *(longlong *)(lVar2 + 0x30)) {
    }
  }
  local_res8 = *(undefined8 *)(lVar5 + 0x18);
  FName::ToString(&local_res8,&local_28);
  puVar7 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar7 = local_28;
  }
  pwVar6 = L"";
  if (local_30 != 0) {
    pwVar6 = pwVar3;
  }
  FString::PrintfImpl(param_2,L"%s %s",pwVar6,puVar7);
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (pwVar3 != (wchar_t *)0x0) {
    FMemory::Free(pwVar3);
  }
  return param_2;
}



// FUNCTION 1422f13a0 FUN_1422f13a0 body=499 status=ok
// SIG undefined FUN_1422f13a0(void)

undefined8 * FUN_1422f13a0(undefined1 param_1)

{
  short sVar1;
  short sVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  short *psVar8;
  undefined2 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  int iVar16;
  undefined8 *local_48;
  int local_40;
  int local_3c;
  undefined2 *local_38;
  int local_30;
  
  FUN_1422f15a0(&local_38,2,param_1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146aef978) && (_Init_thread_header(&DAT_146aef978), DAT_146aef978 == -1))
  {
    FName::FName(&DAT_146aef970,L"AudioOcclusionPlugin",1);
    _Init_thread_footer(&DAT_146aef978);
  }
  uVar3 = DAT_146aef970;
  plVar5 = (longlong *)FUN_141593110();
  iVar16 = 0;
  local_48 = (undefined8 *)0x0;
  local_3c = 0;
  iVar11 = 0;
  iVar4 = (**(code **)(*plVar5 + 8))(plVar5,uVar3);
  iVar15 = 0;
  puVar10 = (undefined8 *)0x0;
  iVar12 = 0;
  if (0 < iVar4) {
    do {
      lVar6 = (**(code **)(*plVar5 + 0x10))(plVar5,uVar3,iVar15);
      if (lVar6 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = lVar6 + -8;
      }
      local_40 = iVar11 + 1;
      if (iVar16 < local_40) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_48,iVar11);
        iVar16 = local_3c;
      }
      iVar15 = iVar15 + 1;
      local_48[iVar11] = lVar6;
      puVar10 = local_48;
      iVar12 = local_40;
      iVar11 = local_40;
    } while (iVar15 < iVar4);
  }
  for (puVar14 = puVar10; puVar14 != puVar10 + iVar12; puVar14 = puVar14 + 1) {
    puVar13 = (undefined8 *)*puVar14;
    puVar7 = (undefined8 *)(**(code **)*puVar13)(puVar13,&local_48);
    puVar9 = &DAT_143f3eda8;
    if (local_30 != 0) {
      puVar9 = local_38;
    }
    if (*(int *)(puVar7 + 1) == 0) {
      psVar8 = &DAT_143f3eda8;
    }
    else {
      psVar8 = (short *)*puVar7;
    }
    lVar6 = (longlong)puVar9 - (longlong)psVar8;
    do {
      sVar1 = *psVar8;
      sVar2 = *(short *)((longlong)psVar8 + lVar6);
      if (sVar1 != sVar2) break;
      psVar8 = psVar8 + 1;
    } while (sVar2 != 0);
    if (local_48 != (undefined8 *)0x0) {
      FMemory::Free();
    }
    if (sVar1 == sVar2) goto LAB_1422f1511;
  }
  puVar13 = (undefined8 *)0x0;
LAB_1422f1511:
  if (puVar10 != (undefined8 *)0x0) {
    FMemory::Free(puVar10);
  }
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return puVar13;
}



// FUNCTION 1422f15a0 FUN_1422f15a0 body=233 status=ok
// SIG undefined FUN_1422f15a0(void)

undefined8 * FUN_1422f15a0(undefined8 *param_1,char param_2,undefined1 param_3)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  pwVar1 = L"";
  if (param_2 == '\0') {
    pwVar2 = L"SpatializationPlugin";
  }
  else if (param_2 == '\x01') {
    pwVar2 = L"ReverbPlugin";
  }
  else if (param_2 == '\x02') {
    pwVar2 = L"OcclusionPlugin";
  }
  else {
    pwVar2 = L"";
  }
  switch(param_3) {
  case 0:
    pwVar1 = L"/Script/WindowsTargetPlatform.WindowsTargetSettings";
    break;
  case 1:
    pwVar1 = L"/Script/MacTargetPlatform.MacTargetSettings";
    break;
  case 2:
    pwVar1 = L"/Script/LinuxTargetPlatform.LinuxTargetSettings";
    break;
  case 3:
    pwVar1 = L"/Script/IOSRuntimeSettings.IOSRuntimeSettings";
    break;
  case 4:
    pwVar1 = L"/Script/AndroidRuntimeSettings.AndroidRuntimeSettings";
    break;
  case 5:
    pwVar1 = L"/Script/XboxOnePlatformEditor.XboxOneTargetSettings";
    break;
  case 6:
    pwVar1 = L"/Script/PS4PlatformEditor.PS4TargetSettings";
    break;
  case 8:
    pwVar1 = L"/Script/SwitchRuntimeSettings.SwitchRuntimeSettings";
    break;
  case 9:
    pwVar1 = L"/Script/HTML5PlatformEditor.HTML5TargetSettings";
    break;
  case 10:
    pwVar1 = L"/Script/LuminRuntimeSettings.LuminRuntimeSettings";
  }
  FConfigCacheIni::GetString(DAT_1468b6148,pwVar1,pwVar2,param_1,&DAT_1468e2360);
  return param_1;
}



// FUNCTION 1422f16c0 FUN_1422f16c0 body=499 status=ok
// SIG undefined FUN_1422f16c0(void)

undefined8 * FUN_1422f16c0(undefined1 param_1)

{
  short sVar1;
  short sVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  short *psVar8;
  undefined2 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  int iVar16;
  undefined8 *local_48;
  int local_40;
  int local_3c;
  undefined2 *local_38;
  int local_30;
  
  FUN_1422f15a0(&local_38,1,param_1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146aef988) && (_Init_thread_header(&DAT_146aef988), DAT_146aef988 == -1))
  {
    FName::FName(&DAT_146aef980,L"AudioReverbPlugin",1);
    _Init_thread_footer(&DAT_146aef988);
  }
  uVar3 = DAT_146aef980;
  plVar5 = (longlong *)FUN_141593110();
  iVar16 = 0;
  local_48 = (undefined8 *)0x0;
  local_3c = 0;
  iVar11 = 0;
  iVar4 = (**(code **)(*plVar5 + 8))(plVar5,uVar3);
  iVar15 = 0;
  puVar10 = (undefined8 *)0x0;
  iVar12 = 0;
  if (0 < iVar4) {
    do {
      lVar6 = (**(code **)(*plVar5 + 0x10))(plVar5,uVar3,iVar15);
      if (lVar6 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = lVar6 + -8;
      }
      local_40 = iVar11 + 1;
      if (iVar16 < local_40) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_48,iVar11);
        iVar16 = local_3c;
      }
      iVar15 = iVar15 + 1;
      local_48[iVar11] = lVar6;
      puVar10 = local_48;
      iVar12 = local_40;
      iVar11 = local_40;
    } while (iVar15 < iVar4);
  }
  for (puVar14 = puVar10; puVar14 != puVar10 + iVar12; puVar14 = puVar14 + 1) {
    puVar13 = (undefined8 *)*puVar14;
    puVar7 = (undefined8 *)(**(code **)*puVar13)(puVar13,&local_48);
    puVar9 = &DAT_143f3eda8;
    if (local_30 != 0) {
      puVar9 = local_38;
    }
    if (*(int *)(puVar7 + 1) == 0) {
      psVar8 = &DAT_143f3eda8;
    }
    else {
      psVar8 = (short *)*puVar7;
    }
    lVar6 = (longlong)puVar9 - (longlong)psVar8;
    do {
      sVar1 = *psVar8;
      sVar2 = *(short *)((longlong)psVar8 + lVar6);
      if (sVar1 != sVar2) break;
      psVar8 = psVar8 + 1;
    } while (sVar2 != 0);
    if (local_48 != (undefined8 *)0x0) {
      FMemory::Free();
    }
    if (sVar1 == sVar2) goto LAB_1422f1831;
  }
  puVar13 = (undefined8 *)0x0;
LAB_1422f1831:
  if (puVar10 != (undefined8 *)0x0) {
    FMemory::Free(puVar10);
  }
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return puVar13;
}



// FUNCTION 1422f18c0 FUN_1422f18c0 body=499 status=ok
// SIG undefined FUN_1422f18c0(void)

undefined8 * FUN_1422f18c0(undefined1 param_1)

{
  short sVar1;
  short sVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  short *psVar8;
  undefined2 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  int iVar16;
  undefined8 *local_48;
  int local_40;
  int local_3c;
  undefined2 *local_38;
  int local_30;
  
  FUN_1422f15a0(&local_38,0,param_1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146aef968) && (_Init_thread_header(&DAT_146aef968), DAT_146aef968 == -1))
  {
    FName::FName(&DAT_146aef960,L"AudioSpatializationPlugin",1);
    _Init_thread_footer(&DAT_146aef968);
  }
  uVar3 = DAT_146aef960;
  plVar5 = (longlong *)FUN_141593110();
  iVar16 = 0;
  local_48 = (undefined8 *)0x0;
  local_3c = 0;
  iVar11 = 0;
  iVar4 = (**(code **)(*plVar5 + 8))(plVar5,uVar3);
  iVar15 = 0;
  puVar10 = (undefined8 *)0x0;
  iVar12 = 0;
  if (0 < iVar4) {
    do {
      lVar6 = (**(code **)(*plVar5 + 0x10))(plVar5,uVar3,iVar15);
      if (lVar6 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = lVar6 + -8;
      }
      local_40 = iVar11 + 1;
      if (iVar16 < local_40) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_48,iVar11);
        iVar16 = local_3c;
      }
      iVar15 = iVar15 + 1;
      local_48[iVar11] = lVar6;
      puVar10 = local_48;
      iVar12 = local_40;
      iVar11 = local_40;
    } while (iVar15 < iVar4);
  }
  for (puVar14 = puVar10; puVar14 != puVar10 + iVar12; puVar14 = puVar14 + 1) {
    puVar13 = (undefined8 *)*puVar14;
    puVar7 = (undefined8 *)(**(code **)*puVar13)(puVar13,&local_48);
    puVar9 = &DAT_143f3eda8;
    if (local_30 != 0) {
      puVar9 = local_38;
    }
    if (*(int *)(puVar7 + 1) == 0) {
      psVar8 = &DAT_143f3eda8;
    }
    else {
      psVar8 = (short *)*puVar7;
    }
    lVar6 = (longlong)puVar9 - (longlong)psVar8;
    do {
      sVar1 = *psVar8;
      sVar2 = *(short *)((longlong)psVar8 + lVar6);
      if (sVar1 != sVar2) break;
      psVar8 = psVar8 + 1;
    } while (sVar2 != 0);
    if (local_48 != (undefined8 *)0x0) {
      FMemory::Free();
    }
    if (sVar1 == sVar2) goto LAB_1422f1a31;
  }
  puVar13 = (undefined8 *)0x0;
LAB_1422f1a31:
  if (puVar10 != (undefined8 *)0x0) {
    FMemory::Free(puVar10);
  }
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return puVar13;
}



// FUNCTION 1422f1ac0 FUN_1422f1ac0 body=329 status=ok
// SIG undefined FUN_1422f1ac0(void)

longlong FUN_1422f1ac0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (param_1 != 0) {
    lVar4 = UBlueprintGeneratedClass::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      plVar6 = *(longlong **)(param_1 + 0x208);
      plVar1 = plVar6 + *(int *)(param_1 + 0x210);
      for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
        lVar4 = *plVar6;
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x10) == param_2)) {
          return lVar4;
        }
      }
    }
    else {
      lVar4 = UDynamicClass::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        plVar6 = *(longlong **)(param_1 + 0x230);
        plVar1 = plVar6 + *(int *)(param_1 + 0x238);
        do {
          if (plVar6 == plVar1) {
            return 0;
          }
          lVar4 = *plVar6;
          if (lVar4 != 0) {
            lVar5 = UDynamicBlueprintBinding::GetPrivateStaticClass();
            lVar2 = *(longlong *)(lVar4 + 0x10);
            if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
                lVar5 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if ((bVar3) && (lVar2 == param_2)) {
              return lVar4;
            }
          }
          plVar6 = plVar6 + 1;
        } while( true );
      }
    }
  }
  return 0;
}



// FUNCTION 1422f1c10 GetFunctionCallspace body=115 status=ok
// SIG undefined GetFunctionCallspace(void)

int UBlueprintFunctionLibrary::GetFunctionCallspace(undefined8 param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = 1;
  uVar5 = *(uint *)(param_2 + 0x88) & 8;
  uVar4 = *(uint *)(param_2 + 0x88) & 4;
  if ((uVar4 != 0) || (uVar5 != 0)) {
    cVar1 = FUN_14288f6a0(DAT_146b17150);
    cVar2 = FUN_14288f630(DAT_146b17150);
    if (((uVar4 != 0) && (cVar2 != '\0')) || ((uVar5 != 0 && (cVar1 != '\0')))) {
      iVar3 = 0;
    }
  }
  return iVar3 * 2;
}



// FUNCTION 1422f1c90 GetGeneratedClassesHierarchy body=163 status=ok
// SIG undefined GetGeneratedClassesHierarchy(void)

undefined8
UBlueprintGeneratedClass::GetGeneratedClassesHierarchy(longlong param_1,longlong *param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  while( true ) {
    if (param_1 == 0) {
      return 1;
    }
    lVar3 = GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) break;
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1;
    param_1 = *(longlong *)(param_1 + 0x30);
  }
  return 1;
}



// FUNCTION 1422f1d40 FUN_1422f1d40 body=330 status=ok
// SIG undefined FUN_1422f1d40(void)

longlong FUN_1422f1d40(longlong param_1,char param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_res20 [8];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aef9f8) {
    _Init_thread_header(&DAT_146aef9f8);
    if (DAT_146aef9f8 == -1) {
      FBoolConfigValueHelper::FBoolConfigValueHelper
                (&DAT_146aef9f4,L"Kismet",L"bEnableInheritableComponents",&DAT_1468e2360);
      _Init_thread_footer(&DAT_146aef9f8);
    }
  }
  if (DAT_146aef9f4 == '\0') {
    return 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x240);
  if ((lVar3 != 0) && (DAT_1468c21ab == '\0')) {
    UInheritableComponentHandler::PreloadAll();
    lVar3 = *(longlong *)(param_1 + 0x240);
  }
  if ((lVar3 == 0) && (param_2 != '\0')) {
    plVar1 = (longlong *)FName::FName(local_res20,L"InheritableComponentHandler",1);
    lVar3 = *plVar1;
    if (lVar3 == 0) {
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
    }
    uVar2 = UInheritableComponentHandler::GetPrivateStaticClass();
    lVar3 = FUN_1417985e0(uVar2,param_1,lVar3,0,0,0,0,0,0);
    *(longlong *)(param_1 + 0x240) = lVar3;
  }
  return lVar3;
}



// FUNCTION 1422f1e90 FUN_1422f1e90 body=281 status=ok
// SIG undefined FUN_1422f1e90(void)

void FUN_1422f1e90(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  undefined2 local_38 [2];
  uint local_34;
  undefined4 local_30;
  longlong local_28;
  longlong local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  local_20 = *(longlong *)(param_1 + 0x38);
  iVar4 = *(int *)(param_1 + 0x200);
  local_18 = 0xffffffff;
  local_14 = 0x100;
  local_12 = 0;
  local_28 = param_1;
  FUN_140472e10(&local_28);
  lVar3 = local_20;
  while ((local_20 = lVar3, lVar3 != 0 && (iVar4 != 0))) {
    if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x38) & 0x20) != 0)) {
      local_38[0] = *(undefined2 *)(lVar3 + 0x40);
      iVar4 = iVar4 + -1;
      local_34 = (uint)*(byte *)(lVar3 + 0x42);
      local_30 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_38);
    }
    local_20 = *(longlong *)(lVar3 + 0x28);
    FUN_140472e10(&local_28);
    lVar3 = local_20;
  }
  plVar1 = *(longlong **)(param_1 + 0x30);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UBlueprintGeneratedClass::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x370))(plVar1,param_2);
    }
  }
  return;
}



// FUNCTION 1422f1fb0 FUN_1422f1fb0 body=232 status=ok
// SIG undefined FUN_1422f1fb0(void)

void FUN_1422f1fb0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_142231c90();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146aef998) && (_Init_thread_header(&DAT_146aef998), DAT_146aef998 == -1))
  {
    uVar1 = AEquipmentSkin::GetPrivateStaticClass();
    AEquipmentSkin::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bEnabled",1);
    DAT_146aef990 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146aef998);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146aef990 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146aef990 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146aef990 + 0x30));
  }
  return;
}



// FUNCTION 1422f20a0 GetLoadedChunk body=290 status=ok
// SIG undefined GetLoadedChunk(void)

ulonglong FAudioStreamingManager::GetLoadedChunk
                    (longlong param_1,undefined8 param_2,int param_3,undefined4 *param_4)

{
  longlong lVar1;
  BOOL BVar2;
  int *piVar3;
  int *piVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int local_res8 [2];
  
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf8));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf8));
  }
  if (DAT_146aef57c < 1) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x10,local_res8,param_2);
    uVar5 = 0;
    uVar7 = 0;
    uVar8 = uVar5;
    if (((local_res8[0] != -1) &&
        (lVar1 = *(longlong *)(param_1 + 0x10) + (longlong)local_res8[0] * 0x18, lVar1 != 0)) &&
       (lVar1 = *(longlong *)(lVar1 + 8), uVar8 = uVar7, lVar1 != 0)) {
      piVar4 = *(int **)(lVar1 + 0x28);
      piVar3 = piVar4 + *(int *)(lVar1 + 0x30);
      for (; piVar4 != piVar3; piVar4 = piVar4 + 1) {
        if (*piVar4 == param_3) {
          if (0 < *(int *)(lVar1 + 0x18)) {
            piVar3 = (int *)(*(longlong *)(lVar1 + 0x10) + 0x1c);
            uVar7 = uVar5;
            goto LAB_1422f2167;
          }
          break;
        }
      }
    }
  }
  else {
    uVar8 = 0;
  }
  goto LAB_1422f219e;
  while( true ) {
    uVar7 = (ulonglong)(iVar6 + 1);
    uVar5 = uVar5 + 1;
    piVar3 = piVar3 + 8;
    if ((longlong)*(int *)(lVar1 + 0x18) <= (longlong)uVar5) break;
LAB_1422f2167:
    iVar6 = (int)uVar7;
    if (*piVar3 == param_3) {
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = *(undefined4 *)((longlong)iVar6 * 0x20 + 0x18 + *(longlong *)(lVar1 + 0x10));
      }
      uVar8 = *(ulonglong *)((longlong)iVar6 * 0x20 + *(longlong *)(lVar1 + 0x10));
      break;
    }
  }
LAB_1422f219e:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf8));
  return uVar8;
}



// FUNCTION 1422f21d0 FUN_1422f21d0 body=5 status=ok
// SIG undefined FUN_1422f21d0(void)

undefined1 FUN_1422f21d0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x7d);
}



// FUNCTION 1422f21e0 GetParentBoneIndex body=20 status=ok
// SIG undefined GetParentBoneIndex(void)

undefined4 * FBoneContainer::GetParentBoneIndex(longlong param_1,undefined4 *param_2,int *param_3)

{
  *param_2 = *(undefined4 *)(*(longlong *)(param_1 + 0x90) + (longlong)*param_3 * 4);
  return param_2;
}



// FUNCTION 1422f2200 GetParentBoneIndex body=19 status=ok
// SIG undefined GetParentBoneIndex(void)

undefined4 FBoneContainer::GetParentBoneIndex(longlong param_1,int param_2)

{
  return *(undefined4 *)
          (*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x20) + 8 + (longlong)param_2 * 0x10);
}



// FUNCTION 1422f2220 FUN_1422f2220 body=126 status=ok
// SIG undefined FUN_1422f2220(void)

undefined8 FUN_1422f2220(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    cVar1 = FUN_1422fc1b0();
    if ((((cVar1 != '\0') && (*(longlong *)(param_1 + 0x248) != 0)) &&
        (*(longlong *)(param_1 + 0x250) != 0)) && (*(longlong *)(param_1 + 0x250) == param_3)) {
      return *(undefined8 *)(*(int *)(*(longlong *)(param_1 + 0x248) + 0x44) + param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001422f2297. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x310))
                    (*(longlong **)(param_1 + 0x30),param_2,param_3);
  return uVar2;
}



// FUNCTION 1422f22a0 GetPlatformSettings body=450 status=ok
// SIG undefined GetPlatformSettings(void)

int * FAudioPlatformSettings::GetPlatformSettings(int *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  wchar_t *pwVar4;
  wchar_t *local_18;
  undefined8 local_10;
  
  *param_1 = 48000;
  param_1[4] = 0;
  param_1[1] = 0x400;
  param_1[2] = 2;
  param_1[3] = 0;
  local_18 = (wchar_t *)0x0;
  local_10 = 0;
  cVar1 = FConfigCacheIni::GetString
                    (DAT_1468b6148,param_2,L"AudioSampleRate",&local_18,&DAT_1468e2360);
  if (cVar1 != '\0') {
    pwVar4 = L"";
    if ((int)local_10 != 0) {
      pwVar4 = local_18;
    }
    iVar2 = _wtoi(pwVar4);
    iVar3 = 8000;
    if (7999 < iVar2) {
      iVar3 = iVar2;
    }
    *param_1 = iVar3;
  }
  cVar1 = FConfigCacheIni::GetString
                    (DAT_1468b6148,param_2,L"AudioCallbackBufferFrameSize",&local_18,&DAT_1468e2360)
  ;
  if (cVar1 != '\0') {
    pwVar4 = L"";
    if ((int)local_10 != 0) {
      pwVar4 = local_18;
    }
    iVar2 = _wtoi(pwVar4);
    iVar3 = 0x100;
    if (0xff < iVar2) {
      iVar3 = iVar2;
    }
    param_1[1] = iVar3;
  }
  cVar1 = FConfigCacheIni::GetString
                    (DAT_1468b6148,param_2,L"AudioNumBuffersToEnqueue",&local_18,&DAT_1468e2360);
  if (cVar1 != '\0') {
    pwVar4 = L"";
    if ((int)local_10 != 0) {
      pwVar4 = local_18;
    }
    iVar2 = _wtoi(pwVar4);
    iVar3 = 1;
    if (0 < iVar2) {
      iVar3 = iVar2;
    }
    param_1[2] = iVar3;
  }
  cVar1 = FConfigCacheIni::GetString
                    (DAT_1468b6148,param_2,L"AudioMaxChannels",&local_18,&DAT_1468e2360);
  if (cVar1 != '\0') {
    pwVar4 = L"";
    if ((int)local_10 != 0) {
      pwVar4 = local_18;
    }
    iVar2 = _wtoi(pwVar4);
    iVar3 = 0;
    if (-1 < iVar2) {
      iVar3 = iVar2;
    }
    param_1[3] = iVar3;
  }
  cVar1 = FConfigCacheIni::GetString
                    (DAT_1468b6148,param_2,L"AudioNumSourceWorkers",&local_18,&DAT_1468e2360);
  if (cVar1 != '\0') {
    pwVar4 = L"";
    if ((int)local_10 != 0) {
      pwVar4 = local_18;
    }
    iVar2 = _wtoi(pwVar4);
    iVar3 = 0;
    if (-1 < iVar2) {
      iVar3 = iVar2;
    }
    param_1[4] = iVar3;
  }
  if (local_18 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1422f2470 FUN_1422f2470 body=9 status=ok
// SIG undefined FUN_1422f2470(void)

void FUN_1422f2470(longlong param_1)

{
  FReferenceSkeleton::FindBoneIndex(*(undefined8 *)(param_1 + 0x48));
  return;
}



// FUNCTION 1422f2480 GetPreloadDependencies body=167 status=ok
// SIG undefined GetPreloadDependencies(void)

void UBlueprint::GetPreloadDependencies(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  UObject::GetPreloadDependencies();
  if (*(longlong *)(param_1 + 0x58) != 0) {
    lVar3 = UObject::GetPrivateStaticClass();
    lVar4 = *(longlong *)(param_1 + 0x58);
    for (lVar2 = lVar4; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar3) goto joined_r0x0001422f24c3;
    }
  }
  lVar4 = 0;
joined_r0x0001422f24c3:
  while ((lVar4 != 0 && ((*(uint *)(lVar4 + 0xb4) >> 7 & 1) == 0))) {
    if (*(longlong *)(lVar4 + 200) != 0) {
      iVar1 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar4 + 200);
    }
    lVar4 = *(longlong *)(lVar4 + 0x30);
  }
  return;
}



// FUNCTION 1422f2530 FUN_1422f2530 body=349 status=ok
// SIG undefined FUN_1422f2530(void)

void FUN_1422f2530(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *local_res8;
  undefined1 *local_18;
  longlong **pplStack_10;
  
  UStruct::GetPreloadDependencies();
  plVar2 = (longlong *)param_1[6];
  lVar3 = plVar2[0x1f];
  if (lVar3 == 0) {
    (**(code **)(*plVar2 + 0x368))(plVar2);
    lVar3 = plVar2[0x1f];
  }
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar3;
  lVar3 = param_1[0x4a];
  if (lVar3 != 0) {
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar3;
  }
  if (param_1[0x1f] == 0) {
    (**(code **)(*param_1 + 0x368))(param_1);
    if (param_1[0x1f] == 0) goto LAB_1422f2620;
  }
  pplStack_10 = &local_res8;
  local_18 = &LAB_1422e7370;
  local_res8 = param_2;
  FUN_1417a4830(0x422e7370,&local_18,1,0,0);
LAB_1422f2620:
  lVar3 = param_1[0x48];
  if (lVar3 != 0) {
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar3;
  }
  lVar3 = param_1[0x47];
  if (lVar3 != 0) {
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar3;
  }
  return;
}



// FUNCTION 1422f2690 GetPrimaryAssetId body=67 status=ok
// SIG undefined GetPrimaryAssetId(void)

undefined8 * UBlueprintGeneratedClass::GetPrimaryAssetId(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 local_18 [16];
  
  *param_2 = 0;
  param_2[1] = 0;
  plVar1 = *(longlong **)(param_1 + 0xf8);
  if (plVar1 != (longlong *)0x0) {
    puVar2 = (undefined8 *)(**(code **)(*plVar1 + 400))(plVar1,local_18);
    *param_2 = *puVar2;
    param_2[1] = puVar2[1];
  }
  return param_2;
}



// FUNCTION 1422f26e0 GetQualityLevelSettings body=47 status=ok
// SIG undefined GetQualityLevelSettings(void)

longlong UAudioSettings::GetQualityLevelSettings(longlong param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 0) {
    return *(longlong *)(param_1 + 0xc0);
  }
  iVar1 = *(int *)(param_1 + 200) + -1;
  if (param_2 < iVar1) {
    iVar1 = param_2;
  }
  return (longlong)iVar1 * 0x20 + *(longlong *)(param_1 + 0xc0);
}



// FUNCTION 1422f2710 FUN_1422f2710 body=320 status=ok
// SIG undefined FUN_1422f2710(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1422f2710(void)

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
  
  if (DAT_146aefa28 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_1422f2850;
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
        return *(undefined8 *)(DAT_146aefa28 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146aefa28 = 0;
        return _DAT_00000030;
      }
      DAT_146aefa28 = FUN_1422e09f0(lVar7);
      return *(undefined8 *)(DAT_146aefa28 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = FUN_1422e09f0(lVar7);
    }
    LOCK();
    if (DAT_146aefa28 != 0) {
      lVar7 = DAT_146aefa28;
    }
    DAT_146aefa28 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146aefa28 + 0x30);
}



// FUNCTION 1422f2860 FUN_1422f2860 body=96 status=ok
// SIG undefined FUN_1422f2860(void)

longlong FUN_1422f2860(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x38);
  if (((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x360), lVar1 != 0)) &&
     (*(longlong *)(lVar1 + 0x38) == *param_2)) {
    return lVar1 + 0x40;
  }
  uVar2 = FWeakObjectPtr::Get(param_1 + 0x40);
  lVar1 = USkeleton::GetRefLocalPoses(uVar2,*param_2);
  return lVar1;
}



// FUNCTION 1422f28c0 FUN_1422f28c0 body=1243 status=ok
// SIG undefined FUN_1422f28c0(void)

longlong * FUN_1422f28c0(longlong param_1,longlong *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char cVar13;
  int iVar14;
  longlong lVar15;
  undefined8 uVar16;
  longlong lVar17;
  longlong *plVar18;
  undefined4 *puVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong *plVar22;
  float fVar23;
  float fVar24;
  int local_res8 [2];
  longlong *local_res10;
  longlong *local_res18;
  float local_108;
  float local_104;
  float local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  
  lVar15 = *param_2;
  plVar22 = (longlong *)(param_1 + 0xd8);
  plVar20 = (longlong *)0x0;
  if (*(int *)(param_1 + 0xe0) != *(int *)(param_1 + 0x10c)) {
    lVar17 = *(longlong *)(param_1 + 0x118);
    if (*(longlong *)(param_1 + 0x118) == 0) {
      lVar17 = param_1 + 0x110;
    }
    iVar14 = *(int *)(lVar17 + ((longlong)((int)((ulonglong)lVar15 >> 0x20) + (int)lVar15) &
                               (longlong)*(int *)(param_1 + 0x120) - 1U) * 4);
    if (iVar14 != -1) {
      do {
        plVar18 = (longlong *)((longlong)iVar14 * 0x30 + *plVar22);
        if (*plVar18 == lVar15) {
          if (iVar14 != -1) goto LAB_1422f2955;
          break;
        }
        iVar14 = (int)plVar18[5];
      } while (iVar14 != -1);
    }
  }
  plVar18 = plVar20;
LAB_1422f2955:
  plVar21 = plVar18 + 1;
  if (plVar18 == (longlong *)0x0) {
    plVar21 = plVar20;
  }
  if (plVar21 == (longlong *)0x0) {
    local_res10 = param_2;
    FUN_1422dda50(plVar22,local_res8,&local_res10,0);
    plVar21 = (longlong *)(*plVar22 + (longlong)local_res8[0] * 0x30 + 8);
    lVar15 = FWeakObjectPtr::Get(param_1 + 0x38);
    if (((lVar15 == 0) || (lVar15 = *(longlong *)(lVar15 + 0x360), lVar15 == 0)) ||
       (*(longlong *)(lVar15 + 0x38) != *param_2)) {
      uVar16 = FWeakObjectPtr::Get(param_1 + 0x40);
      local_res18 = (longlong *)USkeleton::GetRefLocalPoses(uVar16,*param_2);
    }
    else {
      local_res18 = (longlong *)(lVar15 + 0x40);
    }
    iVar14 = *(int *)(param_1 + 8);
    *(undefined4 *)(plVar21 + 3) = 0;
    local_res8[0] = iVar14;
    if (0x7fffffff < *(uint *)((longlong)plVar21 + 0x1c)) {
      TArray<float,FDefaultAllocator>::ResizeTo(plVar21 + 2,0);
    }
    plVar22 = plVar20;
    if (0 < iVar14) {
      do {
        lVar15 = *(longlong *)(param_1 + 0x70);
        iVar14 = *(int *)(lVar15 + (longlong)plVar20 * 4);
        lVar17 = FWeakObjectPtr::Get(param_1 + 0x38);
        if ((lVar17 == 0) || (*(longlong *)(lVar17 + 0x360) == 0)) {
          lVar17 = FWeakObjectPtr::Get(param_1 + 0x40);
          if ((iVar14 < 0) || (*(int *)(lVar17 + 0x40) <= iVar14)) {
            cVar13 = '\0';
          }
          else {
            cVar13 = *(char *)(*(longlong *)(lVar17 + 0x38) + 0xc + (longlong)iVar14 * 0x10);
          }
        }
        else {
          cVar13 = FUN_1422aa630(*(longlong *)(lVar17 + 0x360),iVar14);
        }
        if (cVar13 == '\x04') {
          pfVar1 = (float *)(*local_res18 + 0x10 +
                            (longlong)*(int *)(lVar15 + (longlong)plVar20 * 4) * 0x30);
          fVar2 = *pfVar1;
          fVar3 = pfVar1[1];
          uVar8 = *(undefined8 *)pfVar1;
          fVar4 = pfVar1[2];
          pfVar1 = (float *)(*(longlong *)(param_1 + 0xa0) + 0x10 + (longlong)plVar22);
          fVar5 = *pfVar1;
          fVar6 = pfVar1[1];
          uVar16 = *(undefined8 *)pfVar1;
          fVar7 = pfVar1[2];
          if (((0.001 < ABS(fVar2 - fVar5)) || (0.001 < ABS(fVar3 - fVar6))) ||
             (0.001 < ABS(fVar4 - fVar7))) {
            fVar23 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar4 * fVar4);
            fVar24 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar7 * fVar7);
            if (1e-08 < fVar24 * fVar23) {
              local_100 = 1.0 / fVar24;
              fVar23 = 1.0 / fVar23;
              local_108 = fVar5 * local_100;
              local_f8 = fVar2 * fVar23;
              local_104 = fVar6 * local_100;
              local_100 = fVar7 * local_100;
              local_f4 = fVar3 * fVar23;
              local_f0 = fVar4 * fVar23;
              FQuat::FindBetweenNormals(&local_e8,&local_f8,&local_108);
              uVar12 = local_dc;
              uVar11 = local_e0;
              uVar10 = local_e4;
              uVar9 = local_e8;
              iVar14 = (int)plVar21[1];
              *(int *)(plVar21 + 1) = iVar14 + 1;
              if (*(int *)((longlong)plVar21 + 0xc) < iVar14 + 1) {
                TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar21,iVar14);
              }
              puVar19 = (undefined4 *)((longlong)iVar14 * 0x30 + *plVar21);
              *puVar19 = uVar9;
              puVar19[1] = uVar10;
              puVar19[2] = uVar11;
              puVar19[3] = uVar12;
              *(undefined8 *)(puVar19 + 5) = uVar8;
              puVar19[7] = fVar4;
              *(undefined8 *)(puVar19 + 8) = uVar16;
              puVar19[10] = fVar7;
              puVar19[4] = fVar23 * fVar24;
              if ((int)plVar21[3] == 0) {
                local_res10 = (longlong *)CONCAT44(local_res10._4_4_,0xffffffff);
                TArray<int,FDefaultAllocator>::Init(plVar21 + 2,&local_res10,local_res8[0]);
              }
              *(int *)(plVar21[2] + (longlong)plVar20 * 4) = iVar14;
            }
          }
        }
        plVar20 = (longlong *)((longlong)plVar20 + 1);
        plVar22 = plVar22 + 6;
      } while ((longlong)plVar20 < (longlong)local_res8[0]);
    }
  }
  return plVar21;
}



// FUNCTION 1422f2e50 GetWaveRequest body=234 status=ok
// SIG undefined GetWaveRequest(void)

longlong FAudioStreamingManager::GetWaveRequest(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  int local_res8 [2];
  undefined8 local_res10;
  undefined8 *local_res18 [2];
  
  plVar1 = (longlong *)(param_1 + 0x70);
  local_res10 = param_2;
  TSet<TTuple<UObject_*,FTraceRouteRecord>,TDefaultMapHashableKeyFuncs<UObject_*,FTraceRouteRecord,0>,FDefaultSetAllocator>
  ::FindId(plVar1,local_res8,param_2);
  lVar6 = 0;
  if (local_res8[0] != -1) {
    lVar6 = *plVar1 + (longlong)local_res8[0] * 0x28;
  }
  lVar5 = lVar6 + 8;
  if (lVar6 == 0) {
    lVar5 = 0;
  }
  if (lVar5 == 0) {
    local_res18[0] = &local_res10;
    FUN_1422dd7e0(plVar1,local_res8,local_res18,0);
    piVar3 = *(int **)(*plVar1 + 8 + (longlong)local_res8[0] * 0x28);
    lVar6 = *plVar1 + (longlong)local_res8[0] * 0x28;
    iVar2 = *(int *)(lVar6 + 0x10);
    for (piVar4 = piVar3; piVar4 != piVar3 + iVar2; piVar4 = piVar4 + 1) {
      if (*piVar4 == 0) {
        if ((int)((longlong)piVar4 - (longlong)piVar3 >> 2) != -1) goto LAB_1422f2f26;
        break;
      }
    }
    *(int *)(lVar6 + 0x10) = iVar2 + 1;
    if (*(int *)(lVar6 + 0x14) < iVar2 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar6 + 8);
    }
    *(undefined4 *)((longlong)iVar2 * 4 + *(longlong *)(lVar6 + 8)) = 0;
LAB_1422f2f26:
    lVar5 = lVar6 + 8;
    *(undefined1 *)(lVar6 + 0x18) = 0;
  }
  return lVar5;
}



// FUNCTION 1422f2f40 FUN_1422f2f40 body=408 status=ok
// SIG undefined FUN_1422f2f40(void)

undefined4 * FUN_1422f2f40(longlong *param_1,undefined4 *param_2)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  
  lVar2 = *param_1;
  *param_2 = *(undefined4 *)(DAT_146b17150 + 0x850);
  cVar3 = (**(code **)(lVar2 + 0x6f0))();
  if (cVar3 == '\0') {
    cVar3 = (**(code **)(*param_1 + 0x6f8))(param_1);
    if (cVar3 == '\0') {
      cVar3 = (**(code **)(*param_1 + 0x700))(param_1);
      if (cVar3 != '\0') {
        if ((*(byte *)((longlong)param_1 + 0x464) & 1) != 0) goto LAB_1422f309f;
        *param_2 = *(undefined4 *)(DAT_146b17150 + 0x87c);
      }
      return param_2;
    }
    if ((*(byte *)((longlong)param_1 + 0x464) & 1) == 0) {
      *param_2 = *(undefined4 *)(DAT_146b17150 + 0x878);
      return param_2;
    }
  }
  else if ((*(byte *)((longlong)param_1 + 0x464) & 1) == 0) {
    if ((char)param_1[0x8b] == '\x02') {
      *param_2 = *(undefined4 *)(DAT_146b17150 + 0x858);
      return param_2;
    }
    if ((char)param_1[0x8b] != '\x01') {
      *param_2 = *(undefined4 *)(DAT_146b17150 + 0x850);
      return param_2;
    }
    uVar1 = *(uint *)(param_1 + 0x8c);
    if ((uVar1 >> 0x1a & 1) != 0) {
      *param_2 = *(undefined4 *)(DAT_146b17150 + 0x85c);
      return param_2;
    }
    if ((uVar1 & 8) != 0) {
      *param_2 = *(undefined4 *)(DAT_146b17150 + 0x860);
      return param_2;
    }
    if ((uVar1 & 0x20) != 0) {
      *param_2 = *(undefined4 *)(DAT_146b17150 + 0x868);
      return param_2;
    }
    *param_2 = *(undefined4 *)(DAT_146b17150 + 0x854);
    return param_2;
  }
LAB_1422f309f:
  *param_2 = *(undefined4 *)((longlong)param_1 + 0x45c);
  return param_2;
}



// FUNCTION 1422f3100 HasPendingRequests body=542 status=ok
// SIG undefined HasPendingRequests(void)

longlong FStreamingWaveData::HasPendingRequests
                   (longlong param_1,longlong *param_2,ulonglong *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint7 uVar4;
  int *piVar5;
  int *piVar6;
  ulonglong uVar7;
  int *piVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar9 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_3,0);
  }
  piVar3 = *(int **)(param_1 + 0x38);
  uVar10 = (longlong)*(int *)(param_1 + 0x40) & 0x3fffffffffffffff;
  if (piVar3 + *(int *)(param_1 + 0x40) < piVar3) {
    uVar10 = uVar9;
  }
  uVar7 = uVar9;
  if (uVar10 != 0) {
    do {
      piVar5 = *(int **)(param_1 + 0x28);
      iVar1 = *piVar3;
      piVar8 = piVar5 + *(int *)(param_1 + 0x30);
      for (; piVar5 != piVar8; piVar5 = piVar5 + 1) {
        if (*piVar5 == iVar1) goto LAB_1422f3212;
      }
      piVar8 = (int *)*param_2;
      iVar2 = (int)param_2[1];
      for (piVar5 = piVar8; piVar5 != piVar8 + iVar2; piVar5 = piVar5 + 1) {
        if (*piVar5 == iVar1) {
          if ((int)((longlong)piVar5 - (longlong)piVar8 >> 2) != -1) goto LAB_1422f3212;
          break;
        }
      }
      *(int *)(param_2 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
      }
      *(int *)((longlong)iVar2 * 4 + *param_2) = iVar1;
LAB_1422f3212:
      piVar3 = piVar3 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar10);
  }
  piVar8 = *(int **)(param_1 + 0x28);
  piVar3 = piVar8 + *(int *)(param_1 + 0x30);
  uVar10 = (longlong)*(int *)(param_1 + 0x30) & 0x3fffffffffffffff;
  if (piVar3 < piVar8) {
    uVar10 = uVar9;
  }
  if (uVar10 != 0) {
    do {
      piVar3 = *(int **)(param_1 + 0x38);
      iVar1 = *piVar8;
      piVar5 = piVar3 + *(int *)(param_1 + 0x40);
      for (; piVar3 != piVar5; piVar3 = piVar3 + 1) {
        if (*piVar3 == iVar1) goto LAB_1422f32cf;
      }
      piVar5 = (int *)*param_3;
      iVar2 = (int)param_3[1];
      piVar3 = piVar5 + iVar2;
      for (piVar6 = piVar5; piVar6 != piVar3; piVar6 = piVar6 + 1) {
        if (*piVar6 == iVar1) {
          if ((int)((longlong)piVar6 - (longlong)piVar5 >> 2) != -1) goto LAB_1422f32cf;
          break;
        }
      }
      *(int *)(param_3 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3,iVar2);
      }
      piVar3 = (int *)*param_3;
      piVar3[iVar2] = iVar1;
LAB_1422f32cf:
      piVar8 = piVar8 + 1;
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar10);
  }
  uVar4 = (uint7)((ulonglong)piVar3 >> 8);
  if (((int)param_2[1] < 1) && ((int)param_3[1] < 1)) {
    return (ulonglong)uVar4 << 8;
  }
  return CONCAT71(uVar4,1);
}



// FUNCTION 1422f3320 FUN_1422f3320 body=23 status=ok
// SIG undefined FUN_1422f3320(void)

undefined4 FUN_1422f3320(void)

{
  DAT_1468c21cc = GetCurrentThreadId();
  return 1;
}



// FUNCTION 1422f3340 FUN_1422f3340 body=660 status=ok
// SIG undefined FUN_1422f3340(void)

void FUN_1422f3340(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  void *_Src;
  ulonglong uVar9;
  void *_Dst;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong *local_58;
  longlong *local_50;
  uint local_48;
  
  plVar3 = *(longlong **)(param_1 + 0x70);
  iVar1 = (int)param_4[1];
  iVar2 = (int)param_3[1];
  uVar10 = *(uint *)((longlong)plVar3 + 0x34);
  uVar11 = (ulonglong)(int)uVar10;
  local_58 = plVar3;
  local_50 = param_3;
  local_48 = uVar10;
  if (iVar2 < iVar1) {
    FUN_14174ff60(&local_58,iVar1 - iVar2);
  }
  else if (iVar1 < iVar2) {
    uVar12 = iVar2 - iVar1;
    if ((plVar3[7] & 0x1040000000U) == 0) {
      if (iVar2 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = (longlong)(int)(uVar10 * iVar1) + *param_3;
      }
      if (0 < (int)uVar12) {
        uVar9 = (ulonglong)uVar12;
        do {
          if ((~(byte)((ulonglong)plVar3[7] >> 0x24) & 1) != 0) {
            (**(code **)(*plVar3 + 0x328))(plVar3,lVar8);
          }
          lVar8 = lVar8 + uVar11;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
        uVar11 = (ulonglong)local_48;
      }
    }
    uVar10 = (uint)uVar11;
    if (uVar12 != 0) {
      iVar5 = (int)param_3[1];
      iVar7 = (iVar5 - uVar12) - iVar1;
      if (iVar7 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)(int)(uVar10 * iVar1) + *param_3),
                   (void *)((longlong)(int)(iVar2 * uVar10) + *param_3),
                   (longlong)(int)(uVar10 * iVar7));
        iVar5 = (int)param_3[1];
      }
      *(uint *)(param_3 + 1) = iVar5 - uVar12;
      FScriptArray::ResizeShrink(param_3,uVar11 & 0xffffffff);
    }
  }
  do {
    if (param_2 == 0) {
      return;
    }
    if ((int)param_3[1] == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = (void *)((longlong)(int)(uVar10 * *(int *)(param_2 + 8)) + *param_3);
    }
    if ((int)param_4[1] == 0) {
      _Src = (void *)0x0;
    }
    else {
      _Src = (void *)((longlong)(int)(uVar10 * *(int *)(param_2 + 8)) + *param_4);
    }
    lVar8 = *(longlong *)(param_1 + 0x70);
    if (lVar8 == 0) {
LAB_1422f350f:
      lVar8 = *(longlong *)(param_1 + 0x70);
      if (lVar8 != 0) {
        lVar6 = UArrayProperty::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          FUN_1422f3340(lVar8,*(undefined8 *)(param_2 + 0x10),_Dst,_Src);
          goto LAB_1422f359f;
        }
      }
      plVar3 = *(longlong **)(param_1 + 0x70);
      if (_Dst != _Src) {
        if ((*(uint *)(plVar3 + 7) >> 0x1e & 1) == 0) {
          (**(code **)(*plVar3 + 0x2e8))(plVar3,_Dst,_Src,(int)plVar3[6]);
        }
        else {
          _guard_xfg_dispatch_icall_nop
                    (_Dst,_Src,(longlong)(*(int *)((longlong)plVar3 + 0x34) * (int)plVar3[6]));
        }
      }
    }
    else {
      lVar6 = UStructProperty::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_1422f350f;
      FUN_1422f3740(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(lVar8 + 0x70),_Dst,_Src);
    }
LAB_1422f359f:
    param_2 = *(longlong *)(param_2 + 0x18);
  } while( true );
}



// FUNCTION 1422f35e0 FUN_1422f35e0 body=347 status=ok
// SIG undefined FUN_1422f35e0(void)

void FUN_1422f35e0(longlong param_1)

{
  float fVar1;
  double dVar2;
  uint local_48;
  undefined1 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_48 = local_48 | 1;
  uStack_30 = 0x3dcccccd00000000;
  uStack_44 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  FUN_1422f9f10(0,&local_48,0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  if (*(longlong *)(param_1 + 0x140) != 0) {
    *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_1 + 0x180);
    *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x188);
    *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_1 + 400);
    *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_1 + 0x198);
    *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_1 + 0x1a0);
    *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_1 + 0x1a8);
    *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_1 + 0x1b0);
    dVar2 = DAT_1468b5a78;
    *(double *)(param_1 + 0x148) = DAT_1468b5a78;
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined8 *)(param_1 + 0x1c0) = 0x3f80000044160000;
    *(undefined8 *)(param_1 + 0x1c8) = 0x447a00003f800000;
    *(undefined8 *)(param_1 + 0x1d0) = 0x3f8000003f800000;
    *(undefined8 *)(param_1 + 0x1d8) = 0x3f80000044fa0000;
    *(undefined8 *)(param_1 + 0x1e0) = 0x461c40003f800000;
    *(undefined8 *)(param_1 + 0x1e8) = 0x3f8000003f800000;
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x140) + 0x84);
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(double *)(param_1 + 0x1b8) = (double)fVar1 + dVar2;
  }
  return;
}



// FUNCTION 1422f3740 FUN_1422f3740 body=344 status=ok
// SIG undefined FUN_1422f3740(void)

void FUN_1422f3740(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  void *_Dst;
  void *_Src;
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  
  do {
    if (param_1 == (longlong *)0x0) {
      return;
    }
    lVar1 = *param_1;
    lVar4 = (longlong)(*(int *)(lVar1 + 0x34) * (int)param_1[1]) + (longlong)*(int *)(lVar1 + 0x44);
    _Dst = (void *)(lVar4 + param_3);
    _Src = (void *)(lVar4 + param_4);
    if (lVar1 == 0) {
LAB_1422f37e8:
      lVar1 = *param_1;
      if (lVar1 != 0) {
        lVar4 = UArrayProperty::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          FUN_1422f3340(lVar1,param_1[2],_Dst,_Src);
          goto LAB_1422f3872;
        }
      }
      plVar2 = (longlong *)*param_1;
      if (_Dst != _Src) {
        if ((*(uint *)(plVar2 + 7) >> 0x1e & 1) == 0) {
          (**(code **)(*plVar2 + 0x2e8))(plVar2,_Dst,_Src,1);
        }
        else {
          _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)*(int *)((longlong)plVar2 + 0x34));
        }
      }
    }
    else {
      lVar4 = UStructProperty::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_1422f37e8;
      if (param_1[2] != 0) {
        FUN_1422f3740(param_1[2],*(undefined8 *)(lVar1 + 0x70),_Dst,_Src);
      }
    }
LAB_1422f3872:
    param_1 = (longlong *)param_1[3];
  } while( true );
}



// FUNCTION 1422f38a0 InitPropertiesFromCustomList body=131 status=ok
// SIG undefined InitPropertiesFromCustomList(void)

void UBlueprintGeneratedClass::InitPropertiesFromCustomList
               (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  BOOL BVar1;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2b8));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2b8));
  }
  if ((0 < *(int *)(param_1 + 0x2b0)) && (**(longlong **)(param_1 + 0x2a8) != 0)) {
    FUN_1422f3740(**(longlong **)(param_1 + 0x2a8),param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x0001422f391c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2b8));
  return;
}



// FUNCTION 1422f3930 FUN_1422f3930 body=47 status=ok
// SIG undefined FUN_1422f3930(void)

void FUN_1422f3930(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = FUN_1422e8b30(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 1422f3960 FUN_1422f3960 body=1678 status=ok
// SIG undefined FUN_1422f3960(void)

void FUN_1422f3960(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  uint *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  ushort uVar5;
  int iVar6;
  void *_Src;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  bool bVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  longlong *plVar19;
  undefined8 *puVar20;
  uint uVar21;
  ulonglong uVar22;
  int *piVar23;
  undefined4 *puVar24;
  ulonglong uVar25;
  longlong *plVar26;
  undefined4 uVar27;
  ulonglong uVar28;
  ulonglong local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  longlong *local_res20;
  undefined8 local_68;
  undefined1 *local_58;
  ulonglong *puStack_50;
  
  uVar22 = 0;
  param_1[9] = 0;
  local_res10 = param_2;
  uVar15 = FWeakObjectPtr::Get(param_1 + 6);
  if (uVar15 != 0) {
    lVar16 = USkeleton::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(uVar15 + 0x10) + 0x90) < *(int *)(lVar16 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar15 + 0x10) + 0x88) + (longlong)*(int *)(lVar16 + 0x90) * 8
         ) != lVar16 + 0x88)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (bVar11) {
      param_1[9] = uVar15 + 0x138;
      uVar28 = *(ulonglong *)(uVar15 + 0x48);
      uVar25 = uVar15;
      goto LAB_1422f3a24;
    }
  }
  uVar25 = 0;
  if (uVar15 != 0) {
    lVar16 = USkeleton::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(uVar15 + 0x10) + 0x90) < *(int *)(lVar16 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar15 + 0x10) + 0x88) + (longlong)*(int *)(lVar16 + 0x90) * 8
         ) != lVar16 + 0x88)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (bVar11) {
      param_1[9] = uVar15 + 0x58;
      uVar28 = uVar15;
      uVar25 = uVar22;
      goto LAB_1422f3a24;
    }
  }
  uVar28 = 0;
LAB_1422f3a24:
  FWeakObjectPtr::operator=(param_1 + 8,uVar28);
  FWeakObjectPtr::operator=(param_1 + 7,uVar25);
  lVar16 = param_1[9];
  if (uVar28 == 0) {
    iVar14 = *(int *)(lVar16 + 0x28);
  }
  else {
    iVar14 = *(int *)(uVar28 + 0x80);
    if (*(int *)(uVar28 + 0x80) <= *(int *)(lVar16 + 0x28)) {
      iVar14 = *(int *)(lVar16 + 0x28);
    }
  }
  plVar1 = param_1 + 2;
  *(undefined4 *)(param_1 + 5) = 0;
  iVar13 = (int)(iVar14 + 0x1f + (iVar14 + 0x1f >> 0x1f & 0x1fU)) >> 5;
  iVar18 = iVar13 << 5;
  if (*(int *)((longlong)param_1 + 0x2c) != iVar18) {
    *(int *)((longlong)param_1 + 0x2c) = iVar18;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(plVar1);
  }
  if (iVar14 != 0) {
    *(int *)(param_1 + 5) = iVar14;
    plVar19 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar19 = plVar1;
    }
    _guard_xfg_dispatch_icall_nop(plVar19,0,(longlong)iVar13 << 2);
  }
  lVar16 = param_1[1];
  uVar15 = uVar22;
  if (0 < (longlong)(int)lVar16) {
    do {
      uVar5 = *(ushort *)(*param_1 + uVar15 * 2);
      plVar19 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar19 = plVar1;
      }
      uVar15 = uVar15 + 1;
      puVar2 = (uint *)((longlong)plVar19 + (ulonglong)(uVar5 >> 5) * 4);
      *puVar2 = *puVar2 | 1 << ((byte)uVar5 & 0x1f);
    } while ((longlong)uVar15 < (longlong)(int)lVar16);
  }
  plVar1 = param_1 + 10;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x5c)) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  if (uVar25 == 0) {
    local_res8 = 0;
    lVar16 = USkeleton::GetRefLocalPoses(uVar28,0);
    uVar21 = *(uint *)(lVar16 + 8);
    uVar15 = (ulonglong)uVar21;
    *(undefined4 *)(param_1 + 0xb) = 0;
    if (*(uint *)((longlong)param_1 + 0x5c) != uVar21) {
      TArray<float,FDefaultAllocator>::ResizeTo(plVar1,uVar21);
    }
    if (0 < (int)uVar21) {
      do {
        iVar14 = (int)param_1[0xb];
        *(int *)(param_1 + 0xb) = iVar14 + 1;
        if (*(int *)((longlong)param_1 + 0x5c) < iVar14 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar14);
        }
        puVar24 = (undefined4 *)(*plVar1 + (longlong)iVar14 * 4);
        if (puVar24 != (undefined4 *)0x0) {
          *puVar24 = 0xffffffff;
        }
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    uVar15 = uVar22;
    uVar28 = uVar22;
    if (0 < (int)param_1[1]) {
      do {
        uVar21 = (int)uVar28 + 1;
        *(uint *)(*plVar1 + (ulonglong)*(ushort *)(uVar15 + *param_1) * 4) =
             (uint)*(ushort *)(uVar15 + *param_1);
        uVar15 = uVar15 + 2;
        uVar28 = (ulonglong)uVar21;
      } while ((int)uVar21 < (int)param_1[1]);
    }
    plVar19 = param_1 + 0xc;
    if (plVar19 != plVar1) {
      iVar14 = (int)param_1[0xb];
      _Src = (void *)*plVar1;
      *(int *)(param_1 + 0xd) = iVar14;
      if ((iVar14 == 0) && (*(int *)((longlong)param_1 + 0x6c) == 0)) {
        *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
      }
      else {
        TArray<int,FDefaultAllocator>::ResizeForCopy(plVar19,iVar14);
        _guard_xfg_dispatch_icall_nop((void *)*plVar19,_Src,(longlong)iVar14 << 2);
      }
    }
  }
  else {
    iVar14 = FUN_1422ac1a0(uVar28,uVar25);
    lVar16 = (longlong)iVar14 * 0x20 + *(longlong *)(uVar28 + 0x2e0);
    TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(plVar1,lVar16);
    TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_1 + 0xc,lVar16 + 0x10);
  }
  iVar14 = (int)param_1[1];
  lVar16 = (longlong)iVar14;
  plVar1 = param_1 + 0x12;
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (*(int *)((longlong)param_1 + 0x9c) < iVar14) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar1,iVar14);
  }
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (*(int *)((longlong)param_1 + 0xac) < iVar14) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 0x14,iVar14);
  }
  iVar13 = (int)param_1[0x15] + iVar14;
  *(int *)(param_1 + 0x15) = iVar13;
  if (*(int *)((longlong)param_1 + 0xac) < iVar13) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1 + 0x14);
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (*(int *)((longlong)param_1 + 0x7c) < iVar14) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0xe,iVar14);
  }
  iVar14 = (int)param_1[0xf] + iVar14;
  *(int *)(param_1 + 0xf) = iVar14;
  if (*(int *)((longlong)param_1 + 0x7c) < iVar14) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0xe);
  }
  plVar19 = param_1 + 0x10;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (*(int *)((longlong)param_1 + 0x8c) < (int)param_1[0xb]) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar19);
  }
  iVar14 = *(int *)(param_1[9] + 0xf8);
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (*(int *)((longlong)param_1 + 0xbc) < iVar14) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x16);
  }
  lVar7 = param_1[9];
  local_res8 = local_res8 & 0xffffffffffffff00;
  puStack_50 = &local_res8;
  local_58 = &LAB_141f794c0;
  lVar17 = FUN_1415d8310(&local_58,&DAT_146531ba8);
  lVar12 = param_1[0xd];
  *(undefined4 *)(lVar17 + 0x20) = 0;
  local_res20 = (longlong *)(lVar17 + 0x18);
  if (*(int *)(lVar17 + 0x24) < (int)lVar12) {
    TArray<float,FDefaultAllocator>::ResizeTo(local_res20);
  }
  iVar14 = (int)param_1[0xd] + (int)local_res20[1];
  *(int *)(local_res20 + 1) = iVar14;
  if (*(int *)((longlong)local_res20 + 0xc) < iVar14) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(local_res20);
    iVar14 = (int)local_res20[1];
  }
  puVar24 = (undefined4 *)*local_res20;
  uVar15 = (longlong)iVar14 & 0x3fffffffffffffff;
  if (puVar24 + iVar14 < puVar24) {
    uVar15 = uVar22;
  }
  if (uVar15 != 0) {
    for (; uVar15 != 0; uVar15 = uVar15 - 1) {
      *puVar24 = 0xffffffff;
      puVar24 = puVar24 + 1;
    }
  }
  uVar15 = uVar22;
  plVar26 = local_res20;
  uVar28 = uVar22;
  if (0 < lVar16) {
    do {
      uVar25 = (ulonglong)*(ushort *)(*param_1 + uVar15 * 2);
      *(int *)(*plVar26 + uVar25 * 4) = (int)uVar28;
      iVar14 = *(int *)(*(longlong *)(param_1[9] + 0x20) + 8 + uVar25 * 0x10);
      if (iVar14 == -1) {
        local_res18 = 0xffffffff;
      }
      else {
        local_res18 = *(undefined4 *)(*plVar26 + (longlong)iVar14 * 4);
      }
      iVar14 = (int)param_1[0x13];
      *(int *)(param_1 + 0x13) = iVar14 + 1;
      if (*(int *)((longlong)param_1 + 0x9c) < iVar14 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar14);
        plVar26 = local_res20;
      }
      uVar15 = uVar15 + 1;
      *(undefined4 *)(*plVar1 + (longlong)iVar14 * 4) = local_res18;
      uVar28 = (ulonglong)((int)uVar28 + 1);
    } while ((longlong)uVar15 < lVar16);
  }
  uVar15 = uVar22;
  uVar28 = uVar22;
  if (0 < lVar16) {
    do {
      uVar25 = uVar15 + 1;
      lVar12 = param_1[0x14];
      puVar20 = (undefined8 *)
                ((ulonglong)*(ushort *)(*param_1 + uVar15 * 2) * 0x30 + *(longlong *)(lVar7 + 0x30))
      ;
      uVar10 = puVar20[1];
      *(undefined8 *)(uVar28 + lVar12) = *puVar20;
      ((undefined8 *)(uVar28 + lVar12))[1] = uVar10;
      uVar10 = puVar20[3];
      puVar4 = (undefined8 *)(uVar28 + 0x10 + lVar12);
      *puVar4 = puVar20[2];
      puVar4[1] = uVar10;
      uVar27 = *(undefined4 *)((longlong)puVar20 + 0x24);
      uVar8 = *(undefined4 *)(puVar20 + 5);
      uVar9 = *(undefined4 *)((longlong)puVar20 + 0x2c);
      puVar24 = (undefined4 *)(uVar28 + 0x20 + lVar12);
      *puVar24 = *(undefined4 *)(puVar20 + 4);
      puVar24[1] = uVar27;
      puVar24[2] = uVar8;
      puVar24[3] = uVar9;
      uVar15 = uVar25;
      uVar28 = uVar28 + 0x30;
    } while ((longlong)uVar25 < lVar16);
  }
  uVar15 = uVar22;
  if (0 < lVar16) {
    do {
      *(undefined4 *)(param_1[0xe] + uVar15 * 4) =
           *(undefined4 *)(param_1[0xc] + (ulonglong)*(ushort *)(*param_1 + uVar15 * 2) * 4);
      uVar15 = uVar15 + 1;
    } while ((longlong)uVar15 < lVar16);
  }
  uVar15 = uVar22;
  if (0 < (int)param_1[0xb]) {
    do {
      if (*(int *)(param_1[10] + uVar15) == -1) {
        uVar27 = 0xffffffff;
      }
      else {
        uVar27 = *(undefined4 *)(*plVar26 + (longlong)*(int *)(param_1[10] + uVar15) * 4);
      }
      iVar14 = (int)param_1[0x11];
      *(int *)(param_1 + 0x11) = iVar14 + 1;
      if (*(int *)((longlong)param_1 + 0x8c) < iVar14 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar19,iVar14);
      }
      uVar21 = (int)uVar22 + 1;
      uVar22 = (ulonglong)uVar21;
      *(undefined4 *)(*plVar19 + (longlong)iVar14 * 4) = uVar27;
      plVar26 = local_res20;
      uVar15 = uVar15 + 4;
    } while ((int)uVar21 < (int)param_1[0xb]);
  }
  plVar1 = local_res20;
  piVar23 = *(int **)(param_1[9] + 0xf0);
  piVar3 = piVar23 + (longlong)*(int *)(param_1[9] + 0xf8) * 3;
  for (; piVar23 != piVar3; piVar23 = piVar23 + 3) {
    lVar16 = *plVar1;
    iVar14 = *(int *)(lVar16 + (longlong)*piVar23 * 4);
    iVar13 = *(int *)(lVar16 + (longlong)piVar23[1] * 4);
    iVar18 = *(int *)(lVar16 + (longlong)piVar23[2] * 4);
    if (((iVar14 != -1) && (iVar13 != -1)) && (iVar18 != -1)) {
      iVar6 = (int)param_1[0x17];
      local_68 = CONCAT44(iVar13,iVar14);
      *(int *)(param_1 + 0x17) = iVar6 + 1;
      if (*(int *)((longlong)param_1 + 0xbc) < iVar6 + 1) {
        TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1 + 0x16,iVar6);
      }
      lVar16 = param_1[0x16];
      *(undefined8 *)(lVar16 + (longlong)iVar6 * 0xc) = local_68;
      *(int *)(lVar16 + 8 + (longlong)iVar6 * 0xc) = iVar18;
    }
  }
  FUN_1422e70a0(param_1,local_res10);
  TSet<TTuple<FName,FRetargetSourceCachedData>,TDefaultMapHashableKeyFuncs<FName,FRetargetSourceCachedData,0>,FDefaultSetAllocator>
  ::Reset(param_1 + 0x1b);
  return;
}



// FUNCTION 1422f3ff0 FUN_1422f3ff0 body=266 status=ok
// SIG undefined FUN_1422f3ff0(void)

undefined8 FUN_1422f3ff0(longlong *param_1,undefined8 *param_2)

{
  ushort *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined2 *puVar7;
  ushort *puVar8;
  int iVar9;
  longlong local_res8;
  longlong local_28 [2];
  longlong local_18 [2];
  
  uVar3 = FName::ToString(param_1,local_18);
  puVar4 = (undefined8 *)FString::TrimStartAndEnd(uVar3,local_28);
  if (*(int *)(puVar4 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*puVar4;
  }
  FName::FName(&local_res8,puVar7,1);
  *param_1 = local_res8;
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  uVar2 = FReferenceSkeleton::FindBoneIndex(param_2[9],param_1);
  *(uint *)(param_1 + 1) = uVar2;
  uVar5 = (ulonglong)uVar2;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  if ((uVar2 == 0xffffffff) && (local_res8 = 0, *param_1 != 0)) {
    FWeakObjectPtr::Get(param_2 + 8);
    uVar5 = (ulonglong)*(uint *)(param_1 + 1);
  }
  iVar9 = (int)uVar5;
  if (iVar9 == -1) {
    uVar5 = 0xffffffff;
  }
  else if (*(char *)((longlong)param_1 + 0xc) != '\0') {
    uVar5 = (ulonglong)*(uint *)(param_2[10] + (longlong)iVar9 * 4);
  }
  puVar1 = (ushort *)*param_2;
  puVar8 = puVar1;
  do {
    if (puVar8 == puVar1 + *(int *)(param_2 + 1)) {
      uVar6 = 0xffffffff;
LAB_1422f40dd:
      *(undefined4 *)(param_1 + 2) = uVar6;
      return CONCAT71((int7)(uVar5 >> 8),iVar9 != -1);
    }
    if ((uint)*puVar8 == (uint)uVar5) {
      uVar6 = (undefined4)((longlong)puVar8 - (longlong)puVar1 >> 1);
      goto LAB_1422f40dd;
    }
    puVar8 = puVar8 + 1;
  } while( true );
}



// FUNCTION 1422f4100 Initialize body=178 status=ok
// SIG undefined Initialize(void)

bool FBoneReference::Initialize(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  longlong local_res8;
  longlong local_28 [2];
  longlong local_18 [2];
  
  if ((param_2 == 0) || (local_res8 = 0, *param_1 == 0)) {
    iVar1 = -1;
  }
  else {
    uVar2 = FName::ToString(param_1,local_18);
    puVar3 = (undefined8 *)FString::TrimStartAndEnd(uVar2,local_28);
    if (*(int *)(puVar3 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*puVar3;
    }
    FName::FName(&local_res8,puVar4,1);
    *param_1 = local_res8;
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    iVar1 = FReferenceSkeleton::FindBoneIndex(param_2 + 0x58,param_1);
    *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  }
  *(int *)(param_1 + 1) = iVar1;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  return iVar1 != -1;
}



// FUNCTION 1422f41c0 FUN_1422f41c0 body=17 status=ok
// SIG undefined FUN_1422f41c0(void)

void FUN_1422f41c0(longlong param_1)

{
  if (*(char *)(param_1 + 0x90) == '\0') {
    *(undefined1 *)(param_1 + 0x90) = 1;
  }
  return;
}



// FUNCTION 1422f41e0 InitializeTo body=139 status=ok
// SIG undefined InitializeTo(void)

void FBoneContainer::InitializeTo
               (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1,iVar1);
      ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 * 2);
    }
  }
  FWeakObjectPtr::operator=(param_1 + 6,param_4);
  FUN_1422f3960(param_1,param_3);
  return;
}



// FUNCTION 1422f4270 FUN_1422f4270 body=108 status=ok
// SIG undefined FUN_1422f4270(void)

undefined8 FUN_1422f4270(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
  }
  if (((lVar2 != 0) && (lVar2 != param_2)) &&
     ((cVar1 = FUN_141790310(lVar2), cVar1 != '\0' ||
      (cVar1 = FUN_1422f4270(lVar2,param_2), cVar1 != '\0')))) {
    return 1;
  }
  return 0;
}



// FUNCTION 1422f42f0 IsFunctionImplementedInBlueprint body=106 status=ok
// SIG undefined IsFunctionImplementedInBlueprint(void)

ulonglong UBlueprintGeneratedClass::IsFunctionImplementedInBlueprint
                    (undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = FUN_141719c60(param_1,param_2,1);
  if ((uVar3 != 0) && (*(longlong *)(uVar3 + 0x20) != 0)) {
    lVar4 = GetPrivateStaticClass();
    lVar2 = *(longlong *)(*(longlong *)(uVar3 + 0x20) + 0x10);
    iVar1 = *(int *)(lVar4 + 0x90);
    uVar3 = (longlong)iVar1;
    if ((*(int *)(lVar2 + 0x90) < iVar1) ||
       (uVar3 = *(ulonglong *)(lVar2 + 0x88),
       *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar4 + 0x88)) {
      uVar3 = uVar3 & 0xffffffffffffff00;
    }
    else {
      uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
    }
    if ((char)uVar3 != '\0') {
      return CONCAT71((int7)(uVar3 >> 8),1);
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1422f4360 IsLevelBoundsRelevant body=48 status=ok
// SIG undefined IsLevelBoundsRelevant(void)

ulonglong ABrush::IsLevelBoundsRelevant(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = AActor::GetLevel();
  uVar2 = 0;
  if ((lVar1 != 0) && (uVar2 = *(ulonglong *)(lVar1 + 0xa0), param_1 != *(longlong *)(uVar2 + 8))) {
    return CONCAT71((int7)(uVar2 >> 8),1);
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1422f4390 IsManagedStreamingSoundSource body=136 status=ok
// SIG undefined IsManagedStreamingSoundSource(void)

bool FAudioStreamingManager::IsManagedStreamingSoundSource(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  BOOL BVar2;
  longlong *plVar3;
  
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf8));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf8));
  }
  plVar3 = *(longlong **)(param_1 + 0x60);
  plVar1 = plVar3 + *(int *)(param_1 + 0x68);
  for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
    if (*plVar3 == param_2) goto LAB_1422f43f0;
  }
  plVar3 = (longlong *)0x0;
LAB_1422f43f0:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf8));
  return plVar3 != (longlong *)0x0;
}



// FUNCTION 1422f4420 IsManagedStreamingSoundWave body=133 status=ok
// SIG undefined IsManagedStreamingSoundWave(void)

bool FAudioStreamingManager::IsManagedStreamingSoundWave(longlong param_1,undefined8 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar1;
  longlong lVar2;
  int local_res8 [2];
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xf8);
  BVar1 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar1 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x10,local_res8,param_2);
  if ((local_res8[0] == -1) ||
     (lVar2 = *(longlong *)(param_1 + 0x10) + (longlong)local_res8[0] * 0x18, lVar2 == 0)) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar2 + 8);
  }
  LeaveCriticalSection(lpCriticalSection);
  return lVar2 != 0;
}



// FUNCTION 1422f44d0 IsStreamingInProgress body=147 status=ok
// SIG undefined IsStreamingInProgress(void)

undefined1 FAudioStreamingManager::IsStreamingInProgress(longlong param_1,undefined8 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  undefined1 uVar2;
  BOOL BVar3;
  int local_res8 [2];
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xf8);
  BVar3 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar3 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x10),local_res8,param_2);
  if (local_res8[0] != -1) {
    lVar1 = *(longlong *)(param_1 + 0x10) + (longlong)local_res8[0] * 0x18;
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
      uVar2 = FStreamingWaveData::UpdateStreamingStatus();
      goto LAB_1422f4546;
    }
  }
  uVar2 = 0;
LAB_1422f4546:
  LeaveCriticalSection(lpCriticalSection);
  return uVar2;
}



// FUNCTION 1422f4570 FUN_1422f4570 body=272 status=ok
// SIG undefined FUN_1422f4570(void)

ulonglong FUN_1422f4570(longlong param_1)

{
  longlong *in_RAX;
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined1 local_res8 [32];
  longlong *local_18;
  int local_10;
  
  if ((param_1 == 0) || (in_RAX = (longlong *)FUN_1428cf800(), (int)in_RAX == 1))
  goto LAB_1422f4679;
  if (DAT_146aef570 == (longlong *)0x0) {
    lVar1 = operator_new(0x10);
    plVar2 = (longlong *)0x0;
    if (lVar1 != 0) {
      plVar2 = (longlong *)FUN_1422e0720(lVar1);
    }
    DAT_146aef570 = plVar2;
    plVar2 = (longlong *)FMemory::Realloc(0,0x20);
    local_10 = 2;
    local_18 = plVar2;
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_GetPoolName_143f3f048;
      plVar2[1] = (longlong)FUN_1422e9200;
      lVar1 = FDelegateHandle::GenerateNewID();
      plVar2[3] = lVar1;
      *plVar2 = (longlong)&PTR_GetPoolName_143f3f090;
      FMulticastDelegateBase<FWeakObjectPtr>::AddInternal(&DAT_1464af178,local_res8,&local_18);
      plVar2 = local_18;
      if (local_10 != 0) {
        if (local_18 == (longlong *)0x0) goto LAB_1422f465f;
        (**(code **)(*local_18 + 0x28))(local_18,0);
        plVar2 = (longlong *)FMemory::Realloc(plVar2,0,0);
      }
      if (plVar2 != (longlong *)0x0) {
        FMemory::Free(plVar2);
      }
    }
  }
LAB_1422f465f:
  in_RAX = DAT_146aef570;
  if ((longlong *)*DAT_146aef570 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001422f4675. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*(longlong *)*DAT_146aef570 + 0x28))();
    return uVar3;
  }
LAB_1422f4679:
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1422f4680 IsValidToEvaluate body=58 status=ok
// SIG undefined IsValidToEvaluate(void)

ulonglong FBoneReference::IsValidToEvaluate(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 != 0xffffffff) {
    lVar2 = *(longlong *)(param_2 + 0x20);
    if (*(longlong *)(param_2 + 0x20) == 0) {
      lVar2 = param_2 + 0x10;
    }
    uVar3 = uVar1 & 0x1f;
    uVar1 = *(uint *)(lVar2 + (ulonglong)(ushort)((ushort)uVar1 >> 5) * 4);
    if ((uVar1 >> uVar3 & 1) != 0) {
      return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    }
  }
  return (ulonglong)uVar1 & 0xffffffffffffff00;
}



// FUNCTION 1422f46c0 FUN_1422f46c0 body=219 status=ok
// SIG undefined FUN_1422f46c0(void)

void FUN_1422f46c0(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)*param_1;
  lVar5 = param_1[1];
  if (plVar4 == (longlong *)0x0) {
LAB_1422f4789:
    *param_1 = (longlong)plVar4;
    param_1[1] = lVar5;
    return;
  }
joined_r0x0001422f46e3:
  for (; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x28)) {
    uVar1 = *(ulonglong *)(*(longlong *)(lVar5 + 0x10) + 0xb8);
    if (((uVar1 >> 0x2f & 1) != 0) &&
       (((*(char *)((longlong)param_1 + 0x15) != '\0' || ((uVar1 >> 0xf & 1) == 0)) ||
        ((*(uint *)(lVar5 + 0x38) >> 0x1d & 1) == 0)))) goto LAB_1422f4789;
  }
  if (*(char *)((longlong)param_1 + 0x16) != '\0') {
    lVar2 = param_1[2];
    iVar3 = (int)lVar2 + 1;
    *(int *)(param_1 + 2) = iVar3;
    if (iVar3 < (int)plVar4[0x35]) {
      lVar5 = *(longlong *)(plVar4[0x34] + ((longlong)(int)lVar2 + 1) * 0x10);
      if (lVar5 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(longlong *)(lVar5 + 0x38);
      }
      goto joined_r0x0001422f46e3;
    }
  }
  if ((*(char *)((longlong)param_1 + 0x14) == '\0') ||
     (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4), plVar4 == (longlong *)0x0))
  goto LAB_1422f4789;
  lVar5 = plVar4[7];
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  goto joined_r0x0001422f46e3;
}



// FUNCTION 1422f47a0 FUN_1422f47a0 body=397 status=ok
// SIG undefined FUN_1422f47a0(void)

void FUN_1422f47a0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong local_48;
  longlong lStack_40;
  undefined4 local_38;
  undefined2 uStack_34;
  undefined1 uStack_32;
  undefined1 uStack_31;
  longlong local_30;
  longlong lStack_28;
  undefined8 local_20;
  
  UClass::Link();
  cVar4 = FUN_1422fc1b0();
  if ((cVar4 != '\0') && (*(longlong *)(param_1 + 0x250) != 0)) {
    (**(code **)(*param_2 + 0x70))(param_2);
    lStack_40 = *(longlong *)(param_1 + 0x38);
    local_38 = 0xffffffff;
    uStack_34 = 0x100;
    uStack_32 = 0;
    local_48 = param_1;
    FUN_14067b390(&local_48);
    lVar1 = lStack_40;
    local_20 = CONCAT17(uStack_31,CONCAT16(uStack_32,CONCAT24(uStack_34,local_38)));
    local_38 = 0xffffffff;
    local_30 = local_48;
    lStack_28 = lStack_40;
    uStack_34 = 0x101;
    local_48 = 0;
    lStack_40 = 0;
    uStack_32 = 0;
    FUN_14067b390(&local_48);
    lVar2 = lStack_40;
    if (lVar1 != lStack_40) {
      lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      do {
        lVar3 = lStack_28;
        if ((*(int *)(lVar1 + 0x38) < DAT_146aefa08) &&
           (_Init_thread_header(&DAT_146aefa08), DAT_146aefa08 == -1)) {
          FName::FName(&DAT_146aefa00,L"UberGraphFrame",1);
          _Init_thread_footer(&DAT_146aefa08);
        }
        if (*(longlong *)(lVar3 + 0x18) == DAT_146aefa00) {
          *(longlong *)(param_1 + 0x248) = lVar3;
          break;
        }
        lStack_28 = *(longlong *)(lVar3 + 0x28);
        FUN_14067b390(&local_30);
      } while (lStack_28 != lVar2);
    }
  }
  FUN_14172cc50(param_1,1);
  return;
}



// FUNCTION 1422f4930 FUN_1422f4930 body=342 status=ok
// SIG undefined FUN_1422f4930(void)

void FUN_1422f4930(char *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined **local_b8 [5];
  byte local_8f;
  byte local_8e;
  byte local_8d;
  ulonglong local_88;
  undefined8 local_50;
  undefined8 local_28;
  char *local_20;
  undefined8 local_18;
  
  if (*param_1 != '\0') {
    if (param_2 != (longlong *)0x0) {
      if ((*(uint *)(param_2 + 1) >> 10 & 1) != 0) {
        lVar1 = FUN_1417a53c0(param_2);
        if (lVar1 != 0) {
          FUN_141740c00(lVar1 + 0x200,param_2);
        }
      }
      *(longlong *)(param_1 + 0x18) = param_2[3];
      *(longlong *)(param_1 + 0x20) = param_2[2];
      *(int *)(param_1 + 0x28) = (int)param_2[1];
      uVar2 = FBlueprintCookedComponentInstancingData::GetCachedPropertyList(param_1);
      FArchive::FArchive(local_b8);
      local_18 = 0;
      local_28 = 0;
      local_b8[0] = &PTR_FUN_143f4a100;
      local_20 = param_1 + 0x40;
      FArchive::SetIsSaving(local_b8,1);
      FArchive::SetIsPersistent(local_b8,0);
      local_8e = local_8e & 0xfd;
      local_8f = local_8f & 0xdf;
      local_8d = local_8d | 0x10;
      local_b8[0] = &PTR_FUN_1450351c8;
      local_50 = uVar2;
      FUN_141695520(local_b8,1);
      local_88 = local_88 | 0x1000;
      (**(code **)(*param_2 + 0xa8))(param_2,local_b8);
      FArchive::~FArchive(local_b8);
      return;
    }
    *param_1 = '\0';
  }
  return;
}



// FUNCTION 1422f4a90 FUN_1422f4a90 body=115 status=ok
// SIG undefined FUN_1422f4a90(void)

char FUN_1422f4a90(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  
  cVar2 = FUN_1422370d0();
  plVar1 = *(longlong **)(param_1 + 0x468);
  if (plVar1 == (longlong *)0x0) {
    return cVar2;
  }
  cVar3 = (**(code **)(*plVar1 + 0x70))(plVar1,param_2);
  if ((cVar3 == '\0') && (cVar2 == '\0')) {
    return '\0';
  }
  return '\x01';
}



// FUNCTION 1422f4b10 FUN_1422f4b10 body=328 status=ok
// SIG undefined FUN_1422f4b10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1422f4b10(longlong *param_1,undefined4 param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined1 auStack_6a8 [32];
  undefined4 local_688;
  undefined8 *local_680;
  undefined8 *local_678;
  undefined8 *local_670;
  float local_668 [4];
  undefined8 local_658;
  undefined4 local_650;
  undefined8 local_648;
  undefined4 local_640;
  undefined1 local_638 [1496];
  longlong local_60;
  longlong local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_6a8;
  (**(code **)(*param_1 + 0x2c0))();
  local_650 = *(undefined4 *)((longlong)param_3 + 0x14);
  local_678 = (undefined8 *)((longlong)param_3 + 0xc);
  local_658 = *local_678;
  local_640 = *(undefined4 *)(param_3 + 1);
  local_648 = *param_3;
  local_670 = param_3 + 3;
  local_688 = *(undefined4 *)local_670;
  local_680 = param_3;
  uVar1 = FUN_14290e710(param_1,param_2,&local_648,&local_658);
  if (param_1[6] != 0) {
    local_668[0] = 0.0;
    FUN_142741540(local_638);
    uVar1 = FUN_14290e820(param_1,param_2,local_668,local_638);
    if (0.0 < local_668[0]) {
      uVar1 = FUN_1426d7aa0(param_1[6],local_638);
    }
    if (local_50 != 0) {
      uVar1 = FMemory::Free();
    }
    if (local_60 != 0) {
      uVar1 = FMemory::Free();
    }
  }
  if (((*(byte *)(param_1 + 5) & 8) != 0) && (*(float *)(param_1 + 8) <= 0.0)) {
    uVar1 = (**(code **)(*param_1 + 0x2a0))(param_1,1);
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 1422f4c60 FUN_1422f4c60 body=563 status=ok
// SIG undefined FUN_1422f4c60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1422f4c60(longlong *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  uint7 uVar3;
  ulonglong uVar2;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_6c8 [32];
  undefined4 local_6a8;
  undefined8 *local_6a0;
  undefined8 *local_698;
  undefined8 *local_690;
  float local_688 [4];
  undefined8 local_678;
  undefined4 local_670;
  undefined8 local_668;
  undefined4 local_660;
  undefined8 local_658 [187];
  longlong local_80;
  longlong local_70;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_6c8;
  (**(code **)(*param_1 + 0x2c0))();
  local_670 = *(undefined4 *)((longlong)param_3 + 0x14);
  local_698 = (undefined8 *)((longlong)param_3 + 0xc);
  local_678 = *local_698;
  local_660 = *(undefined4 *)(param_3 + 1);
  local_668 = *param_3;
  local_690 = param_3 + 3;
  local_6a8 = *(undefined4 *)local_690;
  local_6a0 = param_3;
  uVar1 = FUN_14290e710(param_1,param_2,&local_668,&local_678);
  if (param_1[6] != 0) {
    local_688[0] = 0.0;
    FUN_142741540(local_658);
    uVar1 = FUN_14290e820(param_1,param_2,local_688,local_658);
    if (0.0 < local_688[0]) {
      uVar1 = FUN_1426d7aa0(param_1[6],local_658);
    }
    if (local_70 != 0) {
      uVar1 = FMemory::Free();
    }
    if (local_80 != 0) {
      uVar1 = FMemory::Free();
    }
  }
  if ((*(byte *)(param_1 + 5) & 8) != 0) {
    bVar8 = true;
    if (0.0 < *(float *)(param_1 + 8)) goto LAB_1422f4d83;
    uVar1 = (**(code **)(*param_1 + 0x2a0))(param_1,1);
  }
  bVar8 = 0.0 < *(float *)(param_1 + 8);
LAB_1422f4d83:
  uVar3 = (uint7)((ulonglong)uVar1 >> 8);
  if (bVar8) {
    if (((int)param_1[0xc] < 1) || (iVar6 = (int)param_1[0xc] + -1, iVar6 < 0)) {
      uVar2 = (ulonglong)uVar3;
    }
    else {
      lVar5 = (longlong)iVar6 * 0x160;
      do {
        local_6a8 = CONCAT31(local_6a8._1_3_,1);
        FUN_142320040(param_1[0xb] + lVar5,param_2,(int)param_1[8],param_3);
        uVar2 = FUN_1423145c0(param_1[0xb] + lVar5);
        if ((char)uVar2 != '\0') {
          iVar7 = (int)param_1[0xc];
          iVar4 = (iVar7 - iVar6) + -1;
          if (0 < iVar4) {
            iVar4 = 1;
          }
          if (iVar4 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(param_1[0xb] + lVar5),
                       (void *)((longlong)(iVar7 - iVar4) * 0x160 + param_1[0xb]),
                       (longlong)iVar4 * 0x160);
            iVar7 = (int)param_1[0xc];
          }
          uVar2 = (ulonglong)(iVar7 - 1U);
          *(uint *)(param_1 + 0xc) = iVar7 - 1U;
        }
        lVar5 = lVar5 + -0x160;
        iVar6 = iVar6 + -1;
      } while (-1 < iVar6);
      uVar2 = uVar2 >> 8;
    }
  }
  else {
    uVar2 = (ulonglong)uVar3;
  }
  return uVar2 << 8;
}



// FUNCTION 1422f4ea0 NeedsLoadForClient body=96 status=ok
// SIG undefined NeedsLoadForClient(void)

ulonglong UBlueprintGeneratedClass::NeedsLoadForClient(longlong param_1)

{
  ulonglong uVar1;
  
  if ((DAT_1468b616c != '\0') && ((*(uint *)(param_1 + 8) >> 4 & 1) == 0)) {
    if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0xd8))();
      if ((char)uVar1 == '\0') goto LAB_1422f4eeb;
    }
    if (*(longlong **)(param_1 + 0xf8) != (longlong *)0x0) {
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0xf8) + 0xd8))();
      if ((char)uVar1 == '\0') {
LAB_1422f4eeb:
        return uVar1 & 0xffffffffffffff00;
      }
    }
  }
  uVar1 = BuildSettings::IsPromotedBuild(param_1);
  return uVar1;
}



// FUNCTION 1422f4f00 NeedsLoadForServer body=96 status=ok
// SIG undefined NeedsLoadForServer(void)

ulonglong UBlueprintGeneratedClass::NeedsLoadForServer(longlong param_1)

{
  ulonglong uVar1;
  
  if ((DAT_1468b616c != '\0') && ((*(uint *)(param_1 + 8) >> 4 & 1) == 0)) {
    if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0xe0))();
      if ((char)uVar1 == '\0') goto LAB_1422f4f4b;
    }
    if (*(longlong **)(param_1 + 0xf8) != (longlong *)0x0) {
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0xf8) + 0xe0))();
      if ((char)uVar1 == '\0') {
LAB_1422f4f4b:
        return uVar1 & 0xffffffffffffff00;
      }
    }
  }
  uVar1 = BuildSettings::IsPromotedBuild(param_1);
  return uVar1;
}



// FUNCTION 1422f4f60 FUN_1422f4f60 body=96 status=ok
// SIG undefined FUN_1422f4f60(void)

void FUN_1422f4f60(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = FUN_14290f280();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
                    /* WARNING: Could not recover jumptable at 0x0001422f4fb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x6e8))(plVar1);
      return;
    }
  }
  return;
}



// FUNCTION 1422f5010 FUN_1422f5010 body=1021 status=ok
// SIG undefined FUN_1422f5010(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1422f5010(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,float param_7,byte param_8,char param_9,
                  float param_10)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  float fVar14;
  undefined4 uVar15;
  ulonglong in_stack_ffffffffffffff88;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x28) != 0)) {
    plVar1 = *(longlong **)(param_1 + 0x30);
    uVar11 = 0;
    if (plVar1[5] != 0) {
      (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
      *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x28) = 0;
    }
    uVar9 = *(uint *)(param_1 + 0x3c) | 1;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(uint *)(param_1 + 0x3c) = uVar9;
    if (param_9 == '\0') {
      fVar14 = 0.0;
    }
    else {
      iVar6 = rand();
      uVar9 = *(uint *)(param_1 + 0x3c);
      fVar14 = (float)iVar6 * *(float *)(param_2 + 0x30) * 3.051851e-05;
    }
    *(float *)(param_1 + 0x38) = fVar14;
    *(undefined4 *)(param_1 + 0x54) = param_5;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(longlong *)(param_1 + 0x28) = param_2;
    *(uint *)(param_1 + 0x3c) = (param_8 | 2) << 2 | uVar9 & 0xffffffea;
    *(undefined4 *)(param_1 + 0x50) = param_4;
    *(undefined4 *)(param_1 + 0x40) = param_6;
    *(float *)(param_1 + 0x44) = param_7;
    if (param_10 <= 0.0) {
      param_10 = 0.0;
    }
    else {
      param_10 = param_10 - param_7;
    }
    *(float *)(param_1 + 0x60) = param_10;
    if (param_3 != 0) {
      lVar7 = FUN_14290f280();
      if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        FUN_14223c850(param_3,&DAT_1468b5d90,0,0,in_stack_ffffffffffffff88 & 0xffffffffffffff00);
        local_68 = DAT_1468b5da0;
        local_60 = DAT_1468b5da8;
        AActor::SetActorRotation(param_3,&local_68,0);
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x298))
              (*(longlong **)(param_1 + 0x30),*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x28),
               param_3);
    uVar10 = uVar11;
    uVar13 = uVar11;
    if (0 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x40)) {
      do {
        uVar12 = *(ulonglong *)
                  (uVar13 + *(longlong *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x28) + 0x30));
        if (uVar12 == 0) {
LAB_1422f521b:
          uVar12 = uVar11;
        }
        else {
          lVar7 = UInterpTrackMove::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(uVar12 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(uVar12 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (!bVar4) goto LAB_1422f521b;
        }
        *(ulonglong *)(param_1 + 0x68) = uVar12;
        if (uVar12 != 0) {
          *(undefined8 *)(param_1 + 0x70) =
               *(undefined8 *)
                (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x38) + (longlong)(int)uVar10 * 8);
          break;
        }
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
        uVar13 = uVar13 + 8;
      } while ((int)uVar9 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x40));
    }
    uVar5 = uRam00000001468b5b78;
    plVar1 = *(longlong **)(param_1 + 0x68);
    if ((plVar1 == (longlong *)0x0) || (*(longlong *)(param_1 + 0x70) == 0)) {
      *(undefined8 *)(param_1 + 0xd0) = _DAT_1468b5b70;
      *(undefined8 *)(param_1 + 0xd8) = uVar5;
      uVar5 = uRam00000001468b5b88;
      *(undefined8 *)(param_1 + 0xe0) = _DAT_1468b5b80;
      *(undefined8 *)(param_1 + 0xe8) = uVar5;
      uVar5 = uRam00000001468b5b98;
      *(undefined8 *)(param_1 + 0xf0) = _DAT_1468b5b90;
      *(undefined8 *)(param_1 + 0xf8) = uVar5;
      *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x54);
    }
    else {
      (**(code **)(*plVar1 + 0x388))(plVar1,*(longlong *)(param_1 + 0x70),0,&local_68,local_58);
      FRotator::Quaternion(local_58,&local_48);
      auVar3._8_4_ = local_60;
      auVar3._0_8_ = local_68;
      auVar2._4_4_ = DAT_1464aa788._4_4_;
      auVar2._0_4_ = (undefined4)DAT_1464aa788;
      auVar2._8_4_ = DAT_1464aa790;
      auVar2._12_4_ = 0;
      *(undefined1 (*) [16])(param_1 + 0xf0) = auVar2;
      *(undefined8 *)(param_1 + 0xd0) = local_48;
      *(undefined8 *)(param_1 + 0xd8) = uStack_40;
      auVar3._12_4_ = 0;
      *(undefined1 (*) [16])(param_1 + 0xe0) = auVar3;
      if ((*(byte *)(param_2 + 0x50) & 2) != 0) {
        *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x54);
      }
      uVar10 = uVar11;
      if (0 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x40)) {
        do {
          lVar7 = *(longlong *)
                   (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x28) + 0x30) +
                   uVar11);
          if (lVar7 != 0) {
            lVar8 = UInterpTrackFloatProp::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              if (*(longlong *)(lVar7 + 0x90) == DAT_146aef7f0) {
                if ((*(byte *)(param_2 + 0x50) & 2) != 0) {
                  uVar15 = (**(code **)(*(longlong *)(lVar7 + 0x28) + 0x30))(lVar7 + 0x28,0,0);
                  *(undefined4 *)(param_1 + 0x100) = uVar15;
                }
                *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 0x20;
                return;
              }
              if (*(longlong *)(lVar7 + 0x90) == DAT_146aef7f8) {
                *(undefined1 *)(param_1 + 0x104) = 1;
                return;
              }
            }
          }
          uVar9 = (int)uVar10 + 1;
          uVar11 = uVar11 + 8;
          uVar10 = (ulonglong)uVar9;
        } while ((int)uVar9 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x40));
      }
    }
  }
  return;
}



// FUNCTION 1422f5410 PostInitProperties body=44 status=ok
// SIG undefined PostInitProperties(void)

void UBlueprintGeneratedClass::PostInitProperties(longlong param_1)

{
  UClass::PostInitProperties();
  if ((*(uint *)(param_1 + 8) >> 4 & 1) != 0) {
    *(code **)(param_1 + 0xa8) = FUN_1417169e0;
  }
  return;
}



// FUNCTION 1422f5440 FUN_1422f5440 body=678 status=ok
// SIG undefined FUN_1422f5440(void)

void FUN_1422f5440(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong local_res8;
  undefined1 *local_e8;
  longlong *plStack_e0;
  undefined **local_d8 [5];
  byte local_af;
  byte local_ae;
  byte local_ad;
  ulonglong local_a8;
  undefined8 local_70;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  
  FUN_14171f650();
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x2f8))(param_1);
  if (plVar2 == param_1) {
    lVar7 = param_1[0x1f];
    if (lVar7 != 0) {
      plStack_e0 = &local_res8;
      local_e8 = &LAB_1422e73c0;
      local_res8 = lVar7;
      FUN_1417a4830(lVar7,&local_e8,1,0,0);
    }
    if ((0 < (int)param_1[0x4c] - *(int *)((longlong)param_1 + 0x28c)) &&
       (iVar1 = (int)param_1[0x44] + -1, lVar7 = (longlong)iVar1, -1 < iVar1)) {
      do {
        plVar2 = *(longlong **)(param_1[0x43] + lVar7 * 8);
        if (plVar2 != (longlong *)0x0) {
          lVar3 = plVar2[3];
          if ((int)param_1[0x4c] != *(int *)((longlong)param_1 + 0x28c)) {
            plVar5 = (longlong *)param_1[0x53];
            if ((longlong *)param_1[0x53] == (longlong *)0x0) {
              plVar5 = param_1 + 0x52;
            }
            iVar1 = *(int *)((longlong)plVar5 +
                            ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                            (longlong)(int)param_1[0x54] - 1U) * 4);
            if (iVar1 != -1) {
              do {
                plVar5 = (longlong *)((longlong)iVar1 * 0x60 + param_1[0x4b]);
                if (*plVar5 == lVar3) {
                  if (iVar1 != -1) goto LAB_1422f55a5;
                  break;
                }
                iVar1 = (int)plVar5[0xb];
              } while (iVar1 != -1);
            }
          }
          plVar5 = (longlong *)0x0;
LAB_1422f55a5:
          plVar6 = plVar5 + 1;
          if (plVar5 == (longlong *)0x0) {
            plVar6 = (longlong *)0x0;
          }
          if ((plVar6 != (longlong *)0x0) && ((char)*plVar6 != '\0')) {
            if (((*(uint *)(plVar2 + 1) >> 10 & 1) != 0) &&
               (lVar3 = FUN_1417a53c0(plVar2), lVar3 != 0)) {
              FUN_141740c00(lVar3 + 0x200,plVar2);
            }
            plVar6[3] = plVar2[3];
            plVar6[4] = plVar2[2];
            *(int *)(plVar6 + 5) = (int)plVar2[1];
            uVar4 = FBlueprintCookedComponentInstancingData::GetCachedPropertyList(plVar6);
            local_res8 = 0;
            FArchive::FArchive(local_d8);
            local_48 = 0;
            local_38 = 0;
            local_d8[0] = &PTR_FUN_143f4a100;
            local_40 = plVar6 + 8;
            FArchive::SetIsSaving(local_d8,1);
            FArchive::SetIsPersistent(local_d8,0);
            local_ae = local_ae & 0xfd;
            local_af = local_af & 0xdf;
            local_ad = local_ad | 0x10;
            local_d8[0] = &PTR_FUN_1450351c8;
            local_70 = uVar4;
            FUN_141695520(local_d8,1);
            local_a8 = local_a8 | 0x1000;
            (**(code **)(*plVar2 + 0xa8))(plVar2,local_d8);
            FArchive::~FArchive(local_d8);
          }
        }
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
    }
    FUN_14172cc50(param_1,1);
  }
  return;
}



// FUNCTION 1422f56f0 FUN_1422f56f0 body=60 status=ok
// SIG undefined FUN_1422f56f0(void)

void FUN_1422f56f0(longlong param_1)

{
  int iVar1;
  
  FUN_142349c80();
  iVar1 = UObjectBaseUtility::GetLinkerUE4Version(param_1);
  if (iVar1 < 399) {
    *(uint *)(param_1 + 0x2e8) = *(uint *)(param_1 + 0x2e8) & 0xfffffff7;
    *(uint *)(param_1 + 0x2e8) = *(uint *)(param_1 + 0x2e8) | (*(uint *)(param_1 + 0x958) & 1) << 3;
  }
  return;
}



// FUNCTION 1422f5730 FUN_1422f5730 body=148 status=ok
// SIG undefined FUN_1422f5730(void)

void FUN_1422f5730(longlong param_1,longlong *param_2)

{
  BOOL BVar1;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2b8));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2b8));
  }
  (**(code **)(*param_2 + 0x78))(param_2);
  if (param_2 == *(longlong **)(param_1 + 0xf8)) {
    FUN_1422fb790(param_1);
    if ((*(uint *)(param_1 + 0xb4) >> 2 & 1) != 0) {
      FUN_14175be70(*(undefined8 *)(param_1 + 0xf8),0,0,0,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001422f57bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2b8));
  return;
}



// FUNCTION 1422f57d0 FUN_1422f57d0 body=192 status=ok
// SIG undefined FUN_1422f57d0(void)

void FUN_1422f57d0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x168);
  lVar2 = *(longlong *)(lVar1 + 400);
  uVar3 = *(undefined8 *)(lVar1 + 0x198);
  FUN_142238540();
  iVar4 = UObjectBaseUtility::GetLinkerUE4Version(param_1);
  if (iVar4 < 0x112) {
    FUN_142399e30(*(undefined8 *)(param_1 + 0x460),lVar2,uVar3);
    FUN_142399e30(lVar1,0,0);
  }
  iVar4 = UObjectBaseUtility::GetLinkerUE4Version(param_1);
  if (iVar4 < 0x1f0) {
    lVar1 = *(longlong *)(param_1 + 0x468);
    *(longlong *)(param_1 + 0x168) = lVar1;
    if (lVar2 != lVar1) {
      FUN_142399e30(*(undefined8 *)(param_1 + 0x460),lVar1,0);
      FUN_142399e30(*(undefined8 *)(param_1 + 0x168),lVar2,uVar3);
    }
  }
  return;
}



// FUNCTION 1422f5890 FUN_1422f5890 body=337 status=ok
// SIG undefined FUN_1422f5890(void)

void FUN_1422f5890(longlong *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  longlong *local_res10;
  longlong **local_res18 [2];
  longlong *local_28;
  int local_20;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar4 = param_1[0x2d];
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_1450377f8;
    FWeakObjectPtr::operator=(plVar2 + 1,param_1);
    plVar2[2] = (longlong)&LAB_1422fafc0;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[4] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_145037840;
    FMulticastDelegateBase<FWeakObjectPtr>::AddInternal(lVar4 + 0x2b0,local_res8,&local_28);
    plVar2 = local_28;
    if (local_20 != 0) {
      if (local_28 == (longlong *)0x0) goto LAB_1422f5955;
      (**(code **)(*local_28 + 0x28))(local_28,0);
      plVar2 = (longlong *)FMemory::Realloc(plVar2,0,0);
    }
    if (plVar2 != (longlong *)0x0) {
      FMemory::Free(plVar2);
    }
  }
LAB_1422f5955:
  FUN_1422e33b0(param_1);
  lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  puVar1 = (undefined8 *)(lVar4 + 0x730);
  local_res10 = param_1;
  FUN_14058c5a0(puVar1,local_res8,&local_res10,0);
  local_res10 = (longlong *)local_res8;
  local_res8[0] = 0;
  if (0 < *(int *)(lVar4 + 0x738) - *(int *)(lVar4 + 0x764)) {
    TSparseArray<TSetElement<UClass_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Compact(puVar1);
    local_res18[0] = &local_res10;
    FUN_1422deca0(*puVar1,(longlong)(*(int *)(lVar4 + 0x738) - *(int *)(lVar4 + 0x764)),
                  local_res8[0],local_res18);
  }
  TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::Rehash(puVar1);
  return;
}



// FUNCTION 1422f59f0 PostSerialize body=127 status=ok
// SIG undefined PostSerialize(void)

void FInteriorSettings::PostSerialize(longlong param_1,longlong param_2)

{
  float fVar1;
  
  if (*(int *)(param_2 + 0x40) < 0x1ec) {
    fVar1 = *(float *)(param_1 + 0x1c);
    if ((0.0 < fVar1) && (fVar1 < 1.0)) {
      fVar1 = ::_guard_xfg_dispatch_icall_nop(fVar1 * 0.3926991);
      *(float *)(param_1 + 0x1c) = fVar1 * 40000.0;
    }
    fVar1 = *(float *)(param_1 + 0xc);
    if ((0.0 < fVar1) && (fVar1 < 1.0)) {
      fVar1 = ::_guard_xfg_dispatch_icall_nop(fVar1 * 0.3926991);
      *(float *)(param_1 + 0xc) = fVar1 * 40000.0;
    }
  }
  return;
}



// FUNCTION 1422f5a70 FUN_1422f5a70 body=2898 status=ok
// SIG undefined FUN_1422f5a70(void)

void FUN_1422f5a70(longlong param_1,longlong param_2)

{
  wchar_t *pwVar1;
  int iVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  wchar_t *local_18;
  undefined8 local_10;
  
  if (0xe8 < *(int *)(param_2 + 0x40)) {
    return;
  }
  local_10 = 0;
  local_18 = (wchar_t *)0x0;
  switch(*(undefined1 *)(param_1 + 4)) {
  case 0:
    goto LAB_1422f65b7;
  case 1:
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,0x36);
    iVar2 = (int)local_10 + 0x36;
    local_10 = CONCAT44(local_10._4_4_,iVar2);
    if (local_10._4_4_ < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18);
    }
    builtin_wcsncpy(local_18,L"/Engine/EngineSounds/ReverbSettings/Bathroom.Bathroom",0x36);
    break;
  case 2:
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,0x38);
    iVar2 = (int)local_10 + 0x38;
    local_10 = CONCAT44(local_10._4_4_,iVar2);
    if (local_10._4_4_ < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18);
    }
    builtin_wcsncpy(local_18,L"/Engine/EngineSounds/ReverbSettings/StoneRoom.StoneRoom",0x38);
    break;
  case 3:
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,0x3a);
    iVar2 = (int)local_10 + 0x3a;
    local_10 = CONCAT44(local_10._4_4_,iVar2);
    if (local_10._4_4_ < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18);
    }
    builtin_wcsncpy(local_18,L"/Engine/EngineSounds/ReverbSettings/Auditorium.Auditorium",0x3a);
    break;
  case 4:
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,0x3c);
    iVar2 = (int)local_10 + 0x3c;
    local_10 = CONCAT44(local_10._4_4_,iVar2);
    if (local_10._4_4_ < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18);
    }
    builtin_wcsncpy(local_18,L"/Engine/EngineSounds/ReverbSettings/ConcertHall.ConcertHall",0x3c);
    break;
  case 5:
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,0x2e);
    iVar2 = (int)local_10 + 0x2e;
    local_10 = CONCAT44(local_10._4_4_,iVar2);
    if (local_10._4_4_ < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18);
    }
    builtin_wcsncpy(local_18,L"/Engine/EngineSounds/ReverbSettings/Cave.Cave",0x2e);
    break;
  case 6:
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,0x34);
    iVar2 = (int)local_10 + 0x34;
    local_10 = CONCAT44(local_10._4_4_,iVar2);
    if (local_10._4_4_ < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18);
    }
    builtin_wcsncpy(local_18,L"/Engine/EngineSounds/ReverbSettings/Hallway.Hallway",0x34);
    break;
  case 7:
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,0x40);
    iVar2 = (int)local_10 + 0x40;
    local_10 = CONCAT44(local_10._4_4_,iVar2);
    if (local_10._4_4_ < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18);
    }
    builtin_wcsncpy(local_18,L"/Engine/EngineSounds/ReverbSettings/StoneCorridor.StoneCorridor",0x40
                   );
    break;
  case 8:
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,0x30);
    iVar2 = (int)local_10 + 0x30;
    local_10 = CONCAT44(local_10._4_4_,iVar2);
    if (local_10._4_4_ < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18);
    }
    builtin_wcsncpy(local_18,L"/Engine/EngineSounds/ReverbSettings/Alle",0x28);
    uVar5._0_2_ = L'y';
    uVar5._2_2_ = L'.';
    uVar6._0_2_ = L'A';
    uVar6._2_2_ = L'l';
    uVar7._0_2_ = L'l';
    uVar7._2_2_ = L'e';
    uVar8._0_2_ = L'y';
    uVar8._2_2_ = L'\0';
    goto LAB_1422f655f;
  case 9:
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,0x32);
    iVar2 = (int)local_10 + 0x32;
    local_10 = CONCAT44(local_10._4_4_,iVar2);
    if (local_10._4_4_ < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18);
    }
    builtin_wcsncpy(local_18,L"/Engine/EngineSounds/ReverbSettings/Forest.Forest",0x32);
    break;
  case 10:
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,0x2e);
    iVar2 = (int)local_10 + 0x2e;
    local_10 = CONCAT44(local_10._4_4_,iVar2);
    if (local_10._4_4_ < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18);
    }
    builtin_wcsncpy(local_18,L"/Engine/EngineSounds/ReverbSettings/City.City",0x2e);
    break;
  case 0xb:
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,0x38);
    iVar2 = (int)local_10 + 0x38;
    local_10 = CONCAT44(local_10._4_4_,iVar2);
    if (local_10._4_4_ < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18);
    }
    builtin_wcsncpy(local_18,L"/Engine/EngineSounds/ReverbSettings/Mountains.Mountains",0x38);
    break;
  case 0xc:
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,0x32);
    iVar2 = (int)local_10 + 0x32;
    local_10 = CONCAT44(local_10._4_4_,iVar2);
    if (local_10._4_4_ < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18);
    }
    builtin_wcsncpy(local_18,L"/Engine/EngineSounds/ReverbSettings/Quarry.Quarry",0x32);
    break;
  case 0xd:
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,0x30);
    iVar2 = (int)local_10 + 0x30;
    local_10 = CONCAT44(local_10._4_4_,iVar2);
    if (local_10._4_4_ < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18);
    }
    builtin_wcsncpy(local_18,L"/Engine/EngineSounds/ReverbSettings/Plai",0x28);
    uVar5._0_2_ = L'n';
    uVar5._2_2_ = L'.';
    uVar6._0_2_ = L'P';
    uVar6._2_2_ = L'l';
    uVar7._0_2_ = L'a';
    uVar7._2_2_ = L'i';
    uVar8._0_2_ = L'n';
    uVar8._2_2_ = L'\0';
    goto LAB_1422f655f;
  case 0xe:
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,0x3a);
    iVar2 = (int)local_10 + 0x3a;
    local_10 = CONCAT44(local_10._4_4_,iVar2);
    if (local_10._4_4_ < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18);
    }
    builtin_wcsncpy(local_18,L"/Engine/EngineSounds/ReverbSettings/ParkingLot.ParkingLot",0x3a);
    break;
  case 0xf:
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,0x38);
    iVar2 = (int)local_10 + 0x38;
    local_10 = CONCAT44(local_10._4_4_,iVar2);
    if (local_10._4_4_ < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18);
    }
    builtin_wcsncpy(local_18,L"/Engine/EngineSounds/ReverbSettings/SewerPipe.SewerPipe",0x38);
    break;
  case 0x10:
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,0x3a);
    iVar2 = (int)local_10 + 0x3a;
    local_10 = CONCAT44(local_10._4_4_,iVar2);
    if (local_10._4_4_ < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18);
    }
    builtin_wcsncpy(local_18,L"/Engine/EngineSounds/ReverbSettings/Underwater.Underwater",0x3a);
    break;
  case 0x11:
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,0x38);
    iVar2 = (int)local_10 + 0x38;
    local_10 = CONCAT44(local_10._4_4_,iVar2);
    if (local_10._4_4_ < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18);
    }
    builtin_wcsncpy(local_18,L"/Engine/EngineSounds/ReverbSettings/SmallRoom.SmallRoom",0x38);
    break;
  case 0x12:
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,0x3a);
    iVar2 = (int)local_10 + 0x3a;
    local_10 = CONCAT44(local_10._4_4_,iVar2);
    if (local_10._4_4_ < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18);
    }
    builtin_wcsncpy(local_18,L"/Engine/EngineSounds/ReverbSettings/MediumRoom.MediumRoom",0x3a);
    break;
  case 0x13:
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,0x38);
    iVar2 = (int)local_10 + 0x38;
    local_10 = CONCAT44(local_10._4_4_,iVar2);
    if (local_10._4_4_ < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18);
    }
    builtin_wcsncpy(local_18,L"/Engine/EngineSounds/ReverbSettings/LargeRoom.LargeRoom",0x38);
    break;
  case 0x14:
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,0x3a);
    iVar2 = (int)local_10 + 0x3a;
    local_10 = CONCAT44(local_10._4_4_,iVar2);
    if (local_10._4_4_ < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18);
    }
    builtin_wcsncpy(local_18,L"/Engine/EngineSounds/ReverbSettings/MediumHall.MediumHall",0x3a);
    break;
  case 0x15:
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,0x38);
    iVar2 = (int)local_10 + 0x38;
    local_10 = CONCAT44(local_10._4_4_,iVar2);
    if (local_10._4_4_ < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18);
    }
    builtin_wcsncpy(local_18,L"/Engine/EngineSounds/ReverbSettings/LargeHall.LargeHall",0x38);
    break;
  case 0x16:
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,0x30);
    iVar2 = (int)local_10 + 0x30;
    local_10 = CONCAT44(local_10._4_4_,iVar2);
    if (local_10._4_4_ < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18);
    }
    builtin_wcsncpy(local_18,L"/Engine/EngineSounds/ReverbSettings/Plat",0x28);
    uVar5._0_2_ = L'e';
    uVar5._2_2_ = L'.';
    uVar6._0_2_ = L'P';
    uVar6._2_2_ = L'l';
    uVar7._0_2_ = L'a';
    uVar7._2_2_ = L't';
    uVar8._0_2_ = L'e';
    uVar8._2_2_ = L'\0';
LAB_1422f655f:
    *(undefined4 *)(local_18 + 0x28) = uVar5;
    *(undefined4 *)(local_18 + 0x2a) = uVar6;
    *(undefined4 *)(local_18 + 0x2c) = uVar7;
    *(undefined4 *)(local_18 + 0x2e) = uVar8;
    break;
  default:
    goto switchD_1422f5ac8_default;
  }
  pwVar4 = local_18;
  if ((int)local_10 == 0) {
switchD_1422f5ac8_default:
    pwVar4 = L"";
  }
  pwVar1 = local_18;
  uVar3 = FUN_1429f9450();
  uVar3 = FUN_141799c90(uVar3,0,pwVar4,0,0,0,1);
  *(undefined8 *)(param_1 + 8) = uVar3;
  if (pwVar1 != (wchar_t *)0x0) {
    FMemory::Free(pwVar1);
  }
LAB_1422f65b7:
  return;
}



// FUNCTION 1422f6620 FUN_1422f6620 body=87 status=ok
// SIG undefined FUN_1422f6620(void)

void FUN_1422f6620(longlong *param_1)

{
  longlong lVar1;
  
  if (param_1[0x2d] != 0) {
    FUN_140483870(param_1[0x2d] + 0x2b0,param_1);
  }
  FUN_1422f7ea0(param_1);
  lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar1 != 0) {
    TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove(lVar1 + 0x730,param_1)
    ;
    return;
  }
  return;
}



// FUNCTION 1422f6680 FUN_1422f6680 body=4089 status=ok
// SIG undefined FUN_1422f6680(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1422f6680(undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,int param_5
                  ,undefined8 param_6,undefined1 param_7,longlong *param_8,longlong *param_9,
                  char param_10,float param_11,undefined8 *param_12,longlong *param_13)

{
  int iVar1;
  longlong lVar2;
  uint3 uVar3;
  bool bVar4;
  float fVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  uint *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  uint uVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong lVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint uVar25;
  undefined4 uVar26;
  undefined8 in_stack_fffffffffffffd48;
  undefined4 uVar27;
  uint local_278;
  uint local_274;
  uint local_270;
  int local_26c;
  int local_268 [4];
  float local_258;
  float fStack_254;
  float fStack_250;
  undefined4 uStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  undefined4 uStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined4 uStack_220;
  uint uStack_21c;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined *local_1c8;
  undefined4 local_1c0;
  undefined *local_1b8;
  undefined4 local_1b0;
  undefined *local_1a8;
  undefined4 local_1a0;
  undefined *local_198;
  undefined4 local_190;
  undefined *local_188;
  undefined4 local_180;
  undefined *local_178;
  undefined4 local_170;
  undefined *local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  longlong lStack_120;
  uint local_118 [9];
  undefined8 local_f4;
  undefined8 uStack_ec;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  
  uVar27 = (undefined4)((ulonglong)in_stack_fffffffffffffd48 >> 0x20);
  plVar17 = (longlong *)0x0;
  local_26c = 0;
  if (((param_5 == 0xb) || (param_5 == 2)) && (cVar6 = FUN_141a90f50(), cVar6 != '\0')) {
    param_5 = 0xc;
  }
  local_158 = 0x3f800000;
  uStack_150 = 0;
  local_148 = 0x3f80000000000000;
  uStack_140 = 0;
  local_138 = 0.0;
  fStack_134 = 0.0;
  fStack_130 = 1.0;
  uStack_12c = 0;
  local_128 = 0;
  lStack_120 = 0;
  if (((param_13 == (longlong *)0x0) || (0 < param_4)) || (param_13[2] == 0)) {
LAB_1422f67e2:
    cVar6 = '\0';
  }
  else {
    lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar9 + 0x38) < DAT_146aef9b8) && (_Init_thread_header(), DAT_146aef9b8 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar13 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileHDR");
      plVar14 = plVar17;
      if (plVar13 != (longlong *)0x0) {
        plVar14 = (longlong *)(**(code **)(*plVar13 + 0x38))(plVar13);
      }
      DAT_146aef9b0 = plVar14;
      _Init_thread_footer();
    }
    iVar1 = *(int *)((longlong)DAT_146aef9b0 + 4);
    if ((*(int *)(lVar9 + 0x38) < DAT_146aef9c8) && (_Init_thread_header(), DAT_146aef9c8 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar13 = (longlong *)
                (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileHDR32bppMode");
      plVar14 = plVar17;
      if (plVar13 != (longlong *)0x0) {
        plVar14 = (longlong *)(**(code **)(*plVar13 + 0x38))(plVar13);
      }
      DAT_146aef9c0 = plVar14;
      _Init_thread_footer();
    }
    if (((iVar1 != 1) ||
        (((DAT_1464c9c5a != '\0' && (*(int *)((longlong)DAT_146aef9c0 + 4) == 0)) ||
         (*(int *)((longlong)DAT_146aef9c0 + 4) == 1)))) ||
       ((*(int *)((longlong)DAT_146aef9c0 + 4) != 2 &&
        ((DAT_146ab62f1 == '\0' || (DAT_146ab62dd == '\0')))))) goto LAB_1422f67e2;
    cVar6 = '\x01';
  }
  fVar5 = param_11;
  fVar22 = param_11;
  if (param_5 - 0xeU < 0x20) {
    uVar8 = param_5 - 0xe;
    uVar3 = (uint3)(uVar8 >> 8);
    param_11 = (float)(CONCAT31(uVar3 >> 2,(char)(uVar8 >> 2)) & 0xffffff01);
    uVar16 = uVar8 >> 1;
    local_278 = CONCAT31(uVar3 >> 3,(char)(uVar8 >> 3)) & 0xffffff01;
    local_274 = uVar8 >> 4 & 0xffffff01;
    fVar21 = 0.0;
    fVar23 = 0.0;
    fVar24 = 0.0;
    uVar26 = 0;
    uVar25 = 0;
    if ((((char)local_278 == '\0') || ((uVar8 & 1) != 0)) ||
       (((uVar16 & 1) != 0 || (SUB41(param_11,0) != '\0')))) {
      bVar20 = false;
    }
    else {
      bVar20 = true;
    }
    local_270 = (uint)((byte)uVar8 & 1) + (uVar8 >> 2 & 1) + (uint)((byte)uVar16 & 1);
    if (bVar20) {
      FUN_1422f98a0(param_2,param_3,0,cVar6);
      uVar26 = 0x3f800000;
      fVar22 = 1.0;
LAB_1422f68ec:
      fStack_254 = 0.0;
      local_248 = 0.0;
      fStack_244 = fVar23;
      fStack_250 = 0.0;
    }
    else {
      FUN_1422f98a0(param_2,param_3,(uVar8 >> 3 & 1) * 2,cVar6);
      if ((uVar8 & 1) != 0) {
        fVar21 = 1.0;
      }
      if ((uVar16 & 1) != 0) {
        fVar23 = 1.0;
      }
      if (param_11._0_1_ != '\0') {
        fVar24 = 1.0;
      }
      if ((char)local_278 != '\0') {
        uVar25 = 0x3f800000;
      }
      fVar22 = fVar5;
      if (((char)local_274 == '\0') || (local_270 == 0)) goto LAB_1422f68ec;
      fStack_254 = 1.0 / (float)local_270;
      fVar21 = fVar21 * fStack_254;
      fVar24 = fVar24 * fStack_254;
      fStack_254 = fVar23 * fStack_254;
      local_248 = fVar21;
      fStack_244 = fStack_254;
      fStack_250 = fVar24;
    }
    local_148 = CONCAT44(fStack_244,local_248);
    uStack_140 = CONCAT44(uVar26,fStack_250);
    local_228 = 0;
    uStack_220 = 0;
    local_128 = 0;
    lStack_120 = (ulonglong)uVar25 << 0x20;
    local_158 = CONCAT44(fStack_254,fVar21);
    uStack_150 = CONCAT44(uVar26,fStack_250);
    local_258 = fVar21;
    uStack_24c = uVar26;
    fStack_240 = fStack_250;
    uStack_23c = uVar26;
    local_238 = local_248;
    fStack_234 = fStack_254;
    fStack_230 = fVar24;
    uStack_22c = uVar26;
    uStack_21c = uVar25;
    local_138 = local_248;
    fStack_134 = fStack_254;
    fStack_130 = fVar24;
    uStack_12c = uVar26;
  }
  if (param_8 != (longlong *)0x0) {
    (**(code **)(*param_8 + 8))(param_8,param_2,param_3,param_4,param_6,fVar22,&local_158,param_9);
    return;
  }
  lVar9 = FUN_1419ef210((&DAT_1464c9c48)[param_4]);
  local_1c0 = 0;
  local_1c8 = &DAT_146b0a890;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(lVar9 + 0x38),&param_11,&local_1c8);
  plVar14 = plVar17;
  if (param_11 != -NAN) {
    plVar14 = (longlong *)((longlong)(int)param_11 * 0x20 + *(longlong *)(lVar9 + 0x38));
  }
  plVar13 = plVar14 + 2;
  if (plVar14 == (longlong *)0x0) {
    plVar13 = plVar17;
  }
  lVar9 = *plVar13;
  *param_3 = DAT_146531b08;
  if (lVar9 == 0) {
    plVar18 = (longlong *)0x1;
    plVar14 = plVar17;
    plVar13 = plVar17;
  }
  else {
    lVar19 = *(longlong *)(lVar9 + 0x48);
    if (*(char *)(lVar19 + 0x28) == '\0') {
      FUN_1419f3850(lVar19);
    }
    plVar14 = *(longlong **)(lVar19 + 0x38);
    plVar13 = param_13;
    plVar18 = plVar17;
  }
  param_3[1] = plVar14;
  if ((plVar18 != (longlong *)0x0) && (plVar13 != (longlong *)0x0)) {
    LOCK();
    plVar14 = plVar13 + 1;
    lVar19 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      if (((char)plVar13[2] == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), cVar7 == '\0')))
         ) {
        LOCK();
        bVar20 = *(int *)((longlong)plVar13 + 0xc) == 0;
        if (bVar20) {
          *(int *)((longlong)plVar13 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar20) {
          uVar8 = FLockFreeLinkPolicy::AllocLockFreeLink();
          plVar14 = plVar17;
          if (uVar8 != 0) {
            plVar14 = (longlong *)
                      ((&DAT_1468a81f8)[uVar8 >> 0xe] + (ulonglong)(uVar8 & 0x3fff) * 0x18);
          }
          plVar14[1] = (longlong)plVar13;
          FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940,uVar8);
        }
      }
      else {
        (**(code **)*plVar13)(plVar13,1);
      }
    }
  }
  fVar21 = DAT_146531ac0;
  lVar19 = 0;
  cVar7 = '\0';
  bVar4 = false;
  bVar20 = false;
  if (param_10 != '\0') {
    switch(param_5) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
      uVar11 = FUN_1404a0ce0();
      param_3[6] = uVar11;
    }
    local_1b8 = &DAT_146b0af20;
    local_1b0 = 0;
    lVar10 = FUN_1419ef210((&DAT_1464c9c48)[param_4]);
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar10 + 0x38,&param_8,&local_1b8);
    plVar14 = plVar17;
    if ((int)param_8 != -1) {
      plVar14 = (longlong *)((longlong)(int)param_8 * 0x20 + *(longlong *)(lVar10 + 0x38));
    }
    plVar13 = plVar14 + 2;
    if (plVar14 == (longlong *)0x0) {
      plVar13 = plVar17;
    }
    lVar10 = *plVar13;
    if (lVar10 == 0) {
      local_210 = 0;
      lVar19 = 2;
    }
    else {
      lVar2 = *(longlong *)(lVar10 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      plVar17 = *(longlong **)(lVar2 + 0x40);
    }
    param_3[4] = plVar17;
    if (lVar19 != 0) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_210);
    }
    FUN_141ed6ac0(param_2,param_3,2,1);
    FSimpleElementHitProxyPS::SetParameters(lVar10,param_2,param_9);
    goto LAB_1422f7494;
  }
  if (param_5 != 1) {
    if (param_5 - 5U < 4) {
      if (param_5 - 7U < 2) {
        if (cVar6 == '\0') {
          uVar11 = FUN_141abdaf0();
          param_3[6] = uVar11;
        }
        fVar21 = 0.0;
      }
      else {
        uVar11 = FUN_1404a0ce0();
        param_3[6] = uVar11;
      }
      lVar10 = FUN_1419ef210((&DAT_1464c9c48)[param_4]);
      local_160 = 0;
      local_168 = &DAT_146b0add0;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId((longlong *)(lVar10 + 0x38),&local_26c,&local_168);
      plVar14 = plVar17;
      if (local_26c != -1) {
        plVar14 = (longlong *)((longlong)local_26c * 0x20 + *(longlong *)(lVar10 + 0x38));
      }
      plVar13 = plVar14 + 2;
      if (plVar14 == (longlong *)0x0) {
        plVar13 = plVar17;
      }
      lVar10 = *plVar13;
      if (lVar10 == 0) {
        local_1d0 = 0;
        lVar19 = 0x10;
      }
      else {
        lVar2 = *(longlong *)(lVar10 + 0x48);
        if (*(char *)(lVar2 + 0x28) == '\0') {
          FUN_1419f3850(lVar2);
        }
        plVar17 = *(longlong **)(lVar2 + 0x40);
      }
      param_3[4] = plVar17;
      if (lVar19 != 0) {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1d0);
      }
      FUN_141ed6ac0(param_2,param_3,2,1);
      plVar17 = param_9;
      lVar19 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if ((*(int *)(lVar19 + 0x38) < DAT_146aef9d8) &&
         (_Init_thread_header(&DAT_146aef9d8), DAT_146aef9d8 == -1)) {
        uVar8 = (**(code **)(*plVar17 + 0x48))(plVar17);
        uVar16 = (**(code **)(*plVar17 + 0x40))(plVar17);
        _DAT_146aef9d0 = -1.0 / (float)uVar16;
        _DAT_146aef9d4 = -1.0 / (float)uVar8;
        _Init_thread_footer(&DAT_146aef9d8);
      }
      if ((*(int *)(lVar19 + 0x38) < DAT_146aef9f0) &&
         (_Init_thread_header(&DAT_146aef9f0), DAT_146aef9f0 == -1)) {
        _DAT_146aef9e0 = DAT_1464aa6e0;
        uRam0000000146aef9e4 = DAT_1464aa6e4;
        uRam0000000146aef9e8 = DAT_1464aa6e8;
        uRam0000000146aef9ec = DAT_1464aa6ec;
        _Init_thread_footer(&DAT_146aef9f0);
      }
      fVar22 = DAT_146531ac4 * 2.0;
      uVar8 = (**(code **)(*plVar17 + 0x40))(plVar17);
      if (param_12 == (undefined8 *)0x0) {
        local_118[0] = local_118[0] & 0xfffffffe;
        puVar12 = local_118;
        local_118[1] = 0;
        local_118[2] = 0;
        local_118[3] = 0;
        local_118[4] = 0;
        local_118[5] = 0;
        local_118[6] = 0;
        local_118[7] = 0;
        local_118[8] = 0;
      }
      else {
        local_f4 = *param_12;
        uStack_ec = param_12[1];
        local_e4 = *(undefined4 *)(param_12 + 2);
        uStack_e0 = *(undefined4 *)((longlong)param_12 + 0x14);
        uStack_dc = *(undefined4 *)(param_12 + 3);
        uStack_d8 = *(undefined4 *)((longlong)param_12 + 0x1c);
        local_d4 = *(undefined4 *)(param_12 + 4);
        puVar12 = (uint *)&local_f4;
      }
      FSimpleElementDistanceFieldGammaPS::SetParameters
                (lVar10,param_2,plVar17,fVar5,CONCAT44(uVar27,fVar21 * 0.003921569),DAT_146531ac4,
                 (param_5 - 6U & 0xfffffffd) == 0,&DAT_146aef9d0,&DAT_146aef9e0,
                 fVar22 / (float)uVar8,puVar12,param_5);
    }
    else if (param_5 - 0xbU < 2) {
      FUN_1422f98a0(param_2,param_3,param_5,cVar6);
      if (0.0001 <= ABS(fVar5 - 1.0)) {
        lVar10 = FUN_1422de3f0(cVar6,param_5,param_4);
        if (lVar10 == 0) {
          local_1d8 = 0;
          lVar19 = 0x40;
        }
        else {
          lVar2 = *(longlong *)(lVar10 + 0x48);
          if (*(char *)(lVar2 + 0x28) == '\0') {
            FUN_1419f3850(lVar2);
          }
          plVar17 = *(longlong **)(lVar2 + 0x40);
        }
        param_3[4] = plVar17;
        if (lVar19 != 0) {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1d8);
        }
        FUN_141ed6ac0(param_2,param_3,2,1);
        FSimpleElementGammaBasePS::SetParameters
                  (lVar10,param_2,param_9,fVar5,CONCAT44(uVar27,param_5));
        FUN_142780e70(lVar10,param_2,param_13);
      }
      else {
        lVar10 = FUN_1422de2b0();
        if (lVar10 == 0) {
          local_1e0 = 0;
          lVar19 = 0x20;
        }
        else {
          lVar2 = *(longlong *)(lVar10 + 0x48);
          if (*(char *)(lVar2 + 0x28) == '\0') {
            FUN_1419f3850(lVar2);
          }
          plVar17 = *(longlong **)(lVar2 + 0x40);
        }
        param_3[4] = plVar17;
        if (lVar19 != 0) {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1e0);
        }
        FUN_141ed6ac0(param_2,param_3,2,1);
        FSimpleElementPS::SetParameters(lVar10,param_2,param_9);
        FUN_142780e70(lVar10,param_2,param_13);
      }
    }
    else if (param_5 - 0xeU < 0x20) {
      local_1a0 = 0;
      local_1a8 = &DAT_146b0b070;
      lVar19 = FUN_1419ef210((&DAT_1464c9c48)[param_4]);
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(lVar19 + 0x38,&local_270,&local_1a8);
      plVar14 = plVar17;
      if (local_270 != 0xffffffff) {
        plVar14 = (longlong *)((longlong)(int)local_270 * 0x20 + *(longlong *)(lVar19 + 0x38));
      }
      plVar13 = plVar14 + 2;
      if (plVar14 == (longlong *)0x0) {
        plVar13 = plVar17;
      }
      lVar19 = *plVar13;
      if (lVar19 == 0) {
        local_1f8 = 0;
        cVar7 = -0x80;
      }
      else {
        lVar10 = *(longlong *)(lVar19 + 0x48);
        if (*(char *)(lVar10 + 0x28) == '\0') {
          FUN_1419f3850(lVar10);
        }
        plVar17 = *(longlong **)(lVar10 + 0x40);
      }
      param_3[4] = plVar17;
      if (cVar7 < '\0') {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1f8);
      }
      FUN_141ed6ac0(param_2,param_3,2,1);
      FSimpleElementColorChannelMaskPS::SetParameters
                (lVar19,param_2,param_9,&local_158,CONCAT44(uVar27,fVar22));
    }
    else {
      FUN_1422f98a0(param_2,param_3,param_5,cVar6);
      lVar19 = FUN_1419ef210((&DAT_1464c9c48)[param_4]);
      if (0.0001 <= ABS(fVar5 - 1.0)) {
        local_180 = 0;
        local_188 = &DAT_146b0b350;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(lVar19 + 0x38,&local_278,&local_188);
        plVar14 = plVar17;
        if (local_278 != 0xffffffff) {
          plVar14 = (longlong *)((longlong)(int)local_278 * 0x20 + *(longlong *)(lVar19 + 0x38));
        }
        local_170 = 0;
        plVar13 = plVar14 + 2;
        if (plVar14 == (longlong *)0x0) {
          plVar13 = plVar17;
        }
        lVar19 = *plVar13;
        local_178 = &DAT_146b0b4a0;
        lVar10 = FUN_1419ef210((&DAT_1464c9c48)[param_4]);
        param_8 = (longlong *)(lVar10 + 0x38);
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(param_8,local_268,&local_178);
        plVar14 = plVar17;
        if (local_268[0] != -1) {
          plVar14 = (longlong *)((longlong)local_268[0] * 0x20 + *param_8);
        }
        if (*(char *)((longlong)param_9 + 0x66) == '\0') {
          plVar13 = plVar14 + 2;
          if (plVar14 == (longlong *)0x0) {
            plVar13 = plVar17;
          }
          lVar19 = *plVar13;
        }
        if (lVar19 == 0) {
          local_1e8 = 0;
          bVar4 = true;
        }
        else {
          lVar10 = *(longlong *)(lVar19 + 0x48);
          if (*(char *)(lVar10 + 0x28) == '\0') {
            FUN_1419f3850(lVar10);
          }
          plVar17 = *(longlong **)(lVar10 + 0x40);
        }
        param_3[4] = plVar17;
        if (bVar4) {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1e8);
        }
        FUN_141ed6ac0(param_2,param_3,2,1);
        FSimpleElementGammaBasePS::SetParameters
                  (lVar19,param_2,param_9,fVar5,CONCAT44(uVar27,param_5));
        FUN_142780e70(lVar19,param_2,param_13);
      }
      else {
        local_190 = 0;
        local_198 = &DAT_146b0a9e0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(lVar19 + 0x38,&local_274,&local_198);
        plVar14 = plVar17;
        if (local_274 != 0xffffffff) {
          plVar14 = (longlong *)((longlong)(int)local_274 * 0x20 + *(longlong *)(lVar19 + 0x38));
        }
        plVar13 = plVar14 + 2;
        if (plVar14 == (longlong *)0x0) {
          plVar13 = plVar17;
        }
        lVar19 = *plVar13;
        if (lVar19 == 0) {
          local_1f0 = 0;
          bVar20 = true;
        }
        else {
          lVar10 = *(longlong *)(lVar19 + 0x48);
          if (*(char *)(lVar10 + 0x28) == '\0') {
            FUN_1419f3850(lVar10);
          }
          plVar17 = *(longlong **)(lVar10 + 0x40);
        }
        param_3[4] = plVar17;
        if (bVar20) {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1f0);
        }
        FUN_141ed6ac0(param_2,param_3,2,1);
        FSimpleElementPS::SetParameters(lVar19,param_2,param_9);
        FUN_142780e70(lVar19,param_2,param_13);
      }
    }
    goto LAB_1422f7494;
  }
  uVar11 = FUN_1404a0ce0();
  plVar14 = param_9;
  param_3[6] = uVar11;
  if (*(char *)((longlong)param_9 + 0x66) == '\0') {
    lVar10 = FUN_1422de170(cVar6,1,param_4);
    if (lVar10 == 0) {
      local_200 = 0;
      lVar19 = 8;
    }
    else {
      lVar2 = *(longlong *)(lVar10 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      plVar17 = *(longlong **)(lVar2 + 0x40);
    }
    param_3[4] = plVar17;
    if (lVar19 != 0) {
      puVar15 = &local_200;
      goto LAB_1422f6d90;
    }
  }
  else {
    lVar10 = FUN_1422de030();
    if (lVar10 == 0) {
      local_208 = 0;
      lVar19 = 4;
    }
    else {
      lVar2 = *(longlong *)(lVar10 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      plVar17 = *(longlong **)(lVar2 + 0x40);
    }
    param_3[4] = plVar17;
    if (lVar19 != 0) {
      puVar15 = &local_208;
LAB_1422f6d90:
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(puVar15);
    }
  }
  FUN_141ed6ac0(param_2,param_3,2,1);
  FUN_142780e70(lVar10,param_2,param_13);
  FSimpleElementMaskedGammaBasePS::SetParameters
            (lVar10,param_2,plVar14,fVar5,CONCAT44(uVar27,DAT_146531ac0 * 0.003921569),1);
LAB_1422f7494:
  FSimpleElementVS::SetParameters(lVar9,param_2,param_6,param_7);
  return;
}



// FUNCTION 1422f76b0 ProcessAllCommands body=22 status=ok
// SIG undefined ProcessAllCommands(void)

void FAudioThread::ProcessAllCommands(void)

{
  if (DAT_146aef581 != '\0') {
    FUN_1422ed880(&DAT_146aef6c0);
    return;
  }
  return;
}



// FUNCTION 1422f76d0 ProcessPendingAsyncFileResults body=229 status=ok
// SIG undefined ProcessPendingAsyncFileResults(void)

void FAudioStreamingManager::ProcessPendingAsyncFileResults(longlong param_1)

{
  undefined8 *puVar1;
  BOOL BVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd0));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd0));
  }
  uVar3 = 0;
  plVar4 = *(longlong **)(param_1 + 0xc0);
  uVar5 = (longlong)*(int *)(param_1 + 200) & 0x1fffffffffffffff;
  if (plVar4 + *(int *)(param_1 + 200) < plVar4) {
    uVar5 = uVar3;
  }
  if (uVar5 != 0) {
    do {
      puVar1 = (undefined8 *)*plVar4;
      *(undefined8 *)((longlong)*(int *)(puVar1 + 2) * 0x20 + *(longlong *)(puVar1[1] + 0x10)) =
           *puVar1;
      FMemory::operator_delete(puVar1,0x18);
      uVar3 = uVar3 + 1;
      plVar4 = plVar4 + 1;
    } while (uVar3 != uVar5);
  }
  *(undefined4 *)(param_1 + 200) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xcc)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xc0,0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001422f77ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd0));
  return;
}



// FUNCTION 1422f77c0 PurgeClass body=36 status=ok
// SIG undefined PurgeClass(void)

void UBlueprintGeneratedClass::PurgeClass(longlong param_1)

{
  FUN_14171fb60();
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  return;
}



// FUNCTION 1422f77f0 FUN_1422f77f0 body=116 status=ok
// SIG undefined FUN_1422f77f0(void)

void FUN_1422f77f0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  plVar1 = *(longlong **)(param_1 + 0x90);
  uVar2 = (longlong)*(int *)(param_1 + 0x98) & 0x1fffffffffffffff;
  if (plVar1 + *(int *)(param_1 + 0x98) < plVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FUN_1422d4b80(*plVar1,param_2);
      }
      plVar1 = plVar1 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



// FUNCTION 1422f7870 FUN_1422f7870 body=120 status=ok
// SIG undefined FUN_1422f7870(void)

void FUN_1422f7870(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  plVar2 = *(longlong **)(param_1 + 0x90);
  uVar3 = (longlong)*(int *)(param_1 + 0x98) & 0x1fffffffffffffff;
  if (plVar2 + *(int *)(param_1 + 0x98) < plVar2) {
    uVar3 = uVar4;
  }
  if (uVar3 != 0) {
    do {
      plVar1 = (longlong *)*plVar2;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x50))(plVar1,param_2,1);
      }
      plVar2 = plVar2 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar3);
  }
  return;
}



// FUNCTION 1422f78f0 Remove body=328 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<unsigned_int,FAudioVolumeProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,int param_2)

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
  plVar9 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar9 = param_1 + 7;
  }
  uVar10 = (longlong)(int)param_1[9] - 1;
  iVar8 = *(int *)((longlong)plVar9 + ((longlong)param_2 & uVar10) * 4);
  if (iVar8 != -1) {
    lVar3 = *param_1;
    do {
      lVar6 = (longlong)iVar8 * 0x70;
      if (*(int *)(lVar6 + lVar3) == param_2) {
        lVar6 = (longlong)iVar8 * 0x70;
        uVar10 = (longlong)*(int *)(lVar6 + 0x6c + lVar3) & uVar10;
        piVar7 = (int *)((longlong)plVar9 + uVar10 * 4);
        iVar2 = *(int *)((longlong)plVar9 + uVar10 * 4);
        goto joined_r0x0001422f7987;
      }
      iVar8 = *(int *)(lVar6 + 0x68 + lVar3);
    } while (iVar8 != -1);
  }
  return 0;
joined_r0x0001422f7987:
  if (iVar2 == -1) {
LAB_1422f79b0:
    bVar4 = (byte)iVar8 & 0x1f;
    if (*(int *)((longlong)param_1 + 0x34) != 0) {
      *(int *)((longlong)(int)param_1[6] * 0x70 + *param_1) = iVar8;
    }
    lVar3 = *param_1;
    uVar5 = 0xffffffff;
    *(undefined4 *)(lVar3 + lVar6) = 0xffffffff;
    if (0 < *(int *)((longlong)param_1 + 0x34)) {
      uVar5 = (undefined4)param_1[6];
    }
    ((undefined4 *)(lVar3 + lVar6))[1] = uVar5;
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
    *piVar7 = *(int *)(lVar6 + lVar3 + 0x68);
    goto LAB_1422f79b0;
  }
  piVar7 = (int *)((longlong)iVar2 * 0x70 + 0x68 + lVar3);
  iVar2 = *piVar7;
  goto joined_r0x0001422f7987;
}



// FUNCTION 1422f7a40 Remove body=386 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<USoundWave_*,FWaveRequest>,TDefaultMapHashableKeyFuncs<USoundWave_*,FWaveRequest,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar9 = (int)(param_2 >> 4);
  uVar8 = 0x9e3779b9U - iVar9 ^ iVar9 << 8;
  uVar7 = (longlong)(int)param_1[9] - 1;
  uVar5 = -(uVar8 + iVar9) ^ uVar8 >> 0xd;
  uVar10 = (iVar9 - uVar8) - uVar5 ^ uVar5 >> 0xc;
  uVar8 = (uVar8 - uVar10) - uVar5 ^ uVar10 << 0x10;
  uVar5 = (uVar5 - uVar8) - uVar10 ^ uVar8 >> 5;
  uVar10 = (uVar10 - uVar8) - uVar5 ^ uVar5 >> 3;
  uVar8 = (uVar8 - uVar10) - uVar5 ^ uVar10 << 10;
  plVar11 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar11 = param_1 + 7;
  }
  iVar9 = *(int *)((longlong)plVar11 +
                  (((longlong)(int)((uVar5 - uVar8) - uVar10) ^ (ulonglong)(uVar8 >> 0xf)) & uVar7)
                  * 4);
  if (iVar9 != -1) {
    lVar4 = *param_1;
    do {
      lVar6 = (longlong)iVar9;
      if (*(ulonglong *)(lVar4 + lVar6 * 0x28) == param_2) {
        lVar6 = lVar6 * 0x28;
        uVar7 = (longlong)*(int *)(lVar6 + 0x24 + lVar4) & uVar7;
        puVar2 = (undefined4 *)((longlong)plVar11 + uVar7 * 4);
        iVar3 = *(int *)((longlong)plVar11 + uVar7 * 4);
        goto joined_r0x0001422f7b5c;
      }
      iVar9 = *(int *)(lVar4 + 0x20 + lVar6 * 0x28);
    } while (iVar9 != -1);
  }
  return 0;
joined_r0x0001422f7b5c:
  if (iVar3 == -1) {
LAB_1422f7b83:
    if (*(longlong *)(lVar6 + 8 + *param_1) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar9,1);
    return 1;
  }
  if (iVar3 == iVar9) {
    *puVar2 = *(undefined4 *)(lVar6 + lVar4 + 0x20);
    goto LAB_1422f7b83;
  }
  lVar1 = (longlong)iVar3 * 5 + 4;
  iVar3 = *(int *)(lVar4 + lVar1 * 8);
  puVar2 = (undefined4 *)(lVar4 + lVar1 * 8);
  goto joined_r0x0001422f7b5c;
}



// FUNCTION 1422f7bd0 Remove body=166 status=ok
// SIG undefined Remove(void)

void TSet<TTuple<USoundWave_*,FWaveRequest>,TDefaultMapHashableKeyFuncs<USoundWave_*,FWaveRequest,0>,FDefaultSetAllocator>
     ::Remove(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar4 = *param_1;
    lVar1 = lVar4 + (longlong)param_2 * 0x28;
    lVar6 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar1 + 0x24));
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    puVar2 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
    iVar3 = *(int *)((longlong)plVar5 + lVar6 * 4);
    while (iVar3 != -1) {
      if (iVar3 == param_2) {
        *puVar2 = *(undefined4 *)(lVar1 + 0x20);
        break;
      }
      lVar6 = (longlong)iVar3 * 5 + 4;
      puVar2 = (undefined4 *)(lVar4 + lVar6 * 8);
      iVar3 = *(int *)(lVar4 + lVar6 * 8);
    }
  }
  if (*(longlong *)(*param_1 + 8 + (longlong)param_2 * 0x28) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,param_2,1);
  return;
}



// FUNCTION 1422f7c80 FUN_1422f7c80 body=127 status=ok
// SIG undefined FUN_1422f7c80(void)

void FUN_1422f7c80(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  lVar2 = (longlong)*(int *)(param_1 + 0x60) * 0x160 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x160) {
    FUN_14231eb30(lVar1,param_2);
  }
  if ((param_2 != '\0') && (*(undefined4 *)(param_1 + 0x60) = 0, *(int *)(param_1 + 100) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<352,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x58,0);
  }
  return;
}



// FUNCTION 1422f7d00 FUN_1422f7d00 body=402 status=ok
// SIG undefined FUN_1422f7d00(void)

void FUN_1422f7d00(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  iVar7 = *(int *)(param_1 + 0x60) + -1;
  if (-1 < iVar7) {
    lVar8 = (longlong)iVar7 * 0x160;
    lVar9 = lVar8;
    do {
      lVar4 = *(longlong *)(param_1 + 0x58);
      if (*(longlong *)(lVar4 + lVar9) != 0) {
        lVar1 = UNodeMappingContainer::GetPrivateStaticClass();
        lVar4 = *(longlong *)(lVar4 + lVar9);
        for (lVar2 = lVar4; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
          if (lVar2 == lVar1) {
            if (lVar4 != 0) {
              if (param_2 == 0) goto LAB_1422f7dae;
              lVar2 = UNodeMappingContainer::GetPrivateStaticClass();
              lVar4 = param_2;
              goto LAB_1422f7da0;
            }
            break;
          }
        }
      }
LAB_1422f7e5b:
      lVar8 = lVar8 + -0x160;
      lVar9 = lVar9 + -0x160;
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  return;
  while (lVar4 = *(longlong *)(lVar4 + 0x30), lVar4 != 0) {
LAB_1422f7da0:
    lVar1 = param_2;
    if (lVar4 == lVar2) goto LAB_1422f7db0;
  }
LAB_1422f7dae:
  lVar1 = 0;
LAB_1422f7db0:
  lVar4 = *(longlong *)(param_1 + 0x58);
  if (*(longlong *)(lVar4 + lVar9) != 0) {
    lVar3 = UNodeMappingContainer::GetPrivateStaticClass();
    lVar2 = *(longlong *)(lVar4 + lVar9);
    for (lVar4 = lVar2; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
      if (lVar4 == lVar3) goto joined_r0x0001422f7de3;
    }
  }
  lVar2 = 0;
joined_r0x0001422f7de3:
  do {
    if (lVar2 == 0) goto LAB_1422f7e5b;
    if (lVar2 == lVar1) {
      FUN_14231eb30(*(longlong *)(param_1 + 0x58) + lVar8,param_3);
      if (param_3 != '\0') {
        iVar6 = *(int *)(param_1 + 0x60);
        iVar5 = (iVar6 - iVar7) + -1;
        if (0 < iVar5) {
          iVar5 = 1;
        }
        if (iVar5 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x58) + lVar8),
                     (void *)((longlong)(iVar6 - iVar5) * 0x160 + *(longlong *)(param_1 + 0x58)),
                     (longlong)iVar5 * 0x160);
          iVar6 = *(int *)(param_1 + 0x60);
        }
        *(int *)(param_1 + 0x60) = iVar6 + -1;
      }
      goto LAB_1422f7e5b;
    }
    lVar2 = *(longlong *)(lVar2 + 0x30);
  } while( true );
}



// FUNCTION 1422f7ea0 FUN_1422f7ea0 body=138 status=ok
// SIG undefined FUN_1422f7ea0(void)

void FUN_1422f7ea0(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_5c;
  code *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if (lVar2 != 0) {
    lVar2 = UWorld::GetAudioDevice(lVar2);
    if (lVar2 != 0) {
      uVar1 = *(undefined4 *)((longlong)param_1 + 0xc);
      local_28 = 0;
      local_18 = 0;
      puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_48);
      if (puVar3 != (undefined8 *)0x0) {
        local_68 = (undefined4)lVar2;
        uStack_64 = (undefined4)((ulonglong)lVar2 >> 0x20);
        *puVar3 = &PTR_FUN_143f77c18;
        *(undefined4 *)(puVar3 + 1) = local_68;
        *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_64;
        *(undefined4 *)(puVar3 + 2) = uVar1;
        *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_5c;
      }
      local_58[0] = FUN_1422e7460;
      FUN_1422f8a30(local_58,local_res8);
    }
  }
  return;
}



// FUNCTION 1422f7f30 RemoveSoundBufferForResourceID body=9 status=ok
// SIG undefined RemoveSoundBufferForResourceID(void)

void FAudioDeviceManager::RemoveSoundBufferForResourceID(longlong param_1)

{
  TSet<TTuple<int,UHomeItem_*>,TDefaultMapHashableKeyFuncs<int,UHomeItem_*,0>,FDefaultSetAllocator>
  ::Remove(param_1 + 0x10);
  return;
}



// FUNCTION 1422f7f40 FUN_1422f7f40 body=254 status=ok
// SIG undefined FUN_1422f7f40(void)

void FUN_1422f7f40(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined1 local_res18;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  cVar1 = IsInAudioThread();
  if (cVar1 == '\0') {
    local_28 = 0;
    local_18 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_48);
    if (puVar2 != (undefined8 *)0x0) {
      local_68 = (undefined4)param_1;
      uStack_64 = (undefined4)((ulonglong)param_1 >> 0x20);
      uStack_60 = (undefined4)param_2;
      uStack_5c = (undefined4)((ulonglong)param_2 >> 0x20);
      *puVar2 = &PTR_FUN_143f77c18;
      *(undefined4 *)(puVar2 + 1) = local_68;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_64;
      *(undefined4 *)(puVar2 + 2) = uStack_60;
      *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_5c;
    }
    local_58[0] = &LAB_1422e73e0;
    FUN_1422f8a30(local_58,local_res18);
    return;
  }
  plVar5 = *(longlong **)(param_1 + 0x90);
  uVar3 = 0;
  uVar4 = (longlong)*(int *)(param_1 + 0x98) & 0x1fffffffffffffff;
  if (plVar5 + *(int *)(param_1 + 0x98) < plVar5) {
    uVar4 = uVar3;
  }
  if (uVar4 != 0) {
    do {
      if (*plVar5 != 0) {
        FUN_1422d65d0(*plVar5,param_2);
      }
      plVar5 = plVar5 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar4);
  }
  return;
}



// FUNCTION 1422f8040 RemoveStreamingSoundSource body=341 status=ok
// SIG undefined RemoveStreamingSoundSource(void)

void FAudioStreamingManager::RemoveStreamingSoundSource(longlong param_1,longlong param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  char cVar1;
  BOOL BVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  
  plVar4 = *(longlong **)(param_2 + 0x10);
  if ((plVar4 != (longlong *)0x0) && (*plVar4 != 0)) {
    cVar1 = USoundWave::IsStreaming();
    if (cVar1 != '\0') {
      lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xf8);
      BVar2 = TryEnterCriticalSection(lpCriticalSection);
      if (BVar2 == 0) {
        EnterCriticalSection(lpCriticalSection);
      }
      GetWaveRequest(param_1,*plVar4);
      lVar3 = (longlong)*(int *)(param_1 + 0x68);
      if (*(int *)(param_1 + 0x68) != 0) {
        iVar8 = 0;
        bVar9 = **(longlong **)(param_1 + 0x60) != param_2;
        lVar7 = 0;
        iVar5 = 0;
        do {
          lVar7 = lVar7 + 1;
          iVar6 = iVar5 + 1;
          if (lVar7 < lVar3) {
            plVar4 = (longlong *)(*(longlong *)(param_1 + 0x60) + lVar7 * 8);
            do {
              if (bVar9 != (*plVar4 != param_2)) break;
              iVar6 = iVar6 + 1;
              lVar7 = lVar7 + 1;
              plVar4 = plVar4 + 1;
            } while (lVar7 < lVar3);
          }
          if (bVar9 != false) {
            if (iVar8 != iVar5) {
              ::_guard_xfg_dispatch_icall_nop
                        ((void *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar8 * 8),
                         (void *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar5 * 8),
                         (longlong)(iVar6 - iVar5) << 3);
            }
            iVar8 = iVar8 + (iVar6 - iVar5);
          }
          bVar9 = (bool)(bVar9 ^ 1);
          iVar5 = iVar6;
        } while (lVar7 < lVar3);
        *(int *)(param_1 + 0x68) = iVar8;
      }
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  return;
}



// FUNCTION 1422f81a0 RemoveStreamingSoundWave body=176 status=ok
// SIG undefined RemoveStreamingSoundWave(void)

void FAudioStreamingManager::RemoveStreamingSoundWave(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  BOOL BVar2;
  int local_res8 [2];
  
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf8));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf8));
  }
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x10,local_res8,param_2);
  if (((local_res8[0] != -1) &&
      (lVar1 = *(longlong *)(param_1 + 0x10) + (longlong)local_res8[0] * 0x18, lVar1 != 0)) &&
     (lVar1 = *(longlong *)(lVar1 + 8), lVar1 != 0)) {
    TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
    ::Remove(param_1 + 0x10,param_2);
    FStreamingWaveData::_scalar_deleting_destructor_(lVar1,1);
  }
  TSet<TTuple<USoundWave_*,FWaveRequest>,TDefaultMapHashableKeyFuncs<USoundWave_*,FWaveRequest,0>,FDefaultSetAllocator>
  ::Remove(param_1 + 0x70,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001422f8249. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf8));
  return;
}



// FUNCTION 1422f8250 FUN_1422f8250 body=161 status=ok
// SIG undefined FUN_1422f8250(void)

void FUN_1422f8250(longlong param_1,int param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (0 < *(int *)(param_1 + 0x138)) {
    lVar1 = 0;
    lVar3 = lVar1;
    lVar2 = *(longlong *)(param_1 + 0x130);
    if (*(longlong *)(param_1 + 0x130) == 0) {
      lVar2 = param_1 + 0x70;
    }
    while ((((*(longlong *)(lVar1 + 0x28 + lVar2) != param_3 ||
             (*(longlong *)(lVar1 + 0x30 + lVar2) != 0)) ||
            (*(int *)(lVar1 + 0x38 + lVar2) != param_4)) ||
           (*(int *)(param_1 + 0x68) <= *(int *)(lVar1 + 0x20 + lVar2) + 3))) {
      lVar3 = lVar3 + 1;
      lVar1 = lVar1 + 0x60;
      if (*(int *)(param_1 + 0x138) <= lVar3) {
        return;
      }
    }
    if (*(int *)(lVar1 + lVar2 + 0x24) < param_2) {
      FUN_1422f8800();
    }
  }
  return;
}



// FUNCTION 1422f8300 FUN_1422f8300 body=20 status=ok
// SIG undefined FUN_1422f8300(void)

void FUN_1422f8300(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x1fc) < (int)param_2) {
    iVar2 = 0;
    if (param_2 != 0) {
      if (param_2 < 5) {
        iVar2 = 4;
      }
      else {
        uVar1 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x2c,0);
        iVar2 = (int)(uVar1 / 0x2c);
        if (iVar2 < (int)param_2) {
          iVar2 = 0x7fffffff;
        }
      }
    }
    if (iVar2 != *(int *)(param_1 + 0x1fc)) {
      *(int *)(param_1 + 0x1fc) = iVar2;
      FUN_1422f85a0(param_1 + 0x140,*(undefined4 *)(param_1 + 0x1f8),iVar2,0x2c);
    }
    return;
  }
  return;
}



// FUNCTION 1422f8320 Reset body=294 status=ok
// SIG undefined Reset(void)

void TSet<TTuple<FName,FRetargetSourceCachedData>,TDefaultMapHashableKeyFuncs<FName,FRetargetSourceCachedData,0>,FDefaultSetAllocator>
     ::Reset(longlong param_1)

{
  int iVar1;
  void *_Dst;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      lVar3 = (longlong)local_1c * 0x30 + *local_38;
      if (*(longlong *)(lVar3 + 0x18) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar3 + 8) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  uVar4 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
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
      uVar2 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      lVar3 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar3 = param_1 + 0x38;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar3 + uVar2 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 1422f8450 FUN_1422f8450 body=147 status=ok
// SIG undefined FUN_1422f8450(void)

void FUN_1422f8450(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x10);
  if (param_3 < 7) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 2);
    pvVar1 = *(void **)((longlong)param_1 + 0x10);
    if (pvVar1 == (void *)0x0) {
      return;
    }
    param_4 = 0;
  }
  else {
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
      if (param_3 != 0) {
        pvVar1 = (void *)FMemory::Realloc(0,(int)param_3 * param_4,0);
        *(void **)((longlong)param_1 + 0x10) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 2);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar2;
  return;
}



// FUNCTION 1422f84f0 FUN_1422f84f0 body=163 status=ok
// SIG undefined FUN_1422f84f0(void)

void FUN_1422f84f0(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0xc0);
  if (param_3 < 3) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0x60);
    pvVar1 = *(void **)((longlong)param_1 + 0xc0);
    if (pvVar1 == (void *)0x0) {
      return;
    }
    param_4 = 0;
  }
  else {
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
      if (param_3 != 0) {
        pvVar1 = (void *)FMemory::Realloc(0,(int)param_3 * param_4,0);
        *(void **)((longlong)param_1 + 0xc0) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0x60);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0xc0) = uVar2;
  return;
}



// FUNCTION 1422f85a0 FUN_1422f85a0 body=155 status=ok
// SIG undefined FUN_1422f85a0(void)

void FUN_1422f85a0(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0xb0);
  if (param_3 < 5) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0x2c);
    pvVar1 = *(void **)((longlong)param_1 + 0xb0);
    if (pvVar1 == (void *)0x0) {
      return;
    }
    param_4 = 0;
  }
  else {
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
      if (param_3 != 0) {
        pvVar1 = (void *)FMemory::Realloc(0,(int)param_3 * param_4,0);
        *(void **)((longlong)param_1 + 0xb0) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0x2c);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0xb0) = uVar2;
  return;
}



// FUNCTION 1422f8640 ResizeGrow body=126 status=ok
// SIG undefined ResizeGrow(void)

void TArray<unsigned_short,TInlineAllocator<6,FDefaultAllocator>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 < 7) {
    iVar2 = 6;
  }
  else {
    lVar4 = 4;
    if ((*(int *)(param_1 + 0x1c) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 * 2,0);
    iVar2 = (int)(uVar3 >> 1);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x1c) = iVar2;
  FUN_1422f8450(param_1,param_2,iVar2,2);
  return;
}



// FUNCTION 1422f86c0 ResizeGrow body=157 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FBatchedElements::FBatchedMeshElement,TInlineAllocator<2,FDefaultAllocator>_>::
     ResizeGrow(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 200);
  if (uVar1 < 3) {
    iVar4 = 2;
  }
  else {
    lVar2 = 4;
    if ((*(int *)(param_1 + 0xcc) != 0) || (4 < uVar1)) {
      lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar3 = FMemory::QuantizeSize(lVar2 * 0x60,0);
    iVar4 = (int)(uVar3 / 0x60);
    if (iVar4 < (int)uVar1) {
      iVar4 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0xcc) = iVar4;
  FUN_1422f84f0(param_1,param_2,iVar4,0x60);
  return;
}



// FUNCTION 1422f8760 FUN_1422f8760 body=145 status=ok
// SIG undefined FUN_1422f8760(void)

void FUN_1422f8760(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0xb8);
  uVar3 = 4;
  if (4 < uVar1) {
    if ((*(int *)(param_1 + 0xbc) != 0) || (4 < uVar1)) {
      uVar3 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar2 = FMemory::QuantizeSize(uVar3 * 0x2c,0);
    uVar3 = uVar2 / 0x2c & 0xffffffff;
    if ((int)(uVar2 / 0x2c) < (int)uVar1) {
      uVar3 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0xbc) = (int)uVar3;
  FUN_1422f85a0(param_1,param_2,uVar3,0x2c);
  return;
}



// FUNCTION 1422f8800 FUN_1422f8800 body=99 status=ok
// SIG undefined FUN_1422f8800(void)

void FUN_1422f8800(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 7) {
      iVar1 = 6;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 * 2,0);
      iVar1 = (int)(uVar2 >> 1);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *(int *)(param_1 + 0x1c)) {
    *(int *)(param_1 + 0x1c) = iVar1;
    FUN_1422f8450(param_1,*(undefined4 *)(param_1 + 0x18),iVar1,2);
  }
  return;
}



// FUNCTION 1422f8870 FUN_1422f8870 body=120 status=ok
// SIG undefined FUN_1422f8870(void)

void FUN_1422f8870(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x600,0);
    iVar3 = (int)(uVar1 / 0x600);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x600,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 1422f88f0 FUN_1422f88f0 body=123 status=ok
// SIG undefined FUN_1422f88f0(void)

void FUN_1422f88f0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 5) {
      iVar2 = 4;
    }
    else {
      uVar1 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x2c,0);
      iVar2 = (int)(uVar1 / 0x2c);
      if (iVar2 < (int)param_2) {
        iVar2 = 0x7fffffff;
      }
    }
  }
  if (iVar2 != *(int *)(param_1 + 0xbc)) {
    *(int *)(param_1 + 0xbc) = iVar2;
    FUN_1422f85a0(param_1,*(undefined4 *)(param_1 + 0xb8),iVar2,0x2c);
  }
  return;
}



// FUNCTION 1422f89d0 Run body=91 status=ok
// SIG undefined Run(void)

undefined8 FAudioThread::Run(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FMemory::SetupTLSCachesOnCurrentThread();
  plVar2 = *(longlong **)(param_1 + 8);
  plVar1 = (longlong *)FTaskGraphInterface::Get();
  (**(code **)(*plVar1 + 0x28))(plVar1,1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  plVar2 = (longlong *)FTaskGraphInterface::Get();
  (**(code **)(*plVar2 + 0x38))(plVar2,1);
  FMemory::ClearAndDisableTLSCachesOnCurrentThread();
  return 0;
}



// FUNCTION 1422f8a30 FUN_1422f8a30 body=835 status=ok
// SIG undefined FUN_1422f8a30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1422f8a30(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_1f8 [40];
  longlong local_1d0;
  longlong local_1c8;
  undefined1 local_1c0 [24];
  undefined1 local_1a8 [32];
  undefined1 local_188 [80];
  undefined1 local_138 [80];
  undefined1 *local_e8 [2];
  longlong local_d8 [4];
  longlong *local_b8;
  int local_a8;
  undefined1 local_98 [16];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  if (DAT_146aef581 == '\0') {
    uVar8 = 0;
    if (*(int *)(param_1 + 8) != 0) {
      plVar10 = (longlong *)param_1[6];
      if ((longlong *)param_1[6] == (longlong *)0x0) {
        plVar10 = param_1 + 2;
      }
      if (plVar10 != (longlong *)0x0) {
        uVar8 = (**(code **)(*plVar10 + 8))();
      }
    }
    (*(code *)*param_1)(uVar8);
  }
  else if (DAT_146aef5a8 == 1) {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_98,param_1);
    local_b8 = (longlong *)0x0;
    local_a8 = 0;
    puVar7 = (undefined8 *)FUN_140438ef0(0x70,local_d8);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &PTR_CopyToEmptyStorage_1450377c8;
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar7 + 2,local_98);
    }
    local_e8[0] = &LAB_1422e73d0;
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
    uVar8 = FAudioAsyncBatcher::GetAsyncPrereq(&DAT_146aef6c0);
    lVar9 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_188,local_e8);
    plVar10 = (longlong *)FUN_140596960(local_1c0,uVar8,0xff);
    lVar3 = *plVar10;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(lVar3 + 0x10,lVar9);
    *(undefined4 *)(lVar3 + 0x60) = 1;
    lVar3 = *plVar10;
    lVar6 = plVar10[2];
    lVar4 = plVar10[1];
    lVar5 = *(longlong *)(lVar3 + 0x78);
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + 1;
      UNLOCK();
    }
    local_1d0 = lVar5;
    FUN_1405ab110(lVar3,lVar4,(int)lVar6,1);
    if (*(int *)(lVar9 + 0x40) != 0) {
      plVar10 = *(longlong **)(lVar9 + 0x30);
      if (*(longlong **)(lVar9 + 0x30) == (longlong *)0x0) {
        plVar10 = (longlong *)(lVar9 + 0x10);
      }
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x10))(plVar10,0);
      }
    }
    if (*(longlong *)(lVar9 + 0x30) != 0) {
      FMemory::Free();
    }
    if (lVar5 != 0) {
      LOCK();
      piVar1 = (int *)(lVar5 + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle(local_1d0);
      }
    }
    if (local_a8 != 0) {
      plVar10 = local_d8;
      if (local_b8 != (longlong *)0x0) {
        plVar10 = local_b8;
      }
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x10))(plVar10,0);
      }
    }
    if (local_b8 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  else {
    uVar8 = FAudioAsyncBatcher::GetAsyncPrereq(&DAT_146aef6c0);
    lVar9 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_138,param_1);
    plVar10 = (longlong *)FUN_140596960(local_1a8,uVar8,0xff);
    lVar3 = *plVar10;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(lVar3 + 0x10,lVar9);
    *(undefined4 *)(lVar3 + 0x60) = 1;
    lVar3 = *plVar10;
    lVar6 = plVar10[2];
    lVar4 = plVar10[1];
    lVar5 = *(longlong *)(lVar3 + 0x78);
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + 1;
      UNLOCK();
    }
    local_1c8 = lVar5;
    FUN_1405ab110(lVar3,lVar4,(int)lVar6,1);
    if (*(int *)(lVar9 + 0x40) != 0) {
      plVar10 = *(longlong **)(lVar9 + 0x30);
      if (*(longlong **)(lVar9 + 0x30) == (longlong *)0x0) {
        plVar10 = (longlong *)(lVar9 + 0x10);
      }
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x10))(plVar10,0);
      }
    }
    if (*(longlong *)(lVar9 + 0x30) != 0) {
      FMemory::Free();
    }
    if (lVar5 != 0) {
      LOCK();
      piVar1 = (int *)(lVar5 + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle(local_1c8);
      }
    }
  }
  if (*(int *)(param_1 + 8) != 0) {
    plVar10 = (longlong *)param_1[6];
    if ((longlong *)param_1[6] == (longlong *)0x0) {
      plVar10 = param_1 + 2;
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10,0);
    }
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1422f8d80 FUN_1422f8d80 body=395 status=ok
// SIG undefined FUN_1422f8d80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1422f8d80(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined1 local_98 [32];
  undefined1 local_78 [80];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  if (DAT_146aef581 == '\0') {
    uVar9 = 0;
    if (*(int *)(param_1 + 8) != 0) {
      plVar8 = (longlong *)param_1[6];
      if ((longlong *)param_1[6] == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      if (plVar8 != (longlong *)0x0) {
        uVar9 = (**(code **)(*plVar8 + 8))();
      }
    }
    (*(code *)*param_1)(uVar9);
  }
  else {
    lVar7 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_78,param_1);
    plVar8 = (longlong *)FUN_140596960(local_98,0,0xff);
    lVar3 = *plVar8;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(lVar3 + 0x10,lVar7);
    *(undefined4 *)(lVar3 + 0x60) = 2;
    lVar3 = *plVar8;
    lVar6 = plVar8[2];
    lVar4 = plVar8[1];
    lVar5 = *(longlong *)(lVar3 + 0x78);
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + 1;
      UNLOCK();
    }
    local_a8 = lVar5;
    FUN_1405ab110(lVar3,lVar4,(int)lVar6,1);
    if (*(int *)(lVar7 + 0x40) != 0) {
      plVar8 = *(longlong **)(lVar7 + 0x30);
      if (*(longlong **)(lVar7 + 0x30) == (longlong *)0x0) {
        plVar8 = (longlong *)(lVar7 + 0x10);
      }
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x10))(plVar8,0);
      }
    }
    if (*(longlong *)(lVar7 + 0x30) != 0) {
      FMemory::Free();
    }
    if (lVar5 != 0) {
      LOCK();
      piVar1 = (int *)(lVar5 + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle(local_a8);
      }
    }
  }
  if (*(int *)(param_1 + 8) != 0) {
    plVar8 = (longlong *)param_1[6];
    if ((longlong *)param_1[6] == (longlong *)0x0) {
      plVar8 = param_1 + 2;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1422f8f10 FUN_1422f8f10 body=176 status=ok
// SIG undefined FUN_1422f8f10(void)

void FUN_1422f8f10(longlong param_1,longlong param_2)

{
  uint *puVar1;
  
  AActor::Serialize();
  if ((*(int *)(param_2 + 0x40) < 0x112) && ((*(byte *)(param_2 + 0x28) & 1) != 0)) {
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x460) + 0x2e8);
    *puVar1 = *puVar1 ^ (*(uint *)(param_1 + 0x478) ^
                        *(uint *)(*(longlong *)(param_1 + 0x460) + 0x2e8)) & 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x460) + 0x2ec) = 0;
    *(undefined4 *)(*(longlong *)(param_1 + 0x460) + 0x2e4) = *(undefined4 *)(param_1 + 0x47c);
    *(undefined4 *)(*(longlong *)(param_1 + 0x460) + 0x2d0) = *(undefined4 *)(param_1 + 0x480);
    *(undefined4 *)(*(longlong *)(param_1 + 0x460) + 0x2f0) = *(undefined4 *)(param_1 + 0x484);
    FUN_140a296b0(*(longlong *)(param_1 + 0x460) + 0x300,param_1 + 0x490);
  }
  return;
}



// FUNCTION 1422f8fc0 thunk_FUN_1422f8fd0 body=5 status=ok
// SIG undefined thunk_FUN_1422f8fd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void thunk_FUN_1422f8fd0(undefined1 *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined2 *puVar7;
  int iVar8;
  int iVar10;
  ulonglong uVar11;
  undefined1 auStack_78 [32];
  undefined4 uStack_58;
  undefined2 *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  ulonglong uStack_20;
  ulonglong uVar9;
  
  uStack_20 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  FUN_141763960();
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x39);
  uVar9 = 0;
  iVar8 = 0;
  if (((int)param_2[8] < 0xf0) && ((int)param_2[8] != 0xdd)) {
    (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x28);
    if (*(longlong *)(param_1 + 0x28) != 0) {
      lVar3 = UObject::GetPrivateStaticClass();
      for (lVar6 = *(longlong *)(param_1 + 0x28); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
        if (lVar6 == lVar3) {
          if (*(longlong *)(param_1 + 0x28) != 0) {
            uVar4 = UObject::GetPrivateStaticClass();
            for (uVar11 = *(ulonglong *)(param_1 + 0x28);
                (uVar5 = uVar9, uVar11 != 0 &&
                (uVar5 = *(ulonglong *)(param_1 + 0x28), uVar11 != uVar4));
                uVar11 = *(ulonglong *)(uVar11 + 0x30)) {
            }
            *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) | 0x40;
            puStack_48 = (undefined2 *)0x0;
            uStack_40 = 0;
            uVar11 = uVar9;
            if (*(longlong *)(param_1 + 0x28) != 0) {
              uVar5 = UObject::GetPrivateStaticClass();
              for (uVar4 = *(ulonglong *)(param_1 + 0x28);
                  (uVar11 = uVar9, uVar4 != 0 &&
                  (uVar11 = *(ulonglong *)(param_1 + 0x28), uVar4 != uVar5));
                  uVar4 = *(ulonglong *)(uVar4 + 0x30)) {
              }
            }
            uStack_58 = 0;
            FUN_1417a5b30(uVar11,&puStack_48,1,0);
            while( true ) {
              iVar10 = (int)uVar9;
              if ((iVar10 < 0) || ((int)uStack_40 <= iVar10)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (!bVar2) break;
              *(uint *)(*(longlong *)(puStack_48 + (longlong)iVar10 * 4) + 8) =
                   *(uint *)(*(longlong *)(puStack_48 + (longlong)iVar10 * 4) + 8) | 0x40;
              uVar9 = (ulonglong)(iVar10 + 1);
            }
            if (puStack_48 != (undefined2 *)0x0) {
              FMemory::Free();
            }
          }
          break;
        }
      }
    }
    puVar1 = param_1;
    if (param_1 != (undefined1 *)0x0) {
      lVar6 = UBlueprint::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((bVar2) && ((*(byte *)(param_2 + 5) & 1) != 0)) && ((param_1[0x68] & 1) != 0)) {
        puStack_48 = (undefined2 *)0x0;
        puVar1 = auStack_78;
      }
    }
    (**(code **)(*param_2 + 0x30))(param_2,puVar1 + 0x30);
  }
  if (((*(byte *)(param_2 + 5) & 1) != 0) &&
     (((*(int *)(param_1 + 0x48) == 0 && *(int *)(param_1 + 0x44) == 0) &&
      *(int *)(param_1 + 0x40) == 0) && *(int *)(param_1 + 0x3c) == 0)) {
    UObjectBaseUtility::GetPathName(param_1,&puStack_48,0);
    if (uStack_40._4_4_ != (int)uStack_40) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&puStack_48,uStack_40 & 0xffffffff);
    }
    if ((int)uStack_40 != 0) {
      iVar8 = (int)uStack_40 + -1;
    }
    puVar7 = &DAT_143f3eda8;
    if ((int)uStack_40 != 0) {
      puVar7 = puStack_48;
    }
    FSHA1::HashBuffer(puVar7,iVar8 * 2,auStack_38);
    *(undefined4 *)(param_1 + 0x3c) = uStack_34;
    *(undefined4 *)(param_1 + 0x40) = uStack_30;
    *(undefined4 *)(param_1 + 0x44) = uStack_2c;
    *(undefined4 *)(param_1 + 0x48) = uStack_28;
    if (puStack_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1422f8fd0 FUN_1422f8fd0 body=623 status=ok
// SIG undefined FUN_1422f8fd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1422f8fd0(undefined1 *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined2 *puVar7;
  int iVar8;
  int iVar10;
  ulonglong uVar11;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined2 *local_48;
  undefined8 local_40;
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  ulonglong local_20;
  ulonglong uVar9;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  FUN_141763960();
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x39);
  uVar9 = 0;
  iVar8 = 0;
  if (((int)param_2[8] < 0xf0) && ((int)param_2[8] != 0xdd)) {
    (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x28);
    if (*(longlong *)(param_1 + 0x28) != 0) {
      lVar3 = UObject::GetPrivateStaticClass();
      for (lVar6 = *(longlong *)(param_1 + 0x28); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
        if (lVar6 == lVar3) {
          if (*(longlong *)(param_1 + 0x28) != 0) {
            uVar4 = UObject::GetPrivateStaticClass();
            for (uVar11 = *(ulonglong *)(param_1 + 0x28);
                (uVar5 = uVar9, uVar11 != 0 &&
                (uVar5 = *(ulonglong *)(param_1 + 0x28), uVar11 != uVar4));
                uVar11 = *(ulonglong *)(uVar11 + 0x30)) {
            }
            *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) | 0x40;
            local_48 = (undefined2 *)0x0;
            local_40 = 0;
            uVar11 = uVar9;
            if (*(longlong *)(param_1 + 0x28) != 0) {
              uVar5 = UObject::GetPrivateStaticClass();
              for (uVar4 = *(ulonglong *)(param_1 + 0x28);
                  (uVar11 = uVar9, uVar4 != 0 &&
                  (uVar11 = *(ulonglong *)(param_1 + 0x28), uVar4 != uVar5));
                  uVar4 = *(ulonglong *)(uVar4 + 0x30)) {
              }
            }
            local_58 = 0;
            FUN_1417a5b30(uVar11,&local_48,1,0);
            while( true ) {
              iVar10 = (int)uVar9;
              if ((iVar10 < 0) || ((int)local_40 <= iVar10)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (!bVar2) break;
              *(uint *)(*(longlong *)(local_48 + (longlong)iVar10 * 4) + 8) =
                   *(uint *)(*(longlong *)(local_48 + (longlong)iVar10 * 4) + 8) | 0x40;
              uVar9 = (ulonglong)(iVar10 + 1);
            }
            if (local_48 != (undefined2 *)0x0) {
              FMemory::Free();
            }
          }
          break;
        }
      }
    }
    puVar1 = param_1;
    if (param_1 != (undefined1 *)0x0) {
      lVar6 = UBlueprint::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((bVar2) && ((*(byte *)(param_2 + 5) & 1) != 0)) && ((param_1[0x68] & 1) != 0)) {
        local_48 = (undefined2 *)0x0;
        puVar1 = auStack_78;
      }
    }
    (**(code **)(*param_2 + 0x30))(param_2,puVar1 + 0x30);
  }
  if (((*(byte *)(param_2 + 5) & 1) != 0) &&
     (((*(int *)(param_1 + 0x48) == 0 && *(int *)(param_1 + 0x44) == 0) &&
      *(int *)(param_1 + 0x40) == 0) && *(int *)(param_1 + 0x3c) == 0)) {
    UObjectBaseUtility::GetPathName(param_1,&local_48,0);
    if (local_40._4_4_ != (int)local_40) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48,local_40 & 0xffffffff);
    }
    if ((int)local_40 != 0) {
      iVar8 = (int)local_40 + -1;
    }
    puVar7 = &DAT_143f3eda8;
    if ((int)local_40 != 0) {
      puVar7 = local_48;
    }
    FSHA1::HashBuffer(puVar7,iVar8 * 2,local_38);
    *(undefined4 *)(param_1 + 0x3c) = local_34;
    *(undefined4 *)(param_1 + 0x40) = local_30;
    *(undefined4 *)(param_1 + 0x44) = local_2c;
    *(undefined4 *)(param_1 + 0x48) = local_28;
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1422f9240 FUN_1422f9240 body=82 status=ok
// SIG undefined FUN_1422f9240(void)

void FUN_1422f9240(longlong *param_1,longlong param_2)

{
  FUN_141722e60();
  if (((*(byte *)(param_2 + 0x28) & 1) != 0) && ((*(uint *)(param_2 + 0x30) >> 0xc & 1) == 0)) {
    (**(code **)(*param_1 + 0x318))(param_1,param_1[0x1f],1,0,0);
  }
  return;
}



// FUNCTION 1422f92a0 FUN_1422f92a0 body=319 status=ok
// SIG undefined FUN_1422f92a0(void)

void FUN_1422f92a0(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_14234e7d0();
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    iVar2 = *(int *)(param_1 + 0x8f0);
    if (0 < (longlong)iVar2) {
      lVar6 = 0;
      do {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x8e8) + lVar6 * 8);
        if (lVar4 != 0) {
          iVar3 = *(int *)(param_1 + 0x8e0);
          *(int *)(param_1 + 0x8e0) = iVar3 + 1;
          if (*(int *)(param_1 + 0x8e4) < iVar3 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x8d8,iVar3);
          }
          uStack_10 = (undefined4)lVar4;
          uStack_c = (undefined4)((ulonglong)lVar4 >> 0x20);
          puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x8d8) + (longlong)iVar3 * 0x10);
          *puVar1 = 0x3f800000;
          puVar1[1] = uStack_14;
          puVar1[2] = uStack_10;
          puVar1[3] = uStack_c;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar2);
    }
    *(undefined4 *)(param_1 + 0x8f0) = 0;
    if (*(int *)(param_1 + 0x8f4) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x8e8,0);
    }
    uVar5 = *(uint *)(param_1 + 0x308) & 0x10;
    if (uVar5 != 0) {
      uVar5 = uVar5 * 2 | *(uint *)(param_1 + 0x308) & 0xffffffdf;
      uVar5 = (uVar5 * 4 ^ uVar5) & 0x40 ^ uVar5;
      *(uint *)(param_1 + 0x308) = (uVar5 * 8 ^ uVar5) & 0x80 ^ uVar5;
    }
    if (-1.0 < *(float *)(param_1 + 0x5c4)) {
      *(undefined4 *)(param_1 + 0x5d4) = *(undefined4 *)(param_1 + 0x5c8);
      *(undefined4 *)(param_1 + 0x5d8) = *(undefined4 *)(param_1 + 0x5cc);
      *(float *)(param_1 + 0x5d0) = *(float *)(param_1 + 0x5c4);
    }
  }
  return;
}



// FUNCTION 1422f93e0 FUN_1422f93e0 body=136 status=ok
// SIG undefined FUN_1422f93e0(void)

void FUN_1422f93e0(longlong param_1,longlong param_2,longlong param_3)

{
  BOOL BVar1;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2b8));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2b8));
  }
  FUN_141724360(param_1,param_2,param_3);
  if ((((*(byte *)(param_3 + 0x28) & 1) != 0) && ((*(byte *)(param_3 + 0x2a) & 8) == 0)) &&
     (param_2 == *(longlong *)(param_1 + 0xf8))) {
    FUN_1422fb790(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001422f9461. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2b8));
  return;
}



// FUNCTION 1422f9470 FUN_1422f9470 body=891 status=ok
// SIG undefined FUN_1422f9470(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1422f9470(longlong *param_1,longlong param_2,float *param_3)

{
  longlong lVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar14;
  float fVar15;
  undefined1 in_XMM5 [16];
  undefined1 auVar13 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_b8;
  float fStack_b4;
  longlong local_9c;
  undefined4 local_94;
  longlong local_90;
  undefined4 local_88;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  
  if (((0.0001 < ABS(*param_3)) || (0.0001 < ABS(param_3[1]))) || (0.0001 < ABS(param_3[2]))) {
    if (((param_2 == 0) || (*(longlong *)(param_2 + 0x168) == 0)) ||
       (*(char *)(*(longlong *)(param_2 + 0x168) + 0x24e) == '\0')) {
      param_2 = 0;
    }
    *param_1 = param_2;
    if (param_2 != 0) {
      lVar1 = *(longlong *)(param_2 + 0x168);
      if (lVar1 == 0) {
        uVar7 = (undefined4)DAT_1468b5da0;
        uVar8 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
        local_94 = DAT_1468b5da8;
        lVar4 = _DAT_1468b5d90;
        fVar9 = DAT_1468b5d98;
      }
      else {
        lVar4 = *(longlong *)(lVar1 + 0x220);
        fVar9 = *(float *)(lVar1 + 0x228);
        local_78 = *(float *)(lVar1 + 0x210);
        fStack_74 = *(float *)(lVar1 + 0x214);
        fStack_70 = *(float *)(lVar1 + 0x218);
        fStack_6c = *(float *)(lVar1 + 0x21c);
        auVar13._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_74);
        auVar13._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_78);
        auVar13._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_70);
        auVar13._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_6c);
        iVar5 = movmskps(fVar9,auVar13);
        if (iVar5 != 0) {
          *(float *)(lVar1 + 0x250) = local_78;
          *(float *)(lVar1 + 0x254) = fStack_74;
          *(float *)(lVar1 + 600) = fStack_70;
          *(float *)(lVar1 + 0x25c) = fStack_6c;
          puVar6 = (undefined8 *)FQuat::Rotator(&local_78,&local_9c);
          *(undefined8 *)(lVar1 + 0x260) = *puVar6;
          *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar6 + 1);
        }
        uVar7 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
        uVar8 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
        local_94 = *(undefined4 *)(lVar1 + 0x268);
      }
      local_9c = CONCAT44(uVar8,uVar7);
      *(longlong *)((longlong)param_1 + 0x14) = lVar4;
      param_1[4] = local_9c;
      *(float *)((longlong)param_1 + 0x1c) = fVar9;
      *(undefined4 *)(param_1 + 5) = local_94;
      *(undefined8 *)((longlong)param_1 + 0x2c) = *(undefined8 *)param_3;
      *(float *)((longlong)param_1 + 0x34) = param_3[2];
      fVar10 = *param_3;
      fVar11 = param_3[1];
      fVar12 = param_3[2];
      local_b8 = (float)lVar4;
      fStack_b4 = (float)((ulonglong)lVar4 >> 0x20);
      local_90 = local_9c;
      local_88 = local_94;
      FRotator::Quaternion(&local_90,&local_78);
      local_78 = local_78 * _DAT_146aef790;
      fStack_74 = fStack_74 * fRam0000000146aef794;
      fStack_70 = fStack_70 * fRam0000000146aef798;
      fStack_6c = fStack_6c * fRam0000000146aef79c;
      fVar19 = (float)(_DAT_146aef5b0 & _DAT_146aef5c0);
      fVar20 = (float)(uRam0000000146aef5b4 & uRam0000000146aef5c4);
      fVar21 = (float)(uRam0000000146aef5b8 & uRam0000000146aef5c8);
      fVar16 = (float)((uint)(fVar10 - local_b8) & _DAT_146aef5c0);
      fVar17 = (float)((uint)(fVar11 - fStack_b4) & uRam0000000146aef5c4);
      fVar18 = (float)((uint)(fVar12 - fVar9) & uRam0000000146aef5c8);
      auVar3._4_4_ = fVar20;
      auVar3._0_4_ = fVar19;
      auVar3._8_4_ = fVar21;
      auVar3._12_4_ = uRam0000000146aef5bc & uRam0000000146aef5cc;
      auVar13 = rcpps(in_XMM5,auVar3);
      fVar9 = fVar18 * fStack_74 - fVar17 * fStack_70;
      fVar10 = fVar16 * fStack_70 - fVar18 * local_78;
      fVar11 = fVar17 * local_78 - fVar16 * fStack_74;
      fVar12 = auVar13._0_4_;
      fVar14 = auVar13._4_4_;
      fVar15 = auVar13._8_4_;
      fVar9 = fVar9 + fVar9;
      fVar10 = fVar10 + fVar10;
      fVar11 = fVar11 + fVar11;
      fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar19;
      fVar14 = (fVar14 + fVar14) - fVar14 * fVar14 * fVar20;
      fVar15 = (fVar15 + fVar15) - fVar15 * fVar15 * fVar21;
      bVar2 = (float)((uint)fVar21 & uRam0000000146aef728) <= fRam0000000146aef788;
      fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar19;
      fVar14 = (fVar14 + fVar14) - fVar14 * fVar14 * fVar20;
      fVar15 = (fVar15 + fVar15) - fVar15 * fVar15 * fVar21;
      param_1[1] = CONCAT44(((fVar9 * fStack_70 - fVar11 * local_78) + fStack_6c * fVar10 + fVar17)
                            * (float)(-(uint)((float)((uint)fVar20 & uRam0000000146aef724) <=
                                             fRam0000000146aef784) & (uint)fVar14 ^ (uint)fVar14),
                            ((fVar11 * fStack_74 - fVar10 * fStack_70) + fStack_6c * fVar9 + fVar16)
                            * (float)(-(uint)((float)((uint)fVar19 & _DAT_146aef720) <=
                                             _DAT_146aef780) & (uint)fVar12 ^ (uint)fVar12));
      *(float *)(param_1 + 2) =
           ((fVar10 * local_78 - fVar9 * fStack_74) + fStack_6c * fVar11 + fVar18) *
           (float)(-(uint)bVar2 & (uint)fVar15 ^ (uint)fVar15);
      return;
    }
    param_1[1] = *(longlong *)param_3;
    fVar9 = param_3[2];
  }
  else {
    *param_1 = 0;
    param_1[1] = _DAT_1468b5d90;
    fVar9 = DAT_1468b5d98;
  }
  *(float *)(param_1 + 2) = fVar9;
  return;
}



// FUNCTION 1422f97f0 FUN_1422f97f0 body=151 status=ok
// SIG undefined FUN_1422f97f0(void)

void FUN_1422f97f0(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  
  if (*(int *)(param_1 + 0xa4) == -1) {
    plVar2 = *(longlong **)(param_1 + 0x90);
    uVar3 = 0;
    uVar4 = (longlong)*(int *)(param_1 + 0x98) & 0x1fffffffffffffff;
    if (plVar2 + *(int *)(param_1 + 0x98) < plVar2) {
      uVar4 = uVar3;
    }
    if (uVar4 != 0) {
      do {
        lVar1 = *plVar2;
        if (lVar1 != 0) {
          bVar5 = *(int *)(lVar1 + 0x3c) != param_2;
          if (!bVar5) {
            *(int *)(param_1 + 0xa8) = param_2;
          }
          FUN_1422d8290(lVar1,bVar5);
        }
        plVar2 = plVar2 + 1;
        uVar3 = uVar3 + 1;
      } while (uVar3 != uVar4);
    }
  }
  return;
}


