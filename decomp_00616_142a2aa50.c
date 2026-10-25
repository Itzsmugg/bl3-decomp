// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142a2aa50 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UVOIPStatics::GetPrivateStaticClass(void)

{
  if (DAT_146b295a0 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"VOIPStatics",&DAT_146b295a0,StaticRegisterNativesUVOIPStatics,
                  0x28,0x10000000,0,L"Engine",FUN_1405d87d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_146b295a0;
}



// FUNCTION 142a2ab00 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UTouchInterface::GetPrivateStaticClass(void)

{
  if (DAT_146b29350 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"TouchInterface",&DAT_146b29350,FUN_140447710,0x58,0x10000000,0
                  ,L"Engine",&LAB_142a2ad80,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b29350;
}



// FUNCTION 142a2aba0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UVoiceChannel::GetPrivateStaticClass(void)

{
  if (DAT_146b29540 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"VoiceChannel",&DAT_146b29540,FUN_140447710,0x78,0x10000008,0,
                  L"Engine",InternalConstructor<UVoiceChannel>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UChannel::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b29540;
}



// FUNCTION 142a2aec0 InternalConstructor<UVoiceChannel> body=58 status=ok
// SIG undefined InternalConstructor<UVoiceChannel>(void)

void InternalConstructor<UVoiceChannel>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UChannel::UChannel(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__1453591b0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x44) = 4;
  }
  return;
}



// FUNCTION 142a2af00 FUN_142a2af00 body=142 status=ok
// SIG undefined FUN_142a2af00(void)

void FUN_142a2af00(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x60);
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
  plVar4 = *(longlong **)(param_1 + 0x48);
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



// FUNCTION 142a2af90 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FLevelSequenceSpawnRegister::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x68);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 142a2afd0 FUN_142a2afd0 body=61 status=ok
// SIG undefined FUN_142a2afd0(void)

void FUN_142a2afd0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_146b29228);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 142a2b010 FUN_142a2b010 body=57 status=ok
// SIG undefined FUN_142a2b010(void)

