// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140336a00 `dynamic_initializer_for_'GFPSChartExcludeIdleTime'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'GFPSChartExcludeIdleTime''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GFPSChartExcludeIdleTime__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aefbb8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"t.FPSChart.ExcludeIdleTime",0,
                  L"Should we exclude idle time (i.e. one which we spent sleeping) when doing a FPS chart?\n default: 0"
                  ,0);
  _DAT_146aefbb0 = &PTR_FUN_143f3ecf8;
  DAT_146aefbc0 = (**(code **)(*DAT_146aefbb8 + 0x38))(DAT_146aefbb8);
  atexit(FUN_143ea8dd0);
  return;
}



// FUNCTION 140336a70 `dynamic_initializer_for_'GFPSChartInterestingFramerates'' body=181 status=ok
// SIG undefined `dynamic_initializer_for_'GFPSChartInterestingFramerates''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GFPSChartInterestingFramerates__(void)

{
  longlong local_18 [3];
  
  local_18[0] = 0;
  local_18[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"30,60,120",0x14);
  if (DAT_1468b1f88 == (undefined8 *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aefc10 =
       (longlong *)
       (**(code **)*DAT_1468b1f88)
                 (DAT_1468b1f88,L"t.FPSChart.InterestingFramerates",local_18,
                  L"Comma separated list of interesting frame rates\n default: 30,60,120",0);
  _DAT_146aefc08 = &PTR_FUN_143f3ecf8;
  DAT_146aefc18 = (**(code **)(*DAT_146aefc10 + 0x48))(DAT_146aefc10);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  atexit(FUN_143ea8e20);
  return;
}



// FUNCTION 140336b30 `dynamic_initializer_for_'GFPSChartOpenFolderOnDump'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'GFPSChartOpenFolderOnDump''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GFPSChartOpenFolderOnDump__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aefbd0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"t.FPSChart.OpenFolderOnDump",1,
                  L"Should we explore to the folder that contains the .log / etc... when a dump is finished?  This can be disabled for automated testing\n default: 1"
                  ,0);
  _DAT_146aefbc8 = &PTR_FUN_143f3ecf8;
  _DAT_146aefbd8 = (**(code **)(*DAT_146aefbd0 + 0x38))(DAT_146aefbd0);
  atexit(FUN_143ea8e70);
  return;
}



// FUNCTION 140336bb0 `dynamic_initializer_for_'GMaximumFrameTimeToConsiderForHitchesAndBinningCVar'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'GMaximumFrameTimeToConsiderForHitchesAndBinningCVar''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GMaximumFrameTimeToConsiderForHitchesAndBinningCVar__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aefc00 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"t.FPSChart.MaxFrameDeltaSecsBeforeDiscarding",&DAT_146531bb8,
                  L"The maximum length a frame can be (in seconds) to be considered for FPS chart binning (default 1.0s; no maximum length if <= 0.0)"
                  ,0);
  _DAT_146aefbf8 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ea8ec0);
  return;
}



// FUNCTION 140336c20 `dynamic_initializer_for_'GRoundChartingFPSBeforeBinning'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'GRoundChartingFPSBeforeBinning''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GRoundChartingFPSBeforeBinning__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aefb10 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"t.FPSChart.RoundFPSBeforeBinning",0,
                  L"Should we round raw FPS values before thresholding them into bins when doing a FPS chart?\n default: 0"
                  ,0);
  _DAT_146aefb08 = &PTR_FUN_143f3ecf8;
  DAT_146aefb18 = (**(code **)(*DAT_146aefb10 + 0x38))(DAT_146aefb10);
  atexit(FUN_143ea8f10);
  return;
}



// FUNCTION 140336ca0 `dynamic_initializer_for_'GTestOverlapSpeed'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'GTestOverlapSpeed''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GTestOverlapSpeed__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aefc48 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"Engine.MinNumOverlapsToUseTMap",&DAT_146531bb0,
                  L"Min number of overlaps required before using a TMap for deduplication",0);
  _DAT_146aefc40 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ea8f80);
  return;
}



// FUNCTION 140336e20 FUN_140336e20 body=51 status=ok
// SIG undefined FUN_140336e20(void)

void FUN_140336e20(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146aefff8);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_146aefff8,4000);
  atexit((_func_5014 *)&LAB_143ea9030);
  return;
}



// FUNCTION 140336e60 FUN_140336e60 body=59 status=ok
// SIG undefined FUN_140336e60(void)

void FUN_140336e60(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146531c68,0);
  FGenericPlatformString::Memcpy(DAT_146531c68,L"_GEN_VARIABLE",0x1c);
  atexit((_func_5014 *)&LAB_143ea9040);
  return;
}



// FUNCTION 140336ea0 FUN_140336ea0 body=151 status=ok
// SIG undefined FUN_140336ea0(void)

void FUN_140336ea0(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146af0230) {
    _Init_thread_header(&DAT_146af0230);
    if (DAT_146af0230 == -1) {
      FName::FName(&DAT_146af0228,"DefaultComponentQueryParams",1);
      _Init_thread_footer(&DAT_146af0230);
    }
  }
  FUN_1422ffb20(&DAT_146aeff30,DAT_146af0228,local_res8,0,0);
  atexit(FUN_143ea9060);
  return;
}



// FUNCTION 140336f40 FUN_140336f40 body=151 status=ok
// SIG undefined FUN_140336f40(void)

void FUN_140336f40(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146af0220) {
    _Init_thread_header(&DAT_146af0220);
    if (DAT_146af0220 == -1) {
      FName::FName(&DAT_146af0218,"DefaultQueryParam",1);
      _Init_thread_footer(&DAT_146af0220);
    }
  }
  FUN_1422ffb20(&DAT_146aefe90,DAT_146af0218,local_res8,1,0);
  atexit(FUN_143ea9090);
  return;
}



// FUNCTION 140337000 FUN_140337000 body=39 status=ok
// SIG undefined FUN_140337000(void)

void FUN_140337000(void)

{
  FUN_1426d3dd0(&DAT_146aefe68);
  FUN_1426ea8d0(&DAT_146aefe68,2);
  return;
}



// FUNCTION 140337050 FUN_140337050 body=355 status=ok
// SIG undefined FUN_140337050(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140337050(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  int local_10;
  
  local_18 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_10 = 3;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&DAT_143f3ed00;
    plVar1[1] = (longlong)&DAT_146aeffc8;
    plVar1[2] = (longlong)FUN_141591020;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aeffd0 =
       (**(code **)(*DAT_1468b1f88 + 0x80))
                 (DAT_1468b1f88,L"TaskGraph.TaskPriorities.AsyncTraceTask",
                  L"Task and thread priority for async traces.",&local_18,0);
  _DAT_146aeffc8 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_14033714f;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_14033714f:
  DAT_146aeffd8 = 0;
  _DAT_146aeffe0 = 0x28;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146aeffd8,0);
  FGenericPlatformString::Memcpy(DAT_146aeffd8,L"TaskGraph.TaskPriorities.AsyncTraceTask",0x50);
  DAT_146aeffe8 = 0x1000;
  _DAT_146aeffec = 0x200;
  atexit(FUN_143ea90e0);
  return;
}



// FUNCTION 1403371c0 `dynamic_initializer_for_'CVarFixReplayOverSampling'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFixReplayOverSampling''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CharacterMovementCVars::_dynamic_initializer_for__CVarFixReplayOverSampling__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af0130 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"p.FixReplayOverSampling",&DAT_146531c30,
                  L"If 1, remove invalid replay samples that can occur due to oversampling (sampling at higher rate than physics is being ticked)"
                  ,0);
  _DAT_146af0128 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ea9140);
  return;
}



// FUNCTION 140337230 `dynamic_initializer_for_'CVarNetEnableListenServerSmoothing'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarNetEnableListenServerSmoothing''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CharacterMovementCVars::_dynamic_initializer_for__CVarNetEnableListenServerSmoothing__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af00e0 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"p.NetEnableListenServerSmoothing",&DAT_146531c1c,
                  L"Whether to enable mesh smoothing on listen servers for the local view of remote clients.\n0: Disable, 1: Enable"
                  ,0);
  _DAT_146af00d8 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ea9190);
  return;
}



// FUNCTION 1403372a0 `dynamic_initializer_for_'CVarNetEnableMoveCombining'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarNetEnableMoveCombining''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CharacterMovementCVars::_dynamic_initializer_for__CVarNetEnableMoveCombining__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af0110 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"p.NetEnableMoveCombining",&DAT_146531c28,
                  L"Whether to enable move combining on the client to reduce bandwidth by combining similar moves.\n0: Disable, 1: Enable"
                  ,0);
  _DAT_146af0108 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ea91e0);
  return;
}



// FUNCTION 140337310 `dynamic_initializer_for_'CVarNetEnableSkipProxyPredictionOnNetUpdate'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarNetEnableSkipProxyPredictionOnNetUpdate''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CharacterMovementCVars::_dynamic_initializer_for__CVarNetEnableSkipProxyPredictionOnNetUpdate__
               (void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af00f0 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"p.NetEnableSkipProxyPredictionOnNetUpdate",&DAT_146531c20,
                  L"Whether to allow proxies to skip prediction on frames with a network position update, if bNetworkSkipProxyPredictionOnNetUpdate is also true on the movement component.\n0: Disable, 1: Enable"
                  ,0);
  _DAT_146af00e8 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ea9230);
  return;
}



// FUNCTION 140337380 `dynamic_initializer_for_'CVarReplayUseInterpolation'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarReplayUseInterpolation''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CharacterMovementCVars::_dynamic_initializer_for__CVarReplayUseInterpolation__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af0120 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"p.ReplayUseInterpolation",&DAT_146531c2c,&DAT_14503f644,0);
  _DAT_146af0118 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ea9280);
  return;
}



// FUNCTION 1403373f0 `dynamic_initializer_for_'CVarRunAsyncTraceOnWorkerThread'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarRunAsyncTraceOnWorkerThread''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void AsyncTraceCVars::_dynamic_initializer_for__CVarRunAsyncTraceOnWorkerThread__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aeffc0 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"RunAsyncTraceOnWorkerThread",&DAT_146531c10,
                  L"Whether to use worker thread for async trace functionality. This works if FApp::ShouldUseThreadingForPerformance is true. Otherwise it will always use game thread. \n0: Use game thread, 1: User worker thread"
                  ,0);
  _DAT_146aeffb8 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ea92d0);
  return;
}



// FUNCTION 140337460 `dynamic_initializer_for_'CVarStuckWarningPeriod'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarStuckWarningPeriod''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CharacterMovementCVars::_dynamic_initializer_for__CVarStuckWarningPeriod__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af0100 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"p.CharacterStuckWarningPeriod",&DAT_146531c24,
                  L"How often (in seconds) we are allowed to log a message about being stuck in geometry.\n<0: Disable, >=0: Enable and log this often, in seconds."
                  ,0);
  _DAT_146af00f8 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ea9320);
  return;
}



// FUNCTION 140337500 FUN_140337500 body=51 status=ok
// SIG undefined FUN_140337500(void)

void FUN_140337500(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146aeff08);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_146aeff08,4000);
  atexit((_func_5014 *)&LAB_143ea93c0);
  return;
}



// FUNCTION 1403375c0 `dynamic_initializer_for_'GTickComponentLatentActionsWithTheComponentCVar'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'GTickComponentLatentActionsWithTheComponentCVar''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GTickComponentLatentActionsWithTheComponentCVar__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af0048 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"t.TickComponentLatentActionsWithTheComponent",&DAT_146531c14,
                  L"Should we tick latent actions fired for a component at the same time as the component?\n 0: Tick component latent actions later on in the frame (behavior prior to 4.16, provided for games relying on the old behavior but will be removed in the future)\n 1: Tick component latent actions at the same time as the component (default)"
                  ,0);
  _DAT_146af0040 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ea93d0);
  return;
}



// FUNCTION 1403376b0 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146531cf0,0);
  FGenericPlatformString::Memcpy(DAT_146531cf0,L"NumServerMoveCorrections",0x32);
  atexit((_func_5014 *)&LAB_143ea9420);
  return;
}



// FUNCTION 1403376f0 `dynamic_initializer_for_'PerfCounter_NumServerMoves'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoves''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoves__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146531ce0,0);
  FGenericPlatformString::Memcpy(DAT_146531ce0,L"NumServerMoves",0x1e);
  atexit((_func_5014 *)&LAB_143ea9440);
  return;
}



// FUNCTION 140337820 `dynamic_initializer_for_'_GCsvCategory_CharacterMovement'' body=132 status=ok
// SIG undefined `dynamic_initializer_for_'_GCsvCategory_CharacterMovement''(void)

void _dynamic_initializer_for___GCsvCategory_CharacterMovement__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeTo(&DAT_146af00c8,0x12);
  DAT_146af00d0 = DAT_146af00d0 + 0x12;
  if (DAT_146af00d4 < DAT_146af00d0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146af00c8);
  }
  builtin_wcsncpy(DAT_146af00c8,L"CharacterMovement",0x12);
  DAT_146af00c0 = FCsvProfiler::RegisterCategory(&DAT_146af00c8,1,0);
  atexit((_func_5014 *)&LAB_143ea9460);
  return;
}



// FUNCTION 1403378c0 FUN_1403378c0 body=269 status=ok
// SIG undefined FUN_1403378c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403378c0(void)

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
    *plVar1 = (longlong)&PTR_GetPoolName_1444d51e8;
    plVar1[1] = (longlong)FUN_142362e70;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_1444d5230;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af04b0 =
       (**(code **)(*DAT_1468b1f88 + 0x80))
                 (DAT_1468b1f88,L"Scene.ReattachLights",L"Reattaches all lights in the scene.",
                  &local_18,0);
  _DAT_146af04a8 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_1403379bc;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_1403379bc:
  atexit(FUN_143ea94a0);
  return;
}



// FUNCTION 1403379d0 `dynamic_initializer_for_'CVarAllowPointLightCubemapShadows'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarAllowPointLightCubemapShadows''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarAllowPointLightCubemapShadows__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af0560 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.AllowPointLightCubemapShadows",&DAT_146531d0c,
                  L"When 0, will prevent point light cube map shadows from being used and the light will be unshadowed."
                  ,0);
  _DAT_146af0558 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ea94f0);
  return;
}



// FUNCTION 140337a40 `dynamic_initializer_for_'CVarDecalFadeDurationScale'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDecalFadeDurationScale''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDecalFadeDurationScale__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af0428 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.Decal.FadeDurationScale",0x3f800000,
                  L"Scales the per decal fade durations. Lower values shortens lifetime and fade duration. Default is 1.0f."
                  ,0);
  _DAT_146af0420 = &PTR_FUN_143f3ecf8;
  DAT_146af0430 = (**(code **)(*DAT_146af0428 + 0x40))(DAT_146af0428);
  atexit(FUN_143ea9540);
  return;
}



// FUNCTION 140337ac0 `dynamic_initializer_for_'CVarMaxCSMRadiusToAllowPerObjectShadows'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarMaxCSMRadiusToAllowPerObjectShadows''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarMaxCSMRadiusToAllowPerObjectShadows__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af0440 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"r.MaxCSMRadiusToAllowPerObjectShadows",&DAT_146531d00,
                  L"Only stationary lights with a CSM radius smaller than this will create per object shadows for dynamic objects."
                  ,0);
  _DAT_146af0438 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ea9590);
  return;
}



// FUNCTION 140337b30 `dynamic_initializer_for_'CVarMoveIgnoreFirstBlockingOverlap'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarMoveIgnoreFirstBlockingOverlap''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MovementComponentCVars::_dynamic_initializer_for__CVarMoveIgnoreFirstBlockingOverlap__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af0530 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"p.MoveIgnoreFirstBlockingOverlap",&DAT_146af03d0,
                  L"Whether to ignore the first blocking overlap in SafeMoveUpdatedComponent (if moving out from object and starting in penetration).\nThe \'p.InitialOverlapTolerance\' setting determines the \'move out\' rules, but by default we always try to depenetrate first (not ignore the hit).\n0: Disable (do not ignore), 1: Enable (ignore)"
                  ,0);
  _DAT_146af0528 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ea95e0);
  return;
}



// FUNCTION 140337ba0 `dynamic_initializer_for_'CVarPenetrationOverlapCheckInflation'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarPenetrationOverlapCheckInflation''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MovementComponentCVars::_dynamic_initializer_for__CVarPenetrationOverlapCheckInflation__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af0550 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"p.PenetrationOverlapCheckInflation",&DAT_146531d08,
                  L"Inflation added to object when checking if a location is free of blocking collision.\nDistance added to inflation in penetration overlap check."
                  ,0);
  _DAT_146af0548 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ea9630);
  return;
}



