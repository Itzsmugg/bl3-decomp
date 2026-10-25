// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140251dc0 FUN_140251dc0 body=92 status=ok
// SIG undefined FUN_140251dc0(void)

void FUN_140251dc0(void)

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
    *puVar1 = &PTR_FUN_144c33d10;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ZoneMapDisplayInfo",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140251e20 FUN_140251e20 body=92 status=ok
// SIG undefined FUN_140251e20(void)

void FUN_140251e20(void)

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
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ZoneMapGPUPointCloudData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140251e80 FUN_140251e80 body=92 status=ok
// SIG undefined FUN_140251e80(void)

void FUN_140251e80(void)

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
    *puVar1 = &PTR_FUN_144c33e38;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ZoneMapMeshListEntry",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140251f60 FUN_140251f60 body=59 status=ok
// SIG undefined FUN_140251f60(void)

void FUN_140251f60(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146494100,0);
  FGenericPlatformString::Memcpy(DAT_146494100,L"SessionId",0x14);
  atexit((_func_5014 *)&LAB_143e73240);
  return;
}



// FUNCTION 140251fa0 FUN_140251fa0 body=59 status=ok
// SIG undefined FUN_140251fa0(void)

void FUN_140251fa0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464942a0,0);
  FGenericPlatformString::Memcpy(DAT_1464942a0,L"ShieldJsonData",0x1e);
  atexit((_func_5014 *)&LAB_143e73260);
  return;
}



// FUNCTION 140251fe0 `dynamic_initializer_for_'StatusStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'StatusStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__StatusStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146494220,0);
  FGenericPlatformString::Memcpy(DAT_146494220,L"ShieldSerialNumber",0x26);
  atexit((_func_5014 *)&LAB_143e73280);
  return;
}



// FUNCTION 140252040 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464942f0,0);
  FGenericPlatformString::Memcpy(DAT_1464942f0,L"SkinCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e732a0);
  return;
}



// FUNCTION 140252080 FUN_140252080 body=59 status=ok
// SIG undefined FUN_140252080(void)

void FUN_140252080(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464943a0,0);
  FGenericPlatformString::Memcpy(DAT_1464943a0,L"SlaughterChallengesCompletion",0x3c);
  atexit((_func_5014 *)&LAB_143e732c0);
  return;
}



// FUNCTION 140252170 FUN_140252170 body=59 status=ok
// SIG undefined FUN_140252170(void)

void FUN_140252170(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464941c0,0);
  FGenericPlatformString::Memcpy(DAT_1464941c0,L"TimePlayed",0x16);
  atexit((_func_5014 *)&LAB_143e732e0);
  return;
}



// FUNCTION 140252250 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146494310,0);
  FGenericPlatformString::Memcpy(DAT_146494310,&DAT_144c28558,8);
  atexit((_func_5014 *)&LAB_143e73300);
  return;
}



// FUNCTION 140252290 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146494250,0);
  FGenericPlatformString::Memcpy(DAT_146494250,L"Weapon1JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e73320);
  return;
}



// FUNCTION 1402522d0 FUN_1402522d0 body=59 status=ok
// SIG undefined FUN_1402522d0(void)

void FUN_1402522d0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464941d0,0);
  FGenericPlatformString::Memcpy(DAT_1464941d0,L"Weapon1SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e73340);
  return;
}



// FUNCTION 140252310 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146494260,0);
  FGenericPlatformString::Memcpy(DAT_146494260,L"Weapon2JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e73360);
  return;
}



// FUNCTION 140252350 FUN_140252350 body=59 status=ok
// SIG undefined FUN_140252350(void)

void FUN_140252350(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464941e0,0);
  FGenericPlatformString::Memcpy(DAT_1464941e0,L"Weapon2SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e73380);
  return;
}



// FUNCTION 140252390 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146494270,0);
  FGenericPlatformString::Memcpy(DAT_146494270,L"Weapon3JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e733a0);
  return;
}



// FUNCTION 1402523d0 FUN_1402523d0 body=59 status=ok
// SIG undefined FUN_1402523d0(void)

void FUN_1402523d0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464941f0,0);
  FGenericPlatformString::Memcpy(DAT_1464941f0,L"Weapon3SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e733c0);
  return;
}



// FUNCTION 140252410 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146494280,0);
  FGenericPlatformString::Memcpy(DAT_146494280,L"Weapon4JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e733e0);
  return;
}



// FUNCTION 140252450 FUN_140252450 body=59 status=ok
// SIG undefined FUN_140252450(void)

void FUN_140252450(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146494200,0);
  FGenericPlatformString::Memcpy(DAT_146494200,L"Weapon4SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e73400);
  return;
}



// FUNCTION 140252490 FUN_140252490 body=59 status=ok
// SIG undefined FUN_140252490(void)

void FUN_140252490(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146494350,0);
  FGenericPlatformString::Memcpy(DAT_146494350,L"WeaponChallengesCompletion",0x36);
  atexit((_func_5014 *)&LAB_143e73420);
  return;
}



// FUNCTION 1402524f0 FUN_1402524f0 body=66 status=ok
// SIG undefined FUN_1402524f0(void)

