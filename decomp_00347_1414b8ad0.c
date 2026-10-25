// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1414b8ad0 FUN_1414b8ad0 body=130 status=ok
// SIG undefined FUN_1414b8ad0(void)

void FUN_1414b8ad0(undefined8 param_1,longlong param_2)

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
  FUN_140e94310(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1414b8b60 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ULanguageItemCUnitWidget::GetPrivateStaticClass(void)

{
  if (DAT_14689eca8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"ReticleFeedbackWidgetContainer",&DAT_14689eca8,
                  StaticRegisterNativesULanguageItemCUnitWidget,0x2d8,0x10000000,0,L"Engine",
                  FUN_1414baac0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141301c80,&LAB_140447700,0);
  }
  return DAT_14689eca8;
}



// FUNCTION 1414b8c20 FUN_1414b8c20 body=47 status=ok
// SIG undefined FUN_1414b8c20(void)

longlong FUN_1414b8c20(void)

{
  if (DAT_14689eca0 == 0) {
    FUN_141786440(&DAT_14689eca0,&PTR_GetPrivateStaticClass_144ba78c0);
  }
  return DAT_14689eca0;
}



// FUNCTION 1414b8c50 FUN_1414b8c50 body=47 status=ok
// SIG undefined FUN_1414b8c50(void)

longlong FUN_1414b8c50(void)

{
  if (DAT_14689ec98 == 0) {
    FUN_141786a30(&DAT_14689ec98,&PTR_FUN_146458a30);
  }
  return DAT_14689ec98;
}



// FUNCTION 1414b8c90 FUN_1414b8c90 body=47 status=ok
// SIG undefined FUN_1414b8c90(void)

longlong FUN_1414b8c90(void)

{
  if (DAT_14689eb28 == 0) {
    FUN_141786440(&DAT_14689eb28,&PTR_LAB_144baa200);
  }
  return DAT_14689eb28;
}



// FUNCTION 1414b8cc0 FUN_1414b8cc0 body=47 status=ok
// SIG undefined FUN_1414b8cc0(void)

longlong FUN_1414b8cc0(void)

{
  if (DAT_14689eac8 == 0) {
    FUN_141786a30(&DAT_14689eac8,&PTR_FUN_146456600);
  }
  return DAT_14689eac8;
}



// FUNCTION 1414b8cf0 FUN_1414b8cf0 body=47 status=ok
// SIG undefined FUN_1414b8cf0(void)

longlong FUN_1414b8cf0(void)

{
  if (DAT_14689ead0 == 0) {
    FUN_141786a30(&DAT_14689ead0,&PTR_FUN_146456680);
  }
  return DAT_14689ead0;
}



// FUNCTION 1414b8d20 FUN_1414b8d20 body=47 status=ok
// SIG undefined FUN_1414b8d20(void)

longlong FUN_1414b8d20(void)

{
  if (DAT_14689ead8 == 0) {
    FUN_141786a30(&DAT_14689ead8,&PTR_FUN_1464566c0);
  }
  return DAT_14689ead8;
}



// FUNCTION 1414b8d50 FUN_1414b8d50 body=47 status=ok
// SIG undefined FUN_1414b8d50(void)

longlong FUN_1414b8d50(void)

{
  if (DAT_14689eae0 == 0) {
    FUN_141786a30(&DAT_14689eae0,&PTR_FUN_146456740);
  }
  return DAT_14689eae0;
}



// FUNCTION 1414b8d80 FUN_1414b8d80 body=47 status=ok
// SIG undefined FUN_1414b8d80(void)

longlong FUN_1414b8d80(void)

{
  if (DAT_14689eae8 == 0) {
    FUN_141786a30(&DAT_14689eae8,&PTR_FUN_1464567c0);
  }
  return DAT_14689eae8;
}



// FUNCTION 1414b8db0 FUN_1414b8db0 body=47 status=ok
// SIG undefined FUN_1414b8db0(void)

longlong FUN_1414b8db0(void)

{
  if (DAT_14689eaf0 == 0) {
    FUN_141786a30(&DAT_14689eaf0,&PTR_FUN_146456800);
  }
  return DAT_14689eaf0;
}



// FUNCTION 1414b8de0 FUN_1414b8de0 body=47 status=ok
// SIG undefined FUN_1414b8de0(void)

longlong FUN_1414b8de0(void)

{
  if (DAT_14689eaf8 == 0) {
    FUN_141786a30(&DAT_14689eaf8,&PTR_FUN_146456880);
  }
  return DAT_14689eaf8;
}



// FUNCTION 1414b8e10 FUN_1414b8e10 body=47 status=ok
// SIG undefined FUN_1414b8e10(void)

longlong FUN_1414b8e10(void)

{
  if (DAT_14689eb00 == 0) {
    FUN_141786a30(&DAT_14689eb00,&PTR_FUN_146456900);
  }
  return DAT_14689eb00;
}



// FUNCTION 1414b8e40 FUN_1414b8e40 body=47 status=ok
// SIG undefined FUN_1414b8e40(void)

longlong FUN_1414b8e40(void)

{
  if (DAT_14689eb08 == 0) {
    FUN_141786a30(&DAT_14689eb08,&PTR_FUN_146456940);
  }
  return DAT_14689eb08;
}



// FUNCTION 1414b8e70 FUN_1414b8e70 body=47 status=ok
// SIG undefined FUN_1414b8e70(void)

longlong FUN_1414b8e70(void)

{
  if (DAT_14689eb10 == 0) {
    FUN_141786a30(&DAT_14689eb10,&PTR_FUN_1464569c0);
  }
  return DAT_14689eb10;
}



// FUNCTION 1414b8ea0 FUN_1414b8ea0 body=47 status=ok
// SIG undefined FUN_1414b8ea0(void)

longlong FUN_1414b8ea0(void)

{
  if (DAT_14689eb18 == 0) {
    FUN_141786a30(&DAT_14689eb18,&PTR_FUN_146456a00);
  }
  return DAT_14689eb18;
}



// FUNCTION 1414b8ed0 FUN_1414b8ed0 body=47 status=ok
// SIG undefined FUN_1414b8ed0(void)

longlong FUN_1414b8ed0(void)

{
  if (DAT_14689eb20 == 0) {
    FUN_141786a30(&DAT_14689eb20,&PTR_FUN_146456a90);
  }
  return DAT_14689eb20;
}



// FUNCTION 1414b8f00 FUN_1414b8f00 body=162 status=ok
// SIG undefined FUN_1414b8f00(void)

longlong FUN_1414b8f00(void)

{
  if (DAT_14689ecc8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"RevolverVehicleAnimInstance",&DAT_14689ecc8,FUN_140447710,
                  0x1ae0,0x10000008,0,L"Engine",&LAB_1414bab30,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_142256d30,thunk_FUN_141496ed0,
                  &LAB_14084f730,0);
  }
  return DAT_14689ecc8;
}



// FUNCTION 1414b8fb0 FUN_1414b8fb0 body=53 status=ok
// SIG undefined FUN_1414b8fb0(void)

void FUN_1414b8fb0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x7a0;
    *puVar1 = &PTR_FUN_144bb43a8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 1414b9000 FUN_1414b9000 body=47 status=ok
// SIG undefined FUN_1414b9000(void)

longlong FUN_1414b9000(void)

{
  if (DAT_14689eb38 == 0) {
    FUN_141786a30(&DAT_14689eb38,&PTR_FUN_146456c40);
  }
  return DAT_14689eb38;
}



// FUNCTION 1414b9030 FUN_1414b9030 body=47 status=ok
// SIG undefined FUN_1414b9030(void)

longlong FUN_1414b9030(void)

{
  if (DAT_14689eba0 == 0) {
    FUN_141786440(&DAT_14689eba0,&PTR_thunk_FUN_1414bbaa0_144bab5f0);
  }
  return DAT_14689eba0;
}



// FUNCTION 1414b9060 FUN_1414b9060 body=47 status=ok
// SIG undefined FUN_1414b9060(void)

longlong FUN_1414b9060(void)

{
  if (DAT_14689eb40 == 0) {
    FUN_141786a30(&DAT_14689eb40,&PTR_FUN_146456cc0);
  }
  return DAT_14689eb40;
}



// FUNCTION 1414b9090 FUN_1414b9090 body=47 status=ok
// SIG undefined FUN_1414b9090(void)

longlong FUN_1414b9090(void)

{
  if (DAT_14689eb48 == 0) {
    FUN_141786a30(&DAT_14689eb48,&PTR_FUN_146456d00);
  }
  return DAT_14689eb48;
}



// FUNCTION 1414b90c0 FUN_1414b90c0 body=47 status=ok
// SIG undefined FUN_1414b90c0(void)

longlong FUN_1414b90c0(void)

{
  if (DAT_14689eb50 == 0) {
    FUN_141786a30(&DAT_14689eb50,&PTR_FUN_146456d80);
  }
  return DAT_14689eb50;
}



// FUNCTION 1414b90f0 FUN_1414b90f0 body=47 status=ok
// SIG undefined FUN_1414b90f0(void)

longlong FUN_1414b90f0(void)

{
  if (DAT_14689eb58 == 0) {
    FUN_141786a30(&DAT_14689eb58,&PTR_FUN_146456e00);
  }
  return DAT_14689eb58;
}



// FUNCTION 1414b9120 FUN_1414b9120 body=47 status=ok
// SIG undefined FUN_1414b9120(void)

longlong FUN_1414b9120(void)

{
  if (DAT_14689eb60 == 0) {
    FUN_141786a30(&DAT_14689eb60,&PTR_FUN_146456e40);
  }
  return DAT_14689eb60;
}



// FUNCTION 1414b9150 FUN_1414b9150 body=47 status=ok
// SIG undefined FUN_1414b9150(void)

longlong FUN_1414b9150(void)

{
  if (DAT_14689eb68 == 0) {
    FUN_141786a30(&DAT_14689eb68,&PTR_FUN_146456ec0);
  }
  return DAT_14689eb68;
}



// FUNCTION 1414b9180 FUN_1414b9180 body=47 status=ok
// SIG undefined FUN_1414b9180(void)

longlong FUN_1414b9180(void)

{
  if (DAT_14689eb70 == 0) {
    FUN_141786a30(&DAT_14689eb70,&PTR_FUN_146456f00);
  }
  return DAT_14689eb70;
}



// FUNCTION 1414b91b0 FUN_1414b91b0 body=47 status=ok
// SIG undefined FUN_1414b91b0(void)

longlong FUN_1414b91b0(void)

{
  if (DAT_14689eb78 == 0) {
    FUN_141786a30(&DAT_14689eb78,&PTR_FUN_146456f80);
  }
  return DAT_14689eb78;
}



// FUNCTION 1414b91e0 FUN_1414b91e0 body=47 status=ok
// SIG undefined FUN_1414b91e0(void)

longlong FUN_1414b91e0(void)

{
  if (DAT_14689eb80 == 0) {
    FUN_141786a30(&DAT_14689eb80,&PTR_FUN_146457000);
  }
  return DAT_14689eb80;
}



// FUNCTION 1414b9210 FUN_1414b9210 body=47 status=ok
// SIG undefined FUN_1414b9210(void)

longlong FUN_1414b9210(void)

{
  if (DAT_14689eb88 == 0) {
    FUN_141786a30(&DAT_14689eb88,&PTR_FUN_146457080);
  }
  return DAT_14689eb88;
}



// FUNCTION 1414b9240 FUN_1414b9240 body=47 status=ok
// SIG undefined FUN_1414b9240(void)

longlong FUN_1414b9240(void)

{
  if (DAT_14689eb90 == 0) {
    FUN_141786a30(&DAT_14689eb90,&PTR_FUN_1464570c0);
  }
  return DAT_14689eb90;
}



// FUNCTION 1414b9270 FUN_1414b9270 body=47 status=ok
// SIG undefined FUN_1414b9270(void)

