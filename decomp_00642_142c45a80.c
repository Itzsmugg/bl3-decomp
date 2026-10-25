// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142c45a80 execRunEQSQuery body=397 status=ok
// SIG undefined execRunEQSQuery(void)

void UEnvQueryManager::execRunEQSQuery(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined8 local_res20;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28 [2];
  
  local_28[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_30 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_30);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res18[0] = local_res10[0];
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142bef4b0(local_28[0],local_30,local_38,local_res18,local_res20);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142c45c10 execSetLocalNavigationGridDensity body=195 status=ok
// SIG undefined execSetLocalNavigationGridDensity(void)

void UNavLocalGridManager::execSetLocalNavigationGridDensity
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  
  local_res18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
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
  uVar1 = SetLocalNavigationGridDensity(local_res18,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142c45ce0 FUN_142c45ce0 body=130 status=ok
// SIG undefined FUN_142c45ce0(void)

void FUN_142c45ce0(undefined8 param_1,longlong param_2)

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
  FUN_142c15630(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 142c45d70 FUN_142c45d70 body=47 status=ok
// SIG undefined FUN_142c45d70(void)

longlong FUN_142c45d70(void)

{
  if (DAT_146b2e340 == 0) {
    FUN_141786440(&DAT_146b2e340,&PTR_LAB_14582f8c0);
  }
  return DAT_146b2e340;
}



// FUNCTION 142c45da0 FUN_142c45da0 body=47 status=ok
// SIG undefined FUN_142c45da0(void)

longlong FUN_142c45da0(void)

{
  if (DAT_146b2e320 == 0) {
    FUN_141786a30(&DAT_146b2e320,&PTR_FUN_1466a8410);
  }
  return DAT_146b2e320;
}



// FUNCTION 142c45dd0 FUN_142c45dd0 body=47 status=ok
// SIG undefined FUN_142c45dd0(void)

longlong FUN_142c45dd0(void)

{
  if (DAT_146b2e328 == 0) {
    FUN_141786a30(&DAT_146b2e328,&PTR_FUN_1466a8490);
  }
  return DAT_146b2e328;
}



// FUNCTION 142c45e00 FUN_142c45e00 body=47 status=ok
// SIG undefined FUN_142c45e00(void)

longlong FUN_142c45e00(void)

{
  if (DAT_146b2e330 == 0) {
    FUN_141786a30(&DAT_146b2e330,&PTR_FUN_1466a85d0);
  }
  return DAT_146b2e330;
}



// FUNCTION 142c45e30 FUN_142c45e30 body=47 status=ok
// SIG undefined FUN_142c45e30(void)

longlong FUN_142c45e30(void)

{
  if (DAT_146b2e338 == 0) {
    FUN_141786a30(&DAT_146b2e338,&PTR_FUN_1466a8650);
  }
  return DAT_146b2e338;
}



// FUNCTION 142c45e70 FUN_142c45e70 body=47 status=ok
// SIG undefined FUN_142c45e70(void)

longlong FUN_142c45e70(void)

{
  if (DAT_146b2e458 == 0) {
    FUN_141786440(&DAT_146b2e458,&PTR_GetPrivateStaticClass_14582fdb0);
  }
  return DAT_146b2e458;
}



// FUNCTION 142c45ea0 FUN_142c45ea0 body=47 status=ok
// SIG undefined FUN_142c45ea0(void)

longlong FUN_142c45ea0(void)

{
  if (DAT_146b2e438 == 0) {
    FUN_141786a30(&DAT_146b2e438,&PTR_FUN_1466a96d0);
  }
  return DAT_146b2e438;
}



// FUNCTION 142c45ed0 FUN_142c45ed0 body=47 status=ok
// SIG undefined FUN_142c45ed0(void)

longlong FUN_142c45ed0(void)

{
  if (DAT_146b2e440 == 0) {
    FUN_141786a30(&DAT_146b2e440,&PTR_FUN_1466a9790);
  }
  return DAT_146b2e440;
}



// FUNCTION 142c45f00 FUN_142c45f00 body=47 status=ok
// SIG undefined FUN_142c45f00(void)

longlong FUN_142c45f00(void)

{
  if (DAT_146b2e448 == 0) {
    FUN_141786a30(&DAT_146b2e448,&PTR_FUN_1466a98e0);
  }
  return DAT_146b2e448;
}



// FUNCTION 142c45f30 FUN_142c45f30 body=47 status=ok
// SIG undefined FUN_142c45f30(void)

longlong FUN_142c45f30(void)

{
  if (DAT_146b2e450 == 0) {
    FUN_141786a30(&DAT_146b2e450,&PTR_FUN_1466a9a30);
  }
  return DAT_146b2e450;
}



// FUNCTION 142c45f60 FUN_142c45f60 body=53 status=ok
// SIG undefined FUN_142c45f60(void)

void FUN_142c45f60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_145831b40;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142c45fb0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UEnvQueryTest_Random::StaticClass(void)

{
  if (DAT_146b2e4a8 == 0) {
    FUN_14171ccd0(L"/Script/AIModule",L"PawnSensingComponent",&DAT_146b2e4a8,FUN_142c47080,0x1c0,
                  0x10000000,0,L"Engine",&LAB_142c46b70,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_146b2e4a8;
}



// FUNCTION 142c46060 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong UPathFollowingManager::StaticClass(void)

{
  if (DAT_146b2e358 == 0) {
    FUN_14171ccd0(L"/Script/AIModule",L"PathFollowingManager",&DAT_146b2e358,FUN_140447710,0x28,
                  0x10000000,0,L"Engine",&LAB_142c46a70,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b2e358;
}



// FUNCTION 142c46110 FUN_142c46110 body=47 status=ok
// SIG undefined FUN_142c46110(void)

longlong FUN_142c46110(void)

{
  if (DAT_146b2e468 == 0) {
    FUN_141786a30(&DAT_146b2e468,&PTR_FUN_1466a9cd0);
  }
  return DAT_146b2e468;
}



// FUNCTION 142c46140 FUN_142c46140 body=47 status=ok
// SIG undefined FUN_142c46140(void)

longlong FUN_142c46140(void)

{
  if (DAT_146b2e4a0 == 0) {
    FUN_141786440(&DAT_146b2e4a0,&PTR_StaticClass_145830410);
  }
  return DAT_146b2e4a0;
}



// FUNCTION 142c46170 FUN_142c46170 body=47 status=ok
// SIG undefined FUN_142c46170(void)

longlong FUN_142c46170(void)

{
  if (DAT_146b2e470 == 0) {
    FUN_141786a30(&DAT_146b2e470,&PTR_FUN_1466a9d50);
  }
  return DAT_146b2e470;
}



// FUNCTION 142c461a0 FUN_142c461a0 body=47 status=ok
// SIG undefined FUN_142c461a0(void)

longlong FUN_142c461a0(void)

{
  if (DAT_146b2e478 == 0) {
    FUN_141786a30(&DAT_146b2e478,&PTR_FUN_1466a9dd0);
  }
  return DAT_146b2e478;
}



// FUNCTION 142c461d0 FUN_142c461d0 body=47 status=ok
// SIG undefined FUN_142c461d0(void)

longlong FUN_142c461d0(void)

{
  if (DAT_146b2e480 == 0) {
    FUN_141786a30(&DAT_146b2e480,&PTR_FUN_1466a9e50);
  }
  return DAT_146b2e480;
}



// FUNCTION 142c46200 FUN_142c46200 body=47 status=ok
// SIG undefined FUN_142c46200(void)

longlong FUN_142c46200(void)

{
  if (DAT_146b2e488 == 0) {
    FUN_141786a30(&DAT_146b2e488,&PTR_FUN_1466a9ed0);
  }
  return DAT_146b2e488;
}



// FUNCTION 142c46230 FUN_142c46230 body=47 status=ok
// SIG undefined FUN_142c46230(void)

longlong FUN_142c46230(void)

{
  if (DAT_146b2e490 == 0) {
    FUN_141786a30(&DAT_146b2e490,&PTR_FUN_1466a9f50);
  }
  return DAT_146b2e490;
}



// FUNCTION 142c46260 FUN_142c46260 body=47 status=ok
// SIG undefined FUN_142c46260(void)

longlong FUN_142c46260(void)

{
  if (DAT_146b2e498 == 0) {
    FUN_141786a30(&DAT_146b2e498,&PTR_FUN_1466a9fe0);
  }
  return DAT_146b2e498;
}



// FUNCTION 142c462a0 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong UVisualLoggerExtension::StaticClass(void)

{
  if (DAT_146b2e4b8 == 0) {
    FUN_14171ccd0(L"/Script/AIModule",L"VisualLoggerExtension",&DAT_146b2e4b8,FUN_140447710,0x28,
                  0x10000001,0,L"Engine",FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b2e4b8;
}



// FUNCTION 142c46350 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UPawnAction::GetPrivateStaticClass(void)

{
  if (DAT_146b2e390 == 0) {
    FUN_14171ccd0(L"/Script/AIModule",L"PawnAction",&DAT_146b2e390,StaticRegisterNativesUPawnAction,
                  0x98,0x10000001,0,L"Engine",&LAB_142c46a90,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b2e390;
}



// FUNCTION 142c463f0 FUN_142c463f0 body=47 status=ok
// SIG undefined FUN_142c463f0(void)

longlong FUN_142c463f0(void)

{
  if (DAT_146b2e388 == 0) {
    FUN_141786440(&DAT_146b2e388,&PTR_GetPrivateStaticClass_145830bf0);
  }
  return DAT_146b2e388;
}



// FUNCTION 142c46420 FUN_142c46420 body=47 status=ok
// SIG undefined FUN_142c46420(void)

longlong FUN_142c46420(void)

{
  if (DAT_146b2e370 == 0) {
    FUN_141786a30(&DAT_146b2e370,&PTR_FUN_1466a8830);
  }
  return DAT_146b2e370;
}



// FUNCTION 142c46450 FUN_142c46450 body=47 status=ok
// SIG undefined FUN_142c46450(void)

longlong FUN_142c46450(void)

{
  if (DAT_146b2e378 == 0) {
    FUN_141786a30(&DAT_146b2e378,&PTR_FUN_1466a88b0);
  }
  return DAT_146b2e378;
}



// FUNCTION 142c46480 FUN_142c46480 body=47 status=ok
// SIG undefined FUN_142c46480(void)

longlong FUN_142c46480(void)

{
  if (DAT_146b2e380 == 0) {
    FUN_141786a30(&DAT_146b2e380,&PTR_FUN_1466a8930);
  }
  return DAT_146b2e380;
}



// FUNCTION 142c464c0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UPawnAction_BlueprintBase::GetPrivateStaticClass(void)

{
  if (DAT_146b2e3c8 == 0) {
    FUN_14171ccd0(L"/Script/AIModule",L"PawnAction_BlueprintBase",&DAT_146b2e3c8,FUN_140447710,0x98,
                  0x10000001,0,L"Engine",&LAB_142c46ab0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPawnAction::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b2e3c8;
}



// FUNCTION 142c46570 FUN_142c46570 body=47 status=ok
// SIG undefined FUN_142c46570(void)

longlong FUN_142c46570(void)

{
  if (DAT_146b2e3c0 == 0) {
    FUN_141786440(&DAT_146b2e3c0,&PTR_GetPrivateStaticClass_145830f70);
  }
  return DAT_146b2e3c0;
}



// FUNCTION 142c465a0 FUN_142c465a0 body=47 status=ok
// SIG undefined FUN_142c465a0(void)

longlong FUN_142c465a0(void)

{
  if (DAT_146b2e398 == 0) {
    FUN_141786a30(&DAT_146b2e398,&PTR_FUN_1466a8ca0);
  }
  return DAT_146b2e398;
}



// FUNCTION 142c465d0 FUN_142c465d0 body=47 status=ok
// SIG undefined FUN_142c465d0(void)

longlong FUN_142c465d0(void)

{
  if (DAT_146b2e3a0 == 0) {
    FUN_141786a30(&DAT_146b2e3a0,&PTR_FUN_1466a8d20);
  }
  return DAT_146b2e3a0;
}



// FUNCTION 142c46600 FUN_142c46600 body=47 status=ok
// SIG undefined FUN_142c46600(void)

longlong FUN_142c46600(void)

{
  if (DAT_146b2e3a8 == 0) {
    FUN_141786a30(&DAT_146b2e3a8,&PTR_FUN_1466a8da0);
  }
  return DAT_146b2e3a8;
}



// FUNCTION 142c46630 FUN_142c46630 body=47 status=ok
// SIG undefined FUN_142c46630(void)

longlong FUN_142c46630(void)

{
  if (DAT_146b2e3b0 == 0) {
    FUN_141786a30(&DAT_146b2e3b0,&PTR_FUN_1466a8e20);
  }
  return DAT_146b2e3b0;
}



// FUNCTION 142c46660 FUN_142c46660 body=47 status=ok
// SIG undefined FUN_142c46660(void)

longlong FUN_142c46660(void)

{
  if (DAT_146b2e3b8 == 0) {
    FUN_141786a30(&DAT_146b2e3b8,&PTR_FUN_1466a8ee0);
  }
  return DAT_146b2e3b8;
}



// FUNCTION 142c466a0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UPawnAction_Move::StaticClass(void)

{
  if (DAT_146b2e3e0 == 0) {
    FUN_14171ccd0(L"/Script/AIModule",L"PawnAction_Move",&DAT_146b2e3e0,FUN_140447710,0xe8,
                  0x10000000,0,L"Engine",&LAB_142c46ad0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPawnAction::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b2e3e0;
}



// FUNCTION 142c46760 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UPawnAction_Repeat::StaticClass(void)

{
  if (DAT_146b2e3f0 == 0) {
    FUN_14171ccd0(L"/Script/AIModule",L"PawnAction_Repeat",&DAT_146b2e3f0,FUN_140447710,0xb8,
                  0x10000000,0,L"Engine",&LAB_142c46af0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPawnAction::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b2e3f0;
}



// FUNCTION 142c46820 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UPawnAction_Sequence::StaticClass(void)

{
  if (DAT_146b2e400 == 0) {
    FUN_14171ccd0(L"/Script/AIModule",L"PawnAction_Sequence",&DAT_146b2e400,FUN_140447710,0xc0,
                  0x10000000,0,L"Engine",&LAB_142c46b10,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPawnAction::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b2e400;
}



// FUNCTION 142c468e0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UPawnAction_Wait::StaticClass(void)

{
  if (DAT_146b2e410 == 0) {
    FUN_14171ccd0(L"/Script/AIModule",L"PawnAction_Wait",&DAT_146b2e410,FUN_140447710,0xa8,
                  0x10000000,0,L"Engine",&LAB_142c46b30,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPawnAction::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b2e410;
}



// FUNCTION 142c469a0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UThrobber::GetPrivateStaticClass(void)

{
  if (DAT_146b2e460 == 0) {
    FUN_14171ccd0(L"/Script/AIModule",L"PawnActionsComponent",&DAT_146b2e460,
                  StaticRegisterNativesUThrobber,0x1b0,0x10000000,0,L"Engine",&LAB_142c46b50,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_146b2e460;
}



// FUNCTION 142c46b90 FUN_142c46b90 body=66 status=ok
// SIG undefined FUN_142c46b90(void)

void FUN_142c46b90(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined1 local_10;
  
  lVar1 = *param_1;
  local_18 = param_2;
  local_10 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_146b2e2c8);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_18);
  return;
}



// FUNCTION 142c46be0 FUN_142c46be0 body=61 status=ok
// SIG undefined FUN_142c46be0(void)

void FUN_142c46be0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_146b2e2d0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 142c46c20 FUN_142c46c20 body=61 status=ok
// SIG undefined FUN_142c46c20(void)

void FUN_142c46c20(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_146b2e2d8);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 142c46c60 FUN_142c46c60 body=61 status=ok
// SIG undefined FUN_142c46c60(void)

void FUN_142c46c60(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_146b2e2e0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 142c46ca0 FUN_142c46ca0 body=67 status=ok
// SIG undefined FUN_142c46ca0(void)

void FUN_142c46ca0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar1 = *param_1;
  local_18 = param_2;
  local_10 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_146b2e2e8);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_18);
  return;
}



// FUNCTION 142c46d10 EPathFollowingAction_StaticEnum body=55 status=ok
// SIG undefined EPathFollowingAction_StaticEnum(void)

void EPathFollowingAction_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b2e258 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AIModule();
    DAT_146b2e258 = GetStaticEnum(FUN_142c47290,uVar1,L"EPathFollowingAction");
  }
  return;
}



// FUNCTION 142c46d50 EPathFollowingRequestResult_StaticEnum body=55 status=ok
// SIG undefined EPathFollowingRequestResult_StaticEnum(void)

void EPathFollowingRequestResult_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b2e250 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AIModule();
    DAT_146b2e250 = GetStaticEnum(FUN_142c472c0,uVar1,L"EPathFollowingRequestResult");
  }
  return;
}



// FUNCTION 142c46d90 EPathFollowingResult_StaticEnum body=55 status=ok
// SIG undefined EPathFollowingResult_StaticEnum(void)

void EPathFollowingResult_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b2e260 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AIModule();
    DAT_146b2e260 = GetStaticEnum(FUN_142c472f0,uVar1,L"EPathFollowingResult");
  }
  return;
}



// FUNCTION 142c46dd0 FUN_142c46dd0 body=55 status=ok
// SIG undefined FUN_142c46dd0(void)

void FUN_142c46dd0(void)

{
  undefined8 uVar1;
  
  if (DAT_146b2e268 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AIModule();
    DAT_146b2e268 = GetStaticEnum(FUN_142c47320,uVar1,L"EPathFollowingStatus");
  }
  return;
}



// FUNCTION 142c46e10 EPawnActionFailHandling_StaticEnum body=55 status=ok
// SIG undefined EPawnActionFailHandling_StaticEnum(void)

void EPawnActionFailHandling_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b2e270 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AIModule();
    DAT_146b2e270 = GetStaticEnum(FUN_142c47350,uVar1,L"EPawnActionFailHandling");
  }
  return;
}



// FUNCTION 142c46e50 EPawnActionMoveMode_StaticEnum body=55 status=ok
// SIG undefined EPawnActionMoveMode_StaticEnum(void)

void EPawnActionMoveMode_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b2e280 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AIModule();
    DAT_146b2e280 = GetStaticEnum(FUN_142c47380,uVar1,L"EPawnActionMoveMode");
  }
  return;
}



// FUNCTION 142c46e90 EPawnSubActionTriggeringPolicy_StaticEnum body=55 status=ok
// SIG undefined EPawnSubActionTriggeringPolicy_StaticEnum(void)

void EPawnSubActionTriggeringPolicy_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b2e278 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AIModule();
    DAT_146b2e278 = GetStaticEnum(FUN_142c473b0,uVar1,L"EPawnSubActionTriggeringPolicy");
  }
  return;
}



// FUNCTION 142c46ed0 FUN_142c46ed0 body=162 status=ok
// SIG undefined FUN_142c46ed0(void)

longlong FUN_142c46ed0(void)

{
  if (DAT_146b2e348 == 0) {
    FUN_14171ccd0(L"/Script/AIModule",L"PathFollowingComponent",&DAT_146b2e348,FUN_142c46ff0,0x350,
                  0x10000000,0,L"Engine",&LAB_142c46a50,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_146b2e348;
}



// FUNCTION 142c46f80 Get_Z_Construct_UScriptStruct_FPawnActionEvent_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FPawnActionEvent_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FPawnActionEvent_CRC(void)

{
  return 0x7c061928;
}



// FUNCTION 142c46f90 Get_Z_Construct_UScriptStruct_FPawnActionStack_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FPawnActionStack_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FPawnActionStack_CRC(void)

{
  return 0x3fb542f1;
}



// FUNCTION 142c46ff0 FUN_142c46ff0 body=34 status=ok
// SIG undefined FUN_142c46ff0(void)

void FUN_142c46ff0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142c46ed0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetPathActionType_145831a70,4);
  return;
}



// FUNCTION 142c47020 StaticRegisterNativesUPawnAction body=34 status=ok
// SIG undefined StaticRegisterNativesUPawnAction(void)

void UPawnAction::StaticRegisterNativesUPawnAction(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_CreateActionInstance_145831af0,3);
  return;
}



// FUNCTION 142c47050 StaticRegisterNativesUThrobber body=34 status=ok
// SIG undefined StaticRegisterNativesUThrobber(void)

void UThrobber::StaticRegisterNativesUThrobber(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_K2_AbortAction_145831c60,4);
  return;
}



// FUNCTION 142c47080 FUN_142c47080 body=34 status=ok
// SIG undefined FUN_142c47080(void)

void FUN_142c47080(void)

{
  undefined8 uVar1;
  
  uVar1 = UEnvQueryTest_Random::StaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetPeripheralVisionAngle_145831ca0,5);
  return;
}



// FUNCTION 142c470b0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FPawnActionEvent::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b2e428 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FPawnActionEvent_CRC();
    uVar2 = Z_Construct_UPackage__Script_AIModule();
    DAT_146b2e428 = GetStaticStruct(FUN_142c473e0,uVar2,L"PawnActionEvent",0x18,uVar1);
  }
  return;
}



// FUNCTION 142c47110 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FPawnActionStack::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b2e418 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FPawnActionStack_CRC();
    uVar2 = Z_Construct_UPackage__Script_AIModule();
    DAT_146b2e418 = GetStaticStruct(FUN_142c47410,uVar2,L"PawnActionStack",8,uVar1);
  }
  return;
}



// FUNCTION 142c47170 FUN_142c47170 body=47 status=ok
// SIG undefined FUN_142c47170(void)

longlong FUN_142c47170(void)

{
  if (DAT_146b2e350 == 0) {
    FUN_141786440(&DAT_146b2e350,&PTR_StaticClass_14582ff90);
  }
  return DAT_146b2e350;
}



// FUNCTION 142c471a0 FUN_142c471a0 body=47 status=ok
// SIG undefined FUN_142c471a0(void)

longlong FUN_142c471a0(void)

{
  if (DAT_146b2e3d8 == 0) {
    FUN_141786440(&DAT_146b2e3d8,&PTR_StaticClass_145831280);
  }
  return DAT_146b2e3d8;
}



// FUNCTION 142c471d0 FUN_142c471d0 body=47 status=ok
// SIG undefined FUN_142c471d0(void)

longlong FUN_142c471d0(void)

{
  if (DAT_146b2e3e8 == 0) {
    FUN_141786440(&DAT_146b2e3e8,&PTR_StaticClass_145831460);
  }
  return DAT_146b2e3e8;
}



// FUNCTION 142c47200 FUN_142c47200 body=47 status=ok
// SIG undefined FUN_142c47200(void)

longlong FUN_142c47200(void)

{
  if (DAT_146b2e3f8 == 0) {
    FUN_141786440(&DAT_146b2e3f8,&PTR_StaticClass_1458315d0);
  }
  return DAT_146b2e3f8;
}



// FUNCTION 142c47230 FUN_142c47230 body=47 status=ok
// SIG undefined FUN_142c47230(void)

longlong FUN_142c47230(void)

{
  if (DAT_146b2e408 == 0) {
    FUN_141786440(&DAT_146b2e408,&PTR_StaticClass_145831750);
  }
  return DAT_146b2e408;
}



// FUNCTION 142c47260 FUN_142c47260 body=47 status=ok
// SIG undefined FUN_142c47260(void)

longlong FUN_142c47260(void)

{
  if (DAT_146b2e4b0 == 0) {
    FUN_141786440(&DAT_146b2e4b0,&PTR_StaticClass_1458306e0);
  }
  return DAT_146b2e4b0;
}



// FUNCTION 142c47290 FUN_142c47290 body=47 status=ok
// SIG undefined FUN_142c47290(void)

longlong FUN_142c47290(void)

{
  if (DAT_146b2e308 == 0) {
    FUN_1417866a0(&DAT_146b2e308,&PTR_Z_Construct_UPackage__Script_AIModule_1466aa410);
  }
  return DAT_146b2e308;
}



// FUNCTION 142c472c0 FUN_142c472c0 body=47 status=ok
// SIG undefined FUN_142c472c0(void)

longlong FUN_142c472c0(void)

{
  if (DAT_146b2e300 == 0) {
    FUN_1417866a0(&DAT_146b2e300,&PTR_Z_Construct_UPackage__Script_AIModule_1466aa3c0);
  }
  return DAT_146b2e300;
}



// FUNCTION 142c472f0 FUN_142c472f0 body=47 status=ok
// SIG undefined FUN_142c472f0(void)

