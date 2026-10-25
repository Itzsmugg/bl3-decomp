// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14018c410 `dynamic_initializer_for_'kResultStringAssetDefAlrealdyLoaded'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kResultStringAssetDefAlrealdyLoaded''(void)

void _dynamic_initializer_for__kResultStringAssetDefAlrealdyLoaded__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fb70,0);
  FGenericPlatformString::Memcpy(DAT_14629fb70,L"ExplorationChallengesCompletion",0x40);
  atexit((_func_5014 *)&LAB_143e5d1d0);
  return;
}



// FUNCTION 14018c4d0 FUN_14018c4d0 body=59 status=ok
// SIG undefined FUN_14018c4d0(void)

void FUN_14018c4d0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629f9a0,0);
  FGenericPlatformString::Memcpy(DAT_14629f9a0,L"FriendActivityStatus",0x2a);
  atexit((_func_5014 *)&LAB_143e5d230);
  return;
}



// FUNCTION 14018c510 FUN_14018c510 body=59 status=ok
// SIG undefined FUN_14018c510(void)

void FUN_14018c510(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fc10,0);
  FGenericPlatformString::Memcpy(DAT_14629fc10,L"ChallengeInfo",0x1c);
  atexit((_func_5014 *)&LAB_143e5d250);
  return;
}



// FUNCTION 14018c550 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fc00,0);
  FGenericPlatformString::Memcpy(DAT_14629fc00,L"FriendCrewQuarterInfo",0x2c);
  atexit((_func_5014 *)&LAB_143e5d270);
  return;
}



// FUNCTION 14018c590 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fbe0,0);
  FGenericPlatformString::Memcpy(DAT_14629fbe0,L"FriendLoadOutInfo",0x24);
  atexit((_func_5014 *)&LAB_143e5d290);
  return;
}



// FUNCTION 14018c5d0 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fbd0,0);
  FGenericPlatformString::Memcpy(DAT_14629fbd0,L"FriendStatusPresenceInfo",0x32);
  atexit((_func_5014 *)&LAB_143e5d2b0);
  return;
}



// FUNCTION 14018c610 FUN_14018c610 body=59 status=ok
// SIG undefined FUN_14018c610(void)

void FUN_14018c610(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fbf0,0);
  FGenericPlatformString::Memcpy(DAT_14629fbf0,L"FriendSkillTreeInfo",0x28);
  atexit((_func_5014 *)&LAB_143e5d2d0);
  return;
}



// FUNCTION 14018c650 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fb20,0);
  FGenericPlatformString::Memcpy(DAT_14629fb20,L"FriendStatusThing",0x24);
  atexit((_func_5014 *)&LAB_143e5d2f0);
  return;
}



// FUNCTION 14018c690 FUN_14018c690 body=237 status=ok
// SIG undefined FUN_14018c690(void)

void FUN_14018c690(void)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  
  if ((DAT_146aeb1c0 != 0) && (DAT_146aeb1c0 != 1)) {
    FUN_14103e3e0(&DAT_146873e60);
    atexit((_func_5014 *)&LAB_143e5d310);
    return;
  }
  plVar2 = (longlong *)FUN_14218de70();
  plVar3 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_GetPoolName_144678770;
    plVar3[1] = (longlong)&DAT_146873e60;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[3] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_1446787b8;
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
  atexit((_func_5014 *)&LAB_143e5d310);
  return;
}



// FUNCTION 14018c780 FUN_14018c780 body=294 status=ok
// SIG undefined FUN_14018c780(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14018c780(void)

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
      *plVar4 = (longlong)&PTR_GetPoolName_144678800;
      plVar4[1] = (longlong)&DAT_146873e30;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[3] = lVar5;
      *plVar4 = (longlong)&PTR_GetPoolName_144678848;
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
    puVar2 = (undefined8 *)FUN_141037370();
    if (puVar2 != &DAT_146873e30) {
      DAT_146873e30 = *puVar2;
      _DAT_146873e38 = puVar2[1];
      _DAT_146873e40 = puVar2[2];
      DAT_146873e48 = puVar2[3];
      DAT_146873e50 = puVar2[4];
      DAT_146873e58 = 1;
      atexit((_func_5014 *)&LAB_143e5d320);
      return;
    }
  }
  atexit((_func_5014 *)&LAB_143e5d320);
  return;
}



// FUNCTION 14018c8b0 FUN_14018c8b0 body=59 status=ok
// SIG undefined FUN_14018c8b0(void)

void FUN_14018c8b0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fb30,0);
  FGenericPlatformString::Memcpy(DAT_14629fb30,L"GameCompletion",0x1e);
  atexit((_func_5014 *)&LAB_143e5d330);
  return;
}



// FUNCTION 14018c8f0 FUN_14018c8f0 body=59 status=ok
// SIG undefined FUN_14018c8f0(void)

void FUN_14018c8f0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fc30,0);
  FGenericPlatformString::Memcpy(DAT_14629fc30,L"GenericFailure",0x1e);
  atexit((_func_5014 *)&LAB_143e5d350);
  return;
}



// FUNCTION 14018c930 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fa90,0);
  FGenericPlatformString::Memcpy(DAT_14629fa90,L"GrenadeJsonData",0x20);
  atexit((_func_5014 *)&LAB_143e5d390);
  return;
}



// FUNCTION 14018c970 FUN_14018c970 body=59 status=ok
// SIG undefined FUN_14018c970(void)

void FUN_14018c970(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fa10,0);
  FGenericPlatformString::Memcpy(DAT_14629fa10,L"GrenadeSerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e5d3b0);
  return;
}



// FUNCTION 14018c9b0 FUN_14018c9b0 body=59 status=ok
// SIG undefined FUN_14018c9b0(void)

void FUN_14018c9b0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629f9b0,0);
  FGenericPlatformString::Memcpy(DAT_14629f9b0,L"GuardianRank",0x1a);
  atexit((_func_5014 *)&LAB_143e5d3d0);
  return;
}



// FUNCTION 14018c9f0 FUN_14018c9f0 body=59 status=ok
// SIG undefined FUN_14018c9f0(void)

void FUN_14018c9f0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629f990,0);
  FGenericPlatformString::Memcpy(DAT_14629f990,L"HasSelectedCharacter",0x2a);
  atexit((_func_5014 *)&LAB_143e5d3f0);
  return;
}



// FUNCTION 14018ca30 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fad0,0);
  FGenericPlatformString::Memcpy(DAT_14629fad0,L"HeadCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e5d410);
  return;
}



// FUNCTION 14018cb00 FUN_14018cb00 body=59 status=ok
// SIG undefined FUN_14018cb00(void)

void FUN_14018cb00(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fc50,0);
  FGenericPlatformString::Memcpy(DAT_14629fc50,L"InvalidClientBeaconType",0x30);
  atexit((_func_5014 *)&LAB_143e5d430);
  return;
}



// FUNCTION 14018cc80 FUN_14018cc80 body=59 status=ok
// SIG undefined FUN_14018cc80(void)

void FUN_14018cc80(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629f8e0,0);
  FGenericPlatformString::Memcpy(DAT_14629f8e0,L"Level",0xc);
  atexit((_func_5014 *)&LAB_143e5d450);
  return;
}



// FUNCTION 14018ccc0 FUN_14018ccc0 body=59 status=ok
// SIG undefined FUN_14018ccc0(void)

void FUN_14018ccc0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629f940,0);
  FGenericPlatformString::Memcpy(DAT_14629f940,L"LocationX",0x14);
  atexit((_func_5014 *)&LAB_143e5d470);
  return;
}



// FUNCTION 14018cd00 FUN_14018cd00 body=59 status=ok
// SIG undefined FUN_14018cd00(void)

void FUN_14018cd00(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629f950,0);
  FGenericPlatformString::Memcpy(DAT_14629f950,L"LocationY",0x14);
  atexit((_func_5014 *)&LAB_143e5d490);
  return;
}



// FUNCTION 14018cd40 FUN_14018cd40 body=59 status=ok
// SIG undefined FUN_14018cd40(void)

void FUN_14018cd40(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629f960,0);
  FGenericPlatformString::Memcpy(DAT_14629f960,L"LocationZ",0x14);
  atexit((_func_5014 *)&LAB_143e5d4b0);
  return;
}



// FUNCTION 14018cd80 FUN_14018cd80 body=59 status=ok
// SIG undefined FUN_14018cd80(void)

void FUN_14018cd80(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629f980,0);
  FGenericPlatformString::Memcpy(DAT_14629f980,L"LookingForHelp",0x1e);
  atexit((_func_5014 *)&LAB_143e5d4d0);
  return;
}



// FUNCTION 14018cdc0 FUN_14018cdc0 body=59 status=ok
// SIG undefined FUN_14018cdc0(void)

void FUN_14018cdc0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629f8f0,0);
  FGenericPlatformString::Memcpy(DAT_14629f8f0,L"MapName",0x10);
  atexit((_func_5014 *)&LAB_143e5d4f0);
  return;
}



// FUNCTION 14018ce40 FUN_14018ce40 body=59 status=ok
// SIG undefined FUN_14018ce40(void)

void FUN_14018ce40(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fc70,0);
  FGenericPlatformString::Memcpy(DAT_14629fc70,L"MismatchedBeaconNetVersions",0x38);
  atexit((_func_5014 *)&LAB_143e5d510);
  return;
}



// FUNCTION 14018ce80 FUN_14018ce80 body=59 status=ok
// SIG undefined FUN_14018ce80(void)

void FUN_14018ce80(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fc90,0);
  FGenericPlatformString::Memcpy(DAT_14629fc90,L"MissingDLC",0x16);
  atexit((_func_5014 *)&LAB_143e5d530);
  return;
}



// FUNCTION 14018cec0 FUN_14018cec0 body=59 status=ok
// SIG undefined FUN_14018cec0(void)

void FUN_14018cec0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629f930,0);
  FGenericPlatformString::Memcpy(DAT_14629f930,L"MissionHash",0x18);
  atexit((_func_5014 *)&LAB_143e5d550);
  return;
}



// FUNCTION 14018d0e0 FUN_14018d0e0 body=59 status=ok
// SIG undefined FUN_14018d0e0(void)

void FUN_14018d0e0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fc20,0);
  FGenericPlatformString::Memcpy(DAT_14629fc20,L"NetworkFailure",0x1e);
  atexit((_func_5014 *)&LAB_143e5d5b0);
  return;
}



