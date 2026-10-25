// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1414def60 FUN_1414def60 body=47 status=ok
// SIG undefined FUN_1414def60(void)

longlong FUN_1414def60(void)

{
  if (DAT_1468a1880 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a1880,&PTR_Z_Construct_UPackage__Script_MechWarrior_14647a530);
  }
  return DAT_1468a1880;
}



// FUNCTION 1414def90 FUN_1414def90 body=47 status=ok
// SIG undefined FUN_1414def90(void)

longlong FUN_1414def90(void)

{
  if (DAT_1468a18f8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a18f8,&PTR_Z_Construct_UPackage__Script_MechWarrior_14647ad70);
  }
  return DAT_1468a18f8;
}



// FUNCTION 1414defc0 FUN_1414defc0 body=47 status=ok
// SIG undefined FUN_1414defc0(void)

longlong FUN_1414defc0(void)

{
  if (DAT_1468a18e8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a18e8,&PTR_Z_Construct_UPackage__Script_MechWarrior_14647aca0);
  }
  return DAT_1468a18e8;
}



// FUNCTION 1414deff0 FUN_1414deff0 body=47 status=ok
// SIG undefined FUN_1414deff0(void)

longlong FUN_1414deff0(void)

{
  if (DAT_1468a18d8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a18d8,&PTR_Z_Construct_UPackage__Script_MechWarrior_14647ab60);
  }
  return DAT_1468a18d8;
}



// FUNCTION 1414df020 FUN_1414df020 body=47 status=ok
// SIG undefined FUN_1414df020(void)

longlong FUN_1414df020(void)

{
  if (DAT_1468a18c8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a18c8,&PTR_Z_Construct_UPackage__Script_MechWarrior_14647aaa0);
  }
  return DAT_1468a18c8;
}



// FUNCTION 1414df050 FUN_1414df050 body=47 status=ok
// SIG undefined FUN_1414df050(void)

longlong FUN_1414df050(void)

{
  if (DAT_1468a19f8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a19f8,&PTR_Z_Construct_UPackage__Script_MechWarrior_14647ca70);
  }
  return DAT_1468a19f8;
}



// FUNCTION 1414df080 FUN_1414df080 body=47 status=ok
// SIG undefined FUN_1414df080(void)

longlong FUN_1414df080(void)

{
  if (DAT_1468a1a08 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a1a08,&PTR_Z_Construct_UPackage__Script_MechWarrior_14647cb30);
  }
  return DAT_1468a1a08;
}



// FUNCTION 1414df0b0 FUN_1414df0b0 body=47 status=ok
// SIG undefined FUN_1414df0b0(void)

longlong FUN_1414df0b0(void)

{
  if (DAT_1468a1908 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a1908,&PTR_Z_Construct_UPackage__Script_MechWarrior_14647ae30);
  }
  return DAT_1468a1908;
}



// FUNCTION 1414df0e0 FUN_1414df0e0 body=47 status=ok
// SIG undefined FUN_1414df0e0(void)

longlong FUN_1414df0e0(void)

{
  if (DAT_1468a18b8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a18b8,&PTR_Z_Construct_UPackage__Script_MechWarrior_14647a940);
  }
  return DAT_1468a18b8;
}



// FUNCTION 1414df110 FUN_1414df110 body=323 status=ok
// SIG undefined FUN_1414df110(void)

void FUN_1414df110(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_18;
  undefined8 local_10;
  
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_141260aa0(param_1,local_18,local_res20,local_10,local_res10[0]);
  return;
}



// FUNCTION 1414df260 FUN_1414df260 body=421 status=ok
// SIG undefined FUN_1414df260(void)

void FUN_1414df260(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 local_res10 [4];
  undefined8 local_res20;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  
  local_48 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
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
    FUN_14179aca0(param_2,&local_40);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  FWeakObjectPtr::operator=(local_38,0);
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar1 = local_38;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_28 = *puVar1;
  local_24 = puVar1[1];
  local_20 = *(undefined8 *)(puVar1 + 2);
  FUN_141260c10(param_1,local_48,local_res20,local_40,local_res10[0],&local_28);
  return;
}



// FUNCTION 1414df410 FUN_1414df410 body=404 status=ok
// SIG undefined FUN_1414df410(void)

void FUN_1414df410(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined8 local_res10;
  undefined8 local_res20;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [12];
  undefined4 local_8c;
  
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
  FUN_1412753e0(param_1,local_res20,local_res10,&local_a8,puVar1);
  return;
}



// FUNCTION 1414df6f0 execOnControllerConnectionChanged body=192 status=ok
// SIG undefined execOnControllerConnectionChanged(void)

void UConsoleCompatGameInstance::execOnControllerConnectionChanged
               (undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  undefined4 local_res20 [2];
  
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
  FUN_141275f20(param_1,local_res20[0],local_res10[0] != 0);
  return;
}



// FUNCTION 1414df8b0 FUN_1414df8b0 body=128 status=ok
// SIG undefined FUN_1414df8b0(void)

void FUN_1414df8b0(undefined8 param_1,longlong param_2)

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
  FUN_141277730(param_1,local_res10);
  return;
}



// FUNCTION 1414df930 FUN_1414df930 body=118 status=ok
// SIG undefined FUN_1414df930(void)

void FUN_1414df930(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [24];
  
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
  FUN_141277aa0(param_1,local_res10[0]);
  return;
}



// FUNCTION 1414dfa10 FUN_1414dfa10 body=324 status=ok
// SIG undefined FUN_1414dfa10(void)

void FUN_1414dfa10(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 local_res10 [16];
  undefined8 local_res20;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_58 = 0;
  local_50 = 0xffffffff;
  uStack_48 = 0xffffffff;
  local_40 = 1;
  local_38 = 0;
  uStack_30 = 0;
  local_3c = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_res10[0] = 0;
  puVar1 = &local_58;
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
  FUN_141278570(param_1,local_res20,puVar1,local_res10[0]);
  return;
}



// FUNCTION 1414dfb60 FUN_1414dfb60 body=324 status=ok
// SIG undefined FUN_1414dfb60(void)

void FUN_1414dfb60(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 local_res10 [16];
  undefined8 local_res20;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_58 = 0;
  local_50 = 0xffffffff;
  uStack_48 = 0xffffffff;
  local_40 = 1;
  local_38 = 0;
  uStack_30 = 0;
  local_3c = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_res10[0] = 0;
  puVar1 = &local_58;
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
  FUN_1412785c0(param_1,local_res20,puVar1,local_res10[0]);
  return;
}



// FUNCTION 1414dfcf0 execOnControllerConnectionChanged body=192 status=ok
// SIG undefined execOnControllerConnectionChanged(void)

void UConsoleCompatGameInstance::execOnControllerConnectionChanged
               (undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  undefined4 local_res20 [2];
  
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
  FUN_141278640(param_1,local_res20[0],local_res10[0] != 0);
  return;
}



// FUNCTION 1414dfdb0 FUN_1414dfdb0 body=332 status=ok
// SIG undefined FUN_1414dfdb0(void)

void FUN_1414dfdb0(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  undefined4 local_res20 [2];
  undefined4 local_18;
  undefined4 local_14 [3];
  
  local_14[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_14);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_14);
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
  FUN_1412786e0(param_1,local_14[0],local_18,local_res20[0],local_res10[0] != 0);
  return;
}



// FUNCTION 1414dff00 FUN_1414dff00 body=118 status=ok
// SIG undefined FUN_1414dff00(void)

void FUN_1414dff00(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [24];
  
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
  FUN_14127a6d0(param_1,local_res10[0]);
  return;
}



// FUNCTION 1414dff80 FUN_1414dff80 body=319 status=ok
// SIG undefined FUN_1414dff80(void)

void FUN_1414dff80(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 local_res10;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  
  local_res10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar1 = &local_res10;
  if (puVar3 != (undefined8 *)0x0) {
    puVar1 = puVar3;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  local_38 = 0;
  local_30 = 0;
  puVar2 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar3 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14127e200(param_1,puVar1,puVar2,puVar3);
  return;
}



// FUNCTION 1414e00c0 FUN_1414e00c0 body=296 status=ok
// SIG undefined FUN_1414e00c0(void)

void FUN_1414e00c0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 local_res10 [4];
  undefined8 local_res20;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  
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
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar2 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14127e2e0(param_1,puVar1,local_res10[0],puVar2);
  return;
}



// FUNCTION 1414e01f0 FUN_1414e01f0 body=291 status=ok
// SIG undefined FUN_1414e01f0(void)

void FUN_1414e01f0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  
  local_res10[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res20 = 0;
  puVar1 = local_res10;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar2 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14127e3c0(param_1,puVar1,local_res20,puVar2);
  return;
}



// FUNCTION 1414e0320 FUN_1414e0320 body=319 status=ok
// SIG undefined FUN_1414e0320(void)