// FUNCTION 140337c10 `dynamic_initializer_for_'CVarPenetrationPullbackDistance'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarPenetrationPullbackDistance''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MovementComponentCVars::_dynamic_initializer_for__CVarPenetrationPullbackDistance__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af0540 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"p.PenetrationPullbackDistance",&DAT_146531d04,
                  L"Pull out from penetration of an object by this extra distance.\nDistance added to penetration fix-ups."
                  ,0);
  _DAT_146af0538 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ea9680);
  return;
}



// FUNCTION 140337c80 FUN_140337c80 body=115 status=ok
// SIG undefined FUN_140337c80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140337c80(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af0480 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Shadow.OverrideFarCascades",0xffffffff,
                  L"-1: No override>= 0: Number of far shadow cascades to use",0);
  _DAT_146af0478 = &PTR_FUN_143f3ecf8;
  DAT_146af0488 = (**(code **)(*DAT_146af0480 + 0x38))(DAT_146af0480);
  atexit(FUN_143ea96d0);
  return;
}



// FUNCTION 140337d00 FUN_140337d00 body=115 status=ok
// SIG undefined FUN_140337d00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140337d00(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af0498 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Shadow.OverrideNearCascades",0xffffffff,
                  L"-1: No override>= 0: Number of near shadow cascades to use",0);
  _DAT_146af0490 = &PTR_FUN_143f3ecf8;
  DAT_146af04a0 = (**(code **)(*DAT_146af0498 + 0x38))(DAT_146af0498);
  atexit(FUN_143ea9720);
  return;
}



// FUNCTION 140337d80 FUN_140337d80 body=277 status=ok
// SIG undefined FUN_140337d80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140337d80(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [32];
  longlong *local_18;
  int local_10;
  
  local_18 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f048;
    plVar1[1] = (longlong)FUN_142361f20;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f090;
  }
  _DAT_146af04b8 = &PTR_FUN_143f3ece8;
  DAT_146af04c0 = &local_18;
  _DAT_146af04c8 = 0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  puVar3 = (undefined8 *)
           (**(code **)(*DAT_1468b1f88 + 0x40))(DAT_1468b1f88,local_res8,DAT_146af04c0);
  _DAT_146af04c8 = *puVar3;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_140337e84;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_140337e84:
  atexit((_func_5014 *)&LAB_143ea9770);
  return;
}



// FUNCTION 140337ea0 FUN_140337ea0 body=112 status=ok
// SIG undefined FUN_140337ea0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140337ea0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af0500 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.StaticLightsOnRenderThread",0,
                  L"True to allow static lights create scene proxies for the render thread. Default is 0."
                  ,0);
  _DAT_146af04f8 = &PTR_FUN_143f3ecf8;
  DAT_146af0508 = (**(code **)(*DAT_146af0500 + 0x38))(DAT_146af0500);
  atexit(FUN_143ea9780);
  return;
}



// FUNCTION 140337f10 `dynamic_initializer_for_'CVarUnbuiltNumWholeSceneDynamicShadowCascades'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarUnbuiltNumWholeSceneDynamicShadowCascades''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarUnbuiltNumWholeSceneDynamicShadowCascades__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af0468 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Shadow.UnbuiltNumWholeSceneDynamicShadowCascades",4,
                  L"DynamicShadowCascades to use when using CSM to preview unbuilt lighting from a directional light"
                  ,0x20);
  _DAT_146af0460 = &PTR_FUN_143f3ecf8;
  DAT_146af0470 = (**(code **)(*DAT_146af0468 + 0x38))(DAT_146af0468);
  atexit(FUN_143ea97d0);
  return;
}



// FUNCTION 140337f90 `dynamic_initializer_for_'CVarUnbuiltWholeSceneDynamicShadowRadius'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarUnbuiltWholeSceneDynamicShadowRadius''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarUnbuiltWholeSceneDynamicShadowRadius__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af0450 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.Shadow.UnbuiltWholeSceneDynamicShadowRadius",0x48435000,
                  L"WholeSceneDynamicShadowRadius to use when using CSM to preview unbuilt lighting from a directional light"
                  ,0);
  _DAT_146af0448 = &PTR_FUN_143f3ecf8;
  DAT_146af0458 = (**(code **)(*DAT_146af0450 + 0x40))(DAT_146af0450);
  atexit(FUN_143ea9820);
  return;
}



// FUNCTION 140338080 FUN_140338080 body=67 status=ok
// SIG undefined FUN_140338080(void)

void FUN_140338080(void)

{
  char cVar1;
  
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    (**(code **)(PTR_PTR_146531d20 + 0x28))();
    atexit(FUN_143ea9870);
    return;
  }
  FUN_141edf270(&PTR_PTR_146531d20);
  atexit(FUN_143ea9870);
  return;
}



// FUNCTION 140338140 FUN_140338140 body=269 status=ok
// SIG undefined FUN_140338140(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140338140(void)

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
    *plVar1 = (longlong)&PTR_GetPoolName_1444d51e8;
    plVar1[1] = (longlong)FUN_14237ad00;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_1444d5230;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af0518 =
       (**(code **)(*DAT_1468b1f88 + 0x80))
                 (DAT_1468b1f88,L"ToggleLight",
                  L"Toggles all lights whose name contains the specified string",&local_18,1);
  _DAT_146af0510 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_14033823c;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_14033823c:
  atexit(FUN_143ea98c0);
  return;
}



// FUNCTION 1403382a0 FUN_1403382a0 body=51 status=ok
// SIG undefined FUN_1403382a0(void)

void FUN_1403382a0(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146af0900);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_146af0900,4000);
  atexit((_func_5014 *)&LAB_143ea9960);
  return;
}



// FUNCTION 1403382e0 `dynamic_initializer_for_'CVarAllowCachedOverlaps'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarAllowCachedOverlaps''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarAllowCachedOverlaps__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af0800 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"p.AllowCachedOverlaps",&DAT_146531d68,
                  L"Primitive Component physics\n0: disable cached overlaps, 1: enable (default)",0)
  ;
  _DAT_146af07f8 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ea9970);
  return;
}



// FUNCTION 140338350 `dynamic_initializer_for_'CVarEnableFastOverlapCheck'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarEnableFastOverlapCheck''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarEnableFastOverlapCheck__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af0820 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"p.EnableFastOverlapCheck",&DAT_146531d6c,
                  L"Enable fast overlap check against sweep hits, avoiding UpdateOverlaps (for the swept component)."
                  ,0);
  _DAT_146af0818 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ea99c0);
  return;
}



// FUNCTION 1403383c0 `dynamic_initializer_for_'CVarInitialOverlapTolerance'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarInitialOverlapTolerance''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarInitialOverlapTolerance__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af0810 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"p.InitialOverlapTolerance",&DAT_146af07c4,
                  L"Tolerance for initial overlapping test in PrimitiveComponent movement.\nNormals within this tolerance are ignored if moving out of the object.\nDot product of movement direction and surface normal."
                  ,0);
  _DAT_146af0808 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ea9a10);
  return;
}



// FUNCTION 140338430 FUN_140338430 body=100 status=ok
// SIG undefined FUN_140338430(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140338430(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af0890 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"gbx.ParallelProjectileMovement",&DAT_146af07c8,
                  L"Whether to allow projectiles to use parallel movement.\n0: Disable, 1: Enable",0
                 );
  _DAT_146af0888 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ea9a60);
  return;
}



// FUNCTION 1403384a0 `dynamic_initializer_for_'CVarReflectionCaptureSize'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarReflectionCaptureSize''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarReflectionCaptureSize__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af08a0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.ReflectionCaptureResolution",0x80,
                  L"Set the resolution for all reflection capture cubemaps. Should be set via project\'s Render Settings. Must be power of 2. Defaults to 128.\n"
                  ,0);
  _DAT_146af0898 = &PTR_FUN_143f3ecf8;
  DAT_146af08a8 = (**(code **)(*DAT_146af08a0 + 0x38))(DAT_146af08a0);
  atexit(FUN_143ea9ab0);
  return;
}



// FUNCTION 140338520 FUN_140338520 body=115 status=ok
// SIG undefined FUN_140338520(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140338520(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af0950 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"SceneCapture.AllowBudgetedRendering",1,
                  L"0: Render all scene captures every frame\n1: Allow budgeted scene capture rendering\n"
                  ,0);
  _DAT_146af0948 = &PTR_FUN_143f3ecf8;
  DAT_146af0958 = (**(code **)(*DAT_146af0950 + 0x38))(DAT_146af0950);
  atexit(FUN_143ea9b00);
  return;
}



// FUNCTION 1403385a0 `dynamic_initializer_for_'CVarSkipUpdateOverlapsOptimEnabled'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarSkipUpdateOverlapsOptimEnabled''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarSkipUpdateOverlapsOptimEnabled__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af09f8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"p.SkipUpdateOverlapsOptimEnabled",&DAT_146531d70,
                  L"If enabled, we cache whether we need to call UpdateOverlaps on certain components"
                  ,0);
  _DAT_146af09f0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ea9b50);
  return;
}



// FUNCTION 140338610 FUN_140338610 body=115 status=ok
// SIG undefined FUN_140338610(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140338610(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af0878 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"gbx.UseTriggerCallback",1,
                  L"Whether or not to use the native overlap callback functionality in Unrealor to use the custom Gbx version that uses trigger shapes. \n"
                  ,0);
  _DAT_146af0870 = &PTR_FUN_143f3ecf8;
  DAT_146af0880 = (**(code **)(*DAT_146af0878 + 0x38))(DAT_146af0878);
  atexit(FUN_143ea9ba0);
  return;
}



// FUNCTION 140338730 FUN_140338730 body=81 status=ok
// SIG undefined FUN_140338730(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140338730(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = _DAT_146531d78;
  uStack_14 = uRam0000000146531d7c;
  uStack_10 = uRam0000000146531d80;
  uStack_c = uRam0000000146531d84;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxReflectionCaptureVer",1);
  FCustomVersionRegistration::FCustomVersionRegistration(&DAT_146af0928,&local_18,1,*puVar1);
  atexit((_func_5014 *)&LAB_143ea9c30);
  return;
}



// FUNCTION 1403387b0 `dynamic_initializer_for_'MobilityWarnText'' body=53 status=ok
// SIG undefined `dynamic_initializer_for_'MobilityWarnText''(void)

void PrimitiveComponentStatics::_dynamic_initializer_for__MobilityWarnText__(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_146af07e0,L"move",L"PrimitiveComponent",L"InvalidMove");
  atexit(FUN_143ea9c40);
  return;
}



// FUNCTION 1403387f0 `dynamic_initializer_for_'MobilityWarnText'' body=53 status=ok
// SIG undefined `dynamic_initializer_for_'MobilityWarnText''(void)

void SceneComponentStatics::_dynamic_initializer_for__MobilityWarnText__(void)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (&DAT_146af0970,L"move",L"SceneComponent",L"InvalidMove");
  atexit(FUN_143ea9c90);
  return;
}



// FUNCTION 1403389e0 FUN_1403389e0 body=51 status=ok
// SIG undefined FUN_1403389e0(void)

void FUN_1403389e0(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146af0e18);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_146af0e18,4000);
  atexit((_func_5014 *)&LAB_143ea9d50);
  return;
}



// FUNCTION 140338a30 FUN_140338a30 body=355 status=ok
// SIG undefined FUN_140338a30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140338a30(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  int local_10;
  
  local_18 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_10 = 3;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&DAT_143f3ed00;
    plVar1[1] = (longlong)&DAT_146af0bb8;
    plVar1[2] = (longlong)FUN_141591020;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af0bc0 =
       (**(code **)(*DAT_1468b1f88 + 0x80))
                 (DAT_1468b1f88,L"TaskGraph.TaskPriorities.ParallelAnimationEvaluationTask",
                  L"Task and thread priority for FParallelAnimationEvaluationTask",&local_18,0);
  _DAT_146af0bb8 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_140338b2f;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_140338b2f:
  DAT_146af0bc8 = 0;
  _DAT_146af0bd0 = 0x39;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146af0bc8,0);
  FGenericPlatformString::Memcpy
            (DAT_146af0bc8,L"TaskGraph.TaskPriorities.ParallelAnimationEvaluationTask",0x72);
  _DAT_146af0bd8 = 0x800;
  DAT_146af0be0 = 0x200;
  atexit(FUN_143ea9d90);
  return;
}



// FUNCTION 140338ba0 `dynamic_initializer_for_'CVarAnimVisualizeLODs'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarAnimVisualizeLODs''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarAnimVisualizeLODs__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af0d90 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"a.VisualizeLODs",0,L"Visualize SkelMesh LODs",0);
  _DAT_146af0d88 = &PTR_FUN_143f3ecf8;
  _DAT_146af0d98 = (**(code **)(*DAT_146af0d90 + 0x38))(DAT_146af0d90);
  atexit(FUN_143ea9df0);
  return;
}



// FUNCTION 140338c10 `dynamic_initializer_for_'CVarAnimationDelaysEndGroup'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarAnimationDelaysEndGroup''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarAnimationDelaysEndGroup__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af0c50 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"tick.AnimationDelaysEndGroup",1,
                  L"If > 0, then skeletal meshes that do not rely on physics simulation will set their animation end tick group to TG_PostPhysics."
                  ,0);
  _DAT_146af0c48 = &PTR_FUN_143f3ecf8;
  DAT_146af0c58 = (**(code **)(*DAT_146af0c50 + 0x38))(DAT_146af0c50);
  atexit(FUN_143ea9e40);
  return;
}



// FUNCTION 140338c90 `dynamic_initializer_for_'CVarDrawAnimRateOptimization'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDrawAnimRateOptimization''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDrawAnimRateOptimization__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af0d48 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"a.URO.Draw",0,L"True to draw color coded boxes for anim rate.",0);
  _DAT_146af0d40 = &PTR_FUN_143f3ecf8;
  _DAT_146af0d50 = (**(code **)(*DAT_146af0d48 + 0x38))(DAT_146af0d48);
  atexit(FUN_143ea9e90);
  return;
}



// FUNCTION 140338d00 `dynamic_initializer_for_'CVarEnableAnimRateOptimization'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarEnableAnimRateOptimization''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarEnableAnimRateOptimization__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af0c80 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"a.URO.Enable",1,L"True to anim rate optimization.",0);
  _DAT_146af0c78 = &PTR_FUN_143f3ecf8;
  DAT_146af0c88 = (**(code **)(*DAT_146af0c80 + 0x38))(DAT_146af0c80);
  atexit(FUN_143ea9ee0);
  return;
}



// FUNCTION 140338d80 `dynamic_initializer_for_'CVarEnableMorphTargets'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarEnableMorphTargets''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarEnableMorphTargets__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af0d78 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.EnableMorphTargets",1,L"Enable Morph Targets",0);
  _DAT_146af0d70 = &PTR_FUN_143f3ecf8;
  DAT_146af0d80 = (**(code **)(*DAT_146af0d78 + 0x38))(DAT_146af0d78);
  atexit(FUN_143ea9f30);
  return;
}



// FUNCTION 140338e00 `dynamic_initializer_for_'CVarForceAnimRate'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarForceAnimRate''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FAnimUpdateRateManager::_dynamic_initializer_for__CVarForceAnimRate__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af0dd8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"a.URO.ForceAnimRate",0,
                  L"Non-zero to force anim rate. 10 = eval anim every ten frames for those meshes that can do it. In some cases a frame is considered to be 30fps."
                  ,0);
  _DAT_146af0dd0 = &PTR_FUN_143f3ecf8;
  DAT_146af0de0 = (**(code **)(*DAT_146af0dd8 + 0x38))(DAT_146af0dd8);
  atexit(FUN_143ea9f80);
  return;
}



// FUNCTION 140338e70 FUN_140338e70 body=112 status=ok
// SIG undefined FUN_140338e70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140338e70(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af0d60 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"a.URO.ForceEnable",0,
                  L"True to force anim rate optimization on all valid components.",0);
  _DAT_146af0d58 = &PTR_FUN_143f3ecf8;
  DAT_146af0d68 = (**(code **)(*DAT_146af0d60 + 0x38))(DAT_146af0d60);
  atexit(FUN_143ea9fd0);
  return;
}



// FUNCTION 140338ee0 `dynamic_initializer_for_'CVarForceInterpolation'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarForceInterpolation''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FAnimUpdateRateManager::_dynamic_initializer_for__CVarForceInterpolation__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af0df0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"a.URO.ForceInterpolation",0,L"Set to 1 to force interpolation",0);
  _DAT_146af0de8 = &PTR_FUN_143f3ecf8;
  DAT_146af0df8 = (**(code **)(*DAT_146af0df0 + 0x38))(DAT_146af0df0);
  atexit(FUN_143eaa020);
  return;
}