void FUN_1402524f0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"CachedPlanetZonePOI",1);
  UObjectCompiledInDeferStruct(FUN_1414f5930,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 140252540 FUN_140252540 body=66 status=ok
// SIG undefined FUN_140252540(void)

void FUN_140252540(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"PlanetZonePOI",1);
  UObjectCompiledInDeferStruct
            (FMovieSceneEventPayloadVariable::StaticStruct,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 140252590 FUN_140252590 body=66 status=ok
// SIG undefined FUN_140252590(void)

void FUN_140252590(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ZoneMapDisplayInfo",1);
  UObjectCompiledInDeferStruct(FUN_1414f59f0,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1402525e0 FUN_1402525e0 body=66 status=ok
// SIG undefined FUN_1402525e0(void)

void FUN_1402525e0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ZoneMapGPUPointCloudData",1);
  UObjectCompiledInDeferStruct
            (FMovieSceneEventPayloadVariable::StaticStruct,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 140252630 FUN_140252630 body=66 status=ok
// SIG undefined FUN_140252630(void)

void FUN_140252630(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ZoneMapMeshListEntry",1);
  UObjectCompiledInDeferStruct(FUN_1414f5ab0,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 140252680 FUN_140252680 body=58 status=ok
// SIG undefined FUN_140252680(void)

void FUN_140252680(void)

{
  UObjectCompiledInDefer
            (FUN_1414f43c0,UScrollBar::GetPrivateStaticClass,L"AOakZoneMapChallengeIcon",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1402526c0 FUN_1402526c0 body=58 status=ok
// SIG undefined FUN_1402526c0(void)

void FUN_1402526c0(void)

{
  UObjectCompiledInDefer
            (FUN_1414f5b90,AUIWSRiver::StaticClass,L"AOakZoneMapFriendIcon_POI",L"/Script/OakGame",0
             ,0,0);
  return;
}



// FUNCTION 140252700 FUN_140252700 body=58 status=ok
// SIG undefined FUN_140252700(void)

void FUN_140252700(void)

{
  UObjectCompiledInDefer
            (FUN_1414f40f0,UCheckBoxWidgetStyle::StaticClass,L"AOakZoneMapIcon_POI",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 140252740 FUN_140252740 body=58 status=ok
// SIG undefined FUN_140252740(void)

void FUN_140252740(void)

{
  UObjectCompiledInDefer
            (FUN_1414f4000,AGPingUsable::GetPrivateStaticClass,L"AZoneMapIconBase",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 140252780 FUN_140252780 body=58 status=ok
// SIG undefined FUN_140252780(void)

void FUN_140252780(void)

{
  UObjectCompiledInDefer
            (FUN_1414f4330,USoUIInputKeySelector::GetPrivateStaticClass,
             L"AZoneMapMissionWaypointIcon",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1402527c0 FUN_1402527c0 body=58 status=ok
// SIG undefined FUN_1402527c0(void)

void FUN_1402527c0(void)

{
  UObjectCompiledInDefer
            (FUN_1414f3610,APlayerState::GetPrivateStaticClass,L"AZoneMapPlanetViewer",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 140252800 FUN_140252800 body=58 status=ok
// SIG undefined FUN_140252800(void)

void FUN_140252800(void)

{
  UObjectCompiledInDefer
            (FUN_1414f4480,AUIWSRiver::StaticClass,L"AZoneMapPlayerIcon_POI",L"/Script/OakGame",0,0,
             0);
  return;
}



// FUNCTION 140252840 FUN_140252840 body=58 status=ok
// SIG undefined FUN_140252840(void)

void FUN_140252840(void)

{
  UObjectCompiledInDefer
            (FUN_1414f4660,ARemnantMeleeWeapon::StaticClass,L"AZoneMapTravelStationIcon_POI",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 140252880 FUN_140252880 body=58 status=ok
// SIG undefined FUN_140252880(void)

void FUN_140252880(void)

{
  UObjectCompiledInDefer
            (FUN_1414f4540,ALandscape::GetPrivateStaticClass,L"AZoneMapVehicleIcon_POI",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1402528c0 FUN_1402528c0 body=58 status=ok
// SIG undefined FUN_1402528c0(void)

void FUN_1402528c0(void)

{
  UObjectCompiledInDefer
            (FUN_1414f5bc0,USoundNodeEnveloper::StaticClass,L"UZoneMapInputData",L"/Script/OakGame",
             0,0,0);
  return;
}



// FUNCTION 140252900 FUN_140252900 body=58 status=ok
// SIG undefined FUN_140252900(void)

void FUN_140252900(void)

{
  UObjectCompiledInDefer(FUN_1414f48f0,FUN_1414f4830,L"UZoneMapListData",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 140252940 FUN_140252940 body=58 status=ok
// SIG undefined FUN_140252940(void)

void FUN_140252940(void)

{
  UObjectCompiledInDefer(FUN_1414f34b0,FUN_1414f3400,L"UZoneMapMeshData",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 140252980 FUN_140252980 body=58 status=ok
// SIG undefined FUN_140252980(void)

void FUN_140252980(void)

{
  UObjectCompiledInDefer
            (FUN_1414f3bd0,UCheckBox::GetPrivateStaticClass,L"UZoneMapPOIAIComponent",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1402529c0 FUN_1402529c0 body=58 status=ok
// SIG undefined FUN_1402529c0(void)

void FUN_1402529c0(void)

{
  UObjectCompiledInDefer
            (FUN_1414f3c00,FUN_1414f39c0,L"UZoneMapPOIComponent",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 140252a60 EOL_String'' body=115 status=ok
// SIG undefined EOL_String''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FDlgConfigWriter::EOL_String__(void)

{
  undefined *puVar1;
  int iVar2;
  longlong lVar3;
  
  puVar1 = PTR_DAT_146494040;
  if ((PTR_DAT_146494040 != (undefined *)0x0) && (*(short *)PTR_DAT_146494040 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(short *)(PTR_DAT_146494040 + lVar3 * 2) != 0);
    iVar2 = (int)lVar3 + 1;
    _DAT_1468a3998 = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1468a3990,0);
    }
    FGenericPlatformString::Memcpy(DAT_1468a3990,puVar1,(longlong)iVar2 * 2);
  }
  atexit((_func_5014 *)&LAB_143e73440);
  return;
}



// FUNCTION 140252ae0 FUN_140252ae0 body=59 status=ok
// SIG undefined FUN_140252ae0(void)

void FUN_140252ae0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498f20,0);
  FGenericPlatformString::Memcpy(DAT_146498f20,L"AbilityData",0x18);
  atexit((_func_5014 *)&LAB_143e73460);
  return;
}



// FUNCTION 140252bc0 FUN_140252bc0 body=59 status=ok
// SIG undefined FUN_140252bc0(void)

void FUN_140252bc0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498ec0,0);
  FGenericPlatformString::Memcpy(DAT_146498ec0,L"ArtifactJsonData",0x22);
  atexit((_func_5014 *)&LAB_143e73480);
  return;
}



// FUNCTION 140252c00 FUN_140252c00 body=59 status=ok
// SIG undefined FUN_140252c00(void)

void FUN_140252c00(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498e40,0);
  FGenericPlatformString::Memcpy(DAT_146498e40,L"ArtifactSerialNumber",0x2a);
  atexit((_func_5014 *)&LAB_143e734a0);
  return;
}



// FUNCTION 140252d00 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498ee0,0);
  FGenericPlatformString::Memcpy(DAT_146498ee0,L"BodyCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e734c0);
  return;
}



// FUNCTION 140252d40 FUN_140252d40 body=59 status=ok
// SIG undefined FUN_140252d40(void)

void FUN_140252d40(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498d70,0);
  FGenericPlatformString::Memcpy(DAT_146498d70,L"CanJoin",0x10);
  atexit((_func_5014 *)&LAB_143e734e0);
  return;
}



// FUNCTION 140252dc0 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498eb0,0);
  FGenericPlatformString::Memcpy(DAT_146498eb0,L"ClassItemJsonData",0x24);
  atexit((_func_5014 *)&LAB_143e73500);
  return;
}



// FUNCTION 140252e00 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498e30,0);
  FGenericPlatformString::Memcpy(DAT_146498e30,L"ClassItemSerialNumber",0x2c);
  atexit((_func_5014 *)&LAB_143e73520);
  return;
}



// FUNCTION 140252e40 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498f70,0);
  FGenericPlatformString::Memcpy(DAT_146498f70,L"CrewChallengesCompletion",0x32);
  atexit((_func_5014 *)&LAB_143e73540);
  return;
}



// FUNCTION 140252ec0 FUN_140252ec0 body=59 status=ok
// SIG undefined FUN_140252ec0(void)

void FUN_140252ec0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498fe0,0);
  FGenericPlatformString::Memcpy(DAT_146498fe0,L"DateTime",0x12);
  atexit((_func_5014 *)&LAB_143e73560);
  return;
}



// FUNCTION 140252fe0 `dynamic_initializer_for_'kResultStringCannotLoadPreset'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kResultStringCannotLoadPreset''(void)

void _dynamic_initializer_for__kResultStringCannotLoadPreset__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498f00,0);
  FGenericPlatformString::Memcpy(DAT_146498f00,L"EmoteCustomizationHash",0x2e);
  atexit((_func_5014 *)&LAB_143e73580);
  return;
}



// FUNCTION 140253020 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498f60,0);
  FGenericPlatformString::Memcpy(DAT_146498f60,L"EnemyChallengesCompletion",0x34);
  atexit((_func_5014 *)&LAB_143e735a0);
  return;
}



// FUNCTION 1402530a0 `dynamic_initializer_for_'kResultStringAssetDefAlrealdyLoaded'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kResultStringAssetDefAlrealdyLoaded''(void)

void _dynamic_initializer_for__kResultStringAssetDefAlrealdyLoaded__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498f80,0);
  FGenericPlatformString::Memcpy(DAT_146498f80,L"ExplorationChallengesCompletion",0x40);
  atexit((_func_5014 *)&LAB_143e735c0);
  return;
}



// FUNCTION 140253160 FUN_140253160 body=59 status=ok
// SIG undefined FUN_140253160(void)

void FUN_140253160(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498da0,0);
  FGenericPlatformString::Memcpy(DAT_146498da0,L"FriendActivityStatus",0x2a);
  atexit((_func_5014 *)&LAB_143e735e0);
  return;
}



// FUNCTION 1402531a0 FUN_1402531a0 body=59 status=ok
// SIG undefined FUN_1402531a0(void)

void FUN_1402531a0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146499030,0);
  FGenericPlatformString::Memcpy(DAT_146499030,L"ChallengeInfo",0x1c);
  atexit((_func_5014 *)&LAB_143e73600);
  return;
}



// FUNCTION 1402531e0 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146499020,0);
  FGenericPlatformString::Memcpy(DAT_146499020,L"FriendCrewQuarterInfo",0x2c);
  atexit((_func_5014 *)&LAB_143e73620);
  return;
}



// FUNCTION 140253220 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146499000,0);
  FGenericPlatformString::Memcpy(DAT_146499000,L"FriendLoadOutInfo",0x24);
  atexit((_func_5014 *)&LAB_143e73640);
  return;
}



// FUNCTION 140253260 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498ff0,0);
  FGenericPlatformString::Memcpy(DAT_146498ff0,L"FriendStatusPresenceInfo",0x32);
  atexit((_func_5014 *)&LAB_143e73660);
  return;
}



// FUNCTION 1402532a0 FUN_1402532a0 body=59 status=ok
// SIG undefined FUN_1402532a0(void)

void FUN_1402532a0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146499010,0);
  FGenericPlatformString::Memcpy(DAT_146499010,L"FriendSkillTreeInfo",0x28);
  atexit((_func_5014 *)&LAB_143e73680);
  return;
}



// FUNCTION 1402532e0 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498f30,0);
  FGenericPlatformString::Memcpy(DAT_146498f30,L"FriendStatusThing",0x24);
  atexit((_func_5014 *)&LAB_143e736a0);
  return;
}



// FUNCTION 140253320 FUN_140253320 body=59 status=ok
// SIG undefined FUN_140253320(void)

void FUN_140253320(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498f40,0);
  FGenericPlatformString::Memcpy(DAT_146498f40,L"GameCompletion",0x1e);
  atexit((_func_5014 *)&LAB_143e736c0);
  return;
}



// FUNCTION 140253360 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498e90,0);
  FGenericPlatformString::Memcpy(DAT_146498e90,L"GrenadeJsonData",0x20);
  atexit((_func_5014 *)&LAB_143e736e0);
  return;
}



// FUNCTION 1402533a0 FUN_1402533a0 body=59 status=ok
// SIG undefined FUN_1402533a0(void)

void FUN_1402533a0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498e10,0);
  FGenericPlatformString::Memcpy(DAT_146498e10,L"GrenadeSerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e73700);
  return;
}



// FUNCTION 1402533e0 FUN_1402533e0 body=59 status=ok
// SIG undefined FUN_1402533e0(void)

void FUN_1402533e0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498db0,0);
  FGenericPlatformString::Memcpy(DAT_146498db0,L"GuardianRank",0x1a);
  atexit((_func_5014 *)&LAB_143e73720);
  return;
}



// FUNCTION 140253420 FUN_140253420 body=59 status=ok
// SIG undefined FUN_140253420(void)

void FUN_140253420(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498d90,0);
  FGenericPlatformString::Memcpy(DAT_146498d90,L"HasSelectedCharacter",0x2a);
  atexit((_func_5014 *)&LAB_143e73740);
  return;
}



// FUNCTION 140253460 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498ed0,0);
  FGenericPlatformString::Memcpy(DAT_146498ed0,L"HeadCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e73760);
  return;
}



// FUNCTION 1402535f0 FUN_1402535f0 body=59 status=ok
// SIG undefined FUN_1402535f0(void)

void FUN_1402535f0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498ce0,0);
  FGenericPlatformString::Memcpy(DAT_146498ce0,L"Level",0xc);
  atexit((_func_5014 *)&LAB_143e73780);
  return;
}



// FUNCTION 140253630 FUN_140253630 body=59 status=ok
// SIG undefined FUN_140253630(void)

void FUN_140253630(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498d40,0);
  FGenericPlatformString::Memcpy(DAT_146498d40,L"LocationX",0x14);
  atexit((_func_5014 *)&LAB_143e737a0);
  return;
}



// FUNCTION 140253670 FUN_140253670 body=59 status=ok
// SIG undefined FUN_140253670(void)

void FUN_140253670(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498d50,0);
  FGenericPlatformString::Memcpy(DAT_146498d50,L"LocationY",0x14);
  atexit((_func_5014 *)&LAB_143e737c0);
  return;
}



// FUNCTION 1402536b0 FUN_1402536b0 body=59 status=ok
// SIG undefined FUN_1402536b0(void)

