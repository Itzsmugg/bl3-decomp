// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1401d9050 FUN_1401d9050 body=92 status=ok
// SIG undefined FUN_1401d9050(void)

void FUN_1401d9050(void)

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
    *puVar1 = &PTR_FUN_1448d7640;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"RecommendedFriendInviteStatus",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1401d9130 FUN_1401d9130 body=59 status=ok
// SIG undefined FUN_1401d9130(void)

void FUN_1401d9130(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14632b4e8,0);
  FGenericPlatformString::Memcpy(DAT_14632b4e8,L"SessionId",0x14);
  atexit((_func_5014 *)&LAB_143e6a950);
  return;
}



// FUNCTION 1401d9170 FUN_1401d9170 body=59 status=ok
// SIG undefined FUN_1401d9170(void)

void FUN_1401d9170(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14632b688,0);
  FGenericPlatformString::Memcpy(DAT_14632b688,L"ShieldJsonData",0x1e);
  atexit((_func_5014 *)&LAB_143e6a970);
  return;
}



// FUNCTION 1401d91b0 `dynamic_initializer_for_'StatusStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'StatusStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__StatusStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14632b608,0);
  FGenericPlatformString::Memcpy(DAT_14632b608,L"ShieldSerialNumber",0x26);
  atexit((_func_5014 *)&LAB_143e6a990);
  return;
}



// FUNCTION 1401d9210 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14632b6d8,0);
  FGenericPlatformString::Memcpy(DAT_14632b6d8,L"SkinCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e6a9b0);
  return;
}



// FUNCTION 1401d9250 FUN_1401d9250 body=59 status=ok
// SIG undefined FUN_1401d9250(void)

void FUN_1401d9250(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14632b778,0);
  FGenericPlatformString::Memcpy(DAT_14632b778,L"SlaughterChallengesCompletion",0x3c);
  atexit((_func_5014 *)&LAB_143e6a9d0);
  return;
}



// FUNCTION 1401d9340 FUN_1401d9340 body=59 status=ok
// SIG undefined FUN_1401d9340(void)

void FUN_1401d9340(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14632b5a8,0);
  FGenericPlatformString::Memcpy(DAT_14632b5a8,L"TimePlayed",0x16);
  atexit((_func_5014 *)&LAB_143e6a9f0);
  return;
}



// FUNCTION 1401d9420 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1463274c8,0);
  FGenericPlatformString::Memcpy(DAT_1463274c8,&DAT_1448c8388,8);
  atexit((_func_5014 *)&LAB_143e6aa10);
  return;
}



// FUNCTION 1401d9460 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14632b638,0);
  FGenericPlatformString::Memcpy(DAT_14632b638,L"Weapon1JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e6aa30);
  return;
}



// FUNCTION 1401d94a0 FUN_1401d94a0 body=59 status=ok
// SIG undefined FUN_1401d94a0(void)

void FUN_1401d94a0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14632b5b8,0);
  FGenericPlatformString::Memcpy(DAT_14632b5b8,L"Weapon1SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e6aa50);
  return;
}



// FUNCTION 1401d94e0 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14632b648,0);
  FGenericPlatformString::Memcpy(DAT_14632b648,L"Weapon2JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e6aa70);
  return;
}



// FUNCTION 1401d9520 FUN_1401d9520 body=59 status=ok
// SIG undefined FUN_1401d9520(void)

void FUN_1401d9520(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14632b5c8,0);
  FGenericPlatformString::Memcpy(DAT_14632b5c8,L"Weapon2SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e6aa90);
  return;
}



// FUNCTION 1401d9560 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14632b658,0);
  FGenericPlatformString::Memcpy(DAT_14632b658,L"Weapon3JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e6aab0);
  return;
}



// FUNCTION 1401d95a0 FUN_1401d95a0 body=59 status=ok
// SIG undefined FUN_1401d95a0(void)

void FUN_1401d95a0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14632b5d8,0);
  FGenericPlatformString::Memcpy(DAT_14632b5d8,L"Weapon3SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e6aad0);
  return;
}



// FUNCTION 1401d95e0 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14632b668,0);
  FGenericPlatformString::Memcpy(DAT_14632b668,L"Weapon4JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e6aaf0);
  return;
}



// FUNCTION 1401d9620 FUN_1401d9620 body=59 status=ok
// SIG undefined FUN_1401d9620(void)

void FUN_1401d9620(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14632b5e8,0);
  FGenericPlatformString::Memcpy(DAT_14632b5e8,L"Weapon4SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e6ab10);
  return;
}



// FUNCTION 1401d9660 FUN_1401d9660 body=59 status=ok
// SIG undefined FUN_1401d9660(void)

void FUN_1401d9660(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14632b728,0);
  FGenericPlatformString::Memcpy(DAT_14632b728,L"WeaponChallengesCompletion",0x36);
  atexit((_func_5014 *)&LAB_143e6ab30);
  return;
}



// FUNCTION 1401d96c0 FUN_1401d96c0 body=66 status=ok
// SIG undefined FUN_1401d96c0(void)