// FUNCTION 140338f50 `dynamic_initializer_for_'CVarForceUseParallelAnimUpdate'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarForceUseParallelAnimUpdate''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarForceUseParallelAnimUpdate__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af0b90 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"a.ForceParallelAnimUpdate",0,
                  L"If != 0, then we update animations on worker threads regardless of the setting on the project or anim blueprint."
                  ,0);
  _DAT_146af0b88 = &PTR_FUN_143f3ecf8;
  DAT_146af0b98 = (**(code **)(*DAT_146af0b90 + 0x38))(DAT_146af0b90);
  atexit(FUN_143eaa070);
  return;
}



// FUNCTION 140338fc0 `dynamic_initializer_for_'CVarHiPriSkinnedMeshesTicks'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarHiPriSkinnedMeshesTicks''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarHiPriSkinnedMeshesTicks__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af0c68 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"tick.HiPriSkinnedMeshes",1,
                  L"If > 0, then schedule the skinned component ticks in a tick group before other ticks."
                  ,0);
  _DAT_146af0c60 = &PTR_FUN_143f3ecf8;
  DAT_146af0c70 = (**(code **)(*DAT_146af0c68 + 0x38))(DAT_146af0c68);
  atexit(FUN_143eaa0c0);
  return;
}



// FUNCTION 140339040 `dynamic_initializer_for_'CVarSkeletalMeshLODBias'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarSkeletalMeshLODBias''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarSkeletalMeshLODBias__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af0d38 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.SkeletalMeshLODBias",&DAT_146af0b40,
                  L"LOD bias for skeletal meshes (does not affect animation editor viewports).",0x40
                 );
  _DAT_146af0d30 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eaa110);
  return;
}



// FUNCTION 1403390b0 `dynamic_initializer_for_'CVarSpewAnimRateOptimization'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarSpewAnimRateOptimization''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarSpewAnimRateOptimization__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af0c38 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"SpewAnimRateOptimization",0,
                  L"True to spew overall anim rate optimization tick rates.",0);
  _DAT_146af0c30 = &PTR_FUN_143f3ecf8;
  DAT_146af0c40 = (**(code **)(*DAT_146af0c38 + 0x38))(DAT_146af0c38);
  atexit(FUN_143eaa160);
  return;
}



// FUNCTION 140339120 `dynamic_initializer_for_'CVarStallParallelAnimation'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarStallParallelAnimation''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarStallParallelAnimation__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af0ba8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"CriticalPathStall.ParallelAnimation",0,
                  L"Sleep for the given time in each parallel animation task. Time is given in ms. This is a debug option used for critical path analysis and forcing a change in the critical path."
                  ,0);
  _DAT_146af0ba0 = &PTR_FUN_143f3ecf8;
  _DAT_146af0bb0 = (**(code **)(*DAT_146af0ba8 + 0x40))(DAT_146af0ba8);
  atexit(FUN_143eaa1b0);
  return;
}



// FUNCTION 140339190 `dynamic_initializer_for_'CVarURODisableInterpolation'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarURODisableInterpolation''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FAnimUpdateRateManager::_dynamic_initializer_for__CVarURODisableInterpolation__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af0e08 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"a.URO.DisableInterpolation",0,L"Set to 1 to disable interpolation"
                  ,0);
  _DAT_146af0e00 = &PTR_FUN_143f3ecf8;
  DAT_146af0e10 = (**(code **)(*DAT_146af0e08 + 0x38))(DAT_146af0e08);
  atexit(FUN_143eaa200);
  return;
}



// FUNCTION 140339200 `dynamic_initializer_for_'CVarUpdateSkylightsEveryFrame'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarUpdateSkylightsEveryFrame''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarUpdateSkylightsEveryFrame__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af0ee8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.SkylightUpdateEveryFrame",&DAT_146af0b4c,
                  L"Whether to update all skylights every frame.  Useful for debugging.",0);
  _DAT_146af0ee0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eaa250);
  return;
}



// FUNCTION 140339270 `dynamic_initializer_for_'CVarUseParallelAnimUpdate'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarUseParallelAnimUpdate''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarUseParallelAnimUpdate__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af0b78 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"a.ParallelAnimUpdate",1,
                  L"If != 0, then we update animation blend tree, native update, asset players and montages (is possible) on worker threads."
                  ,0);
  _DAT_146af0b70 = &PTR_FUN_143f3ecf8;
  DAT_146af0b80 = (**(code **)(*DAT_146af0b78 + 0x38))(DAT_146af0b78);
  atexit(FUN_143eaa2a0);
  return;
}



// FUNCTION 1403392f0 `dynamic_initializer_for_'CVarUseParallelAnimationEvaluation'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarUseParallelAnimationEvaluation''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarUseParallelAnimationEvaluation__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af0b60 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"a.ParallelAnimEvaluation",1,
                  L"If 1, animation evaluation will be run across the task graph system. If 0, evaluation will run purely on the game thread"
                  ,0);
  _DAT_146af0b58 = &PTR_FUN_143f3ecf8;
  DAT_146af0b68 = (**(code **)(*DAT_146af0b60 + 0x38))(DAT_146af0b60);
  atexit(FUN_143eaa2f0);
  return;
}



// FUNCTION 140339370 FUN_140339370 body=100 status=ok
// SIG undefined FUN_140339370(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140339370(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af0ec8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"gbx.AnimManager.UseAsyncBoundsUpdate",&DAT_146af0b50,
                  L"Enables/Disables async bounds update. Disable: 0 - Enable: 1",0x40);
  _DAT_146af0ec0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eaa340);
  return;
}



// FUNCTION 1403393e0 FUN_1403393e0 body=100 status=ok
// SIG undefined FUN_1403393e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403393e0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af0d28 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"gbx.AnimManager.UseSimplifiedPipeline",&DAT_146af0b54,
                  L"Enables/Disables Simplified pipeline. Disable: 0 - Enable: 1",0x40);
  _DAT_146af0d20 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eaa390);
  return;
}



// FUNCTION 140339450 FUN_140339450 body=266 status=ok
// SIG undefined FUN_140339450(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140339450(void)

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
    *plVar1 = (longlong)&PTR_GetPoolName_143f4c9a8;
    plVar1[1] = (longlong)FUN_1423b59a0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f4c9f0;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af0ed8 =
       (**(code **)(*DAT_1468b1f88 + 0x78))
                 (DAT_1468b1f88,L"r.SkylightRecapture",
                  L"Updates all stationary and movable skylights, useful for debugging the capture pipeline"
                  ,&local_18,0);
  _DAT_146af0ed0 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_140339549;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_140339549:
  atexit(FUN_143eaa3e0);
  return;
}



// FUNCTION 140339740 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FCubemapTexturePropertiesPS<1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146af18f0,0,L"FCubemapTexturePropertiesPS<true>",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"CubemapTextureProperties",3,1,
             FUN_141b2e110,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146af18f0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146af1a20 = FCubemapTexturePropertiesPS<1>::ConstructCompiledInstance;
  _DAT_146af1a28 = &LAB_141c94640;
  _DAT_146af1a30 = BuildSettings::IsPromotedBuild;
  _DAT_146af1a38 = &LAB_1423d9c60;
  atexit((_func_5014 *)&LAB_143eaa4e0);
  return;
}



// FUNCTION 1403397f0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FCubemapTexturePropertiesPS<0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146af17a0,0,L"FCubemapTexturePropertiesPS<false>",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"CubemapTextureProperties",3,1,
             FUN_141b2e110,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146af17a0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146af18d0 = FCubemapTexturePropertiesPS<1>::ConstructCompiledInstance;
  _DAT_146af18d8 = &LAB_141c94640;
  _DAT_146af18e0 = BuildSettings::IsPromotedBuild;
  _DAT_146af18e8 = &LAB_1423d9c80;
  atexit((_func_5014 *)&LAB_143eaa4f0);
  return;
}



// FUNCTION 1403398a0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FCubemapTexturePropertiesVS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146af1440,0,L"FCubemapTexturePropertiesVS",
             L"/Engine/Private/SimpleElementVertexShader.usf",L"Main",0,1,
             FClearReplacementPS::ConstructSerializedInstance,AK::MemoryMgr::StartProfileThreadUsage
            );
  _DAT_146af1440 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146af1570 = FCubemapTexturePropertiesVS::ConstructCompiledInstance;
  _DAT_146af1578 = &LAB_141c94640;
  _DAT_146af1580 = BuildSettings::IsPromotedBuild;
  _DAT_146af1588 = AK::MemoryMgr::StartProfileThreadUsage;
  atexit((_func_5014 *)&LAB_143eaa500);
  return;
}



// FUNCTION 140339950 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FIESLightProfilePS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146af1590,0,L"FIESLightProfilePS",L"/Engine/Private/SimpleElementPixelShader.usf",
             L"IESLightProfileMain",3,1,FUN_141a14600,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146af1590 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146af16c0 = FIESLightProfilePS::ConstructCompiledInstance;
  _DAT_146af16c8 = FUN_1423e1700;
  _DAT_146af16d0 = BuildSettings::IsPromotedBuild;
  _DAT_146af16d8 = AK::MemoryMgr::StartProfileThreadUsage;
  atexit((_func_5014 *)&LAB_143eaa510);
  return;
}



// FUNCTION 140339a00 StaticType'' body=117 status=ok
// SIG undefined StaticType''(void)

void `dynamic_initializer_for_'FSplineMeshVertexFactory::StaticType__(void)

{
  FVertexFactoryType::FVertexFactoryType
            (&DAT_146af1070,L"FSplineMeshVertexFactory",L"/Engine/Private/LocalVertexFactory.ush",1,
             1,1,1,1,&LAB_1423cce30,FInstancedStaticMeshVertexFactory::ShouldCompilePermutation,
             FUN_1423d9ca0,BuildSettings::IsPromotedBuild);
  atexit((_func_5014 *)&LAB_143eaa520);
  return;
}



// FUNCTION 140339ac0 `dynamic_initializer_for_'CKeepOverrideVertexColorsOnCPU'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CKeepOverrideVertexColorsOnCPU''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CKeepOverrideVertexColorsOnCPU__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af1308 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.KeepOverrideVertexColorsOnCPU",&DAT_146af1038,
                  L"Keeps a CPU copy of override vertex colors.  May be required for some blueprints / object spawning."
                  ,0x60);
  _DAT_146af1300 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eaa530);
  return;
}



// FUNCTION 140339b30 `dynamic_initializer_for_'CKeepPreCulledIndicesThreshold'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CKeepPreCulledIndicesThreshold''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CKeepPreCulledIndicesThreshold__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af12f8 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"r.KeepPreCulledIndicesThreshold",&DAT_146531eac,&DAT_14506e240,
                  0x60);
  _DAT_146af12f0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eaa580);
  return;
}



// FUNCTION 140339ba0 `dynamic_initializer_for_'CVarAllowLevelRequestsWhileAsyncLoadingInMatch'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarAllowLevelRequestsWhileAsyncLoadingInMatch''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarAllowLevelRequestsWhileAsyncLoadingInMatch__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af1428 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"s.AllowLevelRequestsWhileAsyncLoadingInMatch",&DAT_146531ebc,
                  L"Enables level streaming requests while async loading (of anything) while the match is already in progress and no loading screen is up."
                  ,0);
  _DAT_146af1420 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eaa5d0);
  return;
}



// FUNCTION 140339c10 `dynamic_initializer_for_'CVarAsyncLoadingTimeLimit'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarAsyncLoadingTimeLimit''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarAsyncLoadingTimeLimit__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af1388 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"s.AsyncLoadingTimeLimit",&DAT_146531e94,
                  L"Maximum amount of time to spend doing asynchronous loading (ms per frame).",0);
  _DAT_146af1380 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eaa620);
  return;
}



// FUNCTION 140339c80 `dynamic_initializer_for_'CVarAsyncLoadingUseFullTimeLimit'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarAsyncLoadingUseFullTimeLimit''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarAsyncLoadingUseFullTimeLimit__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af1398 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"s.AsyncLoadingUseFullTimeLimit",&DAT_146af1030,
                  L"Whether to use the entire time limit even if blocked on I/O.",0);
  _DAT_146af1390 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eaa670);
  return;
}



// FUNCTION 140339cf0 `dynamic_initializer_for_'CVarContinuouslyIncrementalGCWhileLevelsPendingPurge'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarContinuouslyIncrementalGCWhileLevelsPendingPurge''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarContinuouslyIncrementalGCWhileLevelsPendingPurge__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af1418 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"s.ContinuouslyIncrementalGCWhileLevelsPendingPurge",&DAT_146531eb8
                  ,
                  L"Whether to repeatedly kick off incremental GC when there are levels still waiting to be purged."
                  ,0);
  _DAT_146af1410 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eaa6c0);
  return;
}



// FUNCTION 140339d60 `dynamic_initializer_for_'CVarForceGCAfterLevelStreamedOut'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarForceGCAfterLevelStreamedOut''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarForceGCAfterLevelStreamedOut__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af1408 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"s.ForceGCAfterLevelStreamedOut",&DAT_146531eb4,
                  L"Whether to force a GC after levels are streamed out to instantly reclaim the memory at the expensive of a hitch."
                  ,0);
  _DAT_146af1400 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eaa710);
  return;
}



// FUNCTION 140339dd0 `dynamic_initializer_for_'CVarLevelStreamingActorsUpdateTimeLimit'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarLevelStreamingActorsUpdateTimeLimit''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarLevelStreamingActorsUpdateTimeLimit__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af13b8 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"s.LevelStreamingActorsUpdateTimeLimit",&DAT_146531e9c,
                  L"Maximum allowed time to spend for actor registration steps during level streaming (ms per frame)."
                  ,0);
  _DAT_146af13b0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eaa760);
  return;
}



// FUNCTION 140339e40 `dynamic_initializer_for_'CVarLevelStreamingComponentsRegistrationGranularity'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarLevelStreamingComponentsRegistrationGranularity''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarLevelStreamingComponentsRegistrationGranularity__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af13e8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"s.LevelStreamingComponentsRegistrationGranularity",&DAT_146531ea4,
                  L"Batching granularity used to register actor components during level streaming.",
                  0);
  _DAT_146af13e0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eaa7b0);
  return;
}



// FUNCTION 140339eb0 `dynamic_initializer_for_'CVarLevelStreamingComponentsUnregistrationGranularity'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarLevelStreamingComponentsUnregistrationGranularity''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarLevelStreamingComponentsUnregistrationGranularity__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af13f8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"s.LevelStreamingComponentsUnregistrationGranularity",
                  &DAT_146531ea8,
                  L"Batching granularity used to unregister actor components during level unstreaming."
                  ,0);
  _DAT_146af13f0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eaa800);
  return;
}



// FUNCTION 140339f20 `dynamic_initializer_for_'CVarLevelStreamingUnregisterComponentsTimeLimit'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarLevelStreamingUnregisterComponentsTimeLimit''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarLevelStreamingUnregisterComponentsTimeLimit__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af13d8 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"s.UnregisterComponentsTimeLimit",&DAT_146531eb0,
                  L"Maximum allowed time to spend for actor unregistration steps during level streaming (ms per frame). If this is zero then we don\'t timeslice"
                  ,0);
  _DAT_146af13d0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eaa850);
  return;
}



// FUNCTION 140339f90 FUN_140339f90 body=112 status=ok
// SIG undefined FUN_140339f90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140339f90(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af1060 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Lightmass.PrePadStaticMeshComponents",0,&DAT_14506e48c,0);
  _DAT_146af1058 = &PTR_FUN_143f3ecf8;
  DAT_146af1068 = (**(code **)(*DAT_146af1060 + 0x38))(DAT_146af1060);
  atexit(FUN_143eaa8a0);
  return;
}



// FUNCTION 14033a000 `dynamic_initializer_for_'CVarMaxLevelRequestsAtOnceWhileInMatch'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarMaxLevelRequestsAtOnceWhileInMatch''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarMaxLevelRequestsAtOnceWhileInMatch__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af1438 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"s.MaxLevelRequestsAtOnceWhileInMatch",&DAT_146af1034,
                  L"When we\'re already loading this many levels and actively in match, don\'t allow any more requests until one of those completes.  Set to zero to disable."
                  ,0);
  _DAT_146af1430 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eaa8f0);
  return;
}



