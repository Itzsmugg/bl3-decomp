// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140170020 FUN_140170020 body=59 status=ok
// SIG undefined FUN_140170020(void)

void FUN_140170020(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b250,0);
  FGenericPlatformString::Memcpy(DAT_14629b250,L"ChallengeInfo",0x1c);
  atexit((_func_5014 *)&LAB_143e531b0);
  return;
}



// FUNCTION 140170060 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b240,0);
  FGenericPlatformString::Memcpy(DAT_14629b240,L"FriendCrewQuarterInfo",0x2c);
  atexit((_func_5014 *)&LAB_143e531d0);
  return;
}



// FUNCTION 1401700a0 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ac60,0);
  FGenericPlatformString::Memcpy(DAT_14629ac60,L"FriendEventType",0x20);
  atexit((_func_5014 *)&LAB_143e531f0);
  return;
}



// FUNCTION 1401700e0 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b220,0);
  FGenericPlatformString::Memcpy(DAT_14629b220,L"FriendLoadOutInfo",0x24);
  atexit((_func_5014 *)&LAB_143e53210);
  return;
}



// FUNCTION 140170120 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b210,0);
  FGenericPlatformString::Memcpy(DAT_14629b210,L"FriendStatusPresenceInfo",0x32);
  atexit((_func_5014 *)&LAB_143e53230);
  return;
}



// FUNCTION 140170160 FUN_140170160 body=59 status=ok
// SIG undefined FUN_140170160(void)

void FUN_140170160(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b230,0);
  FGenericPlatformString::Memcpy(DAT_14629b230,L"FriendSkillTreeInfo",0x28);
  atexit((_func_5014 *)&LAB_143e53250);
  return;
}



// FUNCTION 1401701a0 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b160,0);
  FGenericPlatformString::Memcpy(DAT_14629b160,L"FriendStatusThing",0x24);
  atexit((_func_5014 *)&LAB_143e53270);
  return;
}



// FUNCTION 1401701e0 FUN_1401701e0 body=283 status=ok
// SIG undefined FUN_1401701e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401701e0(void)

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
      *plVar4 = (longlong)&PTR_GetPoolName_14452f8f0;
      plVar4[1] = (longlong)&DAT_14686ed10;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[3] = lVar5;
      *plVar4 = (longlong)&PTR_GetPoolName_14452f938;
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
    puVar2 = (undefined8 *)FUN_140d78bc0();
    if (puVar2 != &DAT_14686ed10) {
      DAT_14686ed10 = *puVar2;
      uRam000000014686ed18 = puVar2[1];
      _DAT_14686ed20 = puVar2[2];
      DAT_14686ed28 = 1;
      atexit((_func_5014 *)&LAB_143e53290);
      return;
    }
  }
  atexit((_func_5014 *)&LAB_143e53290);
  return;
}



// FUNCTION 140170300 FUN_140170300 body=59 status=ok
// SIG undefined FUN_140170300(void)

void FUN_140170300(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b170,0);
  FGenericPlatformString::Memcpy(DAT_14629b170,L"GameCompletion",0x1e);
  atexit((_func_5014 *)&LAB_143e532a0);
  return;
}



// FUNCTION 140170340 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629acf0,0);
  FGenericPlatformString::Memcpy(DAT_14629acf0,L"GearDisplayName",0x20);
  atexit((_func_5014 *)&LAB_143e532c0);
  return;
}



// FUNCTION 140170380 FUN_140170380 body=59 status=ok
// SIG undefined FUN_140170380(void)

void FUN_140170380(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ad70,0);
  FGenericPlatformString::Memcpy(DAT_14629ad70,L"GearJsonData",0x1a);
  atexit((_func_5014 *)&LAB_143e532e0);
  return;
}



// FUNCTION 1401703c0 FUN_1401703c0 body=59 status=ok
// SIG undefined FUN_1401703c0(void)

void FUN_1401703c0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ad80,0);
  FGenericPlatformString::Memcpy(DAT_14629ad80,L"GearReceivedType",0x22);
  atexit((_func_5014 *)&LAB_143e53300);
  return;
}



// FUNCTION 140170400 FUN_140170400 body=59 status=ok
// SIG undefined FUN_140170400(void)

void FUN_140170400(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ad60,0);
  FGenericPlatformString::Memcpy(DAT_14629ad60,L"GearSerialNumber",0x22);
  atexit((_func_5014 *)&LAB_143e53320);
  return;
}



// FUNCTION 140170440 FUN_140170440 body=59 status=ok
// SIG undefined FUN_140170440(void)

void FUN_140170440(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629abe0,0);
  FGenericPlatformString::Memcpy(DAT_14629abe0,L"GenericFailure",0x1e);
  atexit((_func_5014 *)&LAB_143e53340);
  return;
}



// FUNCTION 140170480 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b0d0,0);
  FGenericPlatformString::Memcpy(DAT_14629b0d0,L"GrenadeJsonData",0x20);
  atexit((_func_5014 *)&LAB_143e53360);
  return;
}



// FUNCTION 1401704c0 FUN_1401704c0 body=59 status=ok
// SIG undefined FUN_1401704c0(void)

void FUN_1401704c0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b050,0);
  FGenericPlatformString::Memcpy(DAT_14629b050,L"GrenadeSerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e53380);
  return;
}



// FUNCTION 140170500 FUN_140170500 body=59 status=ok
// SIG undefined FUN_140170500(void)

void FUN_140170500(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629adf0,0);
  FGenericPlatformString::Memcpy(DAT_14629adf0,L"GuardianRank",0x1a);
  atexit((_func_5014 *)&LAB_143e533a0);
  return;
}



// FUNCTION 140170540 FUN_140170540 body=59 status=ok
// SIG undefined FUN_140170540(void)

void FUN_140170540(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629aff0,0);
  FGenericPlatformString::Memcpy(DAT_14629aff0,L"GuardianRank",0x1a);
  atexit((_func_5014 *)&LAB_143e533c0);
  return;
}



// FUNCTION 140170580 FUN_140170580 body=59 status=ok
// SIG undefined FUN_140170580(void)

void FUN_140170580(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629afd0,0);
  FGenericPlatformString::Memcpy(DAT_14629afd0,L"HasSelectedCharacter",0x2a);
  atexit((_func_5014 *)&LAB_143e533e0);
  return;
}



// FUNCTION 1401705c0 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b110,0);
  FGenericPlatformString::Memcpy(DAT_14629b110,L"HeadCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e53400);
  return;
}



// FUNCTION 140170600 FUN_140170600 body=59 status=ok
// SIG undefined FUN_140170600(void)

void FUN_140170600(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ae60,0);
  FGenericPlatformString::Memcpy(DAT_14629ae60,L"Heroic",0xe);
  atexit((_func_5014 *)&LAB_143e53420);
  return;
}



// FUNCTION 1401706a0 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ae10,0);
  FGenericPlatformString::Memcpy(DAT_14629ae10,L"HunterStatGroupPoints",0x2c);
  atexit((_func_5014 *)&LAB_143e53440);
  return;
}



// FUNCTION 140170710 FUN_140170710 body=59 status=ok
// SIG undefined FUN_140170710(void)

void FUN_140170710(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ac00,0);
  FGenericPlatformString::Memcpy(DAT_14629ac00,L"InvalidClientBeaconType",0x30);
  atexit((_func_5014 *)&LAB_143e53460);
  return;
}



// FUNCTION 140170830 FUN_140170830 body=59 status=ok
// SIG undefined FUN_140170830(void)

void FUN_140170830(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ae80,0);
  FGenericPlatformString::Memcpy(DAT_14629ae80,L"KillCount",0x14);
  atexit((_func_5014 *)&LAB_143e53480);
  return;
}



// FUNCTION 1401708d0 FUN_1401708d0 body=59 status=ok
// SIG undefined FUN_1401708d0(void)

void FUN_1401708d0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ac90,0);
  FGenericPlatformString::Memcpy(DAT_14629ac90,L"Level",0xc);
  atexit((_func_5014 *)&LAB_143e534a0);
  return;
}



// FUNCTION 140170910 FUN_140170910 body=59 status=ok
// SIG undefined FUN_140170910(void)

void FUN_140170910(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629af20,0);
  FGenericPlatformString::Memcpy(DAT_14629af20,L"Level",0xc);
  atexit((_func_5014 *)&LAB_143e534c0);
  return;
}



// FUNCTION 140170950 FUN_140170950 body=59 status=ok
// SIG undefined FUN_140170950(void)

void FUN_140170950(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629aea0,0);
  FGenericPlatformString::Memcpy(DAT_14629aea0,L"Liked",0xc);
  atexit((_func_5014 *)&LAB_143e534e0);
  return;
}



// FUNCTION 140170990 FUN_140170990 body=59 status=ok
// SIG undefined FUN_140170990(void)

void FUN_140170990(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ae90,0);
  FGenericPlatformString::Memcpy(DAT_14629ae90,L"LikedEventGuid",0x1e);
  atexit((_func_5014 *)&LAB_143e53500);
  return;
}



// FUNCTION 1401709d0 FUN_1401709d0 body=59 status=ok
// SIG undefined FUN_1401709d0(void)

void FUN_1401709d0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629aec0,0);
  FGenericPlatformString::Memcpy(DAT_14629aec0,&DAT_14451132c,4);
  atexit((_func_5014 *)&LAB_143e53520);
  return;
}



// FUNCTION 140170a10 FUN_140170a10 body=59 status=ok
// SIG undefined FUN_140170a10(void)

void FUN_140170a10(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629af80,0);
  FGenericPlatformString::Memcpy(DAT_14629af80,L"LocationX",0x14);
  atexit((_func_5014 *)&LAB_143e53540);
  return;
}



// FUNCTION 140170a50 FUN_140170a50 body=59 status=ok
// SIG undefined FUN_140170a50(void)

void FUN_140170a50(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629aed0,0);
  FGenericPlatformString::Memcpy(DAT_14629aed0,&DAT_14451133c,4);
  atexit((_func_5014 *)&LAB_143e53560);
  return;
}



