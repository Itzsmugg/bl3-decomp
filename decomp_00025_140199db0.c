// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140199db0 FUN_140199db0 body=100 status=ok
// SIG undefined FUN_140199db0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140199db0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146876878 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.OakLoadingMovies",&DAT_146876440,
                  L"If >= 1 Loading movies during seamless travel are enabled",0);
  _DAT_146876870 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e62400);
  return;
}



// FUNCTION 140199e20 FUN_140199e20 body=112 status=ok
// SIG undefined FUN_140199e20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140199e20(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1468769c0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"Oak.StandInBoostAmbientInHDR",0,&DAT_1446ead24,0);
  _DAT_1468769b8 = &PTR_FUN_143f3ecf8;
  DAT_1468769c8 = (**(code **)(*DAT_1468769c0 + 0x40))(DAT_1468769c0);
  atexit(FUN_143e62450);
  return;
}



// FUNCTION 140199e90 FUN_140199e90 body=59 status=ok
// SIG undefined FUN_140199e90(void)

void FUN_140199e90(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1c90,0);
  FGenericPlatformString::Memcpy(DAT_1462a1c90,L"CanJoin",0x10);
  atexit((_func_5014 *)&LAB_143e624a0);
  return;
}



// FUNCTION 140199f10 `dynamic_initializer_for_'ChatText'' body=53 status=ok
// SIG undefined `dynamic_initializer_for_'ChatText''(void)

void EOnlinePresenceState::_dynamic_initializer_for__ChatText__(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_146876938,L"Chat",L"OnlinePresence",L"Chat");
  atexit(FUN_143e624c0);
  return;
}



// FUNCTION 140199f50 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1dd0,0);
  FGenericPlatformString::Memcpy(DAT_1462a1dd0,L"ClassItemJsonData",0x24);
  atexit((_func_5014 *)&LAB_143e62510);
  return;
}



// FUNCTION 140199f90 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1d50,0);
  FGenericPlatformString::Memcpy(DAT_1462a1d50,L"ClassItemSerialNumber",0x2c);
  atexit((_func_5014 *)&LAB_143e62530);
  return;
}



// FUNCTION 14019a010 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1e80,0);
  FGenericPlatformString::Memcpy(DAT_1462a1e80,L"CrewChallengesCompletion",0x32);
  atexit((_func_5014 *)&LAB_143e625a0);
  return;
}



// FUNCTION 14019a090 FUN_14019a090 body=59 status=ok
// SIG undefined FUN_14019a090(void)

void FUN_14019a090(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1ee0,0);
  FGenericPlatformString::Memcpy(DAT_1462a1ee0,L"DateTime",0x12);
  atexit((_func_5014 *)&LAB_143e625c0);
  return;
}



// FUNCTION 14019a0f0 `dynamic_initializer_for_'DefaultAppIdKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'DefaultAppIdKey''(void)

void _dynamic_initializer_for__DefaultAppIdKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1f50,0);
  FGenericPlatformString::Memcpy(DAT_1462a1f50,L"AppId",0xc);
  atexit((_func_5014 *)&LAB_143e625e0);
  return;
}



// FUNCTION 14019a130 `dynamic_initializer_for_'DefaultPlatformKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'DefaultPlatformKey''(void)

void _dynamic_initializer_for__DefaultPlatformKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1f60,0);
  FGenericPlatformString::Memcpy(DAT_1462a1f60,L"Platform",0x12);
  atexit((_func_5014 *)&LAB_143e62600);
  return;
}



// FUNCTION 14019a170 `dynamic_initializer_for_'DefaultPresenceKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'DefaultPresenceKey''(void)

void _dynamic_initializer_for__DefaultPresenceKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1f40,0);
  FGenericPlatformString::Memcpy(DAT_1462a1f40,L"RichPresence",0x1a);
  atexit((_func_5014 *)&LAB_143e62620);
  return;
}



// FUNCTION 14019a250 `dynamic_initializer_for_'DoNotDisturbText'' body=53 status=ok
// SIG undefined `dynamic_initializer_for_'DoNotDisturbText''(void)

void EOnlinePresenceState::_dynamic_initializer_for__DoNotDisturbText__(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_146876920,L"DoNotDisturb",L"OnlinePresence",L"DoNotDisturb");
  atexit(FUN_143e62640);
  return;
}



// FUNCTION 14019a2b0 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1b90,0);
  FGenericPlatformString::Memcpy(DAT_1462a1b90,L"DuplicateReservationFound",0x34);
  atexit((_func_5014 *)&LAB_143e62690);
  return;
}



// FUNCTION 14019a2f0 `dynamic_initializer_for_'kResultStringCannotLoadPreset'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kResultStringCannotLoadPreset''(void)

void _dynamic_initializer_for__kResultStringCannotLoadPreset__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1e20,0);
  FGenericPlatformString::Memcpy(DAT_1462a1e20,L"EmoteCustomizationHash",0x2e);
  atexit((_func_5014 *)&LAB_143e626b0);
  return;
}



// FUNCTION 14019a330 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1e70,0);
  FGenericPlatformString::Memcpy(DAT_1462a1e70,L"EnemyChallengesCompletion",0x34);
  atexit((_func_5014 *)&LAB_143e626d0);
  return;
}



// FUNCTION 14019a3b0 `dynamic_initializer_for_'kResultStringAssetDefAlrealdyLoaded'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kResultStringAssetDefAlrealdyLoaded''(void)

void _dynamic_initializer_for__kResultStringAssetDefAlrealdyLoaded__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1e90,0);
  FGenericPlatformString::Memcpy(DAT_1462a1e90,L"ExplorationChallengesCompletion",0x40);
  atexit((_func_5014 *)&LAB_143e626f0);
  return;
}



// FUNCTION 14019a3f0 `dynamic_initializer_for_'ExtendedAwayText'' body=53 status=ok
// SIG undefined `dynamic_initializer_for_'ExtendedAwayText''(void)

void EOnlinePresenceState::_dynamic_initializer_for__ExtendedAwayText__(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_146876908,L"ExtendedAway",L"OnlinePresence",L"ExtendedAway");
  atexit(FUN_143e62710);
  return;
}



// FUNCTION 14019a4b0 FUN_14019a4b0 body=59 status=ok
// SIG undefined FUN_14019a4b0(void)

void FUN_14019a4b0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1cc0,0);
  FGenericPlatformString::Memcpy(DAT_1462a1cc0,L"FriendActivityStatus",0x2a);
  atexit((_func_5014 *)&LAB_143e62760);
  return;
}



// FUNCTION 14019a4f0 FUN_14019a4f0 body=59 status=ok
// SIG undefined FUN_14019a4f0(void)

void FUN_14019a4f0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1f30,0);
  FGenericPlatformString::Memcpy(DAT_1462a1f30,L"ChallengeInfo",0x1c);
  atexit((_func_5014 *)&LAB_143e62780);
  return;
}



// FUNCTION 14019a530 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1f20,0);
  FGenericPlatformString::Memcpy(DAT_1462a1f20,L"FriendCrewQuarterInfo",0x2c);
  atexit((_func_5014 *)&LAB_143e627a0);
  return;
}



// FUNCTION 14019a570 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1f00,0);
  FGenericPlatformString::Memcpy(DAT_1462a1f00,L"FriendLoadOutInfo",0x24);
  atexit((_func_5014 *)&LAB_143e627c0);
  return;
}



// FUNCTION 14019a5b0 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1ef0,0);
  FGenericPlatformString::Memcpy(DAT_1462a1ef0,L"FriendStatusPresenceInfo",0x32);
  atexit((_func_5014 *)&LAB_143e627e0);
  return;
}



// FUNCTION 14019a5f0 FUN_14019a5f0 body=59 status=ok
// SIG undefined FUN_14019a5f0(void)

void FUN_14019a5f0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1f10,0);
  FGenericPlatformString::Memcpy(DAT_1462a1f10,L"FriendSkillTreeInfo",0x28);
  atexit((_func_5014 *)&LAB_143e62800);
  return;
}



// FUNCTION 14019a630 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1e40,0);
  FGenericPlatformString::Memcpy(DAT_1462a1e40,L"FriendStatusThing",0x24);
  atexit((_func_5014 *)&LAB_143e62820);
  return;
}



// FUNCTION 14019a670 FUN_14019a670 body=59 status=ok
// SIG undefined FUN_14019a670(void)

void FUN_14019a670(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1e50,0);
  FGenericPlatformString::Memcpy(DAT_1462a1e50,L"GameCompletion",0x1e);
  atexit((_func_5014 *)&LAB_143e62840);
  return;
}



// FUNCTION 14019a6b0 FUN_14019a6b0 body=59 status=ok
// SIG undefined FUN_14019a6b0(void)

void FUN_14019a6b0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1b60,0);
  FGenericPlatformString::Memcpy(DAT_1462a1b60,L"GenericFailure",0x1e);
  atexit((_func_5014 *)&LAB_143e62860);
  return;
}



// FUNCTION 14019a6f0 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1db0,0);
  FGenericPlatformString::Memcpy(DAT_1462a1db0,L"GrenadeJsonData",0x20);
  atexit((_func_5014 *)&LAB_143e62880);
  return;
}



// FUNCTION 14019a730 FUN_14019a730 body=59 status=ok
// SIG undefined FUN_14019a730(void)

void FUN_14019a730(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1d30,0);
  FGenericPlatformString::Memcpy(DAT_1462a1d30,L"GrenadeSerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e628a0);
  return;
}



// FUNCTION 14019a770 FUN_14019a770 body=59 status=ok
// SIG undefined FUN_14019a770(void)

void FUN_14019a770(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1cd0,0);
  FGenericPlatformString::Memcpy(DAT_1462a1cd0,L"GuardianRank",0x1a);
  atexit((_func_5014 *)&LAB_143e628c0);
  return;
}



// FUNCTION 14019a7b0 FUN_14019a7b0 body=59 status=ok
// SIG undefined FUN_14019a7b0(void)

void FUN_14019a7b0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1cb0,0);
  FGenericPlatformString::Memcpy(DAT_1462a1cb0,L"HasSelectedCharacter",0x2a);
  atexit((_func_5014 *)&LAB_143e628e0);
  return;
}



// FUNCTION 14019a7f0 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1df0,0);
  FGenericPlatformString::Memcpy(DAT_1462a1df0,L"HeadCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e62900);
  return;
}



