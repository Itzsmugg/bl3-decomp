// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142f221c0 FUN_142f221c0 body=455 status=ok
// SIG undefined FUN_142f221c0(void)

undefined8 FUN_142f221c0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined8 *)(param_2 + 0xa8);
    do {
      *(undefined1 *)(puVar1 + -0x15) = *(undefined1 *)(param_3 + -0xa8 + (longlong)puVar1);
      *(undefined1 *)((longlong)puVar1 + -0xa7) =
           *(undefined1 *)(param_3 + -0xa7 + (longlong)puVar1);
      *(undefined1 *)((longlong)puVar1 + -0xa6) =
           *(undefined1 *)(param_3 + -0xa6 + (longlong)puVar1);
      *(undefined4 *)((longlong)puVar1 + -0xa4) =
           *(undefined4 *)(param_3 + -0xa4 + (longlong)puVar1);
      *(undefined4 *)(puVar1 + -0x14) = *(undefined4 *)((longlong)puVar1 + param_3 + -0xa0);
      *(undefined4 *)((longlong)puVar1 + -0x9c) =
           *(undefined4 *)((longlong)puVar1 + param_3 + -0x9c);
      *(undefined1 *)(puVar1 + -0x13) = *(undefined1 *)((longlong)puVar1 + param_3 + -0x98);
      FString::operator=(puVar1 + -0x12,param_3 + -0x90 + (longlong)puVar1);
      *(undefined1 *)(puVar1 + -0x10) = *(undefined1 *)((longlong)puVar1 + param_3 + -0x80);
      *(undefined1 *)((longlong)puVar1 + -0x7f) =
           *(undefined1 *)((longlong)puVar1 + param_3 + -0x7f);
      *(undefined1 *)((longlong)puVar1 + -0x7e) =
           *(undefined1 *)((longlong)puVar1 + param_3 + -0x7e);
      *(undefined1 *)((longlong)puVar1 + -0x7d) =
           *(undefined1 *)((longlong)puVar1 + param_3 + -0x7d);
      FString::operator=(puVar1 + -0xf,param_3 + -0x78 + (longlong)puVar1);
      FString::operator=(puVar1 + -0xd,param_3 + -0x68 + (longlong)puVar1);
      FString::operator=(puVar1 + -0xb,param_3 + -0x58 + (longlong)puVar1);
      *(undefined1 *)(puVar1 + -9) = *(undefined1 *)((longlong)puVar1 + param_3 + -0x48);
      *(undefined1 *)((longlong)puVar1 + -0x47) =
           *(undefined1 *)(param_3 + -0x47 + (longlong)puVar1);
      *(undefined1 *)((longlong)puVar1 + -0x46) =
           *(undefined1 *)(param_3 + -0x46 + (longlong)puVar1);
      *(undefined8 *)((longlong)puVar1 + -0x44) =
           *(undefined8 *)(param_3 + -0x44 + (longlong)puVar1);
      *(undefined1 *)((longlong)puVar1 + -0x3c) =
           *(undefined1 *)(param_3 + -0x3c + (longlong)puVar1);
      *(undefined1 *)((longlong)puVar1 + -0x3b) =
           *(undefined1 *)(param_3 + -0x3b + (longlong)puVar1);
      *(undefined1 *)((longlong)puVar1 + -0x3a) =
           *(undefined1 *)(param_3 + -0x3a + (longlong)puVar1);
      *(undefined1 *)((longlong)puVar1 + -0x39) =
           *(undefined1 *)(param_3 + -0x39 + (longlong)puVar1);
      *(undefined1 *)(puVar1 + -7) = *(undefined1 *)(param_3 + -0x38 + (longlong)puVar1);
      *(undefined1 *)((longlong)puVar1 + -0x37) =
           *(undefined1 *)(param_3 + -0x37 + (longlong)puVar1);
      puVar1[-6] = *(undefined8 *)(param_3 + -0x30 + (longlong)puVar1);
      puVar1[-5] = *(undefined8 *)(param_3 + -0x28 + (longlong)puVar1);
      *(undefined1 *)(puVar1 + -4) = *(undefined1 *)(param_3 + -0x20 + (longlong)puVar1);
      *(undefined1 *)((longlong)puVar1 + -0x1f) =
           *(undefined1 *)(param_3 + -0x1f + (longlong)puVar1);
      puVar1[-3] = *(undefined8 *)(param_3 + -0x18 + (longlong)puVar1);
      FString::operator=(puVar1 + -2,param_3 + -0x10 + (longlong)puVar1);
      *puVar1 = *(undefined8 *)(param_3 + (longlong)puVar1);
      puVar1[1] = *(undefined8 *)(param_3 + 8 + (longlong)puVar1);
      *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_3 + 0x10 + (longlong)puVar1);
      *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_3 + 0x14 + (longlong)puVar1);
      puVar1 = puVar1 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142f22390 FUN_142f22390 body=135 status=ok
// SIG undefined FUN_142f22390(void)

undefined8 FUN_142f22390(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined8 *)(param_2 + 0x10);
    do {
      FString::operator=(puVar1 + -2,param_3 + -0x10 + (longlong)puVar1);
      *puVar1 = *(undefined8 *)(param_3 + (longlong)puVar1);
      puVar1[1] = *(undefined8 *)(param_3 + 8 + (longlong)puVar1);
      *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_3 + 0x10 + (longlong)puVar1);
      *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_3 + 0x14 + (longlong)puVar1);
      *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_3 + 0x18 + (longlong)puVar1);
      *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_3 + 0x1c + (longlong)puVar1);
      puVar1 = puVar1 + 6;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142f22420 Copy body=71 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FMovieSceneTrackLabels>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=(param_2 + param_3,param_3);
      param_3 = param_3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142f22490 FUN_142f22490 body=93 status=ok
// SIG undefined FUN_142f22490(void)

void FUN_142f22490(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142f224f0 EEnemyType_StaticEnum body=55 status=ok
// SIG undefined EEnemyType_StaticEnum(void)

void EEnemyType_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b3f538 == 0) {
    uVar1 = Z_Construct_UPackage__Script_HighMoon();
    DAT_146b3f538 = GetStaticEnum(FUN_142f23430,uVar1,L"EGbxGFxMenuSwitchNavWidgetType");
  }
  return;
}



// FUNCTION 142f22530 EEnemyType_StaticEnum body=55 status=ok
// SIG undefined EEnemyType_StaticEnum(void)

void EEnemyType_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b3f548 == 0) {
    uVar1 = Z_Construct_UPackage__Script_HighMoon();
    DAT_146b3f548 = GetStaticEnum(FUN_142f23460,uVar1,L"EGbxGFxMenuSwitcherSubmenuInitReason");
  }
  return;
}



// FUNCTION 142f22570 EEnemyType_StaticEnum body=55 status=ok
// SIG undefined EEnemyType_StaticEnum(void)

void EEnemyType_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b3f540 == 0) {
    uVar1 = Z_Construct_UPackage__Script_HighMoon();
    DAT_146b3f540 = GetStaticEnum(FUN_142f23490,uVar1,L"EUIAudioSettingOperation");
  }
  return;
}



// FUNCTION 142f225b0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UInputKeySelector::GetPrivateStaticClass(void)

{
  if (DAT_146b3f9a0 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxGFxMenu",&DAT_146b3f9a0,
                  StaticRegisterNativesUInputKeySelector,0x680,0x10000000,0,L"Engine",&LAB_142f214a0
                  ,TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                   ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141331310,&LAB_140447700,0);
  }
  return DAT_146b3f9a0;
}



// FUNCTION 142f22660 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UPawnAction_Sequence::StaticClass(void)

{
  if (DAT_146b3f9b0 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxGFxMenuData",&DAT_146b3f9b0,FUN_140447710,0xc0,0x10000000,0,
                  L"Engine",&LAB_142f214c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142f2cf80,&LAB_140447700,0);
  }
  return DAT_146b3f9b0;
}



// FUNCTION 142f22710 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong USoUIInputKeySelector::GetPrivateStaticClass(void)

{
  if (DAT_146b3f9e8 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxGFxMenuSwitcher",&DAT_146b3f9e8,FUN_140447710,0x6a0,
                  0x10000000,0,L"Engine",FUN_142f214e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1412d9d00,&LAB_140447700,0);
  }
  return DAT_146b3f9e8;
}



// FUNCTION 142f227c0 FUN_142f227c0 body=162 status=ok
// SIG undefined FUN_142f227c0(void)

longlong FUN_142f227c0(void)

{
  if (DAT_146b3f9d8 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxGFxMenuSwitcherMenuData",&DAT_146b3f9d8,FUN_140447710,0xe0,
                  0x10000000,0,L"Engine",FUN_142f21540,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14131be10,&LAB_140447700,0);
  }
  return DAT_146b3f9d8;
}



// FUNCTION 142f22870 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGShrineUsable::GetPrivateStaticClass(void)

{
  if (DAT_146b3f9f8 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxGFxMenuSwitcherSubmenu",&DAT_146b3f9f8,FUN_140447710,0x690,
                  0x10000000,0,L"Engine",FUN_142f216c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1412d9d00,&LAB_140447700,0);
  }
  return DAT_146b3f9f8;
}



// FUNCTION 142f22920 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AEquipmentSkin::GetPrivateStaticClass(void)

{
  if (DAT_146b3fb88 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxGFxMovie",&DAT_146b3fb88,FUN_142f22d70,0x4e0,0x10000000,0,
                  L"Engine",&LAB_142f21860,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_142093e60,&LAB_140447700,0);
  }
  return DAT_146b3fb88;
}



// FUNCTION 142f229d0 FUN_142f229d0 body=162 status=ok
// SIG undefined FUN_142f229d0(void)

longlong FUN_142f229d0(void)

{
  if (DAT_146b3fba0 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxGFxMovieLoader",&DAT_146b3fba0,FUN_140447710,0x1a0,
                  0x10000008,0,L"Engine",FUN_142f21880,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141326ad0,&LAB_140447700,0);
  }
  return DAT_146b3fba0;
}



// FUNCTION 142f22a80 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UPlatformGameInstance::StaticClass(void)

{
  if (DAT_146b3fbd8 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxGFxObject",&DAT_146b3fbd8,FUN_142f22da0,0x170,0x10000008,0,
                  L"Engine",&LAB_142f218d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPlatformInterfaceBase::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b3fbd8;
}



// FUNCTION 142f22b30 FUN_142f22b30 body=162 status=ok
// SIG undefined FUN_142f22b30(void)

longlong FUN_142f22b30(void)

{
  if (DAT_146b3fc30 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxGFxPooledGridList",&DAT_146b3fc30,FUN_140447710,0x3c0,
                  0x10000008,0,L"Engine",&LAB_142f218f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UGameInstanceGameParameters::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b3fc30;
}



// FUNCTION 142f22be0 FUN_142f22be0 body=6 status=ok
// SIG undefined FUN_142f22be0(void)

undefined8 FUN_142f22be0(void)

{
  return 0x3361ad7d;
}



// FUNCTION 142f22bf0 FUN_142f22bf0 body=6 status=ok
// SIG undefined FUN_142f22bf0(void)

undefined8 FUN_142f22bf0(void)

{
  return 0xba206de;
}



// FUNCTION 142f22c00 FUN_142f22c00 body=6 status=ok
// SIG undefined FUN_142f22c00(void)

undefined8 FUN_142f22c00(void)

{
  return 0x480655a1;
}



// FUNCTION 142f22c10 FUN_142f22c10 body=6 status=ok
// SIG undefined FUN_142f22c10(void)

undefined8 FUN_142f22c10(void)

{
  return 0xe76b807a;
}



// FUNCTION 142f22c20 FUN_142f22c20 body=6 status=ok
// SIG undefined FUN_142f22c20(void)

undefined8 FUN_142f22c20(void)

{
  return 0x425eff90;
}



// FUNCTION 142f22c30 FUN_142f22c30 body=6 status=ok
// SIG undefined FUN_142f22c30(void)

undefined8 FUN_142f22c30(void)

{
  return 0xe5e5c87f;
}



// FUNCTION 142f22c40 FUN_142f22c40 body=6 status=ok
// SIG undefined FUN_142f22c40(void)

undefined8 FUN_142f22c40(void)

{
  return 0x3663063e;
}



// FUNCTION 142f22c50 FUN_142f22c50 body=6 status=ok
// SIG undefined FUN_142f22c50(void)

undefined8 FUN_142f22c50(void)

{
  return 0x1b2091ac;
}



// FUNCTION 142f22c60 FUN_142f22c60 body=6 status=ok
// SIG undefined FUN_142f22c60(void)

undefined8 FUN_142f22c60(void)

{
  return 0x7155cc34;
}



// FUNCTION 142f22c70 FUN_142f22c70 body=6 status=ok
// SIG undefined FUN_142f22c70(void)

undefined8 FUN_142f22c70(void)

{
  return 0xe7e67880;
}



// FUNCTION 142f22c80 FUN_142f22c80 body=6 status=ok
// SIG undefined FUN_142f22c80(void)

undefined8 FUN_142f22c80(void)

{
  return 0x1d87868;
}



// FUNCTION 142f22cf0 thunk_FUN_142f27da0 body=5 status=ok
// SIG undefined thunk_FUN_142f27da0(void)

void thunk_FUN_142f27da0(void)

{
  FUN_142f27da0();
  return;
}



// FUNCTION 142f22d00 thunk_FUN_142f2cf80 body=5 status=ok
// SIG undefined thunk_FUN_142f2cf80(void)

void thunk_FUN_142f2cf80(void)

{
  FUN_142f2cf80();
  return;
}



// FUNCTION 142f22d10 StaticRegisterNativesUInputKeySelector body=34 status=ok
// SIG undefined StaticRegisterNativesUInputKeySelector(void)

void UInputKeySelector::StaticRegisterNativesUInputKeySelector(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetFocusedWidget_1459aba30,8);
  return;
}



// FUNCTION 142f22d40 FUN_142f22d40 body=34 status=ok
// SIG undefined FUN_142f22d40(void)

void FUN_142f22d40(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142f20520();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnTabClicked_1459ac388,1);
  return;
}