// FUNCTION 140170a90 FUN_140170a90 body=59 status=ok
// SIG undefined FUN_140170a90(void)

void FUN_140170a90(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629af90,0);
  FGenericPlatformString::Memcpy(DAT_14629af90,L"LocationY",0x14);
  atexit((_func_5014 *)&LAB_143e53580);
  return;
}



// FUNCTION 140170ad0 FUN_140170ad0 body=59 status=ok
// SIG undefined FUN_140170ad0(void)

void FUN_140170ad0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629aee0,0);
  FGenericPlatformString::Memcpy(DAT_14629aee0,&DAT_14451138c,4);
  atexit((_func_5014 *)&LAB_143e535a0);
  return;
}



// FUNCTION 140170b10 FUN_140170b10 body=59 status=ok
// SIG undefined FUN_140170b10(void)

void FUN_140170b10(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629afa0,0);
  FGenericPlatformString::Memcpy(DAT_14629afa0,L"LocationZ",0x14);
  atexit((_func_5014 *)&LAB_143e535c0);
  return;
}



// FUNCTION 140170b50 FUN_140170b50 body=59 status=ok
// SIG undefined FUN_140170b50(void)

void FUN_140170b50(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629afc0,0);
  FGenericPlatformString::Memcpy(DAT_14629afc0,L"LookingForHelp",0x1e);
  atexit((_func_5014 *)&LAB_143e535e0);
  return;
}



// FUNCTION 140170b90 FUN_140170b90 body=59 status=ok
// SIG undefined FUN_140170b90(void)

void FUN_140170b90(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629acc0,0);
  FGenericPlatformString::Memcpy(DAT_14629acc0,L"MapName",0x10);
  atexit((_func_5014 *)&LAB_143e53600);
  return;
}



// FUNCTION 140170bd0 FUN_140170bd0 body=59 status=ok
// SIG undefined FUN_140170bd0(void)

void FUN_140170bd0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629af30,0);
  FGenericPlatformString::Memcpy(DAT_14629af30,L"MapName",0x10);
  atexit((_func_5014 *)&LAB_143e53620);
  return;
}



// FUNCTION 140170c50 FUN_140170c50 body=59 status=ok
// SIG undefined FUN_140170c50(void)

void FUN_140170c50(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ae70,0);
  FGenericPlatformString::Memcpy(DAT_14629ae70,L"Mayhem",0xe);
  atexit((_func_5014 *)&LAB_143e53640);
  return;
}



// FUNCTION 140170c90 FUN_140170c90 body=59 status=ok
// SIG undefined FUN_140170c90(void)

void FUN_140170c90(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ac20,0);
  FGenericPlatformString::Memcpy(DAT_14629ac20,L"MismatchedBeaconNetVersions",0x38);
  atexit((_func_5014 *)&LAB_143e53660);
  return;
}



// FUNCTION 140170cd0 FUN_140170cd0 body=59 status=ok
// SIG undefined FUN_140170cd0(void)

void FUN_140170cd0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ac40,0);
  FGenericPlatformString::Memcpy(DAT_14629ac40,L"MissingDLC",0x16);
  atexit((_func_5014 *)&LAB_143e53680);
  return;
}



// FUNCTION 140170d10 FUN_140170d10 body=59 status=ok
// SIG undefined FUN_140170d10(void)

void FUN_140170d10(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ad10,0);
  FGenericPlatformString::Memcpy(DAT_14629ad10,L"MissionHash",0x18);
  atexit((_func_5014 *)&LAB_143e536a0);
  return;
}



// FUNCTION 140170d50 FUN_140170d50 body=59 status=ok
// SIG undefined FUN_140170d50(void)

void FUN_140170d50(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629af70,0);
  FGenericPlatformString::Memcpy(DAT_14629af70,L"MissionHash",0x18);
  atexit((_func_5014 *)&LAB_143e536c0);
  return;
}



// FUNCTION 140170d90 FUN_140170d90 body=59 status=ok
// SIG undefined FUN_140170d90(void)

void FUN_140170d90(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629acb0,0);
  FGenericPlatformString::Memcpy(DAT_14629acb0,L"MissionName",0x18);
  atexit((_func_5014 *)&LAB_143e536e0);
  return;
}



// FUNCTION 140170fb0 FUN_140170fb0 body=59 status=ok
// SIG undefined FUN_140170fb0(void)

void FUN_140170fb0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629abd0,0);
  FGenericPlatformString::Memcpy(DAT_14629abd0,L"NetworkFailure",0x1e);
  atexit((_func_5014 *)&LAB_143e53700);
  return;
}



// FUNCTION 140171030 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629abf0,0);
  FGenericPlatformString::Memcpy(DAT_14629abf0,L"NotAcceptingReservations",0x32);
  atexit((_func_5014 *)&LAB_143e53720);
  return;
}



// FUNCTION 140171070 FUN_140171070 body=59 status=ok
// SIG undefined FUN_140171070(void)

void FUN_140171070(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629aeb0,0);
  FGenericPlatformString::Memcpy(DAT_14629aeb0,L"NumLikes",0x12);
  atexit((_func_5014 *)&LAB_143e53740);
  return;
}



// FUNCTION 1401710b0 `dynamic_initializer_for_'OfflineText'' body=53 status=ok
// SIG undefined `dynamic_initializer_for_'OfflineText''(void)

void EOnlinePresenceState::_dynamic_initializer_for__OfflineText__(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_14686ed58,L"Offline",L"OnlinePresence",L"Offline");
  atexit(FUN_143e53760);
  return;
}



// FUNCTION 1401710f0 `dynamic_initializer_for_'OnlineText'' body=53 status=ok
// SIG undefined `dynamic_initializer_for_'OnlineText''(void)

void EOnlinePresenceState::_dynamic_initializer_for__OnlineText__(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_14686ed40,L"Online",L"OnlinePresence",L"Online");
  atexit(FUN_143e537b0);
  return;
}



// FUNCTION 140171150 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ad50,0);
  FGenericPlatformString::Memcpy(DAT_14629ad50,L"OtherPlayerClassIdHashes",0x32);
  atexit((_func_5014 *)&LAB_143e53800);
  return;
}



// FUNCTION 140171190 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ad40,0);
  FGenericPlatformString::Memcpy(DAT_14629ad40,L"OtherPlayerNetIds",0x24);
  atexit((_func_5014 *)&LAB_143e53820);
  return;
}



// FUNCTION 1401711d0 FUN_1401711d0 body=59 status=ok
// SIG undefined FUN_1401711d0(void)

void FUN_1401711d0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ac50,0);
  FGenericPlatformString::Memcpy(DAT_14629ac50,L"Owner",0xc);
  atexit((_func_5014 *)&LAB_143e53840);
  return;
}



// FUNCTION 140171210 FUN_140171210 body=59 status=ok
// SIG undefined FUN_140171210(void)

void FUN_140171210(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629af50,0);
  FGenericPlatformString::Memcpy(DAT_14629af50,L"PartyPlayerCount",0x22);
  atexit((_func_5014 *)&LAB_143e53860);
  return;
}



// FUNCTION 140171330 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629aca0,0);
  FGenericPlatformString::Memcpy(DAT_14629aca0,L"PlayerClassIdentifierHash",0x34);
  atexit((_func_5014 *)&LAB_143e53880);
  return;
}



// FUNCTION 140171370 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629af60,0);
  FGenericPlatformString::Memcpy(DAT_14629af60,L"PlayerClassIdentifierHash",0x34);
  atexit((_func_5014 *)&LAB_143e538a0);
  return;
}



// FUNCTION 1401713b0 FUN_1401713b0 body=59 status=ok
// SIG undefined FUN_1401713b0(void)

void FUN_1401713b0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b1f0,0);
  FGenericPlatformString::Memcpy(DAT_14629b1f0,L"PlayerId",0x12);
  atexit((_func_5014 *)&LAB_143e538c0);
  return;
}



// FUNCTION 1401713f0 FUN_1401713f0 body=59 status=ok
// SIG undefined FUN_1401713f0(void)

void FUN_1401713f0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ace0,0);
  FGenericPlatformString::Memcpy(DAT_14629ace0,L"PlayerName",0x16);
  atexit((_func_5014 *)&LAB_143e538e0);
  return;
}



// FUNCTION 140171430 `dynamic_initializer_for_'PresenceResourceKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PresenceResourceKey''(void)

void _dynamic_initializer_for__PresenceResourceKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b290,0);
  FGenericPlatformString::Memcpy(DAT_14629b290,L"ResourceKey",0x18);
  atexit((_func_5014 *)&LAB_143e53900);
  return;
}



// FUNCTION 140171530 LocalizationSourceControlSettingsCategoryName'' body=59 status=ok
// SIG undefined LocalizationSourceControlSettingsCategoryName''(void)

void `dynamic_initializer_for_'FLocalizationSourceControlSettings::
     LocalizationSourceControlSettingsCategoryName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b1c0,0);
  FGenericPlatformString::Memcpy(DAT_14629b1c0,L"ProvingGroundChallengesCompletion",0x44);
  atexit((_func_5014 *)&LAB_143e53920);
  return;
}



// FUNCTION 1401715b0 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b1e0,0);
  FGenericPlatformString::Memcpy(DAT_14629b1e0,L"RaidChallengesCompletion",0x32);
  atexit((_func_5014 *)&LAB_143e53940);
  return;
}



// FUNCTION 1401715f0 FUN_1401715f0 body=59 status=ok
// SIG undefined FUN_1401715f0(void)

void FUN_1401715f0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ade0,0);
  FGenericPlatformString::Memcpy(DAT_14629ade0,L"Recipient",0x14);
  atexit((_func_5014 *)&LAB_143e53960);
  return;
}



// FUNCTION 140171670 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629aaf8,0);
  FGenericPlatformString::Memcpy(DAT_14629aaf8,L"<img src=\"%s\"></>",0x24);
  atexit((_func_5014 *)&LAB_143e53980);
  return;
}



// FUNCTION 140171990 FUN_140171990 body=59 status=ok
// SIG undefined FUN_140171990(void)

void FUN_140171990(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629af40,0);
  FGenericPlatformString::Memcpy(DAT_14629af40,L"SessionId",0x14);
  atexit((_func_5014 *)&LAB_143e539a0);
  return;
}



// FUNCTION 1401719d0 FUN_1401719d0 body=59 status=ok
// SIG undefined FUN_1401719d0(void)

void FUN_1401719d0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b0e0,0);
  FGenericPlatformString::Memcpy(DAT_14629b0e0,L"ShieldJsonData",0x1e);
  atexit((_func_5014 *)&LAB_143e539c0);
  return;
}



// FUNCTION 140171a10 `dynamic_initializer_for_'StatusStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'StatusStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__StatusStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b060,0);
  FGenericPlatformString::Memcpy(DAT_14629b060,L"ShieldSerialNumber",0x26);
  atexit((_func_5014 *)&LAB_143e539e0);
  return;
}



