// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142a11930 Copy body=213 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FCurveMetaData>::Copy
          (undefined8 param_1,undefined2 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  
  if (param_4 != 0) {
    puVar3 = (undefined8 *)(param_3 + 8);
    do {
      puVar1 = (undefined8 *)(param_2 + 4);
      *param_2 = *(undefined2 *)(puVar3 + -1);
      if (puVar1 != puVar3) {
        iVar2 = *(int *)(puVar3 + 1);
        _Src = (void *)*puVar3;
        *(int *)(param_2 + 8) = iVar2;
        if ((iVar2 == 0) && (*(int *)(param_2 + 10) == 0)) {
          *(undefined4 *)(param_2 + 10) = 0;
        }
        else {
          TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
          ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 * 0x18);
        }
      }
      puVar1 = puVar3 + 2;
      puVar3 = puVar3 + 4;
      *(undefined1 *)(param_2 + 0xc) = *(undefined1 *)puVar1;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x10;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142a11a10 FUN_142a11a10 body=206 status=ok
// SIG undefined FUN_142a11a10(void)

undefined8 FUN_142a11a10(undefined8 param_1,longlong *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  
  if (param_4 != 0) {
    plVar3 = (longlong *)(param_3 + 0x18);
    do {
      *param_2 = plVar3[-3];
      plVar1 = param_2 + 3;
      param_2[1] = plVar3[-2];
      *(int *)(param_2 + 2) = (int)plVar3[-1];
      if (plVar1 != plVar3) {
        iVar4 = (int)param_2[4];
        if (iVar4 != 0) {
          plVar2 = (longlong *)(*plVar1 + 0x30);
          do {
            if (*plVar2 != 0) {
              FMemory::Free();
            }
            plVar2 = plVar2 + 8;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        TArray<FBlendSampleData,TSizedDefaultAllocator<32>_>::CopyToEmpty<FBlendSampleData,int>
                  (plVar1,*plVar3,(int)plVar3[1],*(undefined4 *)((longlong)param_2 + 0x24),0);
      }
      plVar3 = plVar3 + 5;
      param_4 = param_4 + -1;
      param_2 = param_2 + 5;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142a11ae0 Copy body=71 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FSmartNameContainer>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      TSet<TTuple<FName,FSmartNameMapping>,TDefaultMapHashableKeyFuncs<FName,FSmartNameMapping,0>,FDefaultSetAllocator>
      ::operator=(param_2 + param_3,param_3);
      param_3 = param_3 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142a11b30 Copy body=173 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FSmartNameMapping>::Copy
          (undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  void *_Src;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      iVar1 = *(int *)(param_3 + 1);
      _Src = (void *)*param_3;
      *(int *)(param_2 + 1) = iVar1;
      if ((iVar1 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_2,iVar1);
        ::_guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar1 << 3);
      }
    }
    TSet<TTuple<FName,FCurveMetaData>,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>,FDefaultSetAllocator>
    ::operator=(param_2 + 2,param_3 + 2);
    param_3 = param_3 + 0xc;
    param_2 = param_2 + 0xc;
  }
  return 1;
}



// FUNCTION 142a11be0 Copy body=331 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FSoundAttenuationPluginSettings>::Copy
          (undefined8 param_1,int *param_2,longlong param_3,int param_4)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_4 != 0) {
    piVar3 = (int *)(param_3 + 0x28);
    do {
      if (param_2 != piVar3 + -10) {
        iVar1 = piVar3[-8];
        pvVar2 = *(void **)(piVar3 + -10);
        param_2[2] = iVar1;
        if ((iVar1 == 0) && (param_2[3] == 0)) {
          param_2[3] = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_2,iVar1);
          ::_guard_xfg_dispatch_icall_nop(*(void **)param_2,pvVar2,(longlong)iVar1 << 3);
        }
      }
      piVar4 = param_2 + 4;
      if (piVar4 != piVar3 + -6) {
        iVar1 = piVar3[-4];
        pvVar2 = *(void **)(piVar3 + -6);
        param_2[6] = iVar1;
        if ((iVar1 == 0) && (param_2[7] == 0)) {
          param_2[7] = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(piVar4,iVar1);
          ::_guard_xfg_dispatch_icall_nop(*(void **)piVar4,pvVar2,(longlong)iVar1 << 3);
        }
      }
      piVar4 = param_2 + 8;
      if (piVar4 != piVar3 + -2) {
        iVar1 = *piVar3;
        pvVar2 = *(void **)(piVar3 + -2);
        param_2[10] = iVar1;
        if ((iVar1 == 0) && (param_2[0xb] == 0)) {
          param_2[0xb] = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(piVar4,iVar1);
          ::_guard_xfg_dispatch_icall_nop(*(void **)piVar4,pvVar2,(longlong)iVar1 << 3);
        }
      }
      piVar3 = piVar3 + 0xc;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0xc;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142a11d30 Copy body=74 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FSoundAttenuationSettings>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FSoundAttenuationSettings::operator=(param_2 + param_3,param_3);
      param_3 = param_3 + 0x2a8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142a11ec0 Copy body=211 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FSoundGroup>::Copy
          (undefined8 param_1,undefined1 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *_Src;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    puVar4 = (undefined8 *)(param_3 + 8);
    do {
      puVar1 = (undefined8 *)(param_2 + 8);
      *param_2 = *(undefined1 *)(puVar4 + -1);
      if (puVar1 != puVar4) {
        iVar3 = *(int *)(puVar4 + 1);
        _Src = (void *)*puVar4;
        *(int *)(param_2 + 0x10) = iVar3;
        if ((iVar3 == 0) && (*(int *)(param_2 + 0x14) == 0)) {
          *(undefined4 *)(param_2 + 0x14) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar1,iVar3);
          ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar3 * 2);
        }
      }
      *(uint *)(param_2 + 0x18) =
           *(uint *)(param_2 + 0x18) ^ (*(uint *)(puVar4 + 2) ^ *(uint *)(param_2 + 0x18)) & 1;
      puVar2 = (undefined4 *)((longlong)puVar4 + 0x14);
      puVar4 = puVar4 + 4;
      *(undefined4 *)(param_2 + 0x1c) = *puVar2;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x20;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142a11fb0 Destruct body=78 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FSmartNameContainer>::Destruct
               (undefined8 param_1,longlong *param_2)

{
  *(undefined4 *)(param_2 + 9) = 0;
  if (param_2[8] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FSmartNameMapping>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_2,0);
  if (param_2[4] != 0) {
    FMemory::Free();
  }
  if (*param_2 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142a12010 EAirAbsorptionMethod_StaticEnum body=55 status=ok
// SIG undefined EAirAbsorptionMethod_StaticEnum(void)

void EAirAbsorptionMethod_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b27d00 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b27d00 = GetStaticEnum(FUN_142a12fb0,uVar1,L"EAirAbsorptionMethod");
  }
  return;
}



// FUNCTION 142a12050 EAudioOutputTarget_StaticEnum body=55 status=ok
// SIG undefined EAudioOutputTarget_StaticEnum(void)

void EAudioOutputTarget_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b27d20 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b27d20 = GetStaticEnum(FUN_142a12fe0,uVar1,L"EAudioOutputTarget");
  }
  return;
}



// FUNCTION 142a12090 EMaxConcurrentResolutionRule_StaticEnum body=55 status=ok
// SIG undefined EMaxConcurrentResolutionRule_StaticEnum(void)

void EMaxConcurrentResolutionRule_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b27d28 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b27d28 = GetStaticEnum(FUN_142a13010,uVar1,L"EMaxConcurrentResolutionRule");
  }
  return;
}



// FUNCTION 142a120d0 EReverbSendMethod_StaticEnum body=55 status=ok
// SIG undefined EReverbSendMethod_StaticEnum(void)

void EReverbSendMethod_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b27cf8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b27cf8 = GetStaticEnum(FUN_142a13040,uVar1,L"EReverbSendMethod");
  }
  return;
}



// FUNCTION 142a12110 ESkyLightSourceType_StaticEnum body=55 status=ok
// SIG undefined ESkyLightSourceType_StaticEnum(void)

void ESkyLightSourceType_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b27d18 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b27d18 = GetStaticEnum(FUN_142a13070,uVar1,L"ESkyLightSourceType");
  }
  return;
}



// FUNCTION 142a12150 ESoundDistanceCalc_StaticEnum body=55 status=ok
// SIG undefined ESoundDistanceCalc_StaticEnum(void)

void ESoundDistanceCalc_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b27d10 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b27d10 = GetStaticEnum(FUN_142a130a0,uVar1,L"ESoundDistanceCalc");
  }
  return;
}



// FUNCTION 142a12190 ESoundGroup_StaticEnum body=55 status=ok
// SIG undefined ESoundGroup_StaticEnum(void)

void ESoundGroup_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b27cf0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b27cf0 = GetStaticEnum(FUN_142a130d0,uVar1,L"ESoundGroup");
  }
  return;
}



// FUNCTION 142a121d0 ESoundSpatializationAlgorithm_StaticEnum body=55 status=ok
// SIG undefined ESoundSpatializationAlgorithm_StaticEnum(void)

void ESoundSpatializationAlgorithm_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b27d08 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b27d08 = GetStaticEnum(FUN_142a13100,uVar1,L"ESoundSpatializationAlgorithm");
  }
  return;
}



// FUNCTION 142a12210 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong USoundBase::GetPrivateStaticClass(void)

