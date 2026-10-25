// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1413e8790 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_140a169f0(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 1413e8850 FUN_1413e8850 body=287 status=ok
// SIG undefined FUN_1413e8850(void)

void FUN_1413e8850(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  undefined1 local_328 [128];
  undefined1 local_2a8 [128];
  undefined1 local_228 [128];
  undefined1 local_1a8;
  undefined1 local_198 [128];
  undefined1 local_118 [128];
  undefined1 local_98 [128];
  undefined1 local_18;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FUN_1409f3cc0(local_328);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_328);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_328);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142de2b80(local_198,local_328);
  FUN_142de2b80(local_118,local_2a8);
  FUN_142de2b80(local_98,local_228);
  local_18 = local_1a8;
  FUN_140a16a80(param_1,local_res10,local_198);
  return;
}



// FUNCTION 1413e8970 FUN_1413e8970 body=128 status=ok
// SIG undefined FUN_1413e8970(void)

void FUN_1413e8970(undefined8 param_1,longlong param_2)

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
  FUN_140a16ad0(param_1,local_res10);
  return;
}



// FUNCTION 1413e89f0 FUN_1413e89f0 body=210 status=ok
// SIG undefined FUN_1413e89f0(void)

void FUN_1413e89f0(undefined8 param_1,longlong param_2)

{
  undefined1 local_328 [128];
  undefined1 local_2a8 [128];
  undefined1 local_228 [128];
  undefined1 local_1a8;
  undefined1 local_198 [128];
  undefined1 local_118 [128];
  undefined1 local_98 [128];
  undefined1 local_18;
  
  FUN_1409f3cc0(local_328);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_328);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_328);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142de2b80(local_198,local_328);
  FUN_142de2b80(local_118,local_2a8);
  FUN_142de2b80(local_98,local_228);
  local_18 = local_1a8;
  FUN_140a16d00(param_1,local_198);
  return;
}



// FUNCTION 1413e8ad0 FUN_1413e8ad0 body=493 status=ok
// SIG undefined FUN_1413e8ad0(void)

void FUN_1413e8ad0(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  int local_res10 [2];
  undefined4 local_res20 [2];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8 [2];
  undefined1 local_a8 [12];
  undefined4 local_9c;
  
  local_b8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_b8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  local_c0 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_c0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  local_c8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_c8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar2 = local_res10[0] != 0;
  _guard_xfg_dispatch_icall_nop(local_a8,0,0x90);
  local_9c = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  puVar1 = local_a8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1412416d0(param_1,local_b8[0],local_c0,local_c8,local_res20[0],bVar2,puVar1);
  return;
}



// FUNCTION 1413e8cd0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UFGFactorySettings::GetPrivateStaticClass(void)