// FUNCTION 142f22d70 FUN_142f22d70 body=34 status=ok
// SIG undefined FUN_142f22d70(void)

void FUN_142f22d70(void)

{
  undefined8 uVar1;
  
  uVar1 = AEquipmentSkin::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ApplyNewAudioSettings_1459ad020,0x17);
  return;
}



// FUNCTION 142f22da0 FUN_142f22da0 body=34 status=ok
// SIG undefined FUN_142f22da0(void)

void FUN_142f22da0(void)

{
  undefined8 uVar1;
  
  uVar1 = UPlatformGameInstance::StaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetBaseDisplayTransform_1459ad190,5);
  return;
}



// FUNCTION 142f22dd0 FUN_142f22dd0 body=82 status=ok
// SIG undefined FUN_142f22dd0(void)

void FUN_142f22dd0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3fa88 == 0) {
    uVar1 = FUN_142f22be0();
    uVar2 = Z_Construct_UPackage__Script_HighMoon();
    DAT_146b3fa88 = GetStaticStruct(FUN_142f234c0,uVar2,L"GbxGFxAnchor",0x18,uVar1);
  }
  return;
}



// FUNCTION 142f22e30 FUN_142f22e30 body=82 status=ok
// SIG undefined FUN_142f22e30(void)

void FUN_142f22e30(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3fbe8 == 0) {
    uVar1 = FUN_142f22bf0();
    uVar2 = Z_Construct_UPackage__Script_HighMoon();
    DAT_146b3fbe8 = GetStaticStruct(FUN_142f234f0,uVar2,L"GbxGFxListCellUpdateInfo",0x10,uVar1);
  }
  return;
}



// FUNCTION 142f22e90 FUN_142f22e90 body=82 status=ok
// SIG undefined FUN_142f22e90(void)

void FUN_142f22e90(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3fa10 == 0) {
    uVar1 = FUN_142f22c00();
    uVar2 = Z_Construct_UPackage__Script_HighMoon();
    DAT_146b3fa10 =
         GetStaticStruct(FUN_142f23520,uVar2,L"GbxGFxMenuSwitcherNavWidgetCustomItem",0x38,uVar1);
  }
  return;
}



// FUNCTION 142f22ef0 FUN_142f22ef0 body=82 status=ok
// SIG undefined FUN_142f22ef0(void)

void FUN_142f22ef0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3f9c0 == 0) {
    uVar1 = FUN_142f22c10();
    uVar2 = Z_Construct_UPackage__Script_HighMoon();
    DAT_146b3f9c0 = GetStaticStruct(FUN_142f23550,uVar2,L"GbxGFxMenuSwitcherSubmenuInfo",0x58,uVar1)
    ;
  }
  return;
}



// FUNCTION 142f22f50 FUN_142f22f50 body=82 status=ok
// SIG undefined FUN_142f22f50(void)

void FUN_142f22f50(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3fa60 == 0) {
    uVar1 = FUN_142f22c20();
    uVar2 = Z_Construct_UPackage__Script_HighMoon();
    DAT_146b3fa60 =
         GetStaticStruct(FUN_142f23580,uVar2,L"GbxGFxMouseCapturePanelMouseButtonInfo",0x1c,uVar1);
  }
  return;
}



// FUNCTION 142f22fb0 FUN_142f22fb0 body=82 status=ok
// SIG undefined FUN_142f22fb0(void)

void FUN_142f22fb0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3fa98 == 0) {
    uVar1 = FUN_142f22c30();
    uVar2 = Z_Construct_UPackage__Script_HighMoon();
    DAT_146b3fa98 = GetStaticStruct(FUN_142f235b0,uVar2,L"GbxGFxMovieClipAppendix",0x60,uVar1);
  }
  return;
}



// FUNCTION 142f23010 FUN_142f23010 body=82 status=ok
// SIG undefined FUN_142f23010(void)

void FUN_142f23010(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3fc18 == 0) {
    uVar1 = FUN_142f22c40();
    uVar2 = Z_Construct_UPackage__Script_HighMoon();
    DAT_146b3fc18 = GetStaticStruct(FUN_142f235e0,uVar2,L"GbxGFxPooledGridListConfig",0x30,uVar1);
  }
  return;
}



// FUNCTION 142f23070 FUN_142f23070 body=82 status=ok
// SIG undefined FUN_142f23070(void)

void FUN_142f23070(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3fc08 == 0) {
    uVar1 = FUN_142f22c50();
    uVar2 = Z_Construct_UPackage__Script_HighMoon();
    DAT_146b3fc08 =
         GetStaticStruct(FUN_142f23610,uVar2,L"GbxGFxPooledGridListFullConfig",0xc0,uVar1);
  }
  return;
}



// FUNCTION 142f230d0 FUN_142f230d0 body=82 status=ok
// SIG undefined FUN_142f230d0(void)

void FUN_142f230d0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3fbf8 == 0) {
    uVar1 = FUN_142f22c60();
    uVar2 = Z_Construct_UPackage__Script_HighMoon();
    DAT_146b3fbf8 = GetStaticStruct(FUN_142f23640,uVar2,L"GbxGFxPooledGridPoolInfo",0x30,uVar1);
  }
  return;
}



// FUNCTION 142f23130 FUN_142f23130 body=82 status=ok
// SIG undefined FUN_142f23130(void)

void FUN_142f23130(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3faa8 == 0) {
    uVar1 = FUN_142f22c70();
    uVar2 = Z_Construct_UPackage__Script_HighMoon();
    DAT_146b3faa8 = GetStaticStruct(FUN_142f23670,uVar2,L"GbxGFxmovieClipAppendixItem",0x10,uVar1);
  }
  return;
}



// FUNCTION 142f23190 FUN_142f23190 body=82 status=ok
// SIG undefined FUN_142f23190(void)

void FUN_142f23190(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3fab8 == 0) {
    uVar1 = FUN_142f22c80();
    uVar2 = Z_Construct_UPackage__Script_HighMoon();
    DAT_146b3fab8 = GetStaticStruct(FUN_142f236a0,uVar2,L"UIEventAudioPairRow",0x10,uVar1);
  }
  return;
}



// FUNCTION 142f231f0 FUN_142f231f0 body=47 status=ok
// SIG undefined FUN_142f231f0(void)

longlong FUN_142f231f0(void)

{
  if (DAT_146b3f9e0 == 0) {
    FUN_141786440(&DAT_146b3f9e0,&PTR_LAB_1459aaab0);
  }
  return DAT_146b3f9e0;
}



// FUNCTION 142f23220 FUN_142f23220 body=47 status=ok
// SIG undefined FUN_142f23220(void)

longlong FUN_142f23220(void)

{
  if (DAT_146b3f9d0 == 0) {
    FUN_141786440(&DAT_146b3f9d0,&PTR_LAB_1459aa540);
  }
  return DAT_146b3f9d0;
}



// FUNCTION 142f23250 FUN_142f23250 body=47 status=ok
// SIG undefined FUN_142f23250(void)

longlong FUN_142f23250(void)

{
  if (DAT_146b3fa20 == 0) {
    FUN_141786440(&DAT_146b3fa20,&PTR_GetPrivateStaticClass_1459a74f0);
  }
  return DAT_146b3fa20;
}



// FUNCTION 142f23280 FUN_142f23280 body=47 status=ok
// SIG undefined FUN_142f23280(void)

longlong FUN_142f23280(void)

{
  if (DAT_146b3f9f0 == 0) {
    FUN_141786440(&DAT_146b3f9f0,&PTR_LAB_1459aae10);
  }
  return DAT_146b3f9f0;
}



// FUNCTION 142f232b0 FUN_142f232b0 body=47 status=ok
// SIG undefined FUN_142f232b0(void)

longlong FUN_142f232b0(void)

{
  if (DAT_146b3fa48 == 0) {
    FUN_141786440(&DAT_146b3fa48,&PTR_FUN_1459a78e0);
  }
  return DAT_146b3fa48;
}



// FUNCTION 142f232e0 FUN_142f232e0 body=47 status=ok
// SIG undefined FUN_142f232e0(void)

longlong FUN_142f232e0(void)

{
  if (DAT_146b3fc28 == 0) {
    FUN_141786440(&DAT_146b3fc28,&PTR_thunk_FUN_142f22b30_1459a6fb0);
  }
  return DAT_146b3fc28;
}



// FUNCTION 142f23310 FUN_142f23310 body=47 status=ok
// SIG undefined FUN_142f23310(void)

longlong FUN_142f23310(void)

{
  if (DAT_146b3fbe0 == 0) {
    FUN_141786a30(&DAT_146b3fbe0,&PTR_Z_Construct_UPackage__Script_HighMoon_146749c10);
  }
  return DAT_146b3fbe0;
}



// FUNCTION 142f23340 FUN_142f23340 body=47 status=ok
// SIG undefined FUN_142f23340(void)

longlong FUN_142f23340(void)

{
  if (DAT_146b3fa00 == 0) {
    FUN_141786a30(&DAT_146b3fa00,&PTR_Z_Construct_UPackage__Script_HighMoon_1467477e0);
  }
  return DAT_146b3fa00;
}



// FUNCTION 142f23370 FUN_142f23370 body=47 status=ok
// SIG undefined FUN_142f23370(void)

longlong FUN_142f23370(void)

{
  if (DAT_146b3f948 == 0) {
    FUN_141786a30(&DAT_146b3f948,&PTR_Z_Construct_UPackage__Script_HighMoon_146745de0);
  }
  return DAT_146b3f948;
}



// FUNCTION 142f233a0 FUN_142f233a0 body=47 status=ok
// SIG undefined FUN_142f233a0(void)

longlong FUN_142f233a0(void)

{
  if (DAT_146b3f950 == 0) {
    FUN_141786a30(&DAT_146b3f950,&PTR_Z_Construct_UPackage__Script_HighMoon_146745ee0);
  }
  return DAT_146b3f950;
}



// FUNCTION 142f233d0 FUN_142f233d0 body=47 status=ok
// SIG undefined FUN_142f233d0(void)

longlong FUN_142f233d0(void)

{
  if (DAT_146b3fa58 == 0) {
    FUN_141786a30(&DAT_146b3fa58,&PTR_FUN_146747e30);
  }
  return DAT_146b3fa58;
}



// FUNCTION 142f23400 FUN_142f23400 body=47 status=ok
// SIG undefined FUN_142f23400(void)

longlong FUN_142f23400(void)

{
  if (DAT_146b3fb90 == 0) {
    FUN_141786a30(&DAT_146b3fb90,&PTR_FUN_146749730);
  }
  return DAT_146b3fb90;
}



// FUNCTION 142f23430 FUN_142f23430 body=47 status=ok
// SIG undefined FUN_142f23430(void)

longlong FUN_142f23430(void)

{
  if (DAT_146b3fa08 == 0) {
    FUN_1417866a0(&DAT_146b3fa08,&PTR_Z_Construct_UPackage__Script_HighMoon_14674a520);
  }
  return DAT_146b3fa08;
}



// FUNCTION 142f23460 FUN_142f23460 body=47 status=ok
// SIG undefined FUN_142f23460(void)

longlong FUN_142f23460(void)

{
  if (DAT_146b3f9b8 == 0) {
    FUN_1417866a0(&DAT_146b3f9b8,&PTR_Z_Construct_UPackage__Script_HighMoon_14674a4d0);
  }
  return DAT_146b3f9b8;
}



// FUNCTION 142f23490 FUN_142f23490 body=47 status=ok
// SIG undefined FUN_142f23490(void)

longlong FUN_142f23490(void)

{
  if (DAT_146b3fa80 == 0) {
    FUN_1417866a0(&DAT_146b3fa80,&PTR_Z_Construct_UPackage__Script_HighMoon_14674a570);
  }
  return DAT_146b3fa80;
}



// FUNCTION 142f234c0 FUN_142f234c0 body=47 status=ok
// SIG undefined FUN_142f234c0(void)

longlong FUN_142f234c0(void)