// FUNCTION 14019a8e0 FUN_14019a8e0 body=59 status=ok
// SIG undefined FUN_14019a8e0(void)

void FUN_14019a8e0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1b80,0);
  FGenericPlatformString::Memcpy(DAT_1462a1b80,L"InvalidClientBeaconType",0x30);
  atexit((_func_5014 *)&LAB_143e62920);
  return;
}



// FUNCTION 14019aac0 FUN_14019aac0 body=59 status=ok
// SIG undefined FUN_14019aac0(void)

void FUN_14019aac0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1c00,0);
  FGenericPlatformString::Memcpy(DAT_1462a1c00,L"Level",0xc);
  atexit((_func_5014 *)&LAB_143e62940);
  return;
}



// FUNCTION 14019ab00 FUN_14019ab00 body=117 status=ok
// SIG undefined FUN_14019ab00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14019ab00(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146876898 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"GFxInventoryMenu.LightAdjustmentFactor",0x3f000000,
                  L"Multiplies thumbnail light intensity.",0);
  _DAT_146876890 = &PTR_FUN_143f3ecf8;
  DAT_1468768a0 = (**(code **)(*DAT_146876898 + 0x40))(DAT_146876898);
  atexit(FUN_143e62960);
  return;
}



// FUNCTION 14019ab80 FUN_14019ab80 body=59 status=ok
// SIG undefined FUN_14019ab80(void)

void FUN_14019ab80(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1c60,0);
  FGenericPlatformString::Memcpy(DAT_1462a1c60,L"LocationX",0x14);
  atexit((_func_5014 *)&LAB_143e629b0);
  return;
}



// FUNCTION 14019abc0 FUN_14019abc0 body=59 status=ok
// SIG undefined FUN_14019abc0(void)

void FUN_14019abc0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1c70,0);
  FGenericPlatformString::Memcpy(DAT_1462a1c70,L"LocationY",0x14);
  atexit((_func_5014 *)&LAB_143e629d0);
  return;
}



// FUNCTION 14019ac00 FUN_14019ac00 body=59 status=ok
// SIG undefined FUN_14019ac00(void)

void FUN_14019ac00(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1c80,0);
  FGenericPlatformString::Memcpy(DAT_1462a1c80,L"LocationZ",0x14);
  atexit((_func_5014 *)&LAB_143e629f0);
  return;
}



// FUNCTION 14019ac40 FUN_14019ac40 body=59 status=ok
// SIG undefined FUN_14019ac40(void)

void FUN_14019ac40(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1ca0,0);
  FGenericPlatformString::Memcpy(DAT_1462a1ca0,L"LookingForHelp",0x1e);
  atexit((_func_5014 *)&LAB_143e62a10);
  return;
}



// FUNCTION 14019ac80 FUN_14019ac80 body=59 status=ok
// SIG undefined FUN_14019ac80(void)

void FUN_14019ac80(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1f80,0);
  FGenericPlatformString::Memcpy(DAT_1462a1f80,L"Map|Challenges",0x1e);
  atexit((_func_5014 *)&LAB_143e62a30);
  return;
}



// FUNCTION 14019acc0 FUN_14019acc0 body=59 status=ok
// SIG undefined FUN_14019acc0(void)

void FUN_14019acc0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1c10,0);
  FGenericPlatformString::Memcpy(DAT_1462a1c10,L"MapName",0x10);
  atexit((_func_5014 *)&LAB_143e62a50);
  return;
}



// FUNCTION 14019ad40 FUN_14019ad40 body=59 status=ok
// SIG undefined FUN_14019ad40(void)

void FUN_14019ad40(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1ba0,0);
  FGenericPlatformString::Memcpy(DAT_1462a1ba0,L"MismatchedBeaconNetVersions",0x38);
  atexit((_func_5014 *)&LAB_143e62a90);
  return;
}



// FUNCTION 14019ad80 FUN_14019ad80 body=59 status=ok
// SIG undefined FUN_14019ad80(void)

void FUN_14019ad80(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1bc0,0);
  FGenericPlatformString::Memcpy(DAT_1462a1bc0,L"MissingDLC",0x16);
  atexit((_func_5014 *)&LAB_143e62ab0);
  return;
}



// FUNCTION 14019adc0 FUN_14019adc0 body=59 status=ok
// SIG undefined FUN_14019adc0(void)

void FUN_14019adc0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1c50,0);
  FGenericPlatformString::Memcpy(DAT_1462a1c50,L"MissionHash",0x18);
  atexit((_func_5014 *)&LAB_143e62ad0);
  return;
}



// FUNCTION 14019b020 FUN_14019b020 body=59 status=ok
// SIG undefined FUN_14019b020(void)

void FUN_14019b020(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1b50,0);
  FGenericPlatformString::Memcpy(DAT_1462a1b50,L"NetworkFailure",0x1e);
  atexit((_func_5014 *)&LAB_143e62af0);
  return;
}



// FUNCTION 14019b0a0 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1b70,0);
  FGenericPlatformString::Memcpy(DAT_1462a1b70,L"NotAcceptingReservations",0x32);
  atexit((_func_5014 *)&LAB_143e62b10);
  return;
}



// FUNCTION 14019b0e0 `dynamic_initializer_for_'OfflineText'' body=53 status=ok
// SIG undefined `dynamic_initializer_for_'OfflineText''(void)

void EOnlinePresenceState::_dynamic_initializer_for__OfflineText__(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_1468768d8,L"Offline",L"OnlinePresence",L"Offline");
  atexit(FUN_143e62b30);
  return;
}



// FUNCTION 14019b120 `dynamic_initializer_for_'OnlineText'' body=53 status=ok
// SIG undefined `dynamic_initializer_for_'OnlineText''(void)

void EOnlinePresenceState::_dynamic_initializer_for__OnlineText__(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_1468768c0,L"Online",L"OnlinePresence",L"Online");
  atexit(FUN_143e62b80);
  return;
}



// FUNCTION 14019b180 FUN_14019b180 body=59 status=ok
// SIG undefined FUN_14019b180(void)

void FUN_14019b180(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1c30,0);
  FGenericPlatformString::Memcpy(DAT_1462a1c30,L"PartyPlayerCount",0x22);
  atexit((_func_5014 *)&LAB_143e62bd0);
  return;
}



// FUNCTION 14019b2a0 FUN_14019b2a0 body=266 status=ok
// SIG undefined FUN_14019b2a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14019b2a0(void)

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
    plVar1[1] = (longlong)FUN_1411f2930;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143fca768;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146876a88 =
       (**(code **)(*DAT_1468b1f88 + 0x50))
                 (DAT_1468b1f88,L"PlayUIManagerAnimation",
                  L"Plays an animation managed by the UI Manager.",&local_18,1);
  _DAT_146876a80 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_14019b399;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_14019b399:
  atexit(FUN_143e62bf0);
  return;
}



// FUNCTION 14019b3b0 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1c40,0);
  FGenericPlatformString::Memcpy(DAT_1462a1c40,L"PlayerClassIdentifierHash",0x34);
  atexit((_func_5014 *)&LAB_143e62c40);
  return;
}



// FUNCTION 14019b3f0 FUN_14019b3f0 body=59 status=ok
// SIG undefined FUN_14019b3f0(void)

void FUN_14019b3f0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1ed0,0);
  FGenericPlatformString::Memcpy(DAT_1462a1ed0,L"PlayerId",0x12);
  atexit((_func_5014 *)&LAB_143e62c60);
  return;
}



// FUNCTION 14019b430 FUN_14019b430 body=266 status=ok
// SIG undefined FUN_14019b430(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14019b430(void)

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
    plVar1[1] = (longlong)FUN_1411f3570;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143fca768;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146876a98 =
       (**(code **)(*DAT_1468b1f88 + 0x50))
                 (DAT_1468b1f88,L"PopFromUIManager",L"Pops an item off the UIManager Stack",
                  &local_18,1);
  _DAT_146876a90 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_14019b529;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_14019b529:
  atexit(FUN_143e62c80);
  return;
}



// FUNCTION 14019b540 `dynamic_initializer_for_'PresenceResourceKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PresenceResourceKey''(void)

void _dynamic_initializer_for__PresenceResourceKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1f70,0);
  FGenericPlatformString::Memcpy(DAT_1462a1f70,L"ResourceKey",0x18);
  atexit((_func_5014 *)&LAB_143e62cd0);
  return;
}



// FUNCTION 14019b640 LocalizationSourceControlSettingsCategoryName'' body=59 status=ok
// SIG undefined LocalizationSourceControlSettingsCategoryName''(void)

void `dynamic_initializer_for_'FLocalizationSourceControlSettings::
     LocalizationSourceControlSettingsCategoryName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1ea0,0);
  FGenericPlatformString::Memcpy(DAT_1462a1ea0,L"ProvingGroundChallengesCompletion",0x44);
  atexit((_func_5014 *)&LAB_143e62cf0);
  return;
}



// FUNCTION 14019b6c0 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1ec0,0);
  FGenericPlatformString::Memcpy(DAT_1462a1ec0,L"RaidChallengesCompletion",0x32);
  atexit((_func_5014 *)&LAB_143e62d10);
  return;
}



// FUNCTION 14019b740 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1a98,0);
  FGenericPlatformString::Memcpy(DAT_1462a1a98,L"<img src=\"%s\"></>",0x24);
  atexit((_func_5014 *)&LAB_143e62d30);
  return;
}



// FUNCTION 14019b900 FUN_14019b900 body=59 status=ok
// SIG undefined FUN_14019b900(void)

void FUN_14019b900(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1c20,0);
  FGenericPlatformString::Memcpy(DAT_1462a1c20,L"SessionId",0x14);
  atexit((_func_5014 *)&LAB_143e62d50);
  return;
}



// FUNCTION 14019b940 FUN_14019b940 body=59 status=ok
// SIG undefined FUN_14019b940(void)

void FUN_14019b940(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1dc0,0);
  FGenericPlatformString::Memcpy(DAT_1462a1dc0,L"ShieldJsonData",0x1e);
  atexit((_func_5014 *)&LAB_143e62d70);
  return;
}



// FUNCTION 14019b980 `dynamic_initializer_for_'StatusStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'StatusStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__StatusStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1d40,0);
  FGenericPlatformString::Memcpy(DAT_1462a1d40,L"ShieldSerialNumber",0x26);
  atexit((_func_5014 *)&LAB_143e62d90);
  return;
}



