// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1413c3fb0 FUN_1413c3fb0 body=90 status=ok
// SIG undefined FUN_1413c3fb0(void)

void FUN_1413c3fb0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_1449a0460;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 100) = 0;
    puVar1[0xe] = 0;
    *(undefined4 *)(puVar1 + 0xf) = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
  }
  return;
}



// FUNCTION 1413c4020 FUN_1413c4020 body=181 status=ok
// SIG undefined FUN_1413c4020(void)

void FUN_1413c4020(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142c8d050(puVar1,param_1);
    *puVar1 = &PTR_FUN_1449a0820;
    puVar1[5] = &PTR_FUN_1449a0808;
    *(undefined4 *)(puVar1 + 6) = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0xd) = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    *(undefined4 *)(puVar1 + 0x13) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x14) = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined4 *)(puVar1 + 0x1a) = 0x3f800000;
  }
  return;
}



// FUNCTION 1413c4100 FUN_1413c4100 body=43 status=ok
// SIG undefined FUN_1413c4100(void)

undefined8 * FUN_1413c4100(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1440780a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1413c4130 FUN_1413c4130 body=43 status=ok
// SIG undefined FUN_1413c4130(void)

undefined8 * FUN_1413c4130(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1440780a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 1413c4160 FUN_1413c4160 body=143 status=ok
// SIG undefined FUN_1413c4160(void)

longlong FUN_1413c4160(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<ULevel_*,TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x30,0);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 1413c41f0 FUN_1413c41f0 body=63 status=ok
// SIG undefined FUN_1413c41f0(void)

longlong FUN_1413c41f0(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_1440780a8;
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 1413c42e0 FUN_1413c42e0 body=299 status=ok
// SIG undefined FUN_1413c42e0(void)

undefined8 FUN_1413c42e0(undefined8 param_1,undefined4 *param_2,longlong param_3,int param_4)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (param_4 != 0) {
    puVar6 = (undefined8 *)(param_3 + 8);
    do {
      puVar3 = (undefined8 *)(param_2 + 2);
      *param_2 = *(undefined4 *)(puVar6 + -1);
      if (puVar3 != puVar6) {
        plVar2 = (longlong *)*puVar3;
        for (iVar4 = param_2[4]; iVar4 != 0; iVar4 = iVar4 + -1) {
          if (*plVar2 != 0) {
            FMemory::Free();
          }
          plVar2 = plVar2 + 2;
        }
        iVar4 = *(int *)(puVar6 + 1);
        puVar5 = (undefined8 *)*puVar6;
        param_2[4] = iVar4;
        if ((iVar4 == 0) && (param_2[5] == 0)) {
          param_2[5] = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar3);
          puVar3 = (undefined8 *)*puVar3;
          for (; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar3 = 0;
            iVar1 = *(int *)(puVar5 + 1);
            _Src = (void *)*puVar5;
            *(int *)(puVar3 + 1) = iVar1;
            if (iVar1 == 0) {
              *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
            }
            else {
              TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar3,iVar1,0);
              _guard_xfg_dispatch_icall_nop((void *)*puVar3,_Src,(longlong)iVar1 << 4);
            }
            puVar3 = puVar3 + 2;
            puVar5 = puVar5 + 2;
          }
        }
      }
      puVar6 = puVar6 + 3;
      param_4 = param_4 + -1;
      param_2 = param_2 + 6;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1413c4410 Copy body=158 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FSubmixEffectSubmixEQSettings>::Copy
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
        TArray<FString,FDefaultAllocator>::ResizeForCopy(param_2,iVar1);
        ::_guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar1 << 4);
      }
    }
    param_3 = param_3 + 2;
    param_2 = param_2 + 2;
  }
  return 1;
}



// FUNCTION 1413c44b0 Copy body=189 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FLevelWeatherInfo>::Copy
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
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar2);
          ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 << 3);
        }
      }
      puVar3 = puVar3 + 3;
      param_4 = param_4 + -1;
      param_2 = param_2 + 3;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1413c4570 FUN_1413c4570 body=194 status=ok
// SIG undefined FUN_1413c4570(void)

undefined8 FUN_1413c4570(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_4 != 0) {
    puVar2 = (undefined8 *)(param_3 + 0x10);
    do {
      FString::operator=(param_2,puVar2 + -2);
      puVar3 = (undefined8 *)(param_2 + 0x10);
      if (puVar3 != puVar2) {
        iVar1 = *(int *)(puVar2 + 1);
        _Src = (void *)*puVar2;
        *(int *)(param_2 + 0x18) = iVar1;
        if ((iVar1 == 0) && (*(int *)(param_2 + 0x1c) == 0)) {
          *(undefined4 *)(param_2 + 0x1c) = 0;
        }
        else {
          TArray<SWaapiPickerRow::KeyValueArgs,FDefaultAllocator>::ResizeForCopy(puVar3,iVar1);
          _guard_xfg_dispatch_icall_nop((void *)*puVar3,_Src,(longlong)iVar1 << 5);
        }
      }
      puVar2 = puVar2 + 4;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x20;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1413c4640 FUN_1413c4640 body=191 status=ok
// SIG undefined FUN_1413c4640(void)

undefined8 FUN_1413c4640(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

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
          TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 << 4);
        }
      }
      puVar3 = puVar3 + 3;
      param_4 = param_4 + -1;
      param_2 = param_2 + 3;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1413c4700 FUN_1413c4700 body=168 status=ok
// SIG undefined FUN_1413c4700(void)

undefined8 FUN_1413c4700(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      iVar2 = *(int *)(param_3 + 1);
      _Src = (void *)*param_3;
      *(int *)(param_2 + 1) = iVar2;
      if ((iVar2 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_2,iVar2);
        _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar2 << 3);
      }
    }
    puVar1 = param_3 + 2;
    uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
    uVar4 = *(undefined4 *)(param_3 + 3);
    uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
    param_3 = param_3 + 4;
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)puVar1;
    *(undefined4 *)((longlong)param_2 + 0x14) = uVar3;
    *(undefined4 *)(param_2 + 3) = uVar4;
    *(undefined4 *)((longlong)param_2 + 0x1c) = uVar5;
    param_2 = param_2 + 4;
  }
  return 1;
}



// FUNCTION 1413c47b0 FUN_1413c47b0 body=55 status=ok
// SIG undefined FUN_1413c47b0(void)

void FUN_1413c47b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14688aae0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688aae0 = GetStaticEnum(FUN_1413c53b0,uVar1,L"ELootSpawnTiming");
  }
  return;
}



// FUNCTION 1413c47f0 FUN_1413c47f0 body=55 status=ok
// SIG undefined FUN_1413c47f0(void)

void FUN_1413c47f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14688aaf0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688aaf0 = GetStaticEnum(FUN_1413c53e0,uVar1,L"ELootableOpenReason");
  }
  return;
}



// FUNCTION 1413c4830 FUN_1413c4830 body=55 status=ok
// SIG undefined FUN_1413c4830(void)

void FUN_1413c4830(void)

{
  undefined8 uVar1;
  
  if (DAT_14688aae8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688aae8 = GetStaticEnum(FUN_1413c5410,uVar1,L"EMissionDrivenLootableType");
  }
  return;
}



// FUNCTION 1413c4870 FUN_1413c4870 body=6 status=ok
// SIG undefined FUN_1413c4870(void)

undefined8 FUN_1413c4870(void)

{
  return 0xbafac079;
}



// FUNCTION 1413c4880 FUN_1413c4880 body=6 status=ok
// SIG undefined FUN_1413c4880(void)

undefined8 FUN_1413c4880(void)

{
  return 0x4d297c16;
}



// FUNCTION 1413c4890 FUN_1413c4890 body=6 status=ok
// SIG undefined FUN_1413c4890(void)

undefined8 FUN_1413c4890(void)

{
  return 0xa9000af1;
}



// FUNCTION 1413c48a0 FUN_1413c48a0 body=6 status=ok
// SIG undefined FUN_1413c48a0(void)

undefined8 FUN_1413c48a0(void)

{
  return 0x45fa0b46;
}



// FUNCTION 1413c48b0 FUN_1413c48b0 body=6 status=ok
// SIG undefined FUN_1413c48b0(void)

undefined8 FUN_1413c48b0(void)

{
  return 0xd6b94b60;
}



// FUNCTION 1413c48c0 FUN_1413c48c0 body=6 status=ok
// SIG undefined FUN_1413c48c0(void)

undefined8 FUN_1413c48c0(void)

{
  return 0xb4ba3004;
}



// FUNCTION 1413c48d0 FUN_1413c48d0 body=6 status=ok
// SIG undefined FUN_1413c48d0(void)

undefined8 FUN_1413c48d0(void)

{
  return 0x483aed4d;
}



// FUNCTION 1413c48e0 FUN_1413c48e0 body=6 status=ok
// SIG undefined FUN_1413c48e0(void)

undefined8 FUN_1413c48e0(void)

{
  return 0x5a0bf323;
}



// FUNCTION 1413c48f0 FUN_1413c48f0 body=6 status=ok
// SIG undefined FUN_1413c48f0(void)

undefined8 FUN_1413c48f0(void)

{
  return 0x6edb365f;
}



// FUNCTION 1413c4900 FUN_1413c4900 body=6 status=ok
// SIG undefined FUN_1413c4900(void)

undefined8 FUN_1413c4900(void)

{
  return 0x152a3df;
}



// FUNCTION 1413c4910 FUN_1413c4910 body=6 status=ok
// SIG undefined FUN_1413c4910(void)

undefined8 FUN_1413c4910(void)

{
  return 0xf6f235ec;
}



// FUNCTION 1413c4920 FUN_1413c4920 body=6 status=ok
// SIG undefined FUN_1413c4920(void)

undefined8 FUN_1413c4920(void)

{
  return 0xe162f043;
}



// FUNCTION 1413c4930 FUN_1413c4930 body=6 status=ok
// SIG undefined FUN_1413c4930(void)

undefined8 FUN_1413c4930(void)

{
  return 0xca8092da;
}



// FUNCTION 1413c4940 FUN_1413c4940 body=6 status=ok
// SIG undefined FUN_1413c4940(void)

undefined8 FUN_1413c4940(void)

{
  return 0x614106a2;
}



// FUNCTION 1413c4a80 FUN_1413c4a80 body=61 status=ok
// SIG undefined FUN_1413c4a80(void)

void FUN_1413c4a80(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_14688ac08);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1413c4ac0 FUN_1413c4ac0 body=91 status=ok
// SIG undefined FUN_1413c4ac0(void)

void FUN_1413c4ac0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined8 uStack_40;
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
  
  local_48 = *param_2;
  uStack_40 = param_2[1];
  lVar1 = *param_1;
  local_38 = param_2[2];
  uStack_30 = param_2[3];
  local_28 = *(undefined4 *)(param_2 + 4);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_20 = *(undefined4 *)(param_2 + 5);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_18 = *(undefined4 *)(param_2 + 6);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_10 = *(undefined4 *)(param_2 + 7);
  uStack_c = *(undefined4 *)((longlong)param_2 + 0x3c);
  uVar2 = FUN_14178ac60(local_28,DAT_14688ac38);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_48);
  return;
}



// FUNCTION 1413c4b20 FUN_1413c4b20 body=62 status=ok
// SIG undefined FUN_1413c4b20(void)

