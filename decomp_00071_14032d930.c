// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14032d930 FUN_14032d930 body=245 status=ok
// SIG undefined FUN_14032d930(void)

void FUN_14032d930(void)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  
  if ((DAT_146aeb1c0 != 0) && (DAT_146aeb1c0 != 1)) {
    uVar2 = FUN_14218cdd0();
    FUN_140b9e990(&DAT_146aeb108,uVar2);
    atexit((_func_5014 *)&LAB_143ea7040);
    return;
  }
  plVar3 = (longlong *)FUN_14218de70();
  plVar4 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_GetPoolName_144fdbbe8;
    plVar4[1] = (longlong)&DAT_146aeb108;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[3] = lVar5;
    *plVar4 = (longlong)&PTR_GetPoolName_144fdbc60;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar3,1);
    (**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
    iVar1 = (int)plVar3[1];
    *(int *)(plVar3 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar3 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar3,iVar1);
    }
    puVar6 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar3);
    *puVar6 = plVar4;
    *(undefined4 *)(puVar6 + 1) = 2;
  }
  atexit((_func_5014 *)&LAB_143ea7040);
  return;
}



// FUNCTION 14032da30 FUN_14032da30 body=346 status=ok
// SIG undefined FUN_14032da30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14032da30(void)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  if ((DAT_146aeb1c0 == 0) || (DAT_146aeb1c0 == 1)) {
    plVar3 = (longlong *)FUN_14218de70();
    plVar4 = (longlong *)FMemory::Realloc(0,0x20);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_GetPoolName_144fdc560;
      plVar4[1] = (longlong)&DAT_146aeaeb0;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[3] = lVar5;
      *plVar4 = (longlong)&PTR_GetPoolName_144fdc5a8;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar3,1);
      (**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
      iVar1 = (int)plVar3[1];
      *(int *)(plVar3 + 1) = iVar1 + 1;
      if (*(int *)((longlong)plVar3 + 0xc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar3,iVar1);
      }
      puVar2 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar3);
      *puVar2 = plVar4;
      *(undefined4 *)(puVar2 + 1) = 2;
    }
  }
  else {
    puVar2 = (undefined8 *)FUN_14218ce40();
    if (puVar2 != &DAT_146aeaeb0) {
      DAT_146aeaeb0 = *puVar2;
      uRam0000000146aeaeb8 = puVar2[1];
      _DAT_146aeaec0 = puVar2[2];
      uRam0000000146aeaec8 = puVar2[3];
      _DAT_146aeaed0 = puVar2[4];
      DAT_146aeaed8 = puVar2[5];
      _DAT_146aeaee0 = puVar2[6];
      _DAT_146aeaee8 = puVar2[7];
      _DAT_146aeaef0 = puVar2[8];
      _DAT_146aeaef8 = puVar2[9];
      DAT_146aeaf00 = puVar2[10];
      DAT_146aeaf08 = puVar2[0xb];
      DAT_146aeaf10 = puVar2[0xc];
      DAT_146aeaf18 = 1;
      atexit((_func_5014 *)&LAB_143ea7050);
      return;
    }
  }
  atexit((_func_5014 *)&LAB_143ea7050);
  return;
}



// FUNCTION 14032db90 FUN_14032db90 body=270 status=ok
// SIG undefined FUN_14032db90(void)

void FUN_14032db90(void)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  if ((DAT_146aeb1c0 == 0) || (DAT_146aeb1c0 == 1)) {
    plVar3 = (longlong *)FUN_14218de70();
    plVar4 = (longlong *)FMemory::Realloc(0,0x20);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_GetPoolName_144fdc490;
      plVar4[1] = (longlong)&DAT_146aeaf20;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[3] = lVar5;
      *plVar4 = (longlong)&PTR_GetPoolName_144fdc518;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar3,1);
      (**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
      iVar1 = (int)plVar3[1];
      *(int *)(plVar3 + 1) = iVar1 + 1;
      if (*(int *)((longlong)plVar3 + 0xc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar3,iVar1);
      }
      puVar2 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar3);
      *puVar2 = plVar4;
      *(undefined4 *)(puVar2 + 1) = 2;
    }
  }
  else {
    puVar2 = (undefined8 *)FUN_14218ceb0();
    if (puVar2 != &DAT_146aeaf20) {
      DAT_146aeaf20 = *puVar2;
      DAT_146aeaf28 = 1;
      atexit((_func_5014 *)&LAB_143ea7060);
      return;
    }
  }
  atexit((_func_5014 *)&LAB_143ea7060);
  return;
}



// FUNCTION 14032dca0 FUN_14032dca0 body=270 status=ok
// SIG undefined FUN_14032dca0(void)

void FUN_14032dca0(void)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  if ((DAT_146aeb1c0 == 0) || (DAT_146aeb1c0 == 1)) {
    plVar3 = (longlong *)FUN_14218de70();
    plVar4 = (longlong *)FMemory::Realloc(0,0x20);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_GetPoolName_144fdc5f0;
      plVar4[1] = (longlong)&DAT_146aeaea0;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[3] = lVar5;
      *plVar4 = (longlong)&PTR_GetPoolName_144fdc638;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar3,1);
      (**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
      iVar1 = (int)plVar3[1];
      *(int *)(plVar3 + 1) = iVar1 + 1;
      if (*(int *)((longlong)plVar3 + 0xc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar3,iVar1);
      }
      puVar2 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar3);
      *puVar2 = plVar4;
      *(undefined4 *)(puVar2 + 1) = 2;
    }
  }
  else {
    puVar2 = (undefined8 *)FUN_14218cff0();
    if (puVar2 != &DAT_146aeaea0) {
      DAT_146aeaea0 = *puVar2;
      DAT_146aeaea8 = 1;
      atexit((_func_5014 *)&LAB_143ea7070);
      return;
    }
  }
  atexit((_func_5014 *)&LAB_143ea7070);
  return;
}



// FUNCTION 14032ddb0 FUN_14032ddb0 body=281 status=ok
// SIG undefined FUN_14032ddb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14032ddb0(void)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  if ((DAT_146aeb1c0 == 0) || (DAT_146aeb1c0 == 1)) {
    plVar3 = (longlong *)FUN_14218de70();
    plVar4 = (longlong *)FMemory::Realloc(0,0x20);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_GetPoolName_144fdc090;
      plVar4[1] = (longlong)&DAT_146aeafd0;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[3] = lVar5;
      *plVar4 = (longlong)&PTR_GetPoolName_144fdc0f0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar3,1);
      (**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
      iVar1 = (int)plVar3[1];
      *(int *)(plVar3 + 1) = iVar1 + 1;
      if (*(int *)((longlong)plVar3 + 0xc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar3,iVar1);
      }
      puVar2 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar3);
      *puVar2 = plVar4;
      *(undefined4 *)(puVar2 + 1) = 2;
    }
  }
  else {
    puVar2 = (undefined8 *)FUN_14218d0e0();
    if (puVar2 != &DAT_146aeafd0) {
      DAT_146aeafd0 = *puVar2;
      uRam0000000146aeafd8 = puVar2[1];
      _DAT_146aeafe0 = puVar2[2];
      uRam0000000146aeafe8 = puVar2[3];
      DAT_146aeaff0 = 1;
      atexit((_func_5014 *)&LAB_143ea7080);
      return;
    }
  }
  atexit((_func_5014 *)&LAB_143ea7080);
  return;
}



// FUNCTION 14032ded0 FUN_14032ded0 body=292 status=ok
// SIG undefined FUN_14032ded0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14032ded0(void)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  if ((DAT_146aeb1c0 == 0) || (DAT_146aeb1c0 == 1)) {
    plVar3 = (longlong *)FUN_14218de70();
    plVar4 = (longlong *)FMemory::Realloc(0,0x20);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_GetPoolName_144fdc1e8;
      plVar4[1] = (longlong)&DAT_146aeaf98;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[3] = lVar5;
      *plVar4 = (longlong)&PTR_GetPoolName_144fdc230;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar3,1);
      (**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
      iVar1 = (int)plVar3[1];
      *(int *)(plVar3 + 1) = iVar1 + 1;
      if (*(int *)((longlong)plVar3 + 0xc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar3,iVar1);
      }
      puVar2 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar3);
      *puVar2 = plVar4;
      *(undefined4 *)(puVar2 + 1) = 2;
    }
  }
  else {
    puVar2 = (undefined8 *)FUN_14218d320();
    if (puVar2 != &DAT_146aeaf98) {
      DAT_146aeaf98 = *puVar2;
      uRam0000000146aeafa0 = puVar2[1];
      _DAT_146aeafa8 = puVar2[2];
      uRam0000000146aeafb0 = puVar2[3];
      _DAT_146aeafb8 = puVar2[4];
      uRam0000000146aeafc0 = puVar2[5];
      DAT_146aeafc8 = 1;
      atexit((_func_5014 *)&LAB_143ea7090);
      return;
    }
  }
  atexit((_func_5014 *)&LAB_143ea7090);
  return;
}



// FUNCTION 14032e010 FUN_14032e010 body=256 status=ok
// SIG undefined FUN_14032e010(void)

void FUN_14032e010(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_146aeae26;
    plVar1[2] = (longlong)FUN_14218f940;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"GbxTelemetryCore",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 14032e280 `dynamic_initializer_for_'ModuleRegistrantMessaging'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantMessaging''(void)

void _dynamic_initializer_for__ModuleRegistrantMessaging__(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_146aed334;
    plVar1[2] = (longlong)FStaticallyLinkedModuleRegistrant<FMessagingModule>::InitializeModule;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"Messaging",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 14032e380 `dynamic_initializer_for_'ModuleRegistrantMessagingCommon'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantMessagingCommon''(void)

void _dynamic_initializer_for__ModuleRegistrantMessagingCommon__(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)
              TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FDefaultModuleImpl>,class_IModuleInterface*___ptr64___cdecl(void)>
              ::vftable;
    plVar1[1] = (longlong)&DAT_146aed335;
    plVar1[2] = (longlong)FUN_14043cbe0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"MessagingCommon",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 14032e480 FUN_14032e480 body=112 status=ok
// SIG undefined FUN_14032e480(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14032e480(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aed360 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"assetregistry.logdetailedtags",0,
                  L"If nonzero, GetAllocatedSize will display detailed tag memory usage.",0);
  _DAT_146aed358 = &PTR_FUN_143f3ecf8;
  DAT_146aed368 = (**(code **)(*DAT_146aed360 + 0x38))(DAT_146aed360);
  atexit(FUN_143ea76e0);
  return;
}



// FUNCTION 14032e4f0 `dynamic_initializer_for_'GRegisterAssetRegistryVersion'' body=81 status=ok
// SIG undefined `dynamic_initializer_for_'GRegisterAssetRegistryVersion''(void)

void _dynamic_initializer_for__GRegisterAssetRegistryVersion__(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = DAT_1465273c8;
  uStack_14 = DAT_1465273cc;
  uStack_10 = DAT_1465273d0;
  uStack_c = DAT_1465273d4;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AssetRegistry",1);
  FCustomVersionRegistration::FCustomVersionRegistration(&DAT_146aed338,&local_18,5,*puVar1);
  atexit((_func_5014 *)&LAB_143ea7730);
  return;
}



// FUNCTION 14032e570 `dynamic_initializer_for_'ModuleRegistrantAssetRegistry'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantAssetRegistry''(void)

void _dynamic_initializer_for__ModuleRegistrantAssetRegistry__(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_146aed350;
    plVar1[2] = (longlong)FUN_1421bb8d0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"AssetRegistry",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 14032e6d0 `dynamic_initializer_for_'ScriptStruct_AssetRegistry_StaticRegisterNativesFARFilter'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_AssetRegistry_StaticRegisterNativesFARFilter''(void)

void _dynamic_initializer_for__ScriptStruct_AssetRegistry_StaticRegisterNativesFARFilter__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0xe8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144fe2f88;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ARFilter",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14032e730 `dynamic_initializer_for_'ScriptStruct_AssetRegistry_StaticRegisterNativesFAssetBundleData'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_AssetRegistry_StaticRegisterNativesFAssetBundleData''(void)

void _dynamic_initializer_for__ScriptStruct_AssetRegistry_StaticRegisterNativesFAssetBundleData__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144fe30a0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AssetBundleData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14032e790 `dynamic_initializer_for_'ScriptStruct_AssetRegistry_StaticRegisterNativesFAssetBundleEntry'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_AssetRegistry_StaticRegisterNativesFAssetBundleEntry''(void)

void _dynamic_initializer_for__ScriptStruct_AssetRegistry_StaticRegisterNativesFAssetBundleEntry__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144fe31b8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AssetBundleEntry",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14032e7f0 FUN_14032e7f0 body=92 status=ok
// SIG undefined FUN_14032e7f0(void)

void FUN_14032e7f0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144fe32d0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AssetData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14032e850 `dynamic_initializer_for_'ScriptStruct_AssetRegistry_StaticRegisterNativesFTagAndValue'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_AssetRegistry_StaticRegisterNativesFTagAndValue''(void)

void _dynamic_initializer_for__ScriptStruct_AssetRegistry_StaticRegisterNativesFTagAndValue__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1440e53f0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"TagAndValue",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14032e8b0 FUN_14032e8b0 body=66 status=ok
// SIG undefined FUN_14032e8b0(void)

void FUN_14032e8b0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ARFilter",1);
  UObjectCompiledInDeferStruct(FARFilter::StaticStruct,L"/Script/AssetRegistry",*puVar1,0,0);
  return;
}