// FUNCTION 14019b9e0 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1e10,0);
  FGenericPlatformString::Memcpy(DAT_1462a1e10,L"SkinCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e62db0);
  return;
}



// FUNCTION 14019ba20 FUN_14019ba20 body=59 status=ok
// SIG undefined FUN_14019ba20(void)

void FUN_14019ba20(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1eb0,0);
  FGenericPlatformString::Memcpy(DAT_1462a1eb0,L"SlaughterChallengesCompletion",0x3c);
  atexit((_func_5014 *)&LAB_143e62dd0);
  return;
}



// FUNCTION 14019bb00 FUN_14019bb00 body=117 status=ok
// SIG undefined FUN_14019bb00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14019bb00(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1468768b0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"GFxInventoryMenu.TargetGamma",0x400ccccd,
                  L"Gamma for the thumbnail render target.",0);
  _DAT_1468768a8 = &PTR_FUN_143f3ecf8;
  DAT_1468768b8 = (**(code **)(*DAT_1468768b0 + 0x40))(DAT_1468768b0);
  atexit(FUN_143e62df0);
  return;
}



// FUNCTION 14019bb90 FUN_14019bb90 body=59 status=ok
// SIG undefined FUN_14019bb90(void)

void FUN_14019bb90(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1ce0,0);
  FGenericPlatformString::Memcpy(DAT_1462a1ce0,L"TimePlayed",0x16);
  atexit((_func_5014 *)&LAB_143e62e40);
  return;
}



// FUNCTION 14019bbd0 FUN_14019bbd0 body=53 status=ok
// SIG undefined FUN_14019bbd0(void)

void FUN_14019bbd0(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_146876a68,
             L"One or more players are not licensed for or do not have destination {0}|platform(default=add-ons, xbox=add-ons, playstation=add-ons, stadia=add-ons) installed!"
             ,L"UIManager",L"TravelCancelDLCOwnershipText");
  atexit(FUN_143e62e60);
  return;
}



// FUNCTION 14019bc10 FUN_14019bc10 body=53 status=ok
// SIG undefined FUN_14019bc10(void)

void FUN_14019bc10(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_146876a50,L"Cannot travel while a player has a menu open!",L"UIManager",
             L"TravelCancelOpenedMenuText");
  atexit(FUN_143e62eb0);
  return;
}



// FUNCTION 14019bc50 FUN_14019bc50 body=53 status=ok
// SIG undefined FUN_14019bc50(void)

void FUN_14019bc50(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_146876a38,L"Cannot travel while a player is down!",L"UIManager",
             L"TravelCancelPlayerDownText");
  atexit(FUN_143e62f00);
  return;
}



// FUNCTION 14019bc90 FUN_14019bc90 body=53 status=ok
// SIG undefined FUN_14019bc90(void)

void FUN_14019bc90(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_146876a20,L"Travel Cancelled",L"UIManager",L"TravelCancelTitleText");
  atexit(FUN_143e62f50);
  return;
}



// FUNCTION 14019bcd0 FUN_14019bcd0 body=53 status=ok
// SIG undefined FUN_14019bcd0(void)

void FUN_14019bcd0(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_146876a08,
             L"Press {OakPC_OpenStatusMenu, 32, 32}  or {OakPC_PauseGame}  to cancel.",L"UIManager",
             L"TravelStartDescriptionText_LEAVEINTHESPACING");
  atexit(FUN_143e62fa0);
  return;
}



// FUNCTION 14019bd10 FUN_14019bd10 body=53 status=ok
// SIG undefined FUN_14019bd10(void)

void FUN_14019bd10(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_1468769f0,L"Traveling to {0}",L"UIManager",L"TravelStartPlayerText");
  atexit(FUN_143e62ff0);
  return;
}



// FUNCTION 14019bd50 FUN_14019bd50 body=53 status=ok
// SIG undefined FUN_14019bd50(void)

void FUN_14019bd50(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_1468769d8,L"Travel Countdown - {0}",L"UIManager",L"TravelStartTitleText");
  atexit(FUN_143e63040);
  return;
}



// FUNCTION 14019bdb0 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1bb0,0);
  FGenericPlatformString::Memcpy(DAT_1462a1bb0,L"UnexpectedControlMessage",0x32);
  atexit((_func_5014 *)&LAB_143e63090);
  return;
}



// FUNCTION 14019beb0 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1ab8,0);
  FGenericPlatformString::Memcpy(DAT_1462a1ab8,&DAT_1446ec670,8);
  atexit((_func_5014 *)&LAB_143e630b0);
  return;
}



// FUNCTION 14019bef0 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1d70,0);
  FGenericPlatformString::Memcpy(DAT_1462a1d70,L"Weapon1JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e630d0);
  return;
}



// FUNCTION 14019bf30 FUN_14019bf30 body=59 status=ok
// SIG undefined FUN_14019bf30(void)

void FUN_14019bf30(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1cf0,0);
  FGenericPlatformString::Memcpy(DAT_1462a1cf0,L"Weapon1SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e630f0);
  return;
}



// FUNCTION 14019bf70 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1d80,0);
  FGenericPlatformString::Memcpy(DAT_1462a1d80,L"Weapon2JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e63110);
  return;
}



// FUNCTION 14019bfb0 FUN_14019bfb0 body=59 status=ok
// SIG undefined FUN_14019bfb0(void)

void FUN_14019bfb0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1d00,0);
  FGenericPlatformString::Memcpy(DAT_1462a1d00,L"Weapon2SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e63130);
  return;
}



// FUNCTION 14019bff0 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1d90,0);
  FGenericPlatformString::Memcpy(DAT_1462a1d90,L"Weapon3JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e63150);
  return;
}



// FUNCTION 14019c030 FUN_14019c030 body=59 status=ok
// SIG undefined FUN_14019c030(void)

void FUN_14019c030(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1d10,0);
  FGenericPlatformString::Memcpy(DAT_1462a1d10,L"Weapon3SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e63170);
  return;
}



// FUNCTION 14019c070 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1da0,0);
  FGenericPlatformString::Memcpy(DAT_1462a1da0,L"Weapon4JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e63190);
  return;
}



// FUNCTION 14019c0b0 FUN_14019c0b0 body=59 status=ok
// SIG undefined FUN_14019c0b0(void)

void FUN_14019c0b0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1d20,0);
  FGenericPlatformString::Memcpy(DAT_1462a1d20,L"Weapon4SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e631b0);
  return;
}



// FUNCTION 14019c0f0 FUN_14019c0f0 body=59 status=ok
// SIG undefined FUN_14019c0f0(void)

void FUN_14019c0f0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1e60,0);
  FGenericPlatformString::Memcpy(DAT_1462a1e60,L"WeaponChallengesCompletion",0x36);
  atexit((_func_5014 *)&LAB_143e631d0);
  return;
}



// FUNCTION 14019c1b0 EOL_String'' body=115 status=ok
// SIG undefined EOL_String''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FDlgConfigWriter::EOL_String__(void)

{
  undefined *puVar1;
  int iVar2;
  longlong lVar3;
  
  puVar1 = PTR_DAT_1462a1a90;
  if ((PTR_DAT_1462a1a90 != (undefined *)0x0) && (*(short *)PTR_DAT_1462a1a90 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(short *)(PTR_DAT_1462a1a90 + lVar3 * 2) != 0);
    iVar2 = (int)lVar3 + 1;
    _DAT_146876858 = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146876850,0);
    }
    FGenericPlatformString::Memcpy(DAT_146876850,puVar1,(longlong)iVar2 * 2);
  }
  atexit((_func_5014 *)&LAB_143e631f0);
  return;
}



// FUNCTION 14019c370 FUN_14019c370 body=59 status=ok
// SIG undefined FUN_14019c370(void)

void FUN_14019c370(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2300,0);
  FGenericPlatformString::Memcpy(DAT_1462a2300,L"AbilityData",0x18);
  atexit((_func_5014 *)&LAB_143e632d0);
  return;
}



// FUNCTION 14019c450 FUN_14019c450 body=59 status=ok
// SIG undefined FUN_14019c450(void)

void FUN_14019c450(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a22b0,0);
  FGenericPlatformString::Memcpy(DAT_1462a22b0,L"ArtifactJsonData",0x22);
  atexit((_func_5014 *)&LAB_143e632f0);
  return;
}



// FUNCTION 14019c490 FUN_14019c490 body=59 status=ok
// SIG undefined FUN_14019c490(void)

void FUN_14019c490(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2230,0);
  FGenericPlatformString::Memcpy(DAT_1462a2230,L"ArtifactSerialNumber",0x2a);
  atexit((_func_5014 *)&LAB_143e63310);
  return;
}



// FUNCTION 14019c4d0 `dynamic_initializer_for_'AwayText'' body=53 status=ok
// SIG undefined `dynamic_initializer_for_'AwayText''(void)

void EOnlinePresenceState::_dynamic_initializer_for__AwayText__(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_146876f68,L"Away",L"OnlinePresence",L"Away");
  atexit(FUN_143e63330);
  return;
}



// FUNCTION 14019c510 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a22d0,0);
  FGenericPlatformString::Memcpy(DAT_1462a22d0,L"BodyCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e63380);
  return;
}



// FUNCTION 14019c550 FUN_14019c550 body=59 status=ok
// SIG undefined FUN_14019c550(void)

void FUN_14019c550(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2160,0);
  FGenericPlatformString::Memcpy(DAT_1462a2160,L"CanJoin",0x10);
  atexit((_func_5014 *)&LAB_143e633a0);
  return;
}



// FUNCTION 14019c5d0 `dynamic_initializer_for_'ChatText'' body=53 status=ok
// SIG undefined `dynamic_initializer_for_'ChatText''(void)

void EOnlinePresenceState::_dynamic_initializer_for__ChatText__(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_146876fb0,L"Chat",L"OnlinePresence",L"Chat");
  atexit(FUN_143e633c0);
  return;
}



// FUNCTION 14019c610 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a22a0,0);
  FGenericPlatformString::Memcpy(DAT_1462a22a0,L"ClassItemJsonData",0x24);
  atexit((_func_5014 *)&LAB_143e63410);
  return;
}



// FUNCTION 14019c650 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2220,0);
  FGenericPlatformString::Memcpy(DAT_1462a2220,L"ClassItemSerialNumber",0x2c);
  atexit((_func_5014 *)&LAB_143e63430);
  return;
}



// FUNCTION 14019c6d0 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2350,0);
  FGenericPlatformString::Memcpy(DAT_1462a2350,L"CrewChallengesCompletion",0x32);
  atexit((_func_5014 *)&LAB_143e63450);
  return;
}