void FUN_1401d96c0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EDetailsPanelMode",1);
  UObjectCompiledInDeferEnum(FUN_14136e540,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401d9710 FUN_1401d9710 body=66 status=ok
// SIG undefined FUN_1401d9710(void)

void FUN_1401d9710(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGFxMainAndPauseMenuType",1);
  UObjectCompiledInDeferEnum(FUN_14136e580,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401d9760 FUN_1401d9760 body=66 status=ok
// SIG undefined FUN_1401d9760(void)

void FUN_1401d9760(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGFxMapMenuMapState",1);
  UObjectCompiledInDeferEnum(FUN_14136e5c0,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401d97b0 FUN_1401d97b0 body=66 status=ok
// SIG undefined FUN_1401d97b0(void)

void FUN_1401d97b0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGFxMapMenuProgressPanelState",1);
  UObjectCompiledInDeferEnum(FUN_14136e600,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401d9800 FUN_1401d9800 body=66 status=ok
// SIG undefined FUN_1401d9800(void)

void FUN_1401d9800(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGFxMapMenuState",1);
  UObjectCompiledInDeferEnum(FUN_14136e640,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401d9850 FUN_1401d9850 body=66 status=ok
// SIG undefined FUN_1401d9850(void)

void FUN_1401d9850(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ContextMenu",1);
  UObjectCompiledInDeferStruct
            (FMovieSceneEventRepeaterTemplate::StaticStruct,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401d98a0 FUN_1401d98a0 body=66 status=ok
// SIG undefined FUN_1401d98a0(void)

void FUN_1401d98a0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ContextMenuContextInfo",1);
  UObjectCompiledInDeferStruct
            (FMovieSceneActorReferenceKey::StaticStruct,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401d98f0 FUN_1401d98f0 body=66 status=ok
// SIG undefined FUN_1401d98f0(void)

void FUN_1401d98f0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"FriendIconNameAndIndex",1);
  UObjectCompiledInDeferStruct
            (FMovieSceneActorReferenceKey::StaticStruct,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401d9940 FUN_1401d9940 body=66 status=ok
// SIG undefined FUN_1401d9940(void)

void FUN_1401d9940(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GFxMapMenuStateInfo",1);
  UObjectCompiledInDeferStruct(FUN_14136ec30,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401d9990 FUN_1401d9990 body=66 status=ok
// SIG undefined FUN_1401d9990(void)

void FUN_1401d9990(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GFxMapMenu_Adjustment",1);
  UObjectCompiledInDeferStruct
            (FMovieSceneEventPayloadVariable::StaticStruct,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401d99e0 FUN_1401d99e0 body=66 status=ok
// SIG undefined FUN_1401d99e0(void)

void FUN_1401d99e0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"MenuItemButton",1);
  UObjectCompiledInDeferStruct(FUN_14136ecf0,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401d9a30 FUN_1401d9a30 body=66 status=ok
// SIG undefined FUN_1401d9a30(void)

void FUN_1401d9a30(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"RecommendedFriendInviteStatus",1);
  UObjectCompiledInDeferStruct(FUN_14136ed50,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401d9a80 FUN_1401d9a80 body=58 status=ok
// SIG undefined FUN_1401d9a80(void)

void FUN_1401d9a80(void)

{
  UObjectCompiledInDefer(FUN_141369a80,FUN_141369570,L"UGFxLoadGameMenu",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401d9ac0 FUN_1401d9ac0 body=58 status=ok
// SIG undefined FUN_1401d9ac0(void)

void FUN_1401d9ac0(void)

{
  UObjectCompiledInDefer
            (FUN_1413690f0,ALobbyBeaconPlayerState::GetPrivateStaticClass,L"UGFxLobbyWidget",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401d9b00 FUN_1401d9b00 body=58 status=ok
// SIG undefined FUN_1401d9b00(void)

void FUN_1401d9b00(void)

{
  UObjectCompiledInDefer
            (FUN_14136edb0,FUN_141369640,L"UGFxLobbyWidgetMatchmakingWidget",L"/Script/OakGame",0,0,
             0);
  return;
}



// FUNCTION 1401d9b40 FUN_1401d9b40 body=58 status=ok
// SIG undefined FUN_1401d9b40(void)

void FUN_1401d9b40(void)

{
  UObjectCompiledInDefer
            (FUN_14136ede0,UXGameInstance::GetPrivateStaticClass,L"UGFxLobbyWidgetPlayerItem",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401d9b80 FUN_1401d9b80 body=58 status=ok
// SIG undefined FUN_1401d9b80(void)

void FUN_1401d9b80(void)

{
  UObjectCompiledInDefer
            (FUN_141369e90,FUN_1413699d0,L"UGFxLobbyWidgetPlayerList",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401d9bc0 FUN_1401d9bc0 body=58 status=ok
// SIG undefined FUN_1401d9bc0(void)

void FUN_1401d9bc0(void)

{
  UObjectCompiledInDefer
            (FUN_14136aac0,FUN_14136a360,L"UGFxLobbyWidgetSettingList",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401d9c00 FUN_1401d9c00 body=58 status=ok
// SIG undefined FUN_1401d9c00(void)

void FUN_1401d9c00(void)

{
  UObjectCompiledInDefer
            (FUN_141368f20,UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass,
             L"UGFxLobbyWidgetSettingWidget",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401d9c40 FUN_1401d9c40 body=58 status=ok
// SIG undefined FUN_1401d9c40(void)

void FUN_1401d9c40(void)

{
  UObjectCompiledInDefer
            (FUN_14136ee10,FUN_141369040,L"UGFxLobbyWidgetSettingsButton",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401d9c80 FUN_1401d9c80 body=58 status=ok
// SIG undefined FUN_1401d9c80(void)

void FUN_1401d9c80(void)

{
  UObjectCompiledInDefer
            (FUN_14136ee40,URemnantGameInstance::GetPrivateStaticClass,
             L"UGFxLobbyWidgetSettingsCell",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401d9cc0 FUN_1401d9cc0 body=58 status=ok
// SIG undefined FUN_1401d9cc0(void)

void FUN_1401d9cc0(void)

{
  UObjectCompiledInDefer
            (FUN_14136ee70,UReplicationGraphNode_GridSpatialization2D::GetPrivateStaticClass,
             L"UGFxLobbyWidgetSettingsPanel",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401d9d00 FUN_1401d9d00 body=58 status=ok
// SIG undefined FUN_1401d9d00(void)

void FUN_1401d9d00(void)

{
  UObjectCompiledInDefer
            (FUN_14136eea0,FUN_141368f90,L"UGFxLobbyWidgetText",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401d9d40 FUN_1401d9d40 body=58 status=ok
// SIG undefined FUN_1401d9d40(void)

void FUN_1401d9d40(void)

{
  UObjectCompiledInDefer
            (FUN_14136eed0,UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass,
             L"UGFxLootModeSettingWidget",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401d9d80 FUN_1401d9d80 body=58 status=ok
// SIG undefined FUN_1401d9d80(void)

void FUN_1401d9d80(void)

{
  UObjectCompiledInDefer
            (FUN_1413696f0,AGMeshParameterCue::GetPrivateStaticClass,L"UGFxMainAndPauseBaseMenu",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401d9dc0 FUN_1401d9dc0 body=58 status=ok
// SIG undefined FUN_1401d9dc0(void)

void FUN_1401d9dc0(void)

{
  UObjectCompiledInDefer
            (FUN_14136a240,ALandscape::GetPrivateStaticClass,L"UGFxManagedWidget",L"/Script/OakGame"
             ,0,0,0);
  return;
}



// FUNCTION 1401d9e00 FUN_1401d9e00 body=58 status=ok
// SIG undefined FUN_1401d9e00(void)

void FUN_1401d9e00(void)

{
  UObjectCompiledInDefer
            (FUN_14136ef00,UUGGameViewportClient::StaticClass,L"UGFxMapDetailsPanel",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401d9e40 FUN_1401d9e40 body=58 status=ok
// SIG undefined FUN_1401d9e40(void)

void FUN_1401d9e40(void)

{
  UObjectCompiledInDefer(FUN_14136a410,FUN_14136aa10,L"UGFxMapMenu",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401d9e80 FUN_1401d9e80 body=58 status=ok
// SIG undefined FUN_1401d9e80(void)

void FUN_1401d9e80(void)

{
  UObjectCompiledInDefer
            (FUN_14136ef30,UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass,
             L"UGFxMapMenuCrosshair",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401d9ec0 FUN_1401d9ec0 body=58 status=ok
// SIG undefined FUN_1401d9ec0(void)

void FUN_1401d9ec0(void)

{
  UObjectCompiledInDefer
            (FUN_14136ef60,AReplicationGraphDebugActor::GetPrivateStaticClass,
             L"UGFxMapMenuFastTravelCell",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401d9f00 FUN_1401d9f00 body=58 status=ok
// SIG undefined FUN_1401d9f00(void)

void FUN_1401d9f00(void)

{
  UObjectCompiledInDefer
            (FUN_14136ef90,FUN_141369c80,L"UGFxMapMenuFriendCell",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401d9f40 FUN_1401d9f40 body=58 status=ok
// SIG undefined FUN_1401d9f40(void)

void FUN_1401d9f40(void)

{
  UObjectCompiledInDefer
            (FUN_14136efc0,URemnantGameInstance::GetPrivateStaticClass,L"UGFxMapMenuNavItemCell",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401d9f80 FUN_1401d9f80 body=58 status=ok
// SIG undefined FUN_1401d9f80(void)

void FUN_1401d9f80(void)

{
  UObjectCompiledInDefer
            (FUN_14136eff0,FUN_141369de0,L"UGFxMapMenuProgressPanel",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401d9fc0 FUN_1401d9fc0 body=58 status=ok
// SIG undefined FUN_1401d9fc0(void)

void FUN_1401d9fc0(void)

{
  UObjectCompiledInDefer
            (FUN_14136f020,FUN_141369f50,L"UGFxMapMenuZoomLevelInfo",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401da000 FUN_1401da000 body=58 status=ok
// SIG undefined FUN_1401da000(void)

void FUN_1401da000(void)

{
  UObjectCompiledInDefer
            (FUN_14136f050,UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass,
             L"UGFxPrivacySettingWidget",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401da040 FUN_1401da040 body=58 status=ok
// SIG undefined FUN_1401da040(void)

void FUN_1401da040(void)

{
  UObjectCompiledInDefer
            (FUN_14136f080,UPackageMapClient::GetPrivateStaticClass,L"ULootModeSettingList",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401da080 FUN_1401da080 body=58 status=ok
// SIG undefined FUN_1401da080(void)

void FUN_1401da080(void)

{
  UObjectCompiledInDefer
            (FUN_14136ab80,FUN_14136a870,L"UPrivacySettingList",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401da120 EOL_String'' body=115 status=ok
// SIG undefined EOL_String''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FDlgConfigWriter::EOL_String__(void)

{
  undefined *puVar1;
  int iVar2;
  longlong lVar3;
  
  puVar1 = PTR_DAT_1463274b0;
  if ((PTR_DAT_1463274b0 != (undefined *)0x0) && (*(short *)PTR_DAT_1463274b0 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(short *)(PTR_DAT_1463274b0 + lVar3 * 2) != 0);
    iVar2 = (int)lVar3 + 1;
    _DAT_146884998 = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146884990,0);
    }
    FGenericPlatformString::Memcpy(DAT_146884990,puVar1,(longlong)iVar2 * 2);
  }
  atexit((_func_5014 *)&LAB_143e6ab50);
  return;
}



// FUNCTION 1401da1a0 FUN_1401da1a0 body=59 status=ok
// SIG undefined FUN_1401da1a0(void)

void FUN_1401da1a0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146330ac8,0);
  FGenericPlatformString::Memcpy(DAT_146330ac8,L"AbilityData",0x18);
  atexit((_func_5014 *)&LAB_143e6ab70);
  return;
}



// FUNCTION 1401da280 FUN_1401da280 body=59 status=ok
// SIG undefined FUN_1401da280(void)

void FUN_1401da280(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146330a78,0);
  FGenericPlatformString::Memcpy(DAT_146330a78,L"ArtifactJsonData",0x22);
  atexit((_func_5014 *)&LAB_143e6ab90);
  return;
}



// FUNCTION 1401da2c0 FUN_1401da2c0 body=59 status=ok
// SIG undefined FUN_1401da2c0(void)

void FUN_1401da2c0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1463309f8,0);
  FGenericPlatformString::Memcpy(DAT_1463309f8,L"ArtifactSerialNumber",0x2a);
  atexit((_func_5014 *)&LAB_143e6abb0);
  return;
}



// FUNCTION 1401da520 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146330a98,0);
  FGenericPlatformString::Memcpy(DAT_146330a98,L"BodyCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e6abd0);
  return;
}



// FUNCTION 1401da560 FUN_1401da560 body=59 status=ok
// SIG undefined FUN_1401da560(void)

void FUN_1401da560(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146330928,0);
  FGenericPlatformString::Memcpy(DAT_146330928,L"CanJoin",0x10);
  atexit((_func_5014 *)&LAB_143e6abf0);
  return;
}



// FUNCTION 1401da5e0 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146330a68,0);
  FGenericPlatformString::Memcpy(DAT_146330a68,L"ClassItemJsonData",0x24);
  atexit((_func_5014 *)&LAB_143e6ac10);
  return;
}



// FUNCTION 1401da620 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1463309e8,0);
  FGenericPlatformString::Memcpy(DAT_1463309e8,L"ClassItemSerialNumber",0x2c);
  atexit((_func_5014 *)&LAB_143e6ac30);
  return;
}



// FUNCTION 1401da6a0 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146330b18,0);
  FGenericPlatformString::Memcpy(DAT_146330b18,L"CrewChallengesCompletion",0x32);
  atexit((_func_5014 *)&LAB_143e6ac50);
  return;
}



// FUNCTION 1401da720 FUN_1401da720 body=59 status=ok
// SIG undefined FUN_1401da720(void)

void FUN_1401da720(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146330b88,0);
  FGenericPlatformString::Memcpy(DAT_146330b88,L"DateTime",0x12);
  atexit((_func_5014 *)&LAB_143e6ac70);
  return;
}



// FUNCTION 1401da840 `dynamic_initializer_for_'kResultStringCannotLoadPreset'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kResultStringCannotLoadPreset''(void)

void _dynamic_initializer_for__kResultStringCannotLoadPreset__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146330ab8,0);
  FGenericPlatformString::Memcpy(DAT_146330ab8,L"EmoteCustomizationHash",0x2e);
  atexit((_func_5014 *)&LAB_143e6ac90);
  return;
}



// FUNCTION 1401da880 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146330b08,0);
  FGenericPlatformString::Memcpy(DAT_146330b08,L"EnemyChallengesCompletion",0x34);
  atexit((_func_5014 *)&LAB_143e6acb0);
  return;
}



// FUNCTION 1401da900 `dynamic_initializer_for_'kResultStringAssetDefAlrealdyLoaded'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kResultStringAssetDefAlrealdyLoaded''(void)

void _dynamic_initializer_for__kResultStringAssetDefAlrealdyLoaded__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146330b28,0);
  FGenericPlatformString::Memcpy(DAT_146330b28,L"ExplorationChallengesCompletion",0x40);
  atexit((_func_5014 *)&LAB_143e6acd0);
  return;
}



// FUNCTION 1401da9c0 FUN_1401da9c0 body=59 status=ok
// SIG undefined FUN_1401da9c0(void)

void FUN_1401da9c0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146330958,0);
  FGenericPlatformString::Memcpy(DAT_146330958,L"FriendActivityStatus",0x2a);
  atexit((_func_5014 *)&LAB_143e6acf0);
  return;
}



// FUNCTION 1401daa00 FUN_1401daa00 body=59 status=ok
// SIG undefined FUN_1401daa00(void)

void FUN_1401daa00(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146330bd8,0);
  FGenericPlatformString::Memcpy(DAT_146330bd8,L"ChallengeInfo",0x1c);
  atexit((_func_5014 *)&LAB_143e6ad10);
  return;
}



// FUNCTION 1401daa40 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146330bc8,0);
  FGenericPlatformString::Memcpy(DAT_146330bc8,L"FriendCrewQuarterInfo",0x2c);
  atexit((_func_5014 *)&LAB_143e6ad30);
  return;
}



// FUNCTION 1401daa80 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146330ba8,0);
  FGenericPlatformString::Memcpy(DAT_146330ba8,L"FriendLoadOutInfo",0x24);
  atexit((_func_5014 *)&LAB_143e6ad50);
  return;
}



// FUNCTION 1401daac0 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146330b98,0);
  FGenericPlatformString::Memcpy(DAT_146330b98,L"FriendStatusPresenceInfo",0x32);
  atexit((_func_5014 *)&LAB_143e6ad70);
  return;
}



// FUNCTION 1401dab00 FUN_1401dab00 body=59 status=ok
// SIG undefined FUN_1401dab00(void)

void FUN_1401dab00(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146330bb8,0);
  FGenericPlatformString::Memcpy(DAT_146330bb8,L"FriendSkillTreeInfo",0x28);
  atexit((_func_5014 *)&LAB_143e6ad90);
  return;
}



// FUNCTION 1401dab40 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146330ad8,0);
  FGenericPlatformString::Memcpy(DAT_146330ad8,L"FriendStatusThing",0x24);
  atexit((_func_5014 *)&LAB_143e6adb0);
  return;
}



// FUNCTION 1401dab80 FUN_1401dab80 body=59 status=ok
// SIG undefined FUN_1401dab80(void)

void FUN_1401dab80(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146330ae8,0);
  FGenericPlatformString::Memcpy(DAT_146330ae8,L"GameCompletion",0x1e);
  atexit((_func_5014 *)&LAB_143e6add0);
  return;
}



// FUNCTION 1401dabc0 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146330a48,0);
  FGenericPlatformString::Memcpy(DAT_146330a48,L"GrenadeJsonData",0x20);
  atexit((_func_5014 *)&LAB_143e6adf0);
  return;
}



// FUNCTION 1401dac00 FUN_1401dac00 body=59 status=ok
// SIG undefined FUN_1401dac00(void)

void FUN_1401dac00(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1463309c8,0);
  FGenericPlatformString::Memcpy(DAT_1463309c8,L"GrenadeSerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e6ae10);
  return;
}



// FUNCTION 1401dac40 FUN_1401dac40 body=59 status=ok
// SIG undefined FUN_1401dac40(void)

void FUN_1401dac40(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146330968,0);
  FGenericPlatformString::Memcpy(DAT_146330968,L"GuardianRank",0x1a);
  atexit((_func_5014 *)&LAB_143e6ae30);
  return;
}



// FUNCTION 1401dac80 FUN_1401dac80 body=59 status=ok
// SIG undefined FUN_1401dac80(void)

void FUN_1401dac80(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146330948,0);
  FGenericPlatformString::Memcpy(DAT_146330948,L"HasSelectedCharacter",0x2a);
  atexit((_func_5014 *)&LAB_143e6ae50);
  return;
}



// FUNCTION 1401dacc0 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146330a88,0);
  FGenericPlatformString::Memcpy(DAT_146330a88,L"HeadCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e6ae70);
  return;
}



// FUNCTION 1401daed0 FUN_1401daed0 body=59 status=ok
// SIG undefined FUN_1401daed0(void)

void FUN_1401daed0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146330898,0);
  FGenericPlatformString::Memcpy(DAT_146330898,L"Level",0xc);
  atexit((_func_5014 *)&LAB_143e6ae90);
  return;
}



// FUNCTION 1401daf10 FUN_1401daf10 body=59 status=ok
// SIG undefined FUN_1401daf10(void)

void FUN_1401daf10(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1463308f8,0);
  FGenericPlatformString::Memcpy(DAT_1463308f8,L"LocationX",0x14);
  atexit((_func_5014 *)&LAB_143e6aeb0);
  return;
}



// FUNCTION 1401daf50 FUN_1401daf50 body=59 status=ok
// SIG undefined FUN_1401daf50(void)

void FUN_1401daf50(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146330908,0);
  FGenericPlatformString::Memcpy(DAT_146330908,L"LocationY",0x14);
  atexit((_func_5014 *)&LAB_143e6aed0);
  return;
}



// FUNCTION 1401daf90 FUN_1401daf90 body=59 status=ok
// SIG undefined FUN_1401daf90(void)

void FUN_1401daf90(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146330918,0);
  FGenericPlatformString::Memcpy(DAT_146330918,L"LocationZ",0x14);
  atexit((_func_5014 *)&LAB_143e6aef0);
  return;
}



// FUNCTION 1401dafd0 FUN_1401dafd0 body=59 status=ok
// SIG undefined FUN_1401dafd0(void)

void FUN_1401dafd0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146330938,0);
  FGenericPlatformString::Memcpy(DAT_146330938,L"LookingForHelp",0x1e);
  atexit((_func_5014 *)&LAB_143e6af10);
  return;
}



// FUNCTION 1401db010 FUN_1401db010 body=59 status=ok
// SIG undefined FUN_1401db010(void)

void FUN_1401db010(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1463308a8,0);
  FGenericPlatformString::Memcpy(DAT_1463308a8,L"MapName",0x10);
  atexit((_func_5014 *)&LAB_143e6af30);
  return;
}



// FUNCTION 1401db090 FUN_1401db090 body=59 status=ok
// SIG undefined FUN_1401db090(void)

void FUN_1401db090(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1463308e8,0);
  FGenericPlatformString::Memcpy(DAT_1463308e8,L"MissionHash",0x18);
  atexit((_func_5014 *)&LAB_143e6af50);
  return;
}



// FUNCTION 1401db310 FUN_1401db310 body=59 status=ok
// SIG undefined FUN_1401db310(void)

void FUN_1401db310(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1463308c8,0);
  FGenericPlatformString::Memcpy(DAT_1463308c8,L"PartyPlayerCount",0x22);
  atexit((_func_5014 *)&LAB_143e6af70);
  return;
}



// FUNCTION 1401db430 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1463308d8,0);
  FGenericPlatformString::Memcpy(DAT_1463308d8,L"PlayerClassIdentifierHash",0x34);
  atexit((_func_5014 *)&LAB_143e6af90);
  return;
}



// FUNCTION 1401db470 FUN_1401db470 body=59 status=ok
// SIG undefined FUN_1401db470(void)

void FUN_1401db470(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146330b78,0);
  FGenericPlatformString::Memcpy(DAT_146330b78,L"PlayerId",0x12);
  atexit((_func_5014 *)&LAB_143e6afb0);
  return;
}



// FUNCTION 1401db570 LocalizationSourceControlSettingsCategoryName'' body=59 status=ok
// SIG undefined LocalizationSourceControlSettingsCategoryName''(void)

void `dynamic_initializer_for_'FLocalizationSourceControlSettings::
     LocalizationSourceControlSettingsCategoryName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146330b38,0);
  FGenericPlatformString::Memcpy(DAT_146330b38,L"ProvingGroundChallengesCompletion",0x44);
  atexit((_func_5014 *)&LAB_143e6afd0);
  return;
}



// FUNCTION 1401db5f0 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146330b58,0);
  FGenericPlatformString::Memcpy(DAT_146330b58,L"RaidChallengesCompletion",0x32);
  atexit((_func_5014 *)&LAB_143e6aff0);
  return;
}



// FUNCTION 1401db670 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146330b68,0);
  FGenericPlatformString::Memcpy(DAT_146330b68,L"<img src=\"%s\"></>",0x24);
  atexit((_func_5014 *)&LAB_143e6b010);
  return;
}



// FUNCTION 1401db7b0 FUN_1401db7b0 body=92 status=ok
// SIG undefined FUN_1401db7b0(void)

void FUN_1401db7b0(void)

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
    *puVar1 = &PTR_FUN_1448ed090;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GFxMenuTutorial",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1401db810 FUN_1401db810 body=92 status=ok
// SIG undefined FUN_1401db810(void)

void FUN_1401db810(void)

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
    *puVar1 = &PTR_FUN_1448ece60;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GFxMenuTutorialCollection",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1401db870 FUN_1401db870 body=92 status=ok
// SIG undefined FUN_1401db870(void)

void FUN_1401db870(void)

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
    *puVar1 = &PTR_FUN_1448ed1a8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GFxMenuTutorialSequence",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1401db8d0 FUN_1401db8d0 body=92 status=ok
// SIG undefined FUN_1401db8d0(void)

void FUN_1401db8d0(void)

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
    *puVar1 = &PTR_FUN_1448ed2c0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GFxMenuTutorialState",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1401db930 FUN_1401db930 body=92 status=ok
// SIG undefined FUN_1401db930(void)

void FUN_1401db930(void)

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
    *puVar1 = &PTR_FUN_1448ecf78;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GFxMenuTutorialTintClipData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1401db990 FUN_1401db990 body=92 status=ok
// SIG undefined FUN_1401db990(void)

void FUN_1401db990(void)

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
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    *puVar1 = &PTR_FUN_1448edaf0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GFxMinimapWidgetIcon",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1401db9f0 FUN_1401db9f0 body=92 status=ok
// SIG undefined FUN_1401db9f0(void)

void FUN_1401db9f0(void)

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
    *puVar1 = &PTR_FUN_1448ef7e8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GFxMissionLogMissionItem",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1401dba50 FUN_1401dba50 body=92 status=ok
// SIG undefined FUN_1401dba50(void)

void FUN_1401dba50(void)

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
    *puVar1 = &PTR_FUN_14403fd78;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"MinimapBoundingCircle",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1401dbab0 FUN_1401dbab0 body=92 status=ok
// SIG undefined FUN_1401dbab0(void)

void FUN_1401dbab0(void)

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
    *puVar1 = &PTR_FUN_1448ef6d0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"MissionLogEchoDeviceSettings",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1401dbb90 FUN_1401dbb90 body=59 status=ok
// SIG undefined FUN_1401dbb90(void)

void FUN_1401dbb90(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1463308b8,0);
  FGenericPlatformString::Memcpy(DAT_1463308b8,L"SessionId",0x14);
  atexit((_func_5014 *)&LAB_143e6b030);
  return;
}



// FUNCTION 1401dbbd0 FUN_1401dbbd0 body=59 status=ok
// SIG undefined FUN_1401dbbd0(void)

void FUN_1401dbbd0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146330a58,0);
  FGenericPlatformString::Memcpy(DAT_146330a58,L"ShieldJsonData",0x1e);
  atexit((_func_5014 *)&LAB_143e6b050);
  return;
}



// FUNCTION 1401dbc10 `dynamic_initializer_for_'StatusStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'StatusStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__StatusStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1463309d8,0);
  FGenericPlatformString::Memcpy(DAT_1463309d8,L"ShieldSerialNumber",0x26);
  atexit((_func_5014 *)&LAB_143e6b070);
  return;
}



// FUNCTION 1401dbc70 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146330aa8,0);
  FGenericPlatformString::Memcpy(DAT_146330aa8,L"SkinCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e6b090);
  return;
}



// FUNCTION 1401dbcb0 FUN_1401dbcb0 body=59 status=ok
// SIG undefined FUN_1401dbcb0(void)

void FUN_1401dbcb0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146330b48,0);
  FGenericPlatformString::Memcpy(DAT_146330b48,L"SlaughterChallengesCompletion",0x3c);
  atexit((_func_5014 *)&LAB_143e6b0b0);
  return;
}



// FUNCTION 1401dbda0 FUN_1401dbda0 body=59 status=ok
// SIG undefined FUN_1401dbda0(void)

void FUN_1401dbda0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146330978,0);
  FGenericPlatformString::Memcpy(DAT_146330978,L"TimePlayed",0x16);
  atexit((_func_5014 *)&LAB_143e6b0d0);
  return;
}



// FUNCTION 1401dbe80 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14632e938,0);
  FGenericPlatformString::Memcpy(DAT_14632e938,&DAT_1448e8428,8);
  atexit((_func_5014 *)&LAB_143e6b0f0);
  return;
}



// FUNCTION 1401dbec0 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146330a08,0);
  FGenericPlatformString::Memcpy(DAT_146330a08,L"Weapon1JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e6b110);
  return;
}



// FUNCTION 1401dbf00 FUN_1401dbf00 body=59 status=ok
// SIG undefined FUN_1401dbf00(void)

void FUN_1401dbf00(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146330988,0);
  FGenericPlatformString::Memcpy(DAT_146330988,L"Weapon1SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e6b130);
  return;
}



// FUNCTION 1401dbf40 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146330a18,0);
  FGenericPlatformString::Memcpy(DAT_146330a18,L"Weapon2JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e6b150);
  return;
}



// FUNCTION 1401dbf80 FUN_1401dbf80 body=59 status=ok
// SIG undefined FUN_1401dbf80(void)

void FUN_1401dbf80(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146330998,0);
  FGenericPlatformString::Memcpy(DAT_146330998,L"Weapon2SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e6b170);
  return;
}



// FUNCTION 1401dbfc0 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146330a28,0);
  FGenericPlatformString::Memcpy(DAT_146330a28,L"Weapon3JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e6b190);
  return;
}



// FUNCTION 1401dc000 FUN_1401dc000 body=59 status=ok
// SIG undefined FUN_1401dc000(void)

void FUN_1401dc000(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1463309a8,0);
  FGenericPlatformString::Memcpy(DAT_1463309a8,L"Weapon3SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e6b1b0);
  return;
}



// FUNCTION 1401dc040 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146330a38,0);
  FGenericPlatformString::Memcpy(DAT_146330a38,L"Weapon4JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e6b1d0);
  return;
}



// FUNCTION 1401dc080 FUN_1401dc080 body=59 status=ok
// SIG undefined FUN_1401dc080(void)

void FUN_1401dc080(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1463309b8,0);
  FGenericPlatformString::Memcpy(DAT_1463309b8,L"Weapon4SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e6b1f0);
  return;
}



// FUNCTION 1401dc0c0 FUN_1401dc0c0 body=59 status=ok
// SIG undefined FUN_1401dc0c0(void)

void FUN_1401dc0c0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146330af8,0);
  FGenericPlatformString::Memcpy(DAT_146330af8,L"WeaponChallengesCompletion",0x36);
  atexit((_func_5014 *)&LAB_143e6b210);
  return;
}



// FUNCTION 1401dc120 FUN_1401dc120 body=66 status=ok
// SIG undefined FUN_1401dc120(void)

void FUN_1401dc120(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGFxMenuTutorialDialogSize",1);
  UObjectCompiledInDeferEnum(FUN_141376740,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401dc170 FUN_1401dc170 body=66 status=ok
// SIG undefined FUN_1401dc170(void)

void FUN_1401dc170(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGFxMenuTutorialFocusDirection",1);
  UObjectCompiledInDeferEnum(FUN_141376780,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401dc1c0 FUN_1401dc1c0 body=66 status=ok
// SIG undefined FUN_1401dc1c0(void)

void FUN_1401dc1c0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGFxMinimapWidgetIconTrackedType",1);
  UObjectCompiledInDeferEnum(FUN_1413767c0,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401dc210 FUN_1401dc210 body=66 status=ok
// SIG undefined FUN_1401dc210(void)

void FUN_1401dc210(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGFxMissionLogFilterType",1);
  UObjectCompiledInDeferEnum(FUN_141376800,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401dc260 FUN_1401dc260 body=66 status=ok
// SIG undefined FUN_1401dc260(void)

void FUN_1401dc260(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGFxMissionLogMissionIconType",1);
  UObjectCompiledInDeferEnum(FUN_141376840,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401dc2b0 FUN_1401dc2b0 body=66 status=ok
// SIG undefined FUN_1401dc2b0(void)

void FUN_1401dc2b0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGFxMissionLogMissionItemType",1);
  UObjectCompiledInDeferEnum(FUN_141376880,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401dc300 FUN_1401dc300 body=66 status=ok
// SIG undefined FUN_1401dc300(void)

void FUN_1401dc300(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGFxMissionLogNavType",1);
  UObjectCompiledInDeferEnum(FUN_1413768c0,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401dc350 FUN_1401dc350 body=66 status=ok
// SIG undefined FUN_1401dc350(void)

void FUN_1401dc350(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EMissionDeliveryMenuDisplayState",1);
  UObjectCompiledInDeferEnum(FUN_141376900,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401dc3a0 FUN_1401dc3a0 body=66 status=ok
// SIG undefined FUN_1401dc3a0(void)

void FUN_1401dc3a0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GFxMenuTutorial",1);
  UObjectCompiledInDeferStruct
            (FMovieSceneActorReferenceKey::StaticStruct,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401dc3f0 FUN_1401dc3f0 body=66 status=ok
// SIG undefined FUN_1401dc3f0(void)

void FUN_1401dc3f0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GFxMenuTutorialCollection",1);
  UObjectCompiledInDeferStruct(FUN_141376b80,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401dc440 FUN_1401dc440 body=66 status=ok
// SIG undefined FUN_1401dc440(void)

void FUN_1401dc440(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GFxMenuTutorialSequence",1);
  UObjectCompiledInDeferStruct
            (FMovieSceneEventPayloadVariable::StaticStruct,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401dc490 FUN_1401dc490 body=66 status=ok
// SIG undefined FUN_1401dc490(void)

void FUN_1401dc490(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GFxMenuTutorialState",1);
  UObjectCompiledInDeferStruct(FUN_141376c40,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401dc4e0 FUN_1401dc4e0 body=66 status=ok
// SIG undefined FUN_1401dc4e0(void)

void FUN_1401dc4e0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GFxMenuTutorialTintClipData",1);
  UObjectCompiledInDeferStruct(FUN_141376ca0,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401dc530 FUN_1401dc530 body=66 status=ok
// SIG undefined FUN_1401dc530(void)

void FUN_1401dc530(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GFxMinimapWidgetIcon",1);
  UObjectCompiledInDeferStruct(FUN_141376d00,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401dc580 FUN_1401dc580 body=66 status=ok
// SIG undefined FUN_1401dc580(void)

void FUN_1401dc580(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GFxMissionLogMissionItem",1);
  UObjectCompiledInDeferStruct(FUN_141376d60,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401dc5d0 FUN_1401dc5d0 body=66 status=ok
// SIG undefined FUN_1401dc5d0(void)

void FUN_1401dc5d0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"MinimapBoundingCircle",1);
  UObjectCompiledInDeferStruct(FUN_141376dc0,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401dc620 FUN_1401dc620 body=66 status=ok
// SIG undefined FUN_1401dc620(void)

void FUN_1401dc620(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"MissionLogEchoDeviceSettings",1);
  UObjectCompiledInDeferStruct
            (FMovieSceneEventRepeaterTemplate::StaticStruct,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401dc670 FUN_1401dc670 body=58 status=ok
// SIG undefined FUN_1401dc670(void)

void FUN_1401dc670(void)

{
  UObjectCompiledInDefer
            (FUN_141374590,UInputKeySelector::GetPrivateStaticClass,L"UGFxMatchmakingHUDWidget",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401dc6b0 FUN_1401dc6b0 body=58 status=ok
// SIG undefined FUN_1401dc6b0(void)

void FUN_1401dc6b0(void)

{
  UObjectCompiledInDefer
            (FUN_141373a10,UEditableTextBoxWidgetStyle::StaticClass,L"UGFxMayhemMenu",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401dc6f0 FUN_1401dc6f0 body=58 status=ok
// SIG undefined FUN_1401dc6f0(void)

void FUN_1401dc6f0(void)

{
  UObjectCompiledInDefer(FUN_141376e80,FUN_141373770,L"UGFxMayhemMenuData",L"/Script/OakGame",0,0,0)
  ;
  return;
}



// FUNCTION 1401dc730 FUN_1401dc730 body=58 status=ok
// SIG undefined FUN_1401dc730(void)

void FUN_1401dc730(void)

{
  UObjectCompiledInDefer
            (FUN_141376eb0,UGameInstanceGameParameters::GetPrivateStaticClass,
             L"UGFxMayhemModifierListItem",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401dc770 FUN_1401dc770 body=58 status=ok
// SIG undefined FUN_1401dc770(void)

void FUN_1401dc770(void)

{
  UObjectCompiledInDefer
            (FUN_141376ee0,FUN_141374400,L"UGFxMenuDamageWidget",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401dc7b0 FUN_1401dc7b0 body=58 status=ok
// SIG undefined FUN_1401dc7b0(void)

void FUN_1401dc7b0(void)

{
  UObjectCompiledInDefer
            (FUN_141373c50,ACameraActor::GetPrivateStaticClass,L"UGFxMinimapWidget",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401dc7f0 FUN_1401dc7f0 body=58 status=ok
// SIG undefined FUN_1401dc7f0(void)

void FUN_1401dc7f0(void)

{
  UObjectCompiledInDefer
            (FUN_141376f10,AWeaponBase::GetPrivateStaticClass,
             L"UGFxMissionCompletedNotificationWidget",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401dc830 FUN_1401dc830 body=58 status=ok
// SIG undefined FUN_1401dc830(void)

void FUN_1401dc830(void)

{
  UObjectCompiledInDefer
            (FUN_141373170,AMobActorKuroko::GetPrivateStaticClass,L"UGFxMissionDeliveryMenu",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401dc870 FUN_1401dc870 body=58 status=ok
// SIG undefined FUN_1401dc870(void)

void FUN_1401dc870(void)

{
  UObjectCompiledInDefer
            (FUN_141376f40,FUN_1413734f0,L"UGFxMissionLogDescriptionBox",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401dc8b0 FUN_1401dc8b0 body=58 status=ok
// SIG undefined FUN_1401dc8b0(void)

void FUN_1401dc8b0(void)

{
  UObjectCompiledInDefer
            (FUN_141373fb0,AGFreezeCharacterCue::GetPrivateStaticClass,L"UGFxMissionLogMenu",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401dc8f0 FUN_1401dc8f0 body=58 status=ok
// SIG undefined FUN_1401dc8f0(void)

void FUN_1401dc8f0(void)

{
  UObjectCompiledInDefer
            (FUN_141376f70,URemnantGameInstance::GetPrivateStaticClass,
             L"UGFxMissionLogMenuDescriptionCell",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401dc930 FUN_1401dc930 body=58 status=ok
// SIG undefined FUN_1401dc930(void)

void FUN_1401dc930(void)

{
  UObjectCompiledInDefer
            (FUN_141376fa0,UMobBaseAnim::GetPrivateStaticClass,L"UGFxMissionLogMenuItemCell",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401dc970 FUN_1401dc970 body=58 status=ok
// SIG undefined FUN_1401dc970(void)

void FUN_1401dc970(void)

{
  UObjectCompiledInDefer
            (FUN_141376fd0,URemnantGameInstance::GetPrivateStaticClass,L"UGFxMissionLogNavCell",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401dc9b0 FUN_1401dc9b0 body=58 status=ok
// SIG undefined FUN_1401dc9b0(void)

void FUN_1401dc9b0(void)

{
  UObjectCompiledInDefer
            (FUN_141377000,URemnantGameInstance::GetPrivateStaticClass,L"UGFxMissionLogObjective",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401dc9f0 FUN_1401dc9f0 body=58 status=ok
// SIG undefined FUN_1401dc9f0(void)

void FUN_1401dc9f0(void)

{
  UObjectCompiledInDefer
            (FUN_141377030,URemnantGameInstance::GetPrivateStaticClass,L"UGFxSocialWidgetCell",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401dca30 FUN_1401dca30 body=58 status=ok
// SIG undefined FUN_1401dca30(void)

void FUN_1401dca30(void)

{
  UObjectCompiledInDefer
            (FUN_141377060,FUN_1413732e0,L"UGFxTutorialDialogWidget",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401dca70 FUN_1401dca70 body=58 status=ok
// SIG undefined FUN_1401dca70(void)

void FUN_1401dca70(void)

{
  UObjectCompiledInDefer(FUN_1413735a0,FUN_141373440,L"UGFxTutorialWidget",L"/Script/OakGame",0,0,0)
  ;
  return;
}



// FUNCTION 1401dcb10 EOL_String'' body=115 status=ok
// SIG undefined EOL_String''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FDlgConfigWriter::EOL_String__(void)

{
  undefined *puVar1;
  int iVar2;
  longlong lVar3;
  
  puVar1 = PTR_DAT_14632e920;
  if ((PTR_DAT_14632e920 != (undefined *)0x0) && (*(short *)PTR_DAT_14632e920 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(short *)(PTR_DAT_14632e920 + lVar3 * 2) != 0);
    iVar2 = (int)lVar3 + 1;
    _DAT_146885238 = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146885230,0);
    }
    FGenericPlatformString::Memcpy(DAT_146885230,puVar1,(longlong)iVar2 * 2);
  }
  atexit((_func_5014 *)&LAB_143e6b230);
  return;
}



// FUNCTION 1401dcb90 FUN_1401dcb90 body=59 status=ok
// SIG undefined FUN_1401dcb90(void)

void FUN_1401dcb90(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1463355b0,0);
  FGenericPlatformString::Memcpy(DAT_1463355b0,L"AbilityData",0x18);
  atexit((_func_5014 *)&LAB_143e6b250);
  return;
}



// FUNCTION 1401dcc70 FUN_1401dcc70 body=59 status=ok
// SIG undefined FUN_1401dcc70(void)

void FUN_1401dcc70(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146335560,0);
  FGenericPlatformString::Memcpy(DAT_146335560,L"ArtifactJsonData",0x22);
  atexit((_func_5014 *)&LAB_143e6b270);
  return;
}



// FUNCTION 1401dccb0 FUN_1401dccb0 body=59 status=ok
// SIG undefined FUN_1401dccb0(void)

void FUN_1401dccb0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1463354e0,0);
  FGenericPlatformString::Memcpy(DAT_1463354e0,L"ArtifactSerialNumber",0x2a);
  atexit((_func_5014 *)&LAB_143e6b290);
  return;
}



// FUNCTION 1401dce90 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146335580,0);
  FGenericPlatformString::Memcpy(DAT_146335580,L"BodyCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e6b2b0);
  return;
}



// FUNCTION 1401dced0 FUN_1401dced0 body=59 status=ok
// SIG undefined FUN_1401dced0(void)

void FUN_1401dced0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146335410,0);
  FGenericPlatformString::Memcpy(DAT_146335410,L"CanJoin",0x10);
  atexit((_func_5014 *)&LAB_143e6b2d0);
  return;
}



// FUNCTION 1401dcf50 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146335550,0);
  FGenericPlatformString::Memcpy(DAT_146335550,L"ClassItemJsonData",0x24);
  atexit((_func_5014 *)&LAB_143e6b2f0);
  return;
}



// FUNCTION 1401dcf90 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1463354d0,0);
  FGenericPlatformString::Memcpy(DAT_1463354d0,L"ClassItemSerialNumber",0x2c);
  atexit((_func_5014 *)&LAB_143e6b310);
  return;
}



// FUNCTION 1401dd010 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146335600,0);
  FGenericPlatformString::Memcpy(DAT_146335600,L"CrewChallengesCompletion",0x32);
  atexit((_func_5014 *)&LAB_143e6b330);
  return;
}



// FUNCTION 1401dd090 FUN_1401dd090 body=59 status=ok
// SIG undefined FUN_1401dd090(void)

void FUN_1401dd090(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146335660,0);
  FGenericPlatformString::Memcpy(DAT_146335660,L"DateTime",0x12);
  atexit((_func_5014 *)&LAB_143e6b350);
  return;
}



// FUNCTION 1401dd1b0 `dynamic_initializer_for_'kResultStringCannotLoadPreset'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kResultStringCannotLoadPreset''(void)

void _dynamic_initializer_for__kResultStringCannotLoadPreset__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1463355a0,0);
  FGenericPlatformString::Memcpy(DAT_1463355a0,L"EmoteCustomizationHash",0x2e);
  atexit((_func_5014 *)&LAB_143e6b370);
  return;
}



// FUNCTION 1401dd1f0 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1463355f0,0);
  FGenericPlatformString::Memcpy(DAT_1463355f0,L"EnemyChallengesCompletion",0x34);
  atexit((_func_5014 *)&LAB_143e6b390);
  return;
}



// FUNCTION 1401dd270 `dynamic_initializer_for_'kResultStringAssetDefAlrealdyLoaded'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kResultStringAssetDefAlrealdyLoaded''(void)

void _dynamic_initializer_for__kResultStringAssetDefAlrealdyLoaded__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146335610,0);
  FGenericPlatformString::Memcpy(DAT_146335610,L"ExplorationChallengesCompletion",0x40);
  atexit((_func_5014 *)&LAB_143e6b3b0);
  return;
}



// FUNCTION 1401dd330 FUN_1401dd330 body=59 status=ok
// SIG undefined FUN_1401dd330(void)

void FUN_1401dd330(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146335440,0);
  FGenericPlatformString::Memcpy(DAT_146335440,L"FriendActivityStatus",0x2a);
  atexit((_func_5014 *)&LAB_143e6b3d0);
  return;
}



// FUNCTION 1401dd370 FUN_1401dd370 body=59 status=ok
// SIG undefined FUN_1401dd370(void)

void FUN_1401dd370(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1463356b0,0);
  FGenericPlatformString::Memcpy(DAT_1463356b0,L"ChallengeInfo",0x1c);
  atexit((_func_5014 *)&LAB_143e6b3f0);
  return;
}



// FUNCTION 1401dd3b0 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1463356a0,0);
  FGenericPlatformString::Memcpy(DAT_1463356a0,L"FriendCrewQuarterInfo",0x2c);
  atexit((_func_5014 *)&LAB_143e6b410);
  return;
}



// FUNCTION 1401dd3f0 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146335680,0);
  FGenericPlatformString::Memcpy(DAT_146335680,L"FriendLoadOutInfo",0x24);
  atexit((_func_5014 *)&LAB_143e6b430);
  return;
}



// FUNCTION 1401dd430 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146335670,0);
  FGenericPlatformString::Memcpy(DAT_146335670,L"FriendStatusPresenceInfo",0x32);
  atexit((_func_5014 *)&LAB_143e6b450);
  return;
}



// FUNCTION 1401dd470 FUN_1401dd470 body=59 status=ok
// SIG undefined FUN_1401dd470(void)

void FUN_1401dd470(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146335690,0);
  FGenericPlatformString::Memcpy(DAT_146335690,L"FriendSkillTreeInfo",0x28);
  atexit((_func_5014 *)&LAB_143e6b470);
  return;
}



// FUNCTION 1401dd4b0 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1463355c0,0);
  FGenericPlatformString::Memcpy(DAT_1463355c0,L"FriendStatusThing",0x24);
  atexit((_func_5014 *)&LAB_143e6b490);
  return;
}



// FUNCTION 1401dd4f0 FUN_1401dd4f0 body=59 status=ok
// SIG undefined FUN_1401dd4f0(void)

void FUN_1401dd4f0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1463355d0,0);
  FGenericPlatformString::Memcpy(DAT_1463355d0,L"GameCompletion",0x1e);
  atexit((_func_5014 *)&LAB_143e6b4b0);
  return;
}



// FUNCTION 1401dd530 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146335530,0);
  FGenericPlatformString::Memcpy(DAT_146335530,L"GrenadeJsonData",0x20);
  atexit((_func_5014 *)&LAB_143e6b4d0);
  return;
}



// FUNCTION 1401dd570 FUN_1401dd570 body=59 status=ok
// SIG undefined FUN_1401dd570(void)

void FUN_1401dd570(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1463354b0,0);
  FGenericPlatformString::Memcpy(DAT_1463354b0,L"GrenadeSerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e6b4f0);
  return;
}



// FUNCTION 1401dd5b0 FUN_1401dd5b0 body=59 status=ok
// SIG undefined FUN_1401dd5b0(void)

void FUN_1401dd5b0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146335450,0);
  FGenericPlatformString::Memcpy(DAT_146335450,L"GuardianRank",0x1a);
  atexit((_func_5014 *)&LAB_143e6b510);
  return;
}



// FUNCTION 1401dd5f0 FUN_1401dd5f0 body=59 status=ok
// SIG undefined FUN_1401dd5f0(void)

void FUN_1401dd5f0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146335430,0);
  FGenericPlatformString::Memcpy(DAT_146335430,L"HasSelectedCharacter",0x2a);
  atexit((_func_5014 *)&LAB_143e6b530);
  return;
}



// FUNCTION 1401dd630 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146335570,0);
  FGenericPlatformString::Memcpy(DAT_146335570,L"HeadCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e6b550);
  return;
}



// FUNCTION 1401dd840 FUN_1401dd840 body=59 status=ok
// SIG undefined FUN_1401dd840(void)

void FUN_1401dd840(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146335380,0);
  FGenericPlatformString::Memcpy(DAT_146335380,L"Level",0xc);
  atexit((_func_5014 *)&LAB_143e6b570);
  return;
}



// FUNCTION 1401dd880 FUN_1401dd880 body=59 status=ok
// SIG undefined FUN_1401dd880(void)

void FUN_1401dd880(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1463353e0,0);
  FGenericPlatformString::Memcpy(DAT_1463353e0,L"LocationX",0x14);
  atexit((_func_5014 *)&LAB_143e6b590);
  return;
}



// FUNCTION 1401dd8c0 FUN_1401dd8c0 body=59 status=ok
// SIG undefined FUN_1401dd8c0(void)

void FUN_1401dd8c0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1463353f0,0);
  FGenericPlatformString::Memcpy(DAT_1463353f0,L"LocationY",0x14);
  atexit((_func_5014 *)&LAB_143e6b5b0);
  return;
}



// FUNCTION 1401dd900 FUN_1401dd900 body=59 status=ok
// SIG undefined FUN_1401dd900(void)

void FUN_1401dd900(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146335400,0);
  FGenericPlatformString::Memcpy(DAT_146335400,L"LocationZ",0x14);
  atexit((_func_5014 *)&LAB_143e6b5d0);
  return;
}



// FUNCTION 1401dd940 FUN_1401dd940 body=59 status=ok
// SIG undefined FUN_1401dd940(void)

void FUN_1401dd940(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146335420,0);
  FGenericPlatformString::Memcpy(DAT_146335420,L"LookingForHelp",0x1e);
  atexit((_func_5014 *)&LAB_143e6b5f0);
  return;
}



// FUNCTION 1401dd980 FUN_1401dd980 body=59 status=ok
// SIG undefined FUN_1401dd980(void)

void FUN_1401dd980(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146335390,0);
  FGenericPlatformString::Memcpy(DAT_146335390,L"MapName",0x10);
  atexit((_func_5014 *)&LAB_143e6b610);
  return;
}



// FUNCTION 1401dda00 FUN_1401dda00 body=59 status=ok
// SIG undefined FUN_1401dda00(void)

void FUN_1401dda00(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1463353d0,0);
  FGenericPlatformString::Memcpy(DAT_1463353d0,L"MissionHash",0x18);
  atexit((_func_5014 *)&LAB_143e6b630);
  return;
}



// FUNCTION 1401ddc80 FUN_1401ddc80 body=59 status=ok
// SIG undefined FUN_1401ddc80(void)

void FUN_1401ddc80(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1463353b0,0);
  FGenericPlatformString::Memcpy(DAT_1463353b0,L"PartyPlayerCount",0x22);
  atexit((_func_5014 *)&LAB_143e6b650);
  return;
}



// FUNCTION 1401ddda0 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1463353c0,0);
  FGenericPlatformString::Memcpy(DAT_1463353c0,L"PlayerClassIdentifierHash",0x34);
  atexit((_func_5014 *)&LAB_143e6b670);
  return;
}



// FUNCTION 1401ddde0 FUN_1401ddde0 body=59 status=ok
// SIG undefined FUN_1401ddde0(void)

void FUN_1401ddde0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146335650,0);
  FGenericPlatformString::Memcpy(DAT_146335650,L"PlayerId",0x12);
  atexit((_func_5014 *)&LAB_143e6b690);
  return;
}



// FUNCTION 1401ddee0 LocalizationSourceControlSettingsCategoryName'' body=59 status=ok
// SIG undefined LocalizationSourceControlSettingsCategoryName''(void)

void `dynamic_initializer_for_'FLocalizationSourceControlSettings::
     LocalizationSourceControlSettingsCategoryName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146335620,0);
  FGenericPlatformString::Memcpy(DAT_146335620,L"ProvingGroundChallengesCompletion",0x44);
  atexit((_func_5014 *)&LAB_143e6b6b0);
  return;
}



// FUNCTION 1401ddf60 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146335640,0);
  FGenericPlatformString::Memcpy(DAT_146335640,L"RaidChallengesCompletion",0x32);
  atexit((_func_5014 *)&LAB_143e6b6d0);
  return;
}



// FUNCTION 1401ddfe0 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146335118,0);
  FGenericPlatformString::Memcpy(DAT_146335118,L"<img src=\"%s\"></>",0x24);
  atexit((_func_5014 *)&LAB_143e6b6f0);
  return;
}



// FUNCTION 1401de120 FUN_1401de120 body=92 status=ok
// SIG undefined FUN_1401de120(void)

void FUN_1401de120(void)

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
    *puVar1 = &PTR_FUN_1448fafb0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GFxMissionTrackerAnimationData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1401de180 FUN_1401de180 body=92 status=ok
// SIG undefined FUN_1401de180(void)

void FUN_1401de180(void)

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
    *puVar1 = &PTR_FUN_1448fb998;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GFxMissionTrackerRewardQueueData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1401de1e0 FUN_1401de1e0 body=92 status=ok
// SIG undefined FUN_1401de1e0(void)

void FUN_1401de1e0(void)

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
    *puVar1 = &PTR_FUN_1448fbab0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GFxMissionTrackerRewardSlot",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1401de240 FUN_1401de240 body=92 status=ok
// SIG undefined FUN_1401de240(void)

void FUN_1401de240(void)

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
    *puVar1 = &PTR_FUN_1448fd070;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"NameplateBarData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1401de320 FUN_1401de320 body=59 status=ok
// SIG undefined FUN_1401de320(void)

void FUN_1401de320(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1463353a0,0);
  FGenericPlatformString::Memcpy(DAT_1463353a0,L"SessionId",0x14);
  atexit((_func_5014 *)&LAB_143e6b710);
  return;
}



// FUNCTION 1401de360 FUN_1401de360 body=59 status=ok
// SIG undefined FUN_1401de360(void)

void FUN_1401de360(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146335540,0);
  FGenericPlatformString::Memcpy(DAT_146335540,L"ShieldJsonData",0x1e);
  atexit((_func_5014 *)&LAB_143e6b730);
  return;
}



// FUNCTION 1401de3a0 `dynamic_initializer_for_'StatusStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'StatusStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__StatusStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1463354c0,0);
  FGenericPlatformString::Memcpy(DAT_1463354c0,L"ShieldSerialNumber",0x26);
  atexit((_func_5014 *)&LAB_143e6b750);
  return;
}



// FUNCTION 1401de400 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146335590,0);
  FGenericPlatformString::Memcpy(DAT_146335590,L"SkinCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e6b770);
  return;
}



// FUNCTION 1401de440 FUN_1401de440 body=59 status=ok
// SIG undefined FUN_1401de440(void)

void FUN_1401de440(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146335630,0);
  FGenericPlatformString::Memcpy(DAT_146335630,L"SlaughterChallengesCompletion",0x3c);
  atexit((_func_5014 *)&LAB_143e6b790);
  return;
}



// FUNCTION 1401de530 FUN_1401de530 body=59 status=ok
// SIG undefined FUN_1401de530(void)

void FUN_1401de530(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146335460,0);
  FGenericPlatformString::Memcpy(DAT_146335460,L"TimePlayed",0x16);
  atexit((_func_5014 *)&LAB_143e6b7b0);
  return;
}



// FUNCTION 1401de610 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1463352b8,0);
  FGenericPlatformString::Memcpy(DAT_1463352b8,&DAT_1448f9330,8);
  atexit((_func_5014 *)&LAB_143e6b7d0);
  return;
}



// FUNCTION 1401de650 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1463354f0,0);
  FGenericPlatformString::Memcpy(DAT_1463354f0,L"Weapon1JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e6b7f0);
  return;
}



// FUNCTION 1401de690 FUN_1401de690 body=59 status=ok
// SIG undefined FUN_1401de690(void)

void FUN_1401de690(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146335470,0);
  FGenericPlatformString::Memcpy(DAT_146335470,L"Weapon1SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e6b810);
  return;
}



// FUNCTION 1401de6d0 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146335500,0);
  FGenericPlatformString::Memcpy(DAT_146335500,L"Weapon2JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e6b830);
  return;
}



// FUNCTION 1401de710 FUN_1401de710 body=59 status=ok
// SIG undefined FUN_1401de710(void)

void FUN_1401de710(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146335480,0);
  FGenericPlatformString::Memcpy(DAT_146335480,L"Weapon2SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e6b850);
  return;
}



// FUNCTION 1401de750 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146335510,0);
  FGenericPlatformString::Memcpy(DAT_146335510,L"Weapon3JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e6b870);
  return;
}



// FUNCTION 1401de790 FUN_1401de790 body=59 status=ok
// SIG undefined FUN_1401de790(void)

void FUN_1401de790(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146335490,0);
  FGenericPlatformString::Memcpy(DAT_146335490,L"Weapon3SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e6b890);
  return;
}



// FUNCTION 1401de7d0 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146335520,0);
  FGenericPlatformString::Memcpy(DAT_146335520,L"Weapon4JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e6b8b0);
  return;
}



// FUNCTION 1401de810 FUN_1401de810 body=59 status=ok
// SIG undefined FUN_1401de810(void)

void FUN_1401de810(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1463354a0,0);
  FGenericPlatformString::Memcpy(DAT_1463354a0,L"Weapon4SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e6b8d0);
  return;
}



// FUNCTION 1401de850 FUN_1401de850 body=59 status=ok
// SIG undefined FUN_1401de850(void)

void FUN_1401de850(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1463355e0,0);
  FGenericPlatformString::Memcpy(DAT_1463355e0,L"WeaponChallengesCompletion",0x36);
  atexit((_func_5014 *)&LAB_143e6b8f0);
  return;
}



// FUNCTION 1401de8b0 FUN_1401de8b0 body=66 status=ok
// SIG undefined FUN_1401de8b0(void)

void FUN_1401de8b0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EDLCMenuItemUsability",1);
  UObjectCompiledInDeferEnum(FUN_14137c4c0,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401de900 FUN_1401de900 body=66 status=ok
// SIG undefined FUN_1401de900(void)

void FUN_1401de900(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGFxMissionTrackerAnimationType",1);
  UObjectCompiledInDeferEnum(FUN_14137c500,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401de950 FUN_1401de950 body=66 status=ok
// SIG undefined FUN_1401de950(void)

void FUN_1401de950(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ENameplateStyle",1);
  UObjectCompiledInDeferEnum(FUN_14137c540,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401de9a0 FUN_1401de9a0 body=66 status=ok
// SIG undefined FUN_1401de9a0(void)

void FUN_1401de9a0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ETargetedNameplateState",1);
  UObjectCompiledInDeferEnum(FUN_14137c580,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401de9f0 FUN_1401de9f0 body=66 status=ok
// SIG undefined FUN_1401de9f0(void)

void FUN_1401de9f0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GFxMissionTrackerAnimationData",1);
  UObjectCompiledInDeferStruct
            (FMovieSceneEventRepeaterTemplate::StaticStruct,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401dea40 FUN_1401dea40 body=66 status=ok
// SIG undefined FUN_1401dea40(void)

void FUN_1401dea40(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GFxMissionTrackerRewardQueueData",1);
  UObjectCompiledInDeferStruct(FUN_14137c7d0,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401dea90 FUN_1401dea90 body=66 status=ok
// SIG undefined FUN_1401dea90(void)

void FUN_1401dea90(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GFxMissionTrackerRewardSlot",1);
  UObjectCompiledInDeferStruct
            (FMovieSceneCameraCutSectionTemplate::StaticStruct,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401deae0 FUN_1401deae0 body=66 status=ok
// SIG undefined FUN_1401deae0(void)

void FUN_1401deae0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"NameplateBarData",1);
  UObjectCompiledInDeferStruct(FUN_14137c890,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401deb30 FUN_1401deb30 body=58 status=ok
// SIG undefined FUN_1401deb30(void)

void FUN_1401deb30(void)

{
  UObjectCompiledInDefer
            (FUN_1413791d0,FUN_141379110,L"UGFxMissionTrackerHUDWidget",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401deb70 FUN_1401deb70 body=58 status=ok
// SIG undefined FUN_1401deb70(void)

void FUN_1401deb70(void)

{
  UObjectCompiledInDefer
            (FUN_14137c8f0,FUN_1413789f0,L"UGFxMissionTrackerSlot",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401debb0 FUN_1401debb0 body=58 status=ok
// SIG undefined FUN_1401debb0(void)

void FUN_1401debb0(void)

{
  UObjectCompiledInDefer
            (FUN_141379aa0,UCheckBox::GetPrivateStaticClass,L"UGFxModalTutorial",L"/Script/OakGame",
             0,0,0);
  return;
}



// FUNCTION 1401debf0 FUN_1401debf0 body=58 status=ok
// SIG undefined FUN_1401debf0(void)

void FUN_1401debf0(void)

{
  UObjectCompiledInDefer
            (FUN_14137c920,FUN_1413797d0,L"UGFxModalTutorialDataAsset",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401dec30 FUN_1401dec30 body=58 status=ok
// SIG undefined FUN_1401dec30(void)

void FUN_1401dec30(void)

{
  UObjectCompiledInDefer
            (FUN_1413786b0,UUGButton::GetPrivateStaticClass,L"UGFxMultiplayerMenu",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401dec70 FUN_1401dec70 body=58 status=ok
// SIG undefined FUN_1401dec70(void)

void FUN_1401dec70(void)

{
  UObjectCompiledInDefer
            (FUN_141378ed0,UXGameInstance::GetPrivateStaticClass,L"UGFxNameplate",L"/Script/OakGame"
             ,0,0,0);
  return;
}



// FUNCTION 1401decb0 FUN_1401decb0 body=58 status=ok
// SIG undefined FUN_1401decb0(void)

void FUN_1401decb0(void)

{
  UObjectCompiledInDefer(FUN_141379470,FUN_1413793a0,L"UGFxNetworkOptions",L"/Script/OakGame",0,0,0)
  ;
  return;
}



// FUNCTION 1401decf0 FUN_1401decf0 body=58 status=ok
// SIG undefined FUN_1401decf0(void)

void FUN_1401decf0(void)

{
  UObjectCompiledInDefer
            (FUN_14137c950,UMobBaseAnim::GetPrivateStaticClass,L"UGFxNewDLCCell",L"/Script/OakGame",
             0,0,0);
  return;
}



// FUNCTION 1401ded30 FUN_1401ded30 body=58 status=ok
// SIG undefined FUN_1401ded30(void)

void FUN_1401ded30(void)

{
  UObjectCompiledInDefer(FUN_141379c20,FUN_141379b60,L"UGFxNewDLCMenu",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401ded70 FUN_1401ded70 body=58 status=ok
// SIG undefined FUN_1401ded70(void)

void FUN_1401ded70(void)

{
  UObjectCompiledInDefer
            (FUN_14137c980,UPawnAction_Sequence::StaticClass,L"UGFxNewDLCMenuData",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401dedb0 FUN_1401dedb0 body=58 status=ok
// SIG undefined FUN_1401dedb0(void)

void FUN_1401dedb0(void)

{
  UObjectCompiledInDefer
            (FUN_14137c9b0,AReplicationGraphDebugActor::GetPrivateStaticClass,
             L"UGFxNewGameListButton",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401dedf0 FUN_1401dedf0 body=58 status=ok
// SIG undefined FUN_1401dedf0(void)

void FUN_1401dedf0(void)

{
  UObjectCompiledInDefer
            (FUN_141378b60,ACameraActor::GetPrivateStaticClass,L"UGFxNewGameSettings",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401dee30 FUN_1401dee30 body=58 status=ok
// SIG undefined FUN_1401dee30(void)

void FUN_1401dee30(void)

{
  UObjectCompiledInDefer
            (FUN_14137c9e0,FUN_1413787a0,L"UGbxGFxNewGameSettingsButton",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401deed0 EOL_String'' body=115 status=ok
// SIG undefined EOL_String''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FDlgConfigWriter::EOL_String__(void)

{
  undefined *puVar1;
  int iVar2;
  longlong lVar3;
  
  puVar1 = PTR_DAT_146335100;
  if ((PTR_DAT_146335100 != (undefined *)0x0) && (*(short *)PTR_DAT_146335100 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(short *)(PTR_DAT_146335100 + lVar3 * 2) != 0);
    iVar2 = (int)lVar3 + 1;
    _DAT_146885968 = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146885960,0);
    }
    FGenericPlatformString::Memcpy(DAT_146885960,puVar1,(longlong)iVar2 * 2);
  }
  atexit((_func_5014 *)&LAB_143e6b910);
  return;
}



// FUNCTION 1401dfbc0 FUN_1401dfbc0 body=92 status=ok
// SIG undefined FUN_1401dfbc0(void)

void FUN_1401dfbc0(void)

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
    *puVar1 = &PTR_FUN_14490c338;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GFxNotificationQueueListItem",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1401dfc20 FUN_1401dfc20 body=92 status=ok
// SIG undefined FUN_1401dfc20(void)

void FUN_1401dfc20(void)

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
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GFxOakMenuHelpers",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1401dfc80 FUN_1401dfc80 body=92 status=ok
// SIG undefined FUN_1401dfc80(void)

void FUN_1401dfc80(void)

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
    *puVar1 = &PTR_FUN_14490b5c8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"Transition",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1401dfed0 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146339828,0);
  FGenericPlatformString::Memcpy(DAT_146339828,&DAT_144908fb8,8);
  atexit((_func_5014 *)&LAB_143e6b930);
  return;
}



// FUNCTION 1401dff30 FUN_1401dff30 body=66 status=ok
// SIG undefined FUN_1401dff30(void)

void FUN_1401dff30(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GFxNotificationQueueListItem",1);
  UObjectCompiledInDeferStruct(FUN_1413831d0,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401dff80 FUN_1401dff80 body=66 status=ok
// SIG undefined FUN_1401dff80(void)

void FUN_1401dff80(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GFxOakMenuHelpers",1);
  UObjectCompiledInDeferStruct(FUN_141383230,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401dffd0 FUN_1401dffd0 body=66 status=ok
// SIG undefined FUN_1401dffd0(void)

void FUN_1401dffd0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"Transition",1);
  UObjectCompiledInDeferStruct(FUN_141383290,L"/Script/OakGame",*puVar1,0,0);
  return;
}



// FUNCTION 1401e0020 FUN_1401e0020 body=58 status=ok
// SIG undefined FUN_1401e0020(void)

void FUN_1401e0020(void)

{
  UObjectCompiledInDefer
            (FUN_141380110,FUN_14137fee0,L"UGFxLoadedNewsImage",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e0060 FUN_1401e0060 body=58 status=ok
// SIG undefined FUN_1401e0060(void)

void FUN_1401e0060(void)

{
  UObjectCompiledInDefer
            (FUN_141380260,ARemnantMeleeWeapon::StaticClass,L"UGFxNewMissionNotificationWidget",
             L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e00a0 FUN_1401e00a0 body=58 status=ok
// SIG undefined FUN_1401e00a0(void)

void FUN_1401e00a0(void)

{
  UObjectCompiledInDefer(FUN_1413804d0,FUN_141380420,L"UGFxNewUWidget",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e00e0 FUN_1401e00e0 body=58 status=ok
// SIG undefined FUN_1401e00e0(void)

void FUN_1401e00e0(void)

{
  UObjectCompiledInDefer
            (FUN_1413832f0,AGameModeBase::GetPrivateStaticClass,L"UGFxNewsItem",L"/Script/OakGame",0
             ,0,0);
  return;
}



// FUNCTION 1401e0120 FUN_1401e0120 body=58 status=ok
// SIG undefined FUN_1401e0120(void)

void FUN_1401e0120(void)

{
  UObjectCompiledInDefer(FUN_141383320,FUN_14137f1c0,L"UGFxNewsMenu",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e0160 FUN_1401e0160 body=58 status=ok
// SIG undefined FUN_1401e0160(void)

void FUN_1401e0160(void)

{
  UObjectCompiledInDefer
            (FUN_141383350,FUN_14137f110,L"UGFxNewsMenuItemDataAsset",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e01a0 FUN_1401e01a0 body=58 status=ok
// SIG undefined FUN_1401e01a0(void)

void FUN_1401e01a0(void)

{
  UObjectCompiledInDefer(FUN_14137ff90,FUN_14137f560,L"UGFxNewsWidget",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e01e0 FUN_1401e01e0 body=58 status=ok
// SIG undefined FUN_1401e01e0(void)

void FUN_1401e01e0(void)

{
  UObjectCompiledInDefer
            (FUN_1413800b0,UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass,
             L"UGFxNewsWidgetNavCircles",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e0220 FUN_1401e0220 body=58 status=ok
// SIG undefined FUN_1401e0220(void)

void FUN_1401e0220(void)

{
  UObjectCompiledInDefer
            (FUN_14137fff0,UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass,
             L"UGFxNewsWidgetWrapper",L"/Script/OakGame",0,0,0);
  return;
}



// FUNCTION 1401e0260 FUN_1401e0260 body=58 status=ok
// SIG undefined FUN_1401e0260(void)

void FUN_1401e0260(void)

{
  UObjectCompiledInDefer
            (FUN_1413807c0,UGNewsMenuItem::GetPrivateStaticClass,L"UGFxNotificationWidget",
             L"/Script/OakGame",0,0,0);
  return;
}