// FUNCTION 140171a70 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b130,0);
  FGenericPlatformString::Memcpy(DAT_14629b130,L"SkinCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e53a00);
  return;
}



// FUNCTION 140171ab0 FUN_140171ab0 body=59 status=ok
// SIG undefined FUN_140171ab0(void)

void FUN_140171ab0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b1d0,0);
  FGenericPlatformString::Memcpy(DAT_14629b1d0,L"SlaughterChallengesCompletion",0x3c);
  atexit((_func_5014 *)&LAB_143e53a20);
  return;
}



// FUNCTION 140171b90 FUN_140171b90 body=59 status=ok
// SIG undefined FUN_140171b90(void)

void FUN_140171b90(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ad90,0);
  FGenericPlatformString::Memcpy(DAT_14629ad90,L"StatHash",0x12);
  atexit((_func_5014 *)&LAB_143e53a40);
  return;
}



// FUNCTION 140171bd0 FUN_140171bd0 body=59 status=ok
// SIG undefined FUN_140171bd0(void)

void FUN_140171bd0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ae20,0);
  FGenericPlatformString::Memcpy(DAT_14629ae20,L"SurvivorStatGroupPoints",0x30);
  atexit((_func_5014 *)&LAB_143e53a60);
  return;
}



// FUNCTION 140171c20 FUN_140171c20 body=59 status=ok
// SIG undefined FUN_140171c20(void)

void FUN_140171c20(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b000,0);
  FGenericPlatformString::Memcpy(DAT_14629b000,L"TimePlayed",0x16);
  atexit((_func_5014 *)&LAB_143e53a80);
  return;
}



// FUNCTION 140171c80 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ac30,0);
  FGenericPlatformString::Memcpy(DAT_14629ac30,L"UnexpectedControlMessage",0x32);
  atexit((_func_5014 *)&LAB_143e53aa0);
  return;
}



// FUNCTION 140171cc0 FUN_140171cc0 body=59 status=ok
// SIG undefined FUN_140171cc0(void)

void FUN_140171cc0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ad30,0);
  FGenericPlatformString::Memcpy(DAT_14629ad30,L"UniqueNetId",0x18);
  atexit((_func_5014 *)&LAB_143e53ac0);
  return;
}



// FUNCTION 140171d80 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ab08,0);
  FGenericPlatformString::Memcpy(DAT_14629ab08,&DAT_14452af50,8);
  atexit((_func_5014 *)&LAB_143e53ae0);
  return;
}



// FUNCTION 140171dc0 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b090,0);
  FGenericPlatformString::Memcpy(DAT_14629b090,L"Weapon1JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e53b00);
  return;
}



// FUNCTION 140171e00 FUN_140171e00 body=59 status=ok
// SIG undefined FUN_140171e00(void)

void FUN_140171e00(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b010,0);
  FGenericPlatformString::Memcpy(DAT_14629b010,L"Weapon1SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e53b20);
  return;
}



// FUNCTION 140171e40 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b0a0,0);
  FGenericPlatformString::Memcpy(DAT_14629b0a0,L"Weapon2JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e53b40);
  return;
}



// FUNCTION 140171e80 FUN_140171e80 body=59 status=ok
// SIG undefined FUN_140171e80(void)

void FUN_140171e80(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b020,0);
  FGenericPlatformString::Memcpy(DAT_14629b020,L"Weapon2SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e53b60);
  return;
}



// FUNCTION 140171ec0 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b0b0,0);
  FGenericPlatformString::Memcpy(DAT_14629b0b0,L"Weapon3JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e53b80);
  return;
}



// FUNCTION 140171f00 FUN_140171f00 body=59 status=ok
// SIG undefined FUN_140171f00(void)

void FUN_140171f00(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b030,0);
  FGenericPlatformString::Memcpy(DAT_14629b030,L"Weapon3SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e53ba0);
  return;
}



// FUNCTION 140171f40 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b0c0,0);
  FGenericPlatformString::Memcpy(DAT_14629b0c0,L"Weapon4JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e53bc0);
  return;
}



// FUNCTION 140171f80 FUN_140171f80 body=59 status=ok
// SIG undefined FUN_140171f80(void)

void FUN_140171f80(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b040,0);
  FGenericPlatformString::Memcpy(DAT_14629b040,L"Weapon4SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e53be0);
  return;
}



// FUNCTION 140171fc0 FUN_140171fc0 body=59 status=ok
// SIG undefined FUN_140171fc0(void)

void FUN_140171fc0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b180,0);
  FGenericPlatformString::Memcpy(DAT_14629b180,L"WeaponChallengesCompletion",0x36);
  atexit((_func_5014 *)&LAB_143e53c00);
  return;
}



// FUNCTION 1401720e0 EOL_String'' body=115 status=ok
// SIG undefined EOL_String''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FDlgConfigWriter::EOL_String__(void)

{
  undefined *puVar1;
  int iVar2;
  longlong lVar3;
  
  puVar1 = PTR_DAT_14629aae0;
  if ((PTR_DAT_14629aae0 != (undefined *)0x0) && (*(short *)PTR_DAT_14629aae0 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(short *)(PTR_DAT_14629aae0 + lVar3 * 2) != 0);
    iVar2 = (int)lVar3 + 1;
    _DAT_14686ec38 = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14686ec30,0);
    }
    FGenericPlatformString::Memcpy(DAT_14686ec30,puVar1,(longlong)iVar2 * 2);
  }
  atexit((_func_5014 *)&LAB_143e53c20);
  return;
}



// FUNCTION 140172240 FUN_140172240 body=32 status=ok
// SIG undefined FUN_140172240(void)

void FUN_140172240(void)

{
  FUN_140da8520(&DAT_14686f2c0);
  atexit((_func_5014 *)&LAB_143e53c40);
  return;
}



// FUNCTION 140172260 FUN_140172260 body=32 status=ok
// SIG undefined FUN_140172260(void)

void FUN_140172260(void)

{
  FUN_140da8520(&DAT_14686f3c0);
  atexit((_func_5014 *)&LAB_143e53c50);
  return;
}



// FUNCTION 140172290 `dynamic_initializer_for_'MarkerRoadCorner'' body=72 status=ok
// SIG undefined `dynamic_initializer_for_'MarkerRoadCorner''(void)

void SimpleCityDungeonConstants::_dynamic_initializer_for__MarkerRoadCorner__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b790,0);
  FGenericPlatformString::Convert<char,wchar_t>(DAT_14629b790,0xc,"Matchmaking",0xc,0x3f);
  atexit((_func_5014 *)&LAB_143e53c80);
  return;
}



// FUNCTION 140172320 FUN_140172320 body=59 status=ok
// SIG undefined FUN_140172320(void)

void FUN_140172320(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b600,0);
  FGenericPlatformString::Memcpy(DAT_14629b600,L"AbilityData",0x18);
  atexit((_func_5014 *)&LAB_143e53d00);
  return;
}



// FUNCTION 140172400 FUN_140172400 body=59 status=ok
// SIG undefined FUN_140172400(void)

void FUN_140172400(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b5b0,0);
  FGenericPlatformString::Memcpy(DAT_14629b5b0,L"ArtifactJsonData",0x22);
  atexit((_func_5014 *)&LAB_143e53d20);
  return;
}



// FUNCTION 140172440 FUN_140172440 body=59 status=ok
// SIG undefined FUN_140172440(void)

void FUN_140172440(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b530,0);
  FGenericPlatformString::Memcpy(DAT_14629b530,L"ArtifactSerialNumber",0x2a);
  atexit((_func_5014 *)&LAB_143e53d40);
  return;
}



// FUNCTION 140172480 FUN_140172480 body=53 status=ok
// SIG undefined FUN_140172480(void)

void FUN_140172480(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_14686f298,L"Please wait...",L"UIManager",L"BlockingSubtitle");
  atexit(FUN_143e53d60);
  return;
}



// FUNCTION 1401724c0 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b5d0,0);
  FGenericPlatformString::Memcpy(DAT_14629b5d0,L"BodyCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e53db0);
  return;
}



// FUNCTION 140172500 FUN_140172500 body=59 status=ok
// SIG undefined FUN_140172500(void)

void FUN_140172500(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b460,0);
  FGenericPlatformString::Memcpy(DAT_14629b460,L"CanJoin",0x10);
  atexit((_func_5014 *)&LAB_143e53dd0);
  return;
}



// FUNCTION 140172580 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b5a0,0);
  FGenericPlatformString::Memcpy(DAT_14629b5a0,L"ClassItemJsonData",0x24);
  atexit((_func_5014 *)&LAB_143e53df0);
  return;
}



// FUNCTION 1401725c0 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b520,0);
  FGenericPlatformString::Memcpy(DAT_14629b520,L"ClassItemSerialNumber",0x2c);
  atexit((_func_5014 *)&LAB_143e53e10);
  return;
}



// FUNCTION 140172640 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b650,0);
  FGenericPlatformString::Memcpy(DAT_14629b650,L"CrewChallengesCompletion",0x32);
  atexit((_func_5014 *)&LAB_143e53e30);
  return;
}



// FUNCTION 1401726c0 FUN_1401726c0 body=59 status=ok
// SIG undefined FUN_1401726c0(void)

