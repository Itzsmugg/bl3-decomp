// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140107010 FUN_140107010 body=58 status=ok
// SIG undefined FUN_140107010(void)

void FUN_140107010(void)

{
  UObjectCompiledInDefer
            (FUN_1405b8060,FUN_1405b53c0,L"UWwiseZoneAudioEffect",L"/Script/WwiseAudio",0,0,0);
  return;
}



// FUNCTION 140107240 FUN_140107240 body=92 status=ok
// SIG undefined FUN_140107240(void)

void FUN_140107240(void)

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
    *puVar1 = &PTR_FUN_143fdafe8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"WwiseBankEfficiencyReportDatum",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1401072a0 FUN_1401072a0 body=92 status=ok
// SIG undefined FUN_1401072a0(void)

void FUN_1401072a0(void)

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
    *puVar1 = &PTR_FUN_143fd6698;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"WwiseEffectInfo",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140107300 FUN_140107300 body=92 status=ok
// SIG undefined FUN_140107300(void)

void FUN_140107300(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x2f0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    *puVar1 = &PTR_FUN_143fda7a0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"WwiseEmitter",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140107360 FUN_140107360 body=92 status=ok
// SIG undefined FUN_140107360(void)

void FUN_140107360(void)

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
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    *puVar1 = &PTR_FUN_143fda8b8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"WwiseEmitterSource",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1401073c0 FUN_1401073c0 body=92 status=ok
// SIG undefined FUN_1401073c0(void)

void FUN_1401073c0(void)

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
    *puVar1 = &PTR_FUN_143fdaed0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"WwiseExternalAssetData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140107420 FUN_140107420 body=92 status=ok
// SIG undefined FUN_140107420(void)

void FUN_140107420(void)

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
    *puVar1 = &PTR_FUN_143fdb638;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"WwisePlaybackInstance",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1401074a0 FUN_1401074a0 body=66 status=ok
// SIG undefined FUN_1401074a0(void)

void FUN_1401074a0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EWwiseAudioComponentSpriteSize",1);
  UObjectCompiledInDeferEnum(FUN_1405bbb80,L"/Script/WwiseAudio",*puVar1,0,0);
  return;
}



// FUNCTION 1401074f0 FUN_1401074f0 body=66 status=ok
// SIG undefined FUN_1401074f0(void)

void FUN_1401074f0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EWwiseDebugFlags",1);
  UObjectCompiledInDeferEnum(FUN_1405bbbc0,L"/Script/WwiseAudio",*puVar1,0,0);
  return;
}



// FUNCTION 140107540 FUN_140107540 body=66 status=ok
// SIG undefined FUN_140107540(void)

void FUN_140107540(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"WwiseBankEfficiencyReportDatum",1);
  UObjectCompiledInDeferStruct(FUN_1405bc540,L"/Script/WwiseAudio",*puVar1,0,0);
  return;
}



// FUNCTION 140107590 FUN_140107590 body=66 status=ok
// SIG undefined FUN_140107590(void)

void FUN_140107590(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"WwiseEffectInfo",1);
  UObjectCompiledInDeferStruct(FUN_1405bc5a0,L"/Script/WwiseAudio",*puVar1,0,0);
  return;
}



// FUNCTION 1401075e0 FUN_1401075e0 body=66 status=ok
// SIG undefined FUN_1401075e0(void)

void FUN_1401075e0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"WwiseEmitter",1);
  UObjectCompiledInDeferStruct
            (FSoundAttenuationSettings::StaticStruct,L"/Script/WwiseAudio",*puVar1,0,0);
  return;
}



// FUNCTION 140107630 FUN_140107630 body=66 status=ok
// SIG undefined FUN_140107630(void)

void FUN_140107630(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"WwiseEmitterSource",1);
  UObjectCompiledInDeferStruct(FUN_1405bc660,L"/Script/WwiseAudio",*puVar1,0,0);
  return;
}



// FUNCTION 140107680 FUN_140107680 body=66 status=ok
// SIG undefined FUN_140107680(void)

void FUN_140107680(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"WwiseExternalAssetData",1);
  UObjectCompiledInDeferStruct(FUN_1405bc6c0,L"/Script/WwiseAudio",*puVar1,0,0);
  return;
}



// FUNCTION 1401076d0 FUN_1401076d0 body=66 status=ok
// SIG undefined FUN_1401076d0(void)

void FUN_1401076d0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"WwisePlaybackInstance",1);
  UObjectCompiledInDeferStruct(FUN_1405bc720,L"/Script/WwiseAudio",*puVar1,0,0);
  return;
}



// FUNCTION 140107720 FUN_140107720 body=58 status=ok
// SIG undefined FUN_140107720(void)

void FUN_140107720(void)

{
  UObjectCompiledInDefer
            (FUN_1405bc780,FUN_1405b9540,L"UWwiseEffectProviderInterface",L"/Script/WwiseAudio",0,0,
             0);
  return;
}



// FUNCTION 140107760 FUN_140107760 body=58 status=ok
// SIG undefined FUN_140107760(void)

void FUN_140107760(void)

{
  UObjectCompiledInDefer
            (FUN_1405bc7b0,FUN_1405b9b40,L"UWwiseEnvironmentalEffectProvider",L"/Script/WwiseAudio",
             0,0,0);
  return;
}



// FUNCTION 1401077a0 FUN_1401077a0 body=58 status=ok
// SIG undefined FUN_1401077a0(void)

void FUN_1401077a0(void)

{
  UObjectCompiledInDefer
            (FUN_1405ba3c0,UPawnAction_Sequence::StaticClass,L"UWwiseEvent",L"/Script/WwiseAudio",0,
             0,0);
  return;
}



// FUNCTION 1401077e0 FUN_1401077e0 body=58 status=ok
// SIG undefined FUN_1401077e0(void)

void FUN_1401077e0(void)

{
  UObjectCompiledInDefer
            (FUN_1405bc7e0,FUN_1405b9340,L"UWwiseExternalSourceDebugData",L"/Script/WwiseAudio",0,0,
             0);
  return;
}



// FUNCTION 140107820 FUN_140107820 body=58 status=ok
// SIG undefined FUN_140107820(void)

void FUN_140107820(void)

{
  UObjectCompiledInDefer
            (FUN_1405bc810,UInterpTrackInstAkAudioEvent::GetPrivateStaticClass,
             L"UWwiseExternalSourcesEditorData",L"/Script/WwiseAudio",0,0,0);
  return;
}



// FUNCTION 140107860 FUN_140107860 body=58 status=ok
// SIG undefined FUN_140107860(void)

void FUN_140107860(void)

{
  UObjectCompiledInDefer
            (FUN_1405b9450,USoundSourceBus::GetPrivateStaticClass,L"UWwiseGameObjectComponent",
             L"/Script/WwiseAudio",0,0,0);
  return;
}



// FUNCTION 1401078a0 FUN_1401078a0 body=58 status=ok
// SIG undefined FUN_1401078a0(void)

void FUN_1401078a0(void)

{
  UObjectCompiledInDefer
            (FUN_1405b9cc0,UPlayFabMultiplayerModelDecoder::GetPrivateStaticClass,
             L"UWwiseGameplayStatics",L"/Script/WwiseAudio",0,0,0);
  return;
}



// FUNCTION 1401078e0 FUN_1401078e0 body=58 status=ok
// SIG undefined FUN_1401078e0(void)

void FUN_1401078e0(void)

{
  UObjectCompiledInDefer
            (FUN_1405bc840,FUN_1405b9600,L"UWwiseImplementerInterface",L"/Script/WwiseAudio",0,0,0);
  return;
}



// FUNCTION 140107920 FUN_140107920 body=58 status=ok
// SIG undefined FUN_140107920(void)

void FUN_140107920(void)

{
  UObjectCompiledInDefer
            (FUN_1405b96d0,UProgressBar::GetPrivateStaticClass,L"UWwiseListenerComponent",
             L"/Script/WwiseAudio",0,0,0);
  return;
}



// FUNCTION 140107960 FUN_140107960 body=58 status=ok
// SIG undefined FUN_140107960(void)

void FUN_140107960(void)

{
  UObjectCompiledInDefer
            (FUN_1405bc870,FUN_1405b97a0,L"UWwiseMediaAudioSinkProvider",L"/Script/WwiseAudio",0,0,0
            );
  return;
}



// FUNCTION 1401079a0 FUN_1401079a0 body=58 status=ok
// SIG undefined FUN_1401079a0(void)

void FUN_1401079a0(void)

{
  UObjectCompiledInDefer
            (FUN_1405ba3f0,thunk_FUN_1405bbd60,L"UWwiseObject",L"/Script/WwiseAudio",0,0,0);
  return;
}



// FUNCTION 1401079e0 FUN_1401079e0 body=58 status=ok
// SIG undefined FUN_1401079e0(void)

void FUN_1401079e0(void)

{
  UObjectCompiledInDefer(FUN_1405bc8a0,FUN_1405b98b0,L"UWwiseRtpc",L"/Script/WwiseAudio",0,0,0);
  return;
}



// FUNCTION 140107a20 FUN_140107a20 body=58 status=ok
// SIG undefined FUN_140107a20(void)

void FUN_140107a20(void)

{
  UObjectCompiledInDefer(FUN_1405bc8d0,FUN_1405b9970,L"UWwiseSettings",L"/Script/WwiseAudio",0,0,0);
  return;
}



// FUNCTION 140107a60 FUN_140107a60 body=58 status=ok
// SIG undefined FUN_140107a60(void)

void FUN_140107a60(void)

{
  UObjectCompiledInDefer
            (FUN_1405bc900,FUN_1405b9a10,L"UWwiseUserSettings",L"/Script/WwiseAudio",0,0,0);
  return;
}



// FUNCTION 140107b40 FUN_140107b40 body=92 status=ok
// SIG undefined FUN_140107b40(void)

