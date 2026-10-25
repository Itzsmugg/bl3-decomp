// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142a173f0 Destruct body=75 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FSplineCurves>::Destruct(undefined8 param_1,longlong *param_2)

{
  if (param_2[9] != 0) {
    FMemory::Free();
  }
  if (param_2[6] != 0) {
    FMemory::Free();
  }
  if (param_2[3] != 0) {
    FMemory::Free();
  }
  if (*param_2 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142a17450 EAudioRecordingExportType_StaticEnum body=55 status=ok
// SIG undefined EAudioRecordingExportType_StaticEnum(void)

void EAudioRecordingExportType_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b28080 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b28080 = GetStaticEnum(FUN_142a184d0,uVar1,L"EAudioRecordingExportType");
  }
  return;
}



// FUNCTION 142a17490 EDecompressionType_StaticEnum body=55 status=ok
// SIG undefined EDecompressionType_StaticEnum(void)

void EDecompressionType_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b28058 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b28058 = GetStaticEnum(FUN_142a18500,uVar1,L"EDecompressionType");
  }
  return;
}



// FUNCTION 142a174d0 ESourceBusChannels_StaticEnum body=55 status=ok
// SIG undefined ESourceBusChannels_StaticEnum(void)

void ESourceBusChannels_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b28078 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b28078 = GetStaticEnum(FUN_142a18530,uVar1,L"ESourceBusChannels");
  }
  return;
}



// FUNCTION 142a17510 ESplineCoordinateSpace_StaticEnum body=55 status=ok
// SIG undefined ESplineCoordinateSpace_StaticEnum(void)

void ESplineCoordinateSpace_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b28068 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b28068 = GetStaticEnum(FUN_142a18560,uVar1,L"ESplineCoordinateSpace");
  }
  return;
}



// FUNCTION 142a17550 ESplinePointType_StaticEnum body=55 status=ok
// SIG undefined ESplinePointType_StaticEnum(void)

void ESplinePointType_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b28070 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b28070 = GetStaticEnum(FUN_142a18590,uVar1,L"ESplinePointType");
  }
  return;
}



// FUNCTION 142a17590 ESubmixChannelFormat_StaticEnum body=55 status=ok
// SIG undefined ESubmixChannelFormat_StaticEnum(void)

void ESubmixChannelFormat_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b28088 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b28088 = GetStaticEnum(FUN_142a185c0,uVar1,L"ESubmixChannelFormat");
  }
  return;
}



// FUNCTION 142a175d0 GetCallbackSizeBytes body=6 status=ok
// SIG undefined GetCallbackSizeBytes(void)

undefined8 CCallbackImpl<1>::GetCallbackSizeBytes(void)

{
  return 1;
}



// FUNCTION 142a175e0 FUN_142a175e0 body=162 status=ok
// SIG undefined FUN_142a175e0(void)

longlong FUN_142a175e0(void)

{
  if (DAT_146b283b8 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"SphereComponent",&DAT_146b283b8,FUN_142a17b70,0x720,0x10000000
                  ,0,L"Engine",&LAB_142a16ab0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142a047d0,&LAB_140447700,0);
  }
  return DAT_146b283b8;
}



// FUNCTION 142a17690 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGNewsMenuItem::GetPrivateStaticClass(void)

{
  if (DAT_146b286d0 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"SplineComponent",&DAT_146b286d0,
                  UConditionals::StaticRegisterNativesUConditionals,0x7e0,0x10000000,0,L"Engine",
                  &LAB_142a16af0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14079feb0,&LAB_140447700,0);
  }
  return DAT_146b286d0;
}



// FUNCTION 142a17740 Get_Z_Construct_UScriptStruct_FDistanceDatum_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FDistanceDatum_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FDistanceDatum_CRC(void)

{
  return 0x6a419129;
}



// FUNCTION 142a17750 FUN_142a17750 body=6 status=ok
// SIG undefined FUN_142a17750(void)

undefined8 FUN_142a17750(void)

{
  return 0x94a3b046;
}



// FUNCTION 142a17760 FUN_142a17760 body=6 status=ok
// SIG undefined FUN_142a17760(void)

undefined8 FUN_142a17760(void)

{
  return 0x749fb689;
}



// FUNCTION 142a17770 FUN_142a17770 body=6 status=ok
// SIG undefined FUN_142a17770(void)

undefined8 FUN_142a17770(void)

{
  return 0xe1285938;
}



// FUNCTION 142a17780 Get_Z_Construct_UScriptStruct_FModulatorContinuousParams_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FModulatorContinuousParams_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FModulatorContinuousParams_CRC(void)

{
  return 0x4a5d485b;
}



// FUNCTION 142a17790 Get_Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_CRC(void)

{
  return 0xfee870ad;
}



// FUNCTION 142a177a0 Get_Z_Construct_UScriptStruct_FSoundSubmixSendInfo_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FSoundSubmixSendInfo_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FSoundSubmixSendInfo_CRC(void)

{
  return 0x4bcca1a4;
}



// FUNCTION 142a177b0 Get_Z_Construct_UScriptStruct_FSplineCurves_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FSplineCurves_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FSplineCurves_CRC(void)

{
  return 0x9a7e4acc;
}



// FUNCTION 142a177c0 Get_Z_Construct_UScriptStruct_FSplinePoint_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FSplinePoint_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FSplinePoint_CRC(void)

{
  return 0x37dc4262;
}



// FUNCTION 142a177d0 Get_Z_Construct_UScriptStruct_FStreamedAudioPlatformData_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FStreamedAudioPlatformData_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FStreamedAudioPlatformData_CRC(void)

{
  return 0x5154e010;
}



// FUNCTION 142a177e0 FUN_142a177e0 body=83 status=ok
// SIG undefined FUN_142a177e0(void)

void FUN_142a177e0(void)

{
  LowLevelFatalErrorHandler
            ("Runtime\\Engine/Classes/Sound/SoundNodeAssetReferencer.h",0x14,
             L"Pure virtual not implemented (%s)",L"USoundNodesAssetReferencer::LoadAsset");
  FDebug::AssertFailed
            (&DAT_143f3f584,"Runtime\\Engine/Classes/Sound/SoundNodeAssetReferencer.h",0x14,
             L"Pure virtual not implemented (%s)",L"USoundNodesAssetReferencer::LoadAsset");
  return;
}



// FUNCTION 142a17840 ModulationParamMode_StaticEnum body=55 status=ok
// SIG undefined ModulationParamMode_StaticEnum(void)

void ModulationParamMode_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b28060 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b28060 = GetStaticEnum(FUN_142a185f0,uVar1,L"ModulationParamMode");
  }
  return;
}



// FUNCTION 142a17910 Serialize body=112 status=ok
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
  USoundNode::Serialize(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 142a17980 Serialize body=112 status=ok
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
  USoundNodeEnveloper::Serialize(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 142a179f0 Serialize body=112 status=ok
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
  FUN_14280f7f0(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 142a17a60 Serialize body=112 status=ok
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
  FUN_14280f890(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 142a17ad0 Serialize body=112 status=ok
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
  FUN_1423b9550(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 142a17b40 FUN_142a17b40 body=34 status=ok
// SIG undefined FUN_142a17b40(void)

void FUN_142a17b40(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142a14bf0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_StartRecordingOutput_1453448a0,2);
  return;
}



// FUNCTION 142a17b70 FUN_142a17b70 body=34 status=ok
// SIG undefined FUN_142a17b70(void)

void FUN_142a17b70(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142a175e0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetScaledSphereRadius_145344a70,4);
  return;
}



// FUNCTION 142a17ba0 StaticRegisterNativesUConditionals body=34 status=ok
// SIG undefined StaticRegisterNativesUConditionals(void)

void UConditionals::StaticRegisterNativesUConditionals(void)

{
  undefined8 uVar1;
  
  uVar1 = UGNewsMenuItem::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AddPoint_1453450a0,0x51);
  return;
}



// FUNCTION 142a17bd0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FDistanceDatum::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b28190 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FDistanceDatum_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b28190 = GetStaticStruct(FUN_142a18620,uVar2,L"DistanceDatum",0x14,uVar1);
  }
  return;
}



// FUNCTION 142a17c30 FUN_142a17c30 body=82 status=ok
// SIG undefined FUN_142a17c30(void)

void FUN_142a17c30(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b28410 == 0) {
    uVar1 = FUN_142a17750();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b28410 = GetStaticStruct(FUN_142a18650,uVar2,L"EditorMarker",0x18,uVar1);
  }
  return;
}



// FUNCTION 142a17c90 FUN_142a17c90 body=82 status=ok
// SIG undefined FUN_142a17c90(void)

void FUN_142a17c90(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b283c0 == 0) {
    uVar1 = FUN_142a17760();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b283c0 = GetStaticStruct(FUN_142a18680,uVar2,L"KSphereElem",0xb0,uVar1);
  }
  return;
}



// FUNCTION 142a17cf0 FUN_142a17cf0 body=82 status=ok
// SIG undefined FUN_142a17cf0(void)

void FUN_142a17cf0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b283f0 == 0) {
    uVar1 = FUN_142a17770();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b283f0 = GetStaticStruct(FUN_142a186b0,uVar2,L"KSphylElem",0xd0,uVar1);
  }
  return;
}



// FUNCTION 142a17d50 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FModulatorContinuousParams::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b28228 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FModulatorContinuousParams_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b28228 = GetStaticStruct(FUN_142a186e0,uVar2,L"ModulatorContinuousParams",0x20,uVar1);
  }
  return;
}



// FUNCTION 142a17db0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FSoundSourceBusSendInfo::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b282e0 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b282e0 = GetStaticStruct(FUN_142a18710,uVar2,L"SoundSourceBusSendInfo",0x10,uVar1);
  }
  return;
}



// FUNCTION 142a17e10 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FSoundSubmixSendInfo::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b28308 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FSoundSubmixSendInfo_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b28308 = GetStaticStruct(FUN_142a18740,uVar2,L"SoundSubmixSendInfo",0x10,uVar1);
  }
  return;
}



// FUNCTION 142a17e70 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FSplineCurves::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b28430 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FSplineCurves_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b28430 = GetStaticStruct(FUN_142a18770,uVar2,L"SplineCurves",0x60,uVar1);
  }
  return;
}



// FUNCTION 142a17ed0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FSplinePoint::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b28420 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FSplinePoint_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b28420 = GetStaticStruct(FUN_142a187a0,uVar2,L"SplinePoint",0x44,uVar1);
  }
  return;
}



// FUNCTION 142a17f30 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FStreamedAudioPlatformData::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b28340 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FStreamedAudioPlatformData_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b28340 = GetStaticStruct(FUN_142a187d0,uVar2,L"StreamedAudioPlatformData",0x20,uVar1);
  }
  return;
}



// FUNCTION 142a17f90 FUN_142a17f90 body=47 status=ok
// SIG undefined FUN_142a17f90(void)

longlong FUN_142a17f90(void)

{
  if (DAT_146b28370 == 0) {
    FUN_141786440(&DAT_146b28370,&PTR_GetPrivateStaticClass_14533cc90);
  }
  return DAT_146b28370;
}



// FUNCTION 142a17fc0 FUN_142a17fc0 body=47 status=ok
// SIG undefined FUN_142a17fc0(void)

longlong FUN_142a17fc0(void)

{
  if (DAT_146b283d0 == 0) {
    FUN_141786440(&DAT_146b283d0,&PTR_GetPrivateStaticClass_14533e670);
  }
  return DAT_146b283d0;
}



// FUNCTION 142a17ff0 FUN_142a17ff0 body=47 status=ok
// SIG undefined FUN_142a17ff0(void)

longlong FUN_142a17ff0(void)

{
  if (DAT_146b28140 == 0) {
    FUN_141786440(&DAT_146b28140,&PTR_StaticClass_14533e9c0);
  }
  return DAT_146b28140;
}



// FUNCTION 142a18020 FUN_142a18020 body=47 status=ok
// SIG undefined FUN_142a18020(void)

longlong FUN_142a18020(void)

{
  if (DAT_146b28150 == 0) {
    FUN_141786440(&DAT_146b28150,&PTR_StaticClass_14533ee30);
  }
  return DAT_146b28150;
}



// FUNCTION 142a18050 FUN_142a18050 body=47 status=ok
// SIG undefined FUN_142a18050(void)