longlong FUN_142c472f0(void)

{
  if (DAT_146b2e310 == 0) {
    FUN_1417866a0(&DAT_146b2e310,&PTR_Z_Construct_UPackage__Script_AIModule_1466aa460);
  }
  return DAT_146b2e310;
}



// FUNCTION 142c47320 FUN_142c47320 body=47 status=ok
// SIG undefined FUN_142c47320(void)

longlong FUN_142c47320(void)

{
  if (DAT_146b2e318 == 0) {
    FUN_1417866a0(&DAT_146b2e318,&PTR_Z_Construct_UPackage__Script_AIModule_1466aa4b0);
  }
  return DAT_146b2e318;
}



// FUNCTION 142c47350 FUN_142c47350 body=47 status=ok
// SIG undefined FUN_142c47350(void)

longlong FUN_142c47350(void)

{
  if (DAT_146b2e360 == 0) {
    FUN_1417866a0(&DAT_146b2e360,&PTR_Z_Construct_UPackage__Script_AIModule_1466aa500);
  }
  return DAT_146b2e360;
}



// FUNCTION 142c47380 FUN_142c47380 body=47 status=ok
// SIG undefined FUN_142c47380(void)

longlong FUN_142c47380(void)

{
  if (DAT_146b2e3d0 == 0) {
    FUN_1417866a0(&DAT_146b2e3d0,&PTR_Z_Construct_UPackage__Script_AIModule_1466aa5a0);
  }
  return DAT_146b2e3d0;
}



// FUNCTION 142c473b0 FUN_142c473b0 body=47 status=ok
// SIG undefined FUN_142c473b0(void)

longlong FUN_142c473b0(void)

{
  if (DAT_146b2e368 == 0) {
    FUN_1417866a0(&DAT_146b2e368,&PTR_Z_Construct_UPackage__Script_AIModule_1466aa550);
  }
  return DAT_146b2e368;
}



// FUNCTION 142c473e0 FUN_142c473e0 body=47 status=ok
// SIG undefined FUN_142c473e0(void)

longlong FUN_142c473e0(void)

{
  if (DAT_146b2e430 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b2e430,&PTR_Z_Construct_UPackage__Script_AIModule_1466a9600);
  }
  return DAT_146b2e430;
}



// FUNCTION 142c47410 FUN_142c47410 body=47 status=ok
// SIG undefined FUN_142c47410(void)

longlong FUN_142c47410(void)

{
  if (DAT_146b2e420 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b2e420,&PTR_Z_Construct_UPackage__Script_AIModule_1466a9570);
  }
  return DAT_146b2e420;
}



// FUNCTION 142c47440 execCreateActionInstance body=191 status=ok
// SIG undefined execCreateActionInstance(void)

void UPawnAction::execCreateActionInstance(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  uVar1 = CreateActionInstance(local_res18,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142c47500 FUN_142c47500 body=131 status=ok
// SIG undefined FUN_142c47500(void)

void FUN_142c47500(longlong *param_1,longlong param_2)

{
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_res10[0] = local_res8[0];
  (**(code **)(*param_1 + 0x288))(param_1,local_res10);
  return;
}



// FUNCTION 142c475b0 FUN_142c475b0 body=43 status=ok
// SIG undefined FUN_142c475b0(void)

void FUN_142c475b0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142c08ce0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142c475e0 FUN_142c475e0 body=60 status=ok
// SIG undefined FUN_142c475e0(void)

void FUN_142c475e0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_142c08d90(param_1,local_18);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142c47660 FUN_142c47660 body=143 status=ok
// SIG undefined FUN_142c47660(void)

void FUN_142c47660(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_142bc2030(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142c476f0 execK2_ForceAbortAction body=143 status=ok
// SIG undefined execK2_ForceAbortAction(void)

void UPawnActionsComponent::execK2_ForceAbortAction
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = K2_ForceAbortAction(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142c47780 execK2_PerformAction body=247 status=ok
// SIG undefined execK2_PerformAction(void)

void UPawnActionsComponent::execK2_PerformAction
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined8 local_res20;
  undefined8 local_28 [2];
  
  local_28[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
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
  local_res18[0] = local_res10[0];
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142bc20e0(local_28[0],local_res20,local_res18);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142c47880 execK2_PushAction body=254 status=ok
// SIG undefined execK2_PushAction(void)

void UPawnActionsComponent::execK2_PushAction
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 local_res10 [8];
  undefined8 local_res18;
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
  local_res18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142bc2170(param_1,local_res20,local_res10[0],local_res18);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142c47980 FUN_142c47980 body=408 status=ok
// SIG undefined FUN_142c47980(void)

void FUN_142c47980(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [12];
  undefined4 local_8c;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_res8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res8);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
  local_8c = 0x3f800000;
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
  local_a8 = local_b8;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_a0 = local_b0;
  (**(code **)(*param_1 + 0x498))(param_1,local_res10,local_res8,&local_a8,puVar1);
  return;
}



// FUNCTION 142c47b20 FUN_142c47b20 body=128 status=ok
// SIG undefined FUN_142c47b20(void)

void FUN_142c47b20(undefined8 param_1,longlong param_2)

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
  FUN_142c0ba10(param_1,local_res10);
  return;
}



// FUNCTION 142c47ba0 FUN_142c47ba0 body=127 status=ok
// SIG undefined FUN_142c47ba0(void)

void FUN_142c47ba0(longlong *param_1,longlong param_2)

{
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x408))(param_1,local_res8[0]);
  return;
}



// FUNCTION 142c47c20 execSetKillRadius body=127 status=ok
// SIG undefined execSetKillRadius(void)

void UCheatManagerGunfire::execSetKillRadius(longlong *param_1,longlong param_2)

{
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x3f8))(param_1,local_res8[0]);
  return;
}



// FUNCTION 142c47ca0 FUN_142c47ca0 body=134 status=ok
// SIG undefined FUN_142c47ca0(void)

void FUN_142c47ca0(longlong *param_1,longlong param_2)

{
  int local_res8 [2];
  
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x400))(param_1,local_res8[0] != 0);
  return;
}



// FUNCTION 142c47d30 FUN_142c47d30 body=581 status=ok
// SIG undefined FUN_142c47d30(void)

void FUN_142c47d30(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_143fca720;
    plVar2[1] = (longlong)AK::MemoryMgr::StartProfileThreadUsage;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[3] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_143fca768;
  }
  lVar7 = 0;
  lVar3 = lVar7;
  if (plVar2 != (longlong *)0x0) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af778,1);
    plVar4 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8);
    iVar1 = DAT_1464af780;
    lVar6 = (longlong)DAT_1464af780;
    lVar3 = *plVar4;
    DAT_1464af780 = DAT_1464af780 + 1;
    if (DAT_1464af784 < DAT_1464af780) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af778,iVar1);
    }
    puVar5 = (undefined8 *)(lVar6 * 0x10 + DAT_1464af778);
    *puVar5 = plVar2;
    *(undefined4 *)(puVar5 + 1) = 2;
  }
  *(longlong *)(param_1 + 8) = lVar3;
  lVar3 = FUN_142c497e0();
  iVar1 = *(int *)(lVar3 + 8) + -1;
  if (*(int *)(lVar3 + 8) == 0) {
    iVar1 = 0;
  }
  lVar3 = DAT_146b2e4f8;
  if ((iVar1 != 0) && (DAT_146b2e4f0 == 0)) {
    plVar2 = (longlong *)FMemory::Realloc(0,0x20);
    lVar3 = lVar7;
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_GetPoolName_143f4c9a8;
      plVar2[1] = (longlong)FUN_142c49880;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[3] = lVar3;
      *plVar2 = (longlong)&PTR_GetPoolName_143f4c9f0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af790,1);
      plVar4 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8);
      iVar1 = DAT_1464af798;
      lVar6 = (longlong)DAT_1464af798;
      lVar3 = *plVar4;
      DAT_1464af798 = DAT_1464af798 + 1;
      if (DAT_1464af79c < DAT_1464af798) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af790,iVar1);
      }
      puVar5 = (undefined8 *)(lVar6 * 0x10 + DAT_1464af790);
      *puVar5 = plVar2;
      *(undefined4 *)(puVar5 + 1) = 2;
    }
    DAT_146b2e4f0 = lVar3;
    plVar2 = (longlong *)FMemory::Realloc(0,0x20);
    lVar3 = lVar7;
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_GetPoolName_143f3f048;
      plVar2[1] = (longlong)AK::MemoryMgr::StartProfileThreadUsage;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[3] = lVar3;
      *plVar2 = (longlong)&PTR_GetPoolName_143f3f090;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af010,1);
      plVar4 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8);
      iVar1 = DAT_1464af018;
      lVar7 = (longlong)DAT_1464af018;
      lVar3 = *plVar4;
      DAT_1464af018 = DAT_1464af018 + 1;
      if (DAT_1464af01c < DAT_1464af018) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af010,iVar1);
      }
      puVar5 = (undefined8 *)(lVar7 * 0x10 + DAT_1464af010);
      *puVar5 = plVar2;
      *(undefined4 *)(puVar5 + 1) = 2;
    }
  }
  DAT_146b2e4f8 = lVar3;
  return;
}



// FUNCTION 142c47f80 FUN_142c47f80 body=327 status=ok
// SIG undefined FUN_142c47f80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c47f80(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined1 local_res8 [8];
  
  FUN_142c4aed0();
  uVar6 = 0;
  lVar3 = *(longlong *)(param_1 + 8);
  uVar8 = uVar6;
  uVar10 = uVar6;
  iVar4 = DAT_1464af780;
  if (0 < DAT_1464af780) {
    do {
      plVar9 = (longlong *)(DAT_1464af778 + uVar10);
      if ((((int)plVar9[1] != 0) && (plVar2 = (longlong *)*plVar9, plVar2 != (longlong *)0x0)) &&
         (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8),
         iVar4 = DAT_1464af780, *plVar2 == lVar3)) {
        if (((int)plVar9[1] != 0) && (plVar2 = (longlong *)*plVar9, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar9 != 0) {
            lVar3 = FMemory::Realloc(*plVar9,0,0);
            *plVar9 = lVar3;
          }
          *(undefined4 *)(plVar9 + 1) = 0;
          iVar4 = DAT_1464af780;
        }
        break;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      uVar10 = uVar10 + 0x10;
    } while ((int)uVar7 < iVar4);
  }
  if (DAT_1464af78c < 1) {
    uVar8 = uVar6;
    iVar5 = iVar4;
    if (0 < iVar4) {
      do {
        if (((*(int *)(uVar6 + 8 + DAT_1464af778) == 0) ||
            (*(longlong **)(uVar6 + DAT_1464af778) == (longlong *)0x0)) ||
           (cVar1 = (**(code **)(**(longlong **)(uVar6 + DAT_1464af778) + 0x10))(), cVar1 != '\0'))
        {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1464af778,uVar8,1,1);
        }
        else {
          uVar8 = (ulonglong)((int)uVar8 + 1);
          uVar6 = uVar6 + 0x10;
        }
        iVar5 = DAT_1464af780;
      } while ((int)uVar8 < DAT_1464af780);
    }
    _DAT_1464af788 = iVar5 * 2;
    if (_DAT_1464af788 < 3) {
      _DAT_1464af788 = 2;
    }
    if ((_DAT_1464af788 < iVar4) && (DAT_1464af784 != iVar5)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464af778);
      return;
    }
  }
  return;
}



// FUNCTION 142c480d0 FUN_142c480d0 body=489 status=ok
// SIG undefined FUN_142c480d0(void)

int * FUN_142c480d0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  char cVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  int local_res8 [2];
  int local_38 [2];
  int *local_30;
  
  TSparseArray<TSetElement<TTuple<FName,FNameArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  bVar8 = false;
  param_3 = (undefined8 *)*param_3;
  *param_2 = local_38[0];
  *(undefined8 *)local_30 = *param_3;
  local_30[2] = 0;
  local_30[3] = 0;
  local_30[4] = -0x40800000;
  local_30[5] = 0;
  local_30[6] = -1;
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 != 1) {
    FUN_142c495b0(param_1,local_res8,local_30);
    bVar8 = local_res8[0] != -1;
    if (bVar8) {
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)local_res8[0] * 0x20 + *param_1),local_30,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = local_res8[0];
      goto LAB_142c48290;
    }
  }
  cVar1 = FUN_142c48d00(param_1,iVar6,0);
  if (cVar1 == '\0') {
    uVar4 = local_30[1];
    uVar5 = *local_30 - uVar4 ^ uVar4 >> 0xd;
    uVar3 = (-0x61c88647 - uVar5) - uVar4 ^ uVar5 << 8;
    uVar7 = (uVar4 - uVar3) - uVar5 ^ uVar3 >> 0xd;
    uVar5 = (uVar5 - uVar3) - uVar7 ^ uVar7 >> 0xc;
    uVar4 = (uVar3 - uVar5) - uVar7 ^ uVar5 << 0x10;
    uVar7 = (uVar7 - uVar4) - uVar5 ^ uVar4 >> 5;
    uVar3 = (uVar5 - uVar4) - uVar7 ^ uVar7 >> 3;
    uVar4 = (uVar4 - uVar3) - uVar7 ^ uVar3 << 10;
    uVar4 = ((uVar7 - uVar4) - uVar3 ^ uVar4 >> 0xf) & (int)param_1[9] - 1U;
    local_30[7] = uVar4;
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    local_30[6] = *(int *)((longlong)plVar2 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) =
         *param_2;
  }
LAB_142c48290:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar8;
  }
  return param_2;
}



// FUNCTION 142c482c0 FUN_142c482c0 body=23 status=ok
// SIG undefined FUN_142c482c0(void)

undefined8 FUN_142c482c0(undefined8 param_1)

{
  FUN_142c4a760();
  return param_1;
}



// FUNCTION 142c482e0 UFontFaceInterface body=33 status=ok
// SIG undefined UFontFaceInterface(void)

undefined8 * UFontFaceInterface::UFontFaceInterface(undefined8 *param_1)

{
  UDataAsset::UDataAsset();
  *param_1 = &PTR_FUN_145831f20;
  return param_1;
}



// FUNCTION 142c48310 FUN_142c48310 body=26 status=ok
// SIG undefined FUN_142c48310(void)

undefined1 FUN_142c48310(float *param_1,float *param_2)

{
  if ((*param_2 == *param_1) && (param_2[1] == param_1[1])) {
    return 1;
  }
  return 0;
}



// FUNCTION 142c48330 FUN_142c48330 body=556 status=ok
// SIG undefined FUN_142c48330(void)

longlong * FUN_142c48330(longlong *param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  longlong lVar14;
  int iVar15;
  undefined8 *puVar16;
  float *pfVar17;
  undefined8 local_b8;
  float local_b0;
  undefined8 local_a8;
  float fStack_a0;
  undefined4 uStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined1 local_88 [128];
  
  lVar5 = *param_1;
  lVar14 = param_1[2];
  *param_2 = param_1[1];
  *(int *)(param_2 + 1) = (int)lVar14;
  if (lVar5 != 0) {
    local_98 = *(float *)(lVar5 + 0x210);
    fStack_94 = *(float *)(lVar5 + 0x214);
    fStack_90 = *(float *)(lVar5 + 0x218);
    fStack_8c = *(float *)(lVar5 + 0x21c);
    fVar7 = *(float *)(lVar5 + 0x220);
    fVar8 = *(float *)(lVar5 + 0x224);
    local_a8 = *(undefined8 *)(lVar5 + 0x220);
    fVar9 = *(float *)(lVar5 + 0x228);
    auVar6._4_4_ = -(uint)(*(float *)(lVar5 + 0x254) != fStack_94);
    auVar6._0_4_ = -(uint)(*(float *)(lVar5 + 0x250) != local_98);
    auVar6._8_4_ = -(uint)(*(float *)(lVar5 + 600) != fStack_90);
    auVar6._12_4_ = -(uint)(*(float *)(lVar5 + 0x25c) != fStack_8c);
    iVar15 = movmskps((int)lVar14,auVar6);
    fStack_a0 = fVar9;
    if (iVar15 != 0) {
      *(float *)(lVar5 + 0x250) = local_98;
      *(float *)(lVar5 + 0x254) = fStack_94;
      *(float *)(lVar5 + 600) = fStack_90;
      *(float *)(lVar5 + 0x25c) = fStack_8c;
      puVar16 = (undefined8 *)FQuat::Rotator(&local_98,&local_b8);
      *(undefined8 *)(lVar5 + 0x260) = *puVar16;
      *(undefined4 *)(lVar5 + 0x268) = *(undefined4 *)(puVar16 + 1);
    }
    local_b0 = *(float *)(lVar5 + 0x268);
    lVar5 = *(longlong *)(lVar5 + 0x260);
    if ((((fVar7 != *(float *)((longlong)param_1 + 0x14)) || (fVar8 != *(float *)(param_1 + 3))) ||
        (fVar9 != *(float *)((longlong)param_1 + 0x1c))) ||
       (((local_b8._0_4_ = (float)lVar5, (float)local_b8 != *(float *)(param_1 + 4) ||
         (local_b8._4_4_ = (float)((ulonglong)lVar5 >> 0x20),
         local_b8._4_4_ != *(float *)((longlong)param_1 + 0x24))) ||
        (local_b0 != *(float *)(param_1 + 5))))) {
      *(undefined8 *)((longlong)param_1 + 0x14) = local_a8;
      param_1[4] = lVar5;
      *(float *)(param_1 + 5) = local_b0;
      *(float *)((longlong)param_1 + 0x1c) = fStack_a0;
      fVar1 = *(float *)((longlong)param_1 + 0xc);
      fVar2 = *(float *)(param_1 + 2);
      fVar3 = *(float *)(param_1 + 1);
      local_a8 = param_1[1];
      fStack_a0 = (float)param_1[2];
      uStack_9c = 0x3f800000;
      local_b8 = lVar5;
      pfVar17 = (float *)FRotationMatrix::FRotationMatrix(local_88,&local_b8);
      fVar10 = pfVar17[10];
      fVar11 = pfVar17[0xe];
      fVar12 = pfVar17[6];
      fVar13 = pfVar17[2];
      *(ulonglong *)((longlong)param_1 + 0x2c) =
           CONCAT44(fVar8 + pfVar17[0xd] * 1.0 + fVar2 * pfVar17[9] +
                            fVar1 * pfVar17[5] + fVar3 * pfVar17[1],
                    fVar7 + pfVar17[0xc] * 1.0 + fVar2 * pfVar17[8] +
                            fVar1 * pfVar17[4] + fVar3 * *pfVar17);
      *(float *)((longlong)param_1 + 0x34) =
           fVar9 + fVar11 * 1.0 + fVar2 * fVar10 + fVar1 * fVar12 + fVar3 * fVar13;
    }
    uVar4 = *(undefined4 *)((longlong)param_1 + 0x34);
    *param_2 = *(longlong *)((longlong)param_1 + 0x2c);
    *(undefined4 *)(param_2 + 1) = uVar4;
  }
  return param_2;
}



// FUNCTION 142c48560 FUN_142c48560 body=65 status=ok
// SIG undefined FUN_142c48560(void)

float * FUN_142c48560(float *param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = *param_2 + param_2[1];
  FUN_142c4aa90(fVar1,(*param_1 - param_1[1]) * (*param_2 - param_2[1]),
                (*param_1 + param_1[1]) * fVar1);
  return param_1;
}



// FUNCTION 142c485b0 FUN_142c485b0 body=51 status=ok
// SIG undefined FUN_142c485b0(void)

float * FUN_142c485b0(float *param_1,float param_2)

{
  FUN_142c4aa90(param_1,(*param_1 - param_1[1]) * param_2,(*param_1 + param_1[1]) * param_2);
  return param_1;
}



// FUNCTION 142c485f0 FUN_142c485f0 body=65 status=ok
// SIG undefined FUN_142c485f0(void)

float * FUN_142c485f0(float *param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = *param_2 + param_2[1];
  FUN_142c4aa90(fVar1,(*param_1 - param_1[1]) + (*param_2 - param_2[1]),
                *param_1 + param_1[1] + fVar1);
  return param_1;
}



// FUNCTION 142c48640 FUN_142c48640 body=51 status=ok
// SIG undefined FUN_142c48640(void)

float * FUN_142c48640(float *param_1,float param_2)

{
  FUN_142c4aa90(param_1,(*param_1 - param_1[1]) + param_2,*param_1 + param_1[1] + param_2);
  return param_1;
}



// FUNCTION 142c48680 FUN_142c48680 body=65 status=ok
// SIG undefined FUN_142c48680(void)

float * FUN_142c48680(float *param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = *param_2 + param_2[1];
  FUN_142c4aa90(fVar1,(*param_1 - param_1[1]) - (*param_2 - param_2[1]),
                (*param_1 + param_1[1]) - fVar1);
  return param_1;
}



// FUNCTION 142c486d0 FUN_142c486d0 body=51 status=ok
// SIG undefined FUN_142c486d0(void)

float * FUN_142c486d0(float *param_1,float param_2)

{
  FUN_142c4aa90(param_1,(*param_1 - param_1[1]) - param_2,(*param_1 + param_1[1]) - param_2);
  return param_1;
}



// FUNCTION 142c48710 FUN_142c48710 body=106 status=ok
// SIG undefined FUN_142c48710(void)

float * FUN_142c48710(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *param_2 - param_2[1];
  fVar1 = *param_1 - param_1[1];
  if (1e-08 < ABS(fVar4)) {
    fVar1 = fVar1 / fVar4;
  }
  fVar2 = param_1[1] + *param_1;
  fVar3 = param_2[1] + *param_2;
  fVar4 = ABS(fVar3);
  if (1e-08 < fVar4) {
    fVar2 = fVar2 / fVar3;
  }
  FUN_142c4aa90(fVar4,fVar1,fVar2);
  return param_1;
}



// FUNCTION 142c48780 FUN_142c48780 body=82 status=ok
// SIG undefined FUN_142c48780(void)

float * FUN_142c48780(float *param_1,float param_2)

{
  if (1e-08 < ABS(param_2)) {
    FUN_142c4aa90(ABS(param_2),(*param_1 - param_1[1]) * (1.0 / param_2),
                  (*param_1 + param_1[1]) * (1.0 / param_2));
  }
  return param_1;
}



// FUNCTION 142c487e0 FUN_142c487e0 body=659 status=ok
// SIG undefined FUN_142c487e0(void)

void FUN_142c487e0(longlong param_1,float param_2)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  ulonglong uVar4;
  char cVar5;
  BOOL BVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  uint uStack_80;
  int iStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined2 local_60;
  longlong *local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  longlong *local_30;
  
  if (0.0 <= *(float *)(param_1 + 0x80)) {
    if (param_2 <= *(float *)(param_1 + 0x80)) {
      return;
    }
    bVar3 = false;
    BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b2e4c8);
    if (BVar6 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b2e4c8);
    }
    plVar1 = (longlong *)(param_1 + 0x30);
    local_98 = 0x100000000;
    iVar9 = *(int *)(param_1 + 0x58);
    uStack_48 = (uint *)(param_1 + 0x40);
    local_88._4_4_ = 0;
    uStack_80 = 0;
    if (iVar9 != 0) {
      puVar10 = *(uint **)(param_1 + 0x50);
      if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
        puVar10 = uStack_48;
      }
      uVar7 = *puVar10;
      uStack_80 = 0;
      iVar8 = 0;
      while (uVar7 == 0) {
        uStack_80 = uStack_80 + 0x20;
        uVar4 = (ulonglong)local_98 >> 0x20;
        local_98 = CONCAT44((int)uVar4,iVar8 + 1);
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_142c488ff;
        uVar7 = puVar10[(longlong)iVar8 + 1];
        iVar8 = iVar8 + 1;
      }
      uVar7 = -uVar7 & uVar7;
      iVar8 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      local_98 = CONCAT44(uVar7,(undefined4)local_98);
      if (uVar7 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      local_88._4_4_ = (uStack_80 - iVar8) + 0x1f;
      if (iVar9 < local_88._4_4_) {
LAB_142c488ff:
        local_88._4_4_ = iVar9;
      }
    }
    auStack_40._4_4_ = local_88._4_4_;
    auStack_40._0_4_ = 0xffffffff;
    auStack_40._8_4_ = uStack_80;
    auStack_40._12_4_ = iStack_7c;
    uStack_50 = local_98;
    local_60 = 0;
    uStack_80 = 0xffffffff;
    iStack_7c = local_88._4_4_;
    local_78 = auStack_40._8_8_;
    uStack_90 = local_98;
    bVar2 = local_88._4_4_ < *(int *)(param_1 + 0x58);
    local_68 = plVar1;
    local_58 = plVar1;
    local_30 = plVar1;
    uStack_70 = plVar1;
    local_88 = uStack_48;
    if (bVar2) {
      do {
        if (180.0 < param_2 - *(float *)((longlong)iStack_7c * 0x20 + 0x10 + *plVar1)) {
          TSet<TTuple<FPolygonID,FOctreeElementId>,TDefaultMapHashableKeyFuncs<FPolygonID,FOctreeElementId,0>,FDefaultSetAllocator>
          ::Remove(uStack_70);
          local_60 = CONCAT11(local_60._1_1_,1);
          bVar3 = true;
        }
        uStack_80 = uStack_80 & ~uStack_90._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
      } while (iStack_7c < (int)local_88[6]);
      if (((char)local_60 != '\0') && (local_60._1_1_ != '\0')) {
        FUN_142c48d00(local_68,(int)local_68[1] - *(int *)((longlong)local_68 + 0x34),1);
      }
      if (bVar3) {
        cVar5 = FUN_142c48a80(plVar1);
        if (cVar5 != '\0') {
          FUN_142c4a590(plVar1);
        }
        TSparseArray<TSetElement<TTuple<AActor_*,FLastHitInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::Shrink(plVar1);
        FUN_142c48d00(plVar1,*(int *)(param_1 + 0x38) - *(int *)(param_1 + 100),1);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b2e4c8);
  }
  iVar9 = rand();
  *(float *)(param_1 + 0x80) = (float)iVar9 * 0.0018311106 + 60.0 + param_2;
  return;
}



