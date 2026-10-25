// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14023b770 FUN_14023b770 body=58 status=ok
// SIG undefined FUN_14023b770(void)

void FUN_14023b770(void)

{
  UObjectCompiledInDefer
            (FUN_1414b5890,ALandscapeStreamingProxy::StaticClass,L"AQuickChange",L"/Script/OakGame",
             0,0,0);
  return;
}



// FUNCTION 14023b7b0 FUN_14023b7b0 body=58 status=ok
// SIG undefined FUN_14023b7b0(void)

void FUN_14023b7b0(void)

{
  UObjectCompiledInDefer
            (FUN_1414b7930,FUN_1414b4a10,L"UPlayThroughAttributeValueResolver",L"/Script/OakGame",0,
             0,0);
  return;
}



// FUNCTION 14023b7f0 FUN_14023b7f0 body=58 status=ok
// SIG undefined FUN_14023b7f0(void)

void FUN_14023b7f0(void)

{
  UObjectCompiledInDefer
            (FUN_1414b7960,UUGJournalKey::GetPrivateStaticClass,
             L"UPlayThroughDefinedAttributeValueResolver",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 14023b830 FUN_14023b830 body=58 status=ok
// SIG undefined FUN_14023b830(void)

void FUN_14023b830(void)

{
  UObjectCompiledInDefer(FUN_1414b7990,FUN_1414b52c0,L"UPlayerStandInData",L"/Script/OakGame",0,0,0)
  ;
  return;
}



// FUNCTION 14023b870 FUN_14023b870 body=58 status=ok
// SIG undefined FUN_14023b870(void)

void FUN_14023b870(void)

{
  UObjectCompiledInDefer
            (FUN_1414b4df0,UFGOnlineSessionClient::GetPrivateStaticClass,L"UProjectedShield",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 14023b8b0 FUN_14023b8b0 body=58 status=ok
// SIG undefined FUN_14023b8b0(void)

void FUN_14023b8b0(void)

{
  UObjectCompiledInDefer
            (FUN_1414b56a0,USoundNodeEnveloper::StaticClass,L"UProjectedShieldData",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 14023b8f0 FUN_14023b8f0 body=58 status=ok
// SIG undefined FUN_14023b8f0(void)

void FUN_14023b8f0(void)

{
  UObjectCompiledInDefer
            (FUN_1414b79c0,UMovieSceneIntegerSection::GetPrivateStaticClass,
             L"UProjectedShieldData_Vehicle",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 14023b930 FUN_14023b930 body=58 status=ok
// SIG undefined FUN_14023b930(void)

void FUN_14023b930(void)

{
  UObjectCompiledInDefer
            (FUN_1414b5420,FUN_1414b5370,L"UProjectedShield_Vehicle",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 14023b9d0 EOL_String'' body=115 status=ok
// SIG undefined EOL_String''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FDlgConfigWriter::EOL_String__(void)

{
  undefined *puVar1;
  int iVar2;
  longlong lVar3;
  
  puVar1 = PTR_DAT_146452320;
  if ((PTR_DAT_146452320 != (undefined *)0x0) && (*(short *)PTR_DAT_146452320 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(short *)(PTR_DAT_146452320 + lVar3 * 2) != 0);
    iVar2 = (int)lVar3 + 1;
    _DAT_14689e1e8 = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14689e1e0,0);
    }
    FGenericPlatformString::Memcpy(DAT_14689e1e0,puVar1,(longlong)iVar2 * 2);
  }
  atexit((_func_5014 *)&LAB_143e716b0);
  return;
}



// FUNCTION 14023ba50 FUN_14023ba50 body=59 status=ok
// SIG undefined FUN_14023ba50(void)

void FUN_14023ba50(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464588a0,0);
  FGenericPlatformString::Memcpy(DAT_1464588a0,L"AbilityData",0x18);
  atexit((_func_5014 *)&LAB_143e716d0);
  return;
}



// FUNCTION 14023bb30 FUN_14023bb30 body=59 status=ok
// SIG undefined FUN_14023bb30(void)

void FUN_14023bb30(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146458850,0);
  FGenericPlatformString::Memcpy(DAT_146458850,L"ArtifactJsonData",0x22);
  atexit((_func_5014 *)&LAB_143e716f0);
  return;
}



// FUNCTION 14023bb70 FUN_14023bb70 body=59 status=ok
// SIG undefined FUN_14023bb70(void)

void FUN_14023bb70(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464587d0,0);
  FGenericPlatformString::Memcpy(DAT_1464587d0,L"ArtifactSerialNumber",0x2a);
  atexit((_func_5014 *)&LAB_143e71710);
  return;
}



// FUNCTION 14023be30 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146458870,0);
  FGenericPlatformString::Memcpy(DAT_146458870,L"BodyCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e71730);
  return;
}



// FUNCTION 14023be70 FUN_14023be70 body=59 status=ok
// SIG undefined FUN_14023be70(void)

void FUN_14023be70(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146458700,0);
  FGenericPlatformString::Memcpy(DAT_146458700,L"CanJoin",0x10);
  atexit((_func_5014 *)&LAB_143e71750);
  return;
}



// FUNCTION 14023bef0 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146458840,0);
  FGenericPlatformString::Memcpy(DAT_146458840,L"ClassItemJsonData",0x24);
  atexit((_func_5014 *)&LAB_143e71770);
  return;
}



// FUNCTION 14023bf30 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464587c0,0);
  FGenericPlatformString::Memcpy(DAT_1464587c0,L"ClassItemSerialNumber",0x2c);
  atexit((_func_5014 *)&LAB_143e71790);
  return;
}



// FUNCTION 14023bfb0 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464588f0,0);
  FGenericPlatformString::Memcpy(DAT_1464588f0,L"CrewChallengesCompletion",0x32);
  atexit((_func_5014 *)&LAB_143e717b0);
  return;
}



// FUNCTION 14023c030 FUN_14023c030 body=59 status=ok
// SIG undefined FUN_14023c030(void)

void FUN_14023c030(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146458950,0);
  FGenericPlatformString::Memcpy(DAT_146458950,L"DateTime",0x12);
  atexit((_func_5014 *)&LAB_143e717d0);
  return;
}



// FUNCTION 14023c150 `dynamic_initializer_for_'kResultStringCannotLoadPreset'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kResultStringCannotLoadPreset''(void)

void _dynamic_initializer_for__kResultStringCannotLoadPreset__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146458890,0);
  FGenericPlatformString::Memcpy(DAT_146458890,L"EmoteCustomizationHash",0x2e);
  atexit((_func_5014 *)&LAB_143e717f0);
  return;
}



// FUNCTION 14023c190 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464588e0,0);
  FGenericPlatformString::Memcpy(DAT_1464588e0,L"EnemyChallengesCompletion",0x34);
  atexit((_func_5014 *)&LAB_143e71810);
  return;
}



// FUNCTION 14023c210 `dynamic_initializer_for_'kResultStringAssetDefAlrealdyLoaded'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kResultStringAssetDefAlrealdyLoaded''(void)

void _dynamic_initializer_for__kResultStringAssetDefAlrealdyLoaded__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146458900,0);
  FGenericPlatformString::Memcpy(DAT_146458900,L"ExplorationChallengesCompletion",0x40);
  atexit((_func_5014 *)&LAB_143e71830);
  return;
}



// FUNCTION 14023c2d0 FUN_14023c2d0 body=59 status=ok
// SIG undefined FUN_14023c2d0(void)

void FUN_14023c2d0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146458730,0);
  FGenericPlatformString::Memcpy(DAT_146458730,L"FriendActivityStatus",0x2a);
  atexit((_func_5014 *)&LAB_143e71850);
  return;
}



// FUNCTION 14023c310 FUN_14023c310 body=59 status=ok
// SIG undefined FUN_14023c310(void)

void FUN_14023c310(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464589a0,0);
  FGenericPlatformString::Memcpy(DAT_1464589a0,L"ChallengeInfo",0x1c);
  atexit((_func_5014 *)&LAB_143e71870);
  return;
}



// FUNCTION 14023c350 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146458990,0);
  FGenericPlatformString::Memcpy(DAT_146458990,L"FriendCrewQuarterInfo",0x2c);
  atexit((_func_5014 *)&LAB_143e71890);
  return;
}



// FUNCTION 14023c390 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146458970,0);
  FGenericPlatformString::Memcpy(DAT_146458970,L"FriendLoadOutInfo",0x24);
  atexit((_func_5014 *)&LAB_143e718b0);
  return;
}



// FUNCTION 14023c3d0 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146458960,0);
  FGenericPlatformString::Memcpy(DAT_146458960,L"FriendStatusPresenceInfo",0x32);
  atexit((_func_5014 *)&LAB_143e718d0);
  return;
}



// FUNCTION 14023c410 FUN_14023c410 body=59 status=ok
// SIG undefined FUN_14023c410(void)