void FUN_1401726c0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b6b0,0);
  FGenericPlatformString::Memcpy(DAT_14629b6b0,L"DateTime",0x12);
  atexit((_func_5014 *)&LAB_143e53e50);
  return;
}



// FUNCTION 1401727e0 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b750,0);
  FGenericPlatformString::Memcpy(DAT_14629b750,L"DuplicateReservationFound",0x34);
  atexit((_func_5014 *)&LAB_143e53e70);
  return;
}



// FUNCTION 140172820 `dynamic_initializer_for_'kResultStringCannotLoadPreset'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kResultStringCannotLoadPreset''(void)

void _dynamic_initializer_for__kResultStringCannotLoadPreset__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b5f0,0);
  FGenericPlatformString::Memcpy(DAT_14629b5f0,L"EmoteCustomizationHash",0x2e);
  atexit((_func_5014 *)&LAB_143e53e90);
  return;
}



// FUNCTION 140172860 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b640,0);
  FGenericPlatformString::Memcpy(DAT_14629b640,L"EnemyChallengesCompletion",0x34);
  atexit((_func_5014 *)&LAB_143e53eb0);
  return;
}



// FUNCTION 1401728e0 `dynamic_initializer_for_'kResultStringAssetDefAlrealdyLoaded'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kResultStringAssetDefAlrealdyLoaded''(void)

void _dynamic_initializer_for__kResultStringAssetDefAlrealdyLoaded__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b660,0);
  FGenericPlatformString::Memcpy(DAT_14629b660,L"ExplorationChallengesCompletion",0x40);
  atexit((_func_5014 *)&LAB_143e53ed0);
  return;
}



// FUNCTION 1401729a0 FUN_1401729a0 body=59 status=ok
// SIG undefined FUN_1401729a0(void)

void FUN_1401729a0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b490,0);
  FGenericPlatformString::Memcpy(DAT_14629b490,L"FriendActivityStatus",0x2a);
  atexit((_func_5014 *)&LAB_143e53ef0);
  return;
}



// FUNCTION 1401729e0 FUN_1401729e0 body=59 status=ok
// SIG undefined FUN_1401729e0(void)

void FUN_1401729e0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b700,0);
  FGenericPlatformString::Memcpy(DAT_14629b700,L"ChallengeInfo",0x1c);
  atexit((_func_5014 *)&LAB_143e53f10);
  return;
}



// FUNCTION 140172a20 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b6f0,0);
  FGenericPlatformString::Memcpy(DAT_14629b6f0,L"FriendCrewQuarterInfo",0x2c);
  atexit((_func_5014 *)&LAB_143e53f30);
  return;
}



// FUNCTION 140172a60 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b6d0,0);
  FGenericPlatformString::Memcpy(DAT_14629b6d0,L"FriendLoadOutInfo",0x24);
  atexit((_func_5014 *)&LAB_143e53f50);
  return;
}



// FUNCTION 140172aa0 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b6c0,0);
  FGenericPlatformString::Memcpy(DAT_14629b6c0,L"FriendStatusPresenceInfo",0x32);
  atexit((_func_5014 *)&LAB_143e53f70);
  return;
}



// FUNCTION 140172ae0 FUN_140172ae0 body=59 status=ok
// SIG undefined FUN_140172ae0(void)

void FUN_140172ae0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b6e0,0);
  FGenericPlatformString::Memcpy(DAT_14629b6e0,L"FriendSkillTreeInfo",0x28);
  atexit((_func_5014 *)&LAB_143e53f90);
  return;
}



// FUNCTION 140172b20 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b610,0);
  FGenericPlatformString::Memcpy(DAT_14629b610,L"FriendStatusThing",0x24);
  atexit((_func_5014 *)&LAB_143e53fb0);
  return;
}



// FUNCTION 140172b60 FUN_140172b60 body=59 status=ok
// SIG undefined FUN_140172b60(void)

void FUN_140172b60(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b620,0);
  FGenericPlatformString::Memcpy(DAT_14629b620,L"GameCompletion",0x1e);
  atexit((_func_5014 *)&LAB_143e53fd0);
  return;
}



// FUNCTION 140172ba0 FUN_140172ba0 body=59 status=ok
// SIG undefined FUN_140172ba0(void)

void FUN_140172ba0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b720,0);
  FGenericPlatformString::Memcpy(DAT_14629b720,L"GenericFailure",0x1e);
  atexit((_func_5014 *)&LAB_143e53ff0);
  return;
}



// FUNCTION 140172be0 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b580,0);
  FGenericPlatformString::Memcpy(DAT_14629b580,L"GrenadeJsonData",0x20);
  atexit((_func_5014 *)&LAB_143e54010);
  return;
}



// FUNCTION 140172c20 FUN_140172c20 body=59 status=ok
// SIG undefined FUN_140172c20(void)

void FUN_140172c20(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b500,0);
  FGenericPlatformString::Memcpy(DAT_14629b500,L"GrenadeSerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e54030);
  return;
}



// FUNCTION 140172c60 FUN_140172c60 body=59 status=ok
// SIG undefined FUN_140172c60(void)

void FUN_140172c60(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b4a0,0);
  FGenericPlatformString::Memcpy(DAT_14629b4a0,L"GuardianRank",0x1a);
  atexit((_func_5014 *)&LAB_143e54050);
  return;
}



// FUNCTION 140172ca0 FUN_140172ca0 body=59 status=ok
// SIG undefined FUN_140172ca0(void)

void FUN_140172ca0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b480,0);
  FGenericPlatformString::Memcpy(DAT_14629b480,L"HasSelectedCharacter",0x2a);
  atexit((_func_5014 *)&LAB_143e54070);
  return;
}



// FUNCTION 140172ce0 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b5c0,0);
  FGenericPlatformString::Memcpy(DAT_14629b5c0,L"HeadCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e54090);
  return;
}



// FUNCTION 140172db0 FUN_140172db0 body=59 status=ok
// SIG undefined FUN_140172db0(void)

void FUN_140172db0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b740,0);
  FGenericPlatformString::Memcpy(DAT_14629b740,L"InvalidClientBeaconType",0x30);
  atexit((_func_5014 *)&LAB_143e540b0);
  return;
}



// FUNCTION 140172eb0 FUN_140172eb0 body=72 status=ok
// SIG undefined FUN_140172eb0(void)

void FUN_140172eb0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b7b0,0);
  FGenericPlatformString::Convert<char,wchar_t>(DAT_14629b7b0,5,&DAT_144532ec4,5,0x3f);
  atexit((_func_5014 *)&LAB_143e540d0);
  return;
}



// FUNCTION 140172f80 FUN_140172f80 body=59 status=ok
// SIG undefined FUN_140172f80(void)

void FUN_140172f80(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b3d0,0);
  FGenericPlatformString::Memcpy(DAT_14629b3d0,L"Level",0xc);
  atexit((_func_5014 *)&LAB_143e540f0);
  return;
}



// FUNCTION 140172fc0 FUN_140172fc0 body=59 status=ok
// SIG undefined FUN_140172fc0(void)

void FUN_140172fc0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b430,0);
  FGenericPlatformString::Memcpy(DAT_14629b430,L"LocationX",0x14);
  atexit((_func_5014 *)&LAB_143e54110);
  return;
}



// FUNCTION 140173000 FUN_140173000 body=59 status=ok
// SIG undefined FUN_140173000(void)

void FUN_140173000(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b440,0);
  FGenericPlatformString::Memcpy(DAT_14629b440,L"LocationY",0x14);
  atexit((_func_5014 *)&LAB_143e54130);
  return;
}



// FUNCTION 140173040 FUN_140173040 body=59 status=ok
// SIG undefined FUN_140173040(void)

void FUN_140173040(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b450,0);
  FGenericPlatformString::Memcpy(DAT_14629b450,L"LocationZ",0x14);
  atexit((_func_5014 *)&LAB_143e54150);
  return;
}



// FUNCTION 140173080 FUN_140173080 body=59 status=ok
// SIG undefined FUN_140173080(void)

void FUN_140173080(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b470,0);
  FGenericPlatformString::Memcpy(DAT_14629b470,L"LookingForHelp",0x1e);
  atexit((_func_5014 *)&LAB_143e54170);
  return;
}



// FUNCTION 1401730c0 FUN_1401730c0 body=59 status=ok
// SIG undefined FUN_1401730c0(void)

void FUN_1401730c0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b3e0,0);
  FGenericPlatformString::Memcpy(DAT_14629b3e0,L"MapName",0x10);
  atexit((_func_5014 *)&LAB_143e54190);
  return;
}



// FUNCTION 140173140 FUN_140173140 body=72 status=ok
// SIG undefined FUN_140173140(void)

void FUN_140173140(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b7c0,0);
  FGenericPlatformString::Convert<char,wchar_t>(DAT_14629b7c0,6,"Match",6,0x3f);
  atexit((_func_5014 *)&LAB_143e541b0);
  return;
}



// FUNCTION 140173190 FUN_140173190 body=59 status=ok
// SIG undefined FUN_140173190(void)

void FUN_140173190(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b760,0);
  FGenericPlatformString::Memcpy(DAT_14629b760,L"MismatchedBeaconNetVersions",0x38);
  atexit((_func_5014 *)&LAB_143e541d0);
  return;
}



// FUNCTION 1401731d0 FUN_1401731d0 body=59 status=ok
// SIG undefined FUN_1401731d0(void)

void FUN_1401731d0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b780,0);
  FGenericPlatformString::Memcpy(DAT_14629b780,L"MissingDLC",0x16);
  atexit((_func_5014 *)&LAB_143e541f0);
  return;
}



// FUNCTION 140173210 FUN_140173210 body=59 status=ok
// SIG undefined FUN_140173210(void)

void FUN_140173210(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b420,0);
  FGenericPlatformString::Memcpy(DAT_14629b420,L"MissionHash",0x18);
  atexit((_func_5014 *)&LAB_143e54210);
  return;
}



// FUNCTION 140173430 FUN_140173430 body=59 status=ok
// SIG undefined FUN_140173430(void)