// FUNCTION 14018d160 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fc40,0);
  FGenericPlatformString::Memcpy(DAT_14629fc40,L"NotAcceptingReservations",0x32);
  atexit((_func_5014 *)&LAB_143e5d5d0);
  return;
}



// FUNCTION 14018d1c0 FUN_14018d1c0 body=59 status=ok
// SIG undefined FUN_14018d1c0(void)

void FUN_14018d1c0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629f910,0);
  FGenericPlatformString::Memcpy(DAT_14629f910,L"PartyPlayerCount",0x22);
  atexit((_func_5014 *)&LAB_143e5d5f0);
  return;
}



// FUNCTION 14018d2e0 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629f920,0);
  FGenericPlatformString::Memcpy(DAT_14629f920,L"PlayerClassIdentifierHash",0x34);
  atexit((_func_5014 *)&LAB_143e5d630);
  return;
}



// FUNCTION 14018d320 FUN_14018d320 body=59 status=ok
// SIG undefined FUN_14018d320(void)

void FUN_14018d320(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fbb0,0);
  FGenericPlatformString::Memcpy(DAT_14629fbb0,L"PlayerId",0x12);
  atexit((_func_5014 *)&LAB_143e5d650);
  return;
}



// FUNCTION 14018d420 LocalizationSourceControlSettingsCategoryName'' body=59 status=ok
// SIG undefined LocalizationSourceControlSettingsCategoryName''(void)

void `dynamic_initializer_for_'FLocalizationSourceControlSettings::
     LocalizationSourceControlSettingsCategoryName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fb80,0);
  FGenericPlatformString::Memcpy(DAT_14629fb80,L"ProvingGroundChallengesCompletion",0x44);
  atexit((_func_5014 *)&LAB_143e5d670);
  return;
}



// FUNCTION 14018d4a0 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fba0,0);
  FGenericPlatformString::Memcpy(DAT_14629fba0,L"RaidChallengesCompletion",0x32);
  atexit((_func_5014 *)&LAB_143e5d6e0);
  return;
}



// FUNCTION 14018d520 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629f8a0,0);
  FGenericPlatformString::Memcpy(DAT_14629f8a0,L"<img src=\"%s\"></>",0x24);
  atexit((_func_5014 *)&LAB_143e5d700);
  return;
}



// FUNCTION 14018d6e0 FUN_14018d6e0 body=59 status=ok
// SIG undefined FUN_14018d6e0(void)

void FUN_14018d6e0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629f900,0);
  FGenericPlatformString::Memcpy(DAT_14629f900,L"SessionId",0x14);
  atexit((_func_5014 *)&LAB_143e5d740);
  return;
}



// FUNCTION 14018d720 FUN_14018d720 body=59 status=ok
// SIG undefined FUN_14018d720(void)

void FUN_14018d720(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629faa0,0);
  FGenericPlatformString::Memcpy(DAT_14629faa0,L"ShieldJsonData",0x1e);
  atexit((_func_5014 *)&LAB_143e5d760);
  return;
}



// FUNCTION 14018d760 `dynamic_initializer_for_'StatusStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'StatusStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__StatusStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fa20,0);
  FGenericPlatformString::Memcpy(DAT_14629fa20,L"ShieldSerialNumber",0x26);
  atexit((_func_5014 *)&LAB_143e5d780);
  return;
}



// FUNCTION 14018d7c0 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629faf0,0);
  FGenericPlatformString::Memcpy(DAT_14629faf0,L"SkinCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e5d7a0);
  return;
}



// FUNCTION 14018d800 FUN_14018d800 body=59 status=ok
// SIG undefined FUN_14018d800(void)

void FUN_14018d800(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fb90,0);
  FGenericPlatformString::Memcpy(DAT_14629fb90,L"SlaughterChallengesCompletion",0x3c);
  atexit((_func_5014 *)&LAB_143e5d7c0);
  return;
}



// FUNCTION 14018d8f0 FUN_14018d8f0 body=59 status=ok
// SIG undefined FUN_14018d8f0(void)

void FUN_14018d8f0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629f9c0,0);
  FGenericPlatformString::Memcpy(DAT_14629f9c0,L"TimePlayed",0x16);
  atexit((_func_5014 *)&LAB_143e5d960);
  return;
}



// FUNCTION 14018d950 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fc80,0);
  FGenericPlatformString::Memcpy(DAT_14629fc80,L"UnexpectedControlMessage",0x32);
  atexit((_func_5014 *)&LAB_143e5d9d0);
  return;
}



// FUNCTION 14018da10 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629f808,0);
  FGenericPlatformString::Memcpy(DAT_14629f808,&DAT_14466b8d0,8);
  atexit((_func_5014 *)&LAB_143e5d9f0);
  return;
}



// FUNCTION 14018da50 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fa50,0);
  FGenericPlatformString::Memcpy(DAT_14629fa50,L"Weapon1JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e5da10);
  return;
}



// FUNCTION 14018da90 FUN_14018da90 body=59 status=ok
// SIG undefined FUN_14018da90(void)

void FUN_14018da90(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629f9d0,0);
  FGenericPlatformString::Memcpy(DAT_14629f9d0,L"Weapon1SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e5da30);
  return;
}



// FUNCTION 14018dad0 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fa60,0);
  FGenericPlatformString::Memcpy(DAT_14629fa60,L"Weapon2JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e5da50);
  return;
}



// FUNCTION 14018db10 FUN_14018db10 body=59 status=ok
// SIG undefined FUN_14018db10(void)

void FUN_14018db10(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629f9e0,0);
  FGenericPlatformString::Memcpy(DAT_14629f9e0,L"Weapon2SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e5da70);
  return;
}



// FUNCTION 14018db50 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fa70,0);
  FGenericPlatformString::Memcpy(DAT_14629fa70,L"Weapon3JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e5da90);
  return;
}



// FUNCTION 14018db90 FUN_14018db90 body=59 status=ok
// SIG undefined FUN_14018db90(void)

void FUN_14018db90(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629f9f0,0);
  FGenericPlatformString::Memcpy(DAT_14629f9f0,L"Weapon3SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e5dab0);
  return;
}



// FUNCTION 14018dbd0 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fa80,0);
  FGenericPlatformString::Memcpy(DAT_14629fa80,L"Weapon4JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e5dad0);
  return;
}



// FUNCTION 14018dc10 FUN_14018dc10 body=59 status=ok
// SIG undefined FUN_14018dc10(void)

void FUN_14018dc10(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fa00,0);
  FGenericPlatformString::Memcpy(DAT_14629fa00,L"Weapon4SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e5daf0);
  return;
}



// FUNCTION 14018dc50 FUN_14018dc50 body=59 status=ok
// SIG undefined FUN_14018dc50(void)

void FUN_14018dc50(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fb40,0);
  FGenericPlatformString::Memcpy(DAT_14629fb40,L"WeaponChallengesCompletion",0x36);
  atexit((_func_5014 *)&LAB_143e5db10);
  return;
}



// FUNCTION 14018dd70 EOL_String'' body=115 status=ok
// SIG undefined EOL_String''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FDlgConfigWriter::EOL_String__(void)

{
  undefined *puVar1;
  int iVar2;
  longlong lVar3;
  
  puVar1 = PTR_DAT_14629f7f0;
  if ((PTR_DAT_14629f7f0 != (undefined *)0x0) && (*(short *)PTR_DAT_14629f7f0 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(short *)(PTR_DAT_14629f7f0 + lVar3 * 2) != 0);
    iVar2 = (int)lVar3 + 1;
    _DAT_146873d88 = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146873d80,0);
    }
    FGenericPlatformString::Memcpy(DAT_146873d80,puVar1,(longlong)iVar2 * 2);
  }
  atexit((_func_5014 *)&LAB_143e5db30);
  return;
}



// FUNCTION 14018def0 FUN_14018def0 body=53 status=ok
// SIG undefined FUN_14018def0(void)

void FUN_14018def0(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_146874960,L"{0}% COMPLETE",L"GFxTrophyCaseMenu",L"PercentComplete");
  atexit(FUN_143e5db50);
  return;
}



// FUNCTION 14018df30 FUN_14018df30 body=59 status=ok
// SIG undefined FUN_14018df30(void)

void FUN_14018df30(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a00b0,0);
  FGenericPlatformString::Memcpy(DAT_1462a00b0,L"AbilityData",0x18);
  atexit((_func_5014 *)&LAB_143e5dba0);
  return;
}



// FUNCTION 14018e010 FUN_14018e010 body=59 status=ok
// SIG undefined FUN_14018e010(void)

void FUN_14018e010(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0060,0);
  FGenericPlatformString::Memcpy(DAT_1462a0060,L"ArtifactJsonData",0x22);
  atexit((_func_5014 *)&LAB_143e5dc00);
  return;
}



// FUNCTION 14018e050 FUN_14018e050 body=59 status=ok
// SIG undefined FUN_14018e050(void)

void FUN_14018e050(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ffe0,0);
  FGenericPlatformString::Memcpy(DAT_14629ffe0,L"ArtifactSerialNumber",0x2a);
  atexit((_func_5014 *)&LAB_143e5dc20);
  return;
}



// FUNCTION 14018e090 `dynamic_initializer_for_'AwayText'' body=53 status=ok
// SIG undefined `dynamic_initializer_for_'AwayText''(void)

void EOnlinePresenceState::_dynamic_initializer_for__AwayText__(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_1468749c8,L"Away",L"OnlinePresence",L"Away");
  atexit(FUN_143e5dc40);
  return;
}



// FUNCTION 14018e0d0 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0080,0);
  FGenericPlatformString::Memcpy(DAT_1462a0080,L"BodyCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e5dc90);
  return;
}



// FUNCTION 14018e110 FUN_14018e110 body=117 status=ok
// SIG undefined FUN_14018e110(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14018e110(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146874980 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"GFxVendingMachine.DefaultSplitscreenAdvanceDelayModifier",
                  0x40000000,
                  L"If in splitscreen, this modifier is applied to the delay between Advance calls as a scalar (e.g. 2.0 will result in delays being twice as long)"
                  ,0);
  _DAT_146874978 = &PTR_FUN_143f3ecf8;
  DAT_146874988 = (**(code **)(*DAT_146874980 + 0x40))(DAT_146874980);
  atexit(FUN_143e5dcb0);
  return;
}



// FUNCTION 14018e190 FUN_14018e190 body=59 status=ok
// SIG undefined FUN_14018e190(void)

void FUN_14018e190(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ff10,0);
  FGenericPlatformString::Memcpy(DAT_14629ff10,L"CanJoin",0x10);
  atexit((_func_5014 *)&LAB_143e5dd00);
  return;
}