void FUN_142a2b010(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146b29250);
                    /* WARNING: Could not recover jumptable at 0x000142a2b046. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 142a2b0e0 Copy body=229 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FTimeStretchCurve>::Copy
          (undefined8 param_1,undefined4 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  
  if (param_4 != 0) {
    puVar3 = (undefined8 *)(param_3 + 8);
    do {
      puVar1 = (undefined8 *)(param_2 + 2);
      *param_2 = *(undefined4 *)(puVar3 + -1);
      param_2[1] = *(undefined4 *)((longlong)puVar3 + -4);
      if (puVar1 != puVar3) {
        iVar2 = *(int *)(puVar3 + 1);
        _Src = (void *)*puVar3;
        param_2[4] = iVar2;
        if ((iVar2 == 0) && (param_2[5] == 0)) {
          param_2[5] = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
          ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 << 4);
        }
      }
      param_2[6] = *(undefined4 *)(puVar3 + 2);
      param_2[7] = *(undefined4 *)((longlong)puVar3 + 0x14);
      puVar1 = puVar3 + 3;
      puVar3 = puVar3 + 5;
      param_2[8] = *(undefined4 *)puVar1;
      param_4 = param_4 + -1;
      param_2 = param_2 + 10;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142a2b1d0 Copy body=127 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FTimeStretchCurveInstance>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined4 *)(param_2 + 8);
    do {
      *(undefined1 *)(puVar1 + -2) = *(undefined1 *)(param_3 + -8 + (longlong)puVar1);
      puVar1[-1] = *(undefined4 *)(param_3 + -4 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)(param_3 + (longlong)puVar1);
      TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=
                (puVar1 + 2,param_3 + 8 + (longlong)puVar1);
      TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=
                (puVar1 + 6,param_3 + 0x18 + (longlong)puVar1);
      puVar1 = puVar1 + 0xc;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142a2b250 Copy body=178 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FTouchInputControl>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined8 *)(param_2 + 0x10);
    do {
      puVar1[-2] = *(undefined8 *)(param_3 + -0x10 + (longlong)puVar1);
      puVar1[-1] = *(undefined8 *)(param_3 + -8 + (longlong)puVar1);
      *puVar1 = *(undefined8 *)(param_3 + (longlong)puVar1);
      puVar1[1] = *(undefined8 *)(param_3 + 8 + (longlong)puVar1);
      puVar1[2] = *(undefined8 *)(param_3 + 0x10 + (longlong)puVar1);
      puVar1[3] = *(undefined8 *)(param_3 + 0x18 + (longlong)puVar1);
      puVar1[4] = *(undefined8 *)(param_3 + 0x20 + (longlong)puVar1);
      FKey::operator=(puVar1 + 5,param_3 + 0x28 + (longlong)puVar1);
      FKey::operator=(puVar1 + 8,param_3 + 0x40 + (longlong)puVar1);
      puVar1 = puVar1 + 0xd;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142a2b310 Describe body=432 status=ok
// SIG undefined Describe(void)

longlong * UVoiceChannel::Describe(undefined8 param_1,longlong *param_2)

{
  void *_Dst;
  void *_Src;
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong local_58;
  int local_50;
  int local_4c;
  longlong local_48;
  undefined8 local_40;
  longlong local_38 [2];
  
  local_48 = 0;
  local_40 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  lVar6 = local_48;
  FGenericPlatformString::Memcpy(local_48,L"VoIP: ",0xe);
  plVar2 = (longlong *)UChannel::Describe(param_1,local_38);
  if ((int)local_40 < 2) {
    *param_2 = 0;
    *param_2 = *plVar2;
    *plVar2 = 0;
    *(int *)(param_2 + 1) = (int)plVar2[1];
    *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar2 + 0xc);
    plVar2[1] = 0;
    if (lVar6 != 0) {
      FMemory::Free(lVar6);
    }
  }
  else {
    iVar7 = (int)plVar2[1] + -1;
    if ((int)plVar2[1] == 0) {
      iVar7 = 0;
    }
    if (((int)local_40 != 0) || (iVar1 = 1, iVar7 == 0)) {
      iVar1 = 0;
    }
    local_58 = lVar6;
    local_50 = (int)local_40;
    local_4c = local_40._4_4_;
    if (local_40._4_4_ < iVar7 + iVar1 + (int)local_40) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58);
    }
    iVar1 = local_50;
    _Src = (void *)*plVar2;
    lVar6 = local_58;
    iVar4 = local_50;
    iVar5 = local_4c;
    if (iVar7 != 0) {
      lVar3 = (longlong)local_50;
      local_50 = iVar7 + (uint)(local_50 == 0) + local_50;
      if (local_4c < local_50) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar1);
      }
      iVar5 = local_4c;
      iVar4 = local_50;
      lVar6 = local_58;
      _Dst = (void *)(local_58 + (lVar3 - (ulonglong)(iVar1 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar7 * 2);
      *(undefined2 *)((longlong)iVar7 * 2 + (longlong)_Dst) = 0;
    }
    *param_2 = lVar6;
    *(int *)((longlong)param_2 + 0xc) = iVar5;
    *(int *)(param_2 + 1) = iVar4;
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142a2b4d0 ERenderFocusRule_StaticEnum body=55 status=ok
// SIG undefined ERenderFocusRule_StaticEnum(void)

void ERenderFocusRule_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b291d0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b291d0 = GetStaticEnum(FUN_142a2c520,uVar1,L"ERenderFocusRule");
  }
  return;
}



// FUNCTION 142a2b510 ETimeStretchCurveMapping_StaticEnum body=55 status=ok
// SIG undefined ETimeStretchCurveMapping_StaticEnum(void)

void ETimeStretchCurveMapping_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b291e0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b291e0 = GetStaticEnum(FUN_142a2c550,uVar1,L"ETimeStretchCurveMapping");
  }
  return;
}



// FUNCTION 142a2b550 ETwitterIntegrationDelegate_StaticEnum body=55 status=ok
// SIG undefined ETwitterIntegrationDelegate_StaticEnum(void)

void ETwitterIntegrationDelegate_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b291b8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b291b8 = GetStaticEnum(FUN_142a2c580,uVar1,L"ETwitterIntegrationDelegate");
  }
  return;
}



// FUNCTION 142a2b590 ETwitterRequestMethod_StaticEnum body=55 status=ok
// SIG undefined ETwitterRequestMethod_StaticEnum(void)

void ETwitterRequestMethod_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b291c0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b291c0 = GetStaticEnum(FUN_142a2c5b0,uVar1,L"ETwitterRequestMethod");
  }
  return;
}



// FUNCTION 142a2b5d0 EUIScalingRule_StaticEnum body=55 status=ok
// SIG undefined EUIScalingRule_StaticEnum(void)

void EUIScalingRule_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b291c8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b291c8 = GetStaticEnum(FUN_142a2c5e0,uVar1,L"EUIScalingRule");
  }
  return;
}



// FUNCTION 142a2b610 EUserDefinedStructureStatus_StaticEnum body=55 status=ok
// SIG undefined EUserDefinedStructureStatus_StaticEnum(void)

void EUserDefinedStructureStatus_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b291b0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b291b0 = GetStaticEnum(FUN_142a2c610,uVar1,L"EUserDefinedStructureStatus");
  }
  return;
}



// FUNCTION 142a2b650 EVectorFieldConstructionOp_StaticEnum body=55 status=ok
// SIG undefined EVectorFieldConstructionOp_StaticEnum(void)

void EVectorFieldConstructionOp_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b291d8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b291d8 = GetStaticEnum(FUN_142a2c640,uVar1,L"EVectorFieldConstructionOp");
  }
  return;
}



// FUNCTION 142a2b690 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UParticleModuleTypeDataGpu::GetPrivateStaticClass(void)

{
  if (DAT_146b29390 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"TriggerBox",&DAT_146b29390,FUN_140447710,0x460,0x10000000,0,
                  L"Engine",&LAB_142a2ac80,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,FUN_142a29ad0
                  ,&LAB_140447700,0);
  }
  return DAT_146b29390;
}



// FUNCTION 142a2b740 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UParticleModuleTypeDataGpu::GetPrivateStaticClass(void)

{
  if (DAT_146b293a0 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"TriggerCapsule",&DAT_146b293a0,FUN_140447710,0x460,0x10000000,
                  0,L"Engine",&LAB_142a2aca0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,FUN_142a29ad0
                  ,&LAB_140447700,0);
  }
  return DAT_146b293a0;
}



// FUNCTION 142a2b7f0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UParticleModuleTypeDataGpu::GetPrivateStaticClass(void)

{
  if (DAT_146b293b0 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"TriggerSphere",&DAT_146b293b0,FUN_140447710,0x460,0x10000000,0
                  ,L"Engine",&LAB_142a2acc0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,FUN_142a29ad0
                  ,&LAB_140447700,0);
  }
  return DAT_146b293b0;
}



// FUNCTION 142a2b8a0 FUN_142a2b8a0 body=162 status=ok
// SIG undefined FUN_142a2b8a0(void)

longlong FUN_142a2b8a0(void)

{
  if (DAT_146b293c0 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"TriggerVolume",&DAT_146b293c0,FUN_140447710,0x490,0x10000000,0
                  ,L"Engine",&LAB_142a2ace0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_1407fbfa0,&LAB_140447700,0);
  }
  return DAT_146b293c0;
}



// FUNCTION 142a2b950 FUN_142a2b950 body=162 status=ok
// SIG undefined FUN_142a2b950(void)

longlong FUN_142a2b950(void)

{
  if (DAT_146b295b0 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"Volume",&DAT_146b295b0,FUN_140447710,0x490,0x10000001,0,
                  L"Engine",&LAB_142a2ad20,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,FUN_14290cfd0
                  ,&LAB_140447700,0);
  }
  return DAT_146b295b0;
}



// FUNCTION 142a2ba00 Get_Z_Construct_UScriptStruct_FHardwareCursorReference_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FHardwareCursorReference_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FHardwareCursorReference_CRC(void)

{
  return 0x76d26bbc;
}



// FUNCTION 142a2ba10 Get_Z_Construct_UScriptStruct_FTTEventTrack_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FTTEventTrack_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FTTEventTrack_CRC(void)

{
  return 0xe811fc8a;
}



// FUNCTION 142a2ba20 Get_Z_Construct_UScriptStruct_FTTFloatTrack_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FTTFloatTrack_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FTTFloatTrack_CRC(void)

{
  return 0x2169d2eb;
}



// FUNCTION 142a2ba30 Get_Z_Construct_UScriptStruct_FTTLinearColorTrack_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FTTLinearColorTrack_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FTTLinearColorTrack_CRC(void)

{
  return 0x199bd27c;
}



// FUNCTION 142a2ba40 Get_Z_Construct_UScriptStruct_FTTTrackBase_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FTTTrackBase_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FTTTrackBase_CRC(void)

{
  return 0xb15e4312;
}



// FUNCTION 142a2ba50 Get_Z_Construct_UScriptStruct_FTTVectorTrack_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FTTVectorTrack_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FTTVectorTrack_CRC(void)

{
  return 0xa8897ec0;
}



// FUNCTION 142a2ba60 Get_Z_Construct_UScriptStruct_FTimeStretchCurveInstance_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FTimeStretchCurveInstance_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FTimeStretchCurveInstance_CRC(void)

{
  return 0xab93b5b5;
}



// FUNCTION 142a2ba70 Get_Z_Construct_UScriptStruct_FTimeStretchCurveMarker_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FTimeStretchCurveMarker_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FTimeStretchCurveMarker_CRC(void)

{
  return 0x15edd17a;
}



// FUNCTION 142a2ba80 Get_Z_Construct_UScriptStruct_FTimeStretchCurve_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FTimeStretchCurve_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FTimeStretchCurve_CRC(void)

{
  return 0x558ce36a;
}



// FUNCTION 142a2ba90 Get_Z_Construct_UScriptStruct_FTouchInputControl_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FTouchInputControl_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FTouchInputControl_CRC(void)

{
  return 0xa7a09a28;
}



// FUNCTION 142a2baa0 FUN_142a2baa0 body=6 status=ok
// SIG undefined FUN_142a2baa0(void)

undefined8 FUN_142a2baa0(void)

{
  return 0xe527d6d7;
}



// FUNCTION 142a2bab0 FUN_142a2bab0 body=6 status=ok
// SIG undefined FUN_142a2bab0(void)

undefined8 FUN_142a2bab0(void)

{
  return 0xbc40813e;
}



// FUNCTION 142a2bac0 Get_Z_Construct_UScriptStruct_FVoiceSettings_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FVoiceSettings_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FVoiceSettings_CRC(void)

{
  return 0x4ea49ae7;
}



// FUNCTION 142a2bb00 Serialize body=112 status=ok
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
  AAkReverbVolume::Serialize(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 142a2bb70 Serialize body=112 status=ok
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
  FUN_1428bb620(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 142a2bbe0 Serialize body=112 status=ok
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
  UVectorFieldStatic::Serialize(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 142a2bc50 StaticRegisterNativesUTwitterIntegrationBase body=34 status=ok
// SIG undefined StaticRegisterNativesUTwitterIntegrationBase(void)

void UTwitterIntegrationBase::StaticRegisterNativesUTwitterIntegrationBase(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AuthorizeAccounts_145358fc0,7);
  return;
}



// FUNCTION 142a2bc80 StaticRegisterNativesUVOIPStatics body=34 status=ok
// SIG undefined StaticRegisterNativesUVOIPStatics(void)

void UVOIPStatics::StaticRegisterNativesUVOIPStatics(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SetMicThreshold_145359520,1);
  return;
}



// FUNCTION 142a2bcb0 FUN_142a2bcb0 body=34 status=ok
// SIG undefined FUN_142a2bcb0(void)

void FUN_142a2bcb0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142a2a990();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_BPOnTalkingBegin_1453594d0,5);
  return;
}



// FUNCTION 142a2bce0 FUN_142a2bce0 body=34 status=ok
// SIG undefined FUN_142a2bce0(void)

void FUN_142a2bce0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142a2a1b0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SetIntensity_145359140,1);
  return;
}



// FUNCTION 142a2bd10 StaticRegisterNativesUVisualLoggerKismetLibrary body=34 status=ok
// SIG undefined StaticRegisterNativesUVisualLoggerKismetLibrary(void)

void UVisualLoggerKismetLibrary::StaticRegisterNativesUVisualLoggerKismetLibrary(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_EnableRecording_145359150,6);
  return;
}



// FUNCTION 142a2bd40 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FHardwareCursorReference::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b29458 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FHardwareCursorReference_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b29458 = GetStaticStruct(FUN_142a2c670,uVar2,L"HardwareCursorReference",0x10,uVar1);
  }
  return;
}



// FUNCTION 142a2bda0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FTTEventTrack::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b292c0 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FTTEventTrack_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b292c0 = GetStaticStruct(FUN_142a2c6a0,uVar2,L"TTEventTrack",0x18,uVar1);
  }
  return;
}



// FUNCTION 142a2be00 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FTTFloatTrack::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b292b0 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FTTFloatTrack_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b292b0 = GetStaticStruct(FUN_142a2c6d0,uVar2,L"TTFloatTrack",0x18,uVar1);
  }
  return;
}



// FUNCTION 142a2be60 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FTTLinearColorTrack::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b29290 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FTTLinearColorTrack_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b29290 = GetStaticStruct(FUN_142a2c700,uVar2,L"TTLinearColorTrack",0x18,uVar1);
  }
  return;
}



// FUNCTION 142a2bec0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FTTTrackBase::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b292d0 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FTTTrackBase_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b292d0 = GetStaticStruct(FUN_142a2a170,uVar2,L"TTTrackBase",0x10,uVar1);
  }
  return;
}



// FUNCTION 142a2bf20 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FTTVectorTrack::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b292a0 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FTTVectorTrack_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b292a0 = GetStaticStruct(FUN_142a2c730,uVar2,L"TTVectorTrack",0x18,uVar1);
  }
  return;
}



// FUNCTION 142a2bf80 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FTimeStretchCurve::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b29308 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FTimeStretchCurve_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b29308 = GetStaticStruct(FUN_142a2c760,uVar2,L"TimeStretchCurve",0x28,uVar1);
  }
  return;
}



// FUNCTION 142a2bfe0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FTimeStretchCurveInstance::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b292f8 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FTimeStretchCurveInstance_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b292f8 = GetStaticStruct(FUN_142a2c790,uVar2,L"TimeStretchCurveInstance",0x30,uVar1);
  }
  return;
}



// FUNCTION 142a2c040 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FTimeStretchCurveMarker::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b29318 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FTimeStretchCurveMarker_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b29318 = GetStaticStruct(FUN_142a2c7c0,uVar2,L"TimeStretchCurveMarker",0x10,uVar1);
  }
  return;
}



// FUNCTION 142a2c0a0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FTouchInputControl::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b29338 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FTouchInputControl_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b29338 = GetStaticStruct(FUN_142a2c7f0,uVar2,L"TouchInputControl",0x68,uVar1);
  }
  return;
}



// FUNCTION 142a2c100 FUN_142a2c100 body=82 status=ok
// SIG undefined FUN_142a2c100(void)

void FUN_142a2c100(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b29368 == 0) {
    uVar1 = FUN_142a2bab0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b29368 = GetStaticStruct(FUN_142a2c820,uVar2,L"Trajectory",0x20,uVar1);
  }
  return;
}



// FUNCTION 142a2c160 FUN_142a2c160 body=82 status=ok
// SIG undefined FUN_142a2c160(void)

void FUN_142a2c160(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b29358 == 0) {
    uVar1 = FUN_142a2baa0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b29358 = GetStaticStruct(FUN_142a2c850,uVar2,L"TrajectoryParams",0x1c,uVar1);
  }
  return;
}



// FUNCTION 142a2c1c0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FVoiceSettings::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b29548 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FVoiceSettings_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b29548 = GetStaticStruct(FUN_142a2c880,uVar2,L"VoiceSettings",0x18,uVar1);
  }
  return;
}



// FUNCTION 142a2c220 FUN_142a2c220 body=47 status=ok
// SIG undefined FUN_142a2c220(void)

longlong FUN_142a2c220(void)

{
  if (DAT_146b29388 == 0) {
    FUN_141786440(&DAT_146b29388,&PTR_LAB_145355840);
  }
  return DAT_146b29388;
}



// FUNCTION 142a2c250 FUN_142a2c250 body=47 status=ok
// SIG undefined FUN_142a2c250(void)

longlong FUN_142a2c250(void)

{
  if (DAT_146b29398 == 0) {
    FUN_141786440(&DAT_146b29398,&PTR_LAB_145355910);
  }
  return DAT_146b29398;
}



// FUNCTION 142a2c280 FUN_142a2c280 body=47 status=ok
// SIG undefined FUN_142a2c280(void)

longlong FUN_142a2c280(void)

{
  if (DAT_146b293a8 == 0) {
    FUN_141786440(&DAT_146b293a8,&PTR_LAB_145355a30);
  }
  return DAT_146b293a8;
}



// FUNCTION 142a2c2b0 FUN_142a2c2b0 body=47 status=ok
// SIG undefined FUN_142a2c2b0(void)

longlong FUN_142a2c2b0(void)

{
  if (DAT_146b293b8 == 0) {
    FUN_141786440(&DAT_146b293b8,&PTR_thunk_FUN_142a2b8a0_145355b50);
  }
  return DAT_146b293b8;
}



// FUNCTION 142a2c2e0 FUN_142a2c2e0 body=47 status=ok
// SIG undefined FUN_142a2c2e0(void)

longlong FUN_142a2c2e0(void)

{
  if (DAT_146b294c8 == 0) {
    FUN_141786440(&DAT_146b294c8,&PTR_GetPrivateStaticClass_145357350);
  }
  return DAT_146b294c8;
}



// FUNCTION 142a2c310 FUN_142a2c310 body=47 status=ok
// SIG undefined FUN_142a2c310(void)

longlong FUN_142a2c310(void)

{
  if (DAT_146b292e0 == 0) {
    FUN_141786440(&DAT_146b292e0,&PTR_GetPrivateStaticClass_145357450);
  }
  return DAT_146b292e0;
}



// FUNCTION 142a2c340 FUN_142a2c340 body=47 status=ok
// SIG undefined FUN_142a2c340(void)

longlong FUN_142a2c340(void)

{
  if (DAT_146b29328 == 0) {
    FUN_141786440(&DAT_146b29328,&PTR_StaticClass_1453582f0);
  }
  return DAT_146b29328;
}



// FUNCTION 142a2c370 FUN_142a2c370 body=47 status=ok
// SIG undefined FUN_142a2c370(void)

longlong FUN_142a2c370(void)

{
  if (DAT_146b29348 == 0) {
    FUN_141786440(&DAT_146b29348,&PTR_GetPrivateStaticClass_145354ba0);
  }
  return DAT_146b29348;
}



// FUNCTION 142a2c3a0 FUN_142a2c3a0 body=47 status=ok
// SIG undefined FUN_142a2c3a0(void)

longlong FUN_142a2c3a0(void)

{
  if (DAT_146b29420 == 0) {
    FUN_141786440(&DAT_146b29420,&PTR_GetPrivateStaticClass_1453583d0);
  }
  return DAT_146b29420;
}



// FUNCTION 142a2c3d0 FUN_142a2c3d0 body=47 status=ok
// SIG undefined FUN_142a2c3d0(void)

longlong FUN_142a2c3d0(void)

{
  if (DAT_146b29438 == 0) {
    FUN_141786440(&DAT_146b29438,&PTR_GetPrivateStaticClass_145355020);
  }
  return DAT_146b29438;
}



// FUNCTION 142a2c400 FUN_142a2c400 body=47 status=ok
// SIG undefined FUN_142a2c400(void)

longlong FUN_142a2c400(void)

{
  if (DAT_146b29468 == 0) {
    FUN_141786440(&DAT_146b29468,&PTR_GetPrivateStaticClass_1453565c0);
  }
  return DAT_146b29468;
}



// FUNCTION 142a2c430 FUN_142a2c430 body=47 status=ok
// SIG undefined FUN_142a2c430(void)

longlong FUN_142a2c430(void)

{
  if (DAT_146b29490 == 0) {
    FUN_141786440(&DAT_146b29490,&PTR_StaticClass_145356b90);
  }
  return DAT_146b29490;
}



// FUNCTION 142a2c460 FUN_142a2c460 body=47 status=ok
// SIG undefined FUN_142a2c460(void)

longlong FUN_142a2c460(void)

{
  if (DAT_146b294b8 == 0) {
    FUN_141786440(&DAT_146b294b8,&PTR_StaticClass_145357170);
  }
  return DAT_146b294b8;
}



// FUNCTION 142a2c490 FUN_142a2c490 body=47 status=ok
// SIG undefined FUN_142a2c490(void)

longlong FUN_142a2c490(void)

{
  if (DAT_146b294d8 == 0) {
    FUN_141786440(&DAT_146b294d8,&PTR_StaticClass_145357670);
  }
  return DAT_146b294d8;
}



// FUNCTION 142a2c4c0 FUN_142a2c4c0 body=47 status=ok
// SIG undefined FUN_142a2c4c0(void)

longlong FUN_142a2c4c0(void)

{
  if (DAT_146b294e8 == 0) {
    FUN_141786440(&DAT_146b294e8,&PTR_StaticClass_145357850);
  }
  return DAT_146b294e8;
}



// FUNCTION 142a2c4f0 FUN_142a2c4f0 body=47 status=ok
// SIG undefined FUN_142a2c4f0(void)

longlong FUN_142a2c4f0(void)

{
  if (DAT_146b29538 == 0) {
    FUN_141786440(&DAT_146b29538,&PTR_GetPrivateStaticClass_145354a60);
  }
  return DAT_146b29538;
}



// FUNCTION 142a2c520 FUN_142a2c520 body=47 status=ok
// SIG undefined FUN_142a2c520(void)

longlong FUN_142a2c520(void)

{
  if (DAT_146b29450 == 0) {
    FUN_1417866a0(&DAT_146b29450,&PTR_Z_Construct_UPackage__Script_Engine_146676f40);
  }
  return DAT_146b29450;
}



// FUNCTION 142a2c550 FUN_142a2c550 body=47 status=ok
// SIG undefined FUN_142a2c550(void)

longlong FUN_142a2c550(void)

{
  if (DAT_146b292f0 == 0) {
    FUN_1417866a0(&DAT_146b292f0,&PTR_Z_Construct_UPackage__Script_Engine_146676db0);
  }
  return DAT_146b292f0;
}



// FUNCTION 142a2c580 FUN_142a2c580 body=47 status=ok
// SIG undefined FUN_142a2c580(void)

longlong FUN_142a2c580(void)

{
  if (DAT_146b293c8 == 0) {
    FUN_1417866a0(&DAT_146b293c8,&PTR_Z_Construct_UPackage__Script_Engine_146676e00);
  }
  return DAT_146b293c8;
}



// FUNCTION 142a2c5b0 FUN_142a2c5b0 body=47 status=ok
// SIG undefined FUN_142a2c5b0(void)

longlong FUN_142a2c5b0(void)

{
  if (DAT_146b293d0 == 0) {
    FUN_1417866a0(&DAT_146b293d0,&PTR_Z_Construct_UPackage__Script_Engine_146676e50);
  }
  return DAT_146b293d0;
}



// FUNCTION 142a2c5e0 FUN_142a2c5e0 body=47 status=ok
// SIG undefined FUN_142a2c5e0(void)

longlong FUN_142a2c5e0(void)

{
  if (DAT_146b29448 == 0) {
    FUN_1417866a0(&DAT_146b29448,&PTR_Z_Construct_UPackage__Script_Engine_146676ef0);
  }
  return DAT_146b29448;
}



// FUNCTION 142a2c610 FUN_142a2c610 body=47 status=ok
// SIG undefined FUN_142a2c610(void)

longlong FUN_142a2c610(void)

{
  if (DAT_146b29430 == 0) {
    FUN_1417866a0(&DAT_146b29430,&PTR_Z_Construct_UPackage__Script_Engine_146676ea0);
  }
  return DAT_146b29430;
}



// FUNCTION 142a2c640 FUN_142a2c640 body=47 status=ok
// SIG undefined FUN_142a2c640(void)

longlong FUN_142a2c640(void)

{
  if (DAT_146b29488 == 0) {
    FUN_1417866a0(&DAT_146b29488,&PTR_Z_Construct_UPackage__Script_Engine_146676f90);
  }
  return DAT_146b29488;
}



// FUNCTION 142a2c670 FUN_142a2c670 body=47 status=ok
// SIG undefined FUN_142a2c670(void)

longlong FUN_142a2c670(void)

{
  if (DAT_146b29460 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b29460,&PTR_Z_Construct_UPackage__Script_Engine_1466752c0);
  }
  return DAT_146b29460;
}



// FUNCTION 142a2c6a0 FUN_142a2c6a0 body=47 status=ok
// SIG undefined FUN_142a2c6a0(void)

longlong FUN_142a2c6a0(void)

{
  if (DAT_146b292c8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b292c8,&PTR_Z_Construct_UPackage__Script_Engine_146673aa0);
  }
  return DAT_146b292c8;
}



// FUNCTION 142a2c6d0 FUN_142a2c6d0 body=47 status=ok
// SIG undefined FUN_142a2c6d0(void)

longlong FUN_142a2c6d0(void)

{
  if (DAT_146b292b8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b292b8,&PTR_Z_Construct_UPackage__Script_Engine_1466739e0);
  }
  return DAT_146b292b8;
}



// FUNCTION 142a2c700 FUN_142a2c700 body=47 status=ok
// SIG undefined FUN_142a2c700(void)

longlong FUN_142a2c700(void)

{
  if (DAT_146b29298 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b29298,&PTR_Z_Construct_UPackage__Script_Engine_146673860);
  }
  return DAT_146b29298;
}



// FUNCTION 142a2c730 FUN_142a2c730 body=47 status=ok
// SIG undefined FUN_142a2c730(void)

longlong FUN_142a2c730(void)

{
  if (DAT_146b292a8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b292a8,&PTR_Z_Construct_UPackage__Script_Engine_146673920);
  }
  return DAT_146b292a8;
}



// FUNCTION 142a2c760 FUN_142a2c760 body=47 status=ok
// SIG undefined FUN_142a2c760(void)

longlong FUN_142a2c760(void)

{
  if (DAT_146b29310 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b29310,&PTR_Z_Construct_UPackage__Script_Engine_146674190);
  }
  return DAT_146b29310;
}



// FUNCTION 142a2c790 FUN_142a2c790 body=47 status=ok
// SIG undefined FUN_142a2c790(void)

longlong FUN_142a2c790(void)

{
  if (DAT_146b29300 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b29300,&PTR_Z_Construct_UPackage__Script_Engine_1466740d0);
  }
  return DAT_146b29300;
}



// FUNCTION 142a2c7c0 FUN_142a2c7c0 body=47 status=ok
// SIG undefined FUN_142a2c7c0(void)

longlong FUN_142a2c7c0(void)

{
  if (DAT_146b29320 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b29320,&PTR_Z_Construct_UPackage__Script_Engine_146674210);
  }
  return DAT_146b29320;
}



// FUNCTION 142a2c7f0 FUN_142a2c7f0 body=47 status=ok
// SIG undefined FUN_142a2c7f0(void)

longlong FUN_142a2c7f0(void)

{
  if (DAT_146b29340 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b29340,&PTR_Z_Construct_UPackage__Script_Engine_146674530);
  }
  return DAT_146b29340;
}



// FUNCTION 142a2c820 FUN_142a2c820 body=47 status=ok
// SIG undefined FUN_142a2c820(void)

longlong FUN_142a2c820(void)

{
  if (DAT_146b29370 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b29370,&PTR_Z_Construct_UPackage__Script_Engine_1466749d0);
  }
  return DAT_146b29370;
}



// FUNCTION 142a2c850 FUN_142a2c850 body=47 status=ok
// SIG undefined FUN_142a2c850(void)

longlong FUN_142a2c850(void)

{
  if (DAT_146b29360 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b29360,&PTR_Z_Construct_UPackage__Script_Engine_1466748d0);
  }
  return DAT_146b29360;
}



// FUNCTION 142a2c880 FUN_142a2c880 body=47 status=ok
// SIG undefined FUN_142a2c880(void)

longlong FUN_142a2c880(void)

{
  if (DAT_146b29550 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b29550,&PTR_Z_Construct_UPackage__Script_Engine_1466769c0);
  }
  return DAT_146b29550;
}



// FUNCTION 142a2c8b0 FUN_142a2c8b0 body=128 status=ok
// SIG undefined FUN_142a2c8b0(void)

void FUN_142a2c8b0(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  uVar1 = FUN_1428c87c0(local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142a2c930 FUN_142a2c930 body=212 status=ok
// SIG undefined FUN_142a2c930(void)

void FUN_142a2c930(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined4 local_res8 [2];
  longlong local_18 [2];
  
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
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2b0))(param_1,local_18,local_res8[0]);
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



// FUNCTION 142a2ca10 FUN_142a2ca10 body=47 status=ok
// SIG undefined FUN_142a2ca10(void)

void FUN_142a2ca10(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x2a8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142a2ca40 execK2_GetWalkableFloorAngle body=45 status=ok
// SIG undefined execK2_GetWalkableFloorAngle(void)

void UCharacterMovementComponent::execK2_GetWalkableFloorAngle
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = K2_GetWalkableFloorAngle();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142a2ca70 execLogBox body=549 status=ok
// SIG undefined execLogBox(void)

void UVisualLoggerKismetLibrary::execLogBox(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  bool bVar2;
  int local_res10 [2];
  undefined8 local_res20;
  undefined8 local_a8;
  void *local_a0;
  ulonglong local_98;
  void *local_90;
  int local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_a8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_70);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_a0 = (void *)0x0;
  local_98 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_a0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_80);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
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
  _Src = local_a0;
  bVar2 = local_res10[0] != 0;
  local_90 = (void *)0x0;
  local_28 = local_80;
  uStack_20 = uStack_78;
  local_48 = local_70;
  uStack_44 = uStack_6c;
  uStack_40 = uStack_68;
  uStack_3c = uStack_64;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar1 = (longlong)(int)local_98;
  local_38 = local_60;
  local_30 = local_58;
  local_88 = (int)local_98;
  if ((int)local_98 == 0) {
    local_84 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_90,local_98 & 0xffffffff,0);
    ::_guard_xfg_dispatch_icall_nop(local_90,_Src,lVar1 * 2);
  }
  LogBox(local_a8,&local_48,&local_90,&local_28,local_res20,bVar2);
  if (local_a0 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142a2cca0 execLogLocation body=611 status=ok
// SIG undefined execLogLocation(void)

void UVisualLoggerKismetLibrary::execLogLocation(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  bool bVar2;
  int local_res10 [2];
  undefined4 local_res20 [2];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  void *local_58;
  ulonglong local_50;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_80 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_80);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
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
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_88 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  _Src = local_58;
  bVar2 = local_res10[0] != 0;
  local_28 = local_38;
  uStack_24 = uStack_34;
  uStack_20 = uStack_30;
  uStack_1c = uStack_2c;
  local_68 = local_78;
  local_48 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar1 = (longlong)(int)local_50;
  local_60 = local_70;
  local_40 = (int)local_50;
  if ((int)local_50 == 0) {
    local_3c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_50 & 0xffffffff,0);
    ::_guard_xfg_dispatch_icall_nop(local_48,_Src,lVar1 * 2);
  }
  LogLocation(local_80,&local_68,&local_48,&local_28,local_res20[0],local_88,bVar2);
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142a2cf10 execLogSegment body=687 status=ok
// SIG undefined execLogSegment(void)

void UVisualLoggerKismetLibrary::execLogSegment(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  bool bVar2;
  int local_res10 [2];
  undefined4 local_res20 [2];
  undefined8 local_a8;
  undefined8 local_a0;
  void *local_98;
  ulonglong local_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_a0 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_a0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_98 = (void *)0x0;
  local_90 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_a8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  _Src = local_98;
  bVar2 = local_res10[0] != 0;
  local_28 = local_38;
  uStack_20 = uStack_30;
  local_58 = local_78;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar1 = (longlong)(int)local_90;
  local_50 = local_70;
  local_48 = local_68;
  local_40 = local_60;
  local_88 = (void *)0x0;
  local_80 = (int)local_90;
  if ((int)local_90 == 0) {
    local_7c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_88,local_90 & 0xffffffff,0);
    ::_guard_xfg_dispatch_icall_nop(local_88,_Src,lVar1 * 2);
  }
  FUN_1428d0cf0(local_a0,&local_48,&local_58,&local_88,&local_28,local_res20[0],local_a8,bVar2);
  if (local_98 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142a2d1c0 execLogText body=393 status=ok
// SIG undefined execLogText(void)

void UVisualLoggerKismetLibrary::execLogText(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  bool bVar2;
  int local_res10 [2];
  undefined8 local_res20;
  undefined8 local_48;
  void *local_40;
  ulonglong local_38;
  void *local_30;
  int local_28;
  undefined4 local_24;
  
  local_48 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_40 = (void *)0x0;
  local_38 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_40);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
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
  _Src = local_40;
  bVar2 = local_res10[0] != 0;
  local_30 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar1 = (longlong)(int)local_38;
  local_28 = (int)local_38;
  if ((int)local_38 == 0) {
    local_24 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_30,local_38 & 0xffffffff,0);
    ::_guard_xfg_dispatch_icall_nop(local_30,_Src,lVar1 * 2);
  }
  LogText(local_48,&local_30,local_res20,bVar2);
  if (local_40 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142a2d350 execRedirectVislog body=175 status=ok
// SIG undefined execRedirectVislog(void)

void UVisualLoggerKismetLibrary::execRedirectVislog(undefined8 param_1,longlong param_2)

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
  AK::MemoryMgr::StartProfileThreadUsage((long)local_res20);
  return;
}



// FUNCTION 142a2d400 FUN_142a2d400 body=128 status=ok
// SIG undefined FUN_142a2d400(void)

void FUN_142a2d400(undefined8 param_1,longlong param_2)

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
  FUN_1428d3dc0(param_1,local_res10);
  return;
}



// FUNCTION 142a2d480 execClientAckGoodMove body=127 status=ok
// SIG undefined execClientAckGoodMove(void)

void UCharacterMovementComponent::execClientAckGoodMove(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x8e8))(param_1,local_res8[0]);
  return;
}



// FUNCTION 142a2d500 FUN_142a2d500 body=108 status=ok
// SIG undefined FUN_142a2d500(void)

void FUN_142a2d500(undefined8 param_1,longlong param_2)

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
  FUN_1428d7ac0(local_res10[0]);
  return;
}



// FUNCTION 142a2d570 FUN_142a2d570 body=336 status=ok
// SIG undefined FUN_142a2d570(void)

void FUN_142a2d570(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong local_38 [6];
  
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x298))(param_1,local_38 + 4,local_38 + 2,local_38);
  *param_3 = uVar1;
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



// FUNCTION 142a2d6c0 FUN_142a2d6c0 body=413 status=ok
// SIG undefined FUN_142a2d6c0(void)

void FUN_142a2d6c0(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong **pplVar3;
  int iVar4;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  longlong *local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  
  local_38 = 0;
  local_30 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
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
  local_res8[0] = 0;
  pplVar3 = &local_48;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar3 = *(longlong ***)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
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
  uVar1 = (**(code **)(*param_1 + 0x2b8))(param_1,&local_38,pplVar3,local_res8[0],local_res10[0]);
  *param_3 = uVar1;
  plVar2 = local_48;
  for (iVar4 = (int)local_40; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142a2d860 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong UWorldComposition::StaticClass(void)

{
  if (DAT_146b29748 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"WorldComposition",&DAT_146b29748,FUN_140447710,0x68,0x10000004
                  ,0,L"Engine",&LAB_142a2e8c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b29748;
}



// FUNCTION 142a2d900 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UVolumeTexture::GetPrivateStaticClass(void)

{
  if (DAT_146b29648 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"VolumeTexture",&DAT_146b29648,FUN_140447710,0x110,0x10000000,0
                  ,L"Engine",&LAB_142a2e840,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14294dce0,&LAB_140447700,0);
  }
  return DAT_146b29648;
}



// FUNCTION 142a2d9c0 FUN_142a2d9c0 body=53 status=ok
// SIG undefined FUN_142a2d9c0(void)

void FUN_142a2d9c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &PTR_FUN_14535d3a0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142a2da00 FUN_142a2da00 body=53 status=ok
// SIG undefined FUN_142a2da00(void)

void FUN_142a2da00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_14535d4b8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142a2da40 FUN_142a2da40 body=47 status=ok
// SIG undefined FUN_142a2da40(void)

longlong FUN_142a2da40(void)

{
  if (DAT_146b297f0 == 0) {
    FUN_141786440(&DAT_146b297f0,&PTR_GetPrivateStaticClass_14535a8c0);
  }
  return DAT_146b297f0;
}



// FUNCTION 142a2da70 FUN_142a2da70 body=47 status=ok
// SIG undefined FUN_142a2da70(void)

longlong FUN_142a2da70(void)

{
  if (DAT_146b297e8 == 0) {
    FUN_141786a30(&DAT_146b297e8,&PTR_FUN_146679dd0);
  }
  return DAT_146b297e8;
}



// FUNCTION 142a2daa0 FUN_142a2daa0 body=53 status=ok
// SIG undefined FUN_142a2daa0(void)

void FUN_142a2daa0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x24;
    *puVar1 = &PTR_FUN_14535d630;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142a2dae0 FUN_142a2dae0 body=53 status=ok
// SIG undefined FUN_142a2dae0(void)

void FUN_142a2dae0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1f8;
    *puVar1 = &PTR_FUN_14535d748;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142a2db20 FUN_142a2db20 body=53 status=ok
// SIG undefined FUN_142a2db20(void)

void FUN_142a2db20(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_14535d860;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142a2db60 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &PTR_FUN_14535d978;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142a2dbd0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong APlayerStateGunfire::GetPrivateStaticClass(void)

{
  if (DAT_146b29658 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"VolumetricLightmapDensityVolume",&DAT_146b29658,FUN_140447710,
                  0x498,0x10000000,0,L"Engine",&LAB_142a2e6e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_1407fbfa0,&LAB_140447700,0);
  }
  return DAT_146b29658;
}



// FUNCTION 142a2dc90 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGeometryCollectionActor::GetPrivateStaticClass(void)

{
  if (DAT_146b29668 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"VolumetricLightMapVolume",&DAT_146b29668,FUN_140447710,0x520,
                  0x10000000,0,L"Engine",&LAB_142a2e6c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_1407fbfa0,&LAB_140447700,0);
  }
  return DAT_146b29668;
}



// FUNCTION 142a2dd50 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UInputKeySelector::GetPrivateStaticClass(void)

{
  if (DAT_146b29678 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"VolumetricLightMapVolumeComponent",&DAT_146b29678,
                  FUN_140447710,0x700,0x10000000,0,L"Engine",&LAB_142a2e860,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14079feb0,&LAB_140447700,0);
  }
  return DAT_146b29678;
}



// FUNCTION 142a2de20 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong USoundWaveProcedural::GetPrivateStaticClass(void)

{
  if (DAT_146b296d0 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"WindDirectionalSourceComponent",&DAT_146b296d0,FUN_142a2fe50,
                  0x300,0x10000000,0,L"Engine",&LAB_142a2e880,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1405bc4a0,&LAB_140447700,0);
  }
  return DAT_146b296d0;
}



// FUNCTION 142a2ded0 FUN_142a2ded0 body=47 status=ok
// SIG undefined FUN_142a2ded0(void)

longlong FUN_142a2ded0(void)

{
  if (DAT_146b296c8 == 0) {
    FUN_141786440(&DAT_146b296c8,&PTR_GetPrivateStaticClass_14535bb80);
  }
  return DAT_146b296c8;
}



// FUNCTION 142a2df00 FUN_142a2df00 body=47 status=ok
// SIG undefined FUN_142a2df00(void)

longlong FUN_142a2df00(void)

{
  if (DAT_146b29698 == 0) {
    FUN_141786a30(&DAT_146b29698,&PTR_FUN_1466777c0);
  }
  return DAT_146b29698;
}



// FUNCTION 142a2df30 FUN_142a2df30 body=47 status=ok
// SIG undefined FUN_142a2df30(void)

longlong FUN_142a2df30(void)

{
  if (DAT_146b296a0 == 0) {
    FUN_141786a30(&DAT_146b296a0,&PTR_FUN_146677800);
  }
  return DAT_146b296a0;
}



// FUNCTION 142a2df60 FUN_142a2df60 body=47 status=ok
// SIG undefined FUN_142a2df60(void)

longlong FUN_142a2df60(void)

{
  if (DAT_146b296a8 == 0) {
    FUN_141786a30(&DAT_146b296a8,&PTR_FUN_146677840);
  }
  return DAT_146b296a8;
}



// FUNCTION 142a2df90 FUN_142a2df90 body=47 status=ok
// SIG undefined FUN_142a2df90(void)

longlong FUN_142a2df90(void)

{
  if (DAT_146b296b0 == 0) {
    FUN_141786a30(&DAT_146b296b0,&PTR_FUN_146677880);
  }
  return DAT_146b296b0;
}



// FUNCTION 142a2dfc0 FUN_142a2dfc0 body=47 status=ok
// SIG undefined FUN_142a2dfc0(void)

longlong FUN_142a2dfc0(void)

{
  if (DAT_146b296b8 == 0) {
    FUN_141786a30(&DAT_146b296b8,&PTR_FUN_1466778c0);
  }
  return DAT_146b296b8;
}



// FUNCTION 142a2dff0 FUN_142a2dff0 body=47 status=ok
// SIG undefined FUN_142a2dff0(void)

longlong FUN_142a2dff0(void)

{
  if (DAT_146b296c0 == 0) {
    FUN_141786a30(&DAT_146b296c0,&PTR_FUN_146677980);
  }
  return DAT_146b296c0;
}



// FUNCTION 142a2e020 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong UHierarchicalLODSetup::StaticClass(void)

{
  if (DAT_146b297e0 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"HierarchicalLODSetup",&DAT_146b297e0,FUN_140447710,0x60,
                  0x10000000,0,L"Engine",FUN_142a2e740,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b297e0;
}



// FUNCTION 142a2e0d0 FUN_142a2e0d0 body=47 status=ok
// SIG undefined FUN_142a2e0d0(void)

longlong FUN_142a2e0d0(void)

{
  if (DAT_146b29730 == 0) {
    FUN_141786440(&DAT_146b29730,&PTR_LAB_14535c330);
  }
  return DAT_146b29730;
}



// FUNCTION 142a2e100 FUN_142a2e100 body=47 status=ok
// SIG undefined FUN_142a2e100(void)

longlong FUN_142a2e100(void)

{
  if (DAT_146b29728 == 0) {
    FUN_141786a30(&DAT_146b29728,&PTR_FUN_146678040);
  }
  return DAT_146b29728;
}



// FUNCTION 142a2e130 FUN_142a2e130 body=53 status=ok
// SIG undefined FUN_142a2e130(void)

void FUN_142a2e130(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &PTR_FUN_14535cdd0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142a2e170 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UVoipListenerSynthComponent::GetPrivateStaticClass(void)

{
  if (DAT_146b297f8 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"WorldSettings",&DAT_146b297f8,
                  StaticRegisterNativesUVoipListenerSynthComponent,0x680,0x10000004,0,L"game",
                  &LAB_142a2e720,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_1407b7f50,&LAB_140447700,0);
  }
  return DAT_146b297f8;
}



// FUNCTION 142a2e220 FUN_142a2e220 body=53 status=ok
// SIG undefined FUN_142a2e220(void)

void FUN_142a2e220(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &PTR_FUN_14535cee8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142a2e260 FUN_142a2e260 body=53 status=ok
// SIG undefined FUN_142a2e260(void)

void FUN_142a2e260(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &PTR_FUN_14535d000;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142a2e2a0 FUN_142a2e2a0 body=53 status=ok
// SIG undefined FUN_142a2e2a0(void)

void FUN_142a2e2a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &PTR_FUN_14535d118;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142a2e2e0 FUN_142a2e2e0 body=53 status=ok
// SIG undefined FUN_142a2e2e0(void)

void FUN_142a2e2e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_14535d230;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142a2e330 FUN_142a2e330 body=900 status=ok
// SIG undefined FUN_142a2e330(void)

int * FUN_142a2e330(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  ulonglong *_Src;
  void *_Dst;
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
      TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(param_1,iVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar12 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar8 = *(int *)(*param_1 + 4 + (longlong)iVar12 * 0x48);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x48) = 0xffffffff;
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
  _Src = (ulonglong *)(*param_1 + (longlong)iVar12 * 0x48);
  TTuple<UParticleSystem_*,FPSCPool>::TTuple<UParticleSystem_*,FPSCPool>(_Src,param_3);
  *(undefined4 *)(_Src + 8) = 0xffffffff;
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
          if (*(ulonglong *)(*param_1 + (longlong)iVar5 * 0x48) == *_Src) break;
          iVar5 = *(int *)(*param_1 + 0x40 + (longlong)iVar5 * 0x48);
          iVar8 = iVar9;
        } while (iVar5 != -1);
      }
    }
    bVar13 = iVar8 != -1;
    if (bVar13) {
      _Dst = (void *)(*param_1 + (longlong)iVar8 * 0x48);
      if (*(longlong *)(*param_1 + 0x28 + (longlong)iVar8 * 0x48) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)((longlong)_Dst + 0x18) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x40);
      iVar12 = *param_2;
      bVar3 = (byte)iVar12 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x48) = iVar12;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + (longlong)iVar12 * 0x48) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar9 = (int)param_1[6];
      }
      *(int *)(lVar2 + 4 + (longlong)iVar12 * 0x48) = iVar9;
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
      goto LAB_142a2e690;
    }
  }
  cVar4 = TSet<TTuple<USceneComponent_*,SWorldWidgetScreenLayer::FComponentEntry>,TDefaultMapHashableKeyFuncs<USceneComponent_*,SWorldWidgetScreenLayer::FComponentEntry,0>,FDefaultSetAllocator>
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
    *(uint *)((longlong)_Src + 0x44) = uVar7;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 8) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
         *param_2;
  }
LAB_142a2e690:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar13;
  }
  return param_2;
}



// FUNCTION 142a2e740 FUN_142a2e740 body=248 status=ok
// SIG undefined FUN_142a2e740(void)

void FUN_142a2e740(longlong *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_1417818c0(puVar2);
    *puVar2 = &PTR__scalar_deleting_destructor__14535cac0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
    puVar2[9] = 0;
    *(undefined4 *)(puVar2 + 0xb) = 0;
    if (0x7fffffff < *(uint *)((longlong)puVar2 + 0x5c)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2 + 10,0);
    }
    if ((undefined2 *)puVar2[10] != (undefined2 *)0x0) {
      *(undefined2 *)puVar2[10] = 0;
    }
    *(undefined4 *)(puVar2 + 8) = 0;
    iVar1 = *(int *)(puVar2 + 6);
    *(int *)(puVar2 + 6) = iVar1 + 1;
    if (*(int *)((longlong)puVar2 + 0x34) < iVar1 + 1) {
      TArray<TTuple<FFlareSpacecraftDescription_*,FFlareSpacecraftSave>,FDefaultAllocator>::
      ResizeGrow(puVar2 + 5,iVar1);
    }
    FUN_142a2e9f0((longlong)iVar1 * 0x1f8 + puVar2[5]);
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
    puVar2[9] = 0;
    *(undefined4 *)(puVar2 + 0xb) = 0;
    if ((*(int *)((longlong)puVar2 + 0x5c) < 0) && (*(int *)((longlong)puVar2 + 0x5c) != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2 + 10,0);
    }
    if ((undefined2 *)puVar2[10] != (undefined2 *)0x0) {
      *(undefined2 *)puVar2[10] = 0;
    }
    *(undefined4 *)(puVar2 + 8) = 0;
  }
  return;
}



// FUNCTION 142a2e8e0 TTuple<UParticleSystem_*,FPSCPool> body=262 status=ok
// SIG undefined TTuple<UParticleSystem_*,FPSCPool>(void)

undefined8 *
TTuple<UParticleSystem_*,FPSCPool>::TTuple<UParticleSystem_*,FPSCPool>
          (undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  pvVar2 = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 1,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[1],pvVar2,(longlong)iVar1 << 4);
  }
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  pvVar2 = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 3,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[3],pvVar2,(longlong)iVar1 << 3);
  }
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 6);
  pvVar2 = (void *)param_2[5];
  *(int *)(param_1 + 6) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 5,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[5],pvVar2,(longlong)iVar1 << 3);
  }
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  return param_1;
}



// FUNCTION 142a2e9f0 FUN_142a2e9f0 body=543 status=ok
// SIG undefined FUN_142a2e9f0(void)

longlong FUN_142a2e9f0(longlong param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0xfe;
  *(undefined4 *)(param_1 + 4) = 0x3ea147ae;
  *(undefined4 *)(param_1 + 8) = 0x461c4000;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) & 0xfe;
  *(undefined4 *)(param_1 + 0x10) = 300;
  *(undefined4 *)(param_1 + 0x18) = 0x40400000;
  FUN_142429940(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0xb0) = 0x200;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0x200;
  *(undefined4 *)(param_1 + 0xb8) = 1;
  *(undefined1 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc4) = DAT_1464aa734;
  *(undefined1 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0x41a00000;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0x43020000;
  *(undefined1 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0x100;
  *(undefined4 *)(param_1 + 0xe0) = 0x100;
  *(undefined4 *)(param_1 + 0xe4) = 0x1000001;
  *(undefined4 *)(param_1 + 0xe8) = 0x1000001;
  *(undefined4 *)(param_1 + 0xec) = 0xffffffff;
  *(undefined2 *)(param_1 + 0xf0) = 0x100;
  *(undefined1 *)(param_1 + 0xf2) = 0;
  FName::FName(param_1 + 0xf8,L"HLODmesh",1);
  *(undefined1 *)(param_1 + 0xac) = 1;
  *(undefined1 *)(param_1 + 0x100) = 1;
  *(undefined8 *)(param_1 + 0x104) = 0x100;
  *(undefined1 *)(param_1 + 0x10c) = 1;
  *(undefined4 *)(param_1 + 0x110) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x114) = 0;
  FUN_142429940(param_1 + 0x118);
  *(undefined4 *)(param_1 + 0x1ac) = 0x1000100;
  *(undefined1 *)(param_1 + 0x1b0) = 1;
  *(undefined4 *)(param_1 + 0x1bc) = 2;
  *(undefined2 *)(param_1 + 0x1c0) = 0x200;
  *(undefined8 *)(param_1 + 0x1c4) = 0;
  *(undefined4 *)(param_1 + 0x1cc) = 0x1000100;
  *(undefined2 *)(param_1 + 0x1d0) = 0;
  *(undefined1 *)(param_1 + 0x1d2) = 0;
  *(undefined4 *)(param_1 + 0x1d4) = 0x400;
  *(undefined1 *)(param_1 + 0x1d8) = 0;
  FName::FName(param_1 + 0x1e0,L"HLODmesh",1);
  puVar2 = (undefined1 *)(param_1 + 0x1b1);
  lVar1 = 8;
  if (puVar2 <= (undefined1 *)(param_1 + 0x1b9)) {
    for (; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 1;
      puVar2 = puVar2 + 1;
    }
  }
  *(undefined2 *)(param_1 + 500) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0x44fa0000;
  *(undefined4 *)(param_1 + 0x1ec) = 0x42480000;
  *(undefined4 *)(param_1 + 0x1f0) = 2;
  *(undefined1 *)(param_1 + 0x114) = 1;
  *(undefined1 *)(param_1 + 0x100) = 1;
  *(undefined1 *)(param_1 + 0xac) = 1;
  *(undefined1 *)(param_1 + 0xe8) = 0;
  return param_1;
}



// FUNCTION 142a2ec10 operator= body=469 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<UParticleSystem_*,FPSCPool>,TDefaultMapHashableKeyFuncs<UParticleSystem_*,FPSCPool,0>,FDefaultSetAllocator>
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
    TSparseArray<TSetElement<TTuple<UParticleSystem_*,FPSCPool>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(param_1,iVar9);
    cVar3 = TSet<TTuple<USceneComponent_*,SWorldWidgetScreenLayer::FComponentEntry>,TDefaultMapHashableKeyFuncs<USceneComponent_*,SWorldWidgetScreenLayer::FComponentEntry,0>,FDefaultSetAllocator>
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
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_142a2ed4d;
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
LAB_142a2ed4d:
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
        FUN_142a2e330(param_1,local_res8,*param_2 + (longlong)iStack_3c * 0x48,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 142a2edf0 FUN_142a2edf0 body=1082 status=ok
// SIG undefined FUN_142a2edf0(void)

undefined4 * FUN_142a2edf0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(byte *)((longlong)param_1 + 0xd) =
       *(byte *)((longlong)param_1 + 0xd) ^
       (*(byte *)((longlong)param_2 + 0xd) ^ *(byte *)((longlong)param_1 + 0xd)) & 1;
  *(undefined1 *)((longlong)param_1 + 0xe) = *(undefined1 *)((longlong)param_2 + 0xe);
  *(undefined1 *)((longlong)param_1 + 0xf) = *(undefined1 *)((longlong)param_2 + 0xf);
  param_1[4] = param_2[4];
  *(byte *)(param_1 + 5) =
       *(byte *)(param_1 + 5) ^ (*(byte *)(param_2 + 5) ^ *(byte *)(param_1 + 5)) & 1;
  param_1[6] = param_2[6];
  FUN_1429a0f90(param_1 + 7,param_2 + 7);
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2d] = param_2[0x2d];
  *(undefined1 *)(param_1 + 0x2e) = *(undefined1 *)(param_2 + 0x2e);
  *(undefined1 *)((longlong)param_1 + 0xb9) = *(undefined1 *)((longlong)param_2 + 0xb9);
  *(undefined1 *)((longlong)param_1 + 0xba) = *(undefined1 *)((longlong)param_2 + 0xba);
  *(undefined1 *)((longlong)param_1 + 0xbb) = *(undefined1 *)((longlong)param_2 + 0xbb);
  *(undefined1 *)(param_1 + 0x2f) = *(undefined1 *)(param_2 + 0x2f);
  param_1[0x30] = param_2[0x30];
  param_1[0x31] = param_2[0x31];
  *(undefined1 *)(param_1 + 0x32) = *(undefined1 *)(param_2 + 0x32);
  param_1[0x33] = param_2[0x33];
  *(undefined1 *)(param_1 + 0x34) = *(undefined1 *)(param_2 + 0x34);
  param_1[0x35] = param_2[0x35];
  *(undefined1 *)(param_1 + 0x36) = *(undefined1 *)(param_2 + 0x36);
  param_1[0x37] = param_2[0x37];
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined1 *)((longlong)param_1 + 0xe1) = *(undefined1 *)((longlong)param_2 + 0xe1);
  *(undefined1 *)((longlong)param_1 + 0xe2) = *(undefined1 *)((longlong)param_2 + 0xe2);
  *(undefined1 *)((longlong)param_1 + 0xe3) = *(undefined1 *)((longlong)param_2 + 0xe3);
  *(undefined1 *)(param_1 + 0x39) = *(undefined1 *)(param_2 + 0x39);
  *(undefined1 *)((longlong)param_1 + 0xe5) = *(undefined1 *)((longlong)param_2 + 0xe5);
  *(undefined1 *)((longlong)param_1 + 0xe6) = *(undefined1 *)((longlong)param_2 + 0xe6);
  *(undefined1 *)((longlong)param_1 + 0xe7) = *(undefined1 *)((longlong)param_2 + 0xe7);
  *(undefined1 *)(param_1 + 0x3a) = *(undefined1 *)(param_2 + 0x3a);
  *(undefined1 *)((longlong)param_1 + 0xe9) = *(undefined1 *)((longlong)param_2 + 0xe9);
  *(undefined1 *)((longlong)param_1 + 0xea) = *(undefined1 *)((longlong)param_2 + 0xea);
  *(undefined1 *)((longlong)param_1 + 0xeb) = *(undefined1 *)((longlong)param_2 + 0xeb);
  param_1[0x3b] = param_2[0x3b];
  *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(param_2 + 0x3c);
  *(undefined1 *)((longlong)param_1 + 0xf1) = *(undefined1 *)((longlong)param_2 + 0xf1);
  *(undefined1 *)((longlong)param_1 + 0xf2) = *(undefined1 *)((longlong)param_2 + 0xf2);
  *(undefined8 *)(param_1 + 0x3e) = *(undefined8 *)(param_2 + 0x3e);
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
  param_1[0x41] = param_2[0x41];
  *(undefined1 *)(param_1 + 0x42) = *(undefined1 *)(param_2 + 0x42);
  *(undefined1 *)((longlong)param_1 + 0x109) = *(undefined1 *)((longlong)param_2 + 0x109);
  *(undefined1 *)((longlong)param_1 + 0x10a) = *(undefined1 *)((longlong)param_2 + 0x10a);
  *(undefined1 *)((longlong)param_1 + 0x10b) = *(undefined1 *)((longlong)param_2 + 0x10b);
  *(undefined1 *)(param_1 + 0x43) = *(undefined1 *)(param_2 + 0x43);
  param_1[0x44] = param_2[0x44];
  *(undefined1 *)(param_1 + 0x45) = *(undefined1 *)(param_2 + 0x45);
  FUN_1429a0f90(param_1 + 0x46,param_2 + 0x46);
  *(undefined1 *)(param_1 + 0x6b) = *(undefined1 *)(param_2 + 0x6b);
  *(undefined1 *)((longlong)param_1 + 0x1ad) = *(undefined1 *)((longlong)param_2 + 0x1ad);
  *(undefined1 *)((longlong)param_1 + 0x1ae) = *(undefined1 *)((longlong)param_2 + 0x1ae);
  *(undefined1 *)((longlong)param_1 + 0x1af) = *(undefined1 *)((longlong)param_2 + 0x1af);
  *(undefined1 *)(param_1 + 0x6c) = *(undefined1 *)(param_2 + 0x6c);
  *(undefined1 *)((longlong)param_1 + 0x1b1) = *(undefined1 *)((longlong)param_2 + 0x1b1);
  *(undefined1 *)((longlong)param_1 + 0x1b2) = *(undefined1 *)((longlong)param_2 + 0x1b2);
  *(undefined1 *)((longlong)param_1 + 0x1b3) = *(undefined1 *)((longlong)param_2 + 0x1b3);
  *(undefined1 *)(param_1 + 0x6d) = *(undefined1 *)(param_2 + 0x6d);
  *(undefined1 *)((longlong)param_1 + 0x1b5) = *(undefined1 *)((longlong)param_2 + 0x1b5);
  *(undefined1 *)((longlong)param_1 + 0x1b6) = *(undefined1 *)((longlong)param_2 + 0x1b6);
  *(undefined1 *)((longlong)param_1 + 0x1b7) = *(undefined1 *)((longlong)param_2 + 0x1b7);
  *(undefined1 *)(param_1 + 0x6e) = *(undefined1 *)(param_2 + 0x6e);
  param_1[0x6f] = param_2[0x6f];
  *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(param_2 + 0x70);
  *(undefined1 *)((longlong)param_1 + 0x1c1) = *(undefined1 *)((longlong)param_2 + 0x1c1);
  param_1[0x71] = param_2[0x71];
  param_1[0x72] = param_2[0x72];
  *(undefined1 *)(param_1 + 0x73) = *(undefined1 *)(param_2 + 0x73);
  *(undefined1 *)((longlong)param_1 + 0x1cd) = *(undefined1 *)((longlong)param_2 + 0x1cd);
  *(undefined1 *)((longlong)param_1 + 0x1ce) = *(undefined1 *)((longlong)param_2 + 0x1ce);
  *(undefined1 *)((longlong)param_1 + 0x1cf) = *(undefined1 *)((longlong)param_2 + 0x1cf);
  *(undefined1 *)(param_1 + 0x74) = *(undefined1 *)(param_2 + 0x74);
  *(undefined1 *)((longlong)param_1 + 0x1d1) = *(undefined1 *)((longlong)param_2 + 0x1d1);
  *(undefined1 *)((longlong)param_1 + 0x1d2) = *(undefined1 *)((longlong)param_2 + 0x1d2);
  param_1[0x75] = param_2[0x75];
  *(undefined1 *)(param_1 + 0x76) = *(undefined1 *)(param_2 + 0x76);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  param_1[0x7a] = param_2[0x7a];
  param_1[0x7b] = param_2[0x7b];
  param_1[0x7c] = param_2[0x7c];
  *(undefined1 *)(param_1 + 0x7d) = *(undefined1 *)(param_2 + 0x7d);
  *(undefined1 *)((longlong)param_1 + 0x1f5) = *(undefined1 *)((longlong)param_2 + 0x1f5);
  return param_1;
}



// FUNCTION 142a2f230 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UHierarchicalLODSetup::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 142a2f2d0 FUN_142a2f2d0 body=47 status=ok
// SIG undefined FUN_142a2f2d0(void)

void FUN_142a2f2d0(undefined8 param_1,undefined8 *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x58);
  FTickFunction::FTickFunction(param_2);
  *param_2 = &PTR__scalar_deleting_destructor__1451ed5a0;
  return;
}



// FUNCTION 142a2f420 FUN_142a2f420 body=47 status=ok
// SIG undefined FUN_142a2f420(void)

void FUN_142a2f420(undefined8 param_1,undefined8 *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x58);
  FTickFunction::FTickFunction(param_2);
  *param_2 = &PTR__scalar_deleting_destructor__1451ed5b8;
  return;
}



// FUNCTION 142a2f450 FUN_142a2f450 body=47 status=ok
// SIG undefined FUN_142a2f450(void)

void FUN_142a2f450(undefined8 param_1,undefined8 *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x58);
  FTickFunction::FTickFunction(param_2);
  *param_2 = &PTR__scalar_deleting_destructor__1451ed588;
  return;
}



// FUNCTION 142a2f490 FUN_142a2f490 body=74 status=ok
// SIG undefined FUN_142a2f490(void)

undefined1 FUN_142a2f490(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_142a2edf0(param_2 + param_3,param_3);
      param_3 = param_3 + 0x1f8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142a2f610 Copy body=213 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FPSCPool>::Copy
          (undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  void *_Src;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    do {
      if (param_2 != (undefined8 *)(param_3 + -0x10)) {
        iVar2 = *(int *)(param_3 + -8);
        _Src = *(void **)(param_3 + -0x10);
        *(int *)(param_2 + 1) = iVar2;
        if ((iVar2 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(param_2,iVar2);
          ::_guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar2 << 4);
        }
      }
      TArray<AActor_*,TSizedDefaultAllocator<32>_>::operator=(param_2 + 2,param_3);
      TArray<AActor_*,TSizedDefaultAllocator<32>_>::operator=(param_2 + 4,param_3 + 0x10);
      puVar1 = (undefined4 *)(param_3 + 0x20);
      param_3 = param_3 + 0x38;
      *(undefined4 *)(param_2 + 6) = *puVar1;
      param_4 = param_4 + -1;
      param_2 = param_2 + 7;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142a2f6f0 Copy body=103 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FWorldPSCPool>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined4 *)(param_2 + 0x54);
    do {
      TSet<TTuple<UParticleSystem_*,FPSCPool>,TDefaultMapHashableKeyFuncs<UParticleSystem_*,FPSCPool,0>,FDefaultSetAllocator>
      ::operator=(puVar1 + -0x15,param_3 + -0x54 + (longlong)puVar1);
      puVar1[-1] = *(undefined4 *)(param_3 + -4 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)(param_3 + (longlong)puVar1);
      puVar1 = puVar1 + 0x16;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142a2f780 EPSCPoolMethod_StaticEnum body=55 status=ok
// SIG undefined EPSCPoolMethod_StaticEnum(void)

void EPSCPoolMethod_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b295b8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b295b8 = GetStaticEnum(FUN_142a30480,uVar1,L"EPSCPoolMethod");
  }
  return;
}



// FUNCTION 142a2f7c0 EVisibilityAggressiveness_StaticEnum body=55 status=ok
// SIG undefined EVisibilityAggressiveness_StaticEnum(void)

void EVisibilityAggressiveness_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b295c8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b295c8 = GetStaticEnum(FUN_142a304b0,uVar1,L"EVisibilityAggressiveness");
  }
  return;
}



// FUNCTION 142a2f800 EVolumeLightingMethod_StaticEnum body=55 status=ok
// SIG undefined EVolumeLightingMethod_StaticEnum(void)

void EVolumeLightingMethod_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b295c0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b295c0 = GetStaticEnum(FUN_142a304e0,uVar1,L"EVolumeLightingMethod");
  }
  return;
}



// FUNCTION 142a2f840 EWindSourceType_StaticEnum body=55 status=ok
// SIG undefined EWindSourceType_StaticEnum(void)

void EWindSourceType_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b295d0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b295d0 = GetStaticEnum(FUN_142a30510,uVar1,L"EWindSourceType");
  }
  return;
}



// FUNCTION 142a2f880 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UParticleModuleTypeDataGpu::GetPrivateStaticClass(void)

{
  if (DAT_146b29688 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"WindDirectionalSource",&DAT_146b29688,FUN_140447710,0x460,
                  0x10000000,0,L"Engine",&LAB_142a2e700,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_1407b7f50,&LAB_140447700,0);
  }
  return DAT_146b29688;
}



// FUNCTION 142a2f930 FUN_142a2f930 body=151 status=ok
// SIG undefined FUN_142a2f930(void)

longlong FUN_142a2f930(void)

{
  if (DAT_146b29738 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"World",&DAT_146b29738,FUN_142a2fe80,0x988,0x10000000,0,
                  L"Engine",&LAB_142a2e8a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b29738;
}



// FUNCTION 142a2f9d0 Get_Z_Construct_UScriptStruct_FBroadphaseSettings_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FBroadphaseSettings_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FBroadphaseSettings_CRC(void)

{
  return 0xb4b6eb7b;
}



// FUNCTION 142a2f9e0 Get_Z_Construct_UScriptStruct_FEndPhysicsTickFunction_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FEndPhysicsTickFunction_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FEndPhysicsTickFunction_CRC(void)

{
  return 0x116b8e96;
}



// FUNCTION 142a2f9f0 FUN_142a2f9f0 body=6 status=ok
// SIG undefined FUN_142a2f9f0(void)

undefined8 FUN_142a2f9f0(void)

{
  return 0x85e7df5;
}



// FUNCTION 142a2fa00 Get_Z_Construct_UScriptStruct_FLevelCollection_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FLevelCollection_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FLevelCollection_CRC(void)

{
  return 0x75bdd659;
}



// FUNCTION 142a2fa10 Get_Z_Construct_UScriptStruct_FLevelViewportInfo_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FLevelViewportInfo_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FLevelViewportInfo_CRC(void)

{
  return 0x46b6a660;
}



// FUNCTION 142a2fa20 FUN_142a2fa20 body=6 status=ok
// SIG undefined FUN_142a2fa20(void)

undefined8 FUN_142a2fa20(void)

{
  return 0xeb59ae14;
}



// FUNCTION 142a2fa30 Get_Z_Construct_UScriptStruct_FNetViewer_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FNetViewer_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FNetViewer_CRC(void)

{
  return 0x17faa831;
}



// FUNCTION 142a2fa40 Get_Z_Construct_UScriptStruct_FPSCPoolElem_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FPSCPoolElem_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FPSCPoolElem_CRC(void)

{
  return 0xc8ef4421;
}



// FUNCTION 142a2fa50 Get_Z_Construct_UScriptStruct_FPSCPool_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FPSCPool_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FPSCPool_CRC(void)

{
  return 0x4f92d11f;
}



// FUNCTION 142a2fa60 Get_Z_Construct_UScriptStruct_FStartAsyncSimulationFunction_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FStartAsyncSimulationFunction_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FStartAsyncSimulationFunction_CRC(void)

{
  return 0x32a75e04;
}



// FUNCTION 142a2fa70 Get_Z_Construct_UScriptStruct_FStartPhysicsTickFunction_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FStartPhysicsTickFunction_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FStartPhysicsTickFunction_CRC(void)

{
  return 0xdcd8f5f3;
}



// FUNCTION 142a2fa80 FUN_142a2fa80 body=6 status=ok
// SIG undefined FUN_142a2fa80(void)

undefined8 FUN_142a2fa80(void)

{
  return 0x2541573e;
}



// FUNCTION 142a2fbc0 ResizeGrow body=151 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TTuple<FFlareSpacecraftDescription_*,FFlareSpacecraftSave>,FDefaultAllocator>::
     ResizeGrow(longlong *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
  }
  uVar4 = FMemory::QuantizeSize(lVar3 * 0x1f8,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4;
  lVar3 = SUB168(ZEXT816(0x410410410410411) * auVar2,8);
  iVar5 = (int)((uVar4 - lVar3 >> 1) + lVar3 >> 8);
  if (iVar5 < (int)uVar1) {
    iVar5 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar5;
  if ((*param_1 != 0) || (iVar5 != 0)) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar5 * 0x1f8,0);
    *param_1 = lVar3;
  }
  return;
}



// FUNCTION 142a2fc60 Serialize body=112 status=ok
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
  FUN_1428de110(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 142a2fcd0 Serialize body=112 status=ok
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
  FUN_1428d7410(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 142a2fd40 Serialize body=112 status=ok
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
  FUN_1428d7480(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 142a2fdb0 Serialize body=112 status=ok
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
  FUN_1428d7690(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 142a2fe20 StaticRegisterNativesUVoipListenerSynthComponent body=34 status=ok
// SIG undefined StaticRegisterNativesUVoipListenerSynthComponent(void)

void UVoipListenerSynthComponent::StaticRegisterNativesUVoipListenerSynthComponent(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnRep_WorldGravityZ_14535da90,1);
  return;
}



// FUNCTION 142a2fe50 FUN_142a2fe50 body=34 status=ok
// SIG undefined FUN_142a2fe50(void)

void FUN_142a2fe50(void)

{
  undefined8 uVar1;
  
  uVar1 = USoundWaveProcedural::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SetMaximumGustAmount_14535cd70,6);
  return;
}



// FUNCTION 142a2fe80 FUN_142a2fe80 body=34 status=ok
// SIG undefined FUN_142a2fe80(void)

void FUN_142a2fe80(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142a2f930();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_HandleTimelineScrubbed_14535d348,1);
  return;
}



// FUNCTION 142a2feb0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FBroadphaseSettings::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b29798 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FBroadphaseSettings_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b29798 = GetStaticStruct(FUN_142a30540,uVar2,L"BroadphaseSettings",0x24,uVar1);
  }
  return;
}



// FUNCTION 142a2ff10 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FEndPhysicsTickFunction::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b296f8 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FEndPhysicsTickFunction_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b296f8 = GetStaticStruct(FUN_142a30570,uVar2,L"EndPhysicsTickFunction",0x58,uVar1);
  }
  return;
}



// FUNCTION 142a2ff70 FUN_142a2ff70 body=82 status=ok
// SIG undefined FUN_142a2ff70(void)

void FUN_142a2ff70(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b297a8 == 0) {
    uVar1 = FUN_142a2f9f0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b297a8 = GetStaticStruct(FUN_142a305a0,uVar2,L"HierarchicalSimplification",0x1f8,uVar1);
  }
  return;
}



// FUNCTION 142a2ffd0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FLevelCollection::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b296d8 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FLevelCollection_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b296d8 = GetStaticStruct(FUN_142a305d0,uVar2,L"LevelCollection",0x80,uVar1);
  }
  return;
}



// FUNCTION 142a30030 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FLevelViewportInfo::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b29718 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FLevelViewportInfo_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b29718 = GetStaticStruct(FUN_142a30600,uVar2,L"LevelViewportInfo",0x20,uVar1);
  }
  return;
}



// FUNCTION 142a30090 FUN_142a30090 body=82 status=ok
// SIG undefined FUN_142a30090(void)

void FUN_142a30090(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b297c8 == 0) {
    uVar1 = FUN_142a2fa20();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b297c8 = GetStaticStruct(FUN_142a30630,uVar2,L"LightmassWorldInfoSettings",0x58,uVar1);
  }
  return;
}



// FUNCTION 142a300f0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FNetViewer::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b297b8 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FNetViewer_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b297b8 = GetStaticStruct(FUN_142a30660,uVar2,L"NetViewer",0x30,uVar1);
  }
  return;
}



// FUNCTION 142a30150 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FPSCPool::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b29768 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FPSCPool_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b29768 = GetStaticStruct(FUN_142a30690,uVar2,L"PSCPool",0x38,uVar1);
  }
  return;
}



// FUNCTION 142a301b0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FPSCPoolElem::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b29778 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FPSCPoolElem_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b29778 = GetStaticStruct(FUN_142a306c0,uVar2,L"PSCPoolElem",0x10,uVar1);
  }
  return;
}



// FUNCTION 142a30210 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FStartAsyncSimulationFunction::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b296e8 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FStartAsyncSimulationFunction_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b296e8 = GetStaticStruct(FUN_142a306f0,uVar2,L"StartAsyncSimulationFunction",0x58,uVar1);
  }
  return;
}



// FUNCTION 142a30270 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FStartPhysicsTickFunction::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b29708 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FStartPhysicsTickFunction_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b29708 = GetStaticStruct(FUN_142a30720,uVar2,L"StartPhysicsTickFunction",0x58,uVar1);
  }
  return;
}



// FUNCTION 142a302d0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FWorldPSCPool::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b29758 == 0) {
    uVar1 = FUN_142a2fa80();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b29758 = GetStaticStruct(FUN_142a30750,uVar2,L"WorldPSCPool",0x58,uVar1);
  }
  return;
}



// FUNCTION 142a30330 FUN_142a30330 body=47 status=ok
// SIG undefined FUN_142a30330(void)

longlong FUN_142a30330(void)

{
  if (DAT_146b29660 == 0) {
    FUN_141786440(&DAT_146b29660,&PTR_GetPrivateStaticClass_14535b330);
  }
  return DAT_146b29660;
}



// FUNCTION 142a30360 FUN_142a30360 body=47 status=ok
// SIG undefined FUN_142a30360(void)

longlong FUN_142a30360(void)

{
  if (DAT_146b29650 == 0) {
    FUN_141786440(&DAT_146b29650,&PTR_GetPrivateStaticClass_14535b0b0);
  }
  return DAT_146b29650;
}



// FUNCTION 142a30390 FUN_142a30390 body=47 status=ok
// SIG undefined FUN_142a30390(void)

longlong FUN_142a30390(void)

{
  if (DAT_146b29680 == 0) {
    FUN_141786440(&DAT_146b29680,&PTR_GetPrivateStaticClass_14535b810);
  }
  return DAT_146b29680;
}



// FUNCTION 142a303c0 FUN_142a303c0 body=47 status=ok
// SIG undefined FUN_142a303c0(void)

longlong FUN_142a303c0(void)

{
  if (DAT_146b297d8 == 0) {
    FUN_141786440(&DAT_146b297d8,&PTR_StaticClass_14535a530);
  }
  return DAT_146b297d8;
}



// FUNCTION 142a303f0 FUN_142a303f0 body=47 status=ok
// SIG undefined FUN_142a303f0(void)

longlong FUN_142a303f0(void)

{
  if (DAT_146b29640 == 0) {
    FUN_141786440(&DAT_146b29640,&PTR_GetPrivateStaticClass_14535afc0);
  }
  return DAT_146b29640;
}



// FUNCTION 142a30420 FUN_142a30420 body=47 status=ok
// SIG undefined FUN_142a30420(void)

longlong FUN_142a30420(void)

{
  if (DAT_146b29670 == 0) {
    FUN_141786440(&DAT_146b29670,&PTR_GetPrivateStaticClass_14535b620);
  }
  return DAT_146b29670;
}



// FUNCTION 142a30450 FUN_142a30450 body=47 status=ok
// SIG undefined FUN_142a30450(void)

longlong FUN_142a30450(void)

{
  if (DAT_146b29740 == 0) {
    FUN_141786440(&DAT_146b29740,&PTR_StaticClass_145359580);
  }
  return DAT_146b29740;
}



// FUNCTION 142a30480 FUN_142a30480 body=47 status=ok
// SIG undefined FUN_142a30480(void)

longlong FUN_142a30480(void)

{
  if (DAT_146b29750 == 0) {
    FUN_1417866a0(&DAT_146b29750,&PTR_Z_Construct_UPackage__Script_Engine_14667ada0);
  }
  return DAT_146b29750;
}



// FUNCTION 142a304b0 FUN_142a304b0 body=47 status=ok
// SIG undefined FUN_142a304b0(void)

longlong FUN_142a304b0(void)

{
  if (DAT_146b29790 == 0) {
    FUN_1417866a0(&DAT_146b29790,&PTR_Z_Construct_UPackage__Script_Engine_14667ae40);
  }
  return DAT_146b29790;
}



// FUNCTION 142a304e0 FUN_142a304e0 body=47 status=ok
// SIG undefined FUN_142a304e0(void)

longlong FUN_142a304e0(void)

{
  if (DAT_146b29788 == 0) {
    FUN_1417866a0(&DAT_146b29788,&PTR_Z_Construct_UPackage__Script_Engine_14667adf0);
  }
  return DAT_146b29788;
}



// FUNCTION 142a30510 FUN_142a30510 body=47 status=ok
// SIG undefined FUN_142a30510(void)

longlong FUN_142a30510(void)

{
  if (DAT_146b29690 == 0) {
    FUN_1417866a0(&DAT_146b29690,&PTR_Z_Construct_UPackage__Script_Engine_14667ad50);
  }
  return DAT_146b29690;
}



// FUNCTION 142a30540 FUN_142a30540 body=47 status=ok
// SIG undefined FUN_142a30540(void)

longlong FUN_142a30540(void)

{
  if (DAT_146b297a0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b297a0,&PTR_Z_Construct_UPackage__Script_Engine_1466791e0);
  }
  return DAT_146b297a0;
}



// FUNCTION 142a30570 FUN_142a30570 body=47 status=ok
// SIG undefined FUN_142a30570(void)

longlong FUN_142a30570(void)

{
  if (DAT_146b29700 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b29700,&PTR_Z_Construct_UPackage__Script_Engine_146677dc0);
  }
  return DAT_146b29700;
}



// FUNCTION 142a305a0 FUN_142a305a0 body=47 status=ok
// SIG undefined FUN_142a305a0(void)

longlong FUN_142a305a0(void)

{
  if (DAT_146b297b0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b297b0,&PTR_Z_Construct_UPackage__Script_Engine_1466795e0);
  }
  return DAT_146b297b0;
}



// FUNCTION 142a305d0 FUN_142a305d0 body=47 status=ok
// SIG undefined FUN_142a305d0(void)

longlong FUN_142a305d0(void)

{
  if (DAT_146b296e0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b296e0,&PTR_Z_Construct_UPackage__Script_Engine_146677cc0);
  }
  return DAT_146b296e0;
}



// FUNCTION 142a30600 FUN_142a30600 body=47 status=ok
// SIG undefined FUN_142a30600(void)

longlong FUN_142a30600(void)

{
  if (DAT_146b29720 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b29720,&PTR_Z_Construct_UPackage__Script_Engine_146677fc0);
  }
  return DAT_146b29720;
}



// FUNCTION 142a30630 FUN_142a30630 body=47 status=ok
// SIG undefined FUN_142a30630(void)

longlong FUN_142a30630(void)

{
  if (DAT_146b297d0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b297d0,&PTR_Z_Construct_UPackage__Script_Engine_146679c70);
  }
  return DAT_146b297d0;
}



// FUNCTION 142a30660 FUN_142a30660 body=47 status=ok
// SIG undefined FUN_142a30660(void)

longlong FUN_142a30660(void)

{
  if (DAT_146b297c0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b297c0,&PTR_Z_Construct_UPackage__Script_Engine_1466797a0);
  }
  return DAT_146b297c0;
}



// FUNCTION 142a30690 FUN_142a30690 body=47 status=ok
// SIG undefined FUN_142a30690(void)

longlong FUN_142a30690(void)

{
  if (DAT_146b29770 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b29770,&PTR_Z_Construct_UPackage__Script_Engine_146678f60);
  }
  return DAT_146b29770;
}



// FUNCTION 142a306c0 FUN_142a306c0 body=47 status=ok
// SIG undefined FUN_142a306c0(void)

longlong FUN_142a306c0(void)

{
  if (DAT_146b29780 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b29780,&PTR_Z_Construct_UPackage__Script_Engine_146679020);
  }
  return DAT_146b29780;
}



// FUNCTION 142a306f0 FUN_142a306f0 body=47 status=ok
// SIG undefined FUN_142a306f0(void)

longlong FUN_142a306f0(void)

{
  if (DAT_146b296f0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b296f0,&PTR_Z_Construct_UPackage__Script_Engine_146677d40);
  }
  return DAT_146b296f0;
}



// FUNCTION 142a30720 FUN_142a30720 body=47 status=ok
// SIG undefined FUN_142a30720(void)

longlong FUN_142a30720(void)

{
  if (DAT_146b29710 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b29710,&PTR_Z_Construct_UPackage__Script_Engine_146677e40);
  }
  return DAT_146b29710;
}



// FUNCTION 142a30750 FUN_142a30750 body=47 status=ok
// SIG undefined FUN_142a30750(void)

longlong FUN_142a30750(void)

{
  if (DAT_146b29760 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b29760,&PTR_Z_Construct_UPackage__Script_Engine_146678db0);
  }
  return DAT_146b29760;
}



// FUNCTION 142a307a0 FUN_142a307a0 body=123 status=ok
// SIG undefined FUN_142a307a0(void)

void FUN_142a307a0(undefined8 param_1,longlong param_2)

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
  SCircularThrobber::SetPeriod(param_1,local_res10[0]);
  return;
}



// FUNCTION 142a30820 FUN_142a30820 body=123 status=ok
// SIG undefined FUN_142a30820(void)

void FUN_142a30820(undefined8 param_1,longlong param_2)

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
  ACircularAreaMarker::SetRadius(param_1,local_res10[0]);
  return;
}



// FUNCTION 142a308a0 FUN_142a308a0 body=123 status=ok
// SIG undefined FUN_142a308a0(void)

void FUN_142a308a0(undefined8 param_1,longlong param_2)

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
  FUN_1428d8260(param_1,local_res10[0]);
  return;
}



// FUNCTION 142a30920 FUN_142a30920 body=123 status=ok
// SIG undefined FUN_142a30920(void)

void FUN_142a30920(undefined8 param_1,longlong param_2)

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
  SCircularThrobber::SetPeriod(param_1,local_res10[0]);
  return;
}



// FUNCTION 142a309a0 execSetRadius body=123 status=ok
// SIG undefined execSetRadius(void)

void UWindDirectionalSourceComponent::execSetRadius(undefined8 param_1,longlong param_2)

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
  SetRadius(param_1,local_res10[0]);
  return;
}



// FUNCTION 142a30a20 FUN_142a30a20 body=118 status=ok
// SIG undefined FUN_142a30a20(void)

void FUN_142a30a20(undefined8 param_1,longlong param_2)

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
  FUN_1428d8290(param_1,local_res10[0]);
  return;
}



// FUNCTION 142a30aa0 FUN_142a30aa0 body=140 status=ok
// SIG undefined FUN_142a30aa0(void)

undefined8 FUN_142a30aa0(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b29808) {
    _Init_thread_header(&DAT_146b29808);
    if (DAT_146b29808 == -1) {
      lVar1 = operator_new(0xc0);
      uVar2 = 0;
      if (lVar1 != 0) {
        uVar2 = FUN_142a38490(lVar1);
      }
      DAT_146b29800 = uVar2;
      atexit((_func_5014 *)&LAB_143ebe270);
      _Init_thread_footer(&DAT_146b29808);
      return DAT_146b29800;
    }
  }
  return DAT_146b29800;
}



// FUNCTION 142a30b30 FUN_142a30b30 body=58 status=ok
// SIG undefined FUN_142a30b30(void)

void FUN_142a30b30(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_145360cf8;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_145360d40;
  }
  return;
}



// FUNCTION 142a30b70 FUN_142a30b70 body=134 status=ok
// SIG undefined FUN_142a30b70(void)

void FUN_142a30b70(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  double local_res10;
  wchar_t *local_res18 [2];
  
  pcVar1 = *(code **)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  local_res10 = (double)DAT_146b29810;
  local_res18[0] = L"PakCache_Hits";
  (*pcVar1)(uVar2,local_res18,&local_res10);
  local_res10 = (double)DAT_146b29814;
  local_res18[0] = L"PakCache_Misses";
  (*pcVar1)(uVar2,local_res18,&local_res10);
  return;
}



// FUNCTION 142a30c00 FUN_142a30c00 body=136 status=ok
// SIG undefined FUN_142a30c00(void)

undefined8 FUN_142a30c00(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  double local_res10;
  wchar_t *local_res18 [2];
  
  pcVar1 = *(code **)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  local_res10 = (double)DAT_146b29810;
  local_res18[0] = L"PakCache_Hits";
  (*pcVar1)(uVar2,local_res18,&local_res10);
  local_res10 = (double)DAT_146b29814;
  local_res18[0] = L"PakCache_Misses";
  (*pcVar1)(uVar2,local_res18,&local_res10);
  return 1;
}



// FUNCTION 142a30c90 operator<FString,TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>_>_TTuple<FString,TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>_> body=270 status=ok
// SIG undefined operator<FString,TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>_>_TTuple<FString,TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong TKeyInitializer<FString_const_&>::
         operator<FString,TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>_>_TTuple<FString,TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>_>
                   (undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_68 = 0;
  uStack_60 = 0;
  local_40 = 0;
  local_30 = 0;
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = 0;
  FString::FString(param_2,*param_1);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x44) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined4 *)(param_2 + 0x58) = 0;
  TSparseArray<TSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::operator=(param_2 + 0x10,&local_78);
  lVar1 = local_38;
  if (local_38 == 0) {
    ::_guard_xfg_dispatch_icall_nop((void *)(param_2 + 0x48),&local_40,4);
  }
  if (*(longlong *)(param_2 + 0x50) != 0) {
    FMemory::Free();
    lVar1 = local_38;
  }
  *(longlong *)(param_2 + 0x50) = lVar1;
  *(undefined4 *)(param_2 + 0x58) = (undefined4)local_30;
  local_38 = 0;
  local_30 = local_30 & 0xffffffff00000000;
  TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_78);
  return param_2;
}



// FUNCTION 142a30da0 AddToIntervalTree<FPakPrecacher::FCacheBlock> body=202 status=ok
// SIG undefined AddToIntervalTree<FPakPrecacher::FCacheBlock>(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void AddToIntervalTree<FPakPrecacher::FCacheBlock>
               (undefined8 param_1,longlong *param_2,uint param_3,int param_4,int param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = (param_5 - param_4) + 1;
  if (((DAT_14667aeb8._4_4_ - (int)DAT_14667aeb8) + DAT_14667aec8 < iVar3) &&
     (DAT_14667aeb8._4_4_ < (int)DAT_14667aeb8 + iVar3)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (&DAT_14667aeb0);
  }
  lVar1 = (longlong)(int)(~*(uint *)((longlong)param_2 + 0x24) & param_3);
  uVar2 = *(ulonglong *)(*param_2 + lVar1 * 0x28) & 0xffffffffffff;
  AddToIntervalTree_Dangerous<FPakPrecacher::FCacheBlock>
            (param_1,param_2,param_3,uVar2,*(longlong *)(*param_2 + 8 + lVar1 * 0x28) + -1 + uVar2,
             param_4,param_5);
  return;
}



// FUNCTION 142a30e70 AddToIntervalTree<FPakPrecacher::FPakInRequest> body=204 status=ok
// SIG undefined AddToIntervalTree<FPakPrecacher::FPakInRequest>(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void AddToIntervalTree<FPakPrecacher::FPakInRequest>
               (undefined8 param_1,longlong *param_2,uint param_3,int param_4,int param_5)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = (param_5 - param_4) + 1;
  if (((DAT_14667aeb8._4_4_ - (int)DAT_14667aeb8) + DAT_14667aec8 < iVar3) &&
     (DAT_14667aeb8._4_4_ < (int)DAT_14667aeb8 + iVar3)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (&DAT_14667aeb0);
  }
  puVar1 = (ulonglong *)
           ((longlong)(int)(~*(uint *)((longlong)param_2 + 0x24) & param_3) * 0x30 + *param_2);
  uVar2 = *puVar1 & 0xffffffffffff;
  AddToIntervalTree_Dangerous<FPakPrecacher::FPakInRequest>
            (param_1,param_2,param_3,uVar2,(puVar1[1] - 1) + uVar2,param_4,param_5);
  return;
}



// FUNCTION 142a30f40 AddToIntervalTree_Dangerous<FPakPrecacher::FCacheBlock> body=466 status=ok
// SIG undefined AddToIntervalTree_Dangerous<FPakPrecacher::FCacheBlock>(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void AddToIntervalTree_Dangerous<FPakPrecacher::FCacheBlock>
               (uint *param_1,longlong *param_2,uint param_3,longlong param_4,longlong param_5,
               uint param_6,uint param_7)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  while( true ) {
    uVar5 = (uint)DAT_14667aeb8;
    uVar7 = *param_1;
    if (uVar7 == 0) {
      if (DAT_14667aec8 == 0) {
        DAT_14667aeb8._0_4_ = (uint)DAT_14667aeb8 + 1;
        if (DAT_14667aeb8._4_4_ < (int)(uint)DAT_14667aeb8) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow(&DAT_14667aeb0,uVar5);
        }
      }
      else {
        iVar1 = DAT_14667aec8 + -1;
        uVar5 = *(uint *)(_DAT_14667aec0 + (longlong)iVar1 * 4);
        iVar3 = (DAT_14667aec8 - iVar1) + -1;
        if (iVar3 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(_DAT_14667aec0 + (longlong)iVar1 * 4),
                     (void *)(_DAT_14667aec0 + (longlong)DAT_14667aec8 * 4),(longlong)iVar3 << 2);
        }
        DAT_14667aec8 = DAT_14667aec8 + -1;
        TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(&DAT_14667aec0);
      }
      lVar2 = DAT_14667aeb0;
      *(undefined8 *)(DAT_14667aeb0 + (longlong)(int)uVar5 * 0xc) = 0;
      *(undefined4 *)(lVar2 + 8 + (longlong)(int)uVar5 * 0xc) = 0;
      uVar7 = DAT_14667aed0 | uVar5;
      *param_1 = uVar7;
    }
    uVar4 = param_4 << ((byte)param_6 & 0x3f) & 0x8000000000000000;
    uVar6 = param_5 << ((byte)param_6 & 0x3f) & 0x8000000000000000;
    param_1 = (uint *)(DAT_14667aeb0 + (longlong)(int)(~DAT_14667aed4 & uVar7) * 0xc);
    if ((uVar4 != uVar6) || (param_7 <= param_6)) break;
    param_6 = param_6 + 1;
    if (uVar4 != 0) {
      param_1 = param_1 + 2;
    }
  }
  lVar2 = *param_2 + (longlong)(int)(~*(uint *)((longlong)param_2 + 0x24) & param_3) * 0x28;
  if (uVar4 == uVar6) {
    if (uVar4 != 0) {
      *(uint *)(lVar2 + 0x20) = param_1[2];
      param_1[2] = param_3;
      return;
    }
    *(uint *)(lVar2 + 0x20) = *param_1;
    *param_1 = param_3;
    return;
  }
  *(uint *)(lVar2 + 0x20) = param_1[1];
  param_1[1] = param_3;
  return;
}



// FUNCTION 142a31120 AddToIntervalTree_Dangerous<FPakPrecacher::FPakInRequest> body=466 status=ok
// SIG undefined AddToIntervalTree_Dangerous<FPakPrecacher::FPakInRequest>(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void AddToIntervalTree_Dangerous<FPakPrecacher::FPakInRequest>
               (uint *param_1,longlong *param_2,uint param_3,longlong param_4,longlong param_5,
               uint param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  
  while( true ) {
    uVar4 = (uint)DAT_14667aeb8;
    uVar6 = *param_1;
    if (uVar6 == 0) {
      if (DAT_14667aec8 == 0) {
        DAT_14667aeb8._0_4_ = (uint)DAT_14667aeb8 + 1;
        if (DAT_14667aeb8._4_4_ < (int)(uint)DAT_14667aeb8) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow(&DAT_14667aeb0,uVar4);
        }
      }
      else {
        iVar1 = DAT_14667aec8 + -1;
        uVar4 = *(uint *)(_DAT_14667aec0 + (longlong)iVar1 * 4);
        iVar2 = (DAT_14667aec8 - iVar1) + -1;
        if (iVar2 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(_DAT_14667aec0 + (longlong)iVar1 * 4),
                     (void *)(_DAT_14667aec0 + (longlong)DAT_14667aec8 * 4),(longlong)iVar2 << 2);
        }
        DAT_14667aec8 = DAT_14667aec8 + -1;
        TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(&DAT_14667aec0);
      }
      lVar7 = DAT_14667aeb0;
      *(undefined8 *)(DAT_14667aeb0 + (longlong)(int)uVar4 * 0xc) = 0;
      *(undefined4 *)(lVar7 + 8 + (longlong)(int)uVar4 * 0xc) = 0;
      uVar6 = DAT_14667aed0 | uVar4;
      *param_1 = uVar6;
    }
    uVar3 = param_4 << ((byte)param_6 & 0x3f) & 0x8000000000000000;
    uVar5 = param_5 << ((byte)param_6 & 0x3f) & 0x8000000000000000;
    param_1 = (uint *)(DAT_14667aeb0 + (longlong)(int)(~DAT_14667aed4 & uVar6) * 0xc);
    if ((uVar3 != uVar5) || (param_7 <= param_6)) break;
    param_6 = param_6 + 1;
    if (uVar3 != 0) {
      param_1 = param_1 + 2;
    }
  }
  lVar7 = (longlong)(int)(~*(uint *)((longlong)param_2 + 0x24) & param_3) * 0x30 + *param_2;
  if (uVar3 == uVar5) {
    if (uVar3 != 0) {
      *(uint *)(lVar7 + 0x24) = param_1[2];
      param_1[2] = param_3;
      return;
    }
    *(uint *)(lVar7 + 0x24) = *param_1;
    *param_1 = param_3;
    return;
  }
  *(uint *)(lVar7 + 0x24) = param_1[1];
  param_1[1] = param_3;
  return;
}



// FUNCTION 142a31300 Append<FDefaultAllocator> body=110 status=ok
// SIG undefined Append<FDefaultAllocator>(void)

void TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Append<FDefaultAllocator>
               (longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar2 = (int)param_2[1];
  if (iVar1 < iVar1 + iVar2) {
    FUN_1415e4440(param_1);
    iVar2 = (int)param_2[1];
  }
  lVar3 = *param_2;
  lVar4 = (longlong)iVar2 * 0x10 + lVar3;
  for (; lVar3 != lVar4; lVar3 = lVar3 + 0x10) {
    Emplace<FString_const_&>(param_1,local_res8,lVar3,0);
  }
  return;
}



// FUNCTION 142a31370 FUN_142a31370 body=556 status=ok
// SIG undefined FUN_142a31370(void)

void FUN_142a31370(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint *puVar9;
  undefined1 local_res8 [8];
  undefined8 local_98;
  longlong lStack_90;
  uint local_88;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  int iStack_48;
  uint uStack_44;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  if (*(int *)(param_1 + 8) - *(int *)(param_1 + 0x34) <
      (((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) - *(int *)(param_1 + 0x34)) +
      *(int *)(param_1 + 8)) {
    FUN_142a4c5d0();
  }
  uVar2 = *(uint *)(param_2 + 5);
  puVar1 = (uint *)(param_2 + 2);
  local_98._0_4_ = 0;
  local_98._4_4_ = 1;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar2 != 0) {
    puVar9 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar3 = *puVar9;
    iStack_80 = 0;
    local_98._0_4_ = 0;
    while (uVar3 == 0) {
      lVar7 = (longlong)(int)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar5 = (int)local_98 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= (int)local_98;
      local_98._0_4_ = iVar5;
      if (bVar4) goto LAB_142a3145d;
      uVar3 = puVar9[lVar7 + 1];
    }
    local_98._4_4_ = -uVar3 & uVar3;
    iVar5 = 0x1f;
    if (local_98._4_4_ != 0) {
      for (; local_98._4_4_ >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (local_98._4_4_ == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_84 = (iStack_80 - iVar5) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_142a3145d:
      uStack_84 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_2 + 5);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  local_88 = -1 << ((byte)uVar3 & 0x1f);
  iStack_48 = (int)local_98;
  uStack_44 = local_98._4_4_;
  uVar8 = uVar3 & 0xffffffe0;
  local_50._0_4_ = SUB84(param_2,0);
  local_50._4_4_ = (undefined4)((ulonglong)param_2 >> 0x20);
  local_78 = (undefined4)local_50;
  uStack_74 = local_50._4_4_;
  iStack_70 = (int)local_98;
  uStack_6c = local_98._4_4_;
  uStack_84 = uVar3;
  local_68 = puVar1;
  local_50 = param_2;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  if (uVar3 != uVar2) {
    puVar9 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar6 = puVar9[(int)uVar3 >> 5] & local_88;
    iVar5 = (int)uVar3 >> 5;
    while (uVar6 == 0) {
      uVar8 = uVar8 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_142a31523;
      uVar6 = puVar9[(longlong)iVar5 + 1];
      local_88 = 0xffffffff;
      iVar5 = iVar5 + 1;
    }
    uVar6 = -uVar6 & uVar6;
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
    uStack_84 = (uVar8 - iVar5) + 0x1f;
    uVar3 = uStack_84;
    if ((int)uVar2 < (int)uStack_84) {
LAB_142a31523:
      uStack_84 = uVar2;
      uVar3 = uVar2;
    }
  }
  while( true ) {
    if (((uStack_5c == uVar3) && (local_68 == puVar1)) &&
       ((longlong *)CONCAT44(uStack_74,local_78) == param_2)) break;
    local_98 = (longlong)(int)uStack_5c * 0x68 + *(longlong *)CONCAT44(uStack_74,local_78);
    lStack_90 = local_98 + 8;
    FUN_142a31a60(param_1,local_res8,&local_98,0);
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  return;
}



// FUNCTION 142a315a0 FUN_142a315a0 body=551 status=ok
// SIG undefined FUN_142a315a0(void)

uint * FUN_142a315a0(longlong *param_1,uint *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined2 *puVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *_Src;
  bool bVar10;
  uint local_res8 [2];
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar7 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar7 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,uVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar7 = *(uint *)(param_1 + 6);
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)(int)uVar7 * 0x68 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x68 + *param_1) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = uVar7;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar9 +
                   (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar7 & 0x1f);
  _Src = (undefined8 *)((longlong)(int)uVar7 * 0x68 + *param_1);
  TKeyInitializer<FString_const_&>::
  operator<FString,TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>_>_TTuple<FString,TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>_>
            (param_3,_Src);
  *(undefined4 *)(_Src + 0xc) = 0xffffffff;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    uVar7 = local_res8[0];
    lVar8 = (longlong)(int)local_res8[0];
    bVar10 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar10);
    if (bVar10) {
      plVar9 = (longlong *)(lVar8 * 0x68 + *param_1);
      *(undefined4 *)(plVar9 + 0xb) = 0;
      if (plVar9[10] != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (plVar9 + 2);
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(plVar9,_Src,0x60);
      TSparseArray<TSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = uVar7;
      goto LAB_142a31795;
    }
  }
  cVar3 = TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar3 == '\0') {
    uVar7 = *param_2;
    if (*(int *)(_Src + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*_Src;
    }
    uVar5 = FUN_140438070(puVar6);
    uVar5 = (int)param_1[9] - 1U & uVar5;
    *(uint *)((longlong)_Src + 100) = uVar5;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0xc) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(uint *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         uVar7;
  }
LAB_142a31795:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 142a317d0 FUN_142a317d0 body=644 status=ok
// SIG undefined FUN_142a317d0(void)

int * FUN_142a317d0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined2 *puVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char cVar10;
  longlong *plVar11;
  uint uVar12;
  bool bVar13;
  
  iVar9 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar8 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar8);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar8 = (int)param_1[6];
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar8 * 0x18);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  plVar11 = (longlong *)param_1[4];
  *param_2 = iVar8;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = param_1 + 2;
  }
  bVar13 = false;
  puVar1 = (uint *)((longlong)plVar11 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
  plVar11 = (longlong *)(*param_1 + (longlong)iVar8 * 0x18);
  puVar3 = (undefined2 *)param_3[1];
  lVar4 = *(longlong *)*param_3;
  *plVar11 = lVar4;
  *(undefined2 *)(plVar11 + 1) = *puVar3;
  *(undefined4 *)(plVar11 + 2) = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar12 != 1) {
    if (uVar12 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar6 +
                      ((longlong)((int)((ulonglong)lVar4 >> 0x20) + (int)lVar4) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar7 != -1) {
        do {
          if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x18) == lVar4) goto LAB_142a3192c;
          iVar7 = *(int *)(*param_1 + 0x10 + (longlong)iVar7 * 0x18);
        } while (iVar7 != -1);
      }
    }
    iVar7 = -1;
LAB_142a3192c:
    bVar13 = iVar7 != -1;
    if (bVar13) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar7 * 0x18),plVar11,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar8,1);
      *param_2 = iVar7;
      goto LAB_142a31a2b;
    }
  }
  if (3 < uVar12) {
    uVar5 = (uVar12 >> 1) + 8;
    iVar9 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    iVar7 = 0x20;
    if (uVar5 != 0) {
      iVar7 = 0x1f - iVar9;
    }
    uVar5 = (uVar12 >> 1) + 7;
    iVar9 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar5 == 0) {
      cVar10 = '\0';
    }
    else {
      cVar10 = '\x1f' - (char)iVar9;
    }
    iVar9 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar10 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    uVar12 = (int)((ulonglong)*plVar11 >> 0x20) + (int)*plVar11 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar11 + 0x14) = uVar12;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(plVar11 + 2) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         iVar8;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    FUN_1404b4e10(param_1);
  }
LAB_142a31a2b:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar13;
  }
  return param_2;
}



// FUNCTION 142a31a60 FUN_142a31a60 body=784 status=ok
// SIG undefined FUN_142a31a60(void)

int * FUN_142a31a60(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  void *_Dst;
  char cVar11;
  uint uVar12;
  longlong *plVar13;
  int iVar14;
  bool local_res8;
  
  iVar8 = 1;
  iVar14 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar9 = (int)param_1[6];
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar10 = *(int *)((longlong)iVar9 * 0x68 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar10;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)((longlong)iVar10 * 0x68 + *param_1) = 0xffffffff;
    }
  }
  plVar13 = (longlong *)param_1[4];
  *param_2 = iVar9;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar13 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
  plVar13 = (longlong *)((longlong)iVar9 * 0x68 + *param_1);
  lVar2 = param_3[1];
  *plVar13 = *(longlong *)*param_3;
  FPakEntry::FPakEntry(plVar13 + 1,lVar2);
  FString::FString(plVar13 + 10,lVar2 + 0x48);
  *(undefined4 *)(plVar13 + 0xc) = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar12 != 1) {
    lVar2 = *plVar13;
    iVar9 = iVar14;
    if (uVar12 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar10 = *(int *)((longlong)plVar7 +
                       ((longlong)((int)((ulonglong)lVar2 >> 0x20) * 0x17 + (int)lVar2) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar10 != -1) {
        do {
          iVar9 = iVar10;
          if (*(longlong *)((longlong)iVar10 * 0x68 + *param_1) == lVar2) break;
          iVar10 = *(int *)((longlong)iVar10 * 0x68 + 0x60 + *param_1);
          iVar9 = iVar14;
        } while (iVar10 != -1);
      }
    }
    local_res8 = iVar9 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar9 * 0x68 + *param_1);
      if (*(longlong *)((longlong)_Dst + 0x50) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)((longlong)_Dst + 0x38) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,plVar13,0x60);
      iVar8 = *param_2;
      bVar3 = (byte)iVar8 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x68 + *param_1) = iVar8;
      }
      puVar6 = (undefined4 *)((longlong)iVar8 * 0x68 + *param_1);
      *puVar6 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar14 = (int)param_1[6];
      }
      puVar6[1] = iVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar8;
      plVar13 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar13 == (longlong *)0x0) {
        plVar13 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar13 +
                       (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_142a31d47;
    }
  }
  if (3 < uVar12) {
    uVar5 = (uVar12 >> 1) + 8;
    iVar14 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar8 = 0x20;
    cVar11 = '\0';
    if (uVar5 != 0) {
      iVar8 = 0x1f - iVar14;
    }
    uVar5 = (uVar12 >> 1) + 7;
    iVar14 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar11 = '\x1f' - (char)iVar14;
    }
    iVar8 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar12 = (int)((ulonglong)*plVar13 >> 0x20) * 0x17 + (int)*plVar13 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar13 + 100) = uVar12;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(plVar13 + 0xc) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    FUN_142a4b680(param_1);
  }
LAB_142a31d47:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 142a31d70 FUN_142a31d70 body=4254 status=ok
// SIG undefined FUN_142a31d70(void)

void FUN_142a31d70(longlong param_1,longlong *param_2,short *param_3,char param_4,char param_5,
                  char param_6)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulonglong *puVar5;
  void *pvVar6;
  void *pvVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  uint uVar19;
  ulonglong *puVar21;
  void *pvVar22;
  longlong *plVar23;
  int iVar24;
  wchar_t *pwVar25;
  undefined4 uVar26;
  wchar_t *pwVar27;
  uint local_res8;
  void *local_res18;
  longlong *local_208;
  uint local_200;
  int local_1fc;
  wchar_t *local_1f8;
  int local_1f0;
  int local_1ec;
  undefined2 *local_1e8;
  int local_1e0;
  int iStack_1dc;
  void *local_1d8;
  wchar_t *local_1d0;
  undefined8 local_1c8;
  void *local_1c0;
  undefined8 local_1b8;
  void *local_1b0;
  undefined8 local_1a8;
  void *local_1a0;
  undefined8 local_198;
  void *local_190;
  undefined8 local_188;
  int local_180;
  uint uStack_17c;
  ulonglong *puStack_178;
  undefined4 local_170;
  undefined8 uStack_16c;
  undefined4 uStack_164;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  undefined8 uStack_14c;
  undefined4 uStack_144;
  undefined8 *local_140;
  void *local_138;
  undefined8 local_130;
  void *local_128;
  undefined8 local_120;
  wchar_t *local_118;
  undefined8 local_110;
  void *local_108;
  undefined8 local_100;
  longlong local_f8;
  ulonglong *local_f0;
  undefined8 uStack_e8;
  ulonglong *puStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulonglong *local_c8;
  undefined8 uStack_c0;
  ulonglong *local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  ulonglong *local_a0;
  undefined8 uStack_98;
  ulonglong *local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  ulonglong local_78;
  ulonglong *local_70;
  void *pvStack_68;
  ulonglong *puStack_60;
  undefined4 uStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong *plVar20;
  
  plVar23 = (longlong *)0x0;
  local_1e0 = 0;
  iStack_1dc = 0;
  uVar19 = 0;
  local_1e8 = (undefined2 *)0x0;
  if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
    lVar12 = -1;
    do {
      lVar12 = lVar12 + 1;
    } while (param_3[lVar12] != 0);
    iVar11 = (int)lVar12 + 1;
    iStack_1dc = 0;
    local_1e0 = iVar11;
    if (0 < iVar11) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1e8,0);
    }
    FGenericPlatformString::Memcpy(local_1e8,param_3,(longlong)iVar11 * 2);
    iVar11 = local_1e0;
    lVar12 = (longlong)local_1e0;
    if (((local_1e0 != 0) && (0 < local_1e0 + -1)) &&
       (local_1e8[(longlong)(local_1e0 + -1) + -1] != 0x2f)) {
      local_1e0 = local_1e0 + 1;
      if (iStack_1dc < local_1e0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1e8,iVar11);
      }
      local_1e8[lVar12 - (ulonglong)(iVar11 != 0)] = 0x2f;
      (local_1e8 + (lVar12 - (ulonglong)(iVar11 != 0)))[1] = 0;
    }
  }
  puVar18 = (undefined8 *)(param_1 + 0xd0);
  local_140 = puVar18;
  cVar2 = FString::StartsWith(&local_1e8,puVar18,1);
  if ((cVar2 != '\0') || (cVar2 = FString::StartsWith(puVar18,&local_1e8,1), cVar2 != '\0')) {
    local_f0 = (ulonglong *)(param_1 + 0x100);
    iVar11 = *(int *)(param_1 + 0x128);
    uStack_158 = (ulonglong *)(param_1 + 0x110);
    local_208 = (longlong *)0x0;
    local_res8 = 0;
    local_1fc = 0;
    local_160 = (void *)0x100000000;
    uStack_14c = 0;
    if (iVar11 != 0) {
      puVar5 = *(ulonglong **)(param_1 + 0x120);
      if (*(ulonglong **)(param_1 + 0x120) == (ulonglong *)0x0) {
        puVar5 = uStack_158;
      }
      uVar3 = (uint)*puVar5;
      plVar8 = plVar23;
      plVar20 = plVar23;
      while (uVar3 == 0) {
        iVar4 = (int)plVar8;
        uVar19 = (int)plVar20 + 0x20;
        plVar20 = (longlong *)(ulonglong)uVar19;
        plVar8 = (longlong *)(ulonglong)(iVar4 + 1U);
        uStack_14c = (ulonglong)uVar19 << 0x20;
        uVar16 = (ulonglong)local_160 >> 0x20;
        local_160 = (void *)CONCAT44((int)uVar16,iVar4 + 1U);
        if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_142a31f6f;
        uVar3 = *(uint *)((longlong)puVar5 + (longlong)iVar4 * 4 + 4);
      }
      uVar3 = -uVar3 & uVar3;
      iVar4 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      local_160 = (void *)CONCAT44(uVar3,SUB84(local_160,0));
      if (uVar3 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      iVar4 = (uVar19 - iVar4) + 0x1f;
      uStack_14c._4_4_ = (undefined4)((ulonglong)uStack_14c >> 0x20);
      uStack_14c = CONCAT44(uStack_14c._4_4_,iVar4);
      if (iVar11 < iVar4) {
LAB_142a31f6f:
        uStack_14c = CONCAT44(uStack_14c._4_4_,iVar11);
      }
    }
    local_150 = 0xffffffff;
    uStack_d8 = CONCAT44((int)uStack_14c,0xffffffff);
    uStack_d0 = uStack_14c._4_4_;
    uStack_cc = uStack_144;
    uStack_e8 = local_160;
    uStack_c0 = local_160;
    local_a8 = uStack_14c._4_4_;
    uStack_a4 = uStack_144;
    uStack_b0 = uStack_d8;
    plVar8 = plVar23;
    iVar4 = (int)uStack_14c;
    puStack_e0 = uStack_158;
    local_c8 = local_f0;
    local_b8 = uStack_158;
    if ((int)uStack_14c < iVar11) {
      do {
        puVar5 = local_c8;
        iVar11 = *(int *)(puVar18 + 1);
        lVar12 = (longlong)iVar4 * 0x68;
        puVar17 = (undefined8 *)(*local_c8 + lVar12);
        local_f8 = lVar12;
        if (iVar11 < 2) {
          local_1f8 = (wchar_t *)0x0;
          local_1f0 = *(int *)(puVar17 + 1);
          lVar13 = (longlong)local_1f0;
          pvVar22 = (void *)*puVar17;
          if (local_1f0 == 0) {
            local_1ec = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1f8,local_1f0,0);
            _guard_xfg_dispatch_icall_nop(local_1f8,pvVar22,lVar13 * 2);
          }
        }
        else {
          iVar4 = *(int *)(puVar17 + 1) + -1;
          if (*(int *)(puVar17 + 1) == 0) {
            iVar4 = 0;
          }
          if ((iVar11 != 0) || (iVar24 = 1, iVar4 == 0)) {
            iVar24 = 0;
          }
          pvVar22 = (void *)*puVar18;
          local_1d0 = (wchar_t *)0x0;
          pwVar27 = (wchar_t *)0x0;
          local_1c8 = CONCAT44(local_1c8._4_4_,iVar11);
          if ((iVar11 == 0) && (iVar24 + iVar4 == 0)) {
            local_1c8 = 0;
            uVar16 = 0;
            iVar11 = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1d0,iVar11 + iVar24 + iVar4,0);
            pwVar27 = local_1d0;
            _guard_xfg_dispatch_icall_nop(local_1d0,pvVar22,(longlong)iVar11 * 2);
            uVar16 = local_1c8 & 0xffffffff;
            iVar11 = local_1c8._4_4_;
          }
          iVar14 = (int)uVar16;
          pvVar22 = (void *)*puVar17;
          iVar24 = iVar14;
          if (iVar4 != 0) {
            iVar24 = iVar4 + (uint)(iVar14 == 0) + iVar14;
            local_1c8._0_4_ = iVar24;
            if (iVar11 < iVar24) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1d0,uVar16);
              pwVar27 = local_1d0;
              iVar11 = local_1c8._4_4_;
            }
            iVar24 = (int)local_1c8;
            _guard_xfg_dispatch_icall_nop
                      (pwVar27 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)),pvVar22,
                       (longlong)iVar4 * 2);
            (pwVar27 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)))[iVar4] = L'\0';
          }
          plVar23 = (longlong *)(ulonglong)local_res8;
          local_1d0 = (wchar_t *)0x0;
          local_1c8 = 0;
          lVar12 = local_f8;
          puVar5 = local_c8;
          local_1f8 = pwVar27;
          local_1f0 = iVar24;
          local_1ec = iVar11;
        }
        cVar2 = FString::StartsWith(&local_1f8,&local_1e8);
        plVar8 = local_208;
        if (cVar2 != '\0') {
          if (param_6 == '\x01') {
            if (param_4 != '\0') {
              uStack_17c = 1;
              local_a0 = (ulonglong *)(*puVar5 + 0x10 + lVar12);
              iVar11 = (int)local_a0[5];
              puStack_178 = local_a0 + 2;
              uVar19 = 0;
              local_180 = 0;
              uStack_16c = 0;
              if (iVar11 != 0) {
                puVar21 = (ulonglong *)local_a0[4];
                if ((ulonglong *)local_a0[4] == (ulonglong *)0x0) {
                  puVar21 = puStack_178;
                }
                uVar3 = (uint)*puVar21;
                while (uVar3 == 0) {
                  lVar13 = (longlong)local_180;
                  uVar19 = uVar19 + 0x20;
                  iVar4 = local_180 + 1;
                  uStack_16c = (ulonglong)uVar19 << 0x20;
                  bVar1 = (int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_180;
                  local_180 = iVar4;
                  if (bVar1) goto LAB_142a3220f;
                  uVar3 = *(uint *)((longlong)puVar21 + lVar13 * 4 + 4);
                }
                uStack_17c = -uVar3 & uVar3;
                iVar4 = 0x1f;
                if (uStack_17c != 0) {
                  for (; uStack_17c >> iVar4 == 0; iVar4 = iVar4 + -1) {
                  }
                }
                if (uStack_17c == 0) {
                  iVar4 = 0x20;
                }
                else {
                  iVar4 = 0x1f - iVar4;
                }
                iVar4 = (uVar19 - iVar4) + 0x1f;
                uStack_16c._4_4_ = (undefined4)((ulonglong)uStack_16c >> 0x20);
                uStack_16c = CONCAT44(uStack_16c._4_4_,iVar4);
                if (iVar11 < iVar4) {
LAB_142a3220f:
                  uStack_16c = CONCAT44(uStack_16c._4_4_,iVar11);
                }
              }
              local_170 = 0xffffffff;
              uStack_98 = (void *)CONCAT44(uStack_17c,local_180);
              uStack_58 = 0xffffffff;
              iStack_54 = (int)uStack_16c;
              uStack_50 = uStack_16c._4_4_;
              uStack_4c = uStack_164;
              uStack_88 = CONCAT44((int)uStack_16c,0xffffffff);
              local_80 = uStack_16c._4_4_;
              uStack_7c = uStack_164;
              iVar4 = (int)uStack_16c;
              local_90 = puStack_178;
              local_70 = local_a0;
              pvStack_68 = uStack_98;
              puStack_60 = puStack_178;
              if ((int)uStack_16c < iVar11) {
                do {
                  puVar18 = (undefined8 *)(*puVar5 + lVar12);
                  local_1d8 = (void *)*local_a0;
                  iVar11 = *(int *)(local_140 + 1);
                  iVar24 = *(int *)(puVar18 + 1);
                  if (iVar11 < 2) {
                    pvVar22 = (void *)*puVar18;
                    local_res18 = (void *)0x0;
                    local_138 = (void *)0x0;
                    local_130 = CONCAT44(local_130._4_4_,iVar24);
                    if (iVar24 == 0) {
                      local_130 = 0;
                      iVar24 = 0;
                      iVar11 = 0;
                    }
                    else {
                      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_138,iVar24,0);
                      local_res18 = local_138;
                      _guard_xfg_dispatch_icall_nop(local_138,pvVar22,(longlong)iVar24 * 2);
                      iVar24 = (int)local_130;
                      iVar11 = local_130._4_4_;
                    }
                  }
                  else {
                    iVar14 = iVar24 + -1;
                    if (iVar24 == 0) {
                      iVar14 = 0;
                    }
                    if ((iVar11 != 0) || (iVar24 = 1, iVar14 == 0)) {
                      iVar24 = 0;
                    }
                    pvVar22 = (void *)*local_140;
                    local_1b8 = CONCAT44(local_1b8._4_4_,iVar11);
                    local_res18 = (void *)0x0;
                    local_1c0 = (void *)0x0;
                    if ((iVar11 == 0) && (iVar24 + iVar14 == 0)) {
                      local_1b8 = 0;
                      uVar16 = 0;
                      iVar11 = 0;
                    }
                    else {
                      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                                (&local_1c0,iVar24 + iVar14 + iVar11,0);
                      local_res18 = local_1c0;
                      _guard_xfg_dispatch_icall_nop(local_1c0,pvVar22,(longlong)iVar11 * 2);
                      uVar16 = local_1b8 & 0xffffffff;
                      iVar11 = local_1b8._4_4_;
                    }
                    iVar10 = (int)uVar16;
                    pvVar22 = (void *)*puVar18;
                    iVar24 = iVar10;
                    if (iVar14 != 0) {
                      iVar24 = (uint)(iVar10 == 0) + iVar14 + iVar10;
                      local_1b8._0_4_ = iVar24;
                      if (iVar11 < iVar24) {
                        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c0,uVar16);
                        local_res18 = local_1c0;
                        iVar11 = local_1b8._4_4_;
                      }
                      iVar24 = (int)local_1b8;
                      pvVar6 = (void *)((longlong)local_res18 +
                                       ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
                      _guard_xfg_dispatch_icall_nop(pvVar6,pvVar22,(longlong)iVar14 * 2);
                      *(undefined2 *)((longlong)iVar14 * 2 + (longlong)pvVar6) = 0;
                    }
                    local_1c0 = (void *)0x0;
                    local_130 = CONCAT44(iVar11,(int)local_130);
                    local_1b8 = 0;
                  }
                  pvVar22 = local_res18;
                  pvVar6 = (void *)0x0;
                  puVar18 = (undefined8 *)((longlong)iVar4 * 0x20 + (longlong)local_1d8);
                  iVar4 = *(int *)(puVar18 + 1);
                  if (iVar24 < 2) {
                    pvVar22 = (void *)*puVar18;
                    local_108 = (void *)0x0;
                    local_100 = CONCAT44(local_100._4_4_,iVar4);
                    if (iVar4 == 0) {
                      iVar11 = 0;
                      iVar14 = 0;
                    }
                    else {
                      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_108,iVar4,0);
                      pvVar6 = local_108;
                      _guard_xfg_dispatch_icall_nop(local_108,pvVar22,(longlong)iVar4 * 2);
                      iVar11 = (int)local_100;
                      iVar14 = local_100._4_4_;
                    }
                  }
                  else {
                    pvVar7 = (void *)(ulonglong)(iVar4 - 1);
                    if (iVar4 == 0) {
                      pvVar7 = pvVar6;
                    }
                    iVar4 = (int)pvVar7;
                    if ((iVar24 != 0) || (pvVar7 = (void *)0x1, iVar4 == 0)) {
                      pvVar7 = pvVar6;
                    }
                    local_res18 = (void *)0x0;
                    local_130 = 0;
                    local_1b0 = pvVar22;
                    local_1a8._4_4_ = iVar11;
                    if (iVar11 < iVar24 + (int)pvVar7 + iVar4) {
                      local_1a8._0_4_ = iVar24;
                      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_1b0);
                      iVar24 = (int)local_1a8;
                    }
                    pvVar22 = (void *)*puVar18;
                    pvVar6 = local_1b0;
                    iVar14 = local_1a8._4_4_;
                    iVar11 = iVar24;
                    if (iVar4 != 0) {
                      local_1a8._0_4_ = (uint)(iVar24 == 0) + iVar4 + iVar24;
                      if (local_1a8._4_4_ < (int)local_1a8) {
                        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b0,iVar24);
                      }
                      iVar14 = local_1a8._4_4_;
                      iVar11 = (int)local_1a8;
                      pvVar6 = local_1b0;
                      pvVar7 = (void *)((longlong)local_1b0 +
                                       ((longlong)iVar24 - (ulonglong)(iVar24 != 0)) * 2);
                      _guard_xfg_dispatch_icall_nop(pvVar7,pvVar22,(longlong)iVar4 * 2);
                      *(undefined2 *)((longlong)pvVar7 + (longlong)iVar4 * 2) = 0;
                    }
                    local_1b0 = (void *)0x0;
                    local_1a8 = 0;
                  }
                  iVar4 = (int)param_2[1];
                  *(int *)(param_2 + 1) = iVar4 + 1;
                  if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
                    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar4);
                  }
                  puVar5 = (ulonglong *)((longlong)iVar4 * 0x10 + *param_2);
                  local_108 = (void *)0x0;
                  local_100 = 0;
                  *puVar5 = (ulonglong)pvVar6;
                  *(int *)(puVar5 + 1) = iVar11;
                  *(int *)((longlong)puVar5 + 0xc) = iVar14;
                  if (local_res18 != (void *)0x0) {
                    FMemory::Free(local_res18);
                  }
                  uStack_88 = CONCAT44(uStack_88._4_4_,(uint)uStack_88 & ~uStack_98._4_4_);
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_98);
                  puVar18 = local_140;
                  lVar12 = local_f8;
                  puVar5 = local_c8;
                  iVar4 = uStack_88._4_4_;
                } while (uStack_88._4_4_ < (int)(uint)local_90[3]);
              }
            }
            if (param_5 != '\0') {
              pwVar27 = L"";
              if (local_1f0 != 0) {
                pwVar27 = local_1f8;
              }
              puVar9 = &DAT_143f3eda8;
              if (local_1e0 != 0) {
                puVar9 = local_1e8;
              }
              iVar11 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,pwVar27);
              if (iVar11 != 0) {
                lVar12 = (longlong)(int)local_res8;
                local_200 = local_res8 + 1;
                if (local_1fc < (int)local_200) {
                  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_208,local_res8);
                }
                pwVar27 = local_1f8;
                local_res8 = local_200;
                plVar8 = local_208;
                plVar23 = local_208 + lVar12 * 2;
                *plVar23 = 0;
                lVar12 = (longlong)local_1f0;
                *(int *)(plVar23 + 1) = local_1f0;
                if (local_1f0 == 0) {
                  *(undefined4 *)((longlong)plVar23 + 0xc) = 0;
                  plVar23 = (longlong *)(ulonglong)local_200;
                }
                else {
                  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar23,local_1f0,0);
                  _guard_xfg_dispatch_icall_nop((void *)*plVar23,pwVar27,lVar12 * 2);
                  plVar23 = (longlong *)(ulonglong)local_res8;
                }
                goto LAB_142a32cb5;
              }
            }
            plVar23 = (longlong *)(ulonglong)local_res8;
            plVar8 = local_208;
          }
          else {
            iVar4 = 0;
            iVar11 = local_1f0 + -1;
            if (local_1f0 == 0) {
              iVar11 = 0;
            }
            iVar24 = local_1e0 + -1;
            if (local_1e0 == 0) {
              iVar24 = iVar4;
            }
            if (iVar24 < iVar11) {
              if (local_1e0 != 0) {
                iVar4 = local_1e0 + -1;
              }
              iVar11 = FUN_141592950(&local_1f8,&DAT_144ccf4a0,0,0,iVar4 + 1);
            }
            else {
              iVar11 = -1;
            }
            if ((param_4 != '\0') && (iVar11 == -1)) {
              uStack_17c = 1;
              local_f0 = (ulonglong *)(*puVar5 + 0x10 + lVar12);
              iVar4 = (int)local_f0[5];
              puStack_178 = local_f0 + 2;
              uVar19 = 0;
              local_180 = 0;
              uStack_16c = 0;
              if (iVar4 != 0) {
                puVar21 = (ulonglong *)local_f0[4];
                if ((ulonglong *)local_f0[4] == (ulonglong *)0x0) {
                  puVar21 = puStack_178;
                }
                uVar3 = (uint)*puVar21;
                while (uVar3 == 0) {
                  lVar13 = (longlong)local_180;
                  uVar19 = uVar19 + 0x20;
                  iVar24 = local_180 + 1;
                  uStack_16c = (ulonglong)uVar19 << 0x20;
                  bVar1 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_180;
                  local_180 = iVar24;
                  if (bVar1) goto LAB_142a327bf;
                  uVar3 = *(uint *)((longlong)puVar21 + lVar13 * 4 + 4);
                }
                uStack_17c = -uVar3 & uVar3;
                iVar24 = 0x1f;
                if (uStack_17c != 0) {
                  for (; uStack_17c >> iVar24 == 0; iVar24 = iVar24 + -1) {
                  }
                }
                if (uStack_17c == 0) {
                  iVar24 = 0x20;
                }
                else {
                  iVar24 = 0x1f - iVar24;
                }
                iVar24 = (uVar19 - iVar24) + 0x1f;
                uStack_16c._4_4_ = (undefined4)((ulonglong)uStack_16c >> 0x20);
                uStack_16c = CONCAT44(uStack_16c._4_4_,iVar24);
                if (iVar4 < iVar24) {
LAB_142a327bf:
                  uStack_16c = CONCAT44(uStack_16c._4_4_,iVar4);
                }
              }
              local_170 = 0xffffffff;
              uStack_e8 = (void *)CONCAT44(uStack_17c,local_180);
              uStack_58 = 0xffffffff;
              iStack_54 = (int)uStack_16c;
              uStack_50 = uStack_16c._4_4_;
              uStack_4c = uStack_164;
              uStack_d8 = CONCAT44((int)uStack_16c,0xffffffff);
              uStack_d0 = uStack_16c._4_4_;
              uStack_cc = uStack_164;
              iVar24 = (int)uStack_16c;
              puStack_e0 = puStack_178;
              local_70 = local_f0;
              pvStack_68 = uStack_e8;
              puStack_60 = puStack_178;
              if ((int)uStack_16c < iVar4) {
                do {
                  pvVar22 = (void *)0x0;
                  puVar18 = (undefined8 *)(*puVar5 + lVar12);
                  iVar4 = *(int *)(local_140 + 1);
                  local_78 = *local_f0;
                  iVar14 = *(int *)(puVar18 + 1);
                  if (iVar4 < 2) {
                    pvVar6 = (void *)*puVar18;
                    local_1d8 = (void *)0x0;
                    local_128 = (void *)0x0;
                    local_120 = CONCAT44(local_120._4_4_,iVar14);
                    if (iVar14 == 0) {
                      local_120 = 0;
                      iVar10 = 0;
                      iVar4 = 0;
                    }
                    else {
                      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_128,iVar14,0);
                      pvVar22 = local_128;
                      local_1d8 = local_128;
                      _guard_xfg_dispatch_icall_nop(local_128,pvVar6,(longlong)iVar14 * 2);
                      iVar10 = (int)local_120;
                      iVar4 = local_120._4_4_;
                    }
                  }
                  else {
                    pvVar6 = (void *)(ulonglong)(iVar14 - 1);
                    if (iVar14 == 0) {
                      pvVar6 = pvVar22;
                    }
                    iVar14 = (int)pvVar6;
                    if ((iVar4 != 0) || (pvVar6 = (void *)0x1, iVar14 == 0)) {
                      pvVar6 = pvVar22;
                    }
                    pvVar7 = (void *)*local_140;
                    local_198 = CONCAT44(local_198._4_4_,iVar4);
                    iVar10 = iVar14 + (int)pvVar6;
                    local_1d8 = (void *)0x0;
                    local_1a0 = (void *)0x0;
                    if ((iVar4 == 0) && (iVar10 == 0)) {
                      local_198 = 0;
                      uVar16 = 0;
                      iVar4 = 0;
                    }
                    else {
                      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1a0,iVar10 + iVar4,0);
                      pvVar22 = local_1a0;
                      local_1d8 = local_1a0;
                      _guard_xfg_dispatch_icall_nop(local_1a0,pvVar7,(longlong)iVar4 * 2);
                      uVar16 = local_198 & 0xffffffff;
                      iVar4 = local_198._4_4_;
                    }
                    iVar15 = (int)uVar16;
                    pvVar6 = (void *)*puVar18;
                    iVar10 = iVar15;
                    if (iVar14 != 0) {
                      iVar10 = (uint)(iVar15 == 0) + iVar14 + iVar15;
                      local_198._0_4_ = iVar10;
                      if (iVar4 < iVar10) {
                        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a0,uVar16);
                        local_1d8 = local_1a0;
                        pvVar22 = local_1a0;
                        iVar4 = local_198._4_4_;
                      }
                      iVar10 = (int)local_198;
                      pvVar7 = (void *)((longlong)pvVar22 +
                                       ((longlong)iVar15 - (ulonglong)(iVar15 != 0)) * 2);
                      _guard_xfg_dispatch_icall_nop(pvVar7,pvVar6,(longlong)iVar14 * 2);
                      *(undefined2 *)((longlong)iVar14 * 2 + (longlong)pvVar7) = 0;
                    }
                    local_1a0 = (void *)0x0;
                    local_120 = CONCAT44(iVar4,(int)local_120);
                    local_198 = 0;
                  }
                  pvVar6 = (void *)0x0;
                  puVar18 = (undefined8 *)((longlong)iVar24 * 0x20 + local_78);
                  iVar24 = *(int *)(puVar18 + 1);
                  if (iVar10 < 2) {
                    pvVar22 = (void *)*puVar18;
                    local_160 = (void *)0x0;
                    uStack_158 = (ulonglong *)CONCAT44(uStack_158._4_4_,iVar24);
                    if (iVar24 == 0) {
                      iVar4 = 0;
                      iVar14 = 0;
                    }
                    else {
                      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_160,iVar24,0);
                      pvVar6 = local_160;
                      _guard_xfg_dispatch_icall_nop(local_160,pvVar22,(longlong)iVar24 * 2);
                      iVar4 = (int)uStack_158;
                      iVar14 = uStack_158._4_4_;
                    }
                  }
                  else {
                    pvVar7 = (void *)(ulonglong)(iVar24 - 1);
                    if (iVar24 == 0) {
                      pvVar7 = pvVar6;
                    }
                    iVar24 = (int)pvVar7;
                    if ((iVar10 != 0) || (pvVar7 = (void *)0x1, iVar24 == 0)) {
                      pvVar7 = pvVar6;
                    }
                    local_1d8 = (void *)0x0;
                    local_120 = 0;
                    local_190 = pvVar22;
                    local_188._4_4_ = iVar4;
                    if (iVar4 < iVar10 + (int)pvVar7 + iVar24) {
                      local_188._0_4_ = iVar10;
                      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_190);
                      iVar10 = (int)local_188;
                    }
                    pvVar22 = (void *)*puVar18;
                    pvVar6 = local_190;
                    iVar14 = local_188._4_4_;
                    iVar4 = iVar10;
                    if (iVar24 != 0) {
                      local_188._0_4_ = iVar10 + (uint)(iVar10 == 0) + iVar24;
                      if (local_188._4_4_ < (int)local_188) {
                        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_190,iVar10);
                      }
                      iVar14 = local_188._4_4_;
                      iVar4 = (int)local_188;
                      pvVar6 = local_190;
                      pvVar7 = (void *)((longlong)local_190 +
                                       ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
                      _guard_xfg_dispatch_icall_nop(pvVar7,pvVar22,(longlong)iVar24 * 2);
                      *(undefined2 *)((longlong)iVar24 * 2 + (longlong)pvVar7) = 0;
                    }
                    local_190 = (void *)0x0;
                    local_188 = 0;
                  }
                  iVar24 = (int)param_2[1];
                  *(int *)(param_2 + 1) = iVar24 + 1;
                  if (*(int *)((longlong)param_2 + 0xc) < iVar24 + 1) {
                    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar24);
                  }
                  puVar5 = (ulonglong *)((longlong)iVar24 * 0x10 + *param_2);
                  local_160 = (void *)0x0;
                  uStack_158 = (ulonglong *)0x0;
                  *puVar5 = (ulonglong)pvVar6;
                  *(int *)(puVar5 + 1) = iVar4;
                  *(int *)((longlong)puVar5 + 0xc) = iVar14;
                  if (local_1d8 != (void *)0x0) {
                    FMemory::Free(local_1d8);
                  }
                  uStack_d8 = CONCAT44(uStack_d8._4_4_,(uint)uStack_d8 & ~uStack_e8._4_4_);
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_e8);
                  puVar18 = local_140;
                  lVar12 = local_f8;
                  puVar5 = local_c8;
                  iVar24 = uStack_d8._4_4_;
                } while (uStack_d8._4_4_ < (int)(uint)puStack_e0[3]);
              }
            }
            pwVar27 = (wchar_t *)0x0;
            if ((param_5 == '\0') || (iVar11 < 0)) {
              plVar23 = (longlong *)(ulonglong)local_res8;
              plVar8 = local_208;
            }
            else {
              iVar11 = iVar11 + 1;
              iVar4 = 0;
              if (local_1f0 == 0) {
                pwVar25 = L"";
                iVar24 = iVar4;
              }
              else {
                pwVar25 = local_1f8;
                iVar24 = local_1f0 + -1;
              }
              if ((-1 < iVar11) && (iVar4 = iVar24, iVar11 < iVar24)) {
                iVar4 = iVar11;
              }
              local_118 = (wchar_t *)0x0;
              uVar26 = 0;
              uVar19 = iVar4 + 1;
              if (iVar4 == 0) {
                uVar19 = 0;
              }
              local_110 = (ulonglong)uVar19;
              if (0 < (int)uVar19) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
                pwVar27 = local_118;
                uVar19 = (uint)local_110;
                uVar26 = local_110._4_4_;
                if (0 < (int)(uint)local_110) {
                  wcsncpy(local_118,pwVar25,(longlong)iVar4);
                  pwVar27[iVar4] = L'\0';
                }
              }
              plVar23 = (longlong *)(longlong)(int)local_res8;
              plVar20 = local_208 + (longlong)plVar23 * 2;
              for (plVar8 = local_208; plVar8 != plVar20; plVar8 = plVar8 + 2) {
                pwVar25 = L"";
                if (uVar19 != 0) {
                  pwVar25 = pwVar27;
                }
                if ((int)plVar8[1] == 0) {
                  puVar9 = &DAT_143f3eda8;
                }
                else {
                  puVar9 = (undefined2 *)*plVar8;
                }
                iVar11 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,pwVar25);
                if (iVar11 == 0) {
                  if ((int)((longlong)plVar8 - (longlong)local_208 >> 4) != -1) {
                    plVar8 = local_208;
                    if (pwVar27 != (wchar_t *)0x0) {
                      FMemory::Free(pwVar27);
                      plVar8 = local_208;
                    }
                    goto LAB_142a32cb5;
                  }
                  break;
                }
              }
              local_200 = local_res8 + 1;
              if (local_1fc < (int)local_200) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_208,local_res8);
              }
              local_208[(longlong)plVar23 * 2] = (longlong)pwVar27;
              *(undefined4 *)((longlong)local_208 + (longlong)plVar23 * 0x10 + 0xc) = uVar26;
              local_118 = (wchar_t *)0x0;
              local_110 = 0;
              *(uint *)(local_208 + (longlong)plVar23 * 2 + 1) = uVar19;
              plVar23 = (longlong *)(ulonglong)local_200;
              plVar8 = local_208;
              local_res8 = local_200;
            }
          }
        }
LAB_142a32cb5:
        if (local_1f8 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        uStack_b0 = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0 & ~uStack_c0._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_c0);
        iVar4 = uStack_b0._4_4_;
      } while (uStack_b0._4_4_ < (int)(uint)local_b8[3]);
      iVar11 = (int)plVar23;
      if (iVar11 != 0) {
        iVar4 = (int)param_2[1];
        if (*(int *)((longlong)param_2 + 0xc) < iVar4 + iVar11) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2);
          iVar4 = (int)param_2[1];
        }
        uVar16 = (ulonglong)plVar23 & 0xffffffff;
        puVar18 = (undefined8 *)((longlong)iVar4 * 0x10 + *param_2);
        do {
          *puVar18 = 0;
          iVar4 = (int)plVar8[1];
          pvVar22 = (void *)*plVar8;
          *(int *)(puVar18 + 1) = iVar4;
          if (iVar4 == 0) {
            *(undefined4 *)((longlong)puVar18 + 0xc) = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar18,iVar4,0);
            _guard_xfg_dispatch_icall_nop((void *)*puVar18,pvVar22,(longlong)iVar4 * 2);
          }
          puVar18 = puVar18 + 2;
          plVar8 = plVar8 + 2;
          uVar19 = (int)uVar16 - 1;
          uVar16 = (ulonglong)uVar19;
        } while (uVar19 != 0);
        *(int *)(param_2 + 1) = (int)param_2[1] + iVar11;
        plVar8 = local_208;
      }
    }
    uVar19 = (uint)plVar23;
    plVar20 = plVar8;
    while (uVar19 != 0) {
      if (*plVar20 != 0) {
        FMemory::Free();
      }
      plVar20 = plVar20 + 2;
      uVar19 = (int)plVar23 - 1;
      plVar23 = (longlong *)(ulonglong)uVar19;
    }
    if (plVar8 != (longlong *)0x0) {
      FMemory::Free(plVar8);
    }
  }
  if (local_1e8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142a32e20 FUN_142a32e20 body=3952 status=ok
// SIG undefined FUN_142a32e20(void)

void FUN_142a32e20(longlong param_1,undefined8 param_2,short *param_3,char param_4,char param_5,
                  char param_6)

{
  bool bVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  undefined2 *puVar8;
  int iVar9;
  int iVar10;
  wchar_t *pwVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  void *pvVar19;
  longlong *plVar20;
  uint uVar21;
  uint *puVar22;
  void *pvVar23;
  void *pvVar24;
  longlong *plVar25;
  wchar_t *pwVar26;
  longlong *plVar27;
  undefined1 local_res18 [8];
  char local_res20;
  wchar_t *local_208;
  int local_200;
  int local_1fc;
  undefined2 *local_1f8;
  int local_1f0;
  int iStack_1ec;
  longlong *local_1e8;
  undefined8 local_1e0;
  wchar_t *local_1d8;
  undefined8 local_1d0;
  void *local_1c8;
  undefined8 local_1c0;
  void *local_1b8;
  undefined8 local_1b0;
  void *local_1a8;
  undefined8 local_1a0;
  void *local_198;
  undefined8 local_190;
  int local_188;
  uint uStack_184;
  uint *puStack_180;
  undefined4 local_178;
  undefined8 uStack_174;
  undefined4 uStack_16c;
  undefined8 *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  undefined8 uStack_14c;
  undefined4 uStack_144;
  wchar_t *local_140;
  undefined8 local_138;
  void *local_130;
  undefined8 local_128;
  void *local_120;
  int local_118;
  int local_114;
  void *local_110;
  undefined8 local_108;
  longlong local_100;
  void *local_f8;
  longlong *local_f0;
  undefined8 uStack_e8;
  uint *puStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong *local_c8;
  undefined8 uStack_c0;
  uint *local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  longlong *local_a0;
  undefined8 uStack_98;
  uint *local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined1 local_78 [8];
  longlong *local_70;
  void *pvStack_68;
  uint *puStack_60;
  undefined4 uStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  uVar16 = 0;
  local_1f0 = 0;
  iStack_1ec = 0;
  local_1f8 = (undefined2 *)0x0;
  local_res20 = param_4;
  if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
    lVar13 = -1;
    do {
      lVar13 = lVar13 + 1;
    } while (param_3[lVar13] != 0);
    iVar12 = (int)lVar13 + 1;
    iStack_1ec = 0;
    local_1f0 = iVar12;
    if (0 < iVar12) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1f8,0);
    }
    FGenericPlatformString::Memcpy(local_1f8,param_3,(longlong)iVar12 * 2);
    iVar12 = local_1f0;
    lVar13 = (longlong)local_1f0;
    if (((local_1f0 != 0) && (0 < local_1f0 + -1)) &&
       (local_1f8[(longlong)(local_1f0 + -1) + -1] != 0x2f)) {
      local_1f0 = local_1f0 + 1;
      if (iStack_1ec < local_1f0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1f8,iVar12);
      }
      local_1f8[lVar13 - (ulonglong)(iVar12 != 0)] = 0x2f;
      (local_1f8 + (lVar13 - (ulonglong)(iVar12 != 0)))[1] = 0;
    }
  }
  puVar18 = (undefined8 *)(param_1 + 0xd0);
  local_168 = puVar18;
  cVar3 = FString::StartsWith(&local_1f8,puVar18,1);
  if ((cVar3 != '\0') || (cVar3 = FString::StartsWith(puVar18,&local_1f8,1), cVar3 != '\0')) {
    local_f0 = (longlong *)(param_1 + 0x100);
    local_1e8 = (longlong *)0x0;
    iVar12 = *(int *)(param_1 + 0x128);
    uStack_158 = (uint *)(param_1 + 0x110);
    local_1e0 = 0;
    uVar21 = 0;
    local_160 = (void *)0x100000000;
    uStack_14c = 0;
    if (iVar12 != 0) {
      puVar22 = *(uint **)(param_1 + 0x120);
      if (*(uint **)(param_1 + 0x120) == (uint *)0x0) {
        puVar22 = uStack_158;
      }
      uVar4 = *puVar22;
      iVar5 = 0;
      while (uVar4 == 0) {
        uVar21 = uVar21 + 0x20;
        uStack_14c = (ulonglong)uVar21 << 0x20;
        uVar15 = (ulonglong)local_160 >> 0x20;
        local_160 = (void *)CONCAT44((int)uVar15,iVar5 + 1);
        if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_142a3300f;
        uVar4 = puVar22[(longlong)iVar5 + 1];
        iVar5 = iVar5 + 1;
      }
      uVar4 = -uVar4 & uVar4;
      iVar5 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      local_160 = (void *)CONCAT44(uVar4,SUB84(local_160,0));
      if (uVar4 == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      iVar5 = (uVar21 - iVar5) + 0x1f;
      uStack_14c._4_4_ = (undefined4)((ulonglong)uStack_14c >> 0x20);
      uStack_14c = CONCAT44(uStack_14c._4_4_,iVar5);
      if (iVar12 < iVar5) {
LAB_142a3300f:
        uStack_14c = CONCAT44(uStack_14c._4_4_,iVar12);
      }
    }
    local_150 = 0xffffffff;
    uStack_d8 = CONCAT44((int)uStack_14c,0xffffffff);
    uStack_d0 = uStack_14c._4_4_;
    uStack_cc = uStack_144;
    uStack_e8 = local_160;
    uStack_c0 = local_160;
    local_a8 = uStack_14c._4_4_;
    uStack_a4 = uStack_144;
    uStack_b0 = uStack_d8;
    iVar5 = (int)uStack_14c;
    puStack_e0 = uStack_158;
    local_c8 = local_f0;
    local_b8 = uStack_158;
    if ((int)uStack_14c < iVar12) {
      do {
        plVar20 = local_c8;
        pwVar11 = (wchar_t *)0x0;
        iVar12 = *(int *)(puVar18 + 1);
        lVar13 = (longlong)iVar5 * 0x68;
        puVar17 = (undefined8 *)(*local_c8 + lVar13);
        local_100 = lVar13;
        if (iVar12 < 2) {
          local_208 = (wchar_t *)0x0;
          local_200 = *(int *)(puVar17 + 1);
          lVar14 = (longlong)local_200;
          pvVar24 = (void *)*puVar17;
          if (local_200 == 0) {
            local_1fc = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_208,local_200,0);
            _guard_xfg_dispatch_icall_nop(local_208,pvVar24,lVar14 * 2);
          }
        }
        else {
          pwVar26 = (wchar_t *)(ulonglong)(*(int *)(puVar17 + 1) - 1);
          if (*(int *)(puVar17 + 1) == 0) {
            pwVar26 = pwVar11;
          }
          iVar5 = (int)pwVar26;
          if ((iVar12 != 0) || (iVar7 = 1, iVar5 == 0)) {
            iVar7 = 0;
          }
          pvVar24 = (void *)*puVar18;
          local_1d8 = (wchar_t *)0x0;
          local_1d0 = CONCAT44(local_1d0._4_4_,iVar12);
          if ((iVar12 == 0) && (iVar7 + iVar5 == 0)) {
            local_1d0 = 0;
            uVar15 = 0;
            pwVar26 = pwVar11;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1d8,iVar12 + iVar7 + iVar5,0);
            pwVar26 = local_1d8;
            _guard_xfg_dispatch_icall_nop(local_1d8,pvVar24,(longlong)iVar12 * 2);
            pwVar11 = (wchar_t *)(local_1d0 >> 0x20);
            uVar15 = local_1d0 & 0xffffffff;
          }
          iVar9 = (int)uVar15;
          iVar7 = (int)pwVar11;
          pvVar24 = (void *)*puVar17;
          iVar12 = iVar9;
          if (iVar5 != 0) {
            iVar12 = iVar9 + (uint)(iVar9 == 0) + iVar5;
            local_1d0._0_4_ = iVar12;
            if (iVar7 < iVar12) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1d8,uVar15);
              pwVar26 = local_1d8;
              iVar7 = local_1d0._4_4_;
            }
            iVar12 = (int)local_1d0;
            _guard_xfg_dispatch_icall_nop
                      (pwVar26 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)),pvVar24,
                       (longlong)iVar5 * 2);
            (pwVar26 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)))[iVar5] = L'\0';
          }
          local_1d8 = (wchar_t *)0x0;
          local_1d0 = 0;
          puVar18 = local_168;
          lVar13 = local_100;
          plVar20 = local_c8;
          local_208 = pwVar26;
          local_200 = iVar12;
          local_1fc = iVar7;
        }
        cVar3 = FString::StartsWith(&local_208,&local_1f8);
        if (cVar3 != '\0') {
          if (param_6 == '\x01') {
            iVar12 = (int)uVar16;
            if (local_res20 != '\0') {
              uStack_184 = 1;
              local_a0 = (longlong *)(lVar13 + 0x10 + *plVar20);
              iVar5 = (int)local_a0[5];
              puStack_180 = (uint *)(local_a0 + 2);
              uVar21 = 0;
              local_188 = 0;
              uStack_174 = 0;
              if (iVar5 != 0) {
                puVar22 = (uint *)local_a0[4];
                if ((uint *)local_a0[4] == (uint *)0x0) {
                  puVar22 = puStack_180;
                }
                uVar4 = *puVar22;
                local_188 = 0;
                while (uVar4 == 0) {
                  lVar14 = (longlong)local_188;
                  uVar21 = uVar21 + 0x20;
                  iVar7 = local_188 + 1;
                  uStack_174 = (ulonglong)uVar21 << 0x20;
                  bVar1 = (int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_188;
                  local_188 = iVar7;
                  if (bVar1) goto LAB_142a332cf;
                  uVar4 = puVar22[lVar14 + 1];
                }
                uStack_184 = -uVar4 & uVar4;
                iVar7 = 0x1f;
                if (uStack_184 != 0) {
                  for (; uStack_184 >> iVar7 == 0; iVar7 = iVar7 + -1) {
                  }
                }
                if (uStack_184 == 0) {
                  iVar7 = 0x20;
                }
                else {
                  iVar7 = 0x1f - iVar7;
                }
                iVar7 = (uVar21 - iVar7) + 0x1f;
                uStack_174._4_4_ = (undefined4)((ulonglong)uStack_174 >> 0x20);
                uStack_174 = CONCAT44(uStack_174._4_4_,iVar7);
                if (iVar5 < iVar7) {
LAB_142a332cf:
                  uStack_174 = CONCAT44(uStack_174._4_4_,iVar5);
                }
              }
              local_178 = 0xffffffff;
              uStack_98 = (void *)CONCAT44(uStack_184,local_188);
              uStack_58 = 0xffffffff;
              iStack_54 = (int)uStack_174;
              uStack_50 = uStack_174._4_4_;
              uStack_4c = uStack_16c;
              uStack_88 = CONCAT44((int)uStack_174,0xffffffff);
              local_80 = uStack_174._4_4_;
              uStack_7c = uStack_16c;
              iVar7 = (int)uStack_174;
              local_90 = puStack_180;
              local_70 = local_a0;
              pvStack_68 = uStack_98;
              puStack_60 = puStack_180;
              if ((int)uStack_174 < iVar5) {
                do {
                  pvVar23 = (void *)0x0;
                  puVar17 = (undefined8 *)(*plVar20 + lVar13);
                  lVar13 = *local_a0;
                  iVar12 = *(int *)(puVar18 + 1);
                  iVar5 = *(int *)(puVar17 + 1);
                  pvVar24 = pvVar23;
                  if (iVar12 < 2) {
                    pvVar6 = (void *)*puVar17;
                    local_130 = (void *)0x0;
                    local_128 = CONCAT44(local_128._4_4_,iVar5);
                    if (iVar5 == 0) {
                      local_128 = 0;
                      uVar16 = 0;
                    }
                    else {
                      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_130,iVar5,0);
                      pvVar23 = local_130;
                      _guard_xfg_dispatch_icall_nop(local_130,pvVar6,(longlong)iVar5 * 2);
                      pvVar24 = (void *)(local_128 >> 0x20);
                      uVar16 = local_128 & 0xffffffff;
                    }
                  }
                  else {
                    pvVar6 = (void *)(ulonglong)(iVar5 - 1);
                    if (iVar5 == 0) {
                      pvVar6 = pvVar23;
                    }
                    iVar5 = (int)pvVar6;
                    if ((iVar12 != 0) || (pvVar6 = (void *)0x1, iVar5 == 0)) {
                      pvVar6 = pvVar23;
                    }
                    local_1c8 = (void *)0x0;
                    iVar9 = iVar5 + (int)pvVar6;
                    local_1c0 = CONCAT44(local_1c0._4_4_,iVar12);
                    pvVar6 = (void *)*local_168;
                    if ((iVar12 == 0) && (iVar9 == 0)) {
                      local_1c0 = 0;
                      uVar16 = 0;
                    }
                    else {
                      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1c8,iVar9 + iVar12,0);
                      pvVar23 = local_1c8;
                      _guard_xfg_dispatch_icall_nop(local_1c8,pvVar6,(longlong)iVar12 * 2);
                      pvVar24 = (void *)(local_1c0 >> 0x20);
                      uVar16 = local_1c0 & 0xffffffff;
                    }
                    pvVar6 = (void *)*puVar17;
                    if (iVar5 != 0) {
                      iVar12 = (int)uVar16;
                      uVar21 = (uint)(iVar12 == 0) + iVar5 + iVar12;
                      local_1c0._0_4_ = uVar21;
                      if ((int)pvVar24 < (int)uVar21) {
                        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,uVar16);
                        pvVar24 = (void *)(ulonglong)local_1c0._4_4_;
                        pvVar23 = local_1c8;
                      }
                      uVar16 = (ulonglong)(uint)local_1c0;
                      pvVar19 = (void *)((longlong)pvVar23 +
                                        ((longlong)iVar12 - (ulonglong)(iVar12 != 0)) * 2);
                      _guard_xfg_dispatch_icall_nop(pvVar19,pvVar6,(longlong)iVar5 * 2);
                      *(undefined2 *)((longlong)pvVar19 + (longlong)iVar5 * 2) = 0;
                    }
                    local_1c8 = (void *)0x0;
                    local_128 = CONCAT44((int)pvVar24,(undefined4)local_128);
                    local_1c0 = 0;
                  }
                  iVar5 = (int)pvVar24;
                  pvVar24 = (void *)0x0;
                  puVar18 = (undefined8 *)((longlong)iVar7 * 0x20 + lVar13);
                  iVar12 = *(int *)(puVar18 + 1);
                  uVar21 = (uint)uVar16;
                  if ((int)uVar21 < 2) {
                    pvVar6 = (void *)*puVar18;
                    local_120 = (void *)0x0;
                    pvVar24 = pvVar23;
                    local_118 = iVar12;
                    if (iVar12 == 0) {
                      local_114 = 0;
                    }
                    else {
                      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_120,iVar12,0);
                      _guard_xfg_dispatch_icall_nop(local_120,pvVar6,(longlong)iVar12 * 2);
                    }
                  }
                  else {
                    pvVar6 = (void *)(ulonglong)(iVar12 - 1);
                    if (iVar12 == 0) {
                      pvVar6 = pvVar24;
                    }
                    iVar12 = (int)pvVar6;
                    if ((uVar21 != 0) || (pvVar6 = (void *)0x1, iVar12 == 0)) {
                      pvVar6 = pvVar24;
                    }
                    local_128 = 0;
                    local_1b8 = pvVar23;
                    local_1b0._4_4_ = iVar5;
                    if (iVar5 < (int)(iVar12 + (int)pvVar6 + uVar21)) {
                      local_1b0._0_4_ = uVar21;
                      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_1b8);
                      uVar16 = (ulonglong)(uint)local_1b0;
                    }
                    iVar9 = (int)uVar16;
                    pvVar23 = (void *)*puVar18;
                    pvVar6 = local_1b8;
                    iVar5 = iVar9;
                    iVar7 = local_1b0._4_4_;
                    if (iVar12 != 0) {
                      local_1b0._0_4_ = (uint)(iVar9 == 0) + iVar12 + iVar9;
                      if (local_1b0._4_4_ < (int)(uint)local_1b0) {
                        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,uVar16);
                      }
                      iVar7 = local_1b0._4_4_;
                      iVar5 = (uint)local_1b0;
                      pvVar6 = local_1b8;
                      pvVar19 = (void *)(((longlong)iVar9 - (ulonglong)(iVar9 != 0)) * 2 +
                                        (longlong)local_1b8);
                      _guard_xfg_dispatch_icall_nop(pvVar19,pvVar23,(longlong)iVar12 * 2);
                      *(undefined2 *)((longlong)pvVar19 + (longlong)iVar12 * 2) = 0;
                    }
                    local_1b8 = (void *)0x0;
                    local_1b0 = 0;
                    local_120 = pvVar6;
                    local_118 = iVar5;
                    local_114 = iVar7;
                  }
                  FUN_1415cb280(param_2,local_res18,&local_120,0);
                  if (local_120 != (void *)0x0) {
                    FMemory::Free();
                  }
                  if (pvVar24 != (void *)0x0) {
                    FMemory::Free(pvVar24);
                  }
                  uStack_88 = CONCAT44(uStack_88._4_4_,(uint)uStack_88 & ~uStack_98._4_4_);
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_98);
                  puVar18 = local_168;
                  lVar13 = local_100;
                  plVar20 = local_c8;
                  iVar7 = uStack_88._4_4_;
                } while (uStack_88._4_4_ < (int)local_90[6]);
                iVar12 = (int)local_1e0;
              }
            }
            if (param_5 != '\0') {
              pwVar11 = L"";
              if (local_200 != 0) {
                pwVar11 = local_208;
              }
              puVar8 = &DAT_143f3eda8;
              if (local_1f0 != 0) {
                puVar8 = local_1f8;
              }
              iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,pwVar11);
              if (iVar5 != 0) {
                local_1e0 = CONCAT44(local_1e0._4_4_,iVar12 + 1);
                if (local_1e0._4_4_ < iVar12 + 1) {
                  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_1e8,iVar12);
                }
                pwVar11 = local_208;
                plVar20 = local_1e8 + (longlong)iVar12 * 2;
                *plVar20 = 0;
                lVar13 = (longlong)local_200;
                *(int *)(plVar20 + 1) = local_200;
                if (local_200 == 0) {
                  *(undefined4 *)((longlong)plVar20 + 0xc) = 0;
                }
                else {
                  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar20,local_200,0);
                  _guard_xfg_dispatch_icall_nop((void *)*plVar20,pwVar11,lVar13 * 2);
                }
              }
            }
          }
          else {
            iVar5 = 0;
            iVar12 = local_200 + -1;
            if (local_200 == 0) {
              iVar12 = 0;
            }
            iVar7 = local_1f0 + -1;
            if (local_1f0 == 0) {
              iVar7 = iVar5;
            }
            if (iVar7 < iVar12) {
              if (local_1f0 != 0) {
                iVar5 = local_1f0 + -1;
              }
              iVar12 = FUN_141592950(&local_208,&DAT_144ccf4a0,0,0,iVar5 + 1);
            }
            else {
              iVar12 = -1;
            }
            if ((local_res20 != '\0') && (iVar12 == -1)) {
              uStack_184 = 1;
              local_f0 = (longlong *)(lVar13 + 0x10 + *plVar20);
              iVar5 = (int)local_f0[5];
              puStack_180 = (uint *)(local_f0 + 2);
              uVar21 = 0;
              local_188 = 0;
              uStack_174 = 0;
              if (iVar5 != 0) {
                puVar22 = (uint *)local_f0[4];
                if ((uint *)local_f0[4] == (uint *)0x0) {
                  puVar22 = puStack_180;
                }
                uVar4 = *puVar22;
                while (uVar4 == 0) {
                  lVar14 = (longlong)local_188;
                  uVar21 = uVar21 + 0x20;
                  iVar7 = local_188 + 1;
                  uStack_174 = (ulonglong)uVar21 << 0x20;
                  bVar1 = (int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_188;
                  local_188 = iVar7;
                  if (bVar1) goto LAB_142a3381f;
                  uVar4 = puVar22[lVar14 + 1];
                }
                uStack_184 = -uVar4 & uVar4;
                iVar7 = 0x1f;
                if (uStack_184 != 0) {
                  for (; uStack_184 >> iVar7 == 0; iVar7 = iVar7 + -1) {
                  }
                }
                if (uStack_184 == 0) {
                  iVar7 = 0x20;
                }
                else {
                  iVar7 = 0x1f - iVar7;
                }
                iVar7 = (uVar21 - iVar7) + 0x1f;
                uStack_174._4_4_ = (undefined4)((ulonglong)uStack_174 >> 0x20);
                uStack_174 = CONCAT44(uStack_174._4_4_,iVar7);
                if (iVar5 < iVar7) {
LAB_142a3381f:
                  uStack_174 = CONCAT44(uStack_174._4_4_,iVar5);
                }
              }
              local_178 = 0xffffffff;
              uStack_e8 = (void *)CONCAT44(uStack_184,local_188);
              uStack_58 = 0xffffffff;
              iStack_54 = (int)uStack_174;
              uStack_50 = uStack_174._4_4_;
              uStack_4c = uStack_16c;
              uStack_d8 = CONCAT44((int)uStack_174,0xffffffff);
              uStack_d0 = uStack_174._4_4_;
              uStack_cc = uStack_16c;
              iVar7 = (int)uStack_174;
              puStack_e0 = puStack_180;
              local_70 = local_f0;
              pvStack_68 = uStack_e8;
              puStack_60 = puStack_180;
              if ((int)uStack_174 < iVar5) {
                do {
                  pvVar23 = (void *)0x0;
                  puVar18 = (undefined8 *)(*plVar20 + lVar13);
                  local_f8 = (void *)*local_f0;
                  iVar5 = *(int *)(local_168 + 1);
                  iVar9 = *(int *)(puVar18 + 1);
                  pvVar24 = pvVar23;
                  if (iVar5 < 2) {
                    pvVar6 = (void *)*puVar18;
                    local_110 = (void *)0x0;
                    local_108 = CONCAT44(local_108._4_4_,iVar9);
                    if (iVar9 == 0) {
                      local_108 = 0;
                      uVar16 = 0;
                    }
                    else {
                      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_110,iVar9,0);
                      pvVar23 = local_110;
                      _guard_xfg_dispatch_icall_nop(local_110,pvVar6,(longlong)iVar9 * 2);
                      pvVar24 = (void *)(local_108 >> 0x20);
                      uVar16 = local_108 & 0xffffffff;
                    }
                  }
                  else {
                    pvVar6 = (void *)(ulonglong)(iVar9 - 1);
                    if (iVar9 == 0) {
                      pvVar6 = pvVar23;
                    }
                    iVar9 = (int)pvVar6;
                    if ((iVar5 != 0) || (pvVar6 = (void *)0x1, iVar9 == 0)) {
                      pvVar6 = pvVar23;
                    }
                    pvVar19 = (void *)*local_168;
                    local_1a0 = CONCAT44(local_1a0._4_4_,iVar5);
                    iVar10 = iVar9 + (int)pvVar6;
                    local_1a8 = (void *)0x0;
                    if ((iVar5 == 0) && (iVar10 == 0)) {
                      local_1a0 = 0;
                      uVar16 = 0;
                    }
                    else {
                      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1a8,iVar10 + iVar5,0);
                      pvVar23 = local_1a8;
                      _guard_xfg_dispatch_icall_nop(local_1a8,pvVar19,(longlong)iVar5 * 2);
                      pvVar24 = (void *)(local_1a0 >> 0x20);
                      uVar16 = local_1a0 & 0xffffffff;
                    }
                    pvVar6 = (void *)*puVar18;
                    if (iVar9 != 0) {
                      iVar5 = (int)uVar16;
                      uVar21 = (uint)(iVar5 == 0) + iVar9 + iVar5;
                      local_1a0._0_4_ = uVar21;
                      if ((int)pvVar24 < (int)uVar21) {
                        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a8,uVar16);
                        pvVar24 = (void *)(ulonglong)local_1a0._4_4_;
                        pvVar23 = local_1a8;
                      }
                      uVar16 = (ulonglong)(uint)local_1a0;
                      pvVar19 = (void *)(((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2 +
                                        (longlong)pvVar23);
                      _guard_xfg_dispatch_icall_nop(pvVar19,pvVar6,(longlong)iVar9 * 2);
                      *(undefined2 *)((longlong)iVar9 * 2 + (longlong)pvVar19) = 0;
                    }
                    local_1a8 = (void *)0x0;
                    local_108 = CONCAT44((int)pvVar24,(undefined4)local_108);
                    local_1a0 = 0;
                  }
                  iVar9 = (int)pvVar24;
                  pvVar24 = (void *)0x0;
                  plVar20 = (longlong *)((longlong)iVar7 * 0x20 + (longlong)local_f8);
                  iVar5 = (int)plVar20[1];
                  uVar21 = (uint)uVar16;
                  if ((int)uVar21 < 2) {
                    pvVar6 = (void *)*plVar20;
                    local_160 = (void *)0x0;
                    uStack_158 = (uint *)CONCAT44(uStack_158._4_4_,iVar5);
                    pvVar24 = pvVar23;
                    if (iVar5 == 0) {
                      uStack_158 = (uint *)0x0;
                    }
                    else {
                      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_160,iVar5,0);
                      _guard_xfg_dispatch_icall_nop(local_160,pvVar6,(longlong)iVar5 * 2);
                    }
                  }
                  else {
                    pvVar6 = (void *)(ulonglong)(iVar5 - 1);
                    if (iVar5 == 0) {
                      pvVar6 = pvVar24;
                    }
                    iVar5 = (int)pvVar6;
                    if ((uVar21 != 0) || (pvVar6 = (void *)0x1, iVar5 == 0)) {
                      pvVar6 = pvVar24;
                    }
                    local_108 = 0;
                    local_198 = pvVar23;
                    local_190._4_4_ = iVar9;
                    if (iVar9 < (int)(iVar5 + (int)pvVar6 + uVar21)) {
                      local_190._0_4_ = uVar21;
                      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_198);
                      uVar16 = (ulonglong)(uint)local_190;
                    }
                    iVar10 = (int)uVar16;
                    local_f8 = (void *)*plVar20;
                    pvVar23 = local_198;
                    iVar7 = iVar10;
                    iVar9 = local_190._4_4_;
                    if (iVar5 != 0) {
                      local_190._0_4_ = iVar5 + (uint)(iVar10 == 0) + iVar10;
                      if (local_190._4_4_ < (int)(uint)local_190) {
                        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,uVar16);
                      }
                      iVar9 = local_190._4_4_;
                      iVar7 = (uint)local_190;
                      pvVar23 = local_198;
                      pvVar6 = (void *)((longlong)local_198 +
                                       ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
                      _guard_xfg_dispatch_icall_nop(pvVar6,local_f8,(longlong)iVar5 * 2);
                      *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar6) = 0;
                    }
                    local_198 = (void *)0x0;
                    uStack_158 = (uint *)CONCAT44(iVar9,iVar7);
                    local_190 = 0;
                    local_160 = pvVar23;
                  }
                  FUN_1415cb280(param_2,local_78,&local_160,0);
                  if (local_160 != (void *)0x0) {
                    FMemory::Free();
                  }
                  if (pvVar24 != (void *)0x0) {
                    FMemory::Free(pvVar24);
                  }
                  uStack_d8 = CONCAT44(uStack_d8._4_4_,(uint)uStack_d8 & ~uStack_e8._4_4_);
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_e8);
                  lVar13 = local_100;
                  plVar20 = local_c8;
                  iVar7 = uStack_d8._4_4_;
                } while (uStack_d8._4_4_ < (int)puStack_e0[6]);
              }
            }
            pwVar11 = (wchar_t *)0x0;
            if ((param_5 != '\0') && (-1 < iVar12)) {
              iVar12 = iVar12 + 1;
              iVar5 = 0;
              if (local_200 == 0) {
                pwVar26 = L"";
                iVar7 = iVar5;
              }
              else {
                pwVar26 = local_208;
                iVar7 = local_200 + -1;
              }
              if ((-1 < iVar12) && (iVar5 = iVar7, iVar12 < iVar7)) {
                iVar5 = iVar12;
              }
              local_140 = (wchar_t *)0x0;
              local_138 = (wchar_t *)(ulonglong)(iVar5 + 1);
              if (iVar5 == 0) {
                local_138 = pwVar11;
              }
              iVar12 = (int)local_138;
              if (0 < iVar12) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_140,0);
                pwVar11 = local_140;
                iVar12 = (int)local_138;
                if (0 < (int)local_138) {
                  wcsncpy(local_140,pwVar26,(longlong)iVar5);
                  pwVar11[iVar5] = L'\0';
                }
              }
              uVar16 = local_1e0;
              plVar25 = local_1e8;
              iVar5 = (int)local_1e0;
              lVar13 = (longlong)(int)local_1e0;
              plVar27 = local_1e8 + lVar13 * 2;
              for (plVar20 = local_1e8; plVar20 != plVar27; plVar20 = plVar20 + 2) {
                pwVar26 = L"";
                if (iVar12 != 0) {
                  pwVar26 = pwVar11;
                }
                if ((int)plVar20[1] == 0) {
                  puVar8 = &DAT_143f3eda8;
                }
                else {
                  puVar8 = (undefined2 *)*plVar20;
                }
                iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,pwVar26);
                if (iVar7 == 0) {
                  if ((int)((longlong)plVar20 - (longlong)plVar25 >> 4) != -1) {
                    if (pwVar11 != (wchar_t *)0x0) {
                      FMemory::Free(pwVar11);
                    }
                    goto LAB_142a33c8e;
                  }
                  break;
                }
              }
              local_1e0 = CONCAT44(local_1e0._4_4_,iVar5 + 1);
              if (local_1e0._4_4_ < iVar5 + 1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_1e8,uVar16 & 0xffffffff);
                plVar25 = local_1e8;
              }
              uVar2 = local_138._4_4_;
              local_140 = (wchar_t *)0x0;
              local_138 = (wchar_t *)0x0;
              plVar25[lVar13 * 2] = (longlong)pwVar11;
              *(int *)(plVar25 + lVar13 * 2 + 1) = iVar12;
              *(undefined4 *)((longlong)plVar25 + lVar13 * 0x10 + 0xc) = uVar2;
            }
          }
        }
LAB_142a33c8e:
        if (local_208 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        uStack_b0 = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0 & ~uStack_c0._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_c0);
        uVar16 = local_1e0 & 0xffffffff;
        puVar18 = local_168;
        iVar5 = uStack_b0._4_4_;
      } while (uStack_b0._4_4_ < (int)local_b8[6]);
    }
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Append<FDefaultAllocator>
              (param_2,&local_1e8);
    plVar25 = local_1e8;
    plVar20 = local_1e8;
    for (iVar12 = (int)local_1e0; iVar12 != 0; iVar12 = iVar12 + -1) {
      if (*plVar20 != 0) {
        FMemory::Free();
      }
      plVar20 = plVar20 + 2;
    }
    if (plVar25 != (longlong *)0x0) {
      FMemory::Free(plVar25);
    }
  }
  if (local_1f8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142a33d90 GetKeys<FDefaultAllocator> body=588 status=ok
// SIG undefined GetKeys<FDefaultAllocator>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
TMapBase<FString,TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>,0>_>
::GetKeys<FDefaultAllocator>(longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  int *piVar6;
  int iVar7;
  longlong lVar8;
  uint *puVar9;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  int iStack_e0;
  uint uStack_dc;
  undefined8 local_d8;
  uint uStack_d0;
  int iStack_cc;
  int local_c8;
  undefined1 local_c0 [4];
  undefined1 local_bc [4];
  longlong *local_b8;
  int iStack_b0;
  uint uStack_ac;
  uint *puStack_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int iStack_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  puStack_a8 = (uint *)(param_1 + 2);
  local_58 = 0xffffffff;
  local_88 = 0;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  iVar1 = (int)param_1[5];
  local_e8._0_4_ = 0;
  local_e8._4_4_ = 1;
  local_d8._4_4_ = 0;
  uStack_d0 = 0;
  if (iVar1 != 0) {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puStack_a8;
    }
    uVar2 = *puVar9;
    local_e8._0_4_ = 0;
    uStack_d0 = 0;
    while (uVar2 == 0) {
      lVar8 = (longlong)(int)local_e8;
      uStack_d0 = uStack_d0 + 0x20;
      iVar7 = (int)local_e8 + 1;
      bVar4 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_e8;
      local_e8._0_4_ = iVar7;
      if (bVar4) goto LAB_142a33e91;
      uVar2 = puVar9[lVar8 + 1];
    }
    local_e8._4_4_ = -uVar2 & uVar2;
    iVar7 = 0x1f;
    if (local_e8._4_4_ != 0) {
      for (; local_e8._4_4_ >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (local_e8._4_4_ == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    local_d8._4_4_ = (uStack_d0 - iVar7) + 0x1f;
    if (iVar1 < local_d8._4_4_) {
LAB_142a33e91:
      local_d8._4_4_ = iVar1;
    }
  }
  uStack_a0 = 0xffffffff;
  iStack_9c = local_d8._4_4_;
  iStack_98 = uStack_d0;
  iStack_b0 = (int)local_e8;
  uStack_ac = local_e8._4_4_;
  iStack_e0 = (int)local_e8;
  uStack_dc = local_e8._4_4_;
  local_c8 = uStack_d0;
  uStack_d0 = 0xffffffff;
  iStack_cc = local_d8._4_4_;
  bVar4 = local_d8._4_4_ < iVar1;
  local_e8 = param_1;
  local_b8 = param_1;
  local_d8 = puStack_a8;
  if (bVar4) {
    do {
      plVar5 = local_e8;
      lVar8 = (longlong)iStack_cc * 0x68;
      piVar6 = (int *)TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindId
                                (&local_88,local_c0,*local_e8 + lVar8);
      if (*piVar6 == -1) {
        iVar1 = (int)param_2[1];
        lVar3 = *plVar5;
        *(int *)(param_2 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar1);
        }
        FString::FString((longlong)iVar1 * 0x10 + *param_2,lVar8 + lVar3);
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                  (&local_88,local_bc,*plVar5 + lVar8,0);
      }
      uStack_d0 = uStack_d0 & ~uStack_dc;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_e0);
    } while (iStack_cc < (int)local_d8[6]);
  }
  lVar8 = param_2[1];
  local_40 = 0;
  if (local_48 != 0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_88);
  return (int)lVar8;
}



// FUNCTION 142a33fe0 FUN_142a33fe0 body=411 status=ok
// SIG undefined FUN_142a33fe0(void)

void FUN_142a33fe0(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  iVar5 = (param_2 + -2) / 2;
  if (-1 < iVar5) {
    iVar6 = iVar5 * 2 + 1;
    iVar1 = iVar6;
    iVar7 = iVar5;
joined_r0x000142a3400a:
    do {
      if (iVar6 < param_2) {
        iVar6 = iVar5 * 2;
        iVar9 = iVar6 + 1;
        if (iVar6 + 2 < param_2) {
          if (*(int *)(param_1[(longlong)iVar9 * 2 + 1] + 0xe8) <
              *(int *)(param_1[(longlong)iVar6 * 2 + 5] + 0xe8)) {
            iVar9 = iVar6;
          }
          iVar9 = iVar9 + 1;
        }
        puVar10 = param_1 + (longlong)iVar5 * 2;
        puVar8 = param_1 + (longlong)iVar9 * 2;
        if (*(int *)(puVar8[1] + 0xe8) < *(int *)(puVar10[1] + 0xe8)) {
          if (puVar10 != puVar8) {
            uVar2 = puVar8[1];
            uVar3 = *puVar10;
            uVar4 = puVar10[1];
            *puVar10 = *puVar8;
            puVar10[1] = uVar2;
            *puVar8 = uVar3;
            puVar8[1] = uVar4;
          }
          iVar6 = iVar9 * 2 + 1;
          iVar5 = iVar9;
          goto joined_r0x000142a3400a;
        }
      }
      iVar6 = iVar1 + -2;
      iVar5 = iVar7 + -1;
      iVar1 = iVar6;
      iVar7 = iVar5;
    } while (-1 < iVar5);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar8 = param_1 + (longlong)param_2 * 2;
    do {
      if (param_1 != puVar8) {
        uVar2 = puVar8[1];
        uVar3 = *param_1;
        uVar4 = param_1[1];
        *param_1 = *puVar8;
        param_1[1] = uVar2;
        *puVar8 = uVar3;
        puVar8[1] = uVar4;
      }
      iVar5 = 0;
      if (1 < param_2) {
        do {
          iVar1 = iVar5 * 2;
          iVar6 = iVar1 + 1;
          if (iVar1 + 2 < param_2) {
            if (*(int *)(param_1[(longlong)iVar6 * 2 + 1] + 0xe8) <
                *(int *)(param_1[(longlong)iVar1 * 2 + 5] + 0xe8)) {
              iVar6 = iVar1;
            }
            iVar6 = iVar6 + 1;
          }
          puVar11 = param_1 + (longlong)iVar5 * 2;
          puVar10 = param_1 + (longlong)iVar6 * 2;
          if (*(int *)(puVar11[1] + 0xe8) <= *(int *)(puVar10[1] + 0xe8)) break;
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
      puVar8 = puVar8 + -2;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 142a34180 HeapSortInternal<FString,FIdentityFunctor,TDereferenceWrapper<FString,TGreater<FString>_>_> body=535 status=ok
// SIG undefined HeapSortInternal<FString,FIdentityFunctor,TDereferenceWrapper<FString,TGreater<FString>_>_>(void)

void AlgoImpl::
     HeapSortInternal<FString,FIdentityFunctor,TDereferenceWrapper<FString,TGreater<FString>_>_>
               (undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  
  iVar7 = (param_2 + -2) / 2;
  if (-1 < iVar7) {
    iVar9 = iVar7 * 2 + 1;
    iVar1 = iVar9;
    iVar10 = iVar7;
joined_r0x000142a341b7:
    do {
      if (iVar9 < param_2) {
        iVar9 = iVar7 * 2;
        iVar13 = iVar9 + 1;
        if (iVar9 + 2 < param_2) {
          if (*(int *)(param_1 + ((longlong)iVar9 + 2) * 2 + 1) == 0) {
            puVar12 = &DAT_143f3eda8;
          }
          else {
            puVar12 = (undefined2 *)param_1[((longlong)iVar9 + 2) * 2];
          }
          if (*(int *)(param_1 + (longlong)iVar13 * 2 + 1) == 0) {
            puVar11 = &DAT_143f3eda8;
          }
          else {
            puVar11 = (undefined2 *)param_1[(longlong)iVar13 * 2];
          }
          iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar12);
          if (iVar8 < 0) {
            iVar13 = iVar9;
          }
          iVar13 = iVar13 + 1;
        }
        puVar16 = param_1 + (longlong)iVar7 * 2;
        puVar14 = param_1 + (longlong)iVar13 * 2;
        if (*(int *)(puVar16 + 1) == 0) {
          puVar12 = &DAT_143f3eda8;
        }
        else {
          puVar12 = (undefined2 *)*puVar16;
        }
        if (*(int *)(puVar14 + 1) == 0) {
          puVar11 = &DAT_143f3eda8;
        }
        else {
          puVar11 = (undefined2 *)*puVar14;
        }
        iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar12);
        if (iVar7 < 0) {
          if (puVar16 != puVar14) {
            uVar2 = *(undefined4 *)((longlong)puVar14 + 4);
            uVar3 = *(undefined4 *)(puVar14 + 1);
            uVar4 = *(undefined4 *)((longlong)puVar14 + 0xc);
            uVar5 = *puVar16;
            uVar6 = puVar16[1];
            *(undefined4 *)puVar16 = *(undefined4 *)puVar14;
            *(undefined4 *)((longlong)puVar16 + 4) = uVar2;
            *(undefined4 *)(puVar16 + 1) = uVar3;
            *(undefined4 *)((longlong)puVar16 + 0xc) = uVar4;
            *puVar14 = uVar5;
            puVar14[1] = uVar6;
          }
          iVar9 = iVar13 * 2 + 1;
          iVar7 = iVar13;
          goto joined_r0x000142a341b7;
        }
      }
      iVar9 = iVar1 + -2;
      iVar7 = iVar10 + -1;
      iVar1 = iVar9;
      iVar10 = iVar7;
    } while (-1 < iVar7);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar16 = param_1 + (longlong)param_2 * 2;
    do {
      if (param_1 != puVar16) {
        uVar2 = *(undefined4 *)((longlong)puVar16 + 4);
        uVar3 = *(undefined4 *)(puVar16 + 1);
        uVar4 = *(undefined4 *)((longlong)puVar16 + 0xc);
        uVar5 = *param_1;
        uVar6 = param_1[1];
        *(undefined4 *)param_1 = *(undefined4 *)puVar16;
        *(undefined4 *)((longlong)param_1 + 4) = uVar2;
        *(undefined4 *)(param_1 + 1) = uVar3;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
        *puVar16 = uVar5;
        puVar16[1] = uVar6;
      }
      iVar7 = 0;
      if (1 < param_2) {
        do {
          iVar1 = iVar7 * 2;
          iVar9 = iVar1 + 1;
          if (iVar1 + 2 < param_2) {
            if (*(int *)(param_1 + ((longlong)iVar1 + 2) * 2 + 1) == 0) {
              puVar12 = &DAT_143f3eda8;
            }
            else {
              puVar12 = (undefined2 *)param_1[((longlong)iVar1 + 2) * 2];
            }
            if (*(int *)(param_1 + (longlong)iVar9 * 2 + 1) == 0) {
              puVar11 = &DAT_143f3eda8;
            }
            else {
              puVar11 = (undefined2 *)param_1[(longlong)iVar9 * 2];
            }
            iVar10 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar12);
            if (iVar10 < 0) {
              iVar9 = iVar1;
            }
            iVar9 = iVar9 + 1;
          }
          puVar14 = param_1 + (longlong)iVar7 * 2;
          puVar15 = param_1 + (longlong)iVar9 * 2;
          if (*(int *)(puVar14 + 1) == 0) {
            puVar12 = &DAT_143f3eda8;
          }
          else {
            puVar12 = (undefined2 *)*puVar14;
          }
          if (*(int *)(puVar15 + 1) == 0) {
            puVar11 = &DAT_143f3eda8;
          }
          else {
            puVar11 = (undefined2 *)*puVar15;
          }
          iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar12);
          if (-1 < iVar7) break;
          if (puVar14 != puVar15) {
            uVar2 = *(undefined4 *)((longlong)puVar15 + 4);
            uVar3 = *(undefined4 *)(puVar15 + 1);
            uVar4 = *(undefined4 *)((longlong)puVar15 + 0xc);
            uVar5 = *puVar14;
            uVar6 = puVar14[1];
            *(undefined4 *)puVar14 = *(undefined4 *)puVar15;
            *(undefined4 *)((longlong)puVar14 + 4) = uVar2;
            *(undefined4 *)(puVar14 + 1) = uVar3;
            *(undefined4 *)((longlong)puVar14 + 0xc) = uVar4;
            *puVar15 = uVar5;
            puVar15[1] = uVar6;
          }
          iVar7 = iVar9;
        } while (iVar9 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar16 = puVar16 + -2;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 142a343a0 FUN_142a343a0 body=666 status=ok
// SIG undefined FUN_142a343a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142a343a0(longlong param_1,ulonglong param_2,undefined1 param_3,undefined1 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  float fVar17;
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
    fVar17 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar17 = fVar17 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar17 = _guard_xfg_dispatch_icall_nop(fVar17);
    local_318 = (undefined4)(longlong)(fVar17 + fVar17);
    _guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar16 = &local_328;
    do {
      puVar14 = (undefined8 *)*plVar16;
      puVar15 = (undefined8 *)plVar16[1];
      lVar2 = plVar16[2];
      local_338._0_4_ = (int)lVar2;
      lVar9 = ((longlong)puVar15 - (longlong)puVar14 >> 4) + 1;
      puVar13 = puVar14;
      if ((int)local_338 != 0) {
LAB_142a34470:
        if (8 < lVar9) {
          puVar14 = puVar13 + (lVar9 / 2) * 2;
          if (puVar14 != puVar13) {
            uVar3 = *(undefined4 *)((longlong)puVar13 + 4);
            uVar4 = *(undefined4 *)(puVar13 + 1);
            uVar5 = *(undefined4 *)((longlong)puVar13 + 0xc);
            uVar6 = *puVar14;
            uVar7 = puVar14[1];
            *(undefined4 *)puVar14 = *(undefined4 *)puVar13;
            *(undefined4 *)((longlong)puVar14 + 4) = uVar3;
            *(undefined4 *)(puVar14 + 1) = uVar4;
            *(undefined4 *)((longlong)puVar14 + 0xc) = uVar5;
            *puVar13 = uVar6;
            puVar13[1] = uVar7;
          }
          puVar11 = puVar15 + 2;
          puVar14 = puVar13;
LAB_142a344a6:
          puVar10 = puVar14;
          puVar14 = puVar10 + 2;
          if (puVar14 <= puVar15) goto code_r0x000142a344af;
          goto LAB_142a344c5;
        }
        for (; puVar14 = puVar13, puVar11 = puVar13, puVar13 < puVar15; puVar15 = puVar15 + -2) {
          while (puVar10 = puVar14, puVar14 = puVar11 + 2, puVar14 <= puVar15) {
            plVar1 = puVar11 + 3;
            puVar11 = puVar14;
            if (*(int *)(puVar10[1] + 0xe8) <= *(int *)(*plVar1 + 0xe8)) {
              puVar14 = puVar10;
            }
          }
          if (puVar10 != puVar15) {
            uVar8 = puVar15[1];
            uVar6 = *puVar10;
            uVar7 = puVar10[1];
            *puVar10 = *puVar15;
            puVar10[1] = uVar8;
            *puVar15 = uVar6;
            puVar15[1] = uVar7;
          }
        }
        goto LAB_142a3459d;
      }
LAB_142a3458d:
      local_338 = lVar2;
      FUN_142a33fe0(puVar14,lVar9,param_3,param_4);
LAB_142a3459d:
      plVar16 = plVar16 + -3;
    } while (&local_328 <= plVar16);
  }
  return;
code_r0x000142a344af:
  if (*(int *)(puVar13[1] + 0xe8) <= *(int *)(puVar10[3] + 0xe8)) goto LAB_142a344a6;
LAB_142a344c5:
  do {
    puVar12 = puVar11;
    puVar11 = puVar12 + -2;
    if (puVar11 <= puVar13) break;
  } while (*(int *)(puVar12[-1] + 0xe8) <= *(int *)(puVar13[1] + 0xe8));
  if (puVar14 <= puVar11) {
    if (puVar14 != puVar11) {
      uVar3 = *(undefined4 *)((longlong)puVar12 + -0xc);
      uVar4 = *(undefined4 *)(puVar12 + -1);
      uVar5 = *(undefined4 *)((longlong)puVar12 + -4);
      uVar6 = *puVar14;
      uVar7 = puVar10[3];
      *(undefined4 *)puVar14 = *(undefined4 *)puVar11;
      *(undefined4 *)((longlong)puVar10 + 0x14) = uVar3;
      *(undefined4 *)(puVar10 + 3) = uVar4;
      *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar5;
      *puVar11 = uVar6;
      puVar12[-1] = uVar7;
    }
    goto LAB_142a344a6;
  }
  if (puVar13 != puVar11) {
    uVar3 = *(undefined4 *)((longlong)puVar12 + -0xc);
    uVar4 = *(undefined4 *)(puVar12 + -1);
    uVar5 = *(undefined4 *)((longlong)puVar12 + -4);
    uVar6 = *puVar13;
    uVar7 = puVar13[1];
    *(undefined4 *)puVar13 = *(undefined4 *)puVar11;
    *(undefined4 *)((longlong)puVar13 + 4) = uVar3;
    *(undefined4 *)(puVar13 + 1) = uVar4;
    *(undefined4 *)((longlong)puVar13 + 0xc) = uVar5;
    *puVar11 = uVar6;
    puVar12[-1] = uVar7;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)puVar11 + (-0x10 - (longlong)puVar13) & 0xfffffffffffffff0U) <
      (longlong)((longlong)puVar15 - (longlong)puVar14 & 0xfffffffffffffff0U)) {
    if (puVar14 < puVar15) {
      *plVar16 = (longlong)puVar14;
      plVar16[1] = (longlong)puVar15;
      *(int *)(plVar16 + 2) = (int)local_338;
      plVar16 = plVar16 + 3;
    }
    if (puVar11 <= puVar13 + 2) goto LAB_142a3459d;
    puVar15 = puVar12 + -4;
    puVar14 = puVar13;
  }
  else {
    if (puVar13 + 2 < puVar11) {
      *plVar16 = (longlong)puVar13;
      plVar16[1] = (longlong)(puVar12 + -4);
      *(int *)(plVar16 + 2) = (int)local_338;
      plVar16 = plVar16 + 3;
    }
    if (puVar15 <= puVar14) goto LAB_142a3459d;
  }
  lVar9 = ((longlong)puVar15 - (longlong)puVar14 >> 4) + 1;
  puVar13 = puVar14;
  if ((int)local_338 == 0) goto LAB_142a3458d;
  goto LAB_142a34470;
}



// FUNCTION 142a34640 IntroSortInternal<FString,FIdentityFunctor,TDereferenceWrapper<FString,TGreater<FString>_>_> body=796 status=ok
// SIG undefined IntroSortInternal<FString,FIdentityFunctor,TDereferenceWrapper<FString,TGreater<FString>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FString,FIdentityFunctor,TDereferenceWrapper<FString,TGreater<FString>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined2 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  float fVar18;
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
    fVar18 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar18 = fVar18 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar18 = ::_guard_xfg_dispatch_icall_nop(fVar18);
    local_338 = (undefined4)(longlong)(fVar18 + fVar18);
    ::_guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar13 = &local_348;
    do {
      puVar17 = (undefined8 *)*plVar13;
      puVar14 = (undefined8 *)plVar13[1];
      local_358 = plVar13[2];
      lVar8 = ((longlong)puVar14 - (longlong)puVar17 >> 4) + 1;
      puVar16 = puVar17;
      iVar10 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_142a34720:
        if (8 < lVar8) {
          puVar17 = puVar16 + (lVar8 / 2) * 2;
          if (puVar17 != puVar16) {
            uVar3 = *(undefined4 *)((longlong)puVar16 + 4);
            uVar4 = *(undefined4 *)(puVar16 + 1);
            uVar5 = *(undefined4 *)((longlong)puVar16 + 0xc);
            uVar1 = *puVar17;
            uVar2 = puVar17[1];
            *(undefined4 *)puVar17 = *(undefined4 *)puVar16;
            *(undefined4 *)((longlong)puVar17 + 4) = uVar3;
            *(undefined4 *)(puVar17 + 1) = uVar4;
            *(undefined4 *)((longlong)puVar17 + 0xc) = uVar5;
            *puVar16 = uVar1;
            puVar16[1] = uVar2;
          }
          puVar11 = puVar14 + 2;
          puVar17 = puVar16;
LAB_142a34756:
          puVar15 = puVar17;
          puVar17 = puVar15 + 2;
          if (puVar17 <= puVar14) goto code_r0x000142a3475f;
          goto LAB_142a34790;
        }
        for (; puVar11 = puVar16, puVar17 = puVar16, puVar16 < puVar14; puVar14 = puVar14 + -2) {
          while (puVar17 = puVar17 + 2, puVar17 <= puVar14) {
            if (*(int *)(puVar11 + 1) == 0) {
              puVar9 = &DAT_143f3eda8;
            }
            else {
              puVar9 = (undefined2 *)*puVar11;
            }
            if (*(int *)(puVar17 + 1) == 0) {
              puVar7 = &DAT_143f3eda8;
            }
            else {
              puVar7 = (undefined2 *)*puVar17;
            }
            iVar10 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar9);
            if (iVar10 < 0) {
              puVar11 = puVar17;
            }
          }
          if (puVar11 != puVar14) {
            uVar3 = *(undefined4 *)((longlong)puVar14 + 4);
            uVar4 = *(undefined4 *)(puVar14 + 1);
            uVar5 = *(undefined4 *)((longlong)puVar14 + 0xc);
            uVar1 = *puVar11;
            uVar2 = puVar11[1];
            *(undefined4 *)puVar11 = *(undefined4 *)puVar14;
            *(undefined4 *)((longlong)puVar11 + 4) = uVar3;
            *(undefined4 *)(puVar11 + 1) = uVar4;
            *(undefined4 *)((longlong)puVar11 + 0xc) = uVar5;
            *puVar14 = uVar1;
            puVar14[1] = uVar2;
          }
        }
        goto LAB_142a34884;
      }
LAB_142a34875:
      HeapSortInternal<FString,FIdentityFunctor,TDereferenceWrapper<FString,TGreater<FString>_>_>
                (puVar17,lVar8,param_3,param_4);
LAB_142a34884:
      plVar13 = plVar13 + -3;
    } while (&local_348 <= plVar13);
  }
  return;
code_r0x000142a3475f:
  if (*(int *)(puVar16 + 1) == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = (undefined2 *)*puVar16;
  }
  if (*(int *)(puVar15 + 3) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*puVar17;
  }
  iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar9);
  if (-1 < iVar6) goto LAB_142a34756;
LAB_142a34790:
  do {
    puVar12 = puVar11;
    puVar11 = puVar12 + -2;
    if (puVar11 <= puVar16) break;
    if (*(int *)(puVar12 + -1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*puVar11;
    }
    if (*(int *)(puVar16 + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*puVar16;
    }
    iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar9);
  } while (-1 < iVar6);
  if (puVar17 <= puVar11) {
    if (puVar17 != puVar11) {
      uVar3 = *(undefined4 *)((longlong)puVar12 + -0xc);
      uVar4 = *(undefined4 *)(puVar12 + -1);
      uVar5 = *(undefined4 *)((longlong)puVar12 + -4);
      uVar1 = *puVar17;
      uVar2 = puVar15[3];
      *(undefined4 *)puVar17 = *(undefined4 *)puVar11;
      *(undefined4 *)((longlong)puVar15 + 0x14) = uVar3;
      *(undefined4 *)(puVar15 + 3) = uVar4;
      *(undefined4 *)((longlong)puVar15 + 0x1c) = uVar5;
      *puVar11 = uVar1;
      puVar12[-1] = uVar2;
    }
    goto LAB_142a34756;
  }
  if (puVar16 != puVar11) {
    uVar3 = *(undefined4 *)((longlong)puVar12 + -0xc);
    uVar4 = *(undefined4 *)(puVar12 + -1);
    uVar5 = *(undefined4 *)((longlong)puVar12 + -4);
    uVar1 = *puVar16;
    uVar2 = puVar16[1];
    *(undefined4 *)puVar16 = *(undefined4 *)puVar11;
    *(undefined4 *)((longlong)puVar16 + 4) = uVar3;
    *(undefined4 *)(puVar16 + 1) = uVar4;
    *(undefined4 *)((longlong)puVar16 + 0xc) = uVar5;
    *puVar11 = uVar1;
    puVar12[-1] = uVar2;
  }
  iVar10 = iVar10 + -1;
  if ((longlong)((longlong)puVar11 + (-0x10 - (longlong)puVar16) & 0xfffffffffffffff0U) <
      (longlong)((longlong)puVar14 - (longlong)puVar17 & 0xfffffffffffffff0U)) {
    if (puVar17 < puVar14) {
      *plVar13 = (longlong)puVar17;
      plVar13[1] = (longlong)puVar14;
      *(int *)(plVar13 + 2) = iVar10;
      plVar13 = plVar13 + 3;
    }
    if (puVar11 <= puVar16 + 2) goto LAB_142a34884;
    puVar14 = puVar12 + -4;
    puVar17 = puVar16;
  }
  else {
    if (puVar16 + 2 < puVar11) {
      *plVar13 = (longlong)puVar16;
      plVar13[1] = (longlong)(puVar12 + -4);
      *(int *)(plVar13 + 2) = iVar10;
      plVar13 = plVar13 + 3;
    }
    if (puVar14 <= puVar17) goto LAB_142a34884;
  }
  lVar8 = ((longlong)puVar14 - (longlong)puVar17 >> 4) + 1;
  puVar16 = puVar17;
  if (iVar10 == 0) goto LAB_142a34875;
  goto LAB_142a34720;
}



// FUNCTION 142a34960 MaskInterval<FPakPrecacher::FCacheBlock> body=245 status=ok
// SIG undefined MaskInterval<FPakPrecacher::FCacheBlock>(void)

void MaskInterval<FPakPrecacher::FCacheBlock>
               (uint param_1,longlong *param_2,ulonglong param_3,ulonglong param_4,byte param_5,
               longlong param_6)

{
  ulonglong *puVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  lVar4 = (longlong)(int)(~*(uint *)((longlong)param_2 + 0x24) & param_1);
  uVar5 = *(ulonglong *)(*param_2 + lVar4 * 0x28) & 0xffffffffffff;
  uVar8 = *(longlong *)(*param_2 + 8 + lVar4 * 0x28) + -1 + uVar5;
  if (uVar5 <= param_3) {
    uVar5 = param_3;
  }
  if (param_4 <= uVar8) {
    uVar8 = param_4;
  }
  if (uVar5 <= uVar8) {
    uVar6 = uVar5 - param_3 >> (param_5 & 0x3f);
    uVar5 = uVar8 - param_3 >> (param_5 & 0x3f);
    bVar2 = (byte)uVar5 & 0x3f;
    uVar10 = uVar5 >> 6 & 0x3ffffff;
    uVar8 = uVar6 >> 6 & 0x3ffffff;
    uVar5 = *(ulonglong *)(param_6 + uVar8 * 8);
    puVar1 = (ulonglong *)(param_6 + uVar8 * 8);
    uVar6 = -1L << ((byte)uVar6 & 0x3f);
    uVar9 = (uint)uVar10;
    if ((uint)uVar8 == uVar9) {
      *puVar1 = 0xffffffffffffffffU >> (0x3f - bVar2 & 0x3f) & uVar6 | uVar5;
      return;
    }
    uVar3 = (uint)uVar8 + 1;
    *puVar1 = uVar5 | uVar6;
    if (uVar3 < uVar9) {
      puVar7 = (undefined8 *)(param_6 + (ulonglong)uVar3 * 8);
      for (uVar5 = (ulonglong)(uVar9 - uVar3); uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar7 = 0xffffffffffffffff;
        puVar7 = puVar7 + 1;
      }
    }
    puVar1 = (ulonglong *)(param_6 + uVar10 * 8);
    *puVar1 = *puVar1 | 0xffffffffffffffffU >> (0x3f - bVar2 & 0x3f);
  }
  return;
}



// FUNCTION 142a34a60 MaybeRemoveOverlappingNodesInIntervalTree<FPakPrecacher::FCacheBlock> body=1188 status=ok
// SIG undefined MaybeRemoveOverlappingNodesInIntervalTree<FPakPrecacher::FCacheBlock>(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MaybeRemoveOverlappingNodesInIntervalTree<FPakPrecacher::FCacheBlock>
               (uint *param_1,longlong *param_2,ulonglong param_3,ulonglong param_4,longlong param_5
               ,longlong param_6,int param_7,int param_8,undefined8 *param_9)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  code *pcVar5;
  char cVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint local_58 [2];
  uint *local_50;
  longlong local_48;
  ulonglong local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*param_1 == 0) {
    return;
  }
  local_48 = param_4 << ((byte)param_7 & 0x3f);
  puVar10 = (uint *)(DAT_14667aeb0 + (longlong)(int)(~DAT_14667aed4 & *param_1) * 0xc);
  local_40 = (ulonglong)(param_6 + 1 + param_5) >> 1;
  uVar2 = local_58[0];
  local_50 = puVar10;
  if (-1 < (longlong)(param_3 << ((byte)param_7 & 0x3f))) {
    local_38 = *(undefined4 *)param_9;
    uStack_34 = *(undefined4 *)((longlong)param_9 + 4);
    pcVar5 = (code *)*param_9;
    uStack_30 = *(undefined4 *)(param_9 + 1);
    uStack_2c = *(undefined4 *)((longlong)param_9 + 0xc);
    uVar4 = param_9[1];
    if (param_7 == param_8) {
      puVar1 = puVar10;
      uVar8 = *puVar10;
      while (local_58[0] = uVar8, local_50 = puVar10, local_58[0] != 0) {
        lVar7 = (longlong)(int)(~*(uint *)((longlong)param_2 + 0x24) & local_58[0]);
        lVar3 = *param_2;
        lVar11 = lVar3 + lVar7 * 0x28;
        uVar12 = *(ulonglong *)(lVar3 + lVar7 * 0x28) & 0xffffffffffff;
        uVar8 = *(uint *)(lVar11 + 0x20);
        if ((((uVar12 - 1) + *(longlong *)(lVar3 + 8 + lVar7 * 0x28) < param_3) ||
            (param_4 < uVar12)) ||
           (cVar6 = (*pcVar5)(uVar4,local_58), uVar2 = local_58[0], cVar6 == '\0')) {
          local_58[0] = uVar2;
          puVar1 = (uint *)(lVar11 + 0x20);
          puVar10 = local_50;
          uVar8 = *(uint *)(lVar11 + 0x20);
          uVar2 = local_58[0];
        }
        else {
          *puVar1 = uVar8;
          puVar10 = local_50;
        }
      }
    }
    else {
      uVar12 = local_40 - 1;
      uVar13 = uVar12;
      if (param_4 <= uVar12) {
        uVar13 = param_4;
      }
      MaybeRemoveOverlappingNodesInIntervalTree<FPakPrecacher::FCacheBlock>
                (puVar10,param_2,param_3,uVar13,param_5,uVar12,param_7 + 1,param_8,&local_38);
      uVar2 = local_58[0];
    }
  }
  local_58[0] = uVar2;
  puVar1 = puVar10 + 1;
  local_38 = *(undefined4 *)param_9;
  uStack_34 = *(undefined4 *)((longlong)param_9 + 4);
  pcVar5 = (code *)*param_9;
  uStack_30 = *(undefined4 *)(param_9 + 1);
  uStack_2c = *(undefined4 *)((longlong)param_9 + 0xc);
  uVar4 = param_9[1];
  uVar2 = puVar10[1];
  uVar8 = local_58[0];
  while (local_58[0] = uVar2, local_58[0] != 0) {
    lVar7 = (longlong)(int)(~*(uint *)((longlong)param_2 + 0x24) & local_58[0]);
    lVar3 = *param_2;
    lVar11 = lVar3 + lVar7 * 0x28;
    uVar12 = *(ulonglong *)(lVar3 + lVar7 * 0x28) & 0xffffffffffff;
    uVar2 = *(uint *)(lVar11 + 0x20);
    if ((((uVar12 - 1) + *(longlong *)(lVar3 + 8 + lVar7 * 0x28) < param_3) || (param_4 < uVar12))
       || (cVar6 = (*pcVar5)(uVar4,local_58), uVar8 = local_58[0], cVar6 == '\0')) {
      local_58[0] = uVar8;
      puVar1 = (uint *)(lVar11 + 0x20);
      uVar2 = *(uint *)(lVar11 + 0x20);
      puVar10 = local_50;
      uVar8 = local_58[0];
    }
    else {
      *puVar1 = uVar2;
      puVar10 = local_50;
    }
  }
  if (local_48 < 0) {
    puVar10 = puVar10 + 2;
    if (param_7 == param_8) {
      local_38 = *(undefined4 *)param_9;
      uStack_34 = *(undefined4 *)((longlong)param_9 + 4);
      pcVar5 = (code *)*param_9;
      uStack_30 = *(undefined4 *)(param_9 + 1);
      uStack_2c = *(undefined4 *)((longlong)param_9 + 0xc);
      uVar4 = param_9[1];
      uVar2 = *puVar10;
      while (local_58[0] = uVar2, local_58[0] != 0) {
        lVar7 = (longlong)(int)(~*(uint *)((longlong)param_2 + 0x24) & local_58[0]);
        lVar3 = *param_2;
        lVar11 = lVar3 + lVar7 * 0x28;
        uVar12 = *(ulonglong *)(lVar3 + lVar7 * 0x28) & 0xffffffffffff;
        uVar2 = *(uint *)(lVar11 + 0x20);
        if ((((uVar12 - 1) + *(longlong *)(lVar3 + 8 + lVar7 * 0x28) < param_3) ||
            (param_4 < uVar12)) ||
           (cVar6 = (*pcVar5)(uVar4,local_58), uVar8 = local_58[0], cVar6 == '\0')) {
          local_58[0] = uVar8;
          puVar10 = (uint *)(lVar11 + 0x20);
          uVar2 = *(uint *)(lVar11 + 0x20);
          uVar8 = local_58[0];
        }
        else {
          *puVar10 = uVar2;
        }
      }
    }
    else {
      uVar12 = local_40;
      if (local_40 <= param_3) {
        uVar12 = param_3;
      }
      local_38 = *(undefined4 *)param_9;
      uStack_34 = *(undefined4 *)((longlong)param_9 + 4);
      uStack_30 = *(undefined4 *)(param_9 + 1);
      uStack_2c = *(undefined4 *)((longlong)param_9 + 0xc);
      local_58[0] = uVar8;
      MaybeRemoveOverlappingNodesInIntervalTree<FPakPrecacher::FCacheBlock>
                (puVar10,param_2,uVar12,param_4,local_40,param_6,param_7 + 1,param_8,&local_38);
      uVar8 = local_58[0];
    }
  }
  local_58[0] = uVar8;
  iVar9 = DAT_14667aec8;
  if (*local_50 != 0) {
    return;
  }
  if (local_50[1] != 0) {
    return;
  }
  if (local_50[2] != 0) {
    return;
  }
  lVar11 = (longlong)DAT_14667aec8;
  uVar8 = ~DAT_14667aed4;
  DAT_14667aec8 = DAT_14667aec8 + 1;
  uVar2 = *param_1;
  if (DAT_14667aecc < DAT_14667aec8) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_14667aec0,iVar9);
  }
  *(uint *)(_DAT_14667aec0 + lVar11 * 4) = uVar8 & uVar2;
  if (DAT_14667aec8 + 1 != (int)DAT_14667aeb8) goto LAB_142a34edd;
  DAT_14667aeb8._0_4_ = 0;
  if (DAT_14667aeb8._4_4_ != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (&DAT_14667aeb0,0);
  }
  DAT_14667aec8 = 0;
  if (DAT_14667aecc == 0) {
LAB_142a34ea2:
    iVar9 = (int)DAT_14667aeb8;
    DAT_14667aeb8._0_4_ = (int)DAT_14667aeb8 + 1;
    if (DAT_14667aeb8._4_4_ < (int)DAT_14667aeb8) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(&DAT_14667aeb0,iVar9);
    }
  }
  else {
    TArray<float,FDefaultAllocator>::ResizeTo(&DAT_14667aec0,0);
    if (DAT_14667aec8 == 0) goto LAB_142a34ea2;
    iVar9 = *(int *)(_DAT_14667aec0 + -4 + (longlong)DAT_14667aec8 * 4);
    DAT_14667aec8 = DAT_14667aec8 + -1;
    TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(&DAT_14667aec0);
  }
  lVar11 = DAT_14667aeb0;
  *(undefined8 *)(DAT_14667aeb0 + (longlong)iVar9 * 0xc) = 0;
  *(undefined4 *)(lVar11 + 8 + (longlong)iVar9 * 0xc) = 0;
LAB_142a34edd:
  *param_1 = 0;
  return;
}



// FUNCTION 142a34f10 MaybeRemoveOverlappingNodesInIntervalTree<FPakPrecacher::FPakInRequest> body=1187 status=ok
// SIG undefined MaybeRemoveOverlappingNodesInIntervalTree<FPakPrecacher::FPakInRequest>(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MaybeRemoveOverlappingNodesInIntervalTree<FPakPrecacher::FPakInRequest>
               (uint *param_1,longlong *param_2,ulonglong param_3,ulonglong param_4,longlong param_5
               ,longlong param_6,int param_7,int param_8,undefined8 *param_9)

{
  uint uVar1;
  undefined8 uVar2;
  code *pcVar3;
  uint *puVar4;
  char cVar5;
  ulonglong *puVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint local_58 [2];
  uint *local_50;
  longlong local_48;
  ulonglong local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*param_1 == 0) {
    return;
  }
  local_48 = param_4 << ((byte)param_7 & 0x3f);
  puVar9 = (uint *)(DAT_14667aeb0 + (longlong)(int)(~DAT_14667aed4 & *param_1) * 0xc);
  local_40 = (ulonglong)(param_6 + 1 + param_5) >> 1;
  uVar1 = local_58[0];
  local_50 = puVar9;
  if (-1 < (longlong)(param_3 << ((byte)param_7 & 0x3f))) {
    local_38 = *(undefined4 *)param_9;
    uStack_34 = *(undefined4 *)((longlong)param_9 + 4);
    pcVar3 = (code *)*param_9;
    uStack_30 = *(undefined4 *)(param_9 + 1);
    uStack_2c = *(undefined4 *)((longlong)param_9 + 0xc);
    uVar2 = param_9[1];
    if (param_7 == param_8) {
      puVar4 = puVar9;
      uVar7 = *puVar9;
      while (local_58[0] = uVar7, local_50 = puVar9, local_58[0] != 0) {
        puVar6 = (ulonglong *)
                 ((longlong)(int)(~*(uint *)((longlong)param_2 + 0x24) & local_58[0]) * 0x30 +
                 *param_2);
        uVar7 = *(uint *)((longlong)puVar6 + 0x24);
        if (((((*puVar6 & 0xffffffffffff) - 1) + puVar6[1] < param_3) ||
            (param_4 < (*puVar6 & 0xffffffffffff))) ||
           (cVar5 = (*pcVar3)(uVar2,local_58), uVar1 = local_58[0], cVar5 == '\0')) {
          local_58[0] = uVar1;
          puVar4 = (uint *)((longlong)puVar6 + 0x24);
          puVar9 = local_50;
          uVar7 = *(uint *)((longlong)puVar6 + 0x24);
          uVar1 = local_58[0];
        }
        else {
          *puVar4 = uVar7;
          puVar9 = local_50;
        }
      }
    }
    else {
      uVar11 = local_40 - 1;
      uVar12 = uVar11;
      if (param_4 <= uVar11) {
        uVar12 = param_4;
      }
      MaybeRemoveOverlappingNodesInIntervalTree<FPakPrecacher::FPakInRequest>
                (puVar9,param_2,param_3,uVar12,param_5,uVar11,param_7 + 1,param_8,&local_38);
      uVar1 = local_58[0];
    }
  }
  local_58[0] = uVar1;
  local_38 = *(undefined4 *)param_9;
  uStack_34 = *(undefined4 *)((longlong)param_9 + 4);
  pcVar3 = (code *)*param_9;
  uStack_30 = *(undefined4 *)(param_9 + 1);
  uStack_2c = *(undefined4 *)((longlong)param_9 + 0xc);
  uVar2 = param_9[1];
  puVar4 = puVar9 + 1;
  uVar1 = puVar9[1];
  uVar7 = local_58[0];
  while (local_58[0] = uVar1, local_58[0] != 0) {
    puVar6 = (ulonglong *)
             ((longlong)(int)(~*(uint *)((longlong)param_2 + 0x24) & local_58[0]) * 0x30 + *param_2)
    ;
    uVar1 = *(uint *)((longlong)puVar6 + 0x24);
    if (((((*puVar6 & 0xffffffffffff) - 1) + puVar6[1] < param_3) ||
        (param_4 < (*puVar6 & 0xffffffffffff))) ||
       (cVar5 = (*pcVar3)(uVar2,local_58), uVar7 = local_58[0], cVar5 == '\0')) {
      local_58[0] = uVar7;
      puVar4 = (uint *)((longlong)puVar6 + 0x24);
      uVar1 = *(uint *)((longlong)puVar6 + 0x24);
      puVar9 = local_50;
      uVar7 = local_58[0];
    }
    else {
      *puVar4 = uVar1;
      puVar9 = local_50;
    }
  }
  if (local_48 < 0) {
    puVar9 = puVar9 + 2;
    if (param_7 == param_8) {
      local_38 = *(undefined4 *)param_9;
      uStack_34 = *(undefined4 *)((longlong)param_9 + 4);
      pcVar3 = (code *)*param_9;
      uStack_30 = *(undefined4 *)(param_9 + 1);
      uStack_2c = *(undefined4 *)((longlong)param_9 + 0xc);
      uVar2 = param_9[1];
      uVar1 = *puVar9;
      while (local_58[0] = uVar1, local_58[0] != 0) {
        puVar6 = (ulonglong *)
                 ((longlong)(int)(~*(uint *)((longlong)param_2 + 0x24) & local_58[0]) * 0x30 +
                 *param_2);
        uVar1 = *(uint *)((longlong)puVar6 + 0x24);
        if (((((*puVar6 & 0xffffffffffff) - 1) + puVar6[1] < param_3) ||
            (param_4 < (*puVar6 & 0xffffffffffff))) ||
           (cVar5 = (*pcVar3)(uVar2,local_58), uVar7 = local_58[0], cVar5 == '\0')) {
          local_58[0] = uVar7;
          puVar9 = (uint *)((longlong)puVar6 + 0x24);
          uVar1 = *(uint *)((longlong)puVar6 + 0x24);
          uVar7 = local_58[0];
        }
        else {
          *puVar9 = uVar1;
        }
      }
    }
    else {
      uVar11 = local_40;
      if (local_40 <= param_3) {
        uVar11 = param_3;
      }
      local_38 = *(undefined4 *)param_9;
      uStack_34 = *(undefined4 *)((longlong)param_9 + 4);
      uStack_30 = *(undefined4 *)(param_9 + 1);
      uStack_2c = *(undefined4 *)((longlong)param_9 + 0xc);
      local_58[0] = uVar7;
      MaybeRemoveOverlappingNodesInIntervalTree<FPakPrecacher::FPakInRequest>
                (puVar9,param_2,uVar11,param_4,local_40,param_6,param_7 + 1,param_8,&local_38);
      uVar7 = local_58[0];
    }
  }
  local_58[0] = uVar7;
  iVar8 = DAT_14667aec8;
  if (*local_50 != 0) {
    return;
  }
  if (local_50[1] != 0) {
    return;
  }
  if (local_50[2] != 0) {
    return;
  }
  lVar10 = (longlong)DAT_14667aec8;
  uVar7 = ~DAT_14667aed4;
  DAT_14667aec8 = DAT_14667aec8 + 1;
  uVar1 = *param_1;
  if (DAT_14667aecc < DAT_14667aec8) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_14667aec0,iVar8);
  }
  *(uint *)(_DAT_14667aec0 + lVar10 * 4) = uVar7 & uVar1;
  if (DAT_14667aec8 + 1 != (int)DAT_14667aeb8) goto LAB_142a3538c;
  DAT_14667aeb8._0_4_ = 0;
  if (DAT_14667aeb8._4_4_ != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (&DAT_14667aeb0,0);
  }
  DAT_14667aec8 = 0;
  if (DAT_14667aecc == 0) {
LAB_142a35351:
    iVar8 = (int)DAT_14667aeb8;
    DAT_14667aeb8._0_4_ = (int)DAT_14667aeb8 + 1;
    if (DAT_14667aeb8._4_4_ < (int)DAT_14667aeb8) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(&DAT_14667aeb0,iVar8);
    }
  }
  else {
    TArray<float,FDefaultAllocator>::ResizeTo(&DAT_14667aec0,0);
    if (DAT_14667aec8 == 0) goto LAB_142a35351;
    iVar8 = *(int *)(_DAT_14667aec0 + -4 + (longlong)DAT_14667aec8 * 4);
    DAT_14667aec8 = DAT_14667aec8 + -1;
    TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(&DAT_14667aec0);
  }
  lVar10 = DAT_14667aeb0;
  *(undefined8 *)(DAT_14667aeb0 + (longlong)iVar8 * 0xc) = 0;
  *(undefined4 *)(lVar10 + 8 + (longlong)iVar8 * 0xc) = 0;
LAB_142a3538c:
  *param_1 = 0;
  return;
}



// FUNCTION 142a353c0 FUN_142a353c0 body=829 status=ok
// SIG undefined FUN_142a353c0(void)

undefined8
FUN_142a353c0(uint param_1,longlong *param_2,ulonglong param_3,ulonglong param_4,longlong param_5,
             longlong param_6,int param_7,int param_8,undefined8 *param_9)

{
  uint *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint local_res8 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (param_1 != 0) {
    puVar1 = (uint *)(DAT_14667aeb0 + (longlong)(int)(~DAT_14667aed4 & param_1) * 0xc);
    uVar10 = (ulonglong)(param_6 + 1 + param_5) >> 1;
    uVar5 = local_res8[0];
    if (-1 < (longlong)(param_3 << ((byte)param_7 & 0x3f))) {
      local_38 = *(undefined4 *)param_9;
      uStack_34 = *(undefined4 *)((longlong)param_9 + 4);
      pcVar4 = (code *)*param_9;
      uStack_30 = *(undefined4 *)(param_9 + 1);
      uStack_2c = *(undefined4 *)((longlong)param_9 + 0xc);
      uVar3 = param_9[1];
      if (param_7 == param_8) {
        uVar6 = *puVar1;
        while (local_res8[0] = uVar6, local_res8[0] != 0) {
          lVar8 = (longlong)(int)(~*(uint *)((longlong)param_2 + 0x24) & local_res8[0]);
          lVar2 = *param_2;
          uVar9 = *(ulonglong *)(lVar2 + lVar8 * 0x28) & 0xffffffffffff;
          if (((param_3 <= (uVar9 - 1) + *(longlong *)(lVar2 + 8 + lVar8 * 0x28)) &&
              (uVar9 <= param_4)) &&
             (cVar7 = (*pcVar4)(uVar3,local_res8), uVar5 = local_res8[0], cVar7 == '\0')) {
            return 0;
          }
          local_res8[0] = uVar5;
          uVar5 = local_res8[0];
          uVar6 = *(uint *)(lVar2 + lVar8 * 0x28 + 0x20);
        }
      }
      else {
        uVar9 = uVar10 - 1;
        uVar11 = uVar9;
        if (param_4 <= uVar9) {
          uVar11 = param_4;
        }
        cVar7 = FUN_142a353c0(*puVar1,param_2,param_3,uVar11,param_5,uVar9,param_7 + 1,param_8,
                              &local_38);
        uVar5 = local_res8[0];
        if (cVar7 == '\0') {
          return 0;
        }
      }
    }
    local_res8[0] = uVar5;
    local_38 = *(undefined4 *)param_9;
    uStack_34 = *(undefined4 *)((longlong)param_9 + 4);
    pcVar4 = (code *)*param_9;
    uStack_30 = *(undefined4 *)(param_9 + 1);
    uStack_2c = *(undefined4 *)((longlong)param_9 + 0xc);
    uVar3 = param_9[1];
    uVar6 = puVar1[1];
    uVar5 = local_res8[0];
    while (local_res8[0] = uVar6, local_res8[0] != 0) {
      lVar8 = (longlong)(int)(~*(uint *)((longlong)param_2 + 0x24) & local_res8[0]);
      lVar2 = *param_2;
      uVar9 = *(ulonglong *)(lVar2 + lVar8 * 0x28) & 0xffffffffffff;
      if (((param_3 <= (uVar9 - 1) + *(longlong *)(lVar2 + 8 + lVar8 * 0x28)) && (uVar9 <= param_4))
         && (cVar7 = (*pcVar4)(uVar3,local_res8), uVar5 = local_res8[0], cVar7 == '\0')) {
        return 0;
      }
      local_res8[0] = uVar5;
      uVar5 = local_res8[0];
      uVar6 = *(uint *)(lVar2 + lVar8 * 0x28 + 0x20);
    }
    if ((longlong)(param_4 << ((byte)param_7 & 0x3f)) < 0) {
      local_38 = *(undefined4 *)param_9;
      uStack_34 = *(undefined4 *)((longlong)param_9 + 4);
      pcVar4 = (code *)*param_9;
      uStack_30 = *(undefined4 *)(param_9 + 1);
      uStack_2c = *(undefined4 *)((longlong)param_9 + 0xc);
      uVar3 = param_9[1];
      if (param_7 == param_8) {
        local_res8[0] = puVar1[2];
        while (local_res8[0] != 0) {
          lVar8 = (longlong)(int)(~*(uint *)((longlong)param_2 + 0x24) & local_res8[0]);
          lVar2 = *param_2;
          uVar10 = *(ulonglong *)(lVar2 + lVar8 * 0x28) & 0xffffffffffff;
          if (((param_3 <= (uVar10 - 1) + *(longlong *)(lVar2 + 8 + lVar8 * 0x28)) &&
              (uVar10 <= param_4)) && (cVar7 = (*pcVar4)(uVar3,local_res8), cVar7 == '\0')) {
            return 0;
          }
          local_res8[0] = *(uint *)(lVar2 + lVar8 * 0x28 + 0x20);
        }
      }
      else {
        uVar9 = uVar10;
        if (uVar10 <= param_3) {
          uVar9 = param_3;
        }
        local_res8[0] = uVar5;
        cVar7 = FUN_142a353c0(puVar1[2],param_2,uVar9,param_4,uVar10,param_6,param_7 + 1,param_8,
                              &local_38);
        if (cVar7 == '\0') {
          return 0;
        }
      }
    }
  }
  return 1;
}



// FUNCTION 142a35700 FUN_142a35700 body=801 status=ok
// SIG undefined FUN_142a35700(void)

undefined8
FUN_142a35700(uint param_1,longlong *param_2,ulonglong param_3,ulonglong param_4,longlong param_5,
             longlong param_6,int param_7,int param_8,undefined8 *param_9)

{
  uint *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint local_res8 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (param_1 != 0) {
    puVar1 = (uint *)(DAT_14667aeb0 + (longlong)(int)(~DAT_14667aed4 & param_1) * 0xc);
    uVar9 = (ulonglong)(param_6 + 1 + param_5) >> 1;
    uVar4 = local_res8[0];
    if (-1 < (longlong)(param_3 << ((byte)param_7 & 0x3f))) {
      local_38 = *(undefined4 *)param_9;
      uStack_34 = *(undefined4 *)((longlong)param_9 + 4);
      pcVar3 = (code *)*param_9;
      uStack_30 = *(undefined4 *)(param_9 + 1);
      uStack_2c = *(undefined4 *)((longlong)param_9 + 0xc);
      uVar2 = param_9[1];
      if (param_7 == param_8) {
        uVar5 = *puVar1;
        while (local_res8[0] = uVar5, local_res8[0] != 0) {
          puVar7 = (ulonglong *)
                   ((longlong)(int)(~*(uint *)((longlong)param_2 + 0x24) & local_res8[0]) * 0x30 +
                   *param_2);
          if (((param_3 <= ((*puVar7 & 0xffffffffffff) - 1) + puVar7[1]) &&
              ((*puVar7 & 0xffffffffffff) <= param_4)) &&
             (cVar6 = (*pcVar3)(uVar2,local_res8), uVar4 = local_res8[0], cVar6 == '\0')) {
            return 0;
          }
          local_res8[0] = uVar4;
          uVar4 = local_res8[0];
          uVar5 = *(uint *)((longlong)puVar7 + 0x24);
        }
      }
      else {
        uVar8 = uVar9 - 1;
        uVar10 = uVar8;
        if (param_4 <= uVar8) {
          uVar10 = param_4;
        }
        cVar6 = FUN_142a35700(*puVar1,param_2,param_3,uVar10,param_5,uVar8,param_7 + 1,param_8,
                              &local_38);
        uVar4 = local_res8[0];
        if (cVar6 == '\0') {
          return 0;
        }
      }
    }
    local_res8[0] = uVar4;
    local_38 = *(undefined4 *)param_9;
    uStack_34 = *(undefined4 *)((longlong)param_9 + 4);
    pcVar3 = (code *)*param_9;
    uStack_30 = *(undefined4 *)(param_9 + 1);
    uStack_2c = *(undefined4 *)((longlong)param_9 + 0xc);
    uVar2 = param_9[1];
    uVar5 = puVar1[1];
    uVar4 = local_res8[0];
    while (local_res8[0] = uVar5, local_res8[0] != 0) {
      puVar7 = (ulonglong *)
               ((longlong)(int)(~*(uint *)((longlong)param_2 + 0x24) & local_res8[0]) * 0x30 +
               *param_2);
      if (((param_3 <= ((*puVar7 & 0xffffffffffff) - 1) + puVar7[1]) &&
          ((*puVar7 & 0xffffffffffff) <= param_4)) &&
         (cVar6 = (*pcVar3)(uVar2,local_res8), uVar4 = local_res8[0], cVar6 == '\0')) {
        return 0;
      }
      local_res8[0] = uVar4;
      uVar4 = local_res8[0];
      uVar5 = *(uint *)((longlong)puVar7 + 0x24);
    }
    if ((longlong)(param_4 << ((byte)param_7 & 0x3f)) < 0) {
      local_38 = *(undefined4 *)param_9;
      uStack_34 = *(undefined4 *)((longlong)param_9 + 4);
      pcVar3 = (code *)*param_9;
      uStack_30 = *(undefined4 *)(param_9 + 1);
      uStack_2c = *(undefined4 *)((longlong)param_9 + 0xc);
      uVar2 = param_9[1];
      if (param_7 == param_8) {
        local_res8[0] = puVar1[2];
        while (local_res8[0] != 0) {
          puVar7 = (ulonglong *)
                   ((longlong)(int)(~*(uint *)((longlong)param_2 + 0x24) & local_res8[0]) * 0x30 +
                   *param_2);
          if (((param_3 <= ((*puVar7 & 0xffffffffffff) - 1) + puVar7[1]) &&
              ((*puVar7 & 0xffffffffffff) <= param_4)) &&
             (cVar6 = (*pcVar3)(uVar2,local_res8), cVar6 == '\0')) {
            return 0;
          }
          local_res8[0] = *(uint *)((longlong)puVar7 + 0x24);
        }
      }
      else {
        uVar8 = uVar9;
        if (uVar9 <= param_3) {
          uVar8 = param_3;
        }
        local_res8[0] = uVar4;
        cVar6 = FUN_142a35700(puVar1[2],param_2,uVar8,param_4,uVar9,param_6,param_7 + 1,param_8,
                              &local_38);
        if (cVar6 == '\0') {
          return 0;
        }
      }
    }
  }
  return 1;
}



// FUNCTION 142a35a30 OverlappingNodesInIntervalTreeMask<FPakPrecacher::FCacheBlock> body=142 status=ok
// SIG undefined OverlappingNodesInIntervalTreeMask<FPakPrecacher::FCacheBlock>(void)

void OverlappingNodesInIntervalTreeMask<FPakPrecacher::FCacheBlock>(void)

{
  FUN_142a353c0();
  return;
}



// FUNCTION 142a35ac0 FUN_142a35ac0 body=463 status=ok
// SIG undefined FUN_142a35ac0(void)

undefined1
FUN_142a35ac0(uint param_1,undefined8 param_2,ulonglong param_3,ulonglong *param_4,longlong param_5,
             ulonglong param_6,int param_7,int param_8,undefined4 *param_9)

{
  undefined4 *puVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (param_1 != 0) {
    uVar3 = param_6 + 1 + param_5 >> 1;
    puVar1 = (undefined4 *)(DAT_14667aeb0 + (longlong)(int)(~DAT_14667aed4 & param_1) * 0xc);
    if (-1 < (longlong)(param_3 << ((byte)param_7 & 0x3f))) {
      local_38 = *param_9;
      uStack_34 = param_9[1];
      uStack_30 = param_9[2];
      uStack_2c = param_9[3];
      if (param_7 == param_8) {
        cVar2 = ScanNodeListWithShrinkingInterval<FPakPrecacher::FPakInRequest>
                          (*puVar1,param_2,param_3,param_4,&local_38);
        if (cVar2 == '\0') {
          return 0;
        }
      }
      else {
        cVar2 = FUN_142a35ac0(*puVar1,param_2,param_3,param_4,param_5,uVar3 - 1,param_7 + 1,param_8,
                              &local_38);
        if (cVar2 == '\0') {
          return 0;
        }
      }
    }
    local_38 = *param_9;
    uStack_34 = param_9[1];
    uStack_30 = param_9[2];
    uStack_2c = param_9[3];
    cVar2 = ScanNodeListWithShrinkingInterval<FPakPrecacher::FPakInRequest>
                      (puVar1[1],param_2,param_3,param_4,&local_38);
    if (cVar2 == '\0') {
      return 0;
    }
    uVar4 = param_6;
    if (*param_4 <= param_6) {
      uVar4 = *param_4;
    }
    if ((longlong)(uVar4 << ((byte)param_7 & 0x3f)) < 0) {
      local_38 = *param_9;
      uStack_34 = param_9[1];
      uStack_30 = param_9[2];
      uStack_2c = param_9[3];
      if (param_7 == param_8) {
        cVar2 = ScanNodeListWithShrinkingInterval<FPakPrecacher::FPakInRequest>
                          (puVar1[2],param_2,param_3,param_4,&local_38);
      }
      else {
        uVar4 = uVar3;
        if (uVar3 <= param_3) {
          uVar4 = param_3;
        }
        cVar2 = FUN_142a35ac0(puVar1[2],param_2,uVar4,param_4,uVar3,param_6,param_7 + 1,param_8,
                              &local_38);
      }
      if (cVar2 == '\0') {
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 142a35c90 RemoveFromIntervalTree<FPakPrecacher::FCacheBlock> body=755 status=ok
// SIG undefined RemoveFromIntervalTree<FPakPrecacher::FCacheBlock>(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char RemoveFromIntervalTree<FPakPrecacher::FCacheBlock>
               (uint *param_1,longlong *param_2,undefined8 param_3,longlong param_4,longlong param_5
               ,int param_6,int param_7)

{
  uint *puVar1;
  char cVar2;
  uint *puVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  if (*param_1 == 0) {
    return '\0';
  }
  puVar1 = (uint *)(DAT_14667aeb0 + (longlong)(int)(~DAT_14667aed4 & *param_1) * 0xc);
  uVar7 = (uint)param_3;
  if (param_4 << ((byte)param_6 & 0x3f) < 0) {
    puVar3 = puVar1 + 2;
    if (param_6 != param_7) goto LAB_142a35d77;
    uVar5 = *puVar3;
    if (uVar5 == 0) {
      return '\0';
    }
    while (lVar4 = *param_2 + (longlong)(int)(uVar5 & ~*(uint *)((longlong)param_2 + 0x24)) * 0x28,
          uVar5 != uVar7) {
      uVar5 = *(uint *)(lVar4 + 0x20);
      puVar3 = (uint *)(lVar4 + 0x20);
      if (uVar5 == 0) {
        return '\0';
      }
    }
    cVar2 = '\x01';
    *puVar3 = *(uint *)(lVar4 + 0x20);
    *(undefined4 *)(lVar4 + 0x20) = 0;
  }
  else if (param_5 << ((byte)param_6 & 0x3f) < 0) {
    uVar5 = puVar1[1];
    puVar3 = puVar1 + 1;
    if (uVar5 == 0) {
      return '\0';
    }
    while (lVar4 = *param_2 + (longlong)(int)(uVar5 & ~*(uint *)((longlong)param_2 + 0x24)) * 0x28,
          uVar5 != uVar7) {
      uVar5 = *(uint *)(lVar4 + 0x20);
      puVar3 = (uint *)(lVar4 + 0x20);
      if (uVar5 == 0) {
        return '\0';
      }
    }
LAB_142a35d66:
    cVar2 = '\x01';
    *puVar3 = *(uint *)(lVar4 + 0x20);
    *(undefined4 *)(lVar4 + 0x20) = 0;
  }
  else {
    puVar3 = puVar1;
    if (param_6 == param_7) {
      uVar5 = *puVar1;
      if (uVar5 != 0) {
        do {
          lVar4 = *param_2 + (longlong)(int)(uVar5 & ~*(uint *)((longlong)param_2 + 0x24)) * 0x28;
          if (uVar5 == uVar7) goto LAB_142a35d66;
          uVar5 = *(uint *)(lVar4 + 0x20);
          puVar3 = (uint *)(lVar4 + 0x20);
        } while (uVar5 != 0);
      }
      return '\0';
    }
LAB_142a35d77:
    cVar2 = RemoveFromIntervalTree<FPakPrecacher::FCacheBlock>
                      (puVar3,param_2,param_3,param_4,param_5,param_6 + 1,param_7);
    if (cVar2 == '\0') {
      return '\0';
    }
  }
  iVar6 = DAT_14667aec8;
  if (*puVar1 != 0) {
    return cVar2;
  }
  if (puVar1[1] != 0) {
    return cVar2;
  }
  if (puVar1[2] != 0) {
    return cVar2;
  }
  lVar4 = (longlong)DAT_14667aec8;
  uVar5 = ~DAT_14667aed4;
  uVar7 = *param_1;
  DAT_14667aec8 = DAT_14667aec8 + 1;
  if (DAT_14667aecc < DAT_14667aec8) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_14667aec0,iVar6);
  }
  *(uint *)(_DAT_14667aec0 + lVar4 * 4) = uVar5 & uVar7;
  if (DAT_14667aec8 + 1 != (int)DAT_14667aeb8) goto LAB_142a35f5f;
  DAT_14667aeb8._0_4_ = 0;
  if (DAT_14667aeb8._4_4_ != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (&DAT_14667aeb0,0);
  }
  DAT_14667aec8 = 0;
  if (DAT_14667aecc == 0) {
LAB_142a35f23:
    iVar6 = (int)DAT_14667aeb8;
    DAT_14667aeb8._0_4_ = (int)DAT_14667aeb8 + 1;
    if (DAT_14667aeb8._4_4_ < (int)DAT_14667aeb8) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(&DAT_14667aeb0,iVar6);
    }
  }
  else {
    TArray<float,FDefaultAllocator>::ResizeTo(&DAT_14667aec0,0);
    if (DAT_14667aec8 == 0) goto LAB_142a35f23;
    iVar6 = *(int *)(_DAT_14667aec0 + -4 + (longlong)DAT_14667aec8 * 4);
    DAT_14667aec8 = DAT_14667aec8 + -1;
    TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(&DAT_14667aec0);
  }
  lVar4 = DAT_14667aeb0;
  *(undefined8 *)(DAT_14667aeb0 + (longlong)iVar6 * 0xc) = 0;
  *(undefined4 *)(lVar4 + 8 + (longlong)iVar6 * 0xc) = 0;
LAB_142a35f5f:
  *param_1 = 0;
  return cVar2;
}



// FUNCTION 142a35f90 RemoveFromIntervalTree<FPakPrecacher::FPakInRequest> body=774 status=ok
// SIG undefined RemoveFromIntervalTree<FPakPrecacher::FPakInRequest>(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char RemoveFromIntervalTree<FPakPrecacher::FPakInRequest>
               (uint *param_1,longlong *param_2,uint param_3,longlong param_4,longlong param_5,
               int param_6,int param_7)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  
  if (*param_1 == 0) {
    return '\0';
  }
  puVar1 = (uint *)(DAT_14667aeb0 + (longlong)(int)(~DAT_14667aed4 & *param_1) * 0xc);
  if (param_4 << ((byte)param_6 & 0x3f) < 0) {
    puVar7 = puVar1 + 2;
    if (param_6 != param_7) goto LAB_142a36079;
    uVar2 = *puVar7;
    if (uVar2 == 0) {
      return '\0';
    }
    while (lVar4 = (longlong)(int)(uVar2 & ~*(uint *)((longlong)param_2 + 0x24)) * 0x30 + *param_2,
          uVar2 != param_3) {
      uVar2 = *(uint *)(lVar4 + 0x24);
      puVar7 = (uint *)(lVar4 + 0x24);
      if (uVar2 == 0) {
        return '\0';
      }
    }
    cVar3 = '\x01';
    *puVar7 = *(uint *)(lVar4 + 0x24);
    *(undefined4 *)(lVar4 + 0x24) = 0;
  }
  else if (param_5 << ((byte)param_6 & 0x3f) < 0) {
    uVar2 = puVar1[1];
    puVar7 = puVar1 + 1;
    if (uVar2 == 0) {
      return '\0';
    }
    while (lVar4 = (longlong)(int)(uVar2 & ~*(uint *)((longlong)param_2 + 0x24)) * 0x30 + *param_2,
          uVar2 != param_3) {
      uVar2 = *(uint *)(lVar4 + 0x24);
      puVar7 = (uint *)(lVar4 + 0x24);
      if (uVar2 == 0) {
        return '\0';
      }
    }
LAB_142a36068:
    cVar3 = '\x01';
    *puVar7 = *(uint *)(lVar4 + 0x24);
    *(undefined4 *)(lVar4 + 0x24) = 0;
  }
  else {
    puVar7 = puVar1;
    if (param_6 == param_7) {
      uVar2 = *puVar1;
      if (uVar2 != 0) {
        do {
          lVar4 = (longlong)(int)(uVar2 & ~*(uint *)((longlong)param_2 + 0x24)) * 0x30 + *param_2;
          if (uVar2 == param_3) goto LAB_142a36068;
          uVar2 = *(uint *)(lVar4 + 0x24);
          puVar7 = (uint *)(lVar4 + 0x24);
        } while (uVar2 != 0);
      }
      return '\0';
    }
LAB_142a36079:
    cVar3 = RemoveFromIntervalTree<FPakPrecacher::FPakInRequest>
                      (puVar7,param_2,param_3,param_4,param_5,param_6 + 1,param_7);
    if (cVar3 == '\0') {
      return '\0';
    }
  }
  iVar6 = DAT_14667aec8;
  if (*puVar1 != 0) {
    return cVar3;
  }
  if (puVar1[1] != 0) {
    return cVar3;
  }
  if (puVar1[2] != 0) {
    return cVar3;
  }
  lVar4 = (longlong)DAT_14667aec8;
  uVar5 = ~DAT_14667aed4;
  uVar2 = *param_1;
  DAT_14667aec8 = DAT_14667aec8 + 1;
  if (DAT_14667aecc < DAT_14667aec8) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_14667aec0,iVar6);
  }
  *(uint *)(_DAT_14667aec0 + lVar4 * 4) = uVar5 & uVar2;
  if (DAT_14667aec8 + 1 != (int)DAT_14667aeb8) goto LAB_142a36272;
  DAT_14667aeb8._0_4_ = 0;
  if (DAT_14667aeb8._4_4_ != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (&DAT_14667aeb0,0);
  }
  DAT_14667aec8 = 0;
  if (DAT_14667aecc == 0) {
LAB_142a36236:
    iVar6 = (int)DAT_14667aeb8;
    DAT_14667aeb8._0_4_ = (int)DAT_14667aeb8 + 1;
    if (DAT_14667aeb8._4_4_ < (int)DAT_14667aeb8) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(&DAT_14667aeb0,iVar6);
    }
  }
  else {
    TArray<float,FDefaultAllocator>::ResizeTo(&DAT_14667aec0,0);
    if (DAT_14667aec8 == 0) goto LAB_142a36236;
    iVar6 = *(int *)(_DAT_14667aec0 + -4 + (longlong)DAT_14667aec8 * 4);
    DAT_14667aec8 = DAT_14667aec8 + -1;
    TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(&DAT_14667aec0);
  }
  lVar4 = DAT_14667aeb0;
  *(undefined8 *)(DAT_14667aeb0 + (longlong)iVar6 * 0xc) = 0;
  *(undefined4 *)(lVar4 + 8 + (longlong)iVar6 * 0xc) = 0;
LAB_142a36272:
  *param_1 = 0;
  return cVar3;
}



// FUNCTION 142a362a0 ScanNodeListWithShrinkingInterval<FPakPrecacher::FPakInRequest> body=174 status=ok
// SIG undefined ScanNodeListWithShrinkingInterval<FPakPrecacher::FPakInRequest>(void)

undefined8
ScanNodeListWithShrinkingInterval<FPakPrecacher::FPakInRequest>
          (uint param_1,longlong *param_2,ulonglong param_3,ulonglong *param_4,undefined8 *param_5)

{
  char cVar1;
  ulonglong *puVar2;
  uint local_res8 [2];
  
  local_res8[0] = param_1;
  while( true ) {
    if (local_res8[0] == 0) {
      return 1;
    }
    puVar2 = (ulonglong *)
             ((longlong)(int)(~*(uint *)((longlong)param_2 + 0x24) & local_res8[0]) * 0x30 +
             *param_2);
    if (((param_3 <= ((*puVar2 & 0xffffffffffff) - 1) + puVar2[1]) &&
        ((*puVar2 & 0xffffffffffff) <= *param_4)) &&
       (cVar1 = (*(code *)*param_5)(param_5[1],local_res8), cVar1 == '\0')) break;
    local_res8[0] = *(uint *)((longlong)puVar2 + 0x24);
  }
  return 0;
}



// FUNCTION 142a36350 Sort<FPakPlatformFile::FPakListEntry,TDereferenceWrapper<FPakPlatformFile::FPakListEntry,TLess<FPakPlatformFile::FPakListEntry>_>_> body=700 status=ok
// SIG undefined Sort<FPakPlatformFile::FPakListEntry,TDereferenceWrapper<FPakPlatformFile::FPakListEntry,TLess<FPakPlatformFile::FPakListEntry>_>_>(void)

void TMergeSort<TRotationInPlaceMerge<TJugglingRotation<FEuclidDivisionGCD>_>,2>::
     Sort<FPakPlatformFile::FPakListEntry,TDereferenceWrapper<FPakPlatformFile::FPakListEntry,TLess<FPakPlatformFile::FPakListEntry>_>_>
               (uint *param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  uint *puVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  int local_88;
  uint local_50 [6];
  
  uVar19 = (ulonglong)(int)param_2;
  if (0 < (int)param_2) {
    iVar10 = 1;
    lVar16 = (uVar19 - 1 >> 1) + 1;
    puVar9 = param_1;
    do {
      if ((iVar10 < (int)param_2) && (*puVar9 < puVar9[4])) {
        puVar17 = param_1 + (longlong)iVar10 * 4;
        puVar7 = param_1 + (longlong)(iVar10 + -1) * 4;
        if (puVar7 != puVar17) {
          uVar1 = *(undefined8 *)(puVar17 + 2);
          uVar2 = *(undefined8 *)puVar7;
          uVar3 = *(undefined8 *)(puVar7 + 2);
          *(undefined8 *)puVar7 = *(undefined8 *)puVar17;
          *(undefined8 *)(puVar7 + 2) = uVar1;
          *(undefined8 *)puVar17 = uVar2;
          *(undefined8 *)(puVar17 + 2) = uVar3;
        }
      }
      iVar10 = iVar10 + 2;
      puVar9 = puVar9 + 8;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  local_88 = 2;
  uVar5 = uVar19;
  if (2 < (int)param_2) {
    do {
      iVar10 = local_88 * 2;
      iVar20 = 0;
      lVar16 = 0;
      puVar9 = param_1;
      do {
        iVar22 = (int)uVar5 - iVar20;
        if (iVar10 <= iVar22) {
          iVar22 = iVar10;
        }
        iVar8 = 0;
        iVar21 = local_88;
        if (0 < local_88) {
          do {
            if (iVar22 <= iVar21) break;
            lVar15 = 0;
            if (iVar21 - iVar8 != 0) {
              uVar5 = (longlong)(iVar21 - iVar8);
              do {
                uVar12 = uVar5 >> 1;
                if (puVar9[(longlong)iVar21 * 4] <= puVar9[((longlong)iVar8 + uVar12 + lVar15) * 4])
                {
                  lVar15 = (ulonglong)((uint)uVar5 & 1) + uVar12 + lVar15;
                }
                uVar5 = uVar12;
              } while (uVar12 != 0);
            }
            iVar8 = iVar8 + (int)lVar15;
            if (iVar21 <= iVar8) break;
            uVar5 = 0;
            if (iVar22 - iVar21 != 0) {
              uVar12 = (longlong)(iVar22 - iVar21);
              do {
                uVar13 = uVar12 >> 1;
                if (puVar9[(longlong)iVar8 * 4] < puVar9[((longlong)iVar21 + uVar13 + uVar5) * 4]) {
                  uVar5 = (ulonglong)((uint)uVar12 & 1) + uVar13 + uVar5;
                }
                uVar12 = uVar13;
              } while (uVar13 != 0);
            }
            iVar14 = (int)uVar5;
            if (iVar14 != 0) {
              uVar5 = uVar5 & 0xffffffff;
              iVar18 = (iVar14 - iVar8) + iVar21;
              iVar11 = iVar18;
              do {
                iVar4 = (int)uVar5;
                uVar6 = iVar11 % iVar4;
                uVar5 = (ulonglong)uVar6;
                iVar11 = iVar4;
              } while (uVar6 != 0);
              uVar5 = 0;
              if (0 < iVar4) {
                puVar17 = puVar9 + (longlong)iVar8 * 4;
                do {
                  iVar11 = (int)uVar5;
                  uVar6 = *puVar17;
                  uVar24 = puVar17[1];
                  uVar26 = puVar17[2];
                  uVar28 = puVar17[3];
                  uVar12 = (longlong)iVar18 / (longlong)iVar4 & 0xffffffff;
                  if (0 < (int)((longlong)iVar18 / (longlong)iVar4)) {
                    do {
                      uVar13 = (longlong)((int)uVar5 + iVar14) % (longlong)iVar18;
                      uVar5 = uVar13 & 0xffffffff;
                      puVar7 = puVar9 + (longlong)((int)uVar13 + iVar8) * 4;
                      uVar23 = uVar6;
                      uVar25 = uVar24;
                      uVar27 = uVar26;
                      uVar29 = uVar28;
                      if (puVar7 != local_50) {
                        uVar23 = *puVar7;
                        uVar25 = puVar7[1];
                        uVar27 = puVar7[2];
                        uVar29 = puVar7[3];
                        *puVar7 = uVar6;
                        puVar7[1] = uVar24;
                        puVar7[2] = uVar26;
                        puVar7[3] = uVar28;
                      }
                      uVar12 = uVar12 - 1;
                      uVar6 = uVar23;
                      uVar24 = uVar25;
                      uVar26 = uVar27;
                      uVar28 = uVar29;
                    } while (uVar12 != 0);
                  }
                  uVar6 = iVar11 + 1;
                  uVar5 = (ulonglong)uVar6;
                  puVar17 = puVar17 + 4;
                } while ((int)uVar6 < iVar4);
              }
            }
            iVar21 = iVar21 + iVar14;
            iVar8 = iVar8 + 1 + iVar14;
          } while (iVar8 < iVar21);
          uVar5 = (ulonglong)param_2;
        }
        iVar20 = iVar20 + local_88 * 2;
        lVar16 = lVar16 + (longlong)local_88 * 2;
        puVar9 = puVar9 + (longlong)local_88 * 8;
      } while (lVar16 < (longlong)uVar19);
      local_88 = iVar10;
    } while (iVar10 < (int)uVar5);
  }
  return;
}



// FUNCTION 142a36610 FUN_142a36610 body=4627 status=ok
// SIG undefined FUN_142a36610(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_142a36610(undefined8 *param_1,undefined8 param_2,short *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  char cVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  longlong *plVar18;
  uint *puVar19;
  int *piVar20;
  int iVar21;
  int iVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  undefined4 uVar26;
  undefined2 *puVar27;
  uint *puVar28;
  uint uVar29;
  longlong lVar30;
  longlong lVar31;
  undefined8 *puVar32;
  longlong lVar33;
  longlong lVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined1 auStack_668 [32];
  undefined2 *local_648;
  uint local_638;
  uint uStack_634;
  uint uStack_630;
  uint uStack_62c;
  uint local_628;
  uint uStack_624;
  uint uStack_620;
  uint uStack_61c;
  uint local_618;
  uint uStack_614;
  uint uStack_610;
  uint uStack_60c;
  uint local_608 [4];
  longlong local_5f8;
  ulonglong local_5f0;
  undefined2 *local_5e8;
  int local_5e0;
  longlong local_5d8 [2];
  undefined8 *local_5c8;
  uint uStack_5bc;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  uint local_478 [4];
  uint local_468;
  uint local_464;
  uint local_460;
  uint local_45c;
  uint local_458;
  uint local_454;
  uint local_450;
  uint local_44c;
  uint local_448;
  uint local_444;
  uint local_440;
  int local_43c;
  uint local_3f8 [4];
  uint local_3e8;
  uint local_3e4;
  uint local_3e0;
  uint local_3dc;
  uint local_3d8;
  uint local_3d4;
  uint local_3d0;
  uint local_3cc;
  uint local_3c8;
  uint local_3c4;
  uint local_3c0;
  int local_3bc;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  int local_338 [4];
  undefined4 local_328;
  undefined4 local_324;
  undefined4 local_320;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_308;
  undefined4 local_304;
  undefined4 local_300;
  undefined4 local_2fc;
  int local_2b8 [4];
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  uint local_108 [4];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_668;
  *param_1 = &PTR_IsPromotedBuild_145360f48;
  puVar32 = param_1 + 6;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar31 = 8;
  param_1[4] = 0;
  param_1[5] = param_2;
  local_5c8 = param_1;
  do {
    *puVar32 = 0;
    *(undefined4 *)(puVar32 + 1) = 0;
    *(undefined4 *)((longlong)puVar32 + 0xc) = 0xffffffff;
    puVar32[2] = 0;
    uVar17 = FMemory::Malloc(0x10000,0);
    *puVar32 = uVar17;
    puVar32 = puVar32 + 3;
    lVar31 = lVar31 + -1;
  } while (lVar31 != 0);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x20),4000);
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x3b] = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 0x4c,0,0x80);
  FUN_142a4dc30(param_1);
  local_5d8[0] = 0;
  local_5d8[1] = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_5d8,0);
  FGenericPlatformString::Memcpy(local_5d8[0],&DAT_14535ddd8,8);
  local_5f0 = 0;
  local_5f8 = 0;
  if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
    lVar31 = -1;
    do {
      lVar31 = lVar31 + 1;
    } while (param_3[lVar31] != 0);
    uVar29 = (int)lVar31 + 1;
    local_5f0 = (ulonglong)uVar29;
    if (0 < (int)uVar29) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_5f8,0);
    }
    FGenericPlatformString::Memcpy(local_5f8,param_3,(longlong)(int)uVar29 * 2);
  }
  FUN_141665540(&local_5e8,&local_5f8,local_5d8);
  if (local_5f8 != 0) {
    FMemory::Free();
  }
  if (local_5d8[0] != 0) {
    FMemory::Free();
  }
  plVar18 = (longlong *)FUN_1415c3d50();
  puVar27 = &DAT_143f3eda8;
  if (local_5e0 != 0) {
    puVar27 = local_5e8;
  }
  plVar18 = (longlong *)(**(code **)(*plVar18 + 0x18))(plVar18,puVar27,0);
  if (plVar18 == (longlong *)0x0) {
    puVar27 = &DAT_143f3eda8;
    if (local_5e0 != 0) {
      puVar27 = local_5e8;
    }
    LowLevelFatalErrorHandler("Unknown",0x2e,L"Couldn\'t find pak signature file \'%s\'",puVar27);
    local_648 = &DAT_143f3eda8;
    if (local_5e0 != 0) {
      local_648 = local_5e8;
    }
    FDebug::AssertFailed(&DAT_14535daca,"Unknown",0x2e,L"Couldn\'t find pak signature file \'%s\'");
  }
  uStack_370 = 0;
  local_368 = 0;
  uStack_360 = 0;
  local_358 = 0;
  uStack_350 = 0;
  puVar32 = &local_378;
  local_348 = 0;
  uStack_340 = 0;
  lVar31 = 0x10;
  local_378 = 0;
  do {
    puVar2 = *(undefined4 **)plVar18[1];
    if ((undefined4 *)((undefined8 *)plVar18[1])[1] < puVar2 + 1) {
      (**(code **)(*plVar18 + 0x50))(plVar18,puVar32,4);
      if ((*(byte *)((longlong)plVar18 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(plVar18,puVar32,4);
      }
    }
    else {
      *(undefined4 *)puVar32 = *puVar2;
      *(longlong *)plVar18[1] = *(longlong *)plVar18[1] + 4;
    }
    puVar32 = (undefined8 *)((longlong)puVar32 + 4);
    lVar31 = lVar31 + -1;
  } while (lVar31 != 0);
  FUN_1408bda20(plVar18,param_1 + 1);
  (**(code **)*plVar18)(plVar18,1);
  uVar16 = FCrc::MemCrc32(param_1[1],*(int *)(param_1 + 2) * 4,0);
  uVar17 = 0;
  uVar35 = 0;
  uVar36 = 0;
  uVar37 = 0;
  uVar38 = 0;
  uVar39 = 0;
  *(undefined4 *)(param_1 + 3) = uVar16;
  uStack_530 = 0;
  local_568 = param_1[0x56];
  uStack_560 = param_1[0x57];
  local_538 = 1;
  local_578 = param_1[0x54];
  uStack_570 = param_1[0x55];
  local_558 = param_1[0x58];
  uStack_550 = param_1[0x59];
  local_5b8 = param_1[0x4c];
  uStack_5b0 = param_1[0x4d];
  local_548 = param_1[0x5a];
  uStack_540 = param_1[0x5b];
  local_5a8 = param_1[0x4e];
  uStack_5a0 = param_1[0x4f];
  local_598 = param_1[0x50];
  uStack_590 = param_1[0x51];
  local_588 = param_1[0x52];
  uStack_580 = param_1[0x53];
  local_638 = (undefined4)local_378;
  uStack_634 = local_378._4_4_;
  uStack_630 = (undefined4)uStack_370;
  uStack_62c = uStack_370._4_4_;
  local_628 = (undefined4)local_368;
  uStack_624 = local_368._4_4_;
  uStack_620 = (undefined4)uStack_360;
  uStack_61c = uStack_360._4_4_;
  local_618 = (undefined4)local_358;
  uStack_614 = local_358._4_4_;
  uStack_610 = (undefined4)uStack_350;
  uStack_60c = uStack_350._4_4_;
  local_608[0] = (uint)local_348;
  local_608[1] = local_348._4_4_;
  local_608[2] = (undefined4)uStack_340;
  local_608[3] = uStack_340._4_4_;
  local_528 = 0;
  uStack_520 = 0;
  local_518 = 0;
  uStack_510 = 0;
  local_508 = 0;
  uStack_500 = 0;
  uVar29 = (uint)local_348;
  uVar16 = local_348._4_4_;
  uVar26 = (undefined4)uStack_340;
  iVar22 = uStack_340._4_4_;
  while (uVar14 = uStack_60c, uVar13 = uStack_610, uVar12 = uStack_614, uVar11 = local_618,
        uVar10 = uStack_61c, uVar9 = uStack_620, uVar8 = uStack_624, uVar7 = local_628,
        uVar6 = uStack_62c, uVar5 = uStack_630, uVar4 = uStack_634, uVar3 = local_638,
        local_608[0] = uVar29, local_608[1] = uVar16, local_608[2] = uVar26, local_608[3] = iVar22,
        -1 < uStack_580) {
    iVar21 = 0xf;
    piVar20 = (int *)((longlong)&local_588 + 4);
    lVar31 = 0xf;
    do {
      if (piVar20[2] != 0) break;
      if (piVar20[1] != 0) {
        iVar21 = iVar21 + -1;
        break;
      }
      if (*piVar20 != 0) {
        iVar21 = iVar21 + -2;
        break;
      }
      if (piVar20[-1] != 0) {
        iVar21 = iVar21 + -3;
        break;
      }
      piVar20 = piVar20 + -4;
      iVar21 = iVar21 + -4;
      lVar31 = lVar31 + -4;
    } while (-1 < lVar31);
    if (iVar21 < 0) break;
    if ((local_5b8 & 1) != 0) {
      _guard_xfg_dispatch_icall_nop(local_478,0,0x80);
      piVar20 = (int *)((longlong)&local_188 + 4);
      iVar21 = 0xf;
      local_1b8 = local_538;
      uStack_1b0 = uStack_530;
      lVar31 = 0xf;
      local_1a8 = uVar17;
      uStack_1a0 = uVar35;
      local_198 = uVar36;
      uStack_190 = uVar37;
      local_188 = uVar38;
      uStack_180 = uVar39;
      do {
        if (piVar20[2] != 0) break;
        if (piVar20[1] != 0) {
          iVar21 = iVar21 + -1;
          break;
        }
        if (*piVar20 != 0) {
          iVar21 = iVar21 + -2;
          break;
        }
        if (piVar20[-1] != 0) {
          iVar21 = iVar21 + -3;
          break;
        }
        piVar20 = piVar20 + -4;
        iVar21 = iVar21 + -4;
        lVar31 = lVar31 + -4;
      } while (-1 < lVar31);
      lVar31 = 0xf;
      puVar19 = local_608 + 1;
      do {
        if (puVar19[2] != 0) break;
        if (puVar19[1] != 0) {
          lVar31 = lVar31 + -1;
          break;
        }
        if (*puVar19 != 0) {
          lVar31 = lVar31 + -2;
          break;
        }
        if (puVar19[-1] != 0) {
          lVar31 = lVar31 + -3;
          break;
        }
        puVar19 = puVar19 + -4;
        lVar31 = lVar31 + -4;
      } while (-1 < lVar31);
      lVar30 = (longlong)(iVar21 + 1);
      lVar31 = lVar31 + 1;
      if (0 < iVar21 + 1) {
        puVar19 = local_478 + lVar31;
        lVar34 = -0x1c0;
        do {
          uVar1 = puVar19[0xb0 - lVar31];
          uVar23 = 0;
          if (0 < lVar31) {
            puVar28 = puVar19 + -lVar31;
            lVar33 = lVar31;
            do {
              uVar23 = (ulonglong)*puVar28 +
                       (ulonglong)*(uint *)(lVar34 + (longlong)puVar28) * (ulonglong)uVar1 + uVar23;
              *puVar28 = (uint)uVar23;
              uVar23 = uVar23 >> 0x20;
              lVar33 = lVar33 + -1;
              puVar28 = puVar28 + 1;
            } while (lVar33 != 0);
          }
          *puVar19 = *puVar19 + (int)uVar23;
          lVar34 = lVar34 + -4;
          puVar19 = puVar19 + 1;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
      }
      uVar23 = (ulonglong)local_478[0];
      uVar25 = (ulonglong)local_478[1];
      uStack_530 = CONCAT44(local_478[3],local_478[2]);
      local_528 = CONCAT44(local_464,local_468);
      uStack_520 = CONCAT44(local_45c,local_460);
      local_518 = CONCAT44(local_454,local_458);
      uStack_510 = CONCAT44(local_44c,local_450);
      local_508 = CONCAT44(local_444,local_448);
      uStack_500 = CONCAT44(local_43c,local_440);
      local_4e8 = local_528;
      uStack_4e0 = uStack_520;
      local_538 = CONCAT44(local_478[1],local_478[0]);
      local_4f8 = local_538;
      uStack_4f0 = uStack_530;
      local_4c8 = local_508;
      uStack_4c0 = uStack_500;
      local_238 = 0;
      local_230 = 0;
      local_228 = 0;
      local_220 = 0;
      local_218 = 0;
      local_210 = 0;
      local_208 = 0;
      local_200 = 0;
      local_4d8 = local_518;
      uStack_4d0 = uStack_510;
      TBigInt<512,1>::DivideWithRemainder(&local_4f8,&local_578,&local_238);
      _guard_xfg_dispatch_icall_nop(local_338,0,0x80);
      piVar20 = (int *)((longlong)&local_148 + 4);
      iVar21 = 0xf;
      local_178 = local_4f8;
      uStack_170 = uStack_4f0;
      lVar31 = 0xf;
      local_168 = local_4e8;
      uStack_160 = uStack_4e0;
      local_158 = local_4d8;
      uStack_150 = uStack_4d0;
      local_148 = local_4c8;
      uStack_140 = uStack_4c0;
      do {
        if (piVar20[2] != 0) break;
        if (piVar20[1] != 0) {
          iVar21 = iVar21 + -1;
          break;
        }
        if (*piVar20 != 0) {
          iVar21 = iVar21 + -2;
          break;
        }
        if (piVar20[-1] != 0) {
          iVar21 = iVar21 + -3;
          break;
        }
        piVar20 = piVar20 + -4;
        iVar21 = iVar21 + -4;
        lVar31 = lVar31 + -4;
      } while (-1 < lVar31);
      lVar31 = 0xf;
      piVar20 = (int *)((longlong)&local_548 + 4);
      do {
        if (piVar20[2] != 0) break;
        if (piVar20[1] != 0) {
          lVar31 = lVar31 + -1;
          break;
        }
        if (*piVar20 != 0) {
          lVar31 = lVar31 + -2;
          break;
        }
        if (piVar20[-1] != 0) {
          lVar31 = lVar31 + -3;
          break;
        }
        piVar20 = piVar20 + -4;
        lVar31 = lVar31 + -4;
      } while (-1 < lVar31);
      lVar30 = (longlong)(iVar21 + 1);
      lVar31 = lVar31 + 1;
      if (0 < iVar21 + 1) {
        piVar20 = local_338 + lVar31;
        lVar34 = -0x240;
        do {
          uVar1 = piVar20[0x70 - lVar31];
          uVar24 = 0;
          if (0 < lVar31) {
            puVar19 = (uint *)(piVar20 + -lVar31);
            lVar33 = lVar31;
            do {
              uVar24 = (ulonglong)*puVar19 +
                       (ulonglong)*(uint *)(lVar34 + (longlong)puVar19) * (ulonglong)uVar1 + uVar24;
              *puVar19 = (uint)uVar24;
              uVar24 = uVar24 >> 0x20;
              lVar33 = lVar33 + -1;
              puVar19 = puVar19 + 1;
            } while (lVar33 != 0);
          }
          *piVar20 = *piVar20 + (int)uVar24;
          lVar34 = lVar34 + -4;
          piVar20 = piVar20 + 1;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
      }
      local_4f8 = CONCAT44(local_338[1],local_338[0]);
      uStack_4f0 = CONCAT44(local_338[3],local_338[2]);
      local_4e8 = CONCAT44(local_324,local_328);
      uStack_4e0 = CONCAT44(local_31c,local_320);
      local_4d8 = CONCAT44(local_314,local_318);
      uStack_4d0 = CONCAT44(local_30c,local_310);
      local_4c8 = CONCAT44(local_304,local_308);
      uStack_4c0 = CONCAT44(local_2fc,local_300);
      TBigInt<512,1>::Negate(&local_4f8);
      uVar23 = (local_4f8 & 0xffffffff) + uVar23;
      uVar25 = (uVar23 >> 0x20) + uVar25 + (local_4f8 >> 0x20);
      local_538 = CONCAT44((int)uVar25,(int)uVar23);
      uVar25 = (ulonglong)local_478[2] + (uVar25 >> 0x20) + (uStack_4f0 & 0xffffffff);
      uVar23 = (ulonglong)local_478[3] + (uVar25 >> 0x20) + (uStack_4f0 >> 0x20);
      uStack_530 = CONCAT44((int)uVar23,(int)uVar25);
      uVar25 = (ulonglong)local_468 + (uVar23 >> 0x20) + (local_4e8 & 0xffffffff);
      uVar23 = (ulonglong)local_464 + (uVar25 >> 0x20) + (local_4e8 >> 0x20);
      uVar17 = CONCAT44((int)uVar23,(int)uVar25);
      uVar25 = (ulonglong)local_460 + (uVar23 >> 0x20) + (uStack_4e0 & 0xffffffff);
      uVar23 = (ulonglong)local_45c + (uVar25 >> 0x20) + (uStack_4e0 >> 0x20);
      uVar35 = CONCAT44((int)uVar23,(int)uVar25);
      uVar25 = (ulonglong)local_458 + (uVar23 >> 0x20) + (local_4d8 & 0xffffffff);
      uVar23 = (ulonglong)local_454 + (uVar25 >> 0x20) + (local_4d8 >> 0x20);
      uVar36 = CONCAT44((int)uVar23,(int)uVar25);
      uVar25 = (ulonglong)local_450 + (uVar23 >> 0x20) + (uStack_4d0 & 0xffffffff);
      uVar23 = (uStack_4d0 >> 0x20) + (uVar25 >> 0x20) + (ulonglong)local_44c;
      uVar37 = CONCAT44((int)uVar23,(int)uVar25);
      uVar25 = (local_4c8 & 0xffffffff) + (uVar23 >> 0x20) + (ulonglong)local_448;
      uVar23 = (local_4c8 >> 0x20) + (uVar25 >> 0x20) + (ulonglong)local_444;
      uVar38 = CONCAT44((int)uVar23,(int)uVar25);
      lVar31 = (uStack_4c0 & 0xffffffff) + (uVar23 >> 0x20) + (ulonglong)local_440;
      uVar39 = CONCAT44((int)((ulonglong)lVar31 >> 0x20) + uStack_4c0._4_4_ + local_43c,(int)lVar31)
      ;
      local_528 = uVar17;
      uStack_520 = uVar35;
      local_518 = uVar36;
      uStack_510 = uVar37;
      local_508 = uVar38;
      uStack_500 = uVar39;
    }
    uVar1 = (uint)local_598;
    lVar31 = 9;
    local_598 = CONCAT44(local_598._4_4_,(uint)local_598 >> 1);
    local_5b8 = CONCAT44((uint)uStack_5b0 << 0x1f | local_5b8._4_4_ >> 1,
                         local_5b8._4_4_ << 0x1f | (uint)local_5b8 >> 1);
    uStack_5b0 = CONCAT44((uint)local_5a8 << 0x1f | uStack_5b0._4_4_ >> 1,
                          uStack_5b0._4_4_ << 0x1f | (uint)uStack_5b0 >> 1);
    local_5a8 = CONCAT44((uint)uStack_5a0 << 0x1f | local_5a8._4_4_ >> 1,
                         local_5a8._4_4_ << 0x1f | (uint)local_5a8 >> 1);
    uStack_5a0 = CONCAT44(uVar1 << 0x1f | uStack_5a0._4_4_ >> 1,
                          uStack_5a0._4_4_ << 0x1f | (uint)uStack_5a0 >> 1);
    do {
      uVar1 = *(uint *)((longlong)&local_5b8 + lVar31 * 4);
      (&uStack_5bc)[lVar31] = (&uStack_5bc)[lVar31] | uVar1 << 0x1f;
      *(uint *)((longlong)&local_5b8 + lVar31 * 4) = uVar1 >> 1;
      lVar31 = lVar31 + 1;
    } while (lVar31 < 0x10);
    _guard_xfg_dispatch_icall_nop(local_3f8,0,0x80);
    iVar21 = 0xf;
    local_138 = uVar3;
    uStack_134 = uVar4;
    uStack_130 = uVar5;
    uStack_12c = uVar6;
    lVar31 = 0xf;
    local_128 = uVar7;
    uStack_124 = uVar8;
    uStack_120 = uVar9;
    uStack_11c = uVar10;
    local_118 = uVar11;
    uStack_114 = uVar12;
    uStack_110 = uVar13;
    uStack_10c = uVar14;
    puVar19 = local_108 + 1;
    local_108[0] = uVar29;
    local_108[1] = uVar16;
    local_108[2] = uVar26;
    local_108[3] = iVar22;
    do {
      if (puVar19[2] != 0) break;
      if (puVar19[1] != 0) {
        iVar21 = iVar21 + -1;
        break;
      }
      if (*puVar19 != 0) {
        iVar21 = iVar21 + -2;
        break;
      }
      if (puVar19[-1] != 0) {
        iVar21 = iVar21 + -3;
        break;
      }
      puVar19 = puVar19 + -4;
      iVar21 = iVar21 + -4;
      lVar31 = lVar31 + -4;
    } while (-1 < lVar31);
    lVar31 = 0xf;
    puVar19 = local_608 + 1;
    do {
      if (puVar19[2] != 0) break;
      if (puVar19[1] != 0) {
        lVar31 = lVar31 + -1;
        break;
      }
      if (*puVar19 != 0) {
        lVar31 = lVar31 + -2;
        break;
      }
      if (puVar19[-1] != 0) {
        lVar31 = lVar31 + -3;
        break;
      }
      puVar19 = puVar19 + -4;
      lVar31 = lVar31 + -4;
    } while (-1 < lVar31);
    lVar30 = (longlong)(iVar21 + 1);
    lVar31 = lVar31 + 1;
    if (0 < iVar21 + 1) {
      puVar19 = local_3f8 + lVar31;
      lVar34 = -0x240;
      do {
        uVar29 = puVar19[0xb0 - lVar31];
        uVar23 = 0;
        if (0 < lVar31) {
          puVar28 = puVar19 + -lVar31;
          lVar33 = lVar31;
          do {
            uVar23 = (ulonglong)*puVar28 +
                     (ulonglong)*(uint *)(lVar34 + (longlong)puVar28) * (ulonglong)uVar29 + uVar23;
            *puVar28 = (uint)uVar23;
            uVar23 = uVar23 >> 0x20;
            lVar33 = lVar33 + -1;
            puVar28 = puVar28 + 1;
          } while (lVar33 != 0);
        }
        *puVar19 = *puVar19 + (int)uVar23;
        lVar34 = lVar34 + -4;
        puVar19 = puVar19 + 1;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
    }
    uVar23 = (ulonglong)local_3f8[0];
    uVar25 = (ulonglong)local_3f8[1];
    uStack_630 = local_3f8[2];
    uStack_62c = local_3f8[3];
    local_628 = local_3e8;
    uStack_624 = local_3e4;
    uStack_620 = local_3e0;
    uStack_61c = local_3dc;
    local_4a8 = CONCAT44(local_3e4,local_3e8);
    uStack_4a0 = CONCAT44(local_3dc,local_3e0);
    local_618 = local_3d8;
    uStack_614 = local_3d4;
    uStack_610 = local_3d0;
    uStack_60c = local_3cc;
    local_608[0] = local_3c8;
    local_608[1] = local_3c4;
    local_608[2] = local_3c0;
    local_608[3] = local_3bc;
    local_488 = CONCAT44(local_3c4,local_3c8);
    uStack_480 = CONCAT44(local_3bc,local_3c0);
    local_638 = local_3f8[0];
    uStack_634 = local_3f8[1];
    local_4b8 = CONCAT44(local_3f8[1],local_3f8[0]);
    uStack_4b0 = CONCAT44(local_3f8[3],local_3f8[2]);
    local_498 = CONCAT44(local_3d4,local_3d8);
    uStack_490 = CONCAT44(local_3cc,local_3d0);
    local_1f8 = 0;
    local_1f0 = 0;
    local_1e8 = 0;
    local_1e0 = 0;
    local_1d8 = 0;
    local_1d0 = 0;
    local_1c8 = 0;
    local_1c0 = 0;
    TBigInt<512,1>::DivideWithRemainder(&local_4b8,&local_578,&local_1f8);
    _guard_xfg_dispatch_icall_nop(local_2b8,0,0x80);
    piVar20 = (int *)((longlong)&local_c8 + 4);
    iVar22 = 0xf;
    local_f8 = local_4b8;
    uStack_f0 = uStack_4b0;
    lVar31 = 0xf;
    local_e8 = local_4a8;
    uStack_e0 = uStack_4a0;
    local_d8 = local_498;
    uStack_d0 = uStack_490;
    local_c8 = local_488;
    uStack_c0 = uStack_480;
    do {
      if (piVar20[2] != 0) break;
      if (piVar20[1] != 0) {
        iVar22 = iVar22 + -1;
        break;
      }
      if (*piVar20 != 0) {
        iVar22 = iVar22 + -2;
        break;
      }
      if (piVar20[-1] != 0) {
        iVar22 = iVar22 + -3;
        break;
      }
      piVar20 = piVar20 + -4;
      iVar22 = iVar22 + -4;
      lVar31 = lVar31 + -4;
    } while (-1 < lVar31);
    lVar31 = 0xf;
    piVar20 = (int *)((longlong)&local_548 + 4);
    do {
      if (piVar20[2] != 0) break;
      if (piVar20[1] != 0) {
        lVar31 = lVar31 + -1;
        break;
      }
      if (*piVar20 != 0) {
        lVar31 = lVar31 + -2;
        break;
      }
      if (piVar20[-1] != 0) {
        lVar31 = lVar31 + -3;
        break;
      }
      piVar20 = piVar20 + -4;
      lVar31 = lVar31 + -4;
    } while (-1 < lVar31);
    lVar30 = (longlong)(iVar22 + 1);
    lVar31 = lVar31 + 1;
    if (0 < iVar22 + 1) {
      piVar20 = local_2b8 + lVar31;
      lVar34 = -0x2c0;
      do {
        uVar29 = piVar20[0x70 - lVar31];
        uVar24 = 0;
        if (0 < lVar31) {
          puVar19 = (uint *)(piVar20 + -lVar31);
          lVar33 = lVar31;
          do {
            uVar24 = (ulonglong)*puVar19 +
                     (ulonglong)*(uint *)(lVar34 + (longlong)puVar19) * (ulonglong)uVar29 + uVar24;
            *puVar19 = (uint)uVar24;
            uVar24 = uVar24 >> 0x20;
            lVar33 = lVar33 + -1;
            puVar19 = puVar19 + 1;
          } while (lVar33 != 0);
        }
        *piVar20 = *piVar20 + (int)uVar24;
        lVar34 = lVar34 + -4;
        piVar20 = piVar20 + 1;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
    }
    local_4b8 = CONCAT44(local_2b8[1],local_2b8[0]);
    uStack_4b0 = CONCAT44(local_2b8[3],local_2b8[2]);
    local_4a8 = CONCAT44(local_2a4,local_2a8);
    uStack_4a0 = CONCAT44(local_29c,local_2a0);
    local_498 = CONCAT44(local_294,local_298);
    uStack_490 = CONCAT44(local_28c,local_290);
    local_488 = CONCAT44(local_284,local_288);
    uStack_480 = CONCAT44(local_27c,local_280);
    TBigInt<512,1>::Negate(&local_4b8);
    uVar23 = (local_4b8 & 0xffffffff) + uVar23;
    local_638 = (uint)uVar23;
    uVar23 = (uVar23 >> 0x20) + uVar25 + (local_4b8 >> 0x20);
    uStack_634 = (uint)uVar23;
    uVar23 = (ulonglong)local_3f8[2] + (uVar23 >> 0x20) + (uStack_4b0 & 0xffffffff);
    uStack_630 = (uint)uVar23;
    uVar23 = (ulonglong)local_3f8[3] + (uVar23 >> 0x20) + (uStack_4b0 >> 0x20);
    uStack_62c = (uint)uVar23;
    uVar23 = (ulonglong)local_3e8 + (uVar23 >> 0x20) + (local_4a8 & 0xffffffff);
    local_628 = (uint)uVar23;
    uVar23 = (ulonglong)local_3e4 + (uVar23 >> 0x20) + (local_4a8 >> 0x20);
    uStack_624 = (uint)uVar23;
    uVar23 = (ulonglong)local_3e0 + (uVar23 >> 0x20) + (uStack_4a0 & 0xffffffff);
    uStack_620 = (uint)uVar23;
    uVar23 = (ulonglong)local_3dc + (uVar23 >> 0x20) + (uStack_4a0 >> 0x20);
    uStack_61c = (uint)uVar23;
    uVar23 = (ulonglong)local_3d8 + (uVar23 >> 0x20) + (local_498 & 0xffffffff);
    local_618 = (uint)uVar23;
    uVar23 = (ulonglong)local_3d4 + (uVar23 >> 0x20) + (local_498 >> 0x20);
    uStack_614 = (uint)uVar23;
    uVar23 = (ulonglong)local_3d0 + (uVar23 >> 0x20) + (uStack_490 & 0xffffffff);
    uStack_610 = (uint)uVar23;
    uVar23 = (ulonglong)local_3cc + (uVar23 >> 0x20) + (uStack_490 >> 0x20);
    uStack_60c = (uint)uVar23;
    uVar23 = (ulonglong)local_3c8 + (uVar23 >> 0x20) + (local_488 & 0xffffffff);
    uVar29 = (uint)uVar23;
    local_608[0] = uVar29;
    uVar23 = (ulonglong)local_3c4 + (uVar23 >> 0x20) + (local_488 >> 0x20);
    uVar16 = (undefined4)uVar23;
    local_608[1] = uVar16;
    lVar31 = (ulonglong)local_3c0 + (uVar23 >> 0x20) + (uStack_480 & 0xffffffff);
    uVar26 = (undefined4)lVar31;
    local_608[2] = uVar26;
    iVar22 = (int)((ulonglong)lVar31 >> 0x20) + local_3bc + uStack_480._4_4_;
    local_608[3] = iVar22;
  }
  cVar15 = FUN_1415bac00();
  puVar32 = local_5c8;
  if (cVar15 != '\0') {
    uVar17 = FUN_1415ab270(0);
    puVar32 = local_5c8;
    local_5c8[0x26] = uVar17;
    uVar17 = FUN_1415ab270(0);
    puVar32[0x27] = uVar17;
    local_648 = (undefined2 *)0xffffffffffffffff;
    uVar17 = FUN_1415d42a0(puVar32,L"FChunkCacheWorker",0,2);
    puVar32[4] = uVar17;
  }
  if (local_5e8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return puVar32;
}


