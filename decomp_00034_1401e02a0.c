// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1401e02a0 FUN_1401e02a0 body=58 status=ok
// SIG undefined FUN_1401e02a0(void)

void FUN_1401e02a0(void)

{
  UObjectCompiledInDefer
            (FUN_14137f350,AGImpulseWindProjectile::GetPrivateStaticClass,L"UGFxOakLegalScreenMenu",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e02e0 FUN_1401e02e0 body=58 status=ok
// SIG undefined FUN_1401e02e0(void)

void FUN_1401e02e0(void)

{
  UObjectCompiledInDefer(FUN_14137f6c0,FUN_14137f3f0,L"UGFxOakMainMenu",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e0320 FUN_1401e0320 body=58 status=ok
// SIG undefined FUN_1401e0320(void)

void FUN_1401e0320(void)

{
  UObjectCompiledInDefer
            (FUN_141383380,UGameInstanceGameParameters::GetPrivateStaticClass,
             L"UGFxOakMenuScrollingList",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e0360 FUN_1401e0360 body=58 status=ok
// SIG undefined FUN_1401e0360(void)

void FUN_1401e0360(void)

{
  UObjectCompiledInDefer
            (FUN_141380750,AGImpulseWindProjectile::GetPrivateStaticClass,L"UGFxOakTitleScreenMenu",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e03a0 FUN_1401e03a0 body=58 status=ok
// SIG undefined FUN_1401e03a0(void)

void FUN_1401e03a0(void)

{
  UObjectCompiledInDefer
            (FUN_1413833b0,UARTrackedObject::GetPrivateStaticClass,L"UGFxOakTitleScreenMenuData",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e03e0 FUN_1401e03e0 body=58 status=ok
// SIG undefined FUN_1401e03e0(void)

void FUN_1401e03e0(void)

{
  UObjectCompiledInDefer
            (FUN_1413833e0,UEditableTextBox::GetPrivateStaticClass,
             L"UGFxOnlineMessageAnimationWidget",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e0420 FUN_1401e0420 body=58 status=ok
// SIG undefined FUN_1401e0420(void)

void FUN_1401e0420(void)

{
  UObjectCompiledInDefer
            (FUN_141383410,FUN_14137f4a0,L"UGFxOperativeSkillScreenTree",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e04c0 EOL_String'' body=115 status=ok
// SIG undefined EOL_String''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FDlgConfigWriter::EOL_String__(void)

{
  undefined *puVar1;
  int iVar2;
  longlong lVar3;
  
  puVar1 = PTR_DAT_146339810;
  if ((PTR_DAT_146339810 != (undefined *)0x0) && (*(short *)PTR_DAT_146339810 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(short *)(PTR_DAT_146339810 + lVar3 * 2) != 0);
    iVar2 = (int)lVar3 + 1;
    _DAT_1468860e8 = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1468860e0,0);
    }
    FGenericPlatformString::Memcpy(DAT_1468860e0,puVar1,(longlong)iVar2 * 2);
  }
  atexit((_func_5014 *)&LAB_143e6b950);
  return;
}



// FUNCTION 1401e0540 FUN_1401e0540 body=59 status=ok
// SIG undefined FUN_1401e0540(void)

void FUN_1401e0540(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633df70,0);
  FGenericPlatformString::Memcpy(DAT_14633df70,L"AbilityData",0x18);
  atexit((_func_5014 *)&LAB_143e6b970);
  return;
}



// FUNCTION 1401e0620 FUN_1401e0620 body=59 status=ok
// SIG undefined FUN_1401e0620(void)

void FUN_1401e0620(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633df20,0);
  FGenericPlatformString::Memcpy(DAT_14633df20,L"ArtifactJsonData",0x22);
  atexit((_func_5014 *)&LAB_143e6b990);
  return;
}



// FUNCTION 1401e0660 FUN_1401e0660 body=59 status=ok
// SIG undefined FUN_1401e0660(void)

void FUN_1401e0660(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633dea0,0);
  FGenericPlatformString::Memcpy(DAT_14633dea0,L"ArtifactSerialNumber",0x2a);
  atexit((_func_5014 *)&LAB_143e6b9b0);
  return;
}



// FUNCTION 1401e0920 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633df40,0);
  FGenericPlatformString::Memcpy(DAT_14633df40,L"BodyCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e6b9d0);
  return;
}



// FUNCTION 1401e0960 FUN_1401e0960 body=59 status=ok
// SIG undefined FUN_1401e0960(void)

void FUN_1401e0960(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633ddd0,0);
  FGenericPlatformString::Memcpy(DAT_14633ddd0,L"CanJoin",0x10);
  atexit((_func_5014 *)&LAB_143e6b9f0);
  return;
}



// FUNCTION 1401e09e0 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633df10,0);
  FGenericPlatformString::Memcpy(DAT_14633df10,L"ClassItemJsonData",0x24);
  atexit((_func_5014 *)&LAB_143e6ba10);
  return;
}



// FUNCTION 1401e0a20 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633de90,0);
  FGenericPlatformString::Memcpy(DAT_14633de90,L"ClassItemSerialNumber",0x2c);
  atexit((_func_5014 *)&LAB_143e6ba30);
  return;
}



// FUNCTION 1401e0aa0 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633dfc0,0);
  FGenericPlatformString::Memcpy(DAT_14633dfc0,L"CrewChallengesCompletion",0x32);
  atexit((_func_5014 *)&LAB_143e6ba50);
  return;
}



// FUNCTION 1401e0b20 FUN_1401e0b20 body=59 status=ok
// SIG undefined FUN_1401e0b20(void)

void FUN_1401e0b20(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633e020,0);
  FGenericPlatformString::Memcpy(DAT_14633e020,L"DateTime",0x12);
  atexit((_func_5014 *)&LAB_143e6ba70);
  return;
}



// FUNCTION 1401e0c40 `dynamic_initializer_for_'kResultStringCannotLoadPreset'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kResultStringCannotLoadPreset''(void)

void _dynamic_initializer_for__kResultStringCannotLoadPreset__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633df60,0);
  FGenericPlatformString::Memcpy(DAT_14633df60,L"EmoteCustomizationHash",0x2e);
  atexit((_func_5014 *)&LAB_143e6ba90);
  return;
}



// FUNCTION 1401e0c80 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633dfb0,0);
  FGenericPlatformString::Memcpy(DAT_14633dfb0,L"EnemyChallengesCompletion",0x34);
  atexit((_func_5014 *)&LAB_143e6bab0);
  return;
}



// FUNCTION 1401e0d00 `dynamic_initializer_for_'kResultStringAssetDefAlrealdyLoaded'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kResultStringAssetDefAlrealdyLoaded''(void)

void _dynamic_initializer_for__kResultStringAssetDefAlrealdyLoaded__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633dfd0,0);
  FGenericPlatformString::Memcpy(DAT_14633dfd0,L"ExplorationChallengesCompletion",0x40);
  atexit((_func_5014 *)&LAB_143e6bad0);
  return;
}



// FUNCTION 1401e0dc0 FUN_1401e0dc0 body=59 status=ok
// SIG undefined FUN_1401e0dc0(void)

void FUN_1401e0dc0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633de00,0);
  FGenericPlatformString::Memcpy(DAT_14633de00,L"FriendActivityStatus",0x2a);
  atexit((_func_5014 *)&LAB_143e6baf0);
  return;
}



// FUNCTION 1401e0e00 FUN_1401e0e00 body=59 status=ok
// SIG undefined FUN_1401e0e00(void)

void FUN_1401e0e00(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633e070,0);
  FGenericPlatformString::Memcpy(DAT_14633e070,L"ChallengeInfo",0x1c);
  atexit((_func_5014 *)&LAB_143e6bb10);
  return;
}



// FUNCTION 1401e0e40 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633e060,0);
  FGenericPlatformString::Memcpy(DAT_14633e060,L"FriendCrewQuarterInfo",0x2c);
  atexit((_func_5014 *)&LAB_143e6bb30);
  return;
}



// FUNCTION 1401e0e80 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633e040,0);
  FGenericPlatformString::Memcpy(DAT_14633e040,L"FriendLoadOutInfo",0x24);
  atexit((_func_5014 *)&LAB_143e6bb50);
  return;
}



// FUNCTION 1401e0ec0 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633e030,0);
  FGenericPlatformString::Memcpy(DAT_14633e030,L"FriendStatusPresenceInfo",0x32);
  atexit((_func_5014 *)&LAB_143e6bb70);
  return;
}



// FUNCTION 1401e0f00 FUN_1401e0f00 body=59 status=ok
// SIG undefined FUN_1401e0f00(void)

void FUN_1401e0f00(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633e050,0);
  FGenericPlatformString::Memcpy(DAT_14633e050,L"FriendSkillTreeInfo",0x28);
  atexit((_func_5014 *)&LAB_143e6bb90);
  return;
}



// FUNCTION 1401e0f40 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633df80,0);
  FGenericPlatformString::Memcpy(DAT_14633df80,L"FriendStatusThing",0x24);
  atexit((_func_5014 *)&LAB_143e6bbb0);
  return;
}



// FUNCTION 1401e0f80 FUN_1401e0f80 body=59 status=ok
// SIG undefined FUN_1401e0f80(void)

void FUN_1401e0f80(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633df90,0);
  FGenericPlatformString::Memcpy(DAT_14633df90,L"GameCompletion",0x1e);
  atexit((_func_5014 *)&LAB_143e6bbd0);
  return;
}



// FUNCTION 1401e0fc0 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633def0,0);
  FGenericPlatformString::Memcpy(DAT_14633def0,L"GrenadeJsonData",0x20);
  atexit((_func_5014 *)&LAB_143e6bbf0);
  return;
}