{
  if (DAT_146b27f18 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"SoundBase",&DAT_146b27f18,FUN_140447710,0xa8,0x10000001,0,
                  L"Engine",&LAB_142a11130,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b27f18;
}



// FUNCTION 142a122b0 Get_Z_Construct_UScriptStruct_FAnimCurveType_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FAnimCurveType_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FAnimCurveType_CRC(void)

{
  return 0xfd7cb245;
}



// FUNCTION 142a122c0 Get_Z_Construct_UScriptStruct_FAudioEQEffect_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FAudioEQEffect_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FAudioEQEffect_CRC(void)

{
  return 0xb1641444;
}



// FUNCTION 142a122d0 Get_Z_Construct_UScriptStruct_FCurveMetaData_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FCurveMetaData_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FCurveMetaData_CRC(void)

{
  return 0xdfa731f9;
}



// FUNCTION 142a122e0 Get_Z_Construct_UScriptStruct_FPassiveSoundMixModifier_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FPassiveSoundMixModifier_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FPassiveSoundMixModifier_CRC(void)

{
  return 0x8bf797cb;
}



// FUNCTION 142a122f0 FUN_142a122f0 body=6 status=ok
// SIG undefined FUN_142a122f0(void)

undefined8 FUN_142a122f0(void)

{
  return 0x68f46b52;
}



// FUNCTION 142a12300 FUN_142a12300 body=6 status=ok
// SIG undefined FUN_142a12300(void)

undefined8 FUN_142a12300(void)

{
  return 0xdf5ae9c9;
}



// FUNCTION 142a12310 Get_Z_Construct_UScriptStruct_FSmartNameContainer_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FSmartNameContainer_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FSmartNameContainer_CRC(void)

{
  return 0x364bbf08;
}



// FUNCTION 142a12320 Get_Z_Construct_UScriptStruct_FSmartNameMapping_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FSmartNameMapping_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FSmartNameMapping_CRC(void)

{
  return 0x3c0a4998;
}



// FUNCTION 142a12330 Get_Z_Construct_UScriptStruct_FSmartName_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FSmartName_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FSmartName_CRC(void)

{
  return 0x464b7cd3;
}



// FUNCTION 142a12340 Get_Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_CRC(void)

{
  return 0x8f3dac98;
}



// FUNCTION 142a12350 Get_Z_Construct_UScriptStruct_FSoundAttenuationSettings_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FSoundAttenuationSettings_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FSoundAttenuationSettings_CRC(void)

{
  return 0x498e9d07;
}



// FUNCTION 142a12360 Get_Z_Construct_UScriptStruct_FSoundClassAdjuster_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FSoundClassAdjuster_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FSoundClassAdjuster_CRC(void)

{
  return 0x6b526f6f;
}



// FUNCTION 142a12370 Get_Z_Construct_UScriptStruct_FSoundClassEditorData_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FSoundClassEditorData_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FSoundClassEditorData_CRC(void)

{
  return 0x89bdab1b;
}



// FUNCTION 142a12380 Get_Z_Construct_UScriptStruct_FSoundClassProperties_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FSoundClassProperties_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FSoundClassProperties_CRC(void)

{
  return 0x704b0271;
}



// FUNCTION 142a12390 Get_Z_Construct_UScriptStruct_FSoundConcurrencySettings_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FSoundConcurrencySettings_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FSoundConcurrencySettings_CRC(void)

{
  return 0xcc17daa1;
}



// FUNCTION 142a123a0 Get_Z_Construct_UScriptStruct_FSoundGroup_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FSoundGroup_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FSoundGroup_CRC(void)

{
  return 0xc6e4e49f;
}



// FUNCTION 142a123b0 Get_Z_Construct_UScriptStruct_FSoundNodeEditorData_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FSoundNodeEditorData_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FSoundNodeEditorData_CRC(void)

{
  return 0xe082766a;
}



// FUNCTION 142a123c0 Get_Z_Construct_UScriptStruct_FSourceEffectChainEntry_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FSourceEffectChainEntry_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FSourceEffectChainEntry_CRC(void)

{
  return 0xb3f3175c;
}



// FUNCTION 142a12500 Serialize body=112 status=ok
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
  USkyLightComponent::Serialize(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 142a12570 Serialize body=112 status=ok
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
  USoundClass::Serialize(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 142a125e0 Serialize body=112 status=ok
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
  FUN_14280f5e0(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 142a12650 FUN_142a12650 body=34 status=ok
// SIG undefined FUN_142a12650(void)

void FUN_142a12650(void)

{
  undefined8 uVar1;
  
  uVar1 = AAfrPlayerState::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnRep_bEnabled_14533a788,1);
  return;
}



// FUNCTION 142a12680 FUN_142a12680 body=34 status=ok
// SIG undefined FUN_142a12680(void)

void FUN_142a12680(void)

{
  undefined8 uVar1;
  
  uVar1 = UAtmosphericFogComponent::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_RecaptureSky_14533a7d0,0xc);
  return;
}



// FUNCTION 142a126b0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAnimCurveType::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b27ea0 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FAnimCurveType_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b27ea0 = GetStaticStruct(FUN_142a13130,uVar2,L"AnimCurveType",2,uVar1);
  }
  return;
}



// FUNCTION 142a12710 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAudioEQEffect::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b28038 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FAudioEQEffect_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b28038 = GetStaticStruct(FUN_142a13160,uVar2,L"AudioEQEffect",0x38,uVar1);
  }
  return;
}



// FUNCTION 142a12770 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FCurveMetaData::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b27e90 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FCurveMetaData_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b27e90 = GetStaticStruct(FUN_142a13190,uVar2,L"CurveMetaData",0x20,uVar1);
  }
  return;
}



// FUNCTION 142a127d0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FPassiveSoundMixModifier::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b27f28 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FPassiveSoundMixModifier_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b27f28 = GetStaticStruct(FUN_142a131c0,uVar2,L"PassiveSoundMixModifier",0x10,uVar1);
  }
  return;
}



// FUNCTION 142a12830 FUN_142a12830 body=82 status=ok
// SIG undefined FUN_142a12830(void)

void FUN_142a12830(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b27e40 == 0) {
    uVar1 = FUN_142a122f0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b27e40 = GetStaticStruct(FUN_142a131f0,uVar2,L"SlotNodeBlendSpaceData",0x28,uVar1);
  }
  return;
}



// FUNCTION 142a12890 FUN_142a12890 body=82 status=ok
// SIG undefined FUN_142a12890(void)

void FUN_142a12890(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b27e50 == 0) {
    uVar1 = FUN_142a12300();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b27e50 = GetStaticStruct(FUN_142a13220,uVar2,L"SlotNodeCameraData",0x10,uVar1);
  }
  return;
}



// FUNCTION 142a128f0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FSmartName::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b27e60 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FSmartName_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b27e60 = GetStaticStruct(FUN_142a13250,uVar2,L"SmartName",0x10,uVar1);
  }
  return;
}



// FUNCTION 142a12950 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FSmartNameContainer::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b27e70 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FSmartNameContainer_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b27e70 = GetStaticStruct(FUN_142a13280,uVar2,L"SmartNameContainer",0x50,uVar1);
  }
  return;
}



// FUNCTION 142a129b0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FSmartNameMapping::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b27e80 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FSmartNameMapping_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b27e80 = GetStaticStruct(FUN_142a132b0,uVar2,L"SmartNameMapping",0x60,uVar1);
  }
  return;
}



// FUNCTION 142a12a10 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FSoundAttenuationPluginSettings::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b27ef0 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b27ef0 =
         GetStaticStruct(FUN_142a132e0,uVar2,L"SoundAttenuationPluginSettings",0x30,uVar1);
  }
  return;
}



// FUNCTION 142a12a70 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FSoundAttenuationSettings::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b27ee0 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FSoundAttenuationSettings_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b27ee0 = GetStaticStruct(FUN_142a13310,uVar2,L"SoundAttenuationSettings",0x2a8,uVar1);
  }
  return;
}



// FUNCTION 142a12ad0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FSoundClassAdjuster::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b28028 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FSoundClassAdjuster_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b28028 = GetStaticStruct(FUN_142a13340,uVar2,L"SoundClassAdjuster",0x18,uVar1);
  }
  return;
}



// FUNCTION 142a12b30 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FSoundClassEditorData::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b27f48 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FSoundClassEditorData_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b27f48 = GetStaticStruct(FUN_142a13370,uVar2,L"SoundClassEditorData",8,uVar1);
  }
  return;
}



// FUNCTION 142a12b90 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FSoundClassProperties::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b27f38 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FSoundClassProperties_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b27f38 = GetStaticStruct(FUN_142a133a0,uVar2,L"SoundClassProperties",0x2c,uVar1);
  }
  return;
}



// FUNCTION 142a12bf0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FSoundConcurrencySettings::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b27f70 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FSoundConcurrencySettings_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b27f70 = GetStaticStruct(FUN_142a133d0,uVar2,L"SoundConcurrencySettings",0x10,uVar1);
  }
  return;
}



// FUNCTION 142a12c50 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FSoundGroup::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b28008 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FSoundGroup_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b28008 = GetStaticStruct(FUN_142a13400,uVar2,L"SoundGroup",0x20,uVar1);
  }
  return;
}



// FUNCTION 142a12cb0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FSoundNodeEditorData::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b27f90 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FSoundNodeEditorData_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b27f90 = GetStaticStruct(FUN_142a13430,uVar2,L"SoundNodeEditorData",8,uVar1);
  }
  return;
}



// FUNCTION 142a12d10 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FSourceEffectChainEntry::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b27fc0 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FSourceEffectChainEntry_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b27fc0 = GetStaticStruct(FUN_142a13460,uVar2,L"SourceEffectChainEntry",0x10,uVar1);
  }
  return;
}



// FUNCTION 142a12d70 FUN_142a12d70 body=47 status=ok
// SIG undefined FUN_142a12d70(void)

longlong FUN_142a12d70(void)

{
  if (DAT_146b27e20 == 0) {
    FUN_141786440(&DAT_146b27e20,&PTR_FUN_145338f60);
  }
  return DAT_146b27e20;
}



// FUNCTION 142a12da0 FUN_142a12da0 body=47 status=ok
// SIG undefined FUN_142a12da0(void)

longlong FUN_142a12da0(void)

{
  if (DAT_146b27e30 == 0) {
    FUN_141786440(&DAT_146b27e30,&PTR_GetPrivateStaticClass_1453391d0);
  }
  return DAT_146b27e30;
}



// FUNCTION 142a12dd0 FUN_142a12dd0 body=47 status=ok
// SIG undefined FUN_142a12dd0(void)

longlong FUN_142a12dd0(void)

{
  if (DAT_146b27eb0 == 0) {
    FUN_141786440(&DAT_146b27eb0,&PTR_StaticClass_145336c10);
  }
  return DAT_146b27eb0;
}



// FUNCTION 142a12e00 FUN_142a12e00 body=47 status=ok
// SIG undefined FUN_142a12e00(void)

longlong FUN_142a12e00(void)

{
  if (DAT_146b27f00 == 0) {
    FUN_141786440(&DAT_146b27f00,&PTR_StaticClass_145337e70);
  }
  return DAT_146b27f00;
}



// FUNCTION 142a12e30 FUN_142a12e30 body=47 status=ok
// SIG undefined FUN_142a12e30(void)

longlong FUN_142a12e30(void)

{
  if (DAT_146b27f58 == 0) {
    FUN_141786440(&DAT_146b27f58,&PTR_GetPrivateStaticClass_145339280);
  }
  return DAT_146b27f58;
}



// FUNCTION 142a12e60 FUN_142a12e60 body=47 status=ok
// SIG undefined FUN_142a12e60(void)

longlong FUN_142a12e60(void)

{
  if (DAT_146b27f80 == 0) {
    FUN_141786440(&DAT_146b27f80,&PTR_GetPrivateStaticClass_145339840);
  }
  return DAT_146b27f80;
}



// FUNCTION 142a12e90 FUN_142a12e90 body=47 status=ok
// SIG undefined FUN_142a12e90(void)

longlong FUN_142a12e90(void)

{
  if (DAT_146b27fa0 == 0) {
    FUN_141786440(&DAT_146b27fa0,&PTR_GetPrivateStaticClass_145339a00);
  }
  return DAT_146b27fa0;
}



// FUNCTION 142a12ec0 FUN_142a12ec0 body=47 status=ok
// SIG undefined FUN_142a12ec0(void)

longlong FUN_142a12ec0(void)

{
  if (DAT_146b27fd0 == 0) {
    FUN_141786440(&DAT_146b27fd0,&PTR_StaticClass_145339d10);
  }
  return DAT_146b27fd0;
}



// FUNCTION 142a12ef0 FUN_142a12ef0 body=47 status=ok
// SIG undefined FUN_142a12ef0(void)

