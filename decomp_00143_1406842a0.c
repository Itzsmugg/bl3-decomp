// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1406842a0 FUN_1406842a0 body=6 status=ok
// SIG undefined FUN_1406842a0(void)

undefined8 FUN_1406842a0(void)

{
  return 0xc9597e20;
}



// FUNCTION 1406842b0 FUN_1406842b0 body=6 status=ok
// SIG undefined FUN_1406842b0(void)

undefined8 FUN_1406842b0(void)

{
  return 0x38eecd1c;
}



// FUNCTION 1406842c0 FUN_1406842c0 body=6 status=ok
// SIG undefined FUN_1406842c0(void)

undefined8 FUN_1406842c0(void)

{
  return 0x89b37e73;
}



// FUNCTION 1406842d0 ResizeForCopy body=132 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x18,0);
    iVar3 = (int)(uVar1 / 0x18);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if ((iVar3 != param_3) && ((*param_1 != 0 || (iVar3 != 0)))) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x18,0);
    *param_1 = lVar2;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 140684360 ResizeForCopy body=136 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FSimpleLinkNavModifier,FDefaultAllocator>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 0x70,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0x2492492492492493) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 6);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if ((iVar4 != param_3) && ((*param_1 != 0 || (iVar4 != 0)))) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x70,0);
    *param_1 = lVar3;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  return;
}



// FUNCTION 1406843f0 ResizeTo body=120 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
               (longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x18,0);
    iVar3 = (int)(uVar1 / 0x18);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x18,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 140684470 ResizeTo body=118 status=ok
// SIG undefined ResizeTo(void)

void TArray<FSlateRenderBatch,FDefaultAllocator>::ResizeTo(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0xf0,0);
    iVar3 = (int)(uVar1 / 0xf0);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0xf0,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 1406844f0 thunk_FUN_1429e18b0 body=5 status=ok
// SIG undefined thunk_FUN_1429e18b0(void)

void thunk_FUN_1429e18b0(void)

{
  FUN_1429e18b0();
  return;
}



// FUNCTION 140684500 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UDynamicBlueprintBinding::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 140684510 thunk_FUN_142956f50 body=5 status=ok
// SIG undefined thunk_FUN_142956f50(void)

void thunk_FUN_142956f50(void)

{
  FUN_142956f50();
  return;
}



// FUNCTION 140684530 FUN_140684530 body=34 status=ok
// SIG undefined FUN_140684530(void)

void FUN_140684530(void)

{
  undefined8 uVar1;
  
  uVar1 = UUGGameViewportClient::StaticClass();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_InputAction_Continuous_Vector_Im_14403ed40,3);
  return;
}



// FUNCTION 140684560 StaticRegisterNativesUFGRemoteCallObject body=34 status=ok
// SIG undefined StaticRegisterNativesUFGRemoteCallObject(void)

void UFGRemoteCallObject::StaticRegisterNativesUFGRemoteCallObject(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SigFunc_Axis_14403fe90,2);
  return;
}



// FUNCTION 140684590 FUN_140684590 body=113 status=ok
// SIG undefined FUN_140684590(void)

void FUN_140684590(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146857938 == 0) {
    if (DAT_1468578b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468578b0,&PTR_s__Script_GbxInput_14403e270);
    }
    lVar1 = DAT_1468578b0;
    uVar2 = FUN_140684120();
    DAT_146857938 =
         GetStaticStruct(FUN_140685700,lVar1,
                         L"BlueprintGbxInputActionReceiverDelegateBinding_Continuous_Vector",0x20,
                         uVar2);
  }
  return;
}



// FUNCTION 140684610 FUN_140684610 body=113 status=ok
// SIG undefined FUN_140684610(void)

void FUN_140684610(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146857958 == 0) {
    if (DAT_1468578b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468578b0,&PTR_s__Script_GbxInput_14403e270);
    }
    lVar1 = DAT_1468578b0;
    uVar2 = FUN_140684130();
    DAT_146857958 =
         GetStaticStruct(FUN_140685730,lVar1,
                         L"BlueprintGbxInputActionReceiverDelegateBinding_Discrete",0x28,uVar2);
  }
  return;
}



// FUNCTION 140684690 FUN_140684690 body=113 status=ok
// SIG undefined FUN_140684690(void)

void FUN_140684690(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1468579f8 == 0) {
    if (DAT_1468578b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468578b0,&PTR_s__Script_GbxInput_14403e270);
    }
    lVar1 = DAT_1468578b0;
    uVar2 = FUN_140684140();
    DAT_1468579f8 = GetStaticStruct(FUN_140685760,lVar1,L"GbxInputActionEventLookupList",0x10,uVar2)
    ;
  }
  return;
}



// FUNCTION 140684710 FUN_140684710 body=113 status=ok
// SIG undefined FUN_140684710(void)

void FUN_140684710(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146857a08 == 0) {
    if (DAT_1468578b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468578b0,&PTR_s__Script_GbxInput_14403e270);
    }
    lVar1 = DAT_1468578b0;
    uVar2 = FUN_140684150();
    DAT_146857a08 = GetStaticStruct(FUN_140685790,lVar1,L"GbxInputActionMap",0x18,uVar2);
  }
  return;
}



// FUNCTION 140684790 FUN_140684790 body=113 status=ok
// SIG undefined FUN_140684790(void)

void FUN_140684790(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146857a18 == 0) {
    if (DAT_1468578b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468578b0,&PTR_s__Script_GbxInput_14403e270);
    }
    lVar1 = DAT_1468578b0;
    uVar2 = FUN_140684160();
    DAT_146857a18 = GetStaticStruct(FUN_1406857c0,lVar1,L"GbxInputActionMappedEventData",0x70,uVar2)
    ;
  }
  return;
}



// FUNCTION 140684810 FUN_140684810 body=113 status=ok
// SIG undefined FUN_140684810(void)

void FUN_140684810(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146857a68 == 0) {
    if (DAT_1468578b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468578b0,&PTR_s__Script_GbxInput_14403e270);
    }
    lVar1 = DAT_1468578b0;
    uVar2 = FUN_140684170();
    DAT_146857a68 = GetStaticStruct(FUN_140680a90,lVar1,L"GbxInputActionMappedEventParam",8,uVar2);
  }
  return;
}



// FUNCTION 140684890 FUN_140684890 body=113 status=ok
// SIG undefined FUN_140684890(void)

void FUN_140684890(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146857a28 == 0) {
    if (DAT_1468578b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468578b0,&PTR_s__Script_GbxInput_14403e270);
    }
    lVar1 = DAT_1468578b0;
    uVar2 = FUN_140684180();
    DAT_146857a28 =
         GetStaticStruct(FUN_1406857f0,lVar1,L"GbxInputActionMappedEventParam_Float",0x10,uVar2);
  }
  return;
}



// FUNCTION 140684910 FUN_140684910 body=113 status=ok
// SIG undefined FUN_140684910(void)

void FUN_140684910(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146857a38 == 0) {
    if (DAT_1468578b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468578b0,&PTR_s__Script_GbxInput_14403e270);
    }
    lVar1 = DAT_1468578b0;
    uVar2 = FUN_140684190();
    DAT_146857a38 =
         GetStaticStruct(FUN_140685820,lVar1,L"GbxInputActionMappedEventParam_Int",0x10,uVar2);
  }
  return;
}



// FUNCTION 140684990 FUN_140684990 body=113 status=ok
// SIG undefined FUN_140684990(void)

void FUN_140684990(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146857a48 == 0) {
    if (DAT_1468578b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468578b0,&PTR_s__Script_GbxInput_14403e270);
    }
    lVar1 = DAT_1468578b0;
    uVar2 = FUN_1406841a0();
    DAT_146857a48 =
         GetStaticStruct(FUN_140685850,lVar1,L"GbxInputActionMappedEventParam_Name",0x10,uVar2);
  }
  return;
}



// FUNCTION 140684a10 FUN_140684a10 body=113 status=ok
// SIG undefined FUN_140684a10(void)

void FUN_140684a10(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146857a58 == 0) {
    if (DAT_1468578b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468578b0,&PTR_s__Script_GbxInput_14403e270);
    }
    lVar1 = DAT_1468578b0;
    uVar2 = FUN_1406841b0();
    DAT_146857a58 =
         GetStaticStruct(FUN_140685880,lVar1,L"GbxInputActionMappedEventParam_String",0x18,uVar2);
  }
  return;
}



// FUNCTION 140684a90 FUN_140684a90 body=113 status=ok
// SIG undefined FUN_140684a90(void)

void FUN_140684a90(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146857988 == 0) {
    if (DAT_1468578b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468578b0,&PTR_s__Script_GbxInput_14403e270);
    }
    lVar1 = DAT_1468578b0;
    uVar2 = FUN_1406841d0();
    DAT_146857988 = GetStaticStruct(FUN_1406858b0,lVar1,L"GbxInputAxis",0x20,uVar2);
  }
  return;
}



// FUNCTION 140684b10 FUN_140684b10 body=113 status=ok
// SIG undefined FUN_140684b10(void)

void FUN_140684b10(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146857998 == 0) {
    if (DAT_1468578b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468578b0,&PTR_s__Script_GbxInput_14403e270);
    }
    lVar1 = DAT_1468578b0;
    uVar2 = FUN_1406841c0();
    DAT_146857998 = GetStaticStruct(FUN_1406858e0,lVar1,L"GbxInputAxisKey",0x28,uVar2);
  }
  return;
}



// FUNCTION 140684b90 FUN_140684b90 body=113 status=ok
// SIG undefined FUN_140684b90(void)

void FUN_140684b90(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1468579a8 == 0) {
    if (DAT_1468578b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468578b0,&PTR_s__Script_GbxInput_14403e270);
    }
    lVar1 = DAT_1468578b0;
    uVar2 = FUN_1406841e0();
    DAT_1468579a8 = GetStaticStruct(FUN_140685910,lVar1,L"GbxInputButton",0x20,uVar2);
  }
  return;
}



// FUNCTION 140684c10 FUN_140684c10 body=113 status=ok
// SIG undefined FUN_140684c10(void)

void FUN_140684c10(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146857a88 == 0) {
    if (DAT_1468578b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468578b0,&PTR_s__Script_GbxInput_14403e270);
    }
    lVar1 = DAT_1468578b0;
    uVar2 = FUN_140684290();
    DAT_146857a88 = GetStaticStruct(FUN_1406814d0,lVar1,L"GbxInputEvent",0x48,uVar2);
  }
  return;
}



// FUNCTION 140684c90 FUN_140684c90 body=113 status=ok
// SIG undefined FUN_140684c90(void)

void FUN_140684c90(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146857a98 == 0) {
    if (DAT_1468578b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468578b0,&PTR_s__Script_GbxInput_14403e270);
    }
    lVar1 = DAT_1468578b0;
    uVar2 = FUN_1406841f0();
    DAT_146857a98 = GetStaticStruct(FUN_140685940,lVar1,L"GbxInputEventExecOutput",0x38,uVar2);
  }
  return;
}



// FUNCTION 140684d10 FUN_140684d10 body=113 status=ok
// SIG undefined FUN_140684d10(void)

void FUN_140684d10(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146857aa8 == 0) {
    if (DAT_1468578b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468578b0,&PTR_s__Script_GbxInput_14403e270);
    }
    lVar1 = DAT_1468578b0;
    uVar2 = FUN_140684200();
    DAT_146857aa8 =
         GetStaticStruct(FUN_140685970,lVar1,L"GbxInputEventExecOutput_FastPath",0x18,uVar2);
  }
  return;
}



// FUNCTION 140684d90 FUN_140684d90 body=113 status=ok
// SIG undefined FUN_140684d90(void)

void FUN_140684d90(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146857b40 == 0) {
    if (DAT_1468578b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468578b0,&PTR_s__Script_GbxInput_14403e270);
    }
    lVar1 = DAT_1468578b0;
    uVar2 = FUN_140684210();
    DAT_146857b40 =
         GetStaticStruct(FUN_1406859a0,lVar1,L"GbxInputEventHelper_SigFunc_Axis_Data",0xc,uVar2);
  }
  return;
}



// FUNCTION 140684e10 FUN_140684e10 body=113 status=ok
// SIG undefined FUN_140684e10(void)

void FUN_140684e10(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146857b30 == 0) {
    if (DAT_1468578b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468578b0,&PTR_s__Script_GbxInput_14403e270);
    }
    lVar1 = DAT_1468578b0;
    uVar2 = FUN_140684220();
    DAT_146857b30 =
         GetStaticStruct(FUN_1406859d0,lVar1,L"GbxInputEventHelper_SigFunc_Button_PressPulse_Data",4
                         ,uVar2);
  }
  return;
}



// FUNCTION 140684e90 FUN_140684e90 body=113 status=ok
// SIG undefined FUN_140684e90(void)

void FUN_140684e90(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146857ab8 == 0) {
    if (DAT_1468578b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468578b0,&PTR_s__Script_GbxInput_14403e270);
    }
    lVar1 = DAT_1468578b0;
    uVar2 = FUN_140684230();
    DAT_146857ab8 = GetStaticStruct(FUN_140685a00,lVar1,L"GbxInputEvent_Axis_Basic",0x70,uVar2);
  }
  return;
}



// FUNCTION 140684f10 FUN_140684f10 body=113 status=ok
// SIG undefined FUN_140684f10(void)

void FUN_140684f10(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146857ac8 == 0) {
    if (DAT_1468578b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468578b0,&PTR_s__Script_GbxInput_14403e270);
    }
    lVar1 = DAT_1468578b0;
    uVar2 = FUN_140684240();
    DAT_146857ac8 = GetStaticStruct(FUN_14067fda0,lVar1,L"GbxInputEvent_Axis_Core",0x70,uVar2);
  }
  return;
}



// FUNCTION 140684f90 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FNodeHierarchyWithUserData::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146857ad8 == 0) {
    if (DAT_1468578b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468578b0,&PTR_s__Script_GbxInput_14403e270);
    }
    lVar1 = DAT_1468578b0;
    uVar2 = FUN_140684250();
    DAT_146857ad8 = GetStaticStruct(FUN_14067ff00,lVar1,L"GbxInputEvent_Button_Core",0x78,uVar2);
  }
  return;
}



// FUNCTION 140685010 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FConstraintData::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146857af0 == 0) {
    if (DAT_1468578b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468578b0,&PTR_s__Script_GbxInput_14403e270);
    }
    lVar1 = DAT_1468578b0;
    uVar2 = FUN_140684260();
    DAT_146857af0 =
         GetStaticStruct(FUN_140685a30,lVar1,L"GbxInputEvent_Button_PressHoldRelease",0x80,uVar2);
  }
  return;
}



// FUNCTION 140685090 FUN_140685090 body=113 status=ok
// SIG undefined FUN_140685090(void)

void FUN_140685090(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146857b08 == 0) {
    if (DAT_1468578b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468578b0,&PTR_s__Script_GbxInput_14403e270);
    }
    lVar1 = DAT_1468578b0;
    uVar2 = FUN_140684270();
    DAT_146857b08 =
         GetStaticStruct(FUN_140685a60,lVar1,L"GbxInputEvent_Button_PressPulse",0x98,uVar2);
  }
  return;
}



// FUNCTION 140685110 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FNodeHierarchyWithUserData::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146857b20 == 0) {
    if (DAT_1468578b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468578b0,&PTR_s__Script_GbxInput_14403e270);
    }
    lVar1 = DAT_1468578b0;
    uVar2 = FUN_140684280();
    DAT_146857b20 =
         GetStaticStruct(FUN_140685a90,lVar1,L"GbxInputEvent_Button_PressRelease",0x78,uVar2);
  }
  return;
}



// FUNCTION 140685190 FUN_140685190 body=113 status=ok
// SIG undefined FUN_140685190(void)

void FUN_140685190(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146857b70 == 0) {
    if (DAT_1468578b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468578b0,&PTR_s__Script_GbxInput_14403e270);
    }
    lVar1 = DAT_1468578b0;
    uVar2 = FUN_1406842a0();
    DAT_146857b70 = GetStaticStruct(FUN_1406808e0,lVar1,L"GbxInputKey",0x10,uVar2);
  }
  return;
}



// FUNCTION 140685210 FUN_140685210 body=113 status=ok
// SIG undefined FUN_140685210(void)

void FUN_140685210(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146857bc8 == 0) {
    if (DAT_1468578b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468578b0,&PTR_s__Script_GbxInput_14403e270);
    }
    lVar1 = DAT_1468578b0;
    uVar2 = FUN_1406842b0();
    DAT_146857bc8 = GetStaticStruct(FUN_140685ac0,lVar1,L"GbxInputRebind_Axis",0x30,uVar2);
  }
  return;
}



// FUNCTION 140685290 FUN_140685290 body=113 status=ok
// SIG undefined FUN_140685290(void)

void FUN_140685290(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146857bd8 == 0) {
    if (DAT_1468578b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468578b0,&PTR_s__Script_GbxInput_14403e270);
    }
    lVar1 = DAT_1468578b0;
    uVar2 = FUN_1406842c0();
    DAT_146857bd8 = GetStaticStruct(FUN_140685af0,lVar1,L"GbxInputRebind_Button",0x30,uVar2);
  }
  return;
}



// FUNCTION 140685310 Z_Construct_UClass_AEnemySpawnPatterns body=47 status=ok
// SIG undefined Z_Construct_UClass_AEnemySpawnPatterns(void)

longlong Z_Construct_UClass_AEnemySpawnPatterns(void)

{
  if (DAT_1468578d8 == 0) {
    FUN_141786440(&DAT_1468578d8,&PTR_StaticClass_14403cf90);
  }
  return DAT_1468578d8;
}



// FUNCTION 140685340 FUN_140685340 body=47 status=ok
// SIG undefined FUN_140685340(void)

longlong FUN_140685340(void)

{
  if (DAT_1468578c8 == 0) {
    FUN_141786440(&DAT_1468578c8,&PTR_StaticClass_14403cce0);
  }
  return DAT_1468578c8;
}



// FUNCTION 140685370 FUN_140685370 body=47 status=ok
// SIG undefined FUN_140685370(void)

longlong FUN_140685370(void)

{
  if (DAT_1468578f8 == 0) {
    FUN_141786440(&DAT_1468578f8,&PTR_FUN_14403d230);
  }
  return DAT_1468578f8;
}



// FUNCTION 1406853a0 FUN_1406853a0 body=47 status=ok
// SIG undefined FUN_1406853a0(void)

longlong FUN_1406853a0(void)

{
  if (DAT_146857908 == 0) {
    FUN_141786440(&DAT_146857908,&PTR_FUN_14403d560);
  }
  return DAT_146857908;
}



// FUNCTION 1406853d0 FUN_1406853d0 body=47 status=ok
// SIG undefined FUN_1406853d0(void)

longlong FUN_1406853d0(void)

{
  if (DAT_146857918 == 0) {
    FUN_141786440(&DAT_146857918,&PTR_FUN_14403d690);
  }
  return DAT_146857918;
}



// FUNCTION 140685400 FUN_140685400 body=47 status=ok
// SIG undefined FUN_140685400(void)

longlong FUN_140685400(void)

{
  if (DAT_146857948 == 0) {
    FUN_141786440(&DAT_146857948,&PTR_FUN_14403a600);
  }
  return DAT_146857948;
}



// FUNCTION 140685430 FUN_140685430 body=47 status=ok
// SIG undefined FUN_140685430(void)

longlong FUN_140685430(void)

{
  if (DAT_146857968 == 0) {
    FUN_141786440(&DAT_146857968,&PTR_FUN_14403aea0);
  }
  return DAT_146857968;
}



// FUNCTION 140685460 FUN_140685460 body=47 status=ok
// SIG undefined FUN_140685460(void)

longlong FUN_140685460(void)

{
  if (DAT_146857978 == 0) {
    FUN_141786440(&DAT_146857978,&PTR_FUN_14403b420);
  }
  return DAT_146857978;
}



// FUNCTION 140685490 FUN_140685490 body=47 status=ok
// SIG undefined FUN_140685490(void)

longlong FUN_140685490(void)

{
  if (DAT_146857a78 == 0) {
    FUN_141786440(&DAT_146857a78,&PTR_FUN_14403cd50);
  }
  return DAT_146857a78;
}



// FUNCTION 1406854c0 FUN_1406854c0 body=47 status=ok
// SIG undefined FUN_1406854c0(void)

longlong FUN_1406854c0(void)

{
  if (DAT_146857ba8 == 0) {
    FUN_141786440(&DAT_146857ba8,&PTR_FUN_14403b690);
  }
  return DAT_146857ba8;
}



// FUNCTION 1406854f0 FUN_1406854f0 body=47 status=ok
// SIG undefined FUN_1406854f0(void)

longlong FUN_1406854f0(void)

{
  if (DAT_146857b98 == 0) {
    FUN_141786440(&DAT_146857b98,&PTR_FUN_14403b390);
  }
  return DAT_146857b98;
}



// FUNCTION 140685520 FUN_140685520 body=47 status=ok
// SIG undefined FUN_140685520(void)

longlong FUN_140685520(void)

{
  if (DAT_146857bb8 == 0) {
    FUN_141786440(&DAT_146857bb8,&PTR_FUN_14403b7b0);
  }
  return DAT_146857bb8;
}



// FUNCTION 140685550 FUN_140685550 body=47 status=ok
// SIG undefined FUN_140685550(void)

longlong FUN_140685550(void)

{
  if (DAT_146857be8 == 0) {
    FUN_141786440(&DAT_146857be8,&PTR_FUN_14403c5a0);
  }
  return DAT_146857be8;
}



// FUNCTION 140685580 FUN_140685580 body=47 status=ok
// SIG undefined FUN_140685580(void)

longlong FUN_140685580(void)

{
  if (DAT_146857bf8 == 0) {
    FUN_141786440(&DAT_146857bf8,&PTR_FUN_14403d2c0);
  }
  return DAT_146857bf8;
}



// FUNCTION 1406855b0 FUN_1406855b0 body=47 status=ok
// SIG undefined FUN_1406855b0(void)

longlong FUN_1406855b0(void)

{
  if (DAT_1468579b8 == 0) {
    FUN_141786a30(&DAT_1468579b8,&PTR_FUN_146229de0);
  }
  return DAT_1468579b8;
}



// FUNCTION 1406855e0 FUN_1406855e0 body=47 status=ok
// SIG undefined FUN_1406855e0(void)

longlong FUN_1406855e0(void)

{
  if (DAT_1468579c0 == 0) {
    FUN_141786a30(&DAT_1468579c0,&PTR_FUN_146229e60);
  }
  return DAT_1468579c0;
}



// FUNCTION 140685610 FUN_140685610 body=47 status=ok
// SIG undefined FUN_140685610(void)

longlong FUN_140685610(void)

{
  if (DAT_1468579f0 == 0) {
    FUN_1417866a0(&DAT_1468579f0,&PTR_FUN_14622bbd0);
  }
  return DAT_1468579f0;
}



// FUNCTION 140685640 FUN_140685640 body=47 status=ok
// SIG undefined FUN_140685640(void)

longlong FUN_140685640(void)

{
  if (DAT_146857ae8 == 0) {
    FUN_1417866a0(&DAT_146857ae8,&PTR_FUN_14622bc20);
  }
  return DAT_146857ae8;
}



// FUNCTION 140685670 FUN_140685670 body=47 status=ok
// SIG undefined FUN_140685670(void)

longlong FUN_140685670(void)

{
  if (DAT_146857b00 == 0) {
    FUN_1417866a0(&DAT_146857b00,&PTR_FUN_14622bc70);
  }
  return DAT_146857b00;
}



// FUNCTION 1406856a0 FUN_1406856a0 body=47 status=ok
// SIG undefined FUN_1406856a0(void)

longlong FUN_1406856a0(void)

{
  if (DAT_146857b18 == 0) {
    FUN_1417866a0(&DAT_146857b18,&PTR_FUN_14622bcc0);
  }
  return DAT_146857b18;
}



// FUNCTION 1406856d0 FUN_1406856d0 body=47 status=ok
// SIG undefined FUN_1406856d0(void)

longlong FUN_1406856d0(void)

{
  if (DAT_146857b80 == 0) {
    FUN_1417866a0(&DAT_146857b80,&PTR_FUN_14622bd10);
  }
  return DAT_146857b80;
}



// FUNCTION 140685700 FUN_140685700 body=47 status=ok
// SIG undefined FUN_140685700(void)

longlong FUN_140685700(void)

{
  if (DAT_146857940 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146857940,&PTR_FUN_146229790);
  }
  return DAT_146857940;
}



// FUNCTION 140685730 FUN_140685730 body=47 status=ok
// SIG undefined FUN_140685730(void)

longlong FUN_140685730(void)

{
  if (DAT_146857960 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146857960,&PTR_FUN_146229970);
  }
  return DAT_146857960;
}



// FUNCTION 140685760 FUN_140685760 body=47 status=ok
// SIG undefined FUN_140685760(void)

longlong FUN_140685760(void)

{
  if (DAT_146857a00 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146857a00,&PTR_FUN_14622a220);
  }
  return DAT_146857a00;
}



// FUNCTION 140685790 FUN_140685790 body=47 status=ok
// SIG undefined FUN_140685790(void)

longlong FUN_140685790(void)

{
  if (DAT_146857a10 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146857a10,&PTR_FUN_14622a320);
  }
  return DAT_146857a10;
}



// FUNCTION 1406857c0 FUN_1406857c0 body=47 status=ok
// SIG undefined FUN_1406857c0(void)

longlong FUN_1406857c0(void)

{
  if (DAT_146857a20 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146857a20,&PTR_FUN_14622a6b0);
  }
  return DAT_146857a20;
}



// FUNCTION 1406857f0 FUN_1406857f0 body=47 status=ok
// SIG undefined FUN_1406857f0(void)

longlong FUN_1406857f0(void)

{
  if (DAT_146857a30 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146857a30,&PTR_FUN_14622a730);
  }
  return DAT_146857a30;
}



// FUNCTION 140685820 FUN_140685820 body=47 status=ok
// SIG undefined FUN_140685820(void)

longlong FUN_140685820(void)

{
  if (DAT_146857a40 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146857a40,&PTR_FUN_14622a7b0);
  }
  return DAT_146857a40;
}



// FUNCTION 140685850 FUN_140685850 body=47 status=ok
// SIG undefined FUN_140685850(void)

longlong FUN_140685850(void)

{
  if (DAT_146857a50 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146857a50,&PTR_FUN_14622a830);
  }
  return DAT_146857a50;
}



// FUNCTION 140685880 FUN_140685880 body=47 status=ok
// SIG undefined FUN_140685880(void)

longlong FUN_140685880(void)

{
  if (DAT_146857a60 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146857a60,&PTR_FUN_14622a8b0);
  }
  return DAT_146857a60;
}



// FUNCTION 1406858b0 FUN_1406858b0 body=47 status=ok
// SIG undefined FUN_1406858b0(void)

longlong FUN_1406858b0(void)

{
  if (DAT_146857990 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146857990,&PTR_FUN_146229b30);
  }
  return DAT_146857990;
}



// FUNCTION 1406858e0 FUN_1406858e0 body=47 status=ok
// SIG undefined FUN_1406858e0(void)

longlong FUN_1406858e0(void)

{
  if (DAT_1468579a0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1468579a0,&PTR_FUN_146229c30);
  }
  return DAT_1468579a0;
}



// FUNCTION 140685910 FUN_140685910 body=47 status=ok
// SIG undefined FUN_140685910(void)

longlong FUN_140685910(void)

{
  if (DAT_1468579b0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1468579b0,&PTR_FUN_146229cf0);
  }
  return DAT_1468579b0;
}



// FUNCTION 140685940 FUN_140685940 body=47 status=ok
// SIG undefined FUN_140685940(void)

longlong FUN_140685940(void)

{
  if (DAT_146857aa0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146857aa0,&PTR_FUN_14622ad50);
  }
  return DAT_146857aa0;
}



// FUNCTION 140685970 FUN_140685970 body=47 status=ok
// SIG undefined FUN_140685970(void)

longlong FUN_140685970(void)

{
  if (DAT_146857ab0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146857ab0,&PTR_FUN_14622af10);
  }
  return DAT_146857ab0;
}



// FUNCTION 1406859a0 FUN_1406859a0 body=47 status=ok
// SIG undefined FUN_1406859a0(void)

longlong FUN_1406859a0(void)

{
  if (DAT_146857b48 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146857b48,&PTR_FUN_14622b420);
  }
  return DAT_146857b48;
}



// FUNCTION 1406859d0 FUN_1406859d0 body=47 status=ok
// SIG undefined FUN_1406859d0(void)

longlong FUN_1406859d0(void)

{
  if (DAT_146857b38 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146857b38,&PTR_FUN_14622b370);
  }
  return DAT_146857b38;
}



// FUNCTION 140685a00 FUN_140685a00 body=47 status=ok
// SIG undefined FUN_140685a00(void)

longlong FUN_140685a00(void)

{
  if (DAT_146857ac0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146857ac0,&PTR_FUN_14622af90);
  }
  return DAT_146857ac0;
}



// FUNCTION 140685a30 FUN_140685a30 body=47 status=ok
// SIG undefined FUN_140685a30(void)

longlong FUN_140685a30(void)

{
  if (DAT_146857af8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146857af8,&PTR_FUN_14622b200);
  }
  return DAT_146857af8;
}



// FUNCTION 140685a60 FUN_140685a60 body=47 status=ok
// SIG undefined FUN_140685a60(void)

longlong FUN_140685a60(void)

{
  if (DAT_146857b10 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146857b10,&PTR_FUN_14622b280);
  }
  return DAT_146857b10;
}



// FUNCTION 140685a90 FUN_140685a90 body=47 status=ok
// SIG undefined FUN_140685a90(void)

longlong FUN_140685a90(void)

{
  if (DAT_146857b28 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146857b28,&PTR_FUN_14622b300);
  }
  return DAT_146857b28;
}



// FUNCTION 140685ac0 FUN_140685ac0 body=47 status=ok
// SIG undefined FUN_140685ac0(void)

longlong FUN_140685ac0(void)

{
  if (DAT_146857bd0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146857bd0,&PTR_FUN_14622b7b0);
  }
  return DAT_146857bd0;
}



// FUNCTION 140685af0 FUN_140685af0 body=47 status=ok
// SIG undefined FUN_140685af0(void)

longlong FUN_140685af0(void)

{
  if (DAT_146857be0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146857be0,&PTR_FUN_14622b8b0);
  }
  return DAT_146857be0;
}



// FUNCTION 140685b20 FUN_140685b20 body=201 status=ok
// SIG undefined FUN_140685b20(void)

void FUN_140685b20(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
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
  puVar1 = local_18;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14067ad50(param_1,local_res10,puVar1);
  return;
}



// FUNCTION 140685bf0 FUN_140685bf0 body=101 status=ok
// SIG undefined FUN_140685bf0(void)

void FUN_140685bf0(undefined8 param_1,longlong param_2)

{
  undefined1 local_18 [16];
  
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
  return;
}



// FUNCTION 140685c60 FUN_140685c60 body=97 status=ok
// SIG undefined FUN_140685c60(void)

void FUN_140685c60(undefined8 param_1,longlong param_2)

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
  return;
}



// FUNCTION 140685cd0 FUN_140685cd0 body=194 status=ok
// SIG undefined FUN_140685cd0(void)

void FUN_140685cd0(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
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
  FUN_14067ea70(param_1,local_res20,local_res10[0] != 0);
  return;
}



// FUNCTION 140685dc0 FUN_140685dc0 body=142 status=ok
// SIG undefined FUN_140685dc0(void)

undefined8 * FUN_140685dc0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  short *psVar1;
  int iVar2;
  longlong lVar3;
  
  psVar1 = (short *)*param_2;
  *param_1 = 0;
  param_1[1] = 0;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (psVar1[lVar3] != 0);
    iVar2 = (int)lVar3 + 1;
    *(int *)(param_1 + 1) = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,psVar1,(longlong)iVar2 * 2);
  }
  FUN_14217e740(param_1 + 2);
  FUN_140643170(param_1 + 2,param_3);
  return param_1;
}



// FUNCTION 140685e50 FUN_140685e50 body=680 status=ok
// SIG undefined FUN_140685e50(void)

