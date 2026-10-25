// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141434e50 FUN_141434e50 body=447 status=ok
// SIG undefined FUN_141434e50(void)

void FUN_141434e50(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint *puVar8;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar2 != 0) {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar4 = *puVar8;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar7 = local_68 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar7;
      if (bVar3) goto LAB_141434f21;
      uVar4 = puVar8[lVar5 + 1];
    }
    uStack_64 = -uVar4 & uVar4;
    iVar7 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    iStack_54 = (iStack_50 - iVar7) + 0x1f;
    if (iVar2 < iStack_54) {
LAB_141434f21:
      iStack_54 = iVar2;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar2) {
    do {
      plVar6 = (longlong *)((longlong)iStack_2c * 0x40 + *param_1);
      if (plVar6[5] != 0) {
        FMemory::Free();
      }
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1,param_2);
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



// FUNCTION 141435010 FUN_141435010 body=162 status=ok
// SIG undefined FUN_141435010(void)

longlong FUN_141435010(void)

{
  if (DAT_146893ba8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakLightProjectile",&DAT_146893ba8,FUN_141435360,0x490,
                  0x10000000,0,L"Engine",&LAB_1414336f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141435280,thunk_FUN_1430aee90,0);
  }
  return DAT_146893ba8;
}



// FUNCTION 1414350c0 FUN_1414350c0 body=6 status=ok
// SIG undefined FUN_1414350c0(void)

undefined8 FUN_1414350c0(void)

{
  return 0x904adfc8;
}



// FUNCTION 1414350d0 FUN_1414350d0 body=6 status=ok
// SIG undefined FUN_1414350d0(void)

undefined8 FUN_1414350d0(void)

{
  return 0x1a94f354;
}



// FUNCTION 1414350e0 FUN_1414350e0 body=6 status=ok
// SIG undefined FUN_1414350e0(void)

undefined8 FUN_1414350e0(void)

{
  return 0x4a6bdd88;
}



// FUNCTION 1414350f0 FUN_1414350f0 body=6 status=ok
// SIG undefined FUN_1414350f0(void)

undefined8 FUN_1414350f0(void)

{
  return 0xf99e5db7;
}



// FUNCTION 141435100 FUN_141435100 body=6 status=ok
// SIG undefined FUN_141435100(void)

undefined8 FUN_141435100(void)

{
  return 0x3aab2d55;
}



// FUNCTION 141435110 FUN_141435110 body=6 status=ok
// SIG undefined FUN_141435110(void)

undefined8 FUN_141435110(void)

{
  return 0x4ae64f;
}



// FUNCTION 141435120 FUN_141435120 body=6 status=ok
// SIG undefined FUN_141435120(void)

undefined8 FUN_141435120(void)

{
  return 0x538ee46a;
}



// FUNCTION 141435230 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void AFGConveyorBeltHologram::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 141435240 StaticClass body=5 status=ok
// SIG undefined StaticClass(void)

void ULevelStreamingAlwaysLoaded::StaticClass(void)

{
  StaticClass();
  return;
}



// FUNCTION 141435260 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UScrollBar::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 141435290 thunk_FUN_1430aef40 body=5 status=ok
// SIG undefined thunk_FUN_1430aef40(void)

void thunk_FUN_1430aef40(void)

{
  FUN_1430aef40();
  return;
}



// FUNCTION 1414352a0 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void ULocalPlayer::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 1414352b0 thunk_FUN_14302d370 body=5 status=ok
// SIG undefined thunk_FUN_14302d370(void)

void thunk_FUN_14302d370(void)

{
  FUN_14302d370();
  return;
}



// FUNCTION 1414352c0 thunk_FUN_14143aad0 body=5 status=ok
// SIG undefined thunk_FUN_14143aad0(void)

void thunk_FUN_14143aad0(void)

{
  FUN_14143aad0();
  return;
}



// FUNCTION 1414352d0 FUN_1414352d0 body=34 status=ok
// SIG undefined FUN_1414352d0(void)

void FUN_1414352d0(void)

{
  undefined8 uVar1;
  
  uVar1 = USoundNodeEnveloper::StaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnLevelLoadedChanged_144a828a8,1);
  return;
}



// FUNCTION 141435300 FUN_141435300 body=34 status=ok
// SIG undefined FUN_141435300(void)

void FUN_141435300(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141432c40();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_InitOakChildData_144a82af8,2);
  return;
}



// FUNCTION 141435330 FUN_141435330 body=34 status=ok
// SIG undefined FUN_141435330(void)

void FUN_141435330(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141433100();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_CreateOakLightBeamFromData_144a82b18,1);
  return;
}



// FUNCTION 141435360 FUN_141435360 body=34 status=ok
// SIG undefined FUN_141435360(void)

void FUN_141435360(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141435010();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_InitOakChildData_144a82c40,1);
  return;
}



// FUNCTION 141435390 FUN_141435390 body=34 status=ok
// SIG undefined FUN_141435390(void)

void FUN_141435390(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141432d90();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_CreateOakLightProjectileFromData_144a82c50,4);
  return;
}



// FUNCTION 1414353c0 FUN_1414353c0 body=34 status=ok
// SIG undefined FUN_1414353c0(void)

void FUN_1414353c0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141432660();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnConfirmSignIntoAccount_144a83590,1);
  return;
}



// FUNCTION 1414353f0 StaticRegisterNativesUUGBrightnessScreenUW body=34 status=ok
// SIG undefined StaticRegisterNativesUUGBrightnessScreenUW(void)

void UUGBrightnessScreenUW::StaticRegisterNativesUUGBrightnessScreenUW(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_DetachAllAttachedLoot_144a835a0,3);
  return;
}



// FUNCTION 141435420 FUN_141435420 body=34 status=ok
// SIG undefined FUN_141435420(void)

void FUN_141435420(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141431de0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SpawnAndDropLoot_144a835d0,1);
  return;
}



// FUNCTION 141435450 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventSectionTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146893ac0 == 0) {
    uVar1 = FUN_1414350c0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146893ac0 = GetStaticStruct(FUN_141435a20,uVar2,L"LevelledSaveGameData",0xc0,uVar1);
  }
  return;
}



// FUNCTION 1414354b0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146893a38 == 0) {
    uVar1 = FUN_1414350d0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146893a38 = GetStaticStruct(FUN_141435a50,uVar2,L"OakJAKFeedbackData",0x10,uVar1);
  }
  return;
}



// FUNCTION 141435510 FUN_141435510 body=82 status=ok
// SIG undefined FUN_141435510(void)

void FUN_141435510(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146893b10 == 0) {
    uVar1 = FUN_1414350e0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146893b10 = GetStaticStruct(FUN_141435a80,uVar2,L"OakLevelSyncMessageText",0x50,uVar1);
  }
  return;
}



// FUNCTION 141435570 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMeleeWeaponData::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146893b30 == 0) {
    uVar1 = FUN_1414350f0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146893b30 =
         GetStaticStruct(FUN_141435ab0,uVar2,L"OakLightBeamInitializationData",0x138,uVar1);
  }
  return;
}



// FUNCTION 1414355d0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAnimNode_SpringBone::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146893b88 == 0) {
    uVar1 = FUN_141435100();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146893b88 =
         GetStaticStruct(FUN_141435ae0,uVar2,L"OakLightProjectileInitializationData",0x158,uVar1);
  }
  return;
}



// FUNCTION 141435630 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneParticleSectionTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146893ca0 == 0) {
    uVar1 = FUN_141435110();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146893ca0 = GetStaticStruct(FUN_141435b10,uVar2,L"OakMailItem",0xb8,uVar1);
  }
  return;
}



// FUNCTION 141435690 FUN_141435690 body=82 status=ok
// SIG undefined FUN_141435690(void)

void FUN_141435690(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146893c10 == 0) {
    uVar1 = FUN_141435120();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146893c10 = GetStaticStruct(FUN_141435b40,uVar2,L"WeightedLoadingTooltip",0x20,uVar1);
  }
  return;
}



// FUNCTION 1414356f0 FUN_1414356f0 body=47 status=ok
// SIG undefined FUN_1414356f0(void)

longlong FUN_1414356f0(void)

{
  if (DAT_146893aa0 == 0) {
    FUN_141786440(&DAT_146893aa0,&PTR_FUN_144a79090);
  }
  return DAT_146893aa0;
}



// FUNCTION 141435720 FUN_141435720 body=47 status=ok
// SIG undefined FUN_141435720(void)

longlong FUN_141435720(void)

{
  if (DAT_146893ab0 == 0) {
    FUN_141786440(&DAT_146893ab0,&PTR_FUN_144a79200);
  }
  return DAT_146893ab0;
}



// FUNCTION 141435750 FUN_141435750 body=47 status=ok
// SIG undefined FUN_141435750(void)

longlong FUN_141435750(void)

{
  if (DAT_146893bf0 == 0) {
    FUN_141786440(&DAT_146893bf0,&PTR_FUN_144a80410);
  }
  return DAT_146893bf0;
}



// FUNCTION 141435780 FUN_141435780 body=47 status=ok
// SIG undefined FUN_141435780(void)

longlong FUN_141435780(void)

{
  if (DAT_146893c00 == 0) {
    FUN_141786440(&DAT_146893c00,&PTR_FUN_144a80700);
  }
  return DAT_146893c00;
}



// FUNCTION 1414357b0 FUN_1414357b0 body=47 status=ok
// SIG undefined FUN_1414357b0(void)

longlong FUN_1414357b0(void)

{
  if (DAT_146893a80 == 0) {
    FUN_141786440(&DAT_146893a80,&PTR_FUN_144a7c4f0);
  }
  return DAT_146893a80;
}



// FUNCTION 1414357e0 FUN_1414357e0 body=47 status=ok
// SIG undefined FUN_1414357e0(void)

longlong FUN_1414357e0(void)

{
  if (DAT_146893a48 == 0) {
    FUN_141786440(&DAT_146893a48,&PTR_FUN_144a7da60);
  }
  return DAT_146893a48;
}



// FUNCTION 141435810 FUN_141435810 body=47 status=ok
// SIG undefined FUN_141435810(void)

longlong FUN_141435810(void)

{
  if (DAT_146893a58 == 0) {
    FUN_141786440(&DAT_146893a58,&PTR_FUN_144a7e090);
  }
  return DAT_146893a58;
}



// FUNCTION 141435840 FUN_141435840 body=47 status=ok
// SIG undefined FUN_141435840(void)

longlong FUN_141435840(void)

{
  if (DAT_146893a68 == 0) {
    FUN_141786440(&DAT_146893a68,&PTR_GetPrivateStaticClass_144a7b650);
  }
  return DAT_146893a68;
}



// FUNCTION 141435870 FUN_141435870 body=47 status=ok
// SIG undefined FUN_141435870(void)

longlong FUN_141435870(void)

{
  if (DAT_146893a90 == 0) {
    FUN_141786440(&DAT_146893a90,&PTR_FUN_144a7d560);
  }
  return DAT_146893a90;
}



// FUNCTION 1414358a0 FUN_1414358a0 body=47 status=ok
// SIG undefined FUN_1414358a0(void)

longlong FUN_1414358a0(void)