{
  if (DAT_146b3fa90 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3fa90,&PTR_Z_Construct_UPackage__Script_HighMoon_146747fa0);
  }
  return DAT_146b3fa90;
}



// FUNCTION 142f234f0 FUN_142f234f0 body=47 status=ok
// SIG undefined FUN_142f234f0(void)

longlong FUN_142f234f0(void)

{
  if (DAT_146b3fbf0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3fbf0,&PTR_Z_Construct_UPackage__Script_HighMoon_146749db0);
  }
  return DAT_146b3fbf0;
}



// FUNCTION 142f23520 FUN_142f23520 body=47 status=ok
// SIG undefined FUN_142f23520(void)

longlong FUN_142f23520(void)

{
  if (DAT_146b3fa18 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3fa18,&PTR_Z_Construct_UPackage__Script_HighMoon_146747910);
  }
  return DAT_146b3fa18;
}



// FUNCTION 142f23550 FUN_142f23550 body=47 status=ok
// SIG undefined FUN_142f23550(void)

longlong FUN_142f23550(void)

{
  if (DAT_146b3f9c8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3f9c8,&PTR_Z_Construct_UPackage__Script_HighMoon_1467474c0);
  }
  return DAT_146b3f9c8;
}



// FUNCTION 142f23580 FUN_142f23580 body=47 status=ok
// SIG undefined FUN_142f23580(void)

longlong FUN_142f23580(void)

{
  if (DAT_146b3fa68 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3fa68,&PTR_Z_Construct_UPackage__Script_HighMoon_146747e70);
  }
  return DAT_146b3fa68;
}



// FUNCTION 142f235b0 FUN_142f235b0 body=47 status=ok
// SIG undefined FUN_142f235b0(void)

longlong FUN_142f235b0(void)

{
  if (DAT_146b3faa0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3faa0,&PTR_Z_Construct_UPackage__Script_HighMoon_1467480e0);
  }
  return DAT_146b3faa0;
}



// FUNCTION 142f235e0 FUN_142f235e0 body=47 status=ok
// SIG undefined FUN_142f235e0(void)

longlong FUN_142f235e0(void)

{
  if (DAT_146b3fc20 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3fc20,&PTR_Z_Construct_UPackage__Script_HighMoon_14674a190);
  }
  return DAT_146b3fc20;
}



// FUNCTION 142f23610 FUN_142f23610 body=47 status=ok
// SIG undefined FUN_142f23610(void)

longlong FUN_142f23610(void)

{
  if (DAT_146b3fc10 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3fc10,&PTR_Z_Construct_UPackage__Script_HighMoon_146749fc0);
  }
  return DAT_146b3fc10;
}



// FUNCTION 142f23640 FUN_142f23640 body=47 status=ok
// SIG undefined FUN_142f23640(void)

longlong FUN_142f23640(void)

{
  if (DAT_146b3fc00 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3fc00,&PTR_Z_Construct_UPackage__Script_HighMoon_146749ef0);
  }
  return DAT_146b3fc00;
}



// FUNCTION 142f23670 FUN_142f23670 body=47 status=ok
// SIG undefined FUN_142f23670(void)

longlong FUN_142f23670(void)

{
  if (DAT_146b3fab0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3fab0,&PTR_Z_Construct_UPackage__Script_HighMoon_1467481a0);
  }
  return DAT_146b3fab0;
}



// FUNCTION 142f236a0 FUN_142f236a0 body=47 status=ok
// SIG undefined FUN_142f236a0(void)

longlong FUN_142f236a0(void)

{
  if (DAT_146b3fac0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3fac0,&PTR_Z_Construct_UPackage__Script_HighMoon_146748230);
  }
  return DAT_146b3fac0;
}



// FUNCTION 142f236d0 execOnOwnerEndPlay body=192 status=ok
// SIG undefined execOnOwnerEndPlay(void)

void UAIPerceptionComponent::execOnOwnerEndPlay(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [8];
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142eb0200(param_1,local_res20,local_res10[0]);
  return;
}



// FUNCTION 142f23790 FUN_142f23790 body=96 status=ok
// SIG undefined FUN_142f23790(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142f23790(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar2 = (undefined8 *)FUN_142eb5a30(param_1,local_48);
  uVar1 = puVar2[1];
  *param_3 = *puVar2;
  param_3[1] = uVar1;
  uVar1 = puVar2[3];
  param_3[2] = puVar2[2];
  param_3[3] = uVar1;
  uVar1 = puVar2[5];
  param_3[4] = puVar2[4];
  param_3[5] = uVar1;
  return;
}



// FUNCTION 142f23820 FUN_142f23820 body=44 status=ok
// SIG undefined FUN_142f23820(void)

void FUN_142f23820(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142eb65a0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f23850 FUN_142f23850 body=54 status=ok
// SIG undefined FUN_142f23850(void)

void FUN_142f23850(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [24];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_142eb7270(param_1,local_res10);
  *param_3 = *puVar1;
  return;
}



// FUNCTION 142f23890 FUN_142f23890 body=96 status=ok
// SIG undefined FUN_142f23890(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142f23890(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar2 = (undefined8 *)FUN_142eb74e0(param_1,local_48);
  uVar1 = puVar2[1];
  *param_3 = *puVar2;
  param_3[1] = uVar1;
  uVar1 = puVar2[3];
  param_3[2] = puVar2[2];
  param_3[3] = uVar1;
  uVar1 = puVar2[5];
  param_3[4] = puVar2[4];
  param_3[5] = uVar1;
  return;
}



// FUNCTION 142f23930 FUN_142f23930 body=44 status=ok
// SIG undefined FUN_142f23930(void)

void FUN_142f23930(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142eb75d0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f23960 FUN_142f23960 body=54 status=ok
// SIG undefined FUN_142f23960(void)

void FUN_142f23960(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [24];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_142eb83c0(param_1,local_res10);
  *param_3 = *puVar1;
  return;
}



// FUNCTION 142f239a0 FUN_142f239a0 body=54 status=ok
// SIG undefined FUN_142f239a0(void)

void FUN_142f239a0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [24];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_142eb8d60(param_1,local_res10);
  *param_3 = *puVar1;
  return;
}



// FUNCTION 142f239e0 FUN_142f239e0 body=54 status=ok
// SIG undefined FUN_142f239e0(void)

void FUN_142f239e0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [24];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_142eb8e90(param_1,local_res10);
  *param_3 = *puVar1;
  return;
}



// FUNCTION 142f23a20 FUN_142f23a20 body=143 status=ok
// SIG undefined FUN_142f23a20(void)

void FUN_142f23a20(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142ebe1b0(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f23ad0 FUN_142f23ad0 body=334 status=ok
// SIG undefined FUN_142f23ad0(void)

void FUN_142f23ad0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar6 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142ecc060(param_1,local_res10,puVar6);
  plVar5 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 142f23c20 FUN_142f23c20 body=280 status=ok
// SIG undefined FUN_142f23c20(void)

void FUN_142f23c20(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 local_30;
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  
  local_48 = 0;
  uStack_40 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  FWeakObjectPtr::operator=(local_28,0);
  FWeakObjectPtr::operator=(local_20,0);
  FWeakObjectPtr::operator=(local_18,0);
  FWeakObjectPtr::operator=(local_10,0);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar1 = local_28;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_38 = local_48;
  local_30 = 0;
  if (local_48 != 0) {
    local_30 = uStack_40;
  }
  FUN_142ecfd10(param_1,&local_38,puVar1);
  return;
}



// FUNCTION 142f23d40 FUN_142f23d40 body=397 status=ok
// SIG undefined FUN_142f23d40(void)

void FUN_142f23d40(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined8 local_20;
  
  local_38 = 0;
  uStack_30 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_40);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_28 = local_38;
  local_20 = 0;
  if (local_38 != 0) {
    local_20 = uStack_30;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142ecfdd0(param_1,&local_28,local_40,local_48,local_res20,local_res10[0]);
  return;
}



// FUNCTION 142f23ed0 FUN_142f23ed0 body=207 status=ok
// SIG undefined FUN_142f23ed0(void)

void FUN_142f23ed0(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined4 local_res10 [2];
  undefined1 local_res20 [8];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  puVar1 = local_res20;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142f0a9b0(param_1,local_res10[0],puVar1);
  return;
}



// FUNCTION 142f23fa0 FUN_142f23fa0 body=292 status=ok
// SIG undefined FUN_142f23fa0(void)

void FUN_142f23fa0(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  void *_Src;
  undefined1 uVar1;
  longlong lVar2;
  undefined8 local_res8;
  void *local_38;
  ulonglong local_30;
  void *local_28;
  int local_20;
  undefined4 local_1c;
  
  local_res8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res8);
  }
  local_38 = (void *)0x0;
  local_30 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  _Src = local_38;
  local_28 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar2 = (longlong)(int)local_30;
  local_20 = (int)local_30;
  if ((int)local_30 == 0) {
    local_1c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_30 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_28,_Src,lVar2 * 2);
  }
  uVar1 = (**(code **)(*param_1 + 0x4e8))(param_1,local_res8,&local_28);
  *param_3 = uVar1;
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142f240d0 FUN_142f240d0 body=188 status=ok
// SIG undefined FUN_142f240d0(void)

void FUN_142f240d0(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_28 = (undefined4)DAT_1468b5d88;
  local_24 = DAT_1468b5d88._4_4_;
  local_20 = (undefined4)DAT_1468b5d88;
  local_1c = DAT_1468b5d88._4_4_;
  local_18 = 0x3f800000;
  local_14 = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = &local_28;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142ed21c0(param_1,puVar1);
  return;
}



// FUNCTION 142f24190 FUN_142f24190 body=130 status=ok
// SIG undefined FUN_142f24190(void)

void FUN_142f24190(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142ed21f0(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 142f24220 execAddRecoilInstance body=213 status=ok
// SIG undefined execAddRecoilInstance(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UGS_GunTools::execAddRecoilInstance(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_68 [32];
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
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = _DAT_146b3f810 & _DAT_146b3f820;
  uStack_24 = uRam0000000146b3f814 & uRam0000000146b3f824;
  uStack_20 = uRam0000000146b3f818 & uRam0000000146b3f828;
  uStack_1c = uRam0000000146b3f81c & uRam0000000146b3f82c;
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = uRam0000000146b3f81c;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = &local_48;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142ed2230(param_1,puVar1);
  return;
}



// FUNCTION 142f24300 execAddRecoilInstance body=213 status=ok
// SIG undefined execAddRecoilInstance(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UGS_GunTools::execAddRecoilInstance(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_68 [32];
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
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = _DAT_146b3f810 & _DAT_146b3f820;
  uStack_24 = uRam0000000146b3f814 & uRam0000000146b3f824;
  uStack_20 = uRam0000000146b3f818 & uRam0000000146b3f828;
  uStack_1c = uRam0000000146b3f81c & uRam0000000146b3f82c;
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = uRam0000000146b3f81c;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = &local_48;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142f0b4b0(param_1,puVar1);
  return;
}



// FUNCTION 142f243e0 FUN_142f243e0 body=397 status=ok
// SIG undefined FUN_142f243e0(void)

void FUN_142f243e0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined8 local_20;
  
  local_38 = 0;
  uStack_30 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_40);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_28 = local_38;
  local_20 = 0;
  if (local_38 != 0) {
    local_20 = uStack_30;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142ed3200(param_1,&local_28,local_40,local_48,local_res20,local_res10[0]);
  return;
}



// FUNCTION 142f24570 FUN_142f24570 body=224 status=ok
// SIG undefined FUN_142f24570(void)

void FUN_142f24570(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  longlong local_28;
  undefined8 uStack_20;
  longlong local_18;
  undefined8 local_10;
  
  local_28 = 0;
  uStack_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_18 = local_28;
  local_10 = 0;
  if (local_28 != 0) {
    local_10 = uStack_20;
  }
  FUN_142ed36d0(param_1,&local_18,local_res10[0] != 0);
  return;
}



// FUNCTION 142f24650 execAddRecoilInstance body=213 status=ok
// SIG undefined execAddRecoilInstance(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UGS_GunTools::execAddRecoilInstance(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_68 [32];
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
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = _DAT_146b3f810 & _DAT_146b3f820;
  uStack_24 = uRam0000000146b3f814 & uRam0000000146b3f824;
  uStack_20 = uRam0000000146b3f818 & uRam0000000146b3f828;
  uStack_1c = uRam0000000146b3f81c & uRam0000000146b3f82c;
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = uRam0000000146b3f81c;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = &local_48;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142ed3fc0(param_1,puVar1);
  return;
}



// FUNCTION 142f24730 execAddRecoilInstance body=213 status=ok
// SIG undefined execAddRecoilInstance(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UGS_GunTools::execAddRecoilInstance(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_68 [32];
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
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = _DAT_146b3f810 & _DAT_146b3f820;
  uStack_24 = uRam0000000146b3f814 & uRam0000000146b3f824;
  uStack_20 = uRam0000000146b3f818 & uRam0000000146b3f828;
  uStack_1c = uRam0000000146b3f81c & uRam0000000146b3f82c;
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = uRam0000000146b3f81c;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = &local_48;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142f0e6c0(param_1,puVar1);
  return;
}