uint * FUN_140685e50(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  void *_Dst;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  uint *_Src;
  uint *puVar14;
  undefined4 uVar15;
  bool bVar16;
  uint local_res8 [2];
  uint *local_res10;
  
  iVar11 = 1;
  uVar15 = 0xffffffff;
  local_res10 = param_2;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar10 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar10 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,uVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar10 = *(uint *)(param_1 + 6);
    iVar1 = *(int *)((longlong)(int)uVar10 * 0x20 + 4 + *param_1);
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar1;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = uVar10;
  local_res8[0] = local_res8[0] & 0xffffff00;
  lVar5 = (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar14 = (uint *)((longlong)plVar8 + lVar5);
  *puVar14 = *puVar14 | 1 << ((byte)uVar10 & 0x1f);
  puVar14 = (uint *)*param_3;
  lVar7 = (longlong)(int)uVar10 * 0x20;
  _Src = (uint *)(*param_1 + lVar7);
  uVar13 = puVar14[1];
  uVar4 = puVar14[2];
  uVar3 = puVar14[3];
  *_Src = *puVar14;
  _Src[1] = uVar13;
  _Src[2] = uVar4;
  _Src[3] = uVar3;
  _Src[4] = puVar14[4];
  *(undefined1 *)((longlong)_Src + 0x15) = 0;
  _Src[6] = 0xffffffff;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar13 != 1) {
    FUN_140687540(param_1,local_res8,_Src);
    uVar4 = local_res8[0];
    lVar9 = (longlong)(int)local_res8[0];
    bVar16 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar16);
    if (bVar16) {
      _Dst = (void *)(lVar9 * 0x20 + *param_1);
      if (*(char *)((longlong)_Dst + 0x15) != '\0') {
        *(undefined1 *)((longlong)_Dst + 0x15) = 0;
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      bVar2 = (byte)uVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)((longlong)(int)param_1[6] * 0x20 + *param_1) = uVar10;
      }
      lVar9 = *param_1;
      *(undefined4 *)(lVar7 + lVar9) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar15 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar7 + 4 + lVar9) = uVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar10;
      plVar8 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar14 = (uint *)((longlong)plVar8 + lVar5);
      *local_res10 = uVar4;
      *puVar14 = *puVar14 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_1406860cc;
    }
  }
  if (3 < uVar13) {
    uVar4 = (uVar13 >> 1) + 8;
    iVar11 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    iVar6 = 0x20;
    cVar12 = '\0';
    if (uVar4 != 0) {
      iVar6 = 0x1f - iVar11;
    }
    uVar4 = (uVar13 >> 1) + 7;
    iVar11 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar12 = '\x1f' - (char)iVar11;
    }
    iVar11 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar11 <= (int)param_1[9])))) {
    uVar13 = (_Src[4] ^ _Src[3] ^ _Src[2] ^ _Src[1] ^ *_Src) & (int)param_1[9] - 1U;
    _Src[7] = uVar13;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    _Src[6] = *(uint *)((longlong)plVar8 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(uint *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         uVar10;
  }
  else {
    *(int *)(param_1 + 9) = iVar11;
    FUN_140689f40(param_1);
  }
LAB_1406860cc:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return local_res10;
}



// FUNCTION 140686100 FUN_140686100 body=166 status=ok
// SIG undefined FUN_140686100(void)

longlong FUN_140686100(longlong param_1,longlong param_2,uint param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  else {
    *(uint *)(param_1 + 0x90) = param_3;
    if ((0x80 < param_3) && (param_3 != 0)) {
      uVar1 = FMemory::Realloc(0,(longlong)(int)param_3,0);
      *(undefined8 *)(param_1 + 0x80) = uVar1;
    }
    lVar2 = *(longlong *)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x80) == 0) {
      lVar2 = param_1;
    }
    *(longlong *)(param_1 + 0x88) = lVar2;
    FGenericPlatformString::Convert<wchar_t,char>(lVar2,param_3,param_2,param_3,0x3f);
  }
  return param_1;
}



// FUNCTION 1406861b0 FUN_1406861b0 body=112 status=ok
// SIG undefined FUN_1406861b0(void)

void FUN_1406861b0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  
  plVar1 = (longlong *)param_1[0x30];
  iVar3 = (int)param_1[0x31];
  plVar2 = plVar1;
  if (plVar1 == (longlong *)0x0) {
    plVar2 = param_1;
  }
  if (iVar3 != 0) {
    do {
      FUN_14217f430(plVar2 + 2);
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 6;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    plVar1 = (longlong *)param_1[0x30];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140686220 ~TQueue<TSharedPtr<IMediaAudioSample,1>,0> body=147 status=ok
// SIG undefined ~TQueue<TSharedPtr<IMediaAudioSample,1>,0>(void)

void TQueue<TSharedPtr<IMediaAudioSample,1>,0>::~TQueue<TSharedPtr<IMediaAudioSample,1>,0>
               (longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar4 = *(longlong *)(param_1 + 8);
  while (lVar4 != 0) {
    *(undefined8 *)(param_1 + 8) = **(undefined8 **)(param_1 + 8);
    if (lVar4 != 0) {
      plVar5 = *(longlong **)(lVar4 + 0x10);
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
      FMemory::operator_delete(lVar4,0x18);
    }
    lVar4 = *(longlong *)(param_1 + 8);
  }
  return;
}



// FUNCTION 1406862c0 FUN_1406862c0 body=393 status=ok
// SIG undefined FUN_1406862c0(void)

void FUN_1406862c0(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
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
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar3 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar4) goto LAB_140686381;
      uVar3 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
    iVar6 = 0x1f;
    if (uStack_54 != 0) {
      for (; uStack_54 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_54 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_44 = (iStack_40 - iVar6) + 0x1f;
    if (iVar2 < iStack_44) {
LAB_140686381:
      iStack_44 = iVar2;
    }
  }
  local_30 = local_58;
  uStack_2c = uStack_54;
  local_20 = 0xffffffff;
  iStack_1c = iStack_44;
  iStack_18 = iStack_40;
  puStack_28 = puVar1;
  if (iStack_44 < iVar2) {
    do {
      lVar5 = (longlong)iStack_1c * 0x20 + *param_1;
      if (*(char *)(lVar5 + 0x15) != '\0') {
        *(undefined1 *)(lVar5 + 0x15) = 0;
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140686450 FUN_140686450 body=182 status=ok
// SIG undefined FUN_140686450(void)

longlong * FUN_140686450(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  FUN_14064c620(param_2,*(undefined4 *)(*param_1 + 8));
  lVar3 = *(longlong *)*param_1;
  lVar2 = (longlong)(int)((longlong *)*param_1)[1] * 0x20 + lVar3;
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x20) {
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    lVar4 = (longlong)iVar1 * 0x30 + *param_2;
    FString::FString(lVar4,lVar3);
    FUN_14217e740(lVar4 + 0x10);
    FUN_140643170(lVar4 + 0x10,lVar3 + 0x10);
  }
  return param_2;
}



// FUNCTION 140686510 FUN_140686510 body=173 status=ok
// SIG undefined FUN_140686510(void)

undefined4 * FUN_140686510(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong local_58;
  int local_50;
  longlong local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [32];
  
  FName::ToString(param_3,&local_58);
  if (local_50 == 0) {
    local_50 = 0;
  }
  else {
    local_50 = local_50 + -1;
  }
  local_48 = local_58;
  local_40 = local_58 + (longlong)local_50 * 2;
  puVar2 = (undefined4 *)FUN_142ea5aa0(local_28,&local_48,1,1,1,0x2e);
  uVar1 = *(undefined8 *)(puVar2 + 4);
  local_38 = *puVar2;
  uStack_34 = puVar2[1];
  uStack_30 = puVar2[2];
  uStack_2c = puVar2[3];
  if (local_58 != 0) {
    FMemory::Free();
  }
  *param_2 = local_38;
  param_2[1] = uStack_34;
  param_2[2] = uStack_30;
  param_2[3] = uStack_2c;
  *(undefined8 *)(param_2 + 4) = uVar1;
  return param_2;
}



// FUNCTION 1406865c0 `scalar_deleting_destructor' body=108 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_9227c6ebd131d307861678b9f3313372>_>::
_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  
  if (*(int *)(param_1 + 10) != 0) {
    plVar1 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar1 = param_1 + 4;
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 140686630 FUN_140686630 body=147 status=ok
// SIG undefined FUN_140686630(void)

undefined8 * FUN_140686630(undefined8 *param_1,ulonglong param_2)

{
  TQueue<TSharedPtr<IMediaAudioSample,1>,0>::~TQueue<TSharedPtr<IMediaAudioSample,1>,0>
            (param_1 + 0x18);
  TQueue<TSharedPtr<IMediaAudioSample,1>,0>::~TQueue<TSharedPtr<IMediaAudioSample,1>,0>
            (param_1 + 0x16);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FMemory::Free();
  }
  FUN_1406862c0(param_1 + 0xb);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 2);
  *param_1 = IModuleInterface::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 1406866d0 FUN_1406866d0 body=197 status=ok
// SIG undefined FUN_1406866d0(void)

void FUN_1406866d0(longlong *param_1,int param_2,char param_3,char param_4,short param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_28 [4];
  
  if ((param_4 != '\0') || (param_2 != 0)) {
    iVar2 = (int)param_1[1];
    iVar1 = iVar2 + -1;
    iVar3 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar1 = 0;
      iVar3 = -1;
    }
    if ((0 < iVar1) && (param_5 != 0)) {
      if (iVar2 < 1) {
        iVar3 = 0;
      }
      iVar2 = (iVar2 < 1) + 1 + iVar2;
      *(int *)(param_1 + 1) = iVar2;
      if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      *(short *)(*param_1 + (longlong)iVar3 * 2) = param_5;
      *(undefined2 *)(*param_1 + 2 + (longlong)iVar3 * 2) = 0;
    }
    if ((param_3 != '\0') || (param_2 != 0)) {
      local_28[1] = 0;
      local_28[0] = param_2;
      FName::AppendString(local_28,param_1);
    }
  }
  return;
}



// FUNCTION 1406867a0 FString body=35 status=ok
// SIG undefined FString(void)

undefined8 * FString::FString(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  return param_1;
}



// FUNCTION 1406867d0 FUN_1406867d0 body=108 status=ok
// SIG undefined FUN_1406867d0(void)

longlong * FUN_1406867d0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  *param_1 = 0;
  param_1[1] = 0;
  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
  ResizeTo(param_1,1);
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  FUN_140685dc0((longlong)iVar1 * 0x30 + *param_1,&PTR_u_extra_data_14673c738,uVar2);
  return param_1;
}



// FUNCTION 140686840 FUN_140686840 body=32 status=ok
// SIG undefined FUN_140686840(void)

undefined8 FUN_140686840(undefined8 param_1,undefined8 param_2)

{
  FUN_140686450(param_2,param_1);
  return param_1;
}



// FUNCTION 140686860 FUN_140686860 body=50 status=ok
// SIG undefined FUN_140686860(void)

undefined8 * FUN_140686860(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 local_28 [32];
  
  puVar3 = (undefined8 *)FUN_140686510(param_2,local_28);
  uVar2 = puVar3[1];
  uVar1 = puVar3[2];
  *param_1 = *puVar3;
  param_1[1] = uVar2;
  param_1[2] = uVar1;
  return param_1;
}



// FUNCTION 1406868a0 FUN_1406868a0 body=129 status=ok
// SIG undefined FUN_1406868a0(void)

void FUN_1406868a0(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)operator_new();
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  *puVar1 = &PTR_GetPoolName_144042070;
  puVar1[8] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  if (*(int *)(param_1 + 0x50) != 0) {
    puVar4 = *(undefined8 **)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x40) == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)(param_1 + 0x20);
    }
    if (puVar4 != (undefined8 *)0x0) {
      plVar2 = (longlong *)(**(code **)*puVar4)();
      (**(code **)(*plVar2 + 8))(plVar2);
      pcVar3 = *(code **)(param_1 + 0x10);
      goto LAB_14068690a;
    }
  }
  pcVar3 = FString::FString;
LAB_14068690a:
  puVar1[2] = pcVar3;
  puVar1[0xd] = *(undefined8 *)(param_1 + 0x68);
  return;
}



// FUNCTION 140686930 FUN_140686930 body=64 status=ok
// SIG undefined FUN_140686930(void)

void FUN_140686930(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_144042030;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}



// FUNCTION 140686970 Dequeue body=297 status=ok
// SIG undefined Dequeue(void)

undefined8 TQueue<TSharedPtr<FArrayReader,1>,1>::Dequeue(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 local_18;
  longlong *local_10;
  
  lVar5 = **(longlong **)(param_1 + 8);
  if (lVar5 == 0) {
    return 0;
  }
  puVar1 = (undefined8 *)(lVar5 + 8);
  if (param_2 != puVar1) {
    *param_2 = *puVar1;
    *puVar1 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,lVar5 + 0x10);
  }
  lVar6 = *(longlong *)(param_1 + 8);
  *(longlong *)(param_1 + 8) = lVar5;
  local_10 = (longlong *)0x0;
  if (puVar1 != &local_18) {
    *puVar1 = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(lVar5 + 0x10,&local_10);
    plVar7 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_10 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar3 = (int *)((longlong)plVar7 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  if (lVar6 != 0) {
    plVar7 = *(longlong **)(lVar6 + 0x10);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar7 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar3 = (int *)((longlong)plVar7 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    FMemory::operator_delete(lVar6,0x18);
  }
  return 1;
}



// FUNCTION 140686aa0 FUN_140686aa0 body=48 status=ok
// SIG undefined FUN_140686aa0(void)

void FUN_140686aa0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_1406861b0(lVar1 + 0x18);
    FMemory::operator_delete(lVar1,0x1a8);
    return;
  }
  return;
}



// FUNCTION 140686ad0 FUN_140686ad0 body=1046 status=ok
// SIG undefined FUN_140686ad0(void)

void FUN_140686ad0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,longlong **param_7)

{
  int *piVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  char cVar6;
  byte bVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  longlong *local_78;
  undefined8 local_70;
  undefined4 *local_68;
  longlong *plStack_60;
  undefined8 local_58;
  longlong *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if ((((param_2 != 0) && (param_3 != 0)) && (cVar6 = FUN_1406897a0(), cVar6 != '\0')) &&
     (bVar7 = FUN_14068a910(param_1 + -8,param_2,param_3,param_4,param_5,
                            *(undefined8 *)(param_1 + 0xd0),param_6,0 < DAT_146857c10), bVar7 < 2))
  {
    local_68 = (undefined4 *)0x0;
    plStack_60 = (longlong *)0x0;
    cVar6 = TQueue<TSharedPtr<FArrayReader,1>,1>::Dequeue(param_1 + 0xb8,&local_68);
    if (cVar6 == '\0') {
      puVar8 = (undefined4 *)operator_new(0x1a8);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        *(undefined8 *)(puVar8 + 0x66) = 0;
        *(undefined8 *)(puVar8 + 0x68) = 0;
      }
      local_50 = (longlong *)operator_new(0x18);
      if (local_50 != (longlong *)0x0) {
        *(undefined4 *)(local_50 + 1) = 1;
        *local_50 = (longlong)&PTR_FUN_1440420b0;
        *(undefined4 *)((longlong)local_50 + 0xc) = 1;
        local_50[2] = (longlong)puVar8;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_58,puVar8,puVar8);
      local_58 = 0;
      local_68 = puVar8;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_60,&local_50);
      plVar10 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_50 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
    }
    puVar8 = local_68;
    uVar2 = *(undefined4 *)(param_1 + 0xd0);
    uStack_40 = (undefined4)param_4;
    local_48 = (undefined4)param_2;
    uStack_44 = (undefined4)param_3;
    uStack_3c = (undefined4)param_5;
    *local_68 = local_48;
    local_68[1] = uStack_44;
    local_68[2] = uStack_40;
    local_68[3] = uStack_3c;
    local_68[4] = uVar2;
    *(undefined1 *)(local_68 + 5) = param_6;
    if (((*(int *)(param_7 + 4) != 0) && (param_7[3] != (longlong *)0x0)) &&
       (cVar6 = (**(code **)(*param_7[3] + 0x18))(), cVar6 != '\0')) {
      if (*(int *)(param_7 + 4) == 0) {
        plVar10 = (longlong *)0x0;
      }
      else {
        plVar10 = param_7[3];
      }
      (**(code **)(*plVar10 + 0x38))(plVar10,&local_78);
      if (param_7 == &local_78) {
        iVar12 = (int)local_70;
        plVar10 = local_78;
      }
      else {
        iVar12 = *(int *)(param_7 + 1);
        plVar10 = *param_7;
        if (iVar12 != 0) {
          do {
            FUN_14217f430(plVar10 + 2);
            if (*plVar10 != 0) {
              FMemory::Free();
            }
            plVar10 = plVar10 + 6;
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
          plVar10 = *param_7;
        }
        if (plVar10 != (longlong *)0x0) {
          FMemory::Free(plVar10);
        }
        *param_7 = local_78;
        *(int *)(param_7 + 1) = (int)local_70;
        *(undefined4 *)((longlong)param_7 + 0xc) = local_70._4_4_;
        local_70 = 0;
        local_78 = (longlong *)0x0;
        iVar12 = 0;
        plVar10 = local_78;
      }
      for (; iVar12 != 0; iVar12 = iVar12 + -1) {
        FUN_14217f430(plVar10 + 2);
        if (*plVar10 != 0) {
          FMemory::Free();
        }
        plVar10 = plVar10 + 6;
      }
      if (local_78 != (longlong *)0x0) {
        FMemory::Free(local_78);
      }
    }
    plVar10 = (longlong *)(puVar8 + 6);
    iVar12 = puVar8[0x68];
    plVar3 = *(longlong **)(puVar8 + 0x66);
    if (*(longlong **)(puVar8 + 0x66) == (longlong *)0x0) {
      plVar3 = plVar10;
    }
    for (; iVar12 != 0; iVar12 = iVar12 + -1) {
      FUN_14217f430(plVar3 + 2);
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 6;
    }
    iVar12 = *(int *)(param_7 + 1);
    plVar3 = *param_7;
    puVar8[0x68] = iVar12;
    if ((iVar12 == 0) && (puVar8[0x69] == 0)) {
      puVar8[0x69] = 0;
    }
    else {
      FUN_14068a210(plVar10,iVar12);
      plVar11 = *(longlong **)(puVar8 + 0x66);
      if (*(longlong **)(puVar8 + 0x66) == (longlong *)0x0) {
        plVar11 = plVar10;
      }
      if (iVar12 != 0) {
        plVar10 = plVar3 + 2;
        do {
          FString::FString((longlong)plVar11 + (longlong)plVar10 + (-0x10 - (longlong)plVar3),
                           plVar10 + -2);
          FUN_14217e5e0((longlong)plVar11 + ((longlong)plVar10 - (longlong)plVar3),plVar10);
          plVar10 = plVar10 + 6;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
    }
    puVar9 = (undefined8 *)operator_new(0x18);
    plVar10 = plStack_60;
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = 0;
      puVar9[1] = puVar8;
      puVar9[2] = plStack_60;
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
        UNLOCK();
      }
      puVar4 = *(undefined8 **)(param_1 + 0xa8);
      *(undefined8 **)(param_1 + 0xa8) = puVar9;
      *puVar4 = puVar9;
    }
    LOCK();
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
    UNLOCK();
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_60 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plStack_60 + 8))(plStack_60,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140686ef0 FUN_140686ef0 body=722 status=ok
// SIG undefined FUN_140686ef0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140686ef0(undefined8 *param_1,undefined8 param_2,undefined1 param_3,longlong *param_4)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 local_a0 [8];
  code *local_98;
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  puVar2 = (undefined8 *)FName::FName(local_a0,"GbxProbes",1);
  uVar3 = FUN_14168dc80();
  cVar1 = FModuleManager::IsModuleLoaded(uVar3,*puVar2);
  if (cVar1 == '\0') goto LAB_140687178;
  iVar6 = (int)param_4[1] + -1;
  if ((int)param_4[1] == 0) {
    iVar6 = 0;
  }
  local_d8 = param_3;
  if (iVar6 == 0) {
    local_d0 = &local_c8;
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    FUN_142ea5880(param_2,*param_1,param_1[1],param_1[2]);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b0);
    FUN_14063f990(&local_c8);
    goto LAB_140687178;
  }
  local_68 = (longlong *)0x0;
  local_58 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_88);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = param_4;
    *puVar2 = &PTR_FUN_143f77b70;
  }
  local_98 = FUN_1406867d0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x70);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_GetPoolName_144042070;
    plVar4[8] = 0;
    *(undefined4 *)(plVar4 + 10) = 0;
    if (local_68 == (longlong *)0x0) {
      _guard_xfg_dispatch_icall_nop(plVar4 + 4,local_88,0x20);
    }
    if (plVar4[8] != 0) {
      FMemory::Free();
    }
    plVar4[8] = (longlong)local_68;
    local_68 = (longlong *)0x0;
    *(int *)(plVar4 + 10) = local_58;
    local_58 = 0;
    if ((int)plVar4[10] == 0) {
LAB_14068705d:
      plVar4[2] = (longlong)FString::FString;
    }
    else {
      plVar7 = (longlong *)plVar4[8];
      if ((longlong *)plVar4[8] == (longlong *)0x0) {
        plVar7 = plVar4 + 4;
      }
      if (plVar7 == (longlong *)0x0) goto LAB_14068705d;
      (**(code **)(*plVar7 + 8))();
      plVar4[2] = (longlong)local_98;
    }
    local_98 = FString::FString;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[0xd] = lVar5;
  }
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 1;
  local_b0 = 0;
  local_a8 = 0;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x30))(plVar4,&local_b0);
    (**(code **)(*plVar4 + 0x28))(plVar4,0);
    lVar5 = FMemory::Realloc(plVar4,0,0);
    if (lVar5 != 0) {
      FMemory::Free(lVar5);
    }
  }
  local_d0 = &local_c8;
  FUN_142ea5880(param_2,*param_1,param_1[1],param_1[2]);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b0);
  FUN_14063f990(&local_c8);
  if (local_58 != 0) {
    plVar4 = local_88;
    if (local_68 != (longlong *)0x0) {
      plVar4 = local_68;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
LAB_140687178:
  if (*param_4 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406871d0 FUN_1406871d0 body=636 status=ok
// SIG undefined FUN_1406871d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1406871d0(undefined8 *param_1,undefined8 param_2,undefined1 param_3,longlong param_4)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 local_a0 [8];
  code *local_98;
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  puVar2 = (undefined8 *)FName::FName(local_a0,"GbxProbes",1);
  uVar3 = FUN_14168dc80();
  cVar1 = FModuleManager::IsModuleLoaded(uVar3,*puVar2);
  if (cVar1 == '\0') {
    return;
  }
  local_d8 = param_3;
  if (*(int *)(param_4 + 8) == 0) {
    local_d0 = &local_c8;
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    FUN_142ea5880(param_2,*param_1,param_1[1],param_1[2]);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b0);
    FUN_14063f990(&local_c8);
    return;
  }
  local_68 = (longlong *)0x0;
  local_58 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_88);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = param_4;
    *puVar2 = &PTR_FUN_143f77b70;
  }
  local_98 = FUN_140686840;
  plVar4 = (longlong *)FMemory::Realloc(0,0x70);
  if (plVar4 == (longlong *)0x0) goto LAB_140687339;
  *plVar4 = (longlong)&PTR_GetPoolName_144042070;
  plVar4[8] = 0;
  *(undefined4 *)(plVar4 + 10) = 0;
  if (local_68 == (longlong *)0x0) {
    _guard_xfg_dispatch_icall_nop(plVar4 + 4,local_88,0x20);
  }
  if (plVar4[8] != 0) {
    FMemory::Free();
  }
  plVar4[8] = (longlong)local_68;
  local_68 = (longlong *)0x0;
  *(int *)(plVar4 + 10) = local_58;
  local_58 = 0;
  if ((int)plVar4[10] == 0) {
LAB_140687318:
    plVar4[2] = (longlong)FString::FString;
  }
  else {
    plVar6 = (longlong *)plVar4[8];
    if ((longlong *)plVar4[8] == (longlong *)0x0) {
      plVar6 = plVar4 + 4;
    }
    if (plVar6 == (longlong *)0x0) goto LAB_140687318;
    (**(code **)(*plVar6 + 8))();
    plVar4[2] = (longlong)local_98;
  }
  local_98 = FString::FString;
  lVar5 = FDelegateHandle::GenerateNewID();
  plVar4[0xd] = lVar5;
LAB_140687339:
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 1;
  local_b0 = 0;
  local_a8 = 0;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x30))(plVar4,&local_b0);
    (**(code **)(*plVar4 + 0x28))(plVar4,0);
    lVar5 = FMemory::Realloc(plVar4,0,0);
    if (lVar5 != 0) {
      FMemory::Free(lVar5);
    }
  }
  local_d0 = &local_c8;
  FUN_142ea5880(param_2,*param_1,param_1[1],param_1[2]);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b0);
  FUN_14063f990(&local_c8);
  if (local_58 != 0) {
    plVar4 = local_88;
    if (local_68 != (longlong *)0x0) {
      plVar4 = local_68;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140687450 FUN_140687450 body=181 status=ok
// SIG undefined FUN_140687450(void)

undefined8 * FUN_140687450(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  int iVar4;
  longlong *local_18;
  int local_10;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x50) != 0) {
    plVar3 = *(longlong **)(param_1 + 0x40);
    if (*(longlong **)(param_1 + 0x40) == (longlong *)0x0) {
      plVar3 = (longlong *)(param_1 + 0x20);
    }
    if (plVar3 != (longlong *)0x0) {
      uVar1 = (**(code **)(*plVar3 + 8))();
    }
  }
  puVar2 = (undefined8 *)(**(code **)(param_1 + 0x10))(&local_18,uVar1);
  *param_2 = 0;
  *param_2 = *puVar2;
  *puVar2 = 0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar2 + 1);
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)puVar2 + 0xc);
  puVar2[1] = 0;
  plVar3 = local_18;
  for (iVar4 = local_10; iVar4 != 0; iVar4 = iVar4 + -1) {
    FUN_14217f430(plVar3 + 2);
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 6;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return param_2;
}



// FUNCTION 140687540 FUN_140687540 body=217 status=ok
// SIG undefined FUN_140687540(void)