// FUNCTION 14018e210 `dynamic_initializer_for_'ChatText'' body=53 status=ok
// SIG undefined `dynamic_initializer_for_'ChatText''(void)

void EOnlinePresenceState::_dynamic_initializer_for__ChatText__(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_146874a10,L"Chat",L"OnlinePresence",L"Chat");
  atexit(FUN_143e5dd20);
  return;
}



// FUNCTION 14018e250 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0050,0);
  FGenericPlatformString::Memcpy(DAT_1462a0050,L"ClassItemJsonData",0x24);
  atexit((_func_5014 *)&LAB_143e5dd70);
  return;
}



// FUNCTION 14018e290 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ffd0,0);
  FGenericPlatformString::Memcpy(DAT_14629ffd0,L"ClassItemSerialNumber",0x2c);
  atexit((_func_5014 *)&LAB_143e5dd90);
  return;
}



// FUNCTION 14018e310 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0100,0);
  FGenericPlatformString::Memcpy(DAT_1462a0100,L"CrewChallengesCompletion",0x32);
  atexit((_func_5014 *)&LAB_143e5ddd0);
  return;
}



// FUNCTION 14018e390 FUN_14018e390 body=59 status=ok
// SIG undefined FUN_14018e390(void)

void FUN_14018e390(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0160,0);
  FGenericPlatformString::Memcpy(DAT_1462a0160,L"DateTime",0x12);
  atexit((_func_5014 *)&LAB_143e5ddf0);
  return;
}



// FUNCTION 14018e3f0 `dynamic_initializer_for_'DefaultAppIdKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'DefaultAppIdKey''(void)

void _dynamic_initializer_for__DefaultAppIdKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0260,0);
  FGenericPlatformString::Memcpy(DAT_1462a0260,L"AppId",0xc);
  atexit((_func_5014 *)&LAB_143e5de10);
  return;
}



// FUNCTION 14018e430 `dynamic_initializer_for_'DefaultPlatformKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'DefaultPlatformKey''(void)

void _dynamic_initializer_for__DefaultPlatformKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0270,0);
  FGenericPlatformString::Memcpy(DAT_1462a0270,L"Platform",0x12);
  atexit((_func_5014 *)&LAB_143e5de30);
  return;
}



// FUNCTION 14018e470 `dynamic_initializer_for_'DefaultPresenceKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'DefaultPresenceKey''(void)

void _dynamic_initializer_for__DefaultPresenceKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0250,0);
  FGenericPlatformString::Memcpy(DAT_1462a0250,L"RichPresence",0x1a);
  atexit((_func_5014 *)&LAB_143e5de50);
  return;
}



// FUNCTION 14018e550 `dynamic_initializer_for_'DoNotDisturbText'' body=53 status=ok
// SIG undefined `dynamic_initializer_for_'DoNotDisturbText''(void)

void EOnlinePresenceState::_dynamic_initializer_for__DoNotDisturbText__(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_1468749f8,L"DoNotDisturb",L"OnlinePresence",L"DoNotDisturb");
  atexit(FUN_143e5de70);
  return;
}



// FUNCTION 14018e5b0 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0200,0);
  FGenericPlatformString::Memcpy(DAT_1462a0200,L"DuplicateReservationFound",0x34);
  atexit((_func_5014 *)&LAB_143e5dec0);
  return;
}



// FUNCTION 14018e5f0 `dynamic_initializer_for_'kResultStringCannotLoadPreset'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kResultStringCannotLoadPreset''(void)

void _dynamic_initializer_for__kResultStringCannotLoadPreset__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a00a0,0);
  FGenericPlatformString::Memcpy(DAT_1462a00a0,L"EmoteCustomizationHash",0x2e);
  atexit((_func_5014 *)&LAB_143e5dee0);
  return;
}



// FUNCTION 14018e630 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a00f0,0);
  FGenericPlatformString::Memcpy(DAT_1462a00f0,L"EnemyChallengesCompletion",0x34);
  atexit((_func_5014 *)&LAB_143e5df00);
  return;
}



// FUNCTION 14018e6b0 `dynamic_initializer_for_'kResultStringAssetDefAlrealdyLoaded'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kResultStringAssetDefAlrealdyLoaded''(void)

void _dynamic_initializer_for__kResultStringAssetDefAlrealdyLoaded__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0110,0);
  FGenericPlatformString::Memcpy(DAT_1462a0110,L"ExplorationChallengesCompletion",0x40);
  atexit((_func_5014 *)&LAB_143e5df20);
  return;
}



// FUNCTION 14018e6f0 `dynamic_initializer_for_'ExtendedAwayText'' body=53 status=ok
// SIG undefined `dynamic_initializer_for_'ExtendedAwayText''(void)

void EOnlinePresenceState::_dynamic_initializer_for__ExtendedAwayText__(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_1468749e0,L"ExtendedAway",L"OnlinePresence",L"ExtendedAway");
  atexit(FUN_143e5df40);
  return;
}



// FUNCTION 14018e7b0 FUN_14018e7b0 body=59 status=ok
// SIG undefined FUN_14018e7b0(void)

void FUN_14018e7b0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ff40,0);
  FGenericPlatformString::Memcpy(DAT_14629ff40,L"FriendActivityStatus",0x2a);
  atexit((_func_5014 *)&LAB_143e5df90);
  return;
}



// FUNCTION 14018e7f0 FUN_14018e7f0 body=59 status=ok
// SIG undefined FUN_14018e7f0(void)

void FUN_14018e7f0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a01b0,0);
  FGenericPlatformString::Memcpy(DAT_1462a01b0,L"ChallengeInfo",0x1c);
  atexit((_func_5014 *)&LAB_143e5dfb0);
  return;
}



// FUNCTION 14018e830 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a01a0,0);
  FGenericPlatformString::Memcpy(DAT_1462a01a0,L"FriendCrewQuarterInfo",0x2c);
  atexit((_func_5014 *)&LAB_143e5dfd0);
  return;
}



// FUNCTION 14018e870 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0180,0);
  FGenericPlatformString::Memcpy(DAT_1462a0180,L"FriendLoadOutInfo",0x24);
  atexit((_func_5014 *)&LAB_143e5dff0);
  return;
}



// FUNCTION 14018e8b0 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0170,0);
  FGenericPlatformString::Memcpy(DAT_1462a0170,L"FriendStatusPresenceInfo",0x32);
  atexit((_func_5014 *)&LAB_143e5e010);
  return;
}



// FUNCTION 14018e8f0 FUN_14018e8f0 body=59 status=ok
// SIG undefined FUN_14018e8f0(void)

void FUN_14018e8f0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0190,0);
  FGenericPlatformString::Memcpy(DAT_1462a0190,L"FriendSkillTreeInfo",0x28);
  atexit((_func_5014 *)&LAB_143e5e030);
  return;
}



// FUNCTION 14018e930 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a00c0,0);
  FGenericPlatformString::Memcpy(DAT_1462a00c0,L"FriendStatusThing",0x24);
  atexit((_func_5014 *)&LAB_143e5e050);
  return;
}



// FUNCTION 14018e970 FUN_14018e970 body=59 status=ok
// SIG undefined FUN_14018e970(void)

void FUN_14018e970(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a00d0,0);
  FGenericPlatformString::Memcpy(DAT_1462a00d0,L"GameCompletion",0x1e);
  atexit((_func_5014 *)&LAB_143e5e070);
  return;
}



// FUNCTION 14018e9b0 FUN_14018e9b0 body=59 status=ok
// SIG undefined FUN_14018e9b0(void)

void FUN_14018e9b0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a01d0,0);
  FGenericPlatformString::Memcpy(DAT_1462a01d0,L"GenericFailure",0x1e);
  atexit((_func_5014 *)&LAB_143e5e090);
  return;
}



// FUNCTION 14018e9f0 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0030,0);
  FGenericPlatformString::Memcpy(DAT_1462a0030,L"GrenadeJsonData",0x20);
  atexit((_func_5014 *)&LAB_143e5e0b0);
  return;
}



// FUNCTION 14018ea30 FUN_14018ea30 body=59 status=ok
// SIG undefined FUN_14018ea30(void)

void FUN_14018ea30(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ffb0,0);
  FGenericPlatformString::Memcpy(DAT_14629ffb0,L"GrenadeSerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e5e0d0);
  return;
}



// FUNCTION 14018ea70 FUN_14018ea70 body=59 status=ok
// SIG undefined FUN_14018ea70(void)

void FUN_14018ea70(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ff50,0);
  FGenericPlatformString::Memcpy(DAT_14629ff50,L"GuardianRank",0x1a);
  atexit((_func_5014 *)&LAB_143e5e0f0);
  return;
}



// FUNCTION 14018eab0 FUN_14018eab0 body=59 status=ok
// SIG undefined FUN_14018eab0(void)

void FUN_14018eab0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ff30,0);
  FGenericPlatformString::Memcpy(DAT_14629ff30,L"HasSelectedCharacter",0x2a);
  atexit((_func_5014 *)&LAB_143e5e110);
  return;
}



// FUNCTION 14018eaf0 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0070,0);
  FGenericPlatformString::Memcpy(DAT_1462a0070,L"HeadCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e5e130);
  return;
}



// FUNCTION 14018ebc0 FUN_14018ebc0 body=59 status=ok
// SIG undefined FUN_14018ebc0(void)

void FUN_14018ebc0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a01f0,0);
  FGenericPlatformString::Memcpy(DAT_1462a01f0,L"InvalidClientBeaconType",0x30);
  atexit((_func_5014 *)&LAB_143e5e170);
  return;
}



// FUNCTION 14018ed40 FUN_14018ed40 body=59 status=ok
// SIG undefined FUN_14018ed40(void)

void FUN_14018ed40(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fe80,0);
  FGenericPlatformString::Memcpy(DAT_14629fe80,L"Level",0xc);
  atexit((_func_5014 *)&LAB_143e5e1b0);
  return;
}



// FUNCTION 14018ed80 FUN_14018ed80 body=59 status=ok
// SIG undefined FUN_14018ed80(void)

void FUN_14018ed80(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0240,0);
  FGenericPlatformString::Memcpy(DAT_1462a0240,&DAT_14467a8dc,4);
  atexit((_func_5014 *)&LAB_143e5e1d0);
  return;
}



// FUNCTION 14018edc0 FUN_14018edc0 body=59 status=ok
// SIG undefined FUN_14018edc0(void)

