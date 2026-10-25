// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1412f9ef0 FUN_1412f9ef0 body=402 status=ok
// SIG undefined FUN_1412f9ef0(void)

void FUN_1412f9ef0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [8];
  undefined8 local_res18 [2];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_28 [16];
  
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
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_48 = local_68;
  local_40 = local_60;
  local_30 = local_50;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_38 = local_58;
  puVar1 = (undefined8 *)
           FUN_140a5d200(param_1,local_28,local_res10[0],local_res18[0],&local_38,&local_48);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 1412fa090 FUN_1412fa090 body=154 status=ok
// SIG undefined FUN_1412fa090(void)

void FUN_1412fa090(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 local_48 [16];
  undefined1 local_38 [48];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar2 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_140a640a0(local_48,puVar2);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 1412fa1c0 FUN_1412fa1c0 body=408 status=ok
// SIG undefined FUN_1412fa1c0(void)

void FUN_1412fa1c0(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x3f8))(param_1,local_res10,local_res8,&local_a8,puVar1);
  return;
}



// FUNCTION 1412fa3a0 FUN_1412fa3a0 body=481 status=ok
// SIG undefined FUN_1412fa3a0(void)

void FUN_1412fa3a0(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  int local_res8 [2];
  undefined4 local_res10 [4];
  undefined8 local_res20;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [12];
  undefined4 local_ac;
  
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
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  bVar2 = local_res8[0] != 0;
  _guard_xfg_dispatch_icall_nop(local_b8,0,0x90);
  local_ac = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_b8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  puVar1 = local_b8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x400))(param_1,local_c0,local_c8,local_res20,local_res10[0],bVar2,puVar1)
  ;
  return;
}



// FUNCTION 1412fa630 FUN_1412fa630 body=130 status=ok
// SIG undefined FUN_1412fa630(void)

void FUN_1412fa630(undefined8 param_1,longlong param_2)

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
  FUN_140a71f50(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1412fa700 FUN_1412fa700 body=414 status=ok
// SIG undefined FUN_1412fa700(void)

void FUN_1412fa700(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
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
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_48 = local_78;
  local_38 = local_68;
  local_40 = local_70;
  local_30 = local_60;
  local_20 = local_50;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_28 = local_58;
  FUN_140a783e0(param_1,local_res20,&local_28,&local_38,local_res10[0],&local_48);
  return;
}



// FUNCTION 1412fa8b0 FUN_1412fa8b0 body=47 status=ok
// SIG undefined FUN_1412fa8b0(void)

longlong FUN_1412fa8b0(void)

{
  if (DAT_14687c028 == 0) {
    FUN_141786440(&DAT_14687c028,&PTR_GetPrivateStaticClass_1447c50e0);
  }
  return DAT_14687c028;
}



// FUNCTION 1412fa8e0 FUN_1412fa8e0 body=47 status=ok
// SIG undefined FUN_1412fa8e0(void)

longlong FUN_1412fa8e0(void)

{
  if (DAT_14687c008 == 0) {
    FUN_141786a30(&DAT_14687c008,&PTR_FUN_1462c8120);
  }
  return DAT_14687c008;
}



// FUNCTION 1412fa910 FUN_1412fa910 body=47 status=ok
// SIG undefined FUN_1412fa910(void)

longlong FUN_1412fa910(void)

{
  if (DAT_14687c010 == 0) {
    FUN_141786a30(&DAT_14687c010,&PTR_FUN_1462c81e0);
  }
  return DAT_14687c010;
}



// FUNCTION 1412fa940 FUN_1412fa940 body=47 status=ok
// SIG undefined FUN_1412fa940(void)

longlong FUN_1412fa940(void)

{
  if (DAT_14687c018 == 0) {
    FUN_141786a30(&DAT_14687c018,&PTR_FUN_1462c82a0);
  }
  return DAT_14687c018;
}



// FUNCTION 1412fa970 FUN_1412fa970 body=47 status=ok
// SIG undefined FUN_1412fa970(void)

longlong FUN_1412fa970(void)

{
  if (DAT_14687c020 == 0) {
    FUN_141786a30(&DAT_14687c020,&PTR_FUN_1462c8320);
  }
  return DAT_14687c020;
}



// FUNCTION 1412fa9a0 FUN_1412fa9a0 body=53 status=ok
// SIG undefined FUN_1412fa9a0(void)

void FUN_1412fa9a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_1447cff48;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1412fa9e0 FUN_1412fa9e0 body=162 status=ok
// SIG undefined FUN_1412fa9e0(void)

longlong FUN_1412fa9e0(void)

{
  if (DAT_14687c0b8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CrewQuartersRoom",&DAT_14687c0b8,FUN_1412fcf40,0x578,
                  0x10000000,0,L"Engine",&LAB_1412fc4d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  thunk_FUN_1430f5570,&LAB_140447700,0);
  }
  return DAT_14687c0b8;
}



// FUNCTION 1412faa90 FUN_1412faa90 body=53 status=ok
// SIG undefined FUN_1412faa90(void)