int * FUN_140687540(longlong *param_1,int *param_2,uint *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(*param_3 ^ param_3[1] ^ param_3[2] ^ param_3[3] ^ param_3[4]) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x20;
        if ((((*(uint *)(lVar4 + 4 + lVar1) == param_3[1] &&
              *(uint *)(lVar4 + 8 + lVar1) == param_3[2]) &&
             *(uint *)(lVar4 + 0xc + lVar1) == param_3[3]) &&
            *(uint *)(lVar4 + 0x10 + lVar1) == param_3[4]) && *(uint *)(lVar4 + lVar1) == *param_3)
        {
          *param_2 = iVar2;
          return param_2;
        }
        iVar2 = *(int *)(lVar4 + 0x18 + lVar1);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 140687620 FUN_140687620 body=7553 status=ok
// SIG undefined FUN_140687620(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140687620(longlong param_1)

{
  int *piVar1;
  undefined1 (**ppauVar2) [16];
  undefined8 **ppuVar3;
  void *pvVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  void *pvVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 (*pauVar10) [16];
  uint uVar11;
  int iVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  int iVar19;
  int iVar20;
  undefined2 *puVar21;
  int iVar22;
  uint uVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong *plVar26;
  undefined1 (*pauVar27) [16];
  undefined1 auStack_468 [32];
  undefined2 local_448;
  undefined2 *local_438;
  undefined8 local_430;
  void *local_428;
  undefined8 local_420;
  uint local_418;
  undefined2 local_410 [4];
  undefined2 local_408 [4];
  undefined2 local_400 [4];
  undefined2 local_3f8 [4];
  undefined2 local_3f0 [4];
  undefined2 local_3e8 [4];
  undefined2 local_3e0 [4];
  undefined2 local_3d8 [4];
  undefined2 local_3d0 [4];
  undefined2 local_3c8 [4];
  undefined2 local_3c0 [4];
  undefined2 local_3b8 [4];
  undefined2 *local_3b0;
  undefined8 local_3a8;
  longlong *local_3a0;
  void *local_398;
  undefined8 local_390;
  undefined8 *local_388;
  longlong *plStack_380;
  undefined1 (*local_378) [16];
  longlong *plStack_370;
  undefined2 *local_368;
  int local_360;
  int local_35c;
  longlong local_358;
  ulonglong local_350;
  longlong *local_348;
  int local_340;
  undefined4 local_33c;
  longlong local_338;
  undefined8 local_330;
  longlong local_328;
  undefined8 local_320;
  longlong local_318;
  undefined8 local_310;
  longlong *local_308;
  longlong *local_300;
  undefined8 local_2f8;
  int local_2f0;
  undefined4 local_2ec;
  int local_2e8;
  undefined4 local_2e4;
  int local_2e0;
  undefined4 local_2dc;
  int local_2d8;
  undefined4 local_2d4;
  int local_2d0;
  undefined4 local_2cc;
  undefined8 *local_2c8;
  undefined1 (*local_2c0) [16];
  undefined1 (*local_2b8) [16];
  longlong *plStack_2b0;
  longlong local_2a8;
  undefined8 local_2a0;
  undefined8 *local_298;
  longlong *plStack_290;
  longlong *local_288;
  longlong *local_280;
  undefined8 local_278;
  undefined8 local_270;
  void *local_268;
  int local_260;
  undefined4 local_25c;
  longlong local_258;
  undefined4 local_250;
  undefined4 local_24c;
  longlong local_248;
  undefined8 local_240;
  void *local_238;
  int local_230;
  undefined4 local_22c;
  longlong local_228;
  undefined4 local_220;
  undefined4 local_21c;
  longlong local_218;
  undefined8 local_210;
  longlong local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  longlong local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  longlong local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  longlong local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  longlong *local_1a0;
  LARGE_INTEGER local_198;
  longlong local_190;
  int local_188;
  void *local_180;
  ulonglong local_178;
  longlong local_170 [2];
  longlong local_160 [2];
  longlong local_150 [2];
  longlong local_140 [2];
  longlong local_130 [2];
  longlong local_120 [2];
  undefined1 local_110 [16];
  undefined1 local_100 [24];
  undefined1 local_e8 [128];
  longlong local_68;
  undefined8 local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_468;
  plVar17 = (longlong *)0x0;
  local_418 = 0;
  LOCK();
  iVar20 = *(int *)(param_1 + 200);
  if (iVar20 == 0) {
    *(int *)(param_1 + 200) = 0;
    iVar20 = 0;
  }
  UNLOCK();
  local_1a8 = param_1;
  if (0 < iVar20) {
    if ((*(char *)(param_1 + 0xd8) == '\0') && (*(char *)(param_1 + 0xd9) == '\0')) {
      local_3a0 = (longlong *)0x0;
      local_348 = (longlong *)0x0;
      local_340 = *(int *)(DAT_146857c70 + 1);
      lVar24 = (longlong)local_340;
      pvVar7 = (void *)*DAT_146857c70;
      if (local_340 == 0) {
        local_33c = 0;
        plVar26 = plVar17;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_348,local_340,0);
        plVar26 = local_348;
        _guard_xfg_dispatch_icall_nop(local_348,pvVar7,lVar24 * 2);
      }
      iVar20 = local_340;
      if ((local_340 != 0) && (iVar22 = local_340 + -1, 0 < iVar22)) {
        plVar13 = (longlong *)FUN_1415c3d50();
        puVar14 = (undefined8 *)FUN_14167d0d0(local_170);
        iVar12 = *(int *)(puVar14 + 1);
        local_3b0 = (undefined2 *)*puVar14;
        *puVar14 = 0;
        local_3a8._0_4_ = *(int *)(puVar14 + 1);
        local_3a8._4_4_ = *(int *)((longlong)puVar14 + 0xc);
        puVar14[1] = 0;
        if (local_3a8._4_4_ < (int)((0xb - (uint)(iVar12 != 0)) + (int)local_3a8)) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_3b0);
        }
        FString::PathAppend(&local_3b0,L"GbxProbes",9);
        iVar12 = local_3a8._4_4_;
        if (((int)local_3a8 != 0) || (iVar19 = 2, iVar20 == 0)) {
          iVar19 = 1;
        }
        local_368 = local_3b0;
        iVar20 = iVar19 + iVar22 + (int)local_3a8;
        local_3b0 = (undefined2 *)0x0;
        local_360 = (int)local_3a8;
        local_35c = local_3a8._4_4_;
        local_3a8 = 0;
        if (iVar12 < iVar20) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_368);
        }
        FString::PathAppend(&local_368,plVar26,iVar22);
        puVar21 = &DAT_143f3eda8;
        if (local_360 != 0) {
          puVar21 = local_368;
        }
        local_3a0 = (longlong *)(**(code **)(*plVar13 + 0x20))(plVar13,puVar21,8);
        if (local_368 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (local_3b0 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (local_170[0] != 0) {
          FMemory::Free();
        }
      }
      lVar24 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if ((*(int *)(lVar24 + 0x38) < DAT_146857d50) &&
         (_Init_thread_header(&DAT_146857d50), DAT_146857d50 == -1)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14622bd60,0);
        FGenericPlatformString::Memcpy(DAT_14622bd60,L"probe_result",0x1a);
        atexit((_func_5014 *)&LAB_143e40b30);
        _Init_thread_footer(&DAT_146857d50);
      }
      if ((*(int *)(lVar24 + 0x38) < DAT_146857d54) &&
         (_Init_thread_header(&DAT_146857d54), DAT_146857d54 == -1)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14622bd70,0);
        FGenericPlatformString::Memcpy(DAT_14622bd70,L"game",10);
        atexit((_func_5014 *)&LAB_143e40a90);
        _Init_thread_footer(&DAT_146857d54);
      }
      if ((*(int *)(lVar24 + 0x38) < DAT_146857d58) &&
         (_Init_thread_header(&DAT_146857d58), DAT_146857d58 == -1)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14622bd80,0);
        FGenericPlatformString::Memcpy(DAT_14622bd80,L"build",0xc);
        atexit((_func_5014 *)&LAB_143e40a70);
        _Init_thread_footer(&DAT_146857d58);
      }
      if ((*(int *)(lVar24 + 0x38) < DAT_146857d5c) &&
         (_Init_thread_header(&DAT_146857d5c), DAT_146857d5c == -1)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14622bd90,0);
        FGenericPlatformString::Memcpy(DAT_14622bd90,L"platform",0x12);
        atexit((_func_5014 *)&LAB_143e40b10);
        _Init_thread_footer(&DAT_146857d5c);
      }
      if ((*(int *)(lVar24 + 0x38) < DAT_146857d60) &&
         (_Init_thread_header(&DAT_146857d60), DAT_146857d60 == -1)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14622bda0,0);
        FGenericPlatformString::Memcpy(DAT_14622bda0,L"guid",10);
        atexit((_func_5014 *)&LAB_143e40ab0);
        _Init_thread_footer(&DAT_146857d60);
      }
      if ((*(int *)(lVar24 + 0x38) < DAT_146857d64) &&
         (_Init_thread_header(&DAT_146857d64), DAT_146857d64 == -1)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14622bdb0,0);
        FGenericPlatformString::Memcpy(DAT_14622bdb0,L"rlist",0xc);
        atexit((_func_5014 *)&LAB_143e40bb0);
        _Init_thread_footer(&DAT_146857d64);
      }
      if ((*(int *)(lVar24 + 0x38) < DAT_146857d68) &&
         (_Init_thread_header(&DAT_146857d68), DAT_146857d68 == -1)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14622bdc0,0);
        FGenericPlatformString::Memcpy(DAT_14622bdc0,L"pclass",0xe);
        atexit((_func_5014 *)&LAB_143e40af0);
        _Init_thread_footer(&DAT_146857d68);
      }
      if ((*(int *)(lVar24 + 0x38) < DAT_146857d6c) &&
         (_Init_thread_header(&DAT_146857d6c), DAT_146857d6c == -1)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14622bdd0,0);
        FGenericPlatformString::Memcpy(DAT_14622bdd0,L"ptype",0xc);
        atexit((_func_5014 *)&LAB_143e40b70);
        _Init_thread_footer(&DAT_146857d6c);
      }
      if ((*(int *)(lVar24 + 0x38) < DAT_146857d70) &&
         (_Init_thread_header(&DAT_146857d70), DAT_146857d70 == -1)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14622bde0,0);
        FGenericPlatformString::Memcpy(DAT_14622bde0,L"psubtype",0x12);
        atexit((_func_5014 *)&LAB_143e40b50);
        _Init_thread_footer(&DAT_146857d70);
      }
      if ((*(int *)(lVar24 + 0x38) < DAT_146857d74) &&
         (_Init_thread_header(&DAT_146857d74), DAT_146857d74 == -1)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14622bdf0,0);
        FGenericPlatformString::Memcpy(DAT_14622bdf0,L"test",10);
        atexit((_func_5014 *)&LAB_143e40bd0);
        _Init_thread_footer(&DAT_146857d74);
      }
      if ((*(int *)(lVar24 + 0x38) < DAT_146857d78) &&
         (_Init_thread_header(&DAT_146857d78), DAT_146857d78 == -1)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14622be00,0);
        FGenericPlatformString::Memcpy(DAT_14622be00,&DAT_144041c90,8);
        atexit((_func_5014 *)&LAB_143e40ad0);
        _Init_thread_footer(&DAT_146857d78);
      }
      if ((*(int *)(lVar24 + 0x38) < DAT_146857d7c) &&
         (_Init_thread_header(&DAT_146857d7c), DAT_146857d7c == -1)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14622be10,0);
        FGenericPlatformString::Memcpy(DAT_14622be10,L"result",0xe);
        atexit((_func_5014 *)&LAB_143e40b90);
        _Init_thread_footer(&DAT_146857d7c);
      }
      local_2a8 = 0;
      local_2a0 = 0;
      uVar15 = FGuid::NewGuid(local_110);
      FUN_141682af0(uVar15,&local_180,0);
      plVar13 = (longlong *)operator_new(0x40);
      plVar26 = plVar17;
      if (plVar13 != (longlong *)0x0) {
        plVar16 = (longlong *)operator_new(0xa8);
        if (plVar16 != (longlong *)0x0) {
          local_2f8 = 0;
          FArchive::FArchive(plVar16);
          plVar16[0x12] = 0;
          plVar16[0x14] = 0;
          *plVar16 = (longlong)&PTR_FUN_143f4a100;
          plVar16[0x13] = (longlong)(plVar13 + 5);
          FArchive::SetIsSaving(plVar16,1);
          FArchive::SetIsPersistent(plVar16,0);
          plVar26 = plVar16;
        }
        plVar13[1] = (longlong)plVar26;
        plVar13[2] = 0;
        plVar13[3] = 0;
        *plVar13 = (longlong)&PTR__scalar_deleting_destructor__143f607b8;
        plVar13[4] = 0;
        plVar13[5] = 0;
        plVar13[6] = 0;
        plVar13[7] = (longlong)&local_2a8;
        plVar26 = plVar13;
      }
      plVar13 = (longlong *)operator_new(0x18);
      local_280 = plVar17;
      if (plVar13 != (longlong *)0x0) {
        *(undefined4 *)(plVar13 + 1) = 1;
        *plVar13 = (longlong)&PTR_FUN_143f3f2e0;
        *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
        plVar13[2] = (longlong)plVar26;
        local_280 = plVar13;
      }
      local_288 = plVar26;
      SharedPointerInternals::EnableSharedFromThis(&local_288,plVar26,plVar26);
      plVar13 = local_280;
      plVar26 = local_288;
      local_1a0 = local_280;
      if (local_280 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_280 + 1) = (int)local_280[1] + 1;
        UNLOCK();
        if (local_280 != (longlong *)0x0) {
          LOCK();
          plVar16 = local_280 + 1;
          lVar24 = *plVar16;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if ((int)lVar24 == 1) {
            (**(code **)*local_280)(local_280);
            LOCK();
            piVar1 = (int *)((longlong)plVar13 + 0xc);
            iVar20 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar20 == 1) {
              (**(code **)(*plVar13 + 8))(plVar13,1);
            }
          }
        }
      }
      FUN_14068b290(plVar26);
      if ((((int)plVar26[4] - 2U & 0xfffffff5) != 0) || ((int)plVar26[4] == 10)) {
        local_410[0] = 0x2c;
        (**(code **)(*(longlong *)plVar26[1] + 0x50))((longlong *)plVar26[1],local_410,2);
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,&DAT_14622bd60);
      local_408[0] = 0x3a;
      (**(code **)(*(longlong *)plVar26[1] + 0x50))((longlong *)plVar26[1],local_408,2);
      local_400[0] = 0x7b;
      (**(code **)(*(longlong *)plVar26[1] + 0x50))((longlong *)plVar26[1],local_400,2);
      *(int *)((longlong)plVar26 + 0x24) = *(int *)((longlong)plVar26 + 0x24) + 1;
      iVar20 = (int)plVar26[3];
      *(int *)(plVar26 + 3) = iVar20 + 1;
      if (*(int *)((longlong)plVar26 + 0x1c) < iVar20 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar26 + 2,iVar20);
      }
      *(undefined4 *)(plVar26[2] + (longlong)iVar20 * 4) = 6;
      *(undefined4 *)(plVar26 + 4) = 2;
      local_358 = 0;
      local_350 = 0;
      if (DAT_146299580 != 0) {
        lVar24 = -1;
        do {
          lVar24 = lVar24 + 1;
        } while ((&DAT_146299580)[lVar24] != 0);
        uVar23 = (int)lVar24 + 1;
        local_350 = (ulonglong)uVar23;
        if (0 < (int)uVar23) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_358,0);
        }
        FGenericPlatformString::Memcpy(local_358,&DAT_146299580,(longlong)(int)uVar23 * 2);
      }
      if ((((int)plVar26[4] - 2U & 0xfffffff5) != 0) || ((int)plVar26[4] == 10)) {
        local_3f8[0] = 0x2c;
        (**(code **)(*(longlong *)plVar26[1] + 0x50))((longlong *)plVar26[1],local_3f8,2);
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,&DAT_14622bd70);
      local_3f0[0] = 0x3a;
      (**(code **)(*(longlong *)plVar26[1] + 0x50))((longlong *)plVar26[1],local_3f0,2);
      (**(code **)(*plVar26 + 0x18))(plVar26,&local_358);
      *(undefined4 *)(plVar26 + 4) = 7;
      if (local_358 != 0) {
        FMemory::Free();
      }
      uVar15 = FUN_14162b4e0();
      FUN_14068b340(plVar26,&DAT_14622bd80,uVar15);
      local_278 = 0;
      local_270 = 0x10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_278,0);
      local_448 = 0x3f;
      FGenericPlatformString::Convert<char,wchar_t>(local_278,0x10,"WindowsNoEditor");
      FUN_1404f77b0(plVar26,&DAT_14622bd90,&local_278);
      pvVar7 = local_180;
      local_268 = (void *)0x0;
      iVar20 = (int)local_178;
      local_260 = iVar20;
      if (iVar20 == 0) {
        local_25c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_268,local_178 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_268,pvVar7,(longlong)iVar20 * 2);
      }
      FUN_1404f77b0(plVar26,&DAT_14622bda0,&local_268);
      if ((((int)plVar26[4] - 2U & 0xfffffff5) != 0) || ((int)plVar26[4] == 10)) {
        local_3e8[0] = 0x2c;
        (**(code **)(*(longlong *)plVar26[1] + 0x50))((longlong *)plVar26[1],local_3e8,2);
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,&DAT_14622bdb0);
      local_3e0[0] = 0x3a;
      (**(code **)(*(longlong *)plVar26[1] + 0x50))((longlong *)plVar26[1],local_3e0,2);
      local_3d8[0] = 0x5b;
      (**(code **)(*(longlong *)plVar26[1] + 0x50))((longlong *)plVar26[1],local_3d8,2);
      *(int *)((longlong)plVar26 + 0x24) = *(int *)((longlong)plVar26 + 0x24) + 1;
      iVar20 = (int)plVar26[3];
      *(int *)(plVar26 + 3) = iVar20 + 1;
      if (*(int *)((longlong)plVar26 + 0x1c) < iVar20 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar26 + 2,iVar20);
      }
      local_378 = (undefined1 (*) [16])0x0;
      plStack_370 = (longlong *)0x0;
      *(undefined4 *)(plVar26[2] + (longlong)iVar20 * 4) = 5;
      *(undefined4 *)(plVar26 + 4) = 4;
      while (plVar13 = plStack_370, lVar24 = **(longlong **)(param_1 + 0xb0), lVar24 != 0) {
        ppauVar2 = (undefined1 (**) [16])(lVar24 + 8);
        if (&local_378 != ppauVar2) {
          local_378 = *ppauVar2;
          *ppauVar2 = (undefined1 (*) [16])0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_370,lVar24 + 0x10);
        }
        lVar8 = *(longlong *)(param_1 + 0xb0);
        *(longlong *)(param_1 + 0xb0) = lVar24;
        local_2b8 = (undefined1 (*) [16])0x0;
        plStack_2b0 = (longlong *)0x0;
        if (ppauVar2 != &local_2b8) {
          *ppauVar2 = (undefined1 (*) [16])0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(lVar24 + 0x10,&plStack_2b0);
          plVar13 = plStack_2b0;
          if (plStack_2b0 != (longlong *)0x0) {
            LOCK();
            plVar16 = plStack_2b0 + 1;
            lVar24 = *plVar16;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)lVar24 == 1) {
              (**(code **)*plStack_2b0)(plStack_2b0);
              LOCK();
              piVar1 = (int *)((longlong)plVar13 + 0xc);
              iVar20 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar20 == 1) {
                (**(code **)(*plStack_2b0 + 8))(plStack_2b0,1);
              }
            }
          }
        }
        if (lVar8 != 0) {
          plVar13 = *(longlong **)(lVar8 + 0x10);
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            plVar16 = plVar13 + 1;
            lVar24 = *plVar16;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)lVar24 == 1) {
              (**(code **)*plVar13)(plVar13);
              LOCK();
              piVar1 = (int *)((longlong)plVar13 + 0xc);
              iVar20 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar20 == 1) {
                (**(code **)(*plVar13 + 8))(plVar13,1);
              }
            }
          }
          FMemory::operator_delete(lVar8,0x18);
        }
        local_428 = (void *)0x0;
        local_420 = 0;
        FUN_14068b290(plVar26);
        pauVar27 = local_378;
        local_2c0 = local_378;
        if (*(int *)(*local_378 + 4) == 0) {
          uVar23 = (uint)plVar17 | 2;
          local_218 = 0;
          local_210 = 0;
          plVar17 = &local_218;
        }
        else {
          uVar23 = (uint)plVar17 | 1;
          local_2ec = 0;
          local_2f0 = *(int *)(*local_378 + 4);
          plVar17 = (longlong *)FName::ToString(&local_2f0,local_160);
        }
        local_228 = 0;
        local_228 = *plVar17;
        *plVar17 = 0;
        local_220 = (int)plVar17[1];
        local_21c = *(undefined4 *)((longlong)plVar17 + 0xc);
        plVar17[1] = 0;
        FUN_1404f77b0(plVar26,&DAT_14622bdc0,&local_228);
        if (((uVar23 & 2) != 0) && (uVar23 = uVar23 & 0xfffffffd, local_218 != 0)) {
          FMemory::Free();
        }
        if (((uVar23 & 1) != 0) && (uVar23 = uVar23 & 0xfffffffe, local_160[0] != 0)) {
          FMemory::Free();
        }
        if (*(int *)(*pauVar27 + 8) == 0) {
          local_1f8 = 0;
          plVar17 = &local_1f8;
          local_1f0 = 0;
          uVar11 = 8;
        }
        else {
          local_2e4 = 0;
          local_2e8 = *(int *)(*pauVar27 + 8);
          plVar17 = (longlong *)FName::ToString(&local_2e8,local_150);
          uVar11 = 4;
        }
        local_208 = 0;
        uVar23 = uVar23 | uVar11;
        local_208 = *plVar17;
        *plVar17 = 0;
        local_200 = (int)plVar17[1];
        local_1fc = *(undefined4 *)((longlong)plVar17 + 0xc);
        plVar17[1] = 0;
        FUN_1404f77b0(plVar26,&DAT_14622bdd0,&local_208);
        if (((uVar23 & 8) != 0) && (uVar23 = uVar23 & 0xfffffff7, local_1f8 != 0)) {
          FMemory::Free();
        }
        if (((uVar23 & 4) != 0) && (uVar23 = uVar23 & 0xfffffffb, local_150[0] != 0)) {
          FMemory::Free();
        }
        if (*(int *)(*pauVar27 + 0xc) == 0) {
          local_1d8 = 0;
          plVar17 = &local_1d8;
          local_1d0 = 0;
          uVar11 = 0x20;
        }
        else {
          local_2dc = 0;
          local_2e0 = *(int *)(*pauVar27 + 0xc);
          plVar17 = (longlong *)FName::ToString(&local_2e0,local_140);
          uVar11 = 0x10;
        }
        local_1e8 = 0;
        uVar23 = uVar23 | uVar11;
        local_1e8 = *plVar17;
        *plVar17 = 0;
        local_1e0 = (int)plVar17[1];
        local_1dc = *(undefined4 *)((longlong)plVar17 + 0xc);
        plVar17[1] = 0;
        FUN_1404f77b0(plVar26,&DAT_14622bde0,&local_1e8);
        if (((uVar23 & 0x20) != 0) && (uVar23 = uVar23 & 0xffffffdf, local_1d8 != 0)) {
          FMemory::Free();
        }
        if (((uVar23 & 0x10) != 0) && (uVar23 = uVar23 & 0xffffffef, local_140[0] != 0)) {
          FMemory::Free();
        }
        if (*(int *)*pauVar27 == 0) {
          local_1b8 = 0;
          plVar17 = &local_1b8;
          local_1b0 = 0;
          uVar11 = 0x80;
        }
        else {
          local_2d4 = 0;
          local_2d8 = *(int *)*pauVar27;
          plVar17 = (longlong *)FName::ToString(&local_2d8,local_130);
          uVar11 = 0x40;
        }
        local_1c8 = 0;
        uVar23 = uVar23 | uVar11;
        local_1c8 = *plVar17;
        *plVar17 = 0;
        local_1c0 = (int)plVar17[1];
        local_1bc = *(undefined4 *)((longlong)plVar17 + 0xc);
        plVar17[1] = 0;
        FUN_1404f77b0(plVar26,&DAT_14622bdf0,&local_1c8);
        if (((char)uVar23 < '\0') && (uVar23 = uVar23 & 0xffffff7f, local_1b8 != 0)) {
          FMemory::Free();
        }
        if (((uVar23 & 0x40) != 0) && (uVar23 = uVar23 & 0xffffffbf, local_130[0] != 0)) {
          FMemory::Free();
        }
        if (*(int *)pauVar27[1] == 0) {
          local_248 = 0;
          plVar13 = &local_248;
          local_240 = 0;
          uVar11 = 0x200;
        }
        else {
          local_2cc = 0;
          local_2d0 = *(int *)pauVar27[1];
          plVar13 = (longlong *)FName::ToString(&local_2d0,local_120);
          uVar11 = 0x100;
        }
        uVar23 = uVar23 | uVar11;
        plVar17 = (longlong *)(ulonglong)uVar23;
        local_258 = *plVar13;
        *plVar13 = 0;
        local_250 = (undefined4)plVar13[1];
        local_24c = *(undefined4 *)((longlong)plVar13 + 0xc);
        plVar13[1] = 0;
        local_418 = uVar23;
        FUN_1404f77b0(plVar26,&DAT_14622be00,&local_258);
        if ((uVar23 >> 9 & 1) != 0) {
          local_418 = uVar23 & 0xfffffdff;
          plVar17 = (longlong *)(ulonglong)local_418;
          if (local_248 != 0) {
            FMemory::Free();
          }
        }
        if (((uint)plVar17 >> 8 & 1) != 0) {
          local_418 = (uint)plVar17 & 0xfffffeff;
          plVar17 = (longlong *)(ulonglong)local_418;
          if (local_120[0] != 0) {
            FMemory::Free();
          }
        }
        uVar15 = FText::ToString(&DAT_146857cc0 + (ulonglong)(byte)pauVar27[1][4] * 0x18);
        uVar15 = FString::FString(local_100,uVar15);
        FUN_1404f77b0(plVar26,&DAT_14622be10,uVar15);
        plVar13 = local_3a0;
        puVar14 = *(undefined8 **)(pauVar27[0x19] + 8);
        if (*(undefined8 **)(pauVar27[0x19] + 8) == (undefined8 *)0x0) {
          puVar14 = (undefined8 *)(pauVar27[1] + 8);
        }
        puVar18 = puVar14 + (longlong)*(int *)pauVar27[0x1a] * 6;
        local_2c8 = puVar18;
        if (puVar14 != puVar18) {
          do {
            FUN_142194f30(puVar14 + 2,&local_398);
            uVar9 = local_420;
            if (plVar13 == (longlong *)0x0) {
              iVar20 = (int)local_390;
            }
            else {
              iVar20 = (int)local_420;
              uVar25 = (ulonglong)(int)local_420;
              iVar22 = (int)local_420 + -1;
              if ((int)local_420 == 0) {
                iVar22 = 0;
              }
              if (iVar22 != 0) {
                iVar22 = (2 - (uint)((int)local_420 != 0)) + (int)local_420;
                local_420 = CONCAT44(local_420._4_4_,iVar22);
                if (local_420._4_4_ < iVar22) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_428,uVar9 & 0xffffffff);
                }
                lVar24 = uVar25 - (iVar20 != 0);
                *(undefined2 *)((longlong)local_428 + lVar24 * 2) = 0x2c;
                *(undefined2 *)((longlong)local_428 + lVar24 * 2 + 2) = 0;
                uVar25 = local_420 & 0xffffffff;
              }
              pvVar7 = (void *)*puVar14;
              iVar20 = *(int *)(puVar14 + 1) + -1;
              if (*(int *)(puVar14 + 1) == 0) {
                iVar20 = 0;
              }
              if (iVar20 != 0) {
                iVar12 = (int)uVar25;
                iVar22 = (uint)(iVar12 == 0) + iVar12 + iVar20;
                local_420 = CONCAT44(local_420._4_4_,iVar22);
                if (local_420._4_4_ < iVar22) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_428,uVar25 & 0xffffffff);
                }
                pvVar4 = (void *)((longlong)local_428 +
                                 ((longlong)iVar12 - (ulonglong)(iVar12 != 0)) * 2);
                _guard_xfg_dispatch_icall_nop(pvVar4,pvVar7,(longlong)iVar20 * 2);
                *(undefined2 *)((longlong)iVar20 * 2 + (longlong)pvVar4) = 0;
                uVar25 = local_420 & 0xffffffff;
              }
              iVar22 = (int)uVar25;
              iVar20 = (2 - (uint)(iVar22 != 0)) + iVar22;
              local_420 = CONCAT44(local_420._4_4_,iVar20);
              if (local_420._4_4_ < iVar20) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_428,uVar25 & 0xffffffff);
              }
              pvVar7 = local_398;
              uVar9 = local_420;
              lVar24 = (longlong)iVar22 - (ulonglong)(iVar22 != 0);
              *(undefined2 *)((longlong)local_428 + lVar24 * 2) = 0x3d;
              *(undefined2 *)((longlong)local_428 + lVar24 * 2 + 2) = 0;
              iVar22 = (int)local_390 + -1;
              if ((int)local_390 == 0) {
                iVar22 = 0;
              }
              puVar18 = local_2c8;
              iVar20 = (int)local_390;
              if (iVar22 != 0) {
                iVar20 = (int)local_420;
                lVar24 = (longlong)(int)local_420;
                iVar12 = (uint)((int)local_420 == 0) + iVar22 + (int)local_420;
                local_420 = CONCAT44(local_420._4_4_,iVar12);
                if (local_420._4_4_ < iVar12) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_428,uVar9 & 0xffffffff);
                }
                pvVar4 = (void *)((longlong)local_428 + (lVar24 - (ulonglong)(iVar20 != 0)) * 2);
                _guard_xfg_dispatch_icall_nop(pvVar4,pvVar7,(longlong)iVar22 * 2);
                *(undefined2 *)((longlong)iVar22 * 2 + (longlong)pvVar4) = 0;
                puVar18 = local_2c8;
                iVar20 = (int)local_390;
              }
            }
            local_238 = local_398;
            local_22c = local_390._4_4_;
            local_390 = 0;
            local_398 = (void *)0x0;
            local_230 = iVar20;
            if ((((int)plVar26[4] - 2U & 0xfffffff5) != 0) || ((int)plVar26[4] == 10)) {
              local_3d0[0] = 0x2c;
              (**(code **)(*(longlong *)plVar26[1] + 0x50))((longlong *)plVar26[1],local_3d0,2);
            }
            (**(code **)(*plVar26 + 0x18))(plVar26,puVar14);
            local_3c8[0] = 0x3a;
            (**(code **)(*(longlong *)plVar26[1] + 0x50))((longlong *)plVar26[1],local_3c8,2);
            (**(code **)(*plVar26 + 0x18))(plVar26,&local_238);
            *(undefined4 *)(plVar26 + 4) = 7;
            if (local_238 != (void *)0x0) {
              FMemory::Free();
            }
            if (local_398 != (void *)0x0) {
              FMemory::Free();
            }
            puVar14 = puVar14 + 6;
          } while (puVar14 != puVar18);
          plVar17 = (longlong *)(ulonglong)local_418;
          pauVar27 = local_2c0;
          param_1 = local_1a8;
        }
        *(int *)((longlong)plVar26 + 0x24) = *(int *)((longlong)plVar26 + 0x24) + -1;
        local_3c0[0] = 0x7d;
        (**(code **)(*(longlong *)plVar26[1] + 0x50))((longlong *)plVar26[1],local_3c0,2);
        *(int *)(plVar26 + 3) = (int)plVar26[3] + -1;
        TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(plVar26 + 2);
        *(undefined4 *)(plVar26 + 4) = 3;
        if (local_3a0 != (longlong *)0x0) {
          FString::ReplaceInline(&local_428,&DAT_144041954,&DAT_144041894,1);
          auVar5 = *pauVar27;
          uVar6 = *(undefined4 *)pauVar27[1];
          local_438 = (undefined2 *)0x0;
          local_430 = 0;
          local_448 = 0x2c;
          FUN_1406866d0(&local_438,auVar5._0_8_ >> 0x20,0,1);
          local_448 = 0x2c;
          FUN_1406866d0(&local_438,auVar5._8_4_,0,1);
          local_448 = 0x2c;
          FUN_1406866d0(&local_438,auVar5._12_4_,0,1);
          local_448 = 0x2c;
          FUN_1406866d0(&local_438,uVar6,0,1);
          local_448 = 0x2c;
          FUN_1406866d0(&local_438,auVar5._0_4_,0,1);
          iVar20 = (int)local_430 + -1;
          if ((int)local_430 < 1) {
            iVar20 = 0;
          }
          iVar22 = ((int)local_430 < 1) + 1 + (int)local_430;
          local_430._0_4_ = iVar22;
          if (local_430._4_4_ < iVar22) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_438);
          }
          local_438[iVar20] = 0x2c;
          local_438[(longlong)iVar20 + 1] = 0;
          puVar14 = (undefined8 *)
                    FText::ToString(&DAT_146857cc0 + (ulonglong)(byte)pauVar27[1][4] * 0x18);
          iVar22 = (int)local_430;
          pvVar7 = (void *)*puVar14;
          iVar20 = *(int *)(puVar14 + 1) + -1;
          if (*(int *)(puVar14 + 1) == 0) {
            iVar20 = 0;
          }
          if (iVar20 != 0) {
            lVar24 = (longlong)(int)local_430;
            local_430._0_4_ = (uint)((int)local_430 == 0) + (int)local_430 + iVar20;
            if (local_430._4_4_ < (int)local_430) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_438,iVar22);
            }
            puVar21 = local_438 + (lVar24 - (ulonglong)(iVar22 != 0));
            _guard_xfg_dispatch_icall_nop(puVar21,pvVar7,(longlong)iVar20 * 2);
            puVar21[iVar20] = 0;
          }
          iVar22 = 0;
          iVar20 = (int)local_430 + -1;
          if ((int)local_430 < 1) {
            iVar20 = iVar22;
          }
          local_430._0_4_ = ((int)local_430 < 1) + 1 + (int)local_430;
          if (local_430._4_4_ < (int)local_430) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_438);
          }
          local_438[iVar20] = 0x2c;
          local_438[(longlong)iVar20 + 1] = 0;
          iVar20 = (int)local_430 + -1;
          if ((int)local_430 < 1) {
            iVar20 = iVar22;
          }
          local_430._0_4_ = ((int)local_430 < 1) + 1 + (int)local_430;
          if (local_430._4_4_ < (int)local_430) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_438);
          }
          pvVar7 = local_428;
          iVar12 = (int)local_430;
          local_438[iVar20] = 0x22;
          local_438[(longlong)iVar20 + 1] = 0;
          if ((int)local_420 != 0) {
            iVar22 = (int)local_420 + -1;
          }
          if (iVar22 != 0) {
            lVar24 = (longlong)(int)local_430;
            local_430._0_4_ = (uint)((int)local_430 == 0) + iVar22 + (int)local_430;
            if (local_430._4_4_ < (int)local_430) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_438,iVar12);
            }
            puVar21 = local_438 + (lVar24 - (ulonglong)(iVar12 != 0));
            _guard_xfg_dispatch_icall_nop(puVar21,pvVar7,(longlong)iVar22 * 2);
            puVar21[iVar22] = 0;
          }
          iVar22 = 0;
          iVar20 = (int)local_430 + -1;
          if ((int)local_430 < 1) {
            iVar20 = 0;
          }
          local_430._0_4_ = ((int)local_430 < 1) + 1 + (int)local_430;
          if (local_430._4_4_ < (int)local_430) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_438);
          }
          iVar12 = (int)local_430;
          local_438[iVar20] = 0x22;
          local_438[(longlong)iVar20 + 1] = 0;
          lVar24 = (longlong)(int)local_430;
          local_430._0_4_ = (3 - (uint)((int)local_430 != 0)) + (int)local_430;
          if (local_430._4_4_ < (int)local_430) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_438,iVar12);
          }
          lVar24 = lVar24 - (ulonglong)(iVar12 != 0);
          *(undefined4 *)(local_438 + lVar24) = 0xa000d;
          local_438[lVar24 + 2] = 0;
          if ((int)local_430 == 0) {
            puVar21 = &DAT_143f3eda8;
          }
          else {
            iVar22 = (int)local_430 + -1;
            puVar21 = local_438;
          }
          FUN_140686100(local_e8,puVar21,iVar22);
          (**(code **)(*local_3a0 + 0x50))(local_3a0,local_60,(longlong)local_58);
          if (local_68 != 0) {
            FMemory::Free();
          }
          if (local_438 != (undefined2 *)0x0) {
            FMemory::Free();
          }
        }
        pauVar10 = local_2c0;
        *(undefined8 *)*local_2c0 = 0;
        *(undefined8 *)(*local_2c0 + 8) = 0;
        *(undefined4 *)local_2c0[1] = 0;
        pauVar27 = local_2c0 + 1;
        local_2c0[1][4] = 0;
        iVar20 = *(int *)local_2c0[0x1a];
        plVar13 = *(longlong **)(local_2c0[0x19] + 8);
        if (*(longlong **)(local_2c0[0x19] + 8) == (longlong *)0x0) {
          plVar13 = (longlong *)(*pauVar27 + 8);
        }
        for (; iVar20 != 0; iVar20 = iVar20 + -1) {
          FUN_14217f430(plVar13 + 2);
          if (*plVar13 != 0) {
            FMemory::Free();
          }
          plVar13 = plVar13 + 6;
        }
        *(undefined4 *)pauVar10[0x1a] = 0;
        if (*(int *)(pauVar10[0x1a] + 4) != 0) {
          FUN_14068a2a0(*pauVar27 + 8,0);
        }
        puVar14 = (undefined8 *)operator_new(0x18);
        if (puVar14 != (undefined8 *)0x0) {
          *puVar14 = 0;
          puVar14[1] = pauVar10;
          puVar14[2] = plStack_370;
          if (plStack_370 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_370 + 1) = (int)plStack_370[1] + 1;
            UNLOCK();
          }
          puVar18 = *(undefined8 **)(param_1 + 0xb8);
          *(undefined8 **)(param_1 + 0xb8) = puVar14;
          *puVar18 = puVar14;
        }
        LOCK();
        *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + -1;
        UNLOCK();
        if (local_428 != (void *)0x0) {
          FMemory::Free();
        }
      }
      if (plStack_370 != (longlong *)0x0) {
        LOCK();
        plVar17 = plStack_370 + 1;
        lVar24 = *plVar17;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)lVar24 == 1) {
          (**(code **)*plStack_370)(plStack_370);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (**(code **)(*plStack_370 + 8))(plStack_370,1);
          }
        }
      }
      *(int *)((longlong)plVar26 + 0x24) = *(int *)((longlong)plVar26 + 0x24) + -1;
      local_3b8[0] = 0x5d;
      (**(code **)(*(longlong *)plVar26[1] + 0x50))((longlong *)plVar26[1],local_3b8,2);
      *(int *)(plVar26 + 3) = (int)plVar26[3] + -1;
      TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(plVar26 + 2);
      *(undefined4 *)(plVar26 + 4) = 5;
      FUN_14068b240(plVar26);
      FUN_14068b240(plVar26);
      (**(code **)(*plVar26 + 8))(plVar26);
      if (local_3a0 != (longlong *)0x0) {
        (**(code **)*local_3a0)(local_3a0,1);
      }
      FString::FString(&local_190,DAT_146857c58);
      if ((local_188 != 0) && (local_188 != 1)) {
        plVar17 = (longlong *)FHttpModule::Get();
        (**(code **)(*plVar17 + 0x40))(plVar17,&local_308);
        local_320 = 0x20;
        local_328 = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_328,0);
        FGenericPlatformString::Memcpy(local_328,L"application/json; charset=utf-8",0x40);
        local_338 = 0;
        local_330 = 0xd;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_338,0);
        FGenericPlatformString::Memcpy(local_338,L"Content-Type",0x1a);
        (**(code **)(*local_308 + 0x68))(local_308,&local_338,&local_328);
        if (local_338 != 0) {
          FMemory::Free();
        }
        if (local_328 != 0) {
          FMemory::Free();
        }
        (**(code **)(*local_308 + 0x50))(local_308,&local_190);
        local_318 = 0;
        local_310 = 5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_318,0);
        FGenericPlatformString::Memcpy(local_318,L"POST",10);
        (**(code **)(*local_308 + 0x48))(local_308,&local_318);
        if (local_318 != 0) {
          FMemory::Free();
        }
        (**(code **)(*local_308 + 0x60))(local_308,&local_2a8);
        (**(code **)(*local_308 + 0x78))();
        if (local_300 != (longlong *)0x0) {
          LOCK();
          plVar17 = local_300 + 1;
          lVar24 = *plVar17;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)lVar24 == 1) {
            (**(code **)*local_300)(local_300);
            LOCK();
            piVar1 = (int *)((longlong)local_300 + 0xc);
            iVar20 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar20 == 1) {
              (**(code **)(*local_300 + 8))(local_300,1);
            }
          }
        }
      }
      if (local_190 != 0) {
        FMemory::Free();
      }
      plVar17 = local_1a0;
      if (local_1a0 != (longlong *)0x0) {
        LOCK();
        plVar26 = local_1a0 + 1;
        lVar24 = *plVar26;
        *(int *)plVar26 = (int)*plVar26 + -1;
        UNLOCK();
        if ((int)lVar24 == 1) {
          (**(code **)*local_1a0)(local_1a0);
          LOCK();
          piVar1 = (int *)((longlong)plVar17 + 0xc);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (**(code **)(*plVar17 + 8))(plVar17,1);
          }
        }
      }
      if (local_180 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_2a8 != 0) {
        FMemory::Free();
      }
      if (local_348 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
    else {
      local_388 = (undefined8 *)0x0;
      plStack_380 = (longlong *)0x0;
      while (plVar17 = plStack_380, lVar24 = **(longlong **)(param_1 + 0xb0), lVar24 != 0) {
        ppuVar3 = (undefined8 **)(lVar24 + 8);
        if (&local_388 != ppuVar3) {
          local_388 = *ppuVar3;
          *ppuVar3 = (undefined8 *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_380,lVar24 + 0x10);
        }
        lVar8 = *(longlong *)(param_1 + 0xb0);
        *(longlong *)(param_1 + 0xb0) = lVar24;
        local_298 = (undefined8 *)0x0;
        plStack_290 = (longlong *)0x0;
        if (ppuVar3 != &local_298) {
          *ppuVar3 = (undefined8 *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(lVar24 + 0x10,&plStack_290);
          plVar17 = plStack_290;
          if (plStack_290 != (longlong *)0x0) {
            LOCK();
            plVar26 = plStack_290 + 1;
            lVar24 = *plVar26;
            *(int *)plVar26 = (int)*plVar26 + -1;
            UNLOCK();
            if ((int)lVar24 == 1) {
              (**(code **)*plStack_290)(plStack_290);
              LOCK();
              piVar1 = (int *)((longlong)plVar17 + 0xc);
              iVar20 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar20 == 1) {
                (**(code **)(*plStack_290 + 8))(plStack_290,1);
              }
            }
          }
        }
        if (lVar8 != 0) {
          plVar17 = *(longlong **)(lVar8 + 0x10);
          if (plVar17 != (longlong *)0x0) {
            LOCK();
            plVar26 = plVar17 + 1;
            lVar24 = *plVar26;
            *(int *)plVar26 = (int)*plVar26 + -1;
            UNLOCK();
            if ((int)lVar24 == 1) {
              (**(code **)*plVar17)(plVar17);
              LOCK();
              piVar1 = (int *)((longlong)plVar17 + 0xc);
              iVar20 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar20 == 1) {
                (**(code **)(*plVar17 + 8))(plVar17,1);
              }
            }
          }
          FMemory::operator_delete(lVar8,0x18);
        }
        puVar14 = local_388;
        *local_388 = 0;
        local_388[1] = 0;
        plVar17 = local_388 + 3;
        *(undefined4 *)(local_388 + 2) = 0;
        *(undefined1 *)((longlong)local_388 + 0x14) = 0;
        iVar20 = *(int *)(local_388 + 0x34);
        plVar26 = (longlong *)local_388[0x33];
        if ((longlong *)local_388[0x33] == (longlong *)0x0) {
          plVar26 = plVar17;
        }
        for (; iVar20 != 0; iVar20 = iVar20 + -1) {
          FUN_14217f430(plVar26 + 2);
          if (*plVar26 != 0) {
            FMemory::Free();
          }
          plVar26 = plVar26 + 6;
        }
        *(undefined4 *)(puVar14 + 0x34) = 0;
        if (*(int *)((longlong)puVar14 + 0x1a4) != 0) {
          FUN_14068a2a0(plVar17,0);
        }
        puVar18 = (undefined8 *)operator_new(0x18);
        if (puVar18 != (undefined8 *)0x0) {
          *puVar18 = 0;
          puVar18[1] = puVar14;
          puVar18[2] = plStack_380;
          if (plStack_380 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_380 + 1) = (int)plStack_380[1] + 1;
            UNLOCK();
          }
          puVar14 = *(undefined8 **)(param_1 + 0xb8);
          *(undefined8 **)(param_1 + 0xb8) = puVar18;
          *puVar14 = puVar18;
        }
        LOCK();
        *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + -1;
        UNLOCK();
      }
      if (plStack_380 != (longlong *)0x0) {
        LOCK();
        plVar26 = plStack_380 + 1;
        lVar24 = *plVar26;
        *(int *)plVar26 = (int)*plVar26 + -1;
        UNLOCK();
        if ((int)lVar24 == 1) {
          (**(code **)*plStack_380)(plStack_380);
          LOCK();
          piVar1 = (int *)((longlong)plVar17 + 0xc);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (**(code **)(*plStack_380 + 8))(plStack_380,1);
          }
        }
      }
    }
  }
  QueryPerformanceCounter(&local_198);
  *(double *)(param_1 + 0xe0) = (double)local_198.QuadPart * DAT_1468b02f8 + 16777216.0;
  return;
}