longlong FUN_1414b9270(void)

{
  if (DAT_14689eb98 == 0) {
    FUN_141786a30(&DAT_14689eb98,&PTR_FUN_146457100);
  }
  return DAT_14689eb98;
}



// FUNCTION 1414b92b0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ARemnantMiniMapDisplayActor::GetPrivateStaticClass(void)

{
  if (DAT_14689ecd8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"RotatingStaticMeshActor",&DAT_14689ecd8,FUN_140447710,0x470,
                  0x10000000,0,L"Engine",&LAB_1414ba970,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_1414bbf20,&LAB_140447700,0);
  }
  return DAT_14689ecd8;
}



// FUNCTION 1414b9360 FUN_1414b9360 body=47 status=ok
// SIG undefined FUN_1414b9360(void)

longlong FUN_1414b9360(void)

{
  if (DAT_14689eee8 == 0) {
    FUN_141786440(&DAT_14689eee8,&PTR_FUN_144bae1e0);
  }
  return DAT_14689eee8;
}



// FUNCTION 1414b9390 FUN_1414b9390 body=47 status=ok
// SIG undefined FUN_1414b9390(void)

longlong FUN_1414b9390(void)

{
  if (DAT_14689ee38 == 0) {
    FUN_141786a30(&DAT_14689ee38,&PTR_FUN_14645ab70);
  }
  return DAT_14689ee38;
}



// FUNCTION 1414b93c0 FUN_1414b93c0 body=47 status=ok
// SIG undefined FUN_1414b93c0(void)

longlong FUN_1414b93c0(void)

{
  if (DAT_14689ee40 == 0) {
    FUN_141786a30(&DAT_14689ee40,&PTR_FUN_14645abf0);
  }
  return DAT_14689ee40;
}



// FUNCTION 1414b93f0 FUN_1414b93f0 body=47 status=ok
// SIG undefined FUN_1414b93f0(void)

longlong FUN_1414b93f0(void)

{
  if (DAT_14689ee48 == 0) {
    FUN_141786a30(&DAT_14689ee48,&PTR_FUN_14645ac80);
  }
  return DAT_14689ee48;
}



// FUNCTION 1414b9420 FUN_1414b9420 body=47 status=ok
// SIG undefined FUN_1414b9420(void)

longlong FUN_1414b9420(void)

{
  if (DAT_14689ee50 == 0) {
    FUN_141786a30(&DAT_14689ee50,&PTR_FUN_14645ad10);
  }
  return DAT_14689ee50;
}



// FUNCTION 1414b9450 FUN_1414b9450 body=47 status=ok
// SIG undefined FUN_1414b9450(void)

longlong FUN_1414b9450(void)

{
  if (DAT_14689ee58 == 0) {
    FUN_141786a30(&DAT_14689ee58,&PTR_FUN_14645ada0);
  }
  return DAT_14689ee58;
}



// FUNCTION 1414b9480 FUN_1414b9480 body=47 status=ok
// SIG undefined FUN_1414b9480(void)

longlong FUN_1414b9480(void)

{
  if (DAT_14689ee60 == 0) {
    FUN_141786a30(&DAT_14689ee60,&PTR_FUN_14645ae30);
  }
  return DAT_14689ee60;
}



// FUNCTION 1414b94b0 FUN_1414b94b0 body=47 status=ok
// SIG undefined FUN_1414b94b0(void)

longlong FUN_1414b94b0(void)

{
  if (DAT_14689ee68 == 0) {
    FUN_141786a30(&DAT_14689ee68,&PTR_FUN_14645af40);
  }
  return DAT_14689ee68;
}



// FUNCTION 1414b94e0 FUN_1414b94e0 body=47 status=ok
// SIG undefined FUN_1414b94e0(void)

longlong FUN_1414b94e0(void)

{
  if (DAT_14689ee70 == 0) {
    FUN_141786a30(&DAT_14689ee70,&PTR_FUN_14645af80);
  }
  return DAT_14689ee70;
}



// FUNCTION 1414b9510 FUN_1414b9510 body=47 status=ok
// SIG undefined FUN_1414b9510(void)

longlong FUN_1414b9510(void)

{
  if (DAT_14689ee78 == 0) {
    FUN_141786a30(&DAT_14689ee78,&PTR_FUN_14645b000);
  }
  return DAT_14689ee78;
}



// FUNCTION 1414b9540 FUN_1414b9540 body=47 status=ok
// SIG undefined FUN_1414b9540(void)

longlong FUN_1414b9540(void)

{
  if (DAT_14689ee80 == 0) {
    FUN_141786a30(&DAT_14689ee80,&PTR_FUN_14645b0c0);
  }
  return DAT_14689ee80;
}



// FUNCTION 1414b9570 FUN_1414b9570 body=47 status=ok
// SIG undefined FUN_1414b9570(void)

longlong FUN_1414b9570(void)

{
  if (DAT_14689ee88 == 0) {
    FUN_141786a30(&DAT_14689ee88,&PTR_FUN_14645b100);
  }
  return DAT_14689ee88;
}



// FUNCTION 1414b95a0 FUN_1414b95a0 body=47 status=ok
// SIG undefined FUN_1414b95a0(void)

longlong FUN_1414b95a0(void)

{
  if (DAT_14689ee90 == 0) {
    FUN_141786a30(&DAT_14689ee90,&PTR_FUN_14645b180);
  }
  return DAT_14689ee90;
}



// FUNCTION 1414b95d0 FUN_1414b95d0 body=47 status=ok
// SIG undefined FUN_1414b95d0(void)

longlong FUN_1414b95d0(void)

{
  if (DAT_14689ee98 == 0) {
    FUN_141786a30(&DAT_14689ee98,&PTR_FUN_14645b240);
  }
  return DAT_14689ee98;
}



// FUNCTION 1414b9600 FUN_1414b9600 body=47 status=ok
// SIG undefined FUN_1414b9600(void)

longlong FUN_1414b9600(void)

{
  if (DAT_14689eea0 == 0) {
    FUN_141786a30(&DAT_14689eea0,&PTR_FUN_14645b2c0);
  }
  return DAT_14689eea0;
}



// FUNCTION 1414b9630 FUN_1414b9630 body=47 status=ok
// SIG undefined FUN_1414b9630(void)

longlong FUN_1414b9630(void)

{
  if (DAT_14689eea8 == 0) {
    FUN_141786a30(&DAT_14689eea8,&PTR_FUN_14645b340);
  }
  return DAT_14689eea8;
}



// FUNCTION 1414b9660 FUN_1414b9660 body=47 status=ok
// SIG undefined FUN_1414b9660(void)

longlong FUN_1414b9660(void)

{
  if (DAT_14689eeb0 == 0) {
    FUN_141786a30(&DAT_14689eeb0,&PTR_FUN_14645b3c0);
  }
  return DAT_14689eeb0;
}



// FUNCTION 1414b9690 FUN_1414b9690 body=47 status=ok
// SIG undefined FUN_1414b9690(void)

longlong FUN_1414b9690(void)

{
  if (DAT_14689eeb8 == 0) {
    FUN_141786a30(&DAT_14689eeb8,&PTR_FUN_14645b440);
  }
  return DAT_14689eeb8;
}



// FUNCTION 1414b96c0 FUN_1414b96c0 body=47 status=ok
// SIG undefined FUN_1414b96c0(void)

longlong FUN_1414b96c0(void)

{
  if (DAT_14689eec0 == 0) {
    FUN_141786a30(&DAT_14689eec0,&PTR_FUN_14645b4c0);
  }
  return DAT_14689eec0;
}



// FUNCTION 1414b96f0 FUN_1414b96f0 body=47 status=ok
// SIG undefined FUN_1414b96f0(void)

longlong FUN_1414b96f0(void)

{
  if (DAT_14689eec8 == 0) {
    FUN_141786a30(&DAT_14689eec8,&PTR_FUN_14645b540);
  }
  return DAT_14689eec8;
}



// FUNCTION 1414b9720 FUN_1414b9720 body=47 status=ok
// SIG undefined FUN_1414b9720(void)

longlong FUN_1414b9720(void)

{
  if (DAT_14689eed0 == 0) {
    FUN_141786a30(&DAT_14689eed0,&PTR_FUN_14645b600);
  }
  return DAT_14689eed0;
}



// FUNCTION 1414b9750 FUN_1414b9750 body=47 status=ok
// SIG undefined FUN_1414b9750(void)

longlong FUN_1414b9750(void)

{
  if (DAT_14689eed8 == 0) {
    FUN_141786a30(&DAT_14689eed8,&PTR_FUN_14645b6c0);
  }
  return DAT_14689eed8;
}



// FUNCTION 1414b9780 FUN_1414b9780 body=47 status=ok
// SIG undefined FUN_1414b9780(void)

longlong FUN_1414b9780(void)

{
  if (DAT_14689eee0 == 0) {
    FUN_141786a30(&DAT_14689eee0,&PTR_FUN_14645b810);
  }
  return DAT_14689eee0;
}



// FUNCTION 1414b97c0 FUN_1414b97c0 body=162 status=ok
// SIG undefined FUN_1414b97c0(void)

longlong FUN_1414b97c0(void)

{
  if (DAT_14689ece8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"SDUCase",&DAT_14689ece8,FUN_140447710,0x6b8,0x10000000,0,
                  L"Engine",&LAB_1414ba990,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,FUN_1412fc140
                  ,&LAB_140447700,0);
  }
  return DAT_14689ece8;
}



// FUNCTION 1414b9870 FUN_1414b9870 body=53 status=ok
// SIG undefined FUN_1414b9870(void)

