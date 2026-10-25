// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14078d5d0 FUN_14078d5d0 body=191 status=ok
// SIG undefined FUN_14078d5d0(void)

void FUN_14078d5d0(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  uVar1 = FUN_14071b810(local_res18,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14078d690 FUN_14078d690 body=191 status=ok
// SIG undefined FUN_14078d690(void)

void FUN_14078d690(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  uVar1 = FUN_14071b830(local_res18,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14078d750 FUN_14078d750 body=127 status=ok
// SIG undefined FUN_14078d750(void)

void FUN_14078d750(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_14071c810(local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14078d7d0 FUN_14078d7d0 body=283 status=ok
// SIG undefined FUN_14078d7d0(void)

void FUN_14078d7d0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  int local_res10 [2];
  undefined8 local_res20;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_18 = 0xffffffff;
  local_28 = 0;
  uStack_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_res10[0] = 0;
  puVar1 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
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
  FUN_1406f7f50(local_res20,puVar1,local_res10[0] != 0);
  return;
}



// FUNCTION 14078d8f0 FUN_14078d8f0 body=53 status=ok
// SIG undefined FUN_14078d8f0(void)

void FUN_14078d8f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_1440a4c90;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14078d940 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x238;
    *puVar1 = &PTR_FUN_1440a4da8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14078d990 FUN_14078d990 body=162 status=ok
// SIG undefined FUN_14078d990(void)

longlong FUN_14078d990(void)

{
  if (DAT_14685a058 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_GroupLocation",&DAT_14685a058,FUN_140447710,0x198,
                  0x10000000,0,L"Engine",&LAB_14078f2a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_14685a058;
}



// FUNCTION 14078da40 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGEditableText::GetPrivateStaticClass(void)

{
  if (DAT_146859f88 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_EnvQuery",&DAT_146859f88,
                  StaticRegisterNativesUGEditableText,0x4c0,0x10000000,0,L"Engine",&LAB_14078f180,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_146859f88;
}



// FUNCTION 14078daf0 FUN_14078daf0 body=53 status=ok
// SIG undefined FUN_14078daf0(void)

void FUN_14078daf0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x98;
    *puVar1 = &PTR_FUN_1440a4ec0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14078db30 FUN_14078db30 body=162 status=ok
// SIG undefined FUN_14078db30(void)

longlong FUN_14078db30(void)

{
  if (DAT_146859ee0 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_Condition",&DAT_146859ee0,FUN_140791190,0x348,
                  0x10000000,0,L"Engine",FUN_14078f0e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_146859ee0;
}



// FUNCTION 14078dbf0 FUN_14078dbf0 body=162 status=ok
// SIG undefined FUN_14078dbf0(void)

longlong FUN_14078dbf0(void)

{
  if (DAT_146859e18 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_AIGroupCondition",&DAT_146859e18,FUN_140447710,0x350,
                  0x10000000,0,L"Engine",FUN_14078ef80,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_14078db30,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_146859e18;
}



// FUNCTION 14078dca0 FUN_14078dca0 body=162 status=ok
// SIG undefined FUN_14078dca0(void)

longlong FUN_14078dca0(void)

{
  if (DAT_14685a080 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_IntCompare",&DAT_14685a080,FUN_140447710,0x1a0,
                  0x10000000,0,L"Engine",FUN_14078f2b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_14685a080;
}



// FUNCTION 14078dd50 FUN_14078dd50 body=47 status=ok
// SIG undefined FUN_14078dd50(void)

longlong FUN_14078dd50(void)

{
  if (DAT_146859ed8 == 0) {
    FUN_141786440(&DAT_146859ed8,&PTR_FUN_1440a09a0);
  }
  return DAT_146859ed8;
}



// FUNCTION 14078dd80 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ALevelScriptActor::GetPrivateStaticClass(void)

{
  if (DAT_14685a038 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_GbxAction",&DAT_14685a038,FUN_140447710,0x338,
                  0x10000000,0,L"Engine",FUN_14078f240,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_14685a038;
}



// FUNCTION 14078de30 FUN_14078de30 body=53 status=ok
// SIG undefined FUN_14078de30(void)

void FUN_14078de30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &PTR_FUN_1440a3390;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 14078de70 FUN_14078de70 body=53 status=ok
// SIG undefined FUN_14078de70(void)

void FUN_14078de70(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa0;
    *puVar1 = &PTR_FUN_1440a53f0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14078dec0 FUN_14078dec0 body=162 status=ok
// SIG undefined FUN_14078dec0(void)

longlong FUN_14078dec0(void)

{
  if (DAT_146859e28 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_AvoidWhileIdle",&DAT_146859e28,FUN_140447710,0x108,
                  0x10000000,0,L"Engine",&LAB_14078eff0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_146859e28;
}



// FUNCTION 14078df90 FUN_14078df90 body=162 status=ok
// SIG undefined FUN_14078df90(void)

longlong FUN_14078df90(void)

{
  if (DAT_14685a0c8 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_IsInRange",&DAT_14685a0c8,FUN_140447710,0x348,
                  0x10000000,0,L"Engine",FUN_14078f330,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_14685a0c8;
}



// FUNCTION 14078e040 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong USpacer::GetPrivateStaticClass(void)

{
  if (DAT_146859e50 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_BlackboardKey",&DAT_146859e50,
                  StaticRegisterNativesUSpacer,0x118,0x10000000,0,L"Engine",FUN_14078f000,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_146859e50;
}



// FUNCTION 14078e0f0 FUN_14078e0f0 body=53 status=ok
// SIG undefined FUN_14078e0f0(void)

void FUN_14078e0f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x248;
    *puVar1 = &PTR_FUN_1440a5900;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14078e130 FUN_14078e130 body=47 status=ok
// SIG undefined FUN_14078e130(void)

longlong FUN_14078e130(void)

{
  if (DAT_146859e48 == 0) {
    FUN_141786440(&DAT_146859e48,&PTR_GetPrivateStaticClass_1440a0080);
  }
  return DAT_146859e48;
}



// FUNCTION 14078e160 FUN_14078e160 body=47 status=ok
// SIG undefined FUN_14078e160(void)

longlong FUN_14078e160(void)

{
  if (DAT_146859e40 == 0) {
    FUN_141786a30(&DAT_146859e40,&PTR_FUN_146236820);
  }
  return DAT_146859e40;
}



// FUNCTION 14078e190 FUN_14078e190 body=53 status=ok
// SIG undefined FUN_14078e190(void)

void FUN_14078e190(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_1440a3860;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14078e1d0 FUN_14078e1d0 body=53 status=ok
// SIG undefined FUN_14078e1d0(void)

void FUN_14078e1d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1a0;
    *puVar1 = &PTR_FUN_1440a5a18;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14078e210 FUN_14078e210 body=53 status=ok
// SIG undefined FUN_14078e210(void)

void FUN_14078e210(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x88;
    *puVar1 = &PTR_FUN_1440a5b30;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14078e270 FUN_14078e270 body=162 status=ok
// SIG undefined FUN_14078e270(void)

longlong FUN_14078e270(void)

{
  if (DAT_146859ea8 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_ClaimSmartObject",&DAT_146859ea8,FUN_140447710,0x5d8,
                  0x10000000,0,L"Engine",&LAB_14078f0d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_146859ea8;
}



// FUNCTION 14078e320 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FHyperlinkStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x478;
    *puVar1 = &PTR_FUN_1440a3e90;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14078e370 FUN_14078e370 body=47 status=ok
// SIG undefined FUN_14078e370(void)

longlong FUN_14078e370(void)

{
  if (DAT_146859ed0 == 0) {
    FUN_141786a30(&DAT_146859ed0,&PTR_FUN_1462375a0);
  }
  return DAT_146859ed0;
}



// FUNCTION 14078e3a0 FUN_14078e3a0 body=53 status=ok
// SIG undefined FUN_14078e3a0(void)

void FUN_14078e3a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x248;
    *puVar1 = &PTR_FUN_1440a3fa8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14078e3e0 FUN_14078e3e0 body=53 status=ok
// SIG undefined FUN_14078e3e0(void)

void FUN_14078e3e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x90;
    *puVar1 = &PTR_FUN_1440a40c0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14078e430 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong USpacer::GetPrivateStaticClass(void)

{
  if (DAT_146859e70 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_Charge",&DAT_146859e70,FUN_140447710,0x118,0x10000000,
                  0,L"Engine",FUN_14078f060,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_146859e70;
}



// FUNCTION 14078e4e0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGCombatTextWidget::GetPrivateStaticClass(void)

{
  if (DAT_146859f00 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_Cooldown",&DAT_146859f00,FUN_140447710,800,0x10000000,
                  0,L"Engine",&LAB_14078f140,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_146859f00;
}



// FUNCTION 14078e590 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FEditableTextStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x220;
    *puVar1 = &PTR_FUN_1440a41e8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14078e5e0 FUN_14078e5e0 body=53 status=ok
// SIG undefined FUN_14078e5e0(void)

void FUN_14078e5e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_1440a3d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14078e620 FUN_14078e620 body=162 status=ok
// SIG undefined FUN_14078e620(void)

longlong FUN_14078e620(void)

{
  if (DAT_146859f20 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_Crouch",&DAT_146859f20,FUN_140447710,0x208,0x10000000,
                  0,L"Engine",&LAB_14078f150,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_146859f20;
}



// FUNCTION 14078e6e0 FUN_14078e6e0 body=53 status=ok
// SIG undefined FUN_14078e6e0(void)

void FUN_14078e6e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x108;
    *puVar1 = &PTR_FUN_1440a4300;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14078e730 FUN_14078e730 body=162 status=ok
// SIG undefined FUN_14078e730(void)

longlong FUN_14078e730(void)

{
  if (DAT_146859f30 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_DisableAvoidance",&DAT_146859f30,FUN_140447710,0x100,
                  0x10000000,0,L"Engine",&LAB_14078f160,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_146859f30;
}



// FUNCTION 14078e7e0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UBorder::GetPrivateStaticClass(void)

{
  if (DAT_146859e88 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_Circle",&DAT_146859e88,FUN_140447710,0x270,0x10000000,
                  0,L"Engine",&LAB_14078f0c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UUserWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_146859e88;
}



// FUNCTION 14078e890 FUN_14078e890 body=162 status=ok
// SIG undefined FUN_14078e890(void)

longlong FUN_14078e890(void)

{
  if (DAT_146859f98 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_FaceNearbyCover",&DAT_146859f98,FUN_140447710,0x110,
                  0x10000000,0,L"Engine",FUN_14078f190,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_146859f98;
}



// FUNCTION 14078e970 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ALevelScriptActor::GetPrivateStaticClass(void)

{
  if (DAT_146859fa8 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_FallToGround",&DAT_146859fa8,FUN_140447710,0x338,
                  0x10000000,0,L"Engine",&LAB_14078f1f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_146859fa8;
}



// FUNCTION 14078ea20 FUN_14078ea20 body=162 status=ok
// SIG undefined FUN_14078ea20(void)

longlong FUN_14078ea20(void)

{
  if (DAT_146859f50 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_DropshipSpawn",&DAT_146859f50,FUN_140447710,0x260,
                  0x10000000,0,L"Engine",&LAB_14078f170,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UCurveLinearColor::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_146859f50;
}



// FUNCTION 14078ead0 FUN_14078ead0 body=47 status=ok
// SIG undefined FUN_14078ead0(void)

longlong FUN_14078ead0(void)

{
  if (DAT_14685a030 == 0) {
    FUN_141786440(&DAT_14685a030,&PTR_GetPrivateStaticClass_14409e9e0);
  }
  return DAT_14685a030;
}



// FUNCTION 14078eb10 FUN_14078eb10 body=162 status=ok
// SIG undefined FUN_14078eb10(void)

longlong FUN_14078eb10(void)

{
  if (DAT_146859fc8 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_FindClosestPlayer",&DAT_146859fc8,FUN_140447710,0x120,
                  0x10000000,0,L"Engine",&LAB_14078f200,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_146859fc8;
}



// FUNCTION 14078ebc0 FUN_14078ebc0 body=53 status=ok
// SIG undefined FUN_14078ebc0(void)

void FUN_14078ebc0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_1440a4418;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14078ec00 FUN_14078ec00 body=53 status=ok
// SIG undefined FUN_14078ec00(void)

void FUN_14078ec00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_1440a4a60;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14078ec50 FUN_14078ec50 body=47 status=ok
// SIG undefined FUN_14078ec50(void)

longlong FUN_14078ec50(void)

{
  if (DAT_146859f80 == 0) {
    FUN_141786440(&DAT_146859f80,&PTR_GetPrivateStaticClass_1440a2260);
  }
  return DAT_146859f80;
}



// FUNCTION 14078ec80 FUN_14078ec80 body=47 status=ok
// SIG undefined FUN_14078ec80(void)

longlong FUN_14078ec80(void)

{
  if (DAT_146859f78 == 0) {
    FUN_141786a30(&DAT_146859f78,&PTR_FUN_146238330);
  }
  return DAT_146859f78;
}



// FUNCTION 14078ecc0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ALoreItem::GetPrivateStaticClass(void)

{
  if (DAT_146859fd8 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_FindCover",&DAT_146859fd8,FUN_140447710,0x4c8,
                  0x10000000,0,L"Engine",&LAB_14078f210,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UGEditableText::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_146859fd8;
}



// FUNCTION 14078ed70 FUN_14078ed70 body=53 status=ok
// SIG undefined FUN_14078ed70(void)

void FUN_14078ed70(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x3a0;
    *puVar1 = &PTR_FUN_1440a4580;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14078edc0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UCurveLinearColor::GetPrivateStaticClass(void)

{
  if (DAT_146859ff8 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_FlyToNavMesh",&DAT_146859ff8,FUN_140447710,0x250,
                  0x10000000,0,L"Engine",&LAB_14078f220,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UUserWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_146859ff8;
}



// FUNCTION 14078ee80 FUN_14078ee80 body=53 status=ok
// SIG undefined FUN_14078ee80(void)

void FUN_14078ee80(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_1440a4b78;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 14078eed0 FUN_14078eed0 body=162 status=ok
// SIG undefined FUN_14078eed0(void)

longlong FUN_14078eed0(void)

{
  if (DAT_14685a018 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_FollowUpdate",&DAT_14685a018,FUN_140447710,0x2a8,
                  0x10000000,0,L"Engine",&LAB_14078f230,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_14685a018;
}



// FUNCTION 14078ef80 FUN_14078ef80 body=110 status=ok
// SIG undefined FUN_14078ef80(void)

void FUN_14078ef80(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1406d50d0(puVar1);
    *(undefined2 *)(puVar1 + 0x1f) = 0x101;
    *(undefined2 *)((longlong)puVar1 + 0xfb) = 0x101;
    *puVar1 = &PTR_FUN_1440a2be0;
    puVar1[5] = &PTR_LAB_1440a2f80;
    FUN_1406d4a50(puVar1 + 0x20);
    *puVar1 = &PTR_FUN_1440a2f98;
    puVar1[5] = &PTR_LAB_1440a3338;
    *(undefined4 *)(puVar1 + 0x69) = 1;
  }
  return;
}



// FUNCTION 14078f000 FUN_14078f000 body=84 status=ok
// SIG undefined FUN_14078f000(void)

void FUN_14078f000(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1406d50d0(puVar1);
    *(undefined2 *)(puVar1 + 0x1f) = 0x101;
    *(undefined2 *)((longlong)puVar1 + 0xfb) = 0x101;
    *puVar1 = &PTR__scalar_deleting_destructor__1440a34a8;
    puVar1[5] = &PTR_LAB_1440a3848;
    FUN_1406d49f0(puVar1 + 0x20);
    return;
  }
  return;
}



// FUNCTION 14078f060 FUN_14078f060 body=84 status=ok
// SIG undefined FUN_14078f060(void)

void FUN_14078f060(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1406d50d0(puVar1);
    *(undefined2 *)(puVar1 + 0x1f) = 0x101;
    *(undefined2 *)((longlong)puVar1 + 0xfb) = 0x101;
    *puVar1 = &PTR__scalar_deleting_destructor__1440a3988;
    puVar1[5] = &PTR_LAB_1440a3848;
    FUN_1406d4a10(puVar1 + 0x20);
    return;
  }
  return;
}



// FUNCTION 14078f0e0 FUN_14078f0e0 body=84 status=ok
// SIG undefined FUN_14078f0e0(void)

void FUN_14078f0e0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1406d50d0(puVar1);
    *(undefined2 *)(puVar1 + 0x1f) = 0x101;
    *(undefined2 *)((longlong)puVar1 + 0xfb) = 0x101;
    *puVar1 = &PTR_FUN_1440a2be0;
    puVar1[5] = &PTR_LAB_1440a2f80;
    FUN_1406d4a50(puVar1 + 0x20);
    return;
  }
  return;
}



// FUNCTION 14078f190 FUN_14078f190 body=85 status=ok
// SIG undefined FUN_14078f190(void)

void FUN_14078f190(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1406d50d0(puVar1);
    *(undefined2 *)(puVar1 + 0x1f) = 0x101;
    *(undefined2 *)((longlong)puVar1 + 0xfb) = 0x101;
    *puVar1 = &PTR_FUN_1440a46a8;
    puVar1[5] = &PTR_LAB_1440a4a48;
    puVar1[0x20] = 0;
    *(undefined2 *)(puVar1 + 0x21) = 0xff00;
  }
  return;
}



// FUNCTION 14078f240 FUN_14078f240 body=84 status=ok
// SIG undefined FUN_14078f240(void)

void FUN_14078f240(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1406d50d0(puVar1);
    *(undefined2 *)(puVar1 + 0x1f) = 0x101;
    *(undefined2 *)((longlong)puVar1 + 0xfb) = 0x101;
    *puVar1 = &PTR__scalar_deleting_destructor__144063b08;
    puVar1[5] = &PTR_LAB_144063eb0;
    FUN_1406fe690(puVar1 + 0x20);
    return;
  }
  return;
}



// FUNCTION 14078f2b0 FUN_14078f2b0 body=114 status=ok
// SIG undefined FUN_14078f2b0(void)

void FUN_14078f2b0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1406d50d0(puVar1);
    *(undefined2 *)(puVar1 + 0x1f) = 0x101;
    *(undefined2 *)((longlong)puVar1 + 0xfb) = 0x101;
    *puVar1 = &PTR__scalar_deleting_destructor__1440a4fd8;
    puVar1[5] = &PTR_LAB_1440a5378;
    puVar1[0x20] = 0;
    *(undefined2 *)(puVar1 + 0x21) = 0xff00;
    *(undefined2 *)(puVar1 + 0x22) = 0;
    FUN_142de2c00(puVar1 + 0x23,0,2);
    return;
  }
  return;
}



// FUNCTION 14078f330 FUN_14078f330 body=84 status=ok
// SIG undefined FUN_14078f330(void)

void FUN_14078f330(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1406d50d0(puVar1);
    *(undefined2 *)(puVar1 + 0x1f) = 0x101;
    *(undefined2 *)((longlong)puVar1 + 0xfb) = 0x101;
    *puVar1 = &PTR_FUN_1440a5508;
    puVar1[5] = &PTR_LAB_1440a2f80;
    FUN_1406fe780(puVar1 + 0x20);
    return;
  }
  return;
}



// FUNCTION 14078f390 FUN_14078f390 body=638 status=ok
// SIG undefined FUN_14078f390(void)

undefined1 * FUN_14078f390(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  param_1[0x80] = param_2[0x80];
  param_1[0x88] = param_2[0x88];
  param_1[0x89] = param_2[0x89];
  param_1[0x8a] = param_2[0x8a];
  param_1[0x8b] = param_2[0x8b];
  *(undefined8 *)(param_1 + 0x8c) = *(undefined8 *)(param_2 + 0x8c);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  uVar1 = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb0) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xc0) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xd0) = uVar1;
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  uVar1 = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xe8) = uVar1;
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
  *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_2 + 0xfc);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  param_1[0x108] = param_2[0x108];
  param_1[0x110] = param_2[0x110];
  param_1[0x111] = param_2[0x111];
  param_1[0x112] = param_2[0x112];
  param_1[0x113] = param_2[0x113];
  *(undefined8 *)(param_1 + 0x114) = *(undefined8 *)(param_2 + 0x114);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0x128);
  uVar1 = *(undefined8 *)(param_2 + 0x138);
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
  *(undefined8 *)(param_1 + 0x138) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x148);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  *(undefined8 *)(param_1 + 0x148) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x158);
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x150);
  *(undefined8 *)(param_1 + 0x158) = uVar1;
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_2 + 0x160);
  uVar1 = *(undefined8 *)(param_2 + 0x170);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  *(undefined8 *)(param_1 + 0x170) = uVar1;
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_2 + 0x178);
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 0x180);
  *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_2 + 0x184);
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_2 + 0x188);
  param_1[400] = param_2[400];
  param_1[0x198] = param_2[0x198];
  param_1[0x199] = param_2[0x199];
  param_1[0x19a] = param_2[0x19a];
  return param_1;
}



// FUNCTION 14078f610 FUN_14078f610 body=938 status=ok
// SIG undefined FUN_14078f610(void)

undefined1 * FUN_14078f610(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  param_1[0x88] = param_2[0x88];
  param_1[0x90] = param_2[0x90];
  param_1[0x91] = param_2[0x91];
  param_1[0x92] = param_2[0x92];
  param_1[0x93] = param_2[0x93];
  *(undefined8 *)(param_1 + 0x94) = *(undefined8 *)(param_2 + 0x94);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  uVar1 = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 200) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 0xd8) = uVar1;
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  uVar1 = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0xf0) = uVar1;
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_2 + 0x104);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  param_1[0x118] = param_2[0x118];
  param_1[0x120] = param_2[0x120];
  param_1[0x121] = param_2[0x121];
  param_1[0x122] = param_2[0x122];
  param_1[0x123] = param_2[0x123];
  *(undefined8 *)(param_1 + 0x124) = *(undefined8 *)(param_2 + 0x124);
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_2 + 0x138);
  uVar1 = *(undefined8 *)(param_2 + 0x148);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  *(undefined8 *)(param_1 + 0x148) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x158);
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x150);
  *(undefined8 *)(param_1 + 0x158) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x168);
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_2 + 0x160);
  *(undefined8 *)(param_1 + 0x168) = uVar1;
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_2 + 0x170);
  uVar1 = *(undefined8 *)(param_2 + 0x180);
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_2 + 0x178);
  *(undefined8 *)(param_1 + 0x180) = uVar1;
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_2 + 0x188);
  *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_2 + 400);
  *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_2 + 0x194);
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_2 + 0x198);
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_2 + 0x1a0);
  param_1[0x1a8] = param_2[0x1a8];
  param_1[0x1b0] = param_2[0x1b0];
  param_1[0x1b1] = param_2[0x1b1];
  param_1[0x1b2] = param_2[0x1b2];
  param_1[0x1b3] = param_2[0x1b3];
  *(undefined8 *)(param_1 + 0x1b4) = *(undefined8 *)(param_2 + 0x1b4);
  *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_2 + 0x1c0);
  *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_2 + 0x1c8);
  uVar1 = *(undefined8 *)(param_2 + 0x1d8);
  *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_2 + 0x1d0);
  *(undefined8 *)(param_1 + 0x1d8) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x1e8);
  *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(param_2 + 0x1e0);
  *(undefined8 *)(param_1 + 0x1e8) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x1f8);
  *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_2 + 0x1f0);
  *(undefined8 *)(param_1 + 0x1f8) = uVar1;
  *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(param_2 + 0x200);
  uVar1 = *(undefined8 *)(param_2 + 0x210);
  *(undefined8 *)(param_1 + 0x208) = *(undefined8 *)(param_2 + 0x208);
  *(undefined8 *)(param_1 + 0x210) = uVar1;
  *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_2 + 0x218);
  *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(param_2 + 0x220);
  *(undefined4 *)(param_1 + 0x224) = *(undefined4 *)(param_2 + 0x224);
  *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_2 + 0x228);
  *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(param_2 + 0x230);
  param_1[0x238] = param_2[0x238];
  param_1[0x240] = param_2[0x240];
  param_1[0x241] = param_2[0x241];
  param_1[0x242] = param_2[0x242];
  param_1[0x243] = param_2[0x243];
  return param_1;
}