// FUNCTION 1406893b0 FUN_1406893b0 body=68 status=ok
// SIG undefined FUN_1406893b0(void)

void FUN_1406893b0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,"GbxProbes",1);
  uVar2 = FUN_14168dc80();
  cVar3 = FModuleManager::IsModuleLoaded(uVar2,*puVar1);
  if (cVar3 != '\0') {
    FUN_142ea58c0();
    return;
  }
  return;
}



// FUNCTION 140689400 FUN_140689400 body=11 status=ok
// SIG undefined FUN_140689400(void)

undefined8 * FUN_140689400(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x68);
  return param_2;
}



// FUNCTION 140689410 FUN_140689410 body=146 status=ok
// SIG undefined FUN_140689410(void)

void FUN_140689410(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined8 local_res10 [2];
  longlong local_res20;
  longlong local_28 [2];
  longlong local_18 [2];
  
  if (param_2 != 0) {
    local_res20 = *(longlong *)(param_2 + 0x18);
    local_res10[0] = 0;
    if (local_res20 != 0) {
      uVar1 = FName::ToString(&local_res20,local_18);
      puVar2 = (undefined8 *)FUN_1428d4fe0(local_28,uVar1);
      if (*(int *)(puVar2 + 1) == 0) {
        puVar3 = &DAT_143f3eda8;
      }
      else {
        puVar3 = (undefined2 *)*puVar2;
      }
      puVar2 = (undefined8 *)FName::FName(local_res10,puVar3,1);
      *(undefined8 *)(param_1 + 0xd8) = *puVar2;
      if (local_28[0] != 0) {
        FMemory::Free();
      }
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 1406894b0 FUN_1406894b0 body=367 status=ok
// SIG undefined FUN_1406894b0(void)

undefined8 * FUN_1406894b0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uStack_c;
  
  puVar1 = (undefined8 *)operator_new(0xf0);
  puVar5 = (undefined8 *)0x0;
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *puVar1 = &PTR_FUN_144041fa0;
  puVar1[1] = &PTR_FUN_144041fe0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = puVar1;
    *puVar2 = &PTR_GetPoolName_144042030;
    *(undefined4 *)(puVar2 + 2) = 0x4068b1b0;
    *(undefined4 *)((longlong)puVar2 + 0x14) = 1;
    *(undefined4 *)(puVar2 + 3) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x1c) = uStack_c;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[5] = uVar3;
  }
  puVar1[4] = 0;
  puVar1[5] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 6));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar1 + 6),4000);
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  *(undefined4 *)(puVar1 + 0x11) = 0xffffffff;
  *(undefined4 *)((longlong)puVar1 + 0x8c) = 0;
  puVar1[0x13] = 0;
  *(undefined4 *)(puVar1 + 0x14) = 0;
  puVar4 = (undefined8 *)operator_new(0x18);
  puVar2 = puVar5;
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar2 = puVar4;
  }
  puVar1[0x17] = puVar2;
  puVar1[0x16] = puVar2;
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar5 = puVar2;
  }
  puVar1[0x19] = puVar5;
  puVar1[0x18] = puVar5;
  *(undefined4 *)(puVar1 + 0x1a) = 0;
  puVar1[0x1b] = 0;
  *(undefined2 *)(puVar1 + 0x1c) = 0x100;
  puVar1[0x1d] = 0;
  return puVar1;
}



// FUNCTION 140689620 FUN_140689620 body=248 status=ok
// SIG undefined FUN_140689620(void)

ulonglong FUN_140689620(longlong param_1,int param_2)

{
  BOOL BVar1;
  int iVar2;
  ulonglong in_RAX;
  int *piVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0xd9) != '\0') {
    return in_RAX & 0xffffffffffffff00;
  }
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  }
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    lVar5 = *(longlong *)(param_1 + 0x90);
    if (*(longlong *)(param_1 + 0x90) == 0) {
      lVar5 = param_1 + 0x88;
    }
    iVar2 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x98) - 1U & (longlong)param_2) * 4);
    if (iVar2 != -1) {
      do {
        piVar3 = (int *)((longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x50));
        if ((((piVar3[1] == param_2 && piVar3[4] == 0) && piVar3[3] == 0) && piVar3[2] == 0) &&
            *piVar3 == 0) {
          if (((iVar2 != -1) &&
              (lVar5 = (longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x50), lVar5 != 0)) &&
             (*(char *)(lVar5 + 0x15) != '\0')) {
            uVar4 = (ulonglong)(*(char *)(lVar5 + 0x14) != '\x04');
            goto LAB_1406896da;
          }
          break;
        }
        iVar2 = piVar3[6];
      } while (iVar2 != -1);
    }
  }
  uVar4 = 1;
LAB_1406896da:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return uVar4;
}



// FUNCTION 140689720 FUN_140689720 body=117 status=ok
// SIG undefined FUN_140689720(void)

void FUN_140689720(undefined8 param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 local_res10 [8];
  
  puVar1 = (undefined8 *)FName::FName(local_res10,"GbxProbes",1);
  uVar2 = FUN_14168dc80();
  cVar3 = FModuleManager::IsModuleLoaded(uVar2,*puVar1);
  if (cVar3 != '\0') {
    cVar3 = FUN_142ea5a00(param_1);
    if (cVar3 != '\0') {
      *param_2 = 1;
      return;
    }
  }
  *param_2 = 0;
  return;
}



// FUNCTION 1406897a0 FUN_1406897a0 body=1087 status=ok
// SIG undefined FUN_1406897a0(void)

undefined8 FUN_1406897a0(longlong param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  BOOL BVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  longlong lVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  char local_res8;
  
  if (*(char *)(param_1 + 0xd9) == '\0') {
    BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
    if (BVar1 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
    }
    if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
      lVar6 = *(longlong *)(param_1 + 0x90);
      if (*(longlong *)(param_1 + 0x90) == 0) {
        lVar6 = param_1 + 0x88;
      }
      uVar2 = *(uint *)(lVar6 + ((longlong)*(int *)(param_1 + 0x98) - 1U & (longlong)(int)param_2) *
                                4);
      if (uVar2 != 0xffffffff) {
        do {
          puVar4 = (uint *)((longlong)(int)uVar2 * 0x20 + *(longlong *)(param_1 + 0x50));
          if ((((param_2 == *puVar4 && puVar4[4] == 0) && puVar4[3] == 0) && puVar4[2] == 0) &&
              puVar4[1] == 0) {
            if (((uVar2 != 0xffffffff) &&
                (lVar6 = (longlong)(int)uVar2 * 0x20 + *(longlong *)(param_1 + 0x50), lVar6 != 0))
               && (*(char *)(lVar6 + 0x15) != '\0')) {
              bVar8 = *(char *)(lVar6 + 0x14) != '\x04';
              goto LAB_14068985e;
            }
            break;
          }
          uVar2 = puVar4[6];
        } while (uVar2 != 0xffffffff);
      }
    }
    bVar8 = true;
LAB_14068985e:
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
    if ((bVar8) && (*(char *)(param_1 + 0xd9) == '\0')) {
      BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
      if (BVar1 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
      }
      if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
        lVar6 = *(longlong *)(param_1 + 0x90);
        if (*(longlong *)(param_1 + 0x90) == 0) {
          lVar6 = param_1 + 0x88;
        }
        iVar3 = *(int *)(lVar6 + ((longlong)*(int *)(param_1 + 0x98) - 1U & (longlong)(int)param_3)
                                 * 4);
        if (iVar3 != -1) {
          do {
            piVar5 = (int *)((longlong)iVar3 * 0x20 + *(longlong *)(param_1 + 0x50));
            if ((((piVar5[1] == param_3 && piVar5[4] == 0) && piVar5[3] == 0) && piVar5[2] == 0) &&
                *piVar5 == 0) {
              if (((iVar3 != -1) &&
                  (lVar6 = (longlong)iVar3 * 0x20 + *(longlong *)(param_1 + 0x50), lVar6 != 0)) &&
                 (*(char *)(lVar6 + 0x15) != '\0')) {
                bVar8 = *(char *)(lVar6 + 0x14) != '\x04';
                goto LAB_14068990e;
              }
              break;
            }
            iVar3 = piVar5[6];
          } while (iVar3 != -1);
        }
      }
      bVar8 = true;
LAB_14068990e:
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
      if (bVar8) {
        BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
        if (BVar1 == 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
        }
        cVar7 = local_res8;
        if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
          lVar6 = *(longlong *)(param_1 + 0x90);
          if (*(longlong *)(param_1 + 0x90) == 0) {
            lVar6 = param_1 + 0x88;
          }
          uVar2 = *(uint *)(lVar6 + ((longlong)
                                     (int)(param_5 ^ param_4 ^ *(uint *)(param_1 + 0xd0) ^ param_3 ^
                                          param_2) & (longlong)*(int *)(param_1 + 0x98) - 1U) * 4);
          if (uVar2 != 0xffffffff) {
            do {
              puVar4 = (uint *)((longlong)(int)uVar2 * 0x20 + *(longlong *)(param_1 + 0x50));
              if ((((puVar4[4] == *(uint *)(param_1 + 0xd0) && puVar4[3] == param_5) &&
                   puVar4[2] == param_4) && puVar4[1] == param_3) && *puVar4 == param_2) {
                if ((uVar2 != 0xffffffff) &&
                   (lVar6 = (longlong)(int)uVar2 * 0x20 + *(longlong *)(param_1 + 0x50), lVar6 != 0)
                   ) {
                  if (*(char *)(lVar6 + 0x15) == '\0') {
                    bVar8 = false;
                  }
                  else {
                    bVar8 = *(char *)(lVar6 + 0x15) != '\0';
                    cVar7 = *(char *)(lVar6 + 0x14);
                  }
                  goto LAB_1406899ff;
                }
                break;
              }
              uVar2 = puVar4[6];
            } while (uVar2 != 0xffffffff);
          }
        }
        bVar8 = false;
LAB_1406899ff:
        if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
          lVar6 = *(longlong *)(param_1 + 0x90);
          if (*(longlong *)(param_1 + 0x90) == 0) {
            lVar6 = param_1 + 0x88;
          }
          uVar2 = *(uint *)(lVar6 + ((longlong)(int)(param_5 ^ param_4 ^ param_3 ^ param_2) &
                                    (longlong)*(int *)(param_1 + 0x98) - 1U) * 4);
          if (uVar2 != 0xffffffff) {
            do {
              puVar4 = (uint *)((longlong)(int)uVar2 * 0x20 + *(longlong *)(param_1 + 0x50));
              if ((((puVar4[3] == param_5 && puVar4[2] == param_4) && puVar4[1] == param_3) &&
                  *puVar4 == param_2) && puVar4[4] == 0) {
                if ((uVar2 != 0xffffffff) &&
                   (lVar6 = (longlong)(int)uVar2 * 0x20 + *(longlong *)(param_1 + 0x50), lVar6 != 0)
                   ) {
                  if (*(char *)(lVar6 + 0x15) == '\0') {
                    bVar9 = false;
                  }
                  else {
                    local_res8 = *(char *)(lVar6 + 0x14);
                    bVar9 = *(char *)(lVar6 + 0x15) != '\0';
                  }
                  goto LAB_140689aa9;
                }
                break;
              }
              uVar2 = puVar4[6];
            } while (uVar2 != 0xffffffff);
          }
        }
        bVar9 = false;
LAB_140689aa9:
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
        if ((((!bVar8) || (cVar7 != '\x04')) && ((!bVar9 || (local_res8 != '\x04')))) &&
           ((!bVar8 || (0 < DAT_146857c10)))) {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140689be0 FUN_140689be0 body=248 status=ok
// SIG undefined FUN_140689be0(void)

ulonglong FUN_140689be0(longlong param_1,int param_2)

{
  BOOL BVar1;
  int iVar2;
  ulonglong in_RAX;
  int *piVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0xd9) != '\0') {
    return in_RAX & 0xffffffffffffff00;
  }
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  }
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    lVar5 = *(longlong *)(param_1 + 0x90);
    if (*(longlong *)(param_1 + 0x90) == 0) {
      lVar5 = param_1 + 0x88;
    }
    iVar2 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x98) - 1U & (longlong)param_2) * 4);
    if (iVar2 != -1) {
      do {
        piVar3 = (int *)((longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x50));
        if ((((*piVar3 == param_2 && piVar3[4] == 0) && piVar3[3] == 0) && piVar3[2] == 0) &&
            piVar3[1] == 0) {
          if (((iVar2 != -1) &&
              (lVar5 = (longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x50), lVar5 != 0)) &&
             (*(char *)(lVar5 + 0x15) != '\0')) {
            uVar4 = (ulonglong)(*(char *)(lVar5 + 0x14) != '\x04');
            goto LAB_140689c9a;
          }
          break;
        }
        iVar2 = piVar3[6];
      } while (iVar2 != -1);
    }
  }
  uVar4 = 1;
LAB_140689c9a:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return uVar4;
}



// FUNCTION 140689ce0 FUN_140689ce0 body=117 status=ok
// SIG undefined FUN_140689ce0(void)

void FUN_140689ce0(undefined8 param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 local_res10 [8];
  
  puVar1 = (undefined8 *)FName::FName(local_res10,"GbxProbes",1);
  uVar2 = FUN_14168dc80();
  cVar3 = FModuleManager::IsModuleLoaded(uVar2,*puVar1);
  if (cVar3 != '\0') {
    cVar3 = FUN_142ea5a70(param_1);
    if (cVar3 != '\0') {
      *param_2 = 1;
      return;
    }
  }
  *param_2 = 0;
  return;
}



// FUNCTION 140689d60 FUN_140689d60 body=129 status=ok
// SIG undefined FUN_140689d60(void)

void FUN_140689d60(undefined8 *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 local_res18 [8];
  
  puVar1 = (undefined8 *)FName::FName(local_res18,"GbxProbes",1);
  uVar2 = FUN_14168dc80();
  cVar3 = FModuleManager::IsModuleLoaded(uVar2,*puVar1);
  if ((cVar3 != '\0') &&
     (cVar3 = FUN_142ea5a30(param_2,*param_1,param_1[1],param_1[2]), cVar3 != '\0')) {
    *param_3 = 1;
    return;
  }
  *param_3 = 0;
  return;
}



// FUNCTION 140689df0 FUN_140689df0 body=16 status=ok
// SIG undefined FUN_140689df0(void)

void FUN_140689df0(longlong *param_1,undefined8 param_2)

{
  *(bool *)param_2 = *param_1 != 0;
  return;
}



// FUNCTION 140689e00 FUN_140689e00 body=205 status=ok
// SIG undefined FUN_140689e00(void)

void FUN_140689e00(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 local_res8 [8];
  
  puVar3 = &DAT_143f3eda8;
  if ((int)param_1[1] == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*param_1;
  }
  puVar1 = (undefined8 *)FName::FName(local_res8,puVar2,1);
  *param_4 = *puVar1;
  if ((int)param_2[1] == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*param_2;
  }
  puVar1 = (undefined8 *)FName::FName(local_res8,puVar2,1);
  param_4[1] = *puVar1;
  if ((int)param_3[1] != 0) {
    puVar3 = (undefined2 *)*param_3;
  }
  puVar1 = (undefined8 *)FName::FName(local_res8,puVar3,1);
  param_4[2] = *puVar1;
  if (*param_1 != 0) {
    FMemory::Free();
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  if (*param_3 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140689ed0 FUN_140689ed0 body=97 status=ok
// SIG undefined FUN_140689ed0(void)

void FUN_140689ed0(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_140687620(param_1 + 8);
  FUN_140483870(&DAT_146535760,param_1);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    uVar1 = FUN_14164ab60();
    FUN_141597530(uVar1,*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  *(undefined1 *)(param_1 + 0xe1) = 1;
  DAT_146b3d880 = 0;
  FUN_142ea5de0(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 140689f40 FUN_140689f40 body=537 status=ok
// SIG undefined FUN_140689f40(void)

void FUN_140689f40(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
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
    lVar5 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar5;
  }
  uVar8 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar8 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar8) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar8;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar9 * 4) = 0xffffffff;
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
      uVar8 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar8 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar4) goto LAB_14068a07f;
        uVar8 = puVar12[lVar5 + 1];
      }
      uStack_54 = -uVar8 & uVar8;
      iVar7 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      iStack_44 = (iStack_40 - iVar7) + 0x1f;
      if (iVar3 < iStack_44) {
LAB_14068a07f:
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
        puVar12 = (uint *)((longlong)iStack_1c * 0x20 + *param_1);
        uVar8 = (puVar12[4] ^ puVar12[3] ^ puVar12[2] ^ puVar12[1] ^ *puVar12) & (int)*plVar2 - 1U;
        puVar12[7] = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        puVar12[6] = *(uint *)((longlong)plVar6 +
                              ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 14068a160 ResizeAllocation body=163 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<8,TSizedDefaultAllocator<32>_>::ForElementType<FBlendedCurve>::
     ResizeAllocation(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x180);
  if (param_3 < 9) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0x30);
    pvVar1 = *(void **)((longlong)param_1 + 0x180);
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
        *(void **)((longlong)param_1 + 0x180) = pvVar1;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0x30);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x180) = uVar2;
  return;
}



// FUNCTION 14068a210 FUN_14068a210 body=132 status=ok
// SIG undefined FUN_14068a210(void)

void FUN_14068a210(longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 9) {
      iVar2 = 8;
    }
    else {
      uVar1 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x30,0);
      iVar2 = (int)(uVar1 / 0x30);
      if (iVar2 < (int)param_2) {
        iVar2 = 0x7fffffff;
      }
    }
  }
  if (iVar2 != param_3) {
    TInlineAllocator<8,TSizedDefaultAllocator<32>_>::ForElementType<FBlendedCurve>::ResizeAllocation
              (param_1,0,iVar2,0x30);
  }
  *(int *)(param_1 + 0x18c) = iVar2;
  return;
}



// FUNCTION 14068a2a0 FUN_14068a2a0 body=127 status=ok
// SIG undefined FUN_14068a2a0(void)

void FUN_14068a2a0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 9) {
      iVar2 = 8;
    }
    else {
      uVar1 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x30,0);
      iVar2 = (int)(uVar1 / 0x30);
      if (iVar2 < (int)param_2) {
        iVar2 = 0x7fffffff;
      }
    }
  }
  if (iVar2 != *(int *)(param_1 + 0x18c)) {
    *(int *)(param_1 + 0x18c) = iVar2;
    TInlineAllocator<8,TSizedDefaultAllocator<32>_>::ForElementType<FBlendedCurve>::ResizeAllocation
              (param_1,*(undefined4 *)(param_1 + 0x188),iVar2,0x30);
  }
  return;
}



// FUNCTION 14068a320 FUN_14068a320 body=81 status=ok
// SIG undefined FUN_14068a320(void)

void FUN_14068a320(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 local_res10 [3];
  undefined1 local_28 [32];
  
  local_res10[0] = param_2;
  plVar3 = (longlong *)FUN_142ea5d30(local_28,param_1,local_res10);
  lVar2 = plVar3[1];
  lVar1 = plVar3[2];
  *param_3 = *plVar3;
  param_3[1] = lVar2;
  param_3[2] = lVar1;
  *(bool *)param_4 = *param_3 != 0;
  return;
}



// FUNCTION 14068a380 FUN_14068a380 body=167 status=ok
// SIG undefined FUN_14068a380(void)

longlong * FUN_14068a380(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 local_48 [32];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  for (iVar5 = 0; (-1 < iVar5 && (iVar5 < (int)param_2[1])); iVar5 = iVar5 + 1) {
    if ((*param_3 == 0) ||
       (cVar3 = FUN_1421d8270(*param_2 + (longlong)iVar5 * 8,param_3), cVar3 != '\0')) {
      plVar4 = (longlong *)FUN_142ea58e0(local_48,*param_2 + (longlong)iVar5 * 8);
      lVar2 = plVar4[1];
      lVar1 = plVar4[2];
      *param_1 = *plVar4;
      param_1[1] = lVar2;
      param_1[2] = lVar1;
      if (*param_1 != 0) {
        return param_1;
      }
    }
  }
  return param_1;
}



// FUNCTION 14068a430 FUN_14068a430 body=523 status=ok
// SIG undefined FUN_14068a430(void)

longlong * FUN_14068a430(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 (*pauVar7) [16];
  longlong lVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 local_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined1 local_68 [24];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  
  iVar9 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if (param_3 != (longlong *)0x0) {
    puVar4 = (undefined4 *)FUN_142ea5d90(local_80,param_3);
    uVar10 = puVar4[1];
    uVar11 = puVar4[2];
    uVar12 = puVar4[3];
    lVar8 = *(longlong *)(puVar4 + 4);
    *(undefined4 *)param_2 = *puVar4;
    *(undefined4 *)((longlong)param_2 + 4) = uVar10;
    *(undefined4 *)(param_2 + 1) = uVar11;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar12;
    param_2[2] = lVar8;
    if (*param_2 == 0) {
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      local_38 = 0;
      uVar5 = UGameplayTagAssetInterface::GetPrivateStaticClass();
      plVar6 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_3,uVar5);
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,&local_50);
        local_80._0_4_ = 0;
        uVar10 = local_80._0_4_;
        local_80._4_4_ = 0;
        uVar11 = local_80._4_4_;
        local_80._8_4_ = 0;
        uVar12 = local_80._8_4_;
        local_80._12_4_ = 0;
        uVar13 = local_80._12_4_;
        local_70 = 0;
        uVar14 = 0;
        uVar15 = 0;
        local_80 = ZEXT816(0);
        local_88 = 0;
        while( true ) {
          if ((iVar9 < 0) || ((int)local_48 <= iVar9)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) break;
          if (*param_4 == 0) {
LAB_14068a531:
            pauVar7 = (undefined1 (*) [16])FUN_142ea58e0(local_68,local_50 + (longlong)iVar9 * 8);
            local_80 = *pauVar7;
            local_88 = *(undefined8 *)pauVar7[1];
            uVar14 = (undefined4)local_88;
            uVar15 = (undefined4)((ulonglong)local_88 >> 0x20);
            uVar10 = local_80._0_4_;
            uVar11 = local_80._4_4_;
            uVar12 = local_80._8_4_;
            uVar13 = local_80._12_4_;
            if (local_80._0_8_ != 0) break;
          }
          else {
            cVar3 = FUN_1421d8270(local_50 + (longlong)iVar9 * 8,param_4);
            if (cVar3 != '\0') goto LAB_14068a531;
            uVar14 = (undefined4)local_88;
            uVar15 = (undefined4)((ulonglong)local_88 >> 0x20);
          }
          iVar9 = iVar9 + 1;
          uVar10 = local_80._0_4_;
          uVar11 = local_80._4_4_;
          uVar12 = local_80._8_4_;
          uVar13 = local_80._12_4_;
        }
        *(undefined4 *)param_2 = uVar10;
        *(undefined4 *)((longlong)param_2 + 4) = uVar11;
        *(undefined4 *)(param_2 + 1) = uVar12;
        *(undefined4 *)((longlong)param_2 + 0xc) = uVar13;
        param_2[2] = CONCAT44(uVar15,uVar14);
      }
      if (*param_2 == 0) {
        lVar8 = FUN_1428dfc70();
        if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
            != lVar8 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          uVar5 = UThrobber::GetPrivateStaticClass();
          lVar8 = (**(code **)(*param_3 + 0x628))(param_3,uVar5);
          if (lVar8 != 0) {
            plVar6 = (longlong *)FUN_14068a380(local_68,lVar8 + 0x188,param_4);
            lVar1 = plVar6[1];
            lVar8 = plVar6[2];
            *param_2 = *plVar6;
            param_2[1] = lVar1;
            param_2[2] = lVar8;
          }
        }
      }
      if (local_40 != 0) {
        FMemory::Free();
      }
      if (local_50 != 0) {
        FMemory::Free();
      }
    }
  }
  return param_2;
}



// FUNCTION 14068a640 FUN_14068a640 body=547 status=ok
// SIG undefined FUN_14068a640(void)

void FUN_14068a640(longlong param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint local_res8 [2];
  undefined4 uStack_1c;
  
  lVar6 = DAT_146b3d880;
  uVar7 = 0;
  if (DAT_146b3d880 != 0) {
    FUN_140687620(DAT_146b3d880);
    FUN_140483870(&DAT_146535760,lVar6 + -8);
    if (*(longlong *)(lVar6 + 0x18) != 0) {
      uVar3 = FUN_14164ab60();
      FUN_141597530(uVar3,*(undefined8 *)(lVar6 + 0x18));
      *(undefined8 *)(lVar6 + 0x18) = 0;
    }
    *(undefined1 *)(lVar6 + 0xd9) = 1;
  }
  DAT_146b3d880 = param_1 + 8;
  *(undefined1 *)(param_1 + 0xe1) = 0;
  uVar3 = FUN_14164ab60();
  puVar4 = (undefined8 *)FUN_14158f860(uVar3,local_res8,param_1 + 0x10,L"FGbxProbesModule_Tick",0);
  *(undefined8 *)(param_1 + 0x20) = *puVar4;
  plVar5 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar5 != (longlong *)0x0) {
    plVar5[1] = param_1;
    *plVar5 = (longlong)&PTR_GetPoolName_143fc1ab0;
    *(undefined4 *)(plVar5 + 2) = 0x40689410;
    *(undefined4 *)((longlong)plVar5 + 0x14) = 1;
    *(undefined4 *)(plVar5 + 3) = 0;
    *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_1c;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[5] = lVar6;
    *plVar5 = (longlong)&PTR_GetPoolName_143fc1af8;
    iVar1 = DAT_146535768;
    if ((DAT_146535774 < 1) && (DAT_146535770 = DAT_146535770 + -1, DAT_146535770 <= DAT_146535768))
    {
      uVar8 = uVar7;
      if (0 < DAT_146535768) {
        do {
          if (((*(int *)(uVar7 + 8 + DAT_146535760) == 0) ||
              (*(longlong **)(uVar7 + DAT_146535760) == (longlong *)0x0)) ||
             (cVar2 = (**(code **)(**(longlong **)(uVar7 + DAT_146535760) + 0x10))(), cVar2 != '\0')
             ) {
            TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_146535760,uVar8,1,1);
          }
          else {
            uVar8 = (ulonglong)((int)uVar8 + 1);
            uVar7 = uVar7 + 0x10;
          }
        } while ((int)uVar8 < DAT_146535768);
      }
      DAT_146535770 = DAT_146535768 * 2;
      if (DAT_146535770 < 3) {
        DAT_146535770 = 2;
      }
      if ((DAT_146535770 < iVar1) && (DAT_14653576c != DAT_146535768)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_146535760);
      }
    }
    (**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
    iVar1 = DAT_146535768;
    lVar6 = (longlong)DAT_146535768;
    DAT_146535768 = DAT_146535768 + 1;
    if (DAT_14653576c < DAT_146535768) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146535760,iVar1);
    }
    puVar4 = (undefined8 *)(lVar6 * 0x10 + DAT_146535760);
    *puVar4 = plVar5;
    *(undefined4 *)(puVar4 + 1) = 3;
  }
  FUN_140689410(param_1,DAT_146b19a68,local_res8[0] & 0xffffff7f | 0x37f);
  return;
}



// FUNCTION 14068a870 FUN_14068a870 body=159 status=ok
// SIG undefined FUN_14068a870(void)

undefined8 * FUN_14068a870(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined8 local_res8;
  longlong local_res10;
  longlong local_28 [2];
  longlong local_18 [2];
  
  *param_2 = *(undefined8 *)(param_1 + 0xd0);
  local_res8 = 0;
  if (param_3 != 0) {
    local_res10 = param_3;
    uVar1 = FName::ToString(&local_res10,local_18);
    puVar2 = (undefined8 *)FUN_1428d4fe0(local_28,uVar1);
    if (*(int *)(puVar2 + 1) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)*puVar2;
    }
    puVar2 = (undefined8 *)FName::FName(&local_res8,puVar3,1);
    *(undefined8 *)(param_1 + 0xd0) = *puVar2;
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return param_2;
}



// FUNCTION 14068a910 FUN_14068a910 body=535 status=ok
// SIG undefined FUN_14068a910(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_14068a910(longlong param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
             byte param_7,char param_8)