// FUNCTION 142c48a80 FUN_142c48a80 body=637 status=ok
// SIG undefined FUN_142c48a80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_142c48a80(longlong *param_1)

{
  uint *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined1 local_80 [4];
  uint local_7c;
  longlong local_78;
  uint local_70;
  int local_6c;
  longlong local_60;
  undefined8 uStack_58;
  longlong local_50;
  longlong lStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  uVar11 = 0;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    local_60 = 0;
    uStack_58 = 0;
    local_40 = (longlong *)0x0;
    uStack_38 = 0;
    local_30 = 0xffffffff;
    iVar16 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    uVar12 = 0;
    if (iVar16 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
                (&local_60,iVar16);
      uVar12 = uStack_38._4_4_;
    }
    local_30 = 0xffffffff;
    uStack_38 = uStack_38 & 0xffffffff00000000;
    uVar9 = iVar16 + 0x1f + (iVar16 + 0x1f >> 0x1f & 0x1fU);
    if (uVar12 != (uVar9 & 0xffffffe0)) {
      uStack_38 = ((ulonglong)uVar9 & 0xffffffe0) << 0x20;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_50,0);
    }
    TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
              (&local_88,param_1);
    if (local_6c < *(int *)(local_78 + 0x18)) {
      do {
        iVar16 = local_6c;
        if (local_30._4_4_ == 0) {
          iVar17 = (int)uStack_58;
          uVar18 = uStack_58 & 0xffffffff;
          iVar10 = (int)uStack_58 + 1;
          uStack_58 = CONCAT44(uStack_58._4_4_,iVar10);
          if (uStack_58._4_4_ < iVar10) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
            ::ResizeGrow(&local_60,uVar18);
          }
          TBitArray<FDefaultBitArrayAllocator>::Add(&local_50,0,1);
        }
        else {
          iVar17 = (int)local_30;
          local_30._4_4_ = local_30._4_4_ + -1;
          iVar10 = *(int *)((longlong)(int)local_30 * 0x20 + 4 + local_60);
          local_30 = CONCAT44(local_30._4_4_,iVar10);
          if (local_30._4_4_ != 0) {
            *(undefined4 *)((longlong)iVar10 * 0x20 + local_60) = 0xffffffff;
          }
        }
        plVar13 = &local_50;
        if (local_40 != (longlong *)0x0) {
          plVar13 = local_40;
        }
        iVar10 = iVar17;
        if (iVar17 < 0) {
          iVar10 = iVar17 + 0x1f;
        }
        puVar1 = (uint *)((longlong)plVar13 + (longlong)(iVar10 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)iVar17 & 0x1f);
        puVar14 = (undefined4 *)((longlong)iVar16 * 0x20 + *local_88);
        puVar15 = (undefined4 *)((longlong)iVar17 * 0x20 + local_60);
        uVar11 = puVar14[1];
        uVar3 = puVar14[2];
        uVar4 = puVar14[3];
        *puVar15 = *puVar14;
        puVar15[1] = uVar11;
        puVar15[2] = uVar3;
        puVar15[3] = uVar4;
        *(undefined8 *)(puVar15 + 4) = *(undefined8 *)(puVar14 + 4);
        puVar15[6] = puVar14[6];
        puVar15[7] = puVar14[7];
        local_70 = local_70 & ~local_7c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_80);
      } while (local_6c < *(int *)(local_78 + 0x18));
    }
    if (param_1 != &local_60) {
      lVar5 = *param_1;
      uVar18 = param_1[1];
      lVar6 = param_1[2];
      lVar7 = param_1[3];
      plVar13 = (longlong *)param_1[4];
      uVar8 = param_1[5];
      lVar2 = param_1[6];
      *param_1 = local_60;
      param_1[1] = uStack_58;
      param_1[2] = local_50;
      param_1[3] = lStack_48;
      *(undefined4 *)(param_1 + 4) = (undefined4)local_40;
      *(undefined4 *)((longlong)param_1 + 0x24) = local_40._4_4_;
      *(undefined4 *)(param_1 + 5) = (undefined4)uStack_38;
      *(uint *)((longlong)param_1 + 0x2c) = uStack_38._4_4_;
      param_1[6] = local_30;
      local_60 = lVar5;
      uStack_58 = uVar18;
      local_50 = lVar6;
      lStack_48 = lVar7;
      local_40 = plVar13;
      uStack_38 = uVar8;
      local_30 = lVar2;
    }
    uVar18 = uStack_58 >> 0x20;
    uStack_58 = uStack_58 & 0xffffffff00000000;
    if ((int)uVar18 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
                (&local_60,0);
    }
    local_30 = 0xffffffff;
    uVar18 = uStack_38 >> 0x20;
    uStack_38 = uStack_38 & 0xffffffff00000000;
    if ((int)uVar18 != 0) {
      uStack_38 = 0;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_50,0);
    }
    if (local_40 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_60 != 0) {
      FMemory::Free();
    }
    uVar11 = 1;
  }
  return uVar11;
}



// FUNCTION 142c48d00 FUN_142c48d00 body=161 status=ok
// SIG undefined FUN_142c48d00(void)

undefined8 FUN_142c48d00(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar2 = 1;
  }
  else {
    uVar1 = (param_2 >> 1) + 8;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar3 = 0x20;
    if (uVar1 != 0) {
      iVar3 = 0x1f - iVar2;
    }
    uVar1 = (param_2 >> 1) + 7;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
    }
  }
  if (0 < (int)param_2) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (((iVar3 == 0) || (iVar3 < iVar2)) || ((iVar2 < iVar3 && (param_3 != '\0')))) {
      *(int *)(param_1 + 0x48) = iVar2;
      FUN_142c4a590(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142c48db0 FUN_142c48db0 body=58 status=ok
// SIG undefined FUN_142c48db0(void)

void FUN_142c48db0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1458321a0;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_1458321e8;
  }
  return;
}



// FUNCTION 142c48df0 FUN_142c48df0 body=146 status=ok
// SIG undefined FUN_142c48df0(void)

float * FUN_142c48df0(float *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  if (param_3 < param_2) {
    fVar1 = param_3;
    if (param_3 <= 0.0) {
      fVar1 = 0.0;
    }
    fVar1 = (fVar1 - param_3) * 0.5;
    fVar1 = (fVar1 + param_3) - fVar1;
    if (param_2 <= fVar1) {
      fVar1 = param_2;
    }
    fVar2 = (param_2 - fVar1) * 0.5;
    param_1[1] = fVar2;
    *param_1 = fVar2 + fVar1;
    return param_1;
  }
  fVar1 = param_2;
  if (param_2 <= 0.0) {
    fVar1 = 0.0;
  }
  fVar1 = (fVar1 - param_2) * 0.5;
  fVar1 = (fVar1 + param_2) - fVar1;
  if (param_3 <= fVar1) {
    fVar1 = param_3;
  }
  fVar2 = (param_3 - fVar1) * 0.5;
  param_1[1] = fVar2;
  *param_1 = fVar2 + fVar1;
  return param_1;
}



// FUNCTION 142c48e90 FUN_142c48e90 body=15 status=ok
// SIG undefined FUN_142c48e90(void)

undefined4 * FUN_142c48e90(undefined4 *param_1,undefined4 param_2)

{
  param_1[1] = param_2;
  *param_1 = 0;
  return param_1;
}



// FUNCTION 142c48ea0 FUN_142c48ea0 body=181 status=ok
// SIG undefined FUN_142c48ea0(void)

void FUN_142c48ea0(longlong param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo();
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar2 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar2) {
    *(uint *)(param_1 + 0x2c) = uVar2;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  cVar1 = FUN_142c48d00(param_1,param_2,1);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar5 = 0;
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar5;
      uVar5 = uVar5 + 1;
      *(undefined4 *)(lVar4 + uVar3 * 4) = 0xffffffff;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 142c48f60 FUN_142c48f60 body=35 status=ok
// SIG undefined FUN_142c48f60(void)

char FUN_142c48f60(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x280))();
  if ((char)param_1[5] != '\0') {
    cVar1 = cVar1 == '\0';
  }
  return cVar1;
}



// FUNCTION 142c48f90 FUN_142c48f90 body=48 status=ok
// SIG undefined FUN_142c48f90(void)

bool FUN_142c48f90(longlong *param_1)

{
  char cVar1;
  
  if (param_1 == (longlong *)0x0) {
    cVar1 = '\x01';
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x280))();
    if ((char)param_1[5] != '\0') {
      return cVar1 == '\0';
    }
  }
  return (bool)cVar1;
}



// FUNCTION 142c48fc0 FUN_142c48fc0 body=306 status=ok
// SIG undefined FUN_142c48fc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c48fc0(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar4 = *(longlong **)(param_3 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_2 + 8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  _DAT_146b2e4c0 = 0;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar5)(plVar5);
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
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  plVar4 = *(longlong **)(param_2 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  plVar4 = *(longlong **)(param_3 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  return;
}



// FUNCTION 142c49100 FUN_142c49100 body=214 status=ok
// SIG undefined FUN_142c49100(void)

undefined8 FUN_142c49100(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_28 = *param_3;
  local_20 = param_3[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  local_18 = *param_2;
  local_10 = param_2[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_142c48fc0(param_1,&local_18,&local_28);
  plVar4 = (longlong *)param_2[1];
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
  plVar4 = (longlong *)param_3[1];
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
  return 1;
}



// FUNCTION 142c491e0 FUN_142c491e0 body=974 status=ok
// SIG undefined FUN_142c491e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_142c491e0(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  undefined1 auStack_118 [32];
  longlong local_f8 [24];
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  plVar2 = (longlong *)FUN_1428dfc70();
  plVar7 = param_1;
  while (plVar7 != plVar2) {
    plVar7 = (longlong *)plVar7[6];
    if (plVar7 == (longlong *)0x0) {
      return 0;
    }
  }
  plVar2 = (longlong *)FUN_1428dfc70();
  plVar7 = param_1;
  do {
    plVar11 = (longlong *)0x0;
    plVar6 = param_1;
    if (plVar7 == plVar2) break;
    plVar7 = (longlong *)plVar7[6];
    plVar6 = plVar11;
  } while (plVar7 != (longlong *)0x0);
  lVar5 = plVar6[0x1f];
  if (lVar5 == 0) {
    (**(code **)(*plVar6 + 0x368))(plVar6);
    lVar5 = plVar6[0x1f];
    if (lVar5 == 0) goto LAB_142c493a5;
  }
  lVar3 = FUN_1428dfc70();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    local_38 = (longlong *)0x0;
    local_30 = 0;
    FUN_140a4ca80(lVar5,local_f8,0);
    plVar7 = local_f8;
    if (local_38 != (longlong *)0x0) {
      plVar7 = local_38;
    }
    plVar2 = plVar7 + (int)local_30;
    for (; plVar7 != plVar2; plVar7 = plVar7 + 1) {
      lVar5 = *plVar7;
      plVar6 = plVar11;
      if (param_2 != (longlong *)0x0) {
        plVar4 = (longlong *)FUN_1428e7a40();
        plVar8 = param_2;
        do {
          plVar6 = param_2;
          if (plVar8 == plVar4) break;
          plVar8 = (longlong *)plVar8[6];
          plVar6 = plVar11;
        } while (plVar8 != (longlong *)0x0);
      }
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < (int)plVar6[0x12]) ||
         (*(longlong **)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)(int)plVar6[0x12] * 8) !=
          plVar6 + 0x11)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        lVar5 = *plVar7;
        if (local_38 != (longlong *)0x0) {
          FMemory::Free();
          return lVar5;
        }
        return lVar5;
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
LAB_142c493a5:
  plVar2 = (longlong *)FUN_1428dfc70();
  plVar7 = param_1;
  while (plVar7 != plVar2) {
    plVar7 = (longlong *)plVar7[6];
    if (plVar7 == (longlong *)0x0) {
      return 0;
    }
  }
  lVar5 = UBlueprintGeneratedClass::GetPrivateStaticClass();
  if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return 0;
  }
  do {
    lVar5 = param_1[0x48];
    plVar7 = plVar11;
    if (lVar5 != 0) {
      while( true ) {
        iVar10 = (int)plVar7;
        if ((iVar10 < 0) || (*(int *)(lVar5 + 0x30) <= iVar10)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) break;
        lVar9 = (longlong)iVar10 * 0x80 + *(longlong *)(lVar5 + 0x28);
        lVar3 = *(longlong *)(lVar9 + 8);
        if (lVar3 != 0) {
          plVar7 = plVar11;
          if (param_2 != (longlong *)0x0) {
            plVar6 = (longlong *)FUN_1428e7a40();
            plVar2 = param_2;
            do {
              plVar7 = param_2;
              if (plVar2 == plVar6) break;
              plVar2 = (longlong *)plVar2[6];
              plVar7 = plVar11;
            } while (plVar2 != (longlong *)0x0);
          }
          lVar3 = *(longlong *)(lVar3 + 0x10);
          if ((*(int *)(lVar3 + 0x90) < (int)plVar7[0x12]) ||
             (*(longlong **)(*(longlong *)(lVar3 + 0x88) + (longlong)(int)plVar7[0x12] * 8) !=
              plVar7 + 0x11)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            return *(longlong *)(lVar9 + 8);
          }
        }
        plVar7 = (longlong *)(ulonglong)(iVar10 + 1);
      }
    }
    lVar5 = param_1[0x47];
    if (lVar5 != 0) {
      plVar2 = *(longlong **)(lVar5 + 0x38);
      plVar7 = plVar2 + *(int *)(lVar5 + 0x40);
      for (; plVar2 != plVar7; plVar2 = plVar2 + 1) {
        lVar5 = *plVar2;
        if ((lVar5 != 0) && (lVar3 = *(longlong *)(lVar5 + 0x30), lVar3 != 0)) {
          plVar6 = plVar11;
          if (param_2 != (longlong *)0x0) {
            plVar4 = (longlong *)FUN_1428e7a40();
            plVar8 = param_2;
            do {
              plVar6 = param_2;
              if (plVar8 == plVar4) break;
              plVar8 = (longlong *)plVar8[6];
              plVar6 = plVar11;
            } while (plVar8 != (longlong *)0x0);
          }
          lVar3 = *(longlong *)(lVar3 + 0x10);
          if ((*(int *)(lVar3 + 0x90) < (int)plVar6[0x12]) ||
             (*(longlong **)(*(longlong *)(lVar3 + 0x88) + (longlong)(int)plVar6[0x12] * 8) !=
              plVar6 + 0x11)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            return *(longlong *)(lVar5 + 0x30);
          }
        }
      }
    }
    param_1 = (longlong *)param_1[6];
    if (param_1 == (longlong *)0x0) {
      return 0;
    }
    lVar5 = UBlueprintGeneratedClass::GetPrivateStaticClass();
    if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      return 0;
    }
  } while( true );
}



// FUNCTION 142c495b0 FUN_142c495b0 body=299 status=ok
// SIG undefined FUN_142c495b0(void)

int * FUN_142c495b0(longlong *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = param_3[1];
    uVar8 = *param_3 - uVar1 ^ uVar1 >> 0xd;
    uVar7 = (-0x61c88647 - uVar8) - uVar1 ^ uVar8 << 8;
    uVar5 = (uVar1 - uVar7) - uVar8 ^ uVar7 >> 0xd;
    uVar8 = (uVar8 - uVar7) - uVar5 ^ uVar5 >> 0xc;
    uVar7 = (uVar7 - uVar8) - uVar5 ^ uVar8 << 0x10;
    uVar5 = (uVar5 - uVar7) - uVar8 ^ uVar7 >> 5;
    uVar8 = (uVar8 - uVar7) - uVar5 ^ uVar5 >> 3;
    uVar7 = (uVar7 - uVar8) - uVar5 ^ uVar8 << 10;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (((longlong)(int)((uVar5 - uVar7) - uVar8) ^ (ulonglong)(uVar7 >> 0xf)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar3 != -1) {
      lVar2 = *param_1;
      do {
        lVar6 = (longlong)iVar3 * 0x20;
        if ((*(int *)(lVar6 + lVar2) == *param_3) && (*(uint *)(lVar6 + 4 + lVar2) == uVar1)) {
          *param_2 = iVar3;
          return param_2;
        }
        iVar3 = *(int *)(lVar6 + 0x18 + lVar2);
      } while (iVar3 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 142c496e0 FUN_142c496e0 body=69 status=ok
// SIG undefined FUN_142c496e0(void)

void FUN_142c496e0(longlong param_1)

{
  BOOL BVar1;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b2e4c8);
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b2e4c8);
  }
  FUN_142c48ea0(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x000142c4971e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b2e4c8);
  return;
}



// FUNCTION 142c49730 FUN_142c49730 body=97 status=ok
// SIG undefined FUN_142c49730(void)

float FUN_142c49730(float *param_1)

{
  float fVar1;
  int iVar2;
  
  fVar1 = param_1[1];
  if (ABS(fVar1) <= 1e-08) {
    return *param_1;
  }
  iVar2 = rand();
  return ((float)iVar2 * fVar1 * 6.103702e-05 - fVar1) + *param_1;
}



// FUNCTION 142c497a0 FUN_142c497a0 body=62 status=ok
// SIG undefined FUN_142c497a0(void)

undefined8 * FUN_142c497a0(longlong param_1,undefined8 *param_2)

{
  undefined8 local_res8 [4];
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    local_res8[0] = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18);
    FName::ToString(local_res8);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 142c497e0 FUN_142c497e0 body=156 status=ok
// SIG undefined FUN_142c497e0(void)

undefined8 * FUN_142c497e0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b2e5e0) {
    _Init_thread_header(&DAT_146b2e5e0);
    if (DAT_146b2e5e0 == -1) {
      FConfigCacheIni::GetStr
                (DAT_1468b6148,&DAT_146b2e5d0,L"GbxCrashHandling",&DAT_145831d70,&DAT_1468e2360);
      atexit((_func_5014 *)&LAB_143ebf920);
      _Init_thread_footer(&DAT_146b2e5e0);
      return &DAT_146b2e5d0;
    }
  }
  return &DAT_146b2e5d0;
}



// FUNCTION 142c49880 FUN_142c49880 body=3179 status=ok
// SIG undefined FUN_142c49880(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c49880(undefined2 *param_1)