// FUNCTION 14078f9c0 FUN_14078f9c0 body=830 status=ok
// SIG undefined FUN_14078f9c0(void)

undefined1 * FUN_14078f9c0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  param_1[0x80] = param_2[0x80];
  param_1[0x88] = param_2[0x88];
  param_1[0x89] = param_2[0x89];
  param_1[0x8a] = param_2[0x8a];
  param_1[0x8b] = param_2[0x8b];
  *(undefined8 *)(param_1 + 0x8c) = *(undefined8 *)(param_2 + 0x8c);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  uVar1 = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb0) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xc0) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xd0) = uVar1;
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  uVar1 = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xe8) = uVar1;
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
  *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_2 + 0xfc);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  param_1[0x108] = param_2[0x108];
  param_1[0x110] = param_2[0x110];
  param_1[0x111] = param_2[0x111];
  param_1[0x112] = param_2[0x112];
  param_1[0x113] = param_2[0x113];
  *(undefined8 *)(param_1 + 0x114) = *(undefined8 *)(param_2 + 0x114);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0x128);
  uVar1 = *(undefined8 *)(param_2 + 0x138);
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
  *(undefined8 *)(param_1 + 0x138) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x148);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  *(undefined8 *)(param_1 + 0x148) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x158);
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x150);
  *(undefined8 *)(param_1 + 0x158) = uVar1;
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_2 + 0x160);
  uVar1 = *(undefined8 *)(param_2 + 0x170);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  *(undefined8 *)(param_1 + 0x170) = uVar1;
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_2 + 0x178);
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 0x180);
  *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_2 + 0x184);
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_2 + 0x188);
  param_1[400] = param_2[400];
  param_1[0x198] = param_2[0x198];
  param_1[0x199] = param_2[0x199];
  param_1[0x19a] = param_2[0x19a];
  param_1[0x19b] = param_2[0x19b];
  *(undefined8 *)(param_1 + 0x19c) = *(undefined8 *)(param_2 + 0x19c);
  *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_2 + 0x1a8);
  *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_2 + 0x1b0);
  uVar1 = *(undefined8 *)(param_2 + 0x1c0);
  *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_2 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1c0) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x1d0);
  *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_2 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1d0) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x1e0);
  *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(param_2 + 0x1d8);
  *(undefined8 *)(param_1 + 0x1e0) = uVar1;
  *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(param_2 + 0x1e8);
  uVar1 = *(undefined8 *)(param_2 + 0x1f8);
  *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_2 + 0x1f0);
  *(undefined8 *)(param_1 + 0x1f8) = uVar1;
  *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(param_2 + 0x200);
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_2 + 0x208);
  *(undefined4 *)(param_1 + 0x20c) = *(undefined4 *)(param_2 + 0x20c);
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_2 + 0x210);
  param_1[0x218] = param_2[0x218];
  return param_1;
}