{
  if (DAT_146893ad0 == 0) {
    FUN_141786440(&DAT_146893ad0,&PTR_FUN_144a7b0d0);
  }
  return DAT_146893ad0;
}



// FUNCTION 1414358d0 FUN_1414358d0 body=47 status=ok
// SIG undefined FUN_1414358d0(void)

longlong FUN_1414358d0(void)

{
  if (DAT_146893b20 == 0) {
    FUN_141786440(&DAT_146893b20,&PTR_FUN_144a7e710);
  }
  return DAT_146893b20;
}



// FUNCTION 141435900 FUN_141435900 body=47 status=ok
// SIG undefined FUN_141435900(void)

longlong FUN_141435900(void)

{
  if (DAT_146893b60 == 0) {
    FUN_141786440(&DAT_146893b60,&PTR_FUN_144a80240);
  }
  return DAT_146893b60;
}



// FUNCTION 141435930 FUN_141435930 body=47 status=ok
// SIG undefined FUN_141435930(void)

longlong FUN_141435930(void)

{
  if (DAT_146893c20 == 0) {
    FUN_141786440(&DAT_146893c20,&PTR_FUN_144a7a020);
  }
  return DAT_146893c20;
}



// FUNCTION 141435960 FUN_141435960 body=47 status=ok
// SIG undefined FUN_141435960(void)

longlong FUN_141435960(void)

{
  if (DAT_146893c30 == 0) {
    FUN_141786440(&DAT_146893c30,&PTR_GetPrivateStaticClass_144a770d0);
  }
  return DAT_146893c30;
}



// FUNCTION 141435990 FUN_141435990 body=47 status=ok
// SIG undefined FUN_141435990(void)

longlong FUN_141435990(void)

{
  if (DAT_146893ae0 == 0) {
    FUN_141786a30(&DAT_146893ae0,&PTR_FUN_1463dfb70);
  }
  return DAT_146893ae0;
}



// FUNCTION 1414359c0 FUN_1414359c0 body=47 status=ok
// SIG undefined FUN_1414359c0(void)

longlong FUN_1414359c0(void)

{
  if (DAT_146893c98 == 0) {
    FUN_1417866a0(&DAT_146893c98,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463e29f0);
  }
  return DAT_146893c98;
}



// FUNCTION 1414359f0 FUN_1414359f0 body=47 status=ok
// SIG undefined FUN_1414359f0(void)

longlong FUN_1414359f0(void)

{
  if (DAT_146893a78 == 0) {
    FUN_1417866a0(&DAT_146893a78,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463e29a0);
  }
  return DAT_146893a78;
}



// FUNCTION 141435a20 FUN_141435a20 body=47 status=ok
// SIG undefined FUN_141435a20(void)

longlong FUN_141435a20(void)

{
  if (DAT_146893ac8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146893ac8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463dfa40);
  }
  return DAT_146893ac8;
}



// FUNCTION 141435a50 FUN_141435a50 body=47 status=ok
// SIG undefined FUN_141435a50(void)

longlong FUN_141435a50(void)

{
  if (DAT_146893a40 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146893a40,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463de7e0);
  }
  return DAT_146893a40;
}



// FUNCTION 141435a80 FUN_141435a80 body=47 status=ok
// SIG undefined FUN_141435a80(void)

longlong FUN_141435a80(void)

{
  if (DAT_146893b18 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146893b18,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463dfeb0);
  }
  return DAT_146893b18;
}



// FUNCTION 141435ab0 FUN_141435ab0 body=47 status=ok
// SIG undefined FUN_141435ab0(void)

longlong FUN_141435ab0(void)

{
  if (DAT_146893b38 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146893b38,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463dffd0);
  }
  return DAT_146893b38;
}



// FUNCTION 141435ae0 FUN_141435ae0 body=47 status=ok
// SIG undefined FUN_141435ae0(void)

longlong FUN_141435ae0(void)

{
  if (DAT_146893b90 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146893b90,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463e0460);
  }
  return DAT_146893b90;
}



// FUNCTION 141435b10 FUN_141435b10 body=47 status=ok
// SIG undefined FUN_141435b10(void)

longlong FUN_141435b10(void)

{
  if (DAT_146893ca8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146893ca8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463e2950);
  }
  return DAT_146893ca8;
}



// FUNCTION 141435b40 FUN_141435b40 body=47 status=ok
// SIG undefined FUN_141435b40(void)

longlong FUN_141435b40(void)

{
  if (DAT_146893c18 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146893c18,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463e10c0);
  }
  return DAT_146893c18;
}



// FUNCTION 141435b70 FUN_141435b70 body=206 status=ok
// SIG undefined FUN_141435b70(void)

void FUN_141435b70(undefined8 param_1,longlong param_2)

{
  undefined ***pppuVar1;
  undefined **local_148 [29];
  longlong local_60;
  undefined1 local_30 [8];
  undefined8 local_28;
  
  FUN_141433890(local_148);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_148);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_148);
  }
  pppuVar1 = local_148;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar1 = *(undefined ****)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  thunk_FUN_1430409b0(pppuVar1);
  local_148[0] = &PTR_FUN_14422f7d8;
  FWeakObjectPtr::operator=(local_30,0);
  local_28 = 0;
  if (local_60 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141435c40 FUN_141435c40 body=255 status=ok
// SIG undefined FUN_141435c40(void)

void FUN_141435c40(undefined8 param_1,longlong param_2)

{
  undefined ***pppuVar1;
  undefined **local_168 [26];
  longlong local_98;
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_140a25850(local_168);
  local_168[0] = &PTR_FUN_1442c5630;
  local_28 = 0xbf800000;
  uStack_24 = 0xbf800000;
  uStack_20 = 0xbf800000;
  uStack_1c = 0x3f800000;
  local_18 = 0x3f800000;
  local_14 = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_168);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_168);
  }
  pppuVar1 = local_168;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar1 = *(undefined ****)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  thunk_FUN_143040df0(pppuVar1);
  local_168[0] = &PTR_FUN_1441f17f0;
  FWeakObjectPtr::operator=(local_40,0);
  local_38 = 0;
  if (local_98 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141435d40 FUN_141435d40 body=351 status=ok
// SIG undefined FUN_141435d40(void)

void FUN_141435d40(undefined8 param_1,longlong param_2)

{
  undefined ***pppuVar1;
  undefined4 local_res10 [4];
  undefined8 local_res20;
  undefined **local_168 [26];
  longlong local_98;
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_140a25850(local_168);
  local_168[0] = &PTR_FUN_1442c5630;
  local_28 = 0xbf800000;
  uStack_24 = 0xbf800000;
  uStack_20 = 0xbf800000;
  uStack_1c = 0x3f800000;
  local_18 = 0x3f800000;
  local_14 = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_168);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_168);
  }
  local_res10[0] = 0;
  pppuVar1 = local_168;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar1 = *(undefined ****)(param_2 + 0x38);
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
  thunk_FUN_143040e50(pppuVar1,local_res10[0]);
  local_168[0] = &PTR_FUN_1441f17f0;
  FWeakObjectPtr::operator=(local_40,0);
  local_res20 = 0;
  local_38 = 0;
  if (local_98 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141435ea0 FUN_141435ea0 body=128 status=ok
// SIG undefined FUN_141435ea0(void)

void FUN_141435ea0(undefined8 param_1,longlong param_2)

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
  FUN_140b23560(param_1,local_res10);
  return;
}



// FUNCTION 141435f20 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_140b23660(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 141435fe0 FUN_141435fe0 body=128 status=ok
// SIG undefined FUN_141435fe0(void)

void FUN_141435fe0(undefined8 param_1,longlong param_2)

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
  FUN_140b2f1e0(param_1,local_res10);
  return;
}



// FUNCTION 141436060 FUN_141436060 body=224 status=ok
// SIG undefined FUN_141436060(void)

void FUN_141436060(undefined8 param_1,longlong param_2)

{
  undefined ***pppuVar1;
  undefined **local_148 [29];
  longlong local_60;
  undefined1 local_30 [8];
  undefined8 local_28;
  
  FUN_141433890(local_148);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_148);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_148);
  }
  pppuVar1 = local_148;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar1 = *(undefined ****)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_141271750(param_1,pppuVar1);
  local_148[0] = &PTR_FUN_14422f7d8;
  FWeakObjectPtr::operator=(local_30,0);
  local_28 = 0;
  if (local_60 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141436140 FUN_141436140 body=277 status=ok
// SIG undefined FUN_141436140(void)

void FUN_141436140(longlong *param_1,longlong param_2)

{
  undefined ***pppuVar1;
  undefined **local_168 [26];
  longlong local_98;
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_140a25850(local_168);
  local_168[0] = &PTR_FUN_1442c5630;
  local_28 = 0xbf800000;
  uStack_24 = 0xbf800000;
  uStack_20 = 0xbf800000;
  uStack_1c = 0x3f800000;
  local_18 = 0x3f800000;
  local_14 = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_168);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_168);
  }
  pppuVar1 = local_168;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar1 = *(undefined ****)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x3c8))(param_1,pppuVar1);
  local_168[0] = &PTR_FUN_1441f17f0;
  FWeakObjectPtr::operator=(local_40,0);
  local_38 = 0;
  if (local_98 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141436260 FUN_141436260 body=387 status=ok
// SIG undefined FUN_141436260(void)

void FUN_141436260(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined1 local_48 [8];
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_38 [8];
  undefined8 local_30;
  longlong *plStack_28;
  undefined1 local_20;
  
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
  FName::FName(local_48,&DAT_143f3eda8,1);
  local_3c = 0;
  local_40 = 0xffffffff;
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_30 = 0;
  plStack_28 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar6 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140e55d20(param_1,local_res20,local_res10[0],puVar6);
  plVar5 = plStack_28;
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_28 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_28)(plStack_28);
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



// FUNCTION 141436410 FUN_141436410 body=128 status=ok
// SIG undefined FUN_141436410(void)

void FUN_141436410(undefined8 param_1,longlong param_2)

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
  FUN_1412763f0(param_1,local_res10);
  return;
}



// FUNCTION 141436490 FUN_141436490 body=128 status=ok
// SIG undefined FUN_141436490(void)

void FUN_141436490(undefined8 param_1,longlong param_2)

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
  FUN_140b41430(param_1,local_res10);
  return;
}



// FUNCTION 141436510 FUN_141436510 body=847 status=ok
// SIG undefined FUN_141436510(void)

void FUN_141436510(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  undefined4 local_res20 [2];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80 [2];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_58 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_60 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_80[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_80);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_80);
  }
  local_70 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_70);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_84 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_84);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_84);
  }
  local_88 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_40);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_68 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_50);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_78 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_20 = local_48;
  local_10 = local_38;
  local_28 = local_50;
  local_18 = local_40;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1412811a0(local_58,local_60,local_80[0],local_70,local_84,local_88,local_res20[0],&local_18,
                local_68,&local_28,local_78,local_res10[0] != 0);
  return;
}



// FUNCTION 141436860 FUN_141436860 body=950 status=ok
// SIG undefined FUN_141436860(void)

void FUN_141436860(undefined8 param_1,longlong param_2)