longlong FUN_142a12ef0(void)

{
  if (DAT_146b27fe0 == 0) {
    FUN_141786440(&DAT_146b27fe0,&PTR_StaticClass_145339e70);
  }
  return DAT_146b27fe0;
}



// FUNCTION 142a12f20 FUN_142a12f20 body=47 status=ok
// SIG undefined FUN_142a12f20(void)

longlong FUN_142a12f20(void)

{
  if (DAT_146b27ff0 == 0) {
    FUN_141786440(&DAT_146b27ff0,&PTR_GetPrivateStaticClass_145339ff0);
  }
  return DAT_146b27ff0;
}



// FUNCTION 142a12f50 FUN_142a12f50 body=47 status=ok
// SIG undefined FUN_142a12f50(void)

longlong FUN_142a12f50(void)

{
  if (DAT_146b28018 == 0) {
    FUN_141786440(&DAT_146b28018,&PTR_GetPrivateStaticClass_1453369d0);
  }
  return DAT_146b28018;
}



// FUNCTION 142a12f80 FUN_142a12f80 body=47 status=ok
// SIG undefined FUN_142a12f80(void)

longlong FUN_142a12f80(void)

{
  if (DAT_146b28048 == 0) {
    FUN_141786440(&DAT_146b28048,&PTR_GetPrivateStaticClass_145337690);
  }
  return DAT_146b28048;
}



// FUNCTION 142a12fb0 FUN_142a12fb0 body=47 status=ok
// SIG undefined FUN_142a12fb0(void)

longlong FUN_142a12fb0(void)

{
  if (DAT_146b27ec8 == 0) {
    FUN_1417866a0(&DAT_146b27ec8,&PTR_Z_Construct_UPackage__Script_Engine_14665f8f0);
  }
  return DAT_146b27ec8;
}



// FUNCTION 142a12fe0 FUN_142a12fe0 body=47 status=ok
// SIG undefined FUN_142a12fe0(void)

longlong FUN_142a12fe0(void)

{
  if (DAT_146b27f20 == 0) {
    FUN_1417866a0(&DAT_146b27f20,&PTR_Z_Construct_UPackage__Script_Engine_14665f9e0);
  }
  return DAT_146b27f20;
}



// FUNCTION 142a13010 FUN_142a13010 body=47 status=ok
// SIG undefined FUN_142a13010(void)

longlong FUN_142a13010(void)

{
  if (DAT_146b27f68 == 0) {
    FUN_1417866a0(&DAT_146b27f68,&PTR_Z_Construct_UPackage__Script_Engine_14665fa30);
  }
  return DAT_146b27f68;
}



// FUNCTION 142a13040 FUN_142a13040 body=47 status=ok
// SIG undefined FUN_142a13040(void)

longlong FUN_142a13040(void)

{
  if (DAT_146b27ec0 == 0) {
    FUN_1417866a0(&DAT_146b27ec0,&PTR_Z_Construct_UPackage__Script_Engine_14665f8a0);
  }
  return DAT_146b27ec0;
}



// FUNCTION 142a13070 FUN_142a13070 body=47 status=ok
// SIG undefined FUN_142a13070(void)

longlong FUN_142a13070(void)

{
  if (DAT_146b27da8 == 0) {
    FUN_1417866a0(&DAT_146b27da8,&PTR_Z_Construct_UPackage__Script_Engine_14665f850);
  }
  return DAT_146b27da8;
}



// FUNCTION 142a130a0 FUN_142a130a0 body=47 status=ok
// SIG undefined FUN_142a130a0(void)

longlong FUN_142a130a0(void)

{
  if (DAT_146b27ed8 == 0) {
    FUN_1417866a0(&DAT_146b27ed8,&PTR_Z_Construct_UPackage__Script_Engine_14665f990);
  }
  return DAT_146b27ed8;
}



// FUNCTION 142a130d0 FUN_142a130d0 body=47 status=ok
// SIG undefined FUN_142a130d0(void)

longlong FUN_142a130d0(void)

{
  if (DAT_146b28000 == 0) {
    FUN_1417866a0(&DAT_146b28000,&PTR_Z_Construct_UPackage__Script_Engine_14665fa80);
  }
  return DAT_146b28000;
}



// FUNCTION 142a13100 FUN_142a13100 body=47 status=ok
// SIG undefined FUN_142a13100(void)

longlong FUN_142a13100(void)

{
  if (DAT_146b27ed0 == 0) {
    FUN_1417866a0(&DAT_146b27ed0,&PTR_Z_Construct_UPackage__Script_Engine_14665f940);
  }
  return DAT_146b27ed0;
}



// FUNCTION 142a13130 FUN_142a13130 body=47 status=ok
// SIG undefined FUN_142a13130(void)

longlong FUN_142a13130(void)

{
  if (DAT_146b27ea8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b27ea8,&PTR_Z_Construct_UPackage__Script_Engine_14665cfc0);
  }
  return DAT_146b27ea8;
}



// FUNCTION 142a13160 FUN_142a13160 body=47 status=ok
// SIG undefined FUN_142a13160(void)

longlong FUN_142a13160(void)

{
  if (DAT_146b28040 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b28040,&PTR_Z_Construct_UPackage__Script_Engine_14665f600);
  }
  return DAT_146b28040;
}



// FUNCTION 142a13190 FUN_142a13190 body=47 status=ok
// SIG undefined FUN_142a13190(void)

longlong FUN_142a13190(void)

{
  if (DAT_146b27e98 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b27e98,&PTR_Z_Construct_UPackage__Script_Engine_14665cf40);
  }
  return DAT_146b27e98;
}



// FUNCTION 142a131c0 FUN_142a131c0 body=47 status=ok
// SIG undefined FUN_142a131c0(void)

longlong FUN_142a131c0(void)

{
  if (DAT_146b27f30 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b27f30,&PTR_Z_Construct_UPackage__Script_Engine_14665e4f0);
  }
  return DAT_146b27f30;
}



// FUNCTION 142a131f0 FUN_142a131f0 body=47 status=ok
// SIG undefined FUN_142a131f0(void)

longlong FUN_142a131f0(void)

{
  if (DAT_146b27e48 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b27e48,&PTR_Z_Construct_UPackage__Script_Engine_14665ccd0);
  }
  return DAT_146b27e48;
}



// FUNCTION 142a13220 FUN_142a13220 body=47 status=ok
// SIG undefined FUN_142a13220(void)

longlong FUN_142a13220(void)

{
  if (DAT_146b27e58 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b27e58,&PTR_Z_Construct_UPackage__Script_Engine_14665cd50);
  }
  return DAT_146b27e58;
}



// FUNCTION 142a13250 FUN_142a13250 body=47 status=ok
// SIG undefined FUN_142a13250(void)

longlong FUN_142a13250(void)

{
  if (DAT_146b27e68 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b27e68,&PTR_Z_Construct_UPackage__Script_Engine_14665cdc0);
  }
  return DAT_146b27e68;
}



// FUNCTION 142a13280 FUN_142a13280 body=47 status=ok
// SIG undefined FUN_142a13280(void)

longlong FUN_142a13280(void)

{
  if (DAT_146b27e78 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b27e78,&PTR_Z_Construct_UPackage__Script_Engine_14665ce40);
  }
  return DAT_146b27e78;
}



// FUNCTION 142a132b0 FUN_142a132b0 body=47 status=ok
// SIG undefined FUN_142a132b0(void)

longlong FUN_142a132b0(void)

{
  if (DAT_146b27e88 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b27e88,&PTR_Z_Construct_UPackage__Script_Engine_14665cec0);
  }
  return DAT_146b27e88;
}



// FUNCTION 142a132e0 FUN_142a132e0 body=47 status=ok
// SIG undefined FUN_142a132e0(void)

longlong FUN_142a132e0(void)

{
  if (DAT_146b27ef8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b27ef8,&PTR_Z_Construct_UPackage__Script_Engine_14665ddb0);
  }
  return DAT_146b27ef8;
}



// FUNCTION 142a13310 FUN_142a13310 body=47 status=ok
// SIG undefined FUN_142a13310(void)

longlong FUN_142a13310(void)

{
  if (DAT_146b27ee8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b27ee8,&PTR_Z_Construct_UPackage__Script_Engine_14665dc80);
  }
  return DAT_146b27ee8;
}



// FUNCTION 142a13340 FUN_142a13340 body=47 status=ok
// SIG undefined FUN_142a13340(void)

longlong FUN_142a13340(void)

{
  if (DAT_146b28030 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b28030,&PTR_Z_Construct_UPackage__Script_Engine_14665f2e0);
  }
  return DAT_146b28030;
}



// FUNCTION 142a13370 FUN_142a13370 body=47 status=ok
// SIG undefined FUN_142a13370(void)

longlong FUN_142a13370(void)

{
  if (DAT_146b27f50 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b27f50,&PTR_Z_Construct_UPackage__Script_Engine_14665e990);
  }
  return DAT_146b27f50;
}



// FUNCTION 142a133a0 FUN_142a133a0 body=47 status=ok
// SIG undefined FUN_142a133a0(void)

longlong FUN_142a133a0(void)

{
  if (DAT_146b27f40 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b27f40,&PTR_Z_Construct_UPackage__Script_Engine_14665e910);
  }
  return DAT_146b27f40;
}



// FUNCTION 142a133d0 FUN_142a133d0 body=47 status=ok
// SIG undefined FUN_142a133d0(void)

longlong FUN_142a133d0(void)

{
  if (DAT_146b27f78 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b27f78,&PTR_Z_Construct_UPackage__Script_Engine_14665ebc0);
  }
  return DAT_146b27f78;
}



// FUNCTION 142a13400 FUN_142a13400 body=47 status=ok
// SIG undefined FUN_142a13400(void)

longlong FUN_142a13400(void)

{
  if (DAT_146b28010 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b28010,&PTR_Z_Construct_UPackage__Script_Engine_14665f100);
  }
  return DAT_146b28010;
}



// FUNCTION 142a13430 FUN_142a13430 body=47 status=ok
// SIG undefined FUN_142a13430(void)

longlong FUN_142a13430(void)

{
  if (DAT_146b27f98 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b27f98,&PTR_Z_Construct_UPackage__Script_Engine_14665ec70);
  }
  return DAT_146b27f98;
}



// FUNCTION 142a13460 FUN_142a13460 body=47 status=ok
// SIG undefined FUN_142a13460(void)

longlong FUN_142a13460(void)

{
  if (DAT_146b27fc8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b27fc8,&PTR_Z_Construct_UPackage__Script_Engine_14665ef00);
  }
  return DAT_146b27fc8;
}



// FUNCTION 142a134b0 FUN_142a134b0 body=128 status=ok
// SIG undefined FUN_142a134b0(void)

void FUN_142a134b0(undefined8 param_1,longlong param_2)

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
  FUN_1423b9fa0(param_1,local_res10);
  return;
}



// FUNCTION 142a13530 FUN_142a13530 body=259 status=ok
// SIG undefined FUN_142a13530(void)

void FUN_142a13530(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
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
  FUN_1423ba000(param_1,local_18[0],local_res20,local_res10[0]);
  return;
}