{
  if (DAT_14688ddd8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakAutomationActorComponent",&DAT_14688ddd8,FUN_140447710,
                  0x178,0x10000001,0,L"Engine",FUN_1413eabb0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_14688ddd8;
}



// FUNCTION 1413e8d90 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UDungeonMarkerEmitter::GetPrivateStaticClass(void)

{
  if (DAT_14688de10 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakAutomationHelper",&DAT_14688de10,FUN_1413eb940,0x28,
                  0x10000001,0,L"Engine",FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_14688de10;
}



// FUNCTION 1413e8e30 FUN_1413e8e30 body=47 status=ok
// SIG undefined FUN_1413e8e30(void)

longlong FUN_1413e8e30(void)

{
  if (DAT_14688de08 == 0) {
    FUN_141786440(&DAT_14688de08,&PTR_GetPrivateStaticClass_1449da850);
  }
  return DAT_14688de08;
}



// FUNCTION 1413e8e60 FUN_1413e8e60 body=47 status=ok
// SIG undefined FUN_1413e8e60(void)

longlong FUN_1413e8e60(void)

{
  if (DAT_14688dde0 == 0) {
    FUN_141786a30(&DAT_14688dde0,&PTR_FUN_146394290);
  }
  return DAT_14688dde0;
}



// FUNCTION 1413e8e90 FUN_1413e8e90 body=47 status=ok
// SIG undefined FUN_1413e8e90(void)

longlong FUN_1413e8e90(void)

{
  if (DAT_14688dde8 == 0) {
    FUN_141786a30(&DAT_14688dde8,&PTR_FUN_1463943d0);
  }
  return DAT_14688dde8;
}



// FUNCTION 1413e8ec0 FUN_1413e8ec0 body=47 status=ok
// SIG undefined FUN_1413e8ec0(void)

longlong FUN_1413e8ec0(void)

{
  if (DAT_14688ddf0 == 0) {
    FUN_141786a30(&DAT_14688ddf0,&PTR_FUN_146394490);
  }
  return DAT_14688ddf0;
}



// FUNCTION 1413e8ef0 FUN_1413e8ef0 body=47 status=ok
// SIG undefined FUN_1413e8ef0(void)

longlong FUN_1413e8ef0(void)

{
  if (DAT_14688ddf8 == 0) {
    FUN_141786a30(&DAT_14688ddf8,&PTR_FUN_146394590);
  }
  return DAT_14688ddf8;
}



// FUNCTION 1413e8f20 FUN_1413e8f20 body=47 status=ok
// SIG undefined FUN_1413e8f20(void)

longlong FUN_1413e8f20(void)

{
  if (DAT_14688de00 == 0) {
    FUN_141786a30(&DAT_14688de00,&PTR_FUN_1463946d0);
  }
  return DAT_14688de00;
}



// FUNCTION 1413e8f70 FUN_1413e8f70 body=47 status=ok
// SIG undefined FUN_1413e8f70(void)

longlong FUN_1413e8f70(void)

{
  if (DAT_14688e118 == 0) {
    FUN_141786440(&DAT_14688e118,&PTR_GetPrivateStaticClass_1449e9260);
  }
  return DAT_14688e118;
}



// FUNCTION 1413e8fa0 FUN_1413e8fa0 body=47 status=ok
// SIG undefined FUN_1413e8fa0(void)

longlong FUN_1413e8fa0(void)

{
  if (DAT_14688de68 == 0) {
    FUN_141786a30(&DAT_14688de68,&PTR_FUN_146394b90);
  }
  return DAT_14688de68;
}



// FUNCTION 1413e8fd0 FUN_1413e8fd0 body=47 status=ok
// SIG undefined FUN_1413e8fd0(void)

longlong FUN_1413e8fd0(void)

{
  if (DAT_14688de70 == 0) {
    FUN_141786a30(&DAT_14688de70,&PTR_FUN_146394cd0);
  }
  return DAT_14688de70;
}



// FUNCTION 1413e9000 FUN_1413e9000 body=47 status=ok
// SIG undefined FUN_1413e9000(void)

longlong FUN_1413e9000(void)

{
  if (DAT_14688de78 == 0) {
    FUN_141786a30(&DAT_14688de78,&PTR_FUN_146394d90);
  }
  return DAT_14688de78;
}



// FUNCTION 1413e9030 FUN_1413e9030 body=47 status=ok
// SIG undefined FUN_1413e9030(void)

longlong FUN_1413e9030(void)

{
  if (DAT_14688de80 == 0) {
    FUN_141786a30(&DAT_14688de80,&PTR_FUN_146394ed0);
  }
  return DAT_14688de80;
}



// FUNCTION 1413e9060 FUN_1413e9060 body=47 status=ok
// SIG undefined FUN_1413e9060(void)

longlong FUN_1413e9060(void)

{
  if (DAT_14688de88 == 0) {
    FUN_141786a30(&DAT_14688de88,&PTR_FUN_146394fd0);
  }
  return DAT_14688de88;
}



// FUNCTION 1413e9090 FUN_1413e9090 body=47 status=ok
// SIG undefined FUN_1413e9090(void)

longlong FUN_1413e9090(void)

{
  if (DAT_14688de90 == 0) {
    FUN_141786a30(&DAT_14688de90,&PTR_FUN_146395090);
  }
  return DAT_14688de90;
}



// FUNCTION 1413e90c0 FUN_1413e90c0 body=47 status=ok
// SIG undefined FUN_1413e90c0(void)

longlong FUN_1413e90c0(void)

{
  if (DAT_14688de98 == 0) {
    FUN_141786a30(&DAT_14688de98,&PTR_FUN_146395210);
  }
  return DAT_14688de98;
}



// FUNCTION 1413e90f0 FUN_1413e90f0 body=47 status=ok
// SIG undefined FUN_1413e90f0(void)

longlong FUN_1413e90f0(void)

{
  if (DAT_14688dea0 == 0) {
    FUN_141786a30(&DAT_14688dea0,&PTR_FUN_146395450);
  }
  return DAT_14688dea0;
}



// FUNCTION 1413e9120 FUN_1413e9120 body=47 status=ok
// SIG undefined FUN_1413e9120(void)

longlong FUN_1413e9120(void)

{
  if (DAT_14688dea8 == 0) {
    FUN_141786a30(&DAT_14688dea8,&PTR_FUN_146395650);
  }
  return DAT_14688dea8;
}



// FUNCTION 1413e9150 FUN_1413e9150 body=47 status=ok
// SIG undefined FUN_1413e9150(void)

longlong FUN_1413e9150(void)

{
  if (DAT_14688deb0 == 0) {
    FUN_141786a30(&DAT_14688deb0,&PTR_FUN_146395710);
  }
  return DAT_14688deb0;
}



// FUNCTION 1413e9180 FUN_1413e9180 body=47 status=ok
// SIG undefined FUN_1413e9180(void)

longlong FUN_1413e9180(void)

{
  if (DAT_14688deb8 == 0) {
    FUN_141786a30(&DAT_14688deb8,&PTR_FUN_146395790);
  }
  return DAT_14688deb8;
}



// FUNCTION 1413e91b0 FUN_1413e91b0 body=47 status=ok
// SIG undefined FUN_1413e91b0(void)

longlong FUN_1413e91b0(void)

{
  if (DAT_14688dec0 == 0) {
    FUN_141786a30(&DAT_14688dec0,&PTR_FUN_146395990);
  }
  return DAT_14688dec0;
}



// FUNCTION 1413e91e0 FUN_1413e91e0 body=47 status=ok
// SIG undefined FUN_1413e91e0(void)

longlong FUN_1413e91e0(void)

{
  if (DAT_14688dec8 == 0) {
    FUN_141786a30(&DAT_14688dec8,&PTR_FUN_146395b30);
  }
  return DAT_14688dec8;
}



// FUNCTION 1413e9210 FUN_1413e9210 body=47 status=ok
// SIG undefined FUN_1413e9210(void)

longlong FUN_1413e9210(void)

{
  if (DAT_14688ded0 == 0) {
    FUN_141786a30(&DAT_14688ded0,&PTR_FUN_146395bb0);
  }
  return DAT_14688ded0;
}



// FUNCTION 1413e9240 FUN_1413e9240 body=47 status=ok
// SIG undefined FUN_1413e9240(void)

longlong FUN_1413e9240(void)

{
  if (DAT_14688ded8 == 0) {
    FUN_141786a30(&DAT_14688ded8,&PTR_FUN_146395c30);
  }
  return DAT_14688ded8;
}



// FUNCTION 1413e9270 FUN_1413e9270 body=47 status=ok
// SIG undefined FUN_1413e9270(void)

longlong FUN_1413e9270(void)

{
  if (DAT_14688dee0 == 0) {
    FUN_141786a30(&DAT_14688dee0,&PTR_FUN_146395cb0);
  }
  return DAT_14688dee0;
}



// FUNCTION 1413e92a0 FUN_1413e92a0 body=47 status=ok
// SIG undefined FUN_1413e92a0(void)

longlong FUN_1413e92a0(void)

{
  if (DAT_14688dee8 == 0) {
    FUN_141786a30(&DAT_14688dee8,&PTR_FUN_146395df0);
  }
  return DAT_14688dee8;
}



// FUNCTION 1413e92d0 FUN_1413e92d0 body=47 status=ok
// SIG undefined FUN_1413e92d0(void)

longlong FUN_1413e92d0(void)

{
  if (DAT_14688def0 == 0) {
    FUN_141786a30(&DAT_14688def0,&PTR_FUN_146395ef0);
  }
  return DAT_14688def0;
}



// FUNCTION 1413e9300 FUN_1413e9300 body=47 status=ok
// SIG undefined FUN_1413e9300(void)

longlong FUN_1413e9300(void)

{
  if (DAT_14688def8 == 0) {
    FUN_141786a30(&DAT_14688def8,&PTR_FUN_146395ff0);
  }
  return DAT_14688def8;
}



// FUNCTION 1413e9330 FUN_1413e9330 body=47 status=ok
// SIG undefined FUN_1413e9330(void)

longlong FUN_1413e9330(void)

{
  if (DAT_14688df00 == 0) {
    FUN_141786a30(&DAT_14688df00,&PTR_FUN_1463960f0);
  }
  return DAT_14688df00;
}



// FUNCTION 1413e9360 FUN_1413e9360 body=47 status=ok
// SIG undefined FUN_1413e9360(void)

longlong FUN_1413e9360(void)

{
  if (DAT_14688df08 == 0) {
    FUN_141786a30(&DAT_14688df08,&PTR_FUN_1463961b0);
  }
  return DAT_14688df08;
}



// FUNCTION 1413e9390 FUN_1413e9390 body=47 status=ok
// SIG undefined FUN_1413e9390(void)

longlong FUN_1413e9390(void)

{
  if (DAT_14688df10 == 0) {
    FUN_141786a30(&DAT_14688df10,&PTR_FUN_146396330);
  }
  return DAT_14688df10;
}



// FUNCTION 1413e93c0 FUN_1413e93c0 body=47 status=ok
// SIG undefined FUN_1413e93c0(void)

longlong FUN_1413e93c0(void)

{
  if (DAT_14688df18 == 0) {
    FUN_141786a30(&DAT_14688df18,&PTR_FUN_146396480);
  }
  return DAT_14688df18;
}



// FUNCTION 1413e93f0 FUN_1413e93f0 body=47 status=ok
// SIG undefined FUN_1413e93f0(void)

longlong FUN_1413e93f0(void)

{
  if (DAT_14688df20 == 0) {
    FUN_141786a30(&DAT_14688df20,&PTR_FUN_146396580);
  }
  return DAT_14688df20;
}



// FUNCTION 1413e9420 FUN_1413e9420 body=47 status=ok
// SIG undefined FUN_1413e9420(void)

longlong FUN_1413e9420(void)

{
  if (DAT_14688df28 == 0) {
    FUN_141786a30(&DAT_14688df28,&PTR_FUN_146396640);
  }
  return DAT_14688df28;
}



// FUNCTION 1413e9450 FUN_1413e9450 body=47 status=ok
// SIG undefined FUN_1413e9450(void)

longlong FUN_1413e9450(void)

{
  if (DAT_14688df30 == 0) {
    FUN_141786a30(&DAT_14688df30,&PTR_FUN_146396700);
  }
  return DAT_14688df30;
}



// FUNCTION 1413e9480 FUN_1413e9480 body=47 status=ok
// SIG undefined FUN_1413e9480(void)

longlong FUN_1413e9480(void)

{
  if (DAT_14688df38 == 0) {
    FUN_141786a30(&DAT_14688df38,&PTR_FUN_146396800);
  }
  return DAT_14688df38;
}



// FUNCTION 1413e94b0 FUN_1413e94b0 body=47 status=ok
// SIG undefined FUN_1413e94b0(void)

longlong FUN_1413e94b0(void)

{
  if (DAT_14688df40 == 0) {
    FUN_141786a30(&DAT_14688df40,&PTR_FUN_1463968c0);
  }
  return DAT_14688df40;
}



// FUNCTION 1413e94e0 FUN_1413e94e0 body=47 status=ok
// SIG undefined FUN_1413e94e0(void)

longlong FUN_1413e94e0(void)

{
  if (DAT_14688df48 == 0) {
    FUN_141786a30(&DAT_14688df48,&PTR_FUN_146396980);
  }
  return DAT_14688df48;
}



// FUNCTION 1413e9510 FUN_1413e9510 body=47 status=ok
// SIG undefined FUN_1413e9510(void)

longlong FUN_1413e9510(void)

{
  if (DAT_14688df50 == 0) {
    FUN_141786a30(&DAT_14688df50,&PTR_FUN_146396a40);
  }
  return DAT_14688df50;
}



// FUNCTION 1413e9540 FUN_1413e9540 body=47 status=ok
// SIG undefined FUN_1413e9540(void)

longlong FUN_1413e9540(void)

{
  if (DAT_14688df58 == 0) {
    FUN_141786a30(&DAT_14688df58,&PTR_FUN_146396bd0);
  }
  return DAT_14688df58;
}



// FUNCTION 1413e9570 FUN_1413e9570 body=47 status=ok
// SIG undefined FUN_1413e9570(void)

longlong FUN_1413e9570(void)

{
  if (DAT_14688df60 == 0) {
    FUN_141786a30(&DAT_14688df60,&PTR_FUN_146396cd0);
  }
  return DAT_14688df60;
}



// FUNCTION 1413e95a0 FUN_1413e95a0 body=47 status=ok
// SIG undefined FUN_1413e95a0(void)

longlong FUN_1413e95a0(void)

{
  if (DAT_14688df68 == 0) {
    FUN_141786a30(&DAT_14688df68,&PTR_FUN_146396de0);
  }
  return DAT_14688df68;
}



// FUNCTION 1413e95d0 FUN_1413e95d0 body=47 status=ok
// SIG undefined FUN_1413e95d0(void)

longlong FUN_1413e95d0(void)

{
  if (DAT_14688df70 == 0) {
    FUN_141786a30(&DAT_14688df70,&PTR_FUN_146396ea0);
  }
  return DAT_14688df70;
}



// FUNCTION 1413e9600 FUN_1413e9600 body=47 status=ok
// SIG undefined FUN_1413e9600(void)

longlong FUN_1413e9600(void)

{
  if (DAT_14688df78 == 0) {
    FUN_141786a30(&DAT_14688df78,&PTR_FUN_146396f60);
  }
  return DAT_14688df78;
}



// FUNCTION 1413e9630 FUN_1413e9630 body=47 status=ok
// SIG undefined FUN_1413e9630(void)

longlong FUN_1413e9630(void)

{
  if (DAT_14688df80 == 0) {
    FUN_141786a30(&DAT_14688df80,&PTR_FUN_146397060);
  }
  return DAT_14688df80;
}



// FUNCTION 1413e9660 FUN_1413e9660 body=47 status=ok
// SIG undefined FUN_1413e9660(void)

longlong FUN_1413e9660(void)

{
  if (DAT_14688df88 == 0) {
    FUN_141786a30(&DAT_14688df88,&PTR_FUN_1463971b0);
  }
  return DAT_14688df88;
}



// FUNCTION 1413e9690 FUN_1413e9690 body=47 status=ok
// SIG undefined FUN_1413e9690(void)

longlong FUN_1413e9690(void)

{
  if (DAT_14688df90 == 0) {
    FUN_141786a30(&DAT_14688df90,&PTR_FUN_1463972b0);
  }
  return DAT_14688df90;
}



// FUNCTION 1413e96c0 FUN_1413e96c0 body=47 status=ok
// SIG undefined FUN_1413e96c0(void)

longlong FUN_1413e96c0(void)

{
  if (DAT_14688df98 == 0) {
    FUN_141786a30(&DAT_14688df98,&PTR_FUN_1463973b0);
  }
  return DAT_14688df98;
}



// FUNCTION 1413e96f0 FUN_1413e96f0 body=47 status=ok
// SIG undefined FUN_1413e96f0(void)

longlong FUN_1413e96f0(void)

{
  if (DAT_14688dfa0 == 0) {
    FUN_141786a30(&DAT_14688dfa0,&PTR_FUN_146397480);
  }
  return DAT_14688dfa0;
}



// FUNCTION 1413e9720 FUN_1413e9720 body=47 status=ok
// SIG undefined FUN_1413e9720(void)

longlong FUN_1413e9720(void)

{
  if (DAT_14688dfa8 == 0) {
    FUN_141786a30(&DAT_14688dfa8,&PTR_FUN_146397550);
  }
  return DAT_14688dfa8;
}



// FUNCTION 1413e9750 FUN_1413e9750 body=47 status=ok
// SIG undefined FUN_1413e9750(void)

longlong FUN_1413e9750(void)

{
  if (DAT_14688dfb0 == 0) {
    FUN_141786a30(&DAT_14688dfb0,&PTR_FUN_146397620);
  }
  return DAT_14688dfb0;
}



// FUNCTION 1413e9780 FUN_1413e9780 body=47 status=ok
// SIG undefined FUN_1413e9780(void)

longlong FUN_1413e9780(void)

{
  if (DAT_14688dfb8 == 0) {
    FUN_141786a30(&DAT_14688dfb8,&PTR_FUN_146397780);
  }
  return DAT_14688dfb8;
}



// FUNCTION 1413e97b0 FUN_1413e97b0 body=47 status=ok
// SIG undefined FUN_1413e97b0(void)

longlong FUN_1413e97b0(void)

{
  if (DAT_14688dfc0 == 0) {
    FUN_141786a30(&DAT_14688dfc0,&PTR_FUN_146397890);
  }
  return DAT_14688dfc0;
}



// FUNCTION 1413e97e0 FUN_1413e97e0 body=47 status=ok
// SIG undefined FUN_1413e97e0(void)

longlong FUN_1413e97e0(void)

{
  if (DAT_14688dfc8 == 0) {
    FUN_141786a30(&DAT_14688dfc8,&PTR_FUN_146397960);
  }
  return DAT_14688dfc8;
}



// FUNCTION 1413e9810 FUN_1413e9810 body=47 status=ok
// SIG undefined FUN_1413e9810(void)

longlong FUN_1413e9810(void)

{
  if (DAT_14688dfd0 == 0) {
    FUN_141786a30(&DAT_14688dfd0,&PTR_FUN_146397a20);
  }
  return DAT_14688dfd0;
}



// FUNCTION 1413e9840 FUN_1413e9840 body=47 status=ok
// SIG undefined FUN_1413e9840(void)

longlong FUN_1413e9840(void)

{
  if (DAT_14688dfd8 == 0) {
    FUN_141786a30(&DAT_14688dfd8,&PTR_FUN_146397b20);
  }
  return DAT_14688dfd8;
}



// FUNCTION 1413e9870 FUN_1413e9870 body=47 status=ok
// SIG undefined FUN_1413e9870(void)

longlong FUN_1413e9870(void)

{
  if (DAT_14688dfe0 == 0) {
    FUN_141786a30(&DAT_14688dfe0,&PTR_FUN_146397c80);
  }
  return DAT_14688dfe0;
}



// FUNCTION 1413e98a0 FUN_1413e98a0 body=47 status=ok
// SIG undefined FUN_1413e98a0(void)

longlong FUN_1413e98a0(void)

{
  if (DAT_14688dfe8 == 0) {
    FUN_141786a30(&DAT_14688dfe8,&PTR_FUN_146397d80);
  }
  return DAT_14688dfe8;
}



// FUNCTION 1413e98d0 FUN_1413e98d0 body=47 status=ok
// SIG undefined FUN_1413e98d0(void)

longlong FUN_1413e98d0(void)

{
  if (DAT_14688dff0 == 0) {
    FUN_141786a30(&DAT_14688dff0,&PTR_FUN_146397ec0);
  }
  return DAT_14688dff0;
}



// FUNCTION 1413e9900 FUN_1413e9900 body=47 status=ok
// SIG undefined FUN_1413e9900(void)

longlong FUN_1413e9900(void)

{
  if (DAT_14688dff8 == 0) {
    FUN_141786a30(&DAT_14688dff8,&PTR_FUN_146397f80);
  }
  return DAT_14688dff8;
}



// FUNCTION 1413e9930 FUN_1413e9930 body=47 status=ok
// SIG undefined FUN_1413e9930(void)

longlong FUN_1413e9930(void)

{
  if (DAT_14688e000 == 0) {
    FUN_141786a30(&DAT_14688e000,&PTR_FUN_146398050);
  }
  return DAT_14688e000;
}



// FUNCTION 1413e9960 FUN_1413e9960 body=47 status=ok
// SIG undefined FUN_1413e9960(void)

longlong FUN_1413e9960(void)

{
  if (DAT_14688e008 == 0) {
    FUN_141786a30(&DAT_14688e008,&PTR_FUN_146398190);
  }
  return DAT_14688e008;
}



// FUNCTION 1413e9990 FUN_1413e9990 body=47 status=ok
// SIG undefined FUN_1413e9990(void)

longlong FUN_1413e9990(void)

{
  if (DAT_14688e010 == 0) {
    FUN_141786a30(&DAT_14688e010,&PTR_FUN_146398210);
  }
  return DAT_14688e010;
}



// FUNCTION 1413e99c0 FUN_1413e99c0 body=47 status=ok
// SIG undefined FUN_1413e99c0(void)

longlong FUN_1413e99c0(void)

{
  if (DAT_14688e018 == 0) {
    FUN_141786a30(&DAT_14688e018,&PTR_FUN_1463982d0);
  }
  return DAT_14688e018;
}



// FUNCTION 1413e99f0 FUN_1413e99f0 body=47 status=ok
// SIG undefined FUN_1413e99f0(void)

longlong FUN_1413e99f0(void)

{
  if (DAT_14688e020 == 0) {
    FUN_141786a30(&DAT_14688e020,&PTR_FUN_146398390);
  }
  return DAT_14688e020;
}



// FUNCTION 1413e9a20 FUN_1413e9a20 body=47 status=ok
// SIG undefined FUN_1413e9a20(void)

longlong FUN_1413e9a20(void)

{
  if (DAT_14688e028 == 0) {
    FUN_141786a30(&DAT_14688e028,&PTR_FUN_146398450);
  }
  return DAT_14688e028;
}



// FUNCTION 1413e9a50 FUN_1413e9a50 body=47 status=ok
// SIG undefined FUN_1413e9a50(void)

longlong FUN_1413e9a50(void)

{
  if (DAT_14688e030 == 0) {
    FUN_141786a30(&DAT_14688e030,&PTR_FUN_146398510);
  }
  return DAT_14688e030;
}



// FUNCTION 1413e9a80 FUN_1413e9a80 body=47 status=ok
// SIG undefined FUN_1413e9a80(void)

longlong FUN_1413e9a80(void)

{
  if (DAT_14688e038 == 0) {
    FUN_141786a30(&DAT_14688e038,&PTR_FUN_1463985d0);
  }
  return DAT_14688e038;
}



// FUNCTION 1413e9ab0 FUN_1413e9ab0 body=47 status=ok
// SIG undefined FUN_1413e9ab0(void)

longlong FUN_1413e9ab0(void)

{
  if (DAT_14688e040 == 0) {
    FUN_141786a30(&DAT_14688e040,&PTR_FUN_146398690);
  }
  return DAT_14688e040;
}



// FUNCTION 1413e9ae0 FUN_1413e9ae0 body=47 status=ok
// SIG undefined FUN_1413e9ae0(void)

longlong FUN_1413e9ae0(void)

{
  if (DAT_14688e048 == 0) {
    FUN_141786a30(&DAT_14688e048,&PTR_FUN_146398750);
  }
  return DAT_14688e048;
}



// FUNCTION 1413e9b10 FUN_1413e9b10 body=47 status=ok
// SIG undefined FUN_1413e9b10(void)

longlong FUN_1413e9b10(void)

{
  if (DAT_14688e050 == 0) {
    FUN_141786a30(&DAT_14688e050,&PTR_FUN_146398810);
  }
  return DAT_14688e050;
}



// FUNCTION 1413e9b40 FUN_1413e9b40 body=47 status=ok
// SIG undefined FUN_1413e9b40(void)

longlong FUN_1413e9b40(void)

{
  if (DAT_14688e058 == 0) {
    FUN_141786a30(&DAT_14688e058,&PTR_FUN_1463988d0);
  }
  return DAT_14688e058;
}



// FUNCTION 1413e9b70 FUN_1413e9b70 body=47 status=ok
// SIG undefined FUN_1413e9b70(void)

longlong FUN_1413e9b70(void)

{
  if (DAT_14688e060 == 0) {
    FUN_141786a30(&DAT_14688e060,&PTR_FUN_146398990);
  }
  return DAT_14688e060;
}



// FUNCTION 1413e9ba0 FUN_1413e9ba0 body=47 status=ok
// SIG undefined FUN_1413e9ba0(void)

longlong FUN_1413e9ba0(void)

{
  if (DAT_14688e068 == 0) {
    FUN_141786a30(&DAT_14688e068,&PTR_FUN_146398a50);
  }
  return DAT_14688e068;
}



// FUNCTION 1413e9bd0 FUN_1413e9bd0 body=47 status=ok
// SIG undefined FUN_1413e9bd0(void)

longlong FUN_1413e9bd0(void)

{
  if (DAT_14688e070 == 0) {
    FUN_141786a30(&DAT_14688e070,&PTR_FUN_146398b10);
  }
  return DAT_14688e070;
}



// FUNCTION 1413e9c00 FUN_1413e9c00 body=47 status=ok
// SIG undefined FUN_1413e9c00(void)

longlong FUN_1413e9c00(void)

{
  if (DAT_14688e078 == 0) {
    FUN_141786a30(&DAT_14688e078,&PTR_FUN_146398bd0);
  }
  return DAT_14688e078;
}



// FUNCTION 1413e9c30 FUN_1413e9c30 body=47 status=ok
// SIG undefined FUN_1413e9c30(void)

longlong FUN_1413e9c30(void)

{
  if (DAT_14688e080 == 0) {
    FUN_141786a30(&DAT_14688e080,&PTR_FUN_146398c90);
  }
  return DAT_14688e080;
}



// FUNCTION 1413e9c60 FUN_1413e9c60 body=47 status=ok
// SIG undefined FUN_1413e9c60(void)

longlong FUN_1413e9c60(void)

{
  if (DAT_14688e088 == 0) {
    FUN_141786a30(&DAT_14688e088,&PTR_FUN_146398d50);
  }
  return DAT_14688e088;
}



// FUNCTION 1413e9c90 FUN_1413e9c90 body=47 status=ok
// SIG undefined FUN_1413e9c90(void)

longlong FUN_1413e9c90(void)

{
  if (DAT_14688e090 == 0) {
    FUN_141786a30(&DAT_14688e090,&PTR_FUN_146398e10);
  }
  return DAT_14688e090;
}



// FUNCTION 1413e9cc0 FUN_1413e9cc0 body=47 status=ok
// SIG undefined FUN_1413e9cc0(void)

longlong FUN_1413e9cc0(void)

{
  if (DAT_14688e098 == 0) {
    FUN_141786a30(&DAT_14688e098,&PTR_FUN_146398ed0);
  }
  return DAT_14688e098;
}



// FUNCTION 1413e9cf0 FUN_1413e9cf0 body=47 status=ok
// SIG undefined FUN_1413e9cf0(void)

longlong FUN_1413e9cf0(void)

{
  if (DAT_14688e0a0 == 0) {
    FUN_141786a30(&DAT_14688e0a0,&PTR_FUN_146398f90);
  }
  return DAT_14688e0a0;
}



// FUNCTION 1413e9d20 FUN_1413e9d20 body=47 status=ok
// SIG undefined FUN_1413e9d20(void)

longlong FUN_1413e9d20(void)

{
  if (DAT_14688e0a8 == 0) {
    FUN_141786a30(&DAT_14688e0a8,&PTR_FUN_146399050);
  }
  return DAT_14688e0a8;
}



// FUNCTION 1413e9d50 FUN_1413e9d50 body=47 status=ok
// SIG undefined FUN_1413e9d50(void)

longlong FUN_1413e9d50(void)

{
  if (DAT_14688e0b0 == 0) {
    FUN_141786a30(&DAT_14688e0b0,&PTR_FUN_146399110);
  }
  return DAT_14688e0b0;
}



// FUNCTION 1413e9d80 FUN_1413e9d80 body=47 status=ok
// SIG undefined FUN_1413e9d80(void)

longlong FUN_1413e9d80(void)

{
  if (DAT_14688e0b8 == 0) {
    FUN_141786a30(&DAT_14688e0b8,&PTR_FUN_1463991e0);
  }
  return DAT_14688e0b8;
}



// FUNCTION 1413e9db0 FUN_1413e9db0 body=47 status=ok
// SIG undefined FUN_1413e9db0(void)

longlong FUN_1413e9db0(void)

{
  if (DAT_14688e0c0 == 0) {
    FUN_141786a30(&DAT_14688e0c0,&PTR_FUN_146399370);
  }
  return DAT_14688e0c0;
}



// FUNCTION 1413e9de0 FUN_1413e9de0 body=47 status=ok
// SIG undefined FUN_1413e9de0(void)

longlong FUN_1413e9de0(void)

{
  if (DAT_14688e0c8 == 0) {
    FUN_141786a30(&DAT_14688e0c8,&PTR_FUN_146399430);
  }
  return DAT_14688e0c8;
}



// FUNCTION 1413e9e10 FUN_1413e9e10 body=47 status=ok
// SIG undefined FUN_1413e9e10(void)

longlong FUN_1413e9e10(void)

{
  if (DAT_14688e0d0 == 0) {
    FUN_141786a30(&DAT_14688e0d0,&PTR_FUN_146399500);
  }
  return DAT_14688e0d0;
}



// FUNCTION 1413e9e40 FUN_1413e9e40 body=47 status=ok
// SIG undefined FUN_1413e9e40(void)

longlong FUN_1413e9e40(void)

{
  if (DAT_14688e0d8 == 0) {
    FUN_141786a30(&DAT_14688e0d8,&PTR_FUN_146399740);
  }
  return DAT_14688e0d8;
}



// FUNCTION 1413e9e70 FUN_1413e9e70 body=53 status=ok
// SIG undefined FUN_1413e9e70(void)

void FUN_1413e9e70(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_1449eb8a0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413e9eb0 FUN_1413e9eb0 body=47 status=ok
// SIG undefined FUN_1413e9eb0(void)

longlong FUN_1413e9eb0(void)

{
  if (DAT_14688e0e0 == 0) {
    FUN_141786a30(&DAT_14688e0e0,&PTR_FUN_146399840);
  }
  return DAT_14688e0e0;
}



// FUNCTION 1413e9ee0 FUN_1413e9ee0 body=47 status=ok
// SIG undefined FUN_1413e9ee0(void)

longlong FUN_1413e9ee0(void)

{
  if (DAT_14688e0e8 == 0) {
    FUN_141786a30(&DAT_14688e0e8,&PTR_FUN_146399a20);
  }
  return DAT_14688e0e8;
}



// FUNCTION 1413e9f10 FUN_1413e9f10 body=47 status=ok
// SIG undefined FUN_1413e9f10(void)

longlong FUN_1413e9f10(void)

{
  if (DAT_14688e0f0 == 0) {
    FUN_141786a30(&DAT_14688e0f0,&PTR_FUN_146399c30);
  }
  return DAT_14688e0f0;
}



// FUNCTION 1413e9f40 FUN_1413e9f40 body=47 status=ok
// SIG undefined FUN_1413e9f40(void)

longlong FUN_1413e9f40(void)

{
  if (DAT_14688e0f8 == 0) {
    FUN_141786a30(&DAT_14688e0f8,&PTR_FUN_146399cf0);
  }
  return DAT_14688e0f8;
}



// FUNCTION 1413e9f70 FUN_1413e9f70 body=47 status=ok
// SIG undefined FUN_1413e9f70(void)

longlong FUN_1413e9f70(void)

{
  if (DAT_14688e100 == 0) {
    FUN_141786a30(&DAT_14688e100,&PTR_FUN_146399db0);
  }
  return DAT_14688e100;
}



// FUNCTION 1413e9fa0 FUN_1413e9fa0 body=47 status=ok
// SIG undefined FUN_1413e9fa0(void)

longlong FUN_1413e9fa0(void)

{
  if (DAT_14688e108 == 0) {
    FUN_141786a30(&DAT_14688e108,&PTR_FUN_146399e30);
  }
  return DAT_14688e108;
}



// FUNCTION 1413e9fd0 FUN_1413e9fd0 body=47 status=ok
// SIG undefined FUN_1413e9fd0(void)

longlong FUN_1413e9fd0(void)

{
  if (DAT_14688e110 == 0) {
    FUN_141786a30(&DAT_14688e110,&PTR_FUN_146399ef0);
  }
  return DAT_14688e110;
}



// FUNCTION 1413ea010 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong APVPGameMode::GetPrivateStaticClass(void)

{
  if (DAT_14688de40 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakBenchmarkGameMode",&DAT_14688de40,FUN_140447710,0x550,
                  0x1000000c,0,L"Game",&LAB_1413eaab0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  thunk_FUN_14293bdd0,&LAB_140447700,0);
  }
  return DAT_14688de40;
}



// FUNCTION 1413ea0d0 FUN_1413ea0d0 body=162 status=ok
// SIG undefined FUN_1413ea0d0(void)

longlong FUN_1413ea0d0(void)

{
  if (DAT_14688de30 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakBaseMissionRewardData",&DAT_14688de30,FUN_140447710,0xf8,
                  0x10000001,0,L"Engine",&LAB_1413eabf0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1413eb900,&LAB_140447700,0);
  }
  return DAT_14688de30;
}



// FUNCTION 1413ea180 FUN_1413ea180 body=162 status=ok
// SIG undefined FUN_1413ea180(void)

longlong FUN_1413ea180(void)

{
  if (DAT_14688dcf8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakAttachedDroneAttacker",&DAT_14688dcf8,FUN_140447710,0x860,
                  0x10000001,0,L"Engine",&LAB_1413eaa40,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,FUN_1413e4960
                  ,&LAB_140447700,0);
  }
  return DAT_14688dcf8;
}