void FUN_1414e0320(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 local_res10;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  
  local_res10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar1 = &local_res10;
  if (puVar3 != (undefined8 *)0x0) {
    puVar1 = puVar3;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  local_38 = 0;
  local_30 = 0;
  puVar2 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar3 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14127e490(param_1,puVar1,puVar2,puVar3);
  return;
}



// FUNCTION 1414e0460 FUN_1414e0460 body=118 status=ok
// SIG undefined FUN_1414e0460(void)

void FUN_1414e0460(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [24];
  
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
  FUN_141280e60(param_1,local_res10[0]);
  return;
}



// FUNCTION 1414e04e0 FUN_1414e04e0 body=47 status=ok
// SIG undefined FUN_1414e04e0(void)

longlong FUN_1414e04e0(void)

{
  if (DAT_1468a2238 == 0) {
    FUN_141786440(&DAT_1468a2238,&PTR_GetPrivateStaticClass_144c01630);
  }
  return DAT_1468a2238;
}



// FUNCTION 1414e0510 FUN_1414e0510 body=47 status=ok
// SIG undefined FUN_1414e0510(void)

longlong FUN_1414e0510(void)

{
  if (DAT_1468a2190 == 0) {
    FUN_141786a30(&DAT_1468a2190,&PTR_FUN_146481cc0);
  }
  return DAT_1468a2190;
}



// FUNCTION 1414e0540 FUN_1414e0540 body=47 status=ok
// SIG undefined FUN_1414e0540(void)

longlong FUN_1414e0540(void)

{
  if (DAT_1468a2198 == 0) {
    FUN_141786a30(&DAT_1468a2198,&PTR_FUN_146481d80);
  }
  return DAT_1468a2198;
}



// FUNCTION 1414e0570 FUN_1414e0570 body=47 status=ok
// SIG undefined FUN_1414e0570(void)

longlong FUN_1414e0570(void)

{
  if (DAT_1468a21a0 == 0) {
    FUN_141786a30(&DAT_1468a21a0,&PTR_FUN_146481ec0);
  }
  return DAT_1468a21a0;
}



// FUNCTION 1414e05a0 FUN_1414e05a0 body=47 status=ok
// SIG undefined FUN_1414e05a0(void)

longlong FUN_1414e05a0(void)

{
  if (DAT_1468a21a8 == 0) {
    FUN_141786a30(&DAT_1468a21a8,&PTR_FUN_146481f40);
  }
  return DAT_1468a21a8;
}



// FUNCTION 1414e05d0 FUN_1414e05d0 body=47 status=ok
// SIG undefined FUN_1414e05d0(void)

longlong FUN_1414e05d0(void)

{
  if (DAT_1468a21b0 == 0) {
    FUN_141786a30(&DAT_1468a21b0,&PTR_FUN_146482050);
  }
  return DAT_1468a21b0;
}



// FUNCTION 1414e0600 FUN_1414e0600 body=47 status=ok
// SIG undefined FUN_1414e0600(void)

longlong FUN_1414e0600(void)

{
  if (DAT_1468a21b8 == 0) {
    FUN_141786a30(&DAT_1468a21b8,&PTR_FUN_146482190);
  }
  return DAT_1468a21b8;
}



// FUNCTION 1414e0630 FUN_1414e0630 body=47 status=ok
// SIG undefined FUN_1414e0630(void)

longlong FUN_1414e0630(void)

{
  if (DAT_1468a21c0 == 0) {
    FUN_141786a30(&DAT_1468a21c0,&PTR_FUN_146482310);
  }
  return DAT_1468a21c0;
}



// FUNCTION 1414e0660 FUN_1414e0660 body=47 status=ok
// SIG undefined FUN_1414e0660(void)

longlong FUN_1414e0660(void)

{
  if (DAT_1468a21c8 == 0) {
    FUN_141786a30(&DAT_1468a21c8,&PTR_FUN_1464823d0);
  }
  return DAT_1468a21c8;
}



// FUNCTION 1414e0690 FUN_1414e0690 body=47 status=ok
// SIG undefined FUN_1414e0690(void)

longlong FUN_1414e0690(void)

{
  if (DAT_1468a21d0 == 0) {
    FUN_141786a30(&DAT_1468a21d0,&PTR_FUN_146482490);
  }
  return DAT_1468a21d0;
}



// FUNCTION 1414e06c0 FUN_1414e06c0 body=47 status=ok
// SIG undefined FUN_1414e06c0(void)

longlong FUN_1414e06c0(void)

{
  if (DAT_1468a21d8 == 0) {
    FUN_141786a30(&DAT_1468a21d8,&PTR_FUN_146482560);
  }
  return DAT_1468a21d8;
}



// FUNCTION 1414e06f0 FUN_1414e06f0 body=47 status=ok
// SIG undefined FUN_1414e06f0(void)

longlong FUN_1414e06f0(void)

{
  if (DAT_1468a21e0 == 0) {
    FUN_141786a30(&DAT_1468a21e0,&PTR_FUN_146482630);
  }
  return DAT_1468a21e0;
}



// FUNCTION 1414e0720 FUN_1414e0720 body=47 status=ok
// SIG undefined FUN_1414e0720(void)

longlong FUN_1414e0720(void)

{
  if (DAT_1468a21e8 == 0) {
    FUN_141786a30(&DAT_1468a21e8,&PTR_FUN_146482700);
  }
  return DAT_1468a21e8;
}



// FUNCTION 1414e0750 FUN_1414e0750 body=47 status=ok
// SIG undefined FUN_1414e0750(void)

longlong FUN_1414e0750(void)

{
  if (DAT_1468a21f0 == 0) {
    FUN_141786a30(&DAT_1468a21f0,&PTR_FUN_146482780);
  }
  return DAT_1468a21f0;
}



// FUNCTION 1414e0780 FUN_1414e0780 body=47 status=ok
// SIG undefined FUN_1414e0780(void)

longlong FUN_1414e0780(void)

{
  if (DAT_1468a21f8 == 0) {
    FUN_141786a30(&DAT_1468a21f8,&PTR_FUN_1464827c0);
  }
  return DAT_1468a21f8;
}



// FUNCTION 1414e07b0 FUN_1414e07b0 body=47 status=ok
// SIG undefined FUN_1414e07b0(void)

longlong FUN_1414e07b0(void)

{
  if (DAT_1468a2200 == 0) {
    FUN_141786a30(&DAT_1468a2200,&PTR_FUN_146482840);
  }
  return DAT_1468a2200;
}



// FUNCTION 1414e07e0 FUN_1414e07e0 body=47 status=ok
// SIG undefined FUN_1414e07e0(void)

longlong FUN_1414e07e0(void)

{
  if (DAT_1468a2208 == 0) {
    FUN_141786a30(&DAT_1468a2208,&PTR_FUN_146482900);
  }
  return DAT_1468a2208;
}



// FUNCTION 1414e0810 FUN_1414e0810 body=47 status=ok
// SIG undefined FUN_1414e0810(void)

longlong FUN_1414e0810(void)

{
  if (DAT_1468a2210 == 0) {
    FUN_141786a30(&DAT_1468a2210,&PTR_FUN_1464829c0);
  }
  return DAT_1468a2210;
}



// FUNCTION 1414e0840 FUN_1414e0840 body=47 status=ok
// SIG undefined FUN_1414e0840(void)

longlong FUN_1414e0840(void)

{
  if (DAT_1468a2218 == 0) {
    FUN_141786a30(&DAT_1468a2218,&PTR_FUN_146482a40);
  }
  return DAT_1468a2218;
}



// FUNCTION 1414e0870 FUN_1414e0870 body=47 status=ok
// SIG undefined FUN_1414e0870(void)

longlong FUN_1414e0870(void)

{
  if (DAT_1468a2220 == 0) {
    FUN_141786a30(&DAT_1468a2220,&PTR_FUN_146482b00);
  }
  return DAT_1468a2220;
}



// FUNCTION 1414e08a0 FUN_1414e08a0 body=47 status=ok
// SIG undefined FUN_1414e08a0(void)

longlong FUN_1414e08a0(void)

{
  if (DAT_1468a2228 == 0) {
    FUN_141786a30(&DAT_1468a2228,&PTR_FUN_146482b80);
  }
  return DAT_1468a2228;
}



// FUNCTION 1414e08d0 FUN_1414e08d0 body=47 status=ok
// SIG undefined FUN_1414e08d0(void)

longlong FUN_1414e08d0(void)

{
  if (DAT_1468a2230 == 0) {
    FUN_141786a30(&DAT_1468a2230,&PTR_FUN_146482c40);
  }
  return DAT_1468a2230;
}



// FUNCTION 1414e0900 FUN_1414e0900 body=53 status=ok
// SIG undefined FUN_1414e0900(void)

void FUN_1414e0900(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_144c0d8c8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414e0940 FUN_1414e0940 body=162 status=ok
// SIG undefined FUN_1414e0940(void)

longlong FUN_1414e0940(void)

{
  if (DAT_1468a2080 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"VehicleSetAnimPlayRateEffect",&DAT_1468a2080,FUN_140447710,
                  0x60,0x10000000,0,L"Engine",FUN_1414e1eb0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UMaterialExpressionTextureBase::StaticClass,&LAB_140447700,0);
  }
  return DAT_1468a2080;
}



// FUNCTION 1414e09f0 FUN_1414e09f0 body=162 status=ok
// SIG undefined FUN_1414e09f0(void)

longlong FUN_1414e09f0(void)

{
  if (DAT_1468a2090 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"VehiclePlaySingleAnimEffect",&DAT_1468a2090,FUN_140447710,
                  0x78,0x10000000,0,L"Engine",FUN_1414e1e00,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UMaterialExpressionTextureBase::StaticClass,&LAB_140447700,0);
  }
  return DAT_1468a2090;
}



// FUNCTION 1414e0ab0 FUN_1414e0ab0 body=47 status=ok
// SIG undefined FUN_1414e0ab0(void)

longlong FUN_1414e0ab0(void)

{
  if (DAT_1468a1ff8 == 0) {
    FUN_141786440(&DAT_1468a1ff8,&PTR_StaticClass_144c00660);
  }
  return DAT_1468a1ff8;
}



// FUNCTION 1414e0ae0 FUN_1414e0ae0 body=47 status=ok
// SIG undefined FUN_1414e0ae0(void)

longlong FUN_1414e0ae0(void)

{
  if (DAT_1468a2008 == 0) {
    FUN_141786440(&DAT_1468a2008,&PTR_GetPrivateStaticClass_144c016a0);
  }
  return DAT_1468a2008;
}



// FUNCTION 1414e0b10 FUN_1414e0b10 body=53 status=ok
// SIG undefined FUN_1414e0b10(void)

void FUN_1414e0b10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_144c0ca70;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414e0b50 FUN_1414e0b50 body=53 status=ok
// SIG undefined FUN_1414e0b50(void)

void FUN_1414e0b50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &PTR_FUN_144c0cb88;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414e0c20 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGTutorialStepVideo::GetPrivateStaticClass(void)

{
  if (DAT_1468a2148 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"VehicleSeatPawn",&DAT_1468a2148,FUN_1414e2810,0x548,
                  0x10000000,0,L"Game",&LAB_1414e1a40,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  thunk_FUN_1414bbb50,&LAB_140447700,0);
  }
  return DAT_1468a2148;
}



// FUNCTION 1414e0ce0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGBattleRoyaleGameState::GetPrivateStaticClass(void)

{
  if (DAT_1468a20c0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"VehicleGunnerSeatPawn",&DAT_1468a20c0,FUN_1414e27e0,0x588,
                  0x10000000,0,L"Game",&LAB_1414e1a20,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  AGTutorialStepVideo::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468a20c0;
}



// FUNCTION 1414e0da0 FUN_1414e0da0 body=47 status=ok
// SIG undefined FUN_1414e0da0(void)

longlong FUN_1414e0da0(void)

{
  if (DAT_1468a20b8 == 0) {
    FUN_141786440(&DAT_1468a20b8,&PTR_GetPrivateStaticClass_144c049d0);
  }
  return DAT_1468a20b8;
}



// FUNCTION 1414e0dd0 FUN_1414e0dd0 body=47 status=ok
// SIG undefined FUN_1414e0dd0(void)

longlong FUN_1414e0dd0(void)

{
  if (DAT_1468a2140 == 0) {
    FUN_141786440(&DAT_1468a2140,&PTR_GetPrivateStaticClass_144c08e50);
  }
  return DAT_1468a2140;
}



// FUNCTION 1414e0e00 FUN_1414e0e00 body=47 status=ok
// SIG undefined FUN_1414e0e00(void)

longlong FUN_1414e0e00(void)

{
  if (DAT_1468a20a8 == 0) {
    FUN_141786a30(&DAT_1468a20a8,&PTR_FUN_1464804d0);
  }
  return DAT_1468a20a8;
}



// FUNCTION 1414e0e30 FUN_1414e0e30 body=47 status=ok
// SIG undefined FUN_1414e0e30(void)

longlong FUN_1414e0e30(void)

{
  if (DAT_1468a20b0 == 0) {
    FUN_141786a30(&DAT_1468a20b0,&PTR_FUN_146480610);
  }
  return DAT_1468a20b0;
}



// FUNCTION 1414e0e70 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAESHelper::GetPrivateStaticClass(void)

{
  if (DAT_1468a20d0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"VehicleModifyPhysicPropertiesAspectData",&DAT_1468a20d0,
                  FUN_140447710,0x48,0x10000000,0,L"Engine",FUN_1414e1d40,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1414943e0,&LAB_140447700,0);
  }
  return DAT_1468a20d0;
}



// FUNCTION 1414e0f30 FUN_1414e0f30 body=53 status=ok
// SIG undefined FUN_1414e0f30(void)

void FUN_1414e0f30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_144c0d270;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414e0f70 FUN_1414e0f70 body=162 status=ok
// SIG undefined FUN_1414e0f70(void)

longlong FUN_1414e0f70(void)

{
  if (DAT_1468a2130 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"VehicleSeatComponent",&DAT_1468a2130,FUN_1414e2840,0x788,
                  0x10000002,0,L"Game",&LAB_1414e1e90,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_141448000,&LAB_140447700,0);
  }
  return DAT_1468a2130;
}



// FUNCTION 1414e1020 FUN_1414e1020 body=151 status=ok
// SIG undefined FUN_1414e1020(void)

longlong FUN_1414e1020(void)

{
  if (DAT_1468a2188 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"VehicleScanData",&DAT_1468a2188,FUN_140447710,0x38,0x10000000
                  ,0,L"Engine",InternalConstructor<UAIResource_Logic>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_1468a2188;
}



// FUNCTION 1414e10c0 Z_Construct_UClass_UGHealthRegenBonus body=47 status=ok
// SIG undefined Z_Construct_UClass_UGHealthRegenBonus(void)

longlong Z_Construct_UClass_UGHealthRegenBonus(void)

{
  if (DAT_1468a2128 == 0) {
    FUN_141786440(&DAT_1468a2128,&PTR_FUN_144c07600);
  }
  return DAT_1468a2128;
}



// FUNCTION 1414e10f0 FUN_1414e10f0 body=47 status=ok
// SIG undefined FUN_1414e10f0(void)

longlong FUN_1414e10f0(void)

{
  if (DAT_1468a2100 == 0) {
    FUN_141786a30(&DAT_1468a2100,&PTR_Z_Construct_UClass_UGHealthRegenBonus_146480b40);
  }
  return DAT_1468a2100;
}



// FUNCTION 1414e1120 FUN_1414e1120 body=47 status=ok
// SIG undefined FUN_1414e1120(void)

longlong FUN_1414e1120(void)

{
  if (DAT_1468a2108 == 0) {
    FUN_141786a30(&DAT_1468a2108,&PTR_Z_Construct_UClass_UGHealthRegenBonus_146480bd0);
  }
  return DAT_1468a2108;
}



// FUNCTION 1414e1150 FUN_1414e1150 body=47 status=ok
// SIG undefined FUN_1414e1150(void)

longlong FUN_1414e1150(void)

{
  if (DAT_1468a2110 == 0) {
    FUN_141786a30(&DAT_1468a2110,&PTR_Z_Construct_UClass_UGHealthRegenBonus_146480ca0);
  }
  return DAT_1468a2110;
}



// FUNCTION 1414e1180 FUN_1414e1180 body=47 status=ok
// SIG undefined FUN_1414e1180(void)

longlong FUN_1414e1180(void)

{
  if (DAT_1468a2118 == 0) {
    FUN_141786a30(&DAT_1468a2118,&PTR_Z_Construct_UClass_UGHealthRegenBonus_146480ce0);
  }
  return DAT_1468a2118;
}



// FUNCTION 1414e11b0 FUN_1414e11b0 body=47 status=ok
// SIG undefined FUN_1414e11b0(void)

longlong FUN_1414e11b0(void)

{
  if (DAT_1468a2120 == 0) {
    FUN_141786a30(&DAT_1468a2120,&PTR_Z_Construct_UClass_UGHealthRegenBonus_146480d60);
  }
  return DAT_1468a2120;
}



// FUNCTION 1414e11e0 FUN_1414e11e0 body=53 status=ok
// SIG undefined FUN_1414e11e0(void)

void FUN_1414e11e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &PTR_FUN_144c0d3b8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1414e1220 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UBlueprintGeneratedClass::GetPrivateStaticClass(void)

{
  if (DAT_1468a2240 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"VehicleSpawnerComponent",&DAT_1468a2240,FUN_1414e2870,0x2e0,
                  0x10000000,0,L"Engine",&LAB_1414e1f80,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_1468a2240;
}



// FUNCTION 1414e12e0 FUN_1414e12e0 body=162 status=ok
// SIG undefined FUN_1414e12e0(void)

longlong FUN_1414e12e0(void)

{
  if (DAT_1468a20a0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"VehicleElementalEffectImmunityAspectData",&DAT_1468a20a0,
                  FUN_140447710,0x40,0x10000000,0,L"Engine",InternalConstructor<UAISettings_Patrol>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1414943e0,&LAB_140447700,0);
  }
  return DAT_1468a20a0;
}



// FUNCTION 1414e1390 FUN_1414e1390 body=47 status=ok
// SIG undefined FUN_1414e1390(void)

longlong FUN_1414e1390(void)

{
  if (DAT_1468a2138 == 0) {
    FUN_141786a30(&DAT_1468a2138,&PTR_FUN_146481530);
  }
  return DAT_1468a2138;
}



// FUNCTION 1414e13e0 FUN_1414e13e0 body=162 status=ok
// SIG undefined FUN_1414e13e0(void)

longlong FUN_1414e13e0(void)

{
  if (DAT_1468a2158 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"VehicleSetBoostDataAspectData",&DAT_1468a2158,FUN_140447710,
                  0x60,0x10000000,0,L"Engine",InternalConstructor<USoundNodeWavePlayer>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1414943e0,&LAB_140447700,0);
  }
  return DAT_1468a2158;
}



