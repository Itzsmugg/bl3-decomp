// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141361390 FUN_141361390 body=130 status=ok
// SIG undefined FUN_141361390(void)

void FUN_141361390(undefined8 param_1,longlong param_2)

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
  FUN_140f794d0(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 141361420 FUN_141361420 body=334 status=ok
// SIG undefined FUN_141361420(void)

void FUN_141361420(undefined8 param_1,longlong param_2)

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
  FUN_140f79660(param_1,local_res10,puVar6);
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



// FUNCTION 141361570 FUN_141361570 body=157 status=ok
// SIG undefined FUN_141361570(void)

void FUN_141361570(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  undefined1 local_a;
  
  local_10 = 0xffffffff;
  local_18 = 0;
  local_c = 0;
  local_a = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  puVar1 = &local_18;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f79690(param_1,puVar1);
  return;
}



// FUNCTION 141361610 FUN_141361610 body=157 status=ok
// SIG undefined FUN_141361610(void)

void FUN_141361610(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  undefined1 local_a;
  
  local_10 = 0xffffffff;
  local_18 = 0;
  local_c = 0;
  local_a = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  puVar1 = &local_18;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f79710(param_1,puVar1);
  return;
}



// FUNCTION 1413616b0 FUN_1413616b0 body=128 status=ok
// SIG undefined FUN_1413616b0(void)

void FUN_1413616b0(undefined8 param_1,longlong param_2)

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
  FUN_140f7d0b0(param_1,local_res10);
  return;
}



// FUNCTION 141361730 FUN_141361730 body=195 status=ok
// SIG undefined FUN_141361730(void)

void FUN_141361730(longlong *param_1,longlong param_2)

{
  undefined8 local_res8;
  undefined8 local_res10;
  
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x5c8))(param_1,local_res10,local_res8);
  return;
}



// FUNCTION 141361800 execInitStartSpot body=195 status=ok
// SIG undefined execInitStartSpot(void)

void AGameModeBase::execInitStartSpot(longlong *param_1,longlong param_2)

{
  undefined8 local_res8;
  undefined8 local_res10;
  
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x5d8))(param_1,local_res10,local_res8);
  return;
}



// FUNCTION 1413618d0 FUN_1413618d0 body=130 status=ok
// SIG undefined FUN_1413618d0(void)

void FUN_1413618d0(undefined8 param_1,longlong param_2)

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
  FUN_140f8d830(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 141361960 FUN_141361960 body=123 status=ok
// SIG undefined FUN_141361960(void)

void FUN_141361960(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [6];
  
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
  FUN_140f8d860(param_1,local_res10[0]);
  return;
}



// FUNCTION 1413619e0 FUN_1413619e0 body=128 status=ok
// SIG undefined FUN_1413619e0(void)

void FUN_1413619e0(undefined8 param_1,longlong param_2)

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
  FUN_140f94cf0(param_1,local_res10);
  return;
}



// FUNCTION 141361a60 FUN_141361a60 body=127 status=ok
// SIG undefined FUN_141361a60(void)

void FUN_141361a60(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x2d0))(param_1,local_res8[0]);
  return;
}



// FUNCTION 141361b20 FUN_141361b20 body=53 status=ok
// SIG undefined FUN_141361b20(void)

void FUN_141361b20(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &PTR_FUN_1448c3e20;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 141361b60 FUN_141361b60 body=53 status=ok
// SIG undefined FUN_141361b60(void)

void FUN_141361b60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x120;
    *puVar1 = &PTR_FUN_1448c3f38;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141361ba0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UXGameInstance::GetPrivateStaticClass(void)

{
  if (DAT_1468844f0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxLeagueChallengeCell",&DAT_1468844f0,FUN_140447710,0x330,
                  0x10000008,0,L"Engine",FUN_141363950,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  URemnantGameInstance::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468844f0;
}



// FUNCTION 141361c50 FUN_141361c50 body=162 status=ok
// SIG undefined FUN_141361c50(void)

longlong FUN_141361c50(void)

{
  if (DAT_1468844c8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxKeybindingsOptions",&DAT_1468844c8,FUN_140447710,0x1f0,
                  0x10000000,0,L"Engine",FUN_1413638a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UParticleLODLevel::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468844c8;
}



// FUNCTION 141361d00 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass(void)

{
  if (DAT_146884500 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GbxGFxLeaguesDetailsPanel",&DAT_146884500,FUN_140447710,400,
                  0x10000008,0,L"Engine",FUN_141363c90,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141326ad0,&LAB_140447700,0);
  }
  return DAT_146884500;
}



// FUNCTION 141361db0 FUN_141361db0 body=162 status=ok
// SIG undefined FUN_141361db0(void)

longlong FUN_141361db0(void)

{
  if (DAT_146884510 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GbxGFxLeagueMenuChestButton",&DAT_146884510,FUN_140447710,
                  0x350,0x10000008,0,L"Engine",FUN_141363bc0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142f18d50,&LAB_140447700,0);
  }
  return DAT_146884510;
}



// FUNCTION 141361e60 FUN_141361e60 body=53 status=ok
// SIG undefined FUN_141361e60(void)

void FUN_141361e60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x90;
    *puVar1 = &PTR_FUN_1448c4050;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141361ea0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ABuilder::GetPrivateStaticClass(void)

{
  if (DAT_146884458 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxItemTradingMenu",&DAT_146884458,FUN_141366df0,0xbc0,
                  0x10000000,0,L"Engine",FUN_141363630,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1412d9d00,&LAB_140447700,0);
  }
  return DAT_146884458;
}



// FUNCTION 141361f60 FUN_141361f60 body=53 status=ok
// SIG undefined FUN_141361f60(void)

void FUN_141361f60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_1448c4168;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141361fa0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UCheckBox::GetPrivateStaticClass(void)

{
  if (DAT_1468844b8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxJokeEULA",&DAT_1468844b8,FUN_141366e50,0x780,0x10000000,0,
                  L"Engine",FUN_1413637b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1412d9d00,&LAB_140447700,0);
  }
  return DAT_1468844b8;
}



// FUNCTION 141362060 FUN_141362060 body=162 status=ok
// SIG undefined FUN_141362060(void)

longlong FUN_141362060(void)

{
  if (DAT_146884520 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GbxGFxLeaguesBigPanelButton",&DAT_146884520,FUN_140447710,
                  0x2d0,0x10000008,0,L"Engine",FUN_141363c50,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142f18d50,&LAB_140447700,0);
  }
  return DAT_146884520;
}



// FUNCTION 141362120 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AMobActorKuroko::GetPrivateStaticClass(void)

{
  if (DAT_146884558 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxLeaguesMenu",&DAT_146884558,FUN_141366e80,0x860,0x10000000
                  ,0,L"Engine",FUN_1413639c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1413a3fb0,&LAB_140447700,0);
  }
  return DAT_146884558;
}



// FUNCTION 1413621e0 FUN_1413621e0 body=162 status=ok
// SIG undefined FUN_1413621e0(void)

longlong FUN_1413621e0(void)

{
  if (DAT_146884468 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxItemTradingBackpackItem",&DAT_146884468,FUN_140447710,
                  0x6d0,0x10000008,0,L"Engine",FUN_1413635f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141338f20,&LAB_140447700,0);
  }
  return DAT_146884468;
}



// FUNCTION 1413622a0 FUN_1413622a0 body=47 status=ok
// SIG undefined FUN_1413622a0(void)

longlong FUN_1413622a0(void)

{
  if (DAT_146884450 == 0) {
    FUN_141786440(&DAT_146884450,&PTR_GetPrivateStaticClass_1448bb280);
  }
  return DAT_146884450;
}



// FUNCTION 1413622d0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ALobbyBeaconPlayerState::GetPrivateStaticClass(void)

{
  if (DAT_1468843f0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxItemInspectionSkinsList",&DAT_1468843f0,
                  StaticRegisterNativesALobbyBeaconPlayerState,0x3e0,0x10000008,0,L"Engine",
                  FUN_141363560,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142f22b30,&LAB_140447700,0);
  }
  return DAT_1468843f0;
}



// FUNCTION 141362380 FUN_141362380 body=47 status=ok
// SIG undefined FUN_141362380(void)

longlong FUN_141362380(void)

{
  if (DAT_146884418 == 0) {
    FUN_141786a30(&DAT_146884418,&PTR_FUN_146324250);
  }
  return DAT_146884418;
}



// FUNCTION 1413623b0 FUN_1413623b0 body=47 status=ok
// SIG undefined FUN_1413623b0(void)

longlong FUN_1413623b0(void)

{
  if (DAT_146884420 == 0) {
    FUN_141786a30(&DAT_146884420,&PTR_FUN_146324350);
  }
  return DAT_146884420;
}



// FUNCTION 1413623e0 FUN_1413623e0 body=47 status=ok
// SIG undefined FUN_1413623e0(void)

longlong FUN_1413623e0(void)

{
  if (DAT_146884428 == 0) {
    FUN_141786a30(&DAT_146884428,&PTR_FUN_146324410);
  }
  return DAT_146884428;
}



// FUNCTION 141362410 FUN_141362410 body=47 status=ok
// SIG undefined FUN_141362410(void)

longlong FUN_141362410(void)

{
  if (DAT_146884430 == 0) {
    FUN_141786a30(&DAT_146884430,&PTR_FUN_1463244d0);
  }
  return DAT_146884430;
}



// FUNCTION 141362440 FUN_141362440 body=47 status=ok
// SIG undefined FUN_141362440(void)

longlong FUN_141362440(void)

{
  if (DAT_146884438 == 0) {
    FUN_141786a30(&DAT_146884438,&PTR_FUN_146324510);
  }
  return DAT_146884438;
}



// FUNCTION 141362470 FUN_141362470 body=47 status=ok
// SIG undefined FUN_141362470(void)

longlong FUN_141362470(void)

{
  if (DAT_146884440 == 0) {
    FUN_141786a30(&DAT_146884440,&PTR_FUN_146324550);
  }
  return DAT_146884440;
}



// FUNCTION 1413624a0 FUN_1413624a0 body=47 status=ok
// SIG undefined FUN_1413624a0(void)

longlong FUN_1413624a0(void)

{
  if (DAT_146884448 == 0) {
    FUN_141786a30(&DAT_146884448,&PTR_FUN_146324610);
  }
  return DAT_146884448;
}



// FUNCTION 1413624d0 FUN_1413624d0 body=47 status=ok
// SIG undefined FUN_1413624d0(void)

longlong FUN_1413624d0(void)

{
  if (DAT_1468844b0 == 0) {
    FUN_141786440(&DAT_1468844b0,&PTR_GetPrivateStaticClass_1448ba860);
  }
  return DAT_1468844b0;
}



// FUNCTION 141362500 FUN_141362500 body=47 status=ok
// SIG undefined FUN_141362500(void)

longlong FUN_141362500(void)

{
  if (DAT_146884498 == 0) {
    FUN_141786a30(&DAT_146884498,&PTR_FUN_146325250);
  }
  return DAT_146884498;
}



// FUNCTION 141362530 FUN_141362530 body=47 status=ok
// SIG undefined FUN_141362530(void)

longlong FUN_141362530(void)

{
  if (DAT_1468844a0 == 0) {
    FUN_141786a30(&DAT_1468844a0,&PTR_FUN_146325310);
  }
  return DAT_1468844a0;
}



// FUNCTION 141362560 FUN_141362560 body=47 status=ok
// SIG undefined FUN_141362560(void)

longlong FUN_141362560(void)

{
  if (DAT_1468844a8 == 0) {
    FUN_141786a30(&DAT_1468844a8,&PTR_FUN_146325390);
  }
  return DAT_1468844a8;
}



// FUNCTION 1413625a0 FUN_1413625a0 body=162 status=ok
// SIG undefined FUN_1413625a0(void)

longlong FUN_1413625a0(void)

{
  if (DAT_146884400 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxItemInspectionSkinCell",&DAT_146884400,FUN_140447710,0x370
                  ,0x10000008,0,L"Engine",FUN_141363490,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  URemnantGameInstance::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146884400;
}



// FUNCTION 141362650 FUN_141362650 body=47 status=ok
// SIG undefined FUN_141362650(void)

longlong FUN_141362650(void)

{
  if (DAT_1468843e8 == 0) {
    FUN_141786440(&DAT_1468843e8,&PTR_GetPrivateStaticClass_1448bb680);
  }
  return DAT_1468843e8;
}



// FUNCTION 141362680 FUN_141362680 body=47 status=ok
// SIG undefined FUN_141362680(void)

longlong FUN_141362680(void)

{
  if (DAT_1468843d8 == 0) {
    FUN_141786a30(&DAT_1468843d8,&PTR_FUN_146324010);
  }
  return DAT_1468843d8;
}



// FUNCTION 1413626b0 FUN_1413626b0 body=47 status=ok
// SIG undefined FUN_1413626b0(void)

longlong FUN_1413626b0(void)

{
  if (DAT_1468843e0 == 0) {
    FUN_141786a30(&DAT_1468843e0,&PTR_FUN_146324050);
  }
  return DAT_1468843e0;
}



// FUNCTION 1413626f0 FUN_1413626f0 body=47 status=ok
// SIG undefined FUN_1413626f0(void)

longlong FUN_1413626f0(void)

{
  if (DAT_146884550 == 0) {
    FUN_141786440(&DAT_146884550,&PTR_GetPrivateStaticClass_1448be1f0);
  }
  return DAT_146884550;
}



// FUNCTION 141362720 FUN_141362720 body=47 status=ok
// SIG undefined FUN_141362720(void)

longlong FUN_141362720(void)

{
  if (DAT_146884528 == 0) {
    FUN_141786a30(&DAT_146884528,&PTR_FUN_146326620);
  }
  return DAT_146884528;
}



// FUNCTION 141362750 FUN_141362750 body=47 status=ok
// SIG undefined FUN_141362750(void)

longlong FUN_141362750(void)

{
  if (DAT_146884530 == 0) {
    FUN_141786a30(&DAT_146884530,&PTR_FUN_1463266e0);
  }
  return DAT_146884530;
}



// FUNCTION 141362780 FUN_141362780 body=47 status=ok
// SIG undefined FUN_141362780(void)

longlong FUN_141362780(void)

{
  if (DAT_146884538 == 0) {
    FUN_141786a30(&DAT_146884538,&PTR_FUN_1463267a0);
  }
  return DAT_146884538;
}



// FUNCTION 1413627b0 FUN_1413627b0 body=47 status=ok
// SIG undefined FUN_1413627b0(void)

longlong FUN_1413627b0(void)

{
  if (DAT_146884540 == 0) {
    FUN_141786a30(&DAT_146884540,&PTR_FUN_146326860);
  }
  return DAT_146884540;
}



// FUNCTION 1413627e0 FUN_1413627e0 body=47 status=ok
// SIG undefined FUN_1413627e0(void)

longlong FUN_1413627e0(void)

{
  if (DAT_146884548 == 0) {
    FUN_141786a30(&DAT_146884548,&PTR_FUN_146326920);
  }
  return DAT_146884548;
}



// FUNCTION 141362830 FUN_141362830 body=47 status=ok
// SIG undefined FUN_141362830(void)

longlong FUN_141362830(void)

{
  if (DAT_146884488 == 0) {
    FUN_141786440(&DAT_146884488,&PTR_FUN_1448bd580);
  }
  return DAT_146884488;
}



// FUNCTION 141362860 FUN_141362860 body=47 status=ok
// SIG undefined FUN_141362860(void)

longlong FUN_141362860(void)

{
  if (DAT_146884470 == 0) {
    FUN_141786a30(&DAT_146884470,&PTR_FUN_146324e60);
  }
  return DAT_146884470;
}



// FUNCTION 141362890 FUN_141362890 body=47 status=ok
// SIG undefined FUN_141362890(void)

longlong FUN_141362890(void)

{
  if (DAT_146884478 == 0) {
    FUN_141786a30(&DAT_146884478,&PTR_FUN_146324f20);
  }
  return DAT_146884478;
}



// FUNCTION 1413628c0 FUN_1413628c0 body=47 status=ok
// SIG undefined FUN_1413628c0(void)

longlong FUN_1413628c0(void)

{
  if (DAT_146884480 == 0) {
    FUN_141786a30(&DAT_146884480,&PTR_FUN_146324fe0);
  }
  return DAT_146884480;
}



// FUNCTION 1413628f0 FUN_1413628f0 body=53 status=ok
// SIG undefined FUN_1413628f0(void)

void FUN_1413628f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &PTR_FUN_1448c7268;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141362950 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMobBaseAnim::GetPrivateStaticClass(void)

{
  if (DAT_146884398 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxItemInspectionManufacturerChallengeObject",&DAT_146884398,
                  FUN_140447710,0x360,0x10000008,0,L"Engine",FUN_1413632e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141366d80,&LAB_140447700,0);
  }
  return DAT_146884398;
}