// FUNCTION 14033a070 `dynamic_initializer_for_'CVarNoRecreateSplineMeshProxy'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarNoRecreateSplineMeshProxy''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarNoRecreateSplineMeshProxy__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af1050 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.SplineMesh.NoRecreateProxy",&DAT_146531ec0,
                  L"Optimization. If true, spline mesh proxies will not be recreated every time they are changed. They are simply updated."
                  ,0);
  _DAT_146af1048 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eaa940);
  return;
}



// FUNCTION 14033a0e0 `dynamic_initializer_for_'CVarPriorityAsyncLoadingExtraTime'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarPriorityAsyncLoadingExtraTime''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarPriorityAsyncLoadingExtraTime__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af13a8 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"s.PriorityAsyncLoadingExtraTime",&DAT_146531e98,
                  L"Additional time to spend asynchronous loading during a high priority load.",0);
  _DAT_146af13a0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eaa990);
  return;
}



// FUNCTION 14033a150 `dynamic_initializer_for_'CVarPriorityLevelStreamingActorsUpdateExtraTime'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarPriorityLevelStreamingActorsUpdateExtraTime''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarPriorityLevelStreamingActorsUpdateExtraTime__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af13c8 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"s.PriorityLevelStreamingActorsUpdateExtraTime",&DAT_146531ea0,
                  L"Additional time to spend on actor registration steps during a high priority load."
                  ,0);
  _DAT_146af13c0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eaa9e0);
  return;
}



// FUNCTION 14033a1c0 `dynamic_initializer_for_'CVarUseBackgroundLevelStreaming'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarUseBackgroundLevelStreaming''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarUseBackgroundLevelStreaming__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af1378 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"s.UseBackgroundLevelStreaming",&DAT_146531e90,
                  L"Whether to allow background level streaming.",0);
  _DAT_146af1370 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eaaa30);
  return;
}



// FUNCTION 14033a4d0 `dynamic_initializer_for_'CVarDelayUnmappedRPCs'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDelayUnmappedRPCs''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDelayUnmappedRPCs__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af2360 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"net.DelayUnmappedRPCs",0,
                  L"If >0 delay received RPCs with unmapped properties",0);
  _DAT_146af2358 = &PTR_FUN_143f3ecf8;
  DAT_146af2368 = (**(code **)(*DAT_146af2360 + 0x38))(DAT_146af2360);
  atexit(FUN_143eaabc0);
  return;
}



// FUNCTION 14033a540 `dynamic_initializer_for_'CVarMaxRPCPerNetUpdate'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarMaxRPCPerNetUpdate''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarMaxRPCPerNetUpdate__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af2348 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"net.MaxRPCPerNetUpdate",2,
                  L"Maximum number of RPCs allowed per net update",0);
  _DAT_146af2340 = &PTR_FUN_143f3ecf8;
  DAT_146af2350 = (**(code **)(*DAT_146af2348 + 0x38))(DAT_146af2348);
  atexit(FUN_143eaac10);
  return;
}



// FUNCTION 14033a5c0 `dynamic_initializer_for_'CVarNetInstantReplayProcessQueuedBunchesMillisecondLimit'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarNetInstantReplayProcessQueuedBunchesMillisecondLimit''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarNetInstantReplayProcessQueuedBunchesMillisecondLimit__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af22c0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"net.InstantReplayProcessQueuedBunchesMillisecondLimit",8,
                  L"Time threshold for processing queued bunches during instant replays. If it takes longer than this in a single frame, wait until the next frame to continue processing queued bunches. For unlimited time, set to 0."
                  ,0);
  _DAT_146af22b8 = &PTR_FUN_143f3ecf8;
  DAT_146af22c8 = (**(code **)(*DAT_146af22c0 + 0x38))(DAT_146af22c0);
  atexit(FUN_143eaac60);
  return;
}



// FUNCTION 14033a640 `dynamic_initializer_for_'CVarNetPartialBunchReliableThreshold'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarNetPartialBunchReliableThreshold''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarNetPartialBunchReliableThreshold__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af22d8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"net.PartialBunchReliableThreshold",&DAT_146af1a78,
                  L"If a bunch is broken up into this many partial bunches are more, we will send it reliable even if the original bunch was not reliable. Partial bunches are atonmic and must all make it over to be used"
                  ,0);
  _DAT_146af22d0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eaacb0);
  return;
}



// FUNCTION 14033a6b0 `dynamic_initializer_for_'CVarNetProcessQueuedBunchesMillisecondLimit'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarNetProcessQueuedBunchesMillisecondLimit''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarNetProcessQueuedBunchesMillisecondLimit__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af22a8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"net.ProcessQueuedBunchesMillisecondLimit",0x1e,
                  L"Time threshold for processing queued bunches. If it takes longer than this in a single frame, wait until the next frame to continue processing queued bunches. For unlimited time, set to 0."
                  ,0);
  _DAT_146af22a0 = &PTR_FUN_143f3ecf8;
  DAT_146af22b0 = (**(code **)(*DAT_146af22a8 + 0x38))(DAT_146af22a8);
  atexit(FUN_143eaad00);
  return;
}



// FUNCTION 14033a730 `dynamic_initializer_for_'CVarNetRPCDebug'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarNetRPCDebug''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarNetRPCDebug__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af23a0 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"net.RPC.Debug",&DAT_146af1a5c,
                  L"Print all RPC bunches sent over the network\n 0: no print.\n 1: Print bunches as they are sent."
                  ,0);
  _DAT_146af2398 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eaad50);
  return;
}



// FUNCTION 14033a7a0 `dynamic_initializer_for_'CVarNetReliableDebug'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarNetReliableDebug''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarNetReliableDebug__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af2290 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"net.Reliable.Debug",0,
                  L"Print all reliable bunches sent over the network\n 0: no print.\n 1: Print bunches as they are sent.\n 2: Print reliable bunch buffer each net update"
                  ,0);
  _DAT_146af2288 = &PTR_FUN_143f3ecf8;
  _DAT_146af2298 = (**(code **)(*DAT_146af2290 + 0x38))(DAT_146af2290);
  atexit(FUN_143eaada0);
  return;
}



// FUNCTION 14033a810 `dynamic_initializer_for_'CVarNetReplicationDebugProperty'' body=139 status=ok
// SIG undefined `dynamic_initializer_for_'CVarNetReplicationDebugProperty''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarNetReplicationDebugProperty__(void)

{
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  if (DAT_1468b1f88 == (undefined8 *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af2388 =
       (longlong *)
       (**(code **)*DAT_1468b1f88)
                 (DAT_1468b1f88,L"net.Replication.DebugProperty",local_18,
                  L"Debugs Replication of property by namePartial name of property to debug",0);
  _DAT_146af2380 = &PTR_FUN_143f3ecf8;
  _DAT_146af2390 = (**(code **)(*DAT_146af2388 + 0x48))(DAT_146af2388);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  atexit(FUN_143eaadf0);
  return;
}



// FUNCTION 14033a8a0 `dynamic_initializer_for_'CVarRelinkMappedReferences'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarRelinkMappedReferences''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarRelinkMappedReferences__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af2300 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"net.RelinkMappedReferences",1,&DAT_1450766fc,0);
  _DAT_146af22f8 = &PTR_FUN_143f3ecf8;
  DAT_146af2308 = (**(code **)(*DAT_146af2300 + 0x38))(DAT_146af2300);
  atexit(FUN_143eaae40);
  return;
}



// FUNCTION 14033a920 `dynamic_initializer_for_'CVarShareShadowState'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarShareShadowState''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarShareShadowState__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af2378 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"net.ShareShadowState",&DAT_146531fac,
                  L"If true, work done to compare properties will be shared across connections",0);
  _DAT_146af2370 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eaae90);
  return;
}



// FUNCTION 14033a990 FUN_14033a990 body=266 status=ok
// SIG undefined FUN_14033a990(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14033a990(void)

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
    *plVar1 = (longlong)&PTR_GetPoolName_143f4c9a8;
    plVar1[1] = (longlong)FUN_1423e9c70;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f4c9f0;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af2338 =
       (**(code **)(*DAT_1468b1f88 + 0x78))
                 (DAT_1468b1f88,L"net.DeleteDormantActor",L"Lists open actor channels",&local_18,0);
  _DAT_146af2330 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_14033aa89;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_14033aa89:
  atexit(FUN_143eaaee0);
  return;
}



// FUNCTION 14033aaa0 FUN_14033aaa0 body=266 status=ok
// SIG undefined FUN_14033aaa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14033aaa0(void)

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
    *plVar1 = (longlong)&PTR_GetPoolName_143f4c9a8;
    plVar1[1] = (longlong)FUN_1423e9b80;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f4c9f0;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af2318 =
       (**(code **)(*DAT_1468b1f88 + 0x78))
                 (DAT_1468b1f88,L"net.ListNetGUIDs",L"Lists NetGUIDs for actors",&local_18,0);
  _DAT_146af2310 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_14033ab99;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_14033ab99:
  atexit(FUN_143eaaf30);
  return;
}



// FUNCTION 14033b4e0 FUN_14033b4e0 body=266 status=ok
// SIG undefined FUN_14033b4e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14033b4e0(void)

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
    *plVar1 = (longlong)&PTR_GetPoolName_143f4c9a8;
    plVar1[1] = (longlong)FUN_1423f2c70;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f4c9f0;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af2328 =
       (**(code **)(*DAT_1468b1f88 + 0x78))
                 (DAT_1468b1f88,L"net.ListActorChannels",L"Lists open actor channels",&local_18,0);
  _DAT_146af2320 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_14033b5d9;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_14033b5d9:
  atexit(FUN_143eaaf80);
  return;
}



// FUNCTION 14033b660 DialogueNamespace'' body=59 status=ok
// SIG undefined DialogueNamespace''(void)

void `dynamic_initializer_for_'FDialogueConstants::DialogueNamespace__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146532008,0);
  FGenericPlatformString::Memcpy(DAT_146532008,L"Dialogue",0x12);
  atexit((_func_5014 *)&LAB_143eab010);
  return;
}



// FUNCTION 14033b6a0 DialogueNotesNamespace'' body=59 status=ok
// SIG undefined DialogueNotesNamespace''(void)

void `dynamic_initializer_for_'FDialogueConstants::DialogueNotesNamespace__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146532018,0);
  FGenericPlatformString::Memcpy(DAT_146532018,L"DialogueNotes",0x1c);
  atexit((_func_5014 *)&LAB_143eab030);
  return;
}



// FUNCTION 14033b720 SubtitleKeySuffix'' body=59 status=ok
// SIG undefined SubtitleKeySuffix''(void)

void `dynamic_initializer_for_'FDialogueConstants::SubtitleKeySuffix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146532028,0);
  FGenericPlatformString::Memcpy(DAT_146532028,L"_Subtitle",0x14);
  atexit((_func_5014 *)&LAB_143eab050);
  return;
}



// FUNCTION 14033b760 `dynamic_initializer_for_'CVarAOAsyncBuildQueue'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarAOAsyncBuildQueue''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarAOAsyncBuildQueue__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af28b8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.AOAsyncBuildQueue",&DAT_146531ff0,
                  L"Whether to asynchronously build distance field volume data from meshes.",4);
  _DAT_146af28b0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eab070);
  return;
}



// FUNCTION 14033b7d0 `dynamic_initializer_for_'CVarCheckpointSaveMaxMSPerFrameOverride'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarCheckpointSaveMaxMSPerFrameOverride''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarCheckpointSaveMaxMSPerFrameOverride__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af2668 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"demo.CheckpointSaveMaxMSPerFrameOverride",0xbf800000,
                  L"If >= 0, this value will override the CheckpointSaveMaxMSPerFrame member variable, which is the maximum time allowed each frame to spend on saving a checkpoint. If 0, it will save the checkpoint in a single frame, regardless of how long it takes."
                  ,0);
  _DAT_146af2660 = &PTR_FUN_143f3ecf8;
  DAT_146af2670 = (**(code **)(*DAT_146af2668 + 0x40))(DAT_146af2668);
  atexit(FUN_143eab0c0);
  return;
}



// FUNCTION 14033b850 `dynamic_initializer_for_'CVarCheckpointUploadDelayInSeconds'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarCheckpointUploadDelayInSeconds''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarCheckpointUploadDelayInSeconds__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af2638 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"demo.CheckpointUploadDelayInSeconds",0x41f00000,&DAT_1450890ec,0);
  _DAT_146af2630 = &PTR_FUN_143f3ecf8;
  DAT_146af2640 = (**(code **)(*DAT_146af2638 + 0x40))(DAT_146af2638);
  atexit(FUN_143eab110);
  return;
}



// FUNCTION 14033b8d0 `dynamic_initializer_for_'CVarCompressDistField'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarCompressDistField''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarCompressDistField__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af27d0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.DistanceFieldBuild.Compress",0,
                  L"Whether to store mesh distance fields compressed in memory, which reduces how much memory they take, but also causes serious hitches when making new levels visible.  Only enable if your project does not stream levels in-game.\nChanging this regenerates all mesh distance fields."
                  ,4);
  _DAT_146af27c8 = &PTR_FUN_143f3ecf8;
  _DAT_146af27d8 = (**(code **)(*DAT_146af27d0 + 0x38))(DAT_146af27d0);
  atexit(FUN_143eab160);
  return;
}



// FUNCTION 14033b940 `dynamic_initializer_for_'CVarDemoAsyncLoadWorld'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDemoAsyncLoadWorld''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDemoAsyncLoadWorld__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af2620 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"demo.AsyncLoadWorld",0,
                  L"If 1, we will use seamless server travel to load the replay world asynchronously"
                  ,0);
  _DAT_146af2618 = &PTR_FUN_143f3ecf8;
  DAT_146af2628 = (**(code **)(*DAT_146af2620 + 0x38))(DAT_146af2620);
  atexit(FUN_143eab1b0);
  return;
}



// FUNCTION 14033b9b0 `dynamic_initializer_for_'CVarDemoClientRecordAsyncEndOfFrame'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDemoClientRecordAsyncEndOfFrame''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDemoClientRecordAsyncEndOfFrame__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af2680 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"demo.ClientRecordAsyncEndOfFrame",0,
                  L"If true, TickFlush will be called on a thread in parallel with Slate.",0);
  _DAT_146af2678 = &PTR_FUN_143f3ecf8;
  DAT_146af2688 = (**(code **)(*DAT_146af2680 + 0x38))(DAT_146af2680);
  atexit(FUN_143eab200);
  return;
}



// FUNCTION 14033ba20 `dynamic_initializer_for_'CVarDemoCullDistanceOverride'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDemoCullDistanceOverride''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDemoCullDistanceOverride__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af26c8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"demo.CullDistanceOverride",0,
                  L"If > 0, will represent distance from any viewer where actors will stop being recorded."
                  ,0);
  _DAT_146af26c0 = &PTR_FUN_143f3ecf8;
  DAT_146af26d0 = (**(code **)(*DAT_146af26c8 + 0x40))(DAT_146af26c8);
  atexit(FUN_143eab250);
  return;
}



// FUNCTION 14033ba90 `dynamic_initializer_for_'CVarDemoFastForwardDestroyTearOffActors'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDemoFastForwardDestroyTearOffActors''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDemoFastForwardDestroyTearOffActors__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af25c0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"demo.FastForwardDestroyTearOffActors",1,
                  L"If true, the driver will destroy any torn-off actors immediately while fast-forwarding a replay."
                  ,0);
  _DAT_146af25b8 = &PTR_FUN_143f3ecf8;
  DAT_146af25c8 = (**(code **)(*DAT_146af25c0 + 0x38))(DAT_146af25c0);
  atexit(FUN_143eab2a0);
  return;
}



// FUNCTION 14033bb10 `dynamic_initializer_for_'CVarDemoFastForwardIgnoreRPCs'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDemoFastForwardIgnoreRPCs''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDemoFastForwardIgnoreRPCs__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af2710 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"demo.FastForwardIgnoreRPCs",1,
                  L"If true, RPCs will be discarded during playback fast forward.",0);
  _DAT_146af2708 = &PTR_FUN_143f3ecf8;
  DAT_146af2718 = (**(code **)(*DAT_146af2710 + 0x38))(DAT_146af2710);
  atexit(FUN_143eab2f0);
  return;
}



// FUNCTION 14033bb90 `dynamic_initializer_for_'CVarDemoFastForwardSkipRepNotifies'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDemoFastForwardSkipRepNotifies''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDemoFastForwardSkipRepNotifies__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af25d8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"demo.FastForwardSkipRepNotifies",1,
                  L"If true, the driver will optimize fast-forwarding by deferring calls to RepNotify functions until the fast-forward is complete. "
                  ,0);
  _DAT_146af25d0 = &PTR_FUN_143f3ecf8;
  DAT_146af25e0 = (**(code **)(*DAT_146af25d8 + 0x38))(DAT_146af25d8);
  atexit(FUN_143eab340);
  return;
}