void FUN_1402536b0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498d60,0);
  FGenericPlatformString::Memcpy(DAT_146498d60,L"LocationZ",0x14);
  atexit((_func_5014 *)&LAB_143e737e0);
  return;
}



// FUNCTION 1402536f0 FUN_1402536f0 body=59 status=ok
// SIG undefined FUN_1402536f0(void)

void FUN_1402536f0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498d80,0);
  FGenericPlatformString::Memcpy(DAT_146498d80,L"LookingForHelp",0x1e);
  atexit((_func_5014 *)&LAB_143e73800);
  return;
}



// FUNCTION 140253730 FUN_140253730 body=59 status=ok
// SIG undefined FUN_140253730(void)

void FUN_140253730(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498cf0,0);
  FGenericPlatformString::Memcpy(DAT_146498cf0,L"MapName",0x10);
  atexit((_func_5014 *)&LAB_143e73820);
  return;
}



// FUNCTION 1402537b0 FUN_1402537b0 body=59 status=ok
// SIG undefined FUN_1402537b0(void)

void FUN_1402537b0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498d30,0);
  FGenericPlatformString::Memcpy(DAT_146498d30,L"MissionHash",0x18);
  atexit((_func_5014 *)&LAB_143e73840);
  return;
}



// FUNCTION 140253df0 FUN_140253df0 body=59 status=ok
// SIG undefined FUN_140253df0(void)

void FUN_140253df0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498d10,0);
  FGenericPlatformString::Memcpy(DAT_146498d10,L"PartyPlayerCount",0x22);
  atexit((_func_5014 *)&LAB_143e73860);
  return;
}



// FUNCTION 140253f10 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498d20,0);
  FGenericPlatformString::Memcpy(DAT_146498d20,L"PlayerClassIdentifierHash",0x34);
  atexit((_func_5014 *)&LAB_143e73880);
  return;
}



// FUNCTION 140253f50 FUN_140253f50 body=59 status=ok
// SIG undefined FUN_140253f50(void)

void FUN_140253f50(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498fd0,0);
  FGenericPlatformString::Memcpy(DAT_146498fd0,L"PlayerId",0x12);
  atexit((_func_5014 *)&LAB_143e738a0);
  return;
}



// FUNCTION 140254050 LocalizationSourceControlSettingsCategoryName'' body=59 status=ok
// SIG undefined LocalizationSourceControlSettingsCategoryName''(void)

void `dynamic_initializer_for_'FLocalizationSourceControlSettings::
     LocalizationSourceControlSettingsCategoryName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498f90,0);
  FGenericPlatformString::Memcpy(DAT_146498f90,L"ProvingGroundChallengesCompletion",0x44);
  atexit((_func_5014 *)&LAB_143e738c0);
  return;
}



// FUNCTION 1402540d0 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498fb0,0);
  FGenericPlatformString::Memcpy(DAT_146498fb0,L"RaidChallengesCompletion",0x32);
  atexit((_func_5014 *)&LAB_143e738e0);
  return;
}



// FUNCTION 140254150 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498fc0,0);
  FGenericPlatformString::Memcpy(DAT_146498fc0,L"<img src=\"%s\"></>",0x24);
  atexit((_func_5014 *)&LAB_143e73900);
  return;
}



// FUNCTION 140254290 FUN_140254290 body=92 status=ok
// SIG undefined FUN_140254290(void)

void FUN_140254290(void)

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
    *puVar1 = &PTR_FUN_144c42350;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"PlayerIconInfo",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1402542f0 FUN_1402542f0 body=92 status=ok
// SIG undefined FUN_1402542f0(void)

void FUN_1402542f0(void)

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
    *puVar1 = &PTR_FUN_144c41ef0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ZoneMapChallengeQuery",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140254350 FUN_140254350 body=92 status=ok
// SIG undefined FUN_140254350(void)

void FUN_140254350(void)

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
    *puVar1 = &PTR_FUN_144c42008;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ZoneMapDynamicPOIEntry",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1402543b0 `dynamic_initializer_for_'ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_Trail'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_Trail''(void)

void _dynamic_initializer_for__ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_Trail__
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
    *(undefined4 *)(puVar1 + 1) = 0x270;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    *puVar1 = &PTR_FUN_144c42238;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ZoneMapIconInfo",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140254410 FUN_140254410 body=92 status=ok
// SIG undefined FUN_140254410(void)

void FUN_140254410(void)

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
    *puVar1 = &PTR_FUN_144c42120;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ZoneMapLevelMeshInfo",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1402544f0 FUN_1402544f0 body=59 status=ok
// SIG undefined FUN_1402544f0(void)

void FUN_1402544f0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498d00,0);
  FGenericPlatformString::Memcpy(DAT_146498d00,L"SessionId",0x14);
  atexit((_func_5014 *)&LAB_143e73920);
  return;
}



// FUNCTION 140254530 FUN_140254530 body=59 status=ok
// SIG undefined FUN_140254530(void)

void FUN_140254530(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498ea0,0);
  FGenericPlatformString::Memcpy(DAT_146498ea0,L"ShieldJsonData",0x1e);
  atexit((_func_5014 *)&LAB_143e73940);
  return;
}



// FUNCTION 140254570 `dynamic_initializer_for_'StatusStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'StatusStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__StatusStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498e20,0);
  FGenericPlatformString::Memcpy(DAT_146498e20,L"ShieldSerialNumber",0x26);
  atexit((_func_5014 *)&LAB_143e73960);
  return;
}



// FUNCTION 1402545d0 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498ef0,0);
  FGenericPlatformString::Memcpy(DAT_146498ef0,L"SkinCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e73980);
  return;
}



// FUNCTION 140254610 FUN_140254610 body=59 status=ok
// SIG undefined FUN_140254610(void)

void FUN_140254610(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498fa0,0);
  FGenericPlatformString::Memcpy(DAT_146498fa0,L"SlaughterChallengesCompletion",0x3c);
  atexit((_func_5014 *)&LAB_143e739a0);
  return;
}



// FUNCTION 140254700 FUN_140254700 body=59 status=ok
// SIG undefined FUN_140254700(void)

void FUN_140254700(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498dc0,0);
  FGenericPlatformString::Memcpy(DAT_146498dc0,L"TimePlayed",0x16);
  atexit((_func_5014 *)&LAB_143e739c0);
  return;
}



// FUNCTION 1402547e0 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498f10,0);
  FGenericPlatformString::Memcpy(DAT_146498f10,&DAT_144c3a578,8);
  atexit((_func_5014 *)&LAB_143e739e0);
  return;
}



// FUNCTION 140254820 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498e50,0);
  FGenericPlatformString::Memcpy(DAT_146498e50,L"Weapon1JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e73a00);
  return;
}



// FUNCTION 140254860 FUN_140254860 body=59 status=ok
// SIG undefined FUN_140254860(void)

void FUN_140254860(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498dd0,0);
  FGenericPlatformString::Memcpy(DAT_146498dd0,L"Weapon1SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e73a20);
  return;
}



// FUNCTION 1402548a0 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498e60,0);
  FGenericPlatformString::Memcpy(DAT_146498e60,L"Weapon2JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e73a40);
  return;
}



// FUNCTION 1402548e0 FUN_1402548e0 body=59 status=ok
// SIG undefined FUN_1402548e0(void)

void FUN_1402548e0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498de0,0);
  FGenericPlatformString::Memcpy(DAT_146498de0,L"Weapon2SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e73a60);
  return;
}



// FUNCTION 140254920 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498e70,0);
  FGenericPlatformString::Memcpy(DAT_146498e70,L"Weapon3JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e73a80);
  return;
}



// FUNCTION 140254960 FUN_140254960 body=59 status=ok
// SIG undefined FUN_140254960(void)

void FUN_140254960(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498df0,0);
  FGenericPlatformString::Memcpy(DAT_146498df0,L"Weapon3SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e73aa0);
  return;
}



// FUNCTION 1402549a0 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498e80,0);
  FGenericPlatformString::Memcpy(DAT_146498e80,L"Weapon4JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e73ac0);
  return;
}



// FUNCTION 1402549e0 FUN_1402549e0 body=59 status=ok
// SIG undefined FUN_1402549e0(void)

void FUN_1402549e0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498e00,0);
  FGenericPlatformString::Memcpy(DAT_146498e00,L"Weapon4SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e73ae0);
  return;
}



// FUNCTION 140254a20 FUN_140254a20 body=59 status=ok
// SIG undefined FUN_140254a20(void)

void FUN_140254a20(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146498f50,0);
  FGenericPlatformString::Memcpy(DAT_146498f50,L"WeaponChallengesCompletion",0x36);
  atexit((_func_5014 *)&LAB_143e73b00);
  return;
}



// FUNCTION 140254a80 FUN_140254a80 body=66 status=ok
// SIG undefined FUN_140254a80(void)