// FUNCTION 141362a50 FUN_141362a50 body=162 status=ok
// SIG undefined FUN_141362a50(void)

longlong FUN_141362a50(void)

{
  if (DAT_146884490 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxItemTradingMenuOffer",&DAT_146884490,FUN_141366e20,0x1c0,
                  0x10000008,0,L"Engine",FUN_141363760,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141326ad0,&LAB_140447700,0);
  }
  return DAT_146884490;
}



// FUNCTION 141362b00 FUN_141362b00 body=162 status=ok
// SIG undefined FUN_141362b00(void)

longlong FUN_141362b00(void)

{
  if (DAT_1468843a8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxItemInspectionPartCell",&DAT_1468843a8,FUN_140447710,0x350
                  ,0x10000008,0,L"Engine",FUN_1413633b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  URemnantGameInstance::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468843a8;
}



// FUNCTION 141362bb0 FUN_141362bb0 body=162 status=ok
// SIG undefined FUN_141362bb0(void)

longlong FUN_141362bb0(void)

{
  if (DAT_1468843c0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxItemInspectionPartList",&DAT_1468843c0,FUN_141366d90,0x3c0
                  ,0x10000008,0,L"Engine",FUN_141363450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142f22b30,&LAB_140447700,0);
  }
  return DAT_1468843c0;
}



// FUNCTION 141362c60 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass(void)

{
  if (DAT_1468843d0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxItemInspectionStatRowObject",&DAT_1468843d0,FUN_140447710,
                  400,0x10000008,0,L"Engine",FUN_1413635b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141326ad0,&LAB_140447700,0);
  }
  return DAT_1468843d0;
}



// FUNCTION 141362d10 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UARTrackedObject::GetPrivateStaticClass(void)

{
  if (DAT_1468842f8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxItemInspectionMenuData",&DAT_1468842f8,FUN_140447710,0xd0,
                  0x10000000,0,L"Engine",FUN_141363350,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPawnAction_Sequence::StaticClass,&LAB_140447700,0);
  }
  return DAT_1468842f8;
}



// FUNCTION 141362dd0 FUN_141362dd0 body=47 status=ok
// SIG undefined FUN_141362dd0(void)

longlong FUN_141362dd0(void)

{
  if (DAT_146884388 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146884388,&PTR_Z_Construct_UPackage__Script_MechWarrior_146323e60);
  }
  return DAT_146884388;
}



// FUNCTION 141362e00 FUN_141362e00 body=47 status=ok
// SIG undefined FUN_141362e00(void)

longlong FUN_141362e00(void)

{
  if (DAT_1468843b8 == 0) {
    FUN_141786440(&DAT_1468843b8,&PTR_FUN_1448b9060);
  }
  return DAT_1468843b8;
}



// FUNCTION 141362e30 FUN_141362e30 body=47 status=ok
// SIG undefined FUN_141362e30(void)

longlong FUN_141362e30(void)

{
  if (DAT_1468843b0 == 0) {
    FUN_141786a30(&DAT_1468843b0,&PTR_FUN_146323f40);
  }
  return DAT_1468843b0;
}



// FUNCTION 141362e60 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FSplineInstanceData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x180;
    *puVar1 = &PTR_FUN_1448c39c0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141362ea0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UXGameInstance::GetPrivateStaticClass(void)

{
  if (DAT_146884578 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxLoadGameListItem",&DAT_146884578,FUN_140447710,0x330,
                  0x10000008,0,L"Engine",FUN_141363b40,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  URemnantGameInstance::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146884578;
}



// FUNCTION 141362f50 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1b0;
    *puVar1 = &PTR_FUN_1448c3ad8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141362f90 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1c8;
    *puVar1 = &PTR_FUN_1448c7750;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141362fd0 FUN_141362fd0 body=53 status=ok
// SIG undefined FUN_141362fd0(void)

void FUN_141362fd0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_1448c3bf0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141363020 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FEditableTextStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x218;
    *puVar1 = &PTR_FUN_1448c3d08;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141363060 FUN_141363060 body=632 status=ok
// SIG undefined FUN_141363060(void)

int * FUN_141363060(longlong *param_1,int *param_2,undefined4 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  byte *_Src;
  int iVar16;
  bool bVar17;
  
  iVar16 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar12 = (int)param_1[6];
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar15 = *(int *)(*param_1 + 4 + (longlong)iVar12 * 0x18);
    *(int *)(param_1 + 6) = iVar15;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar15 * 0x18) = 0xffffffff;
    }
  }
  plVar10 = (longlong *)param_1[4];
  *param_2 = iVar12;
  lVar9 = (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = param_1 + 2;
  }
  puVar13 = (uint *)((longlong)plVar10 + lVar9);
  *puVar13 = *puVar13 | 1 << ((byte)iVar12 & 0x1f);
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  bVar17 = false;
  lVar1 = (longlong)iVar12 * 0x18;
  _Src = (byte *)(*param_1 + lVar1);
  *(undefined4 *)_Src = *param_3;
  *(undefined4 *)(_Src + 4) = uVar4;
  *(undefined4 *)(_Src + 8) = uVar5;
  *(undefined4 *)(_Src + 0xc) = uVar6;
  _Src[0x10] = 0xff;
  _Src[0x11] = 0xff;
  _Src[0x12] = 0xff;
  _Src[0x13] = 0xff;
  iVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar15 != 1) {
    iVar8 = iVar16;
    if (iVar15 != 0) {
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = param_1 + 7;
      }
      iVar11 = *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (ulonglong)*_Src) * 4)
      ;
      if (iVar11 != -1) {
        do {
          iVar8 = iVar11;
          if (*(byte *)(*param_1 + (longlong)iVar11 * 0x18) == *_Src) break;
          iVar11 = *(int *)(*param_1 + 0x10 + (longlong)iVar11 * 0x18);
          iVar8 = iVar16;
        } while (iVar11 != -1);
      }
    }
    bVar17 = iVar8 != -1;
    if (bVar17) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar8 * 0x18),_Src,0x10);
      bVar3 = (byte)iVar12 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar12;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar1 + lVar2) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar16 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar2) = iVar16;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar12;
      plVar10 = (longlong *)param_1[4];
      *param_2 = iVar8;
      if (plVar10 == (longlong *)0x0) {
        plVar10 = param_1 + 2;
      }
      puVar13 = (uint *)((longlong)plVar10 + lVar9);
      *puVar13 = *puVar13 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_1413632ae;
    }
  }
  cVar7 = TSet<TTuple<enum_EGPlatformType,UMediaSource_*>,TDefaultMapHashableKeyFuncs<enum_EGPlatformType,UMediaSource_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar15,0);
  if (cVar7 == '\0') {
    uVar14 = (int)param_1[9] - 1U & (uint)*_Src;
    *(uint *)(_Src + 0x14) = uVar14;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0x10) =
         *(undefined4 *)
          ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar14) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar14) * 4) =
         *param_2;
  }
LAB_1413632ae:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar17;
  }
  return param_2;
}



// FUNCTION 1413632e0 FUN_1413632e0 body=103 status=ok
// SIG undefined FUN_1413632e0(void)

void FUN_1413632e0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1413640d0(puVar1,param_1);
    *puVar1 = &PTR_FUN_1448c2d90;
    puVar1[100] = 0;
    puVar1[0x65] = 0;
    puVar1[0x67] = 0;
    puVar1[0x68] = 0;
    *(undefined4 *)(puVar1 + 99) = 0;
    puVar1[0x6a] = 0;
    *(undefined4 *)(puVar1 + 0x66) = 0;
    puVar1[0x6b] = 0;
    *(undefined4 *)(puVar1 + 0x69) = 0;
  }
  return;
}



// FUNCTION 141363350 FUN_141363350 body=81 status=ok
// SIG undefined FUN_141363350(void)

void FUN_141363350(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141325970(puVar1,param_1);
    *(undefined4 *)(puVar1 + 0x18) = 0x3f000000;
    *puVar1 = &PTR_FUN_1448c2050;
    *(undefined4 *)((longlong)puVar1 + 0xc4) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x19) = 0x3f000000;
    *(undefined4 *)((longlong)puVar1 + 0xcc) = 0x3f800000;
  }
  return;
}



// FUNCTION 1413633b0 FUN_1413633b0 body=158 status=ok
// SIG undefined FUN_1413633b0(void)

void FUN_1413633b0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1413205b0(puVar1,param_1);
    *(undefined4 *)(puVar1 + 0x5b) = 0xffffffff;
    puVar1[0x59] = 0;
    puVar1[0x5a] = 0;
    *(undefined1 *)((longlong)puVar1 + 0x2f4) = 0;
    puVar1[0x5f] = 0;
    *(undefined4 *)(puVar1 + 0x60) = 0;
    *puVar1 = &PTR_FUN_1448c3050;
    puVar1[0x2e] = &PTR_LAB_1448c3380;
    puVar1[0x61] = 0;
    puVar1[0x62] = 0;
    puVar1[100] = 0;
    puVar1[0x65] = 0;
    puVar1[0x67] = 0;
    *(undefined4 *)(puVar1 + 99) = 0;
    puVar1[0x68] = 0;
    *(undefined4 *)(puVar1 + 0x66) = 0;
  }
  return;
}



// FUNCTION 141363450 FUN_141363450 body=55 status=ok
// SIG undefined FUN_141363450(void)

void FUN_141363450(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141363fd0(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__1448c33d0;
    puVar1[0x2e] = &PTR_LAB_1448c29d0;
  }
  return;
}



// FUNCTION 141363490 FUN_141363490 body=196 status=ok
// SIG undefined FUN_141363490(void)

void FUN_141363490(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1413205b0(puVar1,param_1);
    *(undefined4 *)(puVar1 + 0x5b) = 0xffffffff;
    puVar1[0x59] = 0;
    puVar1[0x5a] = 0;
    *(undefined1 *)((longlong)puVar1 + 0x2f4) = 0;
    puVar1[0x5f] = 0;
    *(undefined4 *)(puVar1 + 0x60) = 0;
    *puVar1 = &PTR_FUN_1448c4628;
    puVar1[0x2e] = &PTR_LAB_1448c4958;
    puVar1[0x61] = 0;
    puVar1[0x62] = 0;
    puVar1[99] = 0;
    puVar1[100] = 0;
    puVar1[0x65] = 0;
    puVar1[0x66] = 0;
    puVar1[0x67] = 0;
    puVar1[0x68] = 0;
    puVar1[0x6a] = 0;
    puVar1[0x6b] = 0;
    *(undefined4 *)(puVar1 + 0x69) = 0;
    *(undefined4 *)(puVar1 + 0x6c) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x364) = 0;
  }
  return;
}



// FUNCTION 141363560 FUN_141363560 body=77 status=ok
// SIG undefined FUN_141363560(void)

void FUN_141363560(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141363fd0(puVar1,param_1);
    *puVar1 = &PTR_FUN_1448c4290;
    puVar1[0x2e] = &PTR_LAB_1448c45d8;
    puVar1[0x77] = 0;
    puVar1[0x78] = 0;
    *(undefined1 *)(puVar1 + 0x7a) = 0;
  }
  return;
}



// FUNCTION 1413635b0 FUN_1413635b0 body=63 status=ok
// SIG undefined FUN_1413635b0(void)

void FUN_1413635b0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14106e9c0(puVar1,param_1);
    *puVar1 = &PTR_FUN_1448c3718;
    puVar1[0x2f] = 0;
    puVar1[0x30] = 0;
    *(undefined4 *)(puVar1 + 0x2e) = 0;
  }
  return;
}



// FUNCTION 1413635f0 FUN_1413635f0 body=55 status=ok
// SIG undefined FUN_1413635f0(void)

void FUN_1413635f0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141336c10(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__14485ef20;
    puVar1[0x2e] = &PTR_LAB_14485f2f0;
  }
  return;
}



// FUNCTION 141363630 FUN_141363630 body=304 status=ok
// SIG undefined FUN_141363630(void)

void FUN_141363630(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140e9aa30(puVar1,param_1);
    *puVar1 = &PTR_FUN_1448c4c70;
    puVar1[0x9b] = &PTR_LAB_1448c51d8;
    FUN_141354060(puVar1 + 0xd0);
    puVar1[0x123] = 0;
    puVar1[0x124] = 0;
    *(undefined4 *)(puVar1 + 0x126) = 8;
    puVar1[0x127] = 0;
    puVar1[0x128] = 0;
    puVar1[0x129] = 0;
    puVar1[0x12a] = 0;
    puVar1[299] = 0;
    puVar1[300] = 0;
    *(undefined4 *)(puVar1 + 0x12d) = 0x43520000;
    *(undefined4 *)((longlong)puVar1 + 0x96c) = 0x43098000;
    *(undefined4 *)(puVar1 + 0x12e) = 0xc0a00000;
    *(undefined4 *)((longlong)puVar1 + 0x974) = 0;
    FUN_14106d860(puVar1 + 0x135);
    *(undefined1 *)(puVar1 + 0x16e) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xb72) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xb75) = 0;
    uVar2 = FUN_1404b03b0();
    FText::FText(puVar1 + 0x16f,uVar2);
    *(undefined1 *)(puVar1 + 0x172) = 0;
    *(undefined1 *)(puVar1 + 0x174) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xba2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xba4) = 0;
    *(undefined4 *)(puVar1 + 0x176) = 0xffffffff;
    *(undefined1 *)((longlong)puVar1 + 0xbb4) = 2;
    *(undefined4 *)(puVar1 + 0x177) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xbbc) = 0;
  }
  return;
}