// FUNCTION 14033bc10 `dynamic_initializer_for_'CVarDemoLoadCheckpointGarbageCollect'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDemoLoadCheckpointGarbageCollect''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDemoLoadCheckpointGarbageCollect__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af2650 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"demo.LoadCheckpointGarbageCollect",1,
                  L"If nonzero, CollectGarbage will be called during LoadCheckpoint after the old actors and connection are cleaned up."
                  ,0);
  _DAT_146af2648 = &PTR_FUN_143f3ecf8;
  DAT_146af2658 = (**(code **)(*DAT_146af2650 + 0x38))(DAT_146af2650);
  atexit(FUN_143eab390);
  return;
}



// FUNCTION 14033bc90 `dynamic_initializer_for_'CVarDemoMinRecordHz'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDemoMinRecordHz''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDemoMinRecordHz__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af2548 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"demo.MinRecordHz",0,
                  L"Minimum number of demo frames recorded per second (use with care)",0);
  _DAT_146af2540 = &PTR_FUN_143f3ecf8;
  DAT_146af2550 = (**(code **)(*DAT_146af2548 + 0x40))(DAT_146af2548);
  atexit(FUN_143eab3e0);
  return;
}



// FUNCTION 14033bd00 `dynamic_initializer_for_'CVarDemoQueueCheckpointChannels'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDemoQueueCheckpointChannels''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDemoQueueCheckpointChannels__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af25f0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"demo.QueueCheckpointChannels",1,
                  L"If true, the driver will put all channels created during checkpoint loading into queuing mode, to amortize the cost of spawning new actors across multiple frames."
                  ,0);
  _DAT_146af25e8 = &PTR_FUN_143f3ecf8;
  DAT_146af25f8 = (**(code **)(*DAT_146af25f0 + 0x38))(DAT_146af25f0);
  atexit(FUN_143eab430);
  return;
}



// FUNCTION 14033bd80 `dynamic_initializer_for_'CVarDemoRecordHz'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDemoRecordHz''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDemoRecordHz__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af24a0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"demo.RecordHz",0x41000000,
                  L"Maximum number of demo frames recorded per second",0);
  _DAT_146af2498 = &PTR_FUN_143f3ecf8;
  DAT_146af24a8 = (**(code **)(*DAT_146af24a0 + 0x40))(DAT_146af24a0);
  atexit(FUN_143eab480);
  return;
}



// FUNCTION 14033be00 `dynamic_initializer_for_'CVarDemoRecordHzWhenNotRelevant'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDemoRecordHzWhenNotRelevant''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDemoRecordHzWhenNotRelevant__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af26e0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"demo.RecordHzWhenNotRelevant",0x40000000,
                  L"Record at this frequency when actor is not relevant.",0);
  _DAT_146af26d8 = &PTR_FUN_143f3ecf8;
  DAT_146af26e8 = (**(code **)(*DAT_146af26e0 + 0x40))(DAT_146af26e0);
  atexit(FUN_143eab4d0);
  return;
}



// FUNCTION 14033be80 `dynamic_initializer_for_'CVarDemoSaveRollbackActorState'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDemoSaveRollbackActorState''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDemoSaveRollbackActorState__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af2728 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"demo.SaveRollbackActorState",1,
                  L"If true, rollback actors will save some replicated state to apply when respawned."
                  ,0);
  _DAT_146af2720 = &PTR_FUN_143f3ecf8;
  DAT_146af2730 = (**(code **)(*DAT_146af2728 + 0x38))(DAT_146af2728);
  atexit(FUN_143eab520);
  return;
}



// FUNCTION 14033bf00 `dynamic_initializer_for_'CVarDemoSkipTime'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDemoSkipTime''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDemoSkipTime__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af2578 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"demo.SkipTime",0,
                  L"Skip fixed amount of network replay time (in seconds)",0);
  _DAT_146af2570 = &PTR_FUN_143f3ecf8;
  DAT_146af2580 = (**(code **)(*DAT_146af2578 + 0x40))(DAT_146af2578);
  atexit(FUN_143eab570);
  return;
}



// FUNCTION 14033bf70 `dynamic_initializer_for_'CVarDemoTimeDilation'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDemoTimeDilation''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDemoTimeDilation__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af2560 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"demo.TimeDilation",0xbf800000,
                  L"Override time dilation during demo playback (-1 = don\'t override)",0);
  _DAT_146af2558 = &PTR_FUN_143f3ecf8;
  DAT_146af2568 = (**(code **)(*DAT_146af2560 + 0x40))(DAT_146af2560);
  atexit(FUN_143eab5c0);
  return;
}



// FUNCTION 14033bff0 `dynamic_initializer_for_'CVarDemoUseNetRelevancy'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDemoUseNetRelevancy''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDemoUseNetRelevancy__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af26b0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"demo.UseNetRelevancy",0,
                  L"If 1, will enable relevancy checks and distance culling, using all connected clients as reference."
                  ,0);
  _DAT_146af26a8 = &PTR_FUN_143f3ecf8;
  DAT_146af26b8 = (**(code **)(*DAT_146af26b0 + 0x38))(DAT_146af26b0);
  atexit(FUN_143eab610);
  return;
}



// FUNCTION 14033c060 `dynamic_initializer_for_'CVarDeviceProfileOverride'' body=139 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDeviceProfileOverride''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDeviceProfileOverride__(void)

{
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  if (DAT_1468b1f88 == (undefined8 *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af2790 =
       (longlong *)
       (**(code **)*DAT_1468b1f88)
                 (DAT_1468b1f88,L"dp.Override",local_18,
                  L"DeviceProfile override - setting this will use the named DP as the active DP. In addition, it will restore any\n previous overrides before setting (does a dp.OverridePop before setting after the first time).\n The commandline -dp option will override this on startup, but not when setting this at runtime\n"
                  ,0);
  _DAT_146af2788 = &PTR_FUN_143f3ecf8;
  DAT_146af2798 = (**(code **)(*DAT_146af2790 + 0x48))(DAT_146af2790);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  atexit(FUN_143eab660);
  return;
}



// FUNCTION 14033c0f0 `dynamic_initializer_for_'CVarDistField'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDistField''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDistField__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af27b8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.GenerateMeshDistanceFields",0,
                  L"Whether to build distance fields of static meshes, needed for distance field AO, which is used to implement Movable SkyLight shadows.\nEnabling will increase mesh build times and memory usage.  Changing this value will cause a rebuild of all static meshes."
                  ,4);
  _DAT_146af27b0 = &PTR_FUN_143f3ecf8;
  _DAT_146af27c0 = (**(code **)(*DAT_146af27b8 + 0x38))(DAT_146af27b8);
  atexit(FUN_143eab6b0);
  return;
}



// FUNCTION 14033c160 `dynamic_initializer_for_'CVarDistFieldAtlasResXY'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDistFieldAtlasResXY''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDistFieldAtlasResXY__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af2848 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.DistanceFields.AtlasSizeXY",0x200,
                  L"Max size of the global mesh distance field atlas volume texture in X and Y.",4);
  _DAT_146af2840 = &PTR_FUN_143f3ecf8;
  _DAT_146af2850 = (**(code **)(*DAT_146af2848 + 0x38))(DAT_146af2848);
  atexit(FUN_143eab700);
  return;
}



// FUNCTION 14033c1e0 `dynamic_initializer_for_'CVarDistFieldAtlasResZ'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDistFieldAtlasResZ''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDistFieldAtlasResZ__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af2860 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.DistanceFields.AtlasSizeZ",0x400,
                  L"Max size of the global mesh distance field atlas volume texture in Z.",4);
  _DAT_146af2858 = &PTR_FUN_143f3ecf8;
  _DAT_146af2868 = (**(code **)(*DAT_146af2860 + 0x38))(DAT_146af2860);
  atexit(FUN_143eab750);
  return;
}



// FUNCTION 14033c260 `dynamic_initializer_for_'CVarDistFieldForceAtlasRealloc'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDistFieldForceAtlasRealloc''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDistFieldForceAtlasRealloc__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af2878 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.DistanceFields.ForceAtlasRealloc",&DAT_146af2468,
                  L"Force a full realloc.",0x20);
  _DAT_146af2870 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eab7a0);
  return;
}



// FUNCTION 14033c2d0 `dynamic_initializer_for_'CVarDistFieldForceMaxAtlasSize'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDistFieldForceMaxAtlasSize''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDistFieldForceMaxAtlasSize__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af28a0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.DistanceFields.ForceMaxAtlasSize",0,
                  L"When enabled, we\'ll always allocate the largest possible volume texture for the distance field atlas regardless of how many blocks we need.  This is an optimization to avoid re-packing the texture, for projects that are expected to always require the largest amount of space."
                  ,0);
  _DAT_146af2898 = &PTR_FUN_143f3ecf8;
  _DAT_146af28a8 = (**(code **)(*DAT_146af28a0 + 0x38))(DAT_146af28a0);
  atexit(FUN_143eab7f0);
  return;
}



// FUNCTION 14033c340 `dynamic_initializer_for_'CVarDistFieldRes'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDistFieldRes''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDistFieldRes__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af2818 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.DistanceFields.MaxPerMeshResolution",0x80,
                  L"Highest resolution (in one dimension) allowed for a single static mesh asset, used to cap the memory usage of meshes with a large scale.\nChanging this will cause all distance fields to be rebuilt.  Large values such as 512 can consume memory very quickly! (128Mb for one asset at 512)"
                  ,4);
  _DAT_146af2810 = &PTR_FUN_143f3ecf8;
  _DAT_146af2820 = (**(code **)(*DAT_146af2818 + 0x38))(DAT_146af2818);
  atexit(FUN_143eab840);
  return;
}



// FUNCTION 14033c3c0 `dynamic_initializer_for_'CVarDistFieldResScale'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDistFieldResScale''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDistFieldResScale__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af2830 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.DistanceFields.DefaultVoxelDensity",0x3dcccccd,
                  L"Determines how the default scale of a mesh converts into distance field voxel dimensions.\nChanging this will cause all distance fields to be rebuilt.  Large values can consume memory very quickly!"
                  ,4);
  _DAT_146af2828 = &PTR_FUN_143f3ecf8;
  _DAT_146af2838 = (**(code **)(*DAT_146af2830 + 0x40))(DAT_146af2830);
  atexit(FUN_143eab890);
  return;
}



// FUNCTION 14033c440 `dynamic_initializer_for_'CVarEightBitDistField'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarEightBitDistField''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarEightBitDistField__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af27e8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.DistanceFieldBuild.EightBit",0,
                  L"Whether to store mesh distance fields in an 8 bit fixed point format instead of 16 bit floating point.  \n8 bit uses half the memory, but introduces artifacts for large meshes or thin meshes."
                  ,4);
  _DAT_146af27e0 = &PTR_FUN_143f3ecf8;
  _DAT_146af27f0 = (**(code **)(*DAT_146af27e8 + 0x38))(DAT_146af27e8);
  atexit(FUN_143eab8e0);
  return;
}



// FUNCTION 14033c4b0 `dynamic_initializer_for_'CVarEnableCheckpoints'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarEnableCheckpoints''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarEnableCheckpoints__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af2590 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"demo.EnableCheckpoints",1,
                  L"Whether or not checkpoints save on the server",0);
  _DAT_146af2588 = &PTR_FUN_143f3ecf8;
  DAT_146af2598 = (**(code **)(*DAT_146af2590 + 0x38))(DAT_146af2590);
  atexit(FUN_143eab930);
  return;
}



// FUNCTION 14033c530 `dynamic_initializer_for_'CVarForceDisableAsyncPackageMapLoading'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarForceDisableAsyncPackageMapLoading''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarForceDisableAsyncPackageMapLoading__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af2698 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"demo.ForceDisableAsyncPackageMapLoading",0,
                  L"If true, async package map loading of network assets will be disabled.",0);
  _DAT_146af2690 = &PTR_FUN_143f3ecf8;
  DAT_146af26a0 = (**(code **)(*DAT_146af2698 + 0x38))(DAT_146af2698);
  atexit(FUN_143eab980);
  return;
}



// FUNCTION 14033c5a0 `dynamic_initializer_for_'CVarGotoTimeInSeconds'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarGotoTimeInSeconds''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarGotoTimeInSeconds__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af25a8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"demo.GotoTimeInSeconds",0xbf800000,
                  L"For testing only, jump to a particular time",0);
  _DAT_146af25a0 = &PTR_FUN_143f3ecf8;
  DAT_146af25b0 = (**(code **)(*DAT_146af25a8 + 0x40))(DAT_146af25a8);
  atexit(FUN_143eab9d0);
  return;
}



// FUNCTION 14033c620 `dynamic_initializer_for_'CVarLandscapeGI'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarLandscapeGI''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarLandscapeGI__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af2888 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.GenerateLandscapeGIData",0,
                  L"Whether to generate a low-resolution base color texture for landscapes for rendering real-time global illumination.\nThis feature requires GenerateMeshDistanceFields is also enabled, and will increase mesh build times and memory usage.\n"
                  ,0);
  _DAT_146af2880 = &PTR_FUN_143f3ecf8;
  _DAT_146af2890 = (**(code **)(*DAT_146af2888 + 0x38))(DAT_146af2888);
  atexit(FUN_143eaba20);
  return;
}



// FUNCTION 14033c690 `dynamic_initializer_for_'CVarLoopDemo'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarLoopDemo''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarLoopDemo__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af26f8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"demo.Loop",0,
                  L"<1> : play replay from beginning once it reaches the end / <0> : stop replay at the end"
                  ,0);
  _DAT_146af26f0 = &PTR_FUN_143f3ecf8;
  DAT_146af2700 = (**(code **)(*DAT_146af26f8 + 0x38))(DAT_146af26f8);
  atexit(FUN_143eaba70);
  return;
}



// FUNCTION 14033c700 `dynamic_initializer_for_'CVarUseAdaptiveReplayUpdateFrequency'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarUseAdaptiveReplayUpdateFrequency''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarUseAdaptiveReplayUpdateFrequency__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af2608 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"demo.UseAdaptiveReplayUpdateFrequency",1,
                  L"If 1, NetUpdateFrequency will be calculated based on how often actors actually write something when recording to a replay"
                  ,0);
  _DAT_146af2600 = &PTR_FUN_143f3ecf8;
  DAT_146af2610 = (**(code **)(*DAT_146af2608 + 0x38))(DAT_146af2608);
  atexit(FUN_143eabac0);
  return;
}



// FUNCTION 14033c780 `dynamic_initializer_for_'CVarUseEmbreeForMeshDistanceFieldGeneration'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarUseEmbreeForMeshDistanceFieldGeneration''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarUseEmbreeForMeshDistanceFieldGeneration__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af2800 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.DistanceFieldBuild.UseEmbree",1,
                  L"Whether to use embree ray tracer for mesh distance field generation.",4);
  _DAT_146af27f8 = &PTR_FUN_143f3ecf8;
  _DAT_146af2808 = (**(code **)(*DAT_146af2800 + 0x38))(DAT_146af2800);
  atexit(FUN_143eabb10);
  return;
}



// FUNCTION 14033c800 `dynamic_initializer_for_'CVarWithDemoTimeBurnIn'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarWithDemoTimeBurnIn''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarWithDemoTimeBurnIn__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af2758 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"demo.WithTimeBurnIn",0,
                  L"If true, adds an on screen message with the current DemoTime and Changelist.",0)
  ;
  _DAT_146af2750 = &PTR_FUN_143f3ecf8;
  DAT_146af2760 = (**(code **)(*DAT_146af2758 + 0x38))(DAT_146af2758);
  atexit(FUN_143eabb60);
  return;
}



// FUNCTION 14033c870 `dynamic_initializer_for_'CVarWithLevelStreamingFixes'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarWithLevelStreamingFixes''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarWithLevelStreamingFixes__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af2740 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"demo.WithLevelStreamingFixes",0,
                  L"If 1, provides fixes for level streaming (but breaks backwards compatibility).",
                  0);
  _DAT_146af2738 = &PTR_FUN_143f3ecf8;
  DAT_146af2748 = (**(code **)(*DAT_146af2740 + 0x38))(DAT_146af2740);
  atexit(FUN_143eabbb0);
  return;
}



// FUNCTION 14033c930 `dynamic_initializer_for_'GDistanceFieldVolumeTextureAtlas'' body=182 status=ok
// SIG undefined `dynamic_initializer_for_'GDistanceFieldVolumeTextureAtlas''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GDistanceFieldVolumeTextureAtlas__(void)