void FUN_14018edc0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fee0,0);
  FGenericPlatformString::Memcpy(DAT_14629fee0,L"LocationX",0x14);
  atexit((_func_5014 *)&LAB_143e5e240);
  return;
}



// FUNCTION 14018ee00 FUN_14018ee00 body=59 status=ok
// SIG undefined FUN_14018ee00(void)

void FUN_14018ee00(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fef0,0);
  FGenericPlatformString::Memcpy(DAT_14629fef0,L"LocationY",0x14);
  atexit((_func_5014 *)&LAB_143e5e260);
  return;
}



// FUNCTION 14018ee40 FUN_14018ee40 body=59 status=ok
// SIG undefined FUN_14018ee40(void)

void FUN_14018ee40(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ff00,0);
  FGenericPlatformString::Memcpy(DAT_14629ff00,L"LocationZ",0x14);
  atexit((_func_5014 *)&LAB_143e5e280);
  return;
}



// FUNCTION 14018ee80 FUN_14018ee80 body=59 status=ok
// SIG undefined FUN_14018ee80(void)

void FUN_14018ee80(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ff20,0);
  FGenericPlatformString::Memcpy(DAT_14629ff20,L"LookingForHelp",0x1e);
  atexit((_func_5014 *)&LAB_143e5e2a0);
  return;
}



// FUNCTION 14018eec0 FUN_14018eec0 body=59 status=ok
// SIG undefined FUN_14018eec0(void)

void FUN_14018eec0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fe90,0);
  FGenericPlatformString::Memcpy(DAT_14629fe90,L"MapName",0x10);
  atexit((_func_5014 *)&LAB_143e5e2c0);
  return;
}



// FUNCTION 14018ef40 FUN_14018ef40 body=59 status=ok
// SIG undefined FUN_14018ef40(void)

void FUN_14018ef40(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0210,0);
  FGenericPlatformString::Memcpy(DAT_1462a0210,L"MismatchedBeaconNetVersions",0x38);
  atexit((_func_5014 *)&LAB_143e5e300);
  return;
}



// FUNCTION 14018ef80 FUN_14018ef80 body=59 status=ok
// SIG undefined FUN_14018ef80(void)

void FUN_14018ef80(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0230,0);
  FGenericPlatformString::Memcpy(DAT_1462a0230,L"MissingDLC",0x16);
  atexit((_func_5014 *)&LAB_143e5e320);
  return;
}



// FUNCTION 14018efc0 FUN_14018efc0 body=59 status=ok
// SIG undefined FUN_14018efc0(void)

void FUN_14018efc0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fed0,0);
  FGenericPlatformString::Memcpy(DAT_14629fed0,L"MissionHash",0x18);
  atexit((_func_5014 *)&LAB_143e5e340);
  return;
}



// FUNCTION 14018f200 FUN_14018f200 body=59 status=ok
// SIG undefined FUN_14018f200(void)

void FUN_14018f200(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a01c0,0);
  FGenericPlatformString::Memcpy(DAT_1462a01c0,L"NetworkFailure",0x1e);
  atexit((_func_5014 *)&LAB_143e5e360);
  return;
}



// FUNCTION 14018f280 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a01e0,0);
  FGenericPlatformString::Memcpy(DAT_1462a01e0,L"NotAcceptingReservations",0x32);
  atexit((_func_5014 *)&LAB_143e5e3c0);
  return;
}



// FUNCTION 14018f2c0 `dynamic_initializer_for_'OfflineText'' body=53 status=ok
// SIG undefined `dynamic_initializer_for_'OfflineText''(void)

void EOnlinePresenceState::_dynamic_initializer_for__OfflineText__(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_1468749b0,L"Offline",L"OnlinePresence",L"Offline");
  atexit(FUN_143e5e400);
  return;
}



// FUNCTION 14018f300 `dynamic_initializer_for_'OnlineText'' body=53 status=ok
// SIG undefined `dynamic_initializer_for_'OnlineText''(void)

void EOnlinePresenceState::_dynamic_initializer_for__OnlineText__(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_146874998,L"Online",L"OnlinePresence",L"Online");
  atexit(FUN_143e5e450);
  return;
}



// FUNCTION 14018f360 FUN_14018f360 body=59 status=ok
// SIG undefined FUN_14018f360(void)

void FUN_14018f360(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629feb0,0);
  FGenericPlatformString::Memcpy(DAT_14629feb0,L"PartyPlayerCount",0x22);
  atexit((_func_5014 *)&LAB_143e5e4a0);
  return;
}



// FUNCTION 14018f480 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fec0,0);
  FGenericPlatformString::Memcpy(DAT_14629fec0,L"PlayerClassIdentifierHash",0x34);
  atexit((_func_5014 *)&LAB_143e5e4c0);
  return;
}



// FUNCTION 14018f4c0 FUN_14018f4c0 body=59 status=ok
// SIG undefined FUN_14018f4c0(void)

void FUN_14018f4c0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0150,0);
  FGenericPlatformString::Memcpy(DAT_1462a0150,L"PlayerId",0x12);
  atexit((_func_5014 *)&LAB_143e5e4e0);
  return;
}



// FUNCTION 14018f500 `dynamic_initializer_for_'PresenceResourceKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PresenceResourceKey''(void)

void _dynamic_initializer_for__PresenceResourceKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0280,0);
  FGenericPlatformString::Memcpy(DAT_1462a0280,L"ResourceKey",0x18);
  atexit((_func_5014 *)&LAB_143e5e500);
  return;
}



// FUNCTION 14018f600 LocalizationSourceControlSettingsCategoryName'' body=59 status=ok
// SIG undefined LocalizationSourceControlSettingsCategoryName''(void)

void `dynamic_initializer_for_'FLocalizationSourceControlSettings::
     LocalizationSourceControlSettingsCategoryName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0120,0);
  FGenericPlatformString::Memcpy(DAT_1462a0120,L"ProvingGroundChallengesCompletion",0x44);
  atexit((_func_5014 *)&LAB_143e5e520);
  return;
}



// FUNCTION 14018f680 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0140,0);
  FGenericPlatformString::Memcpy(DAT_1462a0140,L"RaidChallengesCompletion",0x32);
  atexit((_func_5014 *)&LAB_143e5e540);
  return;
}



// FUNCTION 14018f700 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fe40,0);
  FGenericPlatformString::Memcpy(DAT_14629fe40,L"<img src=\"%s\"></>",0x24);
  atexit((_func_5014 *)&LAB_143e5e560);
  return;
}



// FUNCTION 14018f8c0 FUN_14018f8c0 body=59 status=ok
// SIG undefined FUN_14018f8c0(void)

void FUN_14018f8c0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fea0,0);
  FGenericPlatformString::Memcpy(DAT_14629fea0,L"SessionId",0x14);
  atexit((_func_5014 *)&LAB_143e5e5c0);
  return;
}



// FUNCTION 14018f900 FUN_14018f900 body=59 status=ok
// SIG undefined FUN_14018f900(void)

void FUN_14018f900(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0040,0);
  FGenericPlatformString::Memcpy(DAT_1462a0040,L"ShieldJsonData",0x1e);
  atexit((_func_5014 *)&LAB_143e5e5e0);
  return;
}



// FUNCTION 14018f940 `dynamic_initializer_for_'StatusStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'StatusStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__StatusStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ffc0,0);
  FGenericPlatformString::Memcpy(DAT_14629ffc0,L"ShieldSerialNumber",0x26);
  atexit((_func_5014 *)&LAB_143e5e600);
  return;
}



// FUNCTION 14018f9a0 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0090,0);
  FGenericPlatformString::Memcpy(DAT_1462a0090,L"SkinCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e5e620);
  return;
}



// FUNCTION 14018f9e0 FUN_14018f9e0 body=59 status=ok
// SIG undefined FUN_14018f9e0(void)

void FUN_14018f9e0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0130,0);
  FGenericPlatformString::Memcpy(DAT_1462a0130,L"SlaughterChallengesCompletion",0x3c);
  atexit((_func_5014 *)&LAB_143e5e640);
  return;
}



// FUNCTION 14018fad0 FUN_14018fad0 body=59 status=ok
// SIG undefined FUN_14018fad0(void)

void FUN_14018fad0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ff60,0);
  FGenericPlatformString::Memcpy(DAT_14629ff60,L"TimePlayed",0x16);
  atexit((_func_5014 *)&LAB_143e5e680);
  return;
}



// FUNCTION 14018fb50 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0220,0);
  FGenericPlatformString::Memcpy(DAT_1462a0220,L"UnexpectedControlMessage",0x32);
  atexit((_func_5014 *)&LAB_143e5e6c0);
  return;
}



// FUNCTION 14018fc10 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fd88,0);
  FGenericPlatformString::Memcpy(DAT_14629fd88,&DAT_14468afb0,8);
  atexit((_func_5014 *)&LAB_143e5e6e0);
  return;
}



// FUNCTION 14018fc50 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fff0,0);
  FGenericPlatformString::Memcpy(DAT_14629fff0,L"Weapon1JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e5e700);
  return;
}



// FUNCTION 14018fc90 FUN_14018fc90 body=59 status=ok
// SIG undefined FUN_14018fc90(void)

void FUN_14018fc90(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ff70,0);
  FGenericPlatformString::Memcpy(DAT_14629ff70,L"Weapon1SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e5e720);
  return;
}



// FUNCTION 14018fcd0 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0000,0);
  FGenericPlatformString::Memcpy(DAT_1462a0000,L"Weapon2JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e5e740);
  return;
}



// FUNCTION 14018fd10 FUN_14018fd10 body=59 status=ok
// SIG undefined FUN_14018fd10(void)

void FUN_14018fd10(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ff80,0);
  FGenericPlatformString::Memcpy(DAT_14629ff80,L"Weapon2SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e5e760);
  return;
}



// FUNCTION 14018fd50 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0010,0);
  FGenericPlatformString::Memcpy(DAT_1462a0010,L"Weapon3JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e5e780);
  return;
}



// FUNCTION 14018fd90 FUN_14018fd90 body=59 status=ok
// SIG undefined FUN_14018fd90(void)

void FUN_14018fd90(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ff90,0);
  FGenericPlatformString::Memcpy(DAT_14629ff90,L"Weapon3SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e5e7a0);
  return;
}



// FUNCTION 14018fdd0 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0020,0);
  FGenericPlatformString::Memcpy(DAT_1462a0020,L"Weapon4JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e5e7c0);
  return;
}