// FUNCTION 1414e14a0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UMaterialExpressionTextureBase::StaticClass(void)

{
  if (DAT_1468a2000 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"BaseVehicleEffectData",&DAT_1468a2000,FUN_140447710,0x50,
                  0x10000001,0,L"Engine",FUN_1414e1a60,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_1468a2000;
}



// FUNCTION 1414e1550 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMovieScenePropertyTrack::GetPrivateStaticClass(void)

{
  if (DAT_1468a2010 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"BaseVehicleEffectDataWithLocation",&DAT_1468a2010,
                  FUN_140447710,0x80,0x10000001,0,L"Engine",FUN_1414e1aa0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UMaterialExpressionTextureBase::StaticClass,&LAB_140447700,0);
  }
  return DAT_1468a2010;
}



// FUNCTION 1414e1600 FUN_1414e1600 body=162 status=ok
// SIG undefined FUN_1414e1600(void)

longlong FUN_1414e1600(void)

{
  if (DAT_1468a2020 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"VehicleAudioEffect",&DAT_1468a2020,FUN_140447710,0xb8,
                  0x10000000,0,L"Engine",FUN_1414e1af0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UMovieScenePropertyTrack::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468a2020;
}



// FUNCTION 1414e16b0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGJournalKey::GetPrivateStaticClass(void)

{
  if (DAT_1468a2030 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"VehicleParticleEffect",&DAT_1468a2030,FUN_140447710,0xa0,
                  0x10000000,0,L"Engine",FUN_1414e1d90,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UMovieScenePropertyTrack::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468a2030;
}



// FUNCTION 1414e1760 FUN_1414e1760 body=162 status=ok
// SIG undefined FUN_1414e1760(void)

longlong FUN_1414e1760(void)

{
  if (DAT_1468a2040 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"VehicleImpactEffect",&DAT_1468a2040,FUN_140447710,0xe0,
                  0x10000000,0,L"Engine",FUN_1414e1cb0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UMovieScenePropertyTrack::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468a2040;
}



// FUNCTION 1414e1810 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UARGetCandidateObjectAsyncTaskBlueprintProxy::GetPrivateStaticClass(void)

{
  if (DAT_1468a2050 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"VehicleExplosionEffect",&DAT_1468a2050,FUN_140447710,0x98,
                  0x10000000,0,L"Engine",FUN_1414e1bf0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UMovieScenePropertyTrack::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468a2050;
}



// FUNCTION 1414e18c0 FUN_1414e18c0 body=162 status=ok
// SIG undefined FUN_1414e18c0(void)

longlong FUN_1414e18c0(void)

{
  if (DAT_1468a2060 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"VehicleFeedbackEffect",&DAT_1468a2060,FUN_140447710,0x90,
                  0x10000000,0,L"Engine",FUN_1414e1c50,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UMovieScenePropertyTrack::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468a2060;
}



// FUNCTION 1414e1970 FUN_1414e1970 body=162 status=ok
// SIG undefined FUN_1414e1970(void)

longlong FUN_1414e1970(void)

{
  if (DAT_1468a2070 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"VehicleEmitterEnableEffect",&DAT_1468a2070,FUN_140447710,0x78
                  ,0x10000000,0,L"Engine",FUN_1414e1ba0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UMaterialExpressionTextureBase::StaticClass,&LAB_140447700,0);
  }
  return DAT_1468a2070;
}



// FUNCTION 1414e1a60 FUN_1414e1a60 body=59 status=ok
// SIG undefined FUN_1414e1a60(void)

void FUN_1414e1a60(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR_FUN_144c0adb8;
    puVar1[6] = 0;
    *(undefined2 *)((longlong)puVar1 + 0x39) = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
  }
  return;
}



// FUNCTION 1414e1aa0 FUN_1414e1aa0 body=74 status=ok
// SIG undefined FUN_1414e1aa0(void)

void FUN_1414e1aa0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    puVar1[6] = 0;
    *(undefined2 *)((longlong)puVar1 + 0x39) = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    *puVar1 = &PTR_FUN_144c0b058;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *(undefined4 *)(puVar1 + 0xf) = 0x3f800000;
  }
  return;
}



// FUNCTION 1414e1af0 FUN_1414e1af0 body=125 status=ok
// SIG undefined FUN_1414e1af0(void)

void FUN_1414e1af0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    puVar1[6] = 0;
    *(undefined2 *)((longlong)puVar1 + 0x39) = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *(undefined4 *)(puVar1 + 0xf) = 0x3f800000;
    *puVar1 = &PTR__scalar_deleting_destructor__144c0b2f8;
    *(undefined1 *)(puVar1 + 0x10) = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    *(undefined4 *)(puVar1 + 0x16) = 0x42480000;
  }
  return;
}



// FUNCTION 1414e1b70 InternalConstructor<UAISettings_Patrol> body=45 status=ok
// SIG undefined InternalConstructor<UAISettings_Patrol>(void)

void InternalConstructor<UAISettings_Patrol>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UAssetImportData::UAssetImportData(puVar1,param_1);
    *(undefined1 *)((longlong)puVar1 + 0x39) = 0;
    *puVar1 = &PTR_FUN_144c0cca0;
  }
  return;
}



// FUNCTION 1414e1ba0 FUN_1414e1ba0 body=78 status=ok
// SIG undefined FUN_1414e1ba0(void)

void FUN_1414e1ba0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    puVar1[6] = 0;
    *(undefined2 *)((longlong)puVar1 + 0x39) = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144c0c018;
    puVar1[10] = 0;
    *(undefined1 *)(puVar1 + 0xb) = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
  }
  return;
}



// FUNCTION 1414e1bf0 FUN_1414e1bf0 body=91 status=ok
// SIG undefined FUN_1414e1bf0(void)

void FUN_1414e1bf0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    puVar1[6] = 0;
    *(undefined2 *)((longlong)puVar1 + 0x39) = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *(undefined4 *)(puVar1 + 0xf) = 0x3f800000;
    *puVar1 = &PTR_FUN_144c0bad8;
    *(undefined4 *)(puVar1 + 0x11) = 0x42c80000;
    puVar1[0x12] = 0;
  }
  return;
}



// FUNCTION 1414e1c50 FUN_1414e1c50 body=84 status=ok
// SIG undefined FUN_1414e1c50(void)

void FUN_1414e1c50(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    puVar1[6] = 0;
    *(undefined2 *)((longlong)puVar1 + 0x39) = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *puVar1 = &PTR_FUN_144c0bd78;
    *(undefined4 *)(puVar1 + 0xf) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x11) = 0x3f800000;
  }
  return;
}



// FUNCTION 1414e1cb0 FUN_1414e1cb0 body=142 status=ok
// SIG undefined FUN_1414e1cb0(void)

void FUN_1414e1cb0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    puVar1[6] = 0;
    *(undefined2 *)((longlong)puVar1 + 0x39) = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *(undefined4 *)(puVar1 + 0xf) = 0x3f800000;
    *puVar1 = &PTR__scalar_deleting_destructor__144c0b838;
    *(undefined4 *)(puVar1 + 0x12) = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    *(undefined4 *)(puVar1 + 0x18) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x1b) = 0x43480000;
    *(undefined1 *)((longlong)puVar1 + 0xdc) = 3;
  }
  return;
}



// FUNCTION 1414e1d40 FUN_1414e1d40 body=69 status=ok
// SIG undefined FUN_1414e1d40(void)

void FUN_1414e1d40(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UAssetImportData::UAssetImportData(puVar1,param_1);
    *(undefined4 *)(puVar1 + 7) = 0;
    *puVar1 = &PTR_FUN_144c0cf98;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x3f800000;
    *(undefined4 *)(puVar1 + 8) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x44) = 0x3f800000;
  }
  return;
}



// FUNCTION 1414e1d90 FUN_1414e1d90 body=104 status=ok
// SIG undefined FUN_1414e1d90(void)

void FUN_1414e1d90(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    puVar1[6] = 0;
    *(undefined2 *)((longlong)puVar1 + 0x39) = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *(undefined4 *)(puVar1 + 0xf) = 0x3f800000;
    *puVar1 = &PTR_FUN_144c0b598;
    puVar1[0x10] = 0;
    *(undefined4 *)(puVar1 + 0x11) = 0x100;
    puVar1[0x12] = 0;
    *(undefined1 *)(puVar1 + 0x13) = 0;
  }
  return;
}



// FUNCTION 1414e1e00 FUN_1414e1e00 body=82 status=ok
// SIG undefined FUN_1414e1e00(void)

void FUN_1414e1e00(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    puVar1[6] = 0;
    *(undefined2 *)((longlong)puVar1 + 0x39) = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144c0c558;
    puVar1[10] = 0;
    *(undefined2 *)(puVar1 + 0xd) = 0x100;
    *(undefined1 *)((longlong)puVar1 + 0x6a) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x6c) = 0;
    *(undefined4 *)(puVar1 + 0xe) = 0x3f800000;
  }
  return;
}



// FUNCTION 1414e1e60 InternalConstructor<UAIResource_Logic> body=41 status=ok
// SIG undefined InternalConstructor<UAIResource_Logic>(void)

void InternalConstructor<UAIResource_Logic>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_1449a7910;
  }
  return;
}



// FUNCTION 1414e1eb0 FUN_1414e1eb0 body=77 status=ok
// SIG undefined FUN_1414e1eb0(void)

void FUN_1414e1eb0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    puVar1[6] = 0;
    *(undefined2 *)((longlong)puVar1 + 0x39) = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    *puVar1 = &PTR_FUN_144c0c2b8;
    puVar1[10] = 0;
    *(undefined4 *)(puVar1 + 0xb) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x5c) = 0x3f800000;
  }
  return;
}



// FUNCTION 1414e1f00 InternalConstructor<USoundNodeWavePlayer> body=127 status=ok
// SIG undefined InternalConstructor<USoundNodeWavePlayer>(void)

void InternalConstructor<USoundNodeWavePlayer>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UAssetImportData::UAssetImportData(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144c0d530;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *(undefined4 *)(puVar1 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0;
    puVar1[9] = 0;
    *(undefined4 *)(puVar1 + 0xb) = 0;
    if (0x7fffffff < *(uint *)((longlong)puVar1 + 0x5c)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1 + 10,0);
    }
    if ((undefined2 *)puVar1[10] != (undefined2 *)0x0) {
      *(undefined2 *)puVar1[10] = 0;
    }
    *(undefined4 *)(puVar1 + 8) = 0;
  }
  return;
}



// FUNCTION 1414e1fa0 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FBitReader::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 1414e1ff0 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UNiagaraSimulationStageGeneric::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 1414e2040 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FFillTextureCS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 1414e2080 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FWorldTilesGatherer::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 1414e20c0 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UDatasmithCineCameraActorTemplate::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1414e2110 FUN_1414e2110 body=85 status=ok
// SIG undefined FUN_1414e2110(void)

void FUN_1414e2110(undefined8 param_1,longlong param_2)