void FUN_140173430(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b710,0);
  FGenericPlatformString::Memcpy(DAT_14629b710,L"NetworkFailure",0x1e);
  atexit((_func_5014 *)&LAB_143e54230);
  return;
}



// FUNCTION 1401734b0 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b730,0);
  FGenericPlatformString::Memcpy(DAT_14629b730,L"NotAcceptingReservations",0x32);
  atexit((_func_5014 *)&LAB_143e54250);
  return;
}



// FUNCTION 140173510 FUN_140173510 body=53 status=ok
// SIG undefined FUN_140173510(void)

void FUN_140173510(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_14686f618,L"Your Group Privacy has been changed to Local Only.",
             L"OakOnlineMessaging",L"ForcedLocalOnly_Body");
  atexit(FUN_143e54290);
  return;
}



// FUNCTION 140173550 FUN_140173550 body=53 status=ok
// SIG undefined FUN_140173550(void)

void FUN_140173550(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_14686f600,L"Player cannot play online. Switching network mode to play offline.",
             L"OakOnlineMessaging",L"ForcedLocalOnly_Header");
  atexit(FUN_143e542e0);
  return;
}



// FUNCTION 140173590 FUN_140173590 body=53 status=ok
// SIG undefined FUN_140173590(void)

void FUN_140173590(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_14686f4f8,L"Sorry, guest profiles are not supported.",L"OakOnlineMessaging",
             L"GuestWantsSplitscreenJoinText_Menu");
  atexit(FUN_143e54330);
  return;
}



// FUNCTION 1401735d0 FUN_1401735d0 body=53 status=ok
// SIG undefined FUN_1401735d0(void)

void FUN_1401735d0(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_14686f4e0,L"Guests not supported",L"OakOnlineMessaging",
             L"GuestWantsSplitscreenJoinTitle");
  atexit(FUN_143e54380);
  return;
}



// FUNCTION 140173610 FUN_140173610 body=53 status=ok
// SIG undefined FUN_140173610(void)

void FUN_140173610(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_14686f4c8,
             L"The connection to the host failed. Online service is disabled on your account due to parental control restrictions."
             ,L"OakOnlineMessaging",L"InviteFailedAgeRestriction_PS4");
  atexit(FUN_143e543d0);
  return;
}



// FUNCTION 140173650 FUN_140173650 body=53 status=ok
// SIG undefined FUN_140173650(void)

void FUN_140173650(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_14686f630,L"Your internet connection was lost.",L"OakOnlineMessaging",
             L"LinkLostErrorMessage");
  atexit(FUN_143e54420);
  return;
}



// FUNCTION 140173690 FUN_140173690 body=53 status=ok
// SIG undefined FUN_140173690(void)

void FUN_140173690(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_14686f5b8,L"Make sure your Ethernet cables are connected properly.",
             L"OakOnlineMessaging",L"LinkLost");
  atexit(FUN_143e54470);
  return;
}



// FUNCTION 1401736d0 FUN_1401736d0 body=53 status=ok
// SIG undefined FUN_1401736d0(void)

void FUN_1401736d0(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_14686f5a0,L"Connection Lost",L"OakOnlineMessaging",L"ServiceLostTitle");
  atexit(FUN_143e544c0);
  return;
}



// FUNCTION 140173710 FUN_140173710 body=53 status=ok
// SIG undefined FUN_140173710(void)

void FUN_140173710(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_14686f5e8,L"Your network connection is now active.",L"OakOnlineMessaging",
             L"LinkRestored");
  atexit(FUN_143e54510);
  return;
}



// FUNCTION 140173750 FUN_140173750 body=53 status=ok
// SIG undefined FUN_140173750(void)

void FUN_140173750(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_14686f5d0,L"Connection Active",L"OakOnlineMessaging",L"ServiceRestoredTitle");
  atexit(FUN_143e54560);
  return;
}



// FUNCTION 140173790 FUN_140173790 body=53 status=ok
// SIG undefined FUN_140173790(void)

void FUN_140173790(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_14686f648,L"Your connection to the online service was lost.",L"OakOnlineMessaging"
             ,L"LoginStatusErrorMessage");
  atexit(FUN_143e545b0);
  return;
}



// FUNCTION 1401737d0 FUN_1401737d0 body=53 status=ok
// SIG undefined FUN_1401737d0(void)

void FUN_1401737d0(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_14686f558,
             L"https://gearboxsoftware.zendesk.com/hc/en-us/articles/360033290092-General-Network-Troubleshooting"
             ,L"OakOnlineMessaging",L"NATHelpURL_Default");
  atexit(FUN_143e54600);
  return;
}



// FUNCTION 140173810 FUN_140173810 body=53 status=ok
// SIG undefined FUN_140173810(void)

void FUN_140173810(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_14686f570,L"Your connection to the online service was lost.",L"OakOnlineMessaging"
             ,L"ServiceLost");
  atexit(FUN_143e54650);
  return;
}



// FUNCTION 140173850 FUN_140173850 body=53 status=ok
// SIG undefined FUN_140173850(void)

void FUN_140173850(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_14686f588,L"You are now connected to the online service.",L"OakOnlineMessaging",
             L"ServiceRestored");
  atexit(FUN_143e546a0);
  return;
}



// FUNCTION 140173890 FUN_140173890 body=53 status=ok
// SIG undefined FUN_140173890(void)

void FUN_140173890(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_14686f510,L"Player does not have permission to play in the current game.",
             L"OakOnlineMessaging",L"SplitscreenJoinFailed_NoPermission");
  atexit(FUN_143e546f0);
  return;
}



// FUNCTION 1401738d0 FUN_1401738d0 body=53 status=ok
// SIG undefined FUN_1401738d0(void)

void FUN_1401738d0(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_14686f540,
             L"Your NAT type is Strict, which may prevent you from joining and hearing others. An Open NAT type is recommended for the best online experience. View information on changing NAT settings?"
             ,L"OakOnlineMessaging",L"dlgNATHelp_Body");
  atexit(FUN_143e54740);
  return;
}



// FUNCTION 140173910 FUN_140173910 body=53 status=ok
// SIG undefined FUN_140173910(void)

void FUN_140173910(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_14686f528,L"Strict NAT Detected",L"OakOnlineMessaging",L"dlgNATHelp_Header");
  atexit(FUN_143e54790);
  return;
}



// FUNCTION 140173950 FUN_140173950 body=72 status=ok
// SIG undefined FUN_140173950(void)

void FUN_140173950(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b7a0,0);
  FGenericPlatformString::Convert<char,wchar_t>(DAT_14629b7a0,6,"Party",6,0x3f);
  atexit((_func_5014 *)&LAB_143e547e0);
  return;
}



// FUNCTION 1401739a0 FUN_1401739a0 body=59 status=ok
// SIG undefined FUN_1401739a0(void)

void FUN_1401739a0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b400,0);
  FGenericPlatformString::Memcpy(DAT_14629b400,L"PartyPlayerCount",0x22);
  atexit((_func_5014 *)&LAB_143e54800);
  return;
}



// FUNCTION 140173ac0 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b410,0);
  FGenericPlatformString::Memcpy(DAT_14629b410,L"PlayerClassIdentifierHash",0x34);
  atexit((_func_5014 *)&LAB_143e54820);
  return;
}



// FUNCTION 140173b00 FUN_140173b00 body=59 status=ok
// SIG undefined FUN_140173b00(void)

void FUN_140173b00(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b6a0,0);
  FGenericPlatformString::Memcpy(DAT_14629b6a0,L"PlayerId",0x12);
  atexit((_func_5014 *)&LAB_143e54840);
  return;
}



// FUNCTION 140173c00 LocalizationSourceControlSettingsCategoryName'' body=59 status=ok
// SIG undefined LocalizationSourceControlSettingsCategoryName''(void)

void `dynamic_initializer_for_'FLocalizationSourceControlSettings::
     LocalizationSourceControlSettingsCategoryName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b670,0);
  FGenericPlatformString::Memcpy(DAT_14629b670,L"ProvingGroundChallengesCompletion",0x44);
  atexit((_func_5014 *)&LAB_143e54860);
  return;
}



// FUNCTION 140173c80 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b690,0);
  FGenericPlatformString::Memcpy(DAT_14629b690,L"RaidChallengesCompletion",0x32);
  atexit((_func_5014 *)&LAB_143e54880);
  return;
}



// FUNCTION 140173d00 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b390,0);
  FGenericPlatformString::Memcpy(DAT_14629b390,L"<img src=\"%s\"></>",0x24);
  atexit((_func_5014 *)&LAB_143e548a0);
  return;
}



// FUNCTION 140174020 FUN_140174020 body=59 status=ok
// SIG undefined FUN_140174020(void)

void FUN_140174020(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b3f0,0);
  FGenericPlatformString::Memcpy(DAT_14629b3f0,L"SessionId",0x14);
  atexit((_func_5014 *)&LAB_143e548c0);
  return;
}



// FUNCTION 140174060 FUN_140174060 body=59 status=ok
// SIG undefined FUN_140174060(void)

void FUN_140174060(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b590,0);
  FGenericPlatformString::Memcpy(DAT_14629b590,L"ShieldJsonData",0x1e);
  atexit((_func_5014 *)&LAB_143e548e0);
  return;
}



// FUNCTION 1401740a0 `dynamic_initializer_for_'StatusStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'StatusStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__StatusStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b510,0);
  FGenericPlatformString::Memcpy(DAT_14629b510,L"ShieldSerialNumber",0x26);
  atexit((_func_5014 *)&LAB_143e54900);
  return;
}



// FUNCTION 140174100 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b5e0,0);
  FGenericPlatformString::Memcpy(DAT_14629b5e0,L"SkinCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e54920);
  return;
}



// FUNCTION 140174140 FUN_140174140 body=59 status=ok
// SIG undefined FUN_140174140(void)

void FUN_140174140(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b680,0);
  FGenericPlatformString::Memcpy(DAT_14629b680,L"SlaughterChallengesCompletion",0x3c);
  atexit((_func_5014 *)&LAB_143e54940);
  return;
}