{
  char cVar1;
  undefined8 *puVar2;
  
  TArray<FTextureLayout3d::FTextureLayoutNode3d,TInlineAllocator<5,FDefaultAllocator>_>::ResizeGrow
            (&DAT_146532090);
  puVar2 = DAT_146532108;
  if (DAT_146532108 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)&DAT_146532090;
  }
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0xffffffffffffffff;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    *(undefined1 *)((longlong)puVar2 + 0x14) = 0;
  }
  DAT_146532118 = 0;
  PTR_PTR_146532040 = (undefined *)&PTR__scalar_deleting_destructor__145092f88;
  _DAT_146532120 = 0;
  DAT_146532128 = 0;
  _DAT_146532130 = 0;
  DAT_14653213c = 0;
  DAT_146532138 = 0;
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    (**(code **)(PTR_PTR_146532040 + 0x28))();
    atexit(_dynamic_atexit_destructor_for__GDistanceFieldVolumeTextureAtlas__);
    return;
  }
  FUN_141edf270(&PTR_PTR_146532040);
  atexit(_dynamic_atexit_destructor_for__GDistanceFieldVolumeTextureAtlas__);
  return;
}



// FUNCTION 14033cb30 `dynamic_initializer_for_'AbnormalSessionToken'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AbnormalSessionToken''(void)

void SessionManagerDefs::_dynamic_initializer_for__AbnormalSessionToken__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1465323c0,0);
  FGenericPlatformString::Memcpy(DAT_1465323c0,L"AbnormalShutdown",0x22);
  atexit((_func_5014 *)&LAB_143eabd10);
  return;
}



// FUNCTION 14033cb70 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1465322f0,0);
  FGenericPlatformString::Memcpy(DAT_1465322f0,L"AutogeneratedDefaultValue",0x34);
  atexit((_func_5014 *)&LAB_143eabd30);
  return;
}



// FUNCTION 14033cbb0 `dynamic_initializer_for_'BackgroundStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'BackgroundStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__BackgroundStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1465324a0,0);
  FGenericPlatformString::Memcpy(DAT_1465324a0,L"IsInBackground",0x1e);
  atexit((_func_5014 *)&LAB_143eabd50);
  return;
}



// FUNCTION 14033cbf0 `dynamic_initializer_for_'CVarCPUBoundScreenPercentage'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarCPUBoundScreenPercentage''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarCPUBoundScreenPercentage__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af33d0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.DynamicRes.CPUBoundScreenPercentage",0x42c80000,
                  L"Screen percentage to converge to when CPU bound. This can be used when GPU and CPU share same memory."
                  ,0x20);
  _DAT_146af33c8 = &PTR_FUN_143f3ecf8;
  DAT_146af33d8 = (**(code **)(*DAT_146af33d0 + 0x40))(DAT_146af33d0);
  atexit(FUN_143eabd70);
  return;
}



// FUNCTION 14033cc70 `dynamic_initializer_for_'CVarCPUTimeHeadRoom'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarCPUTimeHeadRoom''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarCPUTimeHeadRoom__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af32f8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.DynamicRes.CPUTimeHeadRoom",0x3f800000,
                  L"Head room for the threads compared GPU time to avoid keep getting resolution fraction shrinking down when CPU bound (in milliseconds)."
                  ,0x20);
  _DAT_146af32f0 = &PTR_FUN_143f3ecf8;
  DAT_146af3300 = (**(code **)(*DAT_146af32f8 + 0x40))(DAT_146af32f8);
  atexit(FUN_143eabdc0);
  return;
}



// FUNCTION 14033ccf0 `dynamic_initializer_for_'CVarChangeThreshold'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarChangeThreshold''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarChangeThreshold__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af3388 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.DynamicRes.ChangePercentageThreshold",0x40000000,
                  L"Minimal increase percentage threshold to alow when changing resolution.",0x20);
  _DAT_146af3380 = &PTR_FUN_143f3ecf8;
  DAT_146af3390 = (**(code **)(*DAT_146af3388 + 0x40))(DAT_146af3388);
  atexit(FUN_143eabe10);
  return;
}



// FUNCTION 14033cd70 FUN_14033cd70 body=100 status=ok
// SIG undefined FUN_14033cd70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14033cd70(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af3400 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"DisableOrphanPins",&DAT_146af29e8,
                  L"0=Orphan pins are enabled (default), 1=Orphan pins are disabled (note: this option will go away in the future)"
                  ,0);
  _DAT_146af33f8 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eabe60);
  return;
}



// FUNCTION 14033cde0 `dynamic_initializer_for_'CVarDynamicResMaxSP'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDynamicResMaxSP''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDynamicResMaxSP__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af32b0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.DynamicRes.MaxScreenPercentage",0x42c80000,
                  L"Maximal screen percentage.",0);
  _DAT_146af32a8 = &PTR_FUN_143f3ecf8;
  DAT_146af32b8 = (**(code **)(*DAT_146af32b0 + 0x40))(DAT_146af32b0);
  atexit(FUN_143eabeb0);
  return;
}



// FUNCTION 14033ce60 `dynamic_initializer_for_'CVarDynamicResMinSP'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDynamicResMinSP''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDynamicResMinSP__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af3298 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.DynamicRes.MinScreenPercentage",0x42480000,
                  L"Minimal screen percentage.",0x20);
  _DAT_146af3290 = &PTR_FUN_143f3ecf8;
  DAT_146af32a0 = (**(code **)(*DAT_146af3298 + 0x40))(DAT_146af3298);
  atexit(FUN_143eabf00);
  return;
}



// FUNCTION 14033cee0 `dynamic_initializer_for_'CVarEnableMultiplayerWorldOriginRebasing'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarEnableMultiplayerWorldOriginRebasing''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarEnableMultiplayerWorldOriginRebasing__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af3468 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"p.EnableMultiplayerWorldOriginRebasing",&DAT_146af29d8,
                  L"Enable world origin rebasing for multiplayer, meaning that servers and clients can have different world origin locations."
                  ,4);
  _DAT_146af3460 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eabf50);
  return;
}



// FUNCTION 14033cf50 `dynamic_initializer_for_'CVarFrameChangePeriod'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFrameChangePeriod''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFrameChangePeriod__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af3358 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.DynamicRes.MinResolutionChangePeriod",8,
                  L"Minimal number of frames between resolution changes, important to avoid input sample position interferences in TAA upsample."
                  ,0x20);
  _DAT_146af3350 = &PTR_FUN_143f3ecf8;
  DAT_146af3360 = (**(code **)(*DAT_146af3358 + 0x38))(DAT_146af3358);
  atexit(FUN_143eabfa0);
  return;
}



// FUNCTION 14033cfd0 `dynamic_initializer_for_'CVarFrameTimeBudget'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFrameTimeBudget''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFrameTimeBudget__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af32c8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.DynamicRes.FrameTimeBudget",0x42053333,
                  L"Frame\'s time budget in milliseconds.",0x20);
  _DAT_146af32c0 = &PTR_FUN_143f3ecf8;
  DAT_146af32d0 = (**(code **)(*DAT_146af32c8 + 0x40))(DAT_146af32c8);
  atexit(FUN_143eabff0);
  return;
}



// FUNCTION 14033d050 `dynamic_initializer_for_'CVarFrameWeightExponent'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFrameWeightExponent''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFrameWeightExponent__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af3340 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.DynamicRes.FrameWeightExponent",0x3f666666,
                  L"Recursive weight of frame N-1 against frame N.",0x20);
  _DAT_146af3338 = &PTR_FUN_143f3ecf8;
  DAT_146af3348 = (**(code **)(*DAT_146af3340 + 0x40))(DAT_146af3340);
  atexit(FUN_143eac040);
  return;
}



// FUNCTION 14033d0d0 `dynamic_initializer_for_'CVarHistorySize'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarHistorySize''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarHistorySize__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af3310 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.DynamicRes.HistorySize",0x10,
                  L"Number of frames keept in the history.",0x20);
  _DAT_146af3308 = &PTR_FUN_143f3ecf8;
  DAT_146af3318 = (**(code **)(*DAT_146af3310 + 0x38))(DAT_146af3310);
  atexit(FUN_143eac090);
  return;
}



// FUNCTION 14033d150 `dynamic_initializer_for_'CVarIncreaseAmortizationFactor'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarIncreaseAmortizationFactor''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarIncreaseAmortizationFactor__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af3370 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.DynamicRes.IncreaseAmortizationBlendFactor",0x3f666666,
                  L"Amortization blend factor when scale resolution back up to reduce resolution fraction oscillations."
                  ,0x20);
  _DAT_146af3368 = &PTR_FUN_143f3ecf8;
  DAT_146af3378 = (**(code **)(*DAT_146af3370 + 0x40))(DAT_146af3370);
  atexit(FUN_143eac0e0);
  return;
}



// FUNCTION 14033d1d0 `dynamic_initializer_for_'CVarReplayStreamerAutoDemoPrefix'' body=181 status=ok
// SIG undefined `dynamic_initializer_for_'CVarReplayStreamerAutoDemoPrefix''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarReplayStreamerAutoDemoPrefix__(void)

{
  longlong local_18 [3];
  
  local_18[0] = 0;
  local_18[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"High",10);
  if (DAT_1468b1f88 == (undefined8 *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af3478 =
       (longlong *)
       (**(code **)*DAT_1468b1f88)
                 (DAT_1468b1f88,L"r.LODDetailSetting",local_18,
                  L"Detail setting for mesh LODs (High, Medium, Low).",0);
  _DAT_146af3470 = &PTR_FUN_143f3ecf8;
  DAT_146af3480 = (**(code **)(*DAT_146af3478 + 0x48))(DAT_146af3478);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  atexit(FUN_143eac130);
  return;
}



// FUNCTION 14033d290 `dynamic_initializer_for_'CVarMaxConsecutiveOverbudgetGPUFrameCount'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarMaxConsecutiveOverbudgetGPUFrameCount''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarMaxConsecutiveOverbudgetGPUFrameCount__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af33a0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.DynamicRes.MaxConsecutiveOverbudgetGPUFrameCount",2,
                  L"Maximum number of consecutive frame tolerated over GPU budget.",0x20);
  _DAT_146af3398 = &PTR_FUN_143f3ecf8;
  DAT_146af33a8 = (**(code **)(*DAT_146af33a0 + 0x38))(DAT_146af33a0);
  atexit(FUN_143eac180);
  return;
}



// FUNCTION 14033d310 `dynamic_initializer_for_'CVarOutlierThreshold'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarOutlierThreshold''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarOutlierThreshold__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af3328 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.DynamicRes.OutlierThreshold",0,
                  L"Ignore frame timing that have Game thread or render thread X time more than frame budget."
                  ,0x20);
  _DAT_146af3320 = &PTR_FUN_143f3ecf8;
  DAT_146af3330 = (**(code **)(*DAT_146af3328 + 0x40))(DAT_146af3328);
  atexit(FUN_143eac1d0);
  return;
}



// FUNCTION 14033d380 `dynamic_initializer_for_'CVarTargetedGPUHeadRoomPercentage'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarTargetedGPUHeadRoomPercentage''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarTargetedGPUHeadRoomPercentage__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af32e0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.DynamicRes.TargetedGPUHeadRoomPercentage",0x41200000,
                  L"Targeted GPU headroom (in percent from r.DynamicRes.FrameTimeBudget).",0x20);
  _DAT_146af32d8 = &PTR_FUN_143f3ecf8;
  DAT_146af32e8 = (**(code **)(*DAT_146af32e0 + 0x40))(DAT_146af32e0);
  atexit(FUN_143eac220);
  return;
}



// FUNCTION 14033d400 `dynamic_initializer_for_'CVarTimingMeasureModel'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarTimingMeasureModel''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarTimingMeasureModel__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af33b8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.DynamicRes.GPUTimingMeasureMethod",0,
                  L"Selects the method to use to measure GPU timings.\n 0: Same as stat unit (default);\n 1: Timestamp queries."
                  ,0x20);
  _DAT_146af33b0 = &PTR_FUN_143f3ecf8;
  DAT_146af33c0 = (**(code **)(*DAT_146af33b8 + 0x38))(DAT_146af33b8);
  atexit(FUN_143eac270);
  return;
}



// FUNCTION 14033d470 `dynamic_initializer_for_'CommandLineStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'CommandLineStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__CommandLineStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146532460,0);
  FGenericPlatformString::Memcpy(DAT_146532460,L"CommandLine",0x18);
  atexit((_func_5014 *)&LAB_143eac2c0);
  return;
}



// FUNCTION 14033d4b0 `dynamic_initializer_for_'CrashSessionToken'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'CrashSessionToken''(void)

void SessionManagerDefs::_dynamic_initializer_for__CrashSessionToken__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1465323a0,0);
  FGenericPlatformString::Memcpy(DAT_1465323a0,L"Crashed",0x10);
  atexit((_func_5014 *)&LAB_143eac2e0);
  return;
}



// FUNCTION 14033d4f0 `dynamic_initializer_for_'CrashStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'CrashStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__CrashStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146532470,0);
  FGenericPlatformString::Memcpy(DAT_146532470,L"IsCrash",0x10);
  atexit((_func_5014 *)&LAB_143eac300);
  return;
}



// FUNCTION 14033d530 `dynamic_initializer_for_'DeactivatedStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'DeactivatedStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__DeactivatedStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146532490,0);
  FGenericPlatformString::Memcpy(DAT_146532490,L"IsDeactivated",0x1c);
  atexit((_func_5014 *)&LAB_143eac320);
  return;
}



// FUNCTION 14033d570 `dynamic_initializer_for_'DebuggerSessionToken'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'DebuggerSessionToken''(void)

void SessionManagerDefs::_dynamic_initializer_for__DebuggerSessionToken__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1465323b0,0);
  FGenericPlatformString::Memcpy(DAT_1465323b0,L"Debugger",0x12);
  atexit((_func_5014 *)&LAB_143eac340);
  return;
}



// FUNCTION 14033d5b0 `dynamic_initializer_for_'DebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'DebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__DebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146532510,0);
  FGenericPlatformString::Memcpy(DAT_146532510,L"IsDebugger",0x16);
  atexit((_func_5014 *)&LAB_143eac360);
  return;
}



// FUNCTION 14033d5f0 `dynamic_initializer_for_'DefaultObjectName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'DefaultObjectName''(void)

void PinHelpers::_dynamic_initializer_for__DefaultObjectName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146532300,0);
  FGenericPlatformString::Memcpy(DAT_146532300,L"DefaultObject",0x1c);
  atexit((_func_5014 *)&LAB_143eac380);
  return;
}



// FUNCTION 14033d630 `dynamic_initializer_for_'DefaultTextValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'DefaultTextValueName''(void)

void PinHelpers::_dynamic_initializer_for__DefaultTextValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146532310,0);
  FGenericPlatformString::Memcpy(DAT_146532310,L"DefaultTextValue",0x22);
  atexit((_func_5014 *)&LAB_143eac3a0);
  return;
}



// FUNCTION 14033d670 `dynamic_initializer_for_'DefaultUserActivity'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'DefaultUserActivity''(void)

void SessionManagerDefs::_dynamic_initializer_for__DefaultUserActivity__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146532360,0);
  FGenericPlatformString::Memcpy(DAT_146532360,L"Unknown",0x10);
  atexit((_func_5014 *)&LAB_143eac3c0);
  return;
}



// FUNCTION 14033d6b0 `dynamic_initializer_for_'DefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'DefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__DefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1465322e0,0);
  FGenericPlatformString::Memcpy(DAT_1465322e0,L"DefaultValue",0x1a);
  atexit((_func_5014 *)&LAB_143eac3e0);
  return;
}



// FUNCTION 14033d700 `dynamic_initializer_for_'DirectionName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'DirectionName''(void)

void PinHelpers::_dynamic_initializer_for__DirectionName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1465322c0,0);
  FGenericPlatformString::Memcpy(DAT_1465322c0,L"Direction",0x14);
  atexit((_func_5014 *)&LAB_143eac430);
  return;
}



// FUNCTION 14033d740 `dynamic_initializer_for_'EditorSessionRecordSectionPrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'EditorSessionRecordSectionPrefix''(void)

void SessionManagerDefs::_dynamic_initializer_for__EditorSessionRecordSectionPrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1465323f0,0);
  FGenericPlatformString::Memcpy(DAT_1465323f0,L"Unreal Engine/Editor Sessions/",0x3e);
  atexit((_func_5014 *)&LAB_143eac450);
  return;
}



// FUNCTION 14033d780 `dynamic_initializer_for_'EditorValueString'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'EditorValueString''(void)