// FUNCTION 14078fd40 FUN_14078fd40 body=52 status=ok
// SIG undefined FUN_14078fd40(void)

undefined8 FUN_14078fd40(undefined8 param_1,ulonglong param_2)

{
  FUN_1406d8c70();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x350);
  }
  return param_1;
}



// FUNCTION 14078fd80 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FBuildTileConesCS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1406d8c70();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x118);
  }
  return param_1;
}



// FUNCTION 14078fdc0 FUN_14078fdc0 body=52 status=ok
// SIG undefined FUN_14078fdc0(void)

undefined8 FUN_14078fdc0(undefined8 param_1,ulonglong param_2)

{
  FUN_1406d8c70();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x348);
  }
  return param_1;
}



// FUNCTION 14078fe00 FUN_14078fe00 body=52 status=ok
// SIG undefined FUN_14078fe00(void)

undefined8 FUN_14078fe00(undefined8 param_1,ulonglong param_2)

{
  FUN_1406d8c70();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 14078fe40 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FComponentPropertyWriter::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1406d8c70();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1a0);
  }
  return param_1;
}



// FUNCTION 14078ff70 FUN_14078ff70 body=48 status=ok
// SIG undefined FUN_14078ff70(void)

void FUN_14078ff70(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0xa0);
  *(undefined1 *)((longlong)param_2 + 9) = 0xff;
  FUN_142de2c00((longlong)param_2 + 0x18,0,2);
  return;
}



// FUNCTION 140790030 FUN_140790030 body=222 status=ok
// SIG undefined FUN_140790030(void)

void FUN_140790030(longlong param_1,undefined4 *param_2)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    _guard_xfg_dispatch_icall_nop(param_2,0,0xf8);
    *param_2 = 0xffffffff;
    param_2[4] = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined2 *)(param_2 + 10) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined1 *)((longlong)param_2 + 0x42) = 1;
    param_2[0xd] = 0xff7fffff;
    FUN_14246da30(param_2 + 0x1f);
    FUN_14246da30(param_2 + 0x24);
    param_2[0x2a] = 0;
    param_2[0x29] = 0xffffffff;
    *(undefined8 *)(param_2 + 0x2c) = 0;
    *(undefined8 *)(param_2 + 0x2e) = 0;
    param_2[0x31] = 0;
    param_2[0x30] = 0xffffffff;
    param_2[0x33] = 0;
    param_2[0x32] = 0xffffffff;
    param_2[0x35] = 0;
    param_2[0x34] = 0xffffffff;
    param_2[0x37] = 0;
    param_2[0x36] = 0xffffffff;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x3a) = 0;
  }
  return;
}



// FUNCTION 140790110 FUN_140790110 body=110 status=ok
// SIG undefined FUN_140790110(void)

void FUN_140790110(longlong param_1,undefined4 *param_2)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    *param_2 = 0xffffffff;
    param_2[1] = 0;
    *(undefined8 *)(param_2 + 2) = 0;
    param_2[4] = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined2 *)(param_2 + 10) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined1 *)((longlong)param_2 + 0x42) = 1;
    param_2[0xd] = 0xff7fffff;
    param_2[0x13] = 0xffffffff;
    param_2[0x14] = 0;
    FWeakObjectPtr::operator=(&local_res8,0);
    param_2[0x13] = local_res8;
    param_2[0x14] = local_resc;
    *(undefined1 *)(param_2 + 0x12) = 0;
  }
  return;
}



// FUNCTION 140790180 Copy body=74 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FMaterialCachedParameters>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_14078f390(param_2 + param_3,param_3);
      param_3 = param_3 + 0x1a0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1407901d0 FUN_1407901d0 body=74 status=ok
// SIG undefined FUN_1407901d0(void)

undefined1 FUN_1407901d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_14078f610(param_2 + param_3,param_3);
      param_3 = param_3 + 0x248;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1407902f0 Copy body=74 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FAnimNode_LookAt>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_14078f9c0(param_2 + param_3,param_3);
      param_3 = param_3 + 0x220;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 140790530 FUN_140790530 body=426 status=ok
// SIG undefined FUN_140790530(void)

undefined8 FUN_140790530(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar6 = (undefined1 *)(param_2 + 0x311);
    do {
      FUN_1406da240(puVar6 + -0x311,puVar6 + param_3 + -0x311);
      puVar1 = (undefined4 *)(puVar6 + param_3 + -0x259);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *(undefined4 *)(puVar6 + -0x259) = *puVar1;
      *(undefined4 *)(puVar6 + -0x255) = uVar2;
      *(undefined4 *)(puVar6 + -0x251) = uVar3;
      *(undefined4 *)(puVar6 + -0x24d) = uVar4;
      puVar6[-0x249] = puVar6[param_3 + -0x249];
      puVar6[-0x248] = puVar6[param_3 + -0x248];
      puVar6[-0x247] = puVar6[param_3 + -0x247];
      FUN_1406da410(puVar6 + -0x241,puVar6 + param_3 + -0x241);
      puVar6[-9] = puVar6[param_3 + -9];
      puVar6[-8] = puVar6[param_3 + -8];
      puVar6[-1] = puVar6[param_3 + -1];
      *puVar6 = puVar6[param_3];
      puVar6[1] = puVar6[param_3 + 1];
      puVar6[2] = puVar6[param_3 + 2];
      *(undefined8 *)(puVar6 + 3) = *(undefined8 *)(puVar6 + param_3 + 3);
      *(undefined8 *)(puVar6 + 0xf) = *(undefined8 *)(puVar6 + param_3 + 0xf);
      *(undefined8 *)(puVar6 + 0x17) = *(undefined8 *)(puVar6 + param_3 + 0x17);
      uVar5 = *(undefined8 *)((longlong)(puVar6 + param_3 + 0x1f) + 8);
      *(undefined8 *)(puVar6 + 0x1f) = *(undefined8 *)(puVar6 + param_3 + 0x1f);
      *(undefined8 *)(puVar6 + 0x27) = uVar5;
      uVar5 = *(undefined8 *)((longlong)(puVar6 + param_3 + 0x2f) + 8);
      *(undefined8 *)(puVar6 + 0x2f) = *(undefined8 *)(puVar6 + param_3 + 0x2f);
      *(undefined8 *)(puVar6 + 0x37) = uVar5;
      uVar5 = *(undefined8 *)((longlong)(puVar6 + param_3 + 0x3f) + 8);
      *(undefined8 *)(puVar6 + 0x3f) = *(undefined8 *)(puVar6 + param_3 + 0x3f);
      *(undefined8 *)(puVar6 + 0x47) = uVar5;
      *(undefined8 *)(puVar6 + 0x4f) = *(undefined8 *)(puVar6 + param_3 + 0x4f);
      puVar1 = (undefined4 *)(puVar6 + param_3 + 0x57);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *(undefined4 *)(puVar6 + 0x57) = *puVar1;
      *(undefined4 *)(puVar6 + 0x5b) = uVar2;
      *(undefined4 *)(puVar6 + 0x5f) = uVar3;
      *(undefined4 *)(puVar6 + 99) = uVar4;
      *(undefined8 *)(puVar6 + 0x67) = *(undefined8 *)(puVar6 + param_3 + 0x67);
      *(undefined4 *)(puVar6 + 0x6f) = *(undefined4 *)(puVar6 + param_3 + 0x6f);
      *(undefined4 *)(puVar6 + 0x73) = *(undefined4 *)(puVar6 + param_3 + 0x73);
      *(undefined4 *)(puVar6 + 0x77) = *(undefined4 *)(puVar6 + param_3 + 0x77);
      puVar6[0x7f] = puVar6[param_3 + 0x7f];
      puVar6[0x80] = puVar6[param_3 + 0x80];
      puVar6[0x81] = puVar6[param_3 + 0x81];
      puVar6[0x82] = puVar6[param_3 + 0x82];
      *(undefined4 *)(puVar6 + 0x83) = *(undefined4 *)(puVar6 + param_3 + 0x83);
      puVar6[0x87] = puVar6[param_3 + 0x87];
      puVar6[0x88] = puVar6[param_3 + 0x88];
      puVar6 = puVar6 + 0x3a0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1407906e0 FUN_1407906e0 body=74 status=ok
// SIG undefined FUN_1407906e0(void)

undefined1 FUN_1407906e0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_1406d9360(param_2 + param_3,param_3);
      param_3 = param_3 + 0x238;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 140790970 FUN_140790970 body=279 status=ok
// SIG undefined FUN_140790970(void)

undefined8 FUN_140790970(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar6 = (undefined1 *)(param_2 + 0x19);
    do {
      uVar5 = *(undefined8 *)((longlong)(puVar6 + param_3 + -0x19) + 8);
      *(undefined8 *)(puVar6 + -0x19) = *(undefined8 *)(puVar6 + param_3 + -0x19);
      *(undefined8 *)(puVar6 + -0x11) = uVar5;
      puVar6[-9] = puVar6[param_3 + -9];
      puVar6[-1] = puVar6[param_3 + -1];
      *puVar6 = puVar6[param_3];
      puVar6[1] = puVar6[param_3 + 1];
      puVar6[2] = puVar6[param_3 + 2];
      *(undefined8 *)(puVar6 + 3) = *(undefined8 *)(puVar6 + param_3 + 3);
      *(undefined8 *)(puVar6 + 0xf) = *(undefined8 *)(puVar6 + param_3 + 0xf);
      *(undefined8 *)(puVar6 + 0x17) = *(undefined8 *)(puVar6 + param_3 + 0x17);
      uVar5 = *(undefined8 *)((longlong)(puVar6 + param_3 + 0x1f) + 8);
      *(undefined8 *)(puVar6 + 0x1f) = *(undefined8 *)(puVar6 + param_3 + 0x1f);
      *(undefined8 *)(puVar6 + 0x27) = uVar5;
      uVar5 = *(undefined8 *)((longlong)(puVar6 + param_3 + 0x2f) + 8);
      *(undefined8 *)(puVar6 + 0x2f) = *(undefined8 *)(puVar6 + param_3 + 0x2f);
      *(undefined8 *)(puVar6 + 0x37) = uVar5;
      uVar5 = *(undefined8 *)((longlong)(puVar6 + param_3 + 0x3f) + 8);
      *(undefined8 *)(puVar6 + 0x3f) = *(undefined8 *)(puVar6 + param_3 + 0x3f);
      *(undefined8 *)(puVar6 + 0x47) = uVar5;
      *(undefined8 *)(puVar6 + 0x4f) = *(undefined8 *)(puVar6 + param_3 + 0x4f);
      puVar1 = (undefined4 *)(puVar6 + param_3 + 0x57);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *(undefined4 *)(puVar6 + 0x57) = *puVar1;
      *(undefined4 *)(puVar6 + 0x5b) = uVar2;
      *(undefined4 *)(puVar6 + 0x5f) = uVar3;
      *(undefined4 *)(puVar6 + 99) = uVar4;
      *(undefined8 *)(puVar6 + 0x67) = *(undefined8 *)(puVar6 + param_3 + 0x67);
      *(undefined4 *)(puVar6 + 0x6f) = *(undefined4 *)(puVar6 + param_3 + 0x6f);
      *(undefined4 *)(puVar6 + 0x73) = *(undefined4 *)(puVar6 + param_3 + 0x73);
      *(undefined4 *)(puVar6 + 0x77) = *(undefined4 *)(puVar6 + param_3 + 0x77);
      puVar6[0x7f] = puVar6[param_3 + 0x7f];
      FUN_14078f390(puVar6 + 0x87,puVar6 + param_3 + 0x87);
      puVar6[0x227] = puVar6[param_3 + 0x227];
      puVar6 = puVar6 + 0x248;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 140790b60 FUN_140790b60 body=161 status=ok
// SIG undefined FUN_140790b60(void)

undefined8 FUN_140790b60(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar5 = (undefined1 *)(param_2 + 0x11);
    do {
      puVar1 = (undefined4 *)(puVar5 + param_3 + -0x11);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *(undefined4 *)(puVar5 + -0x11) = *puVar1;
      *(undefined4 *)(puVar5 + -0xd) = uVar2;
      *(undefined4 *)(puVar5 + -9) = uVar3;
      *(undefined4 *)(puVar5 + -5) = uVar4;
      puVar5[-1] = puVar5[param_3 + -1];
      *puVar5 = puVar5[param_3];
      puVar5[1] = puVar5[param_3 + 1];
      FUN_1406da240(puVar5 + 7,puVar5 + param_3 + 7);
      puVar5[0xbf] = puVar5[param_3 + 0xbf];
      FUN_1406d91a0(puVar5 + 199,puVar5 + param_3 + 199);
      puVar5 = puVar5 + 0x478;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 140790c20 FUN_140790c20 body=35 status=ok
// SIG undefined FUN_140790c20(void)

void FUN_140790c20(undefined8 param_1,longlong param_2)

{
  FUN_1406d8b70(param_2 + 0xd8);
  FUN_1406d8b70(param_2 + 0x18);
  return;
}



// FUNCTION 140790c50 FUN_140790c50 body=145 status=ok
// SIG undefined FUN_140790c50(void)

void FUN_140790c50(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    plVar3 = *(longlong **)(param_2 + 0xe8);
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
    plVar3 = *(longlong **)(param_2 + 0xb8);
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
    *(undefined1 *)(param_2 + 0x42) = 0;
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 8);
    return;
  }
  return;
}



// FUNCTION 140790cf0 FUN_140790cf0 body=55 status=ok
// SIG undefined FUN_140790cf0(void)

void FUN_140790cf0(void)

{
  undefined8 uVar1;
  
  if (DAT_146859c98 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146859c98 = GetStaticEnum(FUN_140791ca0,uVar1,L"EAIGroupConditionType");
  }
  return;
}



// FUNCTION 140790d30 FUN_140790d30 body=55 status=ok
// SIG undefined FUN_140790d30(void)

void FUN_140790d30(void)

{
  undefined8 uVar1;
  
  if (DAT_146859cb0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146859cb0 = GetStaticEnum(FUN_140791cd0,uVar1,L"ECircleDirection");
  }
  return;
}



// FUNCTION 140790d70 FUN_140790d70 body=55 status=ok
// SIG undefined FUN_140790d70(void)

void FUN_140790d70(void)

{
  undefined8 uVar1;
  
  if (DAT_146859ca0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146859ca0 = GetStaticEnum(FUN_140791d00,uVar1,L"ECompareMethod");
  }
  return;
}



// FUNCTION 140790db0 FUN_140790db0 body=55 status=ok
// SIG undefined FUN_140790db0(void)

void FUN_140790db0(void)

{
  undefined8 uVar1;
  
  if (DAT_146859cb8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146859cb8 = GetStaticEnum(FUN_140791d30,uVar1,L"EGbxQueryPreset");
  }
  return;
}



// FUNCTION 140790df0 FUN_140790df0 body=55 status=ok
// SIG undefined FUN_140790df0(void)

void FUN_140790df0(void)

{
  undefined8 uVar1;
  
  if (DAT_146859ca8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146859ca8 = GetStaticEnum(FUN_140791d60,uVar1,L"EIsInRangeAspectDistanceTest");
  }
  return;
}



// FUNCTION 140790e50 FUN_140790e50 body=6 status=ok
// SIG undefined FUN_140790e50(void)

undefined8 FUN_140790e50(void)

{
  return 0x5d86aed6;
}



// FUNCTION 140790e60 FUN_140790e60 body=6 status=ok
// SIG undefined FUN_140790e60(void)

undefined8 FUN_140790e60(void)

{
  return 0x7085920c;
}



// FUNCTION 140790e70 FUN_140790e70 body=6 status=ok
// SIG undefined FUN_140790e70(void)

undefined8 FUN_140790e70(void)

{
  return 0xe399f3c0;
}



// FUNCTION 140790e80 FUN_140790e80 body=6 status=ok
// SIG undefined FUN_140790e80(void)

undefined8 FUN_140790e80(void)

{
  return 0x382f2546;
}



// FUNCTION 140790e90 FUN_140790e90 body=6 status=ok
// SIG undefined FUN_140790e90(void)

undefined8 FUN_140790e90(void)

{
  return 0x305a2b8d;
}



// FUNCTION 140790ea0 FUN_140790ea0 body=6 status=ok
// SIG undefined FUN_140790ea0(void)

undefined8 FUN_140790ea0(void)

{
  return 0x14c26ea4;
}



// FUNCTION 140790eb0 FUN_140790eb0 body=6 status=ok
// SIG undefined FUN_140790eb0(void)

undefined8 FUN_140790eb0(void)

{
  return 0x865ed8f0;
}



// FUNCTION 140790ec0 FUN_140790ec0 body=6 status=ok
// SIG undefined FUN_140790ec0(void)

undefined8 FUN_140790ec0(void)

{
  return 0xb378a21f;
}



// FUNCTION 140790ed0 FUN_140790ed0 body=6 status=ok
// SIG undefined FUN_140790ed0(void)

undefined8 FUN_140790ed0(void)

{
  return 0x7070bf4b;
}



// FUNCTION 140790ee0 FUN_140790ee0 body=6 status=ok
// SIG undefined FUN_140790ee0(void)

undefined8 FUN_140790ee0(void)

{
  return 0x1cb4b778;
}



// FUNCTION 140790ef0 FUN_140790ef0 body=6 status=ok
// SIG undefined FUN_140790ef0(void)

undefined8 FUN_140790ef0(void)

{
  return 0xf360fd35;
}



// FUNCTION 140790f00 FUN_140790f00 body=6 status=ok
// SIG undefined FUN_140790f00(void)

undefined8 FUN_140790f00(void)

{
  return 0x4aa458ff;
}



// FUNCTION 140790f10 FUN_140790f10 body=6 status=ok
// SIG undefined FUN_140790f10(void)

undefined8 FUN_140790f10(void)

{
  return 0xfa65fe39;
}



// FUNCTION 140790f20 FUN_140790f20 body=6 status=ok
// SIG undefined FUN_140790f20(void)

undefined8 FUN_140790f20(void)

{
  return 0xc5dbd089;
}



// FUNCTION 140790f30 FUN_140790f30 body=6 status=ok
// SIG undefined FUN_140790f30(void)

undefined8 FUN_140790f30(void)

{
  return 0xd0980fd0;
}



// FUNCTION 140790f40 FUN_140790f40 body=6 status=ok
// SIG undefined FUN_140790f40(void)

undefined8 FUN_140790f40(void)

{
  return 0x75c34c30;
}



// FUNCTION 140790f50 FUN_140790f50 body=6 status=ok
// SIG undefined FUN_140790f50(void)

undefined8 FUN_140790f50(void)

{
  return 0xb594c0d5;
}



// FUNCTION 140790f60 FUN_140790f60 body=6 status=ok
// SIG undefined FUN_140790f60(void)

undefined8 FUN_140790f60(void)

{
  return 0xf9e8b870;
}



// FUNCTION 140790f70 FUN_140790f70 body=6 status=ok
// SIG undefined FUN_140790f70(void)

undefined8 FUN_140790f70(void)

{
  return 0x8799a646;
}



// FUNCTION 140791140 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UUserWidget::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 140791150 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UCurveLinearColor::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 140791160 StaticRegisterNativesUSpacer body=34 status=ok
// SIG undefined StaticRegisterNativesUSpacer(void)

void USpacer::StaticRegisterNativesUSpacer(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetSettingsDescription_1440a3978,1);
  return;
}



// FUNCTION 140791190 FUN_140791190 body=34 status=ok
// SIG undefined FUN_140791190(void)

void FUN_140791190(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14078db30();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetConditionDataDescription_1440a41d8,1);
  return;
}



// FUNCTION 1407911c0 StaticRegisterNativesUGEditableText body=34 status=ok
// SIG undefined StaticRegisterNativesUGEditableText(void)

void UGEditableText::StaticRegisterNativesUGEditableText(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetQuerySettingsDescription_1440a4698,1);
  return;
}



// FUNCTION 1407911f0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMaterialCachedParameters::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685a0a0 == 0) {
    uVar1 = FUN_140790e50();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a0a0 =
         GetStaticStruct(FUN_140791d90,uVar2,L"AIAspectIsInRangeAdvancedData",0x1a0,uVar1);
  }
  return;
}