// FUNCTION 14019c750 FUN_14019c750 body=59 status=ok
// SIG undefined FUN_14019c750(void)

void FUN_14019c750(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a23b0,0);
  FGenericPlatformString::Memcpy(DAT_1462a23b0,L"DateTime",0x12);
  atexit((_func_5014 *)&LAB_143e63470);
  return;
}



// FUNCTION 14019c7b0 `dynamic_initializer_for_'DefaultAppIdKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'DefaultAppIdKey''(void)

void _dynamic_initializer_for__DefaultAppIdKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2420,0);
  FGenericPlatformString::Memcpy(DAT_1462a2420,L"AppId",0xc);
  atexit((_func_5014 *)&LAB_143e63490);
  return;
}



// FUNCTION 14019c7f0 `dynamic_initializer_for_'DefaultPlatformKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'DefaultPlatformKey''(void)

void _dynamic_initializer_for__DefaultPlatformKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2430,0);
  FGenericPlatformString::Memcpy(DAT_1462a2430,L"Platform",0x12);
  atexit((_func_5014 *)&LAB_143e634b0);
  return;
}



// FUNCTION 14019c830 `dynamic_initializer_for_'DefaultPresenceKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'DefaultPresenceKey''(void)

void _dynamic_initializer_for__DefaultPresenceKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2410,0);
  FGenericPlatformString::Memcpy(DAT_1462a2410,L"RichPresence",0x1a);
  atexit((_func_5014 *)&LAB_143e634d0);
  return;
}



// FUNCTION 14019c910 `dynamic_initializer_for_'DoNotDisturbText'' body=53 status=ok
// SIG undefined `dynamic_initializer_for_'DoNotDisturbText''(void)

void EOnlinePresenceState::_dynamic_initializer_for__DoNotDisturbText__(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_146876f98,L"DoNotDisturb",L"OnlinePresence",L"DoNotDisturb");
  atexit(FUN_143e634f0);
  return;
}



// FUNCTION 14019c970 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2490,0);
  FGenericPlatformString::Memcpy(DAT_1462a2490,L"DuplicateReservationFound",0x34);
  atexit((_func_5014 *)&LAB_143e63540);
  return;
}



// FUNCTION 14019c9d0 `dynamic_initializer_for_'kResultStringCannotLoadPreset'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kResultStringCannotLoadPreset''(void)

void _dynamic_initializer_for__kResultStringCannotLoadPreset__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a22f0,0);
  FGenericPlatformString::Memcpy(DAT_1462a22f0,L"EmoteCustomizationHash",0x2e);
  atexit((_func_5014 *)&LAB_143e63560);
  return;
}



// FUNCTION 14019ca10 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2340,0);
  FGenericPlatformString::Memcpy(DAT_1462a2340,L"EnemyChallengesCompletion",0x34);
  atexit((_func_5014 *)&LAB_143e63580);
  return;
}



// FUNCTION 14019ca90 `dynamic_initializer_for_'kResultStringAssetDefAlrealdyLoaded'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kResultStringAssetDefAlrealdyLoaded''(void)

void _dynamic_initializer_for__kResultStringAssetDefAlrealdyLoaded__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2360,0);
  FGenericPlatformString::Memcpy(DAT_1462a2360,L"ExplorationChallengesCompletion",0x40);
  atexit((_func_5014 *)&LAB_143e635a0);
  return;
}



// FUNCTION 14019cad0 `dynamic_initializer_for_'ExtendedAwayText'' body=53 status=ok
// SIG undefined `dynamic_initializer_for_'ExtendedAwayText''(void)

void EOnlinePresenceState::_dynamic_initializer_for__ExtendedAwayText__(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_146876f80,L"ExtendedAway",L"OnlinePresence",L"ExtendedAway");
  atexit(FUN_143e635c0);
  return;
}



// FUNCTION 14019cbb0 FUN_14019cbb0 body=59 status=ok
// SIG undefined FUN_14019cbb0(void)

void FUN_14019cbb0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2190,0);
  FGenericPlatformString::Memcpy(DAT_1462a2190,L"FriendActivityStatus",0x2a);
  atexit((_func_5014 *)&LAB_143e63610);
  return;
}



// FUNCTION 14019cbf0 FUN_14019cbf0 body=59 status=ok
// SIG undefined FUN_14019cbf0(void)

void FUN_14019cbf0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2400,0);
  FGenericPlatformString::Memcpy(DAT_1462a2400,L"ChallengeInfo",0x1c);
  atexit((_func_5014 *)&LAB_143e63630);
  return;
}



// FUNCTION 14019cc30 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a23f0,0);
  FGenericPlatformString::Memcpy(DAT_1462a23f0,L"FriendCrewQuarterInfo",0x2c);
  atexit((_func_5014 *)&LAB_143e63650);
  return;
}



// FUNCTION 14019cc70 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a23d0,0);
  FGenericPlatformString::Memcpy(DAT_1462a23d0,L"FriendLoadOutInfo",0x24);
  atexit((_func_5014 *)&LAB_143e63670);
  return;
}



// FUNCTION 14019ccb0 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a23c0,0);
  FGenericPlatformString::Memcpy(DAT_1462a23c0,L"FriendStatusPresenceInfo",0x32);
  atexit((_func_5014 *)&LAB_143e63690);
  return;
}



// FUNCTION 14019ccf0 FUN_14019ccf0 body=59 status=ok
// SIG undefined FUN_14019ccf0(void)

void FUN_14019ccf0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a23e0,0);
  FGenericPlatformString::Memcpy(DAT_1462a23e0,L"FriendSkillTreeInfo",0x28);
  atexit((_func_5014 *)&LAB_143e636b0);
  return;
}



// FUNCTION 14019cd30 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2310,0);
  FGenericPlatformString::Memcpy(DAT_1462a2310,L"FriendStatusThing",0x24);
  atexit((_func_5014 *)&LAB_143e636d0);
  return;
}



// FUNCTION 14019cd90 FUN_14019cd90 body=59 status=ok
// SIG undefined FUN_14019cd90(void)

void FUN_14019cd90(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2320,0);
  FGenericPlatformString::Memcpy(DAT_1462a2320,L"GameCompletion",0x1e);
  atexit((_func_5014 *)&LAB_143e636f0);
  return;
}



// FUNCTION 14019cdd0 FUN_14019cdd0 body=59 status=ok
// SIG undefined FUN_14019cdd0(void)

void FUN_14019cdd0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2460,0);
  FGenericPlatformString::Memcpy(DAT_1462a2460,L"GenericFailure",0x1e);
  atexit((_func_5014 *)&LAB_143e63710);
  return;
}



// FUNCTION 14019ce10 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2280,0);
  FGenericPlatformString::Memcpy(DAT_1462a2280,L"GrenadeJsonData",0x20);
  atexit((_func_5014 *)&LAB_143e63730);
  return;
}



// FUNCTION 14019ce50 FUN_14019ce50 body=59 status=ok
// SIG undefined FUN_14019ce50(void)

void FUN_14019ce50(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2200,0);
  FGenericPlatformString::Memcpy(DAT_1462a2200,L"GrenadeSerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e63750);
  return;
}



// FUNCTION 14019ce90 FUN_14019ce90 body=59 status=ok
// SIG undefined FUN_14019ce90(void)

void FUN_14019ce90(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a21a0,0);
  FGenericPlatformString::Memcpy(DAT_1462a21a0,L"GuardianRank",0x1a);
  atexit((_func_5014 *)&LAB_143e63770);
  return;
}



// FUNCTION 14019ced0 FUN_14019ced0 body=59 status=ok
// SIG undefined FUN_14019ced0(void)

void FUN_14019ced0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2180,0);
  FGenericPlatformString::Memcpy(DAT_1462a2180,L"HasSelectedCharacter",0x2a);
  atexit((_func_5014 *)&LAB_143e63790);
  return;
}



// FUNCTION 14019cf10 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a22c0,0);
  FGenericPlatformString::Memcpy(DAT_1462a22c0,L"HeadCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e637b0);
  return;
}



// FUNCTION 14019d020 FUN_14019d020 body=59 status=ok
// SIG undefined FUN_14019d020(void)

void FUN_14019d020(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2480,0);
  FGenericPlatformString::Memcpy(DAT_1462a2480,L"InvalidClientBeaconType",0x30);
  atexit((_func_5014 *)&LAB_143e637d0);
  return;
}



// FUNCTION 14019d1a0 FUN_14019d1a0 body=59 status=ok
// SIG undefined FUN_14019d1a0(void)

void FUN_14019d1a0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a20d0,0);
  FGenericPlatformString::Memcpy(DAT_1462a20d0,L"Level",0xc);
  atexit((_func_5014 *)&LAB_143e637f0);
  return;
}



// FUNCTION 14019d1e0 FUN_14019d1e0 body=59 status=ok
// SIG undefined FUN_14019d1e0(void)

void FUN_14019d1e0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a24d0,0);
  FGenericPlatformString::Memcpy(DAT_1462a24d0,&DAT_1446ff274,4);
  atexit((_func_5014 *)&LAB_143e63810);
  return;
}



// FUNCTION 14019d220 FUN_14019d220 body=59 status=ok
// SIG undefined FUN_14019d220(void)

void FUN_14019d220(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2130,0);
  FGenericPlatformString::Memcpy(DAT_1462a2130,L"LocationX",0x14);
  atexit((_func_5014 *)&LAB_143e63830);
  return;
}



// FUNCTION 14019d260 FUN_14019d260 body=59 status=ok
// SIG undefined FUN_14019d260(void)

void FUN_14019d260(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2140,0);
  FGenericPlatformString::Memcpy(DAT_1462a2140,L"LocationY",0x14);
  atexit((_func_5014 *)&LAB_143e63850);
  return;
}



// FUNCTION 14019d2a0 FUN_14019d2a0 body=59 status=ok
// SIG undefined FUN_14019d2a0(void)

void FUN_14019d2a0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2150,0);
  FGenericPlatformString::Memcpy(DAT_1462a2150,L"LocationZ",0x14);
  atexit((_func_5014 *)&LAB_143e63870);
  return;
}



// FUNCTION 14019d2e0 FUN_14019d2e0 body=59 status=ok
// SIG undefined FUN_14019d2e0(void)