// FUNCTION 141363760 FUN_141363760 body=80 status=ok
// SIG undefined FUN_141363760(void)

void FUN_141363760(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14106e9c0(puVar1,param_1);
    *puVar1 = &PTR_FUN_1448c49c8;
    puVar1[0x2e] = 0;
    puVar1[0x30] = 0;
    puVar1[0x31] = 0;
    *(undefined4 *)(puVar1 + 0x36) = 0xffffffff;
    *(undefined1 *)(puVar1 + 0x37) = 0;
  }
  return;
}



// FUNCTION 1413637b0 FUN_1413637b0 body=232 status=ok
// SIG undefined FUN_1413637b0(void)

void FUN_1413637b0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140e9aa30(puVar1,param_1);
    *puVar1 = &PTR_FUN_1448c5460;
    puVar1[0x9b] = &PTR_LAB_1448c59c8;
    puVar1[0xd0] = 0;
    puVar1[0xd1] = 0;
    *(undefined4 *)(puVar1 + 0xd2) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x694) = 0xbf800000;
    *(undefined4 *)(puVar1 + 0xd3) = 0;
    puVar1[0xd4] = 0;
    puVar1[0xd5] = 0;
    puVar1[0xd6] = 0;
    *(undefined4 *)(puVar1 + 0xd7) = 0x3dcccccd;
    FText::FText(puVar1 + 0xd8);
    FText::FText(puVar1 + 0xdb);
    FText::FText(puVar1 + 0xde);
    FUN_1405e1750(puVar1 + 0xe1);
    puVar1[0xe9] = 0;
    puVar1[0xea] = 0;
    puVar1[0xeb] = 0;
    puVar1[0xec] = 0;
    puVar1[0xed] = 0;
    *(undefined1 *)(puVar1 + 0xee) = 1;
  }
  return;
}



// FUNCTION 1413638a0 FUN_1413638a0 body=173 status=ok
// SIG undefined FUN_1413638a0(void)

void FUN_1413638a0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *(undefined1 *)(puVar1 + 5) = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    *puVar1 = &PTR_FUN_1448c5b78;
    FUN_14132fac0(puVar1 + 0x17);
    FUN_14132fac0(puVar1 + 0x21);
    FUN_14132fac0(puVar1 + 0x2b);
    return;
  }
  return;
}



// FUNCTION 141363950 FUN_141363950 body=100 status=ok
// SIG undefined FUN_141363950(void)

void FUN_141363950(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1413205b0(puVar1,param_1);
    *(undefined4 *)(puVar1 + 0x5b) = 0xffffffff;
    puVar1[0x59] = 0;
    puVar1[0x5a] = 0;
    *(undefined1 *)((longlong)puVar1 + 0x2f4) = 0;
    puVar1[0x5f] = 0;
    *(undefined4 *)(puVar1 + 0x60) = 0;
    *puVar1 = &PTR_FUN_1448c5e58;
    puVar1[0x2e] = &PTR_LAB_1448c6188;
  }
  return;
}



// FUNCTION 1413639c0 FUN_1413639c0 body=379 status=ok
// SIG undefined FUN_1413639c0(void)

void FUN_1413639c0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140e9aa30(puVar1,param_1);
    *puVar1 = &PTR_FUN_144646880;
    puVar1[0x9b] = &PTR_LAB_144646df0;
    FWeakObjectPtr::operator=(puVar1 + 0xd0,0);
    *(undefined4 *)(puVar1 + 0xd1) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0xd3) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x69c) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x68c) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0xd2) = 0x10000;
    *(undefined2 *)((longlong)puVar1 + 0x694) = 0;
    puVar1[0xd4] = 0;
    *puVar1 = &PTR_FUN_1448c6b10;
    puVar1[0x9b] = &PTR_LAB_1448c70b8;
    puVar1[0xec] = 0;
    puVar1[0xed] = 0;
    puVar1[0xef] = 0;
    puVar1[0xf0] = 0;
    *(undefined4 *)(puVar1 + 0xf1) = 0;
    puVar1[0xf2] = 0;
    puVar1[0xf3] = 0;
    puVar1[0xf4] = 0;
    puVar1[0xf5] = 0;
    *(undefined2 *)(puVar1 + 0xf7) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x7ba) = 0;
    puVar1[0xf8] = 0;
    puVar1[0xf9] = 0;
    *(undefined4 *)(puVar1 + 0xfa) = 0;
    *(undefined1 *)(puVar1 + 0xfb) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x7dc) = 0;
    *(undefined1 *)(puVar1 + 0xfc) = 0;
    puVar1[0xfd] = 0;
    puVar1[0xfe] = 0;
    *(undefined4 *)(puVar1 + 0xff) = 0;
    puVar1[0x100] = 0;
    *(undefined4 *)(puVar1 + 0x101) = 0;
    puVar1[0x102] = 0;
    *(undefined4 *)(puVar1 + 0x103) = 0;
    puVar1[0x104] = 0;
    *(undefined4 *)(puVar1 + 0x105) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x82c) = 0;
    puVar1[0x106] = 0;
    puVar1[0x107] = 0;
    puVar1[0x108] = 0;
    *(undefined4 *)(puVar1 + 0x109) = 0xffffffff;
    *(undefined8 *)((longlong)puVar1 + 0x84c) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x854) = 0;
  }
  return;
}



// FUNCTION 141363b40 FUN_141363b40 body=121 status=ok
// SIG undefined FUN_141363b40(void)

void FUN_141363b40(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1413205b0(puVar1,param_1);
    *(undefined4 *)(puVar1 + 0x5b) = 0xffffffff;
    puVar1[0x59] = 0;
    puVar1[0x5a] = 0;
    *(undefined1 *)((longlong)puVar1 + 0x2f4) = 0;
    puVar1[0x5f] = 0;
    *(undefined4 *)(puVar1 + 0x60) = 0;
    *puVar1 = &PTR_FUN_1448c73d0;
    puVar1[0x2e] = &PTR_LAB_1448c7700;
    puVar1[0x62] = 0;
    puVar1[99] = 0;
    puVar1[100] = 0;
  }
  return;
}



// FUNCTION 141363bc0 FUN_141363bc0 body=130 status=ok
// SIG undefined FUN_141363bc0(void)

void FUN_141363bc0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1413205b0(puVar1,param_1);
    *puVar1 = &PTR_FUN_1448c6480;
    puVar1[0x2e] = &PTR_LAB_1448c67a0;
    puVar1[0x61] = 0;
    puVar1[0x62] = 0;
    puVar1[99] = 0;
    puVar1[100] = 0;
    puVar1[0x65] = 0;
    puVar1[0x66] = 0;
    puVar1[0x67] = 0;
    puVar1[0x68] = 0;
    *(undefined4 *)(puVar1 + 0x69) = 0xffffffff;
    *(undefined2 *)((longlong)puVar1 + 0x34c) = 0;
  }
  return;
}



// FUNCTION 141363c50 FUN_141363c50 body=62 status=ok
// SIG undefined FUN_141363c50(void)

void FUN_141363c50(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1413205b0(puVar1,param_1);
    *(undefined1 *)(puVar1 + 0x59) = 0;
    *puVar1 = &PTR_FUN_1448c67f0;
    puVar1[0x2e] = &PTR_LAB_14482bf70;
  }
  return;
}



// FUNCTION 141363c90 FUN_141363c90 body=48 status=ok
// SIG undefined FUN_141363c90(void)

void FUN_141363c90(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14106e9c0(puVar1,param_1);
    *(undefined1 *)(puVar1 + 0x31) = 0;
    *puVar1 = &PTR_FUN_1448c61d8;
  }
  return;
}



// FUNCTION 141363cc0 FUN_141363cc0 body=396 status=ok
// SIG undefined FUN_141363cc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141363cc0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 1;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  uVar2 = FUN_1404b03b0();
  FText::FText(param_1 + 0xf,uVar2);
  uVar2 = FUN_1404b03b0();
  FText::FText(param_1 + 0x12,uVar2);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined2 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)((longlong)param_1 + 0xea) = 0;
  uVar2 = _DAT_1464aa6e8;
  *(undefined8 *)((longlong)param_1 + 0xec) = _DAT_1464aa6e0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = uVar2;
  uVar2 = _DAT_1464aa6e8;
  *(undefined8 *)((longlong)param_1 + 0xfc) = _DAT_1464aa6e0;
  *(undefined8 *)((longlong)param_1 + 0x104) = uVar2;
  uVar1 = _DAT_1464aa6e8;
  uVar2 = _DAT_1464aa6e0;
  *(undefined2 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x11e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x114) = uVar1;
  uVar2 = _DAT_1464aa6e8;
  param_1[0x24] = _DAT_1464aa6e0;
  param_1[0x25] = uVar2;
  uVar2 = _DAT_1464aa6e8;
  param_1[0x26] = _DAT_1464aa6e0;
  param_1[0x27] = uVar2;
  uVar2 = _DAT_1464aa6e8;
  param_1[0x28] = _DAT_1464aa6e0;
  param_1[0x29] = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  return param_1;
}



// FUNCTION 141363e50 FUN_141363e50 body=382 status=ok
// SIG undefined FUN_141363e50(void)

undefined8 * FUN_141363e50(undefined8 *param_1)

{
  FUN_14106e9c0();
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1448c22f0;
  param_1[0x2e] = &PTR_LAB_1448c2638;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined2 *)(param_1 + 0x39) = 1;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  FUN_140e9a2b0(param_1 + 0x3c);
  param_1[0x4e] = 0xffffffffffffffff;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 700) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x58) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2c4) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x59) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2cc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2dc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = 0;
  *(undefined2 *)(param_1 + 0x5d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2ea) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2ec) = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x304) = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30c) = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  *(undefined4 *)((longlong)param_1 + 0x314) = 0;
  *(undefined4 *)(param_1 + 99) = 0;
  return param_1;
}



// FUNCTION 141363fd0 FUN_141363fd0 body=252 status=ok
// SIG undefined FUN_141363fd0(void)

undefined8 * FUN_141363fd0(undefined8 *param_1)

{
  FUN_141363e50();
  *param_1 = &PTR__scalar_deleting_destructor__1448c2688;
  param_1[0x2e] = &PTR_LAB_1448c29d0;
  FWeakObjectPtr::operator=(param_1 + 100,0);
  param_1[0x65] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x66,0);
  param_1[0x67] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x68,0);
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0x42c80000;
  *(undefined8 *)((longlong)param_1 + 0x36c) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x374) = 0;
  *(undefined4 *)(param_1 + 0x6f) = 5;
  *(undefined8 *)((longlong)param_1 + 0x37c) = 1;
  *(undefined8 *)((longlong)param_1 + 900) = 0;
  param_1[0x72] = 0;
  *(undefined4 *)((longlong)param_1 + 0x38c) = 0xffffffff;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  return param_1;
}



// FUNCTION 1413640d0 FUN_1413640d0 body=747 status=ok
// SIG undefined FUN_1413640d0(void)

undefined8 * FUN_1413640d0(undefined8 *param_1)

{
  FUN_14106e9c0();
  *param_1 = &PTR__scalar_deleting_destructor__1448c2a20;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0x3f000000;
  *(undefined1 *)(param_1 + 0x32) = 0;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0x40000000;
  param_1[0x33] = 2;
  param_1[0x36] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x38,0);
  FGenericPlatformString::Memcpy(param_1[0x38],L"edgeFlash",0x14);
  param_1[0x3a] = 0;
  param_1[0x3b] = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x3a,0);
  FGenericPlatformString::Memcpy(param_1[0x3a],L"edgeFlashInner",0x1e);
  param_1[0x3c] = 0;
  param_1[0x3d] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x3c,0);
  FGenericPlatformString::Memcpy(param_1[0x3c],&DAT_1446a4538,10);
  param_1[0x3e] = 0;
  param_1[0x3f] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x3e,0);
  FGenericPlatformString::Memcpy(param_1[0x3e],L"delta",0xc);
  param_1[0x40] = 0;
  param_1[0x41] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x40,0);
  FGenericPlatformString::Memcpy(param_1[0x40],L"backgroundBar",0x1c);
  param_1[0x42] = 0;
  param_1[0x43] = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x42,0);
  FGenericPlatformString::Memcpy(param_1[0x42],L"currentValueLabel",0x24);
  param_1[0x44] = 0;
  param_1[0x45] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x44,0);
  FGenericPlatformString::Memcpy(param_1[0x44],L"maxValueLabel",0x1c);
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  *(undefined1 *)(param_1 + 0x56) = 0;
  FWeakObjectPtr::operator=(param_1 + 0x57,0);
  param_1[0x58] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x59,0);
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0x3f000000;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = 0x40000000;
  param_1[0x5d] = 2;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  *(undefined1 *)(param_1 + 0x62) = 0;
  return param_1;
}



// FUNCTION 1413643c0 FUN_1413643c0 body=363 status=ok
// SIG undefined FUN_1413643c0(void)

void FUN_1413643c0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  iVar2 = *(int *)(param_1 + 0x290);
  plVar3 = *(longlong **)(param_1 + 0x288);
  if (iVar2 != 0) {
    do {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar3 = *(longlong **)(param_1 + 0x288);
  }
  if (plVar3 != (longlong *)0x0) {
    FMemory::Free(plVar3);
  }
  iVar2 = *(int *)(param_1 + 0x280);
  plVar3 = *(longlong **)(param_1 + 0x278);
  if (iVar2 != 0) {
    do {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar3 = *(longlong **)(param_1 + 0x278);
  }
  if (plVar3 != (longlong *)0x0) {
    FMemory::Free(plVar3);
  }
  if (*(longlong *)(param_1 + 0x230) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x210) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x170) = &PTR_FUN_14468d298;
  FUN_140ce1dc0(param_1 + 0xa0);
  plVar3 = *(longlong **)(param_1 + 0x30);
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
  FUN_141782120(param_1);
  return;
}



// FUNCTION 141364530 FUN_141364530 body=134 status=ok
// SIG undefined FUN_141364530(void)

void FUN_141364530(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x3a8) != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x3a0);
  plVar1 = *(longlong **)(param_1 + 0x398);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 6;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x398);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (*(longlong *)(param_1 + 0x358) != 0) {
    FMemory::Free();
  }
  FUN_1413643c0(param_1);
  return;
}



// FUNCTION 1413645c0 FUN_1413645c0 body=510 status=ok
// SIG undefined FUN_1413645c0(void)

void FUN_1413645c0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x310) != '\0') {
    *(undefined1 *)(param_1 + 0x310) = 0;
  }
  plVar3 = *(longlong **)(param_1 + 0x2a8);
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
  plVar3 = *(longlong **)(param_1 + 0x290);
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
  plVar3 = *(longlong **)(param_1 + 0x278);
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
  plVar3 = *(longlong **)(param_1 + 0x268);
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
  plVar3 = *(longlong **)(param_1 + 600);
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
  plVar3 = *(longlong **)(param_1 + 0x248);
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
  plVar3 = *(longlong **)(param_1 + 0x238);
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
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x210) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  FUN_140ce1dc0(param_1 + 0xa0);
  plVar3 = *(longlong **)(param_1 + 0x30);
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
  FUN_141782120(param_1);
  return;
}