{
  int *piVar1;
  byte *pbVar2;
  AKRESULT AVar3;
  int iVar4;
  longlong lVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong **pplVar10;
  longlong *plVar11;
  int iVar12;
  ErrorLevel EVar13;
  undefined2 *puVar14;
  uint uVar15;
  undefined8 *puVar16;
  byte *pbVar17;
  ulong uVar18;
  wchar_t *pwVar19;
  __uint64 _Var20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  undefined1 auStackY_258 [32];
  undefined4 in_stack_fffffffffffffdc8;
  undefined2 uVar25;
  ulong uVar24;
  undefined1 in_stack_fffffffffffffdd0;
  undefined2 local_228 [4];
  undefined2 local_220 [4];
  undefined2 local_218 [4];
  undefined2 local_210 [4];
  undefined2 local_208 [4];
  undefined2 local_200 [4];
  undefined2 local_1f8 [4];
  undefined2 local_1f0 [4];
  undefined2 local_1e8 [4];
  byte *local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  ulonglong local_1c0;
  longlong local_1b8;
  ulonglong local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  longlong local_198 [27];
  byte *local_c0;
  byte *local_b8;
  longlong local_b0 [4];
  longlong *local_90;
  undefined4 local_88;
  undefined2 *local_80;
  LARGE_INTEGER local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined2 *local_60;
  int local_58;
  int local_50 [8];
  ulonglong local_30;
  
  uVar25 = (undefined2)((uint)in_stack_fffffffffffffdc8 >> 0x10);
  if (param_1 == (undefined2 *)0x0) {
    return;
  }
  local_30 = DAT_1468387a8 ^ (ulonglong)auStackY_258;
  local_80 = param_1;
  lVar5 = FUN_142c497e0();
  pbVar21 = (byte *)0x0;
  iVar12 = 0;
  iVar4 = *(int *)(lVar5 + 8) + -1;
  if (*(int *)(lVar5 + 8) == 0) {
    iVar4 = iVar12;
  }
  if (iVar4 == 0) {
    return;
  }
  local_b0[0] = 0;
  local_b0[1] = 0;
  pbVar6 = (byte *)operator_new(0x40);
  pbVar17 = pbVar21;
  if (pbVar6 != (byte *)0x0) {
    pbVar7 = (byte *)operator_new(0xa8);
    if (pbVar7 != (byte *)0x0) {
      local_198[0x1a] = 0;
      FArchive::FArchive(pbVar7);
      pbVar7[0x90] = 0;
      pbVar7[0x91] = 0;
      pbVar7[0x92] = 0;
      pbVar7[0x93] = 0;
      pbVar7[0x94] = 0;
      pbVar7[0x95] = 0;
      pbVar7[0x96] = 0;
      pbVar7[0x97] = 0;
      pbVar7[0xa0] = 0;
      pbVar7[0xa1] = 0;
      pbVar7[0xa2] = 0;
      pbVar7[0xa3] = 0;
      pbVar7[0xa4] = 0;
      pbVar7[0xa5] = 0;
      pbVar7[0xa6] = 0;
      pbVar7[0xa7] = 0;
      *(undefined ***)pbVar7 = &PTR_FUN_143f4a100;
      *(byte **)(pbVar7 + 0x98) = pbVar6 + 0x28;
      FArchive::SetIsSaving(pbVar7,1);
      FArchive::SetIsPersistent(pbVar7,0);
      pbVar17 = pbVar7;
    }
    *(byte **)(pbVar6 + 8) = pbVar17;
    pbVar6[0x10] = 0;
    pbVar6[0x11] = 0;
    pbVar6[0x12] = 0;
    pbVar6[0x13] = 0;
    pbVar6[0x14] = 0;
    pbVar6[0x15] = 0;
    pbVar6[0x16] = 0;
    pbVar6[0x17] = 0;
    pbVar6[0x18] = 0;
    pbVar6[0x19] = 0;
    pbVar6[0x1a] = 0;
    pbVar6[0x1b] = 0;
    pbVar6[0x1c] = 0;
    pbVar6[0x1d] = 0;
    pbVar6[0x1e] = 0;
    pbVar6[0x1f] = 0;
    *(undefined ***)pbVar6 = &PTR__scalar_deleting_destructor__143f607b8;
    pbVar6[0x20] = 0;
    pbVar6[0x21] = 0;
    pbVar6[0x22] = 0;
    pbVar6[0x23] = 0;
    pbVar6[0x24] = 0;
    pbVar6[0x25] = 0;
    pbVar6[0x26] = 0;
    pbVar6[0x27] = 0;
    pbVar6[0x28] = 0;
    pbVar6[0x29] = 0;
    pbVar6[0x2a] = 0;
    pbVar6[0x2b] = 0;
    pbVar6[0x2c] = 0;
    pbVar6[0x2d] = 0;
    pbVar6[0x2e] = 0;
    pbVar6[0x2f] = 0;
    pbVar6[0x30] = 0;
    pbVar6[0x31] = 0;
    pbVar6[0x32] = 0;
    pbVar6[0x33] = 0;
    pbVar6[0x34] = 0;
    pbVar6[0x35] = 0;
    pbVar6[0x36] = 0;
    pbVar6[0x37] = 0;
    *(longlong **)(pbVar6 + 0x38) = local_b0;
    pbVar17 = pbVar6;
  }
  pbVar6 = (byte *)operator_new(0x18);
  local_b8 = pbVar21;
  if (pbVar6 != (byte *)0x0) {
    pbVar6[8] = 1;
    pbVar6[9] = 0;
    pbVar6[10] = 0;
    pbVar6[0xb] = 0;
    *(undefined ***)pbVar6 = &PTR_FUN_143f3f2e0;
    pbVar6[0xc] = 1;
    pbVar6[0xd] = 0;
    pbVar6[0xe] = 0;
    pbVar6[0xf] = 0;
    *(byte **)(pbVar6 + 0x10) = pbVar17;
    local_b8 = pbVar6;
  }
  local_c0 = pbVar17;
  SharedPointerInternals::EnableSharedFromThis(&local_c0,pbVar17,pbVar17);
  pbVar6 = local_b8;
  pbVar17 = local_c0;
  if (local_b8 != (byte *)0x0) {
    LOCK();
    *(int *)(local_b8 + 8) = *(int *)(local_b8 + 8) + 1;
    UNLOCK();
    if (local_b8 != (byte *)0x0) {
      LOCK();
      pbVar7 = local_b8 + 8;
      iVar4 = *(int *)pbVar7;
      *(int *)pbVar7 = *(int *)pbVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (*(code *)**(undefined8 **)local_b8)(local_b8);
        LOCK();
        pbVar7 = pbVar6 + 0xc;
        iVar4 = *(int *)pbVar7;
        *(int *)pbVar7 = *(int *)pbVar7 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*(longlong *)pbVar6 + 8))(pbVar6,1);
        }
      }
    }
  }
  if ((0xc < *(uint *)(pbVar17 + 0x20)) ||
     ((0x1015U >> (*(uint *)(pbVar17 + 0x20) & 0x1f) & 1) == 0)) {
    local_228[0] = 0x2c;
    (**(code **)(**(longlong **)(pbVar17 + 8) + 0x50))(*(longlong **)(pbVar17 + 8),local_228,2);
  }
  local_220[0] = 0x7b;
  (**(code **)(**(longlong **)(pbVar17 + 8) + 0x50))(*(longlong **)(pbVar17 + 8),local_220,2);
  *(int *)(pbVar17 + 0x24) = *(int *)(pbVar17 + 0x24) + 1;
  iVar4 = *(int *)(pbVar17 + 0x18);
  *(int *)(pbVar17 + 0x18) = iVar4 + 1;
  if (*(int *)(pbVar17 + 0x1c) < iVar4 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(pbVar17 + 0x10,iVar4);
  }
  local_198[6] = 0;
  local_198[7] = 0xc;
  *(undefined4 *)(*(longlong *)(pbVar17 + 0x10) + (longlong)iVar4 * 4) = 6;
  pbVar17[0x20] = 2;
  pbVar17[0x21] = 0;
  pbVar17[0x22] = 0;
  pbVar17[0x23] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_198 + 6,0);
  FGenericPlatformString::Memcpy(local_198[6],L"commandline",0x18);
  uVar8 = FCommandLine::Get();
  FUN_14068b340(pbVar17,local_198 + 6,uVar8);
  if (local_198[6] != 0) {
    FMemory::Free();
  }
  local_198[8] = 0;
  local_198[9] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_198 + 8,0);
  FGenericPlatformString::Memcpy(local_198[8],L"game",10);
  local_1c8 = 0;
  local_1c0 = 0;
  if (DAT_146299580 != 0) {
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while ((&DAT_146299580)[lVar5] != 0);
    uVar15 = (int)lVar5 + 1;
    local_1c0 = (ulonglong)uVar15;
    if (0 < (int)uVar15) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,0);
    }
    FGenericPlatformString::Memcpy(local_1c8,&DAT_146299580,(longlong)(int)uVar15 * 2);
  }
  if (((*(int *)(pbVar17 + 0x20) - 2U & 0xfffffff5) != 0) || (*(int *)(pbVar17 + 0x20) == 10)) {
    local_218[0] = 0x2c;
    (**(code **)(**(longlong **)(pbVar17 + 8) + 0x50))(*(longlong **)(pbVar17 + 8),local_218,2);
  }
  (**(code **)(*(longlong *)pbVar17 + 0x18))(pbVar17,local_198 + 8);
  local_210[0] = 0x3a;
  (**(code **)(**(longlong **)(pbVar17 + 8) + 0x50))(*(longlong **)(pbVar17 + 8),local_210,2);
  (**(code **)(*(longlong *)pbVar17 + 0x18))(pbVar17,&local_1c8);
  pbVar17[0x20] = 7;
  pbVar17[0x21] = 0;
  pbVar17[0x22] = 0;
  pbVar17[0x23] = 0;
  if (local_1c8 != 0) {
    FMemory::Free();
  }
  if (local_198[8] != 0) {
    FMemory::Free();
  }
  local_1d8 = 0;
  local_1d0 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1d8,0);
  uVar8 = local_1d8;
  _Var20 = 0x10;
  uVar24 = CONCAT22(uVar25,0x3f);
  FGenericPlatformString::Convert<char,wchar_t>(local_1d8,0x10,"WindowsNoEditor");
  local_198[10] = 0;
  local_198[0xb] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_198 + 10,0);
  FGenericPlatformString::Memcpy(local_198[10],L"platform",0x12);
  local_68 = (undefined4)local_1d0;
  local_64 = local_1d0._4_4_;
  local_1d0 = 0;
  local_70 = uVar8;
  local_1d8 = 0;
  FUN_1404f77b0(pbVar17,local_198 + 10,&local_70);
  if (local_198[10] != 0) {
    FMemory::Free();
  }
  local_198[0xc] = 0;
  local_198[0xd] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_198 + 0xc,0);
  EVar13 = 0x45831df0;
  uVar18 = 0xc;
  lVar5 = local_198[0xc];
  FGenericPlatformString::Memcpy();
  AVar3 = AK::Monitor::PostCode
                    ((ErrorCode)lVar5,EVar13,uVar18,_Var20,uVar24,(bool)in_stack_fffffffffffffdd0);
  uVar8 = FUN_1415bb3d0(AVar3);
  FUN_14068b340(pbVar17,local_198 + 0xc,uVar8);
  if (local_198[0xc] != 0) {
    FMemory::Free();
  }
  local_198[0xe] = 0;
  local_198[0xf] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_198 + 0xe,0);
  FGenericPlatformString::Memcpy(local_198[0xe],L"version",0x10);
  uVar8 = FUN_14162b4e0();
  FUN_14068b340(pbVar17,local_198 + 0xe,uVar8);
  if (local_198[0xe] != 0) {
    FMemory::Free();
  }
  local_198[0x10] = 0;
  local_198[0x11] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_198 + 0x10,0);
  FGenericPlatformString::Memcpy(local_198[0x10],L"changelist",0x16);
  uVar8 = FEngineVersion::Current();
  iVar4 = FEngineVersionBase::GetChangelist(uVar8);
  if (((*(int *)(pbVar17 + 0x20) - 2U & 0xfffffff5) != 0) || (*(int *)(pbVar17 + 0x20) == 10)) {
    local_208[0] = 0x2c;
    (**(code **)(**(longlong **)(pbVar17 + 8) + 0x50))(*(longlong **)(pbVar17 + 8),local_208,2);
  }
  (**(code **)(*(longlong *)pbVar17 + 0x18))(pbVar17,local_198 + 0x10);
  local_200[0] = 0x3a;
  (**(code **)(**(longlong **)(pbVar17 + 8) + 0x50))(*(longlong **)(pbVar17 + 8),local_200,2);
  FString::PrintfImpl(&local_60,L"%lld",(longlong)iVar4);
  if (local_58 == 0) {
    puVar14 = &DAT_143f3eda8;
  }
  else {
    iVar12 = local_58 + -1;
    puVar14 = local_60;
  }
  (**(code **)(**(longlong **)(pbVar17 + 8) + 0x50))
            (*(longlong **)(pbVar17 + 8),puVar14,(longlong)iVar12 * 2);
  if (local_60 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  pbVar17[0x20] = 8;
  pbVar17[0x21] = 0;
  pbVar17[0x22] = 0;
  pbVar17[0x23] = 0;
  if (local_198[0x10] != 0) {
    FMemory::Free();
  }
  local_198[0x12] = 0;
  local_198[0x13] = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_198 + 0x12,0);
  FGenericPlatformString::Memcpy(local_198[0x12],&DAT_145831e28,8);
  if (DAT_146b17150 != 0) {
    puVar16 = *(undefined8 **)(DAT_146b17150 + 0xc18);
    local_50[0] = 0;
    local_50[1] = 2;
    local_50[2] = 1;
    local_50[3] = 2;
    local_50[4] = 0;
    local_50[5] = 0;
    local_50[6] = 0;
    pbVar7 = (byte *)((longlong)*(int *)(DAT_146b17150 + 0xc20) & 0x1fffffffffffffff);
    if (puVar16 + *(int *)(DAT_146b17150 + 0xc20) < puVar16) {
      pbVar7 = pbVar21;
    }
    pbVar22 = pbVar21;
    local_1e0 = pbVar7;
    if (pbVar7 != (byte *)0x0) {
      do {
        pbVar2 = (byte *)*puVar16;
        pbVar23 = pbVar22;
        if ((((*(longlong *)(pbVar2 + 0x288) != 0) && (pbVar23 = pbVar2, pbVar22 != (byte *)0x0)) &&
            (pbVar7 = local_1e0, local_50[*pbVar2] <= local_50[*pbVar22])) &&
           (pbVar23 = pbVar22, local_50[*pbVar22] == local_50[*pbVar2])) {
          lVar5 = UDynamicEntryBox::GetAllEntries(*(undefined8 *)(pbVar22 + 0x288));
          iVar4 = *(int *)(lVar5 + 8);
          lVar5 = UDynamicEntryBox::GetAllEntries(*(undefined8 *)(pbVar2 + 0x288));
          pbVar7 = local_1e0;
          if (iVar4 < *(int *)(lVar5 + 8)) {
            pbVar23 = pbVar2;
          }
        }
        puVar16 = puVar16 + 1;
        pbVar21 = pbVar21 + 1;
        pbVar22 = pbVar23;
      } while (pbVar21 != pbVar7);
      if (pbVar23 != (byte *)0x0) {
        FUN_1428cc750(*(undefined8 *)(pbVar23 + 0x288),local_b0 + 2);
        goto LAB_142c49fc3;
      }
    }
  }
  local_b0[2] = 0;
  local_b0[3] = 0;
LAB_142c49fc3:
  FUN_1404f77b0(pbVar17,local_198 + 0x12,local_b0 + 2);
  if (local_198[0x12] != 0) {
    FMemory::Free();
  }
  local_198[0x14] = 0;
  local_198[0x15] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_198 + 0x14,0);
  FGenericPlatformString::Memcpy(local_198[0x14],L"crashtype",0x14);
  puVar14 = local_80;
  pwVar19 = L"ensure";
  if (local_80 == &DAT_1468b6170) {
    pwVar19 = L"crash";
  }
  FUN_14068b340(pbVar17,local_198 + 0x14,pwVar19);
  if (local_198[0x14] != 0) {
    FMemory::Free();
  }
  local_198[0x16] = 0;
  local_198[0x17] = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_198 + 0x16,0);
  FGenericPlatformString::Memcpy(local_198[0x16],L"exception_code",0x1e);
  local_1b8 = 0;
  local_1b0 = 0;
  if (DAT_1468be170 != 0) {
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while ((&DAT_1468be170)[lVar5] != 0);
    uVar15 = (int)lVar5 + 1;
    local_1b0 = (ulonglong)uVar15;
    if (0 < (int)uVar15) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,0);
    }
    FGenericPlatformString::Memcpy(local_1b8,&DAT_1468be170,(longlong)(int)uVar15 * 2);
  }
  if (((*(int *)(pbVar17 + 0x20) - 2U & 0xfffffff5) != 0) || (*(int *)(pbVar17 + 0x20) == 10)) {
    local_1f8[0] = 0x2c;
    (**(code **)(**(longlong **)(pbVar17 + 8) + 0x50))(*(longlong **)(pbVar17 + 8),local_1f8,2);
  }
  (**(code **)(*(longlong *)pbVar17 + 0x18))(pbVar17,local_198 + 0x16);
  local_1f0[0] = 0x3a;
  (**(code **)(**(longlong **)(pbVar17 + 8) + 0x50))(*(longlong **)(pbVar17 + 8),local_1f0,2);
  (**(code **)(*(longlong *)pbVar17 + 0x18))(pbVar17,&local_1b8);
  pbVar17[0x20] = 7;
  pbVar17[0x21] = 0;
  pbVar17[0x22] = 0;
  pbVar17[0x23] = 0;
  if (local_1b8 != 0) {
    FMemory::Free();
  }
  if (local_198[0x16] != 0) {
    FMemory::Free();
  }
  local_198[0x18] = 0;
  local_198[0x19] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_198 + 0x18,0);
  FGenericPlatformString::Memcpy(local_198[0x18],L"original_message",0x22);
  FUN_14068b340(pbVar17,local_198 + 0x18,puVar14);
  if (local_198[0x18] != 0) {
    FMemory::Free();
  }
  *(int *)(pbVar17 + 0x24) = *(int *)(pbVar17 + 0x24) + -1;
  local_1e8[0] = 0x7d;
  (**(code **)(**(longlong **)(pbVar17 + 8) + 0x50))(*(longlong **)(pbVar17 + 8),local_1e8,2);
  *(int *)(pbVar17 + 0x18) = *(int *)(pbVar17 + 0x18) + -1;
  TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(pbVar17 + 0x10);
  pbVar17[0x20] = 3;
  pbVar17[0x21] = 0;
  pbVar17[0x22] = 0;
  pbVar17[0x23] = 0;
  (**(code **)(*(longlong *)pbVar17 + 8))(pbVar17);
  plVar9 = (longlong *)FHttpModule::Get();
  (**(code **)(*plVar9 + 0x40))(plVar9,&local_1a8);
  local_198[2] = 0;
  local_198[3] = 0x20;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_198 + 2,0);
  FGenericPlatformString::Memcpy(local_198[2],L"application/json; charset=utf-8",0x40);
  local_198[0] = 0;
  local_198[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_198,0);
  FGenericPlatformString::Memcpy(local_198[0],L"Content-Type",0x1a);
  (**(code **)(*local_1a8 + 0x68))(local_1a8,local_198,local_198 + 2);
  if (local_198[0] != 0) {
    FMemory::Free();
  }
  if (local_198[2] != 0) {
    FMemory::Free();
  }
  pplVar10 = (longlong **)(**(code **)(*local_1a8 + 0x80))();
  plVar9 = (longlong *)FMemory::Realloc(0,0x20);
  local_88 = 2;
  local_90 = plVar9;
  if (plVar9 != (longlong *)0x0) {
    *plVar9 = (longlong)&PTR_GetPoolName_1458321a0;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar9[2] = lVar5;
    *plVar9 = (longlong)&PTR_GetPoolName_1458321e8;
  }
  if (&local_90 != pplVar10) {
    if (plVar9 == (longlong *)0x0) {
      if ((*(int *)(pplVar10 + 1) != 0) && (plVar11 = *pplVar10, plVar11 != (longlong *)0x0)) {
        (**(code **)(*plVar11 + 0x28))(plVar11,0);
        if (*pplVar10 != (longlong *)0x0) {
          plVar11 = (longlong *)FMemory::Realloc(*pplVar10,0,0);
          *pplVar10 = plVar11;
        }
        *(undefined4 *)(pplVar10 + 1) = 0;
      }
    }
    else {
      (**(code **)(*plVar9 + 0x30))(plVar9,pplVar10);
    }
  }
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x28))(plVar9,0);
    local_90 = (longlong *)FMemory::Realloc(plVar9,0,0);
    local_88 = 0;
    if (local_90 != (longlong *)0x0) {
      FMemory::Free(local_90);
    }
  }
  plVar9 = local_1a8;
  lVar5 = *local_1a8;
  uVar8 = FUN_142c497e0();
  (**(code **)(lVar5 + 0x50))(plVar9,uVar8);
  local_198[4] = 0;
  local_198[5] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_198 + 4,0);
  FGenericPlatformString::Memcpy(local_198[4],L"POST",10);
  (**(code **)(*local_1a8 + 0x48))(local_1a8,local_198 + 4);
  if (local_198[4] != 0) {
    FMemory::Free();
  }
  (**(code **)(*local_1a8 + 0x60))(local_1a8,local_b0);
  (**(code **)(*local_1a8 + 0x78))();
  QueryPerformanceCounter(&local_78);
  _DAT_146b2e4c0 = (double)local_78.QuadPart * DAT_1468b02f8 + 16777221.0;
  if (local_1a0 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_1a0 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_1a0)(local_1a0);
      LOCK();
      piVar1 = (int *)((longlong)local_1a0 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_1a0 + 8))(local_1a0,1);
      }
    }
  }
  if (pbVar6 != (byte *)0x0) {
    LOCK();
    pbVar21 = pbVar6 + 8;
    iVar4 = *(int *)pbVar21;
    *(int *)pbVar21 = *(int *)pbVar21 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (*(code *)**(undefined8 **)pbVar6)(pbVar6);
      LOCK();
      pbVar21 = pbVar6 + 0xc;
      iVar4 = *(int *)pbVar21;
      *(int *)pbVar21 = *(int *)pbVar21 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*(longlong *)pbVar6 + 8))(pbVar6,1);
      }
    }
  }
  if (local_b0[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142c4a4f0 FUN_142c4a4f0 body=47 status=ok
// SIG undefined FUN_142c4a4f0(void)

void FUN_142c4a4f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145831cf0;
    puVar1[1] = 0;
    return;
  }
  return;
}



// FUNCTION 142c4a520 FUN_142c4a520 body=36 status=ok
// SIG undefined FUN_142c4a520(void)

undefined1 FUN_142c4a520(float *param_1,float param_2)

{
  if ((*param_1 - param_1[1] <= param_2) && (param_2 <= param_1[1] + *param_1)) {
    return 1;
  }
  return 0;
}



// FUNCTION 142c4a550 FUN_142c4a550 body=51 status=ok
// SIG undefined FUN_142c4a550(void)

bool FUN_142c4a550(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  if (param_1 == (longlong *)0x0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x280))(param_1,param_2,0);
    if ((char)param_1[5] != '\0') {
      return cVar1 == '\0';
    }
  }
  return (bool)cVar1;
}



// FUNCTION 142c4a590 FUN_142c4a590 body=450 status=ok
// SIG undefined FUN_142c4a590(void)

void FUN_142c4a590(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int *piVar11;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  lVar1 = param_1 + 0x38;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    uVar2 = FMemory::Realloc(*(longlong *)(param_1 + 0x40),0,0);
    *(undefined8 *)(param_1 + 0x40) = uVar2;
  }
  uVar5 = *(uint *)(param_1 + 0x48);
  if (uVar5 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation
              (lVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      uVar10 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar3;
        lVar6 = *(longlong *)(param_1 + 0x40);
        if (*(longlong *)(param_1 + 0x40) == 0) {
          lVar6 = lVar1;
        }
        uVar3 = uVar3 + 1;
        *(undefined4 *)(lVar6 + uVar9 * 4) = 0xffffffff;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
              (&local_38,param_1);
    if (local_1c < *(int *)(local_28 + 0x18)) {
      do {
        piVar11 = (int *)((longlong)local_1c * 0x20 + *local_38);
        uVar5 = piVar11[1];
        uVar7 = *piVar11 - uVar5 ^ uVar5 >> 0xd;
        uVar4 = (-0x61c88647 - uVar7) - uVar5 ^ uVar7 << 8;
        uVar8 = (uVar5 - uVar4) - uVar7 ^ uVar4 >> 0xd;
        uVar7 = (uVar7 - uVar4) - uVar8 ^ uVar8 >> 0xc;
        uVar5 = (uVar4 - uVar7) - uVar8 ^ uVar7 << 0x10;
        uVar8 = (uVar8 - uVar5) - uVar7 ^ uVar5 >> 5;
        uVar4 = (uVar7 - uVar5) - uVar8 ^ uVar8 >> 3;
        uVar5 = (uVar5 - uVar4) - uVar8 ^ uVar4 << 10;
        uVar5 = ((uVar8 - uVar5) - uVar4 ^ uVar5 >> 0xf) & *(int *)(param_1 + 0x48) - 1U;
        piVar11[7] = uVar5;
        lVar6 = *(longlong *)(param_1 + 0x40);
        if (*(longlong *)(param_1 + 0x40) == 0) {
          lVar6 = lVar1;
        }
        piVar11[6] = *(int *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
        lVar6 = *(longlong *)(param_1 + 0x40);
        if (*(longlong *)(param_1 + 0x40) == 0) {
          lVar6 = lVar1;
        }
        *(int *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4) =
             local_1c;
        local_20 = local_20 & ~local_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
      } while (local_1c < *(int *)(local_28 + 0x18));
    }
  }
  return;
}



// FUNCTION 142c4a760 FUN_142c4a760 body=764 status=ok
// SIG undefined FUN_142c4a760(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c4a760(longlong *param_1,longlong param_2,float *param_3)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  int iVar4;
  undefined8 in_RAX;
  undefined8 *puVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar12;
  float fVar13;
  undefined1 in_XMM5 [16];
  undefined1 auVar11 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  longlong local_98;
  undefined4 local_90;
  undefined1 local_88 [16];
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  
  if (((0.0001 < ABS(*param_3)) || (0.0001 < ABS(param_3[1]))) || (0.0001 < ABS(param_3[2]))) {
    if ((param_2 == 0) || (*(char *)(param_2 + 0x24e) != '\x02')) {
      iVar4 = (int)((ulonglong)in_RAX >> 8) << 8;
    }
    else {
      iVar4 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
    }
    lVar6 = 0;
    if ((char)iVar4 != '\0') {
      lVar6 = param_2;
    }
    *param_1 = lVar6;
    if (lVar6 != 0) {
      local_78 = *(float *)(lVar6 + 0x210);
      fStack_74 = *(float *)(lVar6 + 0x214);
      fStack_70 = *(float *)(lVar6 + 0x218);
      fStack_6c = *(float *)(lVar6 + 0x21c);
      fVar7 = *(float *)(lVar6 + 0x220);
      fVar8 = *(float *)(lVar6 + 0x224);
      uVar3 = *(undefined8 *)(lVar6 + 0x220);
      fVar9 = *(float *)(lVar6 + 0x228);
      auVar11._4_4_ = -(uint)(*(float *)(lVar6 + 0x254) != fStack_74);
      auVar11._0_4_ = -(uint)(*(float *)(lVar6 + 0x250) != local_78);
      auVar11._8_4_ = -(uint)(*(float *)(lVar6 + 600) != fStack_70);
      auVar11._12_4_ = -(uint)(*(float *)(lVar6 + 0x25c) != fStack_6c);
      iVar4 = movmskps(iVar4,auVar11);
      if (iVar4 != 0) {
        *(float *)(lVar6 + 0x250) = local_78;
        *(float *)(lVar6 + 0x254) = fStack_74;
        *(float *)(lVar6 + 600) = fStack_70;
        *(float *)(lVar6 + 0x25c) = fStack_6c;
        puVar5 = (undefined8 *)FQuat::Rotator(&local_78,local_88);
        *(undefined8 *)(lVar6 + 0x260) = *puVar5;
        *(undefined4 *)(lVar6 + 0x268) = *(undefined4 *)(puVar5 + 1);
      }
      local_98 = *(longlong *)(lVar6 + 0x260);
      local_90 = *(undefined4 *)(lVar6 + 0x268);
      *(undefined8 *)((longlong)param_1 + 0x14) = uVar3;
      param_1[4] = local_98;
      *(undefined4 *)(param_1 + 5) = local_90;
      *(float *)((longlong)param_1 + 0x1c) = fVar9;
      *(undefined8 *)((longlong)param_1 + 0x2c) = *(undefined8 *)param_3;
      *(float *)((longlong)param_1 + 0x34) = param_3[2];
      fVar10 = *param_3;
      fVar12 = param_3[1];
      fVar13 = param_3[2];
      FRotator::Quaternion(&local_98,&local_78);
      local_78 = local_78 * _DAT_146b2e5c0;
      fStack_74 = fStack_74 * fRam0000000146b2e5c4;
      fStack_70 = fStack_70 * fRam0000000146b2e5c8;
      fStack_6c = fStack_6c * fRam0000000146b2e5cc;
      fVar17 = (float)(_DAT_146b2e500 & _DAT_146b2e510);
      fVar18 = (float)(uRam0000000146b2e504 & uRam0000000146b2e514);
      fVar19 = (float)(uRam0000000146b2e508 & uRam0000000146b2e518);
      fVar14 = (float)((uint)(fVar10 - fVar7) & _DAT_146b2e510);
      fVar15 = (float)((uint)(fVar12 - fVar8) & uRam0000000146b2e514);
      fVar16 = (float)((uint)(fVar13 - fVar9) & uRam0000000146b2e518);
      auVar2._4_4_ = fVar18;
      auVar2._0_4_ = fVar17;
      auVar2._8_4_ = fVar19;
      auVar2._12_4_ = uRam0000000146b2e50c & uRam0000000146b2e51c;
      auVar11 = rcpps(in_XMM5,auVar2);
      fVar7 = fVar16 * fStack_74 - fVar15 * fStack_70;
      fVar8 = fVar14 * fStack_70 - fVar16 * local_78;
      fVar9 = fVar15 * local_78 - fVar14 * fStack_74;
      fVar10 = auVar11._0_4_;
      fVar12 = auVar11._4_4_;
      fVar13 = auVar11._8_4_;
      fVar7 = fVar7 + fVar7;
      fVar8 = fVar8 + fVar8;
      fVar9 = fVar9 + fVar9;
      fVar10 = (fVar10 + fVar10) - fVar10 * fVar10 * fVar17;
      fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar18;
      fVar13 = (fVar13 + fVar13) - fVar13 * fVar13 * fVar19;
      bVar1 = (float)((uint)fVar19 & uRam0000000146b2e558) <= fRam0000000146b2e5b8;
      fVar10 = (fVar10 + fVar10) - fVar10 * fVar10 * fVar17;
      fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar18;
      fVar13 = (fVar13 + fVar13) - fVar13 * fVar13 * fVar19;
      param_1[1] = CONCAT44(((fVar7 * fStack_70 - fVar9 * local_78) + fStack_6c * fVar8 + fVar15) *
                            (float)(-(uint)((float)((uint)fVar18 & uRam0000000146b2e554) <=
                                           fRam0000000146b2e5b4) & (uint)fVar12 ^ (uint)fVar12),
                            ((fVar9 * fStack_74 - fVar8 * fStack_70) + fStack_6c * fVar7 + fVar14) *
                            (float)(-(uint)((float)((uint)fVar17 & _DAT_146b2e550) <= _DAT_146b2e5b0
                                           ) & (uint)fVar10 ^ (uint)fVar10));
      *(float *)(param_1 + 2) =
           ((fVar8 * local_78 - fVar7 * fStack_74) + fStack_6c * fVar9 + fVar16) *
           (float)(-(uint)bVar1 & (uint)fVar13 ^ (uint)fVar13);
      return;
    }
    param_1[1] = *(longlong *)param_3;
    fVar7 = param_3[2];
  }
  else {
    *param_1 = 0;
    param_1[1] = _DAT_1468b5d90;
    fVar7 = DAT_1468b5d98;
  }
  *(float *)(param_1 + 2) = fVar7;
  return;
}