// FUNCTION 1413ea230 FUN_1413ea230 body=47 status=ok
// SIG undefined FUN_1413ea230(void)

longlong FUN_1413ea230(void)

{
  if (DAT_14688dcf0 == 0) {
    FUN_141786440(&DAT_14688dcf0,&PTR_FUN_1449e0b40);
  }
  return DAT_14688dcf0;
}



// FUNCTION 1413ea260 FUN_1413ea260 body=47 status=ok
// SIG undefined FUN_1413ea260(void)

longlong FUN_1413ea260(void)

{
  if (DAT_14688dce8 == 0) {
    FUN_141786a30(&DAT_14688dce8,&PTR_FUN_146391dd0);
  }
  return DAT_14688dce8;
}



// FUNCTION 1413ea2a0 FUN_1413ea2a0 body=162 status=ok
// SIG undefined FUN_1413ea2a0(void)

longlong FUN_1413ea2a0(void)

{
  if (DAT_14688de50 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakBenchmarkPlayerState",&DAT_14688de50,FUN_140447710,0x530,
                  0x10000000,0,L"Engine",&LAB_1413eaad0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  AFGRailroadVehicle::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14688de50;
}



// FUNCTION 1413ea350 FUN_1413ea350 body=162 status=ok
// SIG undefined FUN_1413ea350(void)

longlong FUN_1413ea350(void)

{
  if (DAT_14688dd18 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakAttachedDroneHealer",&DAT_14688dd18,FUN_140447710,0x790,
                  0x10000001,0,L"Engine",&LAB_1413eaa50,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,FUN_1413e4960
                  ,&LAB_140447700,0);
  }
  return DAT_14688dd18;
}



