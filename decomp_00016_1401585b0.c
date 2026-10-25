// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1401585b0 FUN_1401585b0 body=59 status=ok
// SIG undefined FUN_1401585b0(void)

void FUN_1401585b0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462978f0,0);
  FGenericPlatformString::Memcpy(DAT_1462978f0,L"ShieldJsonData",0x1e);
  atexit((_func_5014 *)&LAB_143e4c810);
  return;
}



// FUNCTION 1401585f0 `dynamic_initializer_for_'StatusStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'StatusStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__StatusStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146297870,0);
  FGenericPlatformString::Memcpy(DAT_146297870,L"ShieldSerialNumber",0x26);
  atexit((_func_5014 *)&LAB_143e4c830);
  return;
}



// FUNCTION 140158650 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146297940,0);
  FGenericPlatformString::Memcpy(DAT_146297940,L"SkinCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e4c850);
  return;
}



// FUNCTION 140158690 FUN_140158690 body=59 status=ok
// SIG undefined FUN_140158690(void)

void FUN_140158690(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462979e0,0);
  FGenericPlatformString::Memcpy(DAT_1462979e0,L"SlaughterChallengesCompletion",0x3c);
  atexit((_func_5014 *)&LAB_143e4c870);
  return;
}



// FUNCTION 1401586f0 FUN_1401586f0 body=266 status=ok
// SIG undefined FUN_1401586f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401586f0(void)

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
    *plVar1 = (longlong)&PTR_GetPoolName_143fca720;
    plVar1[1] = (longlong)AK::MemoryMgr::StartProfileThreadUsage;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143fca768;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146869fd0 =
       (**(code **)(*DAT_1468b1f88 + 0x50))
                 (DAT_1468b1f88,L"SpawnInventory",L"SpawnInventory",&local_18,0x10001);
  _DAT_146869fc8 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_1401587e9;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_1401587e9:
  atexit(FUN_143e4c890);
  return;
}



// FUNCTION 140158800 FUN_140158800 body=266 status=ok
// SIG undefined FUN_140158800(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140158800(void)

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
    *plVar1 = (longlong)&PTR_GetPoolName_143fca720;
    plVar1[1] = (longlong)FUN_140b882a0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143fca768;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146869fc0 =
       (**(code **)(*DAT_1468b1f88 + 0x50))
                 (DAT_1468b1f88,L"SpawnTextChat",L"SpawnTextChat",&local_18,0x10001);
  _DAT_146869fb8 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_1401588f9;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_1401588f9:
  atexit(FUN_143e4c8e0);
  return;
}



// FUNCTION 140158990 FUN_140158990 body=59 status=ok
// SIG undefined FUN_140158990(void)

void FUN_140158990(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146297ca0,0);
  FGenericPlatformString::Memcpy(DAT_146297ca0,L"StatHash",0x12);
  atexit((_func_5014 *)&LAB_143e4c930);
  return;
}



// FUNCTION 1401589d0 FUN_1401589d0 body=59 status=ok
// SIG undefined FUN_1401589d0(void)

void FUN_1401589d0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146297d30,0);
  FGenericPlatformString::Memcpy(DAT_146297d30,L"SurvivorStatGroupPoints",0x30);
  atexit((_func_5014 *)&LAB_143e4c950);
  return;
}



// FUNCTION 140158a10 FUN_140158a10 body=266 status=ok
// SIG undefined FUN_140158a10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140158a10(void)

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
    *plVar1 = (longlong)&PTR_GetPoolName_143fca720;
    plVar1[1] = (longlong)AK::MemoryMgr::StartProfileThreadUsage;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143fca768;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_14686a000 =
       (**(code **)(*DAT_1468b1f88 + 0x50))
                 (DAT_1468b1f88,L"ThawHim",L"Thaws the target.",&local_18,0x10001);
  _DAT_146869ff8 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_140158b09;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_140158b09:
  atexit(FUN_143e4c970);
  return;
}



// FUNCTION 140158b30 FUN_140158b30 body=59 status=ok
// SIG undefined FUN_140158b30(void)

void FUN_140158b30(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146297810,0);
  FGenericPlatformString::Memcpy(DAT_146297810,L"TimePlayed",0x16);
  atexit((_func_5014 *)&LAB_143e4c9c0);
  return;
}



// FUNCTION 140158b90 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146297b00,0);
  FGenericPlatformString::Memcpy(DAT_146297b00,L"UnexpectedControlMessage",0x32);
  atexit((_func_5014 *)&LAB_143e4c9e0);
  return;
}



// FUNCTION 140158bd0 FUN_140158bd0 body=59 status=ok
// SIG undefined FUN_140158bd0(void)

void FUN_140158bd0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146297c40,0);
  FGenericPlatformString::Memcpy(DAT_146297c40,L"UniqueNetId",0x18);
  atexit((_func_5014 *)&LAB_143e4ca00);
  return;
}



// FUNCTION 140158c90 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146297698,0);
  FGenericPlatformString::Memcpy(DAT_146297698,&DAT_1442e0e38,8);
  atexit((_func_5014 *)&LAB_143e4ca20);
  return;
}



// FUNCTION 140158cd0 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462978a0,0);
  FGenericPlatformString::Memcpy(DAT_1462978a0,L"Weapon1JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e4ca40);
  return;
}



// FUNCTION 140158d10 FUN_140158d10 body=59 status=ok
// SIG undefined FUN_140158d10(void)

void FUN_140158d10(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146297820,0);
  FGenericPlatformString::Memcpy(DAT_146297820,L"Weapon1SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e4ca60);
  return;
}



// FUNCTION 140158d50 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462978b0,0);
  FGenericPlatformString::Memcpy(DAT_1462978b0,L"Weapon2JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e4ca80);
  return;
}



// FUNCTION 140158d90 FUN_140158d90 body=59 status=ok
// SIG undefined FUN_140158d90(void)

void FUN_140158d90(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146297830,0);
  FGenericPlatformString::Memcpy(DAT_146297830,L"Weapon2SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e4caa0);
  return;
}



// FUNCTION 140158dd0 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462978c0,0);
  FGenericPlatformString::Memcpy(DAT_1462978c0,L"Weapon3JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e4cac0);
  return;
}



// FUNCTION 140158e10 FUN_140158e10 body=59 status=ok
// SIG undefined FUN_140158e10(void)

void FUN_140158e10(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146297840,0);
  FGenericPlatformString::Memcpy(DAT_146297840,L"Weapon3SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e4cae0);
  return;
}



// FUNCTION 140158e50 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462978d0,0);
  FGenericPlatformString::Memcpy(DAT_1462978d0,L"Weapon4JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e4cb00);
  return;
}



// FUNCTION 140158e90 FUN_140158e90 body=59 status=ok
// SIG undefined FUN_140158e90(void)

void FUN_140158e90(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146297850,0);
  FGenericPlatformString::Memcpy(DAT_146297850,L"Weapon4SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e4cb20);
  return;
}



// FUNCTION 140158ed0 FUN_140158ed0 body=59 status=ok
// SIG undefined FUN_140158ed0(void)

void FUN_140158ed0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146297990,0);
  FGenericPlatformString::Memcpy(DAT_146297990,L"WeaponChallengesCompletion",0x36);
  atexit((_func_5014 *)&LAB_143e4cb40);
  return;
}



// FUNCTION 140158ff0 EOL_String'' body=115 status=ok
// SIG undefined EOL_String''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FDlgConfigWriter::EOL_String__(void)

{
  undefined *puVar1;
  int iVar2;
  longlong lVar3;
  
  puVar1 = PTR_DAT_146297670;
  if ((PTR_DAT_146297670 != (undefined *)0x0) && (*(short *)PTR_DAT_146297670 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(short *)(PTR_DAT_146297670 + lVar3 * 2) != 0);
    iVar2 = (int)lVar3 + 1;
    _DAT_146869d58 = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146869d50,0);
    }
    FGenericPlatformString::Memcpy(DAT_146869d50,puVar1,(longlong)iVar2 * 2);
  }
  atexit((_func_5014 *)&LAB_143e4cb60);
  return;
}



// FUNCTION 140159190 FUN_140159190 body=59 status=ok
// SIG undefined FUN_140159190(void)

void FUN_140159190(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462981c0,0);
  FGenericPlatformString::Memcpy(DAT_1462981c0,L"AbilityData",0x18);
  atexit((_func_5014 *)&LAB_143e4cb80);
  return;
}



// FUNCTION 1401591d0 FUN_1401591d0 body=59 status=ok
// SIG undefined FUN_1401591d0(void)

void FUN_1401591d0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462984c0,0);
  FGenericPlatformString::Memcpy(DAT_1462984c0,L"AchievementId",0x1c);
  atexit((_func_5014 *)&LAB_143e4cba0);
  return;
}



// FUNCTION 140159210 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462984d0,0);
  FGenericPlatformString::Memcpy(DAT_1462984d0,L"AchievementType",0x20);
  atexit((_func_5014 *)&LAB_143e4cbc0);
  return;
}



// FUNCTION 140159250 FUN_140159250 body=59 status=ok
// SIG undefined FUN_140159250(void)

void FUN_140159250(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298390,0);
  FGenericPlatformString::Memcpy(DAT_146298390,L"ActivityName",0x1a);
  atexit((_func_5014 *)&LAB_143e4cbe0);
  return;
}



// FUNCTION 140159330 FUN_140159330 body=59 status=ok
// SIG undefined FUN_140159330(void)

void FUN_140159330(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298170,0);
  FGenericPlatformString::Memcpy(DAT_146298170,L"ArtifactJsonData",0x22);
  atexit((_func_5014 *)&LAB_143e4cc00);
  return;
}



// FUNCTION 140159370 FUN_140159370 body=59 status=ok
// SIG undefined FUN_140159370(void)

void FUN_140159370(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462980f0,0);
  FGenericPlatformString::Memcpy(DAT_1462980f0,L"ArtifactSerialNumber",0x2a);
  atexit((_func_5014 *)&LAB_143e4cc20);
  return;
}



// FUNCTION 1401593b0 `dynamic_initializer_for_'AwayText'' body=53 status=ok
// SIG undefined `dynamic_initializer_for_'AwayText''(void)

void EOnlinePresenceState::_dynamic_initializer_for__AwayText__(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_14686a500,L"Away",L"OnlinePresence",L"Away");
  atexit(FUN_143e4cc40);
  return;
}



// FUNCTION 1401593f0 FUN_1401593f0 body=53 status=ok
// SIG undefined FUN_1401593f0(void)

void FUN_1401593f0(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_14686a4b8,L"Please wait...",L"UIManager",L"BlockingSubtitle");
  atexit(FUN_143e4cc90);
  return;
}



// FUNCTION 140159430 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298190,0);
  FGenericPlatformString::Memcpy(DAT_146298190,L"BodyCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e4cce0);
  return;
}



// FUNCTION 140159470 FUN_140159470 body=266 status=ok
// SIG undefined FUN_140159470(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140159470(void)

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
    *plVar1 = (longlong)&PTR_GetPoolName_143fca720;
    plVar1[1] = (longlong)FUN_140baace0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143fca768;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_14686a608 =
       (**(code **)(*DAT_1468b1f88 + 0x70))
                 (DAT_1468b1f88,L"Character.StreamPlayerCharacters",
                  L"If true Player Characters will be streamed in and out based on if they are being used."
                  ,&local_18,0);
  _DAT_14686a600 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_140159569;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_140159569:
  atexit(FUN_143e4cd00);
  return;
}



// FUNCTION 140159580 FUN_140159580 body=117 status=ok
// SIG undefined FUN_140159580(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140159580(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_14686a648 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"online.appresume_delay_for_refresh",0x40000000,&DAT_1442e93b4,0);
  _DAT_14686a640 = &PTR_FUN_143f3ecf8;
  DAT_14686a650 = (**(code **)(*DAT_14686a648 + 0x40))(DAT_14686a648);
  atexit(FUN_143e4cd50);
  return;
}



// FUNCTION 140159600 FUN_140159600 body=115 status=ok
// SIG undefined FUN_140159600(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140159600(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_14686a5f0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"Oak.AllowBenchmarkMapTelemetry",1,
                  L"0: Never allowed. 1: Allowed in shipping only. 2: Always allowed",0);
  _DAT_14686a5e8 = &PTR_FUN_143f3ecf8;
  DAT_14686a5f8 = (**(code **)(*DAT_14686a5f0 + 0x38))(DAT_14686a5f0);
  atexit(FUN_143e4cda0);
  return;
}