{
  BOOL BVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  undefined8 uVar5;
  uint *puVar6;
  undefined1 auStack_98 [32];
  uint local_78 [2];
  int local_70 [2];
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint *local_50;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if (*(char *)(param_1 + 0xe1) != '\0') {
    return CONCAT71((int7)(local_30 >> 8),3);
  }
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  }
  uStack_5c = param_5;
  local_38 = param_6;
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    lVar3 = *(longlong *)(param_1 + 0x98);
    if (*(longlong *)(param_1 + 0x98) == 0) {
      lVar3 = param_1 + 0x90;
    }
    uVar2 = *(uint *)(lVar3 + ((longlong)(int)(param_3 ^ param_5 ^ param_6 ^ param_4 ^ param_2) &
                              (longlong)*(int *)(param_1 + 0xa0) - 1U) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        puVar6 = (uint *)((longlong)(int)uVar2 * 0x20 + *(longlong *)(param_1 + 0x58));
        if ((((puVar6[4] == param_6 && puVar6[3] == param_5) && puVar6[2] == param_4) &&
            puVar6[1] == param_3) && *puVar6 == param_2) {
          if (uVar2 != 0xffffffff) goto LAB_14068aa6d;
          break;
        }
        uVar2 = puVar6[6];
      } while (uVar2 != 0xffffffff);
    }
  }
  puVar6 = (uint *)0x0;
LAB_14068aa6d:
  puVar4 = puVar6 + 5;
  if (puVar6 == (uint *)0x0) {
    puVar4 = (uint *)0x0;
  }
  local_68 = param_2;
  uStack_64 = param_3;
  uStack_60 = param_4;
  local_48 = param_2;
  uStack_44 = param_3;
  uStack_40 = param_4;
  uStack_3c = uStack_5c;
  if (puVar4 == (uint *)0x0) {
    local_50 = &local_48;
    FUN_140685e50(param_1 + 0x58,local_70,&local_50,0);
    puVar4 = (uint *)(*(longlong *)(param_1 + 0x58) + 0x14 + (longlong)local_70[0] * 0x20);
  }
  if (*(byte *)((longlong)puVar4 + 1) == 0) {
    uVar5 = 0;
  }
  else {
    if ((*(byte *)((longlong)puVar4 + 1) == 1) && ((byte)*puVar4 == 4)) {
      uVar5 = 3;
      goto LAB_14068aaf9;
    }
    if ((param_8 == '\0') || (param_7 <= (byte)*puVar4)) {
      uVar5 = 2;
      goto LAB_14068aaf9;
    }
    uVar5 = 1;
  }
  if (local_78 != puVar4) {
    *(byte *)puVar4 = param_7;
    *(byte *)((longlong)puVar4 + 1) = 1;
  }
LAB_14068aaf9:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return uVar5;
}



// FUNCTION 14068ab30 FUN_14068ab30 body=1661 status=ok
// SIG undefined FUN_14068ab30(void)

void FUN_14068ab30(longlong param_1)

{
  int iVar1;
  void *pvVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  undefined2 *puVar17;
  LARGE_INTEGER local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ulonglong in_stack_ffffffffffffff08;
  ulonglong in_stack_ffffffffffffff18;
  undefined2 *local_d8;
  undefined8 local_d0;
  undefined2 *local_c8;
  undefined8 local_c0;
  undefined2 *local_b8;
  int local_b0;
  undefined4 local_ac;
  longlong local_a8 [2];
  code *local_98;
  undefined8 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_68;
  undefined4 local_58;
  
  puVar17 = (undefined2 *)0x0;
  local_68 = 0;
  iVar16 = 0;
  local_58 = 0;
  puVar6 = (undefined8 *)FUN_140438ef0(0x10,local_88);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_FUN_143f3f130;
  }
  local_98 = FUN_140686860;
  puVar6 = (undefined8 *)FUN_142ea56d0(&local_res8,&local_98,0xffffffff);
  *(undefined8 *)(param_1 + 0x28) = *puVar6;
  puVar12 = &DAT_143f3eda8;
  if (DAT_1468e2368 != 0) {
    puVar12 = DAT_1468e2360;
  }
  FUN_141643200(L"GbxProbes",puVar12,0x8000000,0);
  local_b8 = (undefined2 *)0x0;
  local_b0 = *(int *)(DAT_146857c70 + 1);
  lVar14 = (longlong)local_b0;
  pvVar2 = (void *)*DAT_146857c70;
  if (local_b0 == 0) {
    local_ac = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b8,local_b0,0);
    _guard_xfg_dispatch_icall_nop(local_b8,pvVar2,lVar14 * 2);
  }
  if ((local_b0 != 0) && (0 < local_b0 + -1)) {
    puVar6 = (undefined8 *)FUN_14167d0d0(local_a8);
    iVar15 = *(int *)(puVar6 + 1);
    local_d8 = (undefined2 *)*puVar6;
    *puVar6 = 0;
    local_d0._0_4_ = *(int *)(puVar6 + 1);
    local_d0._4_4_ = *(int *)((longlong)puVar6 + 0xc);
    puVar6[1] = 0;
    if (local_d0._4_4_ < (int)((0xb - (uint)(iVar15 != 0)) + (int)local_d0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_d8);
    }
    FString::PathAppend(&local_d8,L"GbxProbes",9);
    iVar15 = local_d0._4_4_;
    iVar11 = iVar16;
    if (local_b0 != 0) {
      iVar11 = local_b0 + -1;
    }
    if (((int)local_d0 != 0) || (iVar5 = 2, iVar11 == -1)) {
      iVar5 = 1;
    }
    iVar1 = (int)local_d0 + iVar11;
    local_c8 = local_d8;
    local_d8 = (undefined2 *)0x0;
    local_c0 = CONCAT44(local_d0._4_4_,(int)local_d0);
    local_d0 = 0;
    if (iVar15 < iVar1 + iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_c8);
    }
    FString::PathAppend(&local_c8,local_b8,iVar11);
    if (local_b8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_b8 = local_c8;
    local_b0 = (int)local_c0;
    local_ac = local_c0._4_4_;
    local_c0 = 0;
    local_c8 = (undefined2 *)0x0;
    if (local_d8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_a8[0] != 0) {
      FMemory::Free();
    }
    plVar7 = (longlong *)FUN_1415c3d50();
    puVar6 = (undefined8 *)FUN_141672d20(local_a8,&local_b8);
    if (*(int *)(puVar6 + 1) == 0) {
      puVar12 = &DAT_143f3eda8;
    }
    else {
      puVar12 = (undefined2 *)*puVar6;
    }
    (**(code **)(*plVar7 + 0x58))(plVar7,puVar12,0);
    if (local_a8[0] != 0) {
      FMemory::Free();
    }
    plVar7 = (longlong *)FUN_1415c3d50();
    puVar12 = &DAT_143f3eda8;
    if (local_b0 != 0) {
      puVar12 = local_b8;
    }
    cVar4 = (**(code **)(*plVar7 + 0x48))(plVar7,puVar12);
    if (cVar4 != '\0') {
      FUN_141672300(&local_c8,&local_b8,1);
      FUN_141671940(&local_d8,&local_b8,0);
      uVar3 = local_d0;
      iVar15 = (int)local_d0;
      lVar14 = (longlong)(int)local_d0;
      iVar11 = (2 - (uint)((int)local_d0 != 0)) + (int)local_d0;
      local_d0 = CONCAT44(local_d0._4_4_,iVar11);
      if (local_d0._4_4_ < iVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,uVar3 & 0xffffffff);
      }
      lVar14 = lVar14 - (ulonglong)(iVar15 != 0);
      local_d8[lVar14] = 0x2d;
      local_d8[lVar14 + 1] = 0;
      uVar8 = FDateTime::Now(&local_res8);
      puVar6 = (undefined8 *)FDateTime::ToString(uVar8,local_a8);
      uVar3 = local_d0;
      pvVar2 = (void *)*puVar6;
      iVar15 = *(int *)(puVar6 + 1) + -1;
      if (*(int *)(puVar6 + 1) == 0) {
        iVar15 = iVar16;
      }
      if (iVar15 != 0) {
        iVar11 = (int)local_d0;
        lVar14 = (longlong)(int)local_d0;
        iVar5 = (uint)((int)local_d0 == 0) + (int)local_d0 + iVar15;
        local_d0 = CONCAT44(local_d0._4_4_,iVar5);
        if (local_d0._4_4_ < iVar5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,uVar3 & 0xffffffff);
        }
        puVar12 = local_d8 + (lVar14 - (ulonglong)(iVar11 != 0));
        _guard_xfg_dispatch_icall_nop(puVar12,pvVar2,(longlong)iVar15 * 2);
        puVar12[iVar15] = 0;
      }
      if (local_a8[0] != 0) {
        FMemory::Free();
      }
      puVar12 = local_c8;
      uVar3 = local_d0;
      if ((int)local_c0 != 0) {
        iVar16 = (int)local_c0 + -1;
      }
      if (iVar16 != 0) {
        iVar15 = (int)local_d0;
        lVar14 = (longlong)(int)local_d0;
        iVar11 = (uint)((int)local_d0 == 0) + iVar16 + (int)local_d0;
        local_d0 = CONCAT44(local_d0._4_4_,iVar11);
        if (local_d0._4_4_ < iVar11) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,uVar3 & 0xffffffff);
        }
        puVar13 = local_d8 + (lVar14 - (ulonglong)(iVar15 != 0));
        _guard_xfg_dispatch_icall_nop(puVar13,puVar12,(longlong)iVar16 * 2);
        puVar13[iVar16] = 0;
      }
      plVar7 = (longlong *)FUN_1415c3d50();
      puVar12 = &DAT_143f3eda8;
      if (local_b0 != 0) {
        puVar12 = local_b8;
      }
      puVar13 = &DAT_143f3eda8;
      if ((int)local_d0 != 0) {
        puVar13 = local_d8;
      }
      in_stack_ffffffffffffff08 = in_stack_ffffffffffffff08 & 0xffffffffffffff00;
      (**(code **)(*plVar7 + 0x40))
                (plVar7,puVar13,puVar12,1,in_stack_ffffffffffffff08,0,
                 in_stack_ffffffffffffff18 & 0xffffffffffffff00);
      plVar7 = (longlong *)FUN_1415c3d50();
      in_stack_ffffffffffffff08 = in_stack_ffffffffffffff08 & 0xffffffffffffff00;
      puVar12 = &DAT_143f3eda8;
      if (local_b0 != 0) {
        puVar12 = local_b8;
      }
      (**(code **)(*plVar7 + 0x30))(plVar7,puVar12,0,0,in_stack_ffffffffffffff08);
      if (local_d8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_c8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    local_c8 = (undefined2 *)0x0;
    local_c0 = 0x2c;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
    FGenericPlatformString::Memcpy(local_c8,L"Class,Type,Subtype,Test,Result,Extra Data\r\n",0x58);
    puVar12 = &DAT_143f3eda8;
    if (local_b0 != 0) {
      puVar12 = local_b8;
    }
    uVar8 = FUN_1415c3d50();
    FUN_14167efa0(&local_c8,puVar12,1,uVar8,in_stack_ffffffffffffff08 & 0xffffffff00000000);
    if (local_c8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    *(undefined1 *)(param_1 + 0xe1) = 0;
  }
  local_c8 = (undefined2 *)0x0;
  iVar16 = *(int *)(DAT_146857c58 + 1);
  pvVar2 = (void *)*DAT_146857c58;
  local_c0 = CONCAT44(local_c0._4_4_,iVar16);
  if (iVar16 == 0) {
    iVar16 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_c8,iVar16,0);
    puVar17 = local_c8;
    _guard_xfg_dispatch_icall_nop(local_c8,pvVar2,(longlong)iVar16 * 2);
    iVar16 = (int)local_c0;
  }
  if ((iVar16 != 0) && (0 < iVar16 + -1)) {
    *(undefined1 *)(param_1 + 0xe1) = 0;
  }
  if (*(char *)(param_1 + 0xe1) == '\0') {
    FUN_14068a640(param_1);
    local_98 = (code *)0x0;
    local_90 = 0;
    local_88[0] = 0;
    local_80 = 0;
    local_78 = 0;
    local_res8.QuadPart = 0;
    puVar6 = (undefined8 *)FName::FName(local_res10,L"GbxProbes",1);
    puVar9 = (undefined8 *)FName::FName(local_res18,L"Module",1);
    puVar10 = (undefined8 *)FName::FName(local_res20,L"Startup",1);
    FUN_140686ad0(param_1 + 8,*puVar10,*puVar9,*puVar6,0,2,&local_98);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_80);
    FUN_14063f990(&local_98);
  }
  QueryPerformanceCounter(&local_res8);
  *(double *)(param_1 + 0xe8) = (double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0;
  if (puVar17 != (undefined2 *)0x0) {
    FMemory::Free(puVar17);
  }
  if (local_b8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14068b1b0 FUN_14068b1b0 body=133 status=ok
// SIG undefined FUN_14068b1b0(void)

undefined8 FUN_14068b1b0(longlong param_1)

{
  int iVar1;
  LARGE_INTEGER local_res8 [4];
  
  if (**(longlong **)(param_1 + 0xb8) != 0) {
    LOCK();
    iVar1 = *(int *)(param_1 + 0xd0);
    if (iVar1 == 0) {
      *(int *)(param_1 + 0xd0) = 0;
      iVar1 = 0;
    }
    UNLOCK();
    if ((DAT_14622bd58 <= iVar1) ||
       ((1 < DAT_14622bd5c &&
        (QueryPerformanceCounter(local_res8),
        (double)DAT_14622bd5c <
        ((double)local_res8[0].QuadPart * DAT_1468b02f8 + 16777216.0) - *(double *)(param_1 + 0xe8))
        ))) {
      FUN_140687620(param_1 + 8);
    }
  }
  return 1;
}



// FUNCTION 14068b240 FUN_14068b240 body=68 status=ok
// SIG undefined FUN_14068b240(void)

void FUN_14068b240(longlong param_1)

{
  undefined2 local_res8 [16];
  
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
  local_res8[0] = 0x7d;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),local_res8,2);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x20) = 3;
  return;
}



// FUNCTION 14068b290 FUN_14068b290 body=161 status=ok
// SIG undefined FUN_14068b290(void)

void FUN_14068b290(longlong param_1)

{
  int iVar1;
  undefined2 local_res8 [4];
  
  if ((0xc < *(uint *)(param_1 + 0x20)) ||
     ((0x1015U >> (*(uint *)(param_1 + 0x20) & 0x1f) & 1) == 0)) {
    local_res8[0] = 0x2c;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),local_res8,2);
  }
  local_res8[0] = 0x7b;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),local_res8,2);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  iVar1 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x18) = iVar1 + 1;
  if (*(int *)(param_1 + 0x1c) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x10,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 4) = 6;
  *(undefined4 *)(param_1 + 0x20) = 2;
  return;
}



// FUNCTION 14068b340 FUN_14068b340 body=152 status=ok
// SIG undefined FUN_14068b340(void)

void FUN_14068b340(undefined8 param_1,undefined8 param_2,short *param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 local_18;
  ulonglong local_10;
  
  local_18 = 0;
  local_10 = 0;
  if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (param_3[lVar2] != 0);
    uVar1 = (int)lVar2 + 1;
    local_10 = (ulonglong)uVar1;
    if (0 < (int)uVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    }
    FGenericPlatformString::Memcpy(local_18,param_3,(longlong)(int)uVar1 * 2);
  }
  FUN_1404f77b0(param_1,param_2,&local_18);
  return;
}



// FUNCTION 14068b3e0 FUN_14068b3e0 body=162 status=ok
// SIG undefined FUN_14068b3e0(void)

longlong FUN_14068b3e0(void)

{
  if (DAT_146857df0 == 0) {
    FUN_14171ccd0(L"/Script/GbxProbes",L"GbxProbesBlueprintLibrary",&DAT_146857df0,FUN_14068b6d0,
                  0x28,0x10000000,0,L"Engine",FUN_1405d87d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_146857df0;
}



// FUNCTION 14068b490 FUN_14068b490 body=47 status=ok
// SIG undefined FUN_14068b490(void)

longlong FUN_14068b490(void)

{
  if (DAT_146857de8 == 0) {
    FUN_141786440(&DAT_146857de8,&PTR_FUN_144042590);
  }
  return DAT_146857de8;
}



// FUNCTION 14068b4c0 FUN_14068b4c0 body=47 status=ok
// SIG undefined FUN_14068b4c0(void)

longlong FUN_14068b4c0(void)

{
  if (DAT_146857da0 == 0) {
    FUN_141786a30(&DAT_146857da0,&PTR_FUN_14622c040);
  }
  return DAT_146857da0;
}



// FUNCTION 14068b4f0 FUN_14068b4f0 body=47 status=ok
// SIG undefined FUN_14068b4f0(void)

longlong FUN_14068b4f0(void)

{
  if (DAT_146857da8 == 0) {
    FUN_141786a30(&DAT_146857da8,&PTR_FUN_14622c1f0);
  }
  return DAT_146857da8;
}



// FUNCTION 14068b520 FUN_14068b520 body=47 status=ok
// SIG undefined FUN_14068b520(void)

longlong FUN_14068b520(void)

{
  if (DAT_146857db0 == 0) {
    FUN_141786a30(&DAT_146857db0,&PTR_FUN_14622c230);
  }
  return DAT_146857db0;
}



// FUNCTION 14068b550 FUN_14068b550 body=47 status=ok
// SIG undefined FUN_14068b550(void)

longlong FUN_14068b550(void)

{
  if (DAT_146857db8 == 0) {
    FUN_141786a30(&DAT_146857db8,&PTR_FUN_14622c2f0);
  }
  return DAT_146857db8;
}



// FUNCTION 14068b580 FUN_14068b580 body=47 status=ok
// SIG undefined FUN_14068b580(void)

longlong FUN_14068b580(void)

{
  if (DAT_146857dc0 == 0) {
    FUN_141786a30(&DAT_146857dc0,&PTR_FUN_14622c3b0);
  }
  return DAT_146857dc0;
}



// FUNCTION 14068b5b0 FUN_14068b5b0 body=47 status=ok
// SIG undefined FUN_14068b5b0(void)

longlong FUN_14068b5b0(void)

{
  if (DAT_146857dc8 == 0) {
    FUN_141786a30(&DAT_146857dc8,&PTR_FUN_14622c4b0);
  }
  return DAT_146857dc8;
}



// FUNCTION 14068b5e0 FUN_14068b5e0 body=47 status=ok
// SIG undefined FUN_14068b5e0(void)

longlong FUN_14068b5e0(void)

{
  if (DAT_146857dd0 == 0) {
    FUN_141786a30(&DAT_146857dd0,&PTR_FUN_14622c5b0);
  }
  return DAT_146857dd0;
}



// FUNCTION 14068b610 FUN_14068b610 body=47 status=ok
// SIG undefined FUN_14068b610(void)

longlong FUN_14068b610(void)

{
  if (DAT_146857dd8 == 0) {
    FUN_141786a30(&DAT_146857dd8,&PTR_FUN_14622c690);
  }
  return DAT_146857dd8;
}



// FUNCTION 14068b640 FUN_14068b640 body=47 status=ok
// SIG undefined FUN_14068b640(void)

longlong FUN_14068b640(void)

{
  if (DAT_146857de0 == 0) {
    FUN_141786a30(&DAT_146857de0,&PTR_FUN_14622c7e0);
  }
  return DAT_146857de0;
}



// FUNCTION 14068b690 FUN_14068b690 body=47 status=ok
// SIG undefined FUN_14068b690(void)

longlong FUN_14068b690(void)

{
  if (DAT_146857d80 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146857d80,&PTR_s__Script_GbxProbes_1440427c8);
  }
  return DAT_146857d80;
}



// FUNCTION 14068b6c0 FUN_14068b6c0 body=6 status=ok
// SIG undefined FUN_14068b6c0(void)

undefined8 FUN_14068b6c0(void)

{
  return 0xb8bc73ae;
}



// FUNCTION 14068b6d0 FUN_14068b6d0 body=34 status=ok
// SIG undefined FUN_14068b6d0(void)

void FUN_14068b6d0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14068b3e0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_EmitTestProbeResult_144042820,9);
  return;
}



// FUNCTION 14068b700 FUN_14068b700 body=113 status=ok
// SIG undefined FUN_14068b700(void)

void FUN_14068b700(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146857d88 == 0) {
    if (DAT_146857d80 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146857d80,&PTR_s__Script_GbxProbes_1440427c8);
    }
    lVar1 = DAT_146857d80;
    uVar2 = FUN_14068b6c0();
    DAT_146857d88 = GetStaticStruct(FUN_14068b780,lVar1,L"GbxProbeExtraData",0x20,uVar2);
  }
  return;
}



// FUNCTION 14068b780 FUN_14068b780 body=47 status=ok
// SIG undefined FUN_14068b780(void)

longlong FUN_14068b780(void)

{
  if (DAT_146857d98 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146857d98,&PTR_FUN_14622be90);
  }
  return DAT_146857d98;
}



// FUNCTION 14068b7b0 FUN_14068b7b0 body=411 status=ok
// SIG undefined FUN_14068b7b0(void)

void FUN_14068b7b0(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res10 [8];
  undefined8 local_res20;
  void *local_58;
  ulonglong local_50;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
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
  local_res20 = 0;
  puVar2 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
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
  local_58 = (void *)0x0;
  local_50 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  _Src = local_58;
  local_48 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar1 = (longlong)(int)local_50;
  local_40 = (int)local_50;
  if ((int)local_50 == 0) {
    local_3c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_50 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_48,_Src,lVar1 * 2);
  }
  FUN_140686ef0(puVar2,local_res20,local_res10[0],&local_48);
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14068b950 FUN_14068b950 body=402 status=ok
// SIG undefined FUN_14068b950(void)

void FUN_14068b950(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong **pplVar4;
  undefined1 local_res10 [16];
  undefined8 local_res20;
  longlong *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
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
  local_res20 = 0;
  puVar2 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
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
  local_48 = (longlong *)0x0;
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  pplVar4 = &local_48;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar4 = *(longlong ***)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1406871d0(puVar2,local_res20,local_res10[0],pplVar4);
  plVar1 = local_48;
  for (iVar3 = (int)local_40; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (plVar1[2] != 0) {
      FMemory::Free();
    }
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 4;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}



// FUNCTION 14068bb10 FUN_14068bb10 body=190 status=ok
// SIG undefined FUN_14068bb10(void)

void FUN_14068bb10(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 local_res10 [16];
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar1 = local_res10;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140689720(local_res20,puVar1);
  return;
}



// FUNCTION 14068bbd0 FUN_14068bbd0 body=190 status=ok
// SIG undefined FUN_14068bbd0(void)

void FUN_14068bbd0(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 local_res10 [16];
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar1 = local_res10;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140689ce0(local_res20,puVar1);
  return;
}



// FUNCTION 14068bc90 FUN_14068bc90 body=291 status=ok
// SIG undefined FUN_14068bc90(void)

void FUN_14068bc90(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 local_res10 [8];
  undefined8 local_res20;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_res20 = 0;
  puVar1 = &local_28;
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
  local_res10[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar2 = local_res10;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140689d60(puVar1,local_res20,puVar2);
  return;
}



// FUNCTION 14068bdc0 FUN_14068bdc0 body=228 status=ok
// SIG undefined FUN_14068bdc0(void)

void FUN_14068bdc0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 local_res10 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_res10[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar3 = &local_28;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar2 = local_res10;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140689df0(puVar3,puVar2);
  return;
}



// FUNCTION 14068beb0 FUN_14068beb0 body=580 status=ok
// SIG undefined FUN_14068beb0(void)

void FUN_14068beb0(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  longlong lVar2;
  undefined8 *puVar3;
  void *local_88;
  ulonglong local_80;
  void *local_78;
  ulonglong local_70;
  void *local_68;
  ulonglong local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_68 = (void *)0x0;
  local_60 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_78 = (void *)0x0;
  local_70 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_88 = (void *)0x0;
  local_80 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  pvVar1 = local_88;
  local_58 = (void *)0x0;
  puVar3 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar2 = (longlong)(int)local_80;
  local_50 = (int)local_80;
  if ((int)local_80 == 0) {
    local_4c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,local_80 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_58,pvVar1,lVar2 * 2);
  }
  pvVar1 = local_78;
  lVar2 = (longlong)(int)local_70;
  local_48 = (void *)0x0;
  local_40 = (int)local_70;
  if ((int)local_70 == 0) {
    local_3c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_70 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_48,pvVar1,lVar2 * 2);
  }
  pvVar1 = local_68;
  lVar2 = (longlong)(int)local_60;
  local_38 = (void *)0x0;
  local_30 = (int)local_60;
  if ((int)local_60 == 0) {
    local_2c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_60 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_38,pvVar1,lVar2 * 2);
  }
  FUN_140689e00(&local_38,&local_48,&local_58,puVar3);
  if (local_88 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14068c100 FUN_14068c100 body=354 status=ok
// SIG undefined FUN_14068c100(void)

void FUN_14068c100(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 local_res10 [8];
  undefined8 local_res20;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_res10[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar2 = &local_20;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar3 = local_res10;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14068a320(local_28,local_res20,puVar2,puVar3);
  return;
}



// FUNCTION 14068c270 FUN_14068c270 body=108 status=ok
// SIG undefined FUN_14068c270(void)

void FUN_14068c270(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  if (puVar2 != (undefined8 *)0x0) {
    FSelfRegisteringExec::FSelfRegisteringExec(puVar2);
    *puVar2 = &PTR_FUN_144044660;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *(undefined4 *)(puVar2 + 1) = 0xffffffff;
    puVar2[2] = 0;
    puVar2[3] = 0;
  }
  puVar1 = DAT_146857e08;
  DAT_146857e08 = puVar2;
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014068c2d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar1)(puVar1,1);
  return;
}



// FUNCTION 14068c310 FUN_14068c310 body=107 status=ok
// SIG undefined FUN_14068c310(void)

void FUN_14068c310(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  (**(code **)(*param_2 + 0x38))(param_2,&DAT_146857e00,0,0);
  lVar1 = DAT_146857ef0 + (longlong)DAT_146857ef8 * 8;
  for (lVar2 = DAT_146857ef0; lVar2 != lVar1; lVar2 = lVar2 + 8) {
    (**(code **)(*param_2 + 0x38))(param_2,lVar2,0,0);
  }
  return;
}



// FUNCTION 14068c380 FUN_14068c380 body=105 status=ok
// SIG undefined FUN_14068c380(void)

undefined8 * FUN_14068c380(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_144042b28;
  param_1[1] = &PTR__scalar_deleting_destructor__143f73ca8;
  if ((DAT_1469e6880 != 0) && (*(char *)(param_1 + 2) != '\0')) {
    UGCObjectReferencer::RemoveObject();
  }
  *param_1 = IModuleInterface::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14068c3f0 FUN_14068c3f0 body=359 status=ok
// SIG undefined FUN_14068c3f0(void)

undefined8 * FUN_14068c3f0(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar4 = *param_3;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  plVar8 = (longlong *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 0x10,local_18)
  ;
  plVar3 = (longlong *)plVar8[1];
  lVar11 = *plVar8 + -8;
  if (*plVar8 == 0) {
    lVar11 = 0;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  puVar9 = (undefined8 *)operator_new(0x38,param_1);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &PTR_GetPoolName_143f77e98;
    puVar9[1] = lVar11;
    puVar9[2] = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar9 + 3) = uVar4;
    *(undefined4 *)((longlong)puVar9 + 0x1c) = uVar5;
    *(undefined4 *)(puVar9 + 4) = uVar6;
    *(undefined4 *)((longlong)puVar9 + 0x24) = uVar7;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[6] = uVar10;
    *puVar9 = &PTR_GetPoolName_143f77ee0;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar3 + 1;
    lVar11 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar3 + 1;
      lVar11 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_10 + 1;
    lVar11 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar1 = (int *)((longlong)local_10 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 14068c560 FUN_14068c560 body=349 status=ok
// SIG undefined FUN_14068c560(void)

undefined8 * FUN_14068c560(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar4 = *param_3;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  plVar8 = (longlong *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 0x10,local_18)
  ;
  plVar3 = (longlong *)plVar8[1];
  lVar11 = *plVar8 + -8;
  if (*plVar8 == 0) {
    lVar11 = 0;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  puVar9 = (undefined8 *)operator_new(0x38,param_1);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &PTR_GetPoolName_144044868;
    puVar9[1] = lVar11;
    puVar9[2] = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar9 + 3) = uVar4;
    *(undefined4 *)((longlong)puVar9 + 0x1c) = uVar5;
    *(undefined4 *)(puVar9 + 4) = uVar6;
    *(undefined4 *)((longlong)puVar9 + 0x24) = uVar7;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[6] = uVar10;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar3 + 1;
    lVar11 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar3 + 1;
      lVar11 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_10 + 1;
    lVar11 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar1 = (int *)((longlong)local_10 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 14068c6c0 FUN_14068c6c0 body=349 status=ok
// SIG undefined FUN_14068c6c0(void)

undefined8 * FUN_14068c6c0(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar4 = *param_3;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  plVar8 = (longlong *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 0x10,local_18)
  ;
  plVar3 = (longlong *)plVar8[1];
  lVar11 = *plVar8 + -8;
  if (*plVar8 == 0) {
    lVar11 = 0;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  puVar9 = (undefined8 *)operator_new(0x38,param_1);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &PTR_GetPoolName_1440448a8;
    puVar9[1] = lVar11;
    puVar9[2] = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar9 + 3) = uVar4;
    *(undefined4 *)((longlong)puVar9 + 0x1c) = uVar5;
    *(undefined4 *)(puVar9 + 4) = uVar6;
    *(undefined4 *)((longlong)puVar9 + 0x24) = uVar7;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[6] = uVar10;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar3 + 1;
    lVar11 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar3 + 1;
      lVar11 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_10 + 1;
    lVar11 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar1 = (int *)((longlong)local_10 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 14068c820 FUN_14068c820 body=338 status=ok
// SIG undefined FUN_14068c820(void)

undefined8 * FUN_14068c820(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  puVar10 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 8,local_18)
  ;
  plVar4 = (longlong *)puVar10[1];
  uVar11 = *puVar10;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  puVar10 = (undefined8 *)operator_new(0x38,param_1);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_GetPoolName_144043770;
    puVar10[1] = uVar11;
    puVar10[2] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar10 + 3) = uVar5;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar6;
    *(undefined4 *)(puVar10 + 4) = uVar7;
    *(undefined4 *)((longlong)puVar10 + 0x24) = uVar8;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[6] = uVar11;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_10 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)local_10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 14068c980 FUN_14068c980 body=349 status=ok
// SIG undefined FUN_14068c980(void)

undefined8 * FUN_14068c980(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar4 = *param_3;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  plVar8 = (longlong *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 0x10,local_18)
  ;
  plVar3 = (longlong *)plVar8[1];
  lVar11 = *plVar8 + -8;
  if (*plVar8 == 0) {
    lVar11 = 0;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  puVar9 = (undefined8 *)operator_new(0x38,param_1);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &PTR_GetPoolName_144043f20;
    puVar9[1] = lVar11;
    puVar9[2] = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar9 + 3) = uVar4;
    *(undefined4 *)((longlong)puVar9 + 0x1c) = uVar5;
    *(undefined4 *)(puVar9 + 4) = uVar6;
    *(undefined4 *)((longlong)puVar9 + 0x24) = uVar7;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[6] = uVar10;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar3 + 1;
    lVar11 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar3 + 1;
      lVar11 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_10 + 1;
    lVar11 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar1 = (int *)((longlong)local_10 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 14068cae0 FUN_14068cae0 body=338 status=ok
// SIG undefined FUN_14068cae0(void)

undefined8 * FUN_14068cae0(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  puVar10 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 8,local_18)
  ;
  plVar4 = (longlong *)puVar10[1];
  uVar11 = *puVar10;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  puVar10 = (undefined8 *)operator_new(0x38,param_1);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_GetPoolName_144044600;
    puVar10[1] = uVar11;
    puVar10[2] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar10 + 3) = uVar5;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar6;
    *(undefined4 *)(puVar10 + 4) = uVar7;
    *(undefined4 *)((longlong)puVar10 + 0x24) = uVar8;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[6] = uVar11;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_10 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)local_10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 14068cc40 FUN_14068cc40 body=338 status=ok
// SIG undefined FUN_14068cc40(void)

undefined8 * FUN_14068cc40(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  puVar10 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 8,local_18)
  ;
  plVar4 = (longlong *)puVar10[1];
  uVar11 = *puVar10;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  puVar10 = (undefined8 *)operator_new(0x38,param_1);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_GetPoolName_144044540;
    puVar10[1] = uVar11;
    puVar10[2] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar10 + 3) = uVar5;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar6;
    *(undefined4 *)(puVar10 + 4) = uVar7;
    *(undefined4 *)((longlong)puVar10 + 0x24) = uVar8;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[6] = uVar11;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_10 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)local_10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 14068cda0 FUN_14068cda0 body=509 status=ok
// SIG undefined FUN_14068cda0(void)

int * FUN_14068cda0(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  void *_Dst;
  bool bVar11;
  int local_38 [2];
  longlong *local_30;
  
  TSparseArray<TSetElement<TTuple<FName,FNameArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  *param_2 = local_38[0];
  *local_30 = *param_3;
  local_30[1] = param_3[1];
  lVar3 = param_3[2];
  local_30[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  bVar11 = false;
  *(undefined4 *)(local_30 + 3) = 0xffffffff;
  iVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar10 != 1) {
    lVar3 = *local_30;
    iVar8 = -1;
    iVar7 = iVar8;
    if (iVar10 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar5 +
                      ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar6 != -1) {
        do {
          iVar7 = iVar6;
          if (*(longlong *)((longlong)iVar6 * 0x20 + *param_1) == lVar3) break;
          iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + *param_1);
          iVar7 = iVar8;
        } while (iVar6 != -1);
      }
    }
    bVar11 = iVar7 != -1;
    if (bVar11) {
      _Dst = (void *)((longlong)iVar7 * 0x20 + *param_1);
      plVar5 = *(longlong **)((longlong)_Dst + 0x10);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,local_30,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar7;
      goto LAB_14068cf75;
    }
  }
  cVar4 = TSet<TTuple<FName,FNameArray>,TDefaultMapHashableKeyFuncs<FName,FNameArray,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar10,0);
  if (cVar4 == '\0') {
    uVar9 = (int)((ulonglong)*local_30 >> 0x20) + (int)*local_30 & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x1c) = uVar9;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 3) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
         *param_2;
  }