void FUN_14019d2e0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2170,0);
  FGenericPlatformString::Memcpy(DAT_1462a2170,L"LookingForHelp",0x1e);
  atexit((_func_5014 *)&LAB_143e63890);
  return;
}



// FUNCTION 14019d320 FUN_14019d320 body=59 status=ok
// SIG undefined FUN_14019d320(void)

void FUN_14019d320(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a20e0,0);
  FGenericPlatformString::Memcpy(DAT_1462a20e0,L"MapName",0x10);
  atexit((_func_5014 *)&LAB_143e638b0);
  return;
}



// FUNCTION 14019d3a0 FUN_14019d3a0 body=59 status=ok
// SIG undefined FUN_14019d3a0(void)

void FUN_14019d3a0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a24a0,0);
  FGenericPlatformString::Memcpy(DAT_1462a24a0,L"MismatchedBeaconNetVersions",0x38);
  atexit((_func_5014 *)&LAB_143e638d0);
  return;
}



// FUNCTION 14019d3e0 FUN_14019d3e0 body=59 status=ok
// SIG undefined FUN_14019d3e0(void)

void FUN_14019d3e0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a24c0,0);
  FGenericPlatformString::Memcpy(DAT_1462a24c0,L"MissingDLC",0x16);
  atexit((_func_5014 *)&LAB_143e638f0);
  return;
}



// FUNCTION 14019d420 FUN_14019d420 body=59 status=ok
// SIG undefined FUN_14019d420(void)

void FUN_14019d420(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2120,0);
  FGenericPlatformString::Memcpy(DAT_1462a2120,L"MissionHash",0x18);
  atexit((_func_5014 *)&LAB_143e63910);
  return;
}



// FUNCTION 14019d680 FUN_14019d680 body=59 status=ok
// SIG undefined FUN_14019d680(void)

void FUN_14019d680(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2450,0);
  FGenericPlatformString::Memcpy(DAT_1462a2450,L"NetworkFailure",0x1e);
  atexit((_func_5014 *)&LAB_143e63930);
  return;
}



// FUNCTION 14019d700 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2470,0);
  FGenericPlatformString::Memcpy(DAT_1462a2470,L"NotAcceptingReservations",0x32);
  atexit((_func_5014 *)&LAB_143e63950);
  return;
}



// FUNCTION 14019d740 `dynamic_initializer_for_'OfflineText'' body=53 status=ok
// SIG undefined `dynamic_initializer_for_'OfflineText''(void)

void EOnlinePresenceState::_dynamic_initializer_for__OfflineText__(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_146876f50,L"Offline",L"OnlinePresence",L"Offline");
  atexit(FUN_143e63970);
  return;
}



// FUNCTION 14019d780 `dynamic_initializer_for_'OnlineText'' body=53 status=ok
// SIG undefined `dynamic_initializer_for_'OnlineText''(void)

void EOnlinePresenceState::_dynamic_initializer_for__OnlineText__(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_146876f38,L"Online",L"OnlinePresence",L"Online");
  atexit(FUN_143e639c0);
  return;
}



// FUNCTION 14019d7e0 FUN_14019d7e0 body=59 status=ok
// SIG undefined FUN_14019d7e0(void)

void FUN_14019d7e0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2100,0);
  FGenericPlatformString::Memcpy(DAT_1462a2100,L"PartyPlayerCount",0x22);
  atexit((_func_5014 *)&LAB_143e63a10);
  return;
}



// FUNCTION 14019d900 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2110,0);
  FGenericPlatformString::Memcpy(DAT_1462a2110,L"PlayerClassIdentifierHash",0x34);
  atexit((_func_5014 *)&LAB_143e63a30);
  return;
}



// FUNCTION 14019d940 FUN_14019d940 body=59 status=ok
// SIG undefined FUN_14019d940(void)

void FUN_14019d940(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a23a0,0);
  FGenericPlatformString::Memcpy(DAT_1462a23a0,L"PlayerId",0x12);
  atexit((_func_5014 *)&LAB_143e63a50);
  return;
}



// FUNCTION 14019d980 `dynamic_initializer_for_'PresenceResourceKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PresenceResourceKey''(void)

void _dynamic_initializer_for__PresenceResourceKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2440,0);
  FGenericPlatformString::Memcpy(DAT_1462a2440,L"ResourceKey",0x18);
  atexit((_func_5014 *)&LAB_143e63a70);
  return;
}



// FUNCTION 14019da80 LocalizationSourceControlSettingsCategoryName'' body=59 status=ok
// SIG undefined LocalizationSourceControlSettingsCategoryName''(void)

void `dynamic_initializer_for_'FLocalizationSourceControlSettings::
     LocalizationSourceControlSettingsCategoryName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2370,0);
  FGenericPlatformString::Memcpy(DAT_1462a2370,L"ProvingGroundChallengesCompletion",0x44);
  atexit((_func_5014 *)&LAB_143e63a90);
  return;
}



// FUNCTION 14019db00 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2390,0);
  FGenericPlatformString::Memcpy(DAT_1462a2390,L"RaidChallengesCompletion",0x32);
  atexit((_func_5014 *)&LAB_143e63ab0);
  return;
}



// FUNCTION 14019db80 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2090,0);
  FGenericPlatformString::Memcpy(DAT_1462a2090,L"<img src=\"%s\"></>",0x24);
  atexit((_func_5014 *)&LAB_143e63ad0);
  return;
}



// FUNCTION 14019dd60 FUN_14019dd60 body=59 status=ok
// SIG undefined FUN_14019dd60(void)

void FUN_14019dd60(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a20f0,0);
  FGenericPlatformString::Memcpy(DAT_1462a20f0,L"SessionId",0x14);
  atexit((_func_5014 *)&LAB_143e63af0);
  return;
}



// FUNCTION 14019dda0 FUN_14019dda0 body=59 status=ok
// SIG undefined FUN_14019dda0(void)

void FUN_14019dda0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2290,0);
  FGenericPlatformString::Memcpy(DAT_1462a2290,L"ShieldJsonData",0x1e);
  atexit((_func_5014 *)&LAB_143e63b10);
  return;
}



// FUNCTION 14019dde0 `dynamic_initializer_for_'StatusStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'StatusStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__StatusStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2210,0);
  FGenericPlatformString::Memcpy(DAT_1462a2210,L"ShieldSerialNumber",0x26);
  atexit((_func_5014 *)&LAB_143e63b30);
  return;
}



// FUNCTION 14019de60 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a22e0,0);
  FGenericPlatformString::Memcpy(DAT_1462a22e0,L"SkinCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e63b50);
  return;
}



// FUNCTION 14019dea0 FUN_14019dea0 body=59 status=ok
// SIG undefined FUN_14019dea0(void)

void FUN_14019dea0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2380,0);
  FGenericPlatformString::Memcpy(DAT_1462a2380,L"SlaughterChallengesCompletion",0x3c);
  atexit((_func_5014 *)&LAB_143e63b70);
  return;
}



// FUNCTION 14019dfb0 FUN_14019dfb0 body=59 status=ok
// SIG undefined FUN_14019dfb0(void)

void FUN_14019dfb0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a21b0,0);
  FGenericPlatformString::Memcpy(DAT_1462a21b0,L"TimePlayed",0x16);
  atexit((_func_5014 *)&LAB_143e63b90);
  return;
}



// FUNCTION 14019e030 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a24b0,0);
  FGenericPlatformString::Memcpy(DAT_1462a24b0,L"UnexpectedControlMessage",0x32);
  atexit((_func_5014 *)&LAB_143e63be0);
  return;
}



// FUNCTION 14019e110 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1ff8,0);
  FGenericPlatformString::Memcpy(DAT_1462a1ff8,&DAT_14470c678,8);
  atexit((_func_5014 *)&LAB_143e63c00);
  return;
}



// FUNCTION 14019e150 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2240,0);
  FGenericPlatformString::Memcpy(DAT_1462a2240,L"Weapon1JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e63c20);
  return;
}



// FUNCTION 14019e190 FUN_14019e190 body=59 status=ok
// SIG undefined FUN_14019e190(void)

void FUN_14019e190(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a21c0,0);
  FGenericPlatformString::Memcpy(DAT_1462a21c0,L"Weapon1SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e63c40);
  return;
}



// FUNCTION 14019e1d0 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2250,0);
  FGenericPlatformString::Memcpy(DAT_1462a2250,L"Weapon2JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e63c60);
  return;
}



// FUNCTION 14019e210 FUN_14019e210 body=59 status=ok
// SIG undefined FUN_14019e210(void)

void FUN_14019e210(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a21d0,0);
  FGenericPlatformString::Memcpy(DAT_1462a21d0,L"Weapon2SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e63c80);
  return;
}



// FUNCTION 14019e250 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2260,0);
  FGenericPlatformString::Memcpy(DAT_1462a2260,L"Weapon3JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e63ca0);
  return;
}



// FUNCTION 14019e290 FUN_14019e290 body=59 status=ok
// SIG undefined FUN_14019e290(void)

void FUN_14019e290(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a21e0,0);
  FGenericPlatformString::Memcpy(DAT_1462a21e0,L"Weapon3SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e63cc0);
  return;
}



// FUNCTION 14019e2d0 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2270,0);
  FGenericPlatformString::Memcpy(DAT_1462a2270,L"Weapon4JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e63ce0);
  return;
}



// FUNCTION 14019e310 FUN_14019e310 body=59 status=ok
// SIG undefined FUN_14019e310(void)

void FUN_14019e310(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a21f0,0);
  FGenericPlatformString::Memcpy(DAT_1462a21f0,L"Weapon4SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e63d00);
  return;
}



// FUNCTION 14019e350 FUN_14019e350 body=59 status=ok
// SIG undefined FUN_14019e350(void)

void FUN_14019e350(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2330,0);
  FGenericPlatformString::Memcpy(DAT_1462a2330,L"WeaponChallengesCompletion",0x36);
  atexit((_func_5014 *)&LAB_143e63d20);
  return;
}



// FUNCTION 14019e470 EOL_String'' body=115 status=ok
// SIG undefined EOL_String''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FDlgConfigWriter::EOL_String__(void)

{
  undefined *puVar1;
  int iVar2;
  longlong lVar3;
  
  puVar1 = PTR_DAT_1462a1fe0;
  if ((PTR_DAT_1462a1fe0 != (undefined *)0x0) && (*(short *)PTR_DAT_1462a1fe0 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(short *)(PTR_DAT_1462a1fe0 + lVar3 * 2) != 0);
    iVar2 = (int)lVar3 + 1;
    _DAT_146876ef8 = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146876ef0,0);
    }
    FGenericPlatformString::Memcpy(DAT_146876ef0,puVar1,(longlong)iVar2 * 2);
  }
  atexit((_func_5014 *)&LAB_143e63d40);
  return;
}