// FUNCTION 140159680 FUN_140159680 body=115 status=ok
// SIG undefined FUN_140159680(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140159680(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_14686a5c0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.PSOBootCache.Allow",1,&DAT_1442e9b4c,0);
  _DAT_14686a5b8 = &PTR_FUN_143f3ecf8;
  DAT_14686a5c8 = (**(code **)(*DAT_14686a5c0 + 0x38))(DAT_14686a5c0);
  atexit(FUN_143e4cdf0);
  return;
}



// FUNCTION 140159700 FUN_140159700 body=115 status=ok
// SIG undefined FUN_140159700(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140159700(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_14686a5d8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.PSOBootCache.InitLocation",2,&DAT_1442e9bcc,0);
  _DAT_14686a5d0 = &PTR_FUN_143f3ecf8;
  DAT_14686a5e0 = (**(code **)(*DAT_14686a5d8 + 0x38))(DAT_14686a5d8);
  atexit(FUN_143e4ce40);
  return;
}



// FUNCTION 140159780 FUN_140159780 body=112 status=ok
// SIG undefined FUN_140159780(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140159780(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_14686a668 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"ss.IgnoreDisconnectedControllers",0,&DAT_1442eba8c,1);
  _DAT_14686a660 = &PTR_FUN_143f3ecf8;
  _DAT_14686a670 = (**(code **)(*DAT_14686a668 + 0x38))(DAT_14686a668);
  atexit(FUN_143e4ce90);
  return;
}



// FUNCTION 1401597f0 FUN_1401597f0 body=59 status=ok
// SIG undefined FUN_1401597f0(void)

void FUN_1401597f0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298020,0);
  FGenericPlatformString::Memcpy(DAT_146298020,L"CanJoin",0x10);
  atexit((_func_5014 *)&LAB_143e4cee0);
  return;
}



// FUNCTION 140159870 FUN_140159870 body=59 status=ok
// SIG undefined FUN_140159870(void)

void FUN_140159870(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298430,0);
  FGenericPlatformString::Memcpy(DAT_146298430,L"ChallengeHash",0x1c);
  atexit((_func_5014 *)&LAB_143e4cf00);
  return;
}



// FUNCTION 1401598b0 FUN_1401598b0 body=59 status=ok
// SIG undefined FUN_1401598b0(void)

void FUN_1401598b0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298440,0);
  FGenericPlatformString::Memcpy(DAT_146298440,L"ChallengeName",0x1c);
  atexit((_func_5014 *)&LAB_143e4cf20);
  return;
}



// FUNCTION 1401598f0 FUN_1401598f0 body=59 status=ok
// SIG undefined FUN_1401598f0(void)

void FUN_1401598f0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298460,0);
  FGenericPlatformString::Memcpy(DAT_146298460,L"ChallengeTier",0x1c);
  atexit((_func_5014 *)&LAB_143e4cf40);
  return;
}



// FUNCTION 140159930 FUN_140159930 body=59 status=ok
// SIG undefined FUN_140159930(void)

void FUN_140159930(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462984e0,0);
  FGenericPlatformString::Memcpy(DAT_1462984e0,L"ChallengeUpdates",0x22);
  atexit((_func_5014 *)&LAB_143e4cf60);
  return;
}



// FUNCTION 140159970 FUN_140159970 body=59 status=ok
// SIG undefined FUN_140159970(void)

void FUN_140159970(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298450,0);
  FGenericPlatformString::Memcpy(DAT_146298450,L"ChallengeValue",0x1e);
  atexit((_func_5014 *)&LAB_143e4cf80);
  return;
}



// FUNCTION 1401599b0 `dynamic_initializer_for_'ChatText'' body=53 status=ok
// SIG undefined `dynamic_initializer_for_'ChatText''(void)

void EOnlinePresenceState::_dynamic_initializer_for__ChatText__(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_14686a548,L"Chat",L"OnlinePresence",L"Chat");
  atexit(FUN_143e4cfa0);
  return;
}



// FUNCTION 1401599f0 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298160,0);
  FGenericPlatformString::Memcpy(DAT_146298160,L"ClassItemJsonData",0x24);
  atexit((_func_5014 *)&LAB_143e4cff0);
  return;
}



// FUNCTION 140159a30 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462980e0,0);
  FGenericPlatformString::Memcpy(DAT_1462980e0,L"ClassItemSerialNumber",0x2c);
  atexit((_func_5014 *)&LAB_143e4d010);
  return;
}



// FUNCTION 140159ac0 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298210,0);
  FGenericPlatformString::Memcpy(DAT_146298210,L"CrewChallengesCompletion",0x32);
  atexit((_func_5014 *)&LAB_143e4d0a0);
  return;
}



// FUNCTION 140159b20 FUN_140159b20 body=59 status=ok
// SIG undefined FUN_140159b20(void)

void FUN_140159b20(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462982d0,0);
  FGenericPlatformString::Memcpy(DAT_1462982d0,L"Matinee_DNC",0x18);
  atexit((_func_5014 *)&LAB_143e4d0c0);
  return;
}



// FUNCTION 140159b80 FUN_140159b80 body=59 status=ok
// SIG undefined FUN_140159b80(void)

void FUN_140159b80(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298270,0);
  FGenericPlatformString::Memcpy(DAT_146298270,L"DateTime",0x12);
  atexit((_func_5014 *)&LAB_143e4d0e0);
  return;
}



// FUNCTION 140159be0 `dynamic_initializer_for_'DefaultAppIdKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'DefaultAppIdKey''(void)

void _dynamic_initializer_for__DefaultAppIdKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462985d0,0);
  FGenericPlatformString::Memcpy(DAT_1462985d0,L"AppId",0xc);
  atexit((_func_5014 *)&LAB_143e4d100);
  return;
}



// FUNCTION 140159c20 `dynamic_initializer_for_'DefaultPlatformKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'DefaultPlatformKey''(void)

void _dynamic_initializer_for__DefaultPlatformKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462985e0,0);
  FGenericPlatformString::Memcpy(DAT_1462985e0,L"Platform",0x12);
  atexit((_func_5014 *)&LAB_143e4d120);
  return;
}



// FUNCTION 140159c60 `dynamic_initializer_for_'DefaultPresenceKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'DefaultPresenceKey''(void)

void _dynamic_initializer_for__DefaultPresenceKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462985c0,0);
  FGenericPlatformString::Memcpy(DAT_1462985c0,L"RichPresence",0x1a);
  atexit((_func_5014 *)&LAB_143e4d140);
  return;
}



// FUNCTION 140159d80 `dynamic_initializer_for_'DoNotDisturbText'' body=53 status=ok
// SIG undefined `dynamic_initializer_for_'DoNotDisturbText''(void)

void EOnlinePresenceState::_dynamic_initializer_for__DoNotDisturbText__(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_14686a530,L"DoNotDisturb",L"OnlinePresence",L"DoNotDisturb");
  atexit(FUN_143e4d160);
  return;
}



// FUNCTION 140159de0 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146297f20,0);
  FGenericPlatformString::Memcpy(DAT_146297f20,L"DuplicateReservationFound",0x34);
  atexit((_func_5014 *)&LAB_143e4d1b0);
  return;
}



// FUNCTION 140159e20 `dynamic_initializer_for_'kResultStringCannotLoadPreset'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kResultStringCannotLoadPreset''(void)

void _dynamic_initializer_for__kResultStringCannotLoadPreset__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462981b0,0);
  FGenericPlatformString::Memcpy(DAT_1462981b0,L"EmoteCustomizationHash",0x2e);
  atexit((_func_5014 *)&LAB_143e4d1d0);
  return;
}



// FUNCTION 140159e60 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298200,0);
  FGenericPlatformString::Memcpy(DAT_146298200,L"EnemyChallengesCompletion",0x34);
  atexit((_func_5014 *)&LAB_143e4d210);
  return;
}



// FUNCTION 140159ea0 FUN_140159ea0 body=59 status=ok
// SIG undefined FUN_140159ea0(void)

void FUN_140159ea0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298360,0);
  FGenericPlatformString::Memcpy(DAT_146298360,L"EnemyName",0x14);
  atexit((_func_5014 *)&LAB_143e4d230);
  return;
}



// FUNCTION 140159ee0 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462983b0,0);
  FGenericPlatformString::Memcpy(DAT_1462983b0,L"EnemyUINameHash",0x20);
  atexit((_func_5014 *)&LAB_143e4d250);
  return;
}



// FUNCTION 140159f20 FUN_140159f20 body=59 status=ok
// SIG undefined FUN_140159f20(void)

void FUN_140159f20(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298490,0);
  FGenericPlatformString::Memcpy(DAT_146298490,L"EnforcerStatGroupPoints",0x30);
  atexit((_func_5014 *)&LAB_143e4d270);
  return;
}



// FUNCTION 140159f80 FUN_140159f80 body=59 status=ok
// SIG undefined FUN_140159f80(void)

void FUN_140159f80(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298300,0);
  FGenericPlatformString::Memcpy(DAT_146298300,L"EventDateTime",0x1c);
  atexit((_func_5014 *)&LAB_143e4d290);
  return;
}



// FUNCTION 140159fc0 FUN_140159fc0 body=59 status=ok
// SIG undefined FUN_140159fc0(void)

void FUN_140159fc0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298310,0);
  FGenericPlatformString::Memcpy(DAT_146298310,L"EventGuid",0x14);
  atexit((_func_5014 *)&LAB_143e4d2b0);
  return;
}



// FUNCTION 14015a020 `dynamic_initializer_for_'kResultStringAssetDefAlrealdyLoaded'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kResultStringAssetDefAlrealdyLoaded''(void)

void _dynamic_initializer_for__kResultStringAssetDefAlrealdyLoaded__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298220,0);
  FGenericPlatformString::Memcpy(DAT_146298220,L"ExplorationChallengesCompletion",0x40);
  atexit((_func_5014 *)&LAB_143e4d2d0);
  return;
}



// FUNCTION 14015a060 `dynamic_initializer_for_'ExtendedAwayText'' body=53 status=ok
// SIG undefined `dynamic_initializer_for_'ExtendedAwayText''(void)

void EOnlinePresenceState::_dynamic_initializer_for__ExtendedAwayText__(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_14686a518,L"ExtendedAway",L"OnlinePresence",L"ExtendedAway");
  atexit(FUN_143e4d2f0);
  return;
}



// FUNCTION 14015a120 FUN_14015a120 body=59 status=ok
// SIG undefined FUN_14015a120(void)

void FUN_14015a120(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298050,0);
  FGenericPlatformString::Memcpy(DAT_146298050,L"FriendActivityStatus",0x2a);
  atexit((_func_5014 *)&LAB_143e4d340);
  return;
}



// FUNCTION 14015a160 FUN_14015a160 body=59 status=ok
// SIG undefined FUN_14015a160(void)

void FUN_14015a160(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462982c0,0);
  FGenericPlatformString::Memcpy(DAT_1462982c0,L"ChallengeInfo",0x1c);
  atexit((_func_5014 *)&LAB_143e4d360);
  return;
}



// FUNCTION 14015a1a0 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462982b0,0);
  FGenericPlatformString::Memcpy(DAT_1462982b0,L"FriendCrewQuarterInfo",0x2c);
  atexit((_func_5014 *)&LAB_143e4d380);
  return;
}



// FUNCTION 14015a1e0 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462982f0,0);
  FGenericPlatformString::Memcpy(DAT_1462982f0,L"FriendEventType",0x20);
  atexit((_func_5014 *)&LAB_143e4d3a0);
  return;
}



// FUNCTION 14015a220 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298290,0);
  FGenericPlatformString::Memcpy(DAT_146298290,L"FriendLoadOutInfo",0x24);
  atexit((_func_5014 *)&LAB_143e4d3c0);
  return;
}



// FUNCTION 14015a260 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298280,0);
  FGenericPlatformString::Memcpy(DAT_146298280,L"FriendStatusPresenceInfo",0x32);
  atexit((_func_5014 *)&LAB_143e4d3e0);
  return;
}



// FUNCTION 14015a2a0 FUN_14015a2a0 body=59 status=ok
// SIG undefined FUN_14015a2a0(void)

void FUN_14015a2a0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462982a0,0);
  FGenericPlatformString::Memcpy(DAT_1462982a0,L"FriendSkillTreeInfo",0x28);
  atexit((_func_5014 *)&LAB_143e4d400);
  return;
}



// FUNCTION 14015a2e0 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462981d0,0);
  FGenericPlatformString::Memcpy(DAT_1462981d0,L"FriendStatusThing",0x24);
  atexit((_func_5014 *)&LAB_143e4d420);
  return;
}



// FUNCTION 14015a320 FUN_14015a320 body=59 status=ok
// SIG undefined FUN_14015a320(void)

void FUN_14015a320(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462981e0,0);
  FGenericPlatformString::Memcpy(DAT_1462981e0,L"GameCompletion",0x1e);
  atexit((_func_5014 *)&LAB_143e4d440);
  return;
}



