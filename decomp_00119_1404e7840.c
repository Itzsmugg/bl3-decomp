// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1404e7840 FUN_1404e7840 body=70 status=ok
// SIG undefined FUN_1404e7840(void)

void FUN_1404e7840(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UDataAsset::UDataAsset(puVar1,param_1);
    *puVar1 = &PTR_FUN_143f7a968;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    *(undefined1 *)((longlong)puVar1 + 0x6c) = 0;
  }
  return;
}



// FUNCTION 1404e7890 InternalConstructor<UAIResource_Logic> body=41 status=ok
// SIG undefined InternalConstructor<UAIResource_Logic>(void)

void InternalConstructor<UAIResource_Logic>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UDataAsset::UDataAsset(puVar1,param_1);
    *puVar1 = &PTR_FUN_143f7abf8;
  }
  return;
}



// FUNCTION 1404e79e0 FUN_1404e79e0 body=63 status=ok
// SIG undefined FUN_1404e79e0(void)

void FUN_1404e79e0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142a7ae70(puVar1,param_1);
    *puVar1 = &PTR_FUN_143f773e8;
    puVar1[5] = &PTR_LAB_143f77960;
    puVar1[0xca] = 0;
  }
  return;
}



// FUNCTION 1404e7a20 FUN_1404e7a20 body=52 status=ok
// SIG undefined FUN_1404e7a20(void)

undefined8 FUN_1404e7a20(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1404e7a60 FUN_1404e7a60 body=184 status=ok
// SIG undefined FUN_1404e7a60(void)

longlong FUN_1404e7a60(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x68);
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
  plVar4 = *(longlong **)(param_1 + 0x50);
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
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 1404e7b20 FUN_1404e7b20 body=132 status=ok
// SIG undefined FUN_1404e7b20(void)

longlong FUN_1404e7b20(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
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
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1404e7bb0 FUN_1404e7bb0 body=108 status=ok
// SIG undefined FUN_1404e7bb0(void)

longlong FUN_1404e7bb0(longlong param_1,ulonglong param_2)

{
  if (*(char *)(param_1 + 0x6c) != '\0') {
    *(undefined1 *)(param_1 + 0x6c) = 0;
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
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1404e7c20 FUN_1404e7c20 body=52 status=ok
// SIG undefined FUN_1404e7c20(void)

undefined8 FUN_1404e7c20(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1404e7c60 FUN_1404e7c60 body=52 status=ok
// SIG undefined FUN_1404e7c60(void)

undefined8 FUN_1404e7c60(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1404e7cb0 Copy body=218 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FPIELoginSettingsInternal>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    do {
      FString::operator=(param_2,param_3 + -0x10);
      FString::operator=(param_2 + 0x10,param_3);
      FString::operator=(param_2 + 0x20,param_3 + 0x10);
      puVar2 = (undefined8 *)(param_2 + 0x30);
      if (puVar2 != (undefined8 *)(param_3 + 0x20)) {
        iVar1 = *(int *)(param_3 + 0x28);
        _Src = *(void **)(param_3 + 0x20);
        *(int *)(param_2 + 0x38) = iVar1;
        if ((iVar1 == 0) && (*(int *)(param_2 + 0x3c) == 0)) {
          *(undefined4 *)(param_2 + 0x3c) = 0;
        }
        else {
          TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar2,iVar1);
          ::_guard_xfg_dispatch_icall_nop((void *)*puVar2,_Src,(longlong)iVar1);
        }
      }
      param_3 = param_3 + 0x40;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x40;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1404e7d90 EBeaconConnectionState_StaticEnum body=85 status=ok
// SIG undefined EBeaconConnectionState_StaticEnum(void)

void EBeaconConnectionState_StaticEnum(void)

{
  if (DAT_146852fb8 == 0) {
    if (DAT_146853118 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146853118,&PTR_s__Script_OnlineSubsystemUtils_143f7b0f8);
    }
    DAT_146852fb8 = GetStaticEnum(FUN_1404e8260,DAT_146853118,L"EBeaconConnectionState");
  }
  return;
}



// FUNCTION 1404e7df0 Get_Z_Construct_UScriptStruct_FPIELoginSettingsInternal_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FPIELoginSettingsInternal_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FPIELoginSettingsInternal_CRC(void)

{
  return 0x58e8a081;
}



// FUNCTION 1404e7e00 LoadAsset body=83 status=ok
// SIG undefined LoadAsset(void)

void USoundNodeAssetReferencer::LoadAsset(void)

{
  LowLevelFatalErrorHandler
            ("..\\Plugins\\Gearbox\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils/Classes/DownloadablePackageLicenseItem.h"
             ,0x11,L"Pure virtual not implemented (%s)",L"UDownloadablePackageLicenseItem::Install")
  ;
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "..\\Plugins\\Gearbox\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils/Classes/DownloadablePackageLicenseItem.h"
             ,0x11,L"Pure virtual not implemented (%s)",L"UDownloadablePackageLicenseItem::Install")
  ;
  return;
}



// FUNCTION 1404e7ed0 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UChannel::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 1404e7ee0 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UDataAsset::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 1404e7ef0 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UDeveloperSettings::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 1404e7f00 thunk_FUN_142c4ba60 body=5 status=ok
// SIG undefined thunk_FUN_142c4ba60(void)

void thunk_FUN_142c4ba60(void)

{
  FUN_142c4ba60();
  return;
}



// FUNCTION 1404e7f10 thunk_FUN_1429c30a0 body=5 status=ok
// SIG undefined thunk_FUN_1429c30a0(void)

void thunk_FUN_1429c30a0(void)

{
  FUN_1429c30a0();
  return;
}



// FUNCTION 1404e7f20 thunk_FUN_1429c3150 body=5 status=ok
// SIG undefined thunk_FUN_1429c3150(void)

void thunk_FUN_1429c3150(void)

{
  FUN_1429c3150();
  return;
}



// FUNCTION 1404e7f30 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UOnlineEngineInterface::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 1404e7f40 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UOnlineSession::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 1404e7f50 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UPrimaryDataAsset::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 1404e7f70 FUN_1404e7f70 body=34 status=ok
// SIG undefined FUN_1404e7f70(void)

void FUN_1404e7f70(void)

{
  undefined8 uVar1;
  
  uVar1 = ALandscapeStreamingProxy::StaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_IsIdling_143f7b120,1);
  return;
}



// FUNCTION 1404e7fa0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FPIELoginSettingsInternal::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1468530e8 == 0) {
    if (DAT_146853118 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146853118,&PTR_s__Script_OnlineSubsystemUtils_143f7b0f8);
    }
    lVar1 = DAT_146853118;
    uVar2 = Get_Z_Construct_UScriptStruct_FPIELoginSettingsInternal_CRC();
    DAT_1468530e8 = GetStaticStruct(FUN_1404e8290,lVar1,L"PIELoginSettingsInternal",0x40,uVar2);
  }
  return;
}



// FUNCTION 1404e8020 FUN_1404e8020 body=47 status=ok
// SIG undefined FUN_1404e8020(void)

longlong FUN_1404e8020(void)

{
  if (DAT_146853020 == 0) {
    FUN_141786440(&DAT_146853020,&PTR_FUN_143f78b40);
  }
  return DAT_146853020;
}



// FUNCTION 1404e8050 FUN_1404e8050 body=47 status=ok
// SIG undefined FUN_1404e8050(void)

longlong FUN_1404e8050(void)

{
  if (DAT_146853030 == 0) {
    FUN_141786440(&DAT_146853030,&PTR_FUN_143f78d30);
  }
  return DAT_146853030;
}



// FUNCTION 1404e8080 FUN_1404e8080 body=47 status=ok
// SIG undefined FUN_1404e8080(void)

longlong FUN_1404e8080(void)

{
  if (DAT_146853040 == 0) {
    FUN_141786440(&DAT_146853040,&PTR_FUN_143f79000);
  }
  return DAT_146853040;
}



// FUNCTION 1404e80b0 FUN_1404e80b0 body=47 status=ok
// SIG undefined FUN_1404e80b0(void)

longlong FUN_1404e80b0(void)

{
  if (DAT_146853050 == 0) {
    FUN_141786440(&DAT_146853050,&PTR_FUN_143f79560);
  }
  return DAT_146853050;
}



// FUNCTION 1404e80e0 FUN_1404e80e0 body=47 status=ok
// SIG undefined FUN_1404e80e0(void)

longlong FUN_1404e80e0(void)

{
  if (DAT_146853060 == 0) {
    FUN_141786440(&DAT_146853060,&PTR_FUN_143f797a0);
  }
  return DAT_146853060;
}



// FUNCTION 1404e8110 FUN_1404e8110 body=47 status=ok
// SIG undefined FUN_1404e8110(void)

longlong FUN_1404e8110(void)

{
  if (DAT_146853070 == 0) {
    FUN_141786440(&DAT_146853070,&PTR_FUN_143f79920);
  }
  return DAT_146853070;
}



// FUNCTION 1404e8140 FUN_1404e8140 body=47 status=ok
// SIG undefined FUN_1404e8140(void)

longlong FUN_1404e8140(void)

{
  if (DAT_146853080 == 0) {
    FUN_141786440(&DAT_146853080,&PTR_FUN_143f79a60);
  }
  return DAT_146853080;
}



// FUNCTION 1404e8170 FUN_1404e8170 body=47 status=ok
// SIG undefined FUN_1404e8170(void)

longlong FUN_1404e8170(void)

{
  if (DAT_1468530b8 == 0) {
    FUN_141786440(&DAT_1468530b8,&PTR_FUN_143f79300);
  }
  return DAT_1468530b8;
}



// FUNCTION 1404e81a0 FUN_1404e81a0 body=47 status=ok
// SIG undefined FUN_1404e81a0(void)

longlong FUN_1404e81a0(void)

{
  if (DAT_1468530c8 == 0) {
    FUN_141786440(&DAT_1468530c8,&PTR_GetPrivateStaticClass_143f79490);
  }
  return DAT_1468530c8;
}



// FUNCTION 1404e81d0 FUN_1404e81d0 body=47 status=ok
// SIG undefined FUN_1404e81d0(void)

longlong FUN_1404e81d0(void)

{
  if (DAT_1468530d8 == 0) {
    FUN_141786440(&DAT_1468530d8,&PTR_FUN_143f785e0);
  }
  return DAT_1468530d8;
}



// FUNCTION 1404e8200 FUN_1404e8200 body=47 status=ok
// SIG undefined FUN_1404e8200(void)

longlong FUN_1404e8200(void)

{
  if (DAT_1468530f8 == 0) {
    FUN_141786440(&DAT_1468530f8,&PTR_StaticClass_143f789e0);
  }
  return DAT_1468530f8;
}



// FUNCTION 1404e8230 FUN_1404e8230 body=47 status=ok
// SIG undefined FUN_1404e8230(void)

longlong FUN_1404e8230(void)

{
  if (DAT_146853108 == 0) {
    FUN_141786440(&DAT_146853108,&PTR_FUN_143f78330);
  }
  return DAT_146853108;
}



// FUNCTION 1404e8260 FUN_1404e8260 body=47 status=ok
// SIG undefined FUN_1404e8260(void)

longlong FUN_1404e8260(void)

{
  if (DAT_1468530b0 == 0) {
    FUN_1417866a0(&DAT_1468530b0,&PTR_FUN_1461fc600);
  }
  return DAT_1468530b0;
}



// FUNCTION 1404e8290 FUN_1404e8290 body=47 status=ok
// SIG undefined FUN_1404e8290(void)

longlong FUN_1404e8290(void)

{
  if (DAT_1468530f0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1468530f0,&PTR_FUN_1461fc360);
  }
  return DAT_1468530f0;
}



// FUNCTION 1404e82c0 FUN_1404e82c0 body=43 status=ok
// SIG undefined FUN_1404e82c0(void)

void FUN_1404e82c0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1404d5830();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1404e82f0 StartupModule body=144 status=ok
// SIG undefined StartupModule(void)

void FOnlineSubsystemNullModule::StartupModule(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  puVar3 = (undefined8 *)operator_new(8);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_143f7db70;
  }
  *(undefined8 **)(param_1 + 8) = puVar3;
  puVar3 = (undefined8 *)FName::FName(local_res8,"OnlineSubsystem",1);
  uVar1 = *puVar3;
  uVar4 = FUN_14168dc80();
  plVar5 = (longlong *)FModuleManager::GetModule(uVar4,uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *plVar5;
  puVar3 = (undefined8 *)FName::FName(local_res10,L"NULL",1);
  (**(code **)(lVar2 + 0x78))(plVar5,*puVar3,uVar1);
  return;
}



// FUNCTION 1404e8380 ShutdownModule body=144 status=ok
// SIG undefined ShutdownModule(void)

void FOnlineSubsystemNullModule::ShutdownModule(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  puVar3 = (undefined8 *)FName::FName(local_res8,"OnlineSubsystem",1);
  uVar1 = *puVar3;
  uVar4 = FUN_14168dc80();
  plVar5 = (longlong *)FModuleManager::GetModule(uVar4,uVar1);
  lVar2 = *plVar5;
  puVar3 = (undefined8 *)FName::FName(local_res10,L"NULL",1);
  (**(code **)(lVar2 + 0x80))(plVar5,*puVar3);
  puVar3 = *(undefined8 **)(param_1 + 8);
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 1404e8410 FUN_1404e8410 body=776 status=ok
// SIG undefined FUN_1404e8410(void)

int * FUN_1404e8410(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  byte bVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  char cVar14;
  uint uVar15;
  int iVar16;
  void *_Dst;
  bool local_res8;
  
  iVar8 = 1;
  iVar13 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar16 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar16 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar16 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar16);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar16 = (int)param_1[6];
    iVar10 = *(int *)((longlong)iVar16 * 0x20 + 4 + *param_1);
    iVar11 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar10;
    *(int *)((longlong)param_1 + 0x34) = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)((longlong)iVar10 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar16;
  local_res8 = false;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar12 = (uint *)((longlong)plVar7 +
                    (longlong)((int)(iVar16 + (iVar16 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar12 = *puVar12 | 1 << ((byte)iVar16 & 0x1f);
  puVar12 = (uint *)((longlong)iVar16 * 0x20 + *param_1);
  puVar3 = (undefined8 *)param_3[1];
  *puVar12 = *(uint *)*param_3;
  *(undefined8 *)(puVar12 + 2) = *puVar3;
  *(undefined8 *)(puVar12 + 4) = puVar3[1];
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar12[6] = 0xffffffff;
  uVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar15 != 1) {
    iVar11 = iVar13;
    if (uVar15 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar10 = *(int *)((longlong)plVar7 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar12) * 4);
      if (iVar10 != -1) {
        do {
          iVar11 = iVar10;
          if (*(uint *)((longlong)iVar10 * 0x20 + *param_1) == *puVar12) break;
          iVar10 = *(int *)((longlong)iVar10 * 0x20 + 0x18 + *param_1);
          iVar11 = iVar13;
        } while (iVar10 != -1);
      }
    }
    local_res8 = iVar11 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar11 * 0x20 + *param_1);
      plVar7 = *(longlong **)((longlong)_Dst + 0x10);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar7 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,puVar12,0x18);
      iVar8 = *param_2;
      bVar4 = (byte)iVar8 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar8;
      }
      puVar9 = (undefined4 *)((longlong)iVar8 * 0x20 + *param_1);
      *puVar9 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar13 = (int)param_1[6];
      }
      puVar9[1] = iVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar8;
      plVar7 = (longlong *)param_1[4];
      *param_2 = iVar11;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar12 = (uint *)((longlong)plVar7 +
                        (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar12 = *puVar12 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_1404e86ef;
    }
  }
  if (3 < uVar15) {
    uVar6 = (uVar15 >> 1) + 8;
    iVar13 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    iVar8 = 0x20;
    if (uVar6 != 0) {
      iVar8 = 0x1f - iVar13;
    }
    uVar6 = (uVar15 >> 1) + 7;
    iVar13 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar6 == 0) {
      cVar14 = '\0';
    }
    else {
      cVar14 = '\x1f' - (char)iVar13;
    }
    iVar8 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar14 & 0x1f);
  }
  if (((int)uVar15 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar15 = (int)param_1[9] - 1U & *puVar12;
    puVar12[7] = uVar15;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    puVar12[6] = *(uint *)((longlong)plVar7 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4) =
         iVar16;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TTuple<FDeviceId,TArray<FKey,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FDeviceId,TArray<FKey,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1404e86ef:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1404e8720 IndexOfByPredicate<FUniqueNetIdMatcher> body=109 status=ok
// SIG undefined IndexOfByPredicate<FUniqueNetIdMatcher>(void)

ulonglong TArray<TSharedPtr<FUniqueNetId_const_,0>,FDefaultAllocator>::
          IndexOfByPredicate<FUniqueNetIdMatcher>(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)*param_1;
  lVar2 = param_1[1];
  puVar4 = puVar1;
  while( true ) {
    if (puVar4 == puVar1 + (longlong)(int)lVar2 * 2) {
      return 0xffffffff;
    }
    cVar3 = (*(code *)**(undefined8 **)*puVar4)((undefined8 *)*puVar4,param_2);
    if (cVar3 != '\0') break;
    puVar4 = puVar4 + 2;
  }
  return (longlong)puVar4 - (longlong)puVar1 >> 4 & 0xffffffff;
}



// FUNCTION 1404e8790 FOnlineSessionInfoNull body=251 status=ok
// SIG undefined FOnlineSessionInfoNull(void)

undefined8 * FOnlineSessionInfoNull::FOnlineSessionInfoNull(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Src;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  void *local_28;
  ulonglong local_20;
  
  local_20 = 8;
  local_28 = (void *)0x0;
  *param_1 = &PTR_FUN_143f7ce68;
  param_1[1] = 0;
  param_1[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  _Src = local_28;
  FGenericPlatformString::Memcpy(local_28,L"INVALID",0x10);
  puVar2 = (undefined8 *)FName::FName(local_res8,L"NULL",1);
  lVar3 = (longlong)(int)local_20;
  uVar1 = *puVar2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = &PTR_FUN_143f74160;
  param_1[6] = 0;
  *(int *)(param_1 + 7) = (int)local_20;
  if ((int)local_20 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1 + 6,local_20 & 0xffffffff,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[6],_Src,lVar3 * 2);
  }
  param_1[8] = uVar1;
  param_1[3] = &PTR_FUN_143f74160;
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
  }
  return param_1;
}



// FUNCTION 1404e8890 FUN_1404e8890 body=175 status=ok
// SIG undefined FUN_1404e8890(void)

undefined8 * FUN_1404e8890(undefined8 *param_1,longlong param_2)

{
  *param_1 = &PTR_FUN_143f769a0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 0x10);
  *(undefined1 *)((longlong)param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  *(undefined1 *)((longlong)param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  *(undefined1 *)((longlong)param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  *(undefined1 *)((longlong)param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  *(undefined1 *)((longlong)param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  *(undefined1 *)((longlong)param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
  *(undefined1 *)((longlong)param_1 + 0x17) = *(undefined1 *)(param_2 + 0x17);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 0x18);
  *(undefined1 *)((longlong)param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  TSet<TTuple<FName,FOnlineSessionSearchParam>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>,FDefaultSetAllocator>
  ::operator=(param_1 + 5,param_2 + 0x28);
  return param_1;
}



// FUNCTION 1404e8940 FUN_1404e8940 body=246 status=ok
// SIG undefined FUN_1404e8940(void)

undefined8 * FUN_1404e8940(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_143f7ca28;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 2;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 2;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 2;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 2;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 2;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 2;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 2;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 2;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 2;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 2;
  return param_1;
}



// FUNCTION 1404e8a40 FUN_1404e8a40 body=621 status=ok
// SIG undefined FUN_1404e8a40(void)

undefined8 * FUN_1404e8a40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_143f7d2d0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 2;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 2;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 2;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 2;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 2;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 2;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 2;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 2;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 2;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 2;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 2;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 2;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 2;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 2;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 2;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 2;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 2;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 2;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 2;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 2;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 2;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 2;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 2;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 2;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 2;
  return param_1;
}



// FUNCTION 1404e8cb0 FUN_1404e8cb0 body=142 status=ok
// SIG undefined FUN_1404e8cb0(void)

void FUN_1404e8cb0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x28);
  plVar4 = *(longlong **)(param_1 + 0x20);
  if (iVar5 != 0) {
    do {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  if (plVar4 != (longlong *)0x0) {
    FMemory::Free(plVar4);
  }
  plVar4 = *(longlong **)(param_1 + 0x10);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return;
}



// FUNCTION 1404e8d40 FUN_1404e8d40 body=108 status=ok
// SIG undefined FUN_1404e8d40(void)

void FUN_1404e8d40(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x10);
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



// FUNCTION 1404e8db0 ~Builder body=108 status=ok
// SIG undefined ~Builder(void)

void FHttpRequestFactory::Builder::~Builder(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x10);
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



// FUNCTION 1404e8e20 FUN_1404e8e20 body=290 status=ok
// SIG undefined FUN_1404e8e20(void)

void FUN_1404e8e20(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)*param_1;
  iVar6 = *(int *)(param_1 + 1);
  if (iVar6 != 0) {
    do {
      *puVar7 = &PTR__scalar_deleting_destructor__143f7d2c8;
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(puVar7 + 0x20);
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(puVar7 + 0x1e);
      plVar4 = (longlong *)puVar7[0x1d];
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
      plVar4 = (longlong *)puVar7[0x1a];
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
      FUN_1404bf650(puVar7);
      puVar7 = puVar7 + 0x23;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    puVar7 = (undefined8 *)*param_1;
  }
  if (puVar7 == (undefined8 *)0x0) {
    return;
  }
  FMemory::Free(puVar7);
  return;
}



// FUNCTION 1404e8f50 FUN_1404e8f50 body=189 status=ok
// SIG undefined FUN_1404e8f50(void)

void FUN_1404e8f50(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__143f7d2c8;
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x20);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x1e);
  plVar4 = (longlong *)param_1[0x1d];
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
  plVar4 = (longlong *)param_1[0x1a];
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
  FUN_1404bf650(param_1);
  return;
}



// FUNCTION 1404e9010 FUN_1404e9010 body=161 status=ok
// SIG undefined FUN_1404e9010(void)

void FUN_1404e9010(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_143f7ca28;
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x1f);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x1c);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x19);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x16);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x13);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x10);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xd);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 10);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 7);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 4);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 1);
  *param_1 = &PTR_FUN_143f47c98;
  return;
}



// FUNCTION 1404e90c0 FUN_1404e90c0 body=341 status=ok
// SIG undefined FUN_1404e90c0(void)

void FUN_1404e90c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_143f7d2d0;
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x4c);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x49);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x46);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x43);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x40);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x3d);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x3a);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x37);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x34);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x31);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x2e);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x2b);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x28);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x25);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x22);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x1f);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x1c);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x19);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x16);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x13);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x10);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xd);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 10);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 7);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 4);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 1);
  *param_1 = &PTR_FUN_143f47c98;
  return;
}



// FUNCTION 1404e9220 FUN_1404e9220 body=1044 status=ok
// SIG undefined FUN_1404e9220(void)

longlong * FUN_1404e9220(longlong *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  char cVar15;
  ulonglong local_res8;
  longlong local_18 [2];
  
  if ((char)param_1[2] == '\0') {
    iVar14 = *(int *)((longlong)param_1 + 0xc);
    iVar9 = (int)param_1[1];
    bVar11 = iVar9 <= iVar14;
    if (bVar11) {
      *(undefined1 *)(param_1 + 2) = 1;
      cVar15 = (char)local_res8;
    }
    else {
      cVar15 = *(char *)((longlong)iVar14 + *param_1);
      *(int *)((longlong)param_1 + 0xc) = iVar14 + 1;
      iVar14 = iVar14 + 1;
    }
    switch(cVar15) {
    case '\x01':
      if ((!bVar11) && (iVar14 + 4 <= iVar9)) {
        lVar10 = *param_1;
        lVar12 = (longlong)iVar14;
        uVar1 = *(undefined1 *)(lVar12 + lVar10);
        uVar2 = *(undefined1 *)(lVar12 + 1 + lVar10);
        uVar3 = *(undefined1 *)(lVar12 + 2 + lVar10);
        uVar4 = *(undefined1 *)(lVar12 + 3 + lVar10);
        *(int *)((longlong)param_1 + 0xc) = iVar14 + 4;
        FVariantData::SetValue(param_2,CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4));
        return param_1;
      }
      *(undefined1 *)(param_1 + 2) = 1;
      FVariantData::SetValue(param_2,local_res8 & 0xffffffff);
      return param_1;
    case '\x03':
      if ((!bVar11) && (iVar14 + 8 <= iVar9)) {
        lVar10 = *param_1;
        lVar12 = (longlong)iVar14;
        uVar1 = *(undefined1 *)(lVar12 + lVar10);
        uVar2 = *(undefined1 *)(lVar12 + 1 + lVar10);
        uVar3 = *(undefined1 *)(lVar12 + 2 + lVar10);
        uVar4 = *(undefined1 *)(lVar12 + 3 + lVar10);
        uVar5 = *(undefined1 *)(lVar12 + 4 + lVar10);
        uVar6 = *(undefined1 *)(lVar12 + 5 + lVar10);
        uVar7 = *(undefined1 *)(lVar12 + 6 + lVar10);
        uVar8 = *(undefined1 *)(lVar12 + 7 + lVar10);
        *(int *)((longlong)param_1 + 0xc) = iVar14 + 8;
        FVariantData::SetValue
                  (param_2,CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar1,
                                                  uVar2),uVar3),uVar4),uVar5),uVar6),uVar7),uVar8));
        return param_1;
      }
      *(undefined1 *)(param_1 + 2) = 1;
      FVariantData::SetValue(param_2,local_res8);
      return param_1;
    case '\x05':
      if ((!bVar11) && (iVar14 + 8 <= iVar9)) {
        lVar10 = *param_1;
        lVar12 = (longlong)iVar14;
        uVar1 = *(undefined1 *)(lVar12 + lVar10);
        uVar2 = *(undefined1 *)(lVar12 + 1 + lVar10);
        uVar3 = *(undefined1 *)(lVar12 + 2 + lVar10);
        uVar4 = *(undefined1 *)(lVar12 + 3 + lVar10);
        uVar5 = *(undefined1 *)(lVar12 + 4 + lVar10);
        uVar6 = *(undefined1 *)(lVar12 + 5 + lVar10);
        uVar7 = *(undefined1 *)(lVar12 + 6 + lVar10);
        uVar8 = *(undefined1 *)(lVar12 + 7 + lVar10);
        *(int *)((longlong)param_1 + 0xc) = iVar14 + 8;
        FVariantData::SetValue
                  (param_2,CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar1,
                                                  uVar2),uVar3),uVar4),uVar5),uVar6),uVar7),uVar8));
        return param_1;
      }
      *(undefined1 *)(param_1 + 2) = 1;
      FVariantData::SetValue(param_2,local_res8);
      return param_1;
    case '\x06':
      local_18[0] = 0;
      local_18[1] = 0;
      FUN_1404acbf0(param_1,local_18);
      FVariantData::SetValue(param_2,local_18);
      if (local_18[0] != 0) {
        FMemory::Free();
        return param_1;
      }
      break;
    case '\a':
      if ((!bVar11) && (iVar14 + 4 <= iVar9)) {
        lVar10 = *param_1;
        lVar12 = (longlong)iVar14;
        uVar1 = *(undefined1 *)(lVar12 + lVar10);
        uVar2 = *(undefined1 *)(lVar12 + 1 + lVar10);
        uVar3 = *(undefined1 *)(lVar12 + 2 + lVar10);
        uVar4 = *(undefined1 *)(lVar12 + 3 + lVar10);
        *(int *)((longlong)param_1 + 0xc) = iVar14 + 4;
        FVariantData::SetValue(param_2,CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4));
        return param_1;
      }
      *(undefined1 *)(param_1 + 2) = 1;
      FVariantData::SetValue(param_2,local_res8 & 0xffffffff);
      return param_1;
    case '\b':
      if ((!bVar11) && (iVar13 = iVar14 + 4, iVar13 <= iVar9)) {
        lVar10 = *param_1;
        lVar12 = (longlong)iVar14;
        iVar14 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar12 + lVar10),
                                            *(undefined1 *)(lVar12 + 1 + lVar10)),
                                   *(undefined1 *)(lVar12 + 2 + lVar10)),
                          *(undefined1 *)(lVar12 + 3 + lVar10));
        *(int *)((longlong)param_1 + 0xc) = iVar13;
        if (iVar13 + iVar14 <= iVar9) {
          FVariantData::SetValue(param_2,iVar14,iVar13 + lVar10);
          *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + iVar14;
          return param_1;
        }
      }
      *(undefined1 *)(param_1 + 2) = 1;
      return param_1;
    case '\t':
      if ((bVar11) || (iVar9 <= iVar14)) {
        *(undefined1 *)(param_1 + 2) = 1;
      }
      else {
        local_res8._0_1_ = *(char *)((longlong)iVar14 + *param_1);
        *(int *)((longlong)param_1 + 0xc) = iVar14 + 1;
      }
      FVariantData::SetValue(param_2,(char)local_res8 != '\0');
    }
  }
  return param_1;
}