void FUN_140254a80(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EZoneMapMovementMode",1);
  UObjectCompiledInDeferEnum(FUN_1414f8de0,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 140254ad0 FUN_140254ad0 body=66 status=ok
// SIG undefined FUN_140254ad0(void)

void FUN_140254ad0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EZoneMapTargetType",1);
  UObjectCompiledInDeferEnum(FUN_1414f8e20,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 140254b20 FUN_140254b20 body=66 status=ok
// SIG undefined FUN_140254b20(void)

void FUN_140254b20(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EZoneMapViewerState",1);
  UObjectCompiledInDeferEnum(FUN_1414f8e60,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 140254b70 FUN_140254b70 body=66 status=ok
// SIG undefined FUN_140254b70(void)

void FUN_140254b70(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"PlayerIconInfo",1);
  UObjectCompiledInDeferStruct(FUN_1414f9670,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 140254bc0 FUN_140254bc0 body=66 status=ok
// SIG undefined FUN_140254bc0(void)

void FUN_140254bc0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ZoneMapChallengeQuery",1);
  UObjectCompiledInDeferStruct
            (FMovieSceneActorReferenceKey::StaticStruct,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 140254c10 FUN_140254c10 body=66 status=ok
// SIG undefined FUN_140254c10(void)

void FUN_140254c10(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ZoneMapDynamicPOIEntry",1);
  UObjectCompiledInDeferStruct
            (FMovieSceneEventPayloadVariable::StaticStruct,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 140254c60 FUN_140254c60 body=66 status=ok
// SIG undefined FUN_140254c60(void)

void FUN_140254c60(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ZoneMapIconInfo",1);
  UObjectCompiledInDeferStruct(FUN_1414f9790,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 140254cb0 FUN_140254cb0 body=66 status=ok
// SIG undefined FUN_140254cb0(void)

void FUN_140254cb0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ZoneMapLevelMeshInfo",1);
  UObjectCompiledInDeferStruct(FUN_1414f97f0,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 140254d00 FUN_140254d00 body=58 status=ok
// SIG undefined FUN_140254d00(void)

void FUN_140254d00(void)

{
  UObjectCompiledInDefer(FUN_1414f6dc0,FUN_1414f8420,L"AZoneMapViewer",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 140254d40 FUN_140254d40 body=58 status=ok
// SIG undefined FUN_140254d40(void)

void FUN_140254d40(void)

{
  UObjectCompiledInDefer
            (FUN_1414f9890,UGameplayTagAssetInterface::GetPrivateStaticClass,
             L"UZoneMapPOIIconInterface",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 140254d80 FUN_140254d80 body=58 status=ok
// SIG undefined FUN_140254d80(void)

void FUN_140254d80(void)

{
  UObjectCompiledInDefer
            (FUN_1414f98c0,UGameplayTagAssetInterface::GetPrivateStaticClass,L"UZoneMapPOIInterface"
             ,L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 140254dc0 FUN_140254dc0 body=58 status=ok
// SIG undefined FUN_140254dc0(void)

void FUN_140254dc0(void)

{
  UObjectCompiledInDefer
            (FUN_1414f8810,FUN_1414f8760,L"UZoneMapPOILegendaryComponent",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 140254e00 FUN_140254e00 body=58 status=ok
// SIG undefined FUN_140254e00(void)

void FUN_140254e00(void)

{
  UObjectCompiledInDefer
            (FUN_1414f8390,UGNavigationHeaderItem::GetPrivateStaticClass,L"UZoneMapPOIMeshComponent"
             ,L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 140254e40 FUN_140254e40 body=58 status=ok
// SIG undefined FUN_140254e40(void)

void FUN_140254e40(void)

{
  UObjectCompiledInDefer
            (FUN_1414f98f0,FUN_1414f8520,L"UZoneMapPOITypeData",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 140254ee0 EOL_String'' body=115 status=ok
// SIG undefined EOL_String''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FDlgConfigWriter::EOL_String__(void)

{
  undefined *puVar1;
  int iVar2;
  longlong lVar3;
  
  puVar1 = PTR_DAT_1464982b0;
  if ((PTR_DAT_1464982b0 != (undefined *)0x0) && (*(short *)PTR_DAT_1464982b0 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(short *)(PTR_DAT_1464982b0 + lVar3 * 2) != 0);
    iVar2 = (int)lVar3 + 1;
    _DAT_1468a40a8 = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1468a40a0,0);
    }
    FGenericPlatformString::Memcpy(DAT_1468a40a0,puVar1,(longlong)iVar2 * 2);
  }
  atexit((_func_5014 *)&LAB_143e73b20);
  return;
}



// FUNCTION 140254f60 FUN_140254f60 body=41 status=ok
// SIG undefined FUN_140254f60(void)

void FUN_140254f60(void)

{
  FUN_143a02410(&DAT_1464a05c0,&PTR_LAB_144c4d338,1);
  DAT_1468a4e38 = 1;
  return;
}



// FUNCTION 140254f90 FUN_140254f90 body=41 status=ok
// SIG undefined FUN_140254f90(void)

void FUN_140254f90(void)

{
  FUN_143a02410(&DAT_1464a0c10,&PTR_LAB_144c62810,1);
  DAT_1468a5fb0 = 1;
  return;
}



// FUNCTION 140254fc0 FUN_140254fc0 body=38 status=ok
// SIG undefined FUN_140254fc0(void)

void FUN_140254fc0(void)

{
  FUN_143a02410(&DAT_1464a0e70,&DAT_144c68390,0);
  DAT_1468a6490 = 1;
  return;
}



// FUNCTION 140254ff0 FUN_140254ff0 body=59 status=ok
// SIG undefined FUN_140254ff0(void)

void FUN_140254ff0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a13f0,0);
  FGenericPlatformString::Memcpy(DAT_1464a13f0,L"AnimFlip",0x12);
  atexit((_func_5014 *)&LAB_143e73b40);
  return;
}



// FUNCTION 140255030 FUN_140255030 body=59 status=ok
// SIG undefined FUN_140255030(void)

void FUN_140255030(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1440,0);
  FGenericPlatformString::Memcpy(DAT_1464a1440,L"animObject",0x16);
  atexit((_func_5014 *)&LAB_143e73b60);
  return;
}



// FUNCTION 140255070 FUN_140255070 body=59 status=ok
// SIG undefined FUN_140255070(void)

void FUN_140255070(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a13e0,0);
  FGenericPlatformString::Memcpy(DAT_1464a13e0,L"AnimOff",0x10);
  atexit((_func_5014 *)&LAB_143e73b80);
  return;
}



// FUNCTION 1402550b0 FUN_1402550b0 body=59 status=ok
// SIG undefined FUN_1402550b0(void)

void FUN_1402550b0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a13d0,0);
  FGenericPlatformString::Memcpy(DAT_1464a13d0,L"AnimOn",0xe);
  atexit((_func_5014 *)&LAB_143e73ba0);
  return;
}



// FUNCTION 1402550f0 FUN_1402550f0 body=59 status=ok
// SIG undefined FUN_1402550f0(void)

void FUN_1402550f0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1460,0);
  FGenericPlatformString::Memcpy(DAT_1464a1460,L"GuideTileBeastmaster",0x2a);
  atexit((_func_5014 *)&LAB_143e73bc0);
  return;
}



// FUNCTION 140255130 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1400,0);
  FGenericPlatformString::Memcpy(DAT_1464a1400,L"PuzzleTileBeastmaster",0x2c);
  atexit((_func_5014 *)&LAB_143e73be0);
  return;
}



// FUNCTION 140255170 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a14c0,0);
  FGenericPlatformString::Memcpy(DAT_1464a14c0,L"BITMAP_Ico_FinalLevel",0x2c);
  atexit((_func_5014 *)&LAB_143e73c00);
  return;
}



// FUNCTION 1402551b0 FUN_1402551b0 body=59 status=ok
// SIG undefined FUN_1402551b0(void)

void FUN_1402551b0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1450,0);
  FGenericPlatformString::Memcpy(DAT_1464a1450,L"PuzzleGridTile",0x1e);
  atexit((_func_5014 *)&LAB_143e73c20);
  return;
}



// FUNCTION 1402551f0 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1470,0);
  FGenericPlatformString::Memcpy(DAT_1464a1470,L"GuideTileGunner",0x20);
  atexit((_func_5014 *)&LAB_143e73c40);
  return;
}



// FUNCTION 140255230 FUN_140255230 body=59 status=ok
// SIG undefined FUN_140255230(void)

void FUN_140255230(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1410,0);
  FGenericPlatformString::Memcpy(DAT_1464a1410,L"PuzzleTileGunner",0x22);
  atexit((_func_5014 *)&LAB_143e73c60);
  return;
}



// FUNCTION 140255270 FUN_140255270 body=59 status=ok
// SIG undefined FUN_140255270(void)

void FUN_140255270(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a0f80,0);
  FGenericPlatformString::Memcpy(DAT_1464a0f80,L"hide",10);
  atexit((_func_5014 *)&LAB_143e73c80);
  return;
}



// FUNCTION 1402552b0 FUN_1402552b0 body=59 status=ok
// SIG undefined FUN_1402552b0(void)

void FUN_1402552b0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a0f50,0);
  FGenericPlatformString::Memcpy(DAT_1464a0f50,L"highlight",0x14);
  atexit((_func_5014 *)&LAB_143e73ca0);
  return;
}



// FUNCTION 140255320 FUN_140255320 body=59 status=ok
// SIG undefined FUN_140255320(void)

void FUN_140255320(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1390,0);
  FGenericPlatformString::Memcpy(DAT_1464a1390,L"MoveDownOff",0x18);
  atexit((_func_5014 *)&LAB_143e73cc0);
  return;
}



// FUNCTION 140255360 FUN_140255360 body=59 status=ok
// SIG undefined FUN_140255360(void)

void FUN_140255360(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a13b0,0);
  FGenericPlatformString::Memcpy(DAT_1464a13b0,L"MoveDownOn",0x16);
  atexit((_func_5014 *)&LAB_143e73ce0);
  return;
}



// FUNCTION 1402553a0 FUN_1402553a0 body=59 status=ok
// SIG undefined FUN_1402553a0(void)

void FUN_1402553a0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a13a0,0);
  FGenericPlatformString::Memcpy(DAT_1464a13a0,L"MoveUpOff",0x14);
  atexit((_func_5014 *)&LAB_143e73d00);
  return;
}



// FUNCTION 1402553e0 FUN_1402553e0 body=59 status=ok
// SIG undefined FUN_1402553e0(void)

void FUN_1402553e0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a13c0,0);
  FGenericPlatformString::Memcpy(DAT_1464a13c0,L"MoveUpOn",0x12);
  atexit((_func_5014 *)&LAB_143e73d20);
  return;
}



// FUNCTION 140255420 `dynamic_initializer_for_'ArchBits'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'ArchBits''(void)

void PhysDLLHelper::_dynamic_initializer_for__ArchBits__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a0f60,0);
  FGenericPlatformString::Memcpy(DAT_1464a0f60,&DAT_144c7d824,6);
  atexit((_func_5014 *)&LAB_143e73d40);
  return;
}