{
  undefined ***pppuVar1;
  int local_res10 [4];
  undefined4 local_res20 [2];
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8 [2];
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined **local_178 [26];
  longlong local_a8;
  undefined1 local_50 [8];
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_1c8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_1c8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_1c8);
  }
  FUN_140a25850(local_178);
  local_178[0] = &PTR_FUN_1442c5630;
  local_38 = 0xbf800000;
  uStack_34 = 0xbf800000;
  uStack_30 = 0xbf800000;
  uStack_2c = 0x3f800000;
  local_28 = 0x3f800000;
  local_24 = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_178);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_178);
  }
  local_1d8 = 0;
  pppuVar1 = local_178;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar1 = *(undefined ****)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_1d8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_1d8);
  }
  local_1e4 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_1e4);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_1e4);
  }
  local_1e8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_1e8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_1e8);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_198);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_198);
  }
  local_1d0 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_1d0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_1d0);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_1a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a8);
  }
  local_1e0 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_1e0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_1e0);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_1b0 = local_1a0;
  local_180 = local_190;
  local_1b8 = local_1a8;
  local_188 = local_198;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_141281310(local_1c8[0],pppuVar1,local_1d8,local_1e4,local_1e8,local_res20[0],&local_188,
                local_1d0,&local_1b8,local_1e0,local_res10[0] != 0);
  local_178[0] = &PTR_FUN_1441f17f0;
  FWeakObjectPtr::operator=(local_50,0);
  local_1b8 = 0;
  local_48 = 0;
  if (local_a8 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141436c40 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGBlizzard::GetPrivateStaticClass(void)

{
  if (DAT_1468943c0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakMissionCircleOfSlaughter",&DAT_1468943c0,FUN_140447710,
                  0x510,0x10000000,0,L"Engine",&LAB_1414390b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_141437870,&LAB_140447700,0);
  }
  return DAT_1468943c0;
}



// FUNCTION 141436d00 FUN_141436d00 body=47 status=ok
// SIG undefined FUN_141436d00(void)

longlong FUN_141436d00(void)

{
  if (DAT_146894180 == 0) {
    FUN_141786440(&DAT_146894180,&PTR_FUN_144a84640);
  }
  return DAT_146894180;
}



// FUNCTION 141436d30 FUN_141436d30 body=47 status=ok
// SIG undefined FUN_141436d30(void)

longlong FUN_141436d30(void)

{
  if (DAT_146894178 == 0) {
    FUN_141786a30(&DAT_146894178,&PTR_FUN_1463e2ec0);
  }
  return DAT_146894178;
}



// FUNCTION 141436d60 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UInputKeySelector::GetPrivateStaticClass(void)

{
  if (DAT_146894280 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakMenuPlayerState",&DAT_146894280,FUN_140447710,0x680,
                  0x10000000,0,L"Engine",&LAB_141438ac0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146894280;
}



// FUNCTION 141436e20 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AVehiclePlayerController::GetPrivateStaticClass(void)

{
  if (DAT_146894490 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakMissionRareSpawner",&DAT_146894490,FUN_14143ad90,0x858,
                  0x10000004,0,L"Editor",FUN_141438b50,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  USoCharacterMovementComponent::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146894490;
}



// FUNCTION 141436ed0 FUN_141436ed0 body=47 status=ok
// SIG undefined FUN_141436ed0(void)

longlong FUN_141436ed0(void)

{
  if (DAT_146894488 == 0) {
    FUN_141786440(&DAT_146894488,&PTR_GetPrivateStaticClass_144a84040);
  }
  return DAT_146894488;
}



// FUNCTION 141436f00 FUN_141436f00 body=47 status=ok
// SIG undefined FUN_141436f00(void)

longlong FUN_141436f00(void)

{
  if (DAT_146894480 == 0) {
    FUN_141786a30(&DAT_146894480,&PTR_FUN_1463e6220);
  }
  return DAT_146894480;
}



// FUNCTION 141436f30 FUN_141436f30 body=53 status=ok
// SIG undefined FUN_141436f30(void)

void FUN_141436f30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_144a8ff70;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141436f80 FUN_141436f80 body=53 status=ok
// SIG undefined FUN_141436f80(void)

void FUN_141436f80(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_144a90088;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141436fd0 FUN_141436fd0 body=162 status=ok
// SIG undefined FUN_141436fd0(void)

longlong FUN_141436fd0(void)

{
  if (DAT_146894198 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakManufacturerData",&DAT_146894198,FUN_140447710,0x138,
                  0x10000000,0,L"Engine",FUN_141438dc0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14143ad20,&LAB_140447700,0);
  }
  return DAT_146894198;
}



// FUNCTION 141437080 FUN_141437080 body=162 status=ok
// SIG undefined FUN_141437080(void)

longlong FUN_141437080(void)

{
  if (DAT_146894250 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakMayhemModifiersDataAsset",&DAT_146894250,FUN_140447710,
                  0x58,0x12000000,0,L"Engine",FUN_141438c10,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146894250;
}



// FUNCTION 141437130 FUN_141437130 body=162 status=ok
// SIG undefined FUN_141437130(void)

longlong FUN_141437130(void)

{
  if (DAT_1468943d8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakMissionDirectorComponent",&DAT_1468943d8,FUN_14143aeb0,
                  0x3c0,0x10000000,0,L"Engine",FUN_1414390c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142f71e20,&LAB_140447700,0);
  }
  return DAT_1468943d8;
}



// FUNCTION 1414371f0 FUN_1414371f0 body=47 status=ok
// SIG undefined FUN_1414371f0(void)

longlong FUN_1414371f0(void)

{
  if (DAT_1468943d0 == 0) {
    FUN_141786440(&DAT_1468943d0,&PTR_FUN_144a86cc0);
  }
  return DAT_1468943d0;
}



// FUNCTION 141437220 FUN_141437220 body=47 status=ok
// SIG undefined FUN_141437220(void)

longlong FUN_141437220(void)

{
  if (DAT_1468943c8 == 0) {
    FUN_141786a30(&DAT_1468943c8,&PTR_FUN_1463e5810);
  }
  return DAT_1468943c8;
}



// FUNCTION 141437260 FUN_141437260 body=162 status=ok
// SIG undefined FUN_141437260(void)

longlong FUN_141437260(void)

{
  if (DAT_146894260 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakMayhemUIDataAsset",&DAT_146894260,FUN_140447710,0x40,
                  0x12000000,0,L"Engine",FUN_141438c60,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146894260;
}



// FUNCTION 141437310 FUN_141437310 body=162 status=ok
// SIG undefined FUN_141437310(void)

longlong FUN_141437310(void)

{
  if (DAT_1468941b0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakManufacturerDataTableAttributeValueResolver",
                  &DAT_1468941b0,FUN_140447710,0xe0,0x10000000,0,L"Engine",FUN_141438e20,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142e11aa0,&LAB_140447700,0);
  }
  return DAT_1468941b0;
}



// FUNCTION 1414373c0 FUN_1414373c0 body=53 status=ok
// SIG undefined FUN_1414373c0(void)

void FUN_1414373c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x90;
    *puVar1 = &PTR_FUN_144a90cc0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141437410 FUN_141437410 body=53 status=ok
// SIG undefined FUN_141437410(void)

void FUN_141437410(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &PTR_FUN_144a90dd8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141437450 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UTextureRenderTargetCube::GetPrivateStaticClass(void)

{
  if (DAT_146894128 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakMainMenuMapData",&DAT_146894128,FUN_140447710,0xd8,
                  0x10000000,0,L"Engine",FUN_141438cc0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_141437aa0,&LAB_140447700,0);
  }
  return DAT_146894128;
}



// FUNCTION 141437500 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AOfflineGameMode::GetPrivateStaticClass(void)

{
  if (DAT_146894270 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakMenuGameMode",&DAT_146894270,FUN_140447710,0x560,
                  0x1000000c,0,L"Game",&LAB_141438aa0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  thunk_FUN_14293bdd0,&LAB_140447700,0);
  }
  return DAT_146894270;
}



// FUNCTION 1414375b0 FUN_1414375b0 body=53 status=ok
// SIG undefined FUN_1414375b0(void)

void FUN_1414375b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &PTR_FUN_144a90ef0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141437620 FUN_141437620 body=47 status=ok
// SIG undefined FUN_141437620(void)

longlong FUN_141437620(void)

{
  if (DAT_1468941d8 == 0) {
    FUN_141786440(&DAT_1468941d8,&PTR_FUN_144a8dc30);
  }
  return DAT_1468941d8;
}



// FUNCTION 141437660 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong AArchVisCharacter::StaticClass(void)

{
  if (DAT_1468943e8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakMissionIconComponent",&DAT_1468943e8,FUN_140447710,0x7c0,
                  0x10000000,0,L"Engine",FUN_141439120,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  StaticClass,&LAB_140447700,0);
  }
  return DAT_1468943e8;
}



// FUNCTION 141437710 FUN_141437710 body=162 status=ok
// SIG undefined FUN_141437710(void)

longlong FUN_141437710(void)

{
  if (DAT_146894330 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakMinimapIconComponent",&DAT_146894330,FUN_14143ae50,0x2a0,
                  0x10000000,0,L"Engine",&LAB_141438fe0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_146894330;
}



// FUNCTION 1414377d0 FUN_1414377d0 body=151 status=ok
// SIG undefined FUN_1414377d0(void)

longlong FUN_1414377d0(void)

{
  if (DAT_146894340 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakMinimapIconTracker",&DAT_146894340,FUN_140447710,0x68,
                  0x10000000,0,L"Engine",FUN_141439000,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146894340;
}



// FUNCTION 141437870 FUN_141437870 body=162 status=ok
// SIG undefined FUN_141437870(void)

longlong FUN_141437870(void)

{
  if (DAT_146894360 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakMission",&DAT_146894360,FUN_14143ae80,0x4f8,0x10000000,0,
                  L"Engine",&LAB_141439050,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142f71d80,&LAB_140447700,0);
  }
  return DAT_146894360;
}



// FUNCTION 141437920 FUN_141437920 body=47 status=ok
// SIG undefined FUN_141437920(void)

longlong FUN_141437920(void)

{
  if (DAT_146894328 == 0) {
    FUN_141786440(&DAT_146894328,&PTR_FUN_144a8c440);
  }
  return DAT_146894328;
}



// FUNCTION 141437950 FUN_141437950 body=47 status=ok
// SIG undefined FUN_141437950(void)

longlong FUN_141437950(void)

{
  if (DAT_1468942f0 == 0) {
    FUN_141786a30(&DAT_1468942f0,&PTR_FUN_1463e47a0);
  }
  return DAT_1468942f0;
}



// FUNCTION 141437980 FUN_141437980 body=47 status=ok
// SIG undefined FUN_141437980(void)

longlong FUN_141437980(void)

{
  if (DAT_1468942f8 == 0) {
    FUN_141786a30(&DAT_1468942f8,&PTR_FUN_1463e47e0);
  }
  return DAT_1468942f8;
}



// FUNCTION 1414379b0 FUN_1414379b0 body=47 status=ok
// SIG undefined FUN_1414379b0(void)

longlong FUN_1414379b0(void)

{
  if (DAT_146894300 == 0) {
    FUN_141786a30(&DAT_146894300,&PTR_FUN_1463e4820);
  }
  return DAT_146894300;
}



// FUNCTION 1414379e0 FUN_1414379e0 body=47 status=ok
// SIG undefined FUN_1414379e0(void)

longlong FUN_1414379e0(void)

{
  if (DAT_146894308 == 0) {
    FUN_141786a30(&DAT_146894308,&PTR_FUN_1463e4860);
  }
  return DAT_146894308;
}



// FUNCTION 141437a10 FUN_141437a10 body=47 status=ok
// SIG undefined FUN_141437a10(void)

longlong FUN_141437a10(void)

{
  if (DAT_146894310 == 0) {
    FUN_141786a30(&DAT_146894310,&PTR_FUN_1463e48f0);
  }
  return DAT_146894310;
}



// FUNCTION 141437a40 FUN_141437a40 body=47 status=ok
// SIG undefined FUN_141437a40(void)

longlong FUN_141437a40(void)

{
  if (DAT_146894318 == 0) {
    FUN_141786a30(&DAT_146894318,&PTR_FUN_1463e4930);
  }
  return DAT_146894318;
}



// FUNCTION 141437a70 FUN_141437a70 body=47 status=ok
// SIG undefined FUN_141437a70(void)

longlong FUN_141437a70(void)

{
  if (DAT_146894320 == 0) {
    FUN_141786a30(&DAT_146894320,&PTR_FUN_1463e4970);
  }
  return DAT_146894320;
}



// FUNCTION 141437aa0 FUN_141437aa0 body=162 status=ok
// SIG undefined FUN_141437aa0(void)

longlong FUN_141437aa0(void)

{
  if (DAT_1468941e0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakMapData",&DAT_1468941e0,FUN_14143ae20,0xb8,0x10000000,0,
                  L"Engine",&LAB_141438e70,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1429a9ab0,&LAB_140447700,0);
  }
  return DAT_1468941e0;
}