// FUNCTION 14018fe10 FUN_14018fe10 body=59 status=ok
// SIG undefined FUN_14018fe10(void)

void FUN_14018fe10(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ffa0,0);
  FGenericPlatformString::Memcpy(DAT_14629ffa0,L"Weapon4SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e5e7e0);
  return;
}



// FUNCTION 14018fe50 FUN_14018fe50 body=59 status=ok
// SIG undefined FUN_14018fe50(void)

void FUN_14018fe50(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a00e0,0);
  FGenericPlatformString::Memcpy(DAT_1462a00e0,L"WeaponChallengesCompletion",0x36);
  atexit((_func_5014 *)&LAB_143e5e800);
  return;
}



// FUNCTION 14018ff10 EOL_String'' body=115 status=ok
// SIG undefined EOL_String''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FDlgConfigWriter::EOL_String__(void)

{
  undefined *puVar1;
  int iVar2;
  longlong lVar3;
  
  puVar1 = PTR_DAT_14629fd70;
  if ((PTR_DAT_14629fd70 != (undefined *)0x0) && (*(short *)PTR_DAT_14629fd70 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(short *)(PTR_DAT_14629fd70 + lVar3 * 2) != 0);
    iVar2 = (int)lVar3 + 1;
    _DAT_146874918 = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146874910,0);
    }
    FGenericPlatformString::Memcpy(DAT_146874910,puVar1,(longlong)iVar2 * 2);
  }
  atexit((_func_5014 *)&LAB_143e5e820);
  return;
}



// FUNCTION 140190130 FUN_140190130 body=59 status=ok
// SIG undefined FUN_140190130(void)

void FUN_140190130(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0720,0);
  FGenericPlatformString::Memcpy(DAT_1462a0720,L"AbilityData",0x18);
  atexit((_func_5014 *)&LAB_143e5e840);
  return;
}



// FUNCTION 140190210 FUN_140190210 body=59 status=ok
// SIG undefined FUN_140190210(void)

void FUN_140190210(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a06d0,0);
  FGenericPlatformString::Memcpy(DAT_1462a06d0,L"ArtifactJsonData",0x22);
  atexit((_func_5014 *)&LAB_143e5e860);
  return;
}



// FUNCTION 140190250 FUN_140190250 body=59 status=ok
// SIG undefined FUN_140190250(void)

void FUN_140190250(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0650,0);
  FGenericPlatformString::Memcpy(DAT_1462a0650,L"ArtifactSerialNumber",0x2a);
  atexit((_func_5014 *)&LAB_143e5e880);
  return;
}



// FUNCTION 140190290 `dynamic_initializer_for_'AwayText'' body=53 status=ok
// SIG undefined `dynamic_initializer_for_'AwayText''(void)

void EOnlinePresenceState::_dynamic_initializer_for__AwayText__(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_146874f10,L"Away",L"OnlinePresence",L"Away");
  atexit(FUN_143e5e8a0);
  return;
}



// FUNCTION 1401902d0 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a06f0,0);
  FGenericPlatformString::Memcpy(DAT_1462a06f0,L"BodyCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e5e8f0);
  return;
}



// FUNCTION 140190310 `dynamic_initializer_for_'GCompileMaterialsForShaderFormatCVar'' body=137 status=ok
// SIG undefined `dynamic_initializer_for_'GCompileMaterialsForShaderFormatCVar''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GCompileMaterialsForShaderFormatCVar__(void)

{
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  if (DAT_1468b1f88 == (undefined8 *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146874fc8 =
       (**(code **)*DAT_1468b1f88)
                 (DAT_1468b1f88,L"GBXPerf.ReportTag",local_18,
                  L"String applied to all performance/telemetry samples as \'Report_Tag\'.",0);
  _DAT_146874fc0 = &PTR_FUN_143f3ecf0;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  _DAT_146874fc0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e5e910);
  return;
}



// FUNCTION 1401903a0 FUN_1401903a0 body=59 status=ok
// SIG undefined FUN_1401903a0(void)

void FUN_1401903a0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0580,0);
  FGenericPlatformString::Memcpy(DAT_1462a0580,L"CanJoin",0x10);
  atexit((_func_5014 *)&LAB_143e5e960);
  return;
}



// FUNCTION 140190420 `dynamic_initializer_for_'ChatText'' body=53 status=ok
// SIG undefined `dynamic_initializer_for_'ChatText''(void)

void EOnlinePresenceState::_dynamic_initializer_for__ChatText__(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_146874f58,L"Chat",L"OnlinePresence",L"Chat");
  atexit(FUN_143e5e980);
  return;
}



// FUNCTION 140190460 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a06c0,0);
  FGenericPlatformString::Memcpy(DAT_1462a06c0,L"ClassItemJsonData",0x24);
  atexit((_func_5014 *)&LAB_143e5e9d0);
  return;
}



// FUNCTION 1401904a0 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0640,0);
  FGenericPlatformString::Memcpy(DAT_1462a0640,L"ClassItemSerialNumber",0x2c);
  atexit((_func_5014 *)&LAB_143e5e9f0);
  return;
}



// FUNCTION 140190520 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0770,0);
  FGenericPlatformString::Memcpy(DAT_1462a0770,L"CrewChallengesCompletion",0x32);
  atexit((_func_5014 *)&LAB_143e5ea10);
  return;
}



// FUNCTION 1401905a0 FUN_1401905a0 body=59 status=ok
// SIG undefined FUN_1401905a0(void)

void FUN_1401905a0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a07d0,0);
  FGenericPlatformString::Memcpy(DAT_1462a07d0,L"DateTime",0x12);
  atexit((_func_5014 *)&LAB_143e5ea30);
  return;
}



// FUNCTION 140190600 `dynamic_initializer_for_'DefaultAppIdKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'DefaultAppIdKey''(void)

void _dynamic_initializer_for__DefaultAppIdKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0840,0);
  FGenericPlatformString::Memcpy(DAT_1462a0840,L"AppId",0xc);
  atexit((_func_5014 *)&LAB_143e5ea50);
  return;
}



// FUNCTION 140190640 `dynamic_initializer_for_'DefaultPlatformKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'DefaultPlatformKey''(void)

void _dynamic_initializer_for__DefaultPlatformKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0850,0);
  FGenericPlatformString::Memcpy(DAT_1462a0850,L"Platform",0x12);
  atexit((_func_5014 *)&LAB_143e5ea70);
  return;
}



// FUNCTION 140190680 `dynamic_initializer_for_'DefaultPresenceKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'DefaultPresenceKey''(void)

void _dynamic_initializer_for__DefaultPresenceKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0830,0);
  FGenericPlatformString::Memcpy(DAT_1462a0830,L"RichPresence",0x1a);
  atexit((_func_5014 *)&LAB_143e5ea90);
  return;
}



// FUNCTION 140190760 `dynamic_initializer_for_'DoNotDisturbText'' body=53 status=ok
// SIG undefined `dynamic_initializer_for_'DoNotDisturbText''(void)

void EOnlinePresenceState::_dynamic_initializer_for__DoNotDisturbText__(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_146874f40,L"DoNotDisturb",L"OnlinePresence",L"DoNotDisturb");
  atexit(FUN_143e5eab0);
  return;
}



// FUNCTION 1401907c0 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0480,0);
  FGenericPlatformString::Memcpy(DAT_1462a0480,L"DuplicateReservationFound",0x34);
  atexit((_func_5014 *)&LAB_143e5eb00);
  return;
}



// FUNCTION 140190800 `dynamic_initializer_for_'kResultStringCannotLoadPreset'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kResultStringCannotLoadPreset''(void)

void _dynamic_initializer_for__kResultStringCannotLoadPreset__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0710,0);
  FGenericPlatformString::Memcpy(DAT_1462a0710,L"EmoteCustomizationHash",0x2e);
  atexit((_func_5014 *)&LAB_143e5eb20);
  return;
}



// FUNCTION 140190840 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0760,0);
  FGenericPlatformString::Memcpy(DAT_1462a0760,L"EnemyChallengesCompletion",0x34);
  atexit((_func_5014 *)&LAB_143e5eb40);
  return;
}



// FUNCTION 1401908c0 `dynamic_initializer_for_'kResultStringAssetDefAlrealdyLoaded'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kResultStringAssetDefAlrealdyLoaded''(void)

void _dynamic_initializer_for__kResultStringAssetDefAlrealdyLoaded__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0780,0);
  FGenericPlatformString::Memcpy(DAT_1462a0780,L"ExplorationChallengesCompletion",0x40);
  atexit((_func_5014 *)&LAB_143e5eb60);
  return;
}



// FUNCTION 140190900 `dynamic_initializer_for_'ExtendedAwayText'' body=53 status=ok
// SIG undefined `dynamic_initializer_for_'ExtendedAwayText''(void)

void EOnlinePresenceState::_dynamic_initializer_for__ExtendedAwayText__(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_146874f28,L"ExtendedAway",L"OnlinePresence",L"ExtendedAway");
  atexit(FUN_143e5eb80);
  return;
}



// FUNCTION 1401909c0 FUN_1401909c0 body=59 status=ok
// SIG undefined FUN_1401909c0(void)

void FUN_1401909c0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a05b0,0);
  FGenericPlatformString::Memcpy(DAT_1462a05b0,L"FriendActivityStatus",0x2a);
  atexit((_func_5014 *)&LAB_143e5ebd0);
  return;
}



// FUNCTION 140190a00 FUN_140190a00 body=59 status=ok
// SIG undefined FUN_140190a00(void)

void FUN_140190a00(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0820,0);
  FGenericPlatformString::Memcpy(DAT_1462a0820,L"ChallengeInfo",0x1c);
  atexit((_func_5014 *)&LAB_143e5ebf0);
  return;
}



// FUNCTION 140190a40 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0810,0);
  FGenericPlatformString::Memcpy(DAT_1462a0810,L"FriendCrewQuarterInfo",0x2c);
  atexit((_func_5014 *)&LAB_143e5ec10);
  return;
}



// FUNCTION 140190a80 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a07f0,0);
  FGenericPlatformString::Memcpy(DAT_1462a07f0,L"FriendLoadOutInfo",0x24);
  atexit((_func_5014 *)&LAB_143e5ec30);
  return;
}



// FUNCTION 140190ac0 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a07e0,0);
  FGenericPlatformString::Memcpy(DAT_1462a07e0,L"FriendStatusPresenceInfo",0x32);
  atexit((_func_5014 *)&LAB_143e5ec50);
  return;
}