// FUNCTION 140255460 `dynamic_initializer_for_'StatusStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'StatusStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__StatusStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1480,0);
  FGenericPlatformString::Memcpy(DAT_1464a1480,L"GuideTileOperative",0x26);
  atexit((_func_5014 *)&LAB_143e73d60);
  return;
}



// FUNCTION 1402554a0 FUN_1402554a0 body=59 status=ok
// SIG undefined FUN_1402554a0(void)

void FUN_1402554a0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1420,0);
  FGenericPlatformString::Memcpy(DAT_1464a1420,L"PuzzleTileOperative",0x28);
  atexit((_func_5014 *)&LAB_143e73d80);
  return;
}



// FUNCTION 1402554e0 `dynamic_initializer_for_'StatusStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'StatusStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__StatusStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a14b0,0);
  FGenericPlatformString::Memcpy(DAT_1464a14b0,L"BITMAP_Ico_Checked",0x26);
  atexit((_func_5014 *)&LAB_143e73da0);
  return;
}



// FUNCTION 140255520 FUN_140255520 body=59 status=ok
// SIG undefined FUN_140255520(void)

void FUN_140255520(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a0f70,0);
  FGenericPlatformString::Memcpy(DAT_1464a0f70,L"show",10);
  atexit((_func_5014 *)&LAB_143e73dc0);
  return;
}



// FUNCTION 140255560 FUN_140255560 body=59 status=ok
// SIG undefined FUN_140255560(void)

void FUN_140255560(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1490,0);
  FGenericPlatformString::Memcpy(DAT_1464a1490,L"GuideTileSiren",0x1e);
  atexit((_func_5014 *)&LAB_143e73de0);
  return;
}



// FUNCTION 1402555a0 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1430,0);
  FGenericPlatformString::Memcpy(DAT_1464a1430,L"PuzzleTileSiren",0x20);
  atexit((_func_5014 *)&LAB_143e73e00);
  return;
}



// FUNCTION 1402555e0 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a14a0,0);
  FGenericPlatformString::Memcpy(DAT_1464a14a0,L"PuzzleTileToken",0x20);
  atexit((_func_5014 *)&LAB_143e73e20);
  return;
}



// FUNCTION 140255630 msMutex'' body=37 status=ok
// SIG undefined msMutex''(void)

void `dynamic_initializer_for_'gte::Logger::msMutex__(void)

{
  ::_guard_xfg_dispatch_icall_nop(&DAT_1468a6a50,2);
  atexit((_func_5014 *)&LAB_143e73ec0);
  return;
}



// FUNCTION 140255660 FUN_140255660 body=59 status=ok
// SIG undefined FUN_140255660(void)

void FUN_140255660(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1280,0);
  FGenericPlatformString::Memcpy(DAT_1464a1280,L"AbilityData",0x18);
  atexit((_func_5014 *)&LAB_143e73ed0);
  return;
}



// FUNCTION 140255740 FUN_140255740 body=59 status=ok
// SIG undefined FUN_140255740(void)

void FUN_140255740(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1230,0);
  FGenericPlatformString::Memcpy(DAT_1464a1230,L"ArtifactJsonData",0x22);
  atexit((_func_5014 *)&LAB_143e73f30);
  return;
}



// FUNCTION 140255780 FUN_140255780 body=59 status=ok
// SIG undefined FUN_140255780(void)

void FUN_140255780(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a11b0,0);
  FGenericPlatformString::Memcpy(DAT_1464a11b0,L"ArtifactSerialNumber",0x2a);
  atexit((_func_5014 *)&LAB_143e73f50);
  return;
}



// FUNCTION 1402557c0 FUN_1402557c0 body=59 status=ok
// SIG undefined FUN_1402557c0(void)

void FUN_1402557c0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a0ed0,0);
  FGenericPlatformString::Memcpy(DAT_1464a0ed0,L"beastmaster",0x18);
  atexit((_func_5014 *)&LAB_143e73f70);
  return;
}



// FUNCTION 140255800 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1250,0);
  FGenericPlatformString::Memcpy(DAT_1464a1250,L"BodyCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e73f90);
  return;
}



// FUNCTION 140255860 FUN_140255860 body=266 status=ok
// SIG undefined FUN_140255860(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140255860(void)

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
    plVar1[1] = (longlong)FUN_141557820;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143fca768;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1468a6a18 =
       (**(code **)(*DAT_1468b1f88 + 0x70))
                 (DAT_1468b1f88,L"CS.FakeHighestScoreReached",
                  L"Trigger the highest score reached event.",&local_18,0x10001);
  _DAT_1468a6a10 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_140255959;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_140255959:
  atexit(FUN_143e73fb0);
  return;
}



// FUNCTION 140255970 FUN_140255970 body=266 status=ok
// SIG undefined FUN_140255970(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140255970(void)

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
    plVar1[1] = (longlong)FUN_1415578f0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143fca768;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1468a69f8 =
       (**(code **)(*DAT_1468b1f88 + 0x70))
                 (DAT_1468b1f88,L"CS.FakeParScoreReached",L"Triggers the par score reached event.",
                  &local_18,0x10001);
  _DAT_1468a69f0 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_140255a69;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_140255a69:
  atexit(FUN_143e74000);
  return;
}



// FUNCTION 140255a80 FUN_140255a80 body=266 status=ok
// SIG undefined FUN_140255a80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140255a80(void)

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
    plVar1[1] = (longlong)FUN_1415579c0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143fca768;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1468a6a08 =
       (**(code **)(*DAT_1468b1f88 + 0x70))
                 (DAT_1468b1f88,L"CS.FakeUnderParScoreReached",
                  L"Triggers the event when the player score goes under the par score.",&local_18,
                  0x10001);
  _DAT_1468a6a00 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_140255b79;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_140255b79:
  atexit(FUN_143e74050);
  return;
}



// FUNCTION 140255b90 FUN_140255b90 body=266 status=ok
// SIG undefined FUN_140255b90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140255b90(void)

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
    plVar1[1] = (longlong)FUN_141557a90;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143fca768;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1468a6988 =
       (**(code **)(*DAT_1468b1f88 + 0x70))
                 (DAT_1468b1f88,L"CS.GiveBucks",
                  L"Gives the specified amount of CS Bucks. You can optionally define the Player Controller id."
                  ,&local_18,0x10001);
  _DAT_1468a6980 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_140255c89;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_140255c89:
  atexit(FUN_143e740a0);
  return;
}



// FUNCTION 140255ca0 FUN_140255ca0 body=266 status=ok
// SIG undefined FUN_140255ca0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140255ca0(void)

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
    plVar1[1] = (longlong)FUN_141557b60;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143fca768;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1468a6a28 =
       (**(code **)(*DAT_1468b1f88 + 0x70))
                 (DAT_1468b1f88,L"CS.OverridePuzzleSubmitCondition",
                  L"Override the condition surrounding the puzzle submission.",&local_18,0x10001);
  _DAT_1468a6a20 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_140255d99;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_140255d99:
  atexit(FUN_143e740f0);
  return;
}



// FUNCTION 140255db0 FUN_140255db0 body=266 status=ok
// SIG undefined FUN_140255db0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140255db0(void)

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
    plVar1[1] = (longlong)FUN_141557c30;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143fca768;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1468a6978 =
       (**(code **)(*DAT_1468b1f88 + 0x70))
                 (DAT_1468b1f88,L"CS.PrintPuzzleScore",L"Print the puzzle score in debug output.",
                  &local_18,0x10001);
  _DAT_1468a6970 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_140255ea9;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_140255ea9:
  atexit(FUN_143e74140);
  return;
}



// FUNCTION 140255ec0 FUN_140255ec0 body=266 status=ok
// SIG undefined FUN_140255ec0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140255ec0(void)

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
    plVar1[1] = (longlong)FUN_1415580f0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143fca768;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1468a69e8 =
       (**(code **)(*DAT_1468b1f88 + 0x70))
                 (DAT_1468b1f88,L"CS.ReplayRewardScreen",L"Replay the reward screen.",&local_18,
                  0x10001);
  _DAT_1468a69e0 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_140255fb9;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_140255fb9:
  atexit(FUN_143e74190);
  return;
}



// FUNCTION 140255fd0 FUN_140255fd0 body=266 status=ok
// SIG undefined FUN_140255fd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140255fd0(void)

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
    plVar1[1] = (longlong)FUN_1415582f0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143fca768;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1468a69c8 =
       (**(code **)(*DAT_1468b1f88 + 0x70))
                 (DAT_1468b1f88,L"CS.RequestPuzzleId",
                  L"Set the PuzzleId of the next requested puzzle. You can optionally define the Player Controller id."
                  ,&local_18,0x10001);
  _DAT_1468a69c0 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_1402560c9;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_1402560c9:
  atexit(FUN_143e741e0);
  return;
}



// FUNCTION 1402560e0 FUN_1402560e0 body=266 status=ok
// SIG undefined FUN_1402560e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402560e0(void)

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
    plVar1[1] = (longlong)FUN_1415583b0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143fca768;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1468a69b8 =
       (**(code **)(*DAT_1468b1f88 + 0x70))
                 (DAT_1468b1f88,L"CS.SetProgression",
                  L"Set the current progression. You can optionally define the Player Controller id."
                  ,&local_18,0x10001);
  _DAT_1468a69b0 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_1402561d9;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_1402561d9:
  atexit(FUN_143e74230);
  return;
}



// FUNCTION 1402561f0 FUN_1402561f0 body=266 status=ok
// SIG undefined FUN_1402561f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402561f0(void)

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
    plVar1[1] = (longlong)FUN_141558640;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143fca768;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1468a69d8 =
       (**(code **)(*DAT_1468b1f88 + 0x70))
                 (DAT_1468b1f88,L"CS.TogglePuzzleDebugInfo",
                  L"Display relative debug information on the puzzle.",&local_18,0x10001);
  _DAT_1468a69d0 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_1402562e9;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_1402562e9:
  atexit(FUN_143e74280);
  return;
}



// FUNCTION 140256300 FUN_140256300 body=266 status=ok
// SIG undefined FUN_140256300(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140256300(void)

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
    plVar1[1] = (longlong)FUN_141558750;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143fca768;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1468a69a8 =
       (**(code **)(*DAT_1468b1f88 + 0x70))
                 (DAT_1468b1f88,L"CS.UnlockAllSkins",
                  L"Unlock all CS skin and head rewards. You can optionally define the Player Controller id."
                  ,&local_18,0x10001);
  _DAT_1468a69a0 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_1402563f9;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_1402563f9:
  atexit(FUN_143e742d0);
  return;
}



// FUNCTION 140256410 FUN_140256410 body=266 status=ok
// SIG undefined FUN_140256410(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140256410(void)

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
    plVar1[1] = (longlong)FUN_1415587f0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143fca768;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1468a6998 =
       (**(code **)(*DAT_1468b1f88 + 0x70))
                 (DAT_1468b1f88,L"CS.UnlockSkins",
                  L"Unlock current character CS skin and head rewards. You can optionally define the Player Controller id."
                  ,&local_18,0x10001);
  _DAT_1468a6990 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_140256509;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_140256509:
  atexit(FUN_143e74320);
  return;
}



// FUNCTION 140256520 FUN_140256520 body=59 status=ok
// SIG undefined FUN_140256520(void)

void FUN_140256520(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a10e0,0);
  FGenericPlatformString::Memcpy(DAT_1464a10e0,L"CanJoin",0x10);
  atexit((_func_5014 *)&LAB_143e74370);
  return;
}



// FUNCTION 1402565c0 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1220,0);
  FGenericPlatformString::Memcpy(DAT_1464a1220,L"ClassItemJsonData",0x24);
  atexit((_func_5014 *)&LAB_143e74390);
  return;
}



// FUNCTION 140256600 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a11a0,0);
  FGenericPlatformString::Memcpy(DAT_1464a11a0,L"ClassItemSerialNumber",0x2c);
  atexit((_func_5014 *)&LAB_143e743b0);
  return;
}



// FUNCTION 140256680 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a12d0,0);
  FGenericPlatformString::Memcpy(DAT_1464a12d0,L"CrewChallengesCompletion",0x32);
  atexit((_func_5014 *)&LAB_143e743d0);
  return;
}



// FUNCTION 140256700 FUN_140256700 body=59 status=ok
// SIG undefined FUN_140256700(void)

void FUN_140256700(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1330,0);
  FGenericPlatformString::Memcpy(DAT_1464a1330,L"DateTime",0x12);
  atexit((_func_5014 *)&LAB_143e743f0);
  return;
}



// FUNCTION 140256820 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a0fe0,0);
  FGenericPlatformString::Memcpy(DAT_1464a0fe0,L"DuplicateReservationFound",0x34);
  atexit((_func_5014 *)&LAB_143e74410);
  return;
}



// FUNCTION 140256860 `dynamic_initializer_for_'kResultStringCannotLoadPreset'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kResultStringCannotLoadPreset''(void)