void FUN_1414b9870(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_144bb4d60;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414b98c0 FUN_1414b98c0 body=53 status=ok
// SIG undefined FUN_1414b98c0(void)

void FUN_1414b98c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_144bb4e78;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414b9900 FUN_1414b9900 body=53 status=ok
// SIG undefined FUN_1414b9900(void)

void FUN_1414b9900(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_144bb4f90;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414b9960 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGameplayTagAssetInterface::GetPrivateStaticClass(void)

{
  if (DAT_14689ebb8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"ReapBehaviorInterface",&DAT_14689ebb8,FUN_140447710,0x28,
                  0x10004001,0,L"Engine",&LAB_140492380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_14689ebb8;
}



// FUNCTION 1414b9a30 FUN_1414b9a30 body=162 status=ok
// SIG undefined FUN_1414b9a30(void)

longlong FUN_1414b9a30(void)

{
  if (DAT_14689ed58 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"SDUCaseProxy",&DAT_14689ed58,FUN_1414bbf90,0x5b8,0x10000008,0
                  ,L"Engine",&LAB_1414ba9b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,FUN_1412d7880
                  ,&LAB_140447700,0);
  }
  return DAT_14689ed58;
}



// FUNCTION 1414b9af0 FUN_1414b9af0 body=47 status=ok
// SIG undefined FUN_1414b9af0(void)

longlong FUN_1414b9af0(void)

{
  if (DAT_14689ed50 == 0) {
    FUN_141786440(&DAT_14689ed50,&PTR_FUN_144baeea0);
  }
  return DAT_14689ed50;
}



// FUNCTION 1414b9b20 FUN_1414b9b20 body=47 status=ok
// SIG undefined FUN_1414b9b20(void)

longlong FUN_1414b9b20(void)

{
  if (DAT_14689ed00 == 0) {
    FUN_141786a30(&DAT_14689ed00,&PTR_FUN_146459230);
  }
  return DAT_14689ed00;
}



// FUNCTION 1414b9b50 FUN_1414b9b50 body=47 status=ok
// SIG undefined FUN_1414b9b50(void)

longlong FUN_1414b9b50(void)

{
  if (DAT_14689ed08 == 0) {
    FUN_141786a30(&DAT_14689ed08,&PTR_FUN_146459270);
  }
  return DAT_14689ed08;
}



// FUNCTION 1414b9b80 FUN_1414b9b80 body=47 status=ok
// SIG undefined FUN_1414b9b80(void)

longlong FUN_1414b9b80(void)

{
  if (DAT_14689ed10 == 0) {
    FUN_141786a30(&DAT_14689ed10,&PTR_FUN_1464592b0);
  }
  return DAT_14689ed10;
}



// FUNCTION 1414b9bb0 FUN_1414b9bb0 body=47 status=ok
// SIG undefined FUN_1414b9bb0(void)

longlong FUN_1414b9bb0(void)

{
  if (DAT_14689ed18 == 0) {
    FUN_141786a30(&DAT_14689ed18,&PTR_FUN_1464592f0);
  }
  return DAT_14689ed18;
}



// FUNCTION 1414b9be0 FUN_1414b9be0 body=47 status=ok
// SIG undefined FUN_1414b9be0(void)

longlong FUN_1414b9be0(void)

{
  if (DAT_14689ed20 == 0) {
    FUN_141786a30(&DAT_14689ed20,&PTR_FUN_146459330);
  }
  return DAT_14689ed20;
}



// FUNCTION 1414b9c10 FUN_1414b9c10 body=47 status=ok
// SIG undefined FUN_1414b9c10(void)

longlong FUN_1414b9c10(void)

{
  if (DAT_14689ed28 == 0) {
    FUN_141786a30(&DAT_14689ed28,&PTR_FUN_146459400);
  }
  return DAT_14689ed28;
}



// FUNCTION 1414b9c40 FUN_1414b9c40 body=47 status=ok
// SIG undefined FUN_1414b9c40(void)

longlong FUN_1414b9c40(void)

{
  if (DAT_14689ed30 == 0) {
    FUN_141786a30(&DAT_14689ed30,&PTR_FUN_1464594c0);
  }
  return DAT_14689ed30;
}



// FUNCTION 1414b9c70 FUN_1414b9c70 body=47 status=ok
// SIG undefined FUN_1414b9c70(void)

longlong FUN_1414b9c70(void)

{
  if (DAT_14689ed38 == 0) {
    FUN_141786a30(&DAT_14689ed38,&PTR_FUN_146459600);
  }
  return DAT_14689ed38;
}



// FUNCTION 1414b9ca0 FUN_1414b9ca0 body=47 status=ok
// SIG undefined FUN_1414b9ca0(void)

longlong FUN_1414b9ca0(void)

{
  if (DAT_14689ed40 == 0) {
    FUN_141786a30(&DAT_14689ed40,&PTR_FUN_1464596c0);
  }
  return DAT_14689ed40;
}



// FUNCTION 1414b9cd0 FUN_1414b9cd0 body=47 status=ok
// SIG undefined FUN_1414b9cd0(void)

longlong FUN_1414b9cd0(void)

{
  if (DAT_14689ed48 == 0) {
    FUN_141786a30(&DAT_14689ed48,&PTR_FUN_146459700);
  }
  return DAT_14689ed48;
}



// FUNCTION 1414b9d00 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAESHelper::GetPrivateStaticClass(void)

{
  if (DAT_14689ec48 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"RegionManagerData",&DAT_14689ec48,FUN_140447710,0x48,
                  0x10000000,0,L"Engine",&LAB_1414baa60,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_14689ec48;
}



// FUNCTION 1414b9db0 FUN_1414b9db0 body=53 status=ok
// SIG undefined FUN_1414b9db0(void)

void FUN_1414b9db0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x88;
    *puVar1 = &PTR_FUN_144bb44c0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414b9df0 FUN_1414b9df0 body=151 status=ok
// SIG undefined FUN_1414b9df0(void)

longlong FUN_1414b9df0(void)

{
  if (DAT_14689ec58 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"RegionManager",&DAT_14689ec58,FUN_140447710,0x98,0x10000006,0
                  ,L"Game",&LAB_1414baa50,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_14689ec58;
}



// FUNCTION 1414b9eb0 FUN_1414b9eb0 body=47 status=ok
// SIG undefined FUN_1414b9eb0(void)

longlong FUN_1414b9eb0(void)

{
  if (DAT_14689edb0 == 0) {
    FUN_141786440(&DAT_14689edb0,&PTR_thunk_FUN_1414bbb50_144bb0a90);
  }
  return DAT_14689edb0;
}



// FUNCTION 1414b9ee0 FUN_1414b9ee0 body=47 status=ok
// SIG undefined FUN_1414b9ee0(void)

longlong FUN_1414b9ee0(void)

{
  if (DAT_14689ed60 == 0) {
    FUN_141786a30(&DAT_14689ed60,&PTR_FUN_1464599c0);
  }
  return DAT_14689ed60;
}



// FUNCTION 1414b9f10 FUN_1414b9f10 body=47 status=ok
// SIG undefined FUN_1414b9f10(void)

longlong FUN_1414b9f10(void)

{
  if (DAT_14689ed68 == 0) {
    FUN_141786a30(&DAT_14689ed68,&PTR_FUN_146459a90);
  }
  return DAT_14689ed68;
}



// FUNCTION 1414b9f40 FUN_1414b9f40 body=47 status=ok
// SIG undefined FUN_1414b9f40(void)

longlong FUN_1414b9f40(void)

{
  if (DAT_14689ed70 == 0) {
    FUN_141786a30(&DAT_14689ed70,&PTR_FUN_146459b70);
  }
  return DAT_14689ed70;
}



// FUNCTION 1414b9f70 FUN_1414b9f70 body=47 status=ok
// SIG undefined FUN_1414b9f70(void)

longlong FUN_1414b9f70(void)

{
  if (DAT_14689ed78 == 0) {
    FUN_141786a30(&DAT_14689ed78,&PTR_FUN_146459bf0);
  }
  return DAT_14689ed78;
}



// FUNCTION 1414b9fa0 FUN_1414b9fa0 body=47 status=ok
// SIG undefined FUN_1414b9fa0(void)

longlong FUN_1414b9fa0(void)

{
  if (DAT_14689ed80 == 0) {
    FUN_141786a30(&DAT_14689ed80,&PTR_FUN_146459c30);
  }
  return DAT_14689ed80;
}



// FUNCTION 1414b9fd0 FUN_1414b9fd0 body=47 status=ok
// SIG undefined FUN_1414b9fd0(void)

longlong FUN_1414b9fd0(void)

{
  if (DAT_14689ed88 == 0) {
    FUN_141786a30(&DAT_14689ed88,&PTR_FUN_146459cf0);
  }
  return DAT_14689ed88;
}



// FUNCTION 1414ba000 FUN_1414ba000 body=47 status=ok
// SIG undefined FUN_1414ba000(void)

longlong FUN_1414ba000(void)

{
  if (DAT_14689ed90 == 0) {
    FUN_141786a30(&DAT_14689ed90,&PTR_FUN_146459d30);
  }
  return DAT_14689ed90;
}



// FUNCTION 1414ba030 FUN_1414ba030 body=47 status=ok
// SIG undefined FUN_1414ba030(void)

longlong FUN_1414ba030(void)

{
  if (DAT_14689ed98 == 0) {
    FUN_141786a30(&DAT_14689ed98,&PTR_FUN_146459db0);
  }
  return DAT_14689ed98;
}



// FUNCTION 1414ba060 FUN_1414ba060 body=47 status=ok
// SIG undefined FUN_1414ba060(void)

longlong FUN_1414ba060(void)

{
  if (DAT_14689eda0 == 0) {
    FUN_141786a30(&DAT_14689eda0,&PTR_FUN_146459e70);
  }
  return DAT_14689eda0;
}



// FUNCTION 1414ba090 FUN_1414ba090 body=47 status=ok
// SIG undefined FUN_1414ba090(void)

longlong FUN_1414ba090(void)

{
  if (DAT_14689eda8 == 0) {
    FUN_141786a30(&DAT_14689eda8,&PTR_FUN_146459f00);
  }
  return DAT_14689eda8;
}



// FUNCTION 1414ba0d0 FUN_1414ba0d0 body=162 status=ok
// SIG undefined FUN_1414ba0d0(void)

longlong FUN_1414ba0d0(void)

{
  if (DAT_14689ebc8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"RegionBalanceStateComponent",&DAT_14689ebc8,FUN_140447710,
                  0x208,0x10000000,0,L"Engine",&LAB_1414baa00,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1412e3580,&LAB_140447700,0);
  }
  return DAT_14689ebc8;
}



// FUNCTION 1414ba190 FUN_1414ba190 body=162 status=ok
// SIG undefined FUN_1414ba190(void)

longlong FUN_1414ba190(void)

{
  if (DAT_14689ebd8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"RegionData",&DAT_14689ebd8,FUN_140447710,0x40,0x10000000,0,
                  L"Engine",FUN_1414baa20,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_14689ebd8;
}



// FUNCTION 1414ba250 FUN_1414ba250 body=162 status=ok
// SIG undefined FUN_1414ba250(void)

longlong FUN_1414ba250(void)

{
  if (DAT_14689eac0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"QuickChangeProxy",&DAT_14689eac0,FUN_140447710,0x4e8,
                  0x10000008,0,L"Engine",&LAB_1412fc410,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,FUN_1412d7880
                  ,&LAB_140447700,0);
  }
  return DAT_14689eac0;
}



// FUNCTION 1414ba300 FUN_1414ba300 body=47 status=ok
// SIG undefined FUN_1414ba300(void)

longlong FUN_1414ba300(void)

{
  if (DAT_14689ec38 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14689ec38,&PTR_Z_Construct_UPackage__Script_MechWarrior_146458160);
  }
  return DAT_14689ec38;
}



// FUNCTION 1414ba330 FUN_1414ba330 body=162 status=ok
// SIG undefined FUN_1414ba330(void)

longlong FUN_1414ba330(void)

{
  if (DAT_14689ee10 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"ShieldAugmentStackValueResolver",&DAT_14689ee10,FUN_140447710
                  ,0x58,0x10000000,0,L"Engine",FUN_1414bab50,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDungeonEventListener::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14689ee10;
}



// FUNCTION 1414ba3f0 FUN_1414ba3f0 body=53 status=ok
// SIG undefined FUN_1414ba3f0(void)

void FUN_1414ba3f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &PTR_FUN_144bb3600;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1414ba430 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGJournalKey::GetPrivateStaticClass(void)

{
  if (DAT_14689ee20 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"ShieldAugmentValueResolver",&DAT_14689ee20,FUN_140447710,0xa0
                  ,0x10000000,0,L"Engine",FUN_1414babf0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDungeonEventListener::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14689ee20;
}



// FUNCTION 1414ba4e0 FUN_1414ba4e0 body=162 status=ok
// SIG undefined FUN_1414ba4e0(void)

longlong FUN_1414ba4e0(void)

{
  if (DAT_14689ee30 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"ShieldAugmentTableResolver",&DAT_14689ee30,FUN_140447710,0x50
                  ,0x10000000,0,L"Engine",&LAB_1414babe0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDungeonEventListener::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14689ee30;
}



// FUNCTION 1414ba590 FUN_1414ba590 body=53 status=ok
// SIG undefined FUN_1414ba590(void)

void FUN_1414ba590(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &PTR_FUN_144bb3718;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414ba5d0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UPVPScoresWidget::GetPrivateStaticClass(void)

{
  if (DAT_14689ec80 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"ResourceBar",&DAT_14689ec80,
                  StaticRegisterNativesUPVPScoresWidget,0x2d0,0x10000000,0,L"Engine",FUN_1414baa70,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141301c80,&LAB_140447700,0);
  }
  return DAT_14689ec80;
}



// FUNCTION 1414ba680 FUN_1414ba680 body=162 status=ok
// SIG undefined FUN_1414ba680(void)

longlong FUN_1414ba680(void)

{
  if (DAT_14689eef0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"Shield",&DAT_14689eef0,FUN_1414bbff0,0x5e8,0x10000000,0,
                  L"Engine",&LAB_1414ba9f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  AGTutorialStepRevive::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14689eef0;
}



// FUNCTION 1414ba730 FUN_1414ba730 body=47 status=ok
// SIG undefined FUN_1414ba730(void)

longlong FUN_1414ba730(void)

{
  if (DAT_14689ec78 == 0) {
    FUN_141786440(&DAT_14689ec78,&PTR_GetPrivateStaticClass_144bb2ba0);
  }
  return DAT_14689ec78;
}



// FUNCTION 1414ba760 FUN_1414ba760 body=47 status=ok
// SIG undefined FUN_1414ba760(void)

longlong FUN_1414ba760(void)

{
  if (DAT_14689ec60 == 0) {
    FUN_141786a30(&DAT_14689ec60,&PTR_FUN_1464583f0);
  }
  return DAT_14689ec60;
}



// FUNCTION 1414ba790 FUN_1414ba790 body=47 status=ok
// SIG undefined FUN_1414ba790(void)

longlong FUN_1414ba790(void)

{
  if (DAT_14689ec68 == 0) {
    FUN_141786a30(&DAT_14689ec68,&PTR_FUN_146458470);
  }
  return DAT_14689ec68;
}



// FUNCTION 1414ba7c0 FUN_1414ba7c0 body=47 status=ok
// SIG undefined FUN_1414ba7c0(void)

longlong FUN_1414ba7c0(void)

{
  if (DAT_14689ec70 == 0) {
    FUN_141786a30(&DAT_14689ec70,&PTR_FUN_1464584f0);
  }
  return DAT_14689ec70;
}



// FUNCTION 1414ba7f0 FUN_1414ba7f0 body=53 status=ok
// SIG undefined FUN_1414ba7f0(void)

void FUN_1414ba7f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_144bb3830;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414ba840 FUN_1414ba840 body=162 status=ok
// SIG undefined FUN_1414ba840(void)

longlong FUN_1414ba840(void)

{
  if (DAT_14689ec90 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"RespawnRestrictedVolume",&DAT_14689ec90,FUN_140447710,0x490,
                  0x10000000,0,L"Engine",&LAB_1414ba950,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_1407fbfa0,&LAB_140447700,0);
  }
  return DAT_14689ec90;
}



// FUNCTION 1414baa20 FUN_1414baa20 body=41 status=ok
// SIG undefined FUN_1414baa20(void)

void FUN_1414baa20(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR_FUN_143ff16a8;
  }
  return;
}



// FUNCTION 1414baa70 FUN_1414baa70 body=69 status=ok
// SIG undefined FUN_1414baa70(void)

void FUN_1414baa70(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141300770(puVar1,param_1);
    *puVar1 = &PTR_FUN_144bb3948;
    puVar1[0x20] = &PTR_LAB_144bb3de0;
    puVar1[0x41] = &PTR_LAB_144bb3e08;
  }
  return;
}



// FUNCTION 1414baac0 FUN_1414baac0 body=102 status=ok
// SIG undefined FUN_1414baac0(void)

void FUN_1414baac0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141300770(puVar1,param_1);
    *puVar1 = &PTR_FUN_144bb3e88;
    puVar1[0x20] = &PTR_LAB_144bb4320;
    puVar1[0x41] = &PTR_LAB_144bb4348;
    puVar1[0x57] = 0;
    puVar1[0x58] = 0;
    *(undefined4 *)(puVar1 + 0x59) = 0xffffffff;
    *(undefined8 *)((longlong)puVar1 + 0x2cc) = 0;
  }
  return;
}



// FUNCTION 1414bab50 FUN_1414bab50 body=131 status=ok
// SIG undefined FUN_1414bab50(void)

void FUN_1414bab50(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142c8d050(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144bb46f0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    *(undefined4 *)(puVar1 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 0;
    puVar1[7] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    if (0x7fffffff < *(uint *)((longlong)puVar1 + 0x4c)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1 + 8,0);
    }
    if ((undefined2 *)puVar1[8] != (undefined2 *)0x0) {
      *(undefined2 *)puVar1[8] = 0;
    }
    *(undefined4 *)(puVar1 + 6) = 0;
    puVar1[10] = 0;
  }
  return;
}



// FUNCTION 1414babf0 FUN_1414babf0 body=181 status=ok
// SIG undefined FUN_1414babf0(void)

void FUN_1414babf0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142c8d050(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144bb49d0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    *(undefined4 *)(puVar1 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 0;
    puVar1[7] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    if (0x7fffffff < *(uint *)((longlong)puVar1 + 0x4c)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1 + 8,0);
    }
    if ((undefined2 *)puVar1[8] != (undefined2 *)0x0) {
      *(undefined2 *)puVar1[8] = 0;
    }
    *(undefined4 *)(puVar1 + 6) = 0;
    *(undefined1 *)(puVar1 + 10) = 1;
    puVar1[0xb] = 0;
    *(undefined4 *)(puVar1 + 0xd) = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    *(undefined4 *)(puVar1 + 0x13) = 0x3f800000;
  }
  return;
}