// FUNCTION 1401741c0 FUN_1401741c0 body=72 status=ok
// SIG undefined FUN_1401741c0(void)

void FUN_1401741c0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b7d0,0);
  FGenericPlatformString::Convert<char,wchar_t>(DAT_14629b7d0,9,"Spectate",9,0x3f);
  atexit((_func_5014 *)&LAB_143e54960);
  return;
}



// FUNCTION 140174280 FUN_140174280 body=59 status=ok
// SIG undefined FUN_140174280(void)

void FUN_140174280(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b4b0,0);
  FGenericPlatformString::Memcpy(DAT_14629b4b0,L"TimePlayed",0x16);
  atexit((_func_5014 *)&LAB_143e54980);
  return;
}



// FUNCTION 1401742e0 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b770,0);
  FGenericPlatformString::Memcpy(DAT_14629b770,L"UnexpectedControlMessage",0x32);
  atexit((_func_5014 *)&LAB_143e549a0);
  return;
}



// FUNCTION 1401743a0 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b2b8,0);
  FGenericPlatformString::Memcpy(DAT_14629b2b8,&DAT_144543020,8);
  atexit((_func_5014 *)&LAB_143e549c0);
  return;
}



// FUNCTION 1401743e0 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b540,0);
  FGenericPlatformString::Memcpy(DAT_14629b540,L"Weapon1JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e549e0);
  return;
}



// FUNCTION 140174420 FUN_140174420 body=59 status=ok
// SIG undefined FUN_140174420(void)

void FUN_140174420(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b4c0,0);
  FGenericPlatformString::Memcpy(DAT_14629b4c0,L"Weapon1SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e54a00);
  return;
}



// FUNCTION 140174460 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b550,0);
  FGenericPlatformString::Memcpy(DAT_14629b550,L"Weapon2JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e54a20);
  return;
}



// FUNCTION 1401744a0 FUN_1401744a0 body=59 status=ok
// SIG undefined FUN_1401744a0(void)

void FUN_1401744a0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b4d0,0);
  FGenericPlatformString::Memcpy(DAT_14629b4d0,L"Weapon2SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e54a40);
  return;
}



// FUNCTION 1401744e0 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b560,0);
  FGenericPlatformString::Memcpy(DAT_14629b560,L"Weapon3JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e54a60);
  return;
}



// FUNCTION 140174520 FUN_140174520 body=59 status=ok
// SIG undefined FUN_140174520(void)

void FUN_140174520(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b4e0,0);
  FGenericPlatformString::Memcpy(DAT_14629b4e0,L"Weapon3SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e54a80);
  return;
}



// FUNCTION 140174560 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b570,0);
  FGenericPlatformString::Memcpy(DAT_14629b570,L"Weapon4JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e54aa0);
  return;
}



// FUNCTION 1401745a0 FUN_1401745a0 body=59 status=ok
// SIG undefined FUN_1401745a0(void)

void FUN_1401745a0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b4f0,0);
  FGenericPlatformString::Memcpy(DAT_14629b4f0,L"Weapon4SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e54ac0);
  return;
}



// FUNCTION 1401745e0 FUN_1401745e0 body=59 status=ok
// SIG undefined FUN_1401745e0(void)

void FUN_1401745e0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b630,0);
  FGenericPlatformString::Memcpy(DAT_14629b630,L"WeaponChallengesCompletion",0x36);
  atexit((_func_5014 *)&LAB_143e54ae0);
  return;
}



// FUNCTION 1401746a0 EOL_String'' body=115 status=ok
// SIG undefined EOL_String''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FDlgConfigWriter::EOL_String__(void)

{
  undefined *puVar1;
  int iVar2;
  longlong lVar3;
  
  puVar1 = PTR_DAT_14629b2a0;
  if ((PTR_DAT_14629b2a0 != (undefined *)0x0) && (*(short *)PTR_DAT_14629b2a0 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(short *)(PTR_DAT_14629b2a0 + lVar3 * 2) != 0);
    iVar2 = (int)lVar3 + 1;
    _DAT_14686ee20 = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14686ee18,0);
    }
    FGenericPlatformString::Memcpy(DAT_14686ee18,puVar1,(longlong)iVar2 * 2);
  }
  atexit((_func_5014 *)&LAB_143e54b00);
  return;
}



// FUNCTION 140174720 FUN_140174720 body=59 status=ok
// SIG undefined FUN_140174720(void)

void FUN_140174720(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629bb20,0);
  FGenericPlatformString::Memcpy(DAT_14629bb20,L"AbilityData",0x18);
  atexit((_func_5014 *)&LAB_143e54b20);
  return;
}



// FUNCTION 140174800 FUN_140174800 body=59 status=ok
// SIG undefined FUN_140174800(void)

void FUN_140174800(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629bad0,0);
  FGenericPlatformString::Memcpy(DAT_14629bad0,L"ArtifactJsonData",0x22);
  atexit((_func_5014 *)&LAB_143e54b40);
  return;
}



// FUNCTION 140174840 FUN_140174840 body=59 status=ok
// SIG undefined FUN_140174840(void)

void FUN_140174840(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ba50,0);
  FGenericPlatformString::Memcpy(DAT_14629ba50,L"ArtifactSerialNumber",0x2a);
  atexit((_func_5014 *)&LAB_143e54b60);
  return;
}



// FUNCTION 140174880 `dynamic_initializer_for_'AwayText'' body=53 status=ok
// SIG undefined `dynamic_initializer_for_'AwayText''(void)

void EOnlinePresenceState::_dynamic_initializer_for__AwayText__(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_14686fc38,L"Away",L"OnlinePresence",L"Away");
  atexit(FUN_143e54b80);
  return;
}



// FUNCTION 1401748c0 FUN_1401748c0 body=53 status=ok
// SIG undefined FUN_1401748c0(void)

void FUN_1401748c0(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_14686fbf0,L"Please wait...",L"UIManager",L"BlockingSubtitle");
  atexit(FUN_143e54bd0);
  return;
}



// FUNCTION 140174900 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629baf0,0);
  FGenericPlatformString::Memcpy(DAT_14629baf0,L"BodyCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e54c20);
  return;
}



// FUNCTION 140174940 FUN_140174940 body=100 status=ok
// SIG undefined FUN_140174940(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140174940(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_14686fb20 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"RepGraph.DisableSpatialRebuilds",&DAT_14629b804,&DAT_144555d2c,0);
  _DAT_14686fb18 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e54c40);
  return;
}



// FUNCTION 1401749b0 FUN_1401749b0 body=100 status=ok
// SIG undefined FUN_1401749b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401749b0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_14686fb10 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"RepGraph.DynamicActorFrequencyBuckets",&DAT_14629b800,
                  &DAT_144555c3c,0);
  _DAT_14686fb08 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e54c90);
  return;
}



// FUNCTION 140174a20 FUN_140174a20 body=100 status=ok
// SIG undefined FUN_140174a20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140174a20(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_14686fae0 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"RepGraph.CellSize",&DAT_14629b7f4,&DAT_144555b9c,0);
  _DAT_14686fad8 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e54ce0);
  return;
}



// FUNCTION 140174a90 FUN_140174a90 body=100 status=ok
// SIG undefined FUN_140174a90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140174a90(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_14686fac0 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"RepGraph.DestructInfo.MaxDist",&DAT_14629b7f0,
                  L"Max distance (not squared) to rep destruct infos at",0);
  _DAT_14686fab8 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e54d30);
  return;
}



// FUNCTION 140174b00 FUN_140174b00 body=100 status=ok
// SIG undefined FUN_140174b00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140174b00(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_14686fad0 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"RepGraph.DisplayClientLevelStreaming",&DAT_14686f680,
                  &DAT_144555b44,0);
  _DAT_14686fac8 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e54d80);
  return;
}



// FUNCTION 140174b70 FUN_140174b70 body=100 status=ok
// SIG undefined FUN_140174b70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140174b70(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_14686faf0 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"RepGraph.SpatialBiasX",&DAT_14629b7f8,&DAT_144555bb4,0);
  _DAT_14686fae8 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e54dd0);
  return;
}



// FUNCTION 140174be0 FUN_140174be0 body=100 status=ok
// SIG undefined FUN_140174be0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140174be0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_14686fb00 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"RepGraph.SpatialBiasY",&DAT_14629b7fc,&DAT_144555bf4,0);
  _DAT_14686faf8 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e54e20);
  return;
}



// FUNCTION 140174c50 FUN_140174c50 body=59 status=ok
// SIG undefined FUN_140174c50(void)

void FUN_140174c50(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b980,0);
  FGenericPlatformString::Memcpy(DAT_14629b980,L"CanJoin",0x10);
  atexit((_func_5014 *)&LAB_143e54e70);
  return;
}



// FUNCTION 140174cd0 FUN_140174cd0 body=255 status=ok
// SIG undefined FUN_140174cd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140174cd0(void)

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
    *plVar1 = (longlong)&PTR_GetPoolName_144572808;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[2] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_144572850;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_14686fb40 =
       (**(code **)(*DAT_1468b1f88 + 0x70))
                 (DAT_1468b1f88,L"RepGraph.FrequencyBuckets",L"Resets frequency bucket count.",
                  &local_18,0);
  _DAT_14686fb38 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_140174dbe;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_140174dbe:
  atexit(FUN_143e54e90);
  return;
}



// FUNCTION 140174dd0 `dynamic_initializer_for_'ChatText'' body=53 status=ok
// SIG undefined `dynamic_initializer_for_'ChatText''(void)

void EOnlinePresenceState::_dynamic_initializer_for__ChatText__(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_14686fc80,L"Chat",L"OnlinePresence",L"Chat");
  atexit(FUN_143e54ee0);
  return;
}



// FUNCTION 140174e10 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629bac0,0);
  FGenericPlatformString::Memcpy(DAT_14629bac0,L"ClassItemJsonData",0x24);
  atexit((_func_5014 *)&LAB_143e54f30);
  return;
}