LAB_14068cf75:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 14068cfa0 FUN_14068cfa0 body=641 status=ok
// SIG undefined FUN_14068cfa0(void)

int * FUN_14068cfa0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  ulonglong *_Src;
  int iVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  int local_res8 [2];
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar13 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar13 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar13 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                ();
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2);
  }
  else {
    iVar13 = (int)param_1[6];
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar4 = *(int *)(*param_1 + 4 + (longlong)iVar13 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = iVar13;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar9 + (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  lVar8 = (longlong)iVar13;
  *puVar3 = *puVar3 | 1 << ((byte)iVar13 & 0x1f);
  lVar12 = *param_1;
  *(undefined8 *)(lVar12 + lVar8 * 0x18) = *param_3;
  lVar5 = param_3[1];
  *(longlong *)(lVar12 + 8 + lVar8 * 0x18) = lVar5;
  _Src = (ulonglong *)(lVar12 + lVar8 * 0x18);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(_Src + 2) = 0xffffffff;
  bVar15 = false;
  iVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar13 != 1) {
    TSet<TSharedRef<SWidget,0>,DefaultKeyFuncs<TSharedRef<SWidget,0>,0>,FDefaultSetAllocator>::
    FindId(param_1,local_res8,_Src);
    lVar12 = (longlong)local_res8[0];
    bVar15 = local_res8[0] != -1;
    if (bVar15) {
      lVar5 = *param_1;
      plVar9 = *(longlong **)(lVar5 + 8 + lVar12 * 0x18);
      iVar13 = local_res8[0];
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar9 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          iVar13 = local_res8[0];
          if (iVar4 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
            iVar13 = local_res8[0];
          }
        }
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar5 + lVar12 * 0x18),_Src,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar13;
      goto LAB_14068d200;
    }
  }
  cVar6 = TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar13,0);
  if (cVar6 == '\0') {
    iVar13 = (int)(*_Src >> 4);
    uVar11 = 0x9e3779b9U - iVar13 ^ iVar13 << 8;
    uVar14 = -(uVar11 + iVar13) ^ uVar11 >> 0xd;
    uVar10 = (iVar13 - uVar11) - uVar14 ^ uVar14 >> 0xc;
    uVar11 = (uVar11 - uVar10) - uVar14 ^ uVar10 << 0x10;
    uVar14 = (uVar14 - uVar11) - uVar10 ^ uVar11 >> 5;
    uVar10 = (uVar10 - uVar11) - uVar14 ^ uVar14 >> 3;
    uVar11 = (uVar11 - uVar10) - uVar14 ^ uVar10 << 10;
    uVar10 = ((uVar14 - uVar11) - uVar10 ^ uVar11 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x14) = uVar10;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
LAB_14068d200:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar15;
  }
  return param_2;
}



// FUNCTION 14068d230 FUN_14068d230 body=749 status=ok
// SIG undefined FUN_14068d230(void)

int * FUN_14068d230(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  char cVar13;
  uint uVar14;
  void *_Dst;
  uint uVar15;
  ulonglong *_Src;
  bool local_res8;
  int local_res10 [2];
  
  iVar12 = 1;
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
    iVar5 = *(int *)((longlong)iVar11 * 0x20 + 4 + *param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar5;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar5 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar10 = (longlong *)param_1[4];
  *param_2 = iVar11;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = param_1 + 2;
  }
  puVar4 = (uint *)((longlong)plVar10 +
                   (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar4 = *puVar4 | 1 << ((byte)iVar11 & 0x1f);
  puVar6 = (ulonglong *)param_3[1];
  _Src = (ulonglong *)((longlong)iVar11 * 0x20 + *param_1);
  *_Src = *(ulonglong *)*param_3;
  _Src[1] = *puVar6;
  uVar7 = puVar6[1];
  _Src[2] = uVar7;
  if (uVar7 != 0) {
    LOCK();
    *(int *)(uVar7 + 8) = *(int *)(uVar7 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  uVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar15 != 1) {
    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res10,*_Src);
    local_res8 = local_res10[0] != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)local_res10[0] * 0x20 + *param_1);
      plVar10 = *(longlong **)((longlong)_Dst + 0x10);
      iVar12 = local_res10[0];
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar10 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar3 = (int *)((longlong)plVar10 + 0xc);
          iVar11 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          iVar12 = local_res10[0];
          if (iVar11 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
            iVar12 = local_res10[0];
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar12;
      goto LAB_14068d4f7;
    }
  }
  if (3 < uVar15) {
    uVar9 = (uVar15 >> 1) + 8;
    iVar12 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    iVar11 = 0x20;
    cVar13 = '\0';
    if (uVar9 != 0) {
      iVar11 = 0x1f - iVar12;
    }
    uVar9 = (uVar15 >> 1) + 7;
    iVar12 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uVar9 != 0) {
      cVar13 = '\x1f' - (char)iVar12;
    }
    iVar12 = 1 << (~(byte)((iVar11 << 0x1a) >> 0x1f) & 0x20U - cVar13 & 0x1f);
  }
  if (((int)uVar15 < 1) || (((int)param_1[9] != 0 && (iVar12 <= (int)param_1[9])))) {
    iVar12 = (int)(*_Src >> 4);
    uVar9 = 0x9e3779b9U - iVar12 ^ iVar12 << 8;
    uVar14 = -(iVar12 + uVar9) ^ uVar9 >> 0xd;
    uVar15 = (iVar12 - uVar9) - uVar14 ^ uVar14 >> 0xc;
    uVar9 = (uVar9 - uVar15) - uVar14 ^ uVar15 << 0x10;
    uVar14 = (uVar14 - uVar9) - uVar15 ^ uVar9 >> 5;
    uVar15 = (uVar15 - uVar9) - uVar14 ^ uVar14 >> 3;
    uVar9 = (uVar9 - uVar15) - uVar14 ^ uVar15 << 10;
    uVar15 = ((uVar14 - uVar9) - uVar15 ^ uVar9 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x1c) = uVar15;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar12;
    TSet<TTuple<UFlareCompany_*,TArray<AIIdleShip_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<UFlareCompany_*,TArray<AIIdleShip_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_14068d4f7:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 14068d520 FUN_14068d520 body=708 status=ok
// SIG undefined FUN_14068d520(void)

int * FUN_14068d520(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  uint *puVar1;
  ulonglong *_Src;
  void *_Dst;
  int iVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  int local_res8 [2];
  
  iVar10 = 1;
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
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar12 * 0x28);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar12;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar12 & 0x1f);
  _Src = (ulonglong *)(*param_1 + (longlong)iVar12 * 0x28);
  puVar3 = (ulonglong *)*param_3;
  puVar4 = (ulonglong *)param_3[1];
  *_Src = *puVar3;
  uVar5 = puVar3[1];
  _Src[1] = uVar5;
  if (uVar5 != 0) {
    LOCK();
    *(int *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1;
    UNLOCK();
  }
  _Src[2] = *puVar4;
  uVar5 = puVar4[1];
  _Src[3] = uVar5;
  if (uVar5 != 0) {
    LOCK();
    *(int *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(_Src + 4) = 0xffffffff;
  bVar14 = false;
  uVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar11 != 1) {
    TSet<TTuple<TSharedRef<FUniqueNetId_const_,0>,FString>,TDefaultMapHashableKeyFuncs<TSharedRef<FUniqueNetId_const_,0>,FString,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    bVar14 = local_res8[0] != -1;
    if (bVar14) {
      _Dst = (void *)(*param_1 + (longlong)local_res8[0] * 0x28);
      UE::Core::Private::Tuple::
      TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<FUniqueNetId_const_,1>,TSharedRef<TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>_const_,1>_>
      ::
      ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<FUniqueNetId_const_,1>,TSharedRef<TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>_const_,1>_>
                (_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_14068d7bb;
    }
  }
  if (3 < uVar11) {
    uVar7 = (uVar11 >> 1) + 8;
    iVar10 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    iVar12 = 0x20;
    cVar9 = '\0';
    if (uVar7 != 0) {
      iVar12 = 0x1f - iVar10;
    }
    uVar7 = (uVar11 >> 1) + 7;
    iVar10 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar7 != 0) {
      cVar9 = '\x1f' - (char)iVar10;
    }
    iVar10 = 1 << (~(byte)((iVar12 << 0x1a) >> 0x1f) & 0x20U - cVar9 & 0x1f);
  }
  if (((int)uVar11 < 1) || (((int)param_1[9] != 0 && (iVar10 <= (int)param_1[9])))) {
    iVar10 = (int)(*_Src >> 4);
    uVar7 = 0x9e3779b9U - iVar10 ^ iVar10 << 8;
    uVar13 = -(iVar10 + uVar7) ^ uVar7 >> 0xd;
    uVar11 = (iVar10 - uVar7) - uVar13 ^ uVar13 >> 0xc;
    uVar7 = (uVar7 - uVar11) - uVar13 ^ uVar11 << 0x10;
    uVar13 = (uVar13 - uVar7) - uVar11 ^ uVar7 >> 5;
    uVar11 = (uVar11 - uVar7) - uVar13 ^ uVar13 >> 3;
    uVar7 = (uVar7 - uVar11) - uVar13 ^ uVar11 << 10;
    uVar11 = ((uVar13 - uVar7) - uVar11 ^ uVar7 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x24) = uVar11;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 4) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    TSet<TTuple<TSharedRef<FUniqueNetId_const_,0>,FString>,TDefaultMapHashableKeyFuncs<TSharedRef<FUniqueNetId_const_,0>,FString,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_14068d7bb:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar14;
  }
  return param_2;
}



// FUNCTION 14068d7f0 FUN_14068d7f0 body=509 status=ok
// SIG undefined FUN_14068d7f0(void)

int * FUN_14068d7f0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  void *_Dst;
  bool bVar11;
  int local_38 [2];
  longlong *local_30;
  
  TSparseArray<TSetElement<TTuple<FName,FNameArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  plVar5 = (longlong *)param_3[1];
  *param_2 = local_38[0];
  *local_30 = *(longlong *)*param_3;
  local_30[1] = *plVar5;
  lVar3 = plVar5[1];
  local_30[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  bVar11 = false;
  *(undefined4 *)(local_30 + 3) = 0xffffffff;
  iVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar10 != 1) {
    lVar3 = *local_30;
    iVar8 = -1;
    iVar7 = iVar8;
    if (iVar10 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar5 +
                      ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar6 != -1) {
        do {
          iVar7 = iVar6;
          if (*(longlong *)((longlong)iVar6 * 0x20 + *param_1) == lVar3) break;
          iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + *param_1);
          iVar7 = iVar8;
        } while (iVar6 != -1);
      }
    }
    bVar11 = iVar7 != -1;
    if (bVar11) {
      _Dst = (void *)((longlong)iVar7 * 0x20 + *param_1);
      plVar5 = *(longlong **)((longlong)_Dst + 0x10);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,local_30,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar7;
      goto LAB_14068d9c5;
    }
  }
  cVar4 = TSet<TTuple<FName,FNameArray>,TDefaultMapHashableKeyFuncs<FName,FNameArray,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar10,0);
  if (cVar4 == '\0') {
    uVar9 = (int)((ulonglong)*local_30 >> 0x20) + (int)*local_30 & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x1c) = uVar9;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 3) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
         *param_2;
  }
LAB_14068d9c5:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 14068d9f0 HeapSortInternal<FGuid,FIdentityFunctor,TDereferenceWrapper<FGuid,<lambda_69ebcaf6a85496070129319141a5d198>_>_> body=471 status=ok
// SIG undefined HeapSortInternal<FGuid,FIdentityFunctor,TDereferenceWrapper<FGuid,<lambda_69ebcaf6a85496070129319141a5d198>_>_>(void)

void AlgoImpl::
     HeapSortInternal<FGuid,FIdentityFunctor,TDereferenceWrapper<FGuid,<lambda_69ebcaf6a85496070129319141a5d198>_>_>
               (undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 *puVar14;
  
  iVar7 = (param_2 + -2) / 2;
  if (-1 < iVar7) {
    iVar8 = iVar7 * 2 + 1;
    iVar10 = iVar8;
    iVar13 = iVar7;
joined_r0x00014068da36:
    do {
      if (iVar8 < param_2) {
        iVar8 = iVar7 * 2;
        iVar9 = iVar8 + 1;
        if (iVar8 + 2 < param_2) {
          cVar6 = FUN_140692dd0(param_4,param_1 + (longlong)(iVar8 + 2) * 2,
                                param_1 + (longlong)iVar9 * 2);
          if (cVar6 != '\0') {
            iVar9 = iVar8;
          }
          iVar9 = iVar9 + 1;
        }
        puVar11 = param_1 + (longlong)iVar9 * 2;
        puVar14 = param_1 + (longlong)iVar7 * 2;
        cVar6 = FUN_140692dd0(param_4,puVar14,puVar11);
        if (cVar6 != '\0') {
          if (puVar14 != puVar11) {
            uVar1 = *(undefined4 *)((longlong)puVar11 + 4);
            uVar2 = *(undefined4 *)(puVar11 + 1);
            uVar3 = *(undefined4 *)((longlong)puVar11 + 0xc);
            uVar4 = *puVar14;
            uVar5 = puVar14[1];
            *(undefined4 *)puVar14 = *(undefined4 *)puVar11;
            *(undefined4 *)((longlong)puVar14 + 4) = uVar1;
            *(undefined4 *)(puVar14 + 1) = uVar2;
            *(undefined4 *)((longlong)puVar14 + 0xc) = uVar3;
            *puVar11 = uVar4;
            puVar11[1] = uVar5;
          }
          iVar8 = iVar9 * 2 + 1;
          iVar7 = iVar9;
          goto joined_r0x00014068da36;
        }
      }
      iVar8 = iVar10 + -2;
      iVar7 = iVar13 + -1;
      iVar10 = iVar8;
      iVar13 = iVar7;
    } while (-1 < iVar7);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar14 = param_1 + (longlong)param_2 * 2;
    do {
      if (param_1 != puVar14) {
        uVar1 = *(undefined4 *)((longlong)puVar14 + 4);
        uVar2 = *(undefined4 *)(puVar14 + 1);
        uVar3 = *(undefined4 *)((longlong)puVar14 + 0xc);
        uVar4 = *param_1;
        uVar5 = param_1[1];
        *(undefined4 *)param_1 = *(undefined4 *)puVar14;
        *(undefined4 *)((longlong)param_1 + 4) = uVar1;
        *(undefined4 *)(param_1 + 1) = uVar2;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
        *puVar14 = uVar4;
        puVar14[1] = uVar5;
      }
      iVar7 = 0;
      if (1 < param_2) {
        do {
          iVar8 = iVar7 * 2;
          iVar10 = iVar8 + 1;
          if (iVar8 + 2 < param_2) {
            cVar6 = FUN_140692dd0(param_4,param_1 + (longlong)(iVar8 + 2) * 2,
                                  param_1 + (longlong)iVar10 * 2);
            if (cVar6 != '\0') {
              iVar10 = iVar8;
            }
            iVar10 = iVar10 + 1;
          }
          puVar12 = param_1 + (longlong)iVar10 * 2;
          puVar11 = param_1 + (longlong)iVar7 * 2;
          cVar6 = FUN_140692dd0(param_4,puVar11,puVar12);
          if (cVar6 == '\0') break;
          if (puVar11 != puVar12) {
            uVar1 = *(undefined4 *)((longlong)puVar12 + 4);
            uVar2 = *(undefined4 *)(puVar12 + 1);
            uVar3 = *(undefined4 *)((longlong)puVar12 + 0xc);
            uVar4 = *puVar11;
            uVar5 = puVar11[1];
            *(undefined4 *)puVar11 = *(undefined4 *)puVar12;
            *(undefined4 *)((longlong)puVar11 + 4) = uVar1;
            *(undefined4 *)(puVar11 + 1) = uVar2;
            *(undefined4 *)((longlong)puVar11 + 0xc) = uVar3;
            *puVar12 = uVar4;
            puVar12[1] = uVar5;
          }
          iVar7 = iVar10;
        } while (iVar10 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar14 = puVar14 + -2;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 14068dbd0 Init<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>_> body=219 status=ok
// SIG undefined Init<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>_>(void)

void TSharedRef<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>::
     Init<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>_>
               (longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)(param_2 + 0x10);
  if (param_2 == 0) {
    plVar6 = (longlong *)0x0;
  }
  if (plVar6 != (longlong *)0x0) {
    if ((*plVar6 != 0) && (plVar6[1] != 0)) {
      piVar1 = (int *)(plVar6[1] + 8);
      LOCK();
      iVar4 = *piVar1;
      if (iVar4 == 0) {
        *piVar1 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) {
        return;
      }
    }
    plVar2 = *(longlong **)(param_1 + 8);
    plVar5 = (longlong *)(param_2 + 8);
    if (param_2 == 0) {
      plVar5 = (longlong *)0x0;
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    *plVar6 = (longlong)plVar5;
    plVar5 = (longlong *)plVar6[1];
    if (plVar2 != plVar5) {
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
        UNLOCK();
        plVar5 = (longlong *)plVar6[1];
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      plVar6[1] = (longlong)plVar2;
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar2 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 14068dcb0 Init<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>_> body=219 status=ok
// SIG undefined Init<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>_>(void)

void TSharedRef<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>::
     Init<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>_>
               (longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)(param_2 + 0x10);
  if (param_2 == 0) {
    plVar6 = (longlong *)0x0;
  }
  if (plVar6 != (longlong *)0x0) {
    if ((*plVar6 != 0) && (plVar6[1] != 0)) {
      piVar1 = (int *)(plVar6[1] + 8);
      LOCK();
      iVar4 = *piVar1;
      if (iVar4 == 0) {
        *piVar1 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) {
        return;
      }
    }
    plVar2 = *(longlong **)(param_1 + 8);
    plVar5 = (longlong *)(param_2 + 8);
    if (param_2 == 0) {
      plVar5 = (longlong *)0x0;
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    *plVar6 = (longlong)plVar5;
    plVar5 = (longlong *)plVar6[1];
    if (plVar2 != plVar5) {
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
        UNLOCK();
        plVar5 = (longlong *)plVar6[1];
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      plVar6[1] = (longlong)plVar2;
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar2 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 14068dd90 FUN_14068dd90 body=208 status=ok
// SIG undefined FUN_14068dd90(void)

void FUN_14068dd90(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)(param_2 + 8);
  if (param_2 == 0) {
    plVar6 = (longlong *)0x0;
  }
  if (plVar6 != (longlong *)0x0) {
    if ((*plVar6 != 0) && (plVar6[1] != 0)) {
      piVar1 = (int *)(plVar6[1] + 8);
      LOCK();
      iVar4 = *piVar1;
      if (iVar4 == 0) {
        *piVar1 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) {
        return;
      }
    }
    plVar2 = *(longlong **)(param_1 + 8);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    *plVar6 = param_2;
    plVar5 = (longlong *)plVar6[1];
    if (plVar2 != plVar5) {
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
        UNLOCK();
        plVar5 = (longlong *)plVar6[1];
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      plVar6[1] = (longlong)plVar2;
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar2 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 14068de60 IntroSortInternal<FGuid,FIdentityFunctor,TDereferenceWrapper<FGuid,<lambda_69ebcaf6a85496070129319141a5d198>_>_> body=702 status=ok
// SIG undefined IntroSortInternal<FGuid,FIdentityFunctor,TDereferenceWrapper<FGuid,<lambda_69ebcaf6a85496070129319141a5d198>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FGuid,FIdentityFunctor,TDereferenceWrapper<FGuid,<lambda_69ebcaf6a85496070129319141a5d198>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  float fVar16;
  undefined1 auStack_388 [48];
  longlong local_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
    lStack_340 = param_2 * 0x10 + -0x10 + param_1;
    fVar16 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar16 = fVar16 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar16 = ::_guard_xfg_dispatch_icall_nop(fVar16);
    local_338 = (undefined4)(longlong)(fVar16 + fVar16);
    ::_guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar12 = &local_348;
    do {
      puVar14 = (undefined8 *)*plVar12;
      puVar15 = (undefined8 *)plVar12[1];
      local_358 = plVar12[2];
      lVar7 = ((longlong)puVar15 - (longlong)puVar14 >> 4) + 1;
      puVar13 = puVar14;
      iVar11 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_14068df40:
        if (8 < lVar7) {
          puVar14 = puVar13 + (lVar7 / 2) * 2;
          if (puVar14 != puVar13) {
            uVar3 = *(undefined4 *)((longlong)puVar13 + 4);
            uVar4 = *(undefined4 *)(puVar13 + 1);
            uVar5 = *(undefined4 *)((longlong)puVar13 + 0xc);
            uVar1 = *puVar14;
            uVar2 = puVar14[1];
            *(undefined4 *)puVar14 = *(undefined4 *)puVar13;
            *(undefined4 *)((longlong)puVar14 + 4) = uVar3;
            *(undefined4 *)(puVar14 + 1) = uVar4;
            *(undefined4 *)((longlong)puVar14 + 0xc) = uVar5;
            *puVar13 = uVar1;
            puVar13[1] = uVar2;
          }
          puVar8 = puVar15 + 2;
          puVar14 = puVar13;
LAB_14068df76:
          puVar10 = puVar14;
          puVar14 = puVar10 + 2;
          if (puVar14 <= puVar15) goto code_r0x00014068df7f;
          goto LAB_14068df91;
        }
        for (; puVar8 = puVar13, puVar14 = puVar13, puVar13 < puVar15; puVar15 = puVar15 + -2) {
          while (puVar14 = puVar14 + 2, puVar14 <= puVar15) {
            cVar6 = FUN_140692dd0(param_4,puVar8,puVar14);
            if (cVar6 != '\0') {
              puVar8 = puVar14;
            }
          }
          if (puVar8 != puVar15) {
            uVar3 = *(undefined4 *)((longlong)puVar15 + 4);
            uVar4 = *(undefined4 *)(puVar15 + 1);
            uVar5 = *(undefined4 *)((longlong)puVar15 + 0xc);
            uVar1 = *puVar8;
            uVar2 = puVar8[1];
            *(undefined4 *)puVar8 = *(undefined4 *)puVar15;
            *(undefined4 *)((longlong)puVar8 + 4) = uVar3;
            *(undefined4 *)(puVar8 + 1) = uVar4;
            *(undefined4 *)((longlong)puVar8 + 0xc) = uVar5;
            *puVar15 = uVar1;
            puVar15[1] = uVar2;
          }
        }
        goto LAB_14068e066;
      }
LAB_14068e057:
      HeapSortInternal<FGuid,FIdentityFunctor,TDereferenceWrapper<FGuid,<lambda_69ebcaf6a85496070129319141a5d198>_>_>
                (puVar14,lVar7,param_3,param_4);
LAB_14068e066:
      plVar12 = plVar12 + -3;
    } while (&local_348 <= plVar12);
  }
  return;
code_r0x00014068df7f:
  cVar6 = FUN_140692dd0(param_4,puVar13,puVar14);
  if (cVar6 == '\0') goto LAB_14068df76;
LAB_14068df91:
  do {
    puVar9 = puVar8;
    puVar8 = puVar9 + -2;
    if (puVar8 <= puVar13) break;
    cVar6 = FUN_140692dd0(param_4,puVar8,puVar13);
  } while (cVar6 == '\0');
  if (puVar14 <= puVar8) {
    if (puVar14 != puVar8) {
      uVar3 = *(undefined4 *)((longlong)puVar9 + -0xc);
      uVar4 = *(undefined4 *)(puVar9 + -1);
      uVar5 = *(undefined4 *)((longlong)puVar9 + -4);
      uVar1 = *puVar14;
      uVar2 = puVar10[3];
      *(undefined4 *)puVar14 = *(undefined4 *)puVar8;
      *(undefined4 *)((longlong)puVar10 + 0x14) = uVar3;
      *(undefined4 *)(puVar10 + 3) = uVar4;
      *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar5;
      *puVar8 = uVar1;
      puVar9[-1] = uVar2;
    }
    goto LAB_14068df76;
  }
  if (puVar13 != puVar8) {
    uVar3 = *(undefined4 *)((longlong)puVar9 + -0xc);
    uVar4 = *(undefined4 *)(puVar9 + -1);
    uVar5 = *(undefined4 *)((longlong)puVar9 + -4);
    uVar1 = *puVar13;
    uVar2 = puVar13[1];
    *(undefined4 *)puVar13 = *(undefined4 *)puVar8;
    *(undefined4 *)((longlong)puVar13 + 4) = uVar3;
    *(undefined4 *)(puVar13 + 1) = uVar4;
    *(undefined4 *)((longlong)puVar13 + 0xc) = uVar5;
    *puVar8 = uVar1;
    puVar9[-1] = uVar2;
  }
  iVar11 = iVar11 + -1;
  if ((longlong)((longlong)puVar8 + (-0x10 - (longlong)puVar13) & 0xfffffffffffffff0U) <
      (longlong)((longlong)puVar15 - (longlong)puVar14 & 0xfffffffffffffff0U)) {
    if (puVar14 < puVar15) {
      *plVar12 = (longlong)puVar14;
      plVar12[1] = (longlong)puVar15;
      *(int *)(plVar12 + 2) = iVar11;
      plVar12 = plVar12 + 3;
    }
    if (puVar8 <= puVar13 + 2) goto LAB_14068e066;
    puVar15 = puVar9 + -4;
    puVar14 = puVar13;
  }
  else {
    if (puVar13 + 2 < puVar8) {
      *plVar12 = (longlong)puVar13;
      plVar12[1] = (longlong)(puVar9 + -4);
      *(int *)(plVar12 + 2) = iVar11;
      plVar12 = plVar12 + 3;
    }
    if (puVar15 <= puVar14) goto LAB_14068e066;
  }
  lVar7 = ((longlong)puVar15 - (longlong)puVar14 >> 4) + 1;
  puVar13 = puVar14;
  if (iVar11 == 0) goto LAB_14068e057;
  goto LAB_14068df40;
}



// FUNCTION 14068e120 MakeTDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs> body=182 status=ok
// SIG undefined MakeTDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs>(void)

longlong *
MakeTDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
          longlong param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(800);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_FUN_144044b78;
    if (puVar1 != (undefined8 *)0xfffffffffffffff0) {
      FUN_1419618a0();
    }
  }
  *param_1 = (longlong)(puVar1 + 2);
  param_1[1] = (longlong)puVar1;
  FUN_14044f790(param_1);
  param_1[2] = param_5;
  SWidget::SetDebugInfo(*param_1,param_2,param_3,param_4,0x310);
  return param_1;
}



// FUNCTION 14068e1e0 MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> body=182 status=ok
// SIG undefined MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(void)

longlong *
MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
          longlong param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x248);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_FUN_144044b58;
    if (puVar1 != (undefined8 *)0xfffffffffffffff0) {
      SHorizontalBox::SHorizontalBox();
    }
  }
  *param_1 = (longlong)(puVar1 + 2);
  param_1[1] = (longlong)puVar1;
  FUN_14044f790(param_1);
  param_1[2] = param_5;
  SWidget::SetDebugInfo(*param_1,param_2,param_3,param_4,0x238);
  return param_1;
}



// FUNCTION 14068e2a0 NewIntrusiveReferenceController<SExpanderArrow> body=224 status=ok
// SIG undefined NewIntrusiveReferenceController<SExpanderArrow>(void)

undefined8 * SharedPointerInternals::NewIntrusiveReferenceController<SExpanderArrow>(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x370);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_144044b68;
    if (_Dst != (undefined8 *)0x0) {
      ::_guard_xfg_dispatch_icall_nop(_Dst,0,0x360);
      FUN_1417f4470(_Dst);
      *_Dst = &PTR__scalar_deleting_destructor__144043040;
      puVar1[0x60] = 0;
      puVar1[0x61] = 0;
      puVar1[0x62] = 0;
      puVar1[99] = 0;
      *(undefined4 *)(puVar1 + 0x65) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x32c) = 0;
      puVar1[0x66] = 0;
      *(undefined4 *)(puVar1 + 0x67) = 0;
      *(undefined4 *)(puVar1 + 0x68) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x344) = 0;
      puVar1[0x69] = 0;
      *(undefined4 *)(puVar1 + 0x6a) = 0;
      *(undefined2 *)(puVar1 + 0x6b) = 0;
      puVar1[0x6c] = 0;
      *(undefined4 *)(puVar1 + 0x6d) = 0;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14068e380 NewIntrusiveReferenceController<SHeaderRow> body=210 status=ok
// SIG undefined NewIntrusiveReferenceController<SHeaderRow>(void)

undefined8 * SharedPointerInternals::NewIntrusiveReferenceController<SHeaderRow>(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x410);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_144044ae8;
    if (_Dst != (undefined8 *)0x0) {
      ::_guard_xfg_dispatch_icall_nop(_Dst,0,0x400);
      SBorder::SBorder(_Dst);
      *_Dst = &PTR__scalar_deleting_destructor__144042e18;
      puVar1[0x73] = 0;
      puVar1[0x74] = 0;
      puVar1[0x75] = 0;
      puVar1[0x76] = 0;
      *(undefined2 *)(puVar1 + 0x78) = 0x19;
      puVar1[0x79] = 0;
      *(undefined4 *)(puVar1 + 0x7a) = 0;
      puVar1[0x7c] = 0;
      puVar1[0x7d] = 0;
      puVar1[0x7e] = 2;
      puVar1[0x80] = 0;
      *(undefined4 *)(puVar1 + 0x81) = 0;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14068e460 FUN_14068e460 body=325 status=ok
// SIG undefined FUN_14068e460(void)

undefined8 * FUN_14068e460(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x4a8);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_144044ad8;
    if (_Dst != (undefined8 *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x498);
      SBorder::SBorder(_Dst);
      puVar1[0x73] = 0;
      puVar1[0x74] = 0;
      *(undefined1 *)(puVar1 + 0x75) = 0;
      puVar1[0x76] = 0;
      *(undefined4 *)(puVar1 + 0x77) = 0;
      puVar1[0x82] = 0;
      puVar1[0x78] = 0;
      puVar1[0x79] = 0;
      puVar1[0x7a] = 0;
      puVar1[0x7b] = 0;
      *(undefined4 *)(puVar1 + 0x83) = 0;
      puVar1[0x84] = 0;
      *(undefined4 *)(puVar1 + 0x85) = 0;
      puVar1[0x86] = 0;
      *(undefined4 *)(puVar1 + 0x87) = 0;
      puVar1[0x88] = 0;
      *(undefined4 *)(puVar1 + 0x89) = 0;
      puVar1[0x8a] = 0;
      *(undefined4 *)(puVar1 + 0x8b) = 0;
      puVar1[0x8c] = 0;
      puVar1[0x8d] = 0;
      *(undefined4 *)(puVar1 + 0x8e) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x474) = 0;
      puVar1[0x8f] = 0;
      puVar1[0x90] = 0;
      *(undefined4 *)(puVar1 + 0x91) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x48c) = 0;
      *_Dst = &PTR__scalar_deleting_destructor__144043530;
      puVar1[0x93] = 0;
      *(undefined4 *)(puVar1 + 0x94) = 0;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14068e5b0 FUN_14068e5b0 body=253 status=ok
// SIG undefined FUN_14068e5b0(void)

undefined8 * FUN_14068e5b0(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xba8);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_144044b08;
    if (_Dst != (undefined8 *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0xb98);
      FUN_14068ea40(_Dst);
      puVar1[0x8a] = 0;
      puVar1[0x8b] = 0;
      puVar1[0x8c] = 0;
      puVar1[0x8d] = 0;
      puVar1[0x90] = 0;
      puVar1[0x91] = 0;
      *(undefined4 *)(puVar1 + 0x92) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x494) = 0;
      puVar1[0x94] = 0;
      *(undefined4 *)(puVar1 + 0x95) = 0;
      *_Dst = &PTR_StartProfileThreadUsage_144043c58;
      puVar1[3] = &PTR_LAB_144043ce8;
      *(undefined1 *)((longlong)puVar1 + 0x4bc) = 0;
      puVar1[0x98] = 0;
      *(undefined4 *)(puVar1 + 0x99) = 0;
      puVar1[0x9a] = 0;
      puVar1[0x9b] = 0;
      FTableRowStyle::FTableRowStyle(puVar1 + 0x9e);
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14068e6b0 FUN_14068e6b0 body=228 status=ok
// SIG undefined FUN_14068e6b0(void)

undefined8 * FUN_14068e6b0(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)operator_new(0x1e10);
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar3 = puVar1 + 2;
  *(undefined4 *)(puVar1 + 1) = 1;
  *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
  *puVar1 = &PTR_LAB_144044b18;
  if (puVar3 != (undefined8 *)0x0) {
    _guard_xfg_dispatch_icall_nop(puVar3,0,0x1e00);
    FUN_1417f4470(puVar3);
    *puVar3 = &PTR__scalar_deleting_destructor__144044338;
    puVar1[0x60] = 0;
    puVar1[0x61] = 0;
    puVar1[0x62] = 0;
    puVar1[99] = 0;
    lVar2 = 6;
    puVar1[0x66] = 0;
    puVar1[0x67] = 0;
    puVar3 = puVar1 + 0x6e;
    *(undefined1 *)((longlong)puVar1 + 0x34c) = 0;
    puVar1[0x6a] = 0;
    *(undefined4 *)(puVar1 + 0x6b) = 0;
    do {
      FHyperlinkStyle::FHyperlinkStyle(puVar3);
      puVar3 = puVar3 + 0x8e;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return puVar1;
}



// FUNCTION 14068e7a0 FUN_14068e7a0 body=178 status=ok
// SIG undefined FUN_14068e7a0(void)

undefined8 * FUN_14068e7a0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x378);
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2 + 2;
    *(undefined4 *)(puVar2 + 1) = 1;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    *puVar2 = &PTR_LAB_144044b38;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_1419618a0(puVar1);
      *puVar1 = &PTR_FUN_1440437b0;
      puVar2[100] = 0;
      puVar2[0x65] = 0;
      *(undefined1 *)(puVar2 + 0x66) = 0;
      puVar2[0x67] = 0;
      *(undefined4 *)(puVar2 + 0x68) = 0;
      puVar2[0x69] = 0;
      puVar2[0x6a] = 0;
      puVar2[0x6c] = 0;
      puVar2[0x6d] = 0;
      puVar2[0x6e] = 0;
      *(byte *)(puVar2 + 5) = *(byte *)(puVar2 + 5) & 0xf9;
    }
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14068e860 FUN_14068e860 body=470 status=ok
// SIG undefined FUN_14068e860(void)

undefined8 * FUN_14068e860(undefined8 *param_1)

{
  FUN_1419a8fd0();
  *param_1 = &PTR__scalar_deleting_destructor__144043fe8;
  param_1[0x5e] = &PTR_LAB_144044268;
  param_1[0x84] = &PTR_IsPromotedBuild_144044288;
  param_1[0x85] = param_1;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  *(undefined4 *)((longlong)param_1 + 0x464) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  param_1[0x8e] = 0;
  *(undefined4 *)(param_1 + 0x8f) = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4b4) = 0;
  *(undefined4 *)(param_1 + 0x96) = 0xffffffff;
  param_1[0x98] = 0;
  *(undefined4 *)(param_1 + 0x99) = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  param_1[0xa3] = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  param_1[0xa5] = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  param_1[0xa7] = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  *(undefined4 *)((longlong)param_1 + 0x57c) = 0;
  *(undefined4 *)(param_1 + 0xaf) = 0xffffffff;
  param_1[0xb1] = 0;
  *(undefined4 *)(param_1 + 0xb2) = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  *(undefined4 *)(param_1 + 0xba) = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  *(undefined4 *)(param_1 + 0xbe) = 0;
  param_1[0xbf] = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  param_1[0xc1] = 0;
  *(undefined4 *)(param_1 + 0xc2) = 0;
  *(undefined2 *)(param_1 + 0xc3) = 0x101;
  param_1[0xc4] = 0;
  *(undefined4 *)(param_1 + 0xc5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x633) = 0;
  return param_1;
}



// FUNCTION 14068ea40 FUN_14068ea40 body=194 status=ok
// SIG undefined FUN_14068ea40(void)

undefined8 * FUN_14068ea40(undefined8 *param_1)

{
  *param_1 = &PTR__purecall_144043248;
  SBorder::SBorder(param_1 + 1);
  *param_1 = &PTR_StartProfileThreadUsage_1440439c0;
  param_1[1] = &PTR_LAB_144043a48;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3a4) = 1;
  param_1[0x77] = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  param_1[0x79] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3dc) = 0;
  param_1[0x7c] = 0;
  *(undefined4 *)(param_1 + 0x7d) = 0;
  param_1[0x7e] = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  param_1[0x80] = 0;
  *(undefined4 *)(param_1 + 0x81) = 0;
  param_1[0x82] = 0;
  *(undefined4 *)(param_1 + 0x83) = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  return param_1;
}