// FUNCTION 1404e9660 operator<< body=251 status=ok
// SIG undefined operator<<(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * operator<<(longlong *param_1,undefined8 *param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  longlong local_38;
  void *local_30;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (*(int *)(param_2 + 1) == 0) {
    puVar1 = &DAT_143f3eda8;
  }
  else {
    puVar1 = (undefined2 *)*param_2;
  }
  TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
            (local_b8,puVar1);
  if ((*(char *)((longlong)param_1 + 0x14) == '\0') &&
     ((int)param_1[2] + 4U <= *(uint *)(param_1 + 1))) {
    *(char *)((longlong)(int)param_1[2] + *param_1) = (char)((uint)local_28 >> 0x18);
    *(char *)((longlong)(int)param_1[2] + 1 + *param_1) = (char)((uint)local_28 >> 0x10);
    *(char *)((longlong)(int)param_1[2] + 2 + *param_1) = (char)((uint)local_28 >> 8);
    *(char *)((longlong)(int)param_1[2] + 3 + *param_1) = (char)local_28;
    *(int *)(param_1 + 2) = (int)param_1[2] + 4;
    if ((*(char *)((longlong)param_1 + 0x14) == '\0') &&
       ((uint)((int)param_1[2] + local_28) <= *(uint *)(param_1 + 1))) {
      if (0 < local_28) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)(int)param_1[2] + *param_1),local_30,(longlong)local_28);
        *(int *)(param_1 + 2) = (int)param_1[2] + local_28;
      }
      goto LAB_1404e9725;
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
LAB_1404e9725:
  if (local_38 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1404e9760 FUN_1404e9760 body=894 status=ok
// SIG undefined FUN_1404e9760(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1404e9760(longlong *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  uint uVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_f8 [32];
  char local_d8 [8];
  undefined1 local_d0 [8];
  undefined2 *local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [128];
  longlong local_38;
  void *local_30;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  uVar1 = *(undefined1 *)param_2;
  if (*(char *)((longlong)param_1 + 0x14) == '\0') {
    lVar2 = param_1[2];
    uVar3 = (int)lVar2 + 1;
    if (*(uint *)(param_1 + 1) < uVar3) goto LAB_1404e97a9;
    *(uint *)(param_1 + 2) = uVar3;
    *(undefined1 *)((longlong)(int)lVar2 + *param_1) = uVar1;
  }
  else {
LAB_1404e97a9:
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  }
  switch(*param_2) {
  case 1:
    FVariantData::GetValue(param_2,local_d0);
    if ((*(char *)((longlong)param_1 + 0x14) != '\0') ||
       (*(uint *)(param_1 + 1) < (int)param_1[2] + 4U)) goto LAB_1404e9ab2;
    *(char *)((longlong)(int)param_1[2] + *param_1) = SUB41(local_d0._0_4_,3);
    *(char *)((longlong)(int)param_1[2] + 1 + *param_1) = SUB41(local_d0._0_4_,2);
    *(char *)((longlong)(int)param_1[2] + 2 + *param_1) = SUB41(local_d0._0_4_,1);
    *(undefined1 *)((longlong)(int)param_1[2] + 3 + *param_1) = local_d0[0];
    *(int *)(param_1 + 2) = (int)param_1[2] + 4;
    break;
  case 2:
  case 4:
    break;
  case 3:
    FUN_1404b0b50(param_2,local_d0);
    operator<<(param_1,local_d0);
    break;
  case 5:
    FUN_1404b09c0(param_2,local_d0);
    operator<<(param_1,&local_c8);
    break;
  case 6:
    local_c8 = (undefined2 *)0x0;
    local_c0 = 0;
    FUN_1404b0a70(param_2,&local_c8);
    puVar4 = &DAT_143f3eda8;
    if ((int)local_c0 != 0) {
      puVar4 = local_c8;
    }
    TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
              (local_b8,puVar4);
    if ((*(char *)((longlong)param_1 + 0x14) == '\0') &&
       ((int)param_1[2] + 4U <= *(uint *)(param_1 + 1))) {
      *(char *)((longlong)(int)param_1[2] + *param_1) = (char)((uint)local_28 >> 0x18);
      *(char *)((longlong)(int)param_1[2] + 1 + *param_1) = (char)((uint)local_28 >> 0x10);
      *(char *)((longlong)(int)param_1[2] + 2 + *param_1) = (char)((uint)local_28 >> 8);
      *(char *)((longlong)(int)param_1[2] + 3 + *param_1) = (char)local_28;
      *(int *)(param_1 + 2) = (int)param_1[2] + 4;
      if ((*(char *)((longlong)param_1 + 0x14) != '\0') ||
         (*(uint *)(param_1 + 1) < (uint)(local_28 + (int)param_1[2]))) goto LAB_1404e9a5d;
      if (0 < local_28) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)(int)param_1[2] + *param_1),local_30,(longlong)local_28);
        *(int *)(param_1 + 2) = (int)param_1[2] + local_28;
      }
    }
    else {
LAB_1404e9a5d:
      *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    }
    if (local_38 != 0) {
      FMemory::Free();
    }
    goto LAB_1404e9a6f;
  case 7:
    FVariantData::GetValue(param_2,local_d0);
    if ((*(char *)((longlong)param_1 + 0x14) != '\0') ||
       (*(uint *)(param_1 + 1) < (int)param_1[2] + 4U)) goto LAB_1404e9ab2;
    *(char *)((longlong)(int)param_1[2] + *param_1) = SUB41(local_d0._0_4_,3);
    *(char *)((longlong)(int)param_1[2] + 1 + *param_1) = SUB41(local_d0._0_4_,2);
    *(char *)((longlong)(int)param_1[2] + 2 + *param_1) = SUB41(local_d0._0_4_,1);
    *(char *)((longlong)(int)param_1[2] + 3 + *param_1) = (char)local_d0._0_4_;
    *(int *)(param_1 + 2) = (int)param_1[2] + 4;
    break;
  case 8:
    uVar5 = 0;
    local_c8 = (undefined2 *)0x0;
    local_c0 = 0;
    FVariantData::GetValue(param_2,&local_c8);
    if ((*(char *)((longlong)param_1 + 0x14) == '\0') &&
       ((int)param_1[2] + 4U <= *(uint *)(param_1 + 1))) {
      *(char *)((longlong)(int)param_1[2] + *param_1) = (char)((ulonglong)local_c0 >> 0x18);
      *(char *)((longlong)(int)param_1[2] + 1 + *param_1) = (char)((ulonglong)local_c0 >> 0x10);
      *(char *)((longlong)(int)param_1[2] + 2 + *param_1) = (char)((ulonglong)local_c0 >> 8);
      *(char *)((longlong)(int)param_1[2] + 3 + *param_1) = (char)local_c0;
      *(int *)(param_1 + 2) = (int)param_1[2] + 4;
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    }
    uVar6 = uVar5;
    if (0 < (int)local_c0) {
      do {
        if (*(char *)((longlong)param_1 + 0x14) == '\0') {
          lVar2 = param_1[2];
          uVar3 = (int)lVar2 + 1;
          if (*(uint *)(param_1 + 1) < uVar3) goto LAB_1404e99a1;
          *(uint *)(param_1 + 2) = uVar3;
          *(undefined1 *)((longlong)(int)lVar2 + *param_1) =
               *(undefined1 *)((longlong)local_c8 + uVar6);
        }
        else {
LAB_1404e99a1:
          *(undefined1 *)((longlong)param_1 + 0x14) = 1;
        }
        uVar3 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar3;
        uVar6 = uVar6 + 1;
      } while ((int)uVar3 < (int)local_c0);
    }
LAB_1404e9a6f:
    if (local_c8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    break;
  case 9:
    FVariantData::GetValue(param_2,local_d8);
    if (*(char *)((longlong)param_1 + 0x14) == '\0') {
      lVar2 = param_1[2];
      uVar3 = (int)lVar2 + 1;
      if (uVar3 <= *(uint *)(param_1 + 1)) {
        *(uint *)(param_1 + 2) = uVar3;
        *(bool *)((longlong)(int)lVar2 + *param_1) = local_d8[0] != '\0';
        break;
      }
    }
LAB_1404e9ab2:
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    break;
  default:
    goto switchD_1404e97d6_default;
  }
switchD_1404e97d6_default:
  return param_1;
}



// FUNCTION 1404e9b10 operator<< body=173 status=ok
// SIG undefined operator<<(void)

longlong * operator<<(longlong *param_1,undefined1 *param_2)

{
  if ((*(char *)((longlong)param_1 + 0x14) == '\0') &&
     ((int)param_1[2] + 8U <= *(uint *)(param_1 + 1))) {
    *(undefined1 *)((longlong)(int)param_1[2] + *param_1) = param_2[7];
    *(undefined1 *)((longlong)(int)param_1[2] + 1 + *param_1) = param_2[6];
    *(undefined1 *)((longlong)(int)param_1[2] + 2 + *param_1) = param_2[5];
    *(undefined1 *)((longlong)(int)param_1[2] + 3 + *param_1) = param_2[4];
    *(undefined1 *)((longlong)(int)param_1[2] + 4 + *param_1) = param_2[3];
    *(undefined1 *)((longlong)(int)param_1[2] + 5 + *param_1) = param_2[2];
    *(undefined1 *)((longlong)(int)param_1[2] + 6 + *param_1) = param_2[1];
    *(undefined1 *)((longlong)(int)param_1[2] + 7 + *param_1) = *param_2;
    *(int *)(param_1 + 2) = (int)param_1[2] + 8;
    return param_1;
  }
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return param_1;
}



// FUNCTION 1404e9bc0 FUN_1404e9bc0 body=538 status=ok
// SIG undefined FUN_1404e9bc0(void)

void FUN_1404e9bc0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  double dVar11;
  LARGE_INTEGER local_res8;
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  longlong local_58 [2];
  longlong local_48;
  longlong local_40;
  longlong *local_38;
  longlong local_30 [2];
  undefined4 local_20;
  
  plVar5 = (longlong *)FUN_1415c3d50();
  if ((int)param_1[4] == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)param_1[3];
  }
  puVar6 = (undefined8 *)FUN_14167d0d0(local_58);
  if (*(int *)(puVar6 + 1) == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = (undefined2 *)*puVar6;
  }
  FString::PrintfImpl(&local_78,L"%s/SaveGames",puVar9);
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  puVar9 = &DAT_143f3eda8;
  if (local_70 != 0) {
    puVar9 = local_78;
  }
  FString::PrintfImpl(&local_68,L"%s/%s.sav",puVar9,puVar10);
  if (local_78 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  puVar10 = &DAT_143f3eda8;
  if (local_60 != 0) {
    puVar10 = local_68;
  }
  lVar7 = (**(code **)(*plVar5 + 0xe8))(plVar5,puVar10);
  if (local_68 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_48 = *param_1;
  local_40 = param_1[1];
  uVar8 = 4;
  if (-1 < lVar7) {
    uVar8 = 1;
  }
  local_38 = (longlong *)param_1[2];
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  FString::FString(local_30,param_1 + 3);
  uVar4 = *(undefined8 *)(*(longlong *)(*param_1 + 0x98) + 0xa0);
  local_20 = uVar8;
  puVar6 = (undefined8 *)operator_new(0x40);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    *puVar6 = &PTR_FUN_143f76b48;
    QueryPerformanceCounter(&local_res8);
    dVar11 = (double)local_res8.QuadPart * DAT_1468b02f8;
    *puVar6 = &PTR_FUN_143f7dd80;
    puVar6[1] = dVar11 + 16777216.0;
    puVar6[2] = local_48;
    puVar6[3] = local_40;
    puVar6[4] = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
    }
    FString::FString(puVar6 + 5,local_30);
    *(undefined4 *)(puVar6 + 7) = local_20;
  }
  FOnlineAsyncTaskManager::AddToOutQueue(uVar4,puVar6);
  if (local_30[0] != 0) {
    FMemory::Free();
  }
  plVar5 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_38 + 8))(local_38,1);
      }
    }
  }
  return;
}



// FUNCTION 1404e9de0 FUN_1404e9de0 body=673 status=ok
// SIG undefined FUN_1404e9de0(void)

void FUN_1404e9de0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  void *_Src;
  longlong *plVar5;
  char cVar6;
  undefined8 *puVar7;
  int iVar8;
  size_t sVar9;
  void *_Src_00;
  undefined2 *puVar10;
  undefined2 *puVar11;
  double dVar12;
  LARGE_INTEGER local_res8;
  void *local_a8;
  ulonglong local_a0;
  undefined2 *local_98;
  int local_90;
  undefined2 *local_88;
  int local_80;
  longlong local_78 [2];
  longlong local_68;
  longlong local_60;
  longlong *local_58;
  longlong local_50 [2];
  int local_40;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  
  _Src_00 = (void *)0x0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  if ((int)param_1[4] == 0) {
    puVar11 = &DAT_143f3eda8;
  }
  else {
    puVar11 = (undefined2 *)param_1[3];
  }
  puVar7 = (undefined8 *)FUN_14167d0d0(local_78);
  if (*(int *)(puVar7 + 1) == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)*puVar7;
  }
  FString::PrintfImpl(&local_98,L"%s/SaveGames",puVar10);
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  puVar10 = &DAT_143f3eda8;
  if (local_90 != 0) {
    puVar10 = local_98;
  }
  FString::PrintfImpl(&local_88,L"%s/%s.sav",puVar10,puVar11);
  if (local_98 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  puVar11 = &DAT_143f3eda8;
  if (local_80 != 0) {
    puVar11 = local_88;
  }
  cVar6 = FUN_141676460(&local_a8,puVar11,0);
  if (local_88 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_68 = *param_1;
  local_60 = param_1[1];
  iVar8 = (cVar6 == '\0') + 1;
  local_58 = (longlong *)param_1[2];
  if (local_58 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    UNLOCK();
  }
  FString::FString(local_50,param_1 + 3);
  _Src = local_a8;
  sVar9 = (size_t)(int)local_a0;
  local_38 = (void *)0x0;
  local_30 = (int)local_a0;
  local_40 = iVar8;
  if ((int)local_a0 == 0) {
    local_2c = 0;
  }
  else {
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_38,local_a0 & 0xffffffff,0);
    _Src_00 = local_38;
    _guard_xfg_dispatch_icall_nop(local_38,_Src,sVar9);
  }
  uVar3 = *(undefined8 *)(*(longlong *)(*param_1 + 0x98) + 0xa0);
  puVar7 = (undefined8 *)operator_new(0x50);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    *puVar7 = &PTR_FUN_143f76b48;
    QueryPerformanceCounter(&local_res8);
    dVar12 = (double)local_res8.QuadPart * DAT_1468b02f8;
    *puVar7 = &PTR__scalar_deleting_destructor__143f7db80;
    puVar7[1] = dVar12 + 16777216.0;
    puVar7[2] = local_68;
    puVar7[3] = local_60;
    puVar7[4] = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
    }
    FString::FString(puVar7 + 5,local_50);
    _Src_00 = local_38;
    sVar9 = (size_t)local_30;
    *(int *)(puVar7 + 7) = local_40;
    puVar7[8] = 0;
    *(int *)(puVar7 + 9) = local_30;
    if (local_30 == 0) {
      *(undefined4 *)((longlong)puVar7 + 0x4c) = 0;
    }
    else {
      TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar7 + 8,local_30,0);
      _guard_xfg_dispatch_icall_nop((void *)puVar7[8],_Src_00,sVar9);
    }
  }
  FOnlineAsyncTaskManager::AddToOutQueue(uVar3,puVar7);
  if (_Src_00 != (void *)0x0) {
    FMemory::Free(_Src_00);
  }
  if (local_50[0] != 0) {
    FMemory::Free();
  }
  plVar5 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1404ea090 FUN_1404ea090 body=1215 status=ok
// SIG undefined FUN_1404ea090(void)

void FUN_1404ea090(longlong *param_1)

{
  int *piVar1;
  void *pvVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong *plVar11;
  uint uVar12;
  undefined2 *puVar14;
  uint uVar15;
  wchar_t *_Source;
  longlong *plVar16;
  wchar_t *pwVar17;
  longlong *plVar18;
  undefined8 uVar19;
  double dVar20;
  LARGE_INTEGER local_res10;
  undefined8 *local_res18;
  undefined8 local_res20;
  longlong *local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  int local_90;
  longlong local_88 [2];
  longlong local_78;
  longlong local_70;
  longlong *local_68;
  undefined4 local_60;
  longlong *local_58;
  uint local_50;
  longlong *plVar13;
  
  plVar13 = (longlong *)0x0;
  local_c8 = (longlong *)0x0;
  local_c0 = 0;
  local_a8 = (longlong *)0x0;
  local_a0 = 0;
  plVar3 = (longlong *)FUN_1415c3d50();
  puVar4 = (undefined8 *)FUN_14167d0d0(local_88);
  if (*(int *)(puVar4 + 1) == 0) {
    puVar14 = &DAT_143f3eda8;
  }
  else {
    puVar14 = (undefined2 *)*puVar4;
  }
  FString::PrintfImpl(&local_98,L"%s/SaveGames",puVar14);
  if (local_88[0] != 0) {
    FMemory::Free();
  }
  puVar14 = &DAT_143f3eda8;
  if (local_90 != 0) {
    puVar14 = local_98;
  }
  (**(code **)(*plVar3 + 0x70))(plVar3,&local_a8,puVar14,L"*.sav");
  if (local_98 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_res10.QuadPart = (LONGLONG)(local_a8 + (longlong)(int)local_a0 * 2);
  plVar3 = plVar13;
  plVar11 = local_a8;
  if (local_a8 != (longlong *)local_res10.QuadPart) {
    do {
      iVar5 = -1;
      iVar6 = -4;
      pwVar17 = (wchar_t *)0x0;
      iVar10 = (int)plVar11[1];
      if (iVar10 == 0) {
        _Source = L"";
      }
      else {
        _Source = (wchar_t *)*plVar11;
        iVar6 = iVar10 + -5;
        iVar5 = iVar10 + -1;
      }
      iVar7 = 0;
      if (iVar10 == 0) {
        iVar5 = iVar7;
      }
      if ((-1 < iVar6) && (iVar7 = iVar5, iVar6 < iVar5)) {
        iVar7 = iVar6;
      }
      local_b8 = (wchar_t *)0x0;
      uVar15 = iVar7 + 1;
      if (iVar7 == 0) {
        uVar15 = 0;
      }
      local_b0 = (ulonglong)uVar15;
      if (0 < (int)uVar15) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
        pwVar17 = local_b8;
        uVar15 = (uint)local_b0;
        if (0 < (int)(uint)local_b0) {
          wcsncpy(local_b8,_Source,(longlong)iVar7);
          pwVar17[iVar7] = L'\0';
        }
      }
      lVar8 = (longlong)(int)plVar13;
      uVar12 = (int)plVar13 + 1;
      local_c0 = CONCAT44(local_c0._4_4_,uVar12);
      if (local_c0._4_4_ < (int)uVar12) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_c8,plVar13);
        plVar3 = local_c8;
        uVar12 = (uint)local_c0;
      }
      plVar13 = (longlong *)(ulonglong)uVar12;
      plVar11 = plVar11 + 2;
      plVar3[lVar8 * 2] = (longlong)pwVar17;
      *(uint *)(plVar3 + lVar8 * 2 + 1) = uVar15;
      *(undefined4 *)((longlong)plVar3 + lVar8 * 0x10 + 0xc) = local_b0._4_4_;
      local_b8 = (wchar_t *)0x0;
      local_b0 = 0;
    } while (plVar11 != (longlong *)local_res10.QuadPart);
  }
  local_78 = *param_1;
  local_68 = (longlong *)param_1[2];
  local_70 = param_1[1];
  if (local_68 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_68 + 1) = (int)local_68[1] + 1;
    UNLOCK();
    plVar13 = (longlong *)(local_c0 & 0xffffffff);
    plVar3 = local_c8;
  }
  local_60 = 1;
  local_50 = (uint)plVar13;
  local_58 = (longlong *)0x0;
  plVar11 = plVar13;
  if (local_50 != 0) {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_58,plVar13,0);
    lVar8 = (longlong)local_58 - (longlong)plVar3;
    do {
      *(undefined8 *)(lVar8 + (longlong)plVar3) = 0;
      iVar10 = (int)plVar3[1];
      pvVar2 = (void *)*plVar3;
      *(int *)(lVar8 + 8 + (longlong)plVar3) = iVar10;
      if (iVar10 == 0) {
        *(undefined4 *)(lVar8 + 0xc + (longlong)plVar3) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                  ((undefined8 *)(lVar8 + (longlong)plVar3),iVar10,0);
        _guard_xfg_dispatch_icall_nop
                  (*(void **)(lVar8 + (longlong)plVar3),pvVar2,(longlong)iVar10 * 2);
      }
      plVar3 = plVar3 + 2;
      uVar15 = (int)plVar11 - 1;
      plVar11 = (longlong *)(ulonglong)uVar15;
    } while (uVar15 != 0);
    plVar11 = (longlong *)(ulonglong)local_50;
  }
  plVar3 = local_68;
  uVar19 = *(undefined8 *)(*(longlong *)(*param_1 + 0x98) + 0xa0);
  local_res20 = uVar19;
  puVar4 = (undefined8 *)operator_new(0x40);
  local_res18 = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_143f76b48;
    QueryPerformanceCounter(&local_res10);
    dVar20 = (double)local_res10.QuadPart * DAT_1468b02f8;
    *puVar4 = &PTR__scalar_deleting_destructor__143f7dd00;
    puVar4[1] = dVar20 + 16777216.0;
    puVar4[2] = local_78;
    puVar4[3] = local_70;
    puVar4[4] = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      plVar13 = (longlong *)(local_c0 & 0xffffffff);
      plVar11 = (longlong *)(ulonglong)local_50;
      plVar3 = local_68;
    }
    *(undefined4 *)(puVar4 + 5) = local_60;
    puVar4[6] = 0;
    *(int *)(puVar4 + 7) = (int)plVar11;
    if ((int)plVar11 == 0) {
      *(undefined4 *)((longlong)puVar4 + 0x3c) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar4 + 6,plVar11,0);
      puVar9 = (undefined8 *)puVar4[6];
      plVar16 = plVar11;
      plVar18 = local_58;
      do {
        *puVar9 = 0;
        iVar10 = (int)plVar18[1];
        pvVar2 = (void *)*plVar18;
        *(int *)(puVar9 + 1) = iVar10;
        if (iVar10 == 0) {
          *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar9,iVar10,0);
          _guard_xfg_dispatch_icall_nop((void *)*puVar9,pvVar2,(longlong)iVar10 * 2);
        }
        puVar9 = puVar9 + 2;
        plVar18 = plVar18 + 2;
        uVar15 = (int)plVar16 - 1;
        plVar16 = (longlong *)(ulonglong)uVar15;
        puVar4 = local_res18;
        uVar19 = local_res20;
      } while (uVar15 != 0);
    }
  }
  FOnlineAsyncTaskManager::AddToOutQueue(uVar19,puVar4);
  plVar18 = local_58;
  uVar15 = (uint)plVar11;
  plVar16 = local_58;
  while (uVar15 != 0) {
    if (*plVar16 != 0) {
      FMemory::Free();
    }
    plVar16 = plVar16 + 2;
    uVar15 = (int)plVar11 - 1;
    plVar11 = (longlong *)(ulonglong)uVar15;
  }
  if (plVar18 != (longlong *)0x0) {
    FMemory::Free(plVar18);
  }
  plVar11 = local_68;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar3 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
    plVar13 = (longlong *)(local_c0 & 0xffffffff);
  }
  plVar3 = local_a8;
  for (iVar10 = (int)local_a0; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free(local_a8);
  }
  plVar11 = local_c8;
  uVar15 = (uint)plVar13;
  plVar3 = local_c8;
  while (uVar15 != 0) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
    uVar15 = (int)plVar13 - 1;
    plVar13 = (longlong *)(ulonglong)uVar15;
  }
  if (plVar11 != (longlong *)0x0) {
    FMemory::Free(plVar11);
  }
  return;
}



// FUNCTION 1404ea550 FUN_1404ea550 body=534 status=ok
// SIG undefined FUN_1404ea550(void)

void FUN_1404ea550(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  double dVar11;
  LARGE_INTEGER local_res8;
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  longlong local_58 [2];
  longlong local_48;
  longlong local_40;
  longlong *local_38;
  longlong local_30 [2];
  int local_20;
  
  plVar7 = (longlong *)FUN_1415c3d50();
  if ((int)param_1[4] == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)param_1[3];
  }
  puVar8 = (undefined8 *)FUN_14167d0d0(local_58);
  if (*(int *)(puVar8 + 1) == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = (undefined2 *)*puVar8;
  }
  FString::PrintfImpl(&local_78,L"%s/SaveGames",puVar9);
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  puVar9 = &DAT_143f3eda8;
  if (local_70 != 0) {
    puVar9 = local_78;
  }
  FString::PrintfImpl(&local_68,L"%s/%s.sav",puVar9,puVar10);
  if (local_78 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  puVar10 = &DAT_143f3eda8;
  if (local_60 != 0) {
    puVar10 = local_68;
  }
  cVar6 = (**(code **)(*plVar7 + 0x30))(plVar7,puVar10,1,0,1);
  if (local_68 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_48 = *param_1;
  local_40 = param_1[1];
  local_38 = (longlong *)param_1[2];
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  FString::FString(local_30,param_1 + 3);
  uVar4 = *(undefined8 *)(*(longlong *)(*param_1 + 0x98) + 0xa0);
  local_20 = (cVar6 == '\0') + 1;
  puVar8 = (undefined8 *)operator_new(0x40);
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    *puVar8 = &PTR_FUN_143f76b48;
    QueryPerformanceCounter(&local_res8);
    dVar11 = (double)local_res8.QuadPart * DAT_1468b02f8;
    *puVar8 = &PTR_FUN_143f7dc80;
    puVar8[1] = dVar11 + 16777216.0;
    puVar8[2] = local_48;
    puVar8[3] = local_40;
    puVar8[4] = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
    }
    FString::FString(puVar8 + 5,local_30);
    *(int *)(puVar8 + 7) = local_20;
  }
  FOnlineAsyncTaskManager::AddToOutQueue(uVar4,puVar8);
  if (local_30[0] != 0) {
    FMemory::Free();
  }
  plVar7 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_38 + 8))(local_38,1);
      }
    }
  }
  return;
}



// FUNCTION 1404ea770 FUN_1404ea770 body=804 status=ok
// SIG undefined FUN_1404ea770(void)

void FUN_1404ea770(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  double dVar5;
  longlong *plVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  LARGE_INTEGER local_res8;
  undefined2 *local_d8;
  int local_d0;
  undefined4 local_cc;
  void *local_c8;
  int local_c0;
  int local_bc;
  longlong local_b8;
  longlong local_b0;
  longlong *local_a8;
  longlong local_a0 [2];
  undefined4 local_90;
  undefined2 *local_88;
  int local_80;
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48 [2];
  longlong local_38 [2];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if ((int)param_1[4] == 0) {
    puVar11 = &DAT_143f3eda8;
  }
  else {
    puVar11 = (undefined2 *)param_1[3];
  }
  puVar8 = (undefined8 *)FUN_14167d0d0(local_48);
  if (*(int *)(puVar8 + 1) == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)*puVar8;
  }
  FString::PrintfImpl(&local_88,L"%s/SaveGames",puVar10);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  puVar10 = &DAT_143f3eda8;
  if (local_80 != 0) {
    puVar10 = local_88;
  }
  FString::PrintfImpl(&local_d8,L"%s/%s.sav",puVar10,puVar11);
  if (local_88 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  puVar11 = local_d8;
  local_c8 = (void *)0x0;
  local_c0 = local_d0;
  if (local_d0 == 0) {
    local_bc = local_d0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_c8,local_d0,0);
    _guard_xfg_dispatch_icall_nop(local_c8,puVar11,(longlong)local_d0 * 2);
  }
  if ((int)param_1[4] == 0) {
    puVar11 = &DAT_143f3eda8;
  }
  else {
    puVar11 = (undefined2 *)param_1[3];
  }
  puVar8 = (undefined8 *)FUN_14167d0d0(local_38);
  if (*(int *)(puVar8 + 1) == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)*puVar8;
  }
  FString::PrintfImpl(&local_78,L"%s/SaveGames",puVar10);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  puVar10 = &DAT_143f3eda8;
  if (local_70 != 0) {
    puVar10 = local_78;
  }
  FString::PrintfImpl(&local_68,L"%s/%s.tmp",puVar10,puVar11);
  if (local_78 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_d8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_cc = uStack_5c;
  puVar11 = &DAT_143f3eda8;
  if (local_60 != 0) {
    puVar11 = local_68;
  }
  lVar4 = param_1[5];
  uStack_50 = (undefined4)param_1[6];
  local_58._0_4_ = (undefined4)lVar4;
  local_58._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  local_28 = (undefined4)local_58;
  uStack_24 = local_58._4_4_;
  uStack_1c = uStack_4c;
  local_d8 = local_68;
  local_d0 = local_60;
  local_58 = lVar4;
  uStack_20 = uStack_50;
  uVar9 = FUN_1415c3d50();
  cVar7 = FUN_14167ef40(&local_28,puVar11,uVar9,4);
  if (cVar7 == '\0') {
    local_90 = 2;
  }
  else {
    cVar7 = FUN_14166e5b0(&local_d8,&local_c8);
    local_90 = 1;
    if (cVar7 == '\0') {
      local_90 = 2;
    }
  }
  local_b8 = *param_1;
  local_b0 = param_1[1];
  local_a8 = (longlong *)param_1[2];
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
    UNLOCK();
  }
  FString::FString(local_a0,param_1 + 3);
  uVar9 = *(undefined8 *)(*(longlong *)(*param_1 + 0x98) + 0xa0);
  puVar8 = (undefined8 *)operator_new(0x40);
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    *puVar8 = &PTR_FUN_143f76b48;
    QueryPerformanceCounter(&local_res8);
    dVar5 = (double)local_res8.QuadPart * DAT_1468b02f8;
    *puVar8 = &PTR_FUN_143f7dc00;
    puVar8[1] = dVar5 + 16777216.0;
    puVar8[2] = local_b8;
    puVar8[3] = local_b0;
    puVar8[4] = local_a8;
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
      UNLOCK();
    }
    FString::FString(puVar8 + 5,local_a0);
    *(undefined4 *)(puVar8 + 7) = local_90;
  }
  FOnlineAsyncTaskManager::AddToOutQueue(uVar9,puVar8);
  if (local_a0[0] != 0) {
    FMemory::Free();
  }
  plVar6 = local_a8;
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a8 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_a8 + 8))(local_a8,1);
      }
    }
  }
  if (local_c8 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_d8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1404eaaa0 FUN_1404eaaa0 body=148 status=ok
// SIG undefined FUN_1404eaaa0(void)

undefined8 * FUN_1404eaaa0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)param_1[4];
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
  *param_1 = &PTR_FUN_143f76b48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1404eab40 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UIpNetDriver::FReceiveThreadRunnable::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  FUN_1404e8cb0(param_1 + 2);
  *param_1 = &PTR_FUN_143f76b48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1404eab90 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(void),UItemUtil::FAsyncDropInfo>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FUN_1404e8d40(param_1 + 2);
  *param_1 = &PTR_FUN_143f76b48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1404eabe0 FUN_1404eabe0 body=148 status=ok
// SIG undefined FUN_1404eabe0(void)