// FUNCTION 140791250 FUN_140791250 body=82 status=ok
// SIG undefined FUN_140791250(void)

void FUN_140791250(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146859e00 == 0) {
    uVar1 = FUN_140790e60();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146859e00 =
         GetStaticStruct(FUN_140791dc0,uVar2,L"AIAspectSettings_AIGroupCondition",8,uVar1);
  }
  return;
}



// FUNCTION 1407912b0 FUN_1407912b0 body=82 status=ok
// SIG undefined FUN_1407912b0(void)

void FUN_1407912b0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146859e30 == 0) {
    uVar1 = FUN_140790e70();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146859e30 =
         GetStaticStruct(FUN_140791df0,uVar2,L"AIAspectSettings_BlackboardKey",0x18,uVar1);
  }
  return;
}



// FUNCTION 140791310 FUN_140791310 body=82 status=ok
// SIG undefined FUN_140791310(void)

void FUN_140791310(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146859e58 == 0) {
    uVar1 = FUN_140790e80();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146859e58 = GetStaticStruct(FUN_140791e20,uVar2,L"AIAspectSettings_Charge",0x18,uVar1);
  }
  return;
}



// FUNCTION 140791370 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FGameplayEffectExecutionScopedModifierInfo::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146859eb0 == 0) {
    uVar1 = FUN_140790ea0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146859eb0 = GetStaticStruct(FUN_140791e50,uVar2,L"AIAspectSettings_Condition",0x248,uVar1);
  }
  return;
}



// FUNCTION 1407913d0 FUN_1407913d0 body=82 status=ok
// SIG undefined FUN_1407913d0(void)

void FUN_1407913d0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146859ec0 == 0) {
    uVar1 = FUN_140790e90();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146859ec0 =
         GetStaticStruct(FUN_140791e80,uVar2,L"AIAspectSettings_ConditionData",0x90,uVar1);
  }
  return;
}



// FUNCTION 140791430 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAnimNode_LookAt::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146859ee8 == 0) {
    uVar1 = FUN_140790eb0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146859ee8 = GetStaticStruct(FUN_140791eb0,uVar2,L"AIAspectSettings_Cooldown",0x220,uVar1);
  }
  return;
}



// FUNCTION 140791490 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FEdGraphSchemaAction_NewNode::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146859f08 == 0) {
    uVar1 = FUN_140790ec0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146859f08 = GetStaticStruct(FUN_140791ee0,uVar2,L"AIAspectSettings_Crouch",0x108,uVar1);
  }
  return;
}



// FUNCTION 1407914f0 FUN_1407914f0 body=82 status=ok
// SIG undefined FUN_1407914f0(void)

void FUN_1407914f0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146859f38 == 0) {
    uVar1 = FUN_140790ed0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146859f38 =
         GetStaticStruct(FUN_140791f10,uVar2,L"AIAspectSettings_DropshipSpawn",0x10,uVar1);
  }
  return;
}



// FUNCTION 140791550 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FSoundAttenuationSettings::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146859f68 == 0) {
    uVar1 = FUN_140790ee0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146859f68 = GetStaticStruct(FUN_140791f40,uVar2,L"AIAspectSettings_EnvQuery",0x3a0,uVar1);
  }
  return;
}



// FUNCTION 1407915b0 FUN_1407915b0 body=82 status=ok
// SIG undefined FUN_1407915b0(void)

void FUN_1407915b0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146859fb0 == 0) {
    uVar1 = FUN_140790ef0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146859fb0 =
         GetStaticStruct(FUN_140791f70,uVar2,L"AIAspectSettings_FindClosestPlayer",0x20,uVar1);
  }
  return;
}



// FUNCTION 140791610 FUN_140791610 body=82 status=ok
// SIG undefined FUN_140791610(void)

void FUN_140791610(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146859fe0 == 0) {
    uVar1 = FUN_140790f00();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146859fe0 = GetStaticStruct(FUN_140791fa0,uVar2,L"AIAspectSettings_FlyToNavMesh",0x10,uVar1)
    ;
  }
  return;
}



// FUNCTION 140791670 FUN_140791670 body=82 status=ok
// SIG undefined FUN_140791670(void)

void FUN_140791670(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685a000 == 0) {
    uVar1 = FUN_140790f10();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a000 = GetStaticStruct(FUN_140791fd0,uVar2,L"AIAspectSettings_Follow",0x38,uVar1);
  }
  return;
}



// FUNCTION 1407916d0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FSynthKnobStyle::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685a020 == 0) {
    uVar1 = FUN_140790f20();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a020 = GetStaticStruct(FUN_140792000,uVar2,L"AIAspectSettings_GbxAction",0x238,uVar1);
  }
  return;
}



// FUNCTION 140791730 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FTimeline::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685a040 == 0) {
    uVar1 = FUN_140790f30();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a040 =
         GetStaticStruct(FUN_140792030,uVar2,L"AIAspectSettings_GroupLocation",0x98,uVar1);
  }
  return;
}



// FUNCTION 140791790 FUN_140791790 body=82 status=ok
// SIG undefined FUN_140791790(void)

void FUN_140791790(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685a068 == 0) {
    uVar1 = FUN_140790f40();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a068 = GetStaticStruct(FUN_140792060,uVar2,L"AIAspectSettings_IntCompare",0xa0,uVar1);
  }
  return;
}



// FUNCTION 1407917f0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FGameplayEffectExecutionScopedModifierInfo::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685a090 == 0) {
    uVar1 = FUN_140790f60();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a090 = GetStaticStruct(FUN_140792090,uVar2,L"AIAspectSettings_IsInRange",0x248,uVar1);
  }
  return;
}



// FUNCTION 140791850 FUN_140791850 body=82 status=ok
// SIG undefined FUN_140791850(void)

void FUN_140791850(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685a0b0 == 0) {
    uVar1 = FUN_140790f50();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a0b0 =
         GetStaticStruct(FUN_1407920c0,uVar2,L"AIAspectSettings_IsInRangeData",0x88,uVar1);
  }
  return;
}



// FUNCTION 1407918b0 FUN_1407918b0 body=82 status=ok
// SIG undefined FUN_1407918b0(void)

void FUN_1407918b0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146859e90 == 0) {
    uVar1 = FUN_140790f70();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146859e90 =
         GetStaticStruct(FUN_1407920f0,uVar2,L"AIAspectSettings_UseSmartObject",0x478,uVar1);
  }
  return;
}



// FUNCTION 140791910 FUN_140791910 body=47 status=ok
// SIG undefined FUN_140791910(void)

longlong FUN_140791910(void)

{
  if (DAT_146859e10 == 0) {
    FUN_141786440(&DAT_146859e10,&PTR_FUN_14409f510);
  }
  return DAT_146859e10;
}