// FUNCTION 14019e630 FUN_14019e630 body=59 status=ok
// SIG undefined FUN_14019e630(void)

void FUN_14019e630(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2810,0);
  FGenericPlatformString::Memcpy(DAT_1462a2810,L"AbilityData",0x18);
  atexit((_func_5014 *)&LAB_143e63d60);
  return;
}



// FUNCTION 14019e710 FUN_14019e710 body=59 status=ok
// SIG undefined FUN_14019e710(void)

void FUN_14019e710(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a27c0,0);
  FGenericPlatformString::Memcpy(DAT_1462a27c0,L"ArtifactJsonData",0x22);
  atexit((_func_5014 *)&LAB_143e63d80);
  return;
}



// FUNCTION 14019e750 FUN_14019e750 body=59 status=ok
// SIG undefined FUN_14019e750(void)

void FUN_14019e750(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2740,0);
  FGenericPlatformString::Memcpy(DAT_1462a2740,L"ArtifactSerialNumber",0x2a);
  atexit((_func_5014 *)&LAB_143e63da0);
  return;
}



// FUNCTION 14019e790 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a27e0,0);
  FGenericPlatformString::Memcpy(DAT_1462a27e0,L"BodyCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e63dc0);
  return;
}



// FUNCTION 14019e7d0 FUN_14019e7d0 body=59 status=ok
// SIG undefined FUN_14019e7d0(void)

void FUN_14019e7d0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2670,0);
  FGenericPlatformString::Memcpy(DAT_1462a2670,L"CanJoin",0x10);
  atexit((_func_5014 *)&LAB_143e63de0);
  return;
}



// FUNCTION 14019e850 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a27b0,0);
  FGenericPlatformString::Memcpy(DAT_1462a27b0,L"ClassItemJsonData",0x24);
  atexit((_func_5014 *)&LAB_143e63e00);
  return;
}



// FUNCTION 14019e890 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2730,0);
  FGenericPlatformString::Memcpy(DAT_1462a2730,L"ClassItemSerialNumber",0x2c);
  atexit((_func_5014 *)&LAB_143e63e20);
  return;
}



// FUNCTION 14019e9f0 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2860,0);
  FGenericPlatformString::Memcpy(DAT_1462a2860,L"CrewChallengesCompletion",0x32);
  atexit((_func_5014 *)&LAB_143e63e40);
  return;
}



// FUNCTION 14019ea80 FUN_14019ea80 body=59 status=ok
// SIG undefined FUN_14019ea80(void)

void FUN_14019ea80(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a29c0,0);
  FGenericPlatformString::Memcpy(DAT_1462a29c0,L"Proj_HeavyDarkTraunt_Roller",0x38);
  atexit((_func_5014 *)&LAB_143e63e60);
  return;
}



// FUNCTION 14019eac0 FUN_14019eac0 body=59 status=ok
// SIG undefined FUN_14019eac0(void)

void FUN_14019eac0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a28c0,0);
  FGenericPlatformString::Memcpy(DAT_1462a28c0,L"DateTime",0x12);
  atexit((_func_5014 *)&LAB_143e63e80);
  return;
}



// FUNCTION 14019ebe0 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2960,0);
  FGenericPlatformString::Memcpy(DAT_1462a2960,L"DuplicateReservationFound",0x34);
  atexit((_func_5014 *)&LAB_143e63ea0);
  return;
}



// FUNCTION 14019ec20 `dynamic_initializer_for_'kResultStringCannotLoadPreset'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kResultStringCannotLoadPreset''(void)

void _dynamic_initializer_for__kResultStringCannotLoadPreset__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2800,0);
  FGenericPlatformString::Memcpy(DAT_1462a2800,L"EmoteCustomizationHash",0x2e);
  atexit((_func_5014 *)&LAB_143e63ec0);
  return;
}



// FUNCTION 14019ec60 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2850,0);
  FGenericPlatformString::Memcpy(DAT_1462a2850,L"EnemyChallengesCompletion",0x34);
  atexit((_func_5014 *)&LAB_143e63ee0);
  return;
}



// FUNCTION 14019ece0 `dynamic_initializer_for_'kResultStringAssetDefAlrealdyLoaded'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kResultStringAssetDefAlrealdyLoaded''(void)

void _dynamic_initializer_for__kResultStringAssetDefAlrealdyLoaded__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2870,0);
  FGenericPlatformString::Memcpy(DAT_1462a2870,L"ExplorationChallengesCompletion",0x40);
  atexit((_func_5014 *)&LAB_143e63f00);
  return;
}



// FUNCTION 14019edc0 FUN_14019edc0 body=59 status=ok
// SIG undefined FUN_14019edc0(void)

void FUN_14019edc0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a26a0,0);
  FGenericPlatformString::Memcpy(DAT_1462a26a0,L"FriendActivityStatus",0x2a);
  atexit((_func_5014 *)&LAB_143e63f20);
  return;
}



// FUNCTION 14019ee00 FUN_14019ee00 body=59 status=ok
// SIG undefined FUN_14019ee00(void)

void FUN_14019ee00(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2910,0);
  FGenericPlatformString::Memcpy(DAT_1462a2910,L"ChallengeInfo",0x1c);
  atexit((_func_5014 *)&LAB_143e63f40);
  return;
}



// FUNCTION 14019ee40 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2900,0);
  FGenericPlatformString::Memcpy(DAT_1462a2900,L"FriendCrewQuarterInfo",0x2c);
  atexit((_func_5014 *)&LAB_143e63f60);
  return;
}



// FUNCTION 14019ee80 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a28e0,0);
  FGenericPlatformString::Memcpy(DAT_1462a28e0,L"FriendLoadOutInfo",0x24);
  atexit((_func_5014 *)&LAB_143e63f80);
  return;
}



// FUNCTION 14019eec0 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a28d0,0);
  FGenericPlatformString::Memcpy(DAT_1462a28d0,L"FriendStatusPresenceInfo",0x32);
  atexit((_func_5014 *)&LAB_143e63fa0);
  return;
}



// FUNCTION 14019ef00 FUN_14019ef00 body=59 status=ok
// SIG undefined FUN_14019ef00(void)

void FUN_14019ef00(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a28f0,0);
  FGenericPlatformString::Memcpy(DAT_1462a28f0,L"FriendSkillTreeInfo",0x28);
  atexit((_func_5014 *)&LAB_143e63fc0);
  return;
}



// FUNCTION 14019ef40 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2820,0);
  FGenericPlatformString::Memcpy(DAT_1462a2820,L"FriendStatusThing",0x24);
  atexit((_func_5014 *)&LAB_143e63fe0);
  return;
}



// FUNCTION 14019ef80 FUN_14019ef80 body=59 status=ok
// SIG undefined FUN_14019ef80(void)

void FUN_14019ef80(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2830,0);
  FGenericPlatformString::Memcpy(DAT_1462a2830,L"GameCompletion",0x1e);
  atexit((_func_5014 *)&LAB_143e64000);
  return;
}



// FUNCTION 14019efc0 FUN_14019efc0 body=59 status=ok
// SIG undefined FUN_14019efc0(void)

void FUN_14019efc0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2930,0);
  FGenericPlatformString::Memcpy(DAT_1462a2930,L"GenericFailure",0x1e);
  atexit((_func_5014 *)&LAB_143e64020);
  return;
}



// FUNCTION 14019f000 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2790,0);
  FGenericPlatformString::Memcpy(DAT_1462a2790,L"GrenadeJsonData",0x20);
  atexit((_func_5014 *)&LAB_143e64040);
  return;
}



// FUNCTION 14019f040 FUN_14019f040 body=59 status=ok
// SIG undefined FUN_14019f040(void)

void FUN_14019f040(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2710,0);
  FGenericPlatformString::Memcpy(DAT_1462a2710,L"GrenadeSerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e64060);
  return;
}



// FUNCTION 14019f080 FUN_14019f080 body=59 status=ok
// SIG undefined FUN_14019f080(void)

void FUN_14019f080(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a26b0,0);
  FGenericPlatformString::Memcpy(DAT_1462a26b0,L"GuardianRank",0x1a);
  atexit((_func_5014 *)&LAB_143e64080);
  return;
}



// FUNCTION 14019f0c0 FUN_14019f0c0 body=59 status=ok
// SIG undefined FUN_14019f0c0(void)

void FUN_14019f0c0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2690,0);
  FGenericPlatformString::Memcpy(DAT_1462a2690,L"HasSelectedCharacter",0x2a);
  atexit((_func_5014 *)&LAB_143e640a0);
  return;
}



// FUNCTION 14019f100 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a27d0,0);
  FGenericPlatformString::Memcpy(DAT_1462a27d0,L"HeadCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e640c0);
  return;
}



// FUNCTION 14019f1d0 FUN_14019f1d0 body=59 status=ok
// SIG undefined FUN_14019f1d0(void)

void FUN_14019f1d0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2950,0);
  FGenericPlatformString::Memcpy(DAT_1462a2950,L"InvalidClientBeaconType",0x30);
  atexit((_func_5014 *)&LAB_143e640e0);
  return;
}



// FUNCTION 14019f350 FUN_14019f350 body=59 status=ok
// SIG undefined FUN_14019f350(void)

void FUN_14019f350(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a25e0,0);
  FGenericPlatformString::Memcpy(DAT_1462a25e0,L"Level",0xc);
  atexit((_func_5014 *)&LAB_143e64100);
  return;
}



// FUNCTION 14019f390 FUN_14019f390 body=59 status=ok
// SIG undefined FUN_14019f390(void)

void FUN_14019f390(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2640,0);
  FGenericPlatformString::Memcpy(DAT_1462a2640,L"LocationX",0x14);
  atexit((_func_5014 *)&LAB_143e64120);
  return;
}



// FUNCTION 14019f3d0 FUN_14019f3d0 body=59 status=ok
// SIG undefined FUN_14019f3d0(void)

void FUN_14019f3d0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2650,0);
  FGenericPlatformString::Memcpy(DAT_1462a2650,L"LocationY",0x14);
  atexit((_func_5014 *)&LAB_143e64140);
  return;
}