// FUNCTION 14068eb10 FUN_14068eb10 body=600 status=ok
// SIG undefined FUN_14068eb10(void)

longlong FUN_14068eb10(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0x41800000;
  *(undefined1 *)(param_1 + 0x154) = 1;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 3;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined1 *)(param_1 + 0x1d0) = 1;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined2 *)(param_1 + 0x1e8) = 0x19;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined2 *)(param_1 + 0x200) = 0;
  *(undefined1 *)(param_1 + 0x202) = 0;
  lVar1 = DAT_1469eb110;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    lVar4 = 4;
    if (DVar3 != DAT_1468c21c0) goto LAB_14068ed13;
  }
  lVar4 = 0;
LAB_14068ed13:
  *(undefined4 *)(param_1 + 0x204) = *(undefined4 *)(lVar1 + lVar4);
  *(undefined2 *)(param_1 + 0x208) = 0x101;
  *(undefined2 *)(param_1 + 0x210) = 0x101;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined4 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined4 *)(param_1 + 0x240) = 0;
  return param_1;
}



// FUNCTION 14068ed70 FUN_14068ed70 body=463 status=ok
// SIG undefined FUN_14068ed70(void)

longlong FUN_14068ed70(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  plVar2 = DAT_1469eb140;
  puVar3 = (undefined8 *)FName::FName(local_res8,"TableView.Row",1);
  local_res10 = *puVar3;
  local_res18 = local_res10;
  lVar4 = (**(code **)(*plVar2 + 0x80))(plVar2,DAT_1469eb1e0);
  if (lVar4 == 0) {
    lVar4 = FUN_1418352d0();
  }
  *(longlong *)(param_1 + 0x108) = lVar4;
  *(longlong **)(param_1 + 0x110) = DAT_1469eb140;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined1 *)(param_1 + 0x188) = 1;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined1 *)(param_1 + 0x1a0) = 1;
  *(undefined8 *)(param_1 + 0x1a8) = DAT_1469eb218;
  lVar4 = DAT_1469eb220;
  *(longlong *)(param_1 + 0x1b0) = DAT_1469eb220;
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 14068ef40 FUN_14068ef40 body=572 status=ok
// SIG undefined FUN_14068ef40(void)

longlong FUN_14068ef40(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  FText::FText(param_1 + 0x110);
  *(undefined1 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  FText::FText(param_1 + 0x140);
  *(undefined1 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x174) = 1;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined1 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined1 *)(param_1 + 0x194) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = DAT_1469eb218;
  lVar2 = DAT_1469eb220;
  *(longlong *)(param_1 + 0x1c0) = DAT_1469eb220;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined1 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 2;
  *(undefined8 *)(param_1 + 0x1e8) = DAT_1469eb218;
  lVar2 = DAT_1469eb220;
  *(longlong *)(param_1 + 0x1f0) = DAT_1469eb220;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined1 *)(param_1 + 0x204) = 1;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined1 *)(param_1 + 0x21c) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined4 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined4 *)(param_1 + 0x238) = 0;
  *(undefined2 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined4 *)(param_1 + 0x250) = 0;
  return param_1;
}



// FUNCTION 14068f180 FUN_14068f180 body=594 status=ok
// SIG undefined FUN_14068f180(void)

longlong FUN_14068f180(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 local_20;
  undefined4 local_18;
  
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined1 *)(param_1 + 0x120) = 1;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = DAT_1469eb218;
  lVar3 = DAT_1469eb220;
  *(longlong *)(param_1 + 0x140) = DAT_1469eb220;
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x148) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x14c) = 1;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x164) = 1;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x17c) = 1;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 400) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x194) = 1;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x1c4) = 1;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x1dc) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  uVar2 = DAT_1464b9eec;
  local_20 = 0;
  local_18 = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9eec;
  *(undefined1 *)(param_1 + 0x79) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=
            ((undefined8 *)(param_1 + 0x80),&local_20,param_3,param_4,uVar2);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  return param_1;
}



// FUNCTION 14068f3e0 FUN_14068f3e0 body=927 status=ok
// SIG undefined FUN_14068f3e0(void)

longlong FUN_14068f3e0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 local_res20 [8];
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 local_58 [8];
  undefined1 local_50 [32];
  longlong *local_30;
  
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = DAT_1469eb218;
  lVar8 = DAT_1469eb220;
  *(longlong *)(param_1 + 0x110) = DAT_1469eb220;
  if (lVar8 != 0) {
    LOCK();
    piVar1 = (int *)(lVar8 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  plVar2 = DAT_1469eb140;
  puVar7 = (undefined8 *)FName::FName(local_res8,"Button",1);
  local_res10 = *puVar7;
  local_res18 = local_res10;
  lVar8 = (**(code **)(*plVar2 + 0x80))(plVar2,DAT_1469eb160);
  if (lVar8 == 0) {
    lVar8 = FUN_141834930();
  }
  *(longlong *)(param_1 + 0x118) = lVar8;
  plVar2 = DAT_1469eb140;
  puVar7 = (undefined8 *)FName::FName(local_res20,"NormalText",1);
  uVar10 = *puVar7;
  uVar11 = uVar10;
  lVar8 = (**(code **)(*plVar2 + 0x80))(plVar2,DAT_1469eb158);
  if (lVar8 == 0) {
    lVar8 = FUN_141835350();
  }
  *(longlong *)(param_1 + 0x120) = lVar8;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0x40800000;
  *(undefined4 *)(param_1 + 0x134) = 0x40000000;
  *(undefined4 *)(param_1 + 0x138) = 0x40800000;
  *(undefined4 *)(param_1 + 0x13c) = 0x40000000;
  *(undefined1 *)(param_1 + 0x140) = 1;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  FText::FText(param_1 + 0x158);
  *(undefined1 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1ec) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1f0) = 1;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x20c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x210) = 1;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
  uVar6 = DAT_1464aa6cc;
  uVar5 = DAT_1464aa6c8;
  uVar4 = DAT_1464aa6c4;
  *(undefined4 *)(param_1 + 0x228) = DAT_1464aa6c0;
  *(undefined4 *)(param_1 + 0x22c) = uVar4;
  *(undefined4 *)(param_1 + 0x230) = uVar5;
  *(undefined4 *)(param_1 + 0x234) = uVar6;
  *(undefined1 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined1 *)(param_1 + 0x250) = 1;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined4 *)(param_1 + 0x260) = 0;
  plVar2 = DAT_1469eb140;
  lVar8 = *DAT_1469eb140;
  puVar7 = (undefined8 *)FName::FName(local_58,"InvertedForeground",1);
  puVar9 = (undefined4 *)(**(code **)(lVar8 + 0x30))(plVar2,local_50,*puVar7,0,uVar10,uVar11);
  uVar4 = puVar9[1];
  uVar5 = puVar9[2];
  uVar6 = puVar9[3];
  *(undefined4 *)(param_1 + 0x268) = *puVar9;
  *(undefined4 *)(param_1 + 0x26c) = uVar4;
  *(undefined4 *)(param_1 + 0x270) = uVar5;
  *(undefined4 *)(param_1 + 0x274) = uVar6;
  *(undefined1 *)(param_1 + 0x278) = *(undefined1 *)(puVar9 + 4);
  *(undefined8 *)(param_1 + 0x280) = *(undefined8 *)(puVar9 + 6);
  lVar8 = *(longlong *)(puVar9 + 8);
  *(longlong *)(param_1 + 0x288) = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 0x290) = 1;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x2a8) = 1;
  *(undefined1 *)(param_1 + 0x2c8) = 0;
  *(undefined1 *)(param_1 + 0x2e8) = 0;
  *(undefined1 *)(param_1 + 0x2f1) = 0;
  *(undefined1 *)(param_1 + 0x2f3) = 0;
  return param_1;
}



// FUNCTION 14068f780 FArguments body=279 status=ok
// SIG undefined FArguments(void)

longlong SCanvas::FArguments::FArguments
                   (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined8 local_20;
  undefined4 local_18;
  
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  uVar1 = DAT_1464b9eec;
  local_20 = 0;
  local_18 = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9eec;
  *(undefined1 *)(param_1 + 0x79) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=
            ((undefined8 *)(param_1 + 0x80),&local_20,param_3,param_4,uVar1);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  return param_1;
}



// FUNCTION 14068f8a0 FArguments body=305 status=ok
// SIG undefined FArguments(void)

longlong SExpanderArrow::FArguments::FArguments(longlong param_1)

{
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = DAT_1469eb140;
  *(undefined4 *)(param_1 + 0x110) = 0x41200000;
  *(undefined1 *)(param_1 + 0x114) = 1;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined1 *)(param_1 + 300) = 1;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined2 *)(param_1 + 0x140) = 0x100;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  return param_1;
}



// FUNCTION 14068f9e0 FArguments body=347 status=ok
// SIG undefined FArguments(void)

longlong SHeaderRow::FArguments::FArguments(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  plVar1 = DAT_1469eb140;
  puVar2 = (undefined8 *)FName::FName(local_res8,"TableView.Header",1);
  local_res10 = *puVar2;
  local_res18 = local_res10;
  lVar3 = (**(code **)(*plVar1 + 0x80))(plVar1,DAT_1469eb1f0);
  if (lVar3 == 0) {
    lVar3 = FUN_141834d80();
  }
  *(longlong *)(param_1 + 0x108) = lVar3;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x140) = 2;
  return param_1;
}



// FUNCTION 14068fb40 FArguments body=404 status=ok
// SIG undefined FArguments(void)

longlong SHyperlink::FArguments::FArguments(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  FText::FText(param_1 + 0x108);
  *(undefined1 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  plVar1 = DAT_1469eb140;
  puVar2 = (undefined8 *)FName::FName(local_res8,"Hyperlink",1);
  local_res10 = *puVar2;
  local_res18 = local_res10;
  lVar3 = (**(code **)(*plVar1 + 0x80))(plVar1,DAT_1469eb178);
  if (lVar3 == 0) {
    lVar3 = FUN_141834e00();
  }
  *(longlong *)(param_1 + 0x138) = lVar3;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined1 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined1 *)(param_1 + 0x189) = 0;
  *(undefined1 *)(param_1 + 0x18b) = 0;
  return param_1;
}



// FUNCTION 14068fce0 FUN_14068fce0 body=246 status=ok
// SIG undefined FUN_14068fce0(void)

longlong FUN_14068fce0(longlong param_1)

{
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined1 *)(param_1 + 0x124) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  return param_1;
}



// FUNCTION 14068fde0 FUN_14068fde0 body=347 status=ok
// SIG undefined FUN_14068fde0(void)

longlong FUN_14068fde0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined1 *)(param_1 + 0x120) = 1;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = DAT_1469eb218;
  lVar2 = DAT_1469eb220;
  *(longlong *)(param_1 + 0x140) = DAT_1469eb220;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x150) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x154) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x158) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x15c) = 0x1010101;
  return param_1;
}



// FUNCTION 14068ff40 FArguments body=786 status=ok
// SIG undefined FArguments(void)

longlong STextBlock::FArguments::FArguments(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  FText::FText(param_1 + 0x108);
  *(undefined1 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  plVar1 = DAT_1469eb140;
  puVar2 = (undefined8 *)FName::FName(local_res8,"NormalText",1);
  local_res10 = *puVar2;
  local_res18 = local_res10;
  lVar3 = (**(code **)(*plVar1 + 0x80))(plVar1,DAT_1469eb158);
  if (lVar3 == 0) {
    lVar3 = FUN_141835350();
  }
  *(longlong *)(param_1 + 0x138) = lVar3;
  FUN_1417efd90(param_1 + 0x140);
  *(undefined1 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1b0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1b4) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined1 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined1 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined1 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined4 *)(param_1 + 0x228) = 0;
  *(undefined1 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined1 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined4 *)(param_1 + 0x270) = 0;
  FText::FText(param_1 + 0x278);
  *(undefined1 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  *(undefined1 *)(param_1 + 0x2ac) = 1;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  *(undefined2 *)(param_1 + 0x2c0) = 0x100;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  *(undefined2 *)(param_1 + 0x2d8) = 0x100;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined4 *)(param_1 + 0x2e8) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined1 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined4 *)(param_1 + 0x310) = 0;
  *(undefined4 *)(param_1 + 0x318) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x31c) = 1;
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined4 *)(param_1 + 0x328) = 0;
  *(undefined4 *)(param_1 + 0x330) = 0;
  *(undefined1 *)(param_1 + 0x334) = 1;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined4 *)(param_1 + 0x340) = 0;
  *(undefined4 *)(param_1 + 0x348) = 0;
  *(undefined1 *)(param_1 + 0x34c) = 1;
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined4 *)(param_1 + 0x358) = 0;
  *(undefined1 *)(param_1 + 0x361) = 0;
  *(undefined1 *)(param_1 + 0x363) = 0;
  *(undefined8 *)(param_1 + 0x368) = 0;
  *(undefined8 *)(param_1 + 0x370) = 0;
  *(undefined8 *)(param_1 + 0x378) = 0;
  *(undefined4 *)(param_1 + 0x380) = 0;
  *(undefined1 *)(param_1 + 0xf1) = 4;
  return param_1;
}



// FUNCTION 140690260 FUN_140690260 body=897 status=ok
// SIG undefined FUN_140690260(void)

undefined8 *
FUN_140690260(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined8 local_20;
  undefined4 local_18;
  
  *param_1 = *(undefined8 *)(param_2 + 0x108);
  FText::FText(param_1 + 1,param_2 + 0x110);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 0x128);
  plVar7 = (longlong *)0x0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 5,param_2 + 0x130);
  FText::FText(param_1 + 7,param_2 + 0x140);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 0x158);
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0xb,param_2 + 0x160);
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x6c) = 1;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  if ((((longlong *)(param_2 + 0x1a8) != param_1 + 0x11) && (*(int *)(param_2 + 0x1b0) != 0)) &&
     (plVar2 = *(longlong **)(param_2 + 0x1a8), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x30))();
  }
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = *(undefined8 *)(param_2 + 0x1b8);
  lVar3 = *(longlong *)(param_2 + 0x1c0);
  param_1[0x15] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_1[0x16] = *(undefined8 *)(param_2 + 0x1e8);
  lVar3 = *(longlong *)(param_2 + 0x1f0);
  param_1[0x17] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x1c8);
  *(undefined4 *)((longlong)param_1 + 0xc4) = *(undefined4 *)(param_2 + 0x1cc);
  *(undefined1 *)(param_1 + 0x1b) = 0;
  if (*(char *)(param_2 + 0x1e0) != '\0') {
    uVar8 = *(undefined4 *)(param_2 + 0x1d4);
    uVar4 = *(undefined4 *)(param_2 + 0x1d8);
    uVar5 = *(undefined4 *)(param_2 + 0x1dc);
    *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x1d0);
    *(undefined4 *)((longlong)param_1 + 0xcc) = uVar8;
    *(undefined4 *)(param_1 + 0x1a) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0xd4) = uVar5;
    *(undefined1 *)(param_1 + 0x1b) = 1;
  }
  *(undefined4 *)((longlong)param_1 + 0xdc) = *(undefined4 *)(param_2 + 0x1e4);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1f8);
  *(undefined4 *)((longlong)param_1 + 0xe4) = *(undefined4 *)(param_2 + 0x1fc);
  *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(param_2 + 0x200);
  *(undefined1 *)((longlong)param_1 + 0xec) = *(undefined1 *)(param_2 + 0x204);
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if ((((longlong *)(param_2 + 0x208) != param_1 + 0x1e) && (*(int *)(param_2 + 0x210) != 0)) &&
     (plVar2 = *(longlong **)(param_2 + 0x208), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x30))();
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x218);
  *(undefined1 *)((longlong)param_1 + 0x104) = *(undefined1 *)(param_2 + 0x21c);
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  if ((((longlong *)(param_2 + 0x220) != param_1 + 0x21) && (*(int *)(param_2 + 0x228) != 0)) &&
     (plVar2 = *(longlong **)(param_2 + 0x220), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x30))();
  }
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if ((((longlong *)(param_2 + 0x230) != param_1 + 0x23) && (*(int *)(param_2 + 0x238) != 0)) &&
     (plVar2 = *(longlong **)(param_2 + 0x230), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x30))();
  }
  *(undefined1 *)(param_1 + 0x25) = *(undefined1 *)(param_2 + 0x240);
  *(undefined1 *)((longlong)param_1 + 0x129) = *(undefined1 *)(param_2 + 0x241);
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x26,param_2 + 0x248);
  puVar1 = param_1 + 0xe;
  if (*(char *)(param_2 + 0x18c) == '\0') {
    if (*(char *)(param_2 + 0x194) == '\0') {
      *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x170);
      *(undefined1 *)((longlong)param_1 + 0x6c) = *(undefined1 *)(param_2 + 0x174);
      TBaseDelegate<FSlateBrush_const_*>::operator=(puVar1,param_2 + 0x178);
      *(undefined4 *)(param_1 + 0x13) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 400);
      *(undefined1 *)((longlong)param_1 + 0x6c) = *(undefined1 *)(param_2 + 0x194);
      TBaseDelegate<FSlateBrush_const_*>::operator=(puVar1,param_2 + 0x198);
      *(undefined4 *)(param_1 + 0x13) = 2;
    }
  }
  else {
    uVar8 = *(undefined4 *)(param_2 + 0x188);
    *(undefined4 *)(param_1 + 0xd) = uVar8;
    local_20 = 0;
    local_18 = 0;
    *(undefined1 *)((longlong)param_1 + 0x6c) = 1;
    TBaseDelegate<FSlateBrush_const_*>::operator=(puVar1,&local_20,param_3,param_4,uVar8);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
    *(undefined4 *)(param_1 + 0x13) = 1;
  }
  if ((*(int *)(param_1 + 0xf) != 0) && ((longlong *)param_1[0xe] != (longlong *)0x0)) {
    cVar6 = (**(code **)(*(longlong *)param_1[0xe] + 0x18))();
    if (cVar6 != '\0') {
      if (*(int *)(param_1 + 0xf) != 0) {
        plVar7 = (longlong *)param_1[0xe];
      }
      uVar8 = (**(code **)(*plVar7 + 0x38))(plVar7);
      *(undefined4 *)(param_1 + 0xd) = uVar8;
    }
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0xd);
  return param_1;
}



// FUNCTION 1406905f0 FUN_1406905f0 body=148 status=ok
// SIG undefined FUN_1406905f0(void)

undefined8 * FUN_1406905f0(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_AsObject_143f60698;
  param_1[2] = 0;
  iVar3 = *(int *)(param_2 + 1);
  param_2 = (undefined8 *)*param_2;
  *(int *)(param_1 + 3) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 2,iVar3,0);
    puVar2 = (undefined8 *)param_1[2];
    do {
      *puVar2 = *param_2;
      lVar1 = param_2[1];
      puVar2[1] = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      puVar2 = puVar2 + 2;
      param_2 = param_2 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 5;
  return param_1;
}



// FUNCTION 140690690 FSlot body=228 status=ok
// SIG undefined FSlot(void)

undefined8 *
SHorizontalBox::FSlot::FSlot
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined4 local_18;
  
  FSlotBase::FSlotBase();
  *param_1 = &PTR__scalar_deleting_destructor__144042bf8;
  *(undefined2 *)(param_1 + 4) = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 1;
  local_28 = 0x3f800000;
  local_24 = 1;
  local_20 = 0;
  local_18 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_20,&local_40,param_3,param_4,0x3f800000);
  *(undefined4 *)(param_1 + 5) = local_30;
  *(undefined1 *)((longlong)param_1 + 0x34) = local_24;
  *(undefined4 *)(param_1 + 6) = local_28;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 7,&local_20);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_40);
  *(undefined1 *)(param_1 + 0xb) = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((longlong)param_1 + 0x74) = 1;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144042bf8;
  return param_1;
}



// FUNCTION 140690780 SHorizontalBox body=39 status=ok
// SIG undefined SHorizontalBox(void)

undefined8 * SHorizontalBox::SHorizontalBox(undefined8 *param_1)

{
  SBoxPanel::SBoxPanel(param_1,0);
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xf9;
  *param_1 = &PTR__scalar_deleting_destructor__144042c00;
  return param_1;
}



// FUNCTION 1406907b0 FUN_1406907b0 body=44 status=ok
// SIG undefined FUN_1406907b0(void)

undefined8 * FUN_1406907b0(undefined8 *param_1)

{
  FUN_1417818c0();
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_143fca7c0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x46;
  return param_1;
}



// FUNCTION 1406907e0 FUN_1406907e0 body=466 status=ok
// SIG undefined FUN_1406907e0(void)

void FUN_1406907e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x620);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x608);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x5f8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x5e8);
  plVar4 = *(longlong **)(param_1 + 0x5e0);
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
  plVar4 = *(longlong **)(param_1 + 0x5c8);
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
  plVar4 = *(longlong **)(param_1 + 0x5b0);
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
  plVar4 = *(longlong **)(param_1 + 0x5a0);
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
  *(undefined4 *)(param_1 + 0x590) = 0;
  if (*(longlong *)(param_1 + 0x588) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TSharedPtr<IMediaAudioSample,1>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x548,0);
  if (*(longlong *)(param_1 + 0x568) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x548) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x538);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x528);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x518);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x508);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x4f8);
  SListView<TSharedPtr<FProviderPollResult,1>_>::FWidgetGenerator::~FWidgetGenerator
            (param_1 + 0x428);
  FUN_140691d50(param_1);
  return;
}



// FUNCTION 1406909c0 FUN_1406909c0 body=174 status=ok
// SIG undefined FUN_1406909c0(void)

void FUN_1406909c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *(undefined4 *)(param_1 + 0x498) = 0;
  if (*(longlong *)(param_1 + 0x490) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x450,0);
  if (*(longlong *)(param_1 + 0x470) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x450) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x448);
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
  FUN_140690a70(param_1);
  return;
}



// FUNCTION 140690a70 FUN_140690a70 body=198 status=ok
// SIG undefined FUN_140690a70(void)

void FUN_140690a70(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x430);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x410);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x400);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3f0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3e0);
  if (*(char *)(param_1 + 0x3dc) != '\0') {
    *(undefined1 *)(param_1 + 0x3dc) = 0;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3c8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3b8);
  plVar3 = *(longlong **)(param_1 + 0x398);
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
  FUN_140691710(param_1 + 8);
  return;
}



// FUNCTION 140690b40 FUN_140690b40 body=243 status=ok
// SIG undefined FUN_140690b40(void)

void FUN_140690b40(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0xf8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xd8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xb8);
  if (*(char *)(param_1 + 0xb0) != '\0') {
    *(undefined1 *)(param_1 + 0xb0) = 0;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x80);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x68);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x50);
  if (*(char *)(param_1 + 0x44) != '\0') {
    *(undefined1 *)(param_1 + 0x44) = 0;
  }
  plVar4 = *(longlong **)(param_1 + 0x38);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x20);
  plVar4 = *(longlong **)(param_1 + 8);
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
  return;
}



// FUNCTION 140690c40 FUN_140690c40 body=183 status=ok
// SIG undefined FUN_140690c40(void)

void FUN_140690c40(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x1b0);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 400);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x168);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x158);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x148);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x138);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x128);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x118);
  FUN_140456c70(param_1);
  return;
}



// FUNCTION 140690d00 FUN_140690d00 body=411 status=ok
// SIG undefined FUN_140690d00(void)

void FUN_140690d00(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x248);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x230);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x220);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x208);
  plVar4 = *(longlong **)(param_1 + 0x1f0);
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
  if (*(char *)(param_1 + 0x1e0) != '\0') {
    *(undefined1 *)(param_1 + 0x1e0) = 0;
  }
  plVar4 = *(longlong **)(param_1 + 0x1c0);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1a8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x198);
  if (*(char *)(param_1 + 0x18c) != '\0') {
    *(undefined1 *)(param_1 + 0x18c) = 0;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x178);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x160);
  plVar4 = *(longlong **)(param_1 + 0x148);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x130);
  plVar4 = *(longlong **)(param_1 + 0x118);
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
  FUN_140456c70(param_1);
  return;
}



// FUNCTION 140690ea0 FUN_140690ea0 body=195 status=ok
// SIG undefined FUN_140690ea0(void)

void FUN_140690ea0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1e0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1c8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1b0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x198);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x180);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x168);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x150);
  plVar4 = *(longlong **)(param_1 + 0x140);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x128);
  FUN_140456c70(param_1);
  return;
}



// FUNCTION 140690f70 FUN_140690f70 body=467 status=ok
// SIG undefined FUN_140690f70(void)

void FUN_140690f70(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x2f3) != '\0') {
    *(undefined1 *)(param_1 + 0x2f3) = 0;
  }
  if (*(char *)(param_1 + 0x2f1) != '\0') {
    *(undefined1 *)(param_1 + 0x2f1) = 0;
  }
  if (*(char *)(param_1 + 0x2e8) != '\0') {
    *(undefined1 *)(param_1 + 0x2e8) = 0;
  }
  if (*(char *)(param_1 + 0x2c8) != '\0') {
    *(undefined1 *)(param_1 + 0x2c8) = 0;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x298);
  plVar4 = *(longlong **)(param_1 + 0x288);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 600);
  plVar4 = *(longlong **)(param_1 + 0x248);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x218);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1f8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1c8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1b8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1a8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x198);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x188);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x178);
  plVar4 = *(longlong **)(param_1 + 0x160);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x148);
  plVar4 = *(longlong **)(param_1 + 0x110);
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
  FUN_140456c70(param_1);
  return;
}



// FUNCTION 140691150 FUN_140691150 body=553 status=ok
// SIG undefined FUN_140691150(void)

void FUN_140691150(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x378);
  plVar4 = *(longlong **)(param_1 + 0x370);
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
  if (*(char *)(param_1 + 0x363) != '\0') {
    *(undefined1 *)(param_1 + 0x363) = 0;
  }
  if (*(char *)(param_1 + 0x361) != '\0') {
    *(undefined1 *)(param_1 + 0x361) = 0;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x350);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x338);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 800);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x308);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2e0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2c8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2b0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x298);
  plVar4 = *(longlong **)(param_1 + 0x280);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x268);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x248);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x220);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1f8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1d8);
  plVar4 = *(longlong **)(param_1 + 0x1c8);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x198);
  plVar4 = *(longlong **)(param_1 + 0x178);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x128);
  plVar4 = *(longlong **)(param_1 + 0x110);
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
  FUN_140456c70(param_1);
  return;
}



// FUNCTION 140691380 FUN_140691380 body=80 status=ok
// SIG undefined FUN_140691380(void)

void FUN_140691380(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__144042bb0;
  FSlateBrush::~FSlateBrush(param_1 + 0x34);
  FSlateBrush::~FSlateBrush(param_1 + 0x23);
  FSlateBrush::~FSlateBrush(param_1 + 0x12);
  FSlateBrush::~FSlateBrush(param_1 + 1);
  *param_1 = &PTR_FUN_144042b80;
  return;
}



// FUNCTION 1406913d0 ~FHyperlinkStyle body=107 status=ok
// SIG undefined ~FHyperlinkStyle(void)

void FHyperlinkStyle::~FHyperlinkStyle(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__144042bc8;
  FUN_140691580(param_1 + 0x50);
  param_1[1] = &PTR__scalar_deleting_destructor__144042bb0;
  FSlateBrush::~FSlateBrush(param_1 + 0x35);
  FSlateBrush::~FSlateBrush(param_1 + 0x24);
  FSlateBrush::~FSlateBrush(param_1 + 0x13);
  FSlateBrush::~FSlateBrush(param_1 + 2);
  param_1[1] = &PTR_FUN_144042b80;
  *param_1 = &PTR_FUN_144042b80;
  return;
}



// FUNCTION 140691440 FUN_140691440 body=309 status=ok
// SIG undefined FUN_140691440(void)

void FUN_140691440(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__144042be0;
  FSlateBrush::~FSlateBrush(param_1 + 0xc6);
  FSlateBrush::~FSlateBrush(param_1 + 0xb5);
  FSlateBrush::~FSlateBrush(param_1 + 0xa4);
  plVar4 = (longlong *)param_1[0xa3];
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
  plVar4 = (longlong *)param_1[0x9e];
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
  FSlateBrush::~FSlateBrush(param_1 + 0x89);
  FSlateBrush::~FSlateBrush(param_1 + 0x78);
  FSlateBrush::~FSlateBrush(param_1 + 0x67);
  FSlateBrush::~FSlateBrush(param_1 + 0x56);
  FSlateBrush::~FSlateBrush(param_1 + 0x45);
  FSlateBrush::~FSlateBrush(param_1 + 0x34);
  FSlateBrush::~FSlateBrush(param_1 + 0x23);
  FSlateBrush::~FSlateBrush(param_1 + 0x12);
  FSlateBrush::~FSlateBrush(param_1 + 1);
  *param_1 = &PTR_FUN_144042b80;
  return;
}