// FUNCTION 14032e900 FUN_14032e900 body=66 status=ok
// SIG undefined FUN_14032e900(void)

void FUN_14032e900(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AssetBundleData",1);
  UObjectCompiledInDeferStruct(FAssetBundleData::StaticStruct,L"/Script/AssetRegistry",*puVar1,0,0);
  return;
}



// FUNCTION 14032e950 FUN_14032e950 body=66 status=ok
// SIG undefined FUN_14032e950(void)

void FUN_14032e950(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AssetBundleEntry",1);
  UObjectCompiledInDeferStruct(FAssetBundleEntry::StaticStruct,L"/Script/AssetRegistry",*puVar1,0,0)
  ;
  return;
}



// FUNCTION 14032e9a0 FUN_14032e9a0 body=66 status=ok
// SIG undefined FUN_14032e9a0(void)

void FUN_14032e9a0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AssetData",1);
  UObjectCompiledInDeferStruct(FUN_1421cdbe0,L"/Script/AssetRegistry",*puVar1,0,0);
  return;
}



// FUNCTION 14032e9f0 FUN_14032e9f0 body=66 status=ok
// SIG undefined FUN_14032e9f0(void)

void FUN_14032e9f0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"TagAndValue",1);
  UObjectCompiledInDeferStruct(FTagAndValue::StaticStruct,L"/Script/AssetRegistry",*puVar1,0,0);
  return;
}



// FUNCTION 14032ea40 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAssetRegistry'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAssetRegistry''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAssetRegistry__(void)

{
  UObjectCompiledInDefer
            (FUN_1421cc200,UAssetRegistry::GetPrivateStaticClass,L"UAssetRegistry",
             L"/Script/AssetRegistry",0,0,0);
  return;
}



// FUNCTION 14032ea80 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAssetRegistryHelpers'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAssetRegistryHelpers''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAssetRegistryHelpers__(void)

{
  UObjectCompiledInDefer
            (FUN_1421cc870,UAssetRegistryHelpers::GetPrivateStaticClass,L"UAssetRegistryHelpers",
             L"/Script/AssetRegistry",0,0,0);
  return;
}



// FUNCTION 14032eac0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAssetRegistryImpl'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAssetRegistryImpl''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAssetRegistryImpl__(void)

{
  UObjectCompiledInDefer
            (FUN_1421cdce0,FUN_1421cc720,L"UAssetRegistryImpl",L"/Script/AssetRegistry",0,0,0);
  return;
}



// FUNCTION 14032eb00 `dynamic_initializer_for_'ModuleRegistrantEngineMessages'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantEngineMessages''(void)