// FUNCTION 142a13640 FUN_142a13640 body=123 status=ok
// SIG undefined FUN_142a13640(void)

void FUN_142a13640(undefined8 param_1,longlong param_2)

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
  FUN_1423ba6e0(param_1,local_res10[0]);
  return;
}



// FUNCTION 142a136c0 FUN_142a136c0 body=123 status=ok
// SIG undefined FUN_142a136c0(void)

void FUN_142a136c0(undefined8 param_1,longlong param_2)

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
  FUN_1423ba730(param_1,local_res10[0]);
  return;
}



// FUNCTION 142a13740 FUN_142a13740 body=124 status=ok
// SIG undefined FUN_142a13740(void)

void FUN_142a13740(undefined8 param_1,longlong param_2)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
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
  FUN_1423ba780(param_1,&local_18);
  return;
}



// FUNCTION 142a137c0 FUN_142a137c0 body=138 status=ok
// SIG undefined FUN_142a137c0(void)

void FUN_142a137c0(undefined8 param_1,longlong param_2)

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
  FUN_1423ba970(param_1,puVar1);
  return;
}



// FUNCTION 142a13850 FUN_142a13850 body=123 status=ok
// SIG undefined FUN_142a13850(void)

void FUN_142a13850(undefined8 param_1,longlong param_2)

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
  FUN_1423bace0(param_1,local_res10[0]);
  return;
}



// FUNCTION 142a138d0 FUN_142a138d0 body=123 status=ok
// SIG undefined FUN_142a138d0(void)

void FUN_142a138d0(undefined8 param_1,longlong param_2)

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
  FUN_1423bae30(param_1,local_res10[0]);
  return;
}



// FUNCTION 142a13950 FUN_142a13950 body=123 status=ok
// SIG undefined FUN_142a13950(void)

void FUN_142a13950(undefined8 param_1,longlong param_2)

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
  FUN_1423bae80(param_1,local_res10[0]);
  return;
}



// FUNCTION 142a139d0 execSetScrollbarThickness body=138 status=ok
// SIG undefined execSetScrollbarThickness(void)

void UScrollBox::execSetScrollbarThickness(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 local_res10 [8];
  
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
  FUN_1423baed0(param_1,puVar1);
  return;
}



// FUNCTION 142a13a60 FUN_142a13a60 body=123 status=ok
// SIG undefined FUN_142a13a60(void)

void FUN_142a13a60(undefined8 param_1,longlong param_2)

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
  FUN_1423bd290(param_1,local_res10[0]);
  return;
}



// FUNCTION 142a13af0 FUN_142a13af0 body=53 status=ok
// SIG undefined FUN_142a13af0(void)

void FUN_142a13af0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_145344950;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142a13b30 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong USoundNode::GetPrivateStaticClass(void)