// FUNCTION 140691580 FUN_140691580 body=244 status=ok
// SIG undefined FUN_140691580(void)

void FUN_140691580(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__144042b98;
  FSlateBrush::~FSlateBrush(param_1 + 0x2b);
  FSlateBrush::~FSlateBrush(param_1 + 0x1a);
  plVar4 = (longlong *)param_1[0x17];
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
  plVar4 = (longlong *)param_1[0xf];
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
  plVar4 = (longlong *)param_1[8];
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
  *param_1 = &PTR_FUN_144042b80;
  return;
}



// FUNCTION 140691680 ~FWidgetGenerator body=143 status=ok
// SIG undefined ~FWidgetGenerator(void)

void SListView<TSharedPtr<FProviderPollResult,1>_>::FWidgetGenerator::~FWidgetGenerator
               (longlong param_1)

{
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0xc0);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x58,0);
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<TSharedRef<FUniqueNetId_const_,0>,TSharedRef<FOnlineUserStatsPair<FVariantData>,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<TSharedRef<FUniqueNetId_const_,0>,TSharedRef<FOnlineUserStatsPair<FVariantData>,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 8);
  return;
}



// FUNCTION 140691710 FUN_140691710 body=147 status=ok
// SIG undefined FUN_140691710(void)

void FUN_140691710(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x378);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x360);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x340);
  plVar4 = *(longlong **)(param_1 + 0x330);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x300);
  FUN_140458b70(param_1);
  return;
}



// FUNCTION 1406917b0 ~SBox body=144 status=ok
// SIG undefined ~SBox(void)

void SBox::~SBox(longlong param_1)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x300);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2e8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2d0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2b8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2a0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x288);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x270);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 600);
  FSlotBase::~FSlotBase(param_1 + 0x218);
  *(undefined ***)(param_1 + 0x208) = &PTR__purecall_143f48980;
  FUN_1417f85e0(param_1);
  return;
}



// FUNCTION 140691840 ~SBoxPanel body=211 status=ok
// SIG undefined ~SBoxPanel(void)

void SBoxPanel::~SBoxPanel(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  
  plVar1 = (longlong *)(param_1 + 0x218);
  plVar2 = (longlong *)*plVar1;
  for (iVar4 = *(int *)(param_1 + 0x220); iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar3 = (undefined8 *)*plVar2;
    *puVar3 = &PTR__scalar_deleting_destructor__144042bf8;
    TBaseDelegate<FText>::~TBaseDelegate<FText>(puVar3 + 0xf);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(puVar3 + 0xc);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(puVar3 + 7);
    FSlotBase::~FSlotBase(puVar3);
    FMemory::Free(*plVar2);
    plVar2 = plVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0x220) = 0;
  if (*(int *)(param_1 + 0x224) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  if (*plVar1 != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x208) = &PTR__purecall_143f48980;
  FUN_1417f85e0(param_1);
  return;
}



// FUNCTION 140691920 ~SCanvas body=178 status=ok
// SIG undefined ~SCanvas(void)

void SCanvas::~SCanvas(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  plVar1 = (longlong *)(param_1 + 0x218);
  plVar2 = (longlong *)*plVar1;
  for (iVar4 = *(int *)(param_1 + 0x220); iVar4 != 0; iVar4 = iVar4 + -1) {
    lVar3 = *plVar2;
    TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar3 + 0x50);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar3 + 0x30);
    FSlotBase::~FSlotBase(lVar3);
    FMemory::Free(*plVar2);
    plVar2 = plVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0x220) = 0;
  if (*(int *)(param_1 + 0x224) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  if (*plVar1 != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x208) = &PTR__purecall_143f48980;
  FUN_1417f85e0(param_1);
  return;
}



// FUNCTION 1406919e0 FUN_1406919e0 body=173 status=ok
// SIG undefined FUN_1406919e0(void)

void FUN_1406919e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x350);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x338);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 800);
  plVar4 = *(longlong **)(param_1 + 0x308);
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
  plVar4 = *(longlong **)(param_1 + 0x2f8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  FUN_140458b70(param_1);
  return;
}



// FUNCTION 140691a90 ~SHeaderRow body=141 status=ok
// SIG undefined ~SHeaderRow(void)

void SHeaderRow::~SHeaderRow(longlong param_1)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3f0);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x3d0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3b8);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x398);
  FUN_140697610(param_1 + 0x388);
  *(undefined4 *)(param_1 + 0x390) = 0;
  if (*(int *)(param_1 + 0x394) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x388,0);
  }
  if (*(longlong *)(param_1 + 0x388) != 0) {
    FMemory::Free();
  }
  FUN_140691710(param_1);
  return;
}



// FUNCTION 140691b20 ~SHyperlink body=106 status=ok
// SIG undefined ~SHyperlink(void)

void SHyperlink::~SHyperlink(longlong param_1)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x488);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x440);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x430);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x420);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x410);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x400);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3a0);
  FUN_140691710(param_1);
  return;
}



// FUNCTION 140691b90 FUN_140691b90 body=123 status=ok
// SIG undefined FUN_140691b90(void)

void FUN_140691b90(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FUN_140691440(param_1 + 0x4e0);
  plVar4 = *(longlong **)(param_1 + 0x4c8);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x4b0);
  FUN_1406909c0(param_1);
  return;
}



// FUNCTION 140691c10 FUN_140691c10 body=308 status=ok
// SIG undefined FUN_140691c10(void)

void FUN_140691c10(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)(param_1 + 0x1e00);
  lVar6 = 6;
  lVar5 = param_1 + 0x1f20;
  do {
    puVar7 = puVar7 + -0x8e;
    *puVar7 = &PTR__scalar_deleting_destructor__144042bc8;
    FUN_140691580(lVar5 + -0x310);
    *(undefined ***)(lVar5 + -0x588) = &PTR__scalar_deleting_destructor__144042bb0;
    FSlateBrush::~FSlateBrush(lVar5 + -1000);
    FSlateBrush::~FSlateBrush(lVar5 + -0x470);
    FSlateBrush::~FSlateBrush(lVar5 + -0x4f8);
    FSlateBrush::~FSlateBrush(lVar5 + -0x580);
    *(undefined ***)(lVar5 + -0x588) = &PTR_FUN_144042b80;
    *puVar7 = &PTR_FUN_144042b80;
    lVar6 = lVar6 + -1;
    lVar5 = lVar5 + -0x470;
  } while (lVar6 != 0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x340);
  plVar4 = *(longlong **)(param_1 + 0x328);
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
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x300);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x2f0);
  FUN_140458b70(param_1);
  return;
}



// FUNCTION 140691d50 FUN_140691d50 body=280 status=ok
// SIG undefined FUN_140691d50(void)

void FUN_140691d50(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x3e0) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x3d8);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3c0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3a8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 800);
  plVar4 = *(longlong **)(param_1 + 0x318);
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
  plVar4 = *(longlong **)(param_1 + 0x308);
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
  *(undefined ***)(param_1 + 0x2f0) = &PTR_FUN_144024f50;
  FUN_140458b70(param_1);
  return;
}



// FUNCTION 140691e70 operator= body=465 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
operator=(longlong *param_1,longlong *param_2)

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
    TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(param_1,iVar9);
    cVar3 = TSet<TTuple<FName,FNameArray>,TDefaultMapHashableKeyFuncs<FName,FNameArray,0>,FDefaultSetAllocator>
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
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_140691fad;
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
LAB_140691fad:
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
        FUN_14068cda0(param_1,local_res8,(longlong)iStack_3c * 0x20 + *param_2,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 140692050 FUN_140692050 body=647 status=ok
// SIG undefined FUN_140692050(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_140692050(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  FUN_1406922e0(param_1 + 0x10,param_2 + 0x10);
  FUN_1406922e0(param_1 + 0x98,param_2 + 0x98);
  FUN_1406922e0(param_1 + 0x120,param_2 + 0x120);
  FUN_1406922e0(param_1 + 0x1a8,param_2 + 0x1a8);
  uVar8 = *(undefined8 *)(param_2 + 0x238);
  puVar3 = (undefined8 *)(param_1 + 0x2b8);
  *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(param_2 + 0x230);
  *(undefined8 *)(param_1 + 0x238) = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0x248);
  *(undefined8 *)(param_1 + 0x240) = *(undefined8 *)(param_2 + 0x240);
  *(undefined8 *)(param_1 + 0x248) = uVar8;
  *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(param_2 + 0x250);
  *(undefined8 *)(param_1 + 600) = *(undefined8 *)(param_2 + 600);
  *(undefined4 *)(param_1 + 0x260) = *(undefined4 *)(param_2 + 0x260);
  *(undefined4 *)(param_1 + 0x264) = *(undefined4 *)(param_2 + 0x264);
  *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_2 + 0x268);
  *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(param_2 + 0x270);
  *(undefined4 *)(param_1 + 0x278) = *(undefined4 *)(param_2 + 0x278);
  *(undefined4 *)(param_1 + 0x27c) = *(undefined4 *)(param_2 + 0x27c);
  *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)(param_2 + 0x288);
  *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(param_2 + 0x290);
  uVar5 = *(undefined4 *)(param_2 + 0x29c);
  uVar6 = *(undefined4 *)(param_2 + 0x2a0);
  uVar7 = *(undefined4 *)(param_2 + 0x2a4);
  *(undefined4 *)(param_1 + 0x298) = *(undefined4 *)(param_2 + 0x298);
  *(undefined4 *)(param_1 + 0x29c) = uVar5;
  *(undefined4 *)(param_1 + 0x2a0) = uVar6;
  *(undefined4 *)(param_1 + 0x2a4) = uVar7;
  uVar5 = *(undefined4 *)(param_2 + 0x2ac);
  uVar6 = *(undefined4 *)(param_2 + 0x2b0);
  uVar7 = *(undefined4 *)(param_2 + 0x2b4);
  *(undefined4 *)(param_1 + 0x2a8) = *(undefined4 *)(param_2 + 0x2a8);
  *(undefined4 *)(param_1 + 0x2ac) = uVar5;
  *(undefined4 *)(param_1 + 0x2b0) = uVar6;
  *(undefined4 *)(param_1 + 0x2b4) = uVar7;
  uStack_40 = *(longlong **)(param_2 + 0x2c0);
  local_48 = *(undefined8 *)(param_2 + 0x2b8);
  if (uStack_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_40 + 1) = (int)uStack_40[1] + 1;
    UNLOCK();
  }
  if (&local_48 != puVar3) {
    local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
    uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
    uVar8 = *puVar3;
    plVar9 = *(longlong **)(param_1 + 0x2c0);
    local_38 = (undefined4)local_48;
    uStack_34 = local_48._4_4_;
    uStack_30 = (undefined4)uStack_40;
    uStack_2c = uStack_40._4_4_;
    *(undefined4 *)puVar3 = (undefined4)local_48;
    *(undefined4 *)(param_1 + 700) = local_48._4_4_;
    *(undefined4 *)(param_1 + 0x2c0) = (undefined4)uStack_40;
    *(undefined4 *)(param_1 + 0x2c4) = uStack_40._4_4_;
    local_48 = uVar8;
    uStack_40 = plVar9;
  }
  plVar9 = uStack_40;
  if (uStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_40 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*uStack_40)(uStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*uStack_40 + 8))(uStack_40,1);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_2 + 0x2c8);
  *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)(param_2 + 0x2d0);
  *(undefined1 *)(param_1 + 0x2d4) = *(undefined1 *)(param_2 + 0x2d4);
  FUN_140692440(param_1 + 0x2d8,param_2 + 0x2d8);
  *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(param_2 + 0x300);
  uVar5 = *(undefined4 *)(param_2 + 0x30c);
  uVar6 = *(undefined4 *)(param_2 + 0x310);
  uVar7 = *(undefined4 *)(param_2 + 0x314);
  *(undefined4 *)(param_1 + 0x308) = *(undefined4 *)(param_2 + 0x308);
  *(undefined4 *)(param_1 + 0x30c) = uVar5;
  *(undefined4 *)(param_1 + 0x310) = uVar6;
  *(undefined4 *)(param_1 + 0x314) = uVar7;
  FUN_140692440(param_1 + 0x318,param_2 + 0x318);
  uVar5 = *(undefined4 *)(param_2 + 0x344);
  uVar6 = *(undefined4 *)(param_2 + 0x348);
  uVar7 = *(undefined4 *)(param_2 + 0x34c);
  *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(param_2 + 0x340);
  *(undefined4 *)(param_1 + 0x344) = uVar5;
  *(undefined4 *)(param_1 + 0x348) = uVar6;
  *(undefined4 *)(param_1 + 0x34c) = uVar7;
  FUN_1406922e0(param_1 + 0x350,param_2 + 0x350);
  FUN_1406922e0(param_1 + 0x3d8,param_2 + 0x3d8);
  uVar8 = *(undefined8 *)(param_2 + 0x468);
  *(undefined8 *)(param_1 + 0x460) = *(undefined8 *)(param_2 + 0x460);
  *(undefined8 *)(param_1 + 0x468) = uVar8;
  return param_1;
}



// FUNCTION 1406922e0 FUN_1406922e0 body=345 status=ok
// SIG undefined FUN_1406922e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1406922e0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar7 = *(undefined4 *)(param_2 + 0x14);
  uVar8 = *(undefined4 *)(param_2 + 0x18);
  uVar9 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar7;
  *(undefined4 *)(param_1 + 0x18) = uVar8;
  *(undefined4 *)(param_1 + 0x1c) = uVar9;
  FUN_140692440(param_1 + 0x20,param_2 + 0x20);
  puVar1 = (undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  uVar7 = *(undefined4 *)(param_2 + 0x5c);
  uVar8 = *(undefined4 *)(param_2 + 0x60);
  uVar9 = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x5c) = uVar7;
  *(undefined4 *)(param_1 + 0x60) = uVar8;
  *(undefined4 *)(param_1 + 100) = uVar9;
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined1 *)(param_1 + 0x6c) = *(undefined1 *)(param_2 + 0x6c);
  *(undefined1 *)(param_1 + 0x6d) = *(undefined1 *)(param_2 + 0x6d);
  *(undefined1 *)(param_1 + 0x6e) = *(undefined1 *)(param_2 + 0x6e);
  *(undefined1 *)(param_1 + 0x6f) = *(undefined1 *)(param_2 + 0x6f);
  plVar5 = *(longlong **)(param_2 + 0x78);
  uVar6 = *(undefined8 *)(param_2 + 0x70);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_48 = uVar6;
  plStack_40 = plVar5;
  if (&local_48 != puVar1) {
    local_48 = *puVar1;
    plStack_40 = *(longlong **)(param_1 + 0x78);
    *puVar1 = uVar6;
    *(longlong **)(param_1 + 0x78) = plVar5;
    local_38 = uVar6;
    plStack_30 = plVar5;
  }
  plVar5 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_40 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  *(byte *)(param_1 + 0x80) =
       *(byte *)(param_1 + 0x80) ^ (*(byte *)(param_1 + 0x80) ^ *(byte *)(param_2 + 0x80)) & 1;
  *(byte *)(param_1 + 0x80) =
       (*(byte *)(param_2 + 0x80) ^ *(byte *)(param_1 + 0x80)) & 2 ^ *(byte *)(param_1 + 0x80);
  return param_1;
}



// FUNCTION 140692440 FUN_140692440 body=234 status=ok
// SIG undefined FUN_140692440(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_140692440(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  puVar1 = (undefined8 *)(param_1 + 6);
  *param_1 = *param_2;
  param_1[1] = uVar5;
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uStack_30 = *(longlong **)(param_2 + 8);
  local_38 = *(undefined8 *)(param_2 + 6);
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_30 + 1) = (int)uStack_30[1] + 1;
    UNLOCK();
  }
  if (&local_38 != puVar1) {
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    uVar8 = *puVar1;
    plVar9 = *(longlong **)(param_1 + 8);
    local_28 = (undefined4)local_38;
    uStack_24 = local_38._4_4_;
    uStack_20 = (undefined4)uStack_30;
    uStack_1c = uStack_30._4_4_;
    *(undefined4 *)puVar1 = (undefined4)local_38;
    param_1[7] = local_38._4_4_;
    param_1[8] = (undefined4)uStack_30;
    param_1[9] = uStack_30._4_4_;
    local_38 = uVar8;
    uStack_30 = plVar9;
  }
  plVar9 = uStack_30;
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = uStack_30 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*uStack_30)(uStack_30);
      LOCK();
      piVar3 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*uStack_30 + 8))(uStack_30,1);
      }
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 140692530 operator[] body=292 status=ok
// SIG undefined operator[](void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong TSlotBase<FSimpleSlot>::operator[](longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  plVar5 = *(longlong **)(param_1 + 0x18);
  puVar1 = (undefined8 *)(param_1 + 0x10);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  FSlotBase::DetatchParentFromContent();
  plVar6 = (longlong *)param_2[1];
  uVar7 = *param_2;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_38 = uVar7;
  plStack_30 = plVar6;
  if (&local_38 != puVar1) {
    local_38 = *puVar1;
    plStack_30 = *(longlong **)(param_1 + 0x18);
    *puVar1 = uVar7;
    *(longlong **)(param_1 + 0x18) = plVar6;
    local_28 = uVar7;
    plStack_20 = plVar6;
  }
  plVar6 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_30 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  FUN_141802340(param_1);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar5 + 1;
    lVar8 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  lVar8 = param_1 + -0x10;
  if (param_1 == 0) {
    lVar8 = 0;
  }
  return lVar8;
}



// FUNCTION 140692660 FUN_140692660 body=256 status=ok
// SIG undefined FUN_140692660(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_140692660(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  puVar3 = (undefined8 *)(param_1 + 0x138);
  uStack_40 = (longlong *)param_2[1];
  if (uStack_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_40 + 1) = (int)uStack_40[1] + 1;
    UNLOCK();
  }
  if (&local_48 != puVar3) {
    local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
    uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
    uVar6 = *puVar3;
    plVar5 = *(longlong **)(param_1 + 0x140);
    local_38 = (undefined4)local_48;
    uStack_34 = local_48._4_4_;
    uStack_30 = (undefined4)uStack_40;
    uStack_2c = uStack_40._4_4_;
    *(undefined4 *)puVar3 = (undefined4)local_48;
    *(undefined4 *)(param_1 + 0x13c) = local_48._4_4_;
    *(undefined4 *)(param_1 + 0x140) = (undefined4)uStack_40;
    *(undefined4 *)(param_1 + 0x144) = uStack_40._4_4_;
    local_48 = uVar6;
    uStack_40 = plVar5;
  }
  plVar5 = uStack_40;
  if (uStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_40 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*uStack_40)(uStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*uStack_40 + 8))(uStack_40,1);
      }
    }
  }
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar5)(plVar5);
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
  return param_1;
}



// FUNCTION 140692760 FUN_140692760 body=337 status=ok
// SIG undefined FUN_140692760(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_140692760(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  plVar5 = *(longlong **)(param_1 + 0x18);
  puVar1 = (undefined8 *)(param_1 + 0x10);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  FSlotBase::DetatchParentFromContent();
  plVar6 = (longlong *)param_2[1];
  uVar7 = *param_2;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_48 = uVar7;
  plStack_40 = plVar6;
  if (&local_48 != puVar1) {
    local_48 = *puVar1;
    plStack_40 = *(longlong **)(param_1 + 0x18);
    *puVar1 = uVar7;
    *(longlong **)(param_1 + 0x18) = plVar6;
    local_38 = uVar7;
    plStack_30 = plVar6;
  }
  plVar6 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_40 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  FUN_141802340(param_1);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar5 + 1;
    lVar8 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar5 + 1;
    lVar8 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1406928c0 operator+ body=99 status=ok
// SIG undefined operator+(void)

longlong SOverlay::FArguments::operator+(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x110);
  *(int *)(param_1 + 0x110) = iVar1 + 1;
  if (*(int *)(param_1 + 0x114) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x108,iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x108) + (longlong)iVar1 * 8) = param_2;
  return param_1;
}



// FUNCTION 140692930 FUN_140692930 body=1182 status=ok
// SIG undefined FUN_140692930(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_140692930(longlong *param_1,undefined1 *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  int *piVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  longlong *local_168;
  undefined8 local_158;
  longlong *local_150;
  undefined8 local_148;
  longlong *local_140;
  undefined8 local_138;
  longlong local_130;
  undefined1 local_128 [8];
  int local_120;
  undefined1 local_11c;
  int local_118 [4];
  char local_108 [192];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  plVar10 = (longlong *)0x0;
  if (((*(int *)(*param_1 + 0x3d0) != 0) &&
      (plVar11 = *(longlong **)(*param_1 + 0x3c8), plVar11 != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(*plVar11 + 0x18))(), cVar3 != '\0')) {
    lVar8 = *param_1;
    local_168 = (longlong *)0x0;
    plVar11 = *(longlong **)(lVar8 + 0x398);
    plVar9 = plVar11;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      iVar4 = (int)plVar11[1];
      bVar12 = iVar4 == 0;
      if (bVar12) {
        *(int *)(plVar11 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
      while (plVar9 = plVar10, !bVar12) {
        LOCK();
        bVar12 = iVar4 == (int)plVar11[1];
        if (bVar12) {
          *(int *)(plVar11 + 1) = iVar4 + 1;
        }
        UNLOCK();
        if (bVar12) {
          plVar9 = plVar11;
          if (plVar11 != (longlong *)0x0) {
            local_168 = *(longlong **)(lVar8 + 0x390);
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
            LOCK();
            plVar9 = plVar11 + 1;
            lVar8 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            plVar9 = plVar11;
            if ((int)lVar8 == 1) {
              (**(code **)*plVar11)(plVar11);
              LOCK();
              piVar6 = (int *)((longlong)plVar11 + 0xc);
              iVar4 = *piVar6;
              *piVar6 = *piVar6 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar11 + 8))(plVar11,1);
              }
            }
          }
          break;
        }
        LOCK();
        iVar4 = (int)plVar11[1];
        bVar12 = iVar4 == 0;
        if (bVar12) {
          *(int *)(plVar11 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
      }
    }
    lVar8 = *param_1;
    if ((local_128 != (undefined1 *)(lVar8 + 0x3d8)) && (*(char *)(lVar8 + 0x3dc) != '\0')) {
      *(undefined1 *)(lVar8 + 0x3dc) = 0;
      lVar8 = *param_1;
    }
    puVar5 = (undefined8 *)(**(code **)(*local_168 + 0x38))(local_168,lVar8);
    lVar8 = param_1[1];
    fVar13 = 1.0 / (*(float *)(lVar8 + 0x1c) * *(float *)(lVar8 + 0x28) -
                   *(float *)(lVar8 + 0x20) * *(float *)(lVar8 + 0x24));
    fVar15 = *(float *)(lVar8 + 0x1c) * fVar13;
    fVar13 = -(*(float *)(lVar8 + 0x20) * fVar13);
    fVar14 = *(float *)(lVar8 + 4) * 0.25;
    fVar15 = fVar15 * *(float *)(param_1[2] + 0x1c) + fVar13 * *(float *)(param_1[2] + 0x18) +
             (-(fVar13 * *(float *)(lVar8 + 0x2c)) - fVar15 * *(float *)(lVar8 + 0x30));
    fVar13 = 3.0;
    if ((3.0 <= fVar14) && (fVar13 = fVar14, 10.0 <= fVar14)) {
      fVar13 = 10.0;
    }
    plVar11 = plVar10;
    if (fVar13 <= fVar15) {
      plVar11 = (longlong *)(ulonglong)((*(float *)(lVar8 + 4) - fVar13 < fVar15) + 1);
    }
    if (((*(int *)(*param_1 + 0x3c0) == 0) ||
        (plVar2 = *(longlong **)(*param_1 + 0x3b8), plVar2 == (longlong *)0x0)) ||
       (cVar3 = (**(code **)(*plVar2 + 0x18))(), cVar3 == '\0')) {
      local_120 = (int)plVar11;
      piVar6 = &local_120;
      local_11c = 1;
    }
    else {
      plVar2 = (longlong *)puVar5[1];
      local_158 = *puVar5;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
      }
      lVar8 = param_1[2];
      plVar7 = plVar10;
      if (*(int *)(*param_1 + 0x3c0) != 0) {
        plVar7 = *(longlong **)(*param_1 + 0x3b8);
      }
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
      }
      local_178 = &local_158;
      local_150 = plVar2;
      (**(code **)(*plVar7 + 0x38))(plVar7,local_118,lVar8,plVar11);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar2 + 1;
        lVar8 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar6 = (int *)((longlong)plVar2 + 0xc);
          iVar4 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
      }
      piVar6 = local_118;
    }
    if ((char)piVar6[1] != '\0') {
      plVar11 = (longlong *)puVar5[1];
      iVar4 = *piVar6;
      local_148 = *puVar5;
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
      }
      lVar8 = param_1[2];
      if (*(int *)(*param_1 + 0x3d0) != 0) {
        plVar10 = *(longlong **)(*param_1 + 0x3c8);
      }
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
      }
      local_178 = &local_148;
      local_140 = plVar11;
      (**(code **)(*plVar10 + 0x38))(plVar10,local_108,lVar8,iVar4);
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar11 + 1;
        lVar8 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar6 = (int *)((longlong)plVar11 + 0xc);
          iVar1 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar1 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
      if ((local_108[0] != '\0') && (iVar4 == 1)) {
        local_138 = *puVar5;
        local_130 = puVar5[1];
        if (local_130 != 0) {
          LOCK();
          *(int *)(local_130 + 8) = *(int *)(local_130 + 8) + 1;
          UNLOCK();
        }
        (**(code **)(*local_168 + 0x40))(local_168,&local_138,1);
      }
      FReply::FReply(param_2,local_108);
      FUN_140438c20(local_108);
      if (plVar9 == (longlong *)0x0) {
        return param_2;
      }
      LOCK();
      plVar10 = plVar9 + 1;
      lVar8 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar8 != 1) {
        return param_2;
      }
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar6 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar4 != 1) {
        return param_2;
      }
      (**(code **)(*plVar9 + 8))(plVar9,1);
      return param_2;
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar9 + 1;
      lVar8 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar6 = (int *)((longlong)plVar9 + 0xc);
        iVar4 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  return param_2;
}



// FUNCTION 140692dd0 FUN_140692dd0 body=235 status=ok
// SIG undefined FUN_140692dd0(void)

bool FUN_140692dd0(float *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar1 = *param_2;
  lVar2 = *param_3;
  if (*(char *)(lVar1 + 0x58) != '\0') {
    if (*(char *)(lVar2 + 0x58) == '\0') {
      return true;
    }
    fVar9 = *(float *)(lVar1 + 0x40) - *param_1;
    fVar8 = *(float *)(lVar2 + 0x40) - *param_1;
    fVar7 = *(float *)(lVar1 + 0x48) - param_1[2];
    fVar6 = *(float *)(lVar2 + 0x48) - param_1[2];
    fVar10 = *(float *)(lVar1 + 0x44) - param_1[1];
    fVar11 = *(float *)(lVar2 + 0x44) - param_1[1];
    return SQRT(fVar10 * fVar10 + fVar9 * fVar9 + fVar7 * fVar7) <
           SQRT(fVar11 * fVar11 + fVar8 * fVar8 + fVar6 * fVar6);
  }
  if (*(char *)(lVar2 + 0x58) == '\0') {
    puVar4 = &DAT_143f3eda8;
    if (*(int *)(lVar2 + 0x18) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = *(undefined2 **)(lVar2 + 0x10);
    }
    if (*(int *)(lVar1 + 0x18) != 0) {
      puVar4 = *(undefined2 **)(lVar1 + 0x10);
    }
    iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
    return iVar3 < 0;
  }
  return false;
}



// FUNCTION 140692ec0 FUN_140692ec0 body=326 status=ok
// SIG undefined FUN_140692ec0(void)

undefined8 FUN_140692ec0(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined8 local_28;
  longlong *local_20;
  
  plVar8 = (longlong *)0x0;
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 0x398);
  plVar7 = plVar4;
  plVar9 = plVar8;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar4[1];
    bVar10 = iVar5 == 0;
    if (bVar10) {
      *(int *)(plVar4 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar7 = plVar8, plVar9 = (longlong *)0x0, !bVar10) {
      LOCK();
      bVar10 = iVar5 == (int)plVar4[1];
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar10) {
        plVar7 = plVar4;
        if (plVar4 != (longlong *)0x0) {
          plVar9 = *(longlong **)(lVar3 + 0x390);
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar4[1];
      bVar10 = iVar5 == 0;
      if (bVar10) {
        *(int *)(plVar4 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  puVar6 = (undefined8 *)(**(code **)(*plVar9 + 0x38))(plVar9,*param_1);
  plVar4 = (longlong *)puVar6[1];
  local_28 = *puVar6;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar3 = param_1[1];
  uVar2 = *(undefined4 *)param_1[2];
  if (*(int *)(*param_1 + 0x3c0) != 0) {
    plVar8 = *(longlong **)(*param_1 + 0x3b8);
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_20 = plVar4;
  (**(code **)(*plVar8 + 0x38))(plVar8,param_2,lVar3,uVar2,&local_28);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar4 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar7 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 140693010 FUN_140693010 body=313 status=ok
// SIG undefined FUN_140693010(void)

void FUN_140693010(longlong *param_1,int param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  undefined8 local_40;
  longlong *plStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 local_20;
  undefined8 local_18;
  longlong *plStack_10;
  
  lVar6 = (longlong)param_2 * 0x470;
  FUN_140692050(*param_1 + 0x360 + lVar6,param_1[1]);
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  local_48 = 0;
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  FUN_140692440(*param_1 + 0x390 + lVar6,&local_58);
  plVar5 = plStack_38;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_38 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_38 + 8))(plStack_38,1);
      }
    }
  }
  local_30 = *param_3;
  uStack_2c = param_3[1];
  uStack_28 = param_3[2];
  uStack_24 = param_3[3];
  local_20 = 0;
  local_18 = 0;
  plStack_10 = (longlong *)0x0;
  FUN_140692440(lVar6 + 0x638 + *param_1,&local_30);
  plVar5 = plStack_10;
  if (plStack_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_10 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_10)(plStack_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_10 + 8))(plStack_10,1);
      }
    }
  }
  return;
}



// FUNCTION 140693150 FUN_140693150 body=255 status=ok
// SIG undefined FUN_140693150(void)

longlong * FUN_140693150(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  
  SWidget::SWidgetConstruct
            (*param_1,param_3,param_3 + 0x30,param_3 + 0x40,param_3 + 0x60,param_3 + 0x78,
             *(undefined4 *)(param_3 + 0x90),param_3 + 0x98,param_3 + 200,param_3 + 0xe8,
             *(undefined1 *)(param_3 + 0xf0),*(undefined1 *)(param_3 + 0xf1),param_3 + 0xf8);
  SHorizontalBox::Construct(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  if (-1 < (char)plVar1[3]) {
    cVar3 = (**(code **)(*plVar1 + 0x1e8))(plVar1);
    if (cVar3 == '\0') {
      bVar4 = 0;
      goto LAB_140693214;
    }
  }
  bVar4 = 1;
LAB_140693214:
  *(byte *)((longlong)plVar1 + 0x19) = *(byte *)((longlong)plVar1 + 0x19) & 0xfe;
  *(byte *)((longlong)plVar1 + 0x19) = *(byte *)((longlong)plVar1 + 0x19) | bVar4;
  *param_2 = *param_1;
  lVar2 = param_1[1];
  param_2[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 140693250 FUN_140693250 body=255 status=ok
// SIG undefined FUN_140693250(void)

longlong * FUN_140693250(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  
  SWidget::SWidgetConstruct
            (*param_1,param_3,param_3 + 0x30,param_3 + 0x40,param_3 + 0x60,param_3 + 0x78,
             *(undefined4 *)(param_3 + 0x90),param_3 + 0x98,param_3 + 200,param_3 + 0xe8,
             *(undefined1 *)(param_3 + 0xf0),*(undefined1 *)(param_3 + 0xf1),param_3 + 0xf8);
  FUN_1419b0120(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  if (-1 < (char)plVar1[3]) {
    cVar3 = (**(code **)(*plVar1 + 0x1e8))(plVar1);
    if (cVar3 == '\0') {
      bVar4 = 0;
      goto LAB_140693314;
    }
  }
  bVar4 = 1;
LAB_140693314:
  *(byte *)((longlong)plVar1 + 0x19) = *(byte *)((longlong)plVar1 + 0x19) & 0xfe;
  *(byte *)((longlong)plVar1 + 0x19) = *(byte *)((longlong)plVar1 + 0x19) | bVar4;
  *param_2 = *param_1;
  lVar2 = param_1[1];
  param_2[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 140693370 `scalar_deleting_destructor' body=78 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
STileView<TSharedPtr<SWidget,0>_>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  FUN_1406907e0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x638);
  }
  return param_1;
}



// FUNCTION 1406933c0 FUN_1406933c0 body=78 status=ok
// SIG undefined FUN_1406933c0(void)

undefined8 FUN_1406933c0(undefined8 param_1,ulonglong param_2)

{
  FUN_140690a70();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x440);
  }
  return param_1;
}