void _dynamic_initializer_for__ModuleRegistrantEngineMessages__(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_146aed528;
    plVar1[2] = (longlong)FUN_14067ad20;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"EngineMessages",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 14032ec00 `dynamic_initializer_for_'ScriptStruct_EngineMessages_StaticRegisterNativesFEngineServiceAuthDeny'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_EngineMessages_StaticRegisterNativesFEngineServiceAuthDeny''(void)

void _dynamic_initializer_for__ScriptStruct_EngineMessages_StaticRegisterNativesFEngineServiceAuthDeny__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144017320;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"EngineServiceAuthDeny",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14032ec60 `dynamic_initializer_for_'ScriptStruct_EngineMessages_StaticRegisterNativesFEngineServiceAuthGrant'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_EngineMessages_StaticRegisterNativesFEngineServiceAuthGrant''(void)

void _dynamic_initializer_for__ScriptStruct_EngineMessages_StaticRegisterNativesFEngineServiceAuthGrant__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144017320;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"EngineServiceAuthGrant",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14032ecc0 `dynamic_initializer_for_'ScriptStruct_EngineMessages_StaticRegisterNativesFEngineServiceExecuteCommand'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_EngineMessages_StaticRegisterNativesFEngineServiceExecuteCommand''(void)

void _dynamic_initializer_for__ScriptStruct_EngineMessages_StaticRegisterNativesFEngineServiceExecuteCommand__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144017320;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"EngineServiceExecuteCommand",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14032ed20 `dynamic_initializer_for_'ScriptStruct_EngineMessages_StaticRegisterNativesFEngineServiceNotification'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_EngineMessages_StaticRegisterNativesFEngineServiceNotification''(void)

void _dynamic_initializer_for__ScriptStruct_EngineMessages_StaticRegisterNativesFEngineServiceNotification__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144fe3dd0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"EngineServiceNotification",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14032ed80 `dynamic_initializer_for_'ScriptStruct_EngineMessages_StaticRegisterNativesFEngineServicePing'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_EngineMessages_StaticRegisterNativesFEngineServicePing''(void)

void _dynamic_initializer_for__ScriptStruct_EngineMessages_StaticRegisterNativesFEngineServicePing__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_FUN_1447d5fd8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"EngineServicePing",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14032ede0 `dynamic_initializer_for_'ScriptStruct_EngineMessages_StaticRegisterNativesFEngineServicePong'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_EngineMessages_StaticRegisterNativesFEngineServicePong''(void)

void _dynamic_initializer_for__ScriptStruct_EngineMessages_StaticRegisterNativesFEngineServicePong__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144fe3ee8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"EngineServicePong",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14032ee40 `dynamic_initializer_for_'ScriptStruct_EngineMessages_StaticRegisterNativesFEngineServiceTerminate'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_EngineMessages_StaticRegisterNativesFEngineServiceTerminate''(void)

void _dynamic_initializer_for__ScriptStruct_EngineMessages_StaticRegisterNativesFEngineServiceTerminate__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144861690;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"EngineServiceTerminate",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14032eea0 FUN_14032eea0 body=66 status=ok
// SIG undefined FUN_14032eea0(void)

void FUN_14032eea0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EngineServiceAuthDeny",1);
  UObjectCompiledInDeferStruct(FUN_1421cffe0,L"/Script/EngineMessages",*puVar1,0,0);
  return;
}



// FUNCTION 14032eef0 FUN_14032eef0 body=66 status=ok
// SIG undefined FUN_14032eef0(void)

void FUN_14032eef0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EngineServiceAuthGrant",1);
  UObjectCompiledInDeferStruct(FUN_1421d0060,L"/Script/EngineMessages",*puVar1,0,0);
  return;
}



// FUNCTION 14032ef40 FUN_14032ef40 body=66 status=ok
// SIG undefined FUN_14032ef40(void)

void FUN_14032ef40(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EngineServiceExecuteCommand",1);
  UObjectCompiledInDeferStruct(FUN_1421d00e0,L"/Script/EngineMessages",*puVar1,0,0);
  return;
}



// FUNCTION 14032ef90 FUN_14032ef90 body=66 status=ok
// SIG undefined FUN_14032ef90(void)

void FUN_14032ef90(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EngineServiceNotification",1);
  UObjectCompiledInDeferStruct(FUN_1421d0160,L"/Script/EngineMessages",*puVar1,0,0);
  return;
}



// FUNCTION 14032efe0 FUN_14032efe0 body=66 status=ok
// SIG undefined FUN_14032efe0(void)

void FUN_14032efe0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EngineServicePing",1);
  UObjectCompiledInDeferStruct
            (FLiveLinkHeartbeatMessage::StaticStruct,L"/Script/EngineMessages",*puVar1,0,0);
  return;
}



// FUNCTION 14032f030 FUN_14032f030 body=66 status=ok
// SIG undefined FUN_14032f030(void)

void FUN_14032f030(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EngineServicePong",1);
  UObjectCompiledInDeferStruct(FUN_1421d0260,L"/Script/EngineMessages",*puVar1,0,0);
  return;
}



// FUNCTION 14032f080 FUN_14032f080 body=66 status=ok
// SIG undefined FUN_14032f080(void)

void FUN_14032f080(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EngineServiceTerminate",1);
  UObjectCompiledInDeferStruct(FUN_1421d02e0,L"/Script/EngineMessages",*puVar1,0,0);
  return;
}



// FUNCTION 14032f100 `dynamic_initializer_for_'ModuleRegistrantSynthBenchmark'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantSynthBenchmark''(void)

void _dynamic_initializer_for__ModuleRegistrantSynthBenchmark__(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_146aed650;
    plVar1[2] = (longlong)FUN_1421d0b20;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"SynthBenchmark",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 14032f2c0 `dynamic_initializer_for_'CVarPrintNetIndiceAssignment'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarPrintNetIndiceAssignment''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarPrintNetIndiceAssignment__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aed6f0 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"GameplayTags.PrintNetIndiceAssignment",&DAT_146aed660,
                  L"Logs GameplayTag NetIndice assignment",0);
  _DAT_146aed6e8 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ea7810);
  return;
}



// FUNCTION 14032f330 `dynamic_initializer_for_'ModuleRegistrantGameplayTags'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantGameplayTags''(void)

void _dynamic_initializer_for__ModuleRegistrantGameplayTags__(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_146aed698;
    plVar1[2] = (longlong)FUN_1421d7b10;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"GameplayTags",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 14032f610 `dynamic_initializer_for_'ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTag'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTag''(void)

void _dynamic_initializer_for__ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTag__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144fecb58;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GameplayTag",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14032f670 `dynamic_initializer_for_'ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagCategoryRemap'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagCategoryRemap''(void)

void _dynamic_initializer_for__ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagCategoryRemap__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144fed1a8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GameplayTagCategoryRemap",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14032f6d0 `dynamic_initializer_for_'ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagContainer'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagContainer''(void)

void _dynamic_initializer_for__ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagContainer__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144feca40;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GameplayTagContainer",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14032f730 `dynamic_initializer_for_'ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagCreationWidgetHelper'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagCreationWidgetHelper''(void)

void _dynamic_initializer_for__ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagCreationWidgetHelper__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_FUN_1447d5fd8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GameplayTagCreationWidgetHelper",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14032f790 `dynamic_initializer_for_'ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagNode'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagNode''(void)

void _dynamic_initializer_for__ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagNode__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144fecd00;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GameplayTagNode",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14032f7f0 `dynamic_initializer_for_'ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagQuery'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagQuery''(void)

void _dynamic_initializer_for__ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagQuery__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144fec810;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GameplayTagQuery",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14032f850 `dynamic_initializer_for_'ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagRedirect'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagRedirect''(void)

void _dynamic_initializer_for__ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagRedirect__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_14495ba58;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GameplayTagRedirect",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14032f8b0 `dynamic_initializer_for_'ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagReferenceHelper'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagReferenceHelper''(void)

void _dynamic_initializer_for__ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagReferenceHelper__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144fec928;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GameplayTagReferenceHelper",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14032f910 `dynamic_initializer_for_'ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagSource'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagSource''(void)

void _dynamic_initializer_for__ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagSource__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144fece18;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GameplayTagSource",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14032f970 `dynamic_initializer_for_'ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagTableRow'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagTableRow''(void)

void _dynamic_initializer_for__ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagTableRow__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144fed048;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GameplayTagTableRow",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14032f9d0 `dynamic_initializer_for_'ScriptStruct_GameplayTags_StaticRegisterNativesFRestrictedConfigInfo'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_GameplayTags_StaticRegisterNativesFRestrictedConfigInfo''(void)

void _dynamic_initializer_for__ScriptStruct_GameplayTags_StaticRegisterNativesFRestrictedConfigInfo__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144fed1a8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"RestrictedConfigInfo",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14032fa30 `dynamic_initializer_for_'ScriptStruct_GameplayTags_StaticRegisterNativesFRestrictedGameplayTagTableRow'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_GameplayTags_StaticRegisterNativesFRestrictedGameplayTagTableRow''(void)

void _dynamic_initializer_for__ScriptStruct_GameplayTags_StaticRegisterNativesFRestrictedGameplayTagTableRow__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144fecf30;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"RestrictedGameplayTagTableRow",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14032fa90 FUN_14032fa90 body=66 status=ok
// SIG undefined FUN_14032fa90(void)

void FUN_14032fa90(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGameplayContainerMatchType",1);
  UObjectCompiledInDeferEnum
            (EGameplayContainerMatchType_StaticEnum,L"/Script/GameplayTags",*puVar1,0,0);
  return;
}



// FUNCTION 14032fae0 FUN_14032fae0 body=66 status=ok
// SIG undefined FUN_14032fae0(void)

void FUN_14032fae0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGameplayTagMatchType",1);
  UObjectCompiledInDeferEnum(EGameplayTagMatchType_StaticEnum,L"/Script/GameplayTags",*puVar1,0,0);
  return;
}



// FUNCTION 14032fb30 FUN_14032fb30 body=66 status=ok
// SIG undefined FUN_14032fb30(void)

void FUN_14032fb30(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGameplayTagQueryExprType",1);
  UObjectCompiledInDeferEnum
            (EGameplayTagQueryExprType_StaticEnum,L"/Script/GameplayTags",*puVar1,0,0);
  return;
}



// FUNCTION 14032fb80 FUN_14032fb80 body=66 status=ok
// SIG undefined FUN_14032fb80(void)

void FUN_14032fb80(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGameplayTagSourceType",1);
  UObjectCompiledInDeferEnum(EGameplayTagSourceType_StaticEnum,L"/Script/GameplayTags",*puVar1,0,0);
  return;
}



// FUNCTION 14032fbd0 FUN_14032fbd0 body=66 status=ok
// SIG undefined FUN_14032fbd0(void)

void FUN_14032fbd0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GameplayTag",1);
  UObjectCompiledInDeferStruct(FGameplayTag::StaticStruct,L"/Script/GameplayTags",*puVar1,0,0);
  return;
}



// FUNCTION 14032fc20 FUN_14032fc20 body=66 status=ok
// SIG undefined FUN_14032fc20(void)

void FUN_14032fc20(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GameplayTagCategoryRemap",1);
  UObjectCompiledInDeferStruct
            (FGameplayTagCategoryRemap::StaticStruct,L"/Script/GameplayTags",*puVar1,0,0);
  return;
}



// FUNCTION 14032fc70 FUN_14032fc70 body=66 status=ok
// SIG undefined FUN_14032fc70(void)

void FUN_14032fc70(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GameplayTagContainer",1);
  UObjectCompiledInDeferStruct
            (FGameplayTagContainer::StaticStruct,L"/Script/GameplayTags",*puVar1,0,0);
  return;
}



// FUNCTION 14032fcc0 FUN_14032fcc0 body=66 status=ok
// SIG undefined FUN_14032fcc0(void)

void FUN_14032fcc0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GameplayTagCreationWidgetHelper",1);
  UObjectCompiledInDeferStruct
            (FGameplayTagCreationWidgetHelper::StaticStruct,L"/Script/GameplayTags",*puVar1,0,0);
  return;
}



// FUNCTION 14032fd10 FUN_14032fd10 body=66 status=ok
// SIG undefined FUN_14032fd10(void)

void FUN_14032fd10(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GameplayTagNode",1);
  UObjectCompiledInDeferStruct(FGameplayTagNode::StaticStruct,L"/Script/GameplayTags",*puVar1,0,0);
  return;
}



// FUNCTION 14032fd60 FUN_14032fd60 body=66 status=ok
// SIG undefined FUN_14032fd60(void)

void FUN_14032fd60(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GameplayTagQuery",1);
  UObjectCompiledInDeferStruct(FGameplayTagQuery::StaticStruct,L"/Script/GameplayTags",*puVar1,0,0);
  return;
}



// FUNCTION 14032fdb0 FUN_14032fdb0 body=66 status=ok
// SIG undefined FUN_14032fdb0(void)

void FUN_14032fdb0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GameplayTagRedirect",1);
  UObjectCompiledInDeferStruct
            (FGameplayTagRedirect::StaticStruct,L"/Script/GameplayTags",*puVar1,0,0);
  return;
}



// FUNCTION 14032fe00 FUN_14032fe00 body=66 status=ok
// SIG undefined FUN_14032fe00(void)

void FUN_14032fe00(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GameplayTagReferenceHelper",1);
  UObjectCompiledInDeferStruct
            (FGameplayTagReferenceHelper::StaticStruct,L"/Script/GameplayTags",*puVar1,0,0);
  return;
}



// FUNCTION 14032fe50 FUN_14032fe50 body=66 status=ok
// SIG undefined FUN_14032fe50(void)

void FUN_14032fe50(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GameplayTagSource",1);
  UObjectCompiledInDeferStruct(FGameplayTagSource::StaticStruct,L"/Script/GameplayTags",*puVar1,0,0)
  ;
  return;
}



// FUNCTION 14032fea0 FUN_14032fea0 body=66 status=ok
// SIG undefined FUN_14032fea0(void)

void FUN_14032fea0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GameplayTagTableRow",1);
  UObjectCompiledInDeferStruct
            (FGameplayTagTableRow::StaticStruct,L"/Script/GameplayTags",*puVar1,0,0);
  return;
}



// FUNCTION 14032fef0 FUN_14032fef0 body=66 status=ok
// SIG undefined FUN_14032fef0(void)

void FUN_14032fef0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"RestrictedConfigInfo",1);
  UObjectCompiledInDeferStruct
            (FRestrictedConfigInfo::StaticStruct,L"/Script/GameplayTags",*puVar1,0,0);
  return;
}



// FUNCTION 14032ff40 FUN_14032ff40 body=66 status=ok
// SIG undefined FUN_14032ff40(void)

void FUN_14032ff40(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"RestrictedGameplayTagTableRow",1);
  UObjectCompiledInDeferStruct
            (FRestrictedGameplayTagTableRow::StaticStruct,L"/Script/GameplayTags",*puVar1,0,0);
  return;
}



// FUNCTION 14032ff90 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UBlueprintGameplayTagLibrary'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UBlueprintGameplayTagLibrary''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UBlueprintGameplayTagLibrary__(void)

{
  UObjectCompiledInDefer
            (FUN_1421dbe00,UBlueprintGameplayTagLibrary::GetPrivateStaticClass,
             L"UBlueprintGameplayTagLibrary",L"/Script/GameplayTags",0,0,0);
  return;
}



// FUNCTION 14032ffd0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UEditableGameplayTagQuery'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UEditableGameplayTagQuery''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UEditableGameplayTagQuery__(void)

{
  UObjectCompiledInDefer
            (FUN_1421dd500,UEditableGameplayTagQuery::StaticClass,L"UEditableGameplayTagQuery",
             L"/Script/GameplayTags",0,0,0);
  return;
}



// FUNCTION 140330010 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UEditableGameplayTagQueryExpression'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UEditableGameplayTagQueryExpression''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UEditableGameplayTagQueryExpression__(void)

{
  UObjectCompiledInDefer
            (FUN_1421db070,UEditableGameplayTagQueryExpression::StaticClass,
             L"UEditableGameplayTagQueryExpression",L"/Script/GameplayTags",0,0,0);
  return;
}



// FUNCTION 140330050 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UEditableGameplayTagQueryExpression_AllExprMatch'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UEditableGameplayTagQueryExpression_AllExprMatch''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UEditableGameplayTagQueryExpression_AllExprMatch__
               (void)

{
  UObjectCompiledInDefer
            (FUN_1421dd530,UEditableGameplayTagQueryExpression_AllExprMatch::StaticClass,
             L"UEditableGameplayTagQueryExpression_AllExprMatch",L"/Script/GameplayTags",0,0,0);
  return;
}



// FUNCTION 140330090 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch__
               (void)

{
  UObjectCompiledInDefer
            (FUN_1421dd560,UEditableGameplayTagQueryExpression_AllTagsMatch::StaticClass,
             L"UEditableGameplayTagQueryExpression_AllTagsMatch",L"/Script/GameplayTags",0,0,0);
  return;
}



// FUNCTION 1403300d0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch__
               (void)

{
  UObjectCompiledInDefer
            (FUN_1421dd590,UEditableGameplayTagQueryExpression_AnyExprMatch::StaticClass,
             L"UEditableGameplayTagQueryExpression_AnyExprMatch",L"/Script/GameplayTags",0,0,0);
  return;
}



// FUNCTION 140330110 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch__
               (void)

{
  UObjectCompiledInDefer
            (FUN_1421dd5c0,UEditableGameplayTagQueryExpression_AnyTagsMatch::StaticClass,
             L"UEditableGameplayTagQueryExpression_AnyTagsMatch",L"/Script/GameplayTags",0,0,0);
  return;
}



// FUNCTION 140330150 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UEditableGameplayTagQueryExpression_NoExprMatch'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UEditableGameplayTagQueryExpression_NoExprMatch''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UEditableGameplayTagQueryExpression_NoExprMatch__
               (void)

{
  UObjectCompiledInDefer
            (FUN_1421dd5f0,UEditableGameplayTagQueryExpression_NoExprMatch::StaticClass,
             L"UEditableGameplayTagQueryExpression_NoExprMatch",L"/Script/GameplayTags",0,0,0);
  return;
}



// FUNCTION 140330190 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch__
               (void)

{
  UObjectCompiledInDefer
            (FUN_1421dd620,UEditableGameplayTagQueryExpression_NoTagsMatch::StaticClass,
             L"UEditableGameplayTagQueryExpression_NoTagsMatch",L"/Script/GameplayTags",0,0,0);
  return;
}



// FUNCTION 1403301d0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UGameplayTagAssetInterface'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UGameplayTagAssetInterface''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UGameplayTagAssetInterface__(void)

{
  UObjectCompiledInDefer
            (FUN_1421daf70,UGameplayTagAssetInterface::GetPrivateStaticClass,
             L"UGameplayTagAssetInterface",L"/Script/GameplayTags",0,0,0);
  return;
}



// FUNCTION 140330210 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UGameplayTagsDeveloperSettings'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UGameplayTagsDeveloperSettings''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UGameplayTagsDeveloperSettings__(void)

{
  UObjectCompiledInDefer
            (FUN_1421dd650,UGameplayTagsDeveloperSettings::StaticClass,
             L"UGameplayTagsDeveloperSettings",L"/Script/GameplayTags",0,0,0);
  return;
}



// FUNCTION 140330250 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UGameplayTagsList'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UGameplayTagsList''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UGameplayTagsList__(void)

{
  UObjectCompiledInDefer
            (FUN_1421db940,UGameplayTagsList::GetPrivateStaticClass,L"UGameplayTagsList",
             L"/Script/GameplayTags",0,0,0);
  return;
}



// FUNCTION 140330290 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UGameplayTagsManager'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UGameplayTagsManager''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UGameplayTagsManager__(void)

{
  UObjectCompiledInDefer
            (FUN_1421dd680,UGameplayTagsManager::GetPrivateStaticClass,L"UGameplayTagsManager",
             L"/Script/GameplayTags",0,0,0);
  return;
}



// FUNCTION 1403302d0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UGameplayTagsSettings'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UGameplayTagsSettings''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UGameplayTagsSettings__(void)

{
  UObjectCompiledInDefer
            (FUN_1421dd6b0,UGameplayTagsSettings::GetPrivateStaticClass,L"UGameplayTagsSettings",
             L"/Script/GameplayTags",0,0,0);
  return;
}



// FUNCTION 140330310 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_URestrictedGameplayTagsList'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_URestrictedGameplayTagsList''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_URestrictedGameplayTagsList__(void)

{
  UObjectCompiledInDefer
            (FUN_1421dd6e0,URestrictedGameplayTagsList::GetPrivateStaticClass,
             L"URestrictedGameplayTagsList",L"/Script/GameplayTags",0,0,0);
  return;
}



// FUNCTION 140330350 `dynamic_initializer_for_'ModuleRegistrantDatabaseSupport'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantDatabaseSupport''(void)

void _dynamic_initializer_for__ModuleRegistrantDatabaseSupport__(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_146aeda58;
    plVar1[2] = (longlong)FUN_14067ad20;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"DatabaseSupport",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 140330450 `dynamic_initializer_for_'ModuleRegistrantReliabilityHandlerComponent'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantReliabilityHandlerComponent''(void)

void _dynamic_initializer_for__ModuleRegistrantReliabilityHandlerComponent__(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_146aeda59;
    plVar1[2] = (longlong)FUN_1421e00c0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"ReliabilityHandlerComponent",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 140330550 `dynamic_initializer_for_'ModuleRegistrantPacketHandler'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantPacketHandler''(void)

void _dynamic_initializer_for__ModuleRegistrantPacketHandler__(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_146aeda5a;
    plVar1[2] = (longlong)FUN_1421e2650;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"PacketHandler",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 140330670 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UHandlerComponentFactory'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UHandlerComponentFactory''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UHandlerComponentFactory__(void)

{
  UObjectCompiledInDefer
            (FUN_1421e30c0,UHandlerComponentFactory::GetPrivateStaticClass,
             L"UHandlerComponentFactory",L"/Script/PacketHandler",0,0,0);
  return;
}



// FUNCTION 1403306b0 `dynamic_initializer_for_'ModuleRegistrantAudioPlatformConfiguration'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantAudioPlatformConfiguration''(void)

void _dynamic_initializer_for__ModuleRegistrantAudioPlatformConfiguration__(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_146aeda98;
    plVar1[2] = (longlong)FUN_14067ad20;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"AudioPlatformConfiguration",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 1403307b0 `dynamic_initializer_for_'ScriptStruct_AudioPlatformConfiguration_StaticRegisterNativesFPlatformRuntimeAudioCompressionOverrides'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_AudioPlatformConfiguration_StaticRegisterNativesFPlatformRuntimeAudioCompressionOverrides''(void)

void _dynamic_initializer_for__ScriptStruct_AudioPlatformConfiguration_StaticRegisterNativesFPlatformRuntimeAudioCompressionOverrides__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_144fefb40;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"PlatformRuntimeAudioCompressionOverrides",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140330810 FUN_140330810 body=66 status=ok
// SIG undefined FUN_140330810(void)

void FUN_140330810(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ESoundwaveSampleRateSettings",1);
  UObjectCompiledInDeferEnum
            (ESoundwaveSampleRateSettings_StaticEnum,L"/Script/AudioPlatformConfiguration",*puVar1,0
             ,0);
  return;
}



// FUNCTION 140330860 FUN_140330860 body=66 status=ok
// SIG undefined FUN_140330860(void)

void FUN_140330860(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"PlatformRuntimeAudioCompressionOverrides",1);
  UObjectCompiledInDeferStruct
            (FPlatformRuntimeAudioCompressionOverrides::StaticStruct,
             L"/Script/AudioPlatformConfiguration",*puVar1,0,0);
  return;
}



// FUNCTION 140330a30 `dynamic_initializer_for_'ModuleRegistrantMeshDescription'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantMeshDescription''(void)

void _dynamic_initializer_for__ModuleRegistrantMeshDescription__(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_146aedb60;
    plVar1[2] = (longlong)FUN_14067ad20;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"MeshDescription",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 140330c10 `dynamic_initializer_for_'ScriptStruct_MeshDescription_StaticRegisterNativesFEdgeID'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_MeshDescription_StaticRegisterNativesFEdgeID''(void)

void _dynamic_initializer_for__ScriptStruct_MeshDescription_StaticRegisterNativesFEdgeID__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 4;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_144121a38;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"EdgeID",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140330c70 `dynamic_initializer_for_'ScriptStruct_MeshDescription_StaticRegisterNativesFElementID'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_MeshDescription_StaticRegisterNativesFElementID''(void)

void _dynamic_initializer_for__ScriptStruct_MeshDescription_StaticRegisterNativesFElementID__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 4;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_144ff08d0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ElementID",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140330cd0 `dynamic_initializer_for_'ScriptStruct_MeshDescription_StaticRegisterNativesFMeshTriangle'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_MeshDescription_StaticRegisterNativesFMeshTriangle''(void)

void _dynamic_initializer_for__ScriptStruct_MeshDescription_StaticRegisterNativesFMeshTriangle__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_144ff0790;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"MeshTriangle",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140330d30 `dynamic_initializer_for_'ScriptStruct_MeshDescription_StaticRegisterNativesFPolygonGroupID'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_MeshDescription_StaticRegisterNativesFPolygonGroupID''(void)

void _dynamic_initializer_for__ScriptStruct_MeshDescription_StaticRegisterNativesFPolygonGroupID__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 4;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_144121a38;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"PolygonGroupID",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140330d90 `dynamic_initializer_for_'ScriptStruct_MeshDescription_StaticRegisterNativesFPolygonID'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_MeshDescription_StaticRegisterNativesFPolygonID''(void)

void _dynamic_initializer_for__ScriptStruct_MeshDescription_StaticRegisterNativesFPolygonID__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 4;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_144121a38;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"PolygonID",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140330df0 `dynamic_initializer_for_'ScriptStruct_MeshDescription_StaticRegisterNativesFVertexID'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_MeshDescription_StaticRegisterNativesFVertexID''(void)

void _dynamic_initializer_for__ScriptStruct_MeshDescription_StaticRegisterNativesFVertexID__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 4;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_144121a38;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"VertexID",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140330e50 `dynamic_initializer_for_'ScriptStruct_MeshDescription_StaticRegisterNativesFVertexInstanceID'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_MeshDescription_StaticRegisterNativesFVertexInstanceID''(void)

void _dynamic_initializer_for__ScriptStruct_MeshDescription_StaticRegisterNativesFVertexInstanceID__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 4;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_144121a38;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"VertexInstanceID",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140330eb0 FUN_140330eb0 body=66 status=ok
// SIG undefined FUN_140330eb0(void)

void FUN_140330eb0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EComputeNTBsOptions",1);
  UObjectCompiledInDeferEnum(EComputeNTBsOptions_StaticEnum,L"/Script/MeshDescription",*puVar1,0,0);
  return;
}



// FUNCTION 140330f00 FUN_140330f00 body=66 status=ok
// SIG undefined FUN_140330f00(void)

void FUN_140330f00(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EdgeID",1);
  UObjectCompiledInDeferStruct(FEdgeID::StaticStruct,L"/Script/MeshDescription",*puVar1,0,0);
  return;
}



// FUNCTION 140330f50 FUN_140330f50 body=66 status=ok
// SIG undefined FUN_140330f50(void)

void FUN_140330f50(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ElementID",1);
  UObjectCompiledInDeferStruct(FElementID::StaticStruct,L"/Script/MeshDescription",*puVar1,0,0);
  return;
}



// FUNCTION 140330fa0 FUN_140330fa0 body=66 status=ok
// SIG undefined FUN_140330fa0(void)

void FUN_140330fa0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"MeshTriangle",1);
  UObjectCompiledInDeferStruct(FMeshTriangle::StaticStruct,L"/Script/MeshDescription",*puVar1,0,0);
  return;
}



// FUNCTION 140330ff0 FUN_140330ff0 body=66 status=ok
// SIG undefined FUN_140330ff0(void)

void FUN_140330ff0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"PolygonGroupID",1);
  UObjectCompiledInDeferStruct(FPolygonGroupID::StaticStruct,L"/Script/MeshDescription",*puVar1,0,0)
  ;
  return;
}



// FUNCTION 140331040 FUN_140331040 body=66 status=ok
// SIG undefined FUN_140331040(void)

void FUN_140331040(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"PolygonID",1);
  UObjectCompiledInDeferStruct(FPolygonID::StaticStruct,L"/Script/MeshDescription",*puVar1,0,0);
  return;
}



// FUNCTION 140331090 FUN_140331090 body=66 status=ok
// SIG undefined FUN_140331090(void)

void FUN_140331090(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"VertexID",1);
  UObjectCompiledInDeferStruct(FVertexID::StaticStruct,L"/Script/MeshDescription",*puVar1,0,0);
  return;
}