// FUNCTION 141437b50 FUN_141437b50 body=53 status=ok
// SIG undefined FUN_141437b50(void)

void FUN_141437b50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_144a92388;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141437b90 FUN_141437b90 body=162 status=ok
// SIG undefined FUN_141437b90(void)

longlong FUN_141437b90(void)

{
  if (DAT_1468943f8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakMissionInventoryBalanceStateComponent",&DAT_1468943f8,
                  FUN_140447710,0x388,0x10000000,0,L"Engine",&LAB_1414391b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14142bde0,&LAB_140447700,0);
  }
  return DAT_1468943f8;
}



// FUNCTION 141437c50 FUN_141437c50 body=162 status=ok
// SIG undefined FUN_141437c50(void)

longlong FUN_141437c50(void)

{
  if (DAT_146894410 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakMissionItem",&DAT_146894410,FUN_14143ad60,0x5b0,0x10000008
                  ,0,L"Engine",&LAB_141438ae0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_146894410;
}



// FUNCTION 141437d20 FUN_141437d20 body=47 status=ok
// SIG undefined FUN_141437d20(void)

longlong FUN_141437d20(void)

{
  if (DAT_146894358 == 0) {
    FUN_141786440(&DAT_146894358,&PTR_FUN_144a8cb00);
  }
  return DAT_146894358;
}



// FUNCTION 141437d50 FUN_141437d50 body=47 status=ok
// SIG undefined FUN_141437d50(void)

longlong FUN_141437d50(void)

{
  if (DAT_146894348 == 0) {
    FUN_141786a30(&DAT_146894348,&PTR_FUN_1463e4e00);
  }
  return DAT_146894348;
}



// FUNCTION 141437d80 FUN_141437d80 body=47 status=ok
// SIG undefined FUN_141437d80(void)

longlong FUN_141437d80(void)

{
  if (DAT_146894350 == 0) {
    FUN_141786a30(&DAT_146894350,&PTR_FUN_1463e4e80);
  }
  return DAT_146894350;
}



// FUNCTION 141437db0 FUN_141437db0 body=47 status=ok
// SIG undefined FUN_141437db0(void)

longlong FUN_141437db0(void)

{
  if (DAT_146894408 == 0) {
    FUN_141786440(&DAT_146894408,&PTR_FUN_144a8ce30);
  }
  return DAT_146894408;
}



// FUNCTION 141437de0 FUN_141437de0 body=47 status=ok
// SIG undefined FUN_141437de0(void)

longlong FUN_141437de0(void)

{
  if (DAT_146894400 == 0) {
    FUN_141786a30(&DAT_146894400,&PTR_FUN_1463e5a60);
  }
  return DAT_146894400;
}



// FUNCTION 141437e20 FUN_141437e20 body=162 status=ok
// SIG undefined FUN_141437e20(void)

longlong FUN_141437e20(void)

{
  if (DAT_146894290 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakMenuSwitcherTest",&DAT_146894290,FUN_140447710,0x6b0,
                  0x10000000,0,L"Engine",FUN_141438e90,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141343ff0,&LAB_140447700,0);
  }
  return DAT_146894290;
}



// FUNCTION 141437ed0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass(void)

{
  if (DAT_146894370 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakMissionActorComponent",&DAT_146894370,FUN_140447710,400,
                  0x10000008,0,L"Engine",FUN_141439070,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_146894370;
}



// FUNCTION 141437f80 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGShrineUsable::GetPrivateStaticClass(void)

{
  if (DAT_1468942a0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakMenuSwitcherTestSubmenu",&DAT_1468942a0,FUN_140447710,
                  0x690,0x10000000,0,L"Engine",FUN_141438f00,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141344000,&LAB_140447700,0);
  }
  return DAT_1468942a0;
}



// FUNCTION 141438060 FUN_141438060 body=162 status=ok
// SIG undefined FUN_141438060(void)

longlong FUN_141438060(void)

{
  if (DAT_146894420 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakMissionItem_Vehicle",&DAT_146894420,FUN_140447710,0x5b0,
                  0x10000008,0,L"Engine",FUN_141438af0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,FUN_141437c50
                  ,&LAB_140447700,0);
  }
  return DAT_146894420;
}



// FUNCTION 141438140 FUN_141438140 body=47 status=ok
// SIG undefined FUN_141438140(void)

longlong FUN_141438140(void)

{
  if (DAT_1468941c8 == 0) {
    FUN_141786a30(&DAT_1468941c8,&PTR_FUN_1463e3160);
  }
  return DAT_1468941c8;
}



// FUNCTION 141438170 FUN_141438170 body=47 status=ok
// SIG undefined FUN_141438170(void)

longlong FUN_141438170(void)

{
  if (DAT_1468941d0 == 0) {
    FUN_141786a30(&DAT_1468941d0,&PTR_FUN_1463e31e0);
  }
  return DAT_1468941d0;
}



// FUNCTION 1414381a0 FUN_1414381a0 body=47 status=ok
// SIG undefined FUN_1414381a0(void)

longlong FUN_1414381a0(void)

{
  if (DAT_146894208 == 0) {
    FUN_141786440(&DAT_146894208,&PTR_FUN_144a8e3e0);
  }
  return DAT_146894208;
}



// FUNCTION 1414381d0 FUN_1414381d0 body=47 status=ok
// SIG undefined FUN_1414381d0(void)

longlong FUN_1414381d0(void)

{
  if (DAT_1468941e8 == 0) {
    FUN_141786a30(&DAT_1468941e8,&PTR_FUN_1463e3640);
  }
  return DAT_1468941e8;
}



// FUNCTION 141438200 FUN_141438200 body=47 status=ok
// SIG undefined FUN_141438200(void)

longlong FUN_141438200(void)

{
  if (DAT_1468941f0 == 0) {
    FUN_141786a30(&DAT_1468941f0,&PTR_FUN_1463e3700);
  }
  return DAT_1468941f0;
}



// FUNCTION 141438230 FUN_141438230 body=47 status=ok
// SIG undefined FUN_141438230(void)

longlong FUN_141438230(void)

{
  if (DAT_1468941f8 == 0) {
    FUN_141786a30(&DAT_1468941f8,&PTR_FUN_1463e37e0);
  }
  return DAT_1468941f8;
}



// FUNCTION 141438260 FUN_141438260 body=47 status=ok
// SIG undefined FUN_141438260(void)

longlong FUN_141438260(void)

{
  if (DAT_146894200 == 0) {
    FUN_141786a30(&DAT_146894200,&PTR_FUN_1463e38a0);
  }
  return DAT_146894200;
}



// FUNCTION 1414382a0 FUN_1414382a0 body=162 status=ok
// SIG undefined FUN_1414382a0(void)

longlong FUN_1414382a0(void)

{
  if (DAT_146894210 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"MapDataFunctionLibrary",&DAT_146894210,FUN_14143adc0,0x28,
                  0x10000000,0,L"Engine",FUN_1405d87d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_146894210;
}



// FUNCTION 141438350 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UARTrackedObject::GetPrivateStaticClass(void)

{
  if (DAT_146894430 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakMissionItemPoolData",&DAT_146894430,FUN_140447710,0xd0,
                  0x10000000,0,L"Engine",FUN_1414391d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14302b3d0,&LAB_140447700,0);
  }
  return DAT_146894430;
}



// FUNCTION 141438400 FUN_141438400 body=162 status=ok
// SIG undefined FUN_141438400(void)

longlong FUN_141438400(void)

{
  if (DAT_146894140 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakManagedActorDefinition",&DAT_146894140,FUN_140447710,0xa8,
                  0x10000000,0,L"Engine",FUN_141438d00,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146894140;
}



// FUNCTION 1414384c0 FUN_1414384c0 body=162 status=ok
// SIG undefined FUN_1414384c0(void)

longlong FUN_1414384c0(void)

{
  if (DAT_1468943b0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakAutoplayComponent",&DAT_1468943b0,FUN_140447710,0x370,
                  0x10000000,0,L"Engine",&LAB_141438ca0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1405bc4a0,&LAB_140447700,0);
  }
  return DAT_1468943b0;
}



// FUNCTION 141438580 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGExplodingRockProjectile::GetPrivateStaticClass(void)

{
  if (DAT_146894440 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakMissionPickup",&DAT_146894440,FUN_140447710,0x728,
                  0x10000000,0,L"Engine",&LAB_141438b30,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_1413bab40,&LAB_140447700,0);
  }
  return DAT_146894440;
}



// FUNCTION 141438650 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGBlizzard::GetPrivateStaticClass(void)

{
  if (DAT_146894450 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakMissionProvingGrounds",&DAT_146894450,FUN_140447710,0x510,
                  0x10000000,0,L"Engine",&LAB_141439210,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_141437870,&LAB_140447700,0);
  }
  return DAT_146894450;
}



// FUNCTION 141438700 FUN_141438700 body=53 status=ok
// SIG undefined FUN_141438700(void)

void FUN_141438700(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_144a92958;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141438740 FUN_141438740 body=162 status=ok
// SIG undefined FUN_141438740(void)

longlong FUN_141438740(void)

{
  if (DAT_1468942c8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakMinimapElement",&DAT_1468942c8,FUN_140447710,0x2e8,
                  0x10000000,0,L"Engine",FUN_141438f80,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141301c80,&LAB_140447700,0);
  }
  return DAT_1468942c8;
}