// FUNCTION 1413647c0 FUN_1413647c0 body=506 status=ok
// SIG undefined FUN_1413647c0(void)

longlong * FUN_1413647c0(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 local_res8 [8];
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  uint local_48;
  undefined4 uStack_44;
  longlong *local_40;
  uint uStack_38;
  uint uStack_34;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  if (param_1 != param_2) {
    uVar7 = 0;
    iVar9 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != iVar9) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (param_1,iVar9);
    }
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    uVar3 = iVar9 + 0x1f + (iVar9 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
    if (*(uint *)((longlong)param_1 + 0x2c) != uVar3) {
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
    }
    cVar2 = TSet<TTuple<enum_EGPlatformType,UMediaSource_*>,TDefaultMapHashableKeyFuncs<enum_EGPlatformType,UMediaSource_*,0>,FDefaultSetAllocator>
            ::ConditionalRehash(param_1,iVar9,1);
    if ((cVar2 == '\0') && (0 < (int)*(uint *)(param_1 + 9))) {
      uVar10 = (ulonglong)*(uint *)(param_1 + 9);
      uVar8 = uVar7;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = param_1 + 7;
        }
        uVar5 = (longlong)(int)param_1[9] - 1U & uVar8;
        uVar8 = uVar8 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar5 * 4) = 0xffffffff;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    iVar9 = (int)param_2[5];
    puStack_30 = (uint *)(param_2 + 2);
    local_68 = 0;
    uStack_64 = 1;
    local_58._4_4_ = 0;
    uStack_50 = 0;
    if (iVar9 != 0) {
      puVar11 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar11 = puStack_30;
      }
      uVar3 = *puVar11;
      uVar8 = uVar7;
      while (uVar3 == 0) {
        iVar4 = (int)uVar8;
        uStack_50 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_50;
        local_68 = iVar4 + 1;
        uVar8 = (ulonglong)local_68;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_14136491b;
        uVar3 = puVar11[(longlong)iVar4 + 1];
      }
      uStack_64 = -uVar3 & uVar3;
      iVar4 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_58._4_4_ = (uStack_50 - iVar4) + 0x1f;
      if (iVar9 < local_58._4_4_) {
LAB_14136491b:
        local_58._4_4_ = iVar9;
      }
    }
    uStack_38 = local_68;
    uStack_34 = uStack_64;
    uStack_28 = 0xffffffff;
    iStack_24 = local_58._4_4_;
    uStack_20 = uStack_50;
    uStack_1c = iStack_4c;
    uStack_60 = local_68;
    uStack_5c = uStack_64;
    local_48 = uStack_50;
    uStack_44 = iStack_4c;
    uStack_50 = 0xffffffff;
    iStack_4c = local_58._4_4_;
    bVar1 = local_58._4_4_ < iVar9;
    local_40 = param_2;
    local_58 = puStack_30;
    if (bVar1) {
      do {
        FUN_141363060(param_1,local_res8,*param_2 + (longlong)iStack_4c * 0x18,0);
        uStack_50 = uStack_50 & ~uStack_5c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
      } while (iStack_4c < (int)local_58[6]);
    }
  }
  return param_1;
}



// FUNCTION 1413649c0 FUN_1413649c0 body=1250 status=ok
// SIG undefined FUN_1413649c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1413649c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  void *_Src;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  longlong *plStack_f0;
  undefined8 local_e8;
  longlong *plStack_e0;
  undefined8 local_d8;
  longlong *plStack_d0;
  undefined8 local_c8;
  longlong *plStack_c0;
  undefined8 local_b8;
  longlong *plStack_b0;
  undefined8 local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  longlong *plStack_88;
  undefined8 local_80;
  longlong *plStack_78;
  undefined8 local_70;
  longlong *plStack_68;
  undefined8 local_60;
  longlong *plStack_58;
  undefined8 local_50;
  longlong *plStack_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  FText::operator=(param_1 + 0x10,param_2 + 0x10);
  FText::operator=(param_1 + 0x28,param_2 + 0x28);
  FText::operator=(param_1 + 0x40,param_2 + 0x40);
  plVar1 = (longlong *)(param_1 + 0x58);
  if (plVar1 != (longlong *)(param_2 + 0x58)) {
    iVar9 = *(int *)(param_1 + 0x60);
    if (iVar9 != 0) {
      plVar10 = (longlong *)(*plVar1 + 8);
      do {
        plVar6 = (longlong *)*plVar10;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar6 + 1;
          lVar11 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar3 = (int *)((longlong)plVar6 + 0xc);
            iVar5 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
            }
          }
        }
        plVar10 = plVar10 + 3;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    iVar9 = *(int *)(param_2 + 0x60);
    lVar11 = *(longlong *)(param_2 + 0x58);
    *(int *)(param_1 + 0x60) = iVar9;
    if ((iVar9 == 0) && (*(int *)(param_1 + 100) == 0)) {
      *(undefined4 *)(param_1 + 100) = 0;
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(plVar1,iVar9);
      lVar8 = *plVar1;
      for (; iVar9 != 0; iVar9 = iVar9 + -1) {
        FText::FText(lVar8,lVar11);
        lVar8 = lVar8 + 0x18;
        lVar11 = lVar11 + 0x18;
      }
    }
  }
  FUN_1413647c0(param_1 + 0x68,param_2 + 0x68);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_2 + 0xbc);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  local_a8 = *(undefined8 *)(param_2 + 200);
  FString::FString(local_a0,param_2 + 0xd0);
  FSoftObjectPath::operator=(param_1 + 200,&local_a8);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  FUN_141337f90(param_1 + 0xe8,param_2 + 0xe8);
  plVar1 = *(longlong **)(param_2 + 0x108);
  puVar4 = (undefined8 *)(param_1 + 0x100);
  uVar7 = *(undefined8 *)(param_2 + 0x100);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar1 + 0xc) = *(int *)((longlong)plVar1 + 0xc) + 1;
    UNLOCK();
  }
  local_f8 = uVar7;
  plStack_f0 = plVar1;
  if (&local_f8 != puVar4) {
    local_f8 = *puVar4;
    plStack_f0 = *(longlong **)(param_1 + 0x108);
    *puVar4 = uVar7;
    *(longlong **)(param_1 + 0x108) = plVar1;
    local_90 = uVar7;
    plStack_88 = plVar1;
  }
  if (plStack_f0 != (longlong *)0x0) {
    LOCK();
    piVar3 = (int *)((longlong)plStack_f0 + 0xc);
    iVar9 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      (**(code **)(*plStack_f0 + 8))(plStack_f0,1);
    }
  }
  FUN_141337f90(param_1 + 0x110,param_2 + 0x110);
  FUN_141337f90(param_1 + 0x128,param_2 + 0x128);
  FUN_141337f90(param_1 + 0x140,param_2 + 0x140);
  plVar1 = *(longlong **)(param_2 + 0x160);
  puVar4 = (undefined8 *)(param_1 + 0x158);
  uVar7 = *(undefined8 *)(param_2 + 0x158);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar1 + 0xc) = *(int *)((longlong)plVar1 + 0xc) + 1;
    UNLOCK();
  }
  local_e8 = uVar7;
  plStack_e0 = plVar1;
  if (&local_e8 != puVar4) {
    local_e8 = *puVar4;
    plStack_e0 = *(longlong **)(param_1 + 0x160);
    *puVar4 = uVar7;
    *(longlong **)(param_1 + 0x160) = plVar1;
    local_80 = uVar7;
    plStack_78 = plVar1;
  }
  if (plStack_e0 != (longlong *)0x0) {
    LOCK();
    piVar3 = (int *)((longlong)plStack_e0 + 0xc);
    iVar9 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      (**(code **)(*plStack_e0 + 8))(plStack_e0,1);
    }
  }
  FUN_141337f90(param_1 + 0x168,param_2 + 0x168);
  plVar1 = *(longlong **)(param_2 + 0x188);
  puVar4 = (undefined8 *)(param_1 + 0x180);
  uVar7 = *(undefined8 *)(param_2 + 0x180);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar1 + 0xc) = *(int *)((longlong)plVar1 + 0xc) + 1;
    UNLOCK();
  }
  local_d8 = uVar7;
  plStack_d0 = plVar1;
  if (&local_d8 != puVar4) {
    local_d8 = *puVar4;
    plStack_d0 = *(longlong **)(param_1 + 0x188);
    *puVar4 = uVar7;
    *(longlong **)(param_1 + 0x188) = plVar1;
    local_70 = uVar7;
    plStack_68 = plVar1;
  }
  if (plStack_d0 != (longlong *)0x0) {
    LOCK();
    piVar3 = (int *)((longlong)plStack_d0 + 0xc);
    iVar9 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      (**(code **)(*plStack_d0 + 8))(plStack_d0,1);
    }
  }
  FUN_141337f90(param_1 + 400,param_2 + 400);
  plVar1 = *(longlong **)(param_2 + 0x1b0);
  puVar4 = (undefined8 *)(param_1 + 0x1a8);
  uVar7 = *(undefined8 *)(param_2 + 0x1a8);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar1 + 0xc) = *(int *)((longlong)plVar1 + 0xc) + 1;
    UNLOCK();
  }
  local_c8 = uVar7;
  plStack_c0 = plVar1;
  if (&local_c8 != puVar4) {
    local_c8 = *puVar4;
    plStack_c0 = *(longlong **)(param_1 + 0x1b0);
    *puVar4 = uVar7;
    *(longlong **)(param_1 + 0x1b0) = plVar1;
    local_60 = uVar7;
    plStack_58 = plVar1;
  }
  if (plStack_c0 != (longlong *)0x0) {
    LOCK();
    piVar3 = (int *)((longlong)plStack_c0 + 0xc);
    iVar9 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      (**(code **)(*plStack_c0 + 8))(plStack_c0,1);
    }
  }
  uVar7 = *(undefined8 *)(param_2 + 0x1b8);
  puVar4 = (undefined8 *)(param_1 + 0x1b8);
  plVar1 = *(longlong **)(param_2 + 0x1c0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar1 + 0xc) = *(int *)((longlong)plVar1 + 0xc) + 1;
    UNLOCK();
  }
  local_b8 = uVar7;
  plStack_b0 = plVar1;
  if (&local_b8 != puVar4) {
    local_b8 = *puVar4;
    plStack_b0 = *(longlong **)(param_1 + 0x1c0);
    *puVar4 = uVar7;
    *(longlong **)(param_1 + 0x1c0) = plVar1;
    local_50 = uVar7;
    plStack_48 = plVar1;
  }
  if (plStack_b0 != (longlong *)0x0) {
    LOCK();
    piVar3 = (int *)((longlong)plStack_b0 + 0xc);
    iVar9 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      (**(code **)(*plStack_b0 + 8))(plStack_b0,1);
    }
  }
  FUN_141337f90(param_1 + 0x1c8,param_2 + 0x1c8);
  FUN_141337f90(param_1 + 0x1e0,param_2 + 0x1e0);
  puVar4 = (undefined8 *)(param_1 + 0x200);
  *(undefined8 *)(param_1 + 0x1f8) = *(undefined8 *)(param_2 + 0x1f8);
  if (puVar4 != (undefined8 *)(param_2 + 0x200)) {
    iVar9 = *(int *)(param_2 + 0x208);
    _Src = *(void **)(param_2 + 0x200);
    *(int *)(param_1 + 0x208) = iVar9;
    if ((iVar9 == 0) && (*(int *)(param_1 + 0x20c) == 0)) {
      *(undefined4 *)(param_1 + 0x20c) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar4,iVar9);
      _guard_xfg_dispatch_icall_nop((void *)*puVar4,_Src,(longlong)iVar9 << 3);
    }
  }
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_2 + 0x210);
  return param_1;
}



// FUNCTION 141364eb0 FUN_141364eb0 body=712 status=ok
// SIG undefined FUN_141364eb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141364eb0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  void *pvVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  FText::operator=(param_1 + 0x10,param_2 + 0x10);
  FText::operator=(param_1 + 0x28,param_2 + 0x28);
  FText::operator=(param_1 + 0x40,param_2 + 0x40);
  puVar10 = (undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  plVar4 = *(longlong **)(param_2 + 0x68);
  uVar5 = *(undefined8 *)(param_2 + 0x60);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
  }
  local_58 = uVar5;
  plStack_50 = plVar4;
  if (&local_58 != puVar10) {
    local_58 = *puVar10;
    plStack_50 = *(longlong **)(param_1 + 0x68);
    *puVar10 = uVar5;
    *(longlong **)(param_1 + 0x68) = plVar4;
    local_48 = uVar5;
    plStack_40 = plVar4;
  }
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_50 + 0xc);
    iVar11 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar11 == 1) {
      (**(code **)(*plStack_50 + 8))(plStack_50,1);
    }
  }
  FUN_141337f90(param_1 + 0x70,param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  FUN_141337f90(param_1 + 0x90,param_2 + 0x90);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  FUN_141337f90(param_1 + 0xc0,param_2 + 0xc0);
  FUN_141337f90(param_1 + 0xd8,param_2 + 0xd8);
  puVar10 = (undefined8 *)(param_1 + 0xf0);
  if (puVar10 != (undefined8 *)(param_2 + 0xf0)) {
    iVar11 = *(int *)(param_2 + 0xf8);
    pvVar6 = *(void **)(param_2 + 0xf0);
    *(int *)(param_1 + 0xf8) = iVar11;
    if ((iVar11 == 0) && (*(int *)(param_1 + 0xfc) == 0)) {
      *(undefined4 *)(param_1 + 0xfc) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar10,iVar11);
      _guard_xfg_dispatch_icall_nop((void *)*puVar10,pvVar6,(longlong)iVar11 << 3);
    }
  }
  puVar10 = (undefined8 *)(param_1 + 0x100);
  if (puVar10 != (undefined8 *)(param_2 + 0x100)) {
    iVar11 = *(int *)(param_2 + 0x108);
    pvVar6 = *(void **)(param_2 + 0x100);
    *(int *)(param_1 + 0x108) = iVar11;
    if ((iVar11 == 0) && (*(int *)(param_1 + 0x10c) == 0)) {
      *(undefined4 *)(param_1 + 0x10c) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar10,iVar11);
      _guard_xfg_dispatch_icall_nop((void *)*puVar10,pvVar6,(longlong)iVar11 << 3);
    }
  }
  plVar4 = (longlong *)(param_1 + 0x110);
  if (plVar4 != (longlong *)(param_2 + 0x110)) {
    iVar11 = *(int *)(param_1 + 0x118);
    if (iVar11 != 0) {
      plVar12 = (longlong *)(*plVar4 + 8);
      do {
        plVar7 = (longlong *)*plVar12;
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar7 + 1;
          lVar8 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
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
        plVar12 = plVar12 + 2;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    iVar11 = *(int *)(param_2 + 0x118);
    puVar10 = *(undefined8 **)(param_2 + 0x110);
    *(int *)(param_1 + 0x118) = iVar11;
    if ((iVar11 == 0) && (*(int *)(param_1 + 0x11c) == 0)) {
      *(undefined4 *)(param_1 + 0x11c) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar4,iVar11);
      puVar9 = (undefined8 *)*plVar4;
      for (; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar9 = *puVar10;
        lVar8 = puVar10[1];
        puVar9[1] = lVar8;
        if (lVar8 != 0) {
          LOCK();
          *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
          UNLOCK();
        }
        puVar9 = puVar9 + 2;
        puVar10 = puVar10 + 2;
      }
    }
  }
  return param_1;
}