// FUNCTION 1403310e0 FUN_1403310e0 body=66 status=ok
// SIG undefined FUN_1403310e0(void)

void FUN_1403310e0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"VertexInstanceID",1);
  UObjectCompiledInDeferStruct
            (FVertexInstanceID::StaticStruct,L"/Script/MeshDescription",*puVar1,0,0);
  return;
}



// FUNCTION 140331130 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UDEPRECATED_MeshDescription'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UDEPRECATED_MeshDescription''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UDEPRECATED_MeshDescription__(void)

{
  UObjectCompiledInDefer
            (FUN_1421ebde0,UDEPRECATED_MeshDescription::StaticClass,L"UDEPRECATED_MeshDescription",
             L"/Script/MeshDescription",0,0,0);
  return;
}



// FUNCTION 140331190 `dynamic_initializer_for_'ModuleRegistrantClothingSystemRuntimeInterface'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantClothingSystemRuntimeInterface''(void)

void _dynamic_initializer_for__ModuleRegistrantClothingSystemRuntimeInterface__(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_146aedc78;
    plVar1[2] = (longlong)FUN_14067ad20;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"ClothingSystemRuntimeInterface",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 1403312f0 `dynamic_initializer_for_'ScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionData'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionData''(void)

void _dynamic_initializer_for__ScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionData__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144ff2570;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ClothCollisionData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140331350 `dynamic_initializer_for_'ScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionPrim_Convex'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionPrim_Convex''(void)

void _dynamic_initializer_for__ScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionPrim_Convex__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144ff2688;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ClothCollisionPrim_Convex",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403313b0 `dynamic_initializer_for_'ScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionPrim_Sphere'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionPrim_Sphere''(void)

void _dynamic_initializer_for__ScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionPrim_Sphere__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_144170d98;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ClothCollisionPrim_Sphere",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140331410 `dynamic_initializer_for_'ScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionPrim_SphereConnection'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionPrim_SphereConnection''(void)

void _dynamic_initializer_for__ScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionPrim_SphereConnection__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_144128cb8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ClothCollisionPrim_SphereConnection",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140331470 FUN_140331470 body=66 status=ok
// SIG undefined FUN_140331470(void)

void FUN_140331470(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ClothCollisionData",1);
  UObjectCompiledInDeferStruct
            (FClothCollisionData::StaticStruct,L"/Script/ClothingSystemRuntimeInterface",*puVar1,0,0
            );
  return;
}



// FUNCTION 1403314c0 FUN_1403314c0 body=66 status=ok
// SIG undefined FUN_1403314c0(void)

void FUN_1403314c0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ClothCollisionPrim_Convex",1);
  UObjectCompiledInDeferStruct
            (FClothCollisionPrim_Convex::StaticStruct,L"/Script/ClothingSystemRuntimeInterface",
             *puVar1,0,0);
  return;
}



// FUNCTION 140331510 FUN_140331510 body=66 status=ok
// SIG undefined FUN_140331510(void)

void FUN_140331510(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ClothCollisionPrim_Sphere",1);
  UObjectCompiledInDeferStruct
            (FClothCollisionPrim_Sphere::StaticStruct,L"/Script/ClothingSystemRuntimeInterface",
             *puVar1,0,0);
  return;
}



// FUNCTION 140331560 FUN_140331560 body=66 status=ok
// SIG undefined FUN_140331560(void)

void FUN_140331560(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ClothCollisionPrim_SphereConnection",1);
  UObjectCompiledInDeferStruct
            (FClothCollisionPrim_SphereConnection::StaticStruct,
             L"/Script/ClothingSystemRuntimeInterface",*puVar1,0,0);
  return;
}



// FUNCTION 1403315b0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UClothingAssetBase'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UClothingAssetBase''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UClothingAssetBase__(void)

{
  UObjectCompiledInDefer
            (FUN_1421ed2a0,UClothingAssetBase::StaticClass,L"UClothingAssetBase",
             L"/Script/ClothingSystemRuntimeInterface",0,0,0);
  return;
}



// FUNCTION 1403315f0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UClothingSimulationFactory'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UClothingSimulationFactory''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UClothingSimulationFactory__(void)

{
  UObjectCompiledInDefer
            (FUN_1421ed2d0,UClothingSimulationFactory::GetPrivateStaticClass,
             L"UClothingSimulationFactory",L"/Script/ClothingSystemRuntimeInterface",0,0,0);
  return;
}



// FUNCTION 140331630 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UClothingSimulationInteractor'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UClothingSimulationInteractor''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UClothingSimulationInteractor__(void)

{
  UObjectCompiledInDefer
            (FUN_1421ec3e0,UClothingSimulationInteractor::GetPrivateStaticClass,
             L"UClothingSimulationInteractor",L"/Script/ClothingSystemRuntimeInterface",0,0,0);
  return;
}



// FUNCTION 140331690 `dynamic_initializer_for_'ModuleRegistrantEyeTracker'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantEyeTracker''(void)

void _dynamic_initializer_for__ModuleRegistrantEyeTracker__(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_146aedd20;
    plVar1[2] = (longlong)FUN_1421ed4f0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"EyeTracker",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 1403317b0 `dynamic_initializer_for_'ScriptStruct_EyeTracker_StaticRegisterNativesFEyeTrackerGazeData'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_EyeTracker_StaticRegisterNativesFEyeTrackerGazeData''(void)

void _dynamic_initializer_for__ScriptStruct_EyeTracker_StaticRegisterNativesFEyeTrackerGazeData__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_144ff3070;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"EyeTrackerGazeData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140331810 `dynamic_initializer_for_'ScriptStruct_EyeTracker_StaticRegisterNativesFEyeTrackerStereoGazeData'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_EyeTracker_StaticRegisterNativesFEyeTrackerStereoGazeData''(void)

void _dynamic_initializer_for__ScriptStruct_EyeTracker_StaticRegisterNativesFEyeTrackerStereoGazeData__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_144f01378;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"EyeTrackerStereoGazeData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140331870 FUN_140331870 body=66 status=ok
// SIG undefined FUN_140331870(void)

void FUN_140331870(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EEyeTrackerStatus",1);
  UObjectCompiledInDeferEnum(EEyeTrackerStatus_StaticEnum,L"/Script/EyeTracker",*puVar1,0,0);
  return;
}



// FUNCTION 1403318c0 FUN_1403318c0 body=66 status=ok
// SIG undefined FUN_1403318c0(void)

void FUN_1403318c0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EyeTrackerGazeData",1);
  UObjectCompiledInDeferStruct(FEyeTrackerGazeData::StaticStruct,L"/Script/EyeTracker",*puVar1,0,0);
  return;
}



// FUNCTION 140331910 FUN_140331910 body=66 status=ok
// SIG undefined FUN_140331910(void)

void FUN_140331910(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EyeTrackerStereoGazeData",1);
  UObjectCompiledInDeferStruct
            (FEyeTrackerStereoGazeData::StaticStruct,L"/Script/EyeTracker",*puVar1,0,0);
  return;
}



// FUNCTION 140331960 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UEyeTrackerFunctionLibrary'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UEyeTrackerFunctionLibrary''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UEyeTrackerFunctionLibrary__(void)

{
  UObjectCompiledInDefer
            (FUN_1421ed6a0,UEyeTrackerFunctionLibrary::GetPrivateStaticClass,
             L"UEyeTrackerFunctionLibrary",L"/Script/EyeTracker",0,0,0);
  return;
}



// FUNCTION 1403319a0 `dynamic_initializer_for_'ModuleRegistrantAVIWriter'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantAVIWriter''(void)

void _dynamic_initializer_for__ModuleRegistrantAVIWriter__(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_146aedda0;
    plVar1[2] = (longlong)FUN_14067ad20;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"AVIWriter",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 140331aa0 `dynamic_initializer_for_'ModuleRegistrantJsonUtilities'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantJsonUtilities''(void)

void _dynamic_initializer_for__ModuleRegistrantJsonUtilities__(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)
              TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FDefaultModuleImpl>,class_IModuleInterface*___ptr64___cdecl(void)>
              ::vftable;
    plVar1[1] = (longlong)&DAT_146aeddd4;
    plVar1[2] = (longlong)FUN_14043cbe0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"JsonUtilities",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 140331bc0 `dynamic_initializer_for_'ScriptStruct_JsonUtilities_StaticRegisterNativesFJsonObjectWrapper'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_JsonUtilities_StaticRegisterNativesFJsonObjectWrapper''(void)

void _dynamic_initializer_for__ScriptStruct_JsonUtilities_StaticRegisterNativesFJsonObjectWrapper__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144ff5790;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"JsonObjectWrapper",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140331c20 FUN_140331c20 body=66 status=ok
// SIG undefined FUN_140331c20(void)

void FUN_140331c20(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"JsonObjectWrapper",1);
  UObjectCompiledInDeferStruct
            (FJsonObjectWrapper::StaticStruct,L"/Script/JsonUtilities",*puVar1,0,0);
  return;
}