// FUNCTION 140190b00 FUN_140190b00 body=59 status=ok
// SIG undefined FUN_140190b00(void)

void FUN_140190b00(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0800,0);
  FGenericPlatformString::Memcpy(DAT_1462a0800,L"FriendSkillTreeInfo",0x28);
  atexit((_func_5014 *)&LAB_143e5ec70);
  return;
}



// FUNCTION 140190b40 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0730,0);
  FGenericPlatformString::Memcpy(DAT_1462a0730,L"FriendStatusThing",0x24);
  atexit((_func_5014 *)&LAB_143e5ec90);
  return;
}



// FUNCTION 140190bc0 FUN_140190bc0 body=59 status=ok
// SIG undefined FUN_140190bc0(void)

void FUN_140190bc0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0740,0);
  FGenericPlatformString::Memcpy(DAT_1462a0740,L"GameCompletion",0x1e);
  atexit((_func_5014 *)&LAB_143e5ecb0);
  return;
}



// FUNCTION 140190c00 FUN_140190c00 body=59 status=ok
// SIG undefined FUN_140190c00(void)

void FUN_140190c00(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0450,0);
  FGenericPlatformString::Memcpy(DAT_1462a0450,L"GenericFailure",0x1e);
  atexit((_func_5014 *)&LAB_143e5ecd0);
  return;
}



// FUNCTION 140190c40 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a06a0,0);
  FGenericPlatformString::Memcpy(DAT_1462a06a0,L"GrenadeJsonData",0x20);
  atexit((_func_5014 *)&LAB_143e5ecf0);
  return;
}



// FUNCTION 140190c80 FUN_140190c80 body=59 status=ok
// SIG undefined FUN_140190c80(void)

void FUN_140190c80(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0620,0);
  FGenericPlatformString::Memcpy(DAT_1462a0620,L"GrenadeSerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e5ed10);
  return;
}



// FUNCTION 140190cc0 FUN_140190cc0 body=59 status=ok
// SIG undefined FUN_140190cc0(void)

void FUN_140190cc0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a05c0,0);
  FGenericPlatformString::Memcpy(DAT_1462a05c0,L"GuardianRank",0x1a);
  atexit((_func_5014 *)&LAB_143e5ed30);
  return;
}



// FUNCTION 140190d00 FUN_140190d00 body=59 status=ok
// SIG undefined FUN_140190d00(void)

void FUN_140190d00(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a05a0,0);
  FGenericPlatformString::Memcpy(DAT_1462a05a0,L"HasSelectedCharacter",0x2a);
  atexit((_func_5014 *)&LAB_143e5ed50);
  return;
}



// FUNCTION 140190d40 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a06e0,0);
  FGenericPlatformString::Memcpy(DAT_1462a06e0,L"HeadCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e5ed70);
  return;
}



// FUNCTION 140190e10 FUN_140190e10 body=59 status=ok
// SIG undefined FUN_140190e10(void)

void FUN_140190e10(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0470,0);
  FGenericPlatformString::Memcpy(DAT_1462a0470,L"InvalidClientBeaconType",0x30);
  atexit((_func_5014 *)&LAB_143e5ed90);
  return;
}



// FUNCTION 140190f90 FUN_140190f90 body=59 status=ok
// SIG undefined FUN_140190f90(void)

void FUN_140190f90(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a04f0,0);
  FGenericPlatformString::Memcpy(DAT_1462a04f0,L"Level",0xc);
  atexit((_func_5014 *)&LAB_143e5edb0);
  return;
}



// FUNCTION 140190fd0 FUN_140190fd0 body=59 status=ok
// SIG undefined FUN_140190fd0(void)

void FUN_140190fd0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0550,0);
  FGenericPlatformString::Memcpy(DAT_1462a0550,L"LocationX",0x14);
  atexit((_func_5014 *)&LAB_143e5edd0);
  return;
}



// FUNCTION 140191010 FUN_140191010 body=59 status=ok
// SIG undefined FUN_140191010(void)

void FUN_140191010(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0560,0);
  FGenericPlatformString::Memcpy(DAT_1462a0560,L"LocationY",0x14);
  atexit((_func_5014 *)&LAB_143e5edf0);
  return;
}



// FUNCTION 140191050 FUN_140191050 body=59 status=ok
// SIG undefined FUN_140191050(void)

void FUN_140191050(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0570,0);
  FGenericPlatformString::Memcpy(DAT_1462a0570,L"LocationZ",0x14);
  atexit((_func_5014 *)&LAB_143e5ee10);
  return;
}



// FUNCTION 140191090 FUN_140191090 body=59 status=ok
// SIG undefined FUN_140191090(void)

void FUN_140191090(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0590,0);
  FGenericPlatformString::Memcpy(DAT_1462a0590,L"LookingForHelp",0x1e);
  atexit((_func_5014 *)&LAB_143e5ee30);
  return;
}



// FUNCTION 1401910d0 FUN_1401910d0 body=59 status=ok
// SIG undefined FUN_1401910d0(void)

void FUN_1401910d0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0500,0);
  FGenericPlatformString::Memcpy(DAT_1462a0500,L"MapName",0x10);
  atexit((_func_5014 *)&LAB_143e5ee50);
  return;
}



// FUNCTION 140191150 FUN_140191150 body=59 status=ok
// SIG undefined FUN_140191150(void)

void FUN_140191150(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0490,0);
  FGenericPlatformString::Memcpy(DAT_1462a0490,L"MismatchedBeaconNetVersions",0x38);
  atexit((_func_5014 *)&LAB_143e5ee70);
  return;
}



// FUNCTION 140191190 FUN_140191190 body=59 status=ok
// SIG undefined FUN_140191190(void)

void FUN_140191190(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a04b0,0);
  FGenericPlatformString::Memcpy(DAT_1462a04b0,L"MissingDLC",0x16);
  atexit((_func_5014 *)&LAB_143e5ee90);
  return;
}



// FUNCTION 1401911d0 FUN_1401911d0 body=59 status=ok
// SIG undefined FUN_1401911d0(void)

void FUN_1401911d0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0540,0);
  FGenericPlatformString::Memcpy(DAT_1462a0540,L"MissionHash",0x18);
  atexit((_func_5014 *)&LAB_143e5eeb0);
  return;
}



// FUNCTION 140191430 FUN_140191430 body=59 status=ok
// SIG undefined FUN_140191430(void)

void FUN_140191430(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0440,0);
  FGenericPlatformString::Memcpy(DAT_1462a0440,L"NetworkFailure",0x1e);
  atexit((_func_5014 *)&LAB_143e5eed0);
  return;
}



// FUNCTION 1401914b0 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0460,0);
  FGenericPlatformString::Memcpy(DAT_1462a0460,L"NotAcceptingReservations",0x32);
  atexit((_func_5014 *)&LAB_143e5eef0);
  return;
}



// FUNCTION 1401914f0 `dynamic_initializer_for_'OfflineText'' body=53 status=ok
// SIG undefined `dynamic_initializer_for_'OfflineText''(void)

void EOnlinePresenceState::_dynamic_initializer_for__OfflineText__(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_146874ef8,L"Offline",L"OnlinePresence",L"Offline");
  atexit(FUN_143e5ef10);
  return;
}



// FUNCTION 140191530 `dynamic_initializer_for_'OnlineText'' body=53 status=ok
// SIG undefined `dynamic_initializer_for_'OnlineText''(void)

void EOnlinePresenceState::_dynamic_initializer_for__OnlineText__(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_146874ee0,L"Online",L"OnlinePresence",L"Online");
  atexit(FUN_143e5ef60);
  return;
}



// FUNCTION 140191590 FUN_140191590 body=59 status=ok
// SIG undefined FUN_140191590(void)

void FUN_140191590(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0520,0);
  FGenericPlatformString::Memcpy(DAT_1462a0520,L"PartyPlayerCount",0x22);
  atexit((_func_5014 *)&LAB_143e5efb0);
  return;
}



// FUNCTION 1401916b0 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0530,0);
  FGenericPlatformString::Memcpy(DAT_1462a0530,L"PlayerClassIdentifierHash",0x34);
  atexit((_func_5014 *)&LAB_143e5efd0);
  return;
}



// FUNCTION 1401916f0 FUN_1401916f0 body=59 status=ok
// SIG undefined FUN_1401916f0(void)

void FUN_1401916f0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a07c0,0);
  FGenericPlatformString::Memcpy(DAT_1462a07c0,L"PlayerId",0x12);
  atexit((_func_5014 *)&LAB_143e5eff0);
  return;
}



// FUNCTION 140191730 `dynamic_initializer_for_'PresenceResourceKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PresenceResourceKey''(void)

void _dynamic_initializer_for__PresenceResourceKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0860,0);
  FGenericPlatformString::Memcpy(DAT_1462a0860,L"ResourceKey",0x18);
  atexit((_func_5014 *)&LAB_143e5f010);
  return;
}



// FUNCTION 140191830 LocalizationSourceControlSettingsCategoryName'' body=59 status=ok
// SIG undefined LocalizationSourceControlSettingsCategoryName''(void)

void `dynamic_initializer_for_'FLocalizationSourceControlSettings::
     LocalizationSourceControlSettingsCategoryName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0790,0);
  FGenericPlatformString::Memcpy(DAT_1462a0790,L"ProvingGroundChallengesCompletion",0x44);
  atexit((_func_5014 *)&LAB_143e5f030);
  return;
}



// FUNCTION 1401918b0 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a07b0,0);
  FGenericPlatformString::Memcpy(DAT_1462a07b0,L"RaidChallengesCompletion",0x32);
  atexit((_func_5014 *)&LAB_143e5f050);
  return;
}



// FUNCTION 140191910 FUN_140191910 body=321 status=ok
// SIG undefined FUN_140191910(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140191910(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  longlong *local_18;
  int local_10;
  
  if ((DAT_146aeaf18 == '\0') && (puVar2 = (undefined8 *)FUN_14218ce40(), puVar2 != &DAT_146aeaeb0))
  {
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
    DAT_146aeaf18 = '\x01';
  }
  uVar1 = DAT_146aeaeb0;
  local_18 = (longlong *)0x0;
  plVar3 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_GetPoolName_1446a3a90;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[2] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_1446a3ad8;
  }
  FUN_1421928f0(local_res8,uVar1,0x1e,&local_18);
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



// FUNCTION 140191a80 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0430,0);
  FGenericPlatformString::Memcpy(DAT_1462a0430,L"<img src=\"%s\"></>",0x24);
  atexit((_func_5014 *)&LAB_143e5f070);
  return;
}



// FUNCTION 140191c60 FUN_140191c60 body=59 status=ok
// SIG undefined FUN_140191c60(void)

void FUN_140191c60(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0510,0);
  FGenericPlatformString::Memcpy(DAT_1462a0510,L"SessionId",0x14);
  atexit((_func_5014 *)&LAB_143e5f090);
  return;
}



// FUNCTION 140191ca0 FUN_140191ca0 body=59 status=ok
// SIG undefined FUN_140191ca0(void)

void FUN_140191ca0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a06b0,0);
  FGenericPlatformString::Memcpy(DAT_1462a06b0,L"ShieldJsonData",0x1e);
  atexit((_func_5014 *)&LAB_143e5f0b0);
  return;
}



// FUNCTION 140191ce0 `dynamic_initializer_for_'StatusStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'StatusStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__StatusStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0630,0);
  FGenericPlatformString::Memcpy(DAT_1462a0630,L"ShieldSerialNumber",0x26);
  atexit((_func_5014 *)&LAB_143e5f0d0);
  return;
}