// FUNCTION 142c4aa60 FUN_142c4aa60 body=39 status=ok
// SIG undefined FUN_142c4aa60(void)

void FUN_142c4aa60(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *param_1 - param_1[1];
  if (param_2 <= *param_1 - param_1[1]) {
    fVar1 = param_2;
  }
  fVar2 = (param_2 - fVar1) * 0.5;
  param_1[1] = fVar2;
  *param_1 = fVar2 + fVar1;
  return;
}



// FUNCTION 142c4aa90 FUN_142c4aa90 body=137 status=ok
// SIG undefined FUN_142c4aa90(void)

void FUN_142c4aa90(float *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_1[1] + *param_1;
  if (param_3 < param_2) {
    if (fVar1 <= param_3) {
      fVar1 = param_3;
    }
    fVar1 = (fVar1 - param_3) * 0.5;
    fVar1 = (fVar1 + param_3) - fVar1;
    if (param_2 <= fVar1) {
      fVar1 = param_2;
    }
    fVar2 = (param_2 - fVar1) * 0.5;
    param_1[1] = fVar2;
    *param_1 = fVar2 + fVar1;
    return;
  }
  if (fVar1 <= param_2) {
    fVar1 = param_2;
  }
  fVar1 = (fVar1 - param_2) * 0.5;
  fVar1 = (fVar1 + param_2) - fVar1;
  if (param_3 <= fVar1) {
    fVar1 = param_3;
  }
  fVar2 = (param_3 - fVar1) * 0.5;
  param_1[1] = fVar2;
  *param_1 = fVar2 + fVar1;
  return;
}



// FUNCTION 142c4ab20 FUN_142c4ab20 body=39 status=ok
// SIG undefined FUN_142c4ab20(void)

void FUN_142c4ab20(float *param_1,float param_2)

{
  float fVar1;
  
  fVar1 = *param_1 + param_1[1];
  if (*param_1 + param_1[1] <= param_2) {
    fVar1 = param_2;
  }
  fVar1 = (fVar1 - param_2) * 0.5;
  param_1[1] = fVar1;
  *param_1 = fVar1 + param_2;
  return;
}



// FUNCTION 142c4ab50 FUN_142c4ab50 body=442 status=ok
// SIG undefined FUN_142c4ab50(void)

longlong *
FUN_142c4ab50(longlong param_1,longlong param_2,longlong param_3,float param_4,undefined1 *param_5)

{
  longlong *plVar1;
  float fVar2;
  char cVar3;
  undefined1 *puVar4;
  BOOL BVar5;
  longlong lVar6;
  float fVar7;
  undefined1 *local_res8;
  undefined1 **local_res10;
  
  puVar4 = param_5;
  *param_5 = 0;
  cVar3 = *(char *)(param_1 + 0x29);
  if (cVar3 == '\0') {
    fVar7 = 3.0;
  }
  else if (cVar3 == '\x01') {
    fVar7 = 1.0;
  }
  else if (cVar3 == '\x02') {
    fVar7 = 0.5;
  }
  else if (cVar3 == '\x03') {
    fVar7 = 0.25;
  }
  else {
    fVar7 = 0.0;
  }
  BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b2e4c8);
  if (BVar5 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b2e4c8);
  }
  local_res8 = (undefined1 *)0xffffffff;
  if (param_2 != 0) {
    FWeakObjectPtr::operator=(&param_5,param_2);
    local_res8 = param_5;
  }
  plVar1 = (longlong *)(param_1 + 0x30);
  FUN_142c495b0(plVar1,&param_5,&local_res8);
  if (((int)param_5 == -1) || (lVar6 = (longlong)(int)param_5 * 0x20 + *plVar1, lVar6 == 0)) {
    local_res10 = &local_res8;
    FUN_142c480d0(plVar1,&param_5,&local_res10,0);
    lVar6 = (longlong)(int)param_5 * 0x20 + *plVar1;
  }
  if (param_3 == 0) {
    param_5 = (undefined1 *)0x0;
  }
  else {
    param_5 = *(undefined1 **)(param_3 + 0x18);
  }
  fVar2 = *(float *)(lVar6 + 0x10);
  if ((((0.0 < fVar2) && (fVar2 < param_4)) && (param_4 - fVar2 < fVar7)) &&
     ((undefined1 *)*(longlong *)(lVar6 + 8) == param_5)) {
    *puVar4 = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b2e4c8);
  return (longlong *)(lVar6 + 8);
}



// FUNCTION 142c4ad10 Shrink body=437 status=ok
// SIG undefined Shrink(void)

void TSparseArray<TSetElement<TTuple<AActor_*,FLastHitInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Shrink(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  int local_28;
  uint local_24;
  uint *local_20;
  uint local_18;
  undefined8 local_14;
  
  uVar10 = 0;
  local_28 = 0;
  iVar2 = (int)param_1[5];
  local_20 = (uint *)(param_1 + 2);
  local_24 = 1;
  iVar9 = -1;
  local_14 = 0;
  iVar5 = 0;
  if (iVar2 != 0) {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = local_20;
    }
    uVar1 = *puVar8;
    iVar4 = local_28;
    while (uVar1 == 0) {
      uVar10 = uVar10 + 0x20;
      local_28 = iVar4 + 1;
      local_14 = (ulonglong)uVar10 << 0x20;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) {
        local_14 = CONCAT44(uVar10,iVar2);
        iVar5 = iVar2;
        goto LAB_142c4aded;
      }
      uVar1 = puVar8[(longlong)iVar4 + 1];
      iVar4 = local_28;
    }
    local_24 = -uVar1 & uVar1;
    iVar5 = 0x1f;
    if (local_24 != 0) {
      for (; local_24 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (local_24 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    iVar5 = (uVar10 - iVar5) + 0x1f;
    if (iVar2 < iVar5) {
      iVar5 = iVar2;
    }
    uVar7 = (ulonglong)local_14 >> 0x20;
    local_14 = CONCAT44((int)uVar7,iVar5);
    local_28 = iVar4;
  }
LAB_142c4aded:
  uVar10 = 0xffffffff;
  if (iVar5 < iVar2) {
    do {
      if (iVar5 <= iVar9) {
        iVar5 = iVar9;
      }
      iVar9 = iVar5;
      local_18 = uVar10 & ~local_24;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_28);
      uVar10 = local_18;
      iVar5 = (int)local_14;
    } while ((int)local_14 < (int)local_20[6]);
  }
  iVar5 = (int)param_1[1];
  iVar9 = iVar9 + 1;
  if (iVar9 < iVar5) {
    if ((0 < *(int *)((longlong)param_1 + 0x34)) &&
       (uVar7 = (ulonglong)*(uint *)(param_1 + 6), *(uint *)(param_1 + 6) != 0xffffffff)) {
      do {
        lVar3 = *param_1;
        lVar6 = (longlong)(int)uVar7 * 0x20;
        if ((int)uVar7 < iVar9) {
          uVar7 = (ulonglong)*(uint *)(lVar6 + 4 + lVar3);
        }
        else {
          iVar5 = *(int *)(lVar6 + 4 + lVar3);
          uVar7 = (ulonglong)iVar5;
          iVar2 = *(int *)(lVar6 + lVar3);
          if (iVar5 != -1) {
            *(int *)(uVar7 * 0x20 + lVar3) = iVar2;
          }
          if (iVar2 == -1) {
            *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
            *(int *)(param_1 + 6) = iVar5;
          }
          else {
            *(int *)((longlong)iVar2 * 0x20 + 4 + *param_1) = iVar5;
            *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
          }
        }
      } while ((int)uVar7 != -1);
      iVar5 = (int)param_1[1];
    }
    if (iVar5 != iVar9) {
      *(int *)(param_1 + 1) = iVar9;
      TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(param_1);
    }
    *(int *)(param_1 + 5) = iVar9;
  }
  if (*(int *)((longlong)param_1 + 0xc) != (int)param_1[1]) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1);
    return;
  }
  return;
}



// FUNCTION 142c4aed0 FUN_142c4aed0 body=631 status=ok
// SIG undefined FUN_142c4aed0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c4aed0(void)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined1 local_res8 [8];
  
  lVar3 = DAT_146b2e4f0;
  if (DAT_146b2e4f0 != 0) {
    uVar7 = 0;
    uVar6 = uVar7;
    uVar10 = uVar7;
    iVar4 = DAT_1464af798;
    if (0 < DAT_1464af798) {
      do {
        plVar9 = (longlong *)(DAT_1464af790 + uVar10);
        if ((((int)plVar9[1] != 0) && (plVar2 = (longlong *)*plVar9, plVar2 != (longlong *)0x0)) &&
           (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8),
           iVar4 = DAT_1464af798, *plVar2 == lVar3)) {
          if (((int)plVar9[1] != 0) && (plVar2 = (longlong *)*plVar9, plVar2 != (longlong *)0x0)) {
            (**(code **)(*plVar2 + 0x28))(plVar2,0);
            if (*plVar9 != 0) {
              lVar3 = FMemory::Realloc(*plVar9,0,0);
              *plVar9 = lVar3;
            }
            *(undefined4 *)(plVar9 + 1) = 0;
            iVar4 = DAT_1464af798;
          }
          break;
        }
        uVar8 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar8;
        uVar10 = uVar10 + 0x10;
      } while ((int)uVar8 < iVar4);
    }
    if (DAT_1464af7a4 < 1) {
      uVar6 = uVar7;
      uVar10 = uVar7;
      iVar5 = iVar4;
      if (0 < iVar4) {
        do {
          if (((*(int *)(uVar10 + 8 + DAT_1464af790) == 0) ||
              (*(longlong **)(uVar10 + DAT_1464af790) == (longlong *)0x0)) ||
             (cVar1 = (**(code **)(**(longlong **)(uVar10 + DAT_1464af790) + 0x10))(), cVar1 != '\0'
             )) {
            TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1464af790,uVar6,1,1);
          }
          else {
            uVar6 = (ulonglong)((int)uVar6 + 1);
            uVar10 = uVar10 + 0x10;
          }
          iVar5 = DAT_1464af798;
        } while ((int)uVar6 < DAT_1464af798);
      }
      _DAT_1464af7a0 = iVar5 * 2;
      if (_DAT_1464af7a0 < 3) {
        _DAT_1464af7a0 = 2;
      }
      if ((_DAT_1464af7a0 < iVar4) && (DAT_1464af79c != iVar5)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464af790);
      }
    }
    lVar3 = DAT_146b2e4f8;
    uVar6 = uVar7;
    uVar10 = uVar7;
    iVar4 = DAT_1464af018;
    if (0 < DAT_1464af018) {
      do {
        plVar9 = (longlong *)(DAT_1464af010 + uVar10);
        if ((((int)plVar9[1] != 0) && (plVar2 = (longlong *)*plVar9, plVar2 != (longlong *)0x0)) &&
           (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8),
           iVar4 = DAT_1464af018, *plVar2 == lVar3)) {
          if (((int)plVar9[1] != 0) && (plVar2 = (longlong *)*plVar9, plVar2 != (longlong *)0x0)) {
            (**(code **)(*plVar2 + 0x28))(plVar2,0);
            if (*plVar9 != 0) {
              lVar3 = FMemory::Realloc(*plVar9,0,0);
              *plVar9 = lVar3;
            }
            *(undefined4 *)(plVar9 + 1) = 0;
            iVar4 = DAT_1464af018;
          }
          break;
        }
        uVar8 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar8;
        uVar10 = uVar10 + 0x10;
      } while ((int)uVar8 < iVar4);
    }
    if (DAT_1464af024 < 1) {
      uVar6 = uVar7;
      iVar5 = iVar4;
      if (0 < iVar4) {
        do {
          if (((*(int *)(uVar7 + 8 + DAT_1464af010) == 0) ||
              (*(longlong **)(uVar7 + DAT_1464af010) == (longlong *)0x0)) ||
             (cVar1 = (**(code **)(**(longlong **)(uVar7 + DAT_1464af010) + 0x10))(), cVar1 != '\0')
             ) {
            TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1464af010,uVar6,1,1);
          }
          else {
            uVar6 = (ulonglong)((int)uVar6 + 1);
            uVar7 = uVar7 + 0x10;
          }
          iVar5 = DAT_1464af018;
        } while ((int)uVar6 < DAT_1464af018);
      }
      _DAT_1464af020 = iVar5 * 2;
      if (_DAT_1464af020 < 3) {
        _DAT_1464af020 = 2;
      }
      if ((_DAT_1464af020 < iVar4) && (DAT_1464af01c != iVar5)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464af010);
      }
    }
  }
  return;
}



// FUNCTION 142c4b150 FUN_142c4b150 body=117 status=ok
// SIG undefined FUN_142c4b150(void)

undefined8 FUN_142c4b150(float *param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_1[1];
  fVar2 = *param_1;
  if (ABS(fVar1) <= 1e-08) {
    FString::PrintfImpl(param_2,&DAT_145831d3c,(double)fVar2);
    return param_2;
  }
  FString::PrintfImpl(param_2,L"[%g, %g]",(double)(fVar2 - fVar1),(double)(fVar1 + fVar2));
  return param_2;
}



// FUNCTION 142c4b1d0 FUN_142c4b1d0 body=98 status=ok
// SIG undefined FUN_142c4b1d0(void)

undefined8 FUN_142c4b1d0(float *param_1,undefined8 param_2)

{
  if (ABS(param_1[1]) <= 1e-08) {
    FString::PrintfImpl(param_2,&DAT_145831d3c,(double)*param_1);
    return param_2;
  }
  FString::PrintfImpl(param_2,L"%g +-%g",(double)*param_1,(double)param_1[1]);
  return param_2;
}



// FUNCTION 142c4b240 FUN_142c4b240 body=45 status=ok
// SIG undefined FUN_142c4b240(void)

undefined8 FUN_142c4b240(float *param_1,undefined8 param_2)

{
  FString::PrintfImpl(param_2,&DAT_145831d3c,(double)*param_1);
  return param_2;
}



// FUNCTION 142c4b270 FUN_142c4b270 body=47 status=ok
// SIG undefined FUN_142c4b270(void)

longlong FUN_142c4b270(void)

{
  if (DAT_146b2e650 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146b2e650,&PTR_s__Script_GbxRuntime_1458335b0);
  }
  return DAT_146b2e650;
}



// FUNCTION 142c4b2a0 FUN_142c4b2a0 body=47 status=ok
// SIG undefined FUN_142c4b2a0(void)

longlong FUN_142c4b2a0(void)

{
  if (DAT_146b2e620 == 0) {
    FUN_141786440(&DAT_146b2e620,&PTR_LAB_145832520);
  }
  return DAT_146b2e620;
}



// FUNCTION 142c4b2d0 FUN_142c4b2d0 body=47 status=ok
// SIG undefined FUN_142c4b2d0(void)

longlong FUN_142c4b2d0(void)

{
  if (DAT_146b2e610 == 0) {
    FUN_141786a30(&DAT_146b2e610,&PTR_FUN_1466aa730);
  }
  return DAT_146b2e610;
}



// FUNCTION 142c4b300 FUN_142c4b300 body=47 status=ok
// SIG undefined FUN_142c4b300(void)

longlong FUN_142c4b300(void)

{
  if (DAT_146b2e618 == 0) {
    FUN_141786a30(&DAT_146b2e618,&PTR_FUN_1466aa890);
  }
  return DAT_146b2e618;
}



// FUNCTION 142c4b350 FUN_142c4b350 body=47 status=ok
// SIG undefined FUN_142c4b350(void)

longlong FUN_142c4b350(void)

{
  if (DAT_146b2e630 == 0) {
    FUN_141786440(&DAT_146b2e630,&PTR_thunk_FUN_142c4ba60_145832690);
  }
  return DAT_146b2e630;
}



// FUNCTION 142c4b390 FUN_142c4b390 body=162 status=ok
// SIG undefined FUN_142c4b390(void)

longlong FUN_142c4b390(void)