// FUNCTION 140331c70 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UJsonUtilitiesDummyObject'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UJsonUtilitiesDummyObject''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UJsonUtilitiesDummyObject__(void)

{
  UObjectCompiledInDefer
            (FUN_1421f0850,UJsonUtilitiesDummyObject::StaticClass,L"UJsonUtilitiesDummyObject",
             L"/Script/JsonUtilities",0,0,0);
  return;
}



// FUNCTION 140331cb0 FUN_140331cb0 body=112 status=ok
// SIG undefined FUN_140331cb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140331cb0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aede90 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"LevelSequence.DefaultDisableFrameSnapping",0,
                  L"0: When locked to display rate, frame snapping will be enabled.\r\n1: When locked to display rate, frame snapping will be disabled. (works for any non-zero value)"
                  ,0);
  _DAT_146aede88 = &PTR_FUN_143f3ecf8;
  DAT_146aede98 = (**(code **)(*DAT_146aede90 + 0x38))(DAT_146aede90);
  atexit(FUN_143ea7950);
  return;
}



// FUNCTION 140331d20 `dynamic_initializer_for_'CVarDefaultDisplayRate'' body=181 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDefaultDisplayRate''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDefaultDisplayRate__(void)

{
  longlong local_18 [3];
  
  local_18[0] = 0;
  local_18[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"30fps",0xc);
  if (DAT_1468b1f88 == (undefined8 *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aede78 =
       (longlong *)
       (**(code **)*DAT_1468b1f88)
                 (DAT_1468b1f88,L"LevelSequence.DefaultDisplayRate",local_18,
                  L"Specifies default a display frame rate for newly created level sequences; also defines frame locked frame rate where sequences are set to be frame locked. Examples: 30 fps, 120/1 (120 fps), 30000/1001 (29.97), 0.01s (10ms)."
                  ,0);
  _DAT_146aede70 = &PTR_FUN_143f3ecf8;
  DAT_146aede80 = (**(code **)(*DAT_146aede78 + 0x48))(DAT_146aede78);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  atexit(FUN_143ea79a0);
  return;
}



// FUNCTION 140331de0 `dynamic_initializer_for_'CVarDefaultEvaluationType'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDefaultEvaluationType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDefaultEvaluationType__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aede48 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"LevelSequence.DefaultEvaluationType",0,
                  L"0: Playback locked to playback frames\n1: Unlocked playback with sub frame interpolation"
                  ,0);
  _DAT_146aede40 = &PTR_FUN_143f3ecf8;
  DAT_146aede50 = (**(code **)(*DAT_146aede48 + 0x38))(DAT_146aede48);
  atexit(FUN_143ea79f0);
  return;
}



// FUNCTION 140331e50 `dynamic_initializer_for_'CVarDefaultTickResolution'' body=181 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDefaultTickResolution''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDefaultTickResolution__(void)

{
  longlong local_18 [3];
  
  local_18[0] = 0;
  local_18[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"24000fps",0x12);
  if (DAT_1468b1f88 == (undefined8 *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aede60 =
       (longlong *)
       (**(code **)*DAT_1468b1f88)
                 (DAT_1468b1f88,L"LevelSequence.DefaultTickResolution",local_18,
                  L"Specifies default a tick resolution for newly created level sequences. Examples: 30 fps, 120/1 (120 fps), 30000/1001 (29.97), 0.01s (10ms)."
                  ,0);
  _DAT_146aede58 = &PTR_FUN_143f3ecf8;
  DAT_146aede68 = (**(code **)(*DAT_146aede60 + 0x48))(DAT_146aede60);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  atexit(FUN_143ea7a40);
  return;
}



// FUNCTION 140331f10 FUN_140331f10 body=115 status=ok
// SIG undefined FUN_140331f10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140331f10(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aedea8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"a.cine.EnableSequencerLazyTick",1,
                  L"True to enable sequencer ticking only when its playing.",0);
  _DAT_146aedea0 = &PTR_FUN_143f3ecf8;
  DAT_146aedeb0 = (**(code **)(*DAT_146aedea8 + 0x38))(DAT_146aedea8);
  atexit(FUN_143ea7a90);
  return;
}



// FUNCTION 140331fa0 `dynamic_initializer_for_'ModuleRegistrantLevelSequence'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantLevelSequence''(void)

void _dynamic_initializer_for__ModuleRegistrantLevelSequence__(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_146aede14;
    plVar1[2] = (longlong)FStaticallyLinkedModuleRegistrant<FLevelSequenceModule>::InitializeModule;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"LevelSequence",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 140332210 `dynamic_initializer_for_'ScriptStruct_LevelSequence_StaticRegisterNativesFBoundActorProxy'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_LevelSequence_StaticRegisterNativesFBoundActorProxy''(void)

void _dynamic_initializer_for__ScriptStruct_LevelSequence_StaticRegisterNativesFBoundActorProxy__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_FUN_1447d5fd8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"BoundActorProxy",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140332270 `dynamic_initializer_for_'ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceBindingReference'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceBindingReference''(void)

void _dynamic_initializer_for__ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceBindingReference__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144ffa630;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"LevelSequenceBindingReference",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403322d0 `dynamic_initializer_for_'ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceBindingReferenceArray'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceBindingReferenceArray''(void)

void _dynamic_initializer_for__ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceBindingReferenceArray__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144ffa518;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"LevelSequenceBindingReferenceArray",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140332330 `dynamic_initializer_for_'ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceBindingReferences'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceBindingReferences''(void)

void _dynamic_initializer_for__ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceBindingReferences__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0xa0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144ffa400;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"LevelSequenceBindingReferences",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140332390 `dynamic_initializer_for_'ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceLegacyObjectReference'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceLegacyObjectReference''(void)

void _dynamic_initializer_for__ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceLegacyObjectReference__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144ffa870;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"LevelSequenceLegacyObjectReference",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403323f0 `dynamic_initializer_for_'ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceObject'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceObject''(void)

void _dynamic_initializer_for__ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceObject__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144ffa988;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"LevelSequenceObject",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140332450 `dynamic_initializer_for_'ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceObjectReferenceMap'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceObjectReferenceMap''(void)

void _dynamic_initializer_for__ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceObjectReferenceMap__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144ffa758;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"LevelSequenceObjectReferenceMap",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403324b0 FUN_1403324b0 body=92 status=ok
// SIG undefined FUN_1403324b0(void)

void FUN_1403324b0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144ffaaa0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"LevelSequencePlayerSnapshot",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140332510 `dynamic_initializer_for_'ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceSnapshotSettings'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceSnapshotSettings''(void)

void _dynamic_initializer_for__ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceSnapshotSettings__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_144ffabb8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"LevelSequenceSnapshotSettings",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140332590 FUN_140332590 body=66 status=ok
// SIG undefined FUN_140332590(void)

void FUN_140332590(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"BoundActorProxy",1);
  UObjectCompiledInDeferStruct(FBoundActorProxy::StaticStruct,L"/Script/LevelSequence",*puVar1,0,0);
  return;
}



// FUNCTION 1403325e0 FUN_1403325e0 body=66 status=ok
// SIG undefined FUN_1403325e0(void)

void FUN_1403325e0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"LevelSequenceBindingReference",1);
  UObjectCompiledInDeferStruct
            (FLevelSequenceBindingReference::StaticStruct,L"/Script/LevelSequence",*puVar1,0,0);
  return;
}



// FUNCTION 140332630 FUN_140332630 body=66 status=ok
// SIG undefined FUN_140332630(void)

void FUN_140332630(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"LevelSequenceBindingReferenceArray",1);
  UObjectCompiledInDeferStruct
            (FLevelSequenceBindingReferenceArray::StaticStruct,L"/Script/LevelSequence",*puVar1,0,0)
  ;
  return;
}



// FUNCTION 140332680 FUN_140332680 body=66 status=ok
// SIG undefined FUN_140332680(void)

void FUN_140332680(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"LevelSequenceBindingReferences",1);
  UObjectCompiledInDeferStruct
            (FLevelSequenceBindingReferences::StaticStruct,L"/Script/LevelSequence",*puVar1,0,0);
  return;
}



// FUNCTION 1403326d0 FUN_1403326d0 body=66 status=ok
// SIG undefined FUN_1403326d0(void)

void FUN_1403326d0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"LevelSequenceLegacyObjectReference",1);
  UObjectCompiledInDeferStruct
            (FLevelSequenceLegacyObjectReference::StaticStruct,L"/Script/LevelSequence",*puVar1,0,0)
  ;
  return;
}



// FUNCTION 140332720 FUN_140332720 body=66 status=ok
// SIG undefined FUN_140332720(void)

void FUN_140332720(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"LevelSequenceObject",1);
  UObjectCompiledInDeferStruct
            (FLevelSequenceObject::StaticStruct,L"/Script/LevelSequence",*puVar1,0,0);
  return;
}



// FUNCTION 140332770 FUN_140332770 body=66 status=ok
// SIG undefined FUN_140332770(void)

void FUN_140332770(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"LevelSequenceObjectReferenceMap",1);
  UObjectCompiledInDeferStruct
            (FLevelSequenceObjectReferenceMap::StaticStruct,L"/Script/LevelSequence",*puVar1,0,0);
  return;
}



// FUNCTION 1403327c0 FUN_1403327c0 body=66 status=ok
// SIG undefined FUN_1403327c0(void)

void FUN_1403327c0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"LevelSequencePlayerSnapshot",1);
  UObjectCompiledInDeferStruct(FUN_1421fa5f0,L"/Script/LevelSequence",*puVar1,0,0);
  return;
}



// FUNCTION 140332810 FUN_140332810 body=66 status=ok
// SIG undefined FUN_140332810(void)

void FUN_140332810(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"LevelSequenceSnapshotSettings",1);
  UObjectCompiledInDeferStruct
            (FLevelSequenceSnapshotSettings::StaticStruct,L"/Script/LevelSequence",*puVar1,0,0);
  return;
}



// FUNCTION 140332860 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_ALevelSequenceActor'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_ALevelSequenceActor''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_ALevelSequenceActor__(void)

{
  UObjectCompiledInDefer
            (FUN_1421f7f20,&LAB_1407f17a0,L"ALevelSequenceActor",L"/Script/LevelSequence",0,0,0);
  return;
}



// FUNCTION 1403328a0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UDefaultLevelSequenceInstanceData'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UDefaultLevelSequenceInstanceData''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UDefaultLevelSequenceInstanceData__(void)

{
  UObjectCompiledInDefer
            (FUN_1421fa6f0,UDefaultLevelSequenceInstanceData::GetPrivateStaticClass,
             L"UDefaultLevelSequenceInstanceData",L"/Script/LevelSequence",0,0,0);
  return;
}



// FUNCTION 1403328e0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_ULevelSequence'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_ULevelSequence''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_ULevelSequence__(void)

{
  UObjectCompiledInDefer
            (FUN_1421fa720,UPhysicsConstraintComponent::GetPrivateStaticClass,L"ULevelSequence",
             L"/Script/LevelSequence",0,0,0);
  return;
}



// FUNCTION 140332920 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_ULevelSequenceBurnIn'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_ULevelSequenceBurnIn''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_ULevelSequenceBurnIn__(void)

{
  UObjectCompiledInDefer
            (FUN_1421f82d0,UUGCutsceneScreenUW::GetPrivateStaticClass,L"ULevelSequenceBurnIn",
             L"/Script/LevelSequence",0,0,0);
  return;
}



// FUNCTION 140332960 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_ULevelSequenceBurnInInitSettings'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_ULevelSequenceBurnInInitSettings''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_ULevelSequenceBurnInInitSettings__(void)

{
  UObjectCompiledInDefer
            (FUN_1421fa750,ULevelSequenceBurnInInitSettings::GetPrivateStaticClass,
             L"ULevelSequenceBurnInInitSettings",L"/Script/LevelSequence",0,0,0);
  return;
}



// FUNCTION 1403329a0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_ULevelSequenceBurnInOptions'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_ULevelSequenceBurnInOptions''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_ULevelSequenceBurnInOptions__(void)

{
  UObjectCompiledInDefer
            (FUN_1421f7ec0,ULevelSequenceBurnInOptions::GetPrivateStaticClass,
             L"ULevelSequenceBurnInOptions",L"/Script/LevelSequence",0,0,0);
  return;
}



// FUNCTION 1403329e0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_ULevelSequencePlayer'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_ULevelSequencePlayer''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_ULevelSequencePlayer__(void)

{
  UObjectCompiledInDefer
            (FUN_1421f8430,&LAB_1407f17c0,L"ULevelSequencePlayer",L"/Script/LevelSequence",0,0,0);
  return;
}



// FUNCTION 140332a30 `dynamic_initializer_for_'CVarFrameGrabberFrameLatency'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFrameGrabberFrameLatency''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFrameGrabberFrameLatency__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aee188 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"framegrabber.framelatency",&DAT_146aee090,
                  L"How many frames to wait before reading back a frame. 0 frames will work but cause a performance regression due to CPU and GPU syncing up.\n"
                  ,0x60);
  _DAT_146aee180 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ea7b00);
  return;
}