void FUN_1413c4b20(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res10 [6];
  
  lVar1 = *param_1;
  local_res10[0] = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_14688ac40);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_res10);
  return;
}



// FUNCTION 1413c4b90 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UUGStreamInteractSpawnedActorUW::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 1413c4ba0 FUN_1413c4ba0 body=34 status=ok
// SIG undefined FUN_1413c4ba0(void)

void FUN_1413c4ba0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1413c3780();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_GetValidAssociatedComponentNames_1449a01a0,4);
  return;
}



// FUNCTION 1413c4bd0 FUN_1413c4bd0 body=34 status=ok
// SIG undefined FUN_1413c4bd0(void)

void FUN_1413c4bd0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1413c2e10();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnBeginNegateElementalDamage_1449a0410,5)
  ;
  return;
}



// FUNCTION 1413c4c00 FUN_1413c4c00 body=34 status=ok
// SIG undefined FUN_1413c4c00(void)

void FUN_1413c4c00(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1413c3a10();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ChangeBalanceTableRow_1449a1330,6);
  return;
}



// FUNCTION 1413c4c30 FUN_1413c4c30 body=34 status=ok
// SIG undefined FUN_1413c4c30(void)

void FUN_1413c4c30(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1413c30f0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnLostLootChanged_1449a1390,1);
  return;
}



// FUNCTION 1413c4c60 FUN_1413c4c60 body=34 status=ok
// SIG undefined FUN_1413c4c60(void)

void FUN_1413c4c60(void)

{
  undefined8 uVar1;
  
  uVar1 = UUGStreamInteractConnectionUW::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AnimNotify_OnUsed_1449a0190,1);
  return;
}



// FUNCTION 1413c4c90 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceKey::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688ae38 == 0) {
    uVar1 = FUN_1413c4870();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688ae38 =
         GetStaticStruct(FUN_1413c5440,uVar2,L"ConditionalLootableInteractionResponse",0x18,uVar1);
  }
  return;
}



// FUNCTION 1413c4cf0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceKey::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688acd0 == 0) {
    uVar1 = FUN_1413c4890();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688acd0 = GetStaticStruct(FUN_1413c5470,uVar2,L"LargeLiquidBodySurfaceSection",0x18,uVar1)
    ;
  }
  return;
}



// FUNCTION 1413c4d50 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688ace0 == 0) {
    uVar1 = FUN_1413c4880();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688ace0 =
         GetStaticStruct(FUN_1413c54a0,uVar2,L"LargeLiquidBodySurfaceSectionClippingVolume",0x10,
                         uVar1);
  }
  return;
}



// FUNCTION 1413c4db0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceKey::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688ad58 == 0) {
    uVar1 = FUN_1413c48a0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688ad58 = GetStaticStruct(FUN_1413c54d0,uVar2,L"LevelAssetList",0x18,uVar1);
  }
  return;
}



// FUNCTION 1413c4e10 FUN_1413c4e10 body=82 status=ok
// SIG undefined FUN_1413c4e10(void)

void FUN_1413c4e10(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688ad98 == 0) {
    uVar1 = FUN_1413c48b0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688ad98 = GetStaticStruct(FUN_1413c5500,uVar2,L"LevelTravelDataListPatch",0x20,uVar1);
  }
  return;
}



// FUNCTION 1413c4e70 FUN_1413c4e70 body=82 status=ok
// SIG undefined FUN_1413c4e70(void)

void FUN_1413c4e70(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688ad88 == 0) {
    uVar1 = FUN_1413c48c0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688ad88 =
         GetStaticStruct(FUN_1413c5530,uVar2,L"LevelTravelDataListStationPatch",0x20,uVar1);
  }
  return;
}



// FUNCTION 1413c4ed0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688ae18 == 0) {
    uVar1 = FUN_1413c48d0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688ae18 = GetStaticStruct(FUN_1413c5560,uVar2,L"LootableAnimState",0x10,uVar1);
  }
  return;
}



// FUNCTION 1413c4f30 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceKey::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688ae28 == 0) {
    uVar1 = FUN_1413c48e0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688ae28 = GetStaticStruct(FUN_1413c5590,uVar2,L"LootableDirectionalResponse",0x18,uVar1);
  }
  return;
}



// FUNCTION 1413c4f90 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688ae48 == 0) {
    uVar1 = FUN_1413c48f0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688ae48 = GetStaticStruct(FUN_1413c55c0,uVar2,L"LootableInteractionResponse",0x10,uVar1);
  }
  return;
}



// FUNCTION 1413c4ff0 FUN_1413c4ff0 body=82 status=ok
// SIG undefined FUN_1413c4ff0(void)

void FUN_1413c4ff0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688ae08 == 0) {
    uVar1 = FUN_1413c4900();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688ae08 = GetStaticStruct(FUN_1413c55f0,uVar2,L"LootableMeshSwapData",0x20,uVar1);
  }
  return;
}



// FUNCTION 1413c5050 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventRepeaterTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688adf8 == 0) {
    uVar1 = FUN_1413c4910();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688adf8 =
         GetStaticStruct(FUN_1413c5620,uVar2,L"LootableObjectDamageEventDetails",0x40,uVar1);
  }
  return;
}



// FUNCTION 1413c50b0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEvent::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688adc8 == 0) {
    uVar1 = FUN_1413c4920();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688adc8 = GetStaticStruct(FUN_1413c5650,uVar2,L"LootablePersistenceData",8,uVar1);
  }
  return;
}



// FUNCTION 1413c5110 FUN_1413c5110 body=82 status=ok
// SIG undefined FUN_1413c5110(void)

void FUN_1413c5110(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688add8 == 0) {
    uVar1 = FUN_1413c4930();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688add8 = GetStaticStruct(FUN_1413c5680,uVar2,L"LootablePileDamageInteraction",0x20,uVar1)
    ;
  }
  return;
}



// FUNCTION 1413c5170 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688ade8 == 0) {
    uVar1 = FUN_1413c4940();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688ade8 =
         GetStaticStruct(FUN_1413c56b0,uVar2,L"LootablePileInteractionResponse",0x10,uVar1);
  }
  return;
}



// FUNCTION 1413c51d0 FUN_1413c51d0 body=47 status=ok
// SIG undefined FUN_1413c51d0(void)

longlong FUN_1413c51d0(void)

{
  if (DAT_14688ac50 == 0) {
    FUN_141786440(&DAT_14688ac50,&PTR_FUN_14499d0a0);
  }
  return DAT_14688ac50;
}



// FUNCTION 1413c5200 FUN_1413c5200 body=47 status=ok
// SIG undefined FUN_1413c5200(void)

longlong FUN_1413c5200(void)

{
  if (DAT_14688ac60 == 0) {
    FUN_141786440(&DAT_14688ac60,&PTR_GetPrivateStaticClass_14499d980);
  }
  return DAT_14688ac60;
}



// FUNCTION 1413c5230 FUN_1413c5230 body=47 status=ok
// SIG undefined FUN_1413c5230(void)

longlong FUN_1413c5230(void)

{
  if (DAT_14688acc0 == 0) {
    FUN_141786440(&DAT_14688acc0,&PTR_FUN_14499f150);
  }
  return DAT_14688acc0;
}



// FUNCTION 1413c5260 FUN_1413c5260 body=47 status=ok
// SIG undefined FUN_1413c5260(void)

longlong FUN_1413c5260(void)

{
  if (DAT_14688ad28 == 0) {
    FUN_141786440(&DAT_14688ad28,&PTR_FUN_14499e8c0);
  }
  return DAT_14688ad28;
}



// FUNCTION 1413c5290 FUN_1413c5290 body=47 status=ok
// SIG undefined FUN_1413c5290(void)

longlong FUN_1413c5290(void)

{
  if (DAT_14688ad38 == 0) {
    FUN_141786440(&DAT_14688ad38,&PTR_GetPrivateStaticClass_14499ebf0);
  }
  return DAT_14688ad38;
}



// FUNCTION 1413c52c0 FUN_1413c52c0 body=47 status=ok
// SIG undefined FUN_1413c52c0(void)

longlong FUN_1413c52c0(void)

{
  if (DAT_14688ad48 == 0) {
    FUN_141786440(&DAT_14688ad48,&PTR_FUN_14499f8c0);
  }
  return DAT_14688ad48;
}



// FUNCTION 1413c52f0 FUN_1413c52f0 body=47 status=ok
// SIG undefined FUN_1413c52f0(void)

longlong FUN_1413c52f0(void)

{
  if (DAT_14688ad68 == 0) {
    FUN_141786440(&DAT_14688ad68,&PTR_GetPrivateStaticClass_14499d8b0);
  }
  return DAT_14688ad68;
}



// FUNCTION 1413c5320 FUN_1413c5320 body=47 status=ok
// SIG undefined FUN_1413c5320(void)

longlong FUN_1413c5320(void)

{
  if (DAT_14688ad78 == 0) {
    FUN_141786440(&DAT_14688ad78,&PTR_GetPrivateStaticClass_14499de70);
  }
  return DAT_14688ad78;
}



// FUNCTION 1413c5350 FUN_1413c5350 body=47 status=ok
// SIG undefined FUN_1413c5350(void)

longlong FUN_1413c5350(void)

{
  if (DAT_14688aea0 == 0) {
    FUN_141786440(&DAT_14688aea0,&PTR_FUN_14499d290);
  }
  return DAT_14688aea0;
}



// FUNCTION 1413c5380 FUN_1413c5380 body=47 status=ok
// SIG undefined FUN_1413c5380(void)

longlong FUN_1413c5380(void)

{
  if (DAT_14688ada8 == 0) {
    FUN_141786a30(&DAT_14688ada8,&PTR_Z_Construct_UPackage__Script_MechWarrior_146374c40);
  }
  return DAT_14688ada8;
}



// FUNCTION 1413c53b0 FUN_1413c53b0 body=47 status=ok
// SIG undefined FUN_1413c53b0(void)

longlong FUN_1413c53b0(void)

{
  if (DAT_14688adb0 == 0) {
    FUN_1417866a0(&DAT_14688adb0,&PTR_Z_Construct_UPackage__Script_MechWarrior_146376930);
  }
  return DAT_14688adb0;
}



// FUNCTION 1413c53e0 FUN_1413c53e0 body=47 status=ok
// SIG undefined FUN_1413c53e0(void)

longlong FUN_1413c53e0(void)

{
  if (DAT_14688adc0 == 0) {
    FUN_1417866a0(&DAT_14688adc0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463769d0);
  }
  return DAT_14688adc0;
}



// FUNCTION 1413c5410 FUN_1413c5410 body=47 status=ok
// SIG undefined FUN_1413c5410(void)

longlong FUN_1413c5410(void)

{
  if (DAT_14688adb8 == 0) {
    FUN_1417866a0(&DAT_14688adb8,&PTR_Z_Construct_UPackage__Script_MechWarrior_146376980);
  }
  return DAT_14688adb8;
}



// FUNCTION 1413c5440 FUN_1413c5440 body=47 status=ok
// SIG undefined FUN_1413c5440(void)

longlong FUN_1413c5440(void)

{
  if (DAT_14688ae40 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688ae40,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463754e0);
  }
  return DAT_14688ae40;
}



// FUNCTION 1413c5470 FUN_1413c5470 body=47 status=ok
// SIG undefined FUN_1413c5470(void)