// FUNCTION 142f24810 FUN_142f24810 body=128 status=ok
// SIG undefined FUN_142f24810(void)

void FUN_142f24810(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142ed56a0(param_1,local_res10);
  return;
}



// FUNCTION 142f24890 FUN_142f24890 body=280 status=ok
// SIG undefined FUN_142f24890(void)

void FUN_142f24890(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 local_30;
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  
  local_48 = 0;
  uStack_40 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  FWeakObjectPtr::operator=(local_28,0);
  FWeakObjectPtr::operator=(local_20,0);
  FWeakObjectPtr::operator=(local_18,0);
  FWeakObjectPtr::operator=(local_10,0);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar1 = local_28;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_38 = local_48;
  local_30 = 0;
  if (local_48 != 0) {
    local_30 = uStack_40;
  }
  FUN_142ed5c20(param_1,&local_38,puVar1);
  return;
}



// FUNCTION 142f249b0 FUN_142f249b0 body=191 status=ok
// SIG undefined FUN_142f249b0(void)

void FUN_142f249b0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  
  local_res18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
  }
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142ed9520(local_res18,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f24a70 execTestServerLevelVisibilityChange body=191 status=ok
// SIG undefined execTestServerLevelVisibilityChange(void)

void APlayerController::execTestServerLevelVisibilityChange(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142ed95f0(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 142f24b30 FUN_142f24b30 body=168 status=ok
// SIG undefined FUN_142f24b30(void)

void FUN_142f24b30(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 local_38 [24];
  undefined1 local_20 [24];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar3 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar2 = (undefined8 *)FUN_142edadb0(param_1,local_20,puVar3);
  uVar1 = puVar2[1];
  *param_3 = *puVar2;
  param_3[1] = uVar1;
  *(undefined4 *)(param_3 + 2) = *(undefined4 *)(puVar2 + 2);
  return;
}



// FUNCTION 142f24be0 FUN_142f24be0 body=214 status=ok
// SIG undefined FUN_142f24be0(void)

void FUN_142f24be0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  int local_res10 [2];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  local_res10[0] = 0;
  puVar2 = local_res18;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_142edae50(param_1,local_res20,puVar2,local_res10[0] != 0);
  *param_3 = *puVar1;
  return;
}



// FUNCTION 142f24cc0 FUN_142f24cc0 body=148 status=ok
// SIG undefined FUN_142f24cc0(void)

void FUN_142f24cc0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar2 = local_res10;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_142edb0b0(param_1,local_res18,puVar2);
  *param_3 = *puVar1;
  return;
}



// FUNCTION 142f24d60 FUN_142f24d60 body=392 status=ok
// SIG undefined FUN_142f24d60(void)

void FUN_142f24d60(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  bool bVar4;
  int local_res10 [2];
  int local_res18 [2];
  undefined1 local_res20 [8];
  undefined1 local_48 [16];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar2 = local_48;
  if (puVar3 != (undefined1 *)0x0) {
    puVar2 = puVar3;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_res10[0] = 0;
  puVar3 = local_res20;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar4 = local_res10[0] != 0;
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142edb1a0(param_1,puVar2,puVar3,bVar4,local_res18[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f24ef0 FUN_142f24ef0 body=152 status=ok
// SIG undefined FUN_142f24ef0(void)

void FUN_142f24ef0(longlong *param_1,longlong param_2)

{
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x4f0))(param_1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142f24fb0 FUN_142f24fb0 body=53 status=ok
// SIG undefined FUN_142f24fb0(void)

void FUN_142f24fb0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_1459b3fe8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142f25010 FUN_142f25010 body=53 status=ok
// SIG undefined FUN_142f25010(void)

void FUN_142f25010(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_1459b4c00;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142f25060 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AReplicationGraphDebugActor::GetPrivateStaticClass(void)

{
  if (DAT_146b40158 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxGFxRechargeableProgressBar",&DAT_146b40158,FUN_140447710,
                  0x340,0x10000008,0,L"Engine",FUN_142f26550,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141366d80,&LAB_140447700,0);
  }
  return DAT_146b40158;
}



// FUNCTION 142f25110 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UTextureRenderTargetCube::GetPrivateStaticClass(void)

{
  if (DAT_146b40368 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxHUDData",&DAT_146b40368,FUN_140447710,0xd8,0x10000000,0,
                  L"Engine",FUN_142f26940,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146b40368;
}



// FUNCTION 142f251d0 FUN_142f251d0 body=162 status=ok
// SIG undefined FUN_142f251d0(void)

longlong FUN_142f251d0(void)

{
  if (DAT_146b40398 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxGFxHUDFeedbackData",&DAT_146b40398,FUN_140447710,0x98,
                  0x10000000,0,L"Engine",FUN_142f26410,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UBTTask_RunBehaviorDynamic::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b40398;
}



// FUNCTION 142f25280 FUN_142f25280 body=162 status=ok
// SIG undefined FUN_142f25280(void)

longlong FUN_142f25280(void)

{
  if (DAT_146b401a8 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxGFxSlider",&DAT_146b401a8,FUN_142f28210,0x390,0x1000000c,0,
                  L"GbxUI",FUN_142f265a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142f18d50,&LAB_140447700,0);
  }
  return DAT_146b401a8;
}



// FUNCTION 142f25330 FUN_142f25330 body=47 status=ok
// SIG undefined FUN_142f25330(void)

longlong FUN_142f25330(void)

{
  if (DAT_146b40160 == 0) {
    FUN_141786a30(&DAT_146b40160,&PTR_FUN_14674b450);
  }
  return DAT_146b40160;
}



// FUNCTION 142f25360 FUN_142f25360 body=47 status=ok
// SIG undefined FUN_142f25360(void)

longlong FUN_142f25360(void)

{
  if (DAT_146b401a0 == 0) {
    FUN_141786440(&DAT_146b401a0,&PTR_FUN_1459aeb00);
  }
  return DAT_146b401a0;
}



// FUNCTION 142f25390 FUN_142f25390 body=47 status=ok
// SIG undefined FUN_142f25390(void)

longlong FUN_142f25390(void)

{
  if (DAT_146b40188 == 0) {
    FUN_141786a30(&DAT_146b40188,&PTR_FUN_14674b640);
  }
  return DAT_146b40188;
}



// FUNCTION 142f253c0 FUN_142f253c0 body=47 status=ok
// SIG undefined FUN_142f253c0(void)

longlong FUN_142f253c0(void)

{
  if (DAT_146b40190 == 0) {
    FUN_141786a30(&DAT_146b40190,&PTR_FUN_14674b700);
  }
  return DAT_146b40190;
}



// FUNCTION 142f253f0 FUN_142f253f0 body=47 status=ok
// SIG undefined FUN_142f253f0(void)

longlong FUN_142f253f0(void)

{
  if (DAT_146b40198 == 0) {
    FUN_141786a30(&DAT_146b40198,&PTR_FUN_14674b7c0);
  }
  return DAT_146b40198;
}



// FUNCTION 142f25420 FUN_142f25420 body=162 status=ok
// SIG undefined FUN_142f25420(void)

longlong FUN_142f25420(void)

{
  if (DAT_146b403b8 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxHUDStateData",&DAT_146b403b8,FUN_140447710,0x58,0x10000000,0
                  ,L"Engine",FUN_142f26a00,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146b403b8;
}



// FUNCTION 142f254d0 FUN_142f254d0 body=53 status=ok
// SIG undefined FUN_142f254d0(void)

void FUN_142f254d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_1459b30b0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142f25530 FUN_142f25530 body=162 status=ok
// SIG undefined FUN_142f25530(void)

longlong FUN_142f25530(void)

{
  if (DAT_146b401d0 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxGridListWidget",&DAT_146b401d0,FUN_140447710,0x1e8,
                  0x10000000,0,L"Engine",FUN_142f26700,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UGridPanel::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b401d0;
}



// FUNCTION 142f255f0 FUN_142f255f0 body=47 status=ok
// SIG undefined FUN_142f255f0(void)

longlong FUN_142f255f0(void)

{
  if (DAT_146b402f0 == 0) {
    FUN_141786440(&DAT_146b402f0,&PTR_thunk_FUN_142f27b90_1459afa20);
  }
  return DAT_146b402f0;
}



// FUNCTION 142f25620 FUN_142f25620 body=47 status=ok
// SIG undefined FUN_142f25620(void)

longlong FUN_142f25620(void)

{
  if (DAT_146b40280 == 0) {
    FUN_141786a30(&DAT_146b40280,&PTR_FUN_14674cdc0);
  }
  return DAT_146b40280;
}



// FUNCTION 142f25650 FUN_142f25650 body=47 status=ok
// SIG undefined FUN_142f25650(void)

longlong FUN_142f25650(void)

{
  if (DAT_146b40288 == 0) {
    FUN_141786a30(&DAT_146b40288,&PTR_FUN_14674ce40);
  }
  return DAT_146b40288;
}



// FUNCTION 142f25680 FUN_142f25680 body=47 status=ok
// SIG undefined FUN_142f25680(void)

longlong FUN_142f25680(void)

{
  if (DAT_146b40290 == 0) {
    FUN_141786a30(&DAT_146b40290,&PTR_FUN_14674cf00);
  }
  return DAT_146b40290;
}



// FUNCTION 142f256b0 FUN_142f256b0 body=47 status=ok
// SIG undefined FUN_142f256b0(void)

longlong FUN_142f256b0(void)

{
  if (DAT_146b40298 == 0) {
    FUN_141786a30(&DAT_146b40298,&PTR_FUN_14674cfc0);
  }
  return DAT_146b40298;
}



// FUNCTION 142f256e0 FUN_142f256e0 body=47 status=ok
// SIG undefined FUN_142f256e0(void)

longlong FUN_142f256e0(void)

{
  if (DAT_146b402a0 == 0) {
    FUN_141786a30(&DAT_146b402a0,&PTR_FUN_14674d040);
  }
  return DAT_146b402a0;
}



// FUNCTION 142f25710 FUN_142f25710 body=47 status=ok
// SIG undefined FUN_142f25710(void)

longlong FUN_142f25710(void)

{
  if (DAT_146b402a8 == 0) {
    FUN_141786a30(&DAT_146b402a8,&PTR_FUN_14674d100);
  }
  return DAT_146b402a8;
}



// FUNCTION 142f25740 FUN_142f25740 body=47 status=ok
// SIG undefined FUN_142f25740(void)

longlong FUN_142f25740(void)

{
  if (DAT_146b402b0 == 0) {
    FUN_141786a30(&DAT_146b402b0,&PTR_FUN_14674d180);
  }
  return DAT_146b402b0;
}



// FUNCTION 142f25770 FUN_142f25770 body=47 status=ok
// SIG undefined FUN_142f25770(void)

longlong FUN_142f25770(void)

{
  if (DAT_146b402b8 == 0) {
    FUN_141786a30(&DAT_146b402b8,&PTR_FUN_14674d200);
  }
  return DAT_146b402b8;
}



// FUNCTION 142f257a0 FUN_142f257a0 body=47 status=ok
// SIG undefined FUN_142f257a0(void)

longlong FUN_142f257a0(void)

{
  if (DAT_146b402c0 == 0) {
    FUN_141786a30(&DAT_146b402c0,&PTR_FUN_14674d2c0);
  }
  return DAT_146b402c0;
}



// FUNCTION 142f257d0 FUN_142f257d0 body=47 status=ok
// SIG undefined FUN_142f257d0(void)

longlong FUN_142f257d0(void)

{
  if (DAT_146b402c8 == 0) {
    FUN_141786a30(&DAT_146b402c8,&PTR_FUN_14674d380);
  }
  return DAT_146b402c8;
}



// FUNCTION 142f25800 FUN_142f25800 body=47 status=ok
// SIG undefined FUN_142f25800(void)

longlong FUN_142f25800(void)

{
  if (DAT_146b402d0 == 0) {
    FUN_141786a30(&DAT_146b402d0,&PTR_FUN_14674d480);
  }
  return DAT_146b402d0;
}



// FUNCTION 142f25830 FUN_142f25830 body=47 status=ok
// SIG undefined FUN_142f25830(void)

longlong FUN_142f25830(void)

{
  if (DAT_146b402d8 == 0) {
    FUN_141786a30(&DAT_146b402d8,&PTR_FUN_14674d590);
  }
  return DAT_146b402d8;
}



// FUNCTION 142f25860 FUN_142f25860 body=47 status=ok
// SIG undefined FUN_142f25860(void)

longlong FUN_142f25860(void)

{
  if (DAT_146b402e0 == 0) {
    FUN_141786a30(&DAT_146b402e0,&PTR_FUN_14674d650);
  }
  return DAT_146b402e0;
}



// FUNCTION 142f25890 FUN_142f25890 body=47 status=ok
// SIG undefined FUN_142f25890(void)

longlong FUN_142f25890(void)

{
  if (DAT_146b402e8 == 0) {
    FUN_141786a30(&DAT_146b402e8,&PTR_FUN_14674d710);
  }
  return DAT_146b402e8;
}



// FUNCTION 142f258d0 FUN_142f258d0 body=162 status=ok
// SIG undefined FUN_142f258d0(void)

longlong FUN_142f258d0(void)

{
  if (DAT_146b401e0 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxGuidePanel",&DAT_146b401e0,FUN_140447710,0x128,0x10000000,0,
                  L"Engine",FUN_142f267f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UCanvasPanel::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b401e0;
}



// FUNCTION 142f25990 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UBlendableInterface::GetPrivateStaticClass(void)

{
  if (DAT_146b40270 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxHintWidget",&DAT_146b40270,FUN_140447710,0x28,0x10004001,0,
                  L"Engine",&LAB_140492380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b40270;
}



// FUNCTION 142f25a40 FUN_142f25a40 body=162 status=ok
// SIG undefined FUN_142f25a40(void)

longlong FUN_142f25a40(void)

{
  if (DAT_146b40220 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxHintBarWidgetContainer",&DAT_146b40220,FUN_140447710,0x28,
                  0x10004001,0,L"Engine",&LAB_140492380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b40220;
}



// FUNCTION 142f25af0 FUN_142f25af0 body=151 status=ok
// SIG undefined FUN_142f25af0(void)

longlong FUN_142f25af0(void)

{
  if (DAT_146b40238 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxHintBar",&DAT_146b40238,FUN_142f28240,0xa8,0x10000000,0,
                  L"Engine",FUN_142f26a40,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b40238;
}



// FUNCTION 142f25b90 FUN_142f25b90 body=47 status=ok
// SIG undefined FUN_142f25b90(void)

longlong FUN_142f25b90(void)

{
  if (DAT_146b40130 == 0) {
    FUN_141786440(&DAT_146b40130,&PTR_LAB_1459b1570);
  }
  return DAT_146b40130;
}



// FUNCTION 142f25bc0 FUN_142f25bc0 body=47 status=ok
// SIG undefined FUN_142f25bc0(void)

longlong FUN_142f25bc0(void)

{
  if (DAT_146b400d8 == 0) {
    FUN_141786a30(&DAT_146b400d8,&PTR_FUN_14674a830);
  }
  return DAT_146b400d8;
}



// FUNCTION 142f25bf0 FUN_142f25bf0 body=47 status=ok
// SIG undefined FUN_142f25bf0(void)

longlong FUN_142f25bf0(void)

{
  if (DAT_146b400e0 == 0) {
    FUN_141786a30(&DAT_146b400e0,&PTR_FUN_14674a8b0);
  }
  return DAT_146b400e0;
}



// FUNCTION 142f25c20 FUN_142f25c20 body=47 status=ok
// SIG undefined FUN_142f25c20(void)

longlong FUN_142f25c20(void)

{
  if (DAT_146b400e8 == 0) {
    FUN_141786a30(&DAT_146b400e8,&PTR_FUN_14674a930);
  }
  return DAT_146b400e8;
}



// FUNCTION 142f25c50 FUN_142f25c50 body=47 status=ok
// SIG undefined FUN_142f25c50(void)

longlong FUN_142f25c50(void)

{
  if (DAT_146b400f0 == 0) {
    FUN_141786a30(&DAT_146b400f0,&PTR_FUN_14674aa70);
  }
  return DAT_146b400f0;
}



// FUNCTION 142f25c80 FUN_142f25c80 body=47 status=ok
// SIG undefined FUN_142f25c80(void)

longlong FUN_142f25c80(void)

{
  if (DAT_146b400f8 == 0) {
    FUN_141786a30(&DAT_146b400f8,&PTR_FUN_14674aaf0);
  }
  return DAT_146b400f8;
}



// FUNCTION 142f25cb0 FUN_142f25cb0 body=47 status=ok
// SIG undefined FUN_142f25cb0(void)

longlong FUN_142f25cb0(void)

{
  if (DAT_146b40100 == 0) {
    FUN_141786a30(&DAT_146b40100,&PTR_FUN_14674abb0);
  }
  return DAT_146b40100;
}



// FUNCTION 142f25ce0 FUN_142f25ce0 body=47 status=ok
// SIG undefined FUN_142f25ce0(void)

longlong FUN_142f25ce0(void)

{
  if (DAT_146b40108 == 0) {
    FUN_141786a30(&DAT_146b40108,&PTR_FUN_14674ad80);
  }
  return DAT_146b40108;
}



// FUNCTION 142f25d10 FUN_142f25d10 body=47 status=ok
// SIG undefined FUN_142f25d10(void)

longlong FUN_142f25d10(void)

{
  if (DAT_146b40110 == 0) {
    FUN_141786a30(&DAT_146b40110,&PTR_FUN_14674ae00);
  }
  return DAT_146b40110;
}



// FUNCTION 142f25d40 FUN_142f25d40 body=47 status=ok
// SIG undefined FUN_142f25d40(void)

longlong FUN_142f25d40(void)

{
  if (DAT_146b40118 == 0) {
    FUN_141786a30(&DAT_146b40118,&PTR_FUN_14674ae80);
  }
  return DAT_146b40118;
}



// FUNCTION 142f25d70 FUN_142f25d70 body=47 status=ok
// SIG undefined FUN_142f25d70(void)

longlong FUN_142f25d70(void)

{
  if (DAT_146b40120 == 0) {
    FUN_141786a30(&DAT_146b40120,&PTR_FUN_14674af00);
  }
  return DAT_146b40120;
}



// FUNCTION 142f25da0 FUN_142f25da0 body=47 status=ok
// SIG undefined FUN_142f25da0(void)

longlong FUN_142f25da0(void)

{
  if (DAT_146b40128 == 0) {
    FUN_141786a30(&DAT_146b40128,&PTR_FUN_14674af80);
  }
  return DAT_146b40128;
}



// FUNCTION 142f25dd0 FUN_142f25dd0 body=47 status=ok
// SIG undefined FUN_142f25dd0(void)

longlong FUN_142f25dd0(void)

{
  if (DAT_146b40320 == 0) {
    FUN_141786440(&DAT_146b40320,&PTR_LAB_1459b0fa0);
  }
  return DAT_146b40320;
}



// FUNCTION 142f25e00 FUN_142f25e00 body=47 status=ok
// SIG undefined FUN_142f25e00(void)

longlong FUN_142f25e00(void)

{
  if (DAT_146b40300 == 0) {
    FUN_141786a30(&DAT_146b40300,&PTR_FUN_14674da10);
  }
  return DAT_146b40300;
}



// FUNCTION 142f25e30 FUN_142f25e30 body=47 status=ok
// SIG undefined FUN_142f25e30(void)

longlong FUN_142f25e30(void)

{
  if (DAT_146b40308 == 0) {
    FUN_141786a30(&DAT_146b40308,&PTR_FUN_14674da50);
  }
  return DAT_146b40308;
}



// FUNCTION 142f25e60 FUN_142f25e60 body=47 status=ok
// SIG undefined FUN_142f25e60(void)

longlong FUN_142f25e60(void)

{
  if (DAT_146b40310 == 0) {
    FUN_141786a30(&DAT_146b40310,&PTR_FUN_14674da90);
  }
  return DAT_146b40310;
}



// FUNCTION 142f25e90 FUN_142f25e90 body=47 status=ok
// SIG undefined FUN_142f25e90(void)

longlong FUN_142f25e90(void)

{
  if (DAT_146b40318 == 0) {
    FUN_141786a30(&DAT_146b40318,&PTR_FUN_14674dad0);
  }
  return DAT_146b40318;
}



// FUNCTION 142f25ed0 FUN_142f25ed0 body=53 status=ok
// SIG undefined FUN_142f25ed0(void)

void FUN_142f25ed0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_1459b46e0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142f25f10 FUN_142f25f10 body=53 status=ok
// SIG undefined FUN_142f25f10(void)

void FUN_142f25f10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_1459b47f8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142f25f50 FUN_142f25f50 body=47 status=ok
// SIG undefined FUN_142f25f50(void)

longlong FUN_142f25f50(void)

{
  if (DAT_146b40218 == 0) {
    FUN_141786440(&DAT_146b40218,&PTR_FUN_1459b1f20);
  }
  return DAT_146b40218;
}



// FUNCTION 142f25f80 FUN_142f25f80 body=47 status=ok
// SIG undefined FUN_142f25f80(void)

longlong FUN_142f25f80(void)

{
  if (DAT_146b401f8 == 0) {
    FUN_141786a30(&DAT_146b401f8,&PTR_FUN_14674c340);
  }
  return DAT_146b401f8;
}



// FUNCTION 142f25fb0 FUN_142f25fb0 body=47 status=ok
// SIG undefined FUN_142f25fb0(void)

longlong FUN_142f25fb0(void)

{
  if (DAT_146b40200 == 0) {
    FUN_141786a30(&DAT_146b40200,&PTR_FUN_14674c380);
  }
  return DAT_146b40200;
}



// FUNCTION 142f25fe0 FUN_142f25fe0 body=47 status=ok
// SIG undefined FUN_142f25fe0(void)

longlong FUN_142f25fe0(void)

{
  if (DAT_146b40208 == 0) {
    FUN_141786a30(&DAT_146b40208,&PTR_FUN_14674c440);
  }
  return DAT_146b40208;
}



// FUNCTION 142f26010 FUN_142f26010 body=47 status=ok
// SIG undefined FUN_142f26010(void)

longlong FUN_142f26010(void)

{
  if (DAT_146b40210 == 0) {
    FUN_141786a30(&DAT_146b40210,&PTR_FUN_14674c4d0);
  }
  return DAT_146b40210;
}



// FUNCTION 142f26040 FUN_142f26040 body=47 status=ok
// SIG undefined FUN_142f26040(void)

longlong FUN_142f26040(void)

{
  if (DAT_146b40230 == 0) {
    FUN_141786440(&DAT_146b40230,&PTR_FUN_1459b23d0);
  }
  return DAT_146b40230;
}



// FUNCTION 142f26070 FUN_142f26070 body=47 status=ok
// SIG undefined FUN_142f26070(void)

longlong FUN_142f26070(void)

{
  if (DAT_146b40228 == 0) {
    FUN_141786a30(&DAT_146b40228,&PTR_FUN_14674c5c0);
  }
  return DAT_146b40228;
}



// FUNCTION 142f260b0 FUN_142f260b0 body=53 status=ok
// SIG undefined FUN_142f260b0(void)

void FUN_142f260b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_1459b4910;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142f260f0 FUN_142f260f0 body=53 status=ok
// SIG undefined FUN_142f260f0(void)

void FUN_142f260f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_1459b3ec0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142f26140 FUN_142f26140 body=162 status=ok
// SIG undefined FUN_142f26140(void)

longlong FUN_142f26140(void)

{
  if (DAT_146b40378 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"HUDDataProviderInterface",&DAT_146b40378,FUN_140447710,0x28,
                  0x10004001,0,L"Engine",FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b40378;
}



// FUNCTION 142f26210 FUN_142f26210 body=53 status=ok
// SIG undefined FUN_142f26210(void)

void FUN_142f26210(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &PTR_FUN_1459b4a28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142f26260 FUN_142f26260 body=47 status=ok
// SIG undefined FUN_142f26260(void)

longlong FUN_142f26260(void)

{
  if (DAT_146b40268 == 0) {
    FUN_141786440(&DAT_146b40268,&PTR_GetPrivateStaticClass_1459adf90);
  }
  return DAT_146b40268;
}



// FUNCTION 142f26290 FUN_142f26290 body=47 status=ok
// SIG undefined FUN_142f26290(void)

longlong FUN_142f26290(void)

{
  if (DAT_146b40250 == 0) {
    FUN_141786a30(&DAT_146b40250,&PTR_FUN_14674cbc0);
  }
  return DAT_146b40250;
}



// FUNCTION 142f262c0 FUN_142f262c0 body=47 status=ok
// SIG undefined FUN_142f262c0(void)

longlong FUN_142f262c0(void)

{
  if (DAT_146b40258 == 0) {
    FUN_141786a30(&DAT_146b40258,&PTR_FUN_14674cc40);
  }
  return DAT_146b40258;
}



// FUNCTION 142f262f0 FUN_142f262f0 body=47 status=ok
// SIG undefined FUN_142f262f0(void)

longlong FUN_142f262f0(void)

{
  if (DAT_146b40260 == 0) {
    FUN_141786a30(&DAT_146b40260,&PTR_FUN_14674ccd0);
  }
  return DAT_146b40260;
}



// FUNCTION 142f26330 FUN_142f26330 body=213 status=ok
// SIG undefined FUN_142f26330(void)

void FUN_142f26330(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1424ddf70(puVar1,param_1);
    *puVar1 = &PTR_FUN_1444d5630;
    puVar1[0xaf] = 0;
    puVar1[0xb0] = 0;
    puVar1[0xb1] = 2;
    puVar1[0xb2] = 0;
    puVar1[0xb3] = 0;
    puVar1[0xb4] = 0;
    puVar1[0xb5] = 0;
    InitializeSRWLock((PSRWLOCK)(puVar1 + 0xb6));
    puVar1[0xb7] = 0;
    puVar1[0xb8] = 0;
    *(undefined2 *)(puVar1 + 0xb9) = 0;
    *(undefined1 *)(puVar1 + 0xba) = 1;
    puVar1[0xbf] = 0;
    puVar1[0xc0] = 0;
    *(undefined4 *)(puVar1 + 0xc2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x60c) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0xc3) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x614) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0xc4) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x61c) = 0xffffffff;
  }
  return;
}



// FUNCTION 142f26410 FUN_142f26410 body=211 status=ok
// SIG undefined FUN_142f26410(void)

void FUN_142f26410(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *(undefined4 *)(puVar1 + 6) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0x3f800000;
    *(undefined4 *)(puVar1 + 7) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x3f800000;
    *(undefined4 *)(puVar1 + 8) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x44) = 0x3f800000;
    *(undefined4 *)(puVar1 + 9) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x4c) = 0x3f800000;
    *(undefined4 *)(puVar1 + 10) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x54) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0xb) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x5c) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0xc) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 100) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0xd) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x6c) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0xe) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x74) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0xf) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x7c) = 0x3f800000;
    *puVar1 = &PTR__scalar_deleting_destructor__1459b4100;
    *(undefined4 *)(puVar1 + 0x10) = 0x40800000;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
  }
  return;
}