void _dynamic_initializer_for__kResultStringCannotLoadPreset__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1270,0);
  FGenericPlatformString::Memcpy(DAT_1464a1270,L"EmoteCustomizationHash",0x2e);
  atexit((_func_5014 *)&LAB_143e74430);
  return;
}



// FUNCTION 1402568a0 FUN_1402568a0 body=59 status=ok
// SIG undefined FUN_1402568a0(void)

void FUN_1402568a0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a0ec0,0);
  FGenericPlatformString::Memcpy(DAT_1464a0ec0,L"empty",0xc);
  atexit((_func_5014 *)&LAB_143e74450);
  return;
}



// FUNCTION 1402568e0 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a12c0,0);
  FGenericPlatformString::Memcpy(DAT_1464a12c0,L"EnemyChallengesCompletion",0x34);
  atexit((_func_5014 *)&LAB_143e74550);
  return;
}



// FUNCTION 140256960 `dynamic_initializer_for_'kResultStringAssetDefAlrealdyLoaded'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kResultStringAssetDefAlrealdyLoaded''(void)

void _dynamic_initializer_for__kResultStringAssetDefAlrealdyLoaded__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a12e0,0);
  FGenericPlatformString::Memcpy(DAT_1464a12e0,L"ExplorationChallengesCompletion",0x40);
  atexit((_func_5014 *)&LAB_143e74570);
  return;
}



// FUNCTION 140256aa0 FUN_140256aa0 body=59 status=ok
// SIG undefined FUN_140256aa0(void)

void FUN_140256aa0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1110,0);
  FGenericPlatformString::Memcpy(DAT_1464a1110,L"FriendActivityStatus",0x2a);
  atexit((_func_5014 *)&LAB_143e74590);
  return;
}



// FUNCTION 140256ae0 FUN_140256ae0 body=59 status=ok
// SIG undefined FUN_140256ae0(void)

void FUN_140256ae0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1380,0);
  FGenericPlatformString::Memcpy(DAT_1464a1380,L"ChallengeInfo",0x1c);
  atexit((_func_5014 *)&LAB_143e745b0);
  return;
}



// FUNCTION 140256b20 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1370,0);
  FGenericPlatformString::Memcpy(DAT_1464a1370,L"FriendCrewQuarterInfo",0x2c);
  atexit((_func_5014 *)&LAB_143e745d0);
  return;
}



// FUNCTION 140256b60 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1350,0);
  FGenericPlatformString::Memcpy(DAT_1464a1350,L"FriendLoadOutInfo",0x24);
  atexit((_func_5014 *)&LAB_143e745f0);
  return;
}



// FUNCTION 140256ba0 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1340,0);
  FGenericPlatformString::Memcpy(DAT_1464a1340,L"FriendStatusPresenceInfo",0x32);
  atexit((_func_5014 *)&LAB_143e74610);
  return;
}



// FUNCTION 140256be0 FUN_140256be0 body=59 status=ok
// SIG undefined FUN_140256be0(void)

void FUN_140256be0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1360,0);
  FGenericPlatformString::Memcpy(DAT_1464a1360,L"FriendSkillTreeInfo",0x28);
  atexit((_func_5014 *)&LAB_143e74630);
  return;
}



// FUNCTION 140256c20 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1290,0);
  FGenericPlatformString::Memcpy(DAT_1464a1290,L"FriendStatusThing",0x24);
  atexit((_func_5014 *)&LAB_143e74650);
  return;
}



// FUNCTION 140256cc0 FUN_140256cc0 body=59 status=ok
// SIG undefined FUN_140256cc0(void)

void FUN_140256cc0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a12a0,0);
  FGenericPlatformString::Memcpy(DAT_1464a12a0,L"GameCompletion",0x1e);
  atexit((_func_5014 *)&LAB_143e74670);
  return;
}



// FUNCTION 140256d20 FUN_140256d20 body=59 status=ok
// SIG undefined FUN_140256d20(void)

void FUN_140256d20(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a0fb0,0);
  FGenericPlatformString::Memcpy(DAT_1464a0fb0,L"GenericFailure",0x1e);
  atexit((_func_5014 *)&LAB_143e74690);
  return;
}



// FUNCTION 140256d60 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1200,0);
  FGenericPlatformString::Memcpy(DAT_1464a1200,L"GrenadeJsonData",0x20);
  atexit((_func_5014 *)&LAB_143e746b0);
  return;
}



// FUNCTION 140256da0 FUN_140256da0 body=59 status=ok
// SIG undefined FUN_140256da0(void)

void FUN_140256da0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1180,0);
  FGenericPlatformString::Memcpy(DAT_1464a1180,L"GrenadeSerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e746d0);
  return;
}



// FUNCTION 140256de0 FUN_140256de0 body=59 status=ok
// SIG undefined FUN_140256de0(void)

void FUN_140256de0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1120,0);
  FGenericPlatformString::Memcpy(DAT_1464a1120,L"GuardianRank",0x1a);
  atexit((_func_5014 *)&LAB_143e746f0);
  return;
}



// FUNCTION 140256e20 FUN_140256e20 body=59 status=ok
// SIG undefined FUN_140256e20(void)

void FUN_140256e20(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a0ee0,0);
  FGenericPlatformString::Memcpy(DAT_1464a0ee0,L"gunner",0xe);
  atexit((_func_5014 *)&LAB_143e74710);
  return;
}



// FUNCTION 140256e60 FUN_140256e60 body=59 status=ok
// SIG undefined FUN_140256e60(void)

void FUN_140256e60(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1100,0);
  FGenericPlatformString::Memcpy(DAT_1464a1100,L"HasSelectedCharacter",0x2a);
  atexit((_func_5014 *)&LAB_143e74730);
  return;
}



// FUNCTION 140256ea0 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1240,0);
  FGenericPlatformString::Memcpy(DAT_1464a1240,L"HeadCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e74750);
  return;
}



// FUNCTION 140256f80 FUN_140256f80 body=59 status=ok
// SIG undefined FUN_140256f80(void)

void FUN_140256f80(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a0fd0,0);
  FGenericPlatformString::Memcpy(DAT_1464a0fd0,L"InvalidClientBeaconType",0x30);
  atexit((_func_5014 *)&LAB_143e74770);
  return;
}



// FUNCTION 140257100 FUN_140257100 body=59 status=ok
// SIG undefined FUN_140257100(void)

void FUN_140257100(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1050,0);
  FGenericPlatformString::Memcpy(DAT_1464a1050,L"Level",0xc);
  atexit((_func_5014 *)&LAB_143e74790);
  return;
}



// FUNCTION 140257140 FUN_140257140 body=59 status=ok
// SIG undefined FUN_140257140(void)

void FUN_140257140(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a14d0,0);
  FGenericPlatformString::Memcpy(DAT_1464a14d0,&DAT_144c69b4c,4);
  atexit((_func_5014 *)&LAB_143e747b0);
  return;
}



// FUNCTION 140257180 FUN_140257180 body=59 status=ok
// SIG undefined FUN_140257180(void)

void FUN_140257180(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a10b0,0);
  FGenericPlatformString::Memcpy(DAT_1464a10b0,L"LocationX",0x14);
  atexit((_func_5014 *)&LAB_143e747d0);
  return;
}