longlong FUN_1413c5470(void)

{
  if (DAT_14688acd8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688acd8,&PTR_Z_Construct_UPackage__Script_MechWarrior_146373800);
  }
  return DAT_14688acd8;
}



// FUNCTION 1413c54a0 FUN_1413c54a0 body=47 status=ok
// SIG undefined FUN_1413c54a0(void)

longlong FUN_1413c54a0(void)

{
  if (DAT_14688ace8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688ace8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463738c0);
  }
  return DAT_14688ace8;
}



// FUNCTION 1413c54d0 FUN_1413c54d0 body=47 status=ok
// SIG undefined FUN_1413c54d0(void)

longlong FUN_1413c54d0(void)

{
  if (DAT_14688ad60 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688ad60,&PTR_Z_Construct_UPackage__Script_MechWarrior_146374860);
  }
  return DAT_14688ad60;
}



// FUNCTION 1413c5500 FUN_1413c5500 body=47 status=ok
// SIG undefined FUN_1413c5500(void)

longlong FUN_1413c5500(void)

{
  if (DAT_14688ada0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688ada0,&PTR_Z_Construct_UPackage__Script_MechWarrior_146374bb0);
  }
  return DAT_14688ada0;
}



// FUNCTION 1413c5530 FUN_1413c5530 body=47 status=ok
// SIG undefined FUN_1413c5530(void)

longlong FUN_1413c5530(void)

{
  if (DAT_14688ad90 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688ad90,&PTR_Z_Construct_UPackage__Script_MechWarrior_146374a70);
  }
  return DAT_14688ad90;
}



// FUNCTION 1413c5560 FUN_1413c5560 body=47 status=ok
// SIG undefined FUN_1413c5560(void)

longlong FUN_1413c5560(void)

{
  if (DAT_14688ae20 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688ae20,&PTR_Z_Construct_UPackage__Script_MechWarrior_146375310);
  }
  return DAT_14688ae20;
}



// FUNCTION 1413c5590 FUN_1413c5590 body=47 status=ok
// SIG undefined FUN_1413c5590(void)

longlong FUN_1413c5590(void)

{
  if (DAT_14688ae30 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688ae30,&PTR_Z_Construct_UPackage__Script_MechWarrior_146375410);
  }
  return DAT_14688ae30;
}



// FUNCTION 1413c55c0 FUN_1413c55c0 body=47 status=ok
// SIG undefined FUN_1413c55c0(void)

longlong FUN_1413c55c0(void)

{
  if (DAT_14688ae50 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688ae50,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463755b0);
  }
  return DAT_14688ae50;
}



// FUNCTION 1413c55f0 FUN_1413c55f0 body=47 status=ok
// SIG undefined FUN_1413c55f0(void)

longlong FUN_1413c55f0(void)

{
  if (DAT_14688ae10 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688ae10,&PTR_Z_Construct_UPackage__Script_MechWarrior_146375230);
  }
  return DAT_14688ae10;
}



// FUNCTION 1413c5620 FUN_1413c5620 body=47 status=ok
// SIG undefined FUN_1413c5620(void)

longlong FUN_1413c5620(void)

{
  if (DAT_14688ae00 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688ae00,&PTR_Z_Construct_UPackage__Script_MechWarrior_146375110);
  }
  return DAT_14688ae00;
}



// FUNCTION 1413c5650 FUN_1413c5650 body=47 status=ok
// SIG undefined FUN_1413c5650(void)

longlong FUN_1413c5650(void)

{
  if (DAT_14688add0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688add0,&PTR_Z_Construct_UPackage__Script_MechWarrior_146374d00);
  }
  return DAT_14688add0;
}



// FUNCTION 1413c5680 FUN_1413c5680 body=47 status=ok
// SIG undefined FUN_1413c5680(void)

longlong FUN_1413c5680(void)

{
  if (DAT_14688ade0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688ade0,&PTR_Z_Construct_UPackage__Script_MechWarrior_146374e20);
  }
  return DAT_14688ade0;
}



// FUNCTION 1413c56b0 FUN_1413c56b0 body=47 status=ok
// SIG undefined FUN_1413c56b0(void)

longlong FUN_1413c56b0(void)

{
  if (DAT_14688adf0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688adf0,&PTR_Z_Construct_UPackage__Script_MechWarrior_146374ee0);
  }
  return DAT_14688adf0;
}



// FUNCTION 1413c5700 FUN_1413c5700 body=152 status=ok
// SIG undefined FUN_1413c5700(void)

void FUN_1413c5700(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  puVar1 = &local_18;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x778))(param_1,puVar1);
  return;
}



// FUNCTION 1413c57e0 FUN_1413c57e0 body=128 status=ok
// SIG undefined FUN_1413c57e0(void)

void FUN_1413c57e0(undefined8 param_1,longlong param_2)

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
  FUN_140affcb0(param_1,local_res10);
  return;
}



// FUNCTION 1413c5860 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_140addb80(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 1413c5920 FUN_1413c5920 body=493 status=ok
// SIG undefined FUN_1413c5920(void)

void FUN_1413c5920(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  int local_res10 [2];
  undefined4 local_res20 [2];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8 [2];
  undefined1 local_a8 [12];
  undefined4 local_9c;
  
  local_b8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_b8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  local_c0 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_c0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  local_c8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_c8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
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
    FUN_14179aca0(param_2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar2 = local_res10[0] != 0;
  _guard_xfg_dispatch_icall_nop(local_a8,0,0x90);
  local_9c = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  puVar1 = local_a8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140addbb0(param_1,local_b8[0],local_c0,local_c8,local_res20[0],bVar2,puVar1);
  return;
}



// FUNCTION 1413c5b10 FUN_1413c5b10 body=493 status=ok
// SIG undefined FUN_1413c5b10(void)

void FUN_1413c5b10(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  int local_res10 [2];
  undefined4 local_res20 [2];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8 [2];
  undefined1 local_a8 [12];
  undefined4 local_9c;
  
  local_b8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_b8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  local_c0 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_c0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  local_c8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_c8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
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
    FUN_14179aca0(param_2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar2 = local_res10[0] != 0;
  _guard_xfg_dispatch_icall_nop(local_a8,0,0x90);
  local_9c = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  puVar1 = local_a8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140b022e0(param_1,local_b8[0],local_c0,local_c8,local_res20[0],bVar2,puVar1);
  return;
}



// FUNCTION 1413c5d00 FUN_1413c5d00 body=128 status=ok
// SIG undefined FUN_1413c5d00(void)

void FUN_1413c5d00(undefined8 param_1,longlong param_2)

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
  FUN_140added0(param_1,local_res10);
  return;
}



// FUNCTION 1413c5d80 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_140ade1f0(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 1413c5e40 execOnProjectileOverlapEnd body=319 status=ok
// SIG undefined execOnProjectileOverlapEnd(void)

void AUGProjectile::execOnProjectileOverlapEnd(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  undefined8 local_res20;
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
  FUN_140ade220(param_1,local_10,local_18,local_res20,local_res10[0]);
  return;
}



// FUNCTION 1413c5fc0 FUN_1413c5fc0 body=154 status=ok
// SIG undefined FUN_1413c5fc0(void)

void FUN_1413c5fc0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined2 local_18;
  
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140b0a1d0(param_1,puVar1);
  return;
}



// FUNCTION 1413c6060 FUN_1413c6060 body=130 status=ok
// SIG undefined FUN_1413c6060(void)

void FUN_1413c6060(undefined8 param_1,longlong param_2)

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
  FUN_140b0e430(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1413c60f0 FUN_1413c60f0 body=53 status=ok
// SIG undefined FUN_1413c60f0(void)

void FUN_1413c60f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x34;
    *puVar1 = &PTR_FUN_1449a9578;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1413c6140 FUN_1413c6140 body=162 status=ok
// SIG undefined FUN_1413c6140(void)

longlong FUN_1413c6140(void)

{
  if (DAT_14688b3a8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"MainMenuCameraManager",&DAT_14688b3a8,FUN_140447710,0x2cd0,
                  0x10000008,0,L"Engine",&LAB_1413c7540,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  thunk_FUN_142fd5420,&LAB_140447700,0);
  }
  return DAT_14688b3a8;
}



// FUNCTION 1413c61f0 FUN_1413c61f0 body=53 status=ok
// SIG undefined FUN_1413c61f0(void)

void FUN_1413c61f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_1449a9690;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1413c6240 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGJournalKey::GetPrivateStaticClass(void)