void FUN_14023c410(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146458980,0);
  FGenericPlatformString::Memcpy(DAT_146458980,L"FriendSkillTreeInfo",0x28);
  atexit((_func_5014 *)&LAB_143e718f0);
  return;
}



// FUNCTION 14023c450 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464588b0,0);
  FGenericPlatformString::Memcpy(DAT_1464588b0,L"FriendStatusThing",0x24);
  atexit((_func_5014 *)&LAB_143e71910);
  return;
}



// FUNCTION 14023c490 FUN_14023c490 body=59 status=ok
// SIG undefined FUN_14023c490(void)

void FUN_14023c490(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464588c0,0);
  FGenericPlatformString::Memcpy(DAT_1464588c0,L"GameCompletion",0x1e);
  atexit((_func_5014 *)&LAB_143e71930);
  return;
}



// FUNCTION 14023c4d0 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146458820,0);
  FGenericPlatformString::Memcpy(DAT_146458820,L"GrenadeJsonData",0x20);
  atexit((_func_5014 *)&LAB_143e71950);
  return;
}



// FUNCTION 14023c510 FUN_14023c510 body=59 status=ok
// SIG undefined FUN_14023c510(void)

void FUN_14023c510(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464587a0,0);
  FGenericPlatformString::Memcpy(DAT_1464587a0,L"GrenadeSerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e71970);
  return;
}



// FUNCTION 14023c550 FUN_14023c550 body=59 status=ok
// SIG undefined FUN_14023c550(void)

void FUN_14023c550(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146458740,0);
  FGenericPlatformString::Memcpy(DAT_146458740,L"GuardianRank",0x1a);
  atexit((_func_5014 *)&LAB_143e71990);
  return;
}



// FUNCTION 14023c590 FUN_14023c590 body=59 status=ok
// SIG undefined FUN_14023c590(void)

void FUN_14023c590(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146458720,0);
  FGenericPlatformString::Memcpy(DAT_146458720,L"HasSelectedCharacter",0x2a);
  atexit((_func_5014 *)&LAB_143e719b0);
  return;
}



// FUNCTION 14023c5d0 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146458860,0);
  FGenericPlatformString::Memcpy(DAT_146458860,L"HeadCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e719d0);
  return;
}



// FUNCTION 14023c7e0 FUN_14023c7e0 body=59 status=ok
// SIG undefined FUN_14023c7e0(void)

void FUN_14023c7e0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146458670,0);
  FGenericPlatformString::Memcpy(DAT_146458670,L"Level",0xc);
  atexit((_func_5014 *)&LAB_143e719f0);
  return;
}



// FUNCTION 14023c820 FUN_14023c820 body=59 status=ok
// SIG undefined FUN_14023c820(void)

void FUN_14023c820(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464586d0,0);
  FGenericPlatformString::Memcpy(DAT_1464586d0,L"LocationX",0x14);
  atexit((_func_5014 *)&LAB_143e71a10);
  return;
}



// FUNCTION 14023c860 FUN_14023c860 body=59 status=ok
// SIG undefined FUN_14023c860(void)

void FUN_14023c860(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464586e0,0);
  FGenericPlatformString::Memcpy(DAT_1464586e0,L"LocationY",0x14);
  atexit((_func_5014 *)&LAB_143e71a30);
  return;
}



// FUNCTION 14023c8a0 FUN_14023c8a0 body=59 status=ok
// SIG undefined FUN_14023c8a0(void)

void FUN_14023c8a0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464586f0,0);
  FGenericPlatformString::Memcpy(DAT_1464586f0,L"LocationZ",0x14);
  atexit((_func_5014 *)&LAB_143e71a50);
  return;
}



// FUNCTION 14023c8e0 FUN_14023c8e0 body=59 status=ok
// SIG undefined FUN_14023c8e0(void)

void FUN_14023c8e0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146458710,0);
  FGenericPlatformString::Memcpy(DAT_146458710,L"LookingForHelp",0x1e);
  atexit((_func_5014 *)&LAB_143e71a70);
  return;
}



// FUNCTION 14023c920 FUN_14023c920 body=59 status=ok
// SIG undefined FUN_14023c920(void)

void FUN_14023c920(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146458680,0);
  FGenericPlatformString::Memcpy(DAT_146458680,L"MapName",0x10);
  atexit((_func_5014 *)&LAB_143e71a90);
  return;
}



// FUNCTION 14023c9a0 FUN_14023c9a0 body=59 status=ok
// SIG undefined FUN_14023c9a0(void)

void FUN_14023c9a0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464586c0,0);
  FGenericPlatformString::Memcpy(DAT_1464586c0,L"MissionHash",0x18);
  atexit((_func_5014 *)&LAB_143e71ab0);
  return;
}



// FUNCTION 14023cdc0 FUN_14023cdc0 body=59 status=ok
// SIG undefined FUN_14023cdc0(void)

void FUN_14023cdc0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464586a0,0);
  FGenericPlatformString::Memcpy(DAT_1464586a0,L"PartyPlayerCount",0x22);
  atexit((_func_5014 *)&LAB_143e71ad0);
  return;
}



// FUNCTION 14023cee0 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464586b0,0);
  FGenericPlatformString::Memcpy(DAT_1464586b0,L"PlayerClassIdentifierHash",0x34);
  atexit((_func_5014 *)&LAB_143e71af0);
  return;
}



// FUNCTION 14023cf20 FUN_14023cf20 body=59 status=ok
// SIG undefined FUN_14023cf20(void)

void FUN_14023cf20(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146458940,0);
  FGenericPlatformString::Memcpy(DAT_146458940,L"PlayerId",0x12);
  atexit((_func_5014 *)&LAB_143e71b10);
  return;
}



// FUNCTION 14023d020 LocalizationSourceControlSettingsCategoryName'' body=59 status=ok
// SIG undefined LocalizationSourceControlSettingsCategoryName''(void)

void `dynamic_initializer_for_'FLocalizationSourceControlSettings::
     LocalizationSourceControlSettingsCategoryName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146458910,0);
  FGenericPlatformString::Memcpy(DAT_146458910,L"ProvingGroundChallengesCompletion",0x44);
  atexit((_func_5014 *)&LAB_143e71b30);
  return;
}



// FUNCTION 14023d0a0 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146458930,0);
  FGenericPlatformString::Memcpy(DAT_146458930,L"RaidChallengesCompletion",0x32);
  atexit((_func_5014 *)&LAB_143e71b50);
  return;
}



// FUNCTION 14023d120 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464583a8,0);
  FGenericPlatformString::Memcpy(DAT_1464583a8,L"<img src=\"%s\"></>",0x24);
  atexit((_func_5014 *)&LAB_143e71b70);
  return;
}



// FUNCTION 14023d260 FUN_14023d260 body=92 status=ok
// SIG undefined FUN_14023d260(void)

void FUN_14023d260(void)

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
    *puVar1 = &PTR_FUN_144bb4e78;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AugmentData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14023d2c0 FUN_14023d2c0 body=92 status=ok
// SIG undefined FUN_14023d2c0(void)

void FUN_14023d2c0(void)

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
    *puVar1 = &PTR_FUN_144bb3718;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"PlayThroughData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14023d320 FUN_14023d320 body=92 status=ok
// SIG undefined FUN_14023d320(void)

void FUN_14023d320(void)

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
    *puVar1 = &PTR_FUN_144bb3830;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"RegionBalanceData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14023d380 FUN_14023d380 body=92 status=ok
// SIG undefined FUN_14023d380(void)

void FUN_14023d380(void)

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
    *puVar1 = &PTR_FUN_143ff1be8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"RegionBalanceDataBase",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14023d3e0 FUN_14023d3e0 body=92 status=ok
// SIG undefined FUN_14023d3e0(void)

void FUN_14023d3e0(void)

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
    *puVar1 = &PTR_FUN_144bb3600;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"RegionBalancePreviewData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14023d440 FUN_14023d440 body=92 status=ok
// SIG undefined FUN_14023d440(void)

void FUN_14023d440(void)

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
    *puVar1 = &PTR_FUN_144134d30;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"RegionMissionBalanceData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14023d4a0 FUN_14023d4a0 body=92 status=ok
// SIG undefined FUN_14023d4a0(void)

void FUN_14023d4a0(void)

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
    *puVar1 = &PTR_FUN_143f61bc8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"RegionSaveData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14023d500 `dynamic_initializer_for_'ScriptStruct_Sifu_StaticRegisterNativesFGenericPushActorInfo'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Sifu_StaticRegisterNativesFGenericPushActorInfo''(void)

void _dynamic_initializer_for__ScriptStruct_Sifu_StaticRegisterNativesFGenericPushActorInfo__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x7a0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    *puVar1 = &PTR_FUN_144bb43a8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"RevolverVehicleAnimInstanceProxy",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14023d560 FUN_14023d560 body=92 status=ok
// SIG undefined FUN_14023d560(void)