// FUNCTION 140191d40 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0700,0);
  FGenericPlatformString::Memcpy(DAT_1462a0700,L"SkinCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e5f0f0);
  return;
}



// FUNCTION 140191d80 FUN_140191d80 body=59 status=ok
// SIG undefined FUN_140191d80(void)

void FUN_140191d80(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a07a0,0);
  FGenericPlatformString::Memcpy(DAT_1462a07a0,L"SlaughterChallengesCompletion",0x3c);
  atexit((_func_5014 *)&LAB_143e5f110);
  return;
}



// FUNCTION 140191e70 FUN_140191e70 body=59 status=ok
// SIG undefined FUN_140191e70(void)

void FUN_140191e70(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a05d0,0);
  FGenericPlatformString::Memcpy(DAT_1462a05d0,L"TimePlayed",0x16);
  atexit((_func_5014 *)&LAB_143e5f130);
  return;
}



// FUNCTION 140191ed0 `dynamic_initializer_for_'PercentFormat'' body=53 status=ok
// SIG undefined `dynamic_initializer_for_'PercentFormat''(void)

void _dynamic_initializer_for__PercentFormat__(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_146875038,L"{0}%",L"GFxVaultHunterProfileCard",L"PercentFormat");
  atexit(FUN_143e5f150);
  return;
}



// FUNCTION 140191f10 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a04a0,0);
  FGenericPlatformString::Memcpy(DAT_1462a04a0,L"UnexpectedControlMessage",0x32);
  atexit((_func_5014 *)&LAB_143e5f1a0);
  return;
}



// FUNCTION 140191fd0 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0388,0);
  FGenericPlatformString::Memcpy(DAT_1462a0388,&DAT_14469da50,8);
  atexit((_func_5014 *)&LAB_143e5f1c0);
  return;
}



// FUNCTION 140192010 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0660,0);
  FGenericPlatformString::Memcpy(DAT_1462a0660,L"Weapon1JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e5f1e0);
  return;
}



// FUNCTION 140192050 FUN_140192050 body=59 status=ok
// SIG undefined FUN_140192050(void)

void FUN_140192050(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a05e0,0);
  FGenericPlatformString::Memcpy(DAT_1462a05e0,L"Weapon1SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e5f200);
  return;
}



// FUNCTION 140192090 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0670,0);
  FGenericPlatformString::Memcpy(DAT_1462a0670,L"Weapon2JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e5f220);
  return;
}



// FUNCTION 1401920d0 FUN_1401920d0 body=59 status=ok
// SIG undefined FUN_1401920d0(void)

void FUN_1401920d0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a05f0,0);
  FGenericPlatformString::Memcpy(DAT_1462a05f0,L"Weapon2SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e5f240);
  return;
}



// FUNCTION 140192110 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0680,0);
  FGenericPlatformString::Memcpy(DAT_1462a0680,L"Weapon3JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e5f260);
  return;
}



// FUNCTION 140192150 FUN_140192150 body=59 status=ok
// SIG undefined FUN_140192150(void)

void FUN_140192150(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0600,0);
  FGenericPlatformString::Memcpy(DAT_1462a0600,L"Weapon3SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e5f280);
  return;
}



// FUNCTION 140192190 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0690,0);
  FGenericPlatformString::Memcpy(DAT_1462a0690,L"Weapon4JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e5f2a0);
  return;
}



// FUNCTION 1401921d0 FUN_1401921d0 body=59 status=ok
// SIG undefined FUN_1401921d0(void)

void FUN_1401921d0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0610,0);
  FGenericPlatformString::Memcpy(DAT_1462a0610,L"Weapon4SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e5f2c0);
  return;
}



// FUNCTION 140192210 FUN_140192210 body=59 status=ok
// SIG undefined FUN_140192210(void)

void FUN_140192210(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0750,0);
  FGenericPlatformString::Memcpy(DAT_1462a0750,L"WeaponChallengesCompletion",0x36);
  atexit((_func_5014 *)&LAB_143e5f2e0);
  return;
}



// FUNCTION 140192330 EOL_String'' body=115 status=ok
// SIG undefined EOL_String''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FDlgConfigWriter::EOL_String__(void)

{
  undefined *puVar1;
  int iVar2;
  longlong lVar3;
  
  puVar1 = PTR_DAT_1462a0370;
  if ((PTR_DAT_1462a0370 != (undefined *)0x0) && (*(short *)PTR_DAT_1462a0370 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(short *)(PTR_DAT_1462a0370 + lVar3 * 2) != 0);
    iVar2 = (int)lVar3 + 1;
    _DAT_146874ea0 = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146874e98,0);
    }
    FGenericPlatformString::Memcpy(DAT_146874e98,puVar1,(longlong)iVar2 * 2);
  }
  atexit((_func_5014 *)&LAB_143e5f300);
  return;
}



// FUNCTION 140192490 FUN_140192490 body=59 status=ok
// SIG undefined FUN_140192490(void)

void FUN_140192490(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0c10,0);
  FGenericPlatformString::Memcpy(DAT_1462a0c10,L"AbilityData",0x18);
  atexit((_func_5014 *)&LAB_143e5f320);
  return;
}



// FUNCTION 140192570 FUN_140192570 body=59 status=ok
// SIG undefined FUN_140192570(void)

void FUN_140192570(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0bc0,0);
  FGenericPlatformString::Memcpy(DAT_1462a0bc0,L"ArtifactJsonData",0x22);
  atexit((_func_5014 *)&LAB_143e5f340);
  return;
}



// FUNCTION 1401925b0 FUN_1401925b0 body=59 status=ok
// SIG undefined FUN_1401925b0(void)

void FUN_1401925b0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0b40,0);
  FGenericPlatformString::Memcpy(DAT_1462a0b40,L"ArtifactSerialNumber",0x2a);
  atexit((_func_5014 *)&LAB_143e5f360);
  return;
}



// FUNCTION 1401925f0 `dynamic_initializer_for_'AwayText'' body=53 status=ok
// SIG undefined `dynamic_initializer_for_'AwayText''(void)

void EOnlinePresenceState::_dynamic_initializer_for__AwayText__(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_146875508,L"Away",L"OnlinePresence",L"Away");
  atexit(FUN_143e5f380);
  return;
}



// FUNCTION 140192630 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0be0,0);
  FGenericPlatformString::Memcpy(DAT_1462a0be0,L"BodyCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e5f3d0);
  return;
}



// FUNCTION 140192670 FUN_140192670 body=112 status=ok
// SIG undefined FUN_140192670(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140192670(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146875620 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"GFxOakMainMenu.ForceCanShowUploadSave",0,&DAT_1446a5bdc,0);
  _DAT_146875618 = &PTR_FUN_143f3ecf8;
  _DAT_146875628 = (**(code **)(*DAT_146875620 + 0x38))(DAT_146875620);
  atexit(FUN_143e5f3f0);
  return;
}



// FUNCTION 1401926e0 FUN_1401926e0 body=112 status=ok
// SIG undefined FUN_1401926e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401926e0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146875608 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"GFxOakMainMenu.ForceDontShowToggleLeauges",0,&DAT_1446a5b64,0);
  _DAT_146875600 = &PTR_FUN_143f3ecf8;
  DAT_146875610 = (**(code **)(*DAT_146875608 + 0x38))(DAT_146875608);
  atexit(FUN_143e5f440);
  return;
}



// FUNCTION 140192750 FUN_140192750 body=112 status=ok
// SIG undefined FUN_140192750(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140192750(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146875638 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"GFxOakMainMenu.ShowBehindTheScenes",0,&DAT_1446a5bec,0);
  _DAT_146875630 = &PTR_FUN_143f3ecf8;
  DAT_146875640 = (**(code **)(*DAT_146875638 + 0x38))(DAT_146875638);
  atexit(FUN_143e5f490);
  return;
}



// FUNCTION 1401927c0 FUN_1401927c0 body=59 status=ok
// SIG undefined FUN_1401927c0(void)

void FUN_1401927c0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0a70,0);
  FGenericPlatformString::Memcpy(DAT_1462a0a70,L"CanJoin",0x10);
  atexit((_func_5014 *)&LAB_143e5f4e0);
  return;
}



// FUNCTION 140192840 `dynamic_initializer_for_'ChatText'' body=53 status=ok
// SIG undefined `dynamic_initializer_for_'ChatText''(void)

void EOnlinePresenceState::_dynamic_initializer_for__ChatText__(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_146875550,L"Chat",L"OnlinePresence",L"Chat");
  atexit(FUN_143e5f500);
  return;
}



// FUNCTION 140192880 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0bb0,0);
  FGenericPlatformString::Memcpy(DAT_1462a0bb0,L"ClassItemJsonData",0x24);
  atexit((_func_5014 *)&LAB_143e5f550);
  return;
}



// FUNCTION 1401928c0 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0b30,0);
  FGenericPlatformString::Memcpy(DAT_1462a0b30,L"ClassItemSerialNumber",0x2c);
  atexit((_func_5014 *)&LAB_143e5f570);
  return;
}



// FUNCTION 140192940 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0c60,0);
  FGenericPlatformString::Memcpy(DAT_1462a0c60,L"CrewChallengesCompletion",0x32);
  atexit((_func_5014 *)&LAB_143e5f590);
  return;
}



// FUNCTION 1401929c0 FUN_1401929c0 body=59 status=ok
// SIG undefined FUN_1401929c0(void)