{
  if (DAT_146b2e648 == 0) {
    FUN_14171ccd0(L"/Script/GbxRuntime",L"GbxDataAssetBlueprintable",&DAT_146b2e648,FUN_140447710,
                  0x30,0x10000001,0,L"Engine",FUN_1405fc740,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146b2e648;
}



// FUNCTION 142c4b450 FUN_142c4b450 body=53 status=ok
// SIG undefined FUN_142c4b450(void)

void FUN_142c4b450(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &PTR_FUN_144128cb8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142c4b490 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UBlueprintSetLibrary::GetPrivateStaticClass(void)

{
  if (DAT_146b2e6f8 == 0) {
    FUN_14171ccd0(L"/Script/GbxRuntime",L"NumericRangeExt",&DAT_146b2e6f8,
                  StaticRegisterNativesUBlueprintSetLibrary,0x28,0x10000000,0,L"Engine",
                  FUN_1405d87d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_146b2e6f8;
}



// FUNCTION 142c4b540 FUN_142c4b540 body=47 status=ok
// SIG undefined FUN_142c4b540(void)

longlong FUN_142c4b540(void)

{
  if (DAT_146b2e6f0 == 0) {
    FUN_141786440(&DAT_146b2e6f0,&PTR_GetPrivateStaticClass_145833040);
  }
  return DAT_146b2e6f0;
}



// FUNCTION 142c4b570 FUN_142c4b570 body=47 status=ok
// SIG undefined FUN_142c4b570(void)

longlong FUN_142c4b570(void)

{
  if (DAT_146b2e690 == 0) {
    FUN_141786a30(&DAT_146b2e690,&PTR_FUN_1466aab90);
  }
  return DAT_146b2e690;
}



// FUNCTION 142c4b5a0 FUN_142c4b5a0 body=47 status=ok
// SIG undefined FUN_142c4b5a0(void)

longlong FUN_142c4b5a0(void)

{
  if (DAT_146b2e698 == 0) {
    FUN_141786a30(&DAT_146b2e698,&PTR_FUN_1466aac80);
  }
  return DAT_146b2e698;
}



// FUNCTION 142c4b5d0 FUN_142c4b5d0 body=47 status=ok
// SIG undefined FUN_142c4b5d0(void)

longlong FUN_142c4b5d0(void)

{
  if (DAT_146b2e6a0 == 0) {
    FUN_141786a30(&DAT_146b2e6a0,&PTR_FUN_1466aad70);
  }
  return DAT_146b2e6a0;
}



// FUNCTION 142c4b600 FUN_142c4b600 body=47 status=ok
// SIG undefined FUN_142c4b600(void)

longlong FUN_142c4b600(void)

{
  if (DAT_146b2e6a8 == 0) {
    FUN_141786a30(&DAT_146b2e6a8,&PTR_FUN_1466aadf0);
  }
  return DAT_146b2e6a8;
}



// FUNCTION 142c4b630 FUN_142c4b630 body=47 status=ok
// SIG undefined FUN_142c4b630(void)

longlong FUN_142c4b630(void)

{
  if (DAT_146b2e6b0 == 0) {
    FUN_141786a30(&DAT_146b2e6b0,&PTR_FUN_1466aaee0);
  }
  return DAT_146b2e6b0;
}



// FUNCTION 142c4b660 FUN_142c4b660 body=47 status=ok
// SIG undefined FUN_142c4b660(void)

longlong FUN_142c4b660(void)

{
  if (DAT_146b2e6b8 == 0) {
    FUN_141786a30(&DAT_146b2e6b8,&PTR_FUN_1466aafe0);
  }
  return DAT_146b2e6b8;
}



// FUNCTION 142c4b690 FUN_142c4b690 body=47 status=ok
// SIG undefined FUN_142c4b690(void)

longlong FUN_142c4b690(void)

{
  if (DAT_146b2e6c0 == 0) {
    FUN_141786a30(&DAT_146b2e6c0,&PTR_FUN_1466ab060);
  }
  return DAT_146b2e6c0;
}



// FUNCTION 142c4b6c0 FUN_142c4b6c0 body=47 status=ok
// SIG undefined FUN_142c4b6c0(void)

longlong FUN_142c4b6c0(void)

{
  if (DAT_146b2e6c8 == 0) {
    FUN_141786a30(&DAT_146b2e6c8,&PTR_FUN_1466ab150);
  }
  return DAT_146b2e6c8;
}



// FUNCTION 142c4b6f0 FUN_142c4b6f0 body=47 status=ok
// SIG undefined FUN_142c4b6f0(void)

longlong FUN_142c4b6f0(void)

{
  if (DAT_146b2e6d0 == 0) {
    FUN_141786a30(&DAT_146b2e6d0,&PTR_FUN_1466ab1d0);
  }
  return DAT_146b2e6d0;
}



// FUNCTION 142c4b720 FUN_142c4b720 body=47 status=ok
// SIG undefined FUN_142c4b720(void)

longlong FUN_142c4b720(void)

{
  if (DAT_146b2e6d8 == 0) {
    FUN_141786a30(&DAT_146b2e6d8,&PTR_FUN_1466ab2c0);
  }
  return DAT_146b2e6d8;
}



// FUNCTION 142c4b750 FUN_142c4b750 body=47 status=ok
// SIG undefined FUN_142c4b750(void)

longlong FUN_142c4b750(void)

{
  if (DAT_146b2e6e0 == 0) {
    FUN_141786a30(&DAT_146b2e6e0,&PTR_FUN_1466ab340);
  }
  return DAT_146b2e6e0;
}



// FUNCTION 142c4b780 FUN_142c4b780 body=47 status=ok
// SIG undefined FUN_142c4b780(void)

longlong FUN_142c4b780(void)

{
  if (DAT_146b2e6e8 == 0) {
    FUN_141786a30(&DAT_146b2e6e8,&PTR_FUN_1466ab420);
  }
  return DAT_146b2e6e8;
}



// FUNCTION 142c4b7c0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AXScriptedBotSpawner::GetPrivateStaticClass(void)

{
  if (DAT_146b2e708 == 0) {
    FUN_14171ccd0(L"/Script/GbxRuntime",L"RenderActor",&DAT_146b2e708,FUN_140447710,0x458,0x10000001
                  ,0,L"Engine",FUN_141316b30,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_146b2e708;
}



// FUNCTION 142c4b880 FUN_142c4b880 body=90 status=ok
// SIG undefined FUN_142c4b880(void)

void FUN_142c4b880(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *(undefined1 *)((longlong)puVar1 + 0x29) = 3;
    *puVar1 = &PTR__scalar_deleting_destructor__144074b50;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 100) = 0;
    puVar1[0xe] = 0;
    *(undefined4 *)(puVar1 + 0xf) = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0xbf800000;
  }
  return;
}



// FUNCTION 142c4b900 FUN_142c4b900 body=85 status=ok
// SIG undefined FUN_142c4b900(void)

void FUN_142c4b900(void)

{
  if (DAT_146b2e5e8 == 0) {
    if (DAT_146b2e650 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b2e650,&PTR_s__Script_GbxRuntime_1458335b0);
    }
    DAT_146b2e5e8 = GetStaticEnum(FUN_142c4be10,DAT_146b2e650,L"EConditionRefreshRate");
  }
  return;
}



// FUNCTION 142c4b960 FUN_142c4b960 body=85 status=ok
// SIG undefined FUN_142c4b960(void)

void FUN_142c4b960(void)

{
  if (DAT_146b2e5f0 == 0) {
    if (DAT_146b2e650 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b2e650,&PTR_s__Script_GbxRuntime_1458335b0);
    }
    DAT_146b2e5f0 = GetStaticEnum(FUN_142c4be40,DAT_146b2e650,L"ENumericRangeEditMode");
  }
  return;
}



// FUNCTION 142c4b9c0 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMaterialInterface::GetPrivateStaticClass(void)

{
  if (DAT_146b2e628 == 0) {
    FUN_14171ccd0(L"/Script/GbxRuntime",L"GbxCondition",&DAT_146b2e628,FUN_142c4bb50,0x88,0x10000001
                  ,0,L"Engine",FUN_142c4b880,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b2e628;
}



// FUNCTION 142c4ba60 FUN_142c4ba60 body=162 status=ok
// SIG undefined FUN_142c4ba60(void)

longlong FUN_142c4ba60(void)

{
  if (DAT_146b2e638 == 0) {
    FUN_14171ccd0(L"/Script/GbxRuntime",L"GbxDataAsset",&DAT_146b2e638,FUN_140447710,0x30,0x10000001
                  ,0,L"Engine",&LAB_142c4b8e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDataAsset::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b2e638;
}



// FUNCTION 142c4bb10 FUN_142c4bb10 body=6 status=ok
// SIG undefined FUN_142c4bb10(void)

undefined8 FUN_142c4bb10(void)

{
  return 0xbf5be933;
}



// FUNCTION 142c4bb20 FUN_142c4bb20 body=6 status=ok
// SIG undefined FUN_142c4bb20(void)

undefined8 FUN_142c4bb20(void)

{
  return 0x3e66936c;
}



// FUNCTION 142c4bb30 FUN_142c4bb30 body=6 status=ok
// SIG undefined FUN_142c4bb30(void)

undefined8 FUN_142c4bb30(void)

{
  return 0xc3da5403;
}



// FUNCTION 142c4bb40 FUN_142c4bb40 body=6 status=ok
// SIG undefined FUN_142c4bb40(void)

undefined8 FUN_142c4bb40(void)

{
  return 0x38cc23f;
}



// FUNCTION 142c4bb50 FUN_142c4bb50 body=34 status=ok
// SIG undefined FUN_142c4bb50(void)

void FUN_142c4bb50(void)

{
  undefined8 uVar1;
  
  uVar1 = UMaterialInterface::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_K2_EvaluateCondition_145833590,2);
  return;
}



// FUNCTION 142c4bb80 StaticRegisterNativesUBlueprintSetLibrary body=34 status=ok
// SIG undefined StaticRegisterNativesUBlueprintSetLibrary(void)

void UBlueprintSetLibrary::StaticRegisterNativesUBlueprintSetLibrary(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_CreateNumericRange_145833620,0xc);
  return;
}



// FUNCTION 142c4bbb0 FUN_142c4bbb0 body=113 status=ok
// SIG undefined FUN_142c4bbb0(void)

void FUN_142c4bbb0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b2e658 == 0) {
    if (DAT_146b2e650 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b2e650,&PTR_s__Script_GbxRuntime_1458335b0);
    }
    lVar1 = DAT_146b2e650;
    uVar2 = FUN_142c4bb10();
    DAT_146b2e658 = GetStaticStruct(FUN_142c4be70,lVar1,L"GbxStructPtrParam",8,uVar2);
  }
  return;
}



// FUNCTION 142c4bc30 FUN_142c4bc30 body=113 status=ok
// SIG undefined FUN_142c4bc30(void)

void FUN_142c4bc30(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b2e668 == 0) {
    if (DAT_146b2e650 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b2e650,&PTR_s__Script_GbxRuntime_1458335b0);
    }
    lVar1 = DAT_146b2e650;
    uVar2 = FUN_142c4bb20();
    DAT_146b2e668 = GetStaticStruct(FUN_142c4bea0,lVar1,L"GbxTriggerProperty",1,uVar2);
  }
  return;
}



// FUNCTION 142c4bcb0 FUN_142c4bcb0 body=113 status=ok
// SIG undefined FUN_142c4bcb0(void)

void FUN_142c4bcb0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b2e680 == 0) {
    if (DAT_146b2e650 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b2e650,&PTR_s__Script_GbxRuntime_1458335b0);
    }
    lVar1 = DAT_146b2e650;
    uVar2 = FUN_142c4bb30();
    DAT_146b2e680 = GetStaticStruct(FUN_142c4bed0,lVar1,L"NumericRange",8,uVar2);
  }
  return;
}



// FUNCTION 142c4bd30 FUN_142c4bd30 body=113 status=ok
// SIG undefined FUN_142c4bd30(void)

void FUN_142c4bd30(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b2e710 == 0) {
    if (DAT_146b2e650 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b2e650,&PTR_s__Script_GbxRuntime_1458335b0);
    }
    lVar1 = DAT_146b2e650;
    uVar2 = FUN_142c4bb40();
    DAT_146b2e710 = GetStaticStruct(FUN_142c4bf00,lVar1,L"SceneBasedPosition",0x38,uVar2);
  }
  return;
}



// FUNCTION 142c4bdb0 FUN_142c4bdb0 body=47 status=ok
// SIG undefined FUN_142c4bdb0(void)

longlong FUN_142c4bdb0(void)

{
  if (DAT_146b2e700 == 0) {
    FUN_141786440(&DAT_146b2e700,&PTR_GetPrivateStaticClass_145833230);
  }
  return DAT_146b2e700;
}



// FUNCTION 142c4bde0 FUN_142c4bde0 body=47 status=ok
// SIG undefined FUN_142c4bde0(void)

longlong FUN_142c4bde0(void)

{
  if (DAT_146b2e640 == 0) {
    FUN_141786440(&DAT_146b2e640,&PTR_FUN_145832790);
  }
  return DAT_146b2e640;
}



// FUNCTION 142c4be10 FUN_142c4be10 body=47 status=ok
// SIG undefined FUN_142c4be10(void)

longlong FUN_142c4be10(void)

{
  if (DAT_146b2e608 == 0) {
    FUN_1417866a0(&DAT_146b2e608,&PTR_FUN_1466aa5f0);
  }
  return DAT_146b2e608;
}



// FUNCTION 142c4be40 FUN_142c4be40 body=47 status=ok
// SIG undefined FUN_142c4be40(void)

longlong FUN_142c4be40(void)

{
  if (DAT_146b2e678 == 0) {
    FUN_1417866a0(&DAT_146b2e678,&PTR_FUN_1466ab620);
  }
  return DAT_146b2e678;
}



// FUNCTION 142c4be70 FUN_142c4be70 body=47 status=ok
// SIG undefined FUN_142c4be70(void)

longlong FUN_142c4be70(void)

{
  if (DAT_146b2e660 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b2e660,&PTR_FUN_1466aa9d0);
  }
  return DAT_146b2e660;
}



// FUNCTION 142c4bea0 FUN_142c4bea0 body=47 status=ok
// SIG undefined FUN_142c4bea0(void)

longlong FUN_142c4bea0(void)

{
  if (DAT_146b2e670 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b2e670,&PTR_FUN_1466aaa50);
  }
  return DAT_146b2e670;
}



// FUNCTION 142c4bed0 FUN_142c4bed0 body=47 status=ok
// SIG undefined FUN_142c4bed0(void)

longlong FUN_142c4bed0(void)

{
  if (DAT_146b2e688 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b2e688,&PTR_FUN_1466aaad0);
  }
  return DAT_146b2e688;
}



// FUNCTION 142c4bf00 FUN_142c4bf00 body=47 status=ok
// SIG undefined FUN_142c4bf00(void)

longlong FUN_142c4bf00(void)

{
  if (DAT_146b2e718 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b2e718,&PTR_FUN_1466ab5d0);
  }
  return DAT_146b2e718;
}



// FUNCTION 142c4bf30 FUN_142c4bf30 body=202 status=ok
// SIG undefined FUN_142c4bf30(void)

void FUN_142c4bf30(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined8 local_res20;
  
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
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
  FUN_142c48df0(&local_res20,local_res18[0],local_res10[0]);
  *param_3 = local_res20;
  return;
}



// FUNCTION 142c4c000 FUN_142c4c000 body=148 status=ok
// SIG undefined FUN_142c4c000(void)

void FUN_142c4c000(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 local_res10;
  
  local_res10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  puVar1 = &local_res10;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar2 = FUN_142c49730(puVar1);
  *param_3 = uVar2;
  return;
}



// FUNCTION 142c4c0a0 FUN_142c4c0a0 body=152 status=ok
// SIG undefined FUN_142c4c0a0(void)

void FUN_142c4c0a0(undefined8 param_1,longlong param_2,float *param_3)

{
  float *pfVar1;
  float local_res10 [2];
  
  local_res10[0] = 0.0;
  local_res10[1] = 0.0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  pfVar1 = local_res10;
  if (*(float **)(param_2 + 0x38) != (float *)0x0) {
    pfVar1 = *(float **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *param_3 = pfVar1[1] + *pfVar1;
  return;
}



// FUNCTION 142c4c140 FUN_142c4c140 body=209 status=ok
// SIG undefined FUN_142c4c140(void)

void FUN_142c4c140(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined4 local_res10 [2];
  undefined8 local_res18 [2];
  
  local_res18[0] = 0;
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
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
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
  uVar1 = FUN_142c4a520(puVar2,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142c4c220 FUN_142c4c220 body=190 status=ok
// SIG undefined FUN_142c4c220(void)

void FUN_142c4c220(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FUN_142c4a550(local_res18,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142c4c2e0 FUN_142c4c2e0 body=242 status=ok
// SIG undefined FUN_142c4c2e0(void)

void FUN_142c4c2e0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined8 local_res10;
  longlong *local_res18;
  
  local_res18 = (longlong *)0x0;
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
  plVar2 = local_res18;
  uVar1 = local_res10;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  if (local_res18 == (longlong *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = local_res18[0x1f];
    if (lVar4 == 0) {
      (**(code **)(*local_res18 + 0x368))(local_res18);
      lVar4 = plVar2[0x1f];
    }
  }
  uVar3 = FUN_142c4a550(lVar4,uVar1);
  *param_3 = uVar3;
  return;
}



// FUNCTION 142c4c3e0 FUN_142c4c3e0 body=207 status=ok
// SIG undefined FUN_142c4c3e0(void)

void FUN_142c4c3e0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 local_res10 [2];
  undefined8 local_res20;
  
  local_res20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10[0] = 0;
  puVar1 = &local_res20;
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
  FUN_142c4aa60(puVar1,local_res10[0]);
  return;
}



// FUNCTION 142c4c4b0 FUN_142c4c4b0 body=207 status=ok
// SIG undefined FUN_142c4c4b0(void)

void FUN_142c4c4b0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 local_res10 [2];
  undefined8 local_res20;
  
  local_res20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10[0] = 0;
  puVar1 = &local_res20;
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
  FUN_142c4ab20(puVar1,local_res10[0]);
  return;
}



// FUNCTION 142c4c580 FUN_142c4c580 body=225 status=ok
// SIG undefined FUN_142c4c580(void)

void FUN_142c4c580(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 local_res10;
  longlong local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_res10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  puVar1 = &local_res10;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142c4b150(puVar1,&local_18);
  if (param_3 != &local_18) {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = local_18;
    *(undefined4 *)(param_3 + 1) = local_10;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_c;
    return;
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142c4c670 FUN_142c4c670 body=225 status=ok
// SIG undefined FUN_142c4c670(void)

void FUN_142c4c670(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 local_res10;
  longlong local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_res10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  puVar1 = &local_res10;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142c4b1d0(puVar1,&local_18);
  if (param_3 != &local_18) {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = local_18;
    *(undefined4 *)(param_3 + 1) = local_10;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_c;
    return;
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142c4c760 FUN_142c4c760 body=225 status=ok
// SIG undefined FUN_142c4c760(void)

void FUN_142c4c760(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 local_res10;
  longlong local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_res10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  puVar1 = &local_res10;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142c4b240(puVar1,&local_18);
  if (param_3 != &local_18) {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = local_18;
    *(undefined4 *)(param_3 + 1) = local_10;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_c;
    return;
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142c4c850 FUN_142c4c850 body=44 status=ok
// SIG undefined FUN_142c4c850(void)

undefined8 * FUN_142c4c850(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_141781840(param_1,uVar1);
  *param_1 = &PTR_FUN_1458336f8;
  return param_1;
}



// FUNCTION 142c4c8c0 FUN_142c4c8c0 body=151 status=ok
// SIG undefined FUN_142c4c8c0(void)

longlong FUN_142c4c8c0(void)

{
  if (DAT_146b2e730 == 0) {
    FUN_14171ccd0(L"/Script/GbxFluidSimulation",L"FluidSimDataProvider",&DAT_146b2e730,FUN_140447710
                  ,0x28,0x10000001,0,L"Engine",FUN_142c4cbd0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b2e730;
}



// FUNCTION 142c4c960 FUN_142c4c960 body=47 status=ok
// SIG undefined FUN_142c4c960(void)

longlong FUN_142c4c960(void)

{
  if (DAT_146b2e728 == 0) {
    FUN_141786440(&DAT_146b2e728,&PTR_FUN_1458339f0);
  }
  return DAT_146b2e728;
}



// FUNCTION 142c4c990 FUN_142c4c990 body=47 status=ok
// SIG undefined FUN_142c4c990(void)

longlong FUN_142c4c990(void)

{
  if (DAT_146b2e740 == 0) {
    UE4CodeGen_Private::ConstructUPackage
              (&DAT_146b2e740,&PTR_s__Script_GbxFluidSimulation_145833f38);
  }
  return DAT_146b2e740;
}



// FUNCTION 142c4c9e0 FUN_142c4c9e0 body=162 status=ok
// SIG undefined FUN_142c4c9e0(void)

longlong FUN_142c4c9e0(void)

{
  if (DAT_146b2e778 == 0) {
    FUN_14171ccd0(L"/Script/GbxFluidSimulation",L"QuickFluidVelocitySolverDataProvider",
                  &DAT_146b2e778,FUN_142c4ccb0,0x28,0x10000000,0,L"Engine",&LAB_142c4cc00,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_142c4c8c0,&LAB_140447700,0);
  }
  return DAT_146b2e778;
}



// FUNCTION 142c4ca90 FUN_142c4ca90 body=47 status=ok
// SIG undefined FUN_142c4ca90(void)

longlong FUN_142c4ca90(void)

{
  if (DAT_146b2e770 == 0) {
    FUN_141786440(&DAT_146b2e770,&PTR_FUN_145833c00);
  }
  return DAT_146b2e770;
}



// FUNCTION 142c4cac0 FUN_142c4cac0 body=47 status=ok
// SIG undefined FUN_142c4cac0(void)

longlong FUN_142c4cac0(void)

{
  if (DAT_146b2e748 == 0) {
    FUN_141786a30(&DAT_146b2e748,&PTR_FUN_1466ab6c0);
  }
  return DAT_146b2e748;
}



// FUNCTION 142c4caf0 FUN_142c4caf0 body=47 status=ok
// SIG undefined FUN_142c4caf0(void)

longlong FUN_142c4caf0(void)

{
  if (DAT_146b2e750 == 0) {
    FUN_141786a30(&DAT_146b2e750,&PTR_FUN_1466ab700);
  }
  return DAT_146b2e750;
}



// FUNCTION 142c4cb20 FUN_142c4cb20 body=47 status=ok
// SIG undefined FUN_142c4cb20(void)

longlong FUN_142c4cb20(void)

{
  if (DAT_146b2e758 == 0) {
    FUN_141786a30(&DAT_146b2e758,&PTR_FUN_1466ab740);
  }
  return DAT_146b2e758;
}



// FUNCTION 142c4cb50 FUN_142c4cb50 body=47 status=ok
// SIG undefined FUN_142c4cb50(void)

longlong FUN_142c4cb50(void)

{
  if (DAT_146b2e760 == 0) {
    FUN_141786a30(&DAT_146b2e760,&PTR_FUN_1466ab780);
  }
  return DAT_146b2e760;
}



// FUNCTION 142c4cb80 FUN_142c4cb80 body=47 status=ok
// SIG undefined FUN_142c4cb80(void)

longlong FUN_142c4cb80(void)

{
  if (DAT_146b2e768 == 0) {
    FUN_141786a30(&DAT_146b2e768,&PTR_FUN_1466ab7c0);
  }
  return DAT_146b2e768;
}



// FUNCTION 142c4cbd0 FUN_142c4cbd0 body=41 status=ok
// SIG undefined FUN_142c4cbd0(void)

void FUN_142c4cbd0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_1458336f8;
  }
  return;
}



// FUNCTION 142c4cc10 FUN_142c4cc10 body=151 status=ok
// SIG undefined FUN_142c4cc10(void)

longlong FUN_142c4cc10(void)

{
  if (DAT_146b2e788 == 0) {
    FUN_14171ccd0(L"/Script/GbxFluidSimulation",L"VoxelDataProvider",&DAT_146b2e788,FUN_140447710,
                  0x28,0x10000001,0,L"Engine",FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b2e788;
}



// FUNCTION 142c4ccb0 FUN_142c4ccb0 body=34 status=ok
// SIG undefined FUN_142c4ccb0(void)

void FUN_142c4ccb0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142c4c9e0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ClearData_145833f60,5);
  return;
}



// FUNCTION 142c4cce0 FUN_142c4cce0 body=47 status=ok
// SIG undefined FUN_142c4cce0(void)

longlong FUN_142c4cce0(void)

{
  if (DAT_146b2e780 == 0) {
    FUN_141786440(&DAT_146b2e780,&PTR_LAB_145833df0);
  }
  return DAT_146b2e780;
}



// FUNCTION 142c4cd10 FUN_142c4cd10 body=561 status=ok
// SIG undefined FUN_142c4cd10(void)

void FUN_142c4cd10(void)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong local_88 [4];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong *local_28;
  
  puVar3 = (undefined8 *)FName::FName(local_60,"Settings",1);
  plVar4 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar3);
  if (plVar4 != (longlong *)0x0) {
    local_88[1] = 0xd;
    local_88[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_88,0);
    FGenericPlatformString::Memcpy(local_88[0],L"Gbx Feedback",0x1a);
    FText::FromString(local_30,local_88);
    if (local_88[0] != 0) {
      FMemory::Free();
    }
    local_88[2] = 0;
    local_88[3] = 0x15;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_88 + 2,0);
    FGenericPlatformString::Memcpy(local_88[2],L"Gbx Rumble Remapping",0x2a);
    FText::FromString(local_48,local_88 + 2);
    if (local_88[2] != 0) {
      FMemory::Free();
    }
    plVar5 = (longlong *)FUN_142c4dc80();
    lVar6 = plVar5[0x1f];
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x368))(plVar5);
      lVar6 = plVar5[0x1f];
    }
    FWeakObjectPtr::operator=(local_res10,lVar6);
    FName::FName(local_res18,"GbxFeedback",1);
    FName::FName(local_res20,"Plugins",1);
    FName::FName(local_68,"Project",1);
    (**(code **)(*plVar4 + 0x58))
              (plVar4,local_58,local_68,local_res20,local_res18,local_30,local_48,local_res10);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_50 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_40 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_28 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar1 = (int *)((longlong)local_28 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_28 + 8))(local_28,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 142c4cf50 ShutdownModule body=144 status=ok
// SIG undefined ShutdownModule(void)

void FVRExpansionPluginModule::ShutdownModule(void)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_18 [16];
  
  puVar1 = (undefined8 *)FName::FName(local_18,"Settings",1);
  plVar2 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar1);
  if (plVar2 != (longlong *)0x0) {
    FName::FName(local_res10,"GbxFeedback",1);
    FName::FName(local_res18,"Plugins",1);
    FName::FName(local_res20,"Project",1);
    (**(code **)(*plVar2 + 0x70))(plVar2,local_res20,local_res18,local_res10);
  }
  return;
}



// FUNCTION 142c4cfe0 FUN_142c4cfe0 body=490 status=ok
// SIG undefined FUN_142c4cfe0(void)

undefined8 * FUN_142c4cfe0(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  *param_1 = 0;
  param_1[1] = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 3);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x13);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x23);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x33);
  puVar1 = (undefined4 *)FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(param_1 + 3,local_res10,0,0,0,*puVar1);
  puVar1 = (undefined4 *)FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(param_1 + 3,local_res10,0x3f800000,0x3f800000,0,*puVar1);
  *(undefined1 *)(param_1 + 2) = 0;
  puVar1 = (undefined4 *)FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(param_1 + 0x13,local_res10,0,0,0,*puVar1);
  puVar1 = (undefined4 *)FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(param_1 + 0x13,local_res10,0x3f800000,0x3f800000,0,*puVar1);
  *(undefined1 *)(param_1 + 0x12) = 1;
  puVar1 = (undefined4 *)FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(param_1 + 0x23,local_res10,0,0,0,*puVar1);
  puVar1 = (undefined4 *)FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(param_1 + 0x23,local_res10,0x3f800000,0x3f800000,0,*puVar1);
  *(undefined1 *)(param_1 + 0x22) = 2;
  puVar1 = (undefined4 *)FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(param_1 + 0x33,local_res10,0,0,0,*puVar1);
  puVar1 = (undefined4 *)FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(param_1 + 0x33,local_res10,0x3f800000,0x3f800000,0,*puVar1);
  *(undefined1 *)(param_1 + 0x32) = 3;
  return param_1;
}



// FUNCTION 142c4d1d0 FUN_142c4d1d0 body=480 status=ok
// SIG undefined FUN_142c4d1d0(void)

undefined1 * FUN_142c4d1d0(undefined1 *param_1)