void SessionManagerDefs::_dynamic_initializer_for__EditorValueString__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146532580,0);
  FGenericPlatformString::Memcpy(DAT_146532580,L"Editor",0xe);
  atexit((_func_5014 *)&LAB_143eac470);
  return;
}



// FUNCTION 14033d7c0 `dynamic_initializer_for_'EngineVersionStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'EngineVersionStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__EngineVersionStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1465324c0,0);
  FGenericPlatformString::Memcpy(DAT_1465324c0,L"EngineVersion",0x1c);
  atexit((_func_5014 *)&LAB_143eac490);
  return;
}



// FUNCTION 14033d800 FUN_14033d800 body=59 status=ok
// SIG undefined FUN_14033d800(void)

void FUN_14033d800(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146532560,0);
  FGenericPlatformString::Memcpy(DAT_146532560,&DAT_145099c9c,4);
  atexit((_func_5014 *)&LAB_143eac4b0);
  return;
}



// FUNCTION 14033d850 FUN_14033d850 body=158 status=ok
// SIG undefined FUN_14033d850(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14033d850(void)

{
  char cVar1;
  
  TResourcePool<TRefCountPtr<FRHIIndexBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>::
  TResourcePool<TRefCountPtr<FRHIIndexBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>
            (&DAT_146af29f0);
  _DAT_146af2e08 = 0;
  _DAT_146af29f0 = &PTR__scalar_deleting_destructor__14509d150;
  _DAT_146af2e18 = 4;
  _DAT_146af2e00 = &PTR_LAB_14509d158;
  DAT_146af2e10 = &PTR_LAB_14509d180;
  _DAT_146af2e20 = 0;
  uRam0000000146af2e28 = 0;
  DAT_146af2e38 = 0;
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    (*(code *)DAT_146af2e10[5])();
    atexit(FUN_143eac4d0);
    return;
  }
  FUN_141edf270(&DAT_146af2e10);
  atexit(FUN_143eac4d0);
  return;
}



// FUNCTION 14033d8f0 FUN_14033d8f0 body=158 status=ok
// SIG undefined FUN_14033d8f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14033d8f0(void)

{
  char cVar1;
  
  TResourcePool<TRefCountPtr<FRHIIndexBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>::
  TResourcePool<TRefCountPtr<FRHIIndexBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>
            (&DAT_146af2e40);
  _DAT_146af3258 = 0;
  _DAT_146af2e40 = &PTR__scalar_deleting_destructor__14509d150;
  _DAT_146af3268 = 4;
  _DAT_146af3250 = &PTR_LAB_14509d158;
  DAT_146af3260 = &PTR_LAB_14509d180;
  _DAT_146af3270 = 0;
  uRam0000000146af3278 = 0;
  DAT_146af3288 = 0;
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    (*(code *)DAT_146af3260[5])();
    atexit(FUN_143eac570);
    return;
  }
  FUN_141edf270(&DAT_146af3260);
  atexit(FUN_143eac570);
  return;
}



// FUNCTION 14033d990 `dynamic_initializer_for_'GPUCrashStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'GPUCrashStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__GPUCrashStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146532480,0);
  FGenericPlatformString::Memcpy(DAT_146532480,L"IsGPUCrash",0x16);
  atexit((_func_5014 *)&LAB_143eac610);
  return;
}



// FUNCTION 14033d9d0 `dynamic_initializer_for_'GameSessionRecordSectionPrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'GameSessionRecordSectionPrefix''(void)

void SessionManagerDefs::_dynamic_initializer_for__GameSessionRecordSectionPrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146532400,0);
  FGenericPlatformString::Memcpy(DAT_146532400,L"Unreal Engine/Game Sessions/",0x3a);
  atexit((_func_5014 *)&LAB_143eac630);
  return;
}



// FUNCTION 14033da10 `dynamic_initializer_for_'GameValueString'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'GameValueString''(void)

void SessionManagerDefs::_dynamic_initializer_for__GameValueString__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146532590,0);
  FGenericPlatformString::Memcpy(DAT_146532590,L"Game",10);
  atexit((_func_5014 *)&LAB_143eac650);
  return;
}



// FUNCTION 14033da50 `dynamic_initializer_for_'GlobalLockName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'GlobalLockName''(void)

void SessionManagerDefs::_dynamic_initializer_for__GlobalLockName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146532550,0);
  FGenericPlatformString::Memcpy(DAT_146532550,L"UE4_SessionManager_Lock",0x30);
  atexit((_func_5014 *)&LAB_143eac670);
  return;
}



// FUNCTION 14033dac0 `dynamic_initializer_for_'LinkedToName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'LinkedToName''(void)

void PinHelpers::_dynamic_initializer_for__LinkedToName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146532320,0);
  FGenericPlatformString::Memcpy(DAT_146532320,L"LinkedTo",0x12);
  atexit((_func_5014 *)&LAB_143eac6b0);
  return;
}



// FUNCTION 14033db00 `dynamic_initializer_for_'ModeStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'ModeStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__ModeStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146532440,0);
  FGenericPlatformString::Memcpy(DAT_146532440,L"Mode",10);
  atexit((_func_5014 *)&LAB_143eac6d0);
  return;
}



// FUNCTION 14033db40 `dynamic_initializer_for_'PS4SessionToken'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PS4SessionToken''(void)

void SessionManagerDefs::_dynamic_initializer_for__PS4SessionToken__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1465323d0,0);
  FGenericPlatformString::Memcpy(DAT_1465323d0,L"AbnormalShutdownPS4",0x28);
  atexit((_func_5014 *)&LAB_143eac6f0);
  return;
}



// FUNCTION 14033db80 `dynamic_initializer_for_'ParentPinName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'ParentPinName''(void)

void PinHelpers::_dynamic_initializer_for__ParentPinName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146532340,0);
  FGenericPlatformString::Memcpy(DAT_146532340,L"ParentPin",0x14);
  atexit((_func_5014 *)&LAB_143eac710);
  return;
}



// FUNCTION 14033dbc0 `dynamic_initializer_for_'PinIdName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PinIdName''(void)

void PinHelpers::_dynamic_initializer_for__PinIdName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146532290,0);
  FGenericPlatformString::Memcpy(DAT_146532290,L"PinId",0xc);
  atexit((_func_5014 *)&LAB_143eac730);
  return;
}



// FUNCTION 14033dc00 `dynamic_initializer_for_'PinNameName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PinNameName''(void)

void PinHelpers::_dynamic_initializer_for__PinNameName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1465322a0,0);
  FGenericPlatformString::Memcpy(DAT_1465322a0,L"PinName",0x10);
  atexit((_func_5014 *)&LAB_143eac750);
  return;
}



// FUNCTION 14033dc40 `dynamic_initializer_for_'PinToolTipName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PinToolTipName''(void)

void PinHelpers::_dynamic_initializer_for__PinToolTipName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1465322b0,0);
  FGenericPlatformString::Memcpy(DAT_1465322b0,L"PinToolTip",0x16);
  atexit((_func_5014 *)&LAB_143eac770);
  return;
}



// FUNCTION 14033dc80 `dynamic_initializer_for_'PinTypeName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PinTypeName''(void)

void PinHelpers::_dynamic_initializer_for__PinTypeName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1465322d0,0);
  FGenericPlatformString::Memcpy(DAT_1465322d0,L"PinType",0x10);
  atexit((_func_5014 *)&LAB_143eac790);
  return;
}



// FUNCTION 14033dcc0 `dynamic_initializer_for_'ProjectNameStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'ProjectNameStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__ProjectNameStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146532450,0);
  FGenericPlatformString::Memcpy(DAT_146532450,L"ProjectName",0x18);
  atexit((_func_5014 *)&LAB_143eac7b0);
  return;
}



// FUNCTION 14033dd00 `dynamic_initializer_for_'ReferencePassThroughConnectionName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'ReferencePassThroughConnectionName''(void)

void PinHelpers::_dynamic_initializer_for__ReferencePassThroughConnectionName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146532350,0);
  FGenericPlatformString::Memcpy(DAT_146532350,L"ReferencePassThroughConnection",0x3e);
  atexit((_func_5014 *)&LAB_143eac7d0);
  return;
}



// FUNCTION 14033dd40 `dynamic_initializer_for_'RunningSessionToken'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'RunningSessionToken''(void)

void SessionManagerDefs::_dynamic_initializer_for__RunningSessionToken__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146532380,0);
  FGenericPlatformString::Memcpy(DAT_146532380,L"Running",0x10);
  atexit((_func_5014 *)&LAB_143eac7f0);
  return;
}



// FUNCTION 14033dd80 FUN_14033dd80 body=59 status=ok
// SIG undefined FUN_14033dd80(void)

void FUN_14033dd80(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1465324f0,0);
  FGenericPlatformString::Memcpy(DAT_1465324f0,L"SessionId",0x14);
  atexit((_func_5014 *)&LAB_143eac810);
  return;
}



// FUNCTION 14033dde0 `dynamic_initializer_for_'SessionRecordListSection'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'SessionRecordListSection''(void)

void SessionManagerDefs::_dynamic_initializer_for__SessionRecordListSection__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1465323e0,0);
  FGenericPlatformString::Memcpy(DAT_1465323e0,L"List",10);
  atexit((_func_5014 *)&LAB_143eac830);
  return;
}



// FUNCTION 14033de40 `dynamic_initializer_for_'SessionsVersionString'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'SessionsVersionString''(void)

void SessionManagerDefs::_dynamic_initializer_for__SessionsVersionString__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146532420,0);
  FGenericPlatformString::Memcpy(DAT_146532420,&DAT_14509a498,8);
  atexit((_func_5014 *)&LAB_143eac850);
  return;
}



// FUNCTION 14033de80 `dynamic_initializer_for_'ShutdownSessionToken'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'ShutdownSessionToken''(void)

void SessionManagerDefs::_dynamic_initializer_for__ShutdownSessionToken__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146532390,0);
  FGenericPlatformString::Memcpy(DAT_146532390,L"Shutdown",0x12);
  atexit((_func_5014 *)&LAB_143eac870);
  return;
}



// FUNCTION 14033dec0 `dynamic_initializer_for_'StartupTimeStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'StartupTimeStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__StartupTimeStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1465324e0,0);
  FGenericPlatformString::Memcpy(DAT_1465324e0,L"StartupTimestamp",0x22);
  atexit((_func_5014 *)&LAB_143eac890);
  return;
}



// FUNCTION 14033df00 `dynamic_initializer_for_'StatusStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'StatusStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__StatusStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146532500,0);
  FGenericPlatformString::Memcpy(DAT_146532500,L"LastExecutionState",0x26);
  atexit((_func_5014 *)&LAB_143eac8b0);
  return;
}



// FUNCTION 14033df40 `dynamic_initializer_for_'StoreId'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'StoreId''(void)

void SessionManagerDefs::_dynamic_initializer_for__StoreId__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146532370,0);
  FGenericPlatformString::Memcpy(DAT_146532370,L"Epic Games",0x16);
  atexit((_func_5014 *)&LAB_143eac8d0);
  return;
}



// FUNCTION 14033df80 `dynamic_initializer_for_'SubPinsName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'SubPinsName''(void)

void PinHelpers::_dynamic_initializer_for__SubPinsName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146532330,0);
  FGenericPlatformString::Memcpy(DAT_146532330,L"SubPins",0x10);
  atexit((_func_5014 *)&LAB_143eac8f0);
  return;
}



// FUNCTION 14033dfc0 `dynamic_initializer_for_'TerminatingKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'TerminatingKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__TerminatingKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1465324b0,0);
  FGenericPlatformString::Memcpy(DAT_1465324b0,L"Terminating",0x18);
  atexit((_func_5014 *)&LAB_143eac910);
  return;
}



// FUNCTION 14033e000 `dynamic_initializer_for_'TimestampStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'TimestampStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__TimestampStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1465324d0,0);
  FGenericPlatformString::Memcpy(DAT_1465324d0,L"Timestamp",0x14);
  atexit((_func_5014 *)&LAB_143eac930);
  return;
}



// FUNCTION 14033e040 FUN_14033e040 body=59 status=ok
// SIG undefined FUN_14033e040(void)

void FUN_14033e040(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146532570,0);
  FGenericPlatformString::Memcpy(DAT_146532570,&DAT_145099cf4,4);
  atexit((_func_5014 *)&LAB_143eac950);
  return;
}



// FUNCTION 14033e080 `dynamic_initializer_for_'UnknownProjectValueString'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'UnknownProjectValueString''(void)

void SessionManagerDefs::_dynamic_initializer_for__UnknownProjectValueString__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1465325a0,0);
  FGenericPlatformString::Memcpy(DAT_1465325a0,L"UnknownProject",0x1e);
  atexit((_func_5014 *)&LAB_143eac970);
  return;
}



// FUNCTION 14033e0e0 `dynamic_initializer_for_'UserActivityStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'UserActivityStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__UserActivityStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146532530,0);
  FGenericPlatformString::Memcpy(DAT_146532530,L"CurrentUserActivity",0x28);
  atexit((_func_5014 *)&LAB_143eac9f0);
  return;
}



// FUNCTION 14033e120 `dynamic_initializer_for_'VanillaStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VanillaStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__VanillaStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146532540,0);
  FGenericPlatformString::Memcpy(DAT_146532540,L"IsVanilla",0x14);
  atexit((_func_5014 *)&LAB_143eaca10);
  return;
}



// FUNCTION 14033e160 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146532520,0);
  FGenericPlatformString::Memcpy(DAT_146532520,L"WasEverDebugger",0x20);
  atexit((_func_5014 *)&LAB_143eaca30);
  return;
}



// FUNCTION 14033e1a0 `dynamic_initializer_for_'WatchdogRecordSectionPrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WatchdogRecordSectionPrefix''(void)

void SessionManagerDefs::_dynamic_initializer_for__WatchdogRecordSectionPrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146532410,0);
  FGenericPlatformString::Memcpy(DAT_146532410,L"Unreal Engine/Watchdog/",0x30);
  atexit((_func_5014 *)&LAB_143eaca50);
  return;
}



// FUNCTION 14033e1e0 `dynamic_initializer_for_'WatchdogVersionString'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WatchdogVersionString''(void)

void SessionManagerDefs::_dynamic_initializer_for__WatchdogVersionString__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146532430,0);
  FGenericPlatformString::Memcpy(DAT_146532430,&DAT_14509a4a0,8);
  atexit((_func_5014 *)&LAB_143eaca70);
  return;
}



// FUNCTION 14033e2b0 FUN_14033e2b0 body=100 status=ok
// SIG undefined FUN_14033e2b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14033e2b0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af3858 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.AllowViewportDrawDuringLoadingMovies",&DAT_146af37fc,
                  L"0: Viewport draw is disabled when loading movies are playing\n1: Viewport draw is enabled when loading movies are playing, with present = true (epic default)\n2: Viewport draw is enabled when loading movies are playing, with present = false"
                  ,0);
  _DAT_146af3850 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eacb20);
  return;
}



// FUNCTION 14033e320 `dynamic_initializer_for_'CVarDoAsyncEndOfFrameTasks'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDoAsyncEndOfFrameTasks''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDoAsyncEndOfFrameTasks__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af3848 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"tick.DoAsyncEndOfFrameTasks",&DAT_146af37f8,
                  L"Experimental option to run various things concurrently with the HUD render.",0);
  _DAT_146af3840 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eacb70);
  return;
}



// FUNCTION 14033e390 `dynamic_initializer_for_'CvarSlowFrameLoggingThreshold'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CvarSlowFrameLoggingThreshold''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CvarSlowFrameLoggingThreshold__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af3838 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"t.SlowFrameLoggingThreshold",&DAT_146af37f4,
                  L"How slow must a frame be (in seconds) to be logged out (<= 0 to disable).",0);
  _DAT_146af3830 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eacbc0);
  return;
}



// FUNCTION 14033e4b0 FUN_14033e4b0 body=269 status=ok
// SIG undefined FUN_14033e4b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14033e4b0(void)

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
    *plVar1 = (longlong)&PTR_GetPoolName_1444d51e8;
    plVar1[1] = (longlong)RunSynthBenchmark;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_1444d5230;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af3868 =
       (**(code **)(*DAT_1468b1f88 + 0x80))
                 (DAT_1468b1f88,L"SynthBenchmark",
                  L"Run simple benchmark to get some metrics to find reasonable game settings automatically\nOptional (float) parameter allows to scale with work amount to trade time or precision (default: 10)."
                  ,&local_18,0);
  _DAT_146af3860 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_14033e5ac;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_14033e5ac:
  atexit(FUN_143eacc10);
  return;
}