// FUNCTION 142f26510 FUN_142f26510 body=55 status=ok
// SIG undefined FUN_142f26510(void)

void FUN_142f26510(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141363e50(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__1448d8240;
    puVar1[0x2e] = &PTR_LAB_1448c2638;
  }
  return;
}



// FUNCTION 142f26550 FUN_142f26550 body=77 status=ok
// SIG undefined FUN_142f26550(void)

void FUN_142f26550(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1413640d0(puVar1,param_1);
    *puVar1 = &PTR_FUN_1459b2a30;
    puVar1[99] = 0;
    puVar1[100] = 0;
    puVar1[0x65] = 0;
    puVar1[0x66] = 0;
    *(undefined4 *)(puVar1 + 0x67) = 0;
  }
  return;
}



// FUNCTION 142f265a0 FUN_142f265a0 body=284 status=ok
// SIG undefined FUN_142f265a0(void)

void FUN_142f265a0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1413205b0(puVar1,param_1);
    *puVar1 = &PTR_FUN_1459b2cf0;
    puVar1[0x2e] = &PTR_LAB_1459b3010;
    puVar1[0x59] = 0;
    *(undefined4 *)(puVar1 + 0x5a) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x2d4) = 0x3f000000;
    puVar1[0x5b] = 0;
    puVar1[0x5c] = 0;
    puVar1[0x5d] = 0;
    puVar1[0x5e] = 0;
    puVar1[0x5f] = 0;
    puVar1[0x60] = 0;
    puVar1[0x61] = 0;
    *(undefined4 *)(puVar1 + 0x62) = 0xbf800000;
    *(undefined4 *)((longlong)puVar1 + 0x314) = 0xbf800000;
    *(undefined4 *)(puVar1 + 99) = 0xbf800000;
    *(undefined4 *)((longlong)puVar1 + 0x31c) = 0x3ca3d70a;
    *(undefined1 *)((longlong)puVar1 + 0x321) = 1;
    *(undefined8 *)((longlong)puVar1 + 0x324) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x32c) = 0xffffffff;
    *(undefined2 *)(puVar1 + 0x67) = 0;
    puVar1[0x68] = 0;
    puVar1[0x69] = 0;
    puVar1[0x6a] = 0;
    puVar1[0x6b] = 0;
    puVar1[0x6c] = 0;
    puVar1[0x6d] = 0;
    puVar1[0x6e] = 0;
    FWeakObjectPtr::operator=(puVar1 + 0x6f,0);
    puVar1[0x70] = 0;
  }
  return;
}