// FUNCTION 14015a360 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298380,0);
  FGenericPlatformString::Memcpy(DAT_146298380,L"GearDisplayName",0x20);
  atexit((_func_5014 *)&LAB_143e4d460);
  return;
}



// FUNCTION 14015a3a0 FUN_14015a3a0 body=59 status=ok
// SIG undefined FUN_14015a3a0(void)

void FUN_14015a3a0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298400,0);
  FGenericPlatformString::Memcpy(DAT_146298400,L"GearJsonData",0x1a);
  atexit((_func_5014 *)&LAB_143e4d480);
  return;
}



// FUNCTION 14015a3e0 FUN_14015a3e0 body=59 status=ok
// SIG undefined FUN_14015a3e0(void)

void FUN_14015a3e0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298410,0);
  FGenericPlatformString::Memcpy(DAT_146298410,L"GearReceivedType",0x22);
  atexit((_func_5014 *)&LAB_143e4d4a0);
  return;
}



// FUNCTION 14015a420 FUN_14015a420 body=59 status=ok
// SIG undefined FUN_14015a420(void)

void FUN_14015a420(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462983f0,0);
  FGenericPlatformString::Memcpy(DAT_1462983f0,L"GearSerialNumber",0x22);
  atexit((_func_5014 *)&LAB_143e4d4c0);
  return;
}



// FUNCTION 14015a460 FUN_14015a460 body=59 status=ok
// SIG undefined FUN_14015a460(void)

void FUN_14015a460(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146297ef0,0);
  FGenericPlatformString::Memcpy(DAT_146297ef0,L"GenericFailure",0x1e);
  atexit((_func_5014 *)&LAB_143e4d4e0);
  return;
}



// FUNCTION 14015a4a0 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298140,0);
  FGenericPlatformString::Memcpy(DAT_146298140,L"GrenadeJsonData",0x20);
  atexit((_func_5014 *)&LAB_143e4d500);
  return;
}



// FUNCTION 14015a4e0 FUN_14015a4e0 body=59 status=ok
// SIG undefined FUN_14015a4e0(void)

void FUN_14015a4e0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462980c0,0);
  FGenericPlatformString::Memcpy(DAT_1462980c0,L"GrenadeSerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e4d520);
  return;
}



// FUNCTION 14015a520 FUN_14015a520 body=59 status=ok
// SIG undefined FUN_14015a520(void)

void FUN_14015a520(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298480,0);
  FGenericPlatformString::Memcpy(DAT_146298480,L"GuardianRank",0x1a);
  atexit((_func_5014 *)&LAB_143e4d540);
  return;
}



// FUNCTION 14015a560 FUN_14015a560 body=59 status=ok
// SIG undefined FUN_14015a560(void)

void FUN_14015a560(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298060,0);
  FGenericPlatformString::Memcpy(DAT_146298060,L"GuardianRank",0x1a);
  atexit((_func_5014 *)&LAB_143e4d560);
  return;
}



// FUNCTION 14015a5a0 FUN_14015a5a0 body=59 status=ok
// SIG undefined FUN_14015a5a0(void)

void FUN_14015a5a0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298040,0);
  FGenericPlatformString::Memcpy(DAT_146298040,L"HasSelectedCharacter",0x2a);
  atexit((_func_5014 *)&LAB_143e4d580);
  return;
}



// FUNCTION 14015a5e0 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298180,0);
  FGenericPlatformString::Memcpy(DAT_146298180,L"HeadCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e4d5a0);
  return;
}



// FUNCTION 14015a620 FUN_14015a620 body=59 status=ok
// SIG undefined FUN_14015a620(void)

void FUN_14015a620(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462984f0,0);
  FGenericPlatformString::Memcpy(DAT_1462984f0,L"Heroic",0xe);
  atexit((_func_5014 *)&LAB_143e4d5c0);
  return;
}



// FUNCTION 14015a6c0 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462984a0,0);
  FGenericPlatformString::Memcpy(DAT_1462984a0,L"HunterStatGroupPoints",0x2c);
  atexit((_func_5014 *)&LAB_143e4d5e0);
  return;
}



// FUNCTION 14015a730 FUN_14015a730 body=59 status=ok
// SIG undefined FUN_14015a730(void)

void FUN_14015a730(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146297f10,0);
  FGenericPlatformString::Memcpy(DAT_146297f10,L"InvalidClientBeaconType",0x30);
  atexit((_func_5014 *)&LAB_143e4d600);
  return;
}



// FUNCTION 14015a830 FUN_14015a830 body=72 status=ok
// SIG undefined FUN_14015a830(void)

void FUN_14015a830(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298590,0);
  FGenericPlatformString::Convert<char,wchar_t>(DAT_146298590,5,&DAT_1442ed654,5,0x3f);
  atexit((_func_5014 *)&LAB_143e4d620);
  return;
}



// FUNCTION 14015a8a0 FUN_14015a8a0 body=59 status=ok
// SIG undefined FUN_14015a8a0(void)

void FUN_14015a8a0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298510,0);
  FGenericPlatformString::Memcpy(DAT_146298510,L"KillCount",0x14);
  atexit((_func_5014 *)&LAB_143e4d640);
  return;
}



// FUNCTION 14015a940 FUN_14015a940 body=59 status=ok
// SIG undefined FUN_14015a940(void)

void FUN_14015a940(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298320,0);
  FGenericPlatformString::Memcpy(DAT_146298320,L"Level",0xc);
  atexit((_func_5014 *)&LAB_143e4d670);
  return;
}



// FUNCTION 14015a980 FUN_14015a980 body=59 status=ok
// SIG undefined FUN_14015a980(void)

void FUN_14015a980(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146297f90,0);
  FGenericPlatformString::Memcpy(DAT_146297f90,L"Level",0xc);
  atexit((_func_5014 *)&LAB_143e4d690);
  return;
}



// FUNCTION 14015a9c0 FUN_14015a9c0 body=59 status=ok
// SIG undefined FUN_14015a9c0(void)

void FUN_14015a9c0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298530,0);
  FGenericPlatformString::Memcpy(DAT_146298530,L"Liked",0xc);
  atexit((_func_5014 *)&LAB_143e4d6b0);
  return;
}



// FUNCTION 14015aa00 FUN_14015aa00 body=59 status=ok
// SIG undefined FUN_14015aa00(void)

void FUN_14015aa00(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298520,0);
  FGenericPlatformString::Memcpy(DAT_146298520,L"LikedEventGuid",0x1e);
  atexit((_func_5014 *)&LAB_143e4d6d0);
  return;
}



// FUNCTION 14015aa40 FUN_14015aa40 body=59 status=ok
// SIG undefined FUN_14015aa40(void)

void FUN_14015aa40(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298550,0);
  FGenericPlatformString::Memcpy(DAT_146298550,&DAT_1442e8804,4);
  atexit((_func_5014 *)&LAB_143e4d6f0);
  return;
}



// FUNCTION 14015aa80 FUN_14015aa80 body=59 status=ok
// SIG undefined FUN_14015aa80(void)

void FUN_14015aa80(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146297ff0,0);
  FGenericPlatformString::Memcpy(DAT_146297ff0,L"LocationX",0x14);
  atexit((_func_5014 *)&LAB_143e4d710);
  return;
}



// FUNCTION 14015aac0 FUN_14015aac0 body=59 status=ok
// SIG undefined FUN_14015aac0(void)

void FUN_14015aac0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298560,0);
  FGenericPlatformString::Memcpy(DAT_146298560,&DAT_1442e8814,4);
  atexit((_func_5014 *)&LAB_143e4d730);
  return;
}



// FUNCTION 14015ab00 FUN_14015ab00 body=59 status=ok
// SIG undefined FUN_14015ab00(void)

void FUN_14015ab00(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298000,0);
  FGenericPlatformString::Memcpy(DAT_146298000,L"LocationY",0x14);
  atexit((_func_5014 *)&LAB_143e4d750);
  return;
}



// FUNCTION 14015ab40 FUN_14015ab40 body=59 status=ok
// SIG undefined FUN_14015ab40(void)

void FUN_14015ab40(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298570,0);
  FGenericPlatformString::Memcpy(DAT_146298570,&DAT_1442e8834,4);
  atexit((_func_5014 *)&LAB_143e4d770);
  return;
}



// FUNCTION 14015ab80 FUN_14015ab80 body=59 status=ok
// SIG undefined FUN_14015ab80(void)

void FUN_14015ab80(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298010,0);
  FGenericPlatformString::Memcpy(DAT_146298010,L"LocationZ",0x14);
  atexit((_func_5014 *)&LAB_143e4d790);
  return;
}



// FUNCTION 14015abc0 FUN_14015abc0 body=59 status=ok
// SIG undefined FUN_14015abc0(void)

void FUN_14015abc0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298030,0);
  FGenericPlatformString::Memcpy(DAT_146298030,L"LookingForHelp",0x1e);
  atexit((_func_5014 *)&LAB_143e4d7b0);
  return;
}



// FUNCTION 14015ac00 FUN_14015ac00 body=59 status=ok
// SIG undefined FUN_14015ac00(void)

void FUN_14015ac00(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298350,0);
  FGenericPlatformString::Memcpy(DAT_146298350,L"MapName",0x10);
  atexit((_func_5014 *)&LAB_143e4d7d0);
  return;
}



// FUNCTION 14015ac40 FUN_14015ac40 body=59 status=ok
// SIG undefined FUN_14015ac40(void)

void FUN_14015ac40(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146297fa0,0);
  FGenericPlatformString::Memcpy(DAT_146297fa0,L"MapName",0x10);
  atexit((_func_5014 *)&LAB_143e4d7f0);
  return;
}



// FUNCTION 14015acc0 FUN_14015acc0 body=72 status=ok
// SIG undefined FUN_14015acc0(void)

void FUN_14015acc0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462985a0,0);
  FGenericPlatformString::Convert<char,wchar_t>(DAT_1462985a0,6,"Match",6,0x3f);
  atexit((_func_5014 *)&LAB_143e4d810);
  return;
}



// FUNCTION 14015ad10 FUN_14015ad10 body=59 status=ok
// SIG undefined FUN_14015ad10(void)

void FUN_14015ad10(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298500,0);
  FGenericPlatformString::Memcpy(DAT_146298500,L"Mayhem",0xe);
  atexit((_func_5014 *)&LAB_143e4d830);
  return;
}



// FUNCTION 14015ad50 FUN_14015ad50 body=59 status=ok
// SIG undefined FUN_14015ad50(void)

void FUN_14015ad50(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146297f30,0);
  FGenericPlatformString::Memcpy(DAT_146297f30,L"MismatchedBeaconNetVersions",0x38);
  atexit((_func_5014 *)&LAB_143e4d850);
  return;
}



// FUNCTION 14015ad90 FUN_14015ad90 body=59 status=ok
// SIG undefined FUN_14015ad90(void)

void FUN_14015ad90(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146297f50,0);
  FGenericPlatformString::Memcpy(DAT_146297f50,L"MissingDLC",0x16);
  atexit((_func_5014 *)&LAB_143e4d870);
  return;
}



// FUNCTION 14015add0 FUN_14015add0 body=59 status=ok
// SIG undefined FUN_14015add0(void)

void FUN_14015add0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462983a0,0);
  FGenericPlatformString::Memcpy(DAT_1462983a0,L"MissionHash",0x18);
  atexit((_func_5014 *)&LAB_143e4d890);
  return;
}



// FUNCTION 14015ae10 FUN_14015ae10 body=59 status=ok
// SIG undefined FUN_14015ae10(void)

void FUN_14015ae10(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146297fe0,0);
  FGenericPlatformString::Memcpy(DAT_146297fe0,L"MissionHash",0x18);
  atexit((_func_5014 *)&LAB_143e4d8b0);
  return;
}



// FUNCTION 14015ae50 FUN_14015ae50 body=59 status=ok
// SIG undefined FUN_14015ae50(void)

void FUN_14015ae50(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298340,0);
  FGenericPlatformString::Memcpy(DAT_146298340,L"MissionName",0x18);
  atexit((_func_5014 *)&LAB_143e4d8d0);
  return;
}



// FUNCTION 14015afd0 FUN_14015afd0 body=163 status=ok
// SIG undefined FUN_14015afd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14015afd0(void)

{
  longlong local_28;
  undefined8 local_20;
  longlong local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_20 = 0x58;
  local_28 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy
            (local_28,
             L"/Game/Audio/Globals/WMS_FullScreenMovieAudio_AutoPlay.WMS_FullScreenMovieAudio_AutoPlay"
             ,0xb0);
  local_18 = local_28;
  local_10 = (undefined4)local_20;
  local_c = local_20._4_4_;
  local_20 = 0;
  DAT_14686a4a0 = 0;
  DAT_14686a4a8 = 0;
  _DAT_14686a4b0 = 0;
  local_28 = 0;
  FUN_1417978e0(&DAT_14686a4a0,&local_18);
  if (local_28 != 0) {
    FMemory::Free();
  }
  atexit((_func_5014 *)&LAB_143e4d8f0);
  return;
}