undefined8 * FUN_1404eabe0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)param_1[5];
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
  *param_1 = &PTR_FUN_143f76b48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1404eac80 `scalar_deleting_destructor' body=134 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
Chaos::TImplicitObjectInstanced<Chaos::FConvex>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[5];
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
  *param_1 = &PTR_FUN_143f76b48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1404ead10 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TBaseUObjectMethodDelegateInstance<0,UAssetManager,TTypeWrapper<void>___cdecl(void),FPrimaryAssetId,TSharedPtr<FStreamableHandle,0>,TBaseDelegate<void>_>
::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FHttpRequestFactory::Builder::~Builder(param_1 + 3);
  *param_1 = &PTR_FUN_143f76b48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1404ead60 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FBuildTileConesCS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1404e8f50();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x118);
  }
  return param_1;
}



// FUNCTION 1404eada0 FUN_1404eada0 body=43 status=ok
// SIG undefined FUN_1404eada0(void)

undefined8 * FUN_1404eada0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f47c98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1404eadd0 FUN_1404eadd0 body=151 status=ok
// SIG undefined FUN_1404eadd0(void)

undefined8 * FUN_1404eadd0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f7cc48;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  if (param_1[0x2a] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x22,0);
  if (param_1[0x26] != 0) {
    FMemory::Free();
  }
  if (param_1[0x22] != 0) {
    FMemory::Free();
  }
  FUN_1404e9010(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x160);
  }
  return param_1;
}



// FUNCTION 1404eae70 FUN_1404eae70 body=121 status=ok
// SIG undefined FUN_1404eae70(void)

undefined8 * FUN_1404eae70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f7cf20;
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x10);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xd);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 10);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 7);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 4);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 1);
  *param_1 = &PTR_FUN_143f47c98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 1404eaef0 FUN_1404eaef0 body=203 status=ok
// SIG undefined FUN_1404eaef0(void)

undefined8 * FUN_1404eaef0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_143f7ce68;
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  param_1[3] = &PTR_FUN_143f73cd8;
  plVar4 = (longlong *)param_1[5];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = (longlong *)param_1[2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  *param_1 = &PTR_FUN_143f7c9f0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1404eafc0 FUN_1404eafc0 body=239 status=ok
// SIG undefined FUN_1404eafc0(void)

undefined8 * FUN_1404eafc0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_143f7d720;
  plVar4 = (longlong *)param_1[0x6b];
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
  FUN_1404e8e20(param_1 + 0x68);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 99));
  param_1[0x50] = &PTR_FUN_143f60df0;
  FUN_1404b6bd0(param_1 + 0x50);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x60);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x5d);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x5a);
  if (param_1[0x52] != 0) {
    FMemory::Free();
  }
  FUN_1404e90c0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x368);
  }
  return param_1;
}



// FUNCTION 1404eb0b0 FUN_1404eb0b0 body=255 status=ok
// SIG undefined FUN_1404eb0b0(void)

undefined8 * FUN_1404eb0b0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_143f7d120;
  plVar4 = (longlong *)param_1[0x13];
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
  plVar4 = (longlong *)param_1[0x11];
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
  FUN_1404ac890(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 1404eb1b0 FUN_1404eb1b0 body=52 status=ok
// SIG undefined FUN_1404eb1b0(void)

undefined8 FUN_1404eb1b0(undefined8 param_1,ulonglong param_2)

{
  FUN_1404e9010();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 1404eb1f0 FUN_1404eb1f0 body=43 status=ok
// SIG undefined FUN_1404eb1f0(void)

undefined8 * FUN_1404eb1f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f7c9f0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1404eb220 FUN_1404eb220 body=121 status=ok
// SIG undefined FUN_1404eb220(void)

undefined8 * FUN_1404eb220(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f7cf20;
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x10);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xd);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 10);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 7);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 4);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 1);
  *param_1 = &PTR_FUN_143f47c98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 1404eb2a0 FUN_1404eb2a0 body=52 status=ok
// SIG undefined FUN_1404eb2a0(void)

undefined8 FUN_1404eb2a0(undefined8 param_1,ulonglong param_2)

{
  FUN_1404e90c0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x278);
  }
  return param_1;
}



// FUNCTION 1404eb2e0 FUN_1404eb2e0 body=82 status=ok
// SIG undefined FUN_1404eb2e0(void)

undefined8 * FUN_1404eb2e0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  TBaseMulticastDelegate<void>::Add(param_1 + 0x80,local_res8);
  lVar1 = param_3[1];
  *param_2 = 0;
  if (((int)lVar1 != 0) && (param_3 = (longlong *)*param_3, param_3 != (longlong *)0x0)) {
    puVar2 = (undefined8 *)(**(code **)(*param_3 + 0x20))(param_3,local_res8);
    *param_2 = *puVar2;
  }
  return param_2;
}



// FUNCTION 1404eb340 AddOnCancelMatchmakingCompleteDelegate_Handle body=85 status=ok
// SIG undefined AddOnCancelMatchmakingCompleteDelegate_Handle(void)

undefined8 *
IOnlineSession::AddOnCancelMatchmakingCompleteDelegate_Handle
          (longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  TBaseMulticastDelegate<void>::Add(param_1 + 0x98,local_res8);
  lVar1 = param_3[1];
  *param_2 = 0;
  if (((int)lVar1 != 0) && (param_3 = (longlong *)*param_3, param_3 != (longlong *)0x0)) {
    puVar2 = (undefined8 *)(**(code **)(*param_3 + 0x20))(param_3,local_res8);
    *param_2 = *puVar2;
  }
  return param_2;
}



// FUNCTION 1404eb3a0 FUN_1404eb3a0 body=85 status=ok
// SIG undefined FUN_1404eb3a0(void)

undefined8 * FUN_1404eb3a0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  TBaseMulticastDelegate<void>::Add(param_1 + 0x1e8,local_res8);
  lVar1 = param_3[1];
  *param_2 = 0;
  if (((int)lVar1 != 0) && (param_3 = (longlong *)*param_3, param_3 != (longlong *)0x0)) {
    puVar2 = (undefined8 *)(**(code **)(*param_3 + 0x20))(param_3,local_res8);
    *param_2 = *puVar2;
  }
  return param_2;
}



// FUNCTION 1404eb400 FUN_1404eb400 body=82 status=ok
// SIG undefined FUN_1404eb400(void)

undefined8 * FUN_1404eb400(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  TBaseMulticastDelegate<void>::Add(param_1 + 0x38,local_res8);
  lVar1 = param_3[1];
  *param_2 = 0;
  if (((int)lVar1 != 0) && (param_3 = (longlong *)*param_3, param_3 != (longlong *)0x0)) {
    puVar2 = (undefined8 *)(**(code **)(*param_3 + 0x20))(param_3,local_res8);
    *param_2 = *puVar2;
  }
  return param_2;
}



// FUNCTION 1404eb460 AddOnDestroySessionCompleteDelegate_Handle body=82 status=ok
// SIG undefined AddOnDestroySessionCompleteDelegate_Handle(void)

undefined8 *
IOnlineSession::AddOnDestroySessionCompleteDelegate_Handle
          (longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  TBaseMulticastDelegate<void>::Add(param_1 + 0x68,local_res8);
  lVar1 = param_3[1];
  *param_2 = 0;
  if (((int)lVar1 != 0) && (param_3 = (longlong *)*param_3, param_3 != (longlong *)0x0)) {
    puVar2 = (undefined8 *)(**(code **)(*param_3 + 0x20))(param_3,local_res8);
    *param_2 = *puVar2;
  }
  return param_2;
}



// FUNCTION 1404eb4c0 AddOnEndSessionCompleteDelegate_Handle body=82 status=ok
// SIG undefined AddOnEndSessionCompleteDelegate_Handle(void)

undefined8 *
IOnlineSession::AddOnEndSessionCompleteDelegate_Handle
          (longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  TBaseMulticastDelegate<void>::Add(param_1 + 0x50,local_res8);
  lVar1 = param_3[1];
  *param_2 = 0;
  if (((int)lVar1 != 0) && (param_3 = (longlong *)*param_3, param_3 != (longlong *)0x0)) {
    puVar2 = (undefined8 *)(**(code **)(*param_3 + 0x20))(param_3,local_res8);
    *param_2 = *puVar2;
  }
  return param_2;
}



// FUNCTION 1404eb520 FUN_1404eb520 body=259 status=ok
// SIG undefined FUN_1404eb520(void)

/* WARNING: Removing unreachable block (ram,0x0001404eb60b) */

undefined8 * FUN_1404eb520(longlong param_1,undefined8 *param_2,int param_3,longlong **param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 local_res10 [8];
  longlong *local_28;
  int local_20;
  
  uVar5 = 0;
  *param_2 = 0;
  if (param_3 == 0) {
    plVar1 = (longlong *)(param_1 + 0x200);
    if ((*(int *)(param_4 + 1) != 0) && (plVar3 = *param_4, plVar3 != (longlong *)0x0)) {
      local_28 = (longlong *)0x0;
      local_20 = 0;
      if (param_4 != &local_28) {
        (**(code **)(*plVar3 + 0x30))(plVar3,&local_28);
      }
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
      if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
        puVar4 = (undefined8 *)(**(code **)(*local_28 + 0x20))(local_28,local_res10);
        uVar5 = *puVar4;
      }
      iVar2 = *(int *)(param_1 + 0x208);
      *(int *)(param_1 + 0x208) = iVar2 + 1;
      if (*(int *)(param_1 + 0x20c) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
      *puVar4 = 0;
      *puVar4 = local_28;
      *(int *)(puVar4 + 1) = local_20;
    }
    *param_2 = uVar5;
  }
  return param_2;
}



// FUNCTION 1404eb630 FUN_1404eb630 body=261 status=ok
// SIG undefined FUN_1404eb630(void)

/* WARNING: Removing unreachable block (ram,0x0001404eb6fa) */

undefined8 * FUN_1404eb630(longlong param_1,undefined8 *param_2,longlong **param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  plVar1 = (longlong *)(param_1 + 200);
  if ((*(int *)(param_3 + 1) != 0) && (plVar3 = *param_3, plVar3 != (longlong *)0x0)) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    if (param_3 != &local_28) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_28);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
      (**(code **)(*local_28 + 0x20))(local_28,local_res8);
    }
    iVar2 = *(int *)(param_1 + 0xd0);
    *(int *)(param_1 + 0xd0) = iVar2 + 1;
    if (*(int *)(param_1 + 0xd4) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar4 = 0;
    *puVar4 = local_28;
    local_28 = (longlong *)0x0;
    *(int *)(puVar4 + 1) = local_20;
    local_20 = 0;
  }
  iVar2 = *(int *)(param_3 + 1);
  *param_2 = 0;
  if ((iVar2 != 0) && (plVar1 = *param_3, plVar1 != (longlong *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8);
    *param_2 = *puVar4;
  }
  return param_2;
}



// FUNCTION 1404eb740 FUN_1404eb740 body=261 status=ok
// SIG undefined FUN_1404eb740(void)

/* WARNING: Removing unreachable block (ram,0x0001404eb80a) */

undefined8 * FUN_1404eb740(longlong param_1,undefined8 *param_2,longlong **param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  plVar1 = (longlong *)(param_1 + 0xe0);
  if ((*(int *)(param_3 + 1) != 0) && (plVar3 = *param_3, plVar3 != (longlong *)0x0)) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    if (param_3 != &local_28) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_28);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
      (**(code **)(*local_28 + 0x20))(local_28,local_res8);
    }
    iVar2 = *(int *)(param_1 + 0xe8);
    *(int *)(param_1 + 0xe8) = iVar2 + 1;
    if (*(int *)(param_1 + 0xec) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar4 = 0;
    *puVar4 = local_28;
    local_28 = (longlong *)0x0;
    *(int *)(puVar4 + 1) = local_20;
    local_20 = 0;
  }
  iVar2 = *(int *)(param_3 + 1);
  *param_2 = 0;
  if ((iVar2 != 0) && (plVar1 = *param_3, plVar1 != (longlong *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8);
    *param_2 = *puVar4;
  }
  return param_2;
}



// FUNCTION 1404eb850 AddOnJoinSessionCompleteDelegate_Handle body=261 status=ok
// SIG undefined AddOnJoinSessionCompleteDelegate_Handle(void)

/* WARNING: Removing unreachable block (ram,0x0001404eb91a) */

undefined8 *
IOnlineSession::AddOnJoinSessionCompleteDelegate_Handle
          (longlong param_1,undefined8 *param_2,longlong **param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  plVar1 = (longlong *)(param_1 + 0xf8);
  if ((*(int *)(param_3 + 1) != 0) && (plVar3 = *param_3, plVar3 != (longlong *)0x0)) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    if (param_3 != &local_28) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_28);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
      (**(code **)(*local_28 + 0x20))(local_28,local_res8);
    }
    iVar2 = *(int *)(param_1 + 0x100);
    *(int *)(param_1 + 0x100) = iVar2 + 1;
    if (*(int *)(param_1 + 0x104) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar4 = 0;
    *puVar4 = local_28;
    local_28 = (longlong *)0x0;
    *(int *)(puVar4 + 1) = local_20;
    local_20 = 0;
  }
  iVar2 = *(int *)(param_3 + 1);
  *param_2 = 0;
  if ((iVar2 != 0) && (plVar1 = *param_3, plVar1 != (longlong *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8);
    *param_2 = *puVar4;
  }
  return param_2;
}



// FUNCTION 1404eb960 FUN_1404eb960 body=261 status=ok
// SIG undefined FUN_1404eb960(void)

/* WARNING: Removing unreachable block (ram,0x0001404eba2a) */

undefined8 * FUN_1404eb960(longlong param_1,undefined8 *param_2,longlong **param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  plVar1 = (longlong *)(param_1 + 0x170);
  if ((*(int *)(param_3 + 1) != 0) && (plVar3 = *param_3, plVar3 != (longlong *)0x0)) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    if (param_3 != &local_28) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_28);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
      (**(code **)(*local_28 + 0x20))(local_28,local_res8);
    }
    iVar2 = *(int *)(param_1 + 0x178);
    *(int *)(param_1 + 0x178) = iVar2 + 1;
    if (*(int *)(param_1 + 0x17c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar4 = 0;
    *puVar4 = local_28;
    local_28 = (longlong *)0x0;
    *(int *)(puVar4 + 1) = local_20;
    local_20 = 0;
  }
  iVar2 = *(int *)(param_3 + 1);
  *param_2 = 0;
  if ((iVar2 != 0) && (plVar1 = *param_3, plVar1 != (longlong *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8);
    *param_2 = *puVar4;
  }
  return param_2;
}



// FUNCTION 1404eba70 FUN_1404eba70 body=261 status=ok
// SIG undefined FUN_1404eba70(void)

/* WARNING: Removing unreachable block (ram,0x0001404ebb3a) */

undefined8 * FUN_1404eba70(longlong param_1,undefined8 *param_2,longlong **param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  plVar1 = (longlong *)(param_1 + 0x158);
  if ((*(int *)(param_3 + 1) != 0) && (plVar3 = *param_3, plVar3 != (longlong *)0x0)) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    if (param_3 != &local_28) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_28);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
      (**(code **)(*local_28 + 0x20))(local_28,local_res8);
    }
    iVar2 = *(int *)(param_1 + 0x160);
    *(int *)(param_1 + 0x160) = iVar2 + 1;
    if (*(int *)(param_1 + 0x164) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar4 = 0;
    *puVar4 = local_28;
    local_28 = (longlong *)0x0;
    *(int *)(puVar4 + 1) = local_20;
    local_20 = 0;
  }
  iVar2 = *(int *)(param_3 + 1);
  *param_2 = 0;
  if ((iVar2 != 0) && (plVar1 = *param_3, plVar1 != (longlong *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8);
    *param_2 = *puVar4;
  }
  return param_2;
}



// FUNCTION 1404ebb80 AddOnFindSessionsCompleteDelegate_Handle body=85 status=ok
// SIG undefined AddOnFindSessionsCompleteDelegate_Handle(void)

undefined8 *
IOnlineSession::AddOnFindSessionsCompleteDelegate_Handle
          (longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  TBaseMulticastDelegate<void>::Add(param_1 + 0xb0,local_res8);
  lVar1 = param_3[1];
  *param_2 = 0;
  if (((int)lVar1 != 0) && (param_3 = (longlong *)*param_3, param_3 != (longlong *)0x0)) {
    puVar2 = (undefined8 *)(**(code **)(*param_3 + 0x20))(param_3,local_res8);
    *param_2 = *puVar2;
  }
  return param_2;
}



// FUNCTION 1404ebbe0 AddOnQueryUserInfoCompleteDelegate_Handle body=258 status=ok
// SIG undefined AddOnQueryUserInfoCompleteDelegate_Handle(void)

/* WARNING: Removing unreachable block (ram,0x0001404ebcca) */

undefined8 *
IOnlineUser::AddOnQueryUserInfoCompleteDelegate_Handle
          (longlong param_1,undefined8 *param_2,int param_3,longlong **param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 local_res10 [8];
  longlong *local_28;
  int local_20;
  
  uVar4 = 0;
  *param_2 = 0;
  if (param_3 == 0) {
    if ((*(int *)(param_4 + 1) != 0) && (plVar2 = *param_4, plVar2 != (longlong *)0x0)) {
      local_28 = (longlong *)0x0;
      local_20 = 0;
      if (param_4 != &local_28) {
        (**(code **)(*plVar2 + 0x30))(plVar2,&local_28);
      }
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1 + 8,1);
      if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
        puVar3 = (undefined8 *)(**(code **)(*local_28 + 0x20))(local_28,local_res10);
        uVar4 = *puVar3;
      }
      iVar1 = *(int *)(param_1 + 0x10);
      *(int *)(param_1 + 0x10) = iVar1 + 1;
      if (*(int *)(param_1 + 0x14) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 8,iVar1);
      }
      puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 8));
      *puVar3 = 0;
      *puVar3 = local_28;
      *(int *)(puVar3 + 1) = local_20;
    }
    *param_2 = uVar4;
  }
  return param_2;
}



// FUNCTION 1404ebcf0 AddOnControllerPairingChangedDelegate_Handle body=258 status=ok
// SIG undefined AddOnControllerPairingChangedDelegate_Handle(void)

/* WARNING: Removing unreachable block (ram,0x0001404ebdb7) */

undefined8 *
IOnlineIdentity::AddOnControllerPairingChangedDelegate_Handle
          (longlong param_1,undefined8 *param_2,longlong **param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  plVar1 = (longlong *)(param_1 + 0x38);
  if ((*(int *)(param_3 + 1) != 0) && (plVar3 = *param_3, plVar3 != (longlong *)0x0)) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    if (param_3 != &local_28) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_28);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
      (**(code **)(*local_28 + 0x20))(local_28,local_res8);
    }
    iVar2 = *(int *)(param_1 + 0x40);
    *(int *)(param_1 + 0x40) = iVar2 + 1;
    if (*(int *)(param_1 + 0x44) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar4 = 0;
    *puVar4 = local_28;
    local_28 = (longlong *)0x0;
    *(int *)(puVar4 + 1) = local_20;
    local_20 = 0;
  }
  iVar2 = *(int *)(param_3 + 1);
  *param_2 = 0;
  if ((iVar2 != 0) && (plVar1 = *param_3, plVar1 != (longlong *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8);
    *param_2 = *puVar4;
  }
  return param_2;
}



// FUNCTION 1404ebe00 AddOnLoginStatusChangedDelegate_Handle body=258 status=ok
// SIG undefined AddOnLoginStatusChangedDelegate_Handle(void)

/* WARNING: Removing unreachable block (ram,0x0001404ebeea) */

undefined8 *
IOnlineIdentity::AddOnLoginStatusChangedDelegate_Handle
          (longlong param_1,undefined8 *param_2,int param_3,longlong **param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 local_res10 [8];
  longlong *local_28;
  int local_20;
  
  uVar4 = 0;
  *param_2 = 0;
  if (param_3 == 0) {
    if ((*(int *)(param_4 + 1) != 0) && (plVar2 = *param_4, plVar2 != (longlong *)0x0)) {
      local_28 = (longlong *)0x0;
      local_20 = 0;
      if (param_4 != &local_28) {
        (**(code **)(*plVar2 + 0x30))(plVar2,&local_28);
      }
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1 + 0x20,1);
      if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
        puVar3 = (undefined8 *)(**(code **)(*local_28 + 0x20))(local_28,local_res10);
        uVar4 = *puVar3;
      }
      iVar1 = *(int *)(param_1 + 0x28);
      *(int *)(param_1 + 0x28) = iVar1 + 1;
      if (*(int *)(param_1 + 0x2c) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x20,iVar1);
      }
      puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x20));
      *puVar3 = 0;
      *puVar3 = local_28;
      *(int *)(puVar3 + 1) = local_20;
    }
    *param_2 = uVar4;
  }
  return param_2;
}



// FUNCTION 1404ebf10 AddOnSessionParticipantSettingsUpdatedDelegate_Handle body=261 status=ok
// SIG undefined AddOnSessionParticipantSettingsUpdatedDelegate_Handle(void)

/* WARNING: Removing unreachable block (ram,0x0001404ebfda) */

undefined8 *
FOnlineSessionEOS::AddOnSessionParticipantSettingsUpdatedDelegate_Handle
          (longlong param_1,undefined8 *param_2,longlong **param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  plVar1 = (longlong *)(param_1 + 0x1d0);
  if ((*(int *)(param_3 + 1) != 0) && (plVar3 = *param_3, plVar3 != (longlong *)0x0)) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    if (param_3 != &local_28) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_28);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
      (**(code **)(*local_28 + 0x20))(local_28,local_res8);
    }
    iVar2 = *(int *)(param_1 + 0x1d8);
    *(int *)(param_1 + 0x1d8) = iVar2 + 1;
    if (*(int *)(param_1 + 0x1dc) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar4 = 0;
    *puVar4 = local_28;
    local_28 = (longlong *)0x0;
    *(int *)(puVar4 + 1) = local_20;
    local_20 = 0;
  }
  iVar2 = *(int *)(param_3 + 1);
  *param_2 = 0;
  if ((iVar2 != 0) && (plVar1 = *param_3, plVar1 != (longlong *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8);
    *param_2 = *puVar4;
  }
  return param_2;
}



// FUNCTION 1404ec020 AddOnRequestUsageInfoCompleteDelegate_Handle body=261 status=ok
// SIG undefined AddOnRequestUsageInfoCompleteDelegate_Handle(void)

/* WARNING: Removing unreachable block (ram,0x0001404ec0ea) */

undefined8 *
IOnlineUserCloud::AddOnRequestUsageInfoCompleteDelegate_Handle
          (longlong param_1,undefined8 *param_2,longlong **param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  plVar1 = (longlong *)(param_1 + 0x98);
  if ((*(int *)(param_3 + 1) != 0) && (plVar3 = *param_3, plVar3 != (longlong *)0x0)) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    if (param_3 != &local_28) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_28);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
      (**(code **)(*local_28 + 0x20))(local_28,local_res8);
    }
    iVar2 = *(int *)(param_1 + 0xa0);
    *(int *)(param_1 + 0xa0) = iVar2 + 1;
    if (*(int *)(param_1 + 0xa4) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar4 = 0;
    *puVar4 = local_28;
    local_28 = (longlong *)0x0;
    *(int *)(puVar4 + 1) = local_20;
    local_20 = 0;
  }
  iVar2 = *(int *)(param_3 + 1);
  *param_2 = 0;
  if ((iVar2 != 0) && (plVar1 = *param_3, plVar1 != (longlong *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8);
    *param_2 = *puVar4;
  }
  return param_2;
}



// FUNCTION 1404ec130 FUN_1404ec130 body=261 status=ok
// SIG undefined FUN_1404ec130(void)

/* WARNING: Removing unreachable block (ram,0x0001404ec1fa) */

undefined8 * FUN_1404ec130(longlong param_1,undefined8 *param_2,longlong **param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  plVar1 = (longlong *)(param_1 + 0xb0);
  if ((*(int *)(param_3 + 1) != 0) && (plVar3 = *param_3, plVar3 != (longlong *)0x0)) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    if (param_3 != &local_28) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_28);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
      (**(code **)(*local_28 + 0x20))(local_28,local_res8);
    }
    iVar2 = *(int *)(param_1 + 0xb8);
    *(int *)(param_1 + 0xb8) = iVar2 + 1;
    if (*(int *)(param_1 + 0xbc) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar4 = 0;
    *puVar4 = local_28;
    local_28 = (longlong *)0x0;
    *(int *)(puVar4 + 1) = local_20;
    local_20 = 0;
  }
  iVar2 = *(int *)(param_3 + 1);
  *param_2 = 0;
  if ((iVar2 != 0) && (plVar1 = *param_3, plVar1 != (longlong *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8);
    *param_2 = *puVar4;
  }
  return param_2;
}



// FUNCTION 1404ec240 AddOnSessionInviteReceivedDelegate_Handle body=261 status=ok
// SIG undefined AddOnSessionInviteReceivedDelegate_Handle(void)

/* WARNING: Removing unreachable block (ram,0x0001404ec30a) */

undefined8 *
IOnlineSession::AddOnSessionInviteReceivedDelegate_Handle
          (longlong param_1,undefined8 *param_2,longlong **param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  plVar1 = (longlong *)(param_1 + 0x140);
  if ((*(int *)(param_3 + 1) != 0) && (plVar3 = *param_3, plVar3 != (longlong *)0x0)) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    if (param_3 != &local_28) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_28);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
      (**(code **)(*local_28 + 0x20))(local_28,local_res8);
    }
    iVar2 = *(int *)(param_1 + 0x148);
    *(int *)(param_1 + 0x148) = iVar2 + 1;
    if (*(int *)(param_1 + 0x14c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar4 = 0;
    *puVar4 = local_28;
    local_28 = (longlong *)0x0;
    *(int *)(puVar4 + 1) = local_20;
    local_20 = 0;
  }
  iVar2 = *(int *)(param_3 + 1);
  *param_2 = 0;
  if ((iVar2 != 0) && (plVar1 = *param_3, plVar1 != (longlong *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8);
    *param_2 = *puVar4;
  }
  return param_2;
}



// FUNCTION 1404ec350 FUN_1404ec350 body=261 status=ok
// SIG undefined FUN_1404ec350(void)

/* WARNING: Removing unreachable block (ram,0x0001404ec41a) */

undefined8 * FUN_1404ec350(longlong param_1,undefined8 *param_2,longlong **param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  plVar1 = (longlong *)(param_1 + 0x260);
  if ((*(int *)(param_3 + 1) != 0) && (plVar3 = *param_3, plVar3 != (longlong *)0x0)) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    if (param_3 != &local_28) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_28);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
      (**(code **)(*local_28 + 0x20))(local_28,local_res8);
    }
    iVar2 = *(int *)(param_1 + 0x268);
    *(int *)(param_1 + 0x268) = iVar2 + 1;
    if (*(int *)(param_1 + 0x26c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar4 = 0;
    *puVar4 = local_28;
    local_28 = (longlong *)0x0;
    *(int *)(puVar4 + 1) = local_20;
    local_20 = 0;
  }
  iVar2 = *(int *)(param_3 + 1);
  *param_2 = 0;
  if ((iVar2 != 0) && (plVar1 = *param_3, plVar1 != (longlong *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8);
    *param_2 = *puVar4;
  }
  return param_2;
}



// FUNCTION 1404ec460 FUN_1404ec460 body=85 status=ok
// SIG undefined FUN_1404ec460(void)

undefined8 * FUN_1404ec460(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  TBaseMulticastDelegate<void>::Add(param_1 + 0x188,local_res8);
  lVar1 = param_3[1];
  *param_2 = 0;
  if (((int)lVar1 != 0) && (param_3 = (longlong *)*param_3, param_3 != (longlong *)0x0)) {
    puVar2 = (undefined8 *)(**(code **)(*param_3 + 0x20))(param_3,local_res8);
    *param_2 = *puVar2;
  }
  return param_2;
}



// FUNCTION 1404ec4c0 FUN_1404ec4c0 body=85 status=ok
// SIG undefined FUN_1404ec4c0(void)

undefined8 * FUN_1404ec4c0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  TBaseMulticastDelegate<void>::Add(param_1 + 0x218,local_res8);
  lVar1 = param_3[1];
  *param_2 = 0;
  if (((int)lVar1 != 0) && (param_3 = (longlong *)*param_3, param_3 != (longlong *)0x0)) {
    puVar2 = (undefined8 *)(**(code **)(*param_3 + 0x20))(param_3,local_res8);
    *param_2 = *puVar2;
  }
  return param_2;
}



// FUNCTION 1404ec520 FUN_1404ec520 body=85 status=ok
// SIG undefined FUN_1404ec520(void)

undefined8 * FUN_1404ec520(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  TBaseMulticastDelegate<void>::Add(param_1 + 0xf8,local_res8);
  lVar1 = param_3[1];
  *param_2 = 0;
  if (((int)lVar1 != 0) && (param_3 = (longlong *)*param_3, param_3 != (longlong *)0x0)) {
    puVar2 = (undefined8 *)(**(code **)(*param_3 + 0x20))(param_3,local_res8);
    *param_2 = *puVar2;
  }
  return param_2;
}



// FUNCTION 1404ec580 AddOnSessionSettingsUpdatedDelegate_Handle body=261 status=ok
// SIG undefined AddOnSessionSettingsUpdatedDelegate_Handle(void)

/* WARNING: Removing unreachable block (ram,0x0001404ec64a) */

undefined8 *
FOnlineSessionEOS::AddOnSessionSettingsUpdatedDelegate_Handle
          (longlong param_1,undefined8 *param_2,longlong **param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  plVar1 = (longlong *)(param_1 + 0x1b8);
  if ((*(int *)(param_3 + 1) != 0) && (plVar3 = *param_3, plVar3 != (longlong *)0x0)) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    if (param_3 != &local_28) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_28);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
      (**(code **)(*local_28 + 0x20))(local_28,local_res8);
    }
    iVar2 = *(int *)(param_1 + 0x1c0);
    *(int *)(param_1 + 0x1c0) = iVar2 + 1;
    if (*(int *)(param_1 + 0x1c4) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar4 = 0;
    *puVar4 = local_28;
    local_28 = (longlong *)0x0;
    *(int *)(puVar4 + 1) = local_20;
    local_20 = 0;
  }
  iVar2 = *(int *)(param_3 + 1);
  *param_2 = 0;
  if ((iVar2 != 0) && (plVar1 = *param_3, plVar1 != (longlong *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8);
    *param_2 = *puVar4;
  }
  return param_2;
}



// FUNCTION 1404ec690 AddOnQueryBlockedPlayersCompleteDelegate_Handle body=261 status=ok
// SIG undefined AddOnQueryBlockedPlayersCompleteDelegate_Handle(void)

/* WARNING: Removing unreachable block (ram,0x0001404ec75a) */

undefined8 *
IOnlineFriends::AddOnQueryBlockedPlayersCompleteDelegate_Handle
          (longlong param_1,undefined8 *param_2,longlong **param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  plVar1 = (longlong *)(param_1 + 0x128);
  if ((*(int *)(param_3 + 1) != 0) && (plVar3 = *param_3, plVar3 != (longlong *)0x0)) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    if (param_3 != &local_28) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_28);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
      (**(code **)(*local_28 + 0x20))(local_28,local_res8);
    }
    iVar2 = *(int *)(param_1 + 0x130);
    *(int *)(param_1 + 0x130) = iVar2 + 1;
    if (*(int *)(param_1 + 0x134) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar4 = 0;
    *puVar4 = local_28;
    local_28 = (longlong *)0x0;
    *(int *)(puVar4 + 1) = local_20;
    local_20 = 0;
  }
  iVar2 = *(int *)(param_3 + 1);
  *param_2 = 0;
  if ((iVar2 != 0) && (plVar1 = *param_3, plVar1 != (longlong *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8);
    *param_2 = *puVar4;
  }
  return param_2;
}



// FUNCTION 1404ec7a0 FUN_1404ec7a0 body=261 status=ok
// SIG undefined FUN_1404ec7a0(void)

/* WARNING: Removing unreachable block (ram,0x0001404ec86a) */

undefined8 * FUN_1404ec7a0(longlong param_1,undefined8 *param_2,longlong **param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  plVar1 = (longlong *)(param_1 + 0x248);
  if ((*(int *)(param_3 + 1) != 0) && (plVar3 = *param_3, plVar3 != (longlong *)0x0)) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    if (param_3 != &local_28) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_28);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
      (**(code **)(*local_28 + 0x20))(local_28,local_res8);
    }
    iVar2 = *(int *)(param_1 + 0x250);
    *(int *)(param_1 + 0x250) = iVar2 + 1;
    if (*(int *)(param_1 + 0x254) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar4 = 0;
    *puVar4 = local_28;
    local_28 = (longlong *)0x0;
    *(int *)(puVar4 + 1) = local_20;
    local_20 = 0;
  }
  iVar2 = *(int *)(param_3 + 1);
  *param_2 = 0;
  if ((iVar2 != 0) && (plVar1 = *param_3, plVar1 != (longlong *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8);
    *param_2 = *puVar4;
  }
  return param_2;
}



// FUNCTION 1404ec8b0 FUN_1404ec8b0 body=261 status=ok
// SIG undefined FUN_1404ec8b0(void)

/* WARNING: Removing unreachable block (ram,0x0001404ec97a) */

undefined8 * FUN_1404ec8b0(longlong param_1,undefined8 *param_2,longlong **param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  plVar1 = (longlong *)(param_1 + 0x110);
  if ((*(int *)(param_3 + 1) != 0) && (plVar3 = *param_3, plVar3 != (longlong *)0x0)) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    if (param_3 != &local_28) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_28);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
      (**(code **)(*local_28 + 0x20))(local_28,local_res8);
    }
    iVar2 = *(int *)(param_1 + 0x118);
    *(int *)(param_1 + 0x118) = iVar2 + 1;
    if (*(int *)(param_1 + 0x11c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar4 = 0;
    *puVar4 = local_28;
    local_28 = (longlong *)0x0;
    *(int *)(puVar4 + 1) = local_20;
    local_20 = 0;
  }
  iVar2 = *(int *)(param_3 + 1);
  *param_2 = 0;
  if ((iVar2 != 0) && (plVar1 = *param_3, plVar1 != (longlong *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8);
    *param_2 = *puVar4;
  }
  return param_2;
}



// FUNCTION 1404ec9c0 FUN_1404ec9c0 body=85 status=ok
// SIG undefined FUN_1404ec9c0(void)

undefined8 * FUN_1404ec9c0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  TBaseMulticastDelegate<void>::Add(param_1 + 0x1a0,local_res8);
  lVar1 = param_3[1];
  *param_2 = 0;
  if (((int)lVar1 != 0) && (param_3 = (longlong *)*param_3, param_3 != (longlong *)0x0)) {
    puVar2 = (undefined8 *)(**(code **)(*param_3 + 0x20))(param_3,local_res8);
    *param_2 = *puVar2;
  }
  return param_2;
}



// FUNCTION 1404eca20 FUN_1404eca20 body=85 status=ok
// SIG undefined FUN_1404eca20(void)

undefined8 * FUN_1404eca20(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  TBaseMulticastDelegate<void>::Add(param_1 + 0x230,local_res8);
  lVar1 = param_3[1];
  *param_2 = 0;
  if (((int)lVar1 != 0) && (param_3 = (longlong *)*param_3, param_3 != (longlong *)0x0)) {
    puVar2 = (undefined8 *)(**(code **)(*param_3 + 0x20))(param_3,local_res8);
    *param_2 = *puVar2;
  }
  return param_2;
}



// FUNCTION 1404eca80 FUN_1404eca80 body=1415 status=ok
// SIG undefined FUN_1404eca80(void)

void FUN_1404eca80(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  bool bVar11;
  char cVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  uint *puVar18;
  int iVar19;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  uint uStack_90;
  int iStack_8c;
  int local_88;
  longlong *local_80;
  undefined8 uStack_78;
  uint *puStack_70;
  uint uStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  longlong *local_58;
  longlong lStack_50;
  uint *puStack_48;
  undefined4 uStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  
  uVar2 = *(undefined1 *)(param_3 + 0x18);
  uVar3 = *(undefined1 *)(param_3 + 0x17);
  uVar4 = *(undefined1 *)(param_3 + 0x16);
  uVar5 = *(undefined1 *)(param_3 + 0x15);
  uVar6 = *(undefined1 *)(param_3 + 0x11);
  uVar7 = *(undefined1 *)(param_3 + 0x14);
  uVar8 = *(undefined1 *)(param_3 + 0x13);
  uVar9 = *(undefined1 *)(param_3 + 0x12);
  uVar10 = *(undefined1 *)(param_3 + 0x10);
  if ((*(char *)((longlong)param_2 + 0x14) == '\0') &&
     ((int)param_2[2] + 4U <= *(uint *)(param_2 + 1))) {
    *(undefined1 *)((longlong)(int)param_2[2] + *param_2) = *(undefined1 *)(param_3 + 0xb);
    *(undefined1 *)((longlong)(int)param_2[2] + 1 + *param_2) = *(undefined1 *)(param_3 + 10);
    *(undefined1 *)((longlong)(int)param_2[2] + 2 + *param_2) = *(undefined1 *)(param_3 + 9);
    *(undefined1 *)((longlong)(int)param_2[2] + 3 + *param_2) = *(undefined1 *)(param_3 + 8);
    *(int *)(param_2 + 2) = (int)param_2[2] + 4;
    cVar12 = *(char *)((longlong)param_2 + 0x14);
  }
  else {
    *(undefined1 *)((longlong)param_2 + 0x14) = 1;
    cVar12 = '\x01';
  }
  if ((cVar12 == '\0') && ((int)param_2[2] + 4U <= *(uint *)(param_2 + 1))) {
    *(undefined1 *)((longlong)(int)param_2[2] + *param_2) = *(undefined1 *)(param_3 + 0xf);
    *(undefined1 *)((longlong)(int)param_2[2] + 1 + *param_2) = *(undefined1 *)(param_3 + 0xe);
    *(undefined1 *)((longlong)(int)param_2[2] + 2 + *param_2) = *(undefined1 *)(param_3 + 0xd);
    *(undefined1 *)((longlong)(int)param_2[2] + 3 + *param_2) = *(undefined1 *)(param_3 + 0xc);
    iVar16 = (int)param_2[2];
    *(int *)(param_2 + 2) = iVar16 + 4;
    if ((*(char *)((longlong)param_2 + 0x14) == '\0') && (iVar16 + 5U <= *(uint *)(param_2 + 1))) {
      *(uint *)(param_2 + 2) = iVar16 + 5U;
      *(undefined1 *)((longlong)iVar16 + 4 + *param_2) = uVar10;
      if (*(char *)((longlong)param_2 + 0x14) == '\0') {
        lVar15 = param_2[2];
        uVar13 = (int)lVar15 + 1;
        if (uVar13 <= *(uint *)(param_2 + 1)) {
          *(uint *)(param_2 + 2) = uVar13;
          *(undefined1 *)((longlong)(int)lVar15 + *param_2) = uVar9;
          if (*(char *)((longlong)param_2 + 0x14) == '\0') {
            lVar15 = param_2[2];
            uVar13 = (int)lVar15 + 1;
            if (uVar13 <= *(uint *)(param_2 + 1)) {
              *(uint *)(param_2 + 2) = uVar13;
              *(undefined1 *)((longlong)(int)lVar15 + *param_2) = uVar8;
              if (*(char *)((longlong)param_2 + 0x14) == '\0') {
                lVar15 = param_2[2];
                uVar13 = (int)lVar15 + 1;
                if (uVar13 <= *(uint *)(param_2 + 1)) {
                  *(uint *)(param_2 + 2) = uVar13;
                  *(undefined1 *)((longlong)(int)lVar15 + *param_2) = uVar7;
                  if (*(char *)((longlong)param_2 + 0x14) == '\0') {
                    lVar15 = param_2[2];
                    uVar13 = (int)lVar15 + 1;
                    if (uVar13 <= *(uint *)(param_2 + 1)) {
                      *(uint *)(param_2 + 2) = uVar13;
                      *(undefined1 *)((longlong)(int)lVar15 + *param_2) = uVar6;
                      if (*(char *)((longlong)param_2 + 0x14) == '\0') {
                        lVar15 = param_2[2];
                        uVar13 = (int)lVar15 + 1;
                        if (uVar13 <= *(uint *)(param_2 + 1)) {
                          *(uint *)(param_2 + 2) = uVar13;
                          *(undefined1 *)((longlong)(int)lVar15 + *param_2) = uVar5;
                          if (*(char *)((longlong)param_2 + 0x14) == '\0') {
                            lVar15 = param_2[2];
                            uVar13 = (int)lVar15 + 1;
                            if (uVar13 <= *(uint *)(param_2 + 1)) {
                              *(uint *)(param_2 + 2) = uVar13;
                              *(undefined1 *)((longlong)(int)lVar15 + *param_2) = uVar4;
                              if (*(char *)((longlong)param_2 + 0x14) == '\0') {
                                lVar15 = param_2[2];
                                uVar13 = (int)lVar15 + 1;
                                if (uVar13 <= *(uint *)(param_2 + 1)) {
                                  *(uint *)(param_2 + 2) = uVar13;
                                  *(undefined1 *)((longlong)(int)lVar15 + *param_2) = uVar3;
                                  if (*(char *)((longlong)param_2 + 0x14) == '\0') {
                                    lVar15 = param_2[2];
                                    uVar13 = (int)lVar15 + 1;
                                    if (uVar13 <= *(uint *)(param_2 + 1)) {
                                      *(uint *)(param_2 + 2) = uVar13;
                                      *(undefined1 *)((longlong)(int)lVar15 + *param_2) = uVar2;
                                      goto LAB_1404eccd2;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *(undefined1 *)((longlong)param_2 + 0x14) = 1;
LAB_1404eccd2:
  iVar19 = 0;
  iVar17 = 0;
  plVar1 = (longlong *)(param_3 + 0x28);
  iVar16 = *(int *)(param_3 + 0x50);
  puStack_70 = (uint *)(param_3 + 0x38);
  local_a8._0_4_ = 0;
  local_a8._4_4_ = 1;
  local_98._4_4_ = 0;
  uStack_90 = 0;
  if (iVar16 != 0) {
    puVar18 = *(uint **)(param_3 + 0x48);
    if (*(uint **)(param_3 + 0x48) == (uint *)0x0) {
      puVar18 = puStack_70;
    }
    uVar13 = *puVar18;
    local_a8._0_4_ = iVar19;
    while (uVar13 == 0) {
      lVar15 = (longlong)(int)local_a8;
      uStack_90 = uStack_90 + 0x20;
      iVar14 = (int)local_a8 + 1;
      bVar11 = (int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_a8;
      local_a8._0_4_ = iVar14;
      if (bVar11) goto LAB_1404ecd7d;
      uVar13 = puVar18[lVar15 + 1];
    }
    local_a8._4_4_ = -uVar13 & uVar13;
    iVar14 = 0x1f;
    if (local_a8._4_4_ != 0) {
      for (; local_a8._4_4_ >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (local_a8._4_4_ == 0) {
      iVar14 = 0x20;
    }
    else {
      iVar14 = 0x1f - iVar14;
    }
    local_98._4_4_ = (uStack_90 - iVar14) + 0x1f;
    if (iVar16 < local_98._4_4_) {
LAB_1404ecd7d:
      local_98._4_4_ = iVar16;
    }
  }
  _uStack_68 = CONCAT44(local_98._4_4_,0xffffffff);
  iStack_60 = uStack_90;
  uStack_78._0_4_ = (int)local_a8;
  uStack_78._4_4_ = local_a8._4_4_;
  uStack_a0._0_4_ = (int)local_a8;
  uStack_a0._4_4_ = local_a8._4_4_;
  local_88 = uStack_90;
  uStack_90 = 0xffffffff;
  iStack_8c = local_98._4_4_;
  bVar11 = local_98._4_4_ < iVar16;
  local_a8 = plVar1;
  local_80 = plVar1;
  iVar16 = iVar19;
  local_98 = puStack_70;
  if (bVar11) {
    do {
      iVar17 = iVar16 + 1;
      if (*(int *)(*local_a8 + 0x20 + (longlong)iStack_8c * 0x30) < 2) {
        iVar17 = iVar16;
      }
      uStack_90 = uStack_90 & ~uStack_a0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
      iVar16 = iVar17;
    } while (iStack_8c < (int)local_98[6]);
  }
  if ((*(char *)((longlong)param_2 + 0x14) == '\0') &&
     ((int)param_2[2] + 4U <= *(uint *)(param_2 + 1))) {
    *(char *)((longlong)(int)param_2[2] + *param_2) = (char)((uint)iVar17 >> 0x18);
    *(char *)((longlong)(int)param_2[2] + 1 + *param_2) = (char)((uint)iVar17 >> 0x10);
    *(char *)((longlong)(int)param_2[2] + 2 + *param_2) = (char)((uint)iVar17 >> 8);
    *(char *)((longlong)(int)param_2[2] + 3 + *param_2) = (char)iVar17;
    *(int *)(param_2 + 2) = (int)param_2[2] + 4;
  }
  else {
    *(undefined1 *)((longlong)param_2 + 0x14) = 1;
  }
  iVar16 = *(int *)(param_3 + 0x50);
  uStack_a0 = (uint *)(param_3 + 0x38);
  local_a8 = (longlong *)0x100000000;
  local_98._4_4_ = 0;
  uStack_90 = 0;
  if (iVar16 != 0) {
    puVar18 = *(uint **)(param_3 + 0x48);
    if (*(uint **)(param_3 + 0x48) == (uint *)0x0) {
      puVar18 = uStack_a0;
    }
    uVar13 = *puVar18;
    while (uVar13 == 0) {
      uStack_90 = uStack_90 + 0x20;
      local_a8._4_4_ = (uint)((ulonglong)local_a8 >> 0x20);
      local_a8 = (longlong *)CONCAT44(local_a8._4_4_,iVar19 + 1);
      if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar19) goto LAB_1404ecef9;
      uVar13 = puVar18[(longlong)iVar19 + 1];
      iVar19 = iVar19 + 1;
    }
    uVar13 = -uVar13 & uVar13;
    iVar19 = 0x1f;
    if (uVar13 != 0) {
      for (; uVar13 >> iVar19 == 0; iVar19 = iVar19 + -1) {
      }
    }
    local_a8 = (longlong *)CONCAT44(uVar13,(int)local_a8);
    if (uVar13 == 0) {
      iVar19 = 0x20;
    }
    else {
      iVar19 = 0x1f - iVar19;
    }
    local_98._4_4_ = (uStack_90 - iVar19) + 0x1f;
    if (iVar16 < local_98._4_4_) {
LAB_1404ecef9:
      local_98._4_4_ = iVar16;
    }
  }
  local_98._0_4_ = 0xffffffff;
  uStack_40 = 0xffffffff;
  iStack_3c = local_98._4_4_;
  iStack_38 = uStack_90;
  iStack_34 = iStack_8c;
  lStack_50 = (longlong)local_a8;
  uStack_68 = 0xffffffff;
  iStack_64 = local_98._4_4_;
  uStack_78 = (longlong)local_a8;
  iStack_60 = uStack_90;
  iStack_5c = iStack_8c;
  local_80 = plVar1;
  puStack_70 = uStack_a0;
  local_58 = plVar1;
  puStack_48 = uStack_a0;
  if (local_98._4_4_ < iVar16) {
    do {
      lVar15 = *local_80 + (longlong)iStack_64 * 0x30;
      if (1 < *(int *)(lVar15 + 0x20)) {
        FName::ToString(lVar15,&local_a8);
        operator<<(param_2,&local_a8);
        if (local_a8 != (longlong *)0x0) {
          FMemory::Free();
        }
        FUN_1404e9760(param_2,lVar15 + 8);
        uVar2 = *(undefined1 *)(lVar15 + 0x20);
        if (*(char *)((longlong)param_2 + 0x14) == '\0') {
          lVar15 = param_2[2];
          uVar13 = (int)lVar15 + 1;
          if (uVar13 <= *(uint *)(param_2 + 1)) {
            *(uint *)(param_2 + 2) = uVar13;
            *(undefined1 *)((longlong)(int)lVar15 + *param_2) = uVar2;
            goto LAB_1404ecfc5;
          }
        }
        *(undefined1 *)((longlong)param_2 + 0x14) = 1;
      }
LAB_1404ecfc5:
      uStack_68 = uStack_68 & ~uStack_78._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_78);
    } while (iStack_64 < (int)puStack_70[6]);
  }
  return;
}



// FUNCTION 1404ed010 FUN_1404ed010 body=779 status=ok
// SIG undefined FUN_1404ed010(void)

void FUN_1404ed010(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  
  plVar3 = *(longlong **)(param_3 + 0x10);
  lVar4 = *(longlong *)(param_3 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  operator<<(param_2,lVar4 + 0x18);
  plVar7 = (longlong *)operator<<(param_2,param_3 + 0x18);
  if ((*(char *)((longlong)plVar7 + 0x14) == '\0') && ((int)plVar7[2] + 4U <= *(uint *)(plVar7 + 1))
     ) {
    *(undefined1 *)((longlong)(int)plVar7[2] + *plVar7) = *(undefined1 *)(param_3 + 0xb3);
    *(undefined1 *)((longlong)(int)plVar7[2] + 1 + *plVar7) = *(undefined1 *)(param_3 + 0xb2);
    *(undefined1 *)((longlong)(int)plVar7[2] + 2 + *plVar7) = *(undefined1 *)(param_3 + 0xb1);
    *(undefined1 *)((longlong)(int)plVar7[2] + 3 + *plVar7) = *(undefined1 *)(param_3 + 0xb0);
    *(int *)(plVar7 + 2) = (int)plVar7[2] + 4;
    cVar5 = *(char *)((longlong)plVar7 + 0x14);
  }
  else {
    *(undefined1 *)((longlong)plVar7 + 0x14) = 1;
    cVar5 = '\x01';
  }
  if ((cVar5 == '\0') && ((int)plVar7[2] + 4U <= *(uint *)(plVar7 + 1))) {
    *(undefined1 *)((longlong)(int)plVar7[2] + *plVar7) = *(undefined1 *)(param_3 + 0xb7);
    *(undefined1 *)((longlong)(int)plVar7[2] + 1 + *plVar7) = *(undefined1 *)(param_3 + 0xb6);
    *(undefined1 *)((longlong)(int)plVar7[2] + 2 + *plVar7) = *(undefined1 *)(param_3 + 0xb5);
    *(undefined1 *)((longlong)(int)plVar7[2] + 3 + *plVar7) = *(undefined1 *)(param_3 + 0xb4);
    *(int *)(plVar7 + 2) = (int)plVar7[2] + 4;
  }
  else {
    *(undefined1 *)((longlong)plVar7 + 0x14) = 1;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  puVar8 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x278) + 0x10))
                     (*(longlong **)(param_1 + 0x278),local_res18);
  uVar6 = FUN_1404d0140(*puVar8);
  plVar3 = *(longlong **)(param_3 + 0xa8);
  lVar4 = *(longlong *)(param_3 + 0xa0);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if ((lVar4 != 0) && (plVar7 = *(longlong **)(lVar4 + 8), plVar7 != (longlong *)0x0)) {
    (**(code **)(*plVar7 + 0x30))(plVar7,uVar6);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  plVar3 = *(longlong **)(param_3 + 0xa8);
  lVar4 = *(longlong *)(param_3 + 0xa0);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  operator<<(param_2,lVar4 + 0x30);
  plVar7 = *(longlong **)(lVar4 + 8);
  (**(code **)(*plVar7 + 0x28))(plVar7,local_res8);
  if ((*(char *)((longlong)param_2 + 0x14) == '\0') &&
     ((int)param_2[2] + 4U <= *(uint *)(param_2 + 1))) {
    *(char *)((longlong)(int)param_2[2] + *param_2) = SUB41(local_res8._0_4_,3);
    *(char *)((longlong)(int)param_2[2] + 1 + *param_2) = SUB41(local_res8._0_4_,2);
    *(char *)((longlong)(int)param_2[2] + 2 + *param_2) = SUB41(local_res8._0_4_,1);
    *(undefined1 *)((longlong)(int)param_2[2] + 3 + *param_2) = local_res8[0];
    *(int *)(param_2 + 2) = (int)param_2[2] + 4;
  }
  else {
    *(undefined1 *)((longlong)param_2 + 0x14) = 1;
  }
  (**(code **)(*plVar7 + 0x40))(plVar7,local_res10);
  if ((*(char *)((longlong)param_2 + 0x14) == '\0') &&
     ((int)param_2[2] + 4U <= *(uint *)(param_2 + 1))) {
    *(char *)((longlong)(int)param_2[2] + *param_2) = SUB41(local_res10._0_4_,3);
    *(char *)((longlong)(int)param_2[2] + 1 + *param_2) = SUB41(local_res10._0_4_,2);
    *(char *)((longlong)(int)param_2[2] + 2 + *param_2) = SUB41(local_res10._0_4_,1);
    *(undefined1 *)((longlong)(int)param_2[2] + 3 + *param_2) = local_res10[0];
    *(int *)(param_2 + 2) = (int)param_2[2] + 4;
  }
  else {
    *(undefined1 *)((longlong)param_2 + 0x14) = 1;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  FUN_1404eca80(param_1,param_2,param_3 + 0x28);
  return;
}



// FUNCTION 1404ed320 FUN_1404ed320 body=53 status=ok
// SIG undefined FUN_1404ed320(void)

bool FUN_1404ed320(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  puVar3 = &DAT_143f3eda8;
  if (*(int *)(param_3 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*param_3;
  }
  if (*(int *)(param_2 + 1) != 0) {
    puVar3 = (undefined2 *)*param_2;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar2);
  return iVar1 == 0;
}



// FUNCTION 1404ed370 FUN_1404ed370 body=104 status=ok
// SIG undefined FUN_1404ed370(void)

void FUN_1404ed370(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *plStack_10;
  
  local_18 = 0;
  plStack_10 = (longlong *)0x0;
  (**(code **)(*param_1 + 0x20))(0,param_2,1,&local_18);
  plVar5 = plStack_10;
  if (plStack_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_10)(plStack_10);
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
  return;
}



// FUNCTION 1404ed3e0 FUN_1404ed3e0 body=196 status=ok
// SIG undefined FUN_1404ed3e0(void)

void FUN_1404ed3e0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
  iVar5 = *(int *)((longlong)param_1 + 0x14);
  bVar2 = false;
  iVar4 = (int)param_1[1] + -1;
  lVar7 = (longlong)iVar4;
  if (-1 < iVar4) {
    lVar6 = lVar7 << 4;
    bVar2 = false;
    do {
      if ((*(int *)(lVar6 + 8 + *param_1) == 0) ||
         (plVar1 = *(longlong **)(lVar6 + *param_1), plVar1 == (longlong *)0x0)) {
LAB_1404ed456:
        bVar2 = true;
      }
      else {
        cVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3,param_4);
        if (cVar3 == '\0') goto LAB_1404ed456;
      }
      lVar6 = lVar6 + -0x10;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
    iVar5 = *(int *)((longlong)param_1 + 0x14);
  }
  *(int *)((longlong)param_1 + 0x14) = iVar5 + -1;
  if (bVar2) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1404ed4b0 Broadcast body=201 status=ok
// SIG undefined Broadcast(void)

void TBaseMulticastDelegate<void,FName,TArray<TSharedRef<FUniqueNetId_const_,0>,FDefaultAllocator>_const_&,bool>
     ::Broadcast(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
  iVar5 = *(int *)((longlong)param_1 + 0x14);
  bVar2 = false;
  iVar4 = (int)param_1[1] + -1;
  lVar6 = (longlong)iVar4;
  if (-1 < iVar4) {
    lVar7 = lVar6 << 4;
    bVar2 = false;
    do {
      if ((*(int *)(lVar7 + 8 + *param_1) == 0) ||
         (plVar1 = *(longlong **)(lVar7 + *param_1), plVar1 == (longlong *)0x0)) {
LAB_1404ed527:
        bVar2 = true;
      }
      else {
        cVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3,param_4);
        if (cVar3 == '\0') goto LAB_1404ed527;
      }
      lVar7 = lVar7 + -0x10;
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
    iVar5 = *(int *)((longlong)param_1 + 0x14);
  }
  *(int *)((longlong)param_1 + 0x14) = iVar5 + -1;
  if (bVar2) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1404ed580 FUN_1404ed580 body=200 status=ok
// SIG undefined FUN_1404ed580(void)

void FUN_1404ed580(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
  iVar5 = *(int *)((longlong)param_1 + 0x14);
  bVar2 = false;
  iVar4 = (int)param_1[1] + -1;
  lVar6 = (longlong)iVar4;
  if (-1 < iVar4) {
    lVar7 = lVar6 << 4;
    bVar2 = false;
    do {
      if ((*(int *)(lVar7 + 8 + *param_1) == 0) ||
         (plVar1 = *(longlong **)(lVar7 + *param_1), plVar1 == (longlong *)0x0)) {
LAB_1404ed5f6:
        bVar2 = true;
      }
      else {
        cVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3,param_4);
        if (cVar3 == '\0') goto LAB_1404ed5f6;
      }
      lVar7 = lVar7 + -0x10;
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
    iVar5 = *(int *)((longlong)param_1 + 0x14);
  }
  *(int *)((longlong)param_1 + 0x14) = iVar5 + -1;
  if (bVar2) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1404ed650 Broadcast body=180 status=ok
// SIG undefined Broadcast(void)

void TBaseMulticastDelegate<void,FName,enum_EModuleChangeReason>::Broadcast
               (longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
  iVar5 = *(int *)((longlong)param_1 + 0x14);
  bVar2 = false;
  iVar4 = (int)param_1[1] + -1;
  lVar6 = (longlong)iVar4;
  if (-1 < iVar4) {
    lVar7 = lVar6 << 4;
    bVar2 = false;
    do {
      if ((*(int *)(lVar7 + 8 + *param_1) == 0) ||
         (plVar1 = *(longlong **)(lVar7 + *param_1), plVar1 == (longlong *)0x0)) {
LAB_1404ed6b7:
        bVar2 = true;
      }
      else {
        cVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3);
        if (cVar3 == '\0') goto LAB_1404ed6b7;
      }
      lVar7 = lVar7 + -0x10;
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
    iVar5 = *(int *)((longlong)param_1 + 0x14);
  }
  *(int *)((longlong)param_1 + 0x14) = iVar5 + -1;
  if (bVar2) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1404ed710 Broadcast body=164 status=ok
// SIG undefined Broadcast(void)

void TBaseMulticastDelegate<void,enum_EWmfMediaSamplerClockEvent>::Broadcast
               (longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
  iVar5 = *(int *)((longlong)param_1 + 0x14);
  bVar2 = false;
  iVar4 = (int)param_1[1] + -1;
  lVar7 = (longlong)iVar4;
  if (-1 < iVar4) {
    lVar6 = lVar7 << 4;
    bVar2 = false;
    do {
      if ((*(int *)(lVar6 + 8 + *param_1) == 0) ||
         (plVar1 = *(longlong **)(lVar6 + *param_1), plVar1 == (longlong *)0x0)) {
LAB_1404ed770:
        bVar2 = true;
      }
      else {
        cVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2);
        if (cVar3 == '\0') goto LAB_1404ed770;
      }
      lVar6 = lVar6 + -0x10;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
    iVar5 = *(int *)((longlong)param_1 + 0x14);
  }
  *(int *)((longlong)param_1 + 0x14) = iVar5 + -1;
  if (bVar2) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1404ed7c0 FUN_1404ed7c0 body=221 status=ok
// SIG undefined FUN_1404ed7c0(void)

void FUN_1404ed7c0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong local_18;
  longlong *local_10;
  
  plVar3 = param_1 + 0x6a;
  if ((*plVar3 != 0) && (*(int *)(*plVar3 + 0x18) == 1)) {
    if ((int)param_1[0x56] == 2) {
      FUN_1404b6bd0(param_1 + 0x50);
    }
    FUN_1404f4ef0();
    local_10 = (longlong *)0x0;
    *(undefined4 *)(*plVar3 + 0x18) = 3;
    if (plVar3 != &local_18) {
      *plVar3 = 0;
      local_18 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x6b,&local_10);
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
                    /* WARNING: Could not recover jumptable at 0x0001404ed896. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x148))(param_1,1);
  return;
}



// FUNCTION 1404ed8b0 ClearOnDeleteUserFileCompleteDelegate_Handle body=34 status=ok
// SIG undefined ClearOnDeleteUserFileCompleteDelegate_Handle(void)

void IOnlineUserCloud::ClearOnDeleteUserFileCompleteDelegate_Handle
               (longlong param_1,undefined8 *param_2)

{
  TBaseMulticastDelegate<void>::Remove(param_1 + 0x80,*param_2);
  *param_2 = 0;
  return;
}



// FUNCTION 1404ed8e0 ClearOnCancelMatchmakingCompleteDelegate_Handle body=37 status=ok
// SIG undefined ClearOnCancelMatchmakingCompleteDelegate_Handle(void)

void IOnlineSession::ClearOnCancelMatchmakingCompleteDelegate_Handle
               (longlong param_1,undefined8 *param_2)

{
  TBaseMulticastDelegate<void>::Remove(param_1 + 0x98,*param_2);
  *param_2 = 0;
  return;
}



// FUNCTION 1404ed920 ClearOnRegisterPlayersCompleteDelegate_Handle body=37 status=ok
// SIG undefined ClearOnRegisterPlayersCompleteDelegate_Handle(void)

void IOnlineSession::ClearOnRegisterPlayersCompleteDelegate_Handle
               (longlong param_1,undefined8 *param_2)

{
  TBaseMulticastDelegate<void>::Remove(param_1 + 0x1e8,*param_2);
  *param_2 = 0;
  return;
}



// FUNCTION 1404ed960 ClearOnCreateAccountFlowUIRequiredDelegate_Handle body=34 status=ok
// SIG undefined ClearOnCreateAccountFlowUIRequiredDelegate_Handle(void)

void IOnlineExternalUI::ClearOnCreateAccountFlowUIRequiredDelegate_Handle
               (longlong param_1,undefined8 *param_2)

{
  TBaseMulticastDelegate<void>::Remove(param_1 + 0x38,*param_2);
  *param_2 = 0;
  return;
}



// FUNCTION 1404ed9a0 ClearOnDestroySessionCompleteDelegate_Handle body=34 status=ok
// SIG undefined ClearOnDestroySessionCompleteDelegate_Handle(void)

void IOnlineSession::ClearOnDestroySessionCompleteDelegate_Handle
               (longlong param_1,undefined8 *param_2)

{
  TBaseMulticastDelegate<void>::Remove(param_1 + 0x68,*param_2);
  *param_2 = 0;
  return;
}



// FUNCTION 1404ed9d0 ClearOnEndSessionCompleteDelegate_Handle body=34 status=ok
// SIG undefined ClearOnEndSessionCompleteDelegate_Handle(void)

void IOnlineSession::ClearOnEndSessionCompleteDelegate_Handle(longlong param_1,undefined8 *param_2)

{
  TBaseMulticastDelegate<void>::Remove(param_1 + 0x50,*param_2);
  *param_2 = 0;
  return;
}



// FUNCTION 1404eda00 FUN_1404eda00 body=240 status=ok
// SIG undefined FUN_1404eda00(void)

void FUN_1404eda00(longlong param_1,int param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_res20 [8];
  
  if (param_2 == 0) {
    lVar2 = *param_3;
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x208)) {
      lVar4 = 0;
      do {
        plVar5 = (longlong *)(*(longlong *)(param_1 + 0x200) + lVar4);
        if ((((int)plVar5[1] != 0) && (plVar1 = (longlong *)*plVar5, plVar1 != (longlong *)0x0)) &&
           (plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res20), *plVar1 == lVar2
           )) {
          if (((int)plVar5[1] != 0) && (plVar1 = (longlong *)*plVar5, plVar1 != (longlong *)0x0)) {
            (**(code **)(*plVar1 + 0x28))(plVar1,0);
            if (*plVar5 != 0) {
              lVar2 = FMemory::Realloc(*plVar5,0,0);
              *plVar5 = lVar2;
            }
            *(undefined4 *)(plVar5 + 1) = 0;
          }
          break;
        }
        iVar3 = iVar3 + 1;
        lVar4 = lVar4 + 0x10;
      } while (iVar3 < *(int *)(param_1 + 0x208));
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1 + 0x200,0);
    *param_3 = 0;
  }
  return;
}



// FUNCTION 1404edaf0 FUN_1404edaf0 body=190 status=ok
// SIG undefined FUN_1404edaf0(void)

void FUN_1404edaf0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  lVar2 = *param_2;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xd0)) {
    lVar5 = 0;
    do {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 200) + lVar5);
      if ((((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) &&
         (plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8), *plVar1 == lVar2))
      {
        if (((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x28))(plVar1,0);
          if (*plVar4 != 0) {
            lVar2 = FMemory::Realloc(*plVar4,0,0);
            *plVar4 = lVar2;
          }
          *(undefined4 *)(plVar4 + 1) = 0;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0xd0));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 200),0);
  *param_2 = 0;
  return;
}



// FUNCTION 1404edbc0 FUN_1404edbc0 body=190 status=ok
// SIG undefined FUN_1404edbc0(void)

void FUN_1404edbc0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  lVar2 = *param_2;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xe8)) {
    lVar5 = 0;
    do {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0xe0) + lVar5);
      if ((((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) &&
         (plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8), *plVar1 == lVar2))
      {
        if (((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x28))(plVar1,0);
          if (*plVar4 != 0) {
            lVar2 = FMemory::Realloc(*plVar4,0,0);
            *plVar4 = lVar2;
          }
          *(undefined4 *)(plVar4 + 1) = 0;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0xe8));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0xe0),0);
  *param_2 = 0;
  return;
}



// FUNCTION 1404edc90 ClearOnJoinSessionCompleteDelegate_Handle body=190 status=ok
// SIG undefined ClearOnJoinSessionCompleteDelegate_Handle(void)

void IOnlineSession::ClearOnJoinSessionCompleteDelegate_Handle(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  lVar2 = *param_2;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x100)) {
    lVar5 = 0;
    do {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0xf8) + lVar5);
      if ((((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) &&
         (plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8), *plVar1 == lVar2))
      {
        if (((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x28))(plVar1,0);
          if (*plVar4 != 0) {
            lVar2 = FMemory::Realloc(*plVar4,0,0);
            *plVar4 = lVar2;
          }
          *(undefined4 *)(plVar4 + 1) = 0;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0x100));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0xf8),0);
  *param_2 = 0;
  return;
}



// FUNCTION 1404edd60 FUN_1404edd60 body=190 status=ok
// SIG undefined FUN_1404edd60(void)

void FUN_1404edd60(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  lVar2 = *param_2;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x178)) {
    lVar5 = 0;
    do {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0x170) + lVar5);
      if ((((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) &&
         (plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8), *plVar1 == lVar2))
      {
        if (((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x28))(plVar1,0);
          if (*plVar4 != 0) {
            lVar2 = FMemory::Realloc(*plVar4,0,0);
            *plVar4 = lVar2;
          }
          *(undefined4 *)(plVar4 + 1) = 0;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0x178));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x170),0);
  *param_2 = 0;
  return;
}



// FUNCTION 1404ede30 FUN_1404ede30 body=190 status=ok
// SIG undefined FUN_1404ede30(void)

void FUN_1404ede30(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  lVar2 = *param_2;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x160)) {
    lVar5 = 0;
    do {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0x158) + lVar5);
      if ((((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) &&
         (plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8), *plVar1 == lVar2))
      {
        if (((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x28))(plVar1,0);
          if (*plVar4 != 0) {
            lVar2 = FMemory::Realloc(*plVar4,0,0);
            *plVar4 = lVar2;
          }
          *(undefined4 *)(plVar4 + 1) = 0;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0x160));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x158),0);
  *param_2 = 0;
  return;
}



// FUNCTION 1404edf00 ClearOnFindSessionsCompleteDelegate_Handle body=37 status=ok
// SIG undefined ClearOnFindSessionsCompleteDelegate_Handle(void)

void IOnlineSession::ClearOnFindSessionsCompleteDelegate_Handle
               (longlong param_1,undefined8 *param_2)

{
  TBaseMulticastDelegate<void>::Remove(param_1 + 0xb0,*param_2);
  *param_2 = 0;
  return;
}



// FUNCTION 1404edf40 ClearOnQueryUserInfoCompleteDelegate_Handle body=217 status=ok
// SIG undefined ClearOnQueryUserInfoCompleteDelegate_Handle(void)

void IOnlineUser::ClearOnQueryUserInfoCompleteDelegate_Handle
               (longlong param_1,int param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_res20 [8];
  
  if (param_2 == 0) {
    lVar2 = *param_3;
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      lVar4 = 0;
      do {
        plVar5 = (longlong *)(*(longlong *)(param_1 + 8) + lVar4);
        if ((((int)plVar5[1] != 0) && (plVar1 = (longlong *)*plVar5, plVar1 != (longlong *)0x0)) &&
           (plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res20), *plVar1 == lVar2
           )) {
          if (((int)plVar5[1] != 0) && (plVar1 = (longlong *)*plVar5, plVar1 != (longlong *)0x0)) {
            (**(code **)(*plVar1 + 0x28))(plVar1,0);
            if (*plVar5 != 0) {
              lVar2 = FMemory::Realloc(*plVar5,0,0);
              *plVar5 = lVar2;
            }
            *(undefined4 *)(plVar5 + 1) = 0;
          }
          break;
        }
        iVar3 = iVar3 + 1;
        lVar4 = lVar4 + 0x10;
      } while (iVar3 < *(int *)(param_1 + 0x10));
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1 + 8,0);
    *param_3 = 0;
  }
  return;
}



// FUNCTION 1404ee020 ClearOnControllerPairingChangedDelegate_Handle body=190 status=ok
// SIG undefined ClearOnControllerPairingChangedDelegate_Handle(void)

void IOnlineIdentity::ClearOnControllerPairingChangedDelegate_Handle
               (longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  lVar2 = *param_2;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar5 = 0;
    do {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0x38) + lVar5);
      if ((((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) &&
         (plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8), *plVar1 == lVar2))
      {
        if (((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x28))(plVar1,0);
          if (*plVar4 != 0) {
            lVar2 = FMemory::Realloc(*plVar4,0,0);
            *plVar4 = lVar2;
          }
          *(undefined4 *)(plVar4 + 1) = 0;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0x40));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x38),0);
  *param_2 = 0;
  return;
}



// FUNCTION 1404ee0e0 ClearOnLoginStatusChangedDelegate_Handle body=217 status=ok
// SIG undefined ClearOnLoginStatusChangedDelegate_Handle(void)

void IOnlineIdentity::ClearOnLoginStatusChangedDelegate_Handle
               (longlong param_1,int param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_res20 [8];
  
  if (param_2 == 0) {
    lVar2 = *param_3;
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x28)) {
      lVar4 = 0;
      do {
        plVar5 = (longlong *)(*(longlong *)(param_1 + 0x20) + lVar4);
        if ((((int)plVar5[1] != 0) && (plVar1 = (longlong *)*plVar5, plVar1 != (longlong *)0x0)) &&
           (plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res20), *plVar1 == lVar2
           )) {
          if (((int)plVar5[1] != 0) && (plVar1 = (longlong *)*plVar5, plVar1 != (longlong *)0x0)) {
            (**(code **)(*plVar1 + 0x28))(plVar1,0);
            if (*plVar5 != 0) {
              lVar2 = FMemory::Realloc(*plVar5,0,0);
              *plVar5 = lVar2;
            }
            *(undefined4 *)(plVar5 + 1) = 0;
          }
          break;
        }
        iVar3 = iVar3 + 1;
        lVar4 = lVar4 + 0x10;
      } while (iVar3 < *(int *)(param_1 + 0x28));
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1 + 0x20,0);
    *param_3 = 0;
  }
  return;
}



// FUNCTION 1404ee1c0 ClearOnSessionParticipantSettingsUpdatedDelegate_Handle body=190 status=ok
// SIG undefined ClearOnSessionParticipantSettingsUpdatedDelegate_Handle(void)

void FOnlineSessionEOS::ClearOnSessionParticipantSettingsUpdatedDelegate_Handle
               (longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  lVar2 = *param_2;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x1d8)) {
    lVar5 = 0;
    do {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0x1d0) + lVar5);
      if ((((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) &&
         (plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8), *plVar1 == lVar2))
      {
        if (((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x28))(plVar1,0);
          if (*plVar4 != 0) {
            lVar2 = FMemory::Realloc(*plVar4,0,0);
            *plVar4 = lVar2;
          }
          *(undefined4 *)(plVar4 + 1) = 0;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0x1d8));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x1d0),0);
  *param_2 = 0;
  return;
}



// FUNCTION 1404ee290 ClearOnRequestUsageInfoCompleteDelegate_Handle body=190 status=ok
// SIG undefined ClearOnRequestUsageInfoCompleteDelegate_Handle(void)

void IOnlineUserCloud::ClearOnRequestUsageInfoCompleteDelegate_Handle
               (longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  lVar2 = *param_2;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xa0)) {
    lVar5 = 0;
    do {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0x98) + lVar5);
      if ((((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) &&
         (plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8), *plVar1 == lVar2))
      {
        if (((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x28))(plVar1,0);
          if (*plVar4 != 0) {
            lVar2 = FMemory::Realloc(*plVar4,0,0);
            *plVar4 = lVar2;
          }
          *(undefined4 *)(plVar4 + 1) = 0;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0xa0));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x98),0);
  *param_2 = 0;
  return;
}



// FUNCTION 1404ee350 FUN_1404ee350 body=190 status=ok
// SIG undefined FUN_1404ee350(void)

void FUN_1404ee350(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  lVar2 = *param_2;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xb8)) {
    lVar5 = 0;
    do {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0xb0) + lVar5);
      if ((((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) &&
         (plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8), *plVar1 == lVar2))
      {
        if (((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x28))(plVar1,0);
          if (*plVar4 != 0) {
            lVar2 = FMemory::Realloc(*plVar4,0,0);
            *plVar4 = lVar2;
          }
          *(undefined4 *)(plVar4 + 1) = 0;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0xb8));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0xb0),0);
  *param_2 = 0;
  return;
}



// FUNCTION 1404ee410 ClearOnSessionInviteReceivedDelegate_Handle body=190 status=ok
// SIG undefined ClearOnSessionInviteReceivedDelegate_Handle(void)

void IOnlineSession::ClearOnSessionInviteReceivedDelegate_Handle(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  lVar2 = *param_2;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x148)) {
    lVar5 = 0;
    do {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0x140) + lVar5);
      if ((((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) &&
         (plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8), *plVar1 == lVar2))
      {
        if (((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x28))(plVar1,0);
          if (*plVar4 != 0) {
            lVar2 = FMemory::Realloc(*plVar4,0,0);
            *plVar4 = lVar2;
          }
          *(undefined4 *)(plVar4 + 1) = 0;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0x148));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x140),0);
  *param_2 = 0;
  return;
}



// FUNCTION 1404ee4e0 FUN_1404ee4e0 body=190 status=ok
// SIG undefined FUN_1404ee4e0(void)

void FUN_1404ee4e0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  lVar2 = *param_2;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x268)) {
    lVar5 = 0;
    do {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0x260) + lVar5);
      if ((((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) &&
         (plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8), *plVar1 == lVar2))
      {
        if (((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x28))(plVar1,0);
          if (*plVar4 != 0) {
            lVar2 = FMemory::Realloc(*plVar4,0,0);
            *plVar4 = lVar2;
          }
          *(undefined4 *)(plVar4 + 1) = 0;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0x268));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x260),0);
  *param_2 = 0;
  return;
}



// FUNCTION 1404ee5b0 ClearOnPartyJoinRequestReceivedDelegate_Handle body=37 status=ok
// SIG undefined ClearOnPartyJoinRequestReceivedDelegate_Handle(void)

void IOnlinePartySystem::ClearOnPartyJoinRequestReceivedDelegate_Handle
               (longlong param_1,undefined8 *param_2)

{
  TBaseMulticastDelegate<void>::Remove(param_1 + 0x188,*param_2);
  *param_2 = 0;
  return;
}



// FUNCTION 1404ee5f0 FUN_1404ee5f0 body=37 status=ok
// SIG undefined FUN_1404ee5f0(void)

void FUN_1404ee5f0(longlong param_1,undefined8 *param_2)

{
  TBaseMulticastDelegate<void>::Remove(param_1 + 0x218,*param_2);
  *param_2 = 0;
  return;
}



// FUNCTION 1404ee630 ClearOnInviteRejectedDelegate_Handle body=37 status=ok
// SIG undefined ClearOnInviteRejectedDelegate_Handle(void)

void IOnlineFriends::ClearOnInviteRejectedDelegate_Handle(longlong param_1,undefined8 *param_2)

{
  TBaseMulticastDelegate<void>::Remove(param_1 + 0xf8,*param_2);
  *param_2 = 0;
  return;
}



// FUNCTION 1404ee660 ClearOnSessionSettingsUpdatedDelegate_Handle body=190 status=ok
// SIG undefined ClearOnSessionSettingsUpdatedDelegate_Handle(void)

void FOnlineSessionEOS::ClearOnSessionSettingsUpdatedDelegate_Handle
               (longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  lVar2 = *param_2;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x1c0)) {
    lVar5 = 0;
    do {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0x1b8) + lVar5);
      if ((((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) &&
         (plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8), *plVar1 == lVar2))
      {
        if (((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x28))(plVar1,0);
          if (*plVar4 != 0) {
            lVar2 = FMemory::Realloc(*plVar4,0,0);
            *plVar4 = lVar2;
          }
          *(undefined4 *)(plVar4 + 1) = 0;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0x1c0));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x1b8),0);
  *param_2 = 0;
  return;
}



// FUNCTION 1404ee730 ClearOnQueryBlockedPlayersCompleteDelegate_Handle body=190 status=ok
// SIG undefined ClearOnQueryBlockedPlayersCompleteDelegate_Handle(void)

void IOnlineFriends::ClearOnQueryBlockedPlayersCompleteDelegate_Handle
               (longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  lVar2 = *param_2;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x130)) {
    lVar5 = 0;
    do {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0x128) + lVar5);
      if ((((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) &&
         (plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8), *plVar1 == lVar2))
      {
        if (((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x28))(plVar1,0);
          if (*plVar4 != 0) {
            lVar2 = FMemory::Realloc(*plVar4,0,0);
            *plVar4 = lVar2;
          }
          *(undefined4 *)(plVar4 + 1) = 0;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0x130));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x128),0);
  *param_2 = 0;
  return;
}



// FUNCTION 1404ee800 FUN_1404ee800 body=190 status=ok
// SIG undefined FUN_1404ee800(void)

void FUN_1404ee800(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  lVar2 = *param_2;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x250)) {
    lVar5 = 0;
    do {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0x248) + lVar5);
      if ((((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) &&
         (plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8), *plVar1 == lVar2))
      {
        if (((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x28))(plVar1,0);
          if (*plVar4 != 0) {
            lVar2 = FMemory::Realloc(*plVar4,0,0);
            *plVar4 = lVar2;
          }
          *(undefined4 *)(plVar4 + 1) = 0;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0x250));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x248),0);
  *param_2 = 0;
  return;
}



// FUNCTION 1404ee8d0 FUN_1404ee8d0 body=190 status=ok
// SIG undefined FUN_1404ee8d0(void)

void FUN_1404ee8d0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  lVar2 = *param_2;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x118)) {
    lVar5 = 0;
    do {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0x110) + lVar5);
      if ((((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) &&
         (plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8), *plVar1 == lVar2))
      {
        if (((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x28))(plVar1,0);
          if (*plVar4 != 0) {
            lVar2 = FMemory::Realloc(*plVar4,0,0);
            *plVar4 = lVar2;
          }
          *(undefined4 *)(plVar4 + 1) = 0;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0x118));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x110),0);
  *param_2 = 0;
  return;
}



// FUNCTION 1404ee9a0 FUN_1404ee9a0 body=37 status=ok
// SIG undefined FUN_1404ee9a0(void)

void FUN_1404ee9a0(longlong param_1,undefined8 *param_2)

{
  TBaseMulticastDelegate<void>::Remove(param_1 + 0x1a0,*param_2);
  *param_2 = 0;
  return;
}



// FUNCTION 1404ee9e0 FUN_1404ee9e0 body=37 status=ok
// SIG undefined FUN_1404ee9e0(void)

void FUN_1404ee9e0(longlong param_1,undefined8 *param_2)

{
  TBaseMulticastDelegate<void>::Remove(param_1 + 0x230,*param_2);
  *param_2 = 0;
  return;
}



// FUNCTION 1404eea20 FUN_1404eea20 body=1407 status=ok
// SIG undefined FUN_1404eea20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1404eea20(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  BOOL BVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong *plStack_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong local_70 [2];
  longlong local_60;
  longlong *plStack_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  iVar6 = -0x7fffbffb;
  local_d8 = param_4;
  local_98 = param_2;
  lVar7 = FUN_1404f03e0(param_1,param_3);
  plVar9 = (longlong *)0x0;
  if (lVar7 == 0) {
    BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 99));
    if (BVar5 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 99));
    }
    iVar6 = (int)param_1[0x69];
    *(int *)(param_1 + 0x69) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0x34c) < iVar6 + 1) {
      FUN_1404f33d0(param_1 + 0x68,iVar6);
    }
    lVar7 = local_d8;
    plVar10 = (longlong *)((longlong)iVar6 * 0x118 + param_1[0x68]);
    plVar11 = plVar9;
    if (plVar10 != (longlong *)0x0) {
      *plVar10 = (longlong)&PTR_FUN_143f769a8;
      plVar10[1] = 0;
      plVar10[2] = 0;
      plVar10[3] = 0;
      plVar10[4] = 0;
      FUN_1404e8890(plVar10 + 5,local_d8);
      plVar10[0x14] = 0;
      plVar10[0x15] = 0;
      *plVar10 = (longlong)&PTR__scalar_deleting_destructor__143f7d2c8;
      plVar10[0x16] = 0;
      plVar10[0x17] = param_3;
      *(undefined4 *)(plVar10 + 0x18) = 0xffffffff;
      plVar10[0x19] = 0;
      plVar10[0x1a] = 0;
      *(undefined1 *)(plVar10 + 0x1b) = 0;
      plVar10[0x1c] = 0;
      plVar10[0x1d] = 0;
      plVar10[0x1e] = 0;
      plVar10[0x1f] = 0;
      plVar10[0x20] = 0;
      plVar10[0x21] = 0;
      *(undefined4 *)(plVar10 + 0x22) = 0;
      plVar11 = plVar10;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 99));
    plVar10 = local_98;
    *(undefined4 *)(plVar11 + 0x22) = 1;
    *(undefined4 *)(plVar11 + 0x16) = *(undefined4 *)(lVar7 + 0xc);
    *(undefined4 *)((longlong)plVar11 + 0xb4) = *(undefined4 *)(lVar7 + 8);
    local_d0 = (longlong *)((longlong *)*local_98)[1];
    local_d8 = *(longlong *)*local_98;
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
      UNLOCK();
    }
    plVar8 = plVar11 + 0x19;
    if (plVar8 != &local_d8) {
      *plVar8 = local_d8;
      local_d8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(plVar11 + 0x1a,&local_d0);
    }
    plVar2 = local_d0;
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_d0 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_d0 + 8))(local_d0,1);
        }
      }
    }
    plVar4 = (longlong *)plVar11[0x1a];
    plVar2 = plVar11 + 1;
    lVar7 = *plVar8;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_c8 = lVar7;
    plStack_c0 = plVar4;
    if (&local_c8 != plVar2) {
      local_c8 = *plVar2;
      plStack_c0 = (longlong *)plVar11[2];
      *plVar2 = lVar7;
      plVar11[2] = (longlong)plVar4;
      local_60 = lVar7;
      plStack_58 = plVar4;
    }
    plVar8 = plStack_c0;
    if (plStack_c0 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_c0 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_c0)(plStack_c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plStack_c0 + 8))(plStack_c0,1);
        }
      }
    }
    (**(code **)(*(longlong *)param_1[0x4f] + 0x50))((longlong *)param_1[0x4f],&local_80);
    if (local_80 == (longlong *)0x0) {
      local_b8 = 0;
      local_b0 = 9;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
      lVar7 = local_b8;
      FGenericPlatformString::Memcpy(local_b8,L"NullUser",0x12);
      plVar10 = plVar11 + 3;
      if (plVar10 == &local_b8) {
        if (lVar7 != 0) {
          FMemory::Free(lVar7);
        }
      }
      else {
        if (*plVar10 != 0) {
          FMemory::Free();
        }
        *plVar10 = lVar7;
        *(undefined4 *)(plVar11 + 4) = (undefined4)local_b0;
        *(undefined4 *)((longlong)plVar11 + 0x24) = local_b0._4_4_;
      }
    }
    else {
      local_90 = *(undefined8 *)*plVar10;
      local_88 = (longlong *)((undefined8 *)*plVar10)[1];
      if (local_88 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_88 + 1) = (int)local_88[1] + 1;
        UNLOCK();
      }
      plVar8 = (longlong *)(**(code **)(*local_80 + 0xa0))(local_80,local_70,&local_90);
      plVar10 = plVar11 + 3;
      if (plVar10 != plVar8) {
        if (*plVar10 != 0) {
          FMemory::Free();
        }
        *plVar10 = *plVar8;
        *plVar8 = 0;
        *(int *)(plVar11 + 4) = (int)plVar8[1];
        *(undefined4 *)((longlong)plVar11 + 0x24) = *(undefined4 *)((longlong)plVar8 + 0xc);
        plVar8[1] = 0;
      }
      if (local_70[0] != 0) {
        FMemory::Free();
      }
      plVar10 = local_88;
      if (local_88 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_88 + 1;
        lVar7 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_88)(local_88);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
    }
    lVar7 = operator_new(0x48);
    plVar10 = plVar9;
    if (lVar7 != 0) {
      plVar10 = (longlong *)FOnlineSessionInfoNull::FOnlineSessionInfoNull(lVar7);
    }
    FUN_1404f0ab0(plVar10,param_1[0x4f]);
    plVar8 = (longlong *)operator_new(0x18);
    if (plVar8 != (longlong *)0x0) {
      *(undefined4 *)(plVar8 + 1) = 1;
      *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
      *plVar8 = (longlong)&PTR_FUN_143f3f2d0;
      plVar8[2] = (longlong)plVar10;
      plVar9 = plVar8;
    }
    local_a8 = plVar10;
    local_a0 = plVar9;
    SharedPointerInternals::EnableSharedFromThis(&local_a8,plVar10,plVar10);
    if ((longlong **)(plVar11 + 0x14) != &local_a8) {
      plVar11[0x14] = (longlong)plVar10;
      local_a8 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(plVar11 + 0x15,&local_a0);
      plVar9 = local_a0;
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar9 + 1;
      lVar7 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    iVar6 = FUN_1404f4ef0(param_1);
    if (iVar6 != 0x3e5) {
      *(undefined4 *)(plVar11 + 0x22) = 2;
      if (iVar6 == 0) {
        FUN_1404f2da0(param_1,param_3,local_98);
      }
      else {
        FUN_1404f3330();
      }
    }
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_78 + 1;
      lVar7 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)local_78 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
    if (iVar6 == 0x3e5) {
      return;
    }
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_3,(iVar6 != 0) + '\x01');
  return;
}



// FUNCTION 1404eefa0 FUN_1404eefa0 body=139 status=ok
// SIG undefined FUN_1404eefa0(void)

void FUN_1404eefa0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 1;
  local_18 = (undefined8 *)0x0;
  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_18,0);
  *local_18 = *param_2;
  lVar1 = param_2[1];
  local_18[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*param_1 + 0x28))(param_1,&local_18,param_3,param_4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_18);
  return;
}



// FUNCTION 1404ef030 FUN_1404ef030 body=442 status=ok
// SIG undefined FUN_1404ef030(void)

undefined8 * FUN_1404ef030(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  longlong *local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong *local_10;
  
  plVar5 = (longlong *)operator_new(0xb0);
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    puVar6 = (undefined8 *)FName::FName(local_res10,L"NULL",1);
    FUN_1404ac240(plVar5,*puVar6,param_3);
    *plVar5 = (longlong)&PTR_FUN_143f7d120;
    plVar5[0xe] = 0;
    plVar5[0xf] = 0;
    plVar5[0x10] = 0;
    plVar5[0x11] = 0;
    plVar5[0x12] = 0;
    plVar5[0x13] = 0;
    plVar5[0x14] = 0;
    plVar5[0x15] = 0;
  }
  plVar8 = (longlong *)0x0;
  plVar7 = (longlong *)operator_new(0x18);
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 1;
    *plVar7 = (longlong)&PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    plVar7[2] = (longlong)plVar5;
    plVar8 = plVar7;
  }
  local_28 = plVar5;
  local_20 = plVar8;
  SharedPointerInternals::EnableSharedFromThis(&local_28,plVar5,plVar5);
  cVar4 = (**(code **)(*local_28 + 0x100))();
  if (cVar4 == '\0') {
    (**(code **)(*local_28 + 0x110))();
    local_10 = (longlong *)0x0;
    local_28 = (longlong *)0x0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_20,&local_10);
    plVar5 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_10 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  plVar5 = local_20;
  *param_2 = local_28;
  param_2[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_20 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 1404ef1f0 FUN_1404ef1f0 body=367 status=ok
// SIG undefined FUN_1404ef1f0(void)

undefined8 * FUN_1404ef1f0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 local_res10 [8];
  
  puVar5 = (undefined8 *)operator_new(0x30);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar6 = (undefined8 *)FName::FName(local_res10,L"NULL",1);
    uVar2 = *puVar6;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = &PTR_FUN_143f74160;
    FString::FString(puVar5 + 3,param_3);
    puVar5[5] = uVar2;
    *puVar5 = &PTR_FUN_143f74160;
  }
  plVar7 = (longlong *)operator_new(0x18);
  plVar9 = (longlong *)0x0;
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 1;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    *plVar7 = (longlong)&PTR_FUN_143f7de48;
    plVar7[2] = (longlong)puVar5;
    plVar9 = plVar7;
  }
  *param_2 = puVar5;
  param_2[1] = plVar9;
  plVar7 = puVar5 + 1;
  if (puVar5 == (undefined8 *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  if (plVar7 != (longlong *)0x0) {
    if (*plVar7 != 0) {
      if (plVar7[1] != 0) {
        piVar1 = (int *)(plVar7[1] + 8);
        LOCK();
        iVar4 = *piVar1;
        if (iVar4 == 0) {
          *piVar1 = 0;
          iVar4 = 0;
        }
        UNLOCK();
        if (0 < iVar4) {
          return param_2;
        }
      }
      plVar9 = (longlong *)param_2[1];
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    *plVar7 = (longlong)puVar5;
    plVar8 = (longlong *)plVar7[1];
    if (plVar9 != plVar8) {
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
        UNLOCK();
        plVar8 = (longlong *)plVar7[1];
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      plVar7[1] = (longlong)plVar9;
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar9 + 1;
      lVar3 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 1404ef360 FUN_1404ef360 body=309 status=ok
// SIG undefined FUN_1404ef360(void)

void FUN_1404ef360(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  double dVar9;
  LARGE_INTEGER local_res8;
  longlong local_20 [3];
  
  uVar4 = *param_2;
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  FString::FString(local_20,param_3);
  uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0xa0);
  puVar8 = (undefined8 *)operator_new(0x40);
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    *puVar8 = &PTR_FUN_143f76b48;
    QueryPerformanceCounter(&local_res8);
    dVar9 = (double)local_res8.QuadPart * DAT_1468b02f8;
    *puVar8 = &PTR_FUN_143f7dcc0;
    *(undefined1 *)(puVar8 + 2) = 0;
    puVar8[1] = dVar9 + 16777216.0;
    puVar8[3] = param_1;
    puVar8[4] = uVar4;
    puVar8[5] = plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    FString::FString(puVar8 + 6,local_20);
  }
  FOnlineAsyncTaskManager::AddToInQueue(uVar6,puVar8);
  if (local_20[0] != 0) {
    FMemory::Free();
  }
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
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 1404ef4a0 FUN_1404ef4a0 body=22 status=ok
// SIG undefined FUN_1404ef4a0(void)

void FUN_1404ef4a0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001404ef4b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x38))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 1404ef4c0 FUN_1404ef4c0 body=106 status=ok
// SIG undefined FUN_1404ef4c0(void)

void FUN_1404ef4c0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = -0x7fffbffb;
  lVar2 = FUN_1404f03e0();
  if (lVar2 != 0) {
    FUN_1404f3330(param_1,*(undefined8 *)(lVar2 + 0xb8));
    iVar1 = FUN_1404f4ef0(param_1);
    if (iVar1 == 0x3e5) {
      return;
    }
  }
  (**(code **)(*param_1 + 0xf0))(param_1,param_2,(iVar1 != 0) + '\x01');
  return;
}



// FUNCTION 1404ef530 FUN_1404ef530 body=309 status=ok
// SIG undefined FUN_1404ef530(void)

void FUN_1404ef530(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  double dVar9;
  LARGE_INTEGER local_res8;
  longlong local_20 [3];
  
  uVar4 = *param_2;
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  FString::FString(local_20,param_3);
  uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0xa0);
  puVar8 = (undefined8 *)operator_new(0x40);
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    *puVar8 = &PTR_FUN_143f76b48;
    QueryPerformanceCounter(&local_res8);
    dVar9 = (double)local_res8.QuadPart * DAT_1468b02f8;
    *puVar8 = &PTR_FUN_143f7ddc0;
    *(undefined1 *)(puVar8 + 2) = 0;
    puVar8[1] = dVar9 + 16777216.0;
    puVar8[3] = param_1;
    puVar8[4] = uVar4;
    puVar8[5] = plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    FString::FString(puVar8 + 6,local_20);
  }
  FOnlineAsyncTaskManager::AddToInQueue(uVar6,puVar8);
  if (local_20[0] != 0) {
    FMemory::Free();
  }
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
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 1404ef670 FUN_1404ef670 body=125 status=ok
// SIG undefined FUN_1404ef670(void)

void FUN_1404ef670(longlong param_1)

{
  BOOL BVar1;
  int iVar2;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x318));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x318));
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x348)) {
    do {
      FUN_1404af0e0((longlong)iVar2 * 0x118 + *(longlong *)(param_1 + 0x340));
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x348));
  }
                    /* WARNING: Could not recover jumptable at 0x0001404ef6e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x318));
  return;
}



// FUNCTION 1404ef6f0 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = ConditionalRehash(param_1,param_2);
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



// FUNCTION 1404ef770 FUN_1404ef770 body=133 status=ok
// SIG undefined FUN_1404ef770(void)

void FUN_1404ef770(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = -0x7fffbffb;
  lVar2 = FUN_1404f03e0();
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x110) == 4) {
      *(undefined4 *)(lVar2 + 0x110) = 6;
      iVar1 = FUN_1404f4ef0(param_1);
      if (iVar1 == 0x3e5) {
        return;
      }
    }
    *(undefined4 *)(lVar2 + 0x110) = 6;
  }
  (**(code **)(*param_1 + 200))(param_1,param_2,(iVar1 != 0) + '\x01');
  return;
}



// FUNCTION 1404ef800 UpdateStateFrom body=19 status=ok
// SIG undefined UpdateStateFrom(void)

bool FRootMotionSource_ConstantForce::UpdateStateFrom(void)

{
  char cVar1;
  
  cVar1 = FUN_1404af8d0();
  return cVar1 != '\0';
}



// FUNCTION 1404ef860 FUN_1404ef860 body=44 status=ok
// SIG undefined FUN_1404ef860(void)

void FUN_1404ef860(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
            (*(longlong **)(param_1 + 0x10),param_1 + 0x18,param_1 + 0x28,
             *(undefined4 *)(param_1 + 0x38),param_1 + 0x40);
  return;
}



// FUNCTION 1404ef8d0 FUN_1404ef8d0 body=627 status=ok
// SIG undefined FUN_1404ef8d0(void)

undefined8 FUN_1404ef8d0(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *local_58;
  int local_50;
  longlong *local_48;
  int local_40;
  longlong *local_38;
  int local_30;
  longlong *local_2c;
  undefined1 local_24;
  
  plVar3 = param_1 + 0x57;
  uVar6 = 0x3e5;
  plVar5 = (longlong *)0x8;
  do {
    iVar2 = rand();
    *(char *)plVar3 = (char)iVar2;
    plVar3 = (longlong *)((longlong)plVar3 + 1);
    plVar5 = (longlong *)((longlong)plVar5 + -1);
  } while (plVar5 != (longlong *)0x0);
  local_48 = plVar5;
  plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_40 = 3;
  local_48 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)IDelegateInstance::vftable;
    *plVar3 = (longlong)&DAT_143f3ed00;
    plVar3[2] = (longlong)FUN_1404f1c00;
    plVar3[1] = (longlong)param_1;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  local_58 = plVar5;
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  local_50 = 3;
  local_58 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)IDelegateInstance::vftable;
    *plVar3 = (longlong)&DAT_143f3ed00;
    plVar3[2] = (longlong)FUN_1404f1990;
    plVar3[1] = (longlong)param_1;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  local_24 = 0;
  local_30 = 0;
  local_38 = plVar5;
  local_2c = plVar5;
  TArray<unsigned_char,FDefaultAllocator>::ResizeTo(&local_38);
  lVar4 = (longlong)local_30;
  local_30 = local_30 + 0x400;
  if ((int)local_2c < local_30) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_38);
  }
  _guard_xfg_dispatch_icall_nop((void *)(lVar4 + (longlong)local_38),0,0x400);
  FUN_1404ae8d0(param_1 + 0x50,&local_38,param_1[0x57]);
  cVar1 = FUN_1404b5f10(param_1 + 0x50,&local_38,&local_48,&local_58);
  if (cVar1 == '\0') {
    uVar6 = 0x80004005;
    if ((int)param_1[0x56] == 2) {
      FUN_1404b6bd0(param_1 + 0x50);
    }
    FUN_1404f4ef0(param_1);
    *(undefined4 *)(param_1[0x6a] + 0x18) = 3;
    (**(code **)(*param_1 + 0x120))(param_1,2);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_50 != 0) {
    if (local_58 == (longlong *)0x0) goto LAB_1404efadc;
    (**(code **)(*local_58 + 0x28))(local_58,0);
    if (local_58 != (longlong *)0x0) {
      local_58 = (longlong *)FMemory::Realloc(local_58,0,0);
    }
    local_50 = 0;
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
LAB_1404efadc:
  if (local_40 != 0) {
    if (local_48 == (longlong *)0x0) {
      return uVar6;
    }
    (**(code **)(*local_48 + 0x28))(local_48,0);
    if (local_48 != (longlong *)0x0) {
      local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
    }
    local_40 = 0;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  return uVar6;
}



// FUNCTION 1404efb50 FUN_1404efb50 body=200 status=ok
// SIG undefined FUN_1404efb50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1404efb50(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_108 [32];
  undefined ***local_e8;
  undefined **local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined **local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined2 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_58 = 0xffffffff;
  local_d0 = 0;
  local_d8 = &PTR_FUN_143f769a8;
  local_b8 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_94 = 0;
  local_8c = 0;
  local_88 = 0;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_28 = 0;
  local_e8 = &local_d8;
  local_b0 = &PTR_FUN_143f769a0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_20 = 9999;
  (**(code **)(*param_1 + 0x1a0))(0,2,param_2,param_3);
  FUN_1404bf650(&local_d8);
  return;
}



// FUNCTION 1404efc20 FUN_1404efc20 body=184 status=ok
// SIG undefined FUN_1404efc20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1404efc20(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_f8 [32];
  undefined **local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined **local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined2 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_58 = 0xffffffff;
  local_d0 = 0;
  local_b8 = 0;
  local_d8 = &PTR_FUN_143f769a8;
  local_a8 = 0;
  local_b0 = &PTR_FUN_143f769a0;
  local_a0 = 0;
  local_98 = 0;
  local_94 = 0;
  local_8c = 0;
  local_88 = 0;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_28 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_20 = 9999;
  (**(code **)(*param_1 + 0x1c8))(0,2,param_3,&local_d8);
  FUN_1404bf650(&local_d8);
  return;
}



// FUNCTION 1404efce0 FUN_1404efce0 body=376 status=ok
// SIG undefined FUN_1404efce0(void)

void FUN_1404efce0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  LARGE_INTEGER local_res8;
  longlong local_28;
  longlong *local_20;
  
  plVar3 = param_1 + 0x6a;
  if ((*plVar3 == 0) && (lVar4 = *param_3, *(int *)(lVar4 + 0x18) != 1)) {
    lVar5 = *(longlong *)(lVar4 + 8);
    for (iVar6 = *(int *)(lVar4 + 0x10); iVar6 != 0; iVar6 = iVar6 + -1) {
      FUN_1404bf650(lVar5);
      lVar5 = lVar5 + 0xc0;
    }
    *(undefined4 *)(lVar4 + 0x10) = 0;
    if (*(int *)(lVar4 + 0x14) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,16>_>,FDefaultAllocator>::ResizeTo
                (lVar4 + 8,0);
    }
    local_20 = (longlong *)param_3[1];
    local_28 = *param_3;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
    }
    if (plVar3 != &local_28) {
      *plVar3 = local_28;
      local_28 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x6b,&local_20);
    }
    plVar3 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
    QueryPerformanceCounter(&local_res8);
    param_1[0x6c] = (longlong)((double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0);
    iVar6 = FUN_1404ef8d0(param_1);
    if (iVar6 == 0x3e5) {
      *(undefined4 *)(*param_3 + 0x18) = 1;
      return;
    }
    (**(code **)(*param_1 + 0x120))(param_1,2);
  }
  return;
}



// FUNCTION 1404efe60 FUN_1404efe60 body=651 status=ok
// SIG undefined FUN_1404efe60(void)

undefined8 FUN_1404efe60(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined2 **ppuVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_a8 [8];
  undefined2 *local_a0;
  longlong local_98;
  undefined2 *local_90;
  int local_88;
  undefined1 local_80 [8];
  longlong *local_78;
  longlong local_70 [2];
  longlong local_60 [2];
  undefined2 *local_50 [2];
  undefined1 local_40 [24];
  
  local_a0 = (undefined2 *)0x0;
  local_98 = 0;
  uVar7 = FName::FName(local_res20,L"WINDOWS",1);
  plVar8 = (longlong *)FUN_1419c6b80(uVar7);
  cVar6 = (**(code **)(*plVar8 + 0x68))(plVar8,&local_a0);
  if (cVar6 == '\0') {
    uVar7 = FName::FName(local_a8,L"WINDOWS",1);
    plVar8 = (longlong *)FUN_1419c6b80(uVar7);
    lVar4 = *plVar8;
    uVar7 = FUN_141672640();
    puVar9 = (undefined8 *)(**(code **)(lVar4 + 0xb8))(plVar8,local_80,uVar7,local_res18);
    plVar8 = (longlong *)puVar9[1];
    plVar5 = (longlong *)*puVar9;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_78 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar2 = (int *)((longlong)local_78 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
    ppuVar10 = (undefined2 **)(**(code **)(*plVar5 + 0x68))(plVar5,local_70,0);
    if (&local_a0 != ppuVar10) {
      if (local_a0 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_a0 = *ppuVar10;
      *ppuVar10 = (undefined2 *)0x0;
      local_98 = (longlong)ppuVar10[1];
      ppuVar10[1] = (undefined2 *)0x0;
    }
    if (local_70[0] != 0) {
      FMemory::Free();
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar8 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar8)(plVar8);
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
  }
  uVar7 = FCommandLine::Get();
  cVar6 = FParse::Param(uVar7,L"StableNullID");
  if ((DAT_1464aaa4b == '\0') && (cVar6 == '\0')) {
    uVar7 = FGuid::NewGuid(local_40);
    FUN_141682af0(uVar7,&local_90,0);
    puVar12 = &DAT_143f3eda8;
    if (local_88 != 0) {
      puVar12 = local_90;
    }
    puVar11 = &DAT_143f3eda8;
    if ((int)local_98 != 0) {
      puVar11 = local_a0;
    }
    FString::PrintfImpl(param_1,L"%s-%s",puVar11,puVar12);
  }
  else {
    uVar7 = FGenericPlatformMisc::GetLoginId(local_50);
    puVar9 = (undefined8 *)FString::ToLower(uVar7,local_60);
    if (*(int *)(puVar9 + 1) == 0) {
      puVar12 = &DAT_143f3eda8;
    }
    else {
      puVar12 = (undefined2 *)*puVar9;
    }
    puVar11 = &DAT_143f3eda8;
    if ((int)local_98 != 0) {
      puVar11 = local_a0;
    }
    FString::PrintfImpl(param_1,L"%s-%s",puVar11,puVar12);
    local_90 = local_50[0];
    if (local_60[0] != 0) {
      FMemory::Free();
      local_90 = local_50[0];
    }
  }
  if (local_90 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_a0 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1404f00f0 FUN_1404f00f0 body=52 status=ok
// SIG undefined FUN_1404f00f0(void)

void FUN_1404f00f0(longlong *param_1)

{
  longlong local_18 [3];
  
  local_18[0] = 0;
  local_18[1] = 0;
  (**(code **)(*param_1 + 0x208))(param_1,0,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1404f0130 FUN_1404f0130 body=469 status=ok
// SIG undefined FUN_1404f0130(void)

undefined8 FUN_1404f0130(longlong param_1,longlong *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined2 *puVar10;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  longlong local_28 [2];
  longlong local_18 [2];
  
  plVar3 = *(longlong **)(param_1 + 0xa8);
  uVar9 = 0;
  lVar4 = *(longlong *)(param_1 + 0xa0);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (((lVar4 != 0) && (*(longlong **)(lVar4 + 8) != (longlong *)0x0)) &&
     (cVar7 = (**(code **)(**(longlong **)(lVar4 + 8) + 0x78))(), cVar7 != '\0')) {
    plVar5 = *(longlong **)(lVar4 + 8);
    if (param_3 == 0) {
      puVar8 = (undefined8 *)(**(code **)(*plVar5 + 0x68))(plVar5,local_18,1);
      if (*(int *)(puVar8 + 1) == 0) {
        puVar10 = &DAT_143f3eda8;
      }
      else {
        puVar10 = (undefined2 *)*puVar8;
      }
      FString::PrintfImpl(&local_38,&DAT_143f7b2c4,puVar10);
      if (param_2 == &local_38) {
        local_28[0] = local_18[0];
        if (local_38 != 0) {
          FMemory::Free();
          local_28[0] = local_18[0];
        }
      }
      else {
        if (*param_2 != 0) {
          FMemory::Free();
        }
        *param_2 = local_38;
        *(undefined4 *)(param_2 + 1) = (undefined4)local_30;
        *(undefined4 *)((longlong)param_2 + 0xc) = local_30._4_4_;
        local_30 = 0;
        local_38 = 0;
        local_28[0] = local_18[0];
      }
    }
    else {
      puVar8 = (undefined8 *)(**(code **)(*plVar5 + 0x68))(plVar5,local_28,0);
      if (*(int *)(puVar8 + 1) == 0) {
        puVar10 = &DAT_143f3eda8;
      }
      else {
        puVar10 = (undefined2 *)*puVar8;
      }
      FString::PrintfImpl(&local_48,L"%s:%d",puVar10,param_3);
      if (param_2 == &local_48) {
        if (local_48 != 0) {
          FMemory::Free();
        }
      }
      else {
        if (*param_2 != 0) {
          FMemory::Free();
        }
        *param_2 = local_48;
        *(undefined4 *)(param_2 + 1) = (undefined4)local_40;
        uVar6 = local_40._4_4_;
        local_40 = 0;
        local_48 = 0;
        *(undefined4 *)((longlong)param_2 + 0xc) = uVar6;
      }
    }
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    uVar9 = 1;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar3 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return uVar9;
}



// FUNCTION 1404f0340 FUN_1404f0340 body=152 status=ok
// SIG undefined FUN_1404f0340(void)

undefined8 FUN_1404f0340(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong local_18;
  longlong *local_10;
  
  (**(code **)(*param_1 + 0x58))(param_1,&local_18,0);
  if (local_18 != 0) {
    cVar5 = (*(code *)**(undefined8 **)*param_2)();
    if (cVar5 != '\0') {
      uVar6 = 1;
      goto LAB_1404f037a;
    }
  }
  uVar6 = 0;
LAB_1404f037a:
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
    return uVar6;
  }
  return uVar6;
}



// FUNCTION 1404f03e0 FUN_1404f03e0 body=169 status=ok
// SIG undefined FUN_1404f03e0(void)

ulonglong FUN_1404f03e0(longlong param_1,longlong param_2)

{
  BOOL BVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x318));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x318));
  }
  uVar5 = 0;
  if (0 < *(int *)(param_1 + 0x348)) {
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0x340) + 0xb8);
    uVar3 = uVar5;
    uVar4 = uVar5;
    do {
      if (*plVar2 == param_2) {
        uVar5 = (longlong)(int)uVar4 * 0x118 + *(longlong *)(param_1 + 0x340);
        break;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
      uVar3 = uVar3 + 1;
      plVar2 = plVar2 + 0x23;
    } while ((longlong)uVar3 < (longlong)*(int *)(param_1 + 0x348));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x318));
  return uVar5;
}



// FUNCTION 1404f04a0 FUN_1404f04a0 body=53 status=ok
// SIG undefined FUN_1404f04a0(void)

void FUN_1404f04a0(longlong *param_1,undefined8 param_2)

{
  longlong local_18 [3];
  
  local_18[0] = 0;
  local_18[1] = 0;
  (**(code **)(*param_1 + 0xe8))(param_1,param_2,0,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1404f04e0 FUN_1404f04e0 body=453 status=ok
// SIG undefined FUN_1404f04e0(void)

void FUN_1404f04e0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 local_28;
  longlong *local_20;
  
  iVar5 = *(int *)((longlong)param_2 + 0xc);
  iVar7 = (int)param_2[1];
  if (iVar5 < 0) {
    if (iVar7 != 0) {
      plVar8 = (longlong *)(*param_2 + 8);
      do {
        plVar3 = (longlong *)*plVar8;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
        plVar8 = plVar8 + 2;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      iVar5 = *(int *)((longlong)param_2 + 0xc);
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (iVar5 != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,0);
    }
  }
  else {
    if (iVar7 != 0) {
      plVar8 = (longlong *)(*param_2 + 8);
      do {
        plVar3 = (longlong *)*plVar8;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
        plVar8 = plVar8 + 2;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    *(undefined4 *)(param_2 + 1) = 0;
  }
  (**(code **)(*param_1 + 0x58))(param_1,&local_28,0);
  plVar8 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
  }
  iVar5 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar5 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar5 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar5);
  }
  puVar6 = (undefined8 *)((longlong)iVar5 * 0x10 + *param_2);
  *puVar6 = local_28;
  puVar6[1] = plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar8 + 1;
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_20 + 1;
    lVar4 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return;
}



// FUNCTION 1404f06b0 _Do_call body=27 status=ok
// SIG undefined _Do_call(void)

undefined8
std::
_Func_impl_no_alloc<<lambda_173a8d6fb035ce29981d3e0b518f3c1e>,TSharedPtr<IOnlineFriends,1>,IOnlineSubsystem_*>
::_Do_call(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  (**(code **)(*(longlong *)*param_3 + 0x28))();
  return param_2;
}



// FUNCTION 1404f06d0 FUN_1404f06d0 body=56 status=ok
// SIG undefined FUN_1404f06d0(void)

void FUN_1404f06d0(longlong *param_1,undefined8 param_2)

{
  longlong local_18 [3];
  
  local_18[0] = 0;
  local_18[1] = 0;
  (**(code **)(*param_1 + 0x2c0))(param_1,param_2,2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1404f0740 FUN_1404f0740 body=46 status=ok
// SIG undefined FUN_1404f0740(void)

void FUN_1404f0740(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x10))();
  if (lVar1 != 0) {
    FUN_1404f0130(lVar1,param_3,0);
    return;
  }
  return;
}



// FUNCTION 1404f07a0 ToString body=29 status=ok
// SIG undefined ToString(void)

undefined8 FOnlineSessionInfoNull::ToString(longlong param_1,undefined8 param_2)

{
  (**(code **)(*(longlong *)(param_1 + 0x18) + 0x28))(param_1 + 0x18);
  return param_2;
}



// FUNCTION 1404f07e0 FindBuilder body=28 status=ok
// SIG undefined FindBuilder(void)

longlong Metasound::Engine::FDocumentBuilderRegistry::FindBuilder(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1404f03e0();
  if (lVar1 != 0) {
    return lVar1 + 0x28;
  }
  return 0;
}



// FUNCTION 1404f0800 FUN_1404f0800 body=173 status=ok
// SIG undefined FUN_1404f0800(void)

ulonglong FUN_1404f0800(longlong param_1,longlong param_2)

{
  BOOL BVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x318));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x318));
  }
  uVar5 = 0;
  if (0 < *(int *)(param_1 + 0x348)) {
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0x340) + 0xb8);
    uVar3 = uVar5;
    uVar4 = uVar5;
    do {
      if (*plVar2 == param_2) {
        uVar5 = (ulonglong)
                *(uint *)((longlong)(int)uVar4 * 0x118 + 0x110 + *(longlong *)(param_1 + 0x340));
        break;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
      uVar3 = uVar3 + 1;
      plVar2 = plVar2 + 0x23;
    } while ((longlong)uVar3 < (longlong)*(int *)(param_1 + 0x348));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x318));
  return uVar5;
}



// FUNCTION 1404f08b0 FUN_1404f08b0 body=203 status=ok
// SIG undefined FUN_1404f08b0(void)

undefined8 * FUN_1404f08b0(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 0x118) != *(int *)(param_1 + 0x144)) {
    lVar2 = *(longlong *)(param_1 + 0x150);
    if (*(longlong *)(param_1 + 0x150) == 0) {
      lVar2 = param_1 + 0x148;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)*(int *)(param_1 + 0x158) - 1U & (longlong)param_3) * 4);
    if (iVar1 != -1) {
      do {
        piVar4 = (int *)((longlong)iVar1 * 0x20 + *(longlong *)(param_1 + 0x110));
        if (*piVar4 == param_3) {
          if (iVar1 != -1) goto LAB_1404f0931;
          break;
        }
        iVar1 = piVar4[6];
      } while (iVar1 != -1);
    }
  }
  piVar4 = (int *)0x0;
LAB_1404f0931:
  piVar3 = piVar4 + 2;
  if (piVar4 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  if (piVar3 == (int *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = *(undefined8 *)piVar3;
    lVar2 = *(longlong *)(piVar3 + 2);
    param_2[1] = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 1404f0980 FUN_1404f0980 body=6 status=ok
// SIG undefined FUN_1404f0980(void)

undefined8 FUN_1404f0980(void)

{
  return 3;
}



// FUNCTION 1404f0990 FUN_1404f0990 body=150 status=ok
// SIG undefined FUN_1404f0990(void)

undefined8 FUN_1404f0990(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  int *piVar5;
  
  if (*(int *)(param_1 + 0x118) != *(int *)(param_1 + 0x144)) {
    piVar5 = *(int **)(param_1 + 0x150);
    if (*(int **)(param_1 + 0x150) == (int *)0x0) {
      piVar5 = (int *)(param_1 + 0x148);
    }
    iVar2 = *piVar5;
    if (iVar2 != -1) {
      do {
        plVar4 = (longlong *)((longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x110));
        if ((int)*plVar4 == 0) {
          if (iVar2 != -1) goto LAB_1404f09f1;
          break;
        }
        iVar2 = (int)plVar4[3];
      } while (iVar2 != -1);
    }
  }
  plVar4 = (longlong *)0x0;
LAB_1404f09f1:
  plVar3 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  if (((plVar3 != (longlong *)0x0) && (*plVar3 != 0)) &&
     (cVar1 = (*(code *)**(undefined8 **)*param_2)(), cVar1 != '\0')) {
    return 0;
  }
  return 0xffffffff;
}



// FUNCTION 1404f0a30 FUN_1404f0a30 body=120 status=ok
// SIG undefined FUN_1404f0a30(void)

undefined8 FUN_1404f0a30(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar1;
  char *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x318);
  BVar1 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar1 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (0 < *(int *)(param_1 + 0x348)) {
    lVar3 = 0;
    pcVar2 = (char *)(*(longlong *)(param_1 + 0x340) + 0x3e);
    do {
      if (*pcVar2 != '\0') {
        uVar4 = 1;
        goto LAB_1404f0a8b;
      }
      lVar3 = lVar3 + 1;
      pcVar2 = pcVar2 + 0x118;
    } while (lVar3 < *(int *)(param_1 + 0x348));
  }
  uVar4 = 0;
LAB_1404f0a8b:
  LeaveCriticalSection(lpCriticalSection);
  return uVar4;
}



// FUNCTION 1404f0ab0 FUN_1404f0ab0 body=626 status=ok
// SIG undefined FUN_1404f0ab0(void)

void FUN_1404f0ab0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  void **ppvVar3;
  longlong lVar4;
  void *_Src;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  void *pvVar9;
  int iVar10;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_c8 [8];
  undefined8 local_c0;
  longlong *local_b8;
  GUID local_b0;
  void *local_a0;
  ulonglong local_98;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined **local_80;
  undefined8 local_78;
  longlong *plStack_70;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  
  uVar6 = FName::FName(local_res18,L"WINDOWS",1);
  plVar7 = (longlong *)FUN_1419c6b80(uVar6);
  lVar4 = *plVar7;
  uVar6 = FUN_141672640();
  puVar8 = (undefined8 *)(**(code **)(lVar4 + 0xb8))(plVar7,local_90,uVar6,local_res8);
  local_b8 = (longlong *)puVar8[1];
  local_c0 = *puVar8;
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
    UNLOCK();
  }
  puVar8 = (undefined8 *)(param_1 + 8);
  if (puVar8 != &local_c0) {
    *puVar8 = local_c0;
    local_c0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x10,&local_b8);
  }
  plVar7 = local_b8;
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_b8 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_b8)(local_b8);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar10 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_b8 + 8))(local_b8,1);
      }
    }
  }
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_88 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar2 = (int *)((longlong)local_88 + 0xc);
      iVar10 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_88 + 8))(local_88,1);
      }
    }
  }
  local_res10[0] = 0;
  (**(code **)(*(longlong *)*puVar8 + 0x28))((longlong *)*puVar8,local_res10);
  if ((local_res10[0] & 0xff000000) == 0x7f000000) {
    (**(code **)(*(longlong *)*puVar8 + 0x10))((longlong *)*puVar8,0x7f000001);
  }
  plVar7 = (longlong *)*puVar8;
  lVar4 = *plVar7;
  puVar8 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,local_res20);
  uVar5 = FUN_1404d0140(*puVar8);
  (**(code **)(lVar4 + 0x30))(plVar7,uVar5);
  local_b0.Data1 = 0;
  local_b0.Data2 = 0;
  local_b0.Data3 = 0;
  local_b0.Data4[0] = '\0';
  local_b0.Data4[1] = '\0';
  local_b0.Data4[2] = '\0';
  local_b0.Data4[3] = '\0';
  local_b0.Data4[4] = '\0';
  local_b0.Data4[5] = '\0';
  local_b0.Data4[6] = '\0';
  local_b0.Data4[7] = '\0';
  FWindowsPlatformMisc::CreateGuid(&local_b0);
  FUN_141682af0(&local_b0,&local_a0,0);
  puVar8 = (undefined8 *)FName::FName(local_c8,L"NULL",1);
  _Src = local_a0;
  local_68 = (void *)0x0;
  uVar6 = *puVar8;
  local_80 = &PTR_FUN_143f74160;
  iVar10 = (int)local_98;
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  local_60 = iVar10;
  if (iVar10 == 0) {
    local_5c = 0;
    pvVar9 = (void *)0x0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,local_98 & 0xffffffff,0);
    pvVar9 = local_68;
    _guard_xfg_dispatch_icall_nop(local_68,_Src,(longlong)iVar10 * 2);
  }
  uVar5 = local_5c;
  iVar10 = local_60;
  ppvVar3 = (void **)(param_1 + 0x30);
  if (ppvVar3 != &local_68) {
    if (*ppvVar3 != (void *)0x0) {
      FMemory::Free();
    }
    *ppvVar3 = pvVar9;
    pvVar9 = (void *)0x0;
    *(int *)(param_1 + 0x38) = iVar10;
    *(undefined4 *)(param_1 + 0x3c) = uVar5;
  }
  *(undefined8 *)(param_1 + 0x40) = uVar6;
  if (pvVar9 != (void *)0x0) {
    FMemory::Free(pvVar9);
  }
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plStack_70 + 0xc);
    iVar10 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      (**(code **)(*plStack_70 + 8))(plStack_70,1);
    }
  }
  if (local_a0 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1404f0d30 FUN_1404f0d30 body=1244 status=ok
// SIG undefined FUN_1404f0d30(void)

undefined8 FUN_1404f0d30(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  longlong *local_b8;
  longlong *local_b0;
  undefined8 *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined2 *local_88;
  int local_80;
  undefined4 *local_78;
  undefined8 local_70;
  longlong local_68 [2];
  undefined1 local_58 [8];
  longlong *local_50;
  longlong local_48 [2];
  
  plVar4 = (longlong *)operator_new(0x108);
  plVar9 = (longlong *)0x0;
  plVar8 = plVar9;
  if (plVar4 != (longlong *)0x0) {
    FOnlineAsyncTaskManager::FOnlineAsyncTaskManager(plVar4);
    plVar4[0x20] = param_1;
    *plVar4 = (longlong)&PTR_Init_143f76c48;
    plVar4[1] = (longlong)&PTR_LAB_143f76c80;
    plVar8 = plVar4;
  }
  *(longlong **)(param_1 + 0xa0) = plVar8;
  puVar5 = (undefined8 *)FName::ToString(param_1 + 0x28,local_68);
  if (*(int *)(puVar5 + 1) == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)*puVar5;
  }
  FString::PrintfImpl(&local_88,L"OnlineAsyncTaskThreadNull %s",puVar10);
  puVar10 = &DAT_143f3eda8;
  if (local_80 != 0) {
    puVar10 = local_88;
  }
  uVar6 = FUN_1415d42a0(*(undefined8 *)(param_1 + 0xa0),puVar10,0x20000,0,0xffffffffffffffff);
  *(undefined8 *)(param_1 + 0xa8) = uVar6;
  if (local_88 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)operator_new(0x368);
  plVar8 = plVar9;
  if (plVar4 != (longlong *)0x0) {
    FUN_1404e8a40(plVar4);
    plVar4[0x4f] = param_1;
    *plVar4 = (longlong)&PTR_FUN_143f7d720;
    puVar5 = (undefined8 *)FName::FName(local_res18,L"NULL",1);
    FUN_1404ac080(plVar4 + 0x50,*puVar5);
    InitializeCriticalSection((LPCRITICAL_SECTION)(plVar4 + 99));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(plVar4 + 99),4000);
    plVar4[0x68] = 0;
    plVar4[0x69] = 0;
    plVar4[0x6a] = 0;
    plVar4[0x6b] = 0;
    plVar4[0x6c] = 0;
    plVar8 = plVar4;
  }
  plVar7 = (longlong *)operator_new(0x18);
  plVar4 = plVar9;
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 1;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    *plVar7 = (longlong)&PTR_FUN_143f3f2e0;
    plVar7[2] = (longlong)plVar8;
    plVar4 = plVar7;
  }
  local_b8 = plVar8;
  local_b0 = plVar4;
  SharedPointerInternals::EnableSharedFromThis(&local_b8,plVar8,plVar8);
  if ((longlong **)(param_1 + 0x70) != &local_b8) {
    *(longlong **)(param_1 + 0x70) = plVar8;
    local_b8 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x78,&local_b0);
    plVar4 = local_b0;
  }
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
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  puVar5 = (undefined8 *)operator_new(0x160);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    FUN_1404e8940(puVar5);
    local_res8[0] = 0;
    *puVar5 = &PTR_FUN_143f7cc48;
    puVar5[0x22] = 0;
    local_78 = local_res8;
    puVar5[0x23] = 0;
    puVar5[0x26] = 0;
    puVar5[0x27] = 0;
    *(undefined4 *)(puVar5 + 0x28) = 0xffffffff;
    *(undefined4 *)((longlong)puVar5 + 0x144) = 0;
    puVar5[0x2a] = 0;
    *(undefined4 *)(puVar5 + 0x2b) = 0;
    uVar6 = FUN_1404efe60(local_48,0);
    local_70 = FUN_1404ef1f0(puVar5,local_58,uVar6);
    FUN_1404e8410(puVar5 + 0x22,local_res10,&local_78,0);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_50 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    if (local_48[0] != 0) {
      FMemory::Free();
    }
  }
  plVar4 = (longlong *)operator_new(0x18);
  plVar8 = plVar9;
  if (plVar4 != (longlong *)0x0) {
    *(undefined4 *)(plVar4 + 1) = 1;
    *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
    *plVar4 = (longlong)&PTR_FUN_143f3f2e0;
    plVar4[2] = (longlong)puVar5;
    plVar8 = plVar4;
  }
  local_a8 = puVar5;
  local_a0 = plVar8;
  SharedPointerInternals::EnableSharedFromThis(&local_a8,puVar5,puVar5);
  if ((undefined8 **)(param_1 + 0x80) != &local_a8) {
    *(undefined8 **)(param_1 + 0x80) = puVar5;
    local_a8 = (undefined8 *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x88,&local_a0);
    plVar8 = local_a0;
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar8 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  plVar4 = (longlong *)operator_new(0xa0);
  plVar8 = plVar9;
  if (plVar4 != (longlong *)0x0) {
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar4[3] = 2;
    plVar4[4] = 0;
    plVar4[5] = 0;
    plVar4[6] = 2;
    plVar4[7] = 0;
    plVar4[8] = 0;
    plVar4[9] = 2;
    plVar4[10] = 0;
    plVar4[0xb] = 0;
    plVar4[0xc] = 2;
    plVar4[0xd] = 0;
    plVar4[0xe] = 0;
    plVar4[0xf] = 2;
    plVar4[0x10] = 0;
    plVar4[0x11] = 0;
    plVar4[0x12] = 2;
    *plVar4 = (longlong)&PTR_FUN_143f7d020;
    plVar4[0x13] = param_1;
    plVar8 = plVar4;
  }
  plVar4 = (longlong *)operator_new(0x18);
  if (plVar4 != (longlong *)0x0) {
    *(undefined4 *)(plVar4 + 1) = 1;
    *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
    *plVar4 = (longlong)&PTR_FUN_143f3f2e0;
    plVar4[2] = (longlong)plVar8;
    plVar9 = plVar4;
  }
  local_98 = plVar8;
  local_90 = plVar9;
  SharedPointerInternals::EnableSharedFromThis(&local_98,plVar8,plVar8);
  if ((longlong **)(param_1 + 0x90) != &local_98) {
    *(longlong **)(param_1 + 0x90) = plVar8;
    local_98 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x98,&local_90);
    plVar9 = local_90;
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar9 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return 1;
}



// FUNCTION 1404f1210 FUN_1404f1210 body=47 status=ok
// SIG undefined FUN_1404f1210(void)

void FUN_1404f1210(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &PTR_FUN_143f7c9a0;
    return;
  }
  return;
}



// FUNCTION 1404f1240 FUN_1404f1240 body=5 status=ok
// SIG undefined FUN_1404f1240(void)

undefined1 FUN_1404f1240(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



// FUNCTION 1404f1260 FUN_1404f1260 body=37 status=ok
// SIG undefined FUN_1404f1260(void)

undefined8 FUN_1404f1260(longlong param_1)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x78))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1404f1290 FUN_1404f1290 body=480 status=ok
// SIG undefined FUN_1404f1290(void)

undefined8 FUN_1404f1290(undefined8 param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  void *_Src;
  longlong *plVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined4 local_res10 [2];
  undefined1 local_res20 [8];
  undefined8 local_38;
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  lVar3 = *(longlong *)(param_2 + 0xa0);
  *(undefined4 *)(param_2 + 0x110) = 2;
  if ((lVar3 != 0) && (param_3 != 0)) {
    lVar4 = *(longlong *)(param_3 + 0xa0);
    if (lVar4 == 0) {
      return 0x80004005;
    }
    puVar9 = (undefined8 *)(lVar3 + 0x30);
    if (puVar9 != (undefined8 *)(lVar4 + 0x30)) {
      iVar2 = *(int *)(lVar4 + 0x38);
      _Src = *(void **)(lVar4 + 0x30);
      *(int *)(lVar3 + 0x38) = iVar2;
      if ((iVar2 == 0) && (*(int *)(lVar3 + 0x3c) == 0)) {
        *(undefined4 *)(lVar3 + 0x3c) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar9,iVar2);
        _guard_xfg_dispatch_icall_nop((void *)*puVar9,_Src,(longlong)iVar2 * 2);
      }
    }
    *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)(lVar4 + 0x40);
    (**(code **)(**(longlong **)(lVar4 + 8) + 0x28))(*(longlong **)(lVar4 + 8),local_res10);
    plVar5 = *(longlong **)(lVar4 + 8);
    uVar7 = FName::FName(local_res20,L"WINDOWS",1);
    plVar8 = (longlong *)FUN_1419c6b80(uVar7);
    lVar4 = *plVar8;
    uVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
    puVar9 = (undefined8 *)(**(code **)(lVar4 + 0x70))(plVar8,local_28,local_res10[0],uVar6);
    local_30 = (longlong *)puVar9[1];
    local_38 = *puVar9;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
    if ((undefined8 *)(lVar3 + 8) != &local_38) {
      *(undefined8 *)(lVar3 + 8) = local_38;
      local_38 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(lVar3 + 0x10,&local_30);
    }
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_30 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_20 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
    return 0;
  }
  return 0x80004005;
}



// FUNCTION 1404f1470 FUN_1404f1470 body=886 status=ok
// SIG undefined FUN_1404f1470(void)

void FUN_1404f1470(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  BOOL BVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  
  iVar3 = -0x7fffbffb;
  lVar4 = FUN_1404f03e0(param_1,param_3);
  plVar6 = (longlong *)0x0;
  if (lVar4 == 0) {
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 99));
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 99));
    }
    iVar3 = (int)param_1[0x69];
    *(int *)(param_1 + 0x69) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0x34c) < iVar3 + 1) {
      FUN_1404f33d0(param_1 + 0x68,iVar3);
    }
    plVar7 = (longlong *)((longlong)iVar3 * 0x118 + param_1[0x68]);
    plVar8 = plVar6;
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = (longlong)&PTR_FUN_143f769a8;
      plVar7[1] = *(longlong *)(param_4 + 8);
      lVar4 = *(longlong *)(param_4 + 0x10);
      plVar7[2] = lVar4;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      FString::FString(plVar7 + 3,param_4 + 0x18);
      FUN_1404e8890(plVar7 + 5,param_4 + 0x28);
      plVar7[0x14] = *(longlong *)(param_4 + 0xa0);
      lVar4 = *(longlong *)(param_4 + 0xa8);
      plVar7[0x15] = lVar4;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      *(undefined4 *)(plVar7 + 0x16) = *(undefined4 *)(param_4 + 0xb0);
      *(undefined4 *)((longlong)plVar7 + 0xb4) = *(undefined4 *)(param_4 + 0xb4);
      *plVar7 = (longlong)&PTR__scalar_deleting_destructor__143f7d2c8;
      plVar7[0x17] = param_3;
      *(undefined4 *)(plVar7 + 0x18) = 0xffffffff;
      plVar7[0x19] = 0;
      plVar7[0x1a] = 0;
      *(undefined1 *)(plVar7 + 0x1b) = 0;
      plVar7[0x1c] = 0;
      plVar7[0x1d] = 0;
      plVar7[0x1e] = 0;
      plVar7[0x1f] = 0;
      plVar7[0x20] = 0;
      plVar7[0x21] = 0;
      *(undefined4 *)(plVar7 + 0x22) = 0;
      plVar8 = plVar7;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 99));
    local_50 = (longlong *)((longlong *)*param_2)[1];
    local_58 = *(longlong *)*param_2;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
    }
    if (plVar8 + 0x19 != &local_58) {
      plVar8[0x19] = local_58;
      local_58 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(plVar8 + 0x1a,&local_50);
    }
    plVar7 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_50 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    lVar4 = operator_new(0x48);
    plVar7 = plVar6;
    if (lVar4 != 0) {
      plVar7 = (longlong *)FOnlineSessionInfoNull::FOnlineSessionInfoNull(lVar4);
    }
    plVar5 = (longlong *)operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      *plVar5 = (longlong)&PTR_FUN_143f3f2d0;
      plVar5[2] = (longlong)plVar7;
      plVar6 = plVar5;
    }
    local_48 = plVar7;
    local_40 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_48,plVar7,plVar7);
    if ((longlong **)(plVar8 + 0x14) != &local_48) {
      plVar8[0x14] = (longlong)plVar7;
      local_48 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(plVar8 + 0x15,&local_40);
      plVar6 = local_40;
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar6 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    iVar3 = FUN_1404f1290(param_1,plVar8,param_4);
    *(undefined1 *)(plVar8 + 7) = 0;
    if (iVar3 == 0x3e5) {
      return;
    }
    if (iVar3 == 0) {
      FUN_1404f2da0(param_1,param_3,param_2);
    }
    else {
      FUN_1404f3330();
    }
  }
  (**(code **)(*param_1 + 0x178))(param_1,param_3,(iVar3 != 0) + '\x01');
  return;
}



// FUNCTION 1404f17f0 FUN_1404f17f0 body=142 status=ok
// SIG undefined FUN_1404f17f0(void)

void FUN_1404f17f0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 1;
  local_18 = (undefined8 *)0x0;
  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_18,0);
  *local_18 = *param_2;
  lVar1 = param_2[1];
  local_18[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*param_1 + 0x150))(param_1,&local_18,param_3,param_4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_18);
  return;
}



// FUNCTION 1404f1880 FUN_1404f1880 body=253 status=ok
// SIG undefined FUN_1404f1880(void)

void FUN_1404f1880(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  double dVar9;
  LARGE_INTEGER local_res8;
  
  plVar4 = (longlong *)param_2[1];
  uVar5 = *param_2;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0xa0);
  puVar8 = (undefined8 *)operator_new(0x30);
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    *puVar8 = &PTR_FUN_143f76b48;
    QueryPerformanceCounter(&local_res8);
    dVar9 = (double)local_res8.QuadPart * DAT_1468b02f8;
    *puVar8 = &PTR__scalar_deleting_destructor__143f7dd40;
    *(undefined1 *)(puVar8 + 2) = 0;
    puVar8[1] = dVar9 + 16777216.0;
    puVar8[3] = param_1;
    puVar8[4] = uVar5;
    puVar8[5] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
  }
  FOnlineAsyncTaskManager::AddToInQueue(uVar6,puVar8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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



// FUNCTION 1404f1990 FUN_1404f1990 body=223 status=ok
// SIG undefined FUN_1404f1990(void)

void FUN_1404f1990(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong *local_10;
  
  if ((int)param_1[0x56] == 2) {
    FUN_1404b6bd0(param_1 + 0x50);
  }
  FUN_1404f4ef0(param_1);
  plVar2 = param_1 + 0x6a;
  plVar5 = (longlong *)*plVar2;
  if (plVar5 != (longlong *)0x0) {
    if (0 < (int)plVar5[2]) {
      (**(code **)(*plVar5 + 8))();
      plVar5 = (longlong *)*plVar2;
    }
    *(undefined4 *)(plVar5 + 3) = 2;
    local_10 = (longlong *)0x0;
    if (plVar2 != &local_18) {
      *plVar2 = 0;
      local_18 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x6b,&local_10);
      plVar2 = local_10;
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_10 + 1;
        lVar4 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_10)(local_10);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_10 + 8))(local_10,1);
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001404f1a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x120))(param_1,1);
  return;
}



// FUNCTION 1404f1a70 FUN_1404f1a70 body=399 status=ok
// SIG undefined FUN_1404f1a70(void)

void FUN_1404f1a70(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  bool bVar2;
  BOOL BVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong local_48;
  int local_40;
  undefined8 local_3c;
  char local_34;
  
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x318));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x318));
  }
  uVar5 = 0;
  uVar7 = uVar5;
  if (0 < *(int *)(param_1 + 0x348)) {
    do {
      lVar1 = uVar7 + *(longlong *)(param_1 + 0x340);
      if (lVar1 != 0) {
        if ((((*(char *)(lVar1 + 0x3a) == '\0') && (*(char *)(lVar1 + 0x39) == '\0')) ||
            (*(int *)(lVar1 + 0xb4) < 1)) &&
           ((*(char *)(lVar1 + 0x3f) == '\0' && (*(char *)(lVar1 + 0x40) == '\0')))) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          local_48 = 0;
          local_3c = 0;
          local_34 = '\0';
          local_40 = 0;
          TArray<unsigned_char,FDefaultAllocator>::ResizeTo(&local_48);
          lVar4 = (longlong)local_40;
          local_40 = local_40 + 0x400;
          if ((int)local_3c < local_40) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_48);
          }
          _guard_xfg_dispatch_icall_nop((void *)(lVar4 + local_48),0,0x400);
          FUN_1404aeb10(param_1 + 0x280,&local_48,param_4);
          FUN_1404ed010(param_1,&local_48,lVar1);
          if (local_34 == '\0') {
            FUN_1404add60(param_1 + 0x280,local_48,local_3c._4_4_);
          }
          if (local_48 != 0) {
            FMemory::Free();
          }
        }
      }
      uVar6 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar6;
      uVar7 = uVar7 + 0x118;
    } while ((int)uVar6 < *(int *)(param_1 + 0x348));
  }
                    /* WARNING: Could not recover jumptable at 0x0001404f1bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x318));
  return;
}



// FUNCTION 1404f1c00 FUN_1404f1c00 body=555 status=ok
// SIG undefined FUN_1404f1c00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1404f1c00(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_f8 [32];
  LARGE_INTEGER local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 local_c0;
  undefined **local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined2 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  longlong local_90 [4];
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  puVar4 = (undefined8 *)0x0;
  lVar2 = *(longlong *)(param_1 + 0x350);
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 0;
  local_94 = 0;
  local_90[0] = 0;
  local_90[1] = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0xffffffff;
  local_5c = 0;
  local_50 = 0;
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x10);
    *(int *)(lVar2 + 0x10) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x14) < iVar1 + 1) {
      FUN_1404852a0(lVar2 + 8,iVar1);
    }
    puVar3 = (undefined8 *)((longlong)iVar1 * 0xc0 + *(longlong *)(lVar2 + 8));
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_FUN_143f769a8;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = &PTR_FUN_143f769a0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      *(undefined2 *)(puVar3 + 8) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x44) = 0;
      *(undefined4 *)((longlong)puVar3 + 0x4c) = 0;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      puVar3[0xe] = 0;
      puVar3[0xf] = 0;
      *(undefined4 *)(puVar3 + 0x10) = 0xffffffff;
      *(undefined4 *)((longlong)puVar3 + 0x84) = 0;
      puVar3[0x12] = 0;
      *(undefined4 *)(puVar3 + 0x13) = 0;
      puVar3[0x14] = 0;
      puVar3[0x15] = 0;
      puVar3[0x16] = 0;
      *(undefined4 *)(puVar3 + 0x17) = 9999;
      puVar4 = puVar3;
    }
    QueryPerformanceCounter(&local_d8);
    *(int *)(puVar4 + 0x17) =
         (int)((((double)local_d8.QuadPart * DAT_1468b02f8 + 16777216.0) -
               *(double *)(param_1 + 0x360)) * 1000.0);
    local_c4 = 0;
    local_c0 = 0;
    local_d0 = param_2;
    local_c8 = param_3;
    FUN_1404f23a0(param_1,&local_d0,puVar4);
  }
  local_b8 = &PTR_FUN_143f769a0;
  local_48 = 0;
  if (local_50 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(local_90,0);
  if (local_70 != 0) {
    FMemory::Free();
  }
  if (local_90[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1404f1e30 FUN_1404f1e30 body=98 status=ok
// SIG undefined FUN_1404f1e30(void)

void FUN_1404f1e30(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  
  if (((int)param_4[1] != 0) && ((longlong *)*param_4 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)*param_4 + 0x18))();
    if (cVar1 != '\0') {
      if ((int)param_4[1] == 0) {
        param_4 = (longlong *)0x0;
      }
      else {
        param_4 = (longlong *)*param_4;
      }
      (**(code **)(*param_4 + 0x40))(param_4,param_2,param_3,1,1);
    }
  }
  return;
}



// FUNCTION 1404f1ea0 FUN_1404f1ea0 body=121 status=ok
// SIG undefined FUN_1404f1ea0(void)

void FUN_1404f1ea0(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  local_18 = *param_2;
  local_10 = (longlong *)param_2[1];
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
  }
  (**(code **)(*param_1 + 0x138))(param_1,&local_18,1);
  plVar5 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
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
  return;
}



// FUNCTION 1404f1f20 FUN_1404f1f20 body=126 status=ok
// SIG undefined FUN_1404f1f20(void)

void FUN_1404f1f20(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 1;
  local_18 = (undefined8 *)0x0;
  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_18,0);
  *local_18 = *param_3;
  lVar1 = param_3[1];
  local_18[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*param_1 + 0x198))(param_1,param_2,&local_18);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_18);
  return;
}



// FUNCTION 1404f1fa0 FUN_1404f1fa0 body=688 status=ok
// SIG undefined FUN_1404f1fa0(void)

void FUN_1404f1fa0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong local_58 [2];
  undefined8 local_48;
  longlong *local_40;
  longlong lStack_38;
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  
  puVar11 = (undefined8 *)*param_3;
  puVar10 = puVar11 + (longlong)(int)param_3[1] * 2;
  local_78 = 0;
  local_70 = 0;
  for (; puVar11 != puVar10; puVar11 = puVar11 + 2) {
    local_60 = (longlong *)puVar11[1];
    local_48 = *puVar11;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_40 = (longlong *)0x0;
    lStack_38 = 0;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_60 + 1) = (int)local_60[1] + 1;
      UNLOCK();
    }
    local_68 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_40,&local_60);
    plVar7 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_60 + 1;
      lVar8 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
    plVar7 = (longlong *)(**(code **)(*(longlong *)*puVar11 + 0x28))((longlong *)*puVar11,local_58);
    if (&lStack_38 != plVar7) {
      if (lStack_38 != 0) {
        FMemory::Free();
      }
      lStack_38 = *plVar7;
      *plVar7 = 0;
      local_30 = plVar7[1];
      plVar7[1] = 0;
    }
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    uVar5 = local_70;
    lVar8 = (longlong)(int)local_70;
    iVar6 = (int)local_70 + 1;
    local_70 = CONCAT44(local_70._4_4_,iVar6);
    if (local_70._4_4_ < iVar6) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_78,uVar5 & 0xffffffff);
    }
    puVar9 = (undefined8 *)(lVar8 * 0x30 + local_78);
    *puVar9 = local_48;
    puVar9[1] = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
    }
    FString::FString(puVar9 + 2,&lStack_38);
    FString::FString(puVar9 + 4,&local_28);
    if (local_28 != 0) {
      FMemory::Free();
    }
    if (lStack_38 != 0) {
      FMemory::Free();
    }
    plVar7 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_40 + 1;
      lVar8 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  (**(code **)(*param_1 + 0x1c0))(param_1,1,&local_78);
  if ((int)local_70 != 0) {
    plVar7 = (longlong *)(local_78 + 0x10);
    iVar6 = (int)local_70;
    do {
      if (plVar7[2] != 0) {
        FMemory::Free();
      }
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar4 = (longlong *)plVar7[-1];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
      plVar7 = plVar7 + 6;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1404f2260 FUN_1404f2260 body=309 status=ok
// SIG undefined FUN_1404f2260(void)

void FUN_1404f2260(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  double dVar9;
  LARGE_INTEGER local_res8;
  longlong local_20 [3];
  
  uVar4 = *param_2;
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  FString::FString(local_20,param_3);
  uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0xa0);
  puVar8 = (undefined8 *)operator_new(0x40);
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    *puVar8 = &PTR_FUN_143f76b48;
    QueryPerformanceCounter(&local_res8);
    dVar9 = (double)local_res8.QuadPart * DAT_1468b02f8;
    *puVar8 = &PTR_FUN_143f7dbc0;
    *(undefined1 *)(puVar8 + 2) = 0;
    puVar8[1] = dVar9 + 16777216.0;
    puVar8[3] = param_1;
    puVar8[4] = uVar4;
    puVar8[5] = plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    FString::FString(puVar8 + 6,local_20);
  }
  FOnlineAsyncTaskManager::AddToInQueue(uVar6,puVar8);
  if (local_20[0] != 0) {
    FMemory::Free();
  }
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
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 1404f23a0 FUN_1404f23a0 body=1308 status=ok
// SIG undefined FUN_1404f23a0(void)

void FUN_1404f23a0(undefined8 param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  longlong **pplVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  longlong *plVar15;
  undefined1 *puVar16;
  longlong *plVar17;
  int iVar18;
  undefined1 local_res10 [8];
  longlong local_res18;
  undefined1 local_res20 [8];
  longlong local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  
  local_res18 = param_3;
  plVar8 = (longlong *)operator_new(0x30);
  plVar17 = (longlong *)0x0;
  plVar9 = plVar17;
  if (plVar8 != (longlong *)0x0) {
    plVar8[4] = 0;
    plVar8[5] = 0;
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (longlong)&PTR_FUN_143f74160;
    plVar8[3] = 0;
    plVar8[4] = 0;
    plVar8[5] = DAT_146853138;
    *plVar8 = (longlong)&PTR_FUN_143f74160;
    plVar9 = (longlong *)FName::FName(local_res10,L"NULL",1);
    plVar8[5] = *plVar9;
    plVar9 = plVar8;
  }
  FUN_1404acbf0(param_2,plVar9 + 3);
  plVar8 = (longlong *)FUN_1404acbf0(param_2,param_3 + 0x18);
  if (((char)plVar8[2] == '\0') &&
     (lVar10 = (longlong)*(int *)((longlong)plVar8 + 0xc),
     *(int *)((longlong)plVar8 + 0xc) + 4 <= (int)plVar8[1])) {
    lVar7 = *plVar8;
    *(uint *)(param_3 + 0xb0) =
         CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar10 + lVar7),
                                    *(undefined1 *)(lVar10 + 1 + lVar7)),
                           *(undefined1 *)(lVar10 + 2 + lVar7)),*(undefined1 *)(lVar10 + 3 + lVar7))
    ;
    iVar18 = *(int *)((longlong)plVar8 + 0xc);
    *(int *)((longlong)plVar8 + 0xc) = iVar18 + 4;
    if (((char)plVar8[2] != '\0') || ((int)plVar8[1] < iVar18 + 8)) goto LAB_1404f24e7;
    lVar10 = (longlong)iVar18 + *plVar8;
    *(uint *)(param_3 + 0xb4) =
         CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar10 + 4),*(undefined1 *)(lVar10 + 5)),
                           *(undefined1 *)(lVar10 + 6)),*(undefined1 *)(lVar10 + 7));
    *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 4;
  }
  else {
LAB_1404f24e7:
    *(undefined1 *)(plVar8 + 2) = 1;
  }
  plVar11 = (longlong *)operator_new(0x18);
  plVar8 = plVar17;
  if (plVar11 != (longlong *)0x0) {
    *(undefined4 *)(plVar11 + 1) = 1;
    *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
    *plVar11 = (longlong)&PTR_FUN_143f7de48;
    plVar11[2] = (longlong)plVar9;
    plVar8 = plVar11;
  }
  plVar11 = plVar9 + 1;
  if (plVar9 == (longlong *)0x0) {
    plVar11 = plVar17;
  }
  uVar14 = 0;
  local_78 = plVar9;
  local_70 = plVar8;
  if (plVar11 != (longlong *)0x0) {
    if ((*plVar11 != 0) && (plVar11[1] != 0)) {
      piVar1 = (int *)(plVar11[1] + 8);
      LOCK();
      iVar18 = *piVar1;
      if (iVar18 == 0) {
        *piVar1 = 0;
        iVar18 = 0;
      }
      UNLOCK();
      if (0 < iVar18) goto LAB_1404f25dd;
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    *plVar11 = (longlong)plVar9;
    plVar15 = (longlong *)plVar11[1];
    if (plVar8 != plVar15) {
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
        UNLOCK();
        plVar15 = (longlong *)plVar11[1];
      }
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*plVar15 + 8))(plVar15,1);
        }
      }
      plVar11[1] = (longlong)plVar8;
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar8 + 1;
      lVar10 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
  }
LAB_1404f25dd:
  if ((longlong **)(param_3 + 8) != &local_78) {
    *(longlong **)(param_3 + 8) = plVar9;
    local_78 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_3 + 0x10,&local_70);
  }
  plVar9 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_70 + 1;
    lVar10 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  lVar10 = operator_new(0x48);
  plVar9 = plVar17;
  if (lVar10 != 0) {
    plVar9 = (longlong *)FOnlineSessionInfoNull::FOnlineSessionInfoNull(lVar10);
  }
  uVar12 = FName::FName(local_res20,L"WINDOWS",1);
  plVar8 = (longlong *)FUN_1419c6b80(uVar12);
  plVar8 = (longlong *)(**(code **)(*plVar8 + 0x70))(plVar8,local_58,0,0);
  local_80 = (longlong *)plVar8[1];
  local_88 = *plVar8;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
  }
  plVar8 = plVar9 + 1;
  if (plVar8 != &local_88) {
    *plVar8 = local_88;
    local_88 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(plVar9 + 2,&local_80);
  }
  plVar11 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_80 + 1;
    lVar10 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_50 + 1;
    lVar10 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  FUN_1404acbf0(param_2,plVar9 + 6);
  plVar8 = (longlong *)*plVar8;
  if ((char)param_2[2] == '\0') {
    iVar18 = *(int *)((longlong)param_2 + 0xc) + 4;
    if ((int)param_2[1] < iVar18) goto LAB_1404f2791;
    puVar16 = (undefined1 *)((longlong)*(int *)((longlong)param_2 + 0xc) + *param_2);
    uVar3 = *puVar16;
    uVar4 = puVar16[1];
    uVar5 = puVar16[2];
    uVar6 = puVar16[3];
    *(int *)((longlong)param_2 + 0xc) = iVar18;
    uVar13 = CONCAT31(CONCAT21(CONCAT11(uVar3,uVar4),uVar5),uVar6);
  }
  else {
LAB_1404f2791:
    *(undefined1 *)(param_2 + 2) = 1;
    uVar13 = uVar14;
  }
  (**(code **)(*plVar8 + 0x10))(plVar8,uVar13);
  if ((char)param_2[2] == '\0') {
    iVar18 = *(int *)((longlong)param_2 + 0xc) + 4;
    if (iVar18 <= (int)param_2[1]) {
      puVar16 = (undefined1 *)((longlong)*(int *)((longlong)param_2 + 0xc) + *param_2);
      uVar14 = CONCAT31(CONCAT21(CONCAT11(*puVar16,puVar16[1]),puVar16[2]),puVar16[3]);
      *(int *)((longlong)param_2 + 0xc) = iVar18;
      goto LAB_1404f27e7;
    }
  }
  *(undefined1 *)(param_2 + 2) = 1;
LAB_1404f27e7:
  (**(code **)(*plVar8 + 0x30))(plVar8,uVar14);
  plVar8 = (longlong *)operator_new(0x18);
  lVar10 = local_res18;
  if (plVar8 != (longlong *)0x0) {
    *(undefined4 *)(plVar8 + 1) = 1;
    *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
    *plVar8 = (longlong)&PTR_FUN_143f3f2d0;
    plVar8[2] = (longlong)plVar9;
    plVar17 = plVar8;
  }
  pplVar2 = (longlong **)(local_res18 + 0xa0);
  local_68 = plVar9;
  local_60 = plVar17;
  SharedPointerInternals::EnableSharedFromThis(&local_68,plVar9,plVar9);
  if (pplVar2 != &local_68) {
    *pplVar2 = plVar9;
    local_68 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(lVar10 + 0xa8,&local_60);
    plVar17 = local_60;
  }
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar17 + 1;
    lVar7 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar17)(plVar17);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*plVar17 + 8))(plVar17,1);
      }
    }
  }
  FUN_1404f28c0(param_1,param_2,lVar10 + 0x28);
  return;
}



// FUNCTION 1404f28c0 FUN_1404f28c0 body=1000 status=ok
// SIG undefined FUN_1404f28c0(void)

void FUN_1404f28c0(undefined8 param_1,longlong *param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  char cVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined2 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  byte local_res10 [8];
  undefined2 *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 local_38;
  uint local_30;
  
  TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
  ::Empty(param_3 + 0x28,0);
  if (((char)param_2[2] == '\0') && (*(int *)((longlong)param_2 + 0xc) + 4 <= (int)param_2[1])) {
    puVar6 = (undefined1 *)((longlong)*(int *)((longlong)param_2 + 0xc) + *param_2);
    *(uint *)(param_3 + 8) = CONCAT31(CONCAT21(CONCAT11(*puVar6,puVar6[1]),puVar6[2]),puVar6[3]);
    iVar9 = *(int *)((longlong)param_2 + 0xc);
    *(int *)((longlong)param_2 + 0xc) = iVar9 + 4;
    if (((char)param_2[2] != '\0') || ((int)param_2[1] < iVar9 + 8)) goto LAB_1404f296a;
    lVar7 = (longlong)iVar9 + *param_2;
    *(uint *)(param_3 + 0xc) =
         CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar7 + 4),*(undefined1 *)(lVar7 + 5)),
                           *(undefined1 *)(lVar7 + 6)),*(undefined1 *)(lVar7 + 7));
    *(int *)((longlong)param_2 + 0xc) = *(int *)((longlong)param_2 + 0xc) + 4;
    cVar3 = (char)param_2[2];
  }
  else {
LAB_1404f296a:
    *(undefined1 *)(param_2 + 2) = 1;
    cVar3 = '\x01';
  }
  cVar5 = '\0';
  if (cVar3 == '\0') {
    iVar9 = *(int *)((longlong)param_2 + 0xc);
    if ((int)param_2[1] <= iVar9) goto LAB_1404f2991;
    cVar5 = *(char *)((longlong)iVar9 + *param_2);
    *(int *)((longlong)param_2 + 0xc) = iVar9 + 1;
  }
  else {
LAB_1404f2991:
    *(undefined1 *)(param_2 + 2) = 1;
  }
  *(bool *)(param_3 + 0x10) = cVar5 != '\0';
  if ((char)param_2[2] == '\0') {
    iVar9 = *(int *)((longlong)param_2 + 0xc);
    if ((int)param_2[1] <= iVar9) goto LAB_1404f29be;
    cVar5 = *(char *)((longlong)iVar9 + *param_2);
    *(int *)((longlong)param_2 + 0xc) = iVar9 + 1;
  }
  else {
LAB_1404f29be:
    *(undefined1 *)(param_2 + 2) = 1;
  }
  *(bool *)(param_3 + 0x12) = cVar5 != '\0';
  if ((char)param_2[2] == '\0') {
    iVar9 = *(int *)((longlong)param_2 + 0xc);
    if ((int)param_2[1] <= iVar9) goto LAB_1404f29eb;
    cVar5 = *(char *)((longlong)iVar9 + *param_2);
    *(int *)((longlong)param_2 + 0xc) = iVar9 + 1;
  }
  else {
LAB_1404f29eb:
    *(undefined1 *)(param_2 + 2) = 1;
  }
  *(bool *)(param_3 + 0x13) = cVar5 != '\0';
  if ((char)param_2[2] == '\0') {
    iVar9 = *(int *)((longlong)param_2 + 0xc);
    if ((int)param_2[1] <= iVar9) goto LAB_1404f2a18;
    cVar5 = *(char *)((longlong)iVar9 + *param_2);
    *(int *)((longlong)param_2 + 0xc) = iVar9 + 1;
  }
  else {
LAB_1404f2a18:
    *(undefined1 *)(param_2 + 2) = 1;
  }
  *(bool *)(param_3 + 0x14) = cVar5 != '\0';
  if ((char)param_2[2] == '\0') {
    iVar9 = *(int *)((longlong)param_2 + 0xc);
    if ((int)param_2[1] <= iVar9) goto LAB_1404f2a45;
    cVar5 = *(char *)((longlong)iVar9 + *param_2);
    *(int *)((longlong)param_2 + 0xc) = iVar9 + 1;
  }
  else {
LAB_1404f2a45:
    *(undefined1 *)(param_2 + 2) = 1;
  }
  *(bool *)(param_3 + 0x11) = cVar5 != '\0';
  if ((char)param_2[2] == '\0') {
    iVar9 = *(int *)((longlong)param_2 + 0xc);
    if ((int)param_2[1] <= iVar9) goto LAB_1404f2a72;
    cVar5 = *(char *)((longlong)iVar9 + *param_2);
    *(int *)((longlong)param_2 + 0xc) = iVar9 + 1;
  }
  else {
LAB_1404f2a72:
    *(undefined1 *)(param_2 + 2) = 1;
  }
  *(bool *)(param_3 + 0x15) = cVar5 != '\0';
  if ((char)param_2[2] == '\0') {
    iVar9 = *(int *)((longlong)param_2 + 0xc);
    if ((int)param_2[1] <= iVar9) goto LAB_1404f2a9f;
    cVar5 = *(char *)((longlong)iVar9 + *param_2);
    *(int *)((longlong)param_2 + 0xc) = iVar9 + 1;
  }
  else {
LAB_1404f2a9f:
    *(undefined1 *)(param_2 + 2) = 1;
  }
  *(bool *)(param_3 + 0x16) = cVar5 != '\0';
  if ((char)param_2[2] == '\0') {
    iVar9 = *(int *)((longlong)param_2 + 0xc);
    if ((int)param_2[1] <= iVar9) goto LAB_1404f2acc;
    cVar5 = *(char *)((longlong)iVar9 + *param_2);
    *(int *)((longlong)param_2 + 0xc) = iVar9 + 1;
  }
  else {
LAB_1404f2acc:
    *(undefined1 *)(param_2 + 2) = 1;
  }
  *(bool *)(param_3 + 0x17) = cVar5 != '\0';
  if ((char)param_2[2] == '\0') {
    iVar9 = *(int *)((longlong)param_2 + 0xc);
    if ((int)param_2[1] <= iVar9) goto LAB_1404f2af9;
    cVar5 = *(char *)((longlong)iVar9 + *param_2);
    *(int *)((longlong)param_2 + 0xc) = iVar9 + 1;
  }
  else {
LAB_1404f2af9:
    *(undefined1 *)(param_2 + 2) = 1;
  }
  *(bool *)(param_3 + 0x18) = cVar5 != '\0';
  if ((char)param_2[2] == '\0') {
    iVar9 = *(int *)((longlong)param_2 + 0xc) + 4;
    if (iVar9 <= (int)param_2[1]) {
      puVar6 = (undefined1 *)((longlong)*(int *)((longlong)param_2 + 0xc) + *param_2);
      iVar11 = 0;
      iVar10 = CONCAT31(CONCAT21(CONCAT11(*puVar6,puVar6[1]),puVar6[2]),puVar6[3]);
      *(int *)((longlong)param_2 + 0xc) = iVar9;
      bVar12 = local_res10[0];
      if (0 < iVar10) {
        do {
          if ((char)param_2[2] != '\0') break;
          local_48[0] = 0;
          local_30 = 0;
          local_58 = (undefined2 *)0x0;
          local_40 = 0;
          local_38 = 0;
          local_50 = 0;
          FUN_1404acbf0(param_2,&local_58);
          puVar2 = local_58;
          puVar8 = &DAT_143f3eda8;
          if ((int)local_50 != 0) {
            puVar8 = local_58;
          }
          puVar4 = (undefined8 *)FName::FName(local_res10,puVar8,1);
          uVar1 = *puVar4;
          if (puVar2 != (undefined2 *)0x0) {
            FMemory::Free(puVar2);
          }
          FUN_1404e9220(param_2,local_48);
          if ((char)param_2[2] == '\0') {
            iVar9 = *(int *)((longlong)param_2 + 0xc);
            if (iVar9 < (int)param_2[1]) {
              bVar12 = *(byte *)((longlong)iVar9 + *param_2);
              *(int *)((longlong)param_2 + 0xc) = iVar9 + 1;
            }
            else {
              *(undefined1 *)(param_2 + 2) = 1;
            }
            local_30 = (uint)bVar12;
          }
          FUN_1404b6080(param_3,uVar1,local_48);
          FVariantData::Empty(local_48);
          iVar11 = iVar11 + 1;
        } while (iVar11 < iVar10);
      }
      goto LAB_1404f2c5f;
    }
  }
  *(undefined1 *)(param_2 + 2) = 1;
LAB_1404f2c5f:
  if ((char)param_2[2] == '\0') {
    return;
  }
  TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
  ::Empty(param_3 + 0x28,0);
  return;
}



// FUNCTION 1404f2cb0 FUN_1404f2cb0 body=240 status=ok
// SIG undefined FUN_1404f2cb0(void)

void FUN_1404f2cb0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  lVar4 = FUN_1404f03e0();
  iVar3 = 1;
  if (lVar4 != 0) {
    plVar1 = (longlong *)(lVar4 + 0xf0);
    iVar3 = TArray<TSharedPtr<FUniqueNetId_const_,0>,FDefaultAllocator>::
            IndexOfByPredicate<FUniqueNetIdMatcher>(plVar1,*param_3);
    if (iVar3 == -1) {
      iVar3 = *(int *)(lVar4 + 0xf8);
      *(int *)(lVar4 + 0xf8) = iVar3 + 1;
      if (*(int *)(lVar4 + 0xfc) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar3);
      }
      puVar5 = (undefined8 *)((longlong)iVar3 * 0x10 + *plVar1);
      *puVar5 = *param_3;
      lVar2 = param_3[1];
      puVar5[1] = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      FUN_1404f2e00(param_1,param_3);
      if (*(int *)(lVar4 + 0xb4) < 1) {
        if (0 < *(int *)(lVar4 + 0xb0)) {
          *(int *)(lVar4 + 0xb0) = *(int *)(lVar4 + 0xb0) + -1;
        }
      }
      else {
        *(int *)(lVar4 + 0xb4) = *(int *)(lVar4 + 0xb4) + -1;
      }
    }
    else {
      FUN_1404f2e00(param_1,param_3);
    }
    iVar3 = 0;
  }
  (**(code **)(*param_1 + 0x2f0))(param_1,param_2,param_3,iVar3 + 1);
  return;
}



// FUNCTION 1404f2da0 FUN_1404f2da0 body=96 status=ok
// SIG undefined FUN_1404f2da0(void)

void FUN_1404f2da0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_3;
  lVar1 = (longlong)(int)param_3[1] * 0x10 + lVar2;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x10) {
    (**(code **)(*param_1 + 0x2d0))(param_1,param_2,lVar2);
  }
  return;
}



// FUNCTION 1404f2e00 FUN_1404f2e00 body=151 status=ok
// SIG undefined FUN_1404f2e00(void)

void FUN_1404f2e00(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong *local_18;
  longlong *local_10;
  
  (**(code **)(**(longlong **)(param_1 + 0x278) + 0x40))(*(longlong **)(param_1 + 0x278),&local_18);
  if (local_18 != (longlong *)0x0) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0xf8))
                      (*(longlong **)(param_1 + 0x278),param_2);
    if (cVar5 == '\0') {
      (**(code **)(*local_18 + 0x40))(local_18,param_2);
    }
    else {
      (**(code **)(*local_18 + 0x18))();
    }
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return;
}



// FUNCTION 1404f2ea0 Rehash body=516 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FDeviceId,TArray<FKey,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FDeviceId,TArray<FKey,FDefaultAllocator>,0>,FDefaultSetAllocator>
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
        if (bVar4) goto LAB_1404f2fdf;
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
LAB_1404f2fdf:
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
        uVar5 = (int)*plVar2 - 1U & *puVar12;
        puVar12[7] = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        puVar12[6] = *(uint *)((longlong)plVar7 +
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



// FUNCTION 1404f30b0 RemoveAtSwapImpl body=255 status=ok
// SIG undefined RemoveAtSwapImpl(void)

void TArray<TSharedPtr<FUdpReassembledMessage,1>,FDefaultAllocator>::RemoveAtSwapImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  
  if (param_3 != 0) {
    plVar7 = (longlong *)(*param_1 + 8 + (longlong)param_2 * 0x10);
    iVar6 = param_3;
    do {
      plVar3 = (longlong *)*plVar7;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      plVar7 = plVar7 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar6 = (int)param_1[1];
    iVar5 = (iVar6 - param_2) - param_3;
    if (param_3 <= iVar5) {
      iVar5 = param_3;
    }
    if (iVar5 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x10),
                 (void *)((longlong)(iVar6 - iVar5) * 0x10 + *param_1),(longlong)iVar5 << 4);
      iVar6 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar6 - param_3;
    if (param_4 != '\0') {
      TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 1404f31b0 FUN_1404f31b0 body=382 status=ok
// SIG undefined FUN_1404f31b0(void)

void FUN_1404f31b0(longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  
  if (param_3 != 0) {
    puVar6 = (undefined8 *)(*param_1 + (longlong)param_2 * 0x118);
    iVar5 = param_3;
    do {
      *puVar6 = &PTR__scalar_deleting_destructor__143f7d2c8;
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(puVar6 + 0x20);
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(puVar6 + 0x1e);
      plVar3 = (longlong *)puVar6[0x1d];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      plVar3 = (longlong *)puVar6[0x1a];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      FUN_1404bf650(puVar6);
      puVar6 = puVar6 + 0x23;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar5 = (int)param_1[1];
    iVar7 = (iVar5 - param_2) - param_3;
    if (param_3 <= iVar7) {
      iVar7 = param_3;
    }
    if (iVar7 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x118),
                 (void *)((longlong)(iVar5 - iVar7) * 0x118 + *param_1),(longlong)iVar7 * 0x118);
      iVar5 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar5 - param_3;
    if (param_4 != '\0') {
      FUN_1404f3460(param_1);
    }
  }
  return;
}



// FUNCTION 1404f3330 FUN_1404f3330 body=155 status=ok
// SIG undefined FUN_1404f3330(void)

void FUN_1404f3330(longlong param_1,longlong param_2)

{
  BOOL BVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x318));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x318));
  }
  uVar3 = 0;
  if (0 < *(int *)(param_1 + 0x348)) {
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0x340) + 0xb8);
    uVar4 = uVar3;
    do {
      if (*plVar2 == param_2) {
        FUN_1404f31b0(param_1 + 0x340,uVar4,1,1);
        break;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
      uVar3 = uVar3 + 1;
      plVar2 = plVar2 + 0x23;
    } while ((longlong)uVar3 < (longlong)*(int *)(param_1 + 0x348));
  }
                    /* WARNING: Could not recover jumptable at 0x0001404f33c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x318));
  return;
}



// FUNCTION 1404f33d0 FUN_1404f33d0 body=138 status=ok
// SIG undefined FUN_1404f33d0(void)

void FUN_1404f33d0(longlong *param_1)

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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x118,0);
  iVar4 = (int)(uVar3 / 0x118);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x118,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 1404f3460 FUN_1404f3460 body=165 status=ok
// SIG undefined FUN_1404f3460(void)

ulonglong FUN_1404f3460(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  iVar4 = (int)param_1[1];
  uVar2 = (ulonglong)(iVar5 - iVar4);
  if ((0x3fff < uVar2 * 0x118) || (uVar2 = (ulonglong)(uint)(iVar5 * 2), iVar4 * 3 < iVar5 * 2)) {
    if (0x40 < (uint)(iVar5 - iVar4)) {
      if (0 < iVar4) {
        uVar3 = FMemory::QuantizeSize((longlong)iVar4 * 0x118,0);
        iVar5 = *(int *)((longlong)param_1 + 0xc);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        uVar2 = SUB168(ZEXT816(0xea0ea0ea0ea0ea0f) * auVar1,0);
        iVar4 = (int)(uVar3 / 0x118);
      }
      goto LAB_1404f34d4;
    }
    if (iVar4 == 0) goto LAB_1404f34d4;
  }
  iVar4 = iVar5;
LAB_1404f34d4:
  if (iVar4 != iVar5) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      uVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x118,0);
      *param_1 = uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 1404f3530 FUN_1404f3530 body=499 status=ok
// SIG undefined FUN_1404f3530(void)

undefined8 FUN_1404f3530(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  longlong local_18;
  longlong *local_10;
  
  FUN_1404b6a10();
  plVar4 = *(longlong **)(param_1 + 0xa8);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4,1);
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  plVar4 = *(longlong **)(param_1 + 0xa0);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4,1);
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  plVar4 = (longlong *)(param_1 + 0x90);
  if (*plVar4 != 0) {
    if (*(longlong *)(param_1 + 0x98) != 0) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x98) + 8);
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 0;
      }
      UNLOCK();
    }
    local_30 = (longlong *)0x0;
    if (plVar4 != &local_38) {
      *plVar4 = 0;
      local_38 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x98,&local_30);
      plVar4 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_30 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
          }
        }
      }
    }
  }
  plVar4 = (longlong *)(param_1 + 0x80);
  if (*plVar4 != 0) {
    if (*(longlong *)(param_1 + 0x88) != 0) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x88) + 8);
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 0;
      }
      UNLOCK();
    }
    local_20 = (longlong *)0x0;
    if (plVar4 != &local_28) {
      *plVar4 = 0;
      local_28 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x88,&local_20);
      plVar4 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_20 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_20 + 8))(local_20,1);
          }
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    if (*(longlong *)(param_1 + 0x78) != 0) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x78) + 8);
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 0;
      }
      UNLOCK();
    }
    local_10 = (longlong *)0x0;
    if ((longlong *)(param_1 + 0x70) != &local_18) {
      *(longlong *)(param_1 + 0x70) = 0;
      local_18 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x78,&local_10);
      plVar4 = local_10;
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_10 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_10)(local_10);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_10 + 8))(local_10,1);
          }
        }
      }
    }
  }
  return 1;
}



// FUNCTION 1404f3730 FUN_1404f3730 body=127 status=ok
// SIG undefined FUN_1404f3730(void)

void FUN_1404f3730(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = -0x7fffbffb;
  lVar2 = FUN_1404f03e0();
  if ((lVar2 != 0) && ((*(int *)(lVar2 + 0x110) - 2U & 0xfffffffb) == 0)) {
    iVar1 = FUN_1404f4ef0(param_1);
    *(undefined4 *)(lVar2 + 0x110) = 4;
    if (iVar1 == 0x3e5) {
      return;
    }
  }
  (**(code **)(*param_1 + 0x78))(param_1,param_2,(iVar1 != 0) + '\x01');
  return;
}



// FUNCTION 1404f37b0 FUN_1404f37b0 body=28 status=ok
// SIG undefined FUN_1404f37b0(void)

void FUN_1404f37b0(longlong param_1)

{
  FUN_1404e9bc0(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



// FUNCTION 1404f37d0 FUN_1404f37d0 body=28 status=ok
// SIG undefined FUN_1404f37d0(void)

void FUN_1404f37d0(longlong param_1)

{
  FUN_1404e9de0(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



// FUNCTION 1404f37f0 FUN_1404f37f0 body=28 status=ok
// SIG undefined FUN_1404f37f0(void)

void FUN_1404f37f0(longlong param_1)

{
  FUN_1404ea090(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



// FUNCTION 1404f3810 FUN_1404f3810 body=28 status=ok
// SIG undefined FUN_1404f3810(void)

void FUN_1404f3810(longlong param_1)

{
  FUN_1404ea550(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



// FUNCTION 1404f3830 FUN_1404f3830 body=28 status=ok
// SIG undefined FUN_1404f3830(void)

void FUN_1404f3830(longlong param_1)

{
  FUN_1404ea770(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



// FUNCTION 1404f3850 FUN_1404f3850 body=91 status=ok
// SIG undefined FUN_1404f3850(void)

undefined1 FUN_1404f3850(longlong param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_1404b7130();
  if (cVar1 == '\0') {
    return 0;
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1404afe30();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1404b6d30(*(longlong *)(param_1 + 0x70) + 0x280,param_2);
  }
  return 1;
}



// FUNCTION 1404f38b0 FUN_1404f38b0 body=196 status=ok
// SIG undefined FUN_1404f38b0(void)

undefined8 FUN_1404f38b0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  bool bVar4;
  wchar_t *pwVar5;
  longlong local_38 [2];
  longlong local_28 [2];
  
  bVar4 = false;
  puVar3 = &DAT_143f3eda8;
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 == (longlong *)0x0) {
    pwVar5 = L"INVALID";
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x68))(plVar1,local_28,1);
    if (*(int *)(puVar2 + 1) == 0) {
      pwVar5 = L"";
      bVar4 = true;
    }
    else {
      pwVar5 = (wchar_t *)*puVar2;
      bVar4 = true;
    }
  }
  puVar2 = (undefined8 *)
           (**(code **)(*(longlong *)(param_1 + 0x18) + 0x30))(param_1 + 0x18,local_38);
  if (*(int *)(puVar2 + 1) != 0) {
    puVar3 = (undefined2 *)*puVar2;
  }
  FString::PrintfImpl(param_2,L"HostIP: %s SessionId: %s",pwVar5,puVar3);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if ((bVar4) && (local_28[0] != 0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1404f3980 FUN_1404f3980 body=75 status=ok
// SIG undefined FUN_1404f3980(void)

undefined8 * FUN_1404f3980(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x20;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Convert<char,wchar_t>
            (*param_2,0x20,"FOnlineAsyncTaskGenericCallable",0x20,0x3f);
  return param_2;
}



// FUNCTION 1404f39d0 FUN_1404f39d0 body=75 status=ok
// SIG undefined FUN_1404f39d0(void)

undefined8 * FUN_1404f39d0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x28;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Convert<char,wchar_t>
            (*param_2,0x28,"FOnlineAsyncTaskThreadedGenericCallable",0x28,0x3f);
  return param_2;
}



// FUNCTION 1404f3aa0 FUN_1404f3aa0 body=203 status=ok
// SIG undefined FUN_1404f3aa0(void)

void FUN_1404f3aa0(longlong param_1,int param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_2 == 0) {
    bVar3 = false;
    *(int *)(param_1 + 0x214) = *(int *)(param_1 + 0x214) + 1;
    iVar6 = *(int *)(param_1 + 0x214);
    iVar5 = *(int *)(param_1 + 0x208) + -1;
    lVar8 = (longlong)iVar5;
    if (-1 < iVar5) {
      lVar7 = lVar8 << 4;
      bVar3 = false;
      do {
        lVar1 = *(longlong *)(param_1 + 0x200);
        if (((*(int *)(lVar7 + 8 + lVar1) == 0) ||
            (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,0,param_3,param_4), cVar4 == '\0')) {
          bVar3 = true;
        }
        lVar7 = lVar7 + -0x10;
        lVar8 = lVar8 + -1;
      } while (-1 < lVar8);
      iVar6 = *(int *)(param_1 + 0x214);
    }
    *(int *)(param_1 + 0x214) = iVar6 + -1;
    if (bVar3) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x200),0)
      ;
    }
  }
  return;
}



// FUNCTION 1404f3b70 FUN_1404f3b70 body=222 status=ok
// SIG undefined FUN_1404f3b70(void)

void FUN_1404f3b70(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0xdc);
  iVar5 = *(int *)(param_1 + 0xd0) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 200);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_1404f3bfb:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3,param_4,param_5);
        if (cVar4 == '\0') goto LAB_1404f3bfb;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0xdc);
  }
  *(int *)(param_1 + 0xdc) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 200),0);
    return;
  }
  return;
}



// FUNCTION 1404f3c50 FUN_1404f3c50 body=196 status=ok
// SIG undefined FUN_1404f3c50(void)

void FUN_1404f3c50(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0xf4);
  iVar5 = *(int *)(param_1 + 0xe8) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0xe0);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_1404f3cc6:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3,param_4);
        if (cVar4 == '\0') goto LAB_1404f3cc6;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0xf4);
  }
  *(int *)(param_1 + 0xf4) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0xe0),0);
    return;
  }
  return;
}



// FUNCTION 1404f3d30 FUN_1404f3d30 body=189 status=ok
// SIG undefined FUN_1404f3d30(void)

void FUN_1404f3d30(longlong param_1,undefined1 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0x10c) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0x10c);
  iVar5 = *(int *)(param_1 + 0x100) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0xf8);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_1404f3da4:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3);
        if (cVar4 == '\0') goto LAB_1404f3da4;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x10c);
  }
  *(int *)(param_1 + 0x10c) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0xf8),0);
    return;
  }
  return;
}



// FUNCTION 1404f3df0 FUN_1404f3df0 body=197 status=ok
// SIG undefined FUN_1404f3df0(void)

void FUN_1404f3df0(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  iVar6 = *(int *)(param_1 + 100);
  bVar3 = false;
  iVar5 = *(int *)(param_1 + 0x58) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x50);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_1404f3e67:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3,param_4);
        if (cVar4 == '\0') goto LAB_1404f3e67;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 100);
  }
  *(int *)(param_1 + 100) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x50),0);
    return;
  }
  return;
}



// FUNCTION 1404f3ec0 FUN_1404f3ec0 body=196 status=ok
// SIG undefined FUN_1404f3ec0(void)

void FUN_1404f3ec0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x184) = *(int *)(param_1 + 0x184) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0x184);
  iVar5 = *(int *)(param_1 + 0x178) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x170);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_1404f3f36:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3,param_4);
        if (cVar4 == '\0') goto LAB_1404f3f36;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x184);
  }
  *(int *)(param_1 + 0x184) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x170),0);
    return;
  }
  return;
}



// FUNCTION 1404f3f90 FUN_1404f3f90 body=224 status=ok
// SIG undefined FUN_1404f3f90(void)

void FUN_1404f3f90(longlong param_1,undefined1 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x16c) = *(int *)(param_1 + 0x16c) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0x16c);
  iVar5 = *(int *)(param_1 + 0x160) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x158);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_1404f401d:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3,param_4,param_5);
        if (cVar4 == '\0') goto LAB_1404f401d;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x16c);
  }
  *(int *)(param_1 + 0x16c) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x158),0);
    return;
  }
  return;
}



// FUNCTION 1404f4080 FUN_1404f4080 body=192 status=ok
// SIG undefined FUN_1404f4080(void)

void FUN_1404f4080(longlong param_1,int param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (param_2 == 0) {
    bVar2 = false;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    iVar5 = *(int *)(param_1 + 0x1c);
    iVar4 = *(int *)(param_1 + 0x10) + -1;
    lVar7 = (longlong)iVar4;
    if (-1 < iVar4) {
      lVar6 = lVar7 << 4;
      bVar2 = false;
      do {
        if (((*(int *)(lVar6 + 8 + *(longlong *)(param_1 + 8)) == 0) ||
            (plVar1 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 8)), plVar1 == (longlong *)0x0)
            ) || (cVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,0,param_3,param_4), cVar3 == '\0')) {
          bVar2 = true;
        }
        lVar6 = lVar6 + -0x10;
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
      iVar5 = *(int *)(param_1 + 0x1c);
    }
    *(int *)(param_1 + 0x1c) = iVar5 + -1;
    if (bVar2) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1 + 8,0);
    }
  }
  return;
}



// FUNCTION 1404f4140 FUN_1404f4140 body=196 status=ok
// SIG undefined FUN_1404f4140(void)

void FUN_1404f4140(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  iVar6 = *(int *)(param_1 + 0x4c);
  bVar3 = false;
  iVar5 = *(int *)(param_1 + 0x40) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x38);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_1404f41b6:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3,param_4);
        if (cVar4 == '\0') goto LAB_1404f41b6;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x4c);
  }
  *(int *)(param_1 + 0x4c) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x38),0);
    return;
  }
  return;
}



// FUNCTION 1404f4210 FUN_1404f4210 body=184 status=ok
// SIG undefined FUN_1404f4210(void)

void FUN_1404f4210(longlong param_1,int param_2,undefined1 param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (param_2 == 0) {
    bVar2 = false;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    iVar5 = *(int *)(param_1 + 0x34);
    iVar4 = *(int *)(param_1 + 0x28) + -1;
    lVar7 = (longlong)iVar4;
    if (-1 < iVar4) {
      lVar6 = lVar7 << 4;
      bVar2 = false;
      do {
        if (((*(int *)(lVar6 + 8 + *(longlong *)(param_1 + 0x20)) == 0) ||
            (plVar1 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x20)),
            plVar1 == (longlong *)0x0)) ||
           (cVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,0,param_3), cVar3 == '\0')) {
          bVar2 = true;
        }
        lVar6 = lVar6 + -0x10;
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
      iVar5 = *(int *)(param_1 + 0x34);
    }
    *(int *)(param_1 + 0x34) = iVar5 + -1;
    if (bVar2) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1 + 0x20,0);
    }
  }
  return;
}



// FUNCTION 1404f42d0 FUN_1404f42d0 body=188 status=ok
// SIG undefined FUN_1404f42d0(void)

void FUN_1404f42d0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x1e4) = *(int *)(param_1 + 0x1e4) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0x1e4);
  iVar5 = *(int *)(param_1 + 0x1d8) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x1d0);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_1404f4343:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3);
        if (cVar4 == '\0') goto LAB_1404f4343;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x1e4);
  }
  *(int *)(param_1 + 0x1e4) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x1d0),0);
    return;
  }
  return;
}



// FUNCTION 1404f4390 FUN_1404f4390 body=196 status=ok
// SIG undefined FUN_1404f4390(void)

void FUN_1404f4390(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0xac);
  iVar5 = *(int *)(param_1 + 0xa0) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x98);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_1404f4406:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3,param_4);
        if (cVar4 == '\0') goto LAB_1404f4406;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0xac);
  }
  *(int *)(param_1 + 0xac) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x98),0);
    return;
  }
  return;
}



// FUNCTION 1404f4460 FUN_1404f4460 body=196 status=ok
// SIG undefined FUN_1404f4460(void)

void FUN_1404f4460(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0xc4);
  iVar5 = *(int *)(param_1 + 0xb8) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0xb0);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_1404f44d6:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3,param_4);
        if (cVar4 == '\0') goto LAB_1404f44d6;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0xc4);
  }
  *(int *)(param_1 + 0xc4) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0xb0),0);
    return;
  }
  return;
}



// FUNCTION 1404f4530 FUN_1404f4530 body=196 status=ok
// SIG undefined FUN_1404f4530(void)

void FUN_1404f4530(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0x154);
  iVar5 = *(int *)(param_1 + 0x148) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x140);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_1404f45a6:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3,param_4);
        if (cVar4 == '\0') goto LAB_1404f45a6;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x154);
  }
  *(int *)(param_1 + 0x154) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x140),0);
    return;
  }
  return;
}



// FUNCTION 1404f4600 FUN_1404f4600 body=188 status=ok
// SIG undefined FUN_1404f4600(void)

void FUN_1404f4600(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0xf4);
  iVar5 = *(int *)(param_1 + 0xe8) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0xe0);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_1404f4673:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3);
        if (cVar4 == '\0') goto LAB_1404f4673;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0xf4);
  }
  *(int *)(param_1 + 0xf4) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0xe0),0);
    return;
  }
  return;
}



// FUNCTION 1404f46c0 FUN_1404f46c0 body=204 status=ok
// SIG undefined FUN_1404f46c0(void)

void FUN_1404f46c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x274) = *(int *)(param_1 + 0x274) + 1;
  iVar6 = *(int *)(param_1 + 0x274);
  bVar3 = false;
  iVar5 = *(int *)(param_1 + 0x268) + -1;
  lVar7 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar8 = lVar7 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x260);
      if ((*(int *)(lVar8 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar8 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_1404f473a:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3,param_4);
        if (cVar4 == '\0') goto LAB_1404f473a;
      }
      lVar8 = lVar8 + -0x10;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
    iVar6 = *(int *)(param_1 + 0x274);
  }
  *(int *)(param_1 + 0x274) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x260),0);
    return;
  }
  return;
}



// FUNCTION 1404f47a0 FUN_1404f47a0 body=189 status=ok
// SIG undefined FUN_1404f47a0(void)

void FUN_1404f47a0(longlong param_1,undefined1 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0xdc);
  iVar5 = *(int *)(param_1 + 0xd0) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 200);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_1404f4814:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3);
        if (cVar4 == '\0') goto LAB_1404f4814;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0xdc);
  }
  *(int *)(param_1 + 0xdc) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 200),0);
    return;
  }
  return;
}



// FUNCTION 1404f4860 FUN_1404f4860 body=197 status=ok
// SIG undefined FUN_1404f4860(void)

void FUN_1404f4860(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
  iVar6 = *(int *)(param_1 + 0x7c);
  bVar3 = false;
  iVar5 = *(int *)(param_1 + 0x70) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x68);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_1404f48d7:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3,param_4);
        if (cVar4 == '\0') goto LAB_1404f48d7;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x7c);
  }
  *(int *)(param_1 + 0x7c) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x68),0);
    return;
  }
  return;
}



// FUNCTION 1404f4930 FUN_1404f4930 body=210 status=ok
// SIG undefined FUN_1404f4930(void)

void FUN_1404f4930(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  iVar6 = *(int *)(param_1 + 0x1c);
  bVar3 = false;
  iVar5 = *(int *)(param_1 + 0x10) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 8);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_1404f49af:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3,param_4,param_5);
        if (cVar4 == '\0') goto LAB_1404f49af;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x1c);
  }
  *(int *)(param_1 + 0x1c) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 8),0);
    return;
  }
  return;
}



// FUNCTION 1404f4a40 FUN_1404f4a40 body=164 status=ok
// SIG undefined FUN_1404f4a40(void)

void FUN_1404f4a40(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x1cc) = *(int *)(param_1 + 0x1cc) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0x1cc);
  iVar5 = *(int *)(param_1 + 0x1c0) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x1b8);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_1404f4aa0:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2);
        if (cVar4 == '\0') goto LAB_1404f4aa0;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x1cc);
  }
  *(int *)(param_1 + 0x1cc) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x1b8),0);
    return;
  }
  return;
}



// FUNCTION 1404f4af0 FUN_1404f4af0 body=196 status=ok
// SIG undefined FUN_1404f4af0(void)

void FUN_1404f4af0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x13c) = *(int *)(param_1 + 0x13c) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0x13c);
  iVar5 = *(int *)(param_1 + 0x130) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x128);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_1404f4b66:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3,param_4);
        if (cVar4 == '\0') goto LAB_1404f4b66;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x13c);
  }
  *(int *)(param_1 + 0x13c) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x128),0);
    return;
  }
  return;
}



// FUNCTION 1404f4bc0 FUN_1404f4bc0 body=170 status=ok
// SIG undefined FUN_1404f4bc0(void)

void FUN_1404f4bc0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x25c) = *(int *)(param_1 + 0x25c) + 1;
  iVar6 = *(int *)(param_1 + 0x25c);
  bVar3 = false;
  iVar5 = *(int *)(param_1 + 0x250) + -1;
  lVar7 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar8 = lVar7 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x248);
      if ((*(int *)(lVar8 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar8 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_1404f4c22:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2);
        if (cVar4 == '\0') goto LAB_1404f4c22;
      }
      lVar8 = lVar8 + -0x10;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
    iVar6 = *(int *)(param_1 + 0x25c);
  }
  *(int *)(param_1 + 0x25c) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x248),0);
    return;
  }
  return;
}



// FUNCTION 1404f4c70 FUN_1404f4c70 body=222 status=ok
// SIG undefined FUN_1404f4c70(void)

void FUN_1404f4c70(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0x124);
  iVar5 = *(int *)(param_1 + 0x118) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x110);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_1404f4cfb:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3,param_4,param_5);
        if (cVar4 == '\0') goto LAB_1404f4cfb;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x124);
  }
  *(int *)(param_1 + 0x124) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x110),0);
    return;
  }
  return;
}



// FUNCTION 1404f4da0 FUN_1404f4da0 body=324 status=ok
// SIG undefined FUN_1404f4da0(void)

void FUN_1404f4da0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uVar7;
  longlong *local_28;
  longlong *local_20;
  
  lVar6 = FUN_1404f03e0();
  if (lVar6 == 0) {
    uVar7 = 2;
  }
  else {
    iVar5 = TArray<TSharedPtr<FUniqueNetId_const_,0>,FDefaultAllocator>::
            IndexOfByPredicate<FUniqueNetIdMatcher>(lVar6 + 0xf0,*param_3);
    uVar7 = 1;
    if (iVar5 != -1) {
      TArray<TSharedPtr<FUdpReassembledMessage,1>,FDefaultAllocator>::RemoveAtSwapImpl
                (lVar6 + 0xf0,iVar5,1,1);
      (**(code **)(*(longlong *)param_1[0x4f] + 0x40))((longlong *)param_1[0x4f],&local_28);
      if (((local_28 != (longlong *)0x0) &&
          (cVar4 = (**(code **)(*(longlong *)param_1[0x4f] + 0xf8))
                             ((longlong *)param_1[0x4f],param_3), cVar4 == '\0')) &&
         (local_28 != (longlong *)0x0)) {
        (**(code **)(*local_28 + 0x48))(local_28,param_3);
      }
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_20 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar2 = (int *)((longlong)local_20 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_20 + 8))(local_20,1);
          }
        }
      }
      if (*(int *)(lVar6 + 0xb4) < *(int *)(lVar6 + 0x30)) {
        *(int *)(lVar6 + 0xb4) = *(int *)(lVar6 + 0xb4) + 1;
      }
      else if (*(int *)(lVar6 + 0xb0) < *(int *)(lVar6 + 0x34)) {
        *(int *)(lVar6 + 0xb0) = *(int *)(lVar6 + 0xb0) + 1;
      }
    }
  }
  (**(code **)(*param_1 + 0x318))(param_1,param_2,param_3,uVar7);
  return;
}



// FUNCTION 1404f4ef0 FUN_1404f4ef0 body=537 status=ok
// SIG undefined FUN_1404f4ef0(void)

undefined8 FUN_1404f4ef0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  bool bVar3;
  char cVar4;
  BOOL BVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *local_28;
  int local_20;
  
  uVar9 = 0;
  BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x318));
  if (BVar5 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x318));
  }
  iVar7 = 0;
  bVar3 = false;
  if (0 < *(int *)(param_1 + 0x348)) {
    lVar8 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x340);
      if (((*(char *)(lVar8 + 0x38 + lVar1) != '\0') &&
          ((cVar4 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0xe0))(), cVar4 != '\0' ||
           (((*(longlong *)(lVar8 + 200 + lVar1) != 0 &&
             (puVar2 = *(undefined8 **)(lVar8 + 8 + lVar1), puVar2 != (undefined8 *)0x0)) &&
            (cVar4 = (**(code **)*puVar2)(), cVar4 != '\0')))))) &&
         (((*(char *)(lVar8 + 0x3a + lVar1) != '\0' &&
           ((*(int *)(lVar8 + 0x110 + lVar1) != 4 ||
            ((*(char *)(lVar8 + 0x39 + lVar1) != '\0' && (0 < *(int *)(lVar8 + 0xb4 + lVar1)))))))
          || ((*(char *)(lVar8 + 0x3f + lVar1) != '\0' || (*(char *)(lVar8 + 0x40 + lVar1) != '\0'))
             )))) {
        bVar3 = true;
        break;
      }
      iVar7 = iVar7 + 1;
      lVar8 = lVar8 + 0x118;
      bVar3 = false;
    } while (iVar7 < *(int *)(param_1 + 0x348));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x318));
  if (bVar3) {
    if (*(int *)(param_1 + 0x2b0) == 0) {
      local_28 = (longlong *)0x0;
      plVar6 = (longlong *)FMemory::Realloc(0,0x30,0);
      local_20 = 3;
      local_28 = plVar6;
      if (plVar6 != (longlong *)0x0) {
        plVar6[1] = param_1;
        *plVar6 = (longlong)&DAT_143f3ed00;
        plVar6[2] = (longlong)FUN_1404f1a70;
        lVar8 = FDelegateHandle::GenerateNewID();
        plVar6[4] = lVar8;
        *plVar6 = (longlong)&PTR_GetPoolName_143f3ed48;
      }
      cVar4 = FUN_1404b0b90(param_1 + 0x280,&local_28);
      if (cVar4 == '\0') {
        uVar9 = 0x80004005;
        FUN_1404b6bd0(param_1 + 0x280);
      }
      if (local_20 != 0) {
        if (local_28 == (longlong *)0x0) {
          return uVar9;
        }
        (**(code **)(*local_28 + 0x28))(local_28,0);
        if (local_28 != (longlong *)0x0) {
          local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
        }
        local_20 = 0;
      }
      if (local_28 != (longlong *)0x0) {
        FMemory::Free(local_28);
        return uVar9;
      }
    }
  }
  else if (*(int *)(param_1 + 0x2b0) != 2) {
    FUN_1404b6bd0(param_1 + 0x280);
  }
  return uVar9;
}



// FUNCTION 1404f5110 FUN_1404f5110 body=188 status=ok
// SIG undefined FUN_1404f5110(void)

void FUN_1404f5110(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1404f03e0();
  if (lVar1 == 0) {
    uVar2 = 2;
  }
  else {
    if (lVar1 + 0x28 != param_3) {
      *(undefined4 *)(lVar1 + 0x30) = *(undefined4 *)(param_3 + 8);
      *(undefined4 *)(lVar1 + 0x34) = *(undefined4 *)(param_3 + 0xc);
      *(undefined1 *)(lVar1 + 0x38) = *(undefined1 *)(param_3 + 0x10);
      *(undefined1 *)(lVar1 + 0x39) = *(undefined1 *)(param_3 + 0x11);
      *(undefined1 *)(lVar1 + 0x3c) = *(undefined1 *)(param_3 + 0x14);
      *(undefined1 *)(lVar1 + 0x3d) = *(undefined1 *)(param_3 + 0x15);
      *(undefined1 *)(lVar1 + 0x3f) = *(undefined1 *)(param_3 + 0x17);
      *(undefined1 *)(lVar1 + 0x40) = *(undefined1 *)(param_3 + 0x18);
      *(undefined1 *)(lVar1 + 0x41) = *(undefined1 *)(param_3 + 0x19);
      *(undefined4 *)(lVar1 + 0x44) = *(undefined4 *)(param_3 + 0x1c);
      *(undefined4 *)(lVar1 + 0x48) = *(undefined4 *)(param_3 + 0x20);
      *(undefined4 *)(lVar1 + 0x4c) = *(undefined4 *)(param_3 + 0x24);
      TSet<TTuple<FName,FOnlineSessionSearchParam>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>,FDefaultSetAllocator>
      ::operator=(lVar1 + 0x50,param_3 + 0x28);
    }
    FUN_1404f4ef0(param_1);
    uVar2 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001404f51c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2,uVar2);
  return;
}



// FUNCTION 1404f51d0 FUN_1404f51d0 body=474 status=ok
// SIG undefined FUN_1404f51d0(void)

void FUN_1404f51d0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  void *_Src;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  size_t sVar9;
  void *_Src_00;
  double dVar10;
  LARGE_INTEGER local_res8;
  longlong local_40 [2];
  void *local_30;
  int local_28;
  undefined4 local_24;
  
  uVar4 = *param_2;
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  FString::FString(local_40,param_3);
  local_28 = *(int *)(param_4 + 1);
  sVar9 = (size_t)local_28;
  _Src_00 = (void *)0x0;
  _Src = (void *)*param_4;
  local_30 = (void *)0x0;
  if (local_28 == 0) {
    local_24 = 0;
  }
  else {
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_30,local_28,0);
    _Src_00 = local_30;
    _guard_xfg_dispatch_icall_nop(local_30,_Src,sVar9);
  }
  uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0xa0);
  puVar8 = (undefined8 *)operator_new(0x50);
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    *puVar8 = &PTR_FUN_143f76b48;
    QueryPerformanceCounter(&local_res8);
    dVar10 = (double)local_res8.QuadPart * DAT_1468b02f8;
    *puVar8 = &PTR__scalar_deleting_destructor__143f7dc40;
    *(undefined1 *)(puVar8 + 2) = 0;
    puVar8[1] = dVar10 + 16777216.0;
    puVar8[3] = param_1;
    puVar8[4] = uVar4;
    puVar8[5] = plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    FString::FString(puVar8 + 6,local_40);
    _Src_00 = local_30;
    sVar9 = (size_t)local_28;
    puVar8[8] = 0;
    *(int *)(puVar8 + 9) = local_28;
    if (local_28 == 0) {
      *(undefined4 *)((longlong)puVar8 + 0x4c) = 0;
    }
    else {
      TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar8 + 8,local_28,0);
      _guard_xfg_dispatch_icall_nop((void *)puVar8[8],_Src_00,sVar9);
    }
  }
  FOnlineAsyncTaskManager::AddToInQueue(uVar6,puVar8);
  if (_Src_00 != (void *)0x0) {
    FMemory::Free(_Src_00);
  }
  if (local_40[0] != 0) {
    FMemory::Free();
  }
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
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}