// FUNCTION 140174e50 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ba40,0);
  FGenericPlatformString::Memcpy(DAT_14629ba40,L"ClassItemSerialNumber",0x2c);
  atexit((_func_5014 *)&LAB_143e54f50);
  return;
}



// FUNCTION 140174ed0 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629bb70,0);
  FGenericPlatformString::Memcpy(DAT_14629bb70,L"CrewChallengesCompletion",0x32);
  atexit((_func_5014 *)&LAB_143e54f70);
  return;
}



// FUNCTION 140174f50 FUN_140174f50 body=59 status=ok
// SIG undefined FUN_140174f50(void)

void FUN_140174f50(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629bbd0,0);
  FGenericPlatformString::Memcpy(DAT_14629bbd0,L"DateTime",0x12);
  atexit((_func_5014 *)&LAB_143e54f90);
  return;
}



// FUNCTION 140174fb0 `dynamic_initializer_for_'DefaultAppIdKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'DefaultAppIdKey''(void)

void _dynamic_initializer_for__DefaultAppIdKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629bc50,0);
  FGenericPlatformString::Memcpy(DAT_14629bc50,L"AppId",0xc);
  atexit((_func_5014 *)&LAB_143e54fb0);
  return;
}



// FUNCTION 140174ff0 `dynamic_initializer_for_'DefaultPlatformKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'DefaultPlatformKey''(void)

void _dynamic_initializer_for__DefaultPlatformKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629bc60,0);
  FGenericPlatformString::Memcpy(DAT_14629bc60,L"Platform",0x12);
  atexit((_func_5014 *)&LAB_143e54fd0);
  return;
}



// FUNCTION 140175030 `dynamic_initializer_for_'DefaultPresenceKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'DefaultPresenceKey''(void)

void _dynamic_initializer_for__DefaultPresenceKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629bc40,0);
  FGenericPlatformString::Memcpy(DAT_14629bc40,L"RichPresence",0x1a);
  atexit((_func_5014 *)&LAB_143e54ff0);
  return;
}



// FUNCTION 140175110 `dynamic_initializer_for_'DoNotDisturbText'' body=53 status=ok
// SIG undefined `dynamic_initializer_for_'DoNotDisturbText''(void)

void EOnlinePresenceState::_dynamic_initializer_for__DoNotDisturbText__(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_14686fc68,L"DoNotDisturb",L"OnlinePresence",L"DoNotDisturb");
  atexit(FUN_143e55010);
  return;
}



// FUNCTION 140175170 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629bcc0,0);
  FGenericPlatformString::Memcpy(DAT_14629bcc0,L"DuplicateReservationFound",0x34);
  atexit((_func_5014 *)&LAB_143e55060);
  return;
}



// FUNCTION 1401751b0 `dynamic_initializer_for_'kResultStringCannotLoadPreset'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kResultStringCannotLoadPreset''(void)

void _dynamic_initializer_for__kResultStringCannotLoadPreset__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629bb10,0);
  FGenericPlatformString::Memcpy(DAT_14629bb10,L"EmoteCustomizationHash",0x2e);
  atexit((_func_5014 *)&LAB_143e55080);
  return;
}



// FUNCTION 1401751f0 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629bb60,0);
  FGenericPlatformString::Memcpy(DAT_14629bb60,L"EnemyChallengesCompletion",0x34);
  atexit((_func_5014 *)&LAB_143e550a0);
  return;
}



// FUNCTION 140175270 `dynamic_initializer_for_'kResultStringAssetDefAlrealdyLoaded'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kResultStringAssetDefAlrealdyLoaded''(void)

void _dynamic_initializer_for__kResultStringAssetDefAlrealdyLoaded__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629bb80,0);
  FGenericPlatformString::Memcpy(DAT_14629bb80,L"ExplorationChallengesCompletion",0x40);
  atexit((_func_5014 *)&LAB_143e550c0);
  return;
}



// FUNCTION 1401752b0 `dynamic_initializer_for_'ExtendedAwayText'' body=53 status=ok
// SIG undefined `dynamic_initializer_for_'ExtendedAwayText''(void)

void EOnlinePresenceState::_dynamic_initializer_for__ExtendedAwayText__(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_14686fc50,L"ExtendedAway",L"OnlinePresence",L"ExtendedAway");
  atexit(FUN_143e550e0);
  return;
}



// FUNCTION 140175370 FUN_140175370 body=59 status=ok
// SIG undefined FUN_140175370(void)

void FUN_140175370(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b9b0,0);
  FGenericPlatformString::Memcpy(DAT_14629b9b0,L"FriendActivityStatus",0x2a);
  atexit((_func_5014 *)&LAB_143e55130);
  return;
}



// FUNCTION 1401753b0 FUN_1401753b0 body=59 status=ok
// SIG undefined FUN_1401753b0(void)

void FUN_1401753b0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629bc20,0);
  FGenericPlatformString::Memcpy(DAT_14629bc20,L"ChallengeInfo",0x1c);
  atexit((_func_5014 *)&LAB_143e55150);
  return;
}



// FUNCTION 1401753f0 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629bc10,0);
  FGenericPlatformString::Memcpy(DAT_14629bc10,L"FriendCrewQuarterInfo",0x2c);
  atexit((_func_5014 *)&LAB_143e55170);
  return;
}



// FUNCTION 140175430 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629bbf0,0);
  FGenericPlatformString::Memcpy(DAT_14629bbf0,L"FriendLoadOutInfo",0x24);
  atexit((_func_5014 *)&LAB_143e55190);
  return;
}



// FUNCTION 140175470 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629bbe0,0);
  FGenericPlatformString::Memcpy(DAT_14629bbe0,L"FriendStatusPresenceInfo",0x32);
  atexit((_func_5014 *)&LAB_143e551b0);
  return;
}



// FUNCTION 1401754b0 FUN_1401754b0 body=59 status=ok
// SIG undefined FUN_1401754b0(void)

void FUN_1401754b0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629bc00,0);
  FGenericPlatformString::Memcpy(DAT_14629bc00,L"FriendSkillTreeInfo",0x28);
  atexit((_func_5014 *)&LAB_143e551d0);
  return;
}



// FUNCTION 1401754f0 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629bb30,0);
  FGenericPlatformString::Memcpy(DAT_14629bb30,L"FriendStatusThing",0x24);
  atexit((_func_5014 *)&LAB_143e551f0);
  return;
}



// FUNCTION 140175530 FUN_140175530 body=59 status=ok
// SIG undefined FUN_140175530(void)

void FUN_140175530(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629bb40,0);
  FGenericPlatformString::Memcpy(DAT_14629bb40,L"GameCompletion",0x1e);
  atexit((_func_5014 *)&LAB_143e55210);
  return;
}



// FUNCTION 140175570 FUN_140175570 body=59 status=ok
// SIG undefined FUN_140175570(void)

void FUN_140175570(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629bc90,0);
  FGenericPlatformString::Memcpy(DAT_14629bc90,L"GenericFailure",0x1e);
  atexit((_func_5014 *)&LAB_143e55230);
  return;
}



// FUNCTION 1401755b0 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629baa0,0);
  FGenericPlatformString::Memcpy(DAT_14629baa0,L"GrenadeJsonData",0x20);
  atexit((_func_5014 *)&LAB_143e55250);
  return;
}



// FUNCTION 1401755f0 FUN_1401755f0 body=59 status=ok
// SIG undefined FUN_1401755f0(void)

void FUN_1401755f0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ba20,0);
  FGenericPlatformString::Memcpy(DAT_14629ba20,L"GrenadeSerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e55270);
  return;
}



// FUNCTION 140175630 FUN_140175630 body=59 status=ok
// SIG undefined FUN_140175630(void)

void FUN_140175630(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b9c0,0);
  FGenericPlatformString::Memcpy(DAT_14629b9c0,L"GuardianRank",0x1a);
  atexit((_func_5014 *)&LAB_143e55290);
  return;
}



// FUNCTION 140175670 FUN_140175670 body=59 status=ok
// SIG undefined FUN_140175670(void)

void FUN_140175670(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b9a0,0);
  FGenericPlatformString::Memcpy(DAT_14629b9a0,L"HasSelectedCharacter",0x2a);
  atexit((_func_5014 *)&LAB_143e552b0);
  return;
}



// FUNCTION 1401756b0 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629bae0,0);
  FGenericPlatformString::Memcpy(DAT_14629bae0,L"HeadCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e552d0);
  return;
}



// FUNCTION 140175780 FUN_140175780 body=59 status=ok
// SIG undefined FUN_140175780(void)

void FUN_140175780(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629bcb0,0);
  FGenericPlatformString::Memcpy(DAT_14629bcb0,L"InvalidClientBeaconType",0x30);
  atexit((_func_5014 *)&LAB_143e552f0);
  return;
}



// FUNCTION 140175900 FUN_140175900 body=59 status=ok
// SIG undefined FUN_140175900(void)

void FUN_140175900(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b8f0,0);
  FGenericPlatformString::Memcpy(DAT_14629b8f0,L"Level",0xc);
  atexit((_func_5014 *)&LAB_143e55310);
  return;
}



// FUNCTION 140175940 FUN_140175940 body=59 status=ok
// SIG undefined FUN_140175940(void)

void FUN_140175940(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629bc30,0);
  FGenericPlatformString::Memcpy(DAT_14629bc30,&DAT_144555d7c,4);
  atexit((_func_5014 *)&LAB_143e55330);
  return;
}



// FUNCTION 140175980 FUN_140175980 body=59 status=ok
// SIG undefined FUN_140175980(void)

void FUN_140175980(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b950,0);
  FGenericPlatformString::Memcpy(DAT_14629b950,L"LocationX",0x14);
  atexit((_func_5014 *)&LAB_143e55350);
  return;
}



// FUNCTION 1401759c0 FUN_1401759c0 body=59 status=ok
// SIG undefined FUN_1401759c0(void)

void FUN_1401759c0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b960,0);
  FGenericPlatformString::Memcpy(DAT_14629b960,L"LocationY",0x14);
  atexit((_func_5014 *)&LAB_143e55370);
  return;
}