// FUNCTION 1402571c0 FUN_1402571c0 body=59 status=ok
// SIG undefined FUN_1402571c0(void)

void FUN_1402571c0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a10c0,0);
  FGenericPlatformString::Memcpy(DAT_1464a10c0,L"LocationY",0x14);
  atexit((_func_5014 *)&LAB_143e747f0);
  return;
}



// FUNCTION 140257200 FUN_140257200 body=59 status=ok
// SIG undefined FUN_140257200(void)

void FUN_140257200(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a10d0,0);
  FGenericPlatformString::Memcpy(DAT_1464a10d0,L"LocationZ",0x14);
  atexit((_func_5014 *)&LAB_143e74810);
  return;
}



// FUNCTION 140257240 FUN_140257240 body=59 status=ok
// SIG undefined FUN_140257240(void)

void FUN_140257240(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a10f0,0);
  FGenericPlatformString::Memcpy(DAT_1464a10f0,L"LookingForHelp",0x1e);
  atexit((_func_5014 *)&LAB_143e74830);
  return;
}



// FUNCTION 140257280 FUN_140257280 body=59 status=ok
// SIG undefined FUN_140257280(void)

void FUN_140257280(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1060,0);
  FGenericPlatformString::Memcpy(DAT_1464a1060,L"MapName",0x10);
  atexit((_func_5014 *)&LAB_143e74850);
  return;
}



// FUNCTION 140257300 FUN_140257300 body=59 status=ok
// SIG undefined FUN_140257300(void)

void FUN_140257300(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a0ff0,0);
  FGenericPlatformString::Memcpy(DAT_1464a0ff0,L"MismatchedBeaconNetVersions",0x38);
  atexit((_func_5014 *)&LAB_143e74870);
  return;
}



// FUNCTION 140257340 FUN_140257340 body=59 status=ok
// SIG undefined FUN_140257340(void)

void FUN_140257340(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1010,0);
  FGenericPlatformString::Memcpy(DAT_1464a1010,L"MissingDLC",0x16);
  atexit((_func_5014 *)&LAB_143e74890);
  return;
}



// FUNCTION 140257380 FUN_140257380 body=59 status=ok
// SIG undefined FUN_140257380(void)

void FUN_140257380(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a10a0,0);
  FGenericPlatformString::Memcpy(DAT_1464a10a0,L"MissionHash",0x18);
  atexit((_func_5014 *)&LAB_143e748b0);
  return;
}



// FUNCTION 1402573e0 FUN_1402573e0 body=256 status=ok
// SIG undefined FUN_1402573e0(void)

void FUN_1402573e0(void)

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
    plVar1[1] = (longlong)&DAT_1468a6aa8;
    plVar1[2] = (longlong)FUN_14067ad20;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"OakCS",1);
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



// FUNCTION 1402576c0 FUN_1402576c0 body=59 status=ok
// SIG undefined FUN_1402576c0(void)

void FUN_1402576c0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a0fa0,0);
  FGenericPlatformString::Memcpy(DAT_1464a0fa0,L"NetworkFailure",0x1e);
  atexit((_func_5014 *)&LAB_143e748d0);
  return;
}



// FUNCTION 140257740 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a0fc0,0);
  FGenericPlatformString::Memcpy(DAT_1464a0fc0,L"NotAcceptingReservations",0x32);
  atexit((_func_5014 *)&LAB_143e748f0);
  return;
}



// FUNCTION 1402577a0 FUN_1402577a0 body=59 status=ok
// SIG undefined FUN_1402577a0(void)

void FUN_1402577a0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a0ef0,0);
  FGenericPlatformString::Memcpy(DAT_1464a0ef0,L"operative",0x14);
  atexit((_func_5014 *)&LAB_143e74910);
  return;
}



// FUNCTION 140257800 FUN_140257800 body=59 status=ok
// SIG undefined FUN_140257800(void)

void FUN_140257800(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1080,0);
  FGenericPlatformString::Memcpy(DAT_1464a1080,L"PartyPlayerCount",0x22);
  atexit((_func_5014 *)&LAB_143e74930);
  return;
}



// FUNCTION 140257960 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1090,0);
  FGenericPlatformString::Memcpy(DAT_1464a1090,L"PlayerClassIdentifierHash",0x34);
  atexit((_func_5014 *)&LAB_143e74950);
  return;
}



// FUNCTION 1402579a0 FUN_1402579a0 body=59 status=ok
// SIG undefined FUN_1402579a0(void)

void FUN_1402579a0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1320,0);
  FGenericPlatformString::Memcpy(DAT_1464a1320,L"PlayerId",0x12);
  atexit((_func_5014 *)&LAB_143e74970);
  return;
}



// FUNCTION 140257aa0 LocalizationSourceControlSettingsCategoryName'' body=59 status=ok
// SIG undefined LocalizationSourceControlSettingsCategoryName''(void)

void `dynamic_initializer_for_'FLocalizationSourceControlSettings::
     LocalizationSourceControlSettingsCategoryName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a12f0,0);
  FGenericPlatformString::Memcpy(DAT_1464a12f0,L"ProvingGroundChallengesCompletion",0x44);
  atexit((_func_5014 *)&LAB_143e74990);
  return;
}



// FUNCTION 140257b20 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1310,0);
  FGenericPlatformString::Memcpy(DAT_1464a1310,L"RaidChallengesCompletion",0x32);
  atexit((_func_5014 *)&LAB_143e749b0);
  return;
}



// FUNCTION 140257c60 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a0f90,0);
  FGenericPlatformString::Memcpy(DAT_1464a0f90,L"<img src=\"%s\"></>",0x24);
  atexit((_func_5014 *)&LAB_143e749d0);
  return;
}



// FUNCTION 140257e20 FUN_140257e20 body=59 status=ok
// SIG undefined FUN_140257e20(void)

void FUN_140257e20(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1070,0);
  FGenericPlatformString::Memcpy(DAT_1464a1070,L"SessionId",0x14);
  atexit((_func_5014 *)&LAB_143e749f0);
  return;
}



// FUNCTION 140257e60 FUN_140257e60 body=59 status=ok
// SIG undefined FUN_140257e60(void)

void FUN_140257e60(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1210,0);
  FGenericPlatformString::Memcpy(DAT_1464a1210,L"ShieldJsonData",0x1e);
  atexit((_func_5014 *)&LAB_143e74a10);
  return;
}



// FUNCTION 140257ea0 `dynamic_initializer_for_'StatusStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'StatusStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__StatusStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1190,0);
  FGenericPlatformString::Memcpy(DAT_1464a1190,L"ShieldSerialNumber",0x26);
  atexit((_func_5014 *)&LAB_143e74a30);
  return;
}



// FUNCTION 140257f00 FUN_140257f00 body=59 status=ok
// SIG undefined FUN_140257f00(void)

void FUN_140257f00(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a0f00,0);
  FGenericPlatformString::Memcpy(DAT_1464a0f00,L"siren",0xc);
  atexit((_func_5014 *)&LAB_143e74a50);
  return;
}



// FUNCTION 140257f40 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1260,0);
  FGenericPlatformString::Memcpy(DAT_1464a1260,L"SkinCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e74a70);
  return;
}



// FUNCTION 140257f80 FUN_140257f80 body=59 status=ok
// SIG undefined FUN_140257f80(void)

void FUN_140257f80(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1300,0);
  FGenericPlatformString::Memcpy(DAT_1464a1300,L"SlaughterChallengesCompletion",0x3c);
  atexit((_func_5014 *)&LAB_143e74a90);
  return;
}



// FUNCTION 1402580a0 FUN_1402580a0 body=59 status=ok
// SIG undefined FUN_1402580a0(void)

void FUN_1402580a0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1130,0);
  FGenericPlatformString::Memcpy(DAT_1464a1130,L"TimePlayed",0x16);
  atexit((_func_5014 *)&LAB_143e74ab0);
  return;
}



// FUNCTION 1402580e0 FUN_1402580e0 body=59 status=ok
// SIG undefined FUN_1402580e0(void)

void FUN_1402580e0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a0f10,0);
  FGenericPlatformString::Memcpy(DAT_1464a0f10,L"token",0xc);
  atexit((_func_5014 *)&LAB_143e74ad0);
  return;
}



// FUNCTION 140258140 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1000,0);
  FGenericPlatformString::Memcpy(DAT_1464a1000,L"UnexpectedControlMessage",0x32);
  atexit((_func_5014 *)&LAB_143e74af0);
  return;
}



// FUNCTION 140258200 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a11c0,0);
  FGenericPlatformString::Memcpy(DAT_1464a11c0,L"Weapon1JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e74b10);
  return;
}



// FUNCTION 140258240 FUN_140258240 body=59 status=ok
// SIG undefined FUN_140258240(void)

void FUN_140258240(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1140,0);
  FGenericPlatformString::Memcpy(DAT_1464a1140,L"Weapon1SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e74b30);
  return;
}



// FUNCTION 140258280 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a11d0,0);
  FGenericPlatformString::Memcpy(DAT_1464a11d0,L"Weapon2JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e74b50);
  return;
}



// FUNCTION 1402582c0 FUN_1402582c0 body=59 status=ok
// SIG undefined FUN_1402582c0(void)

void FUN_1402582c0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1150,0);
  FGenericPlatformString::Memcpy(DAT_1464a1150,L"Weapon2SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e74b70);
  return;
}



// FUNCTION 140258300 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a11e0,0);
  FGenericPlatformString::Memcpy(DAT_1464a11e0,L"Weapon3JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e74b90);
  return;
}



// FUNCTION 140258340 FUN_140258340 body=59 status=ok
// SIG undefined FUN_140258340(void)

void FUN_140258340(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1160,0);
  FGenericPlatformString::Memcpy(DAT_1464a1160,L"Weapon3SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e74bb0);
  return;
}



// FUNCTION 140258380 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a11f0,0);
  FGenericPlatformString::Memcpy(DAT_1464a11f0,L"Weapon4JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e74bd0);
  return;
}