// FUNCTION 141365180 FUN_141365180 body=587 status=ok
// SIG undefined FUN_141365180(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141365180(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  void *_Src;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  FUN_14132b110(param_1 + 0x10,param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
  FText::operator=(param_1 + 0xd8,param_2 + 0xd8);
  FText::operator=(param_1 + 0xf0,param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_2 + 0x108);
  FUN_141337f90(param_1 + 0x110,param_2 + 0x110);
  FUN_141337f90(param_1 + 0x128,param_2 + 0x128);
  FUN_141337f90(param_1 + 0x140,param_2 + 0x140);
  puVar2 = (undefined8 *)(param_1 + 0x168);
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_2 + 0x158);
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_2 + 0x160);
  plVar4 = *(longlong **)(param_2 + 0x170);
  uVar5 = *(undefined8 *)(param_2 + 0x168);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
  }
  local_68 = uVar5;
  plStack_60 = plVar4;
  if (&local_68 != puVar2) {
    local_68 = *puVar2;
    plStack_60 = *(longlong **)(param_1 + 0x170);
    *puVar2 = uVar5;
    *(longlong **)(param_1 + 0x170) = plVar4;
    local_48 = uVar5;
    plStack_40 = plVar4;
  }
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_60 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*plStack_60 + 8))(plStack_60,1);
    }
  }
  uVar5 = *(undefined8 *)(param_2 + 0x178);
  puVar2 = (undefined8 *)(param_1 + 0x178);
  plVar4 = *(longlong **)(param_2 + 0x180);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
  }
  local_58 = uVar5;
  plStack_50 = plVar4;
  if (&local_58 != puVar2) {
    local_58 = *puVar2;
    plStack_50 = *(longlong **)(param_1 + 0x180);
    *puVar2 = uVar5;
    *(longlong **)(param_1 + 0x180) = plVar4;
    local_38 = uVar5;
    plStack_30 = plVar4;
  }
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_50 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*plStack_50 + 8))(plStack_50,1);
    }
  }
  puVar2 = (undefined8 *)(param_1 + 0x188);
  if (puVar2 != (undefined8 *)(param_2 + 0x188)) {
    iVar3 = *(int *)(param_2 + 400);
    _Src = *(void **)(param_2 + 0x188);
    *(int *)(param_1 + 400) = iVar3;
    if ((iVar3 == 0) && (*(int *)(param_1 + 0x194) == 0)) {
      *(undefined4 *)(param_1 + 0x194) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar2,iVar3);
      _guard_xfg_dispatch_icall_nop((void *)*puVar2,_Src,(longlong)iVar3 << 3);
    }
  }
  FUN_141337f90(param_1 + 0x198,param_2 + 0x198);
  return param_1;
}



// FUNCTION 1413653d0 FUN_1413653d0 body=656 status=ok
// SIG undefined FUN_1413653d0(void)

longlong FUN_1413653d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  
  FString::operator=();
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  FString::operator=(param_1 + 0x28,param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  FString::operator=(param_1 + 0x40,param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  FText::operator=(param_1 + 0x78,param_2 + 0x78);
  FText::operator=(param_1 + 0x90,param_2 + 0x90);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
  FString::operator=(param_1 + 0xb0,param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  FString::operator=(param_1 + 200,param_2 + 200);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
  *(undefined1 *)(param_1 + 0xe8) = *(undefined1 *)(param_2 + 0xe8);
  *(undefined1 *)(param_1 + 0xe9) = *(undefined1 *)(param_2 + 0xe9);
  *(undefined1 *)(param_1 + 0xea) = *(undefined1 *)(param_2 + 0xea);
  uVar5 = *(undefined8 *)(param_2 + 0xf4);
  *(undefined8 *)(param_1 + 0xec) = *(undefined8 *)(param_2 + 0xec);
  *(undefined8 *)(param_1 + 0xf4) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x104);
  *(undefined8 *)(param_1 + 0xfc) = *(undefined8 *)(param_2 + 0xfc);
  *(undefined8 *)(param_1 + 0x104) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x114);
  *(undefined8 *)(param_1 + 0x10c) = *(undefined8 *)(param_2 + 0x10c);
  *(undefined8 *)(param_1 + 0x114) = uVar5;
  *(undefined1 *)(param_1 + 0x11c) = *(undefined1 *)(param_2 + 0x11c);
  *(undefined1 *)(param_1 + 0x11d) = *(undefined1 *)(param_2 + 0x11d);
  *(undefined1 *)(param_1 + 0x11e) = *(undefined1 *)(param_2 + 0x11e);
  uVar5 = *(undefined8 *)(param_2 + 0x128);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x128) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x138);
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
  *(undefined8 *)(param_1 + 0x138) = uVar5;
  uVar2 = *(undefined4 *)(param_2 + 0x144);
  uVar3 = *(undefined4 *)(param_2 + 0x148);
  uVar4 = *(undefined4 *)(param_2 + 0x14c);
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x140);
  *(undefined4 *)(param_1 + 0x144) = uVar2;
  *(undefined4 *)(param_1 + 0x148) = uVar3;
  *(undefined4 *)(param_1 + 0x14c) = uVar4;
  FUN_14099b910(param_1 + 0x150,param_2 + 0x150);
  plVar1 = (longlong *)(param_1 + 0x198);
  if (plVar1 != (longlong *)(param_2 + 0x198)) {
    iVar7 = *(int *)(param_1 + 0x1a0);
    if (iVar7 != 0) {
      plVar6 = (longlong *)(*plVar1 + 0x18);
      do {
        if (plVar6[5] != 0) {
          FMemory::Free();
        }
        if (*plVar6 != 0) {
          FMemory::Free();
        }
        plVar6 = plVar6 + 10;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    FUN_140998750(plVar1,*(longlong *)(param_2 + 0x198),*(undefined4 *)(param_2 + 0x1a0),
                  *(undefined4 *)(param_1 + 0x1a4),0);
  }
  uVar5 = *(undefined8 *)(param_2 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_2 + 0x1a8);
  *(undefined8 *)(param_1 + 0x1b0) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x1c0);
  *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_2 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1c0) = uVar5;
  return param_1;
}



// FUNCTION 1413656f0 FUN_1413656f0 body=184 status=ok
// SIG undefined FUN_1413656f0(void)

longlong FUN_1413656f0(longlong param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x358);
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
  plVar3 = *(longlong **)(param_1 + 0x340);
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
  plVar3 = *(longlong **)(param_1 + 0x328);
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
    FMemory::operator_delete(param_1,0x360);
  }
  return param_1;
}



// FUNCTION 1413657b0 FUN_1413657b0 body=118 status=ok
// SIG undefined FUN_1413657b0(void)

longlong FUN_1413657b0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 141365830 FUN_141365830 body=196 status=ok
// SIG undefined FUN_141365830(void)

longlong FUN_141365830(longlong param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x340);
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
  plVar3 = *(longlong **)(param_1 + 0x328);
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
  plVar3 = *(longlong **)(param_1 + 0x310);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2f8);
  FUN_141320cb0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x350);
  }
  return param_1;
}



// FUNCTION 141365900 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
Audio::FEarlyReflections::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141364530();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3c0);
  }
  return param_1;
}



// FUNCTION 141365940 FUN_141365940 body=276 status=ok
// SIG undefined FUN_141365940(void)

longlong FUN_141365940(longlong param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x358);
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
  plVar3 = *(longlong **)(param_1 + 0x340);
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
  plVar3 = *(longlong **)(param_1 + 0x310);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2f8);
  FUN_141320cb0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x370);
  }
  return param_1;
}



// FUNCTION 141365a60 FUN_141365a60 body=73 status=ok
// SIG undefined FUN_141365a60(void)

longlong FUN_141365a60(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x3b8) != 0) {
    FMemory::Free();
  }
  FUN_141364530(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3e0);
  }
  return param_1;
}



// FUNCTION 141365ab0 FUN_141365ab0 body=270 status=ok
// SIG undefined FUN_141365ab0(void)

longlong FUN_141365ab0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0xba2) != '\0') {
    *(undefined1 *)(param_1 + 0xba2) = 0;
  }
  plVar4 = *(longlong **)(param_1 + 0xb80);
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
  if (*(char *)(param_1 + 0xb75) != '\0') {
    *(undefined1 *)(param_1 + 0xb75) = 0;
  }
  if (*(char *)(param_1 + 0xb72) != '\0') {
    *(undefined1 *)(param_1 + 0xb72) = 0;
  }
  FUN_140ed0430(param_1 + 0x9a8);
  if (*(longlong *)(param_1 + 0x958) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x948) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x938) != 0) {
    FMemory::Free();
  }
  TArray<FTTLHUDMissionCommandGoalItemParams,FDefaultAllocator>::
  ~TArray<FTTLHUDMissionCommandGoalItemParams,FDefaultAllocator>(param_1 + 0x918);
  FUN_141354a10(param_1 + 0x680);
  FUN_140e9c5f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xbc0);
  }
  return param_1;
}



// FUNCTION 141365bc0 FUN_141365bc0 body=141 status=ok
// SIG undefined FUN_141365bc0(void)

longlong FUN_141365bc0(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x1b8) != '\0') {
    *(undefined1 *)(param_1 + 0x1b8) = 0;
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FMemory::Free();
  }
  FUN_140ce1dc0(param_1 + 0xa0);
  plVar3 = *(longlong **)(param_1 + 0x30);
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
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1c0);
  }
  return param_1;
}



// FUNCTION 141365c50 FUN_141365c50 body=341 status=ok
// SIG undefined FUN_141365c50(void)

longlong FUN_141365c50(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  if (*(longlong *)(param_1 + 0x720) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x6f8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x6e0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x6c8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  iVar5 = *(int *)(param_1 + 0x6a8);
  plVar4 = *(longlong **)(param_1 + 0x6a0);
  if (iVar5 != 0) {
    do {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 3;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    plVar4 = *(longlong **)(param_1 + 0x6a0);
  }
  if (plVar4 != (longlong *)0x0) {
    FMemory::Free(plVar4);
  }
  if (*(longlong *)(param_1 + 0x680) != 0) {
    FMemory::Free();
  }
  FUN_140e9c5f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x780);
  }
  return param_1;
}



// FUNCTION 141365db0 FUN_141365db0 body=157 status=ok
// SIG undefined FUN_141365db0(void)

longlong FUN_141365db0(longlong param_1,ulonglong param_2)

{
  FUN_141140c00(param_1 + 0x158);
  FUN_141140c00(param_1 + 0x108);
  FUN_141140c00(param_1 + 0xb8);
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1f0);
  }
  return param_1;
}



// FUNCTION 141365e50 FUN_141365e50 body=67 status=ok
// SIG undefined FUN_141365e50(void)

longlong FUN_141365e50(longlong param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2f8);
  FUN_141320cb0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x330);
  }
  return param_1;
}



// FUNCTION 141365ea0 FUN_141365ea0 body=229 status=ok
// SIG undefined FUN_141365ea0(void)

longlong FUN_141365ea0(longlong param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x810);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x800);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x7f0);
  iVar3 = *(int *)(param_1 + 0x7c8);
  plVar2 = *(longlong **)(param_1 + 0x7c0);
  if (iVar3 != 0) {
    do {
      puVar1 = (undefined8 *)*plVar2;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      plVar2 = plVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    plVar2 = *(longlong **)(param_1 + 0x7c0);
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free(plVar2);
  }
  if (*(longlong *)(param_1 + 0x790) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x778) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x760) != 0) {
    FMemory::Free();
  }
  FUN_140e9c5f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x860);
  }
  return param_1;
}



// FUNCTION 141365f90 FUN_141365f90 body=85 status=ok
// SIG undefined FUN_141365f90(void)

longlong FUN_141365f90(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x318) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2f8);
  FUN_141320cb0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x330);
  }
  return param_1;
}



// FUNCTION 141365ff0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FFileIoStore::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1413643c0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,800);
  }
  return param_1;
}



// FUNCTION 141366030 FUN_141366030 body=124 status=ok
// SIG undefined FUN_141366030(void)

longlong FUN_141366030(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x338) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x328) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x318) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x308) != 0) {
    FMemory::Free();
  }
  FUN_141320cb0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x350);
  }
  return param_1;
}



// FUNCTION 1413660b0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FFileIoStore::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1413645c0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,800);
  }
  return param_1;
}



// FUNCTION 1413660f0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<enum_EGPlatformType,UMediaSource_*>,TDefaultMapHashableKeyFuncs<enum_EGPlatformType,UMediaSource_*,0>,FDefaultSetAllocator>
::ConditionalRehash(longlong param_1,uint param_2,char param_3)

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
      TSet<TTuple<unsigned_char,FName>,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>,FDefaultSetAllocator>
      ::Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1413661a0 Construct body=38 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FNiagaraSystemCompiledData>::Construct
               (undefined8 param_1,void *param_2)

{
  ::_guard_xfg_dispatch_icall_nop(param_2,0,0x218);
  FUN_14135b450(param_2);
  return;
}



// FUNCTION 1413661d0 FUN_1413661d0 body=38 status=ok
// SIG undefined FUN_1413661d0(void)

void FUN_1413661d0(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x90);
  FUN_14135b650(param_2);
  return;
}



// FUNCTION 141366200 FUN_141366200 body=38 status=ok
// SIG undefined FUN_141366200(void)

void FUN_141366200(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x120);
  FUN_14135b950(param_2);
  return;
}



// FUNCTION 141366270 FUN_141366270 body=52 status=ok
// SIG undefined FUN_141366270(void)

void FUN_141366270(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  uVar1 = FUN_1404b03b0();
  FText::FText(param_2,uVar1);
  *(undefined1 *)(param_2 + 3) = 0;
  return;
}



// FUNCTION 1413662b0 FUN_1413662b0 body=38 status=ok
// SIG undefined FUN_1413662b0(void)

void FUN_1413662b0(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x1b0);
  FUN_14135ba50(param_2);
  return;
}



// FUNCTION 1413662e0 Construct body=38 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FQueuedSpawn>::Construct(undefined8 param_1,void *param_2)

{
  ::_guard_xfg_dispatch_icall_nop(param_2,0,0x180);
  FUN_14135bb90(param_2);
  return;
}



// FUNCTION 141366310 FUN_141366310 body=94 status=ok
// SIG undefined FUN_141366310(void)

void FUN_141366310(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x80);
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined4 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined4 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined4 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined4 *)((longlong)param_2 + 0x50) = 0;
  *(undefined1 *)((longlong)param_2 + 0x54) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined4 *)((longlong)param_2 + 0x70) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0;
  *(undefined4 *)((longlong)param_2 + 0x7c) = 0;
  return;
}



// FUNCTION 141366380 Copy body=74 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FShooterMenuStyle>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_1413649c0(param_2 + param_3,param_3);
      param_3 = param_3 + 0x218;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1413663d0 FUN_1413663d0 body=486 status=ok