// FUNCTION 140332b40 `dynamic_initializer_for_'ModuleRegistrantMovieSceneCapture'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantMovieSceneCapture''(void)

void _dynamic_initializer_for__ModuleRegistrantMovieSceneCapture__(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_146aee094;
    plVar1[2] = (longlong)FUN_142200580;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"MovieSceneCapture",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 140332e10 `dynamic_initializer_for_'ScriptStruct_MovieSceneCapture_StaticRegisterNativesFCaptureProtocolID'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_MovieSceneCapture_StaticRegisterNativesFCaptureProtocolID''(void)

void _dynamic_initializer_for__ScriptStruct_MovieSceneCapture_StaticRegisterNativesFCaptureProtocolID__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144fff090;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"CaptureProtocolID",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140332e70 `dynamic_initializer_for_'ScriptStruct_MovieSceneCapture_StaticRegisterNativesFCaptureResolution'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_MovieSceneCapture_StaticRegisterNativesFCaptureResolution''(void)

void _dynamic_initializer_for__ScriptStruct_MovieSceneCapture_StaticRegisterNativesFCaptureResolution__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_14402d378;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"CaptureResolution",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140332ed0 `dynamic_initializer_for_'ScriptStruct_MovieSceneCapture_StaticRegisterNativesFCompositionGraphCapturePasses'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_MovieSceneCapture_StaticRegisterNativesFCompositionGraphCapturePasses''(void)

void _dynamic_initializer_for__ScriptStruct_MovieSceneCapture_StaticRegisterNativesFCompositionGraphCapturePasses__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144f20de8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"CompositionGraphCapturePasses",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140332f30 `dynamic_initializer_for_'ScriptStruct_MovieSceneCapture_StaticRegisterNativesFMovieSceneCaptureSettings'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_MovieSceneCapture_StaticRegisterNativesFMovieSceneCaptureSettings''(void)

void _dynamic_initializer_for__ScriptStruct_MovieSceneCapture_StaticRegisterNativesFMovieSceneCaptureSettings__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144fff1a8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"MovieSceneCaptureSettings",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140332f90 FUN_140332f90 body=66 status=ok
// SIG undefined FUN_140332f90(void)

void FUN_140332f90(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EHDRCaptureGamut",1);
  UObjectCompiledInDeferEnum(EHDRCaptureGamut_StaticEnum,L"/Script/MovieSceneCapture",*puVar1,0,0);
  return;
}



// FUNCTION 140332fe0 FUN_140332fe0 body=66 status=ok
// SIG undefined FUN_140332fe0(void)

void FUN_140332fe0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"CaptureProtocolID",1);
  UObjectCompiledInDeferStruct(FUN_1422031f0,L"/Script/MovieSceneCapture",*puVar1,0,0);
  return;
}



// FUNCTION 140333030 FUN_140333030 body=66 status=ok
// SIG undefined FUN_140333030(void)

void FUN_140333030(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"CaptureResolution",1);
  UObjectCompiledInDeferStruct
            (FCaptureResolution::StaticStruct,L"/Script/MovieSceneCapture",*puVar1,0,0);
  return;
}



// FUNCTION 140333080 FUN_140333080 body=66 status=ok
// SIG undefined FUN_140333080(void)

void FUN_140333080(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"CompositionGraphCapturePasses",1);
  UObjectCompiledInDeferStruct
            (FCompositionGraphCapturePasses::StaticStruct,L"/Script/MovieSceneCapture",*puVar1,0,0);
  return;
}



// FUNCTION 1403330d0 FUN_1403330d0 body=66 status=ok
// SIG undefined FUN_1403330d0(void)

void FUN_1403330d0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"MovieSceneCaptureSettings",1);
  UObjectCompiledInDeferStruct
            (FMovieSceneCaptureSettings::StaticStruct,L"/Script/MovieSceneCapture",*puVar1,0,0);
  return;
}



// FUNCTION 140333120 FUN_140333120 body=58 status=ok
// SIG undefined FUN_140333120(void)

void FUN_140333120(void)

{
  UObjectCompiledInDefer
            (FUN_1422033f0,FUN_142202ad0,L"UBmpImageCaptureSettings",L"/Script/MovieSceneCapture",0,
             0,0);
  return;
}



// FUNCTION 140333160 FUN_140333160 body=58 status=ok
// SIG undefined FUN_140333160(void)

void FUN_140333160(void)

{
  UObjectCompiledInDefer
            (FUN_142203420,FUN_1422025f0,L"UCompositionGraphCaptureSettings",
             L"/Script/MovieSceneCapture",0,0,0);
  return;
}



// FUNCTION 1403331a0 FUN_1403331a0 body=58 status=ok
// SIG undefined FUN_1403331a0(void)

void FUN_1403331a0(void)

{
  UObjectCompiledInDefer
            (FUN_142202a90,FUN_1422029e0,L"UFrameGrabberProtocolSettings",
             L"/Script/MovieSceneCapture",0,0,0);
  return;
}



// FUNCTION 1403331e0 FUN_1403331e0 body=58 status=ok
// SIG undefined FUN_1403331e0(void)

void FUN_1403331e0(void)

{
  UObjectCompiledInDefer
            (FUN_142203450,FUN_142202b80,L"UImageCaptureSettings",L"/Script/MovieSceneCapture",0,0,0
            );
  return;
}



// FUNCTION 140333220 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_ULevelCapture'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_ULevelCapture''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_ULevelCapture__(void)

{
  UObjectCompiledInDefer
            (FUN_142203480,UProjectileMovementComponent::GetPrivateStaticClass,L"ULevelCapture",
             L"/Script/MovieSceneCapture",0,0,0);
  return;
}



// FUNCTION 140333260 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UMovieSceneCapture'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UMovieSceneCapture''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UMovieSceneCapture__(void)

{
  UObjectCompiledInDefer
            (FUN_142202750,FUN_1422024b0,L"UMovieSceneCapture",L"/Script/MovieSceneCapture",0,0,0);
  return;
}



// FUNCTION 1403332a0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UMovieSceneCaptureEnvironment'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UMovieSceneCaptureEnvironment''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UMovieSceneCaptureEnvironment__(void)

{
  UObjectCompiledInDefer
            (FUN_1422028b0,UMovieSceneCaptureEnvironment::GetPrivateStaticClass,
             L"UMovieSceneCaptureEnvironment",L"/Script/MovieSceneCapture",0,0,0);
  return;
}



// FUNCTION 1403332e0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UMovieSceneCaptureInterface'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UMovieSceneCaptureInterface''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UMovieSceneCaptureInterface__(void)

{
  UObjectCompiledInDefer
            (FUN_1422034b0,UMovieSceneCaptureInterface::StaticClass,L"UMovieSceneCaptureInterface",
             L"/Script/MovieSceneCapture",0,0,0);
  return;
}



// FUNCTION 140333320 FUN_140333320 body=58 status=ok
// SIG undefined FUN_140333320(void)

void FUN_140333320(void)

{
  UObjectCompiledInDefer
            (FUN_1422027b0,UMovieSceneCaptureEnvironment::GetPrivateStaticClass,
             L"UMovieSceneCaptureProtocolSettings",L"/Script/MovieSceneCapture",0,0,0);
  return;
}



// FUNCTION 140333360 FUN_140333360 body=58 status=ok
// SIG undefined FUN_140333360(void)

void FUN_140333360(void)

{
  UObjectCompiledInDefer
            (FUN_1422034e0,FUN_142202d10,L"UVideoCaptureSettings",L"/Script/MovieSceneCapture",0,0,0
            );
  return;
}



// FUNCTION 1403333c0 `dynamic_initializer_for_'ModuleRegistrantMRMesh'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantMRMesh''(void)

void _dynamic_initializer_for__ModuleRegistrantMRMesh__(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_146aee310;
    plVar1[2] = (longlong)FUN_14067ad20;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"MRMesh",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 140333540 `dynamic_initializer_for_'ScriptStruct_MRMesh_StaticRegisterNativesFMRMeshConfiguration'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_MRMesh_StaticRegisterNativesFMRMeshConfiguration''(void)

void _dynamic_initializer_for__ScriptStruct_MRMesh_StaticRegisterNativesFMRMeshConfiguration__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_FUN_143fd5380;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"MRMeshConfiguration",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403335c0 FUN_1403335c0 body=66 status=ok
// SIG undefined FUN_1403335c0(void)

void FUN_1403335c0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"MRMeshConfiguration",1);
  UObjectCompiledInDeferStruct(FMRMeshConfiguration::StaticStruct,L"/Script/MRMesh",*puVar1,0,0);
  return;
}



// FUNCTION 140333610 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UMRMeshComponent'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UMRMeshComponent''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UMRMeshComponent__(void)

{
  UObjectCompiledInDefer
            (FUN_142207950,UUGButton::GetPrivateStaticClass,L"UMRMeshComponent",L"/Script/MRMesh",0,
             0,0);
  return;
}



// FUNCTION 140333650 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UMeshReconstructorBase'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UMeshReconstructorBase''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UMeshReconstructorBase__(void)

{
  UObjectCompiledInDefer
            (FUN_142207700,UMeshReconstructorBase::GetPrivateStaticClass,L"UMeshReconstructorBase",
             L"/Script/MRMesh",0,0,0);
  return;
}



// FUNCTION 140333690 `dynamic_initializer_for_'CVarRenderLastFrameInStreamingPause'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarRenderLastFrameInStreamingPause''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarRenderLastFrameInStreamingPause__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aee538 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.RenderLastFrameInStreamingPause",1,
                  L"If 1 the previous frame is displayed during streaming pause. If zero the screen is left black."
                  ,0x20);
  _DAT_146aee530 = &PTR_FUN_143f3ecf8;
  DAT_146aee540 = (**(code **)(*DAT_146aee538 + 0x38))(DAT_146aee538);
  atexit(FUN_143ea7b50);
  return;
}



// FUNCTION 1403337b0 `dynamic_initializer_for_'ModuleRegistrantStreamingPauseRendering'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantStreamingPauseRendering''(void)

void _dynamic_initializer_for__ModuleRegistrantStreamingPauseRendering__(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_146aee51c;
    plVar1[2] = (longlong)
                FStaticallyLinkedModuleRegistrant<FStreamingPauseRenderingModule>::InitializeModule;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"StreamingPauseRendering",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 140333920 FUN_140333920 body=100 status=ok
// SIG undefined FUN_140333920(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140333920(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aee550 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"MediaPlayer.MaxDeltaTimeMs",&DAT_1465316b0,
                  L"Prevent jumps in game time from causing movie streaming to load the absolute time difference in frames.\n"
                  ,1);
  _DAT_146aee548 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ea7ba0);
  return;
}



// FUNCTION 140333990 `dynamic_initializer_for_'ModuleRegistrantMedia'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantMedia''(void)

void _dynamic_initializer_for__ModuleRegistrantMedia__(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_146aee558;
    plVar1[2] = (longlong)FStaticallyLinkedModuleRegistrant<FMediaModule>::InitializeModule;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"Media",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 140333aa0 `dynamic_initializer_for_'ModuleRegistrantSlateNullRenderer'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantSlateNullRenderer''(void)

void _dynamic_initializer_for__ModuleRegistrantSlateNullRenderer__(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_146aee5ac;
    plVar1[2] = (longlong)FUN_14220b670;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"SlateNullRenderer",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 140333ba0 `dynamic_initializer_for_'ModuleRegistrantNullNetworkReplayStreaming'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantNullNetworkReplayStreaming''(void)

void _dynamic_initializer_for__ModuleRegistrantNullNetworkReplayStreaming__(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_146aee5ad;
    plVar1[2] = (longlong)FUN_14220f0c0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"NullNetworkReplayStreaming",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 140333ca0 `dynamic_initializer_for_'CVarChunkUploadDelayInSeconds'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarChunkUploadDelayInSeconds''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarChunkUploadDelayInSeconds__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aee5d0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"httpReplay.ChunkUploadDelayInSeconds",0x41200000,&DAT_145004374,0)
  ;
  _DAT_146aee5c8 = &PTR_FUN_143f3ecf8;
  DAT_146aee5d8 = (**(code **)(*DAT_146aee5d0 + 0x40))(DAT_146aee5d0);
  atexit(FUN_143ea7cb0);
  return;
}



// FUNCTION 140333d20 `dynamic_initializer_for_'CVarMaxCacheSize'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarMaxCacheSize''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarMaxCacheSize__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aee5e8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"httpReplay.MaxCacheSize",0xa00000,&DAT_145004404,0);
  _DAT_146aee5e0 = &PTR_FUN_143f3ecf8;
  DAT_146aee5f0 = (**(code **)(*DAT_146aee5e8 + 0x38))(DAT_146aee5e8);
  atexit(FUN_143ea7d00);
  return;
}



// FUNCTION 140333da0 `dynamic_initializer_for_'CVarMetaFilterOverride'' body=139 status=ok
// SIG undefined `dynamic_initializer_for_'CVarMetaFilterOverride''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarMetaFilterOverride__(void)