// FUNCTION 14015b080 FUN_14015b080 body=163 status=ok
// SIG undefined FUN_14015b080(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14015b080(void)

{
  longlong local_28;
  undefined8 local_20;
  longlong local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_20 = 0x44;
  local_28 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy
            (local_28,L"/MediaCompositing/DefaultMediaPlaneTexture.DefaultMediaPlaneTexture",0x88);
  local_18 = local_28;
  local_10 = (undefined4)local_20;
  local_c = local_20._4_4_;
  local_20 = 0;
  DAT_14686a488 = 0;
  DAT_14686a490 = 0;
  _DAT_14686a498 = 0;
  local_28 = 0;
  FUN_1417978e0(&DAT_14686a488,&local_18);
  if (local_28 != 0) {
    FMemory::Free();
  }
  atexit((_func_5014 *)&LAB_143e4d910);
  return;
}



// FUNCTION 14015b210 FUN_14015b210 body=59 status=ok
// SIG undefined FUN_14015b210(void)

void FUN_14015b210(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146297ee0,0);
  FGenericPlatformString::Memcpy(DAT_146297ee0,L"NetworkFailure",0x1e);
  atexit((_func_5014 *)&LAB_143e4d930);
  return;
}



// FUNCTION 14015b290 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146297f00,0);
  FGenericPlatformString::Memcpy(DAT_146297f00,L"NotAcceptingReservations",0x32);
  atexit((_func_5014 *)&LAB_143e4d950);
  return;
}



// FUNCTION 14015b2d0 FUN_14015b2d0 body=59 status=ok
// SIG undefined FUN_14015b2d0(void)

void FUN_14015b2d0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298540,0);
  FGenericPlatformString::Memcpy(DAT_146298540,L"NumLikes",0x12);
  atexit((_func_5014 *)&LAB_143e4d970);
  return;
}



// FUNCTION 14015b310 `dynamic_initializer_for_'OfflineText'' body=53 status=ok
// SIG undefined `dynamic_initializer_for_'OfflineText''(void)

void EOnlinePresenceState::_dynamic_initializer_for__OfflineText__(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_14686a4e8,L"Offline",L"OnlinePresence",L"Offline");
  atexit(FUN_143e4d990);
  return;
}



// FUNCTION 14015b350 `dynamic_initializer_for_'OnlineText'' body=53 status=ok
// SIG undefined `dynamic_initializer_for_'OnlineText''(void)

void EOnlinePresenceState::_dynamic_initializer_for__OnlineText__(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_14686a4d0,L"Online",L"OnlinePresence",L"Online");
  atexit(FUN_143e4d9e0);
  return;
}



// FUNCTION 14015b3b0 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462983e0,0);
  FGenericPlatformString::Memcpy(DAT_1462983e0,L"OtherPlayerClassIdHashes",0x32);
  atexit((_func_5014 *)&LAB_143e4da30);
  return;
}



// FUNCTION 14015b3f0 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462983d0,0);
  FGenericPlatformString::Memcpy(DAT_1462983d0,L"OtherPlayerNetIds",0x24);
  atexit((_func_5014 *)&LAB_143e4da50);
  return;
}



// FUNCTION 14015b430 FUN_14015b430 body=59 status=ok
// SIG undefined FUN_14015b430(void)

void FUN_14015b430(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462982e0,0);
  FGenericPlatformString::Memcpy(DAT_1462982e0,L"Owner",0xc);
  atexit((_func_5014 *)&LAB_143e4da90);
  return;
}



// FUNCTION 14015b470 FUN_14015b470 body=72 status=ok
// SIG undefined FUN_14015b470(void)

void FUN_14015b470(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298580,0);
  FGenericPlatformString::Convert<char,wchar_t>(DAT_146298580,6,"Party",6,0x3f);
  atexit((_func_5014 *)&LAB_143e4dab0);
  return;
}



// FUNCTION 14015b4c0 FUN_14015b4c0 body=59 status=ok
// SIG undefined FUN_14015b4c0(void)

void FUN_14015b4c0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146297fc0,0);
  FGenericPlatformString::Memcpy(DAT_146297fc0,L"PartyPlayerCount",0x22);
  atexit((_func_5014 *)&LAB_143e4dad0);
  return;
}



// FUNCTION 14015b5e0 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298330,0);
  FGenericPlatformString::Memcpy(DAT_146298330,L"PlayerClassIdentifierHash",0x34);
  atexit((_func_5014 *)&LAB_143e4daf0);
  return;
}



// FUNCTION 14015b620 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146297fd0,0);
  FGenericPlatformString::Memcpy(DAT_146297fd0,L"PlayerClassIdentifierHash",0x34);
  atexit((_func_5014 *)&LAB_143e4db10);
  return;
}



// FUNCTION 14015b660 FUN_14015b660 body=59 status=ok
// SIG undefined FUN_14015b660(void)

void FUN_14015b660(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298260,0);
  FGenericPlatformString::Memcpy(DAT_146298260,L"PlayerId",0x12);
  atexit((_func_5014 *)&LAB_143e4db30);
  return;
}



// FUNCTION 14015b6a0 FUN_14015b6a0 body=59 status=ok
// SIG undefined FUN_14015b6a0(void)

void FUN_14015b6a0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298370,0);
  FGenericPlatformString::Memcpy(DAT_146298370,L"PlayerName",0x16);
  atexit((_func_5014 *)&LAB_143e4db50);
  return;
}



// FUNCTION 14015b6e0 `dynamic_initializer_for_'PresenceResourceKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PresenceResourceKey''(void)

void _dynamic_initializer_for__PresenceResourceKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462985f0,0);
  FGenericPlatformString::Memcpy(DAT_1462985f0,L"ResourceKey",0x18);
  atexit((_func_5014 *)&LAB_143e4db70);
  return;
}



// FUNCTION 14015b7e0 LocalizationSourceControlSettingsCategoryName'' body=59 status=ok
// SIG undefined LocalizationSourceControlSettingsCategoryName''(void)

void `dynamic_initializer_for_'FLocalizationSourceControlSettings::
     LocalizationSourceControlSettingsCategoryName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298230,0);
  FGenericPlatformString::Memcpy(DAT_146298230,L"ProvingGroundChallengesCompletion",0x44);
  atexit((_func_5014 *)&LAB_143e4db90);
  return;
}



// FUNCTION 14015b860 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298250,0);
  FGenericPlatformString::Memcpy(DAT_146298250,L"RaidChallengesCompletion",0x32);
  atexit((_func_5014 *)&LAB_143e4dbb0);
  return;
}



// FUNCTION 14015b8a0 FUN_14015b8a0 body=59 status=ok
// SIG undefined FUN_14015b8a0(void)

void FUN_14015b8a0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298470,0);
  FGenericPlatformString::Memcpy(DAT_146298470,L"Recipient",0x14);
  atexit((_func_5014 *)&LAB_143e4dbd0);
  return;
}



// FUNCTION 14015b920 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146297e40,0);
  FGenericPlatformString::Memcpy(DAT_146297e40,L"<img src=\"%s\"></>",0x24);
  atexit((_func_5014 *)&LAB_143e4dbf0);
  return;
}



// FUNCTION 14015bc40 FUN_14015bc40 body=59 status=ok
// SIG undefined FUN_14015bc40(void)

void FUN_14015bc40(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146297fb0,0);
  FGenericPlatformString::Memcpy(DAT_146297fb0,L"SessionId",0x14);
  atexit((_func_5014 *)&LAB_143e4dc10);
  return;
}



// FUNCTION 14015bc80 FUN_14015bc80 body=59 status=ok
// SIG undefined FUN_14015bc80(void)

void FUN_14015bc80(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298150,0);
  FGenericPlatformString::Memcpy(DAT_146298150,L"ShieldJsonData",0x1e);
  atexit((_func_5014 *)&LAB_143e4dc30);
  return;
}



// FUNCTION 14015bcc0 `dynamic_initializer_for_'StatusStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'StatusStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__StatusStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462980d0,0);
  FGenericPlatformString::Memcpy(DAT_1462980d0,L"ShieldSerialNumber",0x26);
  atexit((_func_5014 *)&LAB_143e4dc50);
  return;
}



// FUNCTION 14015bd20 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462981a0,0);
  FGenericPlatformString::Memcpy(DAT_1462981a0,L"SkinCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e4dc70);
  return;
}



// FUNCTION 14015bd60 FUN_14015bd60 body=59 status=ok
// SIG undefined FUN_14015bd60(void)

void FUN_14015bd60(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298240,0);
  FGenericPlatformString::Memcpy(DAT_146298240,L"SlaughterChallengesCompletion",0x3c);
  atexit((_func_5014 *)&LAB_143e4dc90);
  return;
}



// FUNCTION 14015bde0 FUN_14015bde0 body=72 status=ok
// SIG undefined FUN_14015bde0(void)

void FUN_14015bde0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462985b0,0);
  FGenericPlatformString::Convert<char,wchar_t>(DAT_1462985b0,9,"Spectate",9,0x3f);
  atexit((_func_5014 *)&LAB_143e4dcb0);
  return;
}



// FUNCTION 14015be90 FUN_14015be90 body=59 status=ok
// SIG undefined FUN_14015be90(void)

void FUN_14015be90(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298420,0);
  FGenericPlatformString::Memcpy(DAT_146298420,L"StatHash",0x12);
  atexit((_func_5014 *)&LAB_143e4dcd0);
  return;
}



// FUNCTION 14015bed0 FUN_14015bed0 body=59 status=ok
// SIG undefined FUN_14015bed0(void)

void FUN_14015bed0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462984b0,0);
  FGenericPlatformString::Memcpy(DAT_1462984b0,L"SurvivorStatGroupPoints",0x30);
  atexit((_func_5014 *)&LAB_143e4dd50);
  return;
}



// FUNCTION 14015bf20 FUN_14015bf20 body=59 status=ok
// SIG undefined FUN_14015bf20(void)

void FUN_14015bf20(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298070,0);
  FGenericPlatformString::Memcpy(DAT_146298070,L"TimePlayed",0x16);
  atexit((_func_5014 *)&LAB_143e4dd70);
  return;
}



// FUNCTION 14015bf80 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146297f40,0);
  FGenericPlatformString::Memcpy(DAT_146297f40,L"UnexpectedControlMessage",0x32);
  atexit((_func_5014 *)&LAB_143e4dd90);
  return;
}



// FUNCTION 14015bfc0 FUN_14015bfc0 body=59 status=ok
// SIG undefined FUN_14015bfc0(void)

void FUN_14015bfc0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462983c0,0);
  FGenericPlatformString::Memcpy(DAT_1462983c0,L"UniqueNetId",0x18);
  atexit((_func_5014 *)&LAB_143e4ddb0);
  return;
}



// FUNCTION 14015c080 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146297e50,0);
  FGenericPlatformString::Memcpy(DAT_146297e50,&DAT_144315f40,8);
  atexit((_func_5014 *)&LAB_143e4ddd0);
  return;
}



// FUNCTION 14015c0c0 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298100,0);
  FGenericPlatformString::Memcpy(DAT_146298100,L"Weapon1JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e4ddf0);
  return;
}



// FUNCTION 14015c100 FUN_14015c100 body=59 status=ok
// SIG undefined FUN_14015c100(void)

void FUN_14015c100(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298080,0);
  FGenericPlatformString::Memcpy(DAT_146298080,L"Weapon1SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e4de10);
  return;
}



// FUNCTION 14015c140 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298110,0);
  FGenericPlatformString::Memcpy(DAT_146298110,L"Weapon2JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e4de30);
  return;
}



// FUNCTION 14015c180 FUN_14015c180 body=59 status=ok
// SIG undefined FUN_14015c180(void)

void FUN_14015c180(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298090,0);
  FGenericPlatformString::Memcpy(DAT_146298090,L"Weapon2SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e4de50);
  return;
}



// FUNCTION 14015c1c0 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298120,0);
  FGenericPlatformString::Memcpy(DAT_146298120,L"Weapon3JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e4de70);
  return;
}



// FUNCTION 14015c200 FUN_14015c200 body=59 status=ok
// SIG undefined FUN_14015c200(void)

void FUN_14015c200(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462980a0,0);
  FGenericPlatformString::Memcpy(DAT_1462980a0,L"Weapon3SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e4de90);
  return;
}



// FUNCTION 14015c240 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298130,0);
  FGenericPlatformString::Memcpy(DAT_146298130,L"Weapon4JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e4deb0);
  return;
}