{
  undefined4 local_38;
  undefined8 local_34;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  
  local_20 = 0;
  local_18 = 0;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = 0;
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(param_2,&local_38);
  *(undefined1 *)(param_2 + 0x28) = 0;
  if (local_20 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1414e21f0 FUN_1414e21f0 body=325 status=ok
// SIG undefined FUN_1414e21f0(void)

undefined8 FUN_1414e21f0(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  byte *pbVar1;
  int iVar2;
  void *_Src;
  byte bVar3;
  byte *pbVar4;
  
  if (param_4 != 0) {
    pbVar4 = (byte *)(param_3 + 0x18);
    do {
      *param_2 = *(undefined8 *)(pbVar4 + -0x18);
      pbVar1 = (byte *)(param_2 + 9);
      param_2[1] = *(undefined8 *)(pbVar4 + -0x10);
      param_2[2] = *(undefined8 *)(pbVar4 + -8);
      *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) ^ (*(byte *)(param_2 + 3) ^ *pbVar4) & 1;
      bVar3 = (*(byte *)(param_2 + 3) ^ *pbVar4) & 2 ^ *(byte *)(param_2 + 3);
      *(byte *)(param_2 + 3) = bVar3;
      *(byte *)(param_2 + 3) = (bVar3 ^ *pbVar4) & 4 ^ bVar3;
      *(undefined8 *)((longlong)param_2 + 0x1c) = *(undefined8 *)(pbVar4 + 4);
      *(undefined4 *)((longlong)param_2 + 0x24) = *(undefined4 *)(pbVar4 + 0xc);
      param_2[5] = *(undefined8 *)(pbVar4 + 0x10);
      *(undefined4 *)(param_2 + 6) = *(undefined4 *)(pbVar4 + 0x18);
      *(undefined4 *)((longlong)param_2 + 0x34) = *(undefined4 *)(pbVar4 + 0x1c);
      param_2[7] = *(undefined8 *)(pbVar4 + 0x20);
      param_2[8] = *(undefined8 *)(pbVar4 + 0x28);
      if (pbVar1 != pbVar4 + 0x30) {
        iVar2 = *(int *)(pbVar4 + 0x38);
        _Src = *(void **)(pbVar4 + 0x30);
        *(int *)(param_2 + 10) = iVar2;
        if ((iVar2 == 0) && (*(int *)((longlong)param_2 + 0x54) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x54) = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(pbVar1,iVar2);
          _guard_xfg_dispatch_icall_nop(*(void **)pbVar1,_Src,(longlong)iVar2 << 4);
        }
      }
      param_2[0xb] = *(undefined8 *)(pbVar4 + 0x40);
      pbVar1 = pbVar4 + 0x48;
      pbVar4 = pbVar4 + 0x68;
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)pbVar1;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0xd;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1414e2340 Copy body=123 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FSeasonInfo>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined8 *)(param_2 + 0x20);
    do {
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                (puVar1 + -4,param_3 + -0x20 + (longlong)puVar1);
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                (puVar1 + -2,param_3 + -0x10 + (longlong)puVar1);
      *puVar1 = *(undefined8 *)(param_3 + (longlong)puVar1);
      puVar1[1] = *(undefined8 *)(param_3 + 8 + (longlong)puVar1);
      puVar1 = puVar1 + 6;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1414e23d0 FUN_1414e23d0 body=135 status=ok
// SIG undefined FUN_1414e23d0(void)

void FUN_1414e23d0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 3);
  plVar1 = (longlong *)param_2[2];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_2[2];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  iVar2 = *(int *)(param_2 + 1);
  plVar1 = (longlong *)*param_2;
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_2;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 1414e2460 FUN_1414e2460 body=55 status=ok
// SIG undefined FUN_1414e2460(void)

void FUN_1414e2460(void)

{
  undefined8 uVar1;
  
  if (DAT_1468a1b28 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a1b28 = GetStaticEnum(FUN_1414e2de0,uVar1,L"EEffectStateType");
  }
  return;
}



// FUNCTION 1414e24a0 FUN_1414e24a0 body=55 status=ok
// SIG undefined FUN_1414e24a0(void)

void FUN_1414e24a0(void)

{
  undefined8 uVar1;
  
  if (DAT_1468a1b20 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a1b20 = GetStaticEnum(FUN_1414e2e10,uVar1,L"EEmitterEnableMode");
  }
  return;
}



// FUNCTION 1414e24e0 FUN_1414e24e0 body=55 status=ok
// SIG undefined FUN_1414e24e0(void)

void FUN_1414e24e0(void)

{
  undefined8 uVar1;
  
  if (DAT_1468a1b38 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a1b38 = GetStaticEnum(FUN_1414e2e40,uVar1,L"EFollowVehicleRotation");
  }
  return;
}



// FUNCTION 1414e2520 FUN_1414e2520 body=55 status=ok
// SIG undefined FUN_1414e2520(void)

void FUN_1414e2520(void)

{
  undefined8 uVar1;
  
  if (DAT_1468a1b30 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a1b30 = GetStaticEnum(FUN_1414e2e70,uVar1,L"EVehicleEffectEvent");
  }
  return;
}



// FUNCTION 1414e2560 FUN_1414e2560 body=55 status=ok
// SIG undefined FUN_1414e2560(void)

void FUN_1414e2560(void)

{
  undefined8 uVar1;
  
  if (DAT_1468a1b18 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a1b18 = GetStaticEnum(FUN_1414e2ea0,uVar1,L"EVehiclePlaySingleAnimMode");
  }
  return;
}



// FUNCTION 1414e25a0 FUN_1414e25a0 body=6 status=ok
// SIG undefined FUN_1414e25a0(void)

undefined8 FUN_1414e25a0(void)

{
  return 0x48a23047;
}



// FUNCTION 1414e25b0 FUN_1414e25b0 body=6 status=ok
// SIG undefined FUN_1414e25b0(void)

undefined8 FUN_1414e25b0(void)

{
  return 0xe70a7bf8;
}



// FUNCTION 1414e25c0 FUN_1414e25c0 body=6 status=ok
// SIG undefined FUN_1414e25c0(void)

undefined8 FUN_1414e25c0(void)

{
  return 0x973a7f2a;
}



// FUNCTION 1414e25d0 FUN_1414e25d0 body=6 status=ok
// SIG undefined FUN_1414e25d0(void)

undefined8 FUN_1414e25d0(void)

{
  return 0x13d73681;
}



// FUNCTION 1414e25e0 FUN_1414e25e0 body=6 status=ok
// SIG undefined FUN_1414e25e0(void)

undefined8 FUN_1414e25e0(void)

{
  return 0x9d04eb68;
}



// FUNCTION 1414e25f0 FUN_1414e25f0 body=6 status=ok
// SIG undefined FUN_1414e25f0(void)

undefined8 FUN_1414e25f0(void)

{
  return 0xc85d1df3;
}



// FUNCTION 1414e2600 FUN_1414e2600 body=6 status=ok
// SIG undefined FUN_1414e2600(void)

undefined8 FUN_1414e2600(void)

{
  return 0xcb89771e;
}



// FUNCTION 1414e2610 FUN_1414e2610 body=6 status=ok
// SIG undefined FUN_1414e2610(void)

undefined8 FUN_1414e2610(void)

{
  return 0xa35fc4a;
}



// FUNCTION 1414e2720 FUN_1414e2720 body=60 status=ok
// SIG undefined FUN_1414e2720(void)

void FUN_1414e2720(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res10 [6];
  
  lVar1 = *param_1;
  local_res10[0] = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a1f88);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_res10);
  return;
}



// FUNCTION 1414e2760 FUN_1414e2760 body=119 status=ok
// SIG undefined FUN_1414e2760(void)

void FUN_1414e2760(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_198 [2];
  undefined1 local_190 [392];
  
  FUN_140ac6910(local_190);
  local_198[0] = param_2;
  FUN_140e6bf90(local_190,param_3);
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a1f90);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_198);
  FUN_140ac7ce0(local_190);
  return;
}



// FUNCTION 1414e27e0 FUN_1414e27e0 body=34 status=ok
// SIG undefined FUN_1414e27e0(void)

void FUN_1414e27e0(void)

{
  undefined8 uVar1;
  
  uVar1 = AGBattleRoyaleGameState::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnActionReserved_144c0cf78,2);
  return;
}



// FUNCTION 1414e2810 FUN_1414e2810 body=34 status=ok
// SIG undefined FUN_1414e2810(void)

void FUN_1414e2810(void)

{
  undefined8 uVar1;
  
  uVar1 = AGTutorialStepVideo::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetVehicle_144c0d520,1);
  return;
}



// FUNCTION 1414e2840 FUN_1414e2840 body=34 status=ok
// SIG undefined FUN_1414e2840(void)

void FUN_1414e2840(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1414e0f70();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_CanUseCharacterWeapon_144c0d4d0,5);
  return;
}



// FUNCTION 1414e2870 FUN_1414e2870 body=34 status=ok
// SIG undefined FUN_1414e2870(void)

void FUN_1414e2870(void)

{
  undefined8 uVar1;
  
  uVar1 = UBlueprintGeneratedClass::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetLastVehicleSpawn_144c0d9e0,0x15);
  return;
}



// FUNCTION 1414e28a0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a1fe8 == 0) {
    uVar1 = FUN_1414e25a0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a1fe8 = GetStaticStruct(FUN_1414e2ed0,uVar2,L"ConditionalAudioSwitch",0x10,uVar1);
  }
  return;
}



// FUNCTION 1414e2900 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a1fb8 == 0) {
    uVar1 = FUN_1414e25b0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a1fb8 = GetStaticStruct(FUN_1414e2f00,uVar2,L"EmitterEnableData",0x10,uVar1);
  }
  return;
}



// FUNCTION 1414e2960 FUN_1414e2960 body=82 status=ok
// SIG undefined FUN_1414e2960(void)

void FUN_1414e2960(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a2170 == 0) {
    uVar1 = FUN_1414e25c0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a2170 = GetStaticStruct(FUN_1414e2f30,uVar2,L"InventoryDataUnlockedInfo",0x30,uVar1);
  }
  return;
}



// FUNCTION 1414e29c0 FUN_1414e29c0 body=82 status=ok
// SIG undefined FUN_1414e29c0(void)

void FUN_1414e29c0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a2160 == 0) {
    uVar1 = FUN_1414e25d0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a2160 = GetStaticStruct(FUN_1414e2f60,uVar2,L"InventoryPartDataUnlockedInfo",0x30,uVar1)
    ;
  }
  return;
}



// FUNCTION 1414e2a20 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneTransformMask::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a20f0 == 0) {
    uVar1 = FUN_1414e25e0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a20f0 = GetStaticStruct(FUN_1414e2f90,uVar2,L"UseCharacterWeaponSettings",4,uVar1);
  }
  return;
}



// FUNCTION 1414e2a80 FUN_1414e2a80 body=82 status=ok
// SIG undefined FUN_1414e2a80(void)

void FUN_1414e2a80(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a1fd8 == 0) {
    uVar1 = FUN_1414e25f0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a1fd8 = GetStaticStruct(FUN_1414e2fc0,uVar2,L"VehicleEffectData",0x68,uVar1);
  }
  return;
}



// FUNCTION 1414e2ae0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceKey::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a1fc8 == 0) {
    uVar1 = FUN_1414e2600();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a1fc8 = GetStaticStruct(FUN_1414e2ff0,uVar2,L"VehicleEffectQueryData",0x18,uVar1);
  }
  return;
}



// FUNCTION 1414e2b40 FUN_1414e2b40 body=82 status=ok
// SIG undefined FUN_1414e2b40(void)

void FUN_1414e2b40(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a20d8 == 0) {
    uVar1 = FUN_1414e2610();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a20d8 = GetStaticStruct(FUN_1414e3020,uVar2,L"VehicleOverrideData",0x30,uVar1);
  }
  return;
}



// FUNCTION 1414e2ba0 FUN_1414e2ba0 body=47 status=ok
// SIG undefined FUN_1414e2ba0(void)

longlong FUN_1414e2ba0(void)

{
  if (DAT_1468a2018 == 0) {
    FUN_141786440(&DAT_1468a2018,&PTR_FUN_144c01c00);
  }
  return DAT_1468a2018;
}



// FUNCTION 1414e2bd0 FUN_1414e2bd0 body=47 status=ok
// SIG undefined FUN_1414e2bd0(void)

longlong FUN_1414e2bd0(void)

{
  if (DAT_1468a2098 == 0) {
    FUN_141786440(&DAT_1468a2098,&PTR_FUN_144c08810);
  }
  return DAT_1468a2098;
}



// FUNCTION 1414e2c00 FUN_1414e2c00 body=47 status=ok
// SIG undefined FUN_1414e2c00(void)

longlong FUN_1414e2c00(void)

{
  if (DAT_1468a2068 == 0) {
    FUN_141786440(&DAT_1468a2068,&PTR_FUN_144c03a60);
  }
  return DAT_1468a2068;
}