// FUNCTION 141438800 FUN_141438800 body=53 status=ok
// SIG undefined FUN_141438800(void)

void FUN_141438800(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_144a92a70;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141438840 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGBlizzard::GetPrivateStaticClass(void)

{
  if (DAT_146894460 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakMissionRaid",&DAT_146894460,FUN_140447710,0x510,0x10000000
                  ,0,L"Engine",&LAB_141439220,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_141437870,&LAB_140447700,0);
  }
  return DAT_146894460;
}



// FUNCTION 141438910 FUN_141438910 body=53 status=ok
// SIG undefined FUN_141438910(void)

void FUN_141438910(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_144a92b88;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141438950 FUN_141438950 body=151 status=ok
// SIG undefined FUN_141438950(void)

longlong FUN_141438950(void)

{
  if (DAT_146894188 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakManagedActorManager",&DAT_146894188,FUN_14143adf0,0x38,
                  0x10000000,0,L"Engine",FUN_141438d80,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146894188;
}



// FUNCTION 1414389f0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong USpinBox::GetPrivateStaticClass(void)

{
  if (DAT_146894470 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakMissionRareSpawn",&DAT_146894470,FUN_140447710,0x518,
                  0x10000000,0,L"Engine",&LAB_141439230,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_141437870,&LAB_140447700,0);
  }
  return DAT_146894470;
}



// FUNCTION 141438af0 FUN_141438af0 body=52 status=ok
// SIG undefined FUN_141438af0(void)

void FUN_141438af0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140bfb670(puVar1);
    *puVar1 = &PTR_FUN_144a93e38;
    puVar1[0x8b] = &PTR_LAB_144a94530;
  }
  return;
}



// FUNCTION 141438b50 FUN_141438b50 body=188 status=ok
// SIG undefined FUN_141438b50(void)

void FUN_141438b50(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140bfb770(puVar1);
    *puVar1 = &PTR_FUN_144a94830;
    puVar1[0x8b] = &PTR_LAB_144a94f50;
    puVar1[0xbd] = &PTR_LAB_144a94f70;
    puVar1[0xbe] = &PTR_LAB_144a94f98;
    puVar1[0xbf] = &PTR_LAB_144a94fe0;
    puVar1[0xc6] = &PTR_LAB_144a95050;
    puVar1[0xcb] = &PTR_LAB_144a95070;
    puVar1[0x100] = 0;
    FUN_142c8c260(puVar1 + 0x101,0x41a00000);
    puVar1[0x108] = 0;
    puVar1[0x109] = 0;
    *(undefined2 *)(puVar1 + 0x10a) = 0x100;
  }
  return;
}



// FUNCTION 141438c10 FUN_141438c10 body=66 status=ok
// SIG undefined FUN_141438c10(void)

void FUN_141438c10(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144a907c0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    *(undefined4 *)(puVar1 + 8) = 1;
    puVar1[9] = 0;
    puVar1[10] = 0;
  }
  return;
}



// FUNCTION 141438c60 FUN_141438c60 body=51 status=ok
// SIG undefined FUN_141438c60(void)

void FUN_141438c60(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR_FUN_144a90a40;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  return;
}



// FUNCTION 141438cc0 FUN_141438cc0 body=57 status=ok
// SIG undefined FUN_141438cc0(void)

void FUN_141438cc0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1414392a0(puVar1,param_1);
    *puVar1 = &PTR_FUN_144a8f798;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
  }
  return;
}



// FUNCTION 141438d00 FUN_141438d00 body=118 status=ok
// SIG undefined FUN_141438d00(void)

void FUN_141438d00(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR_FUN_144a8fa10;
    *(undefined4 *)(puVar1 + 6) = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0xe) = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    *(undefined4 *)(puVar1 + 0x14) = 0x3f800000;
  }
  return;
}



// FUNCTION 141438d80 FUN_141438d80 body=51 status=ok
// SIG undefined FUN_141438d80(void)

void FUN_141438d80(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_144a8fcc0;
    puVar1[5] = 0;
    puVar1[6] = 0;
  }
  return;
}



// FUNCTION 141438dc0 FUN_141438dc0 body=82 status=ok
// SIG undefined FUN_141438dc0(void)

void FUN_141438dc0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142fdf8f0(puVar1,param_1);
    *puVar1 = &PTR_FUN_144a901b0;
    puVar1[6] = &PTR_LAB_144a90430;
    puVar1[0x22] = 0;
    puVar1[0x23] = 0;
    puVar1[0x24] = 0;
    puVar1[0x25] = 0;
  }
  return;
}



// FUNCTION 141438e20 FUN_141438e20 body=78 status=ok
// SIG undefined FUN_141438e20(void)

void FUN_141438e20(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142c8cfb0(puVar1,param_1);
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *puVar1 = &PTR_FUN_144a90448;
    *(undefined1 *)(puVar1 + 0x1b) = 0;
  }
  return;
}



// FUNCTION 141438e90 FUN_141438e90 body=109 status=ok
// SIG undefined FUN_141438e90(void)

void FUN_141438e90(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140e9aa30(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__14487a8b8;
    puVar1[0x9b] = &PTR_LAB_14487ae60;
    FWeakObjectPtr::operator=(puVar1 + 0xd0,0);
    puVar1[0xd1] = 0;
    puVar1[0xd2] = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144a91008;
    puVar1[0x9b] = &PTR_LAB_144a915b0;
  }
  return;
}



// FUNCTION 141438f00 FUN_141438f00 body=93 status=ok
// SIG undefined FUN_141438f00(void)

void FUN_141438f00(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140e9aa30(puVar1,param_1);
    *puVar1 = &PTR_FUN_144646880;
    puVar1[0x9b] = &PTR_LAB_144646df0;
    FWeakObjectPtr::operator=(puVar1 + 0xd0,0);
    *puVar1 = &PTR_FUN_144a91730;
    puVar1[0x9b] = &PTR_LAB_144a91ca0;
  }
  return;
}



// FUNCTION 141438f80 FUN_141438f80 body=89 status=ok
// SIG undefined FUN_141438f80(void)

void FUN_141438f80(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141300770(puVar1,param_1);
    *(undefined4 *)(puVar1 + 0x57) = 0x3dcccccd;
    *puVar1 = &PTR_FUN_144a91e70;
    puVar1[0x20] = &PTR_LAB_1449b1ee0;
    puVar1[0x41] = &PTR_LAB_144a92308;
    *(undefined4 *)((longlong)puVar1 + 700) = 0x3f800000;
  }
  return;
}



// FUNCTION 141439000 FUN_141439000 body=75 status=ok
// SIG undefined FUN_141439000(void)

void FUN_141439000(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144051738;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
  }
  return;
}



// FUNCTION 141439070 FUN_141439070 body=63 status=ok
// SIG undefined FUN_141439070(void)

void FUN_141439070(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142326e40(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144a92530;
    puVar1[5] = &PTR_LAB_144a92928;
    puVar1[0x2f] = 0;
  }
  return;
}



// FUNCTION 1414390c0 FUN_1414390c0 body=91 status=ok
// SIG undefined FUN_1414390c0(void)

void FUN_1414390c0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142f4f620(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144a92d20;
    puVar1[5] = &PTR_LAB_144a93270;
    puVar1[0x5a] = &PTR_LAB_144a932a0;
    puVar1[0x5b] = &PTR_LAB_144a93300;
    puVar1[0x5c] = &PTR_FUN_144a93360;
  }
  return;
}



// FUNCTION 141439120 FUN_141439120 body=141 status=ok
// SIG undefined FUN_141439120(void)

void FUN_141439120(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142f4f780(puVar1);
    *puVar1 = &PTR_FUN_144a933a8;
    puVar1[5] = &PTR_LAB_144a93ca8;
    puVar1[0x5a] = &PTR_LAB_144a93cd8;
    puVar1[0xde] = &PTR_LAB_144a93d30;
    puVar1[0xdf] = &PTR_FUN_144a93d90;
    puVar1[0xe0] = &PTR_LAB_144a93da8;
    puVar1[0xe1] = &PTR_FUN_144a93e08;
    puVar1[0xf5] = 0;
    puVar1[0xf6] = 0;
    *(undefined1 *)(puVar1 + 0xf7) = 0;
  }
  return;
}



// FUNCTION 1414391d0 FUN_1414391d0 body=60 status=ok
// SIG undefined FUN_1414391d0(void)

void FUN_1414391d0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142fdf820(puVar1);
    *puVar1 = &PTR_FUN_144a94590;
    puVar1[8] = &PTR_LAB_144a94818;
    puVar1[0x19] = 0;
  }
  return;
}



// FUNCTION 141439240 FUN_141439240 body=96 status=ok
// SIG undefined FUN_141439240(void)

longlong FUN_141439240(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = 3;
  lVar2 = param_1;
  do {
    FText::FText(lVar2);
    lVar2 = lVar2 + 0x18;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FText::FText(param_1 + 0x48);
  FText::FText(param_1 + 0x60);
  FText::FText(param_1 + 0x78);
  return param_1;
}



// FUNCTION 1414392a0 FUN_1414392a0 body=104 status=ok
// SIG undefined FUN_1414392a0(void)

undefined8 * FUN_1414392a0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_144a8f520;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0xffffffff;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  return param_1;
}



// FUNCTION 141439310 FUN_141439310 body=95 status=ok
// SIG undefined FUN_141439310(void)

void FUN_141439310(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x20);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0xe;
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



// FUNCTION 141439370 FUN_141439370 body=155 status=ok
// SIG undefined FUN_141439370(void)