// FUNCTION 14015c280 FUN_14015c280 body=59 status=ok
// SIG undefined FUN_14015c280(void)

void FUN_14015c280(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462980b0,0);
  FGenericPlatformString::Memcpy(DAT_1462980b0,L"Weapon4SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e4ded0);
  return;
}



// FUNCTION 14015c2c0 FUN_14015c2c0 body=59 status=ok
// SIG undefined FUN_14015c2c0(void)

void FUN_14015c2c0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462981f0,0);
  FGenericPlatformString::Memcpy(DAT_1462981f0,L"WeaponChallengesCompletion",0x36);
  atexit((_func_5014 *)&LAB_143e4def0);
  return;
}



// FUNCTION 14015c380 EOL_String'' body=115 status=ok
// SIG undefined EOL_String''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FDlgConfigWriter::EOL_String__(void)

{
  undefined *puVar1;
  int iVar2;
  longlong lVar3;
  
  puVar1 = PTR_DAT_146297e18;
  if ((PTR_DAT_146297e18 != (undefined *)0x0) && (*(short *)PTR_DAT_146297e18 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(short *)(PTR_DAT_146297e18 + lVar3 * 2) != 0);
    iVar2 = (int)lVar3 + 1;
    _DAT_14686a468 = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14686a460,0);
    }
    FGenericPlatformString::Memcpy(DAT_14686a460,puVar1,(longlong)iVar2 * 2);
  }
  atexit((_func_5014 *)&LAB_143e4df10);
  return;
}



// FUNCTION 14015c400 FUN_14015c400 body=237 status=ok
// SIG undefined FUN_14015c400(void)

void FUN_14015c400(void)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  
  if ((DAT_146aeb1c0 != 0) && (DAT_146aeb1c0 != 1)) {
    FUN_140c18430(&DAT_14686b350);
    atexit((_func_5014 *)&LAB_143e4df30);
    return;
  }
  plVar2 = (longlong *)FUN_14218de70();
  plVar3 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_GetPoolName_144333490;
    plVar3[1] = (longlong)&DAT_14686b350;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[3] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_1443334d8;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar2,1);
    (**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
    iVar1 = (int)plVar2[1];
    *(int *)(plVar2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar2 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar1);
    }
    puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar2);
    *puVar5 = plVar3;
    *(undefined4 *)(puVar5 + 1) = 2;
  }
  atexit((_func_5014 *)&LAB_143e4df30);
  return;
}



// FUNCTION 14015c4f0 FUN_14015c4f0 body=237 status=ok
// SIG undefined FUN_14015c4f0(void)

void FUN_14015c4f0(void)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  
  if ((DAT_146aeb1c0 != 0) && (DAT_146aeb1c0 != 1)) {
    FUN_140c184b0(&DAT_14686b360);
    atexit((_func_5014 *)&LAB_143e4df40);
    return;
  }
  plVar2 = (longlong *)FUN_14218de70();
  plVar3 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_GetPoolName_144333400;
    plVar3[1] = (longlong)&DAT_14686b360;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[3] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_144333448;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar2,1);
    (**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
    iVar1 = (int)plVar2[1];
    *(int *)(plVar2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar2 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar1);
    }
    puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar2);
    *puVar5 = plVar3;
    *(undefined4 *)(puVar5 + 1) = 2;
  }
  atexit((_func_5014 *)&LAB_143e4df40);
  return;
}



// FUNCTION 14015c600 FUN_14015c600 body=59 status=ok
// SIG undefined FUN_14015c600(void)

void FUN_14015c600(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298940,0);
  FGenericPlatformString::Memcpy(DAT_146298940,L"AbilityData",0x18);
  atexit((_func_5014 *)&LAB_143e4df50);
  return;
}



// FUNCTION 14015c640 FUN_14015c640 body=59 status=ok
// SIG undefined FUN_14015c640(void)

void FUN_14015c640(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298cc8,0);
  FGenericPlatformString::Memcpy(DAT_146298cc8,L"AchievementId",0x1c);
  atexit((_func_5014 *)&LAB_143e4df70);
  return;
}



// FUNCTION 14015c680 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298cd8,0);
  FGenericPlatformString::Memcpy(DAT_146298cd8,L"AchievementType",0x20);
  atexit((_func_5014 *)&LAB_143e4df90);
  return;
}



// FUNCTION 14015c6c0 FUN_14015c6c0 body=59 status=ok
// SIG undefined FUN_14015c6c0(void)

void FUN_14015c6c0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298b98,0);
  FGenericPlatformString::Memcpy(DAT_146298b98,L"ActivityName",0x1a);
  atexit((_func_5014 *)&LAB_143e4dfb0);
  return;
}



// FUNCTION 14015c7a0 FUN_14015c7a0 body=59 status=ok
// SIG undefined FUN_14015c7a0(void)

void FUN_14015c7a0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462988f0,0);
  FGenericPlatformString::Memcpy(DAT_1462988f0,L"ArtifactJsonData",0x22);
  atexit((_func_5014 *)&LAB_143e4dfd0);
  return;
}



// FUNCTION 14015c7e0 FUN_14015c7e0 body=59 status=ok
// SIG undefined FUN_14015c7e0(void)

void FUN_14015c7e0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298870,0);
  FGenericPlatformString::Memcpy(DAT_146298870,L"ArtifactSerialNumber",0x2a);
  atexit((_func_5014 *)&LAB_143e4dff0);
  return;
}



// FUNCTION 14015c820 FUN_14015c820 body=53 status=ok
// SIG undefined FUN_14015c820(void)

void FUN_14015c820(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_14686ad38,L"Please wait...",L"UIManager",L"BlockingSubtitle");
  atexit(FUN_143e4e010);
  return;
}



// FUNCTION 14015c860 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298910,0);
  FGenericPlatformString::Memcpy(DAT_146298910,L"BodyCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e4e060);
  return;
}



// FUNCTION 14015c8a0 FUN_14015c8a0 body=117 status=ok
// SIG undefined FUN_14015c8a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14015c8a0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_14686ae58 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"online.queuedmessagedelay",0x3c23d70a,&DAT_14431cb5c,0);
  _DAT_14686ae50 = &PTR_FUN_143f3ecf8;
  DAT_14686ae60 = (**(code **)(*DAT_14686ae58 + 0x40))(DAT_14686ae58);
  atexit(FUN_143e4e080);
  return;
}



// FUNCTION 14015c920 FUN_14015c920 body=59 status=ok
// SIG undefined FUN_14015c920(void)

void FUN_14015c920(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462987a0,0);
  FGenericPlatformString::Memcpy(DAT_1462987a0,L"CanJoin",0x10);
  atexit((_func_5014 *)&LAB_143e4e0d0);
  return;
}



// FUNCTION 14015c9a0 FUN_14015c9a0 body=59 status=ok
// SIG undefined FUN_14015c9a0(void)

void FUN_14015c9a0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298c38,0);
  FGenericPlatformString::Memcpy(DAT_146298c38,L"ChallengeHash",0x1c);
  atexit((_func_5014 *)&LAB_143e4e0f0);
  return;
}



// FUNCTION 14015c9e0 FUN_14015c9e0 body=59 status=ok
// SIG undefined FUN_14015c9e0(void)

void FUN_14015c9e0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298c48,0);
  FGenericPlatformString::Memcpy(DAT_146298c48,L"ChallengeName",0x1c);
  atexit((_func_5014 *)&LAB_143e4e110);
  return;
}



// FUNCTION 14015ca20 FUN_14015ca20 body=59 status=ok
// SIG undefined FUN_14015ca20(void)

void FUN_14015ca20(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298c68,0);
  FGenericPlatformString::Memcpy(DAT_146298c68,L"ChallengeTier",0x1c);
  atexit((_func_5014 *)&LAB_143e4e130);
  return;
}



// FUNCTION 14015ca60 FUN_14015ca60 body=59 status=ok
// SIG undefined FUN_14015ca60(void)

void FUN_14015ca60(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298ce8,0);
  FGenericPlatformString::Memcpy(DAT_146298ce8,L"ChallengeUpdates",0x22);
  atexit((_func_5014 *)&LAB_143e4e150);
  return;
}



// FUNCTION 14015caa0 FUN_14015caa0 body=59 status=ok
// SIG undefined FUN_14015caa0(void)

void FUN_14015caa0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298c58,0);
  FGenericPlatformString::Memcpy(DAT_146298c58,L"ChallengeValue",0x1e);
  atexit((_func_5014 *)&LAB_143e4e170);
  return;
}



// FUNCTION 14015cae0 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462988e0,0);
  FGenericPlatformString::Memcpy(DAT_1462988e0,L"ClassItemJsonData",0x24);
  atexit((_func_5014 *)&LAB_143e4e190);
  return;
}



// FUNCTION 14015cb20 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298860,0);
  FGenericPlatformString::Memcpy(DAT_146298860,L"ClassItemSerialNumber",0x2c);
  atexit((_func_5014 *)&LAB_143e4e1b0);
  return;
}



// FUNCTION 14015cba0 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298990,0);
  FGenericPlatformString::Memcpy(DAT_146298990,L"CrewChallengesCompletion",0x32);
  atexit((_func_5014 *)&LAB_143e4e1d0);
  return;
}



// FUNCTION 14015cc30 FUN_14015cc30 body=59 status=ok
// SIG undefined FUN_14015cc30(void)

void FUN_14015cc30(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462989f0,0);
  FGenericPlatformString::Memcpy(DAT_1462989f0,L"DateTime",0x12);
  atexit((_func_5014 *)&LAB_143e4e1f0);
  return;
}



// FUNCTION 14015cd60 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298a90,0);
  FGenericPlatformString::Memcpy(DAT_146298a90,L"DuplicateReservationFound",0x34);
  atexit((_func_5014 *)&LAB_143e4e220);
  return;
}



// FUNCTION 14015cda0 `dynamic_initializer_for_'kResultStringCannotLoadPreset'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kResultStringCannotLoadPreset''(void)

void _dynamic_initializer_for__kResultStringCannotLoadPreset__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298930,0);
  FGenericPlatformString::Memcpy(DAT_146298930,L"EmoteCustomizationHash",0x2e);
  atexit((_func_5014 *)&LAB_143e4e240);
  return;
}



// FUNCTION 14015cdf0 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298980,0);
  FGenericPlatformString::Memcpy(DAT_146298980,L"EnemyChallengesCompletion",0x34);
  atexit((_func_5014 *)&LAB_143e4e280);
  return;
}



// FUNCTION 14015ce30 FUN_14015ce30 body=59 status=ok
// SIG undefined FUN_14015ce30(void)

void FUN_14015ce30(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298b68,0);
  FGenericPlatformString::Memcpy(DAT_146298b68,L"EnemyName",0x14);
  atexit((_func_5014 *)&LAB_143e4e2a0);
  return;
}



// FUNCTION 14015ce70 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298bb8,0);
  FGenericPlatformString::Memcpy(DAT_146298bb8,L"EnemyUINameHash",0x20);
  atexit((_func_5014 *)&LAB_143e4e2c0);
  return;
}



// FUNCTION 14015ceb0 FUN_14015ceb0 body=59 status=ok
// SIG undefined FUN_14015ceb0(void)

void FUN_14015ceb0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298c98,0);
  FGenericPlatformString::Memcpy(DAT_146298c98,L"EnforcerStatGroupPoints",0x30);
  atexit((_func_5014 *)&LAB_143e4e2e0);
  return;
}



// FUNCTION 14015cf10 FUN_14015cf10 body=59 status=ok
// SIG undefined FUN_14015cf10(void)

void FUN_14015cf10(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298b08,0);
  FGenericPlatformString::Memcpy(DAT_146298b08,L"EventDateTime",0x1c);
  atexit((_func_5014 *)&LAB_143e4e300);
  return;
}



// FUNCTION 14015cf50 FUN_14015cf50 body=59 status=ok
// SIG undefined FUN_14015cf50(void)

void FUN_14015cf50(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298b18,0);
  FGenericPlatformString::Memcpy(DAT_146298b18,L"EventGuid",0x14);
  atexit((_func_5014 *)&LAB_143e4e320);
  return;
}