// FUNCTION 140791940 FUN_140791940 body=47 status=ok
// SIG undefined FUN_140791940(void)

longlong FUN_140791940(void)

{
  if (DAT_146859e20 == 0) {
    FUN_141786440(&DAT_146859e20,&PTR_FUN_14409f7c0);
  }
  return DAT_146859e20;
}



// FUNCTION 140791970 FUN_140791970 body=47 status=ok
// SIG undefined FUN_140791970(void)

longlong FUN_140791970(void)

{
  if (DAT_146859e68 == 0) {
    FUN_141786440(&DAT_146859e68,&PTR_GetPrivateStaticClass_1440a0e50);
  }
  return DAT_146859e68;
}



// FUNCTION 1407919a0 FUN_1407919a0 body=47 status=ok
// SIG undefined FUN_1407919a0(void)

longlong FUN_1407919a0(void)

{
  if (DAT_146859e80 == 0) {
    FUN_141786440(&DAT_146859e80,&PTR_GetPrivateStaticClass_1440a13d0);
  }
  return DAT_146859e80;
}



// FUNCTION 1407919d0 FUN_1407919d0 body=47 status=ok
// SIG undefined FUN_1407919d0(void)

longlong FUN_1407919d0(void)

{
  if (DAT_146859ea0 == 0) {
    FUN_141786440(&DAT_146859ea0,&PTR_FUN_1440a04d0);
  }
  return DAT_146859ea0;
}



// FUNCTION 140791a00 FUN_140791a00 body=47 status=ok
// SIG undefined FUN_140791a00(void)

longlong FUN_140791a00(void)

{
  if (DAT_146859ef8 == 0) {
    FUN_141786440(&DAT_146859ef8,&PTR_GetPrivateStaticClass_1440a0d00);
  }
  return DAT_146859ef8;
}



// FUNCTION 140791a30 FUN_140791a30 body=47 status=ok
// SIG undefined FUN_140791a30(void)

longlong FUN_140791a30(void)

{
  if (DAT_146859f18 == 0) {
    FUN_141786440(&DAT_146859f18,&PTR_FUN_1440a1040);
  }
  return DAT_146859f18;
}



// FUNCTION 140791a60 FUN_140791a60 body=47 status=ok
// SIG undefined FUN_140791a60(void)

longlong FUN_140791a60(void)

{
  if (DAT_146859f28 == 0) {
    FUN_141786440(&DAT_146859f28,&PTR_FUN_1440a1150);
  }
  return DAT_146859f28;
}



// FUNCTION 140791a90 FUN_140791a90 body=47 status=ok
// SIG undefined FUN_140791a90(void)

longlong FUN_140791a90(void)

{
  if (DAT_146859f48 == 0) {
    FUN_141786440(&DAT_146859f48,&PTR_FUN_1440a19f0);
  }
  return DAT_146859f48;
}



// FUNCTION 140791ac0 FUN_140791ac0 body=47 status=ok
// SIG undefined FUN_140791ac0(void)

longlong FUN_140791ac0(void)

{
  if (DAT_146859f90 == 0) {
    FUN_141786440(&DAT_146859f90,&PTR_FUN_1440a1490);
  }
  return DAT_146859f90;
}



// FUNCTION 140791af0 FUN_140791af0 body=47 status=ok
// SIG undefined FUN_140791af0(void)

longlong FUN_140791af0(void)

{
  if (DAT_146859fa0 == 0) {
    FUN_141786440(&DAT_146859fa0,&PTR_GetPrivateStaticClass_1440a16f0);
  }
  return DAT_146859fa0;
}



// FUNCTION 140791b20 FUN_140791b20 body=47 status=ok
// SIG undefined FUN_140791b20(void)

longlong FUN_140791b20(void)

{
  if (DAT_146859fc0 == 0) {
    FUN_141786440(&DAT_146859fc0,&PTR_FUN_1440a1bb0);
  }
  return DAT_146859fc0;
}



// FUNCTION 140791b50 FUN_140791b50 body=47 status=ok
// SIG undefined FUN_140791b50(void)

longlong FUN_140791b50(void)

{
  if (DAT_146859fd0 == 0) {
    FUN_141786440(&DAT_146859fd0,&PTR_GetPrivateStaticClass_1440a1fc0);
  }
  return DAT_146859fd0;
}



// FUNCTION 140791b80 FUN_140791b80 body=47 status=ok
// SIG undefined FUN_140791b80(void)

longlong FUN_140791b80(void)

{
  if (DAT_146859ff0 == 0) {
    FUN_141786440(&DAT_146859ff0,&PTR_GetPrivateStaticClass_1440a2500);
  }
  return DAT_146859ff0;
}



// FUNCTION 140791bb0 FUN_140791bb0 body=47 status=ok
// SIG undefined FUN_140791bb0(void)

longlong FUN_140791bb0(void)

{
  if (DAT_14685a010 == 0) {
    FUN_141786440(&DAT_14685a010,&PTR_FUN_14409e690);
  }
  return DAT_14685a010;
}



// FUNCTION 140791be0 FUN_140791be0 body=47 status=ok
// SIG undefined FUN_140791be0(void)

longlong FUN_140791be0(void)

{
  if (DAT_14685a050 == 0) {
    FUN_141786440(&DAT_14685a050,&PTR_FUN_14409efa0);
  }
  return DAT_14685a050;
}



// FUNCTION 140791c10 FUN_140791c10 body=47 status=ok
// SIG undefined FUN_140791c10(void)

longlong FUN_140791c10(void)

{
  if (DAT_14685a078 == 0) {
    FUN_141786440(&DAT_14685a078,&PTR_FUN_14409f710);
  }
  return DAT_14685a078;
}



// FUNCTION 140791c40 FUN_140791c40 body=47 status=ok
// SIG undefined FUN_140791c40(void)

longlong FUN_140791c40(void)

{
  if (DAT_14685a0c0 == 0) {
    FUN_141786440(&DAT_14685a0c0,&PTR_FUN_1440a01f0);
  }
  return DAT_14685a0c0;
}



// FUNCTION 140791c70 FUN_140791c70 body=47 status=ok
// SIG undefined FUN_140791c70(void)

longlong FUN_140791c70(void)

{
  if (DAT_146859f58 == 0) {
    FUN_141786a30(&DAT_146859f58,&PTR_Z_Construct_UPackage__Script_Engine_146237d60);
  }
  return DAT_146859f58;
}



// FUNCTION 140791ca0 FUN_140791ca0 body=47 status=ok
// SIG undefined FUN_140791ca0(void)

longlong FUN_140791ca0(void)

{
  if (DAT_146859df8 == 0) {
    FUN_1417866a0(&DAT_146859df8,&PTR_Z_Construct_UPackage__Script_Engine_146239aa0);
  }
  return DAT_146859df8;
}



// FUNCTION 140791cd0 FUN_140791cd0 body=47 status=ok
// SIG undefined FUN_140791cd0(void)

longlong FUN_140791cd0(void)

{
  if (DAT_146859e78 == 0) {
    FUN_1417866a0(&DAT_146859e78,&PTR_Z_Construct_UPackage__Script_Engine_146239af0);
  }
  return DAT_146859e78;
}



// FUNCTION 140791d00 FUN_140791d00 body=47 status=ok
// SIG undefined FUN_140791d00(void)

longlong FUN_140791d00(void)

{
  if (DAT_14685a060 == 0) {
    FUN_1417866a0(&DAT_14685a060,&PTR_Z_Construct_UPackage__Script_Engine_146239b90);
  }
  return DAT_14685a060;
}



// FUNCTION 140791d30 FUN_140791d30 body=47 status=ok
// SIG undefined FUN_140791d30(void)

longlong FUN_140791d30(void)

{
  if (DAT_146859f60 == 0) {
    FUN_1417866a0(&DAT_146859f60,&PTR_Z_Construct_UPackage__Script_Engine_146239b40);
  }
  return DAT_146859f60;
}



// FUNCTION 140791d60 FUN_140791d60 body=47 status=ok
// SIG undefined FUN_140791d60(void)

longlong FUN_140791d60(void)

{
  if (DAT_14685a088 == 0) {
    FUN_1417866a0(&DAT_14685a088,&PTR_Z_Construct_UPackage__Script_Engine_146239be0);
  }
  return DAT_14685a088;
}



// FUNCTION 140791d90 FUN_140791d90 body=47 status=ok
// SIG undefined FUN_140791d90(void)

longlong FUN_140791d90(void)

{
  if (DAT_14685a0a8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685a0a8,&PTR_Z_Construct_UPackage__Script_Engine_146239900);
  }
  return DAT_14685a0a8;
}



// FUNCTION 140791dc0 FUN_140791dc0 body=47 status=ok
// SIG undefined FUN_140791dc0(void)

longlong FUN_140791dc0(void)

{
  if (DAT_146859e08 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146859e08,&PTR_Z_Construct_UPackage__Script_Engine_146236400);
  }
  return DAT_146859e08;
}



// FUNCTION 140791df0 FUN_140791df0 body=47 status=ok
// SIG undefined FUN_140791df0(void)

longlong FUN_140791df0(void)

{
  if (DAT_146859e38 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146859e38,&PTR_Z_Construct_UPackage__Script_Engine_146236760);
  }
  return DAT_146859e38;
}



// FUNCTION 140791e20 FUN_140791e20 body=47 status=ok
// SIG undefined FUN_140791e20(void)

longlong FUN_140791e20(void)

{
  if (DAT_146859e60 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146859e60,&PTR_Z_Construct_UPackage__Script_Engine_146236950);
  }
  return DAT_146859e60;
}



// FUNCTION 140791e50 FUN_140791e50 body=47 status=ok
// SIG undefined FUN_140791e50(void)

longlong FUN_140791e50(void)

{
  if (DAT_146859eb8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146859eb8,&PTR_Z_Construct_UPackage__Script_Engine_1462373c0);
  }
  return DAT_146859eb8;
}



// FUNCTION 140791e80 FUN_140791e80 body=47 status=ok
// SIG undefined FUN_140791e80(void)

longlong FUN_140791e80(void)

{
  if (DAT_146859ec8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146859ec8,&PTR_Z_Construct_UPackage__Script_Engine_1462374e0);
  }
  return DAT_146859ec8;
}



// FUNCTION 140791eb0 FUN_140791eb0 body=47 status=ok
// SIG undefined FUN_140791eb0(void)

longlong FUN_140791eb0(void)

{
  if (DAT_146859ef0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146859ef0,&PTR_Z_Construct_UPackage__Script_Engine_146237890);
  }
  return DAT_146859ef0;
}



// FUNCTION 140791ee0 FUN_140791ee0 body=47 status=ok
// SIG undefined FUN_140791ee0(void)

longlong FUN_140791ee0(void)

{
  if (DAT_146859f10 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146859f10,&PTR_Z_Construct_UPackage__Script_Engine_146237a20);
  }
  return DAT_146859f10;
}



// FUNCTION 140791f10 FUN_140791f10 body=47 status=ok
// SIG undefined FUN_140791f10(void)

longlong FUN_140791f10(void)

{
  if (DAT_146859f40 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146859f40,&PTR_Z_Construct_UPackage__Script_Engine_146237ba0);
  }
  return DAT_146859f40;
}



// FUNCTION 140791f40 FUN_140791f40 body=47 status=ok
// SIG undefined FUN_140791f40(void)

longlong FUN_140791f40(void)

{
  if (DAT_146859f70 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146859f70,&PTR_Z_Construct_UPackage__Script_Engine_146238230);
  }
  return DAT_146859f70;
}



// FUNCTION 140791f70 FUN_140791f70 body=47 status=ok
// SIG undefined FUN_140791f70(void)

longlong FUN_140791f70(void)

{
  if (DAT_146859fb8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146859fb8,&PTR_Z_Construct_UPackage__Script_Engine_146238610);
  }
  return DAT_146859fb8;
}



// FUNCTION 140791fa0 FUN_140791fa0 body=47 status=ok
// SIG undefined FUN_140791fa0(void)

longlong FUN_140791fa0(void)

{
  if (DAT_146859fe8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146859fe8,&PTR_Z_Construct_UPackage__Script_Engine_146238820);
  }
  return DAT_146859fe8;
}



// FUNCTION 140791fd0 FUN_140791fd0 body=47 status=ok
// SIG undefined FUN_140791fd0(void)

longlong FUN_140791fd0(void)

{
  if (DAT_14685a008 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685a008,&PTR_Z_Construct_UPackage__Script_Engine_146238b90);
  }
  return DAT_14685a008;
}



// FUNCTION 140792000 FUN_140792000 body=47 status=ok
// SIG undefined FUN_140792000(void)

longlong FUN_140792000(void)

{
  if (DAT_14685a028 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685a028,&PTR_Z_Construct_UPackage__Script_Engine_146239010);
  }
  return DAT_14685a028;
}



// FUNCTION 140792030 FUN_140792030 body=47 status=ok
// SIG undefined FUN_140792030(void)

longlong FUN_140792030(void)

{
  if (DAT_14685a048 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685a048,&PTR_Z_Construct_UPackage__Script_Engine_1462391d0);
  }
  return DAT_14685a048;
}



// FUNCTION 140792060 FUN_140792060 body=47 status=ok
// SIG undefined FUN_140792060(void)

longlong FUN_140792060(void)

{
  if (DAT_14685a070 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685a070,&PTR_Z_Construct_UPackage__Script_Engine_1462394b0);
  }
  return DAT_14685a070;
}



// FUNCTION 140792090 FUN_140792090 body=47 status=ok
// SIG undefined FUN_140792090(void)

longlong FUN_140792090(void)

