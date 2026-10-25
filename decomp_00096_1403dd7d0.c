// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1403dd7d0 FUN_1403dd7d0 body=58 status=ok
// SIG undefined FUN_1403dd7d0(void)

void FUN_1403dd7d0(void)

{
  UObjectCompiledInDefer
            (FUN_142f169a0,FUN_142f168f0,L"UGbxCoreDialogBoxHelpers",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403dd810 FUN_1403dd810 body=58 status=ok
// SIG undefined FUN_1403dd810(void)

void FUN_1403dd810(void)

{
  UObjectCompiledInDefer
            (FUN_142f195c0,FUN_142f16ad0,L"UGbxCrosshairDataAsset",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403dd850 FUN_1403dd850 body=58 status=ok
// SIG undefined FUN_1403dd850(void)

void FUN_1403dd850(void)

{
  UObjectCompiledInDefer
            (FUN_142f16ef0,URemnantMapGenComponent::StaticClass,L"UGbxDebugMenu",L"/Script/GbxUI",0,
             0,0);
  return;
}



// FUNCTION 1403dd890 FUN_1403dd890 body=58 status=ok
// SIG undefined FUN_1403dd890(void)

void FUN_1403dd890(void)

{
  UObjectCompiledInDefer(FUN_142f195f0,FUN_142f16d60,L"UGbxDebugMenuData",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403dd8d0 FUN_1403dd8d0 body=58 status=ok
// SIG undefined FUN_1403dd8d0(void)

void FUN_1403dd8d0(void)

{
  UObjectCompiledInDefer
            (FUN_142f16ec0,&LAB_141301c60,L"UGbxDebugMenuSubmenu",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403dd910 FUN_1403dd910 body=58 status=ok
// SIG undefined FUN_1403dd910(void)

void FUN_1403dd910(void)

{
  UObjectCompiledInDefer
            (FUN_142f172b0,UGActiveSkill::GetPrivateStaticClass,L"UGbxDebugRumbleMenu",
             L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403dd950 FUN_1403dd950 body=58 status=ok
// SIG undefined FUN_1403dd950(void)

void FUN_1403dd950(void)

{
  UObjectCompiledInDefer
            (FUN_142f15a80,APickup::GetPrivateStaticClass,L"UGbxDialogBox",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403dd990 FUN_1403dd990 body=58 status=ok
// SIG undefined FUN_1403dd990(void)

void FUN_1403dd990(void)

{
  UObjectCompiledInDefer
            (FUN_142f19620,UGPasswordResetPage::GetPrivateStaticClass,L"UGbxDialogBoxChoiceWidget",
             L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403dd9d0 FUN_1403dd9d0 body=58 status=ok
// SIG undefined FUN_1403dd9d0(void)

void FUN_1403dd9d0(void)

{
  UObjectCompiledInDefer(FUN_142f19650,FUN_142f16620,L"UGbxDialogBoxData",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403dda10 FUN_1403dda10 body=58 status=ok
// SIG undefined FUN_1403dda10(void)

void FUN_1403dda10(void)

{
  UObjectCompiledInDefer
            (FUN_142f19680,FUN_142f16320,L"UGbxDragDropContainerInterface",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403dda50 FUN_1403dda50 body=58 status=ok
// SIG undefined FUN_1403dda50(void)

void FUN_1403dda50(void)

{
  UObjectCompiledInDefer
            (FUN_142f163f0,UBlendableInterface::GetPrivateStaticClass,L"UGbxFocusableWidget",
             L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403dda90 FUN_1403dda90 body=58 status=ok
// SIG undefined FUN_1403dda90(void)

void FUN_1403dda90(void)

{
  UObjectCompiledInDefer
            (FUN_142f196b0,UEnvQueryTest_Random::StaticClass,L"UGbxFocusableWidgetStyleData",
             L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403ddad0 FUN_1403ddad0 body=58 status=ok
// SIG undefined FUN_1403ddad0(void)

void FUN_1403ddad0(void)

{
  UObjectCompiledInDefer
            (FUN_142f16c40,UGunfireTechRequirementsImplSteam::GetPrivateStaticClass,
             L"UGbxFullScreenMovie",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403ddb10 FUN_1403ddb10 body=58 status=ok
// SIG undefined FUN_1403ddb10(void)

void FUN_1403ddb10(void)

{
  UObjectCompiledInDefer(FUN_142f15d00,thunk_FUN_142f18d50,L"UGbxGFxButton",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403de7a0 FUN_1403de7a0 body=92 status=ok
// SIG undefined FUN_1403de7a0(void)

void FUN_1403de7a0(void)

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
    *puVar1 = &PTR_FUN_1459a45f0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ContextualMenuEntryInfo",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403de800 FUN_1403de800 body=92 status=ok
// SIG undefined FUN_1403de800(void)

void FUN_1403de800(void)

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
    *puVar1 = &PTR_FUN_1459a44d8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ContextualMenuInfo",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403de860 FUN_1403de860 body=92 status=ok
// SIG undefined FUN_1403de860(void)

void FUN_1403de860(void)

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
    *puVar1 = &PTR_FUN_1459a43c0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxGFxContextualMenuLocTableData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403de8c0 FUN_1403de8c0 body=92 status=ok
// SIG undefined FUN_1403de8c0(void)

void FUN_1403de8c0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x90;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1459a5218;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxGFxListConfig",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403de920 FUN_1403de920 body=92 status=ok
// SIG undefined FUN_1403de920(void)

void FUN_1403de920(void)

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
    *puVar1 = &PTR_FUN_1459a6398;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxGFxMaterialRenderer",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403de980 FUN_1403de980 body=92 status=ok
// SIG undefined FUN_1403de980(void)

void FUN_1403de980(void)

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
    *puVar1 = &PTR_FUN_1459a6728;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxGFxMediaPlayerConfig",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403de9e0 FUN_1403de9e0 body=92 status=ok
// SIG undefined FUN_1403de9e0(void)

void FUN_1403de9e0(void)

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
    *puVar1 = &PTR_FUN_1459a5100;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxScrollingListCellInfo",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403dec30 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146741710,0);
  FGenericPlatformString::Memcpy(DAT_146741710,&DAT_14599d738,8);
  atexit((_func_5014 *)&LAB_143ec2110);
  return;
}



// FUNCTION 1403dec90 FUN_1403dec90 body=66 status=ok
// SIG undefined FUN_1403dec90(void)

void FUN_1403dec90(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EBindingType",1);
  UObjectCompiledInDeferEnum(EEnemyType_StaticEnum,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403dece0 FUN_1403dece0 body=66 status=ok
// SIG undefined FUN_1403dece0(void)

void FUN_1403dece0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EContextualMenuEntryType",1);
  UObjectCompiledInDeferEnum(EEnemyType_StaticEnum,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403ded30 FUN_1403ded30 body=66 status=ok
// SIG undefined FUN_1403ded30(void)

void FUN_1403ded30(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EContextualMenuExpandDirection",1);
  UObjectCompiledInDeferEnum(EEnemyType_StaticEnum,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403ded80 FUN_1403ded80 body=66 status=ok
// SIG undefined FUN_1403ded80(void)

void FUN_1403ded80(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EContextualMenuLayout",1);
  UObjectCompiledInDeferEnum(EEnemyType_StaticEnum,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403dedd0 FUN_1403dedd0 body=66 status=ok
// SIG undefined FUN_1403dedd0(void)

void FUN_1403dedd0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGFxHUDWidgetAnchorType",1);
  UObjectCompiledInDeferEnum(EEnemyType_StaticEnum,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403dee20 FUN_1403dee20 body=66 status=ok
// SIG undefined FUN_1403dee20(void)

void FUN_1403dee20(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGFxHUDWidgetTransitionType",1);
  UObjectCompiledInDeferEnum(EEnemyType_StaticEnum,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403dee70 FUN_1403dee70 body=66 status=ok
// SIG undefined FUN_1403dee70(void)

void FUN_1403dee70(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGbxGFxListAlignment",1);
  UObjectCompiledInDeferEnum(EEnemyType_StaticEnum,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403deec0 FUN_1403deec0 body=66 status=ok
// SIG undefined FUN_1403deec0(void)

void FUN_1403deec0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGbxGFxListConfigType",1);
  UObjectCompiledInDeferEnum(EEnemyType_StaticEnum,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403def10 FUN_1403def10 body=66 status=ok
// SIG undefined FUN_1403def10(void)

void FUN_1403def10(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGbxGFxListOrientation",1);
  UObjectCompiledInDeferEnum(EEnemyType_StaticEnum,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403def60 FUN_1403def60 body=66 status=ok
// SIG undefined FUN_1403def60(void)

void FUN_1403def60(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGbxGFxScrollListAddedItemPriority",1);
  UObjectCompiledInDeferEnum(EEnemyType_StaticEnum,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403defb0 FUN_1403defb0 body=66 status=ok
// SIG undefined FUN_1403defb0(void)

void FUN_1403defb0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGbxGFxScrollListFocusChangedAction",1);
  UObjectCompiledInDeferEnum(EEnemyType_StaticEnum,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403df000 FUN_1403df000 body=66 status=ok
// SIG undefined FUN_1403df000(void)

void FUN_1403df000(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGbxGFxScrollListFocusOrderPriority",1);
  UObjectCompiledInDeferEnum(EEnemyType_StaticEnum,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403df050 FUN_1403df050 body=66 status=ok
// SIG undefined FUN_1403df050(void)

void FUN_1403df050(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGbxGFxScrollListWrapMode",1);
  UObjectCompiledInDeferEnum(EEnemyType_StaticEnum,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403df0a0 FUN_1403df0a0 body=66 status=ok
// SIG undefined FUN_1403df0a0(void)

void FUN_1403df0a0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GFxVirtualKeyboardType",1);
  UObjectCompiledInDeferEnum(EEnemyType_StaticEnum,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403df0f0 FUN_1403df0f0 body=66 status=ok
// SIG undefined FUN_1403df0f0(void)

void FUN_1403df0f0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ContextualMenuEntryInfo",1);
  UObjectCompiledInDeferStruct(FUN_142f1ef10,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403df140 FUN_1403df140 body=66 status=ok
// SIG undefined FUN_1403df140(void)

void FUN_1403df140(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ContextualMenuInfo",1);
  UObjectCompiledInDeferStruct(FUN_142f1ef70,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403df190 FUN_1403df190 body=66 status=ok
// SIG undefined FUN_1403df190(void)

void FUN_1403df190(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxGFxContextualMenuLocTableData",1);
  UObjectCompiledInDeferStruct(FUN_142f1efd0,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403df1e0 FUN_1403df1e0 body=66 status=ok
// SIG undefined FUN_1403df1e0(void)

void FUN_1403df1e0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxGFxListConfig",1);
  UObjectCompiledInDeferStruct(FUN_142f1f030,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403df230 FUN_1403df230 body=66 status=ok
// SIG undefined FUN_1403df230(void)

void FUN_1403df230(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxGFxMaterialRenderer",1);
  UObjectCompiledInDeferStruct(FUN_142f1f090,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403df280 FUN_1403df280 body=66 status=ok
// SIG undefined FUN_1403df280(void)

void FUN_1403df280(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxGFxMediaPlayerConfig",1);
  UObjectCompiledInDeferStruct(FUN_142f1f0f0,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403df2d0 FUN_1403df2d0 body=66 status=ok
// SIG undefined FUN_1403df2d0(void)

void FUN_1403df2d0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxScrollingListCellInfo",1);
  UObjectCompiledInDeferStruct(FUN_142f1f150,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403df320 FUN_1403df320 body=58 status=ok
// SIG undefined FUN_1403df320(void)

void FUN_1403df320(void)

{
  UObjectCompiledInDefer
            (FUN_142f1f1b0,UXGameInstance::GetPrivateStaticClass,L"UGbxGFxComboBoxScrollingList",
             L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403df360 FUN_1403df360 body=58 status=ok
// SIG undefined FUN_1403df360(void)

void FUN_1403df360(void)

{
  UObjectCompiledInDefer
            (FUN_142f1bfd0,FUN_142f1bea0,L"UGbxGFxContextualMenu",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403df3a0 FUN_1403df3a0 body=58 status=ok
// SIG undefined FUN_1403df3a0(void)

void FUN_1403df3a0(void)

{
  UObjectCompiledInDefer
            (FUN_142f1f1e0,FUN_142f1bdf0,L"UGbxGFxContextualMenuData",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403df3e0 FUN_1403df3e0 body=58 status=ok
// SIG undefined FUN_1403df3e0(void)

void FUN_1403df3e0(void)

{
  UObjectCompiledInDefer
            (FUN_142f1f210,FUN_142f1c3b0,L"UGbxGFxContextualMenuHelpers",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403df420 FUN_1403df420 body=58 status=ok
// SIG undefined FUN_1403df420(void)

void FUN_1403df420(void)

{
  UObjectCompiledInDefer
            (FUN_142f1b7f0,FUN_142f1c920,L"UGbxGFxDragDropManager",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403df460 FUN_1403df460 body=58 status=ok
// SIG undefined FUN_1403df460(void)

void FUN_1403df460(void)

{
  UObjectCompiledInDefer(FUN_142f1ba90,FUN_142f1b8a0,L"UGbxGFxDropDownList",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403df4a0 FUN_1403df4a0 body=58 status=ok
// SIG undefined FUN_1403df4a0(void)

void FUN_1403df4a0(void)

{
  UObjectCompiledInDefer
            (FUN_142f1f240,&LAB_14139c5f0,L"UGbxGFxEditableTextField",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403df4e0 FUN_1403df4e0 body=58 status=ok
// SIG undefined FUN_1403df4e0(void)

void FUN_1403df4e0(void)

{
  UObjectCompiledInDefer
            (FUN_142f1bb20,UGameInstanceGameParameters::GetPrivateStaticClass,
             L"UGbxGFxGridScrollingList",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403df520 FUN_1403df520 body=58 status=ok
// SIG undefined FUN_1403df520(void)

void FUN_1403df520(void)

{
  UObjectCompiledInDefer
            (FUN_142f1f270,UXGameInstance::GetPrivateStaticClass,L"UGbxGFxGridScrollingListPaged",
             L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403df560 FUN_1403df560 body=58 status=ok
// SIG undefined FUN_1403df560(void)

void FUN_1403df560(void)

{
  UObjectCompiledInDefer
            (FUN_142f1f2a0,AWeaponBase::GetPrivateStaticClass,L"UGbxGFxHUDContainer",
             L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403df5a0 FUN_1403df5a0 body=58 status=ok
// SIG undefined FUN_1403df5a0(void)

void FUN_1403df5a0(void)

{
  UObjectCompiledInDefer
            (FUN_142f1b950,UGSquadMemberWidget::GetPrivateStaticClass,L"UGbxGFxHUDWidget",
             L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403df5e0 FUN_1403df5e0 body=58 status=ok
// SIG undefined FUN_1403df5e0(void)

void FUN_1403df5e0(void)

{
  UObjectCompiledInDefer
            (FUN_142f1f2d0,AReplicationGraphDebugActor::GetPrivateStaticClass,
             L"UGbxGFxHintBarContainer",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403df620 FUN_1403df620 body=58 status=ok
// SIG undefined FUN_1403df620(void)

void FUN_1403df620(void)

{
  UObjectCompiledInDefer
            (FUN_142f1c520,AGameModeTitleScene::GetPrivateStaticClass,L"UGbxGFxHintWidget",
             L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403df660 FUN_1403df660 body=58 status=ok
// SIG undefined FUN_1403df660(void)

void FUN_1403df660(void)

{
  UObjectCompiledInDefer
            (FUN_142f1bf60,URemnantGameInstance::GetPrivateStaticClass,L"UGbxGFxListCell",
             L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403df6a0 FUN_1403df6a0 body=58 status=ok
// SIG undefined FUN_1403df6a0(void)

void FUN_1403df6a0(void)

{
  UObjectCompiledInDefer
            (FUN_142f1bc40,UGameInstanceGameParameters::GetPrivateStaticClass,
             L"UGbxGFxListCellWithData",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403df6e0 FUN_1403df6e0 body=58 status=ok
// SIG undefined FUN_1403df6e0(void)

void FUN_1403df6e0(void)

{
  UObjectCompiledInDefer
            (FUN_142f1bd30,FUN_142f1bc80,L"UGbxGFxListItemComboBox",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403df720 FUN_1403df720 body=58 status=ok
// SIG undefined FUN_1403df720(void)

void FUN_1403df720(void)

{
  UObjectCompiledInDefer
            (FUN_142f1f300,FUN_142f1c0a0,L"UGbxGFxListItemControls",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403df760 FUN_1403df760 body=58 status=ok
// SIG undefined FUN_1403df760(void)

void FUN_1403df760(void)

{
  UObjectCompiledInDefer
            (FUN_142f1c270,AOnlineBeaconClient::GetPrivateStaticClass,L"UGbxGFxListItemNumber",
             L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403df7a0 FUN_1403df7a0 body=58 status=ok
// SIG undefined FUN_1403df7a0(void)

void FUN_1403df7a0(void)

{
  UObjectCompiledInDefer
            (FUN_142f1c580,&LAB_141321fe0,L"UGbxGFxListItemSpinner",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403df7e0 FUN_1403df7e0 body=58 status=ok
// SIG undefined FUN_1403df7e0(void)

void FUN_1403df7e0(void)

{
  UObjectCompiledInDefer(FUN_142f1c720,FUN_142f1c650,L"UGbxGFxMediaPlayer",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e0390 FUN_1403e0390 body=92 status=ok
// SIG undefined FUN_1403e0390(void)

void FUN_1403e0390(void)

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
    *puVar1 = &PTR_FUN_1459acbc0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxGFxAnchor",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403e03f0 FUN_1403e03f0 body=92 status=ok
// SIG undefined FUN_1403e03f0(void)

void FUN_1403e03f0(void)

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
    *puVar1 = &PTR_FUN_1459ad1e0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxGFxListCellUpdateInfo",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403e0450 FUN_1403e0450 body=92 status=ok
// SIG undefined FUN_1403e0450(void)

void FUN_1403e0450(void)

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
    *puVar1 = &PTR_FUN_1459ac270;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxGFxMenuSwitcherNavWidgetCustomItem",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403e04b0 FUN_1403e04b0 body=92 status=ok
// SIG undefined FUN_1403e04b0(void)

void FUN_1403e04b0(void)

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
    *puVar1 = &PTR_FUN_1459abb00;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxGFxMenuSwitcherSubmenuInfo",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403e0510 FUN_1403e0510 body=92 status=ok
// SIG undefined FUN_1403e0510(void)

void FUN_1403e0510(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x1c;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_1440ce368;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxGFxMouseCapturePanelMouseButtonInfo",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403e0570 FUN_1403e0570 body=92 status=ok
// SIG undefined FUN_1403e0570(void)

void FUN_1403e0570(void)

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
    *puVar1 = &PTR_FUN_1459accd8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxGFxMovieClipAppendix",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403e05d0 FUN_1403e05d0 body=92 status=ok
// SIG undefined FUN_1403e05d0(void)

void FUN_1403e05d0(void)

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
    *puVar1 = &PTR_FUN_1459ad528;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxGFxPooledGridListConfig",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403e0630 FUN_1403e0630 body=92 status=ok
// SIG undefined FUN_1403e0630(void)

void FUN_1403e0630(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0xc0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1459ad410;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxGFxPooledGridListFullConfig",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403e0690 FUN_1403e0690 body=92 status=ok
// SIG undefined FUN_1403e0690(void)

void FUN_1403e0690(void)

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
    *puVar1 = &PTR_FUN_1459ad2f8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxGFxPooledGridPoolInfo",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403e06f0 FUN_1403e06f0 body=92 status=ok
// SIG undefined FUN_1403e06f0(void)

void FUN_1403e06f0(void)

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
    *puVar1 = &PTR_FUN_1459acdf0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxGFxmovieClipAppendixItem",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403e0750 FUN_1403e0750 body=92 status=ok
// SIG undefined FUN_1403e0750(void)

void FUN_1403e0750(void)

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
    *puVar1 = &PTR_FUN_1459acf08;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"UIEventAudioPairRow",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403e09a0 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146745cd0,0);
  FGenericPlatformString::Memcpy(DAT_146745cd0,&DAT_1459a6a68,8);
  atexit((_func_5014 *)&LAB_143ec2130);
  return;
}



// FUNCTION 1403e0a00 FUN_1403e0a00 body=66 status=ok
// SIG undefined FUN_1403e0a00(void)

void FUN_1403e0a00(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGbxGFxMenuSwitchNavWidgetType",1);
  UObjectCompiledInDeferEnum(EEnemyType_StaticEnum,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e0a50 FUN_1403e0a50 body=66 status=ok
// SIG undefined FUN_1403e0a50(void)

void FUN_1403e0a50(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGbxGFxMenuSwitcherSubmenuInitReason",1);
  UObjectCompiledInDeferEnum(EEnemyType_StaticEnum,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e0aa0 FUN_1403e0aa0 body=66 status=ok
// SIG undefined FUN_1403e0aa0(void)

void FUN_1403e0aa0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EUIAudioSettingOperation",1);
  UObjectCompiledInDeferEnum(EEnemyType_StaticEnum,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e0af0 FUN_1403e0af0 body=66 status=ok
// SIG undefined FUN_1403e0af0(void)

void FUN_1403e0af0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxGFxAnchor",1);
  UObjectCompiledInDeferStruct(FUN_142f22dd0,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e0b40 FUN_1403e0b40 body=66 status=ok
// SIG undefined FUN_1403e0b40(void)

void FUN_1403e0b40(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxGFxListCellUpdateInfo",1);
  UObjectCompiledInDeferStruct(FUN_142f22e30,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e0b90 FUN_1403e0b90 body=66 status=ok
// SIG undefined FUN_1403e0b90(void)

void FUN_1403e0b90(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxGFxMenuSwitcherNavWidgetCustomItem",1);
  UObjectCompiledInDeferStruct(FUN_142f22e90,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e0be0 FUN_1403e0be0 body=66 status=ok
// SIG undefined FUN_1403e0be0(void)

void FUN_1403e0be0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxGFxMenuSwitcherSubmenuInfo",1);
  UObjectCompiledInDeferStruct(FUN_142f22ef0,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e0c30 FUN_1403e0c30 body=66 status=ok
// SIG undefined FUN_1403e0c30(void)

void FUN_1403e0c30(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxGFxMouseCapturePanelMouseButtonInfo",1);
  UObjectCompiledInDeferStruct(FUN_142f22f50,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e0c80 FUN_1403e0c80 body=66 status=ok
// SIG undefined FUN_1403e0c80(void)

void FUN_1403e0c80(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxGFxMovieClipAppendix",1);
  UObjectCompiledInDeferStruct(FUN_142f22fb0,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e0cd0 FUN_1403e0cd0 body=66 status=ok
// SIG undefined FUN_1403e0cd0(void)

void FUN_1403e0cd0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxGFxPooledGridListConfig",1);
  UObjectCompiledInDeferStruct(FUN_142f23010,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e0d20 FUN_1403e0d20 body=66 status=ok
// SIG undefined FUN_1403e0d20(void)

void FUN_1403e0d20(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxGFxPooledGridListFullConfig",1);
  UObjectCompiledInDeferStruct(FUN_142f23070,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e0d70 FUN_1403e0d70 body=66 status=ok
// SIG undefined FUN_1403e0d70(void)

void FUN_1403e0d70(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxGFxPooledGridPoolInfo",1);
  UObjectCompiledInDeferStruct(FUN_142f230d0,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e0dc0 FUN_1403e0dc0 body=66 status=ok
// SIG undefined FUN_1403e0dc0(void)

void FUN_1403e0dc0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxGFxmovieClipAppendixItem",1);
  UObjectCompiledInDeferStruct(FUN_142f23130,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e0e10 FUN_1403e0e10 body=66 status=ok
// SIG undefined FUN_1403e0e10(void)

void FUN_1403e0e10(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"UIEventAudioPairRow",1);
  UObjectCompiledInDeferStruct(FUN_142f23190,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e0e60 FUN_1403e0e60 body=58 status=ok
// SIG undefined FUN_1403e0e60(void)

void FUN_1403e0e60(void)

{
  UObjectCompiledInDefer(FUN_142f20880,&LAB_1412d9d00,L"UGbxGFxMenu",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e0ea0 FUN_1403e0ea0 body=58 status=ok
// SIG undefined FUN_1403e0ea0(void)

void FUN_1403e0ea0(void)

{
  UObjectCompiledInDefer(FUN_142f20fc0,&LAB_14131be10,L"UGbxGFxMenuData",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e0ee0 FUN_1403e0ee0 body=58 status=ok
// SIG undefined FUN_1403e0ee0(void)

void FUN_1403e0ee0(void)

{
  UObjectCompiledInDefer(FUN_142f231f0,&LAB_141343ff0,L"UGbxGFxMenuSwitcher",L"/Script/GbxUI",0,0,0)
  ;
  return;
}



// FUNCTION 1403e0f20 FUN_1403e0f20 body=58 status=ok
// SIG undefined FUN_1403e0f20(void)

void FUN_1403e0f20(void)

{
  UObjectCompiledInDefer
            (FUN_142f23220,&LAB_1413a4390,L"UGbxGFxMenuSwitcherMenuData",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e0f60 FUN_1403e0f60 body=58 status=ok
// SIG undefined FUN_1403e0f60(void)

void FUN_1403e0f60(void)

{
  UObjectCompiledInDefer
            (FUN_142f23250,UXGameInstance::GetPrivateStaticClass,L"UGbxGFxMenuSwitcherNavCell",
             L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e0fa0 FUN_1403e0fa0 body=58 status=ok
// SIG undefined FUN_1403e0fa0(void)

void FUN_1403e0fa0(void)

{
  UObjectCompiledInDefer
            (FUN_142f205e0,FUN_142f20520,L"UGbxGFxMenuSwitcherNavWidget",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e0fe0 FUN_1403e0fe0 body=58 status=ok
// SIG undefined FUN_1403e0fe0(void)

void FUN_1403e0fe0(void)

{
  UObjectCompiledInDefer
            (FUN_142f23280,&LAB_141344000,L"UGbxGFxMenuSwitcherSubmenu",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e1020 FUN_1403e1020 body=58 status=ok
// SIG undefined FUN_1403e1020(void)

void FUN_1403e1020(void)

{
  UObjectCompiledInDefer(FUN_142f232b0,FUN_142f206d0,L"UGbxGFxMouseBlocker",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e1060 FUN_1403e1060 body=58 status=ok
// SIG undefined FUN_1403e1060(void)

void FUN_1403e1060(void)

{
  UObjectCompiledInDefer
            (FUN_142f20840,FUN_142f20790,L"UGbxGFxMouseCapturePanel",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e10a0 FUN_1403e10a0 body=58 status=ok
// SIG undefined FUN_1403e10a0(void)

void FUN_1403e10a0(void)

{
  UObjectCompiledInDefer(FUN_142f208b0,&LAB_141331310,L"UGbxGFxMovie",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e10e0 FUN_1403e10e0 body=58 status=ok
// SIG undefined FUN_1403e10e0(void)

void FUN_1403e10e0(void)

{
  UObjectCompiledInDefer(FUN_142f21010,&LAB_141360350,L"UGbxGFxMovieLoader",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e1120 FUN_1403e1120 body=58 status=ok
// SIG undefined FUN_1403e1120(void)

void FUN_1403e1120(void)

{
  UObjectCompiledInDefer(FUN_142f20610,&LAB_141326ad0,L"UGbxGFxObject",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e1160 FUN_1403e1160 body=58 status=ok
// SIG undefined FUN_1403e1160(void)

void FUN_1403e1160(void)

{
  UObjectCompiledInDefer
            (FUN_142f232e0,thunk_FUN_142f22b30,L"UGbxGFxPooledGridList",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e1e10 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14674ba98,0);
  FGenericPlatformString::Memcpy(DAT_14674ba98,L"<img src=\"%s\"></>",0x24);
  atexit((_func_5014 *)&LAB_143ec2150);
  return;
}



// FUNCTION 1403e1f50 FUN_1403e1f50 body=92 status=ok
// SIG undefined FUN_1403e1f50(void)

void FUN_1403e1f50(void)

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
    *puVar1 = &PTR_FUN_1459b4910;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxGFxHUDWidgetInfo",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403e1fb0 FUN_1403e1fb0 body=92 status=ok
// SIG undefined FUN_1403e1fb0(void)

void FUN_1403e1fb0(void)

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
    *puVar1 = &PTR_FUN_1459b30b0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxGFxSliderAcceleration",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403e2010 FUN_1403e2010 body=92 status=ok
// SIG undefined FUN_1403e2010(void)

void FUN_1403e2010(void)

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
    *puVar1 = &PTR_FUN_1459b4a28;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxHUDFeedbackManager",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403e2070 FUN_1403e2070 body=92 status=ok
// SIG undefined FUN_1403e2070(void)

void FUN_1403e2070(void)

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
    *puVar1 = &PTR_FUN_1459b46e0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxHUDLayoutData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403e20d0 FUN_1403e20d0 body=92 status=ok
// SIG undefined FUN_1403e20d0(void)

void FUN_1403e20d0(void)

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
    *puVar1 = &PTR_FUN_1459b47f8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxHUDLayoutTableRow",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403e2130 FUN_1403e2130 body=92 status=ok
// SIG undefined FUN_1403e2130(void)

void FUN_1403e2130(void)

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
    *puVar1 = &PTR_FUN_1459b4c00;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxHUDStateManager",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403e2190 FUN_1403e2190 body=92 status=ok
// SIG undefined FUN_1403e2190(void)

void FUN_1403e2190(void)

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
    *puVar1 = &PTR_FUN_1459b3fe8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxHintInfo",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403e21f0 FUN_1403e21f0 body=92 status=ok
// SIG undefined FUN_1403e21f0(void)

void FUN_1403e21f0(void)

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
    *puVar1 = &PTR_FUN_1459b3ec0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxHintWidgetMapItem",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403e2440 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14674a5d0,0);
  FGenericPlatformString::Memcpy(DAT_14674a5d0,&DAT_1459b04b8,8);
  atexit((_func_5014 *)&LAB_143ec2170);
  return;
}



// FUNCTION 1403e24a0 FUN_1403e24a0 body=66 status=ok
// SIG undefined FUN_1403e24a0(void)

void FUN_1403e24a0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EEdgeFlashType",1);
  UObjectCompiledInDeferEnum(EEnemyType_StaticEnum,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e24f0 FUN_1403e24f0 body=66 status=ok
// SIG undefined FUN_1403e24f0(void)

void FUN_1403e24f0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGbxGFxSliderDirection",1);
  UObjectCompiledInDeferEnum(EEnemyType_StaticEnum,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e2540 FUN_1403e2540 body=66 status=ok
// SIG undefined FUN_1403e2540(void)

void FUN_1403e2540(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGbxGFxSliderState",1);
  UObjectCompiledInDeferEnum(EEnemyType_StaticEnum,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e2590 FUN_1403e2590 body=66 status=ok
// SIG undefined FUN_1403e2590(void)

void FUN_1403e2590(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGbxGridWidgetFill",1);
  UObjectCompiledInDeferEnum(EEnemyType_StaticEnum,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e25e0 FUN_1403e25e0 body=66 status=ok
// SIG undefined FUN_1403e25e0(void)

void FUN_1403e25e0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGbxHUDStateListType",1);
  UObjectCompiledInDeferEnum(EEnemyType_StaticEnum,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e2630 FUN_1403e2630 body=66 status=ok
// SIG undefined FUN_1403e2630(void)

void FUN_1403e2630(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EHUDInitializationAnimationSet",1);
  UObjectCompiledInDeferEnum(EEnemyType_StaticEnum,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e2680 FUN_1403e2680 body=66 status=ok
// SIG undefined FUN_1403e2680(void)

void FUN_1403e2680(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EHUDStateManagerVisibility",1);
  UObjectCompiledInDeferEnum(EEnemyType_StaticEnum,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e26d0 FUN_1403e26d0 body=66 status=ok
// SIG undefined FUN_1403e26d0(void)

void FUN_1403e26d0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxGFxHUDWidgetInfo",1);
  UObjectCompiledInDeferStruct(FUN_142f28270,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e2720 FUN_1403e2720 body=66 status=ok
// SIG undefined FUN_1403e2720(void)

void FUN_1403e2720(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxGFxSliderAcceleration",1);
  UObjectCompiledInDeferStruct(FUN_142f282d0,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e2770 FUN_1403e2770 body=66 status=ok
// SIG undefined FUN_1403e2770(void)

void FUN_1403e2770(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxHUDFeedbackManager",1);
  UObjectCompiledInDeferStruct(FUN_142f28330,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e27c0 FUN_1403e27c0 body=66 status=ok
// SIG undefined FUN_1403e27c0(void)

void FUN_1403e27c0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxHUDLayoutData",1);
  UObjectCompiledInDeferStruct(FUN_142f28390,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e2810 FUN_1403e2810 body=66 status=ok
// SIG undefined FUN_1403e2810(void)

void FUN_1403e2810(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxHUDLayoutTableRow",1);
  UObjectCompiledInDeferStruct(FUN_142f283f0,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e2860 FUN_1403e2860 body=66 status=ok
// SIG undefined FUN_1403e2860(void)

void FUN_1403e2860(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxHUDStateManager",1);
  UObjectCompiledInDeferStruct(FUN_142f28450,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e28b0 FUN_1403e28b0 body=66 status=ok
// SIG undefined FUN_1403e28b0(void)

void FUN_1403e28b0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxHintInfo",1);
  UObjectCompiledInDeferStruct(FUN_142f284b0,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e2900 FUN_1403e2900 body=66 status=ok
// SIG undefined FUN_1403e2900(void)

void FUN_1403e2900(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxHintWidgetMapItem",1);
  UObjectCompiledInDeferStruct(FUN_142f28510,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e2950 FUN_1403e2950 body=58 status=ok
// SIG undefined FUN_1403e2950(void)

void FUN_1403e2950(void)

{
  UObjectCompiledInDefer(FUN_142f255f0,thunk_FUN_142f27b90,L"AGbxHUD",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e2990 FUN_1403e2990 body=58 status=ok
// SIG undefined FUN_1403e2990(void)

void FUN_1403e2990(void)

{
  UObjectCompiledInDefer
            (FUN_142f28570,FUN_142f251d0,L"UGbxGFxHUDFeedbackData",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e29d0 FUN_1403e29d0 body=58 status=ok
// SIG undefined FUN_1403e29d0(void)

void FUN_1403e29d0(void)

{
  UObjectCompiledInDefer(FUN_142f25b90,&LAB_141366d80,L"UGbxGFxProgressBar",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e2a10 FUN_1403e2a10 body=58 status=ok
// SIG undefined FUN_1403e2a10(void)

void FUN_1403e2a10(void)

{
  UObjectCompiledInDefer
            (FUN_142f285a0,UGameInstanceGameParameters::GetPrivateStaticClass,
             L"UGbxGFxRadioButtonList",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e2a50 FUN_1403e2a50 body=58 status=ok
// SIG undefined FUN_1403e2a50(void)

void FUN_1403e2a50(void)

{
  UObjectCompiledInDefer
            (FUN_142f285d0,AReplicationGraphDebugActor::GetPrivateStaticClass,
             L"UGbxGFxRechargeableProgressBar",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e2a90 FUN_1403e2a90 body=58 status=ok
// SIG undefined FUN_1403e2a90(void)

void FUN_1403e2a90(void)

{
  UObjectCompiledInDefer(FUN_142f25360,FUN_142f25280,L"UGbxGFxSlider",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e2ad0 FUN_1403e2ad0 body=58 status=ok
// SIG undefined FUN_1403e2ad0(void)

void FUN_1403e2ad0(void)

{
  UObjectCompiledInDefer(FUN_142f28600,thunk_FUN_142f27da0,L"UGbxGFxSprite",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e2b10 FUN_1403e2b10 body=58 status=ok
// SIG undefined FUN_1403e2b10(void)

void FUN_1403e2b10(void)

{
  UObjectCompiledInDefer(FUN_142f28630,FUN_142f25530,L"UGbxGridListWidget",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e2b50 FUN_1403e2b50 body=58 status=ok
// SIG undefined FUN_1403e2b50(void)

void FUN_1403e2b50(void)

{
  UObjectCompiledInDefer(FUN_142f28660,FUN_142f258d0,L"UGbxGuidePanel",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e2b90 FUN_1403e2b90 body=58 status=ok
// SIG undefined FUN_1403e2b90(void)

void FUN_1403e2b90(void)

{
  UObjectCompiledInDefer(FUN_142f25dd0,&LAB_1413bab60,L"UGbxHUDContainer",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e2bd0 FUN_1403e2bd0 body=58 status=ok
// SIG undefined FUN_1403e2bd0(void)

void FUN_1403e2bd0(void)

{
  UObjectCompiledInDefer
            (FUN_142f28690,UTextureRenderTargetCube::GetPrivateStaticClass,L"UGbxHUDData",
             L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e2c10 FUN_1403e2c10 body=58 status=ok
// SIG undefined FUN_1403e2c10(void)

void FUN_1403e2c10(void)

{
  UObjectCompiledInDefer(FUN_142f286c0,FUN_142f25420,L"UGbxHUDStateData",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e2c50 FUN_1403e2c50 body=58 status=ok
// SIG undefined FUN_1403e2c50(void)

void FUN_1403e2c50(void)

{
  UObjectCompiledInDefer(FUN_142f26040,FUN_142f25af0,L"UGbxHintBar",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e2c90 FUN_1403e2c90 body=58 status=ok
// SIG undefined FUN_1403e2c90(void)

void FUN_1403e2c90(void)

{
  UObjectCompiledInDefer
            (FUN_142f25f50,FUN_142f25a40,L"UGbxHintBarWidgetContainer",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e2cd0 FUN_1403e2cd0 body=58 status=ok
// SIG undefined FUN_1403e2cd0(void)

void FUN_1403e2cd0(void)

{
  UObjectCompiledInDefer
            (FUN_142f26260,UBlendableInterface::GetPrivateStaticClass,L"UGbxHintWidget",
             L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e2d10 FUN_1403e2d10 body=58 status=ok
// SIG undefined FUN_1403e2d10(void)

void FUN_1403e2d10(void)

{
  UObjectCompiledInDefer
            (FUN_142f286f0,FUN_142f26140,L"UHUDDataProviderInterface",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e37c0 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14674ec50,0);
  FGenericPlatformString::Memcpy(DAT_14674ec50,L"<img src=\"%s\"></>",0x24);
  atexit((_func_5014 *)&LAB_143ec2190);
  return;
}



// FUNCTION 1403e3900 FUN_1403e3900 body=92 status=ok
// SIG undefined FUN_1403e3900(void)

void FUN_1403e3900(void)

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
    *puVar1 = &PTR_FUN_1459bc2a0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxDLCMenuSplitscreenLayouts",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403e3960 FUN_1403e3960 body=92 status=ok
// SIG undefined FUN_1403e3960(void)

void FUN_1403e3960(void)

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
    *puVar1 = &PTR_FUN_1459bc070;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxMenuAxisInputEvent",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403e39c0 FUN_1403e39c0 body=92 status=ok
// SIG undefined FUN_1403e39c0(void)

void FUN_1403e39c0(void)

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
    *puVar1 = &PTR_FUN_1459bbe10;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxMenuInputAction",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403e3a20 FUN_1403e3a20 body=92 status=ok
// SIG undefined FUN_1403e3a20(void)

void FUN_1403e3a20(void)

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
    *puVar1 = &PTR_FUN_144a5a6b0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxMenuInputActionInfo",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403e3a80 FUN_1403e3a80 body=92 status=ok
// SIG undefined FUN_1403e3a80(void)

void FUN_1403e3a80(void)

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
    *puVar1 = &PTR_FUN_1459bbbe0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxMenuInputAxisAction",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403e3ae0 FUN_1403e3ae0 body=92 status=ok
// SIG undefined FUN_1403e3ae0(void)

void FUN_1403e3ae0(void)

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
    *puVar1 = &PTR_FUN_1459bbcf8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxMenuInputAxisBind",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403e3b40 FUN_1403e3b40 body=92 status=ok
// SIG undefined FUN_1403e3b40(void)

void FUN_1403e3b40(void)

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
    *puVar1 = &PTR_FUN_1459bc188;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxMenuInputEvent",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403e3ba0 FUN_1403e3ba0 body=92 status=ok
// SIG undefined FUN_1403e3ba0(void)

void FUN_1403e3ba0(void)

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
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxMenuInputRawMousePos",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403e3c00 FUN_1403e3c00 body=92 status=ok
// SIG undefined FUN_1403e3c00(void)

void FUN_1403e3c00(void)

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
    *puVar1 = &PTR_FUN_1459bbf28;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxMenuKeyRepeatInfo",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403e3c60 FUN_1403e3c60 body=92 status=ok
// SIG undefined FUN_1403e3c60(void)

void FUN_1403e3c60(void)

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
    *puVar1 = &PTR_FUN_1459bc3b8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxMenuSplitscreenLayouts",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403e3e80 FUN_1403e3e80 body=66 status=ok
// SIG undefined FUN_1403e3e80(void)

void FUN_1403e3e80(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGbxListFocusChangedAction",1);
  UObjectCompiledInDeferEnum(EEnemyType_StaticEnum,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e3ed0 FUN_1403e3ed0 body=66 status=ok
// SIG undefined FUN_1403e3ed0(void)

void FUN_1403e3ed0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGbxListWrapMode",1);
  UObjectCompiledInDeferEnum(EEnemyType_StaticEnum,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e3f20 FUN_1403e3f20 body=66 status=ok
// SIG undefined FUN_1403e3f20(void)

void FUN_1403e3f20(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGbxMenuInputActionTrigger",1);
  UObjectCompiledInDeferEnum(EEnemyType_StaticEnum,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e3f70 FUN_1403e3f70 body=66 status=ok
// SIG undefined FUN_1403e3f70(void)

void FUN_1403e3f70(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGbxMenuInputDevice",1);
  UObjectCompiledInDeferEnum(EEnemyType_StaticEnum,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e3fc0 FUN_1403e3fc0 body=66 status=ok
// SIG undefined FUN_1403e3fc0(void)

void FUN_1403e3fc0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGbxMenuInputMode",1);
  UObjectCompiledInDeferEnum(EEnemyType_StaticEnum,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e4010 FUN_1403e4010 body=66 status=ok
// SIG undefined FUN_1403e4010(void)

void FUN_1403e4010(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGbxMenuParentType",1);
  UObjectCompiledInDeferEnum(EEnemyType_StaticEnum,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e4060 FUN_1403e4060 body=66 status=ok
// SIG undefined FUN_1403e4060(void)

void FUN_1403e4060(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxDLCMenuSplitscreenLayouts",1);
  UObjectCompiledInDeferStruct(FUN_142f2d320,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e40b0 FUN_1403e40b0 body=66 status=ok
// SIG undefined FUN_1403e40b0(void)

void FUN_1403e40b0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxMenuAxisInputEvent",1);
  UObjectCompiledInDeferStruct(FUN_142f2d380,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e4100 FUN_1403e4100 body=66 status=ok
// SIG undefined FUN_1403e4100(void)

void FUN_1403e4100(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxMenuInputAction",1);
  UObjectCompiledInDeferStruct(FUN_142f2d3e0,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e4150 FUN_1403e4150 body=66 status=ok
// SIG undefined FUN_1403e4150(void)

void FUN_1403e4150(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxMenuInputActionInfo",1);
  UObjectCompiledInDeferStruct(FUN_142f2d440,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e41a0 FUN_1403e41a0 body=66 status=ok
// SIG undefined FUN_1403e41a0(void)

void FUN_1403e41a0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxMenuInputAxisAction",1);
  UObjectCompiledInDeferStruct(FUN_142f2d4a0,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e41f0 FUN_1403e41f0 body=66 status=ok
// SIG undefined FUN_1403e41f0(void)

void FUN_1403e41f0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxMenuInputAxisBind",1);
  UObjectCompiledInDeferStruct(FUN_142f2d500,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e4240 FUN_1403e4240 body=66 status=ok
// SIG undefined FUN_1403e4240(void)

void FUN_1403e4240(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxMenuInputEvent",1);
  UObjectCompiledInDeferStruct(FUN_142f2d560,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e4290 FUN_1403e4290 body=66 status=ok
// SIG undefined FUN_1403e4290(void)

void FUN_1403e4290(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxMenuInputRawMousePos",1);
  UObjectCompiledInDeferStruct(FUN_142f2d5c0,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e42e0 FUN_1403e42e0 body=66 status=ok
// SIG undefined FUN_1403e42e0(void)

void FUN_1403e42e0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxMenuKeyRepeatInfo",1);
  UObjectCompiledInDeferStruct(FUN_142f2d620,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e4330 FUN_1403e4330 body=66 status=ok
// SIG undefined FUN_1403e4330(void)

void FUN_1403e4330(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxMenuSplitscreenLayouts",1);
  UObjectCompiledInDeferStruct(FUN_142f2d680,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e4380 FUN_1403e4380 body=58 status=ok
// SIG undefined FUN_1403e4380(void)

void FUN_1403e4380(void)

{
  UObjectCompiledInDefer
            (FUN_142f2afc0,UProgressBar::GetPrivateStaticClass,L"UGbxHUDWidget",L"/Script/GbxUI",0,0
             ,0);
  return;
}



// FUNCTION 1403e43c0 FUN_1403e43c0 body=58 status=ok
// SIG undefined FUN_1403e43c0(void)

void FUN_1403e43c0(void)

{
  UObjectCompiledInDefer(FUN_142f2b180,FUN_142f2b0d0,L"UGbxList",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e4400 FUN_1403e4400 body=58 status=ok
// SIG undefined FUN_1403e4400(void)

void FUN_1403e4400(void)

{
  UObjectCompiledInDefer(FUN_142f2a010,&LAB_14141c8d0,L"UGbxListItem",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e4440 FUN_1403e4440 body=58 status=ok
// SIG undefined FUN_1403e4440(void)

void FUN_1403e4440(void)

{
  UObjectCompiledInDefer
            (FUN_142f2a200,UGPasswordResetPage::GetPrivateStaticClass,L"UGbxListItemBoolean",
             L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e4480 FUN_1403e4480 body=58 status=ok
// SIG undefined FUN_1403e4480(void)

void FUN_1403e4480(void)

{
  UObjectCompiledInDefer
            (FUN_142f2a890,UUGStartScreenUW::GetPrivateStaticClass,L"UGbxListItemComboBox",
             L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e44c0 FUN_1403e44c0 body=58 status=ok
// SIG undefined FUN_1403e44c0(void)

void FUN_1403e44c0(void)

{
  UObjectCompiledInDefer(FUN_142f2ad40,FUN_142f2ac90,L"UGbxListItemFactory",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e4500 FUN_1403e4500 body=58 status=ok
// SIG undefined FUN_1403e4500(void)

void FUN_1403e4500(void)

{
  UObjectCompiledInDefer
            (FUN_142f2aea0,UGHUDEmoteMenu::GetPrivateStaticClass,L"UGbxListItemNumber",
             L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e4540 FUN_1403e4540 body=58 status=ok
// SIG undefined FUN_1403e4540(void)

void FUN_1403e4540(void)

{
  UObjectCompiledInDefer(FUN_142f2d6e0,&LAB_1413cd9b0,L"UGbxListItemText",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e4580 FUN_1403e4580 body=58 status=ok
// SIG undefined FUN_1403e4580(void)

void FUN_1403e4580(void)

{
  UObjectCompiledInDefer(FUN_142f2d710,FUN_142f2b5a0,L"UGbxMenu",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e45c0 FUN_1403e45c0 body=58 status=ok
// SIG undefined FUN_1403e45c0(void)

void FUN_1403e45c0(void)

{
  UObjectCompiledInDefer(FUN_142f2d740,thunk_FUN_142f2cf80,L"UGbxMenuData",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e4600 FUN_1403e4600 body=58 status=ok
// SIG undefined FUN_1403e4600(void)

void FUN_1403e4600(void)

{
  UObjectCompiledInDefer(FUN_142f2d770,FUN_142f2a9e0,L"UGbxMenuInput",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e4640 FUN_1403e4640 body=58 status=ok
// SIG undefined FUN_1403e4640(void)

void FUN_1403e4640(void)

{
  UObjectCompiledInDefer
            (FUN_142f2d7a0,FUN_142f2a230,L"UGbxMenuInputListener",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e4680 FUN_1403e4680 body=58 status=ok
// SIG undefined FUN_1403e4680(void)

void FUN_1403e4680(void)

{
  UObjectCompiledInDefer
            (FUN_142f2d7d0,UTwitchInteractivitySettings::GetPrivateStaticClass,
             L"UGbxMenuInputSettings",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e46c0 FUN_1403e46c0 body=58 status=ok
// SIG undefined FUN_1403e46c0(void)

void FUN_1403e46c0(void)

{
  UObjectCompiledInDefer(FUN_142f2a3b0,FUN_142f2ab40,L"UGbxMenuStack",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e4700 FUN_1403e4700 body=58 status=ok
// SIG undefined FUN_1403e4700(void)

void FUN_1403e4700(void)

{
  UObjectCompiledInDefer
            (FUN_142f2d800,UBlackboardKeyType_Object::GetPrivateStaticClass,L"UGbxMenuStackMenuInfo"
             ,L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e5230 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146753e80,0);
  FGenericPlatformString::Memcpy(DAT_146753e80,L"<img src=\"%s\"></>",0x24);
  atexit((_func_5014 *)&LAB_143ec21b0);
  return;
}



// FUNCTION 1403e5370 FUN_1403e5370 body=92 status=ok
// SIG undefined FUN_1403e5370(void)

void FUN_1403e5370(void)

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
    *puVar1 = &PTR_FUN_1459c1c60;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxMenuSwitcherSubmenuInfo",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403e53d0 FUN_1403e53d0 body=92 status=ok
// SIG undefined FUN_1403e53d0(void)

void FUN_1403e53d0(void)

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
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_1459c2948;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxProgressBarInterpolator",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403e5430 FUN_1403e5430 body=92 status=ok
// SIG undefined FUN_1403e5430(void)

void FUN_1403e5430(void)

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
    *puVar1 = &PTR_FUN_1459c2830;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxProgressBarRange",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403e5490 FUN_1403e5490 body=92 status=ok
// SIG undefined FUN_1403e5490(void)

void FUN_1403e5490(void)

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
    *puVar1 = &PTR_FUN_1459c3d60;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"TextDebugData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403e54f0 FUN_1403e54f0 body=92 status=ok
// SIG undefined FUN_1403e54f0(void)

void FUN_1403e54f0(void)

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
    *puVar1 = &PTR_FUN_1459c3c48;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"TextMarkupDictionaryEntry",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403e5740 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146756138,0);
  FGenericPlatformString::Memcpy(DAT_146756138,&DAT_1459beff0,8);
  atexit((_func_5014 *)&LAB_143ec21d0);
  return;
}



// FUNCTION 1403e57a0 FUN_1403e57a0 body=66 status=ok
// SIG undefined FUN_1403e57a0(void)

void FUN_1403e57a0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGbxMenuSwitcherSubmenuInitReason",1);
  UObjectCompiledInDeferEnum(FUN_142f31d50,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e57f0 FUN_1403e57f0 body=66 status=ok
// SIG undefined FUN_1403e57f0(void)

void FUN_1403e57f0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGbxProgressBarFillDirection",1);
  UObjectCompiledInDeferEnum(FUN_142f31db0,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e5840 FUN_1403e5840 body=66 status=ok
// SIG undefined FUN_1403e5840(void)

void FUN_1403e5840(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGbxScrollBoxListFocusChangedAction",1);
  UObjectCompiledInDeferEnum(FUN_142f31e10,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e5890 FUN_1403e5890 body=66 status=ok
// SIG undefined FUN_1403e5890(void)

void FUN_1403e5890(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGbxScrollBoxListWrapMode",1);
  UObjectCompiledInDeferEnum(FUN_142f31e70,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e58e0 FUN_1403e58e0 body=66 status=ok
// SIG undefined FUN_1403e58e0(void)

void FUN_1403e58e0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EMenuTransition",1);
  UObjectCompiledInDeferEnum(FUN_142f31f30,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e5930 FUN_1403e5930 body=66 status=ok
// SIG undefined FUN_1403e5930(void)

void FUN_1403e5930(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EMenuTransitionOperation",1);
  UObjectCompiledInDeferEnum(FUN_142f31ed0,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e5980 FUN_1403e5980 body=66 status=ok
// SIG undefined FUN_1403e5980(void)

void FUN_1403e5980(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EVerticalTextAutoSizeType",1);
  UObjectCompiledInDeferEnum(FUN_142f31f90,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e59d0 FUN_1403e59d0 body=66 status=ok
// SIG undefined FUN_1403e59d0(void)

void FUN_1403e59d0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxMenuSwitcherSubmenuInfo",1);
  UObjectCompiledInDeferStruct(FUN_142f32600,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e5a20 FUN_1403e5a20 body=66 status=ok
// SIG undefined FUN_1403e5a20(void)

void FUN_1403e5a20(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxProgressBarInterpolator",1);
  UObjectCompiledInDeferStruct(FUN_142f32680,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e5a70 FUN_1403e5a70 body=66 status=ok
// SIG undefined FUN_1403e5a70(void)

void FUN_1403e5a70(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxProgressBarRange",1);
  UObjectCompiledInDeferStruct(FUN_142f32700,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e5ac0 FUN_1403e5ac0 body=66 status=ok
// SIG undefined FUN_1403e5ac0(void)

void FUN_1403e5ac0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"TextDebugData",1);
  UObjectCompiledInDeferStruct(FUN_142f32780,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e5b10 FUN_1403e5b10 body=66 status=ok
// SIG undefined FUN_1403e5b10(void)

void FUN_1403e5b10(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"TextMarkupDictionaryEntry",1);
  UObjectCompiledInDeferStruct(FUN_142f32800,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e5b60 FUN_1403e5b60 body=58 status=ok
// SIG undefined FUN_1403e5b60(void)

void FUN_1403e5b60(void)

{
  UObjectCompiledInDefer(FUN_142f302e0,&LAB_142f18fc0,L"UGbxMenuSwitcher",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e5ba0 FUN_1403e5ba0 body=58 status=ok
// SIG undefined FUN_1403e5ba0(void)

void FUN_1403e5ba0(void)

{
  UObjectCompiledInDefer
            (FUN_142f32880,&LAB_142f18fd0,L"UGbxMenuSwitcherMenuData",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e5be0 FUN_1403e5be0 body=58 status=ok
// SIG undefined FUN_1403e5be0(void)

void FUN_1403e5be0(void)

{
  UObjectCompiledInDefer
            (FUN_142f328b0,thunk_FUN_142f32150,L"UGbxMenuSwitcherSubmenu",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e5c20 FUN_1403e5c20 body=58 status=ok
// SIG undefined FUN_1403e5c20(void)

void FUN_1403e5c20(void)

{
  UObjectCompiledInDefer(FUN_142f328e0,FUN_142f30690,L"UGbxMeshWidget",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e5c60 FUN_1403e5c60 body=58 status=ok
// SIG undefined FUN_1403e5c60(void)

void FUN_1403e5c60(void)

{
  UObjectCompiledInDefer
            (FUN_142f32910,FUN_142f308c0,L"UGbxNoClipCanvasPanel",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e5ca0 FUN_1403e5ca0 body=58 status=ok
// SIG undefined FUN_1403e5ca0(void)

void FUN_1403e5ca0(void)

{
  UObjectCompiledInDefer
            (FUN_142f30ca0,AUGSoundManager::GetPrivateStaticClass,L"UGbxProgressBar",
             L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e5ce0 FUN_1403e5ce0 body=58 status=ok
// SIG undefined FUN_1403e5ce0(void)

void FUN_1403e5ce0(void)

{
  UObjectCompiledInDefer(FUN_142f32940,FUN_142f30810,L"UGbxRetainerBox",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e5d20 FUN_1403e5d20 body=58 status=ok
// SIG undefined FUN_1403e5d20(void)

void FUN_1403e5d20(void)

{
  UObjectCompiledInDefer(FUN_142f32970,FUN_142f30520,L"UGbxRichTextBlock",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e5d60 FUN_1403e5d60 body=58 status=ok
// SIG undefined FUN_1403e5d60(void)

void FUN_1403e5d60(void)

{
  UObjectCompiledInDefer
            (FUN_142f329a0,ACineCameraActor::GetPrivateStaticClass,L"UGbxScrollBoxList",
             L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e5da0 FUN_1403e5da0 body=58 status=ok
// SIG undefined FUN_1403e5da0(void)

void FUN_1403e5da0(void)

{
  UObjectCompiledInDefer
            (FUN_142f30a70,UGameInstanceGameParameters::GetPrivateStaticClass,L"UGbxSpinner",
             L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e5de0 FUN_1403e5de0 body=58 status=ok
// SIG undefined FUN_1403e5de0(void)

void FUN_1403e5de0(void)

{
  UObjectCompiledInDefer
            (FUN_142f30fd0,UAnimSharingStateInstance::GetPrivateStaticClass,L"UGbxTextField",
             L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e5e20 FUN_1403e5e20 body=58 status=ok
// SIG undefined FUN_1403e5e20(void)

void FUN_1403e5e20(void)

{
  UObjectCompiledInDefer(FUN_142f329d0,&LAB_1414db420,L"UGbxUIGlobals",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e5e60 FUN_1403e5e60 body=58 status=ok
// SIG undefined FUN_1403e5e60(void)

void FUN_1403e5e60(void)

{
  UObjectCompiledInDefer(FUN_142f2ffb0,thunk_FUN_142f322b0,L"UGbxUILibrary",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e5ea0 FUN_1403e5ea0 body=58 status=ok
// SIG undefined FUN_1403e5ea0(void)

void FUN_1403e5ea0(void)

{
  UObjectCompiledInDefer(FUN_142f32a00,FUN_142f30760,L"UUIAccessors",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e6920 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14675abc8,0);
  FGenericPlatformString::Memcpy(DAT_14675abc8,L"<img src=\"%s\"></>",0x24);
  atexit((_func_5014 *)&LAB_143ec21f0);
  return;
}



// FUNCTION 1403e6a60 FUN_1403e6a60 body=92 status=ok
// SIG undefined FUN_1403e6a60(void)

void FUN_1403e6a60(void)

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
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_1459ca120;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxFocusableWidgetInfo",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403e6ac0 FUN_1403e6ac0 body=92 status=ok
// SIG undefined FUN_1403e6ac0(void)

void FUN_1403e6ac0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x518;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1459c8a48;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxInputToGlyphMapItem",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403e6b20 `dynamic_initializer_for_'ScriptStruct_HighMoon_StaticRegisterNativesFHMPlayerSave'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_HighMoon_StaticRegisterNativesFHMPlayerSave''(void)

void _dynamic_initializer_for__ScriptStruct_HighMoon_StaticRegisterNativesFHMPlayerSave__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x508;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1459c8930;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxInputToGlyphSpecialActionItem",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403e6b80 FUN_1403e6b80 body=92 status=ok
// SIG undefined FUN_1403e6b80(void)

void FUN_1403e6b80(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x34;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_1459c8c10;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxUIScroller",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403e6dd0 FUN_1403e6dd0 body=66 status=ok
// SIG undefined FUN_1403e6dd0(void)

void FUN_1403e6dd0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGbxActionToTextType",1);
  UObjectCompiledInDeferEnum(EEnemyType_StaticEnum,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e6e20 FUN_1403e6e20 body=66 status=ok
// SIG undefined FUN_1403e6e20(void)

void FUN_1403e6e20(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGbxInputGlyphType",1);
  UObjectCompiledInDeferEnum(EEnemyType_StaticEnum,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e6e70 FUN_1403e6e70 body=66 status=ok
// SIG undefined FUN_1403e6e70(void)

void FUN_1403e6e70(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGbxSpinnerWidgetGoToMethod",1);
  UObjectCompiledInDeferEnum(EEnemyType_StaticEnum,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e6ec0 FUN_1403e6ec0 body=66 status=ok
// SIG undefined FUN_1403e6ec0(void)

void FUN_1403e6ec0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EHoldToPressGlyphType",1);
  UObjectCompiledInDeferEnum(EEnemyType_StaticEnum,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e6f10 FUN_1403e6f10 body=66 status=ok
// SIG undefined FUN_1403e6f10(void)

void FUN_1403e6f10(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxFocusableWidgetInfo",1);
  UObjectCompiledInDeferStruct(FUN_142f386c0,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e6f60 FUN_1403e6f60 body=66 status=ok
// SIG undefined FUN_1403e6f60(void)

void FUN_1403e6f60(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxInputToGlyphMapItem",1);
  UObjectCompiledInDeferStruct(FUN_142f38720,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e6fb0 FUN_1403e6fb0 body=66 status=ok
// SIG undefined FUN_1403e6fb0(void)

void FUN_1403e6fb0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxInputToGlyphSpecialActionItem",1);
  UObjectCompiledInDeferStruct(FHMPlayerSave::StaticStruct,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e7000 FUN_1403e7000 body=66 status=ok
// SIG undefined FUN_1403e7000(void)

void FUN_1403e7000(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxUIScroller",1);
  UObjectCompiledInDeferStruct(FHMTargetSelectionInfo::StaticStruct,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e7050 FUN_1403e7050 body=58 status=ok
// SIG undefined FUN_1403e7050(void)

void FUN_1403e7050(void)

{
  UObjectCompiledInDefer(FUN_142f38840,FUN_142f35fa0,L"UGbxInputToGlyphMap",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e7090 FUN_1403e7090 body=58 status=ok
// SIG undefined FUN_1403e7090(void)

void FUN_1403e7090(void)

{
  UObjectCompiledInDefer
            (FUN_142f38870,FUN_142f36050,L"UGbxPlatformToGlyphMap",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e70d0 FUN_1403e70d0 body=58 status=ok
// SIG undefined FUN_1403e70d0(void)

void FUN_1403e70d0(void)

{
  UObjectCompiledInDefer
            (FUN_142f35260,USlateBlueprintLibrary::GetPrivateStaticClass,L"UGbxUILocalization",
             L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e7110 FUN_1403e7110 body=58 status=ok
// SIG undefined FUN_1403e7110(void)

void FUN_1403e7110(void)

{
  UObjectCompiledInDefer
            (FUN_142f356e0,ULanguageItemCUnitWidget::GetPrivateStaticClass,L"UGbxUISpinnerWidget",
             L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e7150 FUN_1403e7150 body=58 status=ok
// SIG undefined FUN_1403e7150(void)

void FUN_1403e7150(void)

{
  UObjectCompiledInDefer
            (FUN_142f35a20,UGPasswordResetPage::GetPrivateStaticClass,L"UGbxUmgMenu",
             L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e7190 FUN_1403e7190 body=58 status=ok
// SIG undefined FUN_1403e7190(void)

void FUN_1403e7190(void)

{
  UObjectCompiledInDefer
            (FUN_142f388a0,thunk_FUN_142f38260,L"UGbxUmgMenuData",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e71d0 FUN_1403e71d0 body=58 status=ok
// SIG undefined FUN_1403e71d0(void)

void FUN_1403e71d0(void)

{
  UObjectCompiledInDefer(FUN_142f35710,&LAB_141301c80,L"UGbxUserWidget",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e7210 FUN_1403e7210 body=58 status=ok
// SIG undefined FUN_1403e7210(void)

void FUN_1403e7210(void)

{
  UObjectCompiledInDefer(FUN_142f35830,FUN_142f35780,L"UGbxWidgetComponent",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e7250 FUN_1403e7250 body=58 status=ok
// SIG undefined FUN_1403e7250(void)

void FUN_1403e7250(void)

{
  UObjectCompiledInDefer
            (FUN_142f388d0,FUN_142f35520,L"UGbxWidgetFocusManager",L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e7ae0 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14675d760,0);
  FGenericPlatformString::Memcpy(DAT_14675d760,L"<img src=\"%s\"></>",0x24);
  atexit((_func_5014 *)&LAB_143ec2210);
  return;
}



// FUNCTION 1403e7c20 FUN_1403e7c20 body=92 status=ok
// SIG undefined FUN_1403e7c20(void)

void FUN_1403e7c20(void)

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
    *puVar1 = &PTR_FUN_1459cb978;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"DamageAnimationPairing",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403e7e40 FUN_1403e7e40 body=66 status=ok
// SIG undefined FUN_1403e7e40(void)

void FUN_1403e7e40(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"DamageAnimationPairing",1);
  UObjectCompiledInDeferStruct(FUN_142f3b2a0,L"/Script/GbxUI",*puVar1,0,0);
  return;
}



// FUNCTION 1403e7e90 FUN_1403e7e90 body=58 status=ok
// SIG undefined FUN_1403e7e90(void)

void FUN_1403e7e90(void)

{
  UObjectCompiledInDefer
            (FUN_142f3ae30,UUGStartScreenUW::GetPrivateStaticClass,L"UGbxWorldSpaceProxyWidget",
             L"/Script/GbxUI",0,0,0);
  return;
}



// FUNCTION 1403e7ed0 FUN_1403e7ed0 body=58 status=ok
// SIG undefined FUN_1403e7ed0(void)

void FUN_1403e7ed0(void)

{
  UObjectCompiledInDefer(FUN_142f3af50,FUN_142f3aea0,L"UInWorldDamageNumber",L"/Script/GbxUI",0,0,0)
  ;
  return;
}



// FUNCTION 1403e83b0 FUN_1403e83b0 body=256 status=ok
// SIG undefined FUN_1403e83b0(void)

void FUN_1403e83b0(void)

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
    plVar1[1] = (longlong)&DAT_146b41cd1;
    plVar1[2] = (longlong)FUN_14067ad20;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"GbxTravelStation",1);
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



// FUNCTION 1403e8850 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14675dd90,0);
  FGenericPlatformString::Memcpy(DAT_14675dd90,L"<img src=\"%s\"></>",0x24);
  atexit((_func_5014 *)&LAB_143ec2230);
  return;
}



// FUNCTION 1403e8ba0 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14675dd80,0);
  FGenericPlatformString::Memcpy(DAT_14675dd80,&DAT_1459cbb88,8);
  atexit((_func_5014 *)&LAB_143ec22e0);
  return;
}



// FUNCTION 1403e96a0 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14675e4d0,0);
  FGenericPlatformString::Memcpy(DAT_14675e4d0,L"<img src=\"%s\"></>",0x24);
  atexit((_func_5014 *)&LAB_143ec2300);
  return;
}



// FUNCTION 1403e97e0 FUN_1403e97e0 body=92 status=ok
// SIG undefined FUN_1403e97e0(void)

void FUN_1403e97e0(void)

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
    *puVar1 = &PTR_FUN_144ba64f8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ActiveFastTravelData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}