longlong FUN_142a18050(void)

{
  if (DAT_146b28160 == 0) {
    FUN_141786440(&DAT_146b28160,&PTR_StaticClass_14533f320);
  }
  return DAT_146b28160;
}



// FUNCTION 142a18080 FUN_142a18080 body=47 status=ok
// SIG undefined FUN_142a18080(void)

longlong FUN_142a18080(void)

{
  if (DAT_146b28170 == 0) {
    FUN_141786440(&DAT_146b28170,&PTR_StaticClass_14533f740);
  }
  return DAT_146b28170;
}



// FUNCTION 142a180b0 FUN_142a180b0 body=47 status=ok
// SIG undefined FUN_142a180b0(void)

longlong FUN_142a180b0(void)

{
  if (DAT_146b28180 == 0) {
    FUN_141786440(&DAT_146b28180,&PTR_StaticClass_145340e70);
  }
  return DAT_146b28180;
}



// FUNCTION 142a180e0 FUN_142a180e0 body=47 status=ok
// SIG undefined FUN_142a180e0(void)

longlong FUN_142a180e0(void)

{
  if (DAT_146b281b0 == 0) {
    FUN_141786440(&DAT_146b281b0,&PTR_StaticClass_14533d8a0);
  }
  return DAT_146b281b0;
}



// FUNCTION 142a18110 FUN_142a18110 body=47 status=ok
// SIG undefined FUN_142a18110(void)

longlong FUN_142a18110(void)

{
  if (DAT_146b281c0 == 0) {
    FUN_141786440(&DAT_146b281c0,&PTR_StaticClass_14533ddc0);
  }
  return DAT_146b281c0;
}



// FUNCTION 142a18140 FUN_142a18140 body=47 status=ok
// SIG undefined FUN_142a18140(void)

longlong FUN_142a18140(void)

{
  if (DAT_146b281d0 == 0) {
    FUN_141786440(&DAT_146b281d0,&PTR_StaticClass_14533e3b0);
  }
  return DAT_146b281d0;
}



// FUNCTION 142a18170 FUN_142a18170 body=47 status=ok
// SIG undefined FUN_142a18170(void)

longlong FUN_142a18170(void)

{
  if (DAT_146b281e0 == 0) {
    FUN_141786440(&DAT_146b281e0,&PTR_StaticClass_14533e810);
  }
  return DAT_146b281e0;
}



// FUNCTION 142a181a0 FUN_142a181a0 body=47 status=ok
// SIG undefined FUN_142a181a0(void)

longlong FUN_142a181a0(void)

{
  if (DAT_146b281f0 == 0) {
    FUN_141786440(&DAT_146b281f0,&PTR_StaticClass_14533ec20);
  }
  return DAT_146b281f0;
}



// FUNCTION 142a181d0 FUN_142a181d0 body=47 status=ok
// SIG undefined FUN_142a181d0(void)

longlong FUN_142a181d0(void)

{
  if (DAT_146b28200 == 0) {
    FUN_141786440(&DAT_146b28200,&PTR_StaticClass_14533f100);
  }
  return DAT_146b28200;
}



// FUNCTION 142a18200 FUN_142a18200 body=47 status=ok
// SIG undefined FUN_142a18200(void)

longlong FUN_142a18200(void)

{
  if (DAT_146b28210 == 0) {
    FUN_141786440(&DAT_146b28210,&PTR_StaticClass_14533f4c0);
  }
  return DAT_146b28210;
}



// FUNCTION 142a18230 FUN_142a18230 body=47 status=ok
// SIG undefined FUN_142a18230(void)

longlong FUN_142a18230(void)

{
  if (DAT_146b28238 == 0) {
    FUN_141786440(&DAT_146b28238,&PTR_StaticClass_145340bc0);
  }
  return DAT_146b28238;
}



// FUNCTION 142a18260 FUN_142a18260 body=47 status=ok
// SIG undefined FUN_142a18260(void)

longlong FUN_142a18260(void)

{
  if (DAT_146b28248 == 0) {
    FUN_141786440(&DAT_146b28248,&PTR_StaticClass_145341020);
  }
  return DAT_146b28248;
}



// FUNCTION 142a18290 FUN_142a18290 body=47 status=ok
// SIG undefined FUN_142a18290(void)

longlong FUN_142a18290(void)

{
  if (DAT_146b28258 == 0) {
    FUN_141786440(&DAT_146b28258,&PTR_StaticClass_145341270);
  }
  return DAT_146b28258;
}



// FUNCTION 142a182c0 FUN_142a182c0 body=47 status=ok
// SIG undefined FUN_142a182c0(void)

longlong FUN_142a182c0(void)

{
  if (DAT_146b28268 == 0) {
    FUN_141786440(&DAT_146b28268,&PTR_GetPrivateStaticClass_1453413b0);
  }
  return DAT_146b28268;
}



// FUNCTION 142a182f0 FUN_142a182f0 body=47 status=ok
// SIG undefined FUN_142a182f0(void)

longlong FUN_142a182f0(void)

{
  if (DAT_146b28278 == 0) {
    FUN_141786440(&DAT_146b28278,&PTR_StaticClass_1453415a0);
  }
  return DAT_146b28278;
}



// FUNCTION 142a18320 FUN_142a18320 body=47 status=ok
// SIG undefined FUN_142a18320(void)

longlong FUN_142a18320(void)

{
  if (DAT_146b28288 == 0) {
    FUN_141786440(&DAT_146b28288,&PTR_GetPrivateStaticClass_145341950);
  }
  return DAT_146b28288;
}



// FUNCTION 142a18350 FUN_142a18350 body=47 status=ok
// SIG undefined FUN_142a18350(void)

longlong FUN_142a18350(void)

{
  if (DAT_146b28298 == 0) {
    FUN_141786440(&DAT_146b28298,&PTR_StaticClass_145341a70);
  }
  return DAT_146b28298;
}



// FUNCTION 142a18380 FUN_142a18380 body=47 status=ok
// SIG undefined FUN_142a18380(void)

longlong FUN_142a18380(void)

{
  if (DAT_146b282a8 == 0) {
    FUN_141786440(&DAT_146b282a8,&PTR_StaticClass_145341e40);
  }
  return DAT_146b282a8;
}



// FUNCTION 142a183b0 FUN_142a183b0 body=47 status=ok
// SIG undefined FUN_142a183b0(void)

longlong FUN_142a183b0(void)

{
  if (DAT_146b282b8 == 0) {
    FUN_141786440(&DAT_146b282b8,&PTR_GetPrivateStaticClass_145342110);
  }
  return DAT_146b282b8;
}



// FUNCTION 142a183e0 FUN_142a183e0 body=47 status=ok
// SIG undefined FUN_142a183e0(void)

longlong FUN_142a183e0(void)

{
  if (DAT_146b282d0 == 0) {
    FUN_141786440(&DAT_146b282d0,&PTR_GetPrivateStaticClass_145342780);
  }
  return DAT_146b282d0;
}



// FUNCTION 142a18410 FUN_142a18410 body=47 status=ok
// SIG undefined FUN_142a18410(void)

longlong FUN_142a18410(void)

{
  if (DAT_146b28360 == 0) {
    FUN_141786440(&DAT_146b28360,&PTR_GetPrivateStaticClass_14533c960);
  }
  return DAT_146b28360;
}



// FUNCTION 142a18440 FUN_142a18440 body=47 status=ok
// SIG undefined FUN_142a18440(void)

longlong FUN_142a18440(void)

{
  if (DAT_146b28380 == 0) {
    FUN_141786440(&DAT_146b28380,&PTR_GetPrivateStaticClass_14533d4c0);
  }
  return DAT_146b28380;
}



// FUNCTION 142a18470 FUN_142a18470 body=47 status=ok
// SIG undefined FUN_142a18470(void)

longlong FUN_142a18470(void)

{
  if (DAT_146b283e0 == 0) {
    FUN_141786440(&DAT_146b283e0,&PTR_GetPrivateStaticClass_14533ed70);
  }
  return DAT_146b283e0;
}



// FUNCTION 142a184a0 FUN_142a184a0 body=47 status=ok
// SIG undefined FUN_142a184a0(void)

longlong FUN_142a184a0(void)

{
  if (DAT_146b282f0 == 0) {
    FUN_141786a30(&DAT_146b282f0,&PTR_Z_Construct_UPackage__Script_Engine_146661480);
  }
  return DAT_146b282f0;
}



// FUNCTION 142a184d0 FUN_142a184d0 body=47 status=ok
// SIG undefined FUN_142a184d0(void)

longlong FUN_142a184d0(void)

{
  if (DAT_146b282f8 == 0) {
    FUN_1417866a0(&DAT_146b282f8,&PTR_Z_Construct_UPackage__Script_Engine_1466680d0);
  }
  return DAT_146b282f8;
}



// FUNCTION 142a18500 FUN_142a18500 body=47 status=ok
// SIG undefined FUN_142a18500(void)

longlong FUN_142a18500(void)

{
  if (DAT_146b28338 == 0) {
    FUN_1417866a0(&DAT_146b28338,&PTR_Z_Construct_UPackage__Script_Engine_146668170);
  }
  return DAT_146b28338;
}



// FUNCTION 142a18530 FUN_142a18530 body=47 status=ok
// SIG undefined FUN_142a18530(void)

longlong FUN_142a18530(void)

{
  if (DAT_146b282c8 == 0) {
    FUN_1417866a0(&DAT_146b282c8,&PTR_Z_Construct_UPackage__Script_Engine_146668080);
  }
  return DAT_146b282c8;
}



// FUNCTION 142a18560 FUN_142a18560 body=47 status=ok
// SIG undefined FUN_142a18560(void)

longlong FUN_142a18560(void)

{
  if (DAT_146b28400 == 0) {
    FUN_1417866a0(&DAT_146b28400,&PTR_Z_Construct_UPackage__Script_Engine_1466681c0);
  }
  return DAT_146b28400;
}



// FUNCTION 142a18590 FUN_142a18590 body=47 status=ok
// SIG undefined FUN_142a18590(void)

longlong FUN_142a18590(void)

{
  if (DAT_146b28408 == 0) {
    FUN_1417866a0(&DAT_146b28408,&PTR_Z_Construct_UPackage__Script_Engine_146668210);
  }
  return DAT_146b28408;
}



// FUNCTION 142a185c0 FUN_142a185c0 body=47 status=ok
// SIG undefined FUN_142a185c0(void)

longlong FUN_142a185c0(void)

{
  if (DAT_146b28300 == 0) {
    FUN_1417866a0(&DAT_146b28300,&PTR_Z_Construct_UPackage__Script_Engine_146668120);
  }
  return DAT_146b28300;
}



// FUNCTION 142a185f0 FUN_142a185f0 body=47 status=ok
// SIG undefined FUN_142a185f0(void)

longlong FUN_142a185f0(void)

{
  if (DAT_146b28220 == 0) {
    FUN_1417866a0(&DAT_146b28220,&PTR_Z_Construct_UPackage__Script_Engine_146668030);
  }
  return DAT_146b28220;
}



// FUNCTION 142a18620 FUN_142a18620 body=47 status=ok
// SIG undefined FUN_142a18620(void)

longlong FUN_142a18620(void)

{
  if (DAT_146b28198 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b28198,&PTR_Z_Construct_UPackage__Script_Engine_146660010);
  }
  return DAT_146b28198;
}



// FUNCTION 142a18650 FUN_142a18650 body=47 status=ok
// SIG undefined FUN_142a18650(void)

longlong FUN_142a18650(void)

{
  if (DAT_146b28418 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b28418,&PTR_Z_Construct_UPackage__Script_Engine_1466629c0);
  }
  return DAT_146b28418;
}



// FUNCTION 142a18680 FUN_142a18680 body=47 status=ok
// SIG undefined FUN_142a18680(void)

longlong FUN_142a18680(void)

{
  if (DAT_146b283c8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b283c8,&PTR_Z_Construct_UPackage__Script_Engine_1466625b0);
  }
  return DAT_146b283c8;
}



// FUNCTION 142a186b0 FUN_142a186b0 body=47 status=ok
// SIG undefined FUN_142a186b0(void)

longlong FUN_142a186b0(void)