void FUN_141439370(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar4 = (longlong *)(lVar1 + 8);
    do {
      iVar5 = (int)plVar4[1];
      lVar1 = *plVar4;
      if (iVar5 != 0) {
        plVar2 = (longlong *)(lVar1 + 8);
        do {
          if (*plVar2 != 0) {
            FMemory::Free();
          }
          plVar2 = plVar2 + 3;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        lVar1 = *plVar4;
      }
      if (lVar1 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 3;
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



// FUNCTION 141439410 FUN_141439410 body=99 status=ok
// SIG undefined FUN_141439410(void)

void FUN_141439410(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    lVar1 = lVar1 + 8;
    do {
      FUN_140c30a40(lVar1 + 0x58);
      FUN_140c30d40(lVar1);
      lVar1 = lVar1 + 0x70;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141439480 FUN_141439480 body=397 status=ok
// SIG undefined FUN_141439480(void)

void FUN_141439480(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  
  lVar8 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar9 = (longlong *)(lVar8 + 0x80);
    do {
      plVar7 = (longlong *)*plVar9;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar7 + 1;
        lVar8 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      plVar7 = (longlong *)plVar9[-3];
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar7 + 1;
        lVar8 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      plVar4 = (longlong *)plVar9[-6];
      plVar7 = plVar9 + -6;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
      lVar8 = 3;
      do {
        plVar4 = (longlong *)plVar7[-3];
        plVar7 = plVar7 + -3;
        lVar8 = lVar8 + -1;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar4 + 1;
          lVar5 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
      } while (lVar8 != 0);
      plVar9 = plVar9 + 0x12;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar8 = *param_1;
  }
  if (lVar8 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141439610 ~FAIDirectorTeam body=97 status=ok
// SIG undefined ~FAIDirectorTeam(void)

void FAIDirectorTeam::~FAIDirectorTeam(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 8);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *(longlong *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141439680 FUN_141439680 body=313 status=ok
// SIG undefined FUN_141439680(void)

void FUN_141439680(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  plVar4 = *(longlong **)(param_1 + 0x80);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x68);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x50);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  lVar6 = 3;
  param_1 = param_1 + 0x50;
  do {
    plVar4 = *(longlong **)(param_1 + -0x18);
    param_1 = param_1 + -0x18;
    lVar6 = lVar6 + -1;
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
  } while (lVar6 != 0);
  return;
}



// FUNCTION 1414397c0 FUN_1414397c0 body=200 status=ok
// SIG undefined FUN_1414397c0(void)

void FUN_1414397c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 200);
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
  plVar4 = *(longlong **)(param_1 + 0xb0);
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
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_143fe0658;
  FUN_141782120(param_1);
  return;
}



// FUNCTION 141439890 FUN_141439890 body=219 status=ok
// SIG undefined FUN_141439890(void)

void FUN_141439890(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  if (*(longlong *)(param_1 + 0x3a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x390) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x380) != 0) {
    FMemory::Free();
  }
  FUN_140bff340(param_1 + 0x318);
  iVar3 = *(int *)(param_1 + 0x308);
  lVar1 = *(longlong *)(param_1 + 0x300);
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x18);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 9;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *(longlong *)(param_1 + 0x300);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x2e8);
  *(undefined ***)(param_1 + 0x2e0) = &PTR_FUN_144a92d00;
  *(undefined ***)(param_1 + 0x2d8) = &PTR_FUN_144a92ca0;
  *(undefined ***)(param_1 + 0x2d0) = &PTR_FUN_1441b3948;
  FUN_1405911f0(param_1);
  return;
}



// FUNCTION 141439970 FUN_141439970 body=112 status=ok
// SIG undefined FUN_141439970(void)

void FUN_141439970(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x788) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x778) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x708) = &PTR_FUN_144a92d00;
  *(undefined ***)(param_1 + 0x700) = &PTR_FUN_144a92ca0;
  *(undefined ***)(param_1 + 0x6f8) = &PTR_FUN_144a93390;
  *(undefined ***)(param_1 + 0x6f0) = &PTR_FUN_1441b3948;
  FUN_14061f760(param_1);
  return;
}



// FUNCTION 1414399e0 FUN_1414399e0 body=429 status=ok
// SIG undefined FUN_1414399e0(void)

longlong * FUN_1414399e0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar5 = (int)param_1[1];
  if (iVar5 != 0) {
    lVar3 = *param_1 + 8;
    do {
      if (*(longlong *)(lVar3 + 0x50) != 0) {
        FMemory::Free();
      }
      FUN_140c30d40(lVar3);
      lVar3 = lVar3 + 0x68;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = (int)param_2[1];
  lVar3 = *param_2;
  *(int *)(param_1 + 1) = iVar5;
  if ((iVar5 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    TArray<FExposedValueCopyRecord,FDefaultAllocator>::ResizeForCopy(param_1,iVar5);
    puVar7 = (undefined4 *)*param_1;
    if (iVar5 != 0) {
      puVar6 = (undefined8 *)(lVar3 + 0x10);
      puVar4 = puVar7 + 0x15;
      do {
        *puVar7 = *(undefined4 *)(puVar6 + -2);
        *(undefined1 *)(puVar4 + -0x13) = *(undefined1 *)(puVar6 + -1);
        *(undefined8 *)(puVar4 + -0x11) = *puVar6;
        FText::FText(puVar4 + -0xf,puVar6 + 1);
        FText::FText(puVar4 + -9,puVar6 + 4);
        *(undefined8 *)(puVar4 + -3) = 0;
        iVar1 = *(int *)(puVar6 + 8);
        pvVar2 = (void *)puVar6[7];
        puVar4[-1] = iVar1;
        if (iVar1 == 0) {
          *puVar4 = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar4 + -3,iVar1,0);
          _guard_xfg_dispatch_icall_nop(*(void **)(puVar4 + -3),pvVar2,(longlong)iVar1 << 4);
        }
        *(undefined8 *)(puVar4 + 1) = 0;
        iVar1 = *(int *)(puVar6 + 10);
        pvVar2 = (void *)puVar6[9];
        puVar4[3] = iVar1;
        if (iVar1 == 0) {
          puVar4[4] = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar4 + 1,iVar1,0);
          _guard_xfg_dispatch_icall_nop(*(void **)(puVar4 + 1),pvVar2,(longlong)iVar1 << 3);
        }
        puVar7 = puVar7 + 0x1a;
        puVar4 = puVar4 + 0x1a;
        puVar6 = puVar6 + 0xd;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return param_1;
}



// FUNCTION 141439b90 FUN_141439b90 body=158 status=ok
// SIG undefined FUN_141439b90(void)

undefined1 * FUN_141439b90(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  FText::operator=(param_1 + 0x10,param_2 + 0x10);
  FText::operator=(param_1 + 0x28,param_2 + 0x28);
  puVar1 = (undefined8 *)(param_1 + 0x40);
  if (puVar1 != (undefined8 *)(param_2 + 0x40)) {
    _Src = *(void **)(param_2 + 0x40);
    iVar2 = *(int *)(param_2 + 0x48);
    *(int *)(param_1 + 0x48) = iVar2;
    if ((iVar2 == 0) && (*(int *)(param_1 + 0x4c) == 0)) {
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 << 4);
    }
  }
  return param_1;
}



// FUNCTION 141439d30 FUN_141439d30 body=52 status=ok
// SIG undefined FUN_141439d30(void)

undefined8 FUN_141439d30(undefined8 param_1,ulonglong param_2)

{
  FUN_140bff1f0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x5b0);
  }
  return param_1;
}



// FUNCTION 141439d70 FUN_141439d70 body=73 status=ok
// SIG undefined FUN_141439d70(void)

longlong FUN_141439d70(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x840) != 0) {
    FMemory::Free();
  }
  FUN_140bff2c0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x858);
  }
  return param_1;
}



// FUNCTION 141439dc0 FUN_141439dc0 body=43 status=ok
// SIG undefined FUN_141439dc0(void)

undefined8 * FUN_141439dc0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144a92ca0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 141439df0 FUN_141439df0 body=43 status=ok
// SIG undefined FUN_141439df0(void)

undefined8 * FUN_141439df0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144a93390;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 141439e20 FUN_141439e20 body=43 status=ok
// SIG undefined FUN_141439e20(void)

undefined8 * FUN_141439e20(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144a92d00;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 141439e50 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UCoreChat::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  FUN_141439410(param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 141439ea0 FUN_141439ea0 body=64 status=ok
// SIG undefined FUN_141439ea0(void)

longlong FUN_141439ea0(longlong param_1,ulonglong param_2)

{
  FUN_141439480(param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 141439ee0 FUN_141439ee0 body=133 status=ok
// SIG undefined FUN_141439ee0(void)

longlong FUN_141439ee0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  FUN_1405fcf60(param_1 + 0x68);
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 141439f70 FUN_141439f70 body=64 status=ok
// SIG undefined FUN_141439f70(void)

longlong FUN_141439f70(longlong param_1,ulonglong param_2)

{
  FUN_141439370(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141439fb0 FUN_141439fb0 body=67 status=ok
// SIG undefined FUN_141439fb0(void)

longlong FUN_141439fb0(longlong param_1,ulonglong param_2)

{
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x120);
  FUN_1414397c0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x138);
  }
  return param_1;
}



// FUNCTION 14143a000 FUN_14143a000 body=116 status=ok
// SIG undefined FUN_14143a000(void)

longlong FUN_14143a000(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  FUN_1405fcf60(param_1 + 0x68);
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 14143a080 FUN_14143a080 body=52 status=ok
// SIG undefined FUN_14143a080(void)

undefined8 FUN_14143a080(undefined8 param_1,ulonglong param_2)

{
  FUN_140e9c5f0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x690);
  }
  return param_1;
}



// FUNCTION 14143a0c0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FLightVPLsCS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140458c20();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,400);
  }
  return param_1;
}



// FUNCTION 14143a100 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
Audio::FEarlyReflections::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141439890();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3c0);
  }
  return param_1;
}



// FUNCTION 14143a140 FUN_14143a140 body=52 status=ok
// SIG undefined FUN_14143a140(void)

undefined8 FUN_14143a140(undefined8 param_1,ulonglong param_2)

{
  FUN_141439970();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x7c0);
  }
  return param_1;
}



// FUNCTION 14143a180 FUN_14143a180 body=107 status=ok
// SIG undefined FUN_14143a180(void)

longlong FUN_14143a180(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  FUN_141439310(param_1 + 0x48);
  *(undefined ***)(param_1 + 0x40) = &PTR_FUN_143fe0658;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 14143a2b0 FUN_14143a2b0 body=72 status=ok
// SIG undefined FUN_14143a2b0(void)

void FUN_14143a2b0(undefined8 param_1,longlong param_2)

{
  *(undefined1 *)(param_2 + 8) = 1;
  *(undefined8 *)(param_2 + 0x10) = 0;
  FText::FText(param_2 + 0x18);
  FText::FText(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined1 *)(param_2 + 8) = 0;
  return;
}



// FUNCTION 14143a300 FUN_14143a300 body=38 status=ok
// SIG undefined FUN_14143a300(void)

void FUN_14143a300(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x90);
  FUN_141439240(param_2);
  return;
}



// FUNCTION 14143a330 FUN_14143a330 body=88 status=ok
// SIG undefined FUN_14143a330(void)

void FUN_14143a330(undefined8 param_1,undefined4 *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x68);
  *param_2 = 0x3f800000;
  *(undefined1 *)(param_2 + 2) = 1;
  *(undefined8 *)(param_2 + 4) = 0;
  FText::FText(param_2 + 6);
  FText::FText(param_2 + 0xc);
  *(undefined8 *)(param_2 + 0x12) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_2 + 0x16) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}



// FUNCTION 14143a390 FUN_14143a390 body=141 status=ok
// SIG undefined FUN_14143a390(void)

undefined8 FUN_14143a390(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined1 *)(param_2 + 0x18);
    do {
      TArray<FVector,FDefaultAllocator>::operator=(puVar1 + -0x18,puVar1 + param_3 + -0x18);
      *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + param_3 + -8);
      *puVar1 = puVar1[param_3];
      *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(puVar1 + param_3 + 4);
      *(undefined4 *)(puVar1 + 8) = *(undefined4 *)(puVar1 + param_3 + 8);
      *(undefined4 *)(puVar1 + 0xc) = *(undefined4 *)(puVar1 + param_3 + 0xc);
      *(undefined4 *)(puVar1 + 0x10) = *(undefined4 *)(puVar1 + param_3 + 0x10);
      *(undefined4 *)(puVar1 + 0x14) = *(undefined4 *)(puVar1 + param_3 + 0x14);
      puVar1 = puVar1 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14143a420 FUN_14143a420 body=223 status=ok
// SIG undefined FUN_14143a420(void)

