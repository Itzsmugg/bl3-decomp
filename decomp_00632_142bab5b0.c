// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142bab5b0 FUN_142bab5b0 body=47 status=ok
// SIG undefined FUN_142bab5b0(void)

longlong FUN_142bab5b0(void)

{
  if (DAT_146b2c290 == 0) {
    FUN_141786a30(&DAT_146b2c290,&PTR_Z_Construct_UPackage__Script_NavigationSystem_14668d410);
  }
  return DAT_146b2c290;
}



// FUNCTION 142bab5e0 FUN_142bab5e0 body=47 status=ok
// SIG undefined FUN_142bab5e0(void)

longlong FUN_142bab5e0(void)

{
  if (DAT_146b2c1f8 == 0) {
    FUN_141786a30(&DAT_146b2c1f8,&PTR_Z_Construct_UPackage__Script_NavigationSystem_14668c540);
  }
  return DAT_146b2c1f8;
}



// FUNCTION 142bab610 FUN_142bab610 body=47 status=ok
// SIG undefined FUN_142bab610(void)

longlong FUN_142bab610(void)

{
  if (DAT_146b2c310 == 0) {
    FUN_1417866a0(&DAT_146b2c310,&PTR_Z_Construct_UPackage__Script_NavigationSystem_14668f920);
  }
  return DAT_146b2c310;
}



// FUNCTION 142bab640 FUN_142bab640 body=47 status=ok
// SIG undefined FUN_142bab640(void)

longlong FUN_142bab640(void)

{
  if (DAT_146b2c170 == 0) {
    FUN_1417866a0(&DAT_146b2c170,&PTR_Z_Construct_UPackage__Script_NavigationSystem_14668f8d0);
  }
  return DAT_146b2c170;
}



// FUNCTION 142bab670 FUN_142bab670 body=47 status=ok
// SIG undefined FUN_142bab670(void)

longlong FUN_142bab670(void)

{
  if (DAT_146b2c148 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b2c148,&PTR_Z_Construct_UPackage__Script_NavigationSystem_14668ba50);
  }
  return DAT_146b2c148;
}



// FUNCTION 142bab6a0 FUN_142bab6a0 body=47 status=ok
// SIG undefined FUN_142bab6a0(void)

longlong FUN_142bab6a0(void)

{
  if (DAT_146b2c158 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b2c158,&PTR_Z_Construct_UPackage__Script_NavigationSystem_14668bb50);
  }
  return DAT_146b2c158;
}



// FUNCTION 142bab6d0 FUN_142bab6d0 body=47 status=ok
// SIG undefined FUN_142bab6d0(void)

longlong FUN_142bab6d0(void)

{
  if (DAT_146b2c1b0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b2c1b0,&PTR_Z_Construct_UPackage__Script_NavigationSystem_14668c2a0);
  }
  return DAT_146b2c1b0;
}



// FUNCTION 142bab700 FUN_142bab700 body=47 status=ok
// SIG undefined FUN_142bab700(void)

longlong FUN_142bab700(void)

{
  if (DAT_146b2c1a0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b2c1a0,&PTR_Z_Construct_UPackage__Script_NavigationSystem_14668c250);
  }
  return DAT_146b2c1a0;
}



// FUNCTION 142bab730 FUN_142bab730 body=47 status=ok
// SIG undefined FUN_142bab730(void)

longlong FUN_142bab730(void)

{
  if (DAT_146b2c278 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b2c278,&PTR_Z_Construct_UPackage__Script_NavigationSystem_14668d250);
  }
  return DAT_146b2c278;
}



// FUNCTION 142bab760 FUN_142bab760 body=47 status=ok
// SIG undefined FUN_142bab760(void)

longlong FUN_142bab760(void)

{
  if (DAT_146b2c268 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b2c268,&PTR_Z_Construct_UPackage__Script_NavigationSystem_14668d050);
  }
  return DAT_146b2c268;
}



// FUNCTION 142bab790 FUN_142bab790 body=47 status=ok
// SIG undefined FUN_142bab790(void)

longlong FUN_142bab790(void)

{
  if (DAT_146b2c180 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b2c180,&PTR_Z_Construct_UPackage__Script_NavigationSystem_14668be20);
  }
  return DAT_146b2c180;
}



// FUNCTION 142bab7c0 execEnableDebugDrawing body=213 status=ok
// SIG undefined execEnableDebugDrawing(void)

void UNavigationPath::execEnableDebugDrawing(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  int local_res10 [2];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar1 = local_res10[0] != 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_18 = local_28;
  uStack_14 = uStack_24;
  uStack_10 = uStack_20;
  uStack_c = uStack_1c;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142b8bed0(param_1,bVar1,&local_18);
  return;
}



// FUNCTION 142bab8a0 execEnableRecalculationOnInvalidation body=127 status=ok
// SIG undefined execEnableRecalculationOnInvalidation(void)

void UNavigationPath::execEnableRecalculationOnInvalidation(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  
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
  local_res20[0] = local_res10[0];
  EnableRecalculationOnInvalidation(param_1,local_res20);
  return;
}



// FUNCTION 142bab920 execGetDebugString body=122 status=ok
// SIG undefined execGetDebugString(void)

void UNavigationPath::execGetDebugString(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong local_18 [2];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  plVar1 = (longlong *)GetDebugString(param_1,local_18);
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



// FUNCTION 142bab9a0 FUN_142bab9a0 body=128 status=ok
// SIG undefined FUN_142bab9a0(void)

void FUN_142bab9a0(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  uVar1 = FNavigationSystem::GetCurrent<UNavigationSystemV1>(local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142baba20 execGetPathCost body=45 status=ok
// SIG undefined execGetPathCost(void)

void UNavigationPath::execGetPathCost(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetPathCost();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142baba50 execGetPathLength body=45 status=ok
// SIG undefined execGetPathLength(void)

void UNavigationPath::execGetPathLength(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetPathLength();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142baba80 FUN_142baba80 body=458 status=ok
// SIG undefined FUN_142baba80(void)

void FUN_142baba80(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_48;
  undefined1 local_40 [16];
  undefined1 local_30 [24];
  
  local_48 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_40);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  local_res10[0] = 0;
  puVar2 = local_40;
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
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
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
  puVar1 = (undefined8 *)
           FUN_142b90420(local_30,local_48,puVar2,local_res10[0],local_res20,local_res18);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142babc50 FUN_142babc50 body=458 status=ok
// SIG undefined FUN_142babc50(void)

void FUN_142babc50(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_48;
  undefined1 local_40 [16];
  undefined1 local_30 [24];
  
  local_48 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_40);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  local_res10[0] = 0;
  puVar2 = local_40;
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
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
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
  puVar1 = (undefined8 *)
           FUN_142b90640(local_30,local_48,puVar2,local_res10[0],local_res20,local_res18);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142babe20 execIsPartial body=43 status=ok
// SIG undefined execIsPartial(void)

void UNavigationPath::execIsPartial(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = IsPartial();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142babe50 execIsValid body=43 status=ok
// SIG undefined execIsValid(void)

void UNavigationPath::execIsValid(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = IsValid();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142babe80 FUN_142babe80 body=511 status=ok
// SIG undefined FUN_142babe80(void)

void FUN_142babe80(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_58;
  undefined1 local_50 [16];
  undefined1 local_40 [24];
  
  local_58 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_50);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar3 = local_50;
  if (puVar2 != (undefined1 *)0x0) {
    puVar3 = puVar2;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_40);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  local_res10[0] = 0;
  puVar2 = local_40;
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
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
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
  uVar1 = FUN_142b91280(local_58,puVar3,puVar2,local_res10[0],local_res20,local_res18);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142bac080 FUN_142bac080 body=511 status=ok
// SIG undefined FUN_142bac080(void)

void FUN_142bac080(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_58;
  undefined1 local_50 [16];
  undefined1 local_40 [24];
  
  local_58 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_50);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar3 = local_50;
  if (puVar2 != (undefined1 *)0x0) {
    puVar3 = puVar2;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_40);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  local_res10[0] = 0;
  puVar2 = local_40;
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
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
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
  uVar1 = FUN_142b913d0(local_58,puVar3,puVar2,local_res10[0],local_res20,local_res18);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142bac280 execK2_ProjectPointToNavigation body=477 status=ok
// SIG undefined execK2_ProjectPointToNavigation(void)

void UNavigationSystemV1::execK2_ProjectPointToNavigation
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined4 local_30;
  
  local_res20 = 0;
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
    FUN_14179aca0(param_2,local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar3 = local_58;
  if (puVar2 != (undefined1 *)0x0) {
    puVar3 = puVar2;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  local_res18 = 0;
  puVar2 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
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
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_38 = local_68;
  local_30 = local_60;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = K2_ProjectPointToNavigation(local_res20,puVar3,puVar2,local_res18,local_res10,&local_38);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142bac460 FUN_142bac460 body=128 status=ok
// SIG undefined FUN_142bac460(void)

void FUN_142bac460(undefined8 param_1,longlong param_2)

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
  FUN_142b91f50(param_1,local_res10);
  return;
}



// FUNCTION 142bac4e0 execProjectPointToNavigation body=462 status=ok
// SIG undefined execProjectPointToNavigation(void)

void UNavigationSystemV1::execProjectPointToNavigation
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_28 [16];
  
  local_res20 = 0;
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
  local_res18 = 0;
  puVar2 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
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
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_38 = local_58;
  local_30 = local_50;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)
           ProjectPointToNavigation(local_28,local_res20,puVar2,local_res18,local_res10,&local_38);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142bac6b0 execSimpleMoveToLocation body=185 status=ok
// SIG undefined execSimpleMoveToLocation(void)

void UNavigationSystemV1::execSimpleMoveToLocation(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [3];
  undefined1 local_18 [16];
  
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
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  AK::MemoryMgr::StartProfileThreadUsage((long)local_res10[0]);
  return;
}



// FUNCTION 142bac770 FUN_142bac770 body=162 status=ok
// SIG undefined FUN_142bac770(void)

longlong FUN_142bac770(void)

{
  if (DAT_146b2c498 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"RecastNavMesh",&DAT_146b2c498,FUN_140447710,0x6a8,
                  0x10000006,0,L"Engine",&LAB_142bad2a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  thunk_FUN_142baab40,&LAB_140447700,0);
  }
  return DAT_146b2c498;
}



// FUNCTION 142bac820 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UNavLinkCustomInterface::GetPrivateStaticClass(void)

{
  if (DAT_146b2c3b8 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"NavLinkCustomInterface",&DAT_146b2c3b8,FUN_140447710
                  ,0x28,0x10004001,0,L"Engine",&LAB_140492380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b2c3b8;
}



// FUNCTION 142bac8e0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UNavLinkHostInterface::GetPrivateStaticClass(void)

{
  if (DAT_146b2c3c8 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"NavLinkHostInterface",&DAT_146b2c3c8,FUN_140447710,
                  0x28,0x10004001,0,L"Engine",&LAB_140492380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b2c3c8;
}



// FUNCTION 142bac9a0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGImpulseWindProjectile::GetPrivateStaticClass(void)

{
  if (DAT_146b2c3d8 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"NavLinkRenderingComponent",&DAT_146b2c3d8,
                  FUN_140447710,0x6f0,0x10000000,0,L"Engine",&LAB_142bad2c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14079feb0,&LAB_140447700,0);
  }
  return DAT_146b2c3d8;
}



// FUNCTION 142baca60 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UNavLinkTrivial::StaticClass(void)

{
  if (DAT_146b2c3e8 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"NavLinkTrivial",&DAT_146b2c3e8,FUN_140447710,0x50,
                  0x10000000,0,L"Engine",&LAB_142bad2e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UNavLinkDefinition::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b2c3e8;
}



// FUNCTION 142bacb20 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong APlayerStateGunfire::GetPrivateStaticClass(void)

{
  if (DAT_146b2c3f8 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"NavMeshBoundsVolume",&DAT_146b2c3f8,FUN_140447710,
                  0x498,0x10000000,0,L"Engine",&LAB_142bad260,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_1407fbfa0,&LAB_140447700,0);
  }
  return DAT_146b2c3f8;
}



// FUNCTION 142bacbe0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UInputKeySelector::GetPrivateStaticClass(void)

{
  if (DAT_146b2c408 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"NavMeshRenderingComponent",&DAT_146b2c408,
                  FUN_140447710,0x700,0x10000000,0,L"Engine",&LAB_142bad300,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14079feb0,&LAB_140447700,0);
  }
  return DAT_146b2c408;
}



// FUNCTION 142bacca0 FUN_142bacca0 body=162 status=ok
// SIG undefined FUN_142bacca0(void)

longlong FUN_142bacca0(void)

{
  if (DAT_146b2c420 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"NavModifierComponent",&DAT_146b2c420,FUN_142bad780,
                  0x1d0,0x10000006,0,L"Engine",&LAB_142bad320,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UThrobber::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b2c420;
}



// FUNCTION 142bacd60 FUN_142bacd60 body=47 status=ok
// SIG undefined FUN_142bacd60(void)

longlong FUN_142bacd60(void)

{
  if (DAT_146b2c418 == 0) {
    FUN_141786440(&DAT_146b2c418,&PTR_FUN_1457e3390);
  }
  return DAT_146b2c418;
}



// FUNCTION 142bacd90 FUN_142bacd90 body=47 status=ok
// SIG undefined FUN_142bacd90(void)

longlong FUN_142bacd90(void)

{
  if (DAT_146b2c458 == 0) {
    FUN_141786440(&DAT_146b2c458,&PTR_GetPrivateStaticClass_1457e3880);
  }
  return DAT_146b2c458;
}



// FUNCTION 142bacdc0 FUN_142bacdc0 body=47 status=ok
// SIG undefined FUN_142bacdc0(void)

longlong FUN_142bacdc0(void)

{
  if (DAT_146b2c410 == 0) {
    FUN_141786a30(&DAT_146b2c410,&PTR_FUN_14668fb00);
  }
  return DAT_146b2c410;
}



// FUNCTION 142bace00 FUN_142bace00 body=162 status=ok
// SIG undefined FUN_142bace00(void)

longlong FUN_142bace00(void)

{
  if (DAT_146b2c438 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"NavModifierVolume",&DAT_146b2c438,FUN_142bad750,
                  0x4a0,0x10000000,0,L"Engine",&LAB_142bad280,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_1407fbfa0,&LAB_140447700,0);
  }
  return DAT_146b2c438;
}



// FUNCTION 142baceb0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong URecastNavMeshDataChunk::GetPrivateStaticClass(void)

{
  if (DAT_146b2c4a8 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"RecastNavMeshDataChunk",&DAT_146b2c4a8,FUN_140447710
                  ,0x40,0x10000000,0,L"Engine",&LAB_142bad380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UNavigationDataChunk::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b2c4a8;
}



// FUNCTION 142bacf60 FUN_142bacf60 body=47 status=ok
// SIG undefined FUN_142bacf60(void)

longlong FUN_142bacf60(void)

{
  if (DAT_146b2c430 == 0) {
    FUN_141786440(&DAT_146b2c430,&PTR_FUN_1457e3550);
  }
  return DAT_146b2c430;
}



// FUNCTION 142bacf90 FUN_142bacf90 body=47 status=ok
// SIG undefined FUN_142bacf90(void)

longlong FUN_142bacf90(void)

{
  if (DAT_146b2c428 == 0) {
    FUN_141786a30(&DAT_146b2c428,&PTR_FUN_14668fc90);
  }
  return DAT_146b2c428;
}



// FUNCTION 142bacfd0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UNavNodeInterface::StaticClass(void)

{
  if (DAT_146b2c448 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"NavNodeInterface",&DAT_146b2c448,FUN_140447710,0x28,
                  0x10004001,0,L"Engine",&LAB_140492380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b2c448;
}



// FUNCTION 142bad090 FUN_142bad090 body=47 status=ok
// SIG undefined FUN_142bad090(void)

longlong FUN_142bad090(void)

{
  if (DAT_146b2c450 == 0) {
    FUN_141786a30(&DAT_146b2c450,&PTR_FUN_14668fdc0);
  }
  return DAT_146b2c450;
}



// FUNCTION 142bad0e0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGImpulseWindProjectile::GetPrivateStaticClass(void)

{
  if (DAT_146b2c470 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"NavTestRenderingComponent",&DAT_146b2c470,
                  FUN_140447710,0x6f0,0x10000000,0,L"Engine",&LAB_142bad360,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14079feb0,&LAB_140447700,0);
  }
  return DAT_146b2c470;
}



// FUNCTION 142bad1a0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong URecastFilter_UseDefaultArea::StaticClass(void)

{
  if (DAT_146b2c480 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"RecastFilter_UseDefaultArea",&DAT_146b2c480,
                  FUN_140447710,0x48,0x10000000,0,L"Engine",&LAB_142ba7e10,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UNavigationQueryFilter::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b2c480;
}



// FUNCTION 142bad3a0 ERecastPartitioning_StaticEnum body=55 status=ok
// SIG undefined ERecastPartitioning_StaticEnum(void)

void ERecastPartitioning_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b2c348 == 0) {
    uVar1 = Z_Construct_UPackage__Script_NavigationSystem();
    DAT_146b2c348 = GetStaticEnum(FUN_142bad9f0,uVar1,L"ERecastPartitioning");
  }
  return;
}



// FUNCTION 142bad3e0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UThrobber::GetPrivateStaticClass(void)

{
  if (DAT_146b2c460 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"NavRelevantComponent",&DAT_146b2c460,FUN_142bad7b0,
                  0x1a8,0x10000000,0,L"Engine",&LAB_142bad340,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_146b2c460;
}



// FUNCTION 142bad670 Serialize body=112 status=ok
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
  FUN_142ba2920(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 142bad6e0 Serialize body=112 status=ok
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
  FUN_142ba2a20(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 142bad750 FUN_142bad750 body=34 status=ok
// SIG undefined FUN_142bad750(void)

void FUN_142bad750(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142bace00();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SetAreaClass_1457e3e40,1);
  return;
}



// FUNCTION 142bad780 FUN_142bad780 body=34 status=ok
// SIG undefined FUN_142bad780(void)

void FUN_142bad780(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142bacca0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SetAreaClass_1457e3e30,1);
  return;
}



// FUNCTION 142bad7b0 FUN_142bad7b0 body=34 status=ok
// SIG undefined FUN_142bad7b0(void)

void FUN_142bad7b0(void)

{
  undefined8 uVar1;
  
  uVar1 = UThrobber::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SetNavigationRelevancy_1457e3e50,1);
  return;
}



// FUNCTION 142bad7e0 FUN_142bad7e0 body=47 status=ok
// SIG undefined FUN_142bad7e0(void)

longlong FUN_142bad7e0(void)

{
  if (DAT_146b2c3f0 == 0) {
    FUN_141786440(&DAT_146b2c3f0,&PTR_GetPrivateStaticClass_1457e27c0);
  }
  return DAT_146b2c3f0;
}



// FUNCTION 142bad810 FUN_142bad810 body=47 status=ok
// SIG undefined FUN_142bad810(void)

longlong FUN_142bad810(void)

{
  if (DAT_146b2c490 == 0) {
    FUN_141786440(&DAT_146b2c490,&PTR_FUN_1457e2d40);
  }
  return DAT_146b2c490;
}



// FUNCTION 142bad840 FUN_142bad840 body=47 status=ok
// SIG undefined FUN_142bad840(void)

longlong FUN_142bad840(void)

{
  if (DAT_146b2c3b0 == 0) {
    FUN_141786440(&DAT_146b2c3b0,&PTR_GetPrivateStaticClass_1457e2310);
  }
  return DAT_146b2c3b0;
}



// FUNCTION 142bad870 FUN_142bad870 body=47 status=ok
// SIG undefined FUN_142bad870(void)

longlong FUN_142bad870(void)

{
  if (DAT_146b2c3c0 == 0) {
    FUN_141786440(&DAT_146b2c3c0,&PTR_GetPrivateStaticClass_1457e2440);
  }
  return DAT_146b2c3c0;
}



// FUNCTION 142bad8a0 FUN_142bad8a0 body=47 status=ok
// SIG undefined FUN_142bad8a0(void)

longlong FUN_142bad8a0(void)

{
  if (DAT_146b2c3d0 == 0) {
    FUN_141786440(&DAT_146b2c3d0,&PTR_GetPrivateStaticClass_1457e2570);
  }
  return DAT_146b2c3d0;
}



// FUNCTION 142bad8d0 FUN_142bad8d0 body=47 status=ok
// SIG undefined FUN_142bad8d0(void)

longlong FUN_142bad8d0(void)

{
  if (DAT_146b2c3e0 == 0) {
    FUN_141786440(&DAT_146b2c3e0,&PTR_StaticClass_1457e2680);
  }
  return DAT_146b2c3e0;
}



// FUNCTION 142bad900 FUN_142bad900 body=47 status=ok
// SIG undefined FUN_142bad900(void)

longlong FUN_142bad900(void)

{
  if (DAT_146b2c400 == 0) {
    FUN_141786440(&DAT_146b2c400,&PTR_GetPrivateStaticClass_1457e2a00);
  }
  return DAT_146b2c400;
}



// FUNCTION 142bad930 FUN_142bad930 body=47 status=ok
// SIG undefined FUN_142bad930(void)

longlong FUN_142bad930(void)

{
  if (DAT_146b2c440 == 0) {
    FUN_141786440(&DAT_146b2c440,&PTR_StaticClass_1457e36b0);
  }
  return DAT_146b2c440;
}



// FUNCTION 142bad960 FUN_142bad960 body=47 status=ok
// SIG undefined FUN_142bad960(void)

longlong FUN_142bad960(void)

{
  if (DAT_146b2c468 == 0) {
    FUN_141786440(&DAT_146b2c468,&PTR_GetPrivateStaticClass_1457e3af0);
  }
  return DAT_146b2c468;
}



// FUNCTION 142bad990 FUN_142bad990 body=47 status=ok
// SIG undefined FUN_142bad990(void)

longlong FUN_142bad990(void)

{
  if (DAT_146b2c478 == 0) {
    FUN_141786440(&DAT_146b2c478,&PTR_StaticClass_1457e3c00);
  }
  return DAT_146b2c478;
}



// FUNCTION 142bad9c0 FUN_142bad9c0 body=47 status=ok
// SIG undefined FUN_142bad9c0(void)

longlong FUN_142bad9c0(void)

{
  if (DAT_146b2c4a0 == 0) {
    FUN_141786440(&DAT_146b2c4a0,&PTR_GetPrivateStaticClass_1457e37c0);
  }
  return DAT_146b2c4a0;
}



// FUNCTION 142bad9f0 FUN_142bad9f0 body=47 status=ok
// SIG undefined FUN_142bad9f0(void)

longlong FUN_142bad9f0(void)

{
  if (DAT_146b2c488 == 0) {
    FUN_1417866a0(&DAT_146b2c488,&PTR_Z_Construct_UPackage__Script_NavigationSystem_146690e90);
  }
  return DAT_146b2c488;
}



// FUNCTION 142bada20 FUN_142bada20 body=128 status=ok
// SIG undefined FUN_142bada20(void)

void FUN_142bada20(undefined8 param_1,longlong param_2)

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
  FUN_142ba6430(param_1,local_res10);
  return;
}



// FUNCTION 142badaa0 FUN_142badaa0 body=128 status=ok
// SIG undefined FUN_142badaa0(void)

void FUN_142badaa0(undefined8 param_1,longlong param_2)

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
  FUN_142ba64c0(param_1,local_res10);
  return;
}



// FUNCTION 142badb20 FUN_142badb20 body=130 status=ok
// SIG undefined FUN_142badb20(void)

void FUN_142badb20(undefined8 param_1,longlong param_2)

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
  FUN_142ba6560(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 142badbb0 FUN_142badbb0 body=15 status=ok
// SIG undefined FUN_142badbb0(void)

undefined8 FUN_142badbb0(char param_1,char param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != param_2) {
    uVar1 = 2;
  }
  return uVar1;
}



// FUNCTION 142badbc0 StartupModule body=54 status=ok
// SIG undefined StartupModule(void)

void FAIModule::StartupModule(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 local_res10 [24];
  
  puVar2 = (undefined8 *)FName::FName(local_res10,"NavigationSystem",1);
  uVar1 = *puVar2;
  uVar3 = FUN_14168dc80();
  FUN_141690010(uVar3,uVar1);
  return;
}



// FUNCTION 142badc00 FUN_142badc00 body=452 status=ok
// SIG undefined FUN_142badc00(void)

longlong FUN_142badc00(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined2 *puVar8;
  longlong lVar9;
  longlong local_68;
  undefined1 local_60 [16];
  longlong local_50;
  longlong local_48;
  undefined1 local_38 [8];
  longlong local_30;
  
  FUN_14222d820(&local_50);
  if ((param_2 != 0) &&
     (plVar1 = (longlong *)UWorld::GetWorldSettings(param_2,0,1), plVar1 != (longlong *)0x0)) {
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x718))(plVar1,local_38);
    local_68 = *plVar1;
    FString::FString(local_60,plVar1 + 1);
    FSoftObjectPath::operator=(&local_50,&local_68);
    if (local_30 != 0) {
      FMemory::Free();
    }
  }
  lVar6 = 0;
  if (local_50 != 0) {
    puVar2 = (undefined8 *)FSoftObjectPath::ToString(&local_50,&local_68);
    if (*(int *)(puVar2 + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*puVar2;
    }
    uVar3 = FUN_1428e6120();
    lVar4 = FUN_141799830(uVar3,0,puVar8,0,0,0);
    if (local_68 != 0) {
      FMemory::Free();
    }
    if (lVar4 != 0) {
      lVar5 = FUN_1428e6120();
      lVar7 = lVar4;
      do {
        if (lVar7 == lVar5) {
          lVar5 = FUN_1428e6120();
          lVar7 = lVar4;
          goto LAB_142badd30;
        }
        lVar7 = *(longlong *)(lVar7 + 0x30);
      } while (lVar7 != 0);
    }
  }
  goto LAB_142badda1;
  while (lVar7 = *(longlong *)(lVar7 + 0x30), lVar9 = lVar6, lVar7 != 0) {
LAB_142badd30:
    lVar9 = lVar4;
    if (lVar7 == lVar5) break;
  }
  FUN_1417846f0(param_2,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  lVar6 = FUN_1417985e0(lVar9,param_2,0,0,0,0,0,0,0);
LAB_142badda1:
  if (local_48 != 0) {
    FMemory::Free();
  }
  return lVar6;
}



// FUNCTION 142baddd0 FUN_142baddd0 body=408 status=ok
// SIG undefined FUN_142baddd0(void)

int * FUN_142baddd0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  byte *pbVar2;
  uint *puVar3;
  int iVar4;
  byte *pbVar5;
  char cVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar8 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar8);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar8 = (int)param_1[6];
    iVar4 = *(int *)((longlong)iVar8 * 0x20 + 4 + *param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar4;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar4 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar8;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar7 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar8 & 0x1f);
  pbVar10 = (byte *)((longlong)iVar8 * 0x20 + *param_1);
  pbVar5 = (byte *)param_3[1];
  pbVar2 = pbVar10 + 8;
  *pbVar10 = *(byte *)*param_3;
  pbVar2[0] = 0;
  pbVar2[1] = 0;
  pbVar2[2] = 0;
  pbVar2[3] = 0;
  pbVar2[4] = 0;
  pbVar2[5] = 0;
  pbVar2[6] = 0;
  pbVar2[7] = 0;
  pbVar10[0x10] = 0;
  pbVar10[0x11] = 0;
  pbVar10[0x12] = 0;
  pbVar10[0x13] = 0;
  if (((pbVar5 != pbVar2) && (*(int *)(pbVar5 + 8) != 0)) &&
     (*(longlong **)pbVar5 != (longlong *)0x0)) {
    (**(code **)(**(longlong **)pbVar5 + 0x30))();
  }
  pbVar10[0x18] = 0xff;
  pbVar10[0x19] = 0xff;
  pbVar10[0x1a] = 0xff;
  pbVar10[0x1b] = 0xff;
  cVar6 = TSet<TTuple<enum_EGLevitateAutoActivateMode,FGTutorialStepTextOverride>,TDefaultMapHashableKeyFuncs<enum_EGLevitateAutoActivateMode,FGTutorialStepTextOverride,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar6 == '\0') {
    uVar9 = (int)param_1[9] - 1U & (uint)*pbVar10;
    *(uint *)(pbVar10 + 0x1c) = uVar9;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(pbVar10 + 0x18) =
         *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar9) * 4)
    ;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar9) * 4) = *param_2;
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  return param_2;
}



// FUNCTION 142badf70 FUN_142badf70 body=475 status=ok
// SIG undefined FUN_142badf70(void)

int * FUN_142badf70(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  ushort *puVar11;
  
  iVar8 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar2 = *(int *)((longlong)iVar7 * 0x20 + 4 + *param_1);
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar7 & 0x1f);
  puVar3 = (undefined8 *)param_3[1];
  puVar11 = (ushort *)((longlong)iVar7 * 0x20 + *param_1);
  *(undefined4 *)puVar11 = *(undefined4 *)*param_3;
  *(undefined8 *)(puVar11 + 4) = *puVar3;
  *(undefined8 *)(puVar11 + 8) = puVar3[1];
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar11[0xc] = 0xffff;
  puVar11[0xd] = 0xffff;
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar10) {
    iVar6 = 0x20;
    cVar9 = '\0';
    uVar4 = (uVar10 >> 1) + 8;
    iVar8 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar4 != 0) {
      iVar6 = 0x1f - iVar8;
    }
    uVar4 = (uVar10 >> 1) + 7;
    iVar8 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar9 = '\x1f' - (char)iVar8;
    }
    iVar8 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar9 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar10 = (uint)(puVar11[1] ^ *puVar11) & (int)param_1[9] - 1U;
    *(uint *)(puVar11 + 0xe) = uVar10;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(puVar11 + 0xc) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar10) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar10) * 4) = iVar7;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TTuple<FBTNodeIndex,TSharedPtr<FAIMessageObserver,0>_>,TDefaultMapHashableKeyFuncs<FBTNodeIndex,TSharedPtr<FAIMessageObserver,0>,1>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  return param_2;
}



// FUNCTION 142bae150 FUN_142bae150 body=710 status=ok
// SIG undefined FUN_142bae150(void)

int * FUN_142bae150(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  longlong *plVar13;
  uint uVar14;
  uint *puVar15;
  int iVar16;
  bool bVar17;
  
  iVar8 = 1;
  iVar16 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar9 = *(int *)(*param_1 + 4 + (longlong)iVar11 * 0x18);
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar9 * 0x18) = 0xffffffff;
    }
  }
  plVar13 = (longlong *)param_1[4];
  *param_2 = iVar11;
  lVar5 = (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = param_1 + 2;
  }
  bVar17 = false;
  puVar15 = (uint *)((longlong)plVar13 + lVar5);
  *puVar15 = *puVar15 | 1 << ((byte)iVar11 & 0x1f);
  puVar1 = (undefined4 *)param_3[1];
  lVar6 = (longlong)iVar11;
  plVar13 = (longlong *)(*param_1 + lVar6 * 0x18);
  lVar2 = *(longlong *)*param_3;
  *plVar13 = lVar2;
  *(undefined4 *)(plVar13 + 1) = *puVar1;
  *(undefined4 *)(plVar13 + 2) = 0xffffffff;
  uVar14 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar14 != 1) {
    iVar10 = iVar16;
    if (uVar14 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar7 +
                      ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar9 != -1) {
        do {
          iVar10 = iVar9;
          if (*(longlong *)(*param_1 + (longlong)iVar9 * 0x18) == lVar2) break;
          iVar9 = *(int *)(*param_1 + 0x10 + (longlong)iVar9 * 0x18);
          iVar10 = iVar16;
        } while (iVar9 != -1);
      }
    }
    bVar17 = iVar10 != -1;
    if (bVar17) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar10 * 0x18),plVar13,0x10);
      bVar3 = (byte)iVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar11;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + lVar6 * 0x18) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar16 = (int)param_1[6];
      }
      *(int *)(lVar2 + 4 + lVar6 * 0x18) = iVar16;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar11;
      plVar13 = (longlong *)param_1[4];
      *param_2 = iVar10;
      if (plVar13 == (longlong *)0x0) {
        plVar13 = param_1 + 2;
      }
      puVar15 = (uint *)((longlong)plVar13 + lVar5);
      *puVar15 = *puVar15 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_142bae3f1;
    }
  }
  if (3 < uVar14) {
    uVar4 = (uVar14 >> 1) + 8;
    iVar16 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar16 == 0; iVar16 = iVar16 + -1) {
      }
    }
    iVar8 = 0x20;
    if (uVar4 != 0) {
      iVar8 = 0x1f - iVar16;
    }
    uVar4 = (uVar14 >> 1) + 7;
    iVar16 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar16 == 0; iVar16 = iVar16 + -1) {
      }
    }
    if (uVar4 == 0) {
      cVar12 = '\0';
    }
    else {
      cVar12 = '\x1f' - (char)iVar16;
    }
    iVar8 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar14 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar14 = (int)((ulonglong)*plVar13 >> 0x20) + (int)*plVar13 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar13 + 0x14) = uVar14;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(plVar13 + 2) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4);
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4) =
         iVar11;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
    Rehash(param_1);
  }
LAB_142bae3f1:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar17;
  }
  return param_2;
}



// FUNCTION 142bae420 FUN_142bae420 body=487 status=ok
// SIG undefined FUN_142bae420(void)

undefined8 * FUN_142bae420(longlong param_1,undefined8 *param_2,byte param_3)

{
  longlong lVar1;
  void *pvVar2;
  bool bVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  void **ppvVar9;
  int iVar10;
  byte bVar11;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  void *local_28;
  int local_20;
  undefined4 local_1c;
  
  lVar8 = 0;
  lVar6 = FUN_142bbd600(param_1,param_3);
  if (((lVar6 == 0) || (*(longlong *)(lVar6 + 8) == 0)) ||
     (lVar1 = *(longlong *)(*(longlong *)(lVar6 + 8) + 0x10), lVar7 = FUN_142c36340(),
     pvVar2 = DAT_146b2c5a0, lVar1 != lVar7)) {
    *param_2 = 0;
    uVar5 = DAT_146b2c5a8;
    pvVar2 = DAT_146b2c5a0;
    iVar10 = (int)DAT_146b2c5a8;
    *(int *)(param_2 + 1) = iVar10;
    if (iVar10 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,uVar5 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop((void *)*param_2,pvVar2,(longlong)iVar10 * 2);
    }
  }
  else {
    lVar6 = *(longlong *)(lVar6 + 8);
    bVar11 = *(byte *)(lVar6 + 0x2b) >> 1 & 1;
    if (bVar11 != 0) {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1a8) + (ulonglong)param_3 * 8);
    }
    if ((*(int *)(param_1 + 400) != 0) && ((int)(uint)param_3 < *(int *)(param_1 + 0x1a0))) {
      lVar8 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x198) + (ulonglong)param_3 * 2) +
              *(longlong *)(param_1 + 0x188);
    }
    if (lVar8 + (ulonglong)bVar11 * 4 == 0) {
      local_38 = (void *)0x0;
      iVar10 = (int)DAT_146b2c5a8;
      local_30 = iVar10;
      if (iVar10 == 0) {
        local_2c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,DAT_146b2c5a8 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_38,pvVar2,(longlong)iVar10 * 2);
      }
      ppvVar9 = &local_38;
      bVar4 = false;
      bVar3 = true;
    }
    else {
      local_20 = *(int *)(lVar6 + 0x38);
      lVar8 = (longlong)local_20;
      pvVar2 = *(void **)(lVar6 + 0x30);
      local_28 = (void *)0x0;
      if (local_20 == 0) {
        local_1c = 0;
        ppvVar9 = &local_28;
        bVar4 = true;
        bVar3 = false;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_20,0);
        _guard_xfg_dispatch_icall_nop(local_28,pvVar2,lVar8 * 2);
        ppvVar9 = &local_28;
        bVar4 = true;
        bVar3 = false;
      }
    }
    FString::FString(param_2,ppvVar9);
    if ((bVar3) && (local_38 != (void *)0x0)) {
      FMemory::Free();
    }
    if ((bVar4) && (local_28 != (void *)0x0)) {
      FMemory::Free();
    }
  }
  return param_2;
}



// FUNCTION 142bae610 HeapSortInternal<FBlackboardInitializationData,FIdentityFunctor,TDereferenceWrapper<FBlackboardInitializationData,FBlackboardInitializationData::FMemorySort>_> body=324 status=ok
// SIG undefined HeapSortInternal<FBlackboardInitializationData,FIdentityFunctor,TDereferenceWrapper<FBlackboardInitializationData,FBlackboardInitializationData::FMemorySort>_>(void)

void AlgoImpl::
     HeapSortInternal<FBlackboardInitializationData,FIdentityFunctor,TDereferenceWrapper<FBlackboardInitializationData,FBlackboardInitializationData::FMemorySort>_>
               (undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  
  iVar5 = (param_2 + -2) / 2;
  if (-1 < iVar5) {
    iVar6 = iVar5 * 2 + 1;
    iVar4 = iVar6;
    iVar8 = iVar5;
joined_r0x000142bae63a:
    do {
      if (iVar6 < param_2) {
        iVar6 = iVar5 * 2;
        iVar7 = iVar6 + 1;
        if (iVar6 + 2 < param_2) {
          if (*(ushort *)((longlong)param_1 + (longlong)iVar7 * 4 + 2) <
              *(ushort *)((longlong)param_1 + (longlong)iVar6 * 4 + 10)) {
            iVar7 = iVar6;
          }
          iVar7 = iVar7 + 1;
        }
        puVar9 = param_1 + iVar7;
        puVar1 = param_1 + iVar5;
        if (*(ushort *)((longlong)puVar9 + 2) < *(ushort *)((longlong)puVar1 + 2)) {
          if (puVar1 != puVar9) {
            uVar3 = *puVar1;
            *puVar1 = *puVar9;
            *puVar9 = uVar3;
          }
          iVar6 = iVar7 * 2 + 1;
          iVar5 = iVar7;
          goto joined_r0x000142bae63a;
        }
      }
      iVar6 = iVar4 + -2;
      iVar5 = iVar8 + -1;
      iVar4 = iVar6;
      iVar8 = iVar5;
    } while (-1 < iVar5);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar9 = param_1 + param_2;
    do {
      if (param_1 != puVar9) {
        uVar3 = *param_1;
        *param_1 = *puVar9;
        *puVar9 = uVar3;
      }
      iVar5 = 0;
      if (1 < param_2) {
        do {
          iVar4 = iVar5 * 2;
          iVar6 = iVar4 + 1;
          if (iVar4 + 2 < param_2) {
            if (*(ushort *)((longlong)param_1 + (longlong)iVar6 * 4 + 2) <
                *(ushort *)((longlong)param_1 + (longlong)iVar4 * 4 + 10)) {
              iVar6 = iVar4;
            }
            iVar6 = iVar6 + 1;
          }
          puVar1 = param_1 + iVar6;
          puVar2 = param_1 + iVar5;
          if (*(ushort *)((longlong)puVar2 + 2) <= *(ushort *)((longlong)puVar1 + 2)) break;
          if (puVar2 != puVar1) {
            uVar3 = *puVar2;
            *puVar2 = *puVar1;
            *puVar1 = uVar3;
          }
          iVar5 = iVar6;
        } while (iVar6 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar9 = puVar9 + -1;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 142bae760 HeapSortInternal<FNodeInitializationData,FIdentityFunctor,TDereferenceWrapper<FNodeInitializationData,FNodeInitializationData::FMemorySort>_> body=452 status=ok
// SIG undefined HeapSortInternal<FNodeInitializationData,FIdentityFunctor,TDereferenceWrapper<FNodeInitializationData,FNodeInitializationData::FMemorySort>_>(void)

void AlgoImpl::
     HeapSortInternal<FNodeInitializationData,FIdentityFunctor,TDereferenceWrapper<FNodeInitializationData,FNodeInitializationData::FMemorySort>_>
               (undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  
  iVar8 = (param_2 + -2) / 2;
  if (-1 < iVar8) {
    iVar9 = iVar8 * 2 + 1;
    iVar4 = iVar9;
    iVar10 = iVar8;
joined_r0x000142bae78a:
    do {
      if (iVar9 < param_2) {
        iVar9 = iVar8 * 2;
        iVar12 = iVar9 + 1;
        if (iVar9 + 2 < param_2) {
          if (*(ushort *)((longlong)param_1 + (longlong)iVar12 * 0x18 + 0x12) <
              *(ushort *)((longlong)param_1 + (longlong)iVar9 * 0x18 + 0x42)) {
            iVar12 = iVar9;
          }
          iVar12 = iVar12 + 1;
        }
        puVar11 = param_1 + (longlong)iVar12 * 3;
        puVar1 = param_1 + (longlong)iVar8 * 3;
        if (*(ushort *)((longlong)puVar11 + 0x12) <
            *(ushort *)((longlong)param_1 + (longlong)iVar8 * 0x18 + 0x12)) {
          if (puVar1 != puVar11) {
            uVar5 = puVar11[1];
            uVar6 = *puVar1;
            uVar7 = puVar1[1];
            uVar3 = puVar1[2];
            *puVar1 = *puVar11;
            puVar1[1] = uVar5;
            puVar1[2] = puVar11[2];
            *puVar11 = uVar6;
            puVar11[1] = uVar7;
            puVar11[2] = uVar3;
          }
          iVar9 = iVar12 * 2 + 1;
          iVar8 = iVar12;
          goto joined_r0x000142bae78a;
        }
      }
      iVar9 = iVar4 + -2;
      iVar8 = iVar10 + -1;
      iVar4 = iVar9;
      iVar10 = iVar8;
    } while (-1 < iVar8);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar11 = param_1 + (longlong)param_2 * 3;
    do {
      if (param_1 != puVar11) {
        uVar5 = puVar11[1];
        uVar6 = *param_1;
        uVar7 = param_1[1];
        uVar3 = param_1[2];
        *param_1 = *puVar11;
        param_1[1] = uVar5;
        param_1[2] = puVar11[2];
        *puVar11 = uVar6;
        puVar11[1] = uVar7;
        puVar11[2] = uVar3;
      }
      iVar8 = 0;
      if (1 < param_2) {
        do {
          iVar4 = iVar8 * 2;
          iVar9 = iVar4 + 1;
          if (iVar4 + 2 < param_2) {
            if (*(ushort *)((longlong)param_1 + (longlong)iVar9 * 0x18 + 0x12) <
                *(ushort *)((longlong)param_1 + (longlong)iVar4 * 0x18 + 0x42)) {
              iVar9 = iVar4;
            }
            iVar9 = iVar9 + 1;
          }
          puVar1 = param_1 + (longlong)iVar9 * 3;
          puVar2 = param_1 + (longlong)iVar8 * 3;
          if (*(ushort *)((longlong)param_1 + (longlong)iVar8 * 0x18 + 0x12) <=
              *(ushort *)((longlong)puVar1 + 0x12)) break;
          if (puVar2 != puVar1) {
            uVar5 = puVar1[1];
            uVar6 = *puVar2;
            uVar7 = puVar2[1];
            uVar3 = puVar2[2];
            *puVar2 = *puVar1;
            puVar2[1] = uVar5;
            puVar2[2] = puVar1[2];
            *puVar1 = uVar6;
            puVar1[1] = uVar7;
            puVar1[2] = uVar3;
          }
          iVar8 = iVar9;
        } while (iVar9 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar11 = puVar11 + -3;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 142bae930 HeapSortInternal<FPawnActionEvent,FIdentityFunctor,TDereferenceWrapper<FPawnActionEvent,`anonymous_namespace'::FPawnActionEvenSort>_> body=590 status=ok
// SIG undefined HeapSortInternal<FPawnActionEvent,FIdentityFunctor,TDereferenceWrapper<FPawnActionEvent,`anonymous_namespace'::FPawnActionEvenSort>_>(void)

void AlgoImpl::
     HeapSortInternal<FPawnActionEvent,FIdentityFunctor,TDereferenceWrapper<FPawnActionEvent,_anonymous_namespace_::FPawnActionEvenSort>_>
               (undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  undefined8 *puVar17;
  
  iVar11 = (param_2 + -2) / 2;
  if (-1 < iVar11) {
    iVar12 = iVar11 * 2 + 1;
    iVar6 = iVar12;
    iVar16 = iVar11;
joined_r0x000142bae965:
    do {
      if (iVar12 < param_2) {
        iVar12 = iVar11 * 2;
        iVar15 = iVar12 + 1;
        if (iVar12 + 2 < param_2) {
          lVar13 = (longlong)iVar12 + 2;
          lVar14 = (longlong)iVar15;
          iVar5 = *(int *)((longlong)param_1 + lVar13 * 0x18 + 0xc);
          iVar3 = *(int *)((longlong)param_1 + lVar14 * 0x18 + 0xc);
          if ((iVar5 < iVar3) ||
             ((iVar5 == iVar3 &&
              ((*(int *)(param_1 + lVar13 * 3 + 1) < *(int *)(param_1 + lVar14 * 3 + 1) ||
               ((*(int *)(param_1 + lVar13 * 3 + 1) == *(int *)(param_1 + lVar14 * 3 + 1) &&
                (*(uint *)(param_1 + lVar13 * 3 + 2) < *(uint *)(param_1 + lVar14 * 3 + 2))))))))) {
            bVar10 = true;
          }
          else {
            bVar10 = false;
          }
          if (bVar10) {
            iVar15 = iVar12;
          }
          iVar15 = iVar15 + 1;
        }
        puVar17 = param_1 + (longlong)iVar11 * 3;
        iVar11 = *(int *)((longlong)param_1 + (longlong)iVar15 * 0x18 + 0xc);
        puVar1 = param_1 + (longlong)iVar15 * 3;
        if ((*(int *)((longlong)puVar17 + 0xc) < iVar11) ||
           ((*(int *)((longlong)puVar17 + 0xc) == iVar11 &&
            ((*(int *)(puVar17 + 1) < *(int *)(puVar1 + 1) ||
             ((*(int *)(puVar17 + 1) == *(int *)(puVar1 + 1) &&
              (*(uint *)(puVar17 + 2) < *(uint *)(puVar1 + 2))))))))) {
          if (puVar17 != puVar1) {
            uVar7 = puVar1[1];
            uVar8 = *puVar17;
            uVar9 = puVar17[1];
            uVar4 = puVar17[2];
            *puVar17 = *puVar1;
            puVar17[1] = uVar7;
            puVar17[2] = puVar1[2];
            *puVar1 = uVar8;
            puVar1[1] = uVar9;
            puVar1[2] = uVar4;
          }
          iVar12 = iVar15 * 2 + 1;
          iVar11 = iVar15;
          goto joined_r0x000142bae965;
        }
      }
      iVar12 = iVar6 + -2;
      iVar11 = iVar16 + -1;
      iVar6 = iVar12;
      iVar16 = iVar11;
    } while (-1 < iVar11);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar17 = param_1 + (longlong)param_2 * 3;
    do {
      if (param_1 != puVar17) {
        uVar7 = puVar17[1];
        uVar8 = *param_1;
        uVar9 = param_1[1];
        uVar4 = param_1[2];
        *param_1 = *puVar17;
        param_1[1] = uVar7;
        param_1[2] = puVar17[2];
        *puVar17 = uVar8;
        puVar17[1] = uVar9;
        puVar17[2] = uVar4;
      }
      iVar11 = 0;
      if (1 < param_2) {
        do {
          iVar6 = iVar11 * 2;
          iVar12 = iVar6 + 1;
          if (iVar6 + 2 < param_2) {
            lVar13 = (longlong)iVar6 + 2;
            lVar14 = (longlong)iVar12;
            iVar15 = *(int *)((longlong)param_1 + lVar13 * 0x18 + 0xc);
            iVar16 = *(int *)((longlong)param_1 + lVar14 * 0x18 + 0xc);
            if ((iVar15 < iVar16) ||
               ((iVar15 == iVar16 &&
                ((*(int *)(param_1 + lVar13 * 3 + 1) < *(int *)(param_1 + lVar14 * 3 + 1) ||
                 ((*(int *)(param_1 + lVar13 * 3 + 1) == *(int *)(param_1 + lVar14 * 3 + 1) &&
                  (*(uint *)(param_1 + lVar13 * 3 + 2) < *(uint *)(param_1 + lVar14 * 3 + 2)))))))))
            {
              bVar10 = true;
            }
            else {
              bVar10 = false;
            }
            if (bVar10) {
              iVar12 = iVar6;
            }
            iVar12 = iVar12 + 1;
          }
          puVar1 = param_1 + (longlong)iVar11 * 3;
          iVar11 = *(int *)((longlong)param_1 + (longlong)iVar12 * 0x18 + 0xc);
          puVar2 = param_1 + (longlong)iVar12 * 3;
          if ((iVar11 <= *(int *)((longlong)puVar1 + 0xc)) &&
             ((*(int *)((longlong)puVar1 + 0xc) != iVar11 ||
              ((*(int *)(puVar2 + 1) <= *(int *)(puVar1 + 1) &&
               ((*(int *)(puVar1 + 1) != *(int *)(puVar2 + 1) ||
                (*(uint *)(puVar2 + 2) <= *(uint *)(puVar1 + 2))))))))) break;
          if (puVar1 != puVar2) {
            uVar7 = puVar2[1];
            uVar8 = *puVar1;
            uVar9 = puVar1[1];
            uVar4 = puVar1[2];
            *puVar1 = *puVar2;
            puVar1[1] = uVar7;
            puVar1[2] = puVar2[2];
            *puVar2 = uVar8;
            puVar2[1] = uVar9;
            puVar2[2] = uVar4;
          }
          iVar11 = iVar12;
        } while (iVar12 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar17 = puVar17 + -3;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 142baeb80 IntroSortInternal<FBlackboardInitializationData,FIdentityFunctor,TDereferenceWrapper<FBlackboardInitializationData,FBlackboardInitializationData::FMemorySort>_> body=603 status=ok
// SIG undefined IntroSortInternal<FBlackboardInitializationData,FIdentityFunctor,TDereferenceWrapper<FBlackboardInitializationData,FBlackboardInitializationData::FMemorySort>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FBlackboardInitializationData,FIdentityFunctor,TDereferenceWrapper<FBlackboardInitializationData,FBlackboardInitializationData::FMemorySort>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  ushort *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  float fVar13;
  undefined1 auStack_368 [48];
  longlong local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_1 + (param_2 - 1) * 4;
    fVar13 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar13 = fVar13 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar13 = ::_guard_xfg_dispatch_icall_nop(fVar13);
    local_318 = (undefined4)(longlong)(fVar13 + fVar13);
    ::_guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar8 = &local_328;
    do {
      puVar12 = (undefined4 *)*plVar8;
      puVar4 = (undefined4 *)plVar8[1];
      lVar2 = plVar8[2];
      local_338._0_4_ = (int)lVar2;
      lVar5 = (longlong)puVar4 - (longlong)puVar12;
      puVar10 = puVar4;
      puVar11 = puVar12;
      if ((int)local_338 != 0) {
LAB_142baec40:
        lVar6 = (lVar5 >> 2) + 1;
        if (8 < lVar6) {
          if (lVar6 < 0) {
            lVar6 = (lVar5 >> 2) + 2;
          }
          puVar12 = puVar11 + (lVar6 >> 1);
          if (puVar12 != puVar11) {
            uVar3 = *puVar12;
            *puVar12 = *puVar11;
            *puVar11 = uVar3;
          }
          puVar9 = puVar10 + 1;
          puVar7 = puVar11;
LAB_142baec71:
          puVar12 = puVar7 + 1;
          if (puVar12 <= puVar10) goto code_r0x000142baec7a;
          goto LAB_142baec85;
        }
        for (; puVar12 = puVar11, puVar4 = puVar11, puVar11 < puVar10; puVar10 = puVar10 + -1) {
          while (puVar9 = puVar12, puVar12 = puVar4 + 1, puVar12 <= puVar10) {
            puVar1 = (ushort *)((longlong)puVar4 + 6);
            puVar4 = puVar12;
            if (*(ushort *)((longlong)puVar9 + 2) <= *puVar1) {
              puVar12 = puVar9;
            }
          }
          if (puVar9 != puVar10) {
            uVar3 = *puVar9;
            *puVar9 = *puVar10;
            *puVar10 = uVar3;
          }
        }
        goto LAB_142baed4a;
      }
LAB_142baed3b:
      local_338 = lVar2;
      HeapSortInternal<FBlackboardInitializationData,FIdentityFunctor,TDereferenceWrapper<FBlackboardInitializationData,FBlackboardInitializationData::FMemorySort>_>
                (puVar12,puVar4,param_3,param_4);
LAB_142baed4a:
      plVar8 = plVar8 + -3;
    } while (&local_328 <= plVar8);
  }
  return;
code_r0x000142baec7a:
  puVar1 = (ushort *)((longlong)puVar7 + 6);
  puVar7 = puVar12;
  if (*(ushort *)((longlong)puVar11 + 2) <= *puVar1) goto LAB_142baec71;
LAB_142baec85:
  do {
    puVar7 = puVar9;
    puVar9 = puVar7 + -1;
    if (puVar9 <= puVar11) break;
  } while (*(ushort *)((longlong)puVar7 + -2) <= *(ushort *)((longlong)puVar11 + 2));
  if (puVar12 <= puVar9) {
    puVar7 = puVar12;
    if (puVar12 != puVar9) {
      uVar3 = *puVar12;
      *puVar12 = *puVar9;
      *puVar9 = uVar3;
    }
    goto LAB_142baec71;
  }
  if (puVar11 != puVar9) {
    uVar3 = *puVar11;
    *puVar11 = *puVar9;
    *puVar9 = uVar3;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)puVar9 + (-4 - (longlong)puVar11) & 0xfffffffffffffffcU) <
      (longlong)((longlong)puVar10 - (longlong)puVar12 & 0xfffffffffffffffcU)) {
    if (puVar12 < puVar10) {
      *plVar8 = (longlong)puVar12;
      plVar8[1] = (longlong)puVar10;
      *(int *)(plVar8 + 2) = (int)local_338;
      plVar8 = plVar8 + 3;
    }
    if (puVar9 <= puVar11 + 1) goto LAB_142baed4a;
    puVar10 = puVar7 + -2;
    puVar12 = puVar11;
  }
  else {
    if (puVar11 + 1 < puVar9) {
      *plVar8 = (longlong)puVar11;
      plVar8[1] = (longlong)(puVar7 + -2);
      *(int *)(plVar8 + 2) = (int)local_338;
      plVar8 = plVar8 + 3;
    }
    if (puVar10 <= puVar12) goto LAB_142baed4a;
  }
  lVar5 = (longlong)puVar10 - (longlong)puVar12;
  puVar11 = puVar12;
  if ((int)local_338 == 0) goto LAB_142baed3b;
  goto LAB_142baec40;
}



// FUNCTION 142baede0 IntroSortInternal<FNodeInitializationData,FIdentityFunctor,TDereferenceWrapper<FNodeInitializationData,FNodeInitializationData::FMemorySort>_> body=835 status=ok
// SIG undefined IntroSortInternal<FNodeInitializationData,FIdentityFunctor,TDereferenceWrapper<FNodeInitializationData,FNodeInitializationData::FMemorySort>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FNodeInitializationData,FIdentityFunctor,TDereferenceWrapper<FNodeInitializationData,FNodeInitializationData::FMemorySort>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  ushort *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  float fVar18;
  undefined1 auStack_378 [48];
  longlong local_348;
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_378;
    lStack_330 = param_1 + param_2 * 0x18 + -0x18;
    fVar18 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar18 = fVar18 + 1.8446744e+19;
    }
    local_338 = param_1;
    fVar18 = ::_guard_xfg_dispatch_icall_nop(fVar18);
    local_328 = (undefined4)(longlong)(fVar18 + fVar18);
    ::_guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
    plVar17 = &local_338;
    do {
      puVar16 = (undefined8 *)*plVar17;
      puVar11 = (undefined8 *)plVar17[1];
      lVar2 = plVar17[2];
      local_348._0_4_ = (int)lVar2;
      lVar10 = ((longlong)puVar11 - (longlong)puVar16) / 0x18 + 1;
      puVar15 = puVar16;
      if ((int)local_348 != 0) {
LAB_142baeed0:
        if (8 < lVar10) {
          if (lVar10 < 0) {
            lVar10 = lVar10 + 1;
          }
          puVar16 = puVar15 + (lVar10 >> 1) * 3;
          if (puVar16 != puVar15) {
            uVar4 = *(undefined4 *)((longlong)puVar15 + 4);
            uVar5 = *(undefined4 *)(puVar15 + 1);
            uVar6 = *(undefined4 *)((longlong)puVar15 + 0xc);
            uVar7 = *puVar16;
            uVar8 = puVar16[1];
            uVar3 = puVar16[2];
            *(undefined4 *)puVar16 = *(undefined4 *)puVar15;
            *(undefined4 *)((longlong)puVar16 + 4) = uVar4;
            *(undefined4 *)(puVar16 + 1) = uVar5;
            *(undefined4 *)((longlong)puVar16 + 0xc) = uVar6;
            puVar16[2] = puVar15[2];
            *puVar15 = uVar7;
            puVar15[1] = uVar8;
            puVar15[2] = uVar3;
          }
          puVar13 = puVar11 + 3;
          puVar16 = puVar15;
LAB_142baef20:
          puVar12 = puVar16;
          puVar16 = puVar12 + 3;
          if (puVar16 <= puVar11) goto code_r0x000142baef29;
          goto LAB_142baef35;
        }
        for (; puVar16 = puVar15, puVar13 = puVar15, puVar15 < puVar11; puVar11 = puVar11 + -3) {
          while (puVar12 = puVar16, puVar16 = puVar13 + 3, puVar16 <= puVar11) {
            puVar1 = (ushort *)((longlong)puVar13 + 0x2a);
            puVar13 = puVar16;
            if (*(ushort *)((longlong)puVar12 + 0x12) <= *puVar1) {
              puVar16 = puVar12;
            }
          }
          if (puVar12 != puVar11) {
            uVar7 = puVar11[1];
            uVar8 = *puVar12;
            uVar9 = puVar12[1];
            uVar3 = puVar12[2];
            *puVar12 = *puVar11;
            puVar12[1] = uVar7;
            puVar12[2] = puVar11[2];
            *puVar11 = uVar8;
            puVar11[1] = uVar9;
            puVar11[2] = uVar3;
          }
        }
        goto LAB_142baf065;
      }
LAB_142baf056:
      local_348 = lVar2;
      HeapSortInternal<FNodeInitializationData,FIdentityFunctor,TDereferenceWrapper<FNodeInitializationData,FNodeInitializationData::FMemorySort>_>
                (puVar16,lVar10,param_3,param_4);
LAB_142baf065:
      plVar17 = plVar17 + -3;
    } while (&local_338 <= plVar17);
  }
  return;
code_r0x000142baef29:
  if (*(ushort *)((longlong)puVar15 + 0x12) <= *(ushort *)((longlong)puVar12 + 0x2a))
  goto LAB_142baef20;
LAB_142baef35:
  do {
    puVar14 = puVar13;
    puVar13 = puVar14 + -3;
    if (puVar13 <= puVar15) break;
  } while (*(ushort *)((longlong)puVar14 + -6) <= *(ushort *)((longlong)puVar15 + 0x12));
  if (puVar16 <= puVar13) {
    if (puVar16 != puVar13) {
      uVar4 = *(undefined4 *)((longlong)puVar14 + -0x14);
      uVar5 = *(undefined4 *)(puVar14 + -2);
      uVar6 = *(undefined4 *)((longlong)puVar14 + -0xc);
      uVar7 = *puVar16;
      uVar8 = puVar12[4];
      uVar3 = puVar12[5];
      *(undefined4 *)puVar16 = *(undefined4 *)puVar13;
      *(undefined4 *)((longlong)puVar12 + 0x1c) = uVar4;
      *(undefined4 *)(puVar12 + 4) = uVar5;
      *(undefined4 *)((longlong)puVar12 + 0x24) = uVar6;
      puVar12[5] = puVar14[-1];
      *puVar13 = uVar7;
      puVar14[-2] = uVar8;
      puVar14[-1] = uVar3;
    }
    goto LAB_142baef20;
  }
  if (puVar15 != puVar13) {
    uVar4 = *(undefined4 *)((longlong)puVar14 + -0x14);
    uVar5 = *(undefined4 *)(puVar14 + -2);
    uVar6 = *(undefined4 *)((longlong)puVar14 + -0xc);
    uVar7 = *puVar15;
    uVar8 = puVar15[1];
    uVar3 = puVar15[2];
    *(undefined4 *)puVar15 = *(undefined4 *)puVar13;
    *(undefined4 *)((longlong)puVar15 + 4) = uVar4;
    *(undefined4 *)(puVar15 + 1) = uVar5;
    *(undefined4 *)((longlong)puVar15 + 0xc) = uVar6;
    puVar15[2] = puVar14[-1];
    *puVar13 = uVar7;
    puVar14[-2] = uVar8;
    puVar14[-1] = uVar3;
  }
  local_348._0_4_ = (int)local_348 + -1;
  lVar10 = (longlong)puVar13 + (-0x18 - (longlong)puVar15);
  lVar10 = lVar10 / 6 + (lVar10 >> 0x3f);
  if ((lVar10 >> 2) - (lVar10 >> 0x3f) < ((longlong)puVar11 - (longlong)puVar16) / 0x18) {
    if (puVar16 < puVar11) {
      *plVar17 = (longlong)puVar16;
      plVar17[1] = (longlong)puVar11;
      *(int *)(plVar17 + 2) = (int)local_348;
      plVar17 = plVar17 + 3;
    }
    if (puVar13 <= puVar15 + 3) goto LAB_142baf065;
    puVar11 = puVar14 + -6;
    puVar16 = puVar15;
  }
  else {
    if (puVar15 + 3 < puVar13) {
      *plVar17 = (longlong)puVar15;
      plVar17[1] = (longlong)(puVar14 + -6);
      *(int *)(plVar17 + 2) = (int)local_348;
      plVar17 = plVar17 + 3;
    }
    if (puVar11 <= puVar16) goto LAB_142baf065;
  }
  lVar10 = ((longlong)puVar11 - (longlong)puVar16) / 0x18 + 1;
  puVar15 = puVar16;
  if ((int)local_348 == 0) goto LAB_142baf056;
  goto LAB_142baeed0;
}



// FUNCTION 142baf130 IntroSortInternal<FPawnActionEvent,FIdentityFunctor,TDereferenceWrapper<FPawnActionEvent,`anonymous_namespace'::FPawnActionEvenSort>_> body=913 status=ok
// SIG undefined IntroSortInternal<FPawnActionEvent,FIdentityFunctor,TDereferenceWrapper<FPawnActionEvent,`anonymous_namespace'::FPawnActionEvenSort>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FPawnActionEvent,FIdentityFunctor,TDereferenceWrapper<FPawnActionEvent,_anonymous_namespace_::FPawnActionEvenSort>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  float fVar18;
  undefined1 auStack_378 [48];
  longlong local_348;
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_378;
    lStack_330 = param_1 + param_2 * 0x18 + -0x18;
    fVar18 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar18 = fVar18 + 1.8446744e+19;
    }
    local_338 = param_1;
    fVar18 = ::_guard_xfg_dispatch_icall_nop(fVar18);
    local_328 = (undefined4)(longlong)(fVar18 + fVar18);
    ::_guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
    plVar17 = &local_338;
    do {
      puVar15 = (undefined8 *)*plVar17;
      puVar11 = (undefined8 *)plVar17[1];
      lVar1 = plVar17[2];
      local_348._0_4_ = (int)lVar1;
      lVar10 = ((longlong)puVar11 - (longlong)puVar15) / 0x18 + 1;
      puVar14 = puVar15;
      if ((int)local_348 != 0) {
LAB_142baf220:
        if (8 < lVar10) {
          if (lVar10 < 0) {
            lVar10 = lVar10 + 1;
          }
          puVar15 = puVar14 + (lVar10 >> 1) * 3;
          if (puVar15 != puVar14) {
            uVar3 = *(undefined4 *)((longlong)puVar14 + 4);
            uVar4 = *(undefined4 *)(puVar14 + 1);
            uVar5 = *(undefined4 *)((longlong)puVar14 + 0xc);
            uVar6 = *puVar15;
            uVar7 = puVar15[1];
            uVar2 = puVar15[2];
            *(undefined4 *)puVar15 = *(undefined4 *)puVar14;
            *(undefined4 *)((longlong)puVar15 + 4) = uVar3;
            *(undefined4 *)(puVar15 + 1) = uVar4;
            *(undefined4 *)((longlong)puVar15 + 0xc) = uVar5;
            puVar15[2] = puVar14[2];
            *puVar14 = uVar6;
            puVar14[1] = uVar7;
            puVar14[2] = uVar2;
          }
          puVar12 = puVar11 + 3;
          puVar15 = puVar14;
LAB_142baf270:
          puVar16 = puVar15;
          puVar15 = puVar16 + 3;
          if ((puVar15 <= puVar11) &&
             (*(int *)((longlong)puVar16 + 0x24) <= *(int *)((longlong)puVar14 + 0xc)))
          goto code_r0x000142baf283;
          goto LAB_142baf2a0;
        }
        for (; puVar15 = puVar14, puVar12 = puVar14, puVar14 < puVar11; puVar11 = puVar11 + -3) {
          while (puVar16 = puVar15, puVar15 = puVar12 + 3, puVar15 <= puVar11) {
            if ((*(int *)((longlong)puVar16 + 0xc) < *(int *)((longlong)puVar12 + 0x24)) ||
               ((*(int *)((longlong)puVar16 + 0xc) == *(int *)((longlong)puVar12 + 0x24) &&
                ((*(int *)(puVar16 + 1) < *(int *)(puVar15 + 1) ||
                 ((*(int *)(puVar16 + 1) == *(int *)(puVar15 + 1) &&
                  (*(uint *)(puVar16 + 2) < *(uint *)(puVar15 + 2))))))))) {
              bVar9 = true;
            }
            else {
              bVar9 = false;
            }
            puVar12 = puVar15;
            if (!bVar9) {
              puVar15 = puVar16;
            }
          }
          if (puVar16 != puVar11) {
            uVar6 = puVar11[1];
            uVar7 = *puVar16;
            uVar8 = puVar16[1];
            uVar2 = puVar16[2];
            *puVar16 = *puVar11;
            puVar16[1] = uVar6;
            puVar16[2] = puVar11[2];
            *puVar11 = uVar7;
            puVar11[1] = uVar8;
            puVar11[2] = uVar2;
          }
        }
        goto LAB_142baf3e9;
      }
LAB_142baf3da:
      local_348 = lVar1;
      HeapSortInternal<FPawnActionEvent,FIdentityFunctor,TDereferenceWrapper<FPawnActionEvent,_anonymous_namespace_::FPawnActionEvenSort>_>
                (puVar15,lVar10,param_3,param_4);
LAB_142baf3e9:
      plVar17 = plVar17 + -3;
    } while (&local_338 <= plVar17);
  }
  return;
code_r0x000142baf283:
  if ((*(int *)((longlong)puVar14 + 0xc) != *(int *)((longlong)puVar16 + 0x24)) ||
     ((*(int *)(puVar16 + 4) <= *(int *)(puVar14 + 1) &&
      ((*(int *)(puVar14 + 1) != *(int *)(puVar16 + 4) ||
       (*(uint *)(puVar16 + 5) <= *(uint *)(puVar14 + 2))))))) goto LAB_142baf270;
LAB_142baf2a0:
  do {
    puVar13 = puVar12;
    puVar12 = puVar13 + -3;
    if ((puVar12 <= puVar14) ||
       (*(int *)((longlong)puVar13 + -0xc) < *(int *)((longlong)puVar14 + 0xc))) break;
  } while ((*(int *)((longlong)puVar13 + -0xc) != *(int *)((longlong)puVar14 + 0xc)) ||
          ((*(int *)(puVar14 + 1) <= *(int *)(puVar13 + -2) &&
           ((*(int *)(puVar13 + -2) != *(int *)(puVar14 + 1) ||
            (*(uint *)(puVar14 + 2) <= *(uint *)(puVar13 + -1)))))));
  if (puVar15 <= puVar12) {
    if (puVar15 != puVar12) {
      uVar3 = *(undefined4 *)((longlong)puVar13 + -0x14);
      uVar4 = *(undefined4 *)(puVar13 + -2);
      uVar5 = *(undefined4 *)((longlong)puVar13 + -0xc);
      uVar6 = *puVar15;
      uVar7 = puVar16[4];
      uVar2 = puVar16[5];
      *(undefined4 *)puVar15 = *(undefined4 *)puVar12;
      *(undefined4 *)((longlong)puVar16 + 0x1c) = uVar3;
      *(undefined4 *)(puVar16 + 4) = uVar4;
      *(undefined4 *)((longlong)puVar16 + 0x24) = uVar5;
      puVar16[5] = puVar13[-1];
      *puVar12 = uVar6;
      puVar13[-2] = uVar7;
      puVar13[-1] = uVar2;
    }
    goto LAB_142baf270;
  }
  if (puVar14 != puVar12) {
    uVar3 = *(undefined4 *)((longlong)puVar13 + -0x14);
    uVar4 = *(undefined4 *)(puVar13 + -2);
    uVar5 = *(undefined4 *)((longlong)puVar13 + -0xc);
    uVar6 = *puVar14;
    uVar7 = puVar14[1];
    uVar2 = puVar14[2];
    *(undefined4 *)puVar14 = *(undefined4 *)puVar12;
    *(undefined4 *)((longlong)puVar14 + 4) = uVar3;
    *(undefined4 *)(puVar14 + 1) = uVar4;
    *(undefined4 *)((longlong)puVar14 + 0xc) = uVar5;
    puVar14[2] = puVar13[-1];
    *puVar12 = uVar6;
    puVar13[-2] = uVar7;
    puVar13[-1] = uVar2;
  }
  local_348._0_4_ = (int)local_348 + -1;
  lVar10 = (longlong)puVar12 + (-0x18 - (longlong)puVar14);
  lVar10 = lVar10 / 6 + (lVar10 >> 0x3f);
  if ((lVar10 >> 2) - (lVar10 >> 0x3f) < ((longlong)puVar11 - (longlong)puVar15) / 0x18) {
    if (puVar15 < puVar11) {
      *plVar17 = (longlong)puVar15;
      plVar17[1] = (longlong)puVar11;
      *(int *)(plVar17 + 2) = (int)local_348;
      plVar17 = plVar17 + 3;
    }
    if (puVar12 <= puVar14 + 3) goto LAB_142baf3e9;
    puVar11 = puVar13 + -6;
    puVar15 = puVar14;
  }
  else {
    if (puVar14 + 3 < puVar12) {
      *plVar17 = (longlong)puVar14;
      plVar17[1] = (longlong)(puVar13 + -6);
      *(int *)(plVar17 + 2) = (int)local_348;
      plVar17 = plVar17 + 3;
    }
    if (puVar11 <= puVar15) goto LAB_142baf3e9;
  }
  lVar10 = ((longlong)puVar11 - (longlong)puVar15) / 0x18 + 1;
  puVar14 = puVar15;
  if ((int)local_348 == 0) goto LAB_142baf3da;
  goto LAB_142baf220;
}



// FUNCTION 142baf4d0 FUN_142baf4d0 body=970 status=ok
// SIG undefined FUN_142baf4d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142baf4d0(longlong param_1,byte param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  uint local_118 [2];
  undefined1 local_110 [192];
  undefined1 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  lVar5 = FUN_142bbd600();
  if (((lVar5 == 0) || (*(longlong *)(lVar5 + 8) == 0)) ||
     (lVar7 = *(longlong *)(*(longlong *)(lVar5 + 8) + 0x10),
     lVar6 = UBlackboardKeyType_Class::GetPrivateStaticClass(), lVar7 != lVar6)) {
    return 0;
  }
  lVar7 = *(longlong *)(lVar5 + 8);
  lVar13 = 0;
  bVar8 = *(byte *)(lVar7 + 0x2b) >> 1 & 1;
  lVar6 = lVar13;
  if ((*(int *)(param_1 + 400) != 0) && ((int)(uint)param_2 < *(int *)(param_1 + 0x1a0))) {
    lVar6 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x198) + (ulonglong)param_2 * 2) +
            *(longlong *)(param_1 + 0x188);
  }
  lVar2 = (ulonglong)bVar8 * 4;
  lVar6 = lVar6 + lVar2;
  if (lVar6 == 0) {
    return 0;
  }
  if (bVar8 != 0) {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1a8) + (ulonglong)param_2 * 8);
  }
  cVar3 = UBlackboardKeyType_Class::SetValue(lVar7,lVar6,param_3);
  if (((cVar3 == '\0') ||
      (FUN_142bc3660(param_1,param_2), (*(byte *)(*(longlong *)(param_1 + 0x180) + 0x48) & 1) == 0))
     || (cVar3 = FUN_142bc1e70(param_1,param_2), cVar3 == '\0')) {
    return 1;
  }
  lVar7 = *(longlong *)(param_1 + 0x120);
  if (((lVar7 != 0) || (lVar7 = FUN_1423407b0(param_1), lVar7 != 0)) &&
     (lVar7 = *(longlong *)(lVar7 + 0x150), lVar7 != 0)) {
    lVar6 = FUN_142c32730();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_142baf63d;
  }
  lVar7 = lVar13;
LAB_142baf63d:
  UAISystem::FBlackboardDataToComponentsIterator::FBlackboardDataToComponentsIterator
            (local_118,lVar7 + 0xd0,*(undefined8 *)(param_1 + 0x180));
  do {
    uVar12 = (ulonglong)local_118[0];
    do {
      iVar11 = (int)uVar12;
      if (iVar11 < local_48) {
        puVar10 = local_110;
        if (local_50 != (undefined1 *)0x0) {
          puVar10 = local_50;
        }
        if (*(int *)(puVar10 + (longlong)iVar11 * 0x18 + 0x10) == -1) goto LAB_142baf68d;
        bVar4 = true;
      }
      else {
LAB_142baf68d:
        bVar4 = false;
      }
      if (!bVar4) {
        if (local_50 == (undefined1 *)0x0) {
          return 1;
        }
        FMemory::Free(local_50);
        return 1;
      }
      puVar10 = local_110;
      if (local_50 != (undefined1 *)0x0) {
        puVar10 = local_50;
      }
      lVar7 = FWeakObjectPtr::Get(**(longlong **)(puVar10 + (longlong)iVar11 * 0x18) +
                                  ((longlong)*(int *)(puVar10 + (longlong)iVar11 * 0x18 + 0x10) * 3
                                  + 1) * 8);
      if ((lVar7 != 0) && (cVar3 = FUN_142bcaf00(param_1,lVar7), cVar3 != '\0')) {
        if (*(longlong *)(lVar7 + 0x180) == 0) {
          bVar8 = 0xff;
        }
        else {
          bVar8 = UBlackboardData::GetKeyID(*(longlong *)(lVar7 + 0x180),lVar5);
        }
        if (bVar8 != 0xff) {
          lVar6 = *(longlong *)(lVar5 + 8);
          if ((*(byte *)(lVar6 + 0x2b) & 2) != 0) {
            lVar6 = *(longlong *)(*(longlong *)(lVar7 + 0x1a8) + (ulonglong)(uint)bVar8 * 8);
          }
          lVar9 = lVar13;
          if ((*(int *)(lVar7 + 400) != 0) && ((int)(uint)bVar8 < *(int *)(lVar7 + 0x1a0))) {
            lVar9 = (ulonglong)*(ushort *)(*(longlong *)(lVar7 + 0x198) + (ulonglong)bVar8 * 2) +
                    *(longlong *)(lVar7 + 0x188);
          }
          UBlackboardKeyType_Class::SetValue(lVar6,lVar9 + lVar2,param_3);
          FUN_142bc3660(lVar7,bVar8);
        }
      }
      puVar10 = local_110;
      if (local_50 != (undefined1 *)0x0) {
        puVar10 = local_50;
      }
      lVar7 = (longlong)(int)local_118[0];
      iVar11 = *(int *)(puVar10 + lVar7 * 0x18 + 0x14);
      *(int *)(puVar10 + lVar7 * 0x18 + 0x10) = iVar11;
      puVar1 = (undefined8 *)(puVar10 + lVar7 * 0x18);
      while (iVar11 != -1) {
        *(undefined4 *)((longlong)puVar1 + 0x14) =
             *(undefined4 *)(*(longlong *)*puVar1 + 0x10 + (longlong)iVar11 * 0x18);
        lVar7 = *(longlong *)*puVar1;
        local_120 = *(undefined4 *)(lVar7 + (longlong)iVar11 * 0x18);
        local_11c = *(undefined4 *)(lVar7 + 4 + (longlong)iVar11 * 0x18);
        local_128 = *(undefined4 *)(puVar1 + 1);
        local_124 = *(undefined4 *)((longlong)puVar1 + 0xc);
        cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(&local_120,&local_128);
        if (cVar3 != '\0') break;
        iVar11 = *(int *)((longlong)puVar1 + 0x14);
        *(int *)(puVar1 + 2) = iVar11;
      }
      uVar12 = (ulonglong)(int)local_118[0];
      puVar10 = local_110;
      if (local_50 != (undefined1 *)0x0) {
        puVar10 = local_50;
      }
    } while ((*(int *)(puVar10 + uVar12 * 0x18 + 0x10) != -1) ||
            (local_48 + -1 <= (int)local_118[0]));
    local_118[0] = local_118[0] + 1;
    UAISystem::FBlackboardDataToComponentsIterator::TryMoveIteratorToParentBlackboard(local_118);
  } while( true );
}



// FUNCTION 142baf8a0 FUN_142baf8a0 body=916 status=ok
// SIG undefined FUN_142baf8a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142baf8a0(longlong param_1,byte param_2,char param_3)

{
  char *pcVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 *puVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  uint local_108 [2];
  undefined1 local_100 [192];
  undefined1 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  lVar7 = FUN_142bbd600();
  if (((lVar7 == 0) || (*(longlong *)(lVar7 + 8) == 0)) ||
     (lVar9 = *(longlong *)(*(longlong *)(lVar7 + 8) + 0x10),
     lVar8 = UBlackboardKeyType_Enum::GetPrivateStaticClass(), lVar9 != lVar8)) {
    return 0;
  }
  lVar8 = 0;
  lVar9 = lVar8;
  if ((*(int *)(param_1 + 400) != 0) && ((int)(uint)param_2 < *(int *)(param_1 + 0x1a0))) {
    lVar9 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x198) + (ulonglong)param_2 * 2) +
            *(longlong *)(param_1 + 0x188);
  }
  lVar3 = (ulonglong)(*(byte *)(*(longlong *)(lVar7 + 8) + 0x2b) >> 1 & 1) * 4;
  pcVar1 = (char *)(lVar3 + lVar9);
  if (pcVar1 == (char *)0x0) {
    return 0;
  }
  cVar4 = *pcVar1;
  *pcVar1 = param_3;
  if (((cVar4 == param_3) ||
      (FUN_142bc3660(param_1,param_2), (*(byte *)(*(longlong *)(param_1 + 0x180) + 0x48) & 1) == 0))
     || (cVar4 = FUN_142bc1e70(param_1,param_2), cVar4 == '\0')) {
    return 1;
  }
  lVar9 = *(longlong *)(param_1 + 0x120);
  if (((lVar9 != 0) || (lVar9 = FUN_1423407b0(param_1), lVar9 != 0)) &&
     (lVar9 = *(longlong *)(lVar9 + 0x150), lVar9 != 0)) {
    lVar10 = FUN_142c32730();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_142bafa01;
  }
  lVar9 = lVar8;
LAB_142bafa01:
  UAISystem::FBlackboardDataToComponentsIterator::FBlackboardDataToComponentsIterator
            (local_108,lVar9 + 0xd0,*(undefined8 *)(param_1 + 0x180));
  do {
    uVar13 = (ulonglong)local_108[0];
    do {
      iVar12 = (int)uVar13;
      if (iVar12 < local_38) {
        puVar11 = local_100;
        if (local_40 != (undefined1 *)0x0) {
          puVar11 = local_40;
        }
        if (*(int *)(puVar11 + (longlong)iVar12 * 0x18 + 0x10) == -1) goto LAB_142bafa51;
        bVar5 = true;
      }
      else {
LAB_142bafa51:
        bVar5 = false;
      }
      if (!bVar5) {
        if (local_40 == (undefined1 *)0x0) {
          return 1;
        }
        FMemory::Free(local_40);
        return 1;
      }
      puVar11 = local_100;
      if (local_40 != (undefined1 *)0x0) {
        puVar11 = local_40;
      }
      lVar9 = FWeakObjectPtr::Get(**(longlong **)(puVar11 + (longlong)iVar12 * 0x18) +
                                  ((longlong)*(int *)(puVar11 + (longlong)iVar12 * 0x18 + 0x10) * 3
                                  + 1) * 8);
      if ((lVar9 != 0) && (cVar4 = FUN_142bcaf00(param_1,lVar9), cVar4 != '\0')) {
        if (*(longlong *)(lVar9 + 0x180) == 0) {
          bVar6 = 0xff;
        }
        else {
          bVar6 = UBlackboardData::GetKeyID(*(longlong *)(lVar9 + 0x180),lVar7);
        }
        if (bVar6 != 0xff) {
          lVar10 = lVar8;
          if ((*(int *)(lVar9 + 400) != 0) && ((int)(uint)bVar6 < *(int *)(lVar9 + 0x1a0))) {
            lVar10 = (ulonglong)*(ushort *)(*(longlong *)(lVar9 + 0x198) + (ulonglong)bVar6 * 2) +
                     *(longlong *)(lVar9 + 0x188);
          }
          *(char *)(lVar3 + lVar10) = param_3;
          FUN_142bc3660(lVar9);
        }
      }
      puVar11 = local_100;
      if (local_40 != (undefined1 *)0x0) {
        puVar11 = local_40;
      }
      lVar9 = (longlong)(int)local_108[0];
      iVar12 = *(int *)(puVar11 + lVar9 * 0x18 + 0x14);
      *(int *)(puVar11 + lVar9 * 0x18 + 0x10) = iVar12;
      puVar2 = (undefined8 *)(puVar11 + lVar9 * 0x18);
      while (iVar12 != -1) {
        *(undefined4 *)((longlong)puVar2 + 0x14) =
             *(undefined4 *)(*(longlong *)*puVar2 + 0x10 + (longlong)iVar12 * 0x18);
        lVar9 = *(longlong *)*puVar2;
        local_110 = *(undefined4 *)(lVar9 + (longlong)iVar12 * 0x18);
        local_10c = *(undefined4 *)(lVar9 + 4 + (longlong)iVar12 * 0x18);
        local_118 = *(undefined4 *)(puVar2 + 1);
        local_114 = *(undefined4 *)((longlong)puVar2 + 0xc);
        cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(&local_110,&local_118);
        if (cVar4 != '\0') break;
        iVar12 = *(int *)((longlong)puVar2 + 0x14);
        *(int *)(puVar2 + 2) = iVar12;
      }
      uVar13 = (ulonglong)(int)local_108[0];
      puVar11 = local_100;
      if (local_40 != (undefined1 *)0x0) {
        puVar11 = local_40;
      }
    } while ((*(int *)(puVar11 + uVar13 * 0x18 + 0x10) != -1) ||
            (local_38 + -1 <= (int)local_108[0]));
    local_108[0] = local_108[0] + 1;
    UAISystem::FBlackboardDataToComponentsIterator::TryMoveIteratorToParentBlackboard(local_108);
  } while( true );
}



// FUNCTION 142bafc40 FUN_142bafc40 body=924 status=ok
// SIG undefined FUN_142bafc40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142bafc40(longlong param_1,byte param_2,float param_3)

{
  float *pfVar1;
  float fVar2;
  longlong *plVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 *puVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  uint local_118 [2];
  undefined1 local_110 [192];
  undefined1 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  lVar7 = FUN_142bbd600();
  if (((lVar7 == 0) || (*(longlong *)(lVar7 + 8) == 0)) ||
     (lVar9 = *(longlong *)(*(longlong *)(lVar7 + 8) + 0x10),
     lVar8 = UBlackboardKeyType_Float::GetPrivateStaticClass(), lVar9 != lVar8)) {
    return 0;
  }
  lVar8 = 0;
  lVar9 = lVar8;
  if ((*(int *)(param_1 + 400) != 0) && ((int)(uint)param_2 < *(int *)(param_1 + 0x1a0))) {
    lVar9 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x198) + (ulonglong)param_2 * 2) +
            *(longlong *)(param_1 + 0x188);
  }
  uVar14 = (ulonglong)(*(byte *)(*(longlong *)(lVar7 + 8) + 0x2b) >> 1 & 1);
  pfVar1 = (float *)(lVar9 + uVar14 * 4);
  if (pfVar1 == (float *)0x0) {
    return 0;
  }
  fVar2 = *pfVar1;
  *pfVar1 = param_3;
  if (((fVar2 == param_3) ||
      (FUN_142bc3660(param_1,param_2), (*(byte *)(*(longlong *)(param_1 + 0x180) + 0x48) & 1) == 0))
     || (cVar4 = FUN_142bc1e70(param_1,param_2), cVar4 == '\0')) {
    return 1;
  }
  lVar9 = *(longlong *)(param_1 + 0x120);
  if (((lVar9 != 0) || (lVar9 = FUN_1423407b0(param_1), lVar9 != 0)) &&
     (lVar9 = *(longlong *)(lVar9 + 0x150), lVar9 != 0)) {
    lVar10 = FUN_142c32730();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_142bafd9d;
  }
  lVar9 = lVar8;
LAB_142bafd9d:
  UAISystem::FBlackboardDataToComponentsIterator::FBlackboardDataToComponentsIterator
            (local_118,lVar9 + 0xd0,*(undefined8 *)(param_1 + 0x180));
  do {
    uVar13 = (ulonglong)local_118[0];
    do {
      iVar12 = (int)uVar13;
      if (iVar12 < local_48) {
        puVar11 = local_110;
        if (local_50 != (undefined1 *)0x0) {
          puVar11 = local_50;
        }
        if (*(int *)(puVar11 + (longlong)iVar12 * 0x18 + 0x10) == -1) goto LAB_142bafded;
        bVar5 = true;
      }
      else {
LAB_142bafded:
        bVar5 = false;
      }
      if (!bVar5) {
        if (local_50 == (undefined1 *)0x0) {
          return 1;
        }
        FMemory::Free(local_50);
        return 1;
      }
      puVar11 = local_110;
      if (local_50 != (undefined1 *)0x0) {
        puVar11 = local_50;
      }
      lVar9 = FWeakObjectPtr::Get(**(longlong **)(puVar11 + (longlong)iVar12 * 0x18) +
                                  (longlong)*(int *)(puVar11 + (longlong)iVar12 * 0x18 + 0x10) *
                                  0x18 + 8);
      if ((lVar9 != 0) && (cVar4 = FUN_142bcaf00(param_1,lVar9), cVar4 != '\0')) {
        if (*(longlong *)(lVar9 + 0x180) == 0) {
          bVar6 = 0xff;
        }
        else {
          bVar6 = UBlackboardData::GetKeyID(*(longlong *)(lVar9 + 0x180),lVar7);
        }
        if (bVar6 != 0xff) {
          lVar10 = lVar8;
          if ((*(int *)(lVar9 + 400) != 0) && ((int)(uint)bVar6 < *(int *)(lVar9 + 0x1a0))) {
            lVar10 = (ulonglong)*(ushort *)(*(longlong *)(lVar9 + 0x198) + (ulonglong)bVar6 * 2) +
                     *(longlong *)(lVar9 + 0x188);
          }
          *(float *)(lVar10 + uVar14 * 4) = param_3;
          FUN_142bc3660(lVar9);
        }
      }
      puVar11 = local_110;
      if (local_50 != (undefined1 *)0x0) {
        puVar11 = local_50;
      }
      lVar9 = (longlong)(int)local_118[0];
      iVar12 = *(int *)(puVar11 + lVar9 * 0x18 + 0x14);
      *(int *)(puVar11 + lVar9 * 0x18 + 0x10) = iVar12;
      while (iVar12 != -1) {
        plVar3 = *(longlong **)(puVar11 + lVar9 * 0x18);
        *(undefined4 *)(puVar11 + lVar9 * 0x18 + 0x14) =
             *(undefined4 *)(*plVar3 + 0x10 + (longlong)iVar12 * 0x18);
        lVar10 = *plVar3;
        local_120 = *(undefined4 *)(lVar10 + (longlong)iVar12 * 0x18);
        local_11c = *(undefined4 *)(lVar10 + 4 + (longlong)iVar12 * 0x18);
        local_128 = *(undefined4 *)(puVar11 + lVar9 * 0x18 + 8);
        local_124 = *(undefined4 *)(puVar11 + lVar9 * 0x18 + 0xc);
        cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(&local_120,&local_128);
        if (cVar4 != '\0') break;
        iVar12 = *(int *)(puVar11 + lVar9 * 0x18 + 0x14);
        *(int *)(puVar11 + lVar9 * 0x18 + 0x10) = iVar12;
      }
      uVar13 = (ulonglong)(int)local_118[0];
      puVar11 = local_110;
      if (local_50 != (undefined1 *)0x0) {
        puVar11 = local_50;
      }
    } while ((*(int *)(puVar11 + uVar13 * 0x18 + 0x10) != -1) ||
            (local_48 + -1 <= (int)local_118[0]));
    local_118[0] = local_118[0] + 1;
    UAISystem::FBlackboardDataToComponentsIterator::TryMoveIteratorToParentBlackboard(local_118);
  } while( true );
}



// FUNCTION 142baffe0 FUN_142baffe0 body=916 status=ok
// SIG undefined FUN_142baffe0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142baffe0(longlong param_1,byte param_2,int param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 *puVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  uint local_108 [2];
  undefined1 local_100 [192];
  undefined1 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  lVar7 = FUN_142bbd600();
  if (((lVar7 == 0) || (*(longlong *)(lVar7 + 8) == 0)) ||
     (lVar9 = *(longlong *)(*(longlong *)(lVar7 + 8) + 0x10),
     lVar8 = UBlackboardKeyType_Int::GetPrivateStaticClass(), lVar9 != lVar8)) {
    return 0;
  }
  lVar8 = 0;
  lVar9 = lVar8;
  if ((*(int *)(param_1 + 400) != 0) && ((int)(uint)param_2 < *(int *)(param_1 + 0x1a0))) {
    lVar9 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x198) + (ulonglong)param_2 * 2) +
            *(longlong *)(param_1 + 0x188);
  }
  lVar3 = (ulonglong)(*(byte *)(*(longlong *)(lVar7 + 8) + 0x2b) >> 1 & 1) * 4;
  piVar1 = (int *)(lVar3 + lVar9);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  iVar12 = *piVar1;
  *piVar1 = param_3;
  if (((iVar12 == param_3) ||
      (FUN_142bc3660(param_1,param_2), (*(byte *)(*(longlong *)(param_1 + 0x180) + 0x48) & 1) == 0))
     || (cVar4 = FUN_142bc1e70(param_1,param_2), cVar4 == '\0')) {
    return 1;
  }
  lVar9 = *(longlong *)(param_1 + 0x120);
  if (((lVar9 != 0) || (lVar9 = FUN_1423407b0(param_1), lVar9 != 0)) &&
     (lVar9 = *(longlong *)(lVar9 + 0x150), lVar9 != 0)) {
    lVar10 = FUN_142c32730();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_142bb013f;
  }
  lVar9 = lVar8;
LAB_142bb013f:
  UAISystem::FBlackboardDataToComponentsIterator::FBlackboardDataToComponentsIterator
            (local_108,lVar9 + 0xd0,*(undefined8 *)(param_1 + 0x180));
  do {
    uVar13 = (ulonglong)local_108[0];
    do {
      iVar12 = (int)uVar13;
      if (iVar12 < local_38) {
        puVar11 = local_100;
        if (local_40 != (undefined1 *)0x0) {
          puVar11 = local_40;
        }
        if (*(int *)(puVar11 + (longlong)iVar12 * 0x18 + 0x10) == -1) goto LAB_142bb018f;
        bVar5 = true;
      }
      else {
LAB_142bb018f:
        bVar5 = false;
      }
      if (!bVar5) {
        if (local_40 == (undefined1 *)0x0) {
          return 1;
        }
        FMemory::Free(local_40);
        return 1;
      }
      puVar11 = local_100;
      if (local_40 != (undefined1 *)0x0) {
        puVar11 = local_40;
      }
      lVar9 = FWeakObjectPtr::Get(**(longlong **)(puVar11 + (longlong)iVar12 * 0x18) +
                                  ((longlong)*(int *)(puVar11 + (longlong)iVar12 * 0x18 + 0x10) * 3
                                  + 1) * 8);
      if ((lVar9 != 0) && (cVar4 = FUN_142bcaf00(param_1,lVar9), cVar4 != '\0')) {
        if (*(longlong *)(lVar9 + 0x180) == 0) {
          bVar6 = 0xff;
        }
        else {
          bVar6 = UBlackboardData::GetKeyID(*(longlong *)(lVar9 + 0x180),lVar7);
        }
        if (bVar6 != 0xff) {
          lVar10 = lVar8;
          if ((*(int *)(lVar9 + 400) != 0) && ((int)(uint)bVar6 < *(int *)(lVar9 + 0x1a0))) {
            lVar10 = (ulonglong)*(ushort *)(*(longlong *)(lVar9 + 0x198) + (ulonglong)bVar6 * 2) +
                     *(longlong *)(lVar9 + 0x188);
          }
          *(int *)(lVar3 + lVar10) = param_3;
          FUN_142bc3660(lVar9);
        }
      }
      puVar11 = local_100;
      if (local_40 != (undefined1 *)0x0) {
        puVar11 = local_40;
      }
      lVar9 = (longlong)(int)local_108[0];
      iVar12 = *(int *)(puVar11 + lVar9 * 0x18 + 0x14);
      *(int *)(puVar11 + lVar9 * 0x18 + 0x10) = iVar12;
      puVar2 = (undefined8 *)(puVar11 + lVar9 * 0x18);
      while (iVar12 != -1) {
        *(undefined4 *)((longlong)puVar2 + 0x14) =
             *(undefined4 *)(*(longlong *)*puVar2 + 0x10 + (longlong)iVar12 * 0x18);
        lVar9 = *(longlong *)*puVar2;
        local_110 = *(undefined4 *)(lVar9 + (longlong)iVar12 * 0x18);
        local_10c = *(undefined4 *)(lVar9 + 4 + (longlong)iVar12 * 0x18);
        local_118 = *(undefined4 *)(puVar2 + 1);
        local_114 = *(undefined4 *)((longlong)puVar2 + 0xc);
        cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(&local_110,&local_118);
        if (cVar4 != '\0') break;
        iVar12 = *(int *)((longlong)puVar2 + 0x14);
        *(int *)(puVar2 + 2) = iVar12;
      }
      uVar13 = (ulonglong)(int)local_108[0];
      puVar11 = local_100;
      if (local_40 != (undefined1 *)0x0) {
        puVar11 = local_40;
      }
    } while ((*(int *)(puVar11 + uVar13 * 0x18 + 0x10) != -1) ||
            (local_38 + -1 <= (int)local_108[0]));
    local_108[0] = local_108[0] + 1;
    UAISystem::FBlackboardDataToComponentsIterator::TryMoveIteratorToParentBlackboard(local_108);
  } while( true );
}



// FUNCTION 142bb0380 FUN_142bb0380 body=916 status=ok
// SIG undefined FUN_142bb0380(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142bb0380(longlong param_1,byte param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 *puVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  uint local_108 [2];
  undefined1 local_100 [192];
  undefined1 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  lVar7 = FUN_142bbd600();
  if (((lVar7 == 0) || (*(longlong *)(lVar7 + 8) == 0)) ||
     (lVar9 = *(longlong *)(*(longlong *)(lVar7 + 8) + 0x10), lVar8 = FUN_142c35df0(),
     lVar9 != lVar8)) {
    return 0;
  }
  lVar8 = 0;
  lVar9 = lVar8;
  if ((*(int *)(param_1 + 400) != 0) && ((int)(uint)param_2 < *(int *)(param_1 + 0x1a0))) {
    lVar9 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x198) + (ulonglong)param_2 * 2) +
            *(longlong *)(param_1 + 0x188);
  }
  lVar3 = (ulonglong)(*(byte *)(*(longlong *)(lVar7 + 8) + 0x2b) >> 1 & 1) * 4;
  plVar1 = (longlong *)(lVar3 + lVar9);
  if (plVar1 == (longlong *)0x0) {
    return 0;
  }
  lVar9 = *plVar1;
  *plVar1 = param_3;
  if (((lVar9 == param_3) ||
      (FUN_142bc3660(param_1,param_2), (*(byte *)(*(longlong *)(param_1 + 0x180) + 0x48) & 1) == 0))
     || (cVar4 = FUN_142bc1e70(param_1,param_2), cVar4 == '\0')) {
    return 1;
  }
  lVar9 = *(longlong *)(param_1 + 0x120);
  if (((lVar9 != 0) || (lVar9 = FUN_1423407b0(param_1), lVar9 != 0)) &&
     (lVar9 = *(longlong *)(lVar9 + 0x150), lVar9 != 0)) {
    lVar10 = FUN_142c32730();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_142bb04e0;
  }
  lVar9 = lVar8;
LAB_142bb04e0:
  UAISystem::FBlackboardDataToComponentsIterator::FBlackboardDataToComponentsIterator
            (local_108,lVar9 + 0xd0,*(undefined8 *)(param_1 + 0x180));
  do {
    uVar13 = (ulonglong)local_108[0];
    do {
      iVar12 = (int)uVar13;
      if (iVar12 < local_38) {
        puVar11 = local_100;
        if (local_40 != (undefined1 *)0x0) {
          puVar11 = local_40;
        }
        if (*(int *)(puVar11 + (longlong)iVar12 * 0x18 + 0x10) == -1) goto LAB_142bb0530;
        bVar5 = true;
      }
      else {
LAB_142bb0530:
        bVar5 = false;
      }
      if (!bVar5) {
        if (local_40 == (undefined1 *)0x0) {
          return 1;
        }
        FMemory::Free(local_40);
        return 1;
      }
      puVar11 = local_100;
      if (local_40 != (undefined1 *)0x0) {
        puVar11 = local_40;
      }
      lVar9 = FWeakObjectPtr::Get(**(longlong **)(puVar11 + (longlong)iVar12 * 0x18) +
                                  ((longlong)*(int *)(puVar11 + (longlong)iVar12 * 0x18 + 0x10) * 3
                                  + 1) * 8);
      if ((lVar9 != 0) && (cVar4 = FUN_142bcaf00(param_1,lVar9), cVar4 != '\0')) {
        if (*(longlong *)(lVar9 + 0x180) == 0) {
          bVar6 = 0xff;
        }
        else {
          bVar6 = UBlackboardData::GetKeyID(*(longlong *)(lVar9 + 0x180),lVar7);
        }
        if (bVar6 != 0xff) {
          lVar10 = lVar8;
          if ((*(int *)(lVar9 + 400) != 0) && ((int)(uint)bVar6 < *(int *)(lVar9 + 0x1a0))) {
            lVar10 = (ulonglong)*(ushort *)(*(longlong *)(lVar9 + 0x198) + (ulonglong)bVar6 * 2) +
                     *(longlong *)(lVar9 + 0x188);
          }
          *(longlong *)(lVar3 + lVar10) = param_3;
          FUN_142bc3660(lVar9);
        }
      }
      puVar11 = local_100;
      if (local_40 != (undefined1 *)0x0) {
        puVar11 = local_40;
      }
      lVar9 = (longlong)(int)local_108[0];
      iVar12 = *(int *)(puVar11 + lVar9 * 0x18 + 0x14);
      *(int *)(puVar11 + lVar9 * 0x18 + 0x10) = iVar12;
      puVar2 = (undefined8 *)(puVar11 + lVar9 * 0x18);
      while (iVar12 != -1) {
        *(undefined4 *)((longlong)puVar2 + 0x14) =
             *(undefined4 *)(*(longlong *)*puVar2 + 0x10 + (longlong)iVar12 * 0x18);
        lVar9 = *(longlong *)*puVar2;
        local_110 = *(undefined4 *)(lVar9 + (longlong)iVar12 * 0x18);
        local_10c = *(undefined4 *)(lVar9 + 4 + (longlong)iVar12 * 0x18);
        local_118 = *(undefined4 *)(puVar2 + 1);
        local_114 = *(undefined4 *)((longlong)puVar2 + 0xc);
        cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(&local_110,&local_118);
        if (cVar4 != '\0') break;
        iVar12 = *(int *)((longlong)puVar2 + 0x14);
        *(int *)(puVar2 + 2) = iVar12;
      }
      uVar13 = (ulonglong)(int)local_108[0];
      puVar11 = local_100;
      if (local_40 != (undefined1 *)0x0) {
        puVar11 = local_40;
      }
    } while ((*(int *)(puVar11 + uVar13 * 0x18 + 0x10) != -1) ||
            (local_38 + -1 <= (int)local_108[0]));
    local_108[0] = local_108[0] + 1;
    UAISystem::FBlackboardDataToComponentsIterator::TryMoveIteratorToParentBlackboard(local_108);
  } while( true );
}



// FUNCTION 142bb0720 FUN_142bb0720 body=996 status=ok
// SIG undefined FUN_142bb0720(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142bb0720(longlong param_1,byte param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  uint local_118 [2];
  undefined1 local_110 [192];
  undefined1 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  lVar5 = FUN_142bbd600();
  if (((lVar5 == 0) || (*(longlong *)(lVar5 + 8) == 0)) ||
     (lVar7 = *(longlong *)(*(longlong *)(lVar5 + 8) + 0x10), lVar6 = FUN_142c36340(),
     lVar7 != lVar6)) {
LAB_142bb0ad3:
    if (*param_3 != 0) {
      FMemory::Free();
    }
    return 0;
  }
  lVar7 = *(longlong *)(lVar5 + 8);
  lVar13 = 0;
  bVar8 = *(byte *)(lVar7 + 0x2b) >> 1 & 1;
  lVar6 = lVar13;
  if ((*(int *)(param_1 + 400) != 0) && ((int)(uint)param_2 < *(int *)(param_1 + 0x1a0))) {
    lVar6 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x198) + (ulonglong)param_2 * 2) +
            *(longlong *)(param_1 + 0x188);
  }
  lVar2 = (ulonglong)bVar8 * 4;
  lVar6 = lVar6 + lVar2;
  if (lVar6 == 0) goto LAB_142bb0ad3;
  if (bVar8 != 0) {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1a8) + (ulonglong)param_2 * 8);
  }
  cVar3 = UBlackboardKeyType_String::SetValue(lVar7,lVar6,param_3);
  if (((cVar3 == '\0') ||
      (FUN_142bc3660(param_1,param_2), (*(byte *)(*(longlong *)(param_1 + 0x180) + 0x48) & 1) == 0))
     || (cVar3 = FUN_142bc1e70(param_1,param_2), cVar3 == '\0')) {
LAB_142bb0ac2:
    if (*param_3 != 0) {
      FMemory::Free();
    }
    return 1;
  }
  lVar7 = *(longlong *)(param_1 + 0x120);
  if (((lVar7 != 0) || (lVar7 = FUN_1423407b0(param_1), lVar7 != 0)) &&
     (lVar7 = *(longlong *)(lVar7 + 0x150), lVar7 != 0)) {
    lVar6 = FUN_142c32730();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_142bb088d;
  }
  lVar7 = lVar13;
LAB_142bb088d:
  UAISystem::FBlackboardDataToComponentsIterator::FBlackboardDataToComponentsIterator
            (local_118,lVar7 + 0xd0,*(undefined8 *)(param_1 + 0x180));
  do {
    uVar12 = (ulonglong)local_118[0];
    do {
      iVar11 = (int)uVar12;
      if (iVar11 < local_48) {
        puVar10 = local_110;
        if (local_50 != (undefined1 *)0x0) {
          puVar10 = local_50;
        }
        if (*(int *)(puVar10 + (longlong)iVar11 * 0x18 + 0x10) == -1) goto LAB_142bb08dd;
        bVar4 = true;
      }
      else {
LAB_142bb08dd:
        bVar4 = false;
      }
      if (!bVar4) {
        if (local_50 != (undefined1 *)0x0) {
          FMemory::Free(local_50);
        }
        goto LAB_142bb0ac2;
      }
      puVar10 = local_110;
      if (local_50 != (undefined1 *)0x0) {
        puVar10 = local_50;
      }
      lVar7 = FWeakObjectPtr::Get(**(longlong **)(puVar10 + (longlong)iVar11 * 0x18) +
                                  ((longlong)*(int *)(puVar10 + (longlong)iVar11 * 0x18 + 0x10) * 3
                                  + 1) * 8);
      if ((lVar7 != 0) && (cVar3 = FUN_142bcaf00(param_1,lVar7), cVar3 != '\0')) {
        if (*(longlong *)(lVar7 + 0x180) == 0) {
          bVar8 = 0xff;
        }
        else {
          bVar8 = UBlackboardData::GetKeyID(*(longlong *)(lVar7 + 0x180),lVar5);
        }
        if (bVar8 != 0xff) {
          lVar6 = *(longlong *)(lVar5 + 8);
          if ((*(byte *)(lVar6 + 0x2b) & 2) != 0) {
            lVar6 = *(longlong *)(*(longlong *)(lVar7 + 0x1a8) + (ulonglong)(uint)bVar8 * 8);
          }
          lVar9 = lVar13;
          if ((*(int *)(lVar7 + 400) != 0) && ((int)(uint)bVar8 < *(int *)(lVar7 + 0x1a0))) {
            lVar9 = (ulonglong)*(ushort *)(*(longlong *)(lVar7 + 0x198) + (ulonglong)bVar8 * 2) +
                    *(longlong *)(lVar7 + 0x188);
          }
          UBlackboardKeyType_String::SetValue(lVar6,lVar9 + lVar2,param_3);
          FUN_142bc3660(lVar7,bVar8);
        }
      }
      puVar10 = local_110;
      if (local_50 != (undefined1 *)0x0) {
        puVar10 = local_50;
      }
      lVar7 = (longlong)(int)local_118[0];
      iVar11 = *(int *)(puVar10 + lVar7 * 0x18 + 0x14);
      *(int *)(puVar10 + lVar7 * 0x18 + 0x10) = iVar11;
      puVar1 = (undefined8 *)(puVar10 + lVar7 * 0x18);
      while (iVar11 != -1) {
        *(undefined4 *)((longlong)puVar1 + 0x14) =
             *(undefined4 *)(*(longlong *)*puVar1 + 0x10 + (longlong)iVar11 * 0x18);
        lVar7 = *(longlong *)*puVar1;
        local_120 = *(undefined4 *)(lVar7 + (longlong)iVar11 * 0x18);
        local_11c = *(undefined4 *)(lVar7 + 4 + (longlong)iVar11 * 0x18);
        local_128 = *(undefined4 *)(puVar1 + 1);
        local_124 = *(undefined4 *)((longlong)puVar1 + 0xc);
        cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(&local_120,&local_128);
        if (cVar3 != '\0') break;
        iVar11 = *(int *)((longlong)puVar1 + 0x14);
        *(int *)(puVar1 + 2) = iVar11;
      }
      uVar12 = (ulonglong)(int)local_118[0];
      puVar10 = local_110;
      if (local_50 != (undefined1 *)0x0) {
        puVar10 = local_50;
      }
    } while ((*(int *)(puVar10 + uVar12 * 0x18 + 0x10) != -1) ||
            (local_48 + -1 <= (int)local_118[0]));
    local_118[0] = local_118[0] + 1;
    UAISystem::FBlackboardDataToComponentsIterator::TryMoveIteratorToParentBlackboard(local_118);
  } while( true );
}



// FUNCTION 142bb0b10 UpdatePersistentKey<UBlackboardKeyType_Object> body=407 status=ok
// SIG undefined UpdatePersistentKey<UBlackboardKeyType_Object>(void)

undefined8
UBlackboardData::UpdatePersistentKey<UBlackboardKeyType_Object>(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar7 = *(int *)(param_1 + 0x40);
  uVar8 = 0;
  if (0 < iVar7) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    do {
      if (*(longlong *)(lVar2 + (longlong)(int)uVar8 * 0x18) == *param_2) {
        if ((char)(*(char *)(param_1 + 0x4c) + (char)uVar8) != -1) {
          if (*(longlong *)(param_1 + 0x30) == 0) {
            return 0;
          }
          iVar6 = (int)(uVar8 & 0xff);
          iVar4 = (iVar7 - iVar6) + -1;
          if (iVar4 != 0) {
            ::_guard_xfg_dispatch_icall_nop
                      ((void *)(lVar2 + (uVar8 & 0xff) * 0x18),
                       (void *)(lVar2 + (ulonglong)(iVar6 + 1) * 0x18),(longlong)iVar4 * 0x18);
            iVar7 = *(int *)(param_1 + 0x40);
          }
          *(int *)(param_1 + 0x40) = iVar7 + -1;
          TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(param_1 + 0x38);
          UObjectBaseUtility::MarkPackageDirty(param_1);
          PropagateKeyChangesToDerivedBlackboardAssets(param_1);
          return 0;
        }
        break;
      }
      uVar9 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar9;
    } while ((int)uVar9 < iVar7);
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    return 0;
  }
  lVar2 = *param_2;
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar5 = UBlackboardKeyType_Object::GetPrivateStaticClass();
  uVar5 = FUN_1417985e0(uVar5,param_1,0,0,0,0,0,0,0);
  iVar7 = *(int *)(param_1 + 0x40);
  *(int *)(param_1 + 0x40) = iVar7 + 1;
  if (*(int *)(param_1 + 0x44) < iVar7 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0x38,iVar7);
  }
  lVar3 = *(longlong *)(param_1 + 0x38);
  local_28 = (undefined4)lVar2;
  uStack_24 = (undefined4)((ulonglong)lVar2 >> 0x20);
  uStack_20 = (undefined4)uVar5;
  uStack_1c = (undefined4)((ulonglong)uVar5 >> 0x20);
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar7 * 0x18);
  *puVar1 = local_28;
  puVar1[1] = uStack_24;
  puVar1[2] = uStack_20;
  puVar1[3] = uStack_1c;
  *(ulonglong *)(lVar3 + 0x10 + (longlong)iVar7 * 0x18) =
       CONCAT44(uStack_14,local_18) & 0xfffffffffffffffe;
  UObjectBaseUtility::MarkPackageDirty(param_1);
  PropagateKeyChangesToDerivedBlackboardAssets(param_1);
  return uVar5;
}



// FUNCTION 142bb0cb0 FUN_142bb0cb0 body=546 status=ok
// SIG undefined FUN_142bb0cb0(void)

undefined8 * FUN_142bb0cb0(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 local_res8 [8];
  undefined4 uStack_c;
  
  FUN_1423c3200();
  *param_1 = &PTR_FUN_1457e9338;
  param_1[0x8b] = &PTR_LAB_1457e9c18;
  param_1[0xa1] = &PTR_LAB_1457e9c70;
  param_1[0xa2] = &PTR_LAB_1457e9c88;
  param_1[0xa3] = &PTR_LAB_1457e9cd0;
  param_1[0xa4] = &PTR_LAB_1457e9cf8;
  *(undefined2 *)(param_1 + 0xa5) = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  *(undefined1 *)(param_1 + 0xb2) = 0xff;
  *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 0x20;
  puVar4 = (undefined8 *)FName::FName(local_res8,L"PathFollowingComponent",1);
  uVar9 = *puVar4;
  uVar5 = FUN_142c46ed0();
  lVar6 = FUN_141752410(param_1,uVar9,uVar5,uVar5,0,0,0);
  param_1[0xa9] = lVar6;
  if (lVar6 != 0) {
    plVar1 = (longlong *)(lVar6 + 0x198);
    plVar7 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = (longlong)&PTR_FUN_1457ef660;
      FWeakObjectPtr::operator=(plVar7 + 1,param_1);
      *(undefined4 *)(plVar7 + 2) = 0x42bb2654;
      *(undefined4 *)((longlong)plVar7 + 0x14) = 1;
      *(undefined4 *)(plVar7 + 3) = 0;
      *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_c;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar7[5] = lVar8;
      *plVar7 = (longlong)&PTR_FUN_1457ef6a8;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
      (**(code **)(*plVar7 + 0x20))(plVar7,local_res8);
      iVar2 = *(int *)(lVar6 + 0x1a0);
      *(int *)(lVar6 + 0x1a0) = iVar2 + 1;
      if (*(int *)(lVar6 + 0x1a4) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
      *puVar4 = plVar7;
      *(undefined4 *)(puVar4 + 1) = 3;
    }
  }
  puVar4 = (undefined8 *)FName::FName(local_res8,"ActionsComp",1);
  uVar9 = *puVar4;
  uVar5 = UThrobber::GetPrivateStaticClass();
  uVar9 = FUN_141752410(param_1,uVar9,uVar5,uVar5,1,0,0);
  uVar3 = *(uint *)(param_1 + 0xa8);
  *(uint *)(param_1 + 0xa8) = uVar3 & 0xffffffef | 4;
  param_1[0xac] = uVar9;
  *(undefined1 *)(param_1 + 0xb2) = DAT_146690f0c;
  *(uint *)(param_1 + 0xa8) = uVar3 & 0xffffffef | 5;
  return param_1;
}



// FUNCTION 142bb0ee0 FAIMoveRequest body=68 status=ok
// SIG undefined FAIMoveRequest(void)

undefined8 * FAIMoveRequest::FAIMoveRequest(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  param_1[1] = *param_2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 1);
  param_1[3] = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffff7d | 0x7d;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0xbf800000;
  return param_1;
}



// FUNCTION 142bb0f30 FAIMoveRequest body=72 status=ok
// SIG undefined FAIMoveRequest(void)

undefined8 * FAIMoveRequest::FAIMoveRequest(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[1] = DAT_146690f20;
  *(undefined4 *)(param_1 + 2) = DAT_146690f28;
  param_1[3] = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffff7f | 0x7f;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0xbf800000;
  return param_1;
}



// FUNCTION 142bb0f80 FAIMoveRequest body=73 status=ok
// SIG undefined FAIMoveRequest(void)

undefined8 * FAIMoveRequest::FAIMoveRequest(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = DAT_146690f20;
  *(undefined4 *)(param_1 + 2) = DAT_146690f28;
  param_1[3] = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffff7c | 0x7c;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0xbf800000;
  return param_1;
}



// FUNCTION 142bb0fd0 FAIResourceLock body=20 status=ok
// SIG undefined FAIResourceLock(void)

undefined2 * FAIResourceLock::FAIResourceLock(undefined2 *param_1)

{
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  return param_1;
}



// FUNCTION 142bb0ff0 FBehaviorTreeInstanceId body=192 status=ok
// SIG undefined FBehaviorTreeInstanceId(void)

undefined8 *
FBehaviorTreeInstanceId::FBehaviorTreeInstanceId(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1 + 2,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(param_1 + 4,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[4],pvVar2,(longlong)iVar1);
  }
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  return param_1;
}



// FUNCTION 142bb10b0 FBlackboardDataToComponentsIterator body=432 status=ok
// SIG undefined FBlackboardDataToComponentsIterator(void)

undefined4 *
UAISystem::FBlackboardDataToComponentsIterator::FBlackboardDataToComponentsIterator
          (undefined4 *param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 *puVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  undefined8 local_res18;
  uint local_res20;
  uint local_res24;
  undefined4 local_48;
  undefined4 local_44;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  local_res18 = param_3;
  if (param_3 != 0) {
    do {
      FWeakObjectPtr::operator=(&local_res18,param_3);
      iVar10 = -1;
      uVar1 = (uint)local_res18;
      uVar2 = local_res18._4_4_;
      TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
      ::ConditionalRehash(param_2,(int)param_2[1] - *(int *)((longlong)param_2 + 0x34),0);
      iVar8 = -1;
      if ((int)param_2[9] != 0) {
        plVar5 = (longlong *)param_2[8];
        if ((longlong *)param_2[8] == (longlong *)0x0) {
          plVar5 = param_2 + 7;
        }
        iVar8 = *(int *)((longlong)plVar5 +
                        ((longlong)(int)(uVar1 ^ uVar2) & (longlong)(int)param_2[9] - 1U) * 4);
        do {
          iVar10 = iVar8;
          iVar8 = iVar10;
          if (iVar10 == -1) break;
          lVar6 = (longlong)iVar10;
          lVar9 = *param_2;
          iVar8 = *(int *)(lVar9 + 0x10 + lVar6 * 0x18);
          local_44 = *(undefined4 *)(lVar9 + 4 + lVar6 * 0x18);
          local_48 = *(undefined4 *)(lVar9 + lVar6 * 0x18);
          local_res20 = uVar1;
          local_res24 = uVar2;
          cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(&local_48);
        } while (cVar3 == '\0');
      }
      lVar9 = (longlong)(int)param_1[0x34];
      iVar4 = param_1[0x34] + 1;
      param_1[0x34] = iVar4;
      if ((int)param_1[0x35] < iVar4) {
        TArray<FCompactPose,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(param_1 + 2);
      }
      puVar7 = *(undefined4 **)(param_1 + 0x32);
      if (*(undefined4 **)(param_1 + 0x32) == (undefined4 *)0x0) {
        puVar7 = param_1 + 2;
      }
      *(longlong **)(puVar7 + lVar9 * 6) = param_2;
      puVar7[lVar9 * 6 + 2] = uVar1;
      puVar7[lVar9 * 6 + 3] = uVar2;
      puVar7[lVar9 * 6 + 4] = iVar10;
      puVar7[lVar9 * 6 + 5] = iVar8;
      param_3 = *(longlong *)(param_3 + 0x30);
    } while (param_3 != 0);
  }
  TryMoveIteratorToParentBlackboard(param_1);
  return param_1;
}



// FUNCTION 142bb1260 FUN_142bb1260 body=603 status=ok
// SIG undefined FUN_142bb1260(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142bb1260(undefined8 *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 local_res8;
  
  FUN_142220f00();
  *param_1 = &PTR__scalar_deleting_destructor__1457eb608;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x92) = 3;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) != 0) {
    uVar4 = FCommandLine::Get();
    cVar2 = FParse::Param(uVar4,L"FixedSeed");
    if (cVar2 == '\0') {
      plVar5 = (longlong *)FDateTime::Now(&local_res8);
      lVar3 = *plVar5;
      lVar6 = SUB168(SEXT816(-0x7ffffffefffffffd) * SEXT816(lVar3),8) + lVar3;
      _DAT_146b2c4f8 = (int)lVar3 + ((int)(lVar6 >> 0x1e) - (int)(lVar6 >> 0x3f)) * -0x7fffffff;
      DAT_146b2c4fc = _DAT_146b2c4f8;
    }
    return param_1;
  }
  puVar8 = (undefined8 *)param_1[4];
  if (puVar8 != (undefined8 *)0x0) {
    lVar3 = FUN_142a2f930();
    if ((*(int *)(puVar8[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(puVar8[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142bb1359;
  }
  puVar8 = (undefined8 *)0x0;
LAB_142bb1359:
  puVar7 = param_1;
  if (puVar8 != (undefined8 *)0x0) {
    puVar7 = puVar8;
  }
  FUN_1417846f0(puVar7,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  local_res8 = 0;
  uVar4 = UBehaviorTreeManager::GetPrivateStaticClass();
  uVar4 = FUN_1417985e0(uVar4,puVar7,0,0,0,0,0,0,0);
  param_1[0x13] = uVar4;
  FUN_1417846f0(puVar7,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  local_res8 = 0;
  uVar4 = FUN_142c42420();
  uVar4 = FUN_1417985e0(uVar4,puVar7,0,0,0,0,0,0,0);
  param_1[0x14] = uVar4;
  FUN_1417846f0(puVar7,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  local_res8 = 0;
  uVar4 = UNavLocalGridManager::GetPrivateStaticClass();
  uVar4 = FUN_1417985e0(uVar4,puVar7,0,0,0,0,0,0,0);
  param_1[0x19] = uVar4;
  return param_1;
}



// FUNCTION 142bb14c0 UBTAuxiliaryNode body=80 status=ok
// SIG undefined UBTAuxiliaryNode(void)

undefined8 * UBTAuxiliaryNode::UBTAuxiliaryNode(undefined8 *param_1)

{
  FUN_141781840();
  param_1[6] = 0;
  param_1[7] = 0;
  *(byte *)((longlong)param_1 + 0x55) = *(byte *)((longlong)param_1 + 0x55) & 0xf8;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf0;
  param_1[9] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1457ece00;
  param_1[5] = &PTR_LAB_1457ed0e0;
  *(undefined1 *)((longlong)param_1 + 0x59) = 0xff;
  return param_1;
}



// FUNCTION 142bb1510 UBTCompositeNode body=248 status=ok
// SIG undefined UBTCompositeNode(void)

undefined8 * UBTCompositeNode::UBTCompositeNode(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_18;
  undefined8 local_10;
  
  FUN_141781840();
  local_10 = 0x11;
  param_1[6] = 0;
  plVar1 = param_1 + 6;
  param_1[7] = 0;
  *(byte *)((longlong)param_1 + 0x55) = *(byte *)((longlong)param_1 + 0x55) & 0xf8;
  *param_1 = &PTR_FUN_1457ec280;
  param_1[9] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  param_1[5] = &PTR_LAB_1457ec590;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  lVar2 = local_18;
  FGenericPlatformString::Convert<char,wchar_t>(local_18,0x11,"UnknownComposite",0x11,0x3f);
  if (plVar1 == &local_18) {
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar2;
    *(undefined4 *)(param_1 + 7) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_10._4_4_;
  }
  *(uint *)(param_1 + 0x11) = *(uint *)(param_1 + 0x11) & 0xffffff80;
  return param_1;
}



// FUNCTION 142bb1610 UBTDecorator body=98 status=ok
// SIG undefined UBTDecorator(void)

undefined8 * UBTDecorator::UBTDecorator(undefined8 *param_1)

{
  FUN_141781840();
  param_1[6] = 0;
  param_1[7] = 0;
  *(byte *)((longlong)param_1 + 0x55) = *(byte *)((longlong)param_1 + 0x55) & 0xf8;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf0;
  param_1[9] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1457ed128;
  param_1[5] = &PTR_LAB_1440747b8;
  *(undefined1 *)((longlong)param_1 + 0x59) = 0xff;
  *(undefined1 *)((longlong)param_1 + 100) = 0;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffff47 | 0x47;
  return param_1;
}



// FUNCTION 142bb1680 UBTNode body=72 status=ok
// SIG undefined UBTNode(void)

undefined8 * UBTNode::UBTNode(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1457eafd8;
  param_1[5] = &PTR_LAB_1457eb2a0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(byte *)((longlong)param_1 + 0x55) = *(byte *)((longlong)param_1 + 0x55) & 0xf8;
  param_1[9] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  return param_1;
}



// FUNCTION 142bb16d0 UBTService body=110 status=ok
// SIG undefined UBTService(void)

undefined8 * UBTService::UBTService(undefined8 *param_1)

{
  FUN_141781840();
  param_1[6] = 0;
  param_1[7] = 0;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfc;
  *(byte *)((longlong)param_1 + 0x55) = *(byte *)((longlong)param_1 + 0x55) & 0xf8;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0xc;
  param_1[9] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1457ed430;
  param_1[5] = &PTR_LAB_1441d5298;
  *(undefined1 *)((longlong)param_1 + 0x59) = 0xff;
  *(undefined4 *)(param_1 + 0xc) = 0x3f000000;
  *(uint *)(param_1 + 0xd) = *(uint *)(param_1 + 0xd) & 0xfffffffc | 4;
  *(undefined4 *)((longlong)param_1 + 100) = 0x3dcccccd;
  return param_1;
}



// FUNCTION 142bb1740 UBTTaskNode body=84 status=ok
// SIG undefined UBTTaskNode(void)

undefined8 * UBTTaskNode::UBTTaskNode(undefined8 *param_1)

{
  FUN_141781840();
  param_1[6] = 0;
  param_1[7] = 0;
  *(byte *)((longlong)param_1 + 0x55) = *(byte *)((longlong)param_1 + 0x55) & 0xf8;
  *param_1 = &PTR__scalar_deleting_destructor__1457ecac8;
  param_1[5] = &PTR_LAB_1457ecdb8;
  param_1[9] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(uint *)(param_1 + 0xd) = *(uint *)(param_1 + 0xd) & 0xfffffff8;
  return param_1;
}



// FUNCTION 142bb17a0 UBehaviorTree body=51 status=ok
// SIG undefined UBehaviorTree(void)

undefined8 * UBehaviorTree::UBehaviorTree(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1457ec5d8;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 142bb17e0 FUN_142bb17e0 body=376 status=ok
// SIG undefined FUN_142bb17e0(void)

undefined8 * FUN_142bb17e0(undefined8 *param_1)

{
  FUN_142bd5d50();
  *param_1 = &PTR_FUN_1457eab10;
  param_1[5] = &PTR_LAB_1457eaf78;
  param_1[0x2f] = &PTR_LAB_1457eafa8;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = param_1;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0xffffffffffffffff;
  *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xfffffff8;
  *(undefined4 *)((longlong)param_1 + 0x23c) = 0xffffffff;
  param_1[0x49] = 0xffffffffffffffff;
  *(byte *)((longlong)param_1 + 0x25b) = *(byte *)((longlong)param_1 + 0x25b) & 0xfc;
  param_1[0x4a] = 0;
  *(uint *)(param_1 + 0x4d) = *(uint *)(param_1 + 0x4d) & 0xfffffffc;
  param_1[0x4c] = 0;
  *(byte *)((longlong)param_1 + 0x27c) = *(byte *)((longlong)param_1 + 0x27c) & 0xfe;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 1;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x304) = 0;
  param_1[0x62] = 0;
  *(undefined4 *)(param_1 + 99) = 0;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 2;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
  *(byte *)((longlong)param_1 + 0x323) = *(byte *)((longlong)param_1 + 0x323) & 0x90;
  *(undefined2 *)(param_1 + 100) = 0;
  *(undefined1 *)((longlong)param_1 + 0x322) = 0;
  return param_1;
}



// FUNCTION 142bb1960 UBehaviorTreeManager body=58 status=ok
// SIG undefined UBehaviorTreeManager(void)

undefined8 * UBehaviorTreeManager::UBehaviorTreeManager(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1457ec850;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 5) = 100;
  return param_1;
}



// FUNCTION 142bb19a0 FUN_142bb19a0 body=248 status=ok
// SIG undefined FUN_142bb19a0(void)

undefined8 * FUN_142bb19a0(undefined8 *param_1)

{
  FUN_142326e40();
  *param_1 = &PTR_FUN_1457ebb38;
  param_1[5] = &PTR_LAB_1457ebf30;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0xffffffff;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined4 *)((longlong)param_1 + 0x23c) = 0;
  *(undefined4 *)(param_1 + 0x47) = 0xffffffff;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfd;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
  *(uint *)(param_1 + 0x4d) = *(uint *)(param_1 + 0x4d) & 0xfffffffc;
  return param_1;
}



// FUNCTION 142bb1aa0 UBlackboardData body=43 status=ok
// SIG undefined UBlackboardData(void)

undefined8 * UBlackboardData::UBlackboardData(undefined8 *param_1)

{
  UDataAsset::UDataAsset();
  *param_1 = &PTR__scalar_deleting_destructor__1457eb8c0;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 142bb1ad0 UBlackboardKeyType body=46 status=ok
// SIG undefined UBlackboardKeyType(void)

undefined8 * UBlackboardKeyType::UBlackboardKeyType(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1457eb2e8;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2a) = 0;
  *(byte *)((longlong)param_1 + 0x2b) = *(byte *)((longlong)param_1 + 0x2b) & 0xfc;
  return param_1;
}



// FUNCTION 142bb1b00 UBlackboardKeyType_Bool body=54 status=ok
// SIG undefined UBlackboardKeyType_Bool(void)

undefined8 * UBlackboardKeyType_Bool::UBlackboardKeyType_Bool(undefined8 *param_1)

{
  FUN_141781840();
  *(undefined1 *)((longlong)param_1 + 0x2a) = 0;
  *(byte *)((longlong)param_1 + 0x2b) = *(byte *)((longlong)param_1 + 0x2b) & 0xfc;
  *param_1 = &PTR_FUN_1457ee3a0;
  *(undefined2 *)(param_1 + 5) = 1;
  *(undefined1 *)((longlong)param_1 + 0x2a) = 0;
  return param_1;
}



// FUNCTION 142bb1b40 FUN_142bb1b40 body=63 status=ok
// SIG undefined FUN_142bb1b40(void)

undefined8 * FUN_142bb1b40(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_141781840();
  *(undefined1 *)((longlong)param_1 + 0x2a) = 0;
  *(byte *)((longlong)param_1 + 0x2b) = *(byte *)((longlong)param_1 + 0x2b) & 0xfc;
  *param_1 = &PTR_FUN_1457ee6c0;
  *(undefined2 *)(param_1 + 5) = 8;
  uVar1 = UObject::GetPrivateStaticClass();
  param_1[6] = uVar1;
  *(undefined1 *)((longlong)param_1 + 0x2a) = 0;
  return param_1;
}



// FUNCTION 142bb1b80 UBlackboardKeyType_Enum body=63 status=ok
// SIG undefined UBlackboardKeyType_Enum(void)

undefined8 * UBlackboardKeyType_Enum::UBlackboardKeyType_Enum(undefined8 *param_1)

{
  FUN_141781840();
  *(undefined1 *)((longlong)param_1 + 0x2a) = 0;
  *(byte *)((longlong)param_1 + 0x2b) = *(byte *)((longlong)param_1 + 0x2b) & 0xfc;
  *param_1 = &PTR__scalar_deleting_destructor__1457ed720;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 5) = 1;
  *(undefined1 *)((longlong)param_1 + 0x2a) = 1;
  return param_1;
}



// FUNCTION 142bb1bc0 FUN_142bb1bc0 body=54 status=ok
// SIG undefined FUN_142bb1bc0(void)

undefined8 * FUN_142bb1bc0(undefined8 *param_1)

{
  FUN_141781840();
  *(undefined1 *)((longlong)param_1 + 0x2a) = 0;
  *(byte *)((longlong)param_1 + 0x2b) = *(byte *)((longlong)param_1 + 0x2b) & 0xfc;
  *param_1 = &PTR_FUN_1457ee9e0;
  *(undefined2 *)(param_1 + 5) = 4;
  *(undefined1 *)((longlong)param_1 + 0x2a) = 1;
  return param_1;
}



// FUNCTION 142bb1c00 FUN_142bb1c00 body=54 status=ok
// SIG undefined FUN_142bb1c00(void)

undefined8 * FUN_142bb1c00(undefined8 *param_1)

{
  FUN_141781840();
  *(undefined1 *)((longlong)param_1 + 0x2a) = 0;
  *(byte *)((longlong)param_1 + 0x2b) = *(byte *)((longlong)param_1 + 0x2b) & 0xfc;
  *param_1 = &PTR_FUN_1457eed00;
  *(undefined2 *)(param_1 + 5) = 4;
  *(undefined1 *)((longlong)param_1 + 0x2a) = 1;
  return param_1;
}



// FUNCTION 142bb1c40 FUN_142bb1c40 body=60 status=ok
// SIG undefined FUN_142bb1c40(void)

undefined8 * FUN_142bb1c40(undefined8 *param_1)

{
  FUN_141781840();
  *(undefined1 *)((longlong)param_1 + 0x2a) = 0;
  *(byte *)((longlong)param_1 + 0x2b) = *(byte *)((longlong)param_1 + 0x2b) & 0xfc;
  *param_1 = &PTR_FUN_1457ef020;
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 5) = 8;
  *(undefined1 *)((longlong)param_1 + 0x2a) = 2;
  return param_1;
}



// FUNCTION 142bb1c80 UBlackboardKeyType_NativeEnum body=54 status=ok
// SIG undefined UBlackboardKeyType_NativeEnum(void)

undefined8 * UBlackboardKeyType_NativeEnum::UBlackboardKeyType_NativeEnum(undefined8 *param_1)

{
  FUN_141781840();
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2a) = 0;
  *(byte *)((longlong)param_1 + 0x2b) = *(byte *)((longlong)param_1 + 0x2b) & 0xfc;
  *param_1 = &PTR_FUN_1457eda40;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 142bb1cc0 FUN_142bb1cc0 body=63 status=ok
// SIG undefined FUN_142bb1cc0(void)

undefined8 * FUN_142bb1cc0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_141781840();
  *(undefined1 *)((longlong)param_1 + 0x2a) = 0;
  *(byte *)((longlong)param_1 + 0x2b) = *(byte *)((longlong)param_1 + 0x2b) & 0xfc;
  *param_1 = &PTR_FUN_1457ebf60;
  *(undefined2 *)(param_1 + 5) = 8;
  uVar1 = UObject::GetPrivateStaticClass();
  param_1[6] = uVar1;
  *(undefined1 *)((longlong)param_1 + 0x2a) = 0;
  return param_1;
}



// FUNCTION 142bb1d00 FUN_142bb1d00 body=54 status=ok
// SIG undefined FUN_142bb1d00(void)

undefined8 * FUN_142bb1d00(undefined8 *param_1)

{
  FUN_141781840();
  *(undefined1 *)((longlong)param_1 + 0x2a) = 0;
  *(byte *)((longlong)param_1 + 0x2b) = *(byte *)((longlong)param_1 + 0x2b) & 0xfc;
  *param_1 = &PTR_FUN_1457ee080;
  *(undefined2 *)(param_1 + 5) = 0xc;
  *(undefined1 *)((longlong)param_1 + 0x2a) = 0;
  return param_1;
}



// FUNCTION 142bb1d40 FUN_142bb1d40 body=71 status=ok
// SIG undefined FUN_142bb1d40(void)

undefined8 * FUN_142bb1d40(undefined8 *param_1)

{
  FUN_141781840();
  *(undefined1 *)((longlong)param_1 + 0x2a) = 0;
  *(byte *)((longlong)param_1 + 0x2b) = *(byte *)((longlong)param_1 + 0x2b) & 0xfc;
  *param_1 = &PTR__scalar_deleting_destructor__1457ef340;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(byte *)((longlong)param_1 + 0x2b) = *(byte *)((longlong)param_1 + 0x2b) | 2;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2a) = 2;
  return param_1;
}



// FUNCTION 142bb1d90 FUN_142bb1d90 body=54 status=ok
// SIG undefined FUN_142bb1d90(void)

undefined8 * FUN_142bb1d90(undefined8 *param_1)

{
  FUN_141781840();
  *(undefined1 *)((longlong)param_1 + 0x2a) = 0;
  *(byte *)((longlong)param_1 + 0x2b) = *(byte *)((longlong)param_1 + 0x2b) & 0xfc;
  *param_1 = &PTR_FUN_1457edd60;
  *(undefined2 *)(param_1 + 5) = 0xc;
  *(undefined1 *)((longlong)param_1 + 0x2a) = 0;
  return param_1;
}



// FUNCTION 142bb1dd0 UPawnAction body=93 status=ok
// SIG undefined UPawnAction(void)

undefined8 * UPawnAction::UPawnAction(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1457e8c48;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0xffffffff;
  *(uint *)(param_1 + 0x12) = *(uint *)(param_1 + 0x12) & 0xfffffffb | 1;
  return param_1;
}



// FUNCTION 142bb1e30 UPawnAction_BlueprintBase body=186 status=ok
// SIG undefined UPawnAction_BlueprintBase(void)

undefined8 * UPawnAction_BlueprintBase::UPawnAction_BlueprintBase(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  
  FUN_141781840();
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  uVar4 = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0xffffffff;
  *(uint *)(param_1 + 0x12) = *(uint *)(param_1 + 0x12) & 0xfffffffb | 1;
  *param_1 = &PTR__scalar_deleting_destructor__1457e9d10;
  lVar1 = GetPrivateStaticClass();
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ActionTick",1);
  lVar3 = FUN_141719c60(param_1[2],*puVar2,1);
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x20) != lVar1)) {
    uVar4 = 8;
  }
  *(uint *)(param_1 + 0x12) = *(uint *)(param_1 + 0x12) & 0xfffffff7;
  *(uint *)(param_1 + 0x12) = *(uint *)(param_1 + 0x12) | uVar4;
  return param_1;
}



// FUNCTION 142bb1ef0 UPawnAction_Move body=198 status=ok
// SIG undefined UPawnAction_Move(void)

undefined8 * UPawnAction_Move::UPawnAction_Move(undefined8 *param_1)

{
  FUN_141781840();
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0xffffffff;
  *(uint *)(param_1 + 0x12) = *(uint *)(param_1 + 0x12) & 0xfffffffb | 1;
  *param_1 = &PTR__scalar_deleting_destructor__1457e9fd8;
  param_1[0x14] = DAT_146690f20;
  *(undefined4 *)(param_1 + 0x15) = DAT_146690f28;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x41f00000;
  param_1[0x16] = 0;
  *(uint *)(param_1 + 0x17) = *(uint *)(param_1 + 0x17) & 0xffffffaf | 0x2e;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0xc;
  return param_1;
}



// FUNCTION 142bb1fc0 UPawnAction_Repeat body=106 status=ok
// SIG undefined UPawnAction_Repeat(void)

undefined8 * UPawnAction_Repeat::UPawnAction_Repeat(undefined8 *param_1)

{
  FUN_141781840();
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0xffffffff;
  *(uint *)(param_1 + 0x12) = *(uint *)(param_1 + 0x12) & 0xfffffffb | 1;
  *param_1 = &PTR__scalar_deleting_destructor__1457ea2b8;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x15) = 1;
  return param_1;
}



// FUNCTION 142bb2030 UPawnAction_Sequence body=113 status=ok
// SIG undefined UPawnAction_Sequence(void)

undefined8 * UPawnAction_Sequence::UPawnAction_Sequence(undefined8 *param_1)

{
  FUN_141781840();
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0xffffffff;
  *(uint *)(param_1 + 0x12) = *(uint *)(param_1 + 0x12) & 0xfffffffb | 1;
  *param_1 = &PTR__scalar_deleting_destructor__1457ea580;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  return param_1;
}



// FUNCTION 142bb20b0 UPawnAction_Wait body=107 status=ok
// SIG undefined UPawnAction_Wait(void)

undefined8 * UPawnAction_Wait::UPawnAction_Wait(undefined8 *param_1)

{
  FUN_141781840();
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0xffffffff;
  *(uint *)(param_1 + 0x12) = *(uint *)(param_1 + 0x12) & 0xfffffffb | 1;
  *param_1 = &PTR__scalar_deleting_destructor__1457ea848;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  return param_1;
}



// FUNCTION 142bb2120 FUN_142bb2120 body=171 status=ok
// SIG undefined FUN_142bb2120(void)

undefined8 * FUN_142bb2120(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  FUN_142326e40();
  plVar1 = param_1 + 0x30;
  *param_1 = &PTR_FUN_1457e8f10;
  param_1[5] = &PTR_LAB_1457e9308;
  *plVar1 = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 6;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 2;
  *(uint *)(param_1 + 0x35) = *(uint *)(param_1 + 0x35) & 0xfffffffe;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  lVar4 = (longlong)*(int *)(param_1 + 0x31);
  iVar3 = *(int *)(param_1 + 0x31) + 5;
  *(int *)(param_1 + 0x31) = iVar3;
  if (*(int *)((longlong)param_1 + 0x18c) < iVar3) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  lVar2 = *plVar1;
  *(undefined8 *)(lVar2 + lVar4 * 8) = 0;
  *(undefined8 *)(lVar2 + 8 + lVar4 * 8) = 0;
  *(undefined8 *)(lVar2 + 0x10 + lVar4 * 8) = 0;
  *(undefined8 *)(lVar2 + 0x18 + lVar4 * 8) = 0;
  *(undefined8 *)(lVar2 + 0x20 + lVar4 * 8) = 0;
  return param_1;
}



// FUNCTION 142bb21d0 FUN_142bb21d0 body=132 status=ok
// SIG undefined FUN_142bb21d0(void)

void FUN_142bb21d0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x38);
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(plVar2 + 3);
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      if (plVar2[-2] != 0) {
        FMemory::Free();
      }
      if (plVar2[-4] != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0xc;
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



// FUNCTION 142bb2260 operator= body=171 status=ok
// SIG undefined operator=(void)

longlong *
TArray<FBehaviorTreeSearchUpdate,FDefaultAllocator>::operator=(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  
  if (param_1 != param_2) {
    lVar1 = *param_2;
    iVar4 = (int)param_2[1];
    *(int *)(param_1 + 1) = iVar4;
    if ((iVar4 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      return param_1;
    }
    TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_1,iVar4);
    if (iVar4 != 0) {
      puVar2 = (undefined8 *)*param_1;
      puVar3 = (undefined2 *)(lVar1 + 0x10);
      do {
        *puVar2 = *(undefined8 *)(puVar3 + -8);
        puVar2[1] = *(undefined8 *)(puVar3 + -4);
        *(undefined2 *)(puVar2 + 2) = *puVar3;
        *(undefined1 *)((longlong)puVar2 + 0x12) = *(undefined1 *)(puVar3 + 1);
        *(byte *)((longlong)puVar2 + 0x13) =
             *(byte *)((longlong)puVar2 + 0x13) ^
             (*(byte *)((longlong)puVar3 + 3) ^ *(byte *)((longlong)puVar2 + 0x13)) & 1;
        iVar4 = iVar4 + -1;
        puVar2 = puVar2 + 3;
        puVar3 = puVar3 + 0xc;
      } while (iVar4 != 0);
    }
  }
  return param_1;
}



// FUNCTION 142bb2310 FUN_142bb2310 body=347 status=ok
// SIG undefined FUN_142bb2310(void)

undefined8 * FUN_142bb2310(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  void *pvVar4;
  longlong *plVar5;
  longlong lVar6;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  puVar1 = param_1 + 3;
  param_1[2] = param_2[2];
  if (puVar1 != param_2 + 3) {
    iVar3 = *(int *)(param_2 + 4);
    pvVar4 = (void *)param_2[3];
    *(int *)(param_1 + 4) = iVar3;
    if ((iVar3 == 0) && (*(int *)((longlong)param_1 + 0x24) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x24) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar3);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar4,(longlong)iVar3 << 3);
    }
  }
  puVar1 = param_1 + 5;
  if (puVar1 != param_2 + 5) {
    iVar3 = *(int *)(param_2 + 6);
    pvVar4 = (void *)param_2[5];
    *(int *)(param_1 + 6) = iVar3;
    if ((iVar3 == 0) && (*(int *)((longlong)param_1 + 0x34) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar1,iVar3);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar4,(longlong)iVar3 << 4);
    }
  }
  TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=(param_1 + 7,param_2 + 7);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  plVar2 = param_1 + 10;
  *(undefined1 *)((longlong)param_1 + 0x49) = *(undefined1 *)((longlong)param_2 + 0x49);
  if (param_2 + 10 != plVar2) {
    if ((*(int *)(param_2 + 0xb) != 0) &&
       (plVar5 = (longlong *)param_2[10], plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 0x30))(plVar5,plVar2);
      return param_1;
    }
    if ((*(int *)(param_1 + 0xb) != 0) && (plVar5 = (longlong *)*plVar2, plVar5 != (longlong *)0x0))
    {
      (**(code **)(*plVar5 + 0x28))(plVar5,0);
      if (*plVar2 != 0) {
        lVar6 = FMemory::Realloc(*plVar2,0,0);
        *plVar2 = lVar6;
      }
      *(undefined4 *)(param_1 + 0xb) = 0;
    }
  }
  return param_1;
}



// FUNCTION 142bb2470 operator= body=483 status=ok
// SIG undefined operator=(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FPathFindingQuery::operator=(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  longlong *plStack_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  param_1[4] = param_2[4];
  *(undefined8 *)(param_1 + 5) = *(undefined8 *)(param_2 + 5);
  puVar1 = (undefined8 *)(param_1 + 8);
  param_1[7] = param_2[7];
  uStack_70 = *(longlong **)(param_2 + 10);
  local_78 = *(undefined8 *)(param_2 + 8);
  if (uStack_70 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_70 + 1) = (int)uStack_70[1] + 1;
    UNLOCK();
  }
  if (&local_78 != puVar1) {
    local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    uVar6 = *puVar1;
    plVar5 = *(longlong **)(param_1 + 10);
    local_40 = (undefined4)local_78;
    uStack_3c = local_78._4_4_;
    uStack_38 = (undefined4)uStack_70;
    uStack_34 = uStack_70._4_4_;
    *(undefined4 *)puVar1 = (undefined4)local_78;
    param_1[9] = local_78._4_4_;
    param_1[10] = (undefined4)uStack_70;
    param_1[0xb] = uStack_70._4_4_;
    local_78 = uVar6;
    uStack_70 = plVar5;
  }
  plVar5 = uStack_70;
  if (uStack_70 != (longlong *)0x0) {
    LOCK();
    plVar2 = uStack_70 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*uStack_70)(uStack_70);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*uStack_70 + 8))(uStack_70,1);
      }
    }
  }
  puVar1 = (undefined8 *)(param_1 + 0x10);
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_1[0xd] ^ (param_2[0xd] ^ param_1[0xd]) & 1;
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  plVar5 = *(longlong **)(param_2 + 0x12);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_68 = uVar6;
  plStack_60 = plVar5;
  if (&local_68 != puVar1) {
    local_68 = *puVar1;
    plStack_60 = *(longlong **)(param_1 + 0x12);
    *puVar1 = uVar6;
    *(longlong **)(param_1 + 0x12) = plVar5;
    local_30 = uVar6;
    plStack_28 = plVar5;
  }
  plVar5 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_60 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_60 + 8))(plStack_60,1);
      }
    }
  }
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  local_58 = *(undefined8 *)(param_2 + 0x1a);
  FString::FString(local_50,param_2 + 0x1c);
  FSoftObjectPath::operator=(param_1 + 0x1a,&local_58);
  return param_1;
}



// FUNCTION 142bb2710 FUN_142bb2710 body=213 status=ok
// SIG undefined FUN_142bb2710(void)

longlong FUN_142bb2710(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x580) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x530) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x520) = &PTR_FUN_1440732c8;
  *(undefined ***)(param_1 + 0x518) = &PTR_FUN_14407f310;
  *(undefined ***)(param_1 + 0x510) = &PTR_FUN_144055190;
  *(undefined ***)(param_1 + 0x508) = &PTR_FUN_14407f2f8;
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x4f0);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x4d8);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x4a8);
  if (*(longlong *)(param_1 + 0x470) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_14407ef78;
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x598);
  }
  return param_1;
}



// FUNCTION 142bb27f0 `scalar_deleting_destructor' body=174 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * UAISystem::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (param_1[0x22] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x1a);
  if (param_1[0x16] != 0) {
    FMemory::Free();
  }
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__scalar_deleting_destructor__14407f360;
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x128);
  }
  return param_1;
}



// FUNCTION 142bb28a0 `scalar_deleting_destructor' body=81 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UBTAuxiliaryNode::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 142bb2900 FUN_142bb2900 body=113 status=ok
// SIG undefined FUN_142bb2900(void)

longlong FUN_142bb2900(longlong param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x78);
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  TArray<FMovieSceneBinding,FDefaultAllocator>::~TArray<FMovieSceneBinding,FDefaultAllocator>
            (param_1 + 0x58);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 142bb2980 `scalar_deleting_destructor' body=81 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UBTNode::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 142bb29e0 `scalar_deleting_destructor' body=95 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UBTTaskNode::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 142bb2a40 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UBehaviorTree::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 142bb2aa0 FUN_142bb2aa0 body=284 status=ok
// SIG undefined FUN_142bb2aa0(void)

longlong FUN_142bb2aa0(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x318) = 0;
  if (*(longlong *)(param_1 + 0x310) != 0) {
    FMemory::Free();
  }
  FUN_1405fcf60(param_1 + 0x2d0);
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  if (*(longlong *)(param_1 + 0x2c0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,TSharedPtr<FUdpReassembledMessage,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<int,TSharedPtr<FUdpReassembledMessage,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x280);
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x210) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    FMemory::Free();
  }
  TArray<FMovieSceneEventData,FDefaultAllocator>::~TArray<FMovieSceneEventData,FDefaultAllocator>
            (param_1 + 0x1e8);
  FUN_142bb21d0(param_1 + 0x1d8);
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_144063ad8;
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x328);
  }
  return param_1;
}



// FUNCTION 142bb2bc0 FUN_142bb2bc0 body=229 status=ok
// SIG undefined FUN_142bb2bc0(void)

longlong FUN_142bb2bc0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x270) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 600) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x250) = 0;
  if (*(longlong *)(param_1 + 0x248) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x208);
  *(undefined4 *)(param_1 + 0x200) = 0;
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x1b8);
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x280);
  }
  return param_1;
}



// FUNCTION 142bb2cb0 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UPawnAction::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x68);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x50);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 142bb2d00 `scalar_deleting_destructor' body=153 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UPawnAction_Move::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x68);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x50);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 142bb2da0 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UPawnAction_Repeat::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x68);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x50);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 142bb2df0 `scalar_deleting_destructor' body=91 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UPawnAction_Sequence::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x68);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x50);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 142bb2e50 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UPawnAction_Wait::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x68);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x50);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 142bb2ea0 FUN_142bb2ea0 body=90 status=ok
// SIG undefined FUN_142bb2ea0(void)

longlong FUN_142bb2ea0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 400) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1b0);
  }
  return param_1;
}



// FUNCTION 142bb2f10 FUN_142bb2f10 body=216 status=ok
// SIG undefined FUN_142bb2f10(void)

void FUN_142bb2f10(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong local_28 [4];
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar3 = FUN_142a2f930();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (*(longlong *)(lVar1 + 400) != 0)) {
      plVar4 = (longlong *)FUN_14244f490(*(longlong *)(lVar1 + 400),0);
      if (plVar4 != (longlong *)0x0) {
        local_28[1] = 0x8f;
        local_28[0] = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
        FGenericPlatformString::Memcpy
                  (local_28[0],
                   L"log lognavigation verbose | log logpathfollowing verbose | log LogCharacter verbose | log LogBehaviorTree verbose | log LogPawnAction verbose|"
                   ,0x11e);
        (**(code **)(*plVar4 + 0xd28))(plVar4,local_28 + 2,local_28,1);
        if (local_28[2] != 0) {
          FMemory::Free();
        }
        if (local_28[0] != 0) {
          FMemory::Free();
        }
      }
    }
  }
  return;
}



// FUNCTION 142bb2ff0 FUN_142bb2ff0 body=214 status=ok
// SIG undefined FUN_142bb2ff0(void)

int FUN_142bb2ff0(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0x84);
  if ((iVar1 != 1) && (param_2 != 0)) {
    return iVar1;
  }
  iVar3 = 2;
  iVar2 = 4;
  if (iVar1 < 2) {
    *(undefined4 *)((longlong)param_1 + 0x84) = 2;
  }
  if (param_1[5] != 0) {
    iVar2 = FUN_142bb2ff0();
    if (iVar2 == 1) {
      iVar2 = 4;
    }
  }
  if (param_2 == 0) {
    iVar3 = (**(code **)(*param_1 + 0x2c0))(param_1,0);
    if (iVar3 == 4) goto LAB_142bb3069;
  }
  else if (1 < iVar2) {
    if (iVar2 < 4) goto LAB_142bb3069;
    if (iVar2 == 4) {
      if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
        iVar3 = (**(code **)(*param_1 + 0x2c0))(param_1,param_2);
      }
      goto LAB_142bb3069;
    }
  }
  iVar3 = 4;
LAB_142bb3069:
  if ((*(int *)((longlong)param_1 + 0x84) < iVar3) &&
     (*(int *)((longlong)param_1 + 0x84) = iVar3, iVar3 == 4)) {
    FUN_142bca010(param_1,3);
  }
  return iVar3;
}



// FUNCTION 142bb30d0 FUN_142bb30d0 body=358 status=ok
// SIG undefined FUN_142bb30d0(void)

int FUN_142bb30d0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar4 = *(int *)((longlong)param_2 + 0x84);
  if (iVar4 != 1) goto LAB_142bb3165;
  iVar4 = 2;
  *(undefined4 *)((longlong)param_2 + 0x84) = 2;
  if ((param_2[5] == 0) || (iVar2 = FUN_142bb2ff0(param_2[5],1), iVar2 == 1)) {
LAB_142bb312b:
    if ((*(byte *)(param_2 + 0x12) & 1) == 0) {
      iVar4 = (**(code **)(*param_2 + 0x2c0))(param_2,1);
    }
  }
  else {
    if (1 < iVar2) {
      if (iVar2 < 4) goto LAB_142bb3145;
      if (iVar2 == 4) goto LAB_142bb312b;
    }
    iVar4 = 4;
  }
LAB_142bb3145:
  if ((*(int *)((longlong)param_2 + 0x84) < iVar4) &&
     (*(int *)((longlong)param_2 + 0x84) = iVar4, iVar4 == 4)) {
    FUN_142bca010(param_2,3);
  }
LAB_142bb3165:
  if (iVar4 != 0) {
    return iVar4;
  }
  iVar4 = *(int *)(param_1 + 0x198) + -1;
  if (-1 < iVar4) {
    lVar5 = (longlong)iVar4 * 0x18;
    lVar6 = lVar5;
    do {
      lVar1 = *(longlong *)(param_1 + 400);
      if (*(longlong **)(lVar5 + lVar1) == param_2) {
        iVar2 = *(int *)(param_1 + 0x198);
        iVar3 = (iVar2 - iVar4) + -1;
        if (0 < iVar3) {
          iVar3 = 1;
        }
        if (iVar3 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar6 + lVar1),(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x18),
                     (longlong)iVar3 * 0x18);
          iVar2 = *(int *)(param_1 + 0x198);
        }
        *(int *)(param_1 + 0x198) = iVar2 + -1;
      }
      lVar6 = lVar6 + -0x18;
      lVar5 = lVar5 + -0x18;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  return 0;
}



// FUNCTION 142bb3240 FUN_142bb3240 body=327 status=ok
// SIG undefined FUN_142bb3240(void)

int FUN_142bb3240(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar4 = 0;
  if (param_3 == 5) {
    iVar5 = 0;
    do {
      iVar2 = FUN_142bb3240(param_1,param_2,iVar5);
      iVar4 = iVar4 + iVar2;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 5);
    return iVar4;
  }
  for (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x180) + (longlong)param_3 * 8); lVar7 != 0;
      lVar7 = *(longlong *)(lVar7 + 0x30)) {
    if (*(longlong *)(lVar7 + 0x40) == param_2) {
      FUN_142bc3e30(param_1,lVar7,2);
      iVar4 = iVar4 + 1;
    }
  }
  iVar5 = *(int *)(param_1 + 0x198) + -1;
  if (-1 < iVar5) {
    lVar6 = (longlong)iVar5 * 0x18;
    lVar7 = lVar6;
    do {
      lVar1 = *(longlong *)(param_1 + 400);
      if ((((*(int *)(lVar6 + 0xc + lVar1) == param_3) && (*(int *)(lVar6 + 8 + lVar1) == 5)) &&
          (*(longlong *)(lVar6 + lVar1) != 0)) &&
         (*(longlong *)(*(longlong *)(lVar6 + lVar1) + 0x40) == param_2)) {
        iVar2 = *(int *)(param_1 + 0x198);
        iVar3 = (iVar2 - iVar5) + -1;
        if (0 < iVar3) {
          iVar3 = 1;
        }
        if (iVar3 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar7 + lVar1),(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x18),
                     (longlong)iVar3 * 0x18);
          iVar2 = *(int *)(param_1 + 0x198);
        }
        iVar4 = iVar4 + 1;
        *(int *)(param_1 + 0x198) = iVar2 + -1;
      }
      lVar7 = lVar7 + -0x18;
      lVar6 = lVar6 + -0x18;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  return iVar4;
}



// FUNCTION 142bb3390 FUN_142bb3390 body=160 status=ok
// SIG undefined FUN_142bb3390(void)

void FUN_142bb3390(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  if ((((*(uint *)(param_1 + 8) >> 0xf & 1) == 0) &&
      (*(longlong **)(param_1 + 0x118) != (longlong *)0x0)) &&
     (lVar1 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x148))(), lVar1 != 0)) {
    FWeakObjectPtr::operator=(local_res8,param_2);
    if (*(longlong *)(lVar1 + 400) == 0) {
      lVar2 = lVar1 + 0x400;
    }
    else {
      lVar2 = *(longlong *)(*(longlong *)(lVar1 + 400) + 0x98);
    }
    FUN_142534fa0(lVar2,local_res8);
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    if (param_2 != 0) {
      FUN_1428800b0(uVar3,param_2);
    }
  }
  return;
}



// FUNCTION 142bb3430 FUN_142bb3430 body=112 status=ok
// SIG undefined FUN_142bb3430(void)

char FUN_142bb3430(longlong *param_1)

{
  char cVar1;
  
  if ((*(int *)((longlong)param_1 + 0x84) == 0) || ((*(byte *)(param_1 + 0x12) & 1) == 0)) {
    cVar1 = (**(code **)(*param_1 + 0x298))();
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x2a8))();
  }
  if (cVar1 == '\0') {
    *(uint *)(param_1 + 0x12) = *(uint *)(param_1 + 0x12) | 4;
    if ((int)param_1[0x11] != 3) {
      *(undefined4 *)(param_1 + 0x11) = 3;
    }
    FUN_142bca010(param_1,1);
  }
  return cVar1;
}



// FUNCTION 142bb34a0 AddBoolFilter body=395 status=ok
// SIG undefined AddBoolFilter(void)

void FBlackboardKeySelector::AddBoolFilter(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined8 local_res18;
  undefined1 local_res20 [8];
  undefined2 *local_48;
  int local_40;
  int local_3c;
  longlong local_38;
  
  local_res18 = param_3;
  puVar4 = (undefined8 *)FName::ToString(&local_res18);
  iVar1 = *(int *)(puVar4 + 1);
  local_48 = (undefined2 *)*puVar4;
  *puVar4 = 0;
  local_40 = *(int *)(puVar4 + 1);
  local_3c = *(int *)((longlong)puVar4 + 0xc);
  iVar7 = (6 - (uint)(iVar1 != 0)) + local_40;
  puVar4[1] = 0;
  iVar9 = local_40;
  if (local_3c < iVar7) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48,iVar7,-iVar1);
    iVar9 = local_40;
  }
  local_40 = (6 - (uint)(iVar9 != 0)) + iVar9;
  if (local_3c < local_40) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar9);
  }
  iVar1 = local_40;
  puVar3 = local_48;
  puVar4 = (undefined8 *)(local_48 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)));
  *puVar4 = 0x6f006f0042005f;
  *(undefined2 *)(puVar4 + 1) = 0x6c;
  *(undefined2 *)((longlong)puVar4 + 10) = 0;
  if (local_38 != 0) {
    FMemory::Free();
  }
  puVar8 = &DAT_143f3eda8;
  if (iVar1 != 0) {
    puVar8 = puVar3;
  }
  plVar5 = (longlong *)FName::FName(local_res20,puVar8,1);
  lVar2 = *plVar5;
  if (lVar2 == 0) {
    FUN_1417846f0(param_2,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar6 = UBlackboardKeyType_Bool::GetPrivateStaticClass();
  uVar6 = FUN_1417985e0(uVar6,param_2,lVar2,0,0,0,0,0,0);
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar6;
  if (puVar3 != (undefined2 *)0x0) {
    FMemory::Free(puVar3);
  }
  return;
}



// FUNCTION 142bb3630 FUN_142bb3630 body=299 status=ok
// SIG undefined FUN_142bb3630(void)

void FUN_142bb3630(longlong param_1,longlong param_2,float param_3,char param_4)

{
  float fVar1;
  float *pfVar2;
  longlong lVar3;
  float *pfVar4;
  longlong local_res10 [3];
  float local_38 [2];
  undefined8 local_30;
  longlong *local_28;
  float *local_20;
  
  local_30 = 0;
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x2d8) != *(int *)(param_1 + 0x304)) {
      lVar3 = *(longlong *)(param_1 + 0x310);
      if (*(longlong *)(param_1 + 0x310) == 0) {
        lVar3 = param_1 + 0x308;
      }
      fVar1 = *(float *)(lVar3 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                                 (longlong)*(int *)(param_1 + 0x318) - 1U) * 4);
      if (fVar1 != -NAN) {
        lVar3 = *(longlong *)(param_1 + 0x2d0);
        do {
          pfVar4 = (float *)(lVar3 + (longlong)(int)fVar1 * 0x18);
          if (*(longlong *)(lVar3 + (longlong)(int)fVar1 * 0x18) == param_2) {
            if (fVar1 != -NAN) goto LAB_142bb36d3;
            break;
          }
          fVar1 = pfVar4[4];
        } while (fVar1 != -NAN);
      }
    }
    pfVar4 = (float *)0x0;
LAB_142bb36d3:
    pfVar2 = pfVar4 + 2;
    if (pfVar4 == (float *)0x0) {
      pfVar2 = (float *)0x0;
    }
    if ((param_4 != '\0') && (pfVar2 != (float *)0x0)) {
      *pfVar2 = param_3 + *pfVar2;
      return;
    }
    lVar3 = *(longlong *)(param_1 + 0x120);
    local_res10[0] = param_2;
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(param_1);
    }
    local_38[0] = param_3 + *(float *)(lVar3 + 0x790);
    local_28 = local_res10;
    local_20 = local_38;
    FUN_142bae150((longlong *)(param_1 + 0x2d0),&local_30,&local_28,0);
  }
  return;
}



// FUNCTION 142bb3760 AddFloatFilter body=393 status=ok
// SIG undefined AddFloatFilter(void)

void FBlackboardKeySelector::AddFloatFilter(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined8 local_res18;
  undefined1 local_res20 [8];
  undefined2 *local_48;
  int local_40;
  int local_3c;
  longlong local_38;
  
  local_res18 = param_3;
  puVar4 = (undefined8 *)FName::ToString(&local_res18);
  iVar1 = *(int *)(puVar4 + 1);
  local_48 = (undefined2 *)*puVar4;
  *puVar4 = 0;
  local_40 = *(int *)(puVar4 + 1);
  local_3c = *(int *)((longlong)puVar4 + 0xc);
  iVar7 = (7 - (uint)(iVar1 != 0)) + local_40;
  puVar4[1] = 0;
  iVar9 = local_40;
  if (local_3c < iVar7) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48,iVar7,-iVar1);
    iVar9 = local_40;
  }
  local_40 = (7 - (uint)(iVar9 != 0)) + iVar9;
  if (local_3c < local_40) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar9);
  }
  iVar1 = local_40;
  puVar3 = local_48;
  builtin_wcsncpy(local_48 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)),L"_Float",7);
  if (local_38 != 0) {
    FMemory::Free();
  }
  puVar8 = &DAT_143f3eda8;
  if (iVar1 != 0) {
    puVar8 = puVar3;
  }
  plVar5 = (longlong *)FName::FName(local_res20,puVar8,1);
  lVar2 = *plVar5;
  if (lVar2 == 0) {
    FUN_1417846f0(param_2,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar6 = UBlackboardKeyType_Float::GetPrivateStaticClass();
  uVar6 = FUN_1417985e0(uVar6,param_2,lVar2,0,0,0,0,0,0);
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar6;
  if (puVar3 != (undefined2 *)0x0) {
    FMemory::Free(puVar3);
  }
  return;
}



// FUNCTION 142bb38f0 AddIntFilter body=382 status=ok
// SIG undefined AddIntFilter(void)

void FBlackboardKeySelector::AddIntFilter(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined8 local_res18;
  undefined1 local_res20 [8];
  undefined2 *local_48;
  int local_40;
  int local_3c;
  longlong local_38;
  
  local_res18 = param_3;
  puVar4 = (undefined8 *)FName::ToString(&local_res18);
  iVar1 = *(int *)(puVar4 + 1);
  local_48 = (undefined2 *)*puVar4;
  *puVar4 = 0;
  local_40 = *(int *)(puVar4 + 1);
  local_3c = *(int *)((longlong)puVar4 + 0xc);
  iVar7 = (5 - (uint)(iVar1 != 0)) + local_40;
  puVar4[1] = 0;
  iVar9 = local_40;
  if (local_3c < iVar7) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48,iVar7,-iVar1);
    iVar9 = local_40;
  }
  local_40 = (5 - (uint)(iVar9 != 0)) + iVar9;
  if (local_3c < local_40) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar9);
  }
  iVar1 = local_40;
  puVar3 = local_48;
  builtin_wcsncpy(local_48 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)),L"_Int",5);
  if (local_38 != 0) {
    FMemory::Free();
  }
  puVar8 = &DAT_143f3eda8;
  if (iVar1 != 0) {
    puVar8 = puVar3;
  }
  plVar5 = (longlong *)FName::FName(local_res20,puVar8,1);
  lVar2 = *plVar5;
  if (lVar2 == 0) {
    FUN_1417846f0(param_2,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar6 = UBlackboardKeyType_Int::GetPrivateStaticClass();
  uVar6 = FUN_1417985e0(uVar6,param_2,lVar2,0,0,0,0,0,0);
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar6;
  if (puVar3 != (undefined2 *)0x0) {
    FMemory::Free(puVar3);
  }
  return;
}



// FUNCTION 142bb3a70 AddObjectFilter body=339 status=ok
// SIG undefined AddObjectFilter(void)

void FBlackboardKeySelector::AddObjectFilter
               (longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined8 local_res8 [2];
  undefined8 local_res18;
  longlong local_res20;
  undefined2 *local_48;
  int local_40;
  longlong local_38 [2];
  
  local_res18 = param_3;
  puVar2 = (undefined8 *)FName::ToString(&local_res18,local_38);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar8 = &DAT_143f3eda8;
  }
  else {
    puVar8 = (undefined2 *)*puVar2;
  }
  FString::PrintfImpl(&local_48,L"%s_Object",puVar8);
  puVar8 = &DAT_143f3eda8;
  if (local_40 != 0) {
    puVar8 = local_48;
  }
  uVar3 = UBlackboardKeyType_Object::GetPrivateStaticClass();
  puVar2 = (undefined8 *)FName::FName(local_res8,puVar8,1);
  FUN_141791c20(&local_res20,param_2,uVar3,*puVar2);
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  local_res8[0] = 0;
  if (local_res20 == 0) {
    FUN_1417846f0(param_2,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar3 = UBlackboardKeyType_Object::GetPrivateStaticClass();
  lVar4 = FUN_1417985e0(uVar3,param_2,local_res20,0,0,0,0,0,0);
  lVar7 = 0;
  if (param_4 != 0) {
    lVar5 = UObject::GetPrivateStaticClass();
    lVar6 = param_4;
    do {
      lVar7 = param_4;
      if (lVar6 == lVar5) break;
      lVar6 = *(longlong *)(lVar6 + 0x30);
      lVar7 = 0;
    } while (lVar6 != 0);
  }
  *(longlong *)(lVar4 + 0x30) = lVar7;
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar4;
  return;
}



// FUNCTION 142bb3bd0 AddRotatorFilter body=380 status=ok
// SIG undefined AddRotatorFilter(void)

void FBlackboardKeySelector::AddRotatorFilter
               (longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined8 local_res18;
  undefined1 local_res20 [8];
  undefined2 *local_48;
  int local_40;
  int local_3c;
  longlong local_38;
  
  local_res18 = param_3;
  puVar4 = (undefined8 *)FName::ToString(&local_res18);
  iVar1 = *(int *)(puVar4 + 1);
  local_48 = (undefined2 *)*puVar4;
  *puVar4 = 0;
  local_40 = *(int *)(puVar4 + 1);
  local_3c = *(int *)((longlong)puVar4 + 0xc);
  iVar7 = (9 - (uint)(iVar1 != 0)) + local_40;
  puVar4[1] = 0;
  iVar9 = local_40;
  if (local_3c < iVar7) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48,iVar7,-iVar1);
    iVar9 = local_40;
  }
  local_40 = (9 - (uint)(iVar9 != 0)) + iVar9;
  if (local_3c < local_40) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar9);
  }
  iVar1 = local_40;
  puVar3 = local_48;
  builtin_wcsncpy(local_48 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)),L"_Rotator",9);
  if (local_38 != 0) {
    FMemory::Free();
  }
  puVar8 = &DAT_143f3eda8;
  if (iVar1 != 0) {
    puVar8 = puVar3;
  }
  plVar5 = (longlong *)FName::FName(local_res20,puVar8,1);
  lVar2 = *plVar5;
  if (lVar2 == 0) {
    FUN_1417846f0(param_2,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar6 = FUN_142c361d0();
  uVar6 = FUN_1417985e0(uVar6,param_2,lVar2,0,0,0,0,0,0);
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar6;
  if (puVar3 != (undefined2 *)0x0) {
    FMemory::Free(puVar3);
  }
  return;
}



// FUNCTION 142bb3d50 FUN_142bb3d50 body=211 status=ok
// SIG undefined FUN_142bb3d50(void)

int FUN_142bb3d50(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  uint *puVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = 0;
  if ((param_2 == 0) || (param_3 == 0)) {
    iVar4 = 0xff;
  }
  else {
    iVar4 = FUN_142bbd6b0();
    if ((char)iVar4 == -1) {
      plVar1 = (longlong *)(param_1 + 0x270);
      iVar4 = *(int *)(param_1 + 0x278);
      lVar6 = (longlong)iVar4;
      *(int *)(param_1 + 0x278) = iVar4 + 1;
      if (*(int *)(param_1 + 0x27c) < iVar4 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(plVar1);
      }
      lVar3 = *plVar1;
      *(undefined8 *)(lVar3 + lVar6 * 0x18) = 0;
      *(undefined8 *)(lVar3 + 8 + lVar6 * 0x18) = 0;
      *(undefined8 *)(lVar3 + 0x10 + lVar6 * 0x18) = 0;
      lVar3 = *plVar1;
      puVar2 = (uint *)(lVar3 + 0x10 + lVar6 * 0x18);
      *puVar2 = *puVar2 & 0xfffffffe;
      plVar1 = (longlong *)(lVar3 + lVar6 * 0x18);
      *plVar1 = param_2;
      plVar1[1] = param_3;
      FUN_142bbfd90(param_1);
      lVar6 = *(longlong *)(param_1 + 0x180);
      if (lVar6 != 0) {
        iVar5 = (uint)*(byte *)(lVar6 + 0x4c) + *(int *)(lVar6 + 0x40);
      }
      return iVar4 + iVar5;
    }
  }
  return iVar4;
}



// FUNCTION 142bb3e30 FUN_142bb3e30 body=504 status=ok
// SIG undefined FUN_142bb3e30(void)

void FUN_142bb3e30(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  byte *pbVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  
  bVar4 = false;
  iVar10 = 0;
  if (0 < (int)param_1[2]) {
    lVar11 = 0;
    do {
      lVar9 = param_1[1];
      if ((*(longlong *)(lVar9 + lVar11) == *param_2) &&
         (*(longlong *)(lVar9 + 8 + lVar11) == param_2[1])) {
        cVar3 = *(char *)(lVar9 + 0x12 + lVar11);
        if (cVar3 == *(char *)((longlong)param_2 + 0x12)) {
          return;
        }
        if ((cVar3 == '\x02') || (*(char *)((longlong)param_2 + 0x12) == '\x02')) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        iVar8 = (int)param_1[2];
        iVar5 = (iVar8 - iVar10) + -1;
        if (iVar5 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar9 + (longlong)iVar10 * 0x18),
                     (void *)(lVar9 + (longlong)(iVar10 + 1) * 0x18),(longlong)iVar5 * 0x18);
          iVar8 = (int)param_1[2];
        }
        *(int *)(param_1 + 2) = iVar8 + -1;
      }
      iVar10 = iVar10 + 1;
      lVar11 = lVar11 + 0x18;
    } while (iVar10 < (int)param_1[2]);
    if (bVar4) {
      return;
    }
  }
  if ((*(char *)((longlong)param_2 + 0x12) == '\x02') && (*param_2 != 0)) {
    if ((int)(uint)*(ushort *)(param_2 + 2) < *(int *)(*param_1 + 0x1e0)) {
      lVar11 = *(longlong *)(*param_1 + 0x1d8);
      lVar9 = (ulonglong)*(ushort *)(param_2 + 2) * 0x60;
      plVar12 = *(longlong **)(lVar9 + 0x18 + lVar11);
      plVar1 = plVar12 + *(int *)(lVar9 + 0x20 + lVar11);
      for (; plVar12 != plVar1; plVar12 = plVar12 + 1) {
        if (*plVar12 == *param_2) {
          bVar4 = false;
          goto LAB_142bb3f48;
        }
      }
    }
    bVar4 = true;
LAB_142bb3f48:
    if (bVar4) {
      return;
    }
  }
  iVar10 = (int)param_1[2];
  *(int *)(param_1 + 2) = iVar10 + 1;
  if (*(int *)((longlong)param_1 + 0x14) < iVar10 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 1,iVar10);
  }
  lVar9 = param_1[1];
  lVar11 = (longlong)iVar10 * 0x18;
  *(longlong *)(lVar11 + lVar9) = *param_2;
  *(longlong *)(lVar11 + 8 + lVar9) = param_2[1];
  *(short *)(lVar11 + 0x10 + lVar9) = (short)param_2[2];
  *(undefined1 *)(lVar11 + 0x12 + lVar9) = *(undefined1 *)((longlong)param_2 + 0x12);
  pbVar2 = (byte *)(lVar11 + 0x13 + lVar9);
  *pbVar2 = *pbVar2 ^ (*(byte *)((longlong)param_2 + 0x13) ^ *(byte *)(lVar11 + 0x13 + lVar9)) & 1;
  if ((*(char *)((longlong)param_2 + 0x12) == '\x01') && (lVar9 = *param_2, lVar9 != 0)) {
    lVar6 = UBTService::GetPrivateStaticClass();
    lVar9 = *(longlong *)(lVar9 + 0x10);
    if ((*(int *)(lVar9 + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar9 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      bVar7 = 1;
      goto LAB_142bb3ffe;
    }
  }
  bVar7 = 0;
LAB_142bb3ffe:
  lVar9 = param_1[1];
  pbVar2 = (byte *)(lVar11 + 0x13 + lVar9);
  *pbVar2 = *pbVar2 & 0xfe;
  pbVar2 = (byte *)(lVar11 + 0x13 + lVar9);
  *pbVar2 = *pbVar2 | bVar7;
  return;
}



// FUNCTION 142bb4030 AddVectorFilter body=404 status=ok
// SIG undefined AddVectorFilter(void)

void FBlackboardKeySelector::AddVectorFilter
               (longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined8 local_res18;
  undefined1 local_res20 [8];
  undefined2 *local_48;
  int local_40;
  int local_3c;
  longlong local_38;
  
  local_res18 = param_3;
  puVar4 = (undefined8 *)FName::ToString(&local_res18);
  iVar1 = *(int *)(puVar4 + 1);
  local_48 = (undefined2 *)*puVar4;
  *puVar4 = 0;
  local_40 = *(int *)(puVar4 + 1);
  local_3c = *(int *)((longlong)puVar4 + 0xc);
  iVar7 = (8 - (uint)(iVar1 != 0)) + local_40;
  puVar4[1] = 0;
  iVar9 = local_40;
  if (local_3c < iVar7) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48,iVar7,-iVar1);
    iVar9 = local_40;
  }
  local_40 = (8 - (uint)(iVar9 != 0)) + iVar9;
  if (local_3c < local_40) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar9);
  }
  iVar1 = local_40;
  puVar3 = local_48;
  builtin_wcsncpy(local_48 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)),L"_Vector",8);
  if (local_38 != 0) {
    FMemory::Free();
  }
  puVar8 = &DAT_143f3eda8;
  if (iVar1 != 0) {
    puVar8 = puVar3;
  }
  plVar5 = (longlong *)FName::FName(local_res20,puVar8,1);
  lVar2 = *plVar5;
  if (lVar2 == 0) {
    FUN_1417846f0(param_2,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar6 = UBlackboardKeyType_Object::GetPrivateStaticClass();
  uVar6 = FUN_1417985e0(uVar6,param_2,lVar2,0,0,0,0,0,0);
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar6;
  if (puVar3 != (undefined2 *)0x0) {
    FMemory::Free(puVar3);
  }
  return;
}



// FUNCTION 142bb41d0 FUN_142bb41d0 body=81 status=ok
// SIG undefined FUN_142bb41d0(void)

int FUN_142bb41d0(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + param_2;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + param_2) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow();
  }
  _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar1 * 2),0,(longlong)param_2 * 2);
  return iVar1;
}



// FUNCTION 142bb4230 FUN_142bb4230 body=460 status=ok
// SIG undefined FUN_142bb4230(void)

void FUN_142bb4230(longlong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_38;
  int local_30;
  int iStack_2c;
  
  lVar6 = 0;
  iVar4 = 0;
  iVar7 = 0;
  iVar8 = 0;
  local_38 = 0;
  local_30 = 0;
  iStack_2c = 0;
  if (0 < *(int *)(param_1 + 0x218)) {
    lVar9 = 0;
    do {
      plVar3 = (longlong *)(*(longlong *)(param_1 + 0x210) + lVar9);
      if ((*(char *)((longlong)plVar3 + 0x12) != '\x02') && (*plVar3 != 0)) {
        lVar2 = UBTDecorator::GetPrivateStaticClass();
        lVar5 = *plVar3;
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if (bVar10) {
          bVar10 = *(ushort *)(plVar3 + 2) < *(ushort *)(param_1 + 0x234);
          if (*(ushort *)(plVar3 + 2) == *(ushort *)(param_1 + 0x234)) {
            bVar10 = *(ushort *)(lVar5 + 0x50) < *(ushort *)(param_1 + 0x236);
          }
          if (bVar10) {
            lVar2 = (longlong)iVar8;
            local_30 = iVar8 + 1;
            if (iVar7 < local_30) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
              ResizeGrow(&local_38,iVar8);
              lVar5 = *plVar3;
              lVar6 = local_38;
              iVar7 = iStack_2c;
            }
            *(longlong *)(lVar6 + lVar2 * 0x18) = lVar5;
            *(longlong *)(lVar6 + 8 + lVar2 * 0x18) = plVar3[1];
            *(short *)(lVar6 + 0x10 + lVar2 * 0x18) = (short)plVar3[2];
            *(undefined1 *)(lVar6 + 0x12 + lVar2 * 0x18) = *(undefined1 *)((longlong)plVar3 + 0x12);
            pbVar1 = (byte *)(lVar6 + 0x13 + lVar2 * 0x18);
            *pbVar1 = *pbVar1 ^ (*(byte *)((longlong)plVar3 + 0x13) ^
                                *(byte *)(lVar6 + 0x13 + lVar2 * 0x18)) & 1;
            iVar8 = local_30;
          }
        }
      }
      iVar4 = iVar4 + 1;
      lVar9 = lVar9 + 0x18;
    } while (iVar4 < *(int *)(param_1 + 0x218));
  }
  FUN_142bb45e0(param_1,&local_38,0xffff,0);
  *(undefined4 *)(param_1 + 0x218) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x21c)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x210,0);
  }
  *(undefined4 *)(param_1 + 0x228) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x22c)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x220,0);
  }
  if (lVar6 == 0) {
    return;
  }
  FMemory::Free(lVar6);
  return;
}



// FUNCTION 142bb4400 FUN_142bb4400 body=480 status=ok
// SIG undefined FUN_142bb4400(void)

void FUN_142bb4400(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined2 uVar7;
  longlong lVar8;
  int iVar9;
  undefined4 uVar10;
  
  iVar9 = 0;
  *(undefined4 *)(param_1 + 0x23c) = 0xffffffff;
  if (0 < *(int *)(param_1 + 0x228)) {
    lVar6 = 0;
    do {
      uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x220) + lVar6);
      if ((int)(uint)uVar2 < *(int *)(param_1 + 0x1e0)) {
        lVar3 = *(longlong *)(param_1 + 0x1d8);
        uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 0x220) + 2 + lVar6);
        lVar8 = (ulonglong)uVar2 * 0x60;
        if (((*(int *)(lVar8 + 0x58 + lVar3) != 0) &&
            (plVar5 = *(longlong **)(lVar8 + 0x50 + lVar3), plVar5 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar5 + 0x18))(), cVar4 != '\0')) {
          if (*(int *)(lVar8 + 0x58 + lVar3) == 0) {
            plVar5 = (longlong *)0x0;
          }
          else {
            plVar5 = *(longlong **)(lVar8 + 0x50 + lVar3);
          }
          (**(code **)(*plVar5 + 0x40))(plVar5,param_1,uVar1);
        }
      }
      iVar9 = iVar9 + 1;
      lVar6 = lVar6 + 4;
    } while (iVar9 < *(int *)(param_1 + 0x228));
  }
  if (param_2 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined2 *)(param_2 + 0x50);
  }
  plVar5 = (longlong *)(param_1 + 0x210);
  FUN_142bb45e0(param_1,plVar5,uVar7,0);
  FUN_142bb45e0(param_1,plVar5,uVar7,1);
  lVar6 = *(longlong *)(param_1 + 0x120);
  if (lVar6 == 0) {
    lVar6 = FUN_1423407b0(param_1);
  }
  if (lVar6 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined4 *)(lVar6 + 0x7b0);
  }
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x218)) {
    lVar6 = 0;
    do {
      lVar3 = *plVar5;
      if (((*(char *)(lVar6 + 0x12 + lVar3) == '\x01') &&
          (lVar8 = *(longlong *)(lVar6 + lVar3), lVar8 != 0)) &&
         (uVar2 = *(ushort *)(lVar6 + 0x10 + lVar3), (int)(uint)uVar2 < *(int *)(param_1 + 0x1e0)))
      {
        FUN_142bcefc0(lVar8,param_1,
                      (ulonglong)*(ushort *)(lVar8 + 0x52) +
                      *(longlong *)((ulonglong)uVar2 * 0x60 + 0x38 + *(longlong *)(param_1 + 0x1d8))
                      ,uVar10);
      }
      iVar9 = iVar9 + 1;
      lVar6 = lVar6 + 0x18;
    } while (iVar9 < *(int *)(param_1 + 0x218));
  }
  *(undefined4 *)(param_1 + 0x218) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x21c)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (plVar5,0);
  }
  *(undefined4 *)(param_1 + 0x228) = 0;
  if ((*(int *)(param_1 + 0x22c) < 0) && (*(int *)(param_1 + 0x22c) != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x220,0);
    return;
  }
  return;
}



// FUNCTION 142bb45e0 FUN_142bb45e0 body=1125 status=ok
// SIG undefined FUN_142bb45e0(void)

void FUN_142bb45e0(longlong param_1,longlong *param_2,int param_3,byte param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  char cVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  longlong *plVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  longlong *plVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_3c;
  
  iVar18 = 0;
  if ((int)param_2[1] < 1) {
    return;
  }
  lVar19 = 0;
LAB_142bb4623:
  plVar2 = (longlong *)(*param_2 + lVar19 * 0x18);
  uVar6 = *(ushort *)(*param_2 + 0x10 + lVar19 * 0x18);
  if ((int)(uint)uVar6 < *(int *)(param_1 + 0x1e0)) {
    plVar8 = *(longlong **)(param_1 + 0x1d8);
    lVar15 = *plVar2;
    bVar9 = false;
    iVar16 = -1;
    if (lVar15 != 0) {
      plVar14 = (longlong *)plVar8[(ulonglong)uVar6 * 0xc + 3];
      plVar1 = plVar14 + (int)plVar8[(ulonglong)uVar6 * 0xc + 4];
      for (; iVar16 = -1, plVar14 != plVar1; plVar14 = plVar14 + 1) {
        iVar16 = -1;
        if (*plVar14 == lVar15) goto LAB_142bb479a;
      }
      goto LAB_142bb46cb;
    }
    if (plVar2[1] != 0) {
      plVar1 = (longlong *)plVar8[(ulonglong)uVar6 * 0xc + 5];
      plVar14 = plVar1;
      while( true ) {
        if (plVar14 == plVar1 + (longlong)(int)plVar8[(ulonglong)uVar6 * 0xc + 6] * 2)
        goto LAB_142bb46c6;
        if (*plVar14 == plVar2[1]) break;
        plVar14 = plVar14 + 2;
      }
      iVar16 = (int)((longlong)plVar14 - (longlong)plVar1 >> 4);
      if ((iVar16 == -1) || ((int)plVar1[(longlong)iVar16 * 2 + 1] != 0)) goto LAB_142bb46cb;
LAB_142bb479a:
      bVar9 = true;
    }
    goto LAB_142bb46d5;
  }
  goto LAB_142bb49fb;
LAB_142bb46c6:
  iVar16 = -1;
LAB_142bb46cb:
  bVar9 = false;
LAB_142bb46d5:
  lVar17 = lVar15;
  if (lVar15 == 0) {
    lVar17 = plVar2[1];
  }
  cVar4 = *(char *)((longlong)plVar2 + 0x12);
  if ((((cVar4 != '\x02') || (bVar9)) &&
      ((cVar4 != '\x01' || ((!bVar9 && ((int)(uint)*(ushort *)(lVar17 + 0x50) <= param_3)))))) &&
     ((*(byte *)((longlong)plVar2 + 0x13) & 1) == param_4)) {
    if (lVar15 == 0) {
      lVar15 = plVar2[1];
      if (lVar15 != 0) {
        if (cVar4 == '\x02') {
          FUN_142bcd1c0(param_1,lVar15);
          iVar10 = UBTTaskNode::WrappedAbortTask
                             (plVar2[1],param_1,
                              (ulonglong)*(ushort *)(lVar17 + 0x52) +
                              plVar8[(ulonglong)uVar6 * 0xc + 7]);
          uVar7 = *(ushort *)(plVar2 + 2);
          if ((int)(uint)uVar7 < *(int *)(param_1 + 0x1e0)) {
            if ((iVar16 < 0) ||
               (*(int *)((ulonglong)uVar7 * 0x60 + 0x30 + *(longlong *)(param_1 + 0x1d8)) <= iVar16)
               ) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            if (bVar9) {
              lVar15 = plVar2[1];
              if (*(longlong *)
                   (*(longlong *)((ulonglong)uVar7 * 0x60 + 0x28 + *(longlong *)(param_1 + 0x1d8)) +
                   (longlong)iVar16 * 0x10) == lVar15) {
                if (iVar10 == 3) {
                  *(undefined4 *)(plVar8[(ulonglong)uVar6 * 0xc + 5] + 8 + (longlong)iVar16 * 0x10)
                       = 1;
                  *(byte *)(param_1 + 0x323) = *(byte *)(param_1 + 0x323) | 4;
                  lVar15 = plVar2[1];
                }
                FUN_142bc45b0(param_1,lVar15,iVar10);
              }
            }
          }
        }
        else {
          iVar16 = (int)plVar8[(ulonglong)uVar6 * 0xc + 6];
          *(int *)(plVar8 + (ulonglong)uVar6 * 0xc + 6) = iVar16 + 1;
          if (*(int *)((longlong)plVar8 + (ulonglong)uVar6 * 0x60 + 0x34) < iVar16 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow
                      (plVar8 + (ulonglong)uVar6 * 0xc + 5,iVar16);
          }
          local_48 = (undefined4)lVar15;
          uStack_44 = (undefined4)((ulonglong)lVar15 >> 0x20);
          puVar3 = (undefined4 *)(plVar8[(ulonglong)uVar6 * 0xc + 5] + (longlong)iVar16 * 0x10);
          *puVar3 = local_48;
          puVar3[1] = uStack_44;
          puVar3[2] = 0;
          puVar3[3] = uStack_3c;
        }
      }
    }
    else {
      if ((*(byte *)(param_1 + 0x323) & 2) != 0) {
        bVar5 = *(byte *)(lVar15 + 0x59);
        lVar11 = *(longlong *)(lVar15 + 0x48);
        if (bVar5 != 0xff) {
          if ((lVar11 == 0) || (*(int *)(lVar11 + 0x60) <= (int)(uint)bVar5)) {
            lVar11 = 0;
          }
          else {
            plVar1 = (longlong *)(lVar11 + 0x58);
            lVar11 = *(longlong *)(*plVar1 + (ulonglong)bVar5 * 0x30);
            if (lVar11 == 0) {
              lVar11 = *(longlong *)(*plVar1 + 8 + (ulonglong)bVar5 * 0x30);
            }
          }
        }
        if (lVar11 == *plVar8) {
          lVar11 = UBTService::GetPrivateStaticClass();
          lVar15 = *plVar2;
          if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
            bVar9 = false;
          }
          else {
            bVar9 = true;
          }
          if (bVar9) {
            if (*(char *)((longlong)plVar2 + 0x12) == '\x02') goto LAB_142bb49fb;
            plVar14 = *(longlong **)(*(longlong *)(param_1 + 0x1d8) + 0x18);
            plVar1 = plVar14 + *(int *)(*(longlong *)(param_1 + 0x1d8) + 0x20);
            for (; plVar14 != plVar1; plVar14 = plVar14 + 1) {
              if (*plVar14 == lVar15) goto LAB_142bb49fb;
            }
          }
        }
      }
      plVar1 = plVar8 + (ulonglong)uVar6 * 0xc + 3;
      lVar17 = (ulonglong)*(ushort *)(lVar17 + 0x52) + plVar8[(ulonglong)uVar6 * 0xc + 7];
      if (*(char *)((longlong)plVar2 + 0x12) == '\x02') {
        plVar14 = (longlong *)*plVar1;
        iVar16 = (int)plVar8[(ulonglong)uVar6 * 0xc + 4];
        plVar12 = plVar14;
        if (plVar14 == plVar14 + iVar16) {
LAB_142bb48ae:
          UBTAuxiliaryNode::WrappedOnCeaseRelevant(*plVar2,param_1,lVar17);
        }
        else {
          do {
            if (*plVar12 == lVar15) {
              iVar10 = (int)((longlong)plVar12 - (longlong)plVar14 >> 3);
              if (iVar10 != -1) {
                iVar13 = (iVar16 - iVar10) + -1;
                if (0 < iVar13) {
                  iVar13 = 1;
                }
                if (iVar13 != 0) {
                  _guard_xfg_dispatch_icall_nop
                            (plVar14 + iVar10,plVar14 + (iVar16 - iVar13),(longlong)iVar13 << 3);
                }
                *(int *)(plVar8 + (ulonglong)uVar6 * 0xc + 4) =
                     (int)plVar8[(ulonglong)uVar6 * 0xc + 4] + -1;
                TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
              }
              goto LAB_142bb48ae;
            }
            plVar12 = plVar12 + 1;
          } while (plVar12 != plVar14 + iVar16);
          UBTAuxiliaryNode::WrappedOnCeaseRelevant(*plVar2,param_1,lVar17);
        }
      }
      else {
        iVar16 = (int)plVar8[(ulonglong)uVar6 * 0xc + 4];
        *(int *)(plVar8 + (ulonglong)uVar6 * 0xc + 4) = iVar16 + 1;
        if (*(int *)((longlong)plVar8 + (ulonglong)uVar6 * 0x60 + 0x24) < iVar16 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar16);
        }
        *(longlong *)(*plVar1 + (longlong)iVar16 * 8) = *plVar2;
        UBTAuxiliaryNode::WrappedOnBecomeRelevant(*plVar2,param_1,lVar17);
      }
    }
  }
LAB_142bb49fb:
  iVar18 = iVar18 + 1;
  lVar19 = lVar19 + 1;
  if ((int)param_2[1] <= iVar18) {
    return;
  }
  goto LAB_142bb4623;
}



// FUNCTION 142bb4a50 BeginDestroy body=41 status=ok
// SIG undefined BeginDestroy(void)

void UAISystem::BeginDestroy(longlong *param_1)

{
  (**(code **)(*param_1 + 0x288))(param_1,1,1,0);
  FUN_1417502d0(param_1);
  return;
}



// FUNCTION 142bb4a80 BeginDestroy body=35 status=ok
// SIG undefined BeginDestroy(void)

void UPawnAction_Move::BeginDestroy(undefined8 param_1)

{
  ClearTimers();
  ClearPath(param_1);
  FUN_1417502d0(param_1);
  return;
}



// FUNCTION 142bb4ab0 FUN_142bb4ab0 body=1512 status=ok
// SIG undefined FUN_142bb4ab0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142bb4ab0(longlong *param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  float *pfVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  longlong local_258;
  float local_250;
  undefined8 local_248;
  float local_240;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float local_224;
  float local_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 local_210;
  float local_208;
  float fStack_204;
  float fStack_200;
  undefined4 uStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  undefined4 uStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  undefined4 uStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  undefined4 uStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  longlong *plStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  longlong *plStack_180;
  undefined1 local_178 [12];
  undefined1 local_16c [20];
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined1 local_138 [288];
  
  lVar4 = (**(code **)(*param_1 + 0x148))();
  if (lVar4 == 0) {
    return 0;
  }
  lVar4 = *(longlong *)(lVar4 + 0x138);
  if (lVar4 == 0) {
    return 0;
  }
  lVar5 = FUN_142ba9430();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return 0;
  }
  if ((*(uint *)(param_2 + 4) >> 2 & 1) == 0) {
    lVar4 = *(longlong *)(lVar4 + 0x30);
  }
  else {
    uVar6 = (**(code **)(param_1[0x8b] + 0x10))();
    lVar4 = thunk_FUN_142b8f070(lVar4,uVar6);
  }
  if (lVar4 == 0) {
    return 0;
  }
  local_250 = *(float *)(param_2 + 2);
  local_258 = param_2[1];
  if ((*(uint *)(param_2 + 4) >> 1 & 1) == 0) goto LAB_142bb4f78;
  lVar5 = *param_2;
  if (lVar5 == 0) {
LAB_142bb4f06:
    if ((*(byte *)(param_2 + 4) & 2) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *param_2;
    }
    lVar5 = *(longlong *)(lVar5 + 0x168);
    if (lVar5 == 0) {
      local_240 = DAT_1468b5d98;
      puVar9 = &local_248;
      local_248 = _DAT_1468b5d90;
    }
    else {
      local_148 = *(undefined4 *)(lVar5 + 0x220);
      uStack_144 = *(undefined4 *)(lVar5 + 0x224);
      uStack_140 = *(undefined4 *)(lVar5 + 0x228);
      uStack_13c = *(undefined4 *)(lVar5 + 0x22c);
      puVar9 = (undefined8 *)&local_218;
      local_218 = local_148;
      local_210 = uStack_140;
      uStack_214 = uStack_144;
    }
    fVar13 = (float)*puVar9;
    fVar14 = (float)((ulonglong)*puVar9 >> 0x20);
    local_250 = *(float *)(puVar9 + 1);
  }
  else {
    uVar6 = UNavAgentInterface::GetPrivateStaticClass();
    plVar7 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar6);
    if (plVar7 == (longlong *)0x0) goto LAB_142bb4f06;
    (**(code **)(*plVar7 + 0x28))(plVar7,&local_228,param_1);
    if ((*(byte *)(param_2 + 4) & 2) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *param_2;
    }
    lVar5 = *(longlong *)(lVar5 + 0x168);
    if (lVar5 == 0) {
      local_1b4 = 0;
      fVar13 = 0.0;
      local_1b0 = 0;
      fVar14 = 0.0;
      local_1ac = 0x3f800000;
      fVar15 = 0.0;
      fVar16 = 1.0;
    }
    else {
      fVar13 = *(float *)(lVar5 + 0x210);
      fVar14 = *(float *)(lVar5 + 0x214);
      fVar15 = *(float *)(lVar5 + 0x218);
      fVar16 = *(float *)(lVar5 + 0x21c);
      local_158 = fVar13;
      fStack_154 = fVar14;
      fStack_150 = fVar15;
      fStack_14c = fVar16;
    }
    pfVar8 = (float *)(**(code **)(*plVar7 + 0x18))(plVar7,local_178);
    fVar11 = fVar15 + fVar15;
    fVar10 = fVar14 + fVar14;
    fVar12 = fVar13 * (fVar13 + fVar13);
    fStack_1e0 = fVar16 * (fVar13 + fVar13);
    local_1c8 = *pfVar8;
    local_1f8 = 1.0 - (fVar15 * fVar11 + fVar14 * fVar10);
    fStack_1e4 = 1.0 - (fVar15 * fVar11 + fVar12);
    fStack_1c0 = pfVar8[2];
    fStack_1d4 = fVar14 * fVar11 - fStack_1e0;
    fStack_1e0 = fStack_1e0 + fVar14 * fVar11;
    local_1d8 = fVar16 * fVar10 + fVar13 * fVar11;
    fStack_1d0 = 1.0 - (fVar14 * fVar10 + fVar12);
    fStack_1f0 = fVar13 * fVar11 - fVar16 * fVar10;
    local_1e8 = fVar13 * fVar10 - fVar16 * fVar11;
    fStack_1f4 = fVar16 * fVar11 + fVar13 * fVar10;
    fStack_1c4 = pfVar8[1];
    uStack_1bc = 0x3f800000;
    local_208 = local_228;
    fStack_204 = local_224;
    fStack_200 = local_220;
    uStack_1fc = 0x3f800000;
    uStack_1cc = 0;
    uStack_1dc = 0;
    uStack_1ec = 0;
    fVar13 = local_1c8 * 1.0 + local_220 * local_1d8 + local_224 * local_1e8 + local_228 * local_1f8
    ;
    fVar14 = fStack_1c4 * 1.0 + local_220 * fStack_1d4 +
             local_224 * fStack_1e4 + local_228 * fStack_1f4;
    local_250 = fStack_1c0 * 1.0 + local_220 * fStack_1d0 +
                local_224 * fStack_1e0 + local_228 * fStack_1f0;
    fStack_22c = local_220 * 0.0 + 1.0 + local_224 * 0.0 + local_228 * 0.0;
    _local_238 = CONCAT44(fVar14,fVar13);
    local_240 = local_250;
    fStack_230 = local_250;
  }
  local_258 = CONCAT44(fVar14,fVar13);
LAB_142bb4f78:
  FUN_142b90120(&local_1a8,lVar4,param_1,param_2[3]);
  local_188 = local_1a8;
  plStack_180 = plStack_1a0;
  local_198 = 0;
  uStack_190 = 0;
  if (plStack_1a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_1a0 + 1) = (int)plStack_1a0[1] + 1;
    UNLOCK();
  }
  uVar6 = (**(code **)(param_1[0x8b] + 0x18))(param_1 + 0x8b,local_16c);
  uVar6 = FUN_142b80980(local_138,param_1 + 0x8b,lVar4,uVar6,&local_258,&local_188,&local_198);
  FPathFindingQuery::operator=(param_3,uVar6);
  FPathFindingQuery::~FPathFindingQuery(local_138);
  *(uint *)(param_3 + 0x34) =
       *(uint *)(param_3 + 0x34) ^ (*(uint *)(param_2 + 4) >> 3 ^ *(uint *)(param_3 + 0x34)) & 1;
  plVar7 = (longlong *)param_1[0xa9];
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x4b0))(plVar7,param_3);
  }
  if (plStack_1a0 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_1a0 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_1a0)(plStack_1a0);
      LOCK();
      piVar1 = (int *)((longlong)plStack_1a0 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_1a0 + 8))(plStack_1a0,1);
      }
    }
  }
  return 1;
}



// FUNCTION 142bb50a0 FUN_142bb50a0 body=17 status=ok
// SIG undefined FUN_142bb50a0(void)

void FUN_142bb50a0(longlong param_1,longlong param_2)

{
  if (param_2 != *(longlong *)(param_1 + 0x178)) {
    *(longlong *)(param_1 + 0x178) = param_2;
  }
  return;
}



// FUNCTION 142bb50c0 FUN_142bb50c0 body=469 status=ok
// SIG undefined FUN_142bb50c0(void)

undefined8 FUN_142bb50c0(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_18 [2];
  
  lVar3 = UNumericProperty::GetPrivateStaticClass();
  if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    lVar3 = UBoolProperty::GetPrivateStaticClass();
    if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      lVar3 = UNameProperty::GetPrivateStaticClass();
      if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
          lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        lVar3 = UObjectPropertyBase::GetPrivateStaticClass();
        if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
            != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && (param_1[0xe] != 0)) {
          lVar4 = UDataAsset::GetPrivateStaticClass();
          for (lVar3 = param_1[0xe]; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
            if (lVar3 == lVar4) {
              return 1;
            }
          }
        }
        lVar3 = UStructProperty::GetPrivateStaticClass();
        if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
            != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          (**(code **)(*param_1 + 0x298))(param_1,local_18,0,0);
          iVar2 = FUN_141592950(local_18,L"FVector",1,0,0xffffffff);
          if ((iVar2 != -1) ||
             (iVar2 = FUN_141592950(local_18,L"FRotator",1,0,0xffffffff), iVar2 != -1)) {
            if (local_18[0] == 0) {
              return 1;
            }
            FMemory::Free();
            return 1;
          }
          if (local_18[0] != 0) {
            FMemory::Free();
          }
        }
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 142bb52a0 CheckEventImplementationVersion body=136 status=ok
// SIG undefined CheckEventImplementationVersion(void)

uint FBTNodeBPImplementationHelper::CheckEventImplementationVersion
               (undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  lVar1 = FUN_141719c60(*(undefined8 *)(param_3 + 0x10),param_1,1);
  if ((lVar1 == 0) || (uVar3 = 1, *(longlong *)(lVar1 + 0x20) == param_4)) {
    uVar3 = 0;
  }
  lVar1 = FUN_141719c60(*(undefined8 *)(param_3 + 0x10),param_2,1);
  uVar2 = 0;
  if ((lVar1 != 0) && (uVar2 = 0, *(longlong *)(lVar1 + 0x20) != param_4)) {
    uVar2 = 2;
  }
  return uVar3 | uVar2;
}



// FUNCTION 142bb5330 FUN_142bb5330 body=250 status=ok
// SIG undefined FUN_142bb5330(void)

void FUN_142bb5330(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if (*(longlong *)(param_1 + 0x570) != 0) {
    plVar5 = (longlong *)0x0;
    plVar6 = plVar5;
    if (param_2 != (longlong *)0x0) {
      plVar2 = (longlong *)UGameplayTaskResource::GetPrivateStaticClass();
      plVar4 = param_2;
      do {
        plVar6 = param_2;
        if (plVar4 == plVar2) break;
        plVar4 = (longlong *)plVar4[6];
        plVar6 = plVar5;
      } while (plVar4 != (longlong *)0x0);
    }
    lVar3 = plVar6[0x1f];
    if (lVar3 == 0) {
      (**(code **)(*plVar6 + 0x368))(plVar6);
      lVar3 = plVar6[0x1f];
    }
    if (((*(byte *)(lVar3 + 0x30) & 1) == 0) && (*(int *)(lVar3 + 0x28) == -1)) {
      bVar1 = *(byte *)(lVar3 + 0x2c);
    }
    else {
      bVar1 = *(byte *)(lVar3 + 0x28);
    }
    if ((*(ushort *)(param_1 + 0x528) >> (bVar1 & 0x1f) & 1) == 0) {
      *(ushort *)(param_1 + 0x528) = *(ushort *)(param_1 + 0x528) | (ushort)(1 << (bVar1 & 0x1f));
      plVar6 = plVar5;
      if (param_2 != (longlong *)0x0) {
        plVar2 = (longlong *)UGameplayTaskResource::GetPrivateStaticClass();
        plVar4 = param_2;
        do {
          plVar6 = param_2;
          if (plVar4 == plVar2) break;
          plVar4 = (longlong *)plVar4[6];
          plVar6 = plVar5;
        } while (plVar4 != (longlong *)0x0);
      }
      lVar3 = UGameplayTask_ClaimResource::ClaimResource(param_1 + 0x510,param_2,0xc0,plVar6[3]);
      if (lVar3 != 0) {
        FUN_142b788f0(*(undefined8 *)(param_1 + 0x570),lVar3);
      }
    }
  }
  return;
}



// FUNCTION 142bb5430 FUN_142bb5430 body=302 status=ok
// SIG undefined FUN_142bb5430(void)

void FUN_142bb5430(undefined8 *param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  longlong lVar3;
  longlong *plVar4;
  void *_Src;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  bVar2 = *(byte *)(param_1 + 9);
  lVar3 = *(longlong *)(param_2 + 0x1e8);
  lVar7 = (ulonglong)bVar2 * 0x38 + lVar3;
  lVar8 = (longlong)*(int *)(lVar7 + 0x30);
  if (-1 < *(int *)(lVar7 + 0x30)) {
    iVar6 = *(int *)(param_2 + 0x200);
    if (((int)(bVar2 + 1) < *(int *)(param_2 + 0x1f0)) &&
       (lVar5 = (ulonglong)(uint)bVar2 * 0x38, *(int *)(lVar5 + 0x68 + lVar3) <= iVar6)) {
      iVar6 = *(int *)(lVar5 + 0x68 + lVar3);
    }
    for (; lVar8 < iVar6; lVar8 = lVar8 + 1) {
      plVar4 = *(longlong **)(*(longlong *)(param_2 + 0x1f8) + lVar8 * 8);
      (**(code **)(*plVar4 + 0x2a8))(plVar4,param_2);
    }
  }
  FUN_142bb55c0(param_1,param_2,*param_1,param_3);
  puVar1 = (undefined8 *)(lVar7 + 0x20);
  if (param_3 == 0) {
    *(undefined4 *)(lVar7 + 0x28) = 0;
    if (*(int *)(lVar7 + 0x2c) != 0) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(puVar1,0);
      return;
    }
  }
  else if (puVar1 != param_1 + 7) {
    iVar6 = *(int *)(param_1 + 8);
    _Src = (void *)param_1[7];
    *(int *)(lVar7 + 0x28) = iVar6;
    if ((iVar6 == 0) && (*(int *)(lVar7 + 0x2c) == 0)) {
      *(undefined4 *)(lVar7 + 0x2c) = 0;
      return;
    }
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar1,iVar6);
    _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar6);
  }
  return;
}



// FUNCTION 142bb5560 FUN_142bb5560 body=93 status=ok
// SIG undefined FUN_142bb5560(void)

void FUN_142bb5560(longlong param_1)

{
  FUN_142bcb3d0(param_1,1);
  FUN_142bc7f90(param_1);
  TArray<FBehaviorTreeInstanceId,FDefaultAllocator>::Reset(param_1 + 0x1e8,0);
  FUN_142bc9050(param_1 + 0x1d8,0);
  *(undefined4 *)(param_1 + 0x200) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x204)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x1f8,0);
    return;
  }
  return;
}



// FUNCTION 142bb55c0 FUN_142bb55c0 body=789 status=ok
// SIG undefined FUN_142bb55c0(void)

void FUN_142bb55c0(longlong param_1,longlong param_2,longlong *param_3,undefined4 param_4)

{
  int iVar1;
  ushort uVar2;
  int *piVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int local_res8;
  longlong local_48;
  
  iVar5 = 0;
  if (0 < (int)param_3[0xe]) {
    lVar7 = 0;
    do {
      plVar8 = *(longlong **)(lVar7 + param_3[0xd]);
      lVar6 = (ulonglong)*(ushort *)((longlong)plVar8 + 0x52) + *(longlong *)(param_1 + 0x38);
      if ((*(byte *)((longlong)plVar8 + 0x55) & 4) == 0) {
LAB_142bb5643:
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x288))(plVar8,param_2,lVar6,param_4);
        }
      }
      else {
        uVar2 = (**(code **)(*plVar8 + 0x2b0))();
        if ((uVar2 != 0) &&
           (piVar3 = (int *)(lVar6 - ((ulonglong)(uVar2 + 3) & 0xfffffffffffffffc)),
           piVar3 != (int *)0x0)) {
          iVar1 = *piVar3;
          if ((-1 < iVar1) && (iVar1 < *(int *)(param_2 + 0x200))) {
            plVar8 = *(longlong **)(*(longlong *)(param_2 + 0x1f8) + (longlong)iVar1 * 8);
            goto LAB_142bb5643;
          }
        }
      }
      iVar5 = iVar5 + 1;
      lVar7 = lVar7 + 8;
    } while (iVar5 < (int)param_3[0xe]);
  }
  lVar7 = (ulonglong)*(ushort *)((longlong)param_3 + 0x52) + *(longlong *)(param_1 + 0x38);
  plVar8 = param_3;
  if ((*(byte *)((longlong)param_3 + 0x55) & 4) != 0) {
    uVar2 = (**(code **)(*param_3 + 0x2b0))();
    if ((uVar2 == 0) ||
       (piVar3 = (int *)(lVar7 - ((ulonglong)(uVar2 + 3) & 0xfffffffffffffffc)),
       piVar3 == (int *)0x0)) goto LAB_142bb56cb;
    iVar5 = *piVar3;
    if ((iVar5 < 0) || (*(int *)(param_2 + 0x200) <= iVar5)) goto LAB_142bb56cb;
    plVar8 = *(longlong **)(*(longlong *)(param_2 + 0x1f8) + (longlong)iVar5 * 8);
  }
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x288))(plVar8,param_2,lVar7,param_4);
  }
LAB_142bb56cb:
  local_res8 = 0;
  if (0 < (int)param_3[0xc]) {
    local_48 = 0;
    do {
      iVar5 = 0;
      plVar8 = (longlong *)(param_3[0xb] + local_48);
      if (0 < (int)plVar8[3]) {
        lVar7 = 0;
        do {
          plVar4 = *(longlong **)(lVar7 + plVar8[2]);
          lVar6 = (ulonglong)*(ushort *)((longlong)plVar4 + 0x52) + *(longlong *)(param_1 + 0x38);
          if ((*(byte *)((longlong)plVar4 + 0x55) & 4) == 0) {
LAB_142bb5763:
            if (plVar4 != (longlong *)0x0) {
              (**(code **)(*plVar4 + 0x288))(plVar4,param_2,lVar6,param_4);
            }
          }
          else {
            uVar2 = (**(code **)(*plVar4 + 0x2b0))();
            if ((uVar2 != 0) &&
               (piVar3 = (int *)(lVar6 - ((ulonglong)(uVar2 + 3) & 0xfffffffffffffffc)),
               piVar3 != (int *)0x0)) {
              iVar1 = *piVar3;
              if ((-1 < iVar1) && (iVar1 < *(int *)(param_2 + 0x200))) {
                plVar4 = *(longlong **)(*(longlong *)(param_2 + 0x1f8) + (longlong)iVar1 * 8);
                goto LAB_142bb5763;
              }
            }
          }
          iVar5 = iVar5 + 1;
          lVar7 = lVar7 + 8;
        } while (iVar5 < (int)plVar8[3]);
      }
      if (*plVar8 == 0) {
        plVar4 = (longlong *)plVar8[1];
        if (plVar4 != (longlong *)0x0) {
          iVar5 = 0;
          if (0 < (int)plVar4[0xc]) {
            lVar7 = 0;
            do {
              plVar4 = *(longlong **)(lVar7 + plVar4[0xb]);
              lVar6 = (ulonglong)*(ushort *)((longlong)plVar4 + 0x52) +
                      *(longlong *)(param_1 + 0x38);
              if ((*(byte *)((longlong)plVar4 + 0x55) & 4) == 0) {
LAB_142bb5817:
                if (plVar4 != (longlong *)0x0) {
                  (**(code **)(*plVar4 + 0x288))(plVar4,param_2,lVar6,param_4);
                }
              }
              else {
                uVar2 = (**(code **)(*plVar4 + 0x2b0))();
                if ((uVar2 != 0) &&
                   (piVar3 = (int *)(lVar6 - ((ulonglong)(uVar2 + 3) & 0xfffffffffffffffc)),
                   piVar3 != (int *)0x0)) {
                  iVar1 = *piVar3;
                  if ((-1 < iVar1) && (iVar1 < *(int *)(param_2 + 0x200))) {
                    plVar4 = *(longlong **)(*(longlong *)(param_2 + 0x1f8) + (longlong)iVar1 * 8);
                    goto LAB_142bb5817;
                  }
                }
              }
              plVar4 = (longlong *)plVar8[1];
              iVar5 = iVar5 + 1;
              lVar7 = lVar7 + 8;
            } while (iVar5 < (int)plVar4[0xc]);
          }
          lVar7 = (ulonglong)*(ushort *)((longlong)plVar4 + 0x52) + *(longlong *)(param_1 + 0x38);
          if ((*(byte *)((longlong)plVar4 + 0x55) & 4) == 0) {
LAB_142bb588a:
            if (plVar4 != (longlong *)0x0) {
              (**(code **)(*plVar4 + 0x288))(plVar4,param_2,lVar7,param_4);
            }
          }
          else {
            uVar2 = (**(code **)(*plVar4 + 0x2b0))();
            if ((uVar2 != 0) &&
               (piVar3 = (int *)(lVar7 - ((ulonglong)(uVar2 + 3) & 0xfffffffffffffffc)),
               piVar3 != (int *)0x0)) {
              iVar5 = *piVar3;
              if ((-1 < iVar5) && (iVar5 < *(int *)(param_2 + 0x200))) {
                plVar4 = *(longlong **)(*(longlong *)(param_2 + 0x1f8) + (longlong)iVar5 * 8);
                goto LAB_142bb588a;
              }
            }
          }
        }
      }
      else {
        FUN_142bb55c0(param_1,param_2,*plVar8,param_4);
      }
      local_res8 = local_res8 + 1;
      local_48 = local_48 + 0x30;
    } while (local_res8 < (int)param_3[0xc]);
  }
  return;
}



// FUNCTION 142bb58e0 FUN_142bb58e0 body=51 status=ok
// SIG undefined FUN_142bb58e0(void)

void FUN_142bb58e0(longlong param_1,undefined8 param_2,char param_3)

{
  if ((param_3 != '\0') && (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x278))();
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 142bb59a0 ClearBlackboardValue body=60 status=ok
// SIG undefined ClearBlackboardValue(void)

void UBTFunctionLibrary::ClearBlackboardValue(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_142bbe2b0();
  if (lVar2 != 0) {
    uVar1 = FUN_142bbd6b0(lVar2,param_2 + 0x10);
    FUN_142bb5c50(lVar2,uVar1);
  }
  return;
}



// FUNCTION 142bb59e0 FUN_142bb59e0 body=120 status=ok
// SIG undefined FUN_142bb59e0(void)

void FUN_142bb59e0(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 local_res8;
  undefined4 local_resc;
  
  if ((int)(param_2 & 0xff) < *(int *)(param_1 + 0x538)) {
    FWeakObjectPtr::operator=(&local_res8,0);
    lVar1 = (ulonglong)(param_2 & 0xff) * 0x14;
    lVar2 = *(longlong *)(param_1 + 0x530);
    *(undefined4 *)(lVar2 + lVar1) = local_res8;
    *(undefined4 *)(lVar2 + 4 + lVar1) = local_resc;
    lVar2 = *(longlong *)(param_1 + 0x530);
    *(undefined8 *)(lVar2 + 8 + lVar1) = DAT_146690f20;
    *(undefined4 *)(lVar2 + 0x10 + lVar1) = DAT_146690f28;
  }
  return;
}



// FUNCTION 142bb5a60 ClearLock body=39 status=ok
// SIG undefined ClearLock(void)

void FAIResourceLock::ClearLock(ushort *param_1,uint param_2)

{
  char *pcVar1;
  
  if (((char)param_1[0xc] == '\0') ||
     (pcVar1 = (char *)((ulonglong)(param_2 & 0xff) + *(longlong *)(param_1 + 4)),
     *pcVar1 = *pcVar1 + -1,
     *(char *)((ulonglong)(param_2 & 0xff) + *(longlong *)(param_1 + 4)) == '\0')) {
    *param_1 = *param_1 & ~(ushort)(1 << (param_2 & 0x1f));
  }
  return;
}



// FUNCTION 142bb5a90 ClearPath body=237 status=ok
// SIG undefined ClearPath(void)

void UPawnAction_Move::ClearPath(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong local_18;
  longlong *local_10;
  
  if (param_1[0x1c] != 0) {
    lVar5 = (**(code **)(*param_1 + 0x148))();
    if (lVar5 != 0) {
      if (*(longlong *)(lVar5 + 400) == 0) {
        uVar6 = *(undefined8 *)(lVar5 + 0x3f8);
      }
      else {
        uVar6 = *(undefined8 *)(*(longlong *)(lVar5 + 400) + 0x90);
      }
      FUN_142880530(uVar6,param_1 + 0x1c);
      param_1[0x1c] = 0;
    }
  }
  plVar3 = param_1 + 0x18;
  if (*plVar3 != 0) {
    TBaseMulticastDelegate<void>::Remove(*plVar3 + 0x80,param_1[0x1a]);
    local_10 = (longlong *)0x0;
    if (plVar3 != &local_18) {
      *plVar3 = 0;
      local_18 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x19,&local_10);
      plVar3 = local_10;
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_10 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_10)(local_10);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_10 + 8))(local_10,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142bb5b80 ClearTimers body=164 status=ok
// SIG undefined ClearTimers(void)

void UPawnAction_Move::ClearTimers(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    FUN_142880530(uVar2,param_1 + 0x1b);
    param_1[0x1b] = 0;
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    FUN_142880530(uVar2,param_1 + 0x1c);
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
  }
  return;
}



// FUNCTION 142bb5c30 FUN_142bb5c30 body=30 status=ok
// SIG undefined FUN_142bb5c30(void)

void FUN_142bb5c30(undefined8 param_1)

{
  undefined1 uVar1;
  
  uVar1 = FUN_142bbd6b0();
  FUN_142bb5c50(param_1,uVar1);
  return;
}



// FUNCTION 142bb5c50 FUN_142bb5c50 body=1164 status=ok
// SIG undefined FUN_142bb5c50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142bb5c50(longlong param_1,byte param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined1 auStack_158 [32];
  int *local_138;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  uint local_118 [2];
  undefined1 local_110 [192];
  undefined1 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  if (((*(longlong *)(param_1 + 0x180) == 0) ||
      (lVar5 = FUN_142bbd600(), *(int *)(param_1 + 400) == 0)) ||
     (*(int *)(param_1 + 0x1a0) <= (int)(uint)param_2)) {
    return;
  }
  piVar11 = (int *)((ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x198) + (ulonglong)param_2 * 2)
                   + *(longlong *)(param_1 + 0x188));
  if (piVar11 == (int *)0x0) {
    return;
  }
  plVar8 = *(longlong **)(lVar5 + 8);
  plVar15 = (longlong *)0x0;
  piVar12 = piVar11;
  if ((*(byte *)((longlong)plVar8 + 0x2b) & 2) != 0) {
    iVar13 = *piVar11;
    if ((iVar13 < 0) || (*(int *)(param_1 + 0x1b0) <= iVar13)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x1a8) + (longlong)iVar13 * 8);
      piVar12 = piVar11 + 1;
    }
    else {
      plVar8 = plVar15;
      piVar12 = piVar11 + 1;
    }
  }
  cVar3 = (**(code **)(*plVar8 + 0x2d8))(plVar8,param_1,piVar12);
  if (cVar3 != '\0') {
    return;
  }
  plVar8 = *(longlong **)(lVar5 + 8);
  piVar12 = piVar11;
  if ((*(byte *)((longlong)plVar8 + 0x2b) & 2) != 0) {
    iVar13 = *piVar11;
    if ((iVar13 < 0) || (*(int *)(param_1 + 0x1b0) <= iVar13)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x1a8) + (longlong)iVar13 * 8);
      piVar12 = piVar11 + 1;
    }
    else {
      plVar8 = plVar15;
      piVar12 = piVar11 + 1;
    }
  }
  (**(code **)(*plVar8 + 0x2d0))(plVar8,param_1,piVar12);
  FUN_142bc3660(param_1,param_2);
  if ((*(byte *)(*(longlong *)(param_1 + 0x180) + 0x48) & 1) == 0) {
    return;
  }
  cVar3 = FUN_142bc1e70(param_1,param_2);
  if (cVar3 == '\0') {
    return;
  }
  lVar16 = *(longlong *)(lVar5 + 8);
  bVar7 = *(byte *)(lVar16 + 0x2b) & 1;
  if (bVar7 != 0) {
    lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x1a8) + (ulonglong)param_2 * 8);
  }
  lVar6 = *(longlong *)(param_1 + 0x120);
  if (((lVar6 != 0) || (lVar6 = FUN_1423407b0(param_1), lVar6 != 0)) &&
     (plVar8 = *(longlong **)(lVar6 + 0x150), plVar8 != (longlong *)0x0)) {
    lVar6 = FUN_142c32730();
    if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_142bb5e50;
  }
  plVar8 = plVar15;
LAB_142bb5e50:
  UAISystem::FBlackboardDataToComponentsIterator::FBlackboardDataToComponentsIterator
            (local_118,plVar8 + 0x1a,*(undefined8 *)(param_1 + 0x180));
  do {
    uVar14 = (ulonglong)local_118[0];
    do {
      iVar13 = (int)uVar14;
      if (iVar13 < local_48) {
        puVar10 = local_110;
        if (local_50 != (undefined1 *)0x0) {
          puVar10 = local_50;
        }
        if (*(int *)(puVar10 + (longlong)iVar13 * 0x18 + 0x10) == -1) goto LAB_142bb5ea0;
        bVar2 = true;
      }
      else {
LAB_142bb5ea0:
        bVar2 = false;
      }
      if (!bVar2) {
        if (local_50 == (undefined1 *)0x0) {
          return;
        }
        FMemory::Free(local_50);
        return;
      }
      puVar10 = local_110;
      if (local_50 != (undefined1 *)0x0) {
        puVar10 = local_50;
      }
      lVar6 = FWeakObjectPtr::Get(**(longlong **)(puVar10 + (longlong)iVar13 * 0x18) +
                                  ((longlong)*(int *)(puVar10 + (longlong)iVar13 * 0x18 + 0x10) * 3
                                  + 1) * 8);
      if ((lVar6 != 0) && (cVar3 = FUN_142bcaf00(param_1,lVar6), cVar3 != '\0')) {
        if (*(longlong *)(lVar6 + 0x180) == 0) {
          bVar4 = 0xff;
        }
        else {
          bVar4 = UBlackboardData::GetKeyID(*(longlong *)(lVar6 + 0x180),lVar5);
        }
        if (bVar4 != 0xff) {
          plVar8 = *(longlong **)(lVar5 + 8);
          if ((*(byte *)((longlong)plVar8 + 0x2b) & 1) != 0) {
            plVar8 = *(longlong **)(*(longlong *)(lVar6 + 0x1a8) + (ulonglong)(uint)bVar4 * 8);
          }
          plVar9 = plVar15;
          if ((*(int *)(lVar6 + 400) != 0) && ((int)(uint)bVar4 < *(int *)(lVar6 + 0x1a0))) {
            plVar9 = (longlong *)
                     ((ulonglong)*(ushort *)(*(longlong *)(lVar6 + 0x198) + (ulonglong)bVar4 * 2) +
                     *(longlong *)(lVar6 + 0x188));
          }
          local_138 = piVar11 + bVar7;
          (**(code **)(*plVar8 + 0x2a8))
                    (plVar8,lVar6,(ulonglong)bVar7 * 4 + (longlong)plVar9,lVar16);
          FUN_142bc3660(lVar6,bVar4);
        }
      }
      puVar10 = local_110;
      if (local_50 != (undefined1 *)0x0) {
        puVar10 = local_50;
      }
      lVar6 = (longlong)(int)local_118[0];
      iVar13 = *(int *)(puVar10 + lVar6 * 0x18 + 0x14);
      *(int *)(puVar10 + lVar6 * 0x18 + 0x10) = iVar13;
      puVar1 = (undefined8 *)(puVar10 + lVar6 * 0x18);
      while (iVar13 != -1) {
        *(undefined4 *)((longlong)puVar1 + 0x14) =
             *(undefined4 *)(*(longlong *)*puVar1 + 0x10 + (longlong)iVar13 * 0x18);
        lVar6 = *(longlong *)*puVar1;
        local_120 = *(undefined4 *)(lVar6 + (longlong)iVar13 * 0x18);
        local_11c = *(undefined4 *)(lVar6 + 4 + (longlong)iVar13 * 0x18);
        local_128 = *(undefined4 *)(puVar1 + 1);
        local_124 = *(undefined4 *)((longlong)puVar1 + 0xc);
        cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(&local_120,&local_128);
        if (cVar3 != '\0') break;
        iVar13 = *(int *)((longlong)puVar1 + 0x14);
        *(int *)(puVar1 + 2) = iVar13;
      }
      uVar14 = (ulonglong)(int)local_118[0];
      puVar10 = local_110;
      if (local_50 != (undefined1 *)0x0) {
        puVar10 = local_50;
      }
    } while ((*(int *)(puVar10 + uVar14 * 0x18 + 0x10) != -1) ||
            (local_48 + -1 <= (int)local_118[0]));
    local_118[0] = local_118[0] + 1;
    UAISystem::FBlackboardDataToComponentsIterator::TryMoveIteratorToParentBlackboard(local_118);
  } while( true );
}



// FUNCTION 142bb60e0 FUN_142bb60e0 body=309 status=ok
// SIG undefined FUN_142bb60e0(void)

void FUN_142bb60e0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  longlong local_28 [2];
  
  bVar6 = false;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x58);
  do {
    if ((plVar1 == (longlong *)0x0) || (plVar1[4] == param_2)) {
      return;
    }
    if ((((ulonglong)plVar1[7] >> 0xd & 1) == 0) && (((ulonglong)plVar1[7] >> 0x10 & 1) == 0)) {
      lVar4 = UStructProperty::GetPrivateStaticClass();
      if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        bVar6 = true;
        uVar5 = (**(code **)(*plVar1 + 0x298))(plVar1,local_28,0,0);
        iVar3 = FUN_141592950(uVar5,L"FBlackboardKeySelector",1,0,0xffffffff);
        if (iVar3 == -1) goto LAB_142bb61bc;
        bVar2 = true;
      }
      else {
LAB_142bb61bc:
        bVar2 = false;
      }
      if ((bVar6) && (bVar6 = false, local_28[0] != 0)) {
        FMemory::Free();
      }
      if (bVar2) {
        TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
        AddUniqueImpl<UGeometryCacheComponent_*_const_&>
                  (param_3,param_1 + 0x10 + (longlong)*(int *)((longlong)plVar1 + 0x44));
      }
    }
    plVar1 = (longlong *)plVar1[10];
  } while( true );
}



// FUNCTION 142bb6220 FUN_142bb6220 body=165 status=ok
// SIG undefined FUN_142bb6220(void)

void FUN_142bb6220(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  
  *(undefined4 *)(param_3 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_3 + 0xc)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_3,0);
  }
  for (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x58);
      (lVar2 != 0 && (*(longlong *)(lVar2 + 0x20) != param_2)); lVar2 = *(longlong *)(lVar2 + 0x50))
  {
    if (((*(ulonglong *)(lVar2 + 0x38) >> 0xd & 1) == 0) &&
       (((*(ulonglong *)(lVar2 + 0x38) >> 0x10 & 1) != 0 &&
        (cVar3 = FUN_142bb50c0(lVar2), cVar3 != '\0')))) {
      iVar1 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
      }
      *(longlong *)(*param_3 + (longlong)iVar1 * 8) = lVar2;
    }
  }
  return;
}



// FUNCTION 142bb62d0 CollectPropertyDescription body=567 status=ok
// SIG undefined CollectPropertyDescription(void)

longlong *
BlueprintNodeHelpers::CollectPropertyDescription
          (longlong *param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  void *_Dst;
  void *_Src;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong lVar10;
  longlong local_38 [2];
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar10 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x58);
  if (lVar10 == 0) {
    return param_1;
  }
  do {
    if (*(longlong *)(lVar10 + 0x20) == param_3) {
      return param_1;
    }
    if (((*(ulonglong *)(lVar10 + 0x38) >> 0xd & 1) == 0) &&
       ((*(ulonglong *)(lVar10 + 0x38) >> 0x10 & 1) == 0)) {
      plVar6 = (longlong *)*param_4;
      plVar1 = plVar6 + (int)param_4[1];
      for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
        if (*plVar6 == lVar10) goto LAB_142bb64c4;
      }
      lVar7 = UClassProperty::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) {
        lVar7 = UStructProperty::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((!bVar2) && (cVar3 = FUN_142bb50c0(lVar10), cVar3 == '\0')) goto LAB_142bb64c4;
      }
      iVar4 = (int)param_1[1];
      if ((iVar4 != 0) && (iVar4 + -1 != 0)) {
        iVar9 = iVar4 + -1;
        if (iVar4 < 1) {
          iVar9 = 0;
        }
        iVar4 = (iVar4 < 1) + 1 + iVar4;
        *(int *)(param_1 + 1) = iVar4;
        if (*(int *)((longlong)param_1 + 0xc) < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
        }
        *(undefined2 *)(*param_1 + (longlong)iVar9 * 2) = 10;
        *(undefined2 *)(*param_1 + 2 + (longlong)iVar9 * 2) = 0;
      }
      puVar8 = (undefined8 *)FUN_142bb8ec0(local_38,lVar10,*(int *)(lVar10 + 0x44) + param_2);
      iVar4 = *(int *)(puVar8 + 1) + -1;
      if (*(int *)(puVar8 + 1) == 0) {
        iVar4 = 0;
      }
      _Src = (void *)*puVar8;
      if (iVar4 != 0) {
        iVar9 = (int)param_1[1];
        iVar5 = (uint)(iVar9 == 0) + iVar9 + iVar4;
        *(int *)(param_1 + 1) = iVar5;
        if (*(int *)((longlong)param_1 + 0xc) < iVar5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar9);
        }
        _Dst = (void *)(*param_1 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)) * 2);
        ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar4 * 2);
        *(undefined2 *)((longlong)iVar4 * 2 + (longlong)_Dst) = 0;
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
    }
LAB_142bb64c4:
    lVar10 = *(longlong *)(lVar10 + 0x50);
    if (lVar10 == 0) {
      return param_1;
    }
  } while( true );
}



// FUNCTION 142bb6510 FUN_142bb6510 body=313 status=ok
// SIG undefined FUN_142bb6510(void)

void FUN_142bb6510(longlong param_1,longlong *param_2,byte param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  if ((*(int *)(param_1 + 400) == 0) || (*(int *)(param_1 + 0x1a0) <= (int)(uint)param_3)) {
    lVar5 = 0;
  }
  else {
    lVar5 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x198) + (ulonglong)param_3 * 2) +
            *(longlong *)(param_1 + 0x188);
  }
  lVar7 = *(longlong *)(param_1 + 0x1a8);
  plVar4 = *(longlong **)(lVar7 + (ulonglong)param_3 * 8);
  bVar8 = plVar4 != (longlong *)0x0;
  if ((*(int *)(param_1 + 400) == 0) || (*(int *)(param_1 + 0x1a0) <= (int)((uint)param_4 & 0xff)))
  {
    lVar6 = 0;
  }
  else {
    lVar6 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x198) + (param_4 & 0xff) * 2) +
            *(longlong *)(param_1 + 0x188);
  }
  lVar1 = (param_4 & 0xff) * 8;
  lVar2 = *(longlong *)(lVar1 + lVar7);
  if (plVar4 == (longlong *)0x0) {
    if (param_2 != (longlong *)0x0) {
      plVar3 = (longlong *)UBlackboardKeyType::GetPrivateStaticClass();
      plVar4 = param_2;
      do {
        if (plVar4 == plVar3) goto LAB_142bb65f0;
        plVar4 = (longlong *)plVar4[6];
      } while (plVar4 != (longlong *)0x0);
    }
    param_2 = (longlong *)0x0;
LAB_142bb65f0:
    plVar4 = (longlong *)param_2[0x1f];
    if (plVar4 == (longlong *)0x0) {
      (**(code **)(*param_2 + 0x368))(param_2);
      plVar4 = (longlong *)param_2[0x1f];
    }
    lVar7 = *(longlong *)(param_1 + 0x1a8);
  }
  (**(code **)(*plVar4 + 0x2a0))
            (plVar4,param_1,(ulonglong)(-(uint)bVar8 & 4) + lVar5,*(undefined8 *)(lVar1 + lVar7),
             (ulonglong)(-(uint)(lVar2 != 0) & 4) + lVar6);
  return;
}



// FUNCTION 142bb6650 CompareValues body=39 status=ok
// SIG undefined CompareValues(void)

bool UBlackboardKeyType::CompareValues
               (longlong param_1,undefined8 param_2,void *param_3,undefined8 param_4,void *param_5)

{
  int iVar1;
  
  iVar1 = ::_guard_xfg_dispatch_icall_nop(param_3,param_5,(ulonglong)*(ushort *)(param_1 + 0x28));
  return iVar1 != 0;
}



// FUNCTION 142bb66a0 CompareValues body=78 status=ok
// SIG undefined CompareValues(void)

bool UBlackboardKeyType_Class::CompareValues
               (undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_res18;
  undefined4 local_res1c;
  
  local_res18 = *param_3;
  local_res1c = param_3[1];
  lVar2 = FWeakObjectPtr::Get(&local_res18);
  puVar1 = (undefined4 *)CONCAT44(param_5._4_4_,(undefined4)param_5);
  param_5._0_4_ = *puVar1;
  param_5._4_4_ = puVar1[1];
  lVar3 = FWeakObjectPtr::Get(&param_5);
  return lVar2 != lVar3;
}



// FUNCTION 142bb6790 CompareValues body=123 status=ok
// SIG undefined CompareValues(void)

bool UBlackboardKeyType_Object::CompareValues
               (undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_res18;
  undefined4 local_res1c;
  
  lVar2 = 0;
  if (param_3 != (undefined4 *)0x0) {
    local_res18 = *param_3;
    local_res1c = param_3[1];
    lVar2 = FWeakObjectPtr::Get(&local_res18);
  }
  puVar1 = (undefined4 *)CONCAT44(param_5._4_4_,(undefined4)param_5);
  if (puVar1 != (undefined4 *)0x0) {
    param_5._0_4_ = *puVar1;
    param_5._4_4_ = puVar1[1];
    lVar3 = FWeakObjectPtr::Get(&param_5);
    return lVar2 != lVar3;
  }
  return lVar2 != 0;
}



// FUNCTION 142bb6810 CompareValues body=228 status=ok
// SIG undefined CompareValues(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool UBlackboardKeyType_Rotator::CompareValues
               (undefined4 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
               undefined8 *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar1 = (float)DAT_146b2c520;
  fVar2 = DAT_146b2c520._4_4_;
  fVar3 = DAT_146b2c520._8_4_;
  fVar4 = DAT_146b2c520._12_4_;
  fVar8 = (float)*param_3 - (float)*param_5;
  fVar9 = *(float *)((longlong)param_3 + 4) - (float)((ulonglong)*param_5 >> 0x20);
  auVar6._4_4_ = fVar9;
  auVar6._0_4_ = fVar8;
  auVar6._8_4_ = *(float *)(param_3 + 1) - *(float *)(param_5 + 1);
  auVar6._12_4_ = 0;
  auVar6 = divps(auVar6,_DAT_146b2c520);
  fVar8 = fVar8 - (float)(int)auVar6._0_4_ * fVar1;
  fVar9 = fVar9 - (float)(int)auVar6._4_4_ * fVar2;
  fVar10 = (*(float *)(param_3 + 1) - *(float *)(param_5 + 1)) - (float)(int)auVar6._8_4_ * fVar3;
  fVar11 = 0.0 - (float)(int)auVar6._12_4_ * fVar4;
  fVar8 = (float)(((uint)(fVar1 + fVar8) ^ (uint)fVar8) & -(uint)(0.0 <= fVar8) ^
                 (uint)(fVar1 + fVar8));
  fVar9 = (float)(((uint)(fVar2 + fVar9) ^ (uint)fVar9) & -(uint)(0.0 <= fVar9) ^
                 (uint)(fVar2 + fVar9));
  fVar10 = (float)(((uint)(fVar3 + fVar10) ^ (uint)fVar10) & -(uint)(0.0 <= fVar10) ^
                  (uint)(fVar3 + fVar10));
  fVar11 = (float)(((uint)(fVar4 + fVar11) ^ (uint)fVar11) & -(uint)(0.0 <= fVar11) ^
                  (uint)(fVar4 + fVar11));
  auVar7._4_4_ = -(uint)(0.0001 < (float)((((uint)(fVar9 - fVar2) ^ (uint)fVar9) &
                                           -(uint)(fRam0000000146b2c514 < fVar9) ^ (uint)fVar9) &
                                         uRam0000000146b2c504));
  auVar7._0_4_ = -(uint)(0.0001 < (float)((((uint)(fVar8 - fVar1) ^ (uint)fVar8) &
                                           -(uint)(_DAT_146b2c510 < fVar8) ^ (uint)fVar8) &
                                         _DAT_146b2c500));
  auVar7._8_4_ = -(uint)(0.0001 < (float)((((uint)(fVar10 - fVar3) ^ (uint)fVar10) &
                                           -(uint)(fRam0000000146b2c518 < fVar10) ^ (uint)fVar10) &
                                         uRam0000000146b2c508));
  auVar7._12_4_ =
       -(uint)(0.0001 < (float)((((uint)(fVar11 - fVar4) ^ (uint)fVar11) &
                                 -(uint)(fRam0000000146b2c51c < fVar11) ^ (uint)fVar11) &
                               uRam0000000146b2c50c));
  iVar5 = movmskps(param_1,auVar7);
  return iVar5 != 0;
}



// FUNCTION 142bb6900 CompareValues body=277 status=ok
// SIG undefined CompareValues(void)

bool UBlackboardKeyType_String::CompareValues
               (longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  short sVar1;
  short sVar2;
  void *pvVar3;
  short *psVar4;
  short *psVar5;
  longlong lVar6;
  short *psVar7;
  short *psVar8;
  int iVar9;
  short *local_18;
  int local_10;
  
  iVar9 = *(int *)(param_1 + 0x38);
  psVar5 = (short *)0x0;
  pvVar3 = *(void **)(param_1 + 0x30);
  local_18 = (short *)0x0;
  psVar7 = psVar5;
  if (iVar9 != 0) {
    local_10 = iVar9;
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,iVar9,0);
    psVar7 = local_18;
    ::_guard_xfg_dispatch_icall_nop(local_18,pvVar3,(longlong)iVar9 * 2);
    iVar9 = local_10;
  }
  local_10 = *(int *)(param_4 + 0x38);
  lVar6 = (longlong)local_10;
  pvVar3 = *(void **)(param_4 + 0x30);
  local_18 = (short *)0x0;
  if (local_10 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_10,0);
    psVar5 = local_18;
    ::_guard_xfg_dispatch_icall_nop(local_18,pvVar3,lVar6 * 2);
  }
  psVar8 = &DAT_143f3eda8;
  if (local_10 != 0) {
    psVar8 = psVar5;
  }
  psVar4 = &DAT_143f3eda8;
  if (iVar9 != 0) {
    psVar4 = psVar7;
  }
  lVar6 = (longlong)psVar8 - (longlong)psVar4;
  do {
    sVar1 = *psVar4;
    sVar2 = *(short *)((longlong)psVar4 + lVar6);
    if (sVar1 != sVar2) break;
    psVar4 = psVar4 + 1;
  } while (sVar2 != 0);
  if (psVar5 != (short *)0x0) {
    FMemory::Free(psVar5);
  }
  if (psVar7 != (short *)0x0) {
    FMemory::Free(psVar7);
  }
  return sVar1 != sVar2;
}



// FUNCTION 142bb6a20 CompareValues body=129 status=ok
// SIG undefined CompareValues(void)

undefined8
UBlackboardKeyType_Vector::CompareValues
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
          undefined8 *param_5)

{
  float fStack_24;
  float fStack_14;
  
  if (((ABS((float)*param_3 - (float)*param_5) <= 0.0001) &&
      (fStack_24 = (float)((ulonglong)*param_3 >> 0x20),
      fStack_14 = (float)((ulonglong)*param_5 >> 0x20), ABS(fStack_24 - fStack_14) <= 0.0001)) &&
     (ABS(*(float *)(param_3 + 1) - *(float *)(param_5 + 1)) <= 0.0001)) {
    return 0;
  }
  return 1;
}



// FUNCTION 142bb6ab0 FUN_142bb6ab0 body=882 status=ok
// SIG undefined FUN_142bb6ab0(void)

void FUN_142bb6ab0(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined8 uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined2 local_res8;
  undefined2 local_resa;
  undefined2 local_res20;
  undefined2 local_res22;
  longlong local_38 [2];
  
  if ((*(char *)(param_1 + 100) != '\0') &&
     (lVar9 = UBehaviorTreeComponent::FindTemplateNode(param_2,*(undefined8 *)(param_1 + 0x48)),
     lVar9 != 0)) {
    iVar8 = *(int *)(param_2 + 0x1e0);
    if (iVar8 != 0) {
      plVar13 = *(longlong **)(param_2 + 0x1d8);
      uVar11 = 0;
      if (plVar13[(ulonglong)*(ushort *)(param_2 + 800) * 0xc + 2] == lVar9) {
        uVar15 = (uint)*(ushort *)(param_2 + 800);
LAB_142bb6b6a:
        if (uVar15 != 0xffffffff) {
          uVar12 = uVar11;
          if ((-1 < (int)uVar15) && ((int)uVar15 < iVar8)) {
            uVar12 = (ulonglong)*(ushort *)(param_1 + 0x52) +
                     plVar13[(longlong)(int)uVar15 * 0xc + 7];
          }
          cVar5 = FUN_142bc1d80(param_2,param_1,*(undefined1 *)(param_1 + 0x59));
          cVar6 = FUN_142bcec70(param_1,param_2,uVar12);
          if (((*(byte *)(param_2 + 0x323) & 4) == 0) &&
             (((*(longlong *)(param_2 + 0x260) == 0 && ((*(byte *)(param_2 + 0x268) & 1) == 0)) ||
              ((*(byte *)(param_2 + 0x268) & 2) != 0)))) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (cVar5 == cVar6) {
            if (cVar5 == '\0') {
              if (cVar6 != '\0') {
                return;
              }
              lVar9 = *(longlong *)(param_1 + 0x48);
              if (lVar9 == 0) {
                return;
              }
              if (*(int *)(lVar9 + 0x60) <= (int)(uint)*(byte *)(param_1 + 0x59)) {
                return;
              }
              lVar9 = *(longlong *)
                       (*(longlong *)(lVar9 + 0x58) + (ulonglong)*(byte *)(param_1 + 0x59) * 0x30);
              iVar8 = FUN_142bbb940(param_2,lVar9);
              if (iVar8 == -1) {
                return;
              }
              lVar1 = param_2 + 0x210;
              local_38[0] = 0;
              local_38[1] = 0;
              TArray<FBehaviorTreeSearchUpdate,FDefaultAllocator>::operator=(local_38,lVar1);
              *(undefined4 *)(param_2 + 0x218) = 0;
              if (0x7fffffff < *(uint *)(param_2 + 0x21c)) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
                ResizeTo(lVar1,0);
              }
              local_res22 = *(undefined2 *)(lVar9 + 0x50);
              local_resa = *(undefined2 *)(lVar9 + 0x8c);
              local_res8 = (undefined2)iVar8;
              local_res20 = local_res8;
              FUN_142bccf30(param_2,&local_res20,&local_res8);
              FUN_142bb45e0(param_2,lVar1,0,0);
              TArray<FBehaviorTreeSearchUpdate,FDefaultAllocator>::operator=(lVar1,local_38);
              if (local_38[0] == 0) {
                return;
              }
              FMemory::Free();
              return;
            }
            if (cVar6 == '\0') {
              return;
            }
            if ((param_3 != '\x01') && (!bVar3)) {
              return;
            }
            uVar2 = *(undefined1 *)(param_1 + 0x59);
            uVar14 = *(undefined8 *)(param_1 + 0x48);
            cVar5 = '\x02';
          }
          else {
            bVar7 = *(byte *)(param_1 + 100);
            uVar17 = (uint)bVar7;
            if (bVar7 == 0) {
              return;
            }
            uVar14 = *(undefined8 *)(param_1 + 0x48);
            lVar9 = UBehaviorTreeComponent::FindTemplateNode(param_2,uVar14);
            if (lVar9 == 0) {
              return;
            }
            iVar8 = *(int *)(param_2 + 0x1e0);
            if (iVar8 == 0) {
              return;
            }
            uVar15 = (uint)*(ushort *)(param_2 + 800);
            plVar13 = *(longlong **)(param_2 + 0x1d8);
            if (plVar13[(ulonglong)*(ushort *)(param_2 + 800) * 0xc + 2] != lVar9) {
              lVar1 = *(longlong *)(lVar9 + 0x48);
              while (lVar4 = lVar1, lVar4 != 0) {
                lVar9 = lVar4;
                lVar1 = *(longlong *)(lVar4 + 0x48);
              }
              uVar12 = uVar11;
              if (iVar8 < 1) {
                return;
              }
              while (uVar15 = (uint)uVar12, *plVar13 != lVar9) {
                uVar11 = uVar11 + 1;
                plVar13 = plVar13 + 0xc;
                uVar12 = (ulonglong)(uVar15 + 1);
                if ((longlong)iVar8 <= (longlong)uVar11) {
                  return;
                }
              }
            }
            if (uVar15 == 0xffffffff) {
              return;
            }
            uVar2 = *(undefined1 *)(param_1 + 0x59);
            if (bVar7 == 3) {
              bVar7 = FUN_142bc1d80(param_2,param_1,uVar2);
              uVar17 = bVar7 + 1;
            }
            cVar5 = (uVar17 != 2) + '\x01';
          }
          FUN_142bc8500(param_2,uVar14,uVar15,param_1,uVar2,cVar5,1);
        }
      }
      else {
        lVar1 = *(longlong *)(lVar9 + 0x48);
        while (lVar4 = lVar1, lVar4 != 0) {
          lVar9 = lVar4;
          lVar1 = *(longlong *)(lVar4 + 0x48);
        }
        plVar10 = plVar13;
        uVar12 = uVar11;
        uVar16 = uVar11;
        if (0 < iVar8) {
          do {
            uVar15 = (uint)uVar16;
            if (*plVar10 == lVar9) goto LAB_142bb6b6a;
            uVar12 = uVar12 + 1;
            plVar10 = plVar10 + 0xc;
            uVar16 = (ulonglong)(uVar15 + 1);
          } while ((longlong)uVar12 < (longlong)iVar8);
        }
      }
    }
  }
  return;
}



// FUNCTION 142bb6e30 FUN_142bb6e30 body=511 status=ok
// SIG undefined FUN_142bb6e30(void)

ulonglong FUN_142bb6e30(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  bool bVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  bVar2 = 0;
  if ((*(longlong *)(param_1 + 0x30) == 0) || (param_4 == (longlong *)0x0)) {
    return 0;
  }
  plVar7 = (longlong *)param_4[0x1f];
  if (plVar7 == (longlong *)0x0) {
    (**(code **)(*param_4 + 0x368))(param_4);
    plVar7 = (longlong *)param_4[0x1f];
    if (plVar7 == (longlong *)0x0) goto LAB_142bb6fee;
  }
  lVar3 = FUN_142c3ef00();
  if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    lVar4 = FUN_1429ff160();
    for (lVar3 = *(longlong *)(param_1 + 0x30); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
      if (lVar3 == lVar4) goto LAB_142bb6f50;
    }
    lVar3 = FUN_1429ff160();
    if (lVar3 != 0) {
      do {
        if (lVar3 == *(longlong *)(param_1 + 0x30)) goto LAB_142bb6f50;
        lVar3 = *(longlong *)(lVar3 + 0x30);
      } while (lVar3 != 0);
    }
    lVar4 = FUN_1428dfc70();
    for (lVar3 = *(longlong *)(param_1 + 0x30); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
      if (lVar3 == lVar4) goto LAB_142bb6f5a;
    }
    lVar3 = FUN_1428dfc70();
    if (lVar3 != 0) {
      do {
        if (lVar3 == *(longlong *)(param_1 + 0x30)) goto LAB_142bb6f5a;
        lVar3 = *(longlong *)(lVar3 + 0x30);
      } while (lVar3 != 0);
    }
  }
  goto LAB_142bb6f7a;
LAB_142bb6f50:
  uVar5 = UEnvQueryItemType_Actor::GetValue(param_3);
  goto LAB_142bb6f69;
LAB_142bb6f5a:
  uVar5 = (**(code **)(*plVar7 + 0x2a8))(plVar7,param_3);
LAB_142bb6f69:
  bVar2 = UBlackboardKeyType_Class::SetValue(param_1,param_2,uVar5);
LAB_142bb6f7a:
  lVar3 = UEnvQueryItemType_ActorBase::GetPrivateStaticClass();
  if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    lVar4 = FUN_1428dfc70();
    for (lVar3 = *(longlong *)(param_1 + 0x30); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
      if (lVar3 == lVar4) goto LAB_142bb700a;
    }
    lVar3 = FUN_1428dfc70();
    if (lVar3 != 0) {
      do {
        if (lVar3 == *(longlong *)(param_1 + 0x30)) {
LAB_142bb700a:
          uVar5 = (**(code **)(*plVar7 + 0x2a8))(plVar7,param_3);
          uVar6 = UBlackboardKeyType_Class::SetValue(param_1,param_2,uVar5);
          return uVar6;
        }
        lVar3 = *(longlong *)(lVar3 + 0x30);
      } while (lVar3 != 0);
    }
  }
LAB_142bb6fee:
  return (ulonglong)bVar2;
}



// FUNCTION 142bb7030 FUN_142bb7030 body=222 status=ok
// SIG undefined FUN_142bb7030(void)

ulonglong FUN_142bb7030(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined1 local_18 [16];
  
  plVar3 = (longlong *)UEnvQueryItemType_Direction::StaticClass();
  if (param_4 != (longlong *)0x0) {
    plVar4 = (longlong *)UEnvQueryItemType::GetPrivateStaticClass();
    plVar5 = param_4;
    do {
      plVar2 = param_4;
      if (plVar5 == plVar4) goto joined_r0x000142bb7078;
      plVar5 = (longlong *)plVar5[6];
    } while (plVar5 != (longlong *)0x0);
  }
  plVar2 = (longlong *)0x0;
joined_r0x000142bb7078:
  do {
    uVar6 = 0;
    if (plVar2 == (longlong *)0x0) goto LAB_142bb708e;
    if (plVar2 == plVar3) {
      if (param_4 == (longlong *)0x0) goto LAB_142bb70c5;
      plVar5 = (longlong *)UEnvQueryItemType::GetPrivateStaticClass();
      plVar3 = param_4;
      break;
    }
    plVar2 = (longlong *)plVar2[6];
  } while( true );
  while (plVar3 = (longlong *)plVar3[6], plVar3 != (longlong *)0x0) {
    if (plVar3 == plVar5) goto LAB_142bb70c7;
  }
LAB_142bb70c5:
  param_4 = (longlong *)0x0;
LAB_142bb70c7:
  plVar3 = (longlong *)param_4[0x1f];
  if (plVar3 == (longlong *)0x0) {
    uVar6 = (**(code **)(*param_4 + 0x368))(param_4);
    plVar3 = (longlong *)param_4[0x1f];
    if (plVar3 == (longlong *)0x0) {
LAB_142bb708e:
      return uVar6 & 0xffffffffffffff00;
    }
  }
  puVar7 = (undefined8 *)(**(code **)(*plVar3 + 0x2a0))(plVar3,local_18,param_3);
  *param_2 = *puVar7;
  uVar1 = *(undefined4 *)(puVar7 + 1);
  *(undefined4 *)(param_2 + 1) = uVar1;
  return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
}



// FUNCTION 142bb7110 FUN_142bb7110 body=222 status=ok
// SIG undefined FUN_142bb7110(void)

ulonglong FUN_142bb7110(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined1 local_18 [16];
  
  plVar3 = (longlong *)UEnvQueryItemType_VectorBase::GetPrivateStaticClass();
  if (param_4 != (longlong *)0x0) {
    plVar4 = (longlong *)UEnvQueryItemType::GetPrivateStaticClass();
    plVar5 = param_4;
    do {
      plVar2 = param_4;
      if (plVar5 == plVar4) goto joined_r0x000142bb7158;
      plVar5 = (longlong *)plVar5[6];
    } while (plVar5 != (longlong *)0x0);
  }
  plVar2 = (longlong *)0x0;
joined_r0x000142bb7158:
  do {
    uVar6 = 0;
    if (plVar2 == (longlong *)0x0) goto LAB_142bb716e;
    if (plVar2 == plVar3) {
      if (param_4 == (longlong *)0x0) goto LAB_142bb71a5;
      plVar5 = (longlong *)UEnvQueryItemType::GetPrivateStaticClass();
      plVar3 = param_4;
      break;
    }
    plVar2 = (longlong *)plVar2[6];
  } while( true );
  while (plVar3 = (longlong *)plVar3[6], plVar3 != (longlong *)0x0) {
    if (plVar3 == plVar5) goto LAB_142bb71a7;
  }
LAB_142bb71a5:
  param_4 = (longlong *)0x0;
LAB_142bb71a7:
  plVar3 = (longlong *)param_4[0x1f];
  if (plVar3 == (longlong *)0x0) {
    uVar6 = (**(code **)(*param_4 + 0x368))(param_4);
    plVar3 = (longlong *)param_4[0x1f];
    if (plVar3 == (longlong *)0x0) {
LAB_142bb716e:
      return uVar6 & 0xffffffffffffff00;
    }
  }
  puVar7 = (undefined8 *)(**(code **)(*plVar3 + 0x298))(plVar3,local_18,param_3);
  *param_2 = *puVar7;
  uVar1 = *(undefined4 *)(puVar7 + 1);
  *(undefined4 *)(param_2 + 1) = uVar1;
  return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
}



// FUNCTION 142bb71f0 FUN_142bb71f0 body=560 status=ok
// SIG undefined FUN_142bb71f0(void)

undefined8 FUN_142bb71f0(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined1 local_res20 [8];
  
  if (param_2 == (undefined4 *)0x0) {
    return 0;
  }
  local_res10 = *param_2;
  local_res14 = param_2[1];
  lVar3 = FWeakObjectPtr::Get(&local_res10);
  if (lVar3 != 0) {
    lVar4 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar5 = UEnvQueryItemType_Actor::GetPrivateStaticClass();
      *param_3 = uVar5;
      *(undefined4 *)(param_3 + 1) = 1;
      iVar6 = *(int *)(param_3 + 3);
      if (iVar6 < 8) {
        *(undefined4 *)(param_3 + 3) = 8;
        if (*(int *)((longlong)param_3 + 0x1c) < 8) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_3 + 2);
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar6 + param_3[2]),0,(longlong)(8 - iVar6));
      }
      else if ((8 < iVar6) && (iVar7 = iVar6 + -8, iVar7 != 0)) {
        iVar2 = (iVar6 - iVar7) + -8;
        if (iVar2 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(param_3[2] + 8),(void *)((longlong)iVar6 + param_3[2]),(longlong)iVar2
                    );
          iVar6 = *(int *)(param_3 + 3);
        }
        *(int *)(param_3 + 3) = iVar6 - iVar7;
        TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(param_3 + 2);
      }
      FWeakObjectPtr::operator=(local_res20,lVar3);
      UEnvQueryItemType_Actor::SetValue(param_3[2],local_res20);
    }
    else {
      lVar4 = FUN_1429ff160();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        return 0;
      }
      uVar5 = FUN_142c3ef00();
      *param_3 = uVar5;
      *(undefined4 *)(param_3 + 1) = 1;
      iVar6 = *(int *)(param_3 + 3);
      if (iVar6 < 8) {
        *(undefined4 *)(param_3 + 3) = 8;
        if (*(int *)((longlong)param_3 + 0x1c) < 8) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_3 + 2);
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar6 + param_3[2]),0,(longlong)(8 - iVar6));
      }
      else if ((8 < iVar6) && (iVar7 = iVar6 + -8, iVar7 != 0)) {
        iVar2 = (iVar6 - iVar7) + -8;
        if (iVar2 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(param_3[2] + 8),(void *)((longlong)iVar6 + param_3[2]),(longlong)iVar2
                    );
          iVar6 = *(int *)(param_3 + 3);
        }
        *(int *)(param_3 + 3) = iVar6 - iVar7;
        TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(param_3 + 2);
      }
      FWeakObjectPtr::operator=(local_res20,lVar3);
      FUN_142c15730(param_3[2],local_res20);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 142bb7420 FUN_142bb7420 body=222 status=ok
// SIG undefined FUN_142bb7420(void)

undefined8 FUN_142bb7420(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 local_38;
  float local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_38 = *param_2;
  local_30 = *(float *)(param_2 + 1);
  if ((((float)local_38 == (float)DAT_146690f00) &&
      (local_38._4_4_ = (float)((ulonglong)local_38 >> 0x20), local_38._4_4_ == DAT_146690f00._4_4_)
      ) && (local_30 == DAT_146690f08)) {
    local_20 = DAT_146b2c4e8;
    puVar2 = &local_28;
    local_28 = DAT_146b2c4e0;
  }
  else {
    puVar2 = (undefined8 *)FRotator::Vector(&local_38,&local_28);
  }
  local_18 = *puVar2;
  local_10 = *(undefined4 *)(puVar2 + 1);
  uVar3 = UEnvQueryItemType_Direction::StaticClass();
  *param_3 = uVar3;
  *(undefined4 *)(param_3 + 1) = 1;
  iVar1 = *(int *)(param_3 + 3);
  if (iVar1 < 0xc) {
    *(undefined4 *)(param_3 + 3) = 0xc;
    if (*(int *)((longlong)param_3 + 0x1c) < 0xc) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_3 + 2,iVar1);
    }
  }
  else if ((0xc < iVar1) && (iVar1 + -0xc != 0)) {
    *(int *)(param_3 + 3) = iVar1 - (iVar1 + -0xc);
    TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(param_3 + 2);
  }
  FUN_142c15740(param_3[2],&local_18);
  return 1;
}



// FUNCTION 142bb7500 FUN_142bb7500 body=129 status=ok
// SIG undefined FUN_142bb7500(void)

undefined8 FUN_142bb7500(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  
  local_28 = *param_2;
  local_20 = *(undefined4 *)(param_2 + 1);
  local_18 = 0;
  uVar2 = UEnvQueryItemType_Point::GetPrivateStaticClass();
  *param_3 = uVar2;
  *(undefined4 *)(param_3 + 1) = 1;
  iVar1 = *(int *)(param_3 + 3);
  if (iVar1 < 0x18) {
    *(undefined4 *)(param_3 + 3) = 0x18;
    if (*(int *)((longlong)param_3 + 0x1c) < 0x18) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_3 + 2,iVar1);
    }
  }
  else if ((0x18 < iVar1) && (iVar1 + -0x18 != 0)) {
    *(int *)(param_3 + 3) = iVar1 - (iVar1 + -0x18);
    TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(param_3 + 2);
  }
  UEnvQueryItemType_Point::SetValue(param_3[2],&local_28);
  return 1;
}



// FUNCTION 142bb75c0 CreateActionInstance body=214 status=ok
// SIG undefined CreateActionInstance(void)

undefined8 UPawnAction::CreateActionInstance(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if ((lVar1 != 0) && (param_2 != 0)) {
    lVar2 = GetPrivateStaticClass();
    lVar4 = param_2;
    do {
      if (lVar4 == lVar2) {
        lVar2 = GetPrivateStaticClass();
        lVar4 = param_2;
        goto LAB_142bb7627;
      }
      lVar4 = *(longlong *)(lVar4 + 0x30);
    } while (lVar4 != 0);
  }
  return 0;
  while (lVar4 = *(longlong *)(lVar4 + 0x30), lVar5 = 0, lVar4 != 0) {
LAB_142bb7627:
    lVar5 = param_2;
    if (lVar4 == lVar2) break;
  }
  FUN_1417846f0(lVar1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar3 = FUN_1417985e0(lVar5,lVar1,0,0,0,0,0,0,0);
  return uVar3;
}



// FUNCTION 142bb76a0 CreateBlackboardDataToComponentsIterator body=33 status=ok
// SIG undefined CreateBlackboardDataToComponentsIterator(void)

undefined8 UAISystem::CreateBlackboardDataToComponentsIterator(longlong param_1,undefined8 param_2)

{
  FBlackboardDataToComponentsIterator::FBlackboardDataToComponentsIterator(param_2,param_1 + 0xd0);
  return param_2;
}



// FUNCTION 142bb76d0 FUN_142bb76d0 body=84 status=ok
// SIG undefined FUN_142bb76d0(void)

void FUN_142bb76d0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1457ef660;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_1457ef6a8;
  }
  return;
}



// FUNCTION 142bb7730 FUN_142bb7730 body=346 status=ok
// SIG undefined FUN_142bb7730(void)

void FUN_142bb7730(longlong param_1,longlong param_2,short param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong local_38;
  longlong local_30;
  short local_28;
  undefined1 local_26;
  byte local_25;
  
  iVar4 = *(int *)(param_2 + 0x10) + -1;
  if (-1 < iVar4) {
    lVar8 = (longlong)iVar4 * 0x18;
    lVar11 = (longlong)*(int *)(param_2 + 0x10) * 0x18;
    lVar9 = lVar8;
    do {
      lVar1 = *(longlong *)(param_2 + 8);
      if ((*(short *)(lVar9 + 0x10 + lVar1) == param_3) &&
         (*(char *)(lVar9 + 0x12 + lVar1) == '\x01')) {
        iVar3 = *(int *)(param_2 + 0x10);
        iVar2 = (iVar3 - iVar4) + -1;
        if (iVar2 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar1 + lVar8),(void *)(lVar11 + lVar1),(longlong)iVar2 * 0x18);
          iVar3 = *(int *)(param_2 + 0x10);
        }
        *(int *)(param_2 + 0x10) = iVar3 + -1;
      }
      lVar11 = lVar11 + -0x18;
      lVar8 = lVar8 + -0x18;
      lVar9 = lVar9 + -0x18;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  uVar7 = 0;
  uVar6 = uVar7;
  uVar10 = uVar7;
  if (0 < *(int *)(param_1 + 0x30)) {
    do {
      local_30 = *(longlong *)(uVar10 + *(longlong *)(param_1 + 0x28));
      if ((local_30 != 0) && (*(int *)(uVar10 + 8 + *(longlong *)(param_1 + 0x28)) == 0)) {
        local_25 = local_25 & 0xfe;
        local_38 = 0;
        local_26 = 2;
        local_28 = param_3;
        FUN_142bb3e30(param_2,&local_38);
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      uVar10 = uVar10 + 0x10;
    } while ((int)uVar5 < *(int *)(param_1 + 0x30));
  }
  uVar6 = uVar7;
  if (0 < *(int *)(param_1 + 0x20)) {
    do {
      local_38 = *(longlong *)(uVar6 + *(longlong *)(param_1 + 0x18));
      if (local_38 != 0) {
        local_25 = local_25 & 0xfe;
        local_30 = 0;
        local_26 = 2;
        local_28 = param_3;
        FUN_142bb3e30(param_2,&local_38);
      }
      uVar5 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar5;
      uVar6 = uVar6 + 8;
    } while ((int)uVar5 < *(int *)(param_1 + 0x20));
  }
  return;
}



// FUNCTION 142bb7890 FUN_142bb7890 body=450 status=ok
// SIG undefined FUN_142bb7890(void)

ulonglong FUN_142bb7890(longlong param_1,longlong param_2,ushort param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  short sVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  
  bVar4 = true;
  plVar8 = (longlong *)
           ((ulonglong)*(ushort *)(param_1 + 800) * 0x60 + *(longlong *)(param_1 + 0x1d8));
  lVar5 = plVar8[2];
  if (lVar5 == 0) {
    lVar6 = 0;
    if (*(ushort *)(param_1 + 800) <= param_3) goto LAB_142bb79c3;
    lVar5 = *plVar8;
    bVar4 = false;
    lVar6 = 0;
    if (lVar5 == 0) goto LAB_142bb79c3;
  }
  do {
    lVar6 = *(longlong *)(lVar5 + 0x48);
    if (lVar6 == 0) {
      if (bVar4) {
        FUN_142bc4330(*(undefined8 *)
                       ((ulonglong)*(ushort *)(param_1 + 800) * 0x60 +
                       *(longlong *)(param_1 + 0x1d8)),param_1 + 0x208,param_4);
      }
      sVar2 = *(short *)(param_1 + 800);
      bVar4 = true;
      if (sVar2 == 0) {
        uVar7 = 0;
        if ((*(byte *)(param_1 + 0x323) & 0x20) == 0) {
          if (*(longlong *)(param_1 + 0x270) != 0) {
            *(byte *)(param_1 + 0x27c) = *(byte *)(param_1 + 0x27c) | 1;
            uVar7 = FUN_142bc6820(param_1);
          }
        }
        else if ((*(byte *)(param_1 + 0x323) & 0x10) == 0) {
          if (*(int *)(param_1 + 0x1e0) != 0) {
            uVar7 = FUN_142bc8500(param_1,**(undefined8 **)(param_1 + 0x1d8),0,
                                  **(undefined8 **)(param_1 + 0x1d8),0xffffffff,2,1);
          }
        }
        else {
          *(byte *)(param_1 + 0x27c) = *(byte *)(param_1 + 0x27c) | 1;
        }
        return uVar7 & 0xffffffffffffff00;
      }
      iVar3 = *(int *)(param_1 + 0x228);
      uVar1 = *param_4;
      *(int *)(param_1 + 0x228) = iVar3 + 1;
      if (*(int *)(param_1 + 0x22c) < iVar3 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x220,iVar3);
      }
      lVar5 = *(longlong *)(param_1 + 0x220);
      *(short *)(lVar5 + (longlong)iVar3 * 4) = sVar2;
      *(undefined1 *)(lVar5 + 2 + (longlong)iVar3 * 4) = uVar1;
      *(short *)(param_1 + 800) = *(short *)(param_1 + 800) + -1;
      lVar6 = *(longlong *)
               ((ulonglong)*(ushort *)(param_1 + 800) * 0x60 + 0x10 + *(longlong *)(param_1 + 0x1d8)
               );
    }
    else {
      FUN_142bc3b80(lVar6,param_1 + 0x208,lVar5,param_4);
    }
  } while ((lVar6 != param_2) && (lVar5 = lVar6, lVar6 != 0));
LAB_142bb79c3:
  return CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
}



// FUNCTION 142bb7a60 FUN_142bb7a60 body=46 status=ok
// SIG undefined FUN_142bb7a60(void)

void FUN_142bb7a60(longlong *param_1)

{
  char cVar1;
  undefined1 local_res10 [24];
  
  cVar1 = FUN_142bc4e20();
  if (cVar1 == '\0') {
    local_res10[0] = 3;
    (**(code **)(*param_1 + 0x288))(param_1,local_res10);
  }
  return;
}



// FUNCTION 142bb7a90 FUN_142bb7a90 body=1055 status=ok
// SIG undefined FUN_142bb7a90(void)

longlong * FUN_142bb7a90(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  uint uVar10;
  int iVar12;
  int iVar13;
  wchar_t *pwVar14;
  uint uVar15;
  wchar_t *pwVar16;
  wchar_t *_Source;
  ulonglong uVar17;
  wchar_t *pwVar18;
  bool bVar19;
  uint local_res18;
  longlong local_res20;
  wchar_t *local_68;
  uint local_60;
  uint local_5c;
  longlong local_58 [3];
  ulonglong uVar11;
  
  pwVar9 = (wchar_t *)0x0;
  *param_2 = 0;
  param_2[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"None",10);
  if (*(int *)(param_1 + 0x1e0) != 0) {
    lVar8 = (longlong)*(int *)(param_1 + 0x1e0) * 0x60;
    if (*(char *)(lVar8 + -0x17 + *(longlong *)(param_1 + 0x1d8)) == '\x01') {
      plVar5 = (longlong *)
               UBehaviorTreeTypes::DescribeNodeHelper
                         (&local_68,*(undefined8 *)(lVar8 + -0x50 + *(longlong *)(param_1 + 0x1d8)))
      ;
      if (param_2 != plVar5) {
        if (*param_2 != 0) {
          FMemory::Free();
        }
        *param_2 = *plVar5;
        *plVar5 = 0;
        *(int *)(param_2 + 1) = (int)plVar5[1];
        *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar5 + 0xc);
        plVar5[1] = 0;
      }
      if (local_68 != (wchar_t *)0x0) {
        FMemory::Free();
      }
    }
  }
  local_res18 = 0;
  local_68 = (wchar_t *)0x0;
  local_5c = 0;
  if (*(int *)(param_1 + 0x1e0) < 1) {
    return param_2;
  }
  local_res20 = 0;
  pwVar14 = pwVar9;
  pwVar16 = pwVar9;
  _Source = pwVar9;
  do {
    uVar11 = 0;
    lVar8 = *(longlong *)(param_1 + 0x1d8) + local_res20;
    uVar17 = uVar11;
    uVar15 = (uint)pwVar9;
    if (0 < *(int *)(lVar8 + 0x30)) {
      do {
        uVar15 = (uint)pwVar14;
        if (*(int *)(uVar17 + 8 + *(longlong *)(lVar8 + 0x28)) == 0) {
          puVar6 = (undefined8 *)
                   UBehaviorTreeTypes::DescribeNodeHelper
                             (local_58,*(undefined8 *)(uVar17 + *(longlong *)(lVar8 + 0x28)));
          pvVar2 = (void *)*puVar6;
          iVar13 = *(int *)(puVar6 + 1) + -1;
          if (*(int *)(puVar6 + 1) == 0) {
            iVar13 = 0;
          }
          if (iVar13 != 0) {
            local_60 = uVar15 + (uVar15 == 0) + iVar13;
            if ((int)pwVar16 < (int)local_60) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,pwVar14);
              pwVar16 = (wchar_t *)(ulonglong)local_5c;
              _Source = local_68;
            }
            uVar10 = local_60;
            _guard_xfg_dispatch_icall_nop
                      (_Source + ((longlong)(int)uVar15 - (ulonglong)(uVar15 != 0)),pvVar2,
                       (longlong)iVar13 * 2);
            (_Source + ((longlong)(int)uVar15 - (ulonglong)(uVar15 != 0)))[iVar13] = L'\0';
            uVar15 = uVar10;
          }
          if (local_58[0] != 0) {
            FMemory::Free();
          }
          local_60 = (3 - (uint)(uVar15 != 0)) + uVar15;
          if ((int)pwVar16 < (int)local_60) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,uVar15);
            pwVar16 = (wchar_t *)(ulonglong)local_5c;
            _Source = local_68;
          }
          pwVar14 = (wchar_t *)(ulonglong)local_60;
          lVar7 = (longlong)(int)uVar15 - (ulonglong)(uVar15 != 0);
          (_Source + lVar7)[0] = L',';
          (_Source + lVar7)[1] = L' ';
          _Source[lVar7 + 2] = L'\0';
        }
        uVar10 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar10;
        uVar17 = uVar17 + 0x10;
        uVar15 = local_res18;
      } while ((int)uVar10 < *(int *)(lVar8 + 0x30));
    }
    pwVar18 = (wchar_t *)0x0;
    local_res18 = uVar15 + 1;
    pwVar9 = (wchar_t *)(ulonglong)local_res18;
    local_res20 = local_res20 + 0x60;
  } while ((int)local_res18 < *(int *)(param_1 + 0x1e0));
  iVar13 = (int)pwVar14;
  if ((iVar13 != 0) && (iVar12 = iVar13 + -1, 0 < iVar12)) {
    iVar4 = (int)param_2[1];
    iVar3 = (3 - (uint)(iVar4 != 0)) + iVar4;
    *(int *)(param_2 + 1) = iVar3;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
    }
    puVar1 = (undefined4 *)(*param_2 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    *puVar1 = 0x280020;
    iVar13 = iVar13 + -3;
    *(undefined2 *)(puVar1 + 1) = 0;
    iVar4 = 0;
    if ((-1 < iVar13) && (iVar4 = iVar12, iVar13 < iVar12)) {
      iVar4 = iVar13;
    }
    local_68 = (wchar_t *)0x0;
    local_5c = 0;
    pwVar9 = (wchar_t *)(ulonglong)(iVar4 + 1);
    if (iVar4 == 0) {
      pwVar9 = pwVar18;
    }
    uVar15 = (uint)pwVar9;
    bVar19 = uVar15 == 0;
    pwVar9 = pwVar18;
    local_60 = uVar15;
    if (0 < (int)uVar15) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
      uVar15 = local_60;
      pwVar9 = local_68;
      bVar19 = local_60 == 0;
      if (0 < (int)local_60) {
        wcsncpy(local_68,_Source,(longlong)iVar4);
        bVar19 = uVar15 == 0;
        pwVar9[iVar4] = L'\0';
      }
    }
    if ((!bVar19) && (iVar13 = uVar15 - 1, iVar13 != 0)) {
      iVar12 = (int)param_2[1];
      iVar4 = (uint)(iVar12 == 0) + iVar13 + iVar12;
      *(int *)(param_2 + 1) = iVar4;
      if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar12);
      }
      pvVar2 = (void *)(*param_2 + ((longlong)iVar12 - (ulonglong)(iVar12 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar2,pwVar9,(longlong)iVar13 * 2);
      *(undefined2 *)((longlong)pvVar2 + (longlong)iVar13 * 2) = 0;
    }
    if (pwVar9 != (wchar_t *)0x0) {
      FMemory::Free(pwVar9);
    }
    iVar13 = (int)param_2[1];
    pwVar9 = (wchar_t *)(ulonglong)(iVar13 - 1);
    if (iVar13 < 1) {
      pwVar9 = pwVar18;
    }
    iVar13 = (iVar13 < 1) + 1 + iVar13;
    *(int *)(param_2 + 1) = iVar13;
    if (*(int *)((longlong)param_2 + 0xc) < iVar13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
    }
    *(undefined2 *)(*param_2 + (longlong)(int)pwVar9 * 2) = 0x29;
    *(undefined2 *)(*param_2 + 2 + (longlong)(int)pwVar9 * 2) = 0;
  }
  if (_Source != (wchar_t *)0x0) {
    FMemory::Free(_Source);
  }
  return param_2;
}



// FUNCTION 142bb7eb0 FUN_142bb7eb0 body=634 status=ok
// SIG undefined FUN_142bb7eb0(void)

undefined8 * FUN_142bb7eb0(longlong param_1,undefined8 *param_2)

{
  wchar_t *pwVar1;
  bool bVar2;
  bool bVar3;
  wchar_t **ppwVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  wchar_t *_Source;
  int local_res8;
  longlong local_res18;
  undefined8 local_res20;
  wchar_t *local_68;
  uint local_60;
  uint uStack_5c;
  wchar_t *local_58;
  undefined8 local_50;
  
  pwVar8 = (wchar_t *)0x0;
  local_res8 = 0;
  local_68 = (wchar_t *)0x0;
  uStack_5c = 0;
  _Source = pwVar8;
  if (0 < *(int *)(param_1 + 0x1e0)) {
    local_res18 = 0;
    pwVar9 = pwVar8;
    do {
      uVar7 = (uint)pwVar8;
      local_res20 = *(undefined8 *)
                     (*(longlong *)
                       ((ulonglong)*(byte *)(local_res18 + 0x48 + *(longlong *)(param_1 + 0x1d8)) *
                        0x38 + *(longlong *)(param_1 + 0x1e8)) + 0x18);
      FName::ToString(&local_res20);
      pwVar1 = local_58;
      if ((int)local_50 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)local_50 + -1;
      }
      uVar6 = uVar7;
      if (iVar5 != 0) {
        local_60 = uVar7 + (uVar7 == 0) + iVar5;
        if ((int)pwVar9 < (int)local_60) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,pwVar8);
          pwVar9 = (wchar_t *)(ulonglong)uStack_5c;
          _Source = local_68;
        }
        uVar6 = local_60;
        _guard_xfg_dispatch_icall_nop
                  (_Source + ((longlong)(int)uVar7 - (ulonglong)(uVar7 != 0)),pwVar1,
                   (longlong)iVar5 * 2);
        (_Source + ((longlong)(int)uVar7 - (ulonglong)(uVar7 != 0)))[iVar5] = L'\0';
      }
      if (local_58 != (wchar_t *)0x0) {
        FMemory::Free(local_58);
      }
      local_60 = (3 - (uint)(uVar6 != 0)) + uVar6;
      if ((int)pwVar9 < (int)local_60) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68);
        pwVar9 = (wchar_t *)(ulonglong)uStack_5c;
        _Source = local_68;
      }
      pwVar8 = (wchar_t *)(ulonglong)local_60;
      local_res8 = local_res8 + 1;
      pwVar1 = _Source + ((longlong)(int)uVar6 - (ulonglong)(uVar6 != 0));
      local_res18 = local_res18 + 0x60;
      pwVar1[0] = L',';
      pwVar1[1] = L' ';
      pwVar1[2] = L'\0';
    } while (local_res8 < *(int *)(param_1 + 0x1e0));
    if ((local_60 != 0) && (uVar7 = local_60 - 1, uVar7 != 0)) {
      local_60 = local_60 - 3;
      uVar6 = 0;
      if ((-1 < (int)local_60) && (uVar6 = uVar7, (int)local_60 < (int)uVar7)) {
        uVar6 = local_60;
      }
      local_68 = (wchar_t *)0x0;
      uStack_5c = 0;
      local_60 = uVar6 + 1;
      if (uVar6 == 0) {
        local_60 = 0;
      }
      if ((0 < (int)local_60) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68), pwVar8 = local_68,
         0 < (int)local_60)) {
        wcsncpy(local_68,_Source,(longlong)(int)uVar6);
        pwVar8[(int)uVar6] = L'\0';
      }
      ppwVar4 = &local_68;
      bVar3 = true;
      bVar2 = false;
      goto LAB_142bb80bf;
    }
  }
  local_58 = (wchar_t *)0x0;
  local_50 = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  FGenericPlatformString::Memcpy(local_58,L"None",10);
  ppwVar4 = &local_58;
  bVar3 = false;
  bVar2 = true;
LAB_142bb80bf:
  pwVar8 = *ppwVar4;
  *ppwVar4 = (wchar_t *)0x0;
  *param_2 = pwVar8;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(ppwVar4 + 1);
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)ppwVar4 + 0xc);
  ppwVar4[1] = (wchar_t *)0x0;
  if ((bVar2) && (local_58 != (wchar_t *)0x0)) {
    FMemory::Free();
  }
  if ((bVar3) && (local_68 != (wchar_t *)0x0)) {
    FMemory::Free();
  }
  if (_Source != (wchar_t *)0x0) {
    FMemory::Free(_Source);
  }
  return param_2;
}



// FUNCTION 142bb8130 DescribeArithmeticParam body=374 status=ok
// SIG undefined DescribeArithmeticParam(void)

undefined8 *
UBlackboardKeyType_Enum::DescribeArithmeticParam(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  void **ppvVar10;
  void *local_48;
  undefined8 local_40;
  void *local_38;
  int local_30;
  undefined4 uStack_2c;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (*(longlong *)(param_1 + 0x30) == 0) {
    local_48 = (void *)0x0;
    local_40 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_48,9,"UNKNOWN!",9,0x3f);
    ppvVar10 = &local_48;
    bVar6 = false;
    bVar5 = false;
    bVar4 = true;
  }
  else {
    uVar8 = FUN_1417373a0(*(longlong *)(param_1 + 0x30),local_28,(longlong)param_3);
    puVar9 = (undefined8 *)FText::ToString(uVar8);
    local_38 = (void *)0x0;
    iVar3 = *(int *)(puVar9 + 1);
    _Src = (void *)*puVar9;
    local_30 = iVar3;
    if (iVar3 == 0) {
      uStack_2c = 0;
      ppvVar10 = &local_38;
      bVar6 = true;
      bVar5 = true;
      bVar4 = false;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,iVar3,0);
      ::_guard_xfg_dispatch_icall_nop(local_38,_Src,(longlong)iVar3 * 2);
      ppvVar10 = &local_38;
      bVar6 = true;
      bVar5 = true;
      bVar4 = false;
    }
  }
  *param_2 = *ppvVar10;
  *ppvVar10 = (void *)0x0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(ppvVar10 + 1);
  ppvVar10[1] = (void *)0x0;
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)ppvVar10 + 0xc);
  if (bVar4) {
    if (local_48 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if (bVar5) {
    if (local_38 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if ((bVar6) && (local_20 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142bb82b0 DescribeArithmeticParam body=45 status=ok
// SIG undefined DescribeArithmeticParam(void)

undefined8
UBlackboardKeyType_Float::DescribeArithmeticParam
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,float param_4)

{
  FString::PrintfImpl(param_2,&DAT_1457e5744,(double)param_4);
  return param_2;
}



// FUNCTION 142bb82e0 FUN_142bb82e0 body=33 status=ok
// SIG undefined FUN_142bb82e0(void)

undefined8 FUN_142bb82e0(undefined8 param_1,undefined8 param_2)

{
  FString::PrintfImpl(param_2,&DAT_1457e59dc);
  return param_2;
}



// FUNCTION 142bb8310 FUN_142bb8310 body=571 status=ok
// SIG undefined FUN_142bb8310(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142bb8310(undefined8 *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *_Src;
  bool bVar3;
  bool bVar4;
  void **ppvVar5;
  void *pvVar6;
  void *local_38;
  int local_30;
  undefined4 uStack_2c;
  void *local_28;
  undefined8 local_20;
  
  pvVar6 = (void *)0x0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b2c5f0) {
    _Init_thread_header(&DAT_146b2c5f0);
    if (DAT_146b2c5f0 == -1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146690fe0,0);
      FGenericPlatformString::Memcpy(DAT_146690fe0,L"None",10);
      DAT_146690ff0 = 0;
      _DAT_146690ff8 = 0xf;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146690ff0,0);
      FGenericPlatformString::Memcpy(DAT_146690ff0,L"Lower Priority",0x1e);
      DAT_146691000 = 0;
      _DAT_146691008 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146691000,0);
      FGenericPlatformString::Memcpy(DAT_146691000,L"Self",10);
      DAT_146691010 = 0;
      _DAT_146691018 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146691010,0);
      FGenericPlatformString::Memcpy(DAT_146691010,L"Both",10);
      atexit(FUN_143ebf410);
      _Init_thread_footer(&DAT_146b2c5f0);
    }
  }
  if (param_2 < 4) {
    local_38 = (void *)0x0;
    iVar1 = *(int *)(&DAT_146690fe8 + (longlong)(int)param_2 * 0x10);
    _Src = (void *)(&DAT_146690fe0)[(longlong)(int)param_2 * 2];
    local_30 = iVar1;
    if (iVar1 == 0) {
      ppvVar5 = &local_38;
      uStack_2c = 0;
      bVar4 = true;
      bVar3 = false;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,iVar1,0);
      pvVar6 = local_38;
      _guard_xfg_dispatch_icall_nop(local_38,_Src,(longlong)iVar1 * 2);
      ppvVar5 = &local_38;
      bVar4 = true;
      bVar3 = false;
    }
  }
  else {
    local_20 = 0;
    ppvVar5 = &local_28;
    bVar4 = false;
    bVar3 = true;
    pvVar6 = (void *)0x0;
  }
  *ppvVar5 = (void *)0x0;
  uVar2 = *(undefined4 *)(ppvVar5 + 1);
  *param_1 = pvVar6;
  *(undefined4 *)(param_1 + 1) = uVar2;
  ppvVar5[1] = (void *)0x0;
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)ppvVar5 + 0xc);
  if (bVar3) {
    if (local_28 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if ((bVar4) && (local_38 != (void *)0x0)) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142bb8550 FUN_142bb8550 body=1596 status=ok
// SIG undefined FUN_142bb8550(void)

longlong ** FUN_142bb8550(longlong param_1,longlong **param_2,byte param_3,int param_4)

{
  short *psVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong **pplVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  int iVar17;
  wchar_t *pwVar18;
  undefined2 *puVar19;
  uint local_res10;
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  undefined4 local_64;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  int local_48;
  undefined4 local_44;
  wchar_t *local_40;
  int local_38;
  undefined4 local_34;
  
  plVar15 = (longlong *)0x0;
  *param_2 = (longlong *)0x0;
  param_2[1] = (longlong *)0x0;
  lVar6 = FUN_142bbd600(param_1,param_3);
  if (lVar6 == 0) {
    return param_2;
  }
  plVar16 = plVar15;
  if ((*(int *)(param_1 + 400) != 0) && ((int)(uint)param_3 < *(int *)(param_1 + 0x1a0))) {
    plVar16 = (longlong *)
              ((ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x198) + (ulonglong)param_3 * 2) +
              *(longlong *)(param_1 + 0x188));
  }
  plVar8 = *(longlong **)(lVar6 + 8);
  if ((plVar8 == (longlong *)0x0) || (plVar16 == (longlong *)0x0)) {
    pwVar18 = L"empty";
    plVar16 = plVar15;
  }
  else {
    if ((*(byte *)((longlong)plVar8 + 0x2b) & 2) != 0) {
      iVar10 = (int)*plVar16;
      plVar8 = plVar15;
      if ((-1 < iVar10) && (iVar10 < *(int *)(param_1 + 0x1b0))) {
        plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x1a8) + (longlong)iVar10 * 8);
      }
      plVar16 = (longlong *)((longlong)plVar16 + 4);
    }
    (**(code **)(*plVar8 + 0x2f8))(plVar8,&local_40,param_1,plVar16);
    plVar16 = (longlong *)0x1;
    pwVar18 = L"";
    if (local_38 != 0) {
      pwVar18 = local_40;
    }
  }
  local_70 = (longlong *)0x0;
  local_res10 = 0;
  lVar11 = -1;
  local_64 = 0;
  plVar8 = plVar15;
  if ((pwVar18 != (wchar_t *)0x0) && (*pwVar18 != L'\0')) {
    lVar14 = -1;
    do {
      lVar14 = lVar14 + 1;
    } while (pwVar18[lVar14] != L'\0');
    uVar13 = (int)lVar14 + 1;
    local_68 = uVar13;
    if (0 < (int)uVar13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_70,0);
    }
    local_res10 = local_68;
    plVar15 = local_70;
    plVar8 = (longlong *)(ulonglong)local_68;
    FGenericPlatformString::Memcpy(local_70,pwVar18,(longlong)(int)uVar13 * 2);
  }
  if ((plVar16 != (longlong *)0x0) && (local_40 != (wchar_t *)0x0)) {
    FMemory::Free();
  }
  plVar16 = local_70;
  iVar10 = (int)plVar8;
  if (param_4 == 0) {
    if (param_2 != &local_70) {
      *(int *)(param_2 + 1) = iVar10;
      if ((iVar10 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,plVar8);
        _guard_xfg_dispatch_icall_nop(*param_2,plVar15,(longlong)iVar10 * 2);
        plVar16 = local_70;
      }
    }
    goto LAB_142bb86f1;
  }
  if (param_4 == 1) {
    puVar19 = &DAT_143f3eda8;
    plVar15 = (longlong *)&DAT_143f3eda8;
    if (iVar10 != 0) {
      plVar15 = local_70;
    }
    puVar7 = (undefined8 *)FName::ToString(lVar6,&local_40);
    if (*(int *)(puVar7 + 1) != 0) {
      puVar19 = (undefined2 *)*puVar7;
    }
    FString::PrintfImpl(&local_60,L"%s: %s",puVar19,plVar15);
    plVar8 = local_60;
    if (param_2 == &local_60) goto LAB_142bb87c7;
    if (*param_2 != (longlong *)0x0) {
      FMemory::Free();
    }
    *param_2 = local_60;
    *(int *)(param_2 + 1) = (int)local_58;
    *(int *)((longlong)param_2 + 0xc) = local_58._4_4_;
    local_58 = 0;
    local_60 = (longlong *)0x0;
  }
  else {
    lVar14 = UBlackboardKeyType::GetPrivateStaticClass();
    local_80 = *(longlong **)(lVar14 + 0x18);
    FName::ToString(&local_80,&local_60);
    plVar15 = (longlong *)0x0;
    iVar17 = 0;
    iVar10 = (int)local_58 + -1;
    if ((int)local_58 < 1) {
      iVar10 = iVar17;
    }
    iVar5 = ((int)local_58 < 1) + 1 + (int)local_58;
    local_58 = CONCAT44(local_58._4_4_,iVar5);
    if (local_58._4_4_ < iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60);
    }
    plVar16 = local_60;
    *(undefined2 *)((longlong)local_60 + (longlong)iVar10 * 2) = 0x5f;
    *(undefined2 *)((longlong)local_60 + (longlong)iVar10 * 2 + 2) = 0;
    lVar14 = (longlong)(int)local_58;
    local_40 = (wchar_t *)0x0;
    local_38 = (int)local_58;
    if ((int)local_58 == 0) {
      local_34 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_40,local_58 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop(local_40,plVar16,lVar14 * 2);
    }
    if (local_60 != (longlong *)0x0) {
      FMemory::Free(local_60);
    }
    if (*(longlong *)(lVar6 + 8) == 0) {
      bVar3 = false;
      bVar2 = true;
      local_80 = (longlong *)0x0;
      local_78 = 0;
      pplVar9 = &local_80;
    }
    else {
      lVar14 = *(longlong *)(*(longlong *)(lVar6 + 8) + 0x10);
      bVar3 = true;
      bVar2 = false;
      if (lVar14 == 0) {
        local_60 = (longlong *)0x0;
        local_58 = 5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,0);
        FGenericPlatformString::Memcpy(local_60,&DAT_143f3edc8,10);
        pplVar9 = &local_60;
      }
      else {
        local_80 = *(longlong **)(lVar14 + 0x18);
        FName::ToString(&local_80,&local_60);
        pplVar9 = &local_60;
      }
    }
    plVar16 = *pplVar9;
    *pplVar9 = (longlong *)0x0;
    local_50 = plVar16;
    local_48 = *(int *)(pplVar9 + 1);
    local_44 = *(undefined4 *)((longlong)pplVar9 + 0xc);
    pplVar9[1] = (longlong *)0x0;
    if ((bVar2) && (local_80 != (longlong *)0x0)) {
      FMemory::Free();
    }
    if ((bVar3) && (local_60 != (longlong *)0x0)) {
      FMemory::Free();
    }
    cVar4 = FString::StartsWith(&local_50,&local_40,1);
    plVar16 = local_50;
    if (cVar4 == '\0') {
      lVar11 = (longlong)local_48;
      local_60 = (longlong *)0x0;
      local_58 = CONCAT44(local_58._4_4_,local_48);
      if (local_48 == 0) {
        local_58 = 0;
        plVar8 = plVar15;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_60,local_48,0);
        plVar8 = local_60;
        _guard_xfg_dispatch_icall_nop(local_60,plVar16,lVar11 * 2);
      }
      bVar3 = false;
      bVar2 = true;
      plVar16 = local_60;
    }
    else {
      iVar10 = iVar17;
      if (local_38 != 0) {
        iVar10 = local_38 + -1;
      }
      if (local_48 == 0) {
        plVar16 = (longlong *)&DAT_143f3eda8;
        iVar5 = iVar17;
      }
      else {
        iVar5 = local_48 + -1;
      }
      iVar10 = iVar5 - iVar10;
      if ((-1 < iVar10) && (iVar17 = iVar5, iVar10 < iVar5)) {
        iVar17 = iVar10;
      }
      local_60 = (longlong *)0x0;
      local_58 = 0;
      psVar1 = (short *)((longlong)plVar16 + ((longlong)iVar5 - (longlong)iVar17) * 2);
      plVar16 = plVar15;
      if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
        do {
          lVar11 = lVar11 + 1;
        } while (psVar1[lVar11] != 0);
        uVar13 = (int)lVar11 + 1;
        local_58 = (ulonglong)uVar13;
        if (0 < (int)uVar13) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,0);
        }
        plVar16 = local_60;
        FGenericPlatformString::Memcpy(local_60,psVar1,(longlong)(int)uVar13 * 2);
      }
      bVar3 = true;
      bVar2 = false;
      plVar8 = local_60;
    }
    local_80 = (longlong *)0x0;
    lVar11 = (longlong)(int)local_58;
    local_78 = CONCAT44(local_78._4_4_,(int)local_58);
    iVar10 = 0;
    if ((int)local_58 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_80,local_58 & 0xffffffff,0);
      plVar15 = local_80;
      _guard_xfg_dispatch_icall_nop(local_80,local_60,lVar11 * 2);
      iVar10 = (int)local_78;
    }
    if ((bVar2) && (plVar8 != (longlong *)0x0)) {
      FMemory::Free(plVar8);
    }
    if ((bVar3) && (plVar16 != (longlong *)0x0)) {
      FMemory::Free(plVar16);
    }
    plVar16 = local_70;
    puVar19 = &DAT_143f3eda8;
    plVar8 = (longlong *)&DAT_143f3eda8;
    if (local_res10 != 0) {
      plVar8 = local_70;
    }
    plVar12 = (longlong *)&DAT_143f3eda8;
    if (iVar10 != 0) {
      plVar12 = plVar15;
    }
    puVar7 = (undefined8 *)FName::ToString(lVar6,&local_70);
    if (*(int *)(puVar7 + 1) != 0) {
      puVar19 = (undefined2 *)*puVar7;
    }
    FString::PrintfImpl(&local_60,L"%s [%s]: %s",puVar19,plVar12,plVar8);
    if (param_2 == &local_60) {
      if (local_60 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
    else {
      if (*param_2 != (longlong *)0x0) {
        FMemory::Free();
      }
      *param_2 = local_60;
      *(int *)(param_2 + 1) = (int)local_58;
      *(int *)((longlong)param_2 + 0xc) = local_58._4_4_;
      local_58 = 0;
      local_60 = (longlong *)0x0;
    }
    if (local_70 != (longlong *)0x0) {
      FMemory::Free();
    }
    plVar8 = local_50;
    if (plVar15 != (longlong *)0x0) {
      FMemory::Free(plVar15);
      plVar8 = local_50;
    }
LAB_142bb87c7:
    if (plVar8 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  if (local_40 != (wchar_t *)0x0) {
    FMemory::Free();
  }
LAB_142bb86f1:
  if (plVar16 != (longlong *)0x0) {
    FMemory::Free(plVar16);
  }
  return param_2;
}



// FUNCTION 142bb8b90 DescribeNodeHelper body=229 status=ok
// SIG undefined DescribeNodeHelper(void)

longlong * UBehaviorTreeTypes::DescribeNodeHelper(longlong *param_1,longlong param_2)

{
  undefined2 uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  longlong local_38 [4];
  longlong local_18 [2];
  
  lVar6 = 0;
  if (param_2 == 0) {
    local_38[1] = 0;
    plVar7 = local_38;
    bVar4 = false;
    bVar3 = false;
    bVar2 = true;
  }
  else {
    uVar1 = *(undefined2 *)(param_2 + 0x50);
    puVar5 = (undefined8 *)UBTNode::GetNodeName(param_2,local_18);
    if (*(int *)(puVar5 + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*puVar5;
    }
    FString::PrintfImpl(local_38 + 2,L"%s[%d]",puVar8,uVar1);
    plVar7 = local_38 + 2;
    bVar4 = true;
    bVar3 = true;
    bVar2 = false;
    lVar6 = local_38[2];
  }
  *param_1 = lVar6;
  *plVar7 = 0;
  *(int *)(param_1 + 1) = (int)plVar7[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)plVar7 + 0xc);
  plVar7[1] = 0;
  if (bVar2) {
    if (local_38[0] != 0) {
      FMemory::Free();
    }
  }
  if (bVar3) {
    if (local_38[2] != 0) {
      FMemory::Free();
    }
  }
  if ((bVar4) && (local_18[0] != 0)) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142bb8c80 FUN_142bb8c80 body=571 status=ok
// SIG undefined FUN_142bb8c80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142bb8c80(undefined8 *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *_Src;
  bool bVar3;
  bool bVar4;
  void **ppvVar5;
  void *pvVar6;
  void *local_38;
  int local_30;
  undefined4 uStack_2c;
  void *local_28;
  undefined8 local_20;
  
  pvVar6 = (void *)0x0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b2c5ec) {
    _Init_thread_header(&DAT_146b2c5ec);
    if (DAT_146b2c5ec == -1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146690fa0,0);
      FGenericPlatformString::Memcpy(DAT_146690fa0,L"Succeeded",0x14);
      DAT_146690fb0 = 0;
      _DAT_146690fb8 = 7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146690fb0,0);
      FGenericPlatformString::Memcpy(DAT_146690fb0,L"Failed",0xe);
      DAT_146690fc0 = 0;
      _DAT_146690fc8 = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146690fc0,0);
      FGenericPlatformString::Memcpy(DAT_146690fc0,L"Aborted",0x10);
      DAT_146690fd0 = 0;
      _DAT_146690fd8 = 0xb;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146690fd0,0);
      FGenericPlatformString::Memcpy(DAT_146690fd0,L"InProgress",0x16);
      atexit(FUN_143ebf480);
      _Init_thread_footer(&DAT_146b2c5ec);
    }
  }
  if (param_2 < 4) {
    local_38 = (void *)0x0;
    iVar1 = *(int *)(&DAT_146690fa8 + (longlong)(int)param_2 * 0x10);
    _Src = (void *)(&DAT_146690fa0)[(longlong)(int)param_2 * 2];
    local_30 = iVar1;
    if (iVar1 == 0) {
      ppvVar5 = &local_38;
      uStack_2c = 0;
      bVar4 = true;
      bVar3 = false;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,iVar1,0);
      pvVar6 = local_38;
      _guard_xfg_dispatch_icall_nop(local_38,_Src,(longlong)iVar1 * 2);
      ppvVar5 = &local_38;
      bVar4 = true;
      bVar3 = false;
    }
  }
  else {
    local_20 = 0;
    ppvVar5 = &local_28;
    bVar4 = false;
    bVar3 = true;
    pvVar6 = (void *)0x0;
  }
  *ppvVar5 = (void *)0x0;
  uVar2 = *(undefined4 *)(ppvVar5 + 1);
  *param_1 = pvVar6;
  *(undefined4 *)(param_1 + 1) = uVar2;
  ppvVar5[1] = (void *)0x0;
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)ppvVar5 + 0xc);
  if (bVar3) {
    if (local_28 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if ((bVar4) && (local_38 != (void *)0x0)) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142bb8ec0 FUN_142bb8ec0 body=2063 status=ok
// SIG undefined FUN_142bb8ec0(void)

longlong FUN_142bb8ec0(longlong param_1,longlong *param_2,float *param_3)

{
  float fVar1;
  void *pvVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined2 **ppuVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  undefined2 *puVar13;
  undefined1 uVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined2 *puVar17;
  longlong *plVar18;
  longlong local_res8;
  longlong *local_res10;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar19;
  undefined2 *local_78;
  int local_70;
  int iStack_6c;
  undefined2 *local_68;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  
  uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  plVar15 = (longlong *)0x0;
  local_78 = (undefined2 *)0x0;
  local_70 = 0;
  iStack_6c = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  if (param_2 == (longlong *)0x0) {
LAB_142bb8f3b:
    plVar12 = plVar15;
  }
  else {
    lVar5 = UStructProperty::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    plVar12 = param_2;
    if (!bVar3) goto LAB_142bb8f3b;
  }
  if (param_2 == (longlong *)0x0) {
LAB_142bb8f7c:
    plVar16 = plVar15;
  }
  else {
    lVar5 = UFloatProperty::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    plVar16 = param_2;
    if (!bVar3) goto LAB_142bb8f7c;
  }
  plVar18 = plVar15;
  if (plVar12 != (longlong *)0x0) {
    plVar18 = (longlong *)0x1;
    uVar6 = (**(code **)(*plVar12 + 0x298))(plVar12,&local_68,0,0);
    iVar4 = FUN_141592950(uVar6,L"FBlackboardKeySelector",1,0,CONCAT44(uVar19,0xffffffff));
    if (iVar4 != -1) {
      plVar15 = (longlong *)0x1;
    }
  }
  if ((plVar18 != (longlong *)0x0) && (local_68 != (undefined2 *)0x0)) {
    FMemory::Free();
  }
  if ((char)plVar15 == '\0') {
    if (plVar16 == (longlong *)0x0) {
      if (param_2 == (longlong *)0x0) {
LAB_142bb9207:
        if (plVar12 != (longlong *)0x0) {
          lVar5 = plVar12[0xe];
          if (lVar5 != 0) {
            local_50 = *(longlong *)(lVar5 + 0x38);
            local_48 = 0xffffffff;
            local_44 = 0x101;
            local_42 = 0;
            local_58 = lVar5;
            FUN_140472e10(&local_58);
            lVar5 = local_50;
            while (local_50 = lVar5, lVar5 != 0) {
              iVar10 = 0;
              iVar4 = local_70 + -1;
              if (local_70 < 1) {
                iVar4 = iVar10;
              }
              local_70 = (local_70 < 1) + 1 + local_70;
              if (iStack_6c < local_70) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78);
              }
              local_78[iVar4] = 10;
              local_78[(longlong)iVar4 + 1] = 0;
              iVar4 = local_70 + -1;
              if (local_70 < 1) {
                iVar4 = iVar10;
              }
              local_70 = (local_70 < 1) + 1 + local_70;
              if (iStack_6c < local_70) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78);
              }
              local_78[iVar4] = 9;
              local_78[(longlong)iVar4 + 1] = 0;
              puVar9 = (undefined8 *)
                       FUN_142bb8ec0(&local_68,lVar5,
                                     (longlong)*(int *)(lVar5 + 0x44) + (longlong)param_3);
              iVar4 = local_70;
              if (*(int *)(puVar9 + 1) != 0) {
                iVar10 = *(int *)(puVar9 + 1) + -1;
              }
              pvVar2 = (void *)*puVar9;
              if (iVar10 != 0) {
                lVar8 = (longlong)local_70;
                local_70 = (uint)(local_70 == 0) + local_70 + iVar10;
                if (iStack_6c < local_70) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,iVar4);
                }
                puVar13 = local_78 + (lVar8 - (ulonglong)(iVar4 != 0));
                _guard_xfg_dispatch_icall_nop(puVar13,pvVar2,(longlong)iVar10 * 2);
                puVar13[iVar10] = 0;
              }
              if (local_68 != (undefined2 *)0x0) {
                FMemory::Free();
              }
              local_50 = *(longlong *)(lVar5 + 0x28);
              FUN_140472e10(&local_58);
              param_2 = local_res10;
              param_1 = local_res8;
              lVar5 = local_50;
            }
          }
          goto LAB_142bb95fc;
        }
        if (param_2 != (longlong *)0x0) {
          lVar5 = UArrayProperty::GetPrivateStaticClass();
          if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
              != lVar5 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            if ((param_2[0xe] != 0) && (param_3 != (float *)0x0)) {
              FString::PrintfImpl(&local_68,&DAT_1457e4010);
              puVar13 = local_68;
              iVar4 = local_70;
              if ((int)local_60 == 0) {
                iVar10 = 0;
              }
              else {
                iVar10 = (int)local_60 + -1;
              }
              if (iVar10 != 0) {
                lVar5 = (longlong)local_70;
                local_70 = (uint)(local_70 == 0) + local_70 + iVar10;
                if (iStack_6c < local_70) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,iVar4);
                }
                puVar17 = local_78 + (lVar5 - (ulonglong)(iVar4 != 0));
                _guard_xfg_dispatch_icall_nop(puVar17,puVar13,(longlong)iVar10 * 2);
                puVar17[iVar10] = 0;
              }
              if (local_68 != (undefined2 *)0x0) {
                FMemory::Free(local_68);
              }
              iVar4 = 0;
              fVar1 = param_3[2];
              param_1 = local_res8;
              if (0 < (int)fVar1) {
                do {
                  iVar10 = local_70 + -1;
                  if (local_70 < 1) {
                    iVar10 = 0;
                  }
                  local_70 = (local_70 < 1) + 1 + local_70;
                  if (iStack_6c < local_70) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78);
                  }
                  local_78[iVar10] = 10;
                  local_78[(longlong)iVar10 + 1] = 0;
                  iVar10 = local_70 + -1;
                  if (local_70 < 1) {
                    iVar10 = 0;
                  }
                  local_70 = (local_70 < 1) + 1 + local_70;
                  if (iStack_6c < local_70) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78);
                  }
                  local_78[iVar10] = 9;
                  local_78[(longlong)iVar10 + 1] = 0;
                  puVar9 = (undefined8 *)FUN_142bb8ec0(&local_68,param_2[0xe]);
                  iVar10 = local_70;
                  if (*(int *)(puVar9 + 1) == 0) {
                    iVar11 = 0;
                  }
                  else {
                    iVar11 = *(int *)(puVar9 + 1) + -1;
                  }
                  pvVar2 = (void *)*puVar9;
                  if (iVar11 != 0) {
                    lVar5 = (longlong)local_70;
                    local_70 = (uint)(local_70 == 0) + iVar11 + local_70;
                    if (iStack_6c < local_70) {
                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,iVar10);
                    }
                    puVar13 = local_78 + (lVar5 - (ulonglong)(iVar10 != 0));
                    _guard_xfg_dispatch_icall_nop(puVar13,pvVar2,(longlong)iVar11 * 2);
                    puVar13[iVar11] = 0;
                  }
                  if (local_68 != (undefined2 *)0x0) {
                    FMemory::Free();
                  }
                  iVar4 = iVar4 + 1;
                  param_1 = local_res8;
                } while (iVar4 < (int)fVar1);
              }
            }
            goto LAB_142bb95fc;
          }
        }
      }
      else {
        lVar5 = UClassProperty::GetPrivateStaticClass();
        if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
            != lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          lVar5 = (**(code **)(*param_2 + 0x378))(param_2,param_3);
          if (lVar5 != 0) {
            lVar8 = FUN_14171bfe0();
            if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              local_res8 = *(longlong *)(lVar5 + 0x18);
LAB_142bb90f1:
              FName::ToString(&local_res8,&local_68);
LAB_142bb9102:
              if (local_78 != (undefined2 *)0x0) {
                FMemory::Free();
              }
              local_78 = local_68;
              local_70 = (int)local_60;
              iStack_6c = local_60._4_4_;
            }
          }
          goto LAB_142bb95fc;
        }
        lVar5 = UObjectPropertyBase::GetPrivateStaticClass();
        if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
            != lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_142bb9207;
        if (param_2[0xe] != 0) {
          lVar8 = UDataAsset::GetPrivateStaticClass();
          for (lVar5 = param_2[0xe]; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
            if (lVar5 == lVar8) {
              lVar5 = (**(code **)(*param_2 + 0x378))(param_2,param_3);
              if (lVar5 != 0) {
                local_res8 = *(longlong *)(lVar5 + 0x18);
                goto LAB_142bb90f1;
              }
              local_60 = 5;
              local_68 = (undefined2 *)0x0;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
              FGenericPlatformString::Memcpy(local_68,&DAT_143f3edc8,10);
              goto LAB_142bb9102;
            }
          }
        }
      }
      (**(code **)(*param_2 + 0x2d8))(param_2,&local_78,param_3,0,0,0x80000,0);
      goto LAB_142bb95fc;
    }
    ppuVar7 = (undefined2 **)FString::SanitizeFloat(&local_68,(double)*param_3,1);
  }
  else {
    ppuVar7 = (undefined2 **)FName::ToString(param_3 + 4,&local_68);
  }
  if (&local_78 != ppuVar7) {
    if (local_78 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_78 = *ppuVar7;
    *ppuVar7 = (undefined2 *)0x0;
    local_70 = *(int *)(ppuVar7 + 1);
    iStack_6c = *(int *)((longlong)ppuVar7 + 0xc);
    ppuVar7[1] = (undefined2 *)0x0;
  }
  if (local_68 != (undefined2 *)0x0) {
    FMemory::Free();
  }
LAB_142bb95fc:
  lVar5 = UBoolProperty::GetPrivateStaticClass();
  if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    uVar14 = 0;
  }
  else {
    uVar14 = 1;
  }
  puVar13 = &DAT_143f3eda8;
  local_res8 = param_2[3];
  puVar17 = &DAT_143f3eda8;
  if (local_70 != 0) {
    puVar17 = local_78;
  }
  FName::ToString(&local_res8,&local_68);
  puVar9 = (undefined8 *)FUN_1416a4b30(&local_58,&local_68,uVar14);
  if (*(int *)(puVar9 + 1) != 0) {
    puVar13 = (undefined2 *)*puVar9;
  }
  FString::PrintfImpl(param_1,L"%s: %s",puVar13,puVar17);
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (local_68 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_78 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142bb96d0 DescribeRuntimeValues body=212 status=ok
// SIG undefined DescribeRuntimeValues(void)

void BlueprintNodeHelpers::DescribeRuntimeValues
               (longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulonglong uVar6;
  longlong local_38 [2];
  ulonglong uVar5;
  
  uVar5 = 0;
  uVar6 = uVar5;
  if (0 < (int)param_2[1]) {
    do {
      puVar2 = (undefined8 *)
               FUN_142bb8ec0(local_38,*(longlong *)(uVar6 + *param_2),
                             *(int *)(*(longlong *)(uVar6 + *param_2) + 0x44) + param_1);
      iVar1 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
      }
      puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_3);
      *puVar3 = 0;
      *puVar3 = *puVar2;
      *puVar2 = 0;
      *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar2 + 1);
      *(undefined4 *)((longlong)puVar3 + 0xc) = *(undefined4 *)((longlong)puVar2 + 0xc);
      puVar2[1] = 0;
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      uVar6 = uVar6 + 8;
    } while ((int)uVar4 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 142bb97b0 FUN_142bb97b0 body=250 status=ok
// SIG undefined FUN_142bb97b0(void)

/* WARNING: Removing unreachable block (ram,0x000142bb9890) */

void FUN_142bb97b0(longlong *param_1,undefined8 param_2,longlong param_3,int param_4,
                  longlong *param_5)

{
  int iVar1;
  ushort uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18 [2];
  
  if ((param_4 == 1) && ((*(byte *)(param_1 + 0xb) & 8) != 0)) {
    uVar2 = (**(code **)(*param_1 + 0x2b0))();
    lVar4 = 0;
    if (uVar2 != 0) {
      lVar4 = param_3 - ((ulonglong)(uVar2 + 3) & 0xfffffffffffffffc);
    }
    puVar3 = (undefined8 *)FString::SanitizeFloat(local_18,(double)*(float *)(lVar4 + 4),1);
    if (*(int *)(puVar3 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*puVar3;
    }
    FString::PrintfImpl(&local_28,L"next tick: %ss",puVar5);
    iVar1 = (int)param_5[1];
    *(int *)(param_5 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_5 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_5,iVar1);
    }
    puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_5);
    *puVar3 = 0;
    *puVar3 = local_28;
    *(undefined4 *)(puVar3 + 1) = (undefined4)local_20;
    *(undefined4 *)((longlong)puVar3 + 0xc) = local_20._4_4_;
    local_20 = 0;
    local_28 = 0;
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142bb98b0 DescribeRuntimeValues body=274 status=ok
// SIG undefined DescribeRuntimeValues(void)

/* WARNING: Removing unreachable block (ram,0x000142bb993d) */
/* WARNING: Removing unreachable block (ram,0x000142bb99b7) */

void UBTCompositeNode::DescribeRuntimeValues
               (undefined8 param_1,undefined8 param_2,char *param_3,int param_4,longlong *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  if (param_4 == 1) {
    FString::PrintfImpl(&local_18,L"current child: %d",(int)*param_3);
    iVar1 = (int)param_5[1];
    *(int *)(param_5 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_5 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_5,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_5);
    *puVar2 = 0;
    *puVar2 = local_18;
    *(undefined4 *)(puVar2 + 1) = (undefined4)local_10;
    *(undefined4 *)((longlong)puVar2 + 0xc) = local_10._4_4_;
    local_10 = 0;
    local_18 = 0;
    FString::PrintfImpl(&local_18,L"override child: %d",(int)param_3[1]);
    iVar1 = (int)param_5[1];
    *(int *)(param_5 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_5 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_5,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_5);
    *puVar2 = 0;
    *puVar2 = local_18;
    *(undefined4 *)(puVar2 + 1) = (undefined4)local_10;
    *(undefined4 *)((longlong)puVar2 + 0xc) = local_10._4_4_;
  }
  return;
}



// FUNCTION 142bb99d0 DescribeSelf body=226 status=ok
// SIG undefined DescribeSelf(void)

undefined8 * UBlackboardKeyType_Class::DescribeSelf(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  short *psVar3;
  undefined8 local_res8;
  short *local_18;
  undefined8 local_10;
  
  if (*(longlong *)(param_1 + 0x30) == 0) {
    local_18 = (short *)0x0;
    local_10 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Memcpy(local_18,&DAT_143f3edc8,10);
  }
  else {
    local_res8 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x18);
    FName::ToString(&local_res8,&local_18);
  }
  psVar3 = &DAT_143f3eda8;
  if ((int)local_10 != 0) {
    psVar3 = local_18;
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((psVar3 != (short *)0x0) && (*psVar3 != 0)) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (psVar3[lVar2] != 0);
    iVar1 = (int)lVar2 + 1;
    *(int *)(param_2 + 1) = iVar1;
    if (0 < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    }
    FGenericPlatformString::Memcpy(*param_2,psVar3,(longlong)iVar1 * 2);
  }
  if (local_18 != (short *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142bb9ac0 DescribeValue body=774 status=ok
// SIG undefined DescribeValue(void)

undefined8 *
UBlackboardKeyType::DescribeValue
          (longlong param_1,undefined8 *param_2,undefined8 param_3,undefined1 *param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  void *_Src;
  int iVar4;
  void *pvVar5;
  void **ppvVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  void *_Dst;
  int iVar10;
  void *_Src_00;
  void *pvVar11;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  
  pvVar5 = (void *)0x0;
  local_50 = (void *)0x0;
  local_48 = (ulonglong)(uint)local_48;
  _Src_00 = pvVar5;
  pvVar11 = pvVar5;
  if (*(short *)(param_1 + 0x28) != 0) {
    do {
      FString::PrintfImpl(&local_60,&DAT_1457e4c10,*param_4);
      _Src = local_60;
      if ((int)local_58 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = (int)local_58 + -1;
      }
      if (iVar7 != 0) {
        iVar10 = (int)pvVar5;
        uVar8 = iVar10 + (uint)(iVar10 == 0) + iVar7;
        local_48 = CONCAT44(local_48._4_4_,uVar8);
        if (local_48._4_4_ < (int)uVar8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50,pvVar5);
          _Src_00 = local_50;
          uVar8 = (uint)local_48;
        }
        pvVar5 = (void *)(ulonglong)uVar8;
        _Dst = (void *)(((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2 + (longlong)_Src_00);
        ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar7 * 2);
        *(undefined2 *)((longlong)iVar7 * 2 + (longlong)_Dst) = 0;
      }
      if (local_60 != (void *)0x0) {
        FMemory::Free();
      }
      uVar8 = (int)pvVar11 + 1;
      param_4 = param_4 + 1;
      pvVar11 = (void *)(ulonglong)uVar8;
    } while ((int)uVar8 < (int)(uint)*(ushort *)(param_1 + 0x28));
    iVar7 = (int)pvVar5;
    if ((iVar7 != 0) && (iVar10 = iVar7 + -1, iVar10 != 0)) {
      local_50 = (void *)0x0;
      local_48 = 3;
      bVar3 = true;
      bVar2 = true;
      bVar1 = false;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50);
      pvVar11 = local_50;
      FGenericPlatformString::Convert<char,wchar_t>(local_50,3,&DAT_1457e471c,3,0x3f);
      if ((int)(uint)local_48 < 2) {
        local_48 = CONCAT44(local_48._4_4_,iVar7);
        local_50 = (void *)0x0;
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_50,pvVar5,0);
        ::_guard_xfg_dispatch_icall_nop(local_50,_Src_00,(longlong)iVar7 * 2);
        ppvVar6 = &local_50;
      }
      else {
        local_60 = pvVar11;
        local_58._0_4_ = (uint)local_48;
        local_58._4_4_ = local_48._4_4_;
        iVar7 = (uint)local_48;
        if (local_48._4_4_ < (int)(((uint)local_48 == 0) + (uint)local_48 + iVar10)) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_60);
          iVar7 = (int)local_58;
        }
        iVar4 = (uint)(iVar7 == 0) + iVar7 + iVar10;
        local_58 = CONCAT44(local_58._4_4_,iVar4);
        iVar9 = local_58._4_4_;
        if (local_58._4_4_ < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,iVar7);
          iVar9 = local_58._4_4_;
        }
        pvVar11 = (void *)((longlong)local_60 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
        ::_guard_xfg_dispatch_icall_nop(pvVar11,_Src_00,(longlong)iVar10 * 2);
        ppvVar6 = &local_50;
        local_50 = local_60;
        *(undefined2 *)((longlong)iVar10 * 2 + (longlong)pvVar11) = 0;
        local_48 = CONCAT44(iVar9,(int)local_58);
        pvVar11 = (void *)0x0;
      }
      goto LAB_142bb9d3a;
    }
  }
  local_60 = (void *)0x0;
  local_58 = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_60,6,"empty",6,0x3f);
  ppvVar6 = &local_60;
  bVar3 = false;
  bVar2 = false;
  bVar1 = true;
  pvVar11 = local_50;
LAB_142bb9d3a:
  pvVar5 = *ppvVar6;
  *ppvVar6 = (void *)0x0;
  *param_2 = pvVar5;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(ppvVar6 + 1);
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)ppvVar6 + 0xc);
  ppvVar6[1] = (void *)0x0;
  if ((bVar1) && (local_60 != (void *)0x0)) {
    FMemory::Free();
  }
  if ((bVar2) && (local_50 != (void *)0x0)) {
    FMemory::Free();
  }
  if ((bVar3) && (pvVar11 != (void *)0x0)) {
    FMemory::Free(pvVar11);
  }
  if (_Src_00 != (void *)0x0) {
    FMemory::Free(_Src_00);
  }
  return param_2;
}



// FUNCTION 142bb9dd0 DescribeValue body=128 status=ok
// SIG undefined DescribeValue(void)

undefined8 *
UBlackboardKeyType_Bool::DescribeValue
          (undefined8 param_1,undefined8 *param_2,undefined8 param_3,char *param_4)

{
  int iVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  
  pwVar3 = L"false";
  if (*param_4 != '\0') {
    pwVar3 = L"true";
  }
  *param_2 = 0;
  param_2[1] = 0;
  if (*pwVar3 != L'\0') {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (pwVar3[lVar2] != L'\0');
    iVar1 = (int)lVar2 + 1;
    *(int *)(param_2 + 1) = iVar1;
    if (0 < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    }
    FGenericPlatformString::Memcpy(*param_2,pwVar3,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 142bb9e50 DescribeValue body=256 status=ok
// SIG undefined DescribeValue(void)

undefined8 *
UBlackboardKeyType_Class::DescribeValue
          (undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong lVar1;
  int iVar2;
  short *psVar3;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined8 local_res20;
  short *local_18;
  undefined8 local_10;
  
  local_res10 = *param_4;
  local_res14 = param_4[1];
  lVar1 = FWeakObjectPtr::Get(&local_res10);
  if (lVar1 == 0) {
    local_18 = (short *)0x0;
    local_10 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Memcpy(local_18,&DAT_143f3edc8,10);
  }
  else {
    local_res20 = *(undefined8 *)(lVar1 + 0x18);
    FName::ToString(&local_res20,&local_18);
  }
  psVar3 = &DAT_143f3eda8;
  if ((int)local_10 != 0) {
    psVar3 = local_18;
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((psVar3 != (short *)0x0) && (*psVar3 != 0)) {
    lVar1 = -1;
    do {
      lVar1 = lVar1 + 1;
    } while (psVar3[lVar1] != 0);
    iVar2 = (int)lVar1 + 1;
    *(int *)(param_2 + 1) = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    }
    FGenericPlatformString::Memcpy(*param_2,psVar3,(longlong)iVar2 * 2);
  }
  if (local_18 != (short *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142bb9f50 DescribeValue body=375 status=ok
// SIG undefined DescribeValue(void)

undefined8 *
UBlackboardKeyType_Enum::DescribeValue
          (longlong param_1,undefined8 *param_2,undefined8 param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  void **ppvVar10;
  void *local_48;
  undefined8 local_40;
  void *local_38;
  int local_30;
  undefined4 uStack_2c;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (*(longlong *)(param_1 + 0x30) == 0) {
    local_48 = (void *)0x0;
    local_40 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_48,9,"UNKNOWN!",9,0x3f);
    ppvVar10 = &local_48;
    bVar6 = false;
    bVar5 = false;
    bVar4 = true;
  }
  else {
    uVar8 = FUN_1417373a0(*(longlong *)(param_1 + 0x30),local_28,*param_4);
    puVar9 = (undefined8 *)FText::ToString(uVar8);
    local_38 = (void *)0x0;
    iVar3 = *(int *)(puVar9 + 1);
    _Src = (void *)*puVar9;
    local_30 = iVar3;
    if (iVar3 == 0) {
      uStack_2c = 0;
      ppvVar10 = &local_38;
      bVar6 = true;
      bVar5 = true;
      bVar4 = false;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,iVar3,0);
      ::_guard_xfg_dispatch_icall_nop(local_38,_Src,(longlong)iVar3 * 2);
      ppvVar10 = &local_38;
      bVar6 = true;
      bVar5 = true;
      bVar4 = false;
    }
  }
  *param_2 = *ppvVar10;
  *ppvVar10 = (void *)0x0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(ppvVar10 + 1);
  ppvVar10[1] = (void *)0x0;
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)ppvVar10 + 0xc);
  if (bVar4) {
    if (local_48 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if (bVar5) {
    if (local_38 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if ((bVar6) && (local_20 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142bba0d0 DescribeValue body=46 status=ok
// SIG undefined DescribeValue(void)

undefined8
UBlackboardKeyType_Float::DescribeValue
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,float *param_4)

{
  FString::PrintfImpl(param_2,&DAT_1457e5534,(double)*param_4);
  return param_2;
}



// FUNCTION 142bba100 DescribeValue body=36 status=ok
// SIG undefined DescribeValue(void)

undefined8
UBlackboardKeyType_Int::DescribeValue
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  FString::PrintfImpl(param_2,&DAT_1457e59c4,*param_4);
  return param_2;
}



// FUNCTION 142bba130 DescribeValue body=36 status=ok
// SIG undefined DescribeValue(void)

undefined8
UBlackboardKeyType_Name::DescribeValue
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = *param_4;
  FName::ToString(local_res10);
  return param_2;
}



// FUNCTION 142bba160 DescribeValue body=256 status=ok
// SIG undefined DescribeValue(void)

undefined8 *
UBlackboardKeyType_Object::DescribeValue
          (undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong lVar1;
  int iVar2;
  short *psVar3;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined8 local_res20;
  short *local_18;
  undefined8 local_10;
  
  if (param_4 != (undefined4 *)0x0) {
    local_res10 = *param_4;
    local_res14 = param_4[1];
    lVar1 = FWeakObjectPtr::Get(&local_res10);
    if (lVar1 != 0) {
      local_res20 = *(undefined8 *)(lVar1 + 0x18);
      FName::ToString(&local_res20,&local_18);
      goto LAB_142bba1e2;
    }
  }
  local_18 = (short *)0x0;
  local_10 = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,&DAT_143f3edc8,10);
LAB_142bba1e2:
  psVar3 = &DAT_143f3eda8;
  if ((int)local_10 != 0) {
    psVar3 = local_18;
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((psVar3 != (short *)0x0) && (*psVar3 != 0)) {
    lVar1 = -1;
    do {
      lVar1 = lVar1 + 1;
    } while (psVar3[lVar1] != 0);
    iVar2 = (int)lVar1 + 1;
    *(int *)(param_2 + 1) = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    }
    FGenericPlatformString::Memcpy(*param_2,psVar3,(longlong)iVar2 * 2);
  }
  if (local_18 != (short *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142bba260 DescribeValue body=291 status=ok
// SIG undefined DescribeValue(void)

longlong *
UBlackboardKeyType_Rotator::DescribeValue
          (undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  float fVar5;
  longlong local_28;
  undefined8 local_20;
  longlong local_18 [2];
  
  local_28 = *param_4;
  fVar1 = *(float *)(param_4 + 1);
  fVar5 = (float)((ulonglong)local_28 >> 0x20);
  local_20 = CONCAT44(local_20._4_4_,fVar1);
  if ((((float)local_28 == (float)DAT_146690f00) && (fVar5 == DAT_146690f00._4_4_)) &&
     (fVar1 == DAT_146690f08)) {
    local_28 = 0;
    local_20 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,L"(invalid)",0x14);
    plVar4 = &local_28;
    bVar3 = false;
    bVar2 = true;
  }
  else {
    FString::PrintfImpl(local_18,L"P=%f Y=%f R=%f",(double)(float)local_28,(double)fVar5,
                        (double)fVar1);
    plVar4 = local_18;
    bVar3 = true;
    bVar2 = false;
  }
  *param_2 = *plVar4;
  *plVar4 = 0;
  *(int *)(param_2 + 1) = (int)plVar4[1];
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar4 + 0xc);
  plVar4[1] = 0;
  if (bVar2) {
    if (local_28 != 0) {
      FMemory::Free();
    }
  }
  if ((bVar3) && (local_18[0] != 0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142bba390 FUN_142bba390 body=30 status=ok
// SIG undefined FUN_142bba390(void)

undefined8 FUN_142bba390(longlong param_1,undefined8 param_2)

{
  FString::FString(param_2,param_1 + 0x30);
  return param_2;
}



// FUNCTION 142bba3b0 DescribeValue body=339 status=ok
// SIG undefined DescribeValue(void)

longlong *
UBlackboardKeyType_Vector::DescribeValue
          (undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  float fVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  longlong *plVar6;
  float fVar7;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18 [2];
  
  lVar1 = *param_4;
  fVar2 = *(float *)(param_4 + 1);
  fVar7 = (float)lVar1;
  local_20 = CONCAT44(local_20._4_4_,fVar2);
  if ((-(float)DAT_146690f20 < fVar7) && (fVar7 < (float)DAT_146690f20)) {
    local_28._4_4_ = (float)((ulonglong)lVar1 >> 0x20);
    if ((-DAT_146690f20._4_4_ < local_28._4_4_) && (local_28._4_4_ < DAT_146690f20._4_4_)) {
      if ((-DAT_146690f28 < fVar2) && (fVar2 < DAT_146690f28)) {
        dVar3 = (double)local_28._4_4_;
        local_28 = lVar1;
        FString::PrintfImpl(local_18,L"X=%3.3f Y=%3.3f Z=%3.3f",(double)fVar7,dVar3,(double)fVar2);
        plVar6 = local_18;
        bVar5 = true;
        bVar4 = false;
        goto LAB_142bba4aa;
      }
    }
  }
  local_28 = 0;
  local_20 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"(invalid)",0x14);
  plVar6 = &local_28;
  bVar5 = false;
  bVar4 = true;
LAB_142bba4aa:
  *param_2 = *plVar6;
  *plVar6 = 0;
  *(int *)(param_2 + 1) = (int)plVar6[1];
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar6 + 0xc);
  plVar6[1] = 0;
  if (bVar4) {
    if (local_28 != 0) {
      FMemory::Free();
    }
  }
  if ((bVar5) && (local_18[0] != 0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142bba510 FUN_142bba510 body=551 status=ok
// SIG undefined FUN_142bba510(void)

void FUN_142bba510(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  byte bVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int *piVar8;
  longlong lVar9;
  
  lVar6 = *(longlong *)(param_1 + 0x180);
  if (lVar6 != 0) {
    do {
      iVar5 = 0;
      if (0 < *(int *)(lVar6 + 0x40)) {
        lVar9 = 0;
        do {
          plVar2 = *(longlong **)(lVar9 + 8 + *(longlong *)(lVar6 + 0x38));
          if (plVar2 != (longlong *)0x0) {
            if ((*(int *)(param_1 + 400) == 0) ||
               (bVar3 = *(char *)(lVar6 + 0x4c) + (char)iVar5,
               *(int *)(param_1 + 0x1a0) <= (int)(uint)bVar3)) {
              piVar8 = (int *)0x0;
            }
            else {
              piVar8 = (int *)((ulonglong)
                               *(ushort *)(*(longlong *)(param_1 + 0x198) + (ulonglong)bVar3 * 2) +
                              *(longlong *)(param_1 + 0x188));
            }
            if ((*(byte *)((longlong)plVar2 + 0x2b) & 2) != 0) {
              if (piVar8 == (int *)0x0) {
LAB_142bba5c1:
                plVar4 = (longlong *)0x0;
              }
              else {
                iVar7 = *piVar8;
                if ((iVar7 < 0) || (*(int *)(param_1 + 0x1b0) <= iVar7)) goto LAB_142bba5c1;
                plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x1a8) + (longlong)iVar7 * 8);
              }
              (**(code **)(*plVar4 + 0x2b8))(plVar4,param_1,piVar8 + 1);
            }
            (**(code **)(*plVar2 + 0x2b8))(plVar2,param_1,piVar8);
          }
          iVar5 = iVar5 + 1;
          lVar9 = lVar9 + 0x18;
        } while (iVar5 < *(int *)(lVar6 + 0x40));
      }
      lVar6 = *(longlong *)(lVar6 + 0x30);
    } while (lVar6 != 0);
    lVar6 = *(longlong *)(param_1 + 0x180);
    if (lVar6 != 0) {
      iVar5 = (uint)*(byte *)(lVar6 + 0x4c) + *(int *)(lVar6 + 0x40);
      goto LAB_142bba61b;
    }
  }
  iVar5 = 0;
LAB_142bba61b:
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x278)) {
    lVar6 = 0;
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x270) + 8 + lVar6);
      if (plVar2 != (longlong *)0x0) {
        if ((*(int *)(param_1 + 400) == 0) ||
           (*(int *)(param_1 + 0x1a0) <= (int)(iVar5 + iVar7 & 0xffU))) {
          piVar8 = (int *)0x0;
        }
        else {
          piVar8 = (int *)((ulonglong)
                           *(ushort *)
                            (*(longlong *)(param_1 + 0x198) + (ulonglong)(byte)(iVar5 + iVar7) * 2)
                          + *(longlong *)(param_1 + 0x188));
        }
        if ((*(byte *)((longlong)plVar2 + 0x2b) & 2) != 0) {
          if (piVar8 == (int *)0x0) {
LAB_142bba69e:
            plVar4 = (longlong *)0x0;
          }
          else {
            iVar1 = *piVar8;
            if ((iVar1 < 0) || (*(int *)(param_1 + 0x1b0) <= iVar1)) goto LAB_142bba69e;
            plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x1a8) + (longlong)iVar1 * 8);
          }
          (**(code **)(*plVar4 + 0x2b8))(plVar4,param_1,piVar8 + 1);
        }
        (**(code **)(*plVar2 + 0x2b8))(plVar2,param_1,piVar8);
      }
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 0x18;
    } while (iVar7 < *(int *)(param_1 + 0x278));
  }
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x1a4)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x198,0);
  }
  *(undefined4 *)(param_1 + 400) = 0;
  if ((*(int *)(param_1 + 0x194) < 0) && (*(int *)(param_1 + 0x194) != 0)) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x188,0);
    return;
  }
  return;
}



// FUNCTION 142bba740 FUN_142bba740 body=401 status=ok
// SIG undefined FUN_142bba740(void)

void FUN_142bba740(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined4 local_res18 [4];
  undefined8 local_48;
  undefined2 *local_40;
  int local_38;
  longlong local_30 [3];
  
  FUN_1423cd9e0();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b2c5c8) && (_Init_thread_header(&DAT_146b2c5c8), DAT_146b2c5c8 == -1))
  {
    FName::FName(&DAT_146b2c5c0,&DAT_1457e495c,1);
    _Init_thread_footer(&DAT_146b2c5c8);
  }
  plVar3 = (longlong *)*param_3;
  plVar1 = plVar3 + (int)param_3[1];
  while( true ) {
    if (plVar3 == plVar1) {
      return;
    }
    if (*plVar3 == DAT_146b2c5c0) break;
    plVar3 = plVar3 + 1;
  }
  plVar1 = *(longlong **)(param_1 + 0x548);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x490))(plVar1,param_2,param_3,param_4,param_5);
  }
  lVar2 = FUN_142bbd240(param_1);
  if (lVar2 == 0) {
    return;
  }
  local_48 = *(undefined8 *)(lVar2 + 0x18);
  local_res18[0] = 0;
  FName::ToString(&local_48,&local_40);
  puVar4 = &DAT_143f3eda8;
  if (local_38 != 0) {
    puVar4 = local_40;
  }
  FString::PrintfImpl(local_30,L"      Focus %s",puVar4);
  FUN_1428a6fb0(param_2 + 0x98,local_30,local_res18);
  if (local_30[0] != 0) {
    FMemory::Free();
  }
  if (local_40 == (undefined2 *)0x0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 142bba8e0 FUN_142bba8e0 body=737 status=ok
// SIG undefined FUN_142bba8e0(void)

/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_142bba8e0(longlong param_1,longlong param_2,int param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  byte bVar4;
  undefined2 uVar5;
  char cVar6;
  undefined1 *puVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  char local_res20 [8];
  byte local_78;
  byte local_77;
  uint local_74 [3];
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  
  iVar14 = (int)param_4;
  if ((iVar14 < 0) || (*(int *)(param_1 + 0x60) <= iVar14)) {
    return &stack0x00000000;
  }
  bVar8 = 1;
  local_78 = 1;
  lVar13 = (longlong)iVar14 * 0x30 + *(longlong *)(param_1 + 0x58);
  if (*(int *)(lVar13 + 0x18) == 0) {
    puVar7 = (undefined1 *)0x1;
  }
  else {
    uVar11 = 0;
    lVar15 = (longlong)param_3 * 0x60 + *(longlong *)(param_2 + 0x1d8);
    local_68 = lVar15;
    if (*(int *)(lVar13 + 0x28) == 0) {
      uVar12 = uVar11;
      if (0 < *(int *)(lVar13 + 0x18)) {
        do {
          lVar15 = *(longlong *)(uVar12 + *(longlong *)(lVar13 + 0x10));
          if ((lVar15 == 0) ||
             (cVar6 = FUN_142bcec70(lVar15,param_2,
                                    (ulonglong)*(ushort *)(lVar15 + 0x52) +
                                    *(longlong *)(local_68 + 0x38)), cVar6 == '\0')) {
            bVar8 = 0;
            break;
          }
          uVar10 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar10;
          uVar12 = uVar12 + 8;
        } while ((int)uVar10 < *(int *)(lVar13 + 0x18));
      }
    }
    else {
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      local_48 = 0;
      local_74[0] = 0xffffffff;
      local_74[1] = 0xffffffff;
      local_res20[0] = '\x01';
      uVar12 = uVar11;
      uVar16 = uVar11;
      if (0 < *(int *)(lVar13 + 0x28)) {
        do {
          bVar8 = *(byte *)(uVar12 + *(longlong *)(lVar13 + 0x20));
          lVar1 = uVar12 + *(longlong *)(lVar13 + 0x20);
          iVar14 = (int)uVar11;
          if (bVar8 < 2) {
            if (bVar8 == 1) {
              if (iVar14 == 0) {
                bVar8 = 0;
                param_4 = param_4 & 0xffffffffffffff00;
              }
              else {
                bVar4 = *(byte *)(local_60 + 3 + (longlong)(iVar14 + -1) * 4);
                bVar8 = bVar4 & 1;
                param_4 = (ulonglong)(bVar4 >> 1 & 1);
              }
              if (local_res20[0] != '\0') {
                local_res20[0] = '\0';
                local_74[0] = (uint)*(ushort *)(lVar1 + 2);
              }
              if (bVar8 == 0) {
                lVar1 = *(longlong *)
                         (*(longlong *)(lVar13 + 0x10) + (ulonglong)*(ushort *)(lVar1 + 2) * 8);
                bVar8 = FUN_142bcec70(lVar1,param_2,
                                      (ulonglong)*(ushort *)(lVar1 + 0x52) +
                                      *(longlong *)(lVar15 + 0x38),param_4);
                param_4 = (ulonglong)bVar8;
              }
              local_78 = FUN_142bce2b0(param_2,&local_50,&local_60,param_4,local_74 + 1,local_74,
                                       local_res20);
              if ((uint)local_58 != 0) goto LAB_142bbab55;
              break;
            }
          }
          else {
            uVar5 = *(undefined2 *)(lVar1 + 2);
            local_58 = CONCAT44(local_58._4_4_,iVar14 + 1);
            if (local_58._4_4_ < iVar14 + 1) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_60,uVar11);
            }
            uVar11 = local_48;
            lVar15 = (longlong)iVar14;
            *(undefined2 *)(local_60 + lVar15 * 4) = uVar5;
            *(byte *)(local_60 + 2 + lVar15 * 4) = bVar8;
            pbVar3 = (byte *)(local_60 + 3 + lVar15 * 4);
            *pbVar3 = *pbVar3 & 0xfc;
            pbVar3 = (byte *)(local_60 + lVar15 * 4 + 3);
            *pbVar3 = *pbVar3 | local_77 & 2;
            iVar14 = (int)local_48;
            lVar15 = (longlong)(int)local_48;
            iVar9 = (3 - (uint)((int)local_48 != 0)) + (int)local_48;
            local_48 = CONCAT44(local_48._4_4_,iVar9);
            if (local_48._4_4_ < iVar9) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50,uVar11 & 0xffffffff);
            }
            puVar2 = (undefined4 *)(local_50 + (lVar15 - (ulonglong)(iVar14 != 0)) * 2);
            *puVar2 = 0x200020;
            *(undefined2 *)(puVar2 + 1) = 0;
            local_77 = local_77 & 0xfe;
LAB_142bbab55:
            uVar11 = (ulonglong)(uint)local_58;
            lVar15 = local_68;
          }
          uVar10 = (int)uVar16 + 1;
          uVar12 = uVar12 + 4;
          uVar16 = (ulonglong)uVar10;
        } while ((int)uVar10 < *(int *)(lVar13 + 0x28));
        if (local_50 != 0) {
          FMemory::Free();
        }
        bVar8 = local_78;
        if (local_60 != 0) {
          FMemory::Free();
        }
      }
    }
    puVar7 = (undefined1 *)(ulonglong)bVar8;
  }
  return puVar7;
}



// FUNCTION 142bbabd0 Execute body=83 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,AAIController,TTypeWrapper<void>___cdecl(FAIRequestID,FPathFollowingResult_const_&)>
     ::Execute(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000142bbac20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,param_3);
  return;
}



// FUNCTION 142bbac30 ExecuteIfSafe body=109 status=ok
// SIG undefined ExecuteIfSafe(void)

bool TBaseUObjectMethodDelegateInstance<0,AAIController,void___cdecl(FAIRequestID,FPathFollowingResult_const_&)>
     ::ExecuteIfSafe(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))((int)*(undefined8 *)(param_1 + 0x18) + lVar2,param_2,param_3);
  }
  return lVar1 != 0;
}



// FUNCTION 142bbaca0 FUN_142bbaca0 body=490 status=ok
// SIG undefined FUN_142bbaca0(void)

void FUN_142bbaca0(longlong param_1,longlong *param_2)

{
  int iVar1;
  ushort uVar2;
  undefined4 uVar3;
  int *piVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  
  if (*(int *)(param_1 + 0x1e0) <= (int)(uint)*(ushort *)(param_1 + 800)) {
    return;
  }
  uVar8 = 0;
  lVar9 = (ulonglong)*(ushort *)(param_1 + 800) * 0x60 + *(longlong *)(param_1 + 0x1d8);
  uVar11 = uVar8;
  if (0 < (int)param_2[0xc]) {
    do {
      iVar1 = *(int *)(lVar9 + 0x20);
      plVar5 = *(longlong **)(param_2[0xb] + uVar8);
      lVar6 = (ulonglong)*(ushort *)((longlong)plVar5 + 0x52) + *(longlong *)(lVar9 + 0x38);
      *(int *)(lVar9 + 0x20) = iVar1 + 1;
      if (*(int *)(lVar9 + 0x24) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar9 + 0x18,iVar1);
      }
      *(longlong **)(*(longlong *)(lVar9 + 0x18) + (longlong)iVar1 * 8) = plVar5;
      if ((*(byte *)(plVar5 + 0xb) & 1) != 0) {
        if ((*(byte *)((longlong)plVar5 + 0x55) & 4) == 0) {
LAB_142bbad8e:
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x2c8))(plVar5,param_1,lVar6);
          }
        }
        else {
          uVar2 = (**(code **)(*plVar5 + 0x2b0))(plVar5);
          if ((uVar2 != 0) &&
             (piVar4 = (int *)(lVar6 - ((ulonglong)(uVar2 + 3) & 0xfffffffffffffffc)),
             piVar4 != (int *)0x0)) {
            iVar1 = *piVar4;
            if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x200))) {
              plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x1f8) + (longlong)iVar1 * 8);
              goto LAB_142bbad8e;
            }
          }
        }
      }
      uVar10 = (int)uVar11 + 1;
      uVar8 = uVar8 + 8;
      uVar11 = (ulonglong)uVar10;
    } while ((int)uVar10 < (int)param_2[0xc]);
  }
  plVar7 = (longlong *)0x0;
  *(longlong **)(lVar9 + 8) = param_2;
  *(longlong **)(lVar9 + 0x10) = param_2;
  *(undefined1 *)(lVar9 + 0x49) = 1;
  lVar9 = (ulonglong)*(ushort *)((longlong)param_2 + 0x52) + *(longlong *)(lVar9 + 0x38);
  plVar5 = param_2;
  if ((*(byte *)((longlong)param_2 + 0x55) & 4) == 0) {
LAB_142bbae26:
    if (plVar5 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar5 + 0x2c8))(plVar5,param_1,lVar9);
      goto LAB_142bbae45;
    }
  }
  else {
    uVar2 = (**(code **)(*param_2 + 0x2b0))();
    if ((uVar2 != 0) &&
       (piVar4 = (int *)(lVar9 - ((ulonglong)(uVar2 + 3) & 0xfffffffffffffffc)),
       piVar4 != (int *)0x0)) {
      iVar1 = *piVar4;
      if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x200))) {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x1f8) + (longlong)iVar1 * 8);
        goto LAB_142bbae26;
      }
    }
  }
  uVar3 = 1;
LAB_142bbae45:
  if (*(int *)(param_1 + 0x1e0) != 0) {
    plVar7 = *(longlong **)
              ((ulonglong)*(ushort *)(param_1 + 800) * 0x60 + 0x10 + *(longlong *)(param_1 + 0x1d8))
    ;
  }
  if (plVar7 == param_2) {
    FUN_142bc45b0(param_1,param_2,uVar3);
  }
  return;
}



// FUNCTION 142bbae90 FUN_142bbae90 body=622 status=ok
// SIG undefined FUN_142bbae90(void)

int FUN_142bbae90(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  ushort uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  ushort uVar8;
  longlong *plVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *local_68;
  undefined8 local_60;
  undefined2 local_58;
  undefined1 local_56;
  byte local_55;
  
  if ((int)param_1[0xc] == 0) {
    return -2;
  }
  iVar12 = (int)*(char *)((ulonglong)*(ushort *)((longlong)param_1 + 0x52) +
                         *(longlong *)
                          ((ulonglong)*(ushort *)(*param_2 + 800) * 0x60 + 0x38 +
                          *(longlong *)(*param_2 + 0x1d8)));
  do {
    do {
      do {
        iVar12 = FUN_142bbde90(param_1,param_2,iVar12,*param_3);
        if (((iVar12 < 0) || ((int)param_1[0xc] <= iVar12)) || ((*(byte *)(param_2 + 7) & 1) != 0))
        {
          return -2;
        }
        cVar7 = FUN_142bba8e0(param_1,*param_2,*(undefined2 *)(*param_2 + 800),iVar12);
        if (cVar7 != '\0') {
          FUN_142bc3a10(param_1,param_2,iVar12);
          return iVar12;
        }
        *param_3 = 1;
      } while (((*(byte *)(param_1 + 0x11) & 0x40) != 0) &&
              (cVar7 = (**(code **)(*param_1 + 0x308))(param_1,param_2,iVar12,param_3),
              cVar7 == '\0'));
      iVar10 = 0;
      lVar13 = (longlong)iVar12 * 0x30 + param_1[0xb];
      uVar1 = *(undefined2 *)(*param_2 + 800);
    } while (*(int *)(lVar13 + 0x18) < 1);
    lVar14 = 0;
    do {
      plVar4 = *(longlong **)(lVar14 + *(longlong *)(lVar13 + 0x10));
      if ((*(byte *)(plVar4 + 0xc) & 0x20) != 0) {
        plVar9 = plVar4;
        if ((*(byte *)((longlong)plVar4 + 0x55) & 4) == 0) {
LAB_142bbb02b:
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x2f8))(plVar9,param_2,param_3);
          }
        }
        else {
          lVar5 = *param_2;
          uVar2 = *(ushort *)((longlong)plVar4 + 0x52);
          lVar6 = *(longlong *)
                   ((ulonglong)*(ushort *)(lVar5 + 800) * 0x60 + 0x38 + *(longlong *)(lVar5 + 0x1d8)
                   );
          uVar8 = (**(code **)(*plVar4 + 0x2b0))(plVar4);
          if ((uVar8 != 0) &&
             (piVar11 = (int *)(((ulonglong)uVar2 + lVar6) -
                               ((ulonglong)(uVar8 + 3) & 0xfffffffffffffffc)), piVar11 != (int *)0x0
             )) {
            iVar3 = *piVar11;
            if ((-1 < iVar3) && (iVar3 < *(int *)(lVar5 + 0x200))) {
              plVar9 = *(longlong **)(*(longlong *)(lVar5 + 0x1f8) + (longlong)iVar3 * 8);
              goto LAB_142bbb02b;
            }
          }
        }
      }
      if ((*(char *)((longlong)plVar4 + 100) - 1U & 0xfd) == 0) {
        local_55 = local_55 & 0xfe;
        local_60 = 0;
        local_56 = 1;
        local_68 = plVar4;
        local_58 = uVar1;
        FUN_142bb3e30(param_2,&local_68);
      }
      iVar10 = iVar10 + 1;
      lVar14 = lVar14 + 8;
    } while (iVar10 < *(int *)(lVar13 + 0x18));
  } while( true );
}



// FUNCTION 142bbb100 FUN_142bbb100 body=2100 status=ok
// SIG undefined FUN_142bbb100(void)

void FUN_142bbb100(longlong *param_1,longlong *param_2,longlong param_3,ushort param_4,
                  longlong param_5,ushort param_6,longlong *param_7,ushort *param_8)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  ushort uVar10;
  longlong **pplVar11;
  undefined8 *puVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  undefined2 *puVar15;
  longlong lVar16;
  undefined2 *puVar17;
  ulonglong uVar18;
  undefined2 *puVar19;
  longlong *plVar20;
  longlong *plVar21;
  undefined2 *puVar22;
  bool bVar23;
  undefined8 in_stack_fffffffffffffeb8;
  undefined4 uVar24;
  undefined8 in_stack_fffffffffffffed8;
  undefined4 uVar25;
  undefined8 in_stack_fffffffffffffef0;
  undefined4 uVar26;
  longlong *plVar27;
  longlong *local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  uint local_c0;
  uint local_bc;
  undefined2 *local_b8;
  undefined2 *local_b0;
  int local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong local_88 [2];
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58 [2];
  longlong local_48 [2];
  
  uVar24 = (undefined4)((ulonglong)in_stack_fffffffffffffeb8 >> 0x20);
  uVar25 = (undefined4)((ulonglong)in_stack_fffffffffffffed8 >> 0x20);
  uVar26 = (undefined4)((ulonglong)in_stack_fffffffffffffef0 >> 0x20);
  uVar10 = param_6;
  if (param_4 <= param_6) {
    uVar10 = param_4;
  }
  uVar18 = (ulonglong)uVar10;
  *param_8 = uVar10;
  lVar14 = param_3;
  if (uVar10 != param_4) {
    lVar14 = *(longlong *)(*(longlong *)(uVar18 * 0x60 + 0x10 + *param_1) + 0x48);
  }
  lVar16 = param_5;
  if (uVar10 != param_6) {
    lVar16 = *(longlong *)(*(longlong *)(uVar18 * 0x60 + 0x10 + *param_1) + 0x48);
  }
  if ((lVar14 == 0) && (uVar10 != param_4)) {
    lVar14 = *(longlong *)(uVar18 * 0x60 + *param_1);
  }
  if ((lVar16 == 0) && (uVar10 != param_6)) {
    lVar16 = *(longlong *)(uVar18 * 0x60 + *param_1);
  }
  if ((lVar14 == 0) || (lVar16 == 0)) {
    local_bc = (uint)param_4;
    bVar9 = true;
    bVar23 = false;
    if (((int)local_bc < (int)param_1[1]) &&
       (bVar1 = *(byte *)((ulonglong)param_4 * 0x60 + 0x48 + *param_1),
       (int)(uint)bVar1 < (int)param_2[1])) {
      lVar6 = *(longlong *)((ulonglong)bVar1 * 0x38 + *param_2);
      if (lVar6 == 0) {
        local_e8 = (longlong *)0x0;
        local_e0 = 5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
        FGenericPlatformString::Memcpy(local_e8,&DAT_143f3edc8,10);
        pplVar11 = &local_e8;
        bVar8 = true;
        bVar7 = false;
      }
      else {
        local_c8 = *(longlong **)(lVar6 + 0x18);
        FName::ToString(&local_c8);
        pplVar11 = &local_e8;
        bVar8 = true;
        bVar7 = false;
      }
    }
    else {
      local_d8 = (longlong *)0x0;
      local_d0 = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
      FGenericPlatformString::Memcpy(local_d8,L"unknown",0x10);
      pplVar11 = &local_d8;
      bVar8 = false;
      bVar7 = true;
    }
    local_98 = *pplVar11;
    *pplVar11 = (longlong *)0x0;
    iVar3 = *(int *)(pplVar11 + 1);
    pplVar11[1] = (longlong *)0x0;
    if ((bVar7) && (local_d8 != (longlong *)0x0)) {
      FMemory::Free();
    }
    if ((bVar8) && (local_e8 != (longlong *)0x0)) {
      FMemory::Free();
    }
    local_c0 = (uint)param_6;
    if (((int)local_c0 < (int)param_1[1]) &&
       (bVar1 = *(byte *)((ulonglong)param_6 * 0x60 + 0x48 + *param_1),
       (int)(uint)bVar1 < (int)param_2[1])) {
      lVar6 = *(longlong *)((ulonglong)bVar1 * 0x38 + *param_2);
      if (lVar6 == 0) {
        local_e0 = 5;
        local_e8 = (longlong *)0x0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
        FGenericPlatformString::Memcpy(local_e8,&DAT_143f3edc8,10);
        pplVar11 = &local_e8;
        bVar8 = true;
        bVar7 = false;
      }
      else {
        local_c8 = *(longlong **)(lVar6 + 0x18);
        FName::ToString(&local_c8,&local_e8);
        pplVar11 = &local_e8;
        bVar8 = true;
        bVar7 = false;
      }
    }
    else {
      local_d0 = 8;
      local_d8 = (longlong *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
      FGenericPlatformString::Memcpy(local_d8,L"unknown",0x10);
      pplVar11 = &local_d8;
      bVar8 = false;
      bVar7 = true;
    }
    local_a0 = *pplVar11;
    *pplVar11 = (longlong *)0x0;
    iVar4 = *(int *)(pplVar11 + 1);
    pplVar11[1] = (longlong *)0x0;
    if ((bVar7) && (local_d8 != (longlong *)0x0)) {
      FMemory::Free();
    }
    if ((bVar8) && (local_e8 != (longlong *)0x0)) {
      FMemory::Free();
    }
    if (((int)(uint)*param_8 < (int)param_1[1]) &&
       (bVar1 = *(byte *)((ulonglong)*param_8 * 0x60 + 0x48 + *param_1),
       (int)(uint)bVar1 < (int)param_2[1])) {
      lVar6 = *(longlong *)((ulonglong)bVar1 * 0x38 + *param_2);
      if (lVar6 == 0) {
        local_e8 = (longlong *)0x0;
        local_e0 = 5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
        FGenericPlatformString::Memcpy(local_e8,&DAT_143f3edc8,10);
        pplVar11 = &local_e8;
      }
      else {
        local_c8 = *(longlong **)(lVar6 + 0x18);
        FName::ToString(&local_c8);
        pplVar11 = &local_e8;
      }
    }
    else {
      local_d8 = (longlong *)0x0;
      local_d0 = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
      FGenericPlatformString::Memcpy(local_d8,L"unknown",0x10);
      pplVar11 = &local_d8;
      bVar9 = false;
      bVar23 = true;
    }
    plVar20 = *pplVar11;
    *pplVar11 = (longlong *)0x0;
    iVar5 = *(int *)(pplVar11 + 1);
    pplVar11[1] = (longlong *)0x0;
    local_c8 = plVar20;
    local_a8 = iVar5;
    if ((bVar23) && (local_d8 != (longlong *)0x0)) {
      FMemory::Free();
    }
    if ((bVar9) && (local_e8 != (longlong *)0x0)) {
      FMemory::Free();
    }
    local_90 = (longlong *)(*param_1 + (ulonglong)*param_8 * 0x60);
    puVar12 = (undefined8 *)UBehaviorTreeTypes::DescribeNodeHelper(local_48,local_90[2]);
    puVar15 = &DAT_143f3eda8;
    if (*(int *)(puVar12 + 1) == 0) {
      local_b8 = &DAT_143f3eda8;
    }
    else {
      local_b8 = (undefined2 *)*puVar12;
    }
    local_d8 = (longlong *)&DAT_143f3eda8;
    if (iVar5 != 0) {
      local_d8 = plVar20;
    }
    puVar12 = (undefined8 *)UBehaviorTreeTypes::DescribeNodeHelper(local_58,lVar16);
    if (*(int *)(puVar12 + 1) == 0) {
      local_b0 = &DAT_143f3eda8;
    }
    else {
      local_b0 = (undefined2 *)*puVar12;
    }
    local_e8 = (longlong *)&DAT_143f3eda8;
    if (iVar4 != 0) {
      local_e8 = local_a0;
    }
    puVar12 = (undefined8 *)UBehaviorTreeTypes::DescribeNodeHelper(local_68,param_5);
    if (*(int *)(puVar12 + 1) == 0) {
      puVar19 = &DAT_143f3eda8;
    }
    else {
      puVar19 = (undefined2 *)*puVar12;
    }
    puVar12 = (undefined8 *)UBehaviorTreeTypes::DescribeNodeHelper(local_78,lVar14);
    if (*(int *)(puVar12 + 1) == 0) {
      puVar22 = &DAT_143f3eda8;
    }
    else {
      puVar22 = (undefined2 *)*puVar12;
    }
    plVar20 = (longlong *)&DAT_143f3eda8;
    if (iVar3 != 0) {
      plVar20 = local_98;
    }
    puVar12 = (undefined8 *)UBehaviorTreeTypes::DescribeNodeHelper(local_88,param_3);
    if (*(int *)(puVar12 + 1) == 0) {
      puVar17 = &DAT_143f3eda8;
    }
    else {
      puVar17 = (undefined2 *)*puVar12;
    }
    pwVar13 = L"";
    if (local_90[2] == *local_90) {
      pwVar13 = L" (root)";
    }
    plVar21 = local_e8;
    plVar27 = local_d8;
    LowLevelFatalErrorHandler
              ("Unknown",0x2d8,
               L"Fatal error in FindCommonParent() call.\nInNodeA: %s, InstanceIdxA: %d (%s), NodeA: %s\nInNodeB: %s, InstanceIdxB: %d (%s), NodeB: %s\nCommonInstanceIdx: %d (%s), ActiveNode: %s%s"
               ,puVar17,CONCAT44(uVar24,local_bc),plVar20,puVar22,puVar19,CONCAT44(uVar25,local_c0),
               local_e8,local_b0,CONCAT44(uVar26,(uint)*param_8),local_d8,local_b8,pwVar13);
    uVar24 = (undefined4)((ulonglong)plVar20 >> 0x20);
    uVar25 = (undefined4)((ulonglong)plVar21 >> 0x20);
    uVar26 = (undefined4)((ulonglong)plVar27 >> 0x20);
    if (local_88[0] != 0) {
      FMemory::Free();
    }
    if (local_78[0] != 0) {
      FMemory::Free();
    }
    if (local_68[0] != 0) {
      FMemory::Free();
    }
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    local_e8 = (longlong *)(*param_1 + (ulonglong)*param_8 * 0x60);
    puVar12 = (undefined8 *)UBehaviorTreeTypes::DescribeNodeHelper(local_88,local_e8[2]);
    if (*(int *)(puVar12 + 1) == 0) {
      local_b0 = &DAT_143f3eda8;
    }
    else {
      local_b0 = (undefined2 *)*puVar12;
    }
    local_d8 = (longlong *)&DAT_143f3eda8;
    if (local_a8 != 0) {
      local_d8 = local_c8;
    }
    puVar12 = (undefined8 *)UBehaviorTreeTypes::DescribeNodeHelper(local_78,lVar16);
    if (*(int *)(puVar12 + 1) == 0) {
      local_b8 = &DAT_143f3eda8;
    }
    else {
      local_b8 = (undefined2 *)*puVar12;
    }
    plVar20 = (longlong *)&DAT_143f3eda8;
    if (iVar4 != 0) {
      plVar20 = local_a0;
    }
    puVar12 = (undefined8 *)UBehaviorTreeTypes::DescribeNodeHelper(local_68,param_5);
    if (*(int *)(puVar12 + 1) == 0) {
      puVar19 = &DAT_143f3eda8;
    }
    else {
      puVar19 = (undefined2 *)*puVar12;
    }
    puVar12 = (undefined8 *)UBehaviorTreeTypes::DescribeNodeHelper(local_58,lVar14);
    if (*(int *)(puVar12 + 1) == 0) {
      puVar22 = &DAT_143f3eda8;
    }
    else {
      puVar22 = (undefined2 *)*puVar12;
    }
    plVar21 = (longlong *)&DAT_143f3eda8;
    if (iVar3 != 0) {
      plVar21 = local_98;
    }
    puVar12 = (undefined8 *)UBehaviorTreeTypes::DescribeNodeHelper(local_48,param_3);
    if (*(int *)(puVar12 + 1) != 0) {
      puVar15 = (undefined2 *)*puVar12;
    }
    pwVar13 = L"";
    if (local_e8[2] == *local_e8) {
      pwVar13 = L" (root)";
    }
    FDebug::AssertFailed
              (&DAT_1457e4026,"Unknown",0x2d8,
               L"Fatal error in FindCommonParent() call.\nInNodeA: %s, InstanceIdxA: %d (%s), NodeA: %s\nInNodeB: %s, InstanceIdxB: %d (%s), NodeB: %s\nCommonInstanceIdx: %d (%s), ActiveNode: %s%s"
               ,puVar15,CONCAT44(uVar24,local_bc),plVar21,puVar22,puVar19,CONCAT44(uVar25,local_c0),
               plVar20,local_b8,CONCAT44(uVar26,(uint)*param_8),local_d8,local_b0,pwVar13);
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    if (local_68[0] != 0) {
      FMemory::Free();
    }
    if (local_78[0] != 0) {
      FMemory::Free();
    }
    if (local_88[0] != 0) {
      FMemory::Free();
    }
    if (local_c8 != (longlong *)0x0) {
      FMemory::Free(local_c8);
    }
    if (local_a0 != (longlong *)0x0) {
      FMemory::Free(local_a0);
    }
    if (local_98 != (longlong *)0x0) {
      FMemory::Free(local_98);
    }
  }
  bVar1 = *(byte *)(lVar14 + 0x54);
  bVar2 = *(byte *)(lVar16 + 0x54);
  bVar23 = false;
  if (bVar2 < bVar1) {
    do {
      lVar14 = *(longlong *)(lVar14 + 0x48);
      bVar1 = *(byte *)(lVar14 + 0x54);
    } while (bVar2 < bVar1);
    bVar23 = bVar2 < bVar1;
  }
  if (!bVar23 && bVar2 != bVar1) {
    do {
      lVar16 = *(longlong *)(lVar16 + 0x48);
    } while (bVar1 < *(byte *)(lVar16 + 0x54));
  }
  if (lVar14 != lVar16) {
    do {
      lVar14 = *(longlong *)(lVar14 + 0x48);
      lVar16 = *(longlong *)(lVar16 + 0x48);
    } while (lVar14 != lVar16);
  }
  *param_7 = lVar14;
  return;
}



// FUNCTION 142bbb940 FUN_142bbb940 body=141 status=ok
// SIG undefined FUN_142bbb940(void)

ulonglong FUN_142bbb940(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  lVar4 = UBehaviorTreeComponent::FindTemplateNode();
  if (lVar4 != 0) {
    iVar1 = *(int *)(param_1 + 0x1e0);
    if (iVar1 != 0) {
      plVar6 = *(longlong **)(param_1 + 0x1d8);
      if (plVar6[(ulonglong)*(ushort *)(param_1 + 800) * 0xc + 2] == lVar4) {
        return (ulonglong)*(ushort *)(param_1 + 800);
      }
      lVar3 = *(longlong *)(lVar4 + 0x48);
      while (lVar2 = lVar3, lVar2 != 0) {
        lVar4 = lVar2;
        lVar3 = *(longlong *)(lVar2 + 0x48);
      }
      uVar5 = 0;
      uVar7 = uVar5;
      if (0 < iVar1) {
        do {
          if (*plVar6 == lVar4) {
            return uVar5;
          }
          uVar5 = (ulonglong)((int)uVar5 + 1);
          uVar7 = uVar7 + 1;
          plVar6 = plVar6 + 0xc;
        } while ((longlong)uVar7 < (longlong)iVar1);
      }
    }
  }
  return 0xffffffff;
}



// FUNCTION 142bbb9d0 FUN_142bbb9d0 body=469 status=ok
// SIG undefined FUN_142bbb9d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142bbb9d0(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong *plStack_e0;
  longlong local_d8;
  longlong *local_d0;
  int local_c8;
  undefined1 local_c0 [128];
  longlong local_40;
  longlong *plStack_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  lVar5 = (**(code **)(*param_1 + 0x148))();
  if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x138), lVar5 != 0)) {
    lVar6 = FUN_142ba9430();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      uVar7 = FUN_142b80820(local_c0,param_3);
      FUN_142b8cc30(lVar5,&local_d8,uVar7,0);
      plVar9 = local_d0;
      if ((local_c8 == 3) && (local_d8 != 0)) {
        if ((*(uint *)(param_2 + 4) >> 1 & 1) != 0) {
          FUN_142b977f0(local_d8,*param_2,0x42c80000);
        }
        *(uint *)(local_d8 + 0x98) = *(uint *)(local_d8 + 0x98) | 0x10;
        local_e8 = local_d8;
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
          UNLOCK();
        }
        plVar8 = local_d0;
        if (&local_e8 != param_4) {
          local_e8 = *param_4;
          plVar8 = (longlong *)param_4[1];
          local_40 = local_d8;
          plStack_38 = local_d0;
          *param_4 = local_d8;
          param_4[1] = (longlong)local_d0;
        }
        plVar9 = local_d0;
        plStack_e0 = plVar8;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar8 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            plVar9 = local_d0;
            if (iVar3 == 1) {
              (**(code **)(*plStack_e0 + 8))(plStack_e0,1);
              plVar9 = local_d0;
            }
          }
        }
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar9 + 1;
        lVar5 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142bbbbb0 FindTemplateNode body=349 status=ok
// SIG undefined FindTemplateNode(void)

longlong UBehaviorTreeComponent::FindTemplateNode(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  
  if (((param_2 == 0) || ((*(byte *)(param_2 + 0x55) & 1) == 0)) ||
     (lVar1 = *(longlong *)(param_2 + 0x48), lVar1 == 0)) {
    return param_2;
  }
  uVar4 = 0;
  if (0 < *(int *)(lVar1 + 0x60)) {
    lVar7 = *(longlong *)(lVar1 + 0x58);
    uVar8 = uVar4;
    do {
      lVar2 = *(longlong *)(lVar7 + 8);
      if (lVar2 != 0) {
        if (*(short *)(lVar2 + 0x50) == *(short *)(param_2 + 0x50)) {
          return lVar2;
        }
        if (0 < *(int *)(lVar2 + 0x60)) {
          plVar6 = *(longlong **)(lVar2 + 0x58);
          plVar3 = plVar6;
          uVar5 = uVar4;
          uVar10 = uVar4;
          do {
            iVar9 = (int)uVar10;
            if (*(short *)(*plVar3 + 0x50) == *(short *)(param_2 + 0x50)) goto LAB_142bbbcf5;
            uVar10 = (ulonglong)(iVar9 + 1);
            uVar5 = uVar5 + 1;
            plVar3 = plVar3 + 1;
          } while ((longlong)uVar5 < (longlong)*(int *)(lVar2 + 0x60));
        }
      }
      if (0 < *(int *)(lVar7 + 0x18)) {
        plVar6 = *(longlong **)(lVar7 + 0x10);
        plVar3 = plVar6;
        uVar5 = uVar4;
        uVar10 = uVar4;
        do {
          iVar9 = (int)uVar10;
          if (*(short *)(*plVar3 + 0x50) == *(short *)(param_2 + 0x50)) {
LAB_142bbbcf5:
            return plVar6[iVar9];
          }
          uVar10 = (ulonglong)(iVar9 + 1);
          uVar5 = uVar5 + 1;
          plVar3 = plVar3 + 1;
        } while ((longlong)uVar5 < (longlong)*(int *)(lVar7 + 0x18));
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x30;
    } while ((longlong)uVar8 < (longlong)*(int *)(lVar1 + 0x60));
  }
  if (0 < *(int *)(lVar1 + 0x70)) {
    plVar6 = *(longlong **)(lVar1 + 0x68);
    uVar8 = uVar4;
    do {
      if (*(short *)(*plVar6 + 0x50) == *(short *)(param_2 + 0x50)) {
        return (*(longlong **)(lVar1 + 0x68))[(int)uVar8];
      }
      uVar8 = (ulonglong)((int)uVar8 + 1);
      uVar4 = uVar4 + 1;
      plVar6 = plVar6 + 1;
    } while ((longlong)uVar4 < (longlong)*(int *)(lVar1 + 0x70));
  }
  return 0;
}



// FUNCTION 142bbbd10 Finish body=54 status=ok
// SIG undefined Finish(void)

void UPawnAction::Finish(longlong param_1,byte *param_2)

{
  byte bVar1;
  
  bVar1 = *param_2;
  if ((1 < bVar1) && (*(uint *)(param_1 + 0x88) != (uint)bVar1)) {
    *(uint *)(param_1 + 0x88) = (uint)bVar1;
  }
  StopWaitingForMessages();
  FUN_142bca010(param_1,4);
  return;
}



// FUNCTION 142bbbd50 FUN_142bbbd50 body=122 status=ok
// SIG undefined FUN_142bbbd50(void)

void FUN_142bbbd50(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(lVar3 + *(longlong *)(param_1 + 0x40));
      if ((plVar1 != (longlong *)0x0) && ((*(uint *)(plVar1 + 1) >> 0xf & 1) == 0)) {
        (**(code **)(*plVar1 + 0x410))();
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x48));
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x4c)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x40,0);
  }
  FUN_141755460(param_1);
  return;
}



// FUNCTION 142bbbdd0 FinishLatentAbort body=42 status=ok
// SIG undefined FinishLatentAbort(void)

void UBTTaskNode::FinishLatentAbort(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = UBehaviorTreeComponent::FindTemplateNode(param_2,param_1);
  FUN_142bc45b0(param_2,uVar1,2);
  return;
}



// FUNCTION 142bbbe00 FinishLatentTask body=51 status=ok
// SIG undefined FinishLatentTask(void)

void UBTTaskNode::FinishLatentTask(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = UBehaviorTreeComponent::FindTemplateNode(param_2,param_1);
  FUN_142bc45b0(param_2,uVar1,param_3);
  return;
}



// FUNCTION 142bbbe40 ForceClearAllLocks body=98 status=ok
// SIG undefined ForceClearAllLocks(void)

void FAIResourceLock::ForceClearAllLocks(undefined2 *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)(param_1 + 4);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 10)) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  if (*(char *)(param_1 + 0xc) != '\0') {
    iVar2 = *(int *)(param_1 + 8);
    *(int *)(param_1 + 8) = iVar2 + 0x10;
    if (*(int *)(param_1 + 10) < iVar2 + 0x10) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
    }
    lVar3 = *plVar1;
    *(undefined8 *)(iVar2 + lVar3) = 0;
    ((undefined8 *)(iVar2 + lVar3))[1] = 0;
  }
  return;
}



// FUNCTION 142bbbeb0 FUN_142bbbeb0 body=164 status=ok
// SIG undefined FUN_142bbbeb0(void)

longlong FUN_142bbbeb0(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar2 = UAITask::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((bVar1) && (*(longlong *)(param_2 + 0x68) != 0)) &&
       (lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x68) + 0x550), lVar2 != 0)) {
      lVar3 = UProgressBar::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        return lVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 142bbbf60 GetBlackboardAsset body=15 status=ok
// SIG undefined GetBlackboardAsset(void)

undefined8 UBTNode::GetBlackboardAsset(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x30);
  }
  return 0;
}



// FUNCTION 142bbbf70 FUN_142bbbf70 body=8 status=ok
// SIG undefined FUN_142bbbf70(void)

undefined8 FUN_142bbbf70(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x180);
}



// FUNCTION 142bbbf80 FUN_142bbbf80 body=307 status=ok
// SIG undefined FUN_142bbbf80(void)

longlong FUN_142bbbf80(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  bool bVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 local_res18;
  undefined4 local_res1c;
  
  lVar5 = FUN_142bbe2b0();
  if (lVar5 != 0) {
    bVar4 = FUN_142bbd6b0(lVar5,param_2 + 0x10);
    lVar6 = FUN_142bbd600(lVar5);
    if (((lVar6 != 0) && (*(longlong *)(lVar6 + 8) != 0)) &&
       (lVar2 = *(longlong *)(*(longlong *)(lVar6 + 8) + 0x10),
       lVar7 = UBlackboardKeyType_Object::GetPrivateStaticClass(), lVar2 == lVar7)) {
      if ((*(int *)(lVar5 + 400) == 0) || (*(int *)(lVar5 + 0x1a0) <= (int)(uint)bVar4)) {
        lVar5 = 0;
      }
      else {
        lVar5 = (ulonglong)*(ushort *)(*(longlong *)(lVar5 + 0x198) + (ulonglong)bVar4 * 2) +
                *(longlong *)(lVar5 + 0x188);
      }
      puVar1 = (undefined4 *)
               (lVar5 + (ulonglong)(*(byte *)(*(longlong *)(lVar6 + 8) + 0x2b) >> 1 & 1) * 4);
      if (puVar1 == (undefined4 *)0x0) {
        lVar5 = 0;
      }
      else {
        local_res18 = *puVar1;
        local_res1c = puVar1[1];
        lVar5 = FWeakObjectPtr::Get(&local_res18);
      }
      if (lVar5 != 0) {
        lVar6 = FUN_1428dfc70();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          return lVar5;
        }
      }
    }
  }
  return 0;
}