// FUNCTION 14033e840 FUN_14033e840 body=170 status=ok
// SIG undefined FUN_14033e840(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14033e840(void)

{
  FShaderType::FShaderType
            (&DAT_146af5270,0,L"FGbxColorRemapLUTFillCS<1 GBX_COMMA DCRS_NegativeIdentity>",
             L"/Engine/Private/GbxColorRemapLUTFillCS.usf",L"CSMain",5,1,FUN_1424777d0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146af5270 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146af53a0 = FUN_1424776b0;
  _DAT_146af53a8 = &LAB_142490510;
  _DAT_146af53b0 = BuildSettings::IsPromotedBuild;
  _DAT_146af53b8 = FUN_1424872d0;
  atexit((_func_5014 *)&LAB_143eace10);
  return;
}



// FUNCTION 14033e8f0 FUN_14033e8f0 body=170 status=ok
// SIG undefined FUN_14033e8f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14033e8f0(void)

{
  FShaderType::FShaderType
            (&DAT_146af53c0,0,L"FGbxColorRemapLUTFillCS<1 GBX_COMMA DCRS_FlattenedTexture2D>",
             L"/Engine/Private/GbxColorRemapLUTFillCS.usf",L"CSMain",5,1,FUN_1424777d0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146af53c0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146af54f0 = FUN_1424776b0;
  _DAT_146af54f8 = &LAB_142490510;
  _DAT_146af5500 = BuildSettings::IsPromotedBuild;
  _DAT_146af5508 = FUN_1424873a0;
  atexit((_func_5014 *)&LAB_143eace20);
  return;
}



// FUNCTION 14033e9a0 FUN_14033e9a0 body=170 status=ok
// SIG undefined FUN_14033e9a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14033e9a0(void)

{
  FShaderType::FShaderType
            (&DAT_146af5510,0,L"FGbxColorRemapLUTFillCS<1 GBX_COMMA DCRS_PostProcessSettings>",
             L"/Engine/Private/GbxColorRemapLUTFillCS.usf",L"CSMain",5,1,FUN_1424777d0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146af5510 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146af5640 = FUN_1424776b0;
  _DAT_146af5648 = &LAB_142490510;
  _DAT_146af5650 = BuildSettings::IsPromotedBuild;
  _DAT_146af5658 = FUN_142487470;
  atexit((_func_5014 *)&LAB_143eace30);
  return;
}



// FUNCTION 14033ea50 FUN_14033ea50 body=170 status=ok
// SIG undefined FUN_14033ea50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14033ea50(void)

{
  FShaderType::FShaderType
            (&DAT_146af5120,0,L"FGbxColorRemapLUTFillCS<1 GBX_COMMA DCRS_Identity>",
             L"/Engine/Private/GbxColorRemapLUTFillCS.usf",L"CSMain",5,1,FUN_1424777d0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146af5120 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146af5250 = FUN_1424776b0;
  _DAT_146af5258 = &LAB_142490510;
  _DAT_146af5260 = BuildSettings::IsPromotedBuild;
  _DAT_146af5268 = FUN_142487540;
  atexit((_func_5014 *)&LAB_143eace40);
  return;
}



// FUNCTION 14033eb00 FUN_14033eb00 body=266 status=ok
// SIG undefined FUN_14033eb00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14033eb00(void)

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
    plVar1[1] = (longlong)FUN_142476580;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143fca768;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af4da0 =
       (**(code **)(*DAT_1468b1f88 + 0x70))
                 (DAT_1468b1f88,L"gbx.ColorRemapLUT.ReInit",&DAT_1450ae1ac,&local_18,0);
  _DAT_146af4d98 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_14033ebf9;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_14033ebf9:
  atexit(FUN_143eace50);
  return;
}



// FUNCTION 14033ec10 FUN_14033ec10 body=266 status=ok
// SIG undefined FUN_14033ec10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14033ec10(void)

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
    plVar1[1] = (longlong)FUN_1424767a0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143fca768;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af4d90 =
       (**(code **)(*DAT_1468b1f88 + 0x70))
                 (DAT_1468b1f88,L"gbx.ColorRemapLUT.Reregister",&DAT_1450adedc,&local_18,0);
  _DAT_146af4d88 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_14033ed09;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_14033ed09:
  atexit(FUN_143eacea0);
  return;
}



// FUNCTION 14033ed20 FUN_14033ed20 body=269 status=ok
// SIG undefined FUN_14033ed20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14033ed20(void)

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
    *plVar1 = (longlong)&PTR_GetPoolName_1444d51e8;
    plVar1[1] = (longlong)FUN_142476a70;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_1444d5230;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af4e90 =
       (**(code **)(*DAT_1468b1f88 + 0x80))
                 (DAT_1468b1f88,L"GbxCoreStat.Benchmark",
                  L"Initiates benchmarking core stats \nUsage: GbxCoreStat.Benchmark [NumSeconds=10]"
                  ,&local_18,0);
  _DAT_146af4e88 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_14033ee1c;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_14033ee1c:
  atexit(FUN_143eacef0);
  return;
}



// FUNCTION 14033ee30 FUN_14033ee30 body=266 status=ok
// SIG undefined FUN_14033ee30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14033ee30(void)

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
    plVar1[1] = (longlong)FUN_142476fb0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143fca768;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af4ea0 =
       (**(code **)(*DAT_1468b1f88 + 0x70))
                 (DAT_1468b1f88,L"gbxEcho",L"logs out a string with the arguments given",&local_18,0
                 );
  _DAT_146af4e98 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_14033ef29;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_14033ef29:
  atexit(FUN_143eacf40);
  return;
}



// FUNCTION 14033ef40 FUN_14033ef40 body=266 status=ok
// SIG undefined FUN_14033ef40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14033ef40(void)

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
    plVar1[1] = (longlong)FUN_142477250;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143fca768;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af4eb0 =
       (**(code **)(*DAT_1468b1f88 + 0x70))
                 (DAT_1468b1f88,L"gbxUptime",L"logs out a string with the time since engine started"
                  ,&local_18,0);
  _DAT_146af4ea8 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_14033f039;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_14033f039:
  atexit(FUN_143eacf90);
  return;
}



// FUNCTION 14033f050 FUN_14033f050 body=266 status=ok
// SIG undefined FUN_14033f050(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14033f050(void)

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
    plVar1[1] = (longlong)FUN_1424772c0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143fca768;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af4ec0 =
       (**(code **)(*DAT_1468b1f88 + 0x70))
                 (DAT_1468b1f88,L"RenderThread.Restart",L"Restarts the rendering thread. ",&local_18
                  ,0);
  _DAT_146af4eb8 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_14033f149;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_14033f149:
  atexit(FUN_143eacfe0);
  return;
}



// FUNCTION 14033f160 FUN_14033f160 body=266 status=ok
// SIG undefined FUN_14033f160(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14033f160(void)

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
    plVar1[1] = (longlong)FUN_142477270;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143fca768;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af4ed0 =
       (**(code **)(*DAT_1468b1f88 + 0x70))
                 (DAT_1468b1f88,L"RequestGbxRenderCoreLogging",
                  L"Request GbxRenderCoreLogging for [n] frames, 5 by default",&local_18,0);
  _DAT_146af4ec8 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_14033f259;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_14033f259:
  atexit(FUN_143ead030);
  return;
}



// FUNCTION 14033f270 FUN_14033f270 body=112 status=ok
// SIG undefined FUN_14033f270(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14033f270(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af4b88 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.ColorBlindSimulationMode",0,
                  L"Set color blind simulation mode.\n0: Off\n1: Protanopia\n2: Deuteranopia\n3: Tritanopia\n4: Monochromacy"
                  ,0);
  _DAT_146af4b80 = &PTR_FUN_143f3ecf8;
  _DAT_146af4b90 = (**(code **)(*DAT_146af4b88 + 0x38))(DAT_146af4b88);
  atexit(FUN_143ead080);
  return;
}



// FUNCTION 14033f2e0 FUN_14033f2e0 body=117 status=ok
// SIG undefined FUN_14033f2e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14033f2e0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af4ba0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.ColorBlindSimulationStrength",0x3f800000,
                  L"Set color blind simulation strength.\n0: No effect\n1: Full effect (e.g. deuteranopia vs deuteranomaly)"
                  ,0);
  _DAT_146af4b98 = &PTR_FUN_143f3ecf8;
  _DAT_146af4ba8 = (**(code **)(*DAT_146af4ba0 + 0x40))(DAT_146af4ba0);
  atexit(FUN_143ead0d0);
  return;
}



// FUNCTION 14033f360 FUN_14033f360 body=112 status=ok
// SIG undefined FUN_14033f360(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14033f360(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af4ae8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"GameUserSettings.AllowVulkanAPI",0,&DAT_1450ae2ac,0);
  _DAT_146af4ae0 = &PTR_FUN_143f3ecf8;
  DAT_146af4af0 = (**(code **)(*DAT_146af4ae8 + 0x38))(DAT_146af4ae8);
  atexit(FUN_143ead120);
  return;
}



// FUNCTION 14033f3d0 FUN_14033f3d0 body=115 status=ok
// SIG undefined FUN_14033f3d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14033f3d0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af4b00 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"GameUserSettings.MonitorAnchor.X",0x7fffffff,&DAT_1450ae2ec,0);
  _DAT_146af4af8 = &PTR_FUN_143f3ecf8;
  _DAT_146af4b08 = (**(code **)(*DAT_146af4b00 + 0x38))(DAT_146af4b00);
  atexit(FUN_143ead170);
  return;
}



// FUNCTION 14033f450 FUN_14033f450 body=115 status=ok
// SIG undefined FUN_14033f450(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14033f450(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af4b18 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"GameUserSettings.MonitorAnchor.Y",0x7fffffff,&DAT_1450ae32c,0);
  _DAT_146af4b10 = &PTR_FUN_143f3ecf8;
  _DAT_146af4b20 = (**(code **)(*DAT_146af4b18 + 0x38))(DAT_146af4b18);
  atexit(FUN_143ead1c0);
  return;
}



// FUNCTION 14033f4d0 FUN_14033f4d0 body=115 status=ok
// SIG undefined FUN_14033f4d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14033f4d0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af4d78 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"gbx.ColorRemapLUT.Scale",1,&DAT_1450ad51c,0);
  _DAT_146af4d70 = &PTR_FUN_143f3ecf8;
  _DAT_146af4d80 = (**(code **)(*DAT_146af4d78 + 0x38))(DAT_146af4d78);
  atexit(FUN_143ead210);
  return;
}



// FUNCTION 14033f550 FUN_14033f550 body=115 status=ok
// SIG undefined FUN_14033f550(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14033f550(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af4d60 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"gbx.ColorRemapLUT.TextureSize",0x10,&DAT_1450ad4cc,0);
  _DAT_146af4d58 = &PTR_FUN_143f3ecf8;
  DAT_146af4d68 = (**(code **)(*DAT_146af4d60 + 0x38))(DAT_146af4d60);
  atexit(FUN_143ead260);
  return;
}



// FUNCTION 14033f5d0 FUN_14033f5d0 body=112 status=ok
// SIG undefined FUN_14033f5d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14033f5d0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af4d48 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"gbx.ColorRemapLUT.UploadEveryFrame",0,&DAT_1450ad4a4,0);
  _DAT_146af4d40 = &PTR_FUN_143f3ecf8;
  _DAT_146af4d50 = (**(code **)(*DAT_146af4d48 + 0x38))(DAT_146af4d48);
  atexit(FUN_143ead2b0);
  return;
}



// FUNCTION 14033f640 FUN_14033f640 body=112 status=ok
// SIG undefined FUN_14033f640(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14033f640(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af4e30 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"GbxCoreStat.BenchmarkDataOutputCSV",0,&DAT_1450aecec,0);
  _DAT_146af4e28 = &PTR_FUN_143f3ecf8;
  DAT_146af4e38 = (**(code **)(*DAT_146af4e30 + 0x38))(DAT_146af4e30);
  atexit(FUN_143ead300);
  return;
}



// FUNCTION 14033f6b0 FUN_14033f6b0 body=112 status=ok
// SIG undefined FUN_14033f6b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14033f6b0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af4e60 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"GbxCoreStat.BenchmarkDataOutputSummaryTXT",0,&DAT_1450aed94,0);
  _DAT_146af4e58 = &PTR_FUN_143f3ecf8;
  DAT_146af4e68 = (**(code **)(*DAT_146af4e60 + 0x38))(DAT_146af4e60);
  atexit(FUN_143ead350);
  return;
}



// FUNCTION 14033f720 FUN_14033f720 body=112 status=ok
// SIG undefined FUN_14033f720(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14033f720(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af4e48 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"GbxCoreStat.BenchmarkDataOutputThreadStats",0,&DAT_1450aed34,0);
  _DAT_146af4e40 = &PTR_FUN_143f3ecf8;
  DAT_146af4e50 = (**(code **)(*DAT_146af4e48 + 0x38))(DAT_146af4e48);
  atexit(FUN_143ead3a0);
  return;
}



// FUNCTION 14033f790 FUN_14033f790 body=139 status=ok
// SIG undefined FUN_14033f790(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14033f790(void)

{
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  if (DAT_1468b1f88 == (undefined8 *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af4e00 =
       (longlong *)
       (**(code **)*DAT_1468b1f88)
                 (DAT_1468b1f88,L"GbxCoreStat.BenchmarkFilePath",local_18,&DAT_1450ae734,0);
  _DAT_146af4df8 = &PTR_FUN_143f3ecf8;
  DAT_146af4e08 = (**(code **)(*DAT_146af4e00 + 0x48))(DAT_146af4e00);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  atexit(FUN_143ead3f0);
  return;
}



// FUNCTION 14033f820 FUN_14033f820 body=115 status=ok
// SIG undefined FUN_14033f820(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14033f820(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af4e78 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"GbxCoreStat.BenchmarkMemory",1,&DAT_1450aedcc,0);
  _DAT_146af4e70 = &PTR_FUN_143f3ecf8;
  DAT_146af4e80 = (**(code **)(*DAT_146af4e78 + 0x38))(DAT_146af4e78);
  atexit(FUN_143ead440);
  return;
}



// FUNCTION 14033f8a0 FUN_14033f8a0 body=139 status=ok
// SIG undefined FUN_14033f8a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14033f8a0(void)

{
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  if (DAT_1468b1f88 == (undefined8 *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af4e18 =
       (longlong *)
       (**(code **)*DAT_1468b1f88)
                 (DAT_1468b1f88,L"GbxCoreStat.BenchmarkSubfolder",local_18,&DAT_1450ae864,0);
  _DAT_146af4e10 = &PTR_FUN_143f3ecf8;
  DAT_146af4e20 = (**(code **)(*DAT_146af4e18 + 0x48))(DAT_146af4e18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  atexit(FUN_143ead490);
  return;
}



// FUNCTION 14033f930 FUN_14033f930 body=112 status=ok
// SIG undefined FUN_14033f930(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14033f930(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af4de8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"GbxCoreStat.BenchmarkTakeScreenshot",0,
                  L"If > 0 a screenshot will be saved, only when writing results to file",0);
  _DAT_146af4de0 = &PTR_FUN_143f3ecf8;
  DAT_146af4df0 = (**(code **)(*DAT_146af4de8 + 0x38))(DAT_146af4de8);
  atexit(FUN_143ead4e0);
  return;
}



// FUNCTION 14033f9a0 FUN_14033f9a0 body=115 status=ok
// SIG undefined FUN_14033f9a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14033f9a0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af4db0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"GbxCoreStat.PauseGCWhileBenchmarking",1,
                  L"0: GC runs as it would normally during benchmark1: GC is paused while running a benchmark"
                  ,0);
  _DAT_146af4da8 = &PTR_FUN_143f3ecf8;
  _DAT_146af4db8 = (**(code **)(*DAT_146af4db0 + 0x38))(DAT_146af4db0);
  atexit(FUN_143ead530);
  return;
}



// FUNCTION 14033fa20 FUN_14033fa20 body=112 status=ok
// SIG undefined FUN_14033fa20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14033fa20(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af4c00 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"GbxSky.UseCustomVersionUpgradePath",0,
                  L"0: Custom version upgrade path will be not used - Only use this if you know what you\'re doing! \n1: Custom versioning will be used"
                  ,0);
  _DAT_146af4bf8 = &PTR_FUN_143f3ecf8;
  DAT_146af4c08 = (**(code **)(*DAT_146af4c00 + 0x38))(DAT_146af4c00);
  atexit(FUN_143ead580);
  return;
}


