// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140606990 ResizeForCopy body=111 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<SWaapiPickerRow::KeyValueArgs,FDefaultAllocator>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  iVar1 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 << 5,0);
    iVar1 = (int)(uVar2 >> 5);
    if (iVar1 < param_2) {
      iVar1 = 0x7fffffff;
    }
  }
  if ((iVar1 != param_3) && ((*param_1 != 0 || (iVar1 != 0)))) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar1 << 5,0);
    *param_1 = lVar3;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar1;
  return;
}



// FUNCTION 140606a00 FUN_140606a00 body=70 status=ok
// SIG undefined FUN_140606a00(void)

void FUN_140606a00(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  lVar1 = *param_1;
  local_18 = param_2;
  local_14 = param_3;
  local_10 = param_4;
  uVar2 = FUN_14178ac60(param_1,DAT_1468557f8);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_18);
  return;
}



// FUNCTION 140606a50 FUN_140606a50 body=34 status=ok
// SIG undefined FUN_140606a50(void)

void FUN_140606a50(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140604cc0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_IsSpeakerActive_144007340,5);
  return;
}



// FUNCTION 140606a80 StaticRegisterNativesUUserObjectListEntry body=34 status=ok
// SIG undefined StaticRegisterNativesUUserObjectListEntry(void)

void UUserObjectListEntry::StaticRegisterNativesUUserObjectListEntry(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_InitDialogContext_144008418,1);
  return;
}



// FUNCTION 140606ab0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FNiagaraTypeLayoutInfo::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146855a10 == 0) {
    uVar1 = FUN_1406067d0();
    uVar2 = Z_Construct_UPackage__Script_Niagara();
    DAT_146855a10 = GetStaticStruct(FUN_140607580,uVar2,L"CurrentDialogPerformanceInfo",0x60,uVar1);
  }
  return;
}



// FUNCTION 140606b10 FUN_140606b10 body=82 status=ok
// SIG undefined FUN_140606b10(void)

void FUN_140606b10(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468559a0 == 0) {
    uVar1 = FUN_1406067e0();
    uVar2 = Z_Construct_UPackage__Script_Niagara();
    DAT_1468559a0 = GetStaticStruct(FUN_1406075b0,uVar2,L"DialogConditionRequirement",0x20,uVar1);
  }
  return;
}



// FUNCTION 140606b70 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FNiagaraSystemCompiledData::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468559e0 == 0) {
    uVar1 = FUN_1406067f0();
    uVar2 = Z_Construct_UPackage__Script_Niagara();
    DAT_1468559e0 = GetStaticStruct(FUN_1406075e0,uVar2,L"DialogContext",0x218,uVar1);
  }
  return;
}



// FUNCTION 140606bd0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FNiagaraPlatformSetConflictEntry::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146855a20 == 0) {
    uVar1 = FUN_140606800();
    uVar2 = Z_Construct_UPackage__Script_Niagara();
    DAT_146855a20 = GetStaticStruct(FUN_140607610,uVar2,L"DialogConversation",0xc,uVar1);
  }
  return;
}



// FUNCTION 140606c30 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FBasicParticleData::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146855950 == 0) {
    uVar1 = FUN_140606810();
    uVar2 = Z_Construct_UPackage__Script_Niagara();
    DAT_146855950 = GetStaticStruct(FUN_140607640,uVar2,L"DialogDecisionNode",0x1c,uVar1);
  }
  return;
}



// FUNCTION 140606c90 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAnalyticsPayload::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146855940 == 0) {
    uVar1 = FUN_140606820();
    uVar2 = Z_Construct_UPackage__Script_Niagara();
    DAT_146855940 = GetStaticStruct(FUN_140607670,uVar2,L"DialogDecisionTree",0x30,uVar1);
  }
  return;
}



// FUNCTION 140606cf0 FUN_140606cf0 body=82 status=ok
// SIG undefined FUN_140606cf0(void)

void FUN_140606cf0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146855980 == 0) {
    uVar1 = FUN_140606830();
    uVar2 = Z_Construct_UPackage__Script_Niagara();
    DAT_146855980 = GetStaticStruct(FUN_1406076a0,uVar2,L"DialogLookupDecision",0x28,uVar1);
  }
  return;
}



// FUNCTION 140606d50 FUN_140606d50 body=82 status=ok
// SIG undefined FUN_140606d50(void)

void FUN_140606d50(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146855970 == 0) {
    uVar1 = FUN_140606850();
    uVar2 = Z_Construct_UPackage__Script_Niagara();
    DAT_146855970 = GetStaticStruct(FUN_1406076d0,uVar2,L"DialogLookupResult",0x10,uVar1);
  }
  return;
}



// FUNCTION 140606db0 FUN_140606db0 body=82 status=ok
// SIG undefined FUN_140606db0(void)

void FUN_140606db0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146855960 == 0) {
    uVar1 = FUN_140606840();
    uVar2 = Z_Construct_UPackage__Script_Niagara();
    DAT_146855960 = GetStaticStruct(FUN_140607700,uVar2,L"DialogLookupResultBucket",0x10,uVar1);
  }
  return;
}



// FUNCTION 140606e10 FUN_140606e10 body=82 status=ok
// SIG undefined FUN_140606e10(void)

void FUN_140606e10(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468559d0 == 0) {
    uVar1 = FUN_140606860();
    uVar2 = Z_Construct_UPackage__Script_Niagara();
    DAT_1468559d0 = GetStaticStruct(FUN_140607730,uVar2,L"DialogParameterMapping",0x28,uVar1);
  }
  return;
}



// FUNCTION 140606e70 FUN_140606e70 body=82 status=ok
// SIG undefined FUN_140606e70(void)

void FUN_140606e70(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146855a00 == 0) {
    uVar1 = FUN_140606870();
    uVar2 = Z_Construct_UPackage__Script_Niagara();
    DAT_146855a00 = GetStaticStruct(FUN_140607760,uVar2,L"DialogParameterType",0x10,uVar1);
  }
  return;
}



// FUNCTION 140606ed0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FChatMessageData::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468559f0 == 0) {
    uVar1 = FUN_140606880();
    uVar2 = Z_Construct_UPackage__Script_Niagara();
    DAT_1468559f0 = GetStaticStruct(FUN_140607790,uVar2,L"DialogParameterValue",0x38,uVar1);
  }
  return;
}



// FUNCTION 140606f30 FUN_140606f30 body=82 status=ok
// SIG undefined FUN_140606f30(void)

void FUN_140606f30(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468559c0 == 0) {
    uVar1 = FUN_140606890();
    uVar2 = Z_Construct_UPackage__Script_Niagara();
    DAT_1468559c0 = GetStaticStruct(FUN_1406077c0,uVar2,L"DialogScopeParameterInfo",0x18,uVar1);
  }
  return;
}



// FUNCTION 140606f90 FUN_140606f90 body=82 status=ok
// SIG undefined FUN_140606f90(void)

void FUN_140606f90(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146855990 == 0) {
    uVar1 = FUN_1406068a0();
    uVar2 = Z_Construct_UPackage__Script_Niagara();
    DAT_146855990 = GetStaticStruct(FUN_1406077f0,uVar2,L"DialogSelectionCondition",0x10,uVar1);
  }
  return;
}



// FUNCTION 140606ff0 FUN_140606ff0 body=82 status=ok
// SIG undefined FUN_140606ff0(void)

void FUN_140606ff0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468559b0 == 0) {
    uVar1 = FUN_1406068b0();
    uVar2 = Z_Construct_UPackage__Script_Niagara();
    DAT_1468559b0 =
         GetStaticStruct(FUN_140607820,uVar2,L"DialogSelectorFunctionCallInstance",0x18,uVar1);
  }
  return;
}



// FUNCTION 140607050 FUN_140607050 body=82 status=ok
// SIG undefined FUN_140607050(void)

void FUN_140607050(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146855870 == 0) {
    uVar1 = FUN_1406068c0();
    uVar2 = Z_Construct_UPackage__Script_Niagara();
    DAT_146855870 = GetStaticStruct(FUN_140607850,uVar2,L"InitialDialogInProgress",0x18,uVar1);
  }
  return;
}



// FUNCTION 1406070b0 FUN_1406070b0 body=82 status=ok
// SIG undefined FUN_1406070b0(void)

void FUN_1406070b0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146855a48 == 0) {
    uVar1 = FUN_1406068e0();
    uVar2 = Z_Construct_UPackage__Script_Niagara();
    DAT_146855a48 =
         GetStaticStruct(FUN_140607880,uVar2,L"MovieSceneDialogSectionTemplate",0xa0,uVar1);
  }
  return;
}



// FUNCTION 140607110 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FNiagaraSystemCompileRequest::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146855a58 == 0) {
    uVar1 = FUN_1406068d0();
    uVar2 = Z_Construct_UPackage__Script_Niagara();
    DAT_146855a58 =
         GetStaticStruct(FUN_1406078b0,uVar2,L"MovieSceneDialogSectionTemplateData",0x80,uVar1);
  }
  return;
}



// FUNCTION 140607170 FUN_140607170 body=65 status=ok
// SIG undefined FUN_140607170(void)

void FUN_140607170(longlong *param_1,undefined4 param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res8;
  undefined1 local_resc;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  local_resc = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_146855800);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1406071c0 FUN_1406071c0 body=47 status=ok
// SIG undefined FUN_1406071c0(void)

longlong FUN_1406071c0(void)

{
  if (DAT_146855a98 == 0) {
    FUN_141786440(&DAT_146855a98,&PTR_FUN_144003f60);
  }
  return DAT_146855a98;
}



// FUNCTION 1406071f0 FUN_1406071f0 body=47 status=ok
// SIG undefined FUN_1406071f0(void)

longlong FUN_1406071f0(void)

{
  if (DAT_1468558b8 == 0) {
    FUN_141786440(&DAT_1468558b8,&PTR_thunk_FUN_1406066e0_144004810);
  }
  return DAT_1468558b8;
}



// FUNCTION 140607220 FUN_140607220 body=47 status=ok
// SIG undefined FUN_140607220(void)

longlong FUN_140607220(void)

{
  if (DAT_1468558c8 == 0) {
    FUN_141786440(&DAT_1468558c8,&PTR_FUN_144004a20);
  }
  return DAT_1468558c8;
}



// FUNCTION 140607250 FUN_140607250 body=47 status=ok
// SIG undefined FUN_140607250(void)

longlong FUN_140607250(void)

{
  if (DAT_146855a78 == 0) {
    FUN_141786440(&DAT_146855a78,&PTR_FUN_144003c50);
  }
  return DAT_146855a78;
}



// FUNCTION 140607280 FUN_140607280 body=47 status=ok
// SIG undefined FUN_140607280(void)

longlong FUN_140607280(void)

{
  if (DAT_146855a68 == 0) {
    FUN_141786440(&DAT_146855a68,&PTR_FUN_144003ad0);
  }
  return DAT_146855a68;
}



// FUNCTION 1406072b0 FUN_1406072b0 body=47 status=ok
// SIG undefined FUN_1406072b0(void)

longlong FUN_1406072b0(void)

{
  if (DAT_146855a88 == 0) {
    FUN_141786440(&DAT_146855a88,&PTR_FUN_144003e00);
  }
  return DAT_146855a88;
}



// FUNCTION 1406072e0 FUN_1406072e0 body=47 status=ok
// SIG undefined FUN_1406072e0(void)

longlong FUN_1406072e0(void)

{
  if (DAT_1468558e0 == 0) {
    FUN_141786a30(&DAT_1468558e0,&PTR_Z_Construct_UPackage__Script_Niagara_1462150e0);
  }
  return DAT_1468558e0;
}



// FUNCTION 140607310 FUN_140607310 body=47 status=ok
// SIG undefined FUN_140607310(void)

longlong FUN_140607310(void)

{
  if (DAT_1468558d8 == 0) {
    FUN_141786a30(&DAT_1468558d8,&PTR_Z_Construct_UPackage__Script_Niagara_1462150a0);
  }
  return DAT_1468558d8;
}



// FUNCTION 140607340 FUN_140607340 body=47 status=ok
// SIG undefined FUN_140607340(void)

longlong FUN_140607340(void)

{
  if (DAT_146855868 == 0) {
    FUN_141786a30(&DAT_146855868,&PTR_Z_Construct_UPackage__Script_Niagara_146213e00);
  }
  return DAT_146855868;
}



// FUNCTION 140607370 FUN_140607370 body=47 status=ok
// SIG undefined FUN_140607370(void)

longlong FUN_140607370(void)

{
  if (DAT_1468558e8 == 0) {
    FUN_1417866a0(&DAT_1468558e8,&PTR_Z_Construct_UPackage__Script_Niagara_1462166d0);
  }
  return DAT_1468558e8;
}



// FUNCTION 1406073a0 FUN_1406073a0 body=47 status=ok
// SIG undefined FUN_1406073a0(void)

longlong FUN_1406073a0(void)

{
  if (DAT_146855918 == 0) {
    FUN_1417866a0(&DAT_146855918,&PTR_Z_Construct_UPackage__Script_Niagara_1462168b0);
  }
  return DAT_146855918;
}



// FUNCTION 1406073d0 FUN_1406073d0 body=47 status=ok
// SIG undefined FUN_1406073d0(void)

longlong FUN_1406073d0(void)

{
  if (DAT_1468558f8 == 0) {
    FUN_1417866a0(&DAT_1468558f8,&PTR_Z_Construct_UPackage__Script_Niagara_146216770);
  }
  return DAT_1468558f8;
}



// FUNCTION 140607400 FUN_140607400 body=47 status=ok
// SIG undefined FUN_140607400(void)

longlong FUN_140607400(void)

{
  if (DAT_1468558f0 == 0) {
    FUN_1417866a0(&DAT_1468558f0,&PTR_Z_Construct_UPackage__Script_Niagara_146216720);
  }
  return DAT_1468558f0;
}



// FUNCTION 140607430 FUN_140607430 body=47 status=ok
// SIG undefined FUN_140607430(void)

longlong FUN_140607430(void)

{
  if (DAT_146855900 == 0) {
    FUN_1417866a0(&DAT_146855900,&PTR_Z_Construct_UPackage__Script_Niagara_1462167c0);
  }
  return DAT_146855900;
}



// FUNCTION 140607460 FUN_140607460 body=47 status=ok
// SIG undefined FUN_140607460(void)

longlong FUN_140607460(void)

{
  if (DAT_146855938 == 0) {
    FUN_1417866a0(&DAT_146855938,&PTR_Z_Construct_UPackage__Script_Niagara_1462169f0);
  }
  return DAT_146855938;
}



// FUNCTION 140607490 FUN_140607490 body=47 status=ok
// SIG undefined FUN_140607490(void)

longlong FUN_140607490(void)

{
  if (DAT_146855920 == 0) {
    FUN_1417866a0(&DAT_146855920,&PTR_Z_Construct_UPackage__Script_Niagara_146216900);
  }
  return DAT_146855920;
}



// FUNCTION 1406074c0 FUN_1406074c0 body=47 status=ok
// SIG undefined FUN_1406074c0(void)

longlong FUN_1406074c0(void)

{
  if (DAT_146855928 == 0) {
    FUN_1417866a0(&DAT_146855928,&PTR_Z_Construct_UPackage__Script_Niagara_146216950);
  }
  return DAT_146855928;
}



// FUNCTION 1406074f0 FUN_1406074f0 body=47 status=ok
// SIG undefined FUN_1406074f0(void)

longlong FUN_1406074f0(void)

{
  if (DAT_146855908 == 0) {
    FUN_1417866a0(&DAT_146855908,&PTR_Z_Construct_UPackage__Script_Niagara_146216810);
  }
  return DAT_146855908;
}



// FUNCTION 140607520 FUN_140607520 body=47 status=ok
// SIG undefined FUN_140607520(void)

longlong FUN_140607520(void)

{
  if (DAT_146855930 == 0) {
    FUN_1417866a0(&DAT_146855930,&PTR_Z_Construct_UPackage__Script_Niagara_1462169a0);
  }
  return DAT_146855930;
}



// FUNCTION 140607550 FUN_140607550 body=47 status=ok
// SIG undefined FUN_140607550(void)

longlong FUN_140607550(void)

{
  if (DAT_146855910 == 0) {
    FUN_1417866a0(&DAT_146855910,&PTR_Z_Construct_UPackage__Script_Niagara_146216860);
  }
  return DAT_146855910;
}



// FUNCTION 140607580 FUN_140607580 body=47 status=ok
// SIG undefined FUN_140607580(void)

longlong FUN_140607580(void)

{
  if (DAT_146855a18 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146855a18,&PTR_Z_Construct_UPackage__Script_Niagara_146215f50);
  }
  return DAT_146855a18;
}



// FUNCTION 1406075b0 FUN_1406075b0 body=47 status=ok
// SIG undefined FUN_1406075b0(void)

longlong FUN_1406075b0(void)

{
  if (DAT_1468559a8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468559a8,&PTR_Z_Construct_UPackage__Script_Niagara_146215870);
  }
  return DAT_1468559a8;
}



// FUNCTION 1406075e0 FUN_1406075e0 body=47 status=ok
// SIG undefined FUN_1406075e0(void)

longlong FUN_1406075e0(void)

{
  if (DAT_1468559e8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468559e8,&PTR_Z_Construct_UPackage__Script_Niagara_146215cb0);
  }
  return DAT_1468559e8;
}



// FUNCTION 140607610 FUN_140607610 body=47 status=ok
// SIG undefined FUN_140607610(void)

longlong FUN_140607610(void)

{
  if (DAT_146855a28 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146855a28,&PTR_Z_Construct_UPackage__Script_Niagara_146215fe0);
  }
  return DAT_146855a28;
}



// FUNCTION 140607640 FUN_140607640 body=47 status=ok
// SIG undefined FUN_140607640(void)

longlong FUN_140607640(void)

{
  if (DAT_146855958 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146855958,&PTR_Z_Construct_UPackage__Script_Niagara_1462153b0);
  }
  return DAT_146855958;
}



// FUNCTION 140607670 FUN_140607670 body=47 status=ok
// SIG undefined FUN_140607670(void)

longlong FUN_140607670(void)

{
  if (DAT_146855948 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146855948,&PTR_Z_Construct_UPackage__Script_Niagara_1462151e0);
  }
  return DAT_146855948;
}



// FUNCTION 1406076a0 FUN_1406076a0 body=47 status=ok
// SIG undefined FUN_1406076a0(void)

longlong FUN_1406076a0(void)

{
  if (DAT_146855988 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146855988,&PTR_Z_Construct_UPackage__Script_Niagara_146215670);
  }
  return DAT_146855988;
}



// FUNCTION 1406076d0 FUN_1406076d0 body=47 status=ok
// SIG undefined FUN_1406076d0(void)

longlong FUN_1406076d0(void)

{
  if (DAT_146855978 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146855978,&PTR_Z_Construct_UPackage__Script_Niagara_146215530);
  }
  return DAT_146855978;
}



// FUNCTION 140607700 FUN_140607700 body=47 status=ok
// SIG undefined FUN_140607700(void)

longlong FUN_140607700(void)

{
  if (DAT_146855968 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146855968,&PTR_Z_Construct_UPackage__Script_Niagara_146215470);
  }
  return DAT_146855968;
}



// FUNCTION 140607730 FUN_140607730 body=47 status=ok
// SIG undefined FUN_140607730(void)

longlong FUN_140607730(void)

{
  if (DAT_1468559d8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468559d8,&PTR_Z_Construct_UPackage__Script_Niagara_146215c30);
  }
  return DAT_1468559d8;
}



// FUNCTION 140607760 FUN_140607760 body=47 status=ok
// SIG undefined FUN_140607760(void)

longlong FUN_140607760(void)

{
  if (DAT_146855a08 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146855a08,&PTR_Z_Construct_UPackage__Script_Niagara_146215e30);
  }
  return DAT_146855a08;
}



// FUNCTION 140607790 FUN_140607790 body=47 status=ok
// SIG undefined FUN_140607790(void)

longlong FUN_140607790(void)

{
  if (DAT_1468559f8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468559f8,&PTR_Z_Construct_UPackage__Script_Niagara_146215d20);
  }
  return DAT_1468559f8;
}



// FUNCTION 1406077c0 FUN_1406077c0 body=47 status=ok
// SIG undefined FUN_1406077c0(void)

longlong FUN_1406077c0(void)

{
  if (DAT_1468559c8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468559c8,&PTR_Z_Construct_UPackage__Script_Niagara_146215a70);
  }
  return DAT_1468559c8;
}



// FUNCTION 1406077f0 FUN_1406077f0 body=47 status=ok
// SIG undefined FUN_1406077f0(void)

longlong FUN_1406077f0(void)

{
  if (DAT_146855998 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146855998,&PTR_Z_Construct_UPackage__Script_Niagara_146215730);
  }
  return DAT_146855998;
}



// FUNCTION 140607820 FUN_140607820 body=47 status=ok
// SIG undefined FUN_140607820(void)

longlong FUN_140607820(void)

{
  if (DAT_1468559b8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468559b8,&PTR_Z_Construct_UPackage__Script_Niagara_146215970);
  }
  return DAT_1468559b8;
}



// FUNCTION 140607850 FUN_140607850 body=47 status=ok
// SIG undefined FUN_140607850(void)

longlong FUN_140607850(void)

{
  if (DAT_146855878 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146855878,&PTR_Z_Construct_UPackage__Script_Niagara_146213f60);
  }
  return DAT_146855878;
}



// FUNCTION 140607880 FUN_140607880 body=47 status=ok
// SIG undefined FUN_140607880(void)

longlong FUN_140607880(void)

{
  if (DAT_146855a50 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146855a50,&PTR_Z_Construct_UPackage__Script_Niagara_1462160f0);
  }
  return DAT_146855a50;
}



// FUNCTION 1406078b0 FUN_1406078b0 body=47 status=ok
// SIG undefined FUN_1406078b0(void)

longlong FUN_1406078b0(void)

{
  if (DAT_146855a60 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146855a60,&PTR_Z_Construct_UPackage__Script_Niagara_146216390);
  }
  return DAT_146855a60;
}



// FUNCTION 1406078e0 FUN_1406078e0 body=212 status=ok
// SIG undefined FUN_1406078e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1406078e0(undefined8 *param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_248 [32];
  undefined1 local_228 [520];
  longlong local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  local_228[0] = 0;
  local_20 = 0;
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_228);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_228);
  }
  puVar1 = local_228;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)*param_1)(param_1,puVar1);
  if (local_20 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406079c0 FUN_1406079c0 body=144 status=ok
// SIG undefined FUN_1406079c0(void)

void FUN_1406079c0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FUN_1405ebc70(param_1,local_res10[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 140607a50 FUN_140607a50 body=299 status=ok
// SIG undefined FUN_140607a50(void)

void FUN_140607a50(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  bool bVar2;
  int local_res10 [2];
  undefined8 local_res18;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
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
  bVar2 = local_res10[0] != 0;
  uStack_34 = 0xffffffff;
  local_30 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_28 = CONCAT44(uStack_34,local_38);
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_20 = local_30;
  uVar1 = FUN_1405ebe40(param_1,local_res18,bVar2,&local_28);
  *param_3 = uVar1;
  return;
}



// FUNCTION 140607ba0 FUN_140607ba0 body=240 status=ok
// SIG undefined FUN_140607ba0(void)

void FUN_140607ba0(longlong *param_1,longlong param_2)

{
  undefined4 local_res8 [2];
  undefined4 local_res10 [4];
  undefined8 local_res20;
  
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
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
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
  (**(code **)(*param_1 + 0x400))(param_1,local_res10[0],local_res8[0],local_res20);
  return;
}



// FUNCTION 140607c90 FUN_140607c90 body=196 status=ok
// SIG undefined FUN_140607c90(void)

void FUN_140607c90(longlong *param_1,longlong param_2)

{
  int local_res8 [2];
  undefined4 local_res10 [2];
  
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
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x3f8))(param_1,local_res10[0],local_res8[0] != 0);
  return;
}



// FUNCTION 140607d60 FUN_140607d60 body=429 status=ok
// SIG undefined FUN_140607d60(void)

undefined8 * FUN_140607d60(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  byte bVar3;
  
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfc;
  puVar2 = (undefined8 *)FMemory::Malloc(0xe0,8);
  bVar3 = *(byte *)(param_1 + 4);
  *param_1 = puVar2;
  *(byte *)(param_1 + 4) = bVar3 | 1;
  if ((bVar3 & 2) != 0) {
    puVar2 = param_1;
  }
  *puVar2 = &PTR_FUN_143f3edd8;
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_2 + 8);
  *puVar2 = &PTR_FUN_144012e40;
  FUN_14060ac50(puVar2 + 2,param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x90);
  puVar2[0x11] = *(undefined8 *)(param_2 + 0x88);
  puVar2[0x12] = uVar1;
  *(undefined4 *)(puVar2 + 0x13) = *(undefined4 *)(param_2 + 0x98);
  *(undefined1 *)((longlong)puVar2 + 0x9c) = *(undefined1 *)(param_2 + 0x9c);
  puVar2[0x14] = *(undefined8 *)(param_2 + 0xa0);
  *(undefined1 *)(puVar2 + 0x15) = *(undefined1 *)(param_2 + 0xa8);
  *(undefined8 *)((longlong)puVar2 + 0xac) = *(undefined8 *)(param_2 + 0xac);
  *(undefined8 *)((longlong)puVar2 + 0xb4) = *(undefined8 *)(param_2 + 0xb4);
  *(undefined4 *)((longlong)puVar2 + 0xbc) = *(undefined4 *)(param_2 + 0xbc);
  *(undefined4 *)(puVar2 + 0x18) = *(undefined4 *)(param_2 + 0xc0);
  *(undefined8 *)((longlong)puVar2 + 0xc4) = *(undefined8 *)(param_2 + 0xc4);
  *(undefined4 *)((longlong)puVar2 + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
  *(undefined4 *)(puVar2 + 0x1a) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined4 *)((longlong)puVar2 + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
  *(undefined4 *)(puVar2 + 0x1b) = *(undefined4 *)(param_2 + 0xd8);
  *(byte *)((longlong)puVar2 + 0xdc) =
       *(byte *)((longlong)puVar2 + 0xdc) ^
       (*(byte *)((longlong)puVar2 + 0xdc) ^ *(byte *)(param_2 + 0xdc)) & 1;
  bVar3 = (*(byte *)((longlong)puVar2 + 0xdc) ^ *(byte *)(param_2 + 0xdc)) & 2 ^
          *(byte *)((longlong)puVar2 + 0xdc);
  *(byte *)((longlong)puVar2 + 0xdc) = bVar3;
  bVar3 = (bVar3 ^ *(byte *)(param_2 + 0xdc)) & 4 ^ bVar3;
  *(byte *)((longlong)puVar2 + 0xdc) = bVar3;
  bVar3 = (bVar3 ^ *(byte *)(param_2 + 0xdc)) & 8 ^ bVar3;
  *(byte *)((longlong)puVar2 + 0xdc) = bVar3;
  bVar3 = (bVar3 ^ *(byte *)(param_2 + 0xdc)) & 0x10 ^ bVar3;
  *(byte *)((longlong)puVar2 + 0xdc) = bVar3;
  *(byte *)((longlong)puVar2 + 0xdc) = (bVar3 ^ *(byte *)(param_2 + 0xdc)) & 0x20 ^ bVar3;
  return param_1;
}



// FUNCTION 140607f10 FUN_140607f10 body=270 status=ok
// SIG undefined FUN_140607f10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_140607f10(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [8];
  longlong local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  puVar1 = (undefined4 *)*param_1;
  local_88 = 0xffffffff;
  local_80 = 0;
  local_78 = 0;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  local_60 = 0;
  local_58 = 0;
  *param_2 = *puVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  param_2[4] = 0xffffffff;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x12] = 0xffffffff;
  param_2[0x13] = 0;
  local_50 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x16) = 0;
  param_2[0x18] = 0;
  local_4c = 0;
  local_40 = 0;
  local_38 = 0;
  TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::operator=(param_2 + 6,&local_80);
  lVar5 = local_40;
  if (local_40 == 0) {
    _guard_xfg_dispatch_icall_nop(param_2 + 0x14,local_48,4);
  }
  if (*(longlong *)(param_2 + 0x16) != 0) {
    FMemory::Free();
  }
  *(longlong *)(param_2 + 0x16) = lVar5;
  param_2[0x18] = local_38;
  local_40 = 0;
  local_38 = 0;
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_80);
  return param_2;
}



// FUNCTION 140608020 Emplace<TKeyInitializer<enum_EFlareQuestCallback::Type_const_&>_> body=723 status=ok
// SIG undefined Emplace<TKeyInitializer<enum_EFlareQuestCallback::Type_const_&>_>(void)

int * TSet<TTuple<enum_EFlareQuestCallback::Type,TArray<UFlareQuest_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<enum_EFlareQuestCallback::Type,TArray<UFlareQuest_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<enum_EFlareQuestCallback::Type_const_&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  byte bVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  void *_Dst;
  char cVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  bool local_res8;
  
  iVar4 = 1;
  iVar12 = -1;
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
    iVar6 = *(int *)((longlong)iVar8 * 0x20 + 4 + *param_1);
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar6;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)((longlong)iVar6 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar3 = (longlong *)param_1[4];
  *param_2 = iVar8;
  local_res8 = false;
  if (plVar3 == (longlong *)0x0) {
    plVar3 = param_1 + 2;
  }
  puVar11 = (uint *)((longlong)plVar3 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar11 = *puVar11 | 1 << ((byte)iVar8 & 0x1f);
  puVar11 = (uint *)((longlong)iVar8 * 0x20 + *param_1);
  *puVar11 = *(uint *)*param_3;
  puVar11[2] = 0;
  puVar11[3] = 0;
  puVar11[4] = 0;
  puVar11[5] = 0;
  puVar11[6] = 0xffffffff;
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar10 != 1) {
    iVar7 = iVar12;
    if (uVar10 != 0) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar3 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar11) * 4);
      if (iVar6 != -1) {
        do {
          iVar7 = iVar6;
          if (*(uint *)((longlong)iVar6 * 0x20 + *param_1) == *puVar11) break;
          iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + *param_1);
          iVar7 = iVar12;
        } while (iVar6 != -1);
      }
    }
    local_res8 = iVar7 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar7 * 0x20 + *param_1);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      ::_guard_xfg_dispatch_icall_nop(_Dst,puVar11,0x18);
      iVar4 = *param_2;
      bVar1 = (byte)iVar4 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar4;
      }
      puVar5 = (undefined4 *)((longlong)iVar4 * 0x20 + *param_1);
      *puVar5 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar12 = (int)param_1[6];
      }
      puVar5[1] = iVar12;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar4;
      plVar3 = (longlong *)param_1[4];
      *param_2 = iVar7;
      if (plVar3 == (longlong *)0x0) {
        plVar3 = param_1 + 2;
      }
      puVar11 = (uint *)((longlong)plVar3 +
                        (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar11 = *puVar11 & ~(1 << bVar1 | 1U >> 0x20 - bVar1);
      goto LAB_1406082ca;
    }
  }
  if (3 < uVar10) {
    uVar2 = (uVar10 >> 1) + 8;
    iVar12 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    iVar4 = 0x20;
    if (uVar2 != 0) {
      iVar4 = 0x1f - iVar12;
    }
    uVar2 = (uVar10 >> 1) + 7;
    iVar12 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uVar2 == 0) {
      cVar9 = '\0';
    }
    else {
      cVar9 = '\x1f' - (char)iVar12;
    }
    iVar4 = 1 << (~(byte)((iVar4 << 0x1a) >> 0x1f) & 0x20U - cVar9 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar4 <= (int)param_1[9])))) {
    uVar10 = (int)param_1[9] - 1U & *puVar11;
    puVar11[7] = uVar10;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    puVar11[6] = *(uint *)((longlong)plVar3 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         iVar8;
  }
  else {
    *(int *)(param_1 + 9) = iVar4;
    TSet<TTuple<FDeviceId,TArray<FKey,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FDeviceId,TArray<FKey,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1406082ca:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 140608300 FUN_140608300 body=765 status=ok
// SIG undefined FUN_140608300(void)

uint * FUN_140608300(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uVar16;
  bool bVar17;
  uint local_res8 [2];
  ulonglong *local_res10;
  
  iVar11 = 1;
  uVar16 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar10 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar10 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,uVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar10 = *(uint *)(param_1 + 6);
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar8 = *(int *)(*param_1 + 4 + (longlong)(int)uVar10 * 0x18);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x18) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = uVar10;
  local_res8[0] = local_res8[0] & 0xffffff00;
  lVar6 = (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar15 = (uint *)((longlong)plVar7 + lVar6);
  *puVar15 = *puVar15 | 1 << ((byte)uVar10 & 0x1f);
  lVar1 = (longlong)(int)uVar10 * 0x18;
  local_res10 = (ulonglong *)(*param_1 + lVar1);
  uVar2 = *(ulonglong *)*param_3;
  *local_res10 = uVar2;
  *(undefined4 *)(local_res10 + 1) = 0;
  *(undefined4 *)(local_res10 + 2) = 0xffffffff;
  uVar14 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar14 != 1) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar2);
    uVar5 = local_res8[0];
    lVar9 = (longlong)(int)local_res8[0];
    bVar17 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar17);
    if (bVar17) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + lVar9 * 0x18),local_res10,0x10);
      bVar3 = (byte)uVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = uVar10;
      }
      lVar9 = *param_1;
      *(undefined4 *)(lVar1 + lVar9) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar16 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar1 + 4 + lVar9) = uVar16;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar10;
      plVar7 = (longlong *)param_1[4];
      *param_2 = uVar5;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar15 = (uint *)((longlong)plVar7 + lVar6);
      *puVar15 = *puVar15 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_1406085ce;
    }
  }
  if (3 < uVar14) {
    uVar5 = (uVar14 >> 1) + 8;
    iVar11 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    iVar8 = 0x20;
    cVar12 = '\0';
    if (uVar5 != 0) {
      iVar8 = 0x1f - iVar11;
    }
    uVar5 = (uVar14 >> 1) + 7;
    iVar11 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar12 = '\x1f' - (char)iVar11;
    }
    iVar11 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar14 < 1) || (((int)param_1[9] != 0 && (iVar11 <= (int)param_1[9])))) {
    iVar11 = (int)(*local_res10 >> 4);
    uVar5 = 0x9e3779b9U - iVar11 ^ iVar11 << 8;
    uVar13 = -(iVar11 + uVar5) ^ uVar5 >> 0xd;
    uVar14 = (iVar11 - uVar5) - uVar13 ^ uVar13 >> 0xc;
    uVar5 = (uVar5 - uVar14) - uVar13 ^ uVar14 << 0x10;
    uVar13 = (uVar13 - uVar5) - uVar14 ^ uVar5 >> 5;
    uVar14 = (uVar14 - uVar5) - uVar13 ^ uVar13 >> 3;
    uVar5 = (uVar5 - uVar14) - uVar13 ^ uVar14 << 10;
    uVar14 = ((uVar13 - uVar5) - uVar14 ^ uVar5 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_res10 + 0x14) = uVar14;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(local_res10 + 2) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(uint *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4) =
         uVar10;
  }
  else {
    *(int *)(param_1 + 9) = iVar11;
    TSet<TTuple<FFlareSpacecraftDescription_const_*,int>,TDefaultMapHashableKeyFuncs<FFlareSpacecraftDescription_const_*,int,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1406085ce:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 140608600 FUN_140608600 body=590 status=ok
// SIG undefined FUN_140608600(void)

uint * FUN_140608600(longlong *param_1,uint *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  void *pvVar11;
  undefined4 uVar12;
  bool bVar13;
  uint local_res8 [2];
  void *local_res10;
  undefined8 local_res18;
  undefined1 *local_res20;
  
  uVar12 = 0xffffffff;
  local_res18 = param_3;
  local_res20 = param_4;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar9 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar9 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,uVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar9 = *(uint *)(param_1 + 6);
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)(int)uVar9 * 0x70 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x70 + *param_1) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = uVar9;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar8 +
                   (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar9 & 0x1f);
  pvVar11 = (void *)((longlong)(int)uVar9 * 0x70 + *param_1);
  local_res10 = pvVar11;
  FUN_140607f10(local_res18,pvVar11);
  *(undefined4 *)((longlong)pvVar11 + 0x68) = 0xffffffff;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    FUN_140610d90(param_1,local_res8,pvVar11);
    uVar9 = local_res8[0];
    lVar10 = (longlong)(int)local_res8[0];
    bVar13 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar13);
    if (bVar13) {
      pvVar11 = (void *)(lVar10 * 0x70 + *param_1);
      *(undefined4 *)((longlong)pvVar11 + 0x60) = 0;
      if (*(longlong *)((longlong)pvVar11 + 0x58) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ((longlong)pvVar11 + 0x18);
      _guard_xfg_dispatch_icall_nop(pvVar11,local_res10,0x68);
      uVar6 = *param_2;
      bVar3 = (byte)uVar6 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)((longlong)(int)param_1[6] * 0x70 + *param_1) = uVar6;
      }
      puVar7 = (undefined4 *)((longlong)(int)uVar6 * 0x70 + *param_1);
      *puVar7 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar12 = (undefined4)param_1[6];
      }
      puVar7[1] = uVar12;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar6;
      plVar8 = (longlong *)param_1[4];
      *param_2 = uVar9;
      if (plVar8 == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar8 +
                       (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      param_4 = local_res20;
      goto LAB_14060882c;
    }
  }
  cVar4 = FUN_14060d680(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar4 == '\0') {
    uVar9 = *param_2;
    uVar6 = FCrc::MemCrc_DEPRECATED(pvVar11,0x10);
    uVar6 = (int)param_1[9] - 1U & uVar6;
    *(uint *)((longlong)pvVar11 + 0x6c) = uVar6;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)((longlong)pvVar11 + 0x68) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(uint *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         uVar9;
  }
LAB_14060882c:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 140608850 FUN_140608850 body=698 status=ok
// SIG undefined FUN_140608850(void)

int * FUN_140608850(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  bool bVar16;
  
  iVar8 = 1;
  iVar15 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar9 = *(int *)(*param_1 + 4 + (longlong)iVar11 * 0x14);
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar9 * 0x14) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar11;
  lVar6 = (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  bVar16 = false;
  puVar14 = (uint *)((longlong)plVar7 + lVar6);
  *puVar14 = *puVar14 | 1 << ((byte)iVar11 & 0x1f);
  puVar2 = (undefined8 *)param_3[1];
  lVar1 = (longlong)iVar11 * 0x14;
  puVar14 = (uint *)(*param_1 + lVar1);
  *puVar14 = *(uint *)*param_3;
  *(undefined8 *)(puVar14 + 1) = *puVar2;
  puVar14[3] = 0xffffffff;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar13 != 1) {
    iVar10 = iVar15;
    if (uVar13 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar7 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar14) * 4);
      if (iVar9 != -1) {
        do {
          iVar10 = iVar9;
          if (*(uint *)(*param_1 + (longlong)iVar9 * 0x14) == *puVar14) break;
          iVar9 = *(int *)(*param_1 + 0xc + (longlong)iVar9 * 0x14);
          iVar10 = iVar15;
        } while (iVar9 != -1);
      }
    }
    bVar16 = iVar10 != -1;
    if (bVar16) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar10 * 0x14),puVar14,0xc);
      bVar4 = (byte)iVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x14) = iVar11;
      }
      lVar3 = *param_1;
      *(undefined4 *)(lVar1 + lVar3) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar15 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar3) = iVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar11;
      plVar7 = (longlong *)param_1[4];
      *param_2 = iVar10;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar14 = (uint *)((longlong)plVar7 + lVar6);
      *puVar14 = *puVar14 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_140608ae5;
    }
  }
  if (3 < uVar13) {
    uVar5 = (uVar13 >> 1) + 8;
    iVar15 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    iVar8 = 0x20;
    if (uVar5 != 0) {
      iVar8 = 0x1f - iVar15;
    }
    uVar5 = (uVar13 >> 1) + 7;
    iVar15 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uVar5 == 0) {
      cVar12 = '\0';
    }
    else {
      cVar12 = '\x1f' - (char)iVar15;
    }
    iVar8 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar13 = (int)param_1[9] - 1U & *puVar14;
    puVar14[4] = uVar13;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    puVar14[3] = *(uint *)((longlong)plVar7 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         iVar11;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TTuple<unsigned_int,FMeshSectionInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FMeshSectionInfo,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_140608ae5:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar16;
  }
  return param_2;
}



// FUNCTION 140608b10 FUN_140608b10 body=689 status=ok
// SIG undefined FUN_140608b10(void)

int * FUN_140608b10(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  uint *_Src;
  uint *puVar14;
  int iVar15;
  bool bVar16;
  
  iVar7 = 1;
  iVar15 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar9 = *(int *)((longlong)iVar11 * 0x20 + 4 + *param_1);
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)((longlong)iVar9 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar11;
  lVar5 = (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  bVar16 = false;
  puVar14 = (uint *)((longlong)plVar6 + lVar5);
  *puVar14 = *puVar14 | 1 << ((byte)iVar11 & 0x1f);
  puVar14 = (uint *)param_3[1];
  lVar8 = (longlong)iVar11 * 0x20;
  _Src = (uint *)(*param_1 + lVar8);
  *_Src = *(uint *)*param_3;
  uVar13 = puVar14[1];
  uVar4 = puVar14[2];
  uVar3 = puVar14[3];
  _Src[2] = *puVar14;
  _Src[3] = uVar13;
  _Src[4] = uVar4;
  _Src[5] = uVar3;
  _Src[6] = 0xffffffff;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar13 != 1) {
    iVar10 = iVar15;
    if (uVar13 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar6 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*_Src) * 4);
      if (iVar9 != -1) {
        do {
          iVar10 = iVar9;
          if (*(uint *)((longlong)iVar9 * 0x20 + *param_1) == *_Src) break;
          iVar9 = *(int *)((longlong)iVar9 * 0x20 + 0x18 + *param_1);
          iVar10 = iVar15;
        } while (iVar9 != -1);
      }
    }
    bVar16 = iVar10 != -1;
    if (bVar16) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar10 * 0x20 + *param_1),_Src,0x18);
      bVar2 = (byte)iVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar11;
      }
      lVar1 = *param_1;
      *(undefined4 *)(lVar8 + lVar1) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar15 = (int)param_1[6];
      }
      *(int *)(lVar8 + 4 + lVar1) = iVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar11;
      plVar6 = (longlong *)param_1[4];
      *param_2 = iVar10;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      puVar14 = (uint *)((longlong)plVar6 + lVar5);
      *puVar14 = *puVar14 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_140608d9c;
    }
  }
  if (3 < uVar13) {
    uVar4 = (uVar13 >> 1) + 8;
    iVar15 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    iVar7 = 0x20;
    if (uVar4 != 0) {
      iVar7 = 0x1f - iVar15;
    }
    uVar4 = (uVar13 >> 1) + 7;
    iVar15 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uVar4 == 0) {
      cVar12 = '\0';
    }
    else {
      cVar12 = '\x1f' - (char)iVar15;
    }
    iVar7 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar7 <= (int)param_1[9])))) {
    uVar13 = (int)param_1[9] - 1U & *_Src;
    _Src[7] = uVar13;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    _Src[6] = *(uint *)((longlong)plVar6 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         iVar11;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    TSet<TTuple<FDeviceId,TArray<FKey,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FDeviceId,TArray<FKey,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_140608d9c:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar16;
  }
  return param_2;
}



// FUNCTION 140608dd0 FUN_140608dd0 body=638 status=ok
// SIG undefined FUN_140608dd0(void)

uint * FUN_140608dd0(longlong *param_1,uint *param_2,longlong *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  char cVar16;
  undefined4 *_Src;
  bool bVar17;
  uint local_res8 [2];
  
  iVar14 = 1;
  uVar13 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar15 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar15 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeGrow
                (param_1,uVar15);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar15 = *(uint *)(param_1 + 6);
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar10 = *(int *)((longlong)(int)uVar15 * 0x1c + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar10;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)((longlong)iVar10 * 0x1c + *param_1) = 0xffffffff;
    }
  }
  plVar11 = (longlong *)param_1[4];
  *param_2 = uVar15;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar11 +
                   (longlong)((int)(uVar15 + ((int)uVar15 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar15 & 0x1f);
  puVar9 = (undefined4 *)*param_3;
  _Src = (undefined4 *)((longlong)(int)uVar15 * 0x1c + *param_1);
  puVar2 = (undefined4 *)param_3[1];
  uVar4 = puVar9[1];
  uVar5 = puVar9[2];
  uVar6 = puVar9[3];
  *_Src = *puVar9;
  _Src[1] = uVar4;
  _Src[2] = uVar5;
  _Src[3] = uVar6;
  _Src[4] = *puVar2;
  _Src[5] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FGuid,unsigned_char>,TDefaultMapHashableKeyFuncs<FGuid,unsigned_char,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    uVar15 = local_res8[0];
    lVar12 = (longlong)(int)local_res8[0];
    bVar17 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar17);
    if (bVar17) {
      _guard_xfg_dispatch_icall_nop((void *)(lVar12 * 0x1c + *param_1),_Src,0x14);
      uVar8 = *param_2;
      bVar3 = (byte)uVar8 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)((longlong)(int)param_1[6] * 0x1c + *param_1) = uVar8;
      }
      puVar9 = (undefined4 *)((longlong)(int)uVar8 * 0x1c + *param_1);
      *puVar9 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar13 = (undefined4)param_1[6];
      }
      puVar9[1] = uVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar8;
      plVar11 = (longlong *)param_1[4];
      *param_2 = uVar15;
      if (plVar11 == (longlong *)0x0) {
        plVar11 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar11 +
                       (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_140609028;
    }
  }
  uVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar15) {
    uVar8 = (uVar15 >> 1) + 8;
    iVar14 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar10 = 0x20;
    cVar16 = '\0';
    if (uVar8 != 0) {
      iVar10 = 0x1f - iVar14;
    }
    uVar8 = (uVar15 >> 1) + 7;
    iVar14 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uVar8 != 0) {
      cVar16 = '\x1f' - (char)iVar14;
    }
    iVar14 = 1 << (~(byte)((iVar10 << 0x1a) >> 0x1f) & 0x20U - cVar16 & 0x1f);
  }
  if (((int)uVar15 < 1) || (((int)param_1[9] != 0 && (iVar14 <= (int)param_1[9])))) {
    uVar15 = *param_2;
    uVar8 = FCrc::MemCrc_DEPRECATED(_Src,0x10);
    uVar8 = (int)param_1[9] - 1U & uVar8;
    _Src[6] = uVar8;
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    _Src[5] = *(undefined4 *)
               ((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(uint *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         uVar15;
  }
  else {
    *(int *)(param_1 + 9) = iVar14;
    TSet<TTuple<FGuid,unsigned_char>,TDefaultMapHashableKeyFuncs<FGuid,unsigned_char,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_140609028:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 140609050 FUN_140609050 body=802 status=ok
// SIG undefined FUN_140609050(void)

int * FUN_140609050(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  void *_Dst;
  char cVar13;
  uint uVar14;
  uint *_Src;
  int iVar15;
  bool local_res8;
  
  iVar9 = 1;
  iVar15 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar12 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar3 = *(int *)((longlong)iVar11 * 0x38 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar12;
    if (iVar12 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x38 + *param_1) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar11;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  _Src = (uint *)((longlong)iVar11 * 0x38 + *param_1);
  puVar1 = (uint *)param_3[1];
  *_Src = *(uint *)*param_3;
  *(byte *)(_Src + 10) = (byte)_Src[10] & 0xfe | 2;
  if ((puVar1[8] & 1) != 0) {
    *(byte *)(_Src + 10) = (byte)_Src[10] | 1;
    *(byte *)(puVar1 + 8) = (byte)puVar1[8] & 0xfe;
    uVar14 = puVar1[8];
    *(byte *)(_Src + 10) = (byte)_Src[10] & 0xfd;
    *(byte *)(_Src + 10) = (byte)_Src[10] | (byte)uVar14 & 2;
    uVar14 = puVar1[1];
    uVar6 = puVar1[2];
    uVar4 = puVar1[3];
    _Src[2] = *puVar1;
    _Src[3] = uVar14;
    _Src[4] = uVar6;
    _Src[5] = uVar4;
    uVar5 = *(undefined8 *)(puVar1 + 6);
    *(undefined8 *)(_Src + 6) = *(undefined8 *)(puVar1 + 4);
    *(undefined8 *)(_Src + 8) = uVar5;
  }
  _Src[0xc] = 0xffffffff;
  uVar14 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar14 != 1) {
    iVar11 = iVar15;
    if (uVar14 != 0) {
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      iVar12 = *(int *)((longlong)plVar8 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)(int)*_Src) * 4);
      if (iVar12 != -1) {
        do {
          iVar11 = iVar12;
          if (*(uint *)((longlong)iVar12 * 0x38 + *param_1) == *_Src) break;
          iVar12 = *(int *)((longlong)iVar12 * 0x38 + 0x30 + *param_1);
          iVar11 = iVar15;
        } while (iVar12 != -1);
      }
    }
    local_res8 = iVar11 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar11 * 0x38 + *param_1);
      bVar2 = *(byte *)((longlong)_Dst + 0x28);
      if ((bVar2 & 1) != 0) {
        puVar10 = (undefined8 *)((longlong)_Dst + 8);
        if ((bVar2 & 2) == 0) {
          puVar10 = *(undefined8 **)((longlong)_Dst + 8);
        }
        *(byte *)((longlong)_Dst + 0x28) = bVar2 & 0xfe;
        (**(code **)*puVar10)(puVar10,0);
        if ((*(byte *)((longlong)_Dst + 0x28) & 2) == 0) {
          FMemory::Free(*(undefined8 *)((longlong)_Dst + 8));
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x30);
      iVar9 = *param_2;
      bVar2 = (byte)iVar9 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x38 + *param_1) = iVar9;
      }
      puVar7 = (undefined4 *)((longlong)iVar9 * 0x38 + *param_1);
      *puVar7 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar15 = (int)param_1[6];
      }
      puVar7[1] = iVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar9;
      plVar8 = (longlong *)param_1[4];
      *param_2 = iVar11;
      if (plVar8 == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar8 +
                       (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_140609349;
    }
  }
  if (3 < uVar14) {
    uVar6 = (uVar14 >> 1) + 8;
    iVar15 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    iVar9 = 0x20;
    if (uVar6 != 0) {
      iVar9 = 0x1f - iVar15;
    }
    uVar6 = (uVar14 >> 1) + 7;
    iVar15 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uVar6 == 0) {
      cVar13 = '\0';
    }
    else {
      cVar13 = '\x1f' - (char)iVar15;
    }
    iVar9 = 1 << (~(byte)((iVar9 << 0x1a) >> 0x1f) & 0x20U - cVar13 & 0x1f);
  }
  if (((int)uVar14 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    uVar14 = (int)param_1[9] - 1U & *_Src;
    _Src[0xd] = uVar14;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    _Src[0xc] = *(uint *)((longlong)plVar8 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    TSet<TTuple<int,FIndividualOcclusionHistory>,TDefaultMapHashableKeyFuncs<int,FIndividualOcclusionHistory,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_140609349:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 140609380 FUN_140609380 body=592 status=ok
// SIG undefined FUN_140609380(void)

int * FUN_140609380(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined4 *_Src;
  int iVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  uint uVar13;
  int iVar14;
  char cVar15;
  bool bVar16;
  int local_res8 [2];
  
  iVar14 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar11 * 0x28);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  plVar12 = (longlong *)param_1[4];
  *param_2 = iVar11;
  if (plVar12 == (longlong *)0x0) {
    plVar12 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar12 +
                   (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  puVar3 = (undefined4 *)*param_3;
  uVar6 = puVar3[1];
  uVar7 = puVar3[2];
  uVar8 = puVar3[3];
  _Src = (undefined4 *)(*param_1 + (longlong)iVar11 * 0x28);
  puVar4 = (undefined8 *)param_3[1];
  bVar16 = false;
  *_Src = *puVar3;
  _Src[1] = uVar6;
  _Src[2] = uVar7;
  _Src[3] = uVar8;
  *(undefined8 *)(_Src + 4) = *(undefined8 *)(puVar3 + 4);
  *(undefined8 *)(_Src + 6) = *puVar4;
  *puVar4 = 0;
  _Src[8] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    bVar16 = local_res8[0] != -1;
    if (bVar16) {
      lVar5 = *param_1;
      puVar4 = *(undefined8 **)(lVar5 + 0x18 + (longlong)local_res8[0] * 0x28);
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar5 + (longlong)local_res8[0] * 0x28),_Src,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_1406095a7;
    }
  }
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar13) {
    uVar10 = (uVar13 >> 1) + 8;
    iVar14 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar11 = 0x20;
    cVar15 = '\0';
    if (uVar10 != 0) {
      iVar11 = 0x1f - iVar14;
    }
    uVar10 = (uVar13 >> 1) + 7;
    iVar14 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uVar10 != 0) {
      cVar15 = '\x1f' - (char)iVar14;
    }
    iVar14 = 1 << (~(byte)((iVar11 << 0x1a) >> 0x1f) & 0x20U - cVar15 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar14 <= (int)param_1[9])))) {
    iVar14 = *param_2;
    uVar13 = GetTypeHash(_Src);
    uVar13 = (int)param_1[9] - 1U & uVar13;
    _Src[9] = uVar13;
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    _Src[8] = *(undefined4 *)
               ((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         iVar14;
  }
  else {
    *(int *)(param_1 + 9) = iVar14;
    TSet<TTuple<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1406095a7:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar16;
  }
  return param_2;
}



// FUNCTION 1406095d0 FUN_1406095d0 body=741 status=ok
// SIG undefined FUN_1406095d0(void)

int * FUN_1406095d0(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  uint uVar12;
  longlong *_Src;
  uint *puVar13;
  int iVar14;
  bool local_res8;
  
  iVar7 = 1;
  iVar14 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar8 = *(int *)(*param_1 + 4 + (longlong)iVar10 * 0x18);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x18) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar10;
  local_res8 = false;
  lVar5 = (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar13 = (uint *)((longlong)plVar6 + lVar5);
  *puVar13 = *puVar13 | 1 << ((byte)iVar10 & 0x1f);
  plVar6 = (longlong *)param_3[1];
  lVar1 = (longlong)iVar10 * 0x18;
  _Src = (longlong *)(*param_1 + lVar1);
  lVar2 = *(longlong *)*param_3;
  *_Src = lVar2;
  _Src[1] = *plVar6;
  *(undefined4 *)(_Src + 2) = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar12 != 1) {
    iVar9 = iVar14;
    if (uVar12 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar6 +
                      ((longlong)((int)((ulonglong)lVar2 >> 0x20) * 0x17 + (int)lVar2) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar8 != -1) {
        do {
          iVar9 = iVar8;
          if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x18) == lVar2) break;
          iVar8 = *(int *)(*param_1 + 0x10 + (longlong)iVar8 * 0x18);
          iVar9 = iVar14;
        } while (iVar8 != -1);
      }
    }
    local_res8 = iVar9 != -1;
    if (local_res8) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar9 * 0x18),_Src,0x10);
      bVar3 = (byte)iVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar10;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar1 + lVar2) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar14 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar2) = iVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar10;
      plVar6 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      puVar13 = (uint *)((longlong)plVar6 + lVar5);
      *puVar13 = *puVar13 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_140609886;
    }
  }
  if (3 < uVar12) {
    uVar4 = (uVar12 >> 1) + 8;
    iVar14 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar7 = 0x20;
    if (uVar4 != 0) {
      iVar7 = 0x1f - iVar14;
    }
    uVar4 = (uVar12 >> 1) + 7;
    iVar14 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uVar4 == 0) {
      cVar11 = '\0';
    }
    else {
      cVar11 = '\x1f' - (char)iVar14;
    }
    iVar7 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar7 <= (int)param_1[9])))) {
    uVar12 = (int)((ulonglong)*_Src >> 0x20) * 0x17 + (int)*_Src & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x14) = uVar12;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         iVar10;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    TSet<TTuple<unsigned___int64,FCsvStatSeries_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FCsvStatSeries_*,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_140609886:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1406098c0 FUN_1406098c0 body=1020 status=ok
// SIG undefined FUN_1406098c0(void)

void FUN_1406098c0(longlong param_1,longlong *param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  uint *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong *local_b8;
  uint local_b0;
  uint uStack_ac;
  uint local_a8;
  uint uStack_a4;
  uint *puStack_a0;
  undefined4 local_98;
  uint uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined8 uStack_80;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 uStack_68;
  longlong *local_60;
  uint uStack_58;
  uint uStack_54;
  uint *local_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 local_40;
  
  plVar13 = (longlong *)0x0;
  *(undefined4 *)(param_2 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_2 + 0xc)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  plVar14 = (longlong *)(param_1 + 0x2b0);
  local_b8 = (longlong *)0x0;
  uVar1 = *(uint *)(param_1 + 0x2d8);
  puStack_a0 = (uint *)(param_1 + 0x2c0);
  uStack_ac = 0;
  local_a8 = 0;
  uStack_a4 = 1;
  uStack_94 = 0;
  uStack_90 = 0;
  if (uVar1 != 0) {
    puVar12 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar12 = puStack_a0;
    }
    uVar7 = *puVar12;
    plVar6 = plVar13;
    plVar10 = plVar13;
    while (uVar7 == 0) {
      iVar4 = (int)plVar6;
      uStack_90 = (int)plVar10 + 0x20;
      plVar10 = (longlong *)(ulonglong)uStack_90;
      local_a8 = iVar4 + 1;
      plVar6 = (longlong *)(ulonglong)local_a8;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1406099bd;
      uVar7 = puVar12[(longlong)iVar4 + 1];
    }
    uStack_a4 = uVar7 - 1 & uVar7 ^ uVar7;
    iVar4 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    uStack_94 = (uStack_90 - iVar4) + 0x1f;
    if ((int)uVar1 < (int)uStack_94) {
LAB_1406099bd:
      uStack_94 = uVar1;
    }
  }
  local_98 = 0xffffffff;
  uStack_74 = *(uint *)(param_1 + 0x2d8);
  uStack_80 = CONCAT44(uStack_a4,local_a8);
  uStack_48 = 0xffffffff;
  uStack_44 = uStack_94;
  uStack_68 = CONCAT44(uStack_8c,uStack_90);
  uStack_78 = -1 << ((byte)uStack_74 & 0x1f);
  uVar11 = uStack_74 & 0xffffffe0;
  uStack_58 = local_a8;
  uStack_54 = uStack_a4;
  plVar6 = plVar13;
  plVar10 = plVar13;
  local_88 = plVar14;
  local_50 = puStack_a0;
  local_40 = uStack_68;
  local_60 = plVar14;
  uStack_70 = uStack_48;
  uStack_6c = uStack_44;
  uVar7 = uStack_74;
  if (uStack_74 != uVar1) {
    puVar12 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar12 = puStack_a0;
    }
    uVar7 = puVar12[(int)uStack_74 >> 5] & uStack_78;
    iVar4 = (int)uStack_74 >> 5;
    while (uVar7 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_140609a95;
      uVar7 = puVar12[(longlong)iVar4 + 1];
      uStack_78 = 0xffffffff;
      iVar4 = iVar4 + 1;
    }
    uVar7 = uVar7 - 1 & uVar7 ^ uVar7;
    iVar4 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    uStack_74 = (uVar11 - iVar4) + 0x1f;
    uVar7 = uStack_74;
    if ((int)uVar1 < (int)uStack_74) {
LAB_140609a95:
      uStack_74 = uVar1;
      uVar7 = uVar1;
    }
  }
  while( true ) {
    if ((uStack_44 == uVar7) && (local_50 == puStack_a0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_60 == plVar14)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    iVar4 = (int)plVar10;
    if (!bVar3) break;
    lVar9 = *(longlong *)(*local_60 + (longlong)(int)uStack_44 * 0x10);
    if (lVar9 != 0) {
      lVar5 = UCircularThrobber::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
        }
        *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar9;
      }
    }
    if ((param_3 != '\0') && (lVar9 != 0)) {
      lVar5 = UUGStartScreenUW::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_b0 = iVar4 + 1;
        if ((int)plVar6 < (int)local_b0) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_b8,plVar10);
          plVar6 = (longlong *)(ulonglong)uStack_ac;
          plVar13 = local_b8;
        }
        plVar10 = (longlong *)(ulonglong)local_b0;
        plVar13[iVar4] = lVar9;
      }
    }
    uStack_48 = uStack_48 & ~uStack_54;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_58);
  }
  if (param_3 != '\0') {
    uVar8 = 0;
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    uStack_ac = 0;
    uVar15 = (ulonglong)((longlong)(plVar13 + iVar4) + (7 - (longlong)plVar13)) >> 3;
    if (plVar13 + iVar4 < plVar13) {
      uVar15 = uVar8;
    }
    plVar14 = plVar13;
    if (uVar15 != 0) {
      do {
        if (*(longlong *)(*plVar14 + 0x2d8) != 0) {
          FUN_1406098c0(*(longlong *)(*plVar14 + 0x2d8),&local_b8,1);
          uVar1 = local_b0;
          lVar9 = (longlong)(int)local_b0;
          if (local_b0 != 0) {
            iVar4 = (int)param_2[1];
            if (*(int *)((longlong)param_2 + 0xc) < (int)(local_b0 + iVar4)) {
              TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
              iVar4 = (int)param_2[1];
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*param_2 + (longlong)iVar4 * 8),local_b8,lVar9 << 3);
            *(uint *)(param_2 + 1) = (int)param_2[1] + uVar1;
            local_b0 = 0;
          }
        }
        uVar8 = uVar8 + 1;
        plVar14 = plVar14 + 1;
      } while (uVar8 != uVar15);
      if (local_b8 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (plVar13 != (longlong *)0x0) {
    FMemory::Free(plVar13);
  }
  return;
}



// FUNCTION 140609cc0 FUN_140609cc0 body=1139 status=ok
// SIG undefined FUN_140609cc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140609cc0(longlong param_1,longlong param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 *_Src;
  ulonglong uVar8;
  uint uVar9;
  uint *puVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auStack_1b8 [32];
  char local_198;
  longlong *local_190;
  int local_188;
  uint uStack_184;
  uint *puStack_180;
  undefined4 local_178;
  uint uStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  longlong *local_168;
  int local_160;
  int local_15c;
  longlong *local_158;
  int iStack_150;
  uint uStack_14c;
  uint *local_148;
  uint uStack_140;
  uint uStack_13c;
  undefined8 local_138;
  longlong *local_130;
  undefined8 uStack_128;
  uint *puStack_120;
  uint uStack_118;
  uint uStack_114;
  undefined8 uStack_110;
  undefined1 local_108 [192];
  undefined1 *local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  *(undefined4 *)(param_2 + 200) = 0;
  local_198 = param_3;
  if (0x7fffffff < *(uint *)(param_2 + 0xcc)) {
    FUN_140615c30(param_2,0);
  }
  plVar11 = (longlong *)0x0;
  uStack_184 = 1;
  local_190 = (longlong *)(param_1 + 0x2b0);
  local_168 = (longlong *)0x0;
  uVar1 = *(uint *)(param_1 + 0x2d8);
  puStack_180 = (uint *)(param_1 + 0x2c0);
  local_15c = 0;
  iVar13 = 0;
  local_188 = 0;
  uStack_174 = 0;
  iStack_170 = 0;
  if (uVar1 != 0) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_180;
    }
    uVar12 = *puVar10;
    iStack_170 = 0;
    local_188 = 0;
    while (uVar12 == 0) {
      lVar7 = (longlong)local_188;
      iStack_170 = iStack_170 + 0x20;
      iVar5 = local_188 + 1;
      bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_188;
      local_188 = iVar5;
      if (bVar3) goto LAB_140609def;
      uVar12 = puVar10[lVar7 + 1];
    }
    uStack_184 = uVar12 - 1 & uVar12 ^ uVar12;
    iVar5 = 0x1f;
    if (uStack_184 != 0) {
      for (; uStack_184 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_184 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_174 = (iStack_170 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uStack_174) {
LAB_140609def:
      uStack_174 = uVar1;
    }
  }
  local_178 = 0xffffffff;
  uVar12 = *(uint *)(param_1 + 0x2d8);
  uStack_128 = CONCAT44(uStack_184,local_188);
  uStack_140 = 0xffffffff;
  uStack_13c = uStack_174;
  local_138 = CONCAT44(uStack_16c,iStack_170);
  uVar9 = uVar12 & 0xffffffe0;
  iStack_150 = local_188;
  uStack_14c = uStack_184;
  if (uVar12 != uVar1) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_180;
    }
    uVar6 = puVar10[(int)uVar12 >> 5] & -1 << ((byte)uVar12 & 0x1f);
    iVar5 = (int)uVar12 >> 5;
    while (uVar6 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_140609eaf;
      uVar6 = puVar10[(longlong)iVar5 + 1];
      iVar5 = iVar5 + 1;
    }
    uVar6 = uVar6 - 1 & uVar6 ^ uVar6;
    iVar5 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uVar6 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uVar12 = (uVar9 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uVar12) {
LAB_140609eaf:
      uVar12 = uVar1;
    }
  }
  iVar5 = 0;
  local_148 = puStack_180;
  local_130 = local_190;
  puStack_120 = puStack_180;
  uStack_110 = local_138;
  local_158 = local_190;
  uStack_118 = uStack_140;
  uStack_114 = uStack_13c;
  while( true ) {
    if ((uStack_13c == uVar12) && (local_148 == puStack_180)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_158 == local_190)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) break;
    lVar7 = *(longlong *)(*local_158 + (longlong)(int)uStack_13c * 0x10);
    if (lVar7 != 0) {
      lVar4 = FUN_142a07000();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        iVar2 = *(int *)(param_2 + 200);
        *(int *)(param_2 + 200) = iVar2 + 1;
        if (*(int *)(param_2 + 0xcc) < iVar2 + 1) {
          TArray<UHierarchicalInstancedStaticMeshComponent_*,TInlineAllocator<24,FDefaultAllocator>_>
          ::ResizeGrow(param_2,iVar2);
        }
        lVar4 = *(longlong *)(param_2 + 0xc0);
        if (*(longlong *)(param_2 + 0xc0) == 0) {
          lVar4 = param_2;
        }
        *(longlong *)(lVar4 + (longlong)iVar2 * 8) = lVar7;
      }
    }
    if ((local_198 != '\0') && (lVar7 != 0)) {
      lVar4 = UUGStartScreenUW::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_160 = iVar13 + 1;
        if (iVar5 < local_160) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_168,iVar13);
          plVar11 = local_168;
          iVar5 = local_15c;
        }
        plVar11[iVar13] = lVar7;
        iVar13 = local_160;
      }
    }
    uStack_140 = uStack_140 & ~uStack_14c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_150);
  }
  if (local_198 != '\0') {
    uVar8 = 0;
    local_48 = (undefined1 *)0x0;
    local_40 = 0;
    uVar15 = (ulonglong)((longlong)(plVar11 + iVar13) + (7 - (longlong)plVar11)) >> 3;
    if (plVar11 + iVar13 < plVar11) {
      uVar15 = uVar8;
    }
    plVar14 = plVar11;
    if (uVar15 != 0) {
      do {
        if (*(longlong *)(*plVar14 + 0x2d8) != 0) {
          FUN_140609cc0(*(longlong *)(*plVar14 + 0x2d8),local_108,1);
          iVar13 = (int)local_40;
          lVar7 = (longlong)(int)local_40;
          if ((int)local_40 != 0) {
            iVar5 = *(int *)(param_2 + 200);
            if (*(int *)(param_2 + 0xcc) < (int)local_40 + iVar5) {
              FUN_140615c30(param_2);
              iVar5 = *(int *)(param_2 + 200);
            }
            _Src = local_108;
            if (local_48 != (undefined1 *)0x0) {
              _Src = local_48;
            }
            lVar4 = *(longlong *)(param_2 + 0xc0);
            if (*(longlong *)(param_2 + 0xc0) == 0) {
              lVar4 = param_2;
            }
            _guard_xfg_dispatch_icall_nop((void *)(lVar4 + (longlong)iVar5 * 8),_Src,lVar7 << 3);
            *(int *)(param_2 + 200) = *(int *)(param_2 + 200) + iVar13;
            local_40 = local_40 & 0xffffffff00000000;
          }
        }
        uVar8 = uVar8 + 1;
        plVar14 = plVar14 + 1;
      } while (uVar8 != uVar15);
      if (local_48 != (undefined1 *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    FMemory::Free(plVar11);
  }
  return;
}



// FUNCTION 14060a140 HeapSortInternal<FClusterBuilder::FRunPair,FIdentityFunctor,TDereferenceWrapper<FClusterBuilder::FRunPair,TLess<FClusterBuilder::FRunPair>_>_> body=338 status=ok
// SIG undefined HeapSortInternal<FClusterBuilder::FRunPair,FIdentityFunctor,TDereferenceWrapper<FClusterBuilder::FRunPair,TLess<FClusterBuilder::FRunPair>_>_>(void)

void AlgoImpl::
     HeapSortInternal<FClusterBuilder::FRunPair,FIdentityFunctor,TDereferenceWrapper<FClusterBuilder::FRunPair,TLess<FClusterBuilder::FRunPair>_>_>
               (undefined8 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  
  iVar5 = (param_2 + -2) / 2;
  if (-1 < iVar5) {
    iVar6 = iVar5 * 2 + 1;
    iVar4 = iVar6;
    iVar8 = iVar5;
joined_r0x00014060a16a:
    do {
      if (iVar6 < param_2) {
        iVar6 = iVar5 * 2;
        iVar7 = iVar6 + 1;
        if (iVar6 + 2 < param_2) {
          if (*(int *)(param_1 + (longlong)iVar6 + 2) < *(int *)(param_1 + iVar7)) {
            iVar7 = iVar6;
          }
          iVar7 = iVar7 + 1;
        }
        piVar1 = (int *)(param_1 + iVar7);
        piVar2 = (int *)(param_1 + iVar5);
        if (*piVar2 < *piVar1) {
          if (piVar2 != piVar1) {
            uVar3 = *(undefined8 *)piVar2;
            *(undefined8 *)piVar2 = *(undefined8 *)piVar1;
            *(undefined8 *)piVar1 = uVar3;
          }
          iVar6 = iVar7 * 2 + 1;
          iVar5 = iVar7;
          goto joined_r0x00014060a16a;
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
            if (*(int *)(param_1 + (longlong)iVar4 + 2) < *(int *)(param_1 + iVar6)) {
              iVar6 = iVar4;
            }
            iVar6 = iVar6 + 1;
          }
          piVar1 = (int *)(param_1 + iVar6);
          piVar2 = (int *)(param_1 + iVar5);
          if (*piVar1 <= *piVar2) break;
          if (piVar2 != piVar1) {
            uVar3 = *(undefined8 *)piVar2;
            *(undefined8 *)piVar2 = *(undefined8 *)piVar1;
            *(undefined8 *)piVar1 = uVar3;
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



// FUNCTION 14060a2a0 FUN_14060a2a0 body=349 status=ok
// SIG undefined FUN_14060a2a0(void)

void FUN_14060a2a0(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  iVar5 = (param_2 + -2) / 2;
  if (-1 < iVar5) {
    iVar6 = iVar5 * 2 + 1;
    iVar1 = iVar6;
    iVar8 = iVar5;
joined_r0x00014060a2ca:
    do {
      if (iVar6 < param_2) {
        iVar6 = iVar5 * 2;
        iVar7 = iVar6 + 1;
        if (iVar6 + 2 < param_2) {
          if (*(int *)(param_1 + (longlong)iVar6 * 2 + 5) <
              *(int *)(param_1 + (longlong)iVar7 * 2 + 1)) {
            iVar7 = iVar6;
          }
          iVar7 = iVar7 + 1;
        }
        puVar10 = param_1 + (longlong)iVar5 * 2;
        puVar9 = param_1 + (longlong)iVar7 * 2;
        if (*(int *)(puVar10 + 1) < *(int *)(puVar9 + 1)) {
          if (puVar10 != puVar9) {
            uVar2 = puVar9[1];
            uVar3 = *puVar10;
            uVar4 = puVar10[1];
            *puVar10 = *puVar9;
            puVar10[1] = uVar2;
            *puVar9 = uVar3;
            puVar9[1] = uVar4;
          }
          iVar6 = iVar7 * 2 + 1;
          iVar5 = iVar7;
          goto joined_r0x00014060a2ca;
        }
      }
      iVar6 = iVar1 + -2;
      iVar5 = iVar8 + -1;
      iVar1 = iVar6;
      iVar8 = iVar5;
    } while (-1 < iVar5);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar9 = param_1 + (longlong)param_2 * 2;
    do {
      if (param_1 != puVar9) {
        uVar2 = puVar9[1];
        uVar3 = *param_1;
        uVar4 = param_1[1];
        *param_1 = *puVar9;
        param_1[1] = uVar2;
        *puVar9 = uVar3;
        puVar9[1] = uVar4;
      }
      iVar5 = 0;
      if (1 < param_2) {
        do {
          iVar1 = iVar5 * 2;
          iVar6 = iVar1 + 1;
          if (iVar1 + 2 < param_2) {
            if (*(int *)(param_1 + (longlong)iVar1 * 2 + 5) <
                *(int *)(param_1 + (longlong)iVar6 * 2 + 1)) {
              iVar6 = iVar1;
            }
            iVar6 = iVar6 + 1;
          }
          puVar11 = param_1 + (longlong)iVar5 * 2;
          puVar10 = param_1 + (longlong)iVar6 * 2;
          if (*(int *)(puVar10 + 1) <= *(int *)(puVar11 + 1)) break;
          if (puVar11 != puVar10) {
            uVar2 = puVar10[1];
            uVar3 = *puVar11;
            uVar4 = puVar11[1];
            *puVar11 = *puVar10;
            puVar11[1] = uVar2;
            *puVar10 = uVar3;
            puVar10[1] = uVar4;
          }
          iVar5 = iVar6;
        } while (iVar6 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar9 = puVar9 + -2;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 14060a400 IntroSortInternal<FClusterBuilder::FRunPair,FIdentityFunctor,TDereferenceWrapper<FClusterBuilder::FRunPair,TLess<FClusterBuilder::FRunPair>_>_> body=607 status=ok
// SIG undefined IntroSortInternal<FClusterBuilder::FRunPair,FIdentityFunctor,TDereferenceWrapper<FClusterBuilder::FRunPair,TLess<FClusterBuilder::FRunPair>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FClusterBuilder::FRunPair,FIdentityFunctor,TDereferenceWrapper<FClusterBuilder::FRunPair,TLess<FClusterBuilder::FRunPair>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  int *piVar4;
  longlong *plVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  longlong local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_1 + (param_2 - 1) * 8;
    fVar10 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar10 = fVar10 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar10 = ::_guard_xfg_dispatch_icall_nop(fVar10);
    local_318 = (undefined4)(longlong)(fVar10 + fVar10);
    ::_guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar5 = &local_328;
    do {
      piVar4 = (int *)*plVar5;
      piVar8 = (int *)plVar5[1];
      lVar1 = plVar5[2];
      local_338._0_4_ = (int)lVar1;
      lVar3 = ((longlong)piVar8 - (longlong)piVar4 >> 3) + 1;
      piVar9 = piVar4;
      if ((int)local_338 != 0) {
LAB_14060a4c0:
        if (8 < lVar3) {
          if (lVar3 < 0) {
            lVar3 = lVar3 + 1;
          }
          piVar4 = piVar9 + (lVar3 >> 1) * 2;
          if (piVar4 != piVar9) {
            uVar2 = *(undefined8 *)piVar4;
            *(undefined8 *)piVar4 = *(undefined8 *)piVar9;
            *(undefined8 *)piVar9 = uVar2;
          }
          piVar6 = piVar8 + 2;
          piVar4 = piVar9;
LAB_14060a4f7:
          piVar4 = piVar4 + 2;
          if (piVar4 <= piVar8) goto code_r0x00014060a500;
          goto LAB_14060a507;
        }
        for (; piVar6 = piVar9, piVar4 = piVar9, piVar9 < piVar8; piVar8 = piVar8 + -2) {
          while (piVar7 = piVar6, piVar4 = piVar4 + 2, piVar4 <= piVar8) {
            piVar6 = piVar4;
            if (*piVar4 <= *piVar7) {
              piVar6 = piVar7;
            }
          }
          if (piVar7 != piVar8) {
            uVar2 = *(undefined8 *)piVar7;
            *(undefined8 *)piVar7 = *(undefined8 *)piVar8;
            *(undefined8 *)piVar8 = uVar2;
          }
        }
        goto LAB_14060a5d8;
      }
LAB_14060a5c9:
      local_338 = lVar1;
      HeapSortInternal<FClusterBuilder::FRunPair,FIdentityFunctor,TDereferenceWrapper<FClusterBuilder::FRunPair,TLess<FClusterBuilder::FRunPair>_>_>
                (piVar4,lVar3,param_3,param_4);
LAB_14060a5d8:
      plVar5 = plVar5 + -3;
    } while (&local_328 <= plVar5);
  }
  return;
code_r0x00014060a500:
  if (*piVar4 <= *piVar9) goto LAB_14060a4f7;
LAB_14060a507:
  do {
    piVar7 = piVar6;
    piVar6 = piVar7 + -2;
    if (piVar6 <= piVar9) break;
  } while (*piVar9 <= *piVar6);
  if (piVar4 <= piVar6) {
    if (piVar4 != piVar6) {
      uVar2 = *(undefined8 *)piVar4;
      *(undefined8 *)piVar4 = *(undefined8 *)piVar6;
      *(undefined8 *)piVar6 = uVar2;
    }
    goto LAB_14060a4f7;
  }
  if (piVar9 != piVar6) {
    uVar2 = *(undefined8 *)piVar9;
    *(undefined8 *)piVar9 = *(undefined8 *)piVar6;
    *(undefined8 *)piVar6 = uVar2;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)piVar6 + (-8 - (longlong)piVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)piVar8 - (longlong)piVar4 & 0xfffffffffffffff8U)) {
    if (piVar4 < piVar8) {
      *plVar5 = (longlong)piVar4;
      plVar5[1] = (longlong)piVar8;
      *(int *)(plVar5 + 2) = (int)local_338;
      plVar5 = plVar5 + 3;
    }
    if (piVar6 <= piVar9 + 2) goto LAB_14060a5d8;
    piVar8 = piVar7 + -4;
    piVar4 = piVar9;
  }
  else {
    if (piVar9 + 2 < piVar6) {
      *plVar5 = (longlong)piVar9;
      plVar5[1] = (longlong)(piVar7 + -4);
      *(int *)(plVar5 + 2) = (int)local_338;
      plVar5 = plVar5 + 3;
    }
    if (piVar8 <= piVar4) goto LAB_14060a5d8;
  }
  lVar3 = ((longlong)piVar8 - (longlong)piVar4 >> 3) + 1;
  piVar9 = piVar4;
  if ((int)local_338 == 0) goto LAB_14060a5c9;
  goto LAB_14060a4c0;
}



// FUNCTION 14060a660 FUN_14060a660 body=637 status=ok
// SIG undefined FUN_14060a660(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14060a660(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  float fVar16;
  undefined1 auStack_368 [48];
  longlong local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_2 * 0x10 + -0x10 + param_1;
    fVar16 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar16 = fVar16 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar16 = _guard_xfg_dispatch_icall_nop(fVar16);
    local_318 = (undefined4)(longlong)(fVar16 + fVar16);
    _guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar10 = &local_328;
    do {
      puVar15 = (undefined8 *)*plVar10;
      puVar13 = (undefined8 *)plVar10[1];
      lVar1 = plVar10[2];
      local_338._0_4_ = (int)lVar1;
      lVar8 = ((longlong)puVar13 - (longlong)puVar15 >> 4) + 1;
      puVar14 = puVar15;
      if ((int)local_338 != 0) {
LAB_14060a730:
        if (8 < lVar8) {
          puVar15 = puVar14 + (lVar8 / 2) * 2;
          if (puVar15 != puVar14) {
            uVar2 = *(undefined4 *)((longlong)puVar14 + 4);
            uVar3 = *(undefined4 *)(puVar14 + 1);
            uVar4 = *(undefined4 *)((longlong)puVar14 + 0xc);
            uVar5 = *puVar15;
            uVar6 = puVar15[1];
            *(undefined4 *)puVar15 = *(undefined4 *)puVar14;
            *(undefined4 *)((longlong)puVar15 + 4) = uVar2;
            *(undefined4 *)(puVar15 + 1) = uVar3;
            *(undefined4 *)((longlong)puVar15 + 0xc) = uVar4;
            *puVar14 = uVar5;
            puVar14[1] = uVar6;
          }
          puVar11 = puVar13 + 2;
          puVar15 = puVar14;
LAB_14060a766:
          puVar9 = puVar15;
          puVar15 = puVar9 + 2;
          if (puVar15 <= puVar13) goto code_r0x00014060a76f;
          goto LAB_14060a780;
        }
        for (; puVar11 = puVar14, puVar15 = puVar14, puVar14 < puVar13; puVar13 = puVar13 + -2) {
          while (puVar9 = puVar11, puVar15 = puVar15 + 2, puVar15 <= puVar13) {
            puVar11 = puVar15;
            if (*(int *)(puVar15 + 1) <= *(int *)(puVar9 + 1)) {
              puVar11 = puVar9;
            }
          }
          if (puVar9 != puVar13) {
            uVar7 = puVar13[1];
            uVar5 = *puVar9;
            uVar6 = puVar9[1];
            *puVar9 = *puVar13;
            puVar9[1] = uVar7;
            *puVar13 = uVar5;
            puVar13[1] = uVar6;
          }
        }
        goto LAB_14060a84b;
      }
LAB_14060a83c:
      local_338 = lVar1;
      FUN_14060a2a0(puVar15,lVar8,param_3,param_4);
LAB_14060a84b:
      plVar10 = plVar10 + -3;
    } while (&local_328 <= plVar10);
  }
  return;
code_r0x00014060a76f:
  if (*(int *)(puVar9 + 3) <= *(int *)(puVar14 + 1)) goto LAB_14060a766;
LAB_14060a780:
  do {
    puVar12 = puVar11;
    puVar11 = puVar12 + -2;
    if (puVar11 <= puVar14) break;
  } while (*(int *)(puVar14 + 1) <= *(int *)(puVar12 + -1));
  if (puVar15 <= puVar11) {
    if (puVar15 != puVar11) {
      uVar2 = *(undefined4 *)((longlong)puVar12 + -0xc);
      uVar3 = *(undefined4 *)(puVar12 + -1);
      uVar4 = *(undefined4 *)((longlong)puVar12 + -4);
      uVar5 = *puVar15;
      uVar6 = puVar9[3];
      *(undefined4 *)puVar15 = *(undefined4 *)puVar11;
      *(undefined4 *)((longlong)puVar9 + 0x14) = uVar2;
      *(undefined4 *)(puVar9 + 3) = uVar3;
      *(undefined4 *)((longlong)puVar9 + 0x1c) = uVar4;
      *puVar11 = uVar5;
      puVar12[-1] = uVar6;
    }
    goto LAB_14060a766;
  }
  if (puVar14 != puVar11) {
    uVar2 = *(undefined4 *)((longlong)puVar12 + -0xc);
    uVar3 = *(undefined4 *)(puVar12 + -1);
    uVar4 = *(undefined4 *)((longlong)puVar12 + -4);
    uVar5 = *puVar14;
    uVar6 = puVar14[1];
    *(undefined4 *)puVar14 = *(undefined4 *)puVar11;
    *(undefined4 *)((longlong)puVar14 + 4) = uVar2;
    *(undefined4 *)(puVar14 + 1) = uVar3;
    *(undefined4 *)((longlong)puVar14 + 0xc) = uVar4;
    *puVar11 = uVar5;
    puVar12[-1] = uVar6;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)puVar11 + (-0x10 - (longlong)puVar14) & 0xfffffffffffffff0U) <
      (longlong)((longlong)puVar13 - (longlong)puVar15 & 0xfffffffffffffff0U)) {
    if (puVar15 < puVar13) {
      *plVar10 = (longlong)puVar15;
      plVar10[1] = (longlong)puVar13;
      *(int *)(plVar10 + 2) = (int)local_338;
      plVar10 = plVar10 + 3;
    }
    if (puVar11 <= puVar14 + 2) goto LAB_14060a84b;
    puVar13 = puVar12 + -4;
    puVar15 = puVar14;
  }
  else {
    if (puVar14 + 2 < puVar11) {
      *plVar10 = (longlong)puVar14;
      plVar10[1] = (longlong)(puVar12 + -4);
      *(int *)(plVar10 + 2) = (int)local_338;
      plVar10 = plVar10 + 3;
    }
    if (puVar13 <= puVar15) goto LAB_14060a84b;
  }
  lVar8 = ((longlong)puVar13 - (longlong)puVar15 >> 4) + 1;
  puVar14 = puVar15;
  if ((int)local_338 == 0) goto LAB_14060a83c;
  goto LAB_14060a730;
}



// FUNCTION 14060a8e0 TArray<FStringFormatArg,FDefaultAllocator> body=145 status=ok
// SIG undefined TArray<FStringFormatArg,FDefaultAllocator>(void)

longlong *
TArray<FStringFormatArg,FDefaultAllocator>::TArray<FStringFormatArg,FDefaultAllocator>
          (longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  *param_1 = 0;
  uVar4 = lVar2 - lVar1 >> 5;
  *(int *)(param_1 + 1) = (int)uVar4;
  if ((int)uVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return param_1;
  }
  ResizeForCopy(param_1,uVar4 & 0xffffffff,0);
  lVar2 = *param_1;
  do {
    FStringFormatArg::FStringFormatArg(lVar2,lVar1);
    lVar2 = lVar2 + 0x20;
    lVar1 = lVar1 + 0x20;
    uVar3 = (int)uVar4 - 1;
    uVar4 = (ulonglong)uVar3;
  } while (uVar3 != 0);
  return param_1;
}



// FUNCTION 14060a980 TSoftClassPtr<AItem> body=167 status=ok
// SIG undefined TSoftClassPtr<AItem>(void)

undefined4 * TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 local_38;
  undefined1 local_30 [24];
  
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  if (0x7fffffff < (uint)param_1[9]) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 6,0);
  }
  if (*(undefined2 **)(param_1 + 6) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 6) = 0;
  }
  param_1[2] = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  local_38 = *(undefined8 *)(param_2 + 4);
  FString::FString(local_30,param_2 + 6);
  FSoftObjectPath::operator=(param_1 + 4,&local_38);
  return param_1;
}



// FUNCTION 14060aaa0 FUN_14060aaa0 body=432 status=ok
// SIG undefined FUN_14060aaa0(void)

undefined8 *
FUN_14060aaa0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  byte bVar5;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_144012e40;
  uVar4 = param_2[1];
  param_1[2] = *param_2;
  param_1[3] = uVar4;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 2);
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 4);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 6) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar3;
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(param_1 + 7,param_2 + 5);
  uVar4 = param_2[0xb];
  param_1[0xc] = param_2[10];
  param_1[0xd] = uVar4;
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)((longlong)param_2 + 100);
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0xe);
  *(undefined1 *)((longlong)param_1 + 0x84) = *(undefined1 *)((longlong)param_2 + 0x74);
  uVar4 = param_3[1];
  param_1[0x11] = *param_3;
  param_1[0x12] = uVar4;
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_3 + 2);
  *(undefined1 *)((longlong)param_1 + 0x9c) = *param_4;
  param_1[0x14] = *(undefined8 *)(param_4 + 4);
  *(undefined1 *)(param_1 + 0x15) = param_4[0xc];
  *(undefined8 *)((longlong)param_1 + 0xac) = *(undefined8 *)(param_4 + 0x10);
  *(undefined8 *)((longlong)param_1 + 0xb4) = *(undefined8 *)(param_4 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)(param_4 + 0x20);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_4 + 0x24);
  *(undefined8 *)((longlong)param_1 + 0xc4) = *(undefined8 *)(param_4 + 0x28);
  *(undefined4 *)((longlong)param_1 + 0xcc) = *(undefined4 *)(param_4 + 0x30);
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_4 + 0x34);
  *(undefined4 *)((longlong)param_1 + 0xd4) = *(undefined4 *)(param_4 + 0x38);
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_4 + 0x3c);
  *(byte *)((longlong)param_1 + 0xdc) =
       *(byte *)((longlong)param_1 + 0xdc) ^
       (*(byte *)((longlong)param_1 + 0xdc) ^ param_4[0x40]) & 1;
  bVar5 = (param_4[0x40] ^ *(byte *)((longlong)param_1 + 0xdc)) & 2 ^
          *(byte *)((longlong)param_1 + 0xdc);
  *(byte *)((longlong)param_1 + 0xdc) = bVar5;
  bVar5 = (param_4[0x40] ^ bVar5) & 4 ^ bVar5;
  *(byte *)((longlong)param_1 + 0xdc) = bVar5;
  bVar5 = (param_4[0x40] ^ bVar5) & 8 ^ bVar5;
  *(byte *)((longlong)param_1 + 0xdc) = bVar5;
  bVar5 = (param_4[0x40] ^ bVar5) & 0x10 ^ bVar5;
  *(byte *)((longlong)param_1 + 0xdc) = bVar5;
  *(byte *)((longlong)param_1 + 0xdc) = (param_4[0x40] ^ bVar5) & 0x20 ^ bVar5;
  return param_1;
}



// FUNCTION 14060ac50 FUN_14060ac50 body=232 status=ok
// SIG undefined FUN_14060ac50(void)

undefined8 * FUN_14060ac50(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 local_38;
  undefined1 local_30 [24];
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 4);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x4c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 8,0);
  }
  if ((undefined2 *)param_1[8] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[8] = 0;
  }
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  local_38 = param_2[7];
  FString::FString(local_30,param_2 + 8);
  FSoftObjectPath::operator=(param_1 + 7,&local_38);
  uVar4 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar4;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 100);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  *(undefined1 *)((longlong)param_1 + 0x74) = *(undefined1 *)((longlong)param_2 + 0x74);
  return param_1;
}



// FUNCTION 14060ad40 FUN_14060ad40 body=472 status=ok
// SIG undefined FUN_14060ad40(void)

undefined8 * FUN_14060ad40(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 local_38;
  undefined1 local_30 [24];
  
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_144012e50;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x6c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xc,0);
  }
  if ((undefined2 *)param_1[0xc] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0xc] = 0;
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (param_3 != 0) {
    uVar3 = *(undefined8 *)(param_3 + 0x30);
    param_1[4] = *(undefined8 *)(param_3 + 0x28);
    param_1[5] = uVar3;
  }
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0xa8);
    uVar6 = *(undefined4 *)(param_2 + 0xf4);
    uVar1 = *(undefined4 *)(param_2 + 0xf8);
    uVar2 = *(undefined4 *)(param_2 + 0xfc);
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0xf0);
    *(undefined4 *)((longlong)param_1 + 0x3c) = uVar6;
    *(undefined4 *)(param_1 + 8) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x44) = uVar2;
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x100);
    *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x104);
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x108);
    local_38 = *(undefined8 *)(param_2 + 0x110);
    FString::FString(local_30,param_2 + 0x118);
    FSoftObjectPath::operator=(param_1 + 0xb,&local_38);
    uVar6 = *(undefined4 *)(param_2 + 0xe4);
    uVar1 = *(undefined4 *)(param_2 + 0xe8);
    uVar2 = *(undefined4 *)(param_2 + 0xec);
    *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe0);
    *(undefined4 *)((longlong)param_1 + 0x74) = uVar6;
    *(undefined4 *)(param_1 + 0xf) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
    cVar4 = FUN_140612c50();
    if ((cVar4 == '\0') && (DAT_1468b616c == '\0')) {
      uVar6 = FUN_140611460(param_2,0);
      *(undefined4 *)(param_1 + 0x10) = uVar6;
      *(undefined1 *)((longlong)param_1 + 0x94) = 1;
    }
    *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)(param_2 + 0x128);
    *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 300);
    if (*(char *)(param_2 + 0x90) == '\x02') {
      iVar5 = -0x80000000;
    }
    else {
      iVar5 = *(int *)(param_2 + 0x94);
      if (*(char *)(param_2 + 0x90) != '\x01') {
        iVar5 = iVar5 + 1;
      }
    }
    *(int *)((longlong)param_1 + 0x8c) = iVar5;
    if (*(char *)(param_2 + 0x98) == '\x02') {
      iVar5 = 0x7fffffff;
    }
    else {
      iVar5 = *(int *)(param_2 + 0x9c);
      if (*(char *)(param_2 + 0x98) == '\x01') {
        iVar5 = iVar5 + 1;
      }
    }
    *(int *)(param_1 + 0x12) = iVar5;
  }
  return param_1;
}



// FUNCTION 14060af20 FUN_14060af20 body=236 status=ok
// SIG undefined FUN_14060af20(void)

undefined8 * FUN_14060af20(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 local_38;
  undefined1 local_30 [24];
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x34)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 5,0);
  }
  if ((undefined2 *)param_1[5] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[5] = 0;
  }
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  local_38 = param_2[4];
  FString::FString(local_30,param_2 + 5);
  FSoftObjectPath::operator=(param_1 + 4,&local_38);
  param_1[7] = param_2[7];
  *(byte *)(param_1 + 8) =
       *(byte *)(param_1 + 8) ^ (*(byte *)(param_1 + 8) ^ *(byte *)(param_2 + 8)) & 1;
  bVar1 = (*(byte *)(param_2 + 8) ^ *(byte *)(param_1 + 8)) & 2 ^ *(byte *)(param_1 + 8);
  *(byte *)(param_1 + 8) = bVar1;
  *(byte *)(param_1 + 8) = (*(byte *)(param_2 + 8) ^ bVar1) & 4 ^ bVar1;
  return param_1;
}



// FUNCTION 14060b010 FUN_14060b010 body=54 status=ok
// SIG undefined FUN_14060b010(void)

undefined8 * FUN_14060b010(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__144011340;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  return param_1;
}



// FUNCTION 14060b050 FUN_14060b050 body=72 status=ok
// SIG undefined FUN_14060b050(void)

undefined8 * FUN_14060b050(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_144010e00;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = &PTR_FUN_144010748;
  return param_1;
}



// FUNCTION 14060b0a0 UGameplayAbilitySet body=43 status=ok
// SIG undefined UGameplayAbilitySet(void)

undefined8 * UGameplayAbilitySet::UGameplayAbilitySet(undefined8 *param_1)

{
  UDataAsset::UDataAsset();
  *param_1 = &PTR_FUN_1440119e8;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 14060b0d0 FUN_14060b0d0 body=209 status=ok
// SIG undefined FUN_14060b0d0(void)

undefined8 * FUN_14060b0d0(undefined8 *param_1)

{
  UMovieSceneSection::UMovieSceneSection();
  *param_1 = &PTR__scalar_deleting_destructor__144012838;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x124)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x23,0);
  }
  if ((undefined2 *)param_1[0x23] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x23] = 0;
  }
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(byte *)(param_1 + 0x26) = *(byte *)(param_1 + 0x26) & 0xfe;
  param_1[0x25] = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  return param_1;
}



// FUNCTION 14060b1b0 UMovieSceneMaterialTrack body=43 status=ok
// SIG undefined UMovieSceneMaterialTrack(void)

undefined8 * UMovieSceneMaterialTrack::UMovieSceneMaterialTrack(undefined8 *param_1)

{
  UMovieSceneTrack::UMovieSceneTrack();
  *param_1 = &PTR__scalar_deleting_destructor__144012b20;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  return param_1;
}



// FUNCTION 14060b1e0 FUN_14060b1e0 body=33 status=ok
// SIG undefined FUN_14060b1e0(void)

undefined8 * FUN_14060b1e0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_144010b80;
  return param_1;
}



// FUNCTION 14060b210 FUN_14060b210 body=87 status=ok
// SIG undefined FUN_14060b210(void)

undefined8 * FUN_14060b210(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142326e40(param_1,uVar1);
  *param_1 = &PTR_FUN_144010758;
  param_1[5] = &PTR_LAB_144010b50;
  *(undefined4 *)(param_1 + 0x2f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  FUN_140590080(param_1 + 0x30);
  return param_1;
}



// FUNCTION 14060b270 FUN_14060b270 body=461 status=ok
// SIG undefined FUN_14060b270(void)

undefined8 * FUN_14060b270(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_res8;
  
  FUN_141781840();
  puVar3 = param_1 + 5;
  *puVar3 = &PTR__purecall_143f740d8;
  plVar2 = (longlong *)FUN_1404cfca0();
  iVar1 = (int)plVar2[1];
  *(int *)(plVar2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)plVar2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar1);
  }
  local_res8 = 0;
  *(undefined8 **)(*plVar2 + (longlong)iVar1 * 8) = puVar3;
  *param_1 = &PTR_FUN_144011080;
  *puVar3 = &PTR_FUN_1440112f8;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 2;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 2;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 2;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 2;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x28] = &PTR_FUN_144010748;
  *(undefined1 *)((longlong)param_1 + 0x15b) = 0;
  *(undefined2 *)(param_1 + 0x2b) = 0x202;
  *(byte *)((longlong)param_1 + 0x15a) = *(byte *)((longlong)param_1 + 0x15a) & 0xe5 | 5;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"FaceFXAudioComponent",1);
  uVar5 = *puVar3;
  uVar4 = FUN_140618700();
  uVar5 = FUN_141752410(param_1,uVar5,uVar4,uVar4,1,0,0);
  param_1[0x13] = uVar5;
  return param_1;
}



// FUNCTION 14060b440 FUN_14060b440 body=106 status=ok
// SIG undefined FUN_14060b440(void)

undefined8 * FUN_14060b440(undefined8 *param_1)

{
  FUN_142326e40();
  *param_1 = &PTR_FUN_1440115c0;
  param_1[5] = &PTR_LAB_1440119b8;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  return param_1;
}



// FUNCTION 14060b4b0 FUN_14060b4b0 body=68 status=ok
// SIG undefined FUN_14060b4b0(void)

undefined8 * FUN_14060b4b0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__144011ed8;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  return param_1;
}



// FUNCTION 14060b500 FUN_14060b500 body=274 status=ok
// SIG undefined FUN_14060b500(void)

undefined8 * FUN_14060b500(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  void *_Src;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 local_28 [8];
  longlong *local_20;
  
  UInterpTrack::UInterpTrack();
  *param_1 = &PTR__scalar_deleting_destructor__144012150;
  param_1[5] = &PTR_GetPoolName_1440124c0;
  param_1[6] = &PTR_SetMonitoring_143fcc158;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  uVar6 = FUN_140618db0();
  param_1[9] = uVar6;
  uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_28,L"FaceFX Track",L"FaceFX",L"MatineeFaceFXTrack");
  puVar7 = (undefined8 *)FText::ToString(uVar6);
  puVar1 = param_1 + 0xb;
  if (puVar1 != puVar7) {
    iVar4 = *(int *)(puVar7 + 1);
    _Src = (void *)*puVar7;
    *(int *)(param_1 + 0xc) = iVar4;
    if ((iVar4 == 0) && (*(int *)((longlong)param_1 + 100) == 0)) {
      *(undefined4 *)((longlong)param_1 + 100) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar1,iVar4);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar4 * 2);
    }
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_20 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar3 = (int *)((longlong)local_20 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 14060b620 FUN_14060b620 body=71 status=ok
// SIG undefined FUN_14060b620(void)

undefined8 * FUN_14060b620(undefined8 *param_1)

{
  FUN_1424e0120();
  *param_1 = &PTR__scalar_deleting_destructor__1440125a0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  return param_1;
}



// FUNCTION 14060b670 FUN_14060b670 body=68 status=ok
// SIG undefined FUN_14060b670(void)

undefined8 * FUN_14060b670(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__144011c60;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  return param_1;
}



// FUNCTION 14060b6c0 ~TArray<FMiniMapEntry,FDefaultAllocator> body=95 status=ok
// SIG undefined ~TArray<FMiniMapEntry,FDefaultAllocator>(void)

void TArray<FMiniMapEntry,FDefaultAllocator>::~TArray<FMiniMapEntry,FDefaultAllocator>
               (longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x28);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 9;
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



// FUNCTION 14060b720 ~TArray<FRigUnit_MultiFABRIK_BoneWorkingData,TSizedDefaultAllocator<32>_> body=95 status=ok
// SIG undefined ~TArray<FRigUnit_MultiFABRIK_BoneWorkingData,TSizedDefaultAllocator<32>_>(void)

void TArray<FRigUnit_MultiFABRIK_BoneWorkingData,TSizedDefaultAllocator<32>_>::
     ~TArray<FRigUnit_MultiFABRIK_BoneWorkingData,TSizedDefaultAllocator<32>_>(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x38);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0xb;
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



// FUNCTION 14060b780 FUN_14060b780 body=183 status=ok
// SIG undefined FUN_14060b780(void)

void FUN_14060b780(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    puVar4 = (undefined8 *)(lVar1 + 0x28);
    do {
      iVar5 = *(int *)(puVar4 + 1);
      plVar2 = (longlong *)*puVar4;
      if (iVar5 != 0) {
        do {
          if (*plVar2 != 0) {
            FMemory::Free();
          }
          plVar2 = plVar2 + 2;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        plVar2 = (longlong *)*puVar4;
      }
      if (plVar2 != (longlong *)0x0) {
        FMemory::Free(plVar2);
      }
      puVar4[-3] = &PTR_FUN_144010748;
      puVar4 = puVar4 + 7;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 14060b840 ~TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=100 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14060b8b0 FUN_14060b8b0 body=98 status=ok
// SIG undefined FUN_14060b8b0(void)

void FUN_14060b8b0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x30);
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x28);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_144010748;
  return;
}



// FUNCTION 14060b920 FUN_14060b920 body=141 status=ok
// SIG undefined FUN_14060b920(void)

undefined8 * FUN_14060b920(void)

{
  DWORD DVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x40);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[1] = 0;
    *puVar2 = &PTR_FUN_1440104d0;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(puVar2 + 2) = DVar1;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    *(undefined4 *)(puVar2 + 7) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 1;
    *puVar2 = &PTR_FUN_1440104d8;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14060b9e0 FUN_14060b9e0 body=43 status=ok
// SIG undefined FUN_14060b9e0(void)

undefined8 * FUN_14060b9e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14060ba10 `scalar_deleting_destructor' body=72 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FAnimNode_Base::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_ReadLocalVoiceData_1440104f8;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14060ba60 FUN_14060ba60 body=114 status=ok
// SIG undefined FUN_14060ba60(void)

undefined8 * FUN_14060ba60(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_ReadLocalVoiceData_1440104f8;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 14060bae0 FUN_14060bae0 body=72 status=ok
// SIG undefined FUN_14060bae0(void)

undefined8 * FUN_14060bae0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 14060bb30 FUN_14060bb30 body=72 status=ok
// SIG undefined FUN_14060bb30(void)

undefined8 * FUN_14060bb30(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143fcdb48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 14060bb80 `scalar_deleting_destructor' body=128 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FSkeletalAnimationTrackData::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FDynamicClassStaticData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 1,0);
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143fcdb88;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 14060bc00 FUN_14060bc00 body=43 status=ok
// SIG undefined FUN_14060bc00(void)

undefined8 * FUN_14060bc00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144010748;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14060bc30 FUN_14060bc30 body=68 status=ok
// SIG undefined FUN_14060bc30(void)

undefined8 * FUN_14060bc30(undefined8 *param_1,uint param_2)

{
  FMemStackBase::FreeChunks(param_1 + 3,0);
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14060bc80 FUN_14060bc80 body=43 status=ok
// SIG undefined FUN_14060bc80(void)

undefined8 * FUN_14060bc80(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14060bcb0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UTribeDanceMap::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>::
  ~TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 14060bd00 FUN_14060bd00 body=138 status=ok
// SIG undefined FUN_14060bd00(void)

longlong FUN_14060bd00(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  
  *(undefined ***)(param_1 + 0x48) = &PTR_FUN_144010748;
  iVar2 = *(int *)(param_1 + 0x30);
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x28);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 14060bd90 FUN_14060bd90 body=64 status=ok
// SIG undefined FUN_14060bd90(void)

longlong FUN_14060bd90(longlong param_1,ulonglong param_2)

{
  FUN_14060b780(param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14060bdd0 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UTTLInteractUIComponent::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FMemory::Free();
  }
  FUN_140591180(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x138);
  }
  return param_1;
}



// FUNCTION 14060be20 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UMovieSceneAtomTrack::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x38);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 14060be70 FUN_14060be70 body=67 status=ok
// SIG undefined FUN_14060be70(void)

longlong FUN_14060be70(longlong param_1,ulonglong param_2)

{
  FUN_140591060(param_1 + 0x180);
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1a0);
  }
  return param_1;
}



// FUNCTION 14060bec0 FUN_14060bec0 body=217 status=ok
// SIG undefined FUN_14060bec0(void)

longlong FUN_14060bec0(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x140) = &PTR_FUN_144010748;
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x78);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x60);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x48);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x30);
  FUN_1404bf750(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x180);
  }
  return param_1;
}



// FUNCTION 14060bfa0 FUN_14060bfa0 body=102 status=ok
// SIG undefined FUN_14060bfa0(void)

longlong FUN_14060bfa0(longlong param_1,ulonglong param_2)

{
  TArray<FMiniMapEntry,FDefaultAllocator>::~TArray<FMiniMapEntry,FDefaultAllocator>(param_1 + 0x198)
  ;
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1b8);
  }
  return param_1;
}



// FUNCTION 14060c010 `scalar_deleting_destructor' body=126 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UDatasmithAssetUserData::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  FUN_14060f040(param_1 + 0x28,0);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 14060c090 `scalar_deleting_destructor' body=93 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UMatineeTrackAtomSelector::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TArray<FRigUnit_MultiFABRIK_BoneWorkingData,TSizedDefaultAllocator<32>_>::
  ~TArray<FRigUnit_MultiFABRIK_BoneWorkingData,TSizedDefaultAllocator<32>_>(param_1 + 0x70);
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 14060c0f0 `scalar_deleting_destructor' body=96 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong ULocalizedOverlays::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 14060c150 `scalar_deleting_destructor' body=126 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UDatasmithAssetUserData::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  FUN_14060f290(param_1 + 0x28,0);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 14060c1d0 FUN_14060c1d0 body=349 status=ok
// SIG undefined FUN_14060c1d0(void)

uint FUN_14060c1d0(longlong *param_1,float param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int iVar3;
  longlong lVar4;
  float *pfVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar9;
  undefined4 uStack_84;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  float local_40;
  byte local_3c;
  undefined4 local_38;
  ulonglong uVar8;
  
  local_3c = local_3c & 0xfc;
  uVar6 = 0;
  uVar7 = 0;
  local_58 = 0;
  local_38 = 0;
  local_50 = 0;
  local_48 = 0;
  local_68 = 0xffffffff;
  local_64 = 0;
  if (0 < (int)param_1[0xf]) {
    pfVar5 = (float *)(param_1[0xe] + 0x48);
    uVar8 = uVar6;
    do {
      uVar7 = (uint)uVar8;
      if (param_2 < *pfVar5 || param_2 == *pfVar5) break;
      uVar7 = uVar7 + 1;
      uVar8 = (ulonglong)uVar7;
      uVar6 = uVar6 + 1;
      pfVar5 = pfVar5 + 0x16;
    } while ((longlong)uVar6 < (longlong)(int)param_1[0xf]);
  }
  iVar3 = (int)param_1[0xf];
  *(int *)(param_1 + 0xf) = iVar3 + 1;
  local_40 = param_2;
  if (*(int *)((longlong)param_1 + 0x7c) < iVar3 + 1) {
    TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(param_1 + 0xe,iVar3);
  }
  lVar9 = (longlong)(int)uVar7 * 0x58;
  _guard_xfg_dispatch_icall_nop
            ((void *)(param_1[0xe] + lVar9 + 0x58),(void *)(param_1[0xe] + lVar9),
             (longlong)(int)(iVar3 - uVar7) * 0x58);
  lVar4 = param_1[0xe];
  puVar1 = (undefined4 *)(lVar9 + lVar4);
  *puVar1 = 0xffffffff;
  puVar1[1] = uStack_84;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1 = (undefined4 *)(lVar9 + 0x10 + lVar4);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(lVar4 + 0x20 + lVar9,&local_68);
  pbVar2 = (byte *)(lVar9 + 0x4c + lVar4);
  *pbVar2 = *pbVar2 & 0xfc;
  *(float *)(lVar9 + 0x48 + lVar4) = local_40;
  pbVar2 = (byte *)(lVar9 + 0x4c + lVar4);
  *pbVar2 = *pbVar2 | local_3c & 3;
  *(undefined4 *)(lVar9 + 0x50 + lVar4) = local_38;
  (**(code **)(*param_1 + 0x2b8))(param_1,uVar7,param_3);
  if (local_50 != 0) {
    FMemory::Free();
  }
  return uVar7;
}



// FUNCTION 14060c330 FUN_14060c330 body=123 status=ok
// SIG undefined FUN_14060c330(void)

void FUN_14060c330(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x198);
  lVar1 = lVar2 + (longlong)*(int *)(param_1 + 0x1a0) * 0x48;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x48) {
    (**(code **)(*param_2 + 0x38))(param_2,lVar2 + 0x38,0,0);
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  return;
}



// FUNCTION 14060c3b0 AddSection body=70 status=ok
// SIG undefined AddSection(void)

void UMovieSceneGeometryCacheTrack::AddSection(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = iVar1 + 1;
  if (*(int *)(param_1 + 100) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
              ((longlong *)(param_1 + 0x58),iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar1 * 8) = param_2;
  return;
}



// FUNCTION 14060c400 FUN_14060c400 body=504 status=ok
// SIG undefined FUN_14060c400(void)

void FUN_14060c400(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  int iVar12;
  float fVar13;
  float extraout_XMM0_Da;
  float fVar14;
  undefined8 local_38;
  undefined1 local_30 [40];
  
  plVar9 = (longlong *)(**(code **)(*param_1 + 0x2e8))();
  if (plVar9 == (longlong *)0x0) {
LAB_14060c470:
    plVar9 = (longlong *)0x0;
  }
  else {
    lVar10 = FUN_140618300();
    if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
        lVar10 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_14060c470;
  }
  *(undefined4 *)(plVar9 + 0x20) = param_3[8];
  *(undefined4 *)((longlong)plVar9 + 0x104) = param_3[9];
  *(undefined4 *)(plVar9 + 0x21) = param_3[10];
  local_38 = *(undefined8 *)(param_3 + 0xc);
  FString::FString(local_30,param_3 + 0xe);
  FSoftObjectPath::operator=(plVar9 + 0x22,&local_38);
  lVar10 = *(longlong *)(param_3 + 6);
  plVar9[0x1e] = *(longlong *)(param_3 + 4);
  plVar9[0x1f] = lVar10;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *(undefined4 *)(plVar9 + 0x1c) = *param_3;
  *(undefined4 *)((longlong)plVar9 + 0xe4) = uVar3;
  *(undefined4 *)(plVar9 + 0x1d) = uVar4;
  *(undefined4 *)((longlong)plVar9 + 0xec) = uVar5;
  fVar13 = (float)FUN_140611460(plVar9,0);
  fVar14 = fVar13;
  if (((1e-08 < ABS(fVar13)) && ((char)plVar9[0x12] != '\x02')) && ((char)plVar9[0x13] != '\x02')) {
    uVar11 = UMovieScene::GetPrivateStaticClass();
    lVar10 = UObjectBaseUtility::GetTypedOuter(plVar9,uVar11);
    fVar14 = extraout_XMM0_Da;
    if (lVar10 != 0) {
      dVar2 = ((double)(fVar13 - (*(float *)((longlong)plVar9 + 300) + *(float *)(plVar9 + 0x25))) *
              (double)(int)*(undefined8 *)(lVar10 + 0xb8)) /
              (double)(int)((ulonglong)*(undefined8 *)(lVar10 + 0xb8) >> 0x20);
      fVar14 = 0.0;
      lVar10 = (longlong)dVar2;
      if ((lVar10 != -0x8000000000000000) &&
         (fVar14 = SUB84((double)lVar10,0), (double)lVar10 != dVar2)) {
        auVar1._8_4_ = SUB84(dVar2,0);
        auVar1._0_8_ = dVar2;
        auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
        uVar8 = movmskpd(0,auVar1);
        dVar2 = (double)(longlong)(lVar10 - (ulonglong)(uVar8 & 1));
      }
      iVar12 = (int)dVar2;
      if (0 < iVar12) goto LAB_14060c5a3;
    }
  }
  iVar12 = 0;
LAB_14060c5a3:
  lVar10 = *plVar9;
  uVar7 = (**(code **)(*param_1 + 0x2d0))(fVar14);
  (**(code **)(lVar10 + 0x2b0))(plVar9,param_1 + 0xb,*param_2,iVar12,uVar7);
                    /* WARNING: Could not recover jumptable at 0x00014060c5f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2e0))(param_1,plVar9);
  return;
}



// FUNCTION 14060c610 FUN_14060c610 body=34 status=ok
// SIG undefined FUN_14060c610(void)

void FUN_14060c610(longlong param_1)

{
  FUN_1417502d0();
  *(byte *)(param_1 + 0x15a) = *(byte *)(param_1 + 0x15a) & 0xfb;
  FUN_1406157b0(param_1);
  return;
}



// FUNCTION 14060c640 FUN_14060c640 body=57 status=ok
// SIG undefined FUN_14060c640(void)

void FUN_14060c640(longlong param_1,undefined8 *param_2)

{
  FPoseLinkBase::CacheBones(param_1 + 0x30);
  FUN_140613440(param_1,*param_2);
  FUN_14060ff30(param_1,*param_2);
  return;
}



// FUNCTION 14060c680 FUN_14060c680 body=4075 status=ok
// SIG undefined FUN_14060c680(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14060c680(longlong *param_1,int param_2)

{
  void *pvVar1;
  undefined1 auVar2 [16];
  void *pvVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ulonglong uVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  float *pfVar15;
  longlong lVar16;
  longlong *plVar17;
  undefined1 *puVar18;
  wchar_t *pwVar19;
  longlong lVar20;
  float *pfVar21;
  int iVar22;
  wchar_t *pwVar23;
  longlong lVar24;
  bool bVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  int local_res10 [2];
  undefined1 auStack_248 [32];
  longlong local_228;
  undefined8 local_220;
  longlong local_218;
  int local_210;
  int local_208 [4];
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  float *local_1e8;
  float *pfStack_1e0;
  float *local_1d8;
  float *pfStack_1d0;
  undefined4 local_1c8;
  undefined1 local_1c0 [16];
  longlong local_1b0;
  undefined1 local_1a0 [8];
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined1 local_158 [32];
  undefined1 local_138 [16];
  longlong local_128 [2];
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined1 local_108 [8];
  undefined8 uStack_100;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  local_res10[0] = param_2;
  FBoneContainer::GetParentBoneIndex(param_1[2],local_208,local_res10);
  if (*(char *)((longlong)local_208[0] + param_1[3]) == '\0') {
    FUN_14060c680(param_1,local_208[0]);
  }
  fVar43 = fRam0000000146855b88;
  fVar42 = fRam0000000146855b84;
  fVar36 = _DAT_146855b80;
  fVar65 = fRam0000000146855ab8;
  fVar64 = fRam0000000146855ab4;
  fVar63 = _DAT_146855ab0;
  pfVar21 = (float *)((longlong)local_208[0] * 0x30 + *param_1);
  pfVar15 = (float *)((longlong)local_res10[0] * 0x30 + *param_1);
  auVar26 = *(undefined1 (*) [16])(pfVar21 + 8);
  fVar4 = auVar26._0_4_;
  fVar55 = auVar26._4_4_;
  fVar5 = auVar26._8_4_;
  fVar7 = auVar26._12_4_;
  auVar2 = *(undefined1 (*) [16])(pfVar15 + 8);
  fVar52 = auVar2._0_4_;
  fVar56 = auVar2._4_4_;
  fVar6 = auVar2._8_4_;
  auVar26 = minps(auVar2,auVar26);
  auVar27._4_4_ = -(uint)(auVar26._4_4_ < fRam0000000146855b84);
  auVar27._0_4_ = -(uint)(auVar26._0_4_ < _DAT_146855b80);
  auVar27._8_4_ = -(uint)(auVar26._8_4_ < fRam0000000146855b88);
  auVar27._12_4_ = -(uint)(auVar26._12_4_ < fRam0000000146855b8c);
  iVar10 = movmskps(local_res10[0],auVar27);
  if (iVar10 == 0) {
    fVar63 = *pfVar21;
    fVar64 = pfVar21[1];
    fVar65 = pfVar21[2];
    fVar36 = pfVar21[3];
    fVar42 = *pfVar15;
    fVar43 = pfVar15[1];
    fVar45 = pfVar15[2];
    fVar46 = pfVar15[3];
    fVar47 = fVar4 * pfVar15[4];
    fVar44 = fVar55 * pfVar15[5];
    fVar37 = fVar5 * pfVar15[6];
    fVar31 = fVar7 * pfVar15[7];
    local_118 = fVar46 * fVar63 * _DAT_146855af0 + fVar36 * fVar42 +
                fVar64 * fVar45 * _DAT_146855ae0 + fVar65 * fVar43 * _DAT_146855ad0;
    fStack_114 = fVar45 * fVar63 * fRam0000000146855af4 + fVar36 * fVar43 +
                 fVar64 * fVar46 * fRam0000000146855ae4 + fVar65 * fVar42 * fRam0000000146855ad4;
    fStack_110 = fVar43 * fVar63 * fRam0000000146855af8 + fVar36 * fVar45 +
                 fVar64 * fVar42 * fRam0000000146855ae8 + fVar65 * fVar46 * fRam0000000146855ad8;
    fStack_10c = fVar42 * fVar63 * fRam0000000146855afc + fVar36 * fVar46 +
                 fVar64 * fVar43 * fRam0000000146855aec + fVar65 * fVar45 * fRam0000000146855adc;
    fVar42 = fVar37 * fVar64 - fVar44 * fVar65;
    fVar43 = fVar47 * fVar65 - fVar37 * fVar63;
    fVar45 = fVar44 * fVar63 - fVar47 * fVar64;
    fVar46 = fVar31 * fVar36 - fVar31 * fVar36;
    fVar42 = fVar42 + fVar42;
    fVar43 = fVar43 + fVar43;
    fVar45 = fVar45 + fVar45;
    fVar46 = fVar46 + fVar46;
    local_108._4_4_ = (fVar42 * fVar65 - fVar45 * fVar63) + fVar43 * fVar36 + fVar44 + pfVar21[5];
    local_108._0_4_ = (fVar45 * fVar64 - fVar43 * fVar65) + fVar42 * fVar36 + fVar47 + pfVar21[4];
    uStack_100._0_4_ = (fVar43 * fVar63 - fVar42 * fVar64) + fVar45 * fVar36 + fVar37 + pfVar21[6];
    uStack_100._4_4_ = (fVar46 * fVar36 - fVar46 * fVar36) + fVar46 * fVar36 + fVar31 + pfVar21[7];
  }
  else {
    fVar45 = *pfVar21;
    fVar46 = pfVar21[1];
    fVar47 = pfVar21[2];
    fVar44 = pfVar21[3];
    fVar31 = fVar46 + fVar46;
    fVar33 = fVar47 + fVar47;
    fVar40 = fVar45 * (fVar45 + fVar45);
    fVar37 = fVar44 * (fVar45 + fVar45);
    fVar60 = (fVar44 * fVar33 + fVar45 * fVar31) * fVar4;
    fVar61 = (fVar37 + fVar46 * fVar33) * fVar55;
    fVar62 = (fVar44 * fVar31 + fVar45 * fVar33) * fVar5;
    fVar48 = fVar55 * (fVar45 * fVar31 - fVar44 * fVar33);
    fVar50 = fVar5 * (fVar46 * fVar33 - fVar37);
    fVar53 = fVar4 * (fVar45 * fVar33 - fVar44 * fVar31);
    fVar45 = pfVar21[4];
    fVar44 = pfVar21[5];
    fVar37 = pfVar21[6];
    fVar28 = (float)((uint)((_DAT_146855ab0 - (fVar47 * fVar33 + fVar46 * fVar31)) * fVar4) &
                    _DAT_146855ac0);
    fVar32 = (float)((uint)((fRam0000000146855ab4 - (fVar47 * fVar33 + fVar40)) * fVar55) &
                    uRam0000000146855ac4);
    fVar34 = (float)((uint)((fRam0000000146855ab8 - (fVar46 * fVar31 + fVar40)) * fVar5) &
                    uRam0000000146855ac8);
    fVar35 = (float)((uint)((fRam0000000146855abc - (fVar40 + fVar40)) * fVar7) &
                    uRam0000000146855acc);
    fVar46 = *pfVar15;
    fVar47 = pfVar15[1];
    fVar31 = pfVar15[2];
    fVar33 = pfVar15[3];
    fVar38 = fVar47 + fVar47;
    fVar39 = fVar31 + fVar31;
    fVar41 = fVar46 * (fVar46 + fVar46);
    fVar40 = (fVar46 + fVar46) * fVar33;
    fVar57 = (fVar39 * fVar33 + fVar46 * fVar38) * fVar52;
    fVar58 = (fVar40 + fVar47 * fVar39) * fVar56;
    fVar59 = (fVar38 * fVar33 + fVar46 * fVar39) * fVar6;
    fVar49 = fVar56 * (fVar46 * fVar38 - fVar39 * fVar33);
    fVar51 = fVar6 * (fVar47 * fVar39 - fVar40);
    fVar54 = fVar52 * (fVar46 * fVar39 - fVar38 * fVar33);
    fVar33 = (float)((uint)((_DAT_146855ab0 - (fVar31 * fVar39 + fVar47 * fVar38)) * fVar52) &
                    _DAT_146855ac0);
    fVar40 = (float)((uint)((fRam0000000146855ab4 - (fVar31 * fVar39 + fVar41)) * fVar56) &
                    uRam0000000146855ac4);
    fVar38 = (float)((uint)((fRam0000000146855ab8 - (fVar47 * fVar38 + fVar41)) * fVar6) &
                    uRam0000000146855ac8);
    fVar39 = (float)((uint)((fRam0000000146855abc - (fVar41 + fVar41)) * auVar2._12_4_) &
                    uRam0000000146855acc);
    fVar46 = pfVar15[4];
    fVar47 = pfVar15[5];
    fVar31 = pfVar15[6];
    local_198 = fVar57 * fVar48 + fVar33 * fVar28 + fVar54 * fVar62 + fVar39 * fVar45;
    fStack_194 = fVar57 * fVar32 + fVar33 * fVar60 + fVar54 * fVar50 + fVar39 * fVar44;
    fStack_190 = fVar57 * fVar61 + fVar33 * fVar53 + fVar54 * fVar34 + fVar39 * fVar37;
    fStack_18c = fVar57 * fVar35 + fVar33 * fVar35 + fVar54 * fVar35 + fVar39 * fRam0000000146855abc
    ;
    local_188 = fVar40 * fVar48 + fVar49 * fVar28 + fVar58 * fVar62 + fVar39 * fVar45;
    fStack_184 = fVar40 * fVar32 + fVar49 * fVar60 + fVar58 * fVar50 + fVar39 * fVar44;
    fStack_180 = fVar40 * fVar61 + fVar49 * fVar53 + fVar58 * fVar34 + fVar39 * fVar37;
    fStack_17c = fVar40 * fVar35 + fVar49 * fVar35 + fVar58 * fVar35 + fVar39 * fRam0000000146855abc
    ;
    local_178 = fVar51 * fVar48 + fVar59 * fVar28 + fVar38 * fVar62 + fVar39 * fVar45;
    fStack_174 = fVar51 * fVar32 + fVar59 * fVar60 + fVar38 * fVar50 + fVar39 * fVar44;
    fStack_170 = fVar51 * fVar61 + fVar59 * fVar53 + fVar38 * fVar34 + fVar39 * fVar37;
    fStack_16c = fVar51 * fVar35 + fVar59 * fVar35 + fVar38 * fVar35 + fVar39 * fRam0000000146855abc
    ;
    local_168 = fVar47 * fVar48 + fVar46 * fVar28 + fVar31 * fVar62 + fRam0000000146855abc * fVar45;
    fStack_164 = fVar47 * fVar32 + fVar46 * fVar60 + fVar31 * fVar50 + fRam0000000146855abc * fVar44
    ;
    fStack_160 = fVar47 * fVar61 + fVar46 * fVar53 + fVar31 * fVar34 + fRam0000000146855abc * fVar37
    ;
    fStack_15c = fVar47 * fVar35 + fVar46 * fVar35 + fVar31 * fVar35 +
                 fRam0000000146855abc * fRam0000000146855abc;
    FMatrix::RemoveScaling(&local_198);
    fVar63 = (float)(-(uint)(fVar36 <= fVar52 * fVar4) & (_DAT_146855b70 ^ (uint)fVar63) ^
                    _DAT_146855b70);
    fVar64 = (float)(-(uint)(fVar42 <= fVar56 * fVar55) & (uRam0000000146855b74 ^ (uint)fVar64) ^
                    uRam0000000146855b74);
    fVar65 = (float)(-(uint)(fVar43 <= fVar6 * fVar5) & (uRam0000000146855b78 ^ (uint)fVar65) ^
                    uRam0000000146855b78);
    local_198 = local_198 * fVar63;
    fStack_194 = fStack_194 * fVar63;
    fStack_190 = fStack_190 * fVar63;
    fStack_184 = fStack_184 * fVar64;
    fStack_180 = fStack_180 * fVar64;
    local_188 = local_188 * fVar64;
    fStack_174 = fStack_174 * fVar65;
    fStack_170 = fStack_170 * fVar65;
    local_178 = local_178 * fVar65;
    FQuat::FQuat(&local_1f8,&local_198);
    local_1c8 = 0x322bcc77;
    auVar29._0_4_ = (float)local_1f8 * (float)local_1f8 + (float)uStack_1f0 * (float)uStack_1f0;
    auVar29._4_4_ = local_1f8._4_4_ * local_1f8._4_4_ + uStack_1f0._4_4_ * uStack_1f0._4_4_;
    auVar29._8_4_ = (float)uStack_1f0 * (float)uStack_1f0 + (float)local_1f8 * (float)local_1f8;
    auVar29._12_4_ = uStack_1f0._4_4_ * uStack_1f0._4_4_ + local_1f8._4_4_ * local_1f8._4_4_;
    fVar42 = auVar29._4_4_ + auVar29._0_4_;
    fVar43 = auVar29._8_4_ + auVar29._4_4_;
    fVar45 = auVar29._12_4_ + auVar29._8_4_;
    fVar46 = auVar29._0_4_ + auVar29._12_4_;
    auVar26._4_4_ = fVar43;
    auVar26._0_4_ = fVar42;
    auVar26._8_4_ = fVar45;
    auVar26._12_4_ = fVar46;
    auVar26 = rsqrtps(auVar29,auVar26);
    fVar63 = auVar26._0_4_;
    fVar64 = auVar26._4_4_;
    fVar65 = auVar26._8_4_;
    fVar36 = auVar26._12_4_;
    fVar63 = (_DAT_146855b50 - fVar63 * fVar63 * fVar42 * _DAT_146855b50) * fVar63 + fVar63;
    fVar64 = (fRam0000000146855b54 - fVar64 * fVar64 * fVar43 * fRam0000000146855b54) * fVar64 +
             fVar64;
    fVar65 = (fRam0000000146855b58 - fVar65 * fVar65 * fVar45 * fRam0000000146855b58) * fVar65 +
             fVar65;
    fVar36 = (fRam0000000146855b5c - fVar36 * fVar36 * fVar46 * fRam0000000146855b5c) * fVar36 +
             fVar36;
    local_108._4_4_ = fStack_164;
    local_108._0_4_ = local_168;
    uStack_100._0_4_ = fStack_160;
    local_118 = (float)(((uint)(((_DAT_146855b50 - fVar63 * fVar63 * fVar42 * _DAT_146855b50) *
                                 fVar63 + fVar63) * (float)local_1f8) ^ _DAT_146855b40) &
                        -(uint)(1e-08 <= fVar42) ^ _DAT_146855b40);
    fStack_114 = (float)(((uint)(((fRam0000000146855b54 -
                                  fVar64 * fVar64 * fVar43 * fRam0000000146855b54) * fVar64 + fVar64
                                 ) * local_1f8._4_4_) ^ uRam0000000146855b44) &
                         -(uint)(1e-08 <= fVar43) ^ uRam0000000146855b44);
    fStack_110 = (float)(((uint)(((fRam0000000146855b58 -
                                  fVar65 * fVar65 * fVar45 * fRam0000000146855b58) * fVar65 + fVar65
                                 ) * (float)uStack_1f0) ^ uRam0000000146855b48) &
                         -(uint)(1e-08 <= fVar45) ^ uRam0000000146855b48);
    fStack_10c = (float)(((uint)(((fRam0000000146855b5c -
                                  fVar36 * fVar36 * fVar46 * fRam0000000146855b5c) * fVar36 + fVar36
                                 ) * uStack_1f0._4_4_) ^ uRam0000000146855b4c) &
                         -(uint)(1e-08 <= fVar46) ^ uRam0000000146855b4c);
    uStack_100._4_4_ = 0;
  }
  fStack_ec = auVar2._12_4_ * fVar7;
  fStack_f0 = fVar6 * fVar5;
  fStack_f4 = fVar56 * fVar55;
  local_f8 = fVar52 * fVar4;
  cVar9 = FUN_140618120(&local_118);
  if (((cVar9 != '\0') || (cVar9 = FUN_140618120(local_108), cVar9 != '\0')) ||
     (cVar9 = FUN_140618120(&local_f8), cVar9 != '\0')) {
    lVar16 = (longlong)local_res10[0] * 0x30 + *param_1;
    cVar9 = FUN_140618120(lVar16);
    if (cVar9 == '\0') {
      cVar9 = FUN_140618120(lVar16 + 0x10);
      if (cVar9 == '\0') {
        cVar9 = FUN_140618120(lVar16 + 0x20);
        bVar25 = cVar9 != '\0';
      }
      else {
        bVar25 = true;
      }
    }
    else {
      bVar25 = true;
    }
    pwVar19 = L"false";
    pwVar23 = L"false";
    if (bVar25) {
      pwVar23 = L"true";
    }
    lVar16 = (longlong)local_208[0] * 0x30 + *param_1;
    cVar9 = FUN_140618120(lVar16);
    if (cVar9 == '\0') {
      cVar9 = FUN_140618120(lVar16 + 0x10);
      if (cVar9 == '\0') {
        cVar9 = FUN_140618120(lVar16 + 0x20);
        bVar25 = cVar9 != '\0';
      }
      else {
        bVar25 = true;
      }
    }
    else {
      bVar25 = true;
    }
    local_220 = 0x31;
    if (bVar25) {
      pwVar19 = L"true";
    }
    local_228 = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_228,0);
    lVar16 = local_228;
    FGenericPlatformString::Memcpy
              (local_228,L"NaN created in during FTransform Multiplication\n",0x62);
    FStringFormatArg::FStringFormatArg(&local_198,local_res10[0]);
    FStringFormatArg::FStringFormatArg(&local_178,local_208[0]);
    FStringFormatArg::FStringFormatArg(local_158,pwVar23);
    FStringFormatArg::FStringFormatArg(local_138,pwVar19);
    lVar24 = 4;
    local_218 = 0;
    local_210 = 4;
    TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(&local_218,4,0);
    pfVar15 = &local_198;
    iVar10 = 4;
    lVar20 = local_218;
    do {
      FStringFormatArg::FStringFormatArg(lVar20,pfVar15);
      lVar20 = lVar20 + 0x20;
      pfVar15 = pfVar15 + 8;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    puVar13 = (undefined8 *)
              FString::Format(&local_1f8,
                              L"\tBoneIndex {0} : ParentBoneIndex {1} BoneTransformNaN={2} : ParentTransformNaN={3}\n"
                              ,&local_218);
    uVar8 = local_220;
    iVar10 = *(int *)(puVar13 + 1) + -1;
    if (*(int *)(puVar13 + 1) == 0) {
      iVar10 = 0;
    }
    pvVar3 = (void *)*puVar13;
    if (iVar10 != 0) {
      iVar22 = (int)local_220;
      lVar20 = (longlong)(int)local_220;
      iVar11 = (uint)((int)local_220 == 0) + iVar10 + (int)local_220;
      local_220 = CONCAT44(local_220._4_4_,iVar11);
      if (local_220._4_4_ < iVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_228,uVar8 & 0xffffffff);
        lVar16 = local_228;
      }
      pvVar1 = (void *)(lVar16 + (lVar20 - (ulonglong)(iVar22 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar10 * 2);
      *(undefined2 *)((longlong)iVar10 * 2 + (longlong)pvVar1) = 0;
    }
    if (local_1f8 != (float *)0x0) {
      FMemory::Free();
    }
    if (local_210 != 0) {
      plVar17 = (longlong *)(local_218 + 0x10);
      iVar10 = local_210;
      do {
        if (*plVar17 != 0) {
          FMemory::Free();
        }
        plVar17 = plVar17 + 4;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    if (local_218 != 0) {
      FMemory::Free();
    }
    puVar18 = local_108;
    do {
      plVar17 = (longlong *)(puVar18 + -0x20);
      puVar18 = puVar18 + -0x20;
      lVar24 = lVar24 + -1;
      if (*plVar17 != 0) {
        FMemory::Free();
      }
    } while (lVar24 != 0);
    uVar14 = FTransform::ToString((longlong)local_res10[0] * 0x30 + *param_1,&local_1d8);
    FStringFormatArg::FStringFormatArg(&local_198,uVar14);
    local_218 = 0;
    local_210 = 1;
    TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(&local_218,1,0);
    FStringFormatArg::FStringFormatArg(local_218,&local_198);
    puVar13 = (undefined8 *)FString::Format(&local_1f8,L"\tBone {0}\n",&local_218);
    uVar8 = local_220;
    pvVar3 = (void *)*puVar13;
    iVar10 = *(int *)(puVar13 + 1) + -1;
    if (*(int *)(puVar13 + 1) == 0) {
      iVar10 = 0;
    }
    if (iVar10 != 0) {
      iVar22 = (int)local_220;
      lVar20 = (longlong)(int)local_220;
      iVar11 = (uint)((int)local_220 == 0) + (int)local_220 + iVar10;
      local_220 = CONCAT44(local_220._4_4_,iVar11);
      if (local_220._4_4_ < iVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_228,uVar8 & 0xffffffff);
        lVar16 = local_228;
      }
      pvVar1 = (void *)(lVar16 + (lVar20 - (ulonglong)(iVar22 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar10 * 2);
      *(undefined2 *)((longlong)iVar10 * 2 + (longlong)pvVar1) = 0;
    }
    if (local_1f8 != (float *)0x0) {
      FMemory::Free();
    }
    if (local_210 != 0) {
      plVar17 = (longlong *)(local_218 + 0x10);
      iVar10 = local_210;
      do {
        if (*plVar17 != 0) {
          FMemory::Free();
        }
        plVar17 = plVar17 + 4;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    if (local_218 != 0) {
      FMemory::Free();
    }
    if (CONCAT44(fStack_184,local_188) != 0) {
      FMemory::Free();
    }
    uVar14 = FTransform::ToString((longlong)local_208[0] * 0x30 + *param_1,&local_1d8);
    FStringFormatArg::FStringFormatArg(local_1c0,uVar14);
    local_1f8 = (float *)local_1c0;
    uStack_1f0 = (float *)local_1a0;
    TArray<FStringFormatArg,FDefaultAllocator>::TArray<FStringFormatArg,FDefaultAllocator>
              (&local_218,&local_1f8);
    puVar13 = (undefined8 *)FString::Format(&local_1e8,L"\tParent {0}\n",&local_218);
    uVar8 = local_220;
    pvVar3 = (void *)*puVar13;
    iVar10 = *(int *)(puVar13 + 1) + -1;
    if (*(int *)(puVar13 + 1) == 0) {
      iVar10 = 0;
    }
    if (iVar10 != 0) {
      iVar22 = (int)local_220;
      lVar20 = (longlong)(int)local_220;
      iVar11 = (uint)((int)local_220 == 0) + (int)local_220 + iVar10;
      local_220 = CONCAT44(local_220._4_4_,iVar11);
      if (local_220._4_4_ < iVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_228,uVar8 & 0xffffffff);
        lVar16 = local_228;
      }
      pvVar1 = (void *)(lVar16 + (lVar20 - (ulonglong)(iVar22 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar10 * 2);
      *(undefined2 *)((longlong)iVar10 * 2 + (longlong)pvVar1) = 0;
    }
    if (local_1e8 != (float *)0x0) {
      FMemory::Free();
    }
    if (local_210 != 0) {
      plVar17 = (longlong *)(local_218 + 0x10);
      iVar10 = local_210;
      do {
        if (*plVar17 != 0) {
          FMemory::Free();
        }
        plVar17 = plVar17 + 4;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    if (local_218 != 0) {
      FMemory::Free();
    }
    if (local_1b0 != 0) {
      FMemory::Free();
    }
    uVar14 = FTransform::ToString(&local_118,local_1c0);
    FStringFormatArg::FStringFormatArg(&local_198,uVar14);
    local_1f8 = &local_198;
    uStack_1f0 = &local_178;
    local_1e8 = local_1f8;
    pfStack_1e0 = uStack_1f0;
    TArray<FStringFormatArg,FDefaultAllocator>::TArray<FStringFormatArg,FDefaultAllocator>
              (&local_218,&local_1e8);
    puVar13 = (undefined8 *)FString::Format(&local_1d8,L"\tResult {0}\n",&local_218);
    uVar8 = local_220;
    pvVar3 = (void *)*puVar13;
    iVar22 = 0;
    iVar10 = *(int *)(puVar13 + 1) + -1;
    if (*(int *)(puVar13 + 1) == 0) {
      iVar10 = iVar22;
    }
    if (iVar10 != 0) {
      iVar11 = (int)local_220;
      lVar20 = (longlong)(int)local_220;
      iVar12 = (uint)((int)local_220 == 0) + (int)local_220 + iVar10;
      local_220 = CONCAT44(local_220._4_4_,iVar12);
      if (local_220._4_4_ < iVar12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_228,uVar8 & 0xffffffff);
        lVar16 = local_228;
      }
      pvVar1 = (void *)(lVar16 + (lVar20 - (ulonglong)(iVar11 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar10 * 2);
      *(undefined2 *)((longlong)pvVar1 + (longlong)iVar10 * 2) = 0;
    }
    if (local_1d8 != (float *)0x0) {
      FMemory::Free();
    }
    if (local_210 != 0) {
      plVar17 = (longlong *)(local_218 + 0x10);
      iVar10 = local_210;
      do {
        if (*plVar17 != 0) {
          FMemory::Free();
        }
        plVar17 = plVar17 + 4;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    if (local_218 != 0) {
      FMemory::Free();
    }
    if (CONCAT44(fStack_184,local_188) != 0) {
      FMemory::Free();
    }
    uVar14 = FBase64::Encode(local_1c0,(longlong)local_res10[0] * 0x30 + *param_1,0x30);
    FStringFormatArg::FStringFormatArg(&local_198,uVar14);
    local_1f8 = &local_198;
    uStack_1f0 = &local_178;
    local_1d8 = local_1f8;
    pfStack_1d0 = uStack_1f0;
    TArray<FStringFormatArg,FDefaultAllocator>::TArray<FStringFormatArg,FDefaultAllocator>
              (&local_218,&local_1d8);
    puVar13 = (undefined8 *)FString::Format(&local_1e8,L"\tBone B64 {0}\n",&local_218);
    uVar8 = local_220;
    pvVar3 = (void *)*puVar13;
    iVar10 = *(int *)(puVar13 + 1) + -1;
    if (*(int *)(puVar13 + 1) == 0) {
      iVar10 = iVar22;
    }
    if (iVar10 != 0) {
      iVar11 = (int)local_220;
      lVar20 = (longlong)(int)local_220;
      iVar12 = (uint)((int)local_220 == 0) + (int)local_220 + iVar10;
      local_220 = CONCAT44(local_220._4_4_,iVar12);
      if (local_220._4_4_ < iVar12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_228,uVar8 & 0xffffffff);
        lVar16 = local_228;
      }
      pvVar1 = (void *)(lVar16 + (lVar20 - (ulonglong)(iVar11 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar10 * 2);
      *(undefined2 *)((longlong)pvVar1 + (longlong)iVar10 * 2) = 0;
    }
    if (local_1e8 != (float *)0x0) {
      FMemory::Free();
    }
    FUN_140590de0(&local_218);
    if (CONCAT44(fStack_184,local_188) != 0) {
      FMemory::Free();
    }
    uVar14 = FBase64::Encode(local_1c0,(longlong)local_208[0] * 0x30 + *param_1,0x30);
    FStringFormatArg::FStringFormatArg(&local_198,uVar14);
    local_1f8 = &local_198;
    uStack_1f0 = &local_178;
    local_1d8 = local_1f8;
    pfStack_1d0 = uStack_1f0;
    TArray<FStringFormatArg,FDefaultAllocator>::TArray<FStringFormatArg,FDefaultAllocator>
              (&local_218,&local_1d8);
    puVar13 = (undefined8 *)FString::Format(&local_1e8,L"\tParent B64 {0}\n",&local_218);
    uVar8 = local_220;
    pvVar3 = (void *)*puVar13;
    iVar10 = *(int *)(puVar13 + 1) + -1;
    if (*(int *)(puVar13 + 1) == 0) {
      iVar10 = iVar22;
    }
    if (iVar10 != 0) {
      iVar11 = (int)local_220;
      lVar20 = (longlong)(int)local_220;
      iVar12 = (uint)((int)local_220 == 0) + (int)local_220 + iVar10;
      local_220 = CONCAT44(local_220._4_4_,iVar12);
      if (local_220._4_4_ < iVar12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_228,uVar8 & 0xffffffff);
        lVar16 = local_228;
      }
      pvVar1 = (void *)(lVar16 + (lVar20 - (ulonglong)(iVar11 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar10 * 2);
      *(undefined2 *)((longlong)pvVar1 + (longlong)iVar10 * 2) = 0;
    }
    if (local_1e8 != (float *)0x0) {
      FMemory::Free();
    }
    FUN_140590de0(&local_218);
    if (CONCAT44(fStack_184,local_188) != 0) {
      FMemory::Free();
    }
    uVar14 = FBase64::Encode(local_1c0,&local_118,0x30);
    FStringFormatArg::FStringFormatArg(&local_198,uVar14);
    local_1f8 = &local_198;
    uStack_1f0 = &local_178;
    local_1d8 = local_1f8;
    pfStack_1d0 = uStack_1f0;
    TArray<FStringFormatArg,FDefaultAllocator>::TArray<FStringFormatArg,FDefaultAllocator>
              (&local_218,&local_1d8);
    puVar13 = (undefined8 *)FString::Format(&local_1e8,L"\tResult B64 {0}\n",&local_218);
    uVar8 = local_220;
    pvVar3 = (void *)*puVar13;
    iVar10 = *(int *)(puVar13 + 1) + -1;
    if (*(int *)(puVar13 + 1) == 0) {
      iVar10 = iVar22;
    }
    if (iVar10 != 0) {
      iVar22 = (int)local_220;
      lVar20 = (longlong)(int)local_220;
      iVar11 = (uint)((int)local_220 == 0) + (int)local_220 + iVar10;
      local_220 = CONCAT44(local_220._4_4_,iVar11);
      if (local_220._4_4_ < iVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_228,uVar8 & 0xffffffff);
        lVar16 = local_228;
      }
      pvVar1 = (void *)(lVar16 + (lVar20 - (ulonglong)(iVar22 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar10 * 2);
      *(undefined2 *)((longlong)pvVar1 + (longlong)iVar10 * 2) = 0;
    }
    if (local_1e8 != (float *)0x0) {
      FMemory::Free();
    }
    FUN_140590de0(&local_218);
    if (CONCAT44(fStack_184,local_188) != 0) {
      FMemory::Free();
    }
    if (lVar16 != 0) {
      FMemory::Free(lVar16);
    }
  }
  fVar63 = fRam0000000146855b5c;
  fVar7 = fRam0000000146855b58;
  fVar6 = fRam0000000146855b54;
  fVar5 = _DAT_146855b50;
  puVar13 = (undefined8 *)((longlong)local_res10[0] * 0x30 + *param_1);
  *puVar13 = CONCAT44(fStack_114,local_118);
  puVar13[1] = CONCAT44(fStack_10c,fStack_110);
  puVar13[2] = local_108;
  puVar13[3] = uStack_100;
  puVar13[4] = CONCAT44(fStack_f4,local_f8);
  puVar13[5] = CONCAT44(fStack_ec,fStack_f0);
  pfVar15 = (float *)((longlong)local_res10[0] * 0x30 + *param_1);
  fVar4 = *pfVar15;
  fVar52 = pfVar15[1];
  fVar55 = pfVar15[2];
  fVar56 = pfVar15[3];
  auVar30._0_4_ = fVar4 * fVar4 + fVar55 * fVar55;
  auVar30._4_4_ = fVar52 * fVar52 + fVar56 * fVar56;
  auVar30._8_4_ = fVar55 * fVar55 + fVar4 * fVar4;
  auVar30._12_4_ = fVar56 * fVar56 + fVar52 * fVar52;
  fVar43 = auVar30._4_4_ + auVar30._0_4_;
  fVar45 = auVar30._8_4_ + auVar30._4_4_;
  fVar46 = auVar30._12_4_ + auVar30._8_4_;
  fVar47 = auVar30._0_4_ + auVar30._12_4_;
  auVar2._4_4_ = fVar45;
  auVar2._0_4_ = fVar43;
  auVar2._8_4_ = fVar46;
  auVar2._12_4_ = fVar47;
  auVar26 = rsqrtps(auVar30,auVar2);
  fVar64 = auVar26._0_4_;
  fVar65 = auVar26._4_4_;
  fVar36 = auVar26._8_4_;
  fVar42 = auVar26._12_4_;
  fVar64 = (fVar5 - fVar64 * fVar64 * fVar43 * fVar5) * fVar64 + fVar64;
  fVar65 = (fVar6 - fVar65 * fVar65 * fVar45 * fVar6) * fVar65 + fVar65;
  fVar36 = (fVar7 - fVar36 * fVar36 * fVar46 * fVar7) * fVar36 + fVar36;
  fVar42 = (fVar63 - fVar42 * fVar42 * fVar47 * fVar63) * fVar42 + fVar42;
  fVar52 = (float)(((uint)(((fVar6 - fVar65 * fVar65 * fVar45 * fVar6) * fVar65 + fVar65) * fVar52)
                   ^ uRam0000000146855b44) & -(uint)(fRam0000000146855b64 <= fVar45) ^
                  uRam0000000146855b44);
  fVar55 = (float)(((uint)(((fVar7 - fVar36 * fVar36 * fVar46 * fVar7) * fVar36 + fVar36) * fVar55)
                   ^ uRam0000000146855b48) & -(uint)(fRam0000000146855b68 <= fVar46) ^
                  uRam0000000146855b48);
  fVar56 = (float)(((uint)(((fVar63 - fVar42 * fVar42 * fVar47 * fVar63) * fVar42 + fVar42) * fVar56
                          ) ^ uRam0000000146855b4c) & -(uint)(fRam0000000146855b6c <= fVar47) ^
                  uRam0000000146855b4c);
  *pfVar15 = (float)(((uint)(((fVar5 - fVar64 * fVar64 * fVar43 * fVar5) * fVar64 + fVar64) * fVar4)
                     ^ _DAT_146855b40) & -(uint)(_DAT_146855b60 <= fVar43) ^ _DAT_146855b40);
  pfVar15[1] = fVar52;
  pfVar15[2] = fVar55;
  pfVar15[3] = fVar56;
  *(undefined1 *)((longlong)local_res10[0] + param_1[3]) = 1;
  return;
}



// FUNCTION 14060d680 FUN_14060d680 body=161 status=ok
// SIG undefined FUN_14060d680(void)

undefined8 FUN_14060d680(longlong param_1,uint param_2,char param_3)

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
      FUN_140614e40(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14060d730 FUN_14060d730 body=105 status=ok
// SIG undefined FUN_14060d730(void)

void FUN_14060d730(longlong *param_1,int param_2)

{
  int local_res10 [2];
  int local_res18 [4];
  
  if ((param_2 != 0) && (*(char *)((longlong)param_2 + param_1[3]) == '\x01')) {
    local_res10[0] = param_2;
    FBoneContainer::GetParentBoneIndex(param_1[2],local_res18,local_res10);
    FTransform::SetToRelativeTransform
              ((longlong)local_res10[0] * 0x30 + *param_1,(longlong)local_res18[0] * 0x30 + *param_1
              );
    *(undefined1 *)((longlong)local_res10[0] + param_1[3]) = 0;
  }
  return;
}



// FUNCTION 14060d7a0 FUN_14060d7a0 body=387 status=ok
// SIG undefined FUN_14060d7a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14060d7a0(longlong *param_1,longlong *param_2)

{
  void *_Src;
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined8 uVar4;
  float *pfVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int local_res8 [2];
  int local_res10 [2];
  
  if (param_2 != param_1) {
    iVar6 = (int)param_1[1];
    _Src = (void *)*param_1;
    *(int *)(param_2 + 1) = iVar6;
    if ((iVar6 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_140615970(param_2,iVar6);
      _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar6 * 0x30);
    }
  }
  param_2[2] = param_1[2];
  if (*(char *)param_1[3] != '\0') {
    puVar1 = (undefined8 *)*param_1;
    puVar2 = (undefined8 *)*param_2;
    uVar4 = puVar1[1];
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    *(undefined1 (*) [16])(puVar2 + 2) = *(undefined1 (*) [16])(puVar1 + 2);
    uVar4 = puVar1[5];
    puVar2[4] = puVar1[4];
    puVar2[5] = uVar4;
  }
  iVar6 = (int)param_1[1] + -1;
  if (0 < iVar6) {
    lVar7 = (longlong)iVar6;
    do {
      if (*(char *)(lVar7 + param_1[3]) != '\0') {
        local_res8[0] = iVar6;
        FBoneContainer::GetParentBoneIndex(param_1[2],local_res10,local_res8);
        FTransform::SetToRelativeTransform
                  ((longlong)local_res8[0] * 0x30 + *param_2,
                   (longlong)local_res10[0] * 0x30 + *param_2);
        pfVar5 = (float *)((longlong)local_res8[0] * 0x30 + *param_2);
        fVar3 = *pfVar5;
        fVar18 = pfVar5[1];
        fVar19 = pfVar5[2];
        fVar20 = pfVar5[3];
        auVar8._0_4_ = fVar3 * fVar3 + fVar19 * fVar19;
        auVar8._4_4_ = fVar18 * fVar18 + fVar20 * fVar20;
        auVar8._8_4_ = fVar19 * fVar19 + fVar3 * fVar3;
        auVar8._12_4_ = fVar20 * fVar20 + fVar18 * fVar18;
        fVar14 = auVar8._4_4_ + auVar8._0_4_;
        fVar15 = auVar8._8_4_ + auVar8._4_4_;
        fVar16 = auVar8._12_4_ + auVar8._8_4_;
        fVar17 = auVar8._0_4_ + auVar8._12_4_;
        auVar9._4_4_ = fVar15;
        auVar9._0_4_ = fVar14;
        auVar9._8_4_ = fVar16;
        auVar9._12_4_ = fVar17;
        auVar9 = rsqrtps(auVar8,auVar9);
        fVar10 = auVar9._0_4_;
        fVar11 = auVar9._4_4_;
        fVar12 = auVar9._8_4_;
        fVar13 = auVar9._12_4_;
        fVar10 = (_DAT_146855b50 - fVar10 * fVar10 * fVar14 * _DAT_146855b50) * fVar10 + fVar10;
        fVar11 = (fRam0000000146855b54 - fVar11 * fVar11 * fVar15 * fRam0000000146855b54) * fVar11 +
                 fVar11;
        fVar12 = (fRam0000000146855b58 - fVar12 * fVar12 * fVar16 * fRam0000000146855b58) * fVar12 +
                 fVar12;
        fVar13 = (fRam0000000146855b5c - fVar13 * fVar13 * fVar17 * fRam0000000146855b5c) * fVar13 +
                 fVar13;
        fVar18 = (float)(((uint)(((fRam0000000146855b54 -
                                  fVar11 * fVar11 * fVar15 * fRam0000000146855b54) * fVar11 + fVar11
                                 ) * fVar18) ^ uRam0000000146855b44) &
                         -(uint)(fRam0000000146855b64 <= fVar15) ^ uRam0000000146855b44);
        fVar19 = (float)(((uint)(((fRam0000000146855b58 -
                                  fVar12 * fVar12 * fVar16 * fRam0000000146855b58) * fVar12 + fVar12
                                 ) * fVar19) ^ uRam0000000146855b48) &
                         -(uint)(fRam0000000146855b68 <= fVar16) ^ uRam0000000146855b48);
        fVar20 = (float)(((uint)(((fRam0000000146855b5c -
                                  fVar13 * fVar13 * fVar17 * fRam0000000146855b5c) * fVar13 + fVar13
                                 ) * fVar20) ^ uRam0000000146855b4c) &
                         -(uint)(fRam0000000146855b6c <= fVar17) ^ uRam0000000146855b4c);
        *pfVar5 = (float)(((uint)(((_DAT_146855b50 - fVar10 * fVar10 * fVar14 * _DAT_146855b50) *
                                   fVar10 + fVar10) * fVar3) ^ _DAT_146855b40) &
                          -(uint)(_DAT_146855b60 <= fVar14) ^ _DAT_146855b40);
        pfVar5[1] = fVar18;
        pfVar5[2] = fVar19;
        pfVar5[3] = fVar20;
      }
      iVar6 = iVar6 + -1;
      lVar7 = lVar7 + -1;
    } while (0 < iVar6);
  }
  return;
}



// FUNCTION 14060d930 FUN_14060d930 body=100 status=ok
// SIG undefined FUN_14060d930(void)

void FUN_14060d930(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  cVar2 = FUN_140612c50();
  if ((cVar2 == '\0') && (DAT_1468b616c == '\0')) {
    lVar3 = *(longlong *)(param_1 + 0x198);
    lVar1 = lVar3 + (longlong)*(int *)(param_1 + 0x1a0) * 0x48;
    for (; lVar3 != lVar1; lVar3 = lVar3 + 0x48) {
      FUN_14060d9a0(param_1,lVar3);
    }
  }
  return;
}



// FUNCTION 14060d9a0 FUN_14060d9a0 body=1297 status=ok
// SIG undefined FUN_14060d9a0(void)

void FUN_14060d9a0(longlong param_1,longlong param_2)

{
  int *piVar1;
  byte *pbVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined1 local_res20 [8];
  ulonglong in_stack_ffffffffffffff40;
  undefined1 local_98 [8];
  undefined8 *local_90;
  undefined8 local_88;
  longlong local_80 [2];
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_50 [8];
  longlong *local_48;
  
  if (*(longlong *)(param_2 + 0x38) != 0) {
    return;
  }
  cVar4 = FUN_140612c50();
  if ((cVar4 == '\0') && (DAT_1468b616c == '\0')) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (!bVar3) {
    return;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    return;
  }
  lVar5 = FWeakObjectPtr::Get(param_2 + 0x10);
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(param_2 + 0x18)) || (*(longlong *)(param_2 + 0x20) == 0))
    goto LAB_14060dcb9;
    lVar5 = FUN_141796df0();
    FWeakObjectPtr::operator=(param_2 + 0x10,lVar5);
    if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_2 + 0x18) = DAT_1464b56f4;
    }
    lVar5 = FWeakObjectPtr::Get(param_2 + 0x10);
    if (lVar5 == 0) goto LAB_14060dcb9;
  }
  lVar6 = FUN_140618e60();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar7 = UNodeMappingContainer::GetPrivateStaticClass();
    uVar7 = FUN_1417985e0(uVar7,param_1,0,0,0,0,0,0,0);
    *(undefined8 *)(param_2 + 0x38) = uVar7;
    cVar4 = FUN_140613050(uVar7,lVar5,*(byte *)(param_2 + 0x40) >> 1 & 1);
    if (cVar4 == '\0') {
      *(undefined8 *)(param_2 + 0x38) = 0;
      return;
    }
    lVar5 = *(longlong *)(param_2 + 0x38);
    local_70 = FUN_140613b60;
    uStack_68 = 0;
    plVar8 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = (longlong)&PTR_FUN_144012ea0;
      FWeakObjectPtr::operator=(plVar8 + 1,param_1);
      *(undefined4 *)(plVar8 + 2) = (undefined4)local_70;
      *(undefined4 *)((longlong)plVar8 + 0x14) = local_70._4_4_;
      *(undefined4 *)(plVar8 + 3) = uStack_68;
      *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_64;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar8[5] = lVar6;
      *plVar8 = (longlong)&PTR_FUN_144012ee8;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar5 + 0x30,1);
      (**(code **)(*plVar8 + 0x20))(plVar8,local_res20);
      iVar10 = *(int *)(lVar5 + 0x38);
      *(int *)(lVar5 + 0x38) = iVar10 + 1;
      if (*(int *)(lVar5 + 0x3c) < iVar10 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar5 + 0x30,iVar10);
      }
      puVar9 = (undefined8 *)((longlong)iVar10 * 0x10 + *(longlong *)(lVar5 + 0x30));
      *puVar9 = plVar8;
      *(undefined4 *)(puVar9 + 1) = 3;
    }
    lVar5 = *(longlong *)(param_2 + 0x38);
    local_70 = FUN_140613bd0;
    uStack_68 = 0;
    plVar8 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = (longlong)&PTR_FUN_144012f30;
      FWeakObjectPtr::operator=(plVar8 + 1,param_1);
      *(undefined4 *)(plVar8 + 2) = (undefined4)local_70;
      *(undefined4 *)((longlong)plVar8 + 0x14) = local_70._4_4_;
      *(undefined4 *)(plVar8 + 3) = uStack_68;
      *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_64;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar8[5] = lVar6;
      *plVar8 = (longlong)&PTR_FUN_144012f78;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar5 + 0x48,1);
      (**(code **)(*plVar8 + 0x20))(plVar8,local_98);
      iVar10 = *(int *)(lVar5 + 0x50);
      *(int *)(lVar5 + 0x50) = iVar10 + 1;
      if (*(int *)(lVar5 + 0x54) < iVar10 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar5 + 0x48,iVar10);
      }
      puVar9 = (undefined8 *)((longlong)iVar10 * 0x10 + *(longlong *)(lVar5 + 0x48));
      *puVar9 = plVar8;
      *(undefined4 *)(puVar9 + 1) = 3;
    }
    pbVar2 = (byte *)(*(longlong *)(param_2 + 0x38) + 0x15a);
    *pbVar2 = *pbVar2 ^ (*(char *)(param_2 + 0x40) << 3 ^
                        *(byte *)(*(longlong *)(param_2 + 0x38) + 0x15a)) & 8;
    *(byte *)(*(longlong *)(param_2 + 0x38) + 0x15b) = *(byte *)(param_2 + 0x40) >> 2 & 1;
    return;
  }
LAB_14060dcb9:
  *(char *)(param_1 + 0x1a8) = *(char *)(param_1 + 0x1a8) + '\x01';
  local_90 = (undefined8 *)0x0;
  local_88 = 1;
  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
            (&local_90,0);
  *local_90 = *(undefined8 *)(param_2 + 0x20);
  FString::FString(local_90 + 1,param_2 + 0x28);
  local_80[0] = 0;
  local_80[1] = 0x1f;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_80,0);
  FGenericPlatformString::Memcpy(local_80[0],L"RequestAsyncLoad ArrayDelegate",0x3e);
  uStack_58 = 0;
  local_60 = FUN_140613c30;
  local_70 = (code *)0x0;
  uStack_68 = 0;
  puVar9 = (undefined8 *)operator_new(0x30,&local_70);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(puVar9 + 1,param_1);
    *(undefined4 *)(puVar9 + 2) = (undefined4)local_60;
    *(undefined4 *)((longlong)puVar9 + 0x14) = local_60._4_4_;
    *(undefined4 *)(puVar9 + 3) = uStack_58;
    *(undefined4 *)((longlong)puVar9 + 0x1c) = uStack_54;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar9[5] = uVar7;
    *puVar9 = &PTR_FUN_143f77bd0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146855c88) && (_Init_thread_header(&DAT_146855c88), DAT_146855c88 == -1))
  {
    FUN_14282a800(&DAT_146855bb0);
    atexit((_func_5014 *)&LAB_143e400e0);
    _Init_thread_footer(&DAT_146855c88);
  }
  FUN_142840b00(&DAT_146855bb0,local_50,&local_90,&local_70,0,
                in_stack_ffffffffffffff40 & 0xffffffffffffff00,0,local_80);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_48 + 1;
    lVar5 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_48 + 8))(local_48,1);
      }
    }
  }
  if (local_80[0] != 0) {
    FMemory::Free();
  }
  if ((int)local_88 != 0) {
    plVar8 = local_90 + 1;
    iVar10 = (int)local_88;
    do {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 3;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  if (local_90 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14060dec0 FUN_14060dec0 body=84 status=ok
// SIG undefined FUN_14060dec0(void)

void FUN_14060dec0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144012f30;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_144012f78;
  }
  return;
}



// FUNCTION 14060df20 FUN_14060df20 body=84 status=ok
// SIG undefined FUN_14060df20(void)

void FUN_14060df20(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144012ea0;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_144012ee8;
  }
  return;
}



// FUNCTION 14060df80 FUN_14060df80 body=89 status=ok
// SIG undefined FUN_14060df80(void)

void FUN_14060df80(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = FUN_140618300();
  FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
  return;
}



// FUNCTION 14060dfe0 FUN_14060dfe0 body=180 status=ok
// SIG undefined FUN_14060dfe0(void)

undefined8 * FUN_14060dfe0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_a8 [96];
  longlong local_48;
  
  lVar2 = FUN_14060ad40(local_a8,param_3,param_1);
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfc;
  puVar3 = (undefined8 *)FMemory::Malloc(0x98,8);
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) | 1;
  *param_2 = puVar3;
  if ((*(byte *)(param_2 + 6) & 2) != 0) {
    puVar3 = param_2;
  }
  *puVar3 = &PTR_FUN_143fcdb48;
  uVar1 = *(undefined1 *)(lVar2 + 8);
  *puVar3 = &PTR_FUN_143fcdb90;
  *(undefined1 *)(puVar3 + 1) = uVar1;
  *(undefined1 *)(puVar3 + 2) = *(undefined1 *)(lVar2 + 0x10);
  puVar3[3] = *(undefined8 *)(lVar2 + 0x18);
  *puVar3 = &PTR_FUN_144012e50;
  FUN_14060ac50(puVar3 + 4,lVar2 + 0x20);
  if (local_48 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14060e0a0 FUN_14060e0a0 body=2913 status=ok
// SIG undefined FUN_14060e0a0(void)

void FUN_14060e0a0(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  void *_Src;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  undefined *puVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  int iVar21;
  undefined4 *puVar22;
  int local_204;
  undefined2 *local_200;
  int local_1f8;
  int local_1f4;
  undefined8 *local_1f0;
  longlong local_1e8;
  uint local_1e0 [2];
  longlong local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  undefined4 *local_1c0;
  undefined8 uStack_1b8;
  undefined4 *local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  float local_198;
  float local_194;
  undefined8 *local_190;
  int local_188;
  undefined4 local_184;
  longlong local_180;
  longlong *local_178;
  longlong local_170;
  int local_168;
  int local_164;
  longlong local_160 [2];
  undefined4 *local_150;
  int local_148;
  int local_144;
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  longlong local_120;
  longlong local_110 [2];
  undefined1 local_100 [16];
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [8];
  longlong *local_d0;
  
  uVar20 = 0;
  local_1e0[0] = 0;
  if ((*(longlong *)(param_2 + 0x60) == 0) || (bVar5 = true, *(char *)(param_4 + 0x1e) == '\0')) {
    bVar5 = false;
  }
  if ((*(longlong *)(param_2 + 0x60) == 0) || (bVar6 = true, *(char *)(param_4 + 0x1f) == '\0')) {
    bVar6 = false;
  }
  plVar9 = (longlong *)FUN_1424efd40(*(undefined8 *)(*(longlong *)(param_3 + 0x20) + 0x20),param_3);
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x278))(plVar9);
  }
  iVar8 = *(int *)(param_1 + 0x78);
  local_190 = (undefined8 *)0x0;
  local_184 = 0;
  local_188 = iVar8;
  if (0 < iVar8) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_190);
    iVar8 = *(int *)(param_1 + 0x78);
  }
  uVar18 = uVar20;
  if (0 < iVar8) {
    local_1d8 = 0;
    local_1e8 = 0;
    local_1a0 = 0;
    local_1f0 = (undefined8 *)0x0;
    puVar13 = local_190;
    do {
      lVar19 = *(longlong *)(param_1 + 0x70) + (longlong)local_1f0;
      local_1c0 = (undefined4 *)0x0;
      uStack_1b8 = 0;
      if (*(longlong *)(lVar19 + 0x18) == 0) {
        lVar10 = FUN_140611140(lVar19,param_1);
        if (lVar10 != 0) {
          local_1c0 = *(undefined4 **)(lVar10 + 0x38);
          uStack_1b8 = *(undefined8 *)(lVar10 + 0x40);
        }
      }
      else {
        local_1c0 = *(undefined4 **)(lVar19 + 0x10);
        uStack_1b8 = *(undefined8 *)(lVar19 + 0x18);
      }
      *puVar13 = local_1c0;
      puVar13[1] = uStack_1b8;
      fVar3 = *(float *)(lVar19 + 0x48);
      if ((*(byte *)(lVar19 + 0x4c) & 2) == 0) {
        lVar10 = FUN_140611140(lVar19,0);
        if ((lVar10 != 0) &&
           (local_180 = FUN_1406133c0(*(undefined8 *)(lVar10 + 0x28)), local_180 != 0)) {
          iVar8 = FUN_143264720(local_180,&local_194);
          if ((iVar8 == 0) || (iVar8 = FUN_143264600(), iVar8 != 0)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          FUN_143264350(&local_180,0);
          local_180 = 0;
          if (bVar4) {
            *(float *)(lVar19 + 0x50) = local_198 - local_194;
          }
        }
        *(byte *)(lVar19 + 0x4c) = *(byte *)(lVar19 + 0x4c) | 2;
      }
      bVar4 = false;
      plVar14 = *(longlong **)(param_4 + 0x20);
      local_1a0 = CONCAT44(local_1a0._4_4_,
                           (int)((fVar3 - *(float *)(param_4 + 0xc)) * *(float *)(param_4 + 0x10)));
      plVar9 = plVar14 + (longlong)*(int *)(param_4 + 0x28) * 3;
      for (; plVar14 != plVar9; plVar14 = plVar14 + 3) {
        if (((*plVar14 == param_3) && (plVar14[1] == param_1)) && (*(uint *)(plVar14 + 2) == uVar20)
           ) {
          bVar4 = true;
          break;
        }
      }
      puVar17 = &DAT_146216a74;
      if (bVar4) {
        puVar17 = &DAT_146216a68;
      }
      if (bVar5) {
        puVar11 = (undefined8 *)operator_new(0x38);
        if (puVar11 == (undefined8 *)0x0) {
          puVar11 = (undefined8 *)0x0;
        }
        else {
          HHitProxy::HHitProxy(puVar11,3);
          *(uint *)(puVar11 + 6) = uVar20;
          *puVar11 = &PTR__scalar_deleting_destructor__143fcd190;
          puVar11[4] = param_3;
          puVar11[5] = param_1;
        }
        FCanvas::SetHitProxy(param_2,puVar11);
      }
      FLinearColor::FLinearColor(local_140,puVar17);
      FUN_1428a8450(param_2);
      FLinearColor::FLinearColor(local_130);
      FUN_1428a8450(param_2);
      if (bVar5) {
        FCanvas::SetHitProxy(param_2);
      }
      uVar20 = uVar20 + 1;
      local_1f0 = local_1f0 + 0xb;
      puVar13 = puVar13 + 2;
      uVar18 = local_1e0[0];
    } while ((int)uVar20 < *(int *)(param_1 + 0x78));
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  local_204 = 0;
  if (0 < *(int *)(param_1 + 0x78)) {
    plVar9 = local_190 + 1;
    local_1f0 = (undefined8 *)0x0;
    local_1e8 = 0;
    do {
      puVar15 = (undefined2 *)0x0;
      local_1d8 = *(longlong *)(param_1 + 0x70);
      local_178 = plVar9;
      uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_f0,L"<Unknown>",L"FaceFX",L"MatineeFaceFXTrackUnkown");
      puVar13 = (undefined8 *)FText::ToString(uVar12);
      local_200 = (undefined2 *)0x0;
      local_1f8 = *(int *)(puVar13 + 1);
      lVar19 = (longlong)local_1f8;
      _Src = (void *)*puVar13;
      if (local_1f8 == 0) {
        local_1f4 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_200,local_1f8,0);
        puVar15 = local_200;
        _guard_xfg_dispatch_icall_nop(local_200,_Src,lVar19 * 2);
      }
      plVar14 = local_e8;
      if (local_e8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_e8 + 1;
        lVar19 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        puVar15 = local_200;
        if ((int)lVar19 == 1) {
          (**(code **)*local_e8)(local_e8);
          LOCK();
          piVar2 = (int *)((longlong)plVar14 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          puVar15 = local_200;
          if (iVar8 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14,1);
            puVar15 = local_200;
          }
        }
      }
      if (*plVar9 != 0) {
        if (((int)plVar9[-1] == 0) && (*(int *)((longlong)plVar9 + -4) == 0)) {
          uVar18 = uVar18 | 1;
          local_160[0] = 0;
          local_160[1] = 0;
          plVar14 = local_160;
        }
        else {
          uVar18 = uVar18 | 6;
          plVar14 = (longlong *)FName::ToString(plVar9 + -1);
          lVar19 = plVar14[1];
          local_1d0 = *plVar14;
          *plVar14 = 0;
          local_1c8._0_4_ = (int)plVar14[1];
          local_1c8._4_4_ = *(int *)((longlong)plVar14 + 0xc);
          plVar14[1] = 0;
          iVar8 = (int)local_1c8;
          if (local_1c8._4_4_ < (int)((4 - (uint)((int)lVar19 != 0)) + (int)local_1c8)) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo();
            iVar8 = (int)local_1c8;
          }
          local_1c8._0_4_ = (4 - (uint)(iVar8 != 0)) + iVar8;
          lVar19 = local_1d0;
          if (local_1c8._4_4_ < (int)local_1c8) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1d0,iVar8);
            lVar19 = local_1d0;
          }
          local_170 = lVar19;
          local_1d0 = 0;
          lVar10 = (longlong)iVar8 - (ulonglong)(iVar8 != 0);
          local_168 = (int)local_1c8;
          plVar14 = &local_170;
          local_164 = local_1c8._4_4_;
          local_1c8 = 0;
          *(undefined4 *)(lVar19 + lVar10 * 2) = 0x2f0020;
          *(undefined2 *)(lVar19 + 4 + lVar10 * 2) = 0x20;
          *(undefined2 *)(lVar19 + 6 + lVar10 * 2) = 0;
        }
        if (puVar15 != (undefined2 *)0x0) {
          FMemory::Free(puVar15);
        }
        puVar15 = (undefined2 *)*plVar14;
        *plVar14 = 0;
        local_1f8 = (int)plVar14[1];
        local_1f4 = *(int *)((longlong)plVar14 + 0xc);
        plVar14[1] = 0;
        local_200 = puVar15;
        if (((uVar18 & 4) != 0) && (uVar18 = uVar18 & 0xfffffffb, local_170 != 0)) {
          FMemory::Free();
        }
        if (((uVar18 & 2) != 0) && (uVar18 = uVar18 & 0xfffffffd, local_120 != 0)) {
          FMemory::Free();
        }
        if (((uVar18 & 1) != 0) && (uVar18 = uVar18 & 0xfffffffe, local_160[0] != 0)) {
          FMemory::Free();
        }
        puVar13 = (undefined8 *)FName::ToString(plVar9,local_110);
        iVar8 = local_1f8;
        local_1f0 = (undefined8 *)*puVar13;
        iVar21 = *(int *)(puVar13 + 1) + -1;
        if (*(int *)(puVar13 + 1) == 0) {
          iVar21 = 0;
        }
        if (iVar21 != 0) {
          lVar19 = (longlong)local_1f8;
          local_1f8 = (uint)(local_1f8 == 0) + local_1f8 + iVar21;
          if (local_1f4 < local_1f8) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_200,iVar8);
            puVar15 = local_200;
          }
          _guard_xfg_dispatch_icall_nop
                    (puVar15 + (lVar19 - (ulonglong)(iVar8 != 0)),local_1f0,(longlong)iVar21 * 2);
          (puVar15 + (lVar19 - (ulonglong)(iVar8 != 0)))[iVar21] = 0;
        }
        if (local_110[0] != 0) {
          FMemory::Free();
        }
      }
      if ((*(byte *)(local_1e8 + 0x4c + local_1d8) & 1) != 0) {
        uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_d8,L"Looping",L"FaceFX",L"MatineeFaceFXTrackLooping");
        local_1f0 = (undefined8 *)FText::ToString(uVar12);
        local_1c0 = (undefined4 *)0x0;
        iVar8 = *(int *)(local_1f0 + 1) + -1;
        if (*(int *)(local_1f0 + 1) == 0) {
          iVar8 = 0;
        }
        uStack_1b8._0_4_ = iVar8 + 3;
        uStack_1b8._4_4_ = 0;
        if (0 < (int)uStack_1b8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c0,0);
        }
        iVar7 = uStack_1b8._4_4_;
        iVar21 = (int)uStack_1b8;
        puVar22 = local_1c0;
        *local_1c0 = 0x5b0020;
        _guard_xfg_dispatch_icall_nop(local_1c0 + 1,(void *)*local_1f0,(longlong)iVar8 * 2);
        *(undefined2 *)((longlong)puVar22 + (longlong)iVar8 * 2 + 4) = 0;
        local_1c0 = (undefined4 *)0x0;
        uStack_1b8 = 0;
        local_1b0 = puVar22;
        local_150 = puVar22;
        local_148 = iVar21;
        local_144 = iVar7;
        local_1a8._4_4_ = iVar7;
        if (iVar7 < (int)((2 - (uint)(iVar21 != 0)) + iVar21)) {
          local_1a8._0_4_ = iVar21;
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_1b0);
          iVar21 = (int)local_1a8;
        }
        iVar8 = (2 - (uint)(iVar21 != 0)) + iVar21;
        local_1a8 = CONCAT44(local_1a8._4_4_,iVar8);
        puVar22 = local_1b0;
        if (local_1a8._4_4_ < iVar8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b0,iVar21);
          puVar22 = local_1b0;
          iVar8 = (int)local_1a8;
        }
        iVar7 = local_1f8;
        local_1b0 = (undefined4 *)0x0;
        local_1a8 = 0;
        lVar19 = (longlong)iVar21 - (ulonglong)(iVar21 != 0);
        *(undefined2 *)((longlong)puVar22 + lVar19 * 2) = 0x5d;
        *(undefined2 *)((longlong)puVar22 + lVar19 * 2 + 2) = 0;
        if ((iVar8 != 0) && (iVar8 + -1 != 0)) {
          lVar19 = (longlong)local_1f8;
          local_1f8 = (uint)(local_1f8 == 0) + local_1f8 + iVar8 + -1;
          if (local_1f4 < local_1f8) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_200,iVar7);
            puVar15 = local_200;
          }
          _guard_xfg_dispatch_icall_nop
                    (puVar15 + (lVar19 - (ulonglong)(iVar7 != 0)),puVar22,(longlong)iVar8 * 2 - 2);
          (puVar15 + (lVar19 - (ulonglong)(iVar7 != 0)))[(longlong)iVar8 + -1] = 0;
        }
        if (puVar22 != (undefined4 *)0x0) {
          FMemory::Free(puVar22);
        }
        plVar9 = local_d0;
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          plVar14 = local_d0 + 1;
          lVar19 = *plVar14;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          puVar15 = local_200;
          if ((int)lVar19 == 1) {
            (**(code **)*local_d0)(local_d0);
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            iVar8 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            puVar15 = local_200;
            if (iVar8 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
              puVar15 = local_200;
            }
          }
        }
      }
      lVar19 = local_1e8;
      puVar16 = &DAT_143f3eda8;
      if (local_1f8 != 0) {
        puVar16 = puVar15;
      }
      uVar12 = UEngine::GetSmallFont();
      StringSize(uVar12,&local_1a0,local_1e0,puVar16);
      if (bVar6) {
        puVar13 = (undefined8 *)operator_new(0x38);
        if (puVar13 != (undefined8 *)0x0) {
          HHitProxy::HHitProxy(puVar13,3);
          puVar13[5] = param_1;
          *puVar13 = &PTR__scalar_deleting_destructor__143fcd190;
          puVar13[4] = param_3;
          *(int *)(puVar13 + 6) = local_204;
        }
        FCanvas::SetHitProxy(param_2,puVar13);
      }
      FLinearColor::FLinearColor(local_100,&DAT_146216a6c);
      UEngine::GetSmallFont();
      FUN_1428a6e00(param_2);
      if (bVar6) {
        FCanvas::SetHitProxy(param_2,0);
      }
      if (puVar15 != (undefined2 *)0x0) {
        FMemory::Free(puVar15);
      }
      local_1e8 = lVar19 + 0x58;
      local_204 = local_204 + 1;
      plVar9 = local_178 + 2;
      local_178 = plVar9;
    } while (local_204 < *(int *)(param_1 + 0x78));
  }
  if (local_190 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14060ec10 FUN_14060ec10 body=482 status=ok
// SIG undefined FUN_14060ec10(void)

uint FUN_14060ec10(longlong param_1,int param_2,float param_3,longlong param_4)

{
  longlong *plVar1;
  byte *pbVar2;
  int iVar3;
  longlong lVar4;
  float *pfVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  uint uVar8;
  longlong lVar10;
  undefined8 local_98;
  undefined1 local_90 [24];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined8 local_48;
  longlong local_40 [2];
  float local_30;
  byte local_2c;
  undefined4 local_28;
  ulonglong uVar9;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0x78) <= param_2)) {
    uVar8 = 0xffffffff;
  }
  else {
    if (param_4 == 0) {
      param_4 = param_1;
    }
    puVar7 = (undefined4 *)((longlong)param_2 * 0x58 + *(longlong *)(param_1 + 0x70));
    local_78 = *puVar7;
    uStack_74 = puVar7[1];
    uStack_70 = puVar7[2];
    uStack_6c = puVar7[3];
    local_68 = puVar7[4];
    uStack_64 = puVar7[5];
    uStack_60 = puVar7[6];
    uStack_5c = puVar7[7];
    TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(&local_58,puVar7 + 8);
    uVar6 = 0;
    uVar8 = 0;
    local_2c = local_2c ^ (*(byte *)(puVar7 + 0x13) ^ local_2c) & 1;
    local_2c = (*(byte *)(puVar7 + 0x13) ^ local_2c) & 2 ^ local_2c;
    local_28 = puVar7[0x14];
    if (0 < *(int *)(param_4 + 0x78)) {
      pfVar5 = (float *)(*(longlong *)(param_4 + 0x70) + 0x48);
      uVar9 = uVar6;
      do {
        uVar8 = (uint)uVar9;
        if (param_3 < *pfVar5 || param_3 == *pfVar5) break;
        uVar8 = uVar8 + 1;
        uVar9 = (ulonglong)uVar8;
        uVar6 = uVar6 + 1;
        pfVar5 = pfVar5 + 0x16;
      } while ((longlong)uVar6 < (longlong)*(int *)(param_4 + 0x78));
    }
    iVar3 = *(int *)(param_4 + 0x78);
    plVar1 = (longlong *)(param_4 + 0x70);
    *(int *)(param_4 + 0x78) = iVar3 + 1;
    local_30 = param_3;
    if (*(int *)(param_4 + 0x7c) < iVar3 + 1) {
      TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
    }
    lVar10 = (longlong)(int)uVar8 * 0x58;
    _guard_xfg_dispatch_icall_nop
              ((void *)(*plVar1 + lVar10 + 0x58),(void *)(*plVar1 + lVar10),
               (longlong)(int)(iVar3 - uVar8) * 0x58);
    _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + lVar10),0,0x58);
    lVar4 = *plVar1;
    puVar7 = (undefined4 *)(lVar10 + lVar4);
    *puVar7 = local_78;
    puVar7[1] = uStack_74;
    puVar7[2] = uStack_70;
    puVar7[3] = uStack_6c;
    puVar7 = (undefined4 *)(lVar10 + 0x10 + lVar4);
    *puVar7 = local_68;
    puVar7[1] = uStack_64;
    puVar7[2] = uStack_60;
    puVar7[3] = uStack_5c;
    *(undefined4 *)(lVar10 + 0x20 + lVar4) = local_58;
    *(undefined4 *)(lVar10 + 0x24 + lVar4) = local_54;
    *(undefined4 *)(lVar10 + 0x28 + lVar4) = local_50;
    local_98 = local_48;
    FString::FString(local_90,local_40);
    FSoftObjectPath::operator=(lVar4 + 0x30 + lVar10,&local_98);
    *(float *)(lVar10 + 0x48 + lVar4) = local_30;
    pbVar2 = (byte *)(lVar10 + 0x4c + lVar4);
    *pbVar2 = *pbVar2 ^ (local_2c ^ *(byte *)(lVar10 + 0x4c + lVar4)) & 1;
    pbVar2 = (byte *)(lVar10 + 0x4c + lVar4);
    *pbVar2 = *pbVar2 ^ (*(byte *)(lVar10 + 0x4c + lVar4) ^ local_2c) & 2;
    *(undefined4 *)(lVar10 + 0x50 + lVar4) = local_28;
    if (local_40[0] != 0) {
      FMemory::Free();
    }
  }
  return uVar8;
}



// FUNCTION 14060ee00 FUN_14060ee00 body=117 status=ok
// SIG undefined FUN_14060ee00(void)

void FUN_14060ee00(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<FName,FDynamicClassStaticData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = FUN_14060d680(param_1,param_2);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      lVar2 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar2 = param_1 + 0x38;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar2 + uVar3 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 14060ee80 Empty body=447 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FName,FDynamicClassStaticData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar4 = *puVar7;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar6 = local_68 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar6;
      if (bVar3) goto LAB_14060ef51;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_64 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_54 = (iStack_50 - iVar6) + 0x1f;
    if (iVar2 < iStack_54) {
LAB_14060ef51:
      iStack_54 = iVar2;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar2) {
    do {
      lVar5 = (longlong)iStack_2c * 0x70 + *param_1;
      *(undefined4 *)(lVar5 + 0x60) = 0;
      if (*(longlong *)(lVar5 + 0x58) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (lVar5 + 0x18);
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 14060f040 FUN_14060f040 body=578 status=ok
// SIG undefined FUN_14060f040(void)

void FUN_14060f040(longlong *param_1,int param_2)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int local_78;
  uint uStack_74;
  int iStack_64;
  int iStack_60;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  int iStack_3c;
  int iStack_38;
  
  iVar7 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_78 = 0;
  uStack_74 = 1;
  iStack_64 = 0;
  iStack_60 = 0;
  if (iVar7 != 0) {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar3 = *puVar9;
    iStack_60 = 0;
    local_78 = 0;
    while (uVar3 == 0) {
      lVar4 = (longlong)local_78;
      iStack_60 = iStack_60 + 0x20;
      iVar8 = local_78 + 1;
      bVar2 = (int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar8;
      if (bVar2) goto LAB_14060f111;
      uVar3 = puVar9[lVar4 + 1];
    }
    uStack_74 = -uVar3 & uVar3;
    iVar8 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    iStack_64 = (iStack_60 - iVar8) + 0x1f;
    if (iVar7 < iStack_64) {
LAB_14060f111:
      iStack_64 = iVar7;
    }
  }
  local_50 = local_78;
  uStack_4c = uStack_74;
  local_40 = 0xffffffff;
  iStack_3c = iStack_64;
  iStack_38 = iStack_60;
  puStack_48 = puVar1;
  if (iStack_64 < iVar7) {
    do {
      plVar6 = (longlong *)((longlong)iStack_3c * 0x68 + *param_1);
      iVar7 = (int)plVar6[0xb];
      plVar5 = (longlong *)plVar6[10];
      if (iVar7 != 0) {
        do {
          if (*plVar5 != 0) {
            FMemory::Free();
          }
          plVar5 = plVar5 + 2;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        plVar5 = (longlong *)plVar6[10];
      }
      if (plVar5 != (longlong *)0x0) {
        FMemory::Free(plVar5);
      }
      if (plVar6[8] != 0) {
        FMemory::Free();
      }
      if (plVar6[6] != 0) {
        FMemory::Free();
      }
      if (plVar6[4] != 0) {
        FMemory::Free();
      }
      if (plVar6[2] != 0) {
        FMemory::Free();
      }
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    } while (iStack_3c < (int)puStack_48[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar3 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar3) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar3;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 14060f290 FUN_14060f290 body=461 status=ok
// SIG undefined FUN_14060f290(void)

void FUN_14060f290(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint *puVar8;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar2 != 0) {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar4 = *puVar8;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar7 = local_68 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar7;
      if (bVar3) goto LAB_14060f361;
      uVar4 = puVar8[lVar5 + 1];
    }
    uStack_64 = -uVar4 & uVar4;
    iVar7 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    iStack_54 = (iStack_50 - iVar7) + 0x1f;
    if (iVar2 < iStack_54) {
LAB_14060f361:
      iStack_54 = iVar2;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar2) {
    do {
      plVar6 = (longlong *)((longlong)iStack_2c * 0x38 + *param_1);
      if (plVar6[4] != 0) {
        FMemory::Free();
      }
      if (plVar6[2] != 0) {
        FMemory::Free();
      }
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 14060f470 FUN_14060f470 body=1189 status=ok
// SIG undefined FUN_14060f470(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14060f470(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  byte bVar6;
  int *piVar7;
  int *piVar8;
  undefined8 *******pppppppuVar9;
  int iVar10;
  int *piVar11;
  undefined1 auStack_198 [32];
  int local_178 [2];
  undefined1 local_170 [8];
  int *local_168;
  undefined8 ******local_160 [2];
  undefined1 local_150 [80];
  longlong local_100;
  undefined8 ******local_70 [4];
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  if ((*(byte *)(param_3 + 0x40) & 2) != 0) {
    return;
  }
  piVar11 = (int *)0x0;
  piVar1 = (int *)(param_1 + 0x20);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146855c9c) && (_Init_thread_header(&DAT_146855c9c), DAT_146855c9c == -1))
  {
    DAT_146216a80 = 0;
    _DAT_146216a88 = 0;
    _DAT_146216aa0 = 0;
    _DAT_146216aa8 = 0;
    _DAT_146216ab0 = 0xffffffff;
    _DAT_146216ab4 = 0;
    DAT_146216ac0 = 0;
    _DAT_146216ac8 = 0;
    atexit(FUN_143e400b0);
    _Init_thread_footer(&DAT_146855c9c);
  }
  TSet<TTuple<FGuid,unsigned_char>,TDefaultMapHashableKeyFuncs<FGuid,unsigned_char,0>,FDefaultSetAllocator>
  ::FindId(&DAT_146216a80,local_178,piVar1);
  piVar8 = piVar11;
  if (local_178[0] != -1) {
    piVar8 = (int *)((longlong)local_178[0] * 0x1c + DAT_146216a80);
  }
  piVar7 = piVar8 + 4;
  if (piVar8 == (int *)0x0) {
    piVar7 = piVar11;
  }
  if (piVar7 == (int *)0x0) {
    local_168 = piVar1;
    local_160[0] = (undefined8 ******)FKeyHandle::FKeyHandle(local_170);
    FUN_140608dd0(&DAT_146216a80,local_178,&local_168,0);
    iVar10 = *(int *)((longlong)local_178[0] * 0x1c + 0x10 + DAT_146216a80);
  }
  else {
    iVar10 = *piVar7;
  }
  if (*(int *)(param_5 + 0x18) != *(int *)(param_5 + 0x44)) {
    lVar4 = *(longlong *)(param_5 + 0x50);
    if (*(longlong *)(param_5 + 0x50) == 0) {
      lVar4 = param_5 + 0x48;
    }
    iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(param_5 + 0x58) - 1U & (longlong)iVar10) * 4);
    if (iVar3 != -1) {
      do {
        piVar8 = (int *)((longlong)iVar3 * 0x38 + *(longlong *)(param_5 + 0x10));
        if (*piVar8 == iVar10) {
          if (iVar3 != -1) goto LAB_14060f5d0;
          break;
        }
        iVar3 = piVar8[0xc];
      } while (iVar3 != -1);
    }
  }
  piVar8 = piVar11;
LAB_14060f5d0:
  piVar11 = piVar8 + 2;
  if (piVar8 == (int *)0x0) {
    piVar11 = (int *)0x0;
  }
  if ((piVar11 != (int *)0x0) && ((*(byte *)(piVar11 + 8) & 1) != 0)) {
    if ((*(byte *)(piVar11 + 8) & 2) == 0) {
      piVar11 = *(int **)piVar11;
    }
    if (piVar11 != (int *)0x0) {
      if (piVar11[8] < *(int *)(param_1 + 0x30)) {
        return;
      }
      lVar4 = FUN_14060aaa0(local_150,piVar1,param_2,param_3);
      piVar11[2] = *(int *)(lVar4 + 8);
      uVar5 = *(undefined8 *)(lVar4 + 0x18);
      *(undefined8 *)(piVar11 + 4) = *(undefined8 *)(lVar4 + 0x10);
      *(undefined8 *)(piVar11 + 6) = uVar5;
      piVar11[8] = *(int *)(lVar4 + 0x20);
      iVar10 = *(int *)(lVar4 + 0x2c);
      iVar3 = *(int *)(lVar4 + 0x30);
      iVar2 = *(int *)(lVar4 + 0x34);
      piVar11[10] = *(int *)(lVar4 + 0x28);
      piVar11[0xb] = iVar10;
      piVar11[0xc] = iVar3;
      piVar11[0xd] = iVar2;
      piVar11[0xe] = *(int *)(lVar4 + 0x38);
      piVar11[0xf] = *(int *)(lVar4 + 0x3c);
      piVar11[0x10] = *(int *)(lVar4 + 0x40);
      local_168 = *(int **)(lVar4 + 0x48);
      FString::FString(local_160,lVar4 + 0x50);
      FSoftObjectPath::operator=(piVar11 + 0x12,&local_168);
      uVar5 = *(undefined8 *)(lVar4 + 0x68);
      *(undefined8 *)(piVar11 + 0x18) = *(undefined8 *)(lVar4 + 0x60);
      *(undefined8 *)(piVar11 + 0x1a) = uVar5;
      piVar11[0x1c] = *(int *)(lVar4 + 0x70);
      piVar11[0x1d] = *(int *)(lVar4 + 0x74);
      piVar11[0x1e] = *(int *)(lVar4 + 0x78);
      piVar11[0x1f] = *(int *)(lVar4 + 0x7c);
      piVar11[0x20] = *(int *)(lVar4 + 0x80);
      *(undefined1 *)(piVar11 + 0x21) = *(undefined1 *)(lVar4 + 0x84);
      uVar5 = *(undefined8 *)(lVar4 + 0x90);
      *(undefined8 *)(piVar11 + 0x22) = *(undefined8 *)(lVar4 + 0x88);
      *(undefined8 *)(piVar11 + 0x24) = uVar5;
      piVar11[0x26] = *(int *)(lVar4 + 0x98);
      *(undefined1 *)(piVar11 + 0x27) = *(undefined1 *)(lVar4 + 0x9c);
      *(undefined8 *)(piVar11 + 0x28) = *(undefined8 *)(lVar4 + 0xa0);
      *(undefined1 *)(piVar11 + 0x2a) = *(undefined1 *)(lVar4 + 0xa8);
      *(undefined8 *)(piVar11 + 0x2b) = *(undefined8 *)(lVar4 + 0xac);
      *(undefined8 *)(piVar11 + 0x2d) = *(undefined8 *)(lVar4 + 0xb4);
      piVar11[0x2f] = *(int *)(lVar4 + 0xbc);
      piVar11[0x30] = *(int *)(lVar4 + 0xc0);
      *(undefined8 *)(piVar11 + 0x31) = *(undefined8 *)(lVar4 + 0xc4);
      piVar11[0x33] = *(int *)(lVar4 + 0xcc);
      piVar11[0x34] = *(int *)(lVar4 + 0xd0);
      piVar11[0x35] = *(int *)(lVar4 + 0xd4);
      piVar11[0x36] = *(int *)(lVar4 + 0xd8);
      *(byte *)(piVar11 + 0x37) =
           *(byte *)(piVar11 + 0x37) ^ (*(byte *)(piVar11 + 0x37) ^ *(byte *)(lVar4 + 0xdc)) & 1;
      bVar6 = (*(byte *)(lVar4 + 0xdc) ^ *(byte *)(piVar11 + 0x37)) & 2 ^ *(byte *)(piVar11 + 0x37);
      *(byte *)(piVar11 + 0x37) = bVar6;
      bVar6 = (bVar6 ^ *(byte *)(lVar4 + 0xdc)) & 4 ^ bVar6;
      *(byte *)(piVar11 + 0x37) = bVar6;
      bVar6 = (bVar6 ^ *(byte *)(lVar4 + 0xdc)) & 8 ^ bVar6;
      *(byte *)(piVar11 + 0x37) = bVar6;
      bVar6 = (bVar6 ^ *(byte *)(lVar4 + 0xdc)) & 0x10 ^ bVar6;
      *(byte *)(piVar11 + 0x37) = bVar6;
      *(byte *)(piVar11 + 0x37) = (bVar6 ^ *(byte *)(lVar4 + 0xdc)) & 0x20 ^ bVar6;
      goto LAB_14060f864;
    }
  }
  uVar5 = FUN_14060aaa0(local_150,piVar1,param_2,param_3);
  local_178[0] = iVar10;
  FUN_140607d60(local_70,uVar5);
  local_168 = local_178;
  local_160[0] = local_70;
  FUN_140609050(param_5 + 0x10,local_170,&local_168,0);
  if ((local_50 & 1) != 0) {
    pppppppuVar9 = local_70;
    if ((local_50 & 2) == 0) {
      pppppppuVar9 = (undefined8 *******)local_70[0];
    }
    local_50 = local_50 & 0xfe;
    (*(code *)**pppppppuVar9)(pppppppuVar9,0);
    if ((local_50 & 2) == 0) {
      FMemory::Free(local_70[0]);
    }
  }
LAB_14060f864:
  if (local_100 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14060f920 FUN_14060f920 body=1345 status=ok
// SIG undefined FUN_14060f920(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14060f920(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  ushort *puVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int iVar29;
  undefined8 uVar30;
  longlong lVar31;
  longlong lVar32;
  undefined8 *puVar33;
  longlong lVar34;
  longlong lVar35;
  float *pfVar36;
  ushort *puVar37;
  ulonglong uVar38;
  uint *puVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  
  FUN_14228f250(param_1 + 0x30);
  if (*param_2 != 0) {
    if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
      FUN_140613440(param_1);
      FUN_14060ff30(param_1,*param_2);
    }
    if ((0 < *(int *)(param_1 + 0x58)) && (fVar49 = *(float *)(param_1 + 0x48), 0.0 <= fVar49)) {
      if (1.0 <= fVar49) {
        fVar49 = 1.0;
      }
      if (((0.0 < fVar49) && (lVar32 = *(longlong *)(*param_2 + 0xb8), lVar32 != 0)) &&
         (plVar12 = *(longlong **)(lVar32 + 0x118), plVar12 != (longlong *)0x0)) {
        uVar30 = UCircularThrobber::GetPrivateStaticClass();
        lVar31 = (**(code **)(*plVar12 + 0x628))(plVar12,uVar30);
        if ((lVar31 != 0) && (lVar32 = FUN_140611630(lVar31,lVar32), lVar32 != 0)) {
          if (((((*(byte *)(lVar32 + 0x15a) & 1) != 0) &&
               ((*(longlong *)(lVar32 + 0xb0) != 0 &&
                (lVar31 = (longlong)*(int *)(lVar32 + 200), 0 < *(int *)(lVar32 + 200))))) &&
              (iVar29 = FUN_1432635d0(*(longlong *)(lVar32 + 0xb0),*(undefined8 *)(lVar32 + 0xa8),
                                      *(undefined8 *)(lVar32 + 0xc0),lVar31), iVar29 != 0)) &&
             (iVar29 = FUN_143264600(), iVar29 == 0)) {
            if (0 < lVar31) {
              lVar34 = 0;
              lVar35 = 0;
              do {
                lVar13 = *(longlong *)(lVar32 + 0xc0);
                uVar3 = *(undefined4 *)(lVar34 + 4 + lVar13);
                uVar4 = *(undefined4 *)(lVar34 + 0xc + lVar13);
                uVar5 = *(uint *)(lVar34 + 0x14 + lVar13);
                uVar6 = *(undefined4 *)(lVar34 + 0x18 + lVar13);
                uVar7 = *(undefined4 *)(lVar34 + 0x1c + lVar13);
                uVar8 = *(undefined4 *)(lVar34 + 0x20 + lVar13);
                uVar9 = *(undefined4 *)(lVar34 + 0x24 + lVar13);
                uVar10 = *(undefined4 *)(lVar34 + lVar13);
                uVar11 = *(undefined4 *)(lVar34 + 8 + lVar13);
                lVar14 = *(longlong *)(lVar32 + 0xd0);
                puVar2 = (undefined4 *)(lVar35 + lVar14);
                *puVar2 = *(undefined4 *)(lVar34 + 0x10 + lVar13);
                puVar2[1] = uVar5 ^ 0x80000000;
                puVar2[2] = uVar6;
                puVar2[3] = uVar4;
                auVar18._8_4_ = uVar11;
                auVar18._0_8_ = CONCAT44(uVar3,uVar10) ^ 0x8000000000000000;
                auVar18._12_4_ = 0;
                *(undefined1 (*) [16])(lVar35 + 0x10 + lVar14) = auVar18;
                auVar19._4_4_ = uVar8;
                auVar19._0_4_ = uVar7;
                auVar19._8_4_ = uVar9;
                auVar19._12_4_ = 0;
                *(undefined1 (*) [16])(lVar35 + 0x20 + lVar14) = auVar19;
                lVar31 = lVar31 + -1;
                lVar34 = lVar34 + 0x28;
                lVar35 = lVar35 + 0x30;
              } while (lVar31 != 0);
            }
            *(byte *)(lVar32 + 0x15a) = *(byte *)(lVar32 + 0x15a) & 0xfe;
          }
          puVar39 = *(uint **)(param_1 + 0x50);
          puVar1 = puVar39 + (longlong)*(int *)(param_1 + 0x58) * 2;
          if (puVar39 != puVar1) {
            plVar12 = param_2 + 1;
            do {
              pfVar36 = (float *)((longlong)(int)puVar39[1] * 0x30 + *(longlong *)(lVar32 + 0xd0));
              puVar15 = *(ushort **)param_2[3];
              for (puVar37 = puVar15; puVar37 != puVar15 + *(int *)((undefined8 *)param_2[3] + 1);
                  puVar37 = puVar37 + 1) {
                if ((uint)*puVar37 == *puVar39) {
                  uVar38 = (longlong)puVar37 - (longlong)puVar15 >> 1;
                  goto LAB_14060fc19;
                }
              }
              uVar38 = 0xffffffff;
LAB_14060fc19:
              lVar31 = *(longlong *)(param_1 + 0x60);
              puVar33 = (undefined8 *)FUN_140611730(plVar12,uVar38 & 0xffffffff);
              uVar30 = puVar33[1];
              *(undefined8 *)(lVar31 + 0x10) = *puVar33;
              *(undefined8 *)(lVar31 + 0x18) = uVar30;
              uVar3 = *(undefined4 *)((longlong)puVar33 + 0x14);
              uVar4 = *(undefined4 *)(puVar33 + 3);
              uVar6 = *(undefined4 *)((longlong)puVar33 + 0x1c);
              *(undefined4 *)(lVar31 + 0x20) = *(undefined4 *)(puVar33 + 2);
              *(undefined4 *)(lVar31 + 0x24) = uVar3;
              *(undefined4 *)(lVar31 + 0x28) = uVar4;
              *(undefined4 *)(lVar31 + 0x2c) = uVar6;
              uVar3 = *(undefined4 *)((longlong)puVar33 + 0x24);
              uVar4 = *(undefined4 *)(puVar33 + 5);
              uVar6 = *(undefined4 *)((longlong)puVar33 + 0x2c);
              *(undefined4 *)(lVar31 + 0x30) = *(undefined4 *)(puVar33 + 4);
              *(undefined4 *)(lVar31 + 0x34) = uVar3;
              *(undefined4 *)(lVar31 + 0x38) = uVar4;
              *(undefined4 *)(lVar31 + 0x3c) = uVar6;
              **(undefined4 **)(param_1 + 0x60) = (int)uVar38;
              lVar31 = *(longlong *)(param_1 + 0x60);
              FUN_14224c850(&DAT_1468b5b70,plVar12,lVar31 + 0x10,uVar38 & 0xffffffff,2);
              if (((*(char *)(param_1 + 0x4c) == '\x01') && (*(char *)(param_1 + 0x4d) == '\x01'))
                 && (*(char *)(param_1 + 0x4e) == '\x01')) {
                uVar30 = *(undefined8 *)(pfVar36 + 2);
                *(undefined8 *)(lVar31 + 0x10) = *(undefined8 *)pfVar36;
                *(undefined8 *)(lVar31 + 0x18) = uVar30;
                uVar30 = *(undefined8 *)(pfVar36 + 6);
                *(undefined8 *)(lVar31 + 0x20) = *(undefined8 *)(pfVar36 + 4);
                *(undefined8 *)(lVar31 + 0x28) = uVar30;
                fVar21 = pfVar36[9];
                fVar22 = pfVar36[10];
                fVar23 = pfVar36[0xb];
                *(float *)(lVar31 + 0x30) = pfVar36[8];
                *(float *)(lVar31 + 0x34) = fVar21;
                *(float *)(lVar31 + 0x38) = fVar22;
                *(float *)(lVar31 + 0x3c) = fVar23;
              }
              else {
                if (*(char *)(param_1 + 0x4e) == '\x01') {
                  auVar17._12_4_ = 0;
                  auVar17._0_12_ = SUB1612(*(undefined1 (*) [16])(pfVar36 + 8),0);
                  *(undefined1 (*) [16])(lVar31 + 0x30) = auVar17;
                }
                else if (*(char *)(param_1 + 0x4e) == '\x02') {
                  auVar20._4_4_ = *(float *)(lVar31 + 0x34) * pfVar36[9];
                  auVar20._0_4_ = *(float *)(lVar31 + 0x30) * pfVar36[8];
                  auVar20._8_4_ = *(float *)(lVar31 + 0x38) * pfVar36[10];
                  auVar20._12_4_ = 0;
                  *(undefined1 (*) [16])(lVar31 + 0x30) = auVar20;
                }
                if (*(char *)(param_1 + 0x4d) == '\x01') {
                  fVar21 = pfVar36[1];
                  fVar22 = pfVar36[2];
                  fVar23 = pfVar36[3];
                  *(float *)(lVar31 + 0x10) = *pfVar36;
                  *(float *)(lVar31 + 0x14) = fVar21;
                  *(float *)(lVar31 + 0x18) = fVar22;
                  *(float *)(lVar31 + 0x1c) = fVar23;
                }
                else if (*(char *)(param_1 + 0x4d) == '\x02') {
                  fVar21 = *pfVar36;
                  fVar22 = pfVar36[1];
                  fVar23 = pfVar36[2];
                  fVar24 = pfVar36[3];
                  fVar25 = *(float *)(lVar31 + 0x10);
                  fVar26 = *(float *)(lVar31 + 0x14);
                  fVar27 = *(float *)(lVar31 + 0x18);
                  fVar28 = *(float *)(lVar31 + 0x1c);
                  fVar46 = fVar27 * fVar21 * fRam0000000146855af4;
                  fVar47 = fVar26 * fVar21 * fRam0000000146855af8;
                  fVar48 = fVar25 * fVar21 * fRam0000000146855afc;
                  fVar40 = fVar28 * fVar22 * fRam0000000146855ae4;
                  fVar41 = fVar25 * fVar22 * fRam0000000146855ae8;
                  fVar42 = fVar26 * fVar22 * fRam0000000146855aec;
                  fVar43 = fVar25 * fVar23 * fRam0000000146855ad4;
                  fVar44 = fVar28 * fVar23 * fRam0000000146855ad8;
                  fVar45 = fVar27 * fVar23 * fRam0000000146855adc;
                  *(float *)(lVar31 + 0x10) =
                       fVar28 * fVar21 * _DAT_146855af0 + fVar24 * fVar25 +
                       fVar27 * fVar22 * _DAT_146855ae0 + fVar26 * fVar23 * _DAT_146855ad0;
                  *(float *)(lVar31 + 0x14) = fVar46 + fVar24 * fVar26 + fVar40 + fVar43;
                  *(float *)(lVar31 + 0x18) = fVar47 + fVar24 * fVar27 + fVar41 + fVar44;
                  *(float *)(lVar31 + 0x1c) = fVar48 + fVar24 * fVar28 + fVar42 + fVar45;
                }
                if (*(char *)(param_1 + 0x4c) == '\x01') {
                  auVar16._12_4_ = 0;
                  auVar16._0_12_ = SUB1612(*(undefined1 (*) [16])(pfVar36 + 4),0);
                  *(undefined1 (*) [16])(lVar31 + 0x20) = auVar16;
                }
                else if (*(char *)(param_1 + 0x4c) == '\x02') {
                  fVar21 = pfVar36[5];
                  fVar22 = pfVar36[6];
                  *(float *)(lVar31 + 0x20) = pfVar36[4] + *(float *)(lVar31 + 0x20);
                  *(float *)(lVar31 + 0x24) = fVar21 + *(float *)(lVar31 + 0x24);
                  *(float *)(lVar31 + 0x28) = fVar22 + *(float *)(lVar31 + 0x28);
                  *(float *)(lVar31 + 0x2c) = *(float *)(lVar31 + 0x2c) + 0.0;
                }
              }
              FUN_14224c080(&DAT_1468b5b70,plVar12,lVar31 + 0x10,uVar38 & 0xffffffff,2);
              FUN_140613640(plVar12,param_1 + 0x60,fVar49);
              puVar39 = puVar39 + 2;
            } while (puVar39 != puVar1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14060fe70 FUN_14060fe70 body=187 status=ok
// SIG undefined FUN_14060fe70(void)

void FUN_14060fe70(longlong *param_1,undefined8 *param_2)

{
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined2 local_10;
  undefined1 local_e;
  
  SharedPointerInternals::FSharedReferencer<0>::FSharedReferencer<0>(local_78,*param_2);
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_e = 0;
  (**(code **)(*param_1 + 0x20))(param_1,local_78);
  FUN_14060d7a0(&local_70,param_2 + 1);
  if (local_38 != 0) {
    FMemory::Free();
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14060ff30 FUN_14060ff30 body=396 status=ok
// SIG undefined FUN_14060ff30(void)

void FUN_14060ff30(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  
  if ((((param_2 != 0) && ((*(byte *)(param_1 + 0x70) & 1) != 0)) && (0 < *(int *)(param_1 + 0x80)))
     && ((0 < *(int *)(param_1 + 0x58) && (lVar2 = *(longlong *)(param_2 + 0xb8), lVar2 != 0)))) {
    puVar6 = *(undefined8 **)(param_1 + 0x78);
    puVar1 = puVar6 + *(int *)(param_1 + 0x80);
    for (; puVar6 != puVar1; puVar6 = puVar6 + 1) {
      iVar3 = FUN_1423ac950(lVar2,*puVar6);
      if ((iVar3 != -1) &&
         (lVar4 = (longlong)*(int *)(param_1 + 0x58), *(int *)(param_1 + 0x58) != 0)) {
        iVar10 = 0;
        lVar7 = 0;
        bVar11 = **(int **)(param_1 + 0x50) != iVar3;
        iVar8 = 0;
        do {
          lVar7 = lVar7 + 1;
          iVar9 = iVar8 + 1;
          if (lVar7 < lVar4) {
            piVar5 = (int *)(*(longlong *)(param_1 + 0x50) + lVar7 * 8);
            do {
              if (bVar11 != (*piVar5 != iVar3)) break;
              iVar9 = iVar9 + 1;
              lVar7 = lVar7 + 1;
              piVar5 = piVar5 + 2;
            } while (lVar7 < lVar4);
          }
          if (bVar11 != false) {
            if (iVar10 != iVar8) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar10 * 8),
                         (void *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar8 * 8),
                         (longlong)(iVar9 - iVar8) << 3);
            }
            iVar10 = iVar10 + (iVar9 - iVar8);
          }
          bVar11 = (bool)(bVar11 ^ 1);
          iVar8 = iVar9;
        } while (lVar7 < lVar4);
        *(int *)(param_1 + 0x58) = iVar10;
      }
    }
  }
  return;
}



// FUNCTION 1406100c0 FUN_1406100c0 body=85 status=ok
// SIG undefined FUN_1406100c0(void)

void FUN_1406100c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140610112. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,param_3);
  return;
}



// FUNCTION 140610120 FUN_140610120 body=103 status=ok
// SIG undefined FUN_140610120(void)

void FUN_140610120(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140610184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))
            ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140610190 FUN_140610190 body=2802 status=ok
// SIG undefined FUN_140610190(void)

void FUN_140610190(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  bool bVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong *plVar13;
  ulonglong *puVar14;
  int *piVar15;
  uint uVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  bool bVar22;
  float fVar23;
  int local_res8 [2];
  undefined8 local_res10;
  float local_res18 [2];
  undefined8 local_res20;
  ulonglong local_130;
  undefined8 local_120;
  undefined4 *local_118;
  longlong local_110;
  int local_108;
  int local_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int local_f4;
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 *local_d0;
  int local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined1 local_ac [4];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  int *local_98;
  undefined8 **local_90;
  longlong local_88;
  undefined8 *local_80;
  
  local_res10 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146855c98) && (_Init_thread_header(&DAT_146855c98), DAT_146855c98 == -1))
  {
    FKeyHandle::FKeyHandle(&DAT_146855c94);
    _Init_thread_footer(&DAT_146855c98);
  }
  plVar11 = *(longlong **)(param_2 + 0x10);
  local_108 = DAT_146855c94;
  local_f4 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_104 = 0;
  iStack_100 = 0;
  iStack_fc = 0;
  iStack_f8 = 0;
  if ((int)plVar11[1] != *(int *)((longlong)plVar11 + 0x34)) {
    iVar5 = GetTypeHash(&local_108);
    plVar8 = (longlong *)plVar11[8];
    if ((longlong *)plVar11[8] == (longlong *)0x0) {
      plVar8 = plVar11 + 7;
    }
    iVar5 = *(int *)((longlong)plVar8 + ((longlong)(int)plVar11[9] - 1U & (longlong)iVar5) * 4);
    if (iVar5 != -1) {
      lVar21 = *plVar11;
      do {
        lVar20 = (longlong)iVar5;
        if (*(int *)(lVar21 + lVar20 * 0x28) == local_108) {
          if ((*(int *)(lVar21 + 0x14 + lVar20 * 0x28) == local_f4) &&
             (((*(int *)(lVar21 + 8 + lVar20 * 0x28) == iStack_100 &&
               *(int *)(lVar21 + 0xc + lVar20 * 0x28) == iStack_fc) &&
              *(int *)(lVar21 + 0x10 + lVar20 * 0x28) == iStack_f8) &&
              *(int *)(lVar21 + 4 + lVar20 * 0x28) == local_104)) {
            bVar22 = true;
          }
          else {
            bVar22 = false;
          }
          if (!bVar22) goto LAB_1406102bd;
          bVar22 = true;
        }
        else {
LAB_1406102bd:
          bVar22 = false;
        }
        param_2 = local_res10;
        if (bVar22) {
          if (((iVar5 != -1) && (lVar21 = lVar21 + lVar20 * 0x28, lVar21 != 0)) &&
             (puVar17 = (undefined8 *)(lVar21 + 0x18), puVar17 != (undefined8 *)0x0)) {
            puVar17 = (undefined8 *)*puVar17;
            goto LAB_14061037b;
          }
          break;
        }
        iVar5 = *(int *)(lVar21 + 0x20 + lVar20 * 0x28);
      } while (iVar5 != -1);
    }
  }
  puVar17 = (undefined8 *)0x0;
  puVar9 = (undefined8 *)operator_new(0x58);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &PTR__scalar_deleting_destructor__144012e38;
    puVar9[1] = 0;
    puVar9[2] = 0;
    puVar9[5] = 0;
    puVar9[6] = 0;
    *(undefined4 *)(puVar9 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar9 + 0x3c) = 0;
    puVar9[9] = 0;
    *(undefined4 *)(puVar9 + 10) = 0;
    puVar17 = puVar9;
  }
  local_98 = &local_108;
  local_90 = &local_f0;
  local_f0 = puVar17;
  FUN_140609380(*(undefined8 *)(param_2 + 0x10),local_ac,&local_98,0);
  if (local_f0 != (undefined8 *)0x0) {
    (**(code **)*local_f0)(local_f0,1);
  }
LAB_14061037b:
  FUN_140610d90(puVar17 + 1,&local_res10,(undefined4 *)(param_1 + 0x10));
  if (((uint)local_res10 == -1) ||
     (lVar21 = (longlong)(int)(uint)local_res10 * 0x70 + puVar17[1], lVar21 == 0)) {
    local_118 = (undefined4 *)(param_1 + 0x10);
    FUN_140608600(puVar17 + 1,local_res8,&local_118,0);
    lVar21 = (longlong)local_res8[0] * 0x70 + puVar17[1];
  }
  iVar5 = *(int *)(lVar21 + 0x10);
  iVar1 = *(int *)(param_1 + 0x20);
  *(int *)(lVar21 + 0x10) = iVar1;
  iVar6 = (**(code **)(*param_3 + 0x30))(param_3);
  if (*(char *)(param_1 + 0x84) == '\0') {
    lVar20 = FWeakObjectPtr::Get(param_1 + 0x38);
    if (lVar20 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(param_1 + 0x40)) &&
         (local_e8 = 0, *(longlong *)(param_1 + 0x48) != 0)) {
        lVar20 = FUN_141796df0();
        FWeakObjectPtr::operator=(param_1 + 0x38,lVar20);
        if ((lVar20 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(param_1 + 0x40) = DAT_1464b56f4;
        }
        lVar20 = FWeakObjectPtr::Get(param_1 + 0x38);
        if (lVar20 != 0) goto LAB_14061048c;
      }
    }
    else {
LAB_14061048c:
      lVar10 = FUN_1406184b0();
      if ((*(int *)(*(longlong *)(lVar20 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar22 = false;
      }
      else {
        bVar22 = true;
      }
      if (bVar22) {
        lVar20 = FUN_1406112d0(param_1 + 0x38,0);
        local_110 = FUN_1406133c0(*(undefined8 *)(lVar20 + 0x28));
        if (local_110 != 0) {
          iVar7 = FUN_143264720(local_110,&local_res20,local_res18);
          if ((iVar7 == 0) || (iVar7 = FUN_143264600(), iVar7 != 0)) {
            bVar22 = false;
          }
          else {
            bVar22 = true;
          }
          FUN_143264350(&local_110,0,0);
          if (bVar22) {
            *(undefined1 *)(param_1 + 0x84) = 1;
            *(float *)(param_1 + 0x70) = local_res18[0] - (float)local_res20;
          }
        }
      }
    }
  }
  uVar16 = *(uint *)(param_1 + 0xc0);
  if (uVar16 == 0x80000000) {
    puVar14 = (ulonglong *)(param_1 + 0xac);
    if (*(int *)(param_1 + 0xbc) != 0) {
      puVar14 = (ulonglong *)(param_1 + 0xa0);
    }
    uVar19 = *puVar14;
    local_res10._0_4_ = (uint)uVar19;
    uVar16 = (uint)local_res10;
  }
  else {
    local_res10 = (ulonglong)uVar16;
    uVar19 = local_res10;
  }
  puVar17 = (undefined8 *)(param_1 + 0xa0);
  if (*(int *)(param_1 + 0xbc) != 0) {
    puVar17 = (undefined8 *)(param_1 + 0xac);
  }
  uVar12 = *puVar17;
  uStack_dc = 0;
  local_res10._4_4_ = (float)(uVar19 >> 0x20);
  fVar3 = local_res10._4_4_;
  local_e0 = *(undefined4 *)(param_1 + 0x7c);
  local_130 = (ulonglong)*(uint *)(param_1 + 0x80);
  local_res10 = local_130;
  fVar23 = *(float *)(param_1 + 0x70) - (*(float *)(param_1 + 0x74) + *(float *)(param_1 + 0x78));
  if ((0.0 < fVar23) && (ABS(fVar23) <= 1e-08)) {
    AK::MemoryMgr::StartProfileThreadUsage(*(uint *)(param_1 + 0x80));
  }
  local_res18[0] = *(float *)(param_1 + 0xbc);
  if ((iVar6 == 1) && (local_res18[0] != 1.4013e-45)) {
    local_res8[0] = (uint)local_res8[0]._1_3_ << 8;
  }
  else {
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,1);
    if (iVar6 == 0) {
      if ((uVar16 == (uint)uVar12) &&
         (local_res20._4_4_ = (float)((ulonglong)uVar12 >> 0x20), fVar3 == local_res20._4_4_)) {
        bVar22 = false;
      }
      else {
        bVar22 = true;
      }
      local_res10 = CONCAT71((int7)(uVar19 >> 8),1);
      local_res20 = (undefined4 *)uVar12;
      if (bVar22) goto LAB_14061077d;
    }
  }
  local_res10 = local_res10 & 0xffffffffffffff00;
LAB_14061077d:
  if ((int)param_3[0x16] != *(int *)((longlong)param_3 + 0xdc)) {
    plVar11 = (longlong *)param_3[0x1d];
    if ((longlong *)param_3[0x1d] == (longlong *)0x0) {
      plVar11 = param_3 + 0x1c;
    }
    iVar7 = *(int *)((longlong)plVar11 +
                    ((longlong)(int)param_3[0x1e] - 1U & (longlong)*(int *)(param_1 + 0x98)) * 4);
    if (iVar7 != -1) {
      do {
        piVar15 = (int *)((longlong)iVar7 * 0xc0 + param_3[0x15]);
        if (*piVar15 == *(int *)(param_1 + 0x98)) {
          if (((iVar7 != -1) && (piVar15 != (int *)0x0)) && (piVar15 + 2 != (int *)0x0)) {
            FMovieSceneObjectCache::FindBoundObjects(piVar15 + 2,&local_d0,param_1 + 0x88,param_3);
            goto LAB_1406107fe;
          }
          break;
        }
        iVar7 = piVar15[0x2e];
      } while (iVar7 != -1);
    }
  }
  local_d0 = (undefined4 *)0x0;
  local_c8 = 0;
LAB_1406107fe:
  local_118 = local_d0 + (longlong)local_c8 * 2;
  local_res20 = local_d0;
  local_110 = (longlong)iVar6;
  if (local_d0 != local_118) {
    do {
      plVar8 = (longlong *)0x0;
      local_d8 = *local_res20;
      local_d4 = local_res20[1];
      plVar11 = (longlong *)FWeakObjectPtr::Get(&local_d8);
      if (plVar11 != (longlong *)0x0) {
        lVar20 = UCircularThrobber::GetPrivateStaticClass();
        if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar20 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar20 + 0x90) * 8)
            != lVar20 + 0x88)) {
          bVar22 = false;
        }
        else {
          bVar22 = true;
        }
        plVar13 = plVar11;
        if (!bVar22) {
          lVar20 = FUN_1428dfc70();
          if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar20 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar20 + 0x90) * 8) !=
              lVar20 + 0x88)) {
            bVar22 = false;
          }
          else {
            bVar22 = true;
          }
          plVar13 = plVar8;
          if (bVar22) {
            uVar12 = UCircularThrobber::GetPrivateStaticClass();
            plVar13 = (longlong *)(**(code **)(*plVar11 + 0x628))(plVar11,uVar12);
          }
        }
        if (plVar13 != (longlong *)0x0) {
          local_120 = 0xffffffff;
          FWeakObjectPtr::operator=(&local_a0,plVar13);
          local_120 = local_a0;
          local_88 = param_1 + 0x20;
          local_80 = &local_120;
          FUN_140608850(lVar21 + 0x18,local_a8,&local_88,0);
          bVar22 = *(longlong *)(param_1 + 0x30) == 0;
          plVar11 = plVar8;
          if ((!bVar22) ||
             (plVar11 = (longlong *)FUN_1406112d0(param_1 + 0x38), plVar11 != (longlong *)0x0)) {
            iVar6 = *(int *)(param_1 + 0x60);
            if (iVar6 == -1) {
LAB_1406109a9:
              bVar2 = false;
            }
            else {
              if ((*(int *)(param_1 + 0x68) == 0) && (*(int *)(param_1 + 0x6c) == 0)) {
                bVar2 = true;
              }
              else {
                bVar2 = false;
              }
              if (bVar2) goto LAB_1406109a9;
              bVar2 = true;
            }
            if (bVar2) {
              if ((((int)plVar13[0x34] <= iVar6) ||
                  (plVar18 = *(longlong **)(plVar13[0x33] + (longlong)iVar6 * 0x48),
                  plVar18 == (longlong *)0x0)) || (plVar18[3] != *(longlong *)(param_1 + 0x68))) {
                puVar9 = (undefined8 *)plVar13[0x33];
                puVar17 = puVar9 + (longlong)(int)plVar13[0x34] * 9;
                for (; (plVar18 = plVar8, puVar9 != puVar17 &&
                       ((plVar18 = (longlong *)*puVar9, plVar18 == (longlong *)0x0 ||
                        (plVar18[3] != *(longlong *)(param_1 + 0x68))))); puVar9 = puVar9 + 9) {
                }
              }
            }
            else {
              plVar18 = plVar8;
              if (0 < (int)plVar13[0x34]) {
                plVar18 = *(longlong **)plVar13[0x33];
              }
            }
            if (iVar5 == iVar1) {
              plVar8 = (longlong *)(param_1 + 0x28);
              if (bVar22) {
                plVar8 = plVar11 + 7;
              }
              if (plVar18 != (longlong *)0x0) {
                puVar9 = (undefined8 *)plVar13[0x33];
                puVar17 = puVar9 + (longlong)(int)plVar13[0x34] * 9;
                for (; puVar9 != puVar17; puVar9 = puVar9 + 9) {
                  if ((longlong *)*puVar9 == plVar18) {
                    if ((puVar9 != (undefined8 *)0x0) && (puVar9[7] != 0)) {
                      cVar4 = FUN_1406128e0(puVar9[7],plVar8);
                      if (cVar4 == '\0') goto LAB_140610a77;
                      bVar2 = false;
                      goto LAB_140610ab7;
                    }
                    break;
                  }
                }
                FUN_140612c50();
                goto LAB_140610a77;
              }
              bVar2 = true;
            }
            else {
LAB_140610a77:
              bVar2 = true;
              if (plVar18 != (longlong *)0x0) {
                puVar9 = (undefined8 *)plVar13[0x33];
                puVar17 = puVar9 + (longlong)(int)plVar13[0x34] * 9;
                for (; puVar9 != puVar17; puVar9 = puVar9 + 9) {
                  if ((longlong *)*puVar9 == plVar18) {
                    if ((puVar9 != (undefined8 *)0x0) && (puVar9[7] != 0)) {
                      FUN_140616e20(puVar9[7],0);
                      goto LAB_140610ab7;
                    }
                    break;
                  }
                }
                FUN_140612c50();
              }
            }
LAB_140610ab7:
            if (((local_110 != 1) || (local_res18[0] == 1.4013e-45)) || (bVar2)) {
LAB_140610b74:
              if ((char)local_res10 == '\0') {
                if (bVar22) {
                  if ((plVar11 != (longlong *)0x0) &&
                     (cVar4 = FUN_140612f20(plVar13), cVar4 != '\0')) goto LAB_140610bee;
                }
                else {
                  FUN_140612c50();
                }
                FUN_140617020(plVar13,plVar18,0);
              }
              else {
                if (plVar18 == (longlong *)0x0) goto LAB_140610c08;
                lVar20 = FUN_140611630(plVar13,plVar18);
                if (lVar20 == 0) {
                  FUN_140612c50();
                }
                else {
                  FUN_140613c70(lVar20,0);
                }
              }
            }
            else {
              plVar8 = (longlong *)(param_1 + 0x28);
              if (bVar22) {
                plVar8 = plVar11 + 7;
              }
              if (plVar18 == (longlong *)0x0) goto LAB_140610b74;
              lVar20 = FUN_140611630(plVar13,plVar18);
              if (lVar20 == 0) {
                FUN_140612c50();
                goto LAB_140610b74;
              }
              if ((*(char *)(lVar20 + 0x158) != '\0') ||
                 (cVar4 = FUN_1406128e0(lVar20,plVar8), cVar4 == '\0')) goto LAB_140610b74;
            }
LAB_140610bee:
            if (plVar18 != (longlong *)0x0) {
              (**(code **)(*plVar18 + 0x960))(plVar18,0);
            }
          }
        }
      }
LAB_140610c08:
      local_res20 = local_res20 + 2;
    } while (local_res20 != local_118);
  }
  return;
}



// FUNCTION 140610c90 FUN_140610c90 body=111 status=ok
// SIG undefined FUN_140610c90(void)

bool FUN_140610c90(longlong param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 140610d00 FUN_140610d00 body=141 status=ok
// SIG undefined FUN_140610d00(void)

bool FUN_140610d00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))
              ((int)*(undefined8 *)(param_1 + 0x18) + lVar2,param_2,param_3,param_4,param_5);
  }
  return lVar1 != 0;
}



// FUNCTION 140610d90 FUN_140610d90 body=210 status=ok
// SIG undefined FUN_140610d90(void)

int * FUN_140610d90(longlong *param_1,int *param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar1 = FCrc::MemCrc_DEPRECATED(param_3,0x10);
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar1) * 4);
    if (iVar1 != -1) {
      do {
        piVar3 = (int *)((longlong)iVar1 * 0x70 + *param_1);
        if (((piVar3[1] == param_3[1] && piVar3[2] == param_3[2]) && piVar3[3] == param_3[3]) &&
            *param_3 == *piVar3) {
          *param_2 = iVar1;
          return param_2;
        }
        iVar1 = piVar3[0x1a];
      } while (iVar1 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 140610e70 FindId body=210 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FGuid,unsigned_char>,TDefaultMapHashableKeyFuncs<FGuid,unsigned_char,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar1 = FCrc::MemCrc_DEPRECATED(param_3,0x10);
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar1) * 4);
    if (iVar1 != -1) {
      do {
        piVar3 = (int *)((longlong)iVar1 * 0x1c + *param_1);
        if (((piVar3[1] == param_3[1] && piVar3[2] == param_3[2]) && piVar3[3] == param_3[3]) &&
            *param_3 == *piVar3) {
          *param_2 = iVar1;
          return param_2;
        }
        iVar1 = piVar3[5];
      } while (iVar1 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 140610f50 FindId body=219 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = ::GetTypeHash(param_3);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar2) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2;
        if (((*(int *)(lVar1 + lVar4 * 0x28) == *param_3) &&
            (*(int *)(lVar1 + 0x14 + lVar4 * 0x28) == param_3[5])) &&
           (((*(int *)(lVar1 + 0x10 + lVar4 * 0x28) == param_3[4] &&
             *(int *)(lVar1 + 0xc + lVar4 * 0x28) == param_3[3]) &&
            *(int *)(lVar1 + 8 + lVar4 * 0x28) == param_3[2]) &&
            *(int *)(lVar1 + 4 + lVar4 * 0x28) == param_3[1])) {
          *param_2 = iVar2;
          return param_2;
        }
        iVar2 = *(int *)(lVar1 + 0x20 + lVar4 * 0x28);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 140611030 GatherDebugData body=253 status=ok
// SIG undefined GatherDebugData(void)

void FAnimNode_Base::GatherDebugData(undefined8 param_1,float *param_2)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined8 local_res10;
  undefined2 *local_38;
  int local_30;
  undefined2 *local_28;
  int local_20;
  undefined1 local_18 [16];
  
  if (param_2[8] == 0.0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = *(undefined2 **)(param_2 + 6);
  }
  lVar1 = StaticStruct();
  local_res10 = *(undefined8 *)(lVar1 + 0x18);
  FName::ToString(&local_res10,&local_38);
  puVar3 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar3 = local_38;
  }
  FString::PrintfImpl(&local_28,L"%s<W:%.1f%%> %s",puVar3,(double)(*param_2 * 100.0),puVar2);
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  param_2[8] = 0.0;
  if (param_2[9] != 0.0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 6,0);
  }
  puVar2 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar2 = local_28;
  }
  FString::PrintfImpl(local_18,L"Non Overriden GatherDebugData! (%s)",puVar2);
  FNodeDebugData::AddDebugItem(param_2,local_18,0);
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140611130 FUN_140611130 body=5 status=ok
// SIG undefined FUN_140611130(void)

longlong FUN_140611130(longlong param_1)

{
  return param_1 + 0x58;
}



// FUNCTION 140611140 FUN_140611140 body=398 status=ok
// SIG undefined FUN_140611140(void)

longlong FUN_140611140(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  longlong local_28 [2];
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x20);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x28)) && (*(longlong *)(param_1 + 0x30) != 0)) {
      lVar2 = FUN_141796df0();
      FWeakObjectPtr::operator=(param_1 + 0x20,lVar2);
      if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x28) = DAT_1464b56f4;
      }
      lVar2 = FWeakObjectPtr::Get(param_1 + 0x20);
      if (lVar2 != 0) goto LAB_1406111d0;
    }
  }
  else {
LAB_1406111d0:
    lVar3 = FUN_1406184b0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return lVar2;
    }
  }
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return 0;
  }
  puVar4 = (undefined8 *)FSoftObjectPath::ToString((longlong *)(param_1 + 0x30),local_28);
  if (*(int *)(puVar4 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*puVar4;
  }
  uVar5 = FUN_1406184b0();
  lVar2 = FUN_141799c90(uVar5,param_2,puVar6,0,0,0,1);
  if (lVar2 != 0) {
    lVar3 = FUN_1406184b0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1406112a1;
  }
  lVar2 = 0;
LAB_1406112a1:
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return lVar2;
}



// FUNCTION 1406112d0 FUN_1406112d0 body=387 status=ok
// SIG undefined FUN_1406112d0(void)

longlong FUN_1406112d0(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  longlong local_18 [2];
  
  lVar2 = FWeakObjectPtr::Get();
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 8)) && (*(longlong *)(param_1 + 0x10) != 0)) {
      lVar2 = FUN_141796df0();
      FWeakObjectPtr::operator=(param_1,lVar2);
      if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 8) = DAT_1464b56f4;
      }
      lVar2 = FWeakObjectPtr::Get(param_1);
      if (lVar2 != 0) goto LAB_140611358;
    }
  }
  else {
LAB_140611358:
    lVar3 = FUN_1406184b0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return lVar2;
    }
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return 0;
  }
  puVar4 = (undefined8 *)FSoftObjectPath::ToString((longlong *)(param_1 + 0x10),local_18);
  if (*(int *)(puVar4 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*puVar4;
  }
  uVar5 = FUN_1406184b0();
  lVar2 = FUN_141799c90(uVar5,param_2,puVar6,0,0,0,1);
  if (lVar2 != 0) {
    lVar3 = FUN_1406184b0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140611427;
  }
  lVar2 = 0;
LAB_140611427:
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return lVar2;
}



// FUNCTION 140611460 FUN_140611460 body=184 status=ok
// SIG undefined FUN_140611460(void)

undefined4 FUN_140611460(longlong param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  float local_res8 [2];
  float local_res18 [2];
  longlong local_res20;
  
  if ((*(byte *)(param_1 + 0x130) & 1) != 0) {
    return *(undefined4 *)(param_1 + 0x134);
  }
  lVar3 = FUN_1406112d0(param_1 + 0x100,0);
  if (lVar3 == 0) goto LAB_1406114f5;
  local_res20 = FUN_1406133c0(*(undefined8 *)(lVar3 + 0x28));
  if (local_res20 == 0) goto LAB_1406114f5;
  iVar2 = FUN_143264720(local_res20,local_res18,local_res8);
  if (iVar2 == 0) {
LAB_1406114c5:
    bVar1 = false;
  }
  else {
    iVar2 = FUN_143264600();
    if (iVar2 != 0) goto LAB_1406114c5;
    bVar1 = true;
  }
  FUN_143264350(&local_res20,0,0);
  if (bVar1) {
    *(float *)(param_1 + 0x134) = local_res8[0] - local_res18[0];
  }
LAB_1406114f5:
  *(byte *)(param_1 + 0x130) = *(byte *)(param_1 + 0x130) | 1;
  return *(undefined4 *)(param_1 + 0x134);
}



// FUNCTION 140611520 FUN_140611520 body=74 status=ok
// SIG undefined FUN_140611520(void)

void FUN_140611520(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if ((*(longlong *)(param_1 + 0x98) == 0) &&
     (plVar1 = (longlong *)FUN_140611b50(), plVar1 != (longlong *)0x0)) {
    uVar2 = FUN_140618700();
                    /* WARNING: Could not recover jumptable at 0x000140611559. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    return;
  }
  return;
}



// FUNCTION 140611570 FUN_140611570 body=177 status=ok
// SIG undefined FUN_140611570(void)

float FUN_140611570(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (param_2 == 0) {
    if (0 < *(int *)(param_1 + 0x1a0)) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x198) + 0x38);
LAB_1406115c1:
      if (lVar2 != 0) {
        fVar5 = 0.0;
        if (*(char *)(lVar2 + 0x158) == '\0') {
          fVar4 = *(float *)(lVar2 + 0x124) - *(float *)(lVar2 + 300);
          fVar6 = fVar4 * 4.0;
          fVar4 = (*(float *)(lVar2 + 0x128) - fVar4) * 4.0;
          if (1.0 <= fVar6) {
            fVar6 = 1.0;
          }
          if ((0.0 <= fVar4) && (fVar5 = fVar4, 1.0 <= fVar4)) {
            fVar5 = 1.0;
          }
          if (fVar6 <= fVar5) {
            fVar5 = fVar6;
          }
        }
        return fVar5;
      }
    }
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x198);
    plVar1 = plVar3 + (longlong)*(int *)(param_1 + 0x1a0) * 9;
    for (; plVar3 != plVar1; plVar3 = plVar3 + 9) {
      if (*plVar3 == param_2) {
        if (plVar3 == (longlong *)0x0) {
          return 0.0;
        }
        lVar2 = plVar3[7];
        goto LAB_1406115c1;
      }
    }
  }
  return 0.0;
}



// FUNCTION 140611630 FUN_140611630 body=80 status=ok
// SIG undefined FUN_140611630(void)

longlong FUN_140611630(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 == 0) {
    if (0 < *(int *)(param_1 + 0x1a0)) {
      return *(longlong *)(*(longlong *)(param_1 + 0x198) + 0x38);
    }
  }
  else {
    plVar2 = *(longlong **)(param_1 + 0x198);
    plVar1 = plVar2 + (longlong)*(int *)(param_1 + 0x1a0) * 9;
    for (; plVar2 != plVar1; plVar2 = plVar2 + 9) {
      if (*plVar2 == param_2) {
        if (plVar2 == (longlong *)0x0) {
          return 0;
        }
        return plVar2[7];
      }
    }
  }
  return 0;
}



// FUNCTION 140611680 FUN_140611680 body=176 status=ok
// SIG undefined FUN_140611680(void)

undefined1 FUN_140611680(longlong param_1,float param_2,undefined8 *param_3,float *param_4)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  undefined1 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  iVar2 = *(int *)(param_1 + 0x78);
  lVar3 = (longlong)iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  fVar9 = 3.4e+38;
  uVar7 = 0;
  iVar5 = 0;
  fVar10 = 0.0;
  if (0 < iVar2) {
    lVar6 = 0;
    do {
      for (piVar4 = (int *)*param_3; piVar4 != (int *)*param_3 + *(int *)(param_3 + 1);
          piVar4 = piVar4 + 1) {
        if (*piVar4 == iVar5) goto LAB_140611710;
      }
      fVar1 = *(float *)(lVar6 + 0x48 + *(longlong *)(param_1 + 0x70));
      fVar8 = ABS(fVar1 - param_2);
      if (fVar8 < fVar9) {
        uVar7 = 1;
        fVar9 = fVar8;
        fVar10 = fVar1;
      }
LAB_140611710:
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 0x58;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  *param_4 = fVar10;
  return uVar7;
}



// FUNCTION 140611730 FUN_140611730 body=53 status=ok
// SIG undefined FUN_140611730(void)

longlong FUN_140611730(longlong *param_1,int param_2)

{
  if (*(char *)((longlong)param_2 + param_1[3]) == '\0') {
    FUN_14060c680();
  }
  return (longlong)param_2 * 0x30 + *param_1;
}



// FUNCTION 140611770 FUN_140611770 body=81 status=ok
// SIG undefined FUN_140611770(void)

undefined8 * FUN_140611770(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x138);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x40);
    *param_2 = *(undefined8 *)(lVar1 + 0x38);
    param_2[1] = uVar2;
    return param_2;
  }
  if (*(longlong *)(param_1 + 0x168) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x168);
    *param_2 = *(undefined8 *)(param_1 + 0x160);
    param_2[1] = uVar2;
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1406117d0 FUN_1406117d0 body=289 status=ok
// SIG undefined FUN_1406117d0(void)

longlong FUN_1406117d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  undefined1 *puVar4;
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined1 local_50 [16];
  undefined4 local_40;
  undefined1 local_38 [24];
  undefined1 local_20 [24];
  
  if ((*(int *)(param_1 + 0x1a0) < 1) ||
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x198) + 0x38), lVar1 == 0)) {
    puVar4 = (undefined1 *)FUN_140590080(local_20);
    bVar3 = false;
    bVar2 = true;
  }
  else {
    lVar1 = *(longlong *)(lVar1 + 0x98);
    if (lVar1 == 0) {
      puVar4 = (undefined1 *)FUN_140590080(local_38);
    }
    else {
      FUN_14058f8f0(local_68,lVar1 + 0x180);
      local_58 = *(undefined4 *)(lVar1 + 400);
      puVar4 = local_68;
    }
    FUN_14058f8f0(local_50,puVar4);
    local_40 = *(undefined4 *)(puVar4 + 0x10);
    if (lVar1 == 0) {
      FUN_140591060(local_38);
    }
    else {
      FUN_140591060(local_68);
    }
    bVar3 = true;
    bVar2 = false;
    puVar4 = local_50;
  }
  FUN_14058f8f0(param_2,puVar4);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(puVar4 + 0x10);
  if (bVar2) {
    FUN_140591060(local_20);
  }
  if (bVar3) {
    FUN_140591060(local_50);
  }
  return param_2;
}



// FUNCTION 140611900 FUN_140611900 body=90 status=ok
// SIG undefined FUN_140611900(void)

undefined4 FUN_140611900(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int local_res8 [8];
  
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x30),local_res8);
  puVar2 = (undefined4 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x30) + (longlong)local_res8[0] * 0x18);
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  if (puVar1 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  return *puVar1;
}



// FUNCTION 140611960 FUN_140611960 body=140 status=ok
// SIG undefined FUN_140611960(void)

float FUN_140611960(longlong param_1,longlong param_2,float param_3,float param_4)

{
  char cVar1;
  float fVar2;
  
  if (param_2 == 0) {
    fVar2 = *(float *)(param_1 + 0x1ac);
  }
  else if ((*(char *)(param_1 + 0x1b0) == '\0') ||
          (cVar1 = FUN_140612a70(param_1,param_2,param_1), cVar1 == '\0')) {
    fVar2 = *(float *)(param_1 + 0x1ac);
    if (0.0 < fVar2) {
      fVar2 = fVar2 - param_3 / param_4;
      if (fVar2 <= 0.0) {
        fVar2 = 0.0;
      }
LAB_1406119ac:
      *(float *)(param_1 + 0x1ac) = fVar2;
      return fVar2;
    }
  }
  else {
    fVar2 = *(float *)(param_1 + 0x1ac);
    if (fVar2 < 1.0) {
      fVar2 = fVar2 + param_3 / param_4;
      if (1.0 <= fVar2) {
        fVar2 = 1.0;
      }
      goto LAB_1406119ac;
    }
  }
  return fVar2;
}



// FUNCTION 1406119f0 FUN_1406119f0 body=69 status=ok
// SIG undefined FUN_1406119f0(void)

undefined8 FUN_1406119f0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *local_18;
  undefined8 local_10;
  
  uVar1 = 0;
  if (param_1 != 0) {
    local_18 = (undefined8 *)0x0;
    local_10 = 0;
    FUN_1406098c0(param_1,&local_18,0);
    if (0 < (int)local_10) {
      uVar1 = *local_18;
    }
    if (local_18 != (undefined8 *)0x0) {
      FMemory::Free();
    }
  }
  return uVar1;
}



// FUNCTION 140611a50 FUN_140611a50 body=119 status=ok
// SIG undefined FUN_140611a50(void)

undefined4 * FUN_140611a50(undefined8 param_1,undefined4 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146855c90) {
    _Init_thread_header(&DAT_146855c90);
    if (DAT_146855c90 == -1) {
      DAT_146855c8c = 0xff000000;
      _Init_thread_footer(&DAT_146855c90);
    }
  }
  *param_2 = DAT_146855c8c;
  return param_2;
}



// FUNCTION 140611b50 FUN_140611b50 body=90 status=ok
// SIG undefined FUN_140611b50(void)

undefined8 FUN_140611b50(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar3 = UCircularThrobber::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return *(undefined8 *)(lVar1 + 0x118);
    }
  }
  return 0;
}



// FUNCTION 140611bb0 FUN_140611bb0 body=150 status=ok
// SIG undefined FUN_140611bb0(void)

undefined8 FUN_140611bb0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    lVar4 = UCircularThrobber::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      puVar5 = *(undefined8 **)(lVar2 + 0x198);
      puVar1 = puVar5 + (longlong)*(int *)(lVar2 + 0x1a0) * 9;
      for (; puVar5 != puVar1; puVar5 = puVar5 + 9) {
        if (puVar5[7] == param_1) {
          if (puVar5 == (undefined8 *)0x0) {
            return 0;
          }
          return *puVar5;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140611c70 FUN_140611c70 body=81 status=ok
// SIG undefined FUN_140611c70(void)

void FUN_140611c70(longlong param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_141758340();
  if ((*param_2 == 0) && (0 < *(int *)(param_1 + 0x30))) {
    lVar1 = *(longlong *)(param_1 + 0x28);
    *(ulonglong *)(param_2 + 2) = *(longlong *)(param_2 + 2) + (ulonglong)*(uint *)(lVar1 + 8);
    lVar2 = (ulonglong)*(uint *)(lVar1 + 0x18) + *(longlong *)(param_2 + 2);
    *(longlong *)(param_2 + 2) = lVar2;
    *(ulonglong *)(param_2 + 2) = (ulonglong)(uint)(*(int *)(lVar1 + 0x28) << 4) + lVar2;
  }
  return;
}



// FUNCTION 140611cd0 FUN_140611cd0 body=94 status=ok
// SIG undefined FUN_140611cd0(void)

void FUN_140611cd0(longlong param_1,int *param_2)

{
  longlong lVar1;
  
  FUN_141758340();
  if (*param_2 == 0) {
    lVar1 = *(longlong *)(param_2 + 2);
    *(longlong *)(param_2 + 2) = lVar1 + 0x10;
    if (0 < *(int *)(param_1 + 0x30)) {
      *(ulonglong *)(param_2 + 2) =
           (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x28) + 8) + lVar1 + 0x10;
      return;
    }
  }
  else {
    (**(code **)(*(longlong *)(param_1 + 0x48) + 8))(param_1 + 0x48,param_2);
  }
  return;
}



// FUNCTION 140611d30 FUN_140611d30 body=497 status=ok
// SIG undefined FUN_140611d30(void)

void FUN_140611d30(longlong param_1,int *param_2)

{
  int iVar1;
  longlong *plVar2;
  void *_Src;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *local_50;
  int local_48;
  
  FUN_141758340();
  if (*param_2 == 0) {
    lVar8 = *(longlong *)(param_1 + 0x30);
    lVar9 = (longlong)*(int *)(param_1 + 0x38) * 0x38 + lVar8;
    if (lVar8 != lVar9) {
      lVar4 = *(longlong *)(param_2 + 2);
      do {
        lVar4 = lVar4 + 0x10;
        *(longlong *)(param_2 + 2) = lVar4;
        if (0 < *(int *)(lVar8 + 0x30)) {
          lVar4 = (ulonglong)*(uint *)(*(longlong *)(lVar8 + 0x28) + 8) + lVar4;
          *(longlong *)(param_2 + 2) = lVar4;
        }
        lVar8 = lVar8 + 0x38;
      } while (lVar8 != lVar9);
      return;
    }
  }
  else {
    lVar8 = *(longlong *)(param_1 + 0x30);
    lVar9 = (longlong)*(int *)(param_1 + 0x38) * 0x38 + lVar8;
    for (; lVar8 != lVar9; lVar8 = lVar8 + 0x38) {
      plVar5 = (longlong *)0x0;
      iVar7 = *(int *)(lVar8 + 0x30);
      plVar2 = *(longlong **)(lVar8 + 0x18);
      puVar6 = *(undefined8 **)(lVar8 + 0x28);
      local_50 = (longlong *)0x0;
      local_48 = iVar7;
      if (iVar7 != 0) {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_50,iVar7,0);
        plVar5 = local_50;
        lVar4 = (longlong)local_50 - (longlong)puVar6;
        do {
          *(undefined8 *)(lVar4 + (longlong)puVar6) = 0;
          iVar1 = *(int *)(puVar6 + 1);
          _Src = (void *)*puVar6;
          *(int *)(lVar4 + 8 + (longlong)puVar6) = iVar1;
          if (iVar1 == 0) {
            *(undefined4 *)(lVar4 + 0xc + (longlong)puVar6) = 0;
          }
          else {
            TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy
                      ((undefined8 *)(lVar4 + (longlong)puVar6),iVar1,0);
            _guard_xfg_dispatch_icall_nop(*(void **)(lVar4 + (longlong)puVar6),_Src,(longlong)iVar1)
            ;
          }
          puVar6 = puVar6 + 2;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      iVar7 = local_48;
      plVar3 = plVar5;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x158))(plVar2,param_2);
      }
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 2;
      }
      if (plVar5 != (longlong *)0x0) {
        FMemory::Free(plVar5);
      }
    }
  }
  return;
}



// FUNCTION 140611f40 FUN_140611f40 body=142 status=ok
// SIG undefined FUN_140611f40(void)

longlong FUN_140611f40(longlong param_1,int *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  iVar2 = *param_2;
  if ((iVar2 == -1) || ((param_2[2] == 0 && (param_2[3] == 0)))) {
    if (0 < *(int *)(param_1 + 0x1a0)) {
      return **(longlong **)(param_1 + 0x198);
    }
  }
  else {
    if (((iVar2 < *(int *)(param_1 + 0x1a0)) &&
        (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 0x48), lVar3 != 0)
        ) && (*(longlong *)(lVar3 + 0x18) == *(longlong *)(param_2 + 2))) {
      return lVar3;
    }
    plVar4 = *(longlong **)(param_1 + 0x198);
    plVar1 = plVar4 + (longlong)*(int *)(param_1 + 0x1a0) * 9;
    for (; plVar4 != plVar1; plVar4 = plVar4 + 9) {
      lVar3 = *plVar4;
      if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x18) == *(longlong *)(param_2 + 2))) {
        return lVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 140611fd0 DiagnosticMessage body=62 status=ok
// SIG undefined DiagnosticMessage(void)

undefined8 *
FSkeletalMeshComponentClothTickFunction::DiagnosticMessage(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x28;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FaceFXEditor.FaceFXMatineeControlHelper",0x50);
  return param_2;
}



// FUNCTION 140612010 FUN_140612010 body=469 status=ok
// SIG undefined FUN_140612010(void)

void FUN_140612010(longlong param_1,longlong *param_2,char param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  double dVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  
  if (param_3 != '\0') {
    if (*(char *)(param_1 + 0x90) != '\x02') {
      iVar7 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar7 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar7 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
      }
      *(undefined4 *)(*param_2 + (longlong)iVar7 * 4) = *(undefined4 *)(param_1 + 0x94);
    }
    if (*(char *)(param_1 + 0x98) != '\x02') {
      iVar7 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar7 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar7 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
      }
      *(undefined4 *)(*param_2 + (longlong)iVar7 * 4) = *(undefined4 *)(param_1 + 0x9c);
    }
  }
  fVar9 = (float)FUN_140611460(param_1,0);
  if (((1e-08 < ABS(fVar9)) && (*(char *)(param_1 + 0x90) != '\x02')) &&
     (*(char *)(param_1 + 0x98) != '\x02')) {
    uVar5 = UMovieScene::GetPrivateStaticClass();
    lVar6 = UObjectBaseUtility::GetTypedOuter(param_1,uVar5);
    if (lVar6 != 0) {
      iVar7 = *(int *)(param_1 + 0x94);
      if (*(char *)(param_1 + 0x90) != '\x01') {
        iVar7 = *(int *)(param_1 + 0x94) + 1;
      }
      iVar8 = *(int *)(param_1 + 0x9c) + 1;
      if (*(char *)(param_1 + 0x98) != '\x01') {
        iVar8 = *(int *)(param_1 + 0x9c);
      }
      dVar3 = ((double)(fVar9 - (*(float *)(param_1 + 300) + *(float *)(param_1 + 0x128))) *
              (double)(int)*(undefined8 *)(lVar6 + 0xb8)) /
              (double)(int)((ulonglong)*(undefined8 *)(lVar6 + 0xb8) >> 0x20);
      lVar6 = (longlong)dVar3;
      if ((lVar6 != -0x8000000000000000) && ((double)lVar6 != dVar3)) {
        auVar2._8_4_ = SUB84(dVar3,0);
        auVar2._0_8_ = dVar3;
        auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
        uVar4 = movmskpd(0,auVar2);
        dVar3 = (double)(longlong)(lVar6 - (ulonglong)(uVar4 & 1));
      }
      if (0 < (int)dVar3) {
        for (; iVar7 <= iVar8; iVar7 = iVar7 + (int)dVar3) {
          iVar1 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar1 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
          }
          *(int *)(*param_2 + (longlong)iVar1 * 4) = iVar7;
        }
      }
    }
  }
  return;
}



// FUNCTION 140612260 FUN_140612260 body=1188 status=ok
// SIG undefined FUN_140612260(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140612260(longlong param_1,float param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined1 *puVar3;
  uint *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  uint *puVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  int iStack_174;
  uint uStack_170;
  undefined4 uStack_16c;
  int local_168 [2];
  undefined1 local_160 [8];
  longlong *local_158;
  uint uStack_150;
  uint uStack_14c;
  undefined1 *local_148;
  uint uStack_140;
  int iStack_13c;
  uint local_138;
  undefined4 uStack_134;
  uint *local_130;
  longlong *local_128;
  uint uStack_120;
  uint uStack_11c;
  undefined1 *puStack_118;
  undefined4 uStack_110;
  int iStack_10c;
  uint uStack_108;
  undefined4 uStack_104;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  int local_c4;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  longlong local_a8;
  ulonglong local_a0;
  undefined1 local_98 [16];
  ulonglong local_88;
  undefined8 local_80;
  undefined4 local_78;
  uint local_74;
  undefined1 local_70 [8];
  ulonglong local_68;
  uint local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  puVar10 = *(uint **)(param_1 + 0x70);
  puVar3 = (undefined1 *)0x0;
  local_80._0_4_ = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c4 = 0;
  local_b8 = (undefined1 *)0x0;
  local_b0 = 0;
  local_78 = 0xffffffff;
  puVar4 = puVar10 + (longlong)*(int *)(param_1 + 0x78) * 0x16;
  local_c8 = 0xffffffff;
  puVar6 = puVar3;
  puVar5 = puVar3;
  puVar13 = puVar3;
  if (puVar10 != puVar4) {
    do {
      if ((int)puVar13 != (int)puVar5) {
        puVar5 = local_70;
        if (local_68 != 0) {
          puVar5 = puVar3;
        }
        iVar2 = *(int *)(((ulonglong)puVar5 | local_68) +
                        (longlong)(int)((int)puVar6 - 1U & *puVar10) * 4);
        while (iVar2 != -1) {
          lVar7 = (longlong)iVar2 * 0x20;
          if (*(uint *)(local_a8 + lVar7) == *puVar10) {
            if ((iVar2 != -1) && (lVar7 = local_a8 + lVar7, lVar7 != 0)) goto LAB_14061238e;
            break;
          }
          iVar2 = *(int *)(local_a8 + 0x18 + lVar7);
        }
      }
      local_130 = puVar10;
      TSet<TTuple<enum_EFlareQuestCallback::Type,TArray<UFlareQuest_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<enum_EFlareQuestCallback::Type,TArray<UFlareQuest_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<enum_EFlareQuestCallback::Type_const_&>_>
                (&local_a8,local_168,&local_130,0);
      lVar7 = (longlong)local_168[0] * 0x20 + local_a8;
LAB_14061238e:
      iVar2 = *(int *)(lVar7 + 0x10);
      *(int *)(lVar7 + 0x10) = iVar2 + 1;
      if (*(int *)(lVar7 + 0x14) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                  ((longlong *)(lVar7 + 8),iVar2);
      }
      *(uint **)(*(longlong *)(lVar7 + 8) + (longlong)iVar2 * 8) = puVar10;
      if (param_4 != (longlong *)0x0) {
        if ((int)local_f0 != local_c4) {
          puVar6 = local_c0;
          if (local_b8 != (undefined1 *)0x0) {
            puVar6 = local_b8;
          }
          for (iVar2 = *(int *)(puVar6 + (longlong)(int)(local_b0 - 1U & *puVar10) * 4); iVar2 != -1
              ; iVar2 = *(int *)((longlong)iVar2 * 0x20 + 0x18 + local_f8)) {
            if (*(uint *)((longlong)iVar2 * 0x20 + local_f8) == *puVar10) {
              if (iVar2 != -1) goto LAB_140612436;
              break;
            }
          }
        }
        local_188 = puVar10;
        uStack_180 = puVar10;
        FUN_140608b10(&local_f8,local_160,&local_188,0);
      }
LAB_140612436:
      puVar10 = puVar10 + 0x16;
      if (puVar10 == puVar4) goto LAB_140612456;
      puVar6 = (undefined1 *)(ulonglong)local_60;
      puVar5 = (undefined1 *)(ulonglong)local_74;
      puVar13 = (undefined1 *)(local_a0 & 0xffffffff);
    } while( true );
  }
LAB_14061245e:
  puVar6 = (undefined1 *)0x0;
  local_188._0_4_ = 0;
  local_188._4_4_ = 1;
  uStack_180 = (uint *)local_98;
  iStack_174 = 0;
  uStack_170 = 0;
  if ((int)local_80 != 0) {
    puVar5 = local_98;
    if (local_88 != 0) {
      puVar5 = puVar6;
    }
    uVar12 = *(uint *)((ulonglong)puVar5 | local_88);
    puVar13 = puVar6;
    while (uVar12 == 0) {
      iVar2 = (int)puVar6;
      uStack_170 = (int)puVar13 + 0x20;
      puVar13 = (undefined1 *)(ulonglong)uStack_170;
      local_188._0_4_ = iVar2 + 1;
      puVar6 = (undefined1 *)(ulonglong)(uint)local_188;
      iStack_174 = (int)local_80;
      if ((int)((int)local_80 + -1 + ((int)local_80 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar2)
      goto LAB_14061250f;
      uVar12 = ((uint *)((ulonglong)puVar5 | local_88))[(longlong)iVar2 + 1];
    }
    local_188._4_4_ = -uVar12 & uVar12;
    iVar2 = 0x1f;
    if (local_188._4_4_ != 0) {
      for (; local_188._4_4_ >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (local_188._4_4_ == 0) {
      iVar2 = 0x20;
    }
    else {
      iVar2 = 0x1f - iVar2;
    }
    iStack_174 = (uStack_170 - iVar2) + 0x1f;
    if ((int)local_80 < iStack_174) {
      iStack_174 = (int)local_80;
    }
  }
LAB_14061250f:
  local_178 = 0xffffffff;
  uStack_120 = (uint)local_188;
  uStack_11c = local_188._4_4_;
  uStack_110 = 0xffffffff;
  iStack_10c = iStack_174;
  uStack_108 = uStack_170;
  uStack_104 = uStack_16c;
  uStack_140 = 0xffffffff;
  iStack_13c = iStack_174;
  uStack_150 = (uint)local_188;
  uStack_14c = local_188._4_4_;
  local_138 = uStack_170;
  uStack_134 = uStack_16c;
  local_158 = &local_a8;
  local_148 = (undefined1 *)uStack_180;
  local_128 = &local_a8;
  puStack_118 = (undefined1 *)uStack_180;
  if (iStack_174 < (int)local_80) {
    do {
      lVar8 = -1;
      lVar11 = (longlong)iStack_13c * 0x20;
      uVar12 = 0xffffffff;
      lVar7 = *local_158;
      iVar2 = *(int *)(lVar11 + 0x10 + lVar7) + -1;
      if (iVar2 < 0) {
LAB_1406125e7:
        if (param_4 != (longlong *)0x0) {
          if ((int)local_f0 != local_c4) {
            puVar6 = local_c0;
            if (local_b8 != (undefined1 *)0x0) {
              puVar6 = local_b8;
            }
            iVar2 = *(int *)(puVar6 + (longlong)(int)(local_b0 - 1U & *(uint *)(lVar11 + lVar7)) * 4
                            );
            while (iVar2 != -1) {
              lVar8 = (longlong)iVar2 * 0x20;
              if (*(uint *)(local_f8 + lVar8) == *(uint *)(lVar11 + lVar7)) {
                lVar8 = local_f8 + lVar8;
                if (iVar2 != -1) goto LAB_140612645;
                break;
              }
              iVar2 = *(int *)(local_f8 + 0x18 + lVar8);
            }
          }
          lVar8 = 0;
LAB_140612645:
          iVar2 = (int)param_4[1];
          *(int *)(param_4 + 1) = iVar2 + 1;
          if (*(int *)((longlong)param_4 + 0xc) < iVar2 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_4,iVar2);
          }
          lVar7 = *param_4;
          uVar12 = *(uint *)(lVar8 + 8);
          uVar14 = *(uint *)(lVar8 + 0xc);
          uVar15 = *(uint *)(lVar8 + 0x10);
          uVar16 = *(uint *)(lVar8 + 0x14);
          goto LAB_140612667;
        }
      }
      else {
        plVar1 = *(longlong **)(lVar11 + 8 + lVar7);
        plVar9 = plVar1;
        do {
          if (param_2 < *(float *)(*plVar9 + 0x48)) break;
          uVar12 = uVar12 + 1;
          lVar8 = lVar8 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar8 < iVar2);
        if (uVar12 == 0xffffffff) goto LAB_1406125e7;
        uStack_180 = (uint *)plVar1[lVar8];
        iVar2 = (int)param_3[1];
        *(int *)(param_3 + 1) = iVar2 + 1;
        local_188._0_4_ = uVar12;
        if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar2);
        }
        lVar7 = *param_3;
        uVar12 = (uint)local_188;
        uVar14 = local_188._4_4_;
        uVar15 = (uint)uStack_180;
        uVar16 = uStack_180._4_4_;
LAB_140612667:
        puVar10 = (uint *)(lVar7 + (longlong)iVar2 * 0x10);
        *puVar10 = uVar12;
        puVar10[1] = uVar14;
        puVar10[2] = uVar15;
        puVar10[3] = uVar16;
      }
      uStack_140 = uStack_140 & ~uStack_14c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_150);
    } while (iStack_13c < *(int *)(local_148 + 0x18));
  }
  local_b0 = 0;
  if (local_b8 != (undefined1 *)0x0) {
    FMemory::Free(local_b8);
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_f8);
  local_60 = 0;
  if (local_68 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_a8);
  return;
LAB_140612456:
  goto LAB_14061245e;
}



// FUNCTION 140612710 GetTypeHash body=293 status=ok
// SIG undefined GetTypeHash(void)

uint GetTypeHash(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *param_1;
  uVar1 = FCrc::MemCrc_DEPRECATED(param_1 + 1,0x10);
  uVar3 = param_1[5] - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar3) - uVar1 ^ uVar3 << 8;
  uVar5 = (uVar1 - uVar2) - uVar3 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar5 >> 0xc;
  uVar1 = (uVar2 - uVar3) - uVar5 ^ uVar3 << 0x10;
  uVar5 = (uVar5 - uVar1) - uVar3 ^ uVar1 >> 5;
  uVar2 = (uVar3 - uVar1) - uVar5 ^ uVar5 >> 3;
  uVar1 = (uVar1 - uVar2) - uVar5 ^ uVar2 << 10;
  uVar2 = ((uVar5 - uVar1) - uVar2 ^ uVar1 >> 0xf) - uVar4 ^ uVar4 >> 0xd;
  uVar1 = (-0x61c88647 - uVar2) - uVar4 ^ uVar2 << 8;
  uVar4 = (uVar4 - uVar1) - uVar2 ^ uVar1 >> 0xd;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar4 >> 0xc;
  uVar1 = (uVar1 - uVar2) - uVar4 ^ uVar2 << 0x10;
  uVar4 = (uVar4 - uVar1) - uVar2 ^ uVar1 >> 5;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar4 >> 3;
  uVar1 = (uVar1 - uVar2) - uVar4 ^ uVar2 << 10;
  return (uVar4 - uVar1) - uVar2 ^ uVar1 >> 0xf;
}



// FUNCTION 140612870 FUN_140612870 body=110 status=ok
// SIG undefined FUN_140612870(void)

void FUN_140612870(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  FPoseLinkBase::Initialize();
  if (*(int *)(param_1 + 0x68) == 0) {
    iVar1 = *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x68) = iVar1 + 1;
    if (*(int *)(param_1 + 0x6c) < iVar1 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1 + 0x60,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x40 + *(longlong *)(param_1 + 0x60));
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
  }
  return;
}



// FUNCTION 1406128e0 FUN_1406128e0 body=135 status=ok
// SIG undefined FUN_1406128e0(void)

longlong FUN_1406128e0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint7 uVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x138);
  if (lVar1 == 0) {
    if (*(longlong *)(param_1 + 0x168) == 0) {
      lVar3 = 0;
      lVar1 = 0;
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x160);
      lVar1 = *(longlong *)(param_1 + 0x168);
    }
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x38);
    lVar1 = *(longlong *)(lVar1 + 0x40);
  }
  uVar2 = (uint7)((ulonglong)lVar1 >> 8);
  if ((((((int)*param_2 == 0) && (*(int *)((longlong)param_2 + 4) == 0)) || (*param_2 != lVar3)) ||
      (param_2[1] != lVar1)) && (param_2[1] != lVar1)) {
    return (ulonglong)uVar2 << 8;
  }
  return CONCAT71(uVar2,1);
}



// FUNCTION 140612970 FUN_140612970 body=61 status=ok
// SIG undefined FUN_140612970(void)

ulonglong FUN_140612970(longlong param_1)

{
  ulonglong uVar1;
  uint local_res8 [8];
  
  uVar1 = FUN_143264cd0(*(undefined8 *)(param_1 + 0xa8),local_res8,1);
  if ((int)uVar1 != 0) {
    uVar1 = FUN_143264600();
    if ((int)uVar1 == 0) {
      return (ulonglong)(local_res8[0] >> 3) & 0xffffffffffffff01;
    }
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 1406129b0 FUN_1406129b0 body=53 status=ok
// SIG undefined FUN_1406129b0(void)

uint FUN_1406129b0(longlong param_1,longlong param_2)

{
  uint in_EAX;
  int iVar1;
  
  if ((*(longlong *)(param_1 + 0xa0) != 0) && (param_2 != 0)) {
    iVar1 = FUN_143263760();
    in_EAX = 0;
    if (iVar1 != 0) {
      in_EAX = FUN_143264600();
      if (in_EAX == 0) {
        return 1;
      }
    }
  }
  return in_EAX & 0xffffff00;
}



// FUNCTION 140612a00 FUN_140612a00 body=105 status=ok
// SIG undefined FUN_140612a00(void)

ulonglong FUN_140612a00(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *in_RAX;
  
  if (param_2 != 0) {
    in_RAX = *(longlong **)(param_1 + 0x198);
    plVar1 = in_RAX + (longlong)*(int *)(param_1 + 0x1a0) * 9;
    for (; in_RAX != plVar1; in_RAX = in_RAX + 9) {
      if (*in_RAX == param_2) {
        if ((in_RAX != (longlong *)0x0) && (lVar2 = in_RAX[7], lVar2 != 0)) {
          if ((*(char *)(lVar2 + 0x158) == '\x01') && (*(longlong *)(lVar2 + 0xb8) != 0)) {
            return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
          }
          goto LAB_140612a3a;
        }
        break;
      }
    }
    in_RAX = (longlong *)FUN_140612c50();
  }
LAB_140612a3a:
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140612a70 FUN_140612a70 body=94 status=ok
// SIG undefined FUN_140612a70(void)

ulonglong FUN_140612a70(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong in_RAX;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x198);
    plVar1 = plVar2 + (longlong)*(int *)(param_1 + 0x1a0) * 9;
    for (; plVar2 != plVar1; plVar2 = plVar2 + 9) {
      if (*plVar2 == param_2) {
        if ((plVar2 != (longlong *)0x0) && (plVar2[7] != 0)) {
          return CONCAT71((int7)((ulonglong)plVar2 >> 8),*(char *)(plVar2[7] + 0x158) == '\0');
        }
        break;
      }
    }
    in_RAX = FUN_140612c50();
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140612ad0 FUN_140612ad0 body=107 status=ok
// SIG undefined FUN_140612ad0(void)

undefined8 FUN_140612ad0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  
  if (param_3 != 0) {
    plVar4 = *(longlong **)(param_1 + 0x198);
    plVar1 = plVar4 + (longlong)*(int *)(param_1 + 0x1a0) * 9;
    for (; plVar4 != plVar1; plVar4 = plVar4 + 9) {
      if (*plVar4 == param_3) {
        if ((plVar4 != (longlong *)0x0) && (lVar2 = plVar4[7], lVar2 != 0)) {
          if (*(char *)(lVar2 + 0x158) != '\0') {
            return 0;
          }
          cVar3 = FUN_1406128e0(lVar2,param_2);
          if (cVar3 == '\0') {
            return 0;
          }
          return 1;
        }
        break;
      }
    }
    FUN_140612c50();
  }
  return 0;
}



// FUNCTION 140612b40 FUN_140612b40 body=61 status=ok
// SIG undefined FUN_140612b40(void)

undefined1 FUN_140612b40(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x98);
  cVar2 = FUN_14059ee90(lVar1 + 0x180);
  if (cVar2 != '\0') {
    cVar2 = FUN_14059ee00(lVar1 + 0x180);
    if (cVar2 == '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140612ba0 FUN_140612ba0 body=170 status=ok
// SIG undefined FUN_140612ba0(void)

ulonglong FUN_140612ba0(longlong param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  byte *pbVar4;
  byte local_res8 [4];
  int local_resc;
  
  pbVar4 = (byte *)(param_1 + 0x90);
  bVar1 = *pbVar4;
  local_resc = param_2;
  if (bVar1 == 2) {
    uVar3 = 2;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x94);
    if (iVar2 < param_2) {
      uVar3 = (ulonglong)bVar1;
    }
    else {
      if ((param_2 < iVar2) || (bVar1 != 1)) {
        pbVar4 = local_res8;
      }
      uVar3 = CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
    }
  }
  if (((byte)uVar3 == bVar1) &&
     (((byte)uVar3 == 2 ||
      (uVar3 = (ulonglong)*(uint *)(param_1 + 0x94),
      *(uint *)(pbVar4 + 4) == *(uint *)(param_1 + 0x94))))) {
    bVar1 = *(byte *)(param_1 + 0x98);
    pbVar4 = (byte *)(param_1 + 0x98);
    if (bVar1 == 2) {
      uVar3 = 2;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x9c);
      if (param_2 < iVar2) {
        uVar3 = (ulonglong)bVar1;
      }
      else {
        if ((iVar2 < param_2) || (bVar1 != 1)) {
          pbVar4 = local_res8;
        }
        uVar3 = CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
      }
    }
    if (((byte)uVar3 == bVar1) &&
       (((byte)uVar3 == 2 ||
        (uVar3 = (ulonglong)*(uint *)(param_1 + 0x9c),
        *(uint *)(pbVar4 + 4) == *(uint *)(param_1 + 0x9c))))) {
      return CONCAT71((int7)(uVar3 >> 8),1);
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140612c50 FUN_140612c50 body=132 status=ok
// SIG undefined FUN_140612c50(void)

undefined8 FUN_140612c50(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146855ba8) {
    _Init_thread_header(&DAT_146855ba8);
    if (DAT_146855ba8 == -1) {
      uVar1 = FCommandLine::Get();
      DAT_146855ba4 = FParse::Param(uVar1,L"UNATTENDED");
      _Init_thread_footer(&DAT_146855ba8);
    }
  }
  if ((DAT_146855ba4 == '\0') && (DAT_1468c21d9 == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 140612cf0 FUN_140612cf0 body=558 status=ok
// SIG undefined FUN_140612cf0(void)

undefined8 FUN_140612cf0(longlong param_1,float param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  
  if (param_2 < 0.0) {
    return 0;
  }
  if (((*(byte *)(param_1 + 0x15a) & 2) == 0) &&
     (*(float *)(param_1 + 0x128) <= param_2 && param_2 != *(float *)(param_1 + 0x128))) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x15a) & 4) == 0) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x90) == 0) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0xb8) == 0) {
    return 0;
  }
  iVar3 = FUN_143265020();
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = FUN_143264600();
  if (iVar3 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0xa0);
    *(undefined1 *)(param_1 + 0x158) = 2;
    iVar3 = FUN_143264a10(uVar4,*(undefined8 *)(param_1 + 0xb8),0);
    lVar5 = (long)uVar4;
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = FUN_143264600();
    if (iVar3 == 0) {
      fVar6 = *(float *)(param_1 + 0x128);
      *(undefined1 *)(param_1 + 0x158) = 0;
      if (fVar6 < param_2) {
        if (1e-08 < ABS(fVar6)) {
          fVar6 = (float)(int)(param_2 / fVar6) * fVar6;
          if (ABS(param_2) < ABS(fVar6)) {
            fVar6 = param_2;
          }
          param_2 = param_2 - fVar6;
        }
        else {
          AK::MemoryMgr::StartProfileThreadUsage(lVar5);
          param_2 = 0.0;
        }
      }
      bVar1 = false;
      if (((*(byte *)(param_1 + 0x15a) & 4) != 0) && (0.0 <= param_2)) {
        *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 300);
        *(float *)(param_1 + 0x120) = param_2;
        iVar3 = FUN_143264b70(*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xa8));
        if ((iVar3 != 0) && (iVar3 = FUN_143264600(), iVar3 == 0)) {
          fVar6 = *(float *)(param_1 + 300);
          cVar2 = FUN_140612970(param_1);
          *(float *)(param_1 + 0x124) = param_2 + fVar6;
          iVar3 = FUN_143264b70(*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xa8));
          if ((iVar3 != 0) && (iVar3 = FUN_143264600(), iVar3 == 0)) {
            if ((cVar2 != '\0') || (cVar2 = FUN_140612970(param_1), cVar2 != '\0')) {
              bVar1 = true;
            }
            *(byte *)(param_1 + 0x15a) = *(byte *)(param_1 + 0x15a) | 1;
            FUN_140614b70(param_1);
            if (bVar1) {
              uVar4 = FUN_140614570(param_1,param_2 + *(float *)(param_1 + 300),0);
              return uVar4;
            }
          }
        }
      }
      return 1;
    }
    return 0;
  }
  return 0;
}



// FUNCTION 140612f20 FUN_140612f20 body=279 status=ok
// SIG undefined FUN_140612f20(void)

undefined8
FUN_140612f20(longlong param_1,undefined4 param_2,char param_3,longlong param_4,undefined1 param_5,
             longlong param_6)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 local_38;
  longlong lStack_30;
  undefined8 local_28;
  
  if (param_6 == 0) {
    return 0;
  }
  plVar4 = *(longlong **)(param_1 + 0x198);
  plVar1 = plVar4 + (longlong)*(int *)(param_1 + 0x1a0) * 9;
  do {
    if (plVar4 == plVar1) {
LAB_140612f86:
      FUN_140612c50();
      return 0;
    }
    if (*plVar4 == param_6) {
      if ((plVar4 != (longlong *)0x0) && (lVar2 = plVar4[7], lVar2 != 0)) {
        if ((param_4 == 0) ||
           ((*(char *)(lVar2 + 0x158) == '\x02' ||
            (cVar3 = FUN_1406128e0(lVar2,param_4 + 0x38), cVar3 == '\0')))) {
          local_28 = 0;
          local_38 = 0;
          lStack_30 = 0;
          FUN_140613e40(lVar2,param_4,param_5,&local_38);
          if (lStack_30 != 0) {
            FMemory::Free();
          }
        }
        cVar3 = FUN_140612cf0(lVar2,param_2);
        if (cVar3 == '\0') {
          return 0;
        }
        if ((param_3 != '\0') && (cVar3 = FUN_140613c70(lVar2,1), cVar3 == '\0')) {
          return 0;
        }
        return 1;
      }
      goto LAB_140612f86;
    }
    plVar4 = plVar4 + 9;
  } while( true );
}



// FUNCTION 140613040 DeleteFriendsList body=16 status=ok
// SIG undefined DeleteFriendsList(void)

undefined1 FOnlineFriendsInterfaceSynthetic::DeleteFriendsList(void)

{
  FUN_140612c50();
  return 0;
}



// FUNCTION 140613050 FUN_140613050 body=872 status=ok
// SIG undefined FUN_140613050(void)

undefined8 FUN_140613050(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong local_res10;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined1 *local_40;
  code *pcStack_38;
  undefined8 local_30;
  
  if ((param_2 == (longlong *)0x0) ||
     (cVar3 = (**(code **)(*param_2 + 0x278))(param_2), cVar3 == '\0')) {
    return 0;
  }
  FUN_1406157b0(param_1);
  local_40 = &LAB_14060c600;
  *(longlong **)(param_1 + 0x90) = param_2;
  puVar2 = (undefined8 *)param_2[5];
  pcStack_38 = FMemory::operator_delete;
  local_48 = local_30;
  local_58 = 0x4060c600;
  uStack_54 = 1;
  uStack_50 = 0x4058b2d0;
  uStack_4c = 1;
  if (((*(int *)(puVar2 + 3) < 1) ||
      ((iVar4 = FUN_143263d70(puVar2[2],(longlong)*(int *)(puVar2 + 3),1,0,param_1 + 0xb0,&local_58)
       , iVar4 != 0 && (iVar4 = FUN_143264600(), iVar4 == 0)))) && (*(int *)(puVar2 + 1) != 0)) {
    iVar4 = FUN_143263860(*puVar2,(longlong)*(int *)(puVar2 + 1),1,DAT_146216a60,
                          (undefined8 *)(param_1 + 0xa0),&local_58);
    if ((((iVar4 != 0) && (iVar4 = FUN_143264600(), iVar4 == 0)) &&
        (iVar4 = FUN_143264010(*(undefined8 *)(param_1 + 0xa0),param_1 + 0xa8,&local_58), iVar4 != 0
        )) && (iVar4 = FUN_143264600(), iVar4 == 0)) {
      if (*(longlong *)(param_1 + 0xb0) != 0) {
        local_res10 = 0;
        iVar4 = FUN_1432647f0(*(longlong *)(param_1 + 0xb0),&local_res10);
        if ((iVar4 == 0) || (iVar4 = FUN_143264600(), iVar4 != 0)) goto LAB_140613395;
        if (local_res10 != 0) {
          iVar4 = *(int *)(param_1 + 200) + (int)local_res10;
          *(int *)(param_1 + 200) = iVar4;
          if (*(int *)(param_1 + 0xcc) < iVar4) {
            TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow();
          }
          plVar9 = (longlong *)(param_1 + 0xf0);
          iVar4 = *(int *)(param_1 + 0xf8) + (int)local_res10;
          *(int *)(param_1 + 0xf8) = iVar4;
          if (*(int *)(param_1 + 0xfc) < iVar4) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar9);
          }
          iVar4 = FUN_143264890(*(undefined8 *)(param_1 + 0xb0),*plVar9,local_res10);
          if ((iVar4 == 0) || (iVar4 = FUN_143264600(), iVar4 != 0)) goto LAB_140613395;
          lVar8 = (longlong)(int)local_res10;
          iVar4 = *(int *)(param_1 + 0xd8);
          iVar5 = iVar4 + (int)local_res10;
          *(int *)(param_1 + 0xd8) = iVar5;
          if (*(int *)(param_1 + 0xdc) < iVar5) {
            TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1 + 0xd0);
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar4 * 0x30 + *(longlong *)(param_1 + 0xd0)),0,lVar8 * 0x30
                    );
          plVar9 = (longlong *)*plVar9;
          plVar1 = plVar9 + *(int *)(param_1 + 0xf8);
          for (; plVar9 != plVar1; plVar9 = plVar9 + 1) {
            plVar7 = (longlong *)puVar2[4];
            plVar6 = plVar7 + (longlong)*(int *)(puVar2 + 5) * 2;
            if (plVar7 != plVar6) {
              do {
                if (*plVar7 == *plVar9) {
                  if (plVar7 != (longlong *)0x0) {
                    iVar4 = *(int *)(param_1 + 0xe8);
                    *(int *)(param_1 + 0xe8) = iVar4 + 1;
                    if (*(int *)(param_1 + 0xec) < iVar4 + 1) {
                      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                (param_1 + 0xe0,iVar4);
                    }
                    *(longlong *)(*(longlong *)(param_1 + 0xe0) + (longlong)iVar4 * 8) = plVar7[1];
                  }
                  break;
                }
                plVar7 = plVar7 + 2;
              } while (plVar7 != plVar6);
            }
          }
        }
      }
      *(byte *)(param_1 + 0x15a) = *(byte *)(param_1 + 0x15a) & 0xef | param_3 << 4;
      if (((param_3 << 4 & 0x10U) != 0) || (cVar3 = FUN_140616640(param_1), cVar3 != '\0')) {
        FUN_140611b50(param_1);
        return 1;
      }
    }
  }
LAB_140613395:
  FUN_1406157b0(param_1);
  return 0;
}



// FUNCTION 1406133c0 FUN_1406133c0 body=125 status=ok
// SIG undefined FUN_1406133c0(void)

undefined8 FUN_1406133c0(undefined8 *param_1)

{
  int iVar1;
  undefined8 local_res8 [4];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (*(int *)(param_1 + 1) == 0) {
    return 0;
  }
  local_res8[0] = 0;
  local_20 = 0x4060c600;
  uStack_1c = 1;
  uStack_18 = 0x4058b2d0;
  uStack_14 = 1;
  iVar1 = FUN_143263b00(*param_1,(longlong)*(int *)(param_1 + 1),1,local_res8,&local_20);
  if (iVar1 != 0) {
    FUN_143264600();
  }
  return local_res8[0];
}



// FUNCTION 140613440 FUN_140613440 body=507 status=ok
// SIG undefined FUN_140613440(void)

void FUN_140613440(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  longlong *plVar13;
  longlong *plVar14;
  int local_res8;
  int iStackX_c;
  
  plVar1 = (longlong *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  if (param_2 == 0) {
    *(byte *)(param_1 + 0x70) = *(byte *)(param_1 + 0x70) & 0xfe;
    return;
  }
  lVar3 = *(longlong *)(param_2 + 0xb8);
  if (lVar3 != 0) {
    plVar4 = *(longlong **)(lVar3 + 0x118);
    if (plVar4 == (longlong *)0x0) {
      *(byte *)(param_1 + 0x70) = *(byte *)(param_1 + 0x70) & 0xfe;
      return;
    }
    *(byte *)(param_1 + 0x70) = *(byte *)(param_1 + 0x70) | 1;
    uVar7 = UCircularThrobber::GetPrivateStaticClass();
    lVar8 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar7);
    if (lVar8 != 0) {
      lVar9 = FUN_140611630(lVar8,lVar3);
      if (lVar9 == 0) {
        if ((*(char *)(lVar8 + 0x1a8) == '\0') && ((*(byte *)(lVar8 + 0xb8) & 1) != 0)) {
          bVar5 = 1;
        }
        else {
          bVar5 = 0;
        }
        *(byte *)(param_1 + 0x70) = *(byte *)(param_1 + 0x70) & 0xfe;
        *(byte *)(param_1 + 0x70) = *(byte *)(param_1 + 0x70) | bVar5;
      }
      else {
        plVar14 = *(longlong **)(lVar9 + 0xe0);
        plVar4 = plVar14 + *(int *)(lVar9 + 0xe8);
        if (plVar14 != plVar4) {
LAB_140613520:
          if (*(longlong *)(lVar9 + 0x90) != 0) {
            lVar8 = *(longlong *)(*(longlong *)(lVar9 + 0x90) + 0x28);
            plVar10 = *(longlong **)(lVar8 + 0x20);
            plVar11 = plVar10 + (longlong)*(int *)(lVar8 + 0x28) * 2;
            if (plVar10 != plVar11) {
              do {
                if (plVar10[1] == *plVar14) {
                  if (plVar10 != (longlong *)0x0) {
                    plVar11 = *(longlong **)(lVar9 + 0xf0);
                    if (plVar11 != plVar11 + *(int *)(lVar9 + 0xf8)) {
                      plVar13 = plVar11;
                      goto LAB_140613586;
                    }
                  }
                  break;
                }
                plVar10 = plVar10 + 2;
              } while (plVar10 != plVar11);
            }
          }
          goto LAB_1406135df;
        }
LAB_1406135ec:
        AlgoImpl::
        IntroSortInternal<FClusterBuilder::FRunPair,FIdentityFunctor,TDereferenceWrapper<FClusterBuilder::FRunPair,TLess<FClusterBuilder::FRunPair>_>_>
                  (*plVar1,(longlong)*(int *)(param_1 + 0x58),(undefined1)local_res8,&local_res8);
      }
    }
  }
  return;
  while (plVar13 = plVar13 + 1, plVar13 != plVar11 + *(int *)(lVar9 + 0xf8)) {
LAB_140613586:
    if (*plVar13 == *plVar10) {
      iVar12 = (int)((longlong)plVar13 - (longlong)plVar11 >> 3);
      if ((iVar12 != -1) && (iVar6 = FUN_1423ac950(lVar3,*plVar14), iVar6 != -1)) {
        iVar2 = *(int *)(param_1 + 0x58);
        *(int *)(param_1 + 0x58) = iVar2 + 1;
        local_res8 = iVar6;
        iStackX_c = iVar12;
        if (*(int *)(param_1 + 0x5c) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
        }
        *(ulonglong *)(*plVar1 + (longlong)iVar2 * 8) = CONCAT44(iStackX_c,local_res8);
      }
      break;
    }
  }
LAB_1406135df:
  plVar14 = plVar14 + 1;
  if (plVar14 == plVar4) goto LAB_1406135ec;
  goto LAB_140613520;
}



// FUNCTION 140613640 FUN_140613640 body=1306 status=ok
// SIG undefined FUN_140613640(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140613640(longlong *param_1,longlong *param_2,float param_3)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  float *pfVar16;
  undefined4 *puVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  float *pfVar21;
  ulonglong uVar22;
  uint uVar23;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auStack_128 [32];
  int local_108 [2];
  float local_100 [2];
  uint local_f8;
  longlong local_f0;
  uint local_e8;
  undefined4 local_e4;
  longlong local_e0;
  undefined1 local_d8 [48];
  ulonglong local_a8;
  ulonglong uVar24;
  
  local_a8 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  if (param_3 < 1e-05) {
    return;
  }
  if (0.99999 <= param_3) {
    FCSPose<FCompactPose>::SafeSetCSBoneTransforms();
    return;
  }
  uVar22 = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((*(int *)((longlong)param_1 + 0x34) < 0) && (*(int *)((longlong)param_1 + 0x34) != 0)) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 5);
  }
  lVar19 = param_1[1];
  lVar15 = param_1[6];
  iVar12 = (int)lVar15 + (int)lVar19;
  *(int *)(param_1 + 6) = iVar12;
  if (*(int *)((longlong)param_1 + 0x34) < iVar12) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 5);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)((longlong)(int)lVar15 + param_1[5]),0,(longlong)(int)lVar19);
  uVar23 = *(uint *)(param_2 + 1);
  local_f0 = 0;
  local_f8 = 0;
  local_e4 = 0;
  if ((int)uVar23 < 1) {
    if ((-1 < (int)uVar23) || (uVar23 == 0)) goto LAB_140613762;
    local_e8 = uVar23;
    TArray<FPartyReservation,FDefaultAllocator>::ResizeShrink(&local_f0);
  }
  else {
    local_e8 = uVar23;
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
              (&local_f0,0);
  }
  local_f8 = local_e8;
LAB_140613762:
  if (0 < (int)param_2[1]) {
    puVar17 = (undefined4 *)(local_f0 + 0x30);
    local_e0 = -0x30 - local_f0;
    uVar24 = uVar22;
    do {
      lVar19 = local_e0;
      local_108[0] = *(int *)((longlong)puVar17 + *param_2 + local_e0);
      FBoneContainer::GetParentBoneIndex(param_1[2],local_100,local_108);
      lVar15 = (longlong)(int)local_100[0];
      if (local_100[0] == -NAN) {
        lVar15 = *param_2;
        puVar13 = (undefined8 *)((longlong)puVar17 + lVar15 + 0x10 + lVar19);
        uVar3 = puVar13[1];
        *(undefined8 *)(puVar17 + -8) = *puVar13;
        *(undefined8 *)(puVar17 + -6) = uVar3;
        *(undefined1 (*) [16])(puVar17 + -4) =
             *(undefined1 (*) [16])((longlong)puVar17 + lVar15 + 0x20 + lVar19);
        puVar2 = (undefined4 *)((longlong)puVar17 + lVar15 + 0x30 + lVar19);
        uVar25 = *puVar2;
        uVar26 = puVar2[1];
        uVar27 = puVar2[2];
        uVar28 = puVar2[3];
      }
      else {
        if (0 < (int)param_2[1]) {
          pfVar16 = (float *)*param_2;
          pfVar21 = pfVar16;
          uVar14 = uVar22;
          uVar20 = uVar22;
          do {
            iVar12 = (int)uVar20;
            if (local_100[0] == *pfVar21) {
              if (iVar12 != -1) {
                pfVar21 = pfVar16 + (longlong)iVar12 * 0x10 + 4;
                goto LAB_140613806;
              }
              break;
            }
            uVar20 = (ulonglong)(iVar12 + 1);
            uVar14 = uVar14 + 1;
            pfVar21 = pfVar21 + 0x10;
          } while ((longlong)uVar14 < (longlong)(int)param_2[1]);
        }
        if (*(char *)(lVar15 + param_1[3]) == '\0') {
          FUN_14060c680(param_1);
        }
        pfVar16 = (float *)*param_2;
        pfVar21 = (float *)(lVar15 * 0x30 + *param_1);
LAB_140613806:
        puVar13 = (undefined8 *)
                  FUN_14162bcf0(pfVar16 + (longlong)(int)uVar24 * 0x10 + 4,local_d8,pfVar21);
        uVar3 = puVar13[1];
        *(undefined8 *)(puVar17 + -8) = *puVar13;
        *(undefined8 *)(puVar17 + -6) = uVar3;
        *(undefined1 (*) [16])(puVar17 + -4) = *(undefined1 (*) [16])(puVar13 + 2);
        uVar25 = *(undefined4 *)(puVar13 + 4);
        uVar26 = *(undefined4 *)((longlong)puVar13 + 0x24);
        uVar27 = *(undefined4 *)(puVar13 + 5);
        uVar28 = *(undefined4 *)((longlong)puVar13 + 0x2c);
      }
      *puVar17 = uVar25;
      puVar17[1] = uVar26;
      puVar17[2] = uVar27;
      puVar17[3] = uVar28;
      uVar23 = (int)uVar24 + 1;
      uVar24 = (ulonglong)uVar23;
      puVar17[-0xc] = local_108[0];
      puVar17 = puVar17 + 0x10;
      *(undefined1 *)((longlong)local_108[0] + param_1[5]) = 1;
    } while ((int)uVar23 < (int)param_2[1]);
  }
  uVar23 = *(uint *)(param_1 + 1);
  iVar12 = 0;
  if (uVar23 != 0) {
    do {
      local_108[0] = (int)uVar22;
      FBoneContainer::GetParentBoneIndex(param_1[2],local_100,local_108);
      if (local_100[0] != -NAN) {
        pbVar1 = (byte *)((longlong)local_108[0] + param_1[5]);
        *pbVar1 = *pbVar1 | *(byte *)((longlong)(int)local_100[0] + param_1[5]);
      }
      uVar18 = (int)uVar22 + 1;
      uVar22 = (ulonglong)uVar18;
    } while (uVar18 != uVar23);
    iVar12 = (int)param_1[1];
  }
  iVar12 = iVar12 + -1;
  if (iVar12 != -1) {
    lVar19 = (longlong)iVar12;
    do {
      if (((iVar12 != 0) && (*(char *)(lVar19 + param_1[5]) != '\0')) &&
         (local_108[0] = iVar12, *(char *)((longlong)iVar12 + param_1[3]) == '\x01')) {
        FBoneContainer::GetParentBoneIndex(param_1[2],local_100,local_108);
        FTransform::SetToRelativeTransform
                  ((longlong)local_108[0] * 0x30 + *param_1,
                   (longlong)(int)local_100[0] * 0x30 + *param_1);
        *(undefined1 *)((longlong)local_108[0] + param_1[3]) = 0;
      }
      iVar12 = iVar12 + -1;
      lVar19 = lVar19 + -1;
    } while (iVar12 != -1);
  }
  fVar11 = fRam0000000146855b6c;
  fVar10 = fRam0000000146855b68;
  fVar9 = fRam0000000146855b64;
  fVar8 = _DAT_146855b60;
  fVar7 = fRam0000000146855b5c;
  fVar6 = fRam0000000146855b58;
  fVar5 = fRam0000000146855b54;
  fVar4 = _DAT_146855b50;
  if (0 < (int)local_f8) {
    pfVar16 = (float *)(local_f0 + 0x30);
    uVar22 = (ulonglong)local_f8;
    do {
      pfVar21 = (float *)((longlong)(int)pfVar16[-0xc] * 0x30 + *param_1);
      if (1e-05 < param_3) {
        if (param_3 < 0.99999) {
          fVar35 = pfVar16[-3];
          fVar36 = pfVar16[-2];
          fVar37 = pfVar16[-1];
          pfVar21[4] = (pfVar16[-4] - pfVar21[4]) * param_3 + pfVar21[4];
          pfVar21[5] = (fVar35 - pfVar21[5]) * param_3 + pfVar21[5];
          pfVar21[6] = (fVar36 - pfVar21[6]) * param_3 + pfVar21[6];
          pfVar21[7] = (fVar37 - pfVar21[7]) * param_3 + pfVar21[7];
          fVar35 = pfVar16[1];
          fVar36 = pfVar16[2];
          fVar37 = pfVar16[3];
          pfVar21[8] = (*pfVar16 - pfVar21[8]) * param_3 + pfVar21[8];
          pfVar21[9] = (fVar35 - pfVar21[9]) * param_3 + pfVar21[9];
          pfVar21[10] = (fVar36 - pfVar21[10]) * param_3 + pfVar21[10];
          pfVar21[0xb] = (fVar37 - pfVar21[0xb]) * param_3 + pfVar21[0xb];
          fVar35 = *pfVar21;
          fVar36 = pfVar21[1];
          fVar37 = pfVar21[2];
          fVar38 = pfVar21[3];
          fVar29 = fVar35 * pfVar16[-8] + fVar37 * pfVar16[-6];
          fVar32 = fVar36 * pfVar16[-7] + fVar38 * pfVar16[-5];
          fVar33 = fVar37 * pfVar16[-6] + fVar35 * pfVar16[-8];
          fVar34 = fVar38 * pfVar16[-5] + fVar36 * pfVar16[-7];
          fVar39 = (float)(-(uint)(0.0 <= fVar32 + fVar29) & ((uint)(0.0 - fVar35) ^ (uint)fVar35) ^
                          (uint)(0.0 - fVar35)) * (_DAT_146855ab0 - param_3) + param_3 * pfVar16[-8]
          ;
          fVar40 = (float)(-(uint)(0.0 <= fVar33 + fVar32) & ((uint)(0.0 - fVar36) ^ (uint)fVar36) ^
                          (uint)(0.0 - fVar36)) * (fRam0000000146855ab4 - param_3) +
                   param_3 * pfVar16[-7];
          fVar41 = (float)(-(uint)(0.0 <= fVar34 + fVar33) & ((uint)(0.0 - fVar37) ^ (uint)fVar37) ^
                          (uint)(0.0 - fVar37)) * (fRam0000000146855ab8 - param_3) +
                   param_3 * pfVar16[-6];
          fVar42 = (float)(-(uint)(0.0 <= fVar29 + fVar34) & ((uint)(0.0 - fVar38) ^ (uint)fVar38) ^
                          (uint)(0.0 - fVar38)) * (fRam0000000146855abc - param_3) +
                   param_3 * pfVar16[-5];
          auVar30._0_4_ = fVar39 * fVar39 + fVar41 * fVar41;
          auVar30._4_4_ = fVar40 * fVar40 + fVar42 * fVar42;
          auVar30._8_4_ = fVar41 * fVar41 + fVar39 * fVar39;
          auVar30._12_4_ = fVar42 * fVar42 + fVar40 * fVar40;
          fVar29 = auVar30._4_4_ + auVar30._0_4_;
          fVar32 = auVar30._8_4_ + auVar30._4_4_;
          fVar33 = auVar30._12_4_ + auVar30._8_4_;
          fVar34 = auVar30._0_4_ + auVar30._12_4_;
          auVar31._4_4_ = fVar32;
          auVar31._0_4_ = fVar29;
          auVar31._8_4_ = fVar33;
          auVar31._12_4_ = fVar34;
          auVar31 = rsqrtps(auVar30,auVar31);
          fVar35 = auVar31._0_4_;
          fVar36 = auVar31._4_4_;
          fVar37 = auVar31._8_4_;
          fVar38 = auVar31._12_4_;
          fVar35 = (fVar4 - fVar35 * fVar35 * fVar29 * fVar4) * fVar35 + fVar35;
          fVar36 = (fVar5 - fVar36 * fVar36 * fVar32 * fVar5) * fVar36 + fVar36;
          fVar37 = (fVar6 - fVar37 * fVar37 * fVar33 * fVar6) * fVar37 + fVar37;
          fVar38 = (fVar7 - fVar38 * fVar38 * fVar34 * fVar7) * fVar38 + fVar38;
          fVar36 = (float)(((uint)(((fVar5 - fVar36 * fVar36 * fVar32 * fVar5) * fVar36 + fVar36) *
                                  fVar40) ^ uRam0000000146855b44) & -(uint)(fVar9 <= fVar32) ^
                          uRam0000000146855b44);
          fVar37 = (float)(((uint)(((fVar6 - fVar37 * fVar37 * fVar33 * fVar6) * fVar37 + fVar37) *
                                  fVar41) ^ uRam0000000146855b48) & -(uint)(fVar10 <= fVar33) ^
                          uRam0000000146855b48);
          fVar38 = (float)(((uint)(((fVar7 - fVar38 * fVar38 * fVar34 * fVar7) * fVar38 + fVar38) *
                                  fVar42) ^ uRam0000000146855b4c) & -(uint)(fVar11 <= fVar34) ^
                          uRam0000000146855b4c);
          *pfVar21 = (float)(((uint)(((fVar4 - fVar35 * fVar35 * fVar29 * fVar4) * fVar35 + fVar35)
                                    * fVar39) ^ _DAT_146855b40) & -(uint)(fVar8 <= fVar29) ^
                            _DAT_146855b40);
          pfVar21[1] = fVar36;
          pfVar21[2] = fVar37;
          pfVar21[3] = fVar38;
        }
        else {
          uVar3 = *(undefined8 *)(pfVar16 + -6);
          *(undefined8 *)pfVar21 = *(undefined8 *)(pfVar16 + -8);
          *(undefined8 *)(pfVar21 + 2) = uVar3;
          *(undefined1 (*) [16])(pfVar21 + 4) = *(undefined1 (*) [16])(pfVar16 + -4);
          uVar3 = *(undefined8 *)(pfVar16 + 2);
          *(undefined8 *)(pfVar21 + 8) = *(undefined8 *)pfVar16;
          *(undefined8 *)(pfVar21 + 10) = uVar3;
        }
      }
      pfVar16 = pfVar16 + 0x10;
      uVar22 = uVar22 - 1;
      local_100[0] = param_3;
    } while (uVar22 != 0);
  }
  if (local_f0 != 0) {
    FMemory::Free(local_f0);
  }
  return;
}



// FUNCTION 140613b60 FUN_140613b60 body=112 status=ok
// SIG undefined FUN_140613b60(void)

void FUN_140613b60(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  puVar2 = *(undefined8 **)(param_1 + 0x198);
  puVar1 = puVar2 + (longlong)*(int *)(param_1 + 0x1a0) * 9;
  if (puVar2 != puVar1) {
    while (puVar2[7] != param_2) {
      puVar2 = puVar2 + 9;
      if (puVar2 == puVar1) {
        return;
      }
    }
    local_28 = *puVar2;
    local_20 = *(undefined8 *)(param_3 + 8);
    local_10 = param_5;
    local_18 = param_4;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x178,&local_28);
  }
  return;
}



// FUNCTION 140613bd0 FUN_140613bd0 body=93 status=ok
// SIG undefined FUN_140613bd0(void)

void FUN_140613bd0(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  puVar2 = *(undefined8 **)(param_1 + 0x198);
  puVar1 = puVar2 + (longlong)*(int *)(param_1 + 0x1a0) * 9;
  if (puVar2 != puVar1) {
    while (puVar2[7] != param_2) {
      puVar2 = puVar2 + 9;
      if (puVar2 == puVar1) {
        return;
      }
    }
    local_18 = *puVar2;
    local_10 = *(undefined8 *)(param_3 + 8);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x188,&local_18);
  }
  return;
}



// FUNCTION 140613c30 FUN_140613c30 body=26 status=ok
// SIG undefined FUN_140613c30(void)

void FUN_140613c30(longlong param_1)

{
  FUN_14060d930();
  *(char *)(param_1 + 0x1a8) = *(char *)(param_1 + 0x1a8) + -1;
  return;
}



// FUNCTION 140613c50 FUN_140613c50 body=27 status=ok
// SIG undefined FUN_140613c50(void)

void FUN_140613c50(undefined8 param_1)

{
  FUN_142343b00();
  FUN_14060d930(param_1);
  return;
}



// FUNCTION 140613c70 FUN_140613c70 body=353 status=ok
// SIG undefined FUN_140613c70(void)

undefined8 FUN_140613c70(longlong param_1,char param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x90) == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x158) == '\0') {
    iVar2 = FUN_143264980(*(longlong *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0x120));
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = FUN_143264600();
    if (iVar2 != 0) {
      return 0;
    }
  }
  *(undefined1 *)(param_1 + 0x158) = 1;
  cVar1 = FUN_14059ee90();
  if ((cVar1 == '\0') || (cVar1 = FUN_14059ee00(), cVar1 != '\0')) goto LAB_140613d53;
  lVar5 = *(longlong *)(param_1 + 0x98);
  *(undefined1 *)(param_1 + 0x159) = 1;
  if (lVar5 == 0) {
    plVar3 = (longlong *)FUN_140611b50();
    if (plVar3 == (longlong *)0x0) goto LAB_140613d53;
    uVar4 = FUN_140618700();
    lVar5 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar4);
    if (lVar5 == 0) goto LAB_140613d53;
  }
  FUN_1405a1510(lVar5 + 0x180,-(param_2 != '\0') & 0x32,4);
LAB_140613d53:
  lVar5 = *(longlong *)(param_1 + 0x138);
  if (lVar5 == 0) {
    if (*(longlong *)(param_1 + 0x168) == 0) {
      local_18 = 0;
      uStack_10 = 0;
    }
    else {
      local_18 = *(undefined8 *)(param_1 + 0x160);
      uStack_10 = *(undefined8 *)(param_1 + 0x168);
    }
  }
  else {
    local_18 = *(undefined8 *)(lVar5 + 0x38);
    uStack_10 = *(undefined8 *)(lVar5 + 0x40);
  }
  TBaseMulticastDelegate<void,FUniqueNetId_const_&,FUniqueNetId_const_&>::Broadcast
            (param_1 + 0x78,param_1,&local_18);
  return 1;
}



// FUNCTION 140613de0 FUN_140613de0 body=90 status=ok
// SIG undefined FUN_140613de0(void)

ulonglong FUN_140613de0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong in_RAX;
  longlong *plVar2;
  ulonglong uVar3;
  
  if (param_2 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x198);
    plVar1 = plVar2 + (longlong)*(int *)(param_1 + 0x1a0) * 9;
    for (; plVar2 != plVar1; plVar2 = plVar2 + 9) {
      if (*plVar2 == param_2) {
        if ((plVar2 != (longlong *)0x0) && (plVar2[7] != 0)) {
          uVar3 = FUN_140613c70(plVar2[7],0);
          return uVar3;
        }
        break;
      }
    }
    in_RAX = FUN_140612c50();
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140613e40 FUN_140613e40 body=985 status=ok
// SIG undefined FUN_140613e40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140613e40(longlong param_1,longlong *param_2,char param_3,undefined8 param_4)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  float local_res10 [2];
  char local_res18;
  float local_68 [2];
  undefined8 local_60;
  longlong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  local_res18 = param_3;
  cVar3 = (**(code **)(*param_2 + 0x278))(param_2);
  if (cVar3 == '\0') {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x15a) & 4) == 0) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x90) == 0) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x158) != '\x02') {
    FUN_140616e20(param_1,0);
  }
  lVar10 = *(longlong *)(param_1 + 0x138);
  uVar7 = 0;
  if (lVar10 == 0) {
    local_60 = 0;
    if (*(longlong *)(param_1 + 0x168) == 0) {
      local_58 = 0;
      local_60 = 0;
      lVar10 = 0;
    }
    else {
      local_58 = *(longlong *)(param_1 + 0x160);
      uStack_50 = *(undefined4 *)(param_1 + 0x168);
      uStack_4c = *(undefined4 *)(param_1 + 0x16c);
      lVar10 = *(longlong *)(param_1 + 0x168);
    }
  }
  else {
    local_58 = *(longlong *)(lVar10 + 0x38);
    uStack_50 = *(undefined4 *)(lVar10 + 0x40);
    uStack_4c = *(undefined4 *)(lVar10 + 0x44);
    lVar10 = *(longlong *)(lVar10 + 0x40);
  }
  if ((param_2[7] == local_58) && (param_2[8] == lVar10)) goto LAB_14061411a;
  uVar5 = FUN_1406133c0(param_2[5]);
  cVar3 = FUN_1406129b0(param_1,uVar5);
  if (cVar3 == '\0') {
    bVar2 = false;
    DAT_146216a54 = DAT_146216a54 + 1;
    lVar10 = (longlong)(DAT_146216a48 + -1);
    if (-1 < DAT_146216a48 + -1) {
      lVar8 = lVar10 << 4;
      bVar2 = false;
      do {
        if (((*(int *)(lVar8 + 8 + DAT_146216a40) == 0) ||
            (plVar6 = *(longlong **)(lVar8 + DAT_146216a40), plVar6 == (longlong *)0x0)) ||
           (cVar3 = (**(code **)(*plVar6 + 0x40))(plVar6,param_1,param_2), cVar3 == '\0')) {
          bVar2 = true;
        }
        lVar8 = lVar8 + -0x10;
        lVar10 = lVar10 + -1;
      } while (-1 < lVar10);
    }
    iVar4 = DAT_146216a48;
    DAT_146216a54 = DAT_146216a54 + -1;
    if (!bVar2) {
      return 0;
    }
    if (0 < DAT_146216a54) {
      return 0;
    }
    uVar9 = uVar7;
    if (0 < DAT_146216a48) {
      do {
        if (((*(int *)(uVar9 + 8 + DAT_146216a40) == 0) ||
            (*(longlong **)(uVar9 + DAT_146216a40) == (longlong *)0x0)) ||
           (cVar3 = (**(code **)(**(longlong **)(uVar9 + DAT_146216a40) + 0x10))(), cVar3 != '\0'))
        {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_146216a40,uVar7,1,1);
        }
        else {
          uVar7 = (ulonglong)((int)uVar7 + 1);
          uVar9 = uVar9 + 0x10;
        }
      } while ((int)uVar7 < DAT_146216a48);
    }
    _DAT_146216a50 = DAT_146216a48 * 2;
    if (DAT_146216a48 * 2 < 3) {
      _DAT_146216a50 = 2;
    }
    if (iVar4 <= _DAT_146216a50) {
      return 0;
    }
    if (DAT_146216a4c == DAT_146216a48) {
      return 0;
    }
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_146216a40);
    return 0;
  }
  FUN_140617af0(param_1);
  *(undefined8 *)(param_1 + 0xb8) = uVar5;
  lVar10 = *(longlong *)(param_1 + 0x98);
  if (lVar10 == 0) {
    plVar6 = (longlong *)FUN_140611b50(param_1);
    param_3 = local_res18;
    if (plVar6 == (longlong *)0x0) goto LAB_14061411a;
    uVar5 = FUN_140618700();
    lVar10 = (**(code **)(*plVar6 + 0x628))(plVar6,uVar5);
    param_3 = local_res18;
    if (lVar10 == 0) goto LAB_14061411a;
  }
  bVar1 = *(byte *)(param_1 + 0x15a);
  cVar3 = FWeakObjectPtr::IsValid(lVar10 + 0x178);
  if (cVar3 == '\0') {
    uVar5 = FUN_14059b7e0(*(undefined8 *)(lVar10 + 0x118),1);
    FWeakObjectPtr::operator=(lVar10 + 0x178,uVar5);
  }
  lVar8 = FWeakObjectPtr::Get(lVar10 + 0x178);
  param_3 = local_res18;
  if (lVar8 != 0) {
    FUN_1406147a0(lVar10,param_2 + 9,bVar1 >> 3 & 1,param_4);
    param_3 = local_res18;
  }
LAB_14061411a:
  local_res10[0] = 0.0;
  local_68[0] = 0.0;
  iVar4 = FUN_143264720(*(undefined8 *)(param_1 + 0xb8),local_res10,local_68);
  if (((iVar4 != 0) && (iVar4 = FUN_143264600(), iVar4 == 0)) &&
     ((*(float *)(param_1 + 0x128) = local_68[0] - local_res10[0],
      0.0 < local_68[0] - local_res10[0] &&
      ((iVar4 = FUN_143264a10(*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xb8),0),
       iVar4 != 0 && (iVar4 = FUN_143264600(), iVar4 == 0)))))) {
    *(float *)(param_1 + 0x124) = local_res10[0];
    *(longlong **)(param_1 + 0x138) = param_2;
    *(undefined8 *)(param_1 + 0x170) = 0;
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(byte *)(param_1 + 0x15a) = *(byte *)(param_1 + 0x15a) & 0xfd;
    *(byte *)(param_1 + 0x15a) = *(byte *)(param_1 + 0x15a) | param_3 * '\x02';
    *(float *)(param_1 + 300) = local_res10[0];
    local_58 = 0;
    *(undefined1 *)(param_1 + 0x158) = 0;
    *(undefined4 *)(param_1 + 0x178) = 0;
    (*(code *)**(undefined8 **)(param_1 + 0x28))((undefined8 *)(param_1 + 0x28),0);
    uVar5 = FUN_140611770(param_1,&local_58);
    TBaseMulticastDelegate<void,FUniqueNetId_const_&,FUniqueNetId_const_&>::Broadcast
              (param_1 + 0x60,param_1,uVar5);
    return 1;
  }
  return 0;
}



// FUNCTION 140614220 FUN_140614220 body=688 status=ok
// SIG undefined FUN_140614220(void)

undefined8
FUN_140614220(longlong param_1,undefined8 param_2,longlong *param_3,char param_4,undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  float local_res18 [4];
  float local_58 [2];
  undefined8 local_50;
  longlong local_48;
  longlong lStack_40;
  
  if ((int)param_3[6] == 0) {
    return 0;
  }
  if (*(int *)(param_3[5] + 8) < 1) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x15a) & 4) == 0) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x90) == 0) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x158) != '\x02') {
    FUN_140616e20(param_1,0);
  }
  lVar8 = *(longlong *)(param_1 + 0x138);
  if (lVar8 == 0) {
    local_50 = 0;
    if (*(longlong *)(param_1 + 0x168) == 0) {
      local_48 = 0;
      local_50 = 0;
      lVar8 = 0;
    }
    else {
      local_48 = *(longlong *)(param_1 + 0x160);
      lVar8 = *(longlong *)(param_1 + 0x168);
      lStack_40 = lVar8;
    }
  }
  else {
    local_48 = *(longlong *)(lVar8 + 0x38);
    lVar8 = *(longlong *)(lVar8 + 0x40);
    lStack_40 = lVar8;
  }
  if ((*param_3 == local_48) && (param_3[1] == lVar8)) goto LAB_140614384;
  uVar6 = FUN_1406133c0(param_3[5]);
  cVar4 = FUN_1406129b0(param_1,uVar6);
  if (cVar4 == '\0') {
    return 0;
  }
  FUN_140617af0(param_1);
  lVar8 = *(longlong *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0xb8) = uVar6;
  if (lVar8 == 0) {
    plVar7 = (longlong *)FUN_140611b50(param_1);
    if (plVar7 == (longlong *)0x0) goto LAB_140614384;
    uVar6 = FUN_140618700();
    lVar8 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar6);
    if (lVar8 == 0) goto LAB_140614384;
  }
  FUN_1406147a0(lVar8,param_3 + 2,*(byte *)(param_1 + 0x15a) >> 3 & 1,param_5);
LAB_140614384:
  local_res18[0] = 0.0;
  local_58[0] = 0.0;
  iVar5 = FUN_143264720(*(undefined8 *)(param_1 + 0xb8),local_res18,local_58);
  if ((((iVar5 != 0) && (iVar5 = FUN_143264600(), iVar5 == 0)) &&
      (*(float *)(param_1 + 0x128) = local_58[0] - local_res18[0],
      0.0 < local_58[0] - local_res18[0])) &&
     ((iVar5 = FUN_143264a10(*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xb8),0),
      iVar5 != 0 && (iVar5 = FUN_143264600(), iVar5 == 0)))) {
    *(float *)(param_1 + 0x124) = local_res18[0];
    *(undefined8 *)(param_1 + 0x138) = 0;
    *(undefined8 *)(param_1 + 0x170) = param_2;
    lVar8 = *param_3;
    uVar1 = *(undefined4 *)((longlong)param_3 + 4);
    lVar3 = param_3[1];
    uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
    *(byte *)(param_1 + 0x15a) = *(byte *)(param_1 + 0x15a) & 0xfd;
    *(byte *)(param_1 + 0x15a) = *(byte *)(param_1 + 0x15a) | param_4 * '\x02';
    *(int *)(param_1 + 0x160) = (int)lVar8;
    *(undefined4 *)(param_1 + 0x164) = uVar1;
    *(int *)(param_1 + 0x168) = (int)lVar3;
    *(undefined4 *)(param_1 + 0x16c) = uVar2;
    *(undefined1 *)(param_1 + 0x158) = 0;
    *(float *)(param_1 + 300) = local_res18[0];
    *(undefined4 *)(param_1 + 0x178) = 0;
    (*(code *)**(undefined8 **)(param_1 + 0x28))((undefined8 *)(param_1 + 0x28),0);
    lVar8 = *(longlong *)(param_1 + 0x138);
    if (lVar8 == 0) {
      if (*(longlong *)(param_1 + 0x168) == 0) {
        local_48 = 0;
        lStack_40 = 0;
        local_50 = 0;
      }
      else {
        local_48 = *(longlong *)(param_1 + 0x160);
        lStack_40 = *(undefined8 *)(param_1 + 0x168);
      }
    }
    else {
      local_48 = *(longlong *)(lVar8 + 0x38);
      lStack_40 = *(undefined8 *)(lVar8 + 0x40);
    }
    TBaseMulticastDelegate<void,FUniqueNetId_const_&,FUniqueNetId_const_&>::Broadcast
              (param_1 + 0x60,param_1,&local_48);
    return 1;
  }
  return 0;
}



// FUNCTION 1406144d0 FUN_1406144d0 body=157 status=ok
// SIG undefined FUN_1406144d0(void)

ulonglong FUN_1406144d0(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4)

{
  longlong *plVar1;
  byte bVar2;
  ulonglong in_RAX;
  longlong *plVar3;
  undefined8 local_28;
  longlong lStack_20;
  undefined8 local_18;
  
  if (param_3 != 0) {
    plVar3 = *(longlong **)(param_1 + 0x198);
    plVar1 = plVar3 + (longlong)*(int *)(param_1 + 0x1a0) * 9;
    for (; plVar3 != plVar1; plVar3 = plVar3 + 9) {
      if (*plVar3 == param_3) {
        if ((plVar3 != (longlong *)0x0) && (plVar3[7] != 0)) {
          local_18 = 0;
          local_28 = 0;
          lStack_20 = 0;
          bVar2 = FUN_140613e40(plVar3[7],param_2,param_4,&local_28);
          if (lStack_20 != 0) {
            FMemory::Free();
          }
          return (ulonglong)bVar2;
        }
        break;
      }
    }
    in_RAX = FUN_140612c50();
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140614570 FUN_140614570 body=245 status=ok
// SIG undefined FUN_140614570(void)

char FUN_140614570(longlong param_1,float param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  
  if ((*(byte *)(param_1 + 0x15a) & 8) == 0) {
    return '\x01';
  }
  lVar3 = *(longlong *)(param_1 + 0x98);
  if (lVar3 == 0) {
    plVar2 = (longlong *)FUN_140611b50();
    if (plVar2 != (longlong *)0x0) {
      FUN_140618700();
      lVar3 = (**(code **)(*plVar2 + 0x628))(plVar2);
      if (lVar3 != 0) goto LAB_1406145ca;
    }
    return '\0';
  }
LAB_1406145ca:
  lVar3 = lVar3 + 0x180;
  cVar1 = FUN_14059ee00(lVar3);
  if (cVar1 != '\0') {
    if (param_2 <= 0.033) {
      uVar5 = 0;
    }
    else {
      FUN_1405a94c0(lVar3,(int)(param_2 * 1000.0));
      uVar5 = 0xfa;
    }
    FUN_1405a8a50(lVar3,uVar5,4);
  }
  cVar1 = FUN_14059ee90(lVar3);
  *(float *)(param_1 + 0x178) = param_2;
  uVar4 = 2;
  if (cVar1 != '\0') {
    uVar4 = 0;
  }
  *(undefined1 *)(param_1 + 0x159) = uVar4;
  return cVar1;
}



// FUNCTION 140614670 FUN_140614670 body=298 status=ok
// SIG undefined FUN_140614670(void)

ulonglong FUN_140614670(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong *in_RAX;
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int *piVar6;
  
  if (param_3 == 0) {
    if (0 < *(int *)(param_1 + 0x1a0)) {
      in_RAX = *(longlong **)(param_1 + 0x198);
      lVar2 = in_RAX[7];
LAB_1406146d8:
      if ((lVar2 != 0) && (param_4 != 0)) {
        iVar3 = 0;
        if (0 < *(int *)(param_4 + 0x38)) {
          lVar5 = 0;
          piVar6 = (int *)(*(longlong *)(param_4 + 0x30) + 0x20);
          do {
            if ((*param_2 != 0) && (*(int *)(*param_2 + 0x28) == *piVar6)) {
LAB_140614770:
              if ((-1 < iVar3) && (iVar3 < *(int *)(param_4 + 0x38))) {
                uVar1 = FUN_140614220(lVar2,param_4,
                                      (longlong)iVar3 * 0x38 + *(longlong *)(param_4 + 0x30),0,
                                      param_2);
                return uVar1;
              }
              break;
            }
            in_RAX = (longlong *)param_2[1];
            plVar4 = (longlong *)((longlong)in_RAX + (longlong)(int)param_2[2] * 0xc);
            for (; in_RAX != plVar4; in_RAX = (longlong *)((longlong)in_RAX + 0xc)) {
              if (*(int *)((longlong)in_RAX + 4) == *piVar6) goto LAB_140614770;
            }
            iVar3 = iVar3 + 1;
            lVar5 = lVar5 + 1;
            piVar6 = piVar6 + 0xe;
          } while (lVar5 < *(int *)(param_4 + 0x38));
        }
        return (ulonglong)in_RAX & 0xffffffffffffff00;
      }
    }
  }
  else {
    plVar4 = *(longlong **)(param_1 + 0x198);
    in_RAX = plVar4 + (longlong)*(int *)(param_1 + 0x1a0) * 9;
    for (; plVar4 != in_RAX; plVar4 = plVar4 + 9) {
      if (*plVar4 == param_3) {
        if (plVar4 != (longlong *)0x0) {
          lVar2 = plVar4[7];
          goto LAB_1406146d8;
        }
        break;
      }
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1406147a0 FUN_1406147a0 body=225 status=ok
// SIG undefined FUN_1406147a0(void)

void FUN_1406147a0(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_28 [32];
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x178);
  if (cVar1 == '\0') {
    uVar2 = FUN_14059b7e0(*(undefined8 *)(param_1 + 0x118),1);
    FWeakObjectPtr::operator=(param_1 + 0x178,uVar2);
  }
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x178);
  if (lVar3 != 0) {
    if ((*param_4 == 0) || (*(longlong *)(lVar3 + 0x378) == 0)) {
      lVar3 = FUN_1405a3150(lVar3,local_28,*(undefined8 *)(param_2 + 8),6);
    }
    else {
      lVar3 = FUN_1405a27c0(*(longlong *)(lVar3 + 0x378),local_28,param_4,6);
    }
    FUN_1405913a0(param_1 + 0x180,lVar3);
    *(undefined4 *)(param_1 + 400) = *(undefined4 *)(lVar3 + 0x10);
    FUN_140591060(local_28);
    FUN_1405a1510(param_1 + 0x180,0,4);
  }
  return;
}



// FUNCTION 140614890 FUN_140614890 body=116 status=ok
// SIG undefined FUN_140614890(void)

void FUN_140614890(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)UInterpTrackInst::GetGroupActor(param_2);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = UCircularThrobber::GetPrivateStaticClass();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    if (lVar3 != 0) {
      lVar4 = *(longlong *)(lVar3 + 0x198);
      lVar3 = lVar4 + (longlong)*(int *)(lVar3 + 0x1a0) * 0x48;
      for (; lVar4 != lVar3; lVar4 = lVar4 + 0x48) {
        if (*(longlong *)(lVar4 + 0x38) != 0) {
          FUN_140616e20(*(longlong *)(lVar4 + 0x38),0);
        }
      }
    }
  }
  return;
}



// FUNCTION 140614910 FUN_140614910 body=603 status=ok
// SIG undefined FUN_140614910(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140614910(longlong *param_1,undefined8 param_2,longlong param_3)

{
  float *pfVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_158 [32];
  longlong *local_138;
  undefined1 local_130;
  uint local_120;
  longlong local_118;
  longlong lStack_110;
  undefined1 local_108 [16];
  longlong local_f8 [24];
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  lVar6 = *(longlong *)(*(longlong *)(param_3 + 0x20) + 0x20);
  (**(code **)(*param_1 + 0x300))(param_1,lVar6,param_3,~*(byte *)(lVar6 + 0x4b8) & 1);
  lVar6 = UInterpTrackInst::GetGroupActor(param_3);
  if (lVar6 != 0) {
    uVar8 = 0;
    local_38 = (longlong *)0x0;
    local_30 = 0;
    FUN_140609cc0(lVar6,local_f8,0);
    plVar9 = local_f8;
    if (local_38 != (longlong *)0x0) {
      plVar9 = local_38;
    }
    uVar10 = (longlong)(int)local_30 & 0x1fffffffffffffff;
    if (plVar9 + (int)local_30 < plVar9) {
      uVar10 = uVar8;
    }
    if (uVar10 != 0) {
      do {
        plVar2 = (longlong *)*plVar9;
        (**(code **)(*plVar2 + 0x960))(plVar2,0);
        FUN_1423b8300(plVar2);
        pfVar1 = (float *)(plVar2 + 0x50);
        if (((*(float *)(plVar2 + 0x3f) != *pfVar1) ||
            (*(float *)((longlong)plVar2 + 0x1fc) != *(float *)((longlong)plVar2 + 0x284))) ||
           (*(float *)(plVar2 + 0x40) != *(float *)(plVar2 + 0x51))) {
          lVar6 = *(longlong *)*(undefined1 (*) [12])(plVar2 + 0x3f);
          fVar3 = (float)DAT_146855b20;
          fVar4 = DAT_146855b20._4_4_;
          fVar5 = DAT_146855b20._8_4_;
          auVar11._12_4_ = 0;
          auVar11._0_12_ = *(undefined1 (*) [12])(plVar2 + 0x3f);
          auVar11 = divps(auVar11,_DAT_146855b20);
          fVar12 = (float)lVar6 - (float)(int)auVar11._0_4_ * fVar3;
          fVar13 = (float)((ulonglong)lVar6 >> 0x20) - (float)(int)auVar11._4_4_ * fVar4;
          fVar14 = *(float *)(plVar2 + 0x40) - (float)(int)auVar11._8_4_ * fVar5;
          fVar12 = (float)(((uint)(fVar12 + fVar3) ^ (uint)fVar12) & -(uint)(0.0 <= fVar12) ^
                          (uint)(fVar12 + fVar3));
          fVar13 = (float)(((uint)(fVar13 + fVar4) ^ (uint)fVar13) & -(uint)(0.0 <= fVar13) ^
                          (uint)(fVar13 + fVar4));
          fVar14 = (float)(((uint)(fVar14 + fVar5) ^ (uint)fVar14) & -(uint)(0.0 <= fVar14) ^
                          (uint)(fVar14 + fVar5));
          local_120 = ((uint)(fVar14 - fVar5) ^ (uint)fVar14) &
                      -(uint)(fRam0000000146855b18 < fVar14) ^ (uint)fVar14;
          *(ulonglong *)pfVar1 =
               CONCAT44(((uint)(fVar13 - fVar4) ^ (uint)fVar13) &
                        -(uint)(fRam0000000146855b14 < fVar13) ^ (uint)fVar13,
                        ((uint)(fVar12 - fVar3) ^ (uint)fVar12) & -(uint)(_DAT_146855b10 < fVar12) ^
                        (uint)fVar12);
          *(uint *)(plVar2 + 0x51) = local_120;
          plVar7 = (longlong *)FRotator::Quaternion(pfVar1,local_108);
          lVar6 = plVar7[1];
          plVar2[0x4e] = *plVar7;
          plVar2[0x4f] = lVar6;
        }
        local_118 = plVar2[0x4e];
        lStack_110 = plVar2[0x4f];
        local_138 = &local_118;
        local_130 = 0;
        FUN_14239b520(plVar2,plVar2[0x32],plVar2[0x33],0);
        plVar9 = plVar9 + 1;
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar10);
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140614b70 FUN_140614b70 body=187 status=ok
// SIG undefined FUN_140614b70(void)

void FUN_140614b70(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar2 = (longlong)*(int *)(param_1 + 0x118);
  if ((((*(int *)(param_1 + 0x118) != 0) &&
       (iVar1 = FUN_143264dd0(*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0x110),lVar2
                             ), iVar1 != 0)) && (iVar1 = FUN_143264600(), iVar1 == 0)) &&
     ((lVar3 = FUN_140611bb0(param_1), lVar3 != 0 && (uVar4 = 0, uVar5 = uVar4, 0 < lVar2)))) {
    do {
      FUN_1423bad30(lVar3,*(undefined8 *)(*(longlong *)(param_1 + 0x100) + (longlong)(int)uVar5 * 8)
                    ,*(undefined4 *)(uVar4 + *(longlong *)(param_1 + 0x110)),1);
      uVar4 = uVar4 + 0x10;
      lVar2 = lVar2 + -1;
      uVar5 = (ulonglong)((int)uVar5 + 1);
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 140614c30 Rehash body=520 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<unsigned_int,FMeshSectionInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FMeshSectionInfo,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
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
  uVar5 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar5 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar5) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_28;
      }
      uVar5 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_140614d6f;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
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
      if (iVar3 < iStack_44) {
LAB_140614d6f:
        iStack_44 = iVar3;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar3) {
      do {
        puVar12 = (uint *)(*param_1 + (longlong)iStack_1c * 0x14);
        uVar5 = (int)*plVar2 - 1U & *puVar12;
        puVar12[4] = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        puVar12[3] = *(uint *)((longlong)plVar7 +
                              ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 140614e40 FUN_140614e40 body=535 status=ok
// SIG undefined FUN_140614e40(void)

void FUN_140614e40(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar5 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar5 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar5) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_38;
      }
      uVar5 = *puVar12;
      local_68 = 0;
      iStack_50 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_140614f6f;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_54 = (iStack_50 - iVar8) + 0x1f;
      if (iVar3 < iStack_54) {
LAB_140614f6f:
        iStack_54 = iVar3;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar3) {
      do {
        iVar3 = iStack_2c;
        lVar6 = (longlong)iStack_2c * 0x70 + *param_1;
        uVar5 = FCrc::MemCrc_DEPRECATED(lVar6,0x10);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)(lVar6 + 0x6c) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x68) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 140615060 Rehash body=535 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FGuid,unsigned_char>,TDefaultMapHashableKeyFuncs<FGuid,unsigned_char,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar5 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar5 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar5) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_38;
      }
      uVar5 = *puVar12;
      local_68 = 0;
      iStack_50 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_14061518f;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_54 = (iStack_50 - iVar8) + 0x1f;
      if (iVar3 < iStack_54) {
LAB_14061518f:
        iStack_54 = iVar3;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar3) {
      do {
        iVar3 = iStack_2c;
        lVar6 = (longlong)iStack_2c * 0x1c + *param_1;
        uVar5 = FCrc::MemCrc_DEPRECATED(lVar6,0x10);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)(lVar6 + 0x18) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x14) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 140615280 Rehash body=528 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
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
  uVar5 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar5 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar5) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_28;
      }
      uVar5 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_1406153bf;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
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
      if (iVar3 < iStack_44) {
LAB_1406153bf:
        iStack_44 = iVar3;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar3) {
      do {
        iVar3 = iStack_1c;
        lVar6 = *param_1 + (longlong)iStack_1c * 0x28;
        uVar5 = ::GetTypeHash(lVar6);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)(lVar6 + 0x24) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x20) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 1406154b0 FUN_1406154b0 body=130 status=ok
// SIG undefined FUN_1406154b0(void)

void FUN_1406154b0(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x78))) {
    if (*(longlong *)((longlong)param_2 * 0x58 + 0x38 + *(longlong *)(param_1 + 0x70)) != 0) {
      FMemory::Free();
    }
    iVar3 = *(int *)(param_1 + 0x78);
    iVar2 = (iVar3 - param_2) + -1;
    if (iVar2 != 0) {
      lVar1 = *(longlong *)(param_1 + 0x70);
      _guard_xfg_dispatch_icall_nop
                ((void *)(lVar1 + (longlong)param_2 * 0x58),
                 (void *)((longlong)(param_2 + 1) * 0x58 + lVar1),(longlong)iVar2 * 0x58);
      iVar3 = *(int *)(param_1 + 0x78);
    }
    *(int *)(param_1 + 0x78) = iVar3 + -1;
    TArray<FCloudFileHeader,FDefaultAllocator>::ResizeShrink((longlong *)(param_1 + 0x70));
  }
  return;
}



// FUNCTION 140615540 FUN_140615540 body=235 status=ok
// SIG undefined FUN_140615540(void)

void FUN_140615540(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  lVar2 = (longlong)*(int *)(param_1 + 0x60);
  if (*(int *)(param_1 + 0x60) != 0) {
    iVar6 = 0;
    bVar7 = **(longlong **)(param_1 + 0x58) != param_2;
    lVar3 = 0;
    iVar4 = 0;
    do {
      lVar3 = lVar3 + 1;
      iVar5 = iVar4 + 1;
      if (lVar3 < lVar2) {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x58) + lVar3 * 8);
        do {
          if (bVar7 != (*plVar1 != param_2)) break;
          iVar5 = iVar5 + 1;
          lVar3 = lVar3 + 1;
          plVar1 = plVar1 + 1;
        } while (lVar3 < lVar2);
      }
      if (bVar7 != false) {
        if (iVar6 != iVar4) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar6 * 8),
                     (void *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar4 * 8),
                     (longlong)(iVar5 - iVar4) << 3);
        }
        iVar6 = iVar6 + (iVar5 - iVar4);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar4 = iVar5;
    } while (lVar3 < lVar2);
    *(int *)(param_1 + 0x60) = iVar6;
  }
  return;
}



// FUNCTION 140615630 Reserve body=376 status=ok
// SIG undefined Reserve(void)

void TSparseArray<TSetElement<TSharedPtr<FInterfaceContainer,0>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Reserve(longlong *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  
  iVar6 = (int)param_1[1];
  if (iVar6 < param_2) {
    uVar9 = (ulonglong)(uint)(param_2 - iVar6);
    *(int *)(param_1 + 1) = param_2;
    if (*(int *)((longlong)param_1 + 0xc) < param_2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar6);
    }
    iVar10 = param_2 + -1;
    lVar11 = (longlong)iVar10;
    if (iVar6 <= lVar11) {
      iVar3 = *(int *)((longlong)param_1 + 0x34);
      lVar8 = lVar11 * 0x18;
      lVar11 = (lVar11 - iVar6) + 1;
      do {
        if (iVar3 != 0) {
          *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar10;
        }
        *(undefined4 *)(lVar8 + *param_1) = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (undefined4)param_1[6];
        }
        *(undefined4 *)(lVar8 + 4 + *param_1) = uVar5;
        lVar8 = lVar8 + -0x18;
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar3 = *(int *)((longlong)param_1 + 0x34);
        *(int *)(param_1 + 6) = iVar10;
        iVar10 = iVar10 + -1;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    if (0 < param_2 - iVar6) {
      do {
        iVar10 = (int)param_1[5];
        iVar6 = iVar10 + 1;
        *(int *)(param_1 + 5) = iVar6;
        if (*(int *)((longlong)param_1 + 0x2c) <= iVar10) {
          uVar2 = (int)(iVar10 + 0x20 + (iVar10 + 0x20 >> 0x1f & 0x1fU)) >> 5;
          if (uVar2 < 5) {
            iVar3 = 4;
          }
          else {
            uVar4 = FMemory::QuantizeSize
                              ((((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2)
                               * 4 + 0x40,0);
            iVar6 = (int)param_1[5];
            iVar3 = (int)(uVar4 >> 2);
            if (iVar3 < (int)uVar2) {
              iVar3 = 0x7fffffff;
            }
          }
          *(int *)((longlong)param_1 + 0x2c) = iVar3 << 5;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,iVar6 + -1);
        }
        plVar7 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar7 = param_1 + 2;
        }
        iVar6 = iVar10;
        if (iVar10 < 0) {
          iVar6 = iVar10 + 0x1f;
        }
        puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar6 >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << ((byte)iVar10 & 0x1f));
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  return;
}



// FUNCTION 1406157b0 FUN_1406157b0 body=269 status=ok
// SIG undefined FUN_1406157b0(void)

void FUN_1406157b0(longlong param_1)

{
  FUN_140616e20(param_1,0);
  FUN_140617af0(param_1);
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1432641d0(param_1 + 0xa0,0,0);
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_143264550(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_143264440(param_1 + 0xb0,0,0);
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(int *)(param_1 + 0xcc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0xc0,0);
  }
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(int *)(param_1 + 0xdc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 0xd0,0);
  }
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if (*(int *)(param_1 + 0xfc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xf0,0);
  }
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (*(int *)(param_1 + 0x10c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x100,0);
  }
  *(undefined4 *)(param_1 + 0x118) = 0;
  if (*(int *)(param_1 + 0x11c) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x110,0);
  }
  *(byte *)(param_1 + 0x15a) = *(byte *)(param_1 + 0x15a) | 1;
  *(undefined8 *)(param_1 + 0x90) = 0;
  return;
}



// FUNCTION 1406158c0 FUN_1406158c0 body=161 status=ok
// SIG undefined FUN_1406158c0(void)

void FUN_1406158c0(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0xc0);
  if (param_3 < 0x19) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 3);
    pvVar1 = *(void **)((longlong)param_1 + 0xc0);
    if (pvVar1 == (void *)0x0) {
      return;
    }
    param_4 = 0;
  }
  else {
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
      if (param_3 != 0) {
        pvVar1 = (void *)FMemory::Realloc(0,(int)param_3 * param_4,0);
        *(void **)((longlong)param_1 + 0xc0) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 3);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0xc0) = uVar2;
  return;
}



// FUNCTION 140615970 FUN_140615970 body=246 status=ok
// SIG undefined FUN_140615970(void)

void FUN_140615970(ulonglong *param_1,int param_2,int param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 local_res10 [8];
  undefined *local_38;
  undefined1 *puStack_30;
  
  if ((param_2 != param_3) && (param_2 != 0)) {
    puStack_30 = local_res10;
    local_38 = &DAT_14060d670;
    local_res10[0] = 0;
    iVar7 = param_2 * 0x30;
    lVar3 = FUN_1415d8310(&local_38,&DAT_146216a38);
    puVar1 = (ulonglong *)(lVar3 + 0x18);
    uVar2 = 8;
    if (0xf < iVar7) {
      uVar2 = 0x10;
    }
    uVar5 = 0x10;
    if (0xf < iVar7) {
      uVar5 = (ulonglong)uVar2;
    }
    uVar6 = (*puVar1 - 1) + uVar5 & ~(uVar5 - 1);
    uVar4 = (longlong)iVar7 + uVar6;
    if (*(ulonglong *)(lVar3 + 0x20) < uVar4) {
      FMemStackBase::AllocateNewChunk(puVar1,iVar7 + (int)uVar5);
      uVar6 = (*puVar1 - 1) + uVar5 & ~(uVar5 - 1);
      uVar4 = (longlong)iVar7 + uVar6;
    }
    *puVar1 = uVar4;
    *param_1 = uVar6;
    *(int *)((longlong)param_1 + 0xc) = param_2;
    return;
  }
  *(int *)((longlong)param_1 + 0xc) = param_2;
  return;
}



// FUNCTION 140615a70 ResizeGrow body=141 status=ok
// SIG undefined ResizeGrow(void)

void TArray<UHierarchicalInstancedStaticMeshComponent_*,TInlineAllocator<24,FDefaultAllocator>_>::
     ResizeGrow(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 200);
  if (uVar1 < 0x19) {
    iVar2 = 0x18;
  }
  else {
    lVar4 = 4;
    if ((*(int *)(param_1 + 0xcc) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 * 8,0);
    iVar2 = (int)(uVar3 >> 3);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0xcc) = iVar2;
  FUN_1406158c0(param_1,param_2,iVar2,8);
  return;
}



// FUNCTION 140615b00 ResizeGrow body=132 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar2 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
  }
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x58,0);
  iVar4 = (int)(uVar3 / 0x58);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x58,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 140615b90 ResizeShrink body=156 status=ok
// SIG undefined ResizeShrink(void)

ulonglong TArray<FCloudFileHeader,FDefaultAllocator>::ResizeShrink(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  iVar4 = (int)param_1[1];
  uVar2 = (ulonglong)(iVar5 - iVar4);
  if ((0x3fff < uVar2 * 0x58) || (uVar2 = (ulonglong)(uint)(iVar5 * 2), iVar4 * 3 < iVar5 * 2)) {
    if (0x40 < (uint)(iVar5 - iVar4)) {
      if (0 < iVar4) {
        uVar3 = FMemory::QuantizeSize((longlong)iVar4 * 0x58,0);
        iVar5 = *(int *)((longlong)param_1 + 0xc);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        uVar2 = SUB168(ZEXT816(0x2e8ba2e8ba2e8ba3) * auVar1,0);
        iVar4 = (int)(uVar3 / 0x58);
      }
      goto LAB_140615bfe;
    }
    if (iVar4 == 0) goto LAB_140615bfe;
  }
  iVar4 = iVar5;
LAB_140615bfe:
  if (iVar4 != iVar5) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      uVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x58,0);
      *param_1 = uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 140615c30 FUN_140615c30 body=110 status=ok
// SIG undefined FUN_140615c30(void)

void FUN_140615c30(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x19) {
      iVar1 = 0x18;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *(int *)(param_1 + 0xcc)) {
    *(int *)(param_1 + 0xcc) = iVar1;
    FUN_1406158c0(param_1,*(undefined4 *)(param_1 + 200),iVar1,8);
  }
  return;
}



// FUNCTION 140615ca0 ResizeTo body=124 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeTo
               (longlong *param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 0x1c,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0x2492492492492493) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 4);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if (iVar4 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x1c,0);
      *param_1 = lVar3;
    }
  }
  return;
}



// FUNCTION 140615d20 FUN_140615d20 body=121 status=ok
// SIG undefined FUN_140615d20(void)

void FUN_140615d20(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x20) + 0x278))();
  if (plVar1 != (longlong *)0x0) {
    uVar2 = UCircularThrobber::GetPrivateStaticClass();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    if (lVar3 != 0) {
      lVar4 = *(longlong *)(lVar3 + 0x198);
      lVar3 = lVar4 + (longlong)*(int *)(lVar3 + 0x1a0) * 0x48;
      for (; lVar4 != lVar3; lVar4 = lVar4 + 0x48) {
        if (*(longlong *)(lVar4 + 0x38) != 0) {
          FUN_140616e20(*(longlong *)(lVar4 + 0x38),0);
        }
      }
    }
  }
  return;
}



// FUNCTION 140615da0 FUN_140615da0 body=308 status=ok
// SIG undefined FUN_140615da0(void)

undefined8 FUN_140615da0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  
  if (param_2 == 0) {
    return 0;
  }
  plVar7 = *(longlong **)(param_1 + 0x198);
  plVar4 = plVar7 + (longlong)*(int *)(param_1 + 0x1a0) * 9;
  do {
    if (plVar7 == plVar4) {
LAB_140615de1:
      FUN_140612c50();
      return 0;
    }
    if (*plVar7 == param_2) {
      if ((plVar7 != (longlong *)0x0) && (lVar1 = plVar7[7], lVar1 != 0)) {
        if ((*(byte *)(lVar1 + 0x15a) & 4) == 0) {
          return 0;
        }
        if (*(longlong *)(lVar1 + 0xa0) == 0) {
          return 0;
        }
        if (*(longlong *)(lVar1 + 0x90) == 0) {
          return 0;
        }
        if (*(char *)(lVar1 + 0x158) == '\0') {
          return 0;
        }
        iVar3 = FUN_143264f90(*(longlong *)(lVar1 + 0xa0),*(undefined4 *)(lVar1 + 0x120));
        if (iVar3 == 0) {
          return 0;
        }
        iVar3 = FUN_143264600();
        if (iVar3 != 0) {
          return 0;
        }
        lVar6 = *(longlong *)(lVar1 + 0x98);
        *(undefined1 *)(lVar1 + 0x158) = 0;
        cVar2 = FUN_14059ee90(lVar6 + 0x180);
        if ((cVar2 != '\0') && (cVar2 = FUN_14059ee00(lVar6 + 0x180), cVar2 == '\0')) {
          return 1;
        }
        lVar6 = *(longlong *)(lVar1 + 0x98);
        if (lVar6 == 0) {
          plVar4 = (longlong *)FUN_140611b50(lVar1);
          if (plVar4 == (longlong *)0x0) {
            return 1;
          }
          uVar5 = FUN_140618700();
          lVar6 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar5);
          if (lVar6 == 0) {
            return 1;
          }
        }
        FUN_1405a8a50(lVar6 + 0x180,0,4);
        *(undefined1 *)(lVar1 + 0x159) = 0;
        return 1;
      }
      goto LAB_140615de1;
    }
    plVar7 = plVar7 + 9;
  } while( true );
}



// FUNCTION 140615ee0 SafeSetCSBoneTransforms body=615 status=ok
// SIG undefined SafeSetCSBoneTransforms(void)

void FCSPose<FCompactPose>::SafeSetCSBoneTransforms(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  int *piVar10;
  int *piVar11;
  int local_res8 [2];
  int local_res10 [2];
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x44)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 7,0);
  }
  piVar8 = (int *)*param_2;
  piVar11 = piVar8 + (longlong)*(int *)(param_2 + 1) * 0x10;
  iVar6 = *piVar8;
  for (; piVar8 != piVar11; piVar8 = piVar8 + 0x10) {
    if (*(char *)((longlong)*piVar8 + param_1[3]) == '\x01') {
      iVar4 = (int)param_1[8];
      *(int *)(param_1 + 8) = iVar4 + 1;
      if (*(int *)((longlong)param_1 + 0x44) < iVar4 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 7,iVar4);
      }
      *(int *)(param_1[7] + (longlong)iVar4 * 4) = *piVar8;
    }
  }
  iVar4 = (int)param_1[8];
  lVar9 = (longlong)iVar4;
  lVar7 = param_1[1];
  if (iVar6 != (int)lVar7) {
LAB_140615f80:
    local_res8[0] = iVar6;
    FBoneContainer::GetParentBoneIndex(param_1[2],local_res10,local_res8);
    if (*(char *)((longlong)local_res8[0] + param_1[3]) == '\x01') {
      piVar8 = (int *)param_1[7];
      iVar4 = (int)param_1[8];
      for (piVar11 = piVar8; piVar11 != piVar8 + iVar4; piVar11 = piVar11 + 1) {
        piVar10 = piVar8;
        if (*piVar11 == local_res10[0]) goto joined_r0x000140615fdb;
      }
    }
    goto LAB_14061601f;
  }
LAB_14061602c:
  for (lVar7 = (longlong)(iVar4 + -1); lVar9 <= lVar7; lVar7 = lVar7 + -1) {
    local_res8[0] = *(int *)(param_1[7] + lVar7 * 4);
    if ((local_res8[0] != 0) && (*(char *)((longlong)local_res8[0] + param_1[3]) == '\x01')) {
      FBoneContainer::GetParentBoneIndex(param_1[2],local_res10,local_res8);
      FTransform::SetToRelativeTransform
                ((longlong)local_res8[0] * 0x30 + *param_1,
                 (longlong)local_res10[0] * 0x30 + *param_1);
      *(undefined1 *)((longlong)local_res8[0] + param_1[3]) = 0;
    }
  }
  piVar8 = (int *)*param_2;
  piVar11 = piVar8 + (longlong)*(int *)(param_2 + 1) * 0x10;
  if (piVar8 != piVar11) {
    piVar10 = piVar8 + 0xc;
    do {
      local_res8[0] = *piVar8;
      FBoneContainer::GetParentBoneIndex(param_1[2],local_res10,local_res8);
      if ((local_res10[0] != -1) && (*(char *)((longlong)local_res10[0] + param_1[3]) == '\0')) {
        FUN_14060c680(param_1);
      }
      uVar3 = *(undefined8 *)(piVar10 + -6);
      piVar8 = piVar8 + 0x10;
      puVar5 = (undefined8 *)((longlong)local_res8[0] * 0x30 + *param_1);
      *puVar5 = *(undefined8 *)(piVar10 + -8);
      puVar5[1] = uVar3;
      uVar3 = *(undefined8 *)(piVar10 + -2);
      puVar5[2] = *(undefined8 *)(piVar10 + -4);
      puVar5[3] = uVar3;
      iVar6 = *piVar10;
      iVar4 = piVar10[1];
      iVar1 = piVar10[2];
      iVar2 = piVar10[3];
      piVar10 = piVar10 + 0x10;
      *(int *)(puVar5 + 4) = iVar6;
      *(int *)((longlong)puVar5 + 0x24) = iVar4;
      *(int *)(puVar5 + 5) = iVar1;
      *(int *)((longlong)puVar5 + 0x2c) = iVar2;
      *(undefined1 *)((longlong)local_res8[0] + param_1[3]) = 1;
    } while (piVar8 != piVar11);
  }
  return;
joined_r0x000140615fdb:
  if (piVar10 == piVar8 + iVar4) goto LAB_140615ffb;
  if (*piVar10 == local_res8[0]) {
    if ((int)((longlong)piVar10 - (longlong)piVar8 >> 2) != -1) goto LAB_14061601f;
    goto LAB_140615ffb;
  }
  piVar10 = piVar10 + 1;
  goto joined_r0x000140615fdb;
LAB_140615ffb:
  *(int *)(param_1 + 8) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0x44) < iVar4 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 7,iVar4);
  }
  *(int *)((longlong)iVar4 * 4 + param_1[7]) = local_res8[0];
LAB_14061601f:
  iVar6 = iVar6 + 1;
  if (iVar6 == (int)lVar7) goto code_r0x000140616029;
  goto LAB_140615f80;
code_r0x000140616029:
  iVar4 = (int)param_1[8];
  goto LAB_14061602c;
}



// FUNCTION 140616150 FUN_140616150 body=136 status=ok
// SIG undefined FUN_140616150(void)

void FUN_140616150(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *local_res8;
  undefined8 local_res10;
  int local_res18 [2];
  
  plVar1 = (longlong *)(param_1 + 0x30);
  local_res10 = param_2;
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(plVar1,local_res18,param_2);
  if ((local_res18[0] != -1) && (lVar2 = *plVar1 + (longlong)local_res18[0] * 0x18, lVar2 != 0)) {
    *(undefined4 *)(lVar2 + 8) = param_3;
    return;
  }
  local_res8 = &local_res10;
  FUN_140608300(plVar1,local_res18,&local_res8,0);
  *(undefined4 *)(*plVar1 + 8 + (longlong)local_res18[0] * 0x18) = param_3;
  return;
}



// FUNCTION 1406161e0 FUN_1406161e0 body=593 status=ok
// SIG undefined FUN_1406161e0(void)

uint FUN_1406161e0(longlong param_1,uint param_2,float param_3,char param_4)

{
  undefined4 *puVar1;
  byte *pbVar2;
  longlong lVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  ulonglong uVar7;
  void *_Src;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 local_a8;
  undefined1 local_a0 [24];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined8 local_58;
  longlong local_50 [2];
  float local_40;
  byte local_3c;
  undefined4 local_38;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x78))) {
    lVar8 = (longlong)(int)param_2 * 0x58;
    lVar3 = *(longlong *)(param_1 + 0x70);
    if (param_4 == '\0') {
      *(float *)(lVar8 + 0x48 + lVar3) = param_3;
    }
    else {
      puVar1 = (undefined4 *)(lVar8 + lVar3);
      local_88 = *puVar1;
      uStack_84 = puVar1[1];
      uStack_80 = puVar1[2];
      uStack_7c = puVar1[3];
      puVar1 = (undefined4 *)(lVar8 + 0x10 + lVar3);
      local_78 = *puVar1;
      uStack_74 = puVar1[1];
      uStack_70 = puVar1[2];
      uStack_6c = puVar1[3];
      TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(&local_68,lVar3 + 0x20 + lVar8);
      local_40 = *(float *)(lVar8 + 0x48 + lVar3);
      lVar10 = *(longlong *)(param_1 + 0x70);
      local_3c = local_3c ^ (*(byte *)(lVar8 + 0x4c + lVar3) ^ local_3c) & 1;
      local_3c = (*(byte *)(lVar8 + 0x4c + lVar3) ^ local_3c) & 2 ^ local_3c;
      local_38 = *(undefined4 *)(lVar8 + 0x50 + lVar3);
      if (*(longlong *)(lVar10 + 0x38 + lVar8) != 0) {
        FMemory::Free();
        lVar10 = *(longlong *)(param_1 + 0x70);
      }
      iVar6 = *(int *)(param_1 + 0x78);
      iVar4 = (iVar6 - param_2) + -1;
      if (iVar4 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(lVar8 + lVar10),(void *)((longlong)(int)(param_2 + 1) * 0x58 + lVar10),
                   (longlong)iVar4 * 0x58);
        iVar6 = *(int *)(param_1 + 0x78);
      }
      *(int *)(param_1 + 0x78) = iVar6 + -1;
      TArray<FCloudFileHeader,FDefaultAllocator>::ResizeShrink(param_1 + 0x70);
      uVar7 = 0;
      param_2 = 0;
      if (0 < *(int *)(param_1 + 0x78)) {
        pfVar5 = (float *)(*(longlong *)(param_1 + 0x70) + 0x48);
        uVar9 = uVar7;
        do {
          param_2 = (uint)uVar9;
          if (param_3 < *pfVar5 || param_3 == *pfVar5) break;
          param_2 = param_2 + 1;
          uVar9 = (ulonglong)param_2;
          uVar7 = uVar7 + 1;
          pfVar5 = pfVar5 + 0x16;
        } while ((longlong)uVar7 < (longlong)*(int *)(param_1 + 0x78));
      }
      iVar6 = *(int *)(param_1 + 0x78);
      *(int *)(param_1 + 0x78) = iVar6 + 1;
      local_40 = param_3;
      if (*(int *)(param_1 + 0x7c) < iVar6 + 1) {
        TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(param_1 + 0x70,iVar6);
      }
      lVar8 = (longlong)(int)param_2 * 0x58;
      _Src = (void *)(*(longlong *)(param_1 + 0x70) + lVar8);
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)_Src + 0x58),_Src,(longlong)(int)(iVar6 - param_2) * 0x58);
      _guard_xfg_dispatch_icall_nop((void *)(*(longlong *)(param_1 + 0x70) + lVar8),0,0x58);
      lVar3 = *(longlong *)(param_1 + 0x70);
      puVar1 = (undefined4 *)(lVar8 + lVar3);
      *puVar1 = local_88;
      puVar1[1] = uStack_84;
      puVar1[2] = uStack_80;
      puVar1[3] = uStack_7c;
      puVar1 = (undefined4 *)(lVar8 + 0x10 + lVar3);
      *puVar1 = local_78;
      puVar1[1] = uStack_74;
      puVar1[2] = uStack_70;
      puVar1[3] = uStack_6c;
      *(undefined4 *)(lVar8 + 0x20 + lVar3) = local_68;
      *(undefined4 *)(lVar8 + 0x24 + lVar3) = local_64;
      *(undefined4 *)(lVar8 + 0x28 + lVar3) = local_60;
      local_a8 = local_58;
      FString::FString(local_a0,local_50);
      FSoftObjectPath::operator=(lVar3 + 0x30 + lVar8,&local_a8);
      *(float *)(lVar8 + 0x48 + lVar3) = local_40;
      pbVar2 = (byte *)(lVar8 + 0x4c + lVar3);
      *pbVar2 = *pbVar2 ^ (local_3c ^ *(byte *)(lVar8 + 0x4c + lVar3)) & 1;
      pbVar2 = (byte *)(lVar8 + 0x4c + lVar3);
      *pbVar2 = *pbVar2 ^ (*(byte *)(lVar8 + 0x4c + lVar3) ^ local_3c) & 2;
      *(undefined4 *)(lVar8 + 0x50 + lVar3) = local_38;
      if (local_50[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return param_2;
}



// FUNCTION 140616440 FUN_140616440 body=512 status=ok
// SIG undefined FUN_140616440(void)

ulonglong FUN_140616440(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                       byte param_5,byte param_6)

{
  longlong *plVar1;
  byte bVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 local_b8;
  longlong local_b0 [3];
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  int local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  byte local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  undefined1 local_40 [24];
  
  puVar5 = (undefined1 *)register0x00000020;
  if ((param_2 != 0) && (param_4 != 0)) {
    plVar1 = (longlong *)(param_1 + 0x198);
    plVar3 = (longlong *)*plVar1;
    for (plVar8 = plVar3; plVar8 != plVar3 + (longlong)*(int *)(param_1 + 0x1a0) * 9;
        plVar8 = plVar8 + 9) {
      if (*plVar8 == param_2) {
        lVar6 = ((longlong)plVar8 - (longlong)plVar3) / 0x12 +
                ((longlong)plVar8 - (longlong)plVar3 >> 0x3f);
        puVar5 = (undefined1 *)-(lVar6 >> 0x3f);
        iVar7 = (int)(lVar6 >> 2) + (int)puVar5;
        if (iVar7 != -1) goto LAB_1406165f6;
        break;
      }
    }
    local_c8 = 0xffffffff;
    local_b0[0] = 0;
    local_b8 = 0;
    local_b0[1] = 0;
    local_c4 = 0;
    uVar4 = FSoftObjectPath::FSoftObjectPath(local_40,param_4);
    FSoftObjectPath::operator=(&local_b8,uVar4);
    FWeakObjectPtr::operator=(&local_c8,param_4);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    bVar2 = *(byte *)(param_4 + 0x48);
    local_c4 = CONCAT44(DAT_1464b56f4,(undefined4)local_c4);
    local_80 = 0;
    local_90 = local_c8;
    local_8c = (undefined4)local_c4;
    local_78 = 0;
    local_70 = 0;
    local_58 = local_b8;
    local_b0[2] = param_2;
    local_98 = param_3;
    local_88 = DAT_1464b56f4;
    FString::FString(local_50,local_b0);
    FSoftObjectPath::operator=(&local_80,&local_58);
    local_68 = 0;
    local_60 = ((bVar2 & 1) * '\x02' | param_6) * '\x02' | local_60 & 0xf8 | param_5;
    iVar7 = *(int *)(param_1 + 0x1a0);
    *(int *)(param_1 + 0x1a0) = iVar7 + 1;
    if (*(int *)(param_1 + 0x1a4) < iVar7 + 1) {
      TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(plVar1,iVar7);
    }
    puVar5 = (undefined1 *)FUN_14060af20(*plVar1 + (longlong)iVar7 * 0x48,local_b0 + 2);
    if (local_78 != 0) {
      puVar5 = (undefined1 *)FMemory::Free();
    }
    if (local_b0[0] != 0) {
      puVar5 = (undefined1 *)FMemory::Free();
    }
LAB_1406165f6:
    if ((*(byte *)(param_1 + 0xb8) & 1) != 0) {
      puVar5 = (undefined1 *)FUN_14060d9a0(param_1,*plVar1 + (longlong)iVar7 * 0x48);
    }
    *(undefined1 *)(param_1 + 0x1b0) = 1;
  }
  return (ulonglong)puVar5 & 0xffffffffffffff00;
}



// FUNCTION 140616640 FUN_140616640 body=1310 status=ok
// SIG undefined FUN_140616640(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140616640(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined2 *puVar12;
  int iVar13;
  longlong *plVar14;
  longlong lVar15;
  uint *puVar16;
  undefined1 *puVar17;
  longlong *plVar18;
  int iVar19;
  longlong *plVar20;
  undefined1 auStack_208 [32];
  undefined1 local_1e8 [8];
  longlong *local_1e0;
  int local_1d8;
  int local_1d4;
  int local_1d0;
  uint uStack_1cc;
  undefined8 uStack_1c8;
  undefined4 local_1c0;
  int iStack_1bc;
  int iStack_1b8;
  undefined4 uStack_1b4;
  longlong *local_1b0;
  undefined8 uStack_1a8;
  uint *local_1a0;
  uint uStack_198;
  int iStack_194;
  int local_190;
  undefined4 uStack_18c;
  undefined1 local_188 [8];
  longlong local_180;
  undefined4 *local_178;
  longlong local_170;
  longlong *local_168;
  undefined8 uStack_160;
  uint *puStack_158;
  undefined4 uStack_150;
  int iStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  longlong local_138;
  undefined8 local_130;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  int local_104;
  undefined1 local_100 [8];
  undefined1 *local_f8;
  int local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [128];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  plVar1 = (longlong *)(param_1 + 0x100);
  *(undefined4 *)(param_1 + 0x108) = 0;
  local_180 = param_1;
  if (0x7fffffff < *(uint *)(param_1 + 0x10c)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  plVar2 = (longlong *)(param_1 + 0x110);
  *(undefined4 *)(param_1 + 0x118) = 0;
  if ((*(int *)(param_1 + 0x11c) < 0) && (*(int *)(param_1 + 0x11c) != 0)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar2,0);
  }
  lVar8 = FUN_140611bb0(param_1);
  if (((lVar8 != 0) && (lVar5 = *(longlong *)(lVar8 + 0x718), lVar5 != 0)) &&
     (iVar19 = *(int *)(lVar5 + 0x248) - *(int *)(lVar5 + 0x274), iVar19 != 0)) {
    local_138 = 0;
    local_130 = 0;
    local_118 = 0;
    local_110 = 0;
    local_108 = 0xffffffff;
    local_104 = 0;
    local_f8 = (undefined1 *)0x0;
    local_f0 = 0;
    if (0 < iVar19) {
      TSparseArray<TSetElement<TSharedPtr<FInterfaceContainer,0>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Reserve(&local_138,iVar19);
    }
    local_1e0 = (longlong *)0x0;
    local_1d8 = 0;
    local_1d4 = 0;
    if (0 < iVar19) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_1e0,iVar19);
    }
    lVar8 = *(longlong *)(lVar8 + 0x718);
    local_1b0 = (longlong *)(lVar8 + 0x240);
    local_1d0 = 0;
    iVar7 = *(int *)(lVar8 + 0x268);
    uStack_1c8 = (uint *)(lVar8 + 0x250);
    uStack_1cc = 1;
    iStack_1bc = 0;
    iStack_1b8 = 0;
    if (iVar7 != 0) {
      puVar16 = *(uint **)(lVar8 + 0x260);
      if (*(uint **)(lVar8 + 0x260) == (uint *)0x0) {
        puVar16 = uStack_1c8;
      }
      uVar4 = *puVar16;
      local_1d0 = 0;
      iStack_1b8 = 0;
      while (uVar4 == 0) {
        lVar8 = (longlong)local_1d0;
        iStack_1b8 = iStack_1b8 + 0x20;
        iVar11 = local_1d0 + 1;
        bVar6 = (int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_1d0;
        local_1d0 = iVar11;
        if (bVar6) goto LAB_140616814;
        uVar4 = puVar16[lVar8 + 1];
      }
      uStack_1cc = -uVar4 & uVar4;
      iVar11 = 0x1f;
      if (uStack_1cc != 0) {
        for (; uStack_1cc >> iVar11 == 0; iVar11 = iVar11 + -1) {
        }
      }
      if (uStack_1cc == 0) {
        iVar11 = 0x20;
      }
      else {
        iVar11 = 0x1f - iVar11;
      }
      iStack_1bc = (iStack_1b8 - iVar11) + 0x1f;
      if (iVar7 < iStack_1bc) {
LAB_140616814:
        iStack_1bc = iVar7;
      }
    }
    local_1c0 = 0xffffffff;
    uStack_1a8 = CONCAT44(uStack_1cc,local_1d0);
    uStack_150 = 0xffffffff;
    iStack_14c = iStack_1bc;
    iStack_148 = iStack_1b8;
    uStack_144 = uStack_1b4;
    uStack_198 = 0xffffffff;
    iStack_194 = iStack_1bc;
    local_190 = iStack_1b8;
    uStack_18c = uStack_1b4;
    plVar14 = local_1e0;
    iVar11 = local_1d8;
    local_1a0 = uStack_1c8;
    local_168 = local_1b0;
    uStack_160 = uStack_1a8;
    puStack_158 = uStack_1c8;
    iVar13 = local_1d8;
    if (iStack_1bc < iVar7) {
      do {
        lVar8 = *local_1b0 + (longlong)iStack_194 * 0x18;
        puVar9 = (undefined8 *)FName::ToString(lVar8,&local_1d0);
        if (*(int *)(puVar9 + 1) == 0) {
          puVar12 = &DAT_143f3eda8;
        }
        else {
          puVar12 = (undefined2 *)*puVar9;
        }
        TStringConversion<TStringConvert<wchar_t,char>,128>::
        TStringConversion<TStringConvert<wchar_t,char>,128>(local_d8,puVar12);
        iVar7 = FUN_143264170(local_50,&local_e8);
        if ((iVar7 == 0) || (iVar7 = FUN_143264600(), iVar7 != 0)) {
          bVar6 = true;
        }
        else {
          bVar6 = false;
        }
        if (local_58 != 0) {
          FMemory::Free();
        }
        if (CONCAT44(uStack_1cc,local_1d0) != 0) {
          FMemory::Free();
        }
        if (bVar6) goto LAB_140616b2f;
        local_1d8 = iVar13 + 1;
        if (local_1d4 < local_1d8) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_1e0,iVar13);
          plVar14 = local_1e0;
        }
        iVar11 = local_1d8;
        plVar18 = plVar14 + (longlong)iVar13 * 2;
        *(undefined4 *)plVar18 = local_e8;
        *(undefined4 *)((longlong)plVar18 + 4) = uStack_e4;
        *(undefined4 *)(plVar18 + 1) = uStack_e0;
        *(undefined4 *)((longlong)plVar18 + 0xc) = uStack_dc;
        local_178 = &local_e8;
        local_170 = lVar8;
        FUN_1406095d0(&local_138,local_188,&local_178,0);
        uStack_198 = uStack_198 & ~uStack_1a8._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1a8);
        iVar13 = iVar11;
      } while (iStack_194 < (int)local_1a0[6]);
    }
    iVar19 = FUN_143264620(*(undefined8 *)(local_180 + 0xa0),plVar14,(longlong)iVar19);
    if ((iVar19 == 0) || (iVar19 = FUN_143264600(), iVar19 != 0)) {
LAB_140616b2f:
      if (plVar14 != (longlong *)0x0) {
        FMemory::Free(plVar14);
      }
      local_f0 = 0;
      if (local_f8 != (undefined1 *)0x0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_138);
      return 0;
    }
    local_1e8[0] = 0;
    FUN_14060a660(plVar14,(longlong)iVar11,0,local_1e8);
    plVar20 = plVar14 + (longlong)iVar11 * 2;
    puVar17 = local_f8;
    plVar18 = plVar14;
    if (plVar14 != plVar20) {
      lVar8 = local_138;
      do {
        if ((int)local_130 != local_104) {
          lVar5 = *plVar14;
          puVar10 = local_100;
          if (puVar17 != (undefined1 *)0x0) {
            puVar10 = puVar17;
          }
          iVar19 = *(int *)(puVar10 +
                           (longlong)
                           (int)((int)((ulonglong)lVar5 >> 0x20) * 0x17 + (int)lVar5 & local_f0 - 1U
                                ) * 4);
          while (iVar19 != -1) {
            lVar15 = (longlong)iVar19 * 0x18;
            if (*(longlong *)(lVar8 + (longlong)iVar19 * 0x18) == lVar5) {
              lVar15 = lVar15 + lVar8;
              if (iVar19 != -1) goto LAB_140616a4d;
              break;
            }
            iVar19 = *(int *)(lVar8 + 0x10 + lVar15);
          }
        }
        lVar15 = 0;
LAB_140616a4d:
        if ((int)plVar14[1] != -1) {
          iVar19 = *(int *)(param_1 + 0x108);
          *(int *)(param_1 + 0x108) = iVar19 + 1;
          if (*(int *)(param_1 + 0x10c) < iVar19 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar19);
          }
          *(undefined8 *)(*plVar1 + (longlong)iVar19 * 8) = *(undefined8 *)(lVar15 + 8);
          uStack_1c8 = (uint *)(longlong)(int)plVar14[1];
          iVar19 = *(int *)(param_1 + 0x118);
          *(int *)(param_1 + 0x118) = iVar19 + 1;
          if (*(int *)(param_1 + 0x11c) < iVar19 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar19);
          }
          piVar3 = (int *)(*plVar2 + (longlong)iVar19 * 0x10);
          *piVar3 = local_1d0;
          piVar3[1] = uStack_1cc;
          piVar3[2] = (int)uStack_1c8;
          piVar3[3] = uStack_1c8._4_4_;
          lVar8 = local_138;
          puVar17 = local_f8;
        }
        plVar14 = plVar14 + 2;
        plVar18 = local_1e0;
      } while (plVar14 != plVar20);
    }
    if (plVar18 != (longlong *)0x0) {
      FMemory::Free(plVar18);
      puVar17 = local_f8;
    }
    local_f0 = 0;
    if (puVar17 != (undefined1 *)0x0) {
      FMemory::Free(puVar17);
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_138);
  }
  return 1;
}



// FUNCTION 140616b60 FUN_140616b60 body=701 status=ok
// SIG undefined FUN_140616b60(void)

longlong FUN_140616b60(longlong param_1,int *param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  double dVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  undefined8 local_58;
  undefined8 uStack_50;
  
  uVar7 = UMovieScene::GetPrivateStaticClass();
  lVar8 = UObjectBaseUtility::GetTypedOuter(param_1,uVar7);
  if (lVar8 == 0) {
    return 0;
  }
  uVar7 = *(undefined8 *)(lVar8 + 0xb8);
  iVar5 = *(int *)(param_1 + 0x94);
  iVar10 = (int)((ulonglong)uVar7 >> 0x20);
  if (*(char *)(param_1 + 0x90) != '\x01') {
    iVar5 = iVar5 + 1;
  }
  iVar1 = *param_2;
  fVar12 = *(float *)(param_1 + 0x128);
  fVar13 = *(float *)(param_1 + 300);
  fVar11 = (float)FUN_140611460(param_1,0);
  dVar14 = (double)(int)uVar7;
  dVar3 = (dVar14 * (double)(fVar11 - (fVar13 + fVar12))) / (double)iVar10;
  lVar8 = (longlong)dVar3;
  if ((lVar8 != -0x8000000000000000) && ((double)lVar8 != dVar3)) {
    auVar2._8_4_ = SUB84(dVar3,0);
    auVar2._0_8_ = dVar3;
    auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    uVar6 = movmskpd(0,auVar2);
    dVar3 = (double)(longlong)(lVar8 - (ulonglong)(uVar6 & 1));
  }
  fVar11 = 0.0;
  dVar14 = 1.0 / dVar14;
  lVar8 = (longlong)(int)dVar3 * (longlong)iVar10;
  fVar13 = (float)(((double)((longlong)(iVar1 - iVar5) * (longlong)iVar10) +
                   (double)((float)iVar10 * 0.0)) * dVar14);
  fVar12 = (float)(((double)lVar8 + (double)((float)iVar10 * 0.0)) * dVar14);
  if (1e-08 < ABS(fVar12)) {
    fVar12 = (float)(int)(fVar13 / fVar12) * fVar12;
    if (ABS(fVar13) < ABS(fVar12)) {
      fVar12 = fVar13;
    }
    fVar11 = fVar13 - fVar12;
  }
  else {
    AK::MemoryMgr::StartProfileThreadUsage((long)lVar8);
  }
  local_58 = *(undefined8 *)param_2;
  uStack_50 = *(undefined8 *)(param_2 + 2);
  fVar12 = *(float *)(param_1 + 0x128);
  lVar8 = FUN_141f66b60(param_1,&local_58);
  if (lVar8 != 0) {
    lVar9 = FUN_140618300();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      *(float *)(lVar8 + 0x128) = fVar12 + fVar11;
    }
  }
  return lVar8;
}



// FUNCTION 140616e20 FUN_140616e20 body=507 status=ok
// SIG undefined FUN_140616e20(void)

undefined8 FUN_140616e20(longlong param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (((*(longlong *)(param_1 + 0xa0) == 0) || (*(longlong *)(param_1 + 0x90) == 0)) &&
     (param_2 == '\0')) {
    return 0;
  }
  cVar1 = *(char *)(param_1 + 0x158);
  if (cVar1 != '\x02') {
    iVar4 = FUN_143265020();
    if (iVar4 == 0) {
      return 0;
    }
    iVar4 = FUN_143264600();
    if (iVar4 != 0) {
      return 0;
    }
    (*(code *)**(undefined8 **)(param_1 + 0x28))(param_1 + 0x28,0);
  }
  lVar7 = *(longlong *)(param_1 + 0x138);
  if (lVar7 == 0) {
    if (*(longlong *)(param_1 + 0x168) == 0) {
      local_38 = 0;
      uStack_30 = 0;
    }
    else {
      local_38 = *(undefined8 *)(param_1 + 0x160);
      uStack_30 = *(undefined8 *)(param_1 + 0x168);
    }
  }
  else {
    local_38 = *(undefined8 *)(lVar7 + 0x38);
    uStack_30 = *(undefined8 *)(lVar7 + 0x40);
  }
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  lVar7 = *(longlong *)(param_1 + 0x98);
  *(undefined1 *)(param_1 + 0x158) = 2;
  *(undefined4 *)(param_1 + 0x178) = 0;
  if (lVar7 == 0) {
    plVar5 = (longlong *)FUN_140611b50(param_1);
    if (plVar5 == (longlong *)0x0) goto LAB_140616fde;
    uVar6 = FUN_140618700();
    lVar7 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar6);
    if (lVar7 == 0) goto LAB_140616fde;
  }
  lVar2 = *(longlong *)(param_1 + 0x98);
  cVar3 = FUN_14059ee90(lVar2 + 0x180);
  if (((cVar3 != '\0') && (cVar3 = FUN_14059ee00(lVar2 + 0x180), cVar3 == '\0')) ||
     ((cVar3 = FUN_14059ee00(*(longlong *)(param_1 + 0x98) + 0x180), cVar3 != '\0' ||
      (param_2 != '\0')))) {
    *(undefined4 *)(param_1 + 0x130) = 0;
    *(undefined4 *)(param_1 + 0x178) = 0;
    *(undefined1 *)(param_1 + 0x159) = 2;
    cVar3 = FUN_14059ee00(lVar7 + 0x180);
    if (cVar3 != '\0') {
      FUN_1405ac8f0(lVar7 + 0x180,0,4);
    }
  }
LAB_140616fde:
  FUN_140617af0(param_1);
  if (cVar1 != '\x02') {
    TBaseMulticastDelegate<void,FUniqueNetId_const_&,FUniqueNetId_const_&>::Broadcast
              (param_1 + 0x48,param_1,&local_38);
  }
  return 1;
}



// FUNCTION 140617020 FUN_140617020 body=90 status=ok
// SIG undefined FUN_140617020(void)

ulonglong FUN_140617020(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong in_RAX;
  longlong *plVar2;
  ulonglong uVar3;
  
  if (param_2 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x198);
    plVar1 = plVar2 + (longlong)*(int *)(param_1 + 0x1a0) * 9;
    for (; plVar2 != plVar1; plVar2 = plVar2 + 9) {
      if (*plVar2 == param_2) {
        if ((plVar2 != (longlong *)0x0) && (plVar2[7] != 0)) {
          uVar3 = FUN_140616e20(plVar2[7],0);
          return uVar3;
        }
        break;
      }
    }
    in_RAX = FUN_140612c50();
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140617080 FUN_140617080 body=73 status=ok
// SIG undefined FUN_140617080(void)

void FUN_140617080(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x198);
  lVar1 = lVar2 + (longlong)*(int *)(param_1 + 0x1a0) * 0x48;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x48) {
    if (*(longlong *)(lVar2 + 0x38) != 0) {
      FUN_140616e20(*(longlong *)(lVar2 + 0x38),0);
    }
  }
  return;
}



// FUNCTION 1406170d0 FUN_1406170d0 body=1492 status=ok
// SIG undefined FUN_1406170d0(void)

void FUN_1406170d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  uint *puVar15;
  longlong lVar16;
  longlong lVar17;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined8 local_res20;
  undefined8 local_108;
  longlong lStack_100;
  int iStack_f4;
  uint uStack_f0;
  undefined4 uStack_ec;
  int local_e8;
  undefined8 local_e4;
  undefined8 uStack_dc;
  int local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong local_b8;
  longlong lStack_b0;
  longlong *local_a8;
  uint uStack_a0;
  uint uStack_9c;
  uint *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong *plStack_80;
  longlong *local_78;
  undefined2 local_70;
  longlong *local_68;
  uint uStack_60;
  uint uStack_5c;
  uint *puStack_58;
  undefined1 auStack_50 [16];
  longlong *local_40;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146855c98) && (_Init_thread_header(&DAT_146855c98), DAT_146855c98 == -1))
  {
    FKeyHandle::FKeyHandle(&DAT_146855c94);
    _Init_thread_footer(&DAT_146855c98);
  }
  plVar3 = *(longlong **)(param_2 + 0x10);
  uVar11 = 0;
  local_e8 = DAT_146855c94;
  local_d4 = 0;
  local_e4 = 0;
  uStack_dc = 0;
  uVar7 = uVar11;
  if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
    iVar5 = GetTypeHash(&local_e8);
    plVar10 = (longlong *)plVar3[8];
    if ((longlong *)plVar3[8] == (longlong *)0x0) {
      plVar10 = plVar3 + 7;
    }
    iVar5 = *(int *)((longlong)plVar10 + ((longlong)(int)plVar3[9] - 1U & (longlong)iVar5) * 4);
    if (iVar5 != -1) {
      lVar9 = *plVar3;
      do {
        lVar16 = (longlong)iVar5;
        lVar17 = lVar9 + lVar16 * 0x28;
        if (*(int *)(lVar9 + lVar16 * 0x28) == local_e8) {
          if ((*(int *)(lVar17 + 0x14) == local_d4) &&
             (((*(int *)(lVar17 + 8) == local_e4._4_4_ && *(int *)(lVar17 + 0xc) == (int)uStack_dc)
              && *(int *)(lVar17 + 0x10) == uStack_dc._4_4_) &&
              (int)local_e4 == *(int *)(lVar17 + 4))) {
            bVar4 = true;
          }
          else {
            bVar4 = false;
          }
          if (!bVar4) goto LAB_14061720a;
          bVar4 = true;
        }
        else {
LAB_14061720a:
          bVar4 = false;
        }
        if (bVar4) {
          if (((iVar5 != -1) && (lVar9 = lVar9 + lVar16 * 0x28, lVar9 != 0)) &&
             (puVar8 = (ulonglong *)(lVar9 + 0x18), puVar8 != (ulonglong *)0x0)) {
            uVar7 = *puVar8;
          }
          break;
        }
        iVar5 = *(int *)(lVar17 + 0x20);
      } while (iVar5 != -1);
    }
  }
  if (uVar7 != 0) {
    plVar3 = (longlong *)(uVar7 + 8);
    iVar5 = *(int *)(uVar7 + 0x30);
    local_98 = (uint *)(uVar7 + 0x18);
    local_108._0_4_ = 0;
    local_108._4_4_ = 1;
    iStack_f4 = 0;
    uStack_f0 = 0;
    if (iVar5 != 0) {
      puVar15 = *(uint **)(uVar7 + 0x28);
      if (*(uint **)(uVar7 + 0x28) == (uint *)0x0) {
        puVar15 = local_98;
      }
      uVar2 = *puVar15;
      uVar14 = uVar11;
      while (uVar2 == 0) {
        iVar6 = (int)uVar11;
        uStack_f0 = (int)uVar14 + 0x20;
        uVar14 = (ulonglong)uStack_f0;
        local_108._0_4_ = iVar6 + 1;
        uVar11 = (ulonglong)(uint)local_108;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_140617311;
        uVar2 = puVar15[(longlong)iVar6 + 1];
      }
      local_108._4_4_ = uVar2 - 1 & uVar2 ^ uVar2;
      iVar6 = 0x1f;
      if (local_108._4_4_ != 0) {
        for (; local_108._4_4_ >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      if (local_108._4_4_ == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      iStack_f4 = (uStack_f0 - iVar6) + 0x1f;
      if (iVar5 < iStack_f4) {
LAB_140617311:
        iStack_f4 = iVar5;
      }
    }
    uStack_90 = CONCAT44(iStack_f4,0xffffffff);
    auStack_50._8_4_ = uStack_f0;
    auStack_50._0_8_ = uStack_90;
    auStack_50._12_4_ = uStack_ec;
    uStack_60 = (uint)local_108;
    uStack_5c = local_108._4_4_;
    local_70 = 0;
    local_88 = auStack_50._8_8_;
    uStack_a0 = (uint)local_108;
    uStack_9c = local_108._4_4_;
    local_a8 = plVar3;
    local_78 = plVar3;
    local_68 = plVar3;
    local_40 = plVar3;
    puStack_58 = local_98;
    plStack_80 = plVar3;
    if (iStack_f4 < *(int *)(uVar7 + 0x30)) {
      do {
        lVar9 = *local_a8;
        lVar17 = (longlong)iStack_f4 * 0x70;
        if (((*(int *)(lVar17 + 0xc + lVar9) == *(int *)(param_1 + 0x2c) &&
             *(int *)(lVar17 + 8 + lVar9) == *(int *)(param_1 + 0x28)) &&
            *(int *)(lVar17 + 4 + lVar9) == *(int *)(param_1 + 0x24)) &&
            *(int *)(param_1 + 0x20) == *(int *)(lVar17 + lVar9)) {
          iVar5 = *(int *)(param_1 + 0x30);
          if ((*(int *)(lVar17 + 0x10 + lVar9) != iVar5) ||
             (*(int *)(lVar17 + 0x20 + lVar9) == *(int *)(lVar17 + 0x4c + lVar9))) {
LAB_140617427:
            if ((char)local_70 == '\0') {
              return;
            }
            if (local_70._1_1_ == '\0') {
              return;
            }
            FUN_14060d680(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34),1);
            return;
          }
          lVar12 = lVar9 + 0x50 + lVar17;
          lVar16 = *(longlong *)(lVar12 + 8);
          if (lVar16 == 0) {
            lVar16 = lVar12;
          }
          iVar6 = *(int *)(lVar16 + ((longlong)*(int *)(lVar17 + 0x60 + lVar9) - 1U &
                                    (longlong)iVar5) * 4);
          if (iVar6 == -1) goto LAB_140617427;
          lVar9 = *(longlong *)(lVar17 + 0x18 + lVar9);
          while (lVar17 = (longlong)iVar6, *(int *)(lVar9 + lVar17 * 0x14) != iVar5) {
            iVar6 = *(int *)(lVar9 + 0xc + lVar17 * 0x14);
            if (iVar6 == -1) goto LAB_140617427;
          }
          if (((iVar6 == -1) || (lVar9 = lVar9 + lVar17 * 0x14, lVar9 == 0)) ||
             ((undefined4 *)(lVar9 + 4) == (undefined4 *)0x0)) goto LAB_140617427;
          local_res10 = *(undefined4 *)(lVar9 + 4);
          local_res14 = *(undefined4 *)(lVar9 + 8);
          lVar9 = FWeakObjectPtr::Get(&local_res10);
          if (lVar9 != 0) {
            lVar17 = UCircularThrobber::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar17 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar17 + 0x90) * 8) != lVar17 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              local_108 = *(longlong *)(param_1 + 0x38);
              lStack_100 = *(longlong *)(param_1 + 0x40);
              local_res20 = 0;
              if (lStack_100 == 0) {
                lVar17 = FUN_1406112d0(param_1 + 0x48,lVar9);
                if (lVar17 != 0) {
                  local_108 = *(longlong *)(lVar17 + 0x38);
                  lStack_100 = *(longlong *)(lVar17 + 0x40);
                }
              }
              plVar10 = (longlong *)FUN_140611f40(lVar9,param_1 + 0x70);
              if (plVar10 != (longlong *)0x0) {
                plVar13 = *(longlong **)(lVar9 + 0x198);
                plVar1 = plVar13 + (longlong)*(int *)(lVar9 + 0x1a0) * 9;
                for (; plVar13 != plVar1; plVar13 = plVar13 + 9) {
                  if ((longlong *)*plVar13 == plVar10) {
                    if ((plVar13 != (longlong *)0x0) && (lVar17 = plVar13[7], lVar17 != 0)) {
                      lVar16 = *(longlong *)(lVar17 + 0x138);
                      if (lVar16 == 0) {
                        local_d0 = 0;
                        if (*(longlong *)(lVar17 + 0x168) == 0) {
                          local_c0 = 0;
                          lVar12 = 0;
                          local_c8 = 0;
                          lVar17 = 0;
                        }
                        else {
                          lVar12 = *(longlong *)(lVar17 + 0x160);
                          lVar17 = *(longlong *)(lVar17 + 0x168);
                          local_b8 = lVar12;
                          lStack_b0 = lVar17;
                        }
                      }
                      else {
                        lVar12 = *(longlong *)(lVar16 + 0x38);
                        lVar17 = *(longlong *)(lVar16 + 0x40);
                        local_b8 = lVar12;
                        lStack_b0 = lVar17;
                      }
                      if (((int)local_108 == 0) && (local_108._4_4_ == 0)) {
                        bVar4 = true;
                      }
                      else {
                        bVar4 = false;
                      }
                      if (bVar4) {
LAB_140617644:
                        if (lStack_100 != lVar17) goto LAB_14061753a;
                      }
                      else {
                        if ((local_108 == lVar12) && (lStack_100 == lVar17)) {
                          bVar4 = true;
                        }
                        else {
                          bVar4 = false;
                        }
                        if (!bVar4) goto LAB_140617644;
                      }
                      FUN_140617020(lVar9,plVar10,0);
                      (**(code **)(*plVar10 + 0x960))(plVar10,0);
                      goto LAB_14061753a;
                    }
                    break;
                  }
                }
                FUN_140612c50();
              }
            }
          }
        }
LAB_14061753a:
        uStack_90 = CONCAT44(uStack_90._4_4_,(uint)uStack_90 & ~uStack_9c);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
        iStack_f4 = uStack_90._4_4_;
      } while (uStack_90._4_4_ < (int)local_98[6]);
      if (((char)local_70 != '\0') && (local_70._1_1_ != '\0')) {
        FUN_14060d680(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34),1);
      }
    }
    FUN_14060ee00(plVar3,0);
  }
  return;
}



// FUNCTION 1406176b0 FUN_1406176b0 body=753 status=ok
// SIG undefined FUN_1406176b0(void)

void FUN_1406176b0(longlong param_1,float param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  undefined8 local_res8;
  undefined8 local_68;
  undefined8 uStack_60;
  
  lVar9 = *(longlong *)(param_1 + 0x70);
  *(float *)(param_1 + 0xf8) = param_2 + *(float *)(param_1 + 0xf8);
  cVar3 = FUN_14059ee90(lVar9 + 0x180);
  if ((cVar3 == '\0') || (cVar3 = FUN_14059ee00(lVar9 + 0x180), cVar3 != '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    iVar5 = FUN_14059d090(*(longlong *)(param_1 + 0x70) + 0x180,1);
    fVar11 = *(float *)(param_1 + 0x150);
    if (*(float *)(param_1 + 0x150) <= *(float *)(param_1 + 0xfc)) {
      fVar11 = *(float *)(param_1 + 0xfc);
    }
    *(float *)(param_1 + 0x108) = (float)iVar5 * 0.001;
    *(float *)(param_1 + 0x150) = (float)iVar5 * 0.001;
  }
  else {
    fVar11 = param_2 + *(float *)(param_1 + 0xfc);
  }
  lVar9 = 0;
  *(float *)(param_1 + 0xfc) = fVar11;
  if ((0.0 < param_2) && (*(float *)(param_1 + 0x100) <= fVar11 - *(float *)(param_1 + 0x104))) {
    if ((*(byte *)(param_1 + 0x132) & 2) == 0) {
      FUN_140616e20(param_1 + -0x28,0);
      return;
    }
    FUN_140612cf0(param_1 + -0x28,0);
    *(undefined4 *)(param_1 + 0x150) = 0;
  }
  if ((((*(longlong *)(param_1 + 0x78) != 0) && (*(longlong *)(param_1 + 0x68) != 0)) &&
      (*(longlong *)(param_1 + 0x80) != 0)) && (*(longlong *)(param_1 + 0x90) != 0)) {
    iVar5 = *(int *)(param_1 + -0x1c);
    if (iVar5 < (int)DAT_1469e91c4) {
      uVar8 = iVar5 >> 0x1f & 0xffff;
      uVar6 = iVar5 + uVar8;
      lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
              (longlong)(int)((uVar6 & 0xffff) - uVar8) * 0x18;
    }
    if ((((*(uint *)(lVar9 + 8) >> 0x1d & 1) == 0) &&
        (iVar5 = FUN_143264b70(*(longlong *)(param_1 + 0x78),*(longlong *)(param_1 + 0x80),
                               *(undefined4 *)(param_1 + 0xfc)), iVar5 != 0)) &&
       (iVar5 = FUN_143264600(), iVar5 == 0)) {
      cVar3 = FUN_140612970(param_1 + -0x28);
      if ((cVar3 != '\0') && (cVar3 = FUN_140612b40(param_1 + -0x28), cVar3 == '\0')) {
        uVar4 = FUN_140614570(param_1 + -0x28,0,&local_res8);
        lVar9 = *(longlong *)(param_1 + 0x110);
        if (lVar9 == 0) {
          local_res8 = 0;
          if (*(longlong *)(param_1 + 0x140) == 0) {
            local_68 = 0;
            uStack_60 = 0;
            local_res8 = 0;
          }
          else {
            local_68 = *(undefined8 *)(param_1 + 0x138);
            uStack_60 = *(undefined8 *)(param_1 + 0x140);
          }
        }
        else {
          local_68 = *(undefined8 *)(lVar9 + 0x38);
          uStack_60 = *(undefined8 *)(lVar9 + 0x40);
        }
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
        bVar2 = false;
        iVar5 = *(int *)(param_1 + 0x1c);
        iVar7 = *(int *)(param_1 + 0x10) + -1;
        lVar9 = (longlong)iVar7;
        if (-1 < iVar7) {
          lVar10 = lVar9 << 4;
          bVar2 = false;
          do {
            if (((*(int *)(lVar10 + 8 + *(longlong *)(param_1 + 8)) == 0) ||
                (plVar1 = *(longlong **)(lVar10 + *(longlong *)(param_1 + 8)),
                plVar1 == (longlong *)0x0)) ||
               (cVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,param_1 + -0x28,&local_68,uVar4,0),
               cVar3 == '\0')) {
              bVar2 = true;
            }
            lVar10 = lVar10 + -0x10;
            lVar9 = lVar9 + -1;
          } while (-1 < lVar9);
          iVar5 = *(int *)(param_1 + 0x1c);
        }
        *(int *)(param_1 + 0x1c) = iVar5 + -1;
        if (bVar2) {
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1 + 8,0);
        }
      }
      FUN_140614b70(param_1 + -0x28);
      *(byte *)(param_1 + 0x132) = *(byte *)(param_1 + 0x132) | 1;
    }
  }
  return;
}



// FUNCTION 1406179b0 FUN_1406179b0 body=306 status=ok
// SIG undefined FUN_1406179b0(void)

void FUN_1406179b0(longlong param_1,int *param_2,char param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  undefined1 local_res10;
  undefined1 auStackX_11 [7];
  
  iVar1 = *param_2;
  cVar2 = FUN_140612ba0(param_1,iVar1);
  if (cVar2 != '\0') {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 8;
    cVar2 = UMovieSceneSection::TryModify(param_1,1);
    if (cVar2 != '\0') {
      if (param_3 == '\0') {
        _local_res10 = CONCAT71(auStackX_11,1);
        _local_res10 = CONCAT44(iVar1,_local_res10);
        FUN_141f653b0(param_1,&local_res10);
      }
      else if (*(char *)(param_1 + 0x90) != '\x02') {
        uVar4 = UMovieScene::GetPrivateStaticClass();
        lVar5 = UObjectBaseUtility::GetTypedOuter(param_1,uVar4);
        if (lVar5 != 0) {
          iVar3 = *(int *)(param_1 + 0x94);
          if (*(char *)(param_1 + 0x90) != '\x01') {
            iVar3 = iVar3 + 1;
          }
          iVar6 = (int)((ulonglong)*(undefined8 *)(lVar5 + 0xb8) >> 0x20);
          auStackX_11 = (undefined1  [7])CONCAT43(0,(uint3)((uint)(iVar1 - iVar3) >> 8));
          _local_res10 = CONCAT71(auStackX_11,1);
          _local_res10 = CONCAT44(iVar1,_local_res10);
          *(float *)(param_1 + 0x128) =
               ((float)((longlong)iVar6 * (longlong)(iVar1 - iVar3)) + (float)iVar6 * 0.0) /
               (float)(int)*(undefined8 *)(lVar5 + 0xb8);
          FUN_141f65e50(param_1,&local_res10);
          return;
        }
      }
    }
  }
  return;
}