// FUNCTION 1413ea410 FUN_1413ea410 body=47 status=ok
// SIG undefined FUN_1413ea410(void)

longlong FUN_1413ea410(void)

{
  if (DAT_14688dd10 == 0) {
    FUN_141786440(&DAT_14688dd10,&PTR_FUN_1449e11d0);
  }
  return DAT_14688dd10;
}



// FUNCTION 1413ea440 FUN_1413ea440 body=47 status=ok
// SIG undefined FUN_1413ea440(void)

longlong FUN_1413ea440(void)

{
  if (DAT_14688dd00 == 0) {
    FUN_141786a30(&DAT_14688dd00,&PTR_FUN_146392030);
  }
  return DAT_14688dd00;
}



// FUNCTION 1413ea470 FUN_1413ea470 body=47 status=ok
// SIG undefined FUN_1413ea470(void)

longlong FUN_1413ea470(void)

{
  if (DAT_14688dd08 == 0) {
    FUN_141786a30(&DAT_14688dd08,&PTR_FUN_1463920b0);
  }
  return DAT_14688dd08;
}



// FUNCTION 1413ea4b0 FUN_1413ea4b0 body=53 status=ok
// SIG undefined FUN_1413ea4b0(void)

void FUN_1413ea4b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb0;
    *puVar1 = &PTR_FUN_1449ea360;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413ea4f0 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1c8;
    *puVar1 = &PTR_FUN_1449ea478;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413ea530 FUN_1413ea530 body=53 status=ok
// SIG undefined FUN_1413ea530(void)

void FUN_1413ea530(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xe8;
    *puVar1 = &PTR_FUN_1449ea590;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413ea570 FUN_1413ea570 body=162 status=ok
// SIG undefined FUN_1413ea570(void)

longlong FUN_1413ea570(void)

{
  if (DAT_14688ddb8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakAudioPatchBeneathTheMeridian",&DAT_14688ddb8,FUN_1413eb910
                  ,0x4b8,0x10000000,0,L"Engine",&LAB_1413eaa60,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_14688ddb8;
}



// FUNCTION 1413ea620 FUN_1413ea620 body=53 status=ok
// SIG undefined FUN_1413ea620(void)

void FUN_1413ea620(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x78;
    *puVar1 = &PTR_FUN_1449ea6a8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413ea660 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UPlayFabAdminModelDecoder::GetPrivateStaticClass(void)

{
  if (DAT_14688e120 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakBlueprintLibrary",&DAT_14688e120,
                  StaticRegisterNativesUPlayFabAdminModelDecoder,0x28,0x10000000,0,L"Engine",
                  FUN_1405d87d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_14688e120;
}



// FUNCTION 1413ea710 FUN_1413ea710 body=47 status=ok
// SIG undefined FUN_1413ea710(void)

longlong FUN_1413ea710(void)

{
  if (DAT_14688ddb0 == 0) {
    FUN_141786440(&DAT_14688ddb0,&PTR_FUN_1449e9e80);
  }
  return DAT_14688ddb0;
}



// FUNCTION 1413ea740 FUN_1413ea740 body=47 status=ok
// SIG undefined FUN_1413ea740(void)

longlong FUN_1413ea740(void)

{
  if (DAT_14688dd70 == 0) {
    FUN_141786a30(&DAT_14688dd70,&PTR_FUN_146393a80);
  }
  return DAT_14688dd70;
}



// FUNCTION 1413ea770 FUN_1413ea770 body=47 status=ok
// SIG undefined FUN_1413ea770(void)

longlong FUN_1413ea770(void)

{
  if (DAT_14688dd78 == 0) {
    FUN_141786a30(&DAT_14688dd78,&PTR_FUN_146393b00);
  }
  return DAT_14688dd78;
}



// FUNCTION 1413ea7a0 FUN_1413ea7a0 body=47 status=ok
// SIG undefined FUN_1413ea7a0(void)

longlong FUN_1413ea7a0(void)

{
  if (DAT_14688dd80 == 0) {
    FUN_141786a30(&DAT_14688dd80,&PTR_FUN_146393b80);
  }
  return DAT_14688dd80;
}



// FUNCTION 1413ea7d0 FUN_1413ea7d0 body=47 status=ok
// SIG undefined FUN_1413ea7d0(void)

longlong FUN_1413ea7d0(void)

{
  if (DAT_14688dd88 == 0) {
    FUN_141786a30(&DAT_14688dd88,&PTR_FUN_146393cc0);
  }
  return DAT_14688dd88;
}



// FUNCTION 1413ea800 FUN_1413ea800 body=47 status=ok
// SIG undefined FUN_1413ea800(void)

longlong FUN_1413ea800(void)

{
  if (DAT_14688dd90 == 0) {
    FUN_141786a30(&DAT_14688dd90,&PTR_FUN_146393dd0);
  }
  return DAT_14688dd90;
}



// FUNCTION 1413ea830 FUN_1413ea830 body=47 status=ok
// SIG undefined FUN_1413ea830(void)

longlong FUN_1413ea830(void)

{
  if (DAT_14688dd98 == 0) {
    FUN_141786a30(&DAT_14688dd98,&PTR_FUN_146393e50);
  }
  return DAT_14688dd98;
}



// FUNCTION 1413ea860 FUN_1413ea860 body=47 status=ok
// SIG undefined FUN_1413ea860(void)

longlong FUN_1413ea860(void)

{
  if (DAT_14688dda0 == 0) {
    FUN_141786a30(&DAT_14688dda0,&PTR_FUN_146393e90);
  }
  return DAT_14688dda0;
}



// FUNCTION 1413ea890 FUN_1413ea890 body=47 status=ok
// SIG undefined FUN_1413ea890(void)

longlong FUN_1413ea890(void)

{
  if (DAT_14688dda8 == 0) {
    FUN_141786a30(&DAT_14688dda8,&PTR_FUN_146393ed0);
  }
  return DAT_14688dda8;
}



// FUNCTION 1413ea8c0 FUN_1413ea8c0 body=162 status=ok
// SIG undefined FUN_1413ea8c0(void)

longlong FUN_1413ea8c0(void)

{
  if (DAT_14688dd68 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakAudioGlobalsData",&DAT_14688dd68,FUN_140447710,0x3f0,
                  0x10000000,0,L"Engine",FUN_1413eaaf0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1405d74b0,&LAB_140447700,0);
  }
  return DAT_14688dd68;
}



// FUNCTION 1413ea990 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AXScriptedBotSpawner::GetPrivateStaticClass(void)

{
  if (DAT_14688ddc8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakAutomationActor",&DAT_14688ddc8,FUN_140447710,0x458,
                  0x10000001,0,L"Engine",FUN_1413eaa80,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_14688ddc8;
}



// FUNCTION 1413eaa80 FUN_1413eaa80 body=41 status=ok
// SIG undefined FUN_1413eaa80(void)

void FUN_1413eaa80(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14221fbd0(puVar1,param_1);
    *puVar1 = &PTR_FUN_1449ead40;
  }
  return;
}



// FUNCTION 1413eaaf0 FUN_1413eaaf0 body=180 status=ok
// SIG undefined FUN_1413eaaf0(void)

void FUN_1413eaaf0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1405c1920(puVar1,param_1);
    *puVar1 = &PTR_FUN_1449ea7c0;
    puVar1[0x59] = 0;
    puVar1[0x5a] = 0;
    puVar1[0x5f] = 0;
    *(undefined4 *)(puVar1 + 0x60) = 0x3e4ccccd;
    *(undefined4 *)((longlong)puVar1 + 0x304) = 0x3e4ccccd;
    *(undefined4 *)(puVar1 + 0x61) = 0x3f000000;
    *(undefined4 *)(puVar1 + 0x7a) = DAT_1464aa730;
    *(undefined4 *)((longlong)puVar1 + 0x3d4) = DAT_1464aa738;
    *(undefined4 *)(puVar1 + 0x7b) = DAT_1464aa73c;
    *(undefined4 *)((longlong)puVar1 + 0x3dc) = DAT_1464aa73c;
    *(undefined4 *)(puVar1 + 0x7c) = DAT_1464aa738;
    *(undefined4 *)((longlong)puVar1 + 0x3e4) = DAT_1464aa740;
    *(undefined4 *)(puVar1 + 0x7d) = 0x3d072b02;
  }
  return;
}



// FUNCTION 1413eabb0 FUN_1413eabb0 body=52 status=ok
// SIG undefined FUN_1413eabb0(void)

void FUN_1413eabb0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142326e40(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__1449eb428;
    puVar1[5] = &PTR_LAB_1449eb820;
  }
  return;
}