// FUNCTION 14015cf90 FUN_14015cf90 body=332 status=ok
// SIG undefined FUN_14015cf90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14015cf90(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *local_18;
  int local_10;
  
  if ((DAT_14686aed8 == '\0') && (puVar2 = (undefined8 *)FUN_140c122c0(), puVar2 != &DAT_14686ae68))
  {
    DAT_14686ae68 = *puVar2;
    uRam000000014686ae70 = puVar2[1];
    _DAT_14686ae78 = puVar2[2];
    uRam000000014686ae80 = puVar2[3];
    _DAT_14686ae88 = puVar2[4];
    uRam000000014686ae90 = puVar2[5];
    _DAT_14686ae98 = puVar2[6];
    uRam000000014686aea0 = puVar2[7];
    _DAT_14686aea8 = puVar2[8];
    uRam000000014686aeb0 = puVar2[9];
    _DAT_14686aeb8 = puVar2[10];
    uRam000000014686aec0 = puVar2[0xb];
    _DAT_14686aec8 = *(undefined4 *)(puVar2 + 0xc);
    uRam000000014686aecc = *(undefined4 *)((longlong)puVar2 + 100);
    uRam000000014686aed0 = *(undefined4 *)(puVar2 + 0xd);
    uRam000000014686aed4 = *(undefined4 *)((longlong)puVar2 + 0x6c);
    DAT_14686aed8 = '\x01';
  }
  uVar1 = DAT_14686ae68;
  local_18 = (longlong *)0x0;
  plVar3 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_GetPoolName_143fca720;
    plVar3[1] = (longlong)FUN_140c1d0b0;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[3] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_143fca768;
  }
  FUN_1421928f0(&DAT_14686b338,uVar1,0x14,&local_18);
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}



// FUNCTION 14015d0e0 FUN_14015d0e0 body=321 status=ok
// SIG undefined FUN_14015d0e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14015d0e0(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *local_18;
  int local_10;
  
  if ((DAT_14686afc0 == '\0') && (puVar2 = (undefined8 *)FUN_140c120b0(), puVar2 != &DAT_14686af60))
  {
    DAT_14686af60 = *puVar2;
    uRam000000014686af68 = puVar2[1];
    _DAT_14686af70 = puVar2[2];
    uRam000000014686af78 = puVar2[3];
    _DAT_14686af80 = puVar2[4];
    uRam000000014686af88 = puVar2[5];
    _DAT_14686af90 = puVar2[6];
    uRam000000014686af98 = puVar2[7];
    _DAT_14686afa0 = *(undefined4 *)(puVar2 + 8);
    uRam000000014686afa4 = *(undefined4 *)((longlong)puVar2 + 0x44);
    uRam000000014686afa8 = *(undefined4 *)(puVar2 + 9);
    uRam000000014686afac = *(undefined4 *)((longlong)puVar2 + 0x4c);
    _DAT_14686afb0 = puVar2[10];
    uRam000000014686afb8 = puVar2[0xb];
    DAT_14686afc0 = '\x01';
  }
  uVar1 = DAT_14686af60;
  local_18 = (longlong *)0x0;
  plVar3 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_GetPoolName_143fca720;
    plVar3[1] = (longlong)FUN_140c1c440;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[3] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_143fca768;
  }
  FUN_1421928f0(&DAT_14686b340,uVar1,0x14,&local_18);
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}



// FUNCTION 14015d230 FUN_14015d230 body=312 status=ok
// SIG undefined FUN_14015d230(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14015d230(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *local_18;
  int local_10;
  
  if ((DAT_14686af58 == '\0') && (puVar2 = (undefined8 *)FUN_140c12190(), puVar2 != &DAT_14686af10))
  {
    DAT_14686af10 = *puVar2;
    uRam000000014686af18 = puVar2[1];
    _DAT_14686af20 = puVar2[2];
    uRam000000014686af28 = puVar2[3];
    _DAT_14686af30 = puVar2[4];
    uRam000000014686af38 = puVar2[5];
    _DAT_14686af40 = puVar2[6];
    uRam000000014686af48 = puVar2[7];
    DAT_14686af50 = puVar2[8];
    DAT_14686af58 = '\x01';
  }
  uVar1 = DAT_14686af10;
  local_18 = (longlong *)0x0;
  plVar3 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_GetPoolName_143fca720;
    plVar3[1] = (longlong)FUN_140c1ca40;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[3] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_143fca768;
  }
  FUN_1421928f0(&DAT_14686b348,uVar1,0x14,&local_18);
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}



// FUNCTION 14015d390 `dynamic_initializer_for_'kResultStringAssetDefAlrealdyLoaded'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kResultStringAssetDefAlrealdyLoaded''(void)

void _dynamic_initializer_for__kResultStringAssetDefAlrealdyLoaded__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462989a0,0);
  FGenericPlatformString::Memcpy(DAT_1462989a0,L"ExplorationChallengesCompletion",0x40);
  atexit((_func_5014 *)&LAB_143e4e340);
  return;
}



// FUNCTION 14015d3d0 FUN_14015d3d0 body=90 status=ok
// SIG undefined FUN_14015d3d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14015d3d0(void)

{
  longlong *plVar1;
  undefined8 local_res8 [4];
  
  _DAT_146298ad8 = &PTR_FUN_144332c48;
  plVar1 = (longlong *)FUN_141593110();
  FName::FName(local_res8,L"GbxPerfAnalyticsProvider",1);
  (**(code **)(*plVar1 + 0x18))(plVar1,local_res8[0],&DAT_146298ad8);
  atexit(FUN_143e4e360);
  return;
}



// FUNCTION 14015d4b0 FUN_14015d4b0 body=59 status=ok
// SIG undefined FUN_14015d4b0(void)

void FUN_14015d4b0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462987d0,0);
  FGenericPlatformString::Memcpy(DAT_1462987d0,L"FriendActivityStatus",0x2a);
  atexit((_func_5014 *)&LAB_143e4e3c0);
  return;
}



// FUNCTION 14015d4f0 FUN_14015d4f0 body=59 status=ok
// SIG undefined FUN_14015d4f0(void)

void FUN_14015d4f0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298a40,0);
  FGenericPlatformString::Memcpy(DAT_146298a40,L"ChallengeInfo",0x1c);
  atexit((_func_5014 *)&LAB_143e4e3e0);
  return;
}



// FUNCTION 14015d530 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298a30,0);
  FGenericPlatformString::Memcpy(DAT_146298a30,L"FriendCrewQuarterInfo",0x2c);
  atexit((_func_5014 *)&LAB_143e4e400);
  return;
}



// FUNCTION 14015d570 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298af8,0);
  FGenericPlatformString::Memcpy(DAT_146298af8,L"FriendEventType",0x20);
  atexit((_func_5014 *)&LAB_143e4e420);
  return;
}



// FUNCTION 14015d5b0 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298a10,0);
  FGenericPlatformString::Memcpy(DAT_146298a10,L"FriendLoadOutInfo",0x24);
  atexit((_func_5014 *)&LAB_143e4e440);
  return;
}



// FUNCTION 14015d5f0 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298a00,0);
  FGenericPlatformString::Memcpy(DAT_146298a00,L"FriendStatusPresenceInfo",0x32);
  atexit((_func_5014 *)&LAB_143e4e460);
  return;
}



// FUNCTION 14015d630 FUN_14015d630 body=59 status=ok
// SIG undefined FUN_14015d630(void)

void FUN_14015d630(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298a20,0);
  FGenericPlatformString::Memcpy(DAT_146298a20,L"FriendSkillTreeInfo",0x28);
  atexit((_func_5014 *)&LAB_143e4e480);
  return;
}



// FUNCTION 14015d670 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298950,0);
  FGenericPlatformString::Memcpy(DAT_146298950,L"FriendStatusThing",0x24);
  atexit((_func_5014 *)&LAB_143e4e4a0);
  return;
}



// FUNCTION 14015d6b0 FUN_14015d6b0 body=203 status=ok
// SIG undefined FUN_14015d6b0(void)

void FUN_14015d6b0(void)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  longlong *local_18;
  int local_10;
  
  uVar1 = DAT_14686ade0;
  local_18 = (longlong *)0x0;
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_144332a08;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[2] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_144332a50;
  }
  FUN_142192a20(local_res8,uVar1,0x1e,&local_18);
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}



// FUNCTION 14015d780 FUN_14015d780 body=237 status=ok
// SIG undefined FUN_14015d780(void)

void FUN_14015d780(void)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  
  if ((DAT_146aeb1c0 != 0) && (DAT_146aeb1c0 != 1)) {
    FUN_140c185a0(&DAT_14686b370);
    atexit((_func_5014 *)&LAB_143e4e4c0);
    return;
  }
  plVar2 = (longlong *)FUN_14218de70();
  plVar3 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_GetPoolName_144332dc0;
    plVar3[1] = (longlong)&DAT_14686b370;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[3] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_144332e08;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar2,1);
    (**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
    iVar1 = (int)plVar2[1];
    *(int *)(plVar2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar2 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar1);
    }
    puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar2);
    *puVar5 = plVar3;
    *(undefined4 *)(puVar5 + 1) = 2;
  }
  atexit((_func_5014 *)&LAB_143e4e4c0);
  return;
}



// FUNCTION 14015d870 FUN_14015d870 body=203 status=ok
// SIG undefined FUN_14015d870(void)

void FUN_14015d870(void)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  longlong *local_18;
  int local_10;
  
  uVar1 = DAT_14686adc8;
  local_18 = (longlong *)0x0;
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_144332978;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[2] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_1443329c0;
  }
  FUN_142192a20(local_res8,uVar1,0x1e,&local_18);
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}



// FUNCTION 14015d940 FUN_14015d940 body=237 status=ok
// SIG undefined FUN_14015d940(void)

void FUN_14015d940(void)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  
  if ((DAT_146aeb1c0 != 0) && (DAT_146aeb1c0 != 1)) {
    FUN_140c18790(&DAT_14686b378);
    atexit((_func_5014 *)&LAB_143e4e4d0);
    return;
  }
  plVar2 = (longlong *)FUN_14218de70();
  plVar3 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_GetPoolName_144332d30;
    plVar3[1] = (longlong)&DAT_14686b378;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[3] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_144332d78;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar2,1);
    (**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
    iVar1 = (int)plVar2[1];
    *(int *)(plVar2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar2 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar1);
    }
    puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar2);
    *puVar5 = plVar3;
    *(undefined4 *)(puVar5 + 1) = 2;
  }
  atexit((_func_5014 *)&LAB_143e4e4d0);
  return;
}



// FUNCTION 14015da30 FUN_14015da30 body=203 status=ok
// SIG undefined FUN_14015da30(void)

void FUN_14015da30(void)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  longlong *local_18;
  int local_10;
  
  uVar1 = DAT_14686adb8;
  local_18 = (longlong *)0x0;
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_1443328e8;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[2] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_144332930;
  }
  FUN_142192a20(local_res8,uVar1,0x1e,&local_18);
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}



// FUNCTION 14015db00 FUN_14015db00 body=203 status=ok
// SIG undefined FUN_14015db00(void)

void FUN_14015db00(void)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  longlong *local_18;
  int local_10;
  
  uVar1 = DAT_14686adf0;
  local_18 = (longlong *)0x0;
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_144332b28;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[2] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_144332b70;
  }
  FUN_142192a20(local_res8,uVar1,0x1e,&local_18);
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}



// FUNCTION 14015dbd0 FUN_14015dbd0 body=237 status=ok
// SIG undefined FUN_14015dbd0(void)

void FUN_14015dbd0(void)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  
  if ((DAT_146aeb1c0 != 0) && (DAT_146aeb1c0 != 1)) {
    FUN_140c18820(&DAT_14686ad34);
    atexit((_func_5014 *)&LAB_143e4e4e0);
    return;
  }
  plVar2 = (longlong *)FUN_14218de70();
  plVar3 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_GetPoolName_144332e50;
    plVar3[1] = (longlong)&DAT_14686ad34;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[3] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_144332e98;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar2,1);
    (**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
    iVar1 = (int)plVar2[1];
    *(int *)(plVar2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar2 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar1);
    }
    puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar2);
    *puVar5 = plVar3;
    *(undefined4 *)(puVar5 + 1) = 2;
  }
  atexit((_func_5014 *)&LAB_143e4e4e0);
  return;
}



// FUNCTION 14015dcc0 FUN_14015dcc0 body=303 status=ok
// SIG undefined FUN_14015dcc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14015dcc0(void)

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
      *plVar4 = (longlong)&PTR_GetPoolName_144332f70;
      plVar4[1] = (longlong)&DAT_14686b158;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[3] = lVar5;
      *plVar4 = (longlong)&PTR_GetPoolName_144332fb8;
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
    puVar2 = (undefined8 *)FUN_140c11e40();
    if (puVar2 != &DAT_14686b158) {
      DAT_14686b158 = *puVar2;
      uRam000000014686b160 = puVar2[1];
      _DAT_14686b168 = puVar2[2];
      uRam000000014686b170 = puVar2[3];
      _DAT_14686b178 = puVar2[4];
      uRam000000014686b180 = puVar2[5];
      _DAT_14686b188 = puVar2[6];
      uRam000000014686b190 = puVar2[7];
      DAT_14686b198 = 1;
      atexit((_func_5014 *)&LAB_143e4e4f0);
      return;
    }
  }
  atexit((_func_5014 *)&LAB_143e4e4f0);
  return;
}