void FUN_1412faa90(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x88;
    *puVar1 = &PTR_FUN_1447d0060;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1412faae0 FUN_1412faae0 body=47 status=ok
// SIG undefined FUN_1412faae0(void)

longlong FUN_1412faae0(void)

{
  if (DAT_14687c040 == 0) {
    FUN_141786a30(&DAT_14687c040,&PTR_FUN_1462c8610);
  }
  return DAT_14687c040;
}



// FUNCTION 1412fab10 FUN_1412fab10 body=47 status=ok
// SIG undefined FUN_1412fab10(void)

longlong FUN_1412fab10(void)

{
  if (DAT_14687c048 == 0) {
    FUN_141786a30(&DAT_14687c048,&PTR_FUN_1462c86e0);
  }
  return DAT_14687c048;
}



// FUNCTION 1412fab40 FUN_1412fab40 body=47 status=ok
// SIG undefined FUN_1412fab40(void)

longlong FUN_1412fab40(void)

{
  if (DAT_14687c050 == 0) {
    FUN_141786a30(&DAT_14687c050,&PTR_FUN_1462c8720);
  }
  return DAT_14687c050;
}



// FUNCTION 1412fab70 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAESHelper::GetPrivateStaticClass(void)

{
  if (DAT_14687c150 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"BoosterData",&DAT_14687c150,FUN_140447710,0x48,0x10000000,0,
                  L"Engine",FUN_1412fc4f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_14687c150;
}



// FUNCTION 1412fac30 FUN_1412fac30 body=47 status=ok
// SIG undefined FUN_1412fac30(void)

longlong FUN_1412fac30(void)

{
  if (DAT_14687c0b0 == 0) {
    FUN_141786440(&DAT_14687c0b0,&PTR_FUN_1447c7620);
  }
  return DAT_14687c0b0;
}



// FUNCTION 1412fac60 FUN_1412fac60 body=47 status=ok
// SIG undefined FUN_1412fac60(void)

longlong FUN_1412fac60(void)

{
  if (DAT_14687c080 == 0) {
    FUN_141786a30(&DAT_14687c080,&PTR_FUN_1462c8b10);
  }
  return DAT_14687c080;
}



// FUNCTION 1412fac90 FUN_1412fac90 body=47 status=ok
// SIG undefined FUN_1412fac90(void)

longlong FUN_1412fac90(void)

{
  if (DAT_14687c088 == 0) {
    FUN_141786a30(&DAT_14687c088,&PTR_FUN_1462c8bd0);
  }
  return DAT_14687c088;
}



// FUNCTION 1412facc0 FUN_1412facc0 body=47 status=ok
// SIG undefined FUN_1412facc0(void)

longlong FUN_1412facc0(void)

{
  if (DAT_14687c090 == 0) {
    FUN_141786a30(&DAT_14687c090,&PTR_FUN_1462c8c10);
  }
  return DAT_14687c090;
}



// FUNCTION 1412facf0 FUN_1412facf0 body=47 status=ok
// SIG undefined FUN_1412facf0(void)

longlong FUN_1412facf0(void)

{
  if (DAT_14687c098 == 0) {
    FUN_141786a30(&DAT_14687c098,&PTR_FUN_1462c8c50);
  }
  return DAT_14687c098;
}



// FUNCTION 1412fad20 FUN_1412fad20 body=47 status=ok
// SIG undefined FUN_1412fad20(void)

longlong FUN_1412fad20(void)

{
  if (DAT_14687c0a0 == 0) {
    FUN_141786a30(&DAT_14687c0a0,&PTR_FUN_1462c8c90);
  }
  return DAT_14687c0a0;
}



// FUNCTION 1412fad50 FUN_1412fad50 body=47 status=ok
// SIG undefined FUN_1412fad50(void)

longlong FUN_1412fad50(void)

{
  if (DAT_14687c0a8 == 0) {
    FUN_141786a30(&DAT_14687c0a8,&PTR_FUN_1462c8cd0);
  }
  return DAT_14687c0a8;
}



// FUNCTION 1412fad80 FUN_1412fad80 body=53 status=ok
// SIG undefined FUN_1412fad80(void)

void FUN_1412fad80(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_1447d01f0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1412fade0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGBattleRoyaleGameState::GetPrivateStaticClass(void)

{
  if (DAT_14687c030 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CrewQuartersGunRack",&DAT_14687c030,FUN_1412fcee0,0x588,
                  0x10000000,0,L"Engine",&LAB_1412fc490,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_14687c030;
}



// FUNCTION 1412fae90 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AAIControllerGunfire::GetPrivateStaticClass(void)

{
  if (DAT_14687bf90 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CrewQuartersDecorationDisplayActor",&DAT_14687bf90,
                  FUN_140447710,0x5b8,0x10000000,0,L"Engine",&LAB_1412fc470,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_1412d9cf0,&LAB_140447700,0);
  }
  return DAT_14687bf90;
}



// FUNCTION 1412faf40 FUN_1412faf40 body=162 status=ok
// SIG undefined FUN_1412faf40(void)

longlong FUN_1412faf40(void)

{
  if (DAT_14687bec8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CrewQuartersAssetDecorationData",&DAT_14687bec8,FUN_140447710
                  ,0x30,0x10000001,0,L"Engine",&LAB_1412fc550,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_14687bec8;
}



// FUNCTION 1412faff0 FUN_1412faff0 body=162 status=ok
// SIG undefined FUN_1412faff0(void)

longlong FUN_1412faff0(void)

{
  if (DAT_14687be58 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CrazyEarlAnointmentReroll",&DAT_14687be58,FUN_1412fce50,0x688
                  ,0x10000000,0,L"Engine",&LAB_1412fc380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  ALandscapeStreamingProxy::StaticClass,&LAB_140447700,0);
  }
  return DAT_14687be58;
}



// FUNCTION 1412fb0a0 FUN_1412fb0a0 body=162 status=ok
// SIG undefined FUN_1412fb0a0(void)

longlong FUN_1412fb0a0(void)

{
  if (DAT_14687be10 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CosmeticFrozenActor",&DAT_14687be10,FUN_140447710,0x460,
                  0x10000000,0,L"Engine",&LAB_1412fc360,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_14687be10;
}



// FUNCTION 1412fb150 FUN_1412fb150 body=53 status=ok
// SIG undefined FUN_1412fb150(void)

void FUN_1412fb150(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_1447d0370;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1412fb190 FUN_1412fb190 body=162 status=ok
// SIG undefined FUN_1412fb190(void)

longlong FUN_1412fb190(void)

{
  if (DAT_14687bfc0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CrewQuartersDecorationItemData",&DAT_14687bfc0,FUN_140447710,
                  0x1c8,0x10000000,0,L"Engine",&LAB_1412fc590,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142e498a0,&LAB_140447700,0);
  }
  return DAT_14687bfc0;
}



// FUNCTION 1412fb260 FUN_1412fb260 body=162 status=ok
// SIG undefined FUN_1412fb260(void)

longlong FUN_1412fb260(void)

{
  if (DAT_14687c108 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CrewQuartersSkeletalDecorationData",&DAT_14687c108,
                  FUN_140447710,0x50,0x10000000,0,L"Engine",&LAB_1412fc610,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1412faf40,&LAB_140447700,0);
  }
  return DAT_14687c108;
}



// FUNCTION 1412fb310 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGJournalKey::GetPrivateStaticClass(void)

{
  if (DAT_14687c0c8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CrewQuartersRoomData",&DAT_14687c0c8,FUN_140447710,0xa0,
                  0x10000000,0,L"Engine",&LAB_1412fc5d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1430f5620,&LAB_140447700,0);
  }
  return DAT_14687c0c8;
}



// FUNCTION 1412fb3d0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UFadeInOutViewportClient::GetPrivateStaticClass(void)

{
  if (DAT_14687be68 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CrazyEarlAnointmentRerollProxy",&DAT_14687be68,FUN_140447710,
                  0x500,0x10000008,0,L"Engine",FUN_1412fc3a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,FUN_1412d7880
                  ,&LAB_140447700,0);
  }
  return DAT_14687be68;
}



// FUNCTION 1412fb480 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAESHelper::GetPrivateStaticClass(void)

{
  if (DAT_14687c0f8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CrewQuartersRoomItemData",&DAT_14687c0f8,FUN_140447710,0x48,
                  0x10000000,0,L"Engine",&LAB_1412fc5f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDataAsset::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14687c0f8;
}



// FUNCTION 1412fb530 FUN_1412fb530 body=162 status=ok
// SIG undefined FUN_1412fb530(void)

longlong FUN_1412fb530(void)

{
  if (DAT_14687c118 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CrewQuartersStaticDecorationData",&DAT_14687c118,
                  FUN_140447710,0x38,0x10000000,0,L"Engine",&LAB_1412fc630,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1412faf40,&LAB_140447700,0);
  }
  return DAT_14687c118;
}



// FUNCTION 1412fb5e0 FUN_1412fb5e0 body=47 status=ok
// SIG undefined FUN_1412fb5e0(void)

longlong FUN_1412fb5e0(void)

{
  if (DAT_14687be50 == 0) {
    FUN_141786440(&DAT_14687be50,&PTR_FUN_1447ca570);
  }
  return DAT_14687be50;
}



// FUNCTION 1412fb610 FUN_1412fb610 body=47 status=ok
// SIG undefined FUN_1412fb610(void)

longlong FUN_1412fb610(void)

{
  if (DAT_14687be28 == 0) {
    FUN_141786a30(&DAT_14687be28,&PTR_FUN_1462c6370);
  }
  return DAT_14687be28;
}



// FUNCTION 1412fb640 FUN_1412fb640 body=47 status=ok
// SIG undefined FUN_1412fb640(void)

longlong FUN_1412fb640(void)

{
  if (DAT_14687be30 == 0) {
    FUN_141786a30(&DAT_14687be30,&PTR_FUN_1462c63b0);
  }
  return DAT_14687be30;
}



// FUNCTION 1412fb670 FUN_1412fb670 body=47 status=ok
// SIG undefined FUN_1412fb670(void)

longlong FUN_1412fb670(void)

{
  if (DAT_14687be38 == 0) {
    FUN_141786a30(&DAT_14687be38,&PTR_FUN_1462c6430);
  }
  return DAT_14687be38;
}



// FUNCTION 1412fb6a0 FUN_1412fb6a0 body=47 status=ok
// SIG undefined FUN_1412fb6a0(void)

longlong FUN_1412fb6a0(void)

{
  if (DAT_14687be40 == 0) {
    FUN_141786a30(&DAT_14687be40,&PTR_FUN_1462c64f0);
  }
  return DAT_14687be40;
}



// FUNCTION 1412fb6d0 FUN_1412fb6d0 body=47 status=ok
// SIG undefined FUN_1412fb6d0(void)

longlong FUN_1412fb6d0(void)

{
  if (DAT_14687be48 == 0) {
    FUN_141786a30(&DAT_14687be48,&PTR_FUN_1462c65b0);
  }
  return DAT_14687be48;
}



// FUNCTION 1412fb710 FUN_1412fb710 body=53 status=ok
// SIG undefined FUN_1412fb710(void)

void FUN_1412fb710(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_1447cfb08;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1412fb750 FUN_1412fb750 body=162 status=ok
// SIG undefined FUN_1412fb750(void)

longlong FUN_1412fb750(void)

{
  if (DAT_14687c130 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CrosshairDataAsset",&DAT_14687c130,FUN_140447710,0x50,
                  0x10000000,0,L"Engine",FUN_1412fc650,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_14687c130;
}



// FUNCTION 1412fb810 FUN_1412fb810 body=53 status=ok
// SIG undefined FUN_1412fb810(void)

void FUN_1412fb810(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x90;
    *puVar1 = &PTR_FUN_1447d0790;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1412fb880 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UInputKeySelector::GetPrivateStaticClass(void)

{
  if (DAT_14687be88 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CrazyEarlDoor",&DAT_14687be88,FUN_140447710,0x670,0x10000000,
                  0,L"Engine",&LAB_1412fc3f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  ALandscapeStreamingProxy::StaticClass,&LAB_140447700,0);
  }
  return DAT_14687be88;
}



// FUNCTION 1412fb930 FUN_1412fb930 body=47 status=ok
// SIG undefined FUN_1412fb930(void)

longlong FUN_1412fb930(void)

{
  if (DAT_14687be80 == 0) {
    FUN_141786440(&DAT_14687be80,&PTR_GetPrivateStaticClass_1447cae40);
  }
  return DAT_14687be80;
}



// FUNCTION 1412fb960 FUN_1412fb960 body=47 status=ok
// SIG undefined FUN_1412fb960(void)

longlong FUN_1412fb960(void)

{
  if (DAT_14687be70 == 0) {
    FUN_141786a30(&DAT_14687be70,&PTR_FUN_1462c6840);
  }
  return DAT_14687be70;
}



// FUNCTION 1412fb990 FUN_1412fb990 body=47 status=ok
// SIG undefined FUN_1412fb990(void)

longlong FUN_1412fb990(void)

{
  if (DAT_14687be78 == 0) {
    FUN_141786a30(&DAT_14687be78,&PTR_FUN_1462c68c0);
  }
  return DAT_14687be78;
}



// FUNCTION 1412fb9d0 FUN_1412fb9d0 body=162 status=ok
// SIG undefined FUN_1412fb9d0(void)

longlong FUN_1412fb9d0(void)

{
  if (DAT_14687be98 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CrazyEarlDoorProxy",&DAT_14687be98,FUN_140447710,0x4e8,
                  0x10000008,0,L"Engine",&LAB_1412fc410,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,FUN_1412d7880
                  ,&LAB_140447700,0);
  }
  return DAT_14687be98;
}



// FUNCTION 1412fba90 FUN_1412fba90 body=162 status=ok
// SIG undefined FUN_1412fba90(void)

longlong FUN_1412fba90(void)

{
  if (DAT_14687bea8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CrewQuartersActorDecorationData",&DAT_14687bea8,FUN_140447710
                  ,0x38,0x10000000,0,L"Engine",&LAB_1412fc530,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1412faf40,&LAB_140447700,0);
  }
  return DAT_14687bea8;
}



// FUNCTION 1412fbb40 FUN_1412fbb40 body=47 status=ok
// SIG undefined FUN_1412fbb40(void)

longlong FUN_1412fbb40(void)

{
  if (DAT_14687bec0 == 0) {
    FUN_141786440(&DAT_14687bec0,&PTR_FUN_1447cbea0);
  }
  return DAT_14687bec0;
}



// FUNCTION 1412fbba0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGRichTextBlock::GetPrivateStaticClass(void)

{
  if (DAT_14687bef8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CrewQuartersCountdownActor",&DAT_14687bef8,
                  StaticRegisterNativesUUGRichTextBlock,0x488,0x10000000,0,L"Engine",&LAB_1412fc430,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_14687bef8;
}



// FUNCTION 1412fbc50 FUN_1412fbc50 body=47 status=ok
// SIG undefined FUN_1412fbc50(void)

longlong FUN_1412fbc50(void)

{
  if (DAT_14687bef0 == 0) {
    FUN_141786440(&DAT_14687bef0,&PTR_GetPrivateStaticClass_1447cd810);
  }
  return DAT_14687bef0;
}



// FUNCTION 1412fbc80 FUN_1412fbc80 body=47 status=ok
// SIG undefined FUN_1412fbc80(void)

longlong FUN_1412fbc80(void)

{
  if (DAT_14687bee0 == 0) {
    FUN_141786a30(&DAT_14687bee0,&PTR_FUN_1462c6b50);
  }
  return DAT_14687bee0;
}



// FUNCTION 1412fbcb0 FUN_1412fbcb0 body=47 status=ok
// SIG undefined FUN_1412fbcb0(void)

longlong FUN_1412fbcb0(void)

{
  if (DAT_14687bee8 == 0) {
    FUN_141786a30(&DAT_14687bee8,&PTR_FUN_1462c6bd0);
  }
  return DAT_14687bee8;
}



// FUNCTION 1412fbcf0 FUN_1412fbcf0 body=47 status=ok
// SIG undefined FUN_1412fbcf0(void)

longlong FUN_1412fbcf0(void)

{
  if (DAT_14687bf60 == 0) {
    FUN_141786440(&DAT_14687bf60,&PTR_FUN_1447cddf0);
  }
  return DAT_14687bf60;
}



// FUNCTION 1412fbd20 FUN_1412fbd20 body=47 status=ok
// SIG undefined FUN_1412fbd20(void)

longlong FUN_1412fbd20(void)

{
  if (DAT_14687c058 == 0) {
    FUN_141786440(&DAT_14687c058,&PTR_FUN_1447c5a80);
  }
  return DAT_14687c058;
}



// FUNCTION 1412fbd50 FUN_1412fbd50 body=47 status=ok
// SIG undefined FUN_1412fbd50(void)

longlong FUN_1412fbd50(void)

{
  if (DAT_14687bf10 == 0) {
    FUN_141786a30(&DAT_14687bf10,&PTR_FUN_1462c6e00);
  }
  return DAT_14687bf10;
}



// FUNCTION 1412fbd80 FUN_1412fbd80 body=47 status=ok
// SIG undefined FUN_1412fbd80(void)

longlong FUN_1412fbd80(void)

{
  if (DAT_14687bf18 == 0) {
    FUN_141786a30(&DAT_14687bf18,&PTR_FUN_1462c6f00);
  }
  return DAT_14687bf18;
}



// FUNCTION 1412fbdb0 FUN_1412fbdb0 body=47 status=ok
// SIG undefined FUN_1412fbdb0(void)

longlong FUN_1412fbdb0(void)

{
  if (DAT_14687bf20 == 0) {
    FUN_141786a30(&DAT_14687bf20,&PTR_FUN_1462c6f40);
  }
  return DAT_14687bf20;
}



// FUNCTION 1412fbde0 FUN_1412fbde0 body=47 status=ok
// SIG undefined FUN_1412fbde0(void)

longlong FUN_1412fbde0(void)

{
  if (DAT_14687bf28 == 0) {
    FUN_141786a30(&DAT_14687bf28,&PTR_FUN_1462c6f80);
  }
  return DAT_14687bf28;
}



// FUNCTION 1412fbe10 FUN_1412fbe10 body=47 status=ok
// SIG undefined FUN_1412fbe10(void)

longlong FUN_1412fbe10(void)

{
  if (DAT_14687bf30 == 0) {
    FUN_141786a30(&DAT_14687bf30,&PTR_FUN_1462c7000);
  }
  return DAT_14687bf30;
}



// FUNCTION 1412fbe40 FUN_1412fbe40 body=47 status=ok
// SIG undefined FUN_1412fbe40(void)

longlong FUN_1412fbe40(void)

{
  if (DAT_14687bf38 == 0) {
    FUN_141786a30(&DAT_14687bf38,&PTR_FUN_1462c70c0);
  }
  return DAT_14687bf38;
}



// FUNCTION 1412fbe70 FUN_1412fbe70 body=47 status=ok
// SIG undefined FUN_1412fbe70(void)

longlong FUN_1412fbe70(void)

{
  if (DAT_14687bf40 == 0) {
    FUN_141786a30(&DAT_14687bf40,&PTR_FUN_1462c7100);
  }
  return DAT_14687bf40;
}



// FUNCTION 1412fbea0 FUN_1412fbea0 body=47 status=ok
// SIG undefined FUN_1412fbea0(void)

longlong FUN_1412fbea0(void)

{
  if (DAT_14687bf48 == 0) {
    FUN_141786a30(&DAT_14687bf48,&PTR_FUN_1462c7180);
  }
  return DAT_14687bf48;
}



// FUNCTION 1412fbed0 FUN_1412fbed0 body=47 status=ok
// SIG undefined FUN_1412fbed0(void)

longlong FUN_1412fbed0(void)

{
  if (DAT_14687bf50 == 0) {
    FUN_141786a30(&DAT_14687bf50,&PTR_FUN_1462c7200);
  }
  return DAT_14687bf50;
}



// FUNCTION 1412fbf00 FUN_1412fbf00 body=47 status=ok
// SIG undefined FUN_1412fbf00(void)

longlong FUN_1412fbf00(void)

{
  if (DAT_14687bf58 == 0) {
    FUN_141786a30(&DAT_14687bf58,&PTR_FUN_1462c7240);
  }
  return DAT_14687bf58;
}



// FUNCTION 1412fbf30 FUN_1412fbf30 body=53 status=ok
// SIG undefined FUN_1412fbf30(void)

void FUN_1412fbf30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_1447cfc70;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1412fbf80 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UARTrackedObject::GetPrivateStaticClass(void)

{
  if (DAT_14687bf78 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CrewQuartersDecorationData",&DAT_14687bf78,FUN_140447710,0xd0
                  ,0x10000000,0,L"Engine",&LAB_1412fc570,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDataAsset::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14687bf78;
}



// FUNCTION 1412fc050 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGameplayTagAssetInterface::GetPrivateStaticClass(void)

{
  if (DAT_14687beb8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CrewQuartersActorInterface",&DAT_14687beb8,FUN_140447710,0x28
                  ,0x10004001,0,L"Engine",&LAB_140492380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_14687beb8;
}



// FUNCTION 1412fc100 FUN_1412fc100 body=53 status=ok
// SIG undefined FUN_1412fc100(void)

void FUN_1412fc100(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_1447cfe30;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1412fc140 FUN_1412fc140 body=162 status=ok
// SIG undefined FUN_1412fc140(void)

longlong FUN_1412fc140(void)

{
  if (DAT_14687c060 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CrewQuartersInteractiveObject",&DAT_14687c060,FUN_1412fcf10,
                  0x6b8,0x10000000,0,L"Engine",&LAB_1412fc4b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  ALandscapeStreamingProxy::StaticClass,&LAB_140447700,0);
  }
  return DAT_14687c060;
}



// FUNCTION 1412fc200 FUN_1412fc200 body=162 status=ok
// SIG undefined FUN_1412fc200(void)

longlong FUN_1412fc200(void)

{
  if (DAT_14687bf68 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CrewQuartersDecoration",&DAT_14687bf68,FUN_1412fceb0,0x720,
                  0x10000000,0,L"Engine",&LAB_1412fc450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,FUN_1412fc140
                  ,&LAB_140447700,0);
  }
  return DAT_14687bf68;
}



// FUNCTION 1412fc2b0 FUN_1412fc2b0 body=162 status=ok
// SIG undefined FUN_1412fc2b0(void)

longlong FUN_1412fc2b0(void)

{
  if (DAT_14687bfe0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CrewQuartersGlobalData",&DAT_14687bfe0,FUN_140447710,0x78,
                  0x10000000,0,L"Engine",&LAB_1412fc5b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDataAsset::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14687bfe0;
}



// FUNCTION 1412fc3a0 FUN_1412fc3a0 body=71 status=ok
// SIG undefined FUN_1412fc3a0(void)

void FUN_1412fc3a0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140ac4f70(puVar1,param_1);
    *puVar1 = &PTR_FUN_1447cf378;
    puVar1[0x8b] = &PTR_LAB_1447cfae0;
    puVar1[0x9d] = 0;
    puVar1[0x9e] = 0;
  }
  return;
}



// FUNCTION 1412fc4f0 FUN_1412fc4f0 body=51 status=ok
// SIG undefined FUN_1412fc4f0(void)

void FUN_1412fc4f0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__1447cf0f8;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  return;
}



// FUNCTION 1412fc650 FUN_1412fc650 body=59 status=ok
// SIG undefined FUN_1412fc650(void)

void FUN_1412fc650(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__1447d0510;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
  }
  return;
}