{
  if (DAT_14688b558 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"MayhemModeTwoDataAsset",&DAT_14688b558,FUN_140447710,0xa0,
                  0x10000000,0,L"Engine",FUN_1413c77f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_14688b558;
}



// FUNCTION 1413c6300 FUN_1413c6300 body=53 status=ok
// SIG undefined FUN_1413c6300(void)

void FUN_1413c6300(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_1449a7e28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413c6340 FUN_1413c6340 body=162 status=ok
// SIG undefined FUN_1413c6340(void)

longlong FUN_1413c6340(void)

{
  if (DAT_14688b4d8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"MayhemModeAbilityStatusEffect",&DAT_14688b4d8,FUN_140447710,
                  0x98,0x10000008,0,L"Engine",FUN_1413c7780,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UBTTask_RunBehaviorDynamic::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14688b4d8;
}



// FUNCTION 1413c6400 FUN_1413c6400 body=162 status=ok
// SIG undefined FUN_1413c6400(void)

longlong FUN_1413c6400(void)

{
  if (DAT_14688b3c8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"ManagedWidget",&DAT_14688b3c8,FUN_140447710,0x340,0x10000000,
                  0,L"Engine",FUN_1413c7570,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UProgressBar::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14688b3c8;
}



// FUNCTION 1413c64b0 FUN_1413c64b0 body=47 status=ok
// SIG undefined FUN_1413c64b0(void)

longlong FUN_1413c64b0(void)

{
  if (DAT_14688b3c0 == 0) {
    FUN_141786440(&DAT_14688b3c0,&PTR_FUN_1449a2170);
  }
  return DAT_14688b3c0;
}



// FUNCTION 1413c64f0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UBlueprintSetLibrary::GetPrivateStaticClass(void)

{
  if (DAT_14688b548 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"MayhemModeFunctionLibrary",&DAT_14688b548,
                  StaticRegisterNativesUBlueprintSetLibrary,0x28,0x10000000,0,L"Engine",
                  FUN_1405d87d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_14688b548;
}



// FUNCTION 1413c65a0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AEquipmentSkin::GetPrivateStaticClass(void)

{
  if (DAT_14688b398 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"MainMenuCameraController",&DAT_14688b398,FUN_1413c8e20,0x4e0,
                  0x10000000,0,L"Engine",&LAB_1413c7520,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_14688b398;
}



// FUNCTION 1413c6650 FUN_1413c6650 body=47 status=ok
// SIG undefined FUN_1413c6650(void)

longlong FUN_1413c6650(void)

{
  if (DAT_14688b540 == 0) {
    FUN_141786440(&DAT_14688b540,&PTR_GetPrivateStaticClass_1449a33e0);
  }
  return DAT_14688b540;
}



// FUNCTION 1413c6680 FUN_1413c6680 body=47 status=ok
// SIG undefined FUN_1413c6680(void)

longlong FUN_1413c6680(void)

{
  if (DAT_14688b4e0 == 0) {
    FUN_141786a30(&DAT_14688b4e0,&PTR_FUN_146378890);
  }
  return DAT_14688b4e0;
}



// FUNCTION 1413c66b0 FUN_1413c66b0 body=47 status=ok
// SIG undefined FUN_1413c66b0(void)

longlong FUN_1413c66b0(void)

{
  if (DAT_14688b4e8 == 0) {
    FUN_141786a30(&DAT_14688b4e8,&PTR_FUN_146378950);
  }
  return DAT_14688b4e8;
}



// FUNCTION 1413c66e0 FUN_1413c66e0 body=47 status=ok
// SIG undefined FUN_1413c66e0(void)

longlong FUN_1413c66e0(void)

{
  if (DAT_14688b4f0 == 0) {
    FUN_141786a30(&DAT_14688b4f0,&PTR_FUN_1463789d0);
  }
  return DAT_14688b4f0;
}



// FUNCTION 1413c6710 FUN_1413c6710 body=47 status=ok
// SIG undefined FUN_1413c6710(void)

longlong FUN_1413c6710(void)

{
  if (DAT_14688b4f8 == 0) {
    FUN_141786a30(&DAT_14688b4f8,&PTR_FUN_146378a50);
  }
  return DAT_14688b4f8;
}



// FUNCTION 1413c6740 FUN_1413c6740 body=47 status=ok
// SIG undefined FUN_1413c6740(void)

longlong FUN_1413c6740(void)

{
  if (DAT_14688b500 == 0) {
    FUN_141786a30(&DAT_14688b500,&PTR_FUN_146378ad0);
  }
  return DAT_14688b500;
}



// FUNCTION 1413c6770 FUN_1413c6770 body=47 status=ok
// SIG undefined FUN_1413c6770(void)

longlong FUN_1413c6770(void)

{
  if (DAT_14688b508 == 0) {
    FUN_141786a30(&DAT_14688b508,&PTR_FUN_146378bc0);
  }
  return DAT_14688b508;
}



// FUNCTION 1413c67a0 FUN_1413c67a0 body=47 status=ok
// SIG undefined FUN_1413c67a0(void)

longlong FUN_1413c67a0(void)

{
  if (DAT_14688b510 == 0) {
    FUN_141786a30(&DAT_14688b510,&PTR_FUN_146378c40);
  }
  return DAT_14688b510;
}



// FUNCTION 1413c67d0 FUN_1413c67d0 body=47 status=ok
// SIG undefined FUN_1413c67d0(void)

longlong FUN_1413c67d0(void)

{
  if (DAT_14688b518 == 0) {
    FUN_141786a30(&DAT_14688b518,&PTR_FUN_146378d40);
  }
  return DAT_14688b518;
}



// FUNCTION 1413c6800 FUN_1413c6800 body=47 status=ok
// SIG undefined FUN_1413c6800(void)

longlong FUN_1413c6800(void)

{
  if (DAT_14688b520 == 0) {
    FUN_141786a30(&DAT_14688b520,&PTR_FUN_146378e40);
  }
  return DAT_14688b520;
}



// FUNCTION 1413c6830 FUN_1413c6830 body=47 status=ok
// SIG undefined FUN_1413c6830(void)

longlong FUN_1413c6830(void)

{
  if (DAT_14688b528 == 0) {
    FUN_141786a30(&DAT_14688b528,&PTR_FUN_146378ec0);
  }
  return DAT_14688b528;
}



// FUNCTION 1413c6860 FUN_1413c6860 body=47 status=ok
// SIG undefined FUN_1413c6860(void)

longlong FUN_1413c6860(void)

{
  if (DAT_14688b530 == 0) {
    FUN_141786a30(&DAT_14688b530,&PTR_FUN_146378f40);
  }
  return DAT_14688b530;
}



// FUNCTION 1413c6890 FUN_1413c6890 body=47 status=ok
// SIG undefined FUN_1413c6890(void)

longlong FUN_1413c6890(void)

{
  if (DAT_14688b538 == 0) {
    FUN_141786a30(&DAT_14688b538,&PTR_FUN_146379080);
  }
  return DAT_14688b538;
}



// FUNCTION 1413c68c0 FUN_1413c68c0 body=47 status=ok
// SIG undefined FUN_1413c68c0(void)

longlong FUN_1413c68c0(void)

{
  if (DAT_14688b390 == 0) {
    FUN_141786440(&DAT_14688b390,&PTR_GetPrivateStaticClass_1449a2d40);
  }
  return DAT_14688b390;
}



// FUNCTION 1413c68f0 FUN_1413c68f0 body=47 status=ok
// SIG undefined FUN_1413c68f0(void)

longlong FUN_1413c68f0(void)

{
  if (DAT_14688b388 == 0) {
    FUN_141786a30(&DAT_14688b388,&PTR_FUN_146376cf0);
  }
  return DAT_14688b388;
}



// FUNCTION 1413c6930 FUN_1413c6930 body=151 status=ok
// SIG undefined FUN_1413c6930(void)

longlong FUN_1413c6930(void)

{
  if (DAT_14688b478 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"MatchmakingSearchDefinitions",&DAT_14688b478,FUN_140447710,
                  0xf8,0x10000006,0,L"Game",&LAB_1413c7720,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_14688b478;
}



// FUNCTION 1413c69f0 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ULevelSequenceBurnInOptions::GetPrivateStaticClass(void)

{
  if (DAT_14688b3f0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"MatchmakerSettings",&DAT_14688b3f0,FUN_140447710,0x50,
                  0x10000004,0,L"Game",FUN_1413c76e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_14688b3f0;
}



// FUNCTION 1413c6a90 FUN_1413c6a90 body=53 status=ok
// SIG undefined FUN_1413c6a90(void)

void FUN_1413c6a90(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_1449a82a0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413c6ad0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UFGPoleDescriptor::GetPrivateStaticClass(void)

{
  if (DAT_14688b380 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"LowGravHoveringComponent",&DAT_14688b380,
                  StaticRegisterNativesUFGPoleDescriptor,0x198,0x10000000,0,L"Engine",&LAB_1413c7560
                  ,TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                   ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_14688b380;
}



// FUNCTION 1413c6b80 FUN_1413c6b80 body=53 status=ok
// SIG undefined FUN_1413c6b80(void)

void FUN_1413c6b80(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &PTR_FUN_1449a83b8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1413c6bc0 FUN_1413c6bc0 body=47 status=ok
// SIG undefined FUN_1413c6bc0(void)

longlong FUN_1413c6bc0(void)

{
  if (DAT_14688b378 == 0) {
    FUN_141786440(&DAT_14688b378,&PTR_GetPrivateStaticClass_1449a4260);
  }
  return DAT_14688b378;
}



// FUNCTION 1413c6bf0 FUN_1413c6bf0 body=47 status=ok
// SIG undefined FUN_1413c6bf0(void)

longlong FUN_1413c6bf0(void)

{
  if (DAT_14688b370 == 0) {
    FUN_141786a30(&DAT_14688b370,&PTR_FUN_146376b20);
  }
  return DAT_14688b370;
}



// FUNCTION 1413c6c20 FUN_1413c6c20 body=53 status=ok
// SIG undefined FUN_1413c6c20(void)

void FUN_1413c6c20(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb8;
    *puVar1 = &PTR_FUN_1449a7280;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413c6c60 FUN_1413c6c60 body=53 status=ok
// SIG undefined FUN_1413c6c60(void)

void FUN_1413c6c60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &PTR_FUN_1449a84d0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413c6cb0 FUN_1413c6cb0 body=53 status=ok
// SIG undefined FUN_1413c6cb0(void)

void FUN_1413c6cb0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_1449a85e8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413c6cf0 FUN_1413c6cf0 body=53 status=ok
// SIG undefined FUN_1413c6cf0(void)

void FUN_1413c6cf0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &PTR_FUN_1449a7398;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413c6d30 FUN_1413c6d30 body=53 status=ok
// SIG undefined FUN_1413c6d30(void)

void FUN_1413c6d30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_1449a8700;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413c6d70 FUN_1413c6d70 body=53 status=ok
// SIG undefined FUN_1413c6d70(void)

void FUN_1413c6d70(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_1449a74b0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413c6db0 FUN_1413c6db0 body=53 status=ok
// SIG undefined FUN_1413c6db0(void)

void FUN_1413c6db0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_1449a8818;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413c6df0 FUN_1413c6df0 body=53 status=ok
// SIG undefined FUN_1413c6df0(void)

void FUN_1413c6df0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_1449a75c8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413c6e30 FUN_1413c6e30 body=53 status=ok
// SIG undefined FUN_1413c6e30(void)

void FUN_1413c6e30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_1449a8930;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413c6e70 FUN_1413c6e70 body=53 status=ok
// SIG undefined FUN_1413c6e70(void)

void FUN_1413c6e70(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_1449a76e0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413c6eb0 FUN_1413c6eb0 body=162 status=ok
// SIG undefined FUN_1413c6eb0(void)

longlong FUN_1413c6eb0(void)

{
  if (DAT_14688b5e8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"MayhemModifierSlotInterface",&DAT_14688b5e8,FUN_140447710,
                  0x30,0x10000001,0,L"Engine",FUN_1413c78f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_14688b5e8;
}



// FUNCTION 1413c6f60 FUN_1413c6f60 body=162 status=ok
// SIG undefined FUN_1413c6f60(void)

longlong FUN_1413c6f60(void)

{
  if (DAT_14688b5f8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"MayhemModifierSlotDataAsset",&DAT_14688b5f8,FUN_140447710,
                  0x40,0x10000000,0,L"Engine",FUN_1413c78b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1413c6eb0,&LAB_140447700,0);
  }
  return DAT_14688b5f8;
}



// FUNCTION 1413c7010 FUN_1413c7010 body=53 status=ok
// SIG undefined FUN_1413c7010(void)

void FUN_1413c7010(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_1449a77f8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413c7050 FUN_1413c7050 body=162 status=ok
// SIG undefined FUN_1413c7050(void)

longlong FUN_1413c7050(void)

{
  if (DAT_14688b608 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"MayhemModifierSlotCollectionDataAsset",&DAT_14688b608,
                  FUN_140447710,0x40,0x10000000,0,L"Engine",FUN_1413c7870,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1413c6eb0,&LAB_140447700,0);
  }
  return DAT_14688b608;
}



// FUNCTION 1413c7110 FUN_1413c7110 body=151 status=ok
// SIG undefined FUN_1413c7110(void)

longlong FUN_1413c7110(void)

{
  if (DAT_14688b4b8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"MatchmakingTest",&DAT_14688b4b8,FUN_1413c8e80,0x38,0x10000000
                  ,0,L"Engine",FUN_1413c7740,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_14688b4b8;
}



// FUNCTION 1413c71b0 FUN_1413c71b0 body=47 status=ok
// SIG undefined FUN_1413c71b0(void)

longlong FUN_1413c71b0(void)

{
  if (DAT_14688b4b0 == 0) {
    FUN_141786440(&DAT_14688b4b0,&PTR_FUN_1449a5560);
  }
  return DAT_14688b4b0;
}



// FUNCTION 1413c71e0 FUN_1413c71e0 body=47 status=ok
// SIG undefined FUN_1413c71e0(void)

longlong FUN_1413c71e0(void)

{
  if (DAT_14688b480 == 0) {
    FUN_141786a30(&DAT_14688b480,&PTR_FUN_146378220);
  }
  return DAT_14688b480;
}



// FUNCTION 1413c7210 FUN_1413c7210 body=47 status=ok
// SIG undefined FUN_1413c7210(void)

longlong FUN_1413c7210(void)

{
  if (DAT_14688b488 == 0) {
    FUN_141786a30(&DAT_14688b488,&PTR_FUN_1463782e0);
  }
  return DAT_14688b488;
}



// FUNCTION 1413c7240 FUN_1413c7240 body=47 status=ok
// SIG undefined FUN_1413c7240(void)

longlong FUN_1413c7240(void)

{
  if (DAT_14688b490 == 0) {
    FUN_141786a30(&DAT_14688b490,&PTR_FUN_146378320);
  }
  return DAT_14688b490;
}



// FUNCTION 1413c7270 FUN_1413c7270 body=47 status=ok
// SIG undefined FUN_1413c7270(void)

longlong FUN_1413c7270(void)

{
  if (DAT_14688b498 == 0) {
    FUN_141786a30(&DAT_14688b498,&PTR_FUN_146378360);
  }
  return DAT_14688b498;
}



// FUNCTION 1413c72a0 FUN_1413c72a0 body=47 status=ok
// SIG undefined FUN_1413c72a0(void)

longlong FUN_1413c72a0(void)

{
  if (DAT_14688b4a0 == 0) {
    FUN_141786a30(&DAT_14688b4a0,&PTR_FUN_1463783a0);
  }
  return DAT_14688b4a0;
}



// FUNCTION 1413c72d0 FUN_1413c72d0 body=47 status=ok
// SIG undefined FUN_1413c72d0(void)

longlong FUN_1413c72d0(void)

{
  if (DAT_14688b4a8 == 0) {
    FUN_141786a30(&DAT_14688b4a8,&PTR_FUN_1463783e0);
  }
  return DAT_14688b4a8;
}



// FUNCTION 1413c7300 FUN_1413c7300 body=47 status=ok
// SIG undefined FUN_1413c7300(void)

longlong FUN_1413c7300(void)

{
  if (DAT_14688b5e0 == 0) {
    FUN_141786440(&DAT_14688b5e0,&PTR_FUN_1449a52a0);
  }
  return DAT_14688b5e0;
}



// FUNCTION 1413c7370 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAESHelper::GetPrivateStaticClass(void)

{
  if (DAT_14688b618 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"MayhemOverrideDataAsset",&DAT_14688b618,FUN_140447710,0x48,
                  0x10000000,0,L"Engine",InternalConstructor<UChaosClothingInteractor>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_14688b618;
}



// FUNCTION 1413c7430 FUN_1413c7430 body=162 status=ok
// SIG undefined FUN_1413c7430(void)

longlong FUN_1413c7430(void)

{
  if (DAT_14688b658 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"MenuMapCameraData",&DAT_14688b658,FUN_140447710,0xdd0,
                  0x10000000,0,L"Engine",&LAB_1413c7960,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_14688b658;
}



// FUNCTION 1413c74e0 FUN_1413c74e0 body=53 status=ok
// SIG undefined FUN_1413c74e0(void)

void FUN_1413c74e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_1449a9460;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1413c7570 FUN_1413c7570 body=353 status=ok
// SIG undefined FUN_1413c7570(void)

void FUN_1413c7570(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1420d5de0(puVar1,param_1);
    *(undefined4 *)(puVar1 + 0x42) = 0;
    *puVar1 = &PTR_FUN_1447d6728;
    *(undefined2 *)(puVar1 + 0x46) = 0x300;
    puVar1[0x20] = &PTR_LAB_1447d6bc0;
    puVar1[0x41] = &PTR_LAB_1447d6be8;
    puVar1[0x48] = 0;
    puVar1[0x49] = 0;
    *(undefined1 *)(puVar1 + 0x4a) = 0;
    puVar1[0x4b] = 0;
    FWeakObjectPtr::operator=(puVar1 + 0x4c,0);
    puVar1[0x4d] = 0;
    FWeakObjectPtr::operator=(puVar1 + 0x4e,0);
    puVar1[0x4f] = 0;
    puVar1[0x50] = 0;
    puVar1[0x51] = 0;
    puVar1[0x52] = 0;
    puVar1[0x53] = 0;
    *(undefined1 *)(puVar1 + 0x54) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x2a4) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x55) = 0;
    *puVar1 = &PTR_FUN_1449915d0;
    puVar1[0x20] = &PTR_LAB_144991a90;
    puVar1[0x41] = &PTR_LAB_144991ab8;
    FGeometry::FGeometry(puVar1 + 0x57);
    *puVar1 = &PTR_FUN_1449a6a48;
    puVar1[0x20] = &PTR_LAB_1449a6f08;
    puVar1[0x41] = &PTR_LAB_1449a6f30;
    *(undefined2 *)(puVar1 + 0x61) = 0x100;
    puVar1[0x62] = 0;
    puVar1[99] = 0;
    *(undefined1 *)(puVar1 + 0x67) = 0;
  }
  return;
}



// FUNCTION 1413c76e0 FUN_1413c76e0 body=62 status=ok
// SIG undefined FUN_1413c76e0(void)

void FUN_1413c76e0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *(undefined4 *)(puVar1 + 8) = 0x3f800000;
    *puVar1 = &PTR_FUN_1440f96c8;
    *(undefined4 *)((longlong)puVar1 + 0x44) = 0x41200000;
    *(undefined4 *)(puVar1 + 9) = 0x41200000;
  }
  return;
}



// FUNCTION 1413c7740 FUN_1413c7740 body=51 status=ok
// SIG undefined FUN_1413c7740(void)

void FUN_1413c7740(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_1449a7910;
    puVar1[5] = 0;
    puVar1[6] = 0;
  }
  return;
}



// FUNCTION 1413c7780 FUN_1413c7780 body=105 status=ok
// SIG undefined FUN_1413c7780(void)

void FUN_1413c7780(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UDataAsset::UDataAsset(puVar1,param_1);
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    *(undefined1 *)(puVar1 + 0x10) = 1;
    *(undefined4 *)((longlong)puVar1 + 0x84) = 0x3f000000;
    *puVar1 = &PTR_FUN_1449a7f40;
    puVar1[0x11] = 0;
    *(undefined1 *)(puVar1 + 0x12) = 0;
  }
  return;
}



// FUNCTION 1413c77f0 FUN_1413c77f0 body=114 status=ok
// SIG undefined FUN_1413c77f0(void)

void FUN_1413c77f0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *(undefined4 *)(puVar1 + 6) = 100;
    *puVar1 = &PTR_FUN_1449a7ba8;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
  }
  return;
}



// FUNCTION 1413c7870 FUN_1413c7870 body=51 status=ok
// SIG undefined FUN_1413c7870(void)

void FUN_1413c7870(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__1449a8f58;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  return;
}



// FUNCTION 1413c78b0 FUN_1413c78b0 body=51 status=ok
// SIG undefined FUN_1413c78b0(void)

void FUN_1413c78b0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR_FUN_1449a8cd0;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  return;
}



// FUNCTION 1413c78f0 FUN_1413c78f0 body=41 status=ok
// SIG undefined FUN_1413c78f0(void)

void FUN_1413c78f0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR_FUN_1449a8a48;
  }
  return;
}



// FUNCTION 1413c7920 InternalConstructor<UChaosClothingInteractor> body=58 status=ok
// SIG undefined InternalConstructor<UChaosClothingInteractor>(void)

void InternalConstructor<UChaosClothingInteractor>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *puVar1 = &PTR__scalar_deleting_destructor__1449a91e0;
    puVar1[7] = 0;
    puVar1[8] = 0;
  }
  return;
}



// FUNCTION 1413c7970 FUN_1413c7970 body=163 status=ok
// SIG undefined FUN_1413c7970(void)

undefined4 * FUN_1413c7970(undefined4 *param_1)

{
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
  *(undefined8 *)(param_1 + 1) = 0;
  *param_1 = 0xffffffff;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  if (((int)param_1[9] < 0) && (param_1[9] != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 6,0);
  }
  if (*(undefined2 **)(param_1 + 6) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 6) = 0;
  }
  param_1[2] = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  return param_1;
}



// FUNCTION 1413c7a20 FUN_1413c7a20 body=104 status=ok
// SIG undefined FUN_1413c7a20(void)

void FUN_1413c7a20(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    lVar1 = lVar1 + 0x10;
    do {
      if (*(longlong *)(lVar1 + 0x48) != 0) {
        FMemory::Free();
      }
      FUN_140b4e2b0(lVar1);
      lVar1 = lVar1 + 0x68;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1413c7a90 FUN_1413c7a90 body=156 status=ok
// SIG undefined FUN_1413c7a90(void)

void FUN_1413c7a90(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x28);
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



// FUNCTION 1413c7b30 FUN_1413c7b30 body=113 status=ok
// SIG undefined FUN_1413c7b30(void)

undefined8 * FUN_1413c7b30(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = (void *)*param_2;
    iVar1 = *(int *)(param_2 + 1);
    *(int *)(param_1 + 1) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      return param_1;
    }
    TArray<int,FDefaultAllocator>::ResizeForCopy(param_1,iVar1);
    _guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 1413c7bc0 FUN_1413c7bc0 body=87 status=ok
// SIG undefined FUN_1413c7bc0(void)

longlong FUN_1413c7bc0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x310) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x208) = &PTR_FUN_14468d298;
  FUN_141300980(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x340);
  }
  return param_1;
}