void FUN_14023d560(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x88;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144bb44c0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"SDUCaseSpawner",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14023d5c0 FUN_14023d5c0 body=92 status=ok
// SIG undefined FUN_14023d5c0(void)

void FUN_14023d5c0(void)

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
    *puVar1 = &PTR_FUN_144bb4d60;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ShieldDamageModifierData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14023d620 FUN_14023d620 body=92 status=ok
// SIG undefined FUN_14023d620(void)

void FUN_14023d620(void)

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
    *puVar1 = &PTR_FUN_144bb4f90;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"TrackedShieldAttributeData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14023d700 FUN_14023d700 body=59 status=ok
// SIG undefined FUN_14023d700(void)

void FUN_14023d700(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146458690,0);
  FGenericPlatformString::Memcpy(DAT_146458690,L"SessionId",0x14);
  atexit((_func_5014 *)&LAB_143e71b90);
  return;
}



// FUNCTION 14023d740 FUN_14023d740 body=59 status=ok
// SIG undefined FUN_14023d740(void)

void FUN_14023d740(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146458830,0);
  FGenericPlatformString::Memcpy(DAT_146458830,L"ShieldJsonData",0x1e);
  atexit((_func_5014 *)&LAB_143e71bb0);
  return;
}



// FUNCTION 14023d780 `dynamic_initializer_for_'StatusStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'StatusStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__StatusStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464587b0,0);
  FGenericPlatformString::Memcpy(DAT_1464587b0,L"ShieldSerialNumber",0x26);
  atexit((_func_5014 *)&LAB_143e71bd0);
  return;
}



// FUNCTION 14023d7e0 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146458880,0);
  FGenericPlatformString::Memcpy(DAT_146458880,L"SkinCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e71bf0);
  return;
}



// FUNCTION 14023d820 FUN_14023d820 body=59 status=ok
// SIG undefined FUN_14023d820(void)

void FUN_14023d820(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146458920,0);
  FGenericPlatformString::Memcpy(DAT_146458920,L"SlaughterChallengesCompletion",0x3c);
  atexit((_func_5014 *)&LAB_143e71c10);
  return;
}



// FUNCTION 14023d910 FUN_14023d910 body=59 status=ok
// SIG undefined FUN_14023d910(void)

void FUN_14023d910(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146458750,0);
  FGenericPlatformString::Memcpy(DAT_146458750,L"TimePlayed",0x16);
  atexit((_func_5014 *)&LAB_143e71c30);
  return;
}



// FUNCTION 14023d9f0 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146456588,0);
  FGenericPlatformString::Memcpy(DAT_146456588,&DAT_144ba7730,8);
  atexit((_func_5014 *)&LAB_143e71c50);
  return;
}



// FUNCTION 14023da30 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464587e0,0);
  FGenericPlatformString::Memcpy(DAT_1464587e0,L"Weapon1JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e71c70);
  return;
}



// FUNCTION 14023da70 FUN_14023da70 body=59 status=ok
// SIG undefined FUN_14023da70(void)

void FUN_14023da70(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146458760,0);
  FGenericPlatformString::Memcpy(DAT_146458760,L"Weapon1SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e71c90);
  return;
}



// FUNCTION 14023dab0 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464587f0,0);
  FGenericPlatformString::Memcpy(DAT_1464587f0,L"Weapon2JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e71cb0);
  return;
}



// FUNCTION 14023daf0 FUN_14023daf0 body=59 status=ok
// SIG undefined FUN_14023daf0(void)

void FUN_14023daf0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146458770,0);
  FGenericPlatformString::Memcpy(DAT_146458770,L"Weapon2SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e71cd0);
  return;
}



// FUNCTION 14023db30 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146458800,0);
  FGenericPlatformString::Memcpy(DAT_146458800,L"Weapon3JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e71cf0);
  return;
}



// FUNCTION 14023db70 FUN_14023db70 body=59 status=ok
// SIG undefined FUN_14023db70(void)

void FUN_14023db70(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146458780,0);
  FGenericPlatformString::Memcpy(DAT_146458780,L"Weapon3SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e71d10);
  return;
}



// FUNCTION 14023dbb0 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146458810,0);
  FGenericPlatformString::Memcpy(DAT_146458810,L"Weapon4JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e71d30);
  return;
}



// FUNCTION 14023dbf0 FUN_14023dbf0 body=59 status=ok
// SIG undefined FUN_14023dbf0(void)

void FUN_14023dbf0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146458790,0);
  FGenericPlatformString::Memcpy(DAT_146458790,L"Weapon4SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e71d50);
  return;
}



// FUNCTION 14023dc30 FUN_14023dc30 body=59 status=ok
// SIG undefined FUN_14023dc30(void)

void FUN_14023dc30(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464588d0,0);
  FGenericPlatformString::Memcpy(DAT_1464588d0,L"WeaponChallengesCompletion",0x36);
  atexit((_func_5014 *)&LAB_143e71d70);
  return;
}



// FUNCTION 14023dc90 FUN_14023dc90 body=66 status=ok
// SIG undefined FUN_14023dc90(void)