// FUNCTION 1413eac10 FUN_1413eac10 body=379 status=ok
// SIG undefined FUN_1413eac10(void)

undefined8 * FUN_1413eac10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1449ea348;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
  return param_1;
}



// FUNCTION 1413ead90 FUN_1413ead90 body=175 status=ok
// SIG undefined FUN_1413ead90(void)

undefined8 * FUN_1413ead90(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__1449ea330;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  return param_1;
}



// FUNCTION 1413eae40 FUN_1413eae40 body=303 status=ok
// SIG undefined FUN_1413eae40(void)

undefined8 * FUN_1413eae40(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_1449eaa40;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x54)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 9,0);
  }
  if ((undefined2 *)param_1[9] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[9] = 0;
  }
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0x3f800000;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if ((*(int *)((longlong)param_1 + 0xf4) < 0) && (*(int *)((longlong)param_1 + 0xf4) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x1d,0);
  }
  if ((undefined2 *)param_1[0x1d] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x1d] = 0;
  }
  *(undefined4 *)(param_1 + 0x1b) = 0;
  return param_1;
}



// FUNCTION 1413eaf80 FUN_1413eaf80 body=43 status=ok
// SIG undefined FUN_1413eaf80(void)

undefined8 * FUN_1413eaf80(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1440780a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1413eafb0 FUN_1413eafb0 body=43 status=ok
// SIG undefined FUN_1413eafb0(void)

undefined8 * FUN_1413eafb0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1440780a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1c8);
  }
  return param_1;
}



// FUNCTION 1413eafe0 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<FUdpMessageTransport>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1440780a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 1413eb010 FUN_1413eb010 body=43 status=ok
// SIG undefined FUN_1413eb010(void)

undefined8 * FUN_1413eb010(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1440780a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 1413eb040 FUN_1413eb040 body=90 status=ok
// SIG undefined FUN_1413eb040(void)

longlong FUN_1413eb040(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x2c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3f0);
  }
  return param_1;
}



// FUNCTION 1413eb0a0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 CAkBus::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140458c20();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x178);
  }
  return param_1;
}



// FUNCTION 1413eb0e0 FUN_1413eb0e0 body=87 status=ok
// SIG undefined FUN_1413eb0e0(void)

longlong FUN_1413eb0e0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 1413eb140 FUN_1413eb140 body=71 status=ok
// SIG undefined FUN_1413eb140(void)

void FUN_1413eb140(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  lVar1 = *param_1;
  local_28 = param_2;
  local_20 = param_3;
  local_18 = param_4;
  uVar2 = FUN_14178ac60(param_1,DAT_14688dcc8);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_28);
  return;
}



// FUNCTION 1413eb190 FUN_1413eb190 body=151 status=ok
// SIG undefined FUN_1413eb190(void)

void FUN_1413eb190(undefined8 param_1,undefined8 *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0xb0);
  *param_2 = &PTR_FUN_1449a0808;
  *(undefined4 *)(param_2 + 1) = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 7) = 0x3f800000;
  *(undefined4 *)(param_2 + 8) = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  *(undefined4 *)(param_2 + 0xe) = 0x3f800000;
  *(undefined4 *)(param_2 + 0xf) = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  *(undefined4 *)(param_2 + 0x15) = 0x3f800000;
  return;
}



// FUNCTION 1413eb230 Construct body=38 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FRuntimeCurveLinearColor>::Construct
               (undefined8 param_1,void *param_2)

{
  ::_guard_xfg_dispatch_icall_nop(param_2,0,0x1c8);
  FUN_1413eac10(param_2);
  return;
}



// FUNCTION 1413eb260 Construct body=38 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FOnlineProxyStoreOffer>::Construct
               (undefined8 param_1,void *param_2)

{
  ::_guard_xfg_dispatch_icall_nop(param_2,0,0xe8);
  FUN_1413ead90(param_2);
  return;
}



// FUNCTION 1413eb290 FUN_1413eb290 body=101 status=ok
// SIG undefined FUN_1413eb290(void)

void FUN_1413eb290(undefined8 param_1,undefined8 *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x78);
  *param_2 = &PTR_FUN_1449ea318;
  *(undefined4 *)(param_2 + 1) = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 7) = 0x3f800000;
  *(undefined4 *)(param_2 + 8) = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  *(undefined4 *)(param_2 + 0xe) = 0x3f800000;
  return;
}



// FUNCTION 1413eb6e0 FUN_1413eb6e0 body=203 status=ok
// SIG undefined FUN_1413eb6e0(void)

undefined8 FUN_1413eb6e0(undefined8 param_1,undefined4 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined4 *puVar3;
  
  if (param_4 != 0) {
    puVar3 = (undefined4 *)(param_3 + 4);
    do {
      *param_2 = puVar3[-1];
      puVar1 = (undefined8 *)(param_2 + 4);
      param_2[1] = *puVar3;
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(puVar3 + 1);
      if (puVar1 != (undefined8 *)(puVar3 + 3)) {
        iVar2 = puVar3[5];
        _Src = *(void **)(puVar3 + 3);
        param_2[6] = iVar2;
        if ((iVar2 == 0) && (param_2[7] == 0)) {
          param_2[7] = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 << 3);
        }
      }
      puVar3 = puVar3 + 8;
      param_4 = param_4 + -1;
      param_2 = param_2 + 8;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1413eb7b0 FUN_1413eb7b0 body=6 status=ok
// SIG undefined FUN_1413eb7b0(void)

undefined8 FUN_1413eb7b0(void)

{
  return 0xeb481df1;
}



// FUNCTION 1413eb7c0 FUN_1413eb7c0 body=6 status=ok
// SIG undefined FUN_1413eb7c0(void)

undefined8 FUN_1413eb7c0(void)

{
  return 0x7df79869;
}



// FUNCTION 1413eb7d0 FUN_1413eb7d0 body=6 status=ok
// SIG undefined FUN_1413eb7d0(void)

undefined8 FUN_1413eb7d0(void)

{
  return 0x4414273b;
}



// FUNCTION 1413eb7e0 FUN_1413eb7e0 body=6 status=ok
// SIG undefined FUN_1413eb7e0(void)

undefined8 FUN_1413eb7e0(void)

{
  return 0x57d13b7;
}



// FUNCTION 1413eb7f0 FUN_1413eb7f0 body=6 status=ok
// SIG undefined FUN_1413eb7f0(void)

undefined8 FUN_1413eb7f0(void)

{
  return 0x35d6448a;
}



// FUNCTION 1413eb800 FUN_1413eb800 body=6 status=ok
// SIG undefined FUN_1413eb800(void)

undefined8 FUN_1413eb800(void)

{
  return 0x8a0c56a9;
}



// FUNCTION 1413eb810 FUN_1413eb810 body=66 status=ok
// SIG undefined FUN_1413eb810(void)

void FUN_1413eb810(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = *param_1;
  local_18 = param_2;
  local_10 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_14688d958);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_18);
  return;
}



// FUNCTION 1413eb860 FUN_1413eb860 body=61 status=ok
// SIG undefined FUN_1413eb860(void)

void FUN_1413eb860(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_14688d960);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1413eb8a0 FUN_1413eb8a0 body=61 status=ok
// SIG undefined FUN_1413eb8a0(void)

void FUN_1413eb8a0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_14688d968);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1413eb8e0 thunk_FUN_14293bdd0 body=5 status=ok
// SIG undefined thunk_FUN_14293bdd0(void)

void thunk_FUN_14293bdd0(void)

{
  FUN_14293bdd0();
  return;
}



// FUNCTION 1413eb8f0 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void AFGRailroadVehicle::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 1413eb910 FUN_1413eb910 body=34 status=ok
// SIG undefined FUN_1413eb910(void)

void FUN_1413eb910(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1413ea570();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_BeginVehicleMusic_1449eacc0,8);
  return;
}



// FUNCTION 1413eb940 FUN_1413eb940 body=34 status=ok
// SIG undefined FUN_1413eb940(void)

void FUN_1413eb940(void)

{
  undefined8 uVar1;
  
  uVar1 = UDungeonMarkerEmitter::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_DecodeSerialNumber_1449eb850,5);
  return;
}



// FUNCTION 1413eb970 StaticRegisterNativesUPlayFabAdminModelDecoder body=34 status=ok
// SIG undefined StaticRegisterNativesUPlayFabAdminModelDecoder(void)

void UPlayFabAdminModelDecoder::StaticRegisterNativesUPlayFabAdminModelDecoder(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ActivateAllModifiers_1449eb9d0,0x56);
  return;
}



// FUNCTION 1413eb9a0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceData::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688dd20 == 0) {
    uVar1 = FUN_1413eb7b0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688dd20 =
         GetStaticStruct(FUN_1413ebd70,uVar2,L"LevelMultiplierDefinedValueRow",0xb0,uVar1);
  }
  return;
}



// FUNCTION 1413eba00 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688de58 == 0) {
    uVar1 = FUN_1413eb7c0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688de58 = GetStaticStruct(FUN_1413ebda0,uVar2,L"OakProjectedShield",0x10,uVar1);
  }
  return;
}



// FUNCTION 1413eba60 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FRuntimeCurveLinearColor::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688dd30 == 0) {
    uVar1 = FUN_1413eb7d0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688dd30 =
         GetStaticStruct(FUN_1413ebdd0,uVar2,L"PlayerCountAndPlaythroughDefinedValueRow",0x1c8,uVar1
                        );
  }
  return;
}



// FUNCTION 1413ebac0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FStarSystemBlackboard::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688dd40 == 0) {
    uVar1 = FUN_1413eb7e0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688dd40 = GetStaticStruct(FUN_1413ebe00,uVar2,L"PlayerCountDefinedValueRow",0xe8,uVar1);
  }
  return;
}