// FUNCTION 140175a00 FUN_140175a00 body=59 status=ok
// SIG undefined FUN_140175a00(void)

void FUN_140175a00(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b970,0);
  FGenericPlatformString::Memcpy(DAT_14629b970,L"LocationZ",0x14);
  atexit((_func_5014 *)&LAB_143e55390);
  return;
}



// FUNCTION 140175a40 FUN_140175a40 body=59 status=ok
// SIG undefined FUN_140175a40(void)

void FUN_140175a40(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b990,0);
  FGenericPlatformString::Memcpy(DAT_14629b990,L"LookingForHelp",0x1e);
  atexit((_func_5014 *)&LAB_143e553b0);
  return;
}



// FUNCTION 140175a80 FUN_140175a80 body=59 status=ok
// SIG undefined FUN_140175a80(void)

void FUN_140175a80(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b900,0);
  FGenericPlatformString::Memcpy(DAT_14629b900,L"MapName",0x10);
  atexit((_func_5014 *)&LAB_143e553d0);
  return;
}



// FUNCTION 140175b00 FUN_140175b00 body=59 status=ok
// SIG undefined FUN_140175b00(void)

void FUN_140175b00(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629bcd0,0);
  FGenericPlatformString::Memcpy(DAT_14629bcd0,L"MismatchedBeaconNetVersions",0x38);
  atexit((_func_5014 *)&LAB_143e553f0);
  return;
}



// FUNCTION 140175b40 FUN_140175b40 body=59 status=ok
// SIG undefined FUN_140175b40(void)

void FUN_140175b40(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629bcf0,0);
  FGenericPlatformString::Memcpy(DAT_14629bcf0,L"MissingDLC",0x16);
  atexit((_func_5014 *)&LAB_143e55410);
  return;
}



// FUNCTION 140175b80 FUN_140175b80 body=59 status=ok
// SIG undefined FUN_140175b80(void)

void FUN_140175b80(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b940,0);
  FGenericPlatformString::Memcpy(DAT_14629b940,L"MissionHash",0x18);
  atexit((_func_5014 *)&LAB_143e55430);
  return;
}



// FUNCTION 140175da0 FUN_140175da0 body=59 status=ok
// SIG undefined FUN_140175da0(void)

void FUN_140175da0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629bc80,0);
  FGenericPlatformString::Memcpy(DAT_14629bc80,L"NetworkFailure",0x1e);
  atexit((_func_5014 *)&LAB_143e55450);
  return;
}



// FUNCTION 140175e20 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629bca0,0);
  FGenericPlatformString::Memcpy(DAT_14629bca0,L"NotAcceptingReservations",0x32);
  atexit((_func_5014 *)&LAB_143e55470);
  return;
}



// FUNCTION 140175e60 `dynamic_initializer_for_'OfflineText'' body=53 status=ok
// SIG undefined `dynamic_initializer_for_'OfflineText''(void)

void EOnlinePresenceState::_dynamic_initializer_for__OfflineText__(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_14686fc20,L"Offline",L"OnlinePresence",L"Offline");
  atexit(FUN_143e55490);
  return;
}



// FUNCTION 140175ea0 `dynamic_initializer_for_'OnlineText'' body=53 status=ok
// SIG undefined `dynamic_initializer_for_'OnlineText''(void)

void EOnlinePresenceState::_dynamic_initializer_for__OnlineText__(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_14686fc08,L"Online",L"OnlinePresence",L"Online");
  atexit(FUN_143e554e0);
  return;
}



// FUNCTION 140175f00 FUN_140175f00 body=59 status=ok
// SIG undefined FUN_140175f00(void)

void FUN_140175f00(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b920,0);
  FGenericPlatformString::Memcpy(DAT_14629b920,L"PartyPlayerCount",0x22);
  atexit((_func_5014 *)&LAB_143e55530);
  return;
}



// FUNCTION 140176020 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b930,0);
  FGenericPlatformString::Memcpy(DAT_14629b930,L"PlayerClassIdentifierHash",0x34);
  atexit((_func_5014 *)&LAB_143e55550);
  return;
}



// FUNCTION 140176060 FUN_140176060 body=59 status=ok
// SIG undefined FUN_140176060(void)

void FUN_140176060(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629bbc0,0);
  FGenericPlatformString::Memcpy(DAT_14629bbc0,L"PlayerId",0x12);
  atexit((_func_5014 *)&LAB_143e55570);
  return;
}



// FUNCTION 1401760a0 `dynamic_initializer_for_'PresenceResourceKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PresenceResourceKey''(void)

void _dynamic_initializer_for__PresenceResourceKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629bc70,0);
  FGenericPlatformString::Memcpy(DAT_14629bc70,L"ResourceKey",0x18);
  atexit((_func_5014 *)&LAB_143e55590);
  return;
}



// FUNCTION 1401761a0 FUN_1401761a0 body=255 status=ok
// SIG undefined FUN_1401761a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401761a0(void)

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
    *plVar1 = (longlong)&PTR_GetPoolName_144572778;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[2] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_1445727c0;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_14686fb30 =
       (**(code **)(*DAT_1468b1f88 + 0x70))
                 (DAT_1468b1f88,L"RepGraph.PrintRouting",
                  L"Prints how actor classes are routed to RepGraph nodes",&local_18,0);
  _DAT_14686fb28 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_14017628e;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_14017628e:
  atexit(FUN_143e555b0);
  return;
}



// FUNCTION 1401762a0 LocalizationSourceControlSettingsCategoryName'' body=59 status=ok
// SIG undefined LocalizationSourceControlSettingsCategoryName''(void)

void `dynamic_initializer_for_'FLocalizationSourceControlSettings::
     LocalizationSourceControlSettingsCategoryName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629bb90,0);
  FGenericPlatformString::Memcpy(DAT_14629bb90,L"ProvingGroundChallengesCompletion",0x44);
  atexit((_func_5014 *)&LAB_143e55600);
  return;
}



// FUNCTION 140176320 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629bbb0,0);
  FGenericPlatformString::Memcpy(DAT_14629bbb0,L"RaidChallengesCompletion",0x32);
  atexit((_func_5014 *)&LAB_143e55620);
  return;
}



// FUNCTION 1401763a0 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b8b0,0);
  FGenericPlatformString::Memcpy(DAT_14629b8b0,L"<img src=\"%s\"></>",0x24);
  atexit((_func_5014 *)&LAB_143e55640);
  return;
}



// FUNCTION 1401766c0 FUN_1401766c0 body=59 status=ok
// SIG undefined FUN_1401766c0(void)

void FUN_1401766c0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b910,0);
  FGenericPlatformString::Memcpy(DAT_14629b910,L"SessionId",0x14);
  atexit((_func_5014 *)&LAB_143e55660);
  return;
}



// FUNCTION 140176700 FUN_140176700 body=59 status=ok
// SIG undefined FUN_140176700(void)

void FUN_140176700(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629bab0,0);
  FGenericPlatformString::Memcpy(DAT_14629bab0,L"ShieldJsonData",0x1e);
  atexit((_func_5014 *)&LAB_143e55680);
  return;
}



// FUNCTION 140176740 `dynamic_initializer_for_'StatusStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'StatusStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__StatusStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ba30,0);
  FGenericPlatformString::Memcpy(DAT_14629ba30,L"ShieldSerialNumber",0x26);
  atexit((_func_5014 *)&LAB_143e556a0);
  return;
}



// FUNCTION 1401767a0 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629bb00,0);
  FGenericPlatformString::Memcpy(DAT_14629bb00,L"SkinCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e556c0);
  return;
}



// FUNCTION 1401767e0 FUN_1401767e0 body=59 status=ok
// SIG undefined FUN_1401767e0(void)

void FUN_1401767e0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629bba0,0);
  FGenericPlatformString::Memcpy(DAT_14629bba0,L"SlaughterChallengesCompletion",0x3c);
  atexit((_func_5014 *)&LAB_143e556e0);
  return;
}



// FUNCTION 1401768d0 FUN_1401768d0 body=59 status=ok
// SIG undefined FUN_1401768d0(void)

void FUN_1401768d0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b9d0,0);
  FGenericPlatformString::Memcpy(DAT_14629b9d0,L"TimePlayed",0x16);
  atexit((_func_5014 *)&LAB_143e55720);
  return;
}



// FUNCTION 140176930 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629bce0,0);
  FGenericPlatformString::Memcpy(DAT_14629bce0,L"UnexpectedControlMessage",0x32);
  atexit((_func_5014 *)&LAB_143e55740);
  return;
}



// FUNCTION 1401769f0 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b820,0);
  FGenericPlatformString::Memcpy(DAT_14629b820,&DAT_14455cc98,8);
  atexit((_func_5014 *)&LAB_143e55760);
  return;
}



// FUNCTION 140176a30 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ba60,0);
  FGenericPlatformString::Memcpy(DAT_14629ba60,L"Weapon1JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e55780);
  return;
}



// FUNCTION 140176a70 FUN_140176a70 body=59 status=ok
// SIG undefined FUN_140176a70(void)

void FUN_140176a70(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b9e0,0);
  FGenericPlatformString::Memcpy(DAT_14629b9e0,L"Weapon1SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e557a0);
  return;
}



// FUNCTION 140176ab0 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ba70,0);
  FGenericPlatformString::Memcpy(DAT_14629ba70,L"Weapon2JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e557c0);
  return;
}



// FUNCTION 140176af0 FUN_140176af0 body=59 status=ok
// SIG undefined FUN_140176af0(void)

void FUN_140176af0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b9f0,0);
  FGenericPlatformString::Memcpy(DAT_14629b9f0,L"Weapon2SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e557e0);
  return;
}



// FUNCTION 140176b30 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ba80,0);
  FGenericPlatformString::Memcpy(DAT_14629ba80,L"Weapon3JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e55800);
  return;
}



// FUNCTION 140176b70 FUN_140176b70 body=59 status=ok
// SIG undefined FUN_140176b70(void)

void FUN_140176b70(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ba00,0);
  FGenericPlatformString::Memcpy(DAT_14629ba00,L"Weapon3SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e55820);
  return;
}