{
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  if (DAT_1468b1f88 == (undefined8 *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aee5b8 =
       (longlong *)
       (**(code **)*DAT_1468b1f88)
                 (DAT_1468b1f88,L"httpReplay.MetaFilterOverride",local_18,&DAT_145004114,0);
  _DAT_146aee5b0 = &PTR_FUN_143f3ecf8;
  DAT_146aee5c0 = (**(code **)(*DAT_146aee5b8 + 0x48))(DAT_146aee5b8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  atexit(FUN_143ea7d50);
  return;
}



// FUNCTION 140333e30 `dynamic_initializer_for_'ModuleRegistrantHttpNetworkReplayStreaming'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantHttpNetworkReplayStreaming''(void)

void _dynamic_initializer_for__ModuleRegistrantHttpNetworkReplayStreaming__(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_146aee5f8;
    plVar1[2] = (longlong)
                FStaticallyLinkedModuleRegistrant<FHttpNetworkReplayStreamingFactory>::
                InitializeModule;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"HttpNetworkReplayStreaming",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 140333f30 `dynamic_initializer_for_'ModuleRegistrantAdvertising'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantAdvertising''(void)

void _dynamic_initializer_for__ModuleRegistrantAdvertising__(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_146aee5f9;
    plVar1[2] = (longlong)FUN_14221cda0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"Advertising",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 140334030 `dynamic_initializer_for_'ModuleRegistrantPhysXCooking'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantPhysXCooking''(void)

void _dynamic_initializer_for__ModuleRegistrantPhysXCooking__(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_146aee610;
    plVar1[2] = (longlong)FStaticallyLinkedModuleRegistrant<FPhysXPlatformModule>::InitializeModule;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"PhysXCooking",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 140334550 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146531830,0);
  FGenericPlatformString::Memcpy(DAT_146531830,&DAT_14500ca60,8);
  atexit((_func_5014 *)&LAB_143ea7da0);
  return;
}



// FUNCTION 1403345d0 FUN_1403345d0 body=187 status=ok
// SIG undefined FUN_1403345d0(void)

void FUN_1403345d0(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar1 == (longlong *)0x0) {
    if ((DAT_146aeea68 != 0) && (DAT_146aeea60 != (longlong *)0x0)) {
      (**(code **)(*DAT_146aeea60 + 0x28))(DAT_146aeea60,0);
      if (DAT_146aeea60 != (longlong *)0x0) {
        DAT_146aeea60 = (longlong *)FMemory::Realloc(DAT_146aeea60,0,0);
      }
      DAT_146aeea68 = 0;
    }
  }
  else {
    *plVar1 = (longlong)&PTR_GetPoolName_145010f20;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[2] = lVar2;
    (**(code **)(*plVar1 + 0x30))(plVar1,&DAT_146aeea60);
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    lVar2 = FMemory::Realloc(plVar1,0,0);
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140334690 FUN_140334690 body=102 status=ok
// SIG undefined FUN_140334690(void)

void FUN_140334690(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FMemory::Realloc(0,0x20);
  DAT_146aeea38 = 2;
  DAT_146aeea30 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1450102d8;
    puVar1[1] = FUN_142236b20;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[3] = uVar2;
    *puVar1 = &PTR_GetPoolName_145010320;
  }
  atexit(FUN_143ea7e80);
  return;
}



// FUNCTION 1403348c0 FUN_1403348c0 body=32 status=ok
// SIG undefined FUN_1403348c0(void)

void FUN_1403348c0(void)

{
  FUN_142243220(&DAT_146aeebf0);
  atexit(FUN_143ea7fc0);
  return;
}



// FUNCTION 140334a00 `dynamic_initializer_for_'CVarRK4SpringInterpolatorMaxIter'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarRK4SpringInterpolatorMaxIter''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarRK4SpringInterpolatorMaxIter__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aeef88 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"p.RK4SpringInterpolator.MaxIter",&DAT_146531994,
                  L"RK4 Spring Interpolator\'s max number of iterations",0);
  _DAT_146aeef80 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ea8120);
  return;
}



// FUNCTION 140334a70 `dynamic_initializer_for_'CVarRK4SpringInterpolatorUpdateRate'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarRK4SpringInterpolatorUpdateRate''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarRK4SpringInterpolatorUpdateRate__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aeef78 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"p.RK4SpringInterpolator.UpdateRate",&DAT_146531990,
                  L"RK4 Spring Interpolator\'s rate of update",0);
  _DAT_146aeef70 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ea8170);
  return;
}



// FUNCTION 140334c80 `dynamic_initializer_for_'CVarAnimStateMachineRelevancyReset'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarAnimStateMachineRelevancyReset''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarAnimStateMachineRelevancyReset__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aef108 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"a.AnimNode.StateMachine.EnableRelevancyReset",1,
                  L"Reset State Machine when it becomes relevant",0);
  _DAT_146aef100 = &PTR_FUN_143f3ecf8;
  DAT_146aef110 = (**(code **)(*DAT_146aef108 + 0x38))(DAT_146aef108);
  atexit(FUN_143ea81f0);
  return;
}



// FUNCTION 140334d00 FUN_140334d00 body=100 status=ok
// SIG undefined FUN_140334d00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140334d00(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aef120 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"a.AnimNode.ForceAllNodeOptimizations",&DAT_146aef0d0,
                  L"If a node has an LOD or screen size optimization, this forces is to always be used. Disable: 0 - Enable: 1"
                  ,0x40);
  _DAT_146aef118 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ea8240);
  return;
}



// FUNCTION 140335080 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146531a80,0);
  FGenericPlatformString::Memcpy(DAT_146531a80,&DAT_145021228,8);
  atexit((_func_5014 *)&LAB_143ea82b0);
  return;
}



// FUNCTION 1403350e0 MapType'' body=42 status=ok
// SIG undefined MapType''(void)

void `dynamic_initializer_for_'UAssetManager::MapType__(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,&DAT_14502cc00,1);
  DAT_146aef398 = *puVar1;
  return;
}



// FUNCTION 140335110 PackageChunkType'' body=42 status=ok
// SIG undefined PackageChunkType''(void)

void `dynamic_initializer_for_'UAssetManager::PackageChunkType__(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"PackageChunk",1);
  DAT_146aef3a8 = *puVar1;
  return;
}



// FUNCTION 140335140 PrimaryAssetLabelType'' body=42 status=ok
// SIG undefined PrimaryAssetLabelType''(void)

void `dynamic_initializer_for_'UAssetManager::PrimaryAssetLabelType__(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"PrimaryAssetLabel",1);
  DAT_146aef3a0 = *puVar1;
  return;
}



// FUNCTION 140335170 `dynamic_initializer_for_'CVarAtmosphereRender'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarAtmosphereRender''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarAtmosphereRender__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aef418 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Atmosphere",1,
                  L"Defines atmosphere will render or not. Only changed by r.Atmosphere console command.\nEnable/Disable Atmosphere, Load/Unload related data.\n 0: off (To save GPU memory)\n 1: on (default)"
                  ,0);
  _DAT_146aef410 = &PTR_FUN_143f3ecf8;
  DAT_146aef420 = (**(code **)(*DAT_146aef418 + 0x38))(DAT_146aef418);
  atexit(FUN_143ea82d0);
  return;
}



// FUNCTION 1403351f0 FUN_1403351f0 body=277 status=ok
// SIG undefined FUN_1403351f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403351f0(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [32];
  longlong *local_18;
  int local_10;
  
  local_18 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f048;
    plVar1[1] = (longlong)AtmosphereRenderSinkFunction;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f090;
  }
  _DAT_146aef428 = &PTR_FUN_143f3ece8;
  DAT_146aef430 = &local_18;
  _DAT_146aef438 = 0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  puVar3 = (undefined8 *)
           (**(code **)(*DAT_1468b1f88 + 0x40))(DAT_1468b1f88,local_res8,DAT_146aef430);
  _DAT_146aef438 = *puVar3;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_1403352f4;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_1403352f4:
  atexit((_func_5014 *)&LAB_143ea8320);
  return;
}



// FUNCTION 140335310 `dynamic_initializer_for_'CVarDisableStoppingVoices'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDisableStoppingVoices''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDisableStoppingVoices__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aef490 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"au.DisableStoppingVoices",&DAT_146aef388,
                  L"Disables stopping voices feature.\n0: Not Disabled, 1: Disabled",0);
  _DAT_146aef488 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ea8330);
  return;
}



// FUNCTION 140335380 FUN_140335380 body=269 status=ok
// SIG undefined FUN_140335380(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140335380(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  int local_10;
  
  local_18 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f048;
    plVar1[1] = (longlong)UAssetManager::DumpAssetRegistryInfo;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f090;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aef3d8 =
       (**(code **)(*DAT_1468b1f88 + 0x88))
                 (DAT_1468b1f88,L"AssetManager.DumpAssetRegistryInfo",
                  L"Dumps extended info about asset registry to log",&local_18,1);
  _DAT_146aef3d0 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_14033547c;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_14033547c:
  atexit(FUN_143ea8380);
  return;
}



// FUNCTION 140335490 FUN_140335490 body=269 status=ok
// SIG undefined FUN_140335490(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140335490(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  int local_10;
  
  local_18 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f048;
    plVar1[1] = (longlong)FUN_1422c68f0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f090;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aef3b8 =
       (**(code **)(*DAT_1468b1f88 + 0x88))
                 (DAT_1468b1f88,L"AssetManager.DumpTypeSummary",
                  L"Shows a summary of types known about by the asset manager",&local_18,1);
  _DAT_146aef3b0 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_14033558c;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_14033558c:
  atexit(FUN_143ea83d0);
  return;
}



// FUNCTION 1403355a0 FUN_1403355a0 body=269 status=ok
// SIG undefined FUN_1403355a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403355a0(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  int local_10;
  
  local_18 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f048;
    plVar1[1] = (longlong)FUN_1422c6960;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f090;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aef3c8 =
       (**(code **)(*DAT_1468b1f88 + 0x88))
                 (DAT_1468b1f88,L"AssetManager.DumpLoadedAssets",
                  L"Shows a list of all loaded primary assets and bundles",&local_18,1);
  _DAT_146aef3c0 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_14033569c;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_14033569c:
  atexit(FUN_143ea8420);
  return;
}



// FUNCTION 1403356b0 FUN_1403356b0 body=269 status=ok
// SIG undefined FUN_1403356b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403356b0(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  int local_10;
  
  local_18 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_1444d51e8;
    plVar1[1] = (longlong)FUN_1422c6fe0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_1444d5230;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aef3e8 =
       (**(code **)(*DAT_1468b1f88 + 0x80))
                 (DAT_1468b1f88,L"AssetManager.DumpReferencersForPackage",
                  L"Generates a graph viz and log file of all references to a specified package",
                  &local_18,1);
  _DAT_146aef3e0 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_1403357ac;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_1403357ac:
  atexit(FUN_143ea8470);
  return;
}



// FUNCTION 1403357c0 `dynamic_initializer_for_'CVarSetAudioChannelCount'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarSetAudioChannelCount''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarSetAudioChannelCount__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aef480 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"au.SetAudioChannelCount",&DAT_146aef384,
                  L"Changes the audio channel count. Max value is clamped to the MaxChannelCount the audio engine was initialize with.\n0: Disable, >0: Enable"
                  ,0);
  _DAT_146aef478 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ea84c0);
  return;
}



// FUNCTION 140335830 `dynamic_initializer_for_'CVarShouldUseBackgroundPoolFor_FAsyncRealtimeAudioTask'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarShouldUseBackgroundPoolFor_FAsyncRealtimeAudioTask''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarShouldUseBackgroundPoolFor_FAsyncRealtimeAudioTask__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aef468 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"AudioThread.UseBackgroundThreadPool",1,
                  L"If true, use the background thread pool for realtime audio decompression.",0);
  _DAT_146aef460 = &PTR_FUN_143f3ecf8;
  DAT_146aef470 = (**(code **)(*DAT_146aef468 + 0x38))(DAT_146aef468);
  atexit(FUN_143ea8510);
  return;
}



// FUNCTION 1403359e0 FUN_1403359e0 body=51 status=ok
// SIG undefined FUN_1403359e0(void)

void FUN_1403359e0(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146aef698);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_146aef698,4000);
  atexit((_func_5014 *)&LAB_143ea8580);
  return;
}



// FUNCTION 140335a20 `dynamic_initializer_for_'BufferVisualizationDumpFramesAsHDR'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'BufferVisualizationDumpFramesAsHDR''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__BufferVisualizationDumpFramesAsHDR__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aef7c8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.BufferVisualizationDumpFramesAsHDR",0,
                  L"When saving out buffer visualization materials in a HDR capable format\n0: Do not override default save format.\n1: Force HDR format for buffer visualization materials."
                  ,0x20);
  _DAT_146aef7c0 = &PTR_FUN_143f3ecf8;
  _DAT_146aef7d0 = (**(code **)(*DAT_146aef7c8 + 0x38))(DAT_146aef7c8);
  atexit(FUN_143ea8590);
  return;
}



// FUNCTION 140335a90 `dynamic_initializer_for_'CVarAboveNormalAudioThreadPri'' body=116 status=ok
// SIG undefined `dynamic_initializer_for_'CVarAboveNormalAudioThreadPri''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarAboveNormalAudioThreadPri__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aef618 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"AudioThread.AboveNormalPriority",DAT_146aef5a4,
                  L"0=Normal, 1=AboveNormal",0);
  _DAT_146aef610 = &PTR_FUN_143f3ecf8;
  DAT_146aef620 = (**(code **)(*DAT_146aef618 + 0x38))(DAT_146aef618);
  atexit(FUN_143ea85e0);
  return;
}