{
  if (DAT_146b28128 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"SoundNode",&DAT_146b28128,FUN_140447710,0x38,0x10000001,0,
                  L"Engine",&LAB_142a16680,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b28128;
}



// FUNCTION 142a13bf0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGenericItem::GetPrivateStaticClass(void)

{
  if (DAT_146b28378 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"SpectatorPawn",&DAT_146b28378,FUN_140447710,0x4e8,0x10000000,0
                  ,L"Game",&LAB_142a16640,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b28378;
}



// FUNCTION 142a13cb0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGPlayerInputComponent::GetPrivateStaticClass(void)

{
  if (DAT_146b28388 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"SpectatorPawnMovement",&DAT_146b28388,FUN_140447710,0x238,
                  0x10000004,0,L"Engine",&LAB_142a16a90,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1429365a0,&LAB_140447700,0);
  }
  return DAT_146b28388;
}



// FUNCTION 142a13d70 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong USoundNodeDoppler::StaticClass(void)

{
  if (DAT_146b281b8 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"SoundNodeDoppler",&DAT_146b281b8,FUN_140447710,0x40,0x10000000
                  ,0,L"Engine",&LAB_142a16790,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USoundNode::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b281b8;
}



// FUNCTION 142a13e20 FUN_142a13e20 body=47 status=ok
// SIG undefined FUN_142a13e20(void)

longlong FUN_142a13e20(void)

{
  if (DAT_146b283b0 == 0) {
    FUN_141786440(&DAT_146b283b0,&PTR_thunk_FUN_142a175e0_14533dc30);
  }
  return DAT_146b283b0;
}



// FUNCTION 142a13e50 FUN_142a13e50 body=47 status=ok
// SIG undefined FUN_142a13e50(void)

longlong FUN_142a13e50(void)

{
  if (DAT_146b28390 == 0) {
    FUN_141786a30(&DAT_146b28390,&PTR_FUN_146662250);
  }
  return DAT_146b28390;
}



// FUNCTION 142a13e80 FUN_142a13e80 body=47 status=ok
// SIG undefined FUN_142a13e80(void)

longlong FUN_142a13e80(void)

{
  if (DAT_146b28398 == 0) {
    FUN_141786a30(&DAT_146b28398,&PTR_FUN_1466622d0);
  }
  return DAT_146b28398;
}



// FUNCTION 142a13eb0 FUN_142a13eb0 body=47 status=ok
// SIG undefined FUN_142a13eb0(void)

longlong FUN_142a13eb0(void)

{
  if (DAT_146b283a0 == 0) {
    FUN_141786a30(&DAT_146b283a0,&PTR_FUN_146662350);
  }
  return DAT_146b283a0;
}



// FUNCTION 142a13ee0 FUN_142a13ee0 body=47 status=ok
// SIG undefined FUN_142a13ee0(void)

longlong FUN_142a13ee0(void)

{
  if (DAT_146b283a8 == 0) {
    FUN_141786a30(&DAT_146b283a8,&PTR_FUN_146662410);
  }
  return DAT_146b283a8;
}



// FUNCTION 142a13f20 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong USoundNodeEnveloper::StaticClass(void)

{
  if (DAT_146b281c8 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"SoundNodeEnveloper",&DAT_146b281c8,FUN_140447710,0x160,
                  0x10000000,0,L"Engine",&LAB_142a167b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USoundNode::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b281c8;
}



// FUNCTION 142a13fd0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMovieSceneActorReferenceSection::GetPrivateStaticClass(void)

{
  if (DAT_146b28358 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"SoundWave",&DAT_146b28358,FUN_140447710,0x200,0x10000000,0,
                  L"Engine",&LAB_142a16a50,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USoundBase::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b28358;
}



// FUNCTION 142a140a0 FUN_142a140a0 body=47 status=ok
// SIG undefined FUN_142a140a0(void)

longlong FUN_142a140a0(void)

{
  if (DAT_146b28120 == 0) {
    FUN_141786440(&DAT_146b28120,&PTR_GetPrivateStaticClass_14533e1e0);
  }
  return DAT_146b28120;
}



// FUNCTION 142a140d0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong USoundNodeGroupControl::StaticClass(void)

{
  if (DAT_146b281d8 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"SoundNodeGroupControl",&DAT_146b281d8,FUN_140447710,0x48,
                  0x10000000,0,L"Engine",&LAB_142a167d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USoundNode::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b281d8;
}



// FUNCTION 142a14180 FUN_142a14180 body=53 status=ok
// SIG undefined FUN_142a14180(void)

void FUN_142a14180(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb0;
    *puVar1 = &PTR_FUN_145344ab0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 142a141d0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong USoundNodeAssetReferencer::GetPrivateStaticClass(void)

{
  if (DAT_146b28138 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"SoundNodeAssetReferencer",&DAT_146b28138,FUN_140447710,0x38,
                  0x10000001,0,L"Engine",FUN_142a166a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USoundNode::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b28138;
}



// FUNCTION 142a14290 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AAfrPlayerState::GetPrivateStaticClass(void)

{
  if (DAT_146b283d8 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"SphereReflectionCapture",&DAT_146b283d8,FUN_140447710,0x468,
                  0x10000000,0,L"Engine",&LAB_142a16660,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_14290f8a0,&LAB_140447700,0);
  }
  return DAT_146b283d8;
}



// FUNCTION 142a14340 FUN_142a14340 body=47 status=ok
// SIG undefined FUN_142a14340(void)

longlong FUN_142a14340(void)

{
  if (DAT_146b28130 == 0) {
    FUN_141786440(&DAT_146b28130,&PTR_GetPrivateStaticClass_14533e590);
  }
  return DAT_146b28130;
}



// FUNCTION 142a14370 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong USoundNodeLooping::StaticClass(void)

{
  if (DAT_146b281e8 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"SoundNodeLooping",&DAT_146b281e8,FUN_140447710,0x40,0x10000000
                  ,0,L"Engine",&LAB_142a167f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USoundNode::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b281e8;
}



// FUNCTION 142a14440 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong USoundNodeAttenuation::StaticClass(void)

{
  if (DAT_146b28148 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"SoundNodeAttenuation",&DAT_146b28148,FUN_140447710,0x2f0,
                  0x10000000,0,L"Engine",&LAB_142a166d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USoundNode::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b28148;
}



// FUNCTION 142a14500 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong USoundNodeMature::StaticClass(void)

{
  if (DAT_146b281f8 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"SoundNodeMature",&DAT_146b281f8,FUN_140447710,0x38,0x10000000,
                  0,L"Engine",&LAB_142a16810,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USoundNode::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b281f8;
}



// FUNCTION 142a145c0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAnimBlueprintGeneratedClass::GetPrivateStaticClass(void)

{
  if (DAT_146b283e8 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"SphereReflectionCaptureComponent",&DAT_146b283e8,FUN_140447710
                  ,0x350,0x10000000,0,L"Engine",&LAB_142a16ad0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1429f8200,&LAB_140447700,0);
  }
  return DAT_146b283e8;
}



// FUNCTION 142a14670 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong USoundNodeBranch::StaticClass(void)

{
  if (DAT_146b28158 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"SoundNodeBranch",&DAT_146b28158,FUN_140447710,0x40,0x10000000,
                  0,L"Engine",&LAB_142a166f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USoundNode::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b28158;
}



// FUNCTION 142a14730 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong USoundNodeMixer::StaticClass(void)

{
  if (DAT_146b28208 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"SoundNodeMixer",&DAT_146b28208,FUN_140447710,0x48,0x10000000,0
                  ,L"Engine",&LAB_142a16830,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USoundNode::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b28208;
}



// FUNCTION 142a14800 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong USoundNodeConcatenator::StaticClass(void)

{
  if (DAT_146b28168 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"SoundNodeConcatenator",&DAT_146b28168,FUN_140447710,0x48,
                  0x10000000,0,L"Engine",&LAB_142a16710,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USoundNode::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b28168;
}



// FUNCTION 142a148c0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong USoundNodeModulator::StaticClass(void)

{
  if (DAT_146b28218 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"SoundNodeModulator",&DAT_146b28218,FUN_140447710,0x48,
                  0x10000000,0,L"Engine",&LAB_142a16850,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USoundNode::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b28218;
}



// FUNCTION 142a14970 FUN_142a14970 body=53 status=ok
// SIG undefined FUN_142a14970(void)

void FUN_142a14970(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xd0;
    *puVar1 = &PTR_FUN_145344bc8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 142a149c0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong USoundNodeDelay::StaticClass(void)

{
  if (DAT_146b28178 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"SoundNodeDelay",&DAT_146b28178,FUN_140447710,0x40,0x10000000,0
                  ,L"Engine",&LAB_142a16730,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USoundNode::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b28178;
}



// FUNCTION 142a14a90 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UCurveLinearColor::GetPrivateStaticClass(void)

{
  if (DAT_146b28368 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"SoundWaveProcedural",&DAT_146b28368,FUN_140447710,0x250,
                  0x10000000,0,L"Engine",&LAB_142a16a70,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UMovieSceneActorReferenceSection::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b28368;
}



// FUNCTION 142a14b40 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong USoundNodeModulatorContinuous::StaticClass(void)

{
  if (DAT_146b28240 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"SoundNodeModulatorContinuous",&DAT_146b28240,FUN_140447710,
                  0x78,0x10000000,0,L"Engine",&LAB_142a16870,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USoundNode::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b28240;
}



// FUNCTION 142a14bf0 FUN_142a14bf0 body=151 status=ok
// SIG undefined FUN_142a14bf0(void)

longlong FUN_142a14bf0(void)

{
  if (DAT_146b28330 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"SoundSubmix",&DAT_146b28330,FUN_142a17b40,0x78,0x10000000,0,
                  L"Engine",&LAB_142a16a30,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b28330;
}



// FUNCTION 142a14c90 FUN_142a14c90 body=53 status=ok
// SIG undefined FUN_142a14c90(void)

void FUN_142a14c90(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_1453440e0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142a14ce0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMaterialInstanceDynamic::GetPrivateStaticClass(void)

{
  if (DAT_146b282d8 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"SoundSourceBus",&DAT_146b282d8,FUN_140447710,0x218,0x10000000,
                  0,L"Engine",FUN_142a16a00,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UMovieSceneActorReferenceSection::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b282d8;
}



// FUNCTION 142a14d90 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong USoundNodeDialoguePlayer::StaticClass(void)

{
  if (DAT_146b28188 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"SoundNodeDialoguePlayer",&DAT_146b28188,FUN_140447710,0x60,
                  0x10000000,0,L"Engine",&LAB_142a16750,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USoundNode::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b28188;
}



// FUNCTION 142a14e40 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong USoundNodeOscillator::StaticClass(void)

{
  if (DAT_146b28250 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"SoundNodeOscillator",&DAT_146b28250,FUN_140447710,0x60,
                  0x10000000,0,L"Engine",&LAB_142a16890,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USoundNode::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b28250;
}



// FUNCTION 142a14f10 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong USoundNodeDistanceCrossFade::StaticClass(void)

{
  if (DAT_146b281a8 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"SoundNodeDistanceCrossFade",&DAT_146b281a8,FUN_140447710,0x48,
                  0x10000000,0,L"Engine",&LAB_142a16770,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USoundNode::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b281a8;
}



// FUNCTION 142a14fd0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong USoundNodeParamCrossFade::StaticClass(void)

{
  if (DAT_146b28260 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"SoundNodeParamCrossFade",&DAT_146b28260,FUN_140447710,0x50,
                  0x10000000,0,L"Engine",&LAB_142a168b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USoundNodeDistanceCrossFade::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b28260;
}



// FUNCTION 142a15090 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong USoundNodeQualityLevel::GetPrivateStaticClass(void)

{
  if (DAT_146b28270 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"SoundNodeQualityLevel",&DAT_146b28270,FUN_140447710,0x38,
                  0x10000000,0,L"Engine",FUN_142a168d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USoundNode::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b28270;
}



// FUNCTION 142a15150 FUN_142a15150 body=47 status=ok
// SIG undefined FUN_142a15150(void)

longlong FUN_142a15150(void)

{
  if (DAT_146b281a0 == 0) {
    FUN_141786440(&DAT_146b281a0,&PTR_StaticClass_145341740);
  }
  return DAT_146b281a0;
}



// FUNCTION 142a15180 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong USoundNodeRandom::StaticClass(void)

{
  if (DAT_146b28280 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"SoundNodeRandom",&DAT_146b28280,FUN_140447710,0x70,0x10000000,
                  0,L"Engine",&LAB_142a16900,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USoundNode::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b28280;
}



// FUNCTION 142a15250 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong USoundNodeSoundClass::GetPrivateStaticClass(void)

{
  if (DAT_146b28290 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"SoundNodeSoundClass",&DAT_146b28290,FUN_140447710,0x40,
                  0x10000000,0,L"Engine",&LAB_142a16920,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USoundNode::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b28290;
}



// FUNCTION 142a15310 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong USoundNodeSwitch::StaticClass(void)

{
  if (DAT_146b282a0 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"SoundNodeSwitch",&DAT_146b282a0,FUN_140447710,0x40,0x10000000,
                  0,L"Engine",&LAB_142a16940,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USoundNode::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b282a0;
}



// FUNCTION 142a153c0 FUN_142a153c0 body=47 status=ok
// SIG undefined FUN_142a153c0(void)

longlong FUN_142a153c0(void)

{
  if (DAT_146b286c8 == 0) {
    FUN_141786440(&DAT_146b286c8,&PTR_GetPrivateStaticClass_145340120);
  }
  return DAT_146b286c8;
}



// FUNCTION 142a153f0 FUN_142a153f0 body=47 status=ok
// SIG undefined FUN_142a153f0(void)

longlong FUN_142a153f0(void)

{
  if (DAT_146b28440 == 0) {
    FUN_141786a30(&DAT_146b28440,&PTR_FUN_146662e00);
  }
  return DAT_146b28440;
}



// FUNCTION 142a15420 FUN_142a15420 body=47 status=ok
// SIG undefined FUN_142a15420(void)

longlong FUN_142a15420(void)

{
  if (DAT_146b28448 == 0) {
    FUN_141786a30(&DAT_146b28448,&PTR_FUN_146662f00);
  }
  return DAT_146b28448;
}



// FUNCTION 142a15450 FUN_142a15450 body=47 status=ok
// SIG undefined FUN_142a15450(void)

longlong FUN_142a15450(void)

{
  if (DAT_146b28450 == 0) {
    FUN_141786a30(&DAT_146b28450,&PTR_FUN_146662f80);
  }
  return DAT_146b28450;
}



// FUNCTION 142a15480 FUN_142a15480 body=47 status=ok
// SIG undefined FUN_142a15480(void)

longlong FUN_142a15480(void)

{
  if (DAT_146b28458 == 0) {
    FUN_141786a30(&DAT_146b28458,&PTR_FUN_146663090);
  }
  return DAT_146b28458;
}



// FUNCTION 142a154b0 FUN_142a154b0 body=47 status=ok
// SIG undefined FUN_142a154b0(void)

longlong FUN_142a154b0(void)

{
  if (DAT_146b28460 == 0) {
    FUN_141786a30(&DAT_146b28460,&PTR_FUN_1466631e0);
  }
  return DAT_146b28460;
}



// FUNCTION 142a154e0 FUN_142a154e0 body=47 status=ok
// SIG undefined FUN_142a154e0(void)

longlong FUN_142a154e0(void)

{
  if (DAT_146b28468 == 0) {
    FUN_141786a30(&DAT_146b28468,&PTR_FUN_146663370);
  }
  return DAT_146b28468;
}



// FUNCTION 142a15510 FUN_142a15510 body=47 status=ok
// SIG undefined FUN_142a15510(void)

longlong FUN_142a15510(void)

{
  if (DAT_146b28470 == 0) {
    FUN_141786a30(&DAT_146b28470,&PTR_FUN_1466633f0);
  }
  return DAT_146b28470;
}



// FUNCTION 142a15540 FUN_142a15540 body=47 status=ok
// SIG undefined FUN_142a15540(void)

longlong FUN_142a15540(void)

{
  if (DAT_146b28478 == 0) {
    FUN_141786a30(&DAT_146b28478,&PTR_FUN_146663480);
  }
  return DAT_146b28478;
}



// FUNCTION 142a15570 FUN_142a15570 body=47 status=ok
// SIG undefined FUN_142a15570(void)

longlong FUN_142a15570(void)

{
  if (DAT_146b28480 == 0) {
    FUN_141786a30(&DAT_146b28480,&PTR_FUN_146663580);
  }
  return DAT_146b28480;
}



// FUNCTION 142a155a0 FUN_142a155a0 body=47 status=ok
// SIG undefined FUN_142a155a0(void)

longlong FUN_142a155a0(void)

{
  if (DAT_146b28488 == 0) {
    FUN_141786a30(&DAT_146b28488,&PTR_FUN_146663640);
  }
  return DAT_146b28488;
}



// FUNCTION 142a155d0 FUN_142a155d0 body=47 status=ok
// SIG undefined FUN_142a155d0(void)

longlong FUN_142a155d0(void)

{
  if (DAT_146b28490 == 0) {
    FUN_141786a30(&DAT_146b28490,&PTR_FUN_146663740);
  }
  return DAT_146b28490;
}



// FUNCTION 142a15600 FUN_142a15600 body=47 status=ok
// SIG undefined FUN_142a15600(void)

longlong FUN_142a15600(void)

{
  if (DAT_146b28498 == 0) {
    FUN_141786a30(&DAT_146b28498,&PTR_FUN_146663840);
  }
  return DAT_146b28498;
}



// FUNCTION 142a15630 FUN_142a15630 body=47 status=ok
// SIG undefined FUN_142a15630(void)

longlong FUN_142a15630(void)

{
  if (DAT_146b284a0 == 0) {
    FUN_141786a30(&DAT_146b284a0,&PTR_FUN_146663940);
  }
  return DAT_146b284a0;
}



// FUNCTION 142a15660 FUN_142a15660 body=47 status=ok
// SIG undefined FUN_142a15660(void)

longlong FUN_142a15660(void)

{
  if (DAT_146b284a8 == 0) {
    FUN_141786a30(&DAT_146b284a8,&PTR_FUN_146663a40);
  }
  return DAT_146b284a8;
}



// FUNCTION 142a15690 FUN_142a15690 body=47 status=ok
// SIG undefined FUN_142a15690(void)

longlong FUN_142a15690(void)

{
  if (DAT_146b284b0 == 0) {
    FUN_141786a30(&DAT_146b284b0,&PTR_FUN_146663b00);
  }
  return DAT_146b284b0;
}



// FUNCTION 142a156c0 FUN_142a156c0 body=47 status=ok
// SIG undefined FUN_142a156c0(void)

longlong FUN_142a156c0(void)

{
  if (DAT_146b284b8 == 0) {
    FUN_141786a30(&DAT_146b284b8,&PTR_FUN_146663c00);
  }
  return DAT_146b284b8;
}



// FUNCTION 142a156f0 FUN_142a156f0 body=47 status=ok
// SIG undefined FUN_142a156f0(void)

longlong FUN_142a156f0(void)

{
  if (DAT_146b284c0 == 0) {
    FUN_141786a30(&DAT_146b284c0,&PTR_FUN_146663d50);
  }
  return DAT_146b284c0;
}



// FUNCTION 142a15720 FUN_142a15720 body=47 status=ok
// SIG undefined FUN_142a15720(void)

longlong FUN_142a15720(void)

{
  if (DAT_146b284c8 == 0) {
    FUN_141786a30(&DAT_146b284c8,&PTR_FUN_146663e50);
  }
  return DAT_146b284c8;
}



// FUNCTION 142a15750 FUN_142a15750 body=47 status=ok
// SIG undefined FUN_142a15750(void)

longlong FUN_142a15750(void)

{
  if (DAT_146b284d0 == 0) {
    FUN_141786a30(&DAT_146b284d0,&PTR_FUN_146663f50);
  }
  return DAT_146b284d0;
}



// FUNCTION 142a15780 FUN_142a15780 body=47 status=ok
// SIG undefined FUN_142a15780(void)

longlong FUN_142a15780(void)

{
  if (DAT_146b284d8 == 0) {
    FUN_141786a30(&DAT_146b284d8,&PTR_FUN_146664010);
  }
  return DAT_146b284d8;
}



// FUNCTION 142a157b0 FUN_142a157b0 body=47 status=ok
// SIG undefined FUN_142a157b0(void)

longlong FUN_142a157b0(void)

{
  if (DAT_146b284e0 == 0) {
    FUN_141786a30(&DAT_146b284e0,&PTR_FUN_146664110);
  }
  return DAT_146b284e0;
}



// FUNCTION 142a157e0 FUN_142a157e0 body=47 status=ok
// SIG undefined FUN_142a157e0(void)

longlong FUN_142a157e0(void)

{
  if (DAT_146b284e8 == 0) {
    FUN_141786a30(&DAT_146b284e8,&PTR_FUN_146664210);
  }
  return DAT_146b284e8;
}



// FUNCTION 142a15810 FUN_142a15810 body=47 status=ok
// SIG undefined FUN_142a15810(void)

longlong FUN_142a15810(void)

{
  if (DAT_146b284f0 == 0) {
    FUN_141786a30(&DAT_146b284f0,&PTR_FUN_146664360);
  }
  return DAT_146b284f0;
}



// FUNCTION 142a15840 FUN_142a15840 body=47 status=ok
// SIG undefined FUN_142a15840(void)

longlong FUN_142a15840(void)

{
  if (DAT_146b284f8 == 0) {
    FUN_141786a30(&DAT_146b284f8,&PTR_FUN_146664410);
  }
  return DAT_146b284f8;
}



// FUNCTION 142a15870 FUN_142a15870 body=47 status=ok
// SIG undefined FUN_142a15870(void)

longlong FUN_142a15870(void)

{
  if (DAT_146b28500 == 0) {
    FUN_141786a30(&DAT_146b28500,&PTR_FUN_1466644c0);
  }
  return DAT_146b28500;
}



// FUNCTION 142a158a0 FUN_142a158a0 body=47 status=ok
// SIG undefined FUN_142a158a0(void)

longlong FUN_142a158a0(void)

{
  if (DAT_146b28508 == 0) {
    FUN_141786a30(&DAT_146b28508,&PTR_FUN_1466645c0);
  }
  return DAT_146b28508;
}



// FUNCTION 142a158d0 FUN_142a158d0 body=47 status=ok
// SIG undefined FUN_142a158d0(void)

longlong FUN_142a158d0(void)

{
  if (DAT_146b28510 == 0) {
    FUN_141786a30(&DAT_146b28510,&PTR_FUN_1466646c0);
  }
  return DAT_146b28510;
}



// FUNCTION 142a15900 FUN_142a15900 body=47 status=ok
// SIG undefined FUN_142a15900(void)

longlong FUN_142a15900(void)

{
  if (DAT_146b28518 == 0) {
    FUN_141786a30(&DAT_146b28518,&PTR_FUN_146664800);
  }
  return DAT_146b28518;
}



// FUNCTION 142a15930 FUN_142a15930 body=47 status=ok
// SIG undefined FUN_142a15930(void)

longlong FUN_142a15930(void)

{
  if (DAT_146b28520 == 0) {
    FUN_141786a30(&DAT_146b28520,&PTR_FUN_146664900);
  }
  return DAT_146b28520;
}



// FUNCTION 142a15960 FUN_142a15960 body=47 status=ok
// SIG undefined FUN_142a15960(void)

longlong FUN_142a15960(void)

{
  if (DAT_146b28528 == 0) {
    FUN_141786a30(&DAT_146b28528,&PTR_FUN_146664a00);
  }
  return DAT_146b28528;
}



// FUNCTION 142a15990 FUN_142a15990 body=47 status=ok
// SIG undefined FUN_142a15990(void)

longlong FUN_142a15990(void)

{
  if (DAT_146b28530 == 0) {
    FUN_141786a30(&DAT_146b28530,&PTR_FUN_146664b50);
  }
  return DAT_146b28530;
}



// FUNCTION 142a159c0 FUN_142a159c0 body=47 status=ok
// SIG undefined FUN_142a159c0(void)

longlong FUN_142a159c0(void)

{
  if (DAT_146b28538 == 0) {
    FUN_141786a30(&DAT_146b28538,&PTR_FUN_146664bd0);
  }
  return DAT_146b28538;
}



// FUNCTION 142a159f0 FUN_142a159f0 body=47 status=ok
// SIG undefined FUN_142a159f0(void)

longlong FUN_142a159f0(void)

{
  if (DAT_146b28540 == 0) {
    FUN_141786a30(&DAT_146b28540,&PTR_FUN_146664cd0);
  }
  return DAT_146b28540;
}



// FUNCTION 142a15a20 FUN_142a15a20 body=47 status=ok
// SIG undefined FUN_142a15a20(void)

longlong FUN_142a15a20(void)

{
  if (DAT_146b28548 == 0) {
    FUN_141786a30(&DAT_146b28548,&PTR_FUN_146664dd0);
  }
  return DAT_146b28548;
}



// FUNCTION 142a15a50 FUN_142a15a50 body=47 status=ok
// SIG undefined FUN_142a15a50(void)

longlong FUN_142a15a50(void)

{
  if (DAT_146b28550 == 0) {
    FUN_141786a30(&DAT_146b28550,&PTR_FUN_146664f20);
  }
  return DAT_146b28550;
}



// FUNCTION 142a15a80 FUN_142a15a80 body=47 status=ok
// SIG undefined FUN_142a15a80(void)

longlong FUN_142a15a80(void)

{
  if (DAT_146b28558 == 0) {
    FUN_141786a30(&DAT_146b28558,&PTR_FUN_146665020);
  }
  return DAT_146b28558;
}



// FUNCTION 142a15ab0 FUN_142a15ab0 body=47 status=ok
// SIG undefined FUN_142a15ab0(void)

longlong FUN_142a15ab0(void)

{
  if (DAT_146b28560 == 0) {
    FUN_141786a30(&DAT_146b28560,&PTR_FUN_146665120);
  }
  return DAT_146b28560;
}



// FUNCTION 142a15ae0 FUN_142a15ae0 body=47 status=ok
// SIG undefined FUN_142a15ae0(void)

longlong FUN_142a15ae0(void)

{
  if (DAT_146b28568 == 0) {
    FUN_141786a30(&DAT_146b28568,&PTR_FUN_146665270);
  }
  return DAT_146b28568;
}



// FUNCTION 142a15b10 FUN_142a15b10 body=47 status=ok
// SIG undefined FUN_142a15b10(void)

longlong FUN_142a15b10(void)

{
  if (DAT_146b28570 == 0) {
    FUN_141786a30(&DAT_146b28570,&PTR_FUN_146665370);
  }
  return DAT_146b28570;
}



// FUNCTION 142a15b40 FUN_142a15b40 body=47 status=ok
// SIG undefined FUN_142a15b40(void)

longlong FUN_142a15b40(void)

{
  if (DAT_146b28578 == 0) {
    FUN_141786a30(&DAT_146b28578,&PTR_FUN_146665470);
  }
  return DAT_146b28578;
}



// FUNCTION 142a15b70 FUN_142a15b70 body=47 status=ok
// SIG undefined FUN_142a15b70(void)

longlong FUN_142a15b70(void)

{
  if (DAT_146b28580 == 0) {
    FUN_141786a30(&DAT_146b28580,&PTR_FUN_1466655c0);
  }
  return DAT_146b28580;
}



// FUNCTION 142a15ba0 FUN_142a15ba0 body=47 status=ok
// SIG undefined FUN_142a15ba0(void)

longlong FUN_142a15ba0(void)

{
  if (DAT_146b28588 == 0) {
    FUN_141786a30(&DAT_146b28588,&PTR_FUN_146665680);
  }
  return DAT_146b28588;
}



// FUNCTION 142a15bd0 FUN_142a15bd0 body=47 status=ok
// SIG undefined FUN_142a15bd0(void)

longlong FUN_142a15bd0(void)

{
  if (DAT_146b28590 == 0) {
    FUN_141786a30(&DAT_146b28590,&PTR_FUN_146665740);
  }
  return DAT_146b28590;
}



// FUNCTION 142a15c00 FUN_142a15c00 body=47 status=ok
// SIG undefined FUN_142a15c00(void)

longlong FUN_142a15c00(void)

{
  if (DAT_146b28598 == 0) {
    FUN_141786a30(&DAT_146b28598,&PTR_FUN_146665840);
  }
  return DAT_146b28598;
}



// FUNCTION 142a15c30 FUN_142a15c30 body=47 status=ok
// SIG undefined FUN_142a15c30(void)

longlong FUN_142a15c30(void)

{
  if (DAT_146b285a0 == 0) {
    FUN_141786a30(&DAT_146b285a0,&PTR_FUN_1466658c0);
  }
  return DAT_146b285a0;
}



// FUNCTION 142a15c60 FUN_142a15c60 body=47 status=ok
// SIG undefined FUN_142a15c60(void)

longlong FUN_142a15c60(void)

{
  if (DAT_146b285a8 == 0) {
    FUN_141786a30(&DAT_146b285a8,&PTR_FUN_146665980);
  }
  return DAT_146b285a8;
}



// FUNCTION 142a15c90 FUN_142a15c90 body=47 status=ok
// SIG undefined FUN_142a15c90(void)

longlong FUN_142a15c90(void)

{
  if (DAT_146b285b0 == 0) {
    FUN_141786a30(&DAT_146b285b0,&PTR_FUN_146665a80);
  }
  return DAT_146b285b0;
}



// FUNCTION 142a15cc0 FUN_142a15cc0 body=47 status=ok
// SIG undefined FUN_142a15cc0(void)

longlong FUN_142a15cc0(void)

{
  if (DAT_146b285b8 == 0) {
    FUN_141786a30(&DAT_146b285b8,&PTR_FUN_146665b80);
  }
  return DAT_146b285b8;
}



// FUNCTION 142a15cf0 FUN_142a15cf0 body=47 status=ok
// SIG undefined FUN_142a15cf0(void)

longlong FUN_142a15cf0(void)

{
  if (DAT_146b285c0 == 0) {
    FUN_141786a30(&DAT_146b285c0,&PTR_FUN_146665cd0);
  }
  return DAT_146b285c0;
}



// FUNCTION 142a15d20 FUN_142a15d20 body=47 status=ok
// SIG undefined FUN_142a15d20(void)

longlong FUN_142a15d20(void)

{
  if (DAT_146b285c8 == 0) {
    FUN_141786a30(&DAT_146b285c8,&PTR_FUN_146665e20);
  }
  return DAT_146b285c8;
}



// FUNCTION 142a15d50 FUN_142a15d50 body=47 status=ok
// SIG undefined FUN_142a15d50(void)

longlong FUN_142a15d50(void)

{
  if (DAT_146b285d0 == 0) {
    FUN_141786a30(&DAT_146b285d0,&PTR_FUN_146665f70);
  }
  return DAT_146b285d0;
}



// FUNCTION 142a15d80 FUN_142a15d80 body=47 status=ok
// SIG undefined FUN_142a15d80(void)

longlong FUN_142a15d80(void)

{
  if (DAT_146b285d8 == 0) {
    FUN_141786a30(&DAT_146b285d8,&PTR_FUN_146666110);
  }
  return DAT_146b285d8;
}



// FUNCTION 142a15db0 FUN_142a15db0 body=47 status=ok
// SIG undefined FUN_142a15db0(void)

longlong FUN_142a15db0(void)

{
  if (DAT_146b285e0 == 0) {
    FUN_141786a30(&DAT_146b285e0,&PTR_FUN_146666210);
  }
  return DAT_146b285e0;
}



// FUNCTION 142a15de0 FUN_142a15de0 body=47 status=ok
// SIG undefined FUN_142a15de0(void)

longlong FUN_142a15de0(void)

{
  if (DAT_146b285e8 == 0) {
    FUN_141786a30(&DAT_146b285e8,&PTR_FUN_146666310);
  }
  return DAT_146b285e8;
}



// FUNCTION 142a15e10 FUN_142a15e10 body=47 status=ok
// SIG undefined FUN_142a15e10(void)

longlong FUN_142a15e10(void)

{
  if (DAT_146b285f0 == 0) {
    FUN_141786a30(&DAT_146b285f0,&PTR_FUN_146666460);
  }
  return DAT_146b285f0;
}



// FUNCTION 142a15e40 FUN_142a15e40 body=47 status=ok
// SIG undefined FUN_142a15e40(void)

longlong FUN_142a15e40(void)

{
  if (DAT_146b285f8 == 0) {
    FUN_141786a30(&DAT_146b285f8,&PTR_FUN_146666520);
  }
  return DAT_146b285f8;
}



// FUNCTION 142a15e70 FUN_142a15e70 body=47 status=ok
// SIG undefined FUN_142a15e70(void)

longlong FUN_142a15e70(void)

{
  if (DAT_146b28600 == 0) {
    FUN_141786a30(&DAT_146b28600,&PTR_FUN_146666620);
  }
  return DAT_146b28600;
}



// FUNCTION 142a15ea0 FUN_142a15ea0 body=47 status=ok
// SIG undefined FUN_142a15ea0(void)

longlong FUN_142a15ea0(void)

{
  if (DAT_146b28608 == 0) {
    FUN_141786a30(&DAT_146b28608,&PTR_FUN_1466666e0);
  }
  return DAT_146b28608;
}



// FUNCTION 142a15ed0 FUN_142a15ed0 body=47 status=ok
// SIG undefined FUN_142a15ed0(void)

longlong FUN_142a15ed0(void)

{
  if (DAT_146b28610 == 0) {
    FUN_141786a30(&DAT_146b28610,&PTR_FUN_1466667a0);
  }
  return DAT_146b28610;
}



// FUNCTION 142a15f00 FUN_142a15f00 body=47 status=ok
// SIG undefined FUN_142a15f00(void)

longlong FUN_142a15f00(void)

{
  if (DAT_146b28618 == 0) {
    FUN_141786a30(&DAT_146b28618,&PTR_FUN_1466668a0);
  }
  return DAT_146b28618;
}



// FUNCTION 142a15f30 FUN_142a15f30 body=47 status=ok
// SIG undefined FUN_142a15f30(void)

longlong FUN_142a15f30(void)

{
  if (DAT_146b28620 == 0) {
    FUN_141786a30(&DAT_146b28620,&PTR_FUN_146666960);
  }
  return DAT_146b28620;
}



// FUNCTION 142a15f60 FUN_142a15f60 body=47 status=ok
// SIG undefined FUN_142a15f60(void)

longlong FUN_142a15f60(void)

{
  if (DAT_146b28628 == 0) {
    FUN_141786a30(&DAT_146b28628,&PTR_FUN_146666a60);
  }
  return DAT_146b28628;
}



// FUNCTION 142a15f90 FUN_142a15f90 body=47 status=ok
// SIG undefined FUN_142a15f90(void)

longlong FUN_142a15f90(void)

{
  if (DAT_146b28630 == 0) {
    FUN_141786a30(&DAT_146b28630,&PTR_FUN_146666b20);
  }
  return DAT_146b28630;
}



// FUNCTION 142a15fc0 FUN_142a15fc0 body=47 status=ok
// SIG undefined FUN_142a15fc0(void)

longlong FUN_142a15fc0(void)

{
  if (DAT_146b28638 == 0) {
    FUN_141786a30(&DAT_146b28638,&PTR_FUN_146666bb0);
  }
  return DAT_146b28638;
}



// FUNCTION 142a15ff0 FUN_142a15ff0 body=47 status=ok
// SIG undefined FUN_142a15ff0(void)

longlong FUN_142a15ff0(void)

{
  if (DAT_146b28640 == 0) {
    FUN_141786a30(&DAT_146b28640,&PTR_FUN_146666c70);
  }
  return DAT_146b28640;
}



// FUNCTION 142a16020 FUN_142a16020 body=47 status=ok
// SIG undefined FUN_142a16020(void)

longlong FUN_142a16020(void)

{
  if (DAT_146b28648 == 0) {
    FUN_141786a30(&DAT_146b28648,&PTR_FUN_146666d50);
  }
  return DAT_146b28648;
}



// FUNCTION 142a16050 FUN_142a16050 body=47 status=ok
// SIG undefined FUN_142a16050(void)

longlong FUN_142a16050(void)

{
  if (DAT_146b28650 == 0) {
    FUN_141786a30(&DAT_146b28650,&PTR_FUN_146666e60);
  }
  return DAT_146b28650;
}



// FUNCTION 142a16080 FUN_142a16080 body=47 status=ok
// SIG undefined FUN_142a16080(void)

longlong FUN_142a16080(void)

{
  if (DAT_146b28658 == 0) {
    FUN_141786a30(&DAT_146b28658,&PTR_FUN_146666f20);
  }
  return DAT_146b28658;
}



// FUNCTION 142a160b0 FUN_142a160b0 body=47 status=ok
// SIG undefined FUN_142a160b0(void)

longlong FUN_142a160b0(void)

{
  if (DAT_146b28660 == 0) {
    FUN_141786a30(&DAT_146b28660,&PTR_FUN_146666fb0);
  }
  return DAT_146b28660;
}



// FUNCTION 142a160e0 FUN_142a160e0 body=47 status=ok
// SIG undefined FUN_142a160e0(void)

longlong FUN_142a160e0(void)

{
  if (DAT_146b28668 == 0) {
    FUN_141786a30(&DAT_146b28668,&PTR_FUN_146667100);
  }
  return DAT_146b28668;
}



// FUNCTION 142a16110 FUN_142a16110 body=47 status=ok
// SIG undefined FUN_142a16110(void)

longlong FUN_142a16110(void)

{
  if (DAT_146b28670 == 0) {
    FUN_141786a30(&DAT_146b28670,&PTR_FUN_146667180);
  }
  return DAT_146b28670;
}



// FUNCTION 142a16140 FUN_142a16140 body=47 status=ok
// SIG undefined FUN_142a16140(void)

longlong FUN_142a16140(void)

{
  if (DAT_146b28678 == 0) {
    FUN_141786a30(&DAT_146b28678,&PTR_FUN_146667240);
  }
  return DAT_146b28678;
}



// FUNCTION 142a16170 FUN_142a16170 body=47 status=ok
// SIG undefined FUN_142a16170(void)

longlong FUN_142a16170(void)

{
  if (DAT_146b28680 == 0) {
    FUN_141786a30(&DAT_146b28680,&PTR_FUN_146667390);
  }
  return DAT_146b28680;
}



// FUNCTION 142a161a0 FUN_142a161a0 body=47 status=ok
// SIG undefined FUN_142a161a0(void)

longlong FUN_142a161a0(void)

{
  if (DAT_146b28688 == 0) {
    FUN_141786a30(&DAT_146b28688,&PTR_FUN_1466674a0);
  }
  return DAT_146b28688;
}



// FUNCTION 142a161d0 FUN_142a161d0 body=47 status=ok
// SIG undefined FUN_142a161d0(void)

longlong FUN_142a161d0(void)

{
  if (DAT_146b28690 == 0) {
    FUN_141786a30(&DAT_146b28690,&PTR_FUN_146667560);
  }
  return DAT_146b28690;
}



// FUNCTION 142a16200 FUN_142a16200 body=47 status=ok
// SIG undefined FUN_142a16200(void)

longlong FUN_142a16200(void)

{
  if (DAT_146b28698 == 0) {
    FUN_141786a30(&DAT_146b28698,&PTR_FUN_1466676b0);
  }
  return DAT_146b28698;
}



// FUNCTION 142a16230 FUN_142a16230 body=47 status=ok
// SIG undefined FUN_142a16230(void)

longlong FUN_142a16230(void)

{
  if (DAT_146b286a0 == 0) {
    FUN_141786a30(&DAT_146b286a0,&PTR_FUN_146667840);
  }
  return DAT_146b286a0;
}



// FUNCTION 142a16260 FUN_142a16260 body=47 status=ok
// SIG undefined FUN_142a16260(void)

longlong FUN_142a16260(void)

{
  if (DAT_146b286a8 == 0) {
    FUN_141786a30(&DAT_146b286a8,&PTR_FUN_1466678c0);
  }
  return DAT_146b286a8;
}



// FUNCTION 142a16290 FUN_142a16290 body=47 status=ok
// SIG undefined FUN_142a16290(void)

longlong FUN_142a16290(void)

{
  if (DAT_146b286b0 == 0) {
    FUN_141786a30(&DAT_146b286b0,&PTR_FUN_146667a10);
  }
  return DAT_146b286b0;
}



// FUNCTION 142a162c0 FUN_142a162c0 body=47 status=ok
// SIG undefined FUN_142a162c0(void)

longlong FUN_142a162c0(void)

{
  if (DAT_146b286b8 == 0) {
    FUN_141786a30(&DAT_146b286b8,&PTR_FUN_146667ad0);
  }
  return DAT_146b286b8;
}



// FUNCTION 142a162f0 FUN_142a162f0 body=47 status=ok
// SIG undefined FUN_142a162f0(void)

longlong FUN_142a162f0(void)

{
  if (DAT_146b286c0 == 0) {
    FUN_141786a30(&DAT_146b286c0,&PTR_FUN_146667b10);
  }
  return DAT_146b286c0;
}



// FUNCTION 142a16330 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong USoundNodeWaveParam::StaticClass(void)

{
  if (DAT_146b282b0 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"SoundNodeWaveParam",&DAT_146b282b0,FUN_140447710,0x40,
                  0x10000000,0,L"Engine",&LAB_142a16960,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USoundNode::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b282b0;
}



// FUNCTION 142a163e0 FUN_142a163e0 body=53 status=ok
// SIG undefined FUN_142a163e0(void)

void FUN_142a163e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_145344d50;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142a16430 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong USoundNodeWavePlayer::GetPrivateStaticClass(void)

{
  if (DAT_146b282c0 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"SoundNodeWavePlayer",&DAT_146b282c0,FUN_140447710,0x70,
                  0x10000000,0,L"Engine",InternalConstructor<USoundNodeWavePlayer>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USoundNodeAssetReferencer::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b282c0;
}



// FUNCTION 142a164e0 FUN_142a164e0 body=53 status=ok
// SIG undefined FUN_142a164e0(void)

void FUN_142a164e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x44;
    *puVar1 = &PTR_FUN_145344e68;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142a16530 FUN_142a16530 body=53 status=ok
// SIG undefined FUN_142a16530(void)

void FUN_142a16530(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &PTR_FUN_145344f80;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142a16570 FUN_142a16570 body=47 status=ok
// SIG undefined FUN_142a16570(void)

longlong FUN_142a16570(void)

{
  if (DAT_146b28350 == 0) {
    FUN_141786440(&DAT_146b28350,&PTR_GetPrivateStaticClass_14533c4f0);
  }
  return DAT_146b28350;
}



// FUNCTION 142a165b0 FUN_142a165b0 body=47 status=ok
// SIG undefined FUN_142a165b0(void)

longlong FUN_142a165b0(void)

{
  if (DAT_146b28328 == 0) {
    FUN_141786440(&DAT_146b28328,&PTR_FUN_14533bcd0);
  }
  return DAT_146b28328;
}



// FUNCTION 142a165e0 FUN_142a165e0 body=47 status=ok
// SIG undefined FUN_142a165e0(void)

longlong FUN_142a165e0(void)

{
  if (DAT_146b28318 == 0) {
    FUN_141786a30(&DAT_146b28318,&PTR_FUN_146661600);
  }
  return DAT_146b28318;
}



// FUNCTION 142a16610 FUN_142a16610 body=47 status=ok
// SIG undefined FUN_142a16610(void)

longlong FUN_142a16610(void)

{
  if (DAT_146b28320 == 0) {
    FUN_141786a30(&DAT_146b28320,&PTR_FUN_1466617b0);
  }
  return DAT_146b28320;
}



// FUNCTION 142a166a0 FUN_142a166a0 body=41 status=ok
// SIG undefined FUN_142a166a0(void)

void FUN_142a166a0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    USoundNode::USoundNode(puVar1,param_1);
    *puVar1 = &PTR_FUN_145343970;
  }
  return;
}



// FUNCTION 142a168d0 FUN_142a168d0 body=41 status=ok
// SIG undefined FUN_142a168d0(void)

void FUN_142a168d0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    USoundNode::USoundNode(puVar1,param_1);
    *puVar1 = &PTR_FUN_1453441f8;
  }
  return;
}



// FUNCTION 142a16980 InternalConstructor<USoundNodeWavePlayer> body=127 status=ok
// SIG undefined InternalConstructor<USoundNodeWavePlayer>(void)

void InternalConstructor<USoundNodeWavePlayer>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    USoundNode::USoundNode(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__1453444e8;
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



// FUNCTION 142a16a00 FUN_142a16a00 body=41 status=ok
// SIG undefined FUN_142a16a00(void)

void FUN_142a16a00(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    USoundWave::USoundWave(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__145343d68;
  }
  return;
}



// FUNCTION 142a16be0 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong USoundNodeWavePlayer::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 142a16c40 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessDiaphragmDOFGatherCS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  USoundWave::~USoundWave();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x218);
  }
  return param_1;
}



// FUNCTION 142a16c80 ClearAssetReferences body=83 status=ok
// SIG undefined ClearAssetReferences(void)

void USoundNodeAssetReferencer::ClearAssetReferences(void)

{
  LowLevelFatalErrorHandler
            ("Runtime\\Engine/Classes/Sound/SoundNodeAssetReferencer.h",0x15,
             L"Pure virtual not implemented (%s)",
             L"USoundNodesAssetReferencer::ClearAssetReferences");
  FDebug::AssertFailed
            (&DAT_143f3f584,"Runtime\\Engine/Classes/Sound/SoundNodeAssetReferencer.h",0x15,
             L"Pure virtual not implemented (%s)",
             L"USoundNodesAssetReferencer::ClearAssetReferences");
  return;
}



// FUNCTION 142a16d90 FUN_142a16d90 body=60 status=ok
// SIG undefined FUN_142a16d90(void)

void FUN_142a16d90(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x60);
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined1 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined1 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined1 *)((longlong)param_2 + 0x58) = 0;
  return;
}



// FUNCTION 142a16ff0 Copy body=463 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FSplineCurves>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_4 != 0) {
    puVar7 = (undefined4 *)(param_3 + 0x2c);
    do {
      FInterpCurveVector::operator=(param_2,puVar7 + -0xb);
      plVar1 = (longlong *)(param_2 + 0x18);
      if (plVar1 != (longlong *)(puVar7 + -5)) {
        iVar6 = puVar7[-3];
        lVar2 = *(longlong *)(puVar7 + -5);
        *(int *)(param_2 + 0x20) = iVar6;
        if ((iVar6 == 0) && (*(int *)(param_2 + 0x24) == 0)) {
          *(undefined4 *)(param_2 + 0x24) = 0;
        }
        else {
          TArray<FDungeonMarkerInfo,FDefaultAllocator>::ResizeForCopy(plVar1,iVar6);
          puVar4 = (undefined4 *)*plVar1;
          if (iVar6 != 0) {
            puVar3 = (undefined4 *)(lVar2 + 0x18);
            puVar5 = puVar4 + 6;
            do {
              *puVar4 = puVar3[-6];
              puVar4 = puVar4 + 0x14;
              puVar5[-2] = puVar3[-2];
              puVar5[-1] = puVar3[-1];
              *puVar5 = *puVar3;
              puVar5[1] = puVar3[1];
              puVar5[2] = puVar3[2];
              puVar5[3] = puVar3[3];
              puVar5[4] = puVar3[4];
              puVar5[5] = puVar3[5];
              puVar5[6] = puVar3[6];
              puVar5[7] = puVar3[7];
              puVar5[8] = puVar3[8];
              puVar5[9] = puVar3[9];
              *(undefined1 *)(puVar5 + 10) = *(undefined1 *)(puVar3 + 10);
              iVar6 = iVar6 + -1;
              puVar3 = puVar3 + 0x14;
              puVar5 = puVar5 + 0x14;
            } while (iVar6 != 0);
          }
        }
      }
      *(undefined1 *)(param_2 + 0x28) = *(undefined1 *)(puVar7 + -1);
      *(undefined4 *)(param_2 + 0x2c) = *puVar7;
      FInterpCurveVector::operator=(param_2 + 0x30,puVar7 + 1);
      plVar1 = (longlong *)(param_2 + 0x48);
      if (plVar1 != (longlong *)(puVar7 + 7)) {
        iVar6 = puVar7[9];
        lVar2 = *(longlong *)(puVar7 + 7);
        *(int *)(param_2 + 0x50) = iVar6;
        if ((iVar6 == 0) && (*(int *)(param_2 + 0x54) == 0)) {
          *(undefined4 *)(param_2 + 0x54) = 0;
        }
        else {
          FUN_1405d62d0(plVar1,iVar6);
          if (iVar6 != 0) {
            puVar4 = (undefined4 *)(lVar2 + 8);
            puVar3 = (undefined4 *)*plVar1;
            do {
              *puVar3 = puVar4[-2];
              puVar3[1] = puVar4[-1];
              puVar3[2] = *puVar4;
              puVar3[3] = puVar4[1];
              *(undefined1 *)(puVar3 + 4) = *(undefined1 *)(puVar4 + 2);
              iVar6 = iVar6 + -1;
              puVar4 = puVar4 + 5;
              puVar3 = puVar3 + 5;
            } while (iVar6 != 0);
          }
        }
      }
      *(undefined1 *)(param_2 + 0x58) = *(undefined1 *)(puVar7 + 0xb);
      puVar4 = puVar7 + 0xc;
      puVar7 = puVar7 + 0x18;
      *(undefined4 *)(param_2 + 0x5c) = *puVar4;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x60;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142a17250 Copy body=416 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FStreamedAudioPlatformData>::Copy
          (undefined8 param_1,undefined4 *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  
  if (param_4 != 0) {
    plVar9 = (longlong *)(param_3 + 0x10);
    do {
      uVar6 = 0;
      *param_2 = (int)plVar9[-2];
      *(longlong *)(param_2 + 2) = plVar9[-1];
      plVar8 = (longlong *)(param_2 + 4);
      if (plVar9 != plVar8) {
        lVar3 = plVar9[1];
        plVar1 = (longlong *)*plVar8;
        for (iVar7 = param_2[6]; iVar7 != 0; iVar7 = iVar7 + -1) {
          FUntypedBulkData::~FUntypedBulkData(*plVar1 + 8);
          FMemory::Free(*plVar1);
          plVar1 = plVar1 + 1;
        }
        param_2[6] = 0;
        if (param_2[7] != (int)lVar3) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(plVar8,(int)lVar3);
        }
        puVar5 = (undefined8 *)*plVar9;
        uVar10 = (longlong)(int)plVar9[1] & 0x1fffffffffffffff;
        if (puVar5 + (int)plVar9[1] < puVar5) {
          uVar10 = uVar6;
        }
        if (uVar10 != 0) {
          do {
            puVar2 = (undefined4 *)*puVar5;
            puVar4 = (undefined4 *)operator_new(0x78);
            puVar11 = (undefined4 *)0x0;
            if (puVar4 != (undefined4 *)0x0) {
              *puVar4 = *puVar2;
              puVar4[1] = puVar2[1];
              FUntypedBulkData::FUntypedBulkData(puVar4 + 2,puVar2 + 2);
              *(undefined ***)(puVar4 + 2) = &PTR__scalar_deleting_destructor__143f48b90;
              puVar11 = puVar4;
            }
            iVar7 = param_2[6];
            param_2[6] = iVar7 + 1;
            if ((int)param_2[7] < iVar7 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar8,iVar7);
            }
            puVar5 = puVar5 + 1;
            uVar6 = uVar6 + 1;
            *(undefined4 **)(*plVar8 + (longlong)iVar7 * 8) = puVar11;
          } while (uVar6 != uVar10);
        }
      }
      plVar9 = plVar9 + 4;
      param_4 = param_4 + -1;
      param_2 = param_2 + 8;
    } while (param_4 != 0);
  }
  return 1;
}