// FUNCTION 1414e2c30 FUN_1414e2c30 body=47 status=ok
// SIG undefined FUN_1414e2c30(void)

longlong FUN_1414e2c30(void)

{
  if (DAT_1468a2048 == 0) {
    FUN_141786440(&DAT_1468a2048,&PTR_GetPrivateStaticClass_144c021c0);
  }
  return DAT_1468a2048;
}



// FUNCTION 1414e2c60 FUN_1414e2c60 body=47 status=ok
// SIG undefined FUN_1414e2c60(void)

longlong FUN_1414e2c60(void)

{
  if (DAT_1468a2058 == 0) {
    FUN_141786440(&DAT_1468a2058,&PTR_FUN_144c02d50);
  }
  return DAT_1468a2058;
}



// FUNCTION 1414e2c90 FUN_1414e2c90 body=47 status=ok
// SIG undefined FUN_1414e2c90(void)

longlong FUN_1414e2c90(void)

{
  if (DAT_1468a2038 == 0) {
    FUN_141786440(&DAT_1468a2038,&PTR_FUN_144c02040);
  }
  return DAT_1468a2038;
}



// FUNCTION 1414e2cc0 FUN_1414e2cc0 body=47 status=ok
// SIG undefined FUN_1414e2cc0(void)

longlong FUN_1414e2cc0(void)

{
  if (DAT_1468a20c8 == 0) {
    FUN_141786440(&DAT_1468a20c8,&PTR_GetPrivateStaticClass_144c058c0);
  }
  return DAT_1468a20c8;
}



// FUNCTION 1414e2cf0 FUN_1414e2cf0 body=47 status=ok
// SIG undefined FUN_1414e2cf0(void)

longlong FUN_1414e2cf0(void)

{
  if (DAT_1468a2028 == 0) {
    FUN_141786440(&DAT_1468a2028,&PTR_GetPrivateStaticClass_144c01e70);
  }
  return DAT_1468a2028;
}



// FUNCTION 1414e2d20 FUN_1414e2d20 body=47 status=ok
// SIG undefined FUN_1414e2d20(void)

longlong FUN_1414e2d20(void)

{
  if (DAT_1468a2088 == 0) {
    FUN_141786440(&DAT_1468a2088,&PTR_FUN_144c03de0);
  }
  return DAT_1468a2088;
}



// FUNCTION 1414e2d50 FUN_1414e2d50 body=47 status=ok
// SIG undefined FUN_1414e2d50(void)

longlong FUN_1414e2d50(void)

{
  if (DAT_1468a2180 == 0) {
    FUN_141786440(&DAT_1468a2180,&PTR_FUN_144bfc640);
  }
  return DAT_1468a2180;
}



// FUNCTION 1414e2d80 FUN_1414e2d80 body=47 status=ok
// SIG undefined FUN_1414e2d80(void)

longlong FUN_1414e2d80(void)

{
  if (DAT_1468a2078 == 0) {
    FUN_141786440(&DAT_1468a2078,&PTR_FUN_144c03c00);
  }
  return DAT_1468a2078;
}



// FUNCTION 1414e2db0 FUN_1414e2db0 body=47 status=ok
// SIG undefined FUN_1414e2db0(void)

longlong FUN_1414e2db0(void)

{
  if (DAT_1468a2150 == 0) {
    FUN_141786440(&DAT_1468a2150,&PTR_FUN_144c09610);
  }
  return DAT_1468a2150;
}



// FUNCTION 1414e2de0 FUN_1414e2de0 body=47 status=ok
// SIG undefined FUN_1414e2de0(void)

longlong FUN_1414e2de0(void)

{
  if (DAT_1468a1fa8 == 0) {
    FUN_1417866a0(&DAT_1468a1fa8,&PTR_Z_Construct_UPackage__Script_MechWarrior_146483080);
  }
  return DAT_1468a1fa8;
}



// FUNCTION 1414e2e10 FUN_1414e2e10 body=47 status=ok
// SIG undefined FUN_1414e2e10(void)

longlong FUN_1414e2e10(void)

{
  if (DAT_1468a1fa0 == 0) {
    FUN_1417866a0(&DAT_1468a1fa0,&PTR_Z_Construct_UPackage__Script_MechWarrior_146483030);
  }
  return DAT_1468a1fa0;
}



// FUNCTION 1414e2e40 FUN_1414e2e40 body=47 status=ok
// SIG undefined FUN_1414e2e40(void)

longlong FUN_1414e2e40(void)

{
  if (DAT_1468a20e8 == 0) {
    FUN_1417866a0(&DAT_1468a20e8,&PTR_Z_Construct_UPackage__Script_MechWarrior_146483120);
  }
  return DAT_1468a20e8;
}



// FUNCTION 1414e2e70 FUN_1414e2e70 body=47 status=ok
// SIG undefined FUN_1414e2e70(void)

longlong FUN_1414e2e70(void)

{
  if (DAT_1468a1fb0 == 0) {
    FUN_1417866a0(&DAT_1468a1fb0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1464830d0);
  }
  return DAT_1468a1fb0;
}



// FUNCTION 1414e2ea0 FUN_1414e2ea0 body=47 status=ok
// SIG undefined FUN_1414e2ea0(void)

longlong FUN_1414e2ea0(void)

{
  if (DAT_1468a1f98 == 0) {
    FUN_1417866a0(&DAT_1468a1f98,&PTR_Z_Construct_UPackage__Script_MechWarrior_146482fe0);
  }
  return DAT_1468a1f98;
}



// FUNCTION 1414e2ed0 FUN_1414e2ed0 body=47 status=ok
// SIG undefined FUN_1414e2ed0(void)

longlong FUN_1414e2ed0(void)

{
  if (DAT_1468a1ff0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a1ff0,&PTR_Z_Construct_UPackage__Script_MechWarrior_14647f400);
  }
  return DAT_1468a1ff0;
}



// FUNCTION 1414e2f00 FUN_1414e2f00 body=47 status=ok
// SIG undefined FUN_1414e2f00(void)

longlong FUN_1414e2f00(void)

{
  if (DAT_1468a1fc0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a1fc0,&PTR_Z_Construct_UPackage__Script_MechWarrior_14647edb0);
  }
  return DAT_1468a1fc0;
}



// FUNCTION 1414e2f30 FUN_1414e2f30 body=47 status=ok
// SIG undefined FUN_1414e2f30(void)

longlong FUN_1414e2f30(void)

{
  if (DAT_1468a2178 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a2178,&PTR_Z_Construct_UPackage__Script_MechWarrior_146481b90);
  }
  return DAT_1468a2178;
}



// FUNCTION 1414e2f60 FUN_1414e2f60 body=47 status=ok
// SIG undefined FUN_1414e2f60(void)

longlong FUN_1414e2f60(void)

{
  if (DAT_1468a2168 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a2168,&PTR_Z_Construct_UPackage__Script_MechWarrior_146481b40);
  }
  return DAT_1468a2168;
}



// FUNCTION 1414e2f90 FUN_1414e2f90 body=47 status=ok
// SIG undefined FUN_1414e2f90(void)

longlong FUN_1414e2f90(void)

{
  if (DAT_1468a20f8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a20f8,&PTR_Z_Construct_UPackage__Script_MechWarrior_146480aa0);
  }
  return DAT_1468a20f8;
}



// FUNCTION 1414e2fc0 FUN_1414e2fc0 body=47 status=ok
// SIG undefined FUN_1414e2fc0(void)

longlong FUN_1414e2fc0(void)

{
  if (DAT_1468a1fe0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a1fe0,&PTR_Z_Construct_UPackage__Script_MechWarrior_14647f310);
  }
  return DAT_1468a1fe0;
}



// FUNCTION 1414e2ff0 FUN_1414e2ff0 body=47 status=ok
// SIG undefined FUN_1414e2ff0(void)

longlong FUN_1414e2ff0(void)

{
  if (DAT_1468a1fd0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a1fd0,&PTR_Z_Construct_UPackage__Script_MechWarrior_14647ef20);
  }
  return DAT_1468a1fd0;
}



// FUNCTION 1414e3020 FUN_1414e3020 body=47 status=ok
// SIG undefined FUN_1414e3020(void)

longlong FUN_1414e3020(void)

{
  if (DAT_1468a20e0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a20e0,&PTR_Z_Construct_UPackage__Script_MechWarrior_146480a00);
  }
  return DAT_1468a20e0;
}



// FUNCTION 1414e3070 FUN_1414e3070 body=44 status=ok
// SIG undefined FUN_1414e3070(void)

void FUN_1414e3070(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140e7fee0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414e30a0 FUN_1414e30a0 body=163 status=ok
// SIG undefined FUN_1414e30a0(void)

void FUN_1414e30a0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
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
  plVar1 = local_18;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140e80850(param_1,plVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1414e3150 FUN_1414e3150 body=191 status=ok
// SIG undefined FUN_1414e3150(void)

void FUN_1414e3150(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 local_res10 [8];
  undefined8 local_res18 [2];
  
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
  uVar1 = FUN_140e81fc0(param_1,local_res18[0],local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414e3210 FUN_1414e3210 body=43 status=ok
// SIG undefined FUN_1414e3210(void)

void FUN_1414e3210(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140e82180();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414e3260 FUN_1414e3260 body=245 status=ok
// SIG undefined FUN_1414e3260(void)

void FUN_1414e3260(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined4 local_res10 [2];
  undefined1 local_198 [400];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  FUN_140ac6910(local_198);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_198);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_198);
  }
  puVar2 = local_198;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140e82900(param_1,local_res10[0],puVar2);
  *param_3 = uVar1;
  FUN_140ac7ce0(local_198);
  return;
}



// FUNCTION 1414e3360 FUN_1414e3360 body=191 status=ok
// SIG undefined FUN_1414e3360(void)

void FUN_1414e3360(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 local_res10 [8];
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
  uVar1 = FUN_140e82940(local_res18,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414e3420 FUN_1414e3420 body=290 status=ok
// SIG undefined FUN_1414e3420(void)

void FUN_1414e3420(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 local_res10 [8];
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
  FUN_140e82cd0(param_1,local_res20,local_res10[0],plVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1414e3550 FUN_1414e3550 body=128 status=ok
// SIG undefined FUN_1414e3550(void)

void FUN_1414e3550(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  uVar1 = FUN_140e82fa0(local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414e35d0 FUN_1414e35d0 body=163 status=ok
// SIG undefined FUN_1414e35d0(void)

void FUN_1414e35d0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
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
  plVar1 = local_18;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140e83170(param_1,plVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1414e3680 FUN_1414e3680 body=143 status=ok
// SIG undefined FUN_1414e3680(void)

void FUN_1414e3680(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_140e85920(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414e3710 FUN_1414e3710 body=262 status=ok
// SIG undefined FUN_1414e3710(void)

void FUN_1414e3710(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 local_88;
  undefined1 local_80 [16];
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 local_60;
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_70 = 0xffffffff;
  local_60 = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_6c = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_70);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_30 = 0;
  local_28 = 0;
  local_38 = 0;
  local_48 = local_70;
  local_44 = (undefined4)local_6c;
  local_40 = local_6c._4_4_;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_88 = local_60;
  FString::FString(local_80,local_58);
  FSoftObjectPath::operator=(&local_38,&local_88);
  uVar1 = FUN_140e85ba0(param_1,&local_48);
  *param_3 = uVar1;
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1414e3820 FUN_1414e3820 body=50 status=ok
// SIG undefined FUN_1414e3820(void)

void FUN_1414e3820(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FWeakObjectPtr::IsValid(param_1 + 0x77c);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414e3860 FUN_1414e3860 body=174 status=ok
// SIG undefined FUN_1414e3860(void)

void FUN_1414e3860(longlong param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong local_res8;
  
  local_res8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res8);
  }
  lVar1 = local_res8;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x77c);
  if ((cVar2 != '\0') && (lVar3 = FWeakObjectPtr::Get(param_1 + 0x77c), lVar3 == lVar1)) {
    *param_3 = 1;
    return;
  }
  *param_3 = 0;
  return;
}



// FUNCTION 1414e3910 FUN_1414e3910 body=262 status=ok
// SIG undefined FUN_1414e3910(void)

void FUN_1414e3910(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 local_88;
  undefined1 local_80 [16];
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 local_60;
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_70 = 0xffffffff;
  local_60 = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_6c = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_70);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_30 = 0;
  local_28 = 0;
  local_38 = 0;
  local_48 = local_70;
  local_44 = (undefined4)local_6c;
  local_40 = local_6c._4_4_;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_88 = local_60;
  FString::FString(local_80,local_58);
  FSoftObjectPath::operator=(&local_38,&local_88);
  uVar1 = FUN_140e86060(param_1,&local_48);
  *param_3 = uVar1;
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1414e3a20 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_141275180(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 1414e3ae0 FUN_1414e3ae0 body=255 status=ok
// SIG undefined FUN_1414e3ae0(void)

void FUN_1414e3ae0(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [8];
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
  FUN_141275300(param_1,local_18[0],local_res20,local_res10[0]);
  return;
}



// FUNCTION 1414e3c00 FUN_1414e3c00 body=128 status=ok
// SIG undefined FUN_1414e3c00(void)

void FUN_1414e3c00(undefined8 param_1,longlong param_2)

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
  FUN_140e8eb50(param_1,local_res10);
  return;
}



// FUNCTION 1414e3ca0 FUN_1414e3ca0 body=128 status=ok
// SIG undefined FUN_1414e3ca0(void)

void FUN_1414e3ca0(undefined8 param_1,longlong param_2)

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
  FUN_14127c6d0(param_1,local_res10);
  return;
}



// FUNCTION 1414e3d20 FUN_1414e3d20 body=178 status=ok
// SIG undefined FUN_1414e3d20(void)

void FUN_1414e3d20(longlong *param_1,longlong param_2)

{
  char cVar1;
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
  cVar1 = (**(code **)(*param_1 + 0x408))(param_1,local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerUpdateLastUsedVehicleLoadoutIndex_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x410))(param_1,local_res8[0]);
  return;
}



// FUNCTION 1414e3de0 FUN_1414e3de0 body=263 status=ok
// SIG undefined FUN_1414e3de0(void)

void FUN_1414e3de0(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 local_res8 [2];
  undefined1 local_198 [400];
  
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  FUN_140ac6910(local_198);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_198);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_198);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x3f8))(param_1,local_res8[0],local_198);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerUpdateLoadoutAtIndex_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x400))(param_1,local_res8[0],local_198);
  }
  FUN_140ac7ce0(local_198);
  return;
}