{
  if (DAT_146b283f8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b283f8,&PTR_Z_Construct_UPackage__Script_Engine_1466628c0);
  }
  return DAT_146b283f8;
}



// FUNCTION 142a186e0 FUN_142a186e0 body=47 status=ok
// SIG undefined FUN_142a186e0(void)

longlong FUN_142a186e0(void)

{
  if (DAT_146b28230 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b28230,&PTR_Z_Construct_UPackage__Script_Engine_146660980);
  }
  return DAT_146b28230;
}



// FUNCTION 142a18710 FUN_142a18710 body=47 status=ok
// SIG undefined FUN_142a18710(void)

longlong FUN_142a18710(void)

{
  if (DAT_146b282e8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b282e8,&PTR_Z_Construct_UPackage__Script_Engine_1466613f0);
  }
  return DAT_146b282e8;
}



// FUNCTION 142a18740 FUN_142a18740 body=47 status=ok
// SIG undefined FUN_142a18740(void)

longlong FUN_142a18740(void)

{
  if (DAT_146b28310 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b28310,&PTR_Z_Construct_UPackage__Script_Engine_146661540);
  }
  return DAT_146b28310;
}



// FUNCTION 142a18770 FUN_142a18770 body=47 status=ok
// SIG undefined FUN_142a18770(void)

longlong FUN_142a18770(void)

{
  if (DAT_146b28438 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b28438,&PTR_Z_Construct_UPackage__Script_Engine_146662d20);
  }
  return DAT_146b28438;
}



// FUNCTION 142a187a0 FUN_142a187a0 body=47 status=ok
// SIG undefined FUN_142a187a0(void)

longlong FUN_142a187a0(void)

{
  if (DAT_146b28428 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b28428,&PTR_Z_Construct_UPackage__Script_Engine_146662bd0);
  }
  return DAT_146b28428;
}



// FUNCTION 142a187d0 FUN_142a187d0 body=47 status=ok
// SIG undefined FUN_142a187d0(void)

longlong FUN_142a187d0(void)

{
  if (DAT_146b28348 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b28348,&PTR_Z_Construct_UPackage__Script_Engine_146661a60);
  }
  return DAT_146b28348;
}



// FUNCTION 142a18800 execAddPoint body=262 status=ok
// SIG undefined execAddPoint(void)

void USplineComponent::execAddPoint(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  int local_res10 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18;
  
  local_18 = 1;
  local_48 = 0;
  uStack_40 = 0;
  local_28 = 0;
  uStack_24 = 0x3f800000;
  uStack_20 = 0x3f800000;
  uStack_1c = 0x3f800000;
  local_58 = 0;
  uStack_50 = 0;
  local_38 = 0;
  uStack_30 = 0;
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
  FUN_1423a2530(param_1,puVar1,local_res10[0] != 0);
  return;
}



// FUNCTION 142a18910 FUN_142a18910 body=242 status=ok
// SIG undefined FUN_142a18910(void)

void FUN_142a18910(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int local_res10 [2];
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
  local_res10[0] = 0;
  plVar1 = local_18;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
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
  FUN_1423a2760(param_1,plVar1,local_res10[0] != 0);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142a18a10 execAddSplineLocalPoint body=144 status=ok
// SIG undefined execAddSplineLocalPoint(void)

void USplineComponent::execAddSplineLocalPoint(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 local_18 [16];
  
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
  FUN_1423a2bb0(param_1,puVar1,0,1);
  return;
}



// FUNCTION 142a18aa0 execAddSplinePoint body=265 status=ok
// SIG undefined execAddSplinePoint(void)

void USplineComponent::execAddSplinePoint(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 local_res10 [16];
  int local_res20 [2];
  undefined1 local_28 [16];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_res10[0] = 0;
  puVar1 = local_28;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1423a2bb0(param_1,puVar1,local_res10[0],local_res20[0] != 0);
  return;
}



// FUNCTION 142a18bb0 execAddSplinePointAtIndex body=342 status=ok
// SIG undefined execAddSplinePointAtIndex(void)

void USplineComponent::execAddSplinePointAtIndex(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 local_res10 [16];
  int local_res20 [2];
  undefined4 local_38 [2];
  undefined1 local_30 [24];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_30);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  local_38[0] = 0;
  puVar1 = local_30;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
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
  FUN_1423a2f70(param_1,puVar1,local_38[0],local_res10[0],local_res20[0] != 0);
  return;
}



// FUNCTION 142a18d10 FUN_142a18d10 body=447 status=ok
// SIG undefined FUN_142a18d10(void)

void FUN_142a18d10(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 local_res10 [8];
  int local_res20 [2];
  undefined4 local_48 [2];
  undefined1 local_40 [16];
  undefined1 local_30 [24];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_40);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar1 = local_40;
  if (puVar2 != (undefined1 *)0x0) {
    puVar1 = puVar2;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_30);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  local_48[0] = 0;
  puVar2 = local_30;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1423a3460(param_1,puVar1,puVar2,local_48[0],local_res10[0],local_res20[0] != 0);
  return;
}



// FUNCTION 142a18ed0 execAddSplineWorldPoint body=147 status=ok
// SIG undefined execAddSplineWorldPoint(void)

void USplineComponent::execAddSplineWorldPoint(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 local_18 [16];
  
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
  FUN_1423a2bb0(param_1,puVar1,1,1);
  return;
}



// FUNCTION 142a18f70 FUN_142a18f70 body=130 status=ok
// SIG undefined FUN_142a18f70(void)

void FUN_142a18f70(undefined8 param_1,longlong param_2)

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
  FUN_1423a6a20(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 142a19000 execFindRotationClosestToWorldLocation body=234 status=ok
// SIG undefined execFindRotationClosestToWorldLocation(void)

void USplineComponent::execFindRotationClosestToWorldLocation
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 local_res10 [8];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_res10[0] = 0;
  puVar2 = local_38;
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_1423ac1a0(param_1,local_28,puVar2,local_res10[0]);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142a190f0 execFindInputKeyClosestToWorldLocation body=155 status=ok
// SIG undefined execFindInputKeyClosestToWorldLocation(void)

void USplineComponent::execFindInputKeyClosestToWorldLocation
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 local_18 [16];
  
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
  uVar2 = FUN_1423ac1f0(param_1,puVar1);
  *param_3 = uVar2;
  return;
}



// FUNCTION 142a19190 execFindRotationClosestToWorldLocation body=234 status=ok
// SIG undefined execFindRotationClosestToWorldLocation(void)

void USplineComponent::execFindRotationClosestToWorldLocation
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 local_res10 [8];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_res10[0] = 0;
  puVar2 = local_38;
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_1423ac3b0(param_1,local_28,puVar2,local_res10[0]);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142a19280 execFindRotationClosestToWorldLocation body=234 status=ok
// SIG undefined execFindRotationClosestToWorldLocation(void)

void USplineComponent::execFindRotationClosestToWorldLocation
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 local_res10 [8];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_res10[0] = 0;
  puVar2 = local_38;
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_1423ac420(param_1,local_28,puVar2,local_res10[0]);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142a19370 execFindRollClosestToWorldLocation body=219 status=ok
// SIG undefined execFindRollClosestToWorldLocation(void)

void USplineComponent::execFindRollClosestToWorldLocation
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 local_res10 [8];
  undefined1 local_28 [16];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_res10[0] = 0;
  puVar1 = local_28;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
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
  uVar2 = FindRollClosestToWorldLocation(param_1,puVar1,local_res10[0]);
  *param_3 = uVar2;
  return;
}



// FUNCTION 142a19450 execFindRotationClosestToWorldLocation body=234 status=ok
// SIG undefined execFindRotationClosestToWorldLocation(void)

void USplineComponent::execFindRotationClosestToWorldLocation
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 local_res10 [8];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_res10[0] = 0;
  puVar2 = local_38;
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FindRotationClosestToWorldLocation(param_1,local_28,puVar2,local_res10[0]);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142a19540 execFindScaleClosestToWorldLocation body=170 status=ok
// SIG undefined execFindScaleClosestToWorldLocation(void)

void USplineComponent::execFindScaleClosestToWorldLocation
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar2 = local_28;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_1423ac520(param_1,local_18,puVar2);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142a195f0 execFindRotationClosestToWorldLocation body=234 status=ok
// SIG undefined execFindRotationClosestToWorldLocation(void)

void USplineComponent::execFindRotationClosestToWorldLocation
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 local_res10 [8];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_res10[0] = 0;
  puVar2 = local_38;
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_1423ac580(param_1,local_28,puVar2,local_res10[0]);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142a196e0 execFindTransformClosestToWorldLocation body=335 status=ok
// SIG undefined execFindTransformClosestToWorldLocation(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void USplineComponent::execFindTransformClosestToWorldLocation
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined1 local_88 [4];
  int local_84;
  undefined1 local_80 [24];
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_80);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_80);
  }
  local_88[0] = 0;
  puVar3 = local_80;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  local_84 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_84);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_84);
  }
  local_98 = local_84 != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar2 = (undefined8 *)FindTransformClosestToWorldLocation(param_1,local_68,puVar3,local_88[0]);
  uVar1 = puVar2[1];
  *param_3 = *puVar2;
  param_3[1] = uVar1;
  uVar1 = puVar2[3];
  param_3[2] = puVar2[2];
  param_3[3] = uVar1;
  uVar1 = puVar2[5];
  param_3[4] = puVar2[4];
  param_3[5] = uVar1;
  return;
}



// FUNCTION 142a19830 execFindRotationClosestToWorldLocation body=234 status=ok
// SIG undefined execFindRotationClosestToWorldLocation(void)

void USplineComponent::execFindRotationClosestToWorldLocation
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 local_res10 [8];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_res10[0] = 0;
  puVar2 = local_38;
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_1423ac620(param_1,local_28,puVar2,local_res10[0]);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142a19920 FUN_142a19920 body=207 status=ok
// SIG undefined FUN_142a19920(void)