// FUNCTION 1414bacb0 FUN_1414bacb0 body=123 status=ok
// SIG undefined FUN_1414bacb0(void)

undefined8 * FUN_1414bacb0(undefined8 *param_1)

{
  FUN_14084bd40();
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  *param_1 = &PTR_FUN_144717900;
  param_1[0xdb] = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  *(undefined4 *)(param_1 + 0xdf) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x6fc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x704) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70c) = 0;
  *(undefined4 *)(param_1 + 0xef) = 0;
  *(undefined1 *)(param_1 + 0xf2) = 0;
  return param_1;
}



// FUNCTION 1414bad30 FUN_1414bad30 body=748 status=ok
// SIG undefined FUN_1414bad30(void)

longlong FUN_1414bad30(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  FUN_14084cff0();
  puVar1 = (undefined8 *)(param_1 + 0x6c8);
  *(undefined4 *)(param_1 + 0x6b8) = *(undefined4 *)(param_2 + 0x6b8);
  *(undefined8 *)(param_1 + 0x6c0) = *(undefined8 *)(param_2 + 0x6c0);
  if (puVar1 != (undefined8 *)(param_2 + 0x6c8)) {
    iVar2 = *(int *)(param_2 + 0x6d0);
    _Src = *(void **)(param_2 + 0x6c8);
    *(int *)(param_1 + 0x6d0) = iVar2;
    if ((iVar2 == 0) && (*(int *)(param_1 + 0x6d4) == 0)) {
      *(undefined4 *)(param_1 + 0x6d4) = 0;
    }
    else {
      TArray<SWaapiPickerRow::KeyValueArgs,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 << 5);
    }
  }
  *(undefined4 *)(param_1 + 0x6d8) = *(undefined4 *)(param_2 + 0x6d8);
  *(undefined1 *)(param_1 + 0x6dc) = *(undefined1 *)(param_2 + 0x6dc);
  *(undefined1 *)(param_1 + 0x6dd) = *(undefined1 *)(param_2 + 0x6dd);
  *(undefined1 *)(param_1 + 0x6de) = *(undefined1 *)(param_2 + 0x6de);
  *(undefined1 *)(param_1 + 0x6df) = *(undefined1 *)(param_2 + 0x6df);
  *(undefined1 *)(param_1 + 0x6e0) = *(undefined1 *)(param_2 + 0x6e0);
  *(undefined1 *)(param_1 + 0x6e1) = *(undefined1 *)(param_2 + 0x6e1);
  *(undefined1 *)(param_1 + 0x6e2) = *(undefined1 *)(param_2 + 0x6e2);
  *(undefined1 *)(param_1 + 0x6e3) = *(undefined1 *)(param_2 + 0x6e3);
  *(undefined1 *)(param_1 + 0x6e4) = *(undefined1 *)(param_2 + 0x6e4);
  *(undefined4 *)(param_1 + 0x6e8) = *(undefined4 *)(param_2 + 0x6e8);
  *(undefined4 *)(param_1 + 0x6ec) = *(undefined4 *)(param_2 + 0x6ec);
  *(undefined4 *)(param_1 + 0x6f0) = *(undefined4 *)(param_2 + 0x6f0);
  *(undefined4 *)(param_1 + 0x6f4) = *(undefined4 *)(param_2 + 0x6f4);
  *(undefined4 *)(param_1 + 0x6f8) = *(undefined4 *)(param_2 + 0x6f8);
  *(undefined4 *)(param_1 + 0x6fc) = *(undefined4 *)(param_2 + 0x6fc);
  *(undefined4 *)(param_1 + 0x700) = *(undefined4 *)(param_2 + 0x700);
  *(undefined4 *)(param_1 + 0x704) = *(undefined4 *)(param_2 + 0x704);
  *(undefined4 *)(param_1 + 0x708) = *(undefined4 *)(param_2 + 0x708);
  *(undefined4 *)(param_1 + 0x70c) = *(undefined4 *)(param_2 + 0x70c);
  *(undefined4 *)(param_1 + 0x710) = *(undefined4 *)(param_2 + 0x710);
  *(undefined8 *)(param_1 + 0x714) = *(undefined8 *)(param_2 + 0x714);
  *(undefined4 *)(param_1 + 0x71c) = *(undefined4 *)(param_2 + 0x71c);
  *(undefined8 *)(param_1 + 0x720) = *(undefined8 *)(param_2 + 0x720);
  *(undefined4 *)(param_1 + 0x728) = *(undefined4 *)(param_2 + 0x728);
  *(undefined8 *)(param_1 + 0x72c) = *(undefined8 *)(param_2 + 0x72c);
  *(undefined4 *)(param_1 + 0x734) = *(undefined4 *)(param_2 + 0x734);
  *(undefined8 *)(param_1 + 0x738) = *(undefined8 *)(param_2 + 0x738);
  *(undefined4 *)(param_1 + 0x740) = *(undefined4 *)(param_2 + 0x740);
  *(undefined8 *)(param_1 + 0x744) = *(undefined8 *)(param_2 + 0x744);
  *(undefined4 *)(param_1 + 0x74c) = *(undefined4 *)(param_2 + 0x74c);
  *(undefined8 *)(param_1 + 0x750) = *(undefined8 *)(param_2 + 0x750);
  *(undefined4 *)(param_1 + 0x758) = *(undefined4 *)(param_2 + 0x758);
  *(undefined8 *)(param_1 + 0x75c) = *(undefined8 *)(param_2 + 0x75c);
  *(undefined4 *)(param_1 + 0x764) = *(undefined4 *)(param_2 + 0x764);
  *(undefined4 *)(param_1 + 0x768) = *(undefined4 *)(param_2 + 0x768);
  *(undefined4 *)(param_1 + 0x76c) = *(undefined4 *)(param_2 + 0x76c);
  *(undefined4 *)(param_1 + 0x770) = *(undefined4 *)(param_2 + 0x770);
  *(undefined4 *)(param_1 + 0x774) = *(undefined4 *)(param_2 + 0x774);
  *(undefined4 *)(param_1 + 0x778) = *(undefined4 *)(param_2 + 0x778);
  *(undefined8 *)(param_1 + 0x77c) = *(undefined8 *)(param_2 + 0x77c);
  *(undefined4 *)(param_1 + 0x784) = *(undefined4 *)(param_2 + 0x784);
  *(undefined4 *)(param_1 + 0x788) = *(undefined4 *)(param_2 + 0x788);
  *(undefined4 *)(param_1 + 0x78c) = *(undefined4 *)(param_2 + 0x78c);
  *(undefined1 *)(param_1 + 0x790) = *(undefined1 *)(param_2 + 0x790);
  return param_1;
}



// FUNCTION 1414bb050 FUN_1414bb050 body=66 status=ok
// SIG undefined FUN_1414bb050(void)

longlong FUN_1414bb050(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x208) = &PTR_FUN_14468d298;
  FUN_141300980();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2d0);
  }
  return param_1;
}