void FUN_14023dc90(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EShieldAttributeModificationSource",1);
  UObjectCompiledInDeferEnum(FUN_1414bb930,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 14023dce0 FUN_14023dce0 body=66 status=ok
// SIG undefined FUN_14023dce0(void)

void FUN_14023dce0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EShieldState",1);
  UObjectCompiledInDeferEnum(EShieldState_StaticEnum,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 14023dd30 FUN_14023dd30 body=66 status=ok
// SIG undefined FUN_14023dd30(void)

void FUN_14023dd30(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EStackOperator",1);
  UObjectCompiledInDeferEnum(FUN_1414bb9b0,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 14023dd80 FUN_14023dd80 body=66 status=ok
// SIG undefined FUN_14023dd80(void)

void FUN_14023dd80(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AugmentData",1);
  UObjectCompiledInDeferStruct(FUN_1414bc080,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 14023ddd0 FUN_14023ddd0 body=66 status=ok
// SIG undefined FUN_14023ddd0(void)

void FUN_14023ddd0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"PlayThroughData",1);
  UObjectCompiledInDeferStruct(FUN_1414bc0e0,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 14023de20 FUN_14023de20 body=66 status=ok
// SIG undefined FUN_14023de20(void)

void FUN_14023de20(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"RegionBalanceData",1);
  UObjectCompiledInDeferStruct(FUN_1414bc140,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 14023de70 FUN_14023de70 body=66 status=ok
// SIG undefined FUN_14023de70(void)

void FUN_14023de70(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"RegionBalanceDataBase",1);
  UObjectCompiledInDeferStruct
            (FMovieSceneEventPayloadVariable::StaticStruct,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 14023dec0 FUN_14023dec0 body=66 status=ok
// SIG undefined FUN_14023dec0(void)

void FUN_14023dec0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"RegionBalancePreviewData",1);
  UObjectCompiledInDeferStruct(FUN_1414bc200,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 14023df10 FUN_14023df10 body=66 status=ok
// SIG undefined FUN_14023df10(void)

void FUN_14023df10(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"RegionMissionBalanceData",1);
  UObjectCompiledInDeferStruct
            (FMovieSceneActorReferenceKey::StaticStruct,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 14023df60 FUN_14023df60 body=66 status=ok
// SIG undefined FUN_14023df60(void)

void FUN_14023df60(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"RegionSaveData",1);
  UObjectCompiledInDeferStruct
            (FMovieSceneEventPayloadVariable::StaticStruct,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 14023dfb0 FUN_14023dfb0 body=66 status=ok
// SIG undefined FUN_14023dfb0(void)

void FUN_14023dfb0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"RevolverVehicleAnimInstanceProxy",1);
  UObjectCompiledInDeferStruct(FGenericPushActorInfo::StaticStruct,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 14023e000 FUN_14023e000 body=66 status=ok
// SIG undefined FUN_14023e000(void)

void FUN_14023e000(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"SDUCaseSpawner",1);
  UObjectCompiledInDeferStruct(FUN_1414bc380,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 14023e050 FUN_14023e050 body=66 status=ok
// SIG undefined FUN_14023e050(void)

void FUN_14023e050(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ShieldDamageModifierData",1);
  UObjectCompiledInDeferStruct(FUN_1414bc3e0,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 14023e0a0 FUN_14023e0a0 body=66 status=ok
// SIG undefined FUN_14023e0a0(void)

void FUN_14023e0a0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"TrackedShieldAttributeData",1);
  UObjectCompiledInDeferStruct(FUN_1414bc440,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 14023e0f0 FUN_14023e0f0 body=58 status=ok
// SIG undefined FUN_14023e0f0(void)

void FUN_14023e0f0(void)

{
  UObjectCompiledInDefer(FUN_1414bc4a0,FUN_1414ba250,L"AQuickChangeProxy",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 14023e130 FUN_14023e130 body=58 status=ok
// SIG undefined FUN_14023e130(void)

void FUN_14023e130(void)

{
  UObjectCompiledInDefer(FUN_1414b8c90,&LAB_141321fb0,L"ARaidGameMode",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 14023e170 FUN_14023e170 body=58 status=ok
// SIG undefined FUN_14023e170(void)

void FUN_14023e170(void)

{
  UObjectCompiledInDefer
            (FUN_1414b9030,thunk_FUN_1414bbaa0,L"ARaidGameState",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 14023e1b0 FUN_14023e1b0 body=58 status=ok
// SIG undefined FUN_14023e1b0(void)

void FUN_14023e1b0(void)

{
  UObjectCompiledInDefer
            (FUN_1414bc4d0,FUN_1414ba840,L"ARespawnRestrictedVolume",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 14023e1f0 FUN_14023e1f0 body=58 status=ok
// SIG undefined FUN_14023e1f0(void)

void FUN_14023e1f0(void)

{
  UObjectCompiledInDefer
            (FUN_1414bc500,ARemnantMiniMapDisplayActor::GetPrivateStaticClass,
             L"ARotatingStaticMeshActor",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 14023e230 FUN_14023e230 body=58 status=ok
// SIG undefined FUN_14023e230(void)

void FUN_14023e230(void)

{
  UObjectCompiledInDefer(FUN_1414bc530,FUN_1414b97c0,L"ASDUCase",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 14023e270 FUN_14023e270 body=58 status=ok
// SIG undefined FUN_14023e270(void)

void FUN_14023e270(void)

{
  UObjectCompiledInDefer(FUN_1414b9af0,FUN_1414b9a30,L"ASDUCaseProxy",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 14023e2b0 FUN_14023e2b0 body=58 status=ok
// SIG undefined FUN_14023e2b0(void)

void FUN_14023e2b0(void)

{
  UObjectCompiledInDefer(FUN_1414b9eb0,thunk_FUN_1414bbb50,L"ASeatPawn",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 14023e2f0 FUN_14023e2f0 body=58 status=ok
// SIG undefined FUN_14023e2f0(void)

void FUN_14023e2f0(void)

{
  UObjectCompiledInDefer(FUN_1414b9360,FUN_1414ba680,L"AShield",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 14023e330 FUN_14023e330 body=58 status=ok
// SIG undefined FUN_14023e330(void)

void FUN_14023e330(void)

{
  UObjectCompiledInDefer
            (FUN_1414bc560,UGameplayTagAssetInterface::GetPrivateStaticClass,
             L"UReapBehaviorInterface",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 14023e370 FUN_14023e370 body=58 status=ok
// SIG undefined FUN_14023e370(void)

void FUN_14023e370(void)

{
  UObjectCompiledInDefer
            (FUN_1414bc590,FUN_1414ba0d0,L"URegionBalanceStateComponent",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 14023e3b0 FUN_14023e3b0 body=58 status=ok
// SIG undefined FUN_14023e3b0(void)

void FUN_14023e3b0(void)

{
  UObjectCompiledInDefer(FUN_1414bc5c0,FUN_1414ba190,L"URegionData",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 14023e3f0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_URegionManager'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_URegionManager''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_URegionManager__(void)

{
  UObjectCompiledInDefer(FUN_1414bc5f0,FUN_1414b9df0,L"URegionManager",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 14023e430 FUN_14023e430 body=58 status=ok
// SIG undefined FUN_14023e430(void)

void FUN_14023e430(void)

{
  UObjectCompiledInDefer
            (FUN_1414bc620,UAESHelper::GetPrivateStaticClass,L"URegionManagerData",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 14023e470 FUN_14023e470 body=58 status=ok
// SIG undefined FUN_14023e470(void)

void FUN_14023e470(void)

{
  UObjectCompiledInDefer
            (FUN_1414ba730,UPVPScoresWidget::GetPrivateStaticClass,L"UResourceBar",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 14023e4b0 FUN_14023e4b0 body=58 status=ok
// SIG undefined FUN_14023e4b0(void)

void FUN_14023e4b0(void)

{
  UObjectCompiledInDefer
            (FUN_1414b8c20,ULanguageItemCUnitWidget::GetPrivateStaticClass,
             L"UReticleFeedbackWidgetContainer",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 14023e4f0 FUN_14023e4f0 body=58 status=ok
// SIG undefined FUN_14023e4f0(void)

void FUN_14023e4f0(void)

{
  UObjectCompiledInDefer
            (FUN_1414bc650,FUN_1414b8f00,L"URevolverVehicleAnimInstance",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 14023e530 FUN_14023e530 body=58 status=ok
// SIG undefined FUN_14023e530(void)

void FUN_14023e530(void)

{
  UObjectCompiledInDefer
            (FUN_1414bc680,FUN_1414ba330,L"UShieldAugmentStackValueResolver",L"/Script/OakGame",0,0,
             0);
  return;
}



// FUNCTION 14023e570 FUN_14023e570 body=58 status=ok
// SIG undefined FUN_14023e570(void)

void FUN_14023e570(void)

{
  UObjectCompiledInDefer
            (FUN_1414bc6b0,FUN_1414ba4e0,L"UShieldAugmentTableResolver",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 14023e5b0 FUN_14023e5b0 body=58 status=ok
// SIG undefined FUN_14023e5b0(void)

void FUN_14023e5b0(void)

{
  UObjectCompiledInDefer
            (FUN_1414bc6e0,UUGJournalKey::GetPrivateStaticClass,L"UShieldAugmentValueResolver",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 14023e650 EOL_String'' body=115 status=ok
// SIG undefined EOL_String''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FDlgConfigWriter::EOL_String__(void)

{
  undefined *puVar1;
  int iVar2;
  longlong lVar3;
  
  puVar1 = PTR_DAT_146456570;
  if ((PTR_DAT_146456570 != (undefined *)0x0) && (*(short *)PTR_DAT_146456570 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(short *)(PTR_DAT_146456570 + lVar3 * 2) != 0);
    iVar2 = (int)lVar3 + 1;
    _DAT_14689ea48 = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14689ea40,0);
    }
    FGenericPlatformString::Memcpy(DAT_14689ea40,puVar1,(longlong)iVar2 * 2);
  }
  atexit((_func_5014 *)&LAB_143e71d90);
  return;
}



// FUNCTION 14023ec50 FUN_14023ec50 body=92 status=ok
// SIG undefined FUN_14023ec50(void)

void FUN_14023ec50(void)

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
    *puVar1 = &PTR_FUN_14478d280;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AdaptiveTypeAssociations",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14023ecb0 FUN_14023ecb0 body=92 status=ok
// SIG undefined FUN_14023ecb0(void)

void FUN_14023ecb0(void)

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
    *puVar1 = &PTR_FUN_144bbc770;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AttributeModifiers",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14023ed10 FUN_14023ed10 body=92 status=ok
// SIG undefined FUN_14023ed10(void)

void FUN_14023ed10(void)

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
    *puVar1 = &PTR_FUN_143f61bc8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"DamageTypeAttribute",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14023ed70 FUN_14023ed70 body=92 status=ok
// SIG undefined FUN_14023ed70(void)

void FUN_14023ed70(void)

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
    *puVar1 = &PTR_FUN_144bbc348;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ShieldAugmentAbsorbRestoreData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14023edd0 FUN_14023edd0 body=92 status=ok
// SIG undefined FUN_14023edd0(void)

void FUN_14023edd0(void)

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
    *puVar1 = &PTR_FUN_144bbc200;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ShieldAugmentDamageEventData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14023ee30 FUN_14023ee30 body=92 status=ok
// SIG undefined FUN_14023ee30(void)

void FUN_14023ee30(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144bbc9c0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ShieldTriggeredElementalEffect",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14023ee90 FUN_14023ee90 body=92 status=ok
// SIG undefined FUN_14023ee90(void)

void FUN_14023ee90(void)

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
    *puVar1 = &PTR_FUN_144bbc8a8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ShieldTriggeredProjectileReflectEffect",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14023ef40 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14645c0d0,0);
  FGenericPlatformString::Memcpy(DAT_14645c0d0,&DAT_144bbb720,8);
  atexit((_func_5014 *)&LAB_143e71db0);
  return;
}



// FUNCTION 14023efa0 FUN_14023efa0 body=66 status=ok
// SIG undefined FUN_14023efa0(void)

void FUN_14023efa0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EAugmentTriggerOn",1);
  UObjectCompiledInDeferEnum(FUN_1414bfd90,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 14023eff0 FUN_14023eff0 body=66 status=ok
// SIG undefined FUN_14023eff0(void)

void FUN_14023eff0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EShieldDamageModifierApplicationTarget",1);
  UObjectCompiledInDeferEnum(FUN_1414bfdd0,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 14023f040 FUN_14023f040 body=66 status=ok
// SIG undefined FUN_14023f040(void)

void FUN_14023f040(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AdaptiveTypeAssociations",1);
  UObjectCompiledInDeferStruct(FUN_1414c0ca0,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 14023f090 FUN_14023f090 body=66 status=ok
// SIG undefined FUN_14023f090(void)

void FUN_14023f090(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AttributeModifiers",1);
  UObjectCompiledInDeferStruct(FUN_1414c0d00,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 14023f0e0 FUN_14023f0e0 body=66 status=ok
// SIG undefined FUN_14023f0e0(void)

void FUN_14023f0e0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"DamageTypeAttribute",1);
  UObjectCompiledInDeferStruct
            (FMovieSceneEventPayloadVariable::StaticStruct,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 14023f130 FUN_14023f130 body=66 status=ok
// SIG undefined FUN_14023f130(void)

void FUN_14023f130(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ShieldAugmentAbsorbRestoreData",1);
  UObjectCompiledInDeferStruct(FUN_1414c0dc0,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 14023f180 FUN_14023f180 body=66 status=ok
// SIG undefined FUN_14023f180(void)

void FUN_14023f180(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ShieldAugmentDamageEventData",1);
  UObjectCompiledInDeferStruct(FUN_1414c0e20,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 14023f1d0 FUN_14023f1d0 body=66 status=ok
// SIG undefined FUN_14023f1d0(void)

void FUN_14023f1d0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ShieldTriggeredElementalEffect",1);
  UObjectCompiledInDeferStruct
            (FMovieSceneCameraCutSectionTemplate::StaticStruct,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 14023f220 FUN_14023f220 body=66 status=ok
// SIG undefined FUN_14023f220(void)

void FUN_14023f220(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ShieldTriggeredProjectileReflectEffect",1);
  UObjectCompiledInDeferStruct(FUN_1414c0ee0,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 14023f270 FUN_14023f270 body=58 status=ok
// SIG undefined FUN_14023f270(void)

void FUN_14023f270(void)

{
  UObjectCompiledInDefer
            (FUN_1414bee00,AFGPoleHologram::GetPrivateStaticClass,L"AShieldBoosterNonAugment",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 14023f2b0 FUN_14023f2b0 body=58 status=ok
// SIG undefined FUN_14023f2b0(void)

void FUN_14023f2b0(void)

{
  UObjectCompiledInDefer(FUN_1414bf300,FUN_1414bf1a0,L"UShieldAugment",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 14023f2f0 FUN_14023f2f0 body=58 status=ok
// SIG undefined FUN_14023f2f0(void)

void FUN_14023f2f0(void)

{
  UObjectCompiledInDefer
            (FUN_1414c0f40,FUN_1414be7f0,L"UShieldAugmentAspectData",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 14023f330 FUN_14023f330 body=58 status=ok
// SIG undefined FUN_14023f330(void)

void FUN_14023f330(void)

{
  UObjectCompiledInDefer
            (FUN_1414c0f70,FUN_1414beb30,L"UShieldAugmentContextResolver",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 14023f370 FUN_14023f370 body=58 status=ok
// SIG undefined FUN_14023f370(void)

void FUN_14023f370(void)

{
  UObjectCompiledInDefer
            (FUN_1414c0fa0,FUN_1414be3c0,L"UShieldAugment_Absorb",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 14023f3b0 FUN_14023f3b0 body=58 status=ok
// SIG undefined FUN_14023f3b0(void)

void FUN_14023f3b0(void)

{
  UObjectCompiledInDefer
            (FUN_1414c0fd0,FUN_1414be5b0,L"UShieldAugment_Adaptive",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 14023f3f0 FUN_14023f3f0 body=58 status=ok
// SIG undefined FUN_14023f3f0(void)

void FUN_14023f3f0(void)

{
  UObjectCompiledInDefer
            (FUN_1414c1000,UMovieSceneSoundSetSection::GetPrivateStaticClass,L"UShieldAugment_Amp",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 14023f430 FUN_14023f430 body=58 status=ok
// SIG undefined FUN_14023f430(void)

void FUN_14023f430(void)

{
  UObjectCompiledInDefer
            (FUN_1414c1030,UFGPoleDescriptor::GetPrivateStaticClass,L"UShieldAugment_Attribute",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 14023f470 FUN_14023f470 body=58 status=ok
// SIG undefined FUN_14023f470(void)

void FUN_14023f470(void)

{
  UObjectCompiledInDefer
            (FUN_1414c1060,USoundNodeEnveloper::StaticClass,L"UShieldAugment_ChargeSpawner",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 14023f4b0 FUN_14023f4b0 body=58 status=ok
// SIG undefined FUN_14023f4b0(void)

void FUN_14023f4b0(void)

{
  UObjectCompiledInDefer
            (FUN_1414c1090,UFocusWidget::GetPrivateStaticClass,L"UShieldAugment_Damage",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 14023f4f0 FUN_14023f4f0 body=58 status=ok
// SIG undefined FUN_14023f4f0(void)

void FUN_14023f4f0(void)

{
  UObjectCompiledInDefer
            (FUN_1414c10c0,FUN_1414bf030,L"UShieldAugment_DamageModifier",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 14023f530 FUN_14023f530 body=58 status=ok
// SIG undefined FUN_14023f530(void)

void FUN_14023f530(void)

{
  UObjectCompiledInDefer
            (FUN_1414c10f0,FUN_1414bf0f0,L"UShieldAugment_Projected",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 14023f570 FUN_14023f570 body=58 status=ok
// SIG undefined FUN_14023f570(void)

void FUN_14023f570(void)

{
  UObjectCompiledInDefer
            (FUN_1414c1120,FUN_1414bf250,L"UShieldAugment_Resistance",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 14023f5b0 FUN_14023f5b0 body=58 status=ok
// SIG undefined FUN_14023f5b0(void)

void FUN_14023f5b0(void)

{
  UObjectCompiledInDefer
            (FUN_1414c1150,UUGStreamInteractConnectionUW::GetPrivateStaticClass,
             L"UShieldAugment_Spike",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 14023f5f0 FUN_14023f5f0 body=58 status=ok
// SIG undefined FUN_14023f5f0(void)

void FUN_14023f5f0(void)

{
  UObjectCompiledInDefer
            (FUN_1414bef30,FUN_1414bef60,L"UShieldAugment_Triggerable",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 14023f630 FUN_14023f630 body=58 status=ok
// SIG undefined FUN_14023f630(void)

void FUN_14023f630(void)

{
  UObjectCompiledInDefer
            (FUN_1414c1180,AInteractiveFoliageActor::GetPrivateStaticClass,
             L"UShieldBalanceStateComponent",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 14023f670 FUN_14023f670 body=58 status=ok
// SIG undefined FUN_14023f670(void)

void FUN_14023f670(void)

{
  UObjectCompiledInDefer
            (FUN_1414c11b0,UGameplayTagAssetInterface::GetPrivateStaticClass,
             L"UShieldBarrierInterface",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 14023f6b0 FUN_14023f6b0 body=58 status=ok
// SIG undefined FUN_14023f6b0(void)

void FUN_14023f6b0(void)

{
  UObjectCompiledInDefer
            (FUN_1414c11e0,FUN_1414bebf0,L"UShieldBoosterModifierValueResolver",L"/Script/OakGame",0
             ,0,0);
  return;
}



// FUNCTION 14023fd00 FUN_14023fd00 body=92 status=ok
// SIG undefined FUN_14023fd00(void)

void FUN_14023fd00(void)

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
    *puVar1 = &PTR_FUN_144bc6458;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"RushStackInstance",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14023fd60 FUN_14023fd60 body=92 status=ok
// SIG undefined FUN_14023fd60(void)

void FUN_14023fd60(void)

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
    *puVar1 = &PTR_FUN_144bc6340;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"SirenArmAppearanceState",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14023fdc0 FUN_14023fdc0 body=92 status=ok
// SIG undefined FUN_14023fdc0(void)

void FUN_14023fdc0(void)

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
    *puVar1 = &PTR_FUN_1440080d0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"SirenGhostArmConfiguration",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14023fe20 FUN_14023fe20 body=92 status=ok
// SIG undefined FUN_14023fe20(void)

void FUN_14023fe20(void)

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
    *puVar1 = &PTR_FUN_144bc6b18;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"SirenStandInFlourish",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14023fed0 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146462780,0);
  FGenericPlatformString::Memcpy(DAT_146462780,&DAT_144bbdc98,8);
  atexit((_func_5014 *)&LAB_143e71dd0);
  return;
}



// FUNCTION 14023ff30 FUN_14023ff30 body=66 status=ok
// SIG undefined FUN_14023ff30(void)

void FUN_14023ff30(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ESirenGhostArmConfigurationType",1);
  UObjectCompiledInDeferEnum(FUN_1414c3dd0,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 14023ff80 FUN_14023ff80 body=66 status=ok
// SIG undefined FUN_14023ff80(void)

void FUN_14023ff80(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"RushStackInstance",1);
  UObjectCompiledInDeferStruct
            (FMovieSceneEventPayloadVariable::StaticStruct,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 14023ffd0 FUN_14023ffd0 body=66 status=ok
// SIG undefined FUN_14023ffd0(void)

void FUN_14023ffd0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"SirenArmAppearanceState",1);
  UObjectCompiledInDeferStruct(FUN_1414c4310,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 140240020 FUN_140240020 body=66 status=ok
// SIG undefined FUN_140240020(void)

void FUN_140240020(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"SirenGhostArmConfiguration",1);
  UObjectCompiledInDeferStruct
            (FMovieSceneEventPayloadVariable::StaticStruct,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 140240070 FUN_140240070 body=66 status=ok
// SIG undefined FUN_140240070(void)

void FUN_140240070(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"SirenStandInFlourish",1);
  UObjectCompiledInDeferStruct(FUN_1414c43d0,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1402400c0 FUN_1402400c0 body=58 status=ok
// SIG undefined FUN_1402400c0(void)

void FUN_1402400c0(void)

{
  UObjectCompiledInDefer
            (FUN_1414c25c0,AUGAreaEffectActor::GetPrivateStaticClass,L"AShieldChargeInventoryPickup"
             ,L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 140240100 FUN_140240100 body=58 status=ok
// SIG undefined FUN_140240100(void)

void FUN_140240100(void)

{
  UObjectCompiledInDefer
            (FUN_1414c22a0,ATDMGameMode::GetPrivateStaticClass,L"ASlaughterGameMode",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 140240140 FUN_140240140 body=58 status=ok
// SIG undefined FUN_140240140(void)

void FUN_140240140(void)

{
  UObjectCompiledInDefer
            (FUN_1414c26a0,FUN_1414c2510,L"ASlaughterGameState",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 140240180 FUN_140240180 body=58 status=ok
// SIG undefined FUN_140240180(void)

void FUN_140240180(void)

{
  UObjectCompiledInDefer
            (FUN_1414c4430,APlayerStateRemnant::GetPrivateStaticClass,L"ASoundController",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1402401c0 FUN_1402401c0 body=58 status=ok
// SIG undefined FUN_1402401c0(void)

void FUN_1402401c0(void)

{
  UObjectCompiledInDefer
            (FUN_1414c4460,ARemnantMiniMapDisplayActor::GetPrivateStaticClass,
             L"ASoundControllerSensor",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 140240200 FUN_140240200 body=58 status=ok
// SIG undefined FUN_140240200(void)

void FUN_140240200(void)

{
  UObjectCompiledInDefer
            (FUN_1414c4490,FUN_1414c19b0,L"UShieldChargeInventoryBalanceStateComponent",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 140240240 FUN_140240240 body=58 status=ok
// SIG undefined FUN_140240240(void)

void FUN_140240240(void)

{
  UObjectCompiledInDefer
            (FUN_1414c44c0,FUN_1414c23a0,L"UShieldChargeModifierValueResolver",L"/Script/OakGame",0,
             0,0);
  return;
}



// FUNCTION 140240280 FUN_140240280 body=58 status=ok
// SIG undefined FUN_140240280(void)

void FUN_140240280(void)

{
  UObjectCompiledInDefer
            (FUN_1414c44f0,FUN_1414c2c00,L"UShieldDamageTypeAspectData",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1402402c0 FUN_1402402c0 body=58 status=ok
// SIG undefined FUN_1402402c0(void)

void FUN_1402402c0(void)

{
  UObjectCompiledInDefer
            (FUN_1414c1890,UUserObjectListEntry::GetPrivateStaticClass,L"UShieldProviderInterface",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 140240300 FUN_140240300 body=58 status=ok
// SIG undefined FUN_140240300(void)

void FUN_140240300(void)

{
  UObjectCompiledInDefer
            (Z_Construct_UClass_UCS_EnemyStealthDevour,FUN_1414c1a70,
             L"UShockwaveEffectCollectionData",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 140240340 FUN_140240340 body=58 status=ok
// SIG undefined FUN_140240340(void)

void FUN_140240340(void)

{
  UObjectCompiledInDefer
            (FUN_1414c2150,FUN_1414c1ff0,L"USingularityGrenadeAudioEffectComponent",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 140240380 FUN_140240380 body=58 status=ok
// SIG undefined FUN_140240380(void)

void FUN_140240380(void)

{
  UObjectCompiledInDefer
            (FUN_1414c3000,UCurveSourceInterface::GetPrivateStaticClass,
             L"USingularityPullableInterface",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1402403c0 FUN_1402403c0 body=58 status=ok
// SIG undefined FUN_1402403c0(void)

void FUN_1402403c0(void)

{
  UObjectCompiledInDefer
            (FUN_1414c4550,UGameplayTagAssetInterface::GetPrivateStaticClass,
             L"USirenArmControllerInterface",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 140240400 FUN_140240400 body=58 status=ok
// SIG undefined FUN_140240400(void)

void FUN_140240400(void)

{
  UObjectCompiledInDefer
            (FUN_1414c1b30,FUN_1414c1900,L"USirenCharacterComponent",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 140240440 FUN_140240440 body=58 status=ok
// SIG undefined FUN_140240440(void)

void FUN_140240440(void)

{
  UObjectCompiledInDefer
            (FUN_1414c4580,FUN_1414c20a0,L"USirenRushStackData",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 140240480 FUN_140240480 body=58 status=ok
// SIG undefined FUN_140240480(void)

void FUN_140240480(void)

{
  UObjectCompiledInDefer
            (FUN_1414c29c0,USkeletalBodySetup::GetPrivateStaticClass,L"USirenStandInComponent",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1402404c0 FUN_1402404c0 body=58 status=ok
// SIG undefined FUN_1402404c0(void)

void FUN_1402404c0(void)

{
  UObjectCompiledInDefer
            (FUN_1414c45b0,FUN_1414c2aa0,L"USkillScreenIronBearAnimInstance",L"/Script/OakGame",0,0,
             0);
  return;
}



// FUNCTION 140240500 FUN_140240500 body=58 status=ok
// SIG undefined FUN_140240500(void)

void FUN_140240500(void)

{
  UObjectCompiledInDefer
            (FUN_1414c45e0,AGBattleRoyaleGameMode::GetPrivateStaticClass,
             L"USkillScreenStandInAnimInstance",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 140240540 FUN_140240540 body=58 status=ok
// SIG undefined FUN_140240540(void)

void FUN_140240540(void)

{
  UObjectCompiledInDefer
            (Z_Construct_UClass_UMovieSceneBuiltInEasingFunction,FUN_1414c2b50,
             L"USlideModifierAspectData",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 140240580 FUN_140240580 body=58 status=ok
// SIG undefined FUN_140240580(void)

void FUN_140240580(void)

{
  UObjectCompiledInDefer
            (FUN_1414c4640,FUN_1414c30e0,L"USocialInteractionComponent",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 140241130 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146466690,0);
  FGenericPlatformString::Memcpy(DAT_146466690,L"<img src=\"%s\"></>",0x24);
  atexit((_func_5014 *)&LAB_143e71df0);
  return;
}



// FUNCTION 140241270 FUN_140241270 body=92 status=ok
// SIG undefined FUN_140241270(void)

void FUN_140241270(void)

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
    *puVar1 = &PTR_FUN_143ff1be8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"SeatOccupant",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1402412d0 FUN_1402412d0 body=92 status=ok
// SIG undefined FUN_1402412d0(void)

void FUN_1402412d0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0xe0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144bcdbd8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"SelectedInventorySpawningState",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140241330 FUN_140241330 body=92 status=ok
// SIG undefined FUN_140241330(void)

void FUN_140241330(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0xb8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144bcdcf0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"SpawnDroppedPickupLootRequest",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140241390 FUN_140241390 body=92 status=ok
// SIG undefined FUN_140241390(void)

void FUN_140241390(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x110;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    *puVar1 = &PTR_FUN_144bcd9a8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"SpawnDroppedPickupLootRequestEntry",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1402413f0 FUN_1402413f0 body=92 status=ok
// SIG undefined FUN_1402413f0(void)

void FUN_1402413f0(void)

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
    *puVar1 = &PTR_FUN_144bccb30;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"SpawnFactorKeyedAction",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140241450 FUN_140241450 body=92 status=ok
// SIG undefined FUN_140241450(void)

void FUN_140241450(void)

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
    *puVar1 = &PTR_FUN_144bcd468;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"SpawnFactoryDataArray",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1402414b0 FUN_1402414b0 body=92 status=ok
// SIG undefined FUN_1402414b0(void)

void FUN_1402414b0(void)

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
    *puVar1 = &PTR_FUN_144bcdac0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"SpawnInventoryLootRequest",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140241510 FUN_140241510 body=92 status=ok
// SIG undefined FUN_140241510(void)

void FUN_140241510(void)

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
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144bcd890;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"SpawnInventoryLootRequestEntry",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140241570 FUN_140241570 body=92 status=ok
// SIG undefined FUN_140241570(void)

void FUN_140241570(void)

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
    *puVar1 = &PTR_FUN_144bce7e0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"SplineFollowerDistanceCheckpoint",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1402415d0 FUN_1402415d0 body=92 status=ok
// SIG undefined FUN_1402415d0(void)

void FUN_1402415d0(void)

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
    *puVar1 = &PTR_FUN_144bcd350;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"VehiclePartListData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140241630 FUN_140241630 body=92 status=ok
// SIG undefined FUN_140241630(void)

void FUN_140241630(void)

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
    *puVar1 = &PTR_FUN_144bcd238;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"WeightedPassengersNum",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140241880 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146466680,0);
  FGenericPlatformString::Memcpy(DAT_146466680,&DAT_144bc8020,8);
  atexit((_func_5014 *)&LAB_143e71e10);
  return;
}



// FUNCTION 1402418e0 FUN_1402418e0 body=66 status=ok
// SIG undefined FUN_1402418e0(void)

void FUN_1402418e0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EItemDropOnDeathType",1);
  UObjectCompiledInDeferEnum(FUN_1414c8800,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 140241930 FUN_140241930 body=66 status=ok
// SIG undefined FUN_140241930(void)

void FUN_140241930(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ELootInstancingPolicy",1);
  UObjectCompiledInDeferEnum(FUN_1414c8840,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 140241980 FUN_140241980 body=66 status=ok
// SIG undefined FUN_140241980(void)

void FUN_140241980(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ESpawnDroppedPickupLootRequestType",1);
  UObjectCompiledInDeferEnum(FUN_1414c8880,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1402419d0 FUN_1402419d0 body=66 status=ok
// SIG undefined FUN_1402419d0(void)

void FUN_1402419d0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"SeatOccupant",1);
  UObjectCompiledInDeferStruct
            (FMovieSceneEventPayloadVariable::StaticStruct,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 140241a20 FUN_140241a20 body=66 status=ok
// SIG undefined FUN_140241a20(void)

void FUN_140241a20(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"SelectedInventorySpawningState",1);
  UObjectCompiledInDeferStruct(FTreasureDefinition::StaticStruct,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 140241a70 FUN_140241a70 body=66 status=ok
// SIG undefined FUN_140241a70(void)

void FUN_140241a70(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"SpawnDroppedPickupLootRequest",1);
  UObjectCompiledInDeferStruct
            (FMovieSceneParticleSectionTemplate::StaticStruct,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 140241ac0 FUN_140241ac0 body=66 status=ok
// SIG undefined FUN_140241ac0(void)

void FUN_140241ac0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"SpawnDroppedPickupLootRequestEntry",1);
  UObjectCompiledInDeferStruct
            (FObjectiveDebriefingElement::StaticStruct,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 140241b10 FUN_140241b10 body=66 status=ok
// SIG undefined FUN_140241b10(void)

void FUN_140241b10(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"SpawnFactorKeyedAction",1);
  UObjectCompiledInDeferStruct(FUN_1414c8cf0,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 140241b60 FUN_140241b60 body=66 status=ok
// SIG undefined FUN_140241b60(void)

void FUN_140241b60(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"SpawnFactoryDataArray",1);
  UObjectCompiledInDeferStruct
            (FMovieSceneActorReferenceKey::StaticStruct,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 140241bb0 FUN_140241bb0 body=66 status=ok
// SIG undefined FUN_140241bb0(void)

void FUN_140241bb0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"SpawnInventoryLootRequest",1);
  UObjectCompiledInDeferStruct(FUN_1414c8db0,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 140241c00 FUN_140241c00 body=66 status=ok
// SIG undefined FUN_140241c00(void)

void FUN_140241c00(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"SpawnInventoryLootRequestEntry",1);
  UObjectCompiledInDeferStruct
            (FMovieSceneEventRepeaterTemplate::StaticStruct,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 140241c50 FUN_140241c50 body=66 status=ok
// SIG undefined FUN_140241c50(void)

void FUN_140241c50(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"SplineFollowerDistanceCheckpoint",1);
  UObjectCompiledInDeferStruct
            (FMovieSceneActorReferenceKey::StaticStruct,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 140241ca0 FUN_140241ca0 body=66 status=ok
// SIG undefined FUN_140241ca0(void)

void FUN_140241ca0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"VehiclePartListData",1);
  UObjectCompiledInDeferStruct(FUN_1414c8ed0,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 140241cf0 FUN_140241cf0 body=66 status=ok
// SIG undefined FUN_140241cf0(void)

void FUN_140241cf0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"WeightedPassengersNum",1);
  UObjectCompiledInDeferStruct(FMovieSceneEvent::StaticStruct,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 140241d40 FUN_140241d40 body=58 status=ok
// SIG undefined FUN_140241d40(void)

void FUN_140241d40(void)

{
  UObjectCompiledInDefer
            (FUN_1414c5f00,AGPingUsable::GetPrivateStaticClass,L"ASpawnPerformance_10Components",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 140241d80 FUN_140241d80 body=58 status=ok
// SIG undefined FUN_140241d80(void)

void FUN_140241d80(void)

{
  UObjectCompiledInDefer
            (FUN_1414c8f90,AGPingUsable::GetPrivateStaticClass,
             L"ASpawnPerformance_10ComponentsWithReferences",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 140241dc0 FUN_140241dc0 body=58 status=ok
// SIG undefined FUN_140241dc0(void)

void FUN_140241dc0(void)

{
  UObjectCompiledInDefer
            (FUN_1414c5ed0,AGPingUsable::GetPrivateStaticClass,L"ASpawnPerformance_10SMC",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 140241e00 FUN_140241e00 body=58 status=ok
// SIG undefined FUN_140241e00(void)

void FUN_140241e00(void)

{
  UObjectCompiledInDefer
            (FUN_1414c8fc0,AGPingUsable::GetPrivateStaticClass,
             L"ASpawnPerformance_10SMCWithReferences",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 140241e40 FUN_140241e40 body=58 status=ok
// SIG undefined FUN_140241e40(void)

void FUN_140241e40(void)

{
  UObjectCompiledInDefer
            (FUN_1414c5ea0,FUN_1414c58e0,L"ASpawnPerformance_Skeletal",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 140241e80 FUN_140241e80 body=58 status=ok
// SIG undefined FUN_140241e80(void)

void FUN_140241e80(void)

{
  UObjectCompiledInDefer
            (FUN_1414c8ff0,FUN_1414c59b0,L"ASpawnPerformance_SkeletalWithReference",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 140241ec0 FUN_140241ec0 body=58 status=ok
// SIG undefined FUN_140241ec0(void)

void FUN_140241ec0(void)

{
  UObjectCompiledInDefer
            (FUN_1414c6e80,AGShockOrb::GetPrivateStaticClass,L"ASplat",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 140241f00 FUN_140241f00 body=58 status=ok
// SIG undefined FUN_140241f00(void)

void FUN_140241f00(void)

{
  UObjectCompiledInDefer
            (FUN_1414c9020,UMaterialInstanceDynamic::GetPrivateStaticClass,L"USpawnFactory_Lootable"
             ,L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 140241f40 FUN_140241f40 body=58 status=ok
// SIG undefined FUN_140241f40(void)

void FUN_140241f40(void)

{
  UObjectCompiledInDefer
            (Z_Construct_UClass_UGGameInstance,UAnimMontage::GetPrivateStaticClass,
             L"USpawnFactory_Oak",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 140241f80 FUN_140241f80 body=58 status=ok
// SIG undefined FUN_140241f80(void)

void FUN_140241f80(void)

{
  UObjectCompiledInDefer
            (FUN_1414c9050,FUN_1414c5770,L"USpawnFactory_OakAI",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 140241fc0 FUN_140241fc0 body=58 status=ok
// SIG undefined FUN_140241fc0(void)

void FUN_140241fc0(void)

{
  UObjectCompiledInDefer
            (FUN_1414c9080,FUN_1414c5a60,L"USpawnFactory_OakInteractiveObject",L"/Script/OakGame",0,
             0,0);
  return;
}



// FUNCTION 140242000 FUN_140242000 body=58 status=ok
// SIG undefined FUN_140242000(void)

void FUN_140242000(void)

{
  UObjectCompiledInDefer
            (FUN_1414c90b0,FUN_1414c5df0,L"USpawnFactory_OakItemPickup",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 140242040 FUN_140242040 body=58 status=ok
// SIG undefined FUN_140242040(void)

void FUN_140242040(void)

{
  UObjectCompiledInDefer
            (FUN_1414c90e0,FUN_1414c5f60,L"USpawnFactory_OakProjectile",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 140242080 FUN_140242080 body=58 status=ok
// SIG undefined FUN_140242080(void)

void FUN_140242080(void)

{
  UObjectCompiledInDefer
            (FUN_1414c9110,FUN_1414c60e0,L"USpawnFactory_OakTurret",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1402420c0 FUN_1402420c0 body=58 status=ok
// SIG undefined FUN_1402420c0(void)

void FUN_1402420c0(void)

{
  UObjectCompiledInDefer
            (FUN_1414c62d0,UTextBlock::GetPrivateStaticClass,L"USpawnFactory_OakVehicle",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 140242100 FUN_140242100 body=58 status=ok
// SIG undefined FUN_140242100(void)

void FUN_140242100(void)

{
  UObjectCompiledInDefer
            (FUN_1414c9140,FUN_1414c6ee0,L"USpawnFactory_OakVehicleBuilder",L"/Script/OakGame",0,0,0
            );
  return;
}



// FUNCTION 140242140 FUN_140242140 body=58 status=ok
// SIG undefined FUN_140242140(void)

void FUN_140242140(void)

{
  UObjectCompiledInDefer
            (FUN_1414c9170,FUN_1414c6010,L"USpawnFactory_OakVehicleRandomSeats",L"/Script/OakGame",0
             ,0,0);
  return;
}



// FUNCTION 140242180 FUN_140242180 body=58 status=ok
// SIG undefined FUN_140242180(void)

void FUN_140242180(void)

{
  UObjectCompiledInDefer(FUN_1414c67f0,FUN_1414c6570,L"USpawnLootManager",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1402421c0 FUN_1402421c0 body=58 status=ok
// SIG undefined FUN_1402421c0(void)

void FUN_1402421c0(void)

{
  UObjectCompiledInDefer
            (FUN_1414c91a0,ARemnantWeaponMod::GetPrivateStaticClass,L"USpinnerSliderTestMovie",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 140242200 FUN_140242200 body=58 status=ok
// SIG undefined FUN_140242200(void)

void FUN_140242200(void)

{
  UObjectCompiledInDefer
            (FUN_1414c91d0,UProgressBar::GetPrivateStaticClass,L"USplatDamageData",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 140242240 FUN_140242240 body=58 status=ok
// SIG undefined FUN_140242240(void)

void FUN_140242240(void)

{
  UObjectCompiledInDefer
            (FUN_1414c9200,UMovieSceneLevelVisibilitySection::GetPrivateStaticClass,L"USplatData",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 140242280 FUN_140242280 body=58 status=ok
// SIG undefined FUN_140242280(void)

void FUN_140242280(void)

{
  UObjectCompiledInDefer
            (FUN_1414c6850,UTextBlock::GetPrivateStaticClass,L"USplineFollowerComponent",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1402422c0 FUN_1402422c0 body=58 status=ok
// SIG undefined FUN_1402422c0(void)

void FUN_1402422c0(void)

{
  UObjectCompiledInDefer
            (FUN_1414c9230,UUGJournalKey::GetPrivateStaticClass,L"UVehiclePartSetData",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1402425e0 FUN_1402425e0 body=92 status=ok
// SIG undefined FUN_1402425e0(void)

void FUN_1402425e0(void)

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
    *puVar1 = &PTR_FUN_144bd47d0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"DesiredStandInActorData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140242640 FUN_140242640 body=92 status=ok
// SIG undefined FUN_140242640(void)

void FUN_140242640(void)

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
    *puVar1 = &PTR_FUN_144bd3a00;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"FrontendStandInSlotSettings",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1402426a0 FUN_1402426a0 body=92 status=ok
// SIG undefined FUN_1402426a0(void)

void FUN_1402426a0(void)

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
    *puVar1 = &PTR_FUN_144bd3b18;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"FrontendStandInSlotTransitionSettings",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140242700 FUN_140242700 body=92 status=ok
// SIG undefined FUN_140242700(void)

void FUN_140242700(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144bd3c30;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GlobalsStandInSettings",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140242760 FUN_140242760 body=92 status=ok
// SIG undefined FUN_140242760(void)

void FUN_140242760(void)

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
    *puVar1 = &PTR_FUN_144bd2ae0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"HardPointSlotSettings",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1402427c0 FUN_1402427c0 body=92 status=ok
// SIG undefined FUN_1402427c0(void)

void FUN_1402427c0(void)

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
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144bd2bf8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"IronBearHardPointAugmentInfo",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140242820 FUN_140242820 body=92 status=ok
// SIG undefined FUN_140242820(void)

void FUN_140242820(void)

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
    *puVar1 = &PTR_FUN_144bd46b8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"StandInLightComponentInstance",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140242880 FUN_140242880 body=92 status=ok
// SIG undefined FUN_140242880(void)

void FUN_140242880(void)

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
    *puVar1 = &PTR_FUN_144bd40d0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"StandInLightingComponentConfig",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1402428e0 FUN_1402428e0 body=92 status=ok
// SIG undefined FUN_1402428e0(void)

void FUN_1402428e0(void)

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
    *puVar1 = &PTR_FUN_144bd3fb8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"StandInLightingConfig",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140242940 FUN_140242940 body=92 status=ok
// SIG undefined FUN_140242940(void)

void FUN_140242940(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144bd3ea0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"StandInLightingSetting",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1402429a0 FUN_1402429a0 body=92 status=ok
// SIG undefined FUN_1402429a0(void)

void FUN_1402429a0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144bd4300;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"StandInPlayerClassSpecificPositionSetting",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140242a00 FUN_140242a00 body=92 status=ok
// SIG undefined FUN_140242a00(void)

void FUN_140242a00(void)

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
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_144134d30;
  }
  puVar2 = (undefined8 *)
           FName::FName(local_res8,L"StandInPlayerClassSpecificPositionSettingContextOverride",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140242a60 FUN_140242a60 body=92 status=ok
// SIG undefined FUN_140242a60(void)

void FUN_140242a60(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x78;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144bd41e8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"StandInPositionSetting",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140242ac0 FUN_140242ac0 body=92 status=ok
// SIG undefined FUN_140242ac0(void)

void FUN_140242ac0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144bd4418;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"StandInScaleSetting",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140242b20 FUN_140242b20 body=92 status=ok
// SIG undefined FUN_140242b20(void)

void FUN_140242b20(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x418;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144bd3d88;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"StandInUIConfigData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140242b80 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFAnimInstanceProxy'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFAnimInstanceProxy''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFAnimInstanceProxy__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x390;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    *puVar1 = &PTR_FUN_144bd45a0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"StandInUIController",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140242be0 FUN_140242be0 body=92 status=ok
// SIG undefined FUN_140242be0(void)

void FUN_140242be0(void)

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
    *puVar1 = &PTR_FUN_144bd48e8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"StandInUIControllerTickFunction",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140242c90 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146469bb0,0);
  FGenericPlatformString::Memcpy(DAT_146469bb0,&DAT_144bd0ab8,8);
  atexit((_func_5014 *)&LAB_143e71e30);
  return;
}



// FUNCTION 140242cf0 FUN_140242cf0 body=66 status=ok
// SIG undefined FUN_140242cf0(void)

void FUN_140242cf0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EStandInActorType",1);
  UObjectCompiledInDeferEnum(FUN_1414cd5a0,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 140242d40 FUN_140242d40 body=66 status=ok
// SIG undefined FUN_140242d40(void)

void FUN_140242d40(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EStandInAutoScaleMode",1);
  UObjectCompiledInDeferEnum(FUN_1414cd5e0,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 140242d90 FUN_140242d90 body=66 status=ok
// SIG undefined FUN_140242d90(void)

void FUN_140242d90(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"DesiredStandInActorData",1);
  UObjectCompiledInDeferStruct(FUN_1414cdd70,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 140242de0 FUN_140242de0 body=66 status=ok
// SIG undefined FUN_140242de0(void)

void FUN_140242de0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"FrontendStandInSlotSettings",1);
  UObjectCompiledInDeferStruct(FUN_1414cddd0,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 140242e30 FUN_140242e30 body=66 status=ok
// SIG undefined FUN_140242e30(void)

void FUN_140242e30(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"FrontendStandInSlotTransitionSettings",1);
  UObjectCompiledInDeferStruct
            (FMovieSceneEventPayloadVariable::StaticStruct,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 140242e80 FUN_140242e80 body=66 status=ok
// SIG undefined FUN_140242e80(void)

void FUN_140242e80(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GlobalsStandInSettings",1);
  UObjectCompiledInDeferStruct(FUN_1414cde90,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 140242ed0 FUN_140242ed0 body=66 status=ok
// SIG undefined FUN_140242ed0(void)

void FUN_140242ed0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"HardPointSlotSettings",1);
  UObjectCompiledInDeferStruct(FUN_1414cdef0,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 140242f20 FUN_140242f20 body=66 status=ok
// SIG undefined FUN_140242f20(void)

void FUN_140242f20(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"IronBearHardPointAugmentInfo",1);
  UObjectCompiledInDeferStruct
            (FMovieSceneEventRepeaterTemplate::StaticStruct,L"/Script/OakGame",*puVar1,0,0);
  return;
}