void FUN_140107b40(void)

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
    *puVar1 = &PTR_FUN_143fdbfa8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"WwiseAcousticEmulationParameters",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140107ba0 FUN_140107ba0 body=66 status=ok
// SIG undefined FUN_140107ba0(void)

void FUN_140107ba0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"WwiseAcousticEmulationParameters",1);
  UObjectCompiledInDeferStruct(FUN_1405bf4f0,L"/Script/WwiseAudio",*puVar1,0,0);
  return;
}



// FUNCTION 140107bf0 FUN_140107bf0 body=58 status=ok
// SIG undefined FUN_140107bf0(void)

void FUN_140107bf0(void)

{
  UObjectCompiledInDefer(FUN_1405bf550,FUN_1405bf070,L"UWwiseState",L"/Script/WwiseAudio",0,0,0);
  return;
}



// FUNCTION 140107c30 FUN_140107c30 body=58 status=ok
// SIG undefined FUN_140107c30(void)

void FUN_140107c30(void)

{
  UObjectCompiledInDefer
            (FUN_1405bf580,FUN_1405bf170,L"UWwiseStateGroup",L"/Script/WwiseAudio",0,0,0);
  return;
}



// FUNCTION 140107c70 FUN_140107c70 body=58 status=ok
// SIG undefined FUN_140107c70(void)

void FUN_140107c70(void)

{
  UObjectCompiledInDefer(FUN_1405bf5b0,FUN_1405bf230,L"UWwiseSwitch",L"/Script/WwiseAudio",0,0,0);
  return;
}



// FUNCTION 140107cb0 FUN_140107cb0 body=58 status=ok
// SIG undefined FUN_140107cb0(void)

void FUN_140107cb0(void)

{
  UObjectCompiledInDefer
            (FUN_1405bf5e0,FUN_1405bf2f0,L"UWwiseSwitchGroup",L"/Script/WwiseAudio",0,0,0);
  return;
}



// FUNCTION 140107cf0 FUN_140107cf0 body=58 status=ok
// SIG undefined FUN_140107cf0(void)

void FUN_140107cf0(void)

{
  UObjectCompiledInDefer
            (FUN_1405bf610,UInterpTrackInstAkAudioEvent::GetPrivateStaticClass,L"UWwiseTrigger",
             L"/Script/WwiseAudio",0,0,0);
  return;
}



// FUNCTION 140107d40 FUN_140107d40 body=115 status=ok
// SIG undefined FUN_140107d40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140107d40(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146854558 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"Audio.DistanceThresholdManagerFramesPerCycle",0x10,
                  L"Frames to take for a full update cycle.",0);
  _DAT_146854550 = &PTR_FUN_143f3ecf8;
  DAT_146854560 = (**(code **)(*DAT_146854558 + 0x38))(DAT_146854558);
  atexit(FUN_143e3fe00);
  return;
}



// FUNCTION 140107e30 FUN_140107e30 body=256 status=ok
// SIG undefined FUN_140107e30(void)

void FUN_140107e30(void)

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
    plVar1[1] = (longlong)&DAT_146854568;
    plVar1[2] = (longlong)FUN_1405c8d40;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"GbxAudio",1);
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



// FUNCTION 140108620 FUN_140108620 body=92 status=ok
// SIG undefined FUN_140108620(void)

void FUN_140108620(void)

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
    *puVar1 = &PTR_FUN_143fecbd8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ADMSubscriberData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140108680 FUN_140108680 body=92 status=ok
// SIG undefined FUN_140108680(void)

void FUN_140108680(void)

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
    *puVar1 = &PTR_FUN_143febc40;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ActiveAmbientInstance",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1401086e0 FUN_1401086e0 body=92 status=ok
// SIG undefined FUN_1401086e0(void)

void FUN_1401086e0(void)

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
    *puVar1 = &PTR_FUN_143fec800;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ActiveLoopingSoundNotifyData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140108740 FUN_140108740 body=92 status=ok
// SIG undefined FUN_140108740(void)

void FUN_140108740(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0xa8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_143fed1e8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AudioPrepComponentFilter",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1401087a0 FUN_1401087a0 body=92 status=ok
// SIG undefined FUN_1401087a0(void)

void FUN_1401087a0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x78;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_143fecfb8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AudioPrepHitResultFilter",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140108800 FUN_140108800 body=92 status=ok
// SIG undefined FUN_140108800(void)

void FUN_140108800(void)

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
    *puVar1 = &PTR_FUN_143fed0d0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AudioPropHitFilter_DirectionLimit",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140108860 FUN_140108860 body=92 status=ok
// SIG undefined FUN_140108860(void)

void FUN_140108860(void)

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
    *puVar1 = &PTR_FUN_143fed330;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ResultGridFilter",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1401088c0 FUN_1401088c0 body=66 status=ok
// SIG undefined FUN_1401088c0(void)

void FUN_1401088c0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EDistributedSoundDebugVisualizationMode",1);
  UObjectCompiledInDeferEnum(FUN_1405d5cd0,L"/Script/GbxAudio",*puVar1,0,0);
  return;
}



// FUNCTION 140108910 FUN_140108910 body=66 status=ok
// SIG undefined FUN_140108910(void)

void FUN_140108910(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EFilterResultOperation",1);
  UObjectCompiledInDeferEnum(FUN_1405d5d10,L"/Script/GbxAudio",*puVar1,0,0);
  return;
}



// FUNCTION 140108960 FUN_140108960 body=66 status=ok
// SIG undefined FUN_140108960(void)

void FUN_140108960(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EOcclusionVoxelThinningAlgorithm",1);
  UObjectCompiledInDeferEnum(FUN_1405d5d50,L"/Script/GbxAudio",*puVar1,0,0);
  return;
}



// FUNCTION 1401089b0 FUN_1401089b0 body=66 status=ok
// SIG undefined FUN_1401089b0(void)

void FUN_1401089b0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EWwiseNotifyComponentMethod",1);
  UObjectCompiledInDeferEnum(FUN_1405d5d90,L"/Script/GbxAudio",*puVar1,0,0);
  return;
}



// FUNCTION 140108a00 FUN_140108a00 body=66 status=ok
// SIG undefined FUN_140108a00(void)

void FUN_140108a00(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ADMSubscriberData",1);
  UObjectCompiledInDeferStruct(FUN_1405d6480,L"/Script/GbxAudio",*puVar1,0,0);
  return;
}



// FUNCTION 140108a50 FUN_140108a50 body=66 status=ok
// SIG undefined FUN_140108a50(void)

void FUN_140108a50(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ActiveAmbientInstance",1);
  UObjectCompiledInDeferStruct(FUN_1405d64e0,L"/Script/GbxAudio",*puVar1,0,0);
  return;
}



// FUNCTION 140108aa0 FUN_140108aa0 body=66 status=ok
// SIG undefined FUN_140108aa0(void)

void FUN_140108aa0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ActiveLoopingSoundNotifyData",1);
  UObjectCompiledInDeferStruct(FUN_1405d6540,L"/Script/GbxAudio",*puVar1,0,0);
  return;
}



// FUNCTION 140108af0 FUN_140108af0 body=66 status=ok
// SIG undefined FUN_140108af0(void)

void FUN_140108af0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AudioPrepComponentFilter",1);
  UObjectCompiledInDeferStruct(FAnimNotifyEvent::StaticStruct,L"/Script/GbxAudio",*puVar1,0,0);
  return;
}



// FUNCTION 140108b40 FUN_140108b40 body=66 status=ok
// SIG undefined FUN_140108b40(void)

void FUN_140108b40(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AudioPrepHitResultFilter",1);
  UObjectCompiledInDeferStruct(FUN_1405d6600,L"/Script/GbxAudio",*puVar1,0,0);
  return;
}



// FUNCTION 140108b90 FUN_140108b90 body=66 status=ok
// SIG undefined FUN_140108b90(void)

void FUN_140108b90(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AudioPropHitFilter_DirectionLimit",1);
  UObjectCompiledInDeferStruct(FUN_1405d6660,L"/Script/GbxAudio",*puVar1,0,0);
  return;
}



// FUNCTION 140108be0 FUN_140108be0 body=66 status=ok
// SIG undefined FUN_140108be0(void)

void FUN_140108be0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ResultGridFilter",1);
  UObjectCompiledInDeferStruct(FUN_1405d66c0,L"/Script/GbxAudio",*puVar1,0,0);
  return;
}



// FUNCTION 140108c30 FUN_140108c30 body=58 status=ok
// SIG undefined FUN_140108c30(void)

void FUN_140108c30(void)

