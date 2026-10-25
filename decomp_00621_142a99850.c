// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142a99850 StaticRegisterNativesUSubmixEffectSubmixEQPreset body=34 status=ok
// SIG undefined StaticRegisterNativesUSubmixEffectSubmixEQPreset(void)

void USubmixEffectSubmixEQPreset::StaticRegisterNativesUSubmixEffectSubmixEQPreset(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SetSettings_1454d81e0,1);
  return;
}



// FUNCTION 142a99880 FUN_142a99880 body=34 status=ok
// SIG undefined FUN_142a99880(void)

void FUN_142a99880(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142a99560();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_IsPlaying_1454d8600,5);
  return;
}



// FUNCTION 142a998b0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FSubmixEffectDynamicsProcessorSettings::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b2a100 == 0) {
    if (DAT_146b2a090 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b2a090,&PTR_s__Script_AudioMixer_1454d7888);
    }
    lVar1 = DAT_146b2a090;
    uVar2 = Get_Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_CRC();
    DAT_146b2a100 =
         GetStaticStruct(FUN_142a99b70,lVar1,L"SubmixEffectDynamicsProcessorSettings",0x28,uVar2);
  }
  return;
}



// FUNCTION 142a99930 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FSubmixEffectEQBand::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b2a138 == 0) {
    if (DAT_146b2a090 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b2a090,&PTR_s__Script_AudioMixer_1454d7888);
    }
    lVar1 = DAT_146b2a090;
    uVar2 = Get_Z_Construct_UScriptStruct_FSubmixEffectEQBand_CRC();
    DAT_146b2a138 = GetStaticStruct(FUN_142a99ba0,lVar1,L"SubmixEffectEQBand",0x10,uVar2);
  }
  return;
}



// FUNCTION 142a999b0 FUN_142a999b0 body=113 status=ok
// SIG undefined FUN_142a999b0(void)

void FUN_142a999b0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b2a160 == 0) {
    if (DAT_146b2a090 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b2a090,&PTR_s__Script_AudioMixer_1454d7888);
    }
    lVar1 = DAT_146b2a090;
    uVar2 = FUN_142a99630();
    DAT_146b2a160 = GetStaticStruct(FUN_142a99bd0,lVar1,L"SubmixEffectReverbSettings",0x30,uVar2);
  }
  return;
}



// FUNCTION 142a99a30 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FSubmixEffectSubmixEQSettings::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b2a128 == 0) {
    if (DAT_146b2a090 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b2a090,&PTR_s__Script_AudioMixer_1454d7888);
    }
    lVar1 = DAT_146b2a090;
    uVar2 = Get_Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_CRC();
    DAT_146b2a128 = GetStaticStruct(FUN_142a99c00,lVar1,L"SubmixEffectSubmixEQSettings",0x10,uVar2);
  }
  return;
}



// FUNCTION 142a99ab0 FUN_142a99ab0 body=47 status=ok
// SIG undefined FUN_142a99ab0(void)

longlong FUN_142a99ab0(void)

{
  if (DAT_146b2a198 == 0) {
    FUN_141786440(&DAT_146b2a198,&PTR_FUN_1454d6440);
  }
  return DAT_146b2a198;
}



// FUNCTION 142a99ae0 FUN_142a99ae0 body=47 status=ok
// SIG undefined FUN_142a99ae0(void)

longlong FUN_142a99ae0(void)

{
  if (DAT_146b2a190 == 0) {
    FUN_141786a30(&DAT_146b2a190,&PTR_FUN_146680030);
  }
  return DAT_146b2a190;
}



// FUNCTION 142a99b10 FUN_142a99b10 body=47 status=ok
// SIG undefined FUN_142a99b10(void)

longlong FUN_142a99b10(void)

{
  if (DAT_146b2a0f0 == 0) {
    FUN_1417866a0(&DAT_146b2a0f0,&PTR_FUN_146680960);
  }
  return DAT_146b2a0f0;
}



// FUNCTION 142a99b40 FUN_142a99b40 body=47 status=ok
// SIG undefined FUN_142a99b40(void)

longlong FUN_142a99b40(void)

{
  if (DAT_146b2a0f8 == 0) {
    FUN_1417866a0(&DAT_146b2a0f8,&PTR_FUN_1466809b0);
  }
  return DAT_146b2a0f8;
}



// FUNCTION 142a99b70 FUN_142a99b70 body=47 status=ok
// SIG undefined FUN_142a99b70(void)

longlong FUN_142a99b70(void)

{
  if (DAT_146b2a108 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b2a108,&PTR_FUN_14667f760);
  }
  return DAT_146b2a108;
}



// FUNCTION 142a99ba0 FUN_142a99ba0 body=47 status=ok
// SIG undefined FUN_142a99ba0(void)

longlong FUN_142a99ba0(void)

{
  if (DAT_146b2a140 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b2a140,&PTR_FUN_14667fa40);
  }
  return DAT_146b2a140;
}



// FUNCTION 142a99bd0 FUN_142a99bd0 body=47 status=ok
// SIG undefined FUN_142a99bd0(void)

longlong FUN_142a99bd0(void)

{
  if (DAT_146b2a168 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b2a168,&PTR_FUN_14667fe10);
  }
  return DAT_146b2a168;
}



// FUNCTION 142a99c00 FUN_142a99c00 body=47 status=ok
// SIG undefined FUN_142a99c00(void)

longlong FUN_142a99c00(void)

{
  if (DAT_146b2a130 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b2a130,&PTR_FUN_14667f940);
  }
  return DAT_146b2a130;
}



// FUNCTION 142a99c30 FUN_142a99c30 body=175 status=ok
// SIG undefined FUN_142a99c30(void)

void FUN_142a99c30(undefined8 param_1,longlong param_2)

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
  FUN_142a7ec70(local_res20,local_res10[0]);
  return;
}



// FUNCTION 142a99ce0 execAddSourceEffectToPresetChain body=244 status=ok
// SIG undefined execAddSourceEffectToPresetChain(void)

void UAudioMixerBlueprintLibrary::execAddSourceEffectToPresetChain
               (undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
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
  FUN_142a7ef30(local_res20,local_res10[0],&local_18);
  return;
}



// FUNCTION 142a99de0 FUN_142a99de0 body=112 status=ok
// SIG undefined FUN_142a99de0(void)

void FUN_142a99de0(undefined8 param_1,longlong param_2)

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
  FUN_142a7fe40(local_res10[0]);
  return;
}



// FUNCTION 142a99e50 execGetNumberOfEntriesInSourceEffectChain body=190 status=ok
// SIG undefined execGetNumberOfEntriesInSourceEffectChain(void)

void UAudioMixerBlueprintLibrary::execGetNumberOfEntriesInSourceEffectChain
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  uVar1 = FUN_142a854d0(local_res18,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142a99f10 FUN_142a99f10 body=43 status=ok
// SIG undefined FUN_142a99f10(void)

void FUN_142a99f10(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142a8c050();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142a99f40 FUN_142a99f40 body=175 status=ok
// SIG undefined FUN_142a99f40(void)

void FUN_142a99f40(undefined8 param_1,longlong param_2)

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
  FUN_142a91ff0(local_res20,local_res10[0]);
  return;
}



// FUNCTION 142a99ff0 execSetIntPropertyByName body=237 status=ok
// SIG undefined execSetIntPropertyByName(void)

void UKismetSystemLibrary::execSetIntPropertyByName(undefined8 param_1,longlong param_2)

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
  FUN_142a92080(local_18[0],local_res20,local_res10[0]);
  return;
}



// FUNCTION 142a9a0e0 execSetBypassSourceEffectChainEntry body=303 status=ok
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
  FUN_142a92e00(local_10,local_18,local_res20[0],local_res10[0] != 0);
  return;
}



// FUNCTION 142a9a210 execSetSettings body=170 status=ok
// SIG undefined execSetSettings(void)

void USubmixEffectDynamicsProcessorPreset::execSetSettings(undefined8 param_1,longlong param_2)

{
  undefined2 *puVar1;
  undefined2 local_38 [2];
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint local_14;
  
  local_14 = local_14 | 3;
  local_38[0] = 0x100;
  local_34 = 0x40400000;
  uStack_30 = 0x41200000;
  uStack_2c = 0x42c80000;
  uStack_28 = 0xc0c00000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_24 = 0x3fc00000;
  uStack_20 = 0x41200000;
  uStack_1c = 0;
  uStack_18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar1 = local_38;
  if (*(undefined2 **)(param_2 + 0x38) != (undefined2 *)0x0) {
    puVar1 = *(undefined2 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  SetSettings(param_1,puVar1);
  return;
}



// FUNCTION 142a9a2c0 FUN_142a9a2c0 body=174 status=ok
// SIG undefined FUN_142a9a2c0(void)

void FUN_142a9a2c0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_38 = 0x3f59999a3f59999a;
  uStack_30 = 0x3f63d70a00000000;
  local_18 = 0x3fa147ae;
  uStack_14 = 0x3dcccccd;
  uStack_10 = 0x3f7e76c9;
  uStack_c = 0x3e99999a;
  local_28 = 0x3fbeb852;
  uStack_24 = 0x3f547ae1;
  uStack_20 = 0x3d4ccccd;
  uStack_1c = 0x3be56042;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  USubmixEffectReverbPreset::SetSettings(param_1,puVar1);
  return;
}



// FUNCTION 142a9a370 execSetSettings body=163 status=ok
// SIG undefined execSetSettings(void)

void USubmixEffectSubmixEQPreset::execSetSettings(undefined8 param_1,longlong param_2)

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
  SetSettings(param_1,plVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142a9a420 FUN_142a9a420 body=196 status=ok
// SIG undefined FUN_142a9a420(void)

void FUN_142a9a420(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
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
  USubmixEffectReverbPreset::SetSettingsWithReverbEffect(param_1,local_res20,local_res10[0]);
  return;
}



// FUNCTION 142a9a4f0 FUN_142a9a4f0 body=196 status=ok
// SIG undefined FUN_142a9a4f0(void)

void FUN_142a9a4f0(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
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
  FUN_142a93f90(param_1,local_res20,local_res10[0]);
  return;
}



// FUNCTION 142a9a5c0 FUN_142a9a5c0 body=123 status=ok
// SIG undefined FUN_142a9a5c0(void)

void FUN_142a9a5c0(undefined8 param_1,longlong param_2)

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
  FUN_142a94320(param_1,local_res10[0]);
  return;
}



// FUNCTION 142a9a660 execStartRecordingOutput body=243 status=ok
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
  FUN_142a94ec0(local_18[0],local_res10[0],local_res20);
  return;
}



// FUNCTION 142a9a780 execStopRecordingOutput body=519 status=ok
// SIG undefined execStopRecordingOutput(void)

void UAudioMixerBlueprintLibrary::execStopRecordingOutput
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  void *_Src;
  undefined8 uVar1;
  longlong lVar2;
  undefined1 local_res10 [8];
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_68;
  void *local_60;
  ulonglong local_58;
  longlong local_50 [2];
  void *local_40;
  int local_38;
  undefined4 local_34;
  
  local_68 = 0;
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
  local_50[0] = 0;
  local_50[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_50);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  local_60 = (void *)0x0;
  local_58 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
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
  _Src = local_60;
  local_40 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar2 = (longlong)(int)local_58;
  local_38 = (int)local_58;
  if ((int)local_58 == 0) {
    local_34 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_40,local_58 & 0xffffffff,0);
    ::_guard_xfg_dispatch_icall_nop(local_40,_Src,lVar2 * 2);
  }
  uVar1 = FUN_142a953a0(local_68,local_res10[0],local_50,&local_40,local_res20,local_res18);
  *param_3 = uVar1;
  if (local_60 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_50[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142a9a990 CreateAudioDevice body=85 status=ok
// SIG undefined CreateAudioDevice(void)

void FAudioMixerModuleXAudio2::CreateAudioDevice(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = operator_new(0xb30);
  if (lVar1 == 0) {
    return;
  }
  lVar2 = operator_new(0x220);
  if (lVar2 != 0) {
    uVar3 = FUN_142a9a9f0(lVar2);
    FUN_142a79860(lVar1,uVar3);
    return;
  }
  FUN_142a79860(lVar1,0);
  return;
}



// FUNCTION 142a9a9f0 FUN_142a9a9f0 body=878 status=ok
// SIG undefined FUN_142a9a9f0(void)

undefined8 * FUN_142a9a9f0(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  FUN_142a7ac80();
  *param_1 = &PTR_IsPromotedBuild_1454d9870;
  plVar1 = param_1 + 0x34;
  param_1[1] = &PTR_LAB_1454d9988;
  param_1[2] = &PTR_FUN_1454d9998;
  *(undefined4 *)(param_1 + 0x33) = 0;
  *plVar1 = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = &PTR_StartProfileThreadUsage_1454d9830;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3a));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x3a),4000);
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(uint *)((longlong)param_1 + 0x21c) = *(uint *)((longlong)param_1 + 0x21c) & 0xfffffff8;
  iVar2 = *(int *)(param_1 + 0x35);
  *(int *)(param_1 + 0x35) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x1ac) < iVar2 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = 1;
  iVar2 = *(int *)(param_1 + 0x35);
  *(int *)(param_1 + 0x35) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x1ac) < iVar2 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = 2;
  iVar2 = *(int *)(param_1 + 0x35);
  *(int *)(param_1 + 0x35) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x1ac) < iVar2 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = 4;
  iVar2 = *(int *)(param_1 + 0x35);
  *(int *)(param_1 + 0x35) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x1ac) < iVar2 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = 8;
  iVar2 = *(int *)(param_1 + 0x35);
  *(int *)(param_1 + 0x35) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x1ac) < iVar2 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = 0x10;
  iVar2 = *(int *)(param_1 + 0x35);
  *(int *)(param_1 + 0x35) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x1ac) < iVar2 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = 0x20;
  iVar2 = *(int *)(param_1 + 0x35);
  *(int *)(param_1 + 0x35) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x1ac) < iVar2 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = 0x40;
  iVar2 = *(int *)(param_1 + 0x35);
  *(int *)(param_1 + 0x35) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x1ac) < iVar2 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = 0x80;
  iVar2 = *(int *)(param_1 + 0x35);
  *(int *)(param_1 + 0x35) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x1ac) < iVar2 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = 0x100;
  iVar2 = *(int *)(param_1 + 0x35);
  *(int *)(param_1 + 0x35) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x1ac) < iVar2 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = 0x200;
  iVar2 = *(int *)(param_1 + 0x35);
  *(int *)(param_1 + 0x35) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x1ac) < iVar2 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = 0x400;
  iVar2 = *(int *)(param_1 + 0x35);
  *(int *)(param_1 + 0x35) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x1ac) < iVar2 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = 0x800;
  iVar2 = *(int *)(param_1 + 0x35);
  *(int *)(param_1 + 0x35) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x1ac) < iVar2 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = 0x1000;
  iVar2 = *(int *)(param_1 + 0x35);
  *(int *)(param_1 + 0x35) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x1ac) < iVar2 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = 0x2000;
  iVar2 = *(int *)(param_1 + 0x35);
  *(int *)(param_1 + 0x35) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x1ac) < iVar2 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = 0x4000;
  iVar2 = *(int *)(param_1 + 0x35);
  *(int *)(param_1 + 0x35) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x1ac) < iVar2 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = 0x8000;
  iVar2 = *(int *)(param_1 + 0x35);
  *(int *)(param_1 + 0x35) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x1ac) < iVar2 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = 0x10000;
  iVar2 = *(int *)(param_1 + 0x35);
  *(int *)(param_1 + 0x35) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x1ac) < iVar2 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = 0x20000;
  iVar2 = *(int *)(param_1 + 0x35);
  *(int *)(param_1 + 0x35) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x1ac) < iVar2 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = 0x7ffc0000;
  return param_1;
}



// FUNCTION 142a9ad70 `scalar_deleting_destructor' body=166 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
Audio::FMixerPlatformXAudio2::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_IsPromotedBuild_1454d9870;
  param_1[1] = &PTR_LAB_1454d9988;
  param_1[2] = &PTR_FUN_1454d9998;
  if (param_1[0x41] != 0) {
    FMemory::Free();
  }
  if (param_1[0x3f] != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3a));
  param_1[0x39] = &PTR_StartProfileThreadUsage_1454d9830;
  if (param_1[0x34] != 0) {
    FMemory::Free();
  }
  IAudioMixerPlatformInterface::~IAudioMixerPlatformInterface(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x220);
  }
  return param_1;
}



// FUNCTION 142a9ae20 `scalar_deleting_destructor' body=150 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FWindowsMMNotificationClient::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_GetPoolName_1454d99d8;
  plVar1 = (longlong *)param_1[0xc];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0xc] + 0x10))();
      param_1[0xc] = 0;
    }
  }
  if (*(char *)(param_1 + 0xd) != '\0') {
    FWindowsPlatformMisc::CoUninitialize();
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 2);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 142a9aec0 FUN_142a9aec0 body=43 status=ok
// SIG undefined FUN_142a9aec0(void)

undefined8 * FUN_142a9aec0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_StartProfileThreadUsage_1454d9830;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 142a9aef0 CheckAudioDeviceChange body=113 status=ok
// SIG undefined CheckAudioDeviceChange(void)

undefined1 Audio::FMixerPlatformXAudio2::CheckAudioDeviceChange(longlong *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 uVar1;
  BOOL BVar2;
  bool bVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x3a);
  BVar2 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar2 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  LOCK();
  bVar3 = (int)param_1[0x43] == 0;
  if (bVar3) {
    *(int *)(param_1 + 0x43) = 0;
  }
  UNLOCK();
  if (bVar3) {
    uVar1 = 0;
  }
  else {
    LOCK();
    *(undefined4 *)(param_1 + 0x43) = 0;
    UNLOCK();
    uVar1 = (**(code **)(*param_1 + 0xa0))(param_1,param_1 + 0x41);
  }
  LeaveCriticalSection(lpCriticalSection);
  return uVar1;
}



// FUNCTION 142a9af70 CloseAudioStream body=144 status=ok
// SIG undefined CloseAudioStream(void)

undefined8 Audio::FMixerPlatformXAudio2::CloseAudioStream(longlong *param_1)

{
  char cVar1;
  
  if (((*(uint *)((longlong)param_1 + 0x21c) & 2) == 0) || ((int)param_1[0xd] == 0)) {
    return 0;
  }
  if (((*(uint *)((longlong)param_1 + 0x21c) & 4) != 0) &&
     (cVar1 = (**(code **)(*param_1 + 0x98))(), cVar1 == '\0')) {
    return 0;
  }
  (**(code **)(*(longlong *)param_1[0x36] + 0x60))();
  if ((longlong *)param_1[0x38] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x38] + 0x90))();
    param_1[0x38] = 0;
  }
  (**(code **)(*(longlong *)param_1[0x37] + 0x90))();
  *(uint *)((longlong)param_1 + 0x21c) = *(uint *)((longlong)param_1 + 0x21c) & 0xfffffffb;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  return 1;
}



// FUNCTION 142a9b000 FUN_142a9b000 body=227 status=ok
// SIG undefined FUN_142a9b000(void)

undefined8 FUN_142a9b000(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  cVar1 = USoundWave::IsStreaming(param_2);
  if (cVar1 == '\0') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146b2a240) {
      _Init_thread_header(&DAT_146b2a240);
      if (DAT_146b2a240 == -1) {
        FName::FName(&DAT_146b2a238,&DAT_1454d92e8,1);
        _Init_thread_footer(&DAT_146b2a240);
      }
    }
    lVar2 = *param_2;
    uVar3 = USoundWave::GetRunningPlatform();
    cVar1 = (**(code **)(lVar2 + 800))(param_2,DAT_146b2a238,uVar3);
    if (cVar1 != '\0') {
      lVar2 = operator_new(0x60);
      if (lVar2 != 0) {
        uVar3 = FVorbisAudioInfo::FVorbisAudioInfo(lVar2);
        return uVar3;
      }
    }
  }
  else {
    lVar2 = operator_new(0x70);
    if (lVar2 != 0) {
      uVar3 = FOpusAudioInfo::FOpusAudioInfo(lVar2);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 142a9b0f0 DestroyObject body=136 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FWindowsMMNotificationClient,SharedPointerInternals::DefaultDeleter<FWindowsMMNotificationClient>_>
     ::DestroyObject(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    plVar2 = (longlong *)puVar1[0xc];
    *puVar1 = &PTR_GetPoolName_1454d99d8;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2,puVar1);
      if ((longlong *)puVar1[0xc] != (longlong *)0x0) {
        (**(code **)(*(longlong *)puVar1[0xc] + 0x10))();
        puVar1[0xc] = 0;
      }
    }
    if (*(char *)(puVar1 + 0xd) != '\0') {
      FWindowsPlatformMisc::CoUninitialize();
    }
    *(undefined4 *)(puVar1 + 0xb) = 0;
    if (puVar1[10] != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (puVar1 + 2);
    FMemory::operator_delete(puVar1,0x70);
  }
  return;
}



// FUNCTION 142a9b180 GetErrorString body=170 status=ok
// SIG undefined GetErrorString(void)

wchar_t * Audio::FMixerPlatformXAudio2::GetErrorString(undefined8 param_1,int param_2)

{
  if (param_2 < -0x7ff8ffa8) {
    if (param_2 == -0x7ff8ffa9) {
      return L"E_INVALIDARG";
    }
    if (param_2 == -0x7fffbffe) {
      return L"E_NOINTERFACE";
    }
    if (param_2 == -0x7fffbffd) {
      return L"E_POINTER";
    }
    if (param_2 == -0x7ffbfef0) {
      return L"CLASS_E_NOAGGREGATION";
    }
    if (param_2 == -0x7ffbfeac) {
      return L"REGDB_E_CLASSNOTREG";
    }
    if (param_2 == -0x7ff8fff2) {
      return L"E_OUTOFMEMORY";
    }
  }
  else {
    if (param_2 == -0x7769ffff) {
      return L"XAUDIO2_E_INVALID_CALL";
    }
    if (param_2 == -0x7769fffe) {
      return L"XAUDIO2_E_XMA_DECODER_ERROR";
    }
    if (param_2 == -0x7769fffd) {
      return L"XAUDIO2_E_XAPO_CREATION_FAILED";
    }
    if (param_2 == -0x7769fffc) {
      return L"XAUDIO2_E_DEVICE_INVALIDATED";
    }
  }
  return L"UKNOWN";
}



// FUNCTION 142a9b230 FUN_142a9b230 body=696 status=ok
// SIG undefined FUN_142a9b230(void)

undefined8 FUN_142a9b230(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 uVar3;
  short *psVar4;
  uint uVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 **ppuVar10;
  uint uVar11;
  undefined4 in_stack_ffffffffffffffb8;
  undefined2 uVar12;
  undefined2 *local_38;
  undefined8 local_30;
  undefined2 *local_28;
  undefined8 local_20;
  
  uVar12 = (undefined2)((uint)in_stack_ffffffffffffffb8 >> 0x10);
  if ((*(byte *)(param_1 + 0x21c) & 2) == 0) {
    local_20 = 0x1d;
    local_28 = (undefined2 *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    puVar1 = local_28;
    FGenericPlatformString::Memcpy(local_28,L"XAudio2 was not initialized.",0x3a);
    local_38 = (undefined2 *)0x0;
    local_30 = 0x62;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    puVar7 = local_38;
    FGenericPlatformString::Convert<char,wchar_t>
              (local_38,0x62,
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
               ,0x62,CONCAT22(uVar12,0x3f));
    puVar9 = &DAT_143f3eda8;
    if ((int)local_30 != 0) {
      puVar9 = puVar7;
    }
    puVar8 = &DAT_143f3eda8;
    if ((uint)local_20 != 0) {
      puVar8 = puVar1;
    }
    FString::PrintfImpl(&local_28,L"Audio Platform Device Error: %s (File %s, Line %d)",puVar8,
                        puVar9,0xb5);
    ppuVar10 = (undefined2 **)(param_1 + 0x138);
    if (ppuVar10 == &local_28) {
      if (local_28 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    else {
      if (*ppuVar10 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      *ppuVar10 = local_28;
      *(uint *)(param_1 + 0x140) = (uint)local_20;
      *(undefined4 *)(param_1 + 0x144) = local_20._4_4_;
    }
    if (puVar7 != (undefined2 *)0x0) {
      FMemory::Free(puVar7);
    }
    if (puVar1 != (undefined2 *)0x0) {
      FMemory::Free(puVar1);
      return 0;
    }
  }
  else {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x18))();
    if (-1 < iVar2) {
      return 1;
    }
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x18))
                      (*(longlong **)(param_1 + 0x1b0),param_2);
    psVar4 = (short *)Audio::FMixerPlatformXAudio2::GetErrorString(param_1,uVar3);
    local_28 = (undefined2 *)0x0;
    uVar11 = 0;
    puVar7 = (undefined2 *)0x0;
    if ((psVar4 != (short *)0x0) && (puVar7 = (undefined2 *)0x0, *psVar4 != 0)) {
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (psVar4[lVar6] != 0);
      uVar5 = (int)lVar6 + 1;
      local_20 = (ulonglong)uVar5;
      uVar11 = uVar5;
      if (0 < (int)uVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
        uVar11 = (uint)local_20;
      }
      puVar7 = local_28;
      FGenericPlatformString::Memcpy(local_28,psVar4,(longlong)(int)uVar5 * 2);
    }
    local_28 = (undefined2 *)0x0;
    local_20 = 0x62;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    puVar1 = local_28;
    FGenericPlatformString::Convert<char,wchar_t>
              (local_28,0x62,
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
               ,0x62,CONCAT22(uVar12,0x3f));
    puVar9 = &DAT_143f3eda8;
    if ((uint)local_20 != 0) {
      puVar9 = puVar1;
    }
    puVar8 = &DAT_143f3eda8;
    if (uVar11 != 0) {
      puVar8 = puVar7;
    }
    FString::PrintfImpl(&local_28,L"Audio Platform Device Error: %s (File %s, Line %d)",puVar8,
                        puVar9,0xbb);
    ppuVar10 = (undefined2 **)(param_1 + 0x138);
    if (ppuVar10 == &local_28) {
      if (local_28 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    else {
      if (*ppuVar10 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      *ppuVar10 = local_28;
      *(uint *)(param_1 + 0x140) = (uint)local_20;
      *(undefined4 *)(param_1 + 0x144) = local_20._4_4_;
    }
    if (puVar1 != (undefined2 *)0x0) {
      FMemory::Free(puVar1);
    }
    if (puVar7 != (undefined2 *)0x0) {
      FMemory::Free(puVar7);
    }
  }
  return 0;
}



// FUNCTION 142a9b4f0 FUN_142a9b4f0 body=1445 status=ok
// SIG undefined FUN_142a9b4f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142a9b4f0(longlong param_1,ulonglong param_2,undefined2 **param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 **ppuVar3;
  ulonglong uVar4;
  short *psVar5;
  undefined2 *puVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  undefined2 *puVar12;
  int iVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  undefined2 **ppuVar16;
  undefined1 auStack_4d8 [32];
  undefined4 local_4b8;
  undefined2 *local_4a8;
  undefined8 local_4a0;
  undefined2 *local_498;
  undefined8 local_490;
  int local_488;
  short local_478 [256];
  short local_278 [258];
  short local_74;
  ushort local_72;
  undefined4 uStack_70;
  uint local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_4d8;
  local_488 = (int)param_2;
  if ((*(byte *)(param_1 + 0x21c) & 2) == 0) {
    local_4a0 = 0x1d;
    local_4a8 = (undefined2 *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4a8,0);
    puVar12 = local_4a8;
    FGenericPlatformString::Memcpy(local_4a8,L"XAudio2 was not initialized.",0x3a);
    local_498 = (undefined2 *)0x0;
    local_490 = 0x62;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_498,0);
    puVar6 = local_498;
    local_4b8 = CONCAT22(local_4b8._2_2_,0x3f);
    FGenericPlatformString::Convert<char,wchar_t>
              (local_498,0x62,
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
              );
    local_4b8 = 0xc6;
    puVar15 = &DAT_143f3eda8;
    if ((uint)local_490 != 0) {
      puVar15 = puVar6;
    }
    puVar14 = &DAT_143f3eda8;
    if ((uint)local_4a0 != 0) {
      puVar14 = puVar12;
    }
    FString::PrintfImpl(&local_4a8,L"Audio Platform Device Error: %s (File %s, Line %d)",puVar14,
                        puVar15);
    ppuVar3 = &local_4a8;
    ppuVar16 = (undefined2 **)(param_1 + 0x138);
    if (ppuVar16 == ppuVar3) {
      if (local_4a8 != (undefined2 *)0x0) {
        ppuVar3 = (undefined2 **)FMemory::Free();
      }
    }
    else {
      if (*ppuVar16 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      *ppuVar16 = local_4a8;
      *(uint *)(param_1 + 0x140) = (uint)local_4a0;
      ppuVar3 = (undefined2 **)(ulonglong)local_4a0._4_4_;
      *(uint *)(param_1 + 0x144) = local_4a0._4_4_;
    }
    if (puVar6 != (undefined2 *)0x0) {
      ppuVar3 = (undefined2 **)FMemory::Free(puVar6);
    }
    if (puVar12 != (undefined2 *)0x0) {
      uVar4 = FMemory::Free(puVar12);
      return uVar4 & 0xffffffffffffff00;
    }
  }
  else {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x20))
                      (*(longlong **)(param_1 + 0x1b0),param_2,local_478);
    if (-1 < iVar1) {
      puVar6 = (undefined2 *)0x0;
      uVar7 = 0;
      local_498 = (undefined2 *)0x0;
      local_490 = (ulonglong)(uint)local_490;
      lVar9 = -1;
      lVar11 = lVar9;
      puVar12 = puVar6;
      uVar10 = uVar7;
      if (local_278[0] != 0) {
        do {
          lVar11 = lVar11 + 1;
        } while (local_278[lVar11] != 0);
        uVar10 = (int)lVar11 + 1;
        local_490 = (ulonglong)uVar10;
        uVar7 = uVar10;
        if (0 < (int)uVar10) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_498,0);
          uVar7 = (uint)local_490;
        }
        puVar12 = local_498;
        FGenericPlatformString::Memcpy(local_498,local_278,(longlong)(int)uVar10 * 2);
        uVar10 = local_490._4_4_;
      }
      if (param_3 == &local_498) {
        if (puVar12 != (undefined2 *)0x0) {
          FMemory::Free(puVar12);
        }
      }
      else {
        if (*param_3 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        *param_3 = puVar12;
        *(uint *)(param_3 + 1) = uVar7;
        *(uint *)((longlong)param_3 + 0xc) = uVar10;
      }
      local_498 = (undefined2 *)0x0;
      uVar7 = 0;
      local_490 = local_490 & 0xffffffff;
      puVar12 = puVar6;
      uVar10 = uVar7;
      if (local_478[0] != 0) {
        do {
          lVar9 = lVar9 + 1;
        } while (local_478[lVar9] != 0);
        uVar8 = (int)lVar9 + 1;
        local_490 = (ulonglong)uVar8;
        uVar7 = uVar8;
        uVar10 = 0;
        if (0 < (int)uVar8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_498,0);
          uVar7 = (uint)local_490;
          uVar10 = local_490._4_4_;
        }
        puVar12 = local_498;
        FGenericPlatformString::Memcpy(local_498,local_478,(longlong)(int)uVar8 * 2);
      }
      ppuVar3 = param_3 + 2;
      if (ppuVar3 == &local_498) {
        if (puVar12 != (undefined2 *)0x0) {
          FMemory::Free(puVar12);
        }
      }
      else {
        if (*ppuVar3 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        *ppuVar3 = puVar12;
        *(uint *)(param_3 + 3) = uVar7;
        *(uint *)((longlong)param_3 + 0x1c) = uVar10;
      }
      *(byte *)(param_3 + 8) = *(byte *)(param_3 + 8) & 0xfe;
      uVar4 = (ulonglong)CONCAT42(uStack_70,local_72);
      *(byte *)(param_3 + 8) = *(byte *)(param_3 + 8) | local_488 == 0;
      *(undefined4 *)((longlong)param_3 + 0x24) = uStack_70;
      uVar10 = 2;
      if (local_72 != 1) {
        uVar10 = (uint)CONCAT42(uStack_70,local_72) & 0xffff;
      }
      *(uint *)(param_3 + 4) = uVar10;
      *(undefined4 *)(param_3 + 5) = 1;
      *(undefined4 *)(param_3 + 7) = 0;
      if ((*(int *)((longlong)param_3 + 0x3c) < 0) && (*(int *)((longlong)param_3 + 0x3c) != 0)) {
        TArray<float,FDefaultAllocator>::ResizeTo(param_3 + 6,0);
        uVar4 = (ulonglong)local_72;
      }
      puVar12 = puVar6;
      if (local_74 == -2) {
        do {
          if (((uint)uVar4 & 0xffff) <= (uint)puVar12) break;
          iVar1 = (int)puVar6;
          if ((local_60 & *(uint *)(*(longlong *)(param_1 + 0x1a0) + (longlong)iVar1 * 4)) != 0) {
            iVar13 = *(int *)(param_3 + 7);
            *(int *)(param_3 + 7) = iVar13 + 1;
            if (*(int *)((longlong)param_3 + 0x3c) < iVar13 + 1) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3 + 6,iVar13);
            }
            puVar12 = (undefined2 *)(ulonglong)((uint)puVar12 + 1);
            *(int *)(param_3[6] + (longlong)iVar13 * 2) = iVar1;
            uVar4 = (ulonglong)local_72;
          }
          puVar6 = (undefined2 *)(ulonglong)(iVar1 + 1U);
        } while (iVar1 + 1U < 0x13);
        puVar6 = (undefined2 *)(uVar4 & 0xffff);
        if (((int)puVar12 != (int)puVar6) && ((int)puVar12 < *(int *)(param_3 + 7))) {
          do {
            iVar1 = *(int *)(param_3 + 7);
            iVar13 = (int)puVar12;
            uVar10 = iVar13 + 1;
            puVar12 = (undefined2 *)(ulonglong)uVar10;
            *(int *)(param_3 + 7) = iVar1 + 1;
            if (*(int *)((longlong)param_3 + 0x3c) < iVar1 + 1) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3 + 6,iVar1);
            }
            puVar6 = param_3[6];
            *(int *)(puVar6 + (longlong)iVar1 * 2) = iVar13;
          } while ((int)uVar10 < *(int *)(param_3 + 7));
        }
      }
      else {
        iVar1 = *(int *)(param_3 + 7);
        *(int *)(param_3 + 7) = iVar1 + 1;
        if (*(int *)((longlong)param_3 + 0x3c) < iVar1 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3 + 6,iVar1);
        }
        puVar6 = param_3[6];
        *(undefined4 *)(puVar6 + (longlong)iVar1 * 2) = 0;
        if (*(int *)(param_3 + 4) == 2) {
          iVar1 = *(int *)(param_3 + 7);
          *(int *)(param_3 + 7) = iVar1 + 1;
          if (*(int *)((longlong)param_3 + 0x3c) < iVar1 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3 + 6,iVar1);
          }
          puVar6 = param_3[6];
          *(undefined4 *)(puVar6 + (longlong)iVar1 * 2) = 1;
        }
      }
      return CONCAT71((int7)((ulonglong)puVar6 >> 8),1);
    }
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x20))
                      (*(longlong **)(param_1 + 0x1b0),param_2 & 0xffffffff,local_478);
    psVar5 = (short *)Audio::FMixerPlatformXAudio2::GetErrorString(param_1,uVar2);
    local_4a8 = (undefined2 *)0x0;
    uVar10 = 0;
    puVar12 = (undefined2 *)0x0;
    if ((psVar5 != (short *)0x0) && (puVar12 = (undefined2 *)0x0, *psVar5 != 0)) {
      lVar9 = -1;
      do {
        lVar9 = lVar9 + 1;
      } while (psVar5[lVar9] != 0);
      uVar7 = (int)lVar9 + 1;
      local_4a0 = (ulonglong)uVar7;
      uVar10 = uVar7;
      if (0 < (int)uVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4a8,0);
        uVar10 = (uint)local_4a0;
      }
      puVar12 = local_4a8;
      FGenericPlatformString::Memcpy(local_4a8,psVar5,(longlong)(int)uVar7 * 2);
    }
    local_4a8 = (undefined2 *)0x0;
    local_4a0 = 0x62;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4a8,0);
    puVar6 = local_4a8;
    local_4b8 = CONCAT22(local_4b8._2_2_,0x3f);
    FGenericPlatformString::Convert<char,wchar_t>
              (local_4a8,0x62,
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
              );
    local_4b8 = 0xcf;
    puVar15 = &DAT_143f3eda8;
    if ((uint)local_4a0 != 0) {
      puVar15 = puVar6;
    }
    puVar14 = &DAT_143f3eda8;
    if (uVar10 != 0) {
      puVar14 = puVar12;
    }
    FString::PrintfImpl(&local_4a8,L"Audio Platform Device Error: %s (File %s, Line %d)",puVar14,
                        puVar15);
    ppuVar3 = &local_4a8;
    ppuVar16 = (undefined2 **)(param_1 + 0x138);
    if (ppuVar16 == ppuVar3) {
      if (local_4a8 != (undefined2 *)0x0) {
        ppuVar3 = (undefined2 **)FMemory::Free();
      }
    }
    else {
      if (*ppuVar16 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      *ppuVar16 = local_4a8;
      *(uint *)(param_1 + 0x140) = (uint)local_4a0;
      ppuVar3 = (undefined2 **)(ulonglong)local_4a0._4_4_;
      *(uint *)(param_1 + 0x144) = local_4a0._4_4_;
    }
    if (puVar6 != (undefined2 *)0x0) {
      ppuVar3 = (undefined2 **)FMemory::Free(puVar6);
    }
    if (puVar12 != (undefined2 *)0x0) {
      ppuVar3 = (undefined2 **)FMemory::Free(puVar12);
    }
  }
  return (ulonglong)ppuVar3 & 0xffffffffffffff00;
}



// FUNCTION 142a9baa0 GetPlatformSettings body=33 status=ok
// SIG undefined GetPlatformSettings(void)

undefined8 Audio::FMixerPlatformXAudio2::GetPlatformSettings(undefined8 param_1,undefined8 param_2)

{
  FAudioPlatformSettings::GetPlatformSettings
            (param_2,L"/Script/WindowsTargetPlatform.WindowsTargetSettings");
  return param_2;
}



// FUNCTION 142a9bad0 FUN_142a9bad0 body=232 status=ok
// SIG undefined FUN_142a9bad0(void)

undefined8 * FUN_142a9bad0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  
  cVar2 = USoundWave::IsStreaming(param_3);
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (cVar2 != '\0') {
    if (iVar1 < DAT_146b2a220) {
      _Init_thread_header(&DAT_146b2a220);
      if (DAT_146b2a220 == -1) {
        FName::FName(&DAT_146b2a218,L"OPUS",1);
        _Init_thread_footer(&DAT_146b2a220);
      }
    }
    *param_2 = DAT_146b2a218;
    return param_2;
  }
  if (iVar1 < DAT_146b2a230) {
    _Init_thread_header(&DAT_146b2a230);
    if (DAT_146b2a230 == -1) {
      FName::FName(&DAT_146b2a228,&DAT_1454d9228,1);
      _Init_thread_footer(&DAT_146b2a230);
    }
  }
  *param_2 = DAT_146b2a228;
  return param_2;
}



// FUNCTION 142a9bbc0 FUN_142a9bbc0 body=726 status=ok
// SIG undefined FUN_142a9bbc0(void)

undefined8 FUN_142a9bbc0(LPVOID param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  short *psVar5;
  uint uVar6;
  longlong lVar7;
  undefined2 **ppuVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined4 in_stack_ffffffffffffffb8;
  undefined2 uVar12;
  undefined2 *local_38;
  undefined8 local_30;
  undefined2 *local_28;
  undefined8 local_20;
  
  uVar12 = (undefined2)((uint)in_stack_ffffffffffffffb8 >> 0x10);
  if ((*(byte *)((longlong)param_1 + 0x21c) & 2) == 0) {
    uVar2 = FWindowsPlatformMisc::CoInitialize(param_1);
    *(uint *)((longlong)param_1 + 0x21c) = *(uint *)((longlong)param_1 + 0x21c) & 0xfffffffe;
    lVar7 = -1;
    *(uint *)((longlong)param_1 + 0x21c) = *(uint *)((longlong)param_1 + 0x21c) | uVar2 & 0xff;
    iVar3 = XAudio2Create((longlong)param_1 + 0x1b0,0,0xffffffff);
    if (-1 < iVar3) {
      LoadVorbisLibraries();
      *(uint *)((longlong)param_1 + 0x21c) = *(uint *)((longlong)param_1 + 0x21c) | 2;
      return 1;
    }
    uVar4 = XAudio2Create((longlong)param_1 + 0x1b0,0,0xffffffff);
    psVar5 = (short *)Audio::FMixerPlatformXAudio2::GetErrorString(param_1,uVar4);
    local_28 = (undefined2 *)0x0;
    uVar2 = 0;
    puVar11 = (undefined2 *)0x0;
    if ((psVar5 != (short *)0x0) && (puVar11 = (undefined2 *)0x0, *psVar5 != 0)) {
      do {
        lVar7 = lVar7 + 1;
      } while (psVar5[lVar7] != 0);
      uVar6 = (int)lVar7 + 1;
      local_20 = (ulonglong)uVar6;
      uVar2 = uVar6;
      if (0 < (int)uVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
        uVar2 = (uint)local_20;
      }
      puVar11 = local_28;
      FGenericPlatformString::Memcpy(local_28,psVar5,(longlong)(int)uVar6 * 2);
    }
    local_28 = (undefined2 *)0x0;
    local_20 = 0x62;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    puVar1 = local_28;
    FGenericPlatformString::Convert<char,wchar_t>
              (local_28,0x62,
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
               ,0x62,CONCAT22(uVar12,0x3f));
    puVar10 = &DAT_143f3eda8;
    if ((uint)local_20 != 0) {
      puVar10 = puVar1;
    }
    puVar9 = &DAT_143f3eda8;
    if (uVar2 != 0) {
      puVar9 = puVar11;
    }
    FString::PrintfImpl(&local_28,L"Audio Platform Device Error: %s (File %s, Line %d)",puVar9,
                        puVar10,0x88);
    ppuVar8 = (undefined2 **)((longlong)param_1 + 0x138);
    if (ppuVar8 == &local_28) {
      if (local_28 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    else {
      if (*ppuVar8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      *ppuVar8 = local_28;
      *(uint *)((longlong)param_1 + 0x140) = (uint)local_20;
      *(undefined4 *)((longlong)param_1 + 0x144) = local_20._4_4_;
    }
    if (puVar1 != (undefined2 *)0x0) {
      FMemory::Free(puVar1);
    }
    if (puVar11 != (undefined2 *)0x0) {
      FMemory::Free(puVar11);
    }
  }
  else {
    local_20 = 0x1d;
    local_28 = (undefined2 *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    puVar1 = local_28;
    FGenericPlatformString::Memcpy(local_28,L"XAudio2 already initialized.",0x3a);
    local_38 = (undefined2 *)0x0;
    local_30 = 0x62;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    puVar11 = local_38;
    FGenericPlatformString::Convert<char,wchar_t>
              (local_38,0x62,
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
               ,0x62,CONCAT22(uVar12,0x3f));
    puVar10 = &DAT_143f3eda8;
    if ((int)local_30 != 0) {
      puVar10 = puVar11;
    }
    puVar9 = &DAT_143f3eda8;
    if ((uint)local_20 != 0) {
      puVar9 = puVar1;
    }
    FString::PrintfImpl(&local_28,L"Audio Platform Device Error: %s (File %s, Line %d)",puVar9,
                        puVar10,0x78);
    ppuVar8 = (undefined2 **)((longlong)param_1 + 0x138);
    if (ppuVar8 == &local_28) {
      if (local_28 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    else {
      if (*ppuVar8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      *ppuVar8 = local_28;
      *(uint *)((longlong)param_1 + 0x140) = (uint)local_20;
      *(undefined4 *)((longlong)param_1 + 0x144) = local_20._4_4_;
    }
    if (puVar11 != (undefined2 *)0x0) {
      FMemory::Free(puVar11);
    }
    if (puVar1 != (undefined2 *)0x0) {
      FMemory::Free(puVar1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 142a9bea0 FUN_142a9bea0 body=39 status=ok
// SIG undefined FUN_142a9bea0(void)

void FUN_142a9bea0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1454d9768;
    return;
  }
  return;
}



// FUNCTION 142a9bee0 FUN_142a9bee0 body=2074 status=ok
// SIG undefined FUN_142a9bee0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142a9bee0(longlong *param_1,undefined8 *param_2)

{
  wint_t wVar1;
  wint_t wVar2;
  int iVar3;
  undefined4 uVar4;
  short *psVar5;
  undefined2 *puVar6;
  uint uVar7;
  wint_t *pwVar8;
  undefined2 *puVar9;
  longlong lVar11;
  undefined2 *puVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined1 auStack_5b8 [32];
  undefined4 local_598;
  longlong *local_590;
  undefined8 local_588;
  undefined8 local_580;
  uint local_578 [2];
  undefined2 *local_570;
  int local_568;
  undefined4 local_564;
  undefined2 *local_560;
  undefined8 local_558;
  longlong local_550;
  undefined4 local_548;
  undefined4 local_544;
  undefined2 *local_540;
  int local_538;
  undefined4 local_534;
  undefined2 *local_530;
  undefined8 local_528;
  longlong local_520;
  undefined4 local_518;
  undefined4 local_514;
  undefined2 *local_510;
  int local_508;
  undefined4 local_504;
  undefined2 *local_500;
  undefined8 local_4f8;
  longlong local_4f0;
  undefined4 local_4e8;
  undefined4 local_4e4;
  undefined2 *local_4e0;
  int local_4d8;
  undefined4 local_4d4;
  undefined2 *local_4d0;
  undefined8 local_4c8;
  longlong local_4c0;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined8 *local_4a8;
  undefined2 local_4a0;
  ushort local_49e;
  int local_49c;
  int local_498;
  short local_494;
  undefined4 local_492;
  wint_t local_488 [536];
  ulonglong local_58;
  undefined2 *puVar10;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_5b8;
  if ((*(byte *)((longlong)param_1 + 0x21c) & 2) == 0) {
    return 1;
  }
  LOCK();
  *(undefined4 *)(param_1 + 0x31) = 1;
  UNLOCK();
  puVar10 = (undefined2 *)0x0;
  plVar15 = (longlong *)param_1[0x38];
  local_4a8 = param_2;
  if (plVar15 != (longlong *)0x0) {
    (**(code **)(*plVar15 + 0x90))();
    param_1[0x38] = 0;
  }
  if ((longlong *)param_1[0x37] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x37] + 0x90))();
    param_1[0x37] = 0;
  }
  plVar15 = param_1 + 0x36;
  if ((longlong *)*plVar15 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*plVar15 + 0x60))();
    if ((longlong *)*plVar15 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar15 + 0x10))();
      *plVar15 = 0;
    }
  }
  lVar11 = -1;
  iVar3 = XAudio2Create(plVar15,0,0xffffffff);
  iVar13 = 0;
  if (iVar3 < 0) {
    uVar4 = XAudio2Create(param_1 + 0x36,0,0xffffffff);
    psVar5 = (short *)Audio::FMixerPlatformXAudio2::GetErrorString(param_1,uVar4);
    local_570 = (undefined2 *)0x0;
    local_564 = 0;
    if ((psVar5 != (short *)0x0) && (*psVar5 != 0)) {
      do {
        lVar11 = lVar11 + 1;
      } while (psVar5[lVar11] != 0);
      iVar3 = (int)lVar11 + 1;
      local_568 = iVar3;
      if (0 < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_570,0);
      }
      iVar13 = local_568;
      puVar10 = local_570;
      FGenericPlatformString::Memcpy(local_570,psVar5,(longlong)iVar3 * 2);
    }
    local_560 = (undefined2 *)0x0;
    local_558 = 0x62;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_560,0);
    puVar9 = local_560;
    local_598 = CONCAT22(local_598._2_2_,0x3f);
    FGenericPlatformString::Convert<char,wchar_t>
              (local_560,0x62,
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
              );
    local_598 = 0x218;
    puVar12 = &DAT_143f3eda8;
    if ((int)local_558 != 0) {
      puVar12 = puVar9;
    }
    puVar6 = &DAT_143f3eda8;
    if (iVar13 != 0) {
      puVar6 = puVar10;
    }
    FString::PrintfImpl(&local_550,L"Audio Platform Device Error: %s (File %s, Line %d)",puVar6,
                        puVar12);
    plVar15 = param_1 + 0x27;
    local_4f0 = local_550;
    if (plVar15 != &local_550) {
      if (*plVar15 != 0) {
        FMemory::Free();
      }
      *plVar15 = local_550;
      *(undefined4 *)(param_1 + 0x28) = local_548;
      *(undefined4 *)((longlong)param_1 + 0x144) = local_544;
      goto LAB_142a9c648;
    }
  }
  else {
    local_578[0] = 0;
    iVar3 = (**(code **)(*(longlong *)param_1[0x36] + 0x18))((longlong *)param_1[0x36],local_578);
    iVar13 = 0;
    if (iVar3 < 0) {
      uVar4 = (**(code **)(*(longlong *)*plVar15 + 0x18))((longlong *)*plVar15,local_578);
      psVar5 = (short *)Audio::FMixerPlatformXAudio2::GetErrorString(param_1,uVar4);
      local_540 = (undefined2 *)0x0;
      local_534 = 0;
      if ((psVar5 != (short *)0x0) && (*psVar5 != 0)) {
        do {
          lVar11 = lVar11 + 1;
        } while (psVar5[lVar11] != 0);
        iVar3 = (int)lVar11 + 1;
        local_538 = iVar3;
        if (0 < iVar3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_540,0);
        }
        iVar13 = local_538;
        puVar10 = local_540;
        FGenericPlatformString::Memcpy(local_540,psVar5,(longlong)iVar3 * 2);
      }
      local_530 = (undefined2 *)0x0;
      local_528 = 0x62;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_530,0);
      puVar9 = local_530;
      local_598 = CONCAT22(local_598._2_2_,0x3f);
      FGenericPlatformString::Convert<char,wchar_t>
                (local_530,0x62,
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
                );
      local_598 = 0x21b;
      puVar12 = &DAT_143f3eda8;
      if ((int)local_528 != 0) {
        puVar12 = puVar9;
      }
      puVar6 = &DAT_143f3eda8;
      if (iVar13 != 0) {
        puVar6 = puVar10;
      }
      FString::PrintfImpl(&local_520,L"Audio Platform Device Error: %s (File %s, Line %d)",puVar6,
                          puVar12);
      plVar15 = param_1 + 0x27;
      local_4f0 = local_520;
      if (plVar15 != &local_520) {
        if (*plVar15 != 0) {
          FMemory::Free();
        }
        *plVar15 = local_520;
        *(undefined4 *)(param_1 + 0x28) = local_518;
        *(undefined4 *)((longlong)param_1 + 0x144) = local_514;
        goto LAB_142a9c648;
      }
    }
    else {
      iVar3 = iVar13;
      if ((1 < *(int *)(param_2 + 1)) && (puVar9 = puVar10, iVar3 = 0, local_578[0] != 0)) {
LAB_142a9c270:
        iVar14 = (int)puVar9;
        (**(code **)(*(longlong *)param_1[0x36] + 0x20))((longlong *)param_1[0x36],puVar9,local_488)
        ;
        if (*(int *)(param_2 + 1) == 0) {
          pwVar8 = &DAT_143f3eda8;
        }
        else {
          pwVar8 = (wint_t *)*param_2;
        }
        lVar16 = (longlong)local_488 - (longlong)pwVar8;
        do {
          wVar1 = *(wint_t *)((longlong)pwVar8 + lVar16);
          iVar3 = iVar14;
          if ((wVar1 == 0) && (*pwVar8 == 0)) break;
          if (wVar1 != *pwVar8) {
            wVar1 = towlower(wVar1);
            wVar2 = towlower(*pwVar8);
            if (wVar1 != wVar2) goto LAB_142a9c2d2;
          }
          pwVar8 = pwVar8 + 1;
        } while( true );
      }
LAB_142a9c30c:
      *(int *)(param_1 + 3) = iVar3;
      (**(code **)(*param_1 + 0x68))(param_1,iVar3,param_1 + 4);
      local_590._0_4_ = (undefined4)param_1[3];
      local_588 = 0;
      local_598 = 0;
      iVar3 = (**(code **)(*(longlong *)param_1[0x36] + 0x50))
                        ((longlong *)param_1[0x36],param_1 + 0x37,(int)param_1[8],
                         *(undefined4 *)((longlong)param_1 + 0x44));
      plVar15 = (longlong *)param_1[0x36];
      if (iVar3 < 0) {
        local_588 = 0;
        local_590 = (longlong *)CONCAT44(local_590._4_4_,(int)param_1[3]);
        local_598 = 0;
        uVar4 = (**(code **)(*plVar15 + 0x50))
                          (plVar15,param_1 + 0x37,(int)param_1[8],
                           *(undefined4 *)((longlong)param_1 + 0x44));
        psVar5 = (short *)Audio::FMixerPlatformXAudio2::GetErrorString(param_1,uVar4);
        local_510 = (undefined2 *)0x0;
        local_504 = 0;
        if ((psVar5 != (short *)0x0) && (*psVar5 != 0)) {
          do {
            lVar11 = lVar11 + 1;
          } while (psVar5[lVar11] != 0);
          iVar3 = (int)lVar11 + 1;
          local_508 = iVar3;
          if (0 < iVar3) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_510,0);
          }
          iVar13 = local_508;
          puVar10 = local_510;
          FGenericPlatformString::Memcpy(local_510,psVar5,(longlong)iVar3 * 2);
        }
        local_500 = (undefined2 *)0x0;
        local_4f8 = 0x62;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_500,0);
        puVar9 = local_500;
        local_598 = CONCAT22(local_598._2_2_,0x3f);
        FGenericPlatformString::Convert<char,wchar_t>
                  (local_500,0x62,
                   "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
                  );
        local_598 = 0x234;
        puVar12 = &DAT_143f3eda8;
        if ((int)local_4f8 != 0) {
          puVar12 = puVar9;
        }
        puVar6 = &DAT_143f3eda8;
        if (iVar13 != 0) {
          puVar6 = puVar10;
        }
        FString::PrintfImpl(&local_4f0,L"Audio Platform Device Error: %s (File %s, Line %d)",puVar6,
                            puVar12);
        plVar15 = param_1 + 0x27;
        if (plVar15 != &local_4f0) {
          if (*plVar15 != 0) {
            FMemory::Free();
          }
          *plVar15 = local_4f0;
          *(undefined4 *)(param_1 + 0x28) = local_4e8;
          *(undefined4 *)((longlong)param_1 + 0x144) = local_4e4;
          goto LAB_142a9c648;
        }
      }
      else {
        local_49e = *(ushort *)(param_1 + 8);
        local_49c = (int)param_1[0x13];
        local_4a0 = 3;
        local_494 = local_49e << 2;
        local_580 = 0;
        local_498 = (uint)local_49e * local_49c * 4;
        local_492 = 0x20;
        local_588 = 0;
        local_598 = 0x40000000;
        local_590 = param_1 + 0x39;
        iVar3 = (**(code **)(*plVar15 + 0x40))(plVar15,param_1 + 0x38,&local_4a0,2);
        lVar16 = *(longlong *)param_1[0x36];
        if (-1 < iVar3) {
          (**(code **)(lVar16 + 0x58))();
          iVar13 = *(int *)((longlong)param_1 + 0x84);
          lVar11 = param_1[8];
          if (0 < (int)param_1[0x16]) {
            do {
              Audio::FOutputBuffer::Reset
                        ((longlong)(int)puVar10 * 0x30 + param_1[0x15],iVar13 * (int)lVar11);
              uVar7 = (int)puVar10 + 1;
              puVar10 = (undefined2 *)(ulonglong)uVar7;
            } while ((int)uVar7 < (int)param_1[0x16]);
          }
          LOCK();
          *(undefined4 *)(param_1 + 0x31) = 0;
          UNLOCK();
          return 1;
        }
        local_580 = 0;
        local_588 = 0;
        local_598 = 0x40000000;
        local_590 = param_1 + 0x39;
        uVar4 = (**(code **)(lVar16 + 0x40))((longlong *)param_1[0x36],param_1 + 0x38,&local_4a0,2);
        psVar5 = (short *)Audio::FMixerPlatformXAudio2::GetErrorString(param_1,uVar4);
        local_4e0 = (undefined2 *)0x0;
        local_4d4 = 0;
        if ((psVar5 != (short *)0x0) && (*psVar5 != 0)) {
          do {
            lVar11 = lVar11 + 1;
          } while (psVar5[lVar11] != 0);
          iVar3 = (int)lVar11 + 1;
          local_4d8 = iVar3;
          if (0 < iVar3) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4e0,0);
          }
          iVar13 = local_4d8;
          puVar10 = local_4e0;
          FGenericPlatformString::Memcpy(local_4e0,psVar5,(longlong)iVar3 * 2);
        }
        local_4d0 = (undefined2 *)0x0;
        local_4c8 = 0x62;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4d0,0);
        puVar9 = local_4d0;
        local_598 = CONCAT22(local_598._2_2_,0x3f);
        FGenericPlatformString::Convert<char,wchar_t>
                  (local_4d0,0x62,
                   "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
                  );
        local_598 = 0x240;
        puVar12 = &DAT_143f3eda8;
        if ((int)local_4c8 != 0) {
          puVar12 = puVar9;
        }
        puVar6 = &DAT_143f3eda8;
        if (iVar13 != 0) {
          puVar6 = puVar10;
        }
        FString::PrintfImpl(&local_4c0,L"Audio Platform Device Error: %s (File %s, Line %d)",puVar6,
                            puVar12);
        plVar15 = param_1 + 0x27;
        local_4f0 = local_4c0;
        if (plVar15 != &local_4c0) {
          if (*plVar15 != 0) {
            FMemory::Free();
          }
          *plVar15 = local_4c0;
          *(undefined4 *)(param_1 + 0x28) = local_4b8;
          *(undefined4 *)((longlong)param_1 + 0x144) = local_4b4;
          goto LAB_142a9c648;
        }
      }
    }
  }
  if (local_4f0 != 0) {
    FMemory::Free();
  }
LAB_142a9c648:
  if (puVar9 != (undefined2 *)0x0) {
    FMemory::Free(puVar9);
  }
  if (puVar10 != (undefined2 *)0x0) {
    FMemory::Free(puVar10);
  }
  return 0;
LAB_142a9c2d2:
  if ((wVar1 == wVar2) ||
     (puVar9 = (undefined2 *)(ulonglong)(iVar14 + 1U), param_2 = local_4a8, iVar3 = 0,
     local_578[0] <= iVar14 + 1U)) goto LAB_142a9c30c;
  goto LAB_142a9c270;
}



// FUNCTION 142a9c710 OnDefaultDeviceChanged body=1864 status=ok
// SIG undefined OnDefaultDeviceChanged(void)

undefined8
FWindowsMMNotificationClient::OnDefaultDeviceChanged
          (longlong param_1,int param_2,int param_3,short *param_4)

{
  longlong *plVar1;
  uint *puVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  undefined8 local_a8;
  uint *puStack_a0;
  uint local_98;
  uint uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  ulonglong local_80;
  longlong *local_78;
  undefined4 uStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  iVar7 = 0;
  if (param_3 == 0) {
    cVar5 = '\0';
  }
  else {
    cVar5 = (param_3 != 1) + '\x01';
  }
  plVar1 = (longlong *)(param_1 + 0x10);
  uVar10 = *(uint *)(param_1 + 0x38);
  puVar2 = (uint *)(param_1 + 0x20);
  uStack_94 = 0;
  iStack_90 = 0;
  local_a8 = 0x100000000;
  puStack_a0 = puVar2;
  local_68 = puVar2;
  local_50 = plVar1;
  puStack_40 = puVar2;
  local_78 = plVar1;
  if (param_2 == 0) {
    if (uVar10 != 0) {
      puVar12 = *(uint **)(param_1 + 0x30);
      if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
        puVar12 = puVar2;
      }
      uVar6 = *puVar12;
      while (uVar6 == 0) {
        iStack_90 = iStack_90 + 0x20;
        local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
        local_a8 = CONCAT44(local_a8._4_4_,iVar7 + 1);
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
        goto LAB_142a9c81c;
        uVar6 = puVar12[(longlong)iVar7 + 1];
        iVar7 = iVar7 + 1;
      }
      uVar6 = -uVar6 & uVar6;
      iVar7 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      local_a8 = CONCAT44(uVar6,(undefined4)local_a8);
      if (uVar6 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      uStack_94 = (iStack_90 - iVar7) + 0x1f;
      if ((int)uVar10 < (int)uStack_94) {
LAB_142a9c81c:
        uStack_94 = uVar10;
      }
    }
    uVar6 = *(uint *)(param_1 + 0x38);
    uStack_60 = 0xffffffff;
    uStack_5c = uStack_94;
    local_58 = CONCAT44(uStack_8c,iStack_90);
    local_98 = -1 << ((byte)uVar6 & 0x1f);
    uStack_48 = local_a8;
    lVar8 = uStack_48;
    uVar11 = uVar6 & 0xffffffe0;
    uStack_48._0_4_ = (undefined4)local_a8;
    uStack_48._4_4_ = (uint)((ulonglong)local_a8 >> 0x20);
    uStack_70 = (undefined4)uStack_48;
    uStack_6c = uStack_48._4_4_;
    uStack_94 = uVar6;
    uStack_48 = lVar8;
    uStack_30 = local_58;
    uStack_38 = uStack_60;
    uStack_34 = uStack_5c;
    if (uVar6 != uVar10) {
      puVar12 = *(uint **)(param_1 + 0x30);
      if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
        puVar12 = puVar2;
      }
      uVar9 = puVar12[(int)uVar6 >> 5] & local_98;
      iVar7 = (int)uVar6 >> 5;
      while (uVar9 == 0) {
        uVar11 = uVar11 + 0x20;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
        goto LAB_142a9c8e4;
        uVar9 = puVar12[(longlong)iVar7 + 1];
        local_98 = 0xffffffff;
        iVar7 = iVar7 + 1;
      }
      uVar9 = -uVar9 & uVar9;
      iVar7 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uVar9 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      uStack_94 = (uVar11 - iVar7) + 0x1f;
      uVar6 = uStack_94;
      if ((int)uVar10 < (int)uStack_94) {
LAB_142a9c8e4:
        uStack_94 = uVar10;
        uVar6 = uVar10;
      }
    }
    while (((uStack_5c != uVar6 || (local_68 != puVar2)) || (local_78 != plVar1))) {
      local_80 = 0;
      plVar3 = *(longlong **)(*local_78 + (longlong)(int)uStack_5c * 0x10);
      local_88 = 0;
      if ((param_4 != (short *)0x0) && (*param_4 != 0)) {
        lVar8 = -1;
        do {
          lVar4 = lVar8 + 1;
          lVar8 = lVar8 + 1;
        } while (param_4[lVar4] != 0);
        uVar10 = (int)lVar8 + 1;
        local_80 = (ulonglong)uVar10;
        if (0 < (int)uVar10) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
        }
        FGenericPlatformString::Memcpy(local_88,param_4,(longlong)(int)uVar10 * 2);
      }
      (**(code **)(*plVar3 + 0x18))(plVar3,cVar5,&local_88);
      if (local_88 != 0) {
        FMemory::Free();
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    }
  }
  else if (param_2 == 1) {
    if (uVar10 != 0) {
      puVar12 = *(uint **)(param_1 + 0x30);
      if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
        puVar12 = puVar2;
      }
      uVar6 = *puVar12;
      iStack_90 = iVar7;
      while (uVar6 == 0) {
        iStack_90 = iStack_90 + 0x20;
        local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
        local_a8 = CONCAT44(local_a8._4_4_,iVar7 + 1);
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
        goto LAB_142a9ca2c;
        uVar6 = puVar12[(longlong)iVar7 + 1];
        iVar7 = iVar7 + 1;
      }
      uVar6 = -uVar6 & uVar6;
      iVar7 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      local_a8 = CONCAT44(uVar6,(undefined4)local_a8);
      if (uVar6 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      uStack_94 = (iStack_90 - iVar7) + 0x1f;
      if ((int)uVar10 < (int)uStack_94) {
LAB_142a9ca2c:
        uStack_94 = uVar10;
      }
    }
    uVar6 = *(uint *)(param_1 + 0x38);
    uStack_60 = 0xffffffff;
    uStack_5c = uStack_94;
    local_58 = CONCAT44(uStack_8c,iStack_90);
    local_98 = -1 << ((byte)uVar6 & 0x1f);
    uStack_48 = local_a8;
    lVar8 = uStack_48;
    uVar11 = uVar6 & 0xffffffe0;
    uStack_48._0_4_ = (undefined4)local_a8;
    uStack_48._4_4_ = (uint)((ulonglong)local_a8 >> 0x20);
    uStack_70 = (undefined4)uStack_48;
    uStack_6c = uStack_48._4_4_;
    uStack_94 = uVar6;
    uStack_48 = lVar8;
    uStack_30 = local_58;
    uStack_38 = uStack_60;
    uStack_34 = uStack_5c;
    if (uVar6 != uVar10) {
      puVar12 = *(uint **)(param_1 + 0x30);
      if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
        puVar12 = puVar2;
      }
      uVar9 = puVar12[(int)uVar6 >> 5] & local_98;
      iVar7 = (int)uVar6 >> 5;
      while (uVar9 == 0) {
        uVar11 = uVar11 + 0x20;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
        goto LAB_142a9caf4;
        uVar9 = puVar12[(longlong)iVar7 + 1];
        local_98 = 0xffffffff;
        iVar7 = iVar7 + 1;
      }
      uVar9 = -uVar9 & uVar9;
      iVar7 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uVar9 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      uStack_94 = (uVar11 - iVar7) + 0x1f;
      uVar6 = uStack_94;
      if ((int)uVar10 < (int)uStack_94) {
LAB_142a9caf4:
        uStack_94 = uVar10;
        uVar6 = uVar10;
      }
    }
    while (((uStack_5c != uVar6 || (local_68 != puVar2)) || (local_78 != plVar1))) {
      local_80 = 0;
      plVar3 = *(longlong **)(*local_78 + (longlong)(int)uStack_5c * 0x10);
      local_88 = 0;
      if ((param_4 != (short *)0x0) && (*param_4 != 0)) {
        lVar8 = -1;
        do {
          lVar4 = lVar8 + 1;
          lVar8 = lVar8 + 1;
        } while (param_4[lVar4] != 0);
        uVar10 = (int)lVar8 + 1;
        local_80 = (ulonglong)uVar10;
        if (0 < (int)uVar10) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
        }
        FGenericPlatformString::Memcpy(local_88,param_4,(longlong)(int)uVar10 * 2);
      }
      (**(code **)(*plVar3 + 0x10))(plVar3,cVar5,&local_88);
      if (local_88 != 0) {
        FMemory::Free();
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    }
  }
  else {
    if (uVar10 != 0) {
      puVar12 = *(uint **)(param_1 + 0x30);
      if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
        puVar12 = puVar2;
      }
      uVar6 = *puVar12;
      iStack_90 = iVar7;
      while (uVar6 == 0) {
        iStack_90 = iStack_90 + 0x20;
        local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
        local_a8 = CONCAT44(local_a8._4_4_,iVar7 + 1);
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
        goto LAB_142a9cc2c;
        uVar6 = puVar12[(longlong)iVar7 + 1];
        iVar7 = iVar7 + 1;
      }
      uVar6 = -uVar6 & uVar6;
      iVar7 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      local_a8 = CONCAT44(uVar6,(undefined4)local_a8);
      if (uVar6 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      uStack_94 = (iStack_90 - iVar7) + 0x1f;
      if ((int)uVar10 < (int)uStack_94) {
LAB_142a9cc2c:
        uStack_94 = uVar10;
      }
    }
    uVar6 = *(uint *)(param_1 + 0x38);
    uStack_60 = 0xffffffff;
    uStack_5c = uStack_94;
    local_58 = CONCAT44(uStack_8c,iStack_90);
    local_98 = -1 << ((byte)uVar6 & 0x1f);
    uStack_48 = local_a8;
    lVar8 = uStack_48;
    uVar11 = uVar6 & 0xffffffe0;
    uStack_48._0_4_ = (undefined4)local_a8;
    uStack_48._4_4_ = (uint)((ulonglong)local_a8 >> 0x20);
    uStack_70 = (undefined4)uStack_48;
    uStack_6c = uStack_48._4_4_;
    uStack_94 = uVar6;
    uStack_48 = lVar8;
    uStack_30 = local_58;
    uStack_38 = uStack_60;
    uStack_34 = uStack_5c;
    if (uVar6 != uVar10) {
      puVar12 = *(uint **)(param_1 + 0x30);
      if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
        puVar12 = puVar2;
      }
      uVar9 = puVar12[(int)uVar6 >> 5] & local_98;
      iVar7 = (int)uVar6 >> 5;
      while (uVar9 == 0) {
        uVar11 = uVar11 + 0x20;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
        goto LAB_142a9ccf4;
        uVar9 = puVar12[(longlong)iVar7 + 1];
        local_98 = 0xffffffff;
        iVar7 = iVar7 + 1;
      }
      uVar9 = -uVar9 & uVar9;
      iVar7 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uVar9 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      uStack_94 = (uVar11 - iVar7) + 0x1f;
      uVar6 = uStack_94;
      if ((int)uVar10 < (int)uStack_94) {
LAB_142a9ccf4:
        uStack_94 = uVar10;
        uVar6 = uVar10;
      }
    }
    while (((uStack_5c != uVar6 || (local_68 != puVar2)) || (local_78 != plVar1))) {
      local_80 = 0;
      plVar3 = *(longlong **)(*local_78 + (longlong)(int)uStack_5c * 0x10);
      local_88 = 0;
      if ((param_4 != (short *)0x0) && (*param_4 != 0)) {
        lVar8 = -1;
        do {
          lVar4 = lVar8 + 1;
          lVar8 = lVar8 + 1;
        } while (param_4[lVar4] != 0);
        uVar10 = (int)lVar8 + 1;
        local_80 = (ulonglong)uVar10;
        if (0 < (int)uVar10) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
        }
        FGenericPlatformString::Memcpy(local_88,param_4,(longlong)(int)uVar10 * 2);
      }
      (**(code **)(*plVar3 + 0x10))(plVar3,cVar5,&local_88);
      if (local_88 != 0) {
        FMemory::Free();
      }
      puStack_a0 = (uint *)0x0;
      local_a8 = 0;
      if ((param_4 != (short *)0x0) && (*param_4 != 0)) {
        lVar8 = -1;
        do {
          lVar4 = lVar8 + 1;
          lVar8 = lVar8 + 1;
        } while (param_4[lVar4] != 0);
        uVar10 = (int)lVar8 + 1;
        puStack_a0 = (uint *)(ulonglong)uVar10;
        if (0 < (int)uVar10) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
        }
        FGenericPlatformString::Memcpy(local_a8,param_4,(longlong)(int)uVar10 * 2);
      }
      (**(code **)(*plVar3 + 0x18))(plVar3,cVar5,&local_a8);
      if (local_a8 != 0) {
        FMemory::Free();
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    }
  }
  return 0;
}



// FUNCTION 142a9ce60 OnDefaultRenderDeviceChanged body=114 status=ok
// SIG undefined OnDefaultRenderDeviceChanged(void)

void Audio::FMixerPlatformXAudio2::OnDefaultRenderDeviceChanged(longlong param_1)

{
  longlong *plVar1;
  BOOL BVar2;
  longlong local_18 [2];
  
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c0));
  if (BVar2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x1f8);
    if (plVar1 != local_18) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = 0;
      *(undefined8 *)(param_1 + 0x200) = 0;
    }
    LOCK();
    *(undefined4 *)(param_1 + 0x208) = 1;
    UNLOCK();
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c0));
  }
  return;
}



// FUNCTION 142a9cee0 OnDeviceAdded body=218 status=ok
// SIG undefined OnDeviceAdded(void)

void Audio::FMixerPlatformXAudio2::OnDeviceAdded(longlong param_1,undefined8 *param_2)

{
  BOOL BVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c0));
  if (BVar1 != 0) {
    puVar5 = &DAT_143f3eda8;
    if (*(int *)(param_1 + 0x1f0) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = *(undefined2 **)(param_1 + 0x1e8);
    }
    if (*(int *)(param_1 + 0x28) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = *(undefined2 **)(param_1 + 0x20);
    }
    iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar4);
    if (iVar2 != 0) {
      if (*(int *)(param_1 + 0x1f0) == 0) {
        puVar4 = &DAT_143f3eda8;
      }
      else {
        puVar4 = *(undefined2 **)(param_1 + 0x1e8);
      }
      if (*(int *)(param_2 + 1) != 0) {
        puVar5 = (undefined2 *)*param_2;
      }
      iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar4);
      if (iVar2 == 0) {
        FString::operator=(param_1 + 0x1f8,param_1 + 0x1e8);
        LOCK();
        *(undefined4 *)(param_1 + 0x208) = 1;
        UNLOCK();
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c0));
  }
  return;
}



// FUNCTION 142a9cfc0 OnDeviceAdded body=632 status=ok
// SIG undefined OnDeviceAdded(void)

undefined8 FWindowsMMNotificationClient::OnDeviceAdded(longlong param_1,short *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  undefined8 local_98;
  ulonglong uStack_90;
  uint local_88;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  longlong *local_50;
  int iStack_48;
  uint uStack_44;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  uVar10 = *(uint *)(param_1 + 0x38);
  puVar2 = (uint *)(param_1 + 0x20);
  local_98._0_4_ = 0;
  local_98._4_4_ = 1;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar10 != 0) {
    puVar12 = *(uint **)(param_1 + 0x30);
    if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
      puVar12 = puVar2;
    }
    uVar3 = *puVar12;
    while (uVar3 == 0) {
      lVar9 = (longlong)(int)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar7 = (int)local_98 + 1;
      bVar5 = (int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 <= (int)local_98;
      local_98._0_4_ = iVar7;
      if (bVar5) goto LAB_142a9d09c;
      uVar3 = puVar12[lVar9 + 1];
    }
    local_98._4_4_ = -uVar3 & uVar3;
    iVar7 = 0x1f;
    if (local_98._4_4_ != 0) {
      for (; local_98._4_4_ >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (local_98._4_4_ == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_84 = (iStack_80 - iVar7) + 0x1f;
    if ((int)uVar10 < (int)uStack_84) {
LAB_142a9d09c:
      uStack_84 = uVar10;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x38);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  local_88 = -1 << ((byte)uVar3 & 0x1f);
  iStack_48 = (int)local_98;
  uStack_44 = local_98._4_4_;
  uVar11 = uVar3 & 0xffffffe0;
  iStack_70 = (int)local_98;
  uStack_6c = local_98._4_4_;
  uStack_84 = uVar3;
  local_68 = puVar2;
  local_50 = plVar1;
  puStack_40 = puVar2;
  uStack_30 = local_58;
  local_78 = plVar1;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  if (uVar3 != uVar10) {
    puVar12 = *(uint **)(param_1 + 0x30);
    if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
      puVar12 = puVar2;
    }
    uVar8 = puVar12[(int)uVar3 >> 5] & local_88;
    iVar7 = (int)uVar3 >> 5;
    while (uVar8 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
      goto LAB_142a9d162;
      uVar8 = puVar12[(longlong)iVar7 + 1];
      local_88 = 0xffffffff;
      iVar7 = iVar7 + 1;
    }
    uVar8 = -uVar8 & uVar8;
    iVar7 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_84 = (uVar11 - iVar7) + 0x1f;
    uVar3 = uStack_84;
    if ((int)uVar10 < (int)uStack_84) {
LAB_142a9d162:
      uStack_84 = uVar10;
      uVar3 = uVar10;
    }
  }
  while (((uStack_5c != uVar3 || (local_68 != puVar2)) || (local_78 != plVar1))) {
    uStack_90 = 0;
    plVar4 = *(longlong **)(*local_78 + (longlong)(int)uStack_5c * 0x10);
    local_98 = 0;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      lVar9 = -1;
      do {
        lVar6 = lVar9 + 1;
        lVar9 = lVar9 + 1;
      } while (param_2[lVar6] != 0);
      uVar10 = (int)lVar9 + 1;
      uStack_90 = (ulonglong)uVar10;
      if (0 < (int)uVar10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
      }
      FGenericPlatformString::Memcpy(local_98,param_2,(longlong)(int)uVar10 * 2);
    }
    (**(code **)(*plVar4 + 0x20))(plVar4);
    if (local_98 != 0) {
      FMemory::Free();
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  return 0;
}



// FUNCTION 142a9d240 OnDeviceRemoved body=157 status=ok
// SIG undefined OnDeviceRemoved(void)

void Audio::FMixerPlatformXAudio2::OnDeviceRemoved(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  BOOL BVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  longlong local_18 [2];
  
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c0));
  if (BVar2 != 0) {
    puVar4 = &DAT_143f3eda8;
    if (*(int *)(param_2 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*param_2;
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      puVar4 = *(undefined2 **)(param_1 + 0x20);
    }
    iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
    if (iVar3 == 0) {
      plVar1 = (longlong *)(param_1 + 0x1f8);
      if (plVar1 != local_18) {
        if (*plVar1 != 0) {
          FMemory::Free();
        }
        *plVar1 = 0;
        *(undefined8 *)(param_1 + 0x200) = 0;
      }
      LOCK();
      *(undefined4 *)(param_1 + 0x208) = 1;
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c0));
  }
  return;
}



// FUNCTION 142a9d2e0 OnDeviceRemoved body=632 status=ok
// SIG undefined OnDeviceRemoved(void)

undefined8 FWindowsMMNotificationClient::OnDeviceRemoved(longlong param_1,short *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  undefined8 local_98;
  ulonglong uStack_90;
  uint local_88;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  longlong *local_50;
  int iStack_48;
  uint uStack_44;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  uVar10 = *(uint *)(param_1 + 0x38);
  puVar2 = (uint *)(param_1 + 0x20);
  local_98._0_4_ = 0;
  local_98._4_4_ = 1;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar10 != 0) {
    puVar12 = *(uint **)(param_1 + 0x30);
    if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
      puVar12 = puVar2;
    }
    uVar3 = *puVar12;
    while (uVar3 == 0) {
      lVar9 = (longlong)(int)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar7 = (int)local_98 + 1;
      bVar5 = (int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 <= (int)local_98;
      local_98._0_4_ = iVar7;
      if (bVar5) goto LAB_142a9d3bc;
      uVar3 = puVar12[lVar9 + 1];
    }
    local_98._4_4_ = -uVar3 & uVar3;
    iVar7 = 0x1f;
    if (local_98._4_4_ != 0) {
      for (; local_98._4_4_ >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (local_98._4_4_ == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_84 = (iStack_80 - iVar7) + 0x1f;
    if ((int)uVar10 < (int)uStack_84) {
LAB_142a9d3bc:
      uStack_84 = uVar10;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x38);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  local_88 = -1 << ((byte)uVar3 & 0x1f);
  iStack_48 = (int)local_98;
  uStack_44 = local_98._4_4_;
  uVar11 = uVar3 & 0xffffffe0;
  iStack_70 = (int)local_98;
  uStack_6c = local_98._4_4_;
  uStack_84 = uVar3;
  local_68 = puVar2;
  local_50 = plVar1;
  puStack_40 = puVar2;
  uStack_30 = local_58;
  local_78 = plVar1;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  if (uVar3 != uVar10) {
    puVar12 = *(uint **)(param_1 + 0x30);
    if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
      puVar12 = puVar2;
    }
    uVar8 = puVar12[(int)uVar3 >> 5] & local_88;
    iVar7 = (int)uVar3 >> 5;
    while (uVar8 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
      goto LAB_142a9d482;
      uVar8 = puVar12[(longlong)iVar7 + 1];
      local_88 = 0xffffffff;
      iVar7 = iVar7 + 1;
    }
    uVar8 = -uVar8 & uVar8;
    iVar7 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_84 = (uVar11 - iVar7) + 0x1f;
    uVar3 = uStack_84;
    if ((int)uVar10 < (int)uStack_84) {
LAB_142a9d482:
      uStack_84 = uVar10;
      uVar3 = uVar10;
    }
  }
  while (((uStack_5c != uVar3 || (local_68 != puVar2)) || (local_78 != plVar1))) {
    uStack_90 = 0;
    plVar4 = *(longlong **)(*local_78 + (longlong)(int)uStack_5c * 0x10);
    local_98 = 0;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      lVar9 = -1;
      do {
        lVar6 = lVar9 + 1;
        lVar9 = lVar9 + 1;
      } while (param_2[lVar6] != 0);
      uVar10 = (int)lVar9 + 1;
      uStack_90 = (ulonglong)uVar10;
      if (0 < (int)uVar10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
      }
      FGenericPlatformString::Memcpy(local_98,param_2,(longlong)(int)uVar10 * 2);
    }
    (**(code **)(*plVar4 + 0x28))(plVar4);
    if (local_98 != 0) {
      FMemory::Free();
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  return 0;
}



// FUNCTION 142a9d560 FUN_142a9d560 body=673 status=ok
// SIG undefined FUN_142a9d560(void)

undefined8 FUN_142a9d560(longlong param_1,short *param_2,int param_3)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  undefined8 local_98;
  ulonglong uStack_90;
  uint local_88;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  longlong *local_50;
  int iStack_48;
  uint uStack_44;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  if (((param_3 - 2U & 0xfffffff9) == 0) && (param_3 != 6)) {
    plVar1 = (longlong *)(param_1 + 0x10);
    uVar10 = *(uint *)(param_1 + 0x38);
    puVar2 = (uint *)(param_1 + 0x20);
    local_98._0_4_ = 0;
    local_98._4_4_ = 1;
    uStack_84 = 0;
    iStack_80 = 0;
    if (uVar10 != 0) {
      puVar12 = *(uint **)(param_1 + 0x30);
      if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
        puVar12 = puVar2;
      }
      uVar3 = *puVar12;
      local_98._0_4_ = 0;
      iStack_80 = 0;
      while (uVar3 == 0) {
        lVar9 = (longlong)(int)local_98;
        iStack_80 = iStack_80 + 0x20;
        iVar7 = (int)local_98 + 1;
        bVar5 = (int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 <= (int)local_98;
        local_98._0_4_ = iVar7;
        if (bVar5) goto LAB_142a9d64c;
        uVar3 = puVar12[lVar9 + 1];
      }
      local_98._4_4_ = -uVar3 & uVar3;
      iVar7 = 0x1f;
      if (local_98._4_4_ != 0) {
        for (; local_98._4_4_ >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (local_98._4_4_ == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      uStack_84 = (iStack_80 - iVar7) + 0x1f;
      if ((int)uVar10 < (int)uStack_84) {
LAB_142a9d64c:
        uStack_84 = uVar10;
      }
    }
    uVar3 = *(uint *)(param_1 + 0x38);
    uStack_60 = 0xffffffff;
    uStack_5c = uStack_84;
    local_58 = CONCAT44(uStack_7c,iStack_80);
    local_88 = -1 << ((byte)uVar3 & 0x1f);
    iStack_48 = (int)local_98;
    uStack_44 = local_98._4_4_;
    uVar11 = uVar3 & 0xffffffe0;
    iStack_70 = (int)local_98;
    uStack_6c = local_98._4_4_;
    uStack_84 = uVar3;
    local_68 = puVar2;
    local_50 = plVar1;
    puStack_40 = puVar2;
    uStack_30 = local_58;
    local_78 = plVar1;
    uStack_38 = uStack_60;
    uStack_34 = uStack_5c;
    if (uVar3 != uVar10) {
      puVar12 = *(uint **)(param_1 + 0x30);
      if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
        puVar12 = puVar2;
      }
      uVar8 = puVar12[(int)uVar3 >> 5] & local_88;
      iVar7 = (int)uVar3 >> 5;
      while (uVar8 == 0) {
        uVar11 = uVar11 + 0x20;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
        goto LAB_142a9d712;
        uVar8 = puVar12[(longlong)iVar7 + 1];
        local_88 = 0xffffffff;
        iVar7 = iVar7 + 1;
      }
      uVar8 = -uVar8 & uVar8;
      iVar7 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uVar8 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      uStack_84 = (uVar11 - iVar7) + 0x1f;
      uVar3 = uStack_84;
      if ((int)uVar10 < (int)uStack_84) {
LAB_142a9d712:
        uStack_84 = uVar10;
        uVar3 = uVar10;
      }
    }
    while (((uStack_5c != uVar3 || (local_68 != puVar2)) || (local_78 != plVar1))) {
      uStack_90 = 0;
      plVar4 = *(longlong **)(*local_78 + (longlong)(int)uStack_5c * 0x10);
      local_98 = 0;
      if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
        lVar9 = -1;
        do {
          lVar6 = lVar9 + 1;
          lVar9 = lVar9 + 1;
        } while (param_2[lVar6] != 0);
        uVar10 = (int)lVar9 + 1;
        uStack_90 = (ulonglong)uVar10;
        if (0 < (int)uVar10) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
        }
        FGenericPlatformString::Memcpy(local_98,param_2,(longlong)(int)uVar10 * 2);
      }
      (**(code **)(*plVar4 + 0x28))(plVar4);
      if (local_98 != 0) {
        FMemory::Free();
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
    }
  }
  return 0;
}



// FUNCTION 142a9d810 FUN_142a9d810 body=848 status=ok
// SIG undefined FUN_142a9d810(void)

undefined8 FUN_142a9d810(longlong param_1,short *param_2,longlong *param_3)

{
  longlong *plVar1;
  uint *puVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  uint *puVar13;
  undefined8 local_98;
  uint *puStack_90;
  uint local_88;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  uint uStack_6c;
  uint *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  lVar11 = 0;
  local_98 = 0;
  puStack_90 = (uint *)0x0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar11 = -1;
    do {
      lVar11 = lVar11 + 1;
    } while (param_2[lVar11] != 0);
    uVar10 = (int)lVar11 + 1;
    puStack_90 = (uint *)(ulonglong)uVar10;
    if (0 < (int)uVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
    }
    lVar11 = local_98;
    FGenericPlatformString::Memcpy(local_98,param_2);
  }
  if ((((*param_3 == 0x4eddd4921da5d803) && (param_3[1] == 0xe7feeffc0e0238c)) ||
      ((*param_3 == 0x4e27082cf19f064d && (param_3[1] == 0x4c8ebba1826873bc)))) ||
     ((local_78 = (longlong *)CONCAT44(local_78._4_4_,(undefined4)local_78),
      *param_3 == 0x4cd23cc5e4870e26 &&
      (local_78 = (longlong *)CONCAT44(local_78._4_4_,(undefined4)local_78),
      param_3[1] == 0x4ed709a0aca46ba)))) {
    plVar1 = (longlong *)(param_1 + 0x10);
    uVar10 = *(uint *)(param_1 + 0x38);
    puVar2 = (uint *)(param_1 + 0x20);
    local_98 = 0x100000000;
    uStack_84 = 0;
    iStack_80 = 0;
    if (uVar10 != 0) {
      puVar13 = *(uint **)(param_1 + 0x30);
      if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
        puVar13 = puVar2;
      }
      uVar6 = *puVar13;
      iStack_80 = 0;
      iVar7 = 0;
      while (uVar6 == 0) {
        iStack_80 = iStack_80 + 0x20;
        uVar5 = (ulonglong)local_98 >> 0x20;
        local_98 = CONCAT44((int)uVar5,iVar7 + 1);
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
        goto LAB_142a9d99c;
        uVar6 = puVar13[(longlong)iVar7 + 1];
        iVar7 = iVar7 + 1;
      }
      uVar6 = -uVar6 & uVar6;
      iVar7 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      local_98 = CONCAT44(uVar6,(undefined4)local_98);
      if (uVar6 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      uStack_84 = (iStack_80 - iVar7) + 0x1f;
      if ((int)uVar10 < (int)uStack_84) {
LAB_142a9d99c:
        uStack_84 = uVar10;
      }
    }
    uVar6 = *(uint *)(param_1 + 0x38);
    uStack_60 = CONCAT44(uStack_84,0xffffffff);
    local_58 = CONCAT44(uStack_7c,iStack_80);
    local_88 = -1 << ((byte)uVar6 & 0x1f);
    uStack_48 = local_98;
    lVar8 = uStack_48;
    uVar12 = uVar6 & 0xffffffe0;
    uStack_48._0_4_ = (undefined4)local_98;
    uStack_48._4_4_ = (uint)((ulonglong)local_98 >> 0x20);
    uStack_70 = (undefined4)uStack_48;
    uStack_6c = uStack_48._4_4_;
    puStack_90 = puVar2;
    uStack_84 = uVar6;
    local_68 = puVar2;
    local_50 = plVar1;
    uStack_48 = lVar8;
    puStack_40 = puVar2;
    uStack_38 = uStack_60;
    uStack_30 = local_58;
    local_78 = plVar1;
    if (uVar6 != uVar10) {
      puVar13 = *(uint **)(param_1 + 0x30);
      if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
        puVar13 = puVar2;
      }
      uVar9 = puVar13[(int)uVar6 >> 5] & local_88;
      iVar7 = (int)uVar6 >> 5;
      while (uVar9 == 0) {
        uVar12 = uVar12 + 0x20;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
        goto LAB_142a9da62;
        uVar9 = puVar13[(longlong)iVar7 + 1];
        local_88 = 0xffffffff;
        iVar7 = iVar7 + 1;
      }
      uVar9 = -uVar9 & uVar9;
      iVar7 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uVar9 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      uStack_84 = (uVar12 - iVar7) + 0x1f;
      uVar6 = uStack_84;
      if ((int)uVar10 < (int)uStack_84) {
LAB_142a9da62:
        uStack_84 = uVar10;
        uVar6 = uVar10;
      }
    }
    while( true ) {
      if (((uStack_60._4_4_ == uVar6) && (local_68 == puVar2)) && (local_78 == plVar1)) break;
      plVar3 = *(longlong **)(*local_78 + (longlong)(int)uStack_60._4_4_ * 0x10);
      local_98 = 0;
      puStack_90 = (uint *)0x0;
      if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
        lVar8 = -1;
        do {
          lVar4 = lVar8 + 1;
          lVar8 = lVar8 + 1;
        } while (param_2[lVar4] != 0);
        uVar10 = (int)lVar8 + 1;
        puStack_90 = (uint *)(ulonglong)uVar10;
        if (0 < (int)uVar10) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
        }
        FGenericPlatformString::Memcpy(local_98,param_2,(longlong)(int)uVar10 * 2);
      }
      (**(code **)(*plVar3 + 0x28))(plVar3);
      if (local_98 != 0) {
        FMemory::Free();
      }
      uStack_60 = CONCAT44(uStack_60._4_4_,(uint)uStack_60 & ~uStack_6c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    }
  }
  if (lVar11 != 0) {
    FMemory::Free(lVar11);
  }
  return 0;
}



// FUNCTION 142a9db60 FUN_142a9db60 body=1540 status=ok
// SIG undefined FUN_142a9db60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142a9db60(longlong *param_1,longlong *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined2 **ppuVar4;
  short *psVar5;
  uint uVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined2 **ppuVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  uint uVar13;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined2 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  puVar7 = (undefined2 *)0x0;
  if ((*(uint *)((longlong)param_1 + 0x21c) & 2) == 0) {
    local_78 = (undefined2 *)0x0;
    local_70 = 0x1d;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    puVar7 = local_78;
    FGenericPlatformString::Memcpy(local_78,L"XAudio2 was not initialized.",0x3a);
    local_68 = (undefined2 *)0x0;
    local_60 = 0x62;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    puVar9 = local_68;
    local_98 = CONCAT22(local_98._2_2_,0x3f);
    FGenericPlatformString::Convert<char,wchar_t>
              (local_68,0x62,
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
              );
    local_98 = 0x141;
    puVar12 = &DAT_143f3eda8;
    if ((int)local_60 != 0) {
      puVar12 = puVar9;
    }
    iVar3 = (uint)local_70;
LAB_142a9dc22:
    puVar11 = &DAT_143f3eda8;
    if (iVar3 != 0) {
      puVar11 = puVar7;
    }
    FString::PrintfImpl(&local_78,L"Audio Platform Device Error: %s (File %s, Line %d)",puVar11,
                        puVar12);
    ppuVar4 = &local_78;
    ppuVar10 = (undefined2 **)(param_1 + 0x27);
    if (ppuVar10 == ppuVar4) {
      if (local_78 != (undefined2 *)0x0) {
        ppuVar4 = (undefined2 **)FMemory::Free();
      }
    }
    else {
      if (*ppuVar10 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      *ppuVar10 = local_78;
      *(uint *)(param_1 + 0x28) = (uint)local_70;
      ppuVar4 = (undefined2 **)(ulonglong)local_70._4_4_;
      *(uint *)((longlong)param_1 + 0x144) = local_70._4_4_;
    }
    if (puVar9 != (undefined2 *)0x0) {
      ppuVar4 = (undefined2 **)FMemory::Free(puVar9);
    }
  }
  else {
    if ((*(uint *)((longlong)param_1 + 0x21c) & 4) != 0) {
      local_68 = (undefined2 *)0x0;
      local_60 = 0x25;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
      puVar7 = local_68;
      FGenericPlatformString::Memcpy(local_68,L"XAudio2 audio stream already opened.",0x4a);
      local_78 = (undefined2 *)0x0;
      local_70 = 0x62;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
      puVar9 = local_78;
      local_98 = CONCAT22(local_98._2_2_,0x3f);
      FGenericPlatformString::Convert<char,wchar_t>
                (local_78,0x62,
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
                );
      local_98 = 0x147;
      puVar12 = &DAT_143f3eda8;
      if ((uint)local_70 != 0) {
        puVar12 = puVar9;
      }
      iVar3 = (int)local_60;
      goto LAB_142a9dc22;
    }
    lVar8 = param_2[1];
    local_58 = 0;
    param_1[0x10] = *param_2;
    param_1[0x11] = lVar8;
    local_50 = 0;
    iVar3 = *(int *)((longlong)param_2 + 0x14);
    lVar8 = param_2[3];
    iVar2 = *(int *)((longlong)param_2 + 0x1c);
    local_48 = 0;
    *(int *)(param_1 + 0x12) = (int)param_2[2];
    *(int *)((longlong)param_1 + 0x94) = iVar3;
    *(int *)(param_1 + 0x13) = (int)lVar8;
    *(int *)((longlong)param_1 + 0x9c) = iVar2;
    param_1[0x14] = param_2[4];
    if ((int)*param_2 == -1) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 3) = 0;
    Audio::FAudioPlatformDeviceInfo::Reset(param_1 + 4);
    *(undefined4 *)(param_1 + 0xd) = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 2;
    *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_1 + 0x84);
    *(int *)(param_1 + 0xf) = (int)param_1[0x11];
    param_1[0xe] = param_1[0x12];
    *(int *)(param_1 + 3) = (int)param_1[0x10];
    ppuVar4 = (undefined2 **)(**(code **)(*param_1 + 0x68))(param_1,(int)param_1[0x10],param_1 + 4);
    if ((char)ppuVar4 == '\0') goto LAB_142a9dd2f;
    if (*(char *)((longlong)param_2 + 0x1c) != '\0') {
      FString::operator=(param_1 + 0x3f,param_1 + 6);
    }
    local_88 = 0;
    local_90 = (longlong *)CONCAT44(local_90._4_4_,(int)param_1[3]);
    local_98 = 0;
    iVar3 = (**(code **)(*(longlong *)param_1[0x36] + 0x50))
                      ((longlong *)param_1[0x36],param_1 + 0x37,(int)param_1[8],
                       *(undefined4 *)((longlong)param_1 + 0x44));
    if (iVar3 < 0) {
      psVar5 = (short *)Audio::FMixerPlatformXAudio2::GetErrorString(param_1,iVar3);
      local_78 = (undefined2 *)0x0;
      uVar13 = 0;
      if ((psVar5 != (short *)0x0) && (uVar13 = 0, *psVar5 != 0)) {
        lVar8 = -1;
        do {
          lVar8 = lVar8 + 1;
        } while (psVar5[lVar8] != 0);
        uVar6 = (int)lVar8 + 1;
        local_70 = (ulonglong)uVar6;
        uVar13 = uVar6;
        if (0 < (int)uVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
          uVar13 = (uint)local_70;
        }
        puVar7 = local_78;
        FGenericPlatformString::Memcpy(local_78,psVar5,(longlong)(int)uVar6 * 2);
      }
      local_78 = (undefined2 *)0x0;
      local_70 = 0x62;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
      puVar9 = local_78;
      local_98 = CONCAT22(local_98._2_2_,0x3f);
      FGenericPlatformString::Convert<char,wchar_t>
                (local_78,0x62,
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
                );
      local_98 = 0x170;
      puVar12 = &DAT_143f3eda8;
      if ((uint)local_70 != 0) {
        puVar12 = puVar9;
      }
      puVar11 = &DAT_143f3eda8;
      if (uVar13 != 0) {
        puVar11 = puVar7;
      }
      FString::PrintfImpl(&local_78,L"Audio Platform Device Error: %s (File %s, Line %d)",puVar11,
                          puVar12);
      ppuVar4 = (undefined2 **)(param_1 + 0x27);
      if (ppuVar4 == &local_78) {
        if (local_78 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
      else {
        if (*ppuVar4 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        *ppuVar4 = local_78;
        *(uint *)(param_1 + 0x28) = (uint)local_70;
        *(uint *)((longlong)param_1 + 0x144) = local_70._4_4_;
      }
      if (puVar9 != (undefined2 *)0x0) {
        FMemory::Free(puVar9);
      }
      if (puVar7 != (undefined2 *)0x0) {
        FMemory::Free(puVar7);
      }
LAB_142a9e142:
      if (iVar3 < 0) {
        (**(code **)(*param_1 + 0x88))(param_1);
      }
      return (ulonglong)(byte)((byte)((uint)iVar3 >> 0x1f) ^ 1);
    }
    (**(code **)(*(longlong *)param_1[0x36] + 0x58))();
    uVar1 = *(ushort *)(param_1 + 8);
    local_58 = CONCAT44((int)param_2[3],CONCAT22(uVar1,3));
    local_90 = param_1 + 0x39;
    local_50 = CONCAT26(0x20,CONCAT24(uVar1 << 2,(uint)uVar1 * (int)param_2[3] * 4));
    local_80 = 0;
    local_88 = 0;
    local_98 = 0x40000000;
    iVar3 = (**(code **)(*(longlong *)param_1[0x36] + 0x40))
                      ((longlong *)param_1[0x36],param_1 + 0x38,&local_58,2);
    if (-1 < iVar3) {
      *(uint *)((longlong)param_1 + 0x21c) = *(uint *)((longlong)param_1 + 0x21c) | 4;
      *(undefined4 *)(param_1 + 0xd) = 1;
      goto LAB_142a9e142;
    }
    psVar5 = (short *)Audio::FMixerPlatformXAudio2::GetErrorString(param_1,iVar3);
    local_78 = (undefined2 *)0x0;
    uVar13 = 0;
    if ((psVar5 != (short *)0x0) && (uVar13 = 0, *psVar5 != 0)) {
      lVar8 = -1;
      do {
        lVar8 = lVar8 + 1;
      } while (psVar5[lVar8] != 0);
      uVar6 = (int)lVar8 + 1;
      local_70 = (ulonglong)uVar6;
      uVar13 = uVar6;
      if (0 < (int)uVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
        uVar13 = (uint)local_70;
      }
      puVar7 = local_78;
      FGenericPlatformString::Memcpy(local_78,psVar5,(longlong)(int)uVar6 * 2);
    }
    local_78 = (undefined2 *)0x0;
    local_70 = 0x62;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    puVar9 = local_78;
    local_98 = CONCAT22(local_98._2_2_,0x3f);
    FGenericPlatformString::Convert<char,wchar_t>
              (local_78,0x62,
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
              );
    local_98 = 0x17f;
    puVar12 = &DAT_143f3eda8;
    if ((uint)local_70 != 0) {
      puVar12 = puVar9;
    }
    puVar11 = &DAT_143f3eda8;
    if (uVar13 != 0) {
      puVar11 = puVar7;
    }
    FString::PrintfImpl(&local_78,L"Audio Platform Device Error: %s (File %s, Line %d)",puVar11,
                        puVar12);
    ppuVar4 = &local_78;
    ppuVar10 = (undefined2 **)(param_1 + 0x27);
    if (ppuVar10 == ppuVar4) {
      if (local_78 != (undefined2 *)0x0) {
        ppuVar4 = (undefined2 **)FMemory::Free();
      }
    }
    else {
      if (*ppuVar10 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      *ppuVar10 = local_78;
      *(uint *)(param_1 + 0x28) = (uint)local_70;
      ppuVar4 = (undefined2 **)(ulonglong)local_70._4_4_;
      *(uint *)((longlong)param_1 + 0x144) = local_70._4_4_;
    }
    if (puVar9 != (undefined2 *)0x0) {
      ppuVar4 = (undefined2 **)FMemory::Free(puVar9);
    }
  }
  if (puVar7 != (undefined2 *)0x0) {
    ppuVar4 = (undefined2 **)FMemory::Free(puVar7);
  }
LAB_142a9dd2f:
  return (ulonglong)ppuVar4 & 0xffffffffffffff00;
}



// FUNCTION 142a9e170 FUN_142a9e170 body=398 status=ok
// SIG undefined FUN_142a9e170(void)

void FUN_142a9e170(longlong *param_1)

{
  LPVOID *ppv;
  int *piVar1;
  int iVar2;
  longlong lVar3;
  HRESULT HVar4;
  longlong *plVar5;
  undefined1 *pvReserved;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  longlong *local_res10;
  longlong *local_28;
  longlong *local_20;
  
  plVar7 = (longlong *)0x0;
  if (DAT_146b2a200 == (longlong *)0x0) {
    pvReserved = &DAT_00000070;
    plVar5 = (longlong *)operator_new();
    plVar6 = plVar7;
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *plVar5 = (longlong)&PTR_GetPoolName_1454d99d8;
      plVar5[2] = 0;
      plVar5[3] = 0;
      plVar5[6] = 0;
      plVar5[7] = 0;
      *(undefined4 *)(plVar5 + 8) = 0xffffffff;
      *(undefined4 *)((longlong)plVar5 + 0x44) = 0;
      plVar5[10] = 0;
      *(undefined4 *)(plVar5 + 0xb) = 0;
      ppv = (LPVOID *)(plVar5 + 0xc);
      *ppv = (LPVOID)0x0;
      HVar4 = FWindowsPlatformMisc::CoInitialize(pvReserved);
      *(char *)(plVar5 + 0xd) = (char)HVar4;
      HVar4 = CoCreateInstance((IID *)&DAT_144177ea8,(LPUNKNOWN)0x0,1,(IID *)&DAT_144177eb8,ppv);
      plVar6 = plVar5;
      if (HVar4 == 0) {
        (**(code **)(*(longlong *)*ppv + 0x30))(*ppv,plVar5);
      }
    }
    local_28 = plVar6;
    plVar5 = (longlong *)operator_new(0x18);
    local_20 = plVar7;
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *plVar5 = (longlong)&PTR_DestroyObject_1454d9a20;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      plVar5[2] = (longlong)plVar6;
      local_20 = plVar5;
    }
    SharedPointerInternals::EnableSharedFromThis(&local_28,plVar6,plVar6);
    DAT_146b2a200 = local_28;
    local_28 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&DAT_146b2a208,&local_20);
    plVar6 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_20 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
  }
  local_res10 = param_1;
  if (param_1 == (longlong *)&DAT_00000010) {
    local_res10 = plVar7;
  }
  FUN_14058c5a0(DAT_146b2a200 + 2,local_res8,&local_res10,0);
  return;
}



// FUNCTION 142a9e300 Release body=42 status=ok
// SIG undefined Release(void)

int FWindowsMMNotificationClient::Release(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  LOCK();
  piVar1 = (int *)(param_1 + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  iVar3 = iVar2 + -1;
  if ((iVar3 == 0) && (param_1 != 0)) {
    _scalar_deleting_destructor_(param_1,iVar2);
  }
  return iVar3;
}



// FUNCTION 142a9e330 ResumePlaybackOnNewDevice body=116 status=ok
// SIG undefined ResumePlaybackOnNewDevice(void)

void Audio::FMixerPlatformXAudio2::ResumePlaybackOnNewDevice(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1[0x38] != 0) {
    *(undefined4 *)(param_1 + 0x22) = 0;
    *(undefined4 *)((longlong)param_1 + 0x114) = 1;
    lVar1 = *param_1;
    uVar2 = FOutputBuffer::GetBufferData(param_1[0x15]);
    (**(code **)(lVar1 + 0xb0))(param_1,uVar2);
    (**(code **)(*(longlong *)param_1[0x1f] + 0x10))();
    (**(code **)(*(longlong *)param_1[0x38] + 0x98))((longlong *)param_1[0x38],0,0);
  }
  return;
}



// FUNCTION 142a9e3b0 StartAudioStream body=63 status=ok
// SIG undefined StartAudioStream(void)

undefined8 Audio::FMixerPlatformXAudio2::StartAudioStream(longlong param_1)

{
  longlong *plVar1;
  
  IAudioMixerPlatformInterface::BeginGeneratingAudio();
  plVar1 = *(longlong **)(param_1 + 0x1c0);
  if (plVar1 != (longlong *)0x0) {
    *(undefined4 *)(param_1 + 0x68) = 4;
    (**(code **)(*plVar1 + 0x98))(plVar1,0,0);
    return 1;
  }
  return 0;
}



// FUNCTION 142a9e3f0 FUN_142a9e3f0 body=377 status=ok
// SIG undefined FUN_142a9e3f0(void)

undefined8 FUN_142a9e3f0(longlong param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 **ppuVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined4 in_stack_ffffffffffffffc8;
  undefined2 uVar6;
  undefined2 *local_28;
  undefined8 local_20;
  undefined2 *local_18;
  undefined8 local_10;
  
  uVar6 = (undefined2)((uint)in_stack_ffffffffffffffc8 >> 0x10);
  if ((*(byte *)(param_1 + 0x21c) & 2) == 0) {
    local_18 = (undefined2 *)0x0;
    local_10 = 0x1d;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    puVar2 = local_18;
    FGenericPlatformString::Memcpy(local_18,L"XAudio2 was not initialized.",0x3a);
    local_28 = (undefined2 *)0x0;
    local_20 = 0x62;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    puVar1 = local_28;
    FGenericPlatformString::Convert<char,wchar_t>
              (local_28,0x62,
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
               ,0x62,CONCAT22(uVar6,0x3f));
    puVar5 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar5 = puVar1;
    }
    puVar4 = &DAT_143f3eda8;
    if ((int)local_10 != 0) {
      puVar4 = puVar2;
    }
    FString::PrintfImpl(&local_18,L"Audio Platform Device Error: %s (File %s, Line %d)",puVar4,
                        puVar5,0x1c5);
    ppuVar3 = (undefined2 **)(param_1 + 0x138);
    if (ppuVar3 == &local_18) {
      if (local_18 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    else {
      if (*ppuVar3 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      *ppuVar3 = local_18;
      *(int *)(param_1 + 0x140) = (int)local_10;
      *(undefined4 *)(param_1 + 0x144) = local_10._4_4_;
    }
    if (puVar1 != (undefined2 *)0x0) {
      FMemory::Free(puVar1);
    }
    if (puVar2 != (undefined2 *)0x0) {
      FMemory::Free(puVar2);
    }
    return 0;
  }
  if ((*(uint *)(param_1 + 0x68) & 0xfffffffd) != 0) {
    if (*(uint *)(param_1 + 0x68) == 4) {
      FUN_142a95100();
    }
    if (*(longlong **)(param_1 + 0x1c0) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x1c0) + 0x90))();
      *(undefined8 *)(param_1 + 0x1c0) = 0;
    }
  }
  return 1;
}



// FUNCTION 142a9e570 SubmitBuffer body=79 status=ok
// SIG undefined SubmitBuffer(void)

void Audio::FMixerPlatformXAudio2::SubmitBuffer(longlong param_1,undefined8 param_2)

{
  undefined4 local_38;
  int local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  longlong local_14;
  
  local_38 = 0;
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_34 = *(int *)(param_1 + 0x84) * *(int *)(param_1 + 0x40) * 4;
  local_30 = param_2;
  local_14 = param_1;
  (**(code **)(**(longlong **)(param_1 + 0x1c0) + 0xa8))
            (*(longlong **)(param_1 + 0x1c0),&local_38,0);
  return;
}



// FUNCTION 142a9e5c0 FUN_142a9e5c0 body=385 status=ok
// SIG undefined FUN_142a9e5c0(void)

ulonglong FUN_142a9e5c0(longlong param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined2 **ppuVar4;
  undefined2 **ppuVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined4 in_stack_ffffffffffffffc8;
  undefined2 uVar8;
  undefined2 *local_28;
  undefined8 local_20;
  undefined2 *local_18;
  undefined8 local_10;
  
  uVar8 = (undefined2)((uint)in_stack_ffffffffffffffc8 >> 0x10);
  uVar3 = *(uint *)(param_1 + 0x21c);
  if ((uVar3 & 2) == 0) {
    local_18 = (undefined2 *)0x0;
    local_10 = 0x1f;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    puVar2 = local_18;
    FGenericPlatformString::Memcpy(local_18,L"XAudio2 was already tore down.",0x3e);
    local_28 = (undefined2 *)0x0;
    local_20 = 0x62;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    puVar1 = local_28;
    FGenericPlatformString::Convert<char,wchar_t>
              (local_28,0x62,
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
               ,0x62,CONCAT22(uVar8,0x3f));
    puVar7 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar7 = puVar1;
    }
    puVar6 = &DAT_143f3eda8;
    if ((int)local_10 != 0) {
      puVar6 = puVar2;
    }
    FString::PrintfImpl(&local_18,L"Audio Platform Device Error: %s (File %s, Line %d)",puVar6,
                        puVar7,0x9a);
    ppuVar4 = &local_18;
    ppuVar5 = (undefined2 **)(param_1 + 0x138);
    if (ppuVar5 == ppuVar4) {
      if (local_18 != (undefined2 *)0x0) {
        ppuVar4 = (undefined2 **)FMemory::Free();
      }
    }
    else {
      if (*ppuVar5 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      *ppuVar5 = local_18;
      *(int *)(param_1 + 0x140) = (int)local_10;
      ppuVar4 = (undefined2 **)(ulonglong)local_10._4_4_;
      *(uint *)(param_1 + 0x144) = local_10._4_4_;
    }
    if (puVar1 != (undefined2 *)0x0) {
      ppuVar4 = (undefined2 **)FMemory::Free(puVar1);
    }
    if (puVar2 != (undefined2 *)0x0) {
      ppuVar4 = (undefined2 **)FMemory::Free(puVar2);
    }
    return (ulonglong)ppuVar4 & 0xffffffffffffff00;
  }
  if (*(longlong **)(param_1 + 0x1b0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x10))();
    uVar3 = *(uint *)(param_1 + 0x21c);
    *(undefined8 *)(param_1 + 0x1b0) = 0;
  }
  if ((uVar3 & 1) != 0) {
    FWindowsPlatformMisc::CoUninitialize();
    uVar3 = *(uint *)(param_1 + 0x21c);
  }
  *(uint *)(param_1 + 0x21c) = uVar3 & 0xfffffffd;
  return CONCAT71((uint7)(uint3)((uVar3 & 0xfffffffd) >> 8),1);
}



// FUNCTION 142a9e770 XAudio2Create body=147 status=ok
// SIG undefined XAudio2Create(void)

int XAudio2Create(undefined8 *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  IID *rclsid;
  longlong *local_res20;
  
  rclsid = (IID *)&DAT_1454d9810;
  if ((param_2 & 1) != 0) {
    rclsid = (IID *)&DAT_1454d9800;
  }
  iVar1 = CoCreateInstance(rclsid,(LPUNKNOWN)0x0,1,(IID *)&DAT_1454d9820,&local_res20);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*local_res20 + 0x28))(local_res20,param_2,param_3);
    if (-1 < iVar1) {
      *param_1 = local_res20;
      return iVar1;
    }
    (**(code **)(*local_res20 + 0x10))();
  }
  return iVar1;
}



// FUNCTION 142a9e820 FUN_142a9e820 body=2836 status=ok
// SIG undefined FUN_142a9e820(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142a9e820(longlong *param_1)

{
  LPVOID *ppv;
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  char cVar4;
  HRESULT HVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  HMODULE pHVar11;
  undefined4 extraout_var;
  longlong *plVar12;
  longlong lVar13;
  undefined2 **ppuVar14;
  longlong lVar15;
  undefined8 *pvReserved;
  undefined1 *pvReserved_00;
  undefined2 *puVar16;
  undefined2 *puVar17;
  undefined2 *puVar18;
  longlong *plVar19;
  uint uVar20;
  undefined2 *puVar21;
  undefined2 *puVar22;
  uint uVar23;
  longlong *plVar24;
  byte bVar25;
  longlong *plVar26;
  undefined1 auStackY_548 [32];
  undefined1 local_508 [4];
  uint local_504;
  uint local_500 [2];
  undefined2 *local_4f8;
  undefined2 *local_4f0;
  int local_4e8 [2];
  HMODULE local_4e0;
  longlong *local_4d8;
  longlong *local_4d0;
  uint local_4c8;
  uint local_4c4;
  undefined2 *local_4c0;
  int local_4b8;
  undefined4 local_4b4;
  undefined2 *local_4b0;
  int local_4a8;
  undefined4 local_4a4;
  longlong *local_4a0;
  undefined4 local_498;
  longlong local_490 [2];
  undefined4 local_480;
  undefined4 local_47c;
  undefined4 local_478;
  undefined2 local_474;
  undefined4 local_472;
  short local_468 [256];
  short local_268 [280];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStackY_548;
  *(byte *)(param_1 + 0x6b) = *(byte *)(param_1 + 0x6b) & 0xf7;
  plVar19 = (longlong *)0x0;
  local_4e8[1] = 0;
  *(undefined1 *)(param_1 + 0xe4) = 0;
  pvReserved = (undefined8 *)0x208;
  local_4a0 = param_1;
  plVar9 = (longlong *)operator_new();
  plVar12 = plVar19;
  if (plVar9 != (longlong *)0x0) {
    plVar9[1] = 0;
    *plVar9 = (longlong)&PTR_FUN_1454ddb00;
    pvReserved_00 = &DAT_00000070;
    plVar9[2] = 0;
    plVar9[3] = 0;
    plVar9[4] = 0;
    plVar9[0xb] = 0;
    plVar9[0xc] = 0;
    plVar9[0x3e] = (longlong)&PTR_StartProfileThreadUsage_1454dda40;
    *(undefined4 *)(plVar9 + 0x3f) = 0;
    *(undefined4 *)((longlong)plVar9 + 0x1fc) = 0;
    *(undefined4 *)(plVar9 + 0x40) = 1;
    puVar10 = (undefined8 *)operator_new();
    if (puVar10 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      *(undefined4 *)(puVar10 + 1) = 1;
      *puVar10 = &PTR_GetPoolName_1454dd9a8;
      ppv = (LPVOID *)(puVar10 + 0xc);
      puVar10[2] = 0;
      puVar10[3] = 0;
      puVar10[6] = 0;
      puVar10[7] = 0;
      *(undefined4 *)(puVar10 + 8) = 0xffffffff;
      *(undefined4 *)((longlong)puVar10 + 0x44) = 0;
      puVar10[10] = 0;
      *(undefined4 *)(puVar10 + 0xb) = 0;
      *ppv = (LPVOID)0x0;
      HVar5 = FWindowsPlatformMisc::CoInitialize(pvReserved_00);
      *(char *)(puVar10 + 0xd) = (char)HVar5;
      HVar5 = CoCreateInstance((IID *)&DAT_144177ea8,(LPUNKNOWN)0x0,1,(IID *)&DAT_144177eb8,ppv);
      if (HVar5 == 0) {
        (**(code **)(*(longlong *)*ppv + 0x30))(*ppv,puVar10);
      }
    }
    pvReserved = puVar10 + 2;
    plVar9[0xd] = (longlong)puVar10;
    local_4d8 = plVar9;
    FUN_14058c5a0(pvReserved,local_500,&local_4d8,0);
    plVar12 = plVar9;
  }
  param_1[0xe3] = (longlong)plVar12;
  plVar12[1] = 0;
  *(undefined8 *)(param_1[0xe3] + 0x10) = 0;
  LoadVorbisLibraries();
  *(int *)((longlong)param_1 + 0x14) = DAT_146b2a698;
  HVar5 = FWindowsPlatformMisc::CoInitialize(pvReserved);
  *(char *)(param_1 + 0xe6) = (char)HVar5;
  pHVar11 = LoadLibraryA("XAudio2_7.dll");
  *(HMODULE *)(param_1[0xe3] + 0x18) = pHVar11;
  lVar15 = param_1[0xe3];
  if (*(longlong *)(lVar15 + 0x18) == 0) {
LAB_142a9ea87:
    return (ulonglong)pHVar11 & 0xffffffffffffff00;
  }
  HVar5 = CoCreateInstance((IID *)&DAT_1454d9810,(LPUNKNOWN)0x0,1,(IID *)&DAT_1454d9820,&local_4e0);
  pHVar11 = (HMODULE)CONCAT44(extraout_var,HVar5);
  if (-1 < HVar5) {
    HVar5 = (**(code **)(*(longlong *)local_4e0 + 0x28))(local_4e0,0,0xffffffff);
    if (HVar5 < 0) {
      pHVar11 = (HMODULE)(**(code **)(*(longlong *)local_4e0 + 0x10))();
    }
    else {
      *(HMODULE *)(lVar15 + 8) = local_4e0;
      pHVar11 = local_4e0;
    }
  }
  if (HVar5 != 0) goto LAB_142a9ea87;
  lVar15 = *param_1;
  local_4e8[0] = 0;
  uVar6 = (**(code **)(**(longlong **)(param_1[0xe3] + 8) + 0x18))
                    (*(longlong **)(param_1[0xe3] + 8),local_4e8);
  (**(code **)(lVar15 + 0xa0))(param_1,L"GetDeviceCount",uVar6);
  if (local_4e8[0] == 0) {
    (**(code **)(**(longlong **)(param_1[0xe3] + 8) + 0x10))();
    pHVar11 = (HMODULE)param_1[0xe3];
    *(longlong *)(pHVar11 + 2) = 0;
    goto LAB_142a9ea87;
  }
  local_500[0] = 0;
  local_4f8 = (undefined2 *)0x0;
  local_4f0 = (undefined2 *)0x0;
  FConfigCacheIni::GetString
            (DAT_1468b6148,L"/Script/WindowsTargetPlatform.WindowsTargetSettings",L"AudioDevice",
             &local_4f8);
  if ((int)local_4f0 < 2) {
    cVar4 = FAudioDevice::CanUseVRAudioDevice();
    if (cVar4 != '\0') {
      lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if ((*(int *)(lVar15 + 0x38) < DAT_146850178) &&
         (_Init_thread_header(&DAT_146850178), DAT_146850178 == -1)) {
        FName::FName(&DAT_146850170,&DAT_143f3ef90,1);
        _Init_thread_footer(&DAT_146850178);
      }
      uVar3 = DAT_146850170;
      plVar12 = (longlong *)FUN_141593110();
      iVar7 = (**(code **)(*plVar12 + 8))(plVar12,uVar3);
      if (0 < iVar7) {
        if ((*(int *)(lVar15 + 0x38) < DAT_146850178) &&
           (_Init_thread_header(&DAT_146850178), DAT_146850178 == -1)) {
          FName::FName(&DAT_146850170,&DAT_143f3ef90,1);
          _Init_thread_footer(&DAT_146850178);
        }
        uVar3 = DAT_146850170;
        local_4d8 = (longlong *)FUN_141593110();
        local_4d0 = (longlong *)0x0;
        local_4c4 = 0;
        local_504 = (**(code **)(*local_4d8 + 8))(local_4d8,uVar3);
        plVar12 = local_4d8;
        plVar9 = plVar19;
        plVar24 = plVar19;
        plVar26 = plVar19;
        uVar23 = 0;
        if (0 < (int)local_504) {
          do {
            lVar15 = 0;
            lVar13 = (**(code **)(*plVar12 + 0x10))(plVar12,uVar3,plVar9);
            if (lVar13 != 0) {
              lVar15 = lVar13 + -8;
            }
            local_4c8 = (int)plVar24 + 1;
            if ((int)plVar19 < (int)local_4c8) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_4d0,plVar24);
              plVar19 = (longlong *)(ulonglong)local_4c4;
            }
            uVar20 = (int)plVar9 + 1;
            local_4d0[(int)plVar24] = lVar15;
            param_1 = local_4a0;
            plVar9 = (longlong *)(ulonglong)uVar20;
            plVar24 = (longlong *)(ulonglong)local_4c8;
            plVar26 = local_4d0;
            uVar23 = local_4c8;
          } while ((int)uVar20 < (int)local_504);
        }
        AlgoImpl::
        IntroSortInternal<IHeadMountedDisplayModule_*,FIdentityFunctor,TDereferenceWrapper<IHeadMountedDisplayModule_*,IHeadMountedDisplayModule::FCompareModulePriority>_>
                  (plVar26,(longlong)(int)uVar23,local_508[0],local_508);
        plVar12 = (longlong *)*plVar26;
        FMemory::Free(plVar26);
        ppuVar14 = (undefined2 **)(**(code **)(*plVar12 + 0x70))(plVar12,local_490);
        if (&local_4f8 != ppuVar14) {
          if (local_4f8 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          local_4f8 = *ppuVar14;
          *ppuVar14 = (undefined2 *)0x0;
          local_4f0 = ppuVar14[1];
          ppuVar14[1] = (undefined2 *)0x0;
        }
        if (local_490[0] != 0) {
          FMemory::Free();
        }
      }
    }
    uVar23 = local_500[0];
    if ((int)local_4f0 < 2) goto LAB_142a9ee50;
  }
  uVar20 = 0;
  bVar1 = false;
  local_504 = 0;
  (**(code **)(**(longlong **)(param_1[0xe3] + 8) + 0x18))
            (*(longlong **)(param_1[0xe3] + 8),&local_504);
  puVar18 = local_4c0;
  uVar23 = local_500[0];
  if (local_504 != 0) {
    do {
      puVar21 = (undefined2 *)0x0;
      (**(code **)(**(longlong **)(param_1[0xe3] + 8) + 0x20))
                (*(longlong **)(param_1[0xe3] + 8),uVar20,local_468);
      local_4b0 = (undefined2 *)0x0;
      iVar7 = 0;
      local_4a4 = 0;
      if (local_468[0] != 0) {
        lVar15 = -1;
        do {
          lVar13 = lVar15 + 1;
          lVar15 = lVar15 + 1;
        } while (local_468[lVar13] != 0);
        local_4a8 = (int)lVar15 + 1;
        lVar15 = (longlong)local_4a8;
        if (0 < local_4a8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4b0,0);
        }
        iVar7 = local_4a8;
        puVar21 = local_4b0;
        FGenericPlatformString::Memcpy(local_4b0,local_468,lVar15 * 2);
      }
      puVar22 = (undefined2 *)0x0;
      puVar17 = &DAT_143f3eda8;
      if ((int)local_4f0 != 0) {
        puVar17 = local_4f8;
      }
      puVar16 = &DAT_143f3eda8;
      if (iVar7 != 0) {
        puVar16 = puVar21;
      }
      iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar16,puVar17);
      if (iVar7 == 0) {
LAB_142a9ee0f:
        bVar2 = true;
      }
      else {
        bVar1 = true;
        local_4c0 = (undefined2 *)0x0;
        iVar7 = 0;
        local_4b4 = 0;
        if (local_268[0] != 0) {
          lVar15 = -1;
          do {
            lVar13 = lVar15 + 1;
            lVar15 = lVar15 + 1;
          } while (local_268[lVar13] != 0);
          local_4b8 = (int)lVar15 + 1;
          lVar15 = (longlong)local_4b8;
          if (0 < local_4b8) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4c0,0);
          }
          iVar7 = local_4b8;
          puVar22 = local_4c0;
          FGenericPlatformString::Memcpy(local_4c0,local_268,lVar15 * 2);
        }
        puVar18 = &DAT_143f3eda8;
        if ((int)local_4f0 != 0) {
          puVar18 = local_4f8;
        }
        puVar17 = &DAT_143f3eda8;
        if (iVar7 != 0) {
          puVar17 = puVar22;
        }
        iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar17,puVar18);
        puVar18 = puVar22;
        if (iVar7 == 0) goto LAB_142a9ee0f;
        bVar2 = false;
      }
      if ((bVar1) && (bVar1 = false, puVar18 != (undefined2 *)0x0)) {
        FMemory::Free(puVar18);
      }
      if (puVar21 != (undefined2 *)0x0) {
        FMemory::Free(puVar21);
      }
      uVar23 = uVar20;
    } while ((!bVar2) && (uVar20 = uVar20 + 1, uVar23 = local_500[0], uVar20 < local_504));
  }
LAB_142a9ee50:
  local_500[0] = uVar23;
  lVar15 = *param_1;
  uVar6 = (**(code **)(**(longlong **)(param_1[0xe3] + 8) + 0x20))
                    (*(longlong **)(param_1[0xe3] + 8),local_500[0],&DAT_146b2a290);
  cVar4 = (**(code **)(lVar15 + 0xa0))(param_1,L"GetDeviceDetails",uVar6);
  iVar7 = DAT_146b2a698;
  if (cVar4 == '\0') {
    bVar25 = 0;
    *(undefined8 *)(param_1[0xe3] + 8) = 0;
  }
  else {
    DAT_146b2a280 = (uint)DAT_146b2a696;
    if (6 < DAT_146b2a696) {
      DAT_146b2a280 = 6;
    }
    *(int *)((longlong)param_1 + 0x14) = DAT_146b2a698;
    if (48000 < iVar7) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 48000;
      DAT_146b2a698 = 48000;
    }
    uVar23 = DAT_146b2a280;
    uVar6 = DAT_146b2a6a8;
    if (6 < DAT_146b2a696) {
      uVar6 = 0x3f;
    }
    cVar4 = FXAudio2Device::GetOutputMatrix(uVar6,DAT_146b2a280);
    lVar15 = param_1[0xe3];
    if (cVar4 == '\0') {
      *(undefined8 *)(lVar15 + 8) = 0;
      bVar25 = 0;
    }
    else {
      lVar13 = *param_1;
      uVar6 = (**(code **)(**(longlong **)(lVar15 + 8) + 0x50))
                        (*(longlong **)(lVar15 + 8),lVar15 + 0x10,uVar23,
                         *(undefined4 *)((longlong)param_1 + 0x14));
      cVar4 = (**(code **)(lVar13 + 0xa0))(param_1,L"CreateMasteringVoice",uVar6);
      lVar15 = param_1[0xe3];
      if (cVar4 == '\0') {
        *(undefined8 *)(lVar15 + 8) = 0;
        bVar25 = 0;
      }
      else {
        uVar6 = DAT_146b2a6a8;
        if (6 < DAT_146b2a696) {
          uVar6 = 0x3f;
        }
        X3DAudioInitialize(uVar6,0x43abc000,lVar15 + 0x70);
        *(undefined8 *)(lVar15 + 0xbc) = 0;
        *(undefined8 *)(lVar15 + 0xc4) = 0x3f800000;
        *(undefined8 *)(lVar15 + 0xcc) = 0x3f800000;
        *(undefined8 *)(lVar15 + 0xd4) = 0;
        *(undefined4 *)(lVar15 + 0xdc) = 0;
        *(undefined8 *)(lVar15 + 0xec) = 0;
        *(undefined8 *)(lVar15 + 0xfc) = 0;
        *(undefined8 *)(lVar15 + 0x104) = 0x3f800000;
        *(undefined8 *)(lVar15 + 0x10c) = 0x3f800000;
        *(undefined8 *)(lVar15 + 0xe0) = 0;
        *(undefined8 *)(lVar15 + 0x114) = 0;
        *(undefined8 *)(lVar15 + 0x120) = 0;
        local_498 = 0;
        *(undefined4 *)(lVar15 + 0xe8) = 0;
        *(undefined4 *)(lVar15 + 0x11c) = 0;
        *(undefined4 *)(lVar15 + 0x128) = 0;
        *(undefined4 **)(lVar15 + 0xf4) = (undefined4 *)(lVar15 + 0x174);
        *(undefined4 *)(lVar15 + 0x174) = 0;
        *(undefined4 *)(*(longlong *)(lVar15 + 0xf4) + 4) = 0;
        *(undefined4 *)(*(longlong *)(lVar15 + 0xf4) + 8) = 0;
        *(undefined4 *)(*(longlong *)(lVar15 + 0xf4) + 0xc) = 0x3f800000;
        *(undefined4 *)(*(longlong *)(lVar15 + 0xf4) + 0x10) = 0;
        *(undefined4 *)(*(longlong *)(lVar15 + 0xf4) + 0x14) = 0x3f800000;
        *(undefined4 *)(*(longlong *)(lVar15 + 0xf4) + 0x18) = 0;
        *(undefined4 *)(*(longlong *)(lVar15 + 0xf4) + 0x1c) = 0x3f800000;
        *(undefined8 *)(lVar15 + 0x134) = 1;
        *(undefined8 *)(lVar15 + 0x13c) = 0;
        *(undefined4 *)(lVar15 + 0x194) = 0;
        *(undefined4 *)(lVar15 + 0x198) = 0x3f800000;
        *(undefined4 *)(lVar15 + 0x19c) = 0x3f800000;
        *(undefined4 *)(lVar15 + 0x1a0) = 0x3f800000;
        *(undefined8 *)(lVar15 + 0x1a4) = (undefined4 *)(lVar15 + 0x194);
        *(undefined4 *)(lVar15 + 0x1ac) = 2;
        *(undefined4 *)(lVar15 + 0x1b0) = 0;
        *(undefined4 *)(lVar15 + 0x1b4) = 0x3f000000;
        *(undefined4 *)(lVar15 + 0x1b8) = 0x3f800000;
        *(undefined4 *)(lVar15 + 0x1bc) = 0x3f000000;
        *(undefined8 *)(lVar15 + 0x1c0) = (undefined4 *)(lVar15 + 0x1b0);
        *(undefined8 **)(lVar15 + 0x164) = (undefined8 *)(lVar15 + 0x1c0);
        *(undefined4 *)(lVar15 + 0x1c8) = 2;
        *(undefined8 **)(lVar15 + 0x144) = (undefined8 *)(lVar15 + 0x1a4);
        *(undefined8 *)(lVar15 + 0x14c) = 0;
        *(undefined8 *)(lVar15 + 0x154) = 0;
        *(undefined8 *)(lVar15 + 0x15c) = 0;
        *(undefined4 *)(lVar15 + 0x16c) = 0x3f800000;
        *(undefined4 *)(lVar15 + 0x170) = 0x3f800000;
        *(undefined8 *)(lVar15 + 0x1d0) = 0;
        *(undefined8 *)(lVar15 + 0x1d8) = 0;
        *(undefined8 *)(lVar15 + 0x1e0) = 0;
        *(undefined8 *)(lVar15 + 0x1e8) = 0;
        *(undefined4 *)(lVar15 + 0x94) = 1;
        *(undefined4 *)(lVar15 + 0x98) = 6;
        *(undefined8 **)(lVar15 + 0x84) = (undefined8 *)(lVar15 + 0x1d0);
        *(undefined8 *)(lVar15 + 0x8c) = 0;
        *(byte *)(param_1 + 0x6b) = *(byte *)(param_1 + 0x6b) | 8;
        iVar7 = *(int *)((longlong)param_1 + 0x2c);
        if (iVar7 == 0) {
          *(undefined4 *)(param_1 + 7) = 0;
        }
        else {
          *(int *)(param_1 + 7) = iVar7;
          lVar15 = FMemory::Malloc((longlong)iVar7,0);
          param_1[6] = lVar15;
        }
        lVar15 = param_1[0xe3];
        plVar12 = *(longlong **)(lVar15 + 8);
        if (plVar12 != (longlong *)0x0) {
          local_480 = 0x10001;
          local_47c = 0xac44;
          local_472 = 0x10;
          local_474 = 2;
          local_478 = 0x15888;
          iVar7 = (**(code **)(*plVar12 + 0x40))(plVar12,lVar15 + 0x20,&local_480,0);
          if ((iVar7 == 0) && (*(longlong *)(lVar15 + 0x20) != 0)) {
            plVar12 = (longlong *)(lVar15 + 0x58);
            *(undefined4 *)(lVar15 + 0x60) = 0;
            if ((*(int *)(lVar15 + 100) < 0) && (*(int *)(lVar15 + 100) != 0)) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar12);
            }
            iVar7 = *(int *)(lVar15 + 0x60);
            iVar8 = iVar7 + 0x40;
            *(int *)(lVar15 + 0x60) = iVar8;
            if (*(int *)(lVar15 + 100) < iVar8) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar12);
            }
            _guard_xfg_dispatch_icall_nop((void *)(*plVar12 + (longlong)iVar7 * 2),0,0x80);
            *(undefined4 *)(lVar15 + 0x28) = 0;
            *(undefined8 *)(lVar15 + 0x38) = 0;
            *(undefined8 *)(lVar15 + 0x40) = 0;
            *(undefined8 *)(lVar15 + 0x4c) = 0;
            *(int *)(lVar15 + 0x2c) = *(int *)(lVar15 + 0x60) * 2;
            *(longlong *)(lVar15 + 0x30) = *plVar12;
            *(undefined4 *)(lVar15 + 0x48) = 0xff;
            (**(code **)(**(longlong **)(lVar15 + 0x20) + 0xa8))
                      (*(longlong **)(lVar15 + 0x20),lVar15 + 0x28,0);
            (**(code **)(**(longlong **)(lVar15 + 0x20) + 0x98))(*(longlong **)(lVar15 + 0x20),0,0);
          }
        }
        bVar25 = 1;
      }
    }
  }
  if (local_4f8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return (ulonglong)bVar25;
}



// FUNCTION 142a9f340 TeardownHardware body=386 status=ok
// SIG undefined TeardownHardware(void)

void FXAudio2Device::TeardownHardware(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  
  puVar3 = *(undefined8 **)(param_1 + 0x718);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_1454ddb00;
    if (puVar3[0xd] != 0) {
      TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove
                (puVar3[0xd] + 0x10,puVar3);
      puVar4 = (undefined8 *)puVar3[0xd];
      LOCK();
      piVar1 = (int *)(puVar4 + 1);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (puVar4 != (undefined8 *)0x0)) {
        plVar5 = (longlong *)puVar4[0xc];
        *puVar4 = &PTR_GetPoolName_1454dd9a8;
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,puVar4);
          if ((longlong *)puVar4[0xc] != (longlong *)0x0) {
            (**(code **)(*(longlong *)puVar4[0xc] + 0x10))();
            puVar4[0xc] = 0;
          }
        }
        if (*(char *)(puVar4 + 0xd) != '\0') {
          FWindowsPlatformMisc::CoUninitialize();
        }
        *(undefined4 *)(puVar4 + 0xb) = 0;
        if (puVar4[10] != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (puVar4 + 2);
        FMemory::operator_delete(puVar4,0x70);
      }
      puVar3[0xd] = 0;
    }
    if ((longlong *)puVar3[2] != (longlong *)0x0) {
      (**(code **)(*(longlong *)puVar3[2] + 0x90))();
      puVar3[2] = 0;
    }
    if ((longlong *)puVar3[4] != (longlong *)0x0) {
      (**(code **)(*(longlong *)puVar3[4] + 0x90))();
      puVar3[4] = 0;
    }
    if ((longlong *)puVar3[1] != (longlong *)0x0) {
      (**(code **)(*(longlong *)puVar3[1] + 0x10))();
      puVar3[1] = 0;
    }
    if ((HMODULE)puVar3[3] != (HMODULE)0x0) {
      FreeLibrary((HMODULE)puVar3[3]);
    }
    puVar3[0x3e] = &PTR_StartProfileThreadUsage_1454dda40;
    if (puVar3[0xb] != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(puVar3,0x208);
    *(undefined8 *)(param_1 + 0x718) = 0;
  }
  if (*(char *)(param_1 + 0x730) != '\0') {
    FWindowsPlatformMisc::CoUninitialize();
    return;
  }
  return;
}



// FUNCTION 142a9f4d0 FUN_142a9f4d0 body=217 status=ok
// SIG undefined FUN_142a9f4d0(void)

ulonglong FUN_142a9f4d0(longlong *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  
  lVar3 = param_1[0xe3];
  LOCK();
  bVar5 = *(int *)(lVar3 + 0x1fc) == 0;
  if (bVar5) {
    *(int *)(lVar3 + 0x1fc) = 0;
  }
  UNLOCK();
  LOCK();
  uVar1 = *(uint *)(lVar3 + 0x1fc);
  *(uint *)(lVar3 + 0x1fc) = 0;
  uVar4 = (ulonglong)uVar1;
  UNLOCK();
  if (!bVar5) {
    param_1[0xe5] = param_1[0x6c];
    FUN_1422c9b40(param_1,0,CONCAT71((int7)((ulonglong)lVar3 >> 8),1));
    puVar2 = (undefined8 *)param_1[0x59];
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
      param_1[0x59] = 0;
    }
    (**(code **)(*param_1 + 0x108))(param_1);
    (**(code **)(*param_1 + 0x100))(param_1);
    lVar3 = (**(code **)(*param_1 + 0x120))(param_1);
    param_1[0x59] = lVar3;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    if (0x7fffffff < *(uint *)((longlong)param_1 + 0x164)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x2b,0);
    }
    *(undefined4 *)(param_1 + 0x2a) = 0;
    if ((*(int *)((longlong)param_1 + 0x154) < 0) && (*(int *)((longlong)param_1 + 0x154) != 0)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x29,0);
    }
    uVar4 = FAudioDevice::InitSoundSources(param_1);
  }
  return uVar4;
}



// FUNCTION 142a9f5b0 FUN_142a9f5b0 body=177 status=ok
// SIG undefined FUN_142a9f5b0(void)

void FUN_142a9f5b0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  float fVar3;
  double dVar4;
  undefined1 local_38 [12];
  longlong local_2c;
  
  lVar1 = *(longlong *)(param_1 + 0x718);
  if (*(longlong *)(lVar1 + 0x20) != 0) {
    LOCK();
    bVar2 = *(int *)(lVar1 + 0x200) == 0;
    if (bVar2) {
      *(int *)(lVar1 + 0x200) = 0;
    }
    UNLOCK();
    if (!bVar2) {
      (**(code **)(**(longlong **)(lVar1 + 0x20) + 200))(*(longlong **)(lVar1 + 0x20),local_38);
      dVar4 = (double)local_2c;
      if (local_2c < 0) {
        dVar4 = dVar4 + 1.8446744073709552e+19;
      }
      dVar4 = dVar4 * 2.2675736961451248e-05;
      goto LAB_142a9f616;
    }
  }
  dVar4 = 0.0;
LAB_142a9f616:
  if (dVar4 != 0.0) {
    *(double *)(param_1 + 0x360) = dVar4 + *(double *)(param_1 + 0x728);
    return;
  }
  fVar3 = (float)FAudioDevice::GetDeviceDeltaTime(param_1);
  *(double *)(param_1 + 0x360) = (double)fVar3 + *(double *)(param_1 + 0x360);
  return;
}



// FUNCTION 142a9f670 CreateEffectsManager body=46 status=ok
// SIG undefined CreateEffectsManager(void)

void FXAudio2Device::CreateEffectsManager(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x238);
  if (lVar1 != 0) {
    FXAudio2EffectsManager::FXAudio2EffectsManager(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 142a9f6a0 CreateSoundSource body=414 status=ok
// SIG undefined CreateSoundSource(void)

undefined8 * FXAudio2Device::CreateSoundSource(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1b0);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_1454d41a0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x24) = 0x3f000000;
    *(undefined4 *)(puVar1 + 5) = 0x469c4000;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 0x41a00000;
    *(undefined4 *)(puVar1 + 6) = 0x469c4000;
    *(undefined8 *)((longlong)puVar1 + 0x34) = 0x41a00000;
    *(undefined8 *)((longlong)puVar1 + 0x3c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar1 + 0x44) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x4c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x54) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x5c) = 0;
    *(undefined4 *)((longlong)puVar1 + 100) = 0;
    puVar1[0xd] = 1;
    *(undefined4 *)(puVar1 + 0xe) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x74) = 0;
    *(uint *)((longlong)puVar1 + 0x7c) = *(uint *)((longlong)puVar1 + 0x7c) & 0xfffffffe;
    puVar1[0x12] = 0;
    *(byte *)(puVar1 + 0xf) = *(byte *)(puVar1 + 0xf) & 0xd0 | 0x10;
    *puVar1 = &PTR__scalar_deleting_destructor__1454dda80;
    puVar1[0x13] = 0;
    *(undefined4 *)(puVar1 + 0x14) = 0;
    puVar1[0x15] = 0;
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    puVar1[0x2e] = 0;
    puVar1[0x2f] = 0;
    puVar1[0x30] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x194) = 0;
    *(undefined4 *)(puVar1 + 0x33) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x19c) = 0;
    *(undefined4 *)(puVar1 + 0x34) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1a4) = 0;
    *(undefined4 *)(puVar1 + 0x35) = 0;
    *(uint *)((longlong)puVar1 + 0x1ac) = *(uint *)((longlong)puVar1 + 0x1ac) & 0xfffffff8;
    puVar1[0x10] = param_1;
    puVar1[0x11] = *(undefined8 *)(param_1 + 0x2c8);
    *(undefined4 *)(puVar1 + 0x16) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xb4) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xbc) = 0;
    puVar1[0x18] = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xcc) = 0;
    ::_guard_xfg_dispatch_icall_nop((void *)((longlong)puVar1 + 0xd4),0,0x84);
    puVar1[0x31] = 0;
    *(undefined4 *)(puVar1 + 0x32) = 0;
    if ((*(byte *)(param_1 + 0x358) & 8) == 0) {
      *(uint *)((longlong)puVar1 + 0x7c) = *(uint *)((longlong)puVar1 + 0x7c) | 1;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142a9f840 FUN_142a9f840 body=325 status=ok
// SIG undefined FUN_142a9f840(void)

undefined8 * FUN_142a9f840(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  int *piVar3;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar3 < DAT_146b2a250) && (_Init_thread_header(&DAT_146b2a250), DAT_146b2a250 == -1)) {
    FName::FName(&DAT_146b2a248,L"OPUS",1);
    _Init_thread_footer(&DAT_146b2a250);
  }
  cVar1 = USoundWave::IsStreaming(param_3);
  uVar2 = DAT_146b2a248;
  if (cVar1 == '\0') {
    if ((*piVar3 < DAT_146b2a260) && (_Init_thread_header(&DAT_146b2a260), DAT_146b2a260 == -1)) {
      FName::FName(&DAT_146b2a258,&DAT_1454d9b78,1);
      _Init_thread_footer(&DAT_146b2a260);
    }
    uVar2 = DAT_146b2a258;
    if ((*piVar3 < DAT_146b2a270) &&
       (_Init_thread_header(&DAT_146b2a270), uVar2 = DAT_146b2a258, DAT_146b2a270 == -1)) {
      FName::FName(&DAT_146b2a268,&DAT_1454d9b80,1);
      _Init_thread_footer(&DAT_146b2a270);
      uVar2 = DAT_146b2a258;
    }
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 142a9f990 FUN_142a9f990 body=227 status=ok
// SIG undefined FUN_142a9f990(void)

longlong FUN_142a9f990(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  cVar1 = USoundWave::IsStreaming(param_2);
  if (cVar1 == '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146b2a730) &&
       (_Init_thread_header(&DAT_146b2a730), DAT_146b2a730 == -1)) {
      FName::FName(&DAT_146b2a728,&DAT_1454dcd68,1);
      _Init_thread_footer(&DAT_146b2a730);
    }
    lVar2 = *param_2;
    uVar3 = USoundWave::GetRunningPlatform();
    cVar1 = (**(code **)(lVar2 + 800))(param_2,DAT_146b2a728,uVar3);
    if (((cVar1 != '\0') && (lVar2 = operator_new(0x60), lVar2 != 0)) &&
       (lVar2 = FVorbisAudioInfo::FVorbisAudioInfo(lVar2), lVar2 != 0)) {
      return lVar2;
    }
  }
  else {
    lVar2 = operator_new(0x70);
    if (lVar2 != 0) {
      lVar2 = FOpusAudioInfo::FOpusAudioInfo(lVar2);
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 142a9fa90 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FXAudio2Device::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FAudioDevice::~FAudioDevice();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x740);
  }
  return param_1;
}



// FUNCTION 142a9fad0 CreateAudioDevice body=68 status=ok
// SIG undefined CreateAudioDevice(void)

undefined8 * FXAudio2DeviceModule::CreateAudioDevice(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x740);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1422bc5d0(puVar1);
    puVar1[0xe5] = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__1454d9a30;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142a9fb20 FXAudio2EffectsManager body=566 status=ok
// SIG undefined FXAudio2EffectsManager(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FXAudio2EffectsManager::FXAudio2EffectsManager(undefined8 *param_1,longlong param_2)

{
  LPVOID *ppv;
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  HRESULT HVar4;
  undefined4 uVar5;
  undefined1 auStackY_e8 [32];
  undefined4 local_a8;
  undefined8 local_a4;
  undefined4 local_98;
  LPVOID *local_94;
  undefined4 local_88;
  undefined4 *local_84;
  LPVOID local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  char local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStackY_e8;
  FAudioEffectsManager::FAudioEffectsManager();
  param_1[0x3f] = param_2;
  param_1[0x41] = 0;
  ppv = (LPVOID *)(param_1 + 0x40);
  *param_1 = &PTR__scalar_deleting_destructor__1454dd978;
  *ppv = (LPVOID)0x0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  if ((*(byte *)(param_2 + 0x358) & 8) != 0) {
    FUN_142aa0420(param_1);
    uVar5 = DAT_146b2a698;
    HVar4 = CoCreateInstance((IID *)&DAT_1454ddb38,(LPUNKNOWN)0x0,1,(IID *)&DAT_144159890,ppv);
    cVar3 = (**(code **)(*(longlong *)param_1[0x3f] + 0xa0))
                      ((longlong *)param_1[0x3f],L"CreateReverbEffect",HVar4);
    if (cVar3 != '\0') {
      local_78 = *ppv;
      local_94 = &local_78;
      local_a4 = param_1[0x43];
      local_84 = &local_a8;
      local_70 = 1;
      local_6c = 2;
      local_98 = 1;
      local_a8 = 0;
      local_88 = 1;
      lVar1 = *(longlong *)param_1[0x3f];
      plVar2 = *(longlong **)(((longlong *)param_1[0x3f])[0xe3] + 8);
      uVar5 = (**(code **)(*plVar2 + 0x48))(plVar2,param_1 + 0x45,2,uVar5);
      cVar3 = (**(code **)(lVar1 + 0xa0))(param_1[0x3f],L"CreateSubmixVoice (Reverb)",uVar5);
      if (cVar3 != '\0') {
        local_68 = 0x3f800000;
        uStack_64 = 0;
        uStack_60 = 0;
        uStack_5c = 0x3f800000;
        builtin_strncpy(local_58,"333?333?",9);
        local_58[9] = '\0';
        local_58[10] = '\0';
        local_58[0xb] = '\0';
        local_58[0xc] = '\0';
        local_58[0xd] = '\0';
        local_58[0xe] = '\0';
        local_58[0xf] = '\0';
        local_58[0x10] = '\0';
        local_58[0x11] = '\0';
        local_58[0x12] = -0x80;
        local_58[0x13] = '?';
        local_58[0x14] = '\0';
        local_58[0x15] = '\0';
        local_58[0x16] = '\0';
        local_58[0x17] = '\0';
        local_58[0x18] = '\0';
        local_58[0x19] = '\0';
        local_58[0x1a] = '\0';
        local_58[0x1b] = '\0';
        local_58[0x1c] = '\0';
        local_58[0x1d] = '\0';
        local_58[0x1e] = -0x80;
        local_58[0x1f] = '?';
        lVar1 = *(longlong *)param_1[0x3f];
        uVar5 = (**(code **)(*(longlong *)param_1[0x45] + 0x80))
                          ((longlong *)param_1[0x45],param_1[0x43],2,6);
        (**(code **)(lVar1 + 0xa0))(param_1[0x3f],L"SetOutputMatrix (Reverb)",uVar5);
      }
    }
    FUN_142aa0880(param_1);
  }
  return param_1;
}



// FUNCTION 142a9fd60 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FAsyncTask<FAsyncRealtimeAudioTaskWorker<FXAudio2SoundBuffer>_>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_Abandon_1454ddc00;
  FUN_1415b5910(param_1[7]);
  param_1[7] = 0;
  *param_1 = &PTR__purecall_143f9a338;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 142a9fdc0 `scalar_deleting_destructor' body=150 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FWindowsMMNotificationClient::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_GetPoolName_1454dd9a8;
  plVar1 = (longlong *)param_1[0xc];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0xc] + 0x10))();
      param_1[0xc] = 0;
    }
  }
  if (*(char *)(param_1 + 0xd) != '\0') {
    FWindowsPlatformMisc::CoUninitialize();
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 2);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 142a9fe60 `scalar_deleting_destructor' body=206 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FXAudio2EffectsManager::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__1454dd978;
  if ((longlong *)param_1[0x46] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x46] + 0x90))();
  }
  if ((longlong *)param_1[0x45] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x45] + 0x90))();
  }
  if ((longlong *)param_1[0x43] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x43] + 0x90))();
  }
  if ((longlong *)param_1[0x44] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x44] + 0x90))();
  }
  if ((longlong *)param_1[0x42] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x42] + 0x10))();
  }
  if ((longlong *)param_1[0x40] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x40] + 0x10))();
  }
  if ((longlong *)param_1[0x41] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x41] + 0x10))();
  }
  *param_1 = &PTR__scalar_deleting_destructor__145034c38;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x238);
  }
  return param_1;
}



// FUNCTION 142a9ff30 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FXAudio2RadioEffect::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  CXAPOParametersBase::~CXAPOParametersBase();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 142a9ff70 `scalar_deleting_destructor' body=273 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FXAudio2SoundBuffer::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__1454dd9f0;
  if (*(char *)(param_1 + 4) != '\0') {
    puVar4 = &DAT_143f3eda8;
    if (*(int *)(param_1 + 3) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)param_1[2];
    }
    LowLevelFatalErrorHandler
              ("Unknown",100,L"Can\'t free resource \'%s\' as it was allocated in permanent pool.",
               puVar5);
    if (*(int *)(param_1 + 3) != 0) {
      puVar4 = (undefined2 *)param_1[2];
    }
    FDebug::AssertFailed
              (&DAT_1454da1b2,"Unknown",100,
               L"Can\'t free resource \'%s\' as it was allocated in permanent pool.",puVar4);
  }
  puVar2 = (undefined8 *)param_1[0x12];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  iVar1 = *(int *)(param_1 + 6);
  if (iVar1 == 1) {
LAB_142aa004a:
    lVar3 = param_1[10];
  }
  else {
    if (iVar1 == 2) {
      if (*(char *)((longlong)param_1 + 0xa4) == '\0') goto LAB_142aa0058;
      goto LAB_142aa004a;
    }
    if (iVar1 == 4) {
      lVar3 = param_1[0xe];
    }
    else {
      if (iVar1 != 5) goto LAB_142aa0058;
      if (param_1[0xe] != 0) {
        FMemory::Free();
      }
      lVar3 = param_1[0x10];
    }
  }
  if (lVar3 != 0) {
    FMemory::Free();
  }
LAB_142aa0058:
  FSoundBuffer::~FSoundBuffer(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 142aa0090 `scalar_deleting_destructor' body=143 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FXAudio2SoundSource::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR__scalar_deleting_destructor__1454dda80;
  FreeResources();
  lVar2 = 3;
  puVar3 = param_1 + 0x31;
  do {
    plVar1 = puVar3 + -2;
    puVar3 = puVar3 + -2;
    lVar2 = lVar2 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar2 != 0);
  *param_1 = &PTR_FUN_1454d41a0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1b0);
  }
  return param_1;
}



// FUNCTION 142aa0120 FUN_142aa0120 body=43 status=ok
// SIG undefined FUN_142aa0120(void)

undefined8 * FUN_142aa0120(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_StartProfileThreadUsage_1454dda40;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 142aa0150 `scalar_deleting_destructor' body=349 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FXAudioDeviceProperties::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_1454ddb00;
  if (param_1[0xd] != 0) {
    TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove
              (param_1[0xd] + 0x10,param_1);
    puVar3 = (undefined8 *)param_1[0xd];
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar3 != (undefined8 *)0x0)) {
      plVar4 = (longlong *)puVar3[0xc];
      *puVar3 = &PTR_GetPoolName_1454dd9a8;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,puVar3);
        if ((longlong *)puVar3[0xc] != (longlong *)0x0) {
          (**(code **)(*(longlong *)puVar3[0xc] + 0x10))();
          puVar3[0xc] = 0;
        }
      }
      if (*(char *)(puVar3 + 0xd) != '\0') {
        FWindowsPlatformMisc::CoUninitialize();
      }
      *(undefined4 *)(puVar3 + 0xb) = 0;
      if (puVar3[10] != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (puVar3 + 2);
      FMemory::operator_delete(puVar3,0x70);
    }
    param_1[0xd] = 0;
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x90))();
    param_1[2] = 0;
  }
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x90))();
    param_1[4] = 0;
  }
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
    param_1[1] = 0;
  }
  if ((HMODULE)param_1[3] != (HMODULE)0x0) {
    FreeLibrary((HMODULE)param_1[3]);
  }
  param_1[0x3e] = &PTR_StartProfileThreadUsage_1454dda40;
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x208);
  }
  return param_1;
}



// FUNCTION 142aa02b0 Abandon body=41 status=ok
// SIG undefined Abandon(void)

void FAsyncTask<FD3D12DeferredDeletionQueue::FD3D12AsyncDeletionWorker>::Abandon(longlong param_1)

{
  FUN_142aa1240();
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142aa02cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 142aa0300 CalculateDolbySurroundRate body=275 status=ok
// SIG undefined CalculateDolbySurroundRate(void)

void FSpatializationHelper::CalculateDolbySurroundRate
               (longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
               float param_5,float *param_6)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x4c) = *param_2;
  *(undefined4 *)(param_1 + 0x50) = param_2[1];
  *(undefined4 *)(param_1 + 0x54) = param_2[2];
  *(undefined4 *)(param_1 + 100) = *param_3;
  *(undefined4 *)(param_1 + 0x68) = param_3[1];
  *(undefined4 *)(param_1 + 0x6c) = param_3[2];
  *(undefined4 *)(param_1 + 0xa4) = *param_4;
  *(undefined4 *)(param_1 + 0xa8) = param_4[1];
  *(undefined4 *)(param_1 + 0xac) = param_4[2];
  *(float *)(param_1 + 0xbc) = param_5 * param_5;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  X3DAudioCalculate(param_5 * param_5,param_1 + 0x4c,param_1 + 0x84,0x11,plVar1);
  *param_6 = *(float *)*plVar1 * *param_6;
  param_6[1] = *(float *)(*plVar1 + 4) * param_6[1];
  param_6[2] = *(float *)(*plVar1 + 8) * param_6[2];
  param_6[3] = *(float *)(*plVar1 + 0xc) * param_6[3];
  param_6[4] = *(float *)(*plVar1 + 0x10) * param_6[4];
  param_6[5] = *(float *)(*plVar1 + 0x14) * param_6[5];
  param_6[6] = *(float *)(param_1 + 0x34) * param_6[6];
  return;
}



// FUNCTION 142aa0420 FUN_142aa0420 body=588 status=ok
// SIG undefined FUN_142aa0420(void)

undefined8 FUN_142aa0420(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  ushort uVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 in_stack_ffffffffffffffa8;
  uint uVar8;
  ulonglong uVar7;
  undefined4 local_38;
  undefined8 *local_34;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar6 = DAT_146b2a698;
  uVar8 = (uint)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  lVar1 = **(longlong **)(param_1 + 0x1f8);
  uVar5 = _guard_xfg_dispatch_icall_nop(&DAT_1454ddbf0,param_1 + 0x208);
  cVar4 = (**(code **)(lVar1 + 0xa0))(*(undefined8 *)(param_1 + 0x1f8),L"CreateFX (EQ)",uVar5);
  if (cVar4 != '\0') {
    local_28 = *(undefined8 *)(param_1 + 0x208);
    local_20 = 1;
    local_34 = &local_28;
    local_1c = 6;
    local_38 = 1;
    lVar1 = **(longlong **)(param_1 + 0x1f8);
    uVar7 = (ulonglong)uVar8 << 0x20;
    plVar2 = *(longlong **)((*(longlong **)(param_1 + 0x1f8))[0xe3] + 8);
    uVar5 = (**(code **)(*plVar2 + 0x48))(plVar2,param_1 + 0x220,6,uVar6,uVar7,4,0,&local_38);
    cVar4 = (**(code **)(lVar1 + 0xa0))
                      (*(undefined8 *)(param_1 + 0x1f8),L"CreateSubmixVoice (EQPremaster)",uVar5);
    if (cVar4 != '\0') {
      lVar1 = **(longlong **)(param_1 + 0x1f8);
      plVar2 = *(longlong **)((*(longlong **)(param_1 + 0x1f8))[0xe3] + 8);
      uVar6 = (**(code **)(*plVar2 + 0x48))
                        (plVar2,param_1 + 0x218,6,uVar6,uVar7 & 0xffffffff00000000,4,0,0);
      cVar4 = (**(code **)(lVar1 + 0xa0))
                        (*(undefined8 *)(param_1 + 0x1f8),L"CreateSubmixVoice (DryPremaster)",uVar6)
      ;
      if (cVar4 != '\0') {
        uVar6 = DAT_146b2a6a8;
        uVar3 = DAT_146b2a696;
        if (6 < DAT_146b2a696) {
          uVar6 = 0x3f;
          uVar3 = 6;
        }
        FXAudio2Device::GetOutputMatrix(uVar6,uVar3);
        lVar1 = **(longlong **)(param_1 + 0x1f8);
        uVar6 = (**(code **)(**(longlong **)(param_1 + 0x220) + 0x80))
                          (*(longlong **)(param_1 + 0x220),0,6,uVar3,DAT_146b2a288,0);
        cVar4 = (**(code **)(lVar1 + 0xa0))
                          (*(undefined8 *)(param_1 + 0x1f8),L"SetOutputMatrix (EQPremaster)",uVar6);
        if (cVar4 != '\0') {
          lVar1 = **(longlong **)(param_1 + 0x1f8);
          uVar6 = (**(code **)(**(longlong **)(param_1 + 0x218) + 0x80))
                            (*(longlong **)(param_1 + 0x218),0,6,uVar3,DAT_146b2a288,0);
          cVar4 = (**(code **)(lVar1 + 0xa0))
                            (*(undefined8 *)(param_1 + 0x1f8),L"SetOutputMatrix (DryPremaster)",
                             uVar6);
          if (cVar4 != '\0') {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142aa0670 FUN_142aa0670 body=527 status=ok
// SIG undefined FUN_142aa0670(void)

_RTL_CRITICAL_SECTION * FUN_142aa0670(PRTL_CRITICAL_SECTION_DEBUG param_1,_LIST_ENTRY *param_2)

{
  uint uVar1;
  LONG LVar2;
  _LIST_ENTRY *p_Var3;
  longlong lVar4;
  _RTL_CRITICAL_SECTION *p_Var5;
  undefined8 *puVar6;
  HANDLE pvVar7;
  LPCRITICAL_SECTION lpCriticalSection;
  PRTL_CRITICAL_SECTION_DEBUG p_Var8;
  _RTL_CRITICAL_SECTION *p_Var9;
  float fVar10;
  float fVar11;
  undefined1 local_res8 [8];
  
  p_Var5 = (_RTL_CRITICAL_SECTION *)operator_new(0xa8);
  p_Var9 = (_RTL_CRITICAL_SECTION *)0x0;
  if (p_Var5 != (_RTL_CRITICAL_SECTION *)0x0) {
    p_Var5->LockCount = 0;
    p_Var5->RecursionCount = 0;
    p_Var5->OwningThread = (HANDLE)0x0;
    p_Var5->LockSemaphore = (HANDLE)0x0;
    *(undefined1 *)&p_Var5->SpinCount = 0;
    p_Var5[1].DebugInfo = param_1;
    p_Var5->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&PTR__scalar_deleting_destructor__1454dd9f0;
    p_Var5[1].LockCount = 3;
    p_Var5[3].LockSemaphore = (HANDLE)0x0;
    p_Var5[3].SpinCount = 0;
    *(undefined4 *)&p_Var5[4].DebugInfo = 0;
    *(undefined1 *)((longlong)&p_Var5[4].DebugInfo + 4) = 0;
    p_Var5[2].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    p_Var5[2].LockCount = 0;
    p_Var5[2].SpinCount = 0;
    *(undefined4 *)&p_Var5[3].DebugInfo = 0;
    p_Var5[3].LockCount = 0;
    p_Var5[3].RecursionCount = 0;
    *(undefined4 *)&p_Var5[3].OwningThread = 0;
    p_Var9 = p_Var5;
  }
  if (param_2[0x13].Blink == (_LIST_ENTRY *)0x0) {
    p_Var3 = param_2->Flink;
    puVar6 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x78))(param_1,local_res8,param_2);
    (*(code *)p_Var3[0x30].Flink)(param_2,*puVar6);
  }
  pvVar7 = (HANDLE)(**(code **)(*(longlong *)param_1 + 0x98))(param_1,param_2);
  p_Var9[3].LockSemaphore = pvVar7;
  if (pvVar7 == (HANDLE)0x0) {
    *(undefined1 *)((longlong)&param_2[0xb].Flink + 1) = 1;
    *(undefined4 *)((longlong)&param_2[0xe].Flink + 4) = 0;
    USoundWave::RemoveAudioResource(param_2);
    return p_Var9;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)operator_new(0x30);
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
    lpCriticalSection = (LPCRITICAL_SECTION)0x0;
  }
  else {
    InitializeCriticalSection(lpCriticalSection);
    SetCriticalSectionSpinCount(lpCriticalSection,4000);
    p_Var8 = (PRTL_CRITICAL_SECTION_DEBUG)operator_new(0x48);
    if (p_Var8 == (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      lpCriticalSection[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    }
    else {
      *(undefined ***)p_Var8 = &PTR_Abandon_1454ddc00;
      uVar1._0_2_ = p_Var8->CreatorBackTraceIndexHigh;
      uVar1._2_2_ = p_Var8->SpareWORD;
      p_Var8->CreatorBackTraceIndexHigh = (short)(uVar1 & 0xfffffff8);
      p_Var8->SpareWORD = (short)((uVar1 & 0xfffffff8) >> 0x10);
      p_Var8->CriticalSection = p_Var9;
      (p_Var8->ProcessLocksList).Flink = param_2;
      (p_Var8->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
      p_Var8->EntryCount = 0;
      p_Var8->ContentionCount = 0;
      *(undefined1 *)&p_Var8->Flags = 0;
      p_Var8[1].Type = 0;
      p_Var8[1].CreatorBackTraceIndex = 0;
      p_Var8[1].CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
      p_Var8[1].ProcessLocksList.Flink = (_LIST_ENTRY *)0x0;
      lpCriticalSection[1].DebugInfo = p_Var8;
    }
  }
  p_Var9[3].SpinCount = (ULONG_PTR)lpCriticalSection;
  FAsyncRealtimeAudioTaskProxy<FXAudio2SoundBuffer>::StartBackgroundTask(lpCriticalSection);
  p_Var9[2].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  *(undefined2 *)&p_Var9[1].OwningThread = 1;
  p_Var9[2].LockCount = 0;
  *(undefined2 *)((longlong)&p_Var9[1].OwningThread + 2) =
       *(undefined2 *)((longlong)&param_2[0xe].Flink + 4);
  fVar10 = (float)USoundWave::GetSampleRateForCurrentPlatform(param_2);
  *(undefined4 *)((longlong)&p_Var9[1].LockSemaphore + 6) = 0x10;
  *(int *)((longlong)&p_Var9[1].OwningThread + 4) = (int)(longlong)fVar10;
  LVar2 = *(LONG *)((longlong)&param_2[0xe].Flink + 4);
  p_Var9->RecursionCount = LVar2;
  *(short *)((longlong)&p_Var9[1].LockSemaphore + 4) = (short)LVar2 * 2;
  fVar10 = (float)USoundWave::GetSampleRateForCurrentPlatform(param_2);
  lVar4 = (longlong)p_Var9->RecursionCount * 2;
  fVar11 = (float)lVar4;
  if (lVar4 < 0) {
    fVar11 = fVar11 + 1.8446744e+19;
  }
  *(int *)&p_Var9[1].LockSemaphore = (int)(longlong)(fVar10 * fVar11);
  return p_Var9;
}



// FUNCTION 142aa0880 FUN_142aa0880 body=771 status=ok
// SIG undefined FUN_142aa0880(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142aa0880(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined4 uVar5;
  longlong *plVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 local_res8 [8];
  ulonglong in_stack_ffffffffffffff68;
  undefined4 local_78;
  longlong **local_74;
  longlong *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  
  uVar9 = DAT_146b2a698;
  plVar6 = (longlong *)operator_new(0x80);
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    in_stack_ffffffffffffff68 = in_stack_ffffffffffffff68 & 0xffffffff00000000;
    CXAPOParametersBase::CXAPOParametersBase
              (plVar6,&DAT_146680ac0,plVar6 + 0xc,1,in_stack_ffffffffffffff68);
    *plVar6 = (longlong)&PTR_QueryInterface_1454ddb48;
    fVar10 = (float)uVar9;
    plVar6[6] = (longlong)&PTR_LAB_1454ddbc8;
    fVar12 = 1.0 / fVar10;
    *(float *)(plVar6 + 0xf) = fVar10;
    fVar11 = fVar12 * 628.31854;
    fVar10 = _guard_xfg_dispatch_icall_nop(fVar11 - 1.0);
    fVar11 = _guard_xfg_dispatch_icall_nop(fVar11 + fVar11 + 1.0);
    _DAT_146b2a704 = 0;
    fVar10 = fVar10 / fVar11;
    DAT_146b2a700 = fVar10 + 1.0;
    _DAT_146b2a708 = -DAT_146b2a700;
    _DAT_146b2a70c = _guard_xfg_dispatch_icall_nop(fVar12 * 12566.371);
    _DAT_146b2a71c = 0;
    _DAT_146b2a714 = 0;
    _DAT_146b2a70c = _DAT_146b2a70c * (1.0 - fVar10);
    _DAT_146b2a710 = fVar10;
    CXAPOParametersBase::SetParameters(plVar6 + 6,local_res8,1);
  }
  (**(code **)(*plVar6 + 0x30))(plVar6,0,0);
  *(longlong **)(param_1 + 0x210) = plVar6;
  local_74 = &local_68;
  plVar1 = *(longlong **)(param_1 + 0x1f8);
  local_60 = 1;
  local_5c = 6;
  local_78 = 1;
  lVar2 = *plVar1;
  local_68 = plVar6;
  uVar5 = (**(code **)(**(longlong **)(plVar1[0xe3] + 8) + 0x48))
                    (*(longlong **)(plVar1[0xe3] + 8),param_1 + 0x230,6,uVar9,
                     in_stack_ffffffffffffff68 & 0xffffffff00000000,2,0,&local_78);
  cVar4 = (**(code **)(lVar2 + 0xa0))(plVar1,L"CreateSubmixVoice (Radio)",uVar5);
  if (cVar4 != '\0') {
    uVar9 = 6;
    if (DAT_146b2a696 < 7) {
      uVar9 = (uint)DAT_146b2a696;
    }
    DAT_146b2a288 = &DAT_1454dceb8;
    uVar3 = DAT_146b2a6a8;
    if (6 < DAT_146b2a696) {
      uVar3 = 0x3f;
    }
    uVar8 = 0;
    puVar7 = &DAT_146680a04;
    do {
      if ((uVar9 == puVar7[-1]) && ((uVar3 & *puVar7) == uVar3)) {
        DAT_146b2a288 = (&PTR_s_333_333__146680a08)[(longlong)(int)uVar8 * 2];
        break;
      }
      uVar8 = uVar8 + 1;
      puVar7 = puVar7 + 4;
    } while (uVar8 < 0xc);
    plVar6 = *(longlong **)(param_1 + 0x1f8);
    lVar2 = *plVar6;
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x230) + 0x80))
                      (*(longlong **)(param_1 + 0x230),0,6,uVar9,DAT_146b2a288,0);
    cVar4 = (**(code **)(lVar2 + 0xa0))(plVar6,L"SetOutputMatrix (Radio)",uVar5);
    if (cVar4 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142aa0b90 FUN_142aa0b90 body=595 status=ok
// SIG undefined FUN_142aa0b90(void)

undefined8 FUN_142aa0b90(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined4 *puVar9;
  undefined4 local_38;
  longlong local_34;
  undefined4 local_28;
  longlong *local_24;
  longlong local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  if ((*(byte *)(param_1 + 0x7c) & 1) != 0) {
    return 1;
  }
  *(undefined8 *)(param_1 + 0xb4) = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x218);
  plVar4 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  lVar5 = plVar4[0x1f];
  if (lVar5 == 0) {
    (**(code **)(*plVar4 + 0x368))(plVar4);
    lVar5 = plVar4[0x1f];
  }
  if (((*(uint *)(lVar5 + 0xd0) >> 1 & 1) == 0) &&
     ((*(uint *)(*(longlong *)(param_1 + 0x10) + 0xa4) >> 8 & 1) != 0)) {
    *(undefined8 *)(param_1 + 0xb4) = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x220);
  }
  uVar7 = 1;
  if ((*(byte *)(param_1 + 0x78) & 1) != 0) {
    uVar7 = 2;
    *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x228);
  }
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xa4) & 2) != 0) {
    lVar5 = uVar7 + 0xf;
    uVar7 = (ulonglong)((int)uVar7 + 1);
    *(undefined8 *)(param_1 + lVar5 * 0xc) = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x230);
  }
  *(uint *)(param_1 + 0x1ac) = *(uint *)(param_1 + 0x1ac) & 0xfffffffd;
  local_34 = param_1 + 0xb0;
  plVar4 = (longlong *)(param_1 + 0x98);
  local_38 = (undefined4)uVar7;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *plVar4 = 0;
  if ((((*(int *)(*(longlong *)(param_1 + 0x18) + 0xc) == 1) &&
       ((*(byte *)(*(longlong *)(param_1 + 0x80) + 0x359) & 4) != 0)) &&
      (*(int *)(*(longlong *)(param_1 + 0x10) + 0xa8) == 1)) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x80) + 0x40),
     lVar5 = (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined4 *)(param_1 + 0x70)), lVar5 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x90);
    *(uint *)(param_1 + 0x1ac) = *(uint *)(param_1 + 0x1ac) | 2;
    local_24 = &local_18;
    *(undefined4 *)(param_1 + 0xa0) = 2;
    local_c = 2;
    local_10 = 1;
    local_28 = 1;
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x718);
    LOCK();
    bVar8 = *(int *)(lVar6 + 0x200) == 0;
    if (bVar8) {
      *(int *)(lVar6 + 0x200) = 0;
    }
    UNLOCK();
    if (bVar8) goto LAB_142aa0dcc;
    puVar9 = &local_28;
    local_18 = lVar5;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x90);
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x718);
    LOCK();
    bVar8 = *(int *)(lVar6 + 0x200) == 0;
    if (bVar8) {
      *(int *)(lVar6 + 0x200) = 0;
    }
    UNLOCK();
    if (bVar8) goto LAB_142aa0dcc;
    puVar9 = (undefined4 *)0x0;
  }
  iVar3 = (**(code **)(**(longlong **)(lVar6 + 8) + 0x40))
                    (*(longlong **)(lVar6 + 8),plVar4,lVar2 + 0x38,8,0x40000000,lVar6 + 0x1f0,
                     &local_38,puVar9);
  if (iVar3 == 0) {
    *(int *)(lVar6 + 0x1f8) = *(int *)(lVar6 + 0x1f8) + 1;
    if (*plVar4 == 0) {
      return 0;
    }
    return 1;
  }
LAB_142aa0dcc:
  *plVar4 = 0;
  return 0;
}



// FUNCTION 142aa0df0 Describe body=26 status=ok
// SIG undefined Describe(void)

undefined8 FXAudio2SoundSource::Describe(undefined8 param_1,undefined8 param_2)

{
  Describe_Internal();
  return param_2;
}



// FUNCTION 142aa0e10 Describe_Internal body=1072 status=ok
// SIG undefined Describe_Internal(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FXAudio2SoundSource::Describe_Internal
          (longlong param_1,undefined8 param_2,char param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  undefined2 *puVar3;
  bool bVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  bool bVar11;
  undefined4 uVar12;
  float fVar13;
  undefined1 auStack_198 [32];
  undefined2 *local_178;
  undefined2 *local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  int local_128;
  int local_124;
  undefined2 *local_120;
  int local_118;
  longlong local_110 [3];
  longlong local_f8 [2];
  float local_e8;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined4 local_ac;
  ulonglong local_a8;
  
  local_a8 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  local_124 = 0;
  local_128 = 0;
  puVar9 = (undefined2 *)0x0;
  local_110[2] = param_2;
  if ((param_4 != '\0') &&
     (puVar9 = (undefined2 *)0x0, (*(byte *)(*(longlong *)(param_1 + 0x10) + 0xa4) & 0x20) != 0)) {
    local_e8 = 0.0;
    local_e4 = 0;
    local_dc = 0;
    local_d4 = 0;
    local_cc = 0;
    local_c4 = 0;
    local_bc = 0;
    local_b4 = 0;
    local_ac = 0;
    uVar12 = FWaveInstance::GetActualVolume();
    GetChannelVolumes(param_1,&local_e8,uVar12);
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0xc);
    if (iVar1 == 1) {
      local_160 = (double)(float)local_d4;
      local_168 = (double)local_dc._4_4_;
      local_170 = (undefined2 *)(double)(float)local_dc;
      local_178 = (undefined2 *)(double)local_e4._4_4_;
      FString::PrintfImpl(&local_120,L" (FL: %.2f FR: %.2f FC: %.2f LF: %.2f, LS: %.2f, RS: %.2f)",
                          (double)local_e8,(double)(float)local_e4);
      puVar9 = local_120;
      local_128 = local_118;
    }
    else if (iVar1 == 2) {
      local_130 = (double)(float)local_b4;
      local_138 = (double)local_bc._4_4_;
      local_140 = (double)(float)local_bc;
      local_148 = (double)local_c4._4_4_;
      local_150 = (double)(float)local_c4;
      local_158 = (double)local_cc._4_4_;
      local_160 = (double)(float)local_d4;
      local_168 = (double)local_dc._4_4_;
      local_170 = (undefined2 *)(double)(float)local_dc;
      local_178 = (undefined2 *)(double)local_e4._4_4_;
      FString::PrintfImpl(&local_120,
                          L" Left: (FL: %.2f FR: %.2f FC: %.2f LF: %.2f, LS: %.2f, RS: %.2f), Right: (FL: %.2f FR: %.2f FC: %.2f LF: %.2f, LS: %.2f, RS: %.2f)"
                          ,(double)local_e8,(double)(float)local_e4);
      puVar9 = local_120;
      local_128 = local_118;
    }
  }
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x60);
  bVar11 = lVar2 == 0;
  if (bVar11) {
    local_110[0] = 0;
    local_110[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_110,0);
    FGenericPlatformString::Memcpy(local_110[0],L"None",10);
    plVar5 = local_110;
  }
  else {
    plVar5 = (longlong *)FActiveSound::GetOwnerName(lVar2,&local_120);
  }
  puVar3 = (undefined2 *)*plVar5;
  *plVar5 = 0;
  local_124 = (int)plVar5[1];
  plVar5[1] = 0;
  if ((bVar11) && (local_110[0] != 0)) {
    FMemory::Free();
  }
  if ((!bVar11) && (local_120 != (undefined2 *)0x0)) {
    FMemory::Free();
  }
  if (param_3 == '\0') {
    local_110[0] = *(longlong *)(**(longlong **)(param_1 + 0x10) + 0x18);
    FName::ToString(local_110,&local_120);
    bVar4 = false;
    bVar11 = true;
    puVar8 = &DAT_143f3eda8;
    if (local_118 != 0) {
      puVar8 = local_120;
    }
  }
  else {
    puVar6 = (undefined8 *)
             UObjectBaseUtility::GetPathName(**(longlong **)(param_1 + 0x10),local_f8,0);
    if (*(int *)(puVar6 + 1) == 0) {
      bVar4 = true;
      bVar11 = false;
      puVar8 = &DAT_143f3eda8;
    }
    else {
      bVar4 = true;
      bVar11 = false;
      puVar8 = (undefined2 *)*puVar6;
    }
  }
  puVar7 = &DAT_143f3eda8;
  if (local_124 != 0) {
    puVar7 = puVar3;
  }
  puVar10 = &DAT_143f3eda8;
  if (local_128 != 0) {
    puVar10 = puVar9;
  }
  fVar13 = (float)FWaveInstance::GetActualVolume(*(undefined8 *)(param_1 + 0x10));
  lVar2 = local_110[2];
  local_178 = puVar10;
  local_170 = puVar7;
  FString::PrintfImpl(local_110[2],L"Wave: %s, Volume: %6.2f%s, Owner: %s",puVar8,(double)fVar13);
  if ((bVar11) && (local_120 != (undefined2 *)0x0)) {
    FMemory::Free();
  }
  if ((bVar4) && (local_f8[0] != 0)) {
    FMemory::Free();
  }
  if (puVar3 != (undefined2 *)0x0) {
    FMemory::Free(puVar3);
  }
  if (puVar9 != (undefined2 *)0x0) {
    FMemory::Free(puVar9);
  }
  return lVar2;
}



// FUNCTION 142aa1240 FUN_142aa1240 body=202 status=ok
// SIG undefined FUN_142aa1240(void)

void FUN_142aa1240(longlong param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  
  cVar1 = *(char *)(param_1 + 0x28);
  if (cVar1 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
              (*(longlong **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  }
  else {
    if (cVar1 == '\x01') {
      uVar4 = *(uint *)(param_1 + 0x2c);
      if ((uVar4 & 1) != 0) {
        (**(code **)(**(longlong **)(param_1 + 8) + 0x20))
                  (*(longlong **)(param_1 + 8),*(undefined8 *)(param_1 + 0x18),
                   (byte)(uVar4 >> 1) & 1);
        (**(code **)(**(longlong **)(param_1 + 8) + 0x20))
                  (*(longlong **)(param_1 + 8),*(undefined8 *)(param_1 + 0x18),
                   CONCAT31((uint3)(*(uint *)(param_1 + 0x2c) >> 9),
                            (char)(*(uint *)(param_1 + 0x2c) >> 1)) & 0xffffff01);
        uVar4 = *(uint *)(param_1 + 0x2c);
      }
      bVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))
                        (*(longlong **)(param_1 + 8),*(undefined8 *)(param_1 + 0x18),
                         (byte)(uVar4 >> 1) & 1);
      *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xfffffffb;
      *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | (bVar2 & 1) << 2;
      LOCK();
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
      UNLOCK();
      return;
    }
    if (cVar1 == '\x02') {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x310))
                        (*(longlong **)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                         *(undefined4 *)(param_1 + 0x20));
      *(undefined4 *)(param_1 + 0x24) = uVar3;
      LOCK();
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
      UNLOCK();
      return;
    }
  }
  LOCK();
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
  UNLOCK();
  return;
}



// FUNCTION 142aa1310 EnsureCompletion body=181 status=ok
// SIG undefined EnsureCompletion(void)

void FAsyncRealtimeAudioTaskProxy<FXAudio2SoundBuffer>::EnsureCompletion
               (LPCRITICAL_SECTION param_1,char param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  int iVar2;
  PRTL_CRITICAL_SECTION_DEBUG p_Var3;
  _LIST_ENTRY *p_Var4;
  char cVar5;
  BOOL BVar6;
  
  BVar6 = TryEnterCriticalSection(param_1);
  if (BVar6 == 0) {
    EnterCriticalSection(param_1);
  }
  p_Var3 = param_1[1].DebugInfo;
  if (param_2 == '\0') {
code_r0x000142aa138b:
    if (p_Var3[1].ProcessLocksList.Flink == (_LIST_ENTRY *)0x0) goto LAB_142aa13a7;
    (**(code **)&(p_Var3[1].CriticalSection)->DebugInfo->EntryCount)
              (p_Var3[1].CriticalSection,0xffffffff,0);
  }
  else {
    p_Var4 = p_Var3[1].ProcessLocksList.Flink;
    if (p_Var4 == (_LIST_ENTRY *)0x0) {
      p_Var1 = p_Var3 + 1;
      LOCK();
      iVar2._0_2_ = p_Var1->Type;
      iVar2._2_2_ = p_Var1->CreatorBackTraceIndex;
      if (iVar2 == 0) {
        p_Var1->Type = 0;
        p_Var1->CreatorBackTraceIndex = 0;
      }
      UNLOCK();
      if (iVar2 != 0) {
        FUN_142aa1240(p_Var3);
      }
      goto code_r0x000142aa138b;
    }
    cVar5 = (*(code *)p_Var4->Flink[1].Blink)(p_Var4,p_Var3);
    if (cVar5 == '\0') goto code_r0x000142aa138b;
    FUN_142aa1240(p_Var3);
    if (p_Var3[1].CriticalSection != (_RTL_CRITICAL_SECTION *)0x0) {
      (*(code *)((p_Var3[1].CriticalSection)->DebugInfo->ProcessLocksList).Flink)();
    }
  }
  p_Var3[1].ProcessLocksList.Flink = (_LIST_ENTRY *)0x0;
LAB_142aa13a7:
                    /* WARNING: Could not recover jumptable at 0x000142aa13be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(param_1);
  return;
}



// FUNCTION 142aa13d0 EnsureRealtimeTaskCompletion body=109 status=ok
// SIG undefined EnsureRealtimeTaskCompletion(void)

void FXAudio2SoundBuffer::EnsureRealtimeTaskCompletion(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FAsyncRealtimeAudioTaskProxy<FXAudio2SoundBuffer>::EnsureCompletion
              (*(longlong *)(param_1 + 0x98),1);
    lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x98);
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      p_Var1 = lpCriticalSection[1].DebugInfo;
      if (p_Var1 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
        (**(code **)(*(longlong *)p_Var1 + 0x10))(p_Var1,1);
      }
      DeleteCriticalSection(lpCriticalSection);
      FMemory::operator_delete(lpCriticalSection,0x30);
    }
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  return;
}



// FUNCTION 142aa1440 FreeResources body=315 status=ok
// SIG undefined FreeResources(void)

void FXAudio2SoundSource::FreeResources(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  LPCRITICAL_SECTION p_Var3;
  PRTL_CRITICAL_SECTION_DEBUG p_Var4;
  undefined8 *puVar5;
  
  if (*(longlong **)(param_1 + 0x98) != (longlong *)0x0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x718);
    (**(code **)(**(longlong **)(param_1 + 0x98) + 0x90))();
    piVar1 = (int *)(lVar2 + 0x1f8);
    *piVar1 = *piVar1 + -1;
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  if ((*(longlong *)(param_1 + 0x90) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x98), lVar2 != 0)) {
    FAsyncRealtimeAudioTaskProxy<FXAudio2SoundBuffer>::EnsureCompletion(lVar2,1);
    p_Var3 = *(LPCRITICAL_SECTION *)(*(longlong *)(param_1 + 0x90) + 0x98);
    if (p_Var3 != (LPCRITICAL_SECTION)0x0) {
      p_Var4 = p_Var3[1].DebugInfo;
      if (p_Var4 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
        (**(code **)(*(longlong *)p_Var4 + 0x10))(p_Var4,1);
      }
      DeleteCriticalSection(p_Var3);
      FMemory::operator_delete(p_Var3,0x30);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x98) = 0;
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FAsyncRealtimeAudioTaskProxy<FXAudio2SoundBuffer>::EnsureCompletion
              (*(longlong *)(param_1 + 0xa8),1);
    p_Var3 = *(LPCRITICAL_SECTION *)(param_1 + 0xa8);
    if (p_Var3 != (LPCRITICAL_SECTION)0x0) {
      p_Var4 = p_Var3[1].DebugInfo;
      if (p_Var4 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
        (**(code **)(*(longlong *)p_Var4 + 0x10))(p_Var4,1);
      }
      DeleteCriticalSection(p_Var3);
      FMemory::operator_delete(p_Var3,0x30);
    }
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  if (((*(byte *)(param_1 + 0x1ac) & 1) != 0) &&
     (puVar5 = *(undefined8 **)(param_1 + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)(puVar5,1);
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x194) = 0;
  return;
}



// FUNCTION 142aa1580 GetAudioDeviceList body=500 status=ok
// SIG undefined GetAudioDeviceList(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FXAudioDeviceProperties::GetAudioDeviceList(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar13;
  undefined1 auStack_4b8 [32];
  uint local_498 [2];
  ulonglong local_490;
  ulonglong local_488;
  undefined1 local_478 [512];
  short local_278 [280];
  ulonglong local_48;
  ulonglong uVar12;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_4b8;
  iVar2 = *(int *)((longlong)param_2 + 0xc);
  plVar5 = (longlong *)*param_2;
  iVar9 = (int)param_2[1];
  if (iVar2 < 0) {
    if (iVar9 != 0) {
      do {
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        plVar5 = plVar5 + 2;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      iVar2 = *(int *)((longlong)param_2 + 0xc);
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (iVar2 != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,0);
    }
  }
  else {
    for (; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
    }
    *(undefined4 *)(param_2 + 1) = 0;
  }
  uVar6 = 0;
  plVar5 = *(longlong **)(param_1 + 8);
  local_498[0] = 0;
  if (((plVar5 != (longlong *)0x0) &&
      (iVar2 = (**(code **)(*plVar5 + 0x18))(plVar5,local_498), iVar2 == 0)) &&
     (uVar8 = uVar6, local_498[0] != 0)) {
    do {
      iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))
                        (*(longlong **)(param_1 + 8),uVar8,local_478);
      if (iVar2 == 0) {
        local_490 = 0;
        local_488 = local_488 & 0xffffffff;
        uVar13 = uVar6;
        uVar7 = 0;
        uVar11 = 0;
        if (local_278[0] != 0) {
          lVar3 = -1;
          do {
            lVar1 = lVar3 + 1;
            lVar3 = lVar3 + 1;
          } while (local_278[lVar1] != 0);
          uVar10 = (int)lVar3 + 1;
          local_488 = (ulonglong)uVar10;
          uVar12 = uVar6;
          uVar7 = uVar10;
          if (0 < (int)uVar10) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_490,0);
            uVar12 = local_488 >> 0x20;
            uVar7 = (uint)local_488;
          }
          uVar13 = local_490;
          uVar11 = (uint)uVar12;
          FGenericPlatformString::Memcpy(local_490,local_278,(longlong)(int)uVar10 * 2);
        }
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
        }
        local_490 = 0;
        puVar4 = (ulonglong *)((longlong)iVar2 * 0x10 + *param_2);
        local_488 = 0;
        *puVar4 = uVar13;
        *(uint *)(puVar4 + 1) = uVar7;
        *(uint *)((longlong)puVar4 + 0xc) = uVar11;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while (uVar7 < local_498[0]);
  }
  return;
}



// FUNCTION 142aa1780 GetChannelVolumes body=568 status=ok
// SIG undefined GetChannelVolumes(void)

void FXAudio2SoundSource::GetChannelVolumes(longlong param_1,float *param_2,float param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  short *psVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  float fVar9;
  longlong local_58;
  ulonglong local_50;
  
  if ((*(byte *)(param_1 + 0x7c) & 1) == 0) {
    cVar2 = FAudioDevice::IsAudioDeviceMuted(*(undefined8 *)(param_1 + 0x80));
    if (cVar2 == '\0') {
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x18) + 0xc);
      if (iVar3 == 1) {
        FUN_142aa1a00(param_1,param_2,param_3);
      }
      else if (iVar3 == 2) {
        GetStereoChannelVolumes(param_1,param_2,param_3);
      }
      else if (iVar3 == 4) {
        *param_2 = param_3;
        param_2[1] = param_3;
        param_2[4] = param_3;
        param_2[5] = param_3;
        if (DAT_146b2a280 == 6) {
          param_2[3] = param_3 * *(float *)(param_1 + 0x24) * 0.25;
        }
      }
      else if (iVar3 == 6) {
        param_2[4] = param_3;
        param_2[5] = param_3;
        *param_2 = param_3;
        param_2[1] = param_3;
        param_2[2] = param_3;
        param_2[3] = param_3;
      }
      lVar7 = 0;
      cVar2 = *(char *)(*(longlong *)(param_1 + 0x80) + 0xb0);
      lVar6 = lVar7;
      if (cVar2 == '\x01') {
        param_2[6] = 0.0;
        param_2[7] = 0.0;
      }
      else if (cVar2 == '\x02') {
        param_2[0] = 0.0;
        param_2[1] = 0.0;
        param_2[2] = 0.0;
        param_2[3] = 0.0;
        param_2[4] = 0.0;
        param_2[5] = 0.0;
      }
      do {
        iVar3 = _finite((double)param_2[lVar6]);
        if (iVar3 == 0) {
          iVar3 = _isnan((double)param_2[lVar6]);
          psVar5 = &DAT_1454da448;
          local_58 = 0;
          local_50 = 0;
          if (iVar3 != 0) {
            psVar5 = &DAT_1454da440;
          }
          lVar4 = lVar7;
          if (*psVar5 != 0) {
            lVar4 = -1;
            do {
              lVar1 = lVar4 + 1;
              lVar4 = lVar4 + 1;
            } while (psVar5[lVar1] != 0);
            uVar8 = (int)lVar4 + 1;
            local_50 = (ulonglong)uVar8;
            if (0 < (int)uVar8) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
            }
            lVar4 = local_58;
            FGenericPlatformString::Memcpy(local_58,psVar5,(longlong)(int)uVar8 * 2);
          }
          param_2[lVar6] = 0.0;
          if (lVar4 != 0) {
            FMemory::Free(lVar4);
          }
        }
        fVar9 = *(float *)(*(longlong *)(param_1 + 0x80) + 0x2d8) * param_2[lVar6];
        if (0.0 <= fVar9) {
          if (4.0 <= fVar9) {
            fVar9 = 4.0;
          }
        }
        else {
          fVar9 = 0.0;
        }
        param_2[lVar6] = fVar9;
        lVar6 = lVar6 + 1;
      } while (lVar6 < 0x10);
    }
    else {
      param_2[0] = 0.0;
      param_2[1] = 0.0;
      param_2[2] = 0.0;
      param_2[3] = 0.0;
      param_2[4] = 0.0;
      param_2[5] = 0.0;
      param_2[6] = 0.0;
      param_2[7] = 0.0;
    }
  }
  return;
}



// FUNCTION 142aa1a00 FUN_142aa1a00 body=501 status=ok
// SIG undefined FUN_142aa1a00(void)

void FUN_142aa1a00(longlong param_1,float *param_2,float param_3)

{
  float fVar1;
  uint uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 local_88 [32];
  undefined4 local_68;
  undefined4 local_64;
  uint local_60;
  undefined4 local_1c;
  
  FSoundSource::GetSpatializationParams(param_1,local_88);
  uVar4 = local_68;
  uVar2 = *(uint *)(param_1 + 0x1ac);
  if ((uVar2 >> 1 & 1) == 0) {
    local_60 = local_60 ^ 0x80000000;
    *param_2 = param_3;
    param_2[1] = param_3;
    param_2[2] = param_3;
    param_2[4] = param_3;
    param_2[5] = param_3;
    local_68 = local_64;
    local_64 = uVar4;
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x10) + 400);
    param_2[7] = 0.0;
    param_2[6] = param_3 * fVar1;
    FSpatializationHelper::CalculateDolbySurroundRate
              (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x718) + 0x70,&DAT_1464aa798,
               &DAT_1468b5d90,&local_68,local_1c,param_2);
    uVar2 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0xa4);
    if ((uVar2 & 2) == 0) {
      if ((uVar2 >> 0xc & 1) == 0) {
        if (DAT_146b2a280 == 6) {
          fVar1 = param_2[2];
          param_2[3] = param_3 * *(float *)(param_1 + 0x24);
          if (*param_2 < fVar1) {
            *param_2 = (*param_2 + fVar1) * 0.5;
          }
          if (param_2[1] < fVar1) {
            param_2[1] = param_2[1] * 0.5 + fVar1 * 0.5;
          }
        }
        param_3 = param_3 * *(float *)(*(longlong *)(param_1 + 0x10) + 0x88);
        if (param_3 <= param_2[2]) {
          param_3 = param_2[2];
        }
      }
      else {
        param_2[0] = 0.0;
        param_2[1] = 0.0;
        param_2[2] = 0.0;
        param_2[3] = 0.0;
        param_2[4] = 0.0;
        param_2[5] = 0.0;
        param_2[6] = 0.0;
        param_2[7] = 0.0;
        param_3 = param_3 * *(float *)(*(longlong *)(param_1 + 0x10) + 0x88);
      }
      param_2[2] = param_3;
    }
    else {
      param_2[0] = 0.0;
      param_2[1] = 0.0;
      param_2[2] = 0.0;
      param_2[3] = 0.0;
      param_2[4] = 0.0;
      param_2[5] = 0.0;
      param_2[6] = 0.0;
      param_2[7] = 0.0;
      param_2[7] = *(float *)(*(longlong *)(param_1 + 0x10) + 0x8c);
    }
  }
  else {
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0xa8) == 1) && ((uVar2 & 4) == 0)) {
      *(uint *)(param_1 + 0x1ac) = uVar2 | 4;
    }
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x80) + 0x40);
    (**(code **)(*plVar3 + 0x18))(plVar3,*(undefined4 *)(param_1 + 0x70),local_88);
    FXAudio2SoundSource::GetStereoChannelVolumes(param_1,param_2,param_3);
  }
  return;
}



// FUNCTION 142aa1c00 GetOutputMatrix body=85 status=ok
// SIG undefined GetOutputMatrix(void)

bool FXAudio2Device::GetOutputMatrix(uint param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  DAT_146b2a288 = &DAT_1454dceb8;
  puVar1 = &DAT_146680a04;
  while ((param_2 != puVar1[-1] || ((*puVar1 & param_1) != param_1))) {
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 4;
    if (0xb < uVar2) {
LAB_142aa1c4e:
      return DAT_146b2a288 != (undefined *)0x0;
    }
  }
  DAT_146b2a288 = (&PTR_s_333_333__146680a08)[(longlong)(int)uVar2 * 2];
  goto LAB_142aa1c4e;
}



// FUNCTION 142aa1ce0 FUN_142aa1ce0 body=171 status=ok
// SIG undefined FUN_142aa1ce0(void)

int FUN_142aa1ce0(longlong param_1)

{
  int iVar1;
  
  iVar1 = 0;
  switch(*(undefined4 *)(param_1 + 0x30)) {
  case 1:
  case 2:
    return *(int *)(param_1 + 0x58);
  case 3:
    break;
  case 4:
    return *(int *)(param_1 + 0x78);
  case 5:
    return *(int *)(param_1 + 0x88) + *(int *)(param_1 + 0x78);
  case 6:
    iVar1 = *(int *)(param_1 + 0xc) << 0xf;
  default:
    return iVar1;
  }
  if (*(longlong **)(param_1 + 0x90) == (longlong *)0x0) {
    return *(int *)(param_1 + 0xc) * 0x8000;
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x30))();
  return *(int *)(param_1 + 0xc) * 0x8000 + iVar1;
}



// FUNCTION 142aa1db0 GetStereoChannelVolumes body=645 status=ok
// SIG undefined GetStereoChannelVolumes(void)

void FXAudio2SoundSource::GetStereoChannelVolumes(longlong param_1,float *param_2,float param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_78 [80];
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  undefined4 local_c;
  
  if (((*(uint *)(param_1 + 0x1ac) >> 1 & 1) == 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xa4) & 0x20) != 0)) {
    *param_2 = param_3;
    param_2[1] = param_3;
    param_2[2] = param_3;
    param_2[4] = param_3;
    param_2[5] = param_3;
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x10) + 400);
    param_2[7] = 0.0;
    param_2[6] = param_3 * fVar1;
    if (DAT_146b2a280 == 6) {
      param_2[3] = param_3 * *(float *)(param_1 + 0x24);
    }
    param_2[8] = param_3;
    param_2[9] = param_3;
    param_2[10] = param_3;
    param_2[0xc] = param_3;
    param_2[0xd] = param_3;
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x10) + 400);
    param_2[0xf] = 0.0;
    param_2[0xe] = param_3 * fVar1;
    if (DAT_146b2a280 == 6) {
      param_2[0xb] = param_3 * *(float *)(param_1 + 0x24);
    }
    FSoundSource::UpdateStereoEmitterPositions(param_1);
    FSoundSource::GetSpatializationParams(param_1,local_78);
    uVar3 = local_1c;
    uVar2 = local_28;
    local_20 = local_20 ^ 0x80000000;
    local_14 = local_14 ^ 0x80000000;
    local_28 = local_24;
    local_24 = uVar2;
    local_1c = local_18;
    local_18 = uVar3;
    FSpatializationHelper::CalculateDolbySurroundRate
              (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x718) + 0x70,&DAT_1464aa798,
               &DAT_1468b5d90,&local_28,local_c,param_2);
    FSpatializationHelper::CalculateDolbySurroundRate
              (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x718) + 0x70,&DAT_1464aa798,
               &DAT_1468b5d90,&local_1c,local_c,param_2 + 8);
    return;
  }
  *param_2 = param_3;
  param_2[1] = param_3;
  if (((*(uint *)(param_1 + 0x1ac) >> 1 & 1) == 0) && (DAT_146b2a280 == 6)) {
    param_2[4] = param_3 * *(float *)(param_1 + 0x20);
    param_2[5] = param_3 * *(float *)(param_1 + 0x20);
    param_2[3] = param_3 * *(float *)(param_1 + 0x24) * 0.5;
  }
  fVar1 = *(float *)(*(longlong *)(param_1 + 0x10) + 400);
  param_2[7] = 0.0;
  param_2[6] = param_3 * fVar1;
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xa4) & 2) != 0) {
    param_2[7] = param_3 * *(float *)(*(longlong *)(param_1 + 0x10) + 0x8c);
  }
  return;
}



// FUNCTION 142aa2040 GetTask body=60 status=ok
// SIG undefined GetTask(void)

_RTL_CRITICAL_SECTION **
FAsyncRealtimeAudioTaskProxy<FXAudio2SoundBuffer>::GetTask(LPCRITICAL_SECTION param_1)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  BOOL BVar2;
  
  BVar2 = TryEnterCriticalSection(param_1);
  if (BVar2 == 0) {
    EnterCriticalSection(param_1);
  }
  p_Var1 = param_1[1].DebugInfo;
  LeaveCriticalSection(param_1);
  return &p_Var1->CriticalSection;
}



// FUNCTION 142aa2080 FUN_142aa2080 body=422 status=ok
// SIG undefined FUN_142aa2080(void)

void FUN_142aa2080(longlong param_1,char param_2)

{
  LPCRITICAL_SECTION p_Var1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  char cVar3;
  BOOL BVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  undefined1 uVar8;
  bool bVar9;
  
  if ((param_2 == '\0') && (*(longlong *)(param_1 + 0xa8) != 0)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if ((*(longlong *)(param_1 + 0xa8) != 0) &&
     ((cVar3 = FAsyncRealtimeAudioTaskProxy<FXAudio2SoundBuffer>::IsDone(), cVar3 != '\0' ||
      (param_2 != '\0')))) {
    bVar7 = 0;
    if (cVar3 == '\0') {
      FAsyncRealtimeAudioTaskProxy<FXAudio2SoundBuffer>::EnsureCompletion
                (*(undefined8 *)(param_1 + 0xa8),1);
    }
    p_Var1 = *(LPCRITICAL_SECTION *)(param_1 + 0xa8);
    BVar4 = TryEnterCriticalSection(p_Var1);
    if (BVar4 == 0) {
      EnterCriticalSection(p_Var1);
    }
    p_Var2 = p_Var1[1].DebugInfo;
    LeaveCriticalSection(p_Var1);
    cVar3 = (char)p_Var2->Flags;
    if (cVar3 == '\x01') {
      lVar6 = FAsyncRealtimeAudioTaskProxy<FXAudio2SoundBuffer>::GetTask
                        (*(undefined8 *)(param_1 + 0xa8));
      bVar7 = (byte)(*(uint *)(lVar6 + 0x24) >> 2) & 1;
    }
    else if (cVar3 == '\x02') {
      lVar6 = FAsyncRealtimeAudioTaskProxy<FXAudio2SoundBuffer>::GetTask
                        (*(undefined8 *)(param_1 + 0xa8));
      *(undefined4 *)((longlong)*(int *)(param_1 + 0x194) * 0x2c + 0xd8 + param_1) =
           *(undefined4 *)(lVar6 + 0x1c);
    }
    p_Var1 = *(LPCRITICAL_SECTION *)(param_1 + 0xa8);
    if (p_Var1 != (LPCRITICAL_SECTION)0x0) {
      p_Var2 = p_Var1[1].DebugInfo;
      if (p_Var2 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
        (**(code **)(*(longlong *)p_Var2 + 0x10))(p_Var2,1);
      }
      DeleteCriticalSection(p_Var1);
      FMemory::operator_delete(p_Var1,0x30);
    }
    *(undefined8 *)(param_1 + 0xa8) = 0;
    FXAudio2SoundSource::HandleRealTimeSourceData(param_1,bVar7);
  }
  if (bVar9) {
    *(int *)(param_1 + 0x194) = *(int *)(param_1 + 0x194) + 1;
    iVar5 = *(int *)(param_1 + 0x194);
    if (2 < *(int *)(param_1 + 0x194)) {
      iVar5 = 0;
    }
    *(int *)(param_1 + 0x194) = iVar5;
    LOCK();
    bVar9 = *(int *)(param_1 + 0x1a0) == 0;
    if (bVar9) {
      *(int *)(param_1 + 0x1a0) = 0;
    }
    UNLOCK();
    if (bVar9) {
      uVar8 = 1;
    }
    else {
      LOCK();
      *(undefined4 *)(param_1 + 0x1a0) = 0;
      UNLOCK();
      uVar8 = 2;
    }
    uVar8 = FUN_142aa3f00(param_1,*(undefined4 *)(param_1 + 0x194),uVar8);
    if (*(longlong *)(param_1 + 0xa8) == 0) {
      FXAudio2SoundSource::HandleRealTimeSourceData(param_1,uVar8);
      return;
    }
  }
  return;
}



// FUNCTION 142aa2230 HandleRealTimeSourceData body=200 status=ok
// SIG undefined HandleRealTimeSourceData(void)

void FXAudio2SoundSource::HandleRealTimeSourceData(longlong param_1,char param_2)

{
  uint *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  
  if (param_2 != '\0') {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x9c);
    if (iVar4 == 0) {
      LOCK();
      *(undefined4 *)(param_1 + 0x1a8) = 1;
      UNLOCK();
      puVar1 = (uint *)((longlong)*(int *)(param_1 + 0x194) * 0x2c + 0xd4 + param_1);
      *puVar1 = *puVar1 | 0x40;
    }
    else if (iVar4 == 1) {
      LOCK();
      *(undefined4 *)(param_1 + 0x198) = 1;
      UNLOCK();
    }
  }
  lVar5 = (longlong)*(int *)(param_1 + 0x194) * 0x2c;
  if (*(int *)(lVar5 + 0xd8 + param_1) != 0) {
    lVar2 = **(longlong **)(param_1 + 0x80);
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0xa8))
                      (*(longlong **)(param_1 + 0x98),param_1 + 0xd4 + lVar5,0);
                    /* WARNING: Could not recover jumptable at 0x000142aa22dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0xa0))(*(undefined8 *)(param_1 + 0x80),L"SubmitSourceBuffer - PCMRT",uVar3)
    ;
    return;
  }
  iVar4 = *(int *)(param_1 + 0x194) + -1;
  if (iVar4 < 0) {
    iVar4 = 2;
  }
  *(int *)(param_1 + 0x194) = iVar4;
  return;
}



// FUNCTION 142aa2300 FUN_142aa2300 body=181 status=ok
// SIG undefined FUN_142aa2300(void)

undefined8 FUN_142aa2300(undefined8 param_1,longlong param_2,char param_3)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((param_2 != 0) && (*(int *)(param_2 + 0xe4) != 0)) {
    FUN_1428742d0(DAT_146b17150);
    uVar2 = (uint)*(byte *)(param_2 + 0xb1);
    if ((param_3 == '\0') || (*(byte *)(param_2 + 0xb1) == 0)) {
      if (7 < uVar2) {
        return 0;
      }
    }
    else if (uVar2 != 7) {
      uVar2 = 4;
    }
                    /* WARNING: Could not recover jumptable at 0x000142aa2392. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                      *(uint *)(&DAT_142aa2938 + (longlong)(int)uVar2 * 4)))
                      (IMAGE_DOS_HEADER_140000000.e_magic +
                       *(uint *)(&DAT_142aa2938 + (longlong)(int)uVar2 * 4));
    return uVar1;
  }
  return 0;
}



// FUNCTION 142aa2960 FUN_142aa2960 body=1119 status=ok
// SIG undefined FUN_142aa2960(void)

undefined8 FUN_142aa2960(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  char cVar5;
  undefined4 uVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  bool bVar9;
  float fVar10;
  
  FSoundSource::InitCommon();
  if ((*(byte *)((longlong)param_1 + 0x7c) & 1) != 0) {
    *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) | 0x10;
    return 1;
  }
  if (*(int *)(param_1[3] + 0xc) < 1) {
LAB_142aa2da4:
    FXAudio2SoundSource::FreeResources(param_1);
    return 0;
  }
  FSoundSource::SetReverbApplied(param_1,*(longlong *)(param_1[0x11] + 0x228) != 0);
  cVar5 = FUN_142aa0b90(param_1);
  if (cVar5 == '\0') {
    piVar2 = (int *)(*(longlong *)(param_1[0x10] + 0x718) + 0x200);
    LOCK();
    bVar9 = *piVar2 == 0;
    if (bVar9) {
      *piVar2 = 0;
    }
    UNLOCK();
    if (bVar9) {
      *(uint *)((longlong)param_1 + 0x7c) = *(uint *)((longlong)param_1 + 0x7c) | 1;
      *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) | 0x10;
      return 1;
    }
    goto LAB_142aa2da4;
  }
  if ((0.0 < *(float *)((longlong *)param_1[2] + 0x14)) &&
     ((*(byte *)(*(longlong *)param_1[2] + 0xb3) & 2) == 0)) {
    (**(code **)(*(longlong *)param_1[0x12] + 0x28))();
  }
  switch(*(undefined4 *)(param_1[0x12] + 0x30)) {
  case 1:
  case 2:
    puVar1 = (undefined8 *)((longlong)param_1 + 0xd4);
    *puVar1 = 0;
    *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
    *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
    *(undefined8 *)((longlong)param_1 + 0xec) = 0;
    *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
    *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
    *(undefined4 *)((longlong)param_1 + 0x194) = 0;
    *(undefined8 *)((longlong)param_1 + 0xdc) = *(undefined8 *)(param_1[0x12] + 0x50);
    *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_1[0x12] + 0x58);
    param_1[0x1f] = (longlong)param_1;
    if ((param_1[0x10] == 0) || (param_1[0x13] == 0)) goto switchD_142aa2a2d_default;
    if (*(int *)(param_1[2] + 0x9c) == 0) {
      *(undefined4 *)puVar1 = 0x40;
      lVar8 = *(longlong *)param_1[0x10];
      uVar6 = (**(code **)(*(longlong *)param_1[0x13] + 0xa8))();
      pwVar7 = L"SubmitSourceBuffer - PCM - LOOP_Never";
    }
    else {
      *(undefined4 *)((longlong)param_1 + 0xf4) = 0xff;
      lVar8 = *(longlong *)param_1[0x10];
      uVar6 = (**(code **)(*(longlong *)param_1[0x13] + 0xa8))((longlong *)param_1[0x13],puVar1,0);
      pwVar7 = L"SubmitSourceBuffer - PCM - LOOP_*";
    }
    break;
  case 3:
  case 6:
    FUN_142aa4c50(param_1);
    goto switchD_142aa2a2d_default;
  case 4:
    puVar1 = (undefined8 *)((longlong)param_1 + 0xd4);
    *puVar1 = 0;
    *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
    *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
    *(undefined8 *)((longlong)param_1 + 0xec) = 0;
    *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
    *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
    *(undefined4 *)((longlong)param_1 + 0x194) = 0;
    *(undefined8 *)((longlong)param_1 + 0xdc) = *(undefined8 *)(param_1[0x12] + 0x70);
    *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_1[0x12] + 0x78);
    param_1[0x1f] = (longlong)param_1;
    if (*(int *)(param_1[2] + 0x9c) == 0) {
      *(undefined4 *)puVar1 = 0x40;
      lVar8 = *(longlong *)param_1[0x10];
      uVar6 = (**(code **)(*(longlong *)param_1[0x13] + 0xa8))();
      pwVar7 = L"SubmitSourceBuffer - XMA2 - LOOP_Never";
    }
    else {
      *(undefined4 *)((longlong)param_1 + 0xf4) = 0xff;
      *(undefined4 *)((longlong)param_1 + 0xec) = *(undefined4 *)(param_1[0x12] + 0x60);
      *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(param_1[0x12] + 100);
      lVar8 = *(longlong *)param_1[0x10];
      uVar6 = (**(code **)(*(longlong *)param_1[0x13] + 0xa8))((longlong *)param_1[0x13],puVar1,0);
      pwVar7 = L"SubmitSourceBuffer - XMA2 - LOOP_*";
    }
    break;
  case 5:
    *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
    *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
    *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
    *(undefined8 *)((longlong)param_1 + 0xec) = 0;
    *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
    *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
    param_1[0x31] = 0;
    *(undefined4 *)(param_1 + 0x32) = 0;
    *(undefined4 *)((longlong)param_1 + 0x194) = 0;
    *(undefined8 *)((longlong)param_1 + 0xdc) = *(undefined8 *)(param_1[0x12] + 0x70);
    *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_1[0x12] + 0x78);
    param_1[0x1f] = (longlong)param_1;
    param_1[0x31] = *(longlong *)(param_1[0x12] + 0x80);
    *(uint *)(param_1 + 0x32) = *(uint *)(param_1[0x12] + 0x88) >> 2;
    iVar3 = *(int *)(param_1[2] + 0x9c);
    *(undefined4 *)((longlong)param_1 + 0xd4) = 0x40;
    if (iVar3 == 0) {
      lVar8 = *(longlong *)param_1[0x10];
      uVar6 = (**(code **)(*(longlong *)param_1[0x13] + 0xa8))();
      pwVar7 = L"SubmitSourceBuffer - XWMA - LOOP_Never";
    }
    else {
      *(undefined4 *)((longlong)param_1 + 0xf4) = 0xff;
      lVar8 = *(longlong *)param_1[0x10];
      uVar6 = (**(code **)(*(longlong *)param_1[0x13] + 0xa8))();
      pwVar7 = L"SubmitSourceBuffer - XWMA - LOOP_*";
    }
    break;
  default:
    goto switchD_142aa2a2d_default;
  }
  (**(code **)(lVar8 + 0xa0))(param_1[0x10],pwVar7,uVar6);
switchD_142aa2a2d_default:
  *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) | 0x10;
  LOCK();
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  UNLOCK();
  (**(code **)(*param_1 + 0x28))(param_1);
  uVar4 = (longlong)*(int *)(param_1[3] + 0xc) * 2;
  iVar3 = *(int *)(*param_2 + 0xe8);
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  *(int *)(param_1 + 0xd) = (int)((ulonglong)(longlong)iVar3 / uVar4);
  if (0.0 < *(float *)(param_2 + 0x14)) {
    fVar10 = (float)(**(code **)(*(longlong *)*param_2 + 0x2a0))
                              ((longlong *)*param_2,(ulonglong)(longlong)iVar3 % uVar4);
    *(int *)((longlong)param_1 + 0x6c) =
         (int)((float)(int)param_1[0xd] * (1.0 / fVar10) * *(float *)(param_2 + 0x14));
  }
  return 1;
}



// FUNCTION 142aa2de0 FUN_142aa2de0 body=39 status=ok
// SIG undefined FUN_142aa2de0(void)

void FUN_142aa2de0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1454dd928;
    return;
  }
  return;
}



// FUNCTION 142aa2e30 IsDone body=120 status=ok
// SIG undefined IsDone(void)

undefined8 FAsyncRealtimeAudioTaskProxy<FXAudio2SoundBuffer>::IsDone(LPCRITICAL_SECTION param_1)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  int iVar2;
  PRTL_CRITICAL_SECTION_DEBUG p_Var3;
  BOOL BVar4;
  undefined8 uVar5;
  
  BVar4 = TryEnterCriticalSection(param_1);
  if (BVar4 == 0) {
    EnterCriticalSection(param_1);
  }
  p_Var3 = param_1[1].DebugInfo;
  p_Var1 = p_Var3 + 1;
  LOCK();
  iVar2._0_2_ = p_Var1->Type;
  iVar2._2_2_ = p_Var1->CreatorBackTraceIndex;
  if (iVar2 == 0) {
    p_Var1->Type = 0;
    p_Var1->CreatorBackTraceIndex = 0;
  }
  UNLOCK();
  if (iVar2 == 0) {
    if (p_Var3[1].ProcessLocksList.Flink != (_LIST_ENTRY *)0x0) {
      (**(code **)&(p_Var3[1].CriticalSection)->DebugInfo->EntryCount)
                (p_Var3[1].CriticalSection,0xffffffff,0);
      p_Var3[1].ProcessLocksList.Flink = (_LIST_ENTRY *)0x0;
    }
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  LeaveCriticalSection(param_1);
  return uVar5;
}



// FUNCTION 142aa2eb0 IsFinished body=137 status=ok
// SIG undefined IsFinished(void)

undefined8 FXAudio2SoundSource::IsFinished(longlong param_1)

{
  bool bVar1;
  
  if (((*(byte *)(param_1 + 0x78) & 8) != 0) || ((*(byte *)(param_1 + 0x78) & 0x10) == 0)) {
    return 0;
  }
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (((*(byte *)(param_1 + 0x7c) & 1) != 0 || (*(longlong *)(param_1 + 0x98) != 0)))) {
    LOCK();
    bVar1 = *(int *)(param_1 + 0x19c) == 0;
    if (bVar1) {
      *(int *)(param_1 + 0x19c) = 0;
    }
    UNLOCK();
    if (bVar1) {
      LOCK();
      bVar1 = *(int *)(param_1 + 0x198) == 0;
      if (bVar1) {
        *(int *)(param_1 + 0x198) = 0;
      }
      UNLOCK();
      if (bVar1) {
        return 0;
      }
      if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x9c) != 1) {
        return 0;
      }
      FUN_1422d1b70(*(longlong *)(param_1 + 0x10),0);
      LOCK();
      *(undefined4 *)(param_1 + 0x198) = 0;
      UNLOCK();
      return 0;
    }
    FUN_1422d1b70(*(undefined8 *)(param_1 + 0x10),0);
  }
  return 1;
}



// FUNCTION 142aa2f40 IsPreparedToInit body=46 status=ok
// SIG undefined IsPreparedToInit(void)

undefined8 FXAudio2SoundSource::IsPreparedToInit(longlong param_1)

{
  char cVar1;
  
  if ((*(byte *)(param_1 + 0x7c) & 1) != 0) {
    return 1;
  }
  if ((*(longlong **)(param_1 + 0x90) != (longlong *)0x0) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x40))(), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 142aa2f70 IsRealTimeSourceReady body=137 status=ok
// SIG undefined IsRealTimeSourceReady(void)

char FXAudio2SoundBuffer::IsRealTimeSourceReady(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  char cVar2;
  
  if (*(longlong *)(param_1 + 0x98) != 0) {
    cVar2 = FAsyncRealtimeAudioTaskProxy<FXAudio2SoundBuffer>::IsDone();
    if (cVar2 != '\0') {
      lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x98);
      if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
        p_Var1 = lpCriticalSection[1].DebugInfo;
        if (p_Var1 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
          (**(code **)(*(longlong *)p_Var1 + 0x10))(p_Var1,1);
        }
        DeleteCriticalSection(lpCriticalSection);
        FMemory::operator_delete(lpCriticalSection,0x30);
      }
      *(undefined8 *)(param_1 + 0x98) = 0;
    }
    return cVar2;
  }
  return '\x01';
}



// FUNCTION 142aa3000 LockForProcess body=66 status=ok
// SIG undefined LockForProcess(void)

undefined8
FXAudio2RadioEffect::LockForProcess(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = CXAPOBase::LockForProcess();
  if (-1 < (int)uVar2) {
    puVar1 = (undefined8 *)*param_3;
    uVar2 = puVar1[1];
    *(undefined8 *)(param_1 + 99) = *puVar1;
    *(undefined8 *)(param_1 + 0x6b) = uVar2;
    *(undefined2 *)(param_1 + 0x73) = *(undefined2 *)(puVar1 + 2);
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 142aa3050 OnBufferEnd body=178 status=ok
// SIG undefined OnBufferEnd(void)

ulonglong FXAudio2SoundSourceCallback::OnBufferEnd(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  ulonglong in_RAX;
  bool bVar5;
  undefined1 local_28 [8];
  uint local_20;
  
  if (param_2 != 0) {
    in_RAX = 0;
    LOCK();
    uVar1 = *(uint *)(param_2 + 0x74);
    if (uVar1 == 0) {
      *(uint *)(param_2 + 0x74) = 0;
    }
    else {
      in_RAX = (ulonglong)uVar1;
    }
    UNLOCK();
    if ((uVar1 != 0) && (plVar3 = *(longlong **)(param_2 + 0x98), plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 200))(plVar3,local_28);
      iVar2 = *(int *)(*(ulonglong *)(param_2 + 0x90) + 0x30);
      if ((iVar2 == 3) || (iVar2 == 6)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (local_20 == 0) {
        LOCK();
        bVar5 = *(int *)(param_2 + 0x1a8) == 0;
        if (bVar5) {
          *(int *)(param_2 + 0x1a8) = 0;
        }
        UNLOCK();
        if ((!bVar5) || (!bVar4)) {
          LOCK();
          uVar1 = *(uint *)(param_2 + 0x19c);
          *(uint *)(param_2 + 0x19c) = 1;
          UNLOCK();
          return (ulonglong)uVar1;
        }
      }
      else if (!bVar4) {
        return *(ulonglong *)(param_2 + 0x90);
      }
      in_RAX = 0;
      LOCK();
      uVar1 = *(uint *)(param_2 + 0x1a8);
      if (uVar1 == 0) {
        *(uint *)(param_2 + 0x1a8) = 0;
      }
      else {
        in_RAX = (ulonglong)uVar1;
      }
      UNLOCK();
      if ((uVar1 == 0) && (local_20 < 3)) {
        in_RAX = FUN_142aa2080(param_2,local_20 < 2);
      }
    }
  }
  return in_RAX;
}



// FUNCTION 142aa3110 OnDefaultDeviceChanged body=505 status=ok
// SIG undefined OnDefaultDeviceChanged(void)

undefined8 FMMNotificationClient::OnDefaultDeviceChanged(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint *puVar10;
  int local_88;
  uint uStack_84;
  uint uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  int iStack_60;
  uint uStack_5c;
  uint *local_58;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 uStack_38;
  uint *puStack_30;
  uint uStack_28;
  uint uStack_24;
  undefined8 uStack_20;
  
  uStack_84 = 1;
  plVar1 = (longlong *)(param_1 + 0x10);
  uVar3 = *(uint *)(param_1 + 0x38);
  puVar2 = (uint *)(param_1 + 0x20);
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar10 = *(uint **)(param_1 + 0x30);
    if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
      puVar10 = puVar2;
    }
    uVar4 = *puVar10;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar4 == 0) {
      lVar8 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar6 = local_88 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar6;
      if (bVar5) goto LAB_142aa31dd;
      uVar4 = puVar10[lVar8 + 1];
    }
    uStack_84 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_74 = (iStack_70 - iVar6) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_142aa31dd:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x38);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar9 = uVar4 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar2;
  local_40 = plVar1;
  puStack_30 = puVar2;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar4;
  if (uVar4 != uVar3) {
    puVar10 = *(uint **)(param_1 + 0x30);
    if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
      puVar10 = puVar2;
    }
    uVar7 = puVar10[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar6 = (int)uVar4 >> 5;
    while (uVar7 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_142aa32a3;
      uVar7 = puVar10[(longlong)iVar6 + 1];
      iVar6 = iVar6 + 1;
    }
    uVar7 = -uVar7 & uVar7;
    iVar6 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_74 = (uVar9 - iVar6) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_142aa32a3:
      uStack_74 = uVar3;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar2))) {
    (**(code **)(**(longlong **)(*plVar1 + (longlong)(int)uStack_4c * 0x10) + 8))();
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return 0;
}



// FUNCTION 142aa3330 OnDeviceRemoved body=615 status=ok
// SIG undefined OnDeviceRemoved(void)

undefined8 FMMNotificationClient::OnDeviceRemoved(longlong param_1,short *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  undefined8 local_98;
  ulonglong uStack_90;
  uint local_88;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  longlong *local_50;
  int iStack_48;
  uint uStack_44;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  uVar10 = *(uint *)(param_1 + 0x38);
  puVar2 = (uint *)(param_1 + 0x20);
  local_98._0_4_ = 0;
  local_98._4_4_ = 1;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar10 != 0) {
    puVar12 = *(uint **)(param_1 + 0x30);
    if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
      puVar12 = puVar2;
    }
    uVar3 = *puVar12;
    while (uVar3 == 0) {
      lVar9 = (longlong)(int)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar7 = (int)local_98 + 1;
      bVar5 = (int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 <= (int)local_98;
      local_98._0_4_ = iVar7;
      if (bVar5) goto LAB_142aa340c;
      uVar3 = puVar12[lVar9 + 1];
    }
    local_98._4_4_ = -uVar3 & uVar3;
    iVar7 = 0x1f;
    if (local_98._4_4_ != 0) {
      for (; local_98._4_4_ >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (local_98._4_4_ == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_84 = (iStack_80 - iVar7) + 0x1f;
    if ((int)uVar10 < (int)uStack_84) {
LAB_142aa340c:
      uStack_84 = uVar10;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x38);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  local_88 = -1 << ((byte)uVar3 & 0x1f);
  iStack_48 = (int)local_98;
  uStack_44 = local_98._4_4_;
  uVar11 = uVar3 & 0xffffffe0;
  iStack_70 = (int)local_98;
  uStack_6c = local_98._4_4_;
  uStack_84 = uVar3;
  local_68 = puVar2;
  local_50 = plVar1;
  puStack_40 = puVar2;
  uStack_30 = local_58;
  local_78 = plVar1;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  if (uVar3 != uVar10) {
    puVar12 = *(uint **)(param_1 + 0x30);
    if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
      puVar12 = puVar2;
    }
    uVar8 = puVar12[(int)uVar3 >> 5] & local_88;
    iVar7 = (int)uVar3 >> 5;
    while (uVar8 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
      goto LAB_142aa34d2;
      uVar8 = puVar12[(longlong)iVar7 + 1];
      local_88 = 0xffffffff;
      iVar7 = iVar7 + 1;
    }
    uVar8 = -uVar8 & uVar8;
    iVar7 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_84 = (uVar11 - iVar7) + 0x1f;
    uVar3 = uStack_84;
    if ((int)uVar10 < (int)uStack_84) {
LAB_142aa34d2:
      uStack_84 = uVar10;
      uVar3 = uVar10;
    }
  }
  while (((uStack_5c != uVar3 || (local_68 != puVar2)) || (local_78 != plVar1))) {
    uStack_90 = 0;
    puVar4 = *(undefined8 **)(*local_78 + (longlong)(int)uStack_5c * 0x10);
    local_98 = 0;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      lVar9 = -1;
      do {
        lVar6 = lVar9 + 1;
        lVar9 = lVar9 + 1;
      } while (param_2[lVar6] != 0);
      uVar10 = (int)lVar9 + 1;
      uStack_90 = (ulonglong)uVar10;
      if (0 < (int)uVar10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
      }
      FGenericPlatformString::Memcpy(local_98,param_2,(longlong)(int)uVar10 * 2);
    }
    (**(code **)*puVar4)(puVar4);
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  return 0;
}



// FUNCTION 142aa35a0 FUN_142aa35a0 body=288 status=ok
// SIG undefined FUN_142aa35a0(void)

ulonglong FUN_142aa35a0(longlong param_1,longlong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined2 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  uint uVar8;
  undefined2 *local_38;
  ulonglong local_30;
  
  puVar7 = &DAT_143f3eda8;
  local_38 = (undefined2 *)0x0;
  local_30 = 0;
  puVar6 = (undefined2 *)0x0;
  if (DAT_146b2a290 != 0) {
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while ((&DAT_146b2a290)[lVar5] != 0);
    uVar4 = (int)lVar5 + 1;
    local_30 = (ulonglong)uVar4;
    uVar8 = uVar4;
    if (0 < (int)uVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      uVar8 = (uint)local_30;
    }
    puVar3 = local_38;
    FGenericPlatformString::Memcpy(local_38,&DAT_146b2a290,(longlong)(int)uVar4 * 2);
    puVar6 = puVar3;
    if (uVar8 != 0) goto LAB_142aa3654;
  }
  puVar3 = &DAT_143f3eda8;
LAB_142aa3654:
  if ((int)param_2[1] != 0) {
    puVar7 = (undefined2 *)*param_2;
  }
  uVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar3);
  iVar1 = (int)uVar2;
  if (puVar6 != (undefined2 *)0x0) {
    uVar2 = FMemory::Free(puVar6);
  }
  if (iVar1 == 0) {
    LOCK();
    uVar8 = *(uint *)(param_1 + 0x1fc);
    *(uint *)(param_1 + 0x1fc) = 1;
    uVar2 = (ulonglong)uVar8;
    UNLOCK();
    LOCK();
    *(undefined4 *)(param_1 + 0x200) = 0;
    UNLOCK();
  }
  if (*param_2 != 0) {
    uVar2 = FMemory::Free();
    return uVar2;
  }
  return uVar2;
}



// FUNCTION 142aa36c0 OnDeviceStateChanged body=656 status=ok
// SIG undefined OnDeviceStateChanged(void)

undefined8 FMMNotificationClient::OnDeviceStateChanged(longlong param_1,short *param_2,int param_3)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  undefined8 local_98;
  ulonglong uStack_90;
  uint local_88;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  longlong *local_50;
  int iStack_48;
  uint uStack_44;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  if (((param_3 - 2U & 0xfffffff9) == 0) && (param_3 != 6)) {
    plVar1 = (longlong *)(param_1 + 0x10);
    uVar10 = *(uint *)(param_1 + 0x38);
    puVar2 = (uint *)(param_1 + 0x20);
    local_98._0_4_ = 0;
    local_98._4_4_ = 1;
    uStack_84 = 0;
    iStack_80 = 0;
    if (uVar10 != 0) {
      puVar12 = *(uint **)(param_1 + 0x30);
      if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
        puVar12 = puVar2;
      }
      uVar3 = *puVar12;
      local_98._0_4_ = 0;
      iStack_80 = 0;
      while (uVar3 == 0) {
        lVar9 = (longlong)(int)local_98;
        iStack_80 = iStack_80 + 0x20;
        iVar7 = (int)local_98 + 1;
        bVar5 = (int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 <= (int)local_98;
        local_98._0_4_ = iVar7;
        if (bVar5) goto LAB_142aa37ac;
        uVar3 = puVar12[lVar9 + 1];
      }
      local_98._4_4_ = -uVar3 & uVar3;
      iVar7 = 0x1f;
      if (local_98._4_4_ != 0) {
        for (; local_98._4_4_ >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (local_98._4_4_ == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      uStack_84 = (iStack_80 - iVar7) + 0x1f;
      if ((int)uVar10 < (int)uStack_84) {
LAB_142aa37ac:
        uStack_84 = uVar10;
      }
    }
    uVar3 = *(uint *)(param_1 + 0x38);
    uStack_60 = 0xffffffff;
    uStack_5c = uStack_84;
    local_58 = CONCAT44(uStack_7c,iStack_80);
    local_88 = -1 << ((byte)uVar3 & 0x1f);
    iStack_48 = (int)local_98;
    uStack_44 = local_98._4_4_;
    uVar11 = uVar3 & 0xffffffe0;
    iStack_70 = (int)local_98;
    uStack_6c = local_98._4_4_;
    uStack_84 = uVar3;
    local_68 = puVar2;
    local_50 = plVar1;
    puStack_40 = puVar2;
    uStack_30 = local_58;
    local_78 = plVar1;
    uStack_38 = uStack_60;
    uStack_34 = uStack_5c;
    if (uVar3 != uVar10) {
      puVar12 = *(uint **)(param_1 + 0x30);
      if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
        puVar12 = puVar2;
      }
      uVar8 = puVar12[(int)uVar3 >> 5] & local_88;
      iVar7 = (int)uVar3 >> 5;
      while (uVar8 == 0) {
        uVar11 = uVar11 + 0x20;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
        goto LAB_142aa3872;
        uVar8 = puVar12[(longlong)iVar7 + 1];
        local_88 = 0xffffffff;
        iVar7 = iVar7 + 1;
      }
      uVar8 = -uVar8 & uVar8;
      iVar7 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uVar8 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      uStack_84 = (uVar11 - iVar7) + 0x1f;
      uVar3 = uStack_84;
      if ((int)uVar10 < (int)uStack_84) {
LAB_142aa3872:
        uStack_84 = uVar10;
        uVar3 = uVar10;
      }
    }
    while (((uStack_5c != uVar3 || (local_68 != puVar2)) || (local_78 != plVar1))) {
      uStack_90 = 0;
      puVar4 = *(undefined8 **)(*local_78 + (longlong)(int)uStack_5c * 0x10);
      local_98 = 0;
      if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
        lVar9 = -1;
        do {
          lVar6 = lVar9 + 1;
          lVar9 = lVar9 + 1;
        } while (param_2[lVar6] != 0);
        uVar10 = (int)lVar9 + 1;
        uStack_90 = (ulonglong)uVar10;
        if (0 < (int)uVar10) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
        }
        FGenericPlatformString::Memcpy(local_98,param_2,(longlong)(int)uVar10 * 2);
      }
      (**(code **)*puVar4)(puVar4);
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
    }
  }
  return 0;
}



// FUNCTION 142aa3970 Pause body=101 status=ok
// SIG undefined Pause(void)

void FXAudio2SoundSource::Pause(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x98);
    if (plVar1 != (longlong *)0x0) {
      plVar2 = *(longlong **)(param_1 + 0x80);
      lVar3 = *plVar2;
      uVar4 = (**(code **)(*plVar1 + 0xa0))(plVar1,0,0);
      (**(code **)(lVar3 + 0xa0))(plVar2,L"Stop",uVar4);
    }
    *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) | 8;
  }
  return;
}



// FUNCTION 142aa39e0 Play body=131 status=ok
// SIG undefined Play(void)

void FXAudio2SoundSource::Play(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x98);
    if ((plVar1 != (longlong *)0x0) && ((*(byte *)(param_1 + 0x78) & 0x10) != 0)) {
      plVar2 = *(longlong **)(param_1 + 0x80);
      lVar3 = *plVar2;
      uVar4 = (**(code **)(*plVar1 + 0x98))(plVar1,0,0);
      (**(code **)(lVar3 + 0xa0))(plVar2,L"Start",uVar4);
    }
    *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) & 0xf7;
    LOCK();
    *(undefined4 *)(param_1 + 0x74) = 1;
    UNLOCK();
    LOCK();
    *(undefined4 *)(param_1 + 0x1a8) = 0;
    UNLOCK();
    LOCK();
    *(undefined4 *)(param_1 + 0x198) = 0;
    UNLOCK();
  }
  return;
}



// FUNCTION 142aa3a70 FUN_142aa3a70 body=217 status=ok
// SIG undefined FUN_142aa3a70(void)

ulonglong FUN_142aa3a70(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  bool bVar7;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x718);
  piVar1 = (int *)(lVar2 + 0x200);
  LOCK();
  bVar7 = *piVar1 == 0;
  if (bVar7) {
    *piVar1 = 0;
  }
  UNLOCK();
  uVar4 = *(uint *)(param_1 + 0x7c);
  if (bVar7) {
    uVar4 = uVar4 | 1;
    *(uint *)(param_1 + 0x7c) = uVar4;
  }
  uVar5 = (ulonglong)uVar4;
  *(undefined8 **)(param_1 + 0x10) = param_2;
  if ((uVar4 & 1) == 0) {
    *(uint *)(param_1 + 0x1ac) = *(uint *)(param_1 + 0x1ac) & 0xfffffffb;
    if (*(int *)(param_2 + 0x19) != 1) {
      *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) & 0xef;
      plVar6 = (longlong *)
               FUN_142aa2300(*(undefined8 *)(param_2[0xc] + 0x40),*param_2,
                             CONCAT71((int7)((ulonglong)lVar2 >> 8),0.0 < *(float *)(param_2 + 0x14)
                                     ));
      *(longlong **)(param_1 + 0x90) = plVar6;
      uVar5 = 0;
      if (plVar6 != (longlong *)0x0) {
        cVar3 = (**(code **)(*plVar6 + 0x40))(plVar6);
        if (cVar3 == '\0') {
          *(uint *)(param_1 + 0x1ac) = *(uint *)(param_1 + 0x1ac) | 1;
        }
        *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x90);
        *(undefined4 *)(param_1 + 0x28) = 0x469c4000;
        *(undefined4 *)(param_1 + 0x30) = 0x7f7fffff;
        LOCK();
        *(undefined4 *)(param_1 + 0x19c) = 0;
        UNLOCK();
        return CONCAT71((int7)((ulonglong)*(undefined8 *)(param_1 + 0x90) >> 8),1);
      }
    }
    return uVar5 & 0xffffffffffffff00;
  }
  LOCK();
  *(undefined4 *)(param_1 + 0x19c) = 0;
  UNLOCK();
  return CONCAT71((uint7)(uint3)(uVar4 >> 8),1);
}



// FUNCTION 142aa3b50 FUN_142aa3b50 body=685 status=ok
// SIG undefined FUN_142aa3b50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142aa3b50(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  float fVar1;
  float _Y;
  float fVar2;
  float fVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float *pfVar10;
  uint uVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if ((param_6 != 0) && (DAT_1464a97d8 != 0.0)) {
    CXAPOParametersBase::BeginProcess();
    lVar8 = DAT_146b2a6e0;
    uVar11 = (uint)*(ushort *)(param_1 + 0x65) * *(int *)((longlong)param_3 + 0xc);
    uVar12 = (ulonglong)uVar11;
    cVar5 = FUN_1415ad720(&DAT_1468e2448);
    lVar9 = 4;
    if ((cVar5 == '\0') &&
       ((DAT_1468c21ae != '\0' && (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)))) {
      lVar7 = 4;
    }
    else {
      lVar7 = 0;
    }
    lVar4 = DAT_146b2a6e8;
    fVar1 = *(float *)(lVar7 + lVar8);
    cVar5 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
      lVar8 = 4;
    }
    else {
      lVar8 = 0;
    }
    lVar7 = DAT_146b2a6f0;
    _Y = *(float *)(lVar8 + lVar4);
    cVar5 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
      lVar8 = 4;
    }
    else {
      lVar8 = 0;
    }
    lVar4 = DAT_146b2a6f8;
    fVar2 = *(float *)(lVar8 + lVar7);
    cVar5 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
      lVar9 = 0;
    }
    fVar3 = *(float *)(lVar9 + lVar4);
    if (*(int *)(param_3 + 1) == 1) {
      pfVar10 = (float *)*param_3;
      if (uVar11 != 0) {
        do {
          fVar15 = *pfVar10;
          if (fVar15 != 0.0) {
            fVar13 = _guard_xfg_dispatch_icall_nop(fVar15,_Y);
            fVar16 = DAT_146b2a714 * _DAT_146b2a704;
            fVar14 = DAT_146b2a718 * _DAT_146b2a708;
            DAT_146b2a718 = DAT_146b2a714;
            DAT_146b2a714 = (fVar13 * fVar1 - fVar15 * fVar15 * fVar15 * fVar2) + fVar15 * fVar3;
            fVar15 = DAT_146b2a720 * _DAT_146b2a710;
            DAT_146b2a720 = DAT_146b2a71c;
            DAT_146b2a71c =
                 fVar16 + DAT_146b2a700 * DAT_146b2a714 + fVar14 + DAT_146b2a71c * _DAT_146b2a70c +
                 fVar15;
            *pfVar10 = DAT_146b2a71c;
          }
          pfVar10 = pfVar10 + 1;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      CXAPOParametersBase::EndProcess(param_1);
    }
  }
  return;
}



// FUNCTION 142aa3e00 QueryInterface body=143 status=ok
// SIG undefined QueryInterface(void)

undefined8
CXAPOParametersBase::QueryInterface(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  
  if ((*param_2 == -0x1768176856f43fff) && (param_2[1] == 0x1000000479ee455)) {
    plVar1 = param_1 + 6;
    if (param_1 == (longlong *)0x0) {
      plVar1 = (longlong *)0x0;
    }
    *param_3 = plVar1;
    LOCK();
    *(int *)((longlong)param_1 + 0x2c) = *(int *)((longlong)param_1 + 0x2c) + 1;
    UNLOCK();
    return 0;
  }
  if (((*param_2 != -0x1768176856f43fff) || (param_2[1] != 0x479ee455)) &&
     ((*param_2 != 0 || (param_2[1] != 0x46000000000000c0)))) {
    *param_3 = 0;
    return 0x80004002;
  }
  *param_3 = param_1;
  (**(code **)(*param_1 + 8))();
  return 0;
}



// FUNCTION 142aa3f00 FUN_142aa3f00 body=550 status=ok
// SIG undefined FUN_142aa3f00(void)

ulonglong FUN_142aa3f00(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  _LIST_ENTRY *p_Var2;
  _LIST_ENTRY *p_Var3;
  _RTL_CRITICAL_SECTION *p_Var4;
  uint uVar7;
  LPCRITICAL_SECTION lpCriticalSection;
  PRTL_CRITICAL_SECTION_DEBUG p_Var5;
  ulonglong uVar6;
  DWORD DVar8;
  longlong lVar9;
  
  lVar9 = (longlong)param_2;
  p_Var2 = (_LIST_ENTRY *)**(longlong **)(param_1 + 0x10);
  if ((p_Var2 == (_LIST_ENTRY *)0x0) || (((ulonglong)p_Var2[0xb].Flink & 0x4000000) == 0)) {
    if (param_3 == '\0') {
      uVar6 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x20))
                        (*(longlong **)(param_1 + 0x90),
                         *(undefined8 *)((lVar9 + 5) * 0x2c + param_1),
                         *(int *)((longlong)*(longlong **)(param_1 + 0x10) + 0x9c) != 0);
      return uVar6;
    }
    lpCriticalSection = (LPCRITICAL_SECTION)operator_new(0x30);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
LAB_142aa40f8:
      lpCriticalSection = (LPCRITICAL_SECTION)0x0;
    }
    else {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x9c);
      p_Var4 = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x90);
      p_Var2 = *(_LIST_ENTRY **)((lVar9 + 5) * 0x2c + param_1);
      InitializeCriticalSection(lpCriticalSection);
      SetCriticalSectionSpinCount(lpCriticalSection,4000);
      p_Var5 = (PRTL_CRITICAL_SECTION_DEBUG)operator_new(0x48);
      if (p_Var5 == (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
        lpCriticalSection[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      }
      else {
        *(undefined ***)p_Var5 = &PTR_Abandon_1454ddc00;
        p_Var5->CriticalSection = p_Var4;
        (p_Var5->ProcessLocksList).Blink = p_Var2;
        *(undefined1 *)&p_Var5->Flags = 1;
        uVar7._0_2_ = p_Var5->CreatorBackTraceIndexHigh;
        uVar7._2_2_ = p_Var5->SpareWORD;
        uVar7 = (uint)(param_3 == '\x02') | uVar7 & 0xfffffff8 | -(uint)(iVar1 != 0) & 2;
        p_Var5->CreatorBackTraceIndexHigh = (short)uVar7;
        p_Var5->SpareWORD = (short)(uVar7 >> 0x10);
        p_Var5[1].Type = 0;
        p_Var5[1].CreatorBackTraceIndex = 0;
        p_Var5[1].CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
        p_Var5[1].ProcessLocksList.Flink = (_LIST_ENTRY *)0x0;
        lpCriticalSection[1].DebugInfo = p_Var5;
      }
    }
  }
  else {
    DVar8 = *(int *)(*(longlong *)(param_1 + 0x18) + 0xc) << 0xd;
    if ((param_3 == '\0') || (((ulonglong)p_Var2[0xb].Flink & 0x20000000) == 0)) {
      uVar6 = (*(code *)p_Var2->Flink[0x31].Flink)
                        (p_Var2,*(undefined8 *)((lVar9 + 5) * 0x2c + param_1),DVar8);
      *(int *)(lVar9 * 0x2c + 0xd8 + param_1) = (int)uVar6;
      goto LAB_142aa410b;
    }
    lpCriticalSection = (LPCRITICAL_SECTION)operator_new(0x30);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) goto LAB_142aa40f8;
    p_Var3 = *(_LIST_ENTRY **)((lVar9 + 5) * 0x2c + param_1);
    InitializeCriticalSection(lpCriticalSection);
    SetCriticalSectionSpinCount(lpCriticalSection,4000);
    p_Var5 = (PRTL_CRITICAL_SECTION_DEBUG)operator_new(0x48);
    if (p_Var5 == (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      lpCriticalSection[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    }
    else {
      *(undefined ***)p_Var5 = &PTR_Abandon_1454ddc00;
      (p_Var5->ProcessLocksList).Flink = p_Var2;
      (p_Var5->ProcessLocksList).Blink = p_Var3;
      p_Var5->EntryCount = DVar8;
      p_Var5->ContentionCount = 0;
      *(undefined1 *)&p_Var5->Flags = 2;
      p_Var5[1].Type = 0;
      p_Var5[1].CreatorBackTraceIndex = 0;
      p_Var5[1].CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
      p_Var5[1].ProcessLocksList.Flink = (_LIST_ENTRY *)0x0;
      lpCriticalSection[1].DebugInfo = p_Var5;
    }
  }
  *(LPCRITICAL_SECTION *)(param_1 + 0xa8) = lpCriticalSection;
  uVar6 = FAsyncRealtimeAudioTaskProxy<FXAudio2SoundBuffer>::StartBackgroundTask(lpCriticalSection);
LAB_142aa410b:
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 142aa4130 Release body=44 status=ok
// SIG undefined Release(void)

int CXAPOParametersBase::Release(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  LOCK();
  piVar1 = (int *)((longlong)param_1 + 0x2c);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  iVar3 = iVar2 + -1;
  if ((iVar3 == 0) && (param_1 != (longlong *)0x0)) {
    (**(code **)(*param_1 + 0x70))(param_1,iVar2);
  }
  return iVar3;
}



// FUNCTION 142aa4170 Release body=161 status=ok
// SIG undefined Release(void)

int FMMNotificationClient::Release(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 + -1 == 0) && (param_1 != (undefined8 *)0x0)) {
    *param_1 = &PTR_GetPoolName_1454dd9a8;
    plVar3 = (longlong *)param_1[0xc];
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x38))(plVar3,param_1);
      if ((longlong *)param_1[0xc] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xc] + 0x10))();
        param_1[0xc] = 0;
      }
    }
    if (*(char *)(param_1 + 0xd) != '\0') {
      FWindowsPlatformMisc::CoUninitialize();
    }
    *(undefined4 *)(param_1 + 0xb) = 0;
    if (param_1[10] != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (param_1 + 2);
    FMemory::operator_delete(param_1,0x70);
  }
  return iVar2 + -1;
}



// FUNCTION 142aa4220 RouteHexToDry body=597 status=ok
// SIG undefined RouteHexToDry(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FXAudio2SoundSource::RouteHexToDry(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ulonglong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  longlong lStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0x90);
  if (plVar1 == (longlong *)0x0) {
LAB_142aa4268:
    if ((*(byte *)(**(longlong **)(param_1 + 0x10) + 0xb4) & 0x10) == 0) {
      local_a8 = *param_2;
      local_b8 = &local_a8;
      uStack_8c = param_2[1];
      local_48 = 0;
      lStack_40 = 0;
      local_1c = param_2[5];
      local_88 = 0;
      uStack_84 = 0;
      uStack_80 = 0;
      uStack_7c = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_38 = param_2[4];
      local_a4 = 0;
      local_9c = 0;
      uStack_98 = 0;
      uStack_94 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_74 = 0;
      local_70 = (ulonglong)(uint)param_2[2];
      local_58 = (ulonglong)(uint)param_2[3] << 0x20;
      local_50 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      local_20 = 0;
      lVar5 = **(longlong **)(param_1 + 0x80);
      local_b0 = 0;
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x80))
                        (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xb4),6);
      pwVar4 = L"SetOutputMatrix (6 channel)";
      goto LAB_142aa4444;
    }
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 == '\0') goto LAB_142aa4268;
  }
  local_a8 = *param_2;
  local_b8 = &local_a8;
  local_88 = param_2[1];
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_74 = param_2[2];
  local_68 = 0;
  uStack_60 = 0;
  local_20 = param_2[5];
  local_a4 = 0;
  local_9c = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_58 = 0;
  local_50 = (ulonglong)(uint)param_2[3] << 0x20;
  local_48 = 0;
  lStack_40 = (ulonglong)(uint)param_2[4] << 0x20;
  local_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  local_1c = 0;
  lVar5 = **(longlong **)(param_1 + 0x80);
  local_b0 = 0;
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x80))
                    (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xb4),6);
  pwVar4 = L"SetOutputMatrix (6 channel OGG)";
LAB_142aa4444:
  (**(code **)(lVar5 + 0xa0))(*(undefined8 *)(param_1 + 0x80),pwVar4,uVar3);
  return;
}



// FUNCTION 142aa4480 RouteStereoToDry body=478 status=ok
// SIG undefined RouteStereoToDry(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FXAudio2SoundSource::RouteStereoToDry(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined4 *local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_48 = *param_2;
  local_3c = param_2[1];
  local_50 = 0;
  if ((*(uint *)(param_1 + 0x1ac) >> 1 & 1) == 0) {
    plVar1 = *(longlong **)(param_1 + 0x98);
    if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xa4) & 0x20) == 0) {
      uStack_30 = CONCAT44(param_2[3],param_2[3]);
      local_28 = param_2[4];
      uStack_1c = param_2[5];
      local_58 = &local_48;
      local_44 = 0;
      local_38 = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      lVar4 = **(longlong **)(param_1 + 0x80);
      uVar2 = (**(code **)(*plVar1 + 0x80))(plVar1,*(undefined8 *)(param_1 + 0xb4),2);
      pwVar3 = L"SetOutputMatrix (stereo)";
    }
    else {
      local_44 = CONCAT44(local_3c,param_2[8]);
      local_38 = CONCAT44(param_2[10],param_2[2]);
      uStack_24 = param_2[0xc];
      uStack_30 = CONCAT44(param_2[0xb],param_2[3]);
      local_28 = param_2[4];
      uStack_1c = param_2[0xd];
      uStack_20 = param_2[5];
      local_58 = &local_48;
      lVar4 = **(longlong **)(param_1 + 0x80);
      local_3c = param_2[9];
      uVar2 = (**(code **)(*plVar1 + 0x80))(plVar1,*(undefined8 *)(param_1 + 0xb4));
      pwVar3 = L"SetOutputMatrix (stereo)";
    }
  }
  else {
    local_58 = &local_48;
    local_44 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    lVar4 = **(longlong **)(param_1 + 0x80);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x80))
                      (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xb4));
    pwVar3 = L"SetOutputMatrix (stereo)";
  }
  (**(code **)(lVar4 + 0xa0))(*(undefined8 *)(param_1 + 0x80),pwVar3,uVar2);
  return;
}



// FUNCTION 142aa4660 RouteStereoToReverb body=161 status=ok
// SIG undefined RouteStereoToReverb(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FXAudio2SoundSource::RouteStereoToReverb(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  local_28 = *(undefined4 *)(param_2 + 0x18);
  local_38 = &local_28;
  local_24 = 0;
  lVar1 = **(longlong **)(param_1 + 0x80);
  local_30 = 0;
  local_1c = local_28;
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x80))
                    (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xc0),2);
  (**(code **)(lVar1 + 0xa0))
            (*(undefined8 *)(param_1 + 0x80),L"SetOutputMatrix (Stereo reverb)",uVar2);
  return;
}



// FUNCTION 142aa4730 SetEQEffectParameters body=154 status=ok
// SIG undefined SetEQEffectParameters(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FXAudio2EffectsManager::SetEQEffectParameters(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  plVar1 = *(longlong **)(param_1 + 0x220);
  if (plVar1 != (longlong *)0x0) {
    local_48 = *(undefined8 *)(param_2 + 8);
    uStack_40 = *(undefined8 *)(param_2 + 0x10);
    plVar2 = *(longlong **)(param_1 + 0x1f8);
    local_58 = 0;
    local_38 = *(undefined8 *)(param_2 + 0x18);
    uStack_30 = *(undefined8 *)(param_2 + 0x20);
    local_28 = *(undefined4 *)(param_2 + 0x28);
    uStack_24 = *(undefined4 *)(param_2 + 0x2c);
    uStack_20 = *(undefined4 *)(param_2 + 0x30);
    uStack_1c = *(undefined4 *)(param_2 + 0x34);
    lVar3 = *plVar2;
    uVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,0,&local_48,0x30);
    (**(code **)(lVar3 + 0xa0))(plVar2,L"SetEffectParameters (EQ)",uVar4);
  }
  return;
}



// FUNCTION 142aa47d0 SetRadioEffectParameters body=92 status=ok
// SIG undefined SetRadioEffectParameters(void)

void FXAudio2EffectsManager::SetRadioEffectParameters(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = **(longlong **)(param_1 + 0x1f8);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x230) + 0x30))
                    (*(longlong **)(param_1 + 0x230),0,param_2,1,0);
                    /* WARNING: Could not recover jumptable at 0x000142aa4829. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0xa0))(*(undefined8 *)(param_1 + 0x1f8),L"SetEffectParameters (Radio)",uVar2)
  ;
  return;
}



// FUNCTION 142aa4830 FUN_142aa4830 body=777 status=ok
// SIG undefined FUN_142aa4830(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142aa4830(longlong param_1,longlong param_2)

{
  float fVar1;
  float _X;
  float fVar2;
  float fVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 local_d0;
  undefined4 local_cf;
  undefined1 local_cb;
  undefined1 local_ca;
  undefined1 local_c9;
  char local_c8;
  undefined1 local_c7;
  char local_c6;
  undefined1 local_c5;
  undefined4 local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  if (*(longlong *)(param_1 + 0x228) != 0) {
    iVar5 = FAudioEffectsManager::VolumeToMilliBels
                      (param_1,*(float *)(param_2 + 8) * *(float *)(param_2 + 0x14),0);
    iVar6 = FAudioEffectsManager::VolumeToMilliBels(param_1);
    fVar1 = *(float *)(param_2 + 0x1c);
    _X = *(float *)(param_2 + 0x20);
    iVar7 = FAudioEffectsManager::VolumeToMilliBels(param_1);
    fVar11 = *(float *)(param_2 + 0x28);
    iVar8 = FAudioEffectsManager::VolumeToMilliBels(param_1);
    fVar2 = *(float *)(param_2 + 0xc);
    fVar12 = *(float *)(param_2 + 0x30);
    fVar3 = *(float *)(param_2 + 0x10);
    local_cf = 0x1b060605;
    local_cb = 0x1b;
    local_a8 = 0x42c80000;
    local_c7 = 4;
    local_c5 = 6;
    local_c0 = (float)iVar5 * 0.01;
    local_bc = (float)iVar6 * 0.01;
    fVar10 = _guard_xfg_dispatch_icall_nop(_X);
    if (_X < 1.0) {
      local_c8 = '\b';
      iVar5 = (int)(fVar10 * 4.0);
      if (iVar5 < -8) {
        iVar5 = -8;
      }
      local_b0 = fVar1;
      if (iVar5 < 0) {
        local_c6 = (char)iVar5 + '\b';
      }
      else {
        local_c6 = '\b';
      }
    }
    else {
      iVar5 = (int)(fVar10 * -4.0);
      if (iVar5 < -8) {
        local_c8 = '\0';
      }
      else if (iVar5 < 0) {
        local_c8 = (char)iVar5 + '\b';
      }
      else {
        local_c8 = '\b';
      }
      local_c6 = '\b';
      local_b0 = _X * fVar1;
    }
    fVar11 = fVar11 * 1000.0;
    if (fVar11 < 300.0) {
      if (fVar11 <= 1.0) {
        fVar11 = 1.0;
      }
    }
    else {
      fVar11 = 299.0;
    }
    fVar12 = fVar12 * 1000.0;
    local_d4 = (undefined4)(longlong)fVar11;
    if (85.0 <= fVar12) {
      fVar12 = 84.0;
    }
    local_d8 = 0x42c80000;
    local_e8 = 0;
    local_d0 = (undefined1)(int)fVar12;
    local_ca = (undefined1)(int)(fVar3 * 15.0);
    local_b8 = (float)iVar7 * 0.01;
    local_c4 = 0x44fa0000;
    local_b4 = (float)iVar8 * 0.01;
    lVar4 = **(longlong **)(param_1 + 0x1f8);
    local_c9 = local_ca;
    local_ac = fVar2 * 100.0;
    uVar9 = (**(code **)(**(longlong **)(param_1 + 0x228) + 0x30))
                      (*(longlong **)(param_1 + 0x228),0,&local_d8,0x34);
    (**(code **)(lVar4 + 0xa0))
              (*(undefined8 *)(param_1 + 0x1f8),L"SetEffectParameters (Reverb)",uVar9);
  }
  return;
}



// FUNCTION 142aa4b40 StartBackgroundTask body=159 status=ok
// SIG undefined StartBackgroundTask(void)

void FAsyncRealtimeAudioTaskProxy<FXAudio2SoundBuffer>::StartBackgroundTask
               (LPCRITICAL_SECTION param_1)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  char cVar2;
  BOOL BVar3;
  _RTL_CRITICAL_SECTION *p_Var4;
  _LIST_ENTRY *p_Var5;
  
  BVar3 = TryEnterCriticalSection(param_1);
  if (BVar3 == 0) {
    EnterCriticalSection(param_1);
  }
  cVar2 = FUN_1422d9100();
  p_Var1 = param_1[1].DebugInfo;
  p_Var5 = DAT_1468b5010;
  if (cVar2 != '\0') {
    p_Var5 = DAT_1468b5020;
  }
  LOCK();
  *(int *)(p_Var1 + 1) = *(int *)(p_Var1 + 1) + 1;
  UNLOCK();
  p_Var4 = p_Var1[1].CriticalSection;
  p_Var1[1].ProcessLocksList.Flink = p_Var5;
  if (p_Var5 == (_LIST_ENTRY *)0x0) {
    FUN_1415b5910();
    p_Var1[1].CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
    FUN_142aa1240(p_Var1);
  }
  else {
    if (p_Var4 == (_RTL_CRITICAL_SECTION *)0x0) {
      p_Var4 = (_RTL_CRITICAL_SECTION *)FUN_1415ab270(1);
      p_Var1[1].CriticalSection = p_Var4;
    }
    (*(code *)(p_Var4->DebugInfo->ProcessLocksList).Blink)();
    p_Var5 = p_Var1[1].ProcessLocksList.Flink;
    (*(code *)p_Var5->Flink[1].Flink)(p_Var5,p_Var1);
  }
                    /* WARNING: Could not recover jumptable at 0x000142aa4bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(param_1);
  return;
}



// FUNCTION 142aa4be0 Stop body=112 status=ok
// SIG undefined Stop(void)

void FXAudio2SoundSource::Stop(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) & 0xef;
  uVar1 = IStreamingManager::Get();
  plVar2 = (longlong *)UNiagaraSystem::GetEffectType(uVar1);
  (**(code **)(*plVar2 + 200))(plVar2,param_1);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) & 0xf7;
    LOCK();
    *(undefined4 *)(param_1 + 0x74) = 0;
    UNLOCK();
    FreeResources(param_1);
    LOCK();
    *(undefined4 *)(param_1 + 0x1a8) = 0;
    UNLOCK();
    LOCK();
    *(undefined4 *)(param_1 + 0x198) = 0;
    UNLOCK();
    *(uint *)(param_1 + 0x1ac) = *(uint *)(param_1 + 0x1ac) & 0xfffffffe;
  }
  FUN_1422d9790(param_1);
  return;
}



// FUNCTION 142aa4c50 FUN_142aa4c50 body=652 status=ok
// SIG undefined FUN_142aa4c50(void)

void FUN_142aa4c50(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  longlong lVar7;
  uint *puVar8;
  uint uVar9;
  
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0xd4),0,0x84);
  puVar8 = (uint *)(param_1 + 0xd8);
  piVar5 = (int *)(param_1 + 0x160);
  *(undefined4 *)(param_1 + 0x194) = 0;
  uVar9 = *(int *)(*(longlong *)(param_1 + 0x18) + 0xc) * 0x4000;
  lVar7 = 3;
  do {
    iVar6 = 0;
    *piVar5 = 0;
    if ((piVar5[1] < 0) && (piVar5[1] != 0)) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(piVar5 + -2);
      iVar6 = *piVar5;
    }
    *piVar5 = iVar6 + uVar9;
    if (piVar5[1] < (int)(iVar6 + uVar9)) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(piVar5 + -2);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar6 + *(longlong *)(piVar5 + -2)),0,(longlong)(int)uVar9);
    piVar1 = piVar5 + -2;
    piVar5 = piVar5 + 4;
    *(undefined8 *)(puVar8 + 1) = *(undefined8 *)piVar1;
    *puVar8 = uVar9;
    *(longlong *)(puVar8 + 8) = param_1;
    puVar8 = puVar8 + 0xb;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  LOCK();
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  UNLOCK();
  plVar2 = *(longlong **)(param_1 + 0x10);
  plVar3 = (longlong *)*plVar2;
  if (plVar3 == (longlong *)0x0) {
LAB_142aa4dbe:
    (**(code **)(**(longlong **)(param_1 + 0x90) + 0x20))
              (*(longlong **)(param_1 + 0x90),*(undefined8 *)(param_1 + 0xdc),
               *(int *)((longlong)plVar2 + 0x9c) != 0);
  }
  else {
    if ((plVar3[0x25] != 0) && (*(float *)(plVar2 + 0x14) <= 0.0)) {
      LOCK();
      *(undefined4 *)(param_1 + 0x1a0) = 1;
      UNLOCK();
      _guard_xfg_dispatch_icall_nop
                (*(void **)(param_1 + 0xdc),*(void **)(**(longlong **)(param_1 + 0x10) + 0x128),
                 (ulonglong)uVar9);
      _guard_xfg_dispatch_icall_nop
                (*(void **)(param_1 + 0x108),
                 (void *)(*(longlong *)(**(longlong **)(param_1 + 0x10) + 0x128) + (ulonglong)uVar9)
                 ,(ulonglong)uVar9);
      goto LAB_142aa4e38;
    }
    if ((plVar3 == (longlong *)0x0) || ((*(byte *)((longlong)plVar3 + 0xb3) & 4) == 0))
    goto LAB_142aa4dbe;
    uVar4 = (**(code **)(*plVar3 + 0x310))
                      (plVar3,*(undefined8 *)(param_1 + 0xdc),
                       ((longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 0xc) & 0x3ffffffffffffU)
                       << 0xd);
    *(undefined4 *)(param_1 + 0xd8) = uVar4;
  }
  plVar2 = (longlong *)**(longlong **)(param_1 + 0x10);
  if ((plVar2 == (longlong *)0x0) || ((*(byte *)((longlong)plVar2 + 0xb3) & 4) == 0)) {
    (**(code **)(**(longlong **)(param_1 + 0x90) + 0x20))
              (*(longlong **)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x108),
               *(int *)((longlong)*(longlong **)(param_1 + 0x10) + 0x9c) != 0);
  }
  else {
    uVar4 = (**(code **)(*plVar2 + 0x310))
                      (plVar2,*(undefined8 *)(param_1 + 0x108),
                       ((longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 0xc) & 0x3ffffffffffffU)
                       << 0xd);
    *(undefined4 *)(param_1 + 0x104) = uVar4;
  }
LAB_142aa4e38:
  lVar7 = **(longlong **)(param_1 + 0x80);
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0xa8))
                    (*(longlong **)(param_1 + 0x98),param_1 + 0xd4,0);
  (**(code **)(lVar7 + 0xa0))(*(undefined8 *)(param_1 + 0x80),L"SubmitSourceBuffer - PCMRT",uVar4);
  lVar7 = **(longlong **)(param_1 + 0x80);
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0xa8))
                    (*(longlong **)(param_1 + 0x98),param_1 + 0x100,0);
  (**(code **)(lVar7 + 0xa0))(*(undefined8 *)(param_1 + 0x80),L"SubmitSourceBuffer - PCMRT",uVar4);
  *(uint *)(param_1 + 0x1ac) = *(uint *)(param_1 + 0x1ac) | 1;
  *(undefined4 *)(param_1 + 0x194) = 2;
  return;
}



// FUNCTION 142aa4ee0 FUN_142aa4ee0 body=1445 status=ok
// SIG undefined FUN_142aa4ee0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142aa4ee0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  float fVar8;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined1 local_160 [12];
  undefined4 local_154;
  undefined4 local_148;
  float local_144;
  undefined4 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined8 local_124;
  undefined8 local_11c;
  undefined8 local_114;
  undefined8 local_10c;
  undefined8 local_104;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  if (((*(byte *)(param_1 + 0x7c) & 1) == 0) && (*(longlong *)(param_1 + 0x98) == 0)) {
    return;
  }
  if ((*(byte *)(param_1 + 0x78) & 8) != 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x78) & 0x10) == 0) {
    return;
  }
  FSoundSource::UpdateCommon();
  piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x718) + 0x200);
  LOCK();
  bVar7 = *piVar1 == 0;
  if (bVar7) {
    *piVar1 = 0;
  }
  UNLOCK();
  if (bVar7) {
    *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 1;
  }
  if ((*(uint *)(param_1 + 0x7c) & 1) != 0) {
    fVar8 = (float)(**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x10) + 0x2a0))();
    if (fVar8 < *(float *)(param_1 + 0x38) || fVar8 == *(float *)(param_1 + 0x38)) {
      if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x9c) == 0) {
        LOCK();
        *(undefined4 *)(param_1 + 0x19c) = 1;
        UNLOCK();
      }
      else {
        LOCK();
        *(undefined4 *)(param_1 + 0x198) = 1;
        UNLOCK();
      }
    }
    goto LAB_142aa5457;
  }
  lVar5 = **(longlong **)(param_1 + 0x80);
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0xd0))
                    (*(longlong **)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x3c),0);
  (**(code **)(lVar5 + 0xa0))(*(undefined8 *)(param_1 + 0x80),L"SetFrequencyRatio",uVar3);
  FSoundSource::SetStereoBleed(param_1);
  FSoundSource::SetLFEBleed(param_1);
  FSoundSource::SetFilterFrequency(param_1);
  if (*(float *)(param_1 + 0x28) != *(float *)(param_1 + 0x30)) {
    local_148 = 0;
    local_140 = FUN_1422cb8d0(*(undefined8 *)(param_1 + 0x80));
    local_144 = (*(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x28)) /
                (float)*(int *)((longlong)*(longlong **)(param_1 + 0x80) + 0x14);
    if (0.0 <= local_144) {
      if (1.0 <= local_144) {
        local_144 = 1.0;
      }
    }
    else {
      local_144 = 0.0;
    }
    lVar5 = **(longlong **)(param_1 + 0x80);
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x40))
                      (*(longlong **)(param_1 + 0x98),&local_148,0);
    (**(code **)(lVar5 + 0xa0))(*(undefined8 *)(param_1 + 0x80),L"SetFilterParameters",uVar3);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x28);
  }
  (**(code **)(**(longlong **)(param_1 + 0x98) + 200))(*(longlong **)(param_1 + 0x98),local_160);
  *(undefined4 *)(param_1 + 100) = local_154;
  uStack_134 = 0;
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_128 = 0;
  local_124 = 0;
  local_11c = 0;
  local_114 = 0;
  local_10c = 0;
  local_104 = 0;
  local_fc = 0;
  local_138 = 0;
  uVar3 = FWaveInstance::GetActualVolume(*(undefined8 *)(param_1 + 0x10));
  uVar3 = FUN_140a9b1a0(param_1,uVar3);
  FXAudio2SoundSource::GetChannelVolumes(param_1,&local_138,uVar3);
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + 0xc);
  if (iVar2 == 1) {
    if ((*(uint *)(param_1 + 0x1ac) >> 1 & 1) != 0) goto LAB_142aa521b;
    local_f8 = CONCAT44(uStack_134,local_138);
    uStack_f0 = CONCAT44(uStack_12c,uStack_130);
    local_178 = &local_f8;
    local_170 = 0;
    local_e8 = uStack_128;
    local_e4 = (undefined4)local_124;
    lVar5 = **(longlong **)(param_1 + 0x80);
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x80))
                      (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xb4),1,6);
    pwVar4 = L"SetOutputMatrix (mono)";
LAB_142aa5288:
    (**(code **)(lVar5 + 0xa0))(*(undefined8 *)(param_1 + 0x80),pwVar4,uVar3);
  }
  else if (iVar2 == 2) {
LAB_142aa521b:
    FXAudio2SoundSource::RouteStereoToDry(param_1,&local_138);
  }
  else {
    if (iVar2 == 4) {
      local_178 = (undefined8 *)&local_c8;
      local_c8 = local_138;
      local_b4 = uStack_134;
      local_a8 = ZEXT416(0);
      local_80 = uStack_128;
      local_6c = (undefined4)local_124;
      local_c4 = 0;
      local_bc = 0;
      local_b0 = 0;
      local_88 = 0;
      local_7c = 0;
      local_74 = 0;
      local_98 = uStack_12c;
      uStack_94 = uStack_12c;
      uStack_90 = uStack_12c;
      uStack_8c = uStack_12c;
      lVar5 = **(longlong **)(param_1 + 0x80);
      local_170 = 0;
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x80))
                        (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xb4),4);
      pwVar4 = L"SetOutputMatrix (4 channel)";
      goto LAB_142aa5288;
    }
    if (iVar2 == 6) {
      FXAudio2SoundSource::RouteHexToDry(param_1,&local_138);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x98) + 0x60))(*(longlong **)(param_1 + 0x98),uVar3,0);
    }
  }
  if ((*(byte *)(param_1 + 0x78) & 1) != 0) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + 0xc);
    if (iVar2 == 1) {
      if ((*(uint *)(param_1 + 0x1ac) >> 1 & 1) == 0) {
        local_178 = (undefined8 *)&local_168;
        local_168 = local_124._4_4_;
        local_164 = local_124._4_4_;
        lVar5 = **(longlong **)(param_1 + 0x80);
        local_170 = 0;
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x80))
                          (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xc0),1,2);
        (**(code **)(lVar5 + 0xa0))
                  (*(undefined8 *)(param_1 + 0x80),L"SetOutputMatrix (Mono reverb)",uVar3);
      }
      else {
        FXAudio2SoundSource::RouteStereoToReverb(param_1,&local_138);
      }
    }
    else if (iVar2 == 2) {
      FXAudio2SoundSource::RouteStereoToReverb(param_1,&local_138);
    }
  }
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xa4) & 2) != 0) {
    uVar6 = *(byte *)(param_1 + 0x78) & 1;
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + 0xc);
    if (iVar2 == 1) {
      local_d8 = (undefined4)local_11c;
      local_e0 = 0;
      local_d4 = 0;
      local_cc = 0;
      lVar5 = **(longlong **)(param_1 + 0x80);
      local_170 = 0;
      local_178 = &local_e0;
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x80))
                        (*(longlong **)(param_1 + 0x98),
                         *(undefined8 *)(param_1 + ((longlong)(int)uVar6 + 0x10) * 0xc),1,6);
      pwVar4 = L"SetOutputMatrix (Mono radio)";
    }
    else {
      if (iVar2 != 2) goto LAB_142aa5457;
      local_58 = (undefined4)local_11c;
      local_54 = (undefined4)local_11c;
      local_68 = 0;
      uStack_60 = 0;
      local_40 = 0;
      local_50 = 0;
      uStack_48 = 0;
      lVar5 = **(longlong **)(param_1 + 0x80);
      local_170 = 0;
      local_178 = &local_68;
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x80))
                        (*(longlong **)(param_1 + 0x98),
                         *(undefined8 *)(param_1 + ((longlong)(int)uVar6 + 0x10) * 0xc),2);
      pwVar4 = L"SetOutputMatrix (Stereo radio)";
    }
    (**(code **)(lVar5 + 0xa0))(*(undefined8 *)(param_1 + 0x80),pwVar4,uVar3);
  }
LAB_142aa5457:
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  return;
}



// FUNCTION 142aa5490 FUN_142aa5490 body=560 status=ok
// SIG undefined FUN_142aa5490(void)

undefined8 FUN_142aa5490(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 local_res18 [2];
  longlong local_48 [2];
  longlong local_38;
  ulonglong local_30;
  int local_28;
  
  local_res18[0] = param_3;
  cVar1 = FParse::Command(local_res18,L"MEDIA",1);
  if (cVar1 == '\0') {
    return 0;
  }
  FParse::Token(local_48,local_res18,0);
  iVar2 = FUN_141592950(local_48,L"PLAY",1,0,0xffffffff);
  if (iVar2 != -1) {
    local_38 = 0;
    local_30 = 0;
    local_28 = -1;
    uVar3 = UUGCampaignMap::GetPrivateStaticClass();
    FUN_1417a5560(uVar3,&local_38,1,0x10,0);
    uVar4 = local_30 & 0xffffffff;
    do {
      local_28 = local_28 + 1;
      if ((int)local_30 <= local_28) break;
    } while (*(longlong *)(local_38 + (longlong)local_28 * 8) == 0);
    do {
      if ((local_28 < 0) || ((int)uVar4 <= local_28)) goto LAB_142aa55b2;
      FMediaPlayerFacade::SetRate
                (*(undefined8 *)(*(longlong *)(local_38 + (longlong)local_28 * 8) + 0x120),
                 0x3f800000);
      uVar4 = local_30 & 0xffffffff;
      do {
        local_28 = local_28 + 1;
        if ((int)local_30 <= local_28) break;
      } while (*(longlong *)(local_38 + (longlong)local_28 * 8) == 0);
    } while( true );
  }
  iVar2 = FUN_141592950(local_48,L"PAUSE",1,0,0xffffffff);
  if (iVar2 != -1) {
    local_28 = -1;
    local_38 = 0;
    local_30 = 0;
    uVar3 = UUGCampaignMap::GetPrivateStaticClass();
    FUN_1417a5560(uVar3,&local_38,1,0x10,0);
    uVar4 = local_30 & 0xffffffff;
    do {
      local_28 = local_28 + 1;
      if ((int)local_30 <= local_28) break;
    } while (*(longlong *)(local_38 + (longlong)local_28 * 8) == 0);
    do {
      if ((local_28 < 0) || ((int)uVar4 <= local_28)) goto LAB_142aa55b2;
      FMediaPlayerFacade::SetRate
                (*(undefined8 *)(*(longlong *)(local_38 + (longlong)local_28 * 8) + 0x120),0);
      uVar4 = local_30 & 0xffffffff;
      do {
        local_28 = local_28 + 1;
        if ((int)local_30 <= local_28) break;
      } while (*(longlong *)(local_38 + (longlong)local_28 * 8) == 0);
    } while( true );
  }
LAB_142aa55bf:
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  return 1;
LAB_142aa55b2:
  if (local_38 != 0) {
    FMemory::Free(local_38);
  }
  goto LAB_142aa55bf;
}



// FUNCTION 142aa56c0 `scalar_deleting_destructor' body=63 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FMediaAssetsModule::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 8) = IModuleInterface::vftable;
  FSelfRegisteringExec::~FSelfRegisteringExec();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 142aa5710 FUN_142aa5710 body=209 status=ok
// SIG undefined FUN_142aa5710(void)

undefined8 *
FUN_142aa5710(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_res10 [8];
  
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_1454e0b58;
    FWeakObjectPtr::operator=(plVar3 + 1,param_3);
    plVar3[2] = param_4;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar4;
    *plVar3 = (longlong)&PTR_FUN_1454e0ba0;
  }
  *param_2 = 0;
  if (plVar3 != (longlong *)0x0) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,1);
    puVar5 = (undefined8 *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res10);
    iVar1 = (int)param_1[1];
    uVar2 = *puVar5;
    *(int *)(param_1 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
    }
    *param_2 = uVar2;
    puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
    *puVar5 = plVar3;
    *(undefined4 *)(puVar5 + 1) = 3;
  }
  return param_2;
}



// FUNCTION 142aa57f0 NewObject<UMediaPlaylist> body=146 status=ok
// SIG undefined NewObject<UMediaPlaylist>(void)

void NewObject<UMediaPlaylist>
               (undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
               undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar1 = UMediaPlaylist::GetPrivateStaticClass();
  FUN_1417985e0(uVar1,param_1,param_2,param_3,0,param_4,param_5,param_6,0);
  return;
}



// FUNCTION 142aa5890 FUN_142aa5890 body=877 status=ok
// SIG undefined FUN_142aa5890(void)

undefined8 * FUN_142aa5890(undefined8 *param_1)

{
  int *piVar1;
  longlong **pplVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  longlong *local_48;
  longlong *plStack_40;
  longlong *local_38;
  longlong *plStack_30;
  
  FUN_141781840();
  *param_1 = &PTR_FUN_1454dfc60;
  plVar7 = (longlong *)0x0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  FUN_14091e0e0(param_1 + 0x15,0x4059000000000000);
  FUN_14091e0e0(param_1 + 0x16,0x40a7700000000000);
  FUN_14091e0e0(param_1 + 0x17,0x4059000000000000);
  *(uint *)((longlong)param_1 + 0xc4) = *(uint *)((longlong)param_1 + 0xc4) & 0xfffffffc;
  pplVar2 = (longlong **)(param_1 + 0x24);
  *(undefined1 *)((longlong)param_1 + 0xc1) = 1;
  *(undefined4 *)(param_1 + 0x1a) = 0xffffffff;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x42b40000;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x42700000;
  param_1[0x1d] = DAT_1468b5da0;
  *(undefined4 *)(param_1 + 0x1e) = DAT_1468b5da8;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 2;
  *pplVar2 = (longlong *)0x0;
  param_1[0x25] = 0;
  FGuid::NewGuid(param_1 + 0x26);
  *(undefined1 *)(param_1 + 0x28) = 0;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    plVar4 = (longlong *)operator_new(0x130);
    if (plVar4 != (longlong *)0x0) {
      *(undefined4 *)(plVar4 + 1) = 1;
      *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
      *plVar4 = (longlong)&PTR_FUN_1454e0b38;
      FUN_142a59240(plVar4 + 2);
      plVar7 = plVar4;
    }
    local_38 = plVar7 + 2;
    plStack_30 = plVar7;
    SharedPointerInternals::EnableSharedFromThis(&local_38,local_38,local_38);
    local_48 = local_38;
    plStack_40 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
      UNLOCK();
    }
    if (pplVar2 != &local_48) {
      *pplVar2 = local_38;
      local_48 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x25,&plStack_40);
    }
    plVar7 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar4 = plStack_40 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_40 + 8))(plStack_40,1);
        }
      }
    }
    plVar7 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar4 = plStack_30 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_30)(plStack_30);
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
    plVar7 = *pplVar2;
    plVar8 = plVar7 + 0x19;
    plVar4 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_FUN_1442e7fd8;
      FWeakObjectPtr::operator=(plVar4 + 1,param_1);
      plVar4[2] = (longlong)FUN_142aaa430;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[4] = lVar5;
      *plVar4 = (longlong)&PTR_FUN_1442e8020;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,1);
      (**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
      iVar3 = (int)plVar7[0x1a];
      *(int *)(plVar7 + 0x1a) = iVar3 + 1;
      if (*(int *)((longlong)plVar7 + 0xd4) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar3);
      }
      puVar6 = (undefined8 *)((longlong)iVar3 * 0x10 + *plVar8);
      *puVar6 = plVar4;
      *(undefined4 *)(puVar6 + 1) = 3;
    }
    plVar7 = (longlong *)NewObject<UMediaPlaylist>(param_1,DAT_146b2a750,0x48,0,0,0);
    param_1[0x19] = plVar7;
    (**(code **)(*plVar7 + 0x38))(plVar7,param_1,0);
  }
  return param_1;
}



// FUNCTION 142aa5c00 FUN_142aa5c00 body=270 status=ok
// SIG undefined FUN_142aa5c00(void)

undefined8 * FUN_142aa5c00(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_142a7ae70();
  *(undefined4 *)(param_1 + 0xca) = 1;
  *param_1 = &PTR_FUN_1454dfee0;
  *(undefined1 *)((longlong)param_1 + 0x654) = 0;
  param_1[5] = &PTR_LAB_1454e0458;
  uVar2 = 0;
  *(undefined4 *)(param_1 + 0xcb) = 0x322bcc77;
  *(undefined1 *)((longlong)param_1 + 0x65c) = 1;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f7eb852;
  *(undefined1 *)((longlong)param_1 + 0x664) = 0;
  *(undefined4 *)(param_1 + 0xcd) = 0x3f80a3d7;
  *(undefined4 *)(param_1 + 0xcf) = 0;
  param_1[0xd0] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd1));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xd1),4000);
  *(undefined4 *)(param_1 + 0xd6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6b4) = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  *(undefined4 *)(param_1 + 0xd9) = 0x3f800000;
  lVar1 = operator_new(0x90);
  if (lVar1 != 0) {
    uVar2 = FMediaAudioResampler::FMediaAudioResampler(lVar1);
  }
  param_1[0xda] = uVar2;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 2;
  return param_1;
}



// FUNCTION 142aa5d10 UMediaTexture body=180 status=ok
// SIG undefined UMediaTexture(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * UMediaTexture::UMediaTexture(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_14284de20();
  *param_1 = &PTR__scalar_deleting_destructor__1454e0488;
  param_1[5] = &PTR_LAB_1454e0760;
  *(undefined2 *)(param_1 + 0x17) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0xba) = 0;
  uVar3 = DAT_1464aa6ec;
  uVar2 = DAT_1464aa6e8;
  uVar1 = DAT_1464aa6e4;
  *(undefined4 *)((longlong)param_1 + 0xbc) = DAT_1464aa6e0;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0xc4) = uVar2;
  *(undefined4 *)(param_1 + 0x19) = uVar3;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  FGuid::NewGuid(param_1 + 0x20);
  param_1[0x22] = _DAT_1468b5ca0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(byte *)((longlong)param_1 + 0x4b) = *(byte *)((longlong)param_1 + 0x4b) | 2;
  param_1[0x28] = 0;
  return param_1;
}



// FUNCTION 142aa5dd0 UTimeSynchronizableMediaSource body=65 status=ok
// SIG undefined UTimeSynchronizableMediaSource(void)

undefined8 * UTimeSynchronizableMediaSource::UTimeSynchronizableMediaSource(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_141781840(param_1,uVar1);
  param_1[6] = 0;
  *param_1 = &PTR_FUN_1454e0878;
  param_1[5] = &PTR_FUN_1454e0b00;
  *(undefined1 *)(param_1 + 7) = 0;
  return param_1;
}



// FUNCTION 142aa5e20 ~TArray<FMediaCaptureDeviceInfo,FDefaultAllocator> body=187 status=ok
// SIG undefined ~TArray<FMediaCaptureDeviceInfo,FDefaultAllocator>(void)

void TArray<FMediaCaptureDeviceInfo,FDefaultAllocator>::
     ~TArray<FMediaCaptureDeviceInfo,FDefaultAllocator>(longlong *param_1)

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
    plVar7 = (longlong *)(lVar5 + 0x18);
    do {
      if (plVar7[3] != 0) {
        FMemory::Free();
      }
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar4 = (longlong *)plVar7[-2];
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
      plVar7 = plVar7 + 8;
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



// FUNCTION 142aa5f00 FUN_142aa5f00 body=97 status=ok
// SIG undefined FUN_142aa5f00(void)

undefined8 * FUN_142aa5f00(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1454e0868;
  if (param_1[0xf] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xf] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 142aa5f70 FUN_142aa5f70 body=97 status=ok
// SIG undefined FUN_142aa5f70(void)

undefined8 * FUN_142aa5f70(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1454e0858;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 142aa5fe0 FUN_142aa5fe0 body=43 status=ok
// SIG undefined FUN_142aa5fe0(void)

undefined8 * FUN_142aa5fe0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_StartProfileThreadUsage_144146a38;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 142aa6010 FUN_142aa6010 body=212 status=ok
// SIG undefined FUN_142aa6010(void)

undefined8 * FUN_142aa6010(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_1454e0790;
  param_1[2] = &PTR_LAB_1454e07d0;
  plVar3 = (longlong *)param_1[0x1a];
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
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x15);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x14);
  param_1[2] = &PTR__scalar_deleting_destructor__144e13920;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 10);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 9);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 8);
  FUN_141edd2d0(param_1 + 2);
  *param_1 = &PTR_FUN_144dd5318;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 142aa60f0 FUN_142aa60f0 body=265 status=ok
// SIG undefined FUN_142aa60f0(void)

longlong FUN_142aa60f0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x128);
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
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x108);
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x148);
  }
  return param_1;
}



// FUNCTION 142aa6200 FUN_142aa6200 body=245 status=ok
// SIG undefined FUN_142aa6200(void)

undefined8 * FUN_142aa6200(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar4 = param_1[0xda];
  *param_1 = &PTR_FUN_1454dfee0;
  param_1[5] = &PTR_LAB_1454e0458;
  if (lVar4 != 0) {
    if (*(longlong *)(lVar4 + 0x60) != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(lVar4,0x90);
  }
  plVar5 = (longlong *)param_1[0xdc];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  plVar5 = (longlong *)param_1[0xd8];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd1));
  FUN_1404c01f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x6f0);
  }
  return param_1;
}



// FUNCTION 142aa6300 `scalar_deleting_destructor' body=256 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UMediaTexture::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x138);
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
  plVar4 = *(longlong **)(param_1 + 0xe0);
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
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    LOCK();
    piVar2 = (int *)(*(longlong *)(param_1 + 0xb0) + 0x48);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      FGraphEvent::Recycle();
    }
  }
  FUN_141edd5f0(param_1 + 0x68);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_143f47c68;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x148);
  }
  return param_1;
}



// FUNCTION 142aa6400 Activate body=69 status=ok
// SIG undefined Activate(void)

void UMediaSoundComponent::Activate(longlong *param_1,char param_2)

{
  char cVar1;
  
  if (param_2 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x2c8))();
    if (cVar1 == '\0') goto LAB_142aa642f;
  }
  (**(code **)(*param_1 + 0x358))(param_1,1);
LAB_142aa642f:
  FUN_142a7eb10(param_1,param_2);
  return;
}



// FUNCTION 142aa6450 Add body=86 status=ok
// SIG undefined Add(void)

ulonglong UMediaPlaylist::Add(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong in_RAX;
  
  if (param_2 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  iVar1 = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x30) = iVar1 + 1;
  if (*(int *)(param_1 + 0x34) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
              ((longlong *)(param_1 + 0x28),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(longlong *)(lVar2 + (longlong)iVar1 * 8) = param_2;
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}



// FUNCTION 142aa64b0 AddFile body=345 status=ok
// SIG undefined AddFile(void)

ulonglong UMediaPlaylist::AddFile(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong in_RAX;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  undefined8 local_res10;
  longlong local_res18;
  undefined2 *local_28;
  int local_20;
  
  if (*(int *)(param_2 + 8) < 2) {
    return in_RAX & 0xffffffffffffff00;
  }
  FUN_141671940(&local_28,param_2,1);
  puVar6 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar6 = local_28;
  }
  uVar2 = UAsyncTaskDownloadImage::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FName::FName(&local_res10,puVar6,1);
  uVar4 = GetTransientPackage();
  FUN_141791c20(&local_res18,uVar4,uVar2,*puVar3);
  uVar2 = GetTransientPackage();
  local_res10 = 0;
  if (local_res18 == 0) {
    FUN_1417846f0(uVar2,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar4 = UAsyncTaskDownloadImage::GetPrivateStaticClass();
  lVar5 = FUN_1417985e0(uVar4,uVar2,local_res18,0x48,0,0,0,0,0);
  FUN_142aac3c0(lVar5,param_2);
  if (lVar5 == 0) {
    uVar7 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x30);
    *(int *)(param_1 + 0x30) = iVar1 + 1;
    if (*(int *)(param_1 + 0x34) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                ((longlong *)(param_1 + 0x28),iVar1);
    }
    uVar7 = 1;
    *(longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 8) = lVar5;
  }
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return uVar7;
}



// FUNCTION 142aa6610 FUN_142aa6610 body=206 status=ok
// SIG undefined FUN_142aa6610(void)

undefined1 FUN_142aa6610(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  if (1 < *(int *)(param_2 + 8)) {
    uVar4 = GetTransientPackage();
    FUN_1417846f0(uVar4,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar1 = UStreamMediaSource::GetPrivateStaticClass();
    plVar5 = (longlong *)FUN_1417985e0(uVar1,uVar4,0,0x48,0,0,0,0,0);
    FString::operator=(plVar5 + 7,param_2);
    cVar2 = (**(code **)(*plVar5 + 0x280))(plVar5);
    if (cVar2 != '\0') {
      uVar3 = UMediaPlaylist::Add(param_1,plVar5);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 142aa66e0 FUN_142aa66e0 body=68 status=ok
// SIG undefined FUN_142aa66e0(void)

undefined8 FUN_142aa66e0(longlong param_1,undefined8 param_2)

{
  if ((*(byte *)(param_1 + 0x2d0) & 8) == 0) {
    if (*(longlong *)(param_1 + 0x2d8) == 0) {
      return 0;
    }
    param_1 = *(longlong *)(param_1 + 0x2d8) + 0x28;
  }
  else {
    param_1 = param_1 + 0x2e0;
  }
  if (param_1 == 0) {
    return 0;
  }
  FSoundAttenuationSettings::operator=(param_2);
  return 1;
}



// FUNCTION 142aa6730 FUN_142aa6730 body=589 status=ok
// SIG undefined FUN_142aa6730(void)

void FUN_142aa6730(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined1 local_res8 [8];
  longlong local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20;
  
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    puVar6 = (undefined8 *)FName::FName(local_res8,"Media",1);
    uVar10 = *puVar6;
    uVar7 = FUN_14168dc80();
    plVar8 = (longlong *)FUN_141690010(uVar7,uVar10);
    if (plVar8 != (longlong *)0x0) {
      plVar4 = *(longlong **)(param_1 + 0x128);
      local_28 = *(undefined8 *)(param_1 + 0x120);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_20 = plVar4;
      plVar9 = (longlong *)(**(code **)(*plVar8 + 0x78))(plVar8);
      (**(code **)(*plVar9 + 0x18))(plVar9,&local_28);
      plVar9 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_20 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_20)(local_20);
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
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar4 + 1;
        lVar5 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
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
      plVar4 = *(longlong **)(param_1 + 0x128);
      local_38 = *(longlong *)(param_1 + 0x120);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      if (local_38 == 0) {
        local_38 = 0;
      }
      else {
        local_38 = local_38 + 8;
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_30 = plVar4;
      plVar8 = (longlong *)(**(code **)(*plVar8 + 0x80))(plVar8);
      (**(code **)(*plVar8 + 8))(plVar8,&local_38);
      plVar8 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_30 + 1;
        lVar5 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar4 + 1;
        lVar5 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
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
    }
    FMediaPlayerFacade::Close(*(undefined8 *)(param_1 + 0x120));
    if ((*(longlong *)(param_1 + 0xf8) != 0) && (*(longlong *)(param_1 + 0x100) != 0)) {
      uVar10 = (**(code **)(**(longlong **)(param_1 + 0x100) + 0x18))();
      FUN_140483870(uVar10,param_1);
    }
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  FUN_1417502d0(param_1);
  return;
}



// FUNCTION 142aa6980 FUN_142aa6980 body=914 status=ok
// SIG undefined FUN_142aa6980(void)

void FUN_142aa6980(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  DWORD DVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined8 uVar14;
  DWORD *pDVar15;
  longlong *plVar16;
  longlong *plVar17;
  int iVar18;
  longlong lVar19;
  LARGE_INTEGER local_res8;
  longlong local_res10;
  LARGE_INTEGER local_res18;
  undefined1 local_res20 [8];
  longlong local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  plVar17 = (longlong *)0x0;
  plVar16 = (longlong *)(param_1 + 0xd8);
  if (*plVar16 != 0) {
    puVar11 = (undefined8 *)FName::FName(local_res20,"Media",1);
    uVar14 = *puVar11;
    uVar12 = FUN_14168dc80();
    plVar13 = (longlong *)FUN_141690010(uVar12,uVar14);
    if (plVar13 != (longlong *)0x0) {
      plVar4 = *(longlong **)(param_1 + 0xe0);
      local_58 = *plVar16;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_50 = plVar4;
      plVar13 = (longlong *)(**(code **)(*plVar13 + 0x78))();
      (**(code **)(*plVar13 + 0x18))(plVar13,&local_58);
      plVar13 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        lVar19 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar19 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          iVar18 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar18 == 1) {
            (**(code **)(*plVar13 + 8))(plVar13,1);
          }
        }
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar4 + 1;
        lVar19 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar19 == 1) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar18 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar18 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
    }
    local_68 = 0;
    plStack_60 = (longlong *)0x0;
    if (plVar16 != &local_68) {
      *plVar16 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xe0,&plStack_60);
      plVar16 = plStack_60;
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        plVar13 = plStack_60 + 1;
        lVar19 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar19 == 1) {
          (**(code **)*plStack_60)(plStack_60);
          LOCK();
          piVar2 = (int *)((longlong)plVar16 + 0xc);
          iVar18 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar18 == 1) {
            (**(code **)(*plStack_60 + 8))(plStack_60,1);
          }
        }
      }
    }
  }
  if (((*(int *)(param_1 + 0xf4) != 0 || *(int *)(param_1 + 0xf0) != 0) ||
      *(int *)(param_1 + 0xec) != 0) || *(int *)(param_1 + 0xe8) != 0) {
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar9 = FUN_1415ad720(&DAT_1468e2448), cVar9 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar10 = GetCurrentThreadId(), DVar10 == DAT_1468c21c0)))) {
      local_48 = *(undefined4 *)(param_1 + 0xe8);
      uStack_44 = *(undefined4 *)(param_1 + 0xec);
      uStack_40 = *(undefined4 *)(param_1 + 0xf0);
      uStack_3c = *(undefined4 *)(param_1 + 0xf4);
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_res18);
      uVar14 = FExternalTextureRegistry::Get();
      FExternalTextureRegistry::UnregisterExternalTexture(uVar14,&local_48);
      QueryPerformanceCounter(&local_res8);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res18._0_4_);
    }
    else {
      pDVar15 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar16 = TlsGetValue(*pDVar15);
      if (plVar16 == (longlong *)0x0) {
        plVar16 = (longlong *)operator_new(0x18);
        if (plVar16 != (longlong *)0x0) {
          *plVar16 = 0;
          plVar16[1] = 0;
          *(undefined4 *)(plVar16 + 2) = 0;
          plVar17 = plVar16;
        }
        TlsSetValue(*pDVar15,plVar17);
        plVar16 = plVar17;
      }
      plVar17 = (longlong *)plVar16[1];
      if (plVar17 == (longlong *)0x0) {
        plVar17 = (longlong *)*plVar16;
        if (plVar17 == (longlong *)0x0) {
          plVar17 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar15 + 2);
          plVar16[1] = (longlong)plVar17;
          if (plVar17 == (longlong *)0x0) {
            puVar11 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar16[1] = (longlong)puVar11;
            lVar19 = 0x1f;
            do {
              puVar3 = puVar11 + 0x20;
              *puVar11 = puVar3;
              lVar19 = lVar19 + -1;
              puVar11 = puVar3;
            } while (lVar19 != 0);
            *puVar3 = 0;
            plVar17 = (longlong *)plVar16[1];
          }
          iVar18 = 0x20;
          *(undefined4 *)(plVar16 + 2) = 0x20;
        }
        else {
          iVar18 = 0x20;
          plVar16[1] = (longlong)plVar17;
          *(undefined4 *)(plVar16 + 2) = 0x20;
          *plVar16 = 0;
        }
      }
      else {
        iVar18 = (int)plVar16[2];
      }
      plVar16[1] = *plVar17;
      *(int *)(plVar16 + 2) = iVar18 + -1;
      *plVar17 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar17 + 1) = 0xff;
      *(undefined4 *)((longlong)plVar17 + 0xc) = 1;
      *plVar17 = (longlong)&PTR_FUN_1454e0858;
      *(undefined1 *)(plVar17 + 4) = 0;
      plVar17[5] = 0;
      uVar5 = *(undefined4 *)(param_1 + 0xe8);
      uVar6 = *(undefined4 *)(param_1 + 0xec);
      uVar7 = *(undefined4 *)(param_1 + 0xf0);
      uVar8 = *(undefined4 *)(param_1 + 0xf4);
      *(undefined4 *)(plVar17 + 2) = uVar5;
      *(undefined4 *)((longlong)plVar17 + 0x14) = uVar6;
      *(undefined4 *)(plVar17 + 3) = uVar7;
      *(undefined4 *)((longlong)plVar17 + 0x1c) = uVar8;
      lVar19 = plVar17[5];
      piVar2 = (int *)(lVar19 + 0x48);
      if (lVar19 != 0) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      local_res10 = lVar19;
      FUN_1409421c0(uVar5,0,0xff,1,0,0);
      if (lVar19 != 0) {
        LOCK();
        iVar18 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          FGraphEvent::Recycle(local_res10);
        }
      }
    }
  }
  FUN_14284fa40(param_1);
  return;
}



// FUNCTION 142aa6d20 FUN_142aa6d20 body=12 status=ok
// SIG undefined FUN_142aa6d20(void)

void FUN_142aa6d20(longlong param_1)

{
  FMediaPlayerFacade::CanPause(*(undefined8 *)(param_1 + 0x120));
  return;
}



// FUNCTION 142aa6d30 FUN_142aa6d30 body=134 status=ok
// SIG undefined FUN_142aa6d30(void)

ulonglong FUN_142aa6d30(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  ulonglong in_RAX;
  undefined8 uVar3;
  longlong local_18 [2];
  
  if (param_2 != (longlong *)0x0) {
    in_RAX = (**(code **)(*param_2 + 0x280))(param_2);
    if ((char)in_RAX != '\0') {
      uVar1 = *(undefined8 *)(param_1 + 0x120);
      uVar3 = (**(code **)(*param_2 + 0x278))(param_2,local_18);
      bVar2 = FMediaPlayerFacade::CanPlayUrl(uVar1,uVar3,param_2 + 5);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      return (ulonglong)bVar2;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142aa6dc0 FUN_142aa6dc0 body=122 status=ok
// SIG undefined FUN_142aa6dc0(void)

ulonglong FUN_142aa6dc0(longlong param_1,longlong param_2)

{
  ulonglong in_RAX;
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (*(int *)(param_2 + 8) < 2) {
    return in_RAX & 0xffffffffffffff00;
  }
  plVar1 = (longlong *)UMediaSource::GetPrivateStaticClass();
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  lVar4 = lVar2 + 0x28;
  if (lVar2 == 0) {
    lVar4 = 0;
  }
  uVar3 = FMediaPlayerFacade::CanPlayUrl(*(undefined8 *)(param_1 + 0x120),param_2,lVar4);
  return uVar3;
}



// FUNCTION 142aa6e40 FUN_142aa6e40 body=1106 status=ok
// SIG undefined FUN_142aa6e40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142aa6e40(longlong param_1,float *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_398 [32];
  uint local_378;
  undefined4 local_370;
  undefined1 local_368;
  undefined8 *local_360;
  longlong local_358;
  undefined8 *local_350;
  undefined4 local_348;
  undefined8 local_338;
  undefined8 uStack_330;
  float local_328;
  undefined8 local_320;
  undefined4 local_318;
  undefined4 local_314;
  undefined2 local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined4 local_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float local_2e8;
  undefined1 local_2e4;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined1 local_2c8 [192];
  undefined4 local_208;
  undefined1 local_138 [256];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_398;
  uVar5 = (param_3 & 0xff) << 4 | 0x100;
  if ((((*param_2 == *(float *)(param_1 + 0x7c)) &&
       (fVar10 = param_2[1], fVar10 == *(float *)(param_1 + 0x80))) &&
      (fVar11 = param_2[2], fVar11 == *(float *)(param_1 + 0x84))) &&
     (fVar9 = param_2[3], fVar9 == *(float *)(param_1 + 0x88))) {
    lVar8 = *(longlong *)(param_1 + 0xa8);
    if ((lVar8 != 0) && ((*(uint *)(lVar8 + 0x40) & uVar5) == uVar5)) goto LAB_142aa6faa;
  }
  else {
    fVar10 = param_2[1];
    fVar11 = param_2[2];
    fVar9 = param_2[3];
  }
  local_358 = param_1 + 0xa8;
  local_348 = 1;
  local_2e4 = 0;
  local_350 = &local_338;
  local_360 = &local_308;
  local_368 = 0;
  uStack_330 = CONCAT44(fVar11,fVar10);
  local_370 = 1;
  local_338 = 0;
  local_308 = 0;
  uStack_300 = 0;
  local_2f8 = 1;
  local_2e0 = 0;
  local_2d8 = 0;
  local_2d0 = 0;
  local_378 = uVar5;
  local_328 = fVar9;
  fStack_2f4 = *param_2;
  fStack_2f0 = fVar10;
  fStack_2ec = fVar11;
  local_2e8 = fVar9;
  FUN_1404a2100(2,2,2,1);
  fVar10 = param_2[1];
  fVar11 = param_2[2];
  fVar9 = param_2[3];
  *(float *)(param_1 + 0x7c) = *param_2;
  *(float *)(param_1 + 0x80) = fVar10;
  *(float *)(param_1 + 0x84) = fVar11;
  *(float *)(param_1 + 0x88) = fVar9;
  FMediaTextureResource::UpdateResourceSize(param_1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_338);
  lVar8 = *(longlong *)(param_1 + 0xa8);
LAB_142aa6faa:
  if (*(longlong *)(param_1 + 8) != lVar8) {
    TRefCountPtr<FRHITexture>::operator=(param_1 + 0x40,lVar8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 8,lVar8);
    FUN_141ed8ff0(&DAT_146ab6e78,*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x98),lVar8);
    lVar8 = *(longlong *)(param_1 + 8);
    if (lVar8 == 0) {
      puVar3 = *(undefined4 **)(param_1 + 0xb8);
      *puVar3 = DAT_1468b5ca0;
      puVar3[1] = DAT_1468b5ca4;
    }
    else {
      uVar1 = *(undefined4 *)(lVar8 + 100);
      puVar3 = *(undefined4 **)(param_1 + 0xb8);
      *puVar3 = *(undefined4 *)(lVar8 + 0x60);
      puVar3[1] = uVar1;
    }
  }
  local_320 = *(undefined8 *)(param_1 + 8);
  local_318 = 0;
  local_314 = 0xffffffff;
  local_310 = 0x102;
  local_338 = 0;
  uStack_330 = 0;
  FUN_140c63b80(local_2c8,1,&local_320,&local_338);
  FRHICommandListBase::CacheActiveRenderTargets(&DAT_146ab6e78,local_208,local_2c8,local_138);
  puVar6 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
  puVar4 = puVar6 + 0x54;
  if (DAT_146ab6eb0 < puVar4) {
    FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x2a8);
    puVar6 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
    puVar4 = puVar6 + 0x54;
  }
  DAT_146ab6e8c = DAT_146ab6e8c + 1;
  DAT_146ab6ea8 = puVar4;
  *DAT_146ab6e80 = puVar6;
  DAT_146ab6e80 = puVar6 + 1;
  *DAT_146ab6e80 = 0;
  *puVar6 = &PTR_FUN_1444d5488;
  FUN_140c63680(puVar6 + 2,local_2c8);
  puVar6 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
  uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 8) + 100);
  uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x60);
  puVar4 = puVar6 + 5;
  if (DAT_146ab6eb0 < puVar4) {
    FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x30);
    puVar6 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
    puVar4 = puVar6 + 5;
  }
  DAT_146ab6e8c = DAT_146ab6e8c + 1;
  DAT_146ab6ea8 = puVar4;
  *DAT_146ab6e80 = puVar6;
  DAT_146ab6e80 = puVar6 + 1;
  *DAT_146ab6e80 = 0;
  *puVar6 = &PTR_LAB_143f59420;
  puVar6[2] = 0;
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar2;
  *(undefined4 *)(puVar6 + 4) = uVar1;
  *(undefined4 *)((longlong)puVar6 + 0x24) = 0x3f800000;
  local_338 = *(undefined8 *)(param_1 + 8);
  puVar6 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
  puVar4 = puVar6 + 1;
  if (DAT_146ab6eb0 < puVar4) {
    FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x10);
    puVar6 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
    puVar4 = puVar6 + 1;
  }
  DAT_146ab6ea8 = puVar4;
  *puVar6 = local_338;
  puVar7 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
  puVar4 = puVar7 + 5;
  if (DAT_146ab6eb0 < puVar4) {
    FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x30);
    puVar7 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
    puVar4 = puVar7 + 5;
  }
  DAT_146ab6e8c = DAT_146ab6e8c + 1;
  DAT_146ab6ea8 = puVar4;
  *DAT_146ab6e80 = puVar7;
  DAT_146ab6e80 = puVar7 + 1;
  *DAT_146ab6e80 = 0;
  *puVar7 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar7 + 2) = 1;
  puVar7[3] = puVar6;
  *(undefined4 *)(puVar7 + 4) = 0;
  *(undefined1 *)((longlong)puVar7 + 0x24) = 0;
  FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_2c8);
  *(undefined1 *)(param_1 + 0x78) = 1;
  return;
}



// FUNCTION 142aa72a0 FUN_142aa72a0 body=153 status=ok
// SIG undefined FUN_142aa72a0(void)

void FUN_142aa72a0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  FMediaPlayerFacade::Close(*(undefined8 *)(param_1 + 0x120));
  if (((*(uint *)(param_1 + 8) >> 4 & 1) == 0) && (DAT_1468c2185 == '\0')) {
    lVar1 = *(longlong *)(param_1 + 200);
    *(undefined4 *)(lVar1 + 0x30) = 0;
    if (*(int *)(lVar1 + 0x34) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(lVar1 + 0x28,0);
    }
    plVar2 = (longlong *)NewObject<UMediaPlaylist>(param_1,DAT_146b2a750,0x48,0,0,0);
    *(longlong **)(param_1 + 200) = plVar2;
    (**(code **)(*plVar2 + 0x38))(plVar2,param_1,0);
  }
  *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x140) = 0;
  return;
}



// FUNCTION 142aa7340 FUN_142aa7340 body=4565 status=ok
// SIG undefined FUN_142aa7340(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142aa81a5) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142aa7340(longlong param_1,undefined8 *param_2,float *param_3,byte param_4)

{
  float fVar1;
  undefined4 *puVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  undefined1 uVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  longlong *plVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong *plVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  longlong *plVar25;
  undefined8 *puVar26;
  uint uVar27;
  ulonglong uVar28;
  bool bVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auStack_438 [32];
  undefined8 local_418;
  undefined4 local_410;
  ulonglong local_408;
  undefined8 *local_400;
  longlong *local_3f8;
  undefined8 *local_3f0;
  undefined4 local_3e8;
  byte local_3d8;
  int local_3d0;
  int iStack_3cc;
  int local_3c8 [2];
  longlong local_3c0;
  int local_3b8;
  int iStack_3b4;
  int local_3b0;
  int local_3ac;
  int local_3a8;
  int local_3a4;
  int local_3a0;
  int local_39c;
  int local_398 [2];
  undefined8 *local_390;
  int local_388 [2];
  undefined8 local_380;
  undefined8 local_378;
  longlong *local_370;
  undefined4 local_368;
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  float local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 local_338;
  longlong local_330 [3];
  undefined8 local_318;
  longlong local_310 [3];
  longlong local_2f8;
  longlong local_2f0 [3];
  longlong local_2d8;
  longlong local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  longlong local_2b8;
  undefined *local_2b0;
  undefined4 local_2a8;
  undefined *local_2a0;
  undefined4 local_298;
  undefined *local_290;
  undefined4 local_288;
  undefined *local_280;
  undefined4 local_278;
  undefined *local_270;
  undefined4 local_268;
  undefined *local_260;
  undefined4 local_258;
  undefined *local_250;
  undefined4 local_248;
  undefined *local_240;
  undefined4 local_238;
  undefined *local_230;
  undefined4 local_228;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  longlong *local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1cc;
  int local_1c4 [16];
  undefined1 auStack_184 [4];
  undefined8 local_180;
  undefined4 local_178;
  ulonglong local_174;
  undefined8 local_16c;
  undefined4 local_164;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined1 local_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  undefined1 local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_438;
  bVar29 = false;
  local_3c8[0] = 0;
  local_3d8 = param_4;
  local_3c0 = param_1;
  local_390 = param_2;
  uVar14 = FUN_142aa9bb0(param_2);
  plVar17 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x30))();
  if ((plVar17 == (longlong *)0x0) || (lVar18 = (**(code **)(*plVar17 + 8))(plVar17), lVar18 == 0))
  {
    cVar12 = (**(code **)(*(longlong *)*param_2 + 0x48))();
    if (cVar12 == '\0') {
      uVar27 = 0x100;
    }
    else {
      iVar15 = (**(code **)(*(longlong *)*param_2 + 0x18))();
      if ((iVar15 - 2U < 2) || (uVar27 = 0x100, iVar15 - 9U < 2)) {
        uVar27 = 0x110;
      }
    }
    (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,&local_3b8);
    plVar17 = (longlong *)(param_1 + 0xa0);
    lVar18 = *plVar17;
    if ((((lVar18 == 0) || (*(int *)(lVar18 + 0x60) != local_3b8)) ||
        (*(int *)(lVar18 + 100) != iStack_3b4)) ||
       ((*(uint *)(lVar18 + 0x3c) != uVar14 ||
        (param_1 = local_3c0, (*(uint *)(lVar18 + 0x40) & uVar27) != uVar27)))) {
      local_380 = 0;
      local_3e8 = 1;
      local_3f0 = &local_380;
      local_400 = &local_158;
      local_408 = local_408 & 0xffffffffffffff00;
      local_410 = 1;
      local_148 = 1;
      local_158 = 0;
      uStack_150 = 0;
      local_144 = _DAT_1468b5d78;
      uStack_140 = uRam00000001468b5d7c;
      uStack_13c = uRam00000001468b5d80;
      uStack_138 = uRam00000001468b5d84;
      local_134 = 0;
      local_130 = 0;
      local_128 = 0;
      local_120 = 0;
      local_418 = (undefined8 *)CONCAT44(local_418._4_4_,uVar27);
      local_3f8 = plVar17;
      FUN_1404a2100(local_3b8,iStack_3b4,uVar14 & 0xff,1);
      param_1 = local_3c0;
      FMediaTextureResource::UpdateResourceSize(local_3c0);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_380);
      lVar18 = *(longlong *)(param_1 + 0xa0);
    }
    local_350 = 0;
    local_348 = 0;
    plVar22 = (longlong *)*local_390;
    uVar19 = (**(code **)*plVar22)(plVar22);
    local_410 = (**(code **)(*plVar22 + 0x28))(plVar22);
    local_418 = &local_350;
    local_408 = uVar19;
    (**(code **)(*DAT_146ab6358 + 0x590))(DAT_146ab6358,&DAT_146ab6e78,lVar18,0);
    lVar18 = *plVar17;
    param_2 = local_390;
  }
  else {
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0xa0,0);
    FMediaTextureResource::UpdateResourceSize(param_1);
  }
  uVar14 = (uint)local_3d8;
  uVar27 = uVar14 << 4 | 0x100;
  (**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&local_3d0);
  fVar1 = *param_3;
  if (((fVar1 == *(float *)(param_1 + 0x7c)) &&
      (fVar30 = param_3[1], fVar30 == *(float *)(param_1 + 0x80))) &&
     ((fVar31 = param_3[2], fVar31 == *(float *)(param_1 + 0x84) &&
      (fVar32 = param_3[3], fVar32 == *(float *)(param_1 + 0x88))))) {
    lVar20 = *(longlong *)(param_1 + 0xa8);
    if ((((lVar20 == 0) || (*(int *)(lVar20 + 0x60) != local_3d0)) ||
        (*(int *)(lVar20 + 100) != iStack_3cc)) ||
       ((*(int *)(lVar20 + 0x3c) != 2 || ((*(uint *)(lVar20 + 0x40) & uVar27) != uVar27))))
    goto LAB_142aa763d;
  }
  else {
    fVar30 = param_3[1];
    fVar31 = param_3[2];
    fVar32 = param_3[3];
LAB_142aa763d:
    local_3f8 = (longlong *)(param_1 + 0xa8);
    local_3e8 = 1;
    local_3f0 = &local_378;
    local_400 = &local_118;
    local_408 = local_408 & 0xffffffffffffff00;
    local_378 = 0;
    local_f4 = 0;
    local_f0 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_410 = 1;
    local_368 = 1;
    local_418 = (undefined8 *)(CONCAT44(local_418._4_4_,uVar14 << 4) | 0x100);
    local_108 = 1;
    local_118 = 0;
    uStack_110 = 0;
    fStack_364 = fVar1;
    fStack_360 = fVar30;
    fStack_35c = fVar31;
    local_358 = fVar32;
    fStack_104 = fVar1;
    fStack_100 = fVar30;
    fStack_fc = fVar31;
    local_f8 = fVar32;
    FUN_1404a2100(local_3d0,iStack_3cc,2);
    fVar1 = param_3[1];
    fVar30 = param_3[2];
    fVar31 = param_3[3];
    *(float *)(param_1 + 0x7c) = *param_3;
    *(float *)(param_1 + 0x80) = fVar1;
    *(float *)(param_1 + 0x84) = fVar30;
    *(float *)(param_1 + 0x88) = fVar31;
    FMediaTextureResource::UpdateResourceSize(param_1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_378);
    lVar20 = *(longlong *)(param_1 + 0xa8);
  }
  if (*(longlong *)(param_1 + 8) != lVar20) {
    TRefCountPtr<FRHITexture>::operator=(param_1 + 0x40,lVar20);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 8,lVar20);
    FUN_141ed8ff0(&DAT_146ab6e78,*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x98),lVar20);
    lVar20 = *(longlong *)(param_1 + 8);
    if (lVar20 == 0) {
      puVar2 = *(undefined4 **)(param_1 + 0xb8);
      *puVar2 = DAT_1468b5ca0;
      puVar2[1] = DAT_1468b5ca4;
    }
    else {
      uVar16 = *(undefined4 *)(lVar20 + 100);
      puVar2 = *(undefined4 **)(param_1 + 0xb8);
      *puVar2 = *(undefined4 *)(lVar20 + 0x60);
      puVar2[1] = uVar16;
    }
  }
  local_2c8 = *(undefined8 *)(param_1 + 8);
  uVar19 = 0;
  iVar15 = 0;
  local_1cc = 0x26;
  local_408 = local_408 & 0xffffffffffffff00;
  local_410 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = (longlong *)0x0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c4[0] = 0;
  local_1c4[1] = 0;
  local_1c4[2] = 0;
  local_1c4[3] = 0;
  local_1c4[4] = 0;
  local_1c4[5] = 0;
  local_1c4[6] = 0;
  local_1c4[7] = 0;
  local_1c4[8] = 0;
  local_1c4[9] = 0;
  local_1c4[10] = 0;
  local_1c4[0xb] = 0;
  local_1c4[0xc] = 0;
  local_1c4[0xd] = 0;
  local_1c4[0xe] = 0;
  stack0xfffffffffffffe78 = 0;
  local_180 = 0;
  local_178 = 0;
  local_174 = 0;
  local_16c = 0;
  local_164 = 0;
  local_390 = (undefined8 *)((ulonglong)local_390 & 0xffffffff00000000);
  local_418 = (undefined8 *)((ulonglong)local_418 & 0xffffffff00000000);
  FUN_141ad8260(&DAT_146ab6e78,1,&local_2c8,0);
  iVar11 = iStack_3cc;
  iVar10 = local_3d0;
  local_1cc._4_4_ = DAT_146ab6f10;
  uVar28 = uVar19;
  if (DAT_146ab6f10 != 0) {
    do {
      lVar20 = *(longlong *)(&DAT_146ab6f18 + uVar28 * 0x18);
      if (lVar20 == 0) {
        local_1c4[uVar28] = 0;
      }
      else {
        local_1c4[uVar28] = *(int *)(lVar20 + 0x3c);
        local_1c4[uVar28 + 8] = *(int *)(lVar20 + 0x40);
      }
      auStack_184[uVar28] = (&DAT_146ab6f28)[uVar28 * 0x18];
      *(undefined *)((longlong)&local_180 + uVar28 + 4) = (&DAT_146ab6f29)[uVar28 * 0x18];
      if (local_1c4[uVar28] != 0) {
        local_164 = CONCAT22(local_164._2_2_,*(undefined2 *)(lVar20 + 0x38));
      }
      uVar14 = (int)uVar28 + 1;
      uVar28 = (ulonglong)uVar14;
    } while (uVar14 < DAT_146ab6f10);
  }
  if (DAT_146ab6fd8 == 0) {
    local_174 = local_174 & 0xffffffff00000000;
  }
  else {
    iVar15 = *(int *)(DAT_146ab6fd8 + 0x3c);
    local_174 = *(ulonglong *)(DAT_146ab6fd8 + 0x3c);
    uVar19 = DAT_146ab6fd8;
  }
  local_16c = CONCAT44(DAT_146ab6fe4,
                       CONCAT13(DAT_146ab6fe3,
                                CONCAT12(DAT_146ab6fe2,CONCAT11(DAT_146ab6fe1,DAT_146ab6fe0))));
  if (iVar15 != 0) {
    local_164 = CONCAT22(local_164._2_2_,*(undefined2 *)(uVar19 + 0x38));
  }
  puVar24 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
  puVar23 = puVar24 + 5;
  if (DAT_146ab6eb0 < puVar23) {
    FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8);
    puVar24 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
    puVar23 = puVar24 + 5;
  }
  DAT_146ab6e8c = DAT_146ab6e8c + 1;
  DAT_146ab6ea8 = puVar23;
  *DAT_146ab6e80 = puVar24;
  DAT_146ab6e80 = puVar24 + 1;
  *DAT_146ab6e80 = 0;
  *puVar24 = &PTR_LAB_143f59420;
  puVar24[2] = 0;
  *(undefined4 *)(puVar24 + 3) = 0;
  *(int *)((longlong)puVar24 + 0x1c) = iVar10;
  *(int *)(puVar24 + 4) = iVar11;
  *(undefined4 *)((longlong)puVar24 + 0x24) = 0x3f800000;
  local_1d8 = FUN_1409853f0();
  uStack_1e0 = FUN_140985530();
  local_1e8 = FUN_1409852b0();
  local_1cc = CONCAT44(local_1cc._4_4_,1);
  lVar20 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
  plVar25 = (longlong *)0x0;
  local_240 = &DAT_1469f68b0;
  local_238 = 0;
  plVar17 = (longlong *)(lVar20 + 0x38);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar17,&local_3b0,&local_240);
  plVar22 = plVar25;
  if (local_3b0 != -1) {
    plVar22 = (longlong *)((longlong)local_3b0 * 0x20 + *plVar17);
  }
  plVar21 = plVar22 + 2;
  if (plVar22 == (longlong *)0x0) {
    plVar21 = plVar25;
  }
  local_218 = DAT_1464c0ee8;
  if (*plVar21 == 0) {
    bVar29 = true;
    uStack_210 = 0;
  }
  else {
    lVar20 = *(longlong *)(*plVar21 + 0x48);
    if (*(char *)(lVar20 + 0x28) == '\0') {
      FUN_1419f3850(lVar20);
    }
    uStack_210 = *(undefined8 *)(lVar20 + 0x38);
    plVar25 = local_370;
  }
  if ((bVar29) && (plVar25 != (longlong *)0x0)) {
    LOCK();
    plVar22 = plVar25 + 1;
    lVar20 = *plVar22;
    *(int *)plVar22 = (int)*plVar22 + -1;
    UNLOCK();
    if ((int)lVar20 == 1) {
      if (((char)plVar25[2] == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar12 = FOutputDevice::CanBeUsedOnAnyThread(), cVar12 == '\0')
          ))) {
        LOCK();
        bVar29 = *(int *)((longlong)plVar25 + 0xc) == 0;
        if (bVar29) {
          *(int *)((longlong)plVar25 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar29) {
          uVar14 = FLockFreeLinkPolicy::AllocLockFreeLink();
          if (uVar14 == 0) {
            lVar20 = 0;
          }
          else {
            lVar20 = (&DAT_1468a81f8)[uVar14 >> 0xe] + (ulonglong)(uVar14 & 0x3fff) * 0x18;
          }
          *(longlong **)(lVar20 + 8) = plVar25;
          FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
        }
      }
      else {
        (**(code **)*plVar25)(plVar25,1);
      }
    }
  }
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  bVar29 = false;
  uVar16 = (**(code **)(*(longlong *)*param_2 + 0x18))();
  switch(uVar16) {
  case 1:
    local_228 = 0;
    local_230 = &DAT_1469f6a90;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar17,&local_3ac,&local_230);
    if (local_3ac == -1) {
      lVar20 = 0;
    }
    else {
      lVar20 = (longlong)local_3ac * 0x20 + *plVar17;
    }
    plVar17 = (longlong *)0x0;
    plVar22 = (longlong *)(lVar20 + 0x10);
    if (lVar20 == 0) {
      plVar22 = plVar17;
    }
    lVar20 = *plVar22;
    if (lVar20 == 0) {
      local_2c0 = 0;
      bVar4 = true;
    }
    else {
      lVar3 = *(longlong *)(lVar20 + 0x48);
      if (*(char *)(lVar3 + 0x28) == '\0') {
        FUN_1419f3850(lVar3);
      }
      plVar17 = *(longlong **)(lVar3 + 0x40);
    }
    local_1f8 = plVar17;
    if (bVar4) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_2c0);
    }
    FUN_141ed6ac0(&DAT_146ab6e78,&local_218,2,1);
    plVar17 = (longlong *)*param_2;
    if (lVar18 != 0) {
      LOCK();
      *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
      UNLOCK();
    }
    local_2b8 = lVar18;
    uVar13 = (**(code **)(*plVar17 + 0x48))();
    local_418 = (undefined8 *)CONCAT71(local_418._1_7_,uVar13);
    FUN_141a17460(lVar20,&DAT_146ab6e78,&local_2b8,&DAT_1464c0ef0);
    break;
  case 2:
  case 9:
  case 10:
    plVar22 = (longlong *)0x0;
    local_250 = &DAT_1469f7210;
    local_248 = 0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar17,local_3c8,&local_250);
    plVar25 = plVar22;
    if (local_3c8[0] != -1) {
      plVar25 = (longlong *)((longlong)local_3c8[0] * 0x20 + *plVar17);
    }
    plVar17 = plVar25 + 2;
    if (plVar25 == (longlong *)0x0) {
      plVar17 = plVar22;
    }
    lVar20 = *plVar17;
    if (lVar20 == 0) {
      bVar29 = true;
      local_2d8 = 0;
    }
    else {
      lVar3 = *(longlong *)(lVar20 + 0x48);
      if (*(char *)(lVar3 + 0x28) == '\0') {
        FUN_1419f3850(lVar3);
      }
      plVar22 = *(longlong **)(lVar3 + 0x40);
    }
    local_1f8 = plVar22;
    if (bVar29) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_2d8);
    }
    FUN_141ed6ac0(&DAT_146ab6e78,&local_218,2,1);
    if (lVar18 != 0) {
      LOCK();
      *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
      UNLOCK();
    }
    local_2d0 = lVar18;
    FUN_141a18330(lVar20,&DAT_146ab6e78,&local_2d0,&local_3d0);
    break;
  case 3:
    local_2b0 = &DAT_1469f6c70;
    local_2a8 = 0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar17,&local_3a8,&local_2b0);
    if (local_3a8 == -1) {
      lVar20 = 0;
    }
    else {
      lVar20 = (longlong)local_3a8 * 0x20 + *plVar17;
    }
    plVar17 = (longlong *)0x0;
    plVar22 = (longlong *)(lVar20 + 0x10);
    if (lVar20 == 0) {
      plVar22 = plVar17;
    }
    lVar20 = *plVar22;
    if (lVar20 == 0) {
      local_338 = 0;
      bVar5 = true;
    }
    else {
      lVar3 = *(longlong *)(lVar20 + 0x48);
      if (*(char *)(lVar3 + 0x28) == '\0') {
        FUN_1419f3850(lVar3);
      }
      plVar17 = *(longlong **)(lVar3 + 0x40);
    }
    local_1f8 = plVar17;
    if (bVar5) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_338);
    }
    FUN_141ed6ac0(&DAT_146ab6e78,&local_218,2,1);
    cVar12 = (**(code **)(*(longlong *)*param_2 + 0x48))();
    if ((cVar12 == '\0') || (local_3d8 != 0)) {
      uVar13 = 0;
    }
    else {
      uVar13 = 1;
    }
    if (lVar18 != 0) {
      LOCK();
      *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
      UNLOCK();
    }
    local_418 = (undefined8 *)CONCAT71(local_418._1_7_,uVar13);
    local_330[0] = lVar18;
    FUN_141a176b0(lVar20,&DAT_146ab6e78,local_330,&local_3d0);
    break;
  case 4:
    local_2a0 = &DAT_1469f6e50;
    local_298 = 0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar17,&local_3a4,&local_2a0);
    if (local_3a4 == -1) {
      lVar20 = 0;
    }
    else {
      lVar20 = (longlong)local_3a4 * 0x20 + *plVar17;
    }
    plVar17 = (longlong *)0x0;
    plVar22 = (longlong *)(lVar20 + 0x10);
    if (lVar20 == 0) {
      plVar22 = plVar17;
    }
    lVar20 = *plVar22;
    if (lVar20 == 0) {
      local_330[1] = 0;
      bVar6 = true;
    }
    else {
      lVar3 = *(longlong *)(lVar20 + 0x48);
      if (*(char *)(lVar3 + 0x28) == '\0') {
        FUN_1419f3850(lVar3);
      }
      plVar17 = *(longlong **)(lVar3 + 0x40);
    }
    local_1f8 = plVar17;
    if (bVar6) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_330 + 1);
    }
    FUN_141ed6ac0(&DAT_146ab6e78,&local_218,2,1);
    plVar17 = (longlong *)*param_2;
    if (lVar18 != 0) {
      LOCK();
      *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
      UNLOCK();
    }
    local_330[2] = lVar18;
    uVar13 = (**(code **)(*plVar17 + 0x48))();
    local_410 = CONCAT31(local_410._1_3_,uVar13);
    local_418 = (undefined8 *)&DAT_1464c0ef0;
    FUN_141a17df0(lVar20,&DAT_146ab6e78,local_330 + 2,&local_3d0);
    break;
  case 5:
    local_290 = &DAT_1469f7030;
    local_288 = 0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar17,&local_3a0,&local_290);
    if (local_3a0 == -1) {
      lVar20 = 0;
    }
    else {
      lVar20 = (longlong)local_3a0 * 0x20 + *plVar17;
    }
    plVar17 = (longlong *)0x0;
    plVar22 = (longlong *)(lVar20 + 0x10);
    if (lVar20 == 0) {
      plVar22 = plVar17;
    }
    lVar20 = *plVar22;
    if (lVar20 == 0) {
      local_318 = 0;
      bVar7 = true;
    }
    else {
      lVar3 = *(longlong *)(lVar20 + 0x48);
      if (*(char *)(lVar3 + 0x28) == '\0') {
        FUN_1419f3850(lVar3);
      }
      plVar17 = *(longlong **)(lVar3 + 0x40);
    }
    local_1f8 = plVar17;
    if (bVar7) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_318);
    }
    FUN_141ed6ac0(&DAT_146ab6e78,&local_218,2,1);
    plVar17 = (longlong *)*param_2;
    if (lVar18 != 0) {
      LOCK();
      *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
      UNLOCK();
    }
    local_310[0] = lVar18;
    uVar13 = (**(code **)(*plVar17 + 0x48))();
    local_410 = CONCAT31(local_410._1_3_,uVar13);
    local_418 = (undefined8 *)&DAT_1464c0ef0;
    FUN_141a18090(lVar20,&DAT_146ab6e78,local_310,&local_3d0);
    break;
  case 6:
    local_280 = &DAT_1469f7720;
    local_278 = 0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar17,local_388,&local_280);
    if (local_388[0] == -1) {
      lVar20 = 0;
    }
    else {
      lVar20 = (longlong)local_388[0] * 0x20 + *plVar17;
    }
    plVar17 = (longlong *)0x0;
    plVar22 = (longlong *)(lVar20 + 0x10);
    if (lVar20 == 0) {
      plVar22 = plVar17;
    }
    lVar20 = *plVar22;
    if (lVar20 == 0) {
      local_310[1] = 0;
      bVar8 = true;
    }
    else {
      lVar3 = *(longlong *)(lVar20 + 0x48);
      if (*(char *)(lVar3 + 0x28) == '\0') {
        FUN_1419f3850(lVar3);
      }
      plVar17 = *(longlong **)(lVar3 + 0x40);
    }
    local_1f8 = plVar17;
    if (bVar8) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_310 + 1);
    }
    FUN_141ed6ac0(&DAT_146ab6e78,&local_218,2,1);
    plVar17 = (longlong *)*param_2;
    if (lVar18 != 0) {
      LOCK();
      *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
      UNLOCK();
    }
    local_310[2] = lVar18;
    uVar13 = (**(code **)(*plVar17 + 0x48))();
    local_418 = (undefined8 *)CONCAT71(local_418._1_7_,uVar13);
    FUN_141a186c0(lVar20,&DAT_146ab6e78,local_310 + 2,&DAT_1464c0ef0);
    break;
  case 7:
    local_270 = &DAT_1469f7ae0;
    local_268 = 0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar17,&local_39c,&local_270);
    if (local_39c == -1) {
      lVar20 = 0;
    }
    else {
      lVar20 = (longlong)local_39c * 0x20 + *plVar17;
    }
    plVar17 = (longlong *)0x0;
    plVar22 = (longlong *)(lVar20 + 0x10);
    if (lVar20 == 0) {
      plVar22 = plVar17;
    }
    lVar20 = *plVar22;
    if (lVar20 == 0) {
      local_2f8 = 0;
      bVar9 = true;
    }
    else {
      lVar3 = *(longlong *)(lVar20 + 0x48);
      if (*(char *)(lVar3 + 0x28) == '\0') {
        FUN_1419f3850(lVar3);
      }
      plVar17 = *(longlong **)(lVar3 + 0x40);
    }
    local_1f8 = plVar17;
    if (bVar9) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_2f8);
    }
    FUN_141ed6ac0(&DAT_146ab6e78,&local_218,2,1);
    plVar17 = (longlong *)*param_2;
    if (lVar18 != 0) {
      LOCK();
      *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
      UNLOCK();
    }
    local_2f0[0] = lVar18;
    uVar13 = (**(code **)(*plVar17 + 0x48))();
    local_410 = CONCAT31(local_410._1_3_,uVar13);
    local_418 = (undefined8 *)&DAT_1464c0ef0;
    FUN_141a18c40(lVar20,&DAT_146ab6e78,local_2f0,&local_3d0);
    break;
  case 8:
    local_260 = &DAT_1469f7cc0;
    local_258 = 0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar17,local_398,&local_260);
    if (local_398[0] == -1) {
      lVar20 = 0;
    }
    else {
      lVar20 = (longlong)local_398[0] * 0x20 + *plVar17;
    }
    plVar17 = (longlong *)0x0;
    plVar22 = (longlong *)(lVar20 + 0x10);
    if (lVar20 == 0) {
      plVar22 = plVar17;
    }
    lVar20 = *plVar22;
    if (lVar20 == 0) {
      local_2f0[1] = 0;
    }
    else {
      lVar3 = *(longlong *)(lVar20 + 0x48);
      if (*(char *)(lVar3 + 0x28) == '\0') {
        FUN_1419f3850(lVar3);
      }
      plVar17 = *(longlong **)(lVar3 + 0x40);
    }
    local_1f8 = plVar17;
    FUN_141ed6ac0(&DAT_146ab6e78,&local_218,2,1);
    plVar17 = (longlong *)*param_2;
    if (lVar18 != 0) {
      LOCK();
      *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
      UNLOCK();
    }
    local_2f0[2] = lVar18;
    uVar13 = (**(code **)(*plVar17 + 0x48))();
    local_418 = (undefined8 *)CONCAT71(local_418._1_7_,uVar13);
    FUN_141a18ef0(lVar20,&DAT_146ab6e78,local_2f0 + 2,&DAT_1464c0ef0);
    break;
  default:
    goto switchD_142aa7b79_default;
  }
  puVar24 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
  local_d8 = 0x3f800000bf800000;
  uStack_d0 = 0x3f8000003f800000;
  local_b8 = 0x3f8000003f800000;
  uStack_b0 = 0x3f8000003f800000;
  puVar23 = puVar24 + 5;
  local_c8 = 0;
  local_a8 = 0x3f800000;
  local_98 = 0xbf800000;
  uStack_94 = 0xbf800000;
  uStack_90 = 0x3f800000;
  uStack_8c = 0x3f800000;
  local_88 = 0;
  local_84 = 0x3f800000;
  local_78 = 0x3f800000;
  uStack_74 = 0xbf800000;
  uStack_70 = 0x3f800000;
  uStack_6c = 0x3f800000;
  local_68 = 0x3f800000;
  local_64 = 0x3f800000;
  if (DAT_146ab6eb0 < puVar23) {
    FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x30);
    puVar24 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
    puVar23 = puVar24 + 5;
  }
  DAT_146ab6e8c = DAT_146ab6e8c + 1;
  local_418 = (undefined8 *)CONCAT44(local_418._4_4_,0x20);
  DAT_146ab6ea8 = puVar23;
  *DAT_146ab6e80 = puVar24;
  DAT_146ab6e80 = puVar24 + 1;
  *(int *)((longlong)puVar24 + 0x1c) = local_3d0;
  puVar24[1] = 0;
  puVar24[2] = 0;
  *puVar24 = &PTR_LAB_143f59420;
  *(undefined4 *)(puVar24 + 3) = 0;
  *(int *)(puVar24 + 4) = iStack_3cc;
  *(undefined4 *)((longlong)puVar24 + 0x24) = 0x3f800000;
  FUN_141a14d80(&DAT_146ab6e78,1,2,&local_d8);
  local_370 = *(longlong **)(param_1 + 8);
  puVar24 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
  puVar23 = puVar24 + 1;
  if (DAT_146ab6eb0 < puVar23) {
    FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x10);
    puVar24 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
    puVar23 = puVar24 + 1;
  }
  DAT_146ab6ea8 = puVar23;
  *puVar24 = local_370;
  puVar26 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
  puVar23 = puVar26 + 5;
  if (DAT_146ab6eb0 < puVar23) {
    FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x30);
    puVar26 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
    puVar23 = puVar26 + 5;
  }
  DAT_146ab6e8c = DAT_146ab6e8c + 1;
  DAT_146ab6ea8 = puVar23;
  *DAT_146ab6e80 = puVar26;
  DAT_146ab6e80 = puVar26 + 1;
  *DAT_146ab6e80 = 0;
  *puVar26 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar26 + 2) = 1;
  puVar26[3] = puVar24;
  *(undefined4 *)(puVar26 + 4) = 0;
  *(undefined1 *)((longlong)puVar26 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
switchD_142aa7b79_default:
  return;
}



// FUNCTION 142aa8540 FUN_142aa8540 body=720 status=ok
// SIG undefined FUN_142aa8540(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142aa8540(longlong param_1,undefined8 *param_2,float *param_3,uint param_4)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined4 local_110;
  ulonglong local_108;
  undefined8 *local_100;
  longlong local_f8;
  undefined8 *local_f0;
  undefined4 local_e8;
  uint local_d8;
  int iStack_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  float local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  uint local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  undefined1 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  plVar2 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x30))();
  if ((plVar2 != (longlong *)0x0) && (lVar3 = (**(code **)(*plVar2 + 8))(plVar2), lVar3 != 0)) {
    if (*(longlong *)(param_1 + 0x40) != lVar3) {
      FMediaTextureResource::UpdateTextureReference(param_1,lVar3);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0xa8,0);
      FMediaTextureResource::UpdateResourceSize(param_1);
    }
    *(undefined1 *)(param_1 + 0x78) = 0;
    return;
  }
  uVar6 = (param_4 & 0xff) << 4;
  uVar7 = uVar6 | 0x100;
  uVar1 = FUN_142aa9bb0(param_2);
  (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,&local_d8);
  uVar5 = CONCAT44(iStack_d4,local_d8);
  if ((((*param_3 == *(float *)(param_1 + 0x7c)) &&
       (fVar9 = param_3[1], fVar9 == *(float *)(param_1 + 0x80))) &&
      (fVar10 = param_3[2], fVar10 == *(float *)(param_1 + 0x84))) &&
     (fVar11 = param_3[3], fVar11 == *(float *)(param_1 + 0x88))) {
    lVar3 = *(longlong *)(param_1 + 0xa8);
    if (((lVar3 != 0) && (*(uint *)(lVar3 + 0x60) == local_d8)) &&
       ((*(int *)(lVar3 + 100) == iStack_d4 &&
        ((*(uint *)(lVar3 + 0x3c) == uVar1 && ((*(uint *)(lVar3 + 0x40) & uVar7) == uVar7))))))
    goto LAB_142aa8765;
  }
  else {
    fVar9 = param_3[1];
    fVar10 = param_3[2];
    fVar11 = param_3[3];
  }
  local_f8 = param_1 + 0xa8;
  local_e8 = 1;
  local_f0 = &local_d0;
  local_100 = &local_98;
  local_108 = local_108 & 0xffffffffffffff00;
  local_c8 = 1;
  local_110 = 1;
  local_d0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_74 = 0;
  local_70 = 0;
  local_88 = 1;
  local_68 = 0;
  local_60 = 0;
  local_118 = (undefined8 *)(CONCAT44(local_118._4_4_,uVar6) | 0x100);
  local_b8 = fVar11;
  fStack_84 = *param_3;
  fStack_80 = fVar9;
  fStack_7c = fVar10;
  local_78 = fVar11;
  FUN_1404a2100(uVar5,iStack_d4,uVar1 & 0xff,1);
  fVar9 = param_3[1];
  fVar10 = param_3[2];
  fVar11 = param_3[3];
  *(float *)(param_1 + 0x7c) = *param_3;
  *(float *)(param_1 + 0x80) = fVar9;
  *(float *)(param_1 + 0x84) = fVar10;
  *(float *)(param_1 + 0x88) = fVar11;
  FMediaTextureResource::UpdateResourceSize(param_1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_d0);
  lVar3 = *(longlong *)(param_1 + 0xa8);
  uVar5 = (ulonglong)local_d8;
LAB_142aa8765:
  lVar8 = *(longlong *)(param_1 + 8);
  local_a0 = (uint)uVar5;
  if (lVar8 != lVar3) {
    FMediaTextureResource::UpdateTextureReference(param_1);
    lVar8 = *(longlong *)(param_1 + 8);
    local_a0 = local_d8;
  }
  plVar2 = (longlong *)*param_2;
  local_b0 = 0;
  local_a8 = 0;
  uVar4 = (**(code **)*plVar2)(plVar2);
  local_110 = (**(code **)(*plVar2 + 0x28))(plVar2);
  local_118 = &local_b0;
  local_108 = uVar4;
  (**(code **)(*DAT_146ab6358 + 0x590))(DAT_146ab6358,&DAT_146ab6e78,lVar8,0);
  *(undefined1 *)(param_1 + 0x78) = 0;
  return;
}



// FUNCTION 142aa8810 FUN_142aa8810 body=78 status=ok
// SIG undefined FUN_142aa8810(void)

void FUN_142aa8810(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1454e0b58;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_FUN_1454e0ba0;
  }
  return;
}



// FUNCTION 142aa8860 FUN_142aa8860 body=886 status=ok
// SIG undefined FUN_142aa8860(void)

longlong * FUN_142aa8860(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong **pplVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 local_res8 [8];
  longlong *local_58;
  longlong *plStack_50;
  longlong *local_48;
  longlong *plStack_40;
  longlong *local_38;
  longlong *local_30;
  
  pplVar3 = (longlong **)(param_1 + 0xd8);
  if (*pplVar3 == (longlong *)0x0) {
    puVar8 = (undefined8 *)FName::FName(local_res8,"Media",1);
    uVar5 = *puVar8;
    uVar9 = FUN_14168dc80();
    plVar10 = (longlong *)FUN_141690010(uVar9,uVar5);
    if (plVar10 != (longlong *)0x0) {
      plVar11 = (longlong *)operator_new(0x20);
      plStack_40 = (longlong *)0x0;
      if (plVar11 != (longlong *)0x0) {
        *(undefined4 *)(plVar11 + 1) = 1;
        *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
        *plVar11 = (longlong)&PTR_FUN_1454e0b48;
        plVar11[2] = (longlong)&PTR_StartProfileThreadUsage_1454e0830;
        FWeakObjectPtr::operator=(plVar11 + 3,param_1);
        plStack_40 = plVar11;
      }
      local_48 = plStack_40 + 2;
      SharedPointerInternals::EnableSharedFromThis(&local_48,local_48,local_48);
      local_58 = local_48;
      plStack_50 = plStack_40;
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
        UNLOCK();
      }
      if (pplVar3 != &local_58) {
        *pplVar3 = local_48;
        local_58 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xe0,&plStack_50);
      }
      plVar11 = plStack_50;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_50 + 1;
        lVar12 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plStack_50)(plStack_50);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_50 + 8))(plStack_50,1);
          }
        }
      }
      plVar11 = plStack_40;
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_40 + 1;
        lVar12 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plStack_40)(plStack_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
      plVar11 = *(longlong **)(param_1 + 0xe0);
      local_38 = *pplVar3;
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
      }
      local_30 = plVar11;
      plVar10 = (longlong *)(**(code **)(*plVar10 + 0x78))(plVar10);
      (**(code **)(*plVar10 + 0x10))(plVar10,&local_38);
      plVar10 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar12 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar11 + 1;
        lVar12 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
    }
  }
  puVar8 = (undefined8 *)operator_new(0xd8);
  if (puVar8 == (undefined8 *)0x0) {
    return (longlong *)0x0;
  }
  uVar5 = *(undefined8 *)(param_1 + 0xbc);
  uVar9 = *(undefined8 *)(param_1 + 0xc4);
  lVar12 = 0xe8;
  if (((*(int *)(param_1 + 0xf4) == 0 && *(int *)(param_1 + 0xf0) == 0) &&
      *(int *)(param_1 + 0xec) == 0) && *(int *)(param_1 + 0xe8) == 0) {
    lVar12 = 0x100;
  }
  uVar6 = *(undefined8 *)(lVar12 + param_1);
  uVar7 = ((undefined8 *)(lVar12 + param_1))[1];
  puVar8[1] = 0;
  *(undefined4 *)(puVar8 + 3) = 4;
  puVar8[4] = 0;
  puVar8[5] = 0;
  *(undefined1 *)(puVar8 + 7) = 0;
  puVar8[8] = 0;
  puVar8[9] = 0;
  puVar8[10] = 0;
  puVar8[0xb] = 0xc7efffffe0000000;
  puVar8[0xc] = 0;
  puVar8[0xd] = 0;
  *(undefined4 *)(puVar8 + 0xe) = 0;
  *(undefined2 *)((longlong)puVar8 + 0x74) = 0;
  *(undefined1 *)((longlong)puVar8 + 0x76) = 0;
  *puVar8 = &PTR_FUN_1454e0790;
  puVar8[2] = &PTR_LAB_1454e07d0;
  *(undefined1 *)(puVar8 + 0xf) = 0;
  *(undefined8 *)((longlong)puVar8 + 0x7c) = uVar5;
  *(undefined8 *)((longlong)puVar8 + 0x84) = uVar9;
  *(undefined8 *)((longlong)puVar8 + 0x8c) = uVar6;
  *(undefined8 *)((longlong)puVar8 + 0x94) = uVar7;
  puVar8[0x14] = 0;
  puVar8[0x15] = 0;
  puVar8[0x17] = param_1 + 0x110;
  puVar8[0x18] = param_1 + 0x140;
  puVar8[0x16] = param_1;
  plVar10 = puVar8 + 2;
  if (puVar8 == (undefined8 *)0x0) {
    plVar10 = (longlong *)0x0;
  }
  puVar8[0x19] = 0;
  puVar8[0x1a] = 0;
  return plVar10;
}



// FUNCTION 142aa8be0 FUN_142aa8be0 body=49 status=ok
// SIG undefined FUN_142aa8be0(void)

void FUN_142aa8be0(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x2c8))();
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x358))(param_1,0);
  }
  FUN_142a83590(param_1);
  return;
}



// FUNCTION 142aa8c20 FUN_142aa8c20 body=9 status=ok
// SIG undefined FUN_142aa8c20(void)

void FUN_142aa8c20(longlong param_1)

{
  FMediaPlayerFacade::~FMediaPlayerFacade(param_1 + 0x10);
  return;
}



// FUNCTION 142aa8c30 FUN_142aa8c30 body=12 status=ok
// SIG undefined FUN_142aa8c30(void)

void FUN_142aa8c30(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_StartProfileThreadUsage_144146a38;
  return;
}



// FUNCTION 142aa8c40 EnumerateAudioCaptureDevices body=396 status=ok
// SIG undefined EnumerateAudioCaptureDevices(void)

/* WARNING: Removing unreachable block (ram,0x000142aa8d54) */

void UMediaBlueprintFunctionLibrary::EnumerateAudioCaptureDevices
               (longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined8 local_30;
  undefined8 local_28;
  
  local_58 = 0;
  local_50 = 0;
  MediaCaptureSupport::EnumerateAudioCaptureDevices(&local_58);
  lVar7 = (longlong)(int)local_50 * 0x40 + local_58;
  lVar8 = local_58;
  do {
    if (lVar8 == lVar7) {
      TArray<FMediaCaptureDeviceInfo,FDefaultAllocator>::
      ~TArray<FMediaCaptureDeviceInfo,FDefaultAllocator>(&local_58);
      return;
    }
    iVar4 = *(int *)(lVar8 + 0x28);
    if (iVar4 == 1) {
      uVar5 = param_2 & 8;
joined_r0x000142aa8cbd:
      if (uVar5 != 0) {
        FText::FText(local_48,lVar8);
        FString::FString(&local_30,lVar8 + 0x30);
        iVar4 = (int)param_1[1];
        *(int *)(param_1 + 1) = iVar4 + 1;
        if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
        }
        lVar3 = *param_1 + (longlong)iVar4 * 0x28;
        FText::FText(lVar3,local_48);
        plVar6 = local_40;
        *(undefined8 *)(lVar3 + 0x18) = 0;
        *(undefined8 *)(lVar3 + 0x18) = local_30;
        *(undefined4 *)(lVar3 + 0x20) = (undefined4)local_28;
        *(undefined4 *)(lVar3 + 0x24) = local_28._4_4_;
        local_28 = 0;
        local_30 = 0;
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_40 + 1;
          lVar3 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar2 = (int *)((longlong)plVar6 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
            }
          }
        }
      }
    }
    else {
      if (iVar4 == 2) {
        uVar5 = param_2 & 1;
        goto joined_r0x000142aa8cbd;
      }
      if (iVar4 == 3) {
        uVar5 = param_2 & 4;
        goto joined_r0x000142aa8cbd;
      }
      if (iVar4 == 5) {
        uVar5 = param_2 & 2;
        goto joined_r0x000142aa8cbd;
      }
    }
    lVar8 = lVar8 + 0x40;
  } while( true );
}



// FUNCTION 142aa8dd0 EnumerateVideoCaptureDevices body=448 status=ok
// SIG undefined EnumerateVideoCaptureDevices(void)

/* WARNING: Removing unreachable block (ram,0x000142aa8f0f) */

void UMediaBlueprintFunctionLibrary::EnumerateVideoCaptureDevices(longlong *param_1,byte param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  longlong local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined8 local_30;
  undefined8 local_28;
  
  local_58 = 0;
  local_50 = 0;
  MediaCaptureSupport::EnumerateVideoCaptureDevices(&local_58);
  lVar7 = (longlong)(int)local_50 * 0x40 + local_58;
  if (local_58 != lVar7) {
    lVar6 = local_58;
    do {
      iVar4 = *(int *)(lVar6 + 0x28);
      if ((iVar4 == 4) && ((param_2 >> 3 & 1) != 0)) {
LAB_142aa8e92:
        FText::FText(local_48,lVar6);
        FString::FString(&local_30,lVar6 + 0x30);
        iVar4 = (int)param_1[1];
        *(int *)(param_1 + 1) = iVar4 + 1;
        if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
        }
        lVar3 = *param_1 + (longlong)iVar4 * 0x28;
        FText::FText(lVar3,local_48);
        plVar5 = local_40;
        *(undefined8 *)(lVar3 + 0x18) = 0;
        *(undefined8 *)(lVar3 + 0x18) = local_30;
        *(undefined4 *)(lVar3 + 0x20) = (undefined4)local_28;
        *(undefined4 *)(lVar3 + 0x24) = local_28._4_4_;
        local_28 = 0;
        local_30 = 0;
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_40 + 1;
          lVar3 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
      }
      else {
        if (iVar4 == 6) {
          bVar8 = (param_2 & 4) == 0;
LAB_142aa8e6a:
          if (!bVar8) goto LAB_142aa8e92;
        }
        else {
          if (iVar4 == 7) {
            bVar8 = (param_2 & 1) == 0;
            goto LAB_142aa8e6a;
          }
          if (iVar4 == 8) {
            bVar8 = (param_2 & 2) == 0;
            goto LAB_142aa8e6a;
          }
          if (iVar4 == 9) {
            bVar8 = (param_2 & 8) == 0;
            goto LAB_142aa8e6a;
          }
        }
        if (((iVar4 == 10) || (iVar4 == 0xb)) && ((param_2 >> 3 & 1) != 0)) goto LAB_142aa8e92;
      }
      lVar6 = lVar6 + 0x40;
    } while (lVar6 != lVar7);
  }
  TArray<FMediaCaptureDeviceInfo,FDefaultAllocator>::
  ~TArray<FMediaCaptureDeviceInfo,FDefaultAllocator>(&local_58);
  return;
}



// FUNCTION 142aa8f90 EnumerateWebcamCaptureDevices body=396 status=ok
// SIG undefined EnumerateWebcamCaptureDevices(void)

/* WARNING: Removing unreachable block (ram,0x000142aa90a4) */

void UMediaBlueprintFunctionLibrary::EnumerateWebcamCaptureDevices
               (longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined8 local_30;
  undefined8 local_28;
  
  local_58 = 0;
  local_50 = 0;
  MediaCaptureSupport::EnumerateVideoCaptureDevices(&local_58);
  lVar7 = (longlong)(int)local_50 * 0x40 + local_58;
  lVar8 = local_58;
  do {
    if (lVar8 == lVar7) {
      TArray<FMediaCaptureDeviceInfo,FDefaultAllocator>::
      ~TArray<FMediaCaptureDeviceInfo,FDefaultAllocator>(&local_58);
      return;
    }
    iVar4 = *(int *)(lVar8 + 0x28);
    if (iVar4 == 4) {
      uVar5 = param_2 & 1;
joined_r0x000142aa900d:
      if (uVar5 != 0) {
        FText::FText(local_48,lVar8);
        FString::FString(&local_30,lVar8 + 0x30);
        iVar4 = (int)param_1[1];
        *(int *)(param_1 + 1) = iVar4 + 1;
        if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
        }
        lVar3 = *param_1 + (longlong)iVar4 * 0x28;
        FText::FText(lVar3,local_48);
        plVar6 = local_40;
        *(undefined8 *)(lVar3 + 0x18) = 0;
        *(undefined8 *)(lVar3 + 0x18) = local_30;
        *(undefined4 *)(lVar3 + 0x20) = (undefined4)local_28;
        *(undefined4 *)(lVar3 + 0x24) = local_28._4_4_;
        local_28 = 0;
        local_30 = 0;
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_40 + 1;
          lVar3 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar2 = (int *)((longlong)plVar6 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
            }
          }
        }
      }
    }
    else {
      if (iVar4 == 9) {
        uVar5 = param_2 & 8;
        goto joined_r0x000142aa900d;
      }
      if (iVar4 == 10) {
        uVar5 = param_2 & 2;
        goto joined_r0x000142aa900d;
      }
      if (iVar4 == 0xb) {
        uVar5 = param_2 & 4;
        goto joined_r0x000142aa900d;
      }
    }
    lVar8 = lVar8 + 0x40;
  } while( true );
}



// FUNCTION 142aa9120 FUN_142aa9120 body=73 status=ok
// SIG undefined FUN_142aa9120(void)

void FUN_142aa9120(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong local_18;
  longlong local_10;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 8);
  local_18 = *param_2;
  local_10 = 0;
  if (local_18 != 0) {
    local_10 = param_2[1];
  }
  (**(code **)(param_1 + 0x10))(uVar1,&local_18);
  return;
}



// FUNCTION 142aa9170 FUN_142aa9170 body=153 status=ok
// SIG undefined FUN_142aa9170(void)

undefined1 FUN_142aa9170(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_18;
  longlong local_10;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar2 == 0) {
    return 0;
  }
  lVar4 = 0;
  lVar2 = lVar4;
  lVar3 = lVar4;
  if (*param_2 != 0) {
    lVar2 = *param_2;
    lVar3 = param_2[1];
  }
  uVar1 = FWeakObjectPtr::Get(param_1 + 8);
  local_10 = lVar3;
  if (lVar2 == 0) {
    local_10 = lVar4;
  }
  local_18 = lVar2;
  (**(code **)(param_1 + 0x10))(uVar1,&local_18);
  return 1;
}



// FUNCTION 142aa9210 FUN_142aa9210 body=294 status=ok
// SIG undefined FUN_142aa9210(void)

void FUN_142aa9210(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  FUN_142aabd20(param_1[2],param_1 + 3);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  plVar5 = (longlong *)param_1[0xb];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  *(undefined1 *)(param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_1454e0868;
  if (param_1[0xf] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xf] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar3);
  plVar5 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(*pDVar3,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar5 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar3 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar5;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 142aa9340 FUN_142aa9340 body=263 status=ok
// SIG undefined FUN_142aa9340(void)

void FUN_142aa9340(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  uVar3 = FExternalTextureRegistry::Get();
  FExternalTextureRegistry::UnregisterExternalTexture(uVar3,param_1 + 2);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_1454e0858;
  *(undefined1 *)(param_1 + 4) = 0;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 142aa9450 FUN_142aa9450 body=24 status=ok
// SIG undefined FUN_142aa9450(void)

undefined8 FUN_142aa9450(longlong param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x30))) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)param_2 * 8);
  }
  return 0;
}



// FUNCTION 142aa9470 GetAspectRatio body=37 status=ok
// SIG undefined GetAspectRatio(void)

float UMediaTexture::GetAspectRatio(longlong param_1)

{
  if (*(int *)(param_1 + 0x114) == 0) {
    return 0.0;
  }
  return (float)*(int *)(param_1 + 0x110) / (float)*(int *)(param_1 + 0x114);
}



// FUNCTION 142aa94a0 GetAssetRegistryTags body=298 status=ok
// SIG undefined GetAssetRegistryTags(void)

void UBaseMediaSource::GetAssetRegistryTags(longlong *param_1,longlong *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined1 local_res8 [8];
  void *local_48;
  int local_40;
  undefined8 local_38;
  void *local_30;
  int local_28;
  undefined4 local_24;
  
  (**(code **)(*param_1 + 0x278))(param_1,&local_48);
  if (1 < local_40) {
    puVar3 = (undefined8 *)FName::FName(local_res8,&DAT_1454ddc50,1);
    _Src = local_48;
    local_28 = local_40;
    local_30 = (void *)0x0;
    local_38 = *puVar3;
    if (local_40 == 0) {
      pvVar4 = (void *)0x0;
      local_24 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_30,local_40,0);
      pvVar4 = local_30;
      ::_guard_xfg_dispatch_icall_nop(local_30,_Src,(longlong)local_40 * 2);
    }
    uVar2 = local_38;
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_2,iVar1);
    }
    puVar3 = (undefined8 *)((longlong)iVar1 * 0x20 + *param_2);
    *puVar3 = uVar2;
    puVar3[1] = pvVar4;
    *(int *)(puVar3 + 2) = local_28;
    *(undefined4 *)((longlong)puVar3 + 0x14) = local_24;
    puVar3[3] = 1;
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142aa95d0 FUN_142aa95d0 body=12 status=ok
// SIG undefined FUN_142aa95d0(void)

void FUN_142aa95d0(longlong param_1)

{
  FMediaPlayerFacade::GetAudioTrackChannels(*(undefined8 *)(param_1 + 0x120));
  return;
}



// FUNCTION 142aa95e0 FUN_142aa95e0 body=12 status=ok
// SIG undefined FUN_142aa95e0(void)

void FUN_142aa95e0(longlong param_1)

{
  FMediaPlayerFacade::GetAudioTrackSampleRate(*(undefined8 *)(param_1 + 0x120));
  return;
}



// FUNCTION 142aa95f0 RHICreateSamplerState body=30 status=ok
// SIG undefined RHICreateSamplerState(void)

undefined8 FD3D12DynamicRHI::RHICreateSamplerState(longlong param_1,undefined8 param_2)

{
  FMediaPlayerFacade::GetAudioTrackType(*(undefined8 *)(param_1 + 0x120));
  return param_2;
}



// FUNCTION 142aa9610 GetDesc body=62 status=ok
// SIG undefined GetDesc(void)

undefined8 * UMediaPlayer::GetDesc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"UMediaPlayer",0x1a);
  return param_2;
}



// FUNCTION 142aa9650 GetDesc body=59 status=ok
// SIG undefined GetDesc(void)

undefined8 UMediaTexture::GetDesc(longlong param_1,undefined8 param_2)

{
  FString::PrintfImpl(param_2,L"%ix%i [%s]",*(undefined4 *)(param_1 + 0x110),
                      *(undefined4 *)(param_1 + 0x114),PTR_u_B8G8R8A8_1464ca200);
  return param_2;
}



// FUNCTION 142aa9690 FUN_142aa9690 body=18 status=ok
// SIG undefined FUN_142aa9690(void)

undefined8 * FUN_142aa9690(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(*(longlong *)(param_1 + 0x120) + 0x18);
  return param_2;
}



// FUNCTION 142aa96b0 RHICreateSamplerState body=30 status=ok
// SIG undefined RHICreateSamplerState(void)

undefined8 FD3D12DynamicRHI::RHICreateSamplerState(longlong param_1,undefined8 param_2)

{
  FMediaPlayerFacade::GetDuration(*(undefined8 *)(param_1 + 0x120));
  return param_2;
}



// FUNCTION 142aa96e0 GetFriendlyName body=33 status=ok
// SIG undefined GetFriendlyName(void)

undefined8 FMediaTextureResource::GetFriendlyName(longlong param_1,undefined8 param_2)

{
  UObjectBaseUtility::GetPathName(*(undefined8 *)(param_1 + 0xa0),param_2,0);
  return param_2;
}



// FUNCTION 142aa9710 FUN_142aa9710 body=346 status=ok
// SIG undefined FUN_142aa9710(void)

undefined8 FUN_142aa9710(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  short *psVar2;
  char cVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined2 *puVar9;
  int iVar10;
  longlong local_28;
  ulonglong local_20;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)(param_1 + 0x38);
  cVar3 = FPaths::IsRelative(puVar1);
  if (cVar3 == '\0') {
    FString::FString(param_2,puVar1);
    return param_2;
  }
  cVar3 = FString::StartsWith(puVar1,&DAT_1454ddc68,1);
  if (cVar3 == '\0') {
    FPaths::ConvertRelativePathToFull(param_2,puVar1);
  }
  else {
    iVar6 = *(int *)(param_1 + 0x40);
    lVar8 = -1;
    if (iVar6 == 0) {
      puVar9 = &DAT_143f3eda8;
      iVar5 = -1;
    }
    else {
      puVar9 = (undefined2 *)*puVar1;
      iVar5 = iVar6 + -1;
    }
    iVar10 = 0;
    if (iVar6 == 0) {
      iVar5 = iVar10;
    }
    iVar6 = iVar5 + -2;
    if ((-1 < iVar6) && (iVar10 = iVar5, iVar6 < iVar5)) {
      iVar10 = iVar6;
    }
    local_28 = 0;
    local_20 = 0;
    psVar2 = puVar9 + ((longlong)iVar5 - (longlong)iVar10);
    if ((psVar2 != (short *)0x0) && (*psVar2 != 0)) {
      do {
        lVar8 = lVar8 + 1;
      } while (psVar2[lVar8] != 0);
      uVar7 = (int)lVar8 + 1;
      local_20 = (ulonglong)uVar7;
      if (0 < (int)uVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
      }
      FGenericPlatformString::Memcpy(local_28,psVar2,(longlong)(int)uVar7 * 2);
    }
    uVar4 = FPaths::ProjectContentDir(local_18);
    FPaths::ConvertRelativePathToFull(param_2,uVar4,&local_28);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    if (local_28 != 0) {
      FMemory::Free();
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 142aa9870 GetHeight body=7 status=ok
// SIG undefined GetHeight(void)

undefined4 UMediaTexture::GetHeight(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x114);
}



// FUNCTION 142aa9880 FUN_142aa9880 body=65 status=ok
// SIG undefined FUN_142aa9880(void)

undefined4 FUN_142aa9880(longlong param_1)

{
  char cVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [6];
  
  local_res8[0] = 0;
  local_res10[0] = 0;
  cVar1 = FMediaPlayerFacade::GetViewField(*(undefined8 *)(param_1 + 0x120),local_res8,local_res10);
  if (cVar1 == '\0') {
    return 0;
  }
  return local_res8[0];
}



// FUNCTION 142aa98d0 RHICreateSamplerState body=30 status=ok
// SIG undefined RHICreateSamplerState(void)

undefined8 FD3D12DynamicRHI::RHICreateSamplerState(longlong param_1,undefined8 param_2)

{
  FUN_142a5afa0(*(undefined8 *)(param_1 + 0x120));
  return param_2;
}



// FUNCTION 142aa9910 GetMediaOption body=29 status=ok
// SIG undefined GetMediaOption(void)

undefined8
UMediaSource::GetMediaOption
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FString::FString(param_2,param_4);
  return param_2;
}



// FUNCTION 142aa9930 GetMediaOption body=29 status=ok
// SIG undefined GetMediaOption(void)

undefined8
UMediaSource::GetMediaOption
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FText::FText(param_2,param_4);
  return param_2;
}



// FUNCTION 142aa9970 GetMediaOption body=108 status=ok
// SIG undefined GetMediaOption(void)

undefined8
UPlatformMediaSource::GetMediaOption
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  if (DAT_146b2a795 != '\0') {
    FString::FString(param_2,param_4);
    return param_2;
  }
  DAT_146b2a795 = 1;
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x10))(lVar1 + 0x28);
    DAT_146b2a795 = 0;
    return param_2;
  }
  FString::FString(param_2,param_4);
  DAT_146b2a795 = 0;
  return param_2;
}



// FUNCTION 142aa99e0 GetMediaOption body=108 status=ok
// SIG undefined GetMediaOption(void)

undefined8
UPlatformMediaSource::GetMediaOption
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  if (DAT_146b2a796 != '\0') {
    FText::FText(param_2,param_4);
    return param_2;
  }
  DAT_146b2a796 = 1;
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(lVar1 + 0x28) + 8))(lVar1 + 0x28);
    DAT_146b2a796 = 0;
    return param_2;
  }
  FText::FText(param_2,param_4);
  DAT_146b2a796 = 0;
  return param_2;
}



// FUNCTION 142aa9a50 GetMediaOption body=58 status=ok
// SIG undefined GetMediaOption(void)

undefined8
UPlatformMediaSource::GetMediaOption(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  if (DAT_146b2a793 == '\0') {
    DAT_146b2a793 = 1;
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 != 0) {
      param_3 = (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x20))(lVar1 + 0x28);
    }
    DAT_146b2a793 = '\0';
  }
  return param_3;
}



// FUNCTION 142aa9a90 GetMediaOption body=58 status=ok
// SIG undefined GetMediaOption(void)

undefined8
UPlatformMediaSource::GetMediaOption(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  if (DAT_146b2a794 == '\0') {
    DAT_146b2a794 = 1;
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 != 0) {
      param_3 = (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x18))(lVar1 + 0x28);
    }
    DAT_146b2a794 = '\0';
  }
  return param_3;
}



// FUNCTION 142aa9ad0 GetMediaOption body=60 status=ok
// SIG undefined GetMediaOption(void)

undefined1
UPlatformMediaSource::GetMediaOption(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  
  if (DAT_146b2a792 == '\0') {
    DAT_146b2a792 = 1;
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 != 0) {
      param_3 = (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x28))(lVar1 + 0x28);
    }
    DAT_146b2a792 = '\0';
  }
  return param_3;
}



// FUNCTION 142aa9b30 CanPlay body=12 status=ok
// SIG undefined CanPlay(void)

void ULevelSequencePlayer::CanPlay(longlong param_1)

{
  FWeakObjectPtr::Get(param_1 + 0x6b0);
  return;
}



// FUNCTION 142aa9b40 GetNext body=68 status=ok
// SIG undefined GetNext(void)

undefined8 UMediaPlaylist::GetNext(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  if (0 < *(int *)(param_1 + 0x30)) {
    iVar2 = *param_2;
    iVar1 = *(int *)(param_1 + 0x30) + -1;
    if (iVar2 < -1) {
      iVar1 = -1;
    }
    else if (iVar2 < iVar1) {
      iVar1 = iVar2;
    }
    *param_2 = iVar1 + 1;
    iVar2 = (iVar1 + 1) % *(int *)(param_1 + 0x30);
    *param_2 = iVar2;
    return *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar2 * 8);
  }
  *param_2 = -1;
  return 0;
}



// FUNCTION 142aa9b90 FUN_142aa9b90 body=15 status=ok
// SIG undefined FUN_142aa9b90(void)

void FUN_142aa9b90(longlong param_1,undefined1 param_2)

{
  FMediaPlayerFacade::GetNumTrackFormats(*(undefined8 *)(param_1 + 0x120),param_2);
  return;
}



// FUNCTION 142aa9ba0 FUN_142aa9ba0 body=15 status=ok
// SIG undefined FUN_142aa9ba0(void)

void FUN_142aa9ba0(longlong param_1,undefined1 param_2)

{
  FMediaPlayerFacade::GetNumTracks(*(undefined8 *)(param_1 + 0x120),param_2);
  return;
}



// FUNCTION 142aa9bb0 FUN_142aa9bb0 body=88 status=ok
// SIG undefined FUN_142aa9bb0(void)

undefined8 FUN_142aa9bb0(undefined8 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(longlong *)*param_1 + 0x18))();
  switch(uVar1) {
  case 1:
  case 2:
  case 3:
  case 6:
  case 7:
  case 8:
    return 2;
  case 4:
  case 5:
    return 3;
  case 9:
    return 9;
  case 10:
    return 10;
  default:
    return 0;
  }
}



// FUNCTION 142aa9c30 FUN_142aa9c30 body=34 status=ok
// SIG undefined FUN_142aa9c30(void)

undefined8 * FUN_142aa9c30(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = *(undefined8 *)(param_1 + 0x120);
  lVar1 = *(longlong *)(param_1 + 0x128);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 142aa9c60 RHICreateSamplerState body=30 status=ok
// SIG undefined RHICreateSamplerState(void)

undefined8 FD3D12DynamicRHI::RHICreateSamplerState(longlong param_1,undefined8 param_2)

{
  FMediaPlayerFacade::GetPlayerName(*(undefined8 *)(param_1 + 0x120));
  return param_2;
}



// FUNCTION 142aa9c80 GetPrevious body=69 status=ok
// SIG undefined GetPrevious(void)

undefined8 UMediaPlaylist::GetPrevious(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x30);
  if (0 < iVar2) {
    iVar1 = *param_2;
    if (iVar1 < 0) {
      iVar2 = 0;
    }
    else if (iVar1 < iVar2) {
      iVar2 = iVar1;
    }
    *param_2 = iVar2 + -1;
    iVar2 = *(int *)(param_1 + 0x30) + iVar2 + -1;
    *param_2 = iVar2;
    iVar2 = iVar2 % *(int *)(param_1 + 0x30);
    *param_2 = iVar2;
    return *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar2 * 8);
  }
  *param_2 = -1;
  return 0;
}



// FUNCTION 142aa9cd0 GetRandom body=131 status=ok
// SIG undefined GetRandom(void)

undefined8 UMediaPlaylist::GetRandom(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 != 0) {
    if (iVar1 + -1 < 1) {
      iVar2 = 0;
    }
    else {
      iVar2 = rand();
      iVar3 = (int)((float)iVar2 * 3.051851e-05 * (float)(iVar1 + -1));
      iVar2 = iVar1 + -2;
      if (iVar3 <= iVar1 + -2) {
        iVar2 = iVar3;
      }
    }
    *param_2 = iVar2;
    return *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar2 * 8);
  }
  *param_2 = -1;
  return 0;
}



// FUNCTION 142aa9d60 FUN_142aa9d60 body=12 status=ok
// SIG undefined FUN_142aa9d60(void)

void FUN_142aa9d60(longlong param_1)

{
  FMediaPlayerFacade::GetRate(*(undefined8 *)(param_1 + 0x120));
  return;
}



// FUNCTION 142aa9d70 GetResourceSizeEx body=43 status=ok
// SIG undefined GetResourceSizeEx(void)

void UMediaTexture::GetResourceSizeEx(longlong param_1,longlong param_2)

{
  FUN_141758340();
  *(longlong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x28) + *(longlong *)(param_1 + 0x140);
  return;
}



// FUNCTION 142aa9da0 FUN_142aa9da0 body=15 status=ok
// SIG undefined FUN_142aa9da0(void)

void FUN_142aa9da0(longlong param_1,undefined1 param_2)

{
  FMediaPlayerFacade::GetSelectedTrack(*(undefined8 *)(param_1 + 0x120),param_2);
  return;
}



// FUNCTION 142aa9df0 FUN_142aa9df0 body=170 status=ok
// SIG undefined FUN_142aa9df0(void)

void FUN_142aa9df0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  longlong local_18;
  ulonglong local_10;
  
  FMediaPlayerFacade::GetSupportedRates(*(undefined8 *)(param_1 + 0x120),&local_18);
  lVar1 = local_18;
  if (param_2 != &local_18) {
    iVar4 = (int)local_10;
    *(int *)(param_2 + 1) = iVar4;
    if ((iVar4 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(param_2,local_10 & 0xffffffff);
      if (iVar4 != 0) {
        puVar2 = (undefined4 *)(lVar1 + 4);
        puVar3 = (undefined1 *)*param_2;
        do {
          *puVar3 = *(undefined1 *)(puVar2 + -1);
          *(undefined4 *)(puVar3 + 4) = *puVar2;
          puVar3[8] = *(undefined1 *)(puVar2 + 1);
          *(undefined4 *)(puVar3 + 0xc) = puVar2[2];
          uVar5 = (int)local_10 - 1;
          local_10 = (ulonglong)uVar5;
          puVar2 = puVar2 + 4;
          puVar3 = puVar3 + 0x10;
        } while (uVar5 != 0);
      }
    }
  }
  if (local_18 != 0) {
    FMemory::Free(local_18);
  }
  return;
}



// FUNCTION 142aa9ec0 RHICreateSamplerState body=30 status=ok
// SIG undefined RHICreateSamplerState(void)

undefined8 FD3D12DynamicRHI::RHICreateSamplerState(longlong param_1,undefined8 param_2)

{
  FMediaPlayerFacade::GetTime(*(undefined8 *)(param_1 + 0x120));
  return param_2;
}



// FUNCTION 142aa9ee0 FUN_142aa9ee0 body=18 status=ok
// SIG undefined FUN_142aa9ee0(void)

undefined8 * FUN_142aa9ee0(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(*(longlong *)(param_1 + 0x120) + 0x20);
  return param_2;
}



// FUNCTION 142aa9f00 FUN_142aa9f00 body=34 status=ok
// SIG undefined FUN_142aa9f00(void)

undefined8 FUN_142aa9f00(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  FMediaPlayerFacade::GetTrackDisplayName(*(undefined8 *)(param_1 + 0x120),param_2,param_3);
  return param_2;
}



// FUNCTION 142aa9f30 FUN_142aa9f30 body=15 status=ok
// SIG undefined FUN_142aa9f30(void)

void FUN_142aa9f30(longlong param_1,undefined1 param_2)

{
  FMediaPlayerFacade::GetTrackFormat(*(undefined8 *)(param_1 + 0x120),param_2);
  return;
}



// FUNCTION 142aa9f40 FUN_142aa9f40 body=34 status=ok
// SIG undefined FUN_142aa9f40(void)

undefined8 FUN_142aa9f40(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  FMediaPlayerFacade::GetTrackLanguage(*(undefined8 *)(param_1 + 0x120),param_2,param_3);
  return param_2;
}



// FUNCTION 142aa9f70 FUN_142aa9f70 body=535 status=ok
// SIG undefined FUN_142aa9f70(void)

longlong * FUN_142aa9f70(undefined8 param_1,longlong *param_2)

{
  void *_Dst;
  void *pvVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong local_58;
  undefined8 local_50;
  void *local_48;
  ulonglong local_40;
  longlong local_38;
  undefined8 local_30;
  
  FUN_142aa9710(param_1,&local_48);
  cVar2 = FUN_1415c92e0(&local_48,&local_48);
  if (cVar2 != '\0') {
    local_58 = 0;
    local_50 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    FGenericPlatformString::Memcpy(local_58,L"\\\\?\\",10);
    FString::RemoveFromStart(&local_48,&local_58,1);
    if (local_58 != 0) {
      FMemory::Free();
    }
  }
  local_38 = 0;
  local_30 = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  lVar7 = local_38;
  FGenericPlatformString::Memcpy(local_38,L"file://",0x10);
  pvVar1 = local_48;
  iVar6 = (int)local_40;
  if ((int)local_30 < 2) {
    *param_2 = 0;
    *(int *)(param_2 + 1) = iVar6;
    if (iVar6 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,local_40 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop((void *)*param_2,pvVar1,(longlong)iVar6 * 2);
    }
    if (lVar7 != 0) {
      FMemory::Free(lVar7);
    }
  }
  else {
    iVar3 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar3 = 0;
    }
    if (((int)local_30 != 0) || (iVar6 = 1, iVar3 == 0)) {
      iVar6 = 0;
    }
    local_58 = lVar7;
    local_50 = local_30;
    iVar5 = (int)local_30;
    iVar4 = local_30._4_4_;
    if (local_30._4_4_ < iVar6 + (int)local_30 + iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58);
      iVar5 = (int)local_50;
      iVar4 = local_50._4_4_;
    }
    pvVar1 = local_48;
    lVar7 = local_58;
    iVar6 = iVar5;
    if (iVar3 != 0) {
      iVar6 = iVar5 + (uint)(iVar5 == 0) + iVar3;
      local_50 = CONCAT44(local_50._4_4_,iVar6);
      if (iVar4 < iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar5);
        iVar6 = (int)local_50;
        iVar4 = local_50._4_4_;
      }
      lVar7 = local_58;
      _Dst = (void *)(local_58 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(_Dst,pvVar1,(longlong)iVar3 * 2);
      *(undefined2 *)((longlong)iVar3 * 2 + (longlong)_Dst) = 0;
    }
    *param_2 = lVar7;
    *(int *)(param_2 + 1) = iVar6;
    *(int *)((longlong)param_2 + 0xc) = iVar4;
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142aaa190 FUN_142aaa190 body=14 status=ok
// SIG undefined FUN_142aaa190(void)

longlong FUN_142aaa190(longlong param_1)

{
  return *(longlong *)(param_1 + 0x120) + 0xb0;
}



// FUNCTION 142aaa1a0 FUN_142aaa1a0 body=213 status=ok
// SIG undefined FUN_142aaa1a0(void)

longlong * FUN_142aaa1a0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong local_28 [4];
  
  if (DAT_146b2a790 != '\0') {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  DAT_146b2a790 = 1;
  plVar1 = *(longlong **)(param_1 + 0x30);
  bVar2 = plVar1 == (longlong *)0x0;
  if (bVar2) {
    local_28[0] = 0;
    plVar1 = local_28;
    local_28[1] = 0;
  }
  else {
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x278))(plVar1,local_28 + 2);
  }
  *param_2 = 0;
  *param_2 = *plVar1;
  *plVar1 = 0;
  *(int *)(param_2 + 1) = (int)plVar1[1];
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
  plVar1[1] = 0;
  if (bVar2) {
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  if ((!bVar2) && (local_28[2] != 0)) {
    FMemory::Free();
  }
  DAT_146b2a790 = 0;
  return param_2;
}



// FUNCTION 142aaa280 FUN_142aaa280 body=65 status=ok
// SIG undefined FUN_142aaa280(void)

undefined4 FUN_142aaa280(longlong param_1)

{
  char cVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [6];
  
  local_res10[0] = 0;
  local_res8[0] = 0;
  cVar1 = FMediaPlayerFacade::GetViewField(*(undefined8 *)(param_1 + 0x120),local_res10,local_res8);
  if (cVar1 == '\0') {
    return 0;
  }
  return local_res8[0];
}



// FUNCTION 142aaa2d0 FUN_142aaa2d0 body=12 status=ok
// SIG undefined FUN_142aaa2d0(void)

void FUN_142aaa2d0(longlong param_1)

{
  FMediaPlayerFacade::GetVideoTrackAspectRatio(*(undefined8 *)(param_1 + 0x120));
  return;
}



// FUNCTION 142aaa2e0 RHICreateSamplerState body=30 status=ok
// SIG undefined RHICreateSamplerState(void)

undefined8 FD3D12DynamicRHI::RHICreateSamplerState(longlong param_1,undefined8 param_2)

{
  FMediaPlayerFacade::GetVideoTrackDimensions(*(undefined8 *)(param_1 + 0x120));
  return param_2;
}



// FUNCTION 142aaa300 FUN_142aaa300 body=12 status=ok
// SIG undefined FUN_142aaa300(void)

void FUN_142aaa300(longlong param_1)

{
  FMediaPlayerFacade::GetVideoTrackFrameRate(*(undefined8 *)(param_1 + 0x120));
  return;
}



// FUNCTION 142aaa310 FUN_142aaa310 body=59 status=ok
// SIG undefined FUN_142aaa310(void)

undefined1 * FUN_142aaa310(longlong param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 local_18 [16];
  
  puVar1 = (undefined1 *)
           FMediaPlayerFacade::GetVideoTrackFrameRates(*(undefined8 *)(param_1 + 0x120),local_18);
  *param_2 = *puVar1;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(puVar1 + 4);
  param_2[8] = puVar1[8];
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(puVar1 + 0xc);
  return param_2;
}



// FUNCTION 142aaa350 RHICreateSamplerState body=30 status=ok
// SIG undefined RHICreateSamplerState(void)

undefined8 FD3D12DynamicRHI::RHICreateSamplerState(longlong param_1,undefined8 param_2)

{
  FMediaPlayerFacade::GetVideoTrackType(*(undefined8 *)(param_1 + 0x120));
  return param_2;
}



// FUNCTION 142aaa370 FUN_142aaa370 body=82 status=ok
// SIG undefined FUN_142aaa370(void)

undefined8 * FUN_142aaa370(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 local_18 [16];
  
  cVar1 = FMediaPlayerFacade::GetViewOrientation(*(undefined8 *)(param_1 + 0x120),local_18);
  if (cVar1 == '\0') {
    *param_2 = DAT_1468b5da0;
    *(undefined4 *)(param_2 + 1) = DAT_1468b5da8;
    return param_2;
  }
  FQuat::Rotator(local_18,param_2);
  return param_2;
}



// FUNCTION 142aaa3d0 GetChildrenCount body=7 status=ok
// SIG undefined GetChildrenCount(void)

undefined4 UPanelWidget::GetChildrenCount(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x110);
}



// FUNCTION 142aaa430 FUN_142aaa430 body=974 status=ok
// SIG undefined FUN_142aaa430(void)

void FUN_142aaa430(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  void *pvVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  void **ppvVar11;
  int iVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  void *local_88;
  ulonglong local_80;
  void *local_78;
  ulonglong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 1;
  iVar12 = *(int *)(param_1 + 0x11c);
  bVar6 = false;
  iVar8 = *(int *)(param_1 + 0x110) + -1;
  lVar15 = (longlong)iVar8;
  if (-1 < iVar8) {
    lVar14 = lVar15 << 4;
    bVar6 = false;
    do {
      lVar3 = *(longlong *)(param_1 + 0x108);
      if (((*(int *)(lVar14 + 8 + lVar3) == 0) ||
          (plVar4 = *(longlong **)(lVar14 + lVar3), plVar4 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar4 + 0x40))(plVar4,param_2), cVar7 == '\0')) {
        bVar6 = true;
      }
      lVar14 = lVar14 + -0x10;
      lVar15 = lVar15 + -1;
    } while (-1 < lVar15);
    iVar12 = *(int *)(param_1 + 0x11c);
  }
  *(int *)(param_1 + 0x11c) = iVar12 + -1;
  if (bVar6) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x108),0);
  }
  switch(param_2) {
  case 1:
    param_1 = param_1 + 0x38;
    break;
  default:
    goto switchD_142aaa4f7_caseD_2;
  case 3:
    FUN_142a5d470(*(undefined8 *)(param_1 + 0x120),*(undefined8 *)(param_1 + 0xa8),
                  *(undefined8 *)(param_1 + 0xb8));
    if (((*(byte *)(param_1 + 0xc4) & 2) == 0) ||
       (*(int *)(*(longlong *)(param_1 + 200) + 0x30) != 1)) {
      uVar13 = 0;
    }
    else {
      uVar13 = 1;
    }
    FMediaPlayerFacade::SetLooping(*(undefined8 *)(param_1 + 0x120),uVar13);
    FMediaPlayerFacade::SetViewField
              (*(undefined8 *)(param_1 + 0x120),*(undefined4 *)(param_1 + 0xe0),
               *(undefined4 *)(param_1 + 0xe4),1);
    puVar9 = (undefined4 *)FRotator::Quaternion(param_1 + 0xe8,local_48);
    local_68 = *puVar9;
    uStack_64 = puVar9[1];
    uStack_60 = puVar9[2];
    uStack_5c = puVar9[3];
    FMediaPlayerFacade::SetViewOrientation(*(undefined8 *)(param_1 + 0x120),&local_68,1);
    *(undefined8 *)(*(longlong *)(param_1 + 0x120) + 0x20) = *(undefined8 *)(param_1 + 0xd8);
    if ((*(longlong *)(param_1 + 0xf8) != 0) && (*(longlong *)(param_1 + 0x100) != 0)) {
      uVar13 = *(undefined8 *)(param_1 + 0x120);
      uVar10 = (**(code **)(**(longlong **)(param_1 + 0x100) + 0x10))
                         (*(longlong **)(param_1 + 0x100),local_58);
      FMediaPlayerFacade::AddAudioSampleSink(uVar13,uVar10);
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_50 + 1;
        lVar15 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
    }
    ppvVar11 = (void **)FString::FString(local_38,*(longlong *)(param_1 + 0x120) + 0xb0);
    local_88 = (void *)0x0;
    local_80 = 0;
    if (&local_88 != ppvVar11) {
      uVar2 = *(uint *)(ppvVar11 + 1);
      pvVar5 = *ppvVar11;
      local_80 = (ulonglong)uVar2;
      if (uVar2 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_88,uVar2,0);
        _guard_xfg_dispatch_icall_nop(local_88,pvVar5,(longlong)(int)uVar2 * 2);
      }
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x48,&local_88);
    if (local_88 != (void *)0x0) {
      FMemory::Free();
    }
    if (*ppvVar11 != (void *)0x0) {
      FMemory::Free();
    }
    if ((*(char *)(param_1 + 0xc1) == '\0') && (*(char *)(param_1 + 0x140) == '\0')) {
      return;
    }
    *(undefined1 *)(param_1 + 0x140) = 0;
    FMediaPlayerFacade::SetRate(*(undefined8 *)(param_1 + 0x120),0x3f800000);
    return;
  case 4:
    ppvVar11 = (void **)FString::FString(local_28,*(longlong *)(param_1 + 0x120) + 0xb0);
    local_78 = (void *)0x0;
    local_70 = 0;
    if (&local_78 != ppvVar11) {
      uVar2 = *(uint *)(ppvVar11 + 1);
      pvVar5 = *ppvVar11;
      local_70 = (ulonglong)uVar2;
      if (uVar2 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,uVar2,0);
        _guard_xfg_dispatch_icall_nop(local_78,pvVar5,(longlong)(int)uVar2 * 2);
      }
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x58,&local_78);
    if (local_78 != (void *)0x0) {
      FMemory::Free();
    }
    if (*ppvVar11 != (void *)0x0) {
      FMemory::Free();
    }
    if ((((*(byte *)(param_1 + 0xc4) & 2) == 0) ||
        (*(int *)(*(longlong *)(param_1 + 200) + 0x30) == 1)) &&
       (*(int *)(*(longlong *)(param_1 + 200) + 0x30) <= *(int *)(param_1 + 0xd0) + 1)) {
      return;
    }
    FUN_142aaac80(param_1);
    return;
  case 5:
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x28,0);
    if ((((*(byte *)(param_1 + 0xc4) & 2) == 0) ||
        (*(int *)(*(longlong *)(param_1 + 200) + 0x30) == 1)) &&
       (*(int *)(*(longlong *)(param_1 + 200) + 0x30) <= *(int *)(param_1 + 0xd0) + 1)) {
      return;
    }
    *(undefined1 *)(param_1 + 0x140) = 1;
    FUN_142aaac80(param_1);
    return;
  case 6:
    param_1 = param_1 + 0x68;
    break;
  case 7:
    param_1 = param_1 + 0x78;
    break;
  case 8:
    param_1 = param_1 + 0x88;
    break;
  case 9:
    param_1 = param_1 + 0x98;
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1,0);
switchD_142aaa4f7_caseD_2:
  return;
}



// FUNCTION 142aaa830 FUN_142aaa830 body=12 status=ok
// SIG undefined FUN_142aaa830(void)

void FUN_142aaa830(longlong param_1)

{
  FMediaPlayerFacade::HasError(*(undefined8 *)(param_1 + 0x120));
  return;
}



// FUNCTION 142aaa850 HasMediaOption body=72 status=ok
// SIG undefined HasMediaOption(void)

longlong UPlatformMediaSource::HasMediaOption(longlong param_1)

{
  undefined8 in_RAX;
  uint7 uVar2;
  longlong lVar1;
  
  uVar2 = (uint7)((ulonglong)in_RAX >> 8);
  if (DAT_146b2a797 != '\0') {
    return (ulonglong)uVar2 << 8;
  }
  DAT_146b2a797 = 1;
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    lVar1 = (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x30))(lVar1 + 0x28);
    DAT_146b2a797 = 0;
    return lVar1;
  }
  DAT_146b2a797 = 0;
  return (ulonglong)uVar2 << 8;
}



// FUNCTION 142aaa8b0 FUN_142aaa8b0 body=63 status=ok
// SIG undefined FUN_142aaa8b0(void)

undefined8 FUN_142aaa8b0(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = (*(int *)(param_1 + 0x650) != 0) + 1;
  *(int *)(param_1 + 0x610) = iVar1;
  *(int *)(param_1 + 0x614) = iVar1 * 0x2004;
  FMediaAudioResampler::Initialize
            (*(undefined8 *)(param_1 + 0x6d0),*(undefined4 *)(param_1 + 0x610),*param_2);
  return 1;
}



// FUNCTION 142aaa8f0 FUN_142aaa8f0 body=540 status=ok
// SIG undefined FUN_142aaa8f0(void)

void FUN_142aaa8f0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  char cVar9;
  longlong lVar10;
  bool bVar11;
  longlong local_res10;
  longlong local_res18 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  char local_47;
  char local_46;
  undefined1 local_45;
  undefined8 local_44;
  undefined4 local_3c;
  undefined8 local_38;
  undefined1 local_30;
  
  lVar4 = *(longlong *)(param_1 + 0xa0);
  lVar10 = 0;
  cVar9 = '\0';
  cVar6 = cVar9;
  if (*(char *)(lVar4 + 0xb9) != '\0') {
    cVar6 = (*(char *)(lVar4 + 0xb9) != '\x01') + '\x01';
  }
  if (*(char *)(lVar4 + 0xb8) != '\0') {
    cVar9 = (*(char *)(lVar4 + 0xb8) != '\x01') + '\x01';
  }
  uVar8 = FUN_14240d6a0(0);
  uVar8 = AAIController::GetPerceptionComponent(uVar8);
  uVar8 = FArchive::operator<<(uVar8);
  local_48 = UTextureLODSettings::GetSamplerFilter(uVar8,lVar4);
  local_3c = 0x7f7fffff;
  local_45 = 0;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  local_47 = cVar9;
  local_46 = cVar6;
  (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,&local_res10,&local_48);
  plVar1 = (longlong *)(param_1 + 0x38);
  if (plVar1 != &local_res10) {
    puVar5 = (undefined8 *)*plVar1;
    *plVar1 = local_res10;
    local_res10 = 0;
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar5 + 1);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        if ((*(char *)(puVar5 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0')
            ))) {
          LOCK();
          bVar11 = *(int *)((longlong)puVar5 + 0xc) == 0;
          if (bVar11) {
            *(int *)((longlong)puVar5 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar11) {
            uVar7 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar7 != 0) {
              lVar10 = (&DAT_1468a81f8)[uVar7 >> 0xe] + (ulonglong)(uVar7 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar10 + 8) = puVar5;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*puVar5)(puVar5,1);
        }
      }
    }
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  FUN_142aa6e40(param_1 + -0x10,param_1 + 0x6c,*(byte *)(*(longlong *)(param_1 + 0xa0) + 0x4b) & 1);
  if (DAT_146ab62eb == '\0') {
    local_res18[0] = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x98);
    if (local_res18[0] != 0) {
      LOCK();
      *(int *)(local_res18[0] + 8) = *(int *)(local_res18[0] + 8) + 1;
      UNLOCK();
    }
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0x3f800000;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0x3f800000;
    uVar8 = FExternalTextureRegistry::Get();
    FExternalTextureRegistry::RegisterExternalTexture
              (uVar8,param_1 + 0x7c,local_res18,plVar1,&local_58,&local_68);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_res18);
  }
  return;
}



// FUNCTION 142aaab10 InitializeModule body=95 status=ok
// SIG undefined InitializeModule(void)

undefined8 * FStaticallyLinkedModuleRegistrant<FMediaAssetsModule>::InitializeModule(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    FSelfRegisteringExec::FSelfRegisteringExec(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__1454dfbe0;
    puVar1[1] = &PTR_LAB_1454dfbf0;
    puVar2 = puVar1;
  }
  puVar1 = puVar2 + 1;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return puVar1;
}



// FUNCTION 142aaab70 Insert body=145 status=ok
// SIG undefined Insert(void)

void UMediaPlaylist::Insert(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  void *_Src;
  int iVar3;
  
  if (param_3 < 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x30);
    if (param_3 < *(int *)(param_1 + 0x30)) {
      iVar3 = param_3;
    }
  }
  iVar2 = *(int *)(param_1 + 0x30);
  plVar1 = (longlong *)(param_1 + 0x28);
  *(int *)(param_1 + 0x30) = iVar2 + 1;
  if (*(int *)(param_1 + 0x34) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  _Src = (void *)(*plVar1 + (longlong)iVar3 * 8);
  ::_guard_xfg_dispatch_icall_nop((void *)((longlong)_Src + 8),_Src,(longlong)(iVar2 - iVar3) << 3);
  *(undefined8 *)((longlong)iVar3 * 8 + *plVar1) = param_2;
  return;
}



// FUNCTION 142aaac10 FUN_142aaac10 body=12 status=ok
// SIG undefined FUN_142aaac10(void)

void FUN_142aaac10(longlong param_1)

{
  FMediaPlayerFacade::IsBuffering(*(undefined8 *)(param_1 + 0x120));
  return;
}



// FUNCTION 142aaac20 FUN_142aaac20 body=12 status=ok
// SIG undefined FUN_142aaac20(void)

void FUN_142aaac20(longlong param_1)

{
  FMediaPlayerFacade::IsConnecting(*(undefined8 *)(param_1 + 0x120));
  return;
}



// FUNCTION 142aaac30 FUN_142aaac30 body=12 status=ok
// SIG undefined FUN_142aaac30(void)

void FUN_142aaac30(longlong param_1)

{
  FMediaPlayerFacade::IsLooping(*(undefined8 *)(param_1 + 0x120));
  return;
}



// FUNCTION 142aaac40 FUN_142aaac40 body=12 status=ok
// SIG undefined FUN_142aaac40(void)

void FUN_142aaac40(longlong param_1)

{
  FMediaPlayerFacade::IsPaused(*(undefined8 *)(param_1 + 0x120));
  return;
}



// FUNCTION 142aaac50 FUN_142aaac50 body=12 status=ok
// SIG undefined FUN_142aaac50(void)

void FUN_142aaac50(longlong param_1)

{
  FMediaPlayerFacade::IsPlaying(*(undefined8 *)(param_1 + 0x120));
  return;
}



// FUNCTION 142aaac60 FUN_142aaac60 body=12 status=ok
// SIG undefined FUN_142aaac60(void)

void FUN_142aaac60(longlong param_1)

{
  FMediaPlayerFacade::IsPreparing(*(undefined8 *)(param_1 + 0x120));
  return;
}



// FUNCTION 142aaac70 FUN_142aaac70 body=12 status=ok
// SIG undefined FUN_142aaac70(void)

void FUN_142aaac70(longlong param_1)

{
  FMediaPlayerFacade::IsReady(*(undefined8 *)(param_1 + 0x120));
  return;
}



// FUNCTION 142aaac80 FUN_142aaac80 body=338 status=ok
// SIG undefined FUN_142aaac80(void)

undefined8 FUN_142aaac80(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  bool bVar10;
  int iVar11;
  longlong local_38 [2];
  
  bVar10 = false;
  iVar11 = *(int *)(*(longlong *)(param_1 + 200) + 0x30);
  if (iVar11 == 0) {
LAB_142aaadb5:
    uVar8 = 0;
  }
  else {
    bVar3 = FMediaPlayerFacade::IsPlaying(*(undefined8 *)(param_1 + 0x120));
    *(byte *)(param_1 + 0x140) = *(byte *)(param_1 + 0x140) | bVar3;
    do {
      if (iVar11 < 1) goto LAB_142aaadb5;
      lVar1 = *(longlong *)(param_1 + 200);
      iVar11 = iVar11 + -1;
      if ((*(byte *)(param_1 + 0xc4) & 1) == 0) {
        if (*(int *)(lVar1 + 0x30) < 1) {
          *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
          plVar6 = (longlong *)0x0;
        }
        else {
          iVar9 = *(int *)(param_1 + 0xd0);
          iVar5 = *(int *)(lVar1 + 0x30) + -1;
          if (iVar9 < -1) {
            iVar5 = -1;
          }
          else if (iVar9 < iVar5) {
            iVar5 = iVar9;
          }
          *(int *)(param_1 + 0xd0) = iVar5 + 1;
          iVar9 = (iVar5 + 1) % *(int *)(lVar1 + 0x30);
          *(int *)(param_1 + 0xd0) = iVar9;
          plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x28) + (longlong)iVar9 * 8);
        }
      }
      else {
        plVar6 = (longlong *)UMediaPlaylist::GetRandom(lVar1,param_1 + 0xd0);
      }
      if ((plVar6 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar6 + 0x280))(plVar6), cVar4 == '\0')) {
LAB_142aaad8e:
        bVar2 = false;
      }
      else {
        uVar8 = *(undefined8 *)(param_1 + 0x120);
        bVar10 = true;
        uVar7 = (**(code **)(*plVar6 + 0x278))(plVar6,local_38);
        cVar4 = FUN_142a5c140(uVar8,uVar7,plVar6 + 5);
        if (cVar4 == '\0') goto LAB_142aaad8e;
        bVar2 = true;
      }
      if ((bVar10) && (bVar10 = false, local_38[0] != 0)) {
        FMemory::Free();
      }
    } while (!bVar2);
    uVar8 = 1;
  }
  return uVar8;
}



// FUNCTION 142aaade0 FUN_142aaade0 body=899 status=ok
// SIG undefined FUN_142aaade0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_142aaade0(longlong param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  char *pcVar2;
  float fVar3;
  char cVar4;
  longlong *plVar5;
  BOOL BVar6;
  float fVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  char *pcVar11;
  undefined1 *puVar12;
  int iVar13;
  longlong *plVar14;
  undefined1 auStack_f8 [32];
  float local_d8;
  longlong local_d0;
  longlong local_c8;
  float local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong *plStack_a0;
  char local_98 [4];
  float local_94;
  undefined1 local_90 [4];
  float local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_a8 = 0;
  plStack_a0 = (longlong *)0x0;
  BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x688));
  if (BVar6 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x688));
  }
  lVar9 = *(longlong *)(param_1 + 0x6d8);
  plVar5 = *(longlong **)(param_1 + 0x6e0);
  lVar10 = 0;
  plVar14 = (longlong *)0x0;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    lVar10 = local_a8;
    plVar14 = plStack_a0;
  }
  local_88._0_4_ = (undefined4)lVar9;
  local_88._4_4_ = (undefined4)((ulonglong)lVar9 >> 0x20);
  uStack_80._0_4_ = SUB84(plVar5,0);
  uStack_80._4_4_ = (undefined4)((ulonglong)plVar5 >> 0x20);
  local_70 = (undefined4)local_88;
  uStack_6c = local_88._4_4_;
  uStack_68 = (undefined4)uStack_80;
  uStack_64 = uStack_80._4_4_;
  local_a8 = lVar9;
  plStack_a0 = plVar5;
  local_88 = lVar10;
  uStack_80 = plVar14;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar14 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*uStack_80 + 8))(uStack_80,1);
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x688));
  if (local_a8 != 0) {
    LOCK();
    local_b8 = *(float *)(param_1 + 0x678);
    if (local_b8 == 0.0) {
      *(float *)(param_1 + 0x678) = 0.0;
      local_b8 = 0.0;
    }
    UNLOCK();
    if (local_b8 != 0.0) {
      LOCK();
      fVar7 = *(float *)(param_1 + 0x678);
      if (fVar7 == 0.0) {
        *(float *)(param_1 + 0x678) = 0.0;
        fVar7 = 0.0;
      }
      UNLOCK();
      LOCK();
      lVar9 = *(longlong *)(param_1 + 0x680);
      if (lVar9 == 0) {
        *(longlong *)(param_1 + 0x680) = 0;
        lVar9 = 0;
      }
      UNLOCK();
      local_c8 = local_a8 + 8;
      local_b0 = 0;
      local_d8 = fVar7 * *(float *)(param_1 + 0x6c8);
      local_d0 = lVar9;
      local_b8 = fVar7;
      local_78 = local_c8;
      iVar8 = FUN_142a5a8a0(*(undefined8 *)(param_1 + 0x6d0),param_2,&local_b0,
                            (longlong)param_3 / (longlong)*(int *)(param_1 + 0x610) & 0xffffffff);
      iVar13 = 0;
      if (iVar8 != 0) {
        pcVar2 = (char *)(param_1 + 0x65c);
        do {
          if (*(char *)(param_1 + 0x654) != '\0') {
            LOCK();
            lVar10 = *(longlong *)(param_1 + 0x680);
            if (lVar10 == 0) {
              *(longlong *)(param_1 + 0x680) = 0;
              lVar10 = 0;
            }
            UNLOCK();
            *(float *)(param_1 + 0x6c8) =
                 (float)(lVar10 - local_b0) * *(float *)(param_1 + 0x658) + 1.0;
          }
          cVar4 = *pcVar2;
          if ((cVar4 != '\x02') && (*(char *)(param_1 + 0x664) != '\x02')) {
            iVar13 = param_3;
            if ((*(float *)(param_1 + 0x668) < *(float *)(param_1 + 0x660)) ||
               ((*(float *)(param_1 + 0x660) == *(float *)(param_1 + 0x668) &&
                ((cVar4 == '\0' || (*(char *)(param_1 + 0x664) == '\0')))))) break;
          }
          local_94 = *(float *)(param_1 + 0x6c8);
          local_98[0] = '\x01';
          if (cVar4 == '\x02') {
LAB_142aab03e:
            cVar4 = *(char *)(param_1 + 0x664);
            puVar12 = (undefined1 *)(param_1 + 0x664);
            local_8c = local_94;
            local_90[0] = 1;
            iVar13 = param_3;
            if (cVar4 == '\x02') break;
            if ((*(float *)(param_1 + 0x668) <= local_94) &&
               ((*(float *)(param_1 + 0x668) < local_94 || (cVar4 != '\x01')))) {
              if (cVar4 != '\x01') goto LAB_142aab07c;
              puVar12 = local_90;
            }
            if (*(float *)(param_1 + 0x668) == *(float *)(puVar12 + 4)) break;
          }
          else {
            fVar3 = *(float *)(param_1 + 0x660);
            pcVar11 = pcVar2;
            if (local_94 <= fVar3) {
              if (local_94 < fVar3) {
                if (cVar4 == '\x01') {
                  pcVar11 = local_98;
                  goto LAB_142aab038;
                }
              }
              else if (cVar4 == '\x01') goto LAB_142aab038;
            }
            else {
LAB_142aab038:
              if (fVar3 == *(float *)(pcVar11 + 4)) goto LAB_142aab03e;
            }
          }
LAB_142aab07c:
          *(undefined4 *)(param_1 + 0x6c8) = 0x3f800000;
          local_c8 = local_78;
          local_d8 = fVar7;
          local_d0 = lVar9;
          iVar8 = FUN_142a5a8a0(*(undefined8 *)(param_1 + 0x6d0),param_2,&local_b0,
                                (longlong)param_3 / (longlong)*(int *)(param_1 + 0x610) & 0xffffffff
                               );
          iVar13 = 0;
        } while (iVar8 != 0);
      }
      goto LAB_142aab0d3;
    }
  }
  FMediaAudioResampler::Flush(*(undefined8 *)(param_1 + 0x6d0));
  iVar13 = param_3;
LAB_142aab0d3:
  plVar5 = plStack_a0;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar14 = plStack_a0 + 1;
    lVar9 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_a0 + 8))(plStack_a0,1);
      }
    }
  }
  return iVar13;
}



// FUNCTION 142aab180 FUN_142aab180 body=371 status=ok
// SIG undefined FUN_142aab180(void)

ulonglong FUN_142aab180(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined2 *puVar9;
  longlong local_res10;
  undefined1 local_res18 [8];
  undefined2 *local_38;
  int local_30;
  
  uVar4 = FUN_142aa72a0();
  lVar2 = *(longlong *)(param_1 + 200);
  if (1 < *(int *)(param_2 + 8)) {
    FUN_141671940(&local_38,param_2,1);
    puVar9 = &DAT_143f3eda8;
    if (local_30 != 0) {
      puVar9 = local_38;
    }
    uVar5 = UAsyncTaskDownloadImage::GetPrivateStaticClass();
    puVar6 = (undefined8 *)FName::FName(local_res18,puVar9,1);
    uVar7 = GetTransientPackage();
    FUN_141791c20(&local_res10,uVar7,uVar5,*puVar6);
    uVar5 = GetTransientPackage();
    if (local_res10 == 0) {
      FUN_1417846f0(uVar5,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
    }
    uVar7 = UAsyncTaskDownloadImage::GetPrivateStaticClass();
    lVar8 = FUN_1417985e0(uVar7,uVar5,local_res10,0x48,0,0,0,0,0);
    uVar4 = FUN_142aac3c0(lVar8,param_2);
    if (lVar8 == 0) {
      bVar3 = false;
    }
    else {
      iVar1 = *(int *)(lVar2 + 0x30);
      *(int *)(lVar2 + 0x30) = iVar1 + 1;
      if (*(int *)(lVar2 + 0x34) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                  ((ulonglong *)(lVar2 + 0x28),iVar1);
      }
      uVar4 = *(ulonglong *)(lVar2 + 0x28);
      bVar3 = true;
      *(longlong *)(uVar4 + (longlong)iVar1 * 8) = lVar8;
    }
    if (local_38 != (undefined2 *)0x0) {
      uVar4 = FMemory::Free();
    }
    if (bVar3) {
      uVar4 = FUN_142aaac80(param_1);
      return uVar4;
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 142aab300 FUN_142aab300 body=187 status=ok
// SIG undefined FUN_142aab300(void)

undefined1 FUN_142aab300(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  longlong local_18 [2];
  
  FUN_142aa72a0();
  if (param_2 != 0) {
    *(longlong *)(param_1 + 200) = param_2;
    if (param_3 == -1) {
      return 1;
    }
    if ((-1 < param_3) && (param_3 < *(int *)(param_2 + 0x30))) {
      plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x28) + (longlong)param_3 * 8);
      if (plVar1 != (longlong *)0x0) {
        *(int *)(param_1 + 0xd0) = param_3;
        cVar3 = (**(code **)(*plVar1 + 0x280))(plVar1);
        if (cVar3 != '\0') {
          uVar2 = *(undefined8 *)(param_1 + 0x120);
          uVar5 = (**(code **)(*plVar1 + 0x278))(plVar1,local_18);
          uVar4 = FUN_142a5c140(uVar2,uVar5,plVar1 + 5);
          if (local_18[0] != 0) {
            FMemory::Free();
          }
          return uVar4;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142aab3c0 FUN_142aab3c0 body=88 status=ok
// SIG undefined FUN_142aab3c0(void)

ulonglong FUN_142aab3c0(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_142aa72a0();
  if (param_2 != (longlong *)0x0) {
    uVar1 = (**(code **)(*param_2 + 0x280))(param_2);
    if ((char)uVar1 != '\0') {
      UMediaPlaylist::Add(*(undefined8 *)(param_1 + 200),param_2);
      uVar1 = FUN_142aaac80(param_1);
      return uVar1;
    }
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 142aab420 FUN_142aab420 body=239 status=ok
// SIG undefined FUN_142aab420(void)

undefined1 FUN_142aab420(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  FUN_142aa72a0();
  uVar1 = *(undefined8 *)(param_1 + 200);
  if (1 < *(int *)(param_2 + 8)) {
    uVar5 = GetTransientPackage();
    FUN_1417846f0(uVar5,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar2 = UStreamMediaSource::GetPrivateStaticClass();
    plVar6 = (longlong *)FUN_1417985e0(uVar2,uVar5,0,0x48,0,0,0,0,0);
    FString::operator=(plVar6 + 7,param_2);
    cVar3 = (**(code **)(*plVar6 + 0x280))(plVar6);
    if ((cVar3 != '\0') && (cVar3 = UMediaPlaylist::Add(uVar1,plVar6), cVar3 != '\0')) {
      uVar4 = FUN_142aaac80(param_1);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 142aab510 FUN_142aab510 body=15 status=ok
// SIG undefined FUN_142aab510(void)

void FUN_142aab510(longlong param_1)

{
  FMediaPlayerFacade::SetRate(*(undefined8 *)(param_1 + 0x120),0);
  return;
}



// FUNCTION 142aab520 FUN_142aab520 body=20 status=ok
// SIG undefined FUN_142aab520(void)

void FUN_142aab520(longlong param_1)

{
  FMediaPlayerFacade::SetRate(*(undefined8 *)(param_1 + 0x120),0x3f800000);
  return;
}