{
  if (DAT_14685a098 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685a098,&PTR_Z_Construct_UPackage__Script_Engine_146239700);
  }
  return DAT_14685a098;
}



// FUNCTION 1407920c0 FUN_1407920c0 body=47 status=ok
// SIG undefined FUN_1407920c0(void)

longlong FUN_1407920c0(void)

{
  if (DAT_14685a0b8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685a0b8,&PTR_Z_Construct_UPackage__Script_Engine_1462399e0);
  }
  return DAT_14685a0b8;
}



// FUNCTION 1407920f0 FUN_1407920f0 body=47 status=ok
// SIG undefined FUN_1407920f0(void)

longlong FUN_1407920f0(void)

{
  if (DAT_146859e98 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146859e98,&PTR_Z_Construct_UPackage__Script_Engine_146236f40);
  }
  return DAT_146859e98;
}



// FUNCTION 140792120 FUN_140792120 body=222 status=ok
// SIG undefined FUN_140792120(void)

void FUN_140792120(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 *puVar1;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_98 [144];
  
  FUN_1406d4b30(local_98,0);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  puVar1 = local_98;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1406ea1b0(puVar1,&local_a8);
  if (param_3 == &local_a8) {
    if (local_a8 != 0) {
      FMemory::Free();
    }
  }
  else {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = local_a8;
    *(undefined4 *)(param_3 + 1) = local_a0;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_9c;
  }
  return;
}



// FUNCTION 140792200 FUN_140792200 body=550 status=ok
// SIG undefined FUN_140792200(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140792200(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined1 *puVar5;
  undefined2 *puVar6;
  undefined1 auStack_458 [32];
  undefined4 local_438;
  undefined2 *local_428;
  undefined8 local_420;
  longlong local_418;
  longlong local_410;
  undefined4 local_408;
  undefined4 local_404;
  undefined8 local_400;
  longlong local_3f8 [2];
  longlong local_3e8 [2];
  undefined1 local_3d8 [928];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_458;
  FUN_1406d4c40(local_3d8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_3d8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_3d8);
  }
  local_418 = 0;
  puVar5 = local_3d8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_418);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_418);
  }
  lVar1 = local_418;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar2 = FUN_1406ea4f0(puVar5,local_3e8);
  local_438 = 1;
  puVar3 = (undefined8 *)FString::Replace(uVar2,local_3f8,&DAT_1440a3e48,&DAT_1440a3e40);
  if (*(int *)(puVar3 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*puVar3;
  }
  if (lVar1 == 0) {
    local_428 = (undefined2 *)0x0;
    local_420 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_428,0);
    FGenericPlatformString::Memcpy(local_428,&DAT_143f3edc8,10);
  }
  else {
    local_400 = *(undefined8 *)(lVar1 + 0x18);
    FName::ToString(&local_400,&local_428);
  }
  puVar4 = &DAT_143f3eda8;
  if ((int)local_420 != 0) {
    puVar4 = local_428;
  }
  FString::PrintfImpl(&local_410,L"%s:\n\t%s",puVar4,puVar6);
  if (local_428 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_3f8[0] != 0) {
    FMemory::Free();
  }
  if (local_3e8[0] != 0) {
    FMemory::Free();
  }
  if (param_3 == &local_410) {
    if (local_410 != 0) {
      FMemory::Free();
    }
  }
  else {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = local_410;
    *(undefined4 *)(param_3 + 1) = local_408;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_404;
  }
  FUN_1406d8b70(local_3d8);
  return;
}



// FUNCTION 140792430 FUN_140792430 body=226 status=ok
// SIG undefined FUN_140792430(void)