{
  UObjectCompiledInDefer
            (FUN_1405d4530,AAfrPlayerState::GetPrivateStaticClass,L"AActiveAmbientSound",
             L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 140108c70 FUN_140108c70 body=58 status=ok
// SIG undefined FUN_140108c70(void)

void FUN_140108c70(void)

{
  UObjectCompiledInDefer
            (FUN_1405d6860,ARemnantQuest::GetPrivateStaticClass,L"AAmbientSoundBox",
             L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 140108cb0 FUN_140108cb0 body=58 status=ok
// SIG undefined FUN_140108cb0(void)

void FUN_140108cb0(void)

{
  UObjectCompiledInDefer
            (FUN_1405d6890,ARemnantQuest::GetPrivateStaticClass,L"AAmbientSoundSphere",
             L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 140108cf0 FUN_140108cf0 body=58 status=ok
// SIG undefined FUN_140108cf0(void)

void FUN_140108cf0(void)

{
  UObjectCompiledInDefer
            (FUN_1405d68c0,FUN_1405d2650,L"AAmbientSoundSpline",L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 140108d30 FUN_140108d30 body=58 status=ok
// SIG undefined FUN_140108d30(void)

void FUN_140108d30(void)

{
  UObjectCompiledInDefer
            (FUN_1405d2c20,ABasePlayerState::GetPrivateStaticClass,L"AAudioOcclusionVoxelizerZone",
             L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 140108d70 FUN_140108d70 body=58 status=ok
// SIG undefined FUN_140108d70(void)

void FUN_140108d70(void)

{
  UObjectCompiledInDefer
            (FUN_1405d3dd0,FUN_1405d3540,L"UActiveAmbientLocationChooser",L"/Script/GbxAudio",0,0,0)
  ;
  return;
}



// FUNCTION 140108db0 FUN_140108db0 body=58 status=ok
// SIG undefined FUN_140108db0(void)

void FUN_140108db0(void)

{
  UObjectCompiledInDefer
            (FUN_1405d3e00,FUN_1405d35e0,L"UActiveAmbientLocationChooser_Blueprint",
             L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 140108df0 FUN_140108df0 body=58 status=ok
// SIG undefined FUN_140108df0(void)

void FUN_140108df0(void)

{
  UObjectCompiledInDefer
            (FUN_1405d68f0,FUN_1405d3c70,L"UActiveAmbientLocationChooser_Party",L"/Script/GbxAudio",
             0,0,0);
  return;
}



// FUNCTION 140108e30 FUN_140108e30 body=58 status=ok
// SIG undefined FUN_140108e30(void)

void FUN_140108e30(void)

{
  UObjectCompiledInDefer
            (FUN_1405d3ef0,UGProviderStoreSubsystem::GetPrivateStaticClass,
             L"UActiveAmbientLocationChooser_PreselectedLocation",L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 140108e70 FUN_140108e70 body=58 status=ok
// SIG undefined FUN_140108e70(void)

void FUN_140108e70(void)

{
  UObjectCompiledInDefer
            (FUN_1405d6920,FUN_1405d3920,L"UActiveAmbientLocationChooser_RandomOnCeiling",
             L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 140108eb0 FUN_140108eb0 body=58 status=ok
// SIG undefined FUN_140108eb0(void)

void FUN_140108eb0(void)

{
  UObjectCompiledInDefer
            (FUN_1405d6950,FUN_1405d3ac0,L"UActiveAmbientLocationChooser_RandomOnFloor",
             L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 140108ef0 FUN_140108ef0 body=58 status=ok
// SIG undefined FUN_140108ef0(void)

void FUN_140108ef0(void)

{
  UObjectCompiledInDefer
            (FUN_1405d3ec0,FUN_1405d3870,L"UActiveAmbientLocationChooser_RandomWithTrace",
             L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 140108f30 FUN_140108f30 body=58 status=ok
// SIG undefined FUN_140108f30(void)

void FUN_140108f30(void)

{
  UObjectCompiledInDefer
            (FUN_1405d3e90,FUN_1405d3690,L"UActiveAmbientLocationChooser_RandomWithinActor",
             L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 140108f70 FUN_140108f70 body=58 status=ok
// SIG undefined FUN_140108f70(void)

void FUN_140108f70(void)

{
  UObjectCompiledInDefer
            (FUN_1405d4310,FUN_1405d4100,L"UActiveAmbientLocationValidator",L"/Script/GbxAudio",0,0,
             0);
  return;
}



// FUNCTION 140108fb0 FUN_140108fb0 body=58 status=ok
// SIG undefined FUN_140108fb0(void)

void FUN_140108fb0(void)

{
  UObjectCompiledInDefer
            (FUN_1405d4340,FUN_1405d41b0,L"UActiveAmbientLocationValidator_Blueprint",
             L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 140108ff0 FUN_140108ff0 body=58 status=ok
// SIG undefined FUN_140108ff0(void)

void FUN_140108ff0(void)

{
  UObjectCompiledInDefer
            (FUN_1405d6980,FUN_1405d4260,L"UActiveAmbientLocationValidator_DistanceFromListener",
             L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 140109030 FUN_140109030 body=58 status=ok
// SIG undefined FUN_140109030(void)

void FUN_140109030(void)

{
  UObjectCompiledInDefer
            (FUN_1405d45e0,FUN_1405d1f10,L"UActiveAmbientSoundComponent",L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 140109070 FUN_140109070 body=58 status=ok
// SIG undefined FUN_140109070(void)

void FUN_140109070(void)

{
  UObjectCompiledInDefer
            (FUN_1405d21d0,FUN_1405d1e70,L"UActiveAmbientUpdater",L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 1401090b0 FUN_1401090b0 body=58 status=ok
// SIG undefined FUN_1401090b0(void)

void FUN_1401090b0(void)

{
  UObjectCompiledInDefer
            (FUN_1405d2200,FUN_1405d1fc0,L"UActiveAmbientUpdater_Blueprint",L"/Script/GbxAudio",0,0,
             0);
  return;
}



// FUNCTION 1401090f0 FUN_1401090f0 body=58 status=ok
// SIG undefined FUN_1401090f0(void)

void FUN_1401090f0(void)

{
  UObjectCompiledInDefer
            (FUN_1405d2290,FUN_1405d2070,L"UActiveAmbientUpdater_MoveInRandomDirection",
             L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 140109130 FUN_140109130 body=58 status=ok
// SIG undefined FUN_140109130(void)

void FUN_140109130(void)

{
  UObjectCompiledInDefer
            (Z_Construct_UClass_UScreenDetectableComponent,FUN_1405d2120,
             L"UActiveAmbientUpdater_MoveWithWobble",L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 140109170 FUN_140109170 body=58 status=ok
// SIG undefined FUN_140109170(void)

void FUN_140109170(void)

{
  UObjectCompiledInDefer
            (FUN_1405d69e0,FUN_1405d1da0,L"UAnimNotifyState_LoopingSound",L"/Script/GbxAudio",0,0,0)
  ;
  return;
}



// FUNCTION 1401091b0 FUN_1401091b0 body=58 status=ok
// SIG undefined FUN_1401091b0(void)

void FUN_1401091b0(void)

{
  UObjectCompiledInDefer
            (FUN_1405d6a10,FUN_1405d28a0,L"UAnimNotify_CharacterSound",L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 1401091f0 FUN_1401091f0 body=58 status=ok
// SIG undefined FUN_1401091f0(void)

void FUN_1401091f0(void)

{
  UObjectCompiledInDefer(FUN_1405d3b70,FUN_1405d39d0,L"UAnimNotify_Foley",L"/Script/GbxAudio",0,0,0)
  ;
  return;
}



// FUNCTION 140109230 FUN_140109230 body=58 status=ok
// SIG undefined FUN_140109230(void)

void FUN_140109230(void)

{
  UObjectCompiledInDefer
            (FUN_1405d6a40,FUN_1405d3d20,L"UAnimNotify_FootFoley",L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 140109270 FUN_140109270 body=58 status=ok
// SIG undefined FUN_140109270(void)

void FUN_140109270(void)

{
  UObjectCompiledInDefer
            (FUN_1405d6a70,FUN_1405d43c0,L"UAnimNotify_WwiseEvent",L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 1401092b0 FUN_1401092b0 body=58 status=ok
// SIG undefined FUN_1401092b0(void)

void FUN_1401092b0(void)

{
  UObjectCompiledInDefer
            (FUN_1405d6aa0,FUN_1405d2400,L"UAudioDistanceThresholdManager",L"/Script/GbxAudio",0,0,0
            );
  return;
}



// FUNCTION 1401092f0 FUN_1401092f0 body=58 status=ok
// SIG undefined FUN_1401092f0(void)

void FUN_1401092f0(void)

{
  UObjectCompiledInDefer
            (Z_Construct_UClass_UAccelByteBlueprintsEntitlement,
             UBlendableInterface::GetPrivateStaticClass,
             L"UAudioDistanceThresholdSubscriberInterface",L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 140109330 FUN_140109330 body=58 status=ok
// SIG undefined FUN_140109330(void)

void FUN_140109330(void)

{
  UObjectCompiledInDefer
            (FUN_1405d6b00,FUN_1405d2720,L"UAudioOcclusionVoxelDataProvider",L"/Script/GbxAudio",0,0
             ,0);
  return;
}



// FUNCTION 140109370 FUN_140109370 body=58 status=ok
// SIG undefined FUN_140109370(void)

void FUN_140109370(void)

{
  UObjectCompiledInDefer
            (FUN_1405d6b30,FUN_1405d27e0,L"UAudioPrepLocationConsumer",L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 1401093b0 FUN_1401093b0 body=58 status=ok
// SIG undefined FUN_1401093b0(void)

void FUN_1401093b0(void)

{
  UObjectCompiledInDefer
            (FUN_1405d3750,FUN_1405d2950,L"UAudioPrepLocationFinder",L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 1401093f0 FUN_1401093f0 body=58 status=ok
// SIG undefined FUN_1401093f0(void)

void FUN_1401093f0(void)

{
  UObjectCompiledInDefer
            (FUN_1405d6b60,FUN_1405d2ce0,L"UAudioPrepLocationFinder_ActorList",L"/Script/GbxAudio",0
             ,0,0);
  return;
}



// FUNCTION 140109430 FUN_140109430 body=58 status=ok
// SIG undefined FUN_140109430(void)

void FUN_140109430(void)

{
  UObjectCompiledInDefer
            (FUN_1405d3780,FUN_1405d29f0,L"UAudioPrepLocationFinder_Blueprint",L"/Script/GbxAudio",0
             ,0,0);
  return;
}



// FUNCTION 140109470 FUN_140109470 body=58 status=ok
// SIG undefined FUN_140109470(void)

void FUN_140109470(void)

{
  UObjectCompiledInDefer
            (FUN_1405d6b90,FUN_1405d2d90,L"UAudioPrepLocationFinder_FilteredComponents",
             L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 1401094b0 FUN_1401094b0 body=58 status=ok
// SIG undefined FUN_1401094b0(void)

void FUN_1401094b0(void)

{
  UObjectCompiledInDefer
            (FUN_1405d6bc0,FUN_1405d30a0,L"UAudioPrepLocationFinder_FoliageLocations",
             L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 1401094f0 FUN_1401094f0 body=58 status=ok
// SIG undefined FUN_1401094f0(void)

void FUN_1401094f0(void)

{
  UObjectCompiledInDefer
            (FUN_1405d6bf0,FUN_1405d32f0,L"UAudioPrepLocationFinder_Grid",L"/Script/GbxAudio",0,0,0)
  ;
  return;
}



// FUNCTION 140109530 FUN_140109530 body=58 status=ok
// SIG undefined FUN_140109530(void)

void FUN_140109530(void)

{
  UObjectCompiledInDefer
            (FUN_1405d6c20,FUN_1405d3200,L"UAudioPrepLocationFinder_InstanceLocations",
             L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 140109570 FUN_140109570 body=58 status=ok
// SIG undefined FUN_140109570(void)

void FUN_140109570(void)

{
  UObjectCompiledInDefer
            (FUN_1405d6c50,FUN_1405d3150,L"UAudioPrepLocationFinder_LandscapeGrassLocations",
             L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 1401095b0 FUN_1401095b0 body=58 status=ok
// SIG undefined FUN_1401095b0(void)

void FUN_1401095b0(void)

{
  UObjectCompiledInDefer
            (FUN_1405d6c80,FUN_1405d2f00,L"UAudioPrepLocationFinder_PincushionTracer",
             L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 1401095f0 FUN_1401095f0 body=58 status=ok
// SIG undefined FUN_1401095f0(void)

void FUN_1401095f0(void)

{
  UObjectCompiledInDefer
            (FUN_1405d6cb0,FUN_1405d2e50,L"UAudioPrepLocationFinder_SplineTracer",
             L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 140109630 FUN_140109630 body=58 status=ok
// SIG undefined FUN_140109630(void)

void FUN_140109630(void)

{
  UObjectCompiledInDefer
            (FUN_1405d6ce0,FUN_1405d2ff0,L"UAudioPrepLocationFinder_TraceDownToActor",
             L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 140109670 FUN_140109670 body=58 status=ok
// SIG undefined FUN_140109670(void)

void FUN_140109670(void)

{
  UObjectCompiledInDefer
            (FUN_1405d6d10,FUN_1405d33a0,L"UAudioPrepLocationFinder_TraceGrid",L"/Script/GbxAudio",0
             ,0,0);
  return;
}



// FUNCTION 1401096b0 FUN_1401096b0 body=58 status=ok
// SIG undefined FUN_1401096b0(void)

void FUN_1401096b0(void)

{
  UObjectCompiledInDefer
            (FUN_1405d6d40,FUN_1405d3450,L"UAudioPrepLocationFinder_VoxelMaterialBoundary",
             L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 1401096f0 FUN_1401096f0 body=58 status=ok
// SIG undefined FUN_1401096f0(void)

void FUN_1401096f0(void)

{
  UObjectCompiledInDefer
            (FUN_1405d3810,FUN_1405d2b70,L"UDEPRECATED_ActiveAmbientLocationFinder_Blueprint",
             L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 140109970 FUN_140109970 body=92 status=ok
// SIG undefined FUN_140109970(void)

void FUN_140109970(void)

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
    *puVar1 = &PTR_FUN_143ff1350;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"CharacterSoundImplementation",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1401099d0 FUN_1401099d0 body=92 status=ok
// SIG undefined FUN_1401099d0(void)

void FUN_1401099d0(void)

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
    *puVar1 = &PTR_FUN_143ff1120;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"CharacterSoundLoopDetails",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140109a30 FUN_140109a30 body=92 status=ok
// SIG undefined FUN_140109a30(void)

void FUN_140109a30(void)

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
    *puVar1 = &PTR_FUN_143ff1948;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"CharacterVocalLoop",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140109a90 FUN_140109a90 body=92 status=ok
// SIG undefined FUN_140109a90(void)

void FUN_140109a90(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x78;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_143ff1238;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"CharacterVocalLoopImplementation",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140109af0 FUN_140109af0 body=92 status=ok
// SIG undefined FUN_140109af0(void)

void FUN_140109af0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_143ff1590;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"CurrentVocalLoopInfo",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140109b50 FUN_140109b50 body=92 status=ok
// SIG undefined FUN_140109b50(void)

void FUN_140109b50(void)

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
    *puVar1 = &PTR_FUN_143ff1478;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"CurrentVocalization",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140109bb0 FUN_140109bb0 body=92 status=ok
// SIG undefined FUN_140109bb0(void)

void FUN_140109bb0(void)

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
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ExtraFoleyParameter",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140109c10 FUN_140109c10 body=92 status=ok
// SIG undefined FUN_140109c10(void)

void FUN_140109c10(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_143ff1ad0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"FoleyEventParams",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140109c70 FUN_140109c70 body=92 status=ok
// SIG undefined FUN_140109c70(void)

void FUN_140109c70(void)

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
    *puVar1 = &PTR_FUN_143ff1008;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"InheritableSoundMap",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140109cd0 FUN_140109cd0 body=92 status=ok
// SIG undefined FUN_140109cd0(void)

void FUN_140109cd0(void)

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
    *puVar1 = &PTR_FUN_143ff0ef0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"InheritableVocalLoopList",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140109d50 FUN_140109d50 body=66 status=ok
// SIG undefined FUN_140109d50(void)

void FUN_140109d50(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ECharacterSoundType",1);
  UObjectCompiledInDeferEnum(FUN_1405d9190,L"/Script/GbxAudio",*puVar1,0,0);
  return;
}



// FUNCTION 140109da0 FUN_140109da0 body=66 status=ok
// SIG undefined FUN_140109da0(void)

void FUN_140109da0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EDistributedSoundMode",1);
  UObjectCompiledInDeferEnum(FUN_1405d91f0,L"/Script/GbxAudio",*puVar1,0,0);
  return;
}



// FUNCTION 140109df0 FUN_140109df0 body=66 status=ok
// SIG undefined FUN_140109df0(void)

void FUN_140109df0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"CharacterSoundImplementation",1);
  UObjectCompiledInDeferStruct(FUN_1405d9780,L"/Script/GbxAudio",*puVar1,0,0);
  return;
}



// FUNCTION 140109e40 FUN_140109e40 body=66 status=ok
// SIG undefined FUN_140109e40(void)

void FUN_140109e40(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"CharacterSoundLoopDetails",1);
  UObjectCompiledInDeferStruct(FUN_1405d9800,L"/Script/GbxAudio",*puVar1,0,0);
  return;
}



// FUNCTION 140109e90 FUN_140109e90 body=66 status=ok
// SIG undefined FUN_140109e90(void)

void FUN_140109e90(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"CharacterVocalLoop",1);
  UObjectCompiledInDeferStruct(FUN_1405d9880,L"/Script/GbxAudio",*puVar1,0,0);
  return;
}



// FUNCTION 140109ee0 FUN_140109ee0 body=66 status=ok
// SIG undefined FUN_140109ee0(void)

void FUN_140109ee0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"CharacterVocalLoopImplementation",1);
  UObjectCompiledInDeferStruct
            (FNodeHierarchyWithUserData::StaticStruct,L"/Script/GbxAudio",*puVar1,0,0);
  return;
}



// FUNCTION 140109f30 FUN_140109f30 body=66 status=ok
// SIG undefined FUN_140109f30(void)

void FUN_140109f30(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"CurrentVocalLoopInfo",1);
  UObjectCompiledInDeferStruct(FUN_1405d9980,L"/Script/GbxAudio",*puVar1,0,0);
  return;
}



// FUNCTION 140109f80 FUN_140109f80 body=66 status=ok
// SIG undefined FUN_140109f80(void)

void FUN_140109f80(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"CurrentVocalization",1);
  UObjectCompiledInDeferStruct(FUN_1405d9a00,L"/Script/GbxAudio",*puVar1,0,0);
  return;
}



// FUNCTION 140109fd0 FUN_140109fd0 body=66 status=ok
// SIG undefined FUN_140109fd0(void)

void FUN_140109fd0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ExtraFoleyParameter",1);
  UObjectCompiledInDeferStruct(FUN_1405d9a80,L"/Script/GbxAudio",*puVar1,0,0);
  return;
}



// FUNCTION 14010a020 FUN_14010a020 body=66 status=ok
// SIG undefined FUN_14010a020(void)

void FUN_14010a020(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"FoleyEventParams",1);
  UObjectCompiledInDeferStruct(FUN_1405d9b00,L"/Script/GbxAudio",*puVar1,0,0);
  return;
}



// FUNCTION 14010a070 FUN_14010a070 body=66 status=ok
// SIG undefined FUN_14010a070(void)

void FUN_14010a070(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"InheritableSoundMap",1);
  UObjectCompiledInDeferStruct(FUN_1405d9b80,L"/Script/GbxAudio",*puVar1,0,0);
  return;
}



// FUNCTION 14010a0c0 FUN_14010a0c0 body=66 status=ok
// SIG undefined FUN_14010a0c0(void)

void FUN_14010a0c0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"InheritableVocalLoopList",1);
  UObjectCompiledInDeferStruct(FUN_1405d9c00,L"/Script/GbxAudio",*puVar1,0,0);
  return;
}



// FUNCTION 14010a110 FUN_14010a110 body=58 status=ok
// SIG undefined FUN_14010a110(void)

void FUN_14010a110(void)

{
  UObjectCompiledInDefer
            (FUN_1405d7780,AUGAreaEffectActor::GetPrivateStaticClass,L"ADistributedAmbientSound",
             L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 14010a150 FUN_14010a150 body=58 status=ok
// SIG undefined FUN_14010a150(void)

void FUN_14010a150(void)

{
  UObjectCompiledInDefer
            (FUN_1405d78d0,ABasePlayerState::GetPrivateStaticClass,L"AFluidSimExampleZone",
             L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 14010a190 FUN_14010a190 body=58 status=ok
// SIG undefined FUN_14010a190(void)

void FUN_14010a190(void)

{
  UObjectCompiledInDefer
            (FUN_1405d7b30,FUN_1405d7a50,L"UCharacterSoundData",L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 14010a1d0 FUN_14010a1d0 body=58 status=ok
// SIG undefined FUN_14010a1d0(void)

void FUN_14010a1d0(void)

{
  UObjectCompiledInDefer
            (FUN_1405d9c80,UPathFollowingAgentInterface::GetPrivateStaticClass,
             L"UCharacterSoundInterface",L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 14010a210 FUN_14010a210 body=58 status=ok
// SIG undefined FUN_14010a210(void)

void FUN_14010a210(void)

{
  UObjectCompiledInDefer
            (FUN_1405d9cb0,FUN_1405d79a0,L"UCharacterSoundLogicComponent",L"/Script/GbxAudio",0,0,0)
  ;
  return;
}



// FUNCTION 14010a250 FUN_14010a250 body=58 status=ok
// SIG undefined FUN_14010a250(void)

void FUN_14010a250(void)

{
  UObjectCompiledInDefer
            (FUN_1405d9ce0,FUN_1405d7e10,L"UCharacterSoundTag",L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 14010a290 FUN_14010a290 body=58 status=ok
// SIG undefined FUN_14010a290(void)

void FUN_14010a290(void)

{
  UObjectCompiledInDefer
            (FUN_1405d9d10,UGCombatTextWidget::GetPrivateStaticClass,L"UFoleyAccessoryComponent",
             L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 14010a2d0 FUN_14010a2d0 body=58 status=ok
// SIG undefined FUN_14010a2d0(void)

void FUN_14010a2d0(void)

{
  UObjectCompiledInDefer
            (FUN_1405d9d40,UPathFollowingAgentInterface::GetPrivateStaticClass,
             L"UFoleyImplementerInterface",L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 14010a310 FUN_14010a310 body=58 status=ok
// SIG undefined FUN_14010a310(void)

void FUN_14010a310(void)

{
  UObjectCompiledInDefer
            (FUN_1405d8200,UUGHUDGearBarUW::GetPrivateStaticClass,L"UFoleyMainComponent",
             L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 14010a350 FUN_14010a350 body=58 status=ok
// SIG undefined FUN_14010a350(void)

void FUN_14010a350(void)

{
  UObjectCompiledInDefer
            (FUN_1405d7380,FUN_1405d72d0,L"UGbxAudioBlueprintLibrary",L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 14010a390 FUN_14010a390 body=58 status=ok
// SIG undefined FUN_14010a390(void)

void FUN_14010a390(void)

{
  UObjectCompiledInDefer
            (FUN_1405d9d70,FUN_1405d74b0,L"UGbxAudioGlobalsData",L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 14010a3d0 FUN_14010a3d0 body=58 status=ok
// SIG undefined FUN_14010a3d0(void)

void FUN_14010a3d0(void)

{
  UObjectCompiledInDefer
            (FUN_1405d9da0,UTwitchInteractivitySettings::GetPrivateStaticClass,L"UGbxAudioSettings",
             L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 14010a410 FUN_14010a410 body=58 status=ok
// SIG undefined FUN_14010a410(void)

void FUN_14010a410(void)

{
  UObjectCompiledInDefer
            (FUN_1405d7bd0,FUN_1405d76d0,L"ULightAudioComponent",L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 14010a5b0 FUN_14010a5b0 body=92 status=ok
// SIG undefined FUN_14010a5b0(void)

void FUN_14010a5b0(void)

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
    *puVar1 = &PTR_FUN_143ff3720;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"WindDirectionalSensitivity",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14010a610 FUN_14010a610 body=92 status=ok
// SIG undefined FUN_14010a610(void)

void FUN_14010a610(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_143ff3838;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"WindLocalAxisSensitivity",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14010a690 FUN_14010a690 body=66 status=ok
// SIG undefined FUN_14010a690(void)

void FUN_14010a690(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"WindDirectionalSensitivity",1);
  UObjectCompiledInDeferStruct(FUN_1405db860,L"/Script/GbxAudio",*puVar1,0,0);
  return;
}



// FUNCTION 14010a6e0 FUN_14010a6e0 body=66 status=ok
// SIG undefined FUN_14010a6e0(void)

void FUN_14010a6e0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"WindLocalAxisSensitivity",1);
  UObjectCompiledInDeferStruct(FUN_1405db8c0,L"/Script/GbxAudio",*puVar1,0,0);
  return;
}



// FUNCTION 14010a730 FUN_14010a730 body=58 status=ok
// SIG undefined FUN_14010a730(void)

void FUN_14010a730(void)

{
  UObjectCompiledInDefer
            (FUN_1405daef0,UMatchMakingWidget::GetPrivateStaticClass,L"UMusicSequencerComponent",
             L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 14010a770 FUN_14010a770 body=58 status=ok
// SIG undefined FUN_14010a770(void)

void FUN_14010a770(void)

{
  UObjectCompiledInDefer
            (FUN_1405db290,FUN_1405db080,L"UParticleModuleGbxAudioBase",L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 14010a7b0 FUN_14010a7b0 body=58 status=ok
// SIG undefined FUN_14010a7b0(void)

void FUN_14010a7b0(void)

{
  UObjectCompiledInDefer
            (FUN_1405db920,FUN_1405db130,L"UParticleModuleGbxAudioLoop",L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 14010a7f0 FUN_14010a7f0 body=58 status=ok
// SIG undefined FUN_14010a7f0(void)

void FUN_14010a7f0(void)

{
  UObjectCompiledInDefer
            (FUN_1405db950,FUN_1405db1e0,L"UParticleModuleGbxAudioPool",L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 14010a830 FUN_14010a830 body=58 status=ok
// SIG undefined FUN_14010a830(void)

void FUN_14010a830(void)

{
  UObjectCompiledInDefer
            (FUN_1405db980,FUN_1405db2f0,L"UWindAudioLoopComponent",L"/Script/GbxAudio",0,0,0);
  return;
}



// FUNCTION 14010a870 FUN_14010a870 body=58 status=ok
// SIG undefined FUN_14010a870(void)

void FUN_14010a870(void)

{
  UObjectCompiledInDefer
            (FUN_1405dad70,FUN_1405db430,L"UWwiseListenerEffectComponent",L"/Script/GbxAudio",0,0,0)
  ;
  return;
}



// FUNCTION 14010a910 FUN_14010a910 body=59 status=ok
// SIG undefined FUN_14010a910(void)

void FUN_14010a910(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14620d340,0);
  FGenericPlatformString::Memcpy(DAT_14620d340,&DAT_143ff40dc,4);
  atexit((_func_5014 *)&LAB_143e3ffe0);
  return;
}



// FUNCTION 14010a970 FUN_14010a970 body=256 status=ok
// SIG undefined FUN_14010a970(void)

void FUN_14010a970(void)

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
    plVar1[1] = (longlong)&DAT_146854ec1;
    plVar1[2] = (longlong)FUN_1405eae50;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"GbxDialog",1);
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



// FUNCTION 14010ad50 FUN_14010ad50 body=92 status=ok
// SIG undefined FUN_14010ad50(void)

void FUN_14010ad50(void)

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
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ConditionalEchoData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14010adb0 FUN_14010adb0 body=92 status=ok
// SIG undefined FUN_14010adb0(void)

void FUN_14010adb0(void)

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
    *puVar1 = &PTR_FUN_143ffc8c8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"DialogBlackboardCounterValueMap",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14010ae10 FUN_14010ae10 body=92 status=ok
// SIG undefined FUN_14010ae10(void)

void FUN_14010ae10(void)

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
    *puVar1 = &PTR_FUN_143ffcaf8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"DialogBlackboardFlagValue",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14010ae70 FUN_14010ae70 body=92 status=ok
// SIG undefined FUN_14010ae70(void)

void FUN_14010ae70(void)

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
    *puVar1 = &PTR_FUN_143ffc9e0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"DialogBlackboardFlagValueMap",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14010aed0 FUN_14010aed0 body=92 status=ok
// SIG undefined FUN_14010aed0(void)

void FUN_14010aed0(void)

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
    *puVar1 = &PTR_FUN_143ffd5e8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"DialogEventSubscription",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14010af30 FUN_14010af30 body=92 status=ok
// SIG undefined FUN_14010af30(void)

void FUN_14010af30(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_143ffdea8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"DialogMoodInfo",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14010af90 FUN_14010af90 body=92 status=ok
// SIG undefined FUN_14010af90(void)

void FUN_14010af90(void)

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
    *puVar1 = &PTR_FUN_143ffc7b0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"DialogScriptPinnedRef",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14010aff0 FUN_14010aff0 body=92 status=ok
// SIG undefined FUN_14010aff0(void)

void FUN_14010aff0(void)

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
    *puVar1 = &PTR_FUN_143ffc580;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"DialogSequenceDelegates",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14010b050 FUN_14010b050 body=92 status=ok
// SIG undefined FUN_14010b050(void)

void FUN_14010b050(void)

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
    *puVar1 = &PTR_FUN_143ffc698;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"DialogSequenceNotifyDelegate",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14010b0b0 FUN_14010b0b0 body=92 status=ok
// SIG undefined FUN_14010b0b0(void)

void FUN_14010b0b0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x2c0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_143ffcfa8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"DialogThread",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14010b110 FUN_14010b110 body=92 status=ok
// SIG undefined FUN_14010b110(void)

void FUN_14010b110(void)

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
    *puVar1 = &PTR_FUN_143ffc468;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"DistributedSpeakerInfo",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14010b170 FUN_14010b170 body=92 status=ok
// SIG undefined FUN_14010b170(void)

void FUN_14010b170(void)

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
    *puVar1 = &PTR_FUN_143ffce90;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"QuietTimeTracker",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14010b1d0 FUN_14010b1d0 body=92 status=ok
// SIG undefined FUN_14010b1d0(void)

void FUN_14010b1d0(void)

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
    *puVar1 = &PTR_FUN_143ffc350;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"RecentConversationInfo",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14010b230 FUN_14010b230 body=92 status=ok
// SIG undefined FUN_14010b230(void)

void FUN_14010b230(void)

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
    *puVar1 = &PTR_FUN_143ffc238;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"RecentDialogPerformanceInfo",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14010b290 FUN_14010b290 body=66 status=ok
// SIG undefined FUN_14010b290(void)

void FUN_14010b290(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EVoiceOfGodSpeaker",1);
  UObjectCompiledInDeferEnum(FUN_1405fea20,L"/Script/GbxDialog",*puVar1,0,0);
  return;
}



// FUNCTION 14010b2e0 FUN_14010b2e0 body=66 status=ok
// SIG undefined FUN_14010b2e0(void)

void FUN_14010b2e0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ConditionalEchoData",1);
  UObjectCompiledInDeferStruct(FUN_1405ff540,L"/Script/GbxDialog",*puVar1,0,0);
  return;
}



// FUNCTION 14010b330 FUN_14010b330 body=66 status=ok
// SIG undefined FUN_14010b330(void)

void FUN_14010b330(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"DialogBlackboardCounterValueMap",1);
  UObjectCompiledInDeferStruct
            (FNiagaraEventGeneratorProperties::StaticStruct,L"/Script/GbxDialog",*puVar1,0,0);
  return;
}



// FUNCTION 14010b380 FUN_14010b380 body=66 status=ok
// SIG undefined FUN_14010b380(void)

void FUN_14010b380(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"DialogBlackboardFlagValue",1);
  UObjectCompiledInDeferStruct(FUN_1405ff600,L"/Script/GbxDialog",*puVar1,0,0);
  return;
}



// FUNCTION 14010b3d0 FUN_14010b3d0 body=66 status=ok
// SIG undefined FUN_14010b3d0(void)

void FUN_14010b3d0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"DialogBlackboardFlagValueMap",1);
  UObjectCompiledInDeferStruct
            (FNiagaraEventGeneratorProperties::StaticStruct,L"/Script/GbxDialog",*puVar1,0,0);
  return;
}



// FUNCTION 14010b420 FUN_14010b420 body=66 status=ok
// SIG undefined FUN_14010b420(void)

void FUN_14010b420(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"DialogEventSubscription",1);
  UObjectCompiledInDeferStruct(FUN_1405ff6c0,L"/Script/GbxDialog",*puVar1,0,0);
  return;
}



// FUNCTION 14010b470 FUN_14010b470 body=66 status=ok
// SIG undefined FUN_14010b470(void)

void FUN_14010b470(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"DialogMoodInfo",1);
  UObjectCompiledInDeferStruct(FUN_1405ff720,L"/Script/GbxDialog",*puVar1,0,0);
  return;
}



// FUNCTION 14010b4c0 FUN_14010b4c0 body=66 status=ok
// SIG undefined FUN_14010b4c0(void)

void FUN_14010b4c0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"DialogScriptPinnedRef",1);
  UObjectCompiledInDeferStruct(FUN_1405ff780,L"/Script/GbxDialog",*puVar1,0,0);
  return;
}



// FUNCTION 14010b510 FUN_14010b510 body=66 status=ok
// SIG undefined FUN_14010b510(void)

void FUN_14010b510(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"DialogSequenceDelegates",1);
  UObjectCompiledInDeferStruct(FUN_1405ff7e0,L"/Script/GbxDialog",*puVar1,0,0);
  return;
}



// FUNCTION 14010b560 FUN_14010b560 body=66 status=ok
// SIG undefined FUN_14010b560(void)

void FUN_14010b560(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"DialogSequenceNotifyDelegate",1);
  UObjectCompiledInDeferStruct(FUN_1405ff840,L"/Script/GbxDialog",*puVar1,0,0);
  return;
}



// FUNCTION 14010b5b0 FUN_14010b5b0 body=66 status=ok
// SIG undefined FUN_14010b5b0(void)

void FUN_14010b5b0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"DialogThread",1);
  UObjectCompiledInDeferStruct(FGPUSpriteEmitterInfo::StaticStruct,L"/Script/GbxDialog",*puVar1,0,0)
  ;
  return;
}



// FUNCTION 14010b600 FUN_14010b600 body=66 status=ok
// SIG undefined FUN_14010b600(void)

void FUN_14010b600(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributedSpeakerInfo",1);
  UObjectCompiledInDeferStruct(FUN_1405ff900,L"/Script/GbxDialog",*puVar1,0,0);
  return;
}



// FUNCTION 14010b650 FUN_14010b650 body=66 status=ok
// SIG undefined FUN_14010b650(void)

void FUN_14010b650(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"QuietTimeTracker",1);
  UObjectCompiledInDeferStruct
            (FNiagaraEventGeneratorProperties::StaticStruct,L"/Script/GbxDialog",*puVar1,0,0);
  return;
}



// FUNCTION 14010b6a0 FUN_14010b6a0 body=66 status=ok
// SIG undefined FUN_14010b6a0(void)

void FUN_14010b6a0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"RecentConversationInfo",1);
  UObjectCompiledInDeferStruct(FUN_1405ff9c0,L"/Script/GbxDialog",*puVar1,0,0);
  return;
}



// FUNCTION 14010b6f0 FUN_14010b6f0 body=66 status=ok
// SIG undefined FUN_14010b6f0(void)

void FUN_14010b6f0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"RecentDialogPerformanceInfo",1);
  UObjectCompiledInDeferStruct(FUN_1405ffa20,L"/Script/GbxDialog",*puVar1,0,0);
  return;
}



// FUNCTION 14010b740 FUN_14010b740 body=58 status=ok
// SIG undefined FUN_14010b740(void)

void FUN_14010b740(void)

{
  UObjectCompiledInDefer
            (FUN_1405ffa80,FUN_1405fb4a0,L"UAnimNotify_DialogEvent",L"/Script/GbxDialog",0,0,0);
  return;
}



// FUNCTION 14010b780 FUN_14010b780 body=58 status=ok
// SIG undefined FUN_14010b780(void)

void FUN_14010b780(void)

{
  UObjectCompiledInDefer
            (FUN_1405ffab0,FUN_1405fb680,L"UCharacterEchoDataBase",L"/Script/GbxDialog",0,0,0);
  return;
}



// FUNCTION 14010b7c0 FUN_14010b7c0 body=58 status=ok
// SIG undefined FUN_14010b7c0(void)

void FUN_14010b7c0(void)

{
  UObjectCompiledInDefer
            (FUN_1405fb870,FUN_1405fb780,L"UDialogActionBlueprintImplementation",
             L"/Script/GbxDialog",0,0,0);
  return;
}



// FUNCTION 14010b800 FUN_14010b800 body=58 status=ok
// SIG undefined FUN_14010b800(void)

void FUN_14010b800(void)

{
  UObjectCompiledInDefer
            (FUN_1405ffae0,FUN_1405fb960,L"UDialogActionFunction",L"/Script/GbxDialog",0,0,0);
  return;
}



// FUNCTION 14010b840 FUN_14010b840 body=58 status=ok
// SIG undefined FUN_14010b840(void)

void FUN_14010b840(void)

{
  UObjectCompiledInDefer
            (FUN_1405fbcf0,FUN_1405fbb90,L"UDialogAudioComponentProvider",L"/Script/GbxDialog",0,0,0
            );
  return;
}



// FUNCTION 14010b880 FUN_14010b880 body=58 status=ok
// SIG undefined FUN_14010b880(void)

void FUN_14010b880(void)

{
  UObjectCompiledInDefer
            (FUN_1405ffb10,FUN_1405fbc30,L"UDialogAudioComponentProvider_OcclusionResistant",
             L"/Script/GbxDialog",0,0,0);
  return;
}



// FUNCTION 14010b8c0 FUN_14010b8c0 body=58 status=ok
// SIG undefined FUN_14010b8c0(void)

void FUN_14010b8c0(void)

{
  UObjectCompiledInDefer
            (FUN_1405ffb40,FUN_1405fbe90,L"UDialogBehaviorPreset",L"/Script/GbxDialog",0,0,0);
  return;
}



// FUNCTION 14010b900 FUN_14010b900 body=58 status=ok
// SIG undefined FUN_14010b900(void)

void FUN_14010b900(void)

{
  UObjectCompiledInDefer
            (FUN_1405ffb70,FUN_1405fb550,L"UDialogBlackboard",L"/Script/GbxDialog",0,0,0);
  return;
}



// FUNCTION 14010b940 FUN_14010b940 body=58 status=ok
// SIG undefined FUN_14010b940(void)

void FUN_14010b940(void)

{
  UObjectCompiledInDefer
            (FUN_1405ffba0,FUN_1405fc000,L"UDialogControlSystem",L"/Script/GbxDialog",0,0,0);
  return;
}



// FUNCTION 14010b980 FUN_14010b980 body=58 status=ok
// SIG undefined FUN_14010b980(void)

void FUN_14010b980(void)

{
  UObjectCompiledInDefer(FUN_1405ffbd0,FUN_1405fafe0,L"UDialogEnumType",L"/Script/GbxDialog",0,0,0);
  return;
}



// FUNCTION 14010b9c0 FUN_14010b9c0 body=58 status=ok
// SIG undefined FUN_14010b9c0(void)

void FUN_14010b9c0(void)

{
  UObjectCompiledInDefer(FUN_1405ffc00,FUN_1405fb150,L"UDialogEnumValue",L"/Script/GbxDialog",0,0,0)
  ;
  return;
}



// FUNCTION 14010ba00 FUN_14010ba00 body=58 status=ok
// SIG undefined FUN_14010ba00(void)

void FUN_14010ba00(void)

{
  UObjectCompiledInDefer
            (FUN_1405fb220,UUserObjectListEntry::GetPrivateStaticClass,L"UDialogEnumValueInterface",
             L"/Script/GbxDialog",0,0,0);
  return;
}



// FUNCTION 14010ba40 FUN_14010ba40 body=58 status=ok
// SIG undefined FUN_14010ba40(void)

void FUN_14010ba40(void)

{
  UObjectCompiledInDefer(FUN_1405ffc30,FUN_1405fb280,L"UDialogEvent",L"/Script/GbxDialog",0,0,0);
  return;
}



// FUNCTION 14010ba80 FUN_14010ba80 body=58 status=ok
// SIG undefined FUN_14010ba80(void)

void FUN_14010ba80(void)

{
  UObjectCompiledInDefer(FUN_1405ffc60,FUN_1405fb3d0,L"UDialogEventList",L"/Script/GbxDialog",0,0,0)
  ;
  return;
}



// FUNCTION 14010bac0 FUN_14010bac0 body=58 status=ok
// SIG undefined FUN_14010bac0(void)

void FUN_14010bac0(void)

{
  UObjectCompiledInDefer(FUN_1405ffc90,FUN_1405fba50,L"UDialogLineData",L"/Script/GbxDialog",0,0,0);
  return;
}



// FUNCTION 14010bb00 FUN_14010bb00 body=58 status=ok
// SIG undefined FUN_14010bb00(void)

void FUN_14010bb00(void)

{
  UObjectCompiledInDefer
            (FUN_1405ffcc0,FUN_1405fbf60,L"UDialogLookupSystem",L"/Script/GbxDialog",0,0,0);
  return;
}



// FUNCTION 14010bb40 FUN_14010bb40 body=58 status=ok
// SIG undefined FUN_14010bb40(void)

void FUN_14010bb40(void)

{
  UObjectCompiledInDefer(FUN_1405ffcf0,FUN_1405faf10,L"UDialogNameTag",L"/Script/GbxDialog",0,0,0);
  return;
}



// FUNCTION 14010bb80 FUN_14010bb80 body=58 status=ok
// SIG undefined FUN_14010bb80(void)

void FUN_14010bb80(void)

{
  UObjectCompiledInDefer
            (FUN_1405ffd20,FUN_1405fada0,L"UDialogNameTagMoodData",L"/Script/GbxDialog",0,0,0);
  return;
}



// FUNCTION 14010bbc0 FUN_14010bbc0 body=58 status=ok
// SIG undefined FUN_14010bbc0(void)

void FUN_14010bbc0(void)

{
  UObjectCompiledInDefer
            (FUN_1405fae50,FUN_1405fbd30,L"UQuietTimePredicate",L"/Script/GbxDialog",0,0,0);
  return;
}



// FUNCTION 14010bc00 FUN_14010bc00 body=58 status=ok
// SIG undefined FUN_14010bc00(void)

void FUN_14010bc00(void)

{
  UObjectCompiledInDefer
            (FUN_1405ffd50,FUN_1405fbdd0,L"UQuietTimePredicate_BlockStuff",L"/Script/GbxDialog",0,0,
             0);
  return;
}



// FUNCTION 14010be60 FUN_14010be60 body=92 status=ok
// SIG undefined FUN_14010be60(void)

void FUN_14010be60(void)

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
    *puVar1 = &PTR_FUN_144001b28;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"DialogPerformanceNotify",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14010bec0 FUN_14010bec0 body=92 status=ok
// SIG undefined FUN_14010bec0(void)

void FUN_14010bec0(void)

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
    *puVar1 = &PTR_FUN_144001ed0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"DialogTimeSlotReference",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14010bf20 FUN_14010bf20 body=66 status=ok
// SIG undefined FUN_14010bf20(void)

void FUN_14010bf20(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ETimeSlotEchoPreference",1);
  UObjectCompiledInDeferEnum(FUN_140601af0,L"/Script/GbxDialog",*puVar1,0,0);
  return;
}



// FUNCTION 14010bf70 FUN_14010bf70 body=66 status=ok
// SIG undefined FUN_14010bf70(void)

void FUN_14010bf70(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"DialogPerformanceNotify",1);
  UObjectCompiledInDeferStruct(FUN_140601ec0,L"/Script/GbxDialog",*puVar1,0,0);
  return;
}



// FUNCTION 14010bfc0 FUN_14010bfc0 body=66 status=ok
// SIG undefined FUN_14010bfc0(void)

void FUN_14010bfc0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"DialogTimeSlotReference",1);
  UObjectCompiledInDeferStruct(FUN_140601f40,L"/Script/GbxDialog",*puVar1,0,0);
  return;
}



// FUNCTION 14010c010 FUN_14010c010 body=58 status=ok
// SIG undefined FUN_14010c010(void)

void FUN_14010c010(void)

{
  UObjectCompiledInDefer(FUN_140601fc0,FUN_140600410,L"UDialogParameter",L"/Script/GbxDialog",0,0,0)
  ;
  return;
}



// FUNCTION 14010c050 FUN_14010c050 body=58 status=ok
// SIG undefined FUN_14010c050(void)

void FUN_14010c050(void)

{
  UObjectCompiledInDefer
            (FUN_140600620,UARTrackedObject::GetPrivateStaticClass,L"UDialogPerformanceData",
             L"/Script/GbxDialog",0,0,0);
  return;
}



// FUNCTION 14010c090 FUN_14010c090 body=58 status=ok
// SIG undefined FUN_14010c090(void)

void FUN_14010c090(void)

{
  UObjectCompiledInDefer
            (FUN_140601ff0,FUN_140600840,L"UDialogScriptData",L"/Script/GbxDialog",0,0,0);
  return;
}



// FUNCTION 14010c0d0 FUN_14010c0d0 body=58 status=ok
// SIG undefined FUN_14010c0d0(void)

void FUN_14010c0d0(void)

{
  UObjectCompiledInDefer
            (FUN_140602020,FUN_1406001d0,L"UDialogSelectorFunction",L"/Script/GbxDialog",0,0,0);
  return;
}



// FUNCTION 14010c110 FUN_14010c110 body=58 status=ok
// SIG undefined FUN_14010c110(void)

void FUN_14010c110(void)

{
  UObjectCompiledInDefer
            (FUN_140600f30,FUN_140600e90,L"UDialogSelectorImplementation",L"/Script/GbxDialog",0,0,0
            );
  return;
}



// FUNCTION 14010c150 FUN_14010c150 body=58 status=ok
// SIG undefined FUN_14010c150(void)

void FUN_14010c150(void)

{
  UObjectCompiledInDefer
            (FUN_140602050,FUN_140600fa0,L"UDialogSelectorImplementation_CheckDistance",
             L"/Script/GbxDialog",0,0,0);
  return;
}



// FUNCTION 14010c190 FUN_14010c190 body=58 status=ok
// SIG undefined FUN_14010c190(void)

void FUN_14010c190(void)

{
  UObjectCompiledInDefer
            (FUN_140602080,FUN_140601060,L"UDialogSelectorImplementation_CheckNameTag",
             L"/Script/GbxDialog",0,0,0);
  return;
}



// FUNCTION 14010c1d0 FUN_14010c1d0 body=58 status=ok
// SIG undefined FUN_14010c1d0(void)

void FUN_14010c1d0(void)

{
  UObjectCompiledInDefer
            (FUN_1406020b0,FUN_140601120,L"UDialogSelectorImplementation_Equality",
             L"/Script/GbxDialog",0,0,0);
  return;
}



// FUNCTION 14010c210 FUN_14010c210 body=58 status=ok
// SIG undefined FUN_14010c210(void)

void FUN_14010c210(void)

{
  UObjectCompiledInDefer
            (FUN_1406020e0,FUN_1406011e0,L"UDialogSelectorImplementation_IsPreferredPlayer",
             L"/Script/GbxDialog",0,0,0);
  return;
}



// FUNCTION 14010c250 FUN_14010c250 body=58 status=ok
// SIG undefined FUN_14010c250(void)

void FUN_14010c250(void)

{
  UObjectCompiledInDefer
            (FUN_1406013a0,UUserObjectListEntry::GetPrivateStaticClass,L"UDialogSpeakerInterface",
             L"/Script/GbxDialog",0,0,0);
  return;
}



// FUNCTION 14010c290 FUN_14010c290 body=58 status=ok
// SIG undefined FUN_14010c290(void)

void FUN_14010c290(void)

{
  UObjectCompiledInDefer(FUN_140602110,FUN_140600120,L"UDialogStyle",L"/Script/GbxDialog",0,0,0);
  return;
}



// FUNCTION 14010c2d0 FUN_14010c2d0 body=58 status=ok
// SIG undefined FUN_14010c2d0(void)

void FUN_14010c2d0(void)

{
  UObjectCompiledInDefer
            (FUN_140602140,FUN_1406002a0,L"UDialogSystemEchoManagerInterface",L"/Script/GbxDialog",0
             ,0,0);
  return;
}



// FUNCTION 14010c310 FUN_14010c310 body=58 status=ok
// SIG undefined FUN_14010c310(void)

void FUN_14010c310(void)

{
  UObjectCompiledInDefer
            (FUN_1406005b0,UCurveFloat::GetPrivateStaticClass,L"UDialogTimeSlotData",
             L"/Script/GbxDialog",0,0,0);
  return;
}



// FUNCTION 14010c350 FUN_14010c350 body=58 status=ok
// SIG undefined FUN_14010c350(void)

void FUN_14010c350(void)

{
  UObjectCompiledInDefer
            (FUN_140602170,FUN_140600680,L"UGameDialogSystemCustomizationInterface",
             L"/Script/GbxDialog",0,0,0);
  return;
}



// FUNCTION 14010c390 FUN_14010c390 body=58 status=ok
// SIG undefined FUN_14010c390(void)

void FUN_14010c390(void)

{
  UObjectCompiledInDefer
            (FUN_1406008f0,UBlueprintGameplayTagLibrary::GetPrivateStaticClass,
             L"UGbxDialogBlueprintLibrary",L"/Script/GbxDialog",0,0,0);
  return;
}



// FUNCTION 14010c540 FUN_14010c540 body=92 status=ok
// SIG undefined FUN_14010c540(void)

void FUN_14010c540(void)

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
    *puVar1 = &PTR_FUN_1440081e8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"CurrentDialogPerformanceInfo",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14010c5a0 FUN_14010c5a0 body=92 status=ok
// SIG undefined FUN_14010c5a0(void)

void FUN_14010c5a0(void)

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
    *puVar1 = &PTR_FUN_144007c70;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"DialogConditionRequirement",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14010c600 `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFEditableTextStyle'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFEditableTextStyle''(void)

void _dynamic_initializer_for__ScriptStruct_SlateCore_StaticRegisterNativesFEditableTextStyle__
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
    *(undefined4 *)(puVar1 + 1) = 0x218;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144007ea0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"DialogContext",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14010c660 FUN_14010c660 body=92 status=ok
// SIG undefined FUN_14010c660(void)

void FUN_14010c660(void)

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
    *puVar1 = &PTR_FUN_144008300;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"DialogConversation",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14010c6c0 FUN_14010c6c0 body=92 status=ok
// SIG undefined FUN_14010c6c0(void)

void FUN_14010c6c0(void)

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
    *puVar1 = &PTR_FUN_1440076f8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"DialogDecisionNode",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14010c720 FUN_14010c720 body=92 status=ok
// SIG undefined FUN_14010c720(void)

void FUN_14010c720(void)

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
    *puVar1 = &PTR_FUN_1440075e0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"DialogDecisionTree",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14010c780 FUN_14010c780 body=92 status=ok
// SIG undefined FUN_14010c780(void)

void FUN_14010c780(void)

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
    *puVar1 = &PTR_FUN_144007a40;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"DialogLookupDecision",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14010c7e0 FUN_14010c7e0 body=92 status=ok
// SIG undefined FUN_14010c7e0(void)

void FUN_14010c7e0(void)

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
    *puVar1 = &PTR_FUN_144007928;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"DialogLookupResult",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14010c840 FUN_14010c840 body=92 status=ok
// SIG undefined FUN_14010c840(void)

void FUN_14010c840(void)

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
    *puVar1 = &PTR_FUN_144007810;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"DialogLookupResultBucket",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14010c8a0 FUN_14010c8a0 body=92 status=ok
// SIG undefined FUN_14010c8a0(void)

void FUN_14010c8a0(void)

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
    *puVar1 = &PTR_FUN_143ff1948;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"DialogParameterMapping",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14010c900 FUN_14010c900 body=92 status=ok
// SIG undefined FUN_14010c900(void)

void FUN_14010c900(void)

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
    *puVar1 = &PTR_FUN_1440080d0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"DialogParameterType",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14010c960 FUN_14010c960 body=92 status=ok
// SIG undefined FUN_14010c960(void)

void FUN_14010c960(void)

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
    *puVar1 = &PTR_FUN_144007fb8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"DialogParameterValue",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14010c9c0 FUN_14010c9c0 body=92 status=ok
// SIG undefined FUN_14010c9c0(void)

void FUN_14010c9c0(void)

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
    *puVar1 = &PTR_FUN_144007d88;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"DialogScopeParameterInfo",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14010ca20 FUN_14010ca20 body=92 status=ok
// SIG undefined FUN_14010ca20(void)

void FUN_14010ca20(void)

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
    *puVar1 = &PTR_FUN_144007b58;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"DialogSelectionCondition",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14010ca80 FUN_14010ca80 body=92 status=ok
// SIG undefined FUN_14010ca80(void)

void FUN_14010ca80(void)

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
    *puVar1 = &PTR_FUN_144007d88;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"DialogSelectorFunctionCallInstance",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14010cae0 FUN_14010cae0 body=92 status=ok
// SIG undefined FUN_14010cae0(void)

void FUN_14010cae0(void)

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
    *puVar1 = &PTR_FUN_144007220;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"InitialDialogInProgress",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14010cb40 FUN_14010cb40 body=92 status=ok
// SIG undefined FUN_14010cb40(void)

void FUN_14010cb40(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0xa0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144008428;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"MovieSceneDialogSectionTemplate",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14010cba0 FUN_14010cba0 body=92 status=ok
// SIG undefined FUN_14010cba0(void)

void FUN_14010cba0(void)

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
    *puVar1 = &PTR_FUN_144008540;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"MovieSceneDialogSectionTemplateData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14010cc20 FUN_14010cc20 body=66 status=ok
// SIG undefined FUN_14010cc20(void)

void FUN_14010cc20(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ECachedResultLifetime",1);
  UObjectCompiledInDeferEnum(FUN_140606410,L"/Script/GbxDialog",*puVar1,0,0);
  return;
}



// FUNCTION 14010cc70 FUN_14010cc70 body=66 status=ok
// SIG undefined FUN_14010cc70(void)

void FUN_14010cc70(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EDialogDecisionTestResult",1);
  UObjectCompiledInDeferEnum(FUN_140606450,L"/Script/GbxDialog",*puVar1,0,0);
  return;
}



// FUNCTION 14010ccc0 FUN_14010ccc0 body=66 status=ok
// SIG undefined FUN_14010ccc0(void)

void FUN_14010ccc0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EDialogImplementationStatus",1);
  UObjectCompiledInDeferEnum(FUN_140606490,L"/Script/GbxDialog",*puVar1,0,0);
  return;
}



// FUNCTION 14010cd10 FUN_14010cd10 body=66 status=ok
// SIG undefined FUN_14010cd10(void)

void FUN_14010cd10(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EDialogParameterMappingSourceType",1);
  UObjectCompiledInDeferEnum(FUN_1406064d0,L"/Script/GbxDialog",*puVar1,0,0);
  return;
}



// FUNCTION 14010cd60 FUN_14010cd60 body=66 status=ok
// SIG undefined FUN_14010cd60(void)

void FUN_14010cd60(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EDialogParameterPrimaryType",1);
  UObjectCompiledInDeferEnum(FUN_140606510,L"/Script/GbxDialog",*puVar1,0,0);
  return;
}



// FUNCTION 14010cdb0 FUN_14010cdb0 body=66 status=ok
// SIG undefined FUN_14010cdb0(void)

void FUN_14010cdb0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGbxDialogCompileStatus",1);
  UObjectCompiledInDeferEnum(FUN_140606550,L"/Script/GbxDialog",*puVar1,0,0);
  return;
}



// FUNCTION 14010ce00 FUN_14010ce00 body=66 status=ok
// SIG undefined FUN_14010ce00(void)

void FUN_14010ce00(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGbxDialogConversationStatus",1);
  UObjectCompiledInDeferEnum(FUN_140606590,L"/Script/GbxDialog",*puVar1,0,0);
  return;
}



// FUNCTION 14010ce50 FUN_14010ce50 body=66 status=ok
// SIG undefined FUN_14010ce50(void)

void FUN_14010ce50(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGbxDialogInterruptStrategy",1);
  UObjectCompiledInDeferEnum(FUN_1406065d0,L"/Script/GbxDialog",*puVar1,0,0);
  return;
}



// FUNCTION 14010cea0 FUN_14010cea0 body=66 status=ok
// SIG undefined FUN_14010cea0(void)

void FUN_14010cea0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGbxDialogQuietTimeScope",1);
  UObjectCompiledInDeferEnum(FUN_140606610,L"/Script/GbxDialog",*puVar1,0,0);
  return;
}



// FUNCTION 14010cef0 FUN_14010cef0 body=66 status=ok
// SIG undefined FUN_14010cef0(void)

void FUN_14010cef0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGbxDialogSocialStrategy",1);
  UObjectCompiledInDeferEnum(FUN_140606650,L"/Script/GbxDialog",*puVar1,0,0);
  return;
}



// FUNCTION 14010cf40 FUN_14010cf40 body=66 status=ok
// SIG undefined FUN_14010cf40(void)

void FUN_14010cf40(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ELineScorePriorityMode",1);
  UObjectCompiledInDeferEnum(FUN_140606690,L"/Script/GbxDialog",*puVar1,0,0);
  return;
}



// FUNCTION 14010cf90 FUN_14010cf90 body=66 status=ok
// SIG undefined FUN_14010cf90(void)

void FUN_14010cf90(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"CurrentDialogPerformanceInfo",1);
  UObjectCompiledInDeferStruct
            (FNiagaraTypeLayoutInfo::StaticStruct,L"/Script/GbxDialog",*puVar1,0,0);
  return;
}



// FUNCTION 14010cfe0 FUN_14010cfe0 body=66 status=ok
// SIG undefined FUN_14010cfe0(void)

void FUN_14010cfe0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"DialogConditionRequirement",1);
  UObjectCompiledInDeferStruct(FUN_140606b10,L"/Script/GbxDialog",*puVar1,0,0);
  return;
}



// FUNCTION 14010d030 FUN_14010d030 body=66 status=ok
// SIG undefined FUN_14010d030(void)

void FUN_14010d030(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"DialogContext",1);
  UObjectCompiledInDeferStruct
            (FNiagaraSystemCompiledData::StaticStruct,L"/Script/GbxDialog",*puVar1,0,0);
  return;
}



// FUNCTION 14010d080 FUN_14010d080 body=66 status=ok
// SIG undefined FUN_14010d080(void)

void FUN_14010d080(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"DialogConversation",1);
  UObjectCompiledInDeferStruct
            (FNiagaraPlatformSetConflictEntry::StaticStruct,L"/Script/GbxDialog",*puVar1,0,0);
  return;
}



// FUNCTION 14010d0d0 FUN_14010d0d0 body=66 status=ok
// SIG undefined FUN_14010d0d0(void)

void FUN_14010d0d0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"DialogDecisionNode",1);
  UObjectCompiledInDeferStruct(FBasicParticleData::StaticStruct,L"/Script/GbxDialog",*puVar1,0,0);
  return;
}