// FUNCTION 1413ebb20 FUN_1413ebb20 body=82 status=ok
// SIG undefined FUN_1413ebb20(void)

void FUN_1413ebb20(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688dd50 == 0) {
    uVar1 = FUN_1413eb7f0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688dd50 = GetStaticStruct(FUN_1413ebe30,uVar2,L"PlaythroughDefinedValueRow",0x78,uVar1);
  }
  return;
}



// FUNCTION 1413ebb80 FUN_1413ebb80 body=82 status=ok
// SIG undefined FUN_1413ebb80(void)

void FUN_1413ebb80(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688de18 == 0) {
    uVar1 = FUN_1413eb800();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688de18 = GetStaticStruct(FUN_1413ebe60,uVar2,L"ProcessedReward",0x20,uVar1);
  }
  return;
}



// FUNCTION 1413ebbe0 FUN_1413ebbe0 body=61 status=ok
// SIG undefined FUN_1413ebbe0(void)

void FUN_1413ebbe0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_14688dcd0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1413ebc20 FUN_1413ebc20 body=47 status=ok
// SIG undefined FUN_1413ebc20(void)

longlong FUN_1413ebc20(void)

{
  if (DAT_14688ddc0 == 0) {
    FUN_141786440(&DAT_14688ddc0,&PTR_GetPrivateStaticClass_1449ea0d0);
  }
  return DAT_14688ddc0;
}



// FUNCTION 1413ebc50 FUN_1413ebc50 body=47 status=ok
// SIG undefined FUN_1413ebc50(void)

longlong FUN_1413ebc50(void)

{
  if (DAT_14688de38 == 0) {
    FUN_141786440(&DAT_14688de38,&PTR_GetPrivateStaticClass_1449dd250);
  }
  return DAT_14688de38;
}



// FUNCTION 1413ebc80 FUN_1413ebc80 body=47 status=ok
// SIG undefined FUN_1413ebc80(void)

longlong FUN_1413ebc80(void)

{
  if (DAT_14688de48 == 0) {
    FUN_141786440(&DAT_14688de48,&PTR_FUN_1449e0e60);
  }
  return DAT_14688de48;
}



// FUNCTION 1413ebcb0 FUN_1413ebcb0 body=47 status=ok
// SIG undefined FUN_1413ebcb0(void)

longlong FUN_1413ebcb0(void)

{
  if (DAT_14688dd60 == 0) {
    FUN_141786440(&DAT_14688dd60,&PTR_FUN_1449d9d40);
  }
  return DAT_14688dd60;
}



// FUNCTION 1413ebce0 FUN_1413ebce0 body=47 status=ok
// SIG undefined FUN_1413ebce0(void)

longlong FUN_1413ebce0(void)

{
  if (DAT_14688ddd0 == 0) {
    FUN_141786440(&DAT_14688ddd0,&PTR_GetPrivateStaticClass_1449d97d0);
  }
  return DAT_14688ddd0;
}



// FUNCTION 1413ebd10 FUN_1413ebd10 body=47 status=ok
// SIG undefined FUN_1413ebd10(void)

longlong FUN_1413ebd10(void)

{
  if (DAT_14688de28 == 0) {
    FUN_141786440(&DAT_14688de28,&PTR_FUN_1449dc2c0);
  }
  return DAT_14688de28;
}



// FUNCTION 1413ebd40 FUN_1413ebd40 body=47 status=ok
// SIG undefined FUN_1413ebd40(void)

longlong FUN_1413ebd40(void)

{
  if (DAT_14688dce0 == 0) {
    FUN_141786a30(&DAT_14688dce0,&PTR_Z_Construct_UPackage__Script_MechWarrior_146391d10);
  }
  return DAT_14688dce0;
}



// FUNCTION 1413ebd70 FUN_1413ebd70 body=47 status=ok
// SIG undefined FUN_1413ebd70(void)

longlong FUN_1413ebd70(void)

{
  if (DAT_14688dd28 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688dd28,&PTR_Z_Construct_UPackage__Script_MechWarrior_146392370);
  }
  return DAT_14688dd28;
}



// FUNCTION 1413ebda0 FUN_1413ebda0 body=47 status=ok
// SIG undefined FUN_1413ebda0(void)

longlong FUN_1413ebda0(void)

{
  if (DAT_14688de60 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688de60,&PTR_Z_Construct_UPackage__Script_MechWarrior_146394b00);
  }
  return DAT_14688de60;
}



// FUNCTION 1413ebdd0 FUN_1413ebdd0 body=47 status=ok
// SIG undefined FUN_1413ebdd0(void)

longlong FUN_1413ebdd0(void)

{
  if (DAT_14688dd38 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688dd38,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463925c0);
  }
  return DAT_14688dd38;
}



// FUNCTION 1413ebe00 FUN_1413ebe00 body=47 status=ok
// SIG undefined FUN_1413ebe00(void)

longlong FUN_1413ebe00(void)

{
  if (DAT_14688dd48 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688dd48,&PTR_Z_Construct_UPackage__Script_MechWarrior_146392710);
  }
  return DAT_14688dd48;
}



// FUNCTION 1413ebe30 FUN_1413ebe30 body=47 status=ok
// SIG undefined FUN_1413ebe30(void)

longlong FUN_1413ebe30(void)

{
  if (DAT_14688dd58 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688dd58,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463927e0);
  }
  return DAT_14688dd58;
}



// FUNCTION 1413ebe60 FUN_1413ebe60 body=47 status=ok
// SIG undefined FUN_1413ebe60(void)

longlong FUN_1413ebe60(void)

{
  if (DAT_14688de20 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688de20,&PTR_Z_Construct_UPackage__Script_MechWarrior_146394860);
  }
  return DAT_14688de20;
}



// FUNCTION 1413ebe90 FUN_1413ebe90 body=112 status=ok
// SIG undefined FUN_1413ebe90(void)

void FUN_1413ebe90(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [3];
  
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
  FUN_140b7b790(local_res10[0]);
  return;
}



// FUNCTION 1413ebf00 execApplyOutlineToMesh body=238 status=ok
// SIG undefined execApplyOutlineToMesh(void)

void UObjectOutlines::execApplyOutlineToMesh(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [16];
  undefined8 local_res20;
  undefined8 local_18 [2];
  
  local_18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140b7b830(local_18[0],local_res10[0],local_res20);
  return;
}



// FUNCTION 1413ebff0 FUN_1413ebff0 body=175 status=ok
// SIG undefined FUN_1413ebff0(void)

void FUN_1413ebff0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [2];
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
  FUN_140b7b870(local_res20,local_res10[0]);
  return;
}



// FUNCTION 1413ec0a0 execPhysics__UpdateCharacterCameraToRagdollLocation body=238 status=ok
// SIG undefined execPhysics__UpdateCharacterCameraToRagdollLocation(void)

void UVictoryBPFunctionLibrary::execPhysics__UpdateCharacterCameraToRagdollLocation
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
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
  uVar1 = FUN_140b7bbc0(local_res20,local_res18[0],local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413ec190 execConvertRenderTargetToTexture2DEditorOnly body=238 status=ok
// SIG undefined execConvertRenderTargetToTexture2DEditorOnly(void)

void UKismetRenderingLibrary::execConvertRenderTargetToTexture2DEditorOnly
               (undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_18 [2];
  
  local_18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140b7c040(local_18[0],local_res20,local_res10[0]);
  return;
}



// FUNCTION 1413ec280 FUN_1413ec280 body=175 status=ok
// SIG undefined FUN_1413ec280(void)

void FUN_1413ec280(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [2];
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
  FUN_140b7c2d0(local_res20,local_res10[0]);
  return;
}



// FUNCTION 1413ec330 FUN_1413ec330 body=243 status=ok
// SIG undefined FUN_1413ec330(void)

void FUN_1413ec330(longlong *param_1,longlong param_2)

{
  undefined8 local_res8;
  undefined8 local_res10 [2];
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
  (**(code **)(*param_1 + 0x6f0))(param_1,local_res20,local_res10[0],local_res8);
  return;
}



// FUNCTION 1413ec430 FUN_1413ec430 body=300 status=ok
// SIG undefined FUN_1413ec430(void)

void FUN_1413ec430(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [16];
  undefined4 local_res20 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_10);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  AK::MemoryMgr::StartProfileThreadUsage((long)local_10);
  return;
}



// FUNCTION 1413ec560 FUN_1413ec560 body=498 status=ok
// SIG undefined FUN_1413ec560(void)

void FUN_1413ec560(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined8 local_res20;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  longlong local_48 [2];
  
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  local_res20 = 0;
  plVar4 = local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar3 = local_68;
  if (puVar2 != (undefined1 *)0x0) {
    puVar3 = puVar2;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  local_res18[0] = 0;
  puVar2 = local_58;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
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
  uVar1 = FUN_140b7c4d0(plVar4,local_res20,puVar3,puVar2,local_res18[0],local_res10[0]);
  *param_3 = uVar1;
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1413ec760 FUN_1413ec760 body=464 status=ok
// SIG undefined FUN_1413ec760(void)

void FUN_1413ec760(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined8 local_res20;
  undefined1 local_48 [16];
  longlong local_38 [2];
  
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_res20 = 0;
  plVar2 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  local_res18[0] = 0;
  puVar3 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
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
  uVar1 = FUN_140b7c800(plVar2,local_res20,puVar3,local_res18[0],local_res10[0]);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1413ec930 execSetPlayerControllerID body=173 status=ok
// SIG undefined execSetPlayerControllerID(void)

void UGameplayStatics::execSetPlayerControllerID(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [4];
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
  FUN_140b7cb10(local_res20,local_res10[0]);
  return;
}



// FUNCTION 1413ec9e0 FUN_1413ec9e0 body=112 status=ok
// SIG undefined FUN_1413ec9e0(void)

void FUN_1413ec9e0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [3];
  
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
  FUN_140b7cb50(local_res10[0]);
  return;
}



// FUNCTION 1413eca50 FUN_1413eca50 body=631 status=ok
// SIG undefined FUN_1413eca50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1413eca50(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  undefined1 local_a8 [16];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  local_110 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_110);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_110);
  }
  local_118 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_118);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_118);
  }
  local_120 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_120);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_120);
  }
  local_128 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_128);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_128);
  }
  local_48 = _DAT_14688d8c0 & _DAT_14688d8d0;
  uStack_44 = uRam000000014688d8c4 & uRam000000014688d8d4;
  uStack_40 = uRam000000014688d8c8 & uRam000000014688d8d8;
  uStack_3c = uRam000000014688d8cc & uRam000000014688d8dc;
  local_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = uRam000000014688d8cc;
  local_58 = 0;
  uStack_50 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_78 = _DAT_14688d8c0 & _DAT_14688d8d0;
  uStack_74 = uRam000000014688d8c4 & uRam000000014688d8d4;
  uStack_70 = uRam000000014688d8c8 & uRam000000014688d8d8;
  uStack_6c = uRam000000014688d8cc & uRam000000014688d8dc;
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = uRam000000014688d8cc;
  local_88 = 0;
  uStack_80 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_108 = CONCAT44(uStack_94,local_98);
  uStack_100 = CONCAT44(uStack_8c,uStack_90);
  local_138 = &local_108;
  local_140 = &local_d8;
  local_e8 = CONCAT44(uStack_74,local_78);
  uStack_e0 = CONCAT44(uStack_6c,uStack_70);
  local_f8 = local_88;
  uStack_f0 = uStack_80;
  local_d8 = CONCAT44(uStack_64,local_68);
  uStack_d0 = CONCAT44(uStack_5c,uStack_60);
  local_148 = local_128;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_c8 = (undefined4)local_58;
  uStack_c4 = local_58._4_4_;
  uStack_c0 = (undefined4)uStack_50;
  uStack_bc = uStack_50._4_4_;
  local_b8 = local_48;
  uStack_b4 = uStack_44;
  uStack_b0 = uStack_40;
  uStack_ac = uStack_3c;
  puVar2 = (undefined8 *)FUN_140b7de90(local_a8,local_110,local_118,local_120);
  uVar1 = puVar2[1];
  *param_3 = *puVar2;
  param_3[1] = uVar1;
  return;
}