// FUNCTION 14019f410 FUN_14019f410 body=59 status=ok
// SIG undefined FUN_14019f410(void)

void FUN_14019f410(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2660,0);
  FGenericPlatformString::Memcpy(DAT_1462a2660,L"LocationZ",0x14);
  atexit((_func_5014 *)&LAB_143e64160);
  return;
}



// FUNCTION 14019f450 FUN_14019f450 body=59 status=ok
// SIG undefined FUN_14019f450(void)

void FUN_14019f450(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2680,0);
  FGenericPlatformString::Memcpy(DAT_1462a2680,L"LookingForHelp",0x1e);
  atexit((_func_5014 *)&LAB_143e64180);
  return;
}



// FUNCTION 14019f490 FUN_14019f490 body=59 status=ok
// SIG undefined FUN_14019f490(void)

void FUN_14019f490(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a25f0,0);
  FGenericPlatformString::Memcpy(DAT_1462a25f0,L"MapName",0x10);
  atexit((_func_5014 *)&LAB_143e641a0);
  return;
}



// FUNCTION 14019f510 FUN_14019f510 body=59 status=ok
// SIG undefined FUN_14019f510(void)

void FUN_14019f510(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2970,0);
  FGenericPlatformString::Memcpy(DAT_1462a2970,L"MismatchedBeaconNetVersions",0x38);
  atexit((_func_5014 *)&LAB_143e641c0);
  return;
}



// FUNCTION 14019f550 FUN_14019f550 body=59 status=ok
// SIG undefined FUN_14019f550(void)

void FUN_14019f550(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2990,0);
  FGenericPlatformString::Memcpy(DAT_1462a2990,L"MissingDLC",0x16);
  atexit((_func_5014 *)&LAB_143e641e0);
  return;
}



// FUNCTION 14019f590 FUN_14019f590 body=59 status=ok
// SIG undefined FUN_14019f590(void)

void FUN_14019f590(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2630,0);
  FGenericPlatformString::Memcpy(DAT_1462a2630,L"MissionHash",0x18);
  atexit((_func_5014 *)&LAB_143e64200);
  return;
}



// FUNCTION 14019f7b0 FUN_14019f7b0 body=59 status=ok
// SIG undefined FUN_14019f7b0(void)

void FUN_14019f7b0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2920,0);
  FGenericPlatformString::Memcpy(DAT_1462a2920,L"NetworkFailure",0x1e);
  atexit((_func_5014 *)&LAB_143e64220);
  return;
}



// FUNCTION 14019f830 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2940,0);
  FGenericPlatformString::Memcpy(DAT_1462a2940,L"NotAcceptingReservations",0x32);
  atexit((_func_5014 *)&LAB_143e64240);
  return;
}



// FUNCTION 14019f8a0 FUN_14019f8a0 body=59 status=ok
// SIG undefined FUN_14019f8a0(void)

void FUN_14019f8a0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2610,0);
  FGenericPlatformString::Memcpy(DAT_1462a2610,L"PartyPlayerCount",0x22);
  atexit((_func_5014 *)&LAB_143e64260);
  return;
}



// FUNCTION 14019f9e0 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2620,0);
  FGenericPlatformString::Memcpy(DAT_1462a2620,L"PlayerClassIdentifierHash",0x34);
  atexit((_func_5014 *)&LAB_143e64280);
  return;
}



// FUNCTION 14019fa20 FUN_14019fa20 body=59 status=ok
// SIG undefined FUN_14019fa20(void)

void FUN_14019fa20(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a28b0,0);
  FGenericPlatformString::Memcpy(DAT_1462a28b0,L"PlayerId",0x12);
  atexit((_func_5014 *)&LAB_143e642a0);
  return;
}



// FUNCTION 14019fb20 LocalizationSourceControlSettingsCategoryName'' body=59 status=ok
// SIG undefined LocalizationSourceControlSettingsCategoryName''(void)

void `dynamic_initializer_for_'FLocalizationSourceControlSettings::
     LocalizationSourceControlSettingsCategoryName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2880,0);
  FGenericPlatformString::Memcpy(DAT_1462a2880,L"ProvingGroundChallengesCompletion",0x44);
  atexit((_func_5014 *)&LAB_143e642c0);
  return;
}



// FUNCTION 14019fba0 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a28a0,0);
  FGenericPlatformString::Memcpy(DAT_1462a28a0,L"RaidChallengesCompletion",0x32);
  atexit((_func_5014 *)&LAB_143e642e0);
  return;
}



// FUNCTION 14019fc20 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2518,0);
  FGenericPlatformString::Memcpy(DAT_1462a2518,L"<img src=\"%s\"></>",0x24);
  atexit((_func_5014 *)&LAB_143e64300);
  return;
}



// FUNCTION 14019fde0 FUN_14019fde0 body=59 status=ok
// SIG undefined FUN_14019fde0(void)

void FUN_14019fde0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2600,0);
  FGenericPlatformString::Memcpy(DAT_1462a2600,L"SessionId",0x14);
  atexit((_func_5014 *)&LAB_143e64320);
  return;
}



// FUNCTION 14019fe20 FUN_14019fe20 body=59 status=ok
// SIG undefined FUN_14019fe20(void)

void FUN_14019fe20(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a27a0,0);
  FGenericPlatformString::Memcpy(DAT_1462a27a0,L"ShieldJsonData",0x1e);
  atexit((_func_5014 *)&LAB_143e64340);
  return;
}



// FUNCTION 14019fe60 `dynamic_initializer_for_'StatusStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'StatusStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__StatusStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2720,0);
  FGenericPlatformString::Memcpy(DAT_1462a2720,L"ShieldSerialNumber",0x26);
  atexit((_func_5014 *)&LAB_143e64360);
  return;
}



// FUNCTION 14019fee0 FUN_14019fee0 body=59 status=ok
// SIG undefined FUN_14019fee0(void)

void FUN_14019fee0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a29a0,0);
  FGenericPlatformString::Memcpy(DAT_1462a29a0,L"Proj_Skag",0x14);
  atexit((_func_5014 *)&LAB_143e64380);
  return;
}



// FUNCTION 14019ff40 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a27f0,0);
  FGenericPlatformString::Memcpy(DAT_1462a27f0,L"SkinCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e643a0);
  return;
}



// FUNCTION 14019ff80 FUN_14019ff80 body=59 status=ok
// SIG undefined FUN_14019ff80(void)

void FUN_14019ff80(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2890,0);
  FGenericPlatformString::Memcpy(DAT_1462a2890,L"SlaughterChallengesCompletion",0x3c);
  atexit((_func_5014 *)&LAB_143e643c0);
  return;
}



// FUNCTION 1401a00b0 FUN_1401a00b0 body=59 status=ok
// SIG undefined FUN_1401a00b0(void)

void FUN_1401a00b0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a26c0,0);
  FGenericPlatformString::Memcpy(DAT_1462a26c0,L"TimePlayed",0x16);
  atexit((_func_5014 *)&LAB_143e643e0);
  return;
}



// FUNCTION 1401a00f0 FUN_1401a00f0 body=59 status=ok
// SIG undefined FUN_1401a00f0(void)

void FUN_1401a00f0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a29b0,0);
  FGenericPlatformString::Memcpy(DAT_1462a29b0,L"Proj_HeavyTraunt_Roller",0x30);
  atexit((_func_5014 *)&LAB_143e64400);
  return;
}



// FUNCTION 1401a0160 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2980,0);
  FGenericPlatformString::Memcpy(DAT_1462a2980,L"UnexpectedControlMessage",0x32);
  atexit((_func_5014 *)&LAB_143e64420);
  return;
}



// FUNCTION 1401a0260 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2508,0);
  FGenericPlatformString::Memcpy(DAT_1462a2508,&DAT_14472d058,8);
  atexit((_func_5014 *)&LAB_143e64440);
  return;
}



// FUNCTION 1401a02a0 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2750,0);
  FGenericPlatformString::Memcpy(DAT_1462a2750,L"Weapon1JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e64460);
  return;
}



// FUNCTION 1401a02e0 FUN_1401a02e0 body=59 status=ok
// SIG undefined FUN_1401a02e0(void)

void FUN_1401a02e0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a26d0,0);
  FGenericPlatformString::Memcpy(DAT_1462a26d0,L"Weapon1SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e64480);
  return;
}



// FUNCTION 1401a0320 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2760,0);
  FGenericPlatformString::Memcpy(DAT_1462a2760,L"Weapon2JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e644a0);
  return;
}



// FUNCTION 1401a0360 FUN_1401a0360 body=59 status=ok
// SIG undefined FUN_1401a0360(void)

void FUN_1401a0360(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a26e0,0);
  FGenericPlatformString::Memcpy(DAT_1462a26e0,L"Weapon2SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e644c0);
  return;
}



// FUNCTION 1401a03a0 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2770,0);
  FGenericPlatformString::Memcpy(DAT_1462a2770,L"Weapon3JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e644e0);
  return;
}



// FUNCTION 1401a03e0 FUN_1401a03e0 body=59 status=ok
// SIG undefined FUN_1401a03e0(void)

void FUN_1401a03e0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a26f0,0);
  FGenericPlatformString::Memcpy(DAT_1462a26f0,L"Weapon3SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e64500);
  return;
}



// FUNCTION 1401a0420 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2780,0);
  FGenericPlatformString::Memcpy(DAT_1462a2780,L"Weapon4JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e64520);
  return;
}



// FUNCTION 1401a0460 FUN_1401a0460 body=59 status=ok
// SIG undefined FUN_1401a0460(void)

void FUN_1401a0460(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2700,0);
  FGenericPlatformString::Memcpy(DAT_1462a2700,L"Weapon4SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e64540);
  return;
}



// FUNCTION 1401a04a0 FUN_1401a04a0 body=59 status=ok
// SIG undefined FUN_1401a04a0(void)

void FUN_1401a04a0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2840,0);
  FGenericPlatformString::Memcpy(DAT_1462a2840,L"WeaponChallengesCompletion",0x36);
  atexit((_func_5014 *)&LAB_143e64560);
  return;
}



// FUNCTION 1401a05c0 EOL_String'' body=115 status=ok
// SIG undefined EOL_String''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FDlgConfigWriter::EOL_String__(void)

