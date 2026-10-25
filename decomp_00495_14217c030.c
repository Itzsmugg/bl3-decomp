// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14217c030 FUN_14217c030 body=216 status=ok
// SIG undefined FUN_14217c030(void)

undefined8 * FUN_14217c030(undefined8 *param_1)

{
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144fdcad0;
  FName::FName(param_1 + 5,L"None",1);
  param_1[6] = 0;
  param_1[7] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 6,0);
  FGenericPlatformString::Memcpy(param_1[6],L"None",10);
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)((longlong)param_1 + 0x79) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return param_1;
}



// FUNCTION 14217c110 FUN_14217c110 body=37 status=ok
// SIG undefined FUN_14217c110(void)

undefined8 * FUN_14217c110(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FUN_14218c0c0(local_res8,param_2,param_3,1);
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14217c140 FUN_14217c140 body=128 status=ok
// SIG undefined FUN_14217c140(void)

undefined8 * FUN_14217c140(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aeb930) {
    _Init_thread_header(&DAT_146aeb930);
    if (DAT_146aeb930 == -1) {
      FUN_14217c030(&DAT_146aeb870);
      atexit((_func_5014 *)&LAB_143ea70e0);
      _Init_thread_footer(&DAT_146aeb930);
    }
  }
  *param_1 = &DAT_146aeb870;
  return param_1;
}



// FUNCTION 14217c1c0 FUN_14217c1c0 body=908 status=ok
// SIG undefined FUN_14217c1c0(void)

longlong * FUN_14217c1c0(longlong *param_1,short *param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  
  puVar7 = (undefined8 *)0x0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (longlong)&PTR_FUN_144fdcb78;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 2;
  param_1[6] = param_3;
  param_1[7] = 0;
  param_1[8] = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (param_2[lVar6] != 0);
    iVar5 = (int)lVar6 + 1;
    *(int *)(param_1 + 8) = iVar5;
    if (0 < iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 7,0);
    }
    FGenericPlatformString::Memcpy(param_1[7],param_2,(longlong)iVar5 * 2);
  }
  lVar6 = param_1[6];
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"period_frames",1);
  FUN_14218da20(lVar6,param_1 + 9,DAT_146aeae98,*puVar1,0);
  lVar6 = param_1[6];
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"period_seconds",1);
  FUN_14218da20(lVar6,param_1 + 10,DAT_146aeae98,*puVar1,0);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  uVar2 = FUN_14217e4b0(&local_res8,L"sample_rate");
  lVar6 = FUN_142186fe0(uVar2,param_1);
  param_1[0xf] = lVar6;
  uVar2 = FUN_14217e4b0(&local_res8,L"sample_rate_latch");
  lVar6 = FUN_1421871d0(uVar2,param_1);
  param_1[0x10] = lVar6;
  *(undefined1 *)((longlong)param_1 + 0x89) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  puVar3 = (undefined8 *)FUN_14217e4b0(local_res10,L"report_period");
  local_res8 = *puVar3;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x18))(param_1,&local_res8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)operator_new(0x18);
    puVar1 = puVar7;
    if (puVar4 != (undefined8 *)0x0) {
      uVar2 = *puVar3;
      *puVar4 = &PTR_FUN_144fdcb18;
      puVar4[1] = uVar2;
      *(undefined4 *)(puVar4 + 2) = 0xbf800000;
      puVar1 = puVar4;
    }
    (**(code **)(*param_1 + 0x20))(param_1,puVar1);
    FUN_142186e60(param_1,puVar1);
  }
  param_1[0x20] = (longlong)puVar1;
  puVar3 = (undefined8 *)FUN_14217e4b0(local_res10,L"poll_default_events");
  local_res8 = *puVar3;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x18))(param_1,&local_res8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)operator_new(0x18);
    puVar1 = puVar7;
    if (puVar4 != (undefined8 *)0x0) {
      uVar2 = *puVar3;
      *puVar4 = &PTR_FUN_144fdcb48;
      puVar4[1] = uVar2;
      *(undefined1 *)(puVar4 + 2) = 0;
      puVar1 = puVar4;
    }
    (**(code **)(*param_1 + 0x20))(param_1,puVar1);
    FUN_142186e60(param_1,puVar1);
  }
  param_1[0x21] = (longlong)puVar1;
  puVar3 = (undefined8 *)FUN_14217e4b0(local_res10,L"report_synchronized");
  local_res8 = *puVar3;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x18))(param_1,&local_res8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)operator_new(0x18);
    puVar1 = puVar7;
    if (puVar4 != (undefined8 *)0x0) {
      uVar2 = *puVar3;
      *puVar4 = &PTR_FUN_144fdcb48;
      puVar4[1] = uVar2;
      *(undefined1 *)(puVar4 + 2) = 1;
      puVar1 = puVar4;
    }
    (**(code **)(*param_1 + 0x20))(param_1,puVar1);
    FUN_142186e60(param_1,puVar1);
  }
  param_1[0x22] = (longlong)puVar1;
  puVar3 = (undefined8 *)FUN_14217e4b0(local_res10,L"report_empty_columns");
  local_res8 = *puVar3;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x18))(param_1,&local_res8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)operator_new(0x18);
    if (puVar1 != (undefined8 *)0x0) {
      uVar2 = *puVar3;
      *puVar1 = &PTR_FUN_144fdcb48;
      puVar1[1] = uVar2;
      *(undefined1 *)(puVar1 + 2) = 1;
      puVar7 = puVar1;
    }
    (**(code **)(*param_1 + 0x20))(param_1,puVar7);
    FUN_142186e60(param_1,puVar7);
    puVar1 = puVar7;
  }
  param_1[0x23] = (longlong)puVar1;
  FUN_142184f20(param_1);
  return param_1;
}



// FUNCTION 14217c550 FUN_14217c550 body=6 status=ok
// SIG undefined FUN_14217c550(void)

undefined4 * FUN_14217c550(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 14217c560 FUN_14217c560 body=10 status=ok
// SIG undefined FUN_14217c560(void)

undefined4 * FUN_14217c560(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  return param_1;
}



// FUNCTION 14217c570 FUN_14217c570 body=401 status=ok
// SIG undefined FUN_14217c570(void)

undefined8 * FUN_14217c570(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  undefined4 uStack_c;
  
  uVar2 = FUN_14164ab60();
  FUN_14158c9d0(param_1,L"Telemetry_FEventStructManagerImpl",0,uVar2);
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_144fdcbd0;
  param_1[3] = &PTR_LAB_144fdcbe0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_1421891a0(param_1 + 6,0);
  InitializeSRWLock((PSRWLOCK)(param_1 + 9));
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_142188fa0(param_1 + 10,0);
  InitializeSRWLock((PSRWLOCK)(param_1 + 0xd));
  FUN_14217b4c0(param_1 + 0xe,0);
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x14,0);
  FGenericPlatformString::Memcpy(param_1[0x14],L"Globals",0x10);
  plVar3 = (longlong *)FUN_14218dd00();
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar4 != (longlong *)0x0) {
    plVar4[1] = (longlong)param_1;
    *plVar4 = (longlong)&PTR_GetPoolName_144fdd1e0;
    *(undefined4 *)(plVar4 + 2) = 0x42192150;
    *(undefined4 *)((longlong)plVar4 + 0x14) = 1;
    *(undefined4 *)(plVar4 + 3) = 0;
    *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_c;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[5] = lVar5;
    *plVar4 = (longlong)&PTR_GetPoolName_144fdd228;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar3,1);
    (**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
    iVar1 = (int)plVar3[1];
    *(int *)(plVar3 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar3 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar3,iVar1);
    }
    puVar6 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar3);
    *puVar6 = plVar4;
    *(undefined4 *)(puVar6 + 1) = 3;
  }
  return param_1;
}



// FUNCTION 14217c710 FUN_14217c710 body=160 status=ok
// SIG undefined FUN_14217c710(void)

undefined4 * FUN_14217c710(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 0x22) = 0;
  if (*(longlong *)(param_2 + 0x22) == 0) {
    _guard_xfg_dispatch_icall_nop(param_1 + 2,param_2 + 2,0x80);
  }
  if (*(longlong *)(param_1 + 0x22) != 0) {
    FMemory::Free();
  }
  *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(param_2 + 0x22) = 0;
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = param_2[0x25];
  *(undefined8 *)(param_2 + 0x24) = 0;
  return param_1;
}



// FUNCTION 14217c7b0 ActionGroup body=48 status=ok
// SIG undefined ActionGroup(void)

undefined8 * FGraphActionListBuilderBase::ActionGroup::ActionGroup(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_142194230();
  return param_1;
}



// FUNCTION 14217c7e0 FUN_14217c7e0 body=288 status=ok
// SIG undefined FUN_14217c7e0(void)

undefined8 * FUN_14217c7e0(undefined8 *param_1,short *param_2,short *param_3,short *param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = -1;
  if ((param_3 != (short *)0x0) && (lVar3 = lVar1, *param_3 != 0)) {
    do {
      lVar3 = lVar3 + 1;
    } while (param_3[lVar3] != 0);
    iVar2 = (int)lVar3 + 1;
    *(int *)(param_1 + 1) = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,param_3,(longlong)iVar2 * 2);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_2 != (short *)0x0) && (lVar3 = lVar1, *param_2 != 0)) {
    do {
      lVar3 = lVar3 + 1;
    } while (param_2[lVar3] != 0);
    iVar2 = (int)lVar3 + 1;
    *(int *)(param_1 + 3) = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 2,0);
    }
    FGenericPlatformString::Memcpy(param_1[2],param_2,(longlong)iVar2 * 2);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  if ((param_4 != (short *)0x0) && (*param_4 != 0)) {
    do {
      lVar1 = lVar1 + 1;
    } while (param_4[lVar1] != 0);
    iVar2 = (int)lVar1 + 1;
    *(int *)(param_1 + 5) = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 4,0);
    }
    FGenericPlatformString::Memcpy(param_1[4],param_4,(longlong)iVar2 * 2);
  }
  return param_1;
}



// FUNCTION 14217c900 FUN_14217c900 body=29 status=ok
// SIG undefined FUN_14217c900(void)

undefined8 * FUN_14217c900(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 14217c920 FUN_14217c920 body=226 status=ok
// SIG undefined FUN_14217c920(void)

undefined8 * FUN_14217c920(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong local_38 [6];
  
  local_38[1] = 0xd;
  local_38[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],L"damage_state",0x1a);
  local_38[2] = 0;
  local_38[3] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38 + 2,0);
  FGenericPlatformString::Memcpy(local_38[2],L"gbxtelemetry",0x1a);
  local_38[4] = 0;
  local_38[5] = 0;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"DamageState",1);
  puVar1 = (undefined8 *)FUN_14218c0c0(local_res10,*puVar1,local_38,1);
  *param_1 = *puVar1;
  if (local_38[4] != 0) {
    FMemory::Free();
  }
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14217ca10 FUN_14217ca10 body=1079 status=ok
// SIG undefined FUN_14217ca10(void)

undefined8 * FUN_14217ca10(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *local_res8;
  undefined8 local_res10;
  undefined1 local_res18 [8];
  longlong local_68 [6];
  
  local_68[1] = 0xd;
  local_68[0] = 0;
  local_res8 = param_1;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
  FGenericPlatformString::Memcpy(local_68[0],L"game_context",0x1a);
  local_68[2] = 0;
  local_68[3] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68 + 2,0);
  FGenericPlatformString::Memcpy(local_68[2],L"gbxtelemetry",0x1a);
  local_68[4] = 0;
  local_68[5] = 0;
  puVar2 = (undefined8 *)FName::FName(&local_res10,L"GameContext",1);
  puVar2 = (undefined8 *)FUN_14218c0c0(local_res18,*puVar2,local_68,1);
  *param_1 = *puVar2;
  if (local_68[4] != 0) {
    FMemory::Free();
  }
  if (local_68[2] != 0) {
    FMemory::Free();
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  FUN_14217bd20(param_1 + 1);
  FUN_14217bd20(param_1 + 2);
  FUN_14217bd20(param_1 + 3);
  FUN_14217bd20(param_1 + 4);
  FUN_14217bd20(param_1 + 5);
  FUN_14217bd20(param_1 + 6);
  FUN_14217bd20(param_1 + 7);
  FUN_14217bd20(param_1 + 8);
  FUN_14217bd20(param_1 + 9);
  FUN_14217bd20(param_1 + 10);
  FUN_14217bd20(param_1 + 0xb);
  FUN_14217bd20(param_1 + 0xc);
  uVar1 = *param_1;
  puVar2 = (undefined8 *)FName::FName(local_res18,L"player_loc",1);
  FUN_14218da20(uVar1,&local_res10,DAT_146aeae90,*puVar2,0);
  puVar2 = local_res8;
  param_1[1] = local_res10;
  uVar1 = *local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res10,L"player_index",1);
  FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar3,0);
  uVar1 = *puVar2;
  param_1[2] = local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res10,L"player_id",1);
  FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar3,0);
  uVar1 = *puVar2;
  param_1[3] = local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res10,L"player_is_local",1);
  FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar3,0);
  uVar1 = *puVar2;
  param_1[4] = local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res10,L"players_all",1);
  FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar3,0);
  uVar1 = *puVar2;
  param_1[5] = local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res10,L"players_local",1);
  FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar3,0);
  uVar1 = *puVar2;
  param_1[6] = local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res10,L"players_clients",1);
  FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar3,0);
  uVar1 = *puVar2;
  puVar2[7] = local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res10,L"game_maptime",1);
  FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar3,0);
  uVar1 = *puVar2;
  puVar2[8] = local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res10,L"game_mapindex",1);
  FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar3,0);
  uVar1 = *puVar2;
  puVar2[9] = local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res10,L"world_type",1);
  FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar3,0);
  puVar2[10] = local_res8;
  uVar1 = *puVar2;
  puVar3 = (undefined8 *)FName::FName(&local_res10,L"plat_uptime",1);
  FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar3,0);
  uVar1 = *puVar2;
  puVar2[0xb] = local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res10,L"plat_runtime",1);
  FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar3,0);
  puVar2[0xc] = local_res8;
  return puVar2;
}



// FUNCTION 14217ce50 FUN_14217ce50 body=226 status=ok
// SIG undefined FUN_14217ce50(void)

undefined8 * FUN_14217ce50(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong local_38 [6];
  
  local_38[1] = 0x14;
  local_38[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],L"game_instance_state",0x28);
  local_38[2] = 0;
  local_38[3] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38 + 2,0);
  FGenericPlatformString::Memcpy(local_38[2],L"gbxtelemetry",0x1a);
  local_38[4] = 0;
  local_38[5] = 0;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GameInstanceState",1);
  puVar1 = (undefined8 *)FUN_14218c0c0(local_res10,*puVar1,local_38,1);
  *param_1 = *puVar1;
  if (local_38[4] != 0) {
    FMemory::Free();
  }
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14217cf40 FUN_14217cf40 body=1499 status=ok
// SIG undefined FUN_14217cf40(void)

undefined8 * FUN_14217cf40(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *local_res8;
  undefined8 local_res10;
  undefined1 local_res18 [8];
  longlong local_68 [6];
  
  local_68[1] = 9;
  local_68[0] = 0;
  local_res8 = param_1;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
  FGenericPlatformString::Memcpy(local_68[0],L"gameperf",0x12);
  local_68[2] = 0;
  local_68[3] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68 + 2,0);
  FGenericPlatformString::Memcpy(local_68[2],L"gbxtelemetry",0x1a);
  local_68[4] = 0;
  local_68[5] = 0;
  puVar2 = (undefined8 *)FName::FName(&local_res10,L"GamePerf",1);
  puVar2 = (undefined8 *)FUN_14218c0c0(local_res18,*puVar2,local_68,1);
  *param_1 = *puVar2;
  if (local_68[4] != 0) {
    FMemory::Free();
  }
  if (local_68[2] != 0) {
    FMemory::Free();
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  FUN_14217bd20(param_1 + 1);
  FUN_14217bd20(param_1 + 2);
  FUN_14217bd20(param_1 + 3);
  FUN_14217bd20(param_1 + 4);
  FUN_14217bd20(param_1 + 5);
  FUN_14217bd20(param_1 + 6);
  FUN_14217bd20(param_1 + 7);
  FUN_14217bd20(param_1 + 8);
  FUN_14217bd20(param_1 + 9);
  FUN_14217bd20(param_1 + 10);
  FUN_14217bd20(param_1 + 0xb);
  FUN_14217bd20(param_1 + 0xc);
  FUN_14217bd20(param_1 + 0xd);
  FUN_14217bd20(param_1 + 0xe);
  FUN_14217bd20(param_1 + 0xf);
  FUN_14217bd20(param_1 + 0x10);
  FUN_14217bd20(param_1 + 0x11);
  FUN_14217bd20(param_1 + 0x12);
  uVar1 = *param_1;
  puVar2 = (undefined8 *)FName::FName(local_res18,L"gameperf_frame_time",1);
  FUN_14218da20(uVar1,&local_res10,DAT_146aeae90,*puVar2,0);
  puVar2 = local_res8;
  param_1[1] = local_res10;
  uVar1 = *local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res10,L"gameperf_game_time",1);
  FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar3,0);
  uVar1 = *puVar2;
  param_1[2] = local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res10,L"gameperf_render_time",1);
  FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar3,0);
  uVar1 = *puVar2;
  param_1[3] = local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res10,L"gameperf_gpu_time",1);
  FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar3,0);
  uVar1 = *puVar2;
  param_1[4] = local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res10,L"gameperf_hitches",1);
  FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar3,0);
  uVar1 = *puVar2;
  param_1[5] = local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res10,L"gameperf_net_bytes_in",1);
  FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar3,0);
  uVar1 = *puVar2;
  param_1[6] = local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res10,L"gameperf_net_bytes_out",1);
  FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar3,0);
  uVar1 = *puVar2;
  puVar2[7] = local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res10,L"gameperf_net_voicebytes_in",1);
  FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar3,0);
  uVar1 = *puVar2;
  puVar2[8] = local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res10,L"gameperf_net_voicebytes_out",1);
  FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar3,0);
  uVar1 = *puVar2;
  puVar2[9] = local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res10,L"gameperf_net_loss_in",1);
  FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar3,0);
  uVar1 = *puVar2;
  puVar2[10] = local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res10,L"gameperf_net_loss_out",1);
  FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar3,0);
  uVar1 = *puVar2;
  puVar2[0xb] = local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res10,L"gameperf_net_lagging",1);
  FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar3,0);
  uVar1 = *puVar2;
  puVar2[0xc] = local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res10,L"gameperf_net_ping",1);
  FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar3,0);
  uVar1 = *puVar2;
  puVar2[0xd] = local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res10,L"gameperf_net_is_turn_connection",1);
  FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar3,0);
  uVar1 = *puVar2;
  puVar2[0xe] = local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res10,L"gameperf_net_driver_name",1);
  FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar3,0);
  uVar1 = *puVar2;
  puVar2[0xf] = local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res10,L"gameperf_players_all",1);
  FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar3,0);
  uVar1 = *puVar2;
  puVar2[0x10] = local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res10,L"gameperf_players_local",1);
  FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar3,0);
  uVar1 = *puVar2;
  puVar2[0x11] = local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res10,L"gameperf_players_clients",1);
  FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar3,0);
  puVar2[0x12] = local_res8;
  return puVar2;
}



// FUNCTION 14217d520 FUN_14217d520 body=1009 status=ok
// SIG undefined FUN_14217d520(void)

undefined8 * FUN_14217d520(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *local_res8;
  undefined8 local_res10;
  undefined1 local_res18 [8];
  longlong local_68 [6];
  
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0;
  local_68[4] = 0;
  local_68[5] = 0;
  local_res8 = param_1;
  puVar2 = (undefined8 *)FName::FName(&local_res10,L"Global",1);
  puVar2 = (undefined8 *)FUN_14218c0c0(local_res18,*puVar2,local_68,1);
  *param_1 = *puVar2;
  if (local_68[4] != 0) {
    FMemory::Free();
  }
  if (local_68[2] != 0) {
    FMemory::Free();
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  FUN_14217bd20(param_1 + 1);
  FUN_14217bd20(param_1 + 2);
  FUN_14217bd20(param_1 + 3);
  FUN_14217bd20(param_1 + 4);
  FUN_14217bd20(param_1 + 5);
  FUN_14217bd20(param_1 + 6);
  FUN_14217bd20(param_1 + 7);
  FUN_14217bd20(param_1 + 8);
  FUN_14217bd20(param_1 + 9);
  FUN_14217bd20(param_1 + 10);
  FUN_14217bd20(param_1 + 0xb);
  FUN_14217bd20(param_1 + 0xc);
  uVar1 = *param_1;
  puVar2 = (undefined8 *)FName::FName(local_res18,L"event_context",1);
  FUN_14218da20(uVar1,&local_res10,DAT_146aeae90,*puVar2,0);
  puVar2 = local_res8;
  param_1[1] = local_res10;
  uVar1 = *local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res10,L"event_guid",1);
  FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar3,0);
  uVar1 = *puVar2;
  param_1[2] = local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res10,L"event_name",1);
  FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar3,0);
  uVar1 = *puVar2;
  param_1[3] = local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res10,L"event_relations",1);
  FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar3,0);
  uVar1 = *puVar2;
  param_1[4] = local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res10,L"game_mapname",1);
  FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar3,0);
  uVar1 = *puVar2;
  param_1[5] = local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res10,L"plat_computername",1);
  FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar3,0);
  uVar1 = *puVar2;
  param_1[6] = local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res10,L"plat_name",1);
  FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar3,0);
  uVar1 = *puVar2;
  puVar2[7] = local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res10,L"plat_buildtype",1);
  FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar3,0);
  uVar1 = *puVar2;
  puVar2[8] = local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res10,L"plat_buildver",1);
  FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar3,0);
  uVar1 = *puVar2;
  puVar2[9] = local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res10,L"report_tag",1);
  FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar3,0);
  puVar2[10] = local_res8;
  uVar1 = *puVar2;
  puVar3 = (undefined8 *)FName::FName(&local_res10,L"game_instance_guid",1);
  FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar3,0);
  uVar1 = *puVar2;
  puVar2[0xb] = local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res10,L"game_instance_time",1);
  FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar3,0);
  puVar2[0xc] = local_res8;
  return puVar2;
}



// FUNCTION 14217d920 FUN_14217d920 body=450 status=ok
// SIG undefined FUN_14217d920(void)

undefined8 * FUN_14217d920(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  longlong local_58 [6];
  
  local_58[1] = 0xb;
  local_58[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
  FGenericPlatformString::Memcpy(local_58[0],L"unit_state",0x16);
  local_58[2] = 0;
  local_58[3] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58 + 2,0);
  FGenericPlatformString::Memcpy(local_58[2],L"gbxtelemetry",0x1a);
  local_58[4] = 0;
  local_58[5] = 0;
  puVar2 = (undefined8 *)FName::FName(&local_res8,L"PlayerState",1);
  puVar2 = (undefined8 *)FUN_14218c0c0(local_res10,*puVar2,local_58,1);
  *param_1 = *puVar2;
  if (local_58[4] != 0) {
    FMemory::Free();
  }
  if (local_58[2] != 0) {
    FMemory::Free();
  }
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  FUN_14217bd20(param_1 + 1);
  FUN_14217bd20(param_1 + 2);
  FUN_14217bd20(param_1 + 3);
  uVar1 = *param_1;
  puVar2 = (undefined8 *)FName::FName(local_res10,L"player_id",1);
  FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar2,0);
  uVar1 = *param_1;
  param_1[1] = local_res8;
  puVar2 = (undefined8 *)FName::FName(local_res10,L"player_is_local",1);
  FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar2,0);
  uVar1 = *param_1;
  param_1[2] = local_res8;
  puVar2 = (undefined8 *)FName::FName(local_res10,L"player_character_guid",1);
  FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar2,0);
  param_1[3] = local_res8;
  return param_1;
}



// FUNCTION 14217daf0 FUN_14217daf0 body=587 status=ok
// SIG undefined FUN_14217daf0(void)

undefined8 * FUN_14217daf0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  longlong local_68 [6];
  
  local_68[1] = 0xb;
  local_68[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
  FGenericPlatformString::Memcpy(local_68[0],L"unit_state",0x16);
  local_68[2] = 0;
  local_68[3] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68 + 2,0);
  FGenericPlatformString::Memcpy(local_68[2],L"gbxtelemetry",0x1a);
  local_68[4] = 0;
  local_68[5] = 0;
  puVar2 = (undefined8 *)FName::FName(&local_res8,L"UnitState",1);
  puVar2 = (undefined8 *)FUN_14218c0c0(local_res10,*puVar2,local_68,1);
  *param_1 = *puVar2;
  if (local_68[4] != 0) {
    FMemory::Free();
  }
  if (local_68[2] != 0) {
    FMemory::Free();
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  FUN_14217bd20(param_1 + 1);
  FUN_14217bd20(param_1 + 2);
  FUN_14217bd20(param_1 + 3);
  FUN_14217bd20(param_1 + 4);
  FUN_14217bd20(param_1 + 5);
  uVar1 = *param_1;
  puVar2 = (undefined8 *)FName::FName(local_res10,L"unit_id",1);
  FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar2,0);
  uVar1 = *param_1;
  param_1[1] = local_res8;
  puVar2 = (undefined8 *)FName::FName(local_res10,L"unit_loc",1);
  FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar2,0);
  uVar1 = *param_1;
  param_1[2] = local_res8;
  puVar2 = (undefined8 *)FName::FName(local_res10,L"unit_rot",1);
  FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar2,0);
  uVar1 = *param_1;
  param_1[3] = local_res8;
  puVar2 = (undefined8 *)FName::FName(local_res10,L"unit_aim",1);
  FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar2,0);
  uVar1 = *param_1;
  param_1[4] = local_res8;
  puVar2 = (undefined8 *)FName::FName(local_res10,L"unit_name",1);
  FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar2,0);
  param_1[5] = local_res8;
  return param_1;
}



// FUNCTION 14217dd40 FUN_14217dd40 body=110 status=ok
// SIG undefined FUN_14217dd40(void)

longlong FUN_14217dd40(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(param_1,param_3);
  *(undefined8 *)(param_1 + 0x50) = param_2;
  *(undefined1 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_3 + 0x40) != 0) {
    plVar1 = *(longlong **)(param_3 + 0x30);
    if (*(longlong **)(param_3 + 0x30) == (longlong *)0x0) {
      plVar1 = (longlong *)(param_3 + 0x10);
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (*(longlong *)(param_3 + 0x30) != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14217ddb0 FUN_14217ddb0 body=159 status=ok
// SIG undefined FUN_14217ddb0(void)

undefined4 * FUN_14217ddb0(undefined4 *param_1,longlong param_2,longlong param_3)

{
  short *psVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_1 = 0;
  lVar3 = -1;
  lVar4 = lVar3;
  lVar5 = 0;
  if (param_2 != 0) {
    do {
      lVar5 = lVar4 + 1;
      lVar4 = lVar5;
    } while (*(short *)(param_2 + lVar5 * 2) != 0);
  }
  param_1[1] = (int)lVar5;
  lVar4 = 0;
  if (param_3 != 0) {
    do {
      lVar3 = lVar3 + 1;
      lVar4 = lVar3;
    } while (*(short *)(param_3 + lVar3 * 2) != 0);
  }
  *(undefined8 *)(param_1 + 6) = 0;
  param_1[2] = (int)lVar4;
  *(longlong *)(param_1 + 4) = param_3;
  lVar3 = FUN_142193b00(param_1);
  if (param_2 != 0) {
    lVar3 = lVar3 + -2;
    do {
      psVar1 = (short *)(lVar3 + 2);
      lVar3 = lVar3 + 2;
    } while (*psVar1 != 0);
    lVar4 = 0;
    do {
      sVar2 = *(short *)(param_2 + lVar4 * 2);
      *(short *)(lVar3 + lVar4 * 2) = sVar2;
      lVar4 = lVar4 + 1;
    } while (sVar2 != 0);
  }
  return param_1;
}



// FUNCTION 14217de50 FUN_14217de50 body=1196 status=ok
// SIG undefined FUN_14217de50(void)

longlong * FUN_14217de50(longlong *param_1,undefined8 *param_2)

{
  void **ppvVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  int iVar8;
  int *piVar9;
  longlong lVar10;
  void *pvVar11;
  int iVar12;
  void *pvVar13;
  undefined1 local_res10 [8];
  void *local_58;
  undefined8 local_50;
  void *local_48;
  int local_40;
  int local_3c;
  
  pvVar2 = ThreadLocalStoragePointer;
  ppvVar1 = (void **)(param_1 + 2);
  param_1[1] = (longlong)param_2;
  *param_1 = (longlong)(param_2 + 2);
  pvVar13 = (void *)0x0;
  *ppvVar1 = (void *)0x0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  piVar9 = (int *)(*(longlong *)((longlong)pvVar2 + (ulonglong)_tls_index * 8) + 0x38);
  if ((*piVar9 < DAT_146aecff0) && (_Init_thread_header(&DAT_146aecff0), DAT_146aecff0 == -1)) {
    uVar6 = FDateTime::Now(local_res10);
    FDateTime::ToString(uVar6,&DAT_146aecfe0);
    atexit((_func_5014 *)&LAB_143ea76c0);
    _Init_thread_footer(&DAT_146aecff0);
  }
  if ((*piVar9 < DAT_146aed008) && (_Init_thread_header(&DAT_146aed008), DAT_146aed008 == -1)) {
    FUN_1421818a0(local_res10,&DAT_146aecff8);
    atexit((_func_5014 *)&LAB_143ea71c0);
    _Init_thread_footer(&DAT_146aed008);
  }
  local_40 = *(int *)(param_2 + 3);
  lVar10 = (longlong)local_40;
  pvVar2 = (void *)param_2[2];
  local_48 = (void *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
            (&local_48,(2 - (uint)(local_40 != 0)) + local_40,0);
  pvVar11 = local_48;
  _guard_xfg_dispatch_icall_nop(local_48,pvVar2,lVar10 * 2);
  iVar3 = local_40;
  lVar10 = (longlong)local_40;
  local_40 = (2 - (uint)(local_40 != 0)) + local_40;
  if (local_3c < local_40) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar3);
    pvVar11 = local_48;
  }
  puVar7 = (undefined2 *)((longlong)pvVar11 + (lVar10 - (ulonglong)(iVar3 != 0)) * 2);
  *puVar7 = 0x2e;
  puVar7[1] = 0;
  iVar3 = *(int *)(param_2 + 1);
  if (local_40 < 2) {
    pvVar2 = (void *)*param_2;
    local_48 = (void *)0x0;
    local_40 = iVar3;
    if (iVar3 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,iVar3,0);
      pvVar13 = local_48;
      _guard_xfg_dispatch_icall_nop(local_48,pvVar2,(longlong)iVar3 * 2);
      iVar12 = local_40;
      goto LAB_14217e04e;
    }
  }
  else {
    iVar4 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar4 = 0;
    }
    if ((local_40 != 0) || (iVar3 = 1, iVar4 == 0)) {
      iVar3 = 0;
    }
    iVar3 = iVar3 + iVar4 + local_40;
    local_48 = pvVar11;
    if (local_3c < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48,iVar3);
    }
    iVar3 = local_40;
    pvVar2 = (void *)*param_2;
    pvVar11 = (void *)0x0;
    pvVar13 = local_48;
    iVar12 = local_40;
    if (iVar4 != 0) {
      lVar10 = (longlong)local_40;
      local_40 = local_40 + (uint)(local_40 == 0) + iVar4;
      if (local_3c < local_40) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar3);
      }
      iVar12 = local_40;
      pvVar13 = local_48;
      pvVar11 = (void *)((longlong)local_48 + (lVar10 - (ulonglong)(iVar3 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar11,pvVar2,(longlong)iVar4 * 2);
      *(undefined2 *)((longlong)iVar4 * 2 + (longlong)pvVar11) = 0;
      pvVar11 = (void *)0x0;
    }
LAB_14217e04e:
    if (iVar12 != 0) {
      iVar12 = iVar12 + -1;
      goto LAB_14217e061;
    }
  }
  iVar12 = 0;
LAB_14217e061:
  pvVar2 = DAT_146aecff8;
  iVar3 = (int)DAT_146aed000;
  if ((iVar3 != 0) || (iVar4 = 2, iVar12 == -1)) {
    iVar4 = 1;
  }
  local_58 = (void *)0x0;
  local_50 = CONCAT44(local_50._4_4_,iVar3);
  iVar8 = 0;
  if ((iVar3 == 0) && (iVar4 + iVar12 == 0)) {
    local_50 = DAT_146aed000 & 0xffffffff;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,iVar4 + iVar12 + iVar3,0);
    _guard_xfg_dispatch_icall_nop(local_58,pvVar2,(longlong)iVar3 * 2);
  }
  FString::PathAppend(&local_58,pvVar13,iVar12);
  if (ppvVar1 == &local_58) {
    if (local_58 != (void *)0x0) {
      FMemory::Free();
    }
  }
  else {
    if (*ppvVar1 != (void *)0x0) {
      FMemory::Free();
    }
    *ppvVar1 = local_58;
    *(undefined4 *)(param_1 + 3) = (undefined4)local_50;
    *(undefined4 *)((longlong)param_1 + 0x1c) = local_50._4_4_;
    local_50 = 0;
    local_58 = (void *)0x0;
  }
  if (pvVar13 != (void *)0x0) {
    FMemory::Free();
  }
  if (pvVar11 != (void *)0x0) {
    FMemory::Free();
  }
  iVar3 = (int)param_1[3];
  iVar4 = (2 - (uint)(iVar3 != 0)) + iVar3;
  *(int *)(param_1 + 3) = iVar4;
  if (*(int *)((longlong)param_1 + 0x1c) < iVar4) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(ppvVar1,iVar3);
  }
  puVar7 = (undefined2 *)((longlong)*ppvVar1 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2);
  *puVar7 = 0x2d;
  puVar7[1] = 0;
  pvVar2 = DAT_146aecfe0;
  if (DAT_146aecfe8 != 0) {
    iVar8 = DAT_146aecfe8 + -1;
  }
  if (iVar8 != 0) {
    iVar3 = (int)param_1[3];
    iVar4 = (uint)(iVar3 == 0) + iVar8 + iVar3;
    *(int *)(param_1 + 3) = iVar4;
    if (*(int *)((longlong)param_1 + 0x1c) < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(ppvVar1,iVar3);
    }
    pvVar13 = (void *)((longlong)*ppvVar1 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar13,pvVar2,(longlong)iVar8 * 2);
    *(undefined2 *)((longlong)pvVar13 + (longlong)iVar8 * 2) = 0;
  }
  iVar3 = (int)param_1[3];
  iVar4 = (5 - (uint)(iVar3 != 0)) + iVar3;
  *(int *)(param_1 + 3) = iVar4;
  if (*(int *)((longlong)param_1 + 0x1c) < iVar4) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(ppvVar1,iVar3);
  }
  lVar10 = (longlong)iVar3 - (ulonglong)(iVar3 != 0);
  builtin_wcsncpy((wchar_t *)((longlong)*ppvVar1 + lVar10 * 2),L".csv",4);
  *(undefined2 *)((longlong)*ppvVar1 + lVar10 * 2 + 8) = 0;
  plVar5 = (longlong *)FUN_1415c3d50();
  if ((int)param_1[3] == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = *ppvVar1;
  }
  (**(code **)(*plVar5 + 0x30))(plVar5,puVar7,0,0,0);
  return param_1;
}



// FUNCTION 14217e300 FUN_14217e300 body=430 status=ok
// SIG undefined FUN_14217e300(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_14217e300(undefined8 *param_1,undefined8 param_2,short *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (param_3[lVar6] != 0);
    iVar5 = (int)lVar6 + 1;
    *(int *)(param_1 + 1) = iVar5;
    if (0 < iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,param_3,(longlong)iVar5 * 2);
  }
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  local_40 = (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 2) = *param_4;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 3) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  local_38 = 1;
  local_58 = param_2;
  TArray<FSlateCachedClipState,TInlineAllocator<1,TSizedDefaultAllocator<32>_>_>::ResizeGrow
            (local_50,0);
  puVar4 = local_50;
  if (local_40 != (undefined8 *)0x0) {
    puVar4 = local_40;
  }
  *puVar4 = 0;
  puVar4[1] = 0;
  iVar5 = *(int *)(param_1 + 0x19);
  lVar6 = (longlong)iVar5;
  *(int *)(param_1 + 0x19) = iVar5 + 1;
  if (*(int *)((longlong)param_1 + 0xcc) < iVar5 + 1) {
    TArray<`anonymous_namespace'::FKerningOnlyTextSequenceEntry,TInlineAllocator<4,FDefaultAllocator>_>
    ::ResizeGrow(param_1 + 4,iVar5);
  }
  puVar4 = (undefined8 *)param_1[0x18];
  if ((undefined8 *)param_1[0x18] == (undefined8 *)0x0) {
    puVar4 = param_1 + 4;
  }
  puVar4[lVar6 * 5] = local_58;
  puVar4[lVar6 * 5 + 3] = 0;
  if (local_40 == (undefined8 *)0x0) {
    _guard_xfg_dispatch_icall_nop(puVar4 + lVar6 * 5 + 1,local_50,0x10);
  }
  if (puVar4[lVar6 * 5 + 3] != 0) {
    FMemory::Free();
  }
  puVar4[lVar6 * 5 + 3] = local_40;
  local_40 = (undefined8 *)0x0;
  *(undefined4 *)(puVar4 + lVar6 * 5 + 4) = (undefined4)local_38;
  *(undefined4 *)((longlong)puVar4 + lVar6 * 0x28 + 0x24) = local_38._4_4_;
  local_38 = 0;
  FUN_14217eb10(local_50);
  return param_1;
}



// FUNCTION 14217e4b0 FUN_14217e4b0 body=242 status=ok
// SIG undefined FUN_14217e4b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14217e4b0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aebb04) {
    _Init_thread_header(&DAT_146aebb04);
    if (DAT_146aebb04 == -1) {
      _DAT_146526f30 = 0xffffffff;
      _DAT_146526f00 = 0;
      _DAT_146526f08 = 0;
      _DAT_146526f20 = 0;
      _DAT_146526f28 = 0;
      _DAT_146526f34 = 0;
      DAT_146526f40 = 0;
      _DAT_146526f48 = 0;
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146526f50);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_146526f50,4000);
      _DAT_146526f78 = 0;
      atexit(FUN_143ea73c0);
      _Init_thread_footer(&DAT_146aebb04);
    }
  }
  uVar1 = FUN_14218e2c0(&DAT_146526f00,param_2);
  *param_1 = uVar1;
  return param_1;
}



// FUNCTION 14217e5b0 FUN_14217e5b0 body=41 status=ok
// SIG undefined FUN_14217e5b0(void)

longlong FUN_14217e5b0(longlong param_1)

{
  *(undefined2 *)(param_1 + 0x18) = 0xffff;
  *(ushort *)(param_1 + 0x1a) = *(ushort *)(param_1 + 0x1a) & 0xfff8;
  FUN_14217f450();
  return param_1;
}



// FUNCTION 14217e5e0 FUN_14217e5e0 body=41 status=ok
// SIG undefined FUN_14217e5e0(void)

longlong FUN_14217e5e0(longlong param_1)

{
  *(undefined2 *)(param_1 + 0x18) = 0xffff;
  *(ushort *)(param_1 + 0x1a) = *(ushort *)(param_1 + 0x1a) & 0xfff8;
  FUN_14217f4f0();
  return param_1;
}



// FUNCTION 14217e610 FUN_14217e610 body=301 status=ok
// SIG undefined FUN_14217e610(void)

longlong FUN_14217e610(longlong param_1,short *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong local_d8;
  ulonglong local_d0;
  undefined **local_c8 [18];
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  
  local_d8 = 0;
  local_d0 = 0;
  lVar2 = -1;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    do {
      lVar2 = lVar2 + 1;
    } while (param_2[lVar2] != 0);
    uVar1 = (int)lVar2 + 1;
    local_d0 = (ulonglong)uVar1;
    if (0 < (int)uVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
    }
    FGenericPlatformString::Memcpy(local_d8,param_2,(longlong)(int)uVar1 * 2);
  }
  *(undefined2 *)(param_1 + 0x18) = 0xffff;
  *(ushort *)(param_1 + 0x1a) = *(ushort *)(param_1 + 0x1a) & 0xfff8;
  FUN_140636940(param_1);
  FArchive::FArchive(local_c8);
  local_38 = 0;
  local_c8[0] = &PTR_FUN_143f4a100;
  local_28 = 0;
  local_30 = param_1;
  FArchive::SetIsSaving(local_c8,1);
  FArchive::SetIsPersistent(local_c8,1);
  FUN_14158ce90(local_c8,&local_d8);
  FArchive::~FArchive(local_c8);
  if (local_d8 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14217e740 FUN_14217e740 body=22 status=ok
// SIG undefined FUN_14217e740(void)

longlong FUN_14217e740(longlong param_1)

{
  *(undefined2 *)(param_1 + 0x18) = 0xffff;
  *(ushort *)(param_1 + 0x1a) = *(ushort *)(param_1 + 0x1a) & 0xfff8;
  return param_1;
}



// FUNCTION 14217e760 FUN_14217e760 body=229 status=ok
// SIG undefined FUN_14217e760(void)

longlong FUN_14217e760(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  *(undefined8 *)(param_1 + 0x80) = 0;
  iVar2 = *(int *)(param_2 + 0x88);
  lVar3 = *(longlong *)(param_2 + 0x80);
  *(int *)(param_1 + 0x88) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  else {
    FUN_142193d10(param_1,iVar2,0);
    lVar1 = *(longlong *)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x80) == 0) {
      lVar1 = param_1;
    }
    if (lVar3 == 0) {
      lVar3 = param_2;
    }
    lVar3 = lVar3 - lVar1;
    do {
      *(ushort *)(lVar1 + 0x1a) = *(ushort *)(lVar1 + 0x1a) & 0xfff8;
      *(undefined2 *)(lVar1 + 0x18) = 0xffff;
      FUN_14217f4f0(lVar1,lVar3 + lVar1);
      lVar1 = lVar1 + 0x20;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  FString::FString(param_1 + 0x98,param_2 + 0x98);
  return param_1;
}



// FUNCTION 14217e850 FUN_14217e850 body=231 status=ok
// SIG undefined FUN_14217e850(void)

void FUN_14217e850(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  
  *param_1 = &PTR_FUN_144fdcbc0;
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  }
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  iVar1 = *(int *)(param_1 + 2);
  iVar2 = *(int *)((longlong)param_1 + 0x3c);
  FUN_141d2c0a0(param_1 + 1,0);
  if (0 < iVar1 - iVar2) {
    FUObjectArray::RemoveUObjectDeleteListener(&DAT_1469e91a0,param_1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 1);
  *param_1 = &PTR_FUN_143f47c98;
  return;
}



// FUNCTION 14217e940 FUN_14217e940 body=95 status=ok
// SIG undefined FUN_14217e940(void)

void FUN_14217e940(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x38);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = param_1;
  }
  if (iVar3 != 0) {
    lVar2 = lVar2 + 8;
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar2);
      lVar2 = lVar2 + 0x18;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *(longlong *)(param_1 + 0x30);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14217e9a0 FUN_14217e9a0 body=101 status=ok
// SIG undefined FUN_14217e9a0(void)

void FUN_14217e9a0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 8);
    do {
      if (((*(byte *)((longlong)plVar2 + 0x1a) & 1) != 0) && (*plVar2 != 0)) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 5;
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



// FUNCTION 14217ea10 FUN_14217ea10 body=123 status=ok
// SIG undefined FUN_14217ea10(void)

void FUN_14217ea10(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x20);
    do {
      if (plVar2[2] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      if (plVar2[-3] != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 9;
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



// FUNCTION 14217ea90 FUN_14217ea90 body=118 status=ok
// SIG undefined FUN_14217ea90(void)

void FUN_14217ea90(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x2a0);
  iVar3 = *(int *)(param_1 + 0x2a8);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = param_1;
  }
  if (iVar3 != 0) {
    do {
      if (*(longlong *)(lVar2 + 0x98) != 0) {
        FMemory::Free();
      }
      FUN_14217ebe0(lVar2);
      lVar2 = lVar2 + 0xa8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *(longlong *)(param_1 + 0x2a0);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14217eb10 FUN_14217eb10 body=95 status=ok
// SIG undefined FUN_14217eb10(void)

void FUN_14217eb10(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 0x18);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = param_1;
  }
  if (iVar3 != 0) {
    do {
      FUN_14217e9a0(lVar2);
      lVar2 = lVar2 + 0x10;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *(longlong *)(param_1 + 0x10);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14217eb70 FUN_14217eb70 body=101 status=ok
// SIG undefined FUN_14217eb70(void)

void FUN_14217eb70(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 0xa0);
  iVar3 = *(int *)(param_1 + 0xa8);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = param_1;
  }
  if (iVar3 != 0) {
    lVar2 = lVar2 + 8;
    do {
      FUN_14217eb10(lVar2);
      lVar2 = lVar2 + 0x28;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *(longlong *)(param_1 + 0xa0);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14217ebe0 FUN_14217ebe0 body=109 status=ok
// SIG undefined FUN_14217ebe0(void)

void FUN_14217ebe0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  
  plVar1 = (longlong *)param_1[0x10];
  iVar3 = (int)param_1[0x11];
  plVar2 = plVar1;
  if (plVar1 == (longlong *)0x0) {
    plVar2 = param_1;
  }
  if (iVar3 != 0) {
    do {
      if (((*(byte *)((longlong)plVar2 + 0x1a) & 1) != 0) && (*plVar2 != 0)) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    plVar1 = (longlong *)param_1[0x10];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14217ec50 FUN_14217ec50 body=320 status=ok
// SIG undefined FUN_14217ec50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_14217ec50(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  
  puVar4 = (uint *)(param_1 + 8);
  puVar6 = *(uint **)(param_1 + 0x18);
  if (*(uint **)(param_1 + 0x18) == (uint *)0x0) {
    puVar6 = puVar4;
  }
  puVar7 = puVar6 + (longlong)*(int *)(param_1 + 0x20) * 4;
  if (puVar6 != puVar7) {
    plVar1 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    do {
      puVar4 = (uint *)(ulonglong)(*puVar6 & 0xffffff00);
      if ((*puVar6 & 0xffffff00) != 0xffffff00) {
        if ((*(int *)(*plVar1 + 0x38) < DAT_146aeb4b0) &&
           (_Init_thread_header(&DAT_146aeb4b0), DAT_146aeb4b0 == -1)) {
          DAT_146aeb4a0 = (uint *)0x0;
          _DAT_146aeb4a8 = 0;
          atexit((_func_5014 *)&LAB_143ea7430);
          _Init_thread_footer(&DAT_146aeb4b0);
        }
        cVar2 = (char)*puVar6;
        uVar5 = (uint)cVar2;
        puVar4 = (uint *)(ulonglong)uVar5;
        if (((-1 < cVar2) && ((int)uVar5 < DAT_146aeb4a8)) &&
           (plVar3 = *(longlong **)(DAT_146aeb4a0 + (longlong)cVar2 * 2), puVar4 = DAT_146aeb4a0,
           plVar3 != (longlong *)0x0)) {
          puVar4 = (uint *)(**(code **)(*plVar3 + 0x28))(plVar3,puVar6);
        }
      }
      puVar6 = puVar6 + 4;
    } while (puVar6 != puVar7);
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return puVar4;
  }
  puVar4 = (uint *)FMemory::Free();
  return puVar4;
}



// FUNCTION 14217ed90 FUN_14217ed90 body=507 status=ok
// SIG undefined FUN_14217ed90(void)

void FUN_14217ed90(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined1 local_res8 [8];
  undefined1 *local_38;
  undefined1 *puStack_30;
  
  lVar4 = *param_1;
  if ((lVar4 != 0) && ((char)param_1[1] != '\0')) {
    cVar2 = FUN_14218fca0(lVar4);
    if ((cVar2 != '\0') && (0 < *(int *)(lVar4 + 0x2e0))) {
      FUN_1421881f0(*param_1);
    }
    lVar4 = *param_1;
    if (*(char *)(lVar4 + 0x2f0) != '\0') {
      *(undefined1 *)(lVar4 + 0x2f0) = 0;
    }
    FUN_14217ea90(lVar4 + 0x38);
    FUN_14217e9a0(lVar4 + 0x18);
    if (*(longlong *)(lVar4 + 8) != 0) {
      FMemory::Free();
    }
    lVar4 = *param_1;
    uVar3 = FLockFreeLinkPolicy::AllocLockFreeLink();
    if (uVar3 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
    }
    *(longlong *)(lVar6 + 8) = lVar4;
    FLockFreePointerListLIFORoot<0,1>::Push(&DAT_146aeae78);
    puStack_30 = local_res8;
    local_res8[0] = 0;
    local_38 = &LAB_142183e90;
    lVar4 = FUN_1415d8310(&local_38,&DAT_1465273c0);
    lVar6 = (longlong)*(int *)(lVar4 + 0x40);
    plVar1 = (longlong *)(lVar4 + 0x18);
    if (*(int *)(lVar4 + 0x40) != 0) {
      iVar10 = 0;
      plVar5 = *(longlong **)(lVar4 + 0x38);
      if (*(longlong **)(lVar4 + 0x38) == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      bVar11 = *plVar5 != *param_1;
      lVar7 = 0;
      iVar8 = 0;
      do {
        lVar7 = lVar7 + 1;
        iVar9 = iVar8 + 1;
        if (lVar7 < lVar6) {
          plVar5 = *(longlong **)(lVar4 + 0x38);
          if (*(longlong **)(lVar4 + 0x38) == (longlong *)0x0) {
            plVar5 = plVar1;
          }
          plVar5 = plVar5 + lVar7;
          do {
            if (bVar11 != (*plVar5 != *param_1)) break;
            iVar9 = iVar9 + 1;
            lVar7 = lVar7 + 1;
            plVar5 = plVar5 + 1;
          } while (lVar7 < lVar6);
        }
        if (bVar11 != false) {
          if (iVar10 != iVar8) {
            plVar5 = *(longlong **)(lVar4 + 0x38);
            if (*(longlong **)(lVar4 + 0x38) == (longlong *)0x0) {
              plVar5 = plVar1;
            }
            _guard_xfg_dispatch_icall_nop
                      (plVar5 + iVar10,plVar5 + iVar8,(longlong)(iVar9 - iVar8) << 3);
          }
          iVar10 = iVar10 + (iVar9 - iVar8);
        }
        bVar11 = (bool)(bVar11 ^ 1);
        iVar8 = iVar9;
      } while (lVar7 < lVar6);
      *(int *)(lVar4 + 0x40) = iVar10;
    }
  }
  return;
}



// FUNCTION 14217ef90 FUN_14217ef90 body=23 status=ok
// SIG undefined FUN_14217ef90(void)

void FUN_14217ef90(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    *(undefined2 *)(*(longlong *)(lVar1 + 0x18) + (longlong)*(int *)(lVar1 + 4) * 2) = 0;
  }
  return;
}



// FUNCTION 14217efb0 FUN_14217efb0 body=184 status=ok
// SIG undefined FUN_14217efb0(void)

void FUN_14217efb0(longlong param_1)

{
  longlong *plVar1;
  
  if (*(int *)(param_1 + 0xf0) != 0) {
    plVar1 = *(longlong **)(param_1 + 0xe0);
    if (*(longlong **)(param_1 + 0xe0) == (longlong *)0x0) {
      plVar1 = (longlong *)(param_1 + 0xc0);
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FMemory::Free();
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x90);
    if (*(longlong **)(param_1 + 0x90) == (longlong *)0x0) {
      plVar1 = (longlong *)(param_1 + 0x70);
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x40);
    if (*(longlong **)(param_1 + 0x40) == (longlong *)0x0) {
      plVar1 = (longlong *)(param_1 + 0x20);
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14217f070 FUN_14217f070 body=67 status=ok
// SIG undefined FUN_14217f070(void)

void FUN_14217f070(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1[1];
  *param_1 = &PTR_FUN_144fdcaf8;
  if (lVar1 != 0) {
    uVar2 = FUN_14218be80();
    FUN_142195170(uVar2,lVar1);
    param_1[1] = 0;
  }
  return;
}



// FUNCTION 14217f0c0 FUN_14217f0c0 body=162 status=ok
// SIG undefined FUN_14217f0c0(void)

void FUN_14217f0c0(undefined8 *param_1)

{
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x16);
  if (param_1[0x14] != 0) {
    FMemory::Free();
  }
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  if (*(char *)((longlong)param_1 + 0x79) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x79) = 0;
  }
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143f4c8e0;
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 3);
  return;
}



// FUNCTION 14217f170 FUN_14217f170 body=150 status=ok
// SIG undefined FUN_14217f170(void)

void FUN_14217f170(undefined8 *param_1)

{
  FUN_14217e940(param_1 + 0x18);
  if (param_1[0x16] != 0) {
    FMemory::Free();
  }
  if (param_1[0x14] != 0) {
    FMemory::Free();
  }
  FUN_140ce1840(param_1 + 0x12);
  if (*(char *)((longlong)param_1 + 0x89) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x89) = 0;
  }
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 3);
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143f4c8e0;
  return;
}



// FUNCTION 14217f210 FUN_14217f210 body=148 status=ok
// SIG undefined FUN_14217f210(void)

void FUN_14217f210(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  FUN_142189300(param_1 + 0x70,0);
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  FUN_142188fa0(param_1 + 0x50,0);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  FUN_1421891a0(param_1 + 0x30,0);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_143f4c8e0;
  FTickerObjectBase::~FTickerObjectBase(param_1);
  return;
}



// FUNCTION 14217f2b0 FUN_14217f2b0 body=110 status=ok
// SIG undefined FUN_14217f2b0(void)

void FUN_14217f2b0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xb8);
  iVar2 = *(int *)(param_1 + 0xc0);
  if (iVar2 != 0) {
    lVar1 = lVar1 + 8;
    do {
      FUN_14217ec50(lVar1);
      lVar1 = lVar1 + 0x30;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *(longlong *)(param_1 + 0xb8);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  FUN_14217e9a0(param_1 + 0xa8);
  FUN_14217ebe0(param_1 + 8);
  return;
}



// FUNCTION 14217f320 FUN_14217f320 body=147 status=ok
// SIG undefined FUN_14217f320(void)

void FUN_14217f320(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = param_1[10];
  uVar2 = 0;
  if ((lVar1 != 0) && (*(char *)(param_1 + 0xb) != '\0')) {
    if (*(int *)(param_1 + 8) != 0) {
      plVar3 = (longlong *)param_1[6];
      if ((longlong *)param_1[6] == (longlong *)0x0) {
        plVar3 = param_1 + 2;
      }
      if (plVar3 != (longlong *)0x0) {
        uVar2 = (**(code **)(*plVar3 + 8))();
      }
    }
    (*(code *)*param_1)(uVar2,lVar1);
  }
  if (*(int *)(param_1 + 8) != 0) {
    plVar3 = (longlong *)param_1[6];
    if ((longlong *)param_1[6] == (longlong *)0x0) {
      plVar3 = param_1 + 2;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14217f3c0 FUN_14217f3c0 body=14 status=ok
// SIG undefined FUN_14217f3c0(void)

void FUN_14217f3c0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  return;
}



// FUNCTION 14217f3d0 FUN_14217f3d0 body=94 status=ok
// SIG undefined FUN_14217f3d0(void)

void FUN_14217f3d0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14218fca0();
  if ((cVar1 != '\0') && (0 < *(int *)(param_1 + 0x2e0))) {
    FUN_1421881f0(param_1);
  }
  if (*(char *)(param_1 + 0x2f0) != '\0') {
    *(undefined1 *)(param_1 + 0x2f0) = 0;
  }
  FUN_14217ea90(param_1 + 0x38);
  FUN_14217e9a0(param_1 + 0x18);
  if (*(longlong *)(param_1 + 8) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14217f430 FUN_14217f430 body=19 status=ok
// SIG undefined FUN_14217f430(void)

void FUN_14217f430(longlong *param_1)

{
  longlong lVar1;
  
  if (((*(byte *)((longlong)param_1 + 0x1a) & 1) != 0) && (lVar1 = *param_1, lVar1 != 0)) {
    if (lVar1 != 0) {
      if (DAT_1468c2208 == (longlong *)0x0) {
        FUN_1415d7ea0();
      }
      (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
    }
    return;
  }
  return;
}



// FUNCTION 14217f450 FUN_14217f450 body=153 status=ok
// SIG undefined FUN_14217f450(void)

longlong * FUN_14217f450(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  
  bVar2 = (byte)*(ushort *)((longlong)param_2 + 0x1a);
  FUN_142194380(param_1,(short)param_2[3],*(ushort *)((longlong)param_2 + 0x1a) & 0xff01,
                bVar2 >> 1 & 1,bVar2 >> 2 & 1);
  if ((*(byte *)((longlong)param_1 + 0x1a) & 1) == 0) {
    lVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar1;
    param_1[2] = param_2[2];
  }
  else if (param_1 != param_2) {
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    return param_1;
  }
  return param_1;
}



// FUNCTION 14217f4f0 FUN_14217f4f0 body=192 status=ok
// SIG undefined FUN_14217f4f0(void)

undefined8 * FUN_14217f4f0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  byte bVar3;
  
  if (param_2 != param_1) {
    bVar3 = (byte)*(ushort *)((longlong)param_2 + 0x1a);
    FUN_142194380(param_1,*(undefined2 *)(param_2 + 3),
                  *(ushort *)((longlong)param_2 + 0x1a) & 0xff01,bVar3 >> 1 & 1,bVar3 >> 2 & 1);
    if ((*(byte *)((longlong)param_1 + 0x1a) & 1) == 0) {
      uVar2 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar2;
      param_1[2] = param_2[2];
      return param_1;
    }
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if ((iVar1 != 0) || (*(int *)((longlong)param_1 + 0xc) != 0)) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(param_1,iVar1);
      _guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1);
      return param_1;
    }
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  return param_1;
}



// FUNCTION 14217f5b0 FUN_14217f5b0 body=279 status=ok
// SIG undefined FUN_14217f5b0(void)

undefined8 FUN_14217f5b0(undefined8 param_1,short *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong local_c8;
  ulonglong local_c0;
  undefined **local_b8 [18];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_c0 = 0;
  local_c8 = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (param_2[lVar2] != 0);
    uVar1 = (int)lVar2 + 1;
    local_c0 = (ulonglong)uVar1;
    if (0 < (int)uVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
    }
    FGenericPlatformString::Memcpy(local_c8,param_2,(longlong)(int)uVar1 * 2);
  }
  FUN_140636940(param_1);
  FArchive::FArchive(local_b8);
  local_28 = 0;
  local_b8[0] = &PTR_FUN_143f4a100;
  local_18 = 0;
  local_20 = param_1;
  FArchive::SetIsSaving(local_b8,1);
  FArchive::SetIsPersistent(local_b8,1);
  FUN_14158ce90(local_b8,&local_c8);
  FArchive::~FArchive(local_b8);
  if (local_c8 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14217f6d0 FUN_14217f6d0 body=394 status=ok
// SIG undefined FUN_14217f6d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_14217f6d0(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
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
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 1,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 1,4);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 2,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 2,4);
    }
  }
  else {
    param_2[2] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 3,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 3,4);
    }
  }
  else {
    param_2[3] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_1406da970(param_1,param_2 + 4);
  FUN_1406da970(param_1,param_2 + 8);
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    uVar2 = uRam0000000146aeb484 & param_2[5];
    uVar3 = uRam0000000146aeb488 & param_2[6];
    uVar4 = uRam0000000146aeb48c & param_2[7];
    uVar5 = param_2[8] & _DAT_146aeb480;
    uVar6 = param_2[9] & uRam0000000146aeb484;
    uVar7 = param_2[10] & uRam0000000146aeb488;
    uVar8 = param_2[0xb] & uRam0000000146aeb48c;
    param_2[4] = _DAT_146aeb480 & param_2[4];
    param_2[5] = uVar2;
    param_2[6] = uVar3;
    param_2[7] = uVar4;
    param_2[8] = uVar5;
    param_2[9] = uVar6;
    param_2[10] = uVar7;
    param_2[0xb] = uVar8;
  }
  return param_1;
}



// FUNCTION 14217f860 FUN_14217f860 body=8 status=ok
// SIG undefined FUN_14217f860(void)

undefined4 FUN_14217f860(int *param_1,int *param_2)

{
  return CONCAT31((int3)((uint)*param_2 >> 8),*param_1 == *param_2);
}



// FUNCTION 14217f870 X509_get_issuer_name body=8 status=ok
// SIG undefined X509_get_issuer_name(void)

undefined8 X509_get_issuer_name(longlong *param_1)

{
  return *(undefined8 *)(*param_1 + 0x18);
}



// FUNCTION 14217f880 FUN_14217f880 body=4701 status=ok
// SIG undefined FUN_14217f880(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14217f880(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  void *pvVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  short *psVar11;
  short *psVar12;
  short *psVar13;
  undefined8 *puVar14;
  short *psVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined2 *puVar18;
  ulonglong uVar19;
  longlong *plVar20;
  int iVar21;
  undefined1 *puVar22;
  undefined2 *puVar23;
  longlong lVar24;
  void *pvVar25;
  uint uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong *plVar29;
  int iVar30;
  int *piVar31;
  undefined8 *puVar32;
  undefined1 auStack_1f8 [32];
  undefined4 local_1d8;
  undefined4 local_1d0;
  char local_1c8;
  int local_1c4;
  int local_1c0;
  char local_1bc;
  char local_1bb;
  undefined2 *local_1b8;
  int local_1b0;
  int local_1ac;
  longlong *local_1a8;
  int local_1a0;
  int iStack_19c;
  ulonglong local_198;
  undefined8 local_190;
  undefined8 *local_188;
  int local_180;
  int local_17c;
  ulonglong local_178;
  ulonglong local_170;
  undefined8 *local_168;
  longlong *local_160;
  void *local_158;
  undefined8 local_150;
  longlong local_148;
  longlong *local_140;
  undefined8 local_138;
  longlong local_130;
  undefined8 *local_128;
  longlong *local_120;
  undefined8 local_118;
  int *local_110;
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  longlong *local_100;
  longlong local_f8 [2];
  longlong local_e8 [2];
  longlong local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined4 local_a8;
  int local_a4;
  undefined1 local_a0 [8];
  undefined1 *local_98;
  uint local_90;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  piVar31 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  local_118 = param_2;
  local_110 = piVar31;
  if ((*piVar31 < DAT_146aeade0) && (_Init_thread_header(&DAT_146aeade0), DAT_146aeade0 == -1)) {
    DAT_146aeadd0 = (void *)0x0;
    _DAT_146aeadd8 = 2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146aeadd0,0);
    FGenericPlatformString::Memcpy(DAT_146aeadd0,&DAT_1440a3e48,4);
    atexit((_func_5014 *)&LAB_143ea7630);
    _Init_thread_footer(&DAT_146aeade0);
  }
  if ((*piVar31 < DAT_146aeadf8) && (_Init_thread_header(&DAT_146aeadf8), DAT_146aeadf8 == -1)) {
    DAT_146aeade8 = (void *)0x0;
    _DAT_146aeadf0 = 0;
    atexit((_func_5014 *)&LAB_143ea71a0);
    _Init_thread_footer(&DAT_146aeadf8);
  }
  lVar24 = *param_3;
  local_130 = lVar24;
  cVar4 = FUN_142184920(lVar24 + 0xe0,DAT_146aeb080,param_2);
  local_1bb = cVar4;
  cVar5 = FUN_14218ffe0(lVar24);
  if (cVar5 != '\0') {
    local_1a8 = (longlong *)0x0;
    plVar20 = *(longlong **)(lVar24 + 0xc0);
    if (*(longlong **)(lVar24 + 0xc0) == (longlong *)0x0) {
      plVar20 = (longlong *)(lVar24 + 0x20);
    }
    local_1a0 = 0;
    iStack_19c = 0;
    local_100 = plVar20 + (longlong)*(int *)(lVar24 + 200) * 5;
    if (plVar20 != local_100) {
      do {
        iVar30 = 0;
        lVar24 = *plVar20;
        local_160 = plVar20;
        cVar5 = FUN_142190080(lVar24);
        if ((cVar5 != '\0') &&
           (((local_138 = 0xd3, *(longlong *)(lVar24 + 0x28) == 0xd3 ||
             ((((*(int *)(lVar24 + 0x88) != 0 && (*(int *)(lVar24 + 0x88) != 1)) &&
               (*(int *)(lVar24 + 0x98) != 0)) && (*(int *)(lVar24 + 0x98) != 1)))) &&
            ((cVar4 != '\0' ||
             (cVar5 = FUN_142184920(*plVar20 + 0x18,DAT_146aeb080,param_2), cVar5 != '\0')))))) {
          lVar24 = *plVar20;
          local_1bc = '\0';
          local_1b8 = (undefined2 *)0x0;
          local_1c4 = 0;
          local_1ac = 0;
          if ((*piVar31 < DAT_146aed020) &&
             (_Init_thread_header(&DAT_146aed020), DAT_146aed020 == -1)) {
            DAT_146aed010 = (undefined8 *)0x0;
            _DAT_146aed018 = 0;
            atexit(FUN_143ea70f0);
            _Init_thread_footer(&DAT_146aed020);
          }
          local_188 = DAT_146aed010;
          puVar32 = DAT_146aed010 + (longlong)DAT_146aed018 * 6;
          puVar14 = DAT_146aed010;
          iVar6 = DAT_146aed018;
          if (DAT_146aed010 != puVar32) {
            do {
              if (*(int *)((undefined8 *)*puVar14 + 1) == 0) {
                puVar23 = &DAT_143f3eda8;
              }
              else {
                puVar23 = *(undefined2 **)*puVar14;
              }
              if (*(int *)(lVar24 + 0x98) == 0) {
                puVar18 = &DAT_143f3eda8;
              }
              else {
                puVar18 = *(undefined2 **)(lVar24 + 0x90);
              }
              local_188 = puVar14;
              iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar18,puVar23);
              if (iVar6 == 0) {
                if (*(int *)((undefined8 *)puVar14[1] + 1) == 0) {
                  puVar23 = &DAT_143f3eda8;
                }
                else {
                  puVar23 = *(undefined2 **)puVar14[1];
                }
                if (*(int *)(lVar24 + 0x88) == 0) {
                  puVar18 = &DAT_143f3eda8;
                }
                else {
                  puVar18 = *(undefined2 **)(lVar24 + 0x80);
                }
                iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar18,puVar23);
                if (iVar6 == 0) goto LAB_14217fb18;
              }
              local_188 = puVar14 + 6;
              puVar14 = local_188;
            } while (local_188 != puVar32);
            iVar6 = DAT_146aed018;
          }
          _DAT_146aed018 = CONCAT44(DAT_146aed01c,iVar6 + 1);
          if (DAT_146aed01c < iVar6 + 1) {
            FUN_14067df60(&DAT_146aed010,iVar6);
          }
          local_188 = DAT_146aed010 + (longlong)iVar6 * 6;
          FUN_14217de50(local_188,lVar24 + 0x80);
LAB_14217fb18:
          plVar17 = (longlong *)plVar20[3];
          if ((longlong *)plVar20[3] == (longlong *)0x0) {
            plVar17 = plVar20 + 1;
          }
          plVar16 = plVar17 + (longlong)(int)plVar20[4] * 2;
          local_140 = plVar16;
          local_120 = plVar17;
          if (plVar17 != plVar16) {
            do {
              lVar24 = local_130;
              uVar27 = 0;
              local_120 = plVar17;
              if ((int)plVar17[1] != 0) {
                local_d8 = 0;
                local_d0 = 0;
                local_b8 = 0;
                local_ac = 0;
                local_b0 = 0;
                local_a8 = 0xffffffff;
                local_a4 = 0;
                local_98 = (undefined1 *)0x0;
                local_90 = 0;
                uVar26 = *(int *)(local_130 + 0xd8) + (int)plVar17[1];
                uVar28 = uVar27;
                if (uVar26 != 0) {
                  TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_d8,uVar26);
                  uVar28 = (ulonglong)local_90;
                }
                local_a8 = 0xffffffff;
                local_a4 = 0;
                local_b0 = 0;
                uVar7 = uVar26 + 0x1f + ((int)(uVar26 + 0x1f) >> 0x1f & 0x1fU) & 0xffffffe0;
                if (local_ac != uVar7) {
                  local_ac = uVar7;
                  TBitArray<FDefaultBitArrayAllocator>::Realloc(local_c8,0);
                  uVar28 = (ulonglong)local_90;
                }
                if (uVar26 < 4) {
                  uVar7 = 1;
                }
                else {
                  uVar7 = (uVar26 >> 1) + 8;
                  iVar6 = 0x1f;
                  if (uVar7 != 0) {
                    for (; uVar7 >> iVar6 == 0; iVar6 = iVar6 + -1) {
                    }
                  }
                  if (uVar7 == 0) {
                    iVar6 = 0x20;
                  }
                  else {
                    iVar6 = 0x1f - iVar6;
                  }
                  uVar7 = (uVar26 >> 1) + 7;
                  iVar21 = 0x1f;
                  if (uVar7 != 0) {
                    for (; uVar7 >> iVar21 == 0; iVar21 = iVar21 + -1) {
                    }
                  }
                  if (uVar7 == 0) {
                    cVar4 = '\0';
                  }
                  else {
                    cVar4 = '\x1f' - (char)iVar21;
                  }
                  uVar7 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar4 & 0x1f);
                }
                iVar6 = (int)uVar28;
                if (((int)uVar26 < 1) ||
                   (((iVar6 != 0 && ((int)uVar7 <= iVar6)) && (iVar6 <= (int)uVar7)))) {
                  uVar19 = uVar28;
                  if (0 < iVar6) {
                    while( true ) {
                      puVar22 = local_a0;
                      if (local_98 != (undefined1 *)0x0) {
                        puVar22 = local_98;
                      }
                      uVar19 = (longlong)((int)uVar19 + -1) & uVar27;
                      uVar27 = uVar27 + 1;
                      *(undefined4 *)(puVar22 + uVar19 * 4) = 0xffffffff;
                      uVar28 = uVar28 - 1;
                      if (uVar28 == 0) break;
                      uVar19 = (ulonglong)local_90;
                    }
                    goto LAB_14217fc58;
                  }
                }
                else {
                  local_90 = uVar7;
                  FUN_1412a8360(&local_d8);
LAB_14217fc58:
                  uVar28 = (ulonglong)local_90;
                }
                iVar6 = (int)plVar17[1];
                iVar21 = *(int *)(lVar24 + 0xd8) + iVar6;
                if (iStack_19c < iVar21) {
                  local_1c0 = 0;
                  local_1a0 = 0;
                  if (iVar21 != iStack_19c) {
                    TArray<void_*,FDefaultAllocator>::ResizeTo(&local_1a8);
                    iVar6 = (int)plVar17[1];
                    uVar28 = (ulonglong)local_90;
                    local_1c0 = local_1a0;
                  }
                }
                else {
                  local_1c0 = 0;
                }
                plVar17 = (longlong *)*plVar17;
                plVar20 = plVar17 + (longlong)iVar6 * 5;
                iVar6 = local_1c0;
                puVar22 = local_98;
                iVar21 = iStack_19c;
                for (; plVar17 != plVar20; plVar17 = plVar17 + 5) {
                  if ((int)local_d0 != local_a4) {
                    lVar24 = *(longlong *)*plVar17;
                    puVar10 = local_a0;
                    if (puVar22 != (undefined1 *)0x0) {
                      puVar10 = puVar22;
                    }
                    iVar30 = *(int *)(puVar10 +
                                     (longlong)
                                     (int)((int)((ulonglong)lVar24 >> 0x20) + (int)lVar24 &
                                          (int)uVar28 - 1U) * 4);
                    while (iVar30 != -1) {
                      plVar29 = (longlong *)((longlong)iVar30 * 0x10 + local_d8);
                      plVar16 = (longlong *)*plVar29;
                      if ((*plVar16 == lVar24) &&
                         (*(longlong *)(plVar16[1] + 0x28) ==
                          *(longlong *)(((longlong *)*plVar17)[1] + 0x28))) {
                        if (iVar30 != -1) goto LAB_14217fdcf;
                        break;
                      }
                      iVar30 = (int)plVar29[1];
                    }
                  }
                  FUN_141288240(&local_d8,local_108,plVar17,0);
                  local_1a0 = iVar6 + 1;
                  if (iVar21 < local_1a0) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                              (&local_1a8,iVar6);
                    iVar21 = iStack_19c;
                  }
                  local_1a8[iVar6] = (longlong)plVar17;
                  uVar28 = (ulonglong)local_90;
                  puVar22 = local_98;
                  iVar6 = local_1a0;
LAB_14217fdcf:
                  iVar30 = local_1c4;
                }
                plVar17 = *(longlong **)(local_130 + 0xd0);
                plVar20 = plVar17 + (longlong)*(int *)(local_130 + 0xd8) * 5;
                iVar8 = local_1c4;
                local_1c0 = iVar6;
                for (; local_1c4 = iVar8, plVar17 != plVar20; plVar17 = plVar17 + 5) {
                  if ((int)local_d0 != local_a4) {
                    lVar24 = *(longlong *)*plVar17;
                    puVar10 = local_a0;
                    if (puVar22 != (undefined1 *)0x0) {
                      puVar10 = puVar22;
                    }
                    iVar30 = *(int *)(puVar10 +
                                     (longlong)
                                     (int)((int)((ulonglong)lVar24 >> 0x20) + (int)lVar24 &
                                          (int)uVar28 - 1U) * 4);
                    while (iVar30 != -1) {
                      plVar29 = (longlong *)((longlong)iVar30 * 0x10 + local_d8);
                      plVar16 = (longlong *)*plVar29;
                      if ((*plVar16 == lVar24) &&
                         (*(longlong *)(plVar16[1] + 0x28) ==
                          *(longlong *)(((longlong *)*plVar17)[1] + 0x28))) {
                        if (iVar30 != -1) goto LAB_14217fecf;
                        break;
                      }
                      iVar30 = (int)plVar29[1];
                    }
                  }
                  FUN_141288240(&local_d8,local_104,plVar17,0);
                  local_1a0 = iVar6 + 1;
                  if (iVar21 < local_1a0) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                              (&local_1a8,iVar6);
                    iVar21 = iStack_19c;
                  }
                  local_1a8[iVar6] = (longlong)plVar17;
                  uVar28 = (ulonglong)local_90;
                  puVar22 = local_98;
                  iVar6 = local_1a0;
LAB_14217fecf:
                  iVar8 = local_1c4;
                  iVar30 = local_1c4;
                }
                local_180 = 0;
                puVar14 = (undefined8 *)local_188[4];
                local_168 = puVar14 + (longlong)*(int *)(local_188 + 5) * 2;
                local_148 = 0;
                local_1c8 = '\0';
                local_1c0 = iVar6;
                local_17c = iVar6;
                local_128 = puVar14;
                if (puVar14 != local_168) {
                  cVar4 = '\0';
                  local_1c8 = '\0';
                  do {
                    bVar3 = false;
                    lVar24 = local_148;
                    local_128 = puVar14;
                    iVar6 = local_180;
                    if (local_180 < local_1c0) {
                      do {
                        plVar20 = local_1a8;
                        psVar13 = (short *)0x0;
                        iVar8 = local_1c4;
                        cVar4 = local_1c8;
                        if (bVar3) goto LAB_14218029e;
                        iVar21 = local_180;
                        lVar2 = local_148;
                        if ((longlong *)local_1a8[lVar24] != (longlong *)0x0) {
                          lVar2 = *(longlong *)local_1a8[lVar24];
                          if (*(int *)(lVar2 + 0x18) == 0) {
                            puVar23 = &DAT_143f3eda8;
                          }
                          else {
                            puVar23 = *(undefined2 **)(lVar2 + 0x10);
                          }
                          iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar23);
                          iVar21 = local_180;
                          lVar2 = local_148;
                          cVar4 = local_1c8;
                          if (iVar8 == 0) {
                            lVar2 = plVar20[lVar24];
                            psVar11 = (short *)FUN_14218bef0(*(undefined2 *)(lVar2 + 0x20));
                            psVar15 = psVar13;
                            if ((*psVar11 == 0) || (*(int *)(psVar11 + 0x28) == 0)) {
LAB_142180035:
                              uVar26 = (uint)psVar13;
                            }
                            else {
                              plVar20 = *(longlong **)(psVar11 + 0x20);
                              psVar12 = psVar13;
                              if (plVar20 == (longlong *)0x0) {
                                psVar12 = psVar11 + 0x10;
                              }
                              if (psVar12 == (short *)0x0 && plVar20 == (longlong *)0x0)
                              goto LAB_142180035;
                              if (*(int *)(psVar11 + 0x28) != 0) {
                                if (plVar20 == (longlong *)0x0) {
                                  plVar20 = (longlong *)(psVar11 + 0x10);
                                }
                                if (plVar20 != (longlong *)0x0) {
                                  psVar13 = (short *)(**(code **)(*plVar20 + 8))();
                                }
                              }
                              puVar14 = (undefined8 *)
                                        (**(code **)(psVar11 + 8))(local_f8,psVar13,lVar2 + 8);
                              psVar15 = (short *)*puVar14;
                              *puVar14 = 0;
                              uVar26 = *(uint *)(puVar14 + 1);
                              psVar13 = (short *)(ulonglong)uVar26;
                              puVar14[1] = 0;
                              if (local_f8[0] != 0) {
                                FMemory::Free();
                                goto LAB_142180035;
                              }
                            }
                            if (local_1c8 != '\0') {
                              local_1c4 = (2 - (uint)(iVar30 != 0)) + iVar30;
                              local_1b0 = local_1c4;
                              if (local_1ac < local_1c4) {
                                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8);
                              }
                              local_1b8[(longlong)iVar30 - (ulonglong)(iVar30 != 0)] = 0x2c;
                              (local_1b8 + ((longlong)iVar30 - (ulonglong)(iVar30 != 0)))[1] = 0;
                              iVar30 = local_1b0;
                              local_1c4 = local_1b0;
                            }
                            local_1c8 = '\x01';
                            if ((uVar26 != 0) && (uVar26 - 1 != 0)) {
                              local_1c4 = (uint)(iVar30 == 0) + (uVar26 - 1) + iVar30;
                              local_1b0 = local_1c4;
                              if (local_1ac < local_1c4) {
                                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,iVar30);
                              }
                              puVar23 = local_1b8 + ((longlong)iVar30 - (ulonglong)(iVar30 != 0));
                              local_1c4 = local_1b0;
                              _guard_xfg_dispatch_icall_nop
                                        (puVar23,psVar15,(longlong)(int)uVar26 * 2 - 2);
                              puVar23[(longlong)(int)uVar26 + -1] = 0;
                            }
                            cVar4 = local_1c8;
                            if (psVar15 != (short *)0x0) {
                              FMemory::Free(psVar15);
                            }
                            bVar3 = true;
                            local_17c = local_17c + -1;
                            local_1a8[lVar24] = 0;
                            puVar14 = local_128;
                            iVar21 = local_180 + 1;
                            lVar2 = local_148 + 1;
                            iVar30 = local_1c4;
                            if (lVar24 != local_148) {
                              iVar21 = local_180;
                              lVar2 = local_148;
                            }
                          }
                        }
                        local_148 = lVar2;
                        local_180 = iVar21;
                        iVar6 = iVar6 + 1;
                        lVar24 = lVar24 + 1;
                      } while (iVar6 < local_1c0);
                      iVar8 = local_1c4;
                      if (!bVar3) goto LAB_142180197;
                    }
                    else {
LAB_142180197:
                      iVar6 = 0;
                      if (cVar4 != '\0') {
                        local_1c4 = (2 - (uint)(iVar30 != 0)) + iVar30;
                        local_1b0 = local_1c4;
                        if (local_1ac < local_1c4) {
                          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,iVar30);
                        }
                        local_1b8[(longlong)iVar30 - (ulonglong)(iVar30 != 0)] = 0x2c;
                        (local_1b8 + ((longlong)iVar30 - (ulonglong)(iVar30 != 0)))[1] = 0;
                        local_1c4 = local_1b0;
                      }
                      iVar30 = local_1c4;
                      pvVar25 = DAT_146aeade8;
                      local_1c8 = '\x01';
                      if (DAT_146aeadf0 != 0) {
                        iVar6 = DAT_146aeadf0 + -1;
                      }
                      iVar8 = local_1c4;
                      cVar4 = '\x01';
                      if (iVar6 != 0) {
                        lVar24 = (longlong)local_1c4;
                        local_1c4 = local_1c4 + (uint)(local_1c4 == 0) + iVar6;
                        local_1b0 = local_1c4;
                        if (local_1ac < local_1c4) {
                          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,iVar30);
                        }
                        iVar8 = local_1b0;
                        puVar23 = local_1b8 + (lVar24 - (ulonglong)(iVar30 != 0));
                        local_1c4 = local_1b0;
                        _guard_xfg_dispatch_icall_nop(puVar23,pvVar25,(longlong)iVar6 * 2);
                        puVar23[iVar6] = 0;
                        cVar4 = local_1c8;
                      }
                    }
LAB_14218029e:
                    puVar14 = puVar14 + 2;
                    puVar22 = local_98;
                    local_128 = puVar14;
                    iVar30 = local_1c4;
                  } while (puVar14 != local_168);
                }
                iVar30 = local_1c4;
                if ((0 < local_17c) || (*(int *)(local_188 + 5) == 0)) {
                  plVar20 = local_1a8 + local_1c0;
                  for (plVar17 = local_1a8; plVar17 != plVar20; plVar17 = plVar17 + 1) {
                    psVar13 = (short *)0x0;
                    lVar24 = *plVar17;
                    if (lVar24 != 0) {
                      psVar15 = (short *)FUN_14218bef0(*(undefined2 *)(lVar24 + 0x20));
                      if ((*psVar15 == 0) || (*(int *)(psVar15 + 0x28) == 0)) {
LAB_142180398:
                        pvVar25 = (void *)0x0;
                      }
                      else {
                        psVar11 = psVar13;
                        if (*(longlong *)(psVar15 + 0x20) == 0) {
                          psVar11 = psVar15 + 0x10;
                        }
                        if (psVar11 == (short *)0x0 && *(longlong *)(psVar15 + 0x20) == 0)
                        goto LAB_142180398;
                        if (*(int *)(psVar15 + 0x28) != 0) {
                          plVar16 = *(longlong **)(psVar15 + 0x20);
                          if (*(longlong **)(psVar15 + 0x20) == (longlong *)0x0) {
                            plVar16 = (longlong *)(psVar15 + 0x10);
                          }
                          if (plVar16 != (longlong *)0x0) {
                            psVar13 = (short *)(**(code **)(*plVar16 + 8))();
                          }
                        }
                        puVar14 = (undefined8 *)
                                  (**(code **)(psVar15 + 8))(local_e8,psVar13,lVar24 + 8);
                        pvVar25 = (void *)*puVar14;
                        *puVar14 = 0;
                        psVar13 = (short *)(ulonglong)*(uint *)(puVar14 + 1);
                        puVar14[1] = 0;
                        if (local_e8[0] != 0) {
                          FMemory::Free();
                        }
                      }
                      iVar30 = iVar8;
                      if (local_1c8 != '\0') {
                        local_1b0 = (2 - (uint)(iVar8 != 0)) + iVar8;
                        if (local_1ac < local_1b0) {
                          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,iVar8);
                        }
                        local_1b8[(longlong)iVar8 - (ulonglong)(iVar8 != 0)] = 0x2c;
                        (local_1b8 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)))[1] = 0;
                        iVar30 = local_1b0;
                      }
                      local_1c8 = '\x01';
                      iVar6 = (int)psVar13;
                      iVar8 = iVar30;
                      if ((iVar6 != 0) && (iVar6 + -1 != 0)) {
                        local_1b0 = iVar30 + (uint)(iVar30 == 0) + iVar6 + -1;
                        if (local_1ac < local_1b0) {
                          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,iVar30);
                        }
                        iVar8 = local_1b0;
                        puVar23 = local_1b8 + ((longlong)iVar30 - (ulonglong)(iVar30 != 0));
                        _guard_xfg_dispatch_icall_nop(puVar23,pvVar25,(longlong)iVar6 * 2 - 2);
                        puVar23[(longlong)iVar6 + -1] = 0;
                      }
                      if (pvVar25 != (void *)0x0) {
                        FMemory::Free(pvVar25);
                      }
                      puVar14 = local_188;
                      iVar30 = *(int *)(local_188 + 5);
                      lVar24 = *(longlong *)*plVar17;
                      *(int *)(local_188 + 5) = iVar30 + 1;
                      if (*(int *)((longlong)local_188 + 0x2c) < iVar30 + 1) {
                        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(local_188 + 4,iVar30);
                      }
                      FString::FString((longlong)iVar30 * 0x10 + puVar14[4],lVar24 + 0x10);
                      local_1bc = '\x01';
                    }
                    puVar22 = local_98;
                    iVar30 = iVar8;
                  }
                }
                local_1c4 = iVar30;
                pvVar25 = DAT_146aeadd0;
                if (DAT_146aeadd8 == 0) {
                  iVar30 = 0;
                }
                else {
                  iVar30 = DAT_146aeadd8 + -1;
                }
                if (iVar30 != 0) {
                  local_1c4 = iVar30 + (uint)(iVar8 == 0) + iVar8;
                  local_1b0 = local_1c4;
                  if (local_1ac < local_1c4) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,iVar8);
                  }
                  puVar23 = local_1b8 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0));
                  local_1c4 = local_1b0;
                  _guard_xfg_dispatch_icall_nop(puVar23,pvVar25,(longlong)iVar30 * 2);
                  puVar23[iVar30] = 0;
                  puVar22 = local_98;
                }
                local_90 = 0;
                if (puVar22 != (undefined1 *)0x0) {
                  FMemory::Free(puVar22);
                }
                TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                          (&local_d8);
                plVar16 = local_140;
                iVar30 = local_1c4;
              }
              param_2 = local_118;
              puVar14 = local_188;
              uVar27 = 0;
              plVar17 = local_120 + 2;
            } while (plVar17 != plVar16);
            plVar20 = local_160;
            local_120 = plVar17;
            if (local_1bc != '\0') {
              local_198 = 0;
              local_190 = 0;
              local_158 = (void *)0x0;
              local_150 = 0;
              if (*(int *)(local_188 + 3) == 0) {
                puVar23 = &DAT_143f3eda8;
              }
              else {
                puVar23 = (undefined2 *)local_188[2];
              }
              cVar4 = FUN_141676530(&local_158,puVar23,0);
              if (cVar4 != '\0') {
                local_1d0 = 0;
                local_1d8 = 1;
                FUN_1404e14f0(&local_158,&DAT_146aeadd0,&local_198,&local_158);
                FString::TrimEndInline(&local_198);
              }
              local_178 = 0;
              local_170 = local_170 & 0xffffffff;
              cVar4 = '\x01';
              puVar32 = (undefined8 *)puVar14[4];
              local_168 = puVar32 + (longlong)*(int *)(puVar14 + 5) * 2;
              local_1c8 = '\x01';
              uVar28 = uVar27;
              uVar19 = uVar27;
              if (puVar32 != local_168) {
                do {
                  if (cVar4 == '\0') {
                    iVar30 = (int)uVar19;
                    uVar26 = (2 - (uint)(iVar30 != 0)) + iVar30;
                    local_170 = CONCAT44(local_170._4_4_,uVar26);
                    if ((int)uVar27 < (int)uVar26) {
                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,uVar19);
                      uVar27 = local_170 >> 0x20;
                      uVar28 = local_178;
                      uVar26 = (uint)local_170;
                      cVar4 = local_1c8;
                    }
                    uVar19 = (ulonglong)uVar26;
                    lVar24 = ((longlong)iVar30 - (ulonglong)(iVar30 != 0)) * 2;
                    *(undefined2 *)(lVar24 + uVar28) = 0x2c;
                    *(undefined2 *)(lVar24 + 2 + uVar28) = 0;
                  }
                  else {
                    cVar4 = '\0';
                    local_1c8 = '\0';
                  }
                  local_140 = (longlong *)*puVar32;
                  iVar30 = *(int *)(puVar32 + 1) + -1;
                  if (*(int *)(puVar32 + 1) == 0) {
                    iVar30 = 0;
                  }
                  if (iVar30 != 0) {
                    iVar6 = (int)uVar19;
                    uVar26 = iVar30 + (uint)(iVar6 == 0) + iVar6;
                    local_170 = CONCAT44(local_170._4_4_,uVar26);
                    if ((int)uVar27 < (int)uVar26) {
                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,uVar19);
                      uVar27 = local_170 >> 0x20;
                      uVar28 = local_178;
                      uVar26 = (uint)local_170;
                    }
                    uVar19 = (ulonglong)uVar26;
                    pvVar25 = (void *)(((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2 + uVar28);
                    _guard_xfg_dispatch_icall_nop(pvVar25,local_140,(longlong)iVar30 * 2);
                    *(undefined2 *)((longlong)iVar30 * 2 + (longlong)pvVar25) = 0;
                    cVar4 = local_1c8;
                  }
                  puVar32 = puVar32 + 2;
                  param_2 = local_118;
                } while (puVar32 != local_168);
              }
              iVar6 = (int)uVar27;
              iVar30 = (int)uVar19;
              if (local_198 != 0) {
                FMemory::Free();
              }
              pvVar25 = DAT_146aeadd0;
              local_178 = 0;
              local_190 = CONCAT44(iVar6,iVar30);
              local_170 = 0;
              iVar8 = 0;
              iVar21 = iVar8;
              if (DAT_146aeadd8 != 0) {
                iVar21 = DAT_146aeadd8 + -1;
              }
              local_198 = uVar28;
              if (iVar21 != 0) {
                iVar9 = (uint)(iVar30 == 0) + iVar30 + iVar21;
                local_190 = CONCAT44(iVar6,iVar9);
                if (iVar6 < iVar9) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,uVar19);
                }
                pvVar1 = (void *)(local_198 + ((longlong)iVar30 - (ulonglong)(iVar30 != 0)) * 2);
                _guard_xfg_dispatch_icall_nop(pvVar1,pvVar25,(longlong)iVar21 * 2);
                *(undefined2 *)((longlong)pvVar1 + (longlong)iVar21 * 2) = 0;
                iVar30 = (int)local_190;
                iVar6 = local_190._4_4_;
              }
              pvVar25 = local_158;
              if ((int)local_150 != 0) {
                iVar8 = (int)local_150 + -1;
              }
              if (iVar8 != 0) {
                iVar21 = (uint)(iVar30 == 0) + iVar8 + iVar30;
                local_190 = CONCAT44(local_190._4_4_,iVar21);
                if (iVar6 < iVar21) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,iVar30);
                }
                pvVar1 = (void *)(local_198 + ((longlong)iVar30 - (ulonglong)(iVar30 != 0)) * 2);
                _guard_xfg_dispatch_icall_nop(pvVar1,pvVar25,(longlong)iVar8 * 2);
                *(undefined2 *)((longlong)pvVar1 + (longlong)iVar8 * 2) = 0;
              }
              if (*(int *)(local_188 + 3) == 0) {
                puVar23 = &DAT_143f3eda8;
              }
              else {
                puVar23 = (undefined2 *)local_188[2];
              }
              FUN_1415c3d50();
              local_1d8 = 0;
              FUN_14167efa0(&local_198,puVar23,1);
              if (local_158 != (void *)0x0) {
                FMemory::Free();
              }
              plVar20 = local_160;
              if (local_198 != 0) {
                FMemory::Free();
                plVar20 = local_160;
              }
            }
          }
          iVar30 = 0;
          plVar17 = (longlong *)FUN_1415c3d50();
          if (*(int *)(local_188 + 3) == 0) {
            puVar23 = &DAT_143f3eda8;
          }
          else {
            puVar23 = (undefined2 *)local_188[2];
          }
          plVar17 = (longlong *)(**(code **)(*plVar17 + 0x20))(plVar17,puVar23);
          if (plVar17 != (longlong *)0x0) {
            if (local_1c4 == 0) {
              puVar23 = &DAT_143f3eda8;
            }
            else {
              iVar30 = local_1c4 + -1;
              puVar23 = local_1b8;
            }
            local_58 = 0;
            if (puVar23 == (undefined2 *)0x0) {
              local_50 = 0;
              local_48 = 0;
            }
            else {
              FUN_14218edc0(&local_d8,puVar23,iVar30);
            }
            (**(code **)(*plVar17 + 0x50))(plVar17,local_50);
            (**(code **)*plVar17)(plVar17,1);
            if (local_58 != 0) {
              FMemory::Free();
            }
          }
          piVar31 = local_110;
          cVar4 = local_1bb;
          if (local_1b8 != (undefined2 *)0x0) {
            FMemory::Free(local_1b8);
            piVar31 = local_110;
            cVar4 = local_1bb;
          }
        }
        plVar20 = plVar20 + 5;
      } while (plVar20 != local_100);
      if (local_1a8 != (longlong *)0x0) {
        local_160 = plVar20;
        FMemory::Free(local_1a8);
      }
    }
  }
  return;
}



// FUNCTION 142180af0 FUN_142180af0 body=917 status=ok
// SIG undefined FUN_142180af0(void)

longlong * FUN_142180af0(longlong *param_1,longlong *param_2)

{
  undefined2 *puVar1;
  void *pvVar2;
  uint *puVar3;
  uint uVar4;
  void *pvVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  longlong *plVar17;
  int local_98;
  uint uStack_94;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int iStack_70;
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
  
  *param_2 = 0;
  param_2[1] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0x201);
  param_1 = (longlong *)*param_1;
  uVar4 = *(uint *)(param_1 + 5);
  local_98 = 0;
  uStack_94 = 1;
  puVar3 = (uint *)(param_1 + 2);
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar4 != 0) {
    puVar15 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar15 = puVar3;
    }
    uVar16 = *puVar15;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar16 == 0) {
      lVar13 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar11 = local_98 + 1;
      bVar6 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar11;
      if (bVar6) goto LAB_142180bd8;
      uVar16 = puVar15[lVar13 + 1];
    }
    uStack_94 = -uVar16 & uVar16;
    iVar11 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    uStack_84 = (iStack_80 - iVar11) + 0x1f;
    if ((int)uVar4 < (int)uStack_84) {
LAB_142180bd8:
      uStack_84 = uVar4;
    }
  }
  uVar16 = *(uint *)(param_1 + 5);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar7 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uVar14 = uVar16 & 0xffffffe0;
  uStack_38 = 0xffffffff;
  uStack_34 = uStack_84;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  uStack_60 = 0xffffffff;
  local_68 = puVar3;
  local_50 = param_1;
  puStack_40 = puVar3;
  uStack_30 = local_58;
  uVar8 = uVar7;
  if (uVar16 != uVar4) {
    puVar15 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar15 = puVar3;
    }
    uVar12 = puVar15[(int)uVar16 >> 5] & -1 << ((byte)uVar16 & 0x1f);
    iVar11 = (int)uVar16 >> 5;
    while (uVar12 == 0) {
      uVar14 = uVar14 + 0x20;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar11)
      goto LAB_142180c97;
      uVar12 = puVar15[(longlong)iVar11 + 1];
      iVar11 = iVar11 + 1;
    }
    uVar12 = -uVar12 & uVar12;
    iVar11 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uVar12 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    uVar16 = (uVar14 - iVar11) + 0x1f;
    if ((int)uVar4 < (int)uVar16) {
LAB_142180c97:
      uVar16 = uVar4;
      uVar7 = uStack_60;
      uVar8 = uStack_38;
    }
  }
  while ((uStack_38 = uVar8, uStack_60 = uVar7, uStack_5c != uVar16 || (local_68 != puVar3))) {
    iVar11 = (int)param_2[1];
    plVar17 = (longlong *)((longlong)(int)uStack_5c * 0x10 + *param_1);
    iVar9 = iVar11 + -1;
    if (iVar11 == 0) {
      iVar9 = 0;
    }
    if (iVar9 != 0) {
      iVar9 = (2 - (uint)(iVar11 != 0)) + iVar11;
      *(int *)(param_2 + 1) = iVar9;
      if (*(int *)((longlong)param_2 + 0xc) < iVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar11);
      }
      puVar1 = (undefined2 *)(*param_2 + ((longlong)iVar11 - (ulonglong)(iVar11 != 0)) * 2);
      *puVar1 = 0x2c;
      puVar1[1] = 0;
    }
    lVar13 = *plVar17;
    iVar9 = *(int *)(lVar13 + 0x98);
    pvVar5 = *(void **)(lVar13 + 0x90);
    iVar11 = iVar9 + -1;
    if (iVar9 == 0) {
      iVar11 = 0;
    }
    if (iVar11 != 0) {
      iVar9 = (int)param_2[1];
      iVar10 = (uint)(iVar9 == 0) + iVar9 + iVar11;
      *(int *)(param_2 + 1) = iVar10;
      if (*(int *)((longlong)param_2 + 0xc) < iVar10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar9);
      }
      pvVar2 = (void *)(*param_2 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar2,pvVar5,(longlong)iVar11 * 2);
      *(undefined2 *)((longlong)pvVar2 + (longlong)iVar11 * 2) = 0;
    }
    iVar11 = (int)param_2[1];
    iVar9 = (2 - (uint)(iVar11 != 0)) + iVar11;
    *(int *)(param_2 + 1) = iVar9;
    if (*(int *)((longlong)param_2 + 0xc) < iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar11);
    }
    puVar1 = (undefined2 *)(*param_2 + ((longlong)iVar11 - (ulonglong)(iVar11 != 0)) * 2);
    *puVar1 = 0x2e;
    puVar1[1] = 0;
    lVar13 = *plVar17;
    iVar11 = *(int *)(lVar13 + 0x88);
    pvVar5 = *(void **)(lVar13 + 0x80);
    iVar9 = iVar11 + -1;
    if (iVar11 == 0) {
      iVar9 = 0;
    }
    if (iVar9 != 0) {
      iVar11 = (int)param_2[1];
      iVar10 = (uint)(iVar11 == 0) + iVar11 + iVar9;
      *(int *)(param_2 + 1) = iVar10;
      if (*(int *)((longlong)param_2 + 0xc) < iVar10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar11);
      }
      pvVar2 = (void *)(*param_2 + ((longlong)iVar11 - (ulonglong)(iVar11 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar2,pvVar5,(longlong)iVar9 * 2);
      *(undefined2 *)((longlong)pvVar2 + (longlong)iVar9 * 2) = 0;
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
    uVar7 = uStack_60;
    uVar8 = uStack_38;
  }
  return param_2;
}



// FUNCTION 142180e90 FUN_142180e90 body=105 status=ok
// SIG undefined FUN_142180e90(void)

undefined8 FUN_142180e90(undefined8 param_1,undefined8 param_2,float *param_3)

{
  FString::PrintfImpl(param_2,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f",(double)*param_3,(double)param_3[1]
                      ,(double)param_3[2],(double)param_3[3]);
  return param_2;
}



// FUNCTION 142180f00 FUN_142180f00 body=141 status=ok
// SIG undefined FUN_142180f00(void)

ulonglong FUN_142180f00(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined8 local_28;
  undefined1 local_20 [8];
  undefined4 local_18;
  
  uVar2 = 0;
  if ((*param_2 != 0) && (uVar2 = 0, param_2[3] != 0)) {
    uVar1 = *(uint *)(param_2 + 5);
    uVar2 = (ulonglong)uVar1;
    if ((uVar1 != 0) && (uVar1 != 1)) {
      uVar1 = *(uint *)(param_2 + 7);
      uVar2 = (ulonglong)uVar1;
      iVar3 = uVar1 - 1;
      if (uVar1 == 0) {
        iVar3 = 0;
      }
      if (iVar3 != 0) {
        local_28 = *param_3;
        if ((int)param_2[7] == 0) {
          puVar4 = &DAT_143f3eda8;
        }
        else {
          puVar4 = (undefined2 *)param_2[6];
        }
        FName::FName(local_20,puVar4,1);
        local_18 = (undefined4)param_2[8];
        uVar2 = FUN_142184c40(*param_1,&local_28);
      }
    }
  }
  return uVar2;
}



// FUNCTION 142180f90 FUN_142180f90 body=105 status=ok
// SIG undefined FUN_142180f90(void)

undefined8 FUN_142180f90(undefined8 param_1,undefined8 param_2,float *param_3)

{
  FString::PrintfImpl(param_2,L"X=%.9f Y=%.9f Z=%.9f W=%.9f",(double)*param_3,(double)param_3[1],
                      (double)param_3[2],(double)param_3[3]);
  return param_2;
}



// FUNCTION 142181000 FUN_142181000 body=156 status=ok
// SIG undefined FUN_142181000(void)

undefined1 FUN_142181000(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 local_res10;
  undefined1 local_res18 [8];
  
  iVar5 = *(int *)(param_2 + 0x20);
  plVar1 = (longlong *)(param_2 + 0x18);
  if (iVar5 != 0) {
    plVar4 = (longlong *)(*plVar1 + 8);
    do {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 3;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(undefined4 *)(param_2 + 0x20) = 0;
  if (*(int *)(param_2 + 0x24) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (plVar1,0);
  }
  puVar2 = (undefined8 *)FName::FName(local_res18,&DAT_144ca0438,1);
  local_res10 = *puVar2;
  lVar3 = FUN_14218d390(plVar1,DAT_146aeb080);
  TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
  AddUniqueImpl<UGeometryCacheComponent_*_const_&>(lVar3 + 8,&local_res10);
  return 1;
}



// FUNCTION 1421810a0 FUN_1421810a0 body=197 status=ok
// SIG undefined FUN_1421810a0(void)

undefined8 FUN_1421810a0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *local_28;
  int local_20;
  undefined2 *local_18;
  int local_10;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  FString::PrintfImpl(&local_18,L"X=%d Y=%d",param_3[2],param_3[3]);
  puVar3 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar3 = local_18;
  }
  FString::PrintfImpl(&local_28,L"X=%d Y=%d",uVar1,uVar2);
  puVar4 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar4 = local_28;
  }
  FString::PrintfImpl(param_2,L"Min=(%s) Max=(%s)",puVar4,puVar3);
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142181170 FUN_142181170 body=115 status=ok
// SIG undefined FUN_142181170(void)

undefined8 * FUN_142181170(undefined8 param_1,undefined8 *param_2,short *param_3)

{
  int iVar1;
  longlong lVar2;
  short local_res18 [8];
  
  local_res18[0] = *param_3;
  *param_2 = 0;
  param_2[1] = 0;
  local_res18[1] = 0;
  if (local_res18[0] != 0) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (local_res18[lVar2] != 0);
    iVar1 = (int)lVar2 + 1;
    *(int *)(param_2 + 1) = iVar1;
    if (0 < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    }
    FGenericPlatformString::Memcpy(*param_2,local_res18,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 1421811f0 FUN_1421811f0 body=456 status=ok
// SIG undefined FUN_1421811f0(void)

undefined8 FUN_1421811f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  wchar_t *pwVar6;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  char local_e0 [8];
  undefined2 *local_d8;
  int local_d0;
  undefined2 *local_c8;
  int local_c0;
  undefined **local_b8 [18];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  FArchive::FArchive(local_b8);
  local_28 = 0;
  local_b8[0] = &PTR_FUN_143f4a3a0;
  local_18 = 0x7fffffffffffffff;
  local_20 = param_3;
  FArchive::SetIsLoading(local_b8,1);
  FArchive::SetIsPersistent(local_b8,1);
  uVar2 = FUN_1406da970(local_b8,&local_f8);
  plVar3 = (longlong *)FUN_1406da970(uVar2,&local_ec);
  pcVar1 = *(char **)plVar3[1];
  if ((char *)((undefined8 *)plVar3[1])[1] < pcVar1 + 1) {
    (**(code **)(*plVar3 + 0x50))(plVar3,local_e0,1);
  }
  else {
    local_e0[0] = *pcVar1;
    *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 1;
  }
  FArchive::~FArchive(local_b8);
  FString::PrintfImpl(&local_c8,L"X=%3.3f Y=%3.3f Z=%3.3f",(double)local_ec,(double)local_e8,
                      (double)local_e4);
  puVar4 = &DAT_143f3eda8;
  if (local_c0 != 0) {
    puVar4 = local_c8;
  }
  FString::PrintfImpl(&local_d8,L"X=%3.3f Y=%3.3f Z=%3.3f",(double)local_f8,(double)local_f4,
                      (double)local_f0);
  pwVar6 = L"false";
  puVar5 = &DAT_143f3eda8;
  if (local_d0 != 0) {
    puVar5 = local_d8;
  }
  if (local_e0[0] != '\0') {
    pwVar6 = L"true";
  }
  FString::PrintfImpl(param_2,L"IsValid=%s, Min=(%s), Max=(%s)",pwVar6,puVar5,puVar4);
  if (local_d8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_c8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1421813c0 FUN_1421813c0 body=127 status=ok
// SIG undefined FUN_1421813c0(void)

undefined8 * FUN_1421813c0(void)

{
  DWORD DVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x48);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[1] = 0;
    *puVar2 = &PTR_FUN_144fdcb08;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(puVar2 + 2) = DVar1;
    *puVar2 = &PTR__scalar_deleting_destructor__144fdcb10;
    puVar2[7] = 0;
    puVar2[8] = 0;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142181440 FUN_142181440 body=471 status=ok
// SIG undefined FUN_142181440(void)

undefined8 FUN_142181440(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  float *pfVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0 [2];
  undefined2 *local_d8;
  int local_d0;
  undefined2 *local_c8;
  int local_c0;
  undefined **local_b8 [18];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  FArchive::FArchive(local_b8);
  local_28 = 0;
  local_b8[0] = &PTR_FUN_143f4a3a0;
  local_18 = 0x7fffffffffffffff;
  local_20 = param_3;
  FArchive::SetIsLoading(local_b8,1);
  FArchive::SetIsPersistent(local_b8,1);
  uVar2 = FUN_1406da970(local_b8,&local_f8);
  plVar3 = (longlong *)FUN_1406da970(uVar2,&local_ec);
  pfVar1 = *(float **)plVar3[1];
  if ((float *)((undefined8 *)plVar3[1])[1] < pfVar1 + 1) {
    (**(code **)(*plVar3 + 0x50))(plVar3,local_e0,4);
    if ((*(byte *)((longlong)plVar3 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(plVar3,local_e0,4);
    }
  }
  else {
    local_e0[0] = *pfVar1;
    *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 4;
  }
  FArchive::~FArchive(local_b8);
  FString::PrintfImpl(&local_c8,L"X=%3.3f Y=%3.3f Z=%3.3f",(double)local_ec,(double)local_e8,
                      (double)local_e4);
  puVar4 = &DAT_143f3eda8;
  if (local_c0 != 0) {
    puVar4 = local_c8;
  }
  FString::PrintfImpl(&local_d8,L"X=%3.3f Y=%3.3f Z=%3.3f",(double)local_f8,(double)local_f4,
                      (double)local_f0);
  puVar5 = &DAT_143f3eda8;
  if (local_d0 != 0) {
    puVar5 = local_d8;
  }
  FString::PrintfImpl(param_2,L"Origin=%s, BoxExtent=(%s), SphereRadius=(%f)",puVar5,puVar4,
                      (double)local_e0[0]);
  if (local_d8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_c8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142181620 FUN_142181620 body=225 status=ok
// SIG undefined FUN_142181620(void)

longlong * FUN_142181620(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_58;
  longlong *local_50;
  longlong *local_48;
  longlong local_40 [3];
  undefined2 local_28;
  ushort local_26;
  
  lVar1 = DAT_146aeae58;
  local_28 = 0xffff;
  local_26 = local_26 & 0xfff8;
  if (DAT_146aeae58 != 0) {
    local_58 = DAT_146aeae58;
    local_50 = &DAT_146aeb1e8;
    local_48 = local_40;
    uVar2 = FUN_14218be10();
    FUN_14217a950(uVar2,lVar1,&local_58);
  }
  lVar1 = DAT_146aeae38;
  *(ushort *)((longlong)param_2 + 0x1a) = *(ushort *)((longlong)param_2 + 0x1a) & 0xfff8;
  *(undefined2 *)(param_2 + 3) = 0xffff;
  if (lVar1 != 0) {
    local_50 = local_40;
    local_58 = lVar1;
    local_48 = param_2;
    uVar2 = FUN_14218be10();
    FUN_14217a950(uVar2,lVar1,&local_58);
  }
  if (((local_26 & 1) != 0) && (local_40[0] != 0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142181710 FUN_142181710 body=129 status=ok
// SIG undefined FUN_142181710(void)

void FUN_142181710(char *param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  if (*param_1 == '\0') {
    lVar1 = *(longlong *)(param_1 + 8);
    if (param_2 != (undefined1 *)(lVar1 + 0x10)) {
      if (*(char *)(lVar1 + 0x11) != '\0') {
        *(undefined1 *)(lVar1 + 0x11) = 0;
      }
      if (param_2[1] != '\0') {
        *(undefined1 *)(lVar1 + 0x10) = *param_2;
        *(undefined1 *)(lVar1 + 0x11) = 1;
      }
    }
    lVar1 = *(longlong *)(param_1 + 8);
    puVar4 = *(undefined1 **)(param_1 + 0x10);
    puVar3 = (undefined1 *)(lVar1 + 0x10);
    if (puVar3 == puVar4) goto LAB_142181786;
    if (puVar4[1] != '\0') {
      puVar4[1] = 0;
    }
    if (*(char *)(lVar1 + 0x11) == '\0') goto LAB_142181786;
    uVar2 = *puVar3;
  }
  else {
    puVar4 = *(undefined1 **)(param_1 + 0x10);
    if (param_2 == puVar4) goto LAB_142181786;
    if (puVar4[1] != '\0') {
      puVar4[1] = 0;
    }
    if (param_2[1] == '\0') {
      return;
    }
    uVar2 = *param_2;
  }
  *puVar4 = uVar2;
  puVar4[1] = 1;
LAB_142181786:
  if (param_2[1] != '\0') {
    param_2[1] = 0;
  }
  return;
}



// FUNCTION 1421817a0 FUN_1421817a0 body=248 status=ok
// SIG undefined FUN_1421817a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1421817a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_118 [32];
  undefined **local_f8 [18];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_28 = _DAT_146aeb470 & _DAT_146aeb480;
  uStack_24 = uRam0000000146aeb474 & uRam0000000146aeb484;
  uStack_20 = uRam0000000146aeb478 & uRam0000000146aeb488;
  uStack_1c = uRam0000000146aeb47c & uRam0000000146aeb48c;
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = uRam0000000146aeb47c;
  local_38 = 0;
  uStack_30 = 0;
  FArchive::FArchive(local_f8);
  local_68 = 0;
  local_f8[0] = &PTR_FUN_143f4a3a0;
  local_58 = 0x7fffffffffffffff;
  local_60 = param_3;
  FArchive::SetIsLoading(local_f8,1);
  FArchive::SetIsPersistent(local_f8,1);
  FUN_14217f6d0(local_f8,&local_48);
  FArchive::~FArchive(local_f8);
  FTransform::ToString(&local_48,param_2);
  return param_2;
}



// FUNCTION 1421818a0 FUN_1421818a0 body=187 status=ok
// SIG undefined FUN_1421818a0(void)

undefined8 * FUN_1421818a0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *local_28;
  int local_20;
  int local_1c;
  longlong local_18 [2];
  
  puVar2 = (undefined8 *)FUN_14167d0d0(local_18);
  local_28 = (undefined2 *)*puVar2;
  iVar1 = *(int *)(puVar2 + 1);
  *puVar2 = 0;
  local_20 = *(int *)(puVar2 + 1);
  local_1c = *(int *)((longlong)puVar2 + 0xc);
  puVar2[1] = 0;
  iVar4 = (9 - (uint)(iVar1 != 0)) + local_20;
  if (local_1c < iVar4) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28,iVar4,-iVar1);
  }
  FString::PathAppend(&local_28,L"GbxPerf",7);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  plVar3 = (longlong *)FUN_1415c3d50();
  puVar5 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar5 = local_28;
  }
  (**(code **)(*plVar3 + 0x58))(plVar3,puVar5,1);
  *param_2 = local_28;
  *(int *)(param_2 + 1) = local_20;
  *(int *)((longlong)param_2 + 0xc) = local_1c;
  return param_2;
}



// FUNCTION 142181960 FUN_142181960 body=121 status=ok
// SIG undefined FUN_142181960(void)

undefined8 * FUN_142181960(undefined8 param_1,undefined8 *param_2,char *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  char local_res18 [16];
  longlong lVar4;
  
  local_res18[0] = *param_3;
  *param_2 = 0;
  param_2[1] = 0;
  local_res18[1] = 0;
  if (local_res18[0] != '\0') {
    lVar4 = -1;
    do {
      lVar3 = lVar4 + 1;
      lVar1 = lVar4 + 1;
      lVar4 = lVar3;
    } while (local_res18[lVar1] != '\0');
    iVar2 = (int)lVar3 + 1;
    *(int *)(param_2 + 1) = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    }
    FGenericPlatformString::Convert<char,wchar_t>(*param_2,iVar2,local_res18,iVar2,0x3f);
  }
  return param_2;
}



// FUNCTION 1421819e0 FUN_1421819e0 body=284 status=ok
// SIG undefined FUN_1421819e0(void)

undefined8 FUN_1421819e0(undefined8 param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  double dVar6;
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  undefined8 local_28;
  
  local_28 = *(undefined8 *)(param_3 + 4);
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  FString::PrintfImpl(&local_38,L"X=%3.3f Y=%3.3f Z=%3.3f",(double)param_3[3],
                      (double)(float)local_28,(double)(float)((ulonglong)local_28 >> 0x20));
  puVar4 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar4 = local_38;
  }
  dVar6 = (double)fVar3;
  FString::PrintfImpl(&local_48,L"X=%3.3f Y=%3.3f Z=%3.3f",(double)fVar1,(double)fVar2,dVar6);
  puVar5 = &DAT_143f3eda8;
  if (local_40 != 0) {
    puVar5 = local_48;
  }
  FString::PrintfImpl(param_2,L"V1=(%s) V2=(%s)",puVar5,puVar4,dVar6);
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142181b00 FUN_142181b00 body=404 status=ok
// SIG undefined FUN_142181b00(void)

void FUN_142181b00(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  uVar6 = 0;
  puVar7 = *(undefined8 **)(*param_1 + 0xa0);
  uVar3 = (ulonglong)*(int *)(*param_1 + 0xa8);
  uVar8 = uVar3 & 0x1fffffffffffffff;
  if (puVar7 + uVar3 < puVar7) {
    uVar8 = uVar6;
  }
  if (uVar8 != 0) {
    do {
      piVar2 = (int *)*puVar7;
      if (*piVar2 != -1) {
        plVar4 = *(longlong **)(piVar2 + 0x2e);
        plVar5 = plVar4 + (longlong)piVar2[0x30] * 6;
        if (plVar4 != plVar5) {
          do {
            if ((*(longlong *)*plVar4 == *(longlong *)*param_2) &&
               (*(longlong *)(((longlong *)*plVar4)[1] + 0x28) ==
                *(longlong *)(((longlong *)*param_2)[1] + 0x28))) {
              plVar5 = (longlong *)param_2[4];
              if ((longlong *)param_2[4] == (longlong *)0x0) {
                plVar5 = param_2 + 1;
              }
              uStack_30 = (undefined4)param_2[5];
              local_58 = SUB84(plVar5,0);
              local_38 = local_58;
              uStack_54 = (undefined4)((ulonglong)plVar5 >> 0x20);
              uStack_34 = uStack_54;
              goto LAB_142181c27;
            }
            plVar4 = plVar4 + 6;
          } while (plVar4 != plVar5);
        }
      }
      iVar1 = piVar2[0x30];
      plVar4 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar4 = param_2 + 1;
      }
      uStack_30 = (undefined4)param_2[5];
      local_48 = SUB84(plVar4,0);
      uStack_44 = (undefined4)((ulonglong)plVar4 >> 0x20);
      local_38 = local_48;
      uStack_34 = uStack_44;
      piVar2[0x30] = iVar1 + 1;
      if (piVar2[0x31] < iVar1 + 1) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(piVar2 + 0x2e,iVar1);
      }
      plVar4 = (longlong *)((longlong)iVar1 * 0x30 + *(longlong *)(piVar2 + 0x2e));
      *plVar4 = *param_2;
      plVar4[1] = 0;
      plVar4[4] = 0;
      plVar4[5] = 0;
LAB_142181c27:
      FUN_142183b20(plVar4,&local_38);
      puVar7 = puVar7 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar8);
  }
  return;
}



// FUNCTION 142181ca0 FUN_142181ca0 body=145 status=ok
// SIG undefined FUN_142181ca0(void)

void FUN_142181ca0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_144fdd1a0;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[2] = lVar3;
  }
  cVar1 = FUN_142190080(param_2);
  if ((cVar1 != '\0') && (*(byte *)(param_2 + 0x40) < 2)) {
    cVar1 = (**(code **)(*plVar2 + 0x38))(plVar2,param_2);
    if (cVar1 != '\0') {
      *(undefined1 *)(param_2 + 0x40) = 2;
    }
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  return;
}



// FUNCTION 142181d40 FUN_142181d40 body=105 status=ok
// SIG undefined FUN_142181d40(void)

undefined8 FUN_142181d40(undefined8 param_1,undefined8 param_2,float *param_3)

{
  FString::PrintfImpl(param_2,L"(R=%f,G=%f,B=%f,A=%f)",(double)*param_3,(double)param_3[1],
                      (double)param_3[2],(double)param_3[3]);
  return param_2;
}



// FUNCTION 142181db0 FUN_142181db0 body=1998 status=ok
// SIG undefined FUN_142181db0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142181db0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  DWORD DVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int *piVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  longlong *plVar12;
  undefined2 *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  longlong *plVar21;
  longlong lVar22;
  undefined1 auStack_128 [32];
  char local_108;
  longlong *local_100;
  undefined8 local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [8];
  longlong *local_a8;
  longlong *local_a0;
  longlong local_98;
  int local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [8];
  undefined1 *local_48;
  uint local_40;
  ulonglong local_38;
  
  lVar22 = DAT_146aeb078;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_b8 = param_2;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    lVar7 = 4;
    if (DVar4 == DAT_1468c21c0) goto LAB_142181e15;
  }
  else {
LAB_142181e15:
    lVar7 = 0;
  }
  if (*(int *)(lVar22 + lVar7) == 1) {
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146aeae08) && (_Init_thread_header(&DAT_146aeae08), DAT_146aeae08 == -1))
  {
    if ((DAT_146aeaf28 == '\0') &&
       (puVar10 = (undefined8 *)FUN_14218ceb0(), puVar10 != &DAT_146aeaf20)) {
      DAT_146aeaf20 = *puVar10;
      DAT_146aeaf28 = '\x01';
    }
    _DAT_146aeae00 = DAT_146aeaf20;
    _Init_thread_footer(&DAT_146aeae08);
  }
  lVar22 = *param_3;
  plVar12 = *(longlong **)(lVar22 + 0xc0);
  if (*(longlong **)(lVar22 + 0xc0) == (longlong *)0x0) {
    plVar12 = (longlong *)(lVar22 + 0x20);
  }
  local_c0 = lVar22;
  cVar2 = FUN_14218fd90(*plVar12);
  if ((cVar2 == '\0') && (cVar2 = FUN_142184920(lVar22 + 0xe0,DAT_146aeb080,param_2), cVar2 == '\0')
     ) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  local_100 = (longlong *)0x0;
  local_f8 = 0;
  local_108 = cVar2;
  (**(code **)(*DAT_146aeb058 + 0x78))();
  if ((local_90 != 0) && (0 < local_90 + -1)) {
    FUN_141594550(&local_98,&local_100,&DAT_144042018,1);
  }
  iVar19 = -1;
  plVar12 = *(longlong **)(lVar22 + 0xc0);
  if (*(longlong **)(lVar22 + 0xc0) == (longlong *)0x0) {
    plVar12 = (longlong *)(lVar22 + 0x20);
  }
  local_f0 = plVar12 + (longlong)*(int *)(lVar22 + 200) * 5;
  local_d0 = plVar12;
  if (plVar12 != local_f0) {
    plVar14 = plVar12 + 1;
    do {
      lVar22 = *plVar12;
      local_d8 = plVar14;
      local_d0 = plVar12;
      cVar3 = FUN_142190080(lVar22);
      if (cVar3 == '\0') {
LAB_142182083:
        iVar11 = (int)local_f8;
      }
      else {
        local_c8 = 0xd3;
        if (*(longlong *)(lVar22 + 0x28) != 0xd3) {
          if ((*(int *)(lVar22 + 0x88) != 0) && (*(int *)(lVar22 + 0x88) != 1)) {
            iVar11 = *(int *)(lVar22 + 0x98) + -1;
            if (*(int *)(lVar22 + 0x98) == 0) {
              iVar11 = 0;
            }
            if (iVar11 != 0) goto LAB_142181f87;
          }
          goto LAB_142182083;
        }
LAB_142181f87:
        if ((cVar2 == '\0') &&
           (cVar2 = FUN_142184920(*plVar12 + 0x18,DAT_146aeb080,param_2), cVar2 == '\0'))
        goto LAB_142182083;
        plVar15 = (longlong *)plVar14[2];
        if ((longlong *)plVar14[2] == (longlong *)0x0) {
          plVar15 = plVar14;
        }
        local_e8 = plVar15 + (longlong)(int)plVar14[3] * 2;
        if (plVar15 == local_e8) goto LAB_142182083;
        iVar11 = (int)local_f8;
        do {
          plVar21 = (longlong *)*plVar15;
          plVar1 = plVar21 + (longlong)(int)plVar15[1] * 5;
          plVar14 = local_d8;
          plVar12 = local_d0;
          param_2 = local_b8;
          for (; local_d8 = plVar14, local_d0 = plVar12, local_b8 = param_2, plVar21 != plVar1;
              plVar21 = plVar21 + 5) {
            uVar16 = 0;
            uVar18 = uVar16;
            if (iVar11 < 1) {
LAB_142182048:
              iVar5 = *(int *)(*plVar21 + 0x18) + -1;
              if (*(int *)(*plVar21 + 0x18) == 0) {
                iVar5 = 0;
              }
              if (iVar19 <= iVar5) {
                iVar19 = iVar5;
              }
            }
            else {
              do {
                if (*(int *)((longlong)local_100 + uVar16 + 8) == 0) {
                  puVar13 = &DAT_143f3eda8;
                }
                else {
                  puVar13 = *(undefined2 **)((longlong)local_100 + uVar16);
                }
                cVar2 = FString::StartsWith(*plVar21 + 0x10,puVar13,1);
                iVar11 = (int)local_f8;
                if (cVar2 != '\0') goto LAB_142182048;
                uVar20 = (int)uVar18 + 1;
                uVar16 = uVar16 + 0x10;
                uVar18 = (ulonglong)uVar20;
              } while ((int)uVar20 < (int)local_f8);
            }
            plVar14 = local_d8;
            plVar12 = local_d0;
            param_2 = local_b8;
          }
          plVar15 = plVar15 + 2;
        } while (plVar15 != local_e8);
      }
      plVar12 = plVar12 + 5;
      plVar14 = plVar14 + 5;
      cVar2 = local_108;
    } while (plVar12 != local_f0);
    local_d8 = plVar14;
    local_d0 = plVar12;
    if (iVar19 < 1) goto LAB_142182499;
    plVar12 = *(longlong **)(local_c0 + 0xc0);
    if (*(longlong **)(local_c0 + 0xc0) == (longlong *)0x0) {
      plVar12 = (longlong *)(local_c0 + 0x20);
    }
    local_a0 = plVar12 + (longlong)*(int *)(local_c0 + 200) * 5;
    lVar22 = local_c0;
    local_e0 = plVar12;
    if (plVar12 == local_a0) goto LAB_142182499;
    do {
      iVar19 = 0;
      lVar7 = *plVar12;
      local_e0 = plVar12;
      cVar2 = FUN_142190080(lVar7);
      if (cVar2 != '\0') {
        local_f0 = (longlong *)0xd3;
        if (*(longlong *)(lVar7 + 0x28) == 0xd3) {
LAB_142182146:
          if (((local_108 != '\0') ||
              (cVar2 = FUN_142184920(*plVar12 + 0x18,DAT_146aeb080,param_2), cVar2 != '\0')) &&
             (0 < (int)plVar12[4])) {
            plVar14 = plVar12 + 1;
            local_e8 = (longlong *)0x0;
            local_a8 = plVar14;
            do {
              uVar18 = 0;
              plVar15 = (longlong *)plVar14[2];
              if ((longlong *)plVar14[2] == (longlong *)0x0) {
                plVar15 = plVar14;
              }
              plVar15 = (longlong *)((longlong)plVar15 + (longlong)local_e8);
              if ((int)plVar15[1] != 0) {
                local_5c = 0;
                local_88 = 0;
                local_80 = 0;
                local_68 = 0;
                local_60 = 0;
                local_58 = 0xffffffff;
                local_54 = 0;
                local_48 = (undefined1 *)0x0;
                local_40 = 0;
                uVar20 = *(int *)(lVar22 + 0xd8) + (int)plVar15[1];
                uVar16 = uVar18;
                if (uVar20 != 0) {
                  TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_88,uVar20);
                  uVar16 = (ulonglong)local_40;
                }
                local_58 = 0xffffffff;
                local_54 = 0;
                local_60 = 0;
                uVar6 = uVar20 + 0x1f + ((int)(uVar20 + 0x1f) >> 0x1f & 0x1fU) & 0xffffffe0;
                if (local_5c != uVar6) {
                  local_5c = uVar6;
                  TBitArray<FDefaultBitArrayAllocator>::Realloc(local_78,0);
                  uVar16 = (ulonglong)local_40;
                }
                if (uVar20 < 4) {
                  uVar6 = 1;
                }
                else {
                  uVar6 = (uVar20 >> 1) + 8;
                  iVar11 = 0x1f;
                  if (uVar6 != 0) {
                    for (; uVar6 >> iVar11 == 0; iVar11 = iVar11 + -1) {
                    }
                  }
                  if (uVar6 == 0) {
                    iVar11 = 0x20;
                  }
                  else {
                    iVar11 = 0x1f - iVar11;
                  }
                  uVar6 = (uVar20 >> 1) + 7;
                  iVar5 = 0x1f;
                  if (uVar6 != 0) {
                    for (; uVar6 >> iVar5 == 0; iVar5 = iVar5 + -1) {
                    }
                  }
                  if (uVar6 == 0) {
                    cVar2 = '\0';
                  }
                  else {
                    cVar2 = '\x1f' - (char)iVar5;
                  }
                  uVar6 = 1 << (~(byte)((iVar11 << 0x1a) >> 0x1f) & 0x20U - cVar2 & 0x1f);
                }
                iVar11 = (int)uVar16;
                if (((int)uVar20 < 1) ||
                   (((iVar11 != 0 && ((int)uVar6 <= iVar11)) && (iVar11 <= (int)uVar6)))) {
                  uVar17 = uVar16;
                  if (0 < iVar11) {
                    while( true ) {
                      uVar16 = (longlong)((int)uVar16 + -1) & uVar18;
                      puVar9 = local_50;
                      if (local_48 != (undefined1 *)0x0) {
                        puVar9 = local_48;
                      }
                      uVar18 = uVar18 + 1;
                      *(undefined4 *)(puVar9 + uVar16 * 4) = 0xffffffff;
                      if (uVar17 - 1 == 0) break;
                      uVar16 = (ulonglong)local_40;
                      uVar17 = uVar17 - 1;
                    }
                  }
                }
                else {
                  local_40 = uVar6;
                  FUN_1412a8360(&local_88);
                }
                plVar14 = (longlong *)*plVar15;
                uVar18 = 0;
                plVar12 = plVar14 + (longlong)(int)plVar15[1] * 5;
                for (; plVar14 != plVar12; plVar14 = plVar14 + 5) {
                  piVar8 = (int *)FUN_14218b2e0(&local_88,local_b0,plVar14);
                  if (*piVar8 == -1) {
                    FUN_141288240(&local_88,&local_d8,plVar14,0);
                    lVar22 = *plVar14;
                    uVar16 = uVar18;
                    uVar17 = uVar18;
                    if (0 < (int)local_f8) {
                      do {
                        if (*(int *)((longlong)local_100 + uVar17 + 8) == 0) {
                          puVar13 = &DAT_143f3eda8;
                        }
                        else {
                          puVar13 = *(undefined2 **)((longlong)local_100 + uVar17);
                        }
                        cVar2 = FString::StartsWith(lVar22 + 0x10,puVar13,1);
                        if (cVar2 != '\0') break;
                        uVar20 = (int)uVar16 + 1;
                        uVar16 = (ulonglong)uVar20;
                        uVar17 = uVar17 + 0x10;
                      } while ((int)uVar20 < (int)local_f8);
                    }
                  }
                  lVar22 = local_c0;
                }
                plVar14 = *(longlong **)(lVar22 + 0xd0);
                plVar12 = plVar14 + (longlong)*(int *)(lVar22 + 0xd8) * 5;
                for (; plVar14 != plVar12; plVar14 = plVar14 + 5) {
                  piVar8 = (int *)FUN_14218b2e0(&local_88,&local_d0,plVar14);
                  if (*piVar8 == -1) {
                    FUN_141288240(&local_88,&local_c8,plVar14,0);
                    lVar22 = *plVar14;
                    uVar16 = uVar18;
                    uVar17 = uVar18;
                    if (0 < (int)local_f8) {
                      do {
                        if (*(int *)((longlong)local_100 + uVar17 + 8) == 0) {
                          puVar13 = &DAT_143f3eda8;
                        }
                        else {
                          puVar13 = *(undefined2 **)((longlong)local_100 + uVar17);
                        }
                        cVar2 = FString::StartsWith(lVar22 + 0x10,puVar13,1);
                        if (cVar2 != '\0') break;
                        uVar20 = (int)uVar16 + 1;
                        uVar16 = (ulonglong)uVar20;
                        uVar17 = uVar17 + 0x10;
                      } while ((int)uVar20 < (int)local_f8);
                    }
                  }
                  lVar22 = local_c0;
                }
                local_40 = 0;
                if (local_48 != (undefined1 *)0x0) {
                  FMemory::Free(local_48);
                }
                TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                          (&local_88);
                plVar14 = local_a8;
                plVar12 = local_e0;
              }
              local_e8 = local_e8 + 2;
              iVar19 = iVar19 + 1;
              param_2 = local_b8;
            } while (iVar19 < (int)plVar12[4]);
          }
        }
        else if ((*(int *)(lVar7 + 0x88) != 0) && (*(int *)(lVar7 + 0x88) != 1)) {
          iVar11 = *(int *)(lVar7 + 0x98) + -1;
          if (*(int *)(lVar7 + 0x98) == 0) {
            iVar11 = 0;
          }
          if (iVar11 != 0) goto LAB_142182146;
        }
      }
      plVar12 = plVar12 + 5;
      local_e0 = plVar12;
    } while (plVar12 != local_a0);
  }
  iVar11 = (int)local_f8;
LAB_142182499:
  plVar12 = local_100;
  if (local_98 != 0) {
    FMemory::Free();
    iVar11 = (int)local_f8;
    plVar12 = local_100;
  }
  for (; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_100 != (longlong *)0x0) {
    FMemory::Free(local_100);
  }
  return;
}



// FUNCTION 142182580 FUN_142182580 body=105 status=ok
// SIG undefined FUN_142182580(void)

undefined8 FUN_142182580(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined2 *puVar4;
  
  lVar1 = *param_1;
  lVar2 = *(longlong *)(param_2 + 0x18);
  if ((lVar2 == 0) || (lVar2 == *(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x28))) {
    if ((*(int *)(param_2 + 0x28) == 0) || (*(int *)(param_2 + 0x28) == 1)) {
      return 0;
    }
    if (lVar2 == *(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x28)) {
      if (*(int *)(lVar1 + 0x40) == 0) {
        puVar4 = &DAT_143f3eda8;
      }
      else {
        puVar4 = *(undefined2 **)(lVar1 + 0x38);
      }
      iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>
                        (*(undefined8 *)(param_2 + 0x20),puVar4);
      if (iVar3 == 0) {
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 1421825f0 FUN_1421825f0 body=167 status=ok
// SIG undefined FUN_1421825f0(void)

undefined8 FUN_1421825f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **local_f8 [18];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_48 [64];
  
  FArchive::FArchive(local_f8);
  local_68 = 0;
  local_f8[0] = &PTR_FUN_143f4a3a0;
  local_58 = 0x7fffffffffffffff;
  local_60 = param_3;
  FArchive::SetIsLoading(local_f8,1);
  FArchive::SetIsPersistent(local_f8,1);
  FUN_1408bd530(local_f8,local_48);
  FArchive::~FArchive(local_f8);
  FMatrix::ToString(local_48,param_2);
  return param_2;
}



// FUNCTION 1421826a0 FUN_1421826a0 body=126 status=ok
// SIG undefined FUN_1421826a0(void)

undefined8 FUN_1421826a0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  
  psVar3 = (short *)0x0;
  psVar1 = (short *)FUN_14218bef0(*(undefined2 *)(param_3 + 0x18));
  if ((*psVar1 != 0) && (*(int *)(psVar1 + 0x50) != 0)) {
    psVar2 = psVar3;
    if (*(longlong *)(psVar1 + 0x48) == 0) {
      psVar2 = psVar1 + 0x38;
    }
    if (psVar2 != (short *)0x0 || *(longlong *)(psVar1 + 0x48) != 0) {
      psVar3 = (short *)FUN_142182720(psVar1 + 0x30,param_3);
    }
  }
  FString::PrintfImpl(param_2,L"0x%016llx",psVar3);
  return param_2;
}



// FUNCTION 142182720 FUN_142182720 body=79 status=ok
// SIG undefined FUN_142182720(void)

void FUN_142182720(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    plVar2 = (longlong *)param_1[6];
    if ((longlong *)param_1[6] == (longlong *)0x0) {
      plVar2 = param_1 + 2;
    }
    if (plVar2 != (longlong *)0x0) {
      uVar1 = (**(code **)(*plVar2 + 8))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014218276c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)(uVar1,param_2);
  return;
}



// FUNCTION 142182770 operator() body=590 status=ok
// SIG undefined operator()(void)

ulonglong std::
          _Rng_from_urng<unsigned_int,std::mersenne_twister_engine<unsigned_int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>_>
          ::operator()(undefined8 *param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  char cVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  
  do {
    uVar7 = 0;
    uVar6 = 0;
    if (param_2 != 1) {
      uVar9 = param_1[1];
      do {
        cVar3 = (char)uVar9;
        do {
          puVar2 = (uint *)*param_1;
          uVar8 = *puVar2;
          if (uVar8 == 0x270) {
            lVar10 = 0x270;
            puVar4 = puVar2 + 2;
            do {
              uVar8 = (puVar4[-1] ^ *puVar4) & 0x7fffffff ^ puVar4[-1];
              puVar4[0x26f] = -(uint)((uVar8 & 1) != 0) & 0x9908b0df ^ puVar4[0x18c] ^ uVar8 >> 1;
              lVar10 = lVar10 + -1;
              puVar4 = puVar4 + 1;
            } while (lVar10 != 0);
            uVar8 = *puVar2;
          }
          else if (0x4df < uVar8) {
            lVar10 = 0xe3;
            uVar8 = puVar2[0x271];
            puVar4 = puVar2 + 0x271;
            do {
              puVar1 = puVar4 + 1;
              uVar5 = (uVar8 ^ *puVar1) & 0x7fffffff ^ uVar8;
              uVar8 = *puVar1;
              puVar4[-0x270] = -(uint)((uVar5 & 1) != 0) & 0x9908b0df ^ puVar4[0x18d] ^ uVar5 >> 1;
              lVar10 = lVar10 + -1;
              puVar4 = puVar1;
            } while (lVar10 != 0);
            lVar10 = 0x18c;
            uVar8 = puVar2[0x354];
            puVar4 = puVar2 + 0x354;
            do {
              puVar1 = puVar4 + 1;
              uVar5 = (uVar8 ^ *puVar1) & 0x7fffffff ^ uVar8;
              uVar8 = *puVar1;
              puVar4[-0x270] = -(uint)((uVar5 & 1) != 0) & 0x9908b0df ^ puVar4[-0x353] ^ uVar5 >> 1;
              lVar10 = lVar10 + -1;
              puVar4 = puVar1;
            } while (lVar10 != 0);
            uVar8 = (puVar2[0x4e0] ^ puVar2[1]) & 0x7fffffff ^ puVar2[0x4e0];
            puVar2[0x270] = -(uint)((uVar8 & 1) != 0) & 0x9908b0df ^ puVar2[0x18d] ^ uVar8 >> 1;
            uVar8 = 0;
            *puVar2 = 0;
          }
          uVar5 = puVar2[(ulonglong)uVar8 + 1];
          *puVar2 = uVar8 + 1;
          uVar5 = uVar5 ^ puVar2[0x4e1] & uVar5 >> 0xb;
          uVar5 = uVar5 ^ (uVar5 & 0xff3a58ad) << 7;
          uVar5 = uVar5 ^ (uVar5 & 0xffffdf8c) << 0xf;
          uVar5 = uVar5 >> 0x12 ^ uVar5;
        } while (*(uint *)(param_1 + 2) < uVar5);
        uVar9 = param_1[1];
        uVar7 = (uVar7 << (cVar3 - 1U & 0x1f)) * 2 | uVar5;
        uVar6 = (uVar6 << ((char)uVar9 - 1U & 0x1f)) * 2 | *(uint *)(param_1 + 2);
      } while (uVar6 < param_2 - 1);
    }
  } while ((uVar6 / param_2 <= uVar7 / param_2) && (uVar6 % param_2 != param_2 - 1));
  return (ulonglong)uVar7 % (ulonglong)param_2;
}



// FUNCTION 1421829c0 FUN_1421829c0 body=52 status=ok
// SIG undefined FUN_1421829c0(void)

undefined8 FUN_1421829c0(undefined8 param_1,ulonglong param_2)

{
  FUN_14217e850();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 142182a00 FUN_142182a00 body=43 status=ok
// SIG undefined FUN_142182a00(void)

undefined8 * FUN_142182a00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f74308;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 142182a30 FUN_142182a30 body=63 status=ok
// SIG undefined FUN_142182a30(void)

undefined8 * FUN_142182a30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144fdca70;
  if (*(char *)((longlong)param_1 + 0x14) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  }
  *param_1 = &PTR_FUN_143f74308;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 142182a70 FUN_142182a70 body=138 status=ok
// SIG undefined FUN_142182a70(void)

undefined8 * FUN_142182a70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144fdcc98;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 2,0);
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143f74308;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 142182b00 `scalar_deleting_destructor' body=108 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FSocketSubsystemModule::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144fdcc68;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 2);
  *param_1 = &PTR_FUN_143f74308;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 142182b70 FUN_142182b70 body=43 status=ok
// SIG undefined FUN_142182b70(void)

undefined8 * FUN_142182b70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 142182ba0 `scalar_deleting_destructor' body=72 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
`anonymous_namespace'::GraniteTextureD3D12::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 142182bf0 FUN_142182bf0 body=101 status=ok
// SIG undefined FUN_142182bf0(void)

undefined8 * FUN_142182bf0(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1[1];
  *param_1 = &PTR_FUN_144fdcaf8;
  if (lVar1 != 0) {
    uVar2 = FUN_14218be80();
    FUN_142195170(uVar2,lVar1);
    param_1[1] = 0;
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 142182c60 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FGlobalShader::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14217f0c0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 142182ca0 FUN_142182ca0 body=52 status=ok
// SIG undefined FUN_142182ca0(void)

undefined8 FUN_142182ca0(undefined8 param_1,ulonglong param_2)

{
  FUN_14217f170();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 142182ce0 FUN_142182ce0 body=52 status=ok
// SIG undefined FUN_142182ce0(void)

undefined8 FUN_142182ce0(undefined8 param_1,ulonglong param_2)

{
  FUN_14217f210();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 142182d20 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FVoxelGlobalDebugManager::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FTickerObjectBase::~FTickerObjectBase();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 142182d60 FUN_142182d60 body=304 status=ok
// SIG undefined FUN_142182d60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_142182d60(int *param_1,float param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  
  *param_1 = *param_1 + 1;
  piVar4 = param_1 + 2;
  param_1[1] = (int)(param_2 + (float)param_1[1]);
  piVar6 = *(int **)(param_1 + 6);
  if (*(int **)(param_1 + 6) == (int *)0x0) {
    piVar6 = piVar4;
  }
  piVar7 = piVar6 + (longlong)param_1[8] * 4;
  if (piVar6 != piVar7) {
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    do {
      if ((*(int *)(lVar2 + 0x38) < DAT_146aeb4b0) &&
         (_Init_thread_header(&DAT_146aeb4b0), DAT_146aeb4b0 == -1)) {
        DAT_146aeb4a0 = (int *)0x0;
        _DAT_146aeb4a8 = 0;
        atexit((_func_5014 *)&LAB_143ea7430);
        _Init_thread_footer(&DAT_146aeb4b0);
      }
      cVar1 = (char)*piVar6;
      uVar5 = (uint)cVar1;
      piVar4 = (int *)(ulonglong)uVar5;
      if (((-1 < cVar1) && ((int)uVar5 < DAT_146aeb4a8)) &&
         (plVar3 = *(longlong **)(DAT_146aeb4a0 + (longlong)cVar1 * 2), piVar4 = DAT_146aeb4a0,
         plVar3 != (longlong *)0x0)) {
        piVar4 = (int *)(**(code **)(*plVar3 + 0x18))(plVar3,param_2,piVar6,param_1,param_3);
      }
      piVar6 = piVar6 + 4;
    } while (piVar6 != piVar7);
  }
  return piVar4;
}



// FUNCTION 142182e90 FUN_142182e90 body=258 status=ok
// SIG undefined FUN_142182e90(void)

void FUN_142182e90(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  char cVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 local_res8;
  
  if ((((*(byte *)(param_1 + 0x58) & 4) != 0) && ((*(byte *)(param_1 + 0x58) & 2) != 0)) &&
     (DAT_146aeae14 != '\0')) {
    local_res8 = 0;
    if (*(longlong *)*param_3 != 0) {
      cVar1 = FUN_1407ce010((longlong *)*param_3 + 1);
      if (cVar1 != '\0') {
        local_res8 = CONCAT44(local_res8._4_4_,*param_2);
        piVar2 = (int *)FUN_14218b3a0(param_1,&local_res8);
        if ((piVar2 != (int *)0x0) && (*piVar2 != -1)) {
          plVar3 = *(longlong **)(piVar2 + 0x2e);
          plVar4 = plVar3 + (longlong)piVar2[0x30] * 6;
          if (plVar3 != plVar4) {
            while ((*(longlong *)*plVar3 != *(longlong *)*param_3 ||
                   (*(longlong *)(((longlong *)*plVar3)[1] + 0x28) !=
                    *(longlong *)(((longlong *)*param_3)[1] + 0x28)))) {
              plVar3 = plVar3 + 6;
              if (plVar3 == plVar4) {
                return;
              }
            }
            FUN_142182d60(plVar3 + 1,0x3f800000,piVar2);
            piVar2[0x26] = piVar2[0x26] | 0x40000000;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142182fa0 FUN_142182fa0 body=127 status=ok
// SIG undefined FUN_142182fa0(void)

void FUN_142182fa0(int *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*param_1 != -1) {
    plVar1 = *(longlong **)(param_1 + 0x2e);
    plVar2 = plVar1 + (longlong)param_1[0x30] * 6;
    if (plVar1 != plVar2) {
      while ((*(longlong *)*plVar1 != *(longlong *)*param_2 ||
             (*(longlong *)(((longlong *)*plVar1)[1] + 0x28) !=
              *(longlong *)(((longlong *)*param_2)[1] + 0x28)))) {
        plVar1 = plVar1 + 6;
        if (plVar1 == plVar2) {
          return;
        }
      }
      FUN_142182d60(plVar1 + 1,0x3f800000,param_1);
      param_1[0x26] = param_1[0x26] | 0x40000000;
    }
  }
  return;
}



// FUNCTION 142183020 FUN_142183020 body=259 status=ok
// SIG undefined FUN_142183020(void)

void FUN_142183020(longlong param_1,undefined4 *param_2,longlong *param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 local_res8;
  
  if ((((*(byte *)(param_1 + 0x58) & 4) != 0) && ((*(byte *)(param_1 + 0x58) & 2) != 0)) &&
     (DAT_146aeae14 != '\0')) {
    local_res8 = 0;
    if ((*(longlong *)*param_3 != 0) &&
       (cVar1 = FUN_1407ce010((longlong *)*param_3 + 1), cVar1 != '\0')) {
      local_res8 = CONCAT44(local_res8._4_4_,*param_2);
      piVar2 = (int *)FUN_14218b3a0(param_1,&local_res8);
      if ((piVar2 != (int *)0x0) && (*piVar2 != -1)) {
        plVar3 = *(longlong **)(piVar2 + 0x2e);
        plVar4 = plVar3 + (longlong)piVar2[0x30] * 6;
        if (plVar3 != plVar4) {
          do {
            if ((*(longlong *)*plVar3 == *(longlong *)*param_3) &&
               (*(longlong *)(((longlong *)*plVar3)[1] + 0x28) ==
                *(longlong *)(((longlong *)*param_3)[1] + 0x28))) {
              FUN_142182d60(plVar3 + 1,param_4,piVar2);
              piVar2[0x26] = piVar2[0x26] | 0x40000000;
              return;
            }
            plVar3 = plVar3 + 6;
          } while (plVar3 != plVar4);
        }
      }
    }
  }
  return;
}



// FUNCTION 142183130 FUN_142183130 body=122 status=ok
// SIG undefined FUN_142183130(void)

void FUN_142183130(int *param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*param_1 != -1) {
    plVar1 = *(longlong **)(param_1 + 0x2e);
    plVar2 = plVar1 + (longlong)param_1[0x30] * 6;
    if (plVar1 != plVar2) {
      while ((*(longlong *)*plVar1 != *(longlong *)*param_2 ||
             (*(longlong *)(((longlong *)*plVar1)[1] + 0x28) !=
              *(longlong *)(((longlong *)*param_2)[1] + 0x28)))) {
        plVar1 = plVar1 + 6;
        if (plVar1 == plVar2) {
          return;
        }
      }
      FUN_142182d60(plVar1 + 1,param_3,param_1);
      param_1[0x26] = param_1[0x26] | 0x40000000;
    }
  }
  return;
}



// FUNCTION 1421831b0 FUN_1421831b0 body=505 status=ok
// SIG undefined FUN_1421831b0(void)

uint FUN_1421831b0(longlong *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  
  uVar1 = *(uint *)(param_1 + 2);
  if (0 < (int)param_2) {
    uVar6 = (ulonglong)param_2;
    uVar4 = uVar1;
    do {
      uVar4 = uVar4 & 0x80000003;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
      }
      if (uVar4 == 0) {
        uVar5 = FMemory::Malloc(0x400,0);
        iVar2 = (int)param_1[1];
        *(int *)(param_1 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
        }
        *(undefined8 *)((longlong)iVar2 * 8 + *param_1) = uVar5;
        puVar3 = *(undefined2 **)((longlong)iVar2 * 8 + *param_1);
        if (puVar3 != (undefined2 *)0x0) {
          *puVar3 = 0;
          *(undefined8 *)(puVar3 + 0x20) = 0;
          *(undefined4 *)(puVar3 + 0x28) = 0;
          *(code **)(puVar3 + 8) = FString::FString;
          *(undefined8 *)(puVar3 + 0x48) = 0;
          *(undefined4 *)(puVar3 + 0x50) = 0;
          *(code **)(puVar3 + 0x30) = FHardwareCursor::GetHandle;
          *(undefined8 *)(puVar3 + 0x70) = 0;
          *(undefined4 *)(puVar3 + 0x78) = 0;
          *(undefined1 **)(puVar3 + 0x58) = &LAB_14202be10;
          puVar3[0x80] = 0;
          *(undefined8 *)(puVar3 + 0xa0) = 0;
          *(undefined4 *)(puVar3 + 0xa8) = 0;
          *(code **)(puVar3 + 0x88) = FString::FString;
          *(undefined8 *)(puVar3 + 200) = 0;
          *(undefined4 *)(puVar3 + 0xd0) = 0;
          *(code **)(puVar3 + 0xb0) = FHardwareCursor::GetHandle;
          *(undefined8 *)(puVar3 + 0xf0) = 0;
          *(undefined4 *)(puVar3 + 0xf8) = 0;
          *(undefined1 **)(puVar3 + 0xd8) = &LAB_14202be10;
          puVar3[0x100] = 0;
          *(undefined8 *)(puVar3 + 0x120) = 0;
          *(undefined4 *)(puVar3 + 0x128) = 0;
          *(code **)(puVar3 + 0x108) = FString::FString;
          *(undefined8 *)(puVar3 + 0x148) = 0;
          *(undefined4 *)(puVar3 + 0x150) = 0;
          *(code **)(puVar3 + 0x130) = FHardwareCursor::GetHandle;
          *(undefined8 *)(puVar3 + 0x170) = 0;
          *(undefined4 *)(puVar3 + 0x178) = 0;
          *(undefined1 **)(puVar3 + 0x158) = &LAB_14202be10;
          puVar3[0x180] = 0;
          *(undefined8 *)(puVar3 + 0x1a0) = 0;
          *(undefined4 *)(puVar3 + 0x1a8) = 0;
          *(code **)(puVar3 + 0x188) = FString::FString;
          *(undefined8 *)(puVar3 + 0x1c8) = 0;
          *(undefined4 *)(puVar3 + 0x1d0) = 0;
          *(code **)(puVar3 + 0x1b0) = FHardwareCursor::GetHandle;
          *(undefined8 *)(puVar3 + 0x1f0) = 0;
          *(undefined4 *)(puVar3 + 0x1f8) = 0;
          *(undefined1 **)(puVar3 + 0x1d8) = &LAB_14202be10;
        }
      }
      *(int *)(param_1 + 2) = (int)param_1[2] + 1;
      uVar4 = *(uint *)(param_1 + 2);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return uVar1;
}



// FUNCTION 1421833b0 FUN_1421833b0 body=583 status=ok
// SIG undefined FUN_1421833b0(void)

int FUN_1421833b0(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar2 = (int)param_1[2];
  if ((int)param_2 < 1) {
    return iVar2;
  }
  uVar7 = (ulonglong)param_2;
  plVar1 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar5 = iVar2;
  do {
    if (iVar5 == (iVar5 / 3 + (iVar5 >> 0x1f) +
                 (int)(((longlong)iVar5 / 3 + ((longlong)iVar5 >> 0x3f) & 0xffffffffU) >> 0x1f)) * 3
       ) {
      uVar4 = FMemory::Malloc(0x360,0);
      iVar5 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar5 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar5);
      }
      *(undefined8 *)((longlong)iVar5 * 8 + *param_1) = uVar4;
      lVar6 = *(longlong *)((longlong)iVar5 * 8 + *param_1);
      if (lVar6 != 0) {
        lVar3 = *plVar1;
        lVar6 = lVar6 + 0x14;
        lVar8 = 3;
        do {
          *(undefined8 *)(lVar6 + -0xc) = 0;
          lVar8 = lVar8 + -1;
          *(undefined8 *)(lVar6 + -4) = 0;
          *(undefined ***)(lVar6 + -0x14) = &PTR_FUN_144fdcb78;
          *(undefined8 *)(lVar6 + 4) = 0;
          *(undefined8 *)(lVar6 + 0xc) = 0;
          *(undefined8 *)(lVar6 + 0x14) = 2;
          if ((*(int *)(lVar3 + 0x38) < DAT_146aeb930) &&
             (_Init_thread_header(&DAT_146aeb930), DAT_146aeb930 == -1)) {
            FUN_14217c030(&DAT_146aeb870);
            atexit((_func_5014 *)&LAB_143ea70e0);
            _Init_thread_footer(&DAT_146aeb930);
          }
          *(undefined **)(lVar6 + 0x1c) = &DAT_146aeb870;
          *(undefined8 *)(lVar6 + 0x24) = 0;
          *(undefined8 *)(lVar6 + 0x2c) = 0;
          FUN_14217bd20(lVar6 + 0x34);
          FUN_14217bd20(lVar6 + 0x3c);
          *(byte *)(lVar6 + 0x44) = *(byte *)(lVar6 + 0x44) & 0xf0;
          *(undefined8 *)(lVar6 + 0x4c) = 0;
          *(undefined8 *)(lVar6 + 0x54) = 0;
          *(undefined8 *)(lVar6 + 0x5c) = 0;
          *(undefined8 *)(lVar6 + 100) = 0;
          *(undefined8 *)(lVar6 + 0x6c) = 0;
          *(undefined1 *)(lVar6 + 0x75) = 0;
          *(undefined8 *)(lVar6 + 0x7c) = 0;
          *(undefined8 *)(lVar6 + 0x84) = 0;
          *(undefined8 *)(lVar6 + 0x8c) = 0;
          *(undefined8 *)(lVar6 + 0x94) = 0;
          *(undefined8 *)(lVar6 + 0x9c) = 0;
          *(undefined8 *)(lVar6 + 0xa4) = 0;
          *(undefined8 *)(lVar6 + 0xdc) = 0;
          *(undefined8 *)(lVar6 + 0xe4) = 0;
          *(undefined8 *)(lVar6 + 0xec) = 0;
          *(undefined8 *)(lVar6 + 0xf4) = 0;
          *(undefined8 *)(lVar6 + 0xfc) = 0;
          *(undefined8 *)(lVar6 + 0x104) = 0;
          lVar6 = lVar6 + 0x120;
        } while (lVar8 != 0);
      }
    }
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
    iVar5 = (int)param_1[2];
    uVar7 = uVar7 - 1;
  } while (uVar7 != 0);
  return iVar2;
}



// FUNCTION 142183600 FUN_142183600 body=486 status=ok
// SIG undefined FUN_142183600(void)

int FUN_142183600(longlong *param_1,uint param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  lVar2 = param_1[2];
  if (0 < (int)param_2) {
    uVar5 = (ulonglong)param_2;
    iVar4 = (int)lVar2;
    do {
      if (iVar4 == (iVar4 / 10) * 10) {
        uVar3 = FMemory::Malloc(0x3c0,0);
        iVar4 = (int)param_1[1];
        *(int *)(param_1 + 1) = iVar4 + 1;
        if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
        }
        *(undefined8 *)((longlong)iVar4 * 8 + *param_1) = uVar3;
        puVar1 = *(undefined8 **)((longlong)iVar4 * 8 + *param_1);
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = 0;
          puVar1[8] = 0;
          *(undefined4 *)(puVar1 + 10) = 0;
          puVar1[2] = FUN_1407c3030;
          puVar1[0xc] = 0;
          puVar1[0x14] = 0;
          *(undefined4 *)(puVar1 + 0x16) = 0;
          puVar1[0xe] = FUN_1407c3030;
          puVar1[0x18] = 0;
          puVar1[0x20] = 0;
          *(undefined4 *)(puVar1 + 0x22) = 0;
          puVar1[0x1a] = FUN_1407c3030;
          puVar1[0x24] = 0;
          puVar1[0x2c] = 0;
          *(undefined4 *)(puVar1 + 0x2e) = 0;
          puVar1[0x26] = FUN_1407c3030;
          puVar1[0x30] = 0;
          puVar1[0x38] = 0;
          *(undefined4 *)(puVar1 + 0x3a) = 0;
          puVar1[0x32] = FUN_1407c3030;
          puVar1[0x3c] = 0;
          puVar1[0x44] = 0;
          *(undefined4 *)(puVar1 + 0x46) = 0;
          puVar1[0x3e] = FUN_1407c3030;
          puVar1[0x48] = 0;
          puVar1[0x50] = 0;
          *(undefined4 *)(puVar1 + 0x52) = 0;
          puVar1[0x4a] = FUN_1407c3030;
          puVar1[0x54] = 0;
          puVar1[0x5c] = 0;
          *(undefined4 *)(puVar1 + 0x5e) = 0;
          puVar1[0x56] = FUN_1407c3030;
          puVar1[0x60] = 0;
          puVar1[0x68] = 0;
          *(undefined4 *)(puVar1 + 0x6a) = 0;
          puVar1[0x62] = FUN_1407c3030;
          puVar1[0x6c] = 0;
          puVar1[0x74] = 0;
          *(undefined4 *)(puVar1 + 0x76) = 0;
          puVar1[0x6e] = FUN_1407c3030;
        }
      }
      *(int *)(param_1 + 2) = (int)param_1[2] + 1;
      iVar4 = (int)param_1[2];
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return (int)lVar2;
}



// FUNCTION 1421837f0 FUN_1421837f0 body=433 status=ok
// SIG undefined FUN_1421837f0(void)

longlong FUN_1421837f0(longlong param_1,longlong param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined8 local_res8;
  longlong local_res10;
  undefined2 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  int local_28;
  undefined4 uStack_24;
  
  lVar8 = *(longlong *)(param_1 + 0x50);
  lVar5 = *(longlong *)(lVar8 + 0x20);
  if (*(longlong *)(lVar8 + 0x20) == 0) {
    lVar5 = lVar8 + 8;
  }
  lVar8 = lVar5 + (longlong)*(int *)(lVar8 + 0x28) * 0x18;
  while( true ) {
    if (lVar5 == lVar8) {
      local_48 = (undefined2 *)0x0;
      local_40 = 0;
      local_res10 = param_2;
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48,0x81);
      uVar4 = local_40;
      iVar2 = (int)local_40;
      lVar8 = (longlong)(int)local_40;
      iVar7 = (2 - (uint)((int)local_40 != 0)) + (int)local_40;
      local_40 = CONCAT44(local_40._4_4_,iVar7);
      if (local_40._4_4_ < iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,uVar4 & 0xffffffff);
      }
      local_48[lVar8 - (ulonglong)(iVar2 != 0)] = 0x5f;
      (local_48 + (lVar8 - (ulonglong)(iVar2 != 0)))[1] = 0;
      FName::AppendString(&local_res10,&local_48);
      plVar3 = *(longlong **)(param_1 + 0x50);
      puVar9 = &DAT_143f3eda8;
      if ((int)local_40 != 0) {
        puVar9 = local_48;
      }
      FUN_14217bd20(&local_38);
      plVar3 = (longlong *)*plVar3;
      local_res8 = 0;
      if (*plVar3 != 0) {
        puVar6 = (undefined8 *)FUN_14218a4d0(plVar3[1],&local_res8,plVar3,puVar9);
        local_38 = *puVar6;
      }
      lVar8 = *(longlong *)(param_1 + 0x50);
      uStack_30 = local_res10;
      iVar2 = *(int *)(lVar8 + 0x28);
      *(int *)(lVar8 + 0x28) = iVar2 + 1;
      local_28 = param_3;
      if (*(int *)(lVar8 + 0x2c) < iVar2 + 1) {
        FUN_142193d90(lVar8 + 8,iVar2);
      }
      lVar5 = *(longlong *)(lVar8 + 0x20);
      if (*(longlong *)(lVar8 + 0x20) == 0) {
        lVar5 = lVar8 + 8;
      }
      puVar1 = (undefined4 *)(lVar5 + (longlong)iVar2 * 0x18);
      *puVar1 = (undefined4)local_38;
      puVar1[1] = local_38._4_4_;
      puVar1[2] = (undefined4)uStack_30;
      puVar1[3] = uStack_30._4_4_;
      *(ulonglong *)(lVar5 + 0x10 + (longlong)iVar2 * 0x18) = CONCAT44(uStack_24,local_28);
      *(undefined1 *)(param_1 + 0x58) = 1;
      if (local_48 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      return param_1;
    }
    if ((*(longlong *)(lVar5 + 8) == param_2) && (*(int *)(lVar5 + 0x10) == param_3)) break;
    lVar5 = lVar5 + 0x18;
  }
  return param_1;
}



// FUNCTION 1421839b0 FUN_1421839b0 body=218 status=ok
// SIG undefined FUN_1421839b0(void)

undefined8 * FUN_1421839b0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar4 = param_3[1];
  *param_2 = 0;
  if (((int)lVar4 != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*(longlong *)*param_3 + 0x18))();
    if (cVar2 != '\0') {
      uVar3 = FDelegateHandle::GenerateNewID();
      *param_2 = uVar3;
      iVar1 = *(int *)(param_1 + 0xf8);
      *(int *)(param_1 + 0xf8) = iVar1 + 1;
      if (*(int *)(param_1 + 0xfc) < iVar1 + 1) {
        TArray<FCompactPose,TInlineAllocator<2,FDefaultAllocator>_>::ResizeGrow(param_1 + 0xc0);
      }
      lVar4 = *(longlong *)(param_1 + 0xf0);
      if (*(longlong *)(param_1 + 0xf0) == 0) {
        lVar4 = param_1 + 0xc0;
      }
      *(undefined8 *)(lVar4 + (longlong)iVar1 * 0x18) = *param_2;
      lVar4 = lVar4 + (longlong)iVar1 * 0x18;
      plVar5 = (longlong *)(lVar4 + 8);
      *plVar5 = 0;
      *(undefined4 *)(lVar4 + 0x10) = 0;
      if (((param_3 != plVar5) && ((int)param_3[1] != 0)) &&
         ((longlong *)*param_3 != (longlong *)0x0)) {
        (**(code **)(*(longlong *)*param_3 + 0x30))();
      }
    }
  }
  return param_2;
}



// FUNCTION 142183a90 FUN_142183a90 body=134 status=ok
// SIG undefined FUN_142183a90(void)

void FUN_142183a90(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)*param_2;
  puVar1 = puVar5 + (longlong)(int)param_2[1] * 3;
  for (; puVar5 != puVar1; puVar5 = puVar5 + 3) {
    lVar3 = FUN_14218d390(param_1,*puVar5);
    lVar4 = puVar5[1];
    lVar2 = lVar4 + (longlong)*(int *)(puVar5 + 2) * 8;
    if (lVar4 != lVar2) {
      do {
        TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
        AddUniqueImpl<UGeometryCacheComponent_*_const_&>(lVar3 + 8,lVar4);
        lVar4 = lVar4 + 8;
      } while (lVar4 != lVar2);
    }
  }
  return;
}



// FUNCTION 142183b20 FUN_142183b20 body=518 status=ok
// SIG undefined FUN_142183b20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142183b20(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  
  plVar14 = (longlong *)*param_2;
  plVar2 = plVar14 + (longlong)(int)param_2[1] * 3;
  if (plVar14 != plVar2) {
    lVar1 = param_1 + 0x10;
    plVar3 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    do {
      lVar6 = plVar14[2];
      lVar11 = plVar14[1];
      lVar12 = *(longlong *)(param_1 + 0x20);
      if (*(longlong *)(param_1 + 0x20) == 0) {
        lVar12 = lVar1;
      }
      plVar5 = (longlong *)*plVar14;
      lVar13 = (longlong)*(int *)(param_1 + 0x28) * 0x10 + lVar12;
      if (lVar12 != lVar13) {
        do {
          if ((**(longlong **)(lVar12 + 8) == *plVar5) &&
             (*(longlong *)((*(longlong **)(lVar12 + 8))[1] + 0x28) ==
              *(longlong *)(plVar5[1] + 0x28))) goto LAB_142183c21;
          lVar12 = lVar12 + 0x10;
        } while (lVar12 != lVar13);
      }
      if ((*(int *)(*plVar3 + 0x38) < DAT_146aeb4b0) &&
         (_Init_thread_header(&DAT_146aeb4b0), DAT_146aeb4b0 == -1)) {
        DAT_146aeb4a0 = (longlong *)0x0;
        _DAT_146aeb4a8 = 0;
        atexit((_func_5014 *)&LAB_143ea7430);
        _Init_thread_footer(&DAT_146aeb4b0);
      }
      for (plVar10 = DAT_146aeb4a0; plVar10 != DAT_146aeb4a0 + DAT_146aeb4a8; plVar10 = plVar10 + 1)
      {
        if (*(longlong *)(*plVar10 + 8) == lVar11) {
          lVar11 = (longlong)plVar10 - (longlong)DAT_146aeb4a0 >> 3;
          uVar9 = (uint)lVar11;
          if (uVar9 != 0xffffffff) {
            iVar7 = (**(code **)(*(longlong *)DAT_146aeb4a0[(int)uVar9] + 0x20))();
            if ((char)lVar11 != -1) {
              iVar4 = *(int *)(param_1 + 0x28);
              *(int *)(param_1 + 0x28) = iVar4 + 1;
              if (*(int *)(param_1 + 0x2c) < iVar4 + 1) {
                TArray<FSlateCachedClipState,TInlineAllocator<1,TSizedDefaultAllocator<32>_>_>::
                ResizeGrow(lVar1,iVar4);
              }
              lVar11 = *(longlong *)(param_1 + 0x20);
              if (*(longlong *)(param_1 + 0x20) == 0) {
                lVar11 = lVar1;
              }
              puVar8 = (undefined8 *)(lVar11 + (longlong)iVar4 * 0x10);
              *puVar8 = CONCAT44((int)lVar6,iVar7 << 8 | uVar9 & 0xff);
              puVar8[1] = plVar5;
            }
          }
          break;
        }
      }
LAB_142183c21:
      plVar14 = plVar14 + 3;
    } while (plVar14 != plVar2);
  }
  return;
}



// FUNCTION 142183d30 FUN_142183d30 body=327 status=ok
// SIG undefined FUN_142183d30(void)

void FUN_142183d30(int *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *local_18;
  undefined4 uStack_10;
  
  plVar3 = (longlong *)0x0;
  plVar2 = plVar3;
  if (*param_1 != -1) {
    plVar4 = *(longlong **)(param_1 + 0x2e);
    plVar5 = plVar4 + (longlong)param_1[0x30] * 6;
    if (plVar4 != plVar5) {
      do {
        if ((*(longlong *)*plVar4 == *(longlong *)*param_2) &&
           (plVar2 = plVar4,
           *(longlong *)(((longlong *)*plVar4)[1] + 0x28) ==
           *(longlong *)(((longlong *)*param_2)[1] + 0x28))) break;
        plVar4 = plVar4 + 6;
        plVar2 = plVar3;
      } while (plVar4 != plVar5);
    }
  }
  local_18 = (longlong *)param_2[4];
  if (plVar2 == (longlong *)0x0) {
    iVar1 = param_1[0x30];
    if (local_18 == (longlong *)0x0) {
      local_18 = param_2 + 1;
    }
    uStack_10 = (undefined4)param_2[5];
    param_1[0x30] = iVar1 + 1;
    if (param_1[0x31] < iVar1 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1 + 0x2e,iVar1);
    }
    plVar2 = (longlong *)((longlong)iVar1 * 0x30 + *(longlong *)(param_1 + 0x2e));
    *plVar2 = *param_2;
    plVar2[1] = 0;
    plVar2[4] = 0;
    plVar2[5] = 0;
    FUN_142183b20(plVar2,&local_18);
    return;
  }
  if (local_18 == (longlong *)0x0) {
    local_18 = param_2 + 1;
  }
  uStack_10 = (undefined4)param_2[5];
  FUN_142183b20(plVar2,&local_18);
  return;
}



// FUNCTION 142183eb0 FUN_142183eb0 body=42 status=ok
// SIG undefined FUN_142183eb0(void)

undefined8 FUN_142183eb0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = *param_3;
  FName::ToString(local_res8,param_1);
  return param_1;
}



// FUNCTION 142183ef0 FUN_142183ef0 body=32 status=ok
// SIG undefined FUN_142183ef0(void)

undefined8 FUN_142183ef0(undefined8 param_1,undefined8 param_2)

{
  FUN_142180e90(param_2,param_1);
  return param_1;
}



// FUNCTION 142183f10 FUN_142183f10 body=32 status=ok
// SIG undefined FUN_142183f10(void)

undefined8 FUN_142183f10(undefined8 param_1,undefined8 param_2)

{
  FUN_142180f90(param_2,param_1);
  return param_1;
}



// FUNCTION 142183f30 FUN_142183f30 body=67 status=ok
// SIG undefined FUN_142183f30(void)

undefined8 FUN_142183f30(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  undefined1 uStackX_9;
  undefined1 uStackX_a;
  
  uVar1 = *param_3;
  uStackX_9 = (undefined1)(uVar1 >> 8);
  uStackX_a = (undefined1)(uVar1 >> 0x10);
  FString::PrintfImpl(param_1,L"(R=%i,G=%i,B=%i,A=%i)",uStackX_a,uStackX_9,uVar1 & 0xff,
                      uVar1 >> 0x18);
  return param_1;
}



// FUNCTION 142183f90 FUN_142183f90 body=86 status=ok
// SIG undefined FUN_142183f90(void)

undefined8 FUN_142183f90(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  float fVar1;
  
  fVar1 = (float)((ulonglong)*param_3 >> 0x20);
  FString::PrintfImpl(fVar1,L"X=%3.3f Y=%3.3f Z=%3.3f",(double)(float)*param_3,(double)fVar1,
                      (double)*(float *)(param_3 + 1));
  return param_1;
}



// FUNCTION 142184000 FUN_142184000 body=33 status=ok
// SIG undefined FUN_142184000(void)

undefined8 FUN_142184000(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  FString::PrintfImpl(param_1,&DAT_143f3edc0,*param_3);
  return param_1;
}



// FUNCTION 142184030 FUN_142184030 body=51 status=ok
// SIG undefined FUN_142184030(void)

undefined8 FUN_142184030(undefined8 param_1,undefined8 param_2,float *param_3)

{
  FString::PrintfImpl(param_1,&DAT_144114f48,(double)*param_3);
  return param_1;
}



// FUNCTION 142184070 FUN_142184070 body=29 status=ok
// SIG undefined FUN_142184070(void)

undefined8 FUN_142184070(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1421799b0(param_3,param_1);
  return param_1;
}



// FUNCTION 1421840b0 FUN_1421840b0 body=32 status=ok
// SIG undefined FUN_1421840b0(void)

undefined8 FUN_1421840b0(undefined8 param_1,undefined8 param_2)

{
  FUN_1421810a0(param_2,param_1);
  return param_1;
}



// FUNCTION 1421840d0 FUN_1421840d0 body=46 status=ok
// SIG undefined FUN_1421840d0(void)

undefined8 FUN_1421840d0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  FString::PrintfImpl(*param_3,L"%lld",*param_3);
  return param_1;
}



// FUNCTION 142184120 FUN_142184120 body=34 status=ok
// SIG undefined FUN_142184120(void)

undefined8 FUN_142184120(undefined8 param_1,undefined8 param_2,short *param_3)

{
  FString::PrintfImpl(param_1,&DAT_144ca01b8,(int)*param_3);
  return param_1;
}



// FUNCTION 142184150 FUN_142184150 body=59 status=ok
// SIG undefined FUN_142184150(void)

undefined8 FUN_142184150(undefined8 param_1,undefined8 param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  undefined4 uStack_14;
  
  uVar1 = *param_3;
  uStack_14 = (undefined4)(uVar1 >> 0x20);
  FString::PrintfImpl(uVar1,L"X=%d Y=%d Z=%d",uVar1 & 0xffffffff,uStack_14,(int)param_3[1]);
  return param_1;
}



// FUNCTION 1421841a0 FUN_1421841a0 body=43 status=ok
// SIG undefined FUN_1421841a0(void)

undefined8 FUN_1421841a0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  FUN_141682af0(&local_18,param_1,0);
  return param_1;
}



// FUNCTION 1421841f0 FUN_1421841f0 body=32 status=ok
// SIG undefined FUN_1421841f0(void)

undefined8 FUN_1421841f0(undefined8 param_1,undefined8 param_2)

{
  FUN_142181170(param_2,param_1);
  return param_1;
}



// FUNCTION 142184210 FUN_142184210 body=32 status=ok
// SIG undefined FUN_142184210(void)

undefined8 FUN_142184210(undefined8 param_1,undefined8 param_2)

{
  FUN_1421811f0(param_2,param_1);
  return param_1;
}



// FUNCTION 1421842a0 FUN_1421842a0 body=32 status=ok
// SIG undefined FUN_1421842a0(void)

undefined8 FUN_1421842a0(undefined8 param_1,undefined8 param_2)

{
  FUN_142181440(param_2,param_1);
  return param_1;
}



// FUNCTION 1421842d0 FUN_1421842d0 body=34 status=ok
// SIG undefined FUN_1421842d0(void)

undefined8 FUN_1421842d0(undefined8 param_1,undefined8 param_2,undefined2 *param_3)

{
  FString::PrintfImpl(param_1,&DAT_144ca0188,*param_3);
  return param_1;
}



// FUNCTION 142184340 FUN_142184340 body=32 status=ok
// SIG undefined FUN_142184340(void)

undefined8 FUN_142184340(undefined8 param_1,undefined8 param_2)

{
  FUN_1421817a0(param_2,param_1);
  return param_1;
}



// FUNCTION 142184370 FUN_142184370 body=34 status=ok
// SIG undefined FUN_142184370(void)

undefined8 FUN_142184370(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  FString::PrintfImpl(param_1,&DAT_144ca0178,*param_3);
  return param_1;
}



// FUNCTION 1421843a0 FUN_1421843a0 body=32 status=ok
// SIG undefined FUN_1421843a0(void)

undefined8 FUN_1421843a0(undefined8 param_1,undefined8 param_2)

{
  FUN_142181960(param_2,param_1);
  return param_1;
}



// FUNCTION 1421843d0 FUN_1421843d0 body=32 status=ok
// SIG undefined FUN_1421843d0(void)

undefined8 FUN_1421843d0(undefined8 param_1,undefined8 param_2)

{
  FUN_1421819e0(param_2,param_1);
  return param_1;
}



// FUNCTION 142184420 FUN_142184420 body=40 status=ok
// SIG undefined FUN_142184420(void)

undefined8 FUN_142184420(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  FString::PrintfImpl(param_1,&DAT_144ca01d8,*param_3);
  return param_1;
}



// FUNCTION 142184480 FUN_142184480 body=33 status=ok
// SIG undefined FUN_142184480(void)

undefined8 FUN_142184480(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  FString::PrintfImpl(param_1,&DAT_144ca0198,*param_3);
  return param_1;
}



// FUNCTION 1421844c0 FUN_1421844c0 body=33 status=ok
// SIG undefined FUN_1421844c0(void)

undefined8 FUN_1421844c0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  FString::PrintfImpl(param_1,&DAT_1440da628,*param_3);
  return param_1;
}



// FUNCTION 142184530 FUN_142184530 body=34 status=ok
// SIG undefined FUN_142184530(void)

undefined8 FUN_142184530(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  FString::PrintfImpl(param_1,&DAT_144732490,*param_3);
  return param_1;
}



// FUNCTION 142184570 UTextureIdentifier body=59 status=ok
// SIG undefined UTextureIdentifier(void)

undefined8 * FSlateBrush::UTextureIdentifier(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
  FGenericPlatformString::Memcpy(*param_1,L"ByteArray",0x14);
  return param_1;
}



// FUNCTION 1421845b0 FUN_1421845b0 body=82 status=ok
// SIG undefined FUN_1421845b0(void)

undefined8 FUN_1421845b0(undefined8 param_1,undefined8 param_2,float *param_3)

{
  FString::PrintfImpl(param_3[2],L"X=%3.3f Y=%3.3f Z=%3.3f",(double)*param_3,(double)param_3[1],
                      (double)param_3[2]);
  return param_1;
}



// FUNCTION 142184610 FUN_142184610 body=32 status=ok
// SIG undefined FUN_142184610(void)

undefined8 FUN_142184610(undefined8 param_1,undefined8 param_2)

{
  FUN_142181d40(param_2,param_1);
  return param_1;
}



// FUNCTION 142184650 FUN_142184650 body=66 status=ok
// SIG undefined FUN_142184650(void)

undefined8 FUN_142184650(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  float fVar1;
  
  fVar1 = (float)((ulonglong)*param_3 >> 0x20);
  FString::PrintfImpl(fVar1,L"X=%3.3f Y=%3.3f",(double)(float)*param_3,(double)fVar1);
  return param_1;
}



// FUNCTION 1421846a0 FUN_1421846a0 body=42 status=ok
// SIG undefined FUN_1421846a0(void)

undefined8 FUN_1421846a0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = *param_3;
  FTimespan::ToString(local_res8,param_1);
  return param_1;
}



// FUNCTION 1421846d0 FUN_1421846d0 body=46 status=ok
// SIG undefined FUN_1421846d0(void)

undefined8 FUN_1421846d0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  FString::PrintfImpl(*param_3,L"%llu",*param_3);
  return param_1;
}



// FUNCTION 142184730 FUN_142184730 body=32 status=ok
// SIG undefined FUN_142184730(void)

undefined8 FUN_142184730(undefined8 param_1,undefined8 param_2)

{
  FUN_1421825f0(param_2,param_1);
  return param_1;
}



// FUNCTION 142184760 FUN_142184760 body=86 status=ok
// SIG undefined FUN_142184760(void)

undefined8 FUN_142184760(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  float fVar1;
  
  fVar1 = (float)((ulonglong)*param_3 >> 0x20);
  FString::PrintfImpl(fVar1,L"P=%f Y=%f R=%f",(double)(float)*param_3,(double)fVar1,
                      (double)*(float *)(param_3 + 1));
  return param_1;
}



// FUNCTION 1421847f0 FUN_1421847f0 body=34 status=ok
// SIG undefined FUN_1421847f0(void)

undefined8 FUN_1421847f0(undefined8 param_1,undefined8 param_2,char *param_3)

{
  FString::PrintfImpl(param_1,&DAT_1447540a8,(int)*param_3);
  return param_1;
}



// FUNCTION 142184830 FUN_142184830 body=51 status=ok
// SIG undefined FUN_142184830(void)

undefined8 FUN_142184830(undefined8 param_1,undefined8 param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  undefined4 uStackX_c;
  
  uVar1 = *param_3;
  uStackX_c = (undefined4)(uVar1 >> 0x20);
  FString::PrintfImpl(uVar1,L"X=%d Y=%d",uVar1 & 0xffffffff,uStackX_c);
  return param_1;
}



// FUNCTION 142184890 FUN_142184890 body=32 status=ok
// SIG undefined FUN_142184890(void)

undefined8 FUN_142184890(undefined8 param_1,undefined8 param_2)

{
  FUN_1421826a0(param_2,param_1);
  return param_1;
}



// FUNCTION 1421848f0 FUN_1421848f0 body=42 status=ok
// SIG undefined FUN_1421848f0(void)

undefined8 FUN_1421848f0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = *param_3;
  FDateTime::ToString(local_res8,param_1);
  return param_1;
}



// FUNCTION 142184920 FUN_142184920 body=152 status=ok
// SIG undefined FUN_142184920(void)

ulonglong FUN_142184920(ulonglong *param_1,longlong param_2,longlong param_3)

{
  longlong *in_RAX;
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 == DAT_146aeb080) {
    in_RAX = (longlong *)0x0;
    if (param_3 == 0) {
LAB_142184938:
      return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
    }
    in_RAX = (longlong *)0x0;
    if (DAT_146aeb048 != 0) {
      return CONCAT71((int7)((ulonglong)DAT_146aeb048 >> 8),param_3 == DAT_146aeb048);
    }
  }
  if (((param_2 == DAT_146aeb088) || (param_2 == DAT_146aeb080)) || (param_2 == DAT_146aeb090)) {
    plVar2 = (longlong *)*param_1;
    in_RAX = plVar2 + (longlong)(int)param_1[1] * 3;
    if (plVar2 != in_RAX) {
      while (*plVar2 != param_2) {
        plVar2 = plVar2 + 3;
        if (plVar2 == in_RAX) {
          return (ulonglong)in_RAX & 0xffffffffffffff00;
        }
      }
      if (plVar2 != (longlong *)0x0) {
        plVar1 = (longlong *)plVar2[1];
        in_RAX = (longlong *)(longlong)(int)plVar2[2];
        plVar2 = plVar1 + (longlong)in_RAX;
        for (; plVar1 != plVar2; plVar1 = plVar1 + 1) {
          if (*plVar1 == param_3) goto LAB_142184938;
        }
      }
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1421849c0 FUN_1421849c0 body=15 status=ok
// SIG undefined FUN_1421849c0(void)

void FUN_1421849c0(undefined8 param_1,undefined8 param_2)

{
  FUN_142184920(param_1,DAT_146aeb080,param_2);
  return;
}



// FUNCTION 1421849d0 FUN_1421849d0 body=315 status=ok
// SIG undefined FUN_1421849d0(void)

void FUN_1421849d0(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  bool bVar8;
  
  if (((param_2 == DAT_146aeb088) || (param_2 == DAT_146aeb080)) || (param_2 == DAT_146aeb090)) {
    plVar7 = (longlong *)*param_1;
    plVar2 = plVar7 + (longlong)(int)param_1[1] * 3;
    for (; plVar7 != plVar2; plVar7 = plVar7 + 3) {
      if (*plVar7 == param_2) goto LAB_142184a21;
    }
  }
  plVar7 = (longlong *)0x0;
LAB_142184a21:
  if ((plVar7 != (longlong *)0x0) && (lVar1 = (longlong)(int)plVar7[2], (int)plVar7[2] != 0)) {
    iVar6 = 0;
    bVar8 = *(longlong *)plVar7[1] != param_3;
    lVar5 = 0;
    iVar3 = 0;
    do {
      lVar5 = lVar5 + 1;
      iVar4 = iVar3 + 1;
      if (lVar5 < lVar1) {
        plVar2 = (longlong *)(plVar7[1] + lVar5 * 8);
        do {
          if (bVar8 != (*plVar2 != param_3)) break;
          iVar4 = iVar4 + 1;
          lVar5 = lVar5 + 1;
          plVar2 = plVar2 + 1;
        } while (lVar5 < lVar1);
      }
      if (bVar8 != false) {
        if (iVar6 != iVar3) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(plVar7[1] + (longlong)iVar6 * 8),
                     (void *)(plVar7[1] + (longlong)iVar3 * 8),(longlong)(iVar4 - iVar3) << 3);
        }
        iVar6 = iVar6 + (iVar4 - iVar3);
      }
      bVar8 = (bool)(bVar8 ^ 1);
      iVar3 = iVar4;
    } while (lVar5 < lVar1);
    *(int *)(plVar7 + 2) = iVar6;
  }
  return;
}



// FUNCTION 142184b10 FUN_142184b10 body=113 status=ok
// SIG undefined FUN_142184b10(void)

longlong * FUN_142184b10(longlong param_1,longlong *param_2,byte param_3,undefined8 *param_4)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = FUN_142190080();
  if ((cVar1 == '\0') || (param_3 <= *(byte *)(param_1 + 0x40))) {
    *param_2 = param_1;
  }
  else {
    if (*(int *)(param_4 + 1) == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = (longlong *)*param_4;
    }
    cVar1 = (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
    *param_2 = param_1;
    if (cVar1 != '\0') {
      *(byte *)(param_1 + 0x40) = param_3;
    }
  }
  return param_2;
}



// FUNCTION 142184b90 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>::ConditionalRehash
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



// FUNCTION 142184c40 FUN_142184c40 body=445 status=ok
// SIG undefined FUN_142184c40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142184c40(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_108 [32];
  code *local_e8 [2];
  longlong local_d8 [4];
  longlong *local_b8;
  int local_a8;
  code *local_98 [2];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  longlong *local_48;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  plVar6 = (longlong *)(param_1 + 0x90);
  uVar3 = 0;
  plVar5 = (longlong *)*plVar6;
  iVar1 = *(int *)(param_1 + 0x98);
  plVar4 = plVar5 + (longlong)iVar1 * 6;
  if (plVar5 != plVar4) {
    do {
      if ((*(longlong *)*plVar5 == *(longlong *)*param_2) &&
         (*(longlong *)(((longlong *)*plVar5)[1] + 0x28) ==
          *(longlong *)(((longlong *)*param_2)[1] + 0x28))) goto LAB_142184cdf;
      plVar5 = plVar5 + 6;
    } while (plVar5 != plVar4);
  }
  *(int *)(param_1 + 0x98) = iVar1 + 1;
  if (*(int *)(param_1 + 0x9c) < iVar1 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar6,iVar1);
  }
  plVar5 = (longlong *)(*plVar6 + (longlong)iVar1 * 0x30);
  *plVar5 = *param_2;
  plVar5[4] = 0;
  plVar5[5] = 0;
LAB_142184cdf:
  local_b8 = (longlong *)0x0;
  local_a8 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_d8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_143f3f130;
  }
  local_e8[0] = AK::MemoryMgr::StartProfileThreadUsage;
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_98,local_e8);
  local_48 = plVar5;
  local_40 = '\0';
  if (local_a8 != 0) {
    plVar6 = local_d8;
    if (local_b8 != (longlong *)0x0) {
      plVar6 = local_b8;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_b8 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_1421837f0(local_98,param_2[1],(int)param_2[2]);
  plVar6 = local_48;
  if ((local_48 != (longlong *)0x0) && (local_40 != '\0')) {
    if (local_58 != 0) {
      plVar4 = local_88;
      if (local_68 != (longlong *)0x0) {
        plVar4 = local_68;
      }
      if (plVar4 != (longlong *)0x0) {
        uVar3 = (**(code **)(*plVar4 + 8))();
      }
    }
    (*local_98[0])(uVar3,plVar6);
  }
  if (local_58 != 0) {
    plVar6 = local_88;
    if (local_68 != (longlong *)0x0) {
      plVar6 = local_68;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142184e00 FUN_142184e00 body=273 status=ok
// SIG undefined FUN_142184e00(void)

void FUN_142184e00(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong local_res8;
  undefined8 local_res10;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined1 *local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong lStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 **local_28;
  
  FUN_142189710();
  iVar2 = *(int *)(param_1 + 0x98);
  if (iVar2 != 0) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x90) + 0x20);
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 6;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(int *)(param_1 + 0x9c) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 0x90,0);
  }
  local_res10 = *(undefined8 *)(param_1 + 0x30);
  local_60 = &local_res8;
  local_68 = &LAB_142183e80;
  local_30 = DAT_146aeae98;
  local_28 = &local_68;
  uStack_70 = (undefined8 *)((ulonglong)uStack_70._4_4_ << 0x20);
  local_78 = &local_res10;
  local_58 = 0;
  lStack_50 = (longlong)uStack_70;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  uStack_70 = &local_58;
  local_res8 = param_1;
  local_38 = local_res10;
  FUN_1421797d0(&local_48,&local_78,&local_38);
  return;
}



// FUNCTION 142184f20 FUN_142184f20 body=367 status=ok
// SIG undefined FUN_142184f20(void)

void FUN_142184f20(longlong param_1)

{
  undefined2 *puVar1;
  void *_Dst;
  void *_Src;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  if ((*(int *)(param_1 + 0x68) < 2) &&
     (lVar4 = *(longlong *)(param_1 + 0x30), 1 < *(int *)(lVar4 + 0x60))) {
    iVar5 = 0;
    if (*(wchar_t **)(param_1 + 0x60) != L"Struct.") {
      *(undefined4 *)(param_1 + 0x68) = 0;
      if (*(int *)(param_1 + 0x6c) != 8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x60,8);
        iVar5 = *(int *)(param_1 + 0x68);
      }
      *(int *)(param_1 + 0x68) = iVar5 + 8;
      if (*(int *)(param_1 + 0x6c) < iVar5 + 8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x60);
      }
      builtin_wcsncpy(*(wchar_t **)(param_1 + 0x60),L"Struct.",8);
      lVar4 = *(longlong *)(param_1 + 0x30);
    }
    FName::AppendString(lVar4 + 0x28,param_1 + 0x60);
    iVar5 = *(int *)(param_1 + 0x68);
    iVar2 = (2 - (uint)(iVar5 != 0)) + iVar5;
    *(int *)(param_1 + 0x68) = iVar2;
    if (*(int *)(param_1 + 0x6c) < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x60,iVar5);
    }
    puVar1 = (undefined2 *)
             (*(longlong *)(param_1 + 0x60) + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
    *puVar1 = 0x2e;
    puVar1[1] = 0;
    _Src = *(void **)(param_1 + 0x38);
    iVar5 = *(int *)(param_1 + 0x40) + -1;
    if (*(int *)(param_1 + 0x40) == 0) {
      iVar5 = 0;
    }
    if (iVar5 != 0) {
      iVar2 = *(int *)(param_1 + 0x68);
      iVar3 = (uint)(iVar2 == 0) + iVar5 + iVar2;
      *(int *)(param_1 + 0x68) = iVar3;
      if (*(int *)(param_1 + 0x6c) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x60,iVar2);
      }
      _Dst = (void *)(*(longlong *)(param_1 + 0x60) +
                     ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar5 * 2);
      *(undefined2 *)((longlong)iVar5 * 2 + (longlong)_Dst) = 0;
    }
    FUN_142186f40(param_1);
  }
  return;
}



// FUNCTION 142185090 FUN_142185090 body=66 status=ok
// SIG undefined FUN_142185090(void)

undefined8 FUN_142185090(longlong param_1,longlong param_2,undefined8 *param_3)

{
  char cVar1;
  
  if ((1 < *(int *)(param_2 + 8)) && (1 < *(int *)(param_3 + 1))) {
    cVar1 = FConfigCacheIni::GetFloat
                      (DAT_1468b6148,*param_3,*(undefined8 *)(param_1 + 8),param_1 + 0x10,param_2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1421850e0 FUN_1421850e0 body=95 status=ok
// SIG undefined FUN_1421850e0(void)

ulonglong FUN_1421850e0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint local_res10 [6];
  
  if ((1 < *(int *)(param_2 + 8)) && (1 < *(int *)(param_3 + 1))) {
    param_3 = (undefined8 *)
              FConfigCacheIni::GetInt
                        (DAT_1468b6148,*param_3,*(undefined8 *)(param_1 + 8),local_res10,param_2);
    if ((char)param_3 != '\0') {
      puVar1 = local_res10;
      if (puVar1 != (uint *)(param_1 + 0x10U)) {
        puVar1 = (uint *)(ulonglong)local_res10[0];
        *(uint *)(param_1 + 0x10U) = local_res10[0];
        *(undefined1 *)(param_1 + 0x14) = 1;
      }
      return CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
    }
  }
  return (ulonglong)param_3 & 0xffffffffffffff00;
}



// FUNCTION 142185140 FUN_142185140 body=445 status=ok
// SIG undefined FUN_142185140(void)

undefined8 FUN_142185140(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 local_res10 [8];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58 [16];
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  
  if ((1 < *(int *)(param_2 + 8)) && (1 < *(int *)(param_3 + 1))) {
    local_78 = (longlong *)0x0;
    local_70 = 0;
    iVar3 = FConfigCacheIni::GetArray
                      (DAT_1468b6148,*param_3,*(undefined8 *)(param_1 + 8),&local_78,param_2);
    iVar7 = (int)local_70;
    plVar5 = local_78;
    if (iVar3 == 0) {
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        plVar5 = plVar5 + 2;
      }
      if (local_78 != (longlong *)0x0) {
        FMemory::Free(local_78);
      }
    }
    else {
      iVar7 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x44);
      if (iVar7 < iVar7 + (int)local_70) {
        FUN_14089d3b0(param_1 + 0x10);
      }
      plVar6 = local_78 + (longlong)(int)local_70 * 2;
      plVar5 = local_78;
      iVar3 = (int)local_70;
      if (local_78 != plVar6) {
        do {
          plVar4 = (longlong *)FString::FString(local_58,plVar5);
          local_48 = 0;
          local_40 = 0;
          local_38 = 0;
          local_68 = *plVar4;
          *plVar4 = 0;
          local_60 = (undefined4)plVar4[1];
          local_5c = *(undefined4 *)((longlong)plVar4 + 0xc);
          plVar4[1] = 0;
          FUN_1417978e0(&local_48,&local_68);
          if (*plVar4 != 0) {
            FMemory::Free();
          }
          FUN_142179220(param_1 + 0x10,local_res10,&local_48,0);
          if (local_40 != 0) {
            FMemory::Free();
          }
          plVar5 = plVar5 + 2;
        } while (plVar5 != plVar6);
        iVar3 = (int)local_70;
      }
      iVar1 = *(int *)(param_1 + 0x18);
      iVar2 = *(int *)(param_1 + 0x44);
      plVar5 = local_78;
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        plVar5 = plVar5 + 2;
      }
      if (local_78 != (longlong *)0x0) {
        FMemory::Free(local_78);
      }
      if (iVar1 - iVar2 != iVar7) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142185300 FUN_142185300 body=356 status=ok
// SIG undefined FUN_142185300(void)

undefined8 FUN_142185300(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  longlong *local_28;
  undefined8 local_20;
  
  if ((1 < *(int *)(param_2 + 8)) && (1 < *(int *)(param_3 + 1))) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    iVar3 = FConfigCacheIni::GetArray
                      (DAT_1468b6148,*param_3,*(undefined8 *)(param_1 + 8),&local_28,param_2);
    iVar7 = (int)local_20;
    plVar5 = local_28;
    if (iVar3 == 0) {
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        plVar5 = plVar5 + 2;
      }
      if (local_28 != (longlong *)0x0) {
        FMemory::Free(local_28);
      }
    }
    else {
      iVar7 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x44);
      if (iVar7 < iVar7 + (int)local_20) {
        FUN_1405effc0(param_1 + 0x10);
      }
      plVar6 = local_28 + (longlong)(int)local_20 * 2;
      plVar5 = local_28;
      iVar3 = (int)local_20;
      if (local_28 != plVar6) {
        do {
          if ((int)plVar5[1] == 0) {
            puVar4 = &DAT_143f3eda8;
          }
          else {
            puVar4 = (undefined2 *)*plVar5;
          }
          FName::FName(local_res20,puVar4,1);
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
                    (param_1 + 0x10,local_res10,local_res20,0);
          plVar5 = plVar5 + 2;
        } while (plVar5 != plVar6);
        iVar3 = (int)local_20;
      }
      iVar1 = *(int *)(param_1 + 0x18);
      iVar2 = *(int *)(param_1 + 0x44);
      plVar5 = local_28;
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        plVar5 = plVar5 + 2;
      }
      if (local_28 != (longlong *)0x0) {
        FMemory::Free(local_28);
      }
      if (iVar1 - iVar2 != iVar7) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142185470 FUN_142185470 body=161 status=ok
// SIG undefined FUN_142185470(void)

undefined8 FUN_142185470(longlong param_1,longlong param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined1 local_res10 [24];
  undefined2 *local_18;
  undefined8 local_10;
  
  if ((1 < *(int *)(param_2 + 8)) && (1 < *(int *)(param_3 + 1))) {
    local_18 = (undefined2 *)0x0;
    local_10 = 0;
    cVar1 = FConfigCacheIni::GetString
                      (DAT_1468b6148,*param_3,*(undefined8 *)(param_1 + 8),&local_18,param_2);
    if (cVar1 != '\0') {
      puVar3 = &DAT_143f3eda8;
      if ((int)local_10 != 0) {
        puVar3 = local_18;
      }
      puVar2 = (undefined8 *)FName::FName(local_res10,puVar3,1);
      *(undefined8 *)(param_1 + 0x10) = *puVar2;
      if (local_18 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      return 1;
    }
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return 0;
}



// FUNCTION 142185520 FUN_142185520 body=66 status=ok
// SIG undefined FUN_142185520(void)

undefined8 FUN_142185520(longlong param_1,longlong param_2,undefined8 *param_3)

{
  char cVar1;
  
  if ((1 < *(int *)(param_2 + 8)) && (1 < *(int *)(param_3 + 1))) {
    cVar1 = FConfigCacheIni::GetBool
                      (DAT_1468b6148,*param_3,*(undefined8 *)(param_1 + 8),param_1 + 0x10,param_2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142185570 FUN_142185570 body=199 status=ok
// SIG undefined FUN_142185570(void)

undefined1 FUN_142185570(longlong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined2 *local_18;
  ulonglong local_10;
  
  puVar1 = PTR_u_Event__146526ae0;
  local_18 = (undefined2 *)0x0;
  local_10 = 0;
  if ((PTR_u_Event__146526ae0 != (undefined *)0x0) && (*(short *)PTR_u_Event__146526ae0 != 0)) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (*(short *)(PTR_u_Event__146526ae0 + lVar4 * 2) != 0);
    uVar3 = (int)lVar4 + 1;
    local_10 = (ulonglong)uVar3;
    if (0 < (int)uVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    }
    FGenericPlatformString::Memcpy(local_18,puVar1,(longlong)(int)uVar3 * 2);
  }
  FName::AppendString(param_1 + 0x28,&local_18);
  puVar5 = &DAT_143f3eda8;
  if ((int)local_10 != 0) {
    puVar5 = local_18;
  }
  uVar2 = FUN_142185640(param_1,param_2,puVar5);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return uVar2;
}



// FUNCTION 142185640 FUN_142185640 body=896 status=ok
// SIG undefined FUN_142185640(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142185640(longlong param_1,undefined8 *param_2,short *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined2 *puVar15;
  undefined2 *local_58;
  undefined8 local_50;
  
  lVar12 = param_1 + 0x18;
  puVar15 = (undefined2 *)0x0;
  local_58 = (undefined2 *)0x0;
  local_50 = 0;
  cVar3 = FConfigCacheIni::GetString(DAT_1468b6148,param_3,L"FlagSet",&local_58,param_2);
  if (cVar3 == '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146aed188) &&
       (_Init_thread_header(&DAT_146aed188), DAT_146aed188 == -1)) {
      DAT_146aed178 = (undefined8 *)0x0;
      _DAT_146aed180 = 0;
      atexit((_func_5014 *)&LAB_143ea7400);
      _Init_thread_footer(&DAT_146aed188);
    }
    if (((DAT_146aed18c == '\0') && (DAT_146aeb1c0 != 0)) && (DAT_146aeb1c0 != 1)) {
      FUN_142190560(&DAT_146aed178,L"FlagSet",&DAT_146aeb1b8);
      DAT_146aed18c = '\x01';
    }
    puVar1 = DAT_146aed178 + (longlong)DAT_146aed180 * 3;
    for (puVar14 = DAT_146aed178; puVar14 != puVar1; puVar14 = puVar14 + 3) {
      lVar6 = FUN_14218d390(lVar12,*puVar14);
      lVar11 = puVar14[1];
      lVar7 = lVar11 + (longlong)*(int *)(puVar14 + 2) * 8;
      if (lVar11 != lVar7) {
        do {
          TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
          AddUniqueImpl<UGeometryCacheComponent_*_const_&>(lVar6 + 8,lVar11);
          lVar11 = lVar11 + 8;
        } while (lVar11 != lVar7);
      }
    }
  }
  else {
    puVar9 = &DAT_143f3eda8;
    if ((int)local_50 != 0) {
      puVar9 = local_58;
    }
    FUN_142190560(lVar12,puVar9,&DAT_146aeb1b8);
  }
  puVar9 = &DAT_143f3eda8;
  lVar7 = FConfigCacheIni::GetSectionPrivate(DAT_1468b6148,param_3,0,1,param_2);
  if (lVar7 == 0) {
    uVar8 = 0;
    if (local_58 != (undefined2 *)0x0) {
      uVar8 = FMemory::Free();
    }
    return uVar8 & 0xffffffffffffff00;
  }
  FUN_142190560(lVar12,param_3,param_2);
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  puVar10 = &DAT_143f3eda8;
  if (DAT_146aeb1c0 != 0) {
    puVar10 = DAT_146aeb1b8;
  }
  if (*(int *)(param_2 + 1) != 0) {
    puVar9 = (undefined2 *)*param_2;
  }
  iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar10);
  if (iVar4 != 0) {
    FString::operator=(param_1 + 0x48,param_2);
  }
  if (*(short **)(param_1 + 0x58) != param_3) {
    puVar9 = puVar15;
    if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
      lVar12 = -1;
      do {
        lVar12 = lVar12 + 1;
      } while (param_3[lVar12] != 0);
      puVar9 = (undefined2 *)(ulonglong)((int)lVar12 + 1);
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    iVar4 = (int)puVar9;
    puVar10 = puVar15;
    if (*(int *)(param_1 + 100) != iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x58,puVar9);
      puVar10 = (undefined2 *)(ulonglong)*(uint *)(param_1 + 0x60);
    }
    iVar5 = (int)puVar10 + iVar4;
    *(int *)(param_1 + 0x60) = iVar5;
    if (*(int *)(param_1 + 100) < iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x58);
    }
    if (iVar4 != 0) {
      _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x58),param_3,(longlong)iVar4 * 2);
    }
  }
  FUN_142186f40(param_1);
  lVar12 = FUN_14218c420();
  plVar13 = *(longlong **)(lVar12 + 0x70);
  iVar4 = *(int *)(lVar12 + 0x80) + -1;
  if (*(int *)(lVar12 + 0x80) == 0) {
    iVar4 = 0;
  }
  plVar2 = plVar13 + ((int)(((longlong)iVar4 / 3 + ((longlong)iVar4 >> 0x3f) & 0xffffffffU) >> 0x1f)
                     + iVar4 / 3 + (iVar4 >> 0x1f));
  if (plVar13 != (longlong *)0x0) {
    puVar15 = (undefined2 *)*plVar13;
  }
  FUN_1421960e0(lVar12 + 0x70,&local_58);
  puVar9 = local_58;
  while (puVar15 != puVar9) {
    if (*(longlong *)(*(longlong *)(puVar15 + 0x18) + 0x28) == *(longlong *)(param_1 + 0x28)) {
      FUN_142184f20(puVar15);
    }
    puVar15 = puVar15 + 0x90;
    if ((plVar13 != plVar2) && (puVar15 == (undefined2 *)(*plVar13 + 0x360))) {
      puVar15 = (undefined2 *)plVar13[1];
      plVar13 = plVar13 + 1;
    }
  }
  if (*(char *)(param_1 + 0x40) != '\x01') {
    FUN_142185a80(param_1 + 0x80,param_2,param_3);
  }
  uVar8 = FUN_14218ff80(param_1);
  return uVar8;
}



// FUNCTION 1421859c0 FUN_1421859c0 body=188 status=ok
// SIG undefined FUN_1421859c0(void)

undefined1 FUN_1421859c0(longlong param_1)

{
  undefined *puVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined2 *local_18;
  ulonglong local_10;
  
  puVar1 = PTR_u_Event__146526ae0;
  local_18 = (undefined2 *)0x0;
  local_10 = 0;
  if ((PTR_u_Event__146526ae0 != (undefined *)0x0) && (*(short *)PTR_u_Event__146526ae0 != 0)) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (*(short *)(PTR_u_Event__146526ae0 + lVar4 * 2) != 0);
    uVar3 = (int)lVar4 + 1;
    local_10 = (ulonglong)uVar3;
    if (0 < (int)uVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    }
    FGenericPlatformString::Memcpy(local_18,puVar1,(longlong)(int)uVar3 * 2);
  }
  FName::AppendString(param_1 + 0x28,&local_18);
  puVar5 = &DAT_143f3eda8;
  if ((int)local_10 != 0) {
    puVar5 = local_18;
  }
  uVar2 = FUN_142185640(param_1,&DAT_146aeb1b8,puVar5);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return uVar2;
}



// FUNCTION 142185a80 FUN_142185a80 body=565 status=ok
// SIG undefined FUN_142185a80(void)

undefined8 FUN_142185a80(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  longlong local_28;
  undefined8 local_20;
  
  puVar6 = &DAT_143f3eda8;
  if (DAT_146526e98 != 0) {
    puVar6 = DAT_146526e90;
  }
  local_28 = 0;
  local_20 = 0;
  cVar3 = FConfigCacheIni::GetString(DAT_1468b6148,param_3,puVar6,&local_28,param_2);
  if (((cVar3 == '\0') || ((int)local_20 == 0)) || ((int)local_20 == 1)) {
    puVar6 = &DAT_143f3eda8;
    if (DAT_146526e88 != 0) {
      puVar6 = DAT_146526e80;
    }
    cVar3 = FConfigCacheIni::GetString(DAT_1468b6148,param_3,puVar6,&local_28,param_2);
    if (((cVar3 == '\0') || ((int)local_20 == 0)) || ((int)local_20 == 1)) goto LAB_142185b6e;
  }
  cVar3 = FUN_142194230(param_1,&local_28);
  if ((cVar3 == '\0') && (param_1 != &local_28)) {
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = local_28;
    *(int *)(param_1 + 1) = (int)local_20;
    uVar2 = local_20._4_4_;
    local_20 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
    local_28 = 0;
  }
LAB_142185b6e:
  puVar6 = &DAT_143f3eda8;
  if (DAT_146526eb8 != 0) {
    puVar6 = DAT_146526eb0;
  }
  cVar3 = FConfigCacheIni::GetString(DAT_1468b6148,param_3,puVar6,&local_28,param_2);
  if ((((cVar3 != '\0') && ((int)local_20 != 0)) && ((int)local_20 != 1)) &&
     (plVar1 = param_1 + 4, plVar1 != &local_28)) {
    iVar4 = (int)local_20;
    if (*plVar1 != 0) {
      FMemory::Free();
      iVar4 = (int)local_20;
    }
    *plVar1 = local_28;
    *(undefined4 *)((longlong)param_1 + 0x2c) = local_20._4_4_;
    local_20 = 0;
    local_28 = 0;
    *(int *)(param_1 + 5) = iVar4;
  }
  puVar6 = &DAT_143f3eda8;
  if (DAT_146526ea8 != 0) {
    puVar6 = DAT_146526ea0;
  }
  cVar3 = FConfigCacheIni::GetString(DAT_1468b6148,param_3,puVar6,&local_28,param_2);
  if (((cVar3 != '\0') && ((int)local_20 != 0)) &&
     (((int)local_20 != 1 && (plVar1 = param_1 + 2, plVar1 != &local_28)))) {
    iVar4 = (int)local_20;
    if (*plVar1 != 0) {
      FMemory::Free();
      iVar4 = (int)local_20;
    }
    *plVar1 = local_28;
    *(undefined4 *)((longlong)param_1 + 0x1c) = local_20._4_4_;
    local_20 = 0;
    local_28 = 0;
    *(int *)(param_1 + 3) = iVar4;
  }
  iVar4 = (int)param_1[1] + -1;
  if ((int)param_1[1] == 0) {
    iVar4 = 0;
  }
  if (((iVar4 == 0) || ((int)param_1[3] == 0)) || ((int)param_1[3] == 1)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  if (local_28 != 0) {
    FMemory::Free(local_28);
  }
  return uVar5;
}



// FUNCTION 142185cc0 FUN_142185cc0 body=35 status=ok
// SIG undefined FUN_142185cc0(void)

void FUN_142185cc0(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = *(undefined8 *)(param_1 + 8);
  FUN_142186220(param_1 + 0x10,local_res8,param_2);
  return;
}



// FUNCTION 142185cf0 FUN_142185cf0 body=326 status=ok
// SIG undefined FUN_142185cf0(void)

undefined8 FUN_142185cf0(longlong param_1,undefined8 *param_2)

{
  short *psVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  int local_res8 [2];
  short *local_res10;
  longlong *local_38;
  ulonglong local_30;
  
  psVar1 = *(short **)(param_1 + 8);
  plVar9 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_30 = 0;
  plVar6 = plVar9;
  if ((psVar1 != (short *)0x0) && (plVar6 = (longlong *)0x0, *psVar1 != 0)) {
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (psVar1[lVar8] != 0);
    uVar7 = (int)lVar8 + 1;
    local_30 = (ulonglong)uVar7;
    if (0 < (int)uVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    plVar6 = local_38;
    FGenericPlatformString::Memcpy(local_38,psVar1,(longlong)(int)uVar7 * 2);
  }
  plVar4 = (longlong *)*param_2;
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(plVar4,local_res8,&local_38);
  plVar5 = plVar9;
  if (local_res8[0] != -1) {
    plVar5 = (longlong *)(*plVar4 + (longlong)local_res8[0] * 0x28);
  }
  plVar4 = plVar5 + 2;
  if (plVar5 == (longlong *)0x0) {
    plVar4 = plVar9;
  }
  if ((plVar4 == (longlong *)0x0) || (*plVar4 == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (plVar6 != (longlong *)0x0) {
    FMemory::Free(plVar6);
  }
  if (!bVar2) {
    return 0;
  }
  local_res10 = psVar1;
  cVar3 = FUN_142186160(local_res8,&local_res10,param_2);
  if (cVar3 == '\0') {
    if (*(char *)(param_1 + 0x14) != '\0') {
      *(undefined1 *)(param_1 + 0x14) = 0;
    }
  }
  else if (local_res8 != (int *)(param_1 + 0x10)) {
    *(int *)(param_1 + 0x10) = local_res8[0];
    *(undefined1 *)(param_1 + 0x14) = 1;
    return 1;
  }
  return 1;
}



// FUNCTION 142185e40 FUN_142185e40 body=35 status=ok
// SIG undefined FUN_142185e40(void)

void FUN_142185e40(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = *(undefined8 *)(param_1 + 8);
  FUN_1421862f0(param_1 + 0x10,local_res8,param_2);
  return;
}



// FUNCTION 142185e70 FUN_142185e70 body=420 status=ok
// SIG undefined FUN_142185e70(void)

undefined8 FUN_142185e70(longlong param_1,undefined8 *param_2)

{
  short *psVar1;
  int iVar2;
  char cVar3;
  undefined2 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong *local_48;
  ulonglong local_40;
  longlong local_38;
  ulonglong local_30;
  
  psVar1 = *(short **)(param_1 + 8);
  local_48 = (longlong *)0x0;
  local_40 = 0;
  TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_48,8);
  local_38 = 0;
  local_30 = 0;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (psVar1[lVar8] != 0);
    uVar7 = (int)lVar8 + 1;
    local_30 = (ulonglong)uVar7;
    if (0 < (int)uVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    FGenericPlatformString::Memcpy(local_38,psVar1,(longlong)(int)uVar7 * 2);
  }
  cVar3 = FUN_1416b3f10(*param_2,&local_38,&local_48);
  if (local_38 != 0) {
    FMemory::Free();
  }
  iVar2 = (int)local_40;
  plVar5 = local_48;
  if (cVar3 != '\0') {
    if (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x44) < (int)local_40) {
      FUN_1405effc0(param_1 + 0x10,local_40 & 0xffffffff);
    }
    plVar6 = local_48 + (longlong)(int)local_40 * 2;
    plVar5 = local_48;
    iVar2 = (int)local_40;
    if (local_48 != plVar6) {
      do {
        if ((int)plVar5[1] == 0) {
          puVar4 = &DAT_143f3eda8;
        }
        else {
          puVar4 = (undefined2 *)*plVar5;
        }
        FName::FName(local_res10,puVar4,1);
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
                  (param_1 + 0x10,local_res8,local_res10,0);
        plVar5 = plVar5 + 2;
      } while (plVar5 != plVar6);
      iVar2 = (int)local_40;
      plVar5 = local_48;
    }
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
    return 1;
  }
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  return 0;
}



// FUNCTION 142186020 FUN_142186020 body=259 status=ok
// SIG undefined FUN_142186020(void)

undefined8 FUN_142186020(longlong param_1,undefined8 *param_2)

{
  short *psVar1;
  char cVar2;
  undefined2 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 local_res8;
  longlong local_28;
  ulonglong local_20;
  undefined2 *local_18;
  undefined8 local_10;
  
  psVar1 = *(short **)(param_1 + 8);
  local_18 = (undefined2 *)0x0;
  local_10 = 0;
  local_28 = 0;
  local_20 = 0;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (psVar1[lVar5] != 0);
    uVar4 = (int)lVar5 + 1;
    local_20 = (ulonglong)uVar4;
    if (0 < (int)uVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    FGenericPlatformString::Memcpy(local_28,psVar1,(longlong)(int)uVar4 * 2);
  }
  cVar2 = FUN_1416b40a0(*param_2,&local_28,&local_18);
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (cVar2 != '\0') {
    puVar3 = &DAT_143f3eda8;
    if ((int)local_10 != 0) {
      puVar3 = local_18;
    }
    FName::FName(&local_res8,puVar3,1);
    *(undefined8 *)(param_1 + 0x10) = local_res8;
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    return 1;
  }
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return 0;
}



// FUNCTION 142186130 FUN_142186130 body=35 status=ok
// SIG undefined FUN_142186130(void)

void FUN_142186130(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = *(undefined8 *)(param_1 + 8);
  FUN_1421864c0(param_1 + 0x10,local_res8,param_2);
  return;
}



// FUNCTION 142186160 FUN_142186160 body=188 status=ok
// SIG undefined FUN_142186160(void)

ulonglong FUN_142186160(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  short *psVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 local_res10 [2];
  longlong local_18;
  ulonglong local_10;
  
  psVar1 = (short *)*param_2;
  local_18 = 0;
  local_10 = 0;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (psVar1[lVar5] != 0);
    uVar4 = (int)lVar5 + 1;
    local_10 = (ulonglong)uVar4;
    if (0 < (int)uVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    }
    FGenericPlatformString::Memcpy(local_18,psVar1,(longlong)(int)uVar4 * 2);
  }
  uVar3 = FUN_1416b3b00(*param_3,&local_18,local_res10);
  cVar2 = (char)uVar3;
  if (local_18 != 0) {
    uVar3 = FMemory::Free();
  }
  if (cVar2 == '\0') {
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  else {
    *param_1 = local_res10[0];
    uVar3 = CONCAT71((uint7)(uint3)((uint)local_res10[0] >> 8),1);
  }
  return uVar3;
}



// FUNCTION 142186220 FUN_142186220 body=196 status=ok
// SIG undefined FUN_142186220(void)

bool FUN_142186220(float *param_1,undefined8 *param_2,undefined8 *param_3)

{
  short *psVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  double local_res10;
  longlong local_18;
  ulonglong local_10;
  
  psVar1 = (short *)*param_2;
  local_18 = 0;
  local_10 = 0;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (psVar1[lVar4] != 0);
    uVar3 = (int)lVar4 + 1;
    local_10 = (ulonglong)uVar3;
    if (0 < (int)uVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    }
    FGenericPlatformString::Memcpy(local_18,psVar1,(longlong)(int)uVar3 * 2);
  }
  cVar2 = FUN_1416b3cc0(*param_3,&local_18,&local_res10);
  if (local_18 != 0) {
    FMemory::Free();
  }
  if (cVar2 != '\0') {
    *param_1 = (float)local_res10;
  }
  return cVar2 != '\0';
}



// FUNCTION 1421862f0 FUN_1421862f0 body=453 status=ok
// SIG undefined FUN_1421862f0(void)

undefined8 FUN_1421862f0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  short *psVar1;
  char cVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 local_res10 [8];
  longlong *local_68;
  ulonglong local_60;
  longlong local_58;
  ulonglong local_50;
  undefined1 local_48 [16];
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  
  local_68 = (longlong *)0x0;
  local_60 = 0;
  TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_68,8);
  psVar1 = (short *)*param_2;
  local_58 = 0;
  local_50 = 0;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (psVar1[lVar5] != 0);
    uVar4 = (int)lVar5 + 1;
    local_50 = (ulonglong)uVar4;
    if (0 < (int)uVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    }
    FGenericPlatformString::Memcpy(local_58,psVar1,(longlong)(int)uVar4 * 2);
  }
  cVar2 = FUN_1416b3f10(*param_3,&local_58,&local_68);
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (cVar2 == '\0') {
    uVar8 = 0;
    iVar9 = (int)local_60;
    plVar6 = local_68;
  }
  else {
    if (*(int *)(param_1 + 8) - *(int *)(param_1 + 0x34) < (int)local_60) {
      FUN_14089d3b0(param_1,local_60 & 0xffffffff);
    }
    plVar7 = local_68 + (longlong)(int)local_60 * 2;
    plVar6 = local_68;
    iVar9 = (int)local_60;
    if (local_68 != plVar7) {
      do {
        plVar3 = (longlong *)FString::FString(local_48,plVar6);
        local_38 = 0;
        local_30 = 0;
        local_28 = 0;
        local_58 = *plVar3;
        *plVar3 = 0;
        local_50 = plVar3[1];
        plVar3[1] = 0;
        FUN_1417978e0(&local_38,&local_58);
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        FUN_142179220(param_1,local_res10,&local_38,0);
        if (local_30 != 0) {
          FMemory::Free();
        }
        plVar6 = plVar6 + 2;
      } while (plVar6 != plVar7);
      iVar9 = (int)local_60;
    }
    uVar8 = 1;
    plVar6 = local_68;
  }
  for (; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free(local_68);
  }
  return uVar8;
}



// FUNCTION 1421864c0 FUN_1421864c0 body=189 status=ok
// SIG undefined FUN_1421864c0(void)

ulonglong FUN_1421864c0(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  short *psVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 local_res10 [8];
  longlong local_18;
  ulonglong local_10;
  
  psVar1 = (short *)*param_2;
  local_18 = 0;
  local_10 = 0;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (psVar1[lVar5] != 0);
    uVar4 = (int)lVar5 + 1;
    local_10 = (ulonglong)uVar4;
    if (0 < (int)uVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    }
    FGenericPlatformString::Memcpy(local_18,psVar1,(longlong)(int)uVar4 * 2);
  }
  uVar3 = FUN_1416b3900(*param_3,&local_18,local_res10);
  cVar2 = (char)uVar3;
  if (local_18 != 0) {
    uVar3 = FMemory::Free();
  }
  if (cVar2 == '\0') {
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  else {
    *param_1 = local_res10[0];
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 142186580 FUN_142186580 body=904 status=ok
// SIG undefined FUN_142186580(void)

undefined8 FUN_142186580(longlong ***param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong ****pppplVar3;
  longlong ***ppplVar4;
  char cVar5;
  longlong lVar6;
  int iVar7;
  longlong ****pppplVar8;
  longlong ***ppplVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *local_res20;
  longlong ****local_a8;
  longlong ***ppplStack_a0;
  undefined4 local_98 [2];
  longlong ***local_90;
  longlong ***local_88;
  undefined8 uStack_80;
  longlong ***local_78;
  int iStack_70;
  longlong *local_68;
  longlong ***local_60;
  undefined8 local_58;
  code **local_50;
  code *local_48;
  longlong **local_40;
  
  cVar5 = FUN_14218fe10();
  if (cVar5 == '\0') {
    return 0;
  }
  FUN_1416b40a0(*param_2,&DAT_146526e90,param_1 + 0x10);
  FUN_1416b40a0(*param_2,&DAT_146526ea0,param_1 + 0x12);
  FUN_1416b40a0(*param_2,&DAT_146526eb0,param_1 + 0x14);
  if (*param_2 != 0) {
    cVar5 = FUN_1416b3e60(*param_2,&DAT_146526b08,&local_res20);
    if (cVar5 == '\0') {
      local_res20 = param_2;
    }
    cVar5 = FUN_1416b3850(*local_res20,&DAT_146526ec0,&local_88);
    if (cVar5 != '\0') {
      FUN_1421908b0(param_1 + 3,local_88);
    }
  }
  FUN_142186ed0(param_1,param_2);
  if (param_3 != '\0') {
    local_40 = &local_res20;
    local_48 = AK::MemoryMgr::StartProfileThreadUsage;
    local_res20 = (longlong *)((ulonglong)local_res20 & 0xffffffffffffff00);
    local_98[0] = 1;
    local_a8 = (longlong ****)0x0;
    ppplStack_a0 = (longlong ***)0x0;
    local_88 = param_1;
    if ((*param_2 != 0) && (cVar5 = FUN_1416b3850(*param_2,&DAT_146526b28,&local_78), cVar5 != '\0')
       ) {
      FUN_142190370(&local_a8,local_78);
    }
    local_90 = (longlong ***)&local_88;
    FUN_14217abd0(&local_a8,&local_90);
    pppplVar3 = local_a8;
    iVar7 = (int)ppplStack_a0;
    uVar11 = (ulonglong)(int)ppplStack_a0;
    for (pppplVar8 = local_a8; pppplVar8 != local_a8 + uVar11 * 9; pppplVar8 = pppplVar8 + 9) {
      pppplVar8[3] = (longlong ***)local_88[5];
    }
    ppplStack_a0 = (longlong ***)CONCAT44(ppplStack_a0._4_4_,1);
    local_88 = (longlong ***)local_98;
    local_50 = &local_48;
    uStack_80 = ppplStack_a0;
    local_78 = (longlong ***)local_a8;
    iStack_70 = iVar7;
    local_a8 = &local_90;
    ppplStack_a0 = (longlong ***)&local_88;
    local_90 = param_1;
    local_60 = param_1;
    local_58 = DAT_146aeae90;
    FUN_1421797d0(&local_78,&local_a8,&local_60);
    if (iVar7 != 0) {
      pppplVar8 = pppplVar3 + 4;
      do {
        if (pppplVar8[2] != (longlong ***)0x0) {
          FMemory::Free();
        }
        if (*pppplVar8 != (longlong ***)0x0) {
          FMemory::Free();
        }
        if (pppplVar8[-3] != (longlong ***)0x0) {
          FMemory::Free();
        }
        pppplVar8 = pppplVar8 + 9;
        uVar10 = (int)uVar11 - 1;
        uVar11 = (ulonglong)uVar10;
      } while (uVar10 != 0);
    }
    if (pppplVar3 != (longlong ****)0x0) {
      FMemory::Free(pppplVar3);
    }
  }
  cVar5 = FUN_1416b3850(*param_2,&DAT_146526af8,&local_68);
  if (cVar5 != '\0') {
    plVar14 = (longlong *)*local_68;
    plVar13 = plVar14 + (longlong)(int)local_68[1] * 2;
    for (; plVar14 != plVar13; plVar14 = plVar14 + 2) {
      ppplVar9 = (longlong ***)0x0;
      plVar2 = (longlong *)*plVar14;
      if (((plVar2 != (longlong *)0x0) &&
          (cVar5 = (**(code **)(*plVar2 + 0x28))(plVar2,&local_res20), plVar2 = local_res20,
          cVar5 != '\0')) && (*local_res20 != 0)) {
        lVar6 = FUN_14218c420();
        plVar12 = *(longlong **)(lVar6 + 0x70);
        iVar7 = *(int *)(lVar6 + 0x80) + -1;
        if (*(int *)(lVar6 + 0x80) == 0) {
          iVar7 = 0;
        }
        plVar1 = plVar12 + ((int)(((longlong)iVar7 / 3 + ((longlong)iVar7 >> 0x3f) & 0xffffffffU) >>
                                 0x1f) + iVar7 / 3 + (iVar7 >> 0x1f));
        if (plVar12 != (longlong *)0x0) {
          ppplVar9 = (longlong ***)*plVar12;
        }
        FUN_1421960e0(lVar6 + 0x70,&local_60);
        ppplVar4 = local_60;
        while (ppplVar9 != ppplVar4) {
          cVar5 = FUN_14218fec0(ppplVar9,plVar2);
          if (cVar5 != '\0') {
            FUN_142186910(ppplVar9,plVar2,param_3);
            break;
          }
          ppplVar9 = ppplVar9 + 0x24;
          if ((plVar12 != plVar1) && (ppplVar9 == (longlong ***)(*plVar12 + 0x360))) {
            ppplVar9 = (longlong ***)plVar12[1];
            plVar12 = plVar12 + 1;
          }
        }
      }
    }
  }
  return 1;
}



// FUNCTION 142186910 FUN_142186910 body=492 status=ok
// SIG undefined FUN_142186910(void)

ulonglong FUN_142186910(int *param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  void *_Src;
  int *piVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  int *piVar8;
  int *piVar9;
  int local_res20;
  undefined4 uStackX_24;
  int *local_48;
  undefined4 uStack_40;
  int *local_38;
  undefined8 local_30;
  
  plVar6 = (longlong *)FUN_14218fec0();
  if ((((char)plVar6 != '\0') &&
      (plVar6 = (longlong *)FUN_142186ed0(param_1,param_2), param_3 != '\0')) &&
     (plVar3 = (longlong *)*param_2, plVar3 != (longlong *)0x0)) {
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(plVar3,&local_res20);
    plVar7 = (longlong *)0x0;
    if (local_res20 != -1) {
      plVar7 = (longlong *)(*plVar3 + (longlong)local_res20 * 0x28);
    }
    plVar6 = plVar7 + 2;
    if (plVar7 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    if (((plVar6 != (longlong *)0x0) && (*plVar6 != 0)) && (*(int *)(*plVar6 + 8) == 5)) {
      local_38 = (int *)0x0;
      local_30 = 0;
      if ((*param_2 != 0) &&
         (cVar5 = FUN_1416b3850(*param_2,&DAT_146526b28,&local_res20), cVar5 != '\0')) {
        FUN_142190370(&local_38,CONCAT44(uStackX_24,local_res20));
      }
      local_48 = param_1;
      FUN_14217ad80(&local_38,&local_48);
      piVar4 = local_38;
      piVar9 = local_38 + (longlong)(int)local_30 * 0x12;
      if (local_38 != piVar9) {
        piVar8 = local_38 + 0xb;
        do {
          piVar1 = piVar8 + -3;
          *(undefined8 *)(piVar8 + -5) = *(undefined8 *)(*(longlong *)(param_1 + 0xc) + 0x28);
          if (piVar1 != param_1 + 0xe) {
            iVar2 = param_1[0x10];
            _Src = *(void **)(param_1 + 0xe);
            piVar8[-1] = iVar2;
            if ((iVar2 == 0) && (*piVar8 == 0)) {
              *piVar8 = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(piVar1,iVar2);
              _guard_xfg_dispatch_icall_nop(*(void **)piVar1,_Src,(longlong)iVar2 * 2);
            }
          }
          piVar1 = piVar8 + 7;
          piVar8 = piVar8 + 0x12;
        } while (piVar1 != piVar9);
      }
      local_48 = piVar4;
      uStack_40 = (int)local_30;
      FUN_142184e00(param_1,&local_48);
      plVar6 = (longlong *)FUN_14217ea10(&local_38);
    }
  }
  return (ulonglong)plVar6 & 0xffffffffffffff00;
}



// FUNCTION 142186b00 FUN_142186b00 body=420 status=ok
// SIG undefined FUN_142186b00(void)

void FUN_142186b00(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 local_res8;
  longlong *local_res10;
  longlong *local_res18;
  undefined1 local_res20 [8];
  undefined2 *local_38;
  undefined8 local_30;
  
  if (*param_1 != 0) {
    local_30 = 8;
    local_38 = (undefined2 *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"Globals",0x10);
    cVar2 = FUN_1416b3e60(*param_1,&local_38,&local_res8);
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (cVar2 != '\0') {
      lVar3 = FUN_14218c420();
      FUN_142186ed0(lVar3 + 0x18,local_res8);
    }
    local_38 = (undefined2 *)0x0;
    local_30 = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"Events",0xe);
    cVar2 = FUN_1416b3850(*param_1,&local_38,&local_res10);
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (cVar2 != '\0') {
      puVar6 = (undefined8 *)*local_res10;
      puVar7 = puVar6 + (longlong)(int)local_res10[1] * 2;
      for (; puVar6 != puVar7; puVar6 = puVar6 + 2) {
        cVar2 = (**(code **)(*(longlong *)*puVar6 + 0x28))((longlong *)*puVar6,&local_res18);
        plVar1 = local_res18;
        if ((cVar2 != '\0') && (*local_res18 != 0)) {
          local_38 = (undefined2 *)0x0;
          local_30 = 0;
          cVar2 = FUN_1416b40a0(*local_res18,&DAT_146526ae8,&local_38);
          if (cVar2 != '\0') {
            puVar5 = &DAT_143f3eda8;
            if ((int)local_30 != 0) {
              puVar5 = local_38;
            }
            puVar4 = (undefined8 *)FName::FName(local_res20,puVar5,1);
            lVar3 = FUN_14218b040(*puVar4);
            if (lVar3 != 0) {
              FUN_142186580(lVar3,plVar1,1);
            }
          }
          if (local_38 != (undefined2 *)0x0) {
            FMemory::Free();
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142186cb0 FUN_142186cb0 body=127 status=ok
// SIG undefined FUN_142186cb0(void)

undefined8 FUN_142186cb0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puVar2 = (undefined8 *)FName::FName(local_res10,param_4,1);
  FUN_14218da20(uVar1,&local_res8,DAT_146aeae98,*puVar2,param_4);
  *param_3 = local_res8;
  FUN_142186d30(param_1,param_2,&local_res8);
  return param_2;
}



// FUNCTION 142186d30 FUN_142186d30 body=302 status=ok
// SIG undefined FUN_142186d30(void)

undefined8 FUN_142186d30(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  code *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  plVar1 = (longlong *)(param_1 + 0x90);
  plVar5 = (longlong *)*plVar1;
  iVar3 = *(int *)(param_1 + 0x98);
  plVar2 = plVar5 + (longlong)iVar3 * 6;
  if (plVar5 != plVar2) {
    do {
      if ((*(longlong *)*plVar5 == *(longlong *)*param_3) &&
         (*(longlong *)(((longlong *)*plVar5)[1] + 0x28) ==
          *(longlong *)(((longlong *)*param_3)[1] + 0x28))) goto LAB_142186dce;
      plVar5 = plVar5 + 6;
    } while (plVar5 != plVar2);
  }
  *(int *)(param_1 + 0x98) = iVar3 + 1;
  if (*(int *)(param_1 + 0x9c) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
  }
  plVar5 = (longlong *)(*plVar1 + (longlong)iVar3 * 0x30);
  *plVar5 = *param_3;
  plVar5[4] = 0;
  plVar5[5] = 0;
LAB_142186dce:
  local_38 = 0;
  local_28 = 0;
  if (*(int *)(param_1 + 0xa8) == 0) {
    puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_58);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_FUN_143f3f130;
    }
    local_68[0] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  else {
    puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_58);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[1] = param_1;
      *puVar4 = &PTR_FUN_143f77b70;
    }
    local_68[0] = (code *)&LAB_142184410;
  }
  FUN_14217dd40(param_2,plVar5,local_68);
  return param_2;
}



// FUNCTION 142186e60 FUN_142186e60 body=104 status=ok
// SIG undefined FUN_142186e60(void)

ulonglong FUN_142186e60(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong in_RAX;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = *param_2;
    uVar2 = (**(code **)(*param_1 + 0x10))();
    uVar3 = (**(code **)(*param_1 + 8))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000142186eb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(lVar1 + 0x18))(param_2,uVar3,uVar2);
    return uVar4;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142186ed0 FUN_142186ed0 body=109 status=ok
// SIG undefined FUN_142186ed0(void)

void FUN_142186ed0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  puVar1 = *(undefined8 **)(param_1 + 8);
  uVar2 = (longlong)*(int *)(param_1 + 0x10) & 0x1fffffffffffffff;
  if (puVar1 + *(int *)(param_1 + 0x10) < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 0x20))((longlong *)*puVar1,param_2);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



// FUNCTION 142186f40 FUN_142186f40 body=158 status=ok
// SIG undefined FUN_142186f40(void)

void FUN_142186f40(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar6 = 0;
  plVar5 = (longlong *)param_1[1];
  uVar7 = (longlong)(int)param_1[2] & 0x1fffffffffffffff;
  if (plVar5 + (int)param_1[2] < plVar5) {
    uVar7 = uVar6;
  }
  if (uVar7 != 0) {
    do {
      plVar1 = (longlong *)*plVar5;
      if (plVar1 != (longlong *)0x0) {
        lVar2 = *plVar1;
        uVar3 = (**(code **)(*param_1 + 0x10))(param_1);
        uVar4 = (**(code **)(*param_1 + 8))(param_1);
        (**(code **)(lVar2 + 0x18))(plVar1,uVar4,uVar3);
      }
      plVar5 = plVar5 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar7);
  }
  return;
}



// FUNCTION 142186fe0 FUN_142186fe0 body=132 status=ok
// SIG undefined FUN_142186fe0(void)

undefined8 * FUN_142186fe0(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  local_res8 = *param_1;
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x18))(param_2,&local_res8);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)operator_new(0x18);
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      uVar1 = *param_1;
      *puVar2 = &PTR_FUN_144fdca70;
      puVar2[1] = uVar1;
      *(undefined1 *)((longlong)puVar2 + 0x14) = 0;
    }
    (**(code **)(*param_2 + 0x20))(param_2,puVar2);
    FUN_142186e60(param_2,puVar2);
  }
  return puVar2;
}



// FUNCTION 142187070 FUN_142187070 body=164 status=ok
// SIG undefined FUN_142187070(void)

undefined8 * FUN_142187070(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  local_res8 = *param_1;
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x18))(param_2,&local_res8);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)operator_new(0x60);
    if (puVar2 != (undefined8 *)0x0) {
      uVar1 = *param_1;
      *puVar2 = &PTR_FUN_144fdcc98;
      puVar2[1] = uVar1;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      *(undefined4 *)(puVar2 + 8) = 0xffffffff;
      *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
      puVar2[10] = 0;
      *(undefined4 *)(puVar2 + 0xb) = 0;
    }
    (**(code **)(*param_2 + 0x20))(param_2,puVar2);
    FUN_142186e60(param_2,puVar2);
  }
  return puVar2;
}



// FUNCTION 142187120 FUN_142187120 body=164 status=ok
// SIG undefined FUN_142187120(void)

undefined8 * FUN_142187120(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  local_res8 = *param_1;
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x18))(param_2,&local_res8);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)operator_new(0x60);
    if (puVar2 != (undefined8 *)0x0) {
      uVar1 = *param_1;
      *puVar2 = &PTR__scalar_deleting_destructor__144fdcc68;
      puVar2[1] = uVar1;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      *(undefined4 *)(puVar2 + 8) = 0xffffffff;
      *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
      puVar2[10] = 0;
      *(undefined4 *)(puVar2 + 0xb) = 0;
    }
    (**(code **)(*param_2 + 0x20))(param_2,puVar2);
    FUN_142186e60(param_2,puVar2);
  }
  return puVar2;
}



// FUNCTION 1421871d0 FUN_1421871d0 body=136 status=ok
// SIG undefined FUN_1421871d0(void)

undefined8 * FUN_1421871d0(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  local_res8 = *param_1;
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x18))(param_2,&local_res8);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)operator_new(0x18);
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      uVar1 = *param_1;
      *puVar2 = &PTR_FUN_144fdcaa0;
      puVar2[1] = uVar1;
      puVar2[2] = 0;
    }
    (**(code **)(*param_2 + 0x20))(param_2,puVar2);
    FUN_142186e60(param_2,puVar2);
  }
  return puVar2;
}



// FUNCTION 142187260 FUN_142187260 body=132 status=ok
// SIG undefined FUN_142187260(void)

undefined8 * FUN_142187260(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  local_res8 = *param_1;
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x18))(param_2,&local_res8);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)operator_new(0x18);
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      uVar1 = *param_1;
      *puVar2 = &PTR_FUN_144fdcb48;
      puVar2[1] = uVar1;
      *(undefined1 *)(puVar2 + 2) = 0;
    }
    (**(code **)(*param_2 + 0x20))(param_2,puVar2);
    FUN_142186e60(param_2,puVar2);
  }
  return puVar2;
}



// FUNCTION 1421872f0 FUN_1421872f0 body=566 status=ok
// SIG undefined FUN_1421872f0(void)

longlong FUN_1421872f0(undefined8 param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong local_48 [4];
  
  lVar4 = FUN_14218c420();
  plVar8 = *(longlong **)(lVar4 + 0x70);
  lVar9 = 0;
  plVar5 = (longlong *)(lVar4 + 0x70);
  iVar3 = *(int *)(lVar4 + 0x80) + -1;
  if (*(int *)(lVar4 + 0x80) == 0) {
    iVar3 = 0;
  }
  plVar1 = plVar8 + ((int)(((longlong)iVar3 / 3 + ((longlong)iVar3 >> 0x3f) & 0xffffffffU) >> 0x1f)
                    + iVar3 / 3 + (iVar3 >> 0x1f));
  if (plVar8 != (longlong *)0x0) {
    lVar9 = *plVar8;
  }
  FUN_1421960e0(plVar5,local_48);
  while (lVar9 != local_48[0]) {
    if (*(longlong *)(*(longlong *)(lVar9 + 0x30) + 0x28) == *(longlong *)(param_2 + 0x28)) {
      if (*(int *)(lVar9 + 0x40) == 0) {
        puVar6 = &DAT_143f3eda8;
      }
      else {
        puVar6 = *(undefined2 **)(lVar9 + 0x38);
      }
      iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,param_1);
      if (iVar3 == 0) goto LAB_14218741b;
    }
    lVar9 = lVar9 + 0x120;
    if ((plVar8 != plVar1) && (lVar9 == *plVar8 + 0x360)) {
      lVar9 = plVar8[1];
      plVar8 = plVar8 + 1;
    }
  }
  iVar3 = FUN_1421833b0(plVar5,1);
  iVar7 = iVar3 / 3 + (iVar3 >> 0x1f) +
          (int)(((longlong)iVar3 / 3 + ((longlong)iVar3 >> 0x3f) & 0xffffffffU) >> 0x1f);
  lVar9 = (ulonglong)(uint)(iVar3 + iVar7 * -3) * 0x120 +
          *(longlong *)(*plVar5 + (longlong)iVar7 * 8);
  if (lVar9 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = FUN_14217c1c0(lVar9,param_1,param_2);
  }
LAB_14218741b:
  plVar5 = (longlong *)0x0;
  if (((((*(byte *)(lVar9 + 0x58) & 1) == 0) && ((int)param_3[1] != 0)) &&
      ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(*(longlong *)*param_3 + 0x18))(), cVar2 != '\0')) {
    plVar8 = plVar5;
    if ((int)param_3[1] != 0) {
      plVar8 = (longlong *)*param_3;
    }
    (**(code **)(*plVar8 + 0x38))(plVar8,lVar9);
    *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 1;
    if ((((int)param_4[1] != 0) && ((longlong *)*param_4 != (longlong *)0x0)) &&
       (cVar2 = (**(code **)(*(longlong *)*param_4 + 0x18))(), plVar5 = (longlong *)0x0,
       cVar2 != '\0')) {
      plVar5 = (longlong *)FDelegateHandle::GenerateNewID();
      iVar3 = *(int *)(lVar9 + 0xf8);
      *(int *)(lVar9 + 0xf8) = iVar3 + 1;
      if (*(int *)(lVar9 + 0xfc) < iVar3 + 1) {
        TArray<FCompactPose,TInlineAllocator<2,FDefaultAllocator>_>::ResizeGrow(lVar9 + 0xc0,iVar3);
      }
      lVar4 = *(longlong *)(lVar9 + 0xf0);
      if (*(longlong *)(lVar9 + 0xf0) == 0) {
        lVar4 = lVar9 + 0xc0;
      }
      *(longlong **)(lVar4 + (longlong)iVar3 * 0x18) = plVar5;
      lVar4 = lVar4 + (longlong)iVar3 * 0x18;
      plVar8 = (longlong *)(lVar4 + 8);
      *plVar8 = 0;
      *(undefined4 *)(lVar4 + 0x10) = 0;
      if (((param_4 != plVar8) && ((int)param_4[1] != 0)) &&
         ((longlong *)*param_4 != (longlong *)0x0)) {
        (**(code **)(*(longlong *)*param_4 + 0x30))();
      }
    }
    *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) & 0xfd;
    *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | -(plVar5 != (longlong *)0x0) & 2U;
  }
  return lVar9;
}



// FUNCTION 142187530 FUN_142187530 body=66 status=ok
// SIG undefined FUN_142187530(void)

void FUN_142187530(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144fdd090;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144fdd0d8;
  }
  return;
}



// FUNCTION 142187580 CreateCopy body=48 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<FString___cdecl(TSharedPtr<FInterfaceContainer,0>),<lambda_5e27373bf3904ac0086c7d4deb00b610>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144fdd1a0;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  }
  return;
}



// FUNCTION 1421875b0 CreateCopy body=48 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<FString___cdecl(TSharedPtr<FInterfaceContainer,0>),<lambda_5e27373bf3904ac0086c7d4deb00b610>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144fdd160;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  }
  return;
}



// FUNCTION 1421875e0 FUN_1421875e0 body=56 status=ok
// SIG undefined FUN_1421875e0(void)

void FUN_1421875e0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144fdd120;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  }
  return;
}



// FUNCTION 142187620 FUN_142187620 body=74 status=ok
// SIG undefined FUN_142187620(void)

void FUN_142187620(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_144fdd1e0;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_GetPoolName_144fdd228;
  }
  return;
}



// FUNCTION 142187670 FUN_142187670 body=2721 status=ok
// SIG undefined FUN_142187670(void)

void FUN_142187670(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *local_res8;
  longlong *local_res10;
  undefined1 local_res18 [16];
  
  lVar2 = *(longlong *)(*param_1 + 0x30);
  plVar6 = (longlong *)FName::FName(&local_res10,L"gameperf_frame_time",1);
  uVar4 = DAT_146aeae98;
  local_res8 = (longlong *)0x0;
  lVar3 = *plVar6;
  if (*(longlong *)(lVar2 + 0x28) == 0) {
    FUN_14217bd20(&local_res8);
    plVar7 = local_res8;
  }
  else {
    local_res8 = (longlong *)0x0;
    if (*(longlong *)(lVar2 + 0x28) != 0) {
      puVar8 = (undefined8 *)FUN_14218dae0(lVar2,DAT_146aeae98);
      plVar9 = (longlong *)*puVar8;
      plVar6 = plVar9 + *(int *)(puVar8 + 1);
      for (; plVar9 != plVar6; plVar9 = plVar9 + 1) {
        plVar7 = (longlong *)*plVar9;
        if (*(longlong *)*plVar9 == lVar3) goto LAB_142187710;
      }
    }
    FUN_14217bd20(&local_res8);
    plVar7 = local_res8;
LAB_142187710:
    local_res8 = (longlong *)0x0;
    if (*plVar7 == 0) {
      plVar7 = (longlong *)FUN_142191000(lVar3,lVar2,L"gameperf_frame_time");
      plVar6 = (longlong *)FUN_14218dae0(lVar2,uVar4);
      iVar1 = (int)plVar6[1];
      *(int *)(plVar6 + 1) = iVar1 + 1;
      if (*(int *)((longlong)plVar6 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6,iVar1);
      }
      *(longlong **)(*plVar6 + (longlong)iVar1 * 8) = plVar7;
    }
  }
  param_1[1] = (longlong)plVar7;
  lVar2 = *(longlong *)(*param_1 + 0x30);
  plVar6 = (longlong *)FName::FName(&local_res10,L"gameperf_game_time",1);
  uVar4 = DAT_146aeae98;
  local_res8 = (longlong *)0x0;
  lVar3 = *plVar6;
  if (*(longlong *)(lVar2 + 0x28) == 0) {
    FUN_14217bd20(&local_res8);
    plVar7 = local_res8;
  }
  else {
    local_res8 = (longlong *)0x0;
    if (*(longlong *)(lVar2 + 0x28) != 0) {
      puVar8 = (undefined8 *)FUN_14218dae0(lVar2,DAT_146aeae98);
      plVar9 = (longlong *)*puVar8;
      plVar6 = plVar9 + *(int *)(puVar8 + 1);
      for (; plVar9 != plVar6; plVar9 = plVar9 + 1) {
        plVar7 = (longlong *)*plVar9;
        if (*(longlong *)*plVar9 == lVar3) goto LAB_1421877ee;
      }
    }
    FUN_14217bd20(&local_res8);
    plVar7 = local_res8;
LAB_1421877ee:
    local_res8 = (longlong *)0x0;
    if (*plVar7 == 0) {
      plVar7 = (longlong *)FUN_142191000(lVar3,lVar2,L"gameperf_game_time");
      plVar6 = (longlong *)FUN_14218dae0(lVar2,uVar4);
      iVar1 = (int)plVar6[1];
      *(int *)(plVar6 + 1) = iVar1 + 1;
      if (*(int *)((longlong)plVar6 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6,iVar1);
      }
      *(longlong **)(*plVar6 + (longlong)iVar1 * 8) = plVar7;
    }
  }
  param_1[2] = (longlong)plVar7;
  lVar2 = *(longlong *)(*param_1 + 0x30);
  plVar6 = (longlong *)FName::FName(&local_res10,L"gameperf_render_time",1);
  uVar4 = DAT_146aeae98;
  local_res8 = (longlong *)0x0;
  lVar3 = *plVar6;
  if (*(longlong *)(lVar2 + 0x28) == 0) {
    FUN_14217bd20(&local_res8);
    plVar7 = local_res8;
  }
  else {
    local_res8 = (longlong *)0x0;
    if (*(longlong *)(lVar2 + 0x28) != 0) {
      puVar8 = (undefined8 *)FUN_14218dae0(lVar2,DAT_146aeae98);
      plVar9 = (longlong *)*puVar8;
      plVar6 = plVar9 + *(int *)(puVar8 + 1);
      for (; plVar9 != plVar6; plVar9 = plVar9 + 1) {
        plVar7 = (longlong *)*plVar9;
        if (*(longlong *)*plVar9 == lVar3) goto LAB_1421878ce;
      }
    }
    FUN_14217bd20(&local_res8);
    plVar7 = local_res8;
LAB_1421878ce:
    local_res8 = (longlong *)0x0;
    if (*plVar7 == 0) {
      plVar7 = (longlong *)FUN_142191000(lVar3,lVar2,L"gameperf_render_time");
      plVar6 = (longlong *)FUN_14218dae0(lVar2,uVar4);
      iVar1 = (int)plVar6[1];
      *(int *)(plVar6 + 1) = iVar1 + 1;
      if (*(int *)((longlong)plVar6 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6,iVar1);
      }
      *(longlong **)(*plVar6 + (longlong)iVar1 * 8) = plVar7;
    }
  }
  param_1[3] = (longlong)plVar7;
  lVar2 = *(longlong *)(*param_1 + 0x30);
  plVar6 = (longlong *)FName::FName(&local_res10,L"gameperf_gpu_time",1);
  uVar4 = DAT_146aeae98;
  local_res8 = (longlong *)0x0;
  lVar3 = *plVar6;
  if (*(longlong *)(lVar2 + 0x28) == 0) {
    FUN_14217bd20(&local_res8);
    plVar7 = local_res8;
  }
  else {
    local_res8 = (longlong *)0x0;
    if (*(longlong *)(lVar2 + 0x28) != 0) {
      puVar8 = (undefined8 *)FUN_14218dae0(lVar2,DAT_146aeae98);
      plVar9 = (longlong *)*puVar8;
      plVar6 = plVar9 + *(int *)(puVar8 + 1);
      for (; plVar9 != plVar6; plVar9 = plVar9 + 1) {
        plVar7 = (longlong *)*plVar9;
        if (*(longlong *)*plVar9 == lVar3) goto LAB_1421879ae;
      }
    }
    FUN_14217bd20(&local_res8);
    plVar7 = local_res8;
LAB_1421879ae:
    local_res8 = (longlong *)0x0;
    if (*plVar7 == 0) {
      plVar7 = (longlong *)FUN_142191000(lVar3,lVar2,L"gameperf_gpu_time");
      plVar6 = (longlong *)FUN_14218dae0(lVar2,uVar4);
      iVar1 = (int)plVar6[1];
      *(int *)(plVar6 + 1) = iVar1 + 1;
      if (*(int *)((longlong)plVar6 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6,iVar1);
      }
      *(longlong **)(*plVar6 + (longlong)iVar1 * 8) = plVar7;
    }
  }
  param_1[4] = (longlong)plVar7;
  lVar2 = *(longlong *)(*param_1 + 0x30);
  puVar8 = (undefined8 *)FName::FName(&local_res10,L"gameperf_hitches",1);
  uVar5 = DAT_146aeae98;
  local_res8 = (longlong *)0x0;
  uVar4 = *puVar8;
  if (*(longlong *)(lVar2 + 0x28) == 0) {
    FUN_14217bd20(&local_res8);
    plVar6 = local_res8;
  }
  else {
    plVar6 = (longlong *)FUN_14218af80(lVar2,DAT_146aeae98,uVar4);
    if (plVar6 == (longlong *)0x0) {
      FUN_14217bd20(&local_res8);
      plVar6 = local_res8;
    }
    local_res8 = (longlong *)0x0;
    if (*plVar6 == 0) {
      plVar6 = (longlong *)FUN_142190d60(lVar2,uVar5,uVar4,L"gameperf_hitches");
    }
  }
  param_1[5] = (longlong)plVar6;
  lVar2 = *(longlong *)(*param_1 + 0x30);
  puVar8 = (undefined8 *)FName::FName(&local_res10,L"gameperf_net_bytes_in",1);
  uVar5 = DAT_146aeae98;
  local_res8 = (longlong *)0x0;
  uVar4 = *puVar8;
  if (*(longlong *)(lVar2 + 0x28) == 0) {
    FUN_14217bd20(&local_res8);
    plVar6 = local_res8;
  }
  else {
    plVar6 = (longlong *)FUN_14218af80(lVar2,DAT_146aeae98,uVar4);
    if (plVar6 == (longlong *)0x0) {
      FUN_14217bd20(&local_res8);
      plVar6 = local_res8;
    }
    local_res8 = (longlong *)0x0;
    if (*plVar6 == 0) {
      plVar6 = (longlong *)FUN_142190d60(lVar2,uVar5,uVar4,L"gameperf_net_bytes_in");
    }
  }
  param_1[6] = (longlong)plVar6;
  lVar2 = *(longlong *)(*param_1 + 0x30);
  puVar8 = (undefined8 *)FName::FName(local_res18,L"gameperf_net_bytes_out",1);
  uVar5 = DAT_146aeae98;
  local_res8 = (longlong *)0x0;
  uVar4 = *puVar8;
  if (*(longlong *)(lVar2 + 0x28) == 0) {
    FUN_14217bd20(&local_res8);
    plVar6 = local_res8;
  }
  else {
    FUN_14218afd0(lVar2,&local_res10,DAT_146aeae98,uVar4);
    local_res8 = (longlong *)0x0;
    plVar6 = local_res10;
    if (*local_res10 == 0) {
      plVar6 = (longlong *)FUN_142190d60(lVar2,uVar5,uVar4,L"gameperf_net_bytes_out");
    }
  }
  param_1[7] = (longlong)plVar6;
  lVar2 = *(longlong *)(*param_1 + 0x30);
  puVar8 = (undefined8 *)FName::FName(local_res18,L"gameperf_net_voicebytes_in",1);
  uVar5 = DAT_146aeae98;
  local_res8 = (longlong *)0x0;
  uVar4 = *puVar8;
  if (*(longlong *)(lVar2 + 0x28) == 0) {
    FUN_14217bd20(&local_res8);
    plVar6 = local_res8;
  }
  else {
    FUN_14218afd0(lVar2,&local_res10,DAT_146aeae98,uVar4);
    local_res8 = (longlong *)0x0;
    plVar6 = local_res10;
    if (*local_res10 == 0) {
      plVar6 = (longlong *)FUN_142190d60(lVar2,uVar5,uVar4,L"gameperf_net_voicebytes_in");
    }
  }
  param_1[8] = (longlong)plVar6;
  lVar2 = *(longlong *)(*param_1 + 0x30);
  puVar8 = (undefined8 *)FName::FName(local_res18,L"gameperf_net_voicebytes_out",1);
  uVar5 = DAT_146aeae98;
  local_res8 = (longlong *)0x0;
  uVar4 = *puVar8;
  if (*(longlong *)(lVar2 + 0x28) == 0) {
    FUN_14217bd20(&local_res8);
    plVar6 = local_res8;
  }
  else {
    FUN_14218afd0(lVar2,&local_res10,DAT_146aeae98,uVar4);
    local_res8 = (longlong *)0x0;
    plVar6 = local_res10;
    if (*local_res10 == 0) {
      plVar6 = (longlong *)FUN_142190d60(lVar2,uVar5,uVar4,L"gameperf_net_voicebytes_out");
    }
  }
  param_1[9] = (longlong)plVar6;
  lVar2 = *(longlong *)(*param_1 + 0x30);
  puVar8 = (undefined8 *)FName::FName(local_res18,L"gameperf_net_loss_in",1);
  uVar5 = DAT_146aeae98;
  local_res8 = (longlong *)0x0;
  uVar4 = *puVar8;
  if (*(longlong *)(lVar2 + 0x28) == 0) {
    FUN_14217bd20(&local_res8);
    plVar6 = local_res8;
  }
  else {
    FUN_14218afd0(lVar2,&local_res10,DAT_146aeae98,uVar4);
    local_res8 = (longlong *)0x0;
    plVar6 = local_res10;
    if (*local_res10 == 0) {
      plVar6 = (longlong *)FUN_142190d60(lVar2,uVar5,uVar4,L"gameperf_net_loss_in");
    }
  }
  param_1[10] = (longlong)plVar6;
  lVar2 = *(longlong *)(*param_1 + 0x30);
  puVar8 = (undefined8 *)FName::FName(local_res18,L"gameperf_net_loss_out",1);
  uVar5 = DAT_146aeae98;
  local_res8 = (longlong *)0x0;
  uVar4 = *puVar8;
  if (*(longlong *)(lVar2 + 0x28) == 0) {
    FUN_14217bd20(&local_res8);
    plVar6 = local_res8;
  }
  else {
    FUN_14218afd0(lVar2,&local_res10,DAT_146aeae98,uVar4);
    local_res8 = (longlong *)0x0;
    plVar6 = local_res10;
    if (*local_res10 == 0) {
      plVar6 = (longlong *)FUN_142190d60(lVar2,uVar5,uVar4,L"gameperf_net_loss_out");
    }
  }
  param_1[0xb] = (longlong)plVar6;
  lVar2 = *(longlong *)(*param_1 + 0x30);
  puVar8 = (undefined8 *)FName::FName(local_res18,L"gameperf_net_lagging",1);
  uVar5 = DAT_146aeae98;
  local_res8 = (longlong *)0x0;
  uVar4 = *puVar8;
  if (*(longlong *)(lVar2 + 0x28) == 0) {
    FUN_14217bd20(&local_res8);
    plVar6 = local_res8;
  }
  else {
    FUN_14218afd0(lVar2,&local_res10,DAT_146aeae98,uVar4);
    local_res8 = (longlong *)0x0;
    plVar6 = local_res10;
    if (*local_res10 == 0) {
      plVar6 = (longlong *)FUN_142190d60(lVar2,uVar5,uVar4,L"gameperf_net_lagging");
    }
  }
  param_1[0xc] = (longlong)plVar6;
  lVar2 = *(longlong *)(*param_1 + 0x30);
  puVar8 = (undefined8 *)FName::FName(local_res18,L"gameperf_net_ping",1);
  uVar5 = DAT_146aeae98;
  local_res8 = (longlong *)0x0;
  uVar4 = *puVar8;
  if (*(longlong *)(lVar2 + 0x28) == 0) {
    FUN_14217bd20(&local_res8);
    plVar6 = local_res8;
  }
  else {
    FUN_14218afd0(lVar2,&local_res10,DAT_146aeae98,uVar4);
    local_res8 = (longlong *)0x0;
    plVar6 = local_res10;
    if (*local_res10 == 0) {
      plVar6 = (longlong *)FUN_142190d60(lVar2,uVar5,uVar4,L"gameperf_net_ping");
    }
  }
  param_1[0xd] = (longlong)plVar6;
  lVar2 = *(longlong *)(*param_1 + 0x30);
  puVar8 = (undefined8 *)FName::FName(local_res18,L"gameperf_net_is_turn_connection",1);
  uVar5 = DAT_146aeae98;
  local_res8 = (longlong *)0x0;
  uVar4 = *puVar8;
  if (*(longlong *)(lVar2 + 0x28) == 0) {
    FUN_14217bd20(&local_res8);
    plVar6 = local_res8;
  }
  else {
    FUN_14218afd0(lVar2,&local_res10,DAT_146aeae98,uVar4);
    local_res8 = (longlong *)0x0;
    plVar6 = local_res10;
    if (*local_res10 == 0) {
      plVar6 = (longlong *)FUN_142190d60(lVar2,uVar5,uVar4,L"gameperf_net_is_turn_connection");
    }
  }
  param_1[0xe] = (longlong)plVar6;
  lVar2 = *(longlong *)(*param_1 + 0x30);
  puVar8 = (undefined8 *)FName::FName(local_res18,L"gameperf_net_driver_name",1);
  uVar5 = DAT_146aeae98;
  local_res8 = (longlong *)0x0;
  uVar4 = *puVar8;
  if (*(longlong *)(lVar2 + 0x28) == 0) {
    FUN_14217bd20(&local_res8);
    plVar6 = local_res8;
  }
  else {
    FUN_14218afd0(lVar2,&local_res10,DAT_146aeae98,uVar4);
    local_res8 = (longlong *)0x0;
    plVar6 = local_res10;
    if (*local_res10 == 0) {
      plVar6 = (longlong *)FUN_142190d60(lVar2,uVar5,uVar4,L"gameperf_net_driver_name");
    }
  }
  param_1[0xf] = (longlong)plVar6;
  lVar2 = *(longlong *)(*param_1 + 0x30);
  puVar8 = (undefined8 *)FName::FName(local_res18,L"gameperf_players_all",1);
  uVar5 = DAT_146aeae98;
  local_res8 = (longlong *)0x0;
  uVar4 = *puVar8;
  if (*(longlong *)(lVar2 + 0x28) == 0) {
    FUN_14217bd20(&local_res8);
    plVar6 = local_res8;
  }
  else {
    FUN_14218afd0(lVar2,&local_res10,DAT_146aeae98,uVar4);
    local_res8 = (longlong *)0x0;
    plVar6 = local_res10;
    if (*local_res10 == 0) {
      plVar6 = (longlong *)FUN_142190d60(lVar2,uVar5,uVar4,L"gameperf_players_all");
    }
  }
  param_1[0x10] = (longlong)plVar6;
  lVar2 = *(longlong *)(*param_1 + 0x30);
  puVar8 = (undefined8 *)FName::FName(local_res18,L"gameperf_players_local",1);
  uVar5 = DAT_146aeae98;
  local_res8 = (longlong *)0x0;
  uVar4 = *puVar8;
  if (*(longlong *)(lVar2 + 0x28) == 0) {
    FUN_14217bd20(&local_res8);
    plVar6 = local_res8;
  }
  else {
    FUN_14218afd0(lVar2,&local_res10,DAT_146aeae98,uVar4);
    local_res8 = (longlong *)0x0;
    plVar6 = local_res10;
    if (*local_res10 == 0) {
      plVar6 = (longlong *)FUN_142190d60(lVar2,uVar5,uVar4,L"gameperf_players_local");
    }
  }
  param_1[0x11] = (longlong)plVar6;
  lVar2 = *(longlong *)(*param_1 + 0x30);
  puVar8 = (undefined8 *)FName::FName(local_res18,L"gameperf_players_clients",1);
  uVar5 = DAT_146aeae98;
  local_res8 = (longlong *)0x0;
  uVar4 = *puVar8;
  if (*(longlong *)(lVar2 + 0x28) == 0) {
    FUN_14217bd20(&local_res8);
    local_res10 = local_res8;
  }
  else {
    FUN_14218afd0(lVar2,&local_res10,DAT_146aeae98,uVar4);
    local_res8 = (longlong *)0x0;
    if (*local_res10 == 0) {
      local_res10 = (longlong *)FUN_142190d60(lVar2,uVar5,uVar4,L"gameperf_players_clients");
    }
  }
  param_1[0x12] = (longlong)local_res10;
  return;
}



// FUNCTION 142188120 FUN_142188120 body=106 status=ok
// SIG undefined FUN_142188120(void)

void FUN_142188120(undefined8 param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_14217f2b0();
  lVar2 = FUN_14218c420();
  uVar1 = FLockFreeLinkPolicy::AllocLockFreeLink();
  if (uVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (&DAT_1468a81f8)[uVar1 >> 0xe] + (ulonglong)(uVar1 & 0x3fff) * 0x18;
  }
  *(undefined8 *)(lVar3 + 8) = param_1;
  FLockFreePointerListLIFORoot<0,1>::Push(lVar2 + 0x88,uVar1);
  return;
}



// FUNCTION 142188190 FUN_142188190 body=85 status=ok
// SIG undefined FUN_142188190(void)

void FUN_142188190(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
              (plVar1 + 0x1c);
    FUN_14217e9a0(plVar1 + 0x1a);
    FUN_14217eb70(plVar1 + 4);
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(plVar1,0xf0);
    return;
  }
  return;
}



// FUNCTION 1421881f0 FUN_1421881f0 body=3498 status=ok
// SIG undefined FUN_1421881f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1421881f0(undefined8 *param_1)

{
  longlong lVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  ushort *puVar14;
  byte *pbVar15;
  longlong *plVar16;
  int iVar17;
  int *piVar18;
  undefined2 *puVar19;
  longlong *plVar20;
  void *_Buf2;
  int iVar21;
  ulonglong uVar22;
  uint uVar23;
  char *pcVar24;
  bool bVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  int local_res10;
  longlong *local_228;
  longlong local_220;
  undefined8 uStack_218;
  longlong local_210;
  undefined2 local_208;
  ushort local_206;
  longlong *local_200;
  longlong *local_1f8;
  char *local_1f0;
  uint local_1e8;
  undefined4 local_1e4;
  longlong *local_1e0;
  uint local_1d8;
  undefined4 local_1d4;
  longlong *local_1c8;
  longlong *plStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  longlong *local_198;
  longlong *plStack_190;
  undefined8 local_188;
  undefined8 local_180;
  int *local_178;
  undefined8 local_170;
  undefined8 local_168;
  longlong *local_158;
  longlong *plStack_150;
  longlong **local_148;
  longlong *local_140;
  longlong *local_138;
  undefined2 *local_130;
  int local_128;
  longlong local_120;
  longlong local_118 [3];
  undefined2 local_100;
  ushort local_fe;
  longlong *local_f8;
  longlong local_f0 [3];
  undefined2 local_d8;
  ushort local_d6;
  longlong local_d0 [3];
  undefined2 local_b8;
  ushort local_b6;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70 [48];
  
  if (((DAT_146aeae14 != '\0') && (cVar3 = FUN_14218fca0(), cVar3 != '\0')) &&
     (0 < *(int *)(param_1 + 0x5c))) {
    plVar5 = (longlong *)FUN_14218dee0();
    if ((((int)plVar5[1] != 0) && ((longlong *)*plVar5 != (longlong *)0x0)) &&
       (cVar3 = (**(code **)(*(longlong *)*plVar5 + 0x18))(), cVar3 != '\0')) {
      puVar6 = (undefined8 *)FUN_14218dee0();
      if (*(int *)(puVar6 + 1) == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = (longlong *)*puVar6;
      }
      cVar3 = (**(code **)(*plVar5 + 0x38))(plVar5,param_1);
      if (cVar3 == '\0') {
        return;
      }
    }
    if (((*(int *)((longlong)param_1 + 0x34) == 0 && *(int *)(param_1 + 6) == 0) &&
        *(int *)((longlong)param_1 + 0x2c) == 0) && *(int *)(param_1 + 5) == 0) {
      puVar6 = (undefined8 *)FGuid::NewGuid(local_70);
    }
    else {
      local_80 = param_1[5];
      uStack_78 = param_1[6];
      puVar6 = &local_80;
    }
    if (*(int *)(param_1 + 2) == 0) {
      puVar19 = &DAT_143f3eda8;
    }
    else {
      puVar19 = (undefined2 *)param_1[1];
    }
    uVar9 = *param_1;
    lVar7 = operator_new(0xf0);
    if (lVar7 == 0) {
      local_1c8 = (longlong *)0x0;
    }
    else {
      local_1c8 = (longlong *)FUN_14217e300(lVar7,uVar9,puVar19,puVar6);
    }
    plStack_1c0 = (longlong *)operator_new(0x18);
    if (plStack_1c0 != (longlong *)0x0) {
      *(undefined4 *)(plStack_1c0 + 1) = 1;
      *plStack_1c0 = (longlong)&PTR_FUN_144fdd270;
      *(undefined4 *)((longlong)plStack_1c0 + 0xc) = 1;
      plStack_1c0[2] = (longlong)local_1c8;
    }
    SharedPointerInternals::EnableSharedFromThis(&local_1c8,local_1c8,local_1c8);
    local_1f8 = local_1c8;
    local_140 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    piVar18 = (int *)(*local_140 + 0x38);
    local_178 = piVar18;
    if ((*piVar18 < DAT_146aeb560) && (_Init_thread_header(&DAT_146aeb560), DAT_146aeb560 == -1)) {
      puVar6 = (undefined8 *)FName::FName(local_98,"!EventData!");
      DAT_146aeb55a = DAT_146aeb55a & 0xfff8;
      _DAT_146aeb548 = 0;
      _DAT_146aeb550 = 0;
      DAT_146aeb558 = 0x13;
      DAT_146aeb540 = (void *)*puVar6;
      atexit((_func_5014 *)&LAB_143ea7410);
      _Init_thread_footer(&DAT_146aeb560);
    }
    uVar23 = *(uint *)(param_1 + 4);
    lVar7 = param_1[3];
    local_228 = (longlong *)0x0;
    local_1e0 = (longlong *)0x0;
    local_1d8 = uVar23;
    if (uVar23 == 0) {
      local_1d4 = 0;
    }
    else {
      TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy(&local_1e0,uVar23,0);
      lVar7 = lVar7 - (longlong)local_1e0;
      local_228 = local_1e0;
      puVar14 = (ushort *)((longlong)local_1e0 + 0x22);
      do {
        *(undefined8 *)(puVar14 + -0x11) = *(undefined8 *)(lVar7 + -0x22 + (longlong)puVar14);
        *puVar14 = *puVar14 & 0xfff8;
        puVar14[-1] = 0xffff;
        FUN_14217f4f0(puVar14 + -0xd);
        puVar14 = puVar14 + 0x14;
        uVar23 = uVar23 - 1;
        piVar18 = local_178;
      } while (uVar23 != 0);
    }
    uVar23 = local_1d8;
    local_1f0 = (char *)0x0;
    local_1e4 = 0;
    local_1e8 = local_1d8;
    if (0 < (int)local_1d8) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_1f0);
    }
    pcVar24 = local_1f0;
    _guard_xfg_dispatch_icall_nop(local_1f0,0,(longlong)(int)uVar23);
    if ((*piVar18 < DAT_146aeb538) && (_Init_thread_header(&DAT_146aeb538), DAT_146aeb538 == -1)) {
      if ((DAT_146aeaf18 == '\0') &&
         (puVar6 = (undefined8 *)FUN_14218ce40(), puVar6 != &DAT_146aeaeb0)) {
        DAT_146aeaeb0 = *puVar6;
        uRam0000000146aeaeb8 = puVar6[1];
        _DAT_146aeaec0 = *(undefined4 *)(puVar6 + 2);
        uRam0000000146aeaec4 = *(undefined4 *)((longlong)puVar6 + 0x14);
        uRam0000000146aeaec8 = *(undefined4 *)(puVar6 + 3);
        uRam0000000146aeaecc = *(undefined4 *)((longlong)puVar6 + 0x1c);
        _DAT_146aeaed0 = *(undefined4 *)(puVar6 + 4);
        uRam0000000146aeaed4 = *(undefined4 *)((longlong)puVar6 + 0x24);
        DAT_146aeaed8._0_4_ = *(undefined4 *)(puVar6 + 5);
        DAT_146aeaed8._4_4_ = *(undefined4 *)((longlong)puVar6 + 0x2c);
        _DAT_146aeaee0 = *(undefined4 *)(puVar6 + 6);
        uRam0000000146aeaee4 = *(undefined4 *)((longlong)puVar6 + 0x34);
        _DAT_146aeaee8 = *(undefined4 *)(puVar6 + 7);
        uRam0000000146aeaeec = *(undefined4 *)((longlong)puVar6 + 0x3c);
        _DAT_146aeaef0 = *(undefined4 *)(puVar6 + 8);
        uRam0000000146aeaef4 = *(undefined4 *)((longlong)puVar6 + 0x44);
        _DAT_146aeaef8 = *(undefined4 *)(puVar6 + 9);
        uRam0000000146aeaefc = *(undefined4 *)((longlong)puVar6 + 0x4c);
        DAT_146aeaf00._0_4_ = *(undefined4 *)(puVar6 + 10);
        DAT_146aeaf00._4_4_ = *(undefined4 *)((longlong)puVar6 + 0x54);
        DAT_146aeaf08._0_4_ = *(undefined4 *)(puVar6 + 0xb);
        DAT_146aeaf08._4_4_ = *(undefined4 *)((longlong)puVar6 + 0x5c);
        DAT_146aeaf10 = puVar6[0xc];
        uVar26 = (undefined4)DAT_146aeaf10;
        uVar27 = (undefined4)((ulonglong)DAT_146aeaf10 >> 0x20);
        DAT_146aeaf18 = '\x01';
      }
      else {
        uVar26 = (undefined4)DAT_146aeaf10;
        uVar27 = (undefined4)((ulonglong)DAT_146aeaf10 >> 0x20);
      }
      _DAT_146aeb530 = CONCAT44(uVar27,uVar26);
      _DAT_146aeb4d0 = DAT_146aeaeb0;
      uRam0000000146aeb4d8 = uRam0000000146aeaeb8;
      _DAT_146aeb4e0 = _DAT_146aeaec0;
      uRam0000000146aeb4e4 = uRam0000000146aeaec4;
      uRam0000000146aeb4e8 = uRam0000000146aeaec8;
      uRam0000000146aeb4ec = uRam0000000146aeaecc;
      _DAT_146aeb4f0 = _DAT_146aeaed0;
      uRam0000000146aeb4f4 = uRam0000000146aeaed4;
      uRam0000000146aeb4f8 = (undefined4)DAT_146aeaed8;
      uRam0000000146aeb4fc = DAT_146aeaed8._4_4_;
      _DAT_146aeb500 = _DAT_146aeaee0;
      uRam0000000146aeb504 = uRam0000000146aeaee4;
      uRam0000000146aeb508 = _DAT_146aeaee8;
      uRam0000000146aeb50c = uRam0000000146aeaeec;
      _DAT_146aeb510 = _DAT_146aeaef0;
      uRam0000000146aeb514 = uRam0000000146aeaef4;
      uRam0000000146aeb518 = _DAT_146aeaef8;
      uRam0000000146aeb51c = uRam0000000146aeaefc;
      _DAT_146aeb520 = (undefined4)DAT_146aeaf00;
      uRam0000000146aeb524 = DAT_146aeaf00._4_4_;
      uRam0000000146aeb528 = (undefined4)DAT_146aeaf08;
      uRam0000000146aeb52c = DAT_146aeaf08._4_4_;
      _Init_thread_footer(&DAT_146aeb538);
    }
    plVar5 = (longlong *)param_1[0x5b];
    if ((longlong *)param_1[0x5b] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    local_138 = plVar5 + (longlong)*(int *)(param_1 + 0x5c) * 0x15;
    if (plVar5 != local_138) {
      local_90 = 0;
      _Buf2 = DAT_146aeb540;
      do {
        iVar21 = (int)plVar5[0x11];
        plVar20 = (longlong *)plVar5[0x10];
        if ((longlong *)plVar5[0x10] == (longlong *)0x0) {
          plVar20 = plVar5;
        }
        plVar16 = (longlong *)0x0;
        local_198 = (longlong *)0x0;
        iVar17 = 0;
        local_res10 = 0;
        if (0 < iVar21) {
          pbVar15 = (byte *)((longlong)plVar20 + 0x1a);
          do {
            if (*(short *)(pbVar15 + -2) == DAT_146aeb558) {
              if ((*pbVar15 & 1) == 0) {
                lVar7 = *(longlong *)(pbVar15 + -0x1a) - (longlong)_Buf2;
                if ((lVar7 == 0) &&
                   (lVar7 = *(longlong *)(pbVar15 + -0x12) - _DAT_146aeb548, lVar7 == 0)) {
                  lVar7 = *(longlong *)(pbVar15 + -10) - _DAT_146aeb550;
                }
                bVar25 = lVar7 == 0;
              }
              else {
                if (*(int *)(pbVar15 + -0x12) != DAT_146aeb548) goto LAB_142188707;
                iVar4 = _guard_xfg_dispatch_icall_nop
                                  (*(void **)(pbVar15 + -0x1a),_Buf2,
                                   (longlong)*(int *)(pbVar15 + -0x12));
                bVar25 = iVar4 == 0;
              }
              if (bVar25) {
                if (iVar17 < iVar21 + 1) {
                  plVar16 = plVar20 + (longlong)(iVar17 + 1) * 4;
                  local_res10 = (iVar21 - iVar17) + -1;
                  plStack_150 = (longlong *)CONCAT44(plStack_150._4_4_,local_res10);
                  plStack_190 = plStack_150;
                  local_198 = plVar16;
                  local_158 = plVar16;
                }
                break;
              }
            }
LAB_142188707:
            iVar17 = iVar17 + 1;
            pbVar15 = pbVar15 + 0x20;
          } while (iVar17 < iVar21);
        }
        plVar20 = local_1f8;
        FUN_140c15a40(local_1f8,plVar5[0x12]);
        plVar8 = (longlong *)FUN_140aa2bd0();
        if (*(char *)(param_1 + 0x5e) == '\0') {
          local_a8 = 0;
        }
        else {
          local_a8 = param_1[0x5d];
        }
        local_a0 = plVar20;
        lVar7 = plVar5[0x12];
        local_b0 = plVar5;
        cVar3 = FUN_142190080(lVar7);
        if ((cVar3 != '\0') &&
           ((local_1b8 = 0xd3, *(longlong *)(lVar7 + 0x28) == 0xd3 ||
            ((((*(int *)(lVar7 + 0x88) != 0 && (*(int *)(lVar7 + 0x88) != 1)) &&
              (*(int *)(lVar7 + 0x98) != 0)) && (*(int *)(lVar7 + 0x98) != 1)))))) {
          local_148 = &local_b0;
          lVar7 = local_b0[0x12];
          uVar9 = FUN_14218be80();
          FUN_14217a750(uVar9,*(undefined8 *)(lVar7 + 0x28),&local_148);
        }
        if (0 < (int)uVar23) {
          uVar22 = (ulonglong)uVar23;
          plVar10 = local_228;
          pcVar24 = local_1f0;
          do {
            if (*pcVar24 == '\0') {
              lVar7 = ((longlong *)*plVar10)[1];
              if (*(longlong *)(lVar7 + 0x28) == *(longlong *)(plVar5[0x12] + 0x28)) {
                local_1b0 = 0;
                if (((*(longlong *)*plVar10 != 0) && (cVar3 = FUN_142190080(lVar7), cVar3 != '\0'))
                   && ((local_1a8 = 0xd3, *(longlong *)(lVar7 + 0x28) == 0xd3 ||
                       (((*(int *)(lVar7 + 0x88) != 0 && (*(int *)(lVar7 + 0x88) != 1)) &&
                        ((*(int *)(lVar7 + 0x98) != 0 && (*(int *)(lVar7 + 0x98) != 1)))))))) {
                  plVar16 = (longlong *)*plVar8;
                  plVar20 = plVar16 + (longlong)(int)plVar8[1] * 5;
                  if (plVar16 != plVar20) {
                    do {
                      if ((*(longlong *)*plVar16 == *(longlong *)*plVar10) &&
                         (*(longlong *)(((longlong *)*plVar16)[1] + 0x28) ==
                          *(longlong *)(((longlong *)*plVar10)[1] + 0x28))) goto LAB_14218890a;
                      plVar16 = plVar16 + 5;
                    } while (plVar16 != plVar20);
                  }
                  plVar16 = (longlong *)0x0;
LAB_14218890a:
                  if (plVar16 == (longlong *)0x0) {
                    local_120 = *plVar10;
                    local_fe = local_fe & 0xfff8;
                    local_100 = 0xffff;
                    FUN_14217f4f0(local_118,plVar10 + 1);
                    iVar21 = (int)plVar8[1];
                    *(int *)(plVar8 + 1) = iVar21 + 1;
                    if (*(int *)((longlong)plVar8 + 0xc) < iVar21 + 1) {
                      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar8,iVar21);
                    }
                    lVar1 = *plVar8;
                    lVar7 = (longlong)iVar21 * 5 + 1;
                    *(longlong *)(lVar1 + -8 + lVar7 * 8) = local_120;
                    lVar1 = lVar1 + lVar7 * 8;
                    *(undefined2 *)(lVar1 + 0x18) = 0xffff;
                    *(ushort *)(lVar1 + 0x1a) = *(ushort *)(lVar1 + 0x1a) & 0xfff8;
                    FUN_14217f450(lVar1,local_118);
                    lVar7 = local_118[0];
                    uVar2 = local_fe;
                  }
                  else {
                    local_208 = 0xffff;
                    local_206 = local_206 & 0xfff8;
                    FUN_14217f4f0(&local_220,plVar10 + 1);
                    plVar20 = plVar16 + 1;
                    FUN_142194380(plVar20,local_208,(byte)local_206 & 1,(byte)local_206 >> 1 & 1,
                                  (byte)local_206 >> 2 & 1);
                    lVar7 = local_220;
                    uVar2 = local_206;
                    if ((*(byte *)((longlong)plVar16 + 0x22) & 1) == 0) {
                      *plVar20 = local_220;
                      plVar16[2] = uStack_218;
                      plVar16[3] = local_210;
                    }
                    else if (plVar20 != &local_220) {
                      if (*plVar20 != 0) {
                        FMemory::Free();
                      }
                      *plVar20 = local_220;
                      *(undefined4 *)(plVar16 + 2) = (undefined4)uStack_218;
                      *(undefined4 *)((longlong)plVar16 + 0x14) = uStack_218._4_4_;
                      uStack_218 = 0;
                      local_220 = 0;
                      lVar7 = local_220;
                      uVar2 = local_206;
                    }
                  }
                  if (((uVar2 & 1) != 0) && (lVar7 != 0)) {
                    FMemory::Free();
                  }
                }
                *pcVar24 = '\x01';
              }
            }
            plVar10 = plVar10 + 5;
            pcVar24 = pcVar24 + 1;
            uVar22 = uVar22 - 1;
            plVar20 = local_1f8;
            plVar16 = local_198;
          } while (uVar22 != 0);
        }
        _Buf2 = DAT_146aeb540;
        if (local_res10 != 0) {
          iVar21 = 0;
          plVar8 = plVar20 + 0x1a;
          if (0 < local_res10) {
            do {
              if (0 < (short)plVar16[3]) {
                if ((short)plVar16[3] == DAT_146aeb558) {
                  if ((*(byte *)((longlong)plVar16 + 0x1a) & 1) == 0) {
                    lVar7 = *plVar16 - (longlong)_Buf2;
                    if ((lVar7 == 0) && (lVar7 = plVar16[1] - _DAT_146aeb548, lVar7 == 0)) {
                      lVar7 = plVar16[2] - _DAT_146aeb550;
                    }
                    bVar25 = lVar7 == 0;
                  }
                  else {
                    if ((int)plVar16[1] != DAT_146aeb548) goto LAB_142188af7;
                    iVar17 = _guard_xfg_dispatch_icall_nop
                                       ((void *)*plVar16,_Buf2,(longlong)(int)plVar16[1]);
                    bVar25 = iVar17 == 0;
                  }
                  if (bVar25) goto LAB_142188e0c;
                }
LAB_142188af7:
                FString::PrintfImpl(&local_130,L"event_data_%d",iVar21);
                lVar7 = plVar5[0x12];
                puVar19 = &DAT_143f3eda8;
                if (local_128 != 0) {
                  puVar19 = local_130;
                }
                plVar10 = (longlong *)FName::FName(local_88,puVar19,1);
                uVar9 = DAT_146aeae90;
                local_188 = 0;
                lVar1 = *plVar10;
                if (*(longlong *)(lVar7 + 0x28) == 0) {
                  if ((*(int *)(*local_140 + 0x38) < DAT_146aeb988) &&
                     (_Init_thread_header(&DAT_146aeb988), DAT_146aeb988 == -1)) {
                    DAT_146aeb968 = 0;
                    FUN_14217c140(&DAT_146aeb970);
                    DAT_146aeb978 = 0;
                    _DAT_146aeb980 = 0;
                    atexit((_func_5014 *)&LAB_143ea7530);
                    _Init_thread_footer(&DAT_146aeb988);
                  }
                  local_200 = &DAT_146aeb968;
                  plVar10 = local_200;
                }
                else {
                  local_180 = 0;
                  if (*(longlong *)(lVar7 + 0x28) != 0) {
                    puVar6 = (undefined8 *)FUN_14218dae0(lVar7,DAT_146aeae90);
                    puVar13 = (undefined8 *)*puVar6;
                    puVar6 = puVar13 + *(int *)(puVar6 + 1);
                    for (; puVar13 != puVar6; puVar13 = puVar13 + 1) {
                      plVar10 = (longlong *)*puVar13;
                      lVar11 = *plVar10;
                      if (*plVar10 == lVar1) goto LAB_142188c78;
                    }
                  }
                  if ((*local_178 < DAT_146aeb988) &&
                     (_Init_thread_header(&DAT_146aeb988), DAT_146aeb988 == -1)) {
                    DAT_146aeb968 = 0;
                    FUN_14217c140(&DAT_146aeb970);
                    DAT_146aeb978 = 0;
                    _DAT_146aeb980 = 0;
                    atexit((_func_5014 *)&LAB_143ea7530);
                    _Init_thread_footer(&DAT_146aeb988);
                  }
                  plVar10 = &DAT_146aeb968;
                  lVar11 = DAT_146aeb968;
LAB_142188c78:
                  local_170 = 0;
                  if (lVar11 == 0) {
                    plVar10 = (longlong *)FUN_142191000(lVar1,lVar7,0);
                    plVar12 = (longlong *)FUN_14218dae0(lVar7,uVar9);
                    iVar17 = (int)plVar12[1];
                    *(int *)(plVar12 + 1) = iVar17 + 1;
                    if (*(int *)((longlong)plVar12 + 0xc) < iVar17 + 1) {
                      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                (plVar12,iVar17);
                    }
                    *(longlong **)(*plVar12 + (longlong)iVar17 * 8) = plVar10;
                  }
                }
                local_200 = plVar10;
                local_168 = 0;
                if ((*local_200 != 0) && (cVar3 = FUN_1407ce010(local_200 + 1), cVar3 != '\0')) {
                  plVar12 = (longlong *)*plVar8;
                  plVar10 = plVar12 + (longlong)(int)plVar20[0x1b] * 5;
                  if (plVar12 != plVar10) {
                    do {
                      if ((*(longlong *)*plVar12 == *local_200) &&
                         (*(longlong *)(((longlong *)*plVar12)[1] + 0x28) ==
                          *(longlong *)(local_200[1] + 0x28))) goto LAB_142188d35;
                      plVar12 = plVar12 + 5;
                    } while (plVar12 != plVar10);
                  }
                  plVar12 = (longlong *)0x0;
LAB_142188d35:
                  if (plVar12 == (longlong *)0x0) {
                    local_d6 = local_d6 & 0xfff8;
                    local_f8 = local_200;
                    local_d8 = 0xffff;
                    FUN_14217f4f0(local_f0,plVar16);
                    iVar17 = (int)plVar20[0x1b];
                    *(int *)(plVar20 + 0x1b) = iVar17 + 1;
                    if (*(int *)((longlong)plVar20 + 0xdc) < iVar17 + 1) {
                      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar8,iVar17);
                    }
                    puVar6 = (undefined8 *)(*plVar8 + (longlong)iVar17 * 0x28);
                    *puVar6 = local_f8;
                    *(ushort *)((longlong)puVar6 + 0x22) =
                         *(ushort *)((longlong)puVar6 + 0x22) & 0xfff8;
                    *(undefined2 *)(puVar6 + 4) = 0xffff;
                    FUN_14217f450(puVar6 + 1,local_f0);
                    lVar7 = local_f0[0];
                    uVar2 = local_d6;
                  }
                  else {
                    local_b6 = local_b6 & 0xfff8;
                    local_b8 = 0xffff;
                    FUN_14217f4f0(local_d0,plVar16);
                    FUN_14217f450(plVar12 + 1,local_d0);
                    lVar7 = local_d0[0];
                    uVar2 = local_b6;
                  }
                  if (((uVar2 & 1) != 0) && (lVar7 != 0)) {
                    FMemory::Free();
                  }
                }
                _Buf2 = DAT_146aeb540;
                if (local_130 != (undefined2 *)0x0) {
                  FMemory::Free();
                  _Buf2 = DAT_146aeb540;
                }
              }
LAB_142188e0c:
              iVar21 = iVar21 + 1;
              plVar16 = plVar16 + 4;
            } while (iVar21 < local_res10);
          }
        }
        plVar5 = plVar5 + 0x15;
        pcVar24 = local_1f0;
      } while (plVar5 != local_138);
    }
    plVar5 = local_1f8;
    if (0 < (int)uVar23) {
      uVar22 = (ulonglong)uVar23;
      do {
        if (*pcVar24 == '\0') {
          FUN_14217b110(plVar5 + 0x1a,local_228,local_228 + 1);
          *pcVar24 = '\x01';
        }
        local_228 = local_228 + 5;
        pcVar24 = pcVar24 + 1;
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
    }
    cVar3 = FUN_14218a740(&local_1c8,1);
    if (cVar3 != '\0') {
      local_158 = local_1c8;
      plStack_150 = plStack_1c0;
      if (plStack_1c0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_1c0 + 1) = (int)plStack_1c0[1] + 1;
        UNLOCK();
      }
      FUN_142194040(&local_158);
      plVar5 = plStack_150;
      if (plStack_150 != (longlong *)0x0) {
        LOCK();
        plVar20 = plStack_150 + 1;
        lVar7 = *plVar20;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plStack_150)(plStack_150);
          LOCK();
          piVar18 = (int *)((longlong)plVar5 + 0xc);
          iVar21 = *piVar18;
          *piVar18 = *piVar18 + -1;
          UNLOCK();
          if (iVar21 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
    }
    if (local_1f0 != (char *)0x0) {
      FMemory::Free(local_1f0);
    }
    FUN_14217e9a0(&local_1e0);
    plVar5 = plStack_1c0;
    if (plStack_1c0 != (longlong *)0x0) {
      LOCK();
      plVar20 = plStack_1c0 + 1;
      lVar7 = *plVar20;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_1c0)(plStack_1c0);
        LOCK();
        piVar18 = (int *)((longlong)plVar5 + 0xc);
        iVar21 = *piVar18;
        *piVar18 = *piVar18 + -1;
        UNLOCK();
        if (iVar21 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 142188fa0 FUN_142188fa0 body=169 status=ok
// SIG undefined FUN_142188fa0(void)

void FUN_142188fa0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)*param_1;
  for (iVar3 = *(int *)(param_1 + 1); iVar3 != 0; iVar3 = iVar3 + -1) {
    lVar5 = 0x20;
    lVar2 = *plVar4 + 0x410;
    do {
      plVar1 = (longlong *)(lVar2 + -0x20);
      lVar2 = lVar2 + -0x20;
      lVar5 = lVar5 + -1;
      if (*plVar1 != 0) {
        FMemory::Free();
      }
    } while (lVar5 != 0);
    FMemory::Free(*plVar4);
    plVar4 = plVar4 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 142189050 FUN_142189050 body=326 status=ok
// SIG undefined FUN_142189050(void)

void FUN_142189050(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar5 = (longlong *)*param_1;
  for (iVar4 = *(int *)(param_1 + 1); iVar4 != 0; iVar4 = iVar4 + -1) {
    lVar6 = 4;
    plVar3 = (longlong *)(*plVar5 + 0x4e0);
    do {
      lVar6 = lVar6 + -1;
      plVar1 = plVar3 + -0x20;
      if ((int)plVar3[-0x1e] != 0) {
        plVar2 = (longlong *)*plVar1;
        if ((longlong *)*plVar1 == (longlong *)0x0) {
          plVar2 = plVar3 + -0x24;
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2,0);
        }
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      if ((int)plVar3[-0x28] != 0) {
        plVar2 = (longlong *)plVar3[-0x2a];
        if ((longlong *)plVar3[-0x2a] == (longlong *)0x0) {
          plVar2 = plVar3 + -0x2e;
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2,0);
        }
      }
      if (plVar3[-0x2a] != 0) {
        FMemory::Free();
      }
      if ((int)plVar3[-0x32] != 0) {
        plVar2 = (longlong *)plVar3[-0x34];
        if ((longlong *)plVar3[-0x34] == (longlong *)0x0) {
          plVar2 = plVar3 + -0x38;
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2,0);
        }
      }
      if (plVar3[-0x34] != 0) {
        FMemory::Free();
      }
      plVar3 = plVar1;
    } while (lVar6 != 0);
    FMemory::Free();
    plVar5 = plVar5 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1421891a0 FUN_1421891a0 body=338 status=ok
// SIG undefined FUN_1421891a0(void)

void FUN_1421891a0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)*param_1;
  for (iVar2 = *(int *)(param_1 + 1); iVar2 != 0; iVar2 = iVar2 + -1) {
    lVar3 = 5;
    puVar4 = (undefined8 *)(*plVar5 + 0x3c0);
    plVar1 = (longlong *)(*plVar5 + 0x450);
    do {
      lVar3 = lVar3 + -1;
      puVar4 = puVar4 + -0x18;
      TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                (plVar1 + -0x14);
      if (plVar1[-0x16] != 0) {
        FMemory::Free();
      }
      if (plVar1[-0x18] != 0) {
        FMemory::Free();
      }
      if (plVar1[-0x1a] != 0) {
        FMemory::Free();
      }
      if (*(char *)((longlong)plVar1 + -0xd7) != '\0') {
        *(undefined1 *)((longlong)plVar1 + -0xd7) = 0;
      }
      if (plVar1[-0x1f] != 0) {
        FMemory::Free();
      }
      if (plVar1[-0x21] != 0) {
        FMemory::Free();
      }
      if (plVar1[-0x24] != 0) {
        FMemory::Free();
      }
      if (plVar1[-0x29] != 0) {
        FMemory::Free();
      }
      *puVar4 = &PTR_FUN_143f4c8e0;
      TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                (plVar1 + -0x27);
      plVar1 = plVar1 + -0x18;
    } while (lVar3 != 0);
    FMemory::Free(*plVar5);
    plVar5 = plVar5 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 142189300 FUN_142189300 body=315 status=ok
// SIG undefined FUN_142189300(void)

void FUN_142189300(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = (longlong *)*param_1;
  for (iVar2 = *(int *)(param_1 + 1); iVar2 != 0; iVar2 = iVar2 + -1) {
    lVar4 = 3;
    puVar1 = (undefined8 *)(*plVar3 + 0x360);
    do {
      lVar4 = lVar4 + -1;
      FUN_14217e940(puVar1 + -0xc);
      if (puVar1[-0xe] != 0) {
        FMemory::Free();
      }
      if (puVar1[-0x10] != 0) {
        FMemory::Free();
      }
      FUN_140ce1840(puVar1 + -0x12);
      if (*(char *)((longlong)puVar1 + -0x97) != '\0') {
        *(undefined1 *)((longlong)puVar1 + -0x97) = 0;
      }
      if (puVar1[-0x18] != 0) {
        FMemory::Free();
      }
      if (puVar1[-0x1d] != 0) {
        FMemory::Free();
      }
      TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(puVar1 + -0x21);
      if (puVar1[-0x23] != 0) {
        FMemory::Free();
      }
      puVar1[-0x24] = &PTR_FUN_143f4c8e0;
      puVar1 = puVar1 + -0x24;
    } while (lVar4 != 0);
    FMemory::Free(*plVar3);
    plVar3 = plVar3 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 142189440 FUN_142189440 body=203 status=ok
// SIG undefined FUN_142189440(void)

void FUN_142189440(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar5 = (longlong *)*param_1;
  for (iVar4 = *(int *)(param_1 + 1); iVar4 != 0; iVar4 = iVar4 + -1) {
    lVar6 = 10;
    plVar3 = (longlong *)(*plVar5 + 0x400);
    do {
      lVar6 = lVar6 + -1;
      plVar1 = plVar3 + -0xc;
      if ((int)plVar3[-10] != 0) {
        plVar2 = (longlong *)*plVar1;
        if ((longlong *)*plVar1 == (longlong *)0x0) {
          plVar2 = plVar3 + -0x10;
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2,0);
        }
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar1;
    } while (lVar6 != 0);
    FMemory::Free();
    plVar5 = plVar5 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 142189510 FUN_142189510 body=509 status=ok
// SIG undefined FUN_142189510(void)

void FUN_142189510(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int local_78;
  uint uStack_74;
  int iStack_64;
  int iStack_60;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  int iStack_3c;
  int iStack_38;
  
  iVar7 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_78 = 0;
  uStack_74 = 1;
  iStack_64 = 0;
  iStack_60 = 0;
  if (iVar7 != 0) {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar4 = *puVar9;
    iStack_60 = 0;
    local_78 = 0;
    while (uVar4 == 0) {
      lVar6 = (longlong)local_78;
      iStack_60 = iStack_60 + 0x20;
      iVar8 = local_78 + 1;
      bVar3 = (int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar8;
      if (bVar3) goto LAB_1421895e1;
      uVar4 = puVar9[lVar6 + 1];
    }
    uStack_74 = -uVar4 & uVar4;
    iVar8 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    iStack_64 = (iStack_60 - iVar8) + 0x1f;
    if (iVar7 < iStack_64) {
LAB_1421895e1:
      iStack_64 = iVar7;
    }
  }
  local_50 = local_78;
  uStack_4c = uStack_74;
  local_40 = 0xffffffff;
  iStack_3c = iStack_64;
  iStack_38 = iStack_60;
  puStack_48 = puVar1;
  if (iStack_64 < iVar7) {
    do {
      lVar5 = (longlong)iStack_3c;
      lVar2 = *param_1;
      iVar7 = *(int *)(lVar2 + 0x10 + lVar5 * 0x28);
      lVar6 = *(longlong *)(lVar2 + 8 + lVar5 * 0x28);
      if (iVar7 != 0) {
        lVar6 = lVar6 + 8;
        do {
          TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar6);
          lVar6 = lVar6 + 0x20;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        lVar6 = *(longlong *)(lVar2 + lVar5 * 0x28 + 8);
      }
      if (lVar6 != 0) {
        FMemory::Free();
      }
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    } while (iStack_3c < (int)puStack_48[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
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



// FUNCTION 142189710 FUN_142189710 body=290 status=ok
// SIG undefined FUN_142189710(void)

void FUN_142189710(longlong param_1)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar7 = 0;
  puVar6 = *(undefined8 **)(param_1 + 0xa0);
  uVar8 = (longlong)*(int *)(param_1 + 0xa8) & 0x1fffffffffffffff;
  if (puVar6 + *(int *)(param_1 + 0xa8) < puVar6) {
    uVar8 = uVar7;
  }
  uVar5 = uVar7;
  if (uVar8 != 0) {
    do {
      uVar1 = *puVar6;
      FUN_14217f2b0(uVar1);
      lVar3 = FUN_14218c420();
      uVar2 = FLockFreeLinkPolicy::AllocLockFreeLink();
      uVar4 = uVar7;
      if (uVar2 != 0) {
        uVar4 = (&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
      }
      *(undefined8 *)(uVar4 + 8) = uVar1;
      FLockFreePointerListLIFORoot<0,1>::Push(lVar3 + 0x88,uVar2);
      puVar6 = puVar6 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar8);
  }
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(int *)(param_1 + 0xac) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xa0,0);
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(int *)(param_1 + 0xbc) == 0) {
    return;
  }
  TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0xb0,0);
  return;
}



// FUNCTION 142189840 FUN_142189840 body=399 status=ok
// SIG undefined FUN_142189840(void)

void FUN_142189840(longlong param_1,short *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  longlong lVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined2 *local_48;
  uint local_40;
  int local_3c;
  undefined2 *local_38;
  undefined8 local_30;
  
  plVar2 = (longlong *)(**(code **)(*param_3 + 0x28))(param_3);
  if (plVar2 != (longlong *)0x0) {
    iVar7 = 0;
    local_48 = (undefined2 *)0x0;
    local_3c = 0;
    puVar3 = (undefined2 *)0x0;
    puVar6 = (undefined2 *)0x0;
    if ((param_2 != (short *)0x0) &&
       (puVar3 = (undefined2 *)0x0, puVar6 = (undefined2 *)0x0, *param_2 != 0)) {
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (param_2[lVar4] != 0);
      local_40 = (int)lVar4 + 1;
      if (0 < (int)local_40) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      }
      iVar7 = local_3c;
      puVar6 = local_48;
      puVar3 = (undefined2 *)(ulonglong)local_40;
      FGenericPlatformString::Memcpy(local_48,param_2);
    }
    iVar5 = (int)puVar3;
    local_40 = (2 - (uint)(iVar5 != 0)) + iVar5;
    if (iVar7 < (int)local_40) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,puVar3);
      puVar6 = local_48;
    }
    puVar6[(longlong)iVar5 - (ulonglong)(iVar5 != 0)] = 0x3d;
    puVar3 = &DAT_143f3eda8;
    if (local_40 != 0) {
      puVar3 = puVar6;
    }
    (puVar6 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)))[1] = 0;
    local_38 = (undefined2 *)0x0;
    local_30 = 0;
    cVar1 = FParse::Value(*(undefined8 *)(param_1 + 8),puVar3,&local_38,1);
    if (cVar1 != '\0') {
      puVar3 = &DAT_143f3eda8;
      if ((int)local_30 != 0) {
        puVar3 = local_38;
      }
      (**(code **)(*plVar2 + 0x60))(plVar2,puVar3,0x7000000);
    }
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (puVar6 != (undefined2 *)0x0) {
      FMemory::Free(puVar6);
    }
  }
  return;
}



// FUNCTION 1421899d0 FUN_1421899d0 body=8 status=ok
// SIG undefined FUN_1421899d0(void)

void FUN_1421899d0(undefined8 param_1,undefined8 param_2)

{
  FUN_1421859c0(param_2);
  return;
}



// FUNCTION 1421899e0 FUN_1421899e0 body=9 status=ok
// SIG undefined FUN_1421899e0(void)

void FUN_1421899e0(longlong param_1)

{
  FUN_142181000(param_1 + 8);
  return;
}



// FUNCTION 1421899f0 FUN_1421899f0 body=71 status=ok
// SIG undefined FUN_1421899f0(void)

undefined1 FUN_1421899f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  FString::operator=(param_2 + 0x80,lVar1);
  FString::operator=(param_2 + 0x90,lVar1 + 0x10);
  FString::operator=(param_2 + 0xa0,lVar1 + 0x20);
  return 1;
}



// FUNCTION 142189a40 FUN_142189a40 body=413 status=ok
// SIG undefined FUN_142189a40(void)

undefined8 FUN_142189a40(longlong param_1,short *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  longlong lVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined2 *local_48;
  uint local_40;
  int local_3c;
  undefined2 *local_38;
  undefined8 local_30;
  
  plVar2 = (longlong *)(**(code **)(*param_3 + 0x28))(param_3);
  if (plVar2 != (longlong *)0x0) {
    iVar7 = 0;
    local_48 = (undefined2 *)0x0;
    local_3c = 0;
    puVar3 = (undefined2 *)0x0;
    puVar6 = (undefined2 *)0x0;
    if ((param_2 != (short *)0x0) &&
       (puVar3 = (undefined2 *)0x0, puVar6 = (undefined2 *)0x0, *param_2 != 0)) {
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (param_2[lVar4] != 0);
      local_40 = (int)lVar4 + 1;
      if (0 < (int)local_40) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      }
      iVar7 = local_3c;
      puVar6 = local_48;
      puVar3 = (undefined2 *)(ulonglong)local_40;
      FGenericPlatformString::Memcpy(local_48,param_2);
    }
    iVar5 = (int)puVar3;
    local_40 = (2 - (uint)(iVar5 != 0)) + iVar5;
    if (iVar7 < (int)local_40) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,puVar3);
      puVar6 = local_48;
    }
    puVar6[(longlong)iVar5 - (ulonglong)(iVar5 != 0)] = 0x3d;
    puVar3 = &DAT_143f3eda8;
    if (local_40 != 0) {
      puVar3 = puVar6;
    }
    (puVar6 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)))[1] = 0;
    local_38 = (undefined2 *)0x0;
    local_30 = 0;
    cVar1 = FParse::Value(*(undefined8 *)(param_1 + 8),puVar3,&local_38,1);
    if (cVar1 != '\0') {
      puVar3 = &DAT_143f3eda8;
      if ((int)local_30 != 0) {
        puVar3 = local_38;
      }
      (**(code **)(*plVar2 + 0x60))(plVar2,puVar3,0x7000000);
    }
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (puVar6 != (undefined2 *)0x0) {
      FMemory::Free(puVar6);
    }
    return 1;
  }
  return 1;
}



// FUNCTION 142189be0 FUN_142189be0 body=45 status=ok
// SIG undefined FUN_142189be0(void)

undefined8 FUN_142189be0(longlong param_1)

{
  (**(code **)(param_1 + 0x10))
            ((longlong)(int)*(undefined8 *)(param_1 + 0x18) + *(longlong *)(param_1 + 8));
  return 1;
}



// FUNCTION 142189c10 FUN_142189c10 body=37 status=ok
// SIG undefined FUN_142189c10(void)

bool FUN_142189c10(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_14218be80();
  lVar2 = FUN_14218b420(uVar1,param_1);
  return lVar2 != 0;
}



// FUNCTION 142189c40 FUN_142189c40 body=2177 status=ok
// SIG undefined FUN_142189c40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142189c40(longlong *param_1,undefined8 *param_2)

{
  short sVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined1 auStack_b8 [32];
  longlong local_98 [3];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined2 local_68;
  ushort local_66;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  sVar1 = (short)param_1[4];
  if (sVar1 == 0x17) {
    local_58 = param_1[1];
    lVar3 = param_1[2];
    uStack_4c = CONCAT31(uStack_4c._1_3_,1);
    FUN_14217bd20(local_98);
    plVar2 = (longlong *)*param_1;
    local_98[1] = 0;
    local_98[2] = local_98[0];
    if (*plVar2 != 0) {
      plVar2 = (longlong *)FUN_14218a4d0(plVar2[1],local_98,plVar2,&DAT_144fda334);
      local_98[2] = *plVar2;
    }
    local_68 = 0xffff;
    local_66 = local_66 & 0xfff8;
    FUN_1407bae70(&local_80);
    local_80 = (undefined4)local_58;
    (*(code *)*param_2)(param_2[1],local_98 + 2);
    if (((local_66 & 1) != 0) && (CONCAT44(uStack_7c,local_80) != 0)) {
      FMemory::Free();
    }
    FUN_14217bd20(local_98);
    plVar2 = (longlong *)*param_1;
    local_98[1] = 0;
    lVar4 = local_98[0];
    if (*plVar2 != 0) {
      plVar2 = (longlong *)FUN_14218a4d0(plVar2[1],local_98,plVar2,&DAT_144fdb38c);
      lVar4 = *plVar2;
    }
    local_66 = local_66 & 0xfff8;
    local_68 = 0xffff;
    local_98[2] = lVar4;
    FUN_1407bae70(&local_80);
    local_80 = (int)lVar3;
    (*(code *)*param_2)(param_2[1],local_98 + 2);
    if (((local_66 & 1) != 0) && (CONCAT44(uStack_7c,local_80) != 0)) {
      FMemory::Free();
    }
    FUN_14217bd20(local_98);
    param_1 = (longlong *)*param_1;
    if (*param_1 == 0) {
LAB_142189db7:
      local_98[1] = 0;
      local_98[2] = local_98[0];
    }
    else {
      puVar5 = &DAT_144fdba00;
LAB_142189da2:
      local_98[1] = 0;
      plVar2 = (longlong *)FUN_14218a4d0(param_1[1],local_98,param_1,puVar5);
      local_98[2] = *plVar2;
    }
    local_66 = local_66 & 0xfff8;
    local_68 = 0xffff;
    FUN_1407bae70(&local_80);
  }
  else {
    if (sVar1 == 0x21) {
      local_58 = param_1[1];
      lVar3 = param_1[2];
      uStack_4c = CONCAT31(uStack_4c._1_3_,1);
      FUN_14217bd20(local_98);
      plVar2 = (longlong *)*param_1;
      local_98[1] = 0;
      local_98[2] = local_98[0];
      if (*plVar2 != 0) {
        plVar2 = (longlong *)FUN_14218a4d0(plVar2[1],local_98,plVar2,&DAT_144fdba08);
        local_98[2] = *plVar2;
      }
      local_68 = 0xffff;
      local_66 = local_66 & 0xfff8;
      FUN_1407bae70(&local_80);
      local_80 = (undefined4)local_58;
      (*(code *)*param_2)(param_2[1],local_98 + 2);
      if (((local_66 & 1) != 0) && (CONCAT44(uStack_7c,local_80) != 0)) {
        FMemory::Free();
      }
      FUN_14217bd20(local_98);
      plVar2 = (longlong *)*param_1;
      local_98[1] = 0;
      lVar4 = local_98[0];
      if (*plVar2 != 0) {
        plVar2 = (longlong *)FUN_14218a4d0(plVar2[1],local_98,plVar2,&DAT_144fdba10);
        lVar4 = *plVar2;
      }
      local_66 = local_66 & 0xfff8;
      local_68 = 0xffff;
      local_98[2] = lVar4;
      FUN_1407bae70(&local_80);
      local_80 = local_58._4_4_;
      (*(code *)*param_2)(param_2[1],local_98 + 2);
      if (((local_66 & 1) != 0) && (CONCAT44(uStack_7c,local_80) != 0)) {
        FMemory::Free();
      }
      FUN_14217bd20(local_98);
      param_1 = (longlong *)*param_1;
      local_98[1] = 0;
      if (*param_1 != 0) {
        plVar2 = (longlong *)FUN_14218a4d0(param_1[1],local_98,param_1,&DAT_144fdba18);
        local_98[0] = *plVar2;
      }
      local_66 = local_66 & 0xfff8;
      local_68 = 0xffff;
      local_98[2] = local_98[0];
      FUN_1407bae70(&local_80);
      local_80 = (int)lVar3;
      (*(code *)*param_2)(param_2[1],local_98 + 2);
      if ((local_66 & 1) == 0) {
        return;
      }
      if (CONCAT44(uStack_7c,local_80) == 0) {
        return;
      }
      FMemory::Free();
      return;
    }
    if (sVar1 == 0x22) {
      local_98[0] = param_1[1];
      uStack_50 = CONCAT31(uStack_50._1_3_,1);
      local_58 = local_98[0];
      FUN_14217bd20(local_98);
      plVar2 = (longlong *)*param_1;
      local_98[1] = 0;
      local_98[2] = local_98[0];
      if (*plVar2 != 0) {
        plVar2 = (longlong *)FUN_14218a4d0(plVar2[1],local_98,plVar2,&DAT_144fdba20);
        local_98[2] = *plVar2;
      }
      local_68 = 0xffff;
      local_66 = local_66 & 0xfff8;
      FUN_1407bae70(&local_80);
      local_80 = (undefined4)local_58;
      (*(code *)*param_2)(param_2[1],local_98 + 2);
      if (((local_66 & 1) != 0) && (CONCAT44(uStack_7c,local_80) != 0)) {
        FMemory::Free();
      }
      FUN_14217bd20(local_98);
      param_1 = (longlong *)*param_1;
      if (*param_1 == 0) goto LAB_142189db7;
      puVar5 = &DAT_144fdba28;
      goto LAB_142189da2;
    }
    if (sVar1 == 0x23) {
      local_58 = param_1[1];
      uStack_50 = (undefined4)param_1[2];
      uStack_4c = *(undefined4 *)((longlong)param_1 + 0x14);
      local_48 = 1;
      FUN_14217bd20(local_98);
      plVar2 = (longlong *)*param_1;
      local_98[1] = 0;
      local_98[2] = local_98[0];
      if (*plVar2 != 0) {
        plVar2 = (longlong *)FUN_14218a4d0(plVar2[1],local_98,plVar2,&DAT_144fdba30);
        local_98[2] = *plVar2;
      }
      local_68 = 0xffff;
      local_66 = local_66 & 0xfff8;
      FUN_1407bae70(&local_80);
      local_80 = (undefined4)local_58;
      (*(code *)*param_2)(param_2[1],local_98 + 2);
      if (((local_66 & 1) != 0) && (CONCAT44(uStack_7c,local_80) != 0)) {
        FMemory::Free();
      }
      FUN_14217bd20(local_98);
      plVar2 = (longlong *)*param_1;
      local_98[1] = 0;
      lVar3 = local_98[0];
      if (*plVar2 != 0) {
        plVar2 = (longlong *)FUN_14218a4d0(plVar2[1],local_98,plVar2,&DAT_144fdba38);
        lVar3 = *plVar2;
      }
      local_66 = local_66 & 0xfff8;
      local_68 = 0xffff;
      local_98[2] = lVar3;
      FUN_1407bae70(&local_80);
      local_80 = local_58._4_4_;
      (*(code *)*param_2)(param_2[1],local_98 + 2);
      if (((local_66 & 1) != 0) && (CONCAT44(uStack_7c,local_80) != 0)) {
        FMemory::Free();
      }
      FUN_14217bd20(local_98);
      plVar2 = (longlong *)*param_1;
      local_98[1] = 0;
      lVar3 = local_98[0];
      if (*plVar2 != 0) {
        plVar2 = (longlong *)FUN_14218a4d0(plVar2[1],local_98,plVar2,&DAT_144fdba40);
        lVar3 = *plVar2;
      }
      local_66 = local_66 & 0xfff8;
      local_68 = 0xffff;
      local_98[2] = lVar3;
      FUN_1407bae70(&local_80);
      local_80 = uStack_50;
      (*(code *)*param_2)(param_2[1],local_98 + 2);
      if (((local_66 & 1) != 0) && (CONCAT44(uStack_7c,local_80) != 0)) {
        FMemory::Free();
      }
      FUN_14217bd20(local_98);
      param_1 = (longlong *)*param_1;
      local_98[1] = 0;
      lVar3 = local_98[0];
      if (*param_1 != 0) {
        plVar2 = (longlong *)FUN_14218a4d0(param_1[1],local_98,param_1,&DAT_144fdba48);
        lVar3 = *plVar2;
      }
      local_66 = local_66 & 0xfff8;
      local_68 = 0xffff;
      local_98[2] = lVar3;
      FUN_1407bae70(&local_80);
      local_80 = uStack_4c;
      goto LAB_142189dd8;
    }
    if (sVar1 != 0x24) {
      if (sVar1 != 0x25) {
        (*(code *)*param_2)(param_2[1],param_1);
        return;
      }
      local_58 = param_1[1];
      lVar3 = param_1[2];
      uStack_4c = CONCAT31(uStack_4c._1_3_,1);
      FUN_14217bd20(local_98);
      plVar2 = (longlong *)*param_1;
      local_98[1] = 0;
      local_98[2] = local_98[0];
      if (*plVar2 != 0) {
        plVar2 = (longlong *)FUN_14218a4d0(plVar2[1],local_98,plVar2,&DAT_144fdba60);
        local_98[2] = *plVar2;
      }
      local_68 = 0xffff;
      local_66 = local_66 & 0xfff8;
      FUN_1407bae50(&local_80);
      local_80 = (undefined4)local_58;
      (*(code *)*param_2)(param_2[1],local_98 + 2);
      if (((local_66 & 1) != 0) && (CONCAT44(uStack_7c,local_80) != 0)) {
        FMemory::Free();
      }
      FUN_14217bd20(local_98);
      plVar2 = (longlong *)*param_1;
      local_98[1] = 0;
      lVar4 = local_98[0];
      if (*plVar2 != 0) {
        plVar2 = (longlong *)FUN_14218a4d0(plVar2[1],local_98,plVar2,&DAT_144fdba68);
        lVar4 = *plVar2;
      }
      local_66 = local_66 & 0xfff8;
      local_68 = 0xffff;
      local_98[2] = lVar4;
      FUN_1407bae50(&local_80);
      local_80 = local_58._4_4_;
      (*(code *)*param_2)(param_2[1],local_98 + 2);
      if (((local_66 & 1) != 0) && (CONCAT44(uStack_7c,local_80) != 0)) {
        FMemory::Free();
      }
      FUN_14217bd20(local_98);
      param_1 = (longlong *)*param_1;
      local_98[1] = 0;
      lVar4 = local_98[0];
      if (*param_1 != 0) {
        plVar2 = (longlong *)FUN_14218a4d0(param_1[1],local_98,param_1,&DAT_144fdba70);
        lVar4 = *plVar2;
      }
      local_66 = local_66 & 0xfff8;
      local_68 = 0xffff;
      local_98[2] = lVar4;
      FUN_1407bae50(&local_80);
      local_80 = (int)lVar3;
      goto LAB_142189dd8;
    }
    local_98[0] = param_1[1];
    uStack_50 = CONCAT31(uStack_50._1_3_,1);
    local_58 = local_98[0];
    FUN_14217bd20(local_98);
    plVar2 = (longlong *)*param_1;
    local_98[1] = 0;
    local_98[2] = local_98[0];
    if (*plVar2 != 0) {
      plVar2 = (longlong *)FUN_14218a4d0(plVar2[1],local_98,plVar2,&DAT_144fdba50);
      local_98[2] = *plVar2;
    }
    local_68 = 0xffff;
    local_66 = local_66 & 0xfff8;
    FUN_1407bae50(&local_80);
    local_80 = (undefined4)local_58;
    (*(code *)*param_2)(param_2[1],local_98 + 2);
    if (((local_66 & 1) != 0) && (CONCAT44(uStack_7c,local_80) != 0)) {
      FMemory::Free();
    }
    FUN_14217bd20(local_98);
    param_1 = (longlong *)*param_1;
    local_98[1] = 0;
    lVar3 = local_98[0];
    if (*param_1 != 0) {
      plVar2 = (longlong *)FUN_14218a4d0(param_1[1],local_98,param_1,&DAT_144fdba58);
      lVar3 = *plVar2;
    }
    local_66 = local_66 & 0xfff8;
    local_68 = 0xffff;
    local_98[2] = lVar3;
    FUN_1407bae50(&local_80);
  }
  local_80 = local_58._4_4_;
LAB_142189dd8:
  (*(code *)*param_2)(param_2[1],local_98 + 2);
  if (((local_66 & 1) != 0) && (CONCAT44(uStack_7c,local_80) != 0)) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14218a4d0 FUN_14218a4d0 body=610 status=ok
// SIG undefined FUN_14218a4d0(void)

undefined8 FUN_14218a4d0(longlong param_1,undefined8 param_2,longlong *param_3,short *param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  void *pvVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined2 *puVar13;
  longlong lVar14;
  undefined8 local_48;
  undefined2 *local_40;
  int local_38;
  int local_34;
  
  cVar5 = FUN_142190080();
  if (cVar5 != '\0') {
    puVar13 = (undefined2 *)0x0;
    local_48 = 0;
    if (*param_3 != 0) {
      puVar12 = *(undefined8 **)(param_1 + 0xb0);
      puVar8 = puVar12 + (longlong)*(int *)(param_1 + 0xb8) * 3;
      for (; puVar12 != puVar8; puVar12 = puVar12 + 3) {
        puVar7 = (undefined8 *)puVar12[1];
        puVar1 = puVar7 + *(int *)(puVar12 + 2);
        for (; puVar7 != puVar1; puVar7 = puVar7 + 1) {
          plVar2 = (longlong *)*puVar7;
          if (plVar2 == param_3) {
            if ((param_4 == (short *)0x0) || (*param_4 == 0)) {
              iVar6 = (int)plVar2[3];
              pvVar3 = (void *)plVar2[2];
              local_40 = (undefined2 *)0x0;
              local_38 = iVar6;
              if (iVar6 != 0) {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_40,iVar6,0);
                puVar13 = local_40;
                _guard_xfg_dispatch_icall_nop(local_40,pvVar3,(longlong)iVar6 * 2);
                iVar6 = local_38;
              }
            }
            else {
              lVar11 = -1;
              do {
                lVar11 = lVar11 + 1;
              } while (param_4[lVar11] != 0);
              local_38 = (int)plVar2[3];
              lVar14 = (longlong)local_38;
              iVar10 = (int)lVar11;
              if ((local_38 != 0) || (iVar6 = 1, iVar10 == 0)) {
                iVar6 = 0;
              }
              pvVar3 = (void *)plVar2[2];
              local_40 = (undefined2 *)0x0;
              if ((local_38 == 0) && (iVar6 + iVar10 == 0)) {
                local_34 = 0;
                iVar6 = 0;
              }
              else {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                          (&local_40,iVar6 + iVar10 + local_38,0);
                puVar13 = local_40;
                _guard_xfg_dispatch_icall_nop(local_40,pvVar3,lVar14 * 2);
                iVar6 = local_38;
              }
              if (iVar10 != 0) {
                local_38 = iVar6 + (uint)(iVar6 == 0) + iVar10;
                if (local_34 < local_38) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_40,iVar6);
                  puVar13 = local_40;
                }
                iVar4 = local_38;
                _guard_xfg_dispatch_icall_nop
                          (puVar13 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)),param_4,
                           (longlong)iVar10 * 2);
                (puVar13 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)))[iVar10] = 0;
                iVar6 = iVar4;
              }
            }
            puVar9 = &DAT_143f3eda8;
            if (iVar6 != 0) {
              puVar9 = puVar13;
            }
            puVar8 = (undefined8 *)FName::FName(&local_48,puVar9,1);
            FUN_14218da20(param_1,param_2,*puVar12,*puVar8,0);
            if (puVar13 != (undefined2 *)0x0) {
              FMemory::Free(puVar13);
            }
            return param_2;
          }
        }
      }
    }
  }
  FUN_14217bd20(param_2);
  return param_2;
}



// FUNCTION 14218a740 FUN_14218a740 body=2109 status=ok
// SIG undefined FUN_14218a740(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14218a740(longlong *param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_168 [32];
  longlong local_148;
  undefined8 local_140;
  longlong local_138;
  longlong *local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  undefined8 local_110;
  ulonglong local_108;
  undefined8 local_100;
  longlong *local_f8 [2];
  longlong local_e8;
  undefined8 local_e0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  int local_b4;
  undefined1 local_b0 [8];
  undefined1 *local_a8;
  int local_a0;
  longlong local_98;
  int local_90;
  undefined4 local_8c;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  int local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  param_1 = (longlong *)*param_1;
  cVar3 = FUN_14218ffe0(param_1);
  if (cVar3 != '\0') {
    plVar14 = param_1 + 4;
    plVar9 = (longlong *)param_1[0x18];
    if ((longlong *)param_1[0x18] == (longlong *)0x0) {
      plVar9 = plVar14;
    }
    cVar3 = FUN_142194620(*plVar9);
    if (cVar3 != '\0') {
      if (0 < (int)param_1[0x1b]) {
LAB_14218a89f:
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x38) < DAT_146aed098) &&
           (_Init_thread_header(&DAT_146aed098), DAT_146aed098 == -1)) {
          if ((DAT_146aeaf18 == '\0') &&
             (puVar7 = (undefined8 *)FUN_14218ce40(), puVar7 != &DAT_146aeaeb0)) {
            DAT_146aeaeb0._0_4_ = *(undefined4 *)puVar7;
            DAT_146aeaeb0._4_4_ = *(undefined4 *)((longlong)puVar7 + 4);
            uRam0000000146aeaeb8 = *(undefined4 *)(puVar7 + 1);
            uRam0000000146aeaebc = *(undefined4 *)((longlong)puVar7 + 0xc);
            _DAT_146aeaec0 = *(undefined4 *)(puVar7 + 2);
            uRam0000000146aeaec4 = *(undefined4 *)((longlong)puVar7 + 0x14);
            uRam0000000146aeaec8 = *(undefined4 *)(puVar7 + 3);
            uRam0000000146aeaecc = *(undefined4 *)((longlong)puVar7 + 0x1c);
            _DAT_146aeaed0 = *(undefined4 *)(puVar7 + 4);
            uRam0000000146aeaed4 = *(undefined4 *)((longlong)puVar7 + 0x24);
            DAT_146aeaed8._0_4_ = *(undefined4 *)(puVar7 + 5);
            DAT_146aeaed8._4_4_ = *(undefined4 *)((longlong)puVar7 + 0x2c);
            _DAT_146aeaee0 = *(undefined4 *)(puVar7 + 6);
            uRam0000000146aeaee4 = *(undefined4 *)((longlong)puVar7 + 0x34);
            _DAT_146aeaee8 = *(undefined4 *)(puVar7 + 7);
            uRam0000000146aeaeec = *(undefined4 *)((longlong)puVar7 + 0x3c);
            _DAT_146aeaef0 = *(undefined4 *)(puVar7 + 8);
            uRam0000000146aeaef4 = *(undefined4 *)((longlong)puVar7 + 0x44);
            _DAT_146aeaef8 = *(undefined4 *)(puVar7 + 9);
            uRam0000000146aeaefc = *(undefined4 *)((longlong)puVar7 + 0x4c);
            DAT_146aeaf00._0_4_ = *(undefined4 *)(puVar7 + 10);
            DAT_146aeaf00._4_4_ = *(undefined4 *)((longlong)puVar7 + 0x54);
            DAT_146aeaf08._0_4_ = *(undefined4 *)(puVar7 + 0xb);
            DAT_146aeaf08._4_4_ = *(undefined4 *)((longlong)puVar7 + 0x5c);
            DAT_146aeaf10 = puVar7[0xc];
            uVar16 = (undefined4)DAT_146aeaf10;
            uVar17 = (undefined4)((ulonglong)DAT_146aeaf10 >> 0x20);
            DAT_146aeaf18 = '\x01';
          }
          else {
            uVar16 = (undefined4)DAT_146aeaf10;
            uVar17 = (undefined4)((ulonglong)DAT_146aeaf10 >> 0x20);
          }
          _DAT_146aed090 = CONCAT44(uVar17,uVar16);
          DAT_146aed030._0_4_ = (undefined4)DAT_146aeaeb0;
          DAT_146aed030._4_4_ = DAT_146aeaeb0._4_4_;
          _DAT_146aed038 = uRam0000000146aeaeb8;
          uRam0000000146aed03c = uRam0000000146aeaebc;
          _DAT_146aed040 = _DAT_146aeaec0;
          uRam0000000146aed044 = uRam0000000146aeaec4;
          _DAT_146aed048 = uRam0000000146aeaec8;
          uRam0000000146aed04c = uRam0000000146aeaecc;
          DAT_146aed050._0_4_ = _DAT_146aeaed0;
          DAT_146aed050._4_4_ = uRam0000000146aeaed4;
          uRam0000000146aed058 = (undefined4)DAT_146aeaed8;
          uRam0000000146aed05c = DAT_146aeaed8._4_4_;
          _DAT_146aed060 = _DAT_146aeaee0;
          uRam0000000146aed064 = uRam0000000146aeaee4;
          uRam0000000146aed068 = _DAT_146aeaee8;
          uRam0000000146aed06c = uRam0000000146aeaeec;
          _DAT_146aed070 = _DAT_146aeaef0;
          uRam0000000146aed074 = uRam0000000146aeaef4;
          uRam0000000146aed078 = _DAT_146aeaef8;
          uRam0000000146aed07c = uRam0000000146aeaefc;
          _DAT_146aed080 = (undefined4)DAT_146aeaf00;
          uRam0000000146aed084 = DAT_146aeaf00._4_4_;
          uRam0000000146aed088 = (undefined4)DAT_146aeaf08;
          uRam0000000146aed08c = DAT_146aeaf08._4_4_;
          _Init_thread_footer(&DAT_146aed098);
        }
        FUN_1421922e0(CONCAT44(DAT_146aed030._4_4_,(undefined4)DAT_146aed030),param_1);
        if (param_2 != '\0') {
          uVar12 = 0;
          plVar9 = (longlong *)param_1[0x18];
          if ((longlong *)param_1[0x18] == (longlong *)0x0) {
            plVar9 = plVar14;
          }
          plVar13 = *(longlong **)(*plVar9 + 0x18);
          plVar9 = plVar13 + (longlong)*(int *)(*plVar9 + 0x20) * 3;
          if (plVar13 != plVar9) {
LAB_14218a920:
            if (*plVar13 != DAT_146aeb090) goto code_r0x00014218a925;
            if (plVar13 != (longlong *)0x0) {
              lVar1 = plVar13[2];
              puVar7 = (undefined8 *)plVar13[1];
              if ((int)lVar1 != 0) {
                iVar8 = (int)param_1[0x19];
                local_e8 = 0;
                local_e0 = 0;
                local_c8 = 0;
                local_c0 = 0;
                local_b8 = 0xffffffff;
                local_b4 = 0;
                local_a8 = (undefined1 *)0x0;
                local_a0 = 0;
                if (0 < iVar8) {
                  FUN_1405effc0(&local_e8,iVar8);
                  iVar8 = (int)param_1[0x19];
                }
                plVar9 = (longlong *)param_1[0x18];
                if ((longlong *)param_1[0x18] == (longlong *)0x0) {
                  plVar9 = plVar14;
                }
                plVar13 = plVar9 + (longlong)iVar8 * 5;
                for (; plVar9 != plVar13; plVar9 = plVar9 + 5) {
                  FUN_142178f50(&local_e8,&local_140,plVar9,0);
                }
                FUN_142178f50(&local_e8,&local_140,&DAT_146aed030,0);
                uVar15 = (ulonglong)((longlong)(puVar7 + (int)lVar1) + (7 - (longlong)puVar7)) >> 3;
                if (puVar7 + (int)lVar1 < puVar7) {
                  uVar15 = uVar12;
                }
                if (uVar15 != 0) {
                  do {
                    local_128 = 0;
                    local_120 = 0;
                    local_118 = 0;
                    local_110 = 0;
                    local_108 = 0;
                    local_100 = 0;
                    FUN_14218c0c0(&local_148,*puVar7,&local_128,0);
                    if (local_108 != 0) {
                      FMemory::Free();
                    }
                    if (local_118 != 0) {
                      FMemory::Free();
                    }
                    if (local_128 != 0) {
                      FMemory::Free();
                    }
                    lVar1 = local_148;
                    cVar3 = FUN_142190080(local_148);
                    if (cVar3 != '\0') {
                      lVar2 = *(longlong *)(lVar1 + 0x28);
                      local_138 = 0xd3;
                      if (lVar2 == 0xd3) {
LAB_14218aac7:
                        if ((int)local_e0 != local_b4) {
                          puVar5 = local_b0;
                          if (local_a8 != (undefined1 *)0x0) {
                            puVar5 = local_a8;
                          }
                          for (iVar8 = *(int *)(puVar5 + (longlong)
                                                         (int)((int)((ulonglong)lVar2 >> 0x20) +
                                                               (int)lVar2 & local_a0 - 1U) * 4);
                              iVar8 != -1; iVar8 = *(int *)(local_e8 + 8 + (longlong)iVar8 * 0x10))
                          {
                            if (*(longlong *)
                                 (*(longlong *)(local_e8 + (longlong)iVar8 * 0x10) + 0x28) == lVar2)
                            {
                              if (iVar8 != -1) goto LAB_14218ab52;
                              break;
                            }
                          }
                        }
                        FUN_142178f50(&local_e8,&local_140,&local_148);
                        FUN_1421922e0(lVar1,param_1);
                      }
                      else if ((*(int *)(lVar1 + 0x88) != 0) && (*(int *)(lVar1 + 0x88) != 1)) {
                        iVar8 = *(int *)(lVar1 + 0x98) + -1;
                        if (*(int *)(lVar1 + 0x98) == 0) {
                          iVar8 = 0;
                        }
                        if (iVar8 != 0) goto LAB_14218aac7;
                      }
                    }
LAB_14218ab52:
                    puVar7 = puVar7 + 1;
                    uVar12 = uVar12 + 1;
                  } while (uVar12 != uVar15);
                }
                local_a0 = 0;
                if (local_a8 != (undefined1 *)0x0) {
                  FMemory::Free(local_a8);
                }
                TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                          (&local_e8);
              }
            }
          }
        }
LAB_14218ab8a:
        local_98 = 0;
        local_8c = 0;
        plVar9 = (longlong *)param_1[0x18];
        if ((longlong *)param_1[0x18] == (longlong *)0x0) {
          plVar9 = plVar14;
        }
        local_90 = 0;
        local_78 = 0;
        local_70 = 0;
        local_68 = 0xffffffff;
        local_64 = 0;
        local_58 = 0;
        plVar14 = plVar9 + (longlong)(int)param_1[0x19] * 5;
        local_50 = 0;
        local_130 = plVar14;
        if (plVar9 != plVar14) {
          plVar13 = plVar9 + 4;
          do {
            plVar11 = (longlong *)plVar13[-1];
            if ((longlong *)plVar13[-1] == (longlong *)0x0) {
              plVar11 = plVar13 + -3;
            }
            plVar10 = plVar11 + (longlong)(int)*plVar13 * 2;
            for (; plVar11 != plVar10; plVar11 = plVar11 + 2) {
              lVar1 = *plVar9;
              local_138 = lVar1;
              cVar3 = FUN_142190080(lVar1);
              if (cVar3 != '\0') {
                local_148 = 0xd3;
                if (*(longlong *)(lVar1 + 0x28) == 0xd3) {
LAB_14218ac6e:
                  if ((int)plVar11[1] != 0) {
                    FUN_142178f50(&local_98,&local_140,&local_138,0);
                    local_f8[0] = &local_138;
                    FUN_14217a560(plVar11,&DAT_146aed048,local_f8);
                    local_f8[0] = param_1;
                    FUN_14217a370(plVar11,&DAT_146aed038,local_f8);
                  }
                }
                else if ((*(int *)(lVar1 + 0x88) != 0) && (*(int *)(lVar1 + 0x88) != 1)) {
                  iVar8 = *(int *)(lVar1 + 0x98) + -1;
                  if (*(int *)(lVar1 + 0x98) == 0) {
                    iVar8 = 0;
                  }
                  if (iVar8 != 0) goto LAB_14218ac6e;
                }
              }
              plVar14 = local_130;
            }
            plVar9 = plVar9 + 5;
            plVar13 = plVar13 + 5;
          } while (plVar9 != plVar14);
        }
        if (1 < local_90 - local_64) {
          plVar14 = param_1 + 0x1a;
          FUN_14217af80(plVar14,&DAT_146aed040,param_1 + 2);
          local_130 = &local_98;
          local_148 = 0;
          if ((*(longlong *)CONCAT44(DAT_146aed050._4_4_,(undefined4)DAT_146aed050) != 0) &&
             (cVar3 = FUN_1407ce010((longlong *)
                                    CONCAT44(DAT_146aed050._4_4_,(undefined4)DAT_146aed050) + 1),
             cVar3 != '\0')) {
            plVar13 = (longlong *)*plVar14;
            plVar9 = plVar13 + (longlong)(int)param_1[0x1b] * 5;
            if (plVar13 != plVar9) {
              do {
                if ((*(longlong *)*plVar13 ==
                     *(longlong *)CONCAT44(DAT_146aed050._4_4_,(undefined4)DAT_146aed050)) &&
                   (*(longlong *)(((longlong *)*plVar13)[1] + 0x28) ==
                    *(longlong *)
                     (((longlong *)CONCAT44(DAT_146aed050._4_4_,(undefined4)DAT_146aed050))[1] +
                     0x28))) goto LAB_14218ae3a;
                plVar13 = plVar13 + 5;
              } while (plVar13 != plVar9);
            }
            uVar6 = FUN_142180af0(&local_130,local_f8);
            local_128 = CONCAT44(DAT_146aed050._4_4_,(undefined4)DAT_146aed050);
            local_108 = CONCAT62((int6)(local_108 >> 0x10),0xffff) & 0xfffffffffff8ffff;
            FUN_140643170(&local_120,uVar6);
            iVar8 = (int)param_1[0x1b];
            *(int *)(param_1 + 0x1b) = iVar8 + 1;
            if (*(int *)((longlong)param_1 + 0xdc) < iVar8 + 1) {
              TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar14,iVar8);
            }
            plVar14 = (longlong *)(*plVar14 + (longlong)iVar8 * 0x28);
            *plVar14 = local_128;
            *(ushort *)((longlong)plVar14 + 0x22) = *(ushort *)((longlong)plVar14 + 0x22) & 0xfff8;
            *(undefined2 *)(plVar14 + 4) = 0xffff;
            FUN_14217f450(plVar14 + 1,&local_120);
            if (((local_108 & 0x10000) != 0) && (local_120 != 0)) {
              FMemory::Free();
            }
            if (local_f8[0] != (longlong *)0x0) {
              FMemory::Free();
            }
          }
        }
LAB_14218ae3a:
        local_50 = 0;
        if (local_58 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (&local_98);
        return 1;
      }
      plVar9 = (longlong *)param_1[0x18];
      if ((longlong *)param_1[0x18] == (longlong *)0x0) {
        plVar9 = plVar14;
      }
      plVar13 = plVar9 + (longlong)(int)param_1[0x19] * 5;
      if (plVar9 != plVar13) {
        plVar11 = plVar9 + 4;
        do {
          lVar1 = *plVar9;
          cVar3 = FUN_142190080(lVar1);
          if ((cVar3 != '\0') &&
             ((local_140 = 0xd3, *(longlong *)(lVar1 + 0x28) == 0xd3 ||
              ((((*(int *)(lVar1 + 0x88) != 0 && (*(int *)(lVar1 + 0x88) != 1)) &&
                (*(int *)(lVar1 + 0x98) != 0)) && (*(int *)(lVar1 + 0x98) != 1)))))) {
            plVar10 = (longlong *)plVar11[-1];
            if ((longlong *)plVar11[-1] == (longlong *)0x0) {
              plVar10 = plVar11 + -3;
            }
            plVar4 = plVar10 + (longlong)(int)*plVar11 * 2;
            for (; plVar10 != plVar4; plVar10 = plVar10 + 2) {
              if (0 < (int)plVar10[1]) goto LAB_14218a89f;
            }
          }
          plVar9 = plVar9 + 5;
          plVar11 = plVar11 + 5;
        } while (plVar9 != plVar13);
      }
    }
  }
  return 0;
code_r0x00014218a925:
  plVar13 = plVar13 + 3;
  if (plVar13 == plVar9) goto LAB_14218ab8a;
  goto LAB_14218a920;
}



// FUNCTION 14218af80 FUN_14218af80 body=73 status=ok
// SIG undefined FUN_14218af80(void)

longlong * FUN_14218af80(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    plVar2 = (longlong *)FUN_14218dae0();
    puVar3 = (undefined8 *)*plVar2;
    puVar1 = puVar3 + (int)plVar2[1];
    for (; puVar3 != puVar1; puVar3 = puVar3 + 1) {
      if (*(longlong *)*puVar3 == param_3) {
        return (longlong *)*puVar3;
      }
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 14218afd0 FUN_14218afd0 body=109 status=ok
// SIG undefined FUN_14218afd0(void)

undefined8 * FUN_14218afd0(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    plVar2 = (longlong *)FUN_14218dae0(param_1,param_3);
    puVar3 = (undefined8 *)*plVar2;
    puVar1 = puVar3 + (int)plVar2[1];
    for (; puVar3 != puVar1; puVar3 = puVar3 + 1) {
      if (*(longlong *)*puVar3 == param_4) {
        *param_2 = (longlong *)*puVar3;
        return param_2;
      }
    }
  }
  FUN_14217bd20(param_2);
  return param_2;
}



// FUNCTION 14218b040 FUN_14218b040 body=213 status=ok
// SIG undefined FUN_14218b040(void)

longlong FUN_14218b040(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_38 [4];
  
  lVar2 = FUN_14218c420();
  AcquireSRWLockShared((PSRWLOCK)(lVar2 + 0x48));
  plVar4 = *(longlong **)(lVar2 + 0x30);
  iVar3 = *(int *)(lVar2 + 0x40) + -1;
  if (*(int *)(lVar2 + 0x40) == 0) {
    iVar3 = 0;
  }
  plVar1 = plVar4 + iVar3 / 5;
  lVar5 = 0;
  if (plVar4 != (longlong *)0x0) {
    lVar5 = *plVar4;
  }
  FUN_142196010((longlong *)(lVar2 + 0x30),local_38);
  while ((lVar6 = 0, lVar5 != local_38[0] && (lVar6 = lVar5, *(longlong *)(lVar5 + 0x28) != param_1)
         )) {
    lVar5 = lVar5 + 0xc0;
    if ((plVar4 != plVar1) && (lVar5 == *plVar4 + 0x3c0)) {
      lVar5 = plVar4[1];
      plVar4 = plVar4 + 1;
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)(lVar2 + 0x48));
  return lVar6;
}



// FUNCTION 14218b120 FindId body=445 status=ok
// SIG undefined FindId(void)

int * TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>::FindId
                (longlong *param_1,int *param_2,undefined8 *param_3)

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
        cVar1 = FSoftObjectPath::operator==((longlong)iVar8 * 0x20 + lVar4,param_3);
        if (cVar1 != '\0') {
          *param_2 = iVar8;
          return param_2;
        }
        lVar4 = *param_1;
        iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + lVar4);
      } while (iVar8 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 14218b2e0 FUN_14218b2e0 body=177 status=ok
// SIG undefined FUN_14218b2e0(void)

int * FUN_14218b2e0(longlong *param_1,int *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar1 = *(longlong *)*param_3;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        plVar3 = *(longlong **)(*param_1 + (longlong)iVar2 * 0x10);
        if ((*plVar3 == lVar1) &&
           (*(longlong *)(plVar3[1] + 0x28) == *(longlong *)(((longlong *)*param_3)[1] + 0x28))) {
          *param_2 = iVar2;
          return param_2;
        }
        iVar2 = *(int *)(*param_1 + 8 + (longlong)iVar2 * 0x10);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 14218b3a0 FUN_14218b3a0 body=121 status=ok
// SIG undefined FUN_14218b3a0(void)

int * FUN_14218b3a0(longlong param_1,int *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined8 *puVar5;
  
  if (((((*(byte *)(param_1 + 0x58) & 4) != 0) && ((*(byte *)(param_1 + 0x58) & 2) != 0)) &&
      (DAT_146aeae14 != '\0')) && (iVar2 = *param_2, iVar2 != -1)) {
    piVar4 = *(int **)(param_1 + 0xb0);
    piVar3 = piVar4 + *(int *)(param_1 + 0xb8);
    while( true ) {
      if (piVar4 == piVar3) {
        puVar5 = *(undefined8 **)(param_1 + 0xa0);
        puVar1 = puVar5 + *(int *)(param_1 + 0xa8);
        while( true ) {
          if (puVar5 == puVar1) {
            return (int *)0x0;
          }
          if (*(int *)*puVar5 == iVar2) break;
          puVar5 = puVar5 + 1;
        }
        return (int *)*puVar5;
      }
      if (*piVar4 == iVar2) break;
      piVar4 = piVar4 + 1;
    }
  }
  piVar3 = (int *)FUN_142191860();
  return piVar3;
}



// FUNCTION 14218b420 FUN_14218b420 body=140 status=ok
// SIG undefined FUN_14218b420(void)

longlong FUN_14218b420(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar2 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar2 = param_1 + 0x40;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x50) - 1U) * 4);
    if (iVar1 != -1) {
      while (lVar2 = *(longlong *)(param_1 + 8) + (longlong)iVar1 * 0x28,
            *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 0x28) != param_2) {
        iVar1 = *(int *)(lVar2 + 0x20);
        if (iVar1 == -1) {
          return 0;
        }
      }
      if (iVar1 != -1) goto LAB_14218b4a0;
    }
  }
  lVar2 = 0;
LAB_14218b4a0:
  lVar3 = lVar2 + 8;
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 14218b4b0 FUN_14218b4b0 body=95 status=ok
// SIG undefined FUN_14218b4b0(void)

undefined8 FUN_14218b4b0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(param_1 + 8);
  lVar2 = *param_2;
  puVar1 = puVar4 + *(int *)(param_1 + 0x10);
  while( true ) {
    if (puVar4 == puVar1) {
      return 0;
    }
    plVar3 = (longlong *)(**(code **)(*(longlong *)*puVar4 + 0x10))();
    if (lVar2 == *plVar3) break;
    puVar4 = puVar4 + 1;
  }
  return *puVar4;
}



// FUNCTION 14218b510 FUN_14218b510 body=302 status=ok
// SIG undefined FUN_14218b510(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14218b510(void)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  float fVar6;
  float fVar7;
  LARGE_INTEGER local_res8;
  longlong local_38 [4];
  
  QueryPerformanceCounter(&local_res8);
  fVar7 = (float)(((double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0) - DAT_1468e2430);
  fVar6 = fVar7 - _DAT_146aed174;
  _DAT_146aed174 = fVar7;
  lVar2 = FUN_14218c420();
  lVar4 = 0;
  plVar5 = *(longlong **)(lVar2 + 0x70);
  iVar3 = *(int *)(lVar2 + 0x80) + -1;
  if (*(int *)(lVar2 + 0x80) == 0) {
    iVar3 = 0;
  }
  plVar1 = plVar5 + ((int)(((longlong)iVar3 / 3 + ((longlong)iVar3 >> 0x3f) & 0xffffffffU) >> 0x1f)
                    + iVar3 / 3 + (iVar3 >> 0x1f));
  if (plVar5 != (longlong *)0x0) {
    lVar4 = *plVar5;
  }
  FUN_1421960e0(lVar2 + 0x70,local_38);
  while (lVar4 != local_38[0]) {
    if ((((10.0 <= fVar6) && ((*(byte *)(lVar4 + 0x58) & 4) != 0)) &&
        ((*(byte *)(lVar4 + 0x58) & 2) != 0)) &&
       ((DAT_146aeae14 != '\0' && (*(int *)(lVar4 + 0xa8) != 0)))) {
      FUN_14218b710(lVar4,2);
    }
    FUN_142189710(lVar4);
    lVar4 = lVar4 + 0x120;
    if ((plVar5 != plVar1) && (lVar4 == *plVar5 + 0x360)) {
      lVar4 = plVar5[1];
      plVar5 = plVar5 + 1;
    }
  }
  FUN_14218fa70(DAT_146aeb030);
  return;
}



// FUNCTION 14218b640 FUN_14218b640 body=200 status=ok
// SIG undefined FUN_14218b640(void)

void FUN_14218b640(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_38 [4];
  
  lVar2 = FUN_14218c420();
  AcquireSRWLockShared((PSRWLOCK)(lVar2 + 0x48));
  plVar5 = *(longlong **)(lVar2 + 0x30);
  lVar4 = 0;
  iVar3 = *(int *)(lVar2 + 0x40) + -1;
  if (*(int *)(lVar2 + 0x40) == 0) {
    iVar3 = 0;
  }
  plVar1 = plVar5 + iVar3 / 5;
  if (plVar5 != (longlong *)0x0) {
    lVar4 = *plVar5;
  }
  FUN_142196010((longlong *)(lVar2 + 0x30),local_38);
  while (lVar4 != local_38[0]) {
    (*(code *)*param_1)(param_1[1],lVar4);
    lVar4 = lVar4 + 0xc0;
    if ((plVar5 != plVar1) && (lVar4 == *plVar5 + 0x3c0)) {
      lVar4 = plVar5[1];
      plVar5 = plVar5 + 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014218b701. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)(lVar2 + 0x48));
  return;
}



// FUNCTION 14218b710 FUN_14218b710 body=757 status=ok
// SIG undefined FUN_14218b710(void)

void FUN_14218b710(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  char cVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined2 *puVar15;
  longlong *plVar16;
  ulonglong uVar17;
  longlong local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong *plStack_50;
  undefined1 local_48 [16];
  
  if (*(int *)(param_1 + 0x40) == 0) {
    puVar15 = &DAT_143f3eda8;
  }
  else {
    puVar15 = *(undefined2 **)(param_1 + 0x38);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar10 = FGuid::NewGuid(local_48);
  lVar11 = operator_new(0xf0);
  if (lVar11 == 0) {
    local_68 = 0;
  }
  else {
    local_68 = FUN_14217e300(lVar11,uVar5,puVar15,uVar10);
  }
  plStack_60 = (longlong *)operator_new(0x18);
  if (plStack_60 != (longlong *)0x0) {
    *(undefined4 *)(plStack_60 + 1) = 1;
    *plStack_60 = (longlong)&PTR_FUN_144fdd270;
    *(undefined4 *)((longlong)plStack_60 + 0xc) = 1;
    plStack_60[2] = local_68;
  }
  SharedPointerInternals::EnableSharedFromThis(&local_68,local_68);
  lVar8 = local_68;
  lVar11 = local_68 + 0x20;
  lVar12 = *(longlong *)(local_68 + 0xc0);
  if (*(longlong *)(local_68 + 0xc0) == 0) {
    lVar12 = lVar11;
  }
  if (*(int *)(lVar12 + 0x20) == 0) {
    lVar13 = FUN_140aa2bd0(lVar12);
  }
  else {
    lVar13 = *(longlong *)(lVar12 + 0x18);
    if (*(longlong *)(lVar12 + 0x18) == 0) {
      lVar13 = lVar12 + 8;
    }
    lVar13 = lVar13 + (longlong)(*(int *)(lVar12 + 0x20) + -1) * 0x10;
  }
  uVar14 = 0;
  bVar6 = false;
  if ((param_2 == 2) ||
     ((param_2 == 0 && (*(char *)(*(longlong *)(param_1 + 0x110) + 0x10) != '\0')))) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  plVar16 = *(longlong **)(param_1 + 0xa0);
  uVar17 = (longlong)*(int *)(param_1 + 0xa8) & 0x1fffffffffffffff;
  if (plVar16 + *(int *)(param_1 + 0xa8) < plVar16) {
    uVar17 = uVar14;
  }
  if (uVar17 != 0) {
    do {
      lVar12 = *plVar16;
      uVar4 = *(uint *)(lVar12 + 0x98);
      if (((int)uVar4 < 0) || ((bVar7 && ((uVar4 >> 0x1e & 1) != 0)))) {
        if (lVar13 == 0) {
          lVar13 = *(longlong *)(lVar8 + 0xc0);
          if (lVar13 == 0) {
            lVar13 = lVar11;
          }
          lVar13 = FUN_140aa2bd0(lVar13);
        }
        cVar9 = FUN_14218ba10(lVar12,lVar13,param_1,1);
        if (cVar9 != '\0') {
          bVar6 = true;
          lVar13 = 0;
        }
      }
      plVar16 = plVar16 + 1;
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar17);
    if (((bVar6) && (cVar9 = FUN_14218ffe0(lVar8), cVar9 != '\0')) &&
       (cVar9 = FUN_14218a740(&local_68,*(undefined1 *)(*(longlong *)(param_1 + 0x108) + 0x10)),
       cVar9 != '\0')) {
      local_58 = local_68;
      plStack_50 = plStack_60;
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
        UNLOCK();
      }
      FUN_142194040(&local_58);
      plVar16 = plStack_50;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_50 + 1;
        lVar11 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plStack_50)(plStack_50);
          LOCK();
          piVar2 = (int *)((longlong)plVar16 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar16 + 8))(plVar16,1);
          }
        }
      }
    }
  }
  plVar16 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    lVar11 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
  }
  return;
}



// FUNCTION 14218ba10 FUN_14218ba10 body=1013 status=ok
// SIG undefined FUN_14218ba10(void)

undefined8 FUN_14218ba10(longlong param_1,longlong *param_2,longlong param_3,char param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  float fVar11;
  double dVar12;
  LARGE_INTEGER local_68;
  undefined8 local_60;
  float local_58;
  undefined4 uStack_54;
  undefined2 local_40;
  ushort local_3e;
  
  if ((param_4 == '\0') || ((*(uint *)(param_1 + 0x98) >> 0x1e & 1) != 0)) {
    uVar5 = *(uint *)(param_1 + 0x98);
    if ((uVar5 & 0x3fffffff) == 0) {
      uVar5 = (uVar5 + 1 ^ uVar5) & 0x3fffffff ^ uVar5;
      *(uint *)(param_1 + 0x98) = uVar5;
    }
    plVar8 = *(longlong **)(param_1 + 0xa8);
    plVar1 = plVar8 + (longlong)*(int *)(param_1 + 0xb0) * 5;
    if (plVar8 != plVar1) {
      do {
        plVar10 = (longlong *)*param_2;
        iVar3 = (int)param_2[1];
        plVar2 = plVar10 + (longlong)iVar3 * 5;
        if (plVar10 != plVar2) {
          do {
            if ((*(longlong *)*plVar10 == *(longlong *)*plVar8) &&
               (*(longlong *)(((longlong *)*plVar10)[1] + 0x28) ==
                *(longlong *)(((longlong *)*plVar8)[1] + 0x28))) goto LAB_14218bb1f;
            plVar10 = plVar10 + 5;
          } while (plVar10 != plVar2);
        }
        *(int *)(param_2 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
        }
        plVar10 = (longlong *)(*param_2 + (longlong)iVar3 * 0x28);
        *plVar10 = *plVar8;
        *(ushort *)((longlong)plVar10 + 0x22) = *(ushort *)((longlong)plVar10 + 0x22) & 0xfff8;
        *(undefined2 *)(plVar10 + 4) = 0xffff;
LAB_14218bb1f:
        FUN_14217f4f0(plVar10 + 1,plVar8 + 1);
        plVar8 = plVar8 + 5;
      } while (plVar8 != plVar1);
      uVar5 = *(uint *)(param_1 + 0x98);
    }
    local_68.QuadPart = 0;
    if ((**(longlong **)(param_3 + 0x48) != 0) &&
       (cVar4 = FUN_1407ce010(*(longlong **)(param_3 + 0x48) + 1), cVar4 != '\0')) {
      plVar8 = (longlong *)*param_2;
      plVar1 = plVar8 + (longlong)(int)param_2[1] * 5;
      if (plVar8 != plVar1) {
        do {
          if ((*(longlong *)*plVar8 == **(longlong **)(param_3 + 0x48)) &&
             (*(longlong *)(((longlong *)*plVar8)[1] + 0x28) ==
              *(longlong *)((*(longlong **)(param_3 + 0x48))[1] + 0x28))) goto LAB_14218bc3f;
          plVar8 = plVar8 + 5;
        } while (plVar8 != plVar1);
      }
      local_60 = *(undefined8 *)(param_3 + 0x48);
      local_3e = local_3e & 0xfff8;
      local_40 = 0xffff;
      FUN_1407bae50(&local_58);
      iVar3 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar3 + 1;
      local_58 = (float)(uVar5 & 0x3fffffff);
      if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
      }
      lVar7 = *param_2;
      *(undefined8 *)(lVar7 + (longlong)iVar3 * 0x28) = local_60;
      lVar7 = lVar7 + (longlong)iVar3 * 0x28;
      *(ushort *)(lVar7 + 0x22) = *(ushort *)(lVar7 + 0x22) & 0xfff8;
      *(undefined2 *)(lVar7 + 0x20) = 0xffff;
      FUN_14217f450(lVar7 + 8,&local_58);
      if (((local_3e & 1) != 0) && (CONCAT44(uStack_54,local_58) != 0)) {
        FMemory::Free();
      }
    }
LAB_14218bc3f:
    QueryPerformanceCounter(&local_68);
    dVar12 = (double)local_68.QuadPart;
    local_68.QuadPart = 0;
    fVar11 = (float)((dVar12 * DAT_1468b02f8 + 16777216.0) - DAT_1468e2430) -
             *(float *)(param_1 + 0x9c);
    if ((**(longlong **)(param_3 + 0x50) != 0) &&
       (cVar4 = FUN_1407ce010(*(longlong **)(param_3 + 0x50) + 1), cVar4 != '\0')) {
      plVar8 = (longlong *)*param_2;
      plVar1 = plVar8 + (longlong)(int)param_2[1] * 5;
      if (plVar8 != plVar1) {
        do {
          if ((*(longlong *)*plVar8 == **(longlong **)(param_3 + 0x50)) &&
             (*(longlong *)(((longlong *)*plVar8)[1] + 0x28) ==
              *(longlong *)((*(longlong **)(param_3 + 0x50))[1] + 0x28))) goto LAB_14218bd5f;
          plVar8 = plVar8 + 5;
        } while (plVar8 != plVar1);
      }
      local_60 = *(undefined8 *)(param_3 + 0x50);
      local_3e = local_3e & 0xfff8;
      local_40 = 0xffff;
      FUN_1407bae70(&local_58);
      iVar3 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar3 + 1;
      local_58 = fVar11;
      if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
      }
      lVar7 = *param_2;
      *(undefined8 *)(lVar7 + (longlong)iVar3 * 0x28) = local_60;
      lVar7 = lVar7 + (longlong)iVar3 * 0x28;
      *(ushort *)(lVar7 + 0x22) = *(ushort *)(lVar7 + 0x22) & 0xfff8;
      *(undefined2 *)(lVar7 + 0x20) = 0xffff;
      FUN_14217f450(lVar7 + 8,&local_58);
      if (((local_3e & 1) != 0) && (CONCAT44(uStack_54,local_58) != 0)) {
        FMemory::Free();
      }
    }
LAB_14218bd5f:
    lVar7 = *(longlong *)(param_1 + 0xb8);
    if (*(char *)(*(longlong *)(param_3 + 0x118) + 0x10) == '\0') {
      lVar9 = (longlong)*(int *)(param_1 + 0xc0) * 0x30 + lVar7;
      for (; lVar7 != lVar9; lVar7 = lVar7 + 0x30) {
        if (*(int *)(lVar7 + 8) != 0) {
          FUN_142193590(lVar7 + 8,param_2,param_1);
        }
      }
    }
    else {
      lVar9 = (longlong)*(int *)(param_1 + 0xc0) * 0x30 + lVar7;
      for (; lVar7 != lVar9; lVar7 = lVar7 + 0x30) {
        FUN_142193590(lVar7 + 8,param_2,param_1);
      }
    }
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  FUN_1421938f0(param_1);
  return uVar6;
}



// FUNCTION 14218be10 FUN_14218be10 body=108 status=ok
// SIG undefined FUN_14218be10(void)

undefined * FUN_14218be10(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aed32c) {
    _Init_thread_header(&DAT_146aed32c);
    if (DAT_146aed32c == -1) {
      atexit(_dynamic_atexit_destructor_for__GTraceAuxiliary__);
      _Init_thread_footer(&DAT_146aed32c);
      return &DAT_146527270;
    }
  }
  return &DAT_146527270;
}



// FUNCTION 14218be80 FUN_14218be80 body=108 status=ok
// SIG undefined FUN_14218be80(void)

undefined * FUN_14218be80(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aed330) {
    _Init_thread_header(&DAT_146aed330);
    if (DAT_146aed330 == -1) {
      atexit(_dynamic_atexit_destructor_for__GTraceAuxiliary__);
      _Init_thread_footer(&DAT_146aed330);
      return &DAT_146527318;
    }
  }
  return &DAT_146527318;
}



// FUNCTION 14218bef0 FUN_14218bef0 body=337 status=ok
// SIG undefined FUN_14218bef0(void)

short * FUN_14218bef0(short param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  short *psVar6;
  byte bVar7;
  longlong *plVar8;
  uint uVar9;
  short *psVar10;
  
  puVar5 = (undefined8 *)FUN_14218db80();
  psVar10 = (short *)0x0;
  plVar8 = (longlong *)*puVar5;
  uVar2 = *(uint *)(puVar5 + 2);
  iVar3 = uVar2 - 1;
  if (uVar2 == 0) {
    iVar3 = 0;
  }
  plVar1 = plVar8 + ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2);
  psVar6 = psVar10;
  if (plVar8 != (longlong *)0x0) {
    psVar6 = (short *)*plVar8;
  }
  uVar9 = uVar2 & 0x80000003;
  if ((int)uVar9 < 0) {
    uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
  }
  if ((uVar2 == 0) || (uVar9 != 0)) {
    bVar7 = 0;
  }
  else {
    bVar7 = 1;
  }
  if (plVar8 + (longlong)((int)(uVar2 + ((int)uVar2 >> 0x1f & 3U)) >> 2) + -1 +
               ((ulonglong)bVar7 ^ 1) != (longlong *)0x0) {
    uVar4 = 4;
    if (bVar7 == 0) {
      uVar4 = uVar9;
    }
    psVar10 = (short *)((longlong)(int)uVar4 * 0x100 +
                       plVar8[(longlong)((int)(uVar2 + ((int)uVar2 >> 0x1f & 3U)) >> 2) + -1 +
                              ((ulonglong)bVar7 ^ 1)]);
  }
  while( true ) {
    if (psVar6 == psVar10) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146aed31c) &&
         (_Init_thread_header(&DAT_146aed31c), DAT_146aed31c == -1)) {
        atexit((_func_5014 *)&LAB_143ea70d0);
        _Init_thread_footer(&DAT_146aed31c);
      }
      return (short *)&DAT_146527170;
    }
    if (*psVar6 == param_1) break;
    psVar6 = psVar6 + 0x80;
    if ((plVar8 != plVar1) && (psVar6 == (short *)(*plVar8 + 0x400))) {
      psVar6 = (short *)plVar8[1];
      plVar8 = plVar8 + 1;
    }
  }
  return psVar6;
}



// FUNCTION 14218c050 FUN_14218c050 body=108 status=ok
// SIG undefined FUN_14218c050(void)

undefined * FUN_14218c050(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aed1fc) {
    _Init_thread_header(&DAT_146aed1fc);
    if (DAT_146aed1fc == -1) {
      atexit(_dynamic_atexit_destructor_for__DefaultFormatter__);
      _Init_thread_footer(&DAT_146aed1fc);
      return &DAT_1465270f0;
    }
  }
  return &DAT_1465270f0;
}



// FUNCTION 14218c0c0 FUN_14218c0c0 body=777 status=ok
// SIG undefined FUN_14218c0c0(void)

longlong * FUN_14218c0c0(longlong *param_1,longlong param_2,longlong param_3,byte param_4)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *local_38;
  int local_30;
  
  if (param_2 == 0) {
    FUN_14217c140();
    return param_1;
  }
  lVar2 = FUN_14218b040(param_2);
  if (lVar2 == 0) {
    lVar2 = FUN_142190dd0(param_2,param_3);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146aeb960) {
      _Init_thread_header(&DAT_146aeb960);
      if (DAT_146aeb960 == -1) {
        FName::FName(&DAT_146aeb958,&DAT_144fdab08,1);
        _Init_thread_footer(&DAT_146aeb960);
      }
    }
    if (param_2 == DAT_146aeb958) {
      plVar3 = (longlong *)FMemory::Realloc(0);
      if (plVar3 != (longlong *)0x0) {
        *plVar3 = (longlong)&PTR_GetPoolName_144fdd160;
        lVar4 = FDelegateHandle::GenerateNewID();
        plVar3[2] = lVar4;
      }
      cVar1 = FUN_142190080(lVar2);
      if ((cVar1 != '\0') && (*(byte *)(lVar2 + 0x40) < 5)) {
        cVar1 = (**(code **)(*plVar3 + 0x38))(plVar3,lVar2);
        if (cVar1 != '\0') {
          *(undefined1 *)(lVar2 + 0x40) = 5;
        }
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3,0);
        lVar4 = FMemory::Realloc(plVar3,0,0);
        if (lVar4 != 0) {
          FMemory::Free(lVar4);
        }
      }
    }
    else {
      plVar3 = (longlong *)FMemory::Realloc(0,0x20);
      if (plVar3 != (longlong *)0x0) {
        plVar3[1] = param_3;
        *plVar3 = (longlong)&PTR_GetPoolName_144fdd120;
        lVar4 = FDelegateHandle::GenerateNewID();
        plVar3[3] = lVar4;
      }
      cVar1 = FUN_142190080(lVar2);
      if ((cVar1 != '\0') && (*(byte *)(lVar2 + 0x40) < param_4)) {
        cVar1 = (**(code **)(*plVar3 + 0x38))(plVar3,lVar2);
        if (cVar1 != '\0') {
          *(byte *)(lVar2 + 0x40) = param_4;
        }
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3,0);
        lVar4 = FMemory::Realloc(plVar3,0,0);
        if (lVar4 != 0) {
          FMemory::Free(lVar4);
        }
      }
      local_38 = (longlong *)0x0;
      local_30 = 0;
      puVar5 = (undefined8 *)operator_new(0x18,&local_38);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &PTR_GetPoolName_144fdd1a0;
        uVar6 = FDelegateHandle::GenerateNewID();
        puVar5[2] = uVar6;
      }
      cVar1 = FUN_142190080(lVar2);
      if ((cVar1 != '\0') && (*(byte *)(lVar2 + 0x40) < 2)) {
        plVar3 = (longlong *)0x0;
        if (local_30 != 0) {
          plVar3 = local_38;
        }
        cVar1 = (**(code **)(*plVar3 + 0x38))(plVar3,lVar2);
        if (cVar1 != '\0') {
          *(undefined1 *)(lVar2 + 0x40) = 2;
        }
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_38);
    }
    cVar1 = FUN_142190080(lVar2);
    if (cVar1 != '\0') {
      uVar6 = FUN_14218be80();
      FUN_14218e200(uVar6,*(undefined8 *)(lVar2 + 0x28));
    }
    *param_1 = lVar2;
  }
  else {
    if (param_4 == 1) {
      plVar3 = (longlong *)FMemory::Realloc(0,0x20);
      if (plVar3 != (longlong *)0x0) {
        plVar3[1] = param_3;
        *plVar3 = (longlong)&PTR_GetPoolName_144fdd120;
        lVar4 = FDelegateHandle::GenerateNewID();
        plVar3[3] = lVar4;
      }
      cVar1 = FUN_142190080(lVar2);
      if ((cVar1 != '\0') && (*(char *)(lVar2 + 0x40) == '\0')) {
        cVar1 = (**(code **)(*plVar3 + 0x38))(plVar3,lVar2);
        if (cVar1 != '\0') {
          *(undefined1 *)(lVar2 + 0x40) = 1;
        }
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3,0);
        lVar4 = FMemory::Realloc(plVar3,0,0);
        if (lVar4 != 0) {
          FMemory::Free(lVar4);
        }
      }
    }
    *param_1 = lVar2;
  }
  return param_1;
}



// FUNCTION 14218c3d0 Enter<0> body=26 status=ok
// SIG undefined Enter<0>(void)

undefined8 Trace::Private::FLogScope::Enter<0>(undefined8 param_1)

{
  FUN_14218c0c0();
  return param_1;
}



// FUNCTION 14218c3f0 FUN_14218c3f0 body=44 status=ok
// SIG undefined FUN_14218c3f0(void)

void FUN_14218c3f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = 0;
  local_10 = 0;
  local_28 = 0;
  local_20 = 0;
  FUN_1421872f0(param_1,param_2,&local_18,&local_28);
  return;
}



// FUNCTION 14218c420 FUN_14218c420 body=123 status=ok
// SIG undefined FUN_14218c420(void)

undefined * FUN_14218c420(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aed170) {
    _Init_thread_header(&DAT_146aed170);
    if (DAT_146aed170 == -1) {
      FUN_14217c570(&DAT_146aed0c0);
      atexit(FUN_143ea7300);
      _Init_thread_footer(&DAT_146aed170);
      return &DAT_146aed0c0;
    }
  }
  return &DAT_146aed0c0;
}



// FUNCTION 14218c4a0 FUN_14218c4a0 body=497 status=ok
// SIG undefined FUN_14218c4a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14218c4a0(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  longlong local_38 [6];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aeba80) {
    _Init_thread_header(&DAT_146aeba80);
    if (DAT_146aeba80 == -1) {
      local_38[1] = 0x10;
      local_38[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
      FGenericPlatformString::Memcpy(local_38[0],L"console_command",0x20);
      local_38[2] = 0;
      local_38[3] = 0xd;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38 + 2,0);
      FGenericPlatformString::Memcpy(local_38[2],L"gbxtelemetry",0x1a);
      local_38[4] = 0;
      local_38[5] = 0;
      puVar2 = (undefined8 *)FName::FName(&local_res8,L"CheatCommand",1);
      puVar2 = (undefined8 *)FUN_14218c0c0(local_res10,*puVar2,local_38,1);
      DAT_146aeba68 = *puVar2;
      if (local_38[4] != 0) {
        FMemory::Free();
      }
      if (local_38[2] != 0) {
        FMemory::Free();
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      FUN_14217bd20(&DAT_146aeba70);
      FUN_14217bd20(&DAT_146aeba78);
      uVar1 = DAT_146aeba68;
      puVar2 = (undefined8 *)FName::FName(local_res10,L"cheat_command",1);
      FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar2,0);
      uVar1 = DAT_146aeba68;
      _DAT_146aeba70 = local_res8;
      puVar2 = (undefined8 *)FName::FName(local_res10,L"cheat_command_state",1);
      FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar2,0);
      _DAT_146aeba78 = local_res8;
      _Init_thread_footer(&DAT_146aeba80);
      return &DAT_146aeba68;
    }
  }
  return &DAT_146aeba68;
}



// FUNCTION 14218c6a0 FUN_14218c6a0 body=497 status=ok
// SIG undefined FUN_14218c6a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14218c6a0(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  longlong local_38 [6];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aeba60) {
    _Init_thread_header(&DAT_146aeba60);
    if (DAT_146aeba60 == -1) {
      local_38[1] = 0x10;
      local_38[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
      FGenericPlatformString::Memcpy(local_38[0],L"console_command",0x20);
      local_38[2] = 0;
      local_38[3] = 0xd;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38 + 2,0);
      FGenericPlatformString::Memcpy(local_38[2],L"gbxtelemetry",0x1a);
      local_38[4] = 0;
      local_38[5] = 0;
      puVar2 = (undefined8 *)FName::FName(&local_res8,L"ConsoleCommand",1);
      puVar2 = (undefined8 *)FUN_14218c0c0(local_res10,*puVar2,local_38,1);
      DAT_146aeba48 = *puVar2;
      if (local_38[4] != 0) {
        FMemory::Free();
      }
      if (local_38[2] != 0) {
        FMemory::Free();
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      FUN_14217bd20(&DAT_146aeba50);
      FUN_14217bd20(&DAT_146aeba58);
      uVar1 = DAT_146aeba48;
      puVar2 = (undefined8 *)FName::FName(local_res10,L"console_command",1);
      FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar2,0);
      uVar1 = DAT_146aeba48;
      _DAT_146aeba50 = local_res8;
      puVar2 = (undefined8 *)FName::FName(local_res10,L"console_command_args",1);
      FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar2,0);
      _DAT_146aeba58 = local_res8;
      _Init_thread_footer(&DAT_146aeba60);
      return &DAT_146aeba48;
    }
  }
  return &DAT_146aeba48;
}



// FUNCTION 14218c8a0 FUN_14218c8a0 body=318 status=ok
// SIG undefined FUN_14218c8a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14218c8a0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [8];
  undefined1 local_res10 [24];
  longlong local_38 [6];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aebb00) {
    _Init_thread_header(&DAT_146aebb00);
    if (DAT_146aebb00 == -1) {
      local_38[1] = 0xd;
      local_38[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
      FGenericPlatformString::Memcpy(local_38[0],L"damage_state",0x1a);
      local_38[2] = 0;
      local_38[3] = 0xd;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38 + 2,0);
      FGenericPlatformString::Memcpy(local_38[2],L"gbxtelemetry",0x1a);
      local_38[4] = 0;
      local_38[5] = 0;
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DamageState",1);
      puVar1 = (undefined8 *)FUN_14218c0c0(local_res10,*puVar1,local_38,1);
      _DAT_146aebaf8 = *puVar1;
      if (local_38[4] != 0) {
        FMemory::Free();
      }
      if (local_38[2] != 0) {
        FMemory::Free();
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      _Init_thread_footer(&DAT_146aebb00);
      return &DAT_146aebaf8;
    }
  }
  return &DAT_146aebaf8;
}



// FUNCTION 14218c9e0 FUN_14218c9e0 body=576 status=ok
// SIG undefined FUN_14218c9e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14218c9e0(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  longlong local_38 [6];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aeba40) {
    _Init_thread_header(&DAT_146aeba40);
    if (DAT_146aeba40 == -1) {
      local_38[1] = 6;
      local_38[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
      FGenericPlatformString::Memcpy(local_38[0],L"Debug",0xc);
      local_38[2] = 0;
      local_38[3] = 0xd;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38 + 2,0);
      FGenericPlatformString::Memcpy(local_38[2],L"gbxtelemetry",0x1a);
      local_38[4] = 0;
      local_38[5] = 0;
      puVar2 = (undefined8 *)FName::FName(&local_res8,L"Debug",1);
      puVar2 = (undefined8 *)FUN_14218c0c0(local_res10,*puVar2,local_38,1);
      DAT_146aeba20 = *puVar2;
      if (local_38[4] != 0) {
        FMemory::Free();
      }
      if (local_38[2] != 0) {
        FMemory::Free();
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      FUN_14217bd20(&DAT_146aeba28);
      FUN_14217bd20(&DAT_146aeba30);
      FUN_14217bd20(&DAT_146aeba38);
      uVar1 = DAT_146aeba20;
      puVar2 = (undefined8 *)FName::FName(local_res10,L"debug_command",1);
      FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar2,0);
      uVar1 = DAT_146aeba20;
      _DAT_146aeba28 = local_res8;
      puVar2 = (undefined8 *)FName::FName(local_res10,L"debug_arg0",1);
      FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar2,0);
      uVar1 = DAT_146aeba20;
      _DAT_146aeba30 = local_res8;
      puVar2 = (undefined8 *)FName::FName(local_res10,L"debug_arg1",1);
      FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar2,0);
      _DAT_146aeba38 = local_res8;
      _Init_thread_footer(&DAT_146aeba40);
      return &DAT_146aeba20;
    }
  }
  return &DAT_146aeba20;
}



// FUNCTION 14218cc20 FUN_14218cc20 body=111 status=ok
// SIG undefined FUN_14218cc20(void)

undefined * FUN_14218cc20(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aed1f8) {
    _Init_thread_header(&DAT_146aed1f8);
    if (DAT_146aed1f8 == -1) {
      FUN_14217ca10(&DAT_146aed190);
      _Init_thread_footer(&DAT_146aed1f8);
      return &DAT_146aed190;
    }
  }
  return &DAT_146aed190;
}



// FUNCTION 14218cc90 FUN_14218cc90 body=318 status=ok
// SIG undefined FUN_14218cc90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14218cc90(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [8];
  undefined1 local_res10 [24];
  longlong local_38 [6];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aebaf0) {
    _Init_thread_header(&DAT_146aebaf0);
    if (DAT_146aebaf0 == -1) {
      local_38[1] = 0x14;
      local_38[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
      FGenericPlatformString::Memcpy(local_38[0],L"game_instance_state",0x28);
      local_38[2] = 0;
      local_38[3] = 0xd;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38 + 2,0);
      FGenericPlatformString::Memcpy(local_38[2],L"gbxtelemetry",0x1a);
      local_38[4] = 0;
      local_38[5] = 0;
      puVar1 = (undefined8 *)FName::FName(local_res8,L"GameInstanceState",1);
      puVar1 = (undefined8 *)FUN_14218c0c0(local_res10,*puVar1,local_38,1);
      _DAT_146aebae8 = *puVar1;
      if (local_38[4] != 0) {
        FMemory::Free();
      }
      if (local_38[2] != 0) {
        FMemory::Free();
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      _Init_thread_footer(&DAT_146aebaf0);
      return &DAT_146aebae8;
    }
  }
  return &DAT_146aebae8;
}



// FUNCTION 14218cdd0 FUN_14218cdd0 body=111 status=ok
// SIG undefined FUN_14218cdd0(void)

undefined * FUN_14218cdd0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aed298) {
    _Init_thread_header(&DAT_146aed298);
    if (DAT_146aed298 == -1) {
      FUN_14217cf40(&DAT_146aed200);
      _Init_thread_footer(&DAT_146aed298);
      return &DAT_146aed200;
    }
  }
  return &DAT_146aed200;
}



// FUNCTION 14218ce40 FUN_14218ce40 body=111 status=ok
// SIG undefined FUN_14218ce40(void)

undefined * FUN_14218ce40(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aeba08) {
    _Init_thread_header(&DAT_146aeba08);
    if (DAT_146aeba08 == -1) {
      FUN_14217d520(&DAT_146aeb9a0);
      _Init_thread_footer(&DAT_146aeba08);
      return &DAT_146aeb9a0;
    }
  }
  return &DAT_146aeb9a0;
}



// FUNCTION 14218ceb0 FUN_14218ceb0 body=318 status=ok
// SIG undefined FUN_14218ceb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14218ceb0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [8];
  undefined1 local_res10 [24];
  longlong local_38 [6];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aeba18) {
    _Init_thread_header(&DAT_146aeba18);
    if (DAT_146aeba18 == -1) {
      local_38[1] = 4;
      local_38[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
      FGenericPlatformString::Memcpy(local_38[0],&DAT_144fdaf30,8);
      local_38[2] = 0;
      local_38[3] = 6;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38 + 2,0);
      FGenericPlatformString::Memcpy(local_38[2],L"Debug",0xc);
      local_38[4] = 0;
      local_38[5] = 0;
      puVar1 = (undefined8 *)FName::FName(local_res8,&DAT_144fdaf48,1);
      puVar1 = (undefined8 *)FUN_14218c0c0(local_res10,*puVar1,local_38,1);
      _DAT_146aeba10 = *puVar1;
      if (local_38[4] != 0) {
        FMemory::Free();
      }
      if (local_38[2] != 0) {
        FMemory::Free();
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      _Init_thread_footer(&DAT_146aeba18);
      return &DAT_146aeba10;
    }
  }
  return &DAT_146aeba10;
}



// FUNCTION 14218cff0 FUN_14218cff0 body=234 status=ok
// SIG undefined FUN_14218cff0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14218cff0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [8];
  undefined1 local_res10 [24];
  longlong local_38 [7];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aeb998) {
    _Init_thread_header(&DAT_146aeb998);
    if (DAT_146aeb998 == -1) {
      local_38[0] = 0;
      local_38[1] = 0;
      local_38[2] = 0;
      local_38[3] = 0;
      local_38[4] = 0;
      local_38[5] = 0;
      puVar1 = (undefined8 *)FName::FName(local_res8,L"None",1);
      puVar1 = (undefined8 *)FUN_14218c0c0(local_res10,*puVar1,local_38,1);
      _DAT_146aeb990 = *puVar1;
      if (local_38[4] != 0) {
        FMemory::Free();
      }
      if (local_38[2] != 0) {
        FMemory::Free();
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      _Init_thread_footer(&DAT_146aeb998);
      return &DAT_146aeb990;
    }
  }
  return &DAT_146aeb990;
}



// FUNCTION 14218d0e0 FUN_14218d0e0 body=576 status=ok
// SIG undefined FUN_14218d0e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14218d0e0(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  longlong local_38 [6];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aebae0) {
    _Init_thread_header(&DAT_146aebae0);
    if (DAT_146aebae0 == -1) {
      local_38[1] = 0xb;
      local_38[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
      FGenericPlatformString::Memcpy(local_38[0],L"unit_state",0x16);
      local_38[2] = 0;
      local_38[3] = 0xd;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38 + 2,0);
      FGenericPlatformString::Memcpy(local_38[2],L"gbxtelemetry",0x1a);
      local_38[4] = 0;
      local_38[5] = 0;
      puVar2 = (undefined8 *)FName::FName(&local_res8,L"PlayerState",1);
      puVar2 = (undefined8 *)FUN_14218c0c0(local_res10,*puVar2,local_38,1);
      DAT_146aebac0 = *puVar2;
      if (local_38[4] != 0) {
        FMemory::Free();
      }
      if (local_38[2] != 0) {
        FMemory::Free();
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      FUN_14217bd20(&DAT_146aebac8);
      FUN_14217bd20(&DAT_146aebad0);
      FUN_14217bd20(&DAT_146aebad8);
      uVar1 = DAT_146aebac0;
      puVar2 = (undefined8 *)FName::FName(local_res10,L"player_id",1);
      FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar2,0);
      uVar1 = DAT_146aebac0;
      _DAT_146aebac8 = local_res8;
      puVar2 = (undefined8 *)FName::FName(local_res10,L"player_is_local",1);
      FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar2,0);
      uVar1 = DAT_146aebac0;
      _DAT_146aebad0 = local_res8;
      puVar2 = (undefined8 *)FName::FName(local_res10,L"player_character_guid",1);
      FUN_14218da20(uVar1,&local_res8,DAT_146aeae90,*puVar2,0);
      _DAT_146aebad8 = local_res8;
      _Init_thread_footer(&DAT_146aebae0);
      return &DAT_146aebac0;
    }
  }
  return &DAT_146aebac0;
}



// FUNCTION 14218d320 FUN_14218d320 body=111 status=ok
// SIG undefined FUN_14218d320(void)

undefined * FUN_14218d320(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aebab8) {
    _Init_thread_header(&DAT_146aebab8);
    if (DAT_146aebab8 == -1) {
      FUN_14217daf0(&DAT_146aeba88);
      _Init_thread_footer(&DAT_146aebab8);
      return &DAT_146aeba88;
    }
  }
  return &DAT_146aeba88;
}



// FUNCTION 14218d390 FUN_14218d390 body=167 status=ok
// SIG undefined FUN_14218d390(void)

longlong * FUN_14218d390(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (((param_2 == DAT_146aeb088) || (param_2 == DAT_146aeb080)) || (param_2 == DAT_146aeb090)) {
    plVar4 = (longlong *)*param_1;
    plVar1 = plVar4 + (longlong)(int)param_1[1] * 3;
    for (; plVar4 != plVar1; plVar4 = plVar4 + 3) {
      if (*plVar4 == param_2) goto LAB_14218d3e0;
    }
  }
  plVar4 = (longlong *)0x0;
LAB_14218d3e0:
  if (plVar4 == (longlong *)0x0) {
    iVar2 = (int)param_1[1];
    lVar5 = (longlong)iVar2;
    *(int *)(param_1 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar2);
    }
    lVar3 = *param_1;
    *(longlong *)(lVar3 + lVar5 * 0x18) = param_2;
    *(undefined8 *)(lVar3 + 8 + lVar5 * 0x18) = 0;
    *(undefined8 *)(lVar3 + 0x10 + lVar5 * 0x18) = 0;
    plVar4 = (longlong *)(*param_1 + lVar5 * 0x18);
  }
  return plVar4;
}



// FUNCTION 14218d440 FUN_14218d440 body=206 status=ok
// SIG undefined FUN_14218d440(void)

longlong * FUN_14218d440(longlong param_1,longlong *param_2,longlong param_3)

{
  short *psVar1;
  short sVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    uVar3 = 0xffffffffffffffff;
    do {
      uVar3 = uVar3 + 1;
    } while (*(short *)(param_3 + uVar3 * 2) != 0);
    lVar4 = FUN_142193b00(param_1,uVar3 & 0xffffffff);
    lVar5 = lVar4 + -2;
    do {
      psVar1 = (short *)(lVar5 + 2);
      lVar5 = lVar5 + 2;
    } while (*psVar1 != 0);
    lVar6 = 0;
    do {
      sVar2 = *(short *)(param_3 + lVar6 * 2);
      *(short *)(lVar5 + lVar6 * 2) = sVar2;
      lVar6 = lVar6 + 1;
    } while (sVar2 != 0);
    lVar5 = *(longlong *)(param_1 + 0x10);
    if (lVar5 != 0) {
      lVar4 = lVar4 + -2;
      do {
        psVar1 = (short *)(lVar4 + 2);
        lVar4 = lVar4 + 2;
      } while (*psVar1 != 0);
      lVar6 = 0;
      do {
        sVar2 = *(short *)(lVar5 + lVar6 * 2);
        *(short *)(lVar4 + lVar6 * 2) = sVar2;
        lVar6 = lVar6 + 1;
      } while (sVar2 != 0);
    }
    *param_2 = param_1;
    return param_2;
  }
  *param_2 = param_1;
  return param_2;
}



// FUNCTION 14218d510 FUN_14218d510 body=422 status=ok
// SIG undefined FUN_14218d510(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14218d510(void)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint *puVar7;
  int iVar8;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined1 local_res18 [16];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aeceb0) {
    _Init_thread_header(&DAT_146aeceb0);
    if (DAT_146aeceb0 == -1) {
      lVar3 = FUN_14218c420();
      plVar1 = (longlong *)(lVar3 + 0x18);
      local_res10 = DAT_146aeb028;
      puVar4 = (undefined8 *)FUN_14217e4b0(local_res18,L"sample_rate");
      local_res8 = *puVar4;
      puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x18))(plVar1,&local_res8);
      if (puVar5 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)operator_new(0x18);
        if (puVar5 == (undefined8 *)0x0) {
          puVar5 = (undefined8 *)0x0;
        }
        else {
          uVar6 = *puVar4;
          *puVar5 = &PTR_FUN_144fdca70;
          puVar5[1] = uVar6;
          *(undefined4 *)(puVar5 + 2) = 0;
          *(undefined1 *)((longlong)puVar5 + 0x14) = 1;
        }
        (**(code **)(*plVar1 + 0x20))(plVar1,puVar5);
        FUN_142186e60(plVar1,puVar5);
      }
      _DAT_146aebb10 = puVar5;
      uVar6 = FUN_14217e4b0(&local_res8,L"sample_rate_latch");
      _DAT_146aebb18 = FUN_142178a90(uVar6,plVar1,&local_res10);
      DAT_146aebb21 = 0;
      uVar2 = std::_guard_xfg_dispatch_icall_nop();
      puVar7 = &DAT_146aebb30;
      iVar8 = 1;
      _DAT_146aeceac = 0xffffffff;
      _DAT_146aebb2c = uVar2;
      do {
        uVar2 = (uVar2 >> 0x1e ^ uVar2) * 0x6c078965 + iVar8;
        iVar8 = iVar8 + 1;
        *puVar7 = uVar2;
        puVar7 = puVar7 + 1;
      } while ((longlong)puVar7 < 0x146aec4ec);
      _DAT_146aebb28 = 0x270;
      atexit((_func_5014 *)&LAB_143ea73b0);
      _Init_thread_footer(&DAT_146aeceb0);
      return &DAT_146aebb10;
    }
  }
  return &DAT_146aebb10;
}



// FUNCTION 14218d6d0 FUN_14218d6d0 body=745 status=ok
// SIG undefined FUN_14218d6d0(void)

int * FUN_14218d6d0(int *param_1,longlong param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  longlong lVar2;
  char cVar3;
  BOOL BVar4;
  longlong lVar5;
  longlong *plVar6;
  int *piVar7;
  longlong *plVar8;
  longlong *plVar9;
  int local_res8 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int local_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int local_34;
  
  plVar9 = (longlong *)0x0;
  *param_1 = -1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if (param_2 == 0) {
    *param_1 = 0;
    return param_1;
  }
  lVar5 = FUN_14218e4d0();
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar5 + 0x58);
  BVar4 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar4 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (param_2 != *(longlong *)(lVar5 + 0x80)) {
    *(longlong *)(lVar5 + 0x80) = param_2;
    TSet<TTuple<UObject_*,FTraceRouteRecord>,TDefaultMapHashableKeyFuncs<UObject_*,FTraceRouteRecord,0>,FDefaultSetAllocator>
    ::FindId(lVar5 + 8,local_res8,param_2);
    plVar8 = plVar9;
    if (local_res8[0] != -1) {
      plVar8 = (longlong *)(*(longlong *)(lVar5 + 8) + (longlong)local_res8[0] * 0x28);
    }
    plVar6 = plVar8 + 1;
    if (plVar8 == (longlong *)0x0) {
      plVar6 = plVar9;
    }
    if (plVar6 == (longlong *)0x0) {
      local_58 = 0xffffffff;
      iStack_54 = 0;
      iStack_50 = 0;
      iStack_4c = 0;
      *(undefined8 *)(lVar5 + 0x88) = 0xffffffff;
      *(undefined8 *)(lVar5 + 0x90) = 0;
      *(undefined4 *)(lVar5 + 0x98) = 0;
    }
    else {
      lVar2 = plVar6[1];
      *(longlong *)(lVar5 + 0x88) = *plVar6;
      *(longlong *)(lVar5 + 0x90) = lVar2;
      *(int *)(lVar5 + 0x98) = (int)plVar6[2];
    }
  }
  local_68 = *(longlong **)(lVar5 + 0x88);
  uStack_60 = *(int **)(lVar5 + 0x90);
  iVar1 = *(int *)(lVar5 + 0x98);
  LeaveCriticalSection(lpCriticalSection);
  *param_1 = (int)local_68;
  param_1[1] = local_68._4_4_;
  param_1[2] = (int)uStack_60;
  param_1[3] = uStack_60._4_4_;
  param_1[4] = iVar1;
  if (*param_1 == -1) {
    local_58 = -1;
    iStack_54 = 0;
    iStack_50 = 0;
    iStack_4c = 0;
    iStack_48 = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146aed0b8) &&
       (_Init_thread_header(&DAT_146aed0b8), DAT_146aed0b8 == -1)) {
      DAT_146aed0a8 = (longlong *)0x0;
      DAT_146aed0b0 = 0;
      atexit(FUN_143ea75c0);
      _Init_thread_footer(&DAT_146aed0b8);
    }
    if (((DAT_146aed0b0 != 0) && (DAT_146aed0a8 != (longlong *)0x0)) &&
       (cVar3 = (**(code **)(*DAT_146aed0a8 + 0x18))(), cVar3 != '\0')) {
      if (DAT_146aed0b0 != 0) {
        plVar9 = DAT_146aed0a8;
      }
      (**(code **)(*plVar9 + 0x38))(plVar9,&local_44,param_2);
      iStack_48 = local_34;
      local_58 = local_44;
      iStack_54 = iStack_40;
      iStack_50 = iStack_3c;
      iStack_4c = iStack_38;
    }
    if (local_58 == -1) {
      piVar7 = (int *)FGuid::NewGuid(&local_68);
      iStack_54 = *piVar7;
      iStack_50 = piVar7[1];
      iStack_4c = piVar7[2];
      iStack_48 = piVar7[3];
      if (((piVar7[3] == 0 && piVar7[2] == 0) && piVar7[1] == 0) && *piVar7 == 0) {
        local_58 = -1;
      }
      else {
        local_58 = FCrc::MemCrc_DEPRECATED(&iStack_54,0x10);
      }
    }
    *param_1 = local_58;
    param_1[1] = iStack_54;
    param_1[2] = iStack_50;
    param_1[3] = iStack_4c;
    param_1[4] = iStack_48;
    if (*param_1 != -1) {
      lVar5 = FUN_14218e4d0();
      BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x58));
      if (BVar4 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x58));
      }
      *(longlong *)(lVar5 + 0x80) = param_2;
      *(int *)(lVar5 + 0x88) = local_58;
      *(int *)(lVar5 + 0x8c) = iStack_54;
      *(int *)(lVar5 + 0x90) = iStack_50;
      *(int *)(lVar5 + 0x94) = iStack_4c;
      *(int *)(lVar5 + 0x98) = iStack_48;
      if (local_58 == -1) {
        FUN_1421934d0(lVar5,param_2);
      }
      else {
        if (*(int *)(lVar5 + 0x10) == *(int *)(lVar5 + 0x3c)) {
          FUObjectArray::AddUObjectDeleteListener(&DAT_1469e91a0,lVar5);
        }
        local_68 = (longlong *)(lVar5 + 0x80);
        uStack_60 = (int *)(lVar5 + 0x88);
        FUN_140a9d5d0(lVar5 + 8,local_res8,&local_68,0);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x58));
    }
  }
  return param_1;
}



// FUNCTION 14218d9c0 FUN_14218d9c0 body=89 status=ok
// SIG undefined FUN_14218d9c0(void)

undefined8 FUN_14218d9c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puVar2 = (undefined8 *)FName::FName(local_res8,param_3,1);
  FUN_14218da20(uVar1,param_2,DAT_146aeae98,*puVar2,param_3);
  return param_2;
}



// FUNCTION 14218da20 FUN_14218da20 body=185 status=ok
// SIG undefined FUN_14218da20(void)

undefined8 *
FUN_14218da20(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *local_res8;
  
  local_res8 = (longlong *)0x0;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    FUN_14217bd20(param_2);
  }
  else {
    local_res8 = (longlong *)0x0;
    if (*(longlong *)(param_1 + 0x28) != 0) {
      plVar2 = (longlong *)FUN_14218dae0(param_1,param_3);
      puVar3 = (undefined8 *)*plVar2;
      puVar1 = puVar3 + (int)plVar2[1];
      for (; puVar3 != puVar1; puVar3 = puVar3 + 1) {
        plVar2 = (longlong *)*puVar3;
        if (*(longlong *)*puVar3 == param_4) goto LAB_14218daa0;
      }
    }
    FUN_14217bd20(&local_res8);
    plVar2 = local_res8;
LAB_14218daa0:
    local_res8 = (longlong *)0x0;
    if (*plVar2 == 0) {
      plVar2 = (longlong *)FUN_142190d60(param_1,param_3,param_4,param_5);
    }
    *param_2 = plVar2;
  }
  return param_2;
}



// FUNCTION 14218dae0 FUN_14218dae0 body=155 status=ok
// SIG undefined FUN_14218dae0(void)

longlong * FUN_14218dae0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  
  plVar1 = (longlong *)(param_1 + 0xb0);
  plVar6 = (longlong *)*plVar1;
  iVar4 = *(int *)(param_1 + 0xb8);
  lVar3 = (longlong)iVar4 * 0x18;
  plVar2 = plVar6 + (longlong)iVar4 * 3;
  while( true ) {
    if (plVar6 == plVar2) {
      *(int *)(param_1 + 0xb8) = iVar4 + 1;
      if (*(int *)(param_1 + 0xbc) < iVar4 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(plVar1,iVar4);
      }
      lVar5 = *plVar1;
      *(longlong *)(lVar3 + lVar5) = param_2;
      *(undefined8 *)(lVar3 + 8 + lVar5) = 0;
      *(undefined8 *)(lVar3 + 0x10 + lVar5) = 0;
      return (longlong *)(*plVar1 + 8 + lVar3);
    }
    if (*plVar6 == param_2) break;
    plVar6 = plVar6 + 3;
  }
  return plVar6 + 1;
}