// FUNCTION 1414e3ef0 FUN_1414e3ef0 body=175 status=ok
// SIG undefined FUN_1414e3ef0(void)

void FUN_1414e3ef0(undefined8 param_1,longlong param_2)

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
  FUN_140e913c0(local_res20,local_res10[0]);
  return;
}



// FUNCTION 1414e3fa0 FUN_1414e3fa0 body=128 status=ok
// SIG undefined FUN_1414e3fa0(void)

void FUN_1414e3fa0(undefined8 param_1,longlong param_2)

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
  FUN_140e92330(param_1,local_res10);
  return;
}



// FUNCTION 1414e4020 execUpdateReflectionCaptureCubemapAsset body=303 status=ok
// SIG undefined execUpdateReflectionCaptureCubemapAsset(void)

void UUGBPFunctionLibrary::execUpdateReflectionCaptureCubemapAsset
               (undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 local_50;
  longlong local_48 [2];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_48[0] = 0;
  local_50 = 0;
  local_48[1] = 0;
  local_60 = 0xffffffff;
  local_5c = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_20 = 0;
  local_18 = 0;
  local_28 = 0;
  local_38 = local_60;
  local_34 = (undefined4)local_5c;
  local_30 = local_5c._4_4_;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_78 = local_50;
  FString::FString(local_70,local_48);
  FSoftObjectPath::operator=(&local_28,&local_78);
  FUN_140e94e00(local_res10,&local_38);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1414e4150 FUN_1414e4150 body=112 status=ok
// SIG undefined FUN_1414e4150(void)

void FUN_1414e4150(undefined8 param_1,longlong param_2)

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
  FUN_140e95370(local_res10[0]);
  return;
}



// FUNCTION 1414e41c0 execUpdateReflectionCaptureCubemapAsset body=303 status=ok
// SIG undefined execUpdateReflectionCaptureCubemapAsset(void)

void UUGBPFunctionLibrary::execUpdateReflectionCaptureCubemapAsset
               (undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 local_50;
  longlong local_48 [2];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_48[0] = 0;
  local_50 = 0;
  local_48[1] = 0;
  local_60 = 0xffffffff;
  local_5c = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_20 = 0;
  local_18 = 0;
  local_28 = 0;
  local_38 = local_60;
  local_34 = (undefined4)local_5c;
  local_30 = local_5c._4_4_;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_78 = local_50;
  FString::FString(local_70,local_48);
  FSoftObjectPath::operator=(&local_28,&local_78);
  FUN_140e95850(local_res10,&local_38);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1414e42f0 FUN_1414e42f0 body=47 status=ok
// SIG undefined FUN_1414e42f0(void)

longlong FUN_1414e42f0(void)

{
  if (DAT_1468a2820 == 0) {
    FUN_141786440(&DAT_1468a2820,&PTR_GetPrivateStaticClass_144c0f230);
  }
  return DAT_1468a2820;
}



// FUNCTION 1414e4320 FUN_1414e4320 body=47 status=ok
// SIG undefined FUN_1414e4320(void)

longlong FUN_1414e4320(void)

{
  if (DAT_1468a27d8 == 0) {
    FUN_141786a30(&DAT_1468a27d8,&PTR_FUN_1464840b0);
  }
  return DAT_1468a27d8;
}



// FUNCTION 1414e4350 FUN_1414e4350 body=47 status=ok
// SIG undefined FUN_1414e4350(void)

longlong FUN_1414e4350(void)

{
  if (DAT_1468a27e0 == 0) {
    FUN_141786a30(&DAT_1468a27e0,&PTR_FUN_1464840f0);
  }
  return DAT_1468a27e0;
}



// FUNCTION 1414e4380 FUN_1414e4380 body=47 status=ok
// SIG undefined FUN_1414e4380(void)

longlong FUN_1414e4380(void)

{
  if (DAT_1468a27e8 == 0) {
    FUN_141786a30(&DAT_1468a27e8,&PTR_FUN_146484130);
  }
  return DAT_1468a27e8;
}



// FUNCTION 1414e43b0 FUN_1414e43b0 body=47 status=ok
// SIG undefined FUN_1414e43b0(void)

longlong FUN_1414e43b0(void)

{
  if (DAT_1468a27f0 == 0) {
    FUN_141786a30(&DAT_1468a27f0,&PTR_FUN_146484230);
  }
  return DAT_1468a27f0;
}



// FUNCTION 1414e43e0 FUN_1414e43e0 body=47 status=ok
// SIG undefined FUN_1414e43e0(void)

longlong FUN_1414e43e0(void)

{
  if (DAT_1468a27f8 == 0) {
    FUN_141786a30(&DAT_1468a27f8,&PTR_FUN_146484270);
  }
  return DAT_1468a27f8;
}



// FUNCTION 1414e4410 FUN_1414e4410 body=47 status=ok
// SIG undefined FUN_1414e4410(void)

longlong FUN_1414e4410(void)

{
  if (DAT_1468a2800 == 0) {
    FUN_141786a30(&DAT_1468a2800,&PTR_FUN_1464842f0);
  }
  return DAT_1468a2800;
}



// FUNCTION 1414e4440 FUN_1414e4440 body=47 status=ok
// SIG undefined FUN_1414e4440(void)

longlong FUN_1414e4440(void)

{
  if (DAT_1468a2808 == 0) {
    FUN_141786a30(&DAT_1468a2808,&PTR_FUN_146484370);
  }
  return DAT_1468a2808;
}



// FUNCTION 1414e4470 FUN_1414e4470 body=47 status=ok
// SIG undefined FUN_1414e4470(void)

longlong FUN_1414e4470(void)

{
  if (DAT_1468a2810 == 0) {
    FUN_141786a30(&DAT_1468a2810,&PTR_FUN_1464843f0);
  }
  return DAT_1468a2810;
}



// FUNCTION 1414e44a0 FUN_1414e44a0 body=47 status=ok
// SIG undefined FUN_1414e44a0(void)

longlong FUN_1414e44a0(void)

{
  if (DAT_1468a2818 == 0) {
    FUN_141786a30(&DAT_1468a2818,&PTR_FUN_1464844b0);
  }
  return DAT_1468a2818;
}



// FUNCTION 1414e44f0 FUN_1414e44f0 body=53 status=ok
// SIG undefined FUN_1414e44f0(void)

void FUN_1414e44f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x90;
    *puVar1 = &PTR_FUN_144c16590;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414e4530 FUN_1414e4530 body=162 status=ok
// SIG undefined FUN_1414e4530(void)

longlong FUN_1414e4530(void)

{
  if (DAT_1468a27a8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"VehicleTrailComponent",&DAT_1468a27a8,FUN_140447710,0x2c8,
                  0x10000000,0,L"Engine",&LAB_1414e5540,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1414dc8f0,&LAB_140447700,0);
  }
  return DAT_1468a27a8;
}



// FUNCTION 1414e45f0 FUN_1414e45f0 body=53 status=ok
// SIG undefined FUN_1414e45f0(void)

void FUN_1414e45f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_144c166a8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414e4630 FUN_1414e4630 body=53 status=ok
// SIG undefined FUN_1414e4630(void)