// SIG undefined FUN_1413663d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1413663d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong *plStack_80;
  longlong local_78;
  longlong *plStack_70;
  longlong local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong *plStack_50;
  longlong local_48;
  longlong *plStack_40;
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  uVar6 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  if (param_4 != 0) {
    plVar7 = (longlong *)(param_3 + 0x40);
    local_28 = uVar6;
    do {
      *(longlong *)(param_2 + 8) = plVar7[-7];
      FText::operator=(param_2 + 0x10,plVar7 + -6);
      plVar4 = (longlong *)plVar7[-2];
      plVar1 = (longlong *)(param_2 + 0x28);
      lVar5 = plVar7[-3];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
      }
      local_88 = lVar5;
      plStack_80 = plVar4;
      if (&local_88 != plVar1) {
        local_88 = *plVar1;
        plStack_80 = *(longlong **)(param_2 + 0x30);
        *plVar1 = lVar5;
        *(longlong **)(param_2 + 0x30) = plVar4;
        local_58 = lVar5;
        plStack_50 = plVar4;
      }
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plStack_80 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_80 + 8))(plStack_80,1);
        }
      }
      plVar4 = (longlong *)*plVar7;
      plVar1 = (longlong *)(param_2 + 0x38);
      lVar5 = plVar7[-1];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
      }
      local_78 = lVar5;
      plStack_70 = plVar4;
      if (&local_78 != plVar1) {
        local_78 = *plVar1;
        plStack_70 = *(longlong **)(param_2 + 0x40);
        *plVar1 = lVar5;
        *(longlong **)(param_2 + 0x40) = plVar4;
        local_48 = lVar5;
        plStack_40 = plVar4;
      }
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plStack_70 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_70 + 8))(plStack_70,1);
        }
      }
      plVar4 = (longlong *)plVar7[2];
      plVar1 = (longlong *)(param_2 + 0x48);
      lVar5 = plVar7[1];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
      }
      local_68 = lVar5;
      plStack_60 = plVar4;
      if (&local_68 != plVar1) {
        local_68 = *plVar1;
        plStack_60 = *(longlong **)(param_2 + 0x50);
        *plVar1 = lVar5;
        *(longlong **)(param_2 + 0x50) = plVar4;
        local_38 = lVar5;
        plStack_30 = plVar4;
      }
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plStack_60 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_60 + 8))(plStack_60,1);
        }
      }
      FUN_141337f90(param_2 + 0x58,plVar7 + 3);
      FUN_141337f90(param_2 + 0x70,plVar7 + 6);
      uVar6 = plVar7[9];
      plVar7 = plVar7 + 0x12;
      *(ulonglong *)(param_2 + 0x88) = uVar6;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x90;
    } while (param_4 != 0);
  }
  return CONCAT71((int7)(uVar6 >> 8),1);
}



// FUNCTION 1413665c0 FUN_1413665c0 body=74 status=ok
// SIG undefined FUN_1413665c0(void)

undefined1 FUN_1413665c0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_141364eb0(param_2 + param_3,param_3);
      param_3 = param_3 + 0x120;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141366610 Copy body=79 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FQuartzClockSettings>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    do {
      FText::operator=(param_2,param_3 + param_2);
      *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)(param_3 + 0x18 + param_2);
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141366660 Copy body=74 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FAnimMontageInstance>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_141365180(param_2 + param_3,param_3);
      param_3 = param_3 + 0x1b0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1413666b0 FUN_1413666b0 body=409 status=ok
// SIG undefined FUN_1413666b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1413666b0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  if (param_4 != 0) {
    puVar6 = (undefined8 *)(param_3 + 8);
    do {
      *(undefined8 *)(param_2 + 8) = *puVar6;
      FUN_14132b110(param_2 + 0x10,puVar6 + 1);
      *(undefined4 *)(param_2 + 0xd0) = *(undefined4 *)(puVar6 + 0x19);
      FText::operator=(param_2 + 0xd8,puVar6 + 0x1a);
      FText::operator=(param_2 + 0xf0,puVar6 + 0x1d);
      *(undefined8 *)(param_2 + 0x108) = puVar6[0x20];
      *(undefined8 *)(param_2 + 0x110) = puVar6[0x21];
      *(undefined8 *)(param_2 + 0x118) = puVar6[0x22];
      *(undefined8 *)(param_2 + 0x120) = puVar6[0x23];
      FUN_141337f90(param_2 + 0x128,puVar6 + 0x24);
      plVar4 = (longlong *)puVar6[0x28];
      puVar2 = (undefined8 *)(param_2 + 0x140);
      uVar5 = puVar6[0x27];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
      }
      local_48 = uVar5;
      plStack_40 = plVar4;
      if (&local_48 != puVar2) {
        local_48 = *puVar2;
        plStack_40 = *(longlong **)(param_2 + 0x148);
        *puVar2 = uVar5;
        *(longlong **)(param_2 + 0x148) = plVar4;
        local_38 = uVar5;
        plStack_30 = plVar4;
      }
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plStack_40 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_40 + 8))(plStack_40,1);
        }
      }
      FUN_141337f90(param_2 + 0x150,puVar6 + 0x29);
      FUN_141337f90(param_2 + 0x168,puVar6 + 0x2c);
      puVar6 = puVar6 + 0x30;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x180;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141366850 FUN_141366850 body=154 status=ok
// SIG undefined FUN_141366850(void)

undefined8 FUN_141366850(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined4 *)(param_2 + 4);
    do {
      *(undefined1 *)(puVar1 + -1) = *(undefined1 *)(param_3 + -4 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)(param_3 + (longlong)puVar1);
      FUN_1411cb2d0(puVar1 + 1,param_3 + 4 + (longlong)puVar1);
      *(undefined8 *)(puVar1 + 0x15) = *(undefined8 *)(param_3 + 0x54 + (longlong)puVar1);
      *(undefined8 *)(puVar1 + 0x17) = *(undefined8 *)(param_3 + 0x5c + (longlong)puVar1);
      *(undefined8 *)(puVar1 + 0x19) = *(undefined8 *)(param_3 + 100 + (longlong)puVar1);
      puVar1[0x1b] = *(undefined4 *)(param_3 + 0x6c + (longlong)puVar1);
      puVar1[0x1c] = *(undefined4 *)(param_3 + 0x70 + (longlong)puVar1);
      *(undefined8 *)(puVar1 + 0x1d) = *(undefined8 *)(param_3 + 0x74 + (longlong)puVar1);
      puVar1 = puVar1 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1413668f0 Copy body=74 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FConstraintInstance>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_1413653d0(param_2 + param_3,param_3);
      param_3 = param_3 + 0x1c8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141366940 FUN_141366940 body=41 status=ok
// SIG undefined FUN_141366940(void)

void FUN_141366940(undefined8 param_1,longlong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 0x38);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 0x28);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 0x18);
  return;
}



// FUNCTION 141366970 FUN_141366970 body=42 status=ok
// SIG undefined FUN_141366970(void)

void FUN_141366970(undefined8 param_1,longlong *param_2)

{
  FUN_1410fc740(param_2 + 5);
  if (*param_2 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1413669a0 FUN_1413669a0 body=55 status=ok
// SIG undefined FUN_1413669a0(void)

void FUN_1413669a0(void)

{
  undefined8 uVar1;
  
  if (DAT_146883e80 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146883e80 = GetStaticEnum(FUN_141367510,uVar1,L"EBackButtonHint");
  }
  return;
}



// FUNCTION 1413669e0 FUN_1413669e0 body=55 status=ok
// SIG undefined FUN_1413669e0(void)

void FUN_1413669e0(void)

{
  undefined8 uVar1;
  
  if (DAT_146883e90 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146883e90 = GetStaticEnum(FUN_141367540,uVar1,L"ELeaguesMenuLayout");
  }
  return;
}



// FUNCTION 141366a20 FUN_141366a20 body=55 status=ok
// SIG undefined FUN_141366a20(void)

void FUN_141366a20(void)

{
  undefined8 uVar1;
  
  if (DAT_146883e88 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146883e88 = GetStaticEnum(FUN_141367570,uVar1,L"ETradingMenuState");
  }
  return;
}



// FUNCTION 141366a70 FUN_141366a70 body=46 status=ok
// SIG undefined FUN_141366a70(void)

int FUN_141366a70(longlong *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x2d8))();
  iVar2 = FUN_142eed990(param_1);
  return iVar2 + iVar1 + -1;
}



// FUNCTION 141366aa0 FUN_141366aa0 body=6 status=ok
// SIG undefined FUN_141366aa0(void)

undefined8 FUN_141366aa0(void)

{
  return 0x883cffc7;
}



// FUNCTION 141366ab0 FUN_141366ab0 body=6 status=ok
// SIG undefined FUN_141366ab0(void)

undefined8 FUN_141366ab0(void)

{
  return 0x368fc05d;
}



// FUNCTION 141366ac0 FUN_141366ac0 body=6 status=ok
// SIG undefined FUN_141366ac0(void)

undefined8 FUN_141366ac0(void)

{
  return 0xad5472d0;
}



// FUNCTION 141366ad0 FUN_141366ad0 body=6 status=ok
// SIG undefined FUN_141366ad0(void)

undefined8 FUN_141366ad0(void)

{
  return 0x97a83204;
}



// FUNCTION 141366ae0 FUN_141366ae0 body=6 status=ok
// SIG undefined FUN_141366ae0(void)

undefined8 FUN_141366ae0(void)

{
  return 0x45b819d3;
}



// FUNCTION 141366af0 FUN_141366af0 body=6 status=ok
// SIG undefined FUN_141366af0(void)

undefined8 FUN_141366af0(void)

{
  return 0xb667f132;
}



// FUNCTION 141366b00 FUN_141366b00 body=6 status=ok
// SIG undefined FUN_141366b00(void)

undefined8 FUN_141366b00(void)

{
  return 0x5bb98a21;
}



// FUNCTION 141366b10 FUN_141366b10 body=6 status=ok
// SIG undefined FUN_141366b10(void)

undefined8 FUN_141366b10(void)

{
  return 0x6e33f2fb;
}



// FUNCTION 141366b20 FUN_141366b20 body=6 status=ok
// SIG undefined FUN_141366b20(void)

undefined8 FUN_141366b20(void)

{
  return 0x1a323b47;
}



// FUNCTION 141366b30 FUN_141366b30 body=6 status=ok
// SIG undefined FUN_141366b30(void)

undefined8 FUN_141366b30(void)

{
  return 0x39459c4b;
}



// FUNCTION 141366b40 FUN_141366b40 body=6 status=ok
// SIG undefined FUN_141366b40(void)

undefined8 FUN_141366b40(void)

{
  return 0x51e9db42;
}



// FUNCTION 141366b60 Rehash body=521 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<unsigned_char,FName>,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  byte *pbVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  int local_30;
  uint uStack_2c;
  uint *puStack_28;
  uint local_20;
  int iStack_1c;
  int iStack_18;
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar10 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar10 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar10) {
      uVar11 = 0;
      uVar12 = (ulonglong)uVar10;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar11;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar11 = uVar11 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    iVar4 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar4 != 0) {
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = puStack_28;
      }
      uVar10 = *puVar13;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar10 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar5 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar5) goto LAB_141366c9f;
        uVar10 = puVar13[lVar6 + 1];
      }
      uStack_54 = -uVar10 & uVar10;
      iVar8 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_44 = (iStack_40 - iVar8) + 0x1f;
      if (iVar4 < iStack_44) {
LAB_141366c9f:
        iStack_44 = iVar4;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar4) {
      do {
        pbVar3 = (byte *)(*param_1 + (longlong)iStack_1c * 0x18);
        uVar10 = (int)*plVar2 - 1U & (uint)*pbVar3;
        *(uint *)(pbVar3 + 0x14) = uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(pbVar3 + 0x10) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (ulonglong)uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (ulonglong)uVar10) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 141366d70 thunk_FUN_142f22b30 body=5 status=ok
// SIG undefined thunk_FUN_142f22b30(void)

void thunk_FUN_142f22b30(void)

{
  FUN_142f22b30();
  return;
}



// FUNCTION 141366d90 FUN_141366d90 body=34 status=ok
// SIG undefined FUN_141366d90(void)

void FUN_141366d90(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141362bb0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnCellChanged_1448c4280,1);
  return;
}



// FUNCTION 141366dc0 StaticRegisterNativesALobbyBeaconPlayerState body=34 status=ok
// SIG undefined StaticRegisterNativesALobbyBeaconPlayerState(void)

void ALobbyBeaconPlayerState::StaticRegisterNativesALobbyBeaconPlayerState(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnCellChanged_1448c49a8,2);
  return;
}



// FUNCTION 141366df0 FUN_141366df0 body=34 status=ok
// SIG undefined FUN_141366df0(void)

void FUN_141366df0(void)

{
  undefined8 uVar1;
  
  uVar1 = ABuilder::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_extOnCountdownFinished_1448c53c0,7);
  return;
}



// FUNCTION 141366e20 FUN_141366e20 body=34 status=ok
// SIG undefined FUN_141366e20(void)

void FUN_141366e20(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141362a50();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnSlotClicked_1448c5430,3);
  return;
}



// FUNCTION 141366e50 FUN_141366e50 body=34 status=ok
// SIG undefined FUN_141366e50(void)

void FUN_141366e50(void)

{
  undefined8 uVar1;
  
  uVar1 = UCheckBox::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_extFinishedHide_1448c5b48,3);
  return;
}



// FUNCTION 141366e80 FUN_141366e80 body=34 status=ok
// SIG undefined FUN_141366e80(void)

void FUN_141366e80(void)

{
  undefined8 uVar1;
  
  uVar1 = AMobActorKuroko::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnChallengeCellFocused_1448c7380,5);
  return;
}



// FUNCTION 141366eb0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEvent::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146884360 == 0) {
    uVar1 = FUN_141366aa0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146884360 =
         GetStaticStruct(FUN_1413675a0,uVar2,L"GFxItemInspectManufacturerChallengeInfo",8,uVar1);
  }
  return;
}



// FUNCTION 141366f10 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FBuildableObjectData::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146884330 == 0) {
    uVar1 = FUN_141366ab0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146884330 =
         GetStaticStruct(FUN_1413675d0,uVar2,L"GFxItemInspectionElementalPage",0x218,uVar1);
  }
  return;
}



// FUNCTION 141366f70 FUN_141366f70 body=82 status=ok
// SIG undefined FUN_141366f70(void)

void FUN_141366f70(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146884370 == 0) {
    uVar1 = FUN_141366ac0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146884370 = GetStaticStruct(FUN_141367600,uVar2,L"GFxItemInspectionInspectPage",0x90,uVar1);
  }
  return;
}



// FUNCTION 141366fd0 FUN_141366fd0 body=82 status=ok
// SIG undefined FUN_141366fd0(void)

void FUN_141366fd0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146884350 == 0) {
    uVar1 = FUN_141366ad0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146884350 =
         GetStaticStruct(FUN_141367630,uVar2,L"GFxItemInspectionManufacturerPage",0x120,uVar1);
  }
  return;
}