// FUNCTION 142f266c0 FUN_142f266c0 body=52 status=ok
// SIG undefined FUN_142f266c0(void)

void FUN_142f266c0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14106e9c0(puVar1,param_1);
    puVar1[0x2e] = 0;
    *puVar1 = &PTR_FUN_1459ac398;
  }
  return;
}



// FUNCTION 142f26700 FUN_142f26700 body=238 status=ok
// SIG undefined FUN_142f26700(void)

void FUN_142f26700(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1420d2190(puVar1,param_1);
    *(undefined4 *)(puVar1 + 0x2b) = 0;
    *puVar1 = &PTR_FUN_1459b3548;
    puVar1[0x2c] = 0xffffffffffffffff;
    puVar1[0x29] = &PTR_LAB_1459b3830;
    puVar1[0x2d] = 0xffffffffffffffff;
    puVar1[0x2a] = &PTR_LAB_1459b38f0;
    *(undefined4 *)(puVar1 + 0x2e) = 0;
    FWeakObjectPtr::operator=(puVar1 + 0x30,0);
    puVar1[0x31] = 0;
    FWeakObjectPtr::operator=(puVar1 + 0x32,0);
    puVar1[0x33] = 0;
    *(undefined2 *)(puVar1 + 0x34) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1a2) = 1;
    puVar1[0x36] = 0;
    *(undefined2 *)(puVar1 + 0x37) = 0;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    puVar1[0x3a] = 0;
    puVar1[0x3b] = 0;
    *(undefined1 *)(puVar1 + 0x3c) = 0;
  }
  return;
}



// FUNCTION 142f267f0 FUN_142f267f0 body=41 status=ok
// SIG undefined FUN_142f267f0(void)

void FUN_142f267f0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1420cfdb0(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__1459b3960;
  }
  return;
}



// FUNCTION 142f26820 FUN_142f26820 body=283 status=ok
// SIG undefined FUN_142f26820(void)

void FUN_142f26820(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1420d5de0(puVar1,param_1);
    *(undefined4 *)(puVar1 + 0x42) = 0;
    *puVar1 = &PTR_FUN_1447d6728;
    *(undefined2 *)(puVar1 + 0x46) = 0x300;
    puVar1[0x20] = &PTR_LAB_1447d6bc0;
    puVar1[0x41] = &PTR_LAB_1447d6be8;
    puVar1[0x48] = 0;
    puVar1[0x49] = 0;
    *(undefined1 *)(puVar1 + 0x4a) = 0;
    puVar1[0x4b] = 0;
    FWeakObjectPtr::operator=(puVar1 + 0x4c,0);
    puVar1[0x4d] = 0;
    FWeakObjectPtr::operator=(puVar1 + 0x4e,0);
    puVar1[0x4f] = 0;
    puVar1[0x50] = 0;
    puVar1[0x51] = 0;
    puVar1[0x52] = 0;
    puVar1[0x53] = 0;
    *(undefined1 *)(puVar1 + 0x54) = 0;
    *(undefined4 *)(puVar1 + 0x55) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x2a4) = 0xffffffff;
    *puVar1 = &PTR_FUN_144990b40;
    puVar1[0x20] = &PTR_LAB_144991010;
    puVar1[0x41] = &PTR_LAB_144991038;
    *(undefined4 *)(puVar1 + 0x5a) = 0xfffffff6;
  }
  return;
}



// FUNCTION 142f26940 FUN_142f26940 body=188 status=ok
// SIG undefined FUN_142f26940(void)

void FUN_142f26940(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR_FUN_1459b3208;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    *(undefined4 *)(puVar1 + 10) = 0x3f800000;
    puVar1[0xb] = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0x3f800000;
    puVar1[0xd] = 0;
    *(undefined4 *)(puVar1 + 0xe) = 0x3f800000;
    puVar1[0xf] = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0x3f800000;
    puVar1[0x11] = 0;
    *(undefined4 *)(puVar1 + 0x12) = 0x3f800000;
    puVar1[0x13] = 0;
    *(undefined4 *)(puVar1 + 0x14) = 0x3f800000;
    puVar1[0x15] = 0;
    *(undefined4 *)(puVar1 + 0x16) = 0x3f800000;
    puVar1[0x17] = 0;
    *(undefined4 *)(puVar1 + 0x18) = 0x3f800000;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
  }
  return;
}



// FUNCTION 142f26a00 FUN_142f26a00 body=62 status=ok
// SIG undefined FUN_142f26a00(void)

void FUN_142f26a00(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__1459b4380;
    puVar1[6] = 0;
    *(undefined2 *)(puVar1 + 7) = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    *(undefined1 *)(puVar1 + 10) = 0;
  }
  return;
}



// FUNCTION 142f26a40 FUN_142f26a40 body=166 status=ok
// SIG undefined FUN_142f26a40(void)

void FUN_142f26a40(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_1459b3c48;
    puVar1[5] = 0;
    InitializeSRWLock((PSRWLOCK)(puVar1 + 6));
    *(undefined4 *)(puVar1 + 7) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    InitializeSRWLock((PSRWLOCK)(puVar1 + 0xe));
    *(undefined4 *)(puVar1 + 0xf) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x7c) = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    InitializeSRWLock((PSRWLOCK)(puVar1 + 0x12));
    *(undefined4 *)(puVar1 + 0x13) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x9c) = 0;
    *(undefined4 *)(puVar1 + 0x14) = 0x10001;
  }
  return;
}



// FUNCTION 142f26af0 ~TArray<UPollWindowWidget::PollInfo,FDefaultAllocator> body=159 status=ok
// SIG undefined ~TArray<UPollWindowWidget::PollInfo,FDefaultAllocator>(void)

void TArray<UPollWindowWidget::PollInfo,FDefaultAllocator>::
     ~TArray<UPollWindowWidget::PollInfo,FDefaultAllocator>(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  plVar7 = (longlong *)*param_1;
  iVar6 = *(int *)(param_1 + 1);
  if (iVar6 != 0) {
    do {
      plVar4 = (longlong *)plVar7[3];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 8;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    plVar7 = (longlong *)*param_1;
  }
  if (plVar7 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(plVar7);
  return;
}



// FUNCTION 142f26b90 FUN_142f26b90 body=117 status=ok
// SIG undefined FUN_142f26b90(void)

void FUN_142f26b90(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x120);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  FUN_140458e30(param_1);
  return;
}



// FUNCTION 142f26c10 FUN_142f26c10 body=151 status=ok
// SIG undefined FUN_142f26c10(void)

void FUN_142f26c10(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x140);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  FUN_140458e30(param_1);
  return;
}



// FUNCTION 142f26cd0 `scalar_deleting_destructor' body=72 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FAIDataProviderStructValue::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_1440780a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 142f26d20 FUN_142f26d20 body=43 status=ok
// SIG undefined FUN_142f26d20(void)