void FUN_1414e4630(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_144c167c0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414e4670 FUN_1414e4670 body=162 status=ok
// SIG undefined FUN_1414e4670(void)

longlong FUN_1414e4670(void)

{
  if (DAT_1468a2748 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"VehicleSpline",&DAT_1468a2748,FUN_140447710,0x480,0x10000000,
                  0,L"Engine",&LAB_1414e5450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_1468a2748;
}



// FUNCTION 1414e4740 FUN_1414e4740 body=53 status=ok
// SIG undefined FUN_1414e4740(void)

void FUN_1414e4740(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb8;
    *puVar1 = &PTR_FUN_144c14d18;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414e4780 FUN_1414e4780 body=53 status=ok
// SIG undefined FUN_1414e4780(void)

void FUN_1414e4780(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_144c14e30;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414e47c0 FUN_1414e47c0 body=162 status=ok
// SIG undefined FUN_1414e47c0(void)

longlong FUN_1414e47c0(void)

{
  if (DAT_1468a29a0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"VendingMachineProxy",&DAT_1468a29a0,FUN_1414e6800,0xa00,
                  0x10000008,0,L"Engine",&LAB_1414e5480,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,FUN_1412d7880
                  ,&LAB_140447700,0);
  }
  return DAT_1468a29a0;
}



// FUNCTION 1414e4870 FUN_1414e4870 body=53 status=ok
// SIG undefined FUN_1414e4870(void)

void FUN_1414e4870(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &PTR_FUN_144c14f48;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414e48b0 FUN_1414e48b0 body=162 status=ok
// SIG undefined FUN_1414e48b0(void)

longlong FUN_1414e48b0(void)

{
  if (DAT_1468a2858 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"VendingMachineMenu",&DAT_1468a2858,FUN_1414e6830,0x348,
                  0x10000000,0,L"Engine",FUN_1414e5560,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UGPasswordResetPage::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468a2858;
}



// FUNCTION 1414e4960 FUN_1414e4960 body=47 status=ok
// SIG undefined FUN_1414e4960(void)

longlong FUN_1414e4960(void)

{
  if (DAT_1468a2850 == 0) {
    FUN_141786440(&DAT_1468a2850,&PTR_FUN_144c122f0);
  }
  return DAT_1468a2850;
}



// FUNCTION 1414e4990 FUN_1414e4990 body=47 status=ok
// SIG undefined FUN_1414e4990(void)

longlong FUN_1414e4990(void)

{
  if (DAT_1468a2838 == 0) {
    FUN_141786a30(&DAT_1468a2838,&PTR_FUN_1464848b0);
  }
  return DAT_1468a2838;
}



// FUNCTION 1414e49c0 FUN_1414e49c0 body=47 status=ok
// SIG undefined FUN_1414e49c0(void)

longlong FUN_1414e49c0(void)

{
  if (DAT_1468a2840 == 0) {
    FUN_141786a30(&DAT_1468a2840,&PTR_FUN_146484970);
  }
  return DAT_1468a2840;
}



// FUNCTION 1414e49f0 FUN_1414e49f0 body=47 status=ok
// SIG undefined FUN_1414e49f0(void)

longlong FUN_1414e49f0(void)

{
  if (DAT_1468a2848 == 0) {
    FUN_141786a30(&DAT_1468a2848,&PTR_FUN_1464849f0);
  }
  return DAT_1468a2848;
}



// FUNCTION 1414e4a40 FUN_1414e4a40 body=162 status=ok
// SIG undefined FUN_1414e4a40(void)

longlong FUN_1414e4a40(void)

{
  if (DAT_1468a2758 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"VehicleStatusEffectModifiersAspectData",&DAT_1468a2758,
                  FUN_140447710,0x50,0x10000000,0,L"Engine",
                  InternalConstructor<UDataRegistrySettings>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1414943e0,&LAB_140447700,0);
  }
  return DAT_1468a2758;
}



// FUNCTION 1414e4b00 FUN_1414e4b00 body=162 status=ok
// SIG undefined FUN_1414e4b00(void)

longlong FUN_1414e4b00(void)

{
  if (DAT_1468a2878 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"VendingMachineMenuData",&DAT_1468a2878,FUN_140447710,0x208,
                  0x10000000,0,L"Engine",FUN_1414e55d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142f38260,&LAB_140447700,0);
  }
  return DAT_1468a2878;
}



// FUNCTION 1414e4bb0 FUN_1414e4bb0 body=53 status=ok
// SIG undefined FUN_1414e4bb0(void)

void FUN_1414e4bb0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_144c16248;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414e4bf0 FUN_1414e4bf0 body=162 status=ok
// SIG undefined FUN_1414e4bf0(void)

longlong FUN_1414e4bf0(void)

{
  if (DAT_1468a27c0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GbxCondition_CanUseRefillAmmo",&DAT_1468a27c0,FUN_140447710,
                  0x88,0x10000000,0,L"Engine",FUN_1414e54a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407b5e50,&LAB_140447700,0);
  }
  return DAT_1468a27c0;
}



// FUNCTION 1414e4cb0 FUN_1414e4cb0 body=162 status=ok
// SIG undefined FUN_1414e4cb0(void)

longlong FUN_1414e4cb0(void)

{
  if (DAT_1468a27d0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"VendingMachineRefillAllAmmoValueResolver",&DAT_1468a27d0,
                  FUN_140447710,0x28,0x10000000,0,L"Engine",FUN_1414e56e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDungeonEventListener::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468a27d0;
}



// FUNCTION 1414e4d60 FUN_1414e4d60 body=47 status=ok
// SIG undefined FUN_1414e4d60(void)

longlong FUN_1414e4d60(void)

{
  if (DAT_1468a2998 == 0) {
    FUN_141786440(&DAT_1468a2998,&PTR_FUN_144c109f0);
  }
  return DAT_1468a2998;
}



// FUNCTION 1414e4d90 FUN_1414e4d90 body=47 status=ok
// SIG undefined FUN_1414e4d90(void)

longlong FUN_1414e4d90(void)

{
  if (DAT_1468a2928 == 0) {
    FUN_141786a30(&DAT_1468a2928,&PTR_FUN_146485920);
  }
  return DAT_1468a2928;
}



// FUNCTION 1414e4dc0 FUN_1414e4dc0 body=47 status=ok
// SIG undefined FUN_1414e4dc0(void)

longlong FUN_1414e4dc0(void)

{
  if (DAT_1468a2930 == 0) {
    FUN_141786a30(&DAT_1468a2930,&PTR_FUN_146485a20);
  }
  return DAT_1468a2930;
}



// FUNCTION 1414e4df0 FUN_1414e4df0 body=47 status=ok
// SIG undefined FUN_1414e4df0(void)

longlong FUN_1414e4df0(void)

{
  if (DAT_1468a2938 == 0) {
    FUN_141786a30(&DAT_1468a2938,&PTR_FUN_146485a60);
  }
  return DAT_1468a2938;
}



// FUNCTION 1414e4e20 FUN_1414e4e20 body=47 status=ok
// SIG undefined FUN_1414e4e20(void)

longlong FUN_1414e4e20(void)

{
  if (DAT_1468a2940 == 0) {
    FUN_141786a30(&DAT_1468a2940,&PTR_FUN_146485aa0);
  }
  return DAT_1468a2940;
}



// FUNCTION 1414e4e50 FUN_1414e4e50 body=47 status=ok
// SIG undefined FUN_1414e4e50(void)

longlong FUN_1414e4e50(void)

{
  if (DAT_1468a2948 == 0) {
    FUN_141786a30(&DAT_1468a2948,&PTR_FUN_146485ae0);
  }
  return DAT_1468a2948;
}



// FUNCTION 1414e4e80 FUN_1414e4e80 body=47 status=ok
// SIG undefined FUN_1414e4e80(void)

longlong FUN_1414e4e80(void)

{
  if (DAT_1468a2950 == 0) {
    FUN_141786a30(&DAT_1468a2950,&PTR_FUN_146485be0);
  }
  return DAT_1468a2950;
}



// FUNCTION 1414e4eb0 FUN_1414e4eb0 body=47 status=ok
// SIG undefined FUN_1414e4eb0(void)

longlong FUN_1414e4eb0(void)

{
  if (DAT_1468a2958 == 0) {
    FUN_141786a30(&DAT_1468a2958,&PTR_FUN_146485c20);
  }
  return DAT_1468a2958;
}



// FUNCTION 1414e4ee0 FUN_1414e4ee0 body=47 status=ok
// SIG undefined FUN_1414e4ee0(void)

longlong FUN_1414e4ee0(void)

{
  if (DAT_1468a2960 == 0) {
    FUN_141786a30(&DAT_1468a2960,&PTR_FUN_146485ca0);
  }
  return DAT_1468a2960;
}



// FUNCTION 1414e4f10 FUN_1414e4f10 body=47 status=ok
// SIG undefined FUN_1414e4f10(void)

longlong FUN_1414e4f10(void)

{
  if (DAT_1468a2968 == 0) {
    FUN_141786a30(&DAT_1468a2968,&PTR_FUN_146485ce0);
  }
  return DAT_1468a2968;
}



// FUNCTION 1414e4f40 FUN_1414e4f40 body=47 status=ok
// SIG undefined FUN_1414e4f40(void)

longlong FUN_1414e4f40(void)

{
  if (DAT_1468a2970 == 0) {
    FUN_141786a30(&DAT_1468a2970,&PTR_FUN_146485d20);
  }
  return DAT_1468a2970;
}



// FUNCTION 1414e4f70 FUN_1414e4f70 body=47 status=ok
// SIG undefined FUN_1414e4f70(void)

longlong FUN_1414e4f70(void)

{
  if (DAT_1468a2978 == 0) {
    FUN_141786a30(&DAT_1468a2978,&PTR_FUN_146485e30);
  }
  return DAT_1468a2978;
}



// FUNCTION 1414e4fa0 FUN_1414e4fa0 body=47 status=ok
// SIG undefined FUN_1414e4fa0(void)

longlong FUN_1414e4fa0(void)

{
  if (DAT_1468a2980 == 0) {
    FUN_141786a30(&DAT_1468a2980,&PTR_FUN_146485f40);
  }
  return DAT_1468a2980;
}



// FUNCTION 1414e4fd0 FUN_1414e4fd0 body=47 status=ok
// SIG undefined FUN_1414e4fd0(void)

longlong FUN_1414e4fd0(void)

{
  if (DAT_1468a2988 == 0) {
    FUN_141786a30(&DAT_1468a2988,&PTR_FUN_146485fd0);
  }
  return DAT_1468a2988;
}



// FUNCTION 1414e5000 FUN_1414e5000 body=47 status=ok
// SIG undefined FUN_1414e5000(void)

longlong FUN_1414e5000(void)

{
  if (DAT_1468a2990 == 0) {
    FUN_141786a30(&DAT_1468a2990,&PTR_FUN_146486010);
  }
  return DAT_1468a2990;
}



// FUNCTION 1414e5030 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UFocusButtonWidget::GetPrivateStaticClass(void)

{
  if (DAT_1468a2828 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"VendingMachine",&DAT_1468a2828,FUN_1414e67d0,0x6c8,0x10000000
                  ,0,L"Engine",&LAB_1414e5460,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  ALandscapeStreamingProxy::StaticClass,&LAB_140447700,0);
  }
  return DAT_1468a2828;
}



// FUNCTION 1414e50e0 FUN_1414e50e0 body=868 status=ok
// SIG undefined FUN_1414e50e0(void)

int * FUN_1414e50e0(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  ulonglong *_Src;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  
  iVar9 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar12 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar8 = *(int *)(*param_1 + 4 + (longlong)iVar12 * 0x28);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x28) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar12;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar6 + (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar12 & 0x1f);
  _Src = (ulonglong *)(*param_1 + (longlong)iVar12 * 0x28);
  FUN_1414e5710(_Src,param_3);
  *(undefined4 *)(_Src + 4) = 0xffffffff;
  bVar13 = false;
  iVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar12 != 1) {
    iVar8 = iVar9;
    if (iVar12 != 0) {
      iVar5 = (int)(*_Src >> 4);
      uVar10 = 0x9e3779b9U - iVar5 ^ iVar5 << 8;
      uVar7 = -(uVar10 + iVar5) ^ uVar10 >> 0xd;
      uVar11 = (iVar5 - uVar10) - uVar7 ^ uVar7 >> 0xc;
      uVar10 = (uVar10 - uVar11) - uVar7 ^ uVar11 << 0x10;
      uVar7 = (uVar7 - uVar10) - uVar11 ^ uVar10 >> 5;
      uVar11 = (uVar11 - uVar10) - uVar7 ^ uVar7 >> 3;
      uVar10 = (uVar10 - uVar11) - uVar7 ^ uVar11 << 10;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar6 +
                      (((longlong)(int)((uVar7 - uVar10) - uVar11) ^ (ulonglong)(uVar10 >> 0xf)) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar5 != -1) {
        do {
          iVar8 = iVar5;
          if (*(ulonglong *)(*param_1 + (longlong)iVar5 * 0x28) == *_Src) break;
          iVar5 = *(int *)(*param_1 + 0x20 + (longlong)iVar5 * 0x28);
          iVar8 = iVar9;
        } while (iVar5 != -1);
      }
    }
    bVar13 = iVar8 != -1;
    if (bVar13) {
      lVar2 = *param_1;
      if (*(longlong *)(lVar2 + 0x10 + (longlong)iVar8 * 0x28) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar2 + (longlong)iVar8 * 0x28),_Src,0x20);
      iVar12 = *param_2;
      bVar3 = (byte)iVar12 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = iVar12;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + (longlong)iVar12 * 0x28) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar9 = (int)param_1[6];
      }
      *(int *)(lVar2 + 4 + (longlong)iVar12 * 0x28) = iVar9;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar12;
      plVar6 = (longlong *)param_1[4];
      *param_2 = iVar8;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar6 +
                       (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_1414e5420;
    }
  }
  cVar4 = TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar12,0);
  if (cVar4 == '\0') {
    iVar9 = (int)(*_Src >> 4);
    uVar10 = 0x9e3779b9U - iVar9 ^ iVar9 << 8;
    uVar11 = -(uVar10 + iVar9) ^ uVar10 >> 0xd;
    uVar7 = (iVar9 - uVar10) - uVar11 ^ uVar11 >> 0xc;
    uVar10 = (uVar10 - uVar7) - uVar11 ^ uVar7 << 0x10;
    uVar11 = (uVar11 - uVar10) - uVar7 ^ uVar10 >> 5;
    uVar7 = (uVar7 - uVar10) - uVar11 ^ uVar11 >> 3;
    uVar10 = (uVar10 - uVar7) - uVar11 ^ uVar7 << 10;
    uVar7 = ((uVar11 - uVar10) - uVar7 ^ uVar10 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x24) = uVar7;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 4) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
         *param_2;
  }
LAB_1414e5420:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar13;
  }
  return param_2;
}



// FUNCTION 1414e54a0 FUN_1414e54a0 body=90 status=ok
// SIG undefined FUN_1414e54a0(void)

void FUN_1414e54a0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *(undefined1 *)((longlong)puVar1 + 0x29) = 3;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *(undefined4 *)((longlong)puVar1 + 100) = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0xffffffff;
    puVar1[0xe] = 0;
    *(undefined4 *)(puVar1 + 0xf) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144c15060;
    *(undefined4 *)(puVar1 + 0x10) = 0xbf800000;
  }
  return;
}



// FUNCTION 1414e5500 InternalConstructor<UDataRegistrySettings> body=55 status=ok
// SIG undefined InternalConstructor<UDataRegistrySettings>(void)

void InternalConstructor<UDataRegistrySettings>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UAssetImportData::UAssetImportData(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144c14a40;
    puVar1[7] = 0;
    puVar1[8] = 0;
    *(undefined2 *)(puVar1 + 9) = 0;
  }
  return;
}



// FUNCTION 1414e5560 FUN_1414e5560 body=112 status=ok
// SIG undefined FUN_1414e5560(void)

void FUN_1414e5560(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141300770(puVar1,param_1);
    *(undefined1 *)((longlong)puVar1 + 0x2ed) = 1;
    *puVar1 = &PTR_FUN_144c158d0;
    puVar1[0x20] = &PTR_LAB_144c15d70;
    puVar1[0x41] = &PTR_LAB_144c15d98;
    puVar1[0x57] = &PTR_LAB_144c15de8;
    puVar1[0x65] = 0;
    puVar1[0x66] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x344) = 0;
  }
  return;
}