// FUNCTION 141367030 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146884380 == 0) {
    uVar1 = FUN_141366ae0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146884380 = GetStaticStruct(FUN_141362dd0,uVar2,L"GFxItemInspectionPageBase",0x10,uVar1);
  }
  return;
}



// FUNCTION 141367090 FUN_141367090 body=82 status=ok
// SIG undefined FUN_141367090(void)

void FUN_141367090(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146884340 == 0) {
    uVar1 = FUN_141366af0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146884340 =
         GetStaticStruct(FUN_141367660,uVar2,L"GFxItemInspectionPageElementalStarRatings",0xc,uVar1)
    ;
  }
  return;
}



// FUNCTION 1413670f0 FUN_1413670f0 body=82 status=ok
// SIG undefined FUN_1413670f0(void)

void FUN_1413670f0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146884320 == 0) {
    uVar1 = FUN_141366b00();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146884320 = GetStaticStruct(FUN_141367690,uVar2,L"GFxItemInspectionPartStat",0x20,uVar1);
  }
  return;
}



// FUNCTION 141367150 FUN_141367150 body=82 status=ok
// SIG undefined FUN_141367150(void)

void FUN_141367150(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146884310 == 0) {
    uVar1 = FUN_141366b10();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146884310 = GetStaticStruct(FUN_1413676c0,uVar2,L"GFxItemInspectionPartsPage",0x1b0,uVar1);
  }
  return;
}



// FUNCTION 1413671b0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FSplineInstanceData::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146884300 == 0) {
    uVar1 = FUN_141366b20();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146884300 = GetStaticStruct(FUN_1413676f0,uVar2,L"GFxItemInspectionSkinsPage",0x180,uVar1);
  }
  return;
}



// FUNCTION 141367210 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneCameraCutSectionTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468844d8 == 0) {
    uVar1 = FUN_141366b30();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468844d8 = GetStaticStruct(FUN_141367720,uVar2,L"GFxLeaguesMenuStandInState",0x80,uVar1);
  }
  return;
}



// FUNCTION 141367270 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FRuntimeCurveLinearColor::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146884560 == 0) {
    uVar1 = FUN_141366b40();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146884560 = GetStaticStruct(FUN_141367750,uVar2,L"LoadGameMenuEntry",0x1c8,uVar1);
  }
  return;
}



// FUNCTION 1413672d0 FUN_1413672d0 body=47 status=ok
// SIG undefined FUN_1413672d0(void)

longlong FUN_1413672d0(void)

{
  if (DAT_146884390 == 0) {
    FUN_141786440(&DAT_146884390,&PTR_GetPrivateStaticClass_1448b8d30);
  }
  return DAT_146884390;
}



// FUNCTION 141367300 FUN_141367300 body=47 status=ok
// SIG undefined FUN_141367300(void)

longlong FUN_141367300(void)

{
  if (DAT_1468842f0 == 0) {
    FUN_141786440(&DAT_1468842f0,&PTR_GetPrivateStaticClass_1448c0690);
  }
  return DAT_1468842f0;
}



// FUNCTION 141367330 FUN_141367330 body=47 status=ok
// SIG undefined FUN_141367330(void)

longlong FUN_141367330(void)

{
  if (DAT_1468843a0 == 0) {
    FUN_141786440(&DAT_1468843a0,&PTR_FUN_1448b8f10);
  }
  return DAT_1468843a0;
}



// FUNCTION 141367360 FUN_141367360 body=47 status=ok
// SIG undefined FUN_141367360(void)

longlong FUN_141367360(void)

{
  if (DAT_1468843f8 == 0) {
    FUN_141786440(&DAT_1468843f8,&PTR_FUN_1448bc250);
  }
  return DAT_1468843f8;
}



// FUNCTION 141367390 FUN_141367390 body=47 status=ok
// SIG undefined FUN_141367390(void)

longlong FUN_141367390(void)

{
  if (DAT_1468843c8 == 0) {
    FUN_141786440(&DAT_1468843c8,&PTR_GetPrivateStaticClass_1448b91a0);
  }
  return DAT_1468843c8;
}



// FUNCTION 1413673c0 FUN_1413673c0 body=47 status=ok
// SIG undefined FUN_1413673c0(void)

longlong FUN_1413673c0(void)

{
  if (DAT_146884460 == 0) {
    FUN_141786440(&DAT_146884460,&PTR_FUN_1448bb8e0);
  }
  return DAT_146884460;
}



// FUNCTION 1413673f0 FUN_1413673f0 body=47 status=ok
// SIG undefined FUN_1413673f0(void)

longlong FUN_1413673f0(void)

{
  if (DAT_1468844c0 == 0) {
    FUN_141786440(&DAT_1468844c0,&PTR_FUN_1448b86f0);
  }
  return DAT_1468844c0;
}



// FUNCTION 141367420 FUN_141367420 body=47 status=ok
// SIG undefined FUN_141367420(void)

longlong FUN_141367420(void)

{
  if (DAT_1468844e8 == 0) {
    FUN_141786440(&DAT_1468844e8,&PTR_GetPrivateStaticClass_1448bd3b0);
  }
  return DAT_1468844e8;
}



// FUNCTION 141367450 FUN_141367450 body=47 status=ok
// SIG undefined FUN_141367450(void)

longlong FUN_141367450(void)

{
  if (DAT_146884570 == 0) {
    FUN_141786440(&DAT_146884570,&PTR_GetPrivateStaticClass_1448c1360);
  }
  return DAT_146884570;
}



// FUNCTION 141367480 FUN_141367480 body=47 status=ok
// SIG undefined FUN_141367480(void)

longlong FUN_141367480(void)

{
  if (DAT_146884508 == 0) {
    FUN_141786440(&DAT_146884508,&PTR_FUN_1448bdab0);
  }
  return DAT_146884508;
}



// FUNCTION 1413674b0 FUN_1413674b0 body=47 status=ok
// SIG undefined FUN_1413674b0(void)

longlong FUN_1413674b0(void)

{
  if (DAT_146884518 == 0) {
    FUN_141786440(&DAT_146884518,&PTR_FUN_1448bdd70);
  }
  return DAT_146884518;
}



// FUNCTION 1413674e0 FUN_1413674e0 body=47 status=ok
// SIG undefined FUN_1413674e0(void)

longlong FUN_1413674e0(void)

{
  if (DAT_1468844f8 == 0) {
    FUN_141786440(&DAT_1468844f8,&PTR_GetPrivateStaticClass_1448bd780);
  }
  return DAT_1468844f8;
}



// FUNCTION 141367510 FUN_141367510 body=47 status=ok
// SIG undefined FUN_141367510(void)

longlong FUN_141367510(void)

{
  if (DAT_146884408 == 0) {
    FUN_1417866a0(&DAT_146884408,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463273c0);
  }
  return DAT_146884408;
}



// FUNCTION 141367540 FUN_141367540 body=47 status=ok
// SIG undefined FUN_141367540(void)

longlong FUN_141367540(void)

{
  if (DAT_1468844d0 == 0) {
    FUN_1417866a0(&DAT_1468844d0,&PTR_Z_Construct_UPackage__Script_MechWarrior_146327460);
  }
  return DAT_1468844d0;
}



// FUNCTION 141367570 FUN_141367570 body=47 status=ok
// SIG undefined FUN_141367570(void)

longlong FUN_141367570(void)

{
  if (DAT_146884410 == 0) {
    FUN_1417866a0(&DAT_146884410,&PTR_Z_Construct_UPackage__Script_MechWarrior_146327410);
  }
  return DAT_146884410;
}



// FUNCTION 1413675a0 FUN_1413675a0 body=47 status=ok
// SIG undefined FUN_1413675a0(void)

longlong FUN_1413675a0(void)

{
  if (DAT_146884368 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146884368,&PTR_Z_Construct_UPackage__Script_MechWarrior_146323d00);
  }
  return DAT_146884368;
}



// FUNCTION 1413675d0 FUN_1413675d0 body=47 status=ok
// SIG undefined FUN_1413675d0(void)

longlong FUN_1413675d0(void)

{
  if (DAT_146884338 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146884338,&PTR_Z_Construct_UPackage__Script_MechWarrior_146323840);
  }
  return DAT_146884338;
}



// FUNCTION 141367600 FUN_141367600 body=47 status=ok
// SIG undefined FUN_141367600(void)

longlong FUN_141367600(void)

{
  if (DAT_146884378 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146884378,&PTR_Z_Construct_UPackage__Script_MechWarrior_146323dd0);
  }
  return DAT_146884378;
}



// FUNCTION 141367630 FUN_141367630 body=47 status=ok
// SIG undefined FUN_141367630(void)

longlong FUN_141367630(void)

{
  if (DAT_146884358 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146884358,&PTR_Z_Construct_UPackage__Script_MechWarrior_146323c60);
  }
  return DAT_146884358;
}



// FUNCTION 141367660 FUN_141367660 body=47 status=ok
// SIG undefined FUN_141367660(void)

longlong FUN_141367660(void)

{
  if (DAT_146884348 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146884348,&PTR_Z_Construct_UPackage__Script_MechWarrior_146323930);
  }
  return DAT_146884348;
}



// FUNCTION 141367690 FUN_141367690 body=47 status=ok
// SIG undefined FUN_141367690(void)

longlong FUN_141367690(void)

{
  if (DAT_146884328 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146884328,&PTR_Z_Construct_UPackage__Script_MechWarrior_146323460);
  }
  return DAT_146884328;
}



// FUNCTION 1413676c0 FUN_1413676c0 body=47 status=ok
// SIG undefined FUN_1413676c0(void)

longlong FUN_1413676c0(void)

{
  if (DAT_146884318 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146884318,&PTR_Z_Construct_UPackage__Script_MechWarrior_146323350);
  }
  return DAT_146884318;
}



// FUNCTION 1413676f0 FUN_1413676f0 body=47 status=ok
// SIG undefined FUN_1413676f0(void)

longlong FUN_1413676f0(void)

{
  if (DAT_146884308 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146884308,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463230b0);
  }
  return DAT_146884308;
}



// FUNCTION 141367720 FUN_141367720 body=47 status=ok
// SIG undefined FUN_141367720(void)

longlong FUN_141367720(void)

{
  if (DAT_1468844e0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468844e0,&PTR_Z_Construct_UPackage__Script_MechWarrior_146325eb0);
  }
  return DAT_1468844e0;
}



// FUNCTION 141367750 FUN_141367750 body=47 status=ok
// SIG undefined FUN_141367750(void)

longlong FUN_141367750(void)

{
  if (DAT_146884568 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146884568,&PTR_Z_Construct_UPackage__Script_MechWarrior_146327300);
  }
  return DAT_146884568;
}



// FUNCTION 141367780 FUN_141367780 body=446 status=ok
// SIG undefined FUN_141367780(void)

void FUN_141367780(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 local_res10;
  undefined1 local_158 [8];
  undefined4 local_150;
  undefined1 local_14c;
  undefined1 local_148 [8];
  undefined8 local_140;
  longlong *plStack_138;
  undefined1 local_130;
  undefined1 local_128 [272];
  
  FUN_140ed0240(local_128);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_128);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_128);
  }
  local_res10 = 0;
  puVar6 = local_128;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_158,&DAT_143f3eda8,1);
  local_14c = 0;
  local_150 = 0xffffffff;
  FName::FName(local_148,&DAT_143f3eda8,1);
  local_130 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_140 = 0;
  plStack_138 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_158);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_158);
  }
  puVar7 = local_158;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar7 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f70ad0(param_1,puVar6,local_res10,puVar7);
  plVar5 = plStack_138;
  if (plStack_138 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_138 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_138)(plStack_138);
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
  FUN_140e9c360(local_128);
  return;
}



// FUNCTION 141367940 FUN_141367940 body=253 status=ok
// SIG undefined FUN_141367940(void)

void FUN_141367940(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined8 local_res10;
  undefined1 local_118 [272];
  
  FUN_140ed0240(local_118);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_118);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_118);
  }
  local_res10 = 0;
  puVar1 = local_118;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f71360(param_1,puVar1,local_res10);
  FUN_140e9c360(local_118);
  return;
}



// FUNCTION 141367a40 FUN_141367a40 body=157 status=ok
// SIG undefined FUN_141367a40(void)

void FUN_141367a40(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  undefined1 local_a;
  
  local_10 = 0xffffffff;
  local_18 = 0;
  local_c = 0;
  local_a = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  puVar1 = &local_18;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f714e0(param_1,puVar1);
  return;
}



// FUNCTION 141367ae0 FUN_141367ae0 body=157 status=ok
// SIG undefined FUN_141367ae0(void)

void FUN_141367ae0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  undefined1 local_a;
  
  local_10 = 0xffffffff;
  local_18 = 0;
  local_c = 0;
  local_a = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  puVar1 = &local_18;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f71610(param_1,puVar1);
  return;
}



// FUNCTION 141367b80 FUN_141367b80 body=334 status=ok
// SIG undefined FUN_141367b80(void)

void FUN_141367b80(undefined8 param_1,longlong param_2)

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
  FUN_140f71c80(param_1,local_res10,puVar6);
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



// FUNCTION 141367cd0 FUN_141367cd0 body=334 status=ok
// SIG undefined FUN_141367cd0(void)

void FUN_141367cd0(undefined8 param_1,longlong param_2)

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
  thunk_FUN_140f92880(param_1,local_res10,puVar6);
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



// FUNCTION 141367e20 FUN_141367e20 body=334 status=ok
// SIG undefined FUN_141367e20(void)

void FUN_141367e20(undefined8 param_1,longlong param_2)

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
  FUN_140f71d30(param_1,local_res10,puVar6);
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



// FUNCTION 141367f70 FUN_141367f70 body=334 status=ok
// SIG undefined FUN_141367f70(void)

void FUN_141367f70(undefined8 param_1,longlong param_2)

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
  FUN_140f71f30(param_1,local_res10,puVar6);
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



// FUNCTION 1413680c0 FUN_1413680c0 body=334 status=ok
// SIG undefined FUN_1413680c0(void)

void FUN_1413680c0(undefined8 param_1,longlong param_2)

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
  FUN_140f734c0(param_1,local_res10,puVar6);
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



// FUNCTION 141368210 FUN_141368210 body=334 status=ok
// SIG undefined FUN_141368210(void)

void FUN_141368210(undefined8 param_1,longlong param_2)

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
  FUN_141114ef0(param_1,local_res10,puVar6);
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



// FUNCTION 141368380 FUN_141368380 body=334 status=ok
// SIG undefined FUN_141368380(void)

void FUN_141368380(undefined8 param_1,longlong param_2)

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
  thunk_FUN_140f92cf0(param_1,local_res10,puVar6);
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



// FUNCTION 1413684d0 FUN_1413684d0 body=123 status=ok
// SIG undefined FUN_1413684d0(void)

void FUN_1413684d0(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [6];
  
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
  thunk_FUN_141136f80(param_1,local_res10[0]);
  return;
}



// FUNCTION 141368550 FUN_141368550 body=334 status=ok
// SIG undefined FUN_141368550(void)

void FUN_141368550(undefined8 param_1,longlong param_2)

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
  FUN_140f79730(param_1,local_res10,puVar6);
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