void FUN_140792430(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 *puVar1;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28 [32];
  
  FUN_1406d49f0(local_28);
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
  FUN_1406e9fc0(puVar1,&local_38);
  if (param_3 != &local_38) {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = local_38;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
    return;
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140792520 FUN_140792520 body=53 status=ok
// SIG undefined FUN_140792520(void)

void FUN_140792520(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &PTR_FUN_1440aae68;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 140792560 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UCurveLinearColor::GetPrivateStaticClass(void)

{
  if (DAT_14685a258 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_Land",&DAT_14685a258,FUN_140447710,0x250,0x10000000,0,
                  L"Engine",&LAB_140793800,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UUserWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_14685a258;
}



// FUNCTION 140792620 FUN_140792620 body=162 status=ok
// SIG undefined FUN_140792620(void)

longlong FUN_140792620(void)

{
  if (DAT_14685a2e0 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_LockTarget",&DAT_14685a2e0,FUN_140447710,0x108,
                  0x10000000,0,L"Engine",&LAB_1407938e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_14685a2e0;
}



// FUNCTION 1407926d0 FUN_1407926d0 body=47 status=ok
// SIG undefined FUN_1407926d0(void)

longlong FUN_1407926d0(void)

{
  if (DAT_14685a3c8 == 0) {
    FUN_141786440(&DAT_14685a3c8,&PTR_GetPrivateStaticClass_1440a7b00);
  }
  return DAT_14685a3c8;
}



// FUNCTION 140792710 FUN_140792710 body=53 status=ok
// SIG undefined FUN_140792710(void)

void FUN_140792710(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &PTR_FUN_1440aa288;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 140792750 FUN_140792750 body=162 status=ok
// SIG undefined FUN_140792750(void)

longlong FUN_140792750(void)

{
  if (DAT_14685a300 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_LookAroundRandomly",&DAT_14685a300,FUN_140447710,0x150
                  ,0x10000000,0,L"Engine",&LAB_1407938f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_14685a300;
}



// FUNCTION 140792810 FUN_140792810 body=53 status=ok
// SIG undefined FUN_140792810(void)

void FUN_140792810(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &PTR_FUN_1440aaf80;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 140792860 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ULevelSequenceBurnIn::GetPrivateStaticClass(void)

{
  if (DAT_14685a328 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_Loop",&DAT_14685a328,
                  StaticRegisterNativesULevelSequenceBurnIn,0x298,0x10000000,0,L"Engine",
                  FUN_140793900,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_14685a328;
}



// FUNCTION 140792910 FUN_140792910 body=47 status=ok
// SIG undefined FUN_140792910(void)

longlong FUN_140792910(void)

{
  if (DAT_14685a320 == 0) {
    FUN_141786440(&DAT_14685a320,&PTR_GetPrivateStaticClass_1440a6920);
  }
  return DAT_14685a320;
}



// FUNCTION 140792940 FUN_140792940 body=47 status=ok
// SIG undefined FUN_140792940(void)

longlong FUN_140792940(void)

{
  if (DAT_14685a318 == 0) {
    FUN_141786a30(&DAT_14685a318,&PTR_FUN_14623b2d0);
  }
  return DAT_14685a318;
}



// FUNCTION 140792970 FUN_140792970 body=53 status=ok
// SIG undefined FUN_140792970(void)

void FUN_140792970(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x198;
    *puVar1 = &PTR_FUN_1440ab450;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1407929c0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UCurveLinearColor::GetPrivateStaticClass(void)

{
  if (DAT_14685a338 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_MoveNode",&DAT_14685a338,FUN_140447710,0x250,
                  0x10000000,0,L"Engine",&LAB_140793960,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UUserWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_14685a338;
}



// FUNCTION 140792a80 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong USkeletalBodySetup::GetPrivateStaticClass(void)

{
  if (DAT_14685a358 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_MoveSpline",&DAT_14685a358,FUN_140447710,0x290,
                  0x10000000,0,L"Engine",FUN_140793970,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UUserWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_14685a358;
}



// FUNCTION 140792b30 FUN_140792b30 body=53 status=ok
// SIG undefined FUN_140792b30(void)

void FUN_140792b30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &PTR_FUN_1440ab948;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140792b80 FUN_140792b80 body=162 status=ok
// SIG undefined FUN_140792b80(void)

longlong FUN_140792b80(void)

{
  if (DAT_14685a368 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_NavBlackboard",&DAT_14685a368,FUN_140447710,0x260,
                  0x10000000,0,L"Engine",&LAB_140793a60,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UUserWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_14685a368;
}



// FUNCTION 140792c40 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UCurveLinearColor::GetPrivateStaticClass(void)

{
  if (DAT_14685a378 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_NavCover",&DAT_14685a378,FUN_140447710,0x250,
                  0x10000000,0,L"Engine",FUN_140793a70,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UUserWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_14685a378;
}



// FUNCTION 140792d00 FUN_140792d00 body=162 status=ok
// SIG undefined FUN_140792d00(void)

longlong FUN_140792d00(void)

{
  if (DAT_14685a398 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_NavFlyOffset",&DAT_14685a398,FUN_140447710,0x360,
                  0x10000000,0,L"Engine",&LAB_140793af0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UUserWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_14685a398;
}



// FUNCTION 140792db0 FUN_140792db0 body=53 status=ok
// SIG undefined FUN_140792db0(void)

void FUN_140792db0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x120;
    *puVar1 = &PTR_FUN_1440abe30;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140792df0 FUN_140792df0 body=162 status=ok
// SIG undefined FUN_140792df0(void)

longlong FUN_140792df0(void)

{
  if (DAT_14685a488 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_Route",&DAT_14685a488,FUN_140447710,0x198,0x10000000,0
                  ,L"Engine",&LAB_140793be0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_14685a488;
}



// FUNCTION 140792eb0 FUN_140792eb0 body=47 status=ok
// SIG undefined FUN_140792eb0(void)

longlong FUN_140792eb0(void)

{
  if (DAT_14685a3c0 == 0) {
    FUN_141786a30(&DAT_14685a3c0,&PTR_FUN_14623c4a0);
  }
  return DAT_14685a3c0;
}



// FUNCTION 140792ee0 FUN_140792ee0 body=53 status=ok
// SIG undefined FUN_140792ee0(void)

void FUN_140792ee0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x140;
    *puVar1 = &PTR_FUN_1440abf48;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140792f20 FUN_140792f20 body=162 status=ok
// SIG undefined FUN_140792f20(void)

longlong FUN_140792f20(void)

{
  if (DAT_14685a278 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_LeadUpdate",&DAT_14685a278,FUN_140447710,0x180,
                  0x10000000,0,L"Engine",&LAB_140793810,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_14685a278;
}



// FUNCTION 140792fd0 FUN_140792fd0 body=53 status=ok
// SIG undefined FUN_140792fd0(void)

void FUN_140792fd0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_1440ac060;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 140793010 FUN_140793010 body=53 status=ok
// SIG undefined FUN_140793010(void)

void FUN_140793010(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &PTR_FUN_1440aa3a0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140793060 FUN_140793060 body=162 status=ok
// SIG undefined FUN_140793060(void)

longlong FUN_140793060(void)

{
  if (DAT_14685a3f8 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_Orbit",&DAT_14685a3f8,FUN_140447710,0x460,0x10000000,0
                  ,L"Engine",&LAB_140793b60,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UUserWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_14685a3f8;
}



// FUNCTION 140793120 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong USafeZone::GetPrivateStaticClass(void)

{
  if (DAT_14685a2a0 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_Leap",&DAT_14685a2a0,StaticRegisterNativesUSafeZone,
                  0x158,0x10000000,0,L"Engine",FUN_140793820,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,GetPrivateStaticClass,0);
  }
  return DAT_14685a2a0;
}



// FUNCTION 1407931d0 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FEditableTextStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x220;
    *puVar1 = &PTR_FUN_1440ac1b8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140793210 FUN_140793210 body=47 status=ok
// SIG undefined FUN_140793210(void)

longlong FUN_140793210(void)

{
  if (DAT_14685a298 == 0) {
    FUN_141786440(&DAT_14685a298,&PTR_GetPrivateStaticClass_1440a8500);
  }
  return DAT_14685a298;
}



// FUNCTION 140793240 FUN_140793240 body=47 status=ok
// SIG undefined FUN_140793240(void)

longlong FUN_140793240(void)

{
  if (DAT_14685a290 == 0) {
    FUN_141786a30(&DAT_14685a290,&PTR_FUN_14623a8a0);
  }
  return DAT_14685a290;
}



// FUNCTION 140793280 FUN_140793280 body=53 status=ok
// SIG undefined FUN_140793280(void)

void FUN_140793280(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &PTR_FUN_1440aa870;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1407932d0 FUN_1407932d0 body=162 status=ok
// SIG undefined FUN_1407932d0(void)

longlong FUN_1407932d0(void)

{
  if (DAT_14685a418 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_Plan",&DAT_14685a418,FUN_140447710,0x120,0x10000000,0,
                  L"Engine",&LAB_140793b70,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_14685a418;
}



// FUNCTION 140793390 FUN_140793390 body=162 status=ok
// SIG undefined FUN_140793390(void)

longlong FUN_140793390(void)

{
  if (DAT_14685a468 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_Rotation",&DAT_14685a468,FUN_140795700,0x650,
                  0x10000000,0,L"Engine",FUN_140793b80,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_14685a468;
}



// FUNCTION 140793440 FUN_140793440 body=47 status=ok
// SIG undefined FUN_140793440(void)

longlong FUN_140793440(void)

{
  if (DAT_14685a460 == 0) {
    FUN_141786440(&DAT_14685a460,&PTR_FUN_1440a9200);
  }
  return DAT_14685a460;
}



// FUNCTION 140793470 FUN_140793470 body=47 status=ok
// SIG undefined FUN_140793470(void)

longlong FUN_140793470(void)

{
  if (DAT_14685a450 == 0) {
    FUN_141786a30(&DAT_14685a450,&PTR_FUN_14623d160);
  }
  return DAT_14685a450;
}



// FUNCTION 1407934a0 FUN_1407934a0 body=47 status=ok
// SIG undefined FUN_1407934a0(void)

longlong FUN_1407934a0(void)

{
  if (DAT_14685a458 == 0) {
    FUN_141786a30(&DAT_14685a458,&PTR_FUN_14623d260);
  }
  return DAT_14685a458;
}



// FUNCTION 1407934d0 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FHyperlinkStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x550;
    *puVar1 = &PTR_FUN_1440ac740;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140793510 FUN_140793510 body=53 status=ok
// SIG undefined FUN_140793510(void)

void FUN_140793510(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1b8;
    *puVar1 = &PTR_FUN_1440ac858;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140793560 FUN_140793560 body=53 status=ok
// SIG undefined FUN_140793560(void)

void FUN_140793560(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_1440ac990;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1407935a0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong USpacer::GetPrivateStaticClass(void)

{
  if (DAT_14685a238 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_IsInTerritory",&DAT_14685a238,FUN_140447710,0x118,
                  0x10000000,0,L"Engine",FUN_1407937a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_14685a238;
}



// FUNCTION 140793660 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UBlueprintGeneratedClass::GetPrivateStaticClass(void)

{
  if (DAT_14685a2d0 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_Location",&DAT_14685a2d0,FUN_140447710,0x2e0,
                  0x10000000,0,L"Engine",FUN_140793880,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_14685a2d0;
}



// FUNCTION 140793710 FUN_140793710 body=53 status=ok
// SIG undefined FUN_140793710(void)

void FUN_140793710(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_1440aa170;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140793750 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1e0;
    *puVar1 = &PTR_FUN_1440aad50;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1407937a0 FUN_1407937a0 body=84 status=ok
// SIG undefined FUN_1407937a0(void)

void FUN_1407937a0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1406d50d0(puVar1);
    *(undefined2 *)(puVar1 + 0x1f) = 0x101;
    *(undefined2 *)((longlong)puVar1 + 0xfb) = 0x101;
    *puVar1 = &PTR__scalar_deleting_destructor__1440a9dd0;
    puVar1[5] = &PTR_LAB_1440a3848;
    FUN_1406fe8a0(puVar1 + 0x20);
    return;
  }
  return;
}



// FUNCTION 140793820 FUN_140793820 body=84 status=ok
// SIG undefined FUN_140793820(void)

void FUN_140793820(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1406d50d0(puVar1);
    *(undefined2 *)(puVar1 + 0x1f) = 0x101;
    *(undefined2 *)((longlong)puVar1 + 0xfb) = 0x101;
    *puVar1 = &PTR__scalar_deleting_destructor__1440aa4b8;
    puVar1[5] = &PTR_LAB_1440aa858;
    FUN_1406fea20(puVar1 + 0x20);
    return;
  }
  return;
}



// FUNCTION 140793880 FUN_140793880 body=84 status=ok
// SIG undefined FUN_140793880(void)

void FUN_140793880(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1406d50d0(puVar1);
    *(undefined2 *)(puVar1 + 0x1f) = 0x101;
    *(undefined2 *)((longlong)puVar1 + 0xfb) = 0x101;
    *puVar1 = &PTR_FUN_1440aa998;
    puVar1[5] = &PTR_LAB_1440aad38;
    FUN_1406fea60(puVar1 + 0x20);
    return;
  }
  return;
}



// FUNCTION 140793900 FUN_140793900 body=84 status=ok
// SIG undefined FUN_140793900(void)

void FUN_140793900(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1406d50d0(puVar1);
    *(undefined2 *)(puVar1 + 0x1f) = 0x101;
    *(undefined2 *)((longlong)puVar1 + 0xfb) = 0x101;
    *puVar1 = &PTR_FUN_1440ab098;
    puVar1[5] = &PTR_LAB_1440ab438;
    FUN_1406feaf0(puVar1 + 0x20);
    return;
  }
  return;
}



// FUNCTION 140793970 FUN_140793970 body=227 status=ok
// SIG undefined FUN_140793970(void)

void FUN_140793970(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1406d50d0(puVar1);
    *(undefined2 *)(puVar1 + 0x1f) = 0x101;
    *(undefined2 *)((longlong)puVar1 + 0xfb) = 0x101;
    *puVar1 = &PTR__scalar_deleting_destructor__144057018;
    puVar1[5] = &PTR_LAB_1440573d0;
    FUN_1406fedb0(puVar1 + 0x20);
    *puVar1 = &PTR__scalar_deleting_destructor__1440ab578;
    puVar1[5] = &PTR_LAB_1440ab930;
    puVar1[0x48] = 0;
    *(undefined2 *)(puVar1 + 0x49) = 0xff00;
    puVar1[0x4a] = 0;
    *(undefined2 *)(puVar1 + 0x4b) = 0xff00;
    puVar1[0x4c] = 0;
    *(undefined2 *)(puVar1 + 0x4d) = 0xff00;
    *(undefined4 *)(puVar1 + 0x4e) = 0x44fa0000;
    *(undefined4 *)((longlong)puVar1 + 0x274) = 0x40400000;
    *(undefined4 *)(puVar1 + 0x4f) = 0x44fa0000;
    *(undefined4 *)((longlong)puVar1 + 0x27c) = 0x3f000000;
    *(undefined4 *)(puVar1 + 0x50) = 0x43c80000;
    *(undefined1 *)((longlong)puVar1 + 0x284) = 1;
    *(undefined4 *)(puVar1 + 0x51) = 0x447a0000;
    *(undefined1 *)((longlong)puVar1 + 0x28c) = 0;
  }
  return;
}



// FUNCTION 140793a70 FUN_140793a70 body=118 status=ok
// SIG undefined FUN_140793a70(void)

void FUN_140793a70(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1406d50d0(puVar1);
    *(undefined2 *)(puVar1 + 0x1f) = 0x101;
    *(undefined2 *)((longlong)puVar1 + 0xfb) = 0x101;
    *puVar1 = &PTR__scalar_deleting_destructor__144057018;
    puVar1[5] = &PTR_LAB_1440573d0;
    FUN_1406fedb0(puVar1 + 0x20);
    *puVar1 = &PTR__scalar_deleting_destructor__1440aba60;
    puVar1[5] = &PTR_LAB_1440abe18;
    puVar1[0x48] = 0;
    *(undefined2 *)(puVar1 + 0x49) = 0xff00;
  }
  return;
}



// FUNCTION 140793b00 FUN_140793b00 body=84 status=ok
// SIG undefined FUN_140793b00(void)

void FUN_140793b00(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1406d50d0(puVar1);
    *(undefined2 *)(puVar1 + 0x1f) = 0x101;
    *(undefined2 *)((longlong)puVar1 + 0xfb) = 0x101;
    *puVar1 = &PTR__scalar_deleting_destructor__144057018;
    puVar1[5] = &PTR_LAB_1440573d0;
    FUN_1406fedb0(puVar1 + 0x20);
    return;
  }
  return;
}



// FUNCTION 140793b80 FUN_140793b80 body=84 status=ok
// SIG undefined FUN_140793b80(void)

void FUN_140793b80(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1406d50d0(puVar1);
    *(undefined2 *)(puVar1 + 0x1f) = 0x101;
    *(undefined2 *)((longlong)puVar1 + 0xfb) = 0x101;
    *puVar1 = &PTR__scalar_deleting_destructor__1440ac2d0;
    puVar1[5] = &PTR_LAB_1440ac670;
    FUN_1406ff280(puVar1 + 0x20);
    return;
  }
  return;
}



// FUNCTION 140793bf0 FUN_140793bf0 body=131 status=ok
// SIG undefined FUN_140793bf0(void)

void FUN_140793bf0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xe0);
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140793c80 FUN_140793c80 body=778 status=ok
// SIG undefined FUN_140793c80(void)

undefined8 * FUN_140793c80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  puVar1 = param_1 + 0x14;
  *param_1 = *param_2;
  param_1[1] = uVar7;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)((longlong)param_1 + 0x19) = *(undefined1 *)((longlong)param_2 + 0x19);
  *(undefined1 *)((longlong)param_1 + 0x1a) = *(undefined1 *)((longlong)param_2 + 0x1a);
  *(undefined1 *)((longlong)param_1 + 0x1b) = *(undefined1 *)((longlong)param_2 + 0x1b);
  *(undefined8 *)((longlong)param_1 + 0x1c) = *(undefined8 *)((longlong)param_2 + 0x1c);
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  uVar7 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar7;
  uVar7 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar7;
  uVar7 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar7;
  param_1[0xd] = param_2[0xd];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x74);
  uVar5 = *(undefined4 *)(param_2 + 0xf);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar4;
  *(undefined4 *)(param_1 + 0xf) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar6;
  param_1[0x10] = param_2[0x10];
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)((longlong)param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  param_1[0x13] = param_2[0x13];
  if (puVar1 != param_2 + 0x14) {
    iVar2 = *(int *)(param_2 + 0x15);
    pvVar3 = (void *)param_2[0x14];
    *(int *)(param_1 + 0x15) = iVar2;
    if ((iVar2 == 0) && (*(int *)((longlong)param_1 + 0xac) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xac) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar3,(longlong)iVar2 << 3);
    }
  }
  puVar1 = param_1 + 0x16;
  if (puVar1 != param_2 + 0x16) {
    iVar2 = *(int *)(param_2 + 0x17);
    pvVar3 = (void *)param_2[0x16];
    *(int *)(param_1 + 0x17) = iVar2;
    if ((iVar2 == 0) && (*(int *)((longlong)param_1 + 0xbc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar3,(longlong)iVar2 << 3);
    }
  }
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  *(undefined1 *)((longlong)param_1 + 0xc1) = *(undefined1 *)((longlong)param_2 + 0xc1);
  FUN_1406d8f00(param_1 + 0x19,param_2 + 0x19);
  *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(param_2 + 0x1b);
  *(undefined1 *)((longlong)param_1 + 0xd9) = *(undefined1 *)((longlong)param_2 + 0xd9);
  TSet<TTuple<UTexture2D_const_*,FTextureInstanceView::FTextureDesc>,TDefaultMapHashableKeyFuncs<UTexture2D_const_*,FTextureInstanceView::FTextureDesc,0>,FDefaultSetAllocator>
  ::operator=(param_1 + 0x1c,param_2 + 0x1c);
  *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_2 + 0x26);
  FUN_1406d8f00(param_1 + 0x27,param_2 + 0x27);
  *(undefined1 *)(param_1 + 0x29) = *(undefined1 *)(param_2 + 0x29);
  *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)(param_2 + 0x2a);
  *(undefined1 *)((longlong)param_1 + 0x151) = *(undefined1 *)((longlong)param_2 + 0x151);
  *(undefined1 *)((longlong)param_1 + 0x152) = *(undefined1 *)((longlong)param_2 + 0x152);
  *(undefined1 *)((longlong)param_1 + 0x153) = *(undefined1 *)((longlong)param_2 + 0x153);
  *(undefined8 *)((longlong)param_1 + 0x154) = *(undefined8 *)((longlong)param_2 + 0x154);
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2d] = param_2[0x2d];
  uVar7 = param_2[0x2f];
  param_1[0x2e] = param_2[0x2e];
  param_1[0x2f] = uVar7;
  uVar7 = param_2[0x31];
  param_1[0x30] = param_2[0x30];
  param_1[0x31] = uVar7;
  uVar7 = param_2[0x33];
  param_1[0x32] = param_2[0x32];
  param_1[0x33] = uVar7;
  param_1[0x34] = param_2[0x34];
  uVar7 = param_2[0x36];
  param_1[0x35] = param_2[0x35];
  param_1[0x36] = uVar7;
  param_1[0x37] = param_2[0x37];
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)((longlong)param_1 + 0x1c4) = *(undefined4 *)((longlong)param_2 + 0x1c4);
  *(undefined4 *)(param_1 + 0x39) = *(undefined4 *)(param_2 + 0x39);
  *(undefined1 *)(param_1 + 0x3a) = *(undefined1 *)(param_2 + 0x3a);
  *(undefined8 *)((longlong)param_1 + 0x1d4) = *(undefined8 *)((longlong)param_2 + 0x1d4);
  *(undefined1 *)((longlong)param_1 + 0x1dc) = *(undefined1 *)((longlong)param_2 + 0x1dc);
  return param_1;
}



// FUNCTION 140793f90 FUN_140793f90 body=625 status=ok
// SIG undefined FUN_140793f90(void)

undefined1 * FUN_140793f90(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  param_1[0x80] = param_2[0x80];
  param_1[0x88] = param_2[0x88];
  param_1[0x89] = param_2[0x89];
  param_1[0x8a] = param_2[0x8a];
  param_1[0x8b] = param_2[0x8b];
  *(undefined8 *)(param_1 + 0x8c) = *(undefined8 *)(param_2 + 0x8c);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  uVar1 = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb0) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xc0) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xd0) = uVar1;
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  uVar1 = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xe8) = uVar1;
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
  *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_2 + 0xfc);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  param_1[0x108] = param_2[0x108];
  param_1[0x110] = param_2[0x110];
  param_1[0x111] = param_2[0x111];
  param_1[0x112] = param_2[0x112];
  param_1[0x113] = param_2[0x113];
  *(undefined8 *)(param_1 + 0x114) = *(undefined8 *)(param_2 + 0x114);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0x128);
  uVar1 = *(undefined8 *)(param_2 + 0x138);
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
  *(undefined8 *)(param_1 + 0x138) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x148);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  *(undefined8 *)(param_1 + 0x148) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x158);
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x150);
  *(undefined8 *)(param_1 + 0x158) = uVar1;
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_2 + 0x160);
  uVar1 = *(undefined8 *)(param_2 + 0x170);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  *(undefined8 *)(param_1 + 0x170) = uVar1;
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_2 + 0x178);
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 0x180);
  *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_2 + 0x184);
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_2 + 0x188);
  param_1[400] = param_2[400];
  param_1[0x191] = param_2[0x191];
  param_1[0x192] = param_2[0x192];
  return param_1;
}