void FUN_142a19920(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [8];
  undefined4 local_res18 [4];
  undefined1 local_28 [16];
  
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
  puVar1 = (undefined8 *)FUN_1423ac7f0(param_1,local_28,local_res18[0],local_res10[0]);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142a199f0 execGetDefaultUpVector body=151 status=ok
// SIG undefined execGetDefaultUpVector(void)

void USplineComponent::execGetDefaultUpVector
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [8];
  undefined1 local_18 [16];
  
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
  puVar1 = (undefined8 *)FUN_1423addb0(param_1,local_18,local_res10[0]);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142a19a90 FUN_142a19a90 body=220 status=ok
// SIG undefined FUN_142a19a90(void)

void FUN_142a19a90(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  undefined1 local_18 [16];
  
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
  puVar1 = (undefined8 *)FUN_1423adf70(param_1,local_18,local_res18[0],local_res10[0]);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142a19b70 FUN_142a19b70 body=207 status=ok
// SIG undefined FUN_142a19b70(void)

void FUN_142a19b70(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [8];
  undefined4 local_res18 [4];
  undefined1 local_28 [16];
  
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
  puVar1 = (undefined8 *)FUN_1423ae1b0(param_1,local_28,local_res18[0],local_res10[0]);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142a19c40 FUN_142a19c40 body=283 status=ok
// SIG undefined FUN_142a19c40(void)

void FUN_142a19c40(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [8];
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined1 local_28 [16];
  
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
  puVar1 = (undefined8 *)
           FUN_1423ae400(param_1,local_28,local_res20[0],local_res10[0],local_res18[0] != 0);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142a19d60 FUN_142a19d60 body=143 status=ok
// SIG undefined FUN_142a19d60(void)

void FUN_142a19d60(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  uVar1 = FUN_1423ae5c0(param_1,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142a19df0 execGetFloatValue body=140 status=ok
// SIG undefined execGetFloatValue(void)

void UCurveFloat::execGetFloatValue(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  uVar1 = FUN_1423aead0(param_1,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142a19e80 FUN_142a19e80 body=207 status=ok
// SIG undefined FUN_142a19e80(void)

void FUN_142a19e80(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [8];
  undefined4 local_res18 [4];
  undefined1 local_28 [16];
  
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
  puVar1 = (undefined8 *)FUN_1423aeba0(param_1,local_28,local_res18[0],local_res10[0]);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142a19f50 execGetLocalLocationAndTangentAtSplinePoint body=291 status=ok
// SIG undefined execGetLocalLocationAndTangentAtSplinePoint(void)

void USplineComponent::execGetLocalLocationAndTangentAtSplinePoint
               (undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 local_res10 [2];
  undefined1 local_28 [16];
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
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar1 = local_28;
  if (puVar2 != (undefined1 *)0x0) {
    puVar1 = puVar2;
  }
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
  FUN_1423aedd0(param_1,local_res10[0],puVar1,puVar2,0);
  return;
}



// FUNCTION 142a1a080 execGetLocationAndTangentAtSplinePoint body=359 status=ok
// SIG undefined execGetLocationAndTangentAtSplinePoint(void)

void USplineComponent::execGetLocationAndTangentAtSplinePoint(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 local_res10 [8];
  undefined4 local_res20 [2];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar1 = local_38;
  if (puVar2 != (undefined1 *)0x0) {
    puVar1 = puVar2;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_res10[0] = 0;
  puVar2 = local_28;
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1423aedd0(param_1,local_res20[0],puVar1,puVar2,local_res10[0]);
  return;
}



// FUNCTION 142a1a1f0 FUN_142a1a1f0 body=220 status=ok
// SIG undefined FUN_142a1a1f0(void)

void FUN_142a1a1f0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  undefined1 local_18 [16];
  
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
  puVar1 = (undefined8 *)FUN_1423aee90(param_1,local_18,local_res18[0],local_res10[0]);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142a1a2d0 FUN_142a1a2d0 body=207 status=ok
// SIG undefined FUN_142a1a2d0(void)

void FUN_142a1a2d0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [8];
  undefined4 local_res18 [4];
  undefined1 local_28 [16];
  
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
  puVar1 = (undefined8 *)FUN_1423aeff0(param_1,local_28,local_res18[0],local_res10[0]);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142a1a3a0 FUN_142a1a3a0 body=283 status=ok
// SIG undefined FUN_142a1a3a0(void)

void FUN_142a1a3a0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [8];
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined1 local_28 [16];
  
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
  puVar1 = (undefined8 *)
           FUN_1423af140(param_1,local_28,local_res20[0],local_res10[0],local_res18[0] != 0);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142a1a4c0 FUN_142a1a4c0 body=43 status=ok
// SIG undefined FUN_142a1a4c0(void)

void FUN_142a1a4c0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14236d130();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142a1a4f0 FUN_142a1a4f0 body=220 status=ok
// SIG undefined FUN_142a1a4f0(void)

void FUN_142a1a4f0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  undefined1 local_18 [16];
  
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
  puVar1 = (undefined8 *)FUN_1423afc10(param_1,local_18,local_res18[0],local_res10[0]);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142a1a5d0 FUN_142a1a5d0 body=207 status=ok
// SIG undefined FUN_142a1a5d0(void)

void FUN_142a1a5d0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [8];
  undefined4 local_res18 [4];
  undefined1 local_28 [16];
  
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
  puVar1 = (undefined8 *)FUN_1423afe80(param_1,local_28,local_res18[0],local_res10[0]);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142a1a6a0 FUN_142a1a6a0 body=283 status=ok
// SIG undefined FUN_142a1a6a0(void)

void FUN_142a1a6a0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [8];
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined1 local_28 [16];
  
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
  puVar1 = (undefined8 *)
           FUN_1423afef0(param_1,local_28,local_res20[0],local_res10[0],local_res18[0] != 0);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142a1a7c0 execGetRollAtDistanceAlongSpline body=205 status=ok
// SIG undefined execGetRollAtDistanceAlongSpline(void)

void USplineComponent::execGetRollAtDistanceAlongSpline
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  
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
  uVar1 = FUN_1423affe0(param_1,local_res18[0],local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142a1a890 execGetRollAtSplinePoint body=191 status=ok
// SIG undefined execGetRollAtSplinePoint(void)

void USplineComponent::execGetRollAtSplinePoint
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 local_res10 [8];
  undefined4 local_res18 [4];
  
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
  uVar1 = FUN_1423b0040(param_1,local_res18[0],local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142a1a950 execGetRollAtTime body=265 status=ok
// SIG undefined execGetRollAtTime(void)

void USplineComponent::execGetRollAtTime(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 local_res10 [8];
  int local_res18 [2];
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
  uVar1 = FUN_1423b00c0(param_1,local_res20[0],local_res10[0],local_res18[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142a1aa60 FUN_142a1aa60 body=220 status=ok
// SIG undefined FUN_142a1aa60(void)

void FUN_142a1aa60(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  undefined1 local_18 [16];
  
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
  puVar1 = (undefined8 *)FUN_1423b0180(param_1,local_18,local_res18[0],local_res10[0]);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142a1ab40 FUN_142a1ab40 body=207 status=ok
// SIG undefined FUN_142a1ab40(void)

void FUN_142a1ab40(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [8];
  undefined4 local_res18 [4];
  undefined1 local_28 [16];
  
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
  puVar1 = (undefined8 *)FUN_1423b01f0(param_1,local_28,local_res18[0],local_res10[0]);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142a1ac10 FUN_142a1ac10 body=283 status=ok
// SIG undefined FUN_142a1ac10(void)

void FUN_142a1ac10(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [8];
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined1 local_28 [16];
  
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
  puVar1 = (undefined8 *)
           FUN_1423b0270(param_1,local_28,local_res20[0],local_res10[0],local_res18[0] != 0);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142a1ad30 execGetVectorValue body=155 status=ok
// SIG undefined execGetVectorValue(void)

void UCurveVector::execGetVectorValue(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 local_res10 [2];
  undefined1 local_18 [16];
  
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
  puVar1 = (undefined8 *)FUN_1423b0340(param_1,local_18,local_res10[0]);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142a1add0 FUN_142a1add0 body=159 status=ok
// SIG undefined FUN_142a1add0(void)

void FUN_142a1add0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 local_res10 [2];
  undefined1 local_18 [16];
  
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
  puVar1 = (undefined8 *)FUN_1423b03b0(param_1,local_18,local_res10[0]);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142a1ae70 execGetScaleAtTime body=215 status=ok
// SIG undefined execGetScaleAtTime(void)

void USplineComponent::execGetScaleAtTime(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int local_res10 [2];
  undefined4 local_res18 [4];
  undefined1 local_28 [16];
  
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
  puVar1 = (undefined8 *)FUN_1423b0440(param_1,local_28,local_res18[0],local_res10[0] != 0);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142a1afe0 FUN_142a1afe0 body=45 status=ok
// SIG undefined FUN_142a1afe0(void)

void FUN_142a1afe0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1423b1370();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142a1b010 execRemoveAt body=141 status=ok
// SIG undefined execRemoveAt(void)

void UMediaPlaylist::execRemoveAt(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FUN_1423b13a0(param_1,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142a1b0a0 FUN_142a1b0a0 body=220 status=ok
// SIG undefined FUN_142a1b0a0(void)

void FUN_142a1b0a0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  undefined1 local_18 [16];
  
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
  puVar1 = (undefined8 *)FUN_1423b1440(param_1,local_18,local_res18[0],local_res10[0]);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142a1b180 FUN_142a1b180 body=283 status=ok
// SIG undefined FUN_142a1b180(void)

void FUN_142a1b180(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [8];
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined1 local_28 [16];
  
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
  puVar1 = (undefined8 *)
           FUN_1423b1590(param_1,local_28,local_res20[0],local_res10[0],local_res18[0] != 0);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142a1b2a0 execGetTransformAtDistanceAlongSpline body=328 status=ok
// SIG undefined execGetTransformAtDistanceAlongSpline(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void USplineComponent::execGetTransformAtDistanceAlongSpline
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_68 [4];
  int local_64;
  undefined4 local_60 [2];
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_60[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  local_68[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  local_64 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_64);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  local_78 = local_64 != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar2 = (undefined8 *)FUN_1423b1690(param_1,local_58,local_60[0],local_68[0]);
  uVar1 = puVar2[1];
  *param_3 = *puVar2;
  param_3[1] = uVar1;
  uVar1 = puVar2[3];
  param_3[2] = puVar2[2];
  param_3[3] = uVar1;
  uVar1 = puVar2[5];
  param_3[4] = puVar2[4];
  param_3[5] = uVar1;
  return;
}



// FUNCTION 142a1b3f0 execGetTransformAtSplinePoint body=320 status=ok
// SIG undefined execGetTransformAtSplinePoint(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void USplineComponent::execGetTransformAtSplinePoint
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_68 [4];
  int local_64;
  undefined4 local_60 [2];
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_60[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  local_68[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  local_64 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_64);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  local_78 = local_64 != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar2 = (undefined8 *)FUN_1423b1d60(param_1,local_58,local_60[0],local_68[0]);
  uVar1 = puVar2[1];
  *param_3 = *puVar2;
  param_3[1] = uVar1;
  uVar1 = puVar2[3];
  param_3[2] = puVar2[2];
  param_3[3] = uVar1;
  uVar1 = puVar2[5];
  param_3[4] = puVar2[4];
  param_3[5] = uVar1;
  return;
}



// FUNCTION 142a1b530 execGetTransformAtTime body=393 status=ok
// SIG undefined execGetTransformAtTime(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void USplineComponent::execGetTransformAtTime
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined1 local_80;
  undefined1 local_78 [4];
  int local_74;
  int local_70;
  undefined4 local_6c;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_6c = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_6c);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  local_78[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  local_74 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_74);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  bVar3 = local_74 != 0;
  local_70 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_70);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_80 = local_70 != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_88 = bVar3;
  puVar2 = (undefined8 *)FUN_1423b1dd0(param_1,local_68,local_6c,local_78[0]);
  uVar1 = puVar2[1];
  *param_3 = *puVar2;
  param_3[1] = uVar1;
  uVar1 = puVar2[3];
  param_3[2] = puVar2[2];
  param_3[3] = uVar1;
  uVar1 = puVar2[5];
  param_3[4] = puVar2[4];
  param_3[5] = uVar1;
  return;
}



// FUNCTION 142a1b6c0 FUN_142a1b6c0 body=220 status=ok
// SIG undefined FUN_142a1b6c0(void)

void FUN_142a1b6c0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  undefined1 local_18 [16];
  
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
  puVar1 = (undefined8 *)FUN_1423b1ee0(param_1,local_18,local_res18[0],local_res10[0]);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142a1b7a0 FUN_142a1b7a0 body=207 status=ok
// SIG undefined FUN_142a1b7a0(void)

void FUN_142a1b7a0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [8];
  undefined4 local_res18 [4];
  undefined1 local_28 [16];
  
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
  puVar1 = (undefined8 *)FUN_1423b2150(param_1,local_28,local_res18[0],local_res10[0]);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142a1b870 FUN_142a1b870 body=283 status=ok
// SIG undefined FUN_142a1b870(void)

void FUN_142a1b870(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [8];
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined1 local_28 [16];
  
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
  puVar1 = (undefined8 *)
           FUN_1423b21c0(param_1,local_28,local_res20[0],local_res10[0],local_res18[0] != 0);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142a1b990 FUN_142a1b990 body=164 status=ok
// SIG undefined FUN_142a1b990(void)

void FUN_142a1b990(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 local_res10 [2];
  undefined8 local_18;
  undefined4 local_10;
  
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
  FUN_1423adf70(param_1,&local_18,local_res10[0],1);
  *param_3 = local_18;
  *(undefined4 *)(param_3 + 1) = local_10;
  return;
}



// FUNCTION 142a1ba40 FUN_142a1ba40 body=228 status=ok
// SIG undefined FUN_142a1ba40(void)

void FUN_142a1ba40(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int local_res10 [2];
  undefined4 local_res18 [4];
  undefined8 local_28;
  undefined4 local_20;
  
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
  FUN_1423ae400(param_1,&local_28,local_res18[0],1,local_res10[0] != 0);
  *param_3 = local_28;
  *(undefined4 *)(param_3 + 1) = local_20;
  return;
}



// FUNCTION 142a1bb30 FUN_142a1bb30 body=164 status=ok
// SIG undefined FUN_142a1bb30(void)

void FUN_142a1bb30(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 local_res10 [2];
  undefined8 local_18;
  undefined4 local_10;
  
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
  FUN_1423aee90(param_1,&local_18,local_res10[0],1);
  *param_3 = local_18;
  *(undefined4 *)(param_3 + 1) = local_10;
  return;
}



// FUNCTION 142a1bbe0 execGetWorldLocationAtSplinePoint body=168 status=ok
// SIG undefined execGetWorldLocationAtSplinePoint(void)

void USplineComponent::execGetWorldLocationAtSplinePoint
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 local_res10 [2];
  undefined8 local_18;
  undefined4 local_10;
  
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
  FUN_1423aeff0(param_1,&local_18,local_res10[0],1);
  *param_3 = local_18;
  *(undefined4 *)(param_3 + 1) = local_10;
  return;
}



// FUNCTION 142a1bc90 FUN_142a1bc90 body=228 status=ok
// SIG undefined FUN_142a1bc90(void)

void FUN_142a1bc90(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int local_res10 [2];
  undefined4 local_res18 [4];
  undefined8 local_28;
  undefined4 local_20;
  
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
  FUN_1423af140(param_1,&local_28,local_res18[0],1,local_res10[0] != 0);
  *param_3 = local_28;
  *(undefined4 *)(param_3 + 1) = local_20;
  return;
}



// FUNCTION 142a1bd80 FUN_142a1bd80 body=164 status=ok
// SIG undefined FUN_142a1bd80(void)

void FUN_142a1bd80(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 local_res10 [2];
  undefined8 local_18;
  undefined4 local_10;
  
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
  FUN_1423b0180(param_1,&local_18,local_res10[0],1);
  *param_3 = local_18;
  *(undefined4 *)(param_3 + 1) = local_10;
  return;
}



// FUNCTION 142a1be30 FUN_142a1be30 body=228 status=ok
// SIG undefined FUN_142a1be30(void)

void FUN_142a1be30(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int local_res10 [2];
  undefined4 local_res18 [4];
  undefined8 local_28;
  undefined4 local_20;
  
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
  FUN_1423b0270(param_1,&local_28,local_res18[0],1,local_res10[0] != 0);
  *param_3 = local_28;
  *(undefined4 *)(param_3 + 1) = local_20;
  return;
}



// FUNCTION 142a1bf20 FUN_142a1bf20 body=164 status=ok
// SIG undefined FUN_142a1bf20(void)

void FUN_142a1bf20(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 local_res10 [2];
  undefined8 local_18;
  undefined4 local_10;
  
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
  FUN_1423b1440(param_1,&local_18,local_res10[0],1);
  *param_3 = local_18;
  *(undefined4 *)(param_3 + 1) = local_10;
  return;
}



// FUNCTION 142a1bfd0 execGetShowEnemyHealthBars body=43 status=ok
// SIG undefined execGetShowEnemyHealthBars(void)

void UIndianaGameUserSettings::execGetShowEnemyHealthBars
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetShowEnemyHealthBars();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142a1c000 execOnControllerConnectionChanged body=192 status=ok
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
  FUN_1423b88d0(param_1,local_res20[0],local_res10[0] != 0);
  return;
}



// FUNCTION 142a1c0c0 execLockAIResources body=194 status=ok
// SIG undefined execLockAIResources(void)

void UAnimInstance::execLockAIResources(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  int local_res10 [4];
  int local_res20 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar1 = local_res10[0] != 0;
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
  FUN_1423b9de0(param_1,bVar1,local_res20[0] != 0);
  return;
}



// FUNCTION 142a1c190 execSetClosedLoopAtPosition body=262 status=ok
// SIG undefined execSetClosedLoopAtPosition(void)

void USplineComponent::execSetClosedLoopAtPosition(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  int local_res10 [4];
  int local_res20 [2];
  undefined4 local_28 [4];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar1 = local_res10[0] != 0;
  local_28[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
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
  FUN_1423b9e00(param_1,bVar1,local_28[0],local_res20[0] != 0);
  return;
}



// FUNCTION 142a1c2a0 execSetDefaultUpVector body=215 status=ok
// SIG undefined execSetDefaultUpVector(void)

void USplineComponent::execSetDefaultUpVector(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 local_res10 [8];
  undefined1 local_18 [16];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  local_res10[0] = 0;
  puVar1 = local_18;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
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
  FUN_1423ba490(param_1,puVar1,local_res10[0]);
  return;
}



// FUNCTION 142a1c380 FUN_142a1c380 body=130 status=ok
// SIG undefined FUN_142a1c380(void)

void FUN_142a1c380(undefined8 param_1,longlong param_2)

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
  FUN_1423ba680(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 142a1c410 FUN_142a1c410 body=341 status=ok
// SIG undefined FUN_142a1c410(void)

void FUN_142a1c410(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 local_res10 [16];
  int local_res20 [2];
  undefined4 local_38 [2];
  undefined1 local_30 [24];
  
  local_38[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_30);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  local_res10[0] = 0;
  puVar1 = local_30;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1423ba7e0(param_1,local_38[0],puVar1,local_res10[0],local_res20[0] != 0);
  return;
}



// FUNCTION 142a1c570 execSetSelectedSplineSegmentColor body=138 status=ok
// SIG undefined execSetSelectedSplineSegmentColor(void)

void USplineComponent::execSetSelectedSplineSegmentColor(long param_1,longlong param_2)

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
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  return;
}



// FUNCTION 142a1c600 FUN_142a1c600 body=200 status=ok
// SIG undefined FUN_142a1c600(void)

void FUN_142a1c600(undefined8 param_1,longlong param_2)

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
  FUN_1423bc010(param_1,local_res20[0],local_res10[0] != 0);
  return;
}



// FUNCTION 142a1c6d0 execSetSplineLocalPoints body=169 status=ok
// SIG undefined execSetSplineLocalPoints(void)

void USplineComponent::execSetSplineLocalPoints(undefined8 param_1,longlong param_2)

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
  FUN_1423bc140(param_1,plVar1,0,1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142a1c780 execSetSplinePointType body=256 status=ok
// SIG undefined execSetSplinePointType(void)

void USplineComponent::execSetSplinePointType(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [8];
  int local_res20 [2];
  undefined4 local_18 [4];
  
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
  FUN_1423bc0d0(param_1,local_18[0],local_res10[0],local_res20[0] != 0);
  return;
}



// FUNCTION 142a1c880 execSetSplinePoints body=290 status=ok
// SIG undefined execSetSplinePoints(void)

void USplineComponent::execSetSplinePoints(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 local_res10 [16];
  int local_res20 [2];
  longlong local_28 [2];
  
  local_28[0] = 0;
  local_28[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_res10[0] = 0;
  plVar1 = local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1423bc140(param_1,plVar1,local_res10[0],local_res20[0] != 0);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142a1c9b0 execSetSplineWorldPoints body=172 status=ok
// SIG undefined execSetSplineWorldPoints(void)

void USplineComponent::execSetSplineWorldPoints(undefined8 param_1,longlong param_2)

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
  FUN_1423bc140(param_1,plVar1,1,1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142a1ca60 FUN_142a1ca60 body=341 status=ok
// SIG undefined FUN_142a1ca60(void)

void FUN_142a1ca60(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 local_res10 [16];
  int local_res20 [2];
  undefined4 local_38 [2];
  undefined1 local_30 [24];
  
  local_38[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_30);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  local_res10[0] = 0;
  puVar1 = local_30;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1423bc5f0(param_1,local_38[0],puVar1,local_res10[0],local_res20[0] != 0);
  return;
}



// FUNCTION 142a1cbc0 execSetTangentsAtSplinePoint body=446 status=ok
// SIG undefined execSetTangentsAtSplinePoint(void)

void USplineComponent::execSetTangentsAtSplinePoint(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 local_res10 [8];
  int local_res20 [2];
  undefined4 local_48 [2];
  undefined1 local_40 [16];
  undefined1 local_30 [24];
  
  local_48[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_40);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar1 = local_40;
  if (puVar2 != (undefined1 *)0x0) {
    puVar1 = puVar2;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_30);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  local_res10[0] = 0;
  puVar2 = local_30;
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
  FUN_1423bc790(param_1,local_48[0],puVar1,puVar2,local_res10[0],local_res20[0] != 0);
  return;
}



// FUNCTION 142a1cd80 FUN_142a1cd80 body=341 status=ok
// SIG undefined FUN_142a1cd80(void)

void FUN_142a1cd80(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 local_res10 [16];
  int local_res20 [2];
  undefined4 local_38 [2];
  undefined1 local_30 [24];
  
  local_38[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_30);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  local_res10[0] = 0;
  puVar1 = local_30;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1423bcc60(param_1,local_38[0],puVar1,local_res10[0],local_res20[0] != 0);
  return;
}



// FUNCTION 142a1cee0 execSetWorldLocationAtSplinePoint body=210 status=ok
// SIG undefined execSetWorldLocationAtSplinePoint(void)

void USplineComponent::execSetWorldLocationAtSplinePoint(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined4 local_res10 [2];
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
  puVar1 = local_18;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1423ba7e0(param_1,local_res10[0],puVar1,1,1);
  return;
}



// FUNCTION 142a1cfc0 execStartRecordingOutput body=196 status=ok
// SIG undefined execStartRecordingOutput(void)

void USoundSubmix::execStartRecordingOutput(undefined8 param_1,longlong param_2)

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
  StartRecordingOutput(param_1,local_res20,local_res10[0]);
  return;
}



// FUNCTION 142a1d090 execStopRecordingOutput body=478 status=ok
// SIG undefined execStopRecordingOutput(void)

void USoundSubmix::execStopRecordingOutput(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 local_res10 [8];
  undefined8 local_res20;
  undefined8 local_58;
  void *local_50;
  ulonglong local_48;
  longlong local_40 [2];
  void *local_30;
  int local_28;
  undefined4 local_24;
  
  local_58 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_40[0] = 0;
  local_40[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_40);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  local_50 = (void *)0x0;
  local_48 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_50);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  _Src = local_50;
  local_30 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar1 = (longlong)(int)local_48;
  local_28 = (int)local_48;
  if ((int)local_48 == 0) {
    local_24 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_30,local_48 & 0xffffffff,0);
    ::_guard_xfg_dispatch_icall_nop(local_30,_Src,lVar1 * 2);
  }
  StopRecordingOutput(param_1,local_58,local_res10[0],local_40,&local_30,local_res20);
  if (local_50 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_40[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142a1d2a0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UParticleModuleTypeDataGpu::GetPrivateStaticClass(void)

{
  if (DAT_146b28758 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"SplineMeshActor",&DAT_146b28758,FUN_140447710,0x460,0x10000000
                  ,0,L"Engine",&LAB_142a1e530,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_146b28758;
}



// FUNCTION 142a1d360 FUN_142a1d360 body=47 status=ok
// SIG undefined FUN_142a1d360(void)

longlong FUN_142a1d360(void)

{
  if (DAT_146b289e8 == 0) {
    FUN_141786440(&DAT_146b289e8,&PTR_StaticClass_145346ef0);
  }
  return DAT_146b289e8;
}



// FUNCTION 142a1d390 FUN_142a1d390 body=47 status=ok
// SIG undefined FUN_142a1d390(void)

longlong FUN_142a1d390(void)

{
  if (DAT_146b289b0 == 0) {
    FUN_141786a30(&DAT_146b289b0,&PTR_FUN_14666b5c0);
  }
  return DAT_146b289b0;
}



// FUNCTION 142a1d3c0 FUN_142a1d3c0 body=47 status=ok
// SIG undefined FUN_142a1d3c0(void)

longlong FUN_142a1d3c0(void)

{
  if (DAT_146b289b8 == 0) {
    FUN_141786a30(&DAT_146b289b8,&PTR_FUN_14666b640);
  }
  return DAT_146b289b8;
}



// FUNCTION 142a1d3f0 FUN_142a1d3f0 body=47 status=ok
// SIG undefined FUN_142a1d3f0(void)

longlong FUN_142a1d3f0(void)

{
  if (DAT_146b289c0 == 0) {
    FUN_141786a30(&DAT_146b289c0,&PTR_FUN_14666b6c0);
  }
  return DAT_146b289c0;
}



// FUNCTION 142a1d420 FUN_142a1d420 body=47 status=ok
// SIG undefined FUN_142a1d420(void)

longlong FUN_142a1d420(void)

{
  if (DAT_146b289c8 == 0) {
    FUN_141786a30(&DAT_146b289c8,&PTR_FUN_14666b700);
  }
  return DAT_146b289c8;
}



// FUNCTION 142a1d450 FUN_142a1d450 body=47 status=ok
// SIG undefined FUN_142a1d450(void)

longlong FUN_142a1d450(void)

{
  if (DAT_146b289d0 == 0) {
    FUN_141786a30(&DAT_146b289d0,&PTR_FUN_14666b740);
  }
  return DAT_146b289d0;
}



// FUNCTION 142a1d480 FUN_142a1d480 body=47 status=ok
// SIG undefined FUN_142a1d480(void)

longlong FUN_142a1d480(void)

{
  if (DAT_146b289d8 == 0) {
    FUN_141786a30(&DAT_146b289d8,&PTR_FUN_14666b780);
  }
  return DAT_146b289d8;
}



// FUNCTION 142a1d4b0 FUN_142a1d4b0 body=47 status=ok
// SIG undefined FUN_142a1d4b0(void)

longlong FUN_142a1d4b0(void)

{
  if (DAT_146b289e0 == 0) {
    FUN_141786a30(&DAT_146b289e0,&PTR_FUN_14666b880);
  }
  return DAT_146b289e0;
}



// FUNCTION 142a1d4e0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AUGDungeon::GetPrivateStaticClass(void)

{
  if (DAT_146b28870 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"SplineMeshComponent",&DAT_146b28870,
                  UARBlueprintLibrary::StaticRegisterNativesUARBlueprintLibrary,0x850,0x10000000,0,
                  L"Engine",&LAB_142a1e570,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_1423c80f0,thunk_FUN_142a232e0,
                  &LAB_140447700,0);
  }
  return DAT_146b28870;
}



// FUNCTION 142a1d590 FUN_142a1d590 body=53 status=ok
// SIG undefined FUN_142a1d590(void)

void FUN_142a1d590(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_145348ec0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142a1d5d0 FUN_142a1d5d0 body=53 status=ok
// SIG undefined FUN_142a1d5d0(void)

void FUN_142a1d5d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_145348fd8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142a1d610 FUN_142a1d610 body=53 status=ok
// SIG undefined FUN_142a1d610(void)

void FUN_142a1d610(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_1453490f0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142a1d650 FUN_142a1d650 body=53 status=ok
// SIG undefined FUN_142a1d650(void)

void FUN_142a1d650(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &PTR_FUN_145349208;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142a1d690 FUN_142a1d690 body=53 status=ok
// SIG undefined FUN_142a1d690(void)

void FUN_142a1d690(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &PTR_FUN_145349320;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142a1d6d0 FUN_142a1d6d0 body=53 status=ok
// SIG undefined FUN_142a1d6d0(void)

void FUN_142a1d6d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x490;
    *puVar1 = &PTR_FUN_145349438;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142a1d710 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong UStaticMeshDescriptions::StaticClass(void)

{
  if (DAT_146b289a8 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"StaticMeshDescriptions",&DAT_146b289a8,FUN_140447710,0x38,
                  0x10000000,0,L"Engine",&LAB_142a1e5f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b289a8;
}



// FUNCTION 142a1d7b0 FUN_142a1d7b0 body=53 status=ok
// SIG undefined FUN_142a1d7b0(void)

void FUN_142a1d7b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &PTR_FUN_145349550;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return;
  }
  return;
}



// FUNCTION 142a1d7f0 FUN_142a1d7f0 body=53 status=ok
// SIG undefined FUN_142a1d7f0(void)

void FUN_142a1d7f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x248;
    *puVar1 = &PTR_FUN_145349668;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142a1d830 FUN_142a1d830 body=53 status=ok
// SIG undefined FUN_142a1d830(void)

void FUN_142a1d830(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1c;
    *puVar1 = &PTR_FUN_145349780;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142a1d870 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong UNodeMappingContainer::StaticClass(void)

{
  if (DAT_146b289f0 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"StaticMesh",&DAT_146b289f0,FUN_142a1f5b0,0x168,0x10000000,0,
                  L"Engine",&LAB_142a1e5d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b289f0;
}



// FUNCTION 142a1d920 FUN_142a1d920 body=47 status=ok
// SIG undefined FUN_142a1d920(void)

longlong FUN_142a1d920(void)

{
  if (DAT_146b28868 == 0) {
    FUN_141786440(&DAT_146b28868,&PTR_GetPrivateStaticClass_145347f60);
  }
  return DAT_146b28868;
}



// FUNCTION 142a1d950 FUN_142a1d950 body=47 status=ok
// SIG undefined FUN_142a1d950(void)

longlong FUN_142a1d950(void)

{
  if (DAT_146b28778 == 0) {
    FUN_141786a30(&DAT_146b28778,&PTR_FUN_1466685f0);
  }
  return DAT_146b28778;
}



// FUNCTION 142a1d980 FUN_142a1d980 body=47 status=ok
// SIG undefined FUN_142a1d980(void)

longlong FUN_142a1d980(void)

{
  if (DAT_146b28780 == 0) {
    FUN_141786a30(&DAT_146b28780,&PTR_FUN_146668630);
  }
  return DAT_146b28780;
}



// FUNCTION 142a1d9b0 FUN_142a1d9b0 body=47 status=ok
// SIG undefined FUN_142a1d9b0(void)

longlong FUN_142a1d9b0(void)

{
  if (DAT_146b28788 == 0) {
    FUN_141786a30(&DAT_146b28788,&PTR_FUN_1466686b0);
  }
  return DAT_146b28788;
}



// FUNCTION 142a1d9e0 FUN_142a1d9e0 body=47 status=ok
// SIG undefined FUN_142a1d9e0(void)

longlong FUN_142a1d9e0(void)

{
  if (DAT_146b28790 == 0) {
    FUN_141786a30(&DAT_146b28790,&PTR_FUN_146668730);
  }
  return DAT_146b28790;
}



// FUNCTION 142a1da10 FUN_142a1da10 body=47 status=ok
// SIG undefined FUN_142a1da10(void)

longlong FUN_142a1da10(void)

{
  if (DAT_146b28798 == 0) {
    FUN_141786a30(&DAT_146b28798,&PTR_FUN_1466687e0);
  }
  return DAT_146b28798;
}



// FUNCTION 142a1da40 FUN_142a1da40 body=47 status=ok
// SIG undefined FUN_142a1da40(void)

longlong FUN_142a1da40(void)

{
  if (DAT_146b287a0 == 0) {
    FUN_141786a30(&DAT_146b287a0,&PTR_FUN_146668860);
  }
  return DAT_146b287a0;
}



// FUNCTION 142a1da70 FUN_142a1da70 body=47 status=ok
// SIG undefined FUN_142a1da70(void)

longlong FUN_142a1da70(void)

{
  if (DAT_146b287a8 == 0) {
    FUN_141786a30(&DAT_146b287a8,&PTR_FUN_1466688e0);
  }
  return DAT_146b287a8;
}



// FUNCTION 142a1daa0 FUN_142a1daa0 body=47 status=ok
// SIG undefined FUN_142a1daa0(void)

longlong FUN_142a1daa0(void)

{
  if (DAT_146b287b0 == 0) {
    FUN_141786a30(&DAT_146b287b0,&PTR_FUN_146668960);
  }
  return DAT_146b287b0;
}



// FUNCTION 142a1dad0 FUN_142a1dad0 body=47 status=ok
// SIG undefined FUN_142a1dad0(void)

longlong FUN_142a1dad0(void)

{
  if (DAT_146b287b8 == 0) {
    FUN_141786a30(&DAT_146b287b8,&PTR_FUN_1466689e0);
  }
  return DAT_146b287b8;
}



// FUNCTION 142a1db00 FUN_142a1db00 body=47 status=ok
// SIG undefined FUN_142a1db00(void)

longlong FUN_142a1db00(void)

{
  if (DAT_146b287c0 == 0) {
    FUN_141786a30(&DAT_146b287c0,&PTR_FUN_146668a60);
  }
  return DAT_146b287c0;
}



// FUNCTION 142a1db30 FUN_142a1db30 body=47 status=ok
// SIG undefined FUN_142a1db30(void)

longlong FUN_142a1db30(void)

{
  if (DAT_146b287c8 == 0) {
    FUN_141786a30(&DAT_146b287c8,&PTR_FUN_146668ae0);
  }
  return DAT_146b287c8;
}



// FUNCTION 142a1db60 FUN_142a1db60 body=47 status=ok
// SIG undefined FUN_142a1db60(void)

longlong FUN_142a1db60(void)

{
  if (DAT_146b287d0 == 0) {
    FUN_141786a30(&DAT_146b287d0,&PTR_FUN_146668b20);
  }
  return DAT_146b287d0;
}



// FUNCTION 142a1db90 FUN_142a1db90 body=47 status=ok
// SIG undefined FUN_142a1db90(void)

longlong FUN_142a1db90(void)

{
  if (DAT_146b287d8 == 0) {
    FUN_141786a30(&DAT_146b287d8,&PTR_FUN_146668ba0);
  }
  return DAT_146b287d8;
}



// FUNCTION 142a1dbc0 FUN_142a1dbc0 body=47 status=ok
// SIG undefined FUN_142a1dbc0(void)

longlong FUN_142a1dbc0(void)

{
  if (DAT_146b287e0 == 0) {
    FUN_141786a30(&DAT_146b287e0,&PTR_FUN_146668c20);
  }
  return DAT_146b287e0;
}



// FUNCTION 142a1dbf0 FUN_142a1dbf0 body=47 status=ok
// SIG undefined FUN_142a1dbf0(void)

longlong FUN_142a1dbf0(void)

{
  if (DAT_146b287e8 == 0) {
    FUN_141786a30(&DAT_146b287e8,&PTR_FUN_146668ce0);
  }
  return DAT_146b287e8;
}



// FUNCTION 142a1dc20 FUN_142a1dc20 body=47 status=ok
// SIG undefined FUN_142a1dc20(void)

longlong FUN_142a1dc20(void)

{
  if (DAT_146b287f0 == 0) {
    FUN_141786a30(&DAT_146b287f0,&PTR_FUN_146668da0);
  }
  return DAT_146b287f0;
}



// FUNCTION 142a1dc50 FUN_142a1dc50 body=47 status=ok
// SIG undefined FUN_142a1dc50(void)

longlong FUN_142a1dc50(void)

{
  if (DAT_146b287f8 == 0) {
    FUN_141786a30(&DAT_146b287f8,&PTR_FUN_146668ea0);
  }
  return DAT_146b287f8;
}



// FUNCTION 142a1dc80 FUN_142a1dc80 body=47 status=ok
// SIG undefined FUN_142a1dc80(void)

longlong FUN_142a1dc80(void)

{
  if (DAT_146b28800 == 0) {
    FUN_141786a30(&DAT_146b28800,&PTR_FUN_146668fa0);
  }
  return DAT_146b28800;
}



// FUNCTION 142a1dcb0 FUN_142a1dcb0 body=47 status=ok
// SIG undefined FUN_142a1dcb0(void)

longlong FUN_142a1dcb0(void)

{
  if (DAT_146b28808 == 0) {
    FUN_141786a30(&DAT_146b28808,&PTR_FUN_146669060);
  }
  return DAT_146b28808;
}



// FUNCTION 142a1dce0 FUN_142a1dce0 body=47 status=ok
// SIG undefined FUN_142a1dce0(void)

longlong FUN_142a1dce0(void)

{
  if (DAT_146b28810 == 0) {
    FUN_141786a30(&DAT_146b28810,&PTR_FUN_146669160);
  }
  return DAT_146b28810;
}



// FUNCTION 142a1dd10 FUN_142a1dd10 body=47 status=ok
// SIG undefined FUN_142a1dd10(void)

longlong FUN_142a1dd10(void)

{
  if (DAT_146b28818 == 0) {
    FUN_141786a30(&DAT_146b28818,&PTR_FUN_146669250);
  }
  return DAT_146b28818;
}



// FUNCTION 142a1dd40 FUN_142a1dd40 body=47 status=ok
// SIG undefined FUN_142a1dd40(void)

longlong FUN_142a1dd40(void)

{
  if (DAT_146b28820 == 0) {
    FUN_141786a30(&DAT_146b28820,&PTR_FUN_146669350);
  }
  return DAT_146b28820;
}



// FUNCTION 142a1dd70 FUN_142a1dd70 body=47 status=ok
// SIG undefined FUN_142a1dd70(void)

longlong FUN_142a1dd70(void)

{
  if (DAT_146b28828 == 0) {
    FUN_141786a30(&DAT_146b28828,&PTR_FUN_146669450);
  }
  return DAT_146b28828;
}



// FUNCTION 142a1dda0 FUN_142a1dda0 body=47 status=ok
// SIG undefined FUN_142a1dda0(void)

longlong FUN_142a1dda0(void)

{
  if (DAT_146b28830 == 0) {
    FUN_141786a30(&DAT_146b28830,&PTR_FUN_146669600);
  }
  return DAT_146b28830;
}



// FUNCTION 142a1ddd0 FUN_142a1ddd0 body=47 status=ok
// SIG undefined FUN_142a1ddd0(void)

longlong FUN_142a1ddd0(void)

{
  if (DAT_146b28838 == 0) {
    FUN_141786a30(&DAT_146b28838,&PTR_FUN_146669700);
  }
  return DAT_146b28838;
}



// FUNCTION 142a1de00 FUN_142a1de00 body=47 status=ok
// SIG undefined FUN_142a1de00(void)

longlong FUN_142a1de00(void)

{
  if (DAT_146b28840 == 0) {
    FUN_141786a30(&DAT_146b28840,&PTR_FUN_146669800);
  }
  return DAT_146b28840;
}



// FUNCTION 142a1de30 FUN_142a1de30 body=47 status=ok
// SIG undefined FUN_142a1de30(void)

longlong FUN_142a1de30(void)

{
  if (DAT_146b28848 == 0) {
    FUN_141786a30(&DAT_146b28848,&PTR_FUN_1466698c0);
  }
  return DAT_146b28848;
}



// FUNCTION 142a1de60 FUN_142a1de60 body=47 status=ok
// SIG undefined FUN_142a1de60(void)

longlong FUN_142a1de60(void)

{
  if (DAT_146b28850 == 0) {
    FUN_141786a30(&DAT_146b28850,&PTR_FUN_1466699c0);
  }
  return DAT_146b28850;
}



// FUNCTION 142a1de90 FUN_142a1de90 body=47 status=ok
// SIG undefined FUN_142a1de90(void)

longlong FUN_142a1de90(void)

{
  if (DAT_146b28858 == 0) {
    FUN_141786a30(&DAT_146b28858,&PTR_FUN_146669ac0);
  }
  return DAT_146b28858;
}



// FUNCTION 142a1dec0 FUN_142a1dec0 body=47 status=ok
// SIG undefined FUN_142a1dec0(void)

longlong FUN_142a1dec0(void)

{
  if (DAT_146b28860 == 0) {
    FUN_141786a30(&DAT_146b28860,&PTR_FUN_146669b00);
  }
  return DAT_146b28860;
}



// FUNCTION 142a1df00 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &PTR_FUN_145348a28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142a1df50 FUN_142a1df50 body=47 status=ok
// SIG undefined FUN_142a1df50(void)

longlong FUN_142a1df50(void)

{
  if (DAT_146b28888 == 0) {
    FUN_141786440(&DAT_146b28888,&PTR_GetPrivateStaticClass_145348400);
  }
  return DAT_146b28888;
}



// FUNCTION 142a1df80 FUN_142a1df80 body=47 status=ok
// SIG undefined FUN_142a1df80(void)

longlong FUN_142a1df80(void)

{
  if (DAT_146b28878 == 0) {
    FUN_141786a30(&DAT_146b28878,&PTR_FUN_146669df0);
  }
  return DAT_146b28878;
}



// FUNCTION 142a1dfb0 FUN_142a1dfb0 body=47 status=ok
// SIG undefined FUN_142a1dfb0(void)

longlong FUN_142a1dfb0(void)

{
  if (DAT_146b28880 == 0) {
    FUN_141786a30(&DAT_146b28880,&PTR_FUN_146669e30);
  }
  return DAT_146b28880;
}



// FUNCTION 142a1dff0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UPhysicsConstraintComponent::GetPrivateStaticClass(void)

{
  if (DAT_146b288b0 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"SpotLightComponent",&DAT_146b288b0,FUN_142a1f550,0x490,
                  0x10000004,0,L"Engine",&LAB_142a1e590,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UFGSoundSplineComponent::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b288b0;
}



// FUNCTION 142a1e0a0 FUN_142a1e0a0 body=47 status=ok
// SIG undefined FUN_142a1e0a0(void)

longlong FUN_142a1e0a0(void)

{
  if (DAT_146b288a8 == 0) {
    FUN_141786440(&DAT_146b288a8,&PTR_GetPrivateStaticClass_1453485f0);
  }
  return DAT_146b288a8;
}



// FUNCTION 142a1e0d0 FUN_142a1e0d0 body=47 status=ok
// SIG undefined FUN_142a1e0d0(void)

longlong FUN_142a1e0d0(void)

{
  if (DAT_146b28898 == 0) {
    FUN_141786a30(&DAT_146b28898,&PTR_FUN_146669eb0);
  }
  return DAT_146b28898;
}



// FUNCTION 142a1e100 FUN_142a1e100 body=47 status=ok
// SIG undefined FUN_142a1e100(void)

longlong FUN_142a1e100(void)

{
  if (DAT_146b288a0 == 0) {
    FUN_141786a30(&DAT_146b288a0,&PTR_FUN_146669ef0);
  }
  return DAT_146b288a0;
}



// FUNCTION 142a1e140 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AXBakeableSplineMesh::GetPrivateStaticClass(void)

{
  if (DAT_146b288d8 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"SpringArmComponent",&DAT_146b288d8,
                  StaticRegisterNativesAXBakeableSplineMesh,0x360,0x10000000,0,L"Engine",
                  &LAB_142a1e5b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1405bc4a0,&LAB_140447700,0);
  }
  return DAT_146b288d8;
}



// FUNCTION 142a1e1f0 FUN_142a1e1f0 body=47 status=ok
// SIG undefined FUN_142a1e1f0(void)

longlong FUN_142a1e1f0(void)

{
  if (DAT_146b288d0 == 0) {
    FUN_141786440(&DAT_146b288d0,&PTR_GetPrivateStaticClass_145345710);
  }
  return DAT_146b288d0;
}



// FUNCTION 142a1e220 FUN_142a1e220 body=47 status=ok
// SIG undefined FUN_142a1e220(void)

longlong FUN_142a1e220(void)

{
  if (DAT_146b288b8 == 0) {
    FUN_141786a30(&DAT_146b288b8,&PTR_FUN_146669f70);
  }
  return DAT_146b288b8;
}



// FUNCTION 142a1e250 FUN_142a1e250 body=47 status=ok
// SIG undefined FUN_142a1e250(void)

longlong FUN_142a1e250(void)

{
  if (DAT_146b288c0 == 0) {
    FUN_141786a30(&DAT_146b288c0,&PTR_FUN_146669ff0);
  }
  return DAT_146b288c0;
}



// FUNCTION 142a1e280 FUN_142a1e280 body=47 status=ok
// SIG undefined FUN_142a1e280(void)

longlong FUN_142a1e280(void)

{
  if (DAT_146b288c8 == 0) {
    FUN_141786a30(&DAT_146b288c8,&PTR_FUN_14666a0b0);
  }
  return DAT_146b288c8;
}



// FUNCTION 142a1e2b0 FUN_142a1e2b0 body=629 status=ok
// SIG undefined FUN_142a1e2b0(void)

int * FUN_142a1e2b0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  bool bVar14;
  
  iVar13 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar11 = *(int *)(*param_1 + 4 + (longlong)iVar10 * 0x14);
    *(int *)(param_1 + 6) = iVar11;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar11 * 0x14) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar10;
  lVar7 = (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar12 = (uint *)((longlong)plVar8 + lVar7);
  *puVar12 = *puVar12 | 1 << ((byte)iVar10 & 0x1f);
  lVar1 = (longlong)iVar10 * 0x14;
  puVar12 = (uint *)(*param_1 + lVar1);
  *(undefined8 *)puVar12 = *param_3;
  bVar14 = false;
  puVar12[2] = *(uint *)(param_3 + 1);
  puVar12[3] = 0xffffffff;
  iVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar11 != 1) {
    iVar5 = iVar13;
    if (iVar11 != 0) {
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar8 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar12) * 4);
      if (iVar9 != -1) {
        do {
          iVar5 = iVar9;
          if (*(uint *)(*param_1 + (longlong)iVar9 * 0x14) == *puVar12) break;
          iVar9 = *(int *)(*param_1 + 0xc + (longlong)iVar9 * 0x14);
          iVar5 = iVar13;
        } while (iVar9 != -1);
      }
    }
    bVar14 = iVar5 != -1;
    if (bVar14) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar5 * 0x14),puVar12,0xc);
      bVar3 = (byte)iVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x14) = iVar10;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar1 + lVar2) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar13 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar2) = iVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar10;
      plVar8 = (longlong *)param_1[4];
      *param_2 = iVar5;
      if (plVar8 == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar12 = (uint *)((longlong)plVar8 + lVar7);
      *puVar12 = *puVar12 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_142a1e4fb;
    }
  }
  cVar4 = TSet<TTuple<int,TWeakObjectPtr<UEdGraphNode,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UEdGraphNode,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar11,0);
  if (cVar4 == '\0') {
    uVar6 = (int)param_1[9] - 1U & *puVar12;
    puVar12[4] = uVar6;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    puVar12[3] = *(uint *)((longlong)plVar8 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         *param_2;
  }
LAB_142a1e4fb:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar14;
  }
  return param_2;
}



// FUNCTION 142a1e610 FUN_142a1e610 body=358 status=ok
// SIG undefined FUN_142a1e610(void)

undefined1 * FUN_142a1e610(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x14) = 0x43960000;
  *(undefined8 *)(param_1 + 0x1c) = 0x41000000;
  *(undefined4 *)(param_1 + 0x24) = 0x3030303;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x42a00000;
  *(undefined4 *)(param_1 + 0x31) = 0;
  *(undefined2 *)(param_1 + 0x35) = 1;
  param_1[0x37] = 0;
  FUN_142429d10(param_1 + 0x38);
  FUN_142429940(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0x14c) = 0;
  param_1[0x154] = param_1[0x154] & 0xfe;
  *(undefined4 *)(param_1 + 0x150) = 300;
  *(undefined4 *)(param_1 + 0x158) = 0x40400000;
  FUN_142429940(param_1 + 0x15c);
  *(undefined4 *)(param_1 + 0x1f0) = 0x200;
  *(undefined4 *)(param_1 + 500) = 0x200;
  *(undefined4 *)(param_1 + 0x1f8) = 1;
  param_1[0x1fc] = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x204) = DAT_1464aa734;
  param_1[0x208] = 0;
  *(undefined4 *)(param_1 + 0x20c) = 0x41a00000;
  param_1[0x210] = 0;
  *(undefined4 *)(param_1 + 0x214) = 0x43020000;
  param_1[0x218] = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0x100;
  *(undefined4 *)(param_1 + 0x220) = 0x100;
  *(undefined4 *)(param_1 + 0x224) = 0x1000001;
  *(undefined4 *)(param_1 + 0x228) = 0x1000001;
  *(undefined4 *)(param_1 + 0x22c) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x230) = 0x100;
  param_1[0x232] = 0;
  FName::FName(param_1 + 0x238,L"HLODmesh",1);
  param_1[0x1ec] = 1;
  *(undefined2 *)(param_1 + 0x240) = 0;
  return param_1;
}



// FUNCTION 142a1e780 operator= body=506 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<unsigned_int,FMeshSectionInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FMeshSectionInfo,0>,FDefaultSetAllocator>
::operator=(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 local_res8 [8];
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  uint local_48;
  undefined4 uStack_44;
  longlong *local_40;
  uint uStack_38;
  uint uStack_34;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  if (param_1 != param_2) {
    uVar7 = 0;
    iVar9 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != iVar9) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeTo
                (param_1,iVar9);
    }
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    uVar3 = iVar9 + 0x1f + (iVar9 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
    if (*(uint *)((longlong)param_1 + 0x2c) != uVar3) {
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
    }
    cVar2 = TSet<TTuple<int,TWeakObjectPtr<UEdGraphNode,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UEdGraphNode,FWeakObjectPtr>,0>,FDefaultSetAllocator>
            ::ConditionalRehash(param_1,iVar9,1);
    if ((cVar2 == '\0') && (0 < (int)*(uint *)(param_1 + 9))) {
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
    puStack_30 = (uint *)(param_2 + 2);
    local_68 = 0;
    uStack_64 = 1;
    local_58._4_4_ = 0;
    uStack_50 = 0;
    if (iVar9 != 0) {
      puVar11 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar11 = puStack_30;
      }
      uVar3 = *puVar11;
      uVar8 = uVar7;
      while (uVar3 == 0) {
        iVar4 = (int)uVar8;
        uStack_50 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_50;
        local_68 = iVar4 + 1;
        uVar8 = (ulonglong)local_68;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_142a1e8db;
        uVar3 = puVar11[(longlong)iVar4 + 1];
      }
      uStack_64 = -uVar3 & uVar3;
      iVar4 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_58._4_4_ = (uStack_50 - iVar4) + 0x1f;
      if (iVar9 < local_58._4_4_) {
LAB_142a1e8db:
        local_58._4_4_ = iVar9;
      }
    }
    uStack_38 = local_68;
    uStack_34 = uStack_64;
    uStack_28 = 0xffffffff;
    iStack_24 = local_58._4_4_;
    uStack_20 = uStack_50;
    uStack_1c = iStack_4c;
    uStack_60 = local_68;
    uStack_5c = uStack_64;
    local_48 = uStack_50;
    uStack_44 = iStack_4c;
    uStack_50 = 0xffffffff;
    iStack_4c = local_58._4_4_;
    bVar1 = local_58._4_4_ < iVar9;
    local_40 = param_2;
    local_58 = puStack_30;
    if (bVar1) {
      do {
        FUN_142a1e2b0(param_1,local_res8,*param_2 + (longlong)iStack_4c * 0x14,0);
        uStack_50 = uStack_50 & ~uStack_5c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
      } while (iStack_4c < (int)local_58[6]);
    }
  }
  return param_1;
}



// FUNCTION 142a1e980 FUN_142a1e980 body=547 status=ok
// SIG undefined FUN_142a1e980(void)

undefined1 * FUN_142a1e980(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  FUN_142818240(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x150);
  param_1[0x154] = param_1[0x154] ^ (param_2[0x154] ^ param_1[0x154]) & 1;
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x158);
  FUN_1429a0f90(param_1 + 0x15c,param_2 + 0x15c);
  *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_2 + 0x1f0);
  *(undefined4 *)(param_1 + 500) = *(undefined4 *)(param_2 + 500);
  param_1[0x1f8] = param_2[0x1f8];
  param_1[0x1f9] = param_2[0x1f9];
  param_1[0x1fa] = param_2[0x1fa];
  param_1[0x1fb] = param_2[0x1fb];
  param_1[0x1fc] = param_2[0x1fc];
  *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_2 + 0x200);
  *(undefined4 *)(param_1 + 0x204) = *(undefined4 *)(param_2 + 0x204);
  param_1[0x208] = param_2[0x208];
  *(undefined4 *)(param_1 + 0x20c) = *(undefined4 *)(param_2 + 0x20c);
  param_1[0x210] = param_2[0x210];
  *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(param_2 + 0x214);
  param_1[0x218] = param_2[0x218];
  *(undefined4 *)(param_1 + 0x21c) = *(undefined4 *)(param_2 + 0x21c);
  param_1[0x220] = param_2[0x220];
  param_1[0x221] = param_2[0x221];
  param_1[0x222] = param_2[0x222];
  param_1[0x223] = param_2[0x223];
  param_1[0x224] = param_2[0x224];
  param_1[0x225] = param_2[0x225];
  param_1[0x226] = param_2[0x226];
  param_1[0x227] = param_2[0x227];
  param_1[0x228] = param_2[0x228];
  param_1[0x229] = param_2[0x229];
  param_1[0x22a] = param_2[0x22a];
  param_1[0x22b] = param_2[0x22b];
  *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_2 + 0x22c);
  param_1[0x230] = param_2[0x230];
  param_1[0x231] = param_2[0x231];
  param_1[0x232] = param_2[0x232];
  *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(param_2 + 0x238);
  param_1[0x240] = param_2[0x240];
  param_1[0x241] = param_2[0x241];
  return param_1;
}



// FUNCTION 142a1ebb0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<int,TWeakObjectPtr<UEdGraphNode,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UEdGraphNode,FWeakObjectPtr>,0>,FDefaultSetAllocator>
::ConditionalRehash(longlong param_1,uint param_2,char param_3)

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
      TSet<TTuple<unsigned_int,FMeshSectionInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FMeshSectionInfo,0>,FDefaultSetAllocator>
      ::Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142a1ed30 FUN_142a1ed30 body=74 status=ok
// SIG undefined FUN_142a1ed30(void)

undefined1 FUN_142a1ed30(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_142a1e980(param_2 + param_3,param_3);
      param_3 = param_3 + 0x248;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142a1ed80 Copy body=71 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FMeshSectionInfoMap>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      TSet<TTuple<unsigned_int,FMeshSectionInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FMeshSectionInfo,0>,FDefaultSetAllocator>
      ::operator=(param_2 + param_3,param_3);
      param_3 = param_3 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142a1ee40 FUN_142a1ee40 body=447 status=ok
// SIG undefined FUN_142a1ee40(void)

undefined8 FUN_142a1ee40(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  
  if (param_4 != 0) {
    puVar8 = (undefined1 *)(param_3 + 0x180);
    do {
      uVar7 = *(undefined8 *)(puVar8 + -0x178);
      *param_2 = *(undefined8 *)(puVar8 + -0x180);
      param_2[1] = uVar7;
      uVar4 = *(undefined4 *)(puVar8 + -0x16c);
      uVar5 = *(undefined4 *)(puVar8 + -0x168);
      uVar6 = *(undefined4 *)(puVar8 + -0x164);
      *(undefined4 *)(param_2 + 2) = *(undefined4 *)(puVar8 + -0x170);
      *(undefined4 *)((longlong)param_2 + 0x14) = uVar4;
      *(undefined4 *)(param_2 + 3) = uVar5;
      *(undefined4 *)((longlong)param_2 + 0x1c) = uVar6;
      uVar4 = *(undefined4 *)(puVar8 + -0x15c);
      uVar5 = *(undefined4 *)(puVar8 + -0x158);
      uVar6 = *(undefined4 *)(puVar8 + -0x154);
      *(undefined4 *)(param_2 + 4) = *(undefined4 *)(puVar8 + -0x160);
      *(undefined4 *)((longlong)param_2 + 0x24) = uVar4;
      *(undefined4 *)(param_2 + 5) = uVar5;
      *(undefined4 *)((longlong)param_2 + 0x2c) = uVar6;
      FUN_142818240(param_2 + 6,puVar8 + -0x150);
      *(undefined1 *)(param_2 + 0x2f) = puVar8[-8];
      *(undefined4 *)((longlong)param_2 + 0x17c) = *(undefined4 *)(puVar8 + -4);
      *(undefined1 *)(param_2 + 0x30) = *puVar8;
      *(undefined4 *)((longlong)param_2 + 0x184) = *(undefined4 *)(puVar8 + 4);
      *(undefined4 *)(param_2 + 0x31) = *(undefined4 *)(puVar8 + 8);
      *(undefined1 *)((longlong)param_2 + 0x18c) = puVar8[0xc];
      *(undefined4 *)(param_2 + 0x32) = *(undefined4 *)(puVar8 + 0x10);
      *(undefined4 *)((longlong)param_2 + 0x194) = *(undefined4 *)(puVar8 + 0x14);
      *(undefined1 *)(param_2 + 0x33) = puVar8[0x18];
      *(undefined1 *)((longlong)param_2 + 0x199) = puVar8[0x19];
      *(undefined1 *)((longlong)param_2 + 0x19a) = puVar8[0x1a];
      FUN_14276db80(param_2 + 0x34,puVar8 + 0x20);
      *(undefined1 *)(param_2 + 0x44) = puVar8[0xa0];
      FUN_142a1e980(param_2 + 0x45,puVar8 + 0xa8);
      puVar1 = param_2 + 0x8f;
      *(undefined4 *)(param_2 + 0x8e) = *(undefined4 *)(puVar8 + 0x2f0);
      *(undefined4 *)((longlong)param_2 + 0x474) = *(undefined4 *)(puVar8 + 0x2f4);
      if (puVar1 != (undefined8 *)(puVar8 + 0x2f8)) {
        iVar3 = *(int *)(puVar8 + 0x300);
        _Src = *(void **)(puVar8 + 0x2f8);
        *(int *)(param_2 + 0x90) = iVar3;
        if ((iVar3 == 0) && (*(int *)((longlong)param_2 + 0x484) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x484) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar1,iVar3);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar3 * 2);
        }
      }
      puVar2 = (undefined4 *)(puVar8 + 0x308);
      puVar8 = puVar8 + 0x490;
      *(undefined4 *)(param_2 + 0x91) = *puVar2;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x92;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142a1f010 FUN_142a1f010 body=43 status=ok
// SIG undefined FUN_142a1f010(void)

void FUN_142a1f010(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_2);
  return;
}



// FUNCTION 142a1f050 EImportanceLevel_StaticEnum body=55 status=ok
// SIG undefined EImportanceLevel_StaticEnum(void)

void EImportanceLevel_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b286e8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b286e8 = GetStaticEnum(FUN_142a1fa00,uVar1,L"EImportanceLevel");
  }
  return;
}



// FUNCTION 142a1f090 ENormalMode_StaticEnum body=55 status=ok
// SIG undefined ENormalMode_StaticEnum(void)

void ENormalMode_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b286f0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b286f0 = GetStaticEnum(FUN_142a1fa30,uVar1,L"ENormalMode");
  }
  return;
}



// FUNCTION 142a1f0d0 EOptimizationType_StaticEnum body=55 status=ok
// SIG undefined EOptimizationType_StaticEnum(void)

void EOptimizationType_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b286e0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b286e0 = GetStaticEnum(FUN_142a1fa60,uVar1,L"EOptimizationType");
  }
  return;
}



// FUNCTION 142a1f110 ESplineMeshAxis_StaticEnum body=55 status=ok
// SIG undefined ESplineMeshAxis_StaticEnum(void)

void ESplineMeshAxis_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b286f8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b286f8 = GetStaticEnum(FUN_142a1fa90,uVar1,L"ESplineMeshAxis");
  }
  return;
}



// FUNCTION 142a1f150 FUN_142a1f150 body=55 status=ok
// SIG undefined FUN_142a1f150(void)

void FUN_142a1f150(void)

{
  undefined8 uVar1;
  
  if (DAT_146b286d8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b286d8 = GetStaticEnum(FUN_142a1fac0,uVar1,L"EStaticMeshLODType");
  }
  return;
}



// FUNCTION 142a1f190 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ARemnantMiniMapDisplayActor::GetPrivateStaticClass(void)

{
  if (DAT_146b28890 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"SpotLight",&DAT_146b28890,
                  StaticRegisterNativesARemnantMiniMapDisplayActor,0x470,0x10000000,0,L"Engine",
                  &LAB_142a1e550,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_142925b70,&LAB_140447700,0);
  }
  return DAT_146b28890;
}



// FUNCTION 142a1f240 Get_Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_CRC(void)

{
  return 0xfd4ce443;
}



// FUNCTION 142a1f250 FUN_142a1f250 body=6 status=ok
// SIG undefined FUN_142a1f250(void)

undefined8 FUN_142a1f250(void)

{
  return 0x5f8756aa;
}



// FUNCTION 142a1f260 Get_Z_Construct_UScriptStruct_FMaterialRemapIndex_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMaterialRemapIndex_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMaterialRemapIndex_CRC(void)

{
  return 0xcff31c9;
}



// FUNCTION 142a1f270 Get_Z_Construct_UScriptStruct_FMeshSectionInfoMap_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMeshSectionInfoMap_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMeshSectionInfoMap_CRC(void)

{
  return 0xfccc2521;
}