// FUNCTION 1402583c0 FUN_1402583c0 body=59 status=ok
// SIG undefined FUN_1402583c0(void)

void FUN_1402583c0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1170,0);
  FGenericPlatformString::Memcpy(DAT_1464a1170,L"Weapon4SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e74bf0);
  return;
}



// FUNCTION 140258400 FUN_140258400 body=59 status=ok
// SIG undefined FUN_140258400(void)

void FUN_140258400(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a12b0,0);
  FGenericPlatformString::Memcpy(DAT_1464a12b0,L"WeaponChallengesCompletion",0x36);
  atexit((_func_5014 *)&LAB_143e74c10);
  return;
}



// FUNCTION 1402584c0 EOL_String'' body=115 status=ok
// SIG undefined EOL_String''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FDlgConfigWriter::EOL_String__(void)

{
  undefined *puVar1;
  int iVar2;
  longlong lVar3;
  
  puVar1 = PTR_DAT_1464a0ea0;
  if ((PTR_DAT_1464a0ea0 != (undefined *)0x0) && (*(short *)PTR_DAT_1464a0ea0 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(short *)(PTR_DAT_1464a0ea0 + lVar3 * 2) != 0);
    iVar2 = (int)lVar3 + 1;
    _DAT_1468a6958 = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1468a6950,0);
    }
    FGenericPlatformString::Memcpy(DAT_1468a6950,puVar1,(longlong)iVar2 * 2);
  }
  atexit((_func_5014 *)&LAB_143e74cb0);
  return;
}



// FUNCTION 140258b00 FUN_140258b00 body=59 status=ok
// SIG undefined FUN_140258b00(void)

void FUN_140258b00(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1528,0);
  FGenericPlatformString::Memcpy(DAT_1464a1528,L"beastmaster",0x18);
  atexit((_func_5014 *)&LAB_143e74cd0);
  return;
}



// FUNCTION 140258ce0 FUN_140258ce0 body=59 status=ok
// SIG undefined FUN_140258ce0(void)

void FUN_140258ce0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1518,0);
  FGenericPlatformString::Memcpy(DAT_1464a1518,L"empty",0xc);
  atexit((_func_5014 *)&LAB_143e74cf0);
  return;
}



// FUNCTION 140258ee0 FUN_140258ee0 body=59 status=ok
// SIG undefined FUN_140258ee0(void)

void FUN_140258ee0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1538,0);
  FGenericPlatformString::Memcpy(DAT_1464a1538,L"gunner",0xe);
  atexit((_func_5014 *)&LAB_143e74d10);
  return;
}



// FUNCTION 140259460 FUN_140259460 body=59 status=ok
// SIG undefined FUN_140259460(void)

void FUN_140259460(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1548,0);
  FGenericPlatformString::Memcpy(DAT_1464a1548,L"operative",0x14);
  atexit((_func_5014 *)&LAB_143e74d30);
  return;
}



// FUNCTION 1402598e0 FUN_1402598e0 body=92 status=ok
// SIG undefined FUN_1402598e0(void)

void FUN_1402598e0(void)

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
    *puVar1 = &PTR_FUN_144c89060;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"CSLevelInfo",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140259940 FUN_140259940 body=92 status=ok
// SIG undefined FUN_140259940(void)

void FUN_140259940(void)

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
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_144c89f30;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"CSPuzzleFeedbackSettings",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1402599a0 FUN_1402599a0 body=92 status=ok
// SIG undefined FUN_1402599a0(void)

void FUN_1402599a0(void)

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
    *puVar1 = &PTR_FUN_144c8a2c0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"CSPuzzleIntroSettings",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140259a00 FUN_140259a00 body=92 status=ok
// SIG undefined FUN_140259a00(void)

void FUN_140259a00(void)

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
    *puVar1 = &PTR_FUN_144c91d80;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"DebugPuzzle",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140259a60 FUN_140259a60 body=92 status=ok
// SIG undefined FUN_140259a60(void)

void FUN_140259a60(void)

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
    *puVar1 = &PTR_FUN_144b3a278;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GFxCSTileArray",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140259b60 FUN_140259b60 body=59 status=ok
// SIG undefined FUN_140259b60(void)

void FUN_140259b60(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1558,0);
  FGenericPlatformString::Memcpy(DAT_1464a1558,L"siren",0xc);
  atexit((_func_5014 *)&LAB_143e74d50);
  return;
}



// FUNCTION 140259c80 FUN_140259c80 body=59 status=ok
// SIG undefined FUN_140259c80(void)

void FUN_140259c80(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a1568,0);
  FGenericPlatformString::Memcpy(DAT_1464a1568,L"token",0xc);
  atexit((_func_5014 *)&LAB_143e74d70);
  return;
}



// FUNCTION 140259d80 FUN_140259d80 body=66 status=ok
// SIG undefined FUN_140259d80(void)

void FUN_140259d80(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ECSScoreCondition",1);
  UObjectCompiledInDeferEnum(FUN_141587640,L"/Script/OakCS",*puVar1,0,0);
  return;
}



// FUNCTION 140259dd0 FUN_140259dd0 body=66 status=ok
// SIG undefined FUN_140259dd0(void)

void FUN_140259dd0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ECSTutorialElement",1);
  UObjectCompiledInDeferEnum(FUN_1415876a0,L"/Script/OakCS",*puVar1,0,0);
  return;
}



// FUNCTION 140259e20 FUN_140259e20 body=66 status=ok
// SIG undefined FUN_140259e20(void)

void FUN_140259e20(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ECSTweenEasingFunc",1);
  UObjectCompiledInDeferEnum(FUN_141587700,L"/Script/OakCS",*puVar1,0,0);
  return;
}



// FUNCTION 140259e70 FUN_140259e70 body=66 status=ok
// SIG undefined FUN_140259e70(void)

void FUN_140259e70(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ECitizenScienceManagerState",1);
  UObjectCompiledInDeferEnum(FUN_141587760,L"/Script/OakCS",*puVar1,0,0);
  return;
}



// FUNCTION 140259ec0 FUN_140259ec0 body=66 status=ok
// SIG undefined FUN_140259ec0(void)

void FUN_140259ec0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EDialogEventEnum",1);
  UObjectCompiledInDeferEnum(FUN_1415877c0,L"/Script/OakCS",*puVar1,0,0);
  return;
}



// FUNCTION 140259f10 FUN_140259f10 body=66 status=ok
// SIG undefined FUN_140259f10(void)

void FUN_140259f10(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"CSLevelInfo",1);
  UObjectCompiledInDeferStruct(FARFilter::StaticStruct,L"/Script/OakCS",*puVar1,0,0);
  return;
}



// FUNCTION 140259f60 FUN_140259f60 body=66 status=ok
// SIG undefined FUN_140259f60(void)

void FUN_140259f60(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"CSPuzzleFeedbackSettings",1);
  UObjectCompiledInDeferStruct(FUN_141587e70,L"/Script/OakCS",*puVar1,0,0);
  return;
}



// FUNCTION 140259fb0 FUN_140259fb0 body=66 status=ok
// SIG undefined FUN_140259fb0(void)

void FUN_140259fb0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"CSPuzzleIntroSettings",1);
  UObjectCompiledInDeferStruct(FUN_141587ef0,L"/Script/OakCS",*puVar1,0,0);
  return;
}



// FUNCTION 14025a000 FUN_14025a000 body=66 status=ok
// SIG undefined FUN_14025a000(void)

void FUN_14025a000(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"DebugPuzzle",1);
  UObjectCompiledInDeferStruct(FUN_141587f70,L"/Script/OakCS",*puVar1,0,0);
  return;
}



// FUNCTION 14025a050 FUN_14025a050 body=66 status=ok
// SIG undefined FUN_14025a050(void)

void FUN_14025a050(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GFxCSTileArray",1);
  UObjectCompiledInDeferStruct(FUN_141587ff0,L"/Script/OakCS",*puVar1,0,0);
  return;
}



// FUNCTION 14025a0a0 FUN_14025a0a0 body=58 status=ok
// SIG undefined FUN_14025a0a0(void)

void FUN_14025a0a0(void)

{
  UObjectCompiledInDefer(FUN_141588070,FUN_141581f90,L"ACSConsole",L"/Script/OakCS",0,0,0);
  return;
}



// FUNCTION 14025a0e0 FUN_14025a0e0 body=58 status=ok
// SIG undefined FUN_14025a0e0(void)

void FUN_14025a0e0(void)

{
  UObjectCompiledInDefer(FUN_141582930,FUN_1415825a0,L"ACSConsoleProxy",L"/Script/OakCS",0,0,0);
  return;
}



// FUNCTION 14025a120 FUN_14025a120 body=58 status=ok
// SIG undefined FUN_14025a120(void)

void FUN_14025a120(void)

{
  UObjectCompiledInDefer(FUN_141582cf0,FUN_141582450,L"UCSAction",L"/Script/OakCS",0,0,0);
  return;
}



// FUNCTION 14025a160 FUN_14025a160 body=58 status=ok
// SIG undefined FUN_14025a160(void)

void FUN_14025a160(void)

{
  UObjectCompiledInDefer(FUN_1415880a0,FUN_1415827d0,L"UCSActionInsertToken",L"/Script/OakCS",0,0,0)
  ;
  return;
}



// FUNCTION 14025a1a0 FUN_14025a1a0 body=58 status=ok
// SIG undefined FUN_14025a1a0(void)

void FUN_14025a1a0(void)

{
  UObjectCompiledInDefer(FUN_1415880d0,FUN_141582ae0,L"UCSActionRemoveToken",L"/Script/OakCS",0,0,0)
  ;
  return;
}



// FUNCTION 14025a1e0 FUN_14025a1e0 body=58 status=ok
// SIG undefined FUN_14025a1e0(void)

void FUN_14025a1e0(void)

{
  UObjectCompiledInDefer
            (FUN_141588100,FUN_141582c30,L"UCSActionSwapTileAndToken",L"/Script/OakCS",0,0,0);
  return;
}