// FUNCTION 140794210 FUN_140794210 body=842 status=ok
// SIG undefined FUN_140794210(void)

undefined8 * FUN_140794210(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((longlong)param_1 + 0x11) = *(undefined1 *)((longlong)param_2 + 0x11);
  *(undefined1 *)((longlong)param_1 + 0x12) = *(undefined1 *)((longlong)param_2 + 0x12);
  *(undefined1 *)((longlong)param_1 + 0x13) = *(undefined1 *)((longlong)param_2 + 0x13);
  *(undefined8 *)((longlong)param_1 + 0x14) = *(undefined8 *)((longlong)param_2 + 0x14);
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  uVar1 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  param_1[0xc] = param_2[0xc];
  uVar1 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar1;
  param_1[0xf] = param_2[0xf];
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  *(undefined1 *)((longlong)param_1 + 0x91) = *(undefined1 *)((longlong)param_2 + 0x91);
  *(undefined1 *)((longlong)param_1 + 0x92) = *(undefined1 *)((longlong)param_2 + 0x92);
  *(undefined1 *)((longlong)param_1 + 0x93) = *(undefined1 *)((longlong)param_2 + 0x93);
  *(undefined8 *)((longlong)param_1 + 0x94) = *(undefined8 *)((longlong)param_2 + 0x94);
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  uVar1 = param_2[0x17];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = uVar1;
  uVar1 = param_2[0x19];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = uVar1;
  uVar1 = param_2[0x1b];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = uVar1;
  param_1[0x1c] = param_2[0x1c];
  uVar1 = param_2[0x1e];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = uVar1;
  param_1[0x1f] = param_2[0x1f];
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x104) = *(undefined4 *)((longlong)param_2 + 0x104);
  *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x21);
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
  *(undefined1 *)((longlong)param_1 + 0x111) = *(undefined1 *)((longlong)param_2 + 0x111);
  *(undefined1 *)((longlong)param_1 + 0x112) = *(undefined1 *)((longlong)param_2 + 0x112);
  *(undefined1 *)((longlong)param_1 + 0x113) = *(undefined1 *)((longlong)param_2 + 0x113);
  *(undefined8 *)((longlong)param_1 + 0x114) = *(undefined8 *)((longlong)param_2 + 0x114);
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = param_2[0x25];
  uVar1 = param_2[0x27];
  param_1[0x26] = param_2[0x26];
  param_1[0x27] = uVar1;
  uVar1 = param_2[0x29];
  param_1[0x28] = param_2[0x28];
  param_1[0x29] = uVar1;
  uVar1 = param_2[0x2b];
  param_1[0x2a] = param_2[0x2a];
  param_1[0x2b] = uVar1;
  param_1[0x2c] = param_2[0x2c];
  uVar1 = param_2[0x2e];
  param_1[0x2d] = param_2[0x2d];
  param_1[0x2e] = uVar1;
  param_1[0x2f] = param_2[0x2f];
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)((longlong)param_1 + 0x184) = *(undefined4 *)((longlong)param_2 + 0x184);
  *(undefined4 *)(param_1 + 0x31) = *(undefined4 *)(param_2 + 0x31);
  *(undefined1 *)(param_1 + 0x32) = *(undefined1 *)(param_2 + 0x32);
  *(undefined1 *)((longlong)param_1 + 0x191) = *(undefined1 *)((longlong)param_2 + 0x191);
  *(undefined1 *)((longlong)param_1 + 0x192) = *(undefined1 *)((longlong)param_2 + 0x192);
  *(undefined1 *)((longlong)param_1 + 0x193) = *(undefined1 *)((longlong)param_2 + 0x193);
  *(undefined8 *)((longlong)param_1 + 0x194) = *(undefined8 *)((longlong)param_2 + 0x194);
  param_1[0x34] = param_2[0x34];
  param_1[0x35] = param_2[0x35];
  uVar1 = param_2[0x37];
  param_1[0x36] = param_2[0x36];
  param_1[0x37] = uVar1;
  uVar1 = param_2[0x39];
  param_1[0x38] = param_2[0x38];
  param_1[0x39] = uVar1;
  uVar1 = param_2[0x3b];
  param_1[0x3a] = param_2[0x3a];
  param_1[0x3b] = uVar1;
  param_1[0x3c] = param_2[0x3c];
  uVar1 = param_2[0x3e];
  param_1[0x3d] = param_2[0x3d];
  param_1[0x3e] = uVar1;
  param_1[0x3f] = param_2[0x3f];
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)((longlong)param_1 + 0x204) = *(undefined4 *)((longlong)param_2 + 0x204);
  *(undefined4 *)(param_1 + 0x41) = *(undefined4 *)(param_2 + 0x41);
  *(undefined1 *)(param_1 + 0x42) = *(undefined1 *)(param_2 + 0x42);
  *(undefined4 *)((longlong)param_1 + 0x214) = *(undefined4 *)((longlong)param_2 + 0x214);
  *(undefined1 *)(param_1 + 0x43) = *(undefined1 *)(param_2 + 0x43);
  return param_1;
}



// FUNCTION 1407945b0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FCullObjectsToGridCS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1406d8c70();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x158);
  }
  return param_1;
}



// FUNCTION 1407945f0 FUN_1407945f0 body=67 status=ok
// SIG undefined FUN_1407945f0(void)

longlong FUN_1407945f0(longlong param_1,ulonglong param_2)

{
  FUN_140793bf0(param_1 + 0x100);
  FUN_1406d8c70(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2e0);
  }
  return param_1;
}



// FUNCTION 140794640 FUN_140794640 body=52 status=ok
// SIG undefined FUN_140794640(void)

undefined8 FUN_140794640(undefined8 param_1,ulonglong param_2)

{
  FUN_1406d8c70();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x298);
  }
  return param_1;
}



// FUNCTION 140794680 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
BuildPatchServices::FInstallChunkSource::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  FUN_1406d8c70();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x290);
  }
  return param_1;
}



// FUNCTION 1407946c0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FShaderCompilerEnvironment::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1406d8c70();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x250);
  }
  return param_1;
}



// FUNCTION 140794700 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UItemViewerWidget::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1406d8c70();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x650);
  }
  return param_1;
}



// FUNCTION 1407947b0 FUN_1407947b0 body=103 status=ok
// SIG undefined FUN_1407947b0(void)

void FUN_1407947b0(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x50);
  *(undefined1 *)((longlong)param_2 + 9) = 0xff;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  *(undefined2 *)((longlong)param_2 + 0x18) = 0xff00;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined2 *)((longlong)param_2 + 0x28) = 0xff00;
  *(undefined4 *)((longlong)param_2 + 0x30) = 0x44fa0000;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0x40400000;
  *(undefined4 *)((longlong)param_2 + 0x38) = 0x44fa0000;
  *(undefined4 *)((longlong)param_2 + 0x3c) = 0x3f000000;
  *(undefined4 *)((longlong)param_2 + 0x40) = 0x43c80000;
  *(undefined1 *)((longlong)param_2 + 0x44) = 1;
  *(undefined4 *)((longlong)param_2 + 0x48) = 0x447a0000;
  *(undefined1 *)((longlong)param_2 + 0x4c) = 0;
  return;
}



// FUNCTION 140794840 FUN_140794840 body=57 status=ok
// SIG undefined FUN_140794840(void)

void FUN_140794840(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  FUN_142f89420((longlong)param_2 + 0xc);
  *(undefined1 *)((longlong)param_2 + 0x34) = 1;
  return;
}



// FUNCTION 140794940 FUN_140794940 body=85 status=ok
// SIG undefined FUN_140794940(void)

void FUN_140794940(longlong param_1,undefined4 *param_2)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    _guard_xfg_dispatch_icall_nop(param_2,0,0x60);
    *param_2 = 0xffffffff;
    param_2[4] = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined2 *)(param_2 + 10) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined1 *)((longlong)param_2 + 0x42) = 1;
    param_2[0xd] = 0xff7fffff;
    *(undefined8 *)(param_2 + 0x14) = 0;
    *(undefined8 *)(param_2 + 0x16) = 0;
  }
  return;
}



// FUNCTION 1407949a0 FUN_1407949a0 body=77 status=ok
// SIG undefined FUN_1407949a0(void)

void FUN_1407949a0(longlong param_1,undefined4 *param_2)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    _guard_xfg_dispatch_icall_nop(param_2,0,0x58);
    *param_2 = 0xffffffff;
    param_2[4] = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined2 *)(param_2 + 10) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined1 *)((longlong)param_2 + 0x42) = 1;
    param_2[0xd] = 0xff7fffff;
  }
  return;
}



// FUNCTION 1407949f0 FUN_1407949f0 body=88 status=ok
// SIG undefined FUN_1407949f0(void)

void FUN_1407949f0(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1406d4f00(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 100) = DAT_146239c60;
    *(undefined4 *)(param_2 + 0x6c) = DAT_146239c68;
    *(undefined8 *)(param_2 + 0x70) = DAT_146239c60;
    *(undefined4 *)(param_2 + 0x78) = DAT_146239c68;
    *(undefined4 *)(param_2 + 0x7c) = 0xbf800000;
  }
  return;
}



// FUNCTION 140794a50 FUN_140794a50 body=80 status=ok
// SIG undefined FUN_140794a50(void)

void FUN_140794a50(longlong param_1,undefined4 *param_2)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    _guard_xfg_dispatch_icall_nop(param_2,0,0x50);
    *param_2 = 0xffffffff;
    param_2[4] = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined2 *)(param_2 + 10) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined1 *)((longlong)param_2 + 0x42) = 1;
    param_2[0xd] = 0xff7fffff;
    *(undefined1 *)(param_2 + 0x12) = 0;
  }
  return;
}



// FUNCTION 140794b60 Copy body=74 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FAnimNode_TwoBoneIK>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_140793c80(param_2 + param_3,param_3);
      param_3 = param_3 + 0x1e0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 140794bb0 FUN_140794bb0 body=74 status=ok
// SIG undefined FUN_140794bb0(void)

undefined1 FUN_140794bb0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_140793f90(param_2 + param_3,param_3);
      param_3 = param_3 + 0x198;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 140795080 Copy body=74 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FAnimNode_LookAt>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_140794210(param_2 + param_3,param_3);
      param_3 = param_3 + 0x220;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1407950d0 FUN_1407950d0 body=235 status=ok
// SIG undefined FUN_1407950d0(void)

undefined8 FUN_1407950d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined1 *)(param_2 + 2);
    do {
      puVar1[-2] = puVar1[param_3 + -2];
      puVar1[-1] = puVar1[param_3 + -1];
      *puVar1 = puVar1[param_3];
      *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(puVar1 + param_3 + 2);
      puVar1[6] = puVar1[param_3 + 6];
      FUN_1406d9960(puVar1 + 0xe,puVar1 + param_3 + 0xe);
      puVar1[0x1c6] = puVar1[param_3 + 0x1c6];
      FUN_1406d9960(puVar1 + 0x1ce,puVar1 + param_3 + 0x1ce);
      puVar1[0x386] = puVar1[param_3 + 0x386];
      FUN_1406d9960(puVar1 + 0x38e,puVar1 + param_3 + 0x38e);
      puVar1[0x546] = puVar1[param_3 + 0x546];
      puVar1[0x547] = puVar1[param_3 + 0x547];
      puVar1 = puVar1 + 0x550;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1407951c0 Copy body=74 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FWrestlerSave>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_1406d9960(param_2 + param_3,param_3);
      param_3 = param_3 + 0x1b8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 140795220 FUN_140795220 body=97 status=ok
// SIG undefined FUN_140795220(void)

void FUN_140795220(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    plVar3 = *(longlong **)(param_2 + 0x58);
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
    *(undefined1 *)(param_2 + 0x42) = 0;
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 8);
    return;
  }
  return;
}



// FUNCTION 1407952b0 FUN_1407952b0 body=55 status=ok
// SIG undefined FUN_1407952b0(void)

void FUN_1407952b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14685a0e0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a0e0 =
         GetStaticEnum(FUN_140796060,uVar1,L"EAIAspectSettingsDefaults_Rotation_BodyHeadingOffset");
  }
  return;
}



// FUNCTION 1407952f0 FUN_1407952f0 body=55 status=ok
// SIG undefined FUN_1407952f0(void)

void FUN_1407952f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14685a0d8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a0d8 = GetStaticEnum(FUN_140796030,uVar1,L"EAIAspectSettingsDefaults_Rotation");
  }
  return;
}



// FUNCTION 140795330 FUN_140795330 body=55 status=ok
// SIG undefined FUN_140795330(void)

void FUN_140795330(void)

{
  undefined8 uVar1;
  
  if (DAT_14685a0d0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a0d0 = GetStaticEnum(FUN_140796090,uVar1,L"EOrbitDirection");
  }
  return;
}



// FUNCTION 140795390 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUserWidget::GetPrivateStaticClass(void)

{
  if (DAT_14685a3d0 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_Navigation",&DAT_14685a3d0,FUN_1407956d0,0x240,
                  0x10000001,0,L"Engine",FUN_140793b00,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_14685a3d0;
}