// FUNCTION 1401e1000 FUN_1401e1000 body=59 status=ok
// SIG undefined FUN_1401e1000(void)

void FUN_1401e1000(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633de70,0);
  FGenericPlatformString::Memcpy(DAT_14633de70,L"GrenadeSerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e6bc10);
  return;
}



// FUNCTION 1401e1040 FUN_1401e1040 body=59 status=ok
// SIG undefined FUN_1401e1040(void)

void FUN_1401e1040(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633de10,0);
  FGenericPlatformString::Memcpy(DAT_14633de10,L"GuardianRank",0x1a);
  atexit((_func_5014 *)&LAB_143e6bc30);
  return;
}



// FUNCTION 1401e1080 FUN_1401e1080 body=59 status=ok
// SIG undefined FUN_1401e1080(void)

void FUN_1401e1080(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633ddf0,0);
  FGenericPlatformString::Memcpy(DAT_14633ddf0,L"HasSelectedCharacter",0x2a);
  atexit((_func_5014 *)&LAB_143e6bc50);
  return;
}



// FUNCTION 1401e10c0 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633df30,0);
  FGenericPlatformString::Memcpy(DAT_14633df30,L"HeadCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e6bc70);
  return;
}



// FUNCTION 1401e12d0 FUN_1401e12d0 body=59 status=ok
// SIG undefined FUN_1401e12d0(void)

void FUN_1401e12d0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633dd40,0);
  FGenericPlatformString::Memcpy(DAT_14633dd40,L"Level",0xc);
  atexit((_func_5014 *)&LAB_143e6bc90);
  return;
}



// FUNCTION 1401e1310 FUN_1401e1310 body=59 status=ok
// SIG undefined FUN_1401e1310(void)

void FUN_1401e1310(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633dda0,0);
  FGenericPlatformString::Memcpy(DAT_14633dda0,L"LocationX",0x14);
  atexit((_func_5014 *)&LAB_143e6bcb0);
  return;
}



// FUNCTION 1401e1350 FUN_1401e1350 body=59 status=ok
// SIG undefined FUN_1401e1350(void)

void FUN_1401e1350(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633ddb0,0);
  FGenericPlatformString::Memcpy(DAT_14633ddb0,L"LocationY",0x14);
  atexit((_func_5014 *)&LAB_143e6bcd0);
  return;
}



// FUNCTION 1401e1390 FUN_1401e1390 body=59 status=ok
// SIG undefined FUN_1401e1390(void)

void FUN_1401e1390(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633ddc0,0);
  FGenericPlatformString::Memcpy(DAT_14633ddc0,L"LocationZ",0x14);
  atexit((_func_5014 *)&LAB_143e6bcf0);
  return;
}



// FUNCTION 1401e13d0 FUN_1401e13d0 body=59 status=ok
// SIG undefined FUN_1401e13d0(void)

void FUN_1401e13d0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633dde0,0);
  FGenericPlatformString::Memcpy(DAT_14633dde0,L"LookingForHelp",0x1e);
  atexit((_func_5014 *)&LAB_143e6bd10);
  return;
}



// FUNCTION 1401e1410 FUN_1401e1410 body=59 status=ok
// SIG undefined FUN_1401e1410(void)

void FUN_1401e1410(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633dd50,0);
  FGenericPlatformString::Memcpy(DAT_14633dd50,L"MapName",0x10);
  atexit((_func_5014 *)&LAB_143e6bd30);
  return;
}



// FUNCTION 1401e1490 FUN_1401e1490 body=59 status=ok
// SIG undefined FUN_1401e1490(void)

void FUN_1401e1490(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633dd90,0);
  FGenericPlatformString::Memcpy(DAT_14633dd90,L"MissionHash",0x18);
  atexit((_func_5014 *)&LAB_143e6bd50);
  return;
}



// FUNCTION 1401e1710 FUN_1401e1710 body=59 status=ok
// SIG undefined FUN_1401e1710(void)

void FUN_1401e1710(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633dd70,0);
  FGenericPlatformString::Memcpy(DAT_14633dd70,L"PartyPlayerCount",0x22);
  atexit((_func_5014 *)&LAB_143e6bd70);
  return;
}



// FUNCTION 1401e1830 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633dd80,0);
  FGenericPlatformString::Memcpy(DAT_14633dd80,L"PlayerClassIdentifierHash",0x34);
  atexit((_func_5014 *)&LAB_143e6bd90);
  return;
}



// FUNCTION 1401e1870 FUN_1401e1870 body=59 status=ok
// SIG undefined FUN_1401e1870(void)

void FUN_1401e1870(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633e010,0);
  FGenericPlatformString::Memcpy(DAT_14633e010,L"PlayerId",0x12);
  atexit((_func_5014 *)&LAB_143e6bdb0);
  return;
}



// FUNCTION 1401e1970 LocalizationSourceControlSettingsCategoryName'' body=59 status=ok
// SIG undefined LocalizationSourceControlSettingsCategoryName''(void)

void `dynamic_initializer_for_'FLocalizationSourceControlSettings::
     LocalizationSourceControlSettingsCategoryName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633dfe0,0);
  FGenericPlatformString::Memcpy(DAT_14633dfe0,L"ProvingGroundChallengesCompletion",0x44);
  atexit((_func_5014 *)&LAB_143e6bdd0);
  return;
}



// FUNCTION 1401e19f0 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633e000,0);
  FGenericPlatformString::Memcpy(DAT_14633e000,L"RaidChallengesCompletion",0x32);
  atexit((_func_5014 *)&LAB_143e6bdf0);
  return;
}



// FUNCTION 1401e1a70 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633dd00,0);
  FGenericPlatformString::Memcpy(DAT_14633dd00,L"<img src=\"%s\"></>",0x24);
  atexit((_func_5014 *)&LAB_143e6be10);
  return;
}



// FUNCTION 1401e1bb0 FUN_1401e1bb0 body=92 status=ok
// SIG undefined FUN_1401e1bb0(void)

void FUN_1401e1bb0(void)

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
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GFxPassiveSkillWidgetSlotData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1401e1c10 FUN_1401e1c10 body=92 status=ok
// SIG undefined FUN_1401e1c10(void)

void FUN_1401e1c10(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144921998;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"PauseMenuTickFunction",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1401e1c70 FUN_1401e1c70 body=92 status=ok
// SIG undefined FUN_1401e1c70(void)

void FUN_1401e1c70(void)

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
    *puVar1 = &PTR_FUN_14491fea0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"SubtitleBarItems",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1401e1d50 FUN_1401e1d50 body=59 status=ok
// SIG undefined FUN_1401e1d50(void)

void FUN_1401e1d50(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633dd60,0);
  FGenericPlatformString::Memcpy(DAT_14633dd60,L"SessionId",0x14);
  atexit((_func_5014 *)&LAB_143e6be30);
  return;
}



// FUNCTION 1401e1d90 FUN_1401e1d90 body=59 status=ok
// SIG undefined FUN_1401e1d90(void)

void FUN_1401e1d90(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633df00,0);
  FGenericPlatformString::Memcpy(DAT_14633df00,L"ShieldJsonData",0x1e);
  atexit((_func_5014 *)&LAB_143e6be50);
  return;
}



// FUNCTION 1401e1dd0 `dynamic_initializer_for_'StatusStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'StatusStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__StatusStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633de80,0);
  FGenericPlatformString::Memcpy(DAT_14633de80,L"ShieldSerialNumber",0x26);
  atexit((_func_5014 *)&LAB_143e6be70);
  return;
}



// FUNCTION 1401e1e30 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633df50,0);
  FGenericPlatformString::Memcpy(DAT_14633df50,L"SkinCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e6be90);
  return;
}



// FUNCTION 1401e1e70 FUN_1401e1e70 body=59 status=ok
// SIG undefined FUN_1401e1e70(void)

void FUN_1401e1e70(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633dff0,0);
  FGenericPlatformString::Memcpy(DAT_14633dff0,L"SlaughterChallengesCompletion",0x3c);
  atexit((_func_5014 *)&LAB_143e6beb0);
  return;
}



// FUNCTION 1401e1f60 FUN_1401e1f60 body=59 status=ok
// SIG undefined FUN_1401e1f60(void)

void FUN_1401e1f60(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633de20,0);
  FGenericPlatformString::Memcpy(DAT_14633de20,L"TimePlayed",0x16);
  atexit((_func_5014 *)&LAB_143e6bed0);
  return;
}



// FUNCTION 1401e2040 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633dc68,0);
  FGenericPlatformString::Memcpy(DAT_14633dc68,&DAT_144911108,8);
  atexit((_func_5014 *)&LAB_143e6bef0);
  return;
}



// FUNCTION 1401e2080 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633deb0,0);
  FGenericPlatformString::Memcpy(DAT_14633deb0,L"Weapon1JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e6bf10);
  return;
}



// FUNCTION 1401e20c0 FUN_1401e20c0 body=59 status=ok
// SIG undefined FUN_1401e20c0(void)

void FUN_1401e20c0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633de30,0);
  FGenericPlatformString::Memcpy(DAT_14633de30,L"Weapon1SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e6bf30);
  return;
}



// FUNCTION 1401e2100 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633dec0,0);
  FGenericPlatformString::Memcpy(DAT_14633dec0,L"Weapon2JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e6bf50);
  return;
}



// FUNCTION 1401e2140 FUN_1401e2140 body=59 status=ok
// SIG undefined FUN_1401e2140(void)

void FUN_1401e2140(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633de40,0);
  FGenericPlatformString::Memcpy(DAT_14633de40,L"Weapon2SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e6bf70);
  return;
}



// FUNCTION 1401e2180 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633ded0,0);
  FGenericPlatformString::Memcpy(DAT_14633ded0,L"Weapon3JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e6bf90);
  return;
}