void FUN_1401929c0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0cc0,0);
  FGenericPlatformString::Memcpy(DAT_1462a0cc0,L"DateTime",0x12);
  atexit((_func_5014 *)&LAB_143e5f5b0);
  return;
}



// FUNCTION 140192a20 `dynamic_initializer_for_'DefaultAppIdKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'DefaultAppIdKey''(void)

void _dynamic_initializer_for__DefaultAppIdKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0d40,0);
  FGenericPlatformString::Memcpy(DAT_1462a0d40,L"AppId",0xc);
  atexit((_func_5014 *)&LAB_143e5f5d0);
  return;
}



// FUNCTION 140192a60 `dynamic_initializer_for_'DefaultPlatformKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'DefaultPlatformKey''(void)

void _dynamic_initializer_for__DefaultPlatformKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0d50,0);
  FGenericPlatformString::Memcpy(DAT_1462a0d50,L"Platform",0x12);
  atexit((_func_5014 *)&LAB_143e5f5f0);
  return;
}



// FUNCTION 140192aa0 `dynamic_initializer_for_'DefaultPresenceKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'DefaultPresenceKey''(void)

void _dynamic_initializer_for__DefaultPresenceKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0d30,0);
  FGenericPlatformString::Memcpy(DAT_1462a0d30,L"RichPresence",0x1a);
  atexit((_func_5014 *)&LAB_143e5f610);
  return;
}



// FUNCTION 140192b80 `dynamic_initializer_for_'DoNotDisturbText'' body=53 status=ok
// SIG undefined `dynamic_initializer_for_'DoNotDisturbText''(void)

void EOnlinePresenceState::_dynamic_initializer_for__DoNotDisturbText__(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_146875538,L"DoNotDisturb",L"OnlinePresence",L"DoNotDisturb");
  atexit(FUN_143e5f630);
  return;
}



// FUNCTION 140192be0 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0970,0);
  FGenericPlatformString::Memcpy(DAT_1462a0970,L"DuplicateReservationFound",0x34);
  atexit((_func_5014 *)&LAB_143e5f680);
  return;
}



// FUNCTION 140192c20 `dynamic_initializer_for_'kResultStringCannotLoadPreset'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kResultStringCannotLoadPreset''(void)

void _dynamic_initializer_for__kResultStringCannotLoadPreset__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0c00,0);
  FGenericPlatformString::Memcpy(DAT_1462a0c00,L"EmoteCustomizationHash",0x2e);
  atexit((_func_5014 *)&LAB_143e5f6a0);
  return;
}



// FUNCTION 140192c60 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0c50,0);
  FGenericPlatformString::Memcpy(DAT_1462a0c50,L"EnemyChallengesCompletion",0x34);
  atexit((_func_5014 *)&LAB_143e5f6c0);
  return;
}



// FUNCTION 140192ce0 `dynamic_initializer_for_'kResultStringAssetDefAlrealdyLoaded'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kResultStringAssetDefAlrealdyLoaded''(void)

void _dynamic_initializer_for__kResultStringAssetDefAlrealdyLoaded__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0c70,0);
  FGenericPlatformString::Memcpy(DAT_1462a0c70,L"ExplorationChallengesCompletion",0x40);
  atexit((_func_5014 *)&LAB_143e5f6e0);
  return;
}



// FUNCTION 140192d20 `dynamic_initializer_for_'ExtendedAwayText'' body=53 status=ok
// SIG undefined `dynamic_initializer_for_'ExtendedAwayText''(void)

void EOnlinePresenceState::_dynamic_initializer_for__ExtendedAwayText__(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_146875520,L"ExtendedAway",L"OnlinePresence",L"ExtendedAway");
  atexit(FUN_143e5f700);
  return;
}



// FUNCTION 140192de0 FUN_140192de0 body=59 status=ok
// SIG undefined FUN_140192de0(void)

void FUN_140192de0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0aa0,0);
  FGenericPlatformString::Memcpy(DAT_1462a0aa0,L"FriendActivityStatus",0x2a);
  atexit((_func_5014 *)&LAB_143e5f750);
  return;
}



// FUNCTION 140192e20 FUN_140192e20 body=59 status=ok
// SIG undefined FUN_140192e20(void)

void FUN_140192e20(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0d10,0);
  FGenericPlatformString::Memcpy(DAT_1462a0d10,L"ChallengeInfo",0x1c);
  atexit((_func_5014 *)&LAB_143e5f770);
  return;
}



// FUNCTION 140192e60 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0d00,0);
  FGenericPlatformString::Memcpy(DAT_1462a0d00,L"FriendCrewQuarterInfo",0x2c);
  atexit((_func_5014 *)&LAB_143e5f790);
  return;
}



// FUNCTION 140192ea0 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0ce0,0);
  FGenericPlatformString::Memcpy(DAT_1462a0ce0,L"FriendLoadOutInfo",0x24);
  atexit((_func_5014 *)&LAB_143e5f7b0);
  return;
}



// FUNCTION 140192ee0 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0cd0,0);
  FGenericPlatformString::Memcpy(DAT_1462a0cd0,L"FriendStatusPresenceInfo",0x32);
  atexit((_func_5014 *)&LAB_143e5f7d0);
  return;
}



// FUNCTION 140192f20 FUN_140192f20 body=59 status=ok
// SIG undefined FUN_140192f20(void)

void FUN_140192f20(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0cf0,0);
  FGenericPlatformString::Memcpy(DAT_1462a0cf0,L"FriendSkillTreeInfo",0x28);
  atexit((_func_5014 *)&LAB_143e5f7f0);
  return;
}



// FUNCTION 140192f60 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0c20,0);
  FGenericPlatformString::Memcpy(DAT_1462a0c20,L"FriendStatusThing",0x24);
  atexit((_func_5014 *)&LAB_143e5f810);
  return;
}



// FUNCTION 140192fa0 FUN_140192fa0 body=53 status=ok
// SIG undefined FUN_140192fa0(void)

void FUN_140192fa0(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_1468755c8,L"{0} Enabled",L"MainMenu",L"EventsEnabledText");
  atexit(FUN_143e5f830);
  return;
}



// FUNCTION 140192fe0 FUN_140192fe0 body=53 status=ok
// SIG undefined FUN_140192fe0(void)

void FUN_140192fe0(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_1468755e0,L"Events Disabled",L"MainMenu",L"EventsDisabledText");
  atexit(FUN_143e5f880);
  return;
}



// FUNCTION 140193020 FUN_140193020 body=59 status=ok
// SIG undefined FUN_140193020(void)

void FUN_140193020(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0c30,0);
  FGenericPlatformString::Memcpy(DAT_1462a0c30,L"GameCompletion",0x1e);
  atexit((_func_5014 *)&LAB_143e5f8d0);
  return;
}



// FUNCTION 140193060 FUN_140193060 body=59 status=ok
// SIG undefined FUN_140193060(void)

void FUN_140193060(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0940,0);
  FGenericPlatformString::Memcpy(DAT_1462a0940,L"GenericFailure",0x1e);
  atexit((_func_5014 *)&LAB_143e5f8f0);
  return;
}



// FUNCTION 1401930a0 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0b90,0);
  FGenericPlatformString::Memcpy(DAT_1462a0b90,L"GrenadeJsonData",0x20);
  atexit((_func_5014 *)&LAB_143e5f910);
  return;
}



// FUNCTION 1401930e0 FUN_1401930e0 body=59 status=ok
// SIG undefined FUN_1401930e0(void)

void FUN_1401930e0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0b10,0);
  FGenericPlatformString::Memcpy(DAT_1462a0b10,L"GrenadeSerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e5f930);
  return;
}



// FUNCTION 140193120 FUN_140193120 body=59 status=ok
// SIG undefined FUN_140193120(void)

void FUN_140193120(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0ab0,0);
  FGenericPlatformString::Memcpy(DAT_1462a0ab0,L"GuardianRank",0x1a);
  atexit((_func_5014 *)&LAB_143e5f950);
  return;
}



// FUNCTION 140193160 FUN_140193160 body=59 status=ok
// SIG undefined FUN_140193160(void)

void FUN_140193160(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0a90,0);
  FGenericPlatformString::Memcpy(DAT_1462a0a90,L"HasSelectedCharacter",0x2a);
  atexit((_func_5014 *)&LAB_143e5f970);
  return;
}



// FUNCTION 1401931a0 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0bd0,0);
  FGenericPlatformString::Memcpy(DAT_1462a0bd0,L"HeadCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e5f990);
  return;
}



// FUNCTION 140193290 FUN_140193290 body=59 status=ok
// SIG undefined FUN_140193290(void)

void FUN_140193290(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0960,0);
  FGenericPlatformString::Memcpy(DAT_1462a0960,L"InvalidClientBeaconType",0x30);
  atexit((_func_5014 *)&LAB_143e5f9b0);
  return;
}



// FUNCTION 140193410 FUN_140193410 body=59 status=ok
// SIG undefined FUN_140193410(void)

void FUN_140193410(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a09e0,0);
  FGenericPlatformString::Memcpy(DAT_1462a09e0,L"Level",0xc);
  atexit((_func_5014 *)&LAB_143e5f9d0);
  return;
}



// FUNCTION 140193450 FUN_140193450 body=59 status=ok
// SIG undefined FUN_140193450(void)

void FUN_140193450(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0d20,0);
  FGenericPlatformString::Memcpy(DAT_1462a0d20,&DAT_1446a6734,4);
  atexit((_func_5014 *)&LAB_143e5f9f0);
  return;
}



// FUNCTION 140193490 FUN_140193490 body=59 status=ok
// SIG undefined FUN_140193490(void)

void FUN_140193490(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0a40,0);
  FGenericPlatformString::Memcpy(DAT_1462a0a40,L"LocationX",0x14);
  atexit((_func_5014 *)&LAB_143e5fa10);
  return;
}



// FUNCTION 1401934d0 FUN_1401934d0 body=59 status=ok
// SIG undefined FUN_1401934d0(void)

void FUN_1401934d0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0a50,0);
  FGenericPlatformString::Memcpy(DAT_1462a0a50,L"LocationY",0x14);
  atexit((_func_5014 *)&LAB_143e5fa30);
  return;
}



// FUNCTION 140193510 FUN_140193510 body=59 status=ok
// SIG undefined FUN_140193510(void)

void FUN_140193510(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0a60,0);
  FGenericPlatformString::Memcpy(DAT_1462a0a60,L"LocationZ",0x14);
  atexit((_func_5014 *)&LAB_143e5fa50);
  return;
}