{
  undefined *puVar1;
  int iVar2;
  longlong lVar3;
  
  puVar1 = PTR_DAT_1462a24f0;
  if ((PTR_DAT_1462a24f0 != (undefined *)0x0) && (*(short *)PTR_DAT_1462a24f0 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(short *)(PTR_DAT_1462a24f0 + lVar3 * 2) != 0);
    iVar2 = (int)lVar3 + 1;
    _DAT_146877838 = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146877830,0);
    }
    FGenericPlatformString::Memcpy(DAT_146877830,puVar1,(longlong)iVar2 * 2);
  }
  atexit((_func_5014 *)&LAB_143e64580);
  return;
}



// FUNCTION 1401a0910 FUN_1401a0910 body=59 status=ok
// SIG undefined FUN_1401a0910(void)

void FUN_1401a0910(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2cf0,0);
  FGenericPlatformString::Memcpy(DAT_1462a2cf0,L"AbilityData",0x18);
  atexit((_func_5014 *)&LAB_143e64620);
  return;
}



// FUNCTION 1401a0a30 FUN_1401a0a30 body=59 status=ok
// SIG undefined FUN_1401a0a30(void)

void FUN_1401a0a30(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2ca0,0);
  FGenericPlatformString::Memcpy(DAT_1462a2ca0,L"ArtifactJsonData",0x22);
  atexit((_func_5014 *)&LAB_143e64660);
  return;
}



// FUNCTION 1401a0a70 FUN_1401a0a70 body=59 status=ok
// SIG undefined FUN_1401a0a70(void)

void FUN_1401a0a70(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2c20,0);
  FGenericPlatformString::Memcpy(DAT_1462a2c20,L"ArtifactSerialNumber",0x2a);
  atexit((_func_5014 *)&LAB_143e64680);
  return;
}



// FUNCTION 1401a0ab0 `dynamic_initializer_for_'AwayText'' body=53 status=ok
// SIG undefined `dynamic_initializer_for_'AwayText''(void)

void EOnlinePresenceState::_dynamic_initializer_for__AwayText__(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_146878100,L"Away",L"OnlinePresence",L"Away");
  atexit(FUN_143e646a0);
  return;
}



// FUNCTION 1401a0af0 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2cc0,0);
  FGenericPlatformString::Memcpy(DAT_1462a2cc0,L"BodyCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e646f0);
  return;
}



// FUNCTION 1401a0b30 FUN_1401a0b30 body=115 status=ok
// SIG undefined FUN_1401a0b30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401a0b30(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1468780b0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"ZoneMap.FOD.GameSaveThrottleSeconds",10,
                  L"n: Min Seconds between requuesting game save from PlayerController when FOD texels are marked as discovered"
                  ,0);
  _DAT_1468780a8 = &PTR_FUN_143f3ecf8;
  DAT_1468780b8 = (**(code **)(*DAT_1468780b0 + 0x38))(DAT_1468780b0);
  atexit(FUN_143e64710);
  return;
}



// FUNCTION 1401a0bb0 FUN_1401a0bb0 body=59 status=ok
// SIG undefined FUN_1401a0bb0(void)

void FUN_1401a0bb0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2b50,0);
  FGenericPlatformString::Memcpy(DAT_1462a2b50,L"CanJoin",0x10);
  atexit((_func_5014 *)&LAB_143e64760);
  return;
}



// FUNCTION 1401a0c50 `dynamic_initializer_for_'ChatText'' body=53 status=ok
// SIG undefined `dynamic_initializer_for_'ChatText''(void)

void EOnlinePresenceState::_dynamic_initializer_for__ChatText__(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_146878148,L"Chat",L"OnlinePresence",L"Chat");
  atexit(FUN_143e64780);
  return;
}



// FUNCTION 1401a0c90 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2c90,0);
  FGenericPlatformString::Memcpy(DAT_1462a2c90,L"ClassItemJsonData",0x24);
  atexit((_func_5014 *)&LAB_143e647d0);
  return;
}



// FUNCTION 1401a0cd0 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2c10,0);
  FGenericPlatformString::Memcpy(DAT_1462a2c10,L"ClassItemSerialNumber",0x2c);
  atexit((_func_5014 *)&LAB_143e647f0);
  return;
}



// FUNCTION 1401a0d50 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2d40,0);
  FGenericPlatformString::Memcpy(DAT_1462a2d40,L"CrewChallengesCompletion",0x32);
  atexit((_func_5014 *)&LAB_143e64810);
  return;
}



// FUNCTION 1401a0df0 FUN_1401a0df0 body=59 status=ok
// SIG undefined FUN_1401a0df0(void)

void FUN_1401a0df0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2da0,0);
  FGenericPlatformString::Memcpy(DAT_1462a2da0,L"DateTime",0x12);
  atexit((_func_5014 *)&LAB_143e64830);
  return;
}



// FUNCTION 1401a0e30 FUN_1401a0e30 body=266 status=ok
// SIG undefined FUN_1401a0e30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401a0e30(void)

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
    plVar1[1] = (longlong)FUN_141295580;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143fca768;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146877fe8 =
       (**(code **)(*DAT_1468b1f88 + 0x50))
                 (DAT_1468b1f88,L"DebugCOVRepair",L"Force the COV weapon to break.",&local_18,
                  0x10001);
  _DAT_146877fe0 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_1401a0f29;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_1401a0f29:
  atexit(FUN_143e64850);
  return;
}



// FUNCTION 1401a0f60 `dynamic_initializer_for_'DefaultAppIdKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'DefaultAppIdKey''(void)

void _dynamic_initializer_for__DefaultAppIdKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2e10,0);
  FGenericPlatformString::Memcpy(DAT_1462a2e10,L"AppId",0xc);
  atexit((_func_5014 *)&LAB_143e648a0);
  return;
}



// FUNCTION 1401a0fc0 `dynamic_initializer_for_'DefaultPlatformKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'DefaultPlatformKey''(void)

void _dynamic_initializer_for__DefaultPlatformKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2e20,0);
  FGenericPlatformString::Memcpy(DAT_1462a2e20,L"Platform",0x12);
  atexit((_func_5014 *)&LAB_143e648c0);
  return;
}



// FUNCTION 1401a1000 `dynamic_initializer_for_'DefaultPresenceKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'DefaultPresenceKey''(void)

void _dynamic_initializer_for__DefaultPresenceKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2e00,0);
  FGenericPlatformString::Memcpy(DAT_1462a2e00,L"RichPresence",0x1a);
  atexit((_func_5014 *)&LAB_143e648e0);
  return;
}



// FUNCTION 1401a10e0 `dynamic_initializer_for_'DoNotDisturbText'' body=53 status=ok
// SIG undefined `dynamic_initializer_for_'DoNotDisturbText''(void)

void EOnlinePresenceState::_dynamic_initializer_for__DoNotDisturbText__(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_146878130,L"DoNotDisturb",L"OnlinePresence",L"DoNotDisturb");
  atexit(FUN_143e64900);
  return;
}



// FUNCTION 1401a1140 `dynamic_initializer_for_'kResultStringCannotLoadPreset'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kResultStringCannotLoadPreset''(void)

void _dynamic_initializer_for__kResultStringCannotLoadPreset__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2ce0,0);
  FGenericPlatformString::Memcpy(DAT_1462a2ce0,L"EmoteCustomizationHash",0x2e);
  atexit((_func_5014 *)&LAB_143e64950);
  return;
}



// FUNCTION 1401a1180 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2d30,0);
  FGenericPlatformString::Memcpy(DAT_1462a2d30,L"EnemyChallengesCompletion",0x34);
  atexit((_func_5014 *)&LAB_143e64970);
  return;
}



// FUNCTION 1401a1200 `dynamic_initializer_for_'kResultStringAssetDefAlrealdyLoaded'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kResultStringAssetDefAlrealdyLoaded''(void)

void _dynamic_initializer_for__kResultStringAssetDefAlrealdyLoaded__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2d50,0);
  FGenericPlatformString::Memcpy(DAT_1462a2d50,L"ExplorationChallengesCompletion",0x40);
  atexit((_func_5014 *)&LAB_143e64990);
  return;
}



// FUNCTION 1401a1240 `dynamic_initializer_for_'ExtendedAwayText'' body=53 status=ok
// SIG undefined `dynamic_initializer_for_'ExtendedAwayText''(void)

void EOnlinePresenceState::_dynamic_initializer_for__ExtendedAwayText__(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_146878118,L"ExtendedAway",L"OnlinePresence",L"ExtendedAway");
  atexit(FUN_143e649b0);
  return;
}



// FUNCTION 1401a1300 FUN_1401a1300 body=59 status=ok
// SIG undefined FUN_1401a1300(void)

void FUN_1401a1300(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2b80,0);
  FGenericPlatformString::Memcpy(DAT_1462a2b80,L"FriendActivityStatus",0x2a);
  atexit((_func_5014 *)&LAB_143e64a00);
  return;
}



// FUNCTION 1401a1340 FUN_1401a1340 body=59 status=ok
// SIG undefined FUN_1401a1340(void)

void FUN_1401a1340(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2df0,0);
  FGenericPlatformString::Memcpy(DAT_1462a2df0,L"ChallengeInfo",0x1c);
  atexit((_func_5014 *)&LAB_143e64a20);
  return;
}



// FUNCTION 1401a1380 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2de0,0);
  FGenericPlatformString::Memcpy(DAT_1462a2de0,L"FriendCrewQuarterInfo",0x2c);
  atexit((_func_5014 *)&LAB_143e64a40);
  return;
}



// FUNCTION 1401a13c0 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2dc0,0);
  FGenericPlatformString::Memcpy(DAT_1462a2dc0,L"FriendLoadOutInfo",0x24);
  atexit((_func_5014 *)&LAB_143e64a60);
  return;
}



// FUNCTION 1401a1400 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2db0,0);
  FGenericPlatformString::Memcpy(DAT_1462a2db0,L"FriendStatusPresenceInfo",0x32);
  atexit((_func_5014 *)&LAB_143e64a80);
  return;
}



// FUNCTION 1401a1440 FUN_1401a1440 body=59 status=ok
// SIG undefined FUN_1401a1440(void)

void FUN_1401a1440(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2dd0,0);
  FGenericPlatformString::Memcpy(DAT_1462a2dd0,L"FriendSkillTreeInfo",0x28);
  atexit((_func_5014 *)&LAB_143e64aa0);
  return;
}



// FUNCTION 1401a1480 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2d00,0);
  FGenericPlatformString::Memcpy(DAT_1462a2d00,L"FriendStatusThing",0x24);
  atexit((_func_5014 *)&LAB_143e64ac0);
  return;
}