{
  undefined4 *puVar1;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 8);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x88);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x108);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x188);
  puVar1 = (undefined4 *)FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(param_1 + 8,local_res10,0,0,0,*puVar1);
  puVar1 = (undefined4 *)FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(param_1 + 8,local_res10,0x3f800000,0x3f800000,0,*puVar1);
  *param_1 = 0;
  puVar1 = (undefined4 *)FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(param_1 + 0x88,local_res10,0,0,0,*puVar1);
  puVar1 = (undefined4 *)FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(param_1 + 0x88,local_res10,0x3f800000,0x3f800000,0,*puVar1);
  param_1[0x80] = 1;
  puVar1 = (undefined4 *)FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(param_1 + 0x108,local_res10,0,0,0,*puVar1);
  puVar1 = (undefined4 *)FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(param_1 + 0x108,local_res10,0x3f800000,0x3f800000,0,*puVar1);
  param_1[0x100] = 2;
  puVar1 = (undefined4 *)FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(param_1 + 0x188,local_res10,0,0,0,*puVar1);
  puVar1 = (undefined4 *)FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(param_1 + 0x188,local_res10,0x3f800000,0x3f800000,0,*puVar1);
  param_1[0x180] = 3;
  return param_1;
}



// FUNCTION 142c4d3b0 FUN_142c4d3b0 body=617 status=ok
// SIG undefined FUN_142c4d3b0(void)

undefined8 * FUN_142c4d3b0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  FUN_141781840();
  *param_1 = &PTR_FUN_145834190;
  FUN_142c4cfe0(param_1 + 5);
  plVar1 = param_1 + 0x47;
  FUN_142c4cfe0(plVar1);
  plVar2 = param_1 + 0x89;
  FUN_142c4cfe0(plVar2);
  plVar3 = param_1 + 0xcb;
  FUN_142c4cfe0(plVar3);
  plVar4 = param_1 + 0x10d;
  FUN_142c4cfe0(plVar4);
  iVar7 = 0;
  iVar6 = 0;
  if ((wchar_t *)param_1[5] != L"Windows") {
    *(undefined4 *)(param_1 + 6) = 0;
    iVar5 = iVar7;
    if (*(int *)((longlong)param_1 + 0x34) != 8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 5,8);
      iVar5 = *(int *)(param_1 + 6);
    }
    *(int *)(param_1 + 6) = iVar5 + 8;
    if (*(int *)((longlong)param_1 + 0x34) < iVar5 + 8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 5);
    }
    builtin_wcsncpy((wchar_t *)param_1[5],L"Windows",8);
  }
  if ((wchar_t *)*plVar1 != L"XBox One") {
    *(undefined4 *)(param_1 + 0x48) = 0;
    iVar5 = iVar7;
    if (*(int *)((longlong)param_1 + 0x244) != 9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar1,9);
      iVar5 = *(int *)(param_1 + 0x48);
    }
    *(int *)(param_1 + 0x48) = iVar5 + 9;
    if (*(int *)((longlong)param_1 + 0x244) < iVar5 + 9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1);
    }
    builtin_wcsncpy((wchar_t *)*plVar1,L"XBox One",9);
  }
  if ((wchar_t *)*plVar2 != L"Playstation 4") {
    *(undefined4 *)(param_1 + 0x8a) = 0;
    iVar5 = iVar7;
    if (*(int *)((longlong)param_1 + 0x454) != 0xe) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar2,0xe);
      iVar5 = *(int *)(param_1 + 0x8a);
    }
    *(int *)(param_1 + 0x8a) = iVar5 + 0xe;
    if (*(int *)((longlong)param_1 + 0x454) < iVar5 + 0xe) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar2);
    }
    builtin_wcsncpy((wchar_t *)*plVar2,L"Playstation 4",0xe);
  }
  if ((wchar_t *)*plVar3 != L"XBox Series X") {
    *(undefined4 *)(param_1 + 0xcc) = 0;
    if (*(int *)((longlong)param_1 + 0x664) != 0xe) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar3,0xe);
      iVar7 = *(int *)(param_1 + 0xcc);
    }
    *(int *)(param_1 + 0xcc) = iVar7 + 0xe;
    if (*(int *)((longlong)param_1 + 0x664) < iVar7 + 0xe) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar3);
    }
    builtin_wcsncpy((wchar_t *)*plVar3,L"XBox Series X",0xe);
  }
  if ((wchar_t *)*plVar4 != L"Playstation 5") {
    *(undefined4 *)(param_1 + 0x10e) = 0;
    if (*(int *)((longlong)param_1 + 0x874) != 0xe) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar4,0xe);
      iVar6 = *(int *)(param_1 + 0x10e);
    }
    *(int *)(param_1 + 0x10e) = iVar6 + 0xe;
    if (*(int *)((longlong)param_1 + 0x874) < iVar6 + 0xe) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar4,iVar6);
    }
    builtin_wcsncpy((wchar_t *)*plVar4,L"Playstation 5",0xe);
  }
  return param_1;
}



// FUNCTION 142c4d620 FUN_142c4d620 body=375 status=ok
// SIG undefined FUN_142c4d620(void)

longlong FUN_142c4d620(longlong param_1,ulonglong param_2)

{
  FRichCurve::~FRichCurve(param_1 + 0xa00);
  FRichCurve::~FRichCurve(param_1 + 0x980);
  FRichCurve::~FRichCurve(param_1 + 0x900);
  FRichCurve::~FRichCurve(param_1 + 0x880);
  if (*(longlong *)(param_1 + 0x868) != 0) {
    FMemory::Free();
  }
  FRichCurve::~FRichCurve(param_1 + 0x7f0);
  FRichCurve::~FRichCurve(param_1 + 0x770);
  FRichCurve::~FRichCurve(param_1 + 0x6f0);
  FRichCurve::~FRichCurve(param_1 + 0x670);
  if (*(longlong *)(param_1 + 0x658) != 0) {
    FMemory::Free();
  }
  FRichCurve::~FRichCurve(param_1 + 0x5e0);
  FRichCurve::~FRichCurve(param_1 + 0x560);
  FRichCurve::~FRichCurve(param_1 + 0x4e0);
  FRichCurve::~FRichCurve(param_1 + 0x460);
  if (*(longlong *)(param_1 + 0x448) != 0) {
    FMemory::Free();
  }
  FRichCurve::~FRichCurve(param_1 + 0x3d0);
  FRichCurve::~FRichCurve(param_1 + 0x350);
  FRichCurve::~FRichCurve(param_1 + 0x2d0);
  FRichCurve::~FRichCurve(param_1 + 0x250);
  if (*(longlong *)(param_1 + 0x238) != 0) {
    FMemory::Free();
  }
  FRichCurve::~FRichCurve(param_1 + 0x1c0);
  FRichCurve::~FRichCurve(param_1 + 0x140);
  FRichCurve::~FRichCurve(param_1 + 0xc0);
  FRichCurve::~FRichCurve(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa78);
  }
  return param_1;
}



// FUNCTION 142c4d7a0 FUN_142c4d7a0 body=39 status=ok
// SIG undefined FUN_142c4d7a0(void)

void FUN_142c4d7a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145833fb0;
    return;
  }
  return;
}



// FUNCTION 142c4d7d0 FUN_142c4d7d0 body=122 status=ok
// SIG undefined FUN_142c4d7d0(void)

undefined8 * FUN_142c4d7d0(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  *param_2 = 0;
  param_2[1] = 0;
  FUN_142c4dbe0(param_1,param_2,param_3[1]);
  FUN_142c4dbe0(param_1 + 0x80,param_2,*param_3);
  FUN_142c4dbe0(param_1 + 0x100,param_2,param_3[3]);
  FUN_142c4dbe0(param_1 + 0x180,param_2,param_3[2]);
  return param_2;
}



// FUNCTION 142c4d850 FUN_142c4d850 body=158 status=ok
// SIG undefined FUN_142c4d850(void)

undefined8 *
FUN_142c4d850(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  FUN_142c4d8f0(param_4);
  if (DAT_146b2e791 == '\0') {
    param_1 = param_1 + 0x38;
  }
  else if (DAT_146b2e791 == '\x01') {
    param_1 = param_1 + 0x458;
  }
  else if (DAT_146b2e791 == '\x02') {
    param_1 = param_1 + 0x248;
  }
  else if (DAT_146b2e791 == '\x03') {
    param_1 = param_1 + 0x878;
  }
  else {
    if (DAT_146b2e791 != '\x04') {
      uVar1 = param_3[1];
      *param_2 = *param_3;
      param_2[1] = uVar1;
      return param_2;
    }
    param_1 = param_1 + 0x668;
  }
  FUN_142c4d7d0(param_1,param_2,param_3);
  return param_2;
}



// FUNCTION 142c4d8f0 FUN_142c4d8f0 body=741 status=ok
// SIG undefined FUN_142c4d8f0(void)

void FUN_142c4d8f0(undefined8 *param_1)

{
  wchar_t wVar1;
  wint_t wVar2;
  wint_t wVar3;
  wchar_t *pwVar4;
  wint_t *pwVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  
  if (DAT_146b2e790 != '\0') {
    return;
  }
  puVar7 = &DAT_143f3eda8;
  if (*(int *)(param_1 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*param_1;
  }
  for (pwVar4 = L"Windows";
      (wVar1 = *(wchar_t *)((longlong)(puVar6 + -0xa2c1a09c) + (longlong)pwVar4), wVar1 != L'\0' ||
      (*pwVar4 != L'\0')); pwVar4 = pwVar4 + 1) {
    if (wVar1 != *pwVar4) {
      wVar2 = towlower(wVar1);
      wVar3 = towlower(*pwVar4);
      if (wVar2 != wVar3) {
        if (wVar2 == wVar3) {
          DAT_146b2e791 = 0;
          return;
        }
        if (*(int *)(param_1 + 1) == 0) {
          puVar6 = &DAT_143f3eda8;
        }
        else {
          puVar6 = (undefined2 *)*param_1;
        }
        for (pwVar5 = &DAT_145834148;
            (wVar2 = *(wint_t *)((longlong)(puVar6 + -0xa2c1a0a4) + (longlong)pwVar5), wVar2 != 0 ||
            (*pwVar5 != 0)); pwVar5 = pwVar5 + 1) {
          if (wVar2 != *pwVar5) {
            wVar2 = towlower(wVar2);
            wVar3 = towlower(*pwVar5);
            if (wVar2 != wVar3) {
              if (wVar2 == wVar3) {
                DAT_146b2e791 = 2;
                return;
              }
              if (*(int *)(param_1 + 1) == 0) {
                puVar6 = &DAT_143f3eda8;
              }
              else {
                puVar6 = (undefined2 *)*param_1;
              }
              for (pwVar5 = &DAT_145834158;
                  (wVar2 = *(wint_t *)((longlong)(puVar6 + -0xa2c1a0ac) + (longlong)pwVar5),
                  wVar2 != 0 || (*pwVar5 != 0)); pwVar5 = pwVar5 + 1) {
                if (wVar2 != *pwVar5) {
                  wVar2 = towlower(wVar2);
                  wVar3 = towlower(*pwVar5);
                  if (wVar2 != wVar3) {
                    if (wVar2 == wVar3) {
                      DAT_146b2e791 = 1;
                      return;
                    }
                    if (*(int *)(param_1 + 1) == 0) {
                      puVar6 = &DAT_143f3eda8;
                    }
                    else {
                      puVar6 = (undefined2 *)*param_1;
                    }
                    for (pwVar5 = &DAT_145834160;
                        (wVar2 = *(wint_t *)((longlong)(puVar6 + -0xa2c1a0b0) + (longlong)pwVar5),
                        wVar2 != 0 || (*pwVar5 != 0)); pwVar5 = pwVar5 + 1) {
                      if (wVar2 != *pwVar5) {
                        wVar2 = towlower(wVar2);
                        wVar3 = towlower(*pwVar5);
                        if (wVar2 != wVar3) {
                          if (wVar2 == wVar3) {
                            DAT_146b2e791 = 4;
                            return;
                          }
                          if (*(int *)(param_1 + 1) == 0) {
                            puVar6 = &DAT_143f3eda8;
                          }
                          else {
                            puVar6 = (undefined2 *)*param_1;
                          }
                          for (pwVar4 = L"XboxSeriesX";
                              (wVar1 = *(wchar_t *)
                                        ((longlong)(puVar6 + -0xa2c1a0b4) + (longlong)pwVar4),
                              wVar1 != L'\0' || (*pwVar4 != L'\0')); pwVar4 = pwVar4 + 1) {
                            if (wVar1 != *pwVar4) {
                              wVar2 = towlower(wVar1);
                              wVar3 = towlower(*pwVar4);
                              if (wVar2 != wVar3) {
                                if (wVar2 == wVar3) {
                                  DAT_146b2e791 = 4;
                                  return;
                                }
                                if (*(int *)(param_1 + 1) == 0) {
                                  puVar6 = &DAT_143f3eda8;
                                }
                                else {
                                  puVar6 = (undefined2 *)*param_1;
                                }
                                for (pwVar5 = &DAT_145834180;
                                    (wVar2 = *(wint_t *)
                                              ((longlong)(puVar6 + -0xa2c1a0c0) + (longlong)pwVar5),
                                    wVar2 != 0 || (*pwVar5 != 0)); pwVar5 = pwVar5 + 1) {
                                  if (wVar2 != *pwVar5) {
                                    wVar2 = towlower(wVar2);
                                    wVar3 = towlower(*pwVar5);
                                    if (wVar2 != wVar3) {
                                      if (wVar2 == wVar3) {
                                        DAT_146b2e791 = 3;
                                        return;
                                      }
                                      if (*(int *)(param_1 + 1) != 0) {
                                        puVar7 = (undefined2 *)*param_1;
                                      }
                                      for (pwVar5 = &DAT_145834188;
                                          (wVar2 = *(wint_t *)
                                                    ((longlong)(puVar7 + -0xa2c1a0c4) +
                                                    (longlong)pwVar5), wVar2 != 0 || (*pwVar5 != 0))
                                          ; pwVar5 = pwVar5 + 1) {
                                        if (wVar2 != *pwVar5) {
                                          wVar2 = towlower(wVar2);
                                          wVar3 = towlower(*pwVar5);
                                          if (wVar2 != wVar3) {
                                            if (wVar2 == wVar3) {
                                              DAT_146b2e791 = 3;
                                              return;
                                            }
                                            return;
                                          }
                                        }
                                      }
                                      DAT_146b2e791 = 3;
                                      return;
                                    }
                                  }
                                }
                                DAT_146b2e791 = 3;
                                return;
                              }
                            }
                          }
                          DAT_146b2e791 = 4;
                          return;
                        }
                      }
                    }
                    DAT_146b2e791 = 4;
                    return;
                  }
                }
              }
              DAT_146b2e791 = 1;
              return;
            }
          }
        }
        DAT_146b2e791 = 2;
        return;
      }
    }
  }
  DAT_146b2e791 = 0;
  return;
}



// FUNCTION 142c4dbe0 FUN_142c4dbe0 body=149 status=ok
// SIG undefined FUN_142c4dbe0(void)

void FUN_142c4dbe0(char *param_1,float *param_2,undefined4 param_3)

{
  char cVar1;
  float fVar2;
  
  cVar1 = *param_1;
  if (cVar1 == '\0') {
    fVar2 = (float)FRichCurve::Eval(param_1 + 8,param_3,0);
    param_2[1] = fVar2 + param_2[1];
  }
  else {
    if (cVar1 == '\x01') {
      fVar2 = (float)FRichCurve::Eval(param_1 + 8,param_3,0);
      *param_2 = fVar2 + *param_2;
      return;
    }
    if (cVar1 == '\x02') {
      fVar2 = (float)FRichCurve::Eval(param_1 + 8,param_3,0);
      param_2[3] = fVar2 + param_2[3];
      return;
    }
    if (cVar1 == '\x03') {
      fVar2 = (float)FRichCurve::Eval(param_1 + 8,param_3,0);
      param_2[2] = fVar2 + param_2[2];
      return;
    }
  }
  return;
}



// FUNCTION 142c4dc80 FUN_142c4dc80 body=151 status=ok
// SIG undefined FUN_142c4dc80(void)

longlong FUN_142c4dc80(void)

{
  if (DAT_146b2e890 == 0) {
    FUN_14171ccd0(L"/Script/GbxFeedback",L"GbxRumbleRemapping",&DAT_146b2e890,FUN_140447710,0xa78,
                  0x10000006,0,L"Game",&LAB_142c4de30,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b2e890;
}



// FUNCTION 142c4dd20 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FMechModelArmorDepletedDebrisInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x210;
    *puVar1 = &PTR_FUN_145834b20;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142c4dd60 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FMediumCameraShotChangeConfig_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x200;
    *puVar1 = &PTR_FUN_145834c38;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142c4dda0 FUN_142c4dda0 body=53 status=ok
// SIG undefined FUN_142c4dda0(void)

void FUN_142c4dda0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &PTR_FUN_145834d50;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142c4de00 FUN_142c4de00 body=47 status=ok
// SIG undefined FUN_142c4de00(void)

longlong FUN_142c4de00(void)

{
  if (DAT_146b2e840 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146b2e840,&PTR_s__Script_GbxFeedback_145834a38);
  }
  return DAT_146b2e840;
}



// FUNCTION 142c4de50 FUN_142c4de50 body=159 status=ok
// SIG undefined FUN_142c4de50(void)

undefined1 * FUN_142c4de50(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  puVar1 = (undefined8 *)(param_1 + 0x68);
  *param_1 = *param_2;
  param_1[0x60] = param_2[0x60];
  param_1[0x61] = param_2[0x61];
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
  if (puVar1 != (undefined8 *)(param_2 + 0x68)) {
    iVar2 = *(int *)(param_2 + 0x70);
    _Src = *(void **)(param_2 + 0x68);
    *(int *)(param_1 + 0x70) = iVar2;
    if ((iVar2 == 0) && (*(int *)(param_1 + 0x74) == 0)) {
      *(undefined4 *)(param_1 + 0x74) = 0;
    }
    else {
      TArray<FDetectedFaceFeature2D,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 * 0x1c);
    }
  }
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  return param_1;
}



// FUNCTION 142c4def0 FUN_142c4def0 body=49 status=ok
// SIG undefined FUN_142c4def0(void)

void FUN_142c4def0(undefined8 param_1,undefined8 *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2 + 2,0,0x200);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_142c4d1d0(param_2 + 2);
  return;
}



// FUNCTION 142c4df40 FUN_142c4df40 body=39 status=ok
// SIG undefined FUN_142c4df40(void)

void FUN_142c4df40(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x80);
  FRuntimeFloatCurve::FRuntimeFloatCurve((longlong)param_2 + 8);
  return;
}



// FUNCTION 142c4df70 FUN_142c4df70 body=263 status=ok
// SIG undefined FUN_142c4df70(void)

undefined8 FUN_142c4df70(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  int iVar1;
  void *_Src;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x110;
    do {
      if (param_2 != (undefined8 *)(param_3 + -0x110)) {
        iVar1 = *(int *)(param_3 + -0x108);
        _Src = *(void **)(param_3 + -0x110);
        *(int *)(param_2 + 1) = iVar1;
        if ((iVar1 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,iVar1);
          _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar1 * 2);
        }
      }
      FUN_142c4de50(param_2 + 2,param_3 + -0x100);
      FUN_142c4de50(param_2 + 0x12,param_3 + -0x80);
      FUN_142c4de50(param_2 + 0x22,param_3);
      FUN_142c4de50(param_2 + 0x32,param_3 + 0x80);
      param_3 = param_3 + 0x210;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x42;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142c4e080 FUN_142c4e080 body=138 status=ok
// SIG undefined FUN_142c4e080(void)

undefined1 FUN_142c4e080(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 0x100;
    do {
      FUN_142c4de50(param_2 + -0x100,param_3 + -0x100 + param_2);
      FUN_142c4de50(param_2 + -0x80,param_3 + -0x80 + param_2);
      FUN_142c4de50(param_2,param_3 + param_2);
      FUN_142c4de50(param_2 + 0x80,param_3 + 0x80 + param_2);
      param_2 = param_2 + 0x200;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142c4e110 FUN_142c4e110 body=225 status=ok
// SIG undefined FUN_142c4e110(void)

undefined8 FUN_142c4e110(undefined8 param_1,undefined1 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined1 *puVar3;
  
  if (param_4 != 0) {
    puVar3 = (undefined1 *)(param_3 + 0x60);
    do {
      puVar1 = (undefined8 *)(param_2 + 0x68);
      *param_2 = puVar3[-0x60];
      param_2[0x60] = *puVar3;
      param_2[0x61] = puVar3[1];
      *(undefined4 *)(param_2 + 100) = *(undefined4 *)(puVar3 + 4);
      if (puVar1 != (undefined8 *)(puVar3 + 8)) {
        iVar2 = *(int *)(puVar3 + 0x10);
        _Src = *(void **)(puVar3 + 8);
        *(int *)(param_2 + 0x70) = iVar2;
        if ((iVar2 == 0) && (*(int *)(param_2 + 0x74) == 0)) {
          *(undefined4 *)(param_2 + 0x74) = 0;
        }
        else {
          TArray<FDetectedFaceFeature2D,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 * 0x1c);
        }
      }
      puVar1 = (undefined8 *)(puVar3 + 0x18);
      puVar3 = puVar3 + 0x80;
      *(undefined8 *)(param_2 + 0x78) = *puVar1;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x80;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142c4e200 FUN_142c4e200 body=78 status=ok
// SIG undefined FUN_142c4e200(void)

void FUN_142c4e200(undefined8 param_1,longlong *param_2)

{
  FRichCurve::~FRichCurve(param_2 + 0x33);
  FRichCurve::~FRichCurve(param_2 + 0x23);
  FRichCurve::~FRichCurve(param_2 + 0x13);
  FRichCurve::~FRichCurve(param_2 + 3);
  if (*param_2 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142c4e250 FUN_142c4e250 body=59 status=ok
// SIG undefined FUN_142c4e250(void)

void FUN_142c4e250(undefined8 param_1,longlong param_2)

{
  FRichCurve::~FRichCurve(param_2 + 0x188);
  FRichCurve::~FRichCurve(param_2 + 0x108);
  FRichCurve::~FRichCurve(param_2 + 0x88);
  FRichCurve::~FRichCurve(param_2 + 8);
  return;
}



// FUNCTION 142c4e290 EPlatform_StaticEnum body=85 status=ok
// SIG undefined EPlatform_StaticEnum(void)

void EPlatform_StaticEnum(void)

{
  if (DAT_146b2e7e0 == 0) {
    if (DAT_146b2e840 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b2e840,&PTR_s__Script_GbxFeedback_145834a38);
    }
    DAT_146b2e7e0 = GetStaticEnum(FUN_142c4e530,DAT_146b2e840,L"EPlatform");
  }
  return;
}



// FUNCTION 142c4e2f0 FUN_142c4e2f0 body=85 status=ok
// SIG undefined FUN_142c4e2f0(void)

void FUN_142c4e2f0(void)

{
  if (DAT_146b2e7e8 == 0) {
    if (DAT_146b2e840 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b2e840,&PTR_s__Script_GbxFeedback_145834a38);
    }
    DAT_146b2e7e8 = GetStaticEnum(FUN_142c4e560,DAT_146b2e840,L"ERumbleSlot");
  }
  return;
}



// FUNCTION 142c4e350 FUN_142c4e350 body=6 status=ok
// SIG undefined FUN_142c4e350(void)

undefined8 FUN_142c4e350(void)

{
  return 0x8803e59f;
}



// FUNCTION 142c4e360 FUN_142c4e360 body=6 status=ok
// SIG undefined FUN_142c4e360(void)

undefined8 FUN_142c4e360(void)

{
  return 0x6b9ed6bf;
}



// FUNCTION 142c4e370 FUN_142c4e370 body=6 status=ok
// SIG undefined FUN_142c4e370(void)

undefined8 FUN_142c4e370(void)

{
  return 0x53acd130;
}



// FUNCTION 142c4e380 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FAnimNode_AimOffsetLookAt::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b2e858 == 0) {
    if (DAT_146b2e840 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b2e840,&PTR_s__Script_GbxFeedback_145834a38);
    }
    lVar1 = DAT_146b2e840;
    uVar2 = FUN_142c4e350();
    DAT_146b2e858 = GetStaticStruct(FUN_142c4e590,lVar1,L"RemapByConsole",0x210,uVar2);
  }
  return;
}



// FUNCTION 142c4e400 FUN_142c4e400 body=113 status=ok
// SIG undefined FUN_142c4e400(void)

void FUN_142c4e400(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b2e868 == 0) {
    if (DAT_146b2e840 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b2e840,&PTR_s__Script_GbxFeedback_145834a38);
    }
    lVar1 = DAT_146b2e840;
    uVar2 = FUN_142c4e360();
    DAT_146b2e868 = GetStaticStruct(FUN_142c4e5c0,lVar1,L"RumbleRemap",0x200,uVar2);
  }
  return;
}