undefined8 FUN_14143a420(undefined8 param_1,undefined4 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  void *_Src;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    puVar4 = (undefined8 *)(param_3 + 8);
    do {
      puVar1 = (undefined8 *)(param_2 + 2);
      *param_2 = *(undefined4 *)(puVar4 + -1);
      if (puVar1 != puVar4) {
        iVar3 = *(int *)(puVar4 + 1);
        _Src = (void *)*puVar4;
        param_2[4] = iVar3;
        if ((iVar3 == 0) && (param_2[5] == 0)) {
          param_2[5] = 0;
        }
        else {
          TArray<SWaapiPickerRow::KeyValueArgs,FDefaultAllocator>::ResizeForCopy(puVar1,iVar3);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar3 << 5);
        }
      }
      *(undefined8 *)(param_2 + 6) = puVar4[2];
      *(undefined8 *)(param_2 + 8) = puVar4[3];
      *(undefined1 *)(param_2 + 10) = *(undefined1 *)(puVar4 + 4);
      puVar2 = (undefined1 *)((longlong)puVar4 + 0x21);
      puVar4 = puVar4 + 6;
      *(undefined1 *)((longlong)param_2 + 0x29) = *puVar2;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0xc;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14143a540 FUN_14143a540 body=82 status=ok
// SIG undefined FUN_14143a540(void)

undefined8 FUN_14143a540(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - (longlong)param_2;
    do {
      *param_2 = *(undefined8 *)(param_3 + (longlong)param_2);
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                (param_2 + 1,param_3 + 8 + (longlong)param_2);
      param_2 = param_2 + 3;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14143a5a0 FUN_14143a5a0 body=342 status=ok
// SIG undefined FUN_14143a5a0(void)

undefined8 FUN_14143a5a0(undefined8 param_1,undefined4 *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  longlong *plVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  
  if (param_4 != 0) {
    plVar8 = (longlong *)(param_3 + 8);
    do {
      plVar1 = (longlong *)(param_2 + 2);
      *param_2 = (int)plVar8[-1];
      param_2[1] = *(undefined4 *)((longlong)plVar8 + -4);
      if (plVar1 != plVar8) {
        iVar6 = param_2[4];
        if (iVar6 != 0) {
          plVar4 = (longlong *)(*plVar1 + 8);
          do {
            if (*plVar4 != 0) {
              FMemory::Free();
            }
            plVar4 = plVar4 + 3;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        iVar6 = (int)plVar8[1];
        lVar3 = *plVar8;
        param_2[4] = iVar6;
        if ((iVar6 == 0) && (param_2[5] == 0)) {
          param_2[5] = 0;
        }
        else {
          TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(plVar1);
          puVar5 = (undefined8 *)*plVar1;
          if (iVar6 != 0) {
            puVar7 = (undefined8 *)(lVar3 + 8);
            do {
              *puVar5 = puVar7[-1];
              puVar5[1] = 0;
              iVar2 = *(int *)(puVar7 + 1);
              _Src = (void *)*puVar7;
              *(int *)(puVar5 + 2) = iVar2;
              if (iVar2 == 0) {
                *(undefined4 *)((longlong)puVar5 + 0x14) = 0;
              }
              else {
                TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                          (puVar5 + 1,iVar2,0);
                _guard_xfg_dispatch_icall_nop((void *)puVar5[1],_Src,(longlong)iVar2 << 3);
              }
              puVar5 = puVar5 + 3;
              puVar7 = puVar7 + 3;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
        }
      }
      plVar8 = plVar8 + 3;
      param_4 = param_4 + -1;
      param_2 = param_2 + 6;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14143a700 FUN_14143a700 body=104 status=ok
// SIG undefined FUN_14143a700(void)

undefined8 FUN_14143a700(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined4 *)(param_2 + 0x58);
    do {
      puVar1[-0x16] = *(undefined4 *)(param_3 + -0x58 + (longlong)puVar1);
      FUN_141439b90(puVar1 + -0x14,param_3 + -0x50 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)(param_3 + (longlong)puVar1);
      FUN_1414399e0(puVar1 + 2,param_3 + 8 + (longlong)puVar1);
      puVar1 = puVar1 + 0x1c;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14143a770 FUN_14143a770 body=205 status=ok
// SIG undefined FUN_14143a770(void)

undefined8 FUN_14143a770(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x60;
    do {
      lVar2 = 3;
      lVar1 = param_2;
      do {
        FText::operator=(lVar1,(param_3 - param_2) + -0x60 + lVar1);
        lVar1 = lVar1 + 0x18;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
      FText::operator=(param_2 + 0x48,param_3 + -0x18);
      FText::operator=(param_2 + 0x60,param_3);
      FText::operator=(param_2 + 0x78,param_3 + 0x18);
      param_3 = param_3 + 0x90;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x90;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14143a840 FUN_14143a840 body=199 status=ok
// SIG undefined FUN_14143a840(void)

undefined8 FUN_14143a840(undefined8 param_1,undefined4 *param_2,longlong param_3,int param_4)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_4 != 0) {
    puVar3 = (undefined8 *)(param_3 + 0x58);
    do {
      *param_2 = *(undefined4 *)(puVar3 + -0xb);
      FUN_141439b90(param_2 + 2,puVar3 + -10);
      puVar2 = (undefined8 *)(param_2 + 0x16);
      if (puVar2 != puVar3) {
        iVar1 = *(int *)(puVar3 + 1);
        _Src = (void *)*puVar3;
        param_2[0x18] = iVar1;
        if ((iVar1 == 0) && (param_2[0x19] == 0)) {
          param_2[0x19] = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar2,iVar1);
          _guard_xfg_dispatch_icall_nop((void *)*puVar2,_Src,(longlong)iVar1 << 3);
        }
      }
      puVar3 = puVar3 + 0xd;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x1a;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14143a920 FUN_14143a920 body=32 status=ok
// SIG undefined FUN_14143a920(void)

void FUN_14143a920(undefined8 param_1,longlong param_2)

{
  FUN_140c30a40(param_2 + 0x60);
  FUN_140c30d40(param_2 + 8);
  return;
}



// FUNCTION 14143a950 Destruct body=37 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FSmartNameMapping>::Destruct(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x58) != 0) {
    FMemory::Free();
  }
  FUN_140c30d40(param_2 + 8);
  return;
}



// FUNCTION 14143a980 FUN_14143a980 body=55 status=ok
// SIG undefined FUN_14143a980(void)

void FUN_14143a980(void)

{
  undefined8 uVar1;
  
  if (DAT_146893cb0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146893cb0 = GetStaticEnum(FUN_14143b7e0,uVar1,L"EOakManufacturerBalanceTableType");
  }
  return;
}



// FUNCTION 14143a9c0 FUN_14143a9c0 body=55 status=ok
// SIG undefined FUN_14143a9c0(void)

void FUN_14143a9c0(void)

{
  undefined8 uVar1;
  
  if (DAT_146893cc0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146893cc0 = GetStaticEnum(FUN_14143b810,uVar1,L"EOakMessageType");
  }
  return;
}



// FUNCTION 14143aa00 FUN_14143aa00 body=55 status=ok
// SIG undefined FUN_14143aa00(void)

void FUN_14143aa00(void)

{
  undefined8 uVar1;
  
  if (DAT_146893cb8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146893cb8 = GetStaticEnum(FUN_14143b840,uVar1,L"EOakMinimapIconComponentType");
  }
  return;
}



// FUNCTION 14143aa40 FUN_14143aa40 body=55 status=ok
// SIG undefined FUN_14143aa40(void)

void FUN_14143aa40(void)

{
  undefined8 uVar1;
  
  if (DAT_146893cc8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146893cc8 = GetStaticEnum(FUN_14143b870,uVar1,L"EReapOrder");
  }
  return;
}



// FUNCTION 14143aad0 FUN_14143aad0 body=162 status=ok
// SIG undefined FUN_14143aad0(void)

longlong FUN_14143aad0(void)

{
  if (DAT_1468942b8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakMessage",&DAT_1468942b8,FUN_140447710,0x28,0x10000001,0,
                  L"Engine",&LAB_141438f60,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  ULocalMessage::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468942b8;
}



// FUNCTION 14143ab80 FUN_14143ab80 body=6 status=ok
// SIG undefined FUN_14143ab80(void)

undefined8 FUN_14143ab80(void)

{
  return 0x1eccd08f;
}



// FUNCTION 14143ab90 FUN_14143ab90 body=6 status=ok
// SIG undefined FUN_14143ab90(void)

undefined8 FUN_14143ab90(void)

{
  return 0x9a4fec7e;
}



// FUNCTION 14143aba0 FUN_14143aba0 body=6 status=ok
// SIG undefined FUN_14143aba0(void)

undefined8 FUN_14143aba0(void)

{
  return 0xcd30b5dd;
}



// FUNCTION 14143abb0 FUN_14143abb0 body=6 status=ok
// SIG undefined FUN_14143abb0(void)

undefined8 FUN_14143abb0(void)

{
  return 0xd4ff8245;
}



// FUNCTION 14143abc0 FUN_14143abc0 body=6 status=ok
// SIG undefined FUN_14143abc0(void)

undefined8 FUN_14143abc0(void)

{
  return 0xf9269836;
}



// FUNCTION 14143abd0 FUN_14143abd0 body=6 status=ok
// SIG undefined FUN_14143abd0(void)

undefined8 FUN_14143abd0(void)

{
  return 0x109f8137;
}



// FUNCTION 14143abe0 FUN_14143abe0 body=6 status=ok
// SIG undefined FUN_14143abe0(void)

undefined8 FUN_14143abe0(void)

{
  return 0xdf41e8fc;
}



// FUNCTION 14143abf0 FUN_14143abf0 body=6 status=ok
// SIG undefined FUN_14143abf0(void)

undefined8 FUN_14143abf0(void)

{
  return 0x8e88bc5c;
}



// FUNCTION 14143ac00 FUN_14143ac00 body=6 status=ok
// SIG undefined FUN_14143ac00(void)

undefined8 FUN_14143ac00(void)

{
  return 0xa6b89239;
}



// FUNCTION 14143ac10 FUN_14143ac10 body=6 status=ok
// SIG undefined FUN_14143ac10(void)

undefined8 FUN_14143ac10(void)

{
  return 0x71d4a41a;
}



// FUNCTION 14143ac20 FUN_14143ac20 body=6 status=ok
// SIG undefined FUN_14143ac20(void)

undefined8 FUN_14143ac20(void)

{
  return 0x689c853a;
}



// FUNCTION 14143ac70 Serialize body=112 status=ok
// SIG undefined Serialize(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UObject::Serialize(undefined8 param_1)

{
  undefined1 auStack_1e8 [32];
  undefined **local_1c8 [53];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  FUN_1416880d0(local_1c8);
  local_20 = 0;
  local_1c8[0] = &PTR__scalar_deleting_destructor__143fd6160;
  FUN_140ccb820(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 14143ace0 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void USoCharacterMovementComponent::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 14143acf0 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UInputKeySelector::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 14143ad00 thunk_FUN_14302b3d0 body=5 status=ok
// SIG undefined thunk_FUN_14302b3d0(void)

void thunk_FUN_14302b3d0(void)

{
  FUN_14302b3d0();
  return;
}



// FUNCTION 14143ad10 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void ULocalMessage::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 14143ad30 thunk_FUN_1429a9ab0 body=5 status=ok
// SIG undefined thunk_FUN_1429a9ab0(void)

void thunk_FUN_1429a9ab0(void)

{
  FUN_1429a9ab0();
  return;
}



// FUNCTION 14143ad40 thunk_FUN_142f71e20 body=5 status=ok
// SIG undefined thunk_FUN_142f71e20(void)

void thunk_FUN_142f71e20(void)

{
  FUN_142f71e20();
  return;
}



// FUNCTION 14143ad50 StaticClass body=5 status=ok
// SIG undefined StaticClass(void)

void AArchVisCharacter::StaticClass(void)

{
  StaticClass();
  return;
}



// FUNCTION 14143ad60 FUN_14143ad60 body=34 status=ok
// SIG undefined FUN_14143ad60(void)

void FUN_14143ad60(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141437c50();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnRep_BalanceStateComponent_144a93e28,1);
  return;
}



// FUNCTION 14143ad90 FUN_14143ad90 body=34 status=ok
// SIG undefined FUN_14143ad90(void)

void FUN_14143ad90(void)

{
  undefined8 uVar1;
  
  uVar1 = AVehiclePlayerController::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_DoRareSpawnSocialLogic_144a950d0,1);
  return;
}



// FUNCTION 14143adc0 FUN_14143adc0 body=34 status=ok
// SIG undefined FUN_14143adc0(void)

void FUN_14143adc0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1414382a0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetMapName_144a90780,4);
  return;
}



// FUNCTION 14143adf0 FUN_14143adf0 body=34 status=ok
// SIG undefined FUN_14143adf0(void)

void FUN_14143adf0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141438950();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_NotifyActorDestroyed_144a901a0,1);
  return;
}



// FUNCTION 14143ae20 FUN_14143ae20 body=34 status=ok
// SIG undefined FUN_14143ae20(void)

void FUN_14143ae20(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141437aa0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_MapNameEnumFunc_144a90758,2);
  return;
}



// FUNCTION 14143ae50 FUN_14143ae50 body=34 status=ok
// SIG undefined FUN_14143ae50(void)

void FUN_14143ae50(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141437710();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_DelayedUpdateIsTracking_144a924a0,7);
  return;
}



// FUNCTION 14143ae80 FUN_14143ae80 body=34 status=ok
// SIG undefined FUN_14143ae80(void)

void FUN_14143ae80(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141437870();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetCurrentGameMode_144a92510,2);
  return;
}



// FUNCTION 14143aeb0 FUN_14143aeb0 body=34 status=ok
// SIG undefined FUN_14143aeb0(void)

void FUN_14143aeb0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141437130();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_TriggerMissionDeliveryPlacard_144a93380,1);
  return;
}



// FUNCTION 14143aee0 FUN_14143aee0 body=82 status=ok
// SIG undefined FUN_14143aee0(void)

void FUN_14143aee0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146894398 == 0) {
    uVar1 = FUN_14143ab80();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146894398 = GetStaticStruct(FUN_14143b8a0,uVar2,L"AutoplayAction",0x20,uVar1);
  }
  return;
}



// FUNCTION 14143af40 FUN_14143af40 body=82 status=ok
// SIG undefined FUN_14143af40(void)

void FUN_14143af40(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146894378 == 0) {
    uVar1 = FUN_14143ab90();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146894378 = GetStaticStruct(FUN_14143b8d0,uVar2,L"AutoplayCombatState",0x30,uVar1);
  }
  return;
}



// FUNCTION 14143afa0 FUN_14143afa0 body=82 status=ok
// SIG undefined FUN_14143afa0(void)

void FUN_14143afa0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146894388 == 0) {
    uVar1 = FUN_14143aba0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146894388 = GetStaticStruct(FUN_14143b900,uVar2,L"AutoplayMissionState",0x30,uVar1);
  }
  return;
}