// FUNCTION 1414bb0a0 FUN_1414bb0a0 body=87 status=ok
// SIG undefined FUN_1414bb0a0(void)

longlong FUN_1414bb0a0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x2b8) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x208) = &PTR_FUN_14468d298;
  FUN_141300980(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2d8);
  }
  return param_1;
}



// FUNCTION 1414bb100 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UAISenseConfig_Sight::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 1414bb150 FUN_1414bb150 body=57 status=ok
// SIG undefined FUN_1414bb150(void)

void FUN_1414bb150(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14689e780);
                    /* WARNING: Could not recover jumptable at 0x0001414bb186. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1414bb190 FUN_1414bb190 body=60 status=ok
// SIG undefined FUN_1414bb190(void)

void FUN_1414bb190(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res10 [6];
  
  lVar1 = *param_1;
  local_res10[0] = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_14689e788);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_res10);
  return;
}



// FUNCTION 1414bb1d0 FUN_1414bb1d0 body=61 status=ok
// SIG undefined FUN_1414bb1d0(void)

void FUN_1414bb1d0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_14689e790);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1414bb210 FUN_1414bb210 body=60 status=ok
// SIG undefined FUN_1414bb210(void)

void FUN_1414bb210(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res10 [6];
  
  lVar1 = *param_1;
  local_res10[0] = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_14689e798);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_res10);
  return;
}



// FUNCTION 1414bb250 FUN_1414bb250 body=57 status=ok
// SIG undefined FUN_1414bb250(void)

void FUN_1414bb250(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14689e7a0);
                    /* WARNING: Could not recover jumptable at 0x0001414bb286. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1414bb2a0 FUN_1414bb2a0 body=72 status=ok
// SIG undefined FUN_1414bb2a0(void)

void FUN_1414bb2a0(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x58);
  *(undefined4 *)((longlong)param_2 + 8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined4 *)((longlong)param_2 + 0x38) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined1 *)((longlong)param_2 + 0x50) = 0;
  return;
}



// FUNCTION 1414bb370 Copy body=71 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FAnimNode_MeshSpaceRefPose>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_140b176d0(param_2 + param_3,param_3);
      param_3 = param_3 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1414bb3c0 FUN_1414bb3c0 body=439 status=ok
// SIG undefined FUN_1414bb3c0(void)

undefined8 FUN_1414bb3c0(undefined8 param_1,undefined4 *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  
  if (param_4 != 0) {
    plVar11 = (longlong *)(param_3 + 0x40);
    do {
      *param_2 = (int)plVar11[-8];
      plVar1 = (longlong *)(param_2 + 0x10);
      *(undefined1 *)(param_2 + 1) = *(undefined1 *)((longlong)plVar11 + -0x3c);
      lVar3 = plVar11[-6];
      *(longlong *)(param_2 + 2) = plVar11[-7];
      *(longlong *)(param_2 + 4) = lVar3;
      lVar3 = plVar11[-4];
      *(longlong *)(param_2 + 6) = plVar11[-5];
      *(longlong *)(param_2 + 8) = lVar3;
      uVar4 = *(undefined4 *)((longlong)plVar11 + -0x14);
      lVar3 = plVar11[-2];
      uVar5 = *(undefined4 *)((longlong)plVar11 + -0xc);
      param_2[10] = (int)plVar11[-3];
      param_2[0xb] = uVar4;
      param_2[0xc] = (int)lVar3;
      param_2[0xd] = uVar5;
      *(longlong *)(param_2 + 0xe) = plVar11[-1];
      if (plVar1 != plVar11) {
        iVar9 = param_2[0x12];
        if (iVar9 != 0) {
          plVar7 = (longlong *)(*plVar1 + 0x18);
          do {
            if (*plVar7 != 0) {
              FMemory::Free();
            }
            plVar7 = plVar7 + 5;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
        iVar9 = (int)plVar11[1];
        lVar3 = *plVar11;
        param_2[0x12] = iVar9;
        if ((iVar9 == 0) && (param_2[0x13] == 0)) {
          param_2[0x13] = 0;
        }
        else {
          TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy(plVar1,iVar9);
          puVar8 = (undefined4 *)*plVar1;
          if (iVar9 != 0) {
            puVar10 = (undefined8 *)(lVar3 + 0x10);
            do {
              uVar4 = *(undefined4 *)((longlong)puVar10 + -0xc);
              uVar5 = *(undefined4 *)(puVar10 + -1);
              uVar6 = *(undefined4 *)((longlong)puVar10 + -4);
              *puVar8 = *(undefined4 *)(puVar10 + -2);
              puVar8[1] = uVar4;
              puVar8[2] = uVar5;
              puVar8[3] = uVar6;
              *(undefined8 *)(puVar8 + 4) = *puVar10;
              *(undefined8 *)(puVar8 + 6) = 0;
              iVar2 = *(int *)(puVar10 + 2);
              _Src = (void *)puVar10[1];
              puVar8[8] = iVar2;
              if (iVar2 == 0) {
                puVar8[9] = 0;
              }
              else {
                TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(puVar8 + 6,iVar2,0);
                _guard_xfg_dispatch_icall_nop(*(void **)(puVar8 + 6),_Src,(longlong)iVar2 * 0x18);
              }
              puVar8 = puVar8 + 10;
              puVar10 = puVar10 + 5;
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
          }
        }
      }
      plVar1 = plVar11 + 2;
      plVar11 = plVar11 + 0xb;
      param_4 = param_4 + -1;
      *(char *)(param_2 + 0x14) = (char)*plVar1;
      param_2 = param_2 + 0x16;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1414bb580 FUN_1414bb580 body=200 status=ok
// SIG undefined FUN_1414bb580(void)

undefined8 FUN_1414bb580(undefined8 param_1,undefined4 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  
  if (param_4 != 0) {
    puVar6 = (undefined8 *)(param_3 + 0x18);
    do {
      uVar3 = *(undefined4 *)((longlong)puVar6 + -0x14);
      uVar4 = *(undefined4 *)(puVar6 + -2);
      uVar5 = *(undefined4 *)((longlong)puVar6 + -0xc);
      *param_2 = *(undefined4 *)(puVar6 + -3);
      param_2[1] = uVar3;
      param_2[2] = uVar4;
      param_2[3] = uVar5;
      puVar1 = (undefined8 *)(param_2 + 6);
      *(undefined8 *)(param_2 + 4) = puVar6[-1];
      if (puVar1 != puVar6) {
        iVar2 = *(int *)(puVar6 + 1);
        _Src = (void *)*puVar6;
        param_2[8] = iVar2;
        if ((iVar2 == 0) && (param_2[9] == 0)) {
          param_2[9] = 0;
        }
        else {
          TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 * 0x18);
        }
      }
      puVar6 = puVar6 + 5;
      param_4 = param_4 + -1;
      param_2 = param_2 + 10;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1414bb650 FUN_1414bb650 body=74 status=ok
// SIG undefined FUN_1414bb650(void)

undefined1 FUN_1414bb650(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_1414bad30(param_2 + param_3,param_3);
      param_3 = param_3 + 0x7a0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1414bb730 Copy body=196 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FEmoteIconState>::Copy
          (undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  
  if (param_4 != 0) {
    puVar3 = (undefined8 *)(param_3 + 0x10);
    do {
      *param_2 = puVar3[-2];
      puVar1 = param_2 + 2;
      param_2[1] = puVar3[-1];
      if (puVar1 != puVar3) {
        iVar2 = *(int *)(puVar3 + 1);
        _Src = (void *)*puVar3;
        *(int *)(param_2 + 3) = iVar2;
        if ((iVar2 == 0) && (*(int *)((longlong)param_2 + 0x1c) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar2);
          ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 << 3);
        }
      }
      puVar3 = puVar3 + 4;
      param_4 = param_4 + -1;
      param_2 = param_2 + 4;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1414bb800 FUN_1414bb800 body=282 status=ok
// SIG undefined FUN_1414bb800(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1414bb800(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  uVar8 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  if (param_4 != 0) {
    puVar9 = (undefined8 *)(param_3 + 8);
    local_28 = uVar8;
    do {
      *param_2 = puVar9[-1];
      puVar1 = param_2 + 1;
      plVar5 = (longlong *)puVar9[1];
      uVar6 = *puVar9;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      local_48 = uVar6;
      plStack_40 = plVar5;
      if (&local_48 != puVar1) {
        local_48 = *puVar1;
        plStack_40 = (longlong *)param_2[2];
        *puVar1 = uVar6;
        param_2[2] = plVar5;
        local_38 = uVar6;
        plStack_30 = plVar5;
      }
      plVar5 = plStack_40;
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_40 + 1;
        lVar7 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
      param_2[3] = puVar9[2];
      puVar1 = puVar9 + 3;
      uVar8 = 0;
      puVar9 = puVar9 + 5;
      *(undefined1 *)(param_2 + 4) = *(undefined1 *)puVar1;
      param_4 = param_4 + -1;
      param_2 = param_2 + 5;
    } while (param_4 != 0);
  }
  return CONCAT71((int7)(uVar8 >> 8),1);
}



// FUNCTION 1414bb930 FUN_1414bb930 body=55 status=ok
// SIG undefined FUN_1414bb930(void)

void FUN_1414bb930(void)

{
  undefined8 uVar1;
  
  if (DAT_14689e5e8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14689e5e8 = GetStaticEnum(FUN_1414bc710,uVar1,L"EShieldAttributeModificationSource");
  }
  return;
}



// FUNCTION 1414bb970 EShieldState_StaticEnum body=55 status=ok
// SIG undefined EShieldState_StaticEnum(void)

void EShieldState_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_14689e5e0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14689e5e0 = GetStaticEnum(FUN_1414bc740,uVar1,L"EShieldState");
  }
  return;
}



// FUNCTION 1414bb9b0 FUN_1414bb9b0 body=55 status=ok
// SIG undefined FUN_1414bb9b0(void)

void FUN_1414bb9b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14689e5f0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14689e5f0 = GetStaticEnum(FUN_1414bc770,uVar1,L"EStackOperator");
  }
  return;
}



// FUNCTION 1414bb9f0 FUN_1414bb9f0 body=162 status=ok
// SIG undefined FUN_1414bb9f0(void)

longlong FUN_1414bb9f0(void)

{
  if (DAT_14689eb30 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"RaidGameMode",&DAT_14689eb30,FUN_1414bbf30,0x600,0x1000000c,0
                  ,L"Game",&LAB_1414ba910,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,FUN_141425c60
                  ,&LAB_140447700,0);
  }
  return DAT_14689eb30;
}



// FUNCTION 1414bbaa0 FUN_1414bbaa0 body=162 status=ok
// SIG undefined FUN_1414bbaa0(void)

longlong FUN_1414bbaa0(void)

{
  if (DAT_14689eba8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"RaidGameState",&DAT_14689eba8,FUN_1414bbf60,0xbb0,0x10000004,
                  0,L"Game",&LAB_1414ba930,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,FUN_141424d10
                  ,&LAB_140447700,0);
  }
  return DAT_14689eba8;
}



// FUNCTION 1414bbb50 FUN_1414bbb50 body=162 status=ok
// SIG undefined FUN_1414bbb50(void)

longlong FUN_1414bbb50(void)

{
  if (DAT_14689edb8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"SeatPawn",&DAT_14689edb8,FUN_1414bbfc0,0x500,0x10000000,0,
                  L"Game",&LAB_1414ba9d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_14096dfa0,&LAB_140447700,0);
  }
  return DAT_14689edb8;
}



// FUNCTION 1414bbc00 FUN_1414bbc00 body=6 status=ok
// SIG undefined FUN_1414bbc00(void)

undefined8 FUN_1414bbc00(void)

{
  return 0x5cc6bf1d;
}



// FUNCTION 1414bbc10 FUN_1414bbc10 body=6 status=ok
// SIG undefined FUN_1414bbc10(void)

undefined8 FUN_1414bbc10(void)

{
  return 0x12efa545;
}



// FUNCTION 1414bbc20 FUN_1414bbc20 body=6 status=ok
// SIG undefined FUN_1414bbc20(void)

undefined8 FUN_1414bbc20(void)

{
  return 0xa0c4bb78;
}



// FUNCTION 1414bbc30 FUN_1414bbc30 body=6 status=ok
// SIG undefined FUN_1414bbc30(void)

undefined8 FUN_1414bbc30(void)

{
  return 0x5bf24f49;
}



// FUNCTION 1414bbc40 FUN_1414bbc40 body=6 status=ok
// SIG undefined FUN_1414bbc40(void)

undefined8 FUN_1414bbc40(void)

{
  return 0xc1856bdb;
}



// FUNCTION 1414bbc50 FUN_1414bbc50 body=6 status=ok
// SIG undefined FUN_1414bbc50(void)

undefined8 FUN_1414bbc50(void)

{
  return 0x337d27f1;
}



// FUNCTION 1414bbc60 FUN_1414bbc60 body=6 status=ok
// SIG undefined FUN_1414bbc60(void)

undefined8 FUN_1414bbc60(void)

{
  return 0x6bf81482;
}



// FUNCTION 1414bbc70 FUN_1414bbc70 body=6 status=ok
// SIG undefined FUN_1414bbc70(void)

undefined8 FUN_1414bbc70(void)

{
  return 0x460c2137;
}



// FUNCTION 1414bbc80 FUN_1414bbc80 body=6 status=ok
// SIG undefined FUN_1414bbc80(void)

undefined8 FUN_1414bbc80(void)

{
  return 0xc5758041;
}



// FUNCTION 1414bbc90 FUN_1414bbc90 body=6 status=ok
// SIG undefined FUN_1414bbc90(void)

undefined8 FUN_1414bbc90(void)

{
  return 0x29d2d461;
}



// FUNCTION 1414bbca0 FUN_1414bbca0 body=6 status=ok
// SIG undefined FUN_1414bbca0(void)

undefined8 FUN_1414bbca0(void)

{
  return 0x307be026;
}



// FUNCTION 1414bbcb0 FUN_1414bbcb0 body=57 status=ok
// SIG undefined FUN_1414bbcb0(void)

void FUN_1414bbcb0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14689e6e0);
                    /* WARNING: Could not recover jumptable at 0x0001414bbce6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1414bbcf0 FUN_1414bbcf0 body=61 status=ok
// SIG undefined FUN_1414bbcf0(void)

void FUN_1414bbcf0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_14689e6e8);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1414bbd30 FUN_1414bbd30 body=61 status=ok
// SIG undefined FUN_1414bbd30(void)

void FUN_1414bbd30(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_14689e6f0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1414bbd70 FUN_1414bbd70 body=71 status=ok
// SIG undefined FUN_1414bbd70(void)

void FUN_1414bbd70(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  uVar2 = FUN_14178ac60(param_1,DAT_14689eab0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_28);
  return;
}



// FUNCTION 1414bbde0 FUN_1414bbde0 body=57 status=ok
// SIG undefined FUN_1414bbde0(void)

void FUN_1414bbde0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14689e6f8);
                    /* WARNING: Could not recover jumptable at 0x0001414bbe16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1414bbe20 FUN_1414bbe20 body=66 status=ok
// SIG undefined FUN_1414bbe20(void)

void FUN_1414bbe20(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = *param_1;
  local_18 = param_2;
  local_10 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_14689ea88);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_18);
  return;
}



// FUNCTION 1414bbe70 FUN_1414bbe70 body=81 status=ok
// SIG undefined FUN_1414bbe70(void)

void FUN_1414bbe70(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = *param_1;
  local_10 = param_5;
  local_28 = param_2;
  local_20 = param_3;
  local_18 = param_4;
  uVar2 = FUN_14178ac60(param_1,DAT_14689ea90);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_28);
  return;
}



// FUNCTION 1414bbed0 FUN_1414bbed0 body=66 status=ok
// SIG undefined FUN_1414bbed0(void)

void FUN_1414bbed0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = *param_1;
  local_18 = param_2;
  local_10 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_14689ea98);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_18);
  return;
}



// FUNCTION 1414bbf30 FUN_1414bbf30 body=34 status=ok
// SIG undefined FUN_1414bbf30(void)

void FUN_1414bbf30(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1414bb9f0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_BroadcastLegComplete_144bb3520,8);
  return;
}



// FUNCTION 1414bbf60 FUN_1414bbf60 body=34 status=ok
// SIG undefined FUN_1414bbf60(void)

void FUN_1414bbf60(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1414bbaa0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_BroadcastAllPlayersDied_144bb35a0,6);
  return;
}



// FUNCTION 1414bbf90 FUN_1414bbf90 body=34 status=ok
// SIG undefined FUN_1414bbf90(void)

void FUN_1414bbf90(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1414b9a30();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ExitCase_144bb45e0,7);
  return;
}



// FUNCTION 1414bbfc0 FUN_1414bbfc0 body=34 status=ok
// SIG undefined FUN_1414bbfc0(void)

void FUN_1414bbfc0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1414bbb50();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AttachSeat_144bb4650,10);
  return;
}



// FUNCTION 1414bbff0 FUN_1414bbff0 body=34 status=ok
// SIG undefined FUN_1414bbff0(void)

void FUN_1414bbff0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1414ba680();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AddModifierToAttribute_144bb50b0,0x16);
  return;
}



// FUNCTION 1414bc020 StaticRegisterNativesUPVPScoresWidget body=34 status=ok
// SIG undefined StaticRegisterNativesUPVPScoresWidget(void)

void UPVPScoresWidget::StaticRegisterNativesUPVPScoresWidget(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SetPercent_144bb3e58,3);
  return;
}



// FUNCTION 1414bc050 StaticRegisterNativesULanguageItemCUnitWidget body=34 status=ok
// SIG undefined StaticRegisterNativesULanguageItemCUnitWidget(void)

void ULanguageItemCUnitWidget::StaticRegisterNativesULanguageItemCUnitWidget(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnGameEventCallback_144bb4398,1);
  return;
}



// FUNCTION 1414bc080 FUN_1414bc080 body=82 status=ok
// SIG undefined FUN_1414bc080(void)

void FUN_1414bc080(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14689ede8 == 0) {
    uVar1 = FUN_1414bbc00();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14689ede8 = GetStaticStruct(FUN_1414bc7a0,uVar2,L"AugmentData",0x30,uVar1);
  }
  return;
}



// FUNCTION 1414bc0e0 FUN_1414bc0e0 body=82 status=ok
// SIG undefined FUN_1414bc0e0(void)

void FUN_1414bc0e0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14689ebf0 == 0) {
    uVar1 = FUN_1414bbc10();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14689ebf0 = GetStaticStruct(FUN_1414bc7d0,uVar2,L"PlayThroughData",0x58,uVar1);
  }
  return;
}



// FUNCTION 1414bc140 FUN_1414bc140 body=82 status=ok
// SIG undefined FUN_1414bc140(void)

void FUN_1414bc140(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14689ec10 == 0) {
    uVar1 = FUN_1414bbc30();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14689ec10 = GetStaticStruct(FUN_1414bc800,uVar2,L"RegionBalanceData",0x28,uVar1);
  }
  return;
}



// FUNCTION 1414bc1a0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14689ec30 == 0) {
    uVar1 = FUN_1414bbc20();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14689ec30 = GetStaticStruct(FUN_1414ba300,uVar2,L"RegionBalanceDataBase",0x10,uVar1);
  }
  return;
}



// FUNCTION 1414bc200 FUN_1414bc200 body=82 status=ok
// SIG undefined FUN_1414bc200(void)

void FUN_1414bc200(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14689ebe0 == 0) {
    uVar1 = FUN_1414bbc40();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14689ebe0 = GetStaticStruct(FUN_1414bc830,uVar2,L"RegionBalancePreviewData",0xc,uVar1);
  }
  return;
}



// FUNCTION 1414bc260 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceKey::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14689ec20 == 0) {
    uVar1 = FUN_1414bbc50();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14689ec20 = GetStaticStruct(FUN_1414bc860,uVar2,L"RegionMissionBalanceData",0x18,uVar1);
  }
  return;
}



// FUNCTION 1414bc2c0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14689ec00 == 0) {
    uVar1 = FUN_1414bbc60();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14689ec00 = GetStaticStruct(FUN_1414bc890,uVar2,L"RegionSaveData",0x10,uVar1);
  }
  return;
}



// FUNCTION 1414bc320 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FGenericPushActorInfo::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14689ecb0 == 0) {
    uVar1 = FUN_1414bbc70();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14689ecb0 =
         GetStaticStruct(FUN_1414bc8c0,uVar2,L"RevolverVehicleAnimInstanceProxy",0x7a0,uVar1);
  }
  return;
}



// FUNCTION 1414bc380 FUN_1414bc380 body=82 status=ok
// SIG undefined FUN_1414bc380(void)

void FUN_1414bc380(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14689ecf0 == 0) {
    uVar1 = FUN_1414bbc80();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14689ecf0 = GetStaticStruct(FUN_1414bc8f0,uVar2,L"SDUCaseSpawner",0x88,uVar1);
  }
  return;
}



// FUNCTION 1414bc3e0 FUN_1414bc3e0 body=82 status=ok
// SIG undefined FUN_1414bc3e0(void)

void FUN_1414bc3e0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14689edd8 == 0) {
    uVar1 = FUN_1414bbc90();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14689edd8 = GetStaticStruct(FUN_1414bc920,uVar2,L"ShieldDamageModifierData",0x20,uVar1);
  }
  return;
}



// FUNCTION 1414bc440 FUN_1414bc440 body=82 status=ok
// SIG undefined FUN_1414bc440(void)

void FUN_1414bc440(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14689edf8 == 0) {
    uVar1 = FUN_1414bbca0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14689edf8 = GetStaticStruct(FUN_1414bc950,uVar2,L"TrackedShieldAttributeData",0x28,uVar1);
  }
  return;
}



// FUNCTION 1414bc4a0 FUN_1414bc4a0 body=47 status=ok
// SIG undefined FUN_1414bc4a0(void)

longlong FUN_1414bc4a0(void)

{
  if (DAT_14689eab8 == 0) {
    FUN_141786440(&DAT_14689eab8,&PTR_FUN_144bb25e0);
  }
  return DAT_14689eab8;
}



// FUNCTION 1414bc4d0 FUN_1414bc4d0 body=47 status=ok
// SIG undefined FUN_1414bc4d0(void)

longlong FUN_1414bc4d0(void)

{
  if (DAT_14689ec88 == 0) {
    FUN_141786440(&DAT_14689ec88,&PTR_FUN_144bb2d90);
  }
  return DAT_14689ec88;
}



// FUNCTION 1414bc500 FUN_1414bc500 body=47 status=ok
// SIG undefined FUN_1414bc500(void)

longlong FUN_1414bc500(void)

{
  if (DAT_14689ecd0 == 0) {
    FUN_141786440(&DAT_14689ecd0,&PTR_GetPrivateStaticClass_144baa7f0);
  }
  return DAT_14689ecd0;
}



// FUNCTION 1414bc530 FUN_1414bc530 body=47 status=ok
// SIG undefined FUN_1414bc530(void)

longlong FUN_1414bc530(void)

{
  if (DAT_14689ece0 == 0) {
    FUN_141786440(&DAT_14689ece0,&PTR_FUN_144bab1b0);
  }
  return DAT_14689ece0;
}



// FUNCTION 1414bc560 FUN_1414bc560 body=47 status=ok
// SIG undefined FUN_1414bc560(void)

longlong FUN_1414bc560(void)

{
  if (DAT_14689ebb0 == 0) {
    FUN_141786440(&DAT_14689ebb0,&PTR_GetPrivateStaticClass_144bac060);
  }
  return DAT_14689ebb0;
}



// FUNCTION 1414bc590 FUN_1414bc590 body=47 status=ok
// SIG undefined FUN_1414bc590(void)

longlong FUN_1414bc590(void)

{
  if (DAT_14689ebc0 == 0) {
    FUN_141786440(&DAT_14689ebc0,&PTR_FUN_144bb0cc0);
  }
  return DAT_14689ebc0;
}



// FUNCTION 1414bc5c0 FUN_1414bc5c0 body=47 status=ok
// SIG undefined FUN_1414bc5c0(void)

longlong FUN_1414bc5c0(void)

{
  if (DAT_14689ebd0 == 0) {
    FUN_141786440(&DAT_14689ebd0,&PTR_FUN_144bb1720);
  }
  return DAT_14689ebd0;
}



// FUNCTION 1414bc5f0 FUN_1414bc5f0 body=47 status=ok
// SIG undefined FUN_1414bc5f0(void)

longlong FUN_1414bc5f0(void)

{
  if (DAT_14689ec50 == 0) {
    FUN_141786440(&DAT_14689ec50,&PTR_FUN_144bb3160);
  }
  return DAT_14689ec50;
}



// FUNCTION 1414bc620 FUN_1414bc620 body=47 status=ok
// SIG undefined FUN_1414bc620(void)

longlong FUN_1414bc620(void)

{
  if (DAT_14689ec40 == 0) {
    FUN_141786440(&DAT_14689ec40,&PTR_GetPrivateStaticClass_144bb2ff0);
  }
  return DAT_14689ec40;
}



// FUNCTION 1414bc650 FUN_1414bc650 body=47 status=ok
// SIG undefined FUN_1414bc650(void)

longlong FUN_1414bc650(void)

{
  if (DAT_14689ecc0 == 0) {
    FUN_141786440(&DAT_14689ecc0,&PTR_FUN_144baa460);
  }
  return DAT_14689ecc0;
}



// FUNCTION 1414bc680 FUN_1414bc680 body=47 status=ok
// SIG undefined FUN_1414bc680(void)

longlong FUN_1414bc680(void)

{
  if (DAT_14689ee08 == 0) {
    FUN_141786440(&DAT_14689ee08,&PTR_FUN_144babda0);
  }
  return DAT_14689ee08;
}



// FUNCTION 1414bc6b0 FUN_1414bc6b0 body=47 status=ok
// SIG undefined FUN_1414bc6b0(void)

longlong FUN_1414bc6b0(void)

{
  if (DAT_14689ee28 == 0) {
    FUN_141786440(&DAT_14689ee28,&PTR_FUN_144bac200);
  }
  return DAT_14689ee28;
}



// FUNCTION 1414bc6e0 FUN_1414bc6e0 body=47 status=ok
// SIG undefined FUN_1414bc6e0(void)

longlong FUN_1414bc6e0(void)

{
  if (DAT_14689ee18 == 0) {
    FUN_141786440(&DAT_14689ee18,&PTR_GetPrivateStaticClass_144babf90);
  }
  return DAT_14689ee18;
}



// FUNCTION 1414bc710 FUN_1414bc710 body=47 status=ok
// SIG undefined FUN_1414bc710(void)

longlong FUN_1414bc710(void)

{
  if (DAT_14689edc8 == 0) {
    FUN_1417866a0(&DAT_14689edc8,&PTR_Z_Construct_UPackage__Script_MechWarrior_14645c020);
  }
  return DAT_14689edc8;
}



// FUNCTION 1414bc740 FUN_1414bc740 body=47 status=ok
// SIG undefined FUN_1414bc740(void)

longlong FUN_1414bc740(void)

{
  if (DAT_14689edc0 == 0) {
    FUN_1417866a0(&DAT_14689edc0,&PTR_Z_Construct_UPackage__Script_MechWarrior_14645bfd0);
  }
  return DAT_14689edc0;
}



// FUNCTION 1414bc770 FUN_1414bc770 body=47 status=ok
// SIG undefined FUN_1414bc770(void)

longlong FUN_1414bc770(void)

{
  if (DAT_14689edd0 == 0) {
    FUN_1417866a0(&DAT_14689edd0,&PTR_Z_Construct_UPackage__Script_MechWarrior_14645c070);
  }
  return DAT_14689edd0;
}



// FUNCTION 1414bc7a0 FUN_1414bc7a0 body=47 status=ok
// SIG undefined FUN_1414bc7a0(void)

longlong FUN_1414bc7a0(void)

{
  if (DAT_14689edf0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14689edf0,&PTR_Z_Construct_UPackage__Script_MechWarrior_14645a450);
  }
  return DAT_14689edf0;
}



// FUNCTION 1414bc7d0 FUN_1414bc7d0 body=47 status=ok
// SIG undefined FUN_1414bc7d0(void)

longlong FUN_1414bc7d0(void)

{
  if (DAT_14689ebf8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14689ebf8,&PTR_Z_Construct_UPackage__Script_MechWarrior_146457d80);
  }
  return DAT_14689ebf8;
}



// FUNCTION 1414bc800 FUN_1414bc800 body=47 status=ok
// SIG undefined FUN_1414bc800(void)

longlong FUN_1414bc800(void)

{
  if (DAT_14689ec18 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14689ec18,&PTR_Z_Construct_UPackage__Script_MechWarrior_146457f80);
  }
  return DAT_14689ec18;
}



// FUNCTION 1414bc830 FUN_1414bc830 body=47 status=ok
// SIG undefined FUN_1414bc830(void)

longlong FUN_1414bc830(void)

{
  if (DAT_14689ebe8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14689ebe8,&PTR_Z_Construct_UPackage__Script_MechWarrior_146457bb0);
  }
  return DAT_14689ebe8;
}



// FUNCTION 1414bc860 FUN_1414bc860 body=47 status=ok
// SIG undefined FUN_1414bc860(void)

longlong FUN_1414bc860(void)

{
  if (DAT_14689ec28 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14689ec28,&PTR_Z_Construct_UPackage__Script_MechWarrior_146458020);
  }
  return DAT_14689ec28;
}



// FUNCTION 1414bc890 FUN_1414bc890 body=47 status=ok
// SIG undefined FUN_1414bc890(void)

longlong FUN_1414bc890(void)

{
  if (DAT_14689ec08 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14689ec08,&PTR_Z_Construct_UPackage__Script_MechWarrior_146457e80);
  }
  return DAT_14689ec08;
}



// FUNCTION 1414bc8c0 FUN_1414bc8c0 body=47 status=ok
// SIG undefined FUN_1414bc8c0(void)

longlong FUN_1414bc8c0(void)

{
  if (DAT_14689ecb8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14689ecb8,&PTR_Z_Construct_UPackage__Script_MechWarrior_146458b60);
  }
  return DAT_14689ecb8;
}



// FUNCTION 1414bc8f0 FUN_1414bc8f0 body=47 status=ok
// SIG undefined FUN_1414bc8f0(void)

longlong FUN_1414bc8f0(void)

{
  if (DAT_14689ecf8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14689ecf8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1464591e0);
  }
  return DAT_14689ecf8;
}



// FUNCTION 1414bc920 FUN_1414bc920 body=47 status=ok
// SIG undefined FUN_1414bc920(void)

longlong FUN_1414bc920(void)

{
  if (DAT_14689ede0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14689ede0,&PTR_Z_Construct_UPackage__Script_MechWarrior_14645a200);
  }
  return DAT_14689ede0;
}



// FUNCTION 1414bc950 FUN_1414bc950 body=47 status=ok
// SIG undefined FUN_1414bc950(void)

longlong FUN_1414bc950(void)

{
  if (DAT_14689ee00 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14689ee00,&PTR_Z_Construct_UPackage__Script_MechWarrior_14645a570);
  }
  return DAT_14689ee00;
}



// FUNCTION 1414bc980 FUN_1414bc980 body=437 status=ok
// SIG undefined FUN_1414bc980(void)

void FUN_1414bc980(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_38[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_30 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_30);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
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
  FUN_140b1a410(param_1,local_20,local_28,local_38[0],local_res20[0],local_30,local_res10[0]);
  return;
}



// FUNCTION 1414bcb40 FUN_1414bcb40 body=195 status=ok
// SIG undefined FUN_1414bcb40(void)

void FUN_1414bcb40(longlong *param_1,longlong param_2)

{
  undefined8 local_res8;
  undefined8 local_res10;
  
  local_res8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res8);
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
  (**(code **)(*param_1 + 0x850))(param_1,local_res8,local_res10);
  return;
}



// FUNCTION 1414bcc30 FUN_1414bcc30 body=126 status=ok
// SIG undefined FUN_1414bcc30(void)

void FUN_1414bcc30(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  
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
  FUN_140e72980(param_1,local_res10[0]);
  return;
}



// FUNCTION 1414bccb0 FUN_1414bccb0 body=130 status=ok
// SIG undefined FUN_1414bccb0(void)

void FUN_1414bccb0(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x818))(param_1,local_res8[0]);
  return;
}



// FUNCTION 1414bcd40 execClientSpawnCameraLensEffect body=132 status=ok
// SIG undefined execClientSpawnCameraLensEffect(void)

void APlayerController::execClientSpawnCameraLensEffect(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x830))(param_1,local_res8);
  return;
}



// FUNCTION 1414bcdd0 FUN_1414bcdd0 body=126 status=ok
// SIG undefined FUN_1414bcdd0(void)

void FUN_1414bcdd0(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  
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
  FUN_140e73210(param_1,local_res10[0]);
  return;
}



// FUNCTION 1414bce50 FUN_1414bce50 body=130 status=ok
// SIG undefined FUN_1414bce50(void)

void FUN_1414bce50(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x820))(param_1,local_res8[0]);
  return;
}



// FUNCTION 1414bcf00 FUN_1414bcf00 body=45 status=ok
// SIG undefined FUN_1414bcf00(void)

void FUN_1414bcf00(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140b279e0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414bcf30 FUN_1414bcf30 body=52 status=ok
// SIG undefined FUN_1414bcf30(void)

void FUN_1414bcf30(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [24];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_140b28030(param_1,local_res10);
  *param_3 = *puVar1;
  return;
}



// FUNCTION 1414bcf70 FUN_1414bcf70 body=43 status=ok
// SIG undefined FUN_1414bcf70(void)

void FUN_1414bcf70(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140e80bf0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414bcfa0 FUN_1414bcfa0 body=43 status=ok
// SIG undefined FUN_1414bcfa0(void)

void FUN_1414bcfa0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140e80cd0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414bcfd0 FUN_1414bcfd0 body=145 status=ok
// SIG undefined FUN_1414bcfd0(void)

void FUN_1414bcfd0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_140e80df0(param_1,local_res10[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414bd090 FUN_1414bd090 body=144 status=ok
// SIG undefined FUN_1414bd090(void)

void FUN_1414bd090(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_140e85b90(param_1,local_res10[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414bd140 FUN_1414bd140 body=43 status=ok
// SIG undefined FUN_1414bd140(void)

void FUN_1414bd140(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140b31d50();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414bd170 FUN_1414bd170 body=243 status=ok
// SIG undefined FUN_1414bd170(void)

void FUN_1414bd170(longlong *param_1,longlong param_2)

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
  local_res8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res8);
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
  (**(code **)(*param_1 + 0x708))(param_1,local_res20,local_res8,local_res10[0]);
  return;
}



// FUNCTION 1414bd270 FUN_1414bd270 body=210 status=ok
// SIG undefined FUN_1414bd270(void)

void FUN_1414bd270(long param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
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
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  return;
}



// FUNCTION 1414bd350 FUN_1414bd350 body=118 status=ok
// SIG undefined FUN_1414bd350(void)

void FUN_1414bd350(undefined8 param_1,longlong param_2)

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
  FUN_140e88710(param_1,local_res10[0]);
  return;
}



// FUNCTION 1414bd3d0 FUN_1414bd3d0 body=126 status=ok
// SIG undefined FUN_1414bd3d0(void)

void FUN_1414bd3d0(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  
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
  FUN_140e88da0(param_1,local_res10[0]);
  return;
}



// FUNCTION 1414bd470 FUN_1414bd470 body=128 status=ok
// SIG undefined FUN_1414bd470(void)

void FUN_1414bd470(undefined8 param_1,longlong param_2)

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
  FUN_140b38690(param_1,local_res10);
  return;
}



// FUNCTION 1414bd4f0 FUN_1414bd4f0 body=118 status=ok
// SIG undefined FUN_1414bd4f0(void)

void FUN_1414bd4f0(undefined8 param_1,longlong param_2)

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
  FUN_140b388c0(param_1,local_res10[0]);
  return;
}



// FUNCTION 1414bd590 FUN_1414bd590 body=128 status=ok
// SIG undefined FUN_1414bd590(void)

void FUN_1414bd590(undefined8 param_1,longlong param_2)

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
  FUN_140b38d30(param_1,local_res10);
  return;
}



// FUNCTION 1414bd630 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_140b38e90(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 1414bd6f0 FUN_1414bd6f0 body=159 status=ok
// SIG undefined FUN_1414bd6f0(void)

void FUN_1414bd6f0(undefined8 param_1,longlong param_2)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_48 = CONCAT31(local_48._1_3_,0xff);
  uStack_40 = 0;
  local_38 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_18 = CONCAT44(uStack_34,local_38);
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = (undefined4)uStack_40;
  uStack_1c = uStack_40._4_4_;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140b39050(param_1,&local_28);
  return;
}



// FUNCTION 1414bd790 FUN_1414bd790 body=128 status=ok
// SIG undefined FUN_1414bd790(void)

void FUN_1414bd790(undefined8 param_1,longlong param_2)

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
  FUN_140b394d0(param_1,local_res10);
  return;
}



// FUNCTION 1414bd810 FUN_1414bd810 body=159 status=ok
// SIG undefined FUN_1414bd810(void)

void FUN_1414bd810(undefined8 param_1,longlong param_2)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_48 = CONCAT31(local_48._1_3_,0xff);
  uStack_40 = 0;
  local_38 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_18 = CONCAT44(uStack_34,local_38);
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = (undefined4)uStack_40;
  uStack_1c = uStack_40._4_4_;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140b39c90(param_1,&local_28);
  return;
}



// FUNCTION 1414bd8b0 FUN_1414bd8b0 body=159 status=ok
// SIG undefined FUN_1414bd8b0(void)

void FUN_1414bd8b0(undefined8 param_1,longlong param_2)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_48 = CONCAT31(local_48._1_3_,0xff);
  uStack_40 = 0;
  local_38 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_18 = CONCAT44(uStack_34,local_38);
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = (undefined4)uStack_40;
  uStack_1c = uStack_40._4_4_;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140b39e70(param_1,&local_28);
  return;
}



// FUNCTION 1414bd950 FUN_1414bd950 body=159 status=ok
// SIG undefined FUN_1414bd950(void)

void FUN_1414bd950(undefined8 param_1,longlong param_2)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_48 = CONCAT31(local_48._1_3_,0xff);
  uStack_40 = 0;
  local_38 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_18 = CONCAT44(uStack_34,local_38);
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = (undefined4)uStack_40;
  uStack_1c = uStack_40._4_4_;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140b3a060(param_1,&local_28);
  return;
}



// FUNCTION 1414bd9f0 FUN_1414bd9f0 body=128 status=ok
// SIG undefined FUN_1414bd9f0(void)

void FUN_1414bd9f0(undefined8 param_1,longlong param_2)

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
  FUN_140b3a250(param_1,local_res10);
  return;
}



// FUNCTION 1414bda70 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_140b3aab0(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 1414bdb30 FUN_1414bdb30 body=298 status=ok
// SIG undefined FUN_1414bdb30(void)

void FUN_1414bdb30(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined8 local_res10;
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined2 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  longlong local_20;
  undefined8 local_18;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_38 = 0;
  local_34 = 0;
  local_2c = 0x3f800000;
  local_28 = 0x3f800000;
  local_20 = 0;
  local_18 = 0;
  local_58[0] = 0;
  local_54 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 1;
  local_3c = 0;
  local_30 = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar1 = local_58;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140b3ac70(param_1,local_res10,puVar1);
  if (local_20 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1414bdc60 FUN_1414bdc60 body=128 status=ok
// SIG undefined FUN_1414bdc60(void)

void FUN_1414bdc60(undefined8 param_1,longlong param_2)

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
  FUN_140e8e6b0(param_1,local_res10);
  return;
}



// FUNCTION 1414bdce0 FUN_1414bdce0 body=255 status=ok
// SIG undefined FUN_1414bdce0(void)

void FUN_1414bdce0(undefined8 param_1,longlong param_2)

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
  FUN_140b3cf80(param_1,local_18[0],local_res20,local_res10[0]);
  return;
}



// FUNCTION 1414bde20 FUN_1414bde20 body=130 status=ok
// SIG undefined FUN_1414bde20(void)

void FUN_1414bde20(undefined8 param_1,longlong param_2)

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
  FUN_140e91000(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1414bdeb0 FUN_1414bdeb0 body=123 status=ok
// SIG undefined FUN_1414bdeb0(void)

void FUN_1414bdeb0(undefined8 param_1,longlong param_2)

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
  FUN_1411fa660(param_1,local_res10[0]);
  return;
}



// FUNCTION 1414bdf30 FUN_1414bdf30 body=192 status=ok
// SIG undefined FUN_1414bdf30(void)

void FUN_1414bdf30(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [24];
  
  FText::FText(local_38);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar5 = FText::FText(local_20,local_38);
  FUN_1411fad10(param_1,uVar5);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return;
}



// FUNCTION 1414bdff0 FUN_1414bdff0 body=192 status=ok
// SIG undefined FUN_1414bdff0(void)

void FUN_1414bdff0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [24];
  
  FText::FText(local_38);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar5 = FText::FText(local_20,local_38);
  FUN_1411fada0(param_1,uVar5);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return;
}



// FUNCTION 1414be0b0 execOnOwnerEndPlay body=192 status=ok
// SIG undefined execOnOwnerEndPlay(void)

void UAIPerceptionComponent::execOnOwnerEndPlay(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [8];
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
  FUN_140e93a20(param_1,local_res20,local_res10[0]);
  return;
}



// FUNCTION 1414be190 FUN_1414be190 body=128 status=ok
// SIG undefined FUN_1414be190(void)

void FUN_1414be190(undefined8 param_1,longlong param_2)

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
  FUN_140e93c00(param_1,local_res10);
  return;
}



// FUNCTION 1414be210 execOnOwnerEndPlay body=192 status=ok
// SIG undefined execOnOwnerEndPlay(void)

void UAIPerceptionComponent::execOnOwnerEndPlay(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [8];
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
  FUN_140e93c40(param_1,local_res20,local_res10[0]);
  return;
}



// FUNCTION 1414be2d0 FUN_1414be2d0 body=130 status=ok
// SIG undefined FUN_1414be2d0(void)

void FUN_1414be2d0(undefined8 param_1,longlong param_2)

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
  FUN_140e93ca0(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1414be360 FUN_1414be360 body=53 status=ok
// SIG undefined FUN_1414be360(void)

void FUN_1414be360(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &PTR_FUN_144bbc200;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414be3c0 FUN_1414be3c0 body=162 status=ok
// SIG undefined FUN_1414be3c0(void)

longlong FUN_1414be3c0(void)

{
  if (DAT_14689f1b0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"ShieldAugment_Absorb",&DAT_14689f1b0,FUN_140447710,0x1a0,
                  0x10000000,0,L"Engine",&LAB_1414bf710,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1414bf1a0,&LAB_140447700,0);
  }
  return DAT_14689f1b0;
}



// FUNCTION 1414be470 FUN_1414be470 body=53 status=ok
// SIG undefined FUN_1414be470(void)

void FUN_1414be470(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &PTR_FUN_144bbc348;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414be4b0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGStreamInteractConnectionUW::GetPrivateStaticClass(void)

{
  if (DAT_14689f298 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"ShieldAugment_Spike",&DAT_14689f298,FUN_140447710,0x248,
                  0x10000000,0,L"Engine",&LAB_1414bf810,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1414bf1a0,&LAB_140447700,0);
  }
  return DAT_14689f298;
}



// FUNCTION 1414be570 FUN_1414be570 body=53 status=ok
// SIG undefined FUN_1414be570(void)

void FUN_1414be570(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &PTR_FUN_144bbc8a8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414be5b0 FUN_1414be5b0 body=162 status=ok
// SIG undefined FUN_1414be5b0(void)

longlong FUN_1414be5b0(void)

{
  if (DAT_14689f1d0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"ShieldAugment_Adaptive",&DAT_14689f1d0,FUN_140447710,0x118,
                  0x10000000,0,L"Engine",&LAB_1414bf720,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1414bf1a0,&LAB_140447700,0);
  }
  return DAT_14689f1d0;
}



// FUNCTION 1414be660 FUN_1414be660 body=53 status=ok
// SIG undefined FUN_1414be660(void)

void FUN_1414be660(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &PTR_FUN_144bbc9c0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414be6b0 FUN_1414be6b0 body=47 status=ok
// SIG undefined FUN_1414be6b0(void)

longlong FUN_1414be6b0(void)

{
  if (DAT_14689f2a8 == 0) {
    FUN_141786a30(&DAT_14689f2a8,&PTR_FUN_14645fe70);
  }
  return DAT_14689f2a8;
}



// FUNCTION 1414be6e0 FUN_1414be6e0 body=47 status=ok
// SIG undefined FUN_1414be6e0(void)

longlong FUN_1414be6e0(void)

{
  if (DAT_14689f2b0 == 0) {
    FUN_141786a30(&DAT_14689f2b0,&PTR_FUN_14645ff70);
  }
  return DAT_14689f2b0;
}



// FUNCTION 1414be730 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMovieSceneSoundSetSection::GetPrivateStaticClass(void)

{
  if (DAT_14689f1e0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"ShieldAugment_Amp",&DAT_14689f1e0,FUN_140447710,0x128,
                  0x10000000,0,L"Engine",&LAB_1414bf730,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1414bf1a0,&LAB_140447700,0);
  }
  return DAT_14689f1e0;
}



// FUNCTION 1414be7f0 FUN_1414be7f0 body=162 status=ok
// SIG undefined FUN_1414be7f0(void)

longlong FUN_1414be7f0(void)

{
  if (DAT_14689f2d0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"ShieldAugmentAspectData",&DAT_14689f2d0,FUN_140447710,0x40,
                  0x10000000,0,L"Engine",FUN_1414bf6b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14301f6e0,&LAB_140447700,0);
  }
  return DAT_14689f2d0;
}



// FUNCTION 1414be8a0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UFGPoleDescriptor::GetPrivateStaticClass(void)

{
  if (DAT_14689f200 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"ShieldAugment_Attribute",&DAT_14689f200,FUN_140447710,0x198,
                  0x10000000,0,L"Engine",FUN_1414bf740,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1414bf1a0,&LAB_140447700,0);
  }
  return DAT_14689f200;
}



// FUNCTION 1414be960 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AInteractiveFoliageActor::GetPrivateStaticClass(void)

{
  if (DAT_14689f2f0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"ShieldBalanceStateComponent",&DAT_14689f2f0,FUN_140447710,
                  0x3a0,0x10000000,0,L"Engine",FUN_1414bf830,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14142bde0,&LAB_140447700,0);
  }
  return DAT_14689f2f0;
}



// FUNCTION 1414bea10 FUN_1414bea10 body=53 status=ok
// SIG undefined FUN_1414bea10(void)

void FUN_1414bea10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_144bbc770;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}