// FUNCTION 1401e21c0 FUN_1401e21c0 body=59 status=ok
// SIG undefined FUN_1401e21c0(void)

void FUN_1401e21c0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633de50,0);
  FGenericPlatformString::Memcpy(DAT_14633de50,L"Weapon3SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e6bfb0);
  return;
}



// FUNCTION 1401e2200 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633dee0,0);
  FGenericPlatformString::Memcpy(DAT_14633dee0,L"Weapon4JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e6bfd0);
  return;
}



// FUNCTION 1401e2240 FUN_1401e2240 body=59 status=ok
// SIG undefined FUN_1401e2240(void)

void FUN_1401e2240(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633de60,0);
  FGenericPlatformString::Memcpy(DAT_14633de60,L"Weapon4SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e6bff0);
  return;
}



// FUNCTION 1401e2280 FUN_1401e2280 body=59 status=ok
// SIG undefined FUN_1401e2280(void)

void FUN_1401e2280(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14633dfa0,0);
  FGenericPlatformString::Memcpy(DAT_14633dfa0,L"WeaponChallengesCompletion",0x36);
  atexit((_func_5014 *)&LAB_143e6c010);
  return;
}



// FUNCTION 1401e22e0 FUN_1401e22e0 body=66 status=ok
// SIG undefined FUN_1401e22e0(void)