// FUNCTION 1413c7c20 FUN_1413c7c20 body=98 status=ok
// SIG undefined FUN_1413c7c20(void)

longlong FUN_1413c7c20(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 1413c7c90 FUN_1413c7c90 body=96 status=ok
// SIG undefined FUN_1413c7c90(void)

longlong FUN_1413c7c90(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  FUN_140b4e2b0(param_1 + 0x38);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 1413c7cf0 FUN_1413c7cf0 body=64 status=ok
// SIG undefined FUN_1413c7cf0(void)

longlong FUN_1413c7cf0(longlong param_1,ulonglong param_2)

{
  TArray<FCompositeSubFont,FDefaultAllocator>::~TArray<FCompositeSubFont,FDefaultAllocator>
            (param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1413c7d30 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong USkeletalMeshLODSettings::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  FUN_1413c7a20(param_1 + 0x38);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1413c7e90 FUN_1413c7e90 body=127 status=ok
// SIG undefined FUN_1413c7e90(void)

void FUN_1413c7e90(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0xb8);
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  *(undefined8 *)((longlong)param_2 + 0x88) = 0;
  *(undefined8 *)((longlong)param_2 + 0x90) = 0;
  *(undefined8 *)((longlong)param_2 + 0x98) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb0) = 0;
  return;
}



// FUNCTION 1413c7f40 FUN_1413c7f40 body=83 status=ok
// SIG undefined FUN_1413c7f40(void)

void FUN_1413c7f40(undefined8 param_1,undefined4 *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x68);
  *param_2 = 1;
  param_2[1] = 100;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_2 + 0x16) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}



// FUNCTION 1413c81d0 FUN_1413c81d0 body=217 status=ok
// SIG undefined FUN_1413c81d0(void)