// FUNCTION 14015ddf0 FUN_14015ddf0 body=283 status=ok
// SIG undefined FUN_14015ddf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14015ddf0(void)

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
      *plVar4 = (longlong)&PTR_GetPoolName_144333360;
      plVar4[1] = (longlong)&DAT_14686ae08;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[3] = lVar5;
      *plVar4 = (longlong)&PTR_GetPoolName_1443333a8;
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
    puVar2 = (undefined8 *)FUN_140c11eb0();
    if (puVar2 != &DAT_14686ae08) {
      DAT_14686ae08 = *puVar2;
      DAT_14686ae10 = puVar2[1];
      _DAT_14686ae18 = puVar2[2];
      DAT_14686ae20 = 1;
      atexit((_func_5014 *)&LAB_143e4e500);
      return;
    }
  }
  atexit((_func_5014 *)&LAB_143e4e500);
  return;
}



// FUNCTION 14015df10 FUN_14015df10 body=245 status=ok
// SIG undefined FUN_14015df10(void)

void FUN_14015df10(void)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  
  if ((DAT_146aeb1c0 != 0) && (DAT_146aeb1c0 != 1)) {
    uVar2 = FUN_140c12040();
    FUN_140bffb10(&DAT_14686b1a0,uVar2);
    atexit((_func_5014 *)&LAB_143e4e510);
    return;
  }
  plVar3 = (longlong *)FUN_14218de70();
  plVar4 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_GetPoolName_144332ee0;
    plVar4[1] = (longlong)&DAT_14686b1a0;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[3] = lVar5;
    *plVar4 = (longlong)&PTR_GetPoolName_144332f28;
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
  atexit((_func_5014 *)&LAB_143e4e510);
  return;
}



// FUNCTION 14015e010 FUN_14015e010 body=325 status=ok
// SIG undefined FUN_14015e010(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14015e010(void)

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
      *plVar4 = (longlong)&PTR_GetPoolName_144333120;
      plVar4[1] = (longlong)&DAT_14686af60;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[3] = lVar5;
      *plVar4 = (longlong)&PTR_GetPoolName_144333168;
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
    puVar2 = (undefined8 *)FUN_140c120b0();
    if (puVar2 != &DAT_14686af60) {
      DAT_14686af60 = *puVar2;
      uRam000000014686af68 = puVar2[1];
      _DAT_14686af70 = puVar2[2];
      uRam000000014686af78 = puVar2[3];
      _DAT_14686af80 = puVar2[4];
      uRam000000014686af88 = puVar2[5];
      _DAT_14686af90 = puVar2[6];
      uRam000000014686af98 = puVar2[7];
      _DAT_14686afa0 = puVar2[8];
      uRam000000014686afa8 = puVar2[9];
      _DAT_14686afb0 = puVar2[10];
      uRam000000014686afb8 = puVar2[0xb];
      DAT_14686afc0 = 1;
      atexit((_func_5014 *)&LAB_143e4e520);
      return;
    }
  }
  atexit((_func_5014 *)&LAB_143e4e520);
  return;
}



// FUNCTION 14015e160 FUN_14015e160 body=245 status=ok
// SIG undefined FUN_14015e160(void)

void FUN_14015e160(void)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  
  if ((DAT_146aeb1c0 != 0) && (DAT_146aeb1c0 != 1)) {
    uVar2 = FUN_140c12120();
    FUN_140bffbb0(&DAT_14686afc8,uVar2);
    atexit((_func_5014 *)&LAB_143e4e530);
    return;
  }
  plVar3 = (longlong *)FUN_14218de70();
  plVar4 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_GetPoolName_144333090;
    plVar4[1] = (longlong)&DAT_14686afc8;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[3] = lVar5;
    *plVar4 = (longlong)&PTR_GetPoolName_1443330d8;
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
  atexit((_func_5014 *)&LAB_143e4e530);
  return;
}



// FUNCTION 14015e260 FUN_14015e260 body=316 status=ok
// SIG undefined FUN_14015e260(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14015e260(void)

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
      *plVar4 = (longlong)&PTR_GetPoolName_1443331b0;
      plVar4[1] = (longlong)&DAT_14686af10;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[3] = lVar5;
      *plVar4 = (longlong)&PTR_GetPoolName_1443331f8;
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
    puVar2 = (undefined8 *)FUN_140c12190();
    if (puVar2 != &DAT_14686af10) {
      DAT_14686af10 = *puVar2;
      uRam000000014686af18 = puVar2[1];
      _DAT_14686af20 = puVar2[2];
      uRam000000014686af28 = puVar2[3];
      _DAT_14686af30 = puVar2[4];
      uRam000000014686af38 = puVar2[5];
      _DAT_14686af40 = puVar2[6];
      uRam000000014686af48 = puVar2[7];
      DAT_14686af50 = puVar2[8];
      DAT_14686af58 = 1;
      atexit((_func_5014 *)&LAB_143e4e540);
      return;
    }
  }
  atexit((_func_5014 *)&LAB_143e4e540);
  return;
}



// FUNCTION 14015e3a0 FUN_14015e3a0 body=294 status=ok
// SIG undefined FUN_14015e3a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14015e3a0(void)

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
      *plVar4 = (longlong)&PTR_GetPoolName_144333240;
      plVar4[1] = (longlong)&DAT_14686aee0;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[3] = lVar5;
      *plVar4 = (longlong)&PTR_GetPoolName_144333288;
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
    puVar2 = (undefined8 *)FUN_140c12200();
    if (puVar2 != (undefined8 *)&DAT_14686aee0) {
      _DAT_14686aee0 = *puVar2;
      uRam000000014686aee8 = puVar2[1];
      _DAT_14686aef0 = puVar2[2];
      uRam000000014686aef8 = puVar2[3];
      DAT_14686af00 = puVar2[4];
      DAT_14686af08 = 1;
      atexit((_func_5014 *)&LAB_143e4e550);
      return;
    }
  }
  atexit((_func_5014 *)&LAB_143e4e550);
  return;
}



// FUNCTION 14015e4d0 FUN_14015e4d0 body=340 status=ok
// SIG undefined FUN_14015e4d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14015e4d0(void)

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
      *plVar4 = (longlong)&PTR_GetPoolName_1443332d0;
      plVar4[1] = (longlong)&DAT_14686ae68;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[3] = lVar5;
      *plVar4 = (longlong)&PTR_GetPoolName_144333318;
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
    puVar2 = (undefined8 *)FUN_140c122c0();
    if (puVar2 != &DAT_14686ae68) {
      DAT_14686ae68 = *puVar2;
      uRam000000014686ae70 = puVar2[1];
      _DAT_14686ae78 = puVar2[2];
      uRam000000014686ae80 = puVar2[3];
      _DAT_14686ae88 = puVar2[4];
      uRam000000014686ae90 = puVar2[5];
      _DAT_14686ae98 = puVar2[6];
      uRam000000014686aea0 = puVar2[7];
      _DAT_14686aea8 = puVar2[8];
      uRam000000014686aeb0 = puVar2[9];
      _DAT_14686aeb8 = puVar2[10];
      uRam000000014686aec0 = puVar2[0xb];
      _DAT_14686aec8 = puVar2[0xc];
      uRam000000014686aed0 = puVar2[0xd];
      DAT_14686aed8 = 1;
      atexit((_func_5014 *)&LAB_143e4e560);
      return;
    }
  }
  atexit((_func_5014 *)&LAB_143e4e560);
  return;
}



// FUNCTION 14015e630 FUN_14015e630 body=327 status=ok
// SIG undefined FUN_14015e630(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14015e630(void)

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
      *plVar4 = (longlong)&PTR_GetPoolName_1443335b0;
      plVar4[1] = (longlong)&DAT_14686b268;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[3] = lVar5;
      *plVar4 = (longlong)&PTR_GetPoolName_144333638;
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
    puVar2 = (undefined8 *)FUN_140c12330();
    if (puVar2 != (undefined8 *)&DAT_14686b268) {
      _DAT_14686b268 = *puVar2;
      uRam000000014686b270 = puVar2[1];
      _DAT_14686b278 = puVar2[2];
      uRam000000014686b280 = puVar2[3];
      _DAT_14686b288 = puVar2[4];
      uRam000000014686b290 = puVar2[5];
      _DAT_14686b298 = puVar2[6];
      uRam000000014686b2a0 = puVar2[7];
      _DAT_14686b2a8 = puVar2[8];
      uRam000000014686b2b0 = puVar2[9];
      _DAT_14686b2b8 = puVar2[10];
      DAT_14686b2c0 = 1;
      atexit((_func_5014 *)&LAB_143e4e570);
      return;
    }
  }
  atexit((_func_5014 *)&LAB_143e4e570);
  return;
}



// FUNCTION 14015e780 FUN_14015e780 body=314 status=ok
// SIG undefined FUN_14015e780(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14015e780(void)

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
      *plVar4 = (longlong)&PTR_GetPoolName_144333000;
      plVar4[1] = (longlong)&DAT_14686b100;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[3] = lVar5;
      *plVar4 = (longlong)&PTR_GetPoolName_144333048;
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
    puVar2 = (undefined8 *)FUN_140c123a0();
    if (puVar2 != &DAT_14686b100) {
      DAT_14686b100 = *puVar2;
      _DAT_14686b108 = puVar2[1];
      _DAT_14686b110 = puVar2[2];
      _DAT_14686b118 = puVar2[3];
      _DAT_14686b120 = puVar2[4];
      _DAT_14686b128 = puVar2[5];
      _DAT_14686b130 = puVar2[6];
      _DAT_14686b138 = puVar2[7];
      _DAT_14686b140 = puVar2[8];
      _DAT_14686b148 = puVar2[9];
      DAT_14686b150 = 1;
      atexit((_func_5014 *)&LAB_143e4e580);
      return;
    }
  }
  atexit((_func_5014 *)&LAB_143e4e580);
  return;
}



// FUNCTION 14015e8c0 FUN_14015e8c0 body=346 status=ok
// SIG undefined FUN_14015e8c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14015e8c0(void)

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
      *plVar4 = (longlong)&PTR_GetPoolName_144333520;
      plVar4[1] = (longlong)&DAT_14686b2c8;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[3] = lVar5;
      *plVar4 = (longlong)&PTR_GetPoolName_144333568;
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
    puVar2 = (undefined8 *)FUN_140c12410();
    if (puVar2 != (undefined8 *)&DAT_14686b2c8) {
      _DAT_14686b2c8 = *puVar2;
      uRam000000014686b2d0 = puVar2[1];
      _DAT_14686b2d8 = puVar2[2];
      uRam000000014686b2e0 = puVar2[3];
      _DAT_14686b2e8 = puVar2[4];
      uRam000000014686b2f0 = puVar2[5];
      _DAT_14686b2f8 = puVar2[6];
      uRam000000014686b300 = puVar2[7];
      _DAT_14686b308 = puVar2[8];
      uRam000000014686b310 = puVar2[9];
      _DAT_14686b318 = puVar2[10];
      uRam000000014686b320 = puVar2[0xb];
      _DAT_14686b328 = puVar2[0xc];
      DAT_14686b330 = 1;
      atexit((_func_5014 *)&LAB_143e4e590);
      return;
    }
  }
  atexit((_func_5014 *)&LAB_143e4e590);
  return;
}



// FUNCTION 14015ea20 FUN_14015ea20 body=203 status=ok
// SIG undefined FUN_14015ea20(void)

void FUN_14015ea20(void)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  longlong *local_18;
  int local_10;
  
  uVar1 = DAT_14686adf8;
  local_18 = (longlong *)0x0;
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_144332a98;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[2] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_144332ae0;
  }
  FUN_142192a20(local_res8,uVar1,0x1e,&local_18);
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}



// FUNCTION 14015eaf0 FUN_14015eaf0 body=203 status=ok
// SIG undefined FUN_14015eaf0(void)

void FUN_14015eaf0(void)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  longlong *local_18;
  int local_10;
  
  uVar1 = DAT_14686ae00;
  local_18 = (longlong *)0x0;
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_144332bb8;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[2] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_144332c00;
  }
  FUN_142192a20(local_res8,uVar1,0x1e,&local_18);
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}



// FUNCTION 14015ebc0 FUN_14015ebc0 body=59 status=ok
// SIG undefined FUN_14015ebc0(void)

void FUN_14015ebc0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298960,0);
  FGenericPlatformString::Memcpy(DAT_146298960,L"GameCompletion",0x1e);
  atexit((_func_5014 *)&LAB_143e4e5a0);
  return;
}