// FUNCTION 1413eccd0 FUN_1413eccd0 body=325 status=ok
// SIG undefined FUN_1413eccd0(void)

void FUN_1413eccd0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  int local_res10 [2];
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined8 local_38 [2];
  
  local_38[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  bVar3 = local_res18[0] != 0;
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140b7e090(local_38[0],bVar2,bVar3,local_res20[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413ece20 FUN_1413ece20 body=112 status=ok
// SIG undefined FUN_1413ece20(void)

void FUN_1413ece20(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [3];
  
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
  FUN_140b7e160(local_res10[0]);
  return;
}



// FUNCTION 1413ece90 FUN_1413ece90 body=776 status=ok
// SIG undefined FUN_1413ece90(void)

void FUN_1413ece90(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  undefined4 local_res10 [2];
  undefined1 *local_res18;
  undefined8 local_res20;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 *local_88;
  longlong local_80 [9];
  
  local_80[6] = 0;
  local_80[7] = 0;
  local_res18 = param_3;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_80 + 6);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_80 + 6);
  }
  local_res20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_98 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_88 = &local_res20;
  if (puVar1 != (undefined8 *)0x0) {
    local_88 = puVar1;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_90 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar6 = &local_98;
  if (puVar1 != (undefined8 *)0x0) {
    puVar6 = puVar1;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_90);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_res10[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar5 = &local_90;
  if (puVar1 != (undefined8 *)0x0) {
    puVar5 = puVar1;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_80[4] = 0;
  local_80[5] = 0;
  puVar8 = local_res10;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar8 = *(undefined4 **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_80 + 4);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_80 + 4);
  }
  local_80[2] = 0;
  local_80[3] = 0;
  plVar7 = local_80 + 4;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_80 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_80 + 2);
  }
  local_80[0] = 0;
  local_80[1] = 0;
  plVar4 = local_80 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_80);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_80);
  }
  plVar3 = local_80;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar2 = FUN_140a300c0(local_80 + 6,local_88,puVar6,puVar5,puVar8,plVar7,plVar4,plVar3);
  *local_res18 = uVar2;
  if (local_80[0] != 0) {
    FMemory::Free();
  }
  if (local_80[2] != 0) {
    FMemory::Free();
  }
  if (local_80[4] != 0) {
    FMemory::Free();
  }
  if (local_80[6] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1413ed1a0 FUN_1413ed1a0 body=112 status=ok
// SIG undefined FUN_1413ed1a0(void)

void FUN_1413ed1a0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [3];
  
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
  FUN_140b7e6c0(local_res10[0]);
  return;
}



// FUNCTION 1413ed210 FUN_1413ed210 body=112 status=ok
// SIG undefined FUN_1413ed210(void)

void FUN_1413ed210(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [3];
  
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
  FUN_140b7e7c0(local_res10[0]);
  return;
}



// FUNCTION 1413ed280 execSetBypassSourceEffectChainEntry body=303 status=ok
// SIG undefined execSetBypassSourceEffectChainEntry(void)

void UAudioMixerBlueprintLibrary::execSetBypassSourceEffectChainEntry
               (undefined8 param_1,longlong param_2)

{
  int local_res10 [4];
  undefined4 local_res20 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_10);
  }
  local_18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
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
  FUN_140b7ef80(local_10,local_18,local_res20[0],local_res10[0] != 0);
  return;
}



// FUNCTION 1413ed3b0 FUN_1413ed3b0 body=201 status=ok
// SIG undefined FUN_1413ed3b0(void)

void FUN_1413ed3b0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 local_res10;
  undefined1 local_18 [16];
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  puVar2 = local_18;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140b7fa70(local_res10,puVar2);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413ed480 FUN_1413ed480 body=216 status=ok
// SIG undefined FUN_1413ed480(void)