undefined8 FUN_1413c81d0(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    do {
      *param_2 = *(undefined8 *)(param_3 + -8);
      FText::operator=(param_2 + 1,param_3);
      FText::operator=(param_2 + 4,param_3 + 0x18);
      puVar2 = param_2 + 7;
      if (puVar2 != (undefined8 *)(param_3 + 0x30)) {
        iVar1 = *(int *)(param_3 + 0x38);
        _Src = *(void **)(param_3 + 0x30);
        *(int *)(param_2 + 8) = iVar1;
        if ((iVar1 == 0) && (*(int *)((longlong)param_2 + 0x44) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x44) = 0;
        }
        else {
          TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(puVar2,iVar1);
          _guard_xfg_dispatch_icall_nop((void *)*puVar2,_Src,(longlong)iVar1 << 5);
        }
      }
      param_3 = param_3 + 0x48;
      param_4 = param_4 + -1;
      param_2 = param_2 + 9;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1413c82b0 FUN_1413c82b0 body=128 status=ok
// SIG undefined FUN_1413c82b0(void)

undefined8 FUN_1413c82b0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined4 *)(param_2 + 4);
    do {
      *(undefined1 *)(puVar1 + -1) = *(undefined1 *)(param_3 + -4 + (longlong)puVar1);
      *(undefined1 *)((longlong)puVar1 + -3) = *(undefined1 *)(param_3 + -3 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)(param_3 + (longlong)puVar1);
      FString::operator=(puVar1 + 1,param_3 + 4 + (longlong)puVar1);
      FText::operator=(puVar1 + 5,param_3 + 0x14 + (longlong)puVar1);
      puVar1 = puVar1 + 0xc;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1413c8330 FUN_1413c8330 body=74 status=ok
// SIG undefined FUN_1413c8330(void)

undefined1 FUN_1413c8330(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_140da9da0(param_2 + param_3,param_3);
      param_3 = param_3 + 0xb8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1413c83c0 FUN_1413c83c0 body=248 status=ok
// SIG undefined FUN_1413c83c0(void)

undefined8 FUN_1413c83c0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong *plVar7;
  
  if (param_4 != 0) {
    plVar7 = (longlong *)(param_3 + 0x18);
    do {
      FString::operator=(param_2,plVar7 + -3);
      plVar1 = (longlong *)(param_2 + 0x18);
      *(char *)(param_2 + 0x10) = (char)plVar7[-1];
      if (plVar1 != plVar7) {
        iVar6 = (int)plVar7[1];
        lVar3 = *plVar7;
        *(int *)(param_2 + 0x20) = iVar6;
        if ((iVar6 == 0) && (*(int *)(param_2 + 0x24) == 0)) {
          *(undefined4 *)(param_2 + 0x24) = 0;
        }
        else {
          TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(plVar1,iVar6);
          if (iVar6 != 0) {
            puVar4 = (undefined1 *)(lVar3 + 0x10);
            puVar5 = (undefined8 *)*plVar1;
            do {
              *puVar5 = *(undefined8 *)(puVar4 + -0x10);
              puVar5[1] = *(undefined8 *)(puVar4 + -8);
              *(undefined1 *)(puVar5 + 2) = *puVar4;
              puVar2 = (undefined4 *)(puVar4 + 4);
              puVar4 = puVar4 + 0x18;
              *(undefined4 *)((longlong)puVar5 + 0x14) = *puVar2;
              iVar6 = iVar6 + -1;
              puVar5 = puVar5 + 3;
            } while (iVar6 != 0);
          }
        }
      }
      plVar7 = plVar7 + 5;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x28;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1413c84c0 FUN_1413c84c0 body=98 status=ok
// SIG undefined FUN_1413c84c0(void)

undefined1 FUN_1413c84c0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    do {
      TArray<FMaterialSlotEntry,TSizedDefaultAllocator<32>_>::operator=(param_2,param_3 + param_2);
      puVar1 = (undefined8 *)(param_3 + 0x10 + param_2);
      uVar6 = puVar1[1];
      *(undefined8 *)(param_2 + 0x10) = *puVar1;
      *(undefined8 *)(param_2 + 0x18) = uVar6;
      puVar2 = (undefined4 *)(param_3 + 0x20 + param_2);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *(undefined4 *)(param_2 + 0x20) = *puVar2;
      *(undefined4 *)(param_2 + 0x24) = uVar3;
      *(undefined4 *)(param_2 + 0x28) = uVar4;
      *(undefined4 *)(param_2 + 0x2c) = uVar5;
      puVar2 = (undefined4 *)(param_3 + 0x30 + param_2);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *(undefined4 *)(param_2 + 0x30) = *puVar2;
      *(undefined4 *)(param_2 + 0x34) = uVar3;
      *(undefined4 *)(param_2 + 0x38) = uVar4;
      *(undefined4 *)(param_2 + 0x3c) = uVar5;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1413c8530 FUN_1413c8530 body=132 status=ok
// SIG undefined FUN_1413c8530(void)

undefined8 FUN_1413c8530(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined4 *)(param_2 + 8);
    do {
      *(undefined1 *)(puVar1 + -2) = *(undefined1 *)(param_3 + -8 + (longlong)puVar1);
      puVar1[-1] = *(undefined4 *)(param_3 + -4 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)(param_3 + (longlong)puVar1);
      puVar1[1] = *(undefined4 *)(param_3 + 4 + (longlong)puVar1);
      FUN_1413c7b30(puVar1 + 2,param_3 + 8 + (longlong)puVar1);
      puVar1[6] = *(undefined4 *)(param_3 + 0x18 + (longlong)puVar1);
      puVar1[7] = *(undefined4 *)(param_3 + 0x1c + (longlong)puVar1);
      puVar1 = puVar1 + 10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1413c85c0 FUN_1413c85c0 body=250 status=ok
// SIG undefined FUN_1413c85c0(void)

undefined8 FUN_1413c85c0(undefined8 param_1,int *param_2,longlong param_3,int param_4)

{
  int iVar1;
  void *_Src;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  int *piVar6;
  
  if (param_4 != 0) {
    piVar5 = (int *)(param_3 + 0x60);
    do {
      *param_2 = piVar5[-0x18];
      param_2[1] = piVar5[-0x17];
      *(char *)(param_2 + 2) = (char)piVar5[-0x16];
      TArray<FMaterialSlotEntry,TSizedDefaultAllocator<32>_>::operator=(param_2 + 4,piVar5 + -0x14);
      uVar4 = *(undefined8 *)(piVar5 + -0xe);
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(piVar5 + -0x10);
      *(undefined8 *)(param_2 + 10) = uVar4;
      iVar1 = piVar5[-0xb];
      iVar2 = piVar5[-10];
      iVar3 = piVar5[-9];
      param_2[0xc] = piVar5[-0xc];
      param_2[0xd] = iVar1;
      param_2[0xe] = iVar2;
      param_2[0xf] = iVar3;
      iVar1 = piVar5[-7];
      iVar2 = piVar5[-6];
      iVar3 = piVar5[-5];
      param_2[0x10] = piVar5[-8];
      param_2[0x11] = iVar1;
      param_2[0x12] = iVar2;
      param_2[0x13] = iVar3;
      *(char *)(param_2 + 0x14) = (char)piVar5[-4];
      piVar6 = param_2 + 0x16;
      if (piVar6 != piVar5 + -2) {
        iVar1 = *piVar5;
        _Src = *(void **)(piVar5 + -2);
        param_2[0x18] = iVar1;
        if ((iVar1 == 0) && (param_2[0x19] == 0)) {
          param_2[0x19] = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(piVar6,iVar1);
          _guard_xfg_dispatch_icall_nop(*(void **)piVar6,_Src,(longlong)iVar1 << 3);
        }
      }
      piVar5 = piVar5 + 0x1a;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x1a;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1413c86c0 Copy body=144 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FMovieSceneObjectPathChannelKeyValue>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 local_28;
  undefined1 local_20 [24];
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined4 *)(param_2 + 8);
    do {
      puVar1[-2] = *(undefined4 *)(param_3 + -8 + (longlong)puVar1);
      puVar1[-1] = *(undefined4 *)(param_3 + -4 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)(param_3 + (longlong)puVar1);
      local_28 = *(undefined8 *)(param_3 + 8 + (longlong)puVar1);
      FString::FString(local_20,param_3 + 0x10 + (longlong)puVar1);
      FSoftObjectPath::operator=(puVar1 + 2,&local_28);
      *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(param_3 + 0x20 + (longlong)puVar1);
      puVar1 = puVar1 + 0xc;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1413c8750 FUN_1413c8750 body=283 status=ok
// SIG undefined FUN_1413c8750(void)

undefined8 FUN_1413c8750(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  
  if (param_4 != 0) {
    piVar4 = (int *)(param_3 + 0x30);
    do {
      TArray<FMaterialSlotEntry,TSizedDefaultAllocator<32>_>::operator=(param_2,piVar4 + -0xc);
      piVar1 = (int *)(param_2 + 0x18);
      *(int *)(param_2 + 0x10) = piVar4[-8];
      if (piVar1 != piVar4 + -6) {
        iVar2 = piVar4[-4];
        pvVar3 = *(void **)(piVar4 + -6);
        *(int *)(param_2 + 0x20) = iVar2;
        if ((iVar2 == 0) && (*(int *)(param_2 + 0x24) == 0)) {
          *(undefined4 *)(param_2 + 0x24) = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(piVar1,iVar2);
          _guard_xfg_dispatch_icall_nop(*(void **)piVar1,pvVar3,(longlong)iVar2 << 3);
        }
      }
      piVar1 = (int *)(param_2 + 0x28);
      if (piVar1 != piVar4 + -2) {
        iVar2 = *piVar4;
        pvVar3 = *(void **)(piVar4 + -2);
        *(int *)(param_2 + 0x30) = iVar2;
        if ((iVar2 == 0) && (*(int *)(param_2 + 0x34) == 0)) {
          *(undefined4 *)(param_2 + 0x34) = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(piVar1,iVar2);
          _guard_xfg_dispatch_icall_nop(*(void **)piVar1,pvVar3,(longlong)iVar2 << 3);
        }
      }
      piVar4 = piVar4 + 0xe;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x38;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1413c8870 FUN_1413c8870 body=71 status=ok
// SIG undefined FUN_1413c8870(void)

undefined1 FUN_1413c8870(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_140c30ef0(param_2 + param_3,param_3);
      param_3 = param_3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1413c8900 FUN_1413c8900 body=37 status=ok
// SIG undefined FUN_1413c8900(void)

void FUN_1413c8900(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x58) != 0) {
    FMemory::Free();
  }
  FUN_140b4e2b0(param_2 + 0x10);
  return;
}



// FUNCTION 1413c8930 Destruct body=50 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FCompositeSubFont>::Destruct(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x28) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FMemory::Free();
  }
  FUN_140b4e2b0(param_2);
  return;
}



// FUNCTION 1413c8980 FUN_1413c8980 body=55 status=ok
// SIG undefined FUN_1413c8980(void)

void FUN_1413c8980(void)

{
  undefined8 uVar1;
  
  if (DAT_14688aef0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688aef0 = GetStaticEnum(FUN_1413c9780,uVar1,L"EDebugMatchmakingFailure");
  }
  return;
}



// FUNCTION 1413c89c0 FUN_1413c89c0 body=55 status=ok
// SIG undefined FUN_1413c89c0(void)

void FUN_1413c89c0(void)

{
  undefined8 uVar1;
  
  if (DAT_14688aed0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688aed0 = GetStaticEnum(FUN_1413c97b0,uVar1,L"EManagedWidgetType");
  }
  return;
}



// FUNCTION 1413c8a00 FUN_1413c8a00 body=55 status=ok
// SIG undefined FUN_1413c8a00(void)

void FUN_1413c8a00(void)

{
  undefined8 uVar1;
  
  if (DAT_14688aef8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688aef8 = GetStaticEnum(FUN_1413c97e0,uVar1,L"EMatchmakingError");
  }
  return;
}



// FUNCTION 1413c8a40 FUN_1413c8a40 body=55 status=ok
// SIG undefined FUN_1413c8a40(void)

void FUN_1413c8a40(void)

{
  undefined8 uVar1;
  
  if (DAT_14688aed8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688aed8 = GetStaticEnum(FUN_1413c9810,uVar1,L"EMatchmakingRequirementComparisonOp");
  }
  return;
}



// FUNCTION 1413c8a80 FUN_1413c8a80 body=55 status=ok
// SIG undefined FUN_1413c8a80(void)

void FUN_1413c8a80(void)

{
  undefined8 uVar1;
  
  if (DAT_14688aee0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688aee0 = GetStaticEnum(FUN_1413c9840,uVar1,L"EMatchmakingRequirementType");
  }
  return;
}



// FUNCTION 1413c8ac0 FUN_1413c8ac0 body=55 status=ok
// SIG undefined FUN_1413c8ac0(void)

void FUN_1413c8ac0(void)

{
  undefined8 uVar1;
  
  if (DAT_14688aee8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688aee8 = GetStaticEnum(FUN_1413c9870,uVar1,L"EMatchmakingSearchParameterOp");
  }
  return;
}



// FUNCTION 1413c8b00 EMatchmakingState_StaticEnum body=55 status=ok
// SIG undefined EMatchmakingState_StaticEnum(void)

void EMatchmakingState_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_14688af00 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688af00 = GetStaticEnum(FUN_1413c98a0,uVar1,L"EMatchmakingState");
  }
  return;
}



// FUNCTION 1413c8b40 FUN_1413c8b40 body=43 status=ok
// SIG undefined FUN_1413c8b40(void)

void FUN_1413c8b40(longlong *param_1,undefined8 *param_2)

{
  (**(code **)(*param_1 + 0xf8))();
  FCrc::MemCrc32(*param_2,*(int *)(param_2 + 1) * 0x30,0);
  return;
}



// FUNCTION 1413c8b70 FUN_1413c8b70 body=6 status=ok
// SIG undefined FUN_1413c8b70(void)

undefined8 FUN_1413c8b70(void)

{
  return 0x82b28d1a;
}



// FUNCTION 1413c8b80 FUN_1413c8b80 body=6 status=ok
// SIG undefined FUN_1413c8b80(void)

undefined8 FUN_1413c8b80(void)

{
  return 0xdc74b800;
}



// FUNCTION 1413c8b90 FUN_1413c8b90 body=6 status=ok
// SIG undefined FUN_1413c8b90(void)

undefined8 FUN_1413c8b90(void)

{
  return 0x5fdad4fc;
}



// FUNCTION 1413c8ba0 FUN_1413c8ba0 body=6 status=ok
// SIG undefined FUN_1413c8ba0(void)

undefined8 FUN_1413c8ba0(void)

{
  return 0xcca9cd50;
}



// FUNCTION 1413c8bb0 FUN_1413c8bb0 body=6 status=ok
// SIG undefined FUN_1413c8bb0(void)

undefined8 FUN_1413c8bb0(void)

{
  return 0xea2bc91f;
}



// FUNCTION 1413c8bc0 FUN_1413c8bc0 body=6 status=ok
// SIG undefined FUN_1413c8bc0(void)

undefined8 FUN_1413c8bc0(void)

{
  return 0x4f594f8a;
}



// FUNCTION 1413c8bd0 FUN_1413c8bd0 body=6 status=ok
// SIG undefined FUN_1413c8bd0(void)

undefined8 FUN_1413c8bd0(void)

{
  return 0x1d427936;
}



// FUNCTION 1413c8be0 FUN_1413c8be0 body=6 status=ok
// SIG undefined FUN_1413c8be0(void)

undefined8 FUN_1413c8be0(void)

{
  return 0x4b72de87;
}



// FUNCTION 1413c8bf0 FUN_1413c8bf0 body=6 status=ok
// SIG undefined FUN_1413c8bf0(void)

undefined8 FUN_1413c8bf0(void)

{
  return 0x9c991160;
}



// FUNCTION 1413c8c00 FUN_1413c8c00 body=6 status=ok
// SIG undefined FUN_1413c8c00(void)

undefined8 FUN_1413c8c00(void)

{
  return 0xb89575ff;
}



// FUNCTION 1413c8c10 FUN_1413c8c10 body=6 status=ok
// SIG undefined FUN_1413c8c10(void)

undefined8 FUN_1413c8c10(void)

{
  return 0xa8e9af67;
}



// FUNCTION 1413c8c20 FUN_1413c8c20 body=6 status=ok
// SIG undefined FUN_1413c8c20(void)

undefined8 FUN_1413c8c20(void)

{
  return 0xf96f658c;
}



// FUNCTION 1413c8c30 FUN_1413c8c30 body=6 status=ok
// SIG undefined FUN_1413c8c30(void)

undefined8 FUN_1413c8c30(void)

{
  return 0xd759297f;
}



// FUNCTION 1413c8c40 FUN_1413c8c40 body=6 status=ok
// SIG undefined FUN_1413c8c40(void)

undefined8 FUN_1413c8c40(void)

{
  return 0xdf36f0fc;
}



// FUNCTION 1413c8c50 FUN_1413c8c50 body=6 status=ok
// SIG undefined FUN_1413c8c50(void)

undefined8 FUN_1413c8c50(void)

{
  return 0xd822c341;
}



// FUNCTION 1413c8c60 FUN_1413c8c60 body=6 status=ok
// SIG undefined FUN_1413c8c60(void)

undefined8 FUN_1413c8c60(void)

{
  return 0x2eca01d8;
}



// FUNCTION 1413c8c70 FUN_1413c8c70 body=6 status=ok
// SIG undefined FUN_1413c8c70(void)

undefined8 FUN_1413c8c70(void)

{
  return 0x41494f7f;
}



// FUNCTION 1413c8c80 FUN_1413c8c80 body=6 status=ok
// SIG undefined FUN_1413c8c80(void)

undefined8 FUN_1413c8c80(void)

{
  return 0x23528bc;
}



// FUNCTION 1413c8ca0 FUN_1413c8ca0 body=60 status=ok
// SIG undefined FUN_1413c8ca0(void)

void FUN_1413c8ca0(longlong *param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_res10 [24];
  
  lVar1 = *param_1;
  local_res10[0] = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_14688b330);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_res10);
  return;
}



// FUNCTION 1413c8ce0 FUN_1413c8ce0 body=159 status=ok
// SIG undefined FUN_1413c8ce0(void)

void FUN_1413c8ce0(longlong *param_1,void **param_2)

{
  uint uVar1;
  void *_Src;
  longlong lVar2;
  undefined8 uVar3;
  void *local_18;
  ulonglong local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  if (&local_18 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    _Src = *param_2;
    local_10 = (ulonglong)uVar1;
    if (uVar1 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,uVar1,0);
      _guard_xfg_dispatch_icall_nop(local_18,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  lVar2 = *param_1;
  uVar3 = FUN_14178ac60(param_1,DAT_14688b338);
  (**(code **)(lVar2 + 0x208))(param_1,uVar3,&local_18);
  if (local_18 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1413c8d80 FUN_1413c8d80 body=57 status=ok
// SIG undefined FUN_1413c8d80(void)

void FUN_1413c8d80(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14688b340);
                    /* WARNING: Could not recover jumptable at 0x0001413c8db6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1413c8dc0 FUN_1413c8dc0 body=60 status=ok
// SIG undefined FUN_1413c8dc0(void)

void FUN_1413c8dc0(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res10 [6];
  
  lVar1 = *param_1;
  local_res10[0] = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_14688b348);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_res10);
  return;
}



// FUNCTION 1413c8e00 thunk_FUN_142fd5420 body=5 status=ok
// SIG undefined thunk_FUN_142fd5420(void)

void thunk_FUN_142fd5420(void)

{
  FUN_142fd5420();
  return;
}



// FUNCTION 1413c8e10 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UBTTask_RunBehaviorDynamic::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 1413c8e20 FUN_1413c8e20 body=34 status=ok
// SIG undefined FUN_1413c8e20(void)

void FUN_1413c8e20(void)

{
  undefined8 uVar1;
  
  uVar1 = AEquipmentSkin::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_Setup_1449a6a38,1);
  return;
}



// FUNCTION 1413c8e50 StaticRegisterNativesUFGPoleDescriptor body=34 status=ok
// SIG undefined StaticRegisterNativesUFGPoleDescriptor(void)

void UFGPoleDescriptor::StaticRegisterNativesUFGPoleDescriptor(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnHit_1449a6a28,1);
  return;
}



// FUNCTION 1413c8e80 FUN_1413c8e80 body=34 status=ok
// SIG undefined FUN_1413c8e80(void)

void FUN_1413c8e80(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1413c7110();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_CancelMatchmaking_1449a7b88,2);
  return;
}



// FUNCTION 1413c8eb0 StaticRegisterNativesUBlueprintSetLibrary body=34 status=ok
// SIG undefined StaticRegisterNativesUBlueprintSetLibrary(void)

void UBlueprintSetLibrary::StaticRegisterNativesUBlueprintSetLibrary(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ActivateMayhemMode_1449a81e0,0xc);
  return;
}



// FUNCTION 1413c8ee0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688b640 == 0) {
    uVar1 = FUN_1413c8b80();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688b640 = GetStaticStruct(FUN_1413c98d0,uVar2,L"MainMenuCameraBlendParams",0x10,uVar1);
  }
  return;
}



// FUNCTION 1413c8f40 FUN_1413c8f40 body=82 status=ok
// SIG undefined FUN_1413c8f40(void)

void FUN_1413c8f40(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688b630 == 0) {
    uVar1 = FUN_1413c8b70();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688b630 = GetStaticStruct(FUN_1413c9900,uVar2,L"MainMenuCameraBlendParamsSet",0x34,uVar1);
  }
  return;
}



// FUNCTION 1413c8fa0 FUN_1413c8fa0 body=82 status=ok
// SIG undefined FUN_1413c8fa0(void)

void FUN_1413c8fa0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688b620 == 0) {
    uVar1 = FUN_1413c8b90();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688b620 =
         GetStaticStruct(FUN_1413c9930,uVar2,L"MainMenuCameraViewpointBlendPair",0x38,uVar1);
  }
  return;
}



// FUNCTION 1413c9000 FUN_1413c9000 body=82 status=ok
// SIG undefined FUN_1413c9000(void)

void FUN_1413c9000(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688b430 == 0) {
    uVar1 = FUN_1413c8ba0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688b430 = GetStaticStruct(FUN_1413c9960,uVar2,L"MatchmakingModifierData",0x20,uVar1);
  }
  return;
}



// FUNCTION 1413c9060 FUN_1413c9060 body=82 status=ok
// SIG undefined FUN_1413c9060(void)

void FUN_1413c9060(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688b420 == 0) {
    uVar1 = FUN_1413c8bb0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688b420 = GetStaticStruct(FUN_1413c9990,uVar2,L"MatchmakingModifierSetData",0x48,uVar1);
  }
  return;
}



// FUNCTION 1413c90c0 FUN_1413c90c0 body=82 status=ok
// SIG undefined FUN_1413c90c0(void)

void FUN_1413c90c0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688b460 == 0) {
    uVar1 = FUN_1413c8bc0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688b460 = GetStaticStruct(FUN_1413c99c0,uVar2,L"MatchmakingRequirement",0x30,uVar1);
  }
  return;
}



// FUNCTION 1413c9120 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneParticleSectionTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688b410 == 0) {
    uVar1 = FUN_1413c8bd0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688b410 = GetStaticStruct(FUN_1413c99f0,uVar2,L"MatchmakingSearchDefinition",0xb8,uVar1);
  }
  return;
}



// FUNCTION 1413c9180 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceKey::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688b450 == 0) {
    uVar1 = FUN_1413c8be0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688b450 = GetStaticStruct(FUN_1413c9a20,uVar2,L"MatchmakingSearchParameter",0x18,uVar1);
  }
  return;
}



// FUNCTION 1413c91e0 FUN_1413c91e0 body=82 status=ok
// SIG undefined FUN_1413c91e0(void)

void FUN_1413c91e0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688b440 == 0) {
    uVar1 = FUN_1413c8bf0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688b440 = GetStaticStruct(FUN_1413c9a50,uVar2,L"MatchmakingSearchParameters",0x28,uVar1);
  }
  return;
}



// FUNCTION 1413c9240 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventRepeaterTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688b5a0 == 0) {
    uVar1 = FUN_1413c8c00();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688b5a0 = GetStaticStruct(FUN_1413c9a80,uVar2,L"MayhemCoreModifierSet",0x40,uVar1);
  }
  return;
}



// FUNCTION 1413c92a0 FUN_1413c92a0 body=82 status=ok
// SIG undefined FUN_1413c92a0(void)

void FUN_1413c92a0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688b5b0 == 0) {
    uVar1 = FUN_1413c8c10();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688b5b0 = GetStaticStruct(FUN_1413c9ab0,uVar2,L"MayhemCoreSetUIStats",0x30,uVar1);
  }
  return;
}



// FUNCTION 1413c9300 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688b570 == 0) {
    uVar1 = FUN_1413c8c20();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688b570 = GetStaticStruct(FUN_1413c9ae0,uVar2,L"MayhemDebugOverrides",0x10,uVar1);
  }
  return;
}



// FUNCTION 1413c9360 FUN_1413c9360 body=82 status=ok
// SIG undefined FUN_1413c9360(void)

void FUN_1413c9360(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688b4c0 == 0) {
    uVar1 = FUN_1413c8c30();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688b4c0 = GetStaticStruct(FUN_1413c9b10,uVar2,L"MayhemModeState",0x28,uVar1);
  }
  return;
}



// FUNCTION 1413c93c0 FUN_1413c93c0 body=82 status=ok
// SIG undefined FUN_1413c93c0(void)

void FUN_1413c93c0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688b590 == 0) {
    uVar1 = FUN_1413c8c40();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688b590 = GetStaticStruct(FUN_1413c9b40,uVar2,L"MayhemModeTwoLevelOverride",0x68,uVar1);
  }
  return;
}



// FUNCTION 1413c9420 FUN_1413c9420 body=82 status=ok
// SIG undefined FUN_1413c9420(void)

void FUN_1413c9420(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688b5d0 == 0) {
    uVar1 = FUN_1413c8c60();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688b5d0 = GetStaticStruct(FUN_1413c9b70,uVar2,L"MayhemModifier",0x30,uVar1);
  }
  return;
}



// FUNCTION 1413c9480 FUN_1413c9480 body=82 status=ok
// SIG undefined FUN_1413c9480(void)

void FUN_1413c9480(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688b5c0 == 0) {
    uVar1 = FUN_1413c8c50();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688b5c0 = GetStaticStruct(FUN_1413c9ba0,uVar2,L"MayhemModifierSet",0x38,uVar1);
  }
  return;
}



// FUNCTION 1413c94e0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneTransformMask::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688b580 == 0) {
    uVar1 = FUN_1413c8c70();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688b580 = GetStaticStruct(FUN_1413c9bd0,uVar2,L"MayhemReplicableSetsData",4,uVar1);
  }
  return;
}



// FUNCTION 1413c9540 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688b560 == 0) {
    uVar1 = FUN_1413c8c80();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688b560 = GetStaticStruct(FUN_1413c9c00,uVar2,L"PendingMayhemState",0x10,uVar1);
  }
  return;
}



// FUNCTION 1413c95a0 FUN_1413c95a0 body=47 status=ok
// SIG undefined FUN_1413c95a0(void)

longlong FUN_1413c95a0(void)

{
  if (DAT_14688b3a0 == 0) {
    FUN_141786440(&DAT_14688b3a0,&PTR_FUN_1449a17a0);
  }
  return DAT_14688b3a0;
}



// FUNCTION 1413c95d0 FUN_1413c95d0 body=47 status=ok
// SIG undefined FUN_1413c95d0(void)

longlong FUN_1413c95d0(void)

{
  if (DAT_14688b3e8 == 0) {
    FUN_141786440(&DAT_14688b3e8,&PTR_GetPrivateStaticClass_1449a6470);
  }
  return DAT_14688b3e8;
}



// FUNCTION 1413c9600 FUN_1413c9600 body=47 status=ok
// SIG undefined FUN_1413c9600(void)

longlong FUN_1413c9600(void)

{
  if (DAT_14688b470 == 0) {
    FUN_141786440(&DAT_14688b470,&PTR_FUN_1449a4fd0);
  }
  return DAT_14688b470;
}



// FUNCTION 1413c9630 FUN_1413c9630 body=47 status=ok
// SIG undefined FUN_1413c9630(void)

longlong FUN_1413c9630(void)

{
  if (DAT_14688b4d0 == 0) {
    FUN_141786440(&DAT_14688b4d0,&PTR_FUN_1449a1d50);
  }
  return DAT_14688b4d0;
}



// FUNCTION 1413c9660 FUN_1413c9660 body=47 status=ok
// SIG undefined FUN_1413c9660(void)

longlong FUN_1413c9660(void)

{
  if (DAT_14688b550 == 0) {
    FUN_141786440(&DAT_14688b550,&PTR_GetPrivateStaticClass_1449a3680);
  }
  return DAT_14688b550;
}



// FUNCTION 1413c9690 FUN_1413c9690 body=47 status=ok
// SIG undefined FUN_1413c9690(void)

longlong FUN_1413c9690(void)

{
  if (DAT_14688b600 == 0) {
    FUN_141786440(&DAT_14688b600,&PTR_FUN_1449a5800);
  }
  return DAT_14688b600;
}



// FUNCTION 1413c96c0 FUN_1413c96c0 body=47 status=ok
// SIG undefined FUN_1413c96c0(void)

longlong FUN_1413c96c0(void)

{
  if (DAT_14688b5f0 == 0) {
    FUN_141786440(&DAT_14688b5f0,&PTR_FUN_1449a5480);
  }
  return DAT_14688b5f0;
}



// FUNCTION 1413c96f0 FUN_1413c96f0 body=47 status=ok
// SIG undefined FUN_1413c96f0(void)

longlong FUN_1413c96f0(void)

{
  if (DAT_14688b610 == 0) {
    FUN_141786440(&DAT_14688b610,&PTR_GetPrivateStaticClass_1449a59b0);
  }
  return DAT_14688b610;
}



// FUNCTION 1413c9720 FUN_1413c9720 body=47 status=ok
// SIG undefined FUN_1413c9720(void)

longlong FUN_1413c9720(void)

{
  if (DAT_14688b650 == 0) {
    FUN_141786440(&DAT_14688b650,&PTR_FUN_1449a1920);
  }
  return DAT_14688b650;
}



// FUNCTION 1413c9750 FUN_1413c9750 body=47 status=ok
// SIG undefined FUN_1413c9750(void)

longlong FUN_1413c9750(void)

{
  if (DAT_14688b3b0 == 0) {
    FUN_141786a30(&DAT_14688b3b0,&PTR_FUN_146377220);
  }
  return DAT_14688b3b0;
}



// FUNCTION 1413c9780 FUN_1413c9780 body=47 status=ok
// SIG undefined FUN_1413c9780(void)

longlong FUN_1413c9780(void)

{
  if (DAT_14688b3d0 == 0) {
    FUN_1417866a0(&DAT_14688b3d0,&PTR_Z_Construct_UPackage__Script_MechWarrior_14637a4d0);
  }
  return DAT_14688b3d0;
}



// FUNCTION 1413c97b0 FUN_1413c97b0 body=47 status=ok
// SIG undefined FUN_1413c97b0(void)

longlong FUN_1413c97b0(void)

{
  if (DAT_14688b3b8 == 0) {
    FUN_1417866a0(&DAT_14688b3b8,&PTR_Z_Construct_UPackage__Script_MechWarrior_14637a480);
  }
  return DAT_14688b3b8;
}



// FUNCTION 1413c97e0 FUN_1413c97e0 body=47 status=ok
// SIG undefined FUN_1413c97e0(void)

longlong FUN_1413c97e0(void)

{
  if (DAT_14688b3d8 == 0) {
    FUN_1417866a0(&DAT_14688b3d8,&PTR_Z_Construct_UPackage__Script_MechWarrior_14637a520);
  }
  return DAT_14688b3d8;
}



// FUNCTION 1413c9810 FUN_1413c9810 body=47 status=ok
// SIG undefined FUN_1413c9810(void)

longlong FUN_1413c9810(void)

{
  if (DAT_14688b3f8 == 0) {
    FUN_1417866a0(&DAT_14688b3f8,&PTR_Z_Construct_UPackage__Script_MechWarrior_14637a5c0);
  }
  return DAT_14688b3f8;
}



// FUNCTION 1413c9840 FUN_1413c9840 body=47 status=ok
// SIG undefined FUN_1413c9840(void)

longlong FUN_1413c9840(void)

{
  if (DAT_14688b400 == 0) {
    FUN_1417866a0(&DAT_14688b400,&PTR_Z_Construct_UPackage__Script_MechWarrior_14637a610);
  }
  return DAT_14688b400;
}



// FUNCTION 1413c9870 FUN_1413c9870 body=47 status=ok
// SIG undefined FUN_1413c9870(void)

longlong FUN_1413c9870(void)

{
  if (DAT_14688b408 == 0) {
    FUN_1417866a0(&DAT_14688b408,&PTR_Z_Construct_UPackage__Script_MechWarrior_14637a660);
  }
  return DAT_14688b408;
}



// FUNCTION 1413c98a0 FUN_1413c98a0 body=47 status=ok
// SIG undefined FUN_1413c98a0(void)

longlong FUN_1413c98a0(void)

{
  if (DAT_14688b3e0 == 0) {
    FUN_1417866a0(&DAT_14688b3e0,&PTR_Z_Construct_UPackage__Script_MechWarrior_14637a570);
  }
  return DAT_14688b3e0;
}