void FUN_1401e22e0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EOverheadNameplateDisplayState",1);
  UObjectCompiledInDeferEnum(FUN_14138a140,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401e2330 FUN_1401e2330 body=66 status=ok
// SIG undefined FUN_1401e2330(void)

void FUN_1401e2330(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EOverheadNameplateHealthState",1);
  UObjectCompiledInDeferEnum(FUN_14138a180,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401e2380 FUN_1401e2380 body=66 status=ok
// SIG undefined FUN_1401e2380(void)

void FUN_1401e2380(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EPetCommandWidgetState",1);
  UObjectCompiledInDeferEnum(FUN_14138a1c0,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401e23d0 FUN_1401e23d0 body=66 status=ok
// SIG undefined FUN_1401e23d0(void)

void FUN_1401e23d0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GFxPassiveSkillWidgetSlotData",1);
  UObjectCompiledInDeferStruct
            (FMovieSceneEventPayloadVariable::StaticStruct,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401e2420 FUN_1401e2420 body=66 status=ok
// SIG undefined FUN_1401e2420(void)

void FUN_1401e2420(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"PauseMenuTickFunction",1);
  UObjectCompiledInDeferStruct
            (FMovieSceneEventRepeaterTemplate::StaticStruct,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401e2470 FUN_1401e2470 body=66 status=ok
// SIG undefined FUN_1401e2470(void)

void FUN_1401e2470(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"SubtitleBarItems",1);
  UObjectCompiledInDeferStruct
            (FMovieSceneEventRepeaterTemplate::StaticStruct,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401e24c0 FUN_1401e24c0 body=58 status=ok
// SIG undefined FUN_1401e24c0(void)

void FUN_1401e24c0(void)

{
  UObjectCompiledInDefer
            (FUN_14138a790,FUN_141388270,L"UGFxControlsKeybindingItem",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e2500 FUN_1401e2500 body=58 status=ok
// SIG undefined FUN_1401e2500(void)

void FUN_1401e2500(void)

{
  UObjectCompiledInDefer
            (FUN_14138a7c0,UReplicationGraphNode_GridSpatialization2D::GetPrivateStaticClass,
             L"UGFxMainOptionPanel",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e2540 FUN_1401e2540 body=58 status=ok
// SIG undefined FUN_1401e2540(void)

void FUN_1401e2540(void)

{
  UObjectCompiledInDefer
            (FUN_1413879c0,UParticleLODLevel::GetPrivateStaticClass,L"UGFxOptionBase",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e2580 FUN_1401e2580 body=58 status=ok
// SIG undefined FUN_1401e2580(void)

void FUN_1401e2580(void)

{
  UObjectCompiledInDefer
            (FUN_14138a7f0,FUN_141386d50,L"UGFxOptionPreviewPanel",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e25c0 FUN_1401e25c0 body=58 status=ok
// SIG undefined FUN_1401e25c0(void)

void FUN_1401e25c0(void)

{
  UObjectCompiledInDefer
            (FUN_14138a820,FUN_141387c50,L"UGFxOptionsControlsPanel",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e2600 FUN_1401e2600 body=58 status=ok
// SIG undefined FUN_1401e2600(void)

void FUN_1401e2600(void)

{
  UObjectCompiledInDefer
            (FUN_1413883f0,AUGWeapon_Hook::GetPrivateStaticClass,L"UGFxOptionsMenu",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e2640 FUN_1401e2640 body=58 status=ok
// SIG undefined FUN_1401e2640(void)

void FUN_1401e2640(void)

{
  UObjectCompiledInDefer
            (FUN_141386f90,UGSquadMemberWidget::GetPrivateStaticClass,L"UGFxOutOfBoundsWarning",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e2680 FUN_1401e2680 body=58 status=ok
// SIG undefined FUN_1401e2680(void)

void FUN_1401e2680(void)

{
  UObjectCompiledInDefer
            (FUN_1413870b0,FUN_141387000,L"UGFxOverheadNameplate",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e26c0 FUN_1401e26c0 body=58 status=ok
// SIG undefined FUN_1401e26c0(void)

void FUN_1401e26c0(void)

{
  UObjectCompiledInDefer
            (FUN_14138a850,FUN_141386e20,L"UGFxPCTextChatBuffer",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e2700 FUN_1401e2700 body=58 status=ok
// SIG undefined FUN_1401e2700(void)

void FUN_1401e2700(void)

{
  UObjectCompiledInDefer
            (FUN_141387290,AGImpulseWindProjectile::GetPrivateStaticClass,L"UGFxPCTextChatMenu",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e2740 FUN_1401e2740 body=58 status=ok
// SIG undefined FUN_1401e2740(void)

void FUN_1401e2740(void)

{
  UObjectCompiledInDefer
            (FUN_14138a880,UPawnAction_Sequence::StaticClass,L"UGFxPCTextChatMenuData",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e2780 FUN_1401e2780 body=58 status=ok
// SIG undefined FUN_1401e2780(void)

void FUN_1401e2780(void)

{
  UObjectCompiledInDefer
            (FUN_141387560,USoUIInputKeySelector::GetPrivateStaticClass,
             L"UGFxPCTextChatMenuNotification",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e27c0 FUN_1401e27c0 body=58 status=ok
// SIG undefined FUN_1401e27c0(void)

void FUN_1401e27c0(void)

{
  UObjectCompiledInDefer
            (FUN_141387760,FUN_1413876b0,L"UGFxPCTextChatWidget",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e2800 FUN_1401e2800 body=58 status=ok
// SIG undefined FUN_1401e2800(void)

void FUN_1401e2800(void)

{
  UObjectCompiledInDefer
            (FUN_14138a8b0,FUN_1413875f0,L"UGFxPassiveSkillIcon",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e2840 FUN_1401e2840 body=58 status=ok
// SIG undefined FUN_1401e2840(void)

void FUN_1401e2840(void)

{
  UObjectCompiledInDefer
            (FUN_14138a8e0,UInputKeySelector::GetPrivateStaticClass,L"UGFxPassiveSkillWidget",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e2880 FUN_1401e2880 body=58 status=ok
// SIG undefined FUN_1401e2880(void)

void FUN_1401e2880(void)

{
  UObjectCompiledInDefer(FUN_141387e90,FUN_141387d00,L"UGFxPauseMenu",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e28c0 FUN_1401e28c0 body=58 status=ok
// SIG undefined FUN_1401e28c0(void)

void FUN_1401e28c0(void)

{
  UObjectCompiledInDefer
            (FUN_141387900,AGPoisonSplashProjectile::GetPrivateStaticClass,L"UGFxPetCommandWidget",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e2900 FUN_1401e2900 body=58 status=ok
// SIG undefined FUN_1401e2900(void)

void FUN_1401e2900(void)

{
  UObjectCompiledInDefer
            (FUN_141387db0,AUGWeapon_Hook::GetPrivateStaticClass,L"UGFxPhotoModeMenu",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e2940 FUN_1401e2940 body=58 status=ok
// SIG undefined FUN_1401e2940(void)

void FUN_1401e2940(void)

{
  UObjectCompiledInDefer
            (FUN_14138a910,FUN_141387af0,L"UGFxPhotoModeMenuSlider",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e2980 FUN_1401e2980 body=58 status=ok
// SIG undefined FUN_1401e2980(void)

void FUN_1401e2980(void)

{
  UObjectCompiledInDefer
            (FUN_14138a940,FUN_141387a40,L"UGFxPhotoModeMenuSpinner",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e2a20 EOL_String'' body=115 status=ok
// SIG undefined EOL_String''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FDlgConfigWriter::EOL_String__(void)

{
  undefined *puVar1;
  int iVar2;
  longlong lVar3;
  
  puVar1 = PTR_DAT_14633dc50;
  if ((PTR_DAT_14633dc50 != (undefined *)0x0) && (*(short *)PTR_DAT_14633dc50 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(short *)(PTR_DAT_14633dc50 + lVar3 * 2) != 0);
    iVar2 = (int)lVar3 + 1;
    _DAT_1468867c8 = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1468867c0,0);
    }
    FGenericPlatformString::Memcpy(DAT_1468867c0,puVar1,(longlong)iVar2 * 2);
  }
  atexit((_func_5014 *)&LAB_143e6c030);
  return;
}



// FUNCTION 1401e3590 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146342da0,0);
  FGenericPlatformString::Memcpy(DAT_146342da0,L"<img src=\"%s\"></>",0x24);
  atexit((_func_5014 *)&LAB_143e6c050);
  return;
}



// FUNCTION 1401e36d0 FUN_1401e36d0 body=92 status=ok
// SIG undefined FUN_1401e36d0(void)

void FUN_1401e36d0(void)

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
    *puVar1 = &PTR_FUN_14492d820;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"BaseQuickChangeMenuStateData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1401e3730 FUN_1401e3730 body=92 status=ok
// SIG undefined FUN_1401e3730(void)

void FUN_1401e3730(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0xd0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_14492b920;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GFxPlayerStorageBag",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1401e3790 FUN_1401e3790 body=92 status=ok
// SIG undefined FUN_1401e3790(void)

void FUN_1401e3790(void)

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
    *puVar1 = &PTR_FUN_1448ddb60;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"IconNameAndIndex",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1401e37f0 FUN_1401e37f0 body=92 status=ok
// SIG undefined FUN_1401e37f0(void)

void FUN_1401e37f0(void)

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
    *puVar1 = &PTR_FUN_14492c618;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"PlaythroughSelectionModeEntry",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1401e3850 FUN_1401e3850 body=92 status=ok
// SIG undefined FUN_1401e3850(void)

void FUN_1401e3850(void)

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
    *puVar1 = &PTR_FUN_14492d510;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"QuickChangeRespecTreeBranchRow",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1401e3aa0 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146342d10,0);
  FGenericPlatformString::Memcpy(DAT_146342d10,&DAT_144923eb8,8);
  atexit((_func_5014 *)&LAB_143e6c070);
  return;
}



// FUNCTION 1401e3b00 FUN_1401e3b00 body=66 status=ok
// SIG undefined FUN_1401e3b00(void)

void FUN_1401e3b00(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EBaseQuickChangeChoiceType",1);
  UObjectCompiledInDeferEnum(FUN_14138f7c0,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401e3b50 FUN_1401e3b50 body=66 status=ok
// SIG undefined FUN_1401e3b50(void)

void FUN_1401e3b50(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EBaseQuickChangeMenuState",1);
  UObjectCompiledInDeferEnum(FUN_14138f800,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401e3ba0 FUN_1401e3ba0 body=66 status=ok
// SIG undefined FUN_1401e3ba0(void)

void FUN_1401e3ba0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGFxPlayerStorageMenuItemAction",1);
  UObjectCompiledInDeferEnum(FUN_14138f840,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401e3bf0 FUN_1401e3bf0 body=66 status=ok
// SIG undefined FUN_1401e3bf0(void)

void FUN_1401e3bf0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGFxPlayerStorageMenuState",1);
  UObjectCompiledInDeferEnum(FUN_14138f880,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401e3c40 FUN_1401e3c40 body=66 status=ok
// SIG undefined FUN_1401e3c40(void)

void FUN_1401e3c40(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EQuickChangeMenuSortMode",1);
  UObjectCompiledInDeferEnum(FUN_14138f8c0,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401e3c90 FUN_1401e3c90 body=66 status=ok
// SIG undefined FUN_1401e3c90(void)

void FUN_1401e3c90(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"BaseQuickChangeMenuStateData",1);
  UObjectCompiledInDeferStruct(FUN_14138fac0,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401e3ce0 FUN_1401e3ce0 body=66 status=ok
// SIG undefined FUN_1401e3ce0(void)

void FUN_1401e3ce0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GFxPlayerStorageBag",1);
  UObjectCompiledInDeferStruct(FUN_14138fb20,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401e3d30 FUN_1401e3d30 body=66 status=ok
// SIG undefined FUN_1401e3d30(void)

void FUN_1401e3d30(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"IconNameAndIndex",1);
  UObjectCompiledInDeferStruct
            (FMovieSceneActorReferenceKey::StaticStruct,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401e3d80 FUN_1401e3d80 body=66 status=ok
// SIG undefined FUN_1401e3d80(void)

void FUN_1401e3d80(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"PlaythroughSelectionModeEntry",1);
  UObjectCompiledInDeferStruct(FUN_14138fbe0,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401e3dd0 FUN_1401e3dd0 body=66 status=ok
// SIG undefined FUN_1401e3dd0(void)

void FUN_1401e3dd0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"QuickChangeRespecTreeBranchRow",1);
  UObjectCompiledInDeferStruct(FUN_14138fc40,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401e3e20 FUN_1401e3e20 body=58 status=ok
// SIG undefined FUN_1401e3e20(void)

void FUN_1401e3e20(void)

{
  UObjectCompiledInDefer
            (FUN_14138fca0,FUN_14138e2b0,L"UGFxBaseQuickChangeMenuItem",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e3e60 FUN_1401e3e60 body=58 status=ok
// SIG undefined FUN_1401e3e60(void)

void FUN_1401e3e60(void)

{
  UObjectCompiledInDefer
            (FUN_14138fcd0,FUN_14138d860,L"UGFxPlayerStorageBackpackItem",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e3ea0 FUN_1401e3ea0 body=58 status=ok
// SIG undefined FUN_1401e3ea0(void)

void FUN_1401e3ea0(void)

{
  UObjectCompiledInDefer
            (FUN_14138fd00,FUN_14138d770,L"UGFxPlayerStorageHeader",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e3ee0 FUN_1401e3ee0 body=58 status=ok
// SIG undefined FUN_1401e3ee0(void)

void FUN_1401e3ee0(void)

{
  UObjectCompiledInDefer
            (FUN_14138fd30,UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass,
             L"UGFxPlayerStorageListCapacityObject",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e3f20 FUN_1401e3f20 body=58 status=ok
// SIG undefined FUN_1401e3f20(void)

void FUN_1401e3f20(void)

{
  UObjectCompiledInDefer
            (FUN_14138d910,FUN_14138d230,L"UGFxPlayerStorageMenu",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e3f60 FUN_1401e3f60 body=58 status=ok
// SIG undefined FUN_1401e3f60(void)

void FUN_1401e3f60(void)

{
  UObjectCompiledInDefer
            (FUN_14138dc40,UGMainMenuAnimInstance::GetPrivateStaticClass,
             L"UGFxPlayerStorageNavButton",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e3fa0 FUN_1401e3fa0 body=58 status=ok
// SIG undefined FUN_1401e3fa0(void)

void FUN_1401e3fa0(void)

{
  UObjectCompiledInDefer
            (FUN_14138fd60,FUN_14138d440,L"UGFxPlayerStorageNavObject",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e3fe0 FUN_1401e3fe0 body=58 status=ok
// SIG undefined FUN_1401e3fe0(void)

void FUN_1401e3fe0(void)

{
  UObjectCompiledInDefer
            (FUN_14138fd90,UMobBaseAnim::GetPrivateStaticClass,L"UGFxPlaythroughModeCell",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e4020 FUN_1401e4020 body=58 status=ok
// SIG undefined FUN_1401e4020(void)

void FUN_1401e4020(void)

{
  UObjectCompiledInDefer
            (FUN_14138d5a0,UGNewsMenuItem::GetPrivateStaticClass,L"UGFxPlaythroughSelectionMenu",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e4060 FUN_1401e4060 body=58 status=ok
// SIG undefined FUN_1401e4060(void)

void FUN_1401e4060(void)

{
  UObjectCompiledInDefer
            (FUN_14138de90,UMultiLineEditableTextBox::GetPrivateStaticClass,L"UGFxQuickChangeMenu",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e40a0 FUN_1401e40a0 body=58 status=ok
// SIG undefined FUN_1401e40a0(void)

void FUN_1401e40a0(void)

{
  UObjectCompiledInDefer
            (FUN_14138dec0,FUN_14138e360,L"UGFxQuickChangeMenuBase",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e40e0 FUN_1401e40e0 body=58 status=ok
// SIG undefined FUN_1401e40e0(void)

void FUN_1401e40e0(void)

{
  UObjectCompiledInDefer
            (FUN_14138fdc0,FUN_14138dd10,L"UGFxQuickChangeRespecTreeBranch",L"/Script/OakGame",0,0,0
            );
  return;
}



// FUNCTION 1401e5180 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146347728,0);
  FGenericPlatformString::Memcpy(DAT_146347728,&DAT_1449346a0,8);
  atexit((_func_5014 *)&LAB_143e6c090);
  return;
}



// FUNCTION 1401e51e0 FUN_1401e51e0 body=66 status=ok
// SIG undefined FUN_1401e51e0(void)

void FUN_1401e51e0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EReloadWidgetDisplayState",1);
  UObjectCompiledInDeferEnum(FUN_141394800,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401e5230 FUN_1401e5230 body=58 status=ok
// SIG undefined FUN_1401e5230(void)

void FUN_1401e5230(void)

{
  UObjectCompiledInDefer
            (FUN_141394b40,FUN_141392c00,L"UGFxCustomizationUnlockedWidget",L"/Script/OakGame",0,0,0
            );
  return;
}



// FUNCTION 1401e5270 FUN_1401e5270 body=58 status=ok
// SIG undefined FUN_1401e5270(void)

void FUN_1401e5270(void)

{
  UObjectCompiledInDefer
            (FUN_141394b70,FUN_1413930c0,L"UGFxEmoteWheelButton",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e52b0 FUN_1401e52b0 body=58 status=ok
// SIG undefined FUN_1401e52b0(void)

void FUN_1401e52b0(void)

{
  UObjectCompiledInDefer
            (FUN_141392e10,UComboBoxString::GetPrivateStaticClass,L"UGFxQuickChangeMenuStore",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e52f0 FUN_1401e52f0 body=58 status=ok
// SIG undefined FUN_1401e52f0(void)

void FUN_1401e52f0(void)

{
  UObjectCompiledInDefer(FUN_141391c50,FUN_141393180,L"UGFxQuickMenu",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e5330 FUN_1401e5330 body=58 status=ok
// SIG undefined FUN_1401e5330(void)

void FUN_1401e5330(void)

{
  UObjectCompiledInDefer
            (FUN_141391e00,FUN_141391d50,L"UGFxRaidSpectatorWidget",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e5370 FUN_1401e5370 body=58 status=ok
// SIG undefined FUN_1401e5370(void)

void FUN_1401e5370(void)

{
  UObjectCompiledInDefer
            (FUN_141391fa0,UInputKeySelector::GetPrivateStaticClass,L"UGFxReloadWidget",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e53b0 FUN_1401e53b0 body=58 status=ok
// SIG undefined FUN_1401e53b0(void)

void FUN_1401e53b0(void)

{
  UObjectCompiledInDefer
            (FUN_141392270,ARemnantWeaponMod::GetPrivateStaticClass,L"UGFxResolutionsMenu",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e53f0 FUN_1401e53f0 body=58 status=ok
// SIG undefined FUN_1401e53f0(void)

void FUN_1401e53f0(void)

{
  UObjectCompiledInDefer
            (FUN_1413927a0,AXActionCue::GetPrivateStaticClass,L"UGFxRolloutMessage",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e5430 FUN_1401e5430 body=58 status=ok
// SIG undefined FUN_1401e5430(void)

void FUN_1401e5430(void)

{
  UObjectCompiledInDefer
            (FUN_1413925d0,UInputKeySelector::GetPrivateStaticClass,L"UGFxSDUVendorMenu",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e5470 FUN_1401e5470 body=58 status=ok
// SIG undefined FUN_1401e5470(void)

void FUN_1401e5470(void)

{
  UObjectCompiledInDefer
            (FUN_141394ba0,FUN_141392520,L"UGFxSDUVendorMenuInfoContainer",L"/Script/OakGame",0,0,0)
  ;
  return;
}



// FUNCTION 1401e54b0 FUN_1401e54b0 body=58 status=ok
// SIG undefined FUN_1401e54b0(void)

void FUN_1401e54b0(void)

{
  UObjectCompiledInDefer
            (FUN_141392700,AGPoisonSplashProjectile::GetPrivateStaticClass,L"UGFxSHiFTMenu",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e54f0 FUN_1401e54f0 body=58 status=ok
// SIG undefined FUN_1401e54f0(void)

void FUN_1401e54f0(void)

{
  UObjectCompiledInDefer
            (FUN_141392fc0,FUN_141392a90,L"UGFxSHiFTMenuCodeRedemptionPage",L"/Script/OakGame",0,0,0
            );
  return;
}



// FUNCTION 1401e5530 FUN_1401e5530 body=58 status=ok
// SIG undefined FUN_1401e5530(void)

void FUN_1401e5530(void)

{
  UObjectCompiledInDefer
            (FUN_141394bd0,AGImpulseWindProjectile::GetPrivateStaticClass,
             L"UGFxSafeAreaCalibrationMenu",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e5570 FUN_1401e5570 body=58 status=ok
// SIG undefined FUN_1401e5570(void)

void FUN_1401e5570(void)

{
  UObjectCompiledInDefer
            (FUN_141394c00,FUN_1413929e0,L"UGFxSaveGameDetails",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e55b0 FUN_1401e55b0 body=58 status=ok
// SIG undefined FUN_1401e55b0(void)

void FUN_1401e55b0(void)

{
  UObjectCompiledInDefer
            (FUN_141394c30,AReplicationGraphDebugActor::GetPrivateStaticClass,
             L"UGFxServerBrowserListItem",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e55f0 FUN_1401e55f0 body=58 status=ok
// SIG undefined FUN_1401e55f0(void)

void FUN_1401e55f0(void)

{
  UObjectCompiledInDefer
            (FUN_141392ea0,UInputKeySelector::GetPrivateStaticClass,L"UGFxServerBrowserMenu",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e5630 FUN_1401e5630 body=58 status=ok
// SIG undefined FUN_1401e5630(void)

void FUN_1401e5630(void)

{
  UObjectCompiledInDefer(FUN_1413932e0,FUN_141393230,L"UGFxShieldBar",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e5670 FUN_1401e5670 body=58 status=ok
// SIG undefined FUN_1401e5670(void)

void FUN_1401e5670(void)

{
  UObjectCompiledInDefer
            (FUN_141394c60,UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass,
             L"UGFxSoldOutAnimationWidget",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e56b0 FUN_1401e56b0 body=58 status=ok
// SIG undefined FUN_1401e56b0(void)

void FUN_1401e56b0(void)

{
  UObjectCompiledInDefer(FUN_141394c90,FUN_141392310,L"UGFxTextFeedback",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e5750 EOL_String'' body=115 status=ok
// SIG undefined EOL_String''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FDlgConfigWriter::EOL_String__(void)

{
  undefined *puVar1;
  int iVar2;
  longlong lVar3;
  
  puVar1 = PTR_DAT_146347710;
  if ((PTR_DAT_146347710 != (undefined *)0x0) && (*(short *)PTR_DAT_146347710 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(short *)(PTR_DAT_146347710 + lVar3 * 2) != 0);
    iVar2 = (int)lVar3 + 1;
    _DAT_146887638 = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146887630,0);
    }
    FGenericPlatformString::Memcpy(DAT_146887630,puVar1,(longlong)iVar2 * 2);
  }
  atexit((_func_5014 *)&LAB_143e6c0b0);
  return;
}



// FUNCTION 1401e6440 FUN_1401e6440 body=92 status=ok
// SIG undefined FUN_1401e6440(void)

void FUN_1401e6440(void)

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
    *puVar1 = &PTR_FUN_14494e610;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GFxSkillScreenBranchContainer",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1401e64a0 FUN_1401e64a0 body=92 status=ok
// SIG undefined FUN_1401e64a0(void)

void FUN_1401e64a0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x160;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_14494e728;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GFxSkillScreenInfoCardContainer",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1401e6500 FUN_1401e6500 body=92 status=ok
// SIG undefined FUN_1401e6500(void)

void FUN_1401e6500(void)

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
    *puVar1 = &PTR_FUN_14494e840;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GFxSkillScreenLoadoutChoiceInfo",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1401e6560 FUN_1401e6560 body=92 status=ok
// SIG undefined FUN_1401e6560(void)

void FUN_1401e6560(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 200;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_14494cf60;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GFxSkillScreenSkillInfo",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1401e67b0 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14634bde8,0);
  FGenericPlatformString::Memcpy(DAT_14634bde8,&DAT_144943e10,8);
  atexit((_func_5014 *)&LAB_143e6c0d0);
  return;
}



// FUNCTION 1401e6810 FUN_1401e6810 body=66 status=ok
// SIG undefined FUN_1401e6810(void)

void FUN_1401e6810(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGFxSkillScreenLoadoutChoiceEquipState",1);
  UObjectCompiledInDeferEnum(FUN_14139c1c0,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401e6860 FUN_1401e6860 body=66 status=ok
// SIG undefined FUN_1401e6860(void)

void FUN_1401e6860(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGFxSkillScreenState",1);
  UObjectCompiledInDeferEnum(FUN_14139c200,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401e68b0 FUN_1401e68b0 body=66 status=ok
// SIG undefined FUN_1401e68b0(void)

void FUN_1401e68b0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ESirenSkillScreenSlotType",1);
  UObjectCompiledInDeferEnum(FUN_14139c240,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401e6900 FUN_1401e6900 body=66 status=ok
// SIG undefined FUN_1401e6900(void)

void FUN_1401e6900(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ESkillItemActionState",1);
  UObjectCompiledInDeferEnum(FUN_14139c280,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401e6950 FUN_1401e6950 body=66 status=ok
// SIG undefined FUN_1401e6950(void)

void FUN_1401e6950(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ESkillItemUnlockAnimState",1);
  UObjectCompiledInDeferEnum(FUN_14139c2c0,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401e69a0 FUN_1401e69a0 body=66 status=ok
// SIG undefined FUN_1401e69a0(void)

void FUN_1401e69a0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ESkillScreenItemPurchaseState",1);
  UObjectCompiledInDeferEnum(FUN_14139c300,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401e69f0 FUN_1401e69f0 body=66 status=ok
// SIG undefined FUN_1401e69f0(void)

void FUN_1401e69f0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ESkillScreenLoadoutSlotClearability",1);
  UObjectCompiledInDeferEnum(FUN_14139c340,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401e6a40 FUN_1401e6a40 body=66 status=ok
// SIG undefined FUN_1401e6a40(void)

void FUN_1401e6a40(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ESkillScreenReceiveHighlightState",1);
  UObjectCompiledInDeferEnum(FUN_14139c380,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401e6a90 FUN_1401e6a90 body=66 status=ok
// SIG undefined FUN_1401e6a90(void)

void FUN_1401e6a90(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ESkillScreenSlotType",1);
  UObjectCompiledInDeferEnum(FUN_14139c3c0,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401e6ae0 FUN_1401e6ae0 body=66 status=ok
// SIG undefined FUN_1401e6ae0(void)

void FUN_1401e6ae0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GFxSHiFT",1);
  UObjectCompiledInDeferEnum(FUN_14139c400,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401e6b30 FUN_1401e6b30 body=66 status=ok
// SIG undefined FUN_1401e6b30(void)

void FUN_1401e6b30(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GFxSkillScreenBranchContainer",1);
  UObjectCompiledInDeferStruct
            (FMovieSceneEventRepeaterTemplate::StaticStruct,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401e6b80 FUN_1401e6b80 body=66 status=ok
// SIG undefined FUN_1401e6b80(void)

void FUN_1401e6b80(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GFxSkillScreenInfoCardContainer",1);
  UObjectCompiledInDeferStruct(FUN_14139c910,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401e6bd0 FUN_1401e6bd0 body=66 status=ok
// SIG undefined FUN_1401e6bd0(void)

void FUN_1401e6bd0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GFxSkillScreenLoadoutChoiceInfo",1);
  UObjectCompiledInDeferStruct(FUN_14139c970,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401e6c20 FUN_1401e6c20 body=66 status=ok
// SIG undefined FUN_1401e6c20(void)

void FUN_1401e6c20(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GFxSkillScreenSkillInfo",1);
  UObjectCompiledInDeferStruct
            (FMovieSceneSkeletalAnimationParams::StaticStruct,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401e6c70 FUN_1401e6c70 body=58 status=ok
// SIG undefined FUN_1401e6c70(void)

void FUN_1401e6c70(void)

{
  UObjectCompiledInDefer
            (FUN_1413974e0,FUN_141397380,L"UGFxSHiFTMenuCreateAccountPage",L"/Script/OakGame",0,0,0)
  ;
  return;
}



// FUNCTION 1401e6cb0 FUN_1401e6cb0 body=58 status=ok
// SIG undefined FUN_1401e6cb0(void)

void FUN_1401e6cb0(void)

{
  UObjectCompiledInDefer
            (FUN_14139ca30,FUN_141398ff0,L"UGFxSHiFTMenuEditableTextField",L"/Script/OakGame",0,0,0)
  ;
  return;
}



// FUNCTION 1401e6cf0 FUN_1401e6cf0 body=58 status=ok
// SIG undefined FUN_1401e6cf0(void)

void FUN_1401e6cf0(void)

{
  UObjectCompiledInDefer
            (FUN_141397650,ACineCameraActor::GetPrivateStaticClass,L"UGFxSHiFTMenuNoCrossplay",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e6d30 FUN_1401e6d30 body=58 status=ok
// SIG undefined FUN_1401e6d30(void)

void FUN_1401e6d30(void)

{
  UObjectCompiledInDefer
            (FUN_141397920,FUN_141397870,L"UGFxSHiFTMenuNotSignedInPage",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e6d70 FUN_1401e6d70 body=58 status=ok
// SIG undefined FUN_1401e6d70(void)

void FUN_1401e6d70(void)

{
  UObjectCompiledInDefer
            (FUN_141397be0,UReplicationGraphNode_GridSpatialization2D::GetPrivateStaticClass,
             L"UGFxSHiFTMenuOfflinePage",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e6db0 FUN_1401e6db0 body=58 status=ok
// SIG undefined FUN_1401e6db0(void)

void FUN_1401e6db0(void)

{
  UObjectCompiledInDefer
            (FUN_141397510,thunk_FUN_14139c440,L"UGFxSHiFTMenuPage",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e6df0 FUN_1401e6df0 body=58 status=ok
// SIG undefined FUN_1401e6df0(void)

void FUN_1401e6df0(void)

{
  UObjectCompiledInDefer
            (FUN_1413983e0,UReplicationGraphNode_GridSpatialization2D::GetPrivateStaticClass,
             L"UGFxSHiFTMenuResetPasswordPage",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e6e30 FUN_1401e6e30 body=58 status=ok
// SIG undefined FUN_1401e6e30(void)

void FUN_1401e6e30(void)

{
  UObjectCompiledInDefer
            (FUN_1413986a0,UXAnimInstanceBase::GetPrivateStaticClass,
             L"UGFxSHiFTMenuRewardHistoryPage",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e6e70 FUN_1401e6e70 body=58 status=ok
// SIG undefined FUN_1401e6e70(void)

void FUN_1401e6e70(void)

{
  UObjectCompiledInDefer
            (FUN_1413987e0,FUN_141398730,L"UGFxSHiFTMenuSignInAccountPage",L"/Script/OakGame",0,0,0)
  ;
  return;
}



// FUNCTION 1401e6eb0 FUN_1401e6eb0 body=58 status=ok
// SIG undefined FUN_1401e6eb0(void)

void FUN_1401e6eb0(void)

{
  UObjectCompiledInDefer
            (FUN_14139ca60,URemnantGameInstance::GetPrivateStaticClass,
             L"UGFxSHiftMenuRewardHistoryPageItem",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e6ef0 FUN_1401e6ef0 body=58 status=ok
// SIG undefined FUN_1401e6ef0(void)

void FUN_1401e6ef0(void)

{
  UObjectCompiledInDefer
            (FUN_14139ca90,FUN_1413988b0,L"UGFxSirenSkillScreenTree",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e6f30 FUN_1401e6f30 body=58 status=ok
// SIG undefined FUN_1401e6f30(void)

void FUN_1401e6f30(void)

{
  UObjectCompiledInDefer(FUN_14139cac0,FUN_141398a60,L"UGFxSkillBar",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e6f70 FUN_1401e6f70 body=58 status=ok
// SIG undefined FUN_1401e6f70(void)

void FUN_1401e6f70(void)

{
  UObjectCompiledInDefer
            (FUN_141398bc0,FUN_141398b10,L"UGFxSkillDurationBars",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e6fb0 FUN_1401e6fb0 body=58 status=ok
// SIG undefined FUN_1401e6fb0(void)

void FUN_1401e6fb0(void)

{
  UObjectCompiledInDefer
            (FUN_141398d50,FUN_141398ca0,L"UGFxSkillScreenBranch",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e6ff0 FUN_1401e6ff0 body=58 status=ok
// SIG undefined FUN_1401e6ff0(void)

void FUN_1401e6ff0(void)

{
  UObjectCompiledInDefer
            (FUN_14139caf0,FUN_141397c50,L"UGFxSkillScreenDragObject",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e7030 FUN_1401e7030 body=58 status=ok
// SIG undefined FUN_1401e7030(void)

void FUN_1401e7030(void)

{
  UObjectCompiledInDefer
            (FUN_1413990a0,FUN_1413989b0,L"UGFxSkillScreenItem",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e7070 FUN_1401e7070 body=58 status=ok
// SIG undefined FUN_1401e7070(void)

void FUN_1401e7070(void)

{
  UObjectCompiledInDefer
            (Z_Construct_UClass_UDeleteToolComponent,FUN_141397430,
             L"UGFxSkillScreenLoadoutChoiceItem",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e70b0 FUN_1401e70b0 body=58 status=ok
// SIG undefined FUN_1401e70b0(void)

void FUN_1401e70b0(void)

{
  UObjectCompiledInDefer
            (FUN_141397790,FUN_1413976e0,L"UGFxSkillScreenLoadoutSlot",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e70f0 FUN_1401e70f0 body=58 status=ok
// SIG undefined FUN_1401e70f0(void)

void FUN_1401e70f0(void)

{
  UObjectCompiledInDefer
            (FUN_14139cb20,FUN_1413979b0,L"UGFxSkillScreenMenuData",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e7130 FUN_1401e7130 body=58 status=ok
// SIG undefined FUN_1401e7130(void)

void FUN_1401e7130(void)

{
  UObjectCompiledInDefer(FUN_14139cb50,FUN_141397a70,L"UGFxSkillScreenRow",L"/Script/OakGame",0,0,0)
  ;
  return;
}



// FUNCTION 1401e7170 FUN_1401e7170 body=58 status=ok
// SIG undefined FUN_1401e7170(void)

void FUN_1401e7170(void)

{
  UObjectCompiledInDefer
            (FUN_14139cb80,UXGameInstance::GetPrivateStaticClass,L"UGFxSkillScreenRowList",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e71b0 FUN_1401e71b0 body=58 status=ok
// SIG undefined FUN_1401e71b0(void)

void FUN_1401e71b0(void)

{
  UObjectCompiledInDefer
            (FUN_141398960,thunk_FUN_14139c4f0,L"UGFxSkillScreenTree",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e7250 EOL_String'' body=115 status=ok
// SIG undefined EOL_String''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FDlgConfigWriter::EOL_String__(void)

{
  undefined *puVar1;
  int iVar2;
  longlong lVar3;
  
  puVar1 = PTR_DAT_14634bdd0;
  if ((PTR_DAT_14634bdd0 != (undefined *)0x0) && (*(short *)PTR_DAT_14634bdd0 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(short *)(PTR_DAT_14634bdd0 + lVar3 * 2) != 0);
    iVar2 = (int)lVar3 + 1;
    _DAT_146887d28 = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146887d20,0);
    }
    FGenericPlatformString::Memcpy(DAT_146887d20,puVar1,(longlong)iVar2 * 2);
  }
  atexit((_func_5014 *)&LAB_143e6c0f0);
  return;
}



// FUNCTION 1401e8040 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1463560e8,0);
  FGenericPlatformString::Memcpy(DAT_1463560e8,L"<img src=\"%s\"></>",0x24);
  atexit((_func_5014 *)&LAB_143e6c110);
  return;
}



// FUNCTION 1401e8180 FUN_1401e8180 body=92 status=ok
// SIG undefined FUN_1401e8180(void)

void FUN_1401e8180(void)

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
    *puVar1 = &PTR_FUN_14495eaa8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ClosedCaptionEntry",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1401e81e0 FUN_1401e81e0 body=92 status=ok
// SIG undefined FUN_1401e81e0(void)

void FUN_1401e81e0(void)

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
    *puVar1 = &PTR_FUN_14495b940;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GFxStatusMenuNavBarInfo",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1401e8240 FUN_1401e8240 body=92 status=ok
// SIG undefined FUN_1401e8240(void)

void FUN_1401e8240(void)

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
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GFxStatusMenuSubmenuKeyMap",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1401e82a0 FUN_1401e82a0 body=92 status=ok
// SIG undefined FUN_1401e82a0(void)

void FUN_1401e82a0(void)

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
    *puVar1 = &PTR_FUN_14495e238;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GFxStoreMenuDLCItem",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1401e8300 FUN_1401e8300 body=92 status=ok
// SIG undefined FUN_1401e8300(void)

void FUN_1401e8300(void)

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
    *puVar1 = &PTR_FUN_14495e120;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GFxStoreMenuPage",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1401e8360 FUN_1401e8360 body=92 status=ok
// SIG undefined FUN_1401e8360(void)

void FUN_1401e8360(void)

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
    *puVar1 = &PTR_FUN_14495e990;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"SubtitleLine",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1401e85b0 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146352338,0);
  FGenericPlatformString::Memcpy(DAT_146352338,&DAT_14494f4d0,8);
  atexit((_func_5014 *)&LAB_143e6c130);
  return;
}



// FUNCTION 1401e8610 FUN_1401e8610 body=66 status=ok
// SIG undefined FUN_1401e8610(void)

void FUN_1401e8610(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGFxStatusMenuTransitionReason",1);
  UObjectCompiledInDeferEnum(FUN_1413a3eb0,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401e8660 FUN_1401e8660 body=66 status=ok
// SIG undefined FUN_1401e8660(void)

void FUN_1401e8660(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGFxStoreMenuTabType",1);
  UObjectCompiledInDeferEnum(FUN_1413a3ef0,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401e86b0 FUN_1401e86b0 body=66 status=ok
// SIG undefined FUN_1401e86b0(void)

void FUN_1401e86b0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGbxGFxSpinnerWidgetGoToMethod",1);
  UObjectCompiledInDeferEnum(FUN_1413a3f30,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401e8700 FUN_1401e8700 body=66 status=ok
// SIG undefined FUN_1401e8700(void)

void FUN_1401e8700(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ESubtitleLayoutType",1);
  UObjectCompiledInDeferEnum(FUN_1413a3f70,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401e8750 FUN_1401e8750 body=66 status=ok
// SIG undefined FUN_1401e8750(void)

void FUN_1401e8750(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ClosedCaptionEntry",1);
  UObjectCompiledInDeferStruct(FUN_1413a4520,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401e87a0 FUN_1401e87a0 body=66 status=ok
// SIG undefined FUN_1401e87a0(void)

void FUN_1401e87a0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GFxStatusMenuNavBarInfo",1);
  UObjectCompiledInDeferStruct
            (FMovieSceneActorReferenceKey::StaticStruct,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401e87f0 FUN_1401e87f0 body=66 status=ok
// SIG undefined FUN_1401e87f0(void)

void FUN_1401e87f0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GFxStatusMenuSubmenuKeyMap",1);
  UObjectCompiledInDeferStruct
            (FMovieSceneEventPayloadVariable::StaticStruct,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401e8840 FUN_1401e8840 body=66 status=ok
// SIG undefined FUN_1401e8840(void)

void FUN_1401e8840(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GFxStoreMenuDLCItem",1);
  UObjectCompiledInDeferStruct(FUN_1413a4640,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401e8890 FUN_1401e8890 body=66 status=ok
// SIG undefined FUN_1401e8890(void)

void FUN_1401e8890(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GFxStoreMenuPage",1);
  UObjectCompiledInDeferStruct(FUN_1413a46a0,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401e88e0 FUN_1401e88e0 body=66 status=ok
// SIG undefined FUN_1401e88e0(void)

void FUN_1401e88e0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"SubtitleLine",1);
  UObjectCompiledInDeferStruct(FUN_1413a4700,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401e8930 FUN_1401e8930 body=58 status=ok
// SIG undefined FUN_1401e8930(void)

void FUN_1401e8930(void)

{
  UObjectCompiledInDefer
            (FUN_1413a16d0,AUGBossFlyingAIController::GetPrivateStaticClass,L"UGFxStatusMenu",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e8970 FUN_1401e8970 body=58 status=ok
// SIG undefined FUN_1401e8970(void)

void FUN_1401e8970(void)

{
  UObjectCompiledInDefer
            (FUN_1413a4760,UTextureRenderTarget2D::GetPrivateStaticClass,L"UGFxStatusMenuData",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e89b0 FUN_1401e89b0 body=58 status=ok
// SIG undefined FUN_1401e89b0(void)

void FUN_1401e89b0(void)

{
  UObjectCompiledInDefer
            (FUN_1413a0890,FUN_1413a0720,L"UGFxStatusMenuNavBar",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e89f0 FUN_1401e89f0 body=58 status=ok
// SIG undefined FUN_1401e89f0(void)

void FUN_1401e89f0(void)

{
  UObjectCompiledInDefer
            (FUN_1413a4790,UXGameInstance::GetPrivateStaticClass,L"UGFxStatusMenuNavBarButton",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e8a30 FUN_1401e8a30 body=58 status=ok
// SIG undefined FUN_1401e8a30(void)

void FUN_1401e8a30(void)

{
  UObjectCompiledInDefer
            (FUN_1413a0960,thunk_FUN_1413a3fb0,L"UGFxStatusMenuSubmenu",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e8a70 FUN_1401e8a70 body=58 status=ok
// SIG undefined FUN_1401e8a70(void)

void FUN_1401e8a70(void)

{
  UObjectCompiledInDefer
            (FUN_1413a0ba0,thunk_FUN_1413a4060,L"UGFxStatusMenuSubmenuData",L"/Script/OakGame",0,0,0
            );
  return;
}



// FUNCTION 1401e8ab0 FUN_1401e8ab0 body=58 status=ok
// SIG undefined FUN_1401e8ab0(void)

void FUN_1401e8ab0(void)

{
  UObjectCompiledInDefer
            (FUN_1413a0250,AGImpulseWindProjectile::GetPrivateStaticClass,L"UGFxStoreMenu",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e8af0 FUN_1401e8af0 body=58 status=ok
// SIG undefined FUN_1401e8af0(void)

void FUN_1401e8af0(void)

{
  UObjectCompiledInDefer
            (FUN_1413a47c0,FUN_14139fee0,L"UGFxStoreMenuBrowserItemWidget",L"/Script/OakGame",0,0,0)
  ;
  return;
}



// FUNCTION 1401e8b30 FUN_1401e8b30 body=58 status=ok
// SIG undefined FUN_1401e8b30(void)

void FUN_1401e8b30(void)

{
  UObjectCompiledInDefer
            (FUN_1413a47f0,FUN_14139ff90,L"UGFxStoreMenuBrowserWidget",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e8b70 FUN_1401e8b70 body=58 status=ok
// SIG undefined FUN_1401e8b70(void)

void FUN_1401e8b70(void)

{
  UObjectCompiledInDefer
            (FUN_1413a4820,UPawnAction_Sequence::StaticClass,L"UGFxStoreMenuData",L"/Script/OakGame"
             ,0,0,0);
  return;
}



// FUNCTION 1401e8bb0 FUN_1401e8bb0 body=58 status=ok
// SIG undefined FUN_1401e8bb0(void)

void FUN_1401e8bb0(void)

{
  UObjectCompiledInDefer
            (FUN_1413a4850,FUN_1413a00f0,L"UGFxStoreMenuDetailsWidget",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e8bf0 FUN_1401e8bf0 body=58 status=ok
// SIG undefined FUN_1401e8bf0(void)

void FUN_1401e8bf0(void)

{
  UObjectCompiledInDefer
            (FUN_1413a0310,UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass,
             L"UGFxStoreMenuItemBrowserNavBarWidget",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e8c30 FUN_1401e8c30 body=58 status=ok
// SIG undefined FUN_1401e8c30(void)

void FUN_1401e8c30(void)

{
  UObjectCompiledInDefer
            (FUN_1413a4880,UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass,
             L"UGFxStoreMenuItemBrowserPageWidget",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e8c70 FUN_1401e8c70 body=58 status=ok
// SIG undefined FUN_1401e8c70(void)

void FUN_1401e8c70(void)

{
  UObjectCompiledInDefer
            (FUN_1413a48b0,FUN_1413a0040,L"UGFxStoreMenuItemBrowserWidget",L"/Script/OakGame",0,0,0)
  ;
  return;
}



// FUNCTION 1401e8cb0 FUN_1401e8cb0 body=58 status=ok
// SIG undefined FUN_1401e8cb0(void)

void FUN_1401e8cb0(void)

{
  UObjectCompiledInDefer
            (FUN_1413a48e0,FUN_14139fcd0,L"UGFxStoreMenuNavBarTabButton",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e8cf0 FUN_1401e8cf0 body=58 status=ok
// SIG undefined FUN_1401e8cf0(void)

void FUN_1401e8cf0(void)

{
  UObjectCompiledInDefer
            (FUN_1413a02e0,FUN_14139fc00,L"UGFxStoreMenuWidget",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e8d30 FUN_1401e8d30 body=58 status=ok
// SIG undefined FUN_1401e8d30(void)

void FUN_1401e8d30(void)

{
  UObjectCompiledInDefer
            (FUN_1413a4910,ARemnantWeaponMod::GetPrivateStaticClass,L"UGFxSubtitlesWidget",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e8d70 FUN_1401e8d70 body=58 status=ok
// SIG undefined FUN_1401e8d70(void)

void FUN_1401e8d70(void)

{
  UObjectCompiledInDefer
            (FUN_1413a4940,FUN_14139fb20,L"UGFxTargetedNameplate",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e8db0 FUN_1401e8db0 body=58 status=ok
// SIG undefined FUN_1401e8db0(void)

void FUN_1401e8db0(void)

{
  UObjectCompiledInDefer
            (FUN_1413a0600,AGPoisonSplashProjectile::GetPrivateStaticClass,L"UGFxTrophyCaseMenu",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e8df0 FUN_1401e8df0 body=58 status=ok
// SIG undefined FUN_1401e8df0(void)

void FUN_1401e8df0(void)

{
  UObjectCompiledInDefer
            (FUN_1413a4970,FUN_1413a03b0,L"UGFxTrophyCaseMenuLargeNavObject",L"/Script/OakGame",0,0,
             0);
  return;
}



// FUNCTION 1401e8e30 FUN_1401e8e30 body=58 status=ok
// SIG undefined FUN_1401e8e30(void)

void FUN_1401e8e30(void)

{
  UObjectCompiledInDefer
            (FUN_1413a49a0,FUN_1413a0460,L"UGFxTrophyCaseMenuSmallNavObject",L"/Script/OakGame",0,0,
             0);
  return;
}



// FUNCTION 1401e8e70 FUN_1401e8e70 body=58 status=ok
// SIG undefined FUN_1401e8e70(void)

void FUN_1401e8e70(void)

{
  UObjectCompiledInDefer
            (Z_Construct_UClass_UDatasmithDecalComponentTemplate,FUN_1413a0550,
             L"UGFxTrophyCaseMenuTrophyPanel",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e8eb0 FUN_1401e8eb0 body=58 status=ok
// SIG undefined FUN_1401e8eb0(void)

void FUN_1401e8eb0(void)

{
  UObjectCompiledInDefer
            (FUN_1413a0ca0,UInputKeySelector::GetPrivateStaticClass,L"UGFxTutorialMessageWidget",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e8ef0 FUN_1401e8ef0 body=58 status=ok
// SIG undefined FUN_1401e8ef0(void)

void FUN_1401e8ef0(void)

{
  UObjectCompiledInDefer
            (FUN_1413a4a00,FUN_1413a0e00,L"UGFxUISpinnerWidget",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e8f30 FUN_1401e8f30 body=58 status=ok
// SIG undefined FUN_1401e8f30(void)

void FUN_1401e8f30(void)

{
  UObjectCompiledInDefer
            (FUN_1413a4a30,AReplicationGraphDebugActor::GetPrivateStaticClass,
             L"UGFxVaultCardChallengeCell",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e8f70 FUN_1401e8f70 body=58 status=ok
// SIG undefined FUN_1401e8f70(void)

void FUN_1401e8f70(void)

{
  UObjectCompiledInDefer
            (FUN_1413a4a60,FUN_1413a12e0,L"UGFxVaultCardChallengePanel",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e8fb0 FUN_1401e8fb0 body=58 status=ok
// SIG undefined FUN_1401e8fb0(void)

void FUN_1401e8fb0(void)

{
  UObjectCompiledInDefer
            (FUN_1413a4a90,FUN_1413a1180,L"UGFxVaultCardFloatingPanel",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e8ff0 FUN_1401e8ff0 body=58 status=ok
// SIG undefined FUN_1401e8ff0(void)

void FUN_1401e8ff0(void)

{
  UObjectCompiledInDefer(FUN_1413a14f0,FUN_1413a0d30,L"UGFxVaultCardMenu",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e9030 FUN_1401e9030 body=58 status=ok
// SIG undefined FUN_1401e9030(void)

void FUN_1401e9030(void)

{
  UObjectCompiledInDefer
            (FUN_1413a4ac0,FUN_1413a1440,L"UGFxVaultCardMenuData",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e9070 FUN_1401e9070 body=58 status=ok
// SIG undefined FUN_1401e9070(void)

void FUN_1401e9070(void)

{
  UObjectCompiledInDefer
            (FUN_1413a4af0,FUN_1413a0ec0,L"UGFxVaultCardRewardCell",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e90b0 FUN_1401e90b0 body=58 status=ok
// SIG undefined FUN_1401e90b0(void)

void FUN_1401e90b0(void)

{
  UObjectCompiledInDefer
            (FUN_1413a4b20,FUN_1413a0f70,L"UGFxVaultCardRewardsRow",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e90f0 FUN_1401e90f0 body=58 status=ok
// SIG undefined FUN_1401e90f0(void)

void FUN_1401e90f0(void)

{
  UObjectCompiledInDefer
            (FUN_1413a4b50,FUN_1413a0bd0,L"UTutorialMessageDataAsset",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e9190 EOL_String'' body=115 status=ok
// SIG undefined EOL_String''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FDlgConfigWriter::EOL_String__(void)

{
  undefined *puVar1;
  int iVar2;
  longlong lVar3;
  
  puVar1 = PTR_DAT_146352320;
  if ((PTR_DAT_146352320 != (undefined *)0x0) && (*(short *)PTR_DAT_146352320 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(short *)(PTR_DAT_146352320 + lVar3 * 2) != 0);
    iVar2 = (int)lVar3 + 1;
    _DAT_146888590 = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146888588,0);
    }
    FGenericPlatformString::Memcpy(DAT_146888588,puVar1,(longlong)iVar2 * 2);
  }
  atexit((_func_5014 *)&LAB_143e6c150);
  return;
}



// FUNCTION 1401e9210 FUN_1401e9210 body=59 status=ok
// SIG undefined FUN_1401e9210(void)

void FUN_1401e9210(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146357488,0);
  FGenericPlatformString::Memcpy(DAT_146357488,L"AbilityData",0x18);
  atexit((_func_5014 *)&LAB_143e6c170);
  return;
}



// FUNCTION 1401e92f0 FUN_1401e92f0 body=59 status=ok
// SIG undefined FUN_1401e92f0(void)

void FUN_1401e92f0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146357438,0);
  FGenericPlatformString::Memcpy(DAT_146357438,L"ArtifactJsonData",0x22);
  atexit((_func_5014 *)&LAB_143e6c190);
  return;
}



// FUNCTION 1401e9330 FUN_1401e9330 body=59 status=ok
// SIG undefined FUN_1401e9330(void)

void FUN_1401e9330(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1463573b8,0);
  FGenericPlatformString::Memcpy(DAT_1463573b8,L"ArtifactSerialNumber",0x2a);
  atexit((_func_5014 *)&LAB_143e6c1b0);
  return;
}



// FUNCTION 1401e95d0 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146357458,0);
  FGenericPlatformString::Memcpy(DAT_146357458,L"BodyCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e6c1d0);
  return;
}



// FUNCTION 1401e9610 FUN_1401e9610 body=59 status=ok
// SIG undefined FUN_1401e9610(void)

void FUN_1401e9610(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1463572e8,0);
  FGenericPlatformString::Memcpy(DAT_1463572e8,L"CanJoin",0x10);
  atexit((_func_5014 *)&LAB_143e6c1f0);
  return;
}



// FUNCTION 1401e9690 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146357428,0);
  FGenericPlatformString::Memcpy(DAT_146357428,L"ClassItemJsonData",0x24);
  atexit((_func_5014 *)&LAB_143e6c210);
  return;
}



// FUNCTION 1401e96d0 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1463573a8,0);
  FGenericPlatformString::Memcpy(DAT_1463573a8,L"ClassItemSerialNumber",0x2c);
  atexit((_func_5014 *)&LAB_143e6c230);
  return;
}



// FUNCTION 1401e9750 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1463574d8,0);
  FGenericPlatformString::Memcpy(DAT_1463574d8,L"CrewChallengesCompletion",0x32);
  atexit((_func_5014 *)&LAB_143e6c250);
  return;
}



// FUNCTION 1401e97d0 FUN_1401e97d0 body=59 status=ok
// SIG undefined FUN_1401e97d0(void)

void FUN_1401e97d0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146357548,0);
  FGenericPlatformString::Memcpy(DAT_146357548,L"DateTime",0x12);
  atexit((_func_5014 *)&LAB_143e6c270);
  return;
}



// FUNCTION 1401e98f0 `dynamic_initializer_for_'kResultStringCannotLoadPreset'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kResultStringCannotLoadPreset''(void)

void _dynamic_initializer_for__kResultStringCannotLoadPreset__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146357478,0);
  FGenericPlatformString::Memcpy(DAT_146357478,L"EmoteCustomizationHash",0x2e);
  atexit((_func_5014 *)&LAB_143e6c290);
  return;
}



// FUNCTION 1401e9930 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1463574c8,0);
  FGenericPlatformString::Memcpy(DAT_1463574c8,L"EnemyChallengesCompletion",0x34);
  atexit((_func_5014 *)&LAB_143e6c2b0);
  return;
}



// FUNCTION 1401e99b0 `dynamic_initializer_for_'kResultStringAssetDefAlrealdyLoaded'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kResultStringAssetDefAlrealdyLoaded''(void)

void _dynamic_initializer_for__kResultStringAssetDefAlrealdyLoaded__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1463574e8,0);
  FGenericPlatformString::Memcpy(DAT_1463574e8,L"ExplorationChallengesCompletion",0x40);
  atexit((_func_5014 *)&LAB_143e6c2d0);
  return;
}



// FUNCTION 1401e9a70 FUN_1401e9a70 body=59 status=ok
// SIG undefined FUN_1401e9a70(void)

void FUN_1401e9a70(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146357318,0);
  FGenericPlatformString::Memcpy(DAT_146357318,L"FriendActivityStatus",0x2a);
  atexit((_func_5014 *)&LAB_143e6c2f0);
  return;
}



// FUNCTION 1401e9ab0 FUN_1401e9ab0 body=59 status=ok
// SIG undefined FUN_1401e9ab0(void)

void FUN_1401e9ab0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146357598,0);
  FGenericPlatformString::Memcpy(DAT_146357598,L"ChallengeInfo",0x1c);
  atexit((_func_5014 *)&LAB_143e6c310);
  return;
}