void FUN_1413ed480(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 local_res10;
  undefined1 local_18 [16];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  local_res10 = 0;
  puVar2 = local_18;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
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
  uVar1 = FUN_140b7fb20(puVar2,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413ed560 FUN_1413ed560 body=201 status=ok
// SIG undefined FUN_1413ed560(void)

void FUN_1413ed560(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 local_res10;
  undefined1 local_18 [16];
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  puVar2 = local_18;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140b7fd60(local_res10,puVar2);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413ed630 FUN_1413ed630 body=128 status=ok
// SIG undefined FUN_1413ed630(void)

void FUN_1413ed630(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_140b7fe10(local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413ed6b0 FUN_1413ed6b0 body=902 status=ok
// SIG undefined FUN_1413ed6b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1413ed6b0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_1d8 [32];
  undefined1 *local_1b8;
  undefined8 local_1a8 [2];
  undefined1 local_198 [4];
  undefined4 local_194;
  undefined4 local_190;
  undefined8 local_18c;
  undefined4 local_184;
  undefined1 local_17e;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined1 local_170;
  longlong local_168;
  undefined8 local_160;
  undefined2 local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  uint local_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  longlong local_e8 [2];
  longlong local_d8;
  longlong local_c8;
  longlong local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  local_1a8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_1a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_1a8);
  }
  local_58 = _DAT_14688d8c0 & _DAT_14688d8d0;
  uStack_54 = uRam000000014688d8c4 & uRam000000014688d8d4;
  uStack_50 = uRam000000014688d8c8 & uRam000000014688d8d8;
  uStack_4c = uRam000000014688d8cc & uRam000000014688d8dc;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = uRam000000014688d8cc;
  local_68 = 0;
  uStack_60 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_88 = _DAT_14688d8c0 & _DAT_14688d8d0;
  uStack_84 = uRam000000014688d8c4 & uRam000000014688d8d4;
  uStack_80 = uRam000000014688d8c8 & uRam000000014688d8d8;
  uStack_7c = uRam000000014688d8cc & uRam000000014688d8dc;
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = uRam000000014688d8cc;
  local_98 = 0;
  uStack_90 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  local_194 = 0x43800000;
  local_17c = 0xc2800000;
  local_174 = 0x3dcccccd;
  local_178 = 0x42800000;
  local_190 = 0x3f800000;
  local_18c = 0x3f800000;
  local_184 = 1;
  local_17e = 0;
  local_170 = 1;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_198);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_198);
  }
  local_148 = CONCAT44(uStack_a4,local_a8);
  uStack_140 = CONCAT44(uStack_9c,uStack_a0);
  local_128 = CONCAT44(uStack_84,local_88);
  uStack_120 = CONCAT44(uStack_7c,uStack_80);
  local_1b8 = local_198;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_1b8 = *(undefined1 **)(param_2 + 0x38);
  }
  local_138 = local_98;
  uStack_130 = uStack_90;
  local_118 = CONCAT44(uStack_74,local_78);
  uStack_110 = CONCAT44(uStack_6c,uStack_70);
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_108 = (undefined4)local_68;
  uStack_104 = local_68._4_4_;
  uStack_100 = (undefined4)uStack_60;
  uStack_fc = uStack_60._4_4_;
  local_f8 = local_58;
  uStack_f4 = uStack_54;
  uStack_f0 = uStack_50;
  uStack_ec = uStack_4c;
  plVar1 = (longlong *)FUN_140b800e0(local_e8,local_1a8[0],&local_118,&local_148);
  if (param_3 != plVar1) {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_3 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  plVar2 = plVar1 + 2;
  plVar3 = param_3 + 2;
  if (plVar3 != plVar2) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    *plVar3 = *plVar2;
    *plVar2 = 0;
    *(int *)(param_3 + 3) = (int)plVar1[3];
    *(undefined4 *)((longlong)param_3 + 0x1c) = *(undefined4 *)((longlong)plVar1 + 0x1c);
    plVar1[3] = 0;
  }
  plVar2 = plVar1 + 4;
  plVar3 = param_3 + 4;
  if (plVar3 != plVar2) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    *plVar3 = *plVar2;
    *plVar2 = 0;
    *(int *)(param_3 + 5) = (int)plVar1[5];
    *(undefined4 *)((longlong)param_3 + 0x2c) = *(undefined4 *)((longlong)plVar1 + 0x2c);
    plVar1[5] = 0;
  }
  plVar2 = plVar1 + 6;
  plVar3 = param_3 + 6;
  if (plVar3 != plVar2) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    *plVar3 = *plVar2;
    *plVar2 = 0;
    *(int *)(param_3 + 7) = (int)plVar1[7];
    *(undefined4 *)((longlong)param_3 + 0x3c) = *(undefined4 *)((longlong)plVar1 + 0x3c);
    plVar1[7] = 0;
  }
  if (local_b8 != 0) {
    FMemory::Free();
  }
  if (local_c8 != 0) {
    FMemory::Free();
  }
  if (local_d8 != 0) {
    FMemory::Free();
  }
  if (local_e8[0] != 0) {
    FMemory::Free();
  }
  if (local_168 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1413eda40 execGetAttachedActors body=289 status=ok
// SIG undefined execGetAttachedActors(void)

void UUtilityFunctionLibrary_BP::execGetAttachedActors(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  int local_res10 [2];
  undefined8 local_res20;
  longlong local_18 [2];
  
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
  bVar2 = local_res10[0] != 0;
  local_18[0] = 0;
  local_18[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  plVar1 = local_18;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140b80ed0(local_res20,bVar2,plVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1413edb70 execGetDataTableRowNames body=210 status=ok
// SIG undefined execGetDataTableRowNames(void)

void UDataTableFunctionLibrary::execGetDataTableRowNames(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 local_res10 [3];
  longlong local_18 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_18[0] = 0;
  local_18[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  plVar1 = local_18;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140b81060(local_res10[0],plVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1413edc50 FUN_1413edc50 body=127 status=ok
// SIG undefined FUN_1413edc50(void)

void FUN_1413edc50(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_140b81180(local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413edcd0 FUN_1413edcd0 body=128 status=ok
// SIG undefined FUN_1413edcd0(void)

void FUN_1413edcd0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_140b811f0(local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413edd50 FUN_1413edd50 body=190 status=ok
// SIG undefined FUN_1413edd50(void)

void FUN_1413edd50(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_140b812b0(local_res18,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413ede10 FUN_1413ede10 body=127 status=ok
// SIG undefined FUN_1413ede10(void)

void FUN_1413ede10(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_140b81310(local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413ede90 execConcat_StrStr body=296 status=ok
// SIG undefined execConcat_StrStr(void)

void UKismetStringLibrary::execConcat_StrStr(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong local_38 [6];
  
  local_38[2] = 0;
  local_38[3] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  plVar1 = (longlong *)FUN_140a32690(local_38 + 4,local_38 + 2,local_38);
  if (param_3 != plVar1) {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_3 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_38[4] != 0) {
    FMemory::Free();
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1413edfc0 FUN_1413edfc0 body=127 status=ok
// SIG undefined FUN_1413edfc0(void)

void FUN_1413edfc0(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_140b81760(local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413ee040 FUN_1413ee040 body=128 status=ok
// SIG undefined FUN_1413ee040(void)

void FUN_1413ee040(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_140b818c0(local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413ee0c0 FUN_1413ee0c0 body=333 status=ok
// SIG undefined FUN_1413ee0c0(void)

void FUN_1413ee0c0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  bool bVar3;
  int local_res10 [2];
  undefined4 local_res18 [2];
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
  bVar3 = local_res10[0] != 0;
  local_res18[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  puVar2 = local_res18;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140b81c00(local_28[0],local_res20,bVar3,puVar2);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413ee210 FUN_1413ee210 body=378 status=ok
// SIG undefined FUN_1413ee210(void)

void FUN_1413ee210(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 local_res10;
  longlong local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_res10 = 0;
  plVar7 = &local_18;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x38);
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
  thunk_FUN_1412bf780(plVar7,local_res10);
  if ((int)local_10 != 0) {
    plVar7 = (longlong *)(local_18 + 0x10);
    iVar6 = (int)local_10;
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
      plVar4 = (longlong *)*plVar7;
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
      plVar7 = plVar7 + 7;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1413ee390 FUN_1413ee390 body=193 status=ok
// SIG undefined FUN_1413ee390(void)

void FUN_1413ee390(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 local_res10;
  longlong local_18 [2];
  
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
  plVar1 = (longlong *)FUN_140a33840(local_18,local_res10);
  if (param_3 != plVar1) {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_3 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1413ee460 FUN_1413ee460 body=301 status=ok
// SIG undefined FUN_1413ee460(void)

void FUN_1413ee460(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 local_res10;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 local_70;
  byte local_68;
  undefined1 local_60 [56];
  undefined1 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_68 = local_68 & 0xfd | 1;
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_70 = 0;
  FUN_142c8c260(local_60,0x3f800000);
  local_28 = 0xff;
  local_20 = 0;
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  puVar2 = &local_88;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140b82660(local_res10,puVar2);
  *param_3 = uVar1;
  if (local_78 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1413ee590 FUN_1413ee590 body=128 status=ok
// SIG undefined FUN_1413ee590(void)

void FUN_1413ee590(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_140b829e0(local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413ee610 FUN_1413ee610 body=128 status=ok
// SIG undefined FUN_1413ee610(void)

void FUN_1413ee610(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_140b82ca0(local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413ee690 FUN_1413ee690 body=286 status=ok
// SIG undefined FUN_1413ee690(void)

void FUN_1413ee690(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  void *_Src;
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res10;
  void *local_28;
  ulonglong local_20;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  _Src = local_28;
  local_18 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar2 = (longlong)(int)local_20;
  local_10 = (int)local_20;
  if ((int)local_20 == 0) {
    local_c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_20 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_18,_Src,lVar2 * 2);
  }
  uVar1 = FUN_140b82da0(&local_18,local_res10);
  *param_3 = uVar1;
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1413ee7b0 FUN_1413ee7b0 body=301 status=ok
// SIG undefined FUN_1413ee7b0(void)

void FUN_1413ee7b0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_10);
  }
  local_18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140b82e00(local_10,local_18,local_res20,local_res10[0]);
  return;
}



// FUNCTION 1413ee8e0 execStartRecordingOutput body=243 status=ok
// SIG undefined execStartRecordingOutput(void)

void UAudioMixerBlueprintLibrary::execStartRecordingOutput(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [4];
  undefined8 local_res20;
  undefined8 local_18 [2];
  
  local_18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140b831e0(local_18[0],local_res10[0],local_res20);
  return;
}



// FUNCTION 1413ee9e0 FUN_1413ee9e0 body=258 status=ok
// SIG undefined FUN_1413ee9e0(void)

void FUN_1413ee9e0(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [4];
  undefined8 local_res20;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
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
  local_18 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = local_20;
  FUN_140b83350(local_res20,&local_18,local_res10[0]);
  return;
}



// FUNCTION 1413eeaf0 FUN_1413eeaf0 body=127 status=ok
// SIG undefined FUN_1413eeaf0(void)

void FUN_1413eeaf0(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_140b83580(local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413eeb70 execIsSwimmingUnderwater body=127 status=ok
// SIG undefined execIsSwimmingUnderwater(void)

void UGameUtil::execIsSwimmingUnderwater(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = IsSwimmingUnderwater(local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413eebf0 FUN_1413eebf0 body=127 status=ok
// SIG undefined FUN_1413eebf0(void)

void FUN_1413eebf0(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_140b83670(local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413eec70 FUN_1413eec70 body=240 status=ok
// SIG undefined FUN_1413eec70(void)

void FUN_1413eec70(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 local_res10 [8];
  int local_res18 [2];
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
  uVar1 = FUN_140b83720(local_res20,local_res10[0],local_res18[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413eed60 FUN_1413eed60 body=205 status=ok
// SIG undefined FUN_1413eed60(void)

void FUN_1413eed60(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 local_res10;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_18 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = local_20;
  uVar1 = FUN_140b837b0(local_res10,&local_18);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413eee30 FUN_1413eee30 body=127 status=ok
// SIG undefined FUN_1413eee30(void)

void FUN_1413eee30(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_140b83940(local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413eeeb0 FUN_1413eeeb0 body=175 status=ok
// SIG undefined FUN_1413eeeb0(void)

void FUN_1413eeeb0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [2];
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
  FUN_140b83e90(local_res20,local_res10[0]);
  return;
}



// FUNCTION 1413eef60 FUN_1413eef60 body=128 status=ok
// SIG undefined FUN_1413eef60(void)

void FUN_1413eef60(undefined8 param_1,longlong param_2)

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
  FUN_140a0bec0(param_1,local_res10);
  return;
}



// FUNCTION 1413eefe0 FUN_1413eefe0 body=128 status=ok
// SIG undefined FUN_1413eefe0(void)

void FUN_1413eefe0(undefined8 param_1,longlong param_2)

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
  FUN_140a0bf10(param_1,local_res10);
  return;
}



// FUNCTION 1413ef060 FUN_1413ef060 body=332 status=ok
// SIG undefined FUN_1413ef060(void)

void FUN_1413ef060(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [8];
  undefined4 local_res20 [2];
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  
  local_58 = 0xffffffff;
  local_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_54 = 0;
  local_78 = &DAT_1441d2800;
  local_50 = 0;
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
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_48 = &DAT_1441d2800;
  local_40 = local_70;
  local_28 = local_58;
  local_24 = local_54;
  local_20 = local_50;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_38 = (undefined4)local_68;
  uStack_34 = local_68._4_4_;
  uStack_30 = (undefined4)uStack_60;
  uStack_2c = uStack_60._4_4_;
  FUN_140a0e4b0(param_1,&local_48,local_res10[0],local_res20[0]);
  return;
}



// FUNCTION 1413ef1b0 FUN_1413ef1b0 body=254 status=ok
// SIG undefined FUN_1413ef1b0(void)

void FUN_1413ef1b0(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  int local_res10 [4];
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
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar1 = local_res10[0] != 0;
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140a10150(param_1,local_28[0],bVar1,local_res20);
  return;
}



// FUNCTION 1413ef2b0 execConvertRenderTargetToTexture2DEditorOnly body=238 status=ok
// SIG undefined execConvertRenderTargetToTexture2DEditorOnly(void)

void UKismetRenderingLibrary::execConvertRenderTargetToTexture2DEditorOnly
               (undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_18 [2];
  
  local_18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140b88460(local_18[0],local_res20,local_res10[0]);
  return;
}



// FUNCTION 1413ef3a0 execImportBufferAsTexture2D body=226 status=ok
// SIG undefined execImportBufferAsTexture2D(void)

void UKismetRenderingLibrary::execImportBufferAsTexture2D
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 local_res10;
  longlong local_18 [2];
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_18[0] = 0;
  local_18[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  plVar2 = local_18;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140b88f70(local_res10,plVar2);
  *param_3 = uVar1;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1413ef490 FUN_1413ef490 body=425 status=ok
// SIG undefined FUN_1413ef490(void)

void FUN_1413ef490(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  undefined8 local_res20;
  longlong local_38 [6];
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_38[4] = 0;
  local_38[5] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38 + 4);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 4);
  }
  local_38[2] = 0;
  local_38[3] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
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
  FUN_140b8af70(local_res20,local_38 + 4,local_38 + 2,local_38,local_res10[0]);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  if (local_38[4] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1413ef640 FUN_1413ef640 body=323 status=ok
// SIG undefined FUN_1413ef640(void)

void FUN_1413ef640(undefined8 param_1,longlong param_2)

{
  undefined ***pppuVar1;
  undefined8 local_res10;
  longlong local_48 [2];
  undefined **local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  local_30 = 0;
  local_38 = &PTR_FUN_1449eb9b8;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0x3f800000;
  local_c = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  pppuVar1 = &local_38;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar1 = *(undefined ****)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140b8b0b0(local_res10,local_48,pppuVar1);
  local_38 = &PTR_FUN_1440780a8;
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1413ef790 execApplyOutlineToMesh body=238 status=ok
// SIG undefined execApplyOutlineToMesh(void)

void UObjectOutlines::execApplyOutlineToMesh(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [16];
  undefined8 local_res20;
  undefined8 local_18 [2];
  
  local_18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140b8b640(local_18[0],local_res10[0],local_res20);
  return;
}



// FUNCTION 1413ef880 FUN_1413ef880 body=175 status=ok
// SIG undefined FUN_1413ef880(void)

void FUN_1413ef880(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [2];
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
  FUN_140b8b680(local_res20,local_res10[0]);
  return;
}



// FUNCTION 1413ef930 FUN_1413ef930 body=175 status=ok
// SIG undefined FUN_1413ef930(void)

void FUN_1413ef930(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [2];
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
  FUN_140b8b6b0(local_res20,local_res10[0]);
  return;
}



// FUNCTION 1413ef9e0 FUN_1413ef9e0 body=112 status=ok
// SIG undefined FUN_1413ef9e0(void)

void FUN_1413ef9e0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [3];
  
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
  FUN_140b8ba80(local_res10[0]);
  return;
}



// FUNCTION 1413efa50 execGetInstalledContent body=148 status=ok
// SIG undefined execGetInstalledContent(void)

void UMobilePatchingLibrary::execGetInstalledContent
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_140b8bda0(local_18);
  *param_3 = uVar1;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1413efaf0 FUN_1413efaf0 body=175 status=ok
// SIG undefined FUN_1413efaf0(void)

void FUN_1413efaf0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [2];
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
  FUN_140b8be50(local_res20,local_res10[0]);
  return;
}



// FUNCTION 1413efba0 FUN_1413efba0 body=175 status=ok
// SIG undefined FUN_1413efba0(void)

void FUN_1413efba0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [2];
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
  FUN_140b8be80(local_res20,local_res10[0]);
  return;
}



// FUNCTION 1413efc50 FUN_1413efc50 body=175 status=ok
// SIG undefined FUN_1413efc50(void)

void FUN_1413efc50(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [2];
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
  FUN_140b8beb0(local_res20,local_res10[0]);
  return;
}



// FUNCTION 1413efd00 FUN_1413efd00 body=175 status=ok
// SIG undefined FUN_1413efd00(void)

void FUN_1413efd00(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [2];
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
  FUN_140b8bf10(local_res20,local_res10[0]);
  return;
}



// FUNCTION 1413efdb0 FUN_1413efdb0 body=175 status=ok
// SIG undefined FUN_1413efdb0(void)

void FUN_1413efdb0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [2];
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
  FUN_140b8bf70(local_res20,local_res10[0]);
  return;
}



// FUNCTION 1413efe60 FUN_1413efe60 body=175 status=ok
// SIG undefined FUN_1413efe60(void)

void FUN_1413efe60(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [2];
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
  FUN_140b8bff0(local_res20,local_res10[0]);
  return;
}