// FUNCTION 14143b000 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceKey::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468942e0 == 0) {
    uVar1 = FUN_14143abb0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468942e0 = GetStaticStruct(FUN_14143b930,uVar2,L"InstancedPlayerOwnerInfo",0x18,uVar1);
  }
  return;
}



// FUNCTION 14143b060 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146894148 == 0) {
    uVar1 = FUN_14143abc0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146894148 = GetStaticStruct(FUN_14143b960,uVar2,L"ManagedActorCountData",0x10,uVar1);
  }
  return;
}



// FUNCTION 14143b0c0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceKey::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146894168 == 0) {
    uVar1 = FUN_14143abd0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146894168 = GetStaticStruct(FUN_14143b990,uVar2,L"ManagedActorEntry",0x18,uVar1);
  }
  return;
}



// FUNCTION 14143b120 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceKey::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146894158 == 0) {
    uVar1 = FUN_14143abe0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146894158 = GetStaticStruct(FUN_14143b9c0,uVar2,L"ManagedActorOwnerEntry",0x18,uVar1);
  }
  return;
}



// FUNCTION 14143b180 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneTransformMask::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468941b8 == 0) {
    uVar1 = FUN_14143abf0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468941b8 = GetStaticStruct(FUN_14143b9f0,uVar2,L"MapCharacterPhysicsSettings",4,uVar1);
  }
  return;
}



// FUNCTION 14143b1e0 FUN_14143b1e0 body=82 status=ok
// SIG undefined FUN_14143b1e0(void)

void FUN_14143b1e0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146894228 == 0) {
    uVar1 = FUN_14143ac00();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146894228 = GetStaticStruct(FUN_14143ba20,uVar2,L"MayhemModifierDifficultyLevel",0x70,uVar1)
    ;
  }
  return;
}



// FUNCTION 14143b240 FUN_14143b240 body=82 status=ok
// SIG undefined FUN_14143b240(void)

void FUN_14143b240(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146894218 == 0) {
    uVar1 = FUN_14143ac10();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146894218 = GetStaticStruct(FUN_14143ba50,uVar2,L"MayhemUILevelData",0x90,uVar1);
  }
  return;
}



// FUNCTION 14143b2a0 FUN_14143b2a0 body=82 status=ok
// SIG undefined FUN_14143b2a0(void)

void FUN_14143b2a0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146894238 == 0) {
    uVar1 = FUN_14143ac20();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146894238 = GetStaticStruct(FUN_14143ba80,uVar2,L"WeightedOakModifierSet",0x68,uVar1);
  }
  return;
}



// FUNCTION 14143b300 FUN_14143b300 body=47 status=ok
// SIG undefined FUN_14143b300(void)

longlong FUN_14143b300(void)

{
  if (DAT_146894268 == 0) {
    FUN_141786440(&DAT_146894268,&PTR_GetPrivateStaticClass_144a8a320);
  }
  return DAT_146894268;
}



// FUNCTION 14143b330 FUN_14143b330 body=47 status=ok
// SIG undefined FUN_14143b330(void)

longlong FUN_14143b330(void)

{
  if (DAT_146894278 == 0) {
    FUN_141786440(&DAT_146894278,&PTR_GetPrivateStaticClass_144a83d40);
  }
  return DAT_146894278;
}



// FUNCTION 14143b360 FUN_14143b360 body=47 status=ok
// SIG undefined FUN_14143b360(void)

longlong FUN_14143b360(void)

{
  if (DAT_146894418 == 0) {
    FUN_141786440(&DAT_146894418,&PTR_FUN_144a8d410);
  }
  return DAT_146894418;
}



// FUNCTION 14143b390 FUN_14143b390 body=47 status=ok
// SIG undefined FUN_14143b390(void)

longlong FUN_14143b390(void)

{
  if (DAT_146894438 == 0) {
    FUN_141786440(&DAT_146894438,&PTR_GetPrivateStaticClass_144a8e740);
  }
  return DAT_146894438;
}



// FUNCTION 14143b3c0 FUN_14143b3c0 body=47 status=ok
// SIG undefined FUN_14143b3c0(void)

longlong FUN_14143b3c0(void)

{
  if (DAT_146894248 == 0) {
    FUN_141786440(&DAT_146894248,&PTR_FUN_144a8a070);
  }
  return DAT_146894248;
}



// FUNCTION 14143b3f0 FUN_14143b3f0 body=47 status=ok
// SIG undefined FUN_14143b3f0(void)

longlong FUN_14143b3f0(void)

{
  if (DAT_146894258 == 0) {
    FUN_141786440(&DAT_146894258,&PTR_FUN_144a8a2a0);
  }
  return DAT_146894258;
}



// FUNCTION 14143b420 FUN_14143b420 body=47 status=ok
// SIG undefined FUN_14143b420(void)

longlong FUN_14143b420(void)

{
  if (DAT_1468943a8 == 0) {
    FUN_141786440(&DAT_1468943a8,&PTR_FUN_144a8f080);
  }
  return DAT_1468943a8;
}



// FUNCTION 14143b450 FUN_14143b450 body=47 status=ok
// SIG undefined FUN_14143b450(void)

longlong FUN_14143b450(void)

{
  if (DAT_146894120 == 0) {
    FUN_141786440(&DAT_146894120,&PTR_GetPrivateStaticClass_144a8a530);
  }
  return DAT_146894120;
}



// FUNCTION 14143b480 FUN_14143b480 body=47 status=ok
// SIG undefined FUN_14143b480(void)

longlong FUN_14143b480(void)

{
  if (DAT_146894138 == 0) {
    FUN_141786440(&DAT_146894138,&PTR_FUN_144a8e500);
  }
  return DAT_146894138;
}



// FUNCTION 14143b4b0 FUN_14143b4b0 body=47 status=ok
// SIG undefined FUN_14143b4b0(void)

longlong FUN_14143b4b0(void)

{
  if (DAT_146894190 == 0) {
    FUN_141786440(&DAT_146894190,&PTR_FUN_144a86900);
  }
  return DAT_146894190;
}



// FUNCTION 14143b4e0 FUN_14143b4e0 body=47 status=ok
// SIG undefined FUN_14143b4e0(void)

longlong FUN_14143b4e0(void)

{
  if (DAT_1468941a8 == 0) {
    FUN_141786440(&DAT_1468941a8,&PTR_FUN_144a87120);
  }
  return DAT_1468941a8;
}



// FUNCTION 14143b510 FUN_14143b510 body=47 status=ok
// SIG undefined FUN_14143b510(void)

longlong FUN_14143b510(void)

{
  if (DAT_146894288 == 0) {
    FUN_141786440(&DAT_146894288,&PTR_FUN_144a8d100);
  }
  return DAT_146894288;
}



// FUNCTION 14143b540 FUN_14143b540 body=47 status=ok
// SIG undefined FUN_14143b540(void)

longlong FUN_14143b540(void)

{
  if (DAT_146894298 == 0) {
    FUN_141786440(&DAT_146894298,&PTR_GetPrivateStaticClass_144a8d370);
  }
  return DAT_146894298;
}



// FUNCTION 14143b570 FUN_14143b570 body=47 status=ok
// SIG undefined FUN_14143b570(void)

longlong FUN_14143b570(void)

{
  if (DAT_1468942b0 == 0) {
    FUN_141786440(&DAT_1468942b0,&PTR_thunk_FUN_14143aad0_144a8d8e0);
  }
  return DAT_1468942b0;
}