// FUNCTION 142c4e480 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FConstraintData::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b2e878 == 0) {
    if (DAT_146b2e840 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b2e840,&PTR_s__Script_GbxFeedback_145834a38);
    }
    lVar1 = DAT_146b2e840;
    uVar2 = FUN_142c4e370();
    DAT_146b2e878 = GetStaticStruct(FUN_142c4e5f0,lVar1,L"RumbleSlotMapping",0x80,uVar2);
  }
  return;
}



// FUNCTION 142c4e500 FUN_142c4e500 body=47 status=ok
// SIG undefined FUN_142c4e500(void)

longlong FUN_142c4e500(void)

{
  if (DAT_146b2e888 == 0) {
    FUN_141786440(&DAT_146b2e888,&PTR_FUN_145834870);
  }
  return DAT_146b2e888;
}



// FUNCTION 142c4e530 FUN_142c4e530 body=47 status=ok
// SIG undefined FUN_142c4e530(void)

longlong FUN_142c4e530(void)

{
  if (DAT_146b2e848 == 0) {
    FUN_1417866a0(&DAT_146b2e848,&PTR_FUN_1466ab830);
  }
  return DAT_146b2e848;
}



// FUNCTION 142c4e560 FUN_142c4e560 body=47 status=ok
// SIG undefined FUN_142c4e560(void)

longlong FUN_142c4e560(void)

{
  if (DAT_146b2e850 == 0) {
    FUN_1417866a0(&DAT_146b2e850,&PTR_FUN_1466ab880);
  }
  return DAT_146b2e850;
}



// FUNCTION 142c4e590 FUN_142c4e590 body=47 status=ok
// SIG undefined FUN_142c4e590(void)

longlong FUN_142c4e590(void)

{
  if (DAT_146b2e860 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b2e860,&PTR_FUN_1466ab970);
  }
  return DAT_146b2e860;
}



// FUNCTION 142c4e5c0 FUN_142c4e5c0 body=47 status=ok
// SIG undefined FUN_142c4e5c0(void)

longlong FUN_142c4e5c0(void)

{
  if (DAT_146b2e870 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b2e870,&PTR_FUN_1466abac0);
  }
  return DAT_146b2e870;
}



// FUNCTION 142c4e5f0 FUN_142c4e5f0 body=47 status=ok
// SIG undefined FUN_142c4e5f0(void)

longlong FUN_142c4e5f0(void)

{
  if (DAT_146b2e880 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b2e880,&PTR_FUN_1466abbd0);
  }
  return DAT_146b2e880;
}



// FUNCTION 142c4e620 FUN_142c4e620 body=847 status=ok
// SIG undefined FUN_142c4e620(void)

void FUN_142c4e620(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined8 *puVar20;
  int iVar21;
  int iVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  
  iVar15 = (param_2 + -2) / 2;
  if (-1 < iVar15) {
    iVar18 = iVar15 * 2 + 1;
    iVar22 = iVar18;
    iVar19 = iVar15;
joined_r0x000142c4e66a:
    do {
      if (iVar18 < param_2) {
        iVar18 = iVar15 * 2;
        iVar21 = iVar18 + 1;
        if (iVar18 + 2 < param_2) {
          iVar16 = FReferenceSkeleton::FindBoneIndex(*param_4,param_1 + (longlong)iVar21 * 10);
          iVar17 = FReferenceSkeleton::FindBoneIndex(*param_4,param_1 + (longlong)(iVar18 + 2) * 10)
          ;
          if (iVar17 < iVar16) {
            iVar21 = iVar18;
          }
          iVar21 = iVar21 + 1;
        }
        puVar23 = param_1 + (longlong)iVar21 * 10;
        iVar18 = FReferenceSkeleton::FindBoneIndex(*param_4,puVar23);
        puVar20 = param_1 + (longlong)iVar15 * 10;
        iVar15 = FReferenceSkeleton::FindBoneIndex(*param_4,puVar20);
        if (iVar15 < iVar18) {
          if (puVar20 != puVar23) {
            uVar4 = puVar23[1];
            uVar5 = *puVar20;
            uVar6 = puVar20[1];
            uVar7 = puVar20[2];
            uVar8 = puVar20[3];
            uVar9 = puVar20[4];
            uVar10 = puVar20[5];
            uVar11 = puVar20[6];
            uVar12 = puVar20[7];
            uVar13 = puVar20[8];
            uVar14 = puVar20[9];
            *puVar20 = *puVar23;
            puVar20[1] = uVar4;
            uVar4 = puVar23[3];
            puVar20[2] = puVar23[2];
            puVar20[3] = uVar4;
            uVar4 = puVar23[5];
            puVar20[4] = puVar23[4];
            puVar20[5] = uVar4;
            uVar4 = puVar23[7];
            puVar20[6] = puVar23[6];
            puVar20[7] = uVar4;
            uVar1 = *(undefined4 *)((longlong)puVar23 + 0x44);
            uVar2 = *(undefined4 *)(puVar23 + 9);
            uVar3 = *(undefined4 *)((longlong)puVar23 + 0x4c);
            *(undefined4 *)(puVar20 + 8) = *(undefined4 *)(puVar23 + 8);
            *(undefined4 *)((longlong)puVar20 + 0x44) = uVar1;
            *(undefined4 *)(puVar20 + 9) = uVar2;
            *(undefined4 *)((longlong)puVar20 + 0x4c) = uVar3;
            *puVar23 = uVar5;
            puVar23[1] = uVar6;
            puVar23[2] = uVar7;
            puVar23[3] = uVar8;
            puVar23[4] = uVar9;
            puVar23[5] = uVar10;
            puVar23[6] = uVar11;
            puVar23[7] = uVar12;
            puVar23[8] = uVar13;
            puVar23[9] = uVar14;
          }
          iVar18 = iVar21 * 2 + 1;
          iVar15 = iVar21;
          goto joined_r0x000142c4e66a;
        }
      }
      iVar15 = iVar19 + -1;
      iVar18 = iVar22 + -2;
      iVar22 = iVar18;
      iVar19 = iVar15;
    } while (-1 < iVar15);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar20 = param_1 + (longlong)param_2 * 10;
    do {
      if (param_1 != puVar20) {
        uVar4 = puVar20[1];
        uVar5 = *param_1;
        uVar6 = param_1[1];
        uVar7 = param_1[2];
        uVar8 = param_1[3];
        uVar9 = param_1[4];
        uVar10 = param_1[5];
        uVar11 = param_1[6];
        uVar12 = param_1[7];
        uVar13 = param_1[8];
        uVar14 = param_1[9];
        *param_1 = *puVar20;
        param_1[1] = uVar4;
        uVar4 = puVar20[3];
        param_1[2] = puVar20[2];
        param_1[3] = uVar4;
        uVar4 = puVar20[5];
        param_1[4] = puVar20[4];
        param_1[5] = uVar4;
        uVar4 = puVar20[7];
        param_1[6] = puVar20[6];
        param_1[7] = uVar4;
        uVar1 = *(undefined4 *)((longlong)puVar20 + 0x44);
        uVar2 = *(undefined4 *)(puVar20 + 9);
        uVar3 = *(undefined4 *)((longlong)puVar20 + 0x4c);
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(puVar20 + 8);
        *(undefined4 *)((longlong)param_1 + 0x44) = uVar1;
        *(undefined4 *)(param_1 + 9) = uVar2;
        *(undefined4 *)((longlong)param_1 + 0x4c) = uVar3;
        *puVar20 = uVar5;
        puVar20[1] = uVar6;
        puVar20[2] = uVar7;
        puVar20[3] = uVar8;
        puVar20[4] = uVar9;
        puVar20[5] = uVar10;
        puVar20[6] = uVar11;
        puVar20[7] = uVar12;
        puVar20[8] = uVar13;
        puVar20[9] = uVar14;
      }
      iVar15 = 0;
      if (1 < param_2) {
        do {
          iVar22 = iVar15 * 2 + 1;
          iVar18 = iVar15 * 2 + 2;
          if (iVar18 < param_2) {
            iVar19 = FReferenceSkeleton::FindBoneIndex(*param_4,param_1 + (longlong)iVar22 * 10);
            iVar18 = FReferenceSkeleton::FindBoneIndex(*param_4,param_1 + (longlong)iVar18 * 10);
            if (iVar18 < iVar19) {
              iVar22 = iVar15 * 2;
            }
            iVar22 = iVar22 + 1;
          }
          puVar24 = param_1 + (longlong)iVar22 * 10;
          iVar18 = FReferenceSkeleton::FindBoneIndex(*param_4,puVar24);
          puVar23 = param_1 + (longlong)iVar15 * 10;
          iVar15 = FReferenceSkeleton::FindBoneIndex(*param_4,puVar23);
          if (iVar18 <= iVar15) break;
          if (puVar23 != puVar24) {
            uVar4 = puVar24[1];
            uVar5 = *puVar23;
            uVar6 = puVar23[1];
            uVar7 = puVar23[2];
            uVar8 = puVar23[3];
            uVar9 = puVar23[4];
            uVar10 = puVar23[5];
            uVar11 = puVar23[6];
            uVar12 = puVar23[7];
            uVar13 = puVar23[8];
            uVar14 = puVar23[9];
            *puVar23 = *puVar24;
            puVar23[1] = uVar4;
            uVar4 = puVar24[3];
            puVar23[2] = puVar24[2];
            puVar23[3] = uVar4;
            uVar4 = puVar24[5];
            puVar23[4] = puVar24[4];
            puVar23[5] = uVar4;
            uVar4 = puVar24[7];
            puVar23[6] = puVar24[6];
            puVar23[7] = uVar4;
            uVar1 = *(undefined4 *)((longlong)puVar24 + 0x44);
            uVar2 = *(undefined4 *)(puVar24 + 9);
            uVar3 = *(undefined4 *)((longlong)puVar24 + 0x4c);
            *(undefined4 *)(puVar23 + 8) = *(undefined4 *)(puVar24 + 8);
            *(undefined4 *)((longlong)puVar23 + 0x44) = uVar1;
            *(undefined4 *)(puVar23 + 9) = uVar2;
            *(undefined4 *)((longlong)puVar23 + 0x4c) = uVar3;
            *puVar24 = uVar5;
            puVar24[1] = uVar6;
            puVar24[2] = uVar7;
            puVar24[3] = uVar8;
            puVar24[4] = uVar9;
            puVar24[5] = uVar10;
            puVar24[6] = uVar11;
            puVar24[7] = uVar12;
            puVar24[8] = uVar13;
            puVar24[9] = uVar14;
          }
          iVar15 = iVar22;
        } while (iVar22 * 2 + 1 < param_2);
      }
      puVar20 = puVar20 + -10;
      param_2 = param_2 + -1;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 142c4e970 FUN_142c4e970 body=1234 status=ok
// SIG undefined FUN_142c4e970(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142c4e970(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  undefined8 *puVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  float fVar24;
  undefined1 auStack_3a8 [32];
  longlong *local_388;
  int local_380;
  longlong local_368;
  longlong local_358;
  longlong lStack_350;
  undefined4 local_348;
  undefined1 local_340 [744];
  ulonglong local_58;
  
  if (1 < param_2) {
    local_58 = DAT_1468387a8 ^ (ulonglong)auStack_3a8;
    lStack_350 = param_2 * 0x50 + -0x50 + param_1;
    fVar24 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar24 = fVar24 + 1.8446744e+19;
    }
    local_358 = param_1;
    fVar24 = _guard_xfg_dispatch_icall_nop(fVar24);
    local_348 = (undefined4)(longlong)(fVar24 + fVar24);
    _guard_xfg_dispatch_icall_nop(local_340,0,0x2e8);
    local_388 = &local_358;
    do {
      puVar17 = (undefined8 *)*local_388;
      puVar20 = (undefined8 *)local_388[1];
      local_368 = local_388[2];
      lVar18 = ((longlong)puVar20 - (longlong)puVar17) / 0x50 + 1;
      local_380 = (int)local_368;
      puVar21 = puVar17;
      if ((int)local_368 != 0) {
LAB_142c4ea72:
        if (8 < lVar18) {
          if (lVar18 < 0) {
            lVar18 = lVar18 + 1;
          }
          puVar17 = puVar21 + (lVar18 >> 1) * 10;
          if (puVar17 != puVar21) {
            uVar1 = puVar21[1];
            uVar5 = *puVar17;
            uVar6 = puVar17[1];
            uVar7 = puVar17[2];
            uVar8 = puVar17[3];
            uVar9 = puVar17[4];
            uVar10 = puVar17[5];
            uVar11 = puVar17[6];
            uVar12 = puVar17[7];
            uVar13 = puVar17[8];
            uVar14 = puVar17[9];
            *puVar17 = *puVar21;
            puVar17[1] = uVar1;
            uVar1 = puVar21[3];
            puVar17[2] = puVar21[2];
            puVar17[3] = uVar1;
            uVar1 = puVar21[5];
            puVar17[4] = puVar21[4];
            puVar17[5] = uVar1;
            uVar1 = puVar21[7];
            puVar17[6] = puVar21[6];
            puVar17[7] = uVar1;
            uVar2 = *(undefined4 *)((longlong)puVar21 + 0x44);
            uVar3 = *(undefined4 *)(puVar21 + 9);
            uVar4 = *(undefined4 *)((longlong)puVar21 + 0x4c);
            *(undefined4 *)(puVar17 + 8) = *(undefined4 *)(puVar21 + 8);
            *(undefined4 *)((longlong)puVar17 + 0x44) = uVar2;
            *(undefined4 *)(puVar17 + 9) = uVar3;
            *(undefined4 *)((longlong)puVar17 + 0x4c) = uVar4;
            *puVar21 = uVar5;
            puVar21[1] = uVar6;
            puVar21[2] = uVar7;
            puVar21[3] = uVar8;
            puVar21[4] = uVar9;
            puVar21[5] = uVar10;
            puVar21[6] = uVar11;
            puVar21[7] = uVar12;
            puVar21[8] = uVar13;
            puVar21[9] = uVar14;
          }
          puVar19 = puVar20 + 10;
          puVar17 = puVar21;
LAB_142c4eaf7:
          puVar22 = puVar17;
          puVar17 = puVar22 + 10;
          if (puVar17 <= puVar20) goto code_r0x000142c4eb00;
          goto LAB_142c4eb20;
        }
        for (; puVar21 < puVar20; puVar20 = puVar20 + -10) {
          puVar19 = puVar21 + 10;
          puVar17 = puVar21;
          if (puVar19 <= puVar20) {
            uVar1 = *param_4;
            puVar22 = puVar21;
            do {
              iVar15 = FReferenceSkeleton::FindBoneIndex(uVar1,puVar19);
              iVar16 = FReferenceSkeleton::FindBoneIndex(uVar1,puVar22);
              puVar17 = puVar19;
              if (iVar15 <= iVar16) {
                puVar17 = puVar22;
              }
              puVar19 = puVar19 + 10;
              puVar22 = puVar17;
            } while (puVar19 <= puVar20);
          }
          if (puVar17 != puVar20) {
            uVar1 = puVar20[1];
            uVar5 = *puVar17;
            uVar6 = puVar17[1];
            uVar7 = puVar17[2];
            uVar8 = puVar17[3];
            uVar9 = puVar17[4];
            uVar10 = puVar17[5];
            uVar11 = puVar17[6];
            uVar12 = puVar17[7];
            uVar13 = puVar17[8];
            uVar14 = puVar17[9];
            *puVar17 = *puVar20;
            puVar17[1] = uVar1;
            uVar1 = puVar20[3];
            puVar17[2] = puVar20[2];
            puVar17[3] = uVar1;
            uVar1 = puVar20[5];
            puVar17[4] = puVar20[4];
            puVar17[5] = uVar1;
            uVar1 = puVar20[7];
            puVar17[6] = puVar20[6];
            puVar17[7] = uVar1;
            uVar2 = *(undefined4 *)((longlong)puVar20 + 0x44);
            uVar3 = *(undefined4 *)(puVar20 + 9);
            uVar4 = *(undefined4 *)((longlong)puVar20 + 0x4c);
            *(undefined4 *)(puVar17 + 8) = *(undefined4 *)(puVar20 + 8);
            *(undefined4 *)((longlong)puVar17 + 0x44) = uVar2;
            *(undefined4 *)(puVar17 + 9) = uVar3;
            *(undefined4 *)((longlong)puVar17 + 0x4c) = uVar4;
            *puVar20 = uVar5;
            puVar20[1] = uVar6;
            puVar20[2] = uVar7;
            puVar20[3] = uVar8;
            puVar20[4] = uVar9;
            puVar20[5] = uVar10;
            puVar20[6] = uVar11;
            puVar20[7] = uVar12;
            puVar20[8] = uVar13;
            puVar20[9] = uVar14;
          }
        }
        goto LAB_142c4ed0e;
      }
LAB_142c4ecf0:
      FUN_142c4e620(puVar17,lVar18,param_3,param_4);
LAB_142c4ed0e:
      local_388 = local_388 + -3;
    } while (&local_358 <= local_388);
  }
  return;
code_r0x000142c4eb00:
  iVar15 = FReferenceSkeleton::FindBoneIndex(*param_4,puVar17);
  iVar16 = FReferenceSkeleton::FindBoneIndex(*param_4,puVar21);
  if (iVar15 <= iVar16) goto LAB_142c4eaf7;
LAB_142c4eb20:
  do {
    puVar23 = puVar19;
    puVar19 = puVar23 + -10;
    if (puVar19 <= puVar21) break;
    iVar15 = FReferenceSkeleton::FindBoneIndex(*param_4,puVar21);
    iVar16 = FReferenceSkeleton::FindBoneIndex(*param_4,puVar19);
  } while (iVar15 <= iVar16);
  if (puVar17 <= puVar19) {
    if (puVar17 != puVar19) {
      uVar1 = puVar23[-9];
      uVar5 = *puVar17;
      uVar6 = puVar22[0xb];
      uVar7 = puVar22[0xc];
      uVar8 = puVar22[0xd];
      uVar9 = puVar22[0xe];
      uVar10 = puVar22[0xf];
      uVar11 = puVar22[0x10];
      uVar12 = puVar22[0x11];
      uVar13 = puVar22[0x12];
      uVar14 = puVar22[0x13];
      *puVar17 = *puVar19;
      puVar22[0xb] = uVar1;
      uVar1 = puVar23[-7];
      puVar22[0xc] = puVar23[-8];
      puVar22[0xd] = uVar1;
      uVar1 = puVar23[-5];
      puVar22[0xe] = puVar23[-6];
      puVar22[0xf] = uVar1;
      uVar1 = puVar23[-3];
      puVar22[0x10] = puVar23[-4];
      puVar22[0x11] = uVar1;
      uVar2 = *(undefined4 *)((longlong)puVar23 + -0xc);
      uVar3 = *(undefined4 *)(puVar23 + -1);
      uVar4 = *(undefined4 *)((longlong)puVar23 + -4);
      *(undefined4 *)(puVar22 + 0x12) = *(undefined4 *)(puVar23 + -2);
      *(undefined4 *)((longlong)puVar22 + 0x94) = uVar2;
      *(undefined4 *)(puVar22 + 0x13) = uVar3;
      *(undefined4 *)((longlong)puVar22 + 0x9c) = uVar4;
      *puVar19 = uVar5;
      puVar23[-9] = uVar6;
      puVar23[-8] = uVar7;
      puVar23[-7] = uVar8;
      puVar23[-6] = uVar9;
      puVar23[-5] = uVar10;
      puVar23[-4] = uVar11;
      puVar23[-3] = uVar12;
      puVar23[-2] = uVar13;
      puVar23[-1] = uVar14;
    }
    goto LAB_142c4eaf7;
  }
  if (puVar21 != puVar19) {
    uVar1 = puVar23[-9];
    uVar5 = *puVar21;
    uVar6 = puVar21[1];
    uVar7 = puVar21[2];
    uVar8 = puVar21[3];
    uVar9 = puVar21[4];
    uVar10 = puVar21[5];
    uVar11 = puVar21[6];
    uVar12 = puVar21[7];
    uVar13 = puVar21[8];
    uVar14 = puVar21[9];
    *puVar21 = *puVar19;
    puVar21[1] = uVar1;
    uVar1 = puVar23[-7];
    puVar21[2] = puVar23[-8];
    puVar21[3] = uVar1;
    uVar1 = puVar23[-5];
    puVar21[4] = puVar23[-6];
    puVar21[5] = uVar1;
    uVar1 = puVar23[-3];
    puVar21[6] = puVar23[-4];
    puVar21[7] = uVar1;
    uVar2 = *(undefined4 *)((longlong)puVar23 + -0xc);
    uVar3 = *(undefined4 *)(puVar23 + -1);
    uVar4 = *(undefined4 *)((longlong)puVar23 + -4);
    *(undefined4 *)(puVar21 + 8) = *(undefined4 *)(puVar23 + -2);
    *(undefined4 *)((longlong)puVar21 + 0x44) = uVar2;
    *(undefined4 *)(puVar21 + 9) = uVar3;
    *(undefined4 *)((longlong)puVar21 + 0x4c) = uVar4;
    *puVar19 = uVar5;
    puVar23[-9] = uVar6;
    puVar23[-8] = uVar7;
    puVar23[-7] = uVar8;
    puVar23[-6] = uVar9;
    puVar23[-5] = uVar10;
    puVar23[-4] = uVar11;
    puVar23[-3] = uVar12;
    puVar23[-2] = uVar13;
    puVar23[-1] = uVar14;
  }
  local_380 = local_380 + -1;
  if (((longlong)puVar19 + (-0x50 - (longlong)puVar21)) / 0x50 <
      ((longlong)puVar20 - (longlong)puVar17) / 0x50) {
    if (puVar17 < puVar20) {
      *local_388 = (longlong)puVar17;
      local_388[1] = (longlong)puVar20;
      *(int *)(local_388 + 2) = local_380;
      local_388 = local_388 + 3;
    }
    if (puVar19 <= puVar21 + 10) goto LAB_142c4ed0e;
    puVar20 = puVar23 + -0x14;
    puVar17 = puVar21;
  }
  else {
    if (puVar21 + 10 < puVar19) {
      *local_388 = (longlong)puVar21;
      local_388[1] = (longlong)(puVar23 + -0x14);
      *(int *)(local_388 + 2) = local_380;
      local_388 = local_388 + 3;
    }
    if (puVar20 <= puVar17) goto LAB_142c4ed0e;
  }
  lVar18 = ((longlong)puVar20 - (longlong)puVar17) / 0x50 + 1;
  puVar21 = puVar17;
  if (local_380 == 0) goto LAB_142c4ecf0;
  goto LAB_142c4ea72;
}



// FUNCTION 142c4ee50 FUN_142c4ee50 body=776 status=ok
// SIG undefined FUN_142c4ee50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142c4ee50(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_144167968;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x3f800000;
  param_1[0xb] = 0x3f800000;
  *(undefined1 *)(param_1 + 0xc) = 1;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  FAlphaBlend::FAlphaBlend(param_1 + 0x10,0x3e4ccccd);
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1a] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1b) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x41200000;
  param_1[0x1f] = 0x41200000;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0xbf800000;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined2 *)(param_1 + 0x23) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0xbf800000;
  FUN_141f84110(param_1 + 0x24);
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  *param_1 = &PTR_FUN_1458353d8;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x2e) = 4;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x34) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = DAT_1468b5d98;
  *(undefined4 *)(param_1 + 0x36) = 0x3f266666;
  *(undefined1 *)((longlong)param_1 + 0x1b5) = 1;
  *(undefined4 *)(param_1 + 0x37) = 0xc1200000;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0xc0a00000;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0x40200000;
  param_1[0x39] = 0x40a00000;
  *(undefined4 *)(param_1 + 0x3a) = 0xc1200000;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0xc1200000;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0x40200000;
  param_1[0x3c] = 0x41200000;
  *(undefined4 *)(param_1 + 0x3d) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0x40c00000;
  *(undefined4 *)(param_1 + 0x3e) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 500) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3f) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0x40000000;
  *(undefined4 *)(param_1 + 0x40) = 4;
  FUN_141f84110(param_1 + 0x41);
  *(undefined4 *)(param_1 + 0x45) = 0xffffffff;
  param_1[0x46] = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  param_1[0x48] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x49) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x24c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x254) = DAT_1468b5d98;
  *(undefined4 *)(param_1 + 0x4b) = 0xffffffff;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  FUN_142c56ef0();
  return param_1;
}