// FUNCTION 1414e55d0 FUN_1414e55d0 body=266 status=ok
// SIG undefined FUN_1414e55d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1414e55d0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uStackX_c;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *(undefined4 *)(puVar1 + 6) = 0x1010100;
    *(undefined2 *)((longlong)puVar1 + 0x34) = 1;
    *(undefined1 *)((longlong)puVar1 + 0x36) = 1;
    puVar1[9] = 0;
    *puVar1 = &PTR_FUN_144c15fb8;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = &PTR__scalar_deleting_destructor__143f489a8;
    *(undefined4 *)(puVar1 + 0xe) = 0x42000000;
    *(undefined8 *)((longlong)puVar1 + 0x74) = 0x42000000;
    *(undefined8 *)((longlong)puVar1 + 0x7c) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x84) = 0;
    uVar2 = _DAT_1464aa6c8;
    puVar1[0x11] = _DAT_1464aa6c0;
    puVar1[0x12] = uVar2;
    *(undefined1 *)(puVar1 + 0x13) = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    uVar2 = DAT_1468b5d88;
    *(undefined1 *)(puVar1 + 0x1a) = 0;
    uVar3 = (undefined4)uVar2;
    *(undefined4 *)(puVar1 + 0x19) = uVar3;
    *(undefined4 *)(puVar1 + 0x18) = uVar3;
    uStackX_c = (undefined4)((ulonglong)uVar2 >> 0x20);
    *(undefined4 *)((longlong)puVar1 + 0xcc) = uStackX_c;
    *(undefined4 *)((longlong)puVar1 + 0xc4) = uStackX_c;
    *(undefined4 *)((longlong)puVar1 + 0xd4) = 3;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    *(byte *)(puVar1 + 0x1d) = *(byte *)(puVar1 + 0x1d) & 0xfc;
    FUN_140e9a1b0(puVar1 + 0x1e);
    return;
  }
  return;
}



// FUNCTION 1414e56e0 FUN_1414e56e0 body=41 status=ok
// SIG undefined FUN_1414e56e0(void)

void FUN_1414e56e0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142c8d050(puVar1,param_1);
    *puVar1 = &PTR_FUN_144c152e8;
  }
  return;
}



// FUNCTION 1414e5710 FUN_1414e5710 body=121 status=ok
// SIG undefined FUN_1414e5710(void)

undefined8 * FUN_1414e5710(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  _Src = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_1 + 2,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[2],_Src,(longlong)iVar1 * 0x18);
  }
  return param_1;
}



// FUNCTION 1414e5790 FUN_1414e5790 body=114 status=ok
// SIG undefined FUN_1414e5790(void)

void FUN_1414e5790(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x50,0);
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  FUN_14125dce0(param_1);
  return;
}



// FUNCTION 1414e5810 operator= body=469 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode,0>,FDefaultSetAllocator>
::operator=(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 local_res8 [8];
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  uint local_38;
  undefined4 uStack_34;
  longlong *local_30;
  uint uStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  
  if (param_1 != param_2) {
    iVar9 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    TSparseArray<TSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(param_1,iVar9);
    cVar3 = TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
            ::ConditionalRehash(param_1,iVar9);
    uVar7 = 0;
    if ((cVar3 == '\0') && (0 < (int)*(uint *)(param_1 + 9))) {
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
    puStack_20 = (uint *)(param_2 + 2);
    local_58 = 0;
    uStack_54 = 1;
    local_48._4_4_ = 0;
    uStack_40 = 0;
    if (iVar9 != 0) {
      puVar11 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar11 = puStack_20;
      }
      uVar1 = *puVar11;
      uVar8 = uVar7;
      while (uVar1 == 0) {
        iVar4 = (int)uVar8;
        uStack_40 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_40;
        local_58 = iVar4 + 1;
        uVar8 = (ulonglong)local_58;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1414e594d;
        uVar1 = puVar11[(longlong)iVar4 + 1];
      }
      uStack_54 = -uVar1 & uVar1;
      iVar4 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_48._4_4_ = (uStack_40 - iVar4) + 0x1f;
      if (iVar9 < local_48._4_4_) {
LAB_1414e594d:
        local_48._4_4_ = iVar9;
      }
    }
    uStack_18 = 0xffffffff;
    iStack_14 = local_48._4_4_;
    uStack_10 = uStack_40;
    uStack_c = iStack_3c;
    uStack_28 = local_58;
    uStack_24 = uStack_54;
    iVar4 = local_48._4_4_;
    uStack_50 = local_58;
    uStack_4c = uStack_54;
    local_38 = uStack_40;
    uStack_34 = iStack_3c;
    bVar2 = local_48._4_4_ < iVar9;
    local_48 = puStack_20;
    local_30 = param_2;
    uStack_40 = 0xffffffff;
    iStack_3c = iVar4;
    if (bVar2) {
      do {
        FUN_1414e50e0(param_1,local_res8,*param_2 + (longlong)iStack_3c * 0x28,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 1414e59f0 operator= body=123 status=ok
// SIG undefined operator=(void)

undefined8 * FSummonedCompanionGroup::operator=(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  puVar1 = param_1 + 1;
  *param_1 = *param_2;
  if (puVar1 != param_2 + 1) {
    _Src = (void *)param_2[1];
    iVar2 = *(int *)(param_2 + 2);
    *(int *)(param_1 + 2) = iVar2;
    if ((iVar2 == 0) && (*(int *)((longlong)param_1 + 0x14) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
      ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 * 0x18);
    }
  }
  return param_1;
}



// FUNCTION 1414e5a90 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UMovieSceneSignedObject::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  FUN_140a7c330(param_1 + 0x38);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1414e5ad0 FUN_1414e5ad0 body=95 status=ok
// SIG undefined FUN_1414e5ad0(void)

longlong FUN_1414e5ad0(longlong param_1,ulonglong param_2)

{
  FUN_140e9bfd0(param_1 + 0x328);
  *(undefined ***)(param_1 + 0x2b8) = &PTR_FUN_1445e3d48;
  *(undefined ***)(param_1 + 0x208) = &PTR_FUN_14468d298;
  FUN_141300980(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x348);
  }
  return param_1;
}



// FUNCTION 1414e5b30 FUN_1414e5b30 body=85 status=ok
// SIG undefined FUN_1414e5b30(void)

longlong FUN_1414e5b30(longlong param_1,ulonglong param_2)

{
  FUN_140e9c100(param_1 + 0xf0);
  FSlateBrush::~FSlateBrush(param_1 + 0x68);
  FUN_141320a80(param_1 + 0x58);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x208);
  }
  return param_1;
}



// FUNCTION 1414e5b90 FUN_1414e5b90 body=104 status=ok
// SIG undefined FUN_1414e5b90(void)

void FUN_1414e5b90(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_118 [272];
  
  FUN_140ed0240(local_118);
  FUN_140e9cc60(local_118,param_2);
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a2690);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_118);
  FUN_140e9c360(local_118);
  return;
}



// FUNCTION 1414e5c00 FUN_1414e5c00 body=129 status=ok
// SIG undefined FUN_1414e5c00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1414e5c00(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0xb8);
  *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_2 + 0x48) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined4 *)((longlong)param_2 + 0x80) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x84) = 0;
  *(undefined8 *)((longlong)param_2 + 0x90) = 0;
  *(undefined4 *)((longlong)param_2 + 0x98) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb0) = 0;
  return;
}



// FUNCTION 1414e5ce0 FUN_1414e5ce0 body=62 status=ok
// SIG undefined FUN_1414e5ce0(void)

void FUN_1414e5ce0(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x90);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_2);
  *(undefined4 *)((longlong)param_2 + 0x78) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  *(undefined8 *)((longlong)param_2 + 0x88) = 0;
  return;
}



// FUNCTION 1414e5d70 FUN_1414e5d70 body=163 status=ok
// SIG undefined FUN_1414e5d70(void)

undefined1 FUN_1414e5d70(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 0xa0;
    do {
      puVar2 = (undefined8 *)(param_3 + -0xa0 + param_2);
      uVar6 = puVar2[1];
      *(undefined8 *)(param_2 + -0xa0) = *puVar2;
      *(undefined8 *)(param_2 + -0x98) = uVar6;
      puVar2 = (undefined8 *)(param_3 + -0x90 + param_2);
      uVar6 = puVar2[1];
      *(undefined8 *)(param_2 + -0x90) = *puVar2;
      *(undefined8 *)(param_2 + -0x88) = uVar6;
      puVar2 = (undefined8 *)(param_3 + -0x80 + param_2);
      uVar6 = puVar2[1];
      *(undefined8 *)(param_2 + -0x80) = *puVar2;
      *(undefined8 *)(param_2 + -0x78) = uVar6;
      puVar1 = (undefined4 *)(param_3 + -0x70 + param_2);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *(undefined4 *)(param_2 + -0x70) = *puVar1;
      *(undefined4 *)(param_2 + -0x6c) = uVar3;
      *(undefined4 *)(param_2 + -0x68) = uVar4;
      *(undefined4 *)(param_2 + -100) = uVar5;
      puVar1 = (undefined4 *)(param_3 + -0x60 + param_2);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *(undefined4 *)(param_2 + -0x60) = *puVar1;
      *(undefined4 *)(param_2 + -0x5c) = uVar3;
      *(undefined4 *)(param_2 + -0x58) = uVar4;
      *(undefined4 *)(param_2 + -0x54) = uVar5;
      TSet<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode,0>,FDefaultSetAllocator>
      ::operator=(param_2 + -0x50,param_3 + -0x50 + param_2);
      FSummonedCompanionGroup::operator=(param_2,param_3 + param_2);
      param_2 = param_2 + 0xb8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1414e5e20 Copy body=193 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FNavGraphNode>::Copy
          (undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  
  if (param_4 != 0) {
    puVar3 = (undefined8 *)(param_3 + 8);
    do {
      puVar1 = param_2 + 1;
      *param_2 = puVar3[-1];
      if (puVar1 != puVar3) {
        iVar2 = *(int *)(puVar3 + 1);
        _Src = (void *)*puVar3;
        *(int *)(param_2 + 2) = iVar2;
        if ((iVar2 == 0) && (*(int *)((longlong)param_2 + 0x14) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x14) = 0;
        }
        else {
          TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
          ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 * 0x18);
        }
      }
      puVar3 = puVar3 + 3;
      param_4 = param_4 + -1;
      param_2 = param_2 + 3;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1414e5ef0 FUN_1414e5ef0 body=302 status=ok
// SIG undefined FUN_1414e5ef0(void)

undefined8 FUN_1414e5ef0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_4 != 0) {
    piVar3 = (int *)(param_3 + 0x88);
    do {
      *(char *)(param_2 + 0x58) = (char)piVar3[-0xc];
      piVar4 = (int *)(param_2 + 0x60);
      *(undefined1 *)(param_2 + 0x59) = *(undefined1 *)((longlong)piVar3 + -0x2f);
      *(int *)(param_2 + 0x5c) = piVar3[-0xb];
      if (piVar4 != piVar3 + -10) {
        iVar1 = piVar3[-8];
        pvVar2 = *(void **)(piVar3 + -10);
        *(int *)(param_2 + 0x68) = iVar1;
        if ((iVar1 == 0) && (*(int *)(param_2 + 0x6c) == 0)) {
          *(undefined4 *)(param_2 + 0x6c) = 0;
        }
        else {
          TArray<FDetectedFaceFeature2D,FDefaultAllocator>::ResizeForCopy(piVar4,iVar1);
          _guard_xfg_dispatch_icall_nop(*(void **)piVar4,pvVar2,(longlong)iVar1 * 0x1c);
        }
      }
      *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(piVar3 + -6);
      *(int *)(param_2 + 0x78) = piVar3[-4];
      piVar4 = (int *)(param_2 + 0x80);
      if (piVar4 != piVar3 + -2) {
        iVar1 = *piVar3;
        pvVar2 = *(void **)(piVar3 + -2);
        *(int *)(param_2 + 0x88) = iVar1;
        if ((iVar1 == 0) && (*(int *)(param_2 + 0x8c) == 0)) {
          *(undefined4 *)(param_2 + 0x8c) = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(piVar4,iVar1);
          _guard_xfg_dispatch_icall_nop(*(void **)piVar4,pvVar2,(longlong)iVar1 << 4);
        }
      }
      piVar3 = piVar3 + 0x24;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x90;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1414e6040 Destruct body=39 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FDataflowRigidSolverProxy>::Destruct
               (undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x80) != 0) {
    FMemory::Free();
  }
  FRichCurve::~FRichCurve(param_2);
  return;
}



// FUNCTION 1414e6070 FUN_1414e6070 body=55 status=ok
// SIG undefined FUN_1414e6070(void)

void FUN_1414e6070(void)

{
  undefined8 uVar1;
  
  if (DAT_1468a2258 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a2258 = GetStaticEnum(FUN_1414e6e70,uVar1,L"EVendingMachineAnimType");
  }
  return;
}



// FUNCTION 1414e60b0 FUN_1414e60b0 body=55 status=ok
// SIG undefined FUN_1414e60b0(void)

void FUN_1414e60b0(void)

{
  undefined8 uVar1;
  
  if (DAT_1468a2268 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a2268 = GetStaticEnum(FUN_1414e6ea0,uVar1,L"EVendingMachineBuyType");
  }
  return;
}