// FUNCTION 1413686a0 FUN_1413686a0 body=334 status=ok
// SIG undefined FUN_1413686a0(void)

void FUN_1413686a0(undefined8 param_1,longlong param_2)

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
  FUN_140f797b0(param_1,local_res10,puVar6);
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



// FUNCTION 1413687f0 FUN_1413687f0 body=334 status=ok
// SIG undefined FUN_1413687f0(void)

void FUN_1413687f0(undefined8 param_1,longlong param_2)

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
  FUN_140f798e0(param_1,local_res10,puVar6);
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



// FUNCTION 141368980 FUN_141368980 body=334 status=ok
// SIG undefined FUN_141368980(void)

void FUN_141368980(undefined8 param_1,longlong param_2)

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
  FUN_140f7e350(param_1,local_res10,puVar6);
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



// FUNCTION 141368b20 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ALobbyBeaconPlayerState::GetPrivateStaticClass(void)

{
  if (DAT_146884ae0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxLobbyWidget",&DAT_146884ae0,FUN_14136e9c0,0x3f0,0x10000008
                  ,0,L"Engine",&LAB_14136ac10,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141326ad0,&LAB_140447700,0);
  }
  return DAT_146884ae0;
}



// FUNCTION 141368bf0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UReplicationGraphNode_GridSpatialization2D::GetPrivateStaticClass(void)

{
  if (DAT_146884ba8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxLobbyWidgetSettingsPanel",&DAT_146884ba8,FUN_140447710,
                  0x210,0x10000008,0,L"Engine",FUN_14136aeb0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141326ad0,&LAB_140447700,0);
  }
  return DAT_146884ba8;
}



// FUNCTION 141368cf0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass(void)

{
  if (DAT_146884bb8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxLobbyWidgetSettingWidget",&DAT_146884bb8,FUN_140447710,400
                  ,0x10000008,0,L"Engine",FUN_14136ada0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141326ad0,&LAB_140447700,0);
  }
  return DAT_146884bb8;
}



// FUNCTION 141368db0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass(void)

{
  if (DAT_146884bc8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxPrivacySettingWidget",&DAT_146884bc8,FUN_140447710,400,
                  0x10000008,0,L"Engine",FUN_14136b410,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146884bc8;
}



// FUNCTION 141368e60 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass(void)

{
  if (DAT_146884bd8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxLootModeSettingWidget",&DAT_146884bd8,FUN_140447710,400,
                  0x10000008,0,L"Engine",FUN_14136afa0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146884bd8;
}



// FUNCTION 141368f20 FUN_141368f20 body=47 status=ok
// SIG undefined FUN_141368f20(void)

longlong FUN_141368f20(void)

{
  if (DAT_146884bb0 == 0) {
    FUN_141786440(&DAT_146884bb0,&PTR_GetPrivateStaticClass_1448c9ba0);
  }
  return DAT_146884bb0;
}



// FUNCTION 141368f90 FUN_141368f90 body=151 status=ok
// SIG undefined FUN_141368f90(void)

longlong FUN_141368f90(void)

{
  if (DAT_146884be8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxLobbyWidgetText",&DAT_146884be8,FUN_140447710,0x2c8,
                  0x10000004,0,L"GbxUI",&LAB_14136af80,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146884be8;
}



// FUNCTION 141369040 FUN_141369040 body=162 status=ok
// SIG undefined FUN_141369040(void)

longlong FUN_141369040(void)

{
  if (DAT_146884af0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxLobbyWidgetSettingsButton",&DAT_146884af0,FUN_140447710,
                  0x2e0,0x10000008,0,L"Engine",FUN_14136adf0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142f18d50,&LAB_140447700,0);
  }
  return DAT_146884af0;
}



// FUNCTION 1413690f0 FUN_1413690f0 body=47 status=ok
// SIG undefined FUN_1413690f0(void)

longlong FUN_1413690f0(void)

{
  if (DAT_146884ad8 == 0) {
    FUN_141786440(&DAT_146884ad8,&PTR_GetPrivateStaticClass_1448cf810);
  }
  return DAT_146884ad8;
}



// FUNCTION 141369120 FUN_141369120 body=47 status=ok
// SIG undefined FUN_141369120(void)

longlong FUN_141369120(void)

{
  if (DAT_146884a60 == 0) {
    FUN_141786a30(&DAT_146884a60,&PTR_FUN_146328150);
  }
  return DAT_146884a60;
}



// FUNCTION 141369150 FUN_141369150 body=47 status=ok
// SIG undefined FUN_141369150(void)

longlong FUN_141369150(void)

{
  if (DAT_146884a68 == 0) {
    FUN_141786a30(&DAT_146884a68,&PTR_FUN_146328210);
  }
  return DAT_146884a68;
}



// FUNCTION 141369180 FUN_141369180 body=47 status=ok
// SIG undefined FUN_141369180(void)

longlong FUN_141369180(void)

{
  if (DAT_146884a70 == 0) {
    FUN_141786a30(&DAT_146884a70,&PTR_FUN_1463282d0);
  }
  return DAT_146884a70;
}



// FUNCTION 1413691b0 FUN_1413691b0 body=47 status=ok
// SIG undefined FUN_1413691b0(void)

longlong FUN_1413691b0(void)

{
  if (DAT_146884a78 == 0) {
    FUN_141786a30(&DAT_146884a78,&PTR_FUN_146328390);
  }
  return DAT_146884a78;
}



// FUNCTION 1413691e0 FUN_1413691e0 body=47 status=ok
// SIG undefined FUN_1413691e0(void)

longlong FUN_1413691e0(void)

{
  if (DAT_146884a80 == 0) {
    FUN_141786a30(&DAT_146884a80,&PTR_FUN_146328410);
  }
  return DAT_146884a80;
}



// FUNCTION 141369210 FUN_141369210 body=47 status=ok
// SIG undefined FUN_141369210(void)

longlong FUN_141369210(void)

{
  if (DAT_146884a88 == 0) {
    FUN_141786a30(&DAT_146884a88,&PTR_FUN_1463284d0);
  }
  return DAT_146884a88;
}



// FUNCTION 141369240 FUN_141369240 body=47 status=ok
// SIG undefined FUN_141369240(void)

longlong FUN_141369240(void)

{
  if (DAT_146884a90 == 0) {
    FUN_141786a30(&DAT_146884a90,&PTR_FUN_146328550);
  }
  return DAT_146884a90;
}



// FUNCTION 141369280 FUN_141369280 body=47 status=ok
// SIG undefined FUN_141369280(void)

longlong FUN_141369280(void)

{
  if (DAT_146884a98 == 0) {
    FUN_141786a30(&DAT_146884a98,&PTR_FUN_1463285d0);
  }
  return DAT_146884a98;
}



// FUNCTION 1413692b0 FUN_1413692b0 body=47 status=ok
// SIG undefined FUN_1413692b0(void)

longlong FUN_1413692b0(void)

{
  if (DAT_146884aa0 == 0) {
    FUN_141786a30(&DAT_146884aa0,&PTR_FUN_146328690);
  }
  return DAT_146884aa0;
}



// FUNCTION 1413692e0 FUN_1413692e0 body=47 status=ok
// SIG undefined FUN_1413692e0(void)

longlong FUN_1413692e0(void)

{
  if (DAT_146884aa8 == 0) {
    FUN_141786a30(&DAT_146884aa8,&PTR_FUN_146328790);
  }
  return DAT_146884aa8;
}



// FUNCTION 141369310 FUN_141369310 body=47 status=ok
// SIG undefined FUN_141369310(void)

longlong FUN_141369310(void)

{
  if (DAT_146884ab0 == 0) {
    FUN_141786a30(&DAT_146884ab0,&PTR_FUN_146328850);
  }
  return DAT_146884ab0;
}



// FUNCTION 141369340 FUN_141369340 body=47 status=ok
// SIG undefined FUN_141369340(void)

longlong FUN_141369340(void)

{
  if (DAT_146884ab8 == 0) {
    FUN_141786a30(&DAT_146884ab8,&PTR_FUN_146328910);
  }
  return DAT_146884ab8;
}



// FUNCTION 141369370 FUN_141369370 body=47 status=ok
// SIG undefined FUN_141369370(void)

longlong FUN_141369370(void)

{
  if (DAT_146884ac0 == 0) {
    FUN_141786a30(&DAT_146884ac0,&PTR_FUN_1463289d0);
  }
  return DAT_146884ac0;
}



// FUNCTION 1413693a0 FUN_1413693a0 body=47 status=ok
// SIG undefined FUN_1413693a0(void)

longlong FUN_1413693a0(void)

{
  if (DAT_146884ac8 == 0) {
    FUN_141786a30(&DAT_146884ac8,&PTR_FUN_146328a50);
  }
  return DAT_146884ac8;
}



// FUNCTION 1413693d0 FUN_1413693d0 body=47 status=ok
// SIG undefined FUN_1413693d0(void)

longlong FUN_1413693d0(void)

{
  if (DAT_146884ad0 == 0) {
    FUN_141786a30(&DAT_146884ad0,&PTR_FUN_146328b10);
  }
  return DAT_146884ad0;
}



// FUNCTION 141369400 FUN_141369400 body=53 status=ok
// SIG undefined FUN_141369400(void)

void FUN_141369400(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_1448d7410;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141369440 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGMeshParameterCue::GetPrivateStaticClass(void)

{
  if (DAT_146884c60 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxMainAndPauseBaseMenu",&DAT_146884c60,FUN_14136ea50,0x9d0,
                  0x10000000,0,L"Engine",&LAB_14136b000,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1412d9d00,&LAB_140447700,0);
  }
  return DAT_146884c60;
}



// FUNCTION 1413694f0 FUN_1413694f0 body=53 status=ok
// SIG undefined FUN_1413694f0(void)

void FUN_1413694f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_1448d7528;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141369530 FUN_141369530 body=53 status=ok
// SIG undefined FUN_141369530(void)

void FUN_141369530(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_1448d7640;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141369570 FUN_141369570 body=162 status=ok
// SIG undefined FUN_141369570(void)

longlong FUN_141369570(void)

{
  if (DAT_146884a28 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxLoadGameMenu",&DAT_146884a28,FUN_14136e990,0x7f0,
                  0x10000004,0,L"Game",&LAB_14136abf0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1412d9d00,&LAB_140447700,0);
  }
  return DAT_146884a28;
}



// FUNCTION 141369640 FUN_141369640 body=162 status=ok
// SIG undefined FUN_141369640(void)

longlong FUN_141369640(void)

{
  if (DAT_146884b00 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxLobbyWidgetMatchmakingWidget",&DAT_146884b00,FUN_140447710
                  ,0x1a0,0x10000008,0,L"Engine",FUN_14136ac20,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141326ad0,&LAB_140447700,0);
  }
  return DAT_146884b00;
}



// FUNCTION 1413696f0 FUN_1413696f0 body=47 status=ok
// SIG undefined FUN_1413696f0(void)

longlong FUN_1413696f0(void)

{
  if (DAT_146884c58 == 0) {
    FUN_141786440(&DAT_146884c58,&PTR_GetPrivateStaticClass_1448d2060);
  }
  return DAT_146884c58;
}



// FUNCTION 141369720 FUN_141369720 body=47 status=ok
// SIG undefined FUN_141369720(void)

longlong FUN_141369720(void)

{
  if (DAT_146884c08 == 0) {
    FUN_141786a30(&DAT_146884c08,&PTR_FUN_14632a6a0);
  }
  return DAT_146884c08;
}



// FUNCTION 141369750 FUN_141369750 body=47 status=ok
// SIG undefined FUN_141369750(void)

longlong FUN_141369750(void)

{
  if (DAT_146884c10 == 0) {
    FUN_141786a30(&DAT_146884c10,&PTR_FUN_14632a760);
  }
  return DAT_146884c10;
}



// FUNCTION 141369780 FUN_141369780 body=47 status=ok
// SIG undefined FUN_141369780(void)

longlong FUN_141369780(void)

{
  if (DAT_146884c18 == 0) {
    FUN_141786a30(&DAT_146884c18,&PTR_FUN_14632a820);
  }
  return DAT_146884c18;
}



// FUNCTION 1413697b0 FUN_1413697b0 body=47 status=ok
// SIG undefined FUN_1413697b0(void)

longlong FUN_1413697b0(void)

{
  if (DAT_146884c20 == 0) {
    FUN_141786a30(&DAT_146884c20,&PTR_FUN_14632a8e0);
  }
  return DAT_146884c20;
}



// FUNCTION 1413697e0 FUN_1413697e0 body=47 status=ok
// SIG undefined FUN_1413697e0(void)

longlong FUN_1413697e0(void)

{
  if (DAT_146884c28 == 0) {
    FUN_141786a30(&DAT_146884c28,&PTR_FUN_14632a9a0);
  }
  return DAT_146884c28;
}



// FUNCTION 141369810 FUN_141369810 body=47 status=ok
// SIG undefined FUN_141369810(void)

longlong FUN_141369810(void)

{
  if (DAT_146884c30 == 0) {
    FUN_141786a30(&DAT_146884c30,&PTR_FUN_14632aa60);
  }
  return DAT_146884c30;
}



// FUNCTION 141369840 FUN_141369840 body=47 status=ok
// SIG undefined FUN_141369840(void)

longlong FUN_141369840(void)

{
  if (DAT_146884c38 == 0) {
    FUN_141786a30(&DAT_146884c38,&PTR_FUN_14632ab20);
  }
  return DAT_146884c38;
}



// FUNCTION 141369870 FUN_141369870 body=47 status=ok
// SIG undefined FUN_141369870(void)

longlong FUN_141369870(void)

{
  if (DAT_146884c40 == 0) {
    FUN_141786a30(&DAT_146884c40,&PTR_FUN_14632abe0);
  }
  return DAT_146884c40;
}



// FUNCTION 1413698a0 FUN_1413698a0 body=47 status=ok
// SIG undefined FUN_1413698a0(void)

longlong FUN_1413698a0(void)

{
  if (DAT_146884c48 == 0) {
    FUN_141786a30(&DAT_146884c48,&PTR_FUN_14632aca0);
  }
  return DAT_146884c48;
}



// FUNCTION 1413698d0 FUN_1413698d0 body=47 status=ok
// SIG undefined FUN_1413698d0(void)

longlong FUN_1413698d0(void)

{
  if (DAT_146884c50 == 0) {
    FUN_141786a30(&DAT_146884c50,&PTR_FUN_14632ad60);
  }
  return DAT_146884c50;
}



// FUNCTION 141369910 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UXGameInstance::GetPrivateStaticClass(void)

{
  if (DAT_146884b10 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxLobbyWidgetPlayerItem",&DAT_146884b10,FUN_140447710,0x330,
                  0x10000008,0,L"Engine",FUN_14136ac70,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  URemnantGameInstance::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146884b10;
}



// FUNCTION 1413699d0 FUN_1413699d0 body=162 status=ok
// SIG undefined FUN_1413699d0(void)

longlong FUN_1413699d0(void)

{
  if (DAT_146884b38 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxLobbyWidgetPlayerList",&DAT_146884b38,FUN_14136e9f0,0x370,
                  0x10000008,0,L"Engine",FUN_14136ad00,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UGameInstanceGameParameters::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146884b38;
}