// FUNCTION 14015ec00 FUN_14015ec00 body=195 status=ok
// SIG undefined FUN_14015ec00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14015ec00(void)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  
  plVar3 = (longlong *)FUN_142192200();
  plVar4 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_GetPoolName_1443336d8;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[2] = lVar5;
    *plVar4 = (longlong)&PTR_GetPoolName_144333720;
  }
  _DAT_14686b390 = 0;
  if (plVar4 != (longlong *)0x0) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar3,1);
    puVar6 = (undefined8 *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
    iVar1 = (int)plVar3[1];
    uVar2 = *puVar6;
    *(int *)(plVar3 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar3 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar3,iVar1);
    }
    puVar6 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar3);
    *puVar6 = plVar4;
    *(undefined4 *)(puVar6 + 1) = 2;
    _DAT_14686b390 = uVar2;
  }
  return;
}



// FUNCTION 14015ecd0 FUN_14015ecd0 body=195 status=ok
// SIG undefined FUN_14015ecd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14015ecd0(void)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  
  plVar3 = (longlong *)FUN_142192220();
  plVar4 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_GetPoolName_144332858;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[2] = lVar5;
    *plVar4 = (longlong)&PTR_GetPoolName_1443328a0;
  }
  _DAT_14686b3b8 = 0;
  if (plVar4 != (longlong *)0x0) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar3,1);
    puVar6 = (undefined8 *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
    iVar1 = (int)plVar3[1];
    uVar2 = *puVar6;
    *(int *)(plVar3 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar3 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar3,iVar1);
    }
    puVar6 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar3);
    *puVar6 = plVar4;
    *(undefined4 *)(puVar6 + 1) = 2;
    _DAT_14686b3b8 = uVar2;
  }
  return;
}



// FUNCTION 14015eda0 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298b88,0);
  FGenericPlatformString::Memcpy(DAT_146298b88,L"GearDisplayName",0x20);
  atexit((_func_5014 *)&LAB_143e4e5c0);
  return;
}



// FUNCTION 14015ede0 FUN_14015ede0 body=59 status=ok
// SIG undefined FUN_14015ede0(void)

void FUN_14015ede0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298c08,0);
  FGenericPlatformString::Memcpy(DAT_146298c08,L"GearJsonData",0x1a);
  atexit((_func_5014 *)&LAB_143e4e5e0);
  return;
}



// FUNCTION 14015ee20 FUN_14015ee20 body=59 status=ok
// SIG undefined FUN_14015ee20(void)

void FUN_14015ee20(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298c18,0);
  FGenericPlatformString::Memcpy(DAT_146298c18,L"GearReceivedType",0x22);
  atexit((_func_5014 *)&LAB_143e4e600);
  return;
}



// FUNCTION 14015ee60 FUN_14015ee60 body=59 status=ok
// SIG undefined FUN_14015ee60(void)

void FUN_14015ee60(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298bf8,0);
  FGenericPlatformString::Memcpy(DAT_146298bf8,L"GearSerialNumber",0x22);
  atexit((_func_5014 *)&LAB_143e4e620);
  return;
}



// FUNCTION 14015eea0 FUN_14015eea0 body=59 status=ok
// SIG undefined FUN_14015eea0(void)

void FUN_14015eea0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298a60,0);
  FGenericPlatformString::Memcpy(DAT_146298a60,L"GenericFailure",0x1e);
  atexit((_func_5014 *)&LAB_143e4e640);
  return;
}



// FUNCTION 14015eee0 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462988c0,0);
  FGenericPlatformString::Memcpy(DAT_1462988c0,L"GrenadeJsonData",0x20);
  atexit((_func_5014 *)&LAB_143e4e660);
  return;
}



// FUNCTION 14015ef20 FUN_14015ef20 body=59 status=ok
// SIG undefined FUN_14015ef20(void)

void FUN_14015ef20(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298840,0);
  FGenericPlatformString::Memcpy(DAT_146298840,L"GrenadeSerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e4e680);
  return;
}



// FUNCTION 14015ef60 FUN_14015ef60 body=59 status=ok
// SIG undefined FUN_14015ef60(void)

void FUN_14015ef60(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298c88,0);
  FGenericPlatformString::Memcpy(DAT_146298c88,L"GuardianRank",0x1a);
  atexit((_func_5014 *)&LAB_143e4e6a0);
  return;
}



// FUNCTION 14015efa0 FUN_14015efa0 body=59 status=ok
// SIG undefined FUN_14015efa0(void)

void FUN_14015efa0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462987e0,0);
  FGenericPlatformString::Memcpy(DAT_1462987e0,L"GuardianRank",0x1a);
  atexit((_func_5014 *)&LAB_143e4e6c0);
  return;
}



// FUNCTION 14015efe0 FUN_14015efe0 body=59 status=ok
// SIG undefined FUN_14015efe0(void)

void FUN_14015efe0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462987c0,0);
  FGenericPlatformString::Memcpy(DAT_1462987c0,L"HasSelectedCharacter",0x2a);
  atexit((_func_5014 *)&LAB_143e4e6e0);
  return;
}



// FUNCTION 14015f020 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298900,0);
  FGenericPlatformString::Memcpy(DAT_146298900,L"HeadCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e4e700);
  return;
}



// FUNCTION 14015f060 FUN_14015f060 body=59 status=ok
// SIG undefined FUN_14015f060(void)

void FUN_14015f060(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298cf8,0);
  FGenericPlatformString::Memcpy(DAT_146298cf8,L"Heroic",0xe);
  atexit((_func_5014 *)&LAB_143e4e720);
  return;
}



// FUNCTION 14015f100 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298ca8,0);
  FGenericPlatformString::Memcpy(DAT_146298ca8,L"HunterStatGroupPoints",0x2c);
  atexit((_func_5014 *)&LAB_143e4e740);
  return;
}



// FUNCTION 14015f170 FUN_14015f170 body=59 status=ok
// SIG undefined FUN_14015f170(void)

void FUN_14015f170(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298a80,0);
  FGenericPlatformString::Memcpy(DAT_146298a80,L"InvalidClientBeaconType",0x30);
  atexit((_func_5014 *)&LAB_143e4e760);
  return;
}



// FUNCTION 14015f290 FUN_14015f290 body=59 status=ok
// SIG undefined FUN_14015f290(void)

void FUN_14015f290(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298d18,0);
  FGenericPlatformString::Memcpy(DAT_146298d18,L"KillCount",0x14);
  atexit((_func_5014 *)&LAB_143e4e790);
  return;
}



// FUNCTION 14015f340 FUN_14015f340 body=59 status=ok
// SIG undefined FUN_14015f340(void)

void FUN_14015f340(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298b28,0);
  FGenericPlatformString::Memcpy(DAT_146298b28,L"Level",0xc);
  atexit((_func_5014 *)&LAB_143e4e7d0);
  return;
}



// FUNCTION 14015f380 FUN_14015f380 body=59 status=ok
// SIG undefined FUN_14015f380(void)

void FUN_14015f380(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298710,0);
  FGenericPlatformString::Memcpy(DAT_146298710,L"Level",0xc);
  atexit((_func_5014 *)&LAB_143e4e7f0);
  return;
}



// FUNCTION 14015f3c0 FUN_14015f3c0 body=59 status=ok
// SIG undefined FUN_14015f3c0(void)

void FUN_14015f3c0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298d38,0);
  FGenericPlatformString::Memcpy(DAT_146298d38,L"Liked",0xc);
  atexit((_func_5014 *)&LAB_143e4e810);
  return;
}



// FUNCTION 14015f400 FUN_14015f400 body=59 status=ok
// SIG undefined FUN_14015f400(void)

void FUN_14015f400(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298d28,0);
  FGenericPlatformString::Memcpy(DAT_146298d28,L"LikedEventGuid",0x1e);
  atexit((_func_5014 *)&LAB_143e4e830);
  return;
}



// FUNCTION 14015f440 FUN_14015f440 body=59 status=ok
// SIG undefined FUN_14015f440(void)

void FUN_14015f440(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298d58,0);
  FGenericPlatformString::Memcpy(DAT_146298d58,&DAT_14431adfc,4);
  atexit((_func_5014 *)&LAB_143e4e850);
  return;
}



// FUNCTION 14015f480 FUN_14015f480 body=59 status=ok
// SIG undefined FUN_14015f480(void)

void FUN_14015f480(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298770,0);
  FGenericPlatformString::Memcpy(DAT_146298770,L"LocationX",0x14);
  atexit((_func_5014 *)&LAB_143e4e870);
  return;
}



// FUNCTION 14015f4c0 FUN_14015f4c0 body=59 status=ok
// SIG undefined FUN_14015f4c0(void)

void FUN_14015f4c0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298d68,0);
  FGenericPlatformString::Memcpy(DAT_146298d68,&DAT_14431aedc,4);
  atexit((_func_5014 *)&LAB_143e4e890);
  return;
}



// FUNCTION 14015f500 FUN_14015f500 body=59 status=ok
// SIG undefined FUN_14015f500(void)

void FUN_14015f500(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298780,0);
  FGenericPlatformString::Memcpy(DAT_146298780,L"LocationY",0x14);
  atexit((_func_5014 *)&LAB_143e4e8b0);
  return;
}



// FUNCTION 14015f540 FUN_14015f540 body=59 status=ok
// SIG undefined FUN_14015f540(void)

void FUN_14015f540(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298d78,0);
  FGenericPlatformString::Memcpy(DAT_146298d78,&DAT_14431b0f4,4);
  atexit((_func_5014 *)&LAB_143e4e8d0);
  return;
}



// FUNCTION 14015f580 FUN_14015f580 body=59 status=ok
// SIG undefined FUN_14015f580(void)

void FUN_14015f580(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298790,0);
  FGenericPlatformString::Memcpy(DAT_146298790,L"LocationZ",0x14);
  atexit((_func_5014 *)&LAB_143e4e8f0);
  return;
}



// FUNCTION 14015f5c0 FUN_14015f5c0 body=59 status=ok
// SIG undefined FUN_14015f5c0(void)

void FUN_14015f5c0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462987b0,0);
  FGenericPlatformString::Memcpy(DAT_1462987b0,L"LookingForHelp",0x1e);
  atexit((_func_5014 *)&LAB_143e4e910);
  return;
}



// FUNCTION 14015f600 FUN_14015f600 body=59 status=ok
// SIG undefined FUN_14015f600(void)

void FUN_14015f600(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298b58,0);
  FGenericPlatformString::Memcpy(DAT_146298b58,L"MapName",0x10);
  atexit((_func_5014 *)&LAB_143e4e930);
  return;
}



// FUNCTION 14015f640 FUN_14015f640 body=59 status=ok
// SIG undefined FUN_14015f640(void)

void FUN_14015f640(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298720,0);
  FGenericPlatformString::Memcpy(DAT_146298720,L"MapName",0x10);
  atexit((_func_5014 *)&LAB_143e4e950);
  return;
}



// FUNCTION 14015f6c0 FUN_14015f6c0 body=59 status=ok
// SIG undefined FUN_14015f6c0(void)

void FUN_14015f6c0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298d08,0);
  FGenericPlatformString::Memcpy(DAT_146298d08,L"Mayhem",0xe);
  atexit((_func_5014 *)&LAB_143e4e970);
  return;
}



// FUNCTION 14015f700 FUN_14015f700 body=59 status=ok
// SIG undefined FUN_14015f700(void)

void FUN_14015f700(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298aa0,0);
  FGenericPlatformString::Memcpy(DAT_146298aa0,L"MismatchedBeaconNetVersions",0x38);
  atexit((_func_5014 *)&LAB_143e4e990);
  return;
}



// FUNCTION 14015f740 FUN_14015f740 body=59 status=ok
// SIG undefined FUN_14015f740(void)

void FUN_14015f740(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298ac0,0);
  FGenericPlatformString::Memcpy(DAT_146298ac0,L"MissingDLC",0x16);
  atexit((_func_5014 *)&LAB_143e4e9b0);
  return;
}



// FUNCTION 14015f780 FUN_14015f780 body=59 status=ok
// SIG undefined FUN_14015f780(void)

void FUN_14015f780(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298ba8,0);
  FGenericPlatformString::Memcpy(DAT_146298ba8,L"MissionHash",0x18);
  atexit((_func_5014 *)&LAB_143e4e9d0);
  return;
}



// FUNCTION 14015f7c0 FUN_14015f7c0 body=59 status=ok
// SIG undefined FUN_14015f7c0(void)

void FUN_14015f7c0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146298760,0);
  FGenericPlatformString::Memcpy(DAT_146298760,L"MissionHash",0x18);
  atexit((_func_5014 *)&LAB_143e4e9f0);
  return;
}