// FUNCTION 140335b10 `dynamic_initializer_for_'CVarAudioThreadWaitWarningThresholdMs'' body=116 status=ok
// SIG undefined `dynamic_initializer_for_'CVarAudioThreadWaitWarningThresholdMs''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarAudioThreadWaitWarningThresholdMs__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aef648 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"AudioThread.WaitWarningThresholdMs",DAT_146531acc,
                  L"Sets number of ms to wait before logging audio thread stall.",0);
  _DAT_146aef640 = &PTR_FUN_143f3ecf8;
  _DAT_146aef650 = (**(code **)(*DAT_146aef648 + 0x38))(DAT_146aef648);
  atexit(FUN_143ea8630);
  return;
}



// FUNCTION 140335b90 FUN_140335b90 body=100 status=ok
// SIG undefined FUN_140335b90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140335b90(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aef678 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"AudioThread.BatchAsyncBatchSize",&DAT_146531ad4,
                  L"When AudioThread.EnableBatchProcessing = 1, controls the number of audio commands grouped together for threading."
                  ,0);
  _DAT_146aef670 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ea8680);
  return;
}



// FUNCTION 140335c00 FUN_140335c00 body=100 status=ok
// SIG undefined FUN_140335c00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140335c00(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aef7b8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"gc.BlueprintClusteringEnabled",&DAT_146aef578,
                  L"Whether to allow Blueprint classes to create GC clusters.",0);
  _DAT_146aef7b0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ea86d0);
  return;
}



// FUNCTION 140335c70 `dynamic_initializer_for_'CVarBufferVisualizationDumpFrames'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarBufferVisualizationDumpFrames''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarBufferVisualizationDumpFrames__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aef7e0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.BufferVisualizationDumpFrames",0,
                  L"When screenshots or movies dumps are requested, also save out dumps of the current buffer visualization materials\n0:off (default)\n1:on"
                  ,0x20);
  _DAT_146aef7d8 = &PTR_FUN_143f3ecf8;
  _DAT_146aef7e8 = (**(code **)(*DAT_146aef7e0 + 0x38))(DAT_146aef7e0);
  atexit(FUN_143ea8720);
  return;
}



// FUNCTION 140335ce0 `dynamic_initializer_for_'CVarConstrainCameraDistance'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarConstrainCameraDistance''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarConstrainCameraDistance__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aef918 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.Photography.Constrain.MaxCameraDistance",0x451c4000,
                  L"Maximum distance (in Unreal Units) which camera is allowed to wander from its initial position when constraining camera by distance (Default: 2500.0)"
                  ,0);
  _DAT_146aef910 = &PTR_FUN_143f3ecf8;
  _DAT_146aef920 = (**(code **)(*DAT_146aef918 + 0x40))(DAT_146aef918);
  atexit(FUN_143ea8770);
  return;
}



// FUNCTION 140335d60 `dynamic_initializer_for_'CVarConstrainCameraSize'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarConstrainCameraSize''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarConstrainCameraSize__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aef900 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.Photography.Constrain.CameraSize",0x41600000,
                  L"Radius (in Unreal Units) of sphere around the camera; used to prevent the camera clipping into nearby geometry when constraining camera with collision (Default: 14.0)"
                  ,0);
  _DAT_146aef8f8 = &PTR_FUN_143f3ecf8;
  _DAT_146aef908 = (**(code **)(*DAT_146aef900 + 0x40))(DAT_146aef900);
  atexit(FUN_143ea87c0);
  return;
}



// FUNCTION 140335de0 `dynamic_initializer_for_'CVarEnableAudioCommandLogging'' body=116 status=ok
// SIG undefined `dynamic_initializer_for_'CVarEnableAudioCommandLogging''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarEnableAudioCommandLogging__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aef630 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"AudioThread.EnableAudioCommandLogging",DAT_146aef5a8,
                  L"0=Disbaled, 1=Enabled",0);
  _DAT_146aef628 = &PTR_FUN_143f3ecf8;
  _DAT_146aef638 = (**(code **)(*DAT_146aef630 + 0x38))(DAT_146aef630);
  atexit(FUN_143ea8810);
  return;
}



// FUNCTION 140335e60 `dynamic_initializer_for_'CVarEnableAudioThreadWait'' body=116 status=ok
// SIG undefined `dynamic_initializer_for_'CVarEnableAudioThreadWait''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarEnableAudioThreadWait__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aef5d8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"AudioThread.EnableAudioThreadWait",DAT_146531ac8,
                  L"Enables waiting on the audio thread to finish its commands.\n0: Not Enabled, 1: Enabled"
                  ,0);
  _DAT_146aef5d0 = &PTR_FUN_143f3ecf8;
  _DAT_146aef5e0 = (**(code **)(*DAT_146aef5d8 + 0x38))(DAT_146aef5d8);
  atexit(FUN_143ea8860);
  return;
}



// FUNCTION 140335ee0 `dynamic_initializer_for_'CVarEnableBatchProcessing'' body=116 status=ok
// SIG undefined `dynamic_initializer_for_'CVarEnableBatchProcessing''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarEnableBatchProcessing__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aef660 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"AudioThread.EnableBatchProcessing",DAT_146531ad0,
                  L"Enables batch processing audio thread commands.\n0: Not Enabled, 1: Enabled",0);
  _DAT_146aef658 = &PTR_FUN_143f3ecf8;
  _DAT_146aef668 = (**(code **)(*DAT_146aef660 + 0x38))(DAT_146aef660);
  atexit(FUN_143ea88b0);
  return;
}



// FUNCTION 140335f60 `dynamic_initializer_for_'CVarPhotographyAllow'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarPhotographyAllow''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarPhotographyAllow__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aef8a0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Photography.Allow",1,
                  L"If 1, allow the user to freeze the scene and potentially use a roaming camera to\ntake screenshots.  Set this dynamically to permit or forbid photography per-level,\nper-cutscene, etc.  (Default: 1)"
                  ,0);
  _DAT_146aef898 = &PTR_FUN_143f3ecf8;
  _DAT_146aef8a8 = (**(code **)(*DAT_146aef8a0 + 0x38))(DAT_146aef8a0);
  atexit(FUN_143ea8900);
  return;
}



// FUNCTION 140335fe0 `dynamic_initializer_for_'CVarPhotographyAutoPause'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarPhotographyAutoPause''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarPhotographyAutoPause__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aef948 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Photography.AutoPause",1,
                  L"If 1, the photography system will attempt to ensure that the level is paused while in photography mode.  Set to 0 to manage pausing and unpausing manually from the PlayerCameraManager Blueprint callbacks.    Note: Blueprint callbacks will be called regardless of AutoPause value.  (Default: auto-pause (1)"
                  ,0);
  _DAT_146aef940 = &PTR_FUN_143f3ecf8;
  _DAT_146aef950 = (**(code **)(*DAT_146aef948 + 0x38))(DAT_146aef948);
  atexit(FUN_143ea8950);
  return;
}



// FUNCTION 140336060 `dynamic_initializer_for_'CVarPhotographyAutoPostprocess'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarPhotographyAutoPostprocess''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarPhotographyAutoPostprocess__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aef930 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Photography.AutoPostprocess",1,
                  L"If 1, the photography system will attempt to automatically disable HUD, subtitles, and some standard postprocessing effects during photography sessions/captures which are known to give poor photography results.  Set to 0 to manage all postprocessing tweaks manually from the PlayerCameraManager Blueprint callbacks.  Note: Blueprint callbacks will be called regardless of AutoPostprocess value.  (Default: auto-disable (1)"
                  ,0);
  _DAT_146aef928 = &PTR_FUN_143f3ecf8;
  _DAT_146aef938 = (**(code **)(*DAT_146aef930 + 0x38))(DAT_146aef930);
  atexit(FUN_143ea89a0);
  return;
}



// FUNCTION 1403360e0 `dynamic_initializer_for_'CVarPhotographyAvailable'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarPhotographyAvailable''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarPhotographyAvailable__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aef888 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Photography.Available",1,
                  L"(Read-only) If 1, the photography system is potentially available to the user.\nOtherwise, a functioning back-end is not available."
                  ,4);
  _DAT_146aef880 = &PTR_FUN_143f3ecf8;
  _DAT_146aef890 = (**(code **)(*DAT_146aef888 + 0x38))(DAT_146aef888);
  atexit(FUN_143ea89f0);
  return;
}



// FUNCTION 140336160 `dynamic_initializer_for_'CVarPhotographyEnableMultipart'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarPhotographyEnableMultipart''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarPhotographyEnableMultipart__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aef8b8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Photography.EnableMultipart",1,
                  L"If 1, allow the photography system to take high-resolution shots that need to be rendered in tiles which are later stitched together.  (Default: 1)"
                  ,0);
  _DAT_146aef8b0 = &PTR_FUN_143f3ecf8;
  _DAT_146aef8c0 = (**(code **)(*DAT_146aef8b8 + 0x38))(DAT_146aef8b8);
  atexit(FUN_143ea8a40);
  return;
}



// FUNCTION 1403361e0 `dynamic_initializer_for_'CVarPhotographySettleFrames'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarPhotographySettleFrames''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarPhotographySettleFrames__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aef8d0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Photography.SettleFrames",10,
                  L"The number of frames to let the rendering \'settle\' before taking a photo.  Useful to allow temporal AA/smoothing to work well; if not using any temporal effects, can be lowered for faster capture.  (Default: 10)"
                  ,0);
  _DAT_146aef8c8 = &PTR_FUN_143f3ecf8;
  _DAT_146aef8d8 = (**(code **)(*DAT_146aef8d0 + 0x38))(DAT_146aef8d0);
  atexit(FUN_143ea8a90);
  return;
}



// FUNCTION 140336260 `dynamic_initializer_for_'CVarPhotographyTranslationSpeed'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarPhotographyTranslationSpeed''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarPhotographyTranslationSpeed__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aef8e8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.Photography.TranslationSpeed",0x42c80000,
                  L"Normal speed (in Unreal Units per second) at which to move the roaming photography camera. (Default: 100.0)"
                  ,0);
  _DAT_146aef8e0 = &PTR_FUN_143f3ecf8;
  _DAT_146aef8f0 = (**(code **)(*DAT_146aef8e8 + 0x40))(DAT_146aef8e8);
  atexit(FUN_143ea8ae0);
  return;
}



// FUNCTION 1403362e0 `dynamic_initializer_for_'CVarSpoofFailedStreamChunkLoad'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarSpoofFailedStreamChunkLoad''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarSpoofFailedStreamChunkLoad__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aef5f0 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"au.SpoofFailedStreamChunkLoad",&DAT_146aef57c,
                  L"Forces failing to load streamed chunks.\n0: Not Enabled, 1: Enabled",0);
  _DAT_146aef5e8 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ea8b30);
  return;
}



// FUNCTION 140336350 `dynamic_initializer_for_'CVarSuspendAudioThread'' body=116 status=ok
// SIG undefined `dynamic_initializer_for_'CVarSuspendAudioThread''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarSuspendAudioThread__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aef600 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"AudioThread.SuspendAudioThread",DAT_146aef5a0,
                  L"0=Resume, 1=Suspend",1);
  _DAT_146aef5f8 = &PTR_FUN_143f3ecf8;
  DAT_146aef608 = (**(code **)(*DAT_146aef600 + 0x38))(DAT_146aef600);
  atexit(FUN_143ea8b80);
  return;
}



// FUNCTION 1403363d0 FUN_1403363d0 body=277 status=ok
// SIG undefined FUN_1403363d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403363d0(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [32];
  longlong *local_18;
  int local_10;
  
  local_18 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f048;
    plVar1[1] = (longlong)&LAB_1422fc120;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f090;
  }
  _DAT_146aef680 = &PTR_FUN_143f3ece8;
  DAT_146aef688 = &local_18;
  _DAT_146aef690 = 0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  puVar3 = (undefined8 *)
           (**(code **)(*DAT_1468b1f88 + 0x40))(DAT_1468b1f88,local_res8,DAT_146aef688);
  _DAT_146aef690 = *puVar3;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_1403364d4;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_1403364d4:
  atexit((_func_5014 *)&LAB_143ea8bd0);
  return;
}



// FUNCTION 1403364f0 `dynamic_initializer_for_'CVarWellCanvasDistanceFieldSmoothWidth'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarWellCanvasDistanceFieldSmoothWidth''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarWellCanvasDistanceFieldSmoothWidth__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aef7a8 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"Canvas.DistanceFieldSmoothness",&DAT_146531ac4,
                  L"Global sharpness of distance field fonts/shapes rendered by canvas.",0);
  _DAT_146aef7a0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ea8be0);
  return;
}



// FUNCTION 140336600 FUN_140336600 body=67 status=ok
// SIG undefined FUN_140336600(void)

void FUN_140336600(void)

{
  char cVar1;
  
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    (**(code **)(PTR_PTR_146531ad8 + 0x28))();
    atexit(FUN_143ea8cc0);
    return;
  }
  FUN_141edf270(&PTR_PTR_146531ad8);
  atexit(FUN_143ea8cc0);
  return;
}



// FUNCTION 140336990 `dynamic_initializer_for_'GFPSChartDoCsvProfile'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'GFPSChartDoCsvProfile''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GFPSChartDoCsvProfile__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aefbe8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"t.FPSChart.DoCsvProfile",0,
                  L"Whether to record a CSV profile when recording FPSChart data\n default: 0",0);
  _DAT_146aefbe0 = &PTR_FUN_143f3ecf8;
  DAT_146aefbf0 = (**(code **)(*DAT_146aefbe8 + 0x38))(DAT_146aefbe8);
  atexit(FUN_143ea8d80);
  return;
}