undefined8 * FUN_142f26d20(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1459b3488;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 142f26d50 `scalar_deleting_destructor' body=67 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FSCComponentServicesManager::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x88);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 142f26da0 FUN_142f26da0 body=144 status=ok
// SIG undefined FUN_142f26da0(void)

longlong FUN_142f26da0(longlong param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x330);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  plVar3 = *(longlong **)(param_1 + 800);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  FUN_1413645c0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x340);
  }
  return param_1;
}



// FUNCTION 142f26e30 FUN_142f26e30 body=52 status=ok
// SIG undefined FUN_142f26e30(void)

undefined8 FUN_142f26e30(undefined8 param_1,ulonglong param_2)

{
  FUN_141320cb0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x390);
  }
  return param_1;
}



// FUNCTION 142f26e70 FUN_142f26e70 body=80 status=ok
// SIG undefined FUN_142f26e70(void)

longlong FUN_142f26e70(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x150) = &PTR_FUN_14468d298;
  *(undefined ***)(param_1 + 0x148) = &PTR_FUN_1459b3488;
  FUN_142f26c10();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1e8);
  }
  return param_1;
}



// FUNCTION 142f26ec0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FCullObjectsForVolumeCS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_142f26b90();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x128);
  }
  return param_1;
}



// FUNCTION 142f26f00 FUN_142f26f00 body=64 status=ok
// SIG undefined FUN_142f26f00(void)

longlong FUN_142f26f00(longlong param_1,ulonglong param_2)

{
  FUN_1408708d0(param_1 + 0x38);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 142f26f40 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong USoAnimNotify_EnemyVoiceRandom::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x40);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 142f26f80 FUN_142f26f80 body=150 status=ok
// SIG undefined FUN_142f26f80(void)

longlong FUN_142f26f80(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x88);
  plVar1 = *(longlong **)(param_1 + 0x80);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 6;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x80);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  TArray<UPollWindowWidget::PollInfo,FDefaultAllocator>::
  ~TArray<UPollWindowWidget::PollInfo,FDefaultAllocator>(param_1 + 0x60);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 142f27030 FUN_142f27030 body=157 status=ok
// SIG undefined FUN_142f27030(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f27030(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x68);
  *(undefined1 *)((longlong)param_2 + 8) = 1;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined4 *)((longlong)param_2 + 0x20) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)((longlong)param_2 + 0x28) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_2 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_2 + 0x40) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_2 + 0x44) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_2 + 0x4c) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_2 + 0x50) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_2 + 0x58) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_2 + 0x5c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_2 + 100) = DAT_1468b5d98;
  return;
}



// FUNCTION 142f27110 FUN_142f27110 body=79 status=ok
// SIG undefined FUN_142f27110(void)

void FUN_142f27110(undefined8 param_1,undefined8 *param_2)

{
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  InitializeSRWLock((PSRWLOCK)(param_2 + 4));
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined2 *)(param_2 + 7) = 0;
  return;
}



// FUNCTION 142f27160 FUN_142f27160 body=88 status=ok
// SIG undefined FUN_142f27160(void)

void FUN_142f27160(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = FUN_1404b03b0();
  FText::FText(param_2 + 2,uVar1);
  *(undefined1 *)(param_2 + 5) = 0;
  param_2[6] = 0;
  *(undefined2 *)(param_2 + 7) = 1;
  return;
}



// FUNCTION 142f271f0 FUN_142f271f0 body=309 status=ok
// SIG undefined FUN_142f271f0(void)

undefined8 FUN_142f271f0(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *_Src;
  undefined4 *puVar4;
  
  if (param_4 != 0) {
    puVar4 = (undefined4 *)(param_3 + 0x24);
    do {
      *param_2 = *(undefined8 *)(puVar4 + -9);
      puVar1 = param_2 + 2;
      *(undefined1 *)(param_2 + 1) = *(undefined1 *)(puVar4 + -7);
      if (puVar1 != (undefined8 *)(puVar4 + -5)) {
        iVar3 = puVar4[-3];
        _Src = *(void **)(puVar4 + -5);
        *(int *)(param_2 + 3) = iVar3;
        if ((iVar3 == 0) && (*(int *)((longlong)param_2 + 0x1c) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar3);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar3 << 3);
        }
      }
      *(undefined4 *)(param_2 + 4) = puVar4[-1];
      *(undefined4 *)((longlong)param_2 + 0x24) = *puVar4;
      *(undefined4 *)(param_2 + 5) = puVar4[1];
      *(undefined4 *)((longlong)param_2 + 0x2c) = puVar4[2];
      *(undefined4 *)(param_2 + 6) = puVar4[3];
      *(undefined4 *)((longlong)param_2 + 0x34) = puVar4[4];
      param_2[7] = *(undefined8 *)(puVar4 + 5);
      *(undefined4 *)(param_2 + 8) = puVar4[7];
      *(undefined8 *)((longlong)param_2 + 0x44) = *(undefined8 *)(puVar4 + 8);
      *(undefined4 *)((longlong)param_2 + 0x4c) = puVar4[10];
      param_2[10] = *(undefined8 *)(puVar4 + 0xb);
      *(undefined4 *)(param_2 + 0xb) = puVar4[0xd];
      *(undefined8 *)((longlong)param_2 + 0x5c) = *(undefined8 *)(puVar4 + 0xe);
      puVar2 = puVar4 + 0x10;
      puVar4 = puVar4 + 0x1a;
      *(undefined4 *)((longlong)param_2 + 100) = *puVar2;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0xd;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142f27330 FUN_142f27330 body=107 status=ok
// SIG undefined FUN_142f27330(void)

undefined1 FUN_142f27330(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined8 *)(param_2 + 0x10);
    do {
      puVar1[-1] = *(undefined8 *)(param_3 + -8 + (longlong)puVar1);
      *puVar1 = *(undefined8 *)(param_3 + (longlong)puVar1);
      puVar1[1] = *(undefined8 *)(param_3 + 8 + (longlong)puVar1);
      FString::operator=(puVar1 + 2,param_3 + 0x10 + (longlong)puVar1);
      puVar1 = puVar1 + 6;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142f273a0 FUN_142f273a0 body=392 status=ok
// SIG undefined FUN_142f273a0(void)

undefined8 FUN_142f273a0(undefined8 param_1,longlong *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined1 *puVar2;
  longlong lVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  
  if (param_4 != 0) {
    piVar8 = (int *)(param_3 + 0x30);
    do {
      if (param_2 != (longlong *)(piVar8 + -0xc)) {
        iVar7 = piVar8[-10];
        lVar3 = *(longlong *)(piVar8 + -0xc);
        *(int *)(param_2 + 1) = iVar7;
        if ((iVar7 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
          *(int *)((longlong)param_2 + 0xc) = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(param_2,iVar7);
          if (iVar7 != 0) {
            puVar5 = (undefined8 *)(lVar3 + 8);
            puVar6 = (undefined4 *)*param_2;
            do {
              *puVar6 = *(undefined4 *)(puVar5 + -1);
              puVar6[1] = *(undefined4 *)((longlong)puVar5 + -4);
              *(undefined8 *)(puVar6 + 2) = *puVar5;
              iVar7 = iVar7 + -1;
              puVar5 = puVar5 + 2;
              puVar6 = puVar6 + 4;
            } while (iVar7 != 0);
          }
        }
      }
      plVar1 = param_2 + 2;
      if (plVar1 != (longlong *)(piVar8 + -8)) {
        iVar7 = piVar8[-6];
        pvVar4 = *(void **)(piVar8 + -8);
        *(int *)(param_2 + 3) = iVar7;
        if ((iVar7 == 0) && (*(int *)((longlong)param_2 + 0x1c) == 0)) {
          *(int *)((longlong)param_2 + 0x1c) = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(plVar1,iVar7);
          _guard_xfg_dispatch_icall_nop((void *)*plVar1,pvVar4,(longlong)iVar7 << 3);
        }
      }
      plVar1 = param_2 + 5;
      param_2[4] = *(longlong *)(piVar8 + -4);
      if (plVar1 != (longlong *)(piVar8 + -2)) {
        iVar7 = *piVar8;
        pvVar4 = *(void **)(piVar8 + -2);
        *(int *)(param_2 + 6) = iVar7;
        if ((iVar7 == 0) && (*(int *)((longlong)param_2 + 0x34) == 0)) {
          *(int *)((longlong)param_2 + 0x34) = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(plVar1,iVar7);
          _guard_xfg_dispatch_icall_nop((void *)*plVar1,pvVar4,(longlong)iVar7 << 3);
        }
      }
      *(char *)(param_2 + 7) = (char)piVar8[2];
      puVar2 = (undefined1 *)((longlong)piVar8 + 9);
      piVar8 = piVar8 + 0x10;
      *(undefined1 *)((longlong)param_2 + 0x39) = *puVar2;
      param_4 = param_4 + -1;
      param_2 = param_2 + 8;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142f27530 FUN_142f27530 body=138 status=ok
// SIG undefined FUN_142f27530(void)

undefined8 FUN_142f27530(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined1 *)(param_2 + 0x28);
    do {
      TArray<FName,FDefaultAllocator>::operator=(puVar1 + -0x28,puVar1 + param_3 + -0x28);
      FText::operator=(puVar1 + -0x18,puVar1 + param_3 + -0x18);
      *puVar1 = puVar1[param_3];
      *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(puVar1 + param_3 + 8);
      puVar1[0x10] = puVar1[param_3 + 0x10];
      puVar1[0x11] = puVar1[param_3 + 0x11];
      puVar1 = puVar1 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142f275c0 FUN_142f275c0 body=124 status=ok
// SIG undefined FUN_142f275c0(void)

undefined8 FUN_142f275c0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined1 *)(param_2 + 0x10);
    do {
      TArray<FName,FDefaultAllocator>::operator=(puVar1 + -0x10,puVar1 + param_3 + -0x10);
      *puVar1 = puVar1[param_3];
      *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(puVar1 + param_3 + 8);
      *(undefined8 *)(puVar1 + 0x10) = *(undefined8 *)(puVar1 + param_3 + 0x10);
      *(undefined8 *)(puVar1 + 0x18) = *(undefined8 *)(puVar1 + param_3 + 0x18);
      puVar1 = puVar1 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142f27640 Destruct body=61 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FTriMeshCollisionData>::Destruct
               (undefined8 param_1,longlong *param_2)

{
  if (param_2[5] != 0) {
    FMemory::Free();
  }
  if (param_2[2] != 0) {
    FMemory::Free();
  }
  if (*param_2 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142f27690 EEnemyType_StaticEnum body=55 status=ok
// SIG undefined EEnemyType_StaticEnum(void)

void EEnemyType_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b3fc68 == 0) {
    uVar1 = Z_Construct_UPackage__Script_HighMoon();
    DAT_146b3fc68 = GetStaticEnum(FUN_142f28780,uVar1,L"EEdgeFlashType");
  }
  return;
}



// FUNCTION 142f276d0 EEnemyType_StaticEnum body=55 status=ok
// SIG undefined EEnemyType_StaticEnum(void)

void EEnemyType_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b3fc58 == 0) {
    uVar1 = Z_Construct_UPackage__Script_HighMoon();
    DAT_146b3fc58 = GetStaticEnum(FUN_142f287b0,uVar1,L"EGbxGFxSliderDirection");
  }
  return;
}



// FUNCTION 142f27710 EEnemyType_StaticEnum body=55 status=ok
// SIG undefined EEnemyType_StaticEnum(void)

void EEnemyType_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b3fc50 == 0) {
    uVar1 = Z_Construct_UPackage__Script_HighMoon();
    DAT_146b3fc50 = GetStaticEnum(FUN_142f287e0,uVar1,L"EGbxGFxSliderState");
  }
  return;
}



// FUNCTION 142f27750 EEnemyType_StaticEnum body=55 status=ok
// SIG undefined EEnemyType_StaticEnum(void)

void EEnemyType_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b3fc60 == 0) {
    uVar1 = Z_Construct_UPackage__Script_HighMoon();
    DAT_146b3fc60 = GetStaticEnum(FUN_142f28810,uVar1,L"EGbxGridWidgetFill");
  }
  return;
}



// FUNCTION 142f27790 EEnemyType_StaticEnum body=55 status=ok
// SIG undefined EEnemyType_StaticEnum(void)

void EEnemyType_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b3fc38 == 0) {
    uVar1 = Z_Construct_UPackage__Script_HighMoon();
    DAT_146b3fc38 = GetStaticEnum(FUN_142f28840,uVar1,L"EGbxHUDStateListType");
  }
  return;
}



// FUNCTION 142f277d0 EEnemyType_StaticEnum body=55 status=ok
// SIG undefined EEnemyType_StaticEnum(void)

void EEnemyType_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b3fc40 == 0) {
    uVar1 = Z_Construct_UPackage__Script_HighMoon();
    DAT_146b3fc40 = GetStaticEnum(FUN_142f28870,uVar1,L"EHUDInitializationAnimationSet");
  }
  return;
}



// FUNCTION 142f27810 EEnemyType_StaticEnum body=55 status=ok
// SIG undefined EEnemyType_StaticEnum(void)

void EEnemyType_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b3fc48 == 0) {
    uVar1 = Z_Construct_UPackage__Script_HighMoon();
    DAT_146b3fc48 = GetStaticEnum(FUN_142f288a0,uVar1,L"EHUDStateManagerVisibility");
  }
  return;
}



// FUNCTION 142f27850 FUN_142f27850 body=197 status=ok
// SIG undefined FUN_142f27850(void)

void FUN_142f27850(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [24];
  undefined1 local_20;
  undefined8 local_18;
  undefined2 local_10;
  
  local_48 = 0;
  local_40 = 0;
  uVar1 = FUN_1404b03b0();
  FText::FText(local_38,uVar1);
  local_20 = 0;
  local_18 = 0;
  local_10 = 1;
  lVar2 = UObject::FindFunction(param_1,DAT_146b40060);
  if (lVar2 != 0) {
    TArray<FName,FDefaultAllocator>::operator=(&local_48,param_2);
    FText::operator=(local_38,param_2 + 0x10);
    local_20 = *(undefined1 *)(param_2 + 0x28);
    local_18 = *(undefined8 *)(param_2 + 0x30);
    local_10 = *(undefined2 *)(param_2 + 0x38);
    (**(code **)(*param_1 + 0x208))(param_1,lVar2,&local_48);
  }
  UE4Tuple_Private::
  TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
  ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
            (&local_48);
  return;
}



// FUNCTION 142f27920 FUN_142f27920 body=56 status=ok
// SIG undefined FUN_142f27920(void)

void FUN_142f27920(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = UObject::FindFunction(param_1,DAT_146b40068);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000142f2794b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x208))(param_1,lVar1,0);
    return;
  }
  return;
}



// FUNCTION 142f27960 FUN_142f27960 body=88 status=ok
// SIG undefined FUN_142f27960(void)

void FUN_142f27960(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = UObject::FindFunction(param_1,DAT_146b40070);
  if (lVar1 != 0) {
    local_18 = param_2;
    local_10 = param_3;
    (**(code **)(*param_1 + 0x208))(param_1,lVar1,&local_18);
  }
  return;
}



// FUNCTION 142f279c0 FUN_142f279c0 body=70 status=ok
// SIG undefined FUN_142f279c0(void)

void FUN_142f279c0(longlong *param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined1 local_res18 [16];
  
  lVar1 = UObject::FindFunction(param_1,DAT_146b40078);
  if (lVar1 != 0) {
    local_res18[0] = param_2;
    (**(code **)(*param_1 + 0x208))(param_1,lVar1,local_res18);
  }
  return;
}



// FUNCTION 142f27a10 FUN_142f27a10 body=88 status=ok
// SIG undefined FUN_142f27a10(void)

void FUN_142f27a10(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = UObject::FindFunction(param_1,DAT_146b40080);
  if (lVar1 != 0) {
    local_18 = param_2;
    local_10 = param_3;
    (**(code **)(*param_1 + 0x208))(param_1,lVar1,&local_18);
  }
  return;
}



// FUNCTION 142f27a70 FUN_142f27a70 body=197 status=ok
// SIG undefined FUN_142f27a70(void)

void FUN_142f27a70(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [24];
  undefined1 local_20;
  undefined8 local_18;
  undefined2 local_10;
  
  local_48 = 0;
  local_40 = 0;
  uVar1 = FUN_1404b03b0();
  FText::FText(local_38,uVar1);
  local_20 = 0;
  local_18 = 0;
  local_10 = 1;
  lVar2 = UObject::FindFunction(param_1,DAT_146b40088);
  if (lVar2 != 0) {
    TArray<FName,FDefaultAllocator>::operator=(&local_48,param_2);
    FText::operator=(local_38,param_2 + 0x10);
    local_20 = *(undefined1 *)(param_2 + 0x28);
    local_18 = *(undefined8 *)(param_2 + 0x30);
    local_10 = *(undefined2 *)(param_2 + 0x38);
    (**(code **)(*param_1 + 0x208))(param_1,lVar2,&local_48);
  }
  UE4Tuple_Private::
  TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
  ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
            (&local_48);
  return;
}



// FUNCTION 142f27b40 FUN_142f27b40 body=70 status=ok
// SIG undefined FUN_142f27b40(void)

void FUN_142f27b40(longlong *param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined1 local_res18 [16];
  
  lVar1 = UObject::FindFunction(param_1,DAT_146b40090);
  if (lVar1 != 0) {
    local_res18[0] = param_2;
    (**(code **)(*param_1 + 0x208))(param_1,lVar1,local_res18);
  }
  return;
}



// FUNCTION 142f27b90 FUN_142f27b90 body=162 status=ok
// SIG undefined FUN_142f27b90(void)

longlong FUN_142f27b90(void)

{
  if (DAT_146b402f8 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxHUD",&DAT_146b402f8,FUN_142f281b0,0x628,0x1000000e,0,
                  L"GbxUI",FUN_142f26330,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  thunk_FUN_142950fd0,&LAB_140447700,0);
  }
  return DAT_146b402f8;
}



// FUNCTION 142f27c40 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGameInstanceGameParameters::GetPrivateStaticClass(void)

{
  if (DAT_146b40138 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxGFxProgressBar",&DAT_146b40138,FUN_142f281e0,800,0x10000008,
                  0,L"Engine",&LAB_142f264f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141326ad0,&LAB_140447700,0);
  }
  return DAT_146b40138;
}



// FUNCTION 142f27cf0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGameInstanceGameParameters::GetPrivateStaticClass(void)

{
  if (DAT_146b40148 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxGFxRadioButtonList",&DAT_146b40148,FUN_140447710,800,
                  0x10000008,0,L"Engine",FUN_142f26510,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b40148;
}



// FUNCTION 142f27da0 FUN_142f27da0 body=162 status=ok
// SIG undefined FUN_142f27da0(void)

longlong FUN_142f27da0(void)

{
  if (DAT_146b401b8 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxGFxSprite",&DAT_146b401b8,FUN_140447710,0x180,0x10000008,0,
                  L"Engine",FUN_142f266c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141326ad0,&LAB_140447700,0);
  }
  return DAT_146b401b8;
}



// FUNCTION 142f27e50 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UBlueprintGeneratedClass::GetPrivateStaticClass(void)

{
  if (DAT_146b40328 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxHUDContainer",&DAT_146b40328,FUN_140447710,0x2e0,0x10000000,
                  0,L"Engine",FUN_142f26820,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141301c80,&LAB_140447700,0);
  }
  return DAT_146b40328;
}



// FUNCTION 142f27f00 FUN_142f27f00 body=6 status=ok
// SIG undefined FUN_142f27f00(void)

undefined8 FUN_142f27f00(void)

{
  return 0x2ac03181;
}



// FUNCTION 142f27f10 FUN_142f27f10 body=6 status=ok
// SIG undefined FUN_142f27f10(void)

undefined8 FUN_142f27f10(void)

{
  return 0x179e8173;
}



// FUNCTION 142f27f20 FUN_142f27f20 body=6 status=ok
// SIG undefined FUN_142f27f20(void)

undefined8 FUN_142f27f20(void)

{
  return 0x5864bd85;
}



// FUNCTION 142f27f30 FUN_142f27f30 body=6 status=ok
// SIG undefined FUN_142f27f30(void)

undefined8 FUN_142f27f30(void)

{
  return 0xa4fc13a9;
}



// FUNCTION 142f27f40 FUN_142f27f40 body=6 status=ok
// SIG undefined FUN_142f27f40(void)

undefined8 FUN_142f27f40(void)

{
  return 0xb774958b;
}



// FUNCTION 142f27f50 FUN_142f27f50 body=6 status=ok
// SIG undefined FUN_142f27f50(void)

undefined8 FUN_142f27f50(void)

{
  return 0x658d07f3;
}



// FUNCTION 142f27f60 FUN_142f27f60 body=6 status=ok
// SIG undefined FUN_142f27f60(void)

undefined8 FUN_142f27f60(void)

{
  return 0x87753c92;
}



// FUNCTION 142f27f70 FUN_142f27f70 body=6 status=ok
// SIG undefined FUN_142f27f70(void)

undefined8 FUN_142f27f70(void)

{
  return 0xf9259a45;
}



// FUNCTION 142f27f80 FUN_142f27f80 body=57 status=ok
// SIG undefined FUN_142f27f80(void)

void FUN_142f27f80(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146b400a0);
                    /* WARNING: Could not recover jumptable at 0x000142f27fb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 142f27fc0 FUN_142f27fc0 body=57 status=ok
// SIG undefined FUN_142f27fc0(void)

void FUN_142f27fc0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146b400a8);
                    /* WARNING: Could not recover jumptable at 0x000142f27ff6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 142f28000 FUN_142f28000 body=57 status=ok
// SIG undefined FUN_142f28000(void)

void FUN_142f28000(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146b400b0);
                    /* WARNING: Could not recover jumptable at 0x000142f28036. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 142f28040 FUN_142f28040 body=64 status=ok
// SIG undefined FUN_142f28040(void)

void FUN_142f28040(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  local_res8 = *param_2;
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146b40040);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 142f28080 FUN_142f28080 body=57 status=ok
// SIG undefined FUN_142f28080(void)

void FUN_142f28080(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146b400b8);
                    /* WARNING: Could not recover jumptable at 0x000142f280b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 142f280c0 FUN_142f280c0 body=148 status=ok
// SIG undefined FUN_142f280c0(void)

void FUN_142f280c0(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                  undefined4 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  
  lVar1 = *param_1;
  local_3c = *param_5;
  local_34 = *(undefined1 *)(param_5 + 2);
  local_38 = param_5[1];
  local_30 = param_5[3];
  local_28 = *(undefined8 *)(param_5 + 5);
  uStack_20 = *(undefined8 *)(param_5 + 7);
  local_2c = param_5[4];
  local_18 = param_5[9];
  local_48 = param_2;
  local_44 = param_3;
  local_40 = param_4;
  uVar2 = FUN_14178ac60(local_18,DAT_146b40048);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_48);
  return;
}



// FUNCTION 142f281b0 FUN_142f281b0 body=34 status=ok
// SIG undefined FUN_142f281b0(void)

void FUN_142f281b0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142f27b90();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ClearHUDStates_1459b4600,0xe);
  return;
}



// FUNCTION 142f281e0 FUN_142f281e0 body=34 status=ok
// SIG undefined FUN_142f281e0(void)

void FUN_142f281e0(void)

{
  undefined8 uVar1;
  
  uVar1 = UGameInstanceGameParameters::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_EnteredPercentRange_1459b29a0,9);
  return;
}



// FUNCTION 142f28210 FUN_142f28210 body=34 status=ok
// SIG undefined FUN_142f28210(void)

void FUN_142f28210(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142f25280();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_BeginLeftSlide_1459b31c8,3);
  return;
}



// FUNCTION 142f28240 FUN_142f28240 body=34 status=ok
// SIG undefined FUN_142f28240(void)

void FUN_142f28240(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142f25af0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnHintClicked_1459b3fd8,1);
  return;
}



// FUNCTION 142f28270 FUN_142f28270 body=82 status=ok
// SIG undefined FUN_142f28270(void)

void FUN_142f28270(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b40350 == 0) {
    uVar1 = FUN_142f27f00();
    uVar2 = Z_Construct_UPackage__Script_HighMoon();
    DAT_146b40350 = GetStaticStruct(FUN_142f288d0,uVar2,L"GbxGFxHUDWidgetInfo",0x20,uVar1);
  }
  return;
}



// FUNCTION 142f282d0 FUN_142f282d0 body=82 status=ok
// SIG undefined FUN_142f282d0(void)

void FUN_142f282d0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b40178 == 0) {
    uVar1 = FUN_142f27f10();
    uVar2 = Z_Construct_UPackage__Script_HighMoon();
    DAT_146b40178 = GetStaticStruct(FUN_142f28900,uVar2,L"GbxGFxSliderAcceleration",0x10,uVar1);
  }
  return;
}



// FUNCTION 142f28330 FUN_142f28330 body=82 status=ok
// SIG undefined FUN_142f28330(void)

void FUN_142f28330(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b40380 == 0) {
    uVar1 = FUN_142f27f20();
    uVar2 = Z_Construct_UPackage__Script_HighMoon();
    DAT_146b40380 = GetStaticStruct(FUN_142f28930,uVar2,L"GbxHUDFeedbackManager",0x68,uVar1);
  }
  return;
}



// FUNCTION 142f28390 FUN_142f28390 body=82 status=ok
// SIG undefined FUN_142f28390(void)

void FUN_142f28390(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b40330 == 0) {
    uVar1 = FUN_142f27f30();
    uVar2 = Z_Construct_UPackage__Script_HighMoon();
    DAT_146b40330 = GetStaticStruct(FUN_142f28960,uVar2,L"GbxHUDLayoutData",0x10,uVar1);
  }
  return;
}



// FUNCTION 142f283f0 FUN_142f283f0 body=82 status=ok
// SIG undefined FUN_142f283f0(void)

void FUN_142f283f0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b40340 == 0) {
    uVar1 = FUN_142f27f40();
    uVar2 = Z_Construct_UPackage__Script_HighMoon();
    DAT_146b40340 = GetStaticStruct(FUN_142f28990,uVar2,L"GbxHUDLayoutTableRow",0x30,uVar1);
  }
  return;
}



// FUNCTION 142f28450 FUN_142f28450 body=82 status=ok
// SIG undefined FUN_142f28450(void)

void FUN_142f28450(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b403d0 == 0) {
    uVar1 = FUN_142f27f50();
    uVar2 = Z_Construct_UPackage__Script_HighMoon();
    DAT_146b403d0 = GetStaticStruct(FUN_142f289c0,uVar2,L"GbxHUDStateManager",0x40,uVar1);
  }
  return;
}



// FUNCTION 142f284b0 FUN_142f284b0 body=82 status=ok
// SIG undefined FUN_142f284b0(void)

void FUN_142f284b0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b40240 == 0) {
    uVar1 = FUN_142f27f60();
    uVar2 = Z_Construct_UPackage__Script_HighMoon();
    DAT_146b40240 = GetStaticStruct(FUN_142f289f0,uVar2,L"GbxHintInfo",0x40,uVar1);
  }
  return;
}



// FUNCTION 142f28510 FUN_142f28510 body=82 status=ok
// SIG undefined FUN_142f28510(void)

void FUN_142f28510(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b401e8 == 0) {
    uVar1 = FUN_142f27f70();
    uVar2 = Z_Construct_UPackage__Script_HighMoon();
    DAT_146b401e8 = GetStaticStruct(FUN_142f28a20,uVar2,L"GbxHintWidgetMapItem",0x30,uVar1);
  }
  return;
}



// FUNCTION 142f28570 FUN_142f28570 body=47 status=ok
// SIG undefined FUN_142f28570(void)

longlong FUN_142f28570(void)

{
  if (DAT_146b40390 == 0) {
    FUN_141786440(&DAT_146b40390,&PTR_FUN_1459b2600);
  }
  return DAT_146b40390;
}



// FUNCTION 142f285a0 FUN_142f285a0 body=47 status=ok
// SIG undefined FUN_142f285a0(void)

longlong FUN_142f285a0(void)

{
  if (DAT_146b40140 == 0) {
    FUN_141786440(&DAT_146b40140,&PTR_GetPrivateStaticClass_1459ae390);
  }
  return DAT_146b40140;
}