// FUNCTION 1412fc690 FUN_1412fc690 body=316 status=ok
// SIG undefined FUN_1412fc690(void)

void FUN_1412fc690(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  lVar5 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar7 = (longlong *)(lVar5 + 0x48);
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
      plVar4 = (longlong *)plVar7[-3];
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
      if (plVar7[-6] != 0) {
        FMemory::Free();
      }
      if (plVar7[-8] != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 0x12;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *param_1;
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1412fc7e0 FUN_1412fc7e0 body=66 status=ok
// SIG undefined FUN_1412fc7e0(void)

longlong FUN_1412fc7e0(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_1441b39a8;
  FUN_1404571d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x500);
  }
  return param_1;
}



// FUNCTION 1412fc830 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UPaperTerrainMaterial::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  FUN_1412fc690(param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1412fc870 FUN_1412fc870 body=61 status=ok
// SIG undefined FUN_1412fc870(void)

void FUN_1412fc870(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_14687bdf0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1412fc8b0 FUN_1412fc8b0 body=83 status=ok
// SIG undefined FUN_1412fc8b0(void)

void FUN_1412fc8b0(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  _guard_xfg_dispatch_icall_nop(param_2 + 4,0,0x70);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  FText::FText(param_2 + 5);
  FText::FText(param_2 + 8);
  FText::FText(param_2 + 0xb);
  return;
}



// FUNCTION 1412fc940 FUN_1412fc940 body=91 status=ok
// SIG undefined FUN_1412fc940(void)

void FUN_1412fc940(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  _guard_xfg_dispatch_icall_nop(param_2 + 2,0,0x68);
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  return;
}



// FUNCTION 1412fc9d0 FUN_1412fc9d0 body=199 status=ok
// SIG undefined FUN_1412fc9d0(void)

undefined8 FUN_1412fc9d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 0x18;
    do {
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18 + param_2);
      FString::operator=(param_2 + -0x10,param_3 + -0x10 + param_2);
      FString::operator=(param_2,param_3 + param_2);
      FText::operator=(param_2 + 0x10,param_3 + 0x10 + param_2);
      FText::operator=(param_2 + 0x28,param_3 + 0x28 + param_2);
      FText::operator=(param_2 + 0x40,param_3 + 0x40 + param_2);
      *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_3 + 0x58 + param_2);
      *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_3 + 0x60 + param_2);
      *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_3 + 0x68 + param_2);
      *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_3 + 0x70 + param_2);
      param_2 = param_2 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1412fcaa0 Copy body=71 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FAnimNode_MeshSpaceRefPose>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_140a51f00(param_2 + param_3,param_3);
      param_3 = param_3 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1412fcaf0 Copy body=80 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FAttributesForEdge>::Copy
          (undefined8 param_1,undefined4 *param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - (longlong)param_2;
    do {
      *param_2 = *(undefined4 *)(param_3 + (longlong)param_2);
      FString::operator=(param_2 + 2,param_3 + 8 + (longlong)param_2);
      param_2 = param_2 + 6;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1412fcb40 Copy body=74 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FAnimUpdateRateParameters>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_140a51f60(param_2 + param_3,param_3);
      param_3 = param_3 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1412fcb90 FUN_1412fcb90 body=71 status=ok
// SIG undefined FUN_1412fcb90(void)

undefined1 FUN_1412fcb90(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_140a51f90(param_2 + param_3,param_3);
      param_3 = param_3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1412fcbe0 Copy body=71 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FMovieSceneSequenceInstanceDataPtr>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_140a7d0d0(param_2 + param_3,param_3);
      param_3 = param_3 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1412fcc30 Copy body=71 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FRestrictedGameplayTagTableRow>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_140a52100(param_2 + param_3,param_3);
      param_3 = param_3 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1412fccb0 FUN_1412fccb0 body=55 status=ok
// SIG undefined FUN_1412fccb0(void)

void FUN_1412fccb0(void)

{
  undefined8 uVar1;
  
  if (DAT_14687b980 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687b980 = GetStaticEnum(FUN_1412fd750,uVar1,L"ECrosshairColorsEnum");
  }
  return;
}



// FUNCTION 1412fccf0 FUN_1412fccf0 body=6 status=ok
// SIG undefined FUN_1412fccf0(void)

undefined8 FUN_1412fccf0(void)

{
  return 0x20c6980f;
}



// FUNCTION 1412fcd00 FUN_1412fcd00 body=6 status=ok
// SIG undefined FUN_1412fcd00(void)

undefined8 FUN_1412fcd00(void)

{
  return 0x711d150b;
}



// FUNCTION 1412fcd10 FUN_1412fcd10 body=6 status=ok
// SIG undefined FUN_1412fcd10(void)

undefined8 FUN_1412fcd10(void)

{
  return 0xda491a35;
}



// FUNCTION 1412fcd20 FUN_1412fcd20 body=6 status=ok
// SIG undefined FUN_1412fcd20(void)

undefined8 FUN_1412fcd20(void)

{
  return 0xf982368a;
}



// FUNCTION 1412fcd30 FUN_1412fcd30 body=6 status=ok
// SIG undefined FUN_1412fcd30(void)

undefined8 FUN_1412fcd30(void)

{
  return 0x41662f6e;
}



// FUNCTION 1412fcd40 FUN_1412fcd40 body=6 status=ok
// SIG undefined FUN_1412fcd40(void)

undefined8 FUN_1412fcd40(void)

{
  return 0x221f7b40;
}



// FUNCTION 1412fcd50 FUN_1412fcd50 body=6 status=ok
// SIG undefined FUN_1412fcd50(void)

undefined8 FUN_1412fcd50(void)

{
  return 0x9d7a7a24;
}



// FUNCTION 1412fcd60 FUN_1412fcd60 body=6 status=ok
// SIG undefined FUN_1412fcd60(void)

undefined8 FUN_1412fcd60(void)

{
  return 0xe3975b3;
}



// FUNCTION 1412fcd70 FUN_1412fcd70 body=6 status=ok
// SIG undefined FUN_1412fcd70(void)

undefined8 FUN_1412fcd70(void)

{
  return 0x9888b128;
}



// FUNCTION 1412fcd80 FUN_1412fcd80 body=6 status=ok
// SIG undefined FUN_1412fcd80(void)

undefined8 FUN_1412fcd80(void)

{
  return 0x937db239;
}



// FUNCTION 1412fcd90 FUN_1412fcd90 body=6 status=ok
// SIG undefined FUN_1412fcd90(void)

undefined8 FUN_1412fcd90(void)

{
  return 0x7c832721;
}



// FUNCTION 1412fcda0 FUN_1412fcda0 body=57 status=ok
// SIG undefined FUN_1412fcda0(void)

void FUN_1412fcda0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14687bdd0);
                    /* WARNING: Could not recover jumptable at 0x0001412fcdd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1412fcde0 FUN_1412fcde0 body=61 status=ok
// SIG undefined FUN_1412fcde0(void)

void FUN_1412fcde0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_14687bdd8);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1412fce20 thunk_FUN_1430f5570 body=5 status=ok
// SIG undefined thunk_FUN_1430f5570(void)

void thunk_FUN_1430f5570(void)

{
  FUN_1430f5570();
  return;
}



// FUNCTION 1412fce30 thunk_FUN_1430f5620 body=5 status=ok
// SIG undefined thunk_FUN_1430f5620(void)

void thunk_FUN_1430f5620(void)

{
  FUN_1430f5620();
  return;
}



// FUNCTION 1412fce40 thunk_FUN_142e498a0 body=5 status=ok
// SIG undefined thunk_FUN_142e498a0(void)

void thunk_FUN_142e498a0(void)

{
  FUN_142e498a0();
  return;
}



// FUNCTION 1412fce50 FUN_1412fce50 body=34 status=ok
// SIG undefined FUN_1412fce50(void)

void FUN_1412fce50(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1412faff0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnRep_ItemPreviewActor_1447cfc20,3);
  return;
}



// FUNCTION 1412fce80 StaticRegisterNativesUUGRichTextBlock body=34 status=ok
// SIG undefined StaticRegisterNativesUUGRichTextBlock(void)

void UUGRichTextBlock::StaticRegisterNativesUUGRichTextBlock(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnRoomChangeCountdown_1447cfc50,2);
  return;
}



// FUNCTION 1412fceb0 FUN_1412fceb0 body=34 status=ok
// SIG undefined FUN_1412fceb0(void)

void FUN_1412fceb0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1412fc200();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ApplyDecoration_1447cfd90,10);
  return;
}



// FUNCTION 1412fcee0 FUN_1412fcee0 body=34 status=ok
// SIG undefined FUN_1412fcee0(void)

void FUN_1412fcee0(void)

{
  undefined8 uVar1;
  
  uVar1 = AGBattleRoyaleGameState::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_CreateEmptyPickup_1447d0180,4);
  return;
}



// FUNCTION 1412fcf10 FUN_1412fcf10 body=34 status=ok
// SIG undefined FUN_1412fcf10(void)

void FUN_1412fcf10(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1412fc140();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ClientOpenMenu_1447d01c0,3);
  return;
}



// FUNCTION 1412fcf40 FUN_1412fcf40 body=34 status=ok
// SIG undefined FUN_1412fcf40(void)

void FUN_1412fcf40(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1412fa9e0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ApplyRoomMood_1447d0310,6);
  return;
}



// FUNCTION 1412fcf70 FUN_1412fcf70 body=82 status=ok
// SIG undefined FUN_1412fcf70(void)

void FUN_1412fcf70(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687c138 == 0) {
    uVar1 = FUN_1412fccf0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687c138 = GetStaticStruct(FUN_1412fd780,uVar2,L"CSBoosterInfo",0x90,uVar1);
  }
  return;
}



// FUNCTION 1412fcfd0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687bf98 == 0) {
    uVar1 = FUN_1412fcd00();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687bf98 = GetStaticStruct(FUN_1412fd7b0,uVar2,L"CrewQuartersDecorationInfo",0x10,uVar1);
  }
  return;
}



// FUNCTION 1412fd030 FUN_1412fd030 body=82 status=ok
// SIG undefined FUN_1412fd030(void)

void FUN_1412fd030(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687bfa8 == 0) {
    uVar1 = FUN_1412fcd10();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687bfa8 =
         GetStaticStruct(FUN_1412fd7e0,uVar2,L"CrewQuartersDecorationItemSaveGameData",0x30,uVar1);
  }
  return;
}



// FUNCTION 1412fd090 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceKey::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687bf00 == 0) {
    uVar1 = FUN_1412fcd20();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687bf00 =
         GetStaticStruct(FUN_1412fd810,uVar2,L"CrewQuartersDecorationSaveData",0x18,uVar1);
  }
  return;
}



// FUNCTION 1412fd0f0 FUN_1412fd0f0 body=82 status=ok
// SIG undefined FUN_1412fd0f0(void)

void FUN_1412fd0f0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687bff8 == 0) {
    uVar1 = FUN_1412fcd30();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687bff8 =
         GetStaticStruct(FUN_1412fd840,uVar2,L"CrewQuartersGunRackItemSaveData",0x88,uVar1);
  }
  return;
}



// FUNCTION 1412fd150 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687bfe8 == 0) {
    uVar1 = FUN_1412fcd40();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687bfe8 = GetStaticStruct(FUN_1412fd870,uVar2,L"CrewQuartersGunRackSaveData",0x10,uVar1);
  }
  return;
}



// FUNCTION 1412fd1b0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687bfc8 == 0) {
    uVar1 = FUN_1412fcd50();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687bfc8 = GetStaticStruct(FUN_1412fd8a0,uVar2,L"CrewQuartersRoomAssignment",0x10,uVar1);
  }
  return;
}



// FUNCTION 1412fd210 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687c0d0 == 0) {
    uVar1 = FUN_1412fcd60();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687c0d0 = GetStaticStruct(FUN_1412fd8d0,uVar2,L"CrewQuartersRoomInfo",0x10,uVar1);
  }
  return;
}



// FUNCTION 1412fd270 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceKey::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687c0e0 == 0) {
    uVar1 = FUN_1412fcd70();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687c0e0 =
         GetStaticStruct(FUN_1412fd900,uVar2,L"CrewQuartersRoomItemSaveGameData",0x18,uVar1);
  }
  return;
}



// FUNCTION 1412fd2d0 FUN_1412fd2d0 body=82 status=ok
// SIG undefined FUN_1412fd2d0(void)

void FUN_1412fd2d0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687c070 == 0) {
    uVar1 = FUN_1412fcd80();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687c070 = GetStaticStruct(FUN_1412fd930,uVar2,L"CrewQuartersSaveData",0x28,uVar1);
  }
  return;
}



// FUNCTION 1412fd330 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceKey::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687be18 == 0) {
    uVar1 = FUN_1412fcd90();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687be18 = GetStaticStruct(FUN_1412fd960,uVar2,L"PlayerItemDisplayInfo",0x18,uVar1);
  }
  return;
}



// FUNCTION 1412fd390 FUN_1412fd390 body=47 status=ok
// SIG undefined FUN_1412fd390(void)

longlong FUN_1412fd390(void)

{
  if (DAT_14687be08 == 0) {
    FUN_141786440(&DAT_14687be08,&PTR_FUN_1447c9280);
  }
  return DAT_14687be08;
}



// FUNCTION 1412fd3c0 Z_Construct_UClass_UMovieSceneCinematicShotTrack body=47 status=ok
// SIG undefined Z_Construct_UClass_UMovieSceneCinematicShotTrack(void)

longlong Z_Construct_UClass_UMovieSceneCinematicShotTrack(void)

{
  if (DAT_14687be60 == 0) {
    FUN_141786440(&DAT_14687be60,&PTR_GetPrivateStaticClass_1447ca890);
  }
  return DAT_14687be60;
}



// FUNCTION 1412fd3f0 FUN_1412fd3f0 body=47 status=ok
// SIG undefined FUN_1412fd3f0(void)

longlong FUN_1412fd3f0(void)

{
  if (DAT_14687be90 == 0) {
    FUN_141786440(&DAT_14687be90,&PTR_FUN_1447cb290);
  }
  return DAT_14687be90;
}



// FUNCTION 1412fd420 FUN_1412fd420 body=47 status=ok
// SIG undefined FUN_1412fd420(void)

longlong FUN_1412fd420(void)

{
  if (DAT_14687bf88 == 0) {
    FUN_141786440(&DAT_14687bf88,&PTR_GetPrivateStaticClass_1447ce4b0);
  }
  return DAT_14687bf88;
}



// FUNCTION 1412fd450 FUN_1412fd450 body=47 status=ok
// SIG undefined FUN_1412fd450(void)

longlong FUN_1412fd450(void)

{
  if (DAT_14687c148 == 0) {
    FUN_141786440(&DAT_14687c148,&PTR_GetPrivateStaticClass_1447ca960);
  }
  return DAT_14687c148;
}



// FUNCTION 1412fd480 FUN_1412fd480 body=47 status=ok
// SIG undefined FUN_1412fd480(void)

longlong FUN_1412fd480(void)

{
  if (DAT_14687bea0 == 0) {
    FUN_141786440(&DAT_14687bea0,&PTR_FUN_1447cb3b0);
  }
  return DAT_14687bea0;
}



// FUNCTION 1412fd4b0 FUN_1412fd4b0 body=47 status=ok
// SIG undefined FUN_1412fd4b0(void)

longlong FUN_1412fd4b0(void)

{
  if (DAT_14687beb0 == 0) {
    FUN_141786440(&DAT_14687beb0,&PTR_GetPrivateStaticClass_1447cb750);
  }
  return DAT_14687beb0;
}



// FUNCTION 1412fd4e0 FUN_1412fd4e0 body=47 status=ok
// SIG undefined FUN_1412fd4e0(void)

longlong FUN_1412fd4e0(void)

{
  if (DAT_14687bf70 == 0) {
    FUN_141786440(&DAT_14687bf70,&PTR_GetPrivateStaticClass_1447ce0e0);
  }
  return DAT_14687bf70;
}



// FUNCTION 1412fd510 FUN_1412fd510 body=47 status=ok
// SIG undefined FUN_1412fd510(void)

longlong FUN_1412fd510(void)

{
  if (DAT_14687bfb8 == 0) {
    FUN_141786440(&DAT_14687bfb8,&PTR_FUN_1447ce8a0);
  }
  return DAT_14687bfb8;
}



// FUNCTION 1412fd540 FUN_1412fd540 body=47 status=ok
// SIG undefined FUN_1412fd540(void)

longlong FUN_1412fd540(void)

{
  if (DAT_14687bfd8 == 0) {
    FUN_141786440(&DAT_14687bfd8,&PTR_FUN_1447cec90);
  }
  return DAT_14687bfd8;
}



// FUNCTION 1412fd570 FUN_1412fd570 body=47 status=ok
// SIG undefined FUN_1412fd570(void)

longlong FUN_1412fd570(void)

{
  if (DAT_14687c0c0 == 0) {
    FUN_141786440(&DAT_14687c0c0,&PTR_GetPrivateStaticClass_1447c7910);
  }
  return DAT_14687c0c0;
}



// FUNCTION 1412fd5a0 FUN_1412fd5a0 body=47 status=ok
// SIG undefined FUN_1412fd5a0(void)

longlong FUN_1412fd5a0(void)

{
  if (DAT_14687c0f0 == 0) {
    FUN_141786440(&DAT_14687c0f0,&PTR_GetPrivateStaticClass_1447c9520);
  }
  return DAT_14687c0f0;
}



// FUNCTION 1412fd5d0 FUN_1412fd5d0 body=47 status=ok
// SIG undefined FUN_1412fd5d0(void)

longlong FUN_1412fd5d0(void)

{
  if (DAT_14687c100 == 0) {
    FUN_141786440(&DAT_14687c100,&PTR_FUN_1447c9a60);
  }
  return DAT_14687c100;
}



// FUNCTION 1412fd600 FUN_1412fd600 body=47 status=ok
// SIG undefined FUN_1412fd600(void)

longlong FUN_1412fd600(void)

{
  if (DAT_14687c110 == 0) {
    FUN_141786440(&DAT_14687c110,&PTR_FUN_1447c9c60);
  }
  return DAT_14687c110;
}



// FUNCTION 1412fd630 FUN_1412fd630 body=47 status=ok
// SIG undefined FUN_1412fd630(void)

longlong FUN_1412fd630(void)

{
  if (DAT_14687c128 == 0) {
    FUN_141786440(&DAT_14687c128,&PTR_FUN_1447ca230);
  }
  return DAT_14687c128;
}



// FUNCTION 1412fd660 FUN_1412fd660 body=47 status=ok
// SIG undefined FUN_1412fd660(void)

longlong FUN_1412fd660(void)

{
  if (DAT_14687bed8 == 0) {
    FUN_141786a30(&DAT_14687bed8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462c6ad0);
  }
  return DAT_14687bed8;
}



// FUNCTION 1412fd690 FUN_1412fd690 body=47 status=ok
// SIG undefined FUN_1412fd690(void)

longlong FUN_1412fd690(void)

{
  if (DAT_14687bed0 == 0) {
    FUN_141786a30(&DAT_14687bed0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462c6a50);
  }
  return DAT_14687bed0;
}



// FUNCTION 1412fd6c0 FUN_1412fd6c0 body=47 status=ok
// SIG undefined FUN_1412fd6c0(void)

longlong FUN_1412fd6c0(void)

{
  if (DAT_14687c068 == 0) {
    FUN_141786a30(&DAT_14687c068,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462c8910);
  }
  return DAT_14687c068;
}



// FUNCTION 1412fd6f0 FUN_1412fd6f0 body=47 status=ok
// SIG undefined FUN_1412fd6f0(void)

longlong FUN_1412fd6f0(void)

{
  if (DAT_14687bf80 == 0) {
    FUN_141786a30(&DAT_14687bf80,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462c7650);
  }
  return DAT_14687bf80;
}



// FUNCTION 1412fd720 FUN_1412fd720 body=47 status=ok
// SIG undefined FUN_1412fd720(void)

longlong FUN_1412fd720(void)

{
  if (DAT_14687c038 == 0) {
    FUN_141786a30(&DAT_14687c038,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462c8590);
  }
  return DAT_14687c038;
}



// FUNCTION 1412fd750 FUN_1412fd750 body=47 status=ok
// SIG undefined FUN_1412fd750(void)

longlong FUN_1412fd750(void)

{
  if (DAT_14687c120 == 0) {
    FUN_1417866a0(&DAT_14687c120,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462c98f0);
  }
  return DAT_14687c120;
}



// FUNCTION 1412fd780 FUN_1412fd780 body=47 status=ok
// SIG undefined FUN_1412fd780(void)

longlong FUN_1412fd780(void)

{
  if (DAT_14687c140 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687c140,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462c97b0);
  }
  return DAT_14687c140;
}



// FUNCTION 1412fd7b0 FUN_1412fd7b0 body=47 status=ok
// SIG undefined FUN_1412fd7b0(void)

longlong FUN_1412fd7b0(void)

{
  if (DAT_14687bfa0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687bfa0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462c7860);
  }
  return DAT_14687bfa0;
}



// FUNCTION 1412fd7e0 FUN_1412fd7e0 body=47 status=ok
// SIG undefined FUN_1412fd7e0(void)

longlong FUN_1412fd7e0(void)

{
  if (DAT_14687bfb0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687bfb0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462c7940);
  }
  return DAT_14687bfb0;
}



// FUNCTION 1412fd810 FUN_1412fd810 body=47 status=ok
// SIG undefined FUN_1412fd810(void)

longlong FUN_1412fd810(void)

{
  if (DAT_14687bf08 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687bf08,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462c6d70);
  }
  return DAT_14687bf08;
}



// FUNCTION 1412fd840 FUN_1412fd840 body=47 status=ok
// SIG undefined FUN_1412fd840(void)

longlong FUN_1412fd840(void)

{
  if (DAT_14687c000 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687c000,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462c8090);
  }
  return DAT_14687c000;
}



// FUNCTION 1412fd870 FUN_1412fd870 body=47 status=ok
// SIG undefined FUN_1412fd870(void)

longlong FUN_1412fd870(void)

{
  if (DAT_14687bff0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687bff0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462c7f50);
  }
  return DAT_14687bff0;
}



// FUNCTION 1412fd8a0 FUN_1412fd8a0 body=47 status=ok
// SIG undefined FUN_1412fd8a0(void)

longlong FUN_1412fd8a0(void)

{
  if (DAT_14687bfd0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687bfd0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462c7cf0);
  }
  return DAT_14687bfd0;
}



// FUNCTION 1412fd8d0 FUN_1412fd8d0 body=47 status=ok
// SIG undefined FUN_1412fd8d0(void)

longlong FUN_1412fd8d0(void)

{
  if (DAT_14687c0d8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687c0d8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462c9160);
  }
  return DAT_14687c0d8;
}



// FUNCTION 1412fd900 FUN_1412fd900 body=47 status=ok
// SIG undefined FUN_1412fd900(void)

longlong FUN_1412fd900(void)

{
  if (DAT_14687c0e8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687c0e8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462c9230);
  }
  return DAT_14687c0e8;
}



// FUNCTION 1412fd930 FUN_1412fd930 body=47 status=ok
// SIG undefined FUN_1412fd930(void)

longlong FUN_1412fd930(void)

{
  if (DAT_14687c078 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687c078,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462c8a40);
  }
  return DAT_14687c078;
}



// FUNCTION 1412fd960 FUN_1412fd960 body=47 status=ok
// SIG undefined FUN_1412fd960(void)

longlong FUN_1412fd960(void)

{
  if (DAT_14687be20 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687be20,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462c6320);
  }
  return DAT_14687be20;
}



// FUNCTION 1412fd990 FUN_1412fd990 body=128 status=ok
// SIG undefined FUN_1412fd990(void)

void FUN_1412fd990(undefined8 param_1,longlong param_2)

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
  FUN_140a56d10(param_1,local_res10);
  return;
}



// FUNCTION 1412fda10 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_140a57760(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 1412fdad0 FUN_1412fdad0 body=132 status=ok
// SIG undefined FUN_1412fdad0(void)

void FUN_1412fdad0(longlong *param_1,longlong param_2)

{
  undefined8 local_res8;
  
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
  (**(code **)(*param_1 + 0x7a8))(param_1,local_res8);
  return;
}



// FUNCTION 1412fdb60 FUN_1412fdb60 body=128 status=ok
// SIG undefined FUN_1412fdb60(void)

void FUN_1412fdb60(undefined8 param_1,longlong param_2)

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
  FUN_140a5de70(param_1,local_res10);
  return;
}



// FUNCTION 1412fdbe0 execGetOverlappingActors body=239 status=ok
// SIG undefined execGetOverlappingActors(void)

void AActor::execGetOverlappingActors(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 local_res10;
  longlong local_18 [2];
  
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
  local_res10 = 0;
  plVar1 = local_18;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
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
  FUN_140a63c70(param_1,plVar1,local_res10);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1412fdcd0 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_140a67790(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 1412fdd90 FUN_1412fdd90 body=143 status=ok
// SIG undefined FUN_1412fdd90(void)

void FUN_1412fdd90(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_140a67c40(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1412fde60 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_140a6ad50(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 1412fdf20 execTestServerLevelVisibilityChange body=191 status=ok
// SIG undefined execTestServerLevelVisibilityChange(void)

void APlayerController::execTestServerLevelVisibilityChange(long param_1,longlong param_2)

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
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  return;
}



// FUNCTION 1412fdfe0 execTestServerLevelVisibilityChange body=191 status=ok
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
  thunk_FUN_140b0ec80(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 1412fe140 FUN_1412fe140 body=123 status=ok
// SIG undefined FUN_1412fe140(void)

void FUN_1412fe140(undefined8 param_1,longlong param_2)

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
  USynth2DSlider::HandleOnValueChangedY(param_1,local_res10[0]);
  return;
}



// FUNCTION 1412fe1e0 FUN_1412fe1e0 body=128 status=ok
// SIG undefined FUN_1412fe1e0(void)

void FUN_1412fe1e0(undefined8 param_1,longlong param_2)

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
  USpinBox::HandleOnBeginSliderMovement(param_1,local_res10);
  return;
}



// FUNCTION 1412fe260 FUN_1412fe260 body=154 status=ok
// SIG undefined FUN_1412fe260(void)

void FUN_1412fe260(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined2 local_18;
  
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140a6c350(param_1,puVar1);
  return;
}



// FUNCTION 1412fe300 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_140a6c430(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 1412fe3c0 FUN_1412fe3c0 body=128 status=ok
// SIG undefined FUN_1412fe3c0(void)

void FUN_1412fe3c0(undefined8 param_1,longlong param_2)

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
  FUN_140a70530(param_1,local_res10);
  return;
}



// FUNCTION 1412fe460 FUN_1412fe460 body=128 status=ok
// SIG undefined FUN_1412fe460(void)

void FUN_1412fe460(undefined8 param_1,longlong param_2)

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
  FUN_140a70e20(param_1,local_res10);
  return;
}



// FUNCTION 1412fe4e0 FUN_1412fe4e0 body=128 status=ok
// SIG undefined FUN_1412fe4e0(void)

void FUN_1412fe4e0(undefined8 param_1,longlong param_2)

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
  FUN_140a70e40(param_1,local_res10);
  return;
}



// FUNCTION 1412fe5a0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UPawnAction_Sequence::StaticClass(void)

{
  if (DAT_14687c5b0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"DamageBlockData",&DAT_14687c5b0,FUN_140447710,0xc0,0x10000000
                  ,0,L"Engine",&LAB_1413000a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_14687c5b0;
}



// FUNCTION 1412fe650 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UTextureLODSettings::GetPrivateStaticClass(void)

{
  if (DAT_14687c688 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"DebugMenuCategoryConfig",&DAT_14687c688,FUN_140447710,0x38,
                  0x10000004,0,L"Engine",FUN_1413001f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_14687c688;
}



// FUNCTION 1412fe6f0 FUN_1412fe6f0 body=53 status=ok
// SIG undefined FUN_1412fe6f0(void)

void FUN_1412fe6f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &PTR_FUN_1447d5ec0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1412fe730 FUN_1412fe730 body=53 status=ok
// SIG undefined FUN_1412fe730(void)

void FUN_1412fe730(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_1447d5fd8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return;
  }
  return;
}



// FUNCTION 1412fe770 FUN_1412fe770 body=162 status=ok
// SIG undefined FUN_1412fe770(void)

longlong FUN_1412fe770(void)

{
  if (DAT_14687c6c8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"DebugMenuCategoryList",&DAT_14687c6c8,FUN_141301db0,0x2e8,
                  0x10000000,0,L"Engine",FUN_1413002a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141301c80,&LAB_140447700,0);
  }
  return DAT_14687c6c8;
}



// FUNCTION 1412fe820 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x390;
    *puVar1 = &PTR_FUN_1447d60f0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1412fe860 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AInteractiveFoliageActor::GetPrivateStaticClass(void)

{
  if (DAT_14687c748 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"DebugMenuCategoryCharacterSkills",&DAT_14687c748,
                  FUN_141301d80,0x3a0,0x10000000,0,L"Engine",FUN_141300140,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141301c60,&LAB_140447700,0);
  }
  return DAT_14687c748;
}



// FUNCTION 1412fe910 FUN_1412fe910 body=47 status=ok
// SIG undefined FUN_1412fe910(void)

longlong FUN_1412fe910(void)

{
  if (DAT_14687c6c0 == 0) {
    FUN_141786440(&DAT_14687c6c0,&PTR_FUN_1447d1d30);
  }
  return DAT_14687c6c0;
}



// FUNCTION 1412fe940 FUN_1412fe940 body=47 status=ok
// SIG undefined FUN_1412fe940(void)

longlong FUN_1412fe940(void)

{
  if (DAT_14687c690 == 0) {
    FUN_141786a30(&DAT_14687c690,&PTR_FUN_1462cb590);
  }
  return DAT_14687c690;
}



// FUNCTION 1412fe970 FUN_1412fe970 body=47 status=ok
// SIG undefined FUN_1412fe970(void)

longlong FUN_1412fe970(void)

{
  if (DAT_14687c698 == 0) {
    FUN_141786a30(&DAT_14687c698,&PTR_FUN_1462cb610);
  }
  return DAT_14687c698;
}



// FUNCTION 1412fe9a0 FUN_1412fe9a0 body=47 status=ok
// SIG undefined FUN_1412fe9a0(void)

longlong FUN_1412fe9a0(void)

{
  if (DAT_14687c6a0 == 0) {
    FUN_141786a30(&DAT_14687c6a0,&PTR_FUN_1462cb740);
  }
  return DAT_14687c6a0;
}



// FUNCTION 1412fe9d0 FUN_1412fe9d0 body=47 status=ok
// SIG undefined FUN_1412fe9d0(void)

longlong FUN_1412fe9d0(void)

{
  if (DAT_14687c6a8 == 0) {
    FUN_141786a30(&DAT_14687c6a8,&PTR_FUN_1462cb800);
  }
  return DAT_14687c6a8;
}



// FUNCTION 1412fea00 FUN_1412fea00 body=47 status=ok
// SIG undefined FUN_1412fea00(void)

longlong FUN_1412fea00(void)

{
  if (DAT_14687c6b0 == 0) {
    FUN_141786a30(&DAT_14687c6b0,&PTR_FUN_1462cb8c0);
  }
  return DAT_14687c6b0;
}



// FUNCTION 1412fea30 FUN_1412fea30 body=47 status=ok
// SIG undefined FUN_1412fea30(void)

longlong FUN_1412fea30(void)

{
  if (DAT_14687c6b8 == 0) {
    FUN_141786a30(&DAT_14687c6b8,&PTR_FUN_1462cb900);
  }
  return DAT_14687c6b8;
}



// FUNCTION 1412fea60 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FPostMissionPilotRecord_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x380;
    *puVar1 = &PTR_FUN_1447d6208;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1412feab0 FUN_1412feab0 body=53 status=ok
// SIG undefined FUN_1412feab0(void)

void FUN_1412feab0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &PTR_FUN_1447d8270;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1412feaf0 FUN_1412feaf0 body=53 status=ok
// SIG undefined FUN_1412feaf0(void)

void FUN_1412feaf0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xe0;
    *puVar1 = &PTR_FUN_1447d6320;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1412feb40 FUN_1412feb40 body=162 status=ok
// SIG undefined FUN_1412feb40(void)

longlong FUN_1412feb40(void)

{
  if (DAT_14687c650 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"DeathCircleElapsedTimeValueResolver",&DAT_14687c650,
                  FUN_140447710,0x28,0x10000000,0,L"Engine",FUN_141300110,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDungeonEventListener::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14687c650;
}



// FUNCTION 1412fec00 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ARemnantMiniMapDisplayActor::GetPrivateStaticClass(void)

{
  if (DAT_14687c668 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"DeathCirclePoint",&DAT_14687c668,FUN_141301d20,0x470,
                  0x10000000,0,L"Engine",&LAB_1412ffff0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_14687c668;
}



// FUNCTION 1412fecc0 FUN_1412fecc0 body=47 status=ok
// SIG undefined FUN_1412fecc0(void)

longlong FUN_1412fecc0(void)

{
  if (DAT_14687c740 == 0) {
    FUN_141786440(&DAT_14687c740,&PTR_GetPrivateStaticClass_1447d2d00);
  }
  return DAT_14687c740;
}



// FUNCTION 1412fecf0 FUN_1412fecf0 body=47 status=ok
// SIG undefined FUN_1412fecf0(void)

longlong FUN_1412fecf0(void)

{
  if (DAT_14687c6e0 == 0) {
    FUN_141786a30(&DAT_14687c6e0,&PTR_FUN_1462cbc70);
  }
  return DAT_14687c6e0;
}



// FUNCTION 1412fed20 FUN_1412fed20 body=47 status=ok
// SIG undefined FUN_1412fed20(void)

longlong FUN_1412fed20(void)

{
  if (DAT_14687c6e8 == 0) {
    FUN_141786a30(&DAT_14687c6e8,&PTR_FUN_1462cbcf0);
  }
  return DAT_14687c6e8;
}



// FUNCTION 1412fed50 FUN_1412fed50 body=47 status=ok
// SIG undefined FUN_1412fed50(void)

longlong FUN_1412fed50(void)

{
  if (DAT_14687c6f0 == 0) {
    FUN_141786a30(&DAT_14687c6f0,&PTR_FUN_1462cbd70);
  }
  return DAT_14687c6f0;
}



// FUNCTION 1412fed80 FUN_1412fed80 body=47 status=ok
// SIG undefined FUN_1412fed80(void)

longlong FUN_1412fed80(void)

{
  if (DAT_14687c6f8 == 0) {
    FUN_141786a30(&DAT_14687c6f8,&PTR_FUN_1462cbdb0);
  }
  return DAT_14687c6f8;
}



// FUNCTION 1412fedb0 FUN_1412fedb0 body=47 status=ok
// SIG undefined FUN_1412fedb0(void)

longlong FUN_1412fedb0(void)

{
  if (DAT_14687c700 == 0) {
    FUN_141786a30(&DAT_14687c700,&PTR_FUN_1462cbe80);
  }
  return DAT_14687c700;
}



// FUNCTION 1412fede0 FUN_1412fede0 body=47 status=ok
// SIG undefined FUN_1412fede0(void)

longlong FUN_1412fede0(void)

{
  if (DAT_14687c708 == 0) {
    FUN_141786a30(&DAT_14687c708,&PTR_FUN_1462cbf00);
  }
  return DAT_14687c708;
}



// FUNCTION 1412fee10 FUN_1412fee10 body=47 status=ok
// SIG undefined FUN_1412fee10(void)

longlong FUN_1412fee10(void)

{
  if (DAT_14687c710 == 0) {
    FUN_141786a30(&DAT_14687c710,&PTR_FUN_1462cbf80);
  }
  return DAT_14687c710;
}



// FUNCTION 1412fee40 FUN_1412fee40 body=47 status=ok
// SIG undefined FUN_1412fee40(void)

longlong FUN_1412fee40(void)

{
  if (DAT_14687c718 == 0) {
    FUN_141786a30(&DAT_14687c718,&PTR_FUN_1462cc000);
  }
  return DAT_14687c718;
}



// FUNCTION 1412fee70 FUN_1412fee70 body=47 status=ok
// SIG undefined FUN_1412fee70(void)

longlong FUN_1412fee70(void)

{
  if (DAT_14687c720 == 0) {
    FUN_141786a30(&DAT_14687c720,&PTR_FUN_1462cc0b0);
  }
  return DAT_14687c720;
}



// FUNCTION 1412feea0 FUN_1412feea0 body=47 status=ok
// SIG undefined FUN_1412feea0(void)

longlong FUN_1412feea0(void)

{
  if (DAT_14687c728 == 0) {
    FUN_141786a30(&DAT_14687c728,&PTR_FUN_1462cc130);
  }
  return DAT_14687c728;
}



// FUNCTION 1412feed0 FUN_1412feed0 body=47 status=ok
// SIG undefined FUN_1412feed0(void)

longlong FUN_1412feed0(void)

{
  if (DAT_14687c730 == 0) {
    FUN_141786a30(&DAT_14687c730,&PTR_FUN_1462cc170);
  }
  return DAT_14687c730;
}



// FUNCTION 1412fef00 FUN_1412fef00 body=47 status=ok
// SIG undefined FUN_1412fef00(void)

longlong FUN_1412fef00(void)

{
  if (DAT_14687c738 == 0) {
    FUN_141786a30(&DAT_14687c738,&PTR_FUN_1462cc1b0);
  }
  return DAT_14687c738;
}



// FUNCTION 1412fef30 FUN_1412fef30 body=53 status=ok
// SIG undefined FUN_1412fef30(void)

void FUN_1412fef30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_1447d8a88;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1412fef70 FUN_1412fef70 body=47 status=ok
// SIG undefined FUN_1412fef70(void)

longlong FUN_1412fef70(void)

{
  if (DAT_14687c660 == 0) {
    FUN_141786440(&DAT_14687c660,&PTR_GetPrivateStaticClass_1447d22e0);
  }
  return DAT_14687c660;
}



// FUNCTION 1412fefa0 FUN_1412fefa0 body=47 status=ok
// SIG undefined FUN_1412fefa0(void)

longlong FUN_1412fefa0(void)

{
  if (DAT_14687c658 == 0) {
    FUN_141786a30(&DAT_14687c658,&PTR_FUN_1462cb190);
  }
  return DAT_14687c658;
}



// FUNCTION 1412feff0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGStartScreenUW::GetPrivateStaticClass(void)

{
  if (DAT_14687c758 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"DebugMenuCategoryEssentials",&DAT_14687c758,FUN_140447710,
                  0x300,0x10000000,0,L"Engine",FUN_141300230,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141301c60,&LAB_140447700,0);
  }
  return DAT_14687c758;
}



// FUNCTION 1412ff0a0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMovieSceneSoundSetSection::GetPrivateStaticClass(void)

{
  if (DAT_14687c550 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CustomizationInventoryBalanceData",&DAT_14687c550,
                  FUN_140447710,0x128,0x10000000,0,L"Engine",&LAB_141300020,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14301f840,&LAB_140447700,0);
  }
  return DAT_14687c550;
}



// FUNCTION 1412ff170 FUN_1412ff170 body=151 status=ok
// SIG undefined FUN_1412ff170(void)

longlong FUN_1412ff170(void)

{
  if (DAT_14687c778 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GbxReportTags",&DAT_14687c778,FUN_140447710,0x38,0x10000004,0
                  ,L"GbxPerfAnalytics",FUN_141300530,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_14687c778;
}



// FUNCTION 1412ff210 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UProgressBar::GetPrivateStaticClass(void)

{
  if (DAT_14687c788 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"DebugMenuCategoryTelemetry",&DAT_14687c788,FUN_140447710,
                  0x328,0x10000000,0,L"Engine",FUN_141300300,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141301c60,&LAB_140447700,0);
  }
  return DAT_14687c788;
}



// FUNCTION 1412ff2c0 FUN_1412ff2c0 body=53 status=ok
// SIG undefined FUN_1412ff2c0(void)

void FUN_1412ff2c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_1447d9c10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1412ff310 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UTextBlock::GetPrivateStaticClass(void)

{
  if (DAT_14687c5d0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"DamageIndicator",&DAT_14687c5d0,FUN_141301d50,0x218,
                  0x10000000,0,L"Engine",FUN_1413000c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141301cb0,&LAB_140447700,0);
  }
  return DAT_14687c5d0;
}



// FUNCTION 1412ff3d0 FUN_1412ff3d0 body=47 status=ok
// SIG undefined FUN_1412ff3d0(void)

longlong FUN_1412ff3d0(void)

{
  if (DAT_14687c5c8 == 0) {
    FUN_141786440(&DAT_14687c5c8,&PTR_GetPrivateStaticClass_1447d39e0);
  }
  return DAT_14687c5c8;
}



// FUNCTION 1412ff400 FUN_1412ff400 body=47 status=ok
// SIG undefined FUN_1412ff400(void)

longlong FUN_1412ff400(void)

{
  if (DAT_14687c5b8 == 0) {
    FUN_141786a30(&DAT_14687c5b8,&PTR_FUN_1462ca070);
  }
  return DAT_14687c5b8;
}



// FUNCTION 1412ff430 FUN_1412ff430 body=47 status=ok
// SIG undefined FUN_1412ff430(void)

longlong FUN_1412ff430(void)

{
  if (DAT_14687c5c0 == 0) {
    FUN_141786a30(&DAT_14687c5c0,&PTR_FUN_1462ca0f0);
  }
  return DAT_14687c5c0;
}



// FUNCTION 1412ff460 FUN_1412ff460 body=162 status=ok
// SIG undefined FUN_1412ff460(void)

longlong FUN_1412ff460(void)

{
  if (DAT_14687c7a8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"DefaultCrosshairComponentData",&DAT_14687c7a8,FUN_140447710,
                  0x50,0x10000000,0,L"Engine",FUN_1412fc650,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_14687c7a8;
}



// FUNCTION 1412ff520 FUN_1412ff520 body=53 status=ok
// SIG undefined FUN_1412ff520(void)

void FUN_1412ff520(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_1447d9d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1412ff560 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGStartScreenUW::GetPrivateStaticClass(void)

{
  if (DAT_14687c560 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CustomizationInventoryData",&DAT_14687c560,FUN_140447710,
                  0x300,0x10000000,0,L"Engine",&LAB_141300040,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141301ca0,&LAB_140447700,0);
  }
  return DAT_14687c560;
}



// FUNCTION 1412ff630 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UProgressBar::GetPrivateStaticClass(void)

{
  if (DAT_14687c7d0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"DemoMenu",&DAT_14687c7d0,StaticRegisterNativesUProgressBar,
                  0x328,0x10000000,0,L"Game",FUN_141300370,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UGPasswordResetPage::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14687c7d0;
}



// FUNCTION 1412ff6e0 FUN_1412ff6e0 body=162 status=ok
// SIG undefined FUN_1412ff6e0(void)

longlong FUN_1412ff6e0(void)

{
  if (DAT_14687c570 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CustomizationList",&DAT_14687c570,FUN_140447710,0x40,
                  0x10000000,0,L"Engine",FUN_141300060,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_14687c570;
}



// FUNCTION 1412ff790 FUN_1412ff790 body=47 status=ok
// SIG undefined FUN_1412ff790(void)

longlong FUN_1412ff790(void)

{
  if (DAT_14687c7c8 == 0) {
    FUN_141786440(&DAT_14687c7c8,&PTR_GetPrivateStaticClass_1447d4030);
  }
  return DAT_14687c7c8;
}



// FUNCTION 1412ff7c0 FUN_1412ff7c0 body=47 status=ok
// SIG undefined FUN_1412ff7c0(void)

longlong FUN_1412ff7c0(void)

{
  if (DAT_14687c7b0 == 0) {
    FUN_141786a30(&DAT_14687c7b0,&PTR_FUN_1462ccb70);
  }
  return DAT_14687c7b0;
}



// FUNCTION 1412ff7f0 FUN_1412ff7f0 body=47 status=ok
// SIG undefined FUN_1412ff7f0(void)

longlong FUN_1412ff7f0(void)

{
  if (DAT_14687c7b8 == 0) {
    FUN_141786a30(&DAT_14687c7b8,&PTR_FUN_1462ccc30);
  }
  return DAT_14687c7b8;
}



// FUNCTION 1412ff820 FUN_1412ff820 body=47 status=ok
// SIG undefined FUN_1412ff820(void)

longlong FUN_1412ff820(void)

{
  if (DAT_14687c7c0 == 0) {
    FUN_141786a30(&DAT_14687c7c0,&PTR_FUN_1462cccf0);
  }
  return DAT_14687c7c0;
}



// FUNCTION 1412ff860 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAESHelper::GetPrivateStaticClass(void)

{
  if (DAT_14687c540 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CustomizationInventoryAssetSetup",&DAT_14687c540,
                  FUN_140447710,0x48,0x10000000,0,L"Engine",&LAB_141300000,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_14687c540;
}



// FUNCTION 1412ff910 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAESHelper::GetPrivateStaticClass(void)

{
  if (DAT_14687c7e0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"DialogSelectorImplementation_CheckAttitude",&DAT_14687c7e0,
                  FUN_140447710,0x48,0x10000000,0,L"Engine",FUN_1413003f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_140600e90,&LAB_140447700,0);
  }
  return DAT_14687c7e0;
}



// FUNCTION 1412ff9d0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGameplayTagAssetInterface::GetPrivateStaticClass(void)

{
  if (DAT_14687c580 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CustomizationProviderInterface",&DAT_14687c580,FUN_140447710,
                  0x28,0x10004001,0,L"Engine",FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_14687c580;
}



// FUNCTION 1412ffaa0 FUN_1412ffaa0 body=162 status=ok
// SIG undefined FUN_1412ffaa0(void)

longlong FUN_1412ffaa0(void)

{
  if (DAT_14687c7f0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"DialogSelectorImplementation_CheckCombatState",&DAT_14687c7f0
                  ,FUN_140447710,0x40,0x10000000,0,L"Engine",FUN_141300430,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_140600e90,&LAB_140447700,0);
  }
  return DAT_14687c7f0;
}



// FUNCTION 1412ffb70 FUN_1412ffb70 body=162 status=ok
// SIG undefined FUN_1412ffb70(void)

longlong FUN_1412ffb70(void)

{
  if (DAT_14687c800 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"DialogSelectorImplementation_CheckLevel",&DAT_14687c800,
                  FUN_140447710,0x40,0x10000000,0,L"Engine",FUN_141300470,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_140600e90,&LAB_140447700,0);
  }
  return DAT_14687c800;
}



// FUNCTION 1412ffc30 FUN_1412ffc30 body=162 status=ok
// SIG undefined FUN_1412ffc30(void)

longlong FUN_1412ffc30(void)

{
  if (DAT_14687c810 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"DialogSelectorImplementation_CheckMissionState",
                  &DAT_14687c810,FUN_140447710,0x40,0x10000000,0,L"Engine",FUN_1413004b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_140600e90,&LAB_140447700,0);
  }
  return DAT_14687c810;
}



// FUNCTION 1412ffcf0 FUN_1412ffcf0 body=162 status=ok
// SIG undefined FUN_1412ffcf0(void)

longlong FUN_1412ffcf0(void)

{
  if (DAT_14687c820 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"DialogSelectorImplementation_CheckWeaponElement",
                  &DAT_14687c820,FUN_140447710,0x40,0x10000000,0,L"Engine",FUN_1413004f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_140600e90,&LAB_140447700,0);
  }
  return DAT_14687c820;
}



// FUNCTION 1412ffdb0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AXUsableActorEncounter::GetPrivateStaticClass(void)

{
  if (DAT_14687c5a0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"DamageableHISM",&DAT_14687c5a0,FUN_141301cf0,0x5a0,0x10000001
                  ,0,L"Engine",&LAB_1412fffe0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_1412d9cf0,&LAB_140447700,0);
  }
  return DAT_14687c5a0;
}



// FUNCTION 1412ffe60 FUN_1412ffe60 body=162 status=ok
// SIG undefined FUN_1412ffe60(void)

longlong FUN_1412ffe60(void)

{
  if (DAT_14687c5e8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"DamageLinkNode",&DAT_14687c5e8,FUN_141301cc0,0x6b8,0x10000000
                  ,0,L"Engine",&LAB_1412fffd0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_1412d9cf0,&LAB_140447700,0);
  }
  return DAT_14687c5e8;
}



// FUNCTION 1412fff10 FUN_1412fff10 body=47 status=ok
// SIG undefined FUN_1412fff10(void)

longlong FUN_1412fff10(void)

{
  if (DAT_14687c5e0 == 0) {
    FUN_141786440(&DAT_14687c5e0,&PTR_FUN_1447d5130);
  }
  return DAT_14687c5e0;
}



// FUNCTION 1412fff40 FUN_1412fff40 body=47 status=ok
// SIG undefined FUN_1412fff40(void)

longlong FUN_1412fff40(void)

{
  if (DAT_14687c5d8 == 0) {
    FUN_141786a30(&DAT_14687c5d8,&PTR_FUN_1462ca280);
  }
  return DAT_14687c5d8;
}



// FUNCTION 1412fff70 FUN_1412fff70 body=47 status=ok
// SIG undefined FUN_1412fff70(void)

longlong FUN_1412fff70(void)

{
  if (DAT_14687c598 == 0) {
    FUN_141786440(&DAT_14687c598,&PTR_GetPrivateStaticClass_1447d5270);
  }
  return DAT_14687c598;
}



// FUNCTION 1412fffa0 FUN_1412fffa0 body=47 status=ok
// SIG undefined FUN_1412fffa0(void)

longlong FUN_1412fffa0(void)

{
  if (DAT_14687c590 == 0) {
    FUN_141786a30(&DAT_14687c590,&PTR_FUN_1462c9da0);
  }
  return DAT_14687c590;
}



// FUNCTION 141300060 FUN_141300060 body=51 status=ok
// SIG undefined FUN_141300060(void)

void FUN_141300060(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__1447d5710;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  return;
}



// FUNCTION 1413000c0 FUN_1413000c0 body=75 status=ok
// SIG undefined FUN_1413000c0(void)

void FUN_1413000c0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1420d5de0(puVar1,param_1);
    *(undefined4 *)(puVar1 + 0x41) = 0x40a00000;
    *puVar1 = &PTR__scalar_deleting_destructor__1447d59c8;
    puVar1[0x20] = &PTR_LAB_1447d5e28;
    *(undefined4 *)((longlong)puVar1 + 0x20c) = 0x41200000;
  }
  return;
}



// FUNCTION 141300110 FUN_141300110 body=41 status=ok
// SIG undefined FUN_141300110(void)

void FUN_141300110(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142c8d050(puVar1,param_1);
    *puVar1 = &PTR_FUN_1447d6438;
  }
  return;
}



// FUNCTION 141300140 FUN_141300140 body=168 status=ok
// SIG undefined FUN_141300140(void)

void FUN_141300140(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141300770(puVar1,param_1);
    *(undefined1 *)((longlong)puVar1 + 0x2ed) = 1;
    *(undefined4 *)(puVar1 + 0x5e) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x2f4) = 0;
    *puVar1 = &PTR_FUN_1447d83f0;
    puVar1[0x20] = &PTR_LAB_1447d8890;
    puVar1[0x41] = &PTR_LAB_1447d88b8;
    puVar1[0x57] = &PTR_LAB_1447d8908;
    puVar1[0x66] = 0;
    puVar1[0x67] = 0;
    puVar1[0x6d] = 0;
    puVar1[0x6e] = 0;
    puVar1[0x6f] = 0;
    puVar1[0x70] = 0;
    puVar1[0x72] = 0;
    puVar1[0x73] = 0;
  }
  return;
}



// FUNCTION 1413001f0 FUN_1413001f0 body=51 status=ok
// SIG undefined FUN_1413001f0(void)

void FUN_1413001f0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_1447d7ae8;
    puVar1[5] = 0;
    puVar1[6] = 0;
  }
  return;
}



// FUNCTION 141300230 FUN_141300230 body=110 status=ok
// SIG undefined FUN_141300230(void)

void FUN_141300230(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141300770(puVar1,param_1);
    *(undefined1 *)((longlong)puVar1 + 0x2ed) = 1;
    *(undefined4 *)(puVar1 + 0x5e) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x2f4) = 0;
    *puVar1 = &PTR_FUN_1447d8c40;
    puVar1[0x20] = &PTR_LAB_1447d90e0;
    puVar1[0x41] = &PTR_LAB_1447d9108;
    puVar1[0x57] = &PTR_LAB_1447d9158;
  }
  return;
}



// FUNCTION 1413002a0 FUN_1413002a0 body=85 status=ok
// SIG undefined FUN_1413002a0(void)

void FUN_1413002a0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141300770(puVar1,param_1);
    *puVar1 = &PTR_FUN_1447d7d60;
    puVar1[0x20] = &PTR_LAB_1447d81f8;
    puVar1[0x41] = &PTR_LAB_1447d8220;
    puVar1[0x5b] = 0;
    puVar1[0x5c] = 0;
  }
  return;
}



// FUNCTION 141300300 FUN_141300300 body=110 status=ok
// SIG undefined FUN_141300300(void)

void FUN_141300300(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141300770(puVar1,param_1);
    *(undefined1 *)((longlong)puVar1 + 0x2ed) = 1;
    *(undefined4 *)(puVar1 + 0x5e) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x2f4) = 0;
    *puVar1 = &PTR_FUN_1447d9578;
    puVar1[0x20] = &PTR_LAB_1447d9a18;
    puVar1[0x41] = &PTR_LAB_1447d9a40;
    puVar1[0x57] = &PTR_LAB_1447d9a90;
  }
  return;
}


