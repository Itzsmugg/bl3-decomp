// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142b88ac0 FUN_142b88ac0 body=8 status=ok
// SIG undefined FUN_142b88ac0(void)

void FUN_142b88ac0(void)

{
  DAT_146b2ba24 = 1;
  return;
}



// FUNCTION 142b88ad0 GetGameplayTaskOwner body=85 status=ok
// SIG undefined GetGameplayTaskOwner(void)

undefined8 IGameplayTaskOwnerInterface::GetGameplayTaskOwner(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\HavokTraversalTypes/HavokTraversalType.h"
             ,0x1b,L"Pure virtual not implemented (%s)",L"UHavokTraversalType::ConstructAnalyzer");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\HavokTraversalTypes/HavokTraversalType.h"
             ,0x1b,L"Pure virtual not implemented (%s)",L"UHavokTraversalType::ConstructAnalyzer");
  return 0;
}



// FUNCTION 142b88b30 FUN_142b88b30 body=314 status=ok
// SIG undefined FUN_142b88b30(void)

void FUN_142b88b30(longlong param_1)

{
  LPVOID pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  puVar2 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar1 + 0x58),0x48);
  puVar3 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
    *puVar2 = hkaiClimbUpAnalyzer::vftable;
    *(undefined4 *)(puVar2 + 2) = 0x1ffff;
    *(undefined4 *)(puVar2 + 3) = 0x3fbc430e;
    *(undefined8 *)((longlong)puVar2 + 0x1c) = 0x3fc90fdb;
    *(undefined4 *)(puVar2 + 5) = 0x3f800000;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0x3f000000;
    *(undefined4 *)(puVar2 + 6) = 0x40400000;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0x3f800000;
    *(undefined4 *)(puVar2 + 7) = 0x3f800000;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0x3f800000;
    *(undefined4 *)(puVar2 + 8) = 0x3f800000;
    *(undefined4 *)((longlong)puVar2 + 0x44) = 0x3d4ccccd;
    puVar3 = puVar2;
  }
  *(float *)(puVar3 + 3) = *(float *)(param_1 + 0x28) * 0.017453292;
  *(float *)((longlong)puVar3 + 0x1c) = *(float *)(param_1 + 0x2c) * 0.017453292;
  *(float *)((longlong)puVar3 + 0x24) = *(float *)(param_1 + 0x30) * 0.01;
  *(float *)(puVar3 + 5) = *(float *)(param_1 + 0x58) * 0.01;
  *(float *)((longlong)puVar3 + 0x2c) = *(float *)(param_1 + 0x5c) * 0.01;
  *(float *)(puVar3 + 6) = *(float *)(param_1 + 0x60) * 0.01;
  *(undefined4 *)((longlong)puVar3 + 0x34) = *(undefined4 *)(param_1 + 100);
  *(float *)(puVar3 + 7) = *(float *)(param_1 + 0x68) * 0.01;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = *(undefined4 *)(param_1 + 0x6c);
  *(float *)(puVar3 + 8) = *(float *)(param_1 + 0x70) * 0.01;
  *(float *)((longlong)puVar3 + 0x44) = *(float *)(param_1 + 0x74) * 0.01;
  return;
}



// FUNCTION 142b88c70 FUN_142b88c70 body=268 status=ok
// SIG undefined FUN_142b88c70(void)

void FUN_142b88c70(longlong param_1)

{
  LPVOID pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  puVar2 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar1 + 0x58),0x40);
  puVar3 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    *puVar2 = hkaiDropDownAnalyzer::vftable;
    *(undefined4 *)(puVar2 + 2) = 0x1ffff;
    *(undefined4 *)(puVar2 + 3) = 0x3fbc430e;
    *(undefined8 *)((longlong)puVar2 + 0x1c) = 0x3fc90fdb;
    *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
    *(undefined4 *)(puVar2 + 5) = 0x3f000000;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0x40400000;
    puVar2[6] = 0x3f800000;
    *(undefined4 *)(puVar2 + 7) = 0x3f800000;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0x3d4ccccd;
    puVar3 = puVar2;
  }
  *(float *)(puVar3 + 3) = *(float *)(param_1 + 0x28) * 0.017453292;
  *(float *)((longlong)puVar3 + 0x1c) = *(float *)(param_1 + 0x2c) * 0.017453292;
  *(float *)((longlong)puVar3 + 0x24) = *(float *)(param_1 + 0x30) * 0.01;
  *(float *)(puVar3 + 5) = *(float *)(param_1 + 0x58) * 0.01;
  *(float *)((longlong)puVar3 + 0x2c) = *(float *)(param_1 + 0x5c) * 0.01;
  *(float *)(puVar3 + 6) = *(float *)(param_1 + 0x60) * 0.01;
  *(float *)((longlong)puVar3 + 0x34) = *(float *)(param_1 + 100) * 0.01;
  *(float *)(puVar3 + 7) = *(float *)(param_1 + 0x68) * 0.01;
  return;
}



// FUNCTION 142b88d80 FUN_142b88d80 body=261 status=ok
// SIG undefined FUN_142b88d80(void)

void FUN_142b88d80(longlong param_1)

{
  LPVOID pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  puVar2 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar1 + 0x58),0x40);
  puVar3 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
    *puVar2 = &PTR_FUN_1457d02e8;
    *(undefined4 *)(puVar2 + 2) = 0x1ffff;
    *(undefined4 *)(puVar2 + 3) = 0x3fbc430e;
    *(undefined8 *)((longlong)puVar2 + 0x1c) = 0x3fc90fdb;
    *(undefined4 *)(puVar2 + 5) = 0x40000000;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0x3f000000;
    puVar2[6] = 0x3f800000;
    *(undefined4 *)(puVar2 + 7) = 0x3f000000;
    puVar3 = puVar2;
  }
  *(float *)(puVar3 + 3) = *(float *)(param_1 + 0x28) * 0.017453292;
  *(float *)((longlong)puVar3 + 0x1c) = *(float *)(param_1 + 0x2c) * 0.017453292;
  *(float *)((longlong)puVar3 + 0x24) = *(float *)(param_1 + 0x30) * 0.01;
  *(float *)(puVar3 + 5) = *(float *)(param_1 + 0x58) * 0.01;
  *(float *)(puVar3 + 7) = *(float *)(param_1 + 0x5c) * 0.01;
  *(float *)((longlong)puVar3 + 0x2c) = *(float *)(param_1 + 0x60) * 0.01;
  *(float *)(puVar3 + 6) = *(float *)(param_1 + 100) * 0.01;
  *(float *)((longlong)puVar3 + 0x34) = *(float *)(param_1 + 0x68) * 0.01;
  return;
}



// FUNCTION 142b88e90 FUN_142b88e90 body=370 status=ok
// SIG undefined FUN_142b88e90(void)

void FUN_142b88e90(longlong param_1)

{
  LPVOID pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  puVar2 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar1 + 0x58),0x58);
  puVar3 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    *puVar2 = hkaiVaultAnalyzer::vftable;
    *(undefined4 *)(puVar2 + 2) = 0x1ffff;
    *(undefined4 *)(puVar2 + 3) = 0x3fbc430e;
    *(undefined8 *)((longlong)puVar2 + 0x1c) = 0x3fc90fdb;
    *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
    *(undefined4 *)(puVar2 + 5) = 0x3c000000;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0x3f000000;
    *(undefined4 *)(puVar2 + 6) = 0x3f000000;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0x3fc00000;
    *(undefined4 *)(puVar2 + 7) = 0x3f000000;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0x3f800000;
    *(undefined4 *)(puVar2 + 8) = 0x3fc00000;
    *(undefined8 *)((longlong)puVar2 + 0x44) = 0x3f000000;
    *(undefined4 *)((longlong)puVar2 + 0x4c) = 0;
    *(undefined4 *)(puVar2 + 10) = 0x3f800000;
    puVar3 = puVar2;
  }
  *(float *)(puVar3 + 3) = *(float *)(param_1 + 0x28) * 0.017453292;
  *(float *)((longlong)puVar3 + 0x1c) = *(float *)(param_1 + 0x2c) * 0.017453292;
  *(float *)((longlong)puVar3 + 0x24) = *(float *)(param_1 + 0x30) * 0.01;
  *(float *)(puVar3 + 5) = *(float *)(param_1 + 0x58) * 0.01;
  *(float *)((longlong)puVar3 + 0x2c) = *(float *)(param_1 + 0x5c) * 0.01;
  *(float *)(puVar3 + 6) = *(float *)(param_1 + 0x60) * 0.01;
  *(float *)((longlong)puVar3 + 0x34) = *(float *)(param_1 + 100) * 0.01;
  *(float *)(puVar3 + 7) = *(float *)(param_1 + 0x68) * 0.01;
  *(float *)((longlong)puVar3 + 0x3c) = *(float *)(param_1 + 0x6c) * 0.01;
  *(float *)(puVar3 + 8) = *(float *)(param_1 + 0x70) * 0.01;
  *(undefined4 *)((longlong)puVar3 + 0x44) = *(undefined4 *)(param_1 + 0x74);
  *(float *)(puVar3 + 9) = *(float *)(param_1 + 0x78) * 0.01;
  *(float *)((longlong)puVar3 + 0x4c) = *(float *)(param_1 + 0x7c) * 0.01;
  *(undefined4 *)(puVar3 + 10) = *(undefined4 *)(param_1 + 0x80);
  return;
}



// FUNCTION 142b890e0 FUN_142b890e0 body=126 status=ok
// SIG undefined FUN_142b890e0(void)

void FUN_142b890e0(float *param_1,float *param_2)

{
  *param_2 = *param_1 * 0.01;
  param_2[1] = param_1[1] * 0.01;
  param_2[2] = param_1[2] * 0.01;
  param_2[3] = param_1[3] * 0.01;
  param_2[4] = param_1[4];
  param_2[5] = param_1[5];
  param_2[6] = param_1[6] * 0.01;
  param_2[0xc] = param_1[7] * 0.01;
  param_2[7] = param_1[8] * 0.01;
  *(byte *)(param_2 + 0xd) = *(byte *)(param_1 + 9) & 1;
  return;
}



// FUNCTION 142b89160 FUN_142b89160 body=171 status=ok
// SIG undefined FUN_142b89160(void)

void FUN_142b89160(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  
  if (param_2 != (longlong *)0x0) {
    plVar1 = (longlong *)UAITask::GetPrivateStaticClass();
    plVar2 = param_2;
    while (plVar2 != plVar1) {
      plVar2 = (longlong *)plVar2[6];
      if (plVar2 == (longlong *)0x0) {
        return;
      }
    }
    plVar1 = (longlong *)UAITask::GetPrivateStaticClass();
    plVar2 = param_2;
    do {
      if (plVar2 == plVar1) goto LAB_142b891b7;
      plVar2 = (longlong *)plVar2[6];
    } while (plVar2 != (longlong *)0x0);
    param_2 = (longlong *)0x0;
LAB_142b891b7:
    plVar2 = (longlong *)param_2[0x1f];
    if (plVar2 == (longlong *)0x0) {
      (**(code **)(*param_2 + 0x368))(param_2);
      plVar2 = (longlong *)param_2[0x1f];
    }
    *(int *)(param_1 + 0x30) = (int)plVar2[6];
    uVar3 = (**(code **)(*plVar2 + 0x298))(plVar2);
    *(undefined4 *)(param_1 + 0x34) = uVar3;
    *(undefined2 *)(param_1 + 0x44) = *(undefined2 *)((longlong)plVar2 + 0x44);
    *(int *)(param_1 + 0x38) = (int)plVar2[7];
  }
  return;
}



// FUNCTION 142b89210 FUN_142b89210 body=205 status=ok
// SIG undefined FUN_142b89210(void)

longlong FUN_142b89210(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*(byte *)(param_1 + 0x40) & 2) == 0) {
    iVar2 = FUN_1428cf800(param_2);
    if (iVar2 == 3) {
      return 0;
    }
  }
  lVar3 = FUN_14224d2b0(param_1,param_2);
  if (lVar3 != 0) {
    lVar4 = FUN_142ba9430();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *(uint *)(lVar3 + 0x40) =
           *(uint *)(lVar3 + 0x40) ^ (*(uint *)(param_1 + 0x40) >> 2 ^ *(uint *)(lVar3 + 0x40)) & 1;
      *(uint *)(lVar3 + 0x40) =
           *(uint *)(lVar3 + 0x40) ^ (*(uint *)(param_1 + 0x40) >> 2 ^ *(uint *)(lVar3 + 0x40)) & 2;
      if ((*(byte *)(param_1 + 0x40) & 1) != 0) {
        DAT_146b2ba24 = 1;
      }
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 142b892e0 FUN_142b892e0 body=58 status=ok
// SIG undefined FUN_142b892e0(void)

void FUN_142b892e0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1457d29f8;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_1457d2a40;
  }
  return;
}



// FUNCTION 142b89320 FUN_142b89320 body=58 status=ok
// SIG undefined FUN_142b89320(void)

void FUN_142b89320(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1457d2b98;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_1457d2be0;
  }
  return;
}



// FUNCTION 142b89360 FUN_142b89360 body=58 status=ok
// SIG undefined FUN_142b89360(void)

void FUN_142b89360(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1457d2a88;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_1457d2ad0;
  }
  return;
}



// FUNCTION 142b893a0 FUN_142b893a0 body=58 status=ok
// SIG undefined FUN_142b893a0(void)

void FUN_142b893a0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1457d2cb8;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_1457d2d00;
  }
  return;
}



// FUNCTION 142b893e0 FUN_142b893e0 body=58 status=ok
// SIG undefined FUN_142b893e0(void)

void FUN_142b893e0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1457d2c28;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_1457d2c70;
  }
  return;
}



// FUNCTION 142b89420 CreateCopy body=48 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<FString___cdecl(TSharedPtr<FInterfaceContainer,0>),<lambda_5e27373bf3904ac0086c7d4deb00b610>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1457d2b58;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  }
  return;
}



// FUNCTION 142b89450 CreateCopy body=48 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<FString___cdecl(TSharedPtr<FInterfaceContainer,0>),<lambda_5e27373bf3904ac0086c7d4deb00b610>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1457d2b18;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  }
  return;
}



// FUNCTION 142b89480 CreateCopy body=97 status=ok
// SIG undefined CreateCopy(void)

void TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(void),FAsyncPathFindingQuery>::
     CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd0);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1457d28d8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    FAsyncPathFindingQuery::FAsyncPathFindingQuery(puVar1 + 2,param_1 + 0x10);
    puVar1[0x19] = *(undefined8 *)(param_1 + 200);
    *puVar1 = &PTR_GetPoolName_1457d2920;
  }
  return;
}



// FUNCTION 142b894f0 CreateCopy body=109 status=ok
// SIG undefined CreateCopy(void)

void TBaseUObjectMethodDelegateInstance<0,ANavigationData_const_,TTypeWrapper<void>___cdecl(void),TSharedPtr<FNavigationPath,1>_>
     ::CreateCopy(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x38);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_1457d2968;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar3 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    puVar3[2] = *(undefined8 *)(param_1 + 0x10);
    puVar3[3] = uVar2;
    puVar3[4] = *(undefined8 *)(param_1 + 0x20);
    lVar1 = *(longlong *)(param_1 + 0x28);
    puVar3[5] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar3[6] = *(undefined8 *)(param_1 + 0x30);
    *puVar3 = &PTR_FUN_1457d29b0;
  }
  return;
}



// FUNCTION 142b89560 CreateCopy body=119 status=ok
// SIG undefined CreateCopy(void)

void TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,TTypeWrapper<void>___cdecl(void),TArray<FAsyncPathFindingQuery,FDefaultAllocator>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1457d2848;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[3] = 0;
    FUN_142b7d670(puVar1 + 3,*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),0,0);
    puVar1[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar1 = &PTR_FUN_1457d2890;
  }
  return;
}



// FUNCTION 142b895e0 FUN_142b895e0 body=39 status=ok
// SIG undefined FUN_142b895e0(void)

void FUN_142b895e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1457cd4e8;
    return;
  }
  return;
}



// FUNCTION 142b89610 CreateCrowdManager body=251 status=ok
// SIG undefined CreateCrowdManager(void)

void UNavigationSystemV1::CreateCrowdManager(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    lVar2 = UCrowdManagerBase::GetPrivateStaticClass();
    lVar1 = *(longlong *)(param_1 + 0x38);
    lVar4 = lVar1;
    if (lVar1 != 0) {
      while (lVar4 != lVar2) {
        lVar4 = *(longlong *)(lVar4 + 0x30);
        if (lVar4 == 0) {
          return;
        }
      }
      if (lVar1 != 0) {
        lVar4 = 0;
        if (lVar1 != 0) {
          lVar2 = UCrowdManagerBase::GetPrivateStaticClass();
          for (lVar1 = *(longlong *)(param_1 + 0x38);
              (lVar4 = 0, lVar1 != 0 && (lVar4 = *(longlong *)(param_1 + 0x38), lVar1 != lVar2));
              lVar1 = *(longlong *)(lVar1 + 0x30)) {
          }
        }
        FUN_1417846f0(param_1,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
        uVar3 = FUN_1417985e0(lVar4,param_1,0,0,0,0,0,0,0);
        SetCrowdManager(param_1,uVar3);
      }
    }
  }
  return;
}



// FUNCTION 142b89710 FUN_142b89710 body=1155 status=ok
// SIG undefined FUN_142b89710(void)

longlong * FUN_142b89710(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  uint uVar17;
  uint *puVar18;
  longlong local_res8;
  int local_e8;
  uint uStack_e4;
  uint *puStack_e0;
  uint local_d8;
  uint uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined2 *local_c8;
  undefined8 local_c0;
  undefined2 *local_b8;
  int local_b0;
  undefined8 local_a8;
  int iStack_a0;
  uint uStack_9c;
  uint *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 uStack_78;
  uint *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 local_58 [32];
  longlong local_38;
  
  local_res8 = (**(code **)(*param_1 + 0x148))();
  FActorSpawnParameters::FActorSpawnParameters(local_58);
  local_a8 = (longlong *)CONCAT44(local_a8._4_4_,(undefined4)local_a8);
  if (((*(byte *)(param_1 + 8) & 2) != 0) &&
     (plVar8 = param_1 + 0x26, local_a8 = (longlong *)CONCAT44(local_a8._4_4_,(undefined4)local_a8),
     0 < (int)param_1[0x27] - *(int *)((longlong)param_1 + 0x164))) {
    uStack_e4 = 1;
    puVar1 = (uint *)(param_1 + 0x28);
    local_e8 = 0;
    uVar2 = *(uint *)(param_1 + 0x2b);
    uStack_d4 = 0;
    iStack_d0 = 0;
    if (uVar2 != 0) {
      puVar18 = (uint *)param_1[0x2a];
      if ((uint *)param_1[0x2a] == (uint *)0x0) {
        puVar18 = puVar1;
      }
      uVar3 = *puVar18;
      iStack_d0 = 0;
      local_e8 = 0;
      while (uVar3 == 0) {
        lVar13 = (longlong)local_e8;
        iStack_d0 = iStack_d0 + 0x20;
        iVar11 = local_e8 + 1;
        bVar5 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_e8;
        local_e8 = iVar11;
        if (bVar5) goto LAB_142b89821;
        uVar3 = puVar18[lVar13 + 1];
      }
      uStack_e4 = uVar3 - 1 & uVar3 ^ uVar3;
      iVar11 = 0x1f;
      if (uStack_e4 != 0) {
        for (; uStack_e4 >> iVar11 == 0; iVar11 = iVar11 + -1) {
        }
      }
      if (uStack_e4 == 0) {
        iVar11 = 0x20;
      }
      else {
        iVar11 = 0x1f - iVar11;
      }
      uStack_d4 = (iStack_d0 - iVar11) + 0x1f;
      if ((int)uVar2 < (int)uStack_d4) {
LAB_142b89821:
        uStack_d4 = uVar2;
      }
    }
    uVar3 = *(uint *)(param_1 + 0x2b);
    uStack_90 = CONCAT44(uStack_d4,0xffffffff);
    local_88 = CONCAT44(uStack_cc,iStack_d0);
    uStack_78 = CONCAT44(uStack_e4,local_e8);
    local_d8 = -1 << ((byte)uVar3 & 0x1f);
    uVar17 = uVar3 & 0xffffffe0;
    iStack_a0 = local_e8;
    uStack_9c = uStack_e4;
    puStack_e0 = puVar1;
    uStack_d4 = uVar3;
    local_98 = puVar1;
    local_80 = plVar8;
    puStack_70 = puVar1;
    uStack_68 = uStack_90;
    uStack_60 = local_88;
    local_a8 = plVar8;
    if (uVar3 != uVar2) {
      puVar18 = (uint *)param_1[0x2a];
      if ((uint *)param_1[0x2a] == (uint *)0x0) {
        puVar18 = puVar1;
      }
      uVar12 = puVar18[(int)uVar3 >> 5] & local_d8;
      iVar11 = (int)uVar3 >> 5;
      while (uVar12 == 0) {
        uVar17 = uVar17 + 0x20;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar11)
        goto LAB_142b89905;
        uVar12 = puVar18[(longlong)iVar11 + 1];
        local_d8 = 0xffffffff;
        iVar11 = iVar11 + 1;
      }
      uVar12 = uVar12 - 1 & uVar12 ^ uVar12;
      iVar11 = 0x1f;
      if (uVar12 != 0) {
        for (; uVar12 >> iVar11 == 0; iVar11 = iVar11 + -1) {
        }
      }
      if (uVar12 == 0) {
        iVar11 = 0x20;
      }
      else {
        iVar11 = 0x1f - iVar11;
      }
      uStack_d4 = (uVar17 - iVar11) + 0x1f;
      uVar3 = uStack_d4;
      if ((int)uVar2 < (int)uStack_d4) {
LAB_142b89905:
        uStack_d4 = uVar2;
        uVar3 = uVar2;
      }
    }
    while( true ) {
      if ((uStack_90._4_4_ == uVar3) && (local_98 == puVar1)) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if ((bVar5) && (local_a8 == plVar8)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) goto LAB_142b89976;
      lVar13 = (longlong)(int)uStack_90._4_4_ * 0x34 + *local_a8;
      cVar6 = FWeakObjectPtr::IsValid(lVar13 + 0x24);
      if (cVar6 != '\0') break;
      uStack_90 = CONCAT44(uStack_90._4_4_,(uint)uStack_90 & ~uStack_9c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_a0);
    }
    local_38 = FWeakObjectPtr::Get(lVar13 + 0x24);
  }
LAB_142b89976:
  lVar13 = local_res8;
  if (local_38 == 0) {
    local_38 = *(longlong *)(local_res8 + 0x30);
  }
  if (*(longlong *)(param_2 + 0x48) != 0) {
    lVar7 = FUN_1428dfc70();
    lVar14 = *(longlong *)(param_2 + 0x48);
    for (lVar4 = lVar14; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
      if (lVar4 == lVar7) goto LAB_142b899bb;
    }
  }
  lVar14 = 0;
LAB_142b899bb:
  plVar8 = (longlong *)UWorld::SpawnActor(lVar13,lVar14,0,0,local_58);
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x730))(plVar8,param_2);
    local_res8 = 0;
    if (*(longlong *)(param_2 + 0x30) != 0) {
      puVar9 = (undefined8 *)FName::ToString((longlong *)(param_2 + 0x30),&local_e8);
      if (*(int *)(puVar9 + 1) == 0) {
        puVar15 = &DAT_143f3eda8;
      }
      else {
        puVar15 = (undefined2 *)*puVar9;
      }
      local_res8 = plVar8[3];
      lVar13 = FName::GetComparisonNameEntry(&local_res8);
      if (lVar13 == 0) {
        local_c8 = (undefined2 *)0x0;
        local_c0 = 10;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
        FGenericPlatformString::Memcpy(local_c8,L"*INVALID*",0x14);
      }
      else {
        FNameEntry::GetPlainNameString(lVar13,&local_c8);
      }
      puVar16 = &DAT_143f3eda8;
      if ((int)local_c0 != 0) {
        puVar16 = local_c8;
      }
      FString::PrintfImpl(&local_b8,L"%s-%s",puVar16,puVar15);
      if (local_c8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (CONCAT44(uStack_e4,local_e8) != 0) {
        FMemory::Free();
      }
      puVar15 = &DAT_143f3eda8;
      if (local_b0 != 0) {
        puVar15 = local_b8;
      }
      plVar10 = (longlong *)FUN_141799410(0,plVar8[4],puVar15,1);
      if (plVar10 != (longlong *)0x0) {
        lVar13 = FUN_142baab40();
        if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar13 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8)
            != lVar13 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          (**(code **)(*param_1 + 0x2e0))(param_1,plVar10);
          TSet<TTuple<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::Remove(param_1 + 0x44,plVar10 + 0x8d);
        }
        (**(code **)(*plVar10 + 0x138))(plVar10,0,0,0x75);
      }
      puVar15 = &DAT_143f3eda8;
      if (local_b0 != 0) {
        puVar15 = local_b8;
      }
      (**(code **)(*plVar8 + 0x138))(plVar8,puVar15,0,5);
      if (local_b8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
  }
  return plVar8;
}



// FUNCTION 142b89ba0 CreateNewNavCollisionInstance body=89 status=ok
// SIG undefined CreateNewNavCollisionInstance(void)

void `anonymous_namespace'::CreateNewNavCollisionInstance(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = UNavCollision::GetPrivateStaticClass();
  FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
  return;
}



// FUNCTION 142b89c00 FUN_142b89c00 body=140 status=ok
// SIG undefined FUN_142b89c00(void)

void FUN_142b89c00(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_142338f40();
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (((plVar1 != (longlong *)0x0) && (lVar3 = (**(code **)(*plVar1 + 0x148))(plVar1), lVar3 != 0))
     && (lVar3 = *(longlong *)(lVar3 + 0x138), lVar3 != 0)) {
    lVar4 = FUN_142ba9430();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      TSet<TTuple<UObjectBase_const_*,FUniqueObjectGuid>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FUniqueObjectGuid,0>,FDefaultSetAllocator>
      ::Remove(lVar3 + 0x180,plVar1);
    }
  }
  return;
}



// FUNCTION 142b89c90 FUN_142b89c90 body=1699 status=ok
// SIG undefined FUN_142b89c90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142b89c90(uint *param_1,undefined8 *param_2,longlong *param_3)

{
  float fVar1;
  undefined4 uVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  void *pvVar9;
  longlong lVar10;
  char cVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  uint uVar19;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_298 [32];
  longlong *local_278;
  undefined1 *local_270;
  undefined *local_268;
  undefined1 local_258;
  undefined1 local_257 [7];
  float local_250;
  float local_24c;
  float local_248;
  float local_240;
  float local_23c;
  float local_238;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  uint *local_218;
  undefined1 local_208 [12];
  undefined4 local_1fc;
  float local_1e0;
  undefined1 local_194 [28];
  uint local_178 [2];
  longlong local_170;
  undefined8 local_168;
  longlong local_160;
  undefined8 local_158;
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
  uint local_114;
  undefined1 local_108 [72];
  longlong local_c0;
  longlong local_a0;
  ulonglong local_88;
  ulonglong uVar20;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  local_148 = param_2[2];
  uStack_140 = param_2[3];
  local_178[0] = local_178[0] & 0xfffffffe;
  local_114 = local_114 & 0xfffffff8;
  local_138 = *(undefined4 *)(param_2 + 4);
  uStack_134 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_130 = *(undefined4 *)(param_2 + 5);
  uStack_12c = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar16 = 0;
  local_128 = *(undefined4 *)(param_2 + 6);
  uStack_124 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_120 = *(undefined4 *)(param_2 + 7);
  uStack_11c = *(undefined4 *)((longlong)param_2 + 0x3c);
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_218 = param_1;
  if (0 < (int)param_3[1]) {
    local_118 = *(undefined4 *)(*param_3 + 0xc);
    FSimpleLinkNavModifier::SetLinks(local_178,param_3);
  }
  pvVar9 = ThreadLocalStoragePointer;
  if (0 < (int)local_168) {
    uVar18 = (ulonglong)_tls_index;
    uVar20 = uVar16;
    do {
      lVar10 = local_170;
      if (*(char *)(uVar16 + 8 + local_170) == '\x02') {
        puVar15 = (undefined8 *)(local_170 + 0x44 + uVar16);
        puVar17 = (undefined8 *)(local_170 + 0x38 + uVar16);
        if (puVar17 != puVar15) {
          uVar12 = *puVar17;
          uVar2 = *(undefined4 *)(puVar17 + 1);
          *puVar17 = *puVar15;
          *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar15 + 1);
          *puVar15 = uVar12;
          *(undefined4 *)(puVar15 + 1) = uVar2;
        }
      }
      fVar1 = *(float *)(uVar16 + 4 + local_170);
      if (0.0 < fVar1) {
        fVar4 = *(float *)(param_2 + 2);
        fVar5 = *(float *)((longlong)param_2 + 0x14);
        fVar6 = *(float *)(param_2 + 3);
        fVar7 = *(float *)((longlong)param_2 + 0x1c);
        plVar3 = (longlong *)*param_2;
        fVar24 = *(float *)(param_2 + 6) * *(float *)(uVar16 + 0x44 + local_170);
        fVar25 = *(float *)((longlong)param_2 + 0x34) * *(float *)(uVar16 + 0x48 + local_170);
        fVar26 = *(float *)(param_2 + 7) * *(float *)(uVar16 + 0x4c + local_170);
        fVar21 = fVar26 * fVar5 - fVar25 * fVar6;
        fVar22 = fVar24 * fVar6 - fVar26 * fVar4;
        fVar23 = fVar25 * fVar4 - fVar24 * fVar5;
        fVar21 = fVar21 + fVar21;
        fVar22 = fVar22 + fVar22;
        fVar23 = fVar23 + fVar23;
        fVar27 = 0.0;
        local_250 = *(float *)(param_2 + 4) +
                    (fVar23 * fVar5 - fVar22 * fVar6) + fVar21 * fVar7 + fVar24;
        local_24c = *(float *)((longlong)param_2 + 0x24) +
                    (fVar21 * fVar6 - fVar23 * fVar4) + fVar22 * fVar7 + fVar25;
        local_248 = *(float *)(param_2 + 5) +
                    (fVar22 * fVar4 - fVar21 * fVar5) + fVar23 * fVar7 + fVar26;
        if ((*(int *)(*(longlong *)((longlong)pvVar9 + uVar18 * 8) + 0x38) < DAT_146b2bbe8) &&
           (_Init_thread_header(&DAT_146b2bbe8), DAT_146b2bbe8 == -1)) {
          FName::FName(&DAT_146b2bbe0,"RawGeometryFall",1);
          _Init_thread_footer(&DAT_146b2bbe8);
        }
        local_278 = plVar3;
        FUN_1422ffb20(local_108,DAT_146b2bbe0,&local_258,1);
        _guard_xfg_dispatch_icall_nop(local_208,0,0x90);
        local_228 = local_248 + -fVar1;
        local_230 = local_250;
        local_22c = local_24c;
        local_1fc = 0x3f800000;
        uVar12 = (**(code **)(*plVar3 + 0x148))(plVar3);
        local_268 = &DAT_146aefe68;
        local_270 = local_108;
        local_278 = (longlong *)((ulonglong)local_278 & 0xffffffff00000000);
        cVar11 = UWorld::LineTraceSingleByChannel(uVar12,local_208,&local_250,&local_230);
        if ((cVar11 != '\0') && (lVar13 = FWeakObjectPtr::Get(local_194), lVar13 != 0)) {
          lVar14 = FUN_142a232e0();
          if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar14 + 0x90) * 8) != lVar14 + 0x88)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          if (bVar8) {
            fVar27 = local_248 - local_1e0;
          }
        }
        if (local_a0 != 0) {
          FMemory::Free();
        }
        if (local_c0 != 0) {
          FMemory::Free();
        }
        if (0.0 < fVar27) {
          *(float *)(uVar16 + 0x4c + lVar10) = *(float *)(uVar16 + 0x4c + lVar10) - fVar27;
        }
      }
      fVar1 = *(float *)(uVar16 + lVar10);
      if (0.0 < fVar1) {
        fVar4 = *(float *)(param_2 + 2);
        fVar5 = *(float *)((longlong)param_2 + 0x14);
        fVar6 = *(float *)(param_2 + 3);
        fVar7 = *(float *)((longlong)param_2 + 0x1c);
        plVar3 = (longlong *)*param_2;
        fVar24 = *(float *)(param_2 + 6) * *(float *)(uVar16 + 0x38 + lVar10);
        fVar25 = *(float *)((longlong)param_2 + 0x34) * *(float *)(uVar16 + 0x3c + lVar10);
        fVar26 = *(float *)(param_2 + 7) * *(float *)(uVar16 + 0x40 + lVar10);
        fVar21 = fVar26 * fVar5 - fVar25 * fVar6;
        fVar22 = fVar24 * fVar6 - fVar26 * fVar4;
        fVar23 = fVar25 * fVar4 - fVar24 * fVar5;
        fVar21 = fVar21 + fVar21;
        fVar22 = fVar22 + fVar22;
        fVar23 = fVar23 + fVar23;
        fVar27 = 0.0;
        local_240 = *(float *)(param_2 + 4) +
                    (fVar23 * fVar5 - fVar22 * fVar6) + fVar21 * fVar7 + fVar24;
        local_23c = *(float *)((longlong)param_2 + 0x24) +
                    (fVar21 * fVar6 - fVar23 * fVar4) + fVar22 * fVar7 + fVar25;
        local_238 = *(float *)(param_2 + 5) +
                    (fVar22 * fVar4 - fVar21 * fVar5) + fVar23 * fVar7 + fVar26;
        if ((*(int *)(*(longlong *)((longlong)pvVar9 + uVar18 * 8) + 0x38) < DAT_146b2bbe8) &&
           (_Init_thread_header(&DAT_146b2bbe8), DAT_146b2bbe8 == -1)) {
          FName::FName(&DAT_146b2bbe0,"RawGeometryFall",1);
          _Init_thread_footer(&DAT_146b2bbe8);
        }
        local_278 = plVar3;
        FUN_1422ffb20(local_108,DAT_146b2bbe0,local_257,1);
        _guard_xfg_dispatch_icall_nop(local_208,0,0x90);
        local_21c = local_238 + -fVar1;
        local_224 = local_240;
        local_220 = local_23c;
        local_1fc = 0x3f800000;
        uVar12 = (**(code **)(*plVar3 + 0x148))(plVar3);
        local_268 = &DAT_146aefe68;
        local_270 = local_108;
        local_278 = (longlong *)((ulonglong)local_278 & 0xffffffff00000000);
        cVar11 = UWorld::LineTraceSingleByChannel(uVar12,local_208,&local_240,&local_224);
        if ((cVar11 != '\0') && (lVar13 = FWeakObjectPtr::Get(local_194), lVar13 != 0)) {
          lVar14 = FUN_142a232e0();
          if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar14 + 0x90) * 8) != lVar14 + 0x88)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          if (bVar8) {
            fVar27 = local_238 - local_1e0;
          }
        }
        if (local_a0 != 0) {
          FMemory::Free();
        }
        if (local_c0 != 0) {
          FMemory::Free();
        }
        if (0.0 < fVar27) {
          *(float *)(uVar16 + 0x40 + lVar10) = *(float *)(uVar16 + 0x40 + lVar10) - fVar27;
        }
      }
      uVar19 = (int)uVar20 + 1;
      uVar20 = (ulonglong)uVar19;
      uVar16 = uVar16 + 0x50;
      param_1 = local_218;
    } while ((int)uVar19 < (int)local_168);
  }
  uVar19 = param_1[0xc];
  param_1[0xc] = uVar19 + 1;
  if ((int)param_1[0xd] < (int)(uVar19 + 1)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 10,uVar19);
  }
  FSimpleLinkNavModifier::FSimpleLinkNavModifier
            ((longlong)(int)uVar19 * 0x70 + *(longlong *)(param_1 + 10),local_178);
  uVar19 = *param_1;
  *param_1 = ((local_178[0] | uVar19) ^ uVar19) & 1 ^ uVar19;
  if (local_160 != 0) {
    FMemory::Free();
  }
  if (local_170 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142b8a340 FUN_142b8a340 body=1780 status=ok
// SIG undefined FUN_142b8a340(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142b8a340(uint *param_1,undefined8 *param_2,longlong *param_3)

{
  float fVar1;
  undefined4 uVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  longlong lVar7;
  char cVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  uint uVar16;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_2b8 [32];
  longlong *local_298;
  undefined1 *local_290;
  undefined *local_288;
  undefined1 local_278;
  undefined1 local_277 [7];
  float local_270;
  float local_26c;
  float local_268;
  float local_260;
  float local_25c;
  float local_258;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  uint *local_238;
  undefined1 local_228 [12];
  undefined4 local_21c;
  float local_200;
  undefined1 local_1b4 [28];
  uint local_198 [2];
  longlong local_190;
  undefined8 local_188;
  longlong local_180;
  undefined8 local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  uint local_134;
  undefined1 local_128 [72];
  longlong local_e0;
  longlong local_c0;
  ulonglong local_a8;
  
  local_a8 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  local_168 = param_2[2];
  uStack_160 = param_2[3];
  local_198[0] = local_198[0] & 0xfffffffe;
  local_134 = local_134 & 0xfffffff8;
  local_158 = *(undefined4 *)(param_2 + 4);
  uStack_154 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_150 = *(undefined4 *)(param_2 + 5);
  uStack_14c = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar14 = 0;
  local_148 = *(undefined4 *)(param_2 + 6);
  uStack_144 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_140 = *(undefined4 *)(param_2 + 7);
  uStack_13c = *(undefined4 *)((longlong)param_2 + 0x3c);
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_238 = param_1;
  if (0 < (int)param_3[1]) {
    local_138 = *(undefined4 *)(*param_3 + 0xc);
    FSimpleLinkNavModifier::SetSegmentLinks(local_198,param_3);
  }
  uVar17 = uVar14;
  if (0 < (int)local_178) {
    do {
      lVar7 = local_180;
      if (*(char *)(uVar14 + 8 + local_180) == '\x02') {
        puVar13 = (undefined8 *)(local_180 + 0x50 + uVar14);
        puVar15 = (undefined8 *)(local_180 + 0x38 + uVar14);
        if (puVar15 != puVar13) {
          uVar9 = *puVar15;
          uVar2 = *(undefined4 *)(puVar15 + 1);
          *puVar15 = *puVar13;
          *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar13 + 1);
          *puVar13 = uVar9;
          *(undefined4 *)(puVar13 + 1) = uVar2;
        }
        puVar13 = (undefined8 *)(local_180 + 0x5c + uVar14);
        puVar15 = (undefined8 *)(local_180 + 0x44 + uVar14);
        if (puVar15 != puVar13) {
          uVar9 = *puVar15;
          uVar2 = *(undefined4 *)(puVar15 + 1);
          *puVar15 = *puVar13;
          *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar13 + 1);
          *puVar13 = uVar9;
          *(undefined4 *)(puVar13 + 1) = uVar2;
        }
      }
      fVar1 = *(float *)(uVar14 + 4 + local_180);
      if (0.0 < fVar1) {
        fVar24 = *(float *)(param_2 + 2);
        fVar25 = *(float *)((longlong)param_2 + 0x14);
        fVar4 = *(float *)(param_2 + 3);
        fVar5 = *(float *)((longlong)param_2 + 0x1c);
        lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        plVar3 = (longlong *)*param_2;
        fVar18 = *(float *)(param_2 + 6) * *(float *)(uVar14 + 0x50 + local_180);
        fVar19 = *(float *)((longlong)param_2 + 0x34) * *(float *)(uVar14 + 0x54 + local_180);
        fVar20 = *(float *)(param_2 + 7) * *(float *)(uVar14 + 0x58 + local_180);
        fVar21 = fVar20 * fVar25 - fVar19 * fVar4;
        fVar22 = fVar18 * fVar4 - fVar20 * fVar24;
        fVar23 = fVar19 * fVar24 - fVar18 * fVar25;
        fVar21 = fVar21 + fVar21;
        fVar22 = fVar22 + fVar22;
        fVar23 = fVar23 + fVar23;
        local_270 = *(float *)(param_2 + 4) +
                    (fVar23 * fVar25 - fVar22 * fVar4) + fVar21 * fVar5 + fVar18;
        local_26c = *(float *)((longlong)param_2 + 0x24) +
                    (fVar21 * fVar4 - fVar23 * fVar24) + fVar22 * fVar5 + fVar19;
        local_268 = *(float *)(param_2 + 5) +
                    (fVar22 * fVar24 - fVar21 * fVar25) + fVar23 * fVar5 + fVar20;
        fVar24 = *(float *)(param_2 + 6) * *(float *)(uVar14 + 0x5c + local_180);
        fVar24 = *(float *)((longlong)param_2 + 0x34) * *(float *)(uVar14 + 0x60 + local_180);
        fVar24 = *(float *)(param_2 + 7) * *(float *)(uVar14 + 100 + local_180);
        fVar24 = fVar24 * fVar25 - fVar24 * fVar4;
        fVar24 = fVar24 * fVar4 - fVar24 * fVar24;
        fVar24 = fVar24 * fVar24 - fVar24 * fVar25;
        fVar24 = fVar24 + fVar24;
        fVar24 = fVar24 + fVar24;
        fVar24 = fVar24 + fVar24;
        fVar24 = 0.0;
        local_260 = *(float *)(param_2 + 4) +
                    (fVar24 * fVar25 - fVar24 * fVar4) + fVar24 * fVar5 + fVar24;
        local_25c = *(float *)((longlong)param_2 + 0x24) +
                    (fVar24 * fVar4 - fVar24 * fVar24) + fVar24 * fVar5 + fVar24;
        local_258 = *(float *)(param_2 + 5) +
                    (fVar24 * fVar24 - fVar24 * fVar25) + fVar24 * fVar5 + fVar24;
        if ((*(int *)(lVar12 + 0x38) < DAT_146b2bbe8) &&
           (_Init_thread_header(&DAT_146b2bbe8), DAT_146b2bbe8 == -1)) {
          FName::FName(&DAT_146b2bbe0,"RawGeometryFall",1);
          _Init_thread_footer(&DAT_146b2bbe8);
        }
        local_298 = plVar3;
        FUN_1422ffb20(local_128,DAT_146b2bbe0,&local_278,1);
        _guard_xfg_dispatch_icall_nop(local_228,0,0x90);
        local_248 = local_268 + -fVar1;
        local_250 = local_270;
        local_24c = local_26c;
        local_21c = 0x3f800000;
        uVar9 = (**(code **)(*plVar3 + 0x148))(plVar3);
        local_288 = &DAT_146aefe68;
        local_290 = local_128;
        local_298 = (longlong *)((ulonglong)local_298 & 0xffffffff00000000);
        cVar8 = UWorld::LineTraceSingleByChannel(uVar9,local_228,&local_270,&local_250);
        if ((cVar8 != '\0') && (lVar10 = FWeakObjectPtr::Get(local_1b4), lVar10 != 0)) {
          lVar11 = FUN_142a232e0();
          if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (bVar6) {
            fVar24 = local_268 - local_200;
          }
        }
        if (local_c0 != 0) {
          FMemory::Free();
        }
        if (local_e0 != 0) {
          FMemory::Free();
        }
        fVar25 = 0.0;
        fVar1 = *(float *)(uVar14 + 4 + lVar7);
        plVar3 = (longlong *)*param_2;
        if ((*(int *)(lVar12 + 0x38) < DAT_146b2bbe8) &&
           (_Init_thread_header(&DAT_146b2bbe8), DAT_146b2bbe8 == -1)) {
          FName::FName(&DAT_146b2bbe0,"RawGeometryFall",1);
          _Init_thread_footer(&DAT_146b2bbe8);
        }
        local_298 = plVar3;
        FUN_1422ffb20(local_128,DAT_146b2bbe0,local_277,1);
        _guard_xfg_dispatch_icall_nop(local_228,0,0x90);
        local_23c = local_258 + -fVar1;
        local_244 = local_260;
        local_240 = local_25c;
        local_21c = 0x3f800000;
        uVar9 = (**(code **)(*plVar3 + 0x148))(plVar3);
        local_288 = &DAT_146aefe68;
        local_290 = local_128;
        local_298 = (longlong *)((ulonglong)local_298 & 0xffffffff00000000);
        cVar8 = UWorld::LineTraceSingleByChannel(uVar9,local_228,&local_260,&local_244);
        if ((cVar8 != '\0') && (lVar12 = FWeakObjectPtr::Get(local_1b4), lVar12 != 0)) {
          lVar10 = FUN_142a232e0();
          if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (bVar6) {
            fVar25 = local_258 - local_200;
          }
        }
        if (local_c0 != 0) {
          FMemory::Free();
        }
        if (local_e0 != 0) {
          FMemory::Free();
        }
        if (0.0 < fVar24) {
          *(float *)(uVar14 + 0x58 + lVar7) = *(float *)(uVar14 + 0x58 + lVar7) - fVar24;
        }
        if (0.0 < fVar25) {
          *(float *)(uVar14 + 100 + lVar7) = *(float *)(uVar14 + 100 + lVar7) - fVar25;
        }
      }
      uVar16 = (int)uVar17 + 1;
      uVar14 = uVar14 + 0x68;
      param_1 = local_238;
      uVar17 = (ulonglong)uVar16;
    } while ((int)uVar16 < (int)local_178);
  }
  uVar16 = param_1[0xc];
  param_1[0xc] = uVar16 + 1;
  if ((int)param_1[0xd] < (int)(uVar16 + 1)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 10,uVar16);
  }
  FSimpleLinkNavModifier::FSimpleLinkNavModifier
            ((longlong)(int)uVar16 * 0x70 + *(longlong *)(param_1 + 10),local_198);
  uVar16 = *param_1;
  *param_1 = ((local_198[0] | uVar16) ^ uVar16) & 1 ^ uVar16;
  if (local_180 != 0) {
    FMemory::Free();
  }
  if (local_190 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142b8aa40 BeginDestroy body=27 status=ok
// SIG undefined BeginDestroy(void)

void UFlowChart::BeginDestroy(undefined8 param_1)

{
  FUN_142b99c10();
  FUN_142227880(param_1);
  return;
}



// FUNCTION 142b8aa60 DisableGoalActorObservation body=59 status=ok
// SIG undefined DisableGoalActorObservation(void)

void FNavigationPath::DisableGoalActorObservation(longlong param_1)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x40) = local_res8;
  *(undefined4 *)(param_1 + 0x44) = local_resc;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0xbf800000;
  return;
}



// FUNCTION 142b8aaa0 FUN_142b8aaa0 body=52 status=ok
// SIG undefined FUN_142b8aaa0(void)

void FUN_142b8aaa0(longlong *param_1)

{
  if ((*(byte *)((longlong)param_1 + 0x39a) & 2) == 0) {
    (**(code **)(*param_1 + 0x328))();
    (**(code **)(*param_1 + 0x2b8))(param_1);
    *(byte *)((longlong)param_1 + 0x39a) = *(byte *)((longlong)param_1 + 0x39a) | 2;
  }
  return;
}



// FUNCTION 142b8aae0 DoesIntersectBox body=678 status=ok
// SIG undefined DoesIntersectBox(void)

longlong FNavigationPath::DoesIntersectBox
                   (longlong param_1,undefined8 param_2,undefined8 *param_3,int param_4,int *param_5
                   ,longlong param_6)

{
  undefined8 uVar1;
  int iVar2;
  float fVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  undefined1 local_res8 [8];
  undefined8 local_e8;
  float local_e0;
  undefined8 local_d8;
  float local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [112];
  
  iVar2 = *(int *)(param_1 + 0x30);
  uVar6 = (ulonglong)param_4;
  if (((iVar2 < 2) || (param_4 < 0)) || (iVar2 <= param_4)) {
    return (ulonglong)(uint3)((uint)iVar2 >> 8) << 8;
  }
  uVar1 = *param_3;
  local_d0 = *(float *)(param_3 + 1);
  local_d8._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
  local_d8._0_4_ = (float)uVar1;
  lVar7 = uVar6 << 5;
  fVar8 = local_d8._4_4_;
  fVar9 = (float)local_d8;
  local_d8 = uVar1;
  do {
    uVar1 = *(undefined8 *)(lVar7 + *(longlong *)(param_1 + 0x28));
    local_e8._0_4_ = (float)uVar1;
    local_e8._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    fVar3 = *(float *)(lVar7 + 8 + *(longlong *)(param_1 + 0x28));
    local_b8 = (float)local_e8 - fVar9;
    local_b4 = local_e8._4_4_ - fVar8;
    local_b0 = fVar3 - local_d0;
    fVar9 = (float)local_e8;
    fVar8 = local_e8._4_4_;
    if (1e-08 < local_b4 * local_b4 + local_b8 * local_b8 + local_b0 * local_b0) {
      local_e8 = uVar1;
      local_e0 = fVar3;
      if (param_6 == 0) {
        if (local_b8 == 0.0) {
          local_c8 = 3.4e+38;
        }
        else {
          local_c8 = 1.0 / local_b8;
        }
        if (local_b4 == 0.0) {
          local_c4 = 3.4e+38;
        }
        else {
          local_c4 = 1.0 / local_b4;
        }
        if (local_b0 == 0.0) {
          local_c0 = 3.4e+38;
        }
        else {
          local_c0 = 1.0 / local_b0;
        }
        cVar4 = FMath::LineBoxIntersection(param_2,&local_d8,&local_e8,&local_b8,&local_c8);
        if (cVar4 != '\0') goto LAB_142b8ad0a;
      }
      else {
        cVar4 = FMath::LineExtentBoxIntersection
                          (param_2,&local_d8,&local_e8,param_6,local_98,local_a8,local_res8);
        if (cVar4 != '\0') {
LAB_142b8ad0a:
          if (param_5 == (int *)0x0) {
            return 1;
          }
          *param_5 = (int)uVar6;
          return 1;
        }
        fVar9 = (float)local_e8;
        fVar8 = local_e8._4_4_;
        fVar3 = local_e0;
      }
    }
    local_d0 = fVar3;
    uVar5 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar5;
    lVar7 = lVar7 + 0x20;
    local_d8 = CONCAT44(fVar8,fVar9);
    if (*(int *)(param_1 + 0x30) <= (int)uVar5) {
      return 0;
    }
  } while( true );
}



// FUNCTION 142b8ad90 DoesIntersectBox body=715 status=ok
// SIG undefined DoesIntersectBox(void)

ulonglong FNavigationPath::DoesIntersectBox
                    (longlong param_1,undefined8 param_2,int param_3,int *param_4,longlong param_5)

{
  undefined8 uVar1;
  int iVar2;
  float fVar3;
  char cVar4;
  ulonglong in_RAX;
  int iVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  undefined1 local_res8 [8];
  undefined8 local_e8;
  float local_e0;
  undefined8 local_d8;
  float local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [112];
  
  iVar2 = *(int *)(param_1 + 0x30);
  if (((iVar2 < 2) || (param_3 < 0)) || (iVar2 <= param_3)) {
    return in_RAX & 0xffffffffffffff00;
  }
  iVar5 = param_3 + 1;
  uVar1 = *(undefined8 *)((longlong)param_3 * 0x20 + *(longlong *)(param_1 + 0x28));
  local_d0 = *(float *)((longlong)param_3 * 0x20 + 8 + *(longlong *)(param_1 + 0x28));
  if (iVar5 < iVar2) {
    local_d8._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    local_d8._0_4_ = (float)uVar1;
    lVar6 = (longlong)iVar5 << 5;
    fVar7 = local_d8._4_4_;
    fVar8 = (float)local_d8;
    local_d8 = uVar1;
    do {
      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + lVar6);
      local_e8._0_4_ = (float)uVar1;
      local_e8._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
      fVar3 = *(float *)(*(longlong *)(param_1 + 0x28) + 8 + lVar6);
      local_b8 = (float)local_e8 - fVar8;
      local_b4 = local_e8._4_4_ - fVar7;
      local_b0 = fVar3 - local_d0;
      fVar8 = (float)local_e8;
      fVar7 = local_e8._4_4_;
      if (1e-08 < local_b4 * local_b4 + local_b8 * local_b8 + local_b0 * local_b0) {
        local_e8 = uVar1;
        local_e0 = fVar3;
        if (param_5 == 0) {
          if (local_b8 == 0.0) {
            local_c8 = 3.4e+38;
          }
          else {
            local_c8 = 1.0 / local_b8;
          }
          if (local_b4 == 0.0) {
            local_c4 = 3.4e+38;
          }
          else {
            local_c4 = 1.0 / local_b4;
          }
          if (local_b0 == 0.0) {
            local_c0 = 3.4e+38;
          }
          else {
            local_c0 = 1.0 / local_b0;
          }
          cVar4 = FMath::LineBoxIntersection(param_2,&local_d8,&local_e8,&local_b8,&local_c8);
          if (cVar4 != '\0') goto LAB_142b8afd9;
        }
        else {
          cVar4 = FMath::LineExtentBoxIntersection
                            (param_2,&local_d8,&local_e8,param_5,local_98,local_a8,local_res8);
          if (cVar4 != '\0') {
LAB_142b8afd9:
            if (param_4 == (int *)0x0) {
              return 1;
            }
            *param_4 = iVar5;
            return 1;
          }
          fVar8 = (float)local_e8;
          fVar7 = local_e8._4_4_;
          fVar3 = local_e0;
        }
      }
      local_d0 = fVar3;
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 0x20;
      local_d8 = CONCAT44(fVar7,fVar8);
    } while (iVar5 < *(int *)(param_1 + 0x30));
  }
  return 0;
}



// FUNCTION 142b8b060 FUN_142b8b060 body=121 status=ok
// SIG undefined FUN_142b8b060(void)

undefined1 FUN_142b8b060(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if (((ABS(*(float *)(param_1 + 0x46c) - *(float *)(param_2 + 4)) < 5.0) &&
      (ABS(*(float *)(param_1 + 0x470) - *(float *)(param_2 + 8)) < 5.0)) &&
     ((*(float *)(param_1 + 0x474) < 0.0 ||
      ((*(float *)(param_2 + 0xc) < 0.0 ||
       (ABS(*(float *)(param_1 + 0x474) - *(float *)(param_2 + 0xc)) < 5.0)))))) {
    cVar1 = FNavAgentProperties::IsNavDataMatching();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142b8b0e0 FUN_142b8b0e0 body=1276 status=ok
// SIG undefined FUN_142b8b0e0(void)

void FUN_142b8b0e0(longlong *param_1,float *param_2,float *param_3,undefined4 param_4)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_res20 [2];
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  ulonglong local_b8;
  float local_b0;
  ulonglong local_ac;
  float local_a4;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [88];
  
  pfVar2 = &local_b0;
  local_b8 = *(ulonglong *)param_3;
  local_f8 = -*param_3;
  local_160 = -param_3[2];
  fStack_d4 = -param_3[1];
  lVar4 = 2;
  fStack_100 = param_3[2];
  local_ac = *(ulonglong *)param_3 ^ 0x8000000080000000;
  local_e8 = (float)local_b8;
  fStack_c4 = (float)(local_b8 >> 0x20);
  local_b0 = fStack_100;
  local_a4 = local_160;
  fStack_10c = 1.0;
  fStack_fc = 1.0;
  fStack_ec = 1.0;
  fStack_dc = 1.0;
  fStack_cc = 1.0;
  fStack_bc = 1.0;
  local_res20[0] = param_4;
  fStack_110 = local_160;
  do {
    local_118 = pfVar2[-2];
    pfVar3 = &local_b0;
    fStack_f4 = pfVar2[-1];
    lVar5 = 2;
    fStack_d0 = *pfVar2;
    local_108 = local_118;
    fStack_e4 = fStack_f4;
    fStack_c0 = fStack_d0;
    do {
      fVar1 = pfVar3[-1];
      FLinearColor::FLinearColor(local_a0,local_res20);
      local_15c = local_118 * *param_2 + fVar1 * param_2[4] +
                  fStack_110 * param_2[8] + fStack_10c * param_2[0xc];
      local_158 = local_118 * param_2[1] + fVar1 * param_2[5] +
                  fStack_110 * param_2[9] + fStack_10c * param_2[0xd];
      local_154 = local_118 * param_2[2] + fVar1 * param_2[6] +
                  fStack_110 * param_2[10] + fStack_10c * param_2[0xe];
      local_150 = local_108 * *param_2 + fVar1 * param_2[4] +
                  fStack_100 * param_2[8] + fStack_fc * param_2[0xc];
      local_14c = local_108 * param_2[1] + fVar1 * param_2[5] +
                  fStack_100 * param_2[9] + fStack_fc * param_2[0xd];
      local_148 = local_108 * param_2[2] + fVar1 * param_2[6] +
                  fStack_100 * param_2[10] + fStack_fc * param_2[0xe];
      fStack_114 = fVar1;
      fStack_104 = fVar1;
      (**(code **)(*param_1 + 0x38))(param_1,&local_150,&local_15c,local_a0,0,0,0,0,0,0);
      fVar1 = *pfVar3;
      FLinearColor::FLinearColor(local_90,local_res20);
      local_144 = local_f8 * *param_2 + fStack_f4 * param_2[4] +
                  fVar1 * param_2[8] + fStack_ec * param_2[0xc];
      local_140 = local_f8 * param_2[1] + fStack_f4 * param_2[5] +
                  fVar1 * param_2[9] + fStack_ec * param_2[0xd];
      local_13c = local_f8 * param_2[2] + fStack_f4 * param_2[6] +
                  fVar1 * param_2[10] + fStack_ec * param_2[0xe];
      local_138 = local_e8 * *param_2 + fStack_e4 * param_2[4] +
                  fVar1 * param_2[8] + fStack_dc * param_2[0xc];
      local_134 = local_e8 * param_2[1] + fStack_e4 * param_2[5] +
                  fVar1 * param_2[9] + fStack_dc * param_2[0xd];
      local_130 = local_e8 * param_2[2] + fStack_e4 * param_2[6] +
                  fVar1 * param_2[10] + fStack_dc * param_2[0xe];
      fStack_f0 = fVar1;
      fStack_e0 = fVar1;
      (**(code **)(*param_1 + 0x38))(param_1,&local_138,&local_144,local_90,0,0,0,0,0,0);
      fVar1 = pfVar3[-2];
      FLinearColor::FLinearColor(local_80,local_res20);
      local_12c = fVar1 * *param_2 + fStack_d4 * param_2[4] +
                  fStack_d0 * param_2[8] + fStack_cc * param_2[0xc];
      local_128 = fVar1 * param_2[1] + fStack_d4 * param_2[5] +
                  fStack_d0 * param_2[9] + fStack_cc * param_2[0xd];
      local_124 = fVar1 * param_2[2] + fStack_d4 * param_2[6] +
                  fStack_d0 * param_2[10] + fStack_cc * param_2[0xe];
      local_168 = fVar1 * *param_2 + fStack_c4 * param_2[4] +
                  fStack_c0 * param_2[8] + fStack_bc * param_2[0xc];
      local_164 = fVar1 * param_2[1] + fStack_c4 * param_2[5] +
                  fStack_c0 * param_2[9] + fStack_bc * param_2[0xd];
      local_160 = fVar1 * param_2[2] + fStack_c4 * param_2[6] +
                  fStack_c0 * param_2[10] + fStack_bc * param_2[0xe];
      local_d8 = fVar1;
      local_c8 = fVar1;
      (**(code **)(*param_1 + 0x38))(param_1,&local_168,&local_12c,local_80,0,0,0,0,0,0);
      pfVar3 = pfVar3 + 3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    pfVar2 = pfVar2 + 3;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}



// FUNCTION 142b8b5e0 FUN_142b8b5e0 body=845 status=ok
// SIG undefined FUN_142b8b5e0(void)

void FUN_142b8b5e0(longlong *param_1,longlong param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_138;
  float local_134;
  float local_130;
  float local_128;
  float local_124;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  float local_108;
  float local_104;
  float local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [184];
  undefined8 uVar6;
  
  FMatrix::GetUnitAxes(param_2,&local_128,&local_108,&local_118);
  fVar3 = local_120;
  fVar2 = local_124;
  fVar1 = local_128;
  iVar4 = 0;
  local_138 = local_128 * param_3 + *(float *)(param_2 + 0x30);
  fVar8 = local_118 * param_4;
  local_134 = local_124 * param_3 + *(float *)(param_2 + 0x34);
  fVar9 = local_114 * param_4;
  param_4 = local_110 * param_4;
  local_130 = local_120 * param_3 + *(float *)(param_2 + 0x38);
  do {
    iVar4 = iVar4 + 1;
    uVar6 = __libm_sse2_sincosf_((float)iVar4 * 0.3926991);
    fVar7 = (float)((ulonglong)uVar6 >> 0x20);
    fVar5 = (float)uVar6;
    local_128 = (fVar5 * local_108 + fVar7 * fVar1) * param_3 + *(float *)(param_2 + 0x30);
    local_124 = (fVar5 * local_104 + fVar7 * fVar2) * param_3 + *(float *)(param_2 + 0x34);
    local_120 = (fVar5 * local_100 + fVar7 * fVar3) * param_3 + *(float *)(param_2 + 0x38);
    FLinearColor::FLinearColor(local_e0,&stack0x00000028);
    (**(code **)(*param_1 + 0x38))(param_1,&local_138,&local_128,local_e0,0,0,0,0);
    FLinearColor::FLinearColor(local_d0,&stack0x00000028);
    local_118 = local_128 + fVar8;
    local_114 = local_124 + fVar9;
    local_110 = local_120 + param_4;
    local_f4 = local_134 + fVar9;
    local_f8 = local_138 + fVar8;
    local_f0 = local_130 + param_4;
    (**(code **)(*param_1 + 0x38))(param_1,&local_f8,&local_118,local_d0,0,0,0,0);
    FLinearColor::FLinearColor(local_c0,&stack0x00000028);
    local_ec = local_138 + fVar8;
    local_e8 = local_134 + fVar9;
    local_e4 = local_130 + param_4;
    (**(code **)(*param_1 + 0x38))(param_1,&local_138,&local_ec,local_c0,0,0,0,0);
    local_138 = local_128;
    local_130 = local_120;
    local_134 = local_124;
  } while (iVar4 < 0x10);
  return;
}



// FUNCTION 142b8b930 DrawDebug body=91 status=ok
// SIG undefined DrawDebug(void)

void UNavigationPath::DrawDebug(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x60);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FWeakObjectPtr::Get((longlong)plVar1 + 0x9c);
    (**(code **)(*plVar1 + 0x10))(plVar1,uVar2,*(undefined4 *)(param_1 + 0x50),param_2,0,0);
  }
  return;
}



// FUNCTION 142b8b990 DrawSimpleGeom body=1028 status=ok
// SIG undefined DrawSimpleGeom(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UNavCollision::DrawSimpleGeom
               (longlong param_1,undefined8 param_2,float *param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined4 uStack_6c;
  
  fVar8 = fRam0000000146b2ba3c;
  fVar15 = *param_3;
  fVar17 = param_3[1];
  fVar16 = param_3[2];
  fVar18 = param_3[3];
  uVar9 = 0;
  fVar13 = fVar17 + fVar17;
  fVar14 = fVar16 + fVar16;
  fVar20 = fVar15 * (fVar15 + fVar15);
  fVar19 = fVar18 * (fVar15 + fVar15);
  fVar1 = param_3[8];
  fVar2 = param_3[9];
  fVar3 = param_3[10];
  fVar5 = param_3[4];
  fVar6 = param_3[5];
  fVar7 = param_3[6];
  fVar23 = (fVar18 * fVar14 + fVar15 * fVar13) * fVar1;
  fVar24 = (fVar19 + fVar17 * fVar14) * fVar2;
  fVar25 = (fVar18 * fVar13 + fVar15 * fVar14) * fVar3;
  fVar21 = fVar2 * (fVar15 * fVar13 - fVar18 * fVar14);
  fVar19 = fVar3 * (fVar17 * fVar14 - fVar19);
  fVar22 = fVar1 * (fVar15 * fVar14 - fVar18 * fVar13);
  fVar15 = (float)((uint)((_DAT_146b2ba30 - (fVar16 * fVar14 + fVar17 * fVar13)) * fVar1) &
                  _DAT_146b2ba40);
  fVar16 = (float)((uint)((fRam0000000146b2ba34 - (fVar16 * fVar14 + fVar20)) * fVar2) &
                  uRam0000000146b2ba44);
  fVar17 = (float)((uint)((fRam0000000146b2ba38 - (fVar17 * fVar13 + fVar20)) * fVar3) &
                  uRam0000000146b2ba48);
  fVar18 = (float)((uint)((fRam0000000146b2ba3c - (fVar20 + fVar20)) * param_3[0xb]) &
                  uRam0000000146b2ba4c);
  uVar10 = uVar9;
  uVar12 = uVar9;
  if (0 < *(int *)(param_1 + 0x88)) {
    do {
      lVar4 = *(longlong *)(param_1 + 0x80);
      uStack_6c = 0x3f800000;
      fVar1 = *(float *)(uVar10 + lVar4);
      fVar2 = *(float *)(uVar10 + 4 + lVar4);
      fVar3 = *(float *)(uVar10 + 8 + lVar4);
      local_e8 = fVar21 * 0.0 + fVar15 * 1.0 + fVar25 * 0.0 + fVar5 * 0.0;
      fStack_e4 = fVar16 * 0.0 + fVar23 * 1.0 + fVar19 * 0.0 + fVar6 * 0.0;
      fStack_e0 = fVar24 * 0.0 + fVar22 * 1.0 + fVar17 * 0.0 + fVar7 * 0.0;
      fStack_dc = fVar18 * 0.0 + fVar18 * 1.0 + fVar18 * 0.0 + fVar8 * 0.0;
      local_d8 = fVar21 * 1.0 + fVar15 * 0.0 + fVar25 * 0.0 + fVar5 * 0.0;
      fStack_d4 = fVar16 * 1.0 + fVar23 * 0.0 + fVar19 * 0.0 + fVar6 * 0.0;
      fStack_d0 = fVar24 * 1.0 + fVar22 * 0.0 + fVar17 * 0.0 + fVar7 * 0.0;
      fStack_cc = fVar18 * 1.0 + fVar18 * 0.0 + fVar18 * 0.0 + fVar8 * 0.0;
      local_c8 = fVar21 * 0.0 + fVar15 * 0.0 + fVar25 * 1.0 + fVar5 * 0.0;
      fStack_c4 = fVar16 * 0.0 + fVar23 * 0.0 + fVar19 * 1.0 + fVar6 * 0.0;
      fStack_c0 = fVar24 * 0.0 + fVar22 * 0.0 + fVar17 * 1.0 + fVar7 * 0.0;
      fStack_bc = fVar18 * 0.0 + fVar18 * 0.0 + fVar18 * 1.0 + fVar8 * 0.0;
      local_b8 = fVar2 * fVar21 + fVar1 * fVar15 + fVar3 * fVar25 + fVar5 * 1.0;
      fStack_b4 = fVar2 * fVar16 + fVar1 * fVar23 + fVar3 * fVar19 + fVar6 * 1.0;
      fStack_b0 = fVar2 * fVar24 + fVar1 * fVar22 + fVar3 * fVar17 + fVar7 * 1.0;
      fStack_ac = fVar2 * fVar18 + fVar1 * fVar18 + fVar3 * fVar18 + fVar8 * 1.0;
      FUN_142b8b5e0(param_2,&local_e8,*(undefined4 *)(uVar10 + 0xc + lVar4),
                    *(undefined4 *)(uVar10 + 0x10 + lVar4),param_4);
      uVar11 = (int)uVar12 + 1;
      uVar10 = uVar10 + 0x14;
      uVar12 = (ulonglong)uVar11;
    } while ((int)uVar11 < *(int *)(param_1 + 0x88));
  }
  uVar10 = uVar9;
  if (0 < *(int *)(param_1 + 0x98)) {
    do {
      lVar4 = *(longlong *)(param_1 + 0x90);
      uStack_6c = 0x3f800000;
      fVar1 = *(float *)(uVar10 + lVar4);
      fVar2 = *(float *)(uVar10 + 4 + lVar4);
      fVar3 = *(float *)(uVar10 + 8 + lVar4);
      local_e8 = fVar21 * 0.0 + fVar15 * 1.0 + fVar25 * 0.0 + fVar5 * 0.0;
      fStack_e4 = fVar16 * 0.0 + fVar23 * 1.0 + fVar19 * 0.0 + fVar6 * 0.0;
      fStack_e0 = fVar24 * 0.0 + fVar22 * 1.0 + fVar17 * 0.0 + fVar7 * 0.0;
      fStack_dc = fVar18 * 0.0 + fVar18 * 1.0 + fVar18 * 0.0 + fVar8 * 0.0;
      local_d8 = fVar21 * 1.0 + fVar15 * 0.0 + fVar25 * 0.0 + fVar5 * 0.0;
      fStack_d4 = fVar16 * 1.0 + fVar23 * 0.0 + fVar19 * 0.0 + fVar6 * 0.0;
      fStack_d0 = fVar24 * 1.0 + fVar22 * 0.0 + fVar17 * 0.0 + fVar7 * 0.0;
      fStack_cc = fVar18 * 1.0 + fVar18 * 0.0 + fVar18 * 0.0 + fVar8 * 0.0;
      local_c8 = fVar21 * 0.0 + fVar15 * 0.0 + fVar25 * 1.0 + fVar5 * 0.0;
      fStack_c4 = fVar16 * 0.0 + fVar23 * 0.0 + fVar19 * 1.0 + fVar6 * 0.0;
      fStack_c0 = fVar24 * 0.0 + fVar22 * 0.0 + fVar17 * 1.0 + fVar7 * 0.0;
      fStack_bc = fVar18 * 0.0 + fVar18 * 0.0 + fVar18 * 1.0 + fVar8 * 0.0;
      local_b8 = fVar2 * fVar21 + fVar1 * fVar15 + fVar3 * fVar25 + fVar5 * 1.0;
      fStack_b4 = fVar2 * fVar16 + fVar1 * fVar23 + fVar3 * fVar19 + fVar6 * 1.0;
      fStack_b0 = fVar2 * fVar24 + fVar1 * fVar22 + fVar3 * fVar17 + fVar7 * 1.0;
      fStack_ac = fVar2 * fVar18 + fVar1 * fVar18 + fVar3 * fVar18 + fVar8 * 1.0;
      FUN_142b8b0e0(param_2,&local_e8,lVar4 + 0xc + (longlong)(int)uVar9 * 0x18,param_4);
      uVar11 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar11;
      uVar10 = uVar10 + 0x18;
    } while ((int)uVar11 < *(int *)(param_1 + 0x98));
  }
  return;
}



// FUNCTION 142b8bda0 Empty body=293 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FInputSignature,FName>,TDefaultMapHashableKeyFuncs<FInputSignature,FName,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar6 = (uint)param_2;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(uint *)(param_1 + 0xc) != uVar6) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo();
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar1 = uVar6 + 0x1f + ((int)(uVar6 + 0x1f) >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar1) {
    *(uint *)(param_1 + 0x2c) = uVar1;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  if (uVar6 < 4) {
    iVar3 = 1;
  }
  else {
    uVar2 = (uint)(param_2 >> 1) & 0x7fffffff;
    uVar1 = uVar2 + 8;
    iVar3 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    iVar5 = 0x20;
    if (uVar1 != 0) {
      iVar5 = 0x1f - iVar3;
    }
    uVar2 = uVar2 + 7;
    iVar3 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    if (uVar2 == 0) {
      iVar3 = 1;
    }
    else {
      iVar3 = 1 << (~(byte)((iVar5 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar3) & 0x1f);
    }
  }
  if ((0 < (int)uVar6) &&
     (((iVar5 = *(int *)(param_1 + 0x48), iVar5 == 0 || (iVar5 < iVar3)) || (iVar3 < iVar5)))) {
    *(int *)(param_1 + 0x48) = iVar3;
    TSet<FNavigationDirtyElement,DefaultKeyFuncs<FNavigationDirtyElement,0>,FDefaultSetAllocator>::
    Rehash(param_1);
    return;
  }
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
    uVar8 = 0;
    uVar9 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      uVar7 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar8;
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      uVar8 = uVar8 + 1;
      *(undefined4 *)(lVar4 + uVar7 * 4) = 0xffffffff;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return;
}



// FUNCTION 142b8bed0 FUN_142b8bed0 body=318 status=ok
// SIG undefined FUN_142b8bed0(void)

void FUN_142b8bed0(longlong param_1,byte param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong *local_18;
  int local_10;
  
  puVar1 = (undefined4 *)FLinearColor::ToFColor(param_3,local_res10,1);
  *(undefined4 *)(param_1 + 0x50) = *puVar1;
  if ((*(uint *)(param_1 + 0x4c) >> 1 & 1) != (uint)param_2) {
    *(uint *)(param_1 + 0x4c) =
         (uint)param_2 + (uint)param_2 | *(uint *)(param_1 + 0x4c) & 0xfffffffd;
    if (param_2 == 0) {
      FUN_1423fe200(*(undefined8 *)(param_1 + 0x58),0);
    }
    else {
      local_18 = (longlong *)0x0;
      plVar2 = (longlong *)FMemory::Realloc(0,0x30);
      local_10 = 3;
      local_18 = plVar2;
      if (plVar2 != (longlong *)0x0) {
        *plVar2 = (longlong)&PTR_FUN_1441c0108;
        FWeakObjectPtr::operator=(plVar2 + 1,param_1);
        plVar2[2] = (longlong)UNavigationPath::DrawDebug;
        lVar3 = FDelegateHandle::GenerateNewID();
        plVar2[4] = lVar3;
        *plVar2 = (longlong)&PTR_FUN_1441c0150;
      }
      puVar4 = (undefined8 *)UDebugDrawService::Register(local_res8,L"Navigation",&local_18);
      *(undefined8 *)(param_1 + 0x58) = *puVar4;
      if (local_10 != 0) {
        if (local_18 == (longlong *)0x0) {
          return;
        }
        (**(code **)(*local_18 + 0x28))(local_18,0);
        if (local_18 != (longlong *)0x0) {
          local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
        }
        local_10 = 0;
      }
      if (local_18 != (longlong *)0x0) {
        FMemory::Free(local_18);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142b8c010 EnableRecalculationOnInvalidation body=57 status=ok
// SIG undefined EnableRecalculationOnInvalidation(void)

void UNavigationPath::EnableRecalculationOnInvalidation(longlong param_1,char *param_2)

{
  uint *puVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  
  cVar2 = *param_2;
  if (((cVar2 != *(char *)(param_1 + 0x48)) &&
      (*(char *)(param_1 + 0x48) = cVar2, (*(byte *)(param_1 + 0x4c) & 1) != 0)) && (cVar2 != '\0'))
  {
    lVar3 = *(longlong *)(param_1 + 0x60);
    puVar1 = (uint *)(lVar3 + 0x98);
    *puVar1 = *puVar1 & 0xffffffef;
    uVar4 = 0;
    if (cVar2 == '\x01') {
      uVar4 = 0x10;
    }
    puVar1 = (uint *)(lVar3 + 0x98);
    *puVar1 = *puVar1 | uVar4;
  }
  return;
}



// FUNCTION 142b8c050 FUN_142b8c050 body=40 status=ok
// SIG undefined FUN_142b8c050(void)

void FUN_142b8c050(undefined8 param_1,undefined4 param_2)

{
  FUN_142b99c10();
  FUN_14222a250(param_1,param_2);
  return;
}



// FUNCTION 142b8c0a0 FUN_142b8c0a0 body=52 status=ok
// SIG undefined FUN_142b8c0a0(void)

void FUN_142b8c0a0(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [3];
  
  local_18[0] = 0;
  local_18[1] = 0;
  FUN_14222e300(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142b8c0e0 FUN_142b8c0e0 body=53 status=ok
// SIG undefined FUN_142b8c0e0(void)

void FUN_142b8c0e0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x120);
  if ((lVar1 == 0) && (lVar1 = FUN_1423407b0(param_2), lVar1 == 0)) {
    return;
  }
  if (*(longlong *)(lVar1 + 0x138) == 0) {
    return;
  }
  FUN_142ba9430();
  return;
}



// FUNCTION 142b8c150 Execute body=85 status=ok
// SIG undefined Execute(void)

longlong *
TBaseFunctorDelegateInstance<TSubclassOf<UNavAreaBase>___cdecl(void),<lambda_9751a6c24050decbd3ff4d96244e1c7e>_>
::Execute(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = DAT_146b2bae0;
  if (DAT_146b2bae0 != 0) {
    lVar2 = UAITask::GetPrivateStaticClass();
    lVar3 = lVar1;
    do {
      if (lVar3 == lVar2) {
        *param_2 = lVar1;
        return param_2;
      }
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 142b8c1c0 Execute body=41 status=ok
// SIG undefined Execute(void)

void TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(void),FAsyncPathFindingQuery>::Execute
               (longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_c8 [192];
  
  uVar1 = FAsyncPathFindingQuery::FAsyncPathFindingQuery(local_c8,param_1 + 0x10);
  (**(code **)(param_1 + 8))(uVar1);
  return;
}



// FUNCTION 142b8c1f0 FUN_142b8c1f0 body=77 status=ok
// SIG undefined FUN_142b8c1f0(void)

void FUN_142b8c1f0(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 local_38;
  longlong local_30;
  undefined4 local_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 8);
  local_30 = *(longlong *)(param_1 + 0x28);
  local_38 = *(undefined8 *)(param_1 + 0x20);
  local_20 = *(undefined4 *)(param_1 + 0x10);
  uStack_1c = *(undefined4 *)(param_1 + 0x14);
  pcVar1 = *(code **)(param_1 + 0x10);
  iStack_18 = *(int *)(param_1 + 0x18);
  uStack_14 = *(undefined4 *)(param_1 + 0x1c);
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  (*pcVar1)(iStack_18 + lVar2,&local_38);
  return;
}



// FUNCTION 142b8c240 FUN_142b8c240 body=92 status=ok
// SIG undefined FUN_142b8c240(void)

void FUN_142b8c240(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 local_18 [2];
  
  uVar2 = FWeakObjectPtr::Get(param_1 + 8);
  pcVar1 = *(code **)(param_1 + 0x10);
  local_18[0] = 0;
  FUN_142b7d670(local_18,*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),0,0);
  (*pcVar1)(uVar2,local_18);
  return;
}



// FUNCTION 142b8c2a0 FUN_142b8c2a0 body=54 status=ok
// SIG undefined FUN_142b8c2a0(void)

undefined8 FUN_142b8c2a0(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [3];
  
  local_18[0] = 0;
  local_18[1] = 0;
  FUN_14222e300(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b8c2e0 FUN_142b8c2e0 body=51 status=ok
// SIG undefined FUN_142b8c2e0(void)

undefined8 FUN_142b8c2e0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x120);
  if ((lVar1 == 0) && (lVar1 = FUN_1423407b0(param_2), lVar1 == 0)) {
    return 1;
  }
  if (*(longlong *)(lVar1 + 0x138) != 0) {
    FUN_142ba9430();
  }
  return 1;
}



// FUNCTION 142b8c320 FUN_142b8c320 body=20 status=ok
// SIG undefined FUN_142b8c320(void)

undefined1 FUN_142b8c320(longlong param_1)

{
  FUN_142b84430(param_1 + 8);
  return 1;
}



// FUNCTION 142b8c340 FUN_142b8c340 body=20 status=ok
// SIG undefined FUN_142b8c340(void)

undefined1 FUN_142b8c340(longlong param_1)

{
  FUN_142b843c0(param_1 + 8);
  return 1;
}



// FUNCTION 142b8c360 FUN_142b8c360 body=20 status=ok
// SIG undefined FUN_142b8c360(void)

undefined1 FUN_142b8c360(longlong param_1)

{
  FUN_142b84950(param_1 + 8);
  return 1;
}



// FUNCTION 142b8c380 ExecuteIfSafe body=43 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined1
TBaseStaticDelegateInstance<void___cdecl(void),FAsyncPathFindingQuery>::ExecuteIfSafe
          (longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_c8 [192];
  
  uVar1 = FAsyncPathFindingQuery::FAsyncPathFindingQuery(local_c8,param_1 + 0x10);
  (**(code **)(param_1 + 8))(uVar1);
  return 1;
}



// FUNCTION 142b8c3b0 FUN_142b8c3b0 body=113 status=ok
// SIG undefined FUN_142b8c3b0(void)

undefined1 FUN_142b8c3b0(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 local_38;
  longlong local_30;
  undefined4 local_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar2 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    local_38 = *(undefined8 *)(param_1 + 0x20);
    local_20 = *(undefined4 *)(param_1 + 0x10);
    uStack_1c = *(undefined4 *)(param_1 + 0x14);
    pcVar1 = *(code **)(param_1 + 0x10);
    iStack_18 = *(int *)(param_1 + 0x18);
    uStack_14 = *(undefined4 *)(param_1 + 0x1c);
    local_30 = *(longlong *)(param_1 + 0x28);
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    (*pcVar1)(iStack_18 + lVar2,&local_38);
    return 1;
  }
  return 0;
}



// FUNCTION 142b8c430 FUN_142b8c430 body=119 status=ok
// SIG undefined FUN_142b8c430(void)

undefined8 FUN_142b8c430(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_18 [2];
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar2 != 0) {
    uVar3 = FWeakObjectPtr::Get(param_1 + 8);
    pcVar1 = *(code **)(param_1 + 0x10);
    local_18[0] = 0;
    FUN_142b7d670(local_18,*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),0,0);
    (*pcVar1)(uVar3,local_18);
    return 1;
  }
  return 0;
}



// FUNCTION 142b8c4b0 ExportGeometry body=122 status=ok
// SIG undefined ExportGeometry(void)

uint UNavCollision::ExportGeometry(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if ((uVar1 & 2) != 0) {
    (**(code **)(*param_3 + 0x38))
              (param_3,*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58),
               *(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68),param_2);
    (**(code **)(*param_3 + 0x38))
              (param_3,*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38),
               *(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48),param_2);
    uVar1 = *(uint *)(param_1 + 0x28);
  }
  return CONCAT31((uint3)(uVar1 >> 9),(char)(uVar1 >> 1)) & 0xffffff01;
}



// FUNCTION 142b8c530 FUN_142b8c530 body=376 status=ok
// SIG undefined FUN_142b8c530(void)

longlong FUN_142b8c530(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  bool bVar12;
  
  puVar3 = (undefined8 *)*param_1;
  lVar5 = param_1[1];
  puVar10 = puVar3;
  do {
    if (puVar10 == puVar3 + (longlong)(int)lVar5 * 3) {
      return 0xffffffff;
    }
    plVar8 = (longlong *)0x0;
    plVar4 = (longlong *)puVar10[1];
    plVar9 = plVar4;
    plVar11 = plVar8;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      iVar7 = (int)plVar4[1];
      bVar12 = iVar7 == 0;
      if (bVar12) {
        *(int *)(plVar4 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
      while (plVar9 = plVar8, !bVar12) {
        LOCK();
        bVar12 = iVar7 == (int)plVar4[1];
        if (bVar12) {
          *(int *)(plVar4 + 1) = iVar7 + 1;
        }
        UNLOCK();
        if (bVar12) {
          plVar9 = plVar4;
          plVar11 = (longlong *)*puVar10;
          break;
        }
        LOCK();
        iVar7 = (int)plVar4[1];
        bVar12 = iVar7 == 0;
        if (bVar12) {
          *(int *)(plVar4 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
      }
    }
    plVar4 = (longlong *)param_2[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      iVar7 = (int)plVar4[1];
      bVar12 = iVar7 == 0;
      if (bVar12) {
        *(int *)(plVar4 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
      while (plVar8 = (longlong *)0x0, !bVar12) {
        LOCK();
        bVar12 = iVar7 == (int)plVar4[1];
        if (bVar12) {
          *(int *)(plVar4 + 1) = iVar7 + 1;
        }
        UNLOCK();
        if (bVar12) {
          plVar8 = (longlong *)0x0;
          if (plVar4 != (longlong *)0x0) {
            plVar8 = (longlong *)*param_2;
            LOCK();
            plVar1 = plVar4 + 1;
            lVar6 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              iVar7 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          break;
        }
        LOCK();
        iVar7 = (int)plVar4[1];
        bVar12 = iVar7 == 0;
        if (bVar12) {
          *(int *)(plVar4 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
      }
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar9 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    if (plVar11 == plVar8) {
      return ((longlong)puVar10 - (longlong)puVar3) / 0x18;
    }
    puVar10 = puVar10 + 3;
  } while( true );
}



// FUNCTION 142b8c6b0 FindId body=205 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,longlong param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar2 +
                    ((((longlong)((int)(short)(int)*(float *)(param_3 + 4) << 0x10) |
                      (longlong)(short)(int)*(float *)(param_3 + 8)) ^
                     (longlong)(int)*(float *)(param_3 + 0xc)) & (longlong)(int)param_1[9] - 1U) * 4
                    );
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        cVar1 = FNavAgentProperties::operator==((longlong)iVar4 * 0x40 + lVar3,param_3);
        if (cVar1 != '\0') {
          *param_2 = iVar4;
          return param_2;
        }
        lVar3 = *param_1;
        iVar4 = *(int *)((longlong)iVar4 * 0x40 + 0x38 + lVar3);
      } while (iVar4 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 142b8c780 FindPathAbstract body=609 status=ok
// SIG undefined FindPathAbstract(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142b8c833) */
/* WARNING: Removing unreachable block (ram,0x000142b8c844) */
/* WARNING: Removing unreachable block (ram,0x000142b8c85a) */

undefined8 *
AAbstractNavData::FindPathAbstract(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong **pplVar8;
  longlong *plVar9;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong lStack_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60 [8];
  longlong *local_58;
  longlong *local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  lVar7 = FWeakObjectPtr::Get(param_3 + 0x38);
  if (lVar7 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 1;
  }
  else {
    plVar9 = *(longlong **)(param_3 + 0x40);
    local_78 = 0;
    local_88 = (longlong *)0x0;
    lStack_80 = 0;
    if (plVar9 == (longlong *)0x0) {
      pplVar8 = (longlong **)FUN_142b7d780(lVar7,local_60,param_3);
      if (&local_88 != pplVar8) {
        local_88 = *pplVar8;
        *pplVar8 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&lStack_80,pplVar8 + 1);
      }
      plVar9 = local_88;
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_58 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar2 = (int *)((longlong)local_58 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          plVar9 = local_88;
          if (iVar4 == 1) {
            (**(code **)(*local_58 + 8))(local_58,1);
            plVar9 = local_88;
          }
        }
      }
    }
    else {
      lStack_80 = *(longlong *)(param_3 + 0x48);
      if (lStack_80 != 0) {
        LOCK();
        *(int *)(lStack_80 + 8) = *(int *)(lStack_80 + 8) + 1;
        UNLOCK();
      }
      uStack_68._0_4_ = (undefined4)lStack_80;
      uStack_68._4_4_ = (undefined4)((ulonglong)lStack_80 >> 0x20);
      uStack_44 = uStack_68._4_4_;
      uStack_48 = (undefined4)uStack_68;
      uStack_68 = 0;
      local_70 = 0;
      local_78 = 0;
      local_88 = plVar9;
      local_50 = plVar9;
      (**(code **)(*plVar9 + 8))(plVar9);
    }
    *(undefined4 *)(plVar9 + 6) = 0;
    if (0x7fffffff < *(uint *)((longlong)plVar9 + 0x34)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
                (plVar9 + 5,0);
    }
    uStack_48 = *(undefined4 *)(param_3 + 0x10);
    iVar4 = (int)plVar9[6];
    local_50 = *(longlong **)(param_3 + 8);
    local_40 = 0;
    uStack_38 = 0;
    *(int *)(plVar9 + 6) = iVar4 + 1;
    if (*(int *)((longlong)plVar9 + 0x34) < iVar4 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(plVar9 + 5,iVar4);
    }
    uVar6 = uStack_38;
    uVar5 = local_40;
    lVar7 = plVar9[5];
    local_40 = 0;
    uStack_38 = 0;
    puVar3 = (undefined8 *)((longlong)iVar4 * 0x20 + lVar7);
    *puVar3 = local_50;
    puVar3[1] = CONCAT44(uStack_44,uStack_48);
    puVar3 = (undefined8 *)((longlong)iVar4 * 0x20 + 0x10 + lVar7);
    *puVar3 = uVar5;
    puVar3[1] = uVar6;
    uStack_48 = *(undefined4 *)(param_3 + 0x1c);
    iVar4 = (int)plVar9[6];
    local_50 = *(longlong **)(param_3 + 0x14);
    *(int *)(plVar9 + 6) = iVar4 + 1;
    if (*(int *)((longlong)plVar9 + 0x34) < iVar4 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(plVar9 + 5,iVar4);
    }
    lVar7 = plVar9[5];
    puVar3 = (undefined8 *)((longlong)iVar4 * 0x20 + lVar7);
    *puVar3 = local_50;
    puVar3[1] = CONCAT44(uStack_44,uStack_48);
    puVar3 = (undefined8 *)((longlong)iVar4 * 0x20 + 0x10 + lVar7);
    *puVar3 = local_40;
    puVar3[1] = uStack_38;
    *(uint *)(plVar9 + 0x13) = *(uint *)(plVar9 + 0x13) | 2;
    *param_1 = plVar9;
    param_1[1] = lStack_80;
    *(undefined4 *)(param_1 + 2) = 3;
  }
  return param_1;
}



// FUNCTION 142b8c9f0 FUN_142b8c9f0 body=573 status=ok
// SIG undefined FUN_142b8c9f0(void)

undefined8 *
FUN_142b8c9f0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,int param_5
             )

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 local_88;
  longlong *local_80;
  undefined4 local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined4 local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  
  cVar5 = FWeakObjectPtr::IsValid(param_4 + 0x38);
  if (cVar5 == '\0') {
    uVar6 = FUN_142b8f070(param_1,param_3);
    FWeakObjectPtr::operator=(param_4 + 0x38,uVar6);
  }
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 1;
  cVar5 = FWeakObjectPtr::IsValid(param_4 + 0x38);
  if (cVar5 == '\0') goto LAB_142b8cc06;
  lVar7 = FWeakObjectPtr::Get(param_4 + 0x38);
  if (param_5 == 1) {
    puVar8 = (undefined8 *)(**(code **)(lVar7 + 0x4e8))(local_58);
    uVar6 = *puVar8;
    local_80 = (longlong *)puVar8[1];
    puVar8[1] = 0;
    *puVar8 = 0;
    local_78 = *(undefined4 *)(puVar8 + 2);
    local_88 = uVar6;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    if (param_2 != &local_88) {
      *param_2 = uVar6;
      local_88 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_80);
    }
    plVar1 = local_80;
    *(undefined4 *)(param_2 + 2) = local_78;
    if (local_80 == (longlong *)0x0) goto LAB_142b8cc06;
    LOCK();
    plVar3 = local_80 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 != 1) goto LAB_142b8cc06;
    (**(code **)*local_80)(local_80);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    plVar1 = local_80;
  }
  else {
    puVar8 = (undefined8 *)(**(code **)(lVar7 + 0x4e0))(local_40,param_3,param_4);
    uVar6 = *puVar8;
    local_68 = (longlong *)puVar8[1];
    puVar8[1] = 0;
    *puVar8 = 0;
    local_60 = *(undefined4 *)(puVar8 + 2);
    local_70 = uVar6;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)local_38 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
        }
      }
    }
    if (param_2 != &local_70) {
      *param_2 = uVar6;
      local_70 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_68);
    }
    plVar1 = local_68;
    *(undefined4 *)(param_2 + 2) = local_60;
    if (local_68 == (longlong *)0x0) goto LAB_142b8cc06;
    LOCK();
    plVar3 = local_68 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 != 1) goto LAB_142b8cc06;
    (**(code **)*local_68)(local_68);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    plVar1 = local_68;
  }
  if (iVar4 == 1) {
    (**(code **)(*plVar1 + 8))(plVar1,1);
  }
LAB_142b8cc06:
  FPathFindingQuery::~FPathFindingQuery(param_4);
  return param_2;
}



// FUNCTION 142b8cc30 FUN_142b8cc30 body=567 status=ok
// SIG undefined FUN_142b8cc30(void)

undefined8 * FUN_142b8cc30(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 local_88;
  longlong *local_80;
  undefined4 local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined4 local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  
  cVar5 = FWeakObjectPtr::IsValid(param_3 + 0x38);
  if (cVar5 == '\0') {
    uVar6 = FUN_142b8e790(param_1,0);
    FWeakObjectPtr::operator=(param_3 + 0x38,uVar6);
  }
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 1;
  cVar5 = FWeakObjectPtr::IsValid(param_3 + 0x38);
  if (cVar5 == '\0') goto LAB_142b8ce3b;
  lVar7 = FWeakObjectPtr::Get(param_3 + 0x38);
  if (param_4 == 0) {
    puVar8 = (undefined8 *)(**(code **)(lVar7 + 0x4e0))(local_58);
    uVar6 = *puVar8;
    local_80 = (longlong *)puVar8[1];
    puVar8[1] = 0;
    *puVar8 = 0;
    local_78 = *(undefined4 *)(puVar8 + 2);
    local_88 = uVar6;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    if (param_2 != &local_88) {
      *param_2 = uVar6;
      local_88 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_80);
    }
    plVar1 = local_80;
    *(undefined4 *)(param_2 + 2) = local_78;
    if (local_80 == (longlong *)0x0) goto LAB_142b8ce3b;
    LOCK();
    plVar3 = local_80 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 != 1) goto LAB_142b8ce3b;
    (**(code **)*local_80)(local_80);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    plVar1 = local_80;
  }
  else {
    puVar8 = (undefined8 *)(**(code **)(lVar7 + 0x4e8))(local_40,param_3 + 0x50,param_3);
    uVar6 = *puVar8;
    local_68 = (longlong *)puVar8[1];
    puVar8[1] = 0;
    *puVar8 = 0;
    local_60 = *(undefined4 *)(puVar8 + 2);
    local_70 = uVar6;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)local_38 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
        }
      }
    }
    if (param_2 != &local_70) {
      *param_2 = uVar6;
      local_70 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_68);
    }
    plVar1 = local_68;
    *(undefined4 *)(param_2 + 2) = local_60;
    if (local_68 == (longlong *)0x0) goto LAB_142b8ce3b;
    LOCK();
    plVar3 = local_68 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 != 1) goto LAB_142b8ce3b;
    (**(code **)*local_68)(local_68);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    plVar1 = local_68;
  }
  if (iVar4 == 1) {
    (**(code **)(*plVar1 + 8))(plVar1,1);
  }
LAB_142b8ce3b:
  FPathFindingQuery::~FPathFindingQuery(param_3);
  return param_2;
}



// FUNCTION 142b8ce70 FinishDestroy body=41 status=ok
// SIG undefined FinishDestroy(void)

void UNavArea::FinishDestroy(longlong param_1)

{
  if ((*(uint *)(param_1 + 8) >> 4 & 1) != 0) {
    FUN_142b96870(*(undefined8 *)(param_1 + 0x10));
  }
  FUN_141755460(param_1);
  return;
}



// FUNCTION 142b8cea0 FUN_142b8cea0 body=1302 status=ok
// SIG undefined FUN_142b8cea0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b8cea0(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1f4;
  undefined8 local_1e8;
  undefined8 local_1e0;
  ulonglong local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined **local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined4 local_160;
  byte local_15c;
  undefined4 local_158;
  undefined ***local_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined1 local_78 [16];
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  
  UNavCollision::ClearCollision();
  if (*(longlong *)(param_1 + 0x20) != 0) {
    UNodeMappingContainer::StaticClass();
  }
  uVar9 = 0;
  uVar6 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  uVar8 = uVar9;
  uVar10 = uVar9;
  uVar11 = uVar9;
  uVar14 = uVar9;
  if (0 < *(int *)(param_1 + 0x98)) {
    do {
      uVar7 = uRam0000000146b2ba3c;
      lVar12 = *(longlong *)(param_1 + 0x90);
      local_150 = &local_178;
      local_ac = *(float *)(uVar10 + 0x10 + lVar12);
      local_b0 = *(float *)(uVar10 + 0xc + lVar12);
      local_ac = local_ac + local_ac;
      local_a8 = *(float *)(uVar10 + 0x14 + lVar12);
      local_b0 = local_b0 + local_b0;
      local_15c = local_15c | 1;
      local_a8 = local_a8 + local_a8;
      local_d8 = _DAT_1464aa810;
      uStack_d0 = _DAT_1464aa818;
      local_c8 = _DAT_1468b5d90;
      local_bc = DAT_1468b5da0;
      local_68 = _DAT_146b2ba30 & _DAT_146b2ba40;
      uStack_64 = uRam0000000146b2ba34 & uRam0000000146b2ba44;
      uStack_60 = uRam0000000146b2ba38 & uRam0000000146b2ba48;
      uStack_5c = uRam0000000146b2ba3c & uRam0000000146b2ba4c;
      local_c0 = DAT_1468b5d98;
      local_170 = 0;
      local_168 = 0;
      local_160 = 1;
      local_158 = 6;
      local_148 = 3;
      local_140 = 0;
      local_130 = 0;
      local_128 = 0;
      local_120 = 0;
      local_178 = &PTR_FUN_1440fbd78;
      local_b4 = DAT_1468b5da8;
      uVar1 = *(undefined4 *)(uVar10 + 4 + lVar12);
      uVar2 = *(undefined4 *)(uVar10 + lVar12);
      uVar3 = *(undefined4 *)(uVar10 + 8 + lVar12);
      local_78._4_4_ = uVar1;
      local_78._0_4_ = uVar2;
      local_78._8_4_ = uVar3;
      local_78._12_4_ = 0;
      local_88 = 0;
      uStack_84 = 0;
      uStack_80 = 0;
      uStack_7c = uRam0000000146b2ba3c;
      cVar4 = FUN_140618120(&local_88);
      if ((cVar4 == '\0') && (cVar4 = FUN_140618120(local_78), cVar4 == '\0')) {
        FUN_140618120(&local_68);
      }
      local_98 = 0;
      uStack_94 = 0;
      uStack_90 = 0;
      uStack_8c = uVar7;
      FQuat::Rotator(&local_98,&local_208);
      local_bc = local_208;
      local_b4 = local_200;
      uVar7 = (int)uVar8 + 1;
      local_c8 = CONCAT44(uVar1,uVar2);
      local_1d0 = CONCAT44(local_1d0._4_4_,uVar7);
      local_1f4 = uVar3;
      local_c0 = uVar3;
      if (local_1d0._4_4_ < (int)uVar7) {
        FUN_140822570(&local_1d8,uVar8);
        uVar11 = local_1d8;
        uVar7 = (uint)local_1d0;
      }
      FUN_14086fd30((longlong)(int)uVar8 * 0xe0 + uVar11,&local_178);
      local_178 = &PTR__scalar_deleting_destructor__1440fbd58;
      if (local_128 != 0) {
        FMemory::Free();
      }
      uVar13 = (int)uVar14 + 1;
      uVar8 = (ulonglong)uVar7;
      uVar10 = uVar10 + 0x18;
      uVar14 = (ulonglong)uVar13;
    } while ((int)uVar13 < *(int *)(param_1 + 0x98));
  }
  uVar8 = uVar9;
  if (0 < *(int *)(param_1 + 0x88)) {
    do {
      uVar7 = uRam0000000146b2ba3c;
      lVar12 = *(longlong *)(param_1 + 0x80);
      local_150 = &local_178;
      local_ac = *(float *)(uVar9 + 0x10 + lVar12);
      local_b0 = *(float *)(uVar9 + 0xc + lVar12);
      local_15c = local_15c | 1;
      local_d8 = _DAT_1464aa810;
      uStack_d0 = _DAT_1464aa818;
      local_c8 = _DAT_1468b5d90;
      local_bc = DAT_1468b5da0;
      local_68 = _DAT_146b2ba30 & _DAT_146b2ba40;
      uStack_64 = uRam0000000146b2ba34 & uRam0000000146b2ba44;
      uStack_60 = uRam0000000146b2ba38 & uRam0000000146b2ba48;
      uStack_5c = uRam0000000146b2ba3c & uRam0000000146b2ba4c;
      local_c0 = DAT_1468b5d98;
      local_170 = 0;
      local_168 = 0;
      local_160 = 2;
      local_158 = 6;
      local_148 = 3;
      local_140 = 0;
      local_130 = 0;
      local_128 = 0;
      local_120 = 0;
      local_178 = &PTR_FUN_1444d5498;
      local_b4 = DAT_1468b5da8;
      uVar1 = *(undefined4 *)(uVar9 + 4 + lVar12);
      uVar2 = *(undefined4 *)(uVar9 + lVar12);
      uVar3 = *(undefined4 *)(uVar9 + 8 + lVar12);
      local_78._4_4_ = uVar1;
      local_78._0_4_ = uVar2;
      local_78._8_4_ = uVar3;
      local_78._12_4_ = 0;
      local_88 = 0;
      uStack_84 = 0;
      uStack_80 = 0;
      uStack_7c = uRam0000000146b2ba3c;
      cVar4 = FUN_140618120(&local_88);
      if ((cVar4 == '\0') && (cVar4 = FUN_140618120(local_78), cVar4 == '\0')) {
        FUN_140618120(&local_68);
      }
      local_98 = 0;
      uStack_94 = 0;
      uStack_90 = 0;
      uStack_8c = uVar7;
      FQuat::Rotator(&local_98,&local_208);
      uVar10 = local_1c0;
      lVar12 = (longlong)(int)local_1c0;
      local_bc = local_208;
      local_b4 = local_200;
      iVar5 = (int)local_1c0 + 1;
      local_c8 = CONCAT44(uVar1,uVar2);
      local_1c0 = CONCAT44(local_1c0._4_4_,iVar5);
      local_1f4 = uVar3;
      local_c0 = uVar3;
      if (local_1c0._4_4_ < iVar5) {
        TArray<FSpriteDrawCallRecord,FDefaultAllocator>::ResizeGrow(&local_1c8,uVar10 & 0xffffffff);
      }
      FUN_14239fa80(lVar12 * 0xd0 + local_1c8,&local_178);
      local_178 = &PTR__scalar_deleting_destructor__1440fbd58;
      if (local_128 != 0) {
        FMemory::Free();
      }
      uVar7 = (int)uVar8 + 1;
      uVar9 = uVar9 + 0x14;
      uVar8 = (ulonglong)uVar7;
    } while ((int)uVar7 < *(int *)(param_1 + 0x88));
  }
  if ((0 < *(int *)(param_1 + 0x38)) || (0 < *(int *)(param_1 + 0x58))) {
    uVar6 = 2;
  }
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xfffffffd;
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | uVar6;
  FUN_140c643a0(&local_1a8);
  FUN_1409701b0(&local_1b8);
  FUN_140c64320(&local_1c8);
  FUN_140c64220(&local_1d8);
  FUN_140c642a0(&local_1e8);
  return;
}



// FUNCTION 142b8d3c0 FUN_142b8d3c0 body=1153 status=ok
// SIG undefined FUN_142b8d3c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142b8d3c0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  longlong lVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
  longlong *plVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  int iVar23;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined1 local_b0 [32];
  uint local_90 [2];
  longlong local_88;
  longlong local_80;
  int local_78;
  int local_70;
  char local_6c;
  int local_68;
  longlong *local_60;
  longlong local_58;
  int local_50;
  undefined8 local_40;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  plVar1 = param_1 + 0x26;
  *(undefined4 *)(param_1 + 0x27) = 0;
  local_e8 = plVar1;
  if (*(int *)((longlong)param_1 + 0x13c) != 0) {
    TArray<FBatchedLine,FDefaultAllocator>::ResizeTo(plVar1);
  }
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  if (*(int *)((longlong)param_1 + 0x15c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc();
  }
  if (0 < (int)*(uint *)(param_1 + 0x2f)) {
    uVar20 = 0;
    uVar21 = (ulonglong)*(uint *)(param_1 + 0x2f);
    do {
      plVar18 = (longlong *)param_1[0x2e];
      if ((longlong *)param_1[0x2e] == (longlong *)0x0) {
        plVar18 = param_1 + 0x2d;
      }
      uVar9 = (longlong)(int)param_1[0x2f] - 1U & uVar20;
      uVar20 = uVar20 + 1;
      *(undefined4 *)((longlong)plVar18 + uVar9 * 4) = 0xffffffff;
      uVar21 = uVar21 - 1;
    } while (uVar21 != 0);
  }
  lVar10 = APlayerStateGunfire::GetPrivateStaticClass();
  local_f0 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar10 != 0) {
    lVar11 = APlayerStateGunfire::GetPrivateStaticClass();
    lVar22 = lVar10;
    do {
      if (lVar22 == lVar11) goto LAB_142b8d4b0;
      lVar22 = *(longlong *)(lVar22 + 0x30);
    } while (lVar22 != 0);
  }
  lVar10 = 0;
LAB_142b8d4b0:
  local_90[0] = 5;
  local_38 = '\0';
  local_f8 = lVar10;
  FUN_14044bc80(&local_88,&local_f0,&local_f8);
  FUN_14045a130(local_90);
  iVar23 = local_70;
  plVar18 = local_60;
joined_r0x000142b8d4e5:
  local_70 = iVar23;
  local_60 = plVar18;
  if (local_6c == '\0') {
    if (plVar18 != (longlong *)0x0) {
      iVar23 = *(int *)((longlong)plVar18 + 0xc);
      if (iVar23 < (int)DAT_1469e91c4) {
        uVar16 = iVar23 >> 0x1f & 0xffff;
        uVar8 = iVar23 + uVar16;
        lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                 (longlong)(int)((uVar8 & 0xffff) - uVar16) * 0x18;
      }
      else {
        lVar10 = 0;
      }
      if ((*(uint *)(lVar10 + 8) >> 0x1d & 1) == 0) {
        FNavAgentSelector::FNavAgentSelector(&local_c0);
        local_e0 = *(undefined4 *)((longlong)plVar18 + 0xc);
        local_bc = 0xffffffff;
        local_b8 = 0;
        puVar12 = (undefined4 *)(**(code **)(*plVar18 + 0x560))(plVar18,local_b0,1);
        local_dc = *puVar12;
        uStack_d8 = puVar12[1];
        uStack_d4 = puVar12[2];
        uStack_d0 = puVar12[3];
        local_cc = *(undefined8 *)(puVar12 + 4);
        local_c4 = puVar12[6];
        uVar13 = AActor::GetLevel(plVar18);
        FWeakObjectPtr::operator=(&local_bc,uVar13);
        local_c0 = (undefined4)plVar18[0x92];
        FUN_142b7ddf0(plVar1,&local_f8,&local_e0,0);
      }
    }
    lVar10 = local_88;
    iVar23 = local_70 + 1;
    if (iVar23 < local_50 + local_78) {
      lVar22 = (longlong)iVar23 * 8;
      iVar17 = local_78;
      iVar19 = local_50;
      do {
        if (iVar23 < iVar17) {
          plVar18 = *(longlong **)(lVar22 + local_80);
        }
        else {
          plVar18 = *(longlong **)(local_58 + (longlong)(iVar23 - iVar17) * 8);
        }
        local_68 = local_68 + 1;
        if ((plVar18 != (longlong *)0x0) &&
           (lVar11 = AActor::GetLevel(plVar18), iVar17 = local_78, iVar19 = local_50, lVar11 != 0))
        {
          if ((local_90[0] & 1) != 0) {
            iVar2 = *(int *)((longlong)plVar18 + 0xc);
            if (iVar2 < (int)DAT_1469e91c4) {
              uVar16 = iVar2 >> 0x1f & 0xffff;
              uVar8 = iVar2 + uVar16;
              lVar14 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                       (longlong)(int)((uVar8 & 0xffff) - uVar16) * 0x18;
            }
            else {
              lVar14 = 0;
            }
            if ((*(uint *)(lVar14 + 8) >> 0x1d & 1) != 0) goto LAB_142b8d785;
          }
          if (((local_90[0] >> 1 & 1) == 0) ||
             (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(plVar18), iVar17 = local_78,
             iVar19 = local_50, cVar7 != '\0')) {
            if ((local_90[0] >> 2 & 1) != 0) {
              if (((*(byte *)(lVar11 + 0x204) & 0x10) == 0) &&
                 ((*(byte *)(lVar11 + 0x205) & 0x10) == 0)) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
              piVar3 = *(int **)(lVar11 + 600);
              if (((*(longlong *)(lVar11 + 0xc0) == 0) ||
                  (piVar15 = (int *)UWorld::GetActiveLevelCollection(), piVar15 == (int *)0x0)) ||
                 (piVar3 == piVar15)) {
                bVar4 = true;
              }
              else {
                bVar4 = false;
              }
              if ((piVar3 == (int *)0x0) || (*piVar3 == 2)) {
                bVar5 = true;
              }
              else {
                bVar5 = false;
              }
              if ((bVar4) || (bVar4 = false, bVar5)) {
                bVar4 = true;
              }
              iVar17 = local_78;
              iVar19 = local_50;
              if ((!bVar6) || (!bVar4)) goto LAB_142b8d785;
            }
            lVar11 = ULevel::GetWorld(lVar11);
            iVar17 = local_78;
            iVar19 = local_50;
            if (lVar11 == lVar10) {
              lVar11 = AActor::GetLevel(plVar18);
              plVar1 = local_e8;
              if (lVar11 == *(longlong *)(lVar10 + 0x30)) goto joined_r0x000142b8d4e5;
              lVar11 = UVoipListenerSynthComponent::GetPrivateStaticClass();
              if ((*(int *)(plVar18[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar18[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
                  lVar11 + 0x88)) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
              iVar17 = local_78;
              iVar19 = local_50;
              plVar1 = local_e8;
              if (!bVar6) goto joined_r0x000142b8d4e5;
            }
          }
        }
LAB_142b8d785:
        iVar23 = iVar23 + 1;
        lVar22 = lVar22 + 8;
        if (iVar19 + iVar17 <= iVar23) break;
      } while( true );
    }
    local_60 = (longlong *)0x0;
    local_6c = '\x01';
  }
  if (local_38 != '\0') {
    local_38 = 0;
    UWorld::RemoveOnActorSpawnedHandler(local_88,local_40);
    if (local_58 != 0) {
      FMemory::Free();
    }
    if (local_80 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142b8d850 FUN_142b8d850 body=682 status=ok
// SIG undefined FUN_142b8d850(void)

void FUN_142b8d850(uint *param_1,undefined4 param_2,longlong param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  int iVar4;
  undefined8 uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auVar11 [16];
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  
  uVar3 = *(ulonglong *)(param_1 + 1);
  uVar12 = *param_1 & 0x7fffffff;
  uVar13 = (uint)*(ulonglong *)(param_1 + 1) & 0x7fffffff;
  uVar14 = param_1[2] & 0x7fffffff;
  uVar15 = param_1[3] & 0x7fffffff;
  uVar16 = uVar12 ^ 0x80000000;
  uVar17 = uVar13 ^ 0x80000000;
  uVar18 = uVar14 ^ 0x80000000;
  uVar5 = FUN_143703a50();
  iVar4 = *(int *)(param_3 + 0x20);
  lVar9 = (longlong)iVar4;
  uVar8 = *(uint *)(param_3 + 0x24) & 0x3fffffff;
  iVar10 = iVar4 + 8;
  if ((int)uVar8 < iVar10) {
    iVar4 = uVar8 * 2;
    if (iVar10 < iVar4) {
      iVar10 = iVar4;
    }
    FUN_14370c310(uVar5,param_3 + 0x18,iVar10,0x10);
    iVar4 = *(int *)(param_3 + 0x20);
  }
  *(int *)(param_3 + 0x20) = iVar4 + 8;
  puVar6 = (uint *)(lVar9 * 0x10 + *(longlong *)(param_3 + 0x18));
  puVar6[4] = uVar12;
  puVar6[5] = uVar17;
  puVar6[6] = uVar18;
  puVar6[7] = uVar15;
  *puVar6 = uVar12 ^ 0x80000000;
  puVar6[1] = uVar13 ^ 0x80000000;
  puVar6[2] = uVar18;
  puVar6[3] = uVar15;
  puVar6[8] = uVar16;
  puVar6[9] = uVar13;
  puVar6[10] = uVar18;
  puVar6[0xb] = uVar15;
  puVar6[0xc] = uVar12;
  puVar6[0xd] = uVar13;
  puVar6[0xe] = uVar18;
  puVar6[0xf] = uVar15;
  puVar6[0x10] = uVar16;
  puVar6[0x11] = uVar17;
  puVar6[0x12] = uVar14;
  puVar6[0x13] = uVar15;
  puVar6[0x14] = uVar12;
  puVar6[0x15] = uVar17;
  puVar6[0x16] = uVar14;
  puVar6[0x17] = uVar15;
  puVar6[0x1c] = uVar12;
  puVar6[0x1d] = uVar13;
  puVar6[0x1e] = uVar14;
  puVar6[0x1f] = uVar15;
  auVar11._4_8_ = 0;
  auVar11._0_4_ = uVar16;
  auVar11._12_4_ = uVar15;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar3 & 0x7fffffff7fffffff;
  *(undefined1 (*) [16])(puVar6 + 0x18) = auVar11 | auVar2 << 0x20;
  uVar5 = FUN_143703a50();
  iVar4 = *(int *)(param_3 + 0x30);
  uVar8 = *(uint *)(param_3 + 0x34) & 0x3fffffff;
  iVar10 = iVar4 + 0xc;
  if ((int)uVar8 < iVar10) {
    iVar1 = uVar8 * 2;
    if (iVar10 < iVar1) {
      iVar10 = iVar1;
    }
    FUN_14370c310(uVar5,param_3 + 0x28,iVar10,0x10);
  }
  *(int *)(param_3 + 0x30) = *(int *)(param_3 + 0x30) + 0xc;
  puVar7 = (undefined4 *)((longlong)iVar4 * 0x10 + *(longlong *)(param_3 + 0x28));
  puVar7[3] = param_2;
  *puVar7 = 0;
  puVar7[1] = 4;
  puVar7[2] = 6;
  puVar7[7] = param_2;
  puVar7[4] = 0;
  puVar7[5] = 6;
  puVar7[6] = 2;
  puVar7[0xb] = param_2;
  puVar7[8] = 1;
  puVar7[9] = 3;
  puVar7[10] = 7;
  puVar7[0xf] = param_2;
  puVar7[0xc] = 1;
  puVar7[0xd] = 7;
  puVar7[0xe] = 5;
  puVar7[0x13] = param_2;
  puVar7[0x10] = 0;
  puVar7[0x11] = 1;
  puVar7[0x12] = 5;
  puVar7[0x17] = param_2;
  puVar7[0x14] = 0;
  puVar7[0x15] = 5;
  puVar7[0x16] = 4;
  puVar7[0x1b] = param_2;
  puVar7[0x18] = 2;
  puVar7[0x19] = 6;
  puVar7[0x1a] = 7;
  puVar7[0x1f] = param_2;
  puVar7[0x1c] = 2;
  puVar7[0x1d] = 7;
  puVar7[0x1e] = 3;
  puVar7[0x23] = param_2;
  puVar7[0x20] = 0;
  puVar7[0x21] = 2;
  puVar7[0x22] = 3;
  puVar7[0x27] = param_2;
  puVar7[0x24] = 0;
  puVar7[0x25] = 3;
  puVar7[0x26] = 1;
  puVar7[0x2b] = param_2;
  puVar7[0x28] = 4;
  puVar7[0x29] = 5;
  puVar7[0x2a] = 7;
  puVar7[0x2f] = param_2;
  puVar7[0x2c] = 4;
  puVar7[0x2d] = 7;
  puVar7[0x2e] = 6;
  return;
}



// FUNCTION 142b8db00 FUN_142b8db00 body=1734 status=ok
// SIG undefined FUN_142b8db00(void)

void FUN_142b8db00(float param_1,undefined4 param_2,longlong param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  undefined8 uVar4;
  undefined1 (*pauVar5) [16];
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined1 (*pauVar12) [16];
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  int iVar22;
  longlong lVar23;
  longlong lVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  fVar29 = 1.0 - 0.2 / param_1;
  if (-1.0 < fVar29) {
    if (fVar29 < 1.0) {
      fVar31 = -1.0;
      if ((-1.0 <= fVar29) && (fVar31 = fVar29, 1.0 <= fVar29)) {
        fVar31 = 1.0;
      }
      fVar29 = _guard_xfg_dispatch_icall_nop(fVar31);
      if (0.0 < fVar29) {
        iVar9 = -((int)ROUND(-0.5 - (3.1415927 / fVar29 + 3.1415927 / fVar29)) >> 1);
        if (iVar9 < 4) {
          iVar14 = 4;
        }
        else {
          iVar14 = 0x14;
          if (iVar9 < 0x14) {
            iVar14 = iVar9;
          }
        }
      }
      else {
        iVar14 = 0x14;
      }
    }
    else {
      iVar14 = 0x14;
    }
  }
  else {
    iVar14 = 4;
  }
  iVar3 = (iVar14 + -1) / 2;
  uVar1 = iVar3 - 1;
  iVar16 = iVar3 * iVar14 + 2;
  iVar22 = uVar1 * iVar14 * 2 + iVar14 * 2;
  fVar29 = 3.1415927 / (float)(iVar3 + 1);
  uVar4 = FUN_143703a50();
  iVar9 = *(int *)(param_3 + 0x20);
  lVar24 = (longlong)iVar9;
  uVar8 = *(uint *)(param_3 + 0x24) & 0x3fffffff;
  iVar17 = iVar9 + iVar16;
  if ((int)uVar8 < iVar17) {
    iVar9 = uVar8 * 2;
    if (iVar17 < iVar9) {
      iVar17 = iVar9;
    }
    FUN_14370c310(uVar4,param_3 + 0x18,iVar17,0x10);
    iVar9 = *(int *)(param_3 + 0x20);
  }
  *(int *)(param_3 + 0x20) = iVar9 + iVar16;
  fVar31 = -param_1;
  pauVar5 = (undefined1 (*) [16])(lVar24 * 0x10 + *(longlong *)(param_3 + 0x18));
  *pauVar5 = ZEXT416((uint)fVar31) << 0x40;
  pauVar5[1] = ZEXT416((uint)param_1) << 0x40;
  if (0 < iVar3) {
    pauVar5 = pauVar5 + 2;
    uVar13 = 0;
    do {
      fVar30 = (float)(int)uVar13 * fVar29 + (fVar29 - 1.5707964);
      if (fVar30 < 0.0) {
        fVar25 = fVar30 * 0.15915494 - 0.5;
      }
      else {
        fVar25 = fVar30 * 0.15915494 + 0.5;
      }
      fVar30 = fVar30 - (float)(int)fVar25 * 6.2831855;
      if (fVar30 <= 1.5707964) {
        fVar25 = param_1;
        if (fVar30 < -1.5707964) {
          fVar30 = -3.1415927 - fVar30;
          fVar25 = fVar31;
        }
      }
      else {
        fVar30 = 3.1415927 - fVar30;
        fVar25 = fVar31;
      }
      fVar27 = fVar30 * fVar30;
      fVar25 = (((((2.4760495e-05 - fVar27 * 2.6051615e-07) * fVar27 - 0.0013888378) * fVar27 +
                 0.041666638) * fVar27 - 0.5) * fVar27 + 1.0) * fVar25;
      pauVar12 = pauVar5;
      iVar9 = 0;
      if (0 < iVar14) {
        do {
          fVar32 = (float)iVar9 * (6.2831855 / (float)iVar14);
          if (fVar32 < 0.0) {
            fVar26 = fVar32 * 0.15915494 - 0.5;
          }
          else {
            fVar26 = fVar32 * 0.15915494 + 0.5;
          }
          fVar32 = fVar32 - (float)(int)fVar26 * 6.2831855;
          if (fVar32 <= 1.5707964) {
            fVar26 = fVar25;
            if (fVar32 < -1.5707964) {
              fVar26 = -3.1415927;
              goto LAB_142b8dec2;
            }
          }
          else {
            fVar26 = 3.1415927;
LAB_142b8dec2:
            fVar32 = fVar26 - fVar32;
            fVar26 = -fVar25;
          }
          fVar28 = fVar32 * fVar32;
          iVar9 = iVar9 + 1;
          auVar2._4_4_ = (((((2.7525562e-06 - fVar28 * 2.3889859e-08) * fVar28 - 0.00019840874) *
                            fVar28 + 0.008333331) * fVar28 - 0.16666667) * fVar28 + 1.0) * fVar32 *
                         fVar25;
          auVar2._0_4_ = (((((2.4760495e-05 - fVar28 * 2.6051615e-07) * fVar28 - 0.0013888378) *
                            fVar28 + 0.041666638) * fVar28 - 0.5) * fVar28 + 1.0) * fVar26;
          auVar2._8_4_ = (((((2.7525562e-06 - fVar27 * 2.3889859e-08) * fVar27 - 0.00019840874) *
                            fVar27 + 0.008333331) * fVar27 - 0.16666667) * fVar27 + 1.0) * fVar30 *
                         param_1;
          auVar2._12_4_ = 0;
          *pauVar12 = auVar2;
          pauVar12 = pauVar12 + 1;
        } while (iVar9 < iVar14);
      }
      uVar8 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar8;
      pauVar5 = pauVar5 + iVar14;
    } while ((int)uVar8 < iVar3);
  }
  uVar4 = FUN_143703a50();
  iVar9 = *(int *)(param_3 + 0x30);
  lVar24 = (longlong)iVar9;
  uVar8 = *(uint *)(param_3 + 0x34) & 0x3fffffff;
  iVar17 = iVar9 + iVar22;
  if ((int)uVar8 < iVar17) {
    iVar9 = uVar8 * 2;
    if (iVar17 < iVar9) {
      iVar17 = iVar9;
    }
    FUN_14370c310(uVar4,param_3 + 0x28,iVar17,0x10);
    iVar9 = *(int *)(param_3 + 0x30);
  }
  *(int *)(param_3 + 0x30) = iVar9 + iVar22;
  lVar24 = lVar24 * 0x10 + *(longlong *)(param_3 + 0x28);
  uVar13 = (ulonglong)(iVar14 + -1);
  iVar9 = uVar1 * iVar14 + 2;
  lVar23 = (longlong)iVar14;
  if (0 < iVar14) {
    uVar19 = 0;
    iVar17 = iVar9;
    uVar20 = uVar13;
    do {
      uVar18 = uVar19;
      lVar11 = uVar20 * 0x10;
      *(undefined4 *)(lVar11 + lVar24) = 0;
      *(int *)(lVar11 + 4 + lVar24) = (2 - iVar9) + iVar17;
      iVar3 = (int)uVar13;
      *(int *)(lVar11 + 8 + lVar24) = iVar3 + 2;
      *(undefined4 *)(lVar11 + 0xc + lVar24) = param_2;
      lVar11 = lVar11 + lVar23 * 0x10;
      uVar13 = (ulonglong)(uint)(iVar17 - iVar9);
      *(int *)(lVar11 + 8 + lVar24) = iVar17;
      iVar17 = iVar17 + 1;
      *(undefined4 *)(lVar11 + lVar24) = 1;
      *(int *)(lVar11 + 4 + lVar24) = iVar3 + iVar9;
      *(undefined4 *)(lVar11 + 0xc + lVar24) = param_2;
      uVar19 = uVar18 + 1;
      uVar20 = uVar18;
    } while ((longlong)uVar19 < lVar23);
  }
  uVar13 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    iVar9 = iVar14 + 2;
    lVar6 = (longlong)(iVar14 * 2) * 0x10;
    iVar17 = -2 - iVar14;
    iVar3 = -iVar14;
    lVar11 = lVar6;
    do {
      uVar20 = (ulonglong)(iVar14 + -1);
      if (0 < lVar23) {
        lVar7 = uVar20 << 5;
        lVar15 = lVar23;
        lVar21 = 0;
        iVar16 = iVar9;
        do {
          lVar7 = lVar11 + lVar7;
          *(int *)(lVar7 + 8 + lVar24) = iVar16;
          *(int *)(lVar7 + 4 + lVar24) = iVar16 + iVar3;
          iVar22 = (int)uVar20;
          iVar10 = iVar3 + iVar9 + iVar22;
          *(int *)(lVar7 + lVar24) = iVar10;
          *(undefined4 *)(lVar7 + 0xc + lVar24) = param_2;
          uVar20 = (ulonglong)(uint)(iVar17 + iVar16);
          *(int *)(lVar7 + 0x18 + lVar24) = iVar9 + iVar22;
          *(int *)(lVar7 + 0x14 + lVar24) = iVar16;
          iVar16 = iVar16 + 1;
          *(int *)(lVar7 + 0x10 + lVar24) = iVar10;
          *(undefined4 *)(lVar7 + 0x1c + lVar24) = param_2;
          lVar15 = lVar15 + -1;
          lVar7 = lVar21;
          lVar21 = lVar21 + 0x20;
        } while (lVar15 != 0);
      }
      iVar9 = iVar9 + iVar14;
      iVar17 = iVar17 + iVar3;
      lVar11 = lVar11 + lVar6;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  return;
}



// FUNCTION 142b8e1f0 FUN_142b8e1f0 body=401 status=ok
// SIG undefined FUN_142b8e1f0(void)

undefined2 * FUN_142b8e1f0(undefined2 *param_1,longlong param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  *(undefined8 *)(param_1 + 0xc) = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  if (*(int *)(param_2 + 0x98) == 3) {
    *(undefined1 *)param_1 = *(undefined1 *)(param_2 + 0xa0);
    *(undefined1 *)((longlong)param_1 + 1) = *(undefined1 *)(param_2 + 0xa1);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 0xa8);
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 0xb0);
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0xb4);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xb8);
  }
  else {
    cVar3 = FWeakObjectPtr::IsValid(param_2 + 0x140);
    if (cVar3 != '\0') {
      lVar5 = FWeakObjectPtr::Get(param_2 + 0x140);
      *(undefined1 *)param_1 = *(undefined1 *)(lVar5 + 0xb8);
      *(undefined1 *)((longlong)param_1 + 1) = *(undefined1 *)(lVar5 + 0xb9);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(lVar5 + 0xc0);
      *(undefined1 *)(param_1 + 8) = *(undefined1 *)(lVar5 + 200);
      *(undefined4 *)(param_1 + 10) = *(undefined4 *)(lVar5 + 0xcc);
      *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(lVar5 + 0xd0);
    }
  }
  if (*(int *)(param_2 + 0x98) == 2) {
    *(undefined1 *)((longlong)param_1 + 1) = 4;
  }
  else if ((*(int *)(param_2 + 0x98) == 1) &&
          (*(undefined1 *)(param_1 + 8) = 1, DAT_146aeebe0 != (code *)0x0)) {
    uVar6 = UAITask_LockLogic::StaticClass();
    uVar6 = (*DAT_146aeebe0)(uVar6);
    *(undefined8 *)(param_1 + 4) = uVar6;
  }
  if (*(char *)((longlong)param_1 + 1) != '\0') goto LAB_142b8e34b;
  cVar3 = FWeakObjectPtr::IsValid(param_2 + 0x138);
  if (cVar3 == '\0') {
LAB_142b8e313:
    bVar1 = true;
  }
  else {
    lVar5 = FWeakObjectPtr::Get(param_2 + 0x138);
    if (*(char *)(lVar5 + 0x24e) != '\x02') goto LAB_142b8e313;
    bVar1 = false;
  }
  iVar4 = FUN_142696340(param_2);
  if ((iVar4 == 3) && (*(char *)(param_2 + 0x2a) == '\x02')) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if ((*(int *)(param_2 + 0x98) == 1) || ((bVar1 && (bVar2)))) {
    *(undefined1 *)((longlong)param_1 + 1) = 1;
  }
  else {
    *(undefined1 *)((longlong)param_1 + 1) = 4;
  }
LAB_142b8e34b:
  if ((*(longlong *)(param_1 + 4) == 0) && (DAT_146aeebe0 != (code *)0x0)) {
    uVar6 = UAITask_LockLogic::StaticClass();
    uVar6 = (*DAT_146aeebe0)(uVar6);
    *(undefined8 *)(param_1 + 4) = uVar6;
  }
  return param_1;
}



// FUNCTION 142b8e390 GetBounds body=98 status=ok
// SIG undefined GetBounds(void)

undefined8 ANavigationData::GetBounds(undefined8 param_1,undefined8 param_2)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\navigationsystem\\public\\NavigationData.h",
             0x2a5,L"Pure virtual not implemented (%s)",L"ANavigationData::GetBounds");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\navigationsystem\\public\\NavigationData.h",
             0x2a5,L"Pure virtual not implemented (%s)",L"ANavigationData::GetBounds");
  return param_2;
}



// FUNCTION 142b8e400 FUN_142b8e400 body=99 status=ok
// SIG undefined FUN_142b8e400(void)

undefined4 * FUN_142b8e400(undefined4 *param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = param_2[0x1f];
    if (lVar1 == 0) {
      (**(code **)(*param_2 + 0x368))(param_2);
      lVar1 = param_2[0x1f];
    }
    *param_1 = *(undefined4 *)(lVar1 + 0x38);
    return param_1;
  }
  *param_1 = DAT_1464aa734;
  return param_1;
}



// FUNCTION 142b8e470 FUN_142b8e470 body=245 status=ok
// SIG undefined FUN_142b8e470(void)

longlong FUN_142b8e470(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  DWORD DVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((((*(byte *)(param_1 + 0xa8) & 1) == 0) && (*(int *)(param_1 + 0x98) < 1)) &&
     (*(int *)(param_1 + 0x88) < 1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  cVar3 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar3 != '\0') {
    return 0;
  }
  if (!bVar1) {
    return 0;
  }
  cVar3 = FFormatContainer::Contains(param_1 + 0xc0,param_2);
  lVar6 = FFormatContainer::GetFormat(param_1 + 0xc0,param_2);
  lVar2 = DAT_146b2ba78;
  if (cVar3 == '\0') {
    cVar3 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar3 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
      lVar7 = 4;
    }
    else {
      lVar7 = 0;
    }
    if (*(int *)(lVar7 + lVar2) != 0) {
      return 0;
    }
  }
  if ((lVar6 != 0) && (iVar5 = FUntypedBulkData::GetBulkDataSize(lVar6), 0 < iVar5)) {
    return lVar6;
  }
  return 0;
}



// FUNCTION 142b8e570 FUN_142b8e570 body=112 status=ok
// SIG undefined FUN_142b8e570(void)

longlong FUN_142b8e570(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x138);
  if (lVar1 != 0) {
    lVar3 = FUN_142ba9430();
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
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 142b8e5e0 GetCustomLink body=171 status=ok
// SIG undefined GetCustomLink(void)

undefined8 UNavigationSystemV1::GetCustomLink(longlong param_1,int param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  
  if (*(int *)(param_1 + 0x318) != *(int *)(param_1 + 0x344)) {
    lVar3 = *(longlong *)(param_1 + 0x350);
    if (*(longlong *)(param_1 + 0x350) == 0) {
      lVar3 = param_1 + 0x348;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)*(int *)(param_1 + 0x358) - 1U & (longlong)param_2) * 4);
    if (iVar2 != -1) {
      do {
        piVar4 = (int *)((longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x310));
        if (*piVar4 == param_2) {
          if (iVar2 != -1) goto LAB_142b8e652;
          break;
        }
        iVar2 = piVar4[6];
      } while (iVar2 != -1);
    }
  }
  piVar4 = (int *)0x0;
LAB_142b8e652:
  piVar5 = piVar4 + 2;
  if (piVar4 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  if ((piVar5 != (int *)0x0) && (cVar1 = FWeakObjectPtr::IsValid(piVar5), cVar1 != '\0')) {
    return *(undefined8 *)(piVar5 + 2);
  }
  return 0;
}



// FUNCTION 142b8e690 OnRevertInstance body=85 status=ok
// SIG undefined OnRevertInstance(void)

undefined8 UEditableMeshAdapter::OnRevertInstance(void)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\navigationsystem\\public\\havoknavlayers\\HavokNavLayer.h"
             ,0x1f,L"Pure virtual not implemented (%s)",L"UHavokNavLayer::GetDataType");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\navigationsystem\\public\\havoknavlayers\\HavokNavLayer.h"
             ,0x1f,L"Pure virtual not implemented (%s)",L"UHavokNavLayer::GetDataType");
  return 0;
}



// FUNCTION 142b8e6f0 GetDebugString body=159 status=ok
// SIG undefined GetDebugString(void)

undefined8 * UNavigationPath::GetDebugString(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  if ((*(byte *)(param_1 + 0x4c) & 1) == 0) {
    *param_2 = 0;
    param_2[1] = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    FGenericPlatformString::Memcpy(*param_2,L"Invalid path",0x1a);
    return param_2;
  }
  lVar1 = *(longlong *)(param_1 + 0x60);
  pwVar2 = L", OUT OF DATE!";
  pwVar3 = L"";
  if ((*(byte *)(lVar1 + 0x98) & 1) != 0) {
    pwVar2 = L"";
  }
  if ((*(uint *)(lVar1 + 0x98) >> 2 & 1) != 0) {
    pwVar3 = L", partial";
  }
  FString::PrintfImpl(param_2,L"Path: points %d%s%s",*(undefined4 *)(lVar1 + 0x30),pwVar3,pwVar2);
  return param_2;
}



// FUNCTION 142b8e790 FUN_142b8e790 body=533 status=ok
// SIG undefined FUN_142b8e790(void)

longlong FUN_142b8e790(longlong *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined2 *puVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  undefined8 in_stack_ffffffffffffff98;
  uint uVar14;
  longlong local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  
  uVar14 = (uint)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  uVar13 = 0;
  if (param_1[5] != 0) {
    iVar1 = *(int *)(param_1[5] + 0xc);
    uVar5 = uVar13;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar9 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar9;
      uVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar9) * 0x18;
    }
    if ((*(uint *)(uVar5 + 8) >> 0x1d & 1) == 0) goto LAB_142b8e998;
  }
  param_1[5] = 0;
  uVar5 = uVar13;
  if (0 < (int)param_1[0xe]) {
    puVar12 = (ulonglong *)param_1[0xd];
    uVar11 = uVar13;
    do {
      uVar5 = *puVar12;
      if (uVar5 != 0) {
        uVar2 = *(uint *)(uVar5 + 0xc);
        uVar8 = uVar13;
        if ((int)uVar2 < (int)DAT_1469e91c4) {
          uVar9 = uVar2 & 0xffff;
          if ((int)uVar2 < 0) {
            uVar2 = uVar2 + 0xffff;
            uVar9 = uVar9 - 0x10000;
          }
          uVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                  (longlong)(int)uVar9 * 0x18;
        }
        if (((*(uint *)(uVar8 + 8) >> 0x1d & 1) == 0) && ((*(uint *)(uVar5 + 0x4d0) >> 2 & 1) != 0))
        {
          param_1[5] = uVar5;
          break;
        }
      }
      uVar2 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar2;
      puVar12 = puVar12 + 1;
      uVar5 = uVar13;
    } while ((int)uVar2 < (int)param_1[0xe]);
  }
  if (((uVar5 == 0) && (uVar5 = uVar13, param_2 == 1)) && (param_1[0x82] != 0)) {
    puVar3 = (undefined8 *)FSoftObjectPath::ToString(param_1 + 0x82,local_58);
    if (*(int *)(puVar3 + 1) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = (undefined2 *)*puVar3;
    }
    uVar4 = FUN_142baab40();
    uVar5 = FUN_141799830(uVar4,0,puVar10,0,(ulonglong)uVar14 << 0x20,0);
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    FActorSpawnParameters::FActorSpawnParameters(local_48);
    lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
    local_28 = *(undefined8 *)(lVar6 + 0x30);
    uVar11 = uVar13;
    if (uVar5 != 0) {
      uVar7 = FUN_142baab40();
      uVar8 = uVar5;
      do {
        uVar11 = uVar5;
        if (uVar8 == uVar7) break;
        uVar8 = *(ulonglong *)(uVar8 + 0x30);
        uVar11 = uVar13;
      } while (uVar8 != 0);
    }
    uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    uVar5 = UWorld::SpawnActor(uVar4,uVar11,0,0,local_48);
    param_1[5] = uVar5;
  }
  (**(code **)(*param_1 + 0x338))(param_1,uVar5);
LAB_142b8e998:
  return param_1[5];
}



// FUNCTION 142b8e9b0 FUN_142b8e9b0 body=189 status=ok
// SIG undefined FUN_142b8e9b0(void)

undefined * FUN_142b8e9b0(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b2bbd8) {
    _Init_thread_header(&DAT_146b2bbd8);
    if (DAT_146b2bbd8 == -1) {
      FUN_142243f40(&DAT_146b2bb70,0x420c0000,0x43100000);
      atexit(FUN_143ebf2a0);
      _Init_thread_footer(&DAT_146b2bbd8);
    }
  }
  plVar1 = (longlong *)FUN_142ba9430();
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  if (0 < *(int *)(lVar2 + 0x58)) {
    return *(undefined **)(lVar2 + 0x50);
  }
  return &DAT_146b2bb70;
}



// FUNCTION 142b8ea80 FUN_142b8ea80 body=282 status=ok
// SIG undefined FUN_142b8ea80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142b8ea80(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  undefined1 local_20 [24];
  
  cVar3 = FUN_14044af00(param_1 + 0x40,0);
  if (cVar3 == '\0') {
    if (*(int *)(param_1 + 0x30) < 1) {
      puVar4 = &DAT_146687978;
    }
    else {
      puVar4 = (undefined8 *)
               ((longlong)(*(int *)(param_1 + 0x30) + -1) * 0x20 + *(longlong *)(param_1 + 0x28));
    }
    local_24 = *(undefined4 *)(puVar4 + 1);
    puVar6 = &local_2c;
    local_2c = *puVar4;
  }
  else {
    plVar2 = *(longlong **)(param_1 + 0x48);
    if (plVar2 == (longlong *)0x0) {
      lVar5 = FWeakObjectPtr::Get(param_1 + 0x40);
      lVar5 = *(longlong *)(lVar5 + 0x168);
      if (lVar5 == 0) {
        local_38 = _DAT_1468b5d90;
        local_30 = DAT_1468b5d98;
      }
      else {
        local_30 = *(undefined4 *)(lVar5 + 0x228);
        local_38 = *(undefined8 *)(lVar5 + 0x220);
      }
      local_24 = local_30;
      puVar4 = &local_2c;
      local_2c = local_38;
    }
    else {
      puVar4 = (undefined8 *)(**(code **)(*plVar2 + 0x18))(plVar2,local_20);
    }
    local_30 = *(undefined4 *)(puVar4 + 1);
    puVar6 = &local_38;
    local_38 = *puVar4;
  }
  uVar1 = *(undefined4 *)(puVar6 + 1);
  *param_2 = *puVar6;
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 142b8ebb0 FUN_142b8ebb0 body=106 status=ok
// SIG undefined FUN_142b8ebb0(void)

void FUN_142b8ebb0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  char cVar1;
  undefined8 local_res8 [2];
  undefined1 local_res18 [16];
  undefined1 *local_38;
  undefined8 **ppuStack_30;
  undefined8 *local_28;
  undefined1 *local_20;
  undefined8 local_18;
  
  local_res8[0] = param_1;
  local_res18[0] = param_3;
  cVar1 = FBodyInstance::IsValidBodyInstance();
  if (cVar1 != '\0') {
    local_28 = local_res8;
    local_20 = local_res18;
    ppuStack_30 = &local_28;
    local_38 = &LAB_142b885b0;
    local_18 = param_2;
    FUN_1426936b0(local_res8[0],&local_38);
  }
  return;
}



// FUNCTION 142b8ec20 GetLengthFromPosition body=600 status=ok
// SIG undefined GetLengthFromPosition(void)

float FNavigationPath::GetLengthFromPosition(longlong param_1,float *param_2,uint param_3)

{
  uint uVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  if (param_3 < uVar1) {
    fVar18 = 0.0;
    if (3 < uVar1 - param_3) {
      lVar3 = *(longlong *)(param_1 + 0x28);
      do {
        lVar5 = (longlong)(int)param_3;
        lVar4 = lVar5 * 0x20;
        fVar2 = *(float *)(lVar4 + 8 + lVar3);
        fVar10 = (float)*(undefined8 *)(lVar4 + lVar3) - *param_2;
        fVar14 = *(float *)(lVar4 + 4 + lVar3) - param_2[1];
        fVar6 = fVar2 - param_2[2];
        *(undefined8 *)param_2 = *(undefined8 *)(lVar4 + lVar3);
        param_2[2] = fVar2;
        lVar4 = (lVar5 + 1) * 0x20;
        fVar2 = *(float *)(lVar4 + 8 + lVar3);
        fVar11 = (float)*(undefined8 *)(lVar4 + lVar3) - *param_2;
        fVar15 = *(float *)(lVar4 + 4 + lVar3) - param_2[1];
        fVar7 = fVar2 - param_2[2];
        *(undefined8 *)param_2 = *(undefined8 *)(lVar4 + lVar3);
        param_2[2] = fVar2;
        lVar4 = (lVar5 + 2) * 0x20;
        fVar2 = *(float *)(lVar4 + 8 + lVar3);
        fVar12 = (float)*(undefined8 *)(lVar4 + lVar3) - *param_2;
        fVar16 = *(float *)(lVar4 + 4 + lVar3) - param_2[1];
        fVar8 = fVar2 - param_2[2];
        *(undefined8 *)param_2 = *(undefined8 *)(lVar4 + lVar3);
        param_2[2] = fVar2;
        lVar4 = (lVar5 + 3) * 0x20;
        fVar17 = *(float *)(lVar4 + 4 + lVar3) - param_2[1];
        fVar13 = (float)*(undefined8 *)(lVar4 + lVar3) - *param_2;
        fVar2 = *(float *)(lVar4 + 8 + lVar3);
        fVar9 = fVar2 - param_2[2];
        fVar18 = fVar18 + SQRT(fVar14 * fVar14 + fVar10 * fVar10 + fVar6 * fVar6) +
                 SQRT(fVar15 * fVar15 + fVar11 * fVar11 + fVar7 * fVar7) +
                 SQRT(fVar16 * fVar16 + fVar12 * fVar12 + fVar8 * fVar8) +
                 SQRT(fVar17 * fVar17 + fVar13 * fVar13 + fVar9 * fVar9);
        param_3 = param_3 + 4;
        *(undefined8 *)param_2 = *(undefined8 *)(lVar4 + lVar3);
        param_2[2] = fVar2;
      } while (param_3 < uVar1 - 3);
    }
    if (param_3 < uVar1) {
      lVar3 = *(longlong *)(param_1 + 0x28);
      do {
        lVar4 = (longlong)(int)param_3;
        param_3 = param_3 + 1;
        lVar4 = lVar4 * 0x20;
        fVar2 = *(float *)(lVar4 + 8 + lVar3);
        fVar7 = (float)*(undefined8 *)(lVar4 + lVar3) - *param_2;
        fVar8 = *(float *)(lVar4 + 4 + lVar3) - param_2[1];
        fVar6 = fVar2 - param_2[2];
        fVar18 = fVar18 + SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
        *(undefined8 *)param_2 = *(undefined8 *)(lVar4 + lVar3);
        param_2[2] = fVar2;
      } while (param_3 < uVar1);
    }
    return fVar18;
  }
  return 0.0;
}



// FUNCTION 142b8ee80 GetLinkOwner body=93 status=ok
// SIG undefined GetLinkOwner(void)

longlong INavLinkCustomInterface::GetLinkOwner(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = 0;
  if (param_1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_1 + 8))();
    lVar3 = UObject::GetPrivateStaticClass();
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
      lVar4 = lVar2;
    }
  }
  return lVar4;
}



// FUNCTION 142b8eee0 FUN_142b8eee0 body=187 status=ok
// SIG undefined FUN_142b8eee0(void)

longlong FUN_142b8eee0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  
  FNavigationLinkBase::FNavigationLinkBase();
  lVar5 = *param_2;
  *(undefined4 *)(param_1 + 0x3c) = 0xc2480000;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0x42480000;
  plVar3 = (longlong *)(**(code **)(lVar5 + 0x18))(param_2,local_res10);
  lVar5 = 0;
  if (*plVar3 != 0) {
    lVar4 = UAITask::GetPrivateStaticClass();
    for (lVar1 = *plVar3; (lVar5 = 0, lVar1 != 0 && (lVar5 = *plVar3, lVar1 != lVar4));
        lVar1 = *(longlong *)(lVar1 + 0x30)) {
    }
  }
  FNavigationLinkBase::SetAreaClass(param_1,lVar5);
  uVar2 = (**(code **)(*param_2 + 0x20))(param_2);
  local_res8[0] = 0;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  (**(code **)(*param_2 + 0x10))(param_2,param_1 + 0x38,param_1 + 0x44,local_res8);
  *(undefined1 *)(param_1 + 8) = (undefined1)local_res8[0];
  return param_1;
}



// FUNCTION 142b8efa0 FUN_142b8efa0 body=180 status=ok
// SIG undefined FUN_142b8efa0(void)

longlong FUN_142b8efa0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if ((lVar2 == 0) || (lVar2 = *(longlong *)(lVar2 + 0x138), lVar2 == 0)) {
LAB_142b8effe:
    lVar2 = 0;
  }
  else {
    lVar3 = FUN_142ba9430();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_142b8effe;
  }
  uVar4 = UNavAgentInterface::GetPrivateStaticClass();
  plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_1,uVar4);
  if (plVar5 != (longlong *)0x0) {
    uVar4 = (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar3 = FUN_142b8f070(lVar2,uVar4);
    if (lVar3 != 0) goto LAB_142b8f042;
  }
  lVar3 = FUN_142b8e790(lVar2,0);
  if (lVar3 == 0) {
    return 0;
  }
LAB_142b8f042:
  return lVar3 + 0x458;
}



// FUNCTION 142b8f060 thunk_FUN_142b8f070 body=5 status=ok
// SIG undefined thunk_FUN_142b8f070(void)

ulonglong thunk_FUN_142b8f070(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint *puVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int aiStackX_8 [2];
  longlong lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [16];
  uint uStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  uint uStack_b0;
  undefined8 uStack_a8;
  longlong lStack_a0;
  undefined8 uStack_98;
  
  if (*(int *)(param_1 + 0x58) < 2) {
    return *(ulonglong *)(param_1 + 0x28);
  }
  TSet<TTuple<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x220,aiStackX_8);
  uVar9 = 0;
  uVar7 = uVar9;
  if (aiStackX_8[0] != -1) {
    uVar7 = (longlong)aiStackX_8[0] * 0x40 + *(longlong *)(param_1 + 0x220);
  }
  uVar6 = uVar7 + 0x30;
  if (uVar7 == 0) {
    uVar6 = uVar9;
  }
  uVar7 = uVar9;
  if ((uVar6 == 0) || (uVar7 = FWeakObjectPtr::Get(uVar6), uVar7 == 0)) {
    lStack_e8 = 0;
    uStack_e0 = 0;
    TMapBase<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>,0>_>
    ::GenerateKeyArray<TSizedDefaultAllocator<32>_>(param_1 + 0x220,&lStack_e8);
    lVar8 = lStack_e8;
    uStack_c0 = uStack_c0 & 0xffffffe0;
    fVar18 = -3.4028235e+38;
    fStack_bc = -1.0;
    fStack_b8 = -1.0;
    fStack_b4 = -1.0;
    uStack_b0 = 0x3f000000;
    uStack_a8 = 0;
    lStack_a0 = 0;
    fVar17 = -3.4028235e+38;
    uStack_98 = 0;
    if ((*(uint *)(param_1 + 0x40) & 0x100) == 0) {
      fVar19 = *(float *)(param_2 + 8);
    }
    else {
      fVar19 = 0.0;
    }
    iVar12 = (int)uStack_e0;
    while ((iVar13 = (int)uVar9, -1 < iVar13 && (iVar13 < iVar12))) {
      puVar10 = (uint *)((longlong)iVar13 * 0x30 + lVar8);
      cVar5 = FNavAgentProperties::IsNavDataMatching();
      if (cVar5 != '\0') {
        fVar16 = (float)puVar10[1] - *(float *)(param_2 + 4);
        if ((*(uint *)(param_1 + 0x40) & 0x100) == 0) {
          fVar15 = (float)puVar10[2] - fVar19;
        }
        else {
          fVar15 = 0.0;
        }
        if ((((fVar16 == 0.0) && (fVar17 != 0.0)) ||
            ((0.0 < fVar16 && ((fVar17 < 0.0 || ((0.0 < fVar17 && (fVar16 < fVar17)))))))) ||
           ((fVar16 < 0.0 && ((fVar17 < 0.0 && (fVar17 < fVar16)))))) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if ((((fVar15 == 0.0) && (fVar18 != 0.0)) ||
            ((0.0 < fVar15 && ((fVar18 < 0.0 || ((0.0 < fVar18 && (fVar15 < fVar18)))))))) ||
           ((fVar15 < 0.0 && ((fVar18 < 0.0 && (fVar18 < fVar15)))))) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if ((fVar17 < 0.0) || (fVar18 < 0.0)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if ((((bVar2) || (fVar16 == fVar17)) && ((bVar4 || (fVar15 == fVar18)))) ||
           ((!bVar3 && ((bVar2 || ((fVar16 == fVar17 && (bVar4)))))))) {
          uStack_c0 = *puVar10;
          fStack_bc = (float)puVar10[1];
          fStack_b8 = (float)puVar10[2];
          fStack_b4 = (float)puVar10[3];
          uStack_b0 = puVar10[4];
          uStack_d8 = *(undefined8 *)(puVar10 + 6);
          FString::FString(auStack_d0,puVar10 + 8);
          FSoftObjectPath::operator=(&uStack_a8,&uStack_d8);
          fVar17 = fVar16;
          fVar18 = fVar15;
        }
      }
      uVar9 = (ulonglong)(iVar13 + 1);
    }
    plVar11 = (longlong *)(param_1 + 0x220);
    if ((0.0 <= fStack_bc) && (0.0 <= fStack_b8)) {
      if (*(int *)(param_1 + 0x228) != *(int *)(param_1 + 0x254)) {
        lVar8 = *(longlong *)(param_1 + 0x260);
        if (*(longlong *)(param_1 + 0x260) == 0) {
          lVar8 = param_1 + 600;
        }
        iVar13 = *(int *)(lVar8 + ((((longlong)((int)(short)(int)fStack_bc << 0x10) |
                                    (longlong)(short)(int)fStack_b8) ^ (longlong)(int)fStack_b4) &
                                  (longlong)*(int *)(param_1 + 0x268) - 1U) * 4);
        if (iVar13 != -1) {
          lVar8 = *plVar11;
          fVar17 = fStack_b4;
          fVar18 = fStack_b8;
          fVar19 = fStack_bc;
          do {
            lVar14 = (longlong)iVar13 * 0x40;
            lVar1 = lVar8 + lVar14;
            if ((((ABS(*(float *)(lVar8 + 4 + lVar14) - fVar19) < 5.0) &&
                 (ABS(*(float *)(lVar1 + 8) - fVar18) < 5.0)) &&
                ((*(float *)(lVar1 + 0xc) < 0.0 ||
                 ((fVar17 < 0.0 || (ABS(*(float *)(lVar1 + 0xc) - fVar17) < 5.0)))))) &&
               (cVar5 = FNavAgentProperties::IsNavDataMatching(lVar1,&uStack_c0), fVar17 = fStack_b4
               , fVar18 = fStack_b8, fVar19 = fStack_bc, cVar5 != '\0')) {
              if (iVar13 != -1) {
                lVar14 = *plVar11 + lVar14;
                goto LAB_142b8f468;
              }
              break;
            }
            lVar8 = *plVar11;
            iVar13 = *(int *)(lVar8 + 0x38 + lVar14);
          } while (iVar13 != -1);
        }
      }
      lVar14 = 0;
LAB_142b8f468:
      uVar7 = 0;
      uVar9 = lVar14 + 0x30;
      if (lVar14 == 0) {
        uVar9 = uVar7;
      }
      if (uVar9 != 0) {
        uVar7 = FWeakObjectPtr::Get();
      }
    }
    if (lStack_a0 != 0) {
      FMemory::Free();
    }
    if (iVar12 != 0) {
      plVar11 = (longlong *)(lStack_e8 + 0x20);
      do {
        if (*plVar11 != 0) {
          FMemory::Free();
        }
        plVar11 = plVar11 + 6;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
    if (lStack_e8 != 0) {
      FMemory::Free(lStack_e8);
    }
    if (uVar7 == 0) {
      uVar7 = *(ulonglong *)(param_1 + 0x28);
    }
  }
  return uVar7;
}



// FUNCTION 142b8f070 FUN_142b8f070 body=1217 status=ok
// SIG undefined FUN_142b8f070(void)

ulonglong FUN_142b8f070(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint *puVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int local_res8 [2];
  longlong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [16];
  uint local_c0;
  float local_bc;
  float fStack_b8;
  float fStack_b4;
  uint uStack_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  
  if (*(int *)(param_1 + 0x58) < 2) {
    return *(ulonglong *)(param_1 + 0x28);
  }
  TSet<TTuple<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x220,local_res8);
  uVar9 = 0;
  uVar7 = uVar9;
  if (local_res8[0] != -1) {
    uVar7 = (longlong)local_res8[0] * 0x40 + *(longlong *)(param_1 + 0x220);
  }
  uVar6 = uVar7 + 0x30;
  if (uVar7 == 0) {
    uVar6 = uVar9;
  }
  uVar7 = uVar9;
  if ((uVar6 == 0) || (uVar7 = FWeakObjectPtr::Get(uVar6), uVar7 == 0)) {
    local_e8 = 0;
    local_e0 = 0;
    TMapBase<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>,0>_>
    ::GenerateKeyArray<TSizedDefaultAllocator<32>_>(param_1 + 0x220,&local_e8);
    lVar8 = local_e8;
    local_c0 = local_c0 & 0xffffffe0;
    fVar18 = -3.4028235e+38;
    local_bc = -1.0;
    fStack_b8 = -1.0;
    fStack_b4 = -1.0;
    uStack_b0 = 0x3f000000;
    local_a8 = 0;
    local_a0 = 0;
    fVar17 = -3.4028235e+38;
    local_98 = 0;
    if ((*(uint *)(param_1 + 0x40) & 0x100) == 0) {
      fVar19 = *(float *)(param_2 + 8);
    }
    else {
      fVar19 = 0.0;
    }
    iVar12 = (int)local_e0;
    while ((iVar13 = (int)uVar9, -1 < iVar13 && (iVar13 < iVar12))) {
      puVar10 = (uint *)((longlong)iVar13 * 0x30 + lVar8);
      cVar5 = FNavAgentProperties::IsNavDataMatching();
      if (cVar5 != '\0') {
        fVar16 = (float)puVar10[1] - *(float *)(param_2 + 4);
        if ((*(uint *)(param_1 + 0x40) & 0x100) == 0) {
          fVar15 = (float)puVar10[2] - fVar19;
        }
        else {
          fVar15 = 0.0;
        }
        if ((((fVar16 == 0.0) && (fVar17 != 0.0)) ||
            ((0.0 < fVar16 && ((fVar17 < 0.0 || ((0.0 < fVar17 && (fVar16 < fVar17)))))))) ||
           ((fVar16 < 0.0 && ((fVar17 < 0.0 && (fVar17 < fVar16)))))) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if ((((fVar15 == 0.0) && (fVar18 != 0.0)) ||
            ((0.0 < fVar15 && ((fVar18 < 0.0 || ((0.0 < fVar18 && (fVar15 < fVar18)))))))) ||
           ((fVar15 < 0.0 && ((fVar18 < 0.0 && (fVar18 < fVar15)))))) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if ((fVar17 < 0.0) || (fVar18 < 0.0)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if ((((bVar2) || (fVar16 == fVar17)) && ((bVar4 || (fVar15 == fVar18)))) ||
           ((!bVar3 && ((bVar2 || ((fVar16 == fVar17 && (bVar4)))))))) {
          local_c0 = *puVar10;
          local_bc = (float)puVar10[1];
          fStack_b8 = (float)puVar10[2];
          fStack_b4 = (float)puVar10[3];
          uStack_b0 = puVar10[4];
          local_d8 = *(undefined8 *)(puVar10 + 6);
          FString::FString(local_d0,puVar10 + 8);
          FSoftObjectPath::operator=(&local_a8,&local_d8);
          fVar17 = fVar16;
          fVar18 = fVar15;
        }
      }
      uVar9 = (ulonglong)(iVar13 + 1);
    }
    plVar11 = (longlong *)(param_1 + 0x220);
    if ((0.0 <= local_bc) && (0.0 <= fStack_b8)) {
      if (*(int *)(param_1 + 0x228) != *(int *)(param_1 + 0x254)) {
        lVar8 = *(longlong *)(param_1 + 0x260);
        if (*(longlong *)(param_1 + 0x260) == 0) {
          lVar8 = param_1 + 600;
        }
        iVar13 = *(int *)(lVar8 + ((((longlong)((int)(short)(int)local_bc << 0x10) |
                                    (longlong)(short)(int)fStack_b8) ^ (longlong)(int)fStack_b4) &
                                  (longlong)*(int *)(param_1 + 0x268) - 1U) * 4);
        if (iVar13 != -1) {
          lVar8 = *plVar11;
          fVar17 = fStack_b4;
          fVar18 = fStack_b8;
          fVar19 = local_bc;
          do {
            lVar14 = (longlong)iVar13 * 0x40;
            lVar1 = lVar8 + lVar14;
            if ((((ABS(*(float *)(lVar8 + 4 + lVar14) - fVar19) < 5.0) &&
                 (ABS(*(float *)(lVar1 + 8) - fVar18) < 5.0)) &&
                ((*(float *)(lVar1 + 0xc) < 0.0 ||
                 ((fVar17 < 0.0 || (ABS(*(float *)(lVar1 + 0xc) - fVar17) < 5.0)))))) &&
               (cVar5 = FNavAgentProperties::IsNavDataMatching(lVar1,&local_c0), fVar17 = fStack_b4,
               fVar18 = fStack_b8, fVar19 = local_bc, cVar5 != '\0')) {
              if (iVar13 != -1) {
                lVar14 = *plVar11 + lVar14;
                goto LAB_142b8f468;
              }
              break;
            }
            lVar8 = *plVar11;
            iVar13 = *(int *)(lVar8 + 0x38 + lVar14);
          } while (iVar13 != -1);
        }
      }
      lVar14 = 0;
LAB_142b8f468:
      uVar7 = 0;
      uVar9 = lVar14 + 0x30;
      if (lVar14 == 0) {
        uVar9 = uVar7;
      }
      if (uVar9 != 0) {
        uVar7 = FWeakObjectPtr::Get();
      }
    }
    if (local_a0 != 0) {
      FMemory::Free();
    }
    if (iVar12 != 0) {
      plVar11 = (longlong *)(local_e8 + 0x20);
      do {
        if (*plVar11 != 0) {
          FMemory::Free();
        }
        plVar11 = plVar11 + 6;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
    if (local_e8 != 0) {
      FMemory::Free(local_e8);
    }
    if (uVar7 == 0) {
      uVar7 = *(ulonglong *)(param_1 + 0x28);
    }
  }
  return uVar7;
}



// FUNCTION 142b8f540 GetNavigationBoundsForNavData body=662 status=ok
// SIG undefined GetNavigationBoundsForNavData(void)

int UNavigationSystemV1::GetNavigationBoundsForNavData
              (longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint *puVar15;
  bool bVar16;
  int local_98;
  uint uStack_94;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int iStack_70;
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
  
  lVar8 = param_3[1];
  if (*(int *)((longlong)param_3 + 0xc) <
      (*(int *)(param_1 + 0x138) - *(int *)(param_1 + 0x164)) + (int)lVar8) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeTo
              (param_3);
  }
  uVar9 = FUN_142b90a00(param_1,param_2);
  uStack_94 = 1;
  plVar1 = (longlong *)(param_1 + 0x130);
  local_98 = 0;
  uVar3 = *(uint *)(param_1 + 0x158);
  puVar2 = (uint *)(param_1 + 0x140);
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar3 != 0) {
    puVar15 = *(uint **)(param_1 + 0x150);
    if (*(uint **)(param_1 + 0x150) == (uint *)0x0) {
      puVar15 = puVar2;
    }
    uVar4 = *puVar15;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar4 == 0) {
      lVar12 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar10 = local_98 + 1;
      bVar16 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar10;
      if (bVar16) goto LAB_142b8f64c;
      uVar4 = puVar15[lVar12 + 1];
    }
    uStack_94 = -uVar4 & uVar4;
    iVar10 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    uStack_84 = (iStack_80 - iVar10) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_142b8f64c:
      uStack_84 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x158);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar14 = uVar4 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar2;
  local_50 = plVar1;
  puStack_40 = puVar2;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar4;
  if (uVar4 != uVar3) {
    puVar15 = *(uint **)(param_1 + 0x150);
    if (*(uint **)(param_1 + 0x150) == (uint *)0x0) {
      puVar15 = puVar2;
    }
    uVar11 = puVar15[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar10 = (int)uVar4 >> 5;
    while (uVar11 == 0) {
      uVar14 = uVar14 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
      goto LAB_142b8f721;
      uVar11 = puVar15[(longlong)iVar10 + 1];
      iVar10 = iVar10 + 1;
    }
    uVar11 = -uVar11 & uVar11;
    iVar10 = 0x1f;
    if (uVar11 != 0) {
      for (; uVar11 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar11 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    uStack_84 = (uVar14 - iVar10) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_142b8f721:
      uStack_84 = uVar3;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar2))) {
    lVar12 = (longlong)(int)uStack_5c * 0x34 + *plVar1;
    bVar16 = false;
    if (uVar9 < 0x10) {
      bVar16 = (*(uint *)(lVar12 + 0x20) >> (uVar9 & 0x1f) & 1) != 0;
    }
    if (bVar16) {
      iVar10 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar10 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar10 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::
        ResizeGrow(param_3,iVar10);
      }
      uVar5 = *(undefined4 *)(lVar12 + 8);
      uVar6 = *(undefined4 *)(lVar12 + 0xc);
      uVar7 = *(undefined4 *)(lVar12 + 0x10);
      puVar13 = (undefined4 *)((longlong)iVar10 * 0x1c + *param_3);
      *puVar13 = *(undefined4 *)(lVar12 + 4);
      puVar13[1] = uVar5;
      puVar13[2] = uVar6;
      puVar13[3] = uVar7;
      *(undefined8 *)(puVar13 + 4) = *(undefined8 *)(lVar12 + 0x14);
      puVar13[6] = *(undefined4 *)(lVar12 + 0x1c);
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  return (int)param_3[1] - (int)lVar8;
}



// FUNCTION 142b8f7e0 FUN_142b8f7e0 body=711 status=ok
// SIG undefined FUN_142b8f7e0(void)

void FUN_142b8f7e0(longlong param_1,uint *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint local_78 [14];
  longlong local_40;
  byte local_2e;
  
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    lVar2 = UAITask::GetPrivateStaticClass();
    lVar10 = *(longlong *)(param_1 + 0xa0);
    for (lVar9 = lVar10; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x30)) {
      if (lVar9 == lVar2) {
        if (lVar10 != 0) goto LAB_142b8f841;
        break;
      }
    }
  }
  lVar10 = DAT_146b2bae8;
LAB_142b8f841:
  if ((*(byte *)(param_1 + 0x28) & 2) == 0) {
    FUN_142b8cea0(param_1);
  }
  iVar1 = *(int *)(param_1 + 0x78);
  if ((int)param_2[9] < (int)((uint)(*(int *)(param_1 + 0x38) != 0) + param_2[8] + iVar1)) {
    TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(param_2 + 6);
    iVar1 = *(int *)(param_1 + 0x78);
  }
  if (0 < iVar1) {
    iVar6 = 1;
    lVar9 = 4;
    iVar7 = 0;
    do {
      if ((iVar6 < 0) || (iVar1 <= iVar6)) {
        iVar8 = *(int *)(param_1 + 0x58);
      }
      else {
        iVar8 = *(int *)(lVar9 + *(longlong *)(param_1 + 0x70));
      }
      if (iVar7 < iVar8) {
        if (lVar10 != 0) {
          lVar3 = UAITask::GetPrivateStaticClass();
          lVar2 = lVar10;
          do {
            lVar4 = lVar10;
            if (lVar2 == lVar3) goto LAB_142b8f8d7;
            lVar2 = *(longlong *)(lVar2 + 0x30);
          } while (lVar2 != 0);
        }
        lVar4 = 0;
LAB_142b8f8d7:
        FAreaNavModifier::FAreaNavModifier(local_78,param_1 + 0x50,iVar7,iVar8,0,param_3,lVar4);
        uVar5 = param_2[8];
        local_2e = local_2e | 1;
        param_2[8] = uVar5 + 1;
        if ((int)param_2[9] < (int)(uVar5 + 1)) {
          TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_2 + 6,uVar5);
        }
        FAreaNavModifier::FAreaNavModifier
                  ((longlong)(int)uVar5 * 0x50 + *(longlong *)(param_2 + 6),local_78);
        uVar5 = *param_2;
        *param_2 = ((local_78[0] | uVar5) ^ uVar5) & 1 ^ uVar5;
        param_2[0x12] =
             (uint)local_2e + (uint)local_2e & 4 |
             (uint)local_2e + (uint)local_2e & 2 | param_2[0x12];
        if (local_40 != 0) {
          FMemory::Free();
        }
      }
      iVar1 = *(int *)(param_1 + 0x78);
      iVar6 = iVar6 + 1;
      lVar9 = lVar9 + 4;
      iVar7 = iVar8;
    } while (iVar6 <= iVar1);
  }
  if (0 < *(int *)(param_1 + 0x38)) {
    if (lVar10 != 0) {
      lVar2 = UAITask::GetPrivateStaticClass();
      lVar9 = lVar10;
      do {
        if (lVar9 == lVar2) goto LAB_142b8f9e1;
        lVar9 = *(longlong *)(lVar9 + 0x30);
      } while (lVar9 != 0);
    }
    lVar10 = 0;
LAB_142b8f9e1:
    FAreaNavModifier::FAreaNavModifier
              (local_78,param_1 + 0x30,0,*(int *)(param_1 + 0x38) + -1,0,param_3,lVar10);
    uVar5 = param_2[8];
    local_2e = local_2e | 1;
    param_2[8] = uVar5 + 1;
    if ((int)param_2[9] < (int)(uVar5 + 1)) {
      TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_2 + 6,uVar5);
    }
    FAreaNavModifier::FAreaNavModifier
              ((longlong)(int)uVar5 * 0x50 + *(longlong *)(param_2 + 6),local_78);
    uVar5 = *param_2;
    *param_2 = ((local_78[0] | uVar5) ^ uVar5) & 1 ^ uVar5;
    uVar5 = param_2[0x12];
    uVar5 = (((uint)local_2e + (uint)local_2e | uVar5) ^ uVar5) & 2 ^ uVar5;
    param_2[0x12] = (((uint)local_2e + (uint)local_2e | uVar5) ^ uVar5) & 4 ^ uVar5;
    if (local_40 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142b8fab0 GetCurrent<UNavigationSystemV1> body=5 status=ok
// SIG undefined GetCurrent<UNavigationSystemV1>(void)

longlong FNavigationSystem::GetCurrent<UNavigationSystemV1>(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = GetWorldFromContextObject();
  if (lVar2 == 0) {
    return 0;
  }
  lVar2 = *(longlong *)(lVar2 + 0x138);
  if (lVar2 != 0) {
    lVar3 = FUN_142ba9430();
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
  return 0;
}



// FUNCTION 142b8fb10 GetPathCost body=28 status=ok
// SIG undefined GetPathCost(void)

undefined8 UNavigationPath::GetPathCost(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x4c) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000142b8fb1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x30))(*(longlong **)(param_1 + 0x60),0);
    return uVar1;
  }
  return 0xbf800000;
}



// FUNCTION 142b8fb30 GetPathLength body=84 status=ok
// SIG undefined GetPathLength(void)

undefined8 UNavigationPath::GetPathLength(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  if ((*(byte *)(param_1 + 0x4c) & 1) == 0) {
    return 0xbf800000;
  }
  plVar1 = *(longlong **)(param_1 + 0x60);
  if ((int)plVar1[6] != 0) {
    local_18 = *(undefined8 *)plVar1[5];
    local_10 = *(undefined4 *)((undefined8 *)plVar1[5] + 1);
    uVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,&local_18,1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 142b8fb90 GetPathPointLocation body=100 status=ok
// SIG undefined GetPathPointLocation(void)

undefined8 * FNavigationPath::GetPathPointLocation(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FBasedPosition::FBasedPosition(param_2);
  if ((-1 < param_3) && (param_3 < *(int *)(param_1 + 0x30))) {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0x38);
    *param_2 = uVar2;
    lVar1 = *(longlong *)(param_1 + 0x28);
    param_2[1] = *(undefined8 *)((longlong)param_3 * 0x20 + lVar1);
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)((longlong)param_3 * 0x20 + 8 + lVar1);
  }
  return param_2;
}



// FUNCTION 142b8fc00 FUN_142b8fc00 body=1298 status=ok
// SIG undefined FUN_142b8fc00(void)

undefined8 * FUN_142b8fc00(longlong *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong **pplVar10;
  int local_res8 [2];
  longlong *local_d8;
  longlong *plStack_d0;
  longlong *local_c8;
  longlong *plStack_c0;
  longlong local_b8;
  longlong *local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *plStack_88;
  undefined1 local_80 [8];
  longlong *local_78;
  longlong **local_70;
  longlong **local_68;
  longlong *local_58;
  longlong *plStack_50;
  longlong *local_48;
  longlong *local_40;
  
  local_d8 = (longlong *)0x0;
  local_res8[0] = 0;
  if ((((*(byte *)(param_1 + 8) & 2) != 0) && (param_4 != 0)) &&
     ((**(code **)(*param_1 + 0x280))(param_1,&local_a8,param_4), local_a8 != (longlong *)0x0)) {
    plVar5 = (longlong *)UNavigationQueryFilter::GetPrivateStaticClass();
    for (plVar7 = local_a8; plVar7 != (longlong *)0x0; plVar7 = (longlong *)plVar7[6]) {
      if (plVar7 == plVar5) {
        lVar6 = local_a8[0x1f];
        if (lVar6 == 0) {
          (**(code **)(*local_a8 + 0x368))(local_a8);
          lVar6 = local_a8[0x1f];
        }
        if ((*(byte *)(lVar6 + 0x40) & 2) == 0) {
          FUN_142b8fc00(lVar6,param_2,param_3,0);
          return param_2;
        }
        break;
      }
    }
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    plVar7 = (longlong *)param_1[2];
    plVar5 = local_d8;
    local_48 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      plVar8 = (longlong *)UNavigationQueryFilter::GetPrivateStaticClass();
      plVar9 = plVar7;
      do {
        plVar5 = plVar7;
        if (plVar9 == plVar8) break;
        plVar9 = (longlong *)plVar9[6];
        plVar5 = local_d8;
      } while (plVar9 != (longlong *)0x0);
    }
    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::FindId(param_3 + 0x560,local_res8,plVar5);
    if ((local_res8[0] == -1) ||
       (lVar6 = (longlong)local_res8[0] * 0x20 + *(longlong *)(param_3 + 0x560), lVar6 == 0)) {
      local_c8 = (longlong *)0x0;
      plStack_c0 = (longlong *)0x0;
    }
    else {
      plStack_c0 = *(longlong **)(lVar6 + 0x10);
      local_c8 = *(longlong **)(lVar6 + 8);
      if (plStack_c0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_c0 + 1) = (int)plStack_c0[1] + 1;
        UNLOCK();
      }
    }
    pplVar10 = &local_c8;
    bVar3 = false;
    bVar2 = true;
    local_d8 = local_c8;
  }
  else {
    pplVar10 = &local_90;
    local_90 = (longlong *)0x0;
    plStack_88 = (longlong *)0x0;
    bVar3 = true;
    bVar2 = false;
  }
  plStack_d0 = pplVar10[1];
  pplVar10[1] = (longlong *)0x0;
  *pplVar10 = (longlong *)0x0;
  plVar7 = plStack_c0;
  if ((bVar2) && (plStack_c0 != (longlong *)0x0)) {
    LOCK();
    plVar5 = plStack_c0 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_c0)(plStack_c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_c0 + 8))(plStack_c0,1);
      }
    }
  }
  plVar7 = plStack_88;
  if ((bVar3) && (plStack_88 != (longlong *)0x0)) {
    LOCK();
    plVar5 = plStack_88 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_88)(plStack_88);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_88 + 8))(plStack_88,1);
      }
    }
  }
  if (local_d8 != (longlong *)0x0) goto LAB_142b900de;
  local_d8 = (longlong *)operator_new(0x28);
  if (local_d8 == (longlong *)0x0) {
    local_d8 = (longlong *)0x0;
  }
  else {
    *local_d8 = 0;
    local_d8[1] = 0;
    local_d8[2] = 0;
    local_d8[3] = 0;
    *(undefined4 *)(local_d8 + 4) = 0x800;
  }
  lVar6 = (**(code **)(**(longlong **)(*(longlong *)(param_3 + 0x550) + 0x10) + 0x78))();
  plVar7 = (longlong *)operator_new(0x18);
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar7 + 1) = 1;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    *plVar7 = (longlong)&PTR_FUN_143f3f2e0;
    plVar7[2] = lVar6;
  }
  local_b8 = lVar6;
  local_b0 = plVar7;
  SharedPointerInternals::EnableSharedFromThis(&local_b8,lVar6,lVar6);
  if (local_d8 + 2 != &local_b8) {
    local_d8[2] = lVar6;
    local_b8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_d8 + 3,&local_b0);
    plVar7 = local_b0;
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar7 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  (**(code **)(*param_1 + 0x278))(param_1,param_3,param_4,local_d8);
  plVar5 = (longlong *)operator_new(0x18);
  plVar9 = (longlong *)0x0;
  plVar7 = plVar9;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_1450167a8;
    plVar5[2] = (longlong)local_d8;
    plVar7 = plVar5;
  }
  local_98 = plVar7;
  if (local_d8 != (longlong *)0x0) {
    if ((*local_d8 != 0) && (local_d8[1] != 0)) {
      piVar1 = (int *)(local_d8[1] + 8);
      LOCK();
      iVar4 = *piVar1;
      if (iVar4 == 0) {
        *piVar1 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) goto LAB_142b8ffd8;
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    *local_d8 = (longlong)local_d8;
    plVar5 = (longlong *)local_d8[1];
    if (plVar7 != plVar5) {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        plVar5 = (longlong *)local_d8[1];
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
      local_d8[1] = (longlong)plVar7;
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar7 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
  }
LAB_142b8ffd8:
  local_a0 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_d0,&local_98);
  plVar7 = local_98;
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_98 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_98)(local_98);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_98 + 8))(local_98,1);
      }
    }
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    plStack_50 = plStack_d0;
    if (plStack_d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_d0 + 1) = (int)plStack_d0[1] + 1;
      UNLOCK();
    }
    plVar7 = (longlong *)param_1[2];
    local_78 = plVar9;
    local_58 = local_d8;
    local_40 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      plVar8 = (longlong *)UNavigationQueryFilter::GetPrivateStaticClass();
      plVar5 = plVar7;
      do {
        local_78 = plVar7;
        if (plVar5 == plVar8) break;
        plVar5 = (longlong *)plVar5[6];
        local_78 = plVar9;
      } while (plVar5 != (longlong *)0x0);
    }
    local_70 = &local_78;
    local_68 = &local_58;
    FUN_14068d230(param_3 + 0x560,local_80,&local_70,0);
    plVar7 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar5 = plStack_50 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
  }
LAB_142b900de:
  *param_2 = local_d8;
  param_2[1] = plStack_d0;
  return param_2;
}



// FUNCTION 142b90120 FUN_142b90120 body=142 status=ok
// SIG undefined FUN_142b90120(void)

undefined8 *
FUN_142b90120(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_4 != (longlong *)0x0) {
    plVar1 = (longlong *)UNavigationQueryFilter::GetPrivateStaticClass();
    plVar3 = param_4;
    do {
      if (plVar3 == plVar1) {
        lVar2 = param_4[0x1f];
        if (lVar2 == 0) {
          (**(code **)(*param_4 + 0x368))(param_4);
          lVar2 = param_4[0x1f];
        }
        FUN_142b8fc00(lVar2,param_1,param_2,param_3);
        return param_1;
      }
      plVar3 = (longlong *)plVar3[6];
    } while (plVar3 != (longlong *)0x0);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 142b901b0 GetRandomPoint body=135 status=ok
// SIG undefined GetRandomPoint(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
AAbstractNavData::GetRandomPoint(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  uVar6 = DAT_1468b5d98;
  plVar4 = *(longlong **)(param_3 + 8);
  *param_2 = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 1) = uVar6;
  param_2[2] = 0;
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
    return param_2;
  }
  return param_2;
}



// FUNCTION 142b90240 GetRandomPointInNavigableRadius body=92 status=ok
// SIG undefined GetRandomPointInNavigableRadius(void)

ulonglong AAbstractNavData::GetRandomPointInNavigableRadius(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong in_stack_00000028;
  
  plVar4 = *(longlong **)(in_stack_00000028 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    uVar6 = (int)lVar5 - 1;
    uVar7 = (ulonglong)uVar6;
    if (uVar6 == 0) {
      uVar7 = (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        uVar7 = (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
    return uVar7 & 0xffffffffffffff00;
  }
  return in_stack_00000028 & 0xffffffffffffff00;
}



// FUNCTION 142b902a0 FUN_142b902a0 body=163 status=ok
// SIG undefined FUN_142b902a0(void)

ulonglong FUN_142b902a0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong in_stack_00000028;
  
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\navigationsystem\\public\\NavigationData.h",
             0x329,L"Pure virtual not implemented (%s)",
             L"ANavigationData::GetRandomPointInNavigableRadius");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\navigationsystem\\public\\NavigationData.h",
             0x329,L"Pure virtual not implemented (%s)",
             L"ANavigationData::GetRandomPointInNavigableRadius");
  plVar4 = *(longlong **)(in_stack_00000028 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    uVar6 = (int)lVar5 - 1;
    uVar7 = (ulonglong)uVar6;
    if (uVar6 == 0) {
      uVar7 = (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        uVar7 = (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
    return uVar7 & 0xffffffffffffff00;
  }
  return in_stack_00000028 & 0xffffffffffffff00;
}



// FUNCTION 142b90350 FUN_142b90350 body=199 status=ok
// SIG undefined FUN_142b90350(void)

undefined8 FUN_142b90350(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *in_stack_00000028;
  longlong in_stack_00000030;
  
  if ((in_stack_00000028 != (longlong *)0x0) ||
     (in_stack_00000028 = *(longlong **)(param_1 + 0x28), in_stack_00000028 != (longlong *)0x0)) {
    if (*(longlong *)(in_stack_00000030 + 8) != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)(in_stack_00000030 + 8) + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    cVar6 = (**(code **)(*in_stack_00000028 + 2000))();
    if (cVar6 != '\0') {
      uVar7 = 1;
      goto LAB_142b903b7;
    }
  }
  uVar7 = 0;
LAB_142b903b7:
  plVar4 = *(longlong **)(in_stack_00000030 + 8);
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
    return uVar7;
  }
  return uVar7;
}



// FUNCTION 142b90420 FUN_142b90420 body=323 status=ok
// SIG undefined FUN_142b90420(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_142b90420(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             longlong param_5,undefined8 param_6)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  
  local_38 = _DAT_1468b5d90;
  local_30 = DAT_1468b5d98;
  local_28 = 0;
  lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_2,1);
  if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x138), lVar2 != 0)) {
    lVar3 = FUN_142ba9430();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && ((param_5 != 0 || (param_5 = FUN_142b8e790(lVar2,0), param_5 != 0)))) {
      uVar4 = FUN_142b90120(local_48,param_5,param_2,param_6);
      FUN_142b90350(lVar2,param_3,param_4,&local_38,param_5,uVar4);
    }
  }
  *param_1 = local_38;
  *(undefined4 *)(param_1 + 1) = local_30;
  return param_1;
}



// FUNCTION 142b90570 FUN_142b90570 body=199 status=ok
// SIG undefined FUN_142b90570(void)

undefined8 FUN_142b90570(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *in_stack_00000028;
  longlong in_stack_00000030;
  
  if ((in_stack_00000028 != (longlong *)0x0) ||
     (in_stack_00000028 = *(longlong **)(param_1 + 0x28), in_stack_00000028 != (longlong *)0x0)) {
    if (*(longlong *)(in_stack_00000030 + 8) != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)(in_stack_00000030 + 8) + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    cVar6 = (**(code **)(*in_stack_00000028 + 0x7c0))();
    if (cVar6 != '\0') {
      uVar7 = 1;
      goto LAB_142b905d7;
    }
  }
  uVar7 = 0;
LAB_142b905d7:
  plVar4 = *(longlong **)(in_stack_00000030 + 8);
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
    return uVar7;
  }
  return uVar7;
}



// FUNCTION 142b90640 FUN_142b90640 body=323 status=ok
// SIG undefined FUN_142b90640(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_142b90640(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             longlong param_5,undefined8 param_6)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  
  local_38 = _DAT_1468b5d90;
  local_30 = DAT_1468b5d98;
  local_28 = 0;
  lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_2,1);
  if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x138), lVar2 != 0)) {
    lVar3 = FUN_142ba9430();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && ((param_5 != 0 || (param_5 = FUN_142b8e790(lVar2,0), param_5 != 0)))) {
      uVar4 = FUN_142b90120(local_48,param_5,param_2,param_6);
      FUN_142b90570(lVar2,param_3,param_4,&local_38,param_5,uVar4);
    }
  }
  *param_1 = local_38;
  *(undefined4 *)(param_1 + 1) = local_30;
  return param_1;
}



// FUNCTION 142b90790 GetResourceSizeEx body=115 status=ok
// SIG undefined GetResourceSizeEx(void)

void UNavCollision::GetResourceSizeEx(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  
  FUN_141758340();
  cVar1 = FFormatContainer::Contains(param_1 + 0xc0,DAT_146b2ba80);
  if (cVar1 != '\0') {
    plVar4 = (longlong *)FFormatContainer::GetFormat(param_1 + 0xc0,DAT_146b2ba80);
    iVar2 = (**(code **)(*plVar4 + 8))(plVar4);
    iVar3 = IStreamingManager::GetNumWantingResourcesID(plVar4);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (longlong)(iVar3 * iVar2);
  }
  return;
}



// FUNCTION 142b90810 GetSegmentDirection body=492 status=ok
// SIG undefined GetSegmentDirection(void)

undefined8 * FNavigationPath::GetSegmentDirection(longlong param_1,undefined8 *param_2,uint param_3)

{
  uint uVar1;
  float *pfVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float local_48;
  float fStack_44;
  float local_40;
  
  uVar3 = DAT_146687980;
  *param_2 = DAT_146687978;
  *(undefined4 *)(param_2 + 1) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x30);
  if ((int)uVar1 < 2) {
    return param_2;
  }
  if (((int)param_3 < 0) || ((int)uVar1 <= (int)param_3)) {
    if (param_3 < uVar1) {
      return param_2;
    }
    lVar4 = *(longlong *)(param_1 + 0x28);
    lVar5 = ((longlong)(int)uVar1 + -2) * 0x20;
    lVar6 = (longlong)(int)uVar1 * 0x20;
    local_48 = *(float *)(lVar6 + -0x20 + lVar4) - *(float *)(lVar5 + lVar4);
    fStack_44 = *(float *)(lVar6 + -0x1c + lVar4) - *(float *)(lVar5 + 4 + lVar4);
    local_40 = *(float *)(lVar6 + -0x18 + lVar4) - *(float *)(lVar5 + 8 + lVar4);
  }
  else {
    pfVar2 = *(float **)(param_1 + 0x28);
    if (param_3 == 0) {
      local_48 = pfVar2[8] - *pfVar2;
      fStack_44 = pfVar2[9] - pfVar2[1];
      local_40 = pfVar2[10] - pfVar2[2];
    }
    else {
      lVar4 = (longlong)(int)param_3;
      local_48 = pfVar2[lVar4 * 8] - pfVar2[lVar4 * 8 + -8];
      fStack_44 = pfVar2[lVar4 * 8 + 1] - pfVar2[lVar4 * 8 + -7];
      local_40 = pfVar2[lVar4 * 8 + 2] - pfVar2[lVar4 * 8 + -6];
    }
  }
  fVar7 = fStack_44 * fStack_44 + local_48 * local_48 + local_40 * local_40;
  if (fVar7 != 1.0) {
    if (1e-08 <= fVar7) {
      auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar8 = auVar9._0_4_;
      fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
      fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
      local_48 = local_48 * fVar8;
      fStack_44 = fStack_44 * fVar8;
      local_40 = local_40 * fVar8;
    }
    else {
      local_48 = DAT_1468b5d90;
      local_40 = DAT_1468b5d98;
      fStack_44 = DAT_1468b5d94;
    }
  }
  *param_2 = CONCAT44(fStack_44,local_48);
  *(float *)(param_2 + 1) = local_40;
  return param_2;
}



// FUNCTION 142b90a00 FUN_142b90a00 body=242 status=ok
// SIG undefined FUN_142b90a00(void)

int FUN_142b90a00(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x58) < 2) {
    return 0;
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x58)) {
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x50) + lVar4;
      if ((((ABS(*(float *)(lVar2 + 4) - *(float *)(param_2 + 0x46c)) < 5.0) &&
           (ABS(*(float *)(lVar2 + 8) - *(float *)(param_2 + 0x470)) < 5.0)) &&
          ((*(float *)(lVar2 + 0xc) < 0.0 ||
           ((*(float *)(param_2 + 0x474) < 0.0 ||
            (ABS(*(float *)(lVar2 + 0xc) - *(float *)(param_2 + 0x474)) < 5.0)))))) &&
         (cVar1 = FNavAgentProperties::IsNavDataMatching(lVar2,param_2 + 0x468), cVar1 != '\0')) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 0x68;
    } while (iVar3 < *(int *)(param_1 + 0x58));
  }
  return -1;
}



// FUNCTION 142b90b00 RegisterExtension body=16 status=ok
// SIG undefined RegisterExtension(void)

void UMovieSceneEntitySystemLinker::RegisterExtension(void)

{
  DAT_146687970 = DAT_146687970 + 1;
  return;
}



// FUNCTION 142b90b10 FUN_142b90b10 body=39 status=ok
// SIG undefined FUN_142b90b10(void)

undefined4 FUN_142b90b10(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    return *(undefined4 *)(lVar1 + 0x790);
  }
  return 0;
}



// FUNCTION 142b90b40 FUN_142b90b40 body=180 status=ok
// SIG undefined FUN_142b90b40(void)

void FUN_142b90b40(void)

{
  longlong *plVar1;
  LPVOID pvVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  plVar1 = DAT_146b2ba28;
  if (DAT_146b2ba28 == (longlong *)0x0) {
    plVar1 = (longlong *)operator_new(8);
    if (plVar1 == (longlong *)0x0) {
      plVar1 = (longlong *)0x0;
    }
    else {
      pvVar2 = TlsGetValue(DAT_146b7bf70);
      if (pvVar2 == (LPVOID)0x0) {
        pvVar2 = DAT_146b7bf68;
      }
      lVar3 = (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 8))
                        (*(longlong **)((longlong)pvVar2 + 0x58),0x90);
      lVar4 = 0;
      if (lVar3 != 0) {
        lVar4 = FUN_1438da560(lVar3);
      }
      *plVar1 = lVar4;
      FUN_1438daa80();
      uVar5 = FUN_1424c8610();
      lVar4 = FUN_14203b180(uVar5);
      if (lVar4 != 0) {
        lVar3 = *plVar1 + 0x18;
        if (*plVar1 == 0) {
          lVar3 = 0;
        }
        FUN_143787980(lVar4,lVar3);
      }
    }
  }
  DAT_146b2ba28 = plVar1;
  return;
}



// FUNCTION 142b90c00 FUN_142b90c00 body=356 status=ok
// SIG undefined FUN_142b90c00(void)

void FUN_142b90c00(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar8;
  uint *puVar9;
  float fVar10;
  int local_res8 [2];
  uint *puVar7;
  
  puVar9 = (uint *)0x0;
  if (0 < *(int *)(param_1 + 0x30)) {
    puVar7 = puVar9;
    puVar8 = puVar9;
    do {
      lVar1 = *(longlong *)(param_1 + 0x28);
      puVar5 = puVar9;
      if (*(longlong *)((longlong)puVar8 + lVar1) != 0) {
        puVar3 = (uint *)UAITask::GetPrivateStaticClass();
        for (puVar4 = *(uint **)((longlong)puVar8 + lVar1);
            (puVar5 = puVar9, puVar4 != (uint *)0x0 &&
            (puVar5 = *(uint **)((longlong)puVar8 + lVar1), puVar4 != puVar3));
            puVar4 = *(uint **)(puVar4 + 0xc)) {
        }
      }
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId((longlong *)(param_2 + 0x5c0),local_res8,puVar5);
      puVar5 = puVar9;
      if (local_res8[0] != -1) {
        puVar5 = (uint *)(*(longlong *)(param_2 + 0x5c0) + (longlong)local_res8[0] * 0x18);
      }
      puVar4 = puVar5 + 2;
      if (puVar5 == (uint *)0x0) {
        puVar4 = puVar9;
      }
      if ((puVar4 != (uint *)0x0) && (uVar6 = *puVar4, uVar6 != 0xffffffff)) {
        uVar2 = *(uint *)((longlong)puVar8 + lVar1 + 0x10);
        if ((uVar2 & 1) == 0) {
          if ((uVar2 & 2) != 0) {
            fVar10 = *(float *)((longlong)puVar8 + lVar1 + 8);
            if (fVar10 <= 1.0) {
              fVar10 = 1.0;
            }
            FSafeRecyclableEvent::Trigger(param_4,uVar6 & 0xff,fVar10);
            uVar2 = *(uint *)((longlong)puVar8 + lVar1 + 0x10);
          }
          if ((uVar2 & 4) != 0) {
            fVar10 = *(float *)((longlong)puVar8 + lVar1 + 0xc);
            if (fVar10 <= 0.0) {
              fVar10 = 0.0;
            }
            FSafeRecyclableEvent::Reset(param_4,uVar6 & 0xff,fVar10);
          }
        }
        else {
          FSafeRecyclableEvent::Wait(param_4,uVar6 & 0xff);
        }
      }
      uVar6 = (int)puVar7 + 1;
      puVar7 = (uint *)(ulonglong)uVar6;
      puVar8 = puVar8 + 6;
    } while ((int)uVar6 < *(int *)(param_1 + 0x30));
  }
  FNavigationQueryFilter::SetIncludeFlags(param_4,*(undefined2 *)(param_1 + 0x38));
  FUN_1422529d0(param_4,*(undefined2 *)(param_1 + 0x3c));
  return;
}



// FUNCTION 142b90d80 FUN_142b90d80 body=101 status=ok
// SIG undefined FUN_142b90d80(void)

void FUN_142b90d80(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x24)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x18,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if ((*(int *)(param_1 + 0x34) < 0) && (*(int *)(param_1 + 0x34) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x28,0);
  }
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) & 0xfffffff1 | 1;
  return;
}



// FUNCTION 142b90df0 FUN_142b90df0 body=214 status=ok
// SIG undefined FUN_142b90df0(void)

undefined8 FUN_142b90df0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  if (((param_2 == 0) || (cVar3 = FUN_1428dd870(param_2), cVar3 == '\0')) ||
     (cVar3 = (**(code **)(*param_1 + 0x2c8))(param_1), cVar3 == '\0')) {
    return 1;
  }
  iVar6 = 0;
  if (0 < (int)param_1[0xe]) {
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(lVar5 + param_1[0xd]);
      if (((lVar1 != 0) && (lVar4 = AActor::GetWorldSettings(lVar1), lVar4 == param_2)) &&
         ((*(char *)(lVar1 + 0x4d4) != '\0' &&
          ((plVar2 = *(longlong **)(lVar1 + 0x508), plVar2 == (longlong *)0x0 ||
           (cVar3 = (**(code **)(*plVar2 + 0x38))(plVar2,1), cVar3 == '\x01')))))) {
        return 0;
      }
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar6 < (int)param_1[0xe]);
  }
  return 1;
}



// FUNCTION 142b90ed0 IsPartial body=30 status=ok
// SIG undefined IsPartial(void)

ulonglong UNavigationPath::IsPartial(longlong param_1)

{
  ulonglong in_RAX;
  
  if (((*(byte *)(param_1 + 0x4c) & 1) != 0) &&
     (in_RAX = *(ulonglong *)(param_1 + 0x60), (*(uint *)(in_RAX + 0x98) >> 2 & 1) != 0)) {
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142b90ef0 FUN_142b90ef0 body=892 status=ok
// SIG undefined FUN_142b90ef0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142b90ef0(longlong *param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  undefined8 uVar18;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined8 local_a0;
  uint local_98 [2];
  longlong local_90;
  longlong local_88;
  int local_80;
  int local_78;
  char local_74;
  int local_70;
  longlong local_68;
  longlong local_60;
  int local_58;
  undefined8 local_48;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  if ((*(byte *)(param_1 + 8) & 0x80) != 0) {
    return CONCAT71((int7)(local_38 >> 8),1);
  }
  uVar18 = 0;
  lVar8 = APlayerStateGunfire::GetPrivateStaticClass();
  local_a0 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar8 != 0) {
    lVar9 = APlayerStateGunfire::GetPrivateStaticClass();
    lVar16 = lVar8;
    do {
      if (lVar16 == lVar9) goto LAB_142b90f67;
      lVar16 = *(longlong *)(lVar16 + 0x30);
    } while (lVar16 != 0);
  }
  lVar8 = 0;
LAB_142b90f67:
  local_98[0] = 5;
  local_40 = '\0';
  local_a8 = lVar8;
  FUN_14044bc80(&local_90,&local_a0,&local_a8);
  FUN_14045a130(local_98);
  if (local_74 == '\0') {
LAB_142b90fc6:
    lVar8 = local_90;
    if (local_68 != 0) {
      iVar17 = *(int *)(local_68 + 0xc);
      if (iVar17 < (int)DAT_1469e91c4) {
        uVar13 = iVar17 >> 0x1f & 0xffff;
        uVar7 = iVar17 + uVar13;
        lVar16 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                 (longlong)(int)((uVar7 & 0xffff) - uVar13) * 0x18;
      }
      else {
        lVar16 = 0;
      }
      if ((*(uint *)(lVar16 + 8) >> 0x1d & 1) == 0) {
        uVar18 = 1;
        goto LAB_142b911f0;
      }
    }
    iVar17 = local_78 + 1;
    if (iVar17 < local_58 + local_80) {
      lVar16 = (longlong)iVar17 * 8;
      iVar15 = local_58;
      iVar14 = local_80;
      do {
        if (iVar17 < iVar14) {
          lVar9 = *(longlong *)(local_88 + lVar16);
        }
        else {
          lVar9 = *(longlong *)(local_60 + (longlong)(iVar17 - iVar14) * 8);
        }
        local_70 = local_70 + 1;
        if ((lVar9 != 0) &&
           (lVar10 = AActor::GetLevel(lVar9), iVar15 = local_58, iVar14 = local_80, lVar10 != 0)) {
          if ((local_98[0] & 1) != 0) {
            iVar1 = *(int *)(lVar9 + 0xc);
            if (iVar1 < (int)DAT_1469e91c4) {
              uVar13 = iVar1 >> 0x1f & 0xffff;
              uVar7 = iVar1 + uVar13;
              lVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                       (longlong)(int)((uVar7 & 0xffff) - uVar13) * 0x18;
            }
            else {
              lVar11 = 0;
            }
            if ((*(uint *)(lVar11 + 8) >> 0x1d & 1) != 0) goto LAB_142b911ad;
          }
          if (((local_98[0] >> 1 & 1) == 0) ||
             (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(lVar9), iVar15 = local_58,
             iVar14 = local_80, cVar6 != '\0')) {
            if ((local_98[0] >> 2 & 1) != 0) {
              if (((*(byte *)(lVar10 + 0x204) & 0x10) == 0) &&
                 ((*(byte *)(lVar10 + 0x205) & 0x10) == 0)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              piVar2 = *(int **)(lVar10 + 600);
              if (((*(longlong *)(lVar10 + 0xc0) == 0) ||
                  (piVar12 = (int *)UWorld::GetActiveLevelCollection(), piVar12 == (int *)0x0)) ||
                 (piVar2 == piVar12)) {
                bVar3 = true;
              }
              else {
                bVar3 = false;
              }
              if ((piVar2 == (int *)0x0) || (*piVar2 == 2)) {
                bVar4 = true;
              }
              else {
                bVar4 = false;
              }
              if ((bVar3) || (bVar3 = false, bVar4)) {
                bVar3 = true;
              }
              iVar15 = local_58;
              iVar14 = local_80;
              if ((!bVar5) || (!bVar3)) goto LAB_142b911ad;
            }
            lVar10 = ULevel::GetWorld(lVar10);
            iVar15 = local_58;
            iVar14 = local_80;
            if (lVar10 == lVar8) {
              lVar10 = AActor::GetLevel(lVar9);
              if (lVar10 == *(longlong *)(lVar8 + 0x30)) goto LAB_142b9124d;
              lVar10 = UVoipListenerSynthComponent::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              iVar15 = local_58;
              iVar14 = local_80;
              if (!bVar5) goto LAB_142b9124d;
            }
          }
        }
LAB_142b911ad:
        iVar17 = iVar17 + 1;
        lVar16 = lVar16 + 8;
        if (iVar15 + iVar14 <= iVar17) break;
      } while( true );
    }
    local_68 = 0;
    local_74 = '\x01';
    goto LAB_142b911cd;
  }
LAB_142b911f0:
  if (local_40 != '\0') {
    local_40 = 0;
    UWorld::RemoveOnActorSpawnedHandler(local_90,local_48);
    if (local_60 != 0) {
      FMemory::Free();
    }
    if (local_88 != 0) {
      FMemory::Free();
    }
  }
  return uVar18;
LAB_142b9124d:
  local_78 = iVar17;
  local_68 = lVar9;
  if (local_74 != '\0') goto LAB_142b911cd;
  goto LAB_142b90fc6;
LAB_142b911cd:
  uVar18 = 0;
  goto LAB_142b911f0;
}



// FUNCTION 142b91270 IsValid body=7 status=ok
// SIG undefined IsValid(void)

byte UNavigationPath::IsValid(longlong param_1)

{
  return *(byte *)(param_1 + 0x4c) & 1;
}



// FUNCTION 142b91280 FUN_142b91280 body=332 status=ok
// SIG undefined FUN_142b91280(void)

ulonglong FUN_142b91280(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined4 param_4,longlong param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  
  local_38 = *param_2;
  local_30 = *(undefined4 *)(param_2 + 1);
  local_28 = 0;
  uVar4 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  uVar7 = 0;
  if (uVar4 != 0) {
    lVar2 = *(longlong *)(uVar4 + 0x138);
    if (lVar2 != 0) {
      lVar5 = FUN_142ba9430();
      iVar1 = *(int *)(lVar5 + 0x90);
      uVar4 = (longlong)iVar1;
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < iVar1) ||
         (uVar4 = *(ulonglong *)(*(longlong *)(lVar2 + 0x10) + 0x88),
         *(longlong *)(uVar4 + (longlong)iVar1 * 8) != lVar5 + 0x88)) {
        uVar4 = uVar4 & 0xffffffffffffff00;
      }
      else {
        uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
      }
      if ((char)uVar4 != '\0') {
        if ((param_5 == 0) && (param_5 = FUN_142b8e790(lVar2,0), param_5 == 0)) {
          return 0;
        }
        uVar6 = FUN_142b90120(local_48,param_5,param_1,param_6);
        bVar3 = FUN_142b90350(lVar2,param_2,param_4,&local_38,param_5,uVar6);
        *param_3 = local_38;
        *(undefined4 *)(param_3 + 1) = local_30;
        return (ulonglong)bVar3;
      }
    }
    uVar7 = uVar4 & 0xffffffffffffff00;
  }
  return uVar7;
}



// FUNCTION 142b913d0 FUN_142b913d0 body=332 status=ok
// SIG undefined FUN_142b913d0(void)

ulonglong FUN_142b913d0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined4 param_4,longlong param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  
  local_38 = *param_2;
  local_30 = *(undefined4 *)(param_2 + 1);
  local_28 = 0;
  uVar4 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  uVar7 = 0;
  if (uVar4 != 0) {
    lVar2 = *(longlong *)(uVar4 + 0x138);
    if (lVar2 != 0) {
      lVar5 = FUN_142ba9430();
      iVar1 = *(int *)(lVar5 + 0x90);
      uVar4 = (longlong)iVar1;
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < iVar1) ||
         (uVar4 = *(ulonglong *)(*(longlong *)(lVar2 + 0x10) + 0x88),
         *(longlong *)(uVar4 + (longlong)iVar1 * 8) != lVar5 + 0x88)) {
        uVar4 = uVar4 & 0xffffffffffffff00;
      }
      else {
        uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
      }
      if ((char)uVar4 != '\0') {
        if ((param_5 == 0) && (param_5 = FUN_142b8e790(lVar2,0), param_5 == 0)) {
          return 0;
        }
        uVar6 = FUN_142b90120(local_48,param_5,param_1,param_6);
        bVar3 = FUN_142b90570(lVar2,param_2,param_4,&local_38,param_5,uVar6);
        *param_3 = local_38;
        *(undefined4 *)(param_3 + 1) = local_30;
        return (ulonglong)bVar3;
      }
    }
    uVar7 = uVar4 & 0xffffffffffffff00;
  }
  return uVar7;
}



// FUNCTION 142b91520 K2_ProjectPointToNavigation body=320 status=ok
// SIG undefined K2_ProjectPointToNavigation(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong UNavigationSystemV1::K2_ProjectPointToNavigation
                    (undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
                    undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  
  lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x138), lVar2 != 0)) {
    lVar3 = FUN_142ba9430();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142b915a4;
  }
  lVar2 = 0;
LAB_142b915a4:
  *param_3 = *param_2;
  uVar5 = (ulonglong)*(uint *)(param_2 + 1);
  *(uint *)(param_3 + 1) = *(uint *)(param_2 + 1);
  if (lVar2 != 0) {
    local_28 = _DAT_1468b5d90;
    local_20 = DAT_1468b5d98;
    local_18 = 0;
    lVar3 = param_4;
    if (param_4 == 0) {
      lVar3 = FUN_142b8e790(lVar2,0);
    }
    uVar5 = 0;
    if (lVar3 != 0) {
      uVar4 = FUN_142b90120(local_38,lVar3,param_1,param_5);
      uVar5 = FUN_142b94770(lVar2,param_2,&local_28,param_6,param_4,uVar4);
      *param_3 = local_28;
      *(undefined4 *)(param_3 + 1) = local_20;
      return uVar5;
    }
  }
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 142b91660 FUN_142b91660 body=130 status=ok
// SIG undefined FUN_142b91660(void)

int FUN_142b91660(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = *(int *)(param_1 + 0x524);
  iVar2 = *(int *)(param_1 + 0x5bc);
  iVar3 = *(int *)(param_1 + 0x56c);
  iVar7 = *(int *)(param_1 + 0x5ec) + 0x1f;
  iVar8 = *(int *)(param_1 + 0x58c) + 0x1f;
  iVar4 = *(int *)(param_1 + 0x5cc);
  iVar5 = *(int *)(param_1 + 0x608);
  iVar6 = *(int *)(param_1 + 0x5a8);
  if (*(longlong **)(param_1 + 0x508) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x508) + 0x50))();
  }
  return (((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) + (iVar1 + (iVar2 + iVar3) * 2) * 4 +
          ((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) + iVar4 * 6 + iVar5 + iVar6) * 4;
}



// FUNCTION 142b916f0 FUN_142b916f0 body=174 status=ok
// SIG undefined FUN_142b916f0(void)

void FUN_142b916f0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (((DAT_146b2ba24 == '\0') && (lVar3 = (**(code **)(*param_1 + 0x148))(), param_3 == lVar3)) &&
     (cVar2 = ULevel::IsPersistentLevel(param_2), cVar2 == '\0')) {
    plVar4 = (longlong *)param_1[0xd];
    uVar6 = 0;
    uVar5 = (longlong)(int)param_1[0xe] & 0x1fffffffffffffff;
    if (plVar4 + (int)param_1[0xe] < plVar4) {
      uVar5 = uVar6;
    }
    if (uVar5 != 0) {
      do {
        plVar1 = (longlong *)*plVar4;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x720))(plVar1,param_2,param_3);
        }
        plVar4 = plVar4 + 1;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar5);
    }
  }
  return;
}



// FUNCTION 142b917a0 FUN_142b917a0 body=285 status=ok
// SIG undefined FUN_142b917a0(void)

void FUN_142b917a0(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  if ((((DAT_146b2ba24 == '\0') && (lVar4 = (**(code **)(*param_1 + 0x148))(), param_3 == lVar4)) &&
      (param_2 != 0)) && (cVar2 = ULevel::IsPersistentLevel(param_2), cVar2 == '\0')) {
    iVar7 = (int)param_1[0xe] + -1;
    if (-1 < iVar7) {
      lVar4 = (longlong)iVar7 * 8;
      lVar9 = (longlong)(int)param_1[0xe] << 3;
      lVar8 = lVar4;
      do {
        plVar1 = *(longlong **)(lVar8 + param_1[0xd]);
        if (plVar1 != (longlong *)0x0) {
          lVar5 = AActor::GetLevel(plVar1);
          if (lVar5 == param_2) {
            iVar3 = (int)param_1[0xe];
            iVar6 = (iVar3 - iVar7) + -1;
            if (iVar6 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(lVar4 + param_1[0xd]),(void *)(lVar9 + param_1[0xd]),
                         (longlong)iVar6 << 3);
              iVar3 = (int)param_1[0xe];
            }
            *(int *)(param_1 + 0xe) = iVar3 + -1;
          }
          else {
            (**(code **)(*plVar1 + 0x728))(plVar1,param_2,param_3);
          }
        }
        lVar9 = lVar9 + -8;
        lVar4 = lVar4 + -8;
        lVar8 = lVar8 + -8;
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
    }
  }
  return;
}



// FUNCTION 142b918c0 FUN_142b918c0 body=684 status=ok
// SIG undefined FUN_142b918c0(void)

void FUN_142b918c0(longlong *param_1,longlong *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  bool bVar10;
  longlong *local_res10 [2];
  longlong local_res20;
  undefined2 *local_68;
  int local_60;
  longlong **local_58;
  undefined4 *local_50;
  wchar_t *local_48;
  int local_40;
  int local_3c;
  undefined4 local_38 [2];
  longlong *local_30;
  ulonglong uVar6;
  
  plVar8 = (longlong *)param_2[0x1f];
  local_res10[0] = param_2;
  if (plVar8 == (longlong *)0x0) {
    (**(code **)(*param_2 + 0x368))(param_2);
    plVar8 = (longlong *)param_2[0x1f];
    if (plVar8 != (longlong *)0x0) goto LAB_142b91903;
  }
  else {
LAB_142b91903:
    cVar1 = (**(code **)(*plVar8 + 0x280))(plVar8);
    if (cVar1 != '\0') {
      bVar10 = true;
      goto LAB_142b9191d;
    }
  }
  bVar10 = false;
LAB_142b9191d:
  if ((plVar8 != (longlong *)0x0) && (!bVar10)) {
    uVar6 = 0;
    bVar10 = false;
    if (param_3 < 0x10) {
      bVar10 = (*(uint *)((longlong)plVar8 + 0x3c) >> (param_3 & 0x1f) & 1) != 0;
    }
    if (bVar10) {
      local_res20 = local_res10[0][3];
      FName::ToString(&local_res20,&local_68);
      uVar9 = uVar6;
      if (0 < (int)param_1[0xb7]) {
        do {
          puVar4 = &DAT_143f3eda8;
          if (local_60 != 0) {
            puVar4 = local_68;
          }
          if (*(int *)(uVar9 + 8 + param_1[0xb6]) == 0) {
            puVar3 = &DAT_143f3eda8;
          }
          else {
            puVar3 = *(undefined2 **)(uVar9 + param_1[0xb6]);
          }
          iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar4);
          if (iVar2 == 0) {
            lVar7 = (longlong)(int)uVar6 * 0x20;
            *(longlong **)(lVar7 + 0x18 + param_1[0xb6]) = local_res10[0];
            local_58 = local_res10;
            local_50 = (undefined4 *)(param_1[0xb6] + 0x10 + lVar7);
            FUN_1409bf4b0(param_1 + 0xb8,&local_res20,&local_58,0);
            goto LAB_142b91b4b;
          }
          uVar5 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar5;
          uVar9 = uVar9 + 0x20;
        } while ((int)uVar5 < (int)param_1[0xb7]);
      }
      iVar2 = (**(code **)(*param_1 + 0x838))(param_1);
      if ((int)param_1[0xb7] < iVar2) {
        local_48 = (wchar_t *)0x0;
        local_3c = 0;
        local_38[0] = 0xffffffff;
        local_30 = (longlong *)0x0;
        local_40 = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48,8);
        local_40 = local_40 + 8;
        if (local_3c < local_40) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48);
        }
        puVar4 = local_68;
        builtin_wcsncpy(local_48,L"Invalid",8);
        local_30 = local_res10[0];
        if ((local_60 == 0) && (local_3c == 0)) {
          local_3c = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_60);
          _guard_xfg_dispatch_icall_nop(local_48,puVar4,(longlong)local_60 * 2);
        }
        local_38[0] = (**(code **)(*param_1 + 0x850))(param_1,local_res10[0]);
        iVar2 = (int)param_1[0xb7];
        *(int *)(param_1 + 0xb7) = iVar2 + 1;
        if (*(int *)((longlong)param_1 + 0x5bc) < iVar2 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(param_1 + 0xb6,iVar2);
        }
        lVar7 = (longlong)iVar2 * 0x20 + param_1[0xb6];
        FString::FString(lVar7,&local_48);
        *(undefined4 *)(lVar7 + 0x10) = local_38[0];
        *(longlong **)(lVar7 + 0x18) = local_30;
        local_58 = local_res10;
        local_50 = local_38;
        FUN_1409bf4b0(param_1 + 0xb8,&local_res20,&local_58,0);
        if (local_48 != (wchar_t *)0x0) {
          FMemory::Free();
        }
      }
LAB_142b91b4b:
      if (local_68 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 142b91b70 FUN_142b91b70 body=196 status=ok
// SIG undefined FUN_142b91b70(void)

void FUN_142b91b70(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x5b8)) {
    plVar1 = (longlong *)(param_1 + 0x5b0);
    lVar6 = 0;
    plVar3 = (longlong *)(*plVar1 + 0x18);
    while (*plVar3 != param_2) {
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 1;
      plVar3 = plVar3 + 4;
      if (*(int *)(param_1 + 0x5b8) <= lVar6) {
        return;
      }
    }
    TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
    ::Remove(param_1 + 0x5c0);
    if (*(longlong *)((longlong)iVar5 * 0x20 + *plVar1) != 0) {
      FMemory::Free();
    }
    iVar4 = *(int *)(param_1 + 0x5b8);
    iVar2 = (iVar4 - iVar5) + -1;
    if (iVar2 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*plVar1 + (longlong)iVar5 * 0x20),
                 (void *)((longlong)(iVar5 + 1) * 0x20 + *plVar1),(longlong)iVar2 << 5);
      iVar4 = *(int *)(param_1 + 0x5b8);
    }
    *(int *)(param_1 + 0x5b8) = iVar4 + -1;
    TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(plVar1);
  }
  return;
}



// FUNCTION 142b91c40 FUN_142b91c40 body=332 status=ok
// SIG undefined FUN_142b91c40(void)

void FUN_142b91c40(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong *plVar10;
  
  plVar10 = *(longlong **)(param_1 + 0x68);
  plVar1 = plVar10 + *(int *)(param_1 + 0x70);
  do {
    if (plVar10 == plVar1) {
      return;
    }
    plVar3 = (longlong *)*plVar10;
    if (plVar3 != (longlong *)0x0) {
      if ((*(byte *)((longlong)plVar3 + 0x94) & 2) == 0) {
        iVar2 = *(int *)((longlong)plVar3 + 0xc);
        if (iVar2 < (int)DAT_1469e91c4) {
          uVar9 = iVar2 >> 0x1f & 0xffff;
          uVar5 = iVar2 + uVar9;
          lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                  (longlong)(int)((uVar5 & 0xffff) - uVar9) * 0x18;
        }
        else {
          lVar7 = 0;
        }
        if ((*(uint *)(lVar7 + 8) >> 0x1d & 1) != 0) goto LAB_142b91ccd;
        bVar4 = false;
      }
      else {
LAB_142b91ccd:
        bVar4 = true;
      }
      if (!bVar4) {
        if (param_3 == 0) {
          lVar7 = (**(code **)(*plVar3 + 0x148))();
          if ((lVar7 == 0) || (lVar7 = *(longlong *)(lVar7 + 0x138), lVar7 == 0)) {
LAB_142b91d2f:
            lVar7 = 0;
          }
          else {
            lVar8 = FUN_142ba9430();
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (!bVar4) goto LAB_142b91d2f;
          }
          uVar6 = FUN_142b90a00(lVar7,plVar3);
          (**(code **)(*plVar3 + 0x820))(plVar3,param_2,uVar6);
        }
        else {
          (**(code **)(*plVar3 + 0x828))(plVar3,param_2);
        }
        (**(code **)(*plVar3 + 0x830))(plVar3);
      }
    }
    plVar10 = plVar10 + 1;
  } while( true );
}



// FUNCTION 142b91d90 FUN_142b91d90 body=183 status=ok
// SIG undefined FUN_142b91d90(void)

void FUN_142b91d90(undefined8 param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined1 local_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if ((param_2 != (longlong *)0x0) && (DAT_146b2ba24 == '\0')) {
    FNavAgentSelector::FNavAgentSelector(&local_18);
    local_38 = *(undefined4 *)((longlong)param_2 + 0xc);
    local_14 = 0xffffffff;
    local_10 = 0;
    puVar1 = (undefined4 *)(**(code **)(*param_2 + 0x560))(param_2,local_58,1);
    local_34 = *puVar1;
    uStack_30 = puVar1[1];
    uStack_2c = puVar1[2];
    uStack_28 = puVar1[3];
    local_24 = *(undefined8 *)(puVar1 + 4);
    local_1c = puVar1[6];
    uVar2 = AActor::GetLevel(param_2);
    FWeakObjectPtr::operator=(&local_14,uVar2);
    local_18 = (undefined4)param_2[0x92];
    local_c = 0;
    UNavigationSystemV1::AddNavigationBoundsUpdateRequest(param_1,&local_38);
  }
  return;
}



// FUNCTION 142b91e50 FUN_142b91e50 body=63 status=ok
// SIG undefined FUN_142b91e50(void)

void FUN_142b91e50(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[0xa1];
  if (plVar1 == (longlong *)0x0) {
    (**(code **)(*param_1 + 0x750))(param_1);
    plVar1 = (longlong *)param_1[0xa1];
    if (plVar1 == (longlong *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142b91e85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))();
  return;
}



// FUNCTION 142b91e90 FUN_142b91e90 body=183 status=ok
// SIG undefined FUN_142b91e90(void)

void FUN_142b91e90(undefined8 param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined1 local_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if ((param_2 != (longlong *)0x0) && (DAT_146b2ba24 == '\0')) {
    FNavAgentSelector::FNavAgentSelector(&local_18);
    local_38 = *(undefined4 *)((longlong)param_2 + 0xc);
    local_14 = 0xffffffff;
    local_10 = 0;
    puVar1 = (undefined4 *)(**(code **)(*param_2 + 0x560))(param_2,local_58,1);
    local_34 = *puVar1;
    uStack_30 = puVar1[1];
    uStack_2c = puVar1[2];
    uStack_28 = puVar1[3];
    local_24 = *(undefined8 *)(puVar1 + 4);
    local_1c = puVar1[6];
    uVar2 = AActor::GetLevel(param_2);
    FWeakObjectPtr::operator=(&local_14,uVar2);
    local_18 = (undefined4)param_2[0x92];
    local_c = 1;
    UNavigationSystemV1::AddNavigationBoundsUpdateRequest(param_1,&local_38);
  }
  return;
}



// FUNCTION 142b91f50 FUN_142b91f50 body=183 status=ok
// SIG undefined FUN_142b91f50(void)

void FUN_142b91f50(undefined8 param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined1 local_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if ((param_2 != (longlong *)0x0) && (DAT_146b2ba24 == '\0')) {
    FNavAgentSelector::FNavAgentSelector(&local_18);
    local_38 = *(undefined4 *)((longlong)param_2 + 0xc);
    local_14 = 0xffffffff;
    local_10 = 0;
    puVar1 = (undefined4 *)(**(code **)(*param_2 + 0x560))(param_2,local_58,1);
    local_34 = *puVar1;
    uStack_30 = puVar1[1];
    uStack_2c = puVar1[2];
    uStack_28 = puVar1[3];
    local_24 = *(undefined8 *)(puVar1 + 4);
    local_1c = puVar1[6];
    uVar2 = AActor::GetLevel(param_2);
    FWeakObjectPtr::operator=(&local_14,uVar2);
    local_18 = (undefined4)param_2[0x92];
    local_c = 2;
    UNavigationSystemV1::AddNavigationBoundsUpdateRequest(param_1,&local_38);
  }
  return;
}



// FUNCTION 142b92010 OnNavigationDirtied body=139 status=ok
// SIG undefined OnNavigationDirtied(void)

void UNavigationSystemV1::OnNavigationDirtied(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (((*(byte *)(param_1 + 0x39a) & 0x20) != 0) && (*(char *)(param_2 + 3) != '\0')) {
    uVar6 = *param_2;
    uVar7 = param_2[1];
    uVar3 = *(undefined4 *)(param_2 + 3);
    iVar4 = *(int *)(param_1 + 0x368);
    uVar2 = param_2[2];
    *(int *)(param_1 + 0x368) = iVar4 + 1;
    if (*(int *)(param_1 + 0x36c) < iVar4 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow((longlong *)(param_1 + 0x360),iVar4);
    }
    lVar5 = *(longlong *)(param_1 + 0x360);
    puVar1 = (undefined8 *)((longlong)iVar4 * 0x20 + lVar5);
    *puVar1 = uVar6;
    puVar1[1] = uVar7;
    puVar1 = (undefined8 *)((longlong)iVar4 * 0x20 + 0x10 + lVar5);
    *puVar1 = uVar2;
    puVar1[1] = CONCAT44(3,uVar3);
  }
  return;
}



// FUNCTION 142b920a0 FUN_142b920a0 body=31 status=ok
// SIG undefined FUN_142b920a0(void)

void FUN_142b920a0(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0xf8,local_res8);
  return;
}



// FUNCTION 142b920e0 OnPathEvent body=117 status=ok
// SIG undefined OnPathEvent(void)

void UNavigationPath::OnPathEvent(longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong local_18;
  undefined1 local_10;
  
  if (param_2 == *(longlong *)(param_1 + 0x60)) {
    local_18 = param_1;
    local_10 = param_3;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x28,&local_18);
    lVar1 = *(longlong *)(param_1 + 0x60);
    if ((((lVar1 != 0) && ((*(uint *)(lVar1 + 0x98) & 2) != 0)) && (1 < *(int *)(lVar1 + 0x30))) &&
       ((*(uint *)(lVar1 + 0x98) & 1) != 0)) {
      *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 1;
      SetPathPointsFromPath(param_1,param_2);
      return;
    }
    *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfffffffe;
  }
  return;
}



// FUNCTION 142b92160 OnPathFailed body=83 status=ok
// SIG undefined OnPathFailed(void)

void INavPathObserverInterface::OnPathFailed(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\AI/Navigation/NavPathObserverInterface.h"
             ,0x21,L"Pure virtual not implemented (%s)",L"INavPathObserverInterface::OnPathInvalid")
  ;
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\AI/Navigation/NavPathObserverInterface.h"
             ,0x21,L"Pure virtual not implemented (%s)",L"INavPathObserverInterface::OnPathInvalid")
  ;
  return;
}



// FUNCTION 142b921c0 OnPathInvalid body=83 status=ok
// SIG undefined OnPathInvalid(void)

void INavPathObserverInterface::OnPathInvalid(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\AI/Navigation/NavPathObserverInterface.h"
             ,0x1c,L"Pure virtual not implemented (%s)",L"INavPathObserverInterface::OnPathInvalid")
  ;
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\AI/Navigation/NavPathObserverInterface.h"
             ,0x1c,L"Pure virtual not implemented (%s)",L"INavPathObserverInterface::OnPathInvalid")
  ;
  return;
}



// FUNCTION 142b92220 OnPathUpdated body=83 status=ok
// SIG undefined OnPathUpdated(void)

void INavPathObserverInterface::OnPathUpdated(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\AI/Navigation/NavPathObserverInterface.h"
             ,0x17,L"Pure virtual not implemented (%s)",L"INavPathObserverInterface::OnPathUpdated")
  ;
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\AI/Navigation/NavPathObserverInterface.h"
             ,0x17,L"Pure virtual not implemented (%s)",L"INavPathObserverInterface::OnPathUpdated")
  ;
  return;
}



// FUNCTION 142b92280 FUN_142b92280 body=67 status=ok
// SIG undefined FUN_142b92280(void)

void FUN_142b92280(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_142b8e790(param_1,0);
  if ((lVar2 == 0) && ((*(byte *)(param_1 + 8) & 1) != 0)) {
    cVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
    if (cVar1 == '\x01') {
      FUN_142b8e790(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 142b922f0 FUN_142b922f0 body=2017 status=ok
// SIG undefined FUN_142b922f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142b922f0(longlong *param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  int *piVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined8 uVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  int iVar22;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  char local_c8;
  longlong *local_c0;
  longlong *local_b8;
  ulonglong local_b0;
  int local_a8;
  longlong *local_a0;
  longlong *local_98;
  uint local_90 [2];
  longlong *local_88;
  longlong local_80;
  int local_78;
  int local_70;
  char local_6c;
  int local_68;
  longlong *local_60;
  longlong local_58;
  int local_50;
  undefined8 local_40;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  *(char *)((longlong)param_1 + 0x1d4) = param_2;
  local_c8 = param_2;
  (**(code **)(*param_1 + 800))();
  plVar9 = (longlong *)(**(code **)(*param_1 + 0x148))(param_1);
  local_98 = plVar9;
  cVar6 = (**(code **)(*param_1 + 0x2c8))(param_1);
  if ((cVar6 == '\0') && (*(char *)((longlong)param_1 + 0x1d4) != '\x03')) {
    plVar10 = (longlong *)FUN_142baab40();
    local_a0 = (longlong *)0x0;
    if (plVar10 != (longlong *)0x0) {
      plVar11 = (longlong *)FUN_142baab40();
      plVar14 = plVar10;
      do {
        local_a0 = plVar10;
        if (plVar14 == plVar11) break;
        plVar14 = (longlong *)plVar14[6];
        local_a0 = (longlong *)0x0;
      } while (plVar14 != (longlong *)0x0);
    }
    local_90[0] = 5;
    local_38 = '\0';
    local_c0 = plVar9;
    FUN_14044bc80(&local_88,&local_c0,&local_a0);
    FUN_14045a130(local_90);
    if (local_6c == '\0') {
LAB_142b923e0:
      plVar9 = local_60;
      lVar21 = 0;
      if (local_60 != (longlong *)0x0) {
        iVar22 = *(int *)((longlong)local_60 + 0xc);
        if (iVar22 < (int)DAT_1469e91c4) {
          uVar17 = iVar22 >> 0x1f & 0xffff;
          uVar7 = iVar22 + uVar17;
          lVar21 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                   (longlong)(int)((uVar7 & 0xffff) - uVar17) * 0x18;
        }
        if (((*(uint *)(lVar21 + 8) >> 0x1d & 1) == 0) && (local_60 != (longlong *)param_1[6])) {
          (**(code **)(*param_1 + 0x2e0))(param_1,local_60);
          (**(code **)(*plVar9 + 0x6f0))(plVar9);
          *(uint *)(param_1 + 0x25) = *(uint *)(param_1 + 0x25) | 1;
        }
      }
      local_c0 = local_88;
      iVar22 = local_70 + 1;
      if (iVar22 < local_50 + local_78) {
        lVar21 = (longlong)iVar22 * 8;
        iVar8 = local_50;
        iVar18 = local_78;
        do {
          lVar15 = 0;
          if (iVar22 < iVar18) {
            plVar9 = *(longlong **)(local_80 + lVar21);
          }
          else {
            plVar9 = *(longlong **)(local_58 + (longlong)(iVar22 - iVar18) * 8);
          }
          local_68 = local_68 + 1;
          if ((plVar9 != (longlong *)0x0) &&
             (lVar12 = AActor::GetLevel(plVar9), iVar8 = local_50, iVar18 = local_78, lVar12 != 0))
          {
            if ((local_90[0] & 1) != 0) {
              iVar1 = *(int *)((longlong)plVar9 + 0xc);
              if (iVar1 < (int)DAT_1469e91c4) {
                uVar17 = iVar1 >> 0x1f & 0xffff;
                uVar7 = iVar1 + uVar17;
                lVar15 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                         (longlong)(int)((uVar7 & 0xffff) - uVar17) * 0x18;
              }
              if ((*(uint *)(lVar15 + 8) >> 0x1d & 1) != 0) goto LAB_142b925fa;
            }
            if (((local_90[0] >> 1 & 1) == 0) ||
               (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(plVar9), iVar8 = local_50,
               iVar18 = local_78, cVar6 != '\0')) {
              if ((local_90[0] >> 2 & 1) != 0) {
                if (((*(byte *)(lVar12 + 0x204) & 0x10) == 0) &&
                   ((*(byte *)(lVar12 + 0x205) & 0x10) == 0)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                piVar2 = *(int **)(lVar12 + 600);
                if (((*(longlong *)(lVar12 + 0xc0) == 0) ||
                    (piVar13 = (int *)UWorld::GetActiveLevelCollection(), piVar13 == (int *)0x0)) ||
                   (piVar2 == piVar13)) {
                  bVar3 = true;
                }
                else {
                  bVar3 = false;
                }
                if ((piVar2 == (int *)0x0) || (*piVar2 == 2)) {
                  bVar4 = true;
                }
                else {
                  bVar4 = false;
                }
                if ((bVar3) || (bVar3 = false, bVar4)) {
                  bVar3 = true;
                }
                iVar8 = local_50;
                iVar18 = local_78;
                if ((!bVar5) || (!bVar3)) goto LAB_142b925fa;
              }
              plVar14 = (longlong *)ULevel::GetWorld(lVar12);
              plVar10 = local_c0;
              iVar8 = local_50;
              iVar18 = local_78;
              if (plVar14 == local_c0) {
                lVar15 = AActor::GetLevel(plVar9);
                if (lVar15 == plVar10[6]) goto LAB_142b9266d;
                lVar15 = UVoipListenerSynthComponent::GetPrivateStaticClass();
                if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar15 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar15 + 0x90) * 8) !=
                    lVar15 + 0x88)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                iVar8 = local_50;
                iVar18 = local_78;
                if (!bVar5) goto LAB_142b9266d;
              }
            }
          }
LAB_142b925fa:
          iVar22 = iVar22 + 1;
          lVar21 = lVar21 + 8;
          if (iVar8 + iVar18 <= iVar22) break;
        } while( true );
      }
      local_60 = (longlong *)0x0;
      local_6c = '\x01';
    }
LAB_142b92616:
    if (local_38 != '\0') {
      local_38 = '\0';
      UWorld::RemoveOnActorSpawnedHandler(local_88,local_40);
      if (local_58 != 0) {
        FMemory::Free();
      }
      if (local_80 != 0) {
        FMemory::Free();
      }
    }
    if (*(char *)((longlong)param_1 + 0x1d4) == '\x02') {
      *(byte *)(param_1 + 0x73) = *(byte *)(param_1 + 0x73) & ~*(byte *)((longlong)param_1 + 0x399);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (*(int *)((longlong)param_1 + 0xe4) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(param_1 + 0x1b,0);
    }
    (**(code **)(*param_1 + 0x2f8))(param_1);
    FUN_142b95a20(param_1);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      lVar21 = param_1[0x73];
      lVar15 = FUN_142b8e790(param_1,0);
      if (lVar15 != 0) {
        plVar10 = (longlong *)FUN_142baab40();
        local_c0 = (longlong *)0x0;
        if (plVar10 != (longlong *)0x0) {
          plVar11 = (longlong *)FUN_142baab40();
          plVar14 = plVar10;
          do {
            local_c0 = plVar10;
            if (plVar14 == plVar11) break;
            plVar14 = (longlong *)plVar14[6];
            local_c0 = (longlong *)0x0;
          } while (plVar14 != (longlong *)0x0);
        }
        local_90[0] = 5;
        local_38 = '\0';
        local_a0 = plVar9;
        FUN_14044bc80(&local_88,&local_a0,&local_c0);
        FUN_14045a130(local_90);
        plVar10 = local_60;
        while (local_60 = plVar10, local_6c == '\0') {
          if (plVar10 != (longlong *)0x0) {
            iVar22 = (**(code **)(*param_1 + 0x338))(param_1,plVar10);
            if (iVar22 == 5) {
              if (((char)lVar21 == '\0') && (DAT_146687974 != '\0')) {
                (**(code **)(*plVar10 + 0x758))(plVar10);
              }
            }
            else if ((iVar22 - 1U & 0xfffffffd) != 0) {
              (**(code **)(*plVar10 + 0x6f0))(plVar10);
            }
          }
          FUN_14045a130(local_90);
          plVar10 = local_60;
        }
        if (local_38 != '\0') {
          local_38 = '\0';
          UWorld::RemoveOnActorSpawnedHandler(local_88,local_40);
          if (local_58 != 0) {
            FMemory::Free();
          }
          if (local_80 != 0) {
            FMemory::Free();
          }
        }
      }
    }
    else {
      (**(code **)(*param_1 + 0x340))();
      (**(code **)(*param_1 + 0x2f0))(param_1);
    }
    if (*(char *)((longlong)param_1 + 0x1d4) == '\x02') {
      *(byte *)(param_1 + 0x73) = *(byte *)(param_1 + 0x73) & ~*(byte *)((longlong)param_1 + 0x399);
    }
    plVar9 = (longlong *)UDynamicEntryBox::GetAllEntries(plVar9);
    plVar10 = (longlong *)*plVar9;
    plVar9 = plVar10 + (int)plVar9[1];
    local_c0 = plVar9;
    if (plVar10 != plVar9) {
      do {
        lVar21 = *plVar10;
        cVar6 = ULevel::IsPersistentLevel();
        plVar14 = local_98;
        if ((cVar6 == '\0') && ((*(byte *)(lVar21 + 0x204) & 0x10) != 0)) {
          uVar20 = 0;
          plVar11 = (longlong *)param_1[0xd];
          uVar19 = (longlong)(int)param_1[0xe] & 0x1fffffffffffffff;
          if (plVar11 + (int)param_1[0xe] < plVar11) {
            uVar19 = uVar20;
          }
          if (uVar19 != 0) {
            do {
              plVar9 = (longlong *)*plVar11;
              if (plVar9 != (longlong *)0x0) {
                (**(code **)(*plVar9 + 0x720))(plVar9,lVar21,plVar14);
              }
              plVar11 = plVar11 + 1;
              uVar20 = uVar20 + 1;
              plVar9 = local_c0;
            } while (uVar20 != uVar19);
          }
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar9);
    }
  }
  if (local_c8 == '\x02') {
    if ((*(byte *)(param_1 + 9) & 1) != 0) {
      local_b8 = (longlong *)0x0;
      local_b0 = 0;
      local_a8 = -1;
      uVar16 = FUN_142ba9ce0();
      local_d8 = 0;
      FUN_1417a5560(uVar16,&local_b8,1,0x10);
      plVar9 = local_98;
      uVar19 = local_b0 & 0xffffffff;
      do {
        local_a8 = local_a8 + 1;
        plVar10 = local_b8;
        if ((int)local_b0 <= local_a8) break;
      } while (local_b8[local_a8] == 0);
LAB_142b92920:
      if ((local_a8 < 0) || ((int)uVar19 <= local_a8)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        plVar14 = *(longlong **)(plVar10[local_a8] + 0x120);
        if (plVar14 == (longlong *)0x0) {
          plVar14 = (longlong *)FUN_1423407b0(plVar10[local_a8]);
          uVar19 = local_b0 & 0xffffffff;
          plVar10 = local_b8;
        }
        if (plVar9 == plVar14) {
          plVar10 = (longlong *)plVar10[local_a8];
          cVar6 = (**(code **)(*plVar10 + 0x2a0))(plVar10);
          if ((cVar6 != '\0') && (plVar10[0x23] != 0)) {
            UNavigationSystemV1::RegisterInvoker
                      (param_1,plVar10[0x23],(int)plVar10[0x2f],
                       *(undefined4 *)((longlong)plVar10 + 0x17c));
          }
          uVar19 = local_b0 & 0xffffffff;
          plVar10 = local_b8;
        }
        do {
          local_a8 = local_a8 + 1;
          if ((int)uVar19 <= local_a8) break;
        } while (plVar10[local_a8] == 0);
        goto LAB_142b92920;
      }
      if (plVar10 != (longlong *)0x0) {
        FMemory::Free(plVar10);
      }
    }
    if (DAT_146687974 != '\0') {
      FUN_142b94ab0(param_1,1);
    }
  }
  if ((*(byte *)((longlong)param_1 + 0x39a) & 0x20) == 0) {
    *(undefined4 *)(param_1 + 0x6d) = 0;
    if (*(int *)((longlong)param_1 + 0x36c) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
                (param_1 + 0x6c,0);
    }
  }
  *(byte *)((longlong)param_1 + 0x39a) = *(byte *)((longlong)param_1 + 0x39a) | 8;
  (**(code **)(*param_1 + 0x350))(param_1);
  bVar5 = false;
  *(int *)((longlong)param_1 + 0x11c) = *(int *)((longlong)param_1 + 0x11c) + 1;
  iVar22 = *(int *)((longlong)param_1 + 0x11c);
  iVar8 = (int)param_1[0x22] + -1;
  lVar21 = (longlong)iVar8;
  if (-1 < iVar8) {
    lVar15 = lVar21 << 4;
    bVar5 = false;
    do {
      lVar12 = param_1[0x21];
      if (((*(int *)(lVar15 + 8 + lVar12) == 0) ||
          (plVar9 = *(longlong **)(lVar15 + lVar12), plVar9 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar9 + 0x40))(), cVar6 == '\0')) {
        bVar5 = true;
      }
      lVar15 = lVar15 + -0x10;
      lVar21 = lVar21 + -1;
    } while (-1 < lVar21);
    iVar22 = *(int *)((longlong)param_1 + 0x11c);
  }
  *(int *)((longlong)param_1 + 0x11c) = iVar22 + -1;
  if (bVar5) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1 + 0x21,0);
  }
  return;
LAB_142b9266d:
  local_70 = iVar22;
  local_60 = plVar9;
  if (local_6c != '\0') goto LAB_142b92616;
  goto LAB_142b923e0;
}



// FUNCTION 142b92ae0 FUN_142b92ae0 body=1246 status=ok
// SIG undefined FUN_142b92ae0(void)

void FUN_142b92ae0(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong **pplVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  longlong local_318;
  longlong *local_310;
  undefined4 local_308;
  longlong local_300;
  longlong *local_2f8;
  undefined4 local_2f0;
  longlong *local_2e8 [2];
  longlong local_2d8;
  longlong *plStack_2d0;
  undefined4 local_2c8;
  undefined1 local_2c0 [8];
  longlong *local_2b8;
  undefined1 local_2a8 [8];
  longlong *local_2a0;
  undefined1 local_290 [128];
  undefined4 local_210;
  longlong local_208;
  undefined4 local_200;
  undefined1 local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  undefined4 local_1e0;
  undefined1 local_1d8 [24];
  undefined1 local_1c0 [184];
  undefined1 local_108 [200];
  
  if ((int)param_2[1] != 0) {
    lVar15 = *param_2;
    lVar14 = (longlong)(int)param_2[1] * 0xb8 + lVar15;
    if (lVar15 != lVar14) {
      plVar13 = (longlong *)(lVar15 + 0xa8);
      do {
        cVar6 = FWeakObjectPtr::IsValid(plVar13 + -0xe);
        if (cVar6 == '\0') {
          lVar7 = FUN_142b8e790(param_1,0);
        }
        else {
          lVar7 = FWeakObjectPtr::Get(plVar13 + -0xe);
        }
        if (lVar7 == 0) {
          local_2c8 = 1;
          local_2d8 = 0;
          plStack_2d0 = (longlong *)0x0;
          if (plVar13 + -1 != &local_2d8) {
            plVar13[-1] = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(plVar13,&plStack_2d0);
          }
          plVar10 = plStack_2d0;
          *(undefined4 *)(plVar13 + 1) = local_2c8;
          if (plStack_2d0 != (longlong *)0x0) {
            LOCK();
            plVar8 = plStack_2d0 + 1;
            lVar7 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plStack_2d0)(plStack_2d0);
              LOCK();
              piVar1 = (int *)((longlong)plVar10 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              plVar10 = plStack_2d0;
              goto joined_r0x000142b92db4;
            }
          }
        }
        else if ((char)plVar13[-2] == '\x01') {
          plVar8 = (longlong *)(**(code **)(lVar7 + 0x4e8))(local_2c0);
          plVar10 = local_2b8;
          local_318 = *plVar8;
          local_310 = (longlong *)plVar8[1];
          plVar8[1] = 0;
          *plVar8 = 0;
          local_308 = (undefined4)plVar8[2];
          if (local_2b8 != (longlong *)0x0) {
            LOCK();
            plVar8 = local_2b8 + 1;
            lVar7 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_2b8)(local_2b8);
              LOCK();
              piVar1 = (int *)((longlong)plVar10 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*plVar10 + 8))(plVar10,1);
              }
            }
          }
          if (plVar13 + -1 != &local_318) {
            plVar13[-1] = local_318;
            local_318 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(plVar13,&local_310);
          }
          plVar10 = local_310;
          *(undefined4 *)(plVar13 + 1) = local_308;
          if (local_310 != (longlong *)0x0) {
            LOCK();
            plVar8 = local_310 + 1;
            lVar7 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_310)(local_310);
              LOCK();
              piVar1 = (int *)((longlong)plVar10 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              plVar10 = local_310;
joined_r0x000142b92db4:
              if (iVar2 == 1) {
                (**(code **)(*plVar10 + 8))(plVar10,1);
              }
            }
          }
        }
        else {
          plVar8 = (longlong *)(**(code **)(lVar7 + 0x4e0))(local_2a8,plVar13 + -0xb,lVar15);
          plVar10 = local_2a0;
          local_300 = *plVar8;
          local_2f8 = (longlong *)plVar8[1];
          plVar8[1] = 0;
          *plVar8 = 0;
          local_2f0 = (undefined4)plVar8[2];
          if (local_2a0 != (longlong *)0x0) {
            LOCK();
            plVar8 = local_2a0 + 1;
            lVar7 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_2a0)(local_2a0);
              LOCK();
              piVar1 = (int *)((longlong)plVar10 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*plVar10 + 8))(plVar10,1);
              }
            }
          }
          if (plVar13 + -1 != &local_300) {
            plVar13[-1] = local_300;
            local_300 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(plVar13,&local_2f8);
          }
          plVar10 = local_2f8;
          *(undefined4 *)(plVar13 + 1) = local_2f0;
          if (local_2f8 != (longlong *)0x0) {
            LOCK();
            plVar8 = local_2f8 + 1;
            lVar7 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_2f8)(local_2f8);
              LOCK();
              piVar1 = (int *)((longlong)plVar10 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              plVar10 = local_2f8;
              goto joined_r0x000142b92db4;
            }
          }
        }
        FUN_142b80820(local_290,lVar15);
        local_210 = (undefined4)plVar13[-5];
        local_208 = 0;
        local_200 = 0;
        if (((plVar13 + -4 != &local_208) && ((int)plVar13[-3] != 0)) &&
           (plVar10 = (longlong *)plVar13[-4], plVar10 != (longlong *)0x0)) {
          (**(code **)(*plVar10 + 0x30))(plVar10,&local_208);
        }
        local_1f8 = (undefined1)plVar13[-2];
        local_1f0 = plVar13[-1];
        local_1e8 = *plVar13;
        if (local_1e8 != 0) {
          LOCK();
          *(int *)(local_1e8 + 8) = *(int *)(local_1e8 + 8) + 1;
          UNLOCK();
        }
        local_1e0 = (undefined4)plVar13[1];
        uVar9 = FAsyncPathFindingQuery::FAsyncPathFindingQuery(local_1c0,local_290);
        plVar10 = (longlong *)FMemory::Realloc(0,0xd0,0);
        local_2e8[0] = plVar10;
        if (plVar10 != (longlong *)0x0) {
          uVar11 = FAsyncPathFindingQuery::FAsyncPathFindingQuery(local_108,uVar9);
          TBaseStaticDelegateInstance<void___cdecl(void),FAsyncPathFindingQuery>::
          TBaseStaticDelegateInstance<void___cdecl(void),FAsyncPathFindingQuery>
                    (plVar10,FUN_142b87ec0,uVar11);
        }
        FAsyncPathFindingQuery::~FAsyncPathFindingQuery(uVar9);
        FAsyncPathFindingQuery::~FAsyncPathFindingQuery(local_290);
        plVar8 = (longlong *)FUN_141d29000(local_1d8,0,0xff);
        lVar7 = *plVar8;
        pplVar12 = (longlong **)(lVar7 + 0x10);
        *pplVar12 = (longlong *)0x0;
        *(undefined4 *)(lVar7 + 0x18) = 0;
        if ((local_2e8 != pplVar12) && (plVar10 != (longlong *)0x0)) {
          (**(code **)(*plVar10 + 0x30))(plVar10,pplVar12);
        }
        *(undefined4 *)(lVar7 + 0x20) = 2;
        lVar7 = *plVar8;
        lVar5 = plVar8[2];
        lVar3 = plVar8[1];
        lVar4 = *(longlong *)(lVar7 + 0x30);
        piVar1 = (int *)(lVar4 + 0x48);
        if (lVar4 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
          plVar10 = local_2e8[0];
        }
        FUN_1409691d0(lVar7,lVar3,(int)lVar5,1);
        if (lVar4 != 0) {
          LOCK();
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar10 = local_2e8[0];
          if (iVar2 == 1) {
            FGraphEvent::Recycle(lVar4);
            plVar10 = local_2e8[0];
          }
        }
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x28))(plVar10);
          local_2e8[0] = (longlong *)FMemory::Realloc(plVar10,0,0);
          if (local_2e8[0] != (longlong *)0x0) {
            FMemory::Free(local_2e8[0]);
          }
        }
        lVar15 = lVar15 + 0xb8;
        plVar13 = plVar13 + 0x17;
      } while (lVar15 != lVar14);
    }
  }
  TArray<FAsyncPathFindingQuery,FDefaultAllocator>::
  ~TArray<FAsyncPathFindingQuery,FDefaultAllocator>(param_2);
  return;
}



// FUNCTION 142b92fc0 FUN_142b92fc0 body=1299 status=ok
// SIG undefined FUN_142b92fc0(void)

void FUN_142b92fc0(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  float fVar5;
  bool bVar6;
  byte bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  int *piVar14;
  longlong *plVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  longlong lVar18;
  int *piVar19;
  int iVar20;
  longlong lVar21;
  longlong *plVar22;
  undefined8 *puVar23;
  float *pfVar24;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong uVar27;
  undefined8 *puVar28;
  int iVar29;
  undefined8 *puVar30;
  uint uVar31;
  undefined1 local_res10 [8];
  int *local_res18;
  ulonglong local_res20;
  undefined8 *local_a0;
  uint local_98;
  uint local_94;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  if (((int)param_1[0xe] == 0) &&
     (((int)param_1[0x10] < 1 || ((**(code **)(*param_1 + 0x2f0))(), (int)param_1[0xe] == 0)))) {
    (**(code **)(*param_1 + 0x340))(param_1);
    (**(code **)(*param_1 + 0x2f0))(param_1);
  }
  local_res18 = (int *)*param_2;
  puVar23 = (undefined8 *)0x0;
  local_res20 = 0;
  local_a0 = (undefined8 *)0x0;
  piVar14 = local_res18 + (longlong)*(int *)(param_2 + 1) * 0xc;
  local_94 = 0;
  puVar30 = puVar23;
  if (local_res18 != piVar14) {
    pfVar24 = (float *)(local_res18 + 6);
    plVar22 = param_1 + 0x26;
    puVar28 = puVar23;
    do {
      uVar31 = (uint)puVar28;
      if ((int)param_1[0x27] != *(int *)((longlong)param_1 + 0x164)) {
        plVar15 = (longlong *)param_1[0x2e];
        if ((longlong *)param_1[0x2e] == (longlong *)0x0) {
          plVar15 = param_1 + 0x2d;
        }
        iVar20 = *(int *)((longlong)plVar15 +
                         ((longlong)(int)param_1[0x2f] - 1U & (longlong)*local_res18) * 4);
        if (iVar20 != -1) {
          do {
            if (*(int *)((longlong)iVar20 * 0x34 + *plVar22) == *local_res18) goto LAB_142b930db;
            iVar20 = *(int *)((longlong)iVar20 * 0x34 + 0x2c + *plVar22);
          } while (iVar20 != -1);
        }
      }
      iVar20 = -1;
LAB_142b930db:
      fVar5 = pfVar24[5];
      iVar29 = (int)puVar30;
      if (fVar5 == 0.0) {
LAB_142b930f4:
        if (iVar20 == -1) {
          FUN_142b7ddf0(plVar22,local_res10,local_res18,0);
        }
        else {
          lVar21 = (longlong)iVar20 * 0x34;
          lVar18 = *plVar22;
          pfVar2 = (float *)(lVar21 + 4 + lVar18);
          fVar5 = *pfVar2;
          fVar8 = pfVar2[1];
          fVar9 = pfVar2[2];
          fVar10 = pfVar2[3];
          uVar17 = *(undefined4 *)(lVar21 + 0x1c + lVar18);
          uVar4 = *(undefined8 *)(lVar21 + 0x14 + lVar18);
          local_80 = uVar4;
          if (((((fVar5 != pfVar24[-5]) || (fVar8 != pfVar24[-4])) || (fVar9 != pfVar24[-3])) ||
              ((fVar10 != pfVar24[-2] ||
               (local_80._0_4_ = (float)uVar4, (float)local_80 != pfVar24[-1])))) ||
             (local_80._4_4_ = (float)((ulonglong)uVar4 >> 0x20), bVar6 = local_80._4_4_ != *pfVar24
             , bVar6)) {
            local_98 = iVar29 + 1;
            if ((int)local_94 < (int)local_98) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::
              ResizeGrow(&local_a0,puVar30);
              puVar23 = local_a0;
            }
            puVar30 = (undefined8 *)(ulonglong)local_98;
            lVar18 = (longlong)iVar29 * 0x1c;
            pfVar2 = (float *)(lVar18 + (longlong)puVar23);
            *pfVar2 = fVar5;
            pfVar2[1] = fVar8;
            pfVar2[2] = fVar9;
            pfVar2[3] = fVar10;
            *(undefined8 *)(lVar18 + 0x10 + (longlong)puVar23) = uVar4;
            *(undefined4 *)(lVar18 + 0x18 + (longlong)puVar23) = uVar17;
            uVar31 = local_94;
          }
          lVar18 = *plVar22;
          *(int *)(lVar21 + lVar18) = *local_res18;
          fVar5 = pfVar24[-4];
          fVar8 = pfVar24[-3];
          fVar9 = pfVar24[-2];
          pfVar2 = (float *)(lVar21 + 4 + lVar18);
          *pfVar2 = pfVar24[-5];
          pfVar2[1] = fVar5;
          pfVar2[2] = fVar8;
          pfVar2[3] = fVar9;
          *(undefined8 *)(lVar21 + 0x14 + lVar18) = *(undefined8 *)(pfVar24 + -1);
          *(float *)(lVar21 + 0x1c + lVar18) = pfVar24[1];
          *(float *)(lVar21 + 0x20 + lVar18) = pfVar24[2];
          *(float *)(lVar21 + 0x24 + lVar18) = pfVar24[3];
          *(float *)(lVar21 + 0x28 + lVar18) = pfVar24[4];
        }
        local_98 = (int)puVar30 + 1;
        if ((int)uVar31 < (int)local_98) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::
          ResizeGrow(&local_a0,puVar30);
          puVar23 = local_a0;
        }
        fVar5 = pfVar24[-4];
        fVar8 = pfVar24[-3];
        fVar9 = pfVar24[-2];
        lVar18 = (longlong)(int)puVar30 * 0x1c;
        pfVar2 = (float *)(lVar18 + (longlong)puVar23);
        *pfVar2 = pfVar24[-5];
        pfVar2[1] = fVar5;
        pfVar2[2] = fVar8;
        pfVar2[3] = fVar9;
        *(undefined8 *)(lVar18 + 0x10 + (longlong)puVar23) = *(undefined8 *)(pfVar24 + -1);
        *(float *)(lVar18 + 0x18 + (longlong)puVar23) = pfVar24[1];
LAB_142b93369:
        puVar30 = (undefined8 *)(ulonglong)local_98;
      }
      else if (fVar5 == 1.4013e-45) {
        if (iVar20 != -1) {
          lVar18 = *plVar22;
          local_98 = iVar29 + 1;
          if ((int)local_94 < (int)local_98) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::
            ResizeGrow(&local_a0,puVar30);
            puVar23 = local_a0;
          }
          lVar21 = (longlong)iVar29 * 0x1c;
          lVar26 = (longlong)iVar20 * 0x34;
          puVar3 = (undefined4 *)(lVar26 + 4 + lVar18);
          uVar17 = puVar3[1];
          uVar11 = puVar3[2];
          uVar12 = puVar3[3];
          puVar16 = (undefined4 *)(lVar21 + (longlong)puVar23);
          *puVar16 = *puVar3;
          puVar16[1] = uVar17;
          puVar16[2] = uVar11;
          puVar16[3] = uVar12;
          *(undefined8 *)(lVar21 + 0x10 + (longlong)puVar23) =
               *(undefined8 *)(lVar26 + 0x14 + lVar18);
          *(undefined4 *)(lVar21 + 0x18 + (longlong)puVar23) =
               *(undefined4 *)(lVar26 + 0x1c + lVar18);
          if ((int)param_1[0x27] != *(int *)((longlong)param_1 + 0x164)) {
            lVar18 = *plVar22;
            lVar21 = (longlong)(int)((int)param_1[0x2f] - 1U & *(uint *)(lVar26 + 0x30 + lVar18));
            plVar15 = (longlong *)param_1[0x2e];
            if ((longlong *)param_1[0x2e] == (longlong *)0x0) {
              plVar15 = param_1 + 0x2d;
            }
            piVar19 = (int *)((longlong)plVar15 + lVar21 * 4);
            iVar29 = *(int *)((longlong)plVar15 + lVar21 * 4);
            while (iVar29 != -1) {
              if (iVar29 == iVar20) {
                *piVar19 = *(int *)(lVar26 + 0x2c + lVar18);
                break;
              }
              piVar19 = (int *)(lVar18 + 0x2c + (longlong)iVar29 * 0x34);
              iVar29 = *piVar19;
            }
          }
          bVar7 = (byte)iVar20 & 0x1f;
          if (*(int *)((longlong)param_1 + 0x164) != 0) {
            *(int *)((longlong)(int)param_1[0x2c] * 0x34 + *plVar22) = iVar20;
          }
          puVar16 = (undefined4 *)((longlong)iVar20 * 0x34 + *plVar22);
          *puVar16 = 0xffffffff;
          if (*(int *)((longlong)param_1 + 0x164) < 1) {
            uVar17 = 0xffffffff;
          }
          else {
            uVar17 = (undefined4)param_1[0x2c];
          }
          puVar16[1] = uVar17;
          *(int *)((longlong)param_1 + 0x164) = *(int *)((longlong)param_1 + 0x164) + 1;
          *(int *)(param_1 + 0x2c) = iVar20;
          plVar15 = (longlong *)param_1[0x2a];
          if ((longlong *)param_1[0x2a] == (longlong *)0x0) {
            plVar15 = param_1 + 0x28;
          }
          if (iVar20 < 0) {
            iVar20 = iVar20 + 0x1f;
          }
          puVar1 = (uint *)((longlong)plVar15 + (longlong)(iVar20 >> 5) * 4);
          *puVar1 = *puVar1 & ~(1 << bVar7 | 1U >> 0x20 - bVar7);
          goto LAB_142b93369;
        }
      }
      else if (fVar5 == 2.8026e-45) goto LAB_142b930f4;
      puVar28 = (undefined8 *)(ulonglong)local_94;
      local_res18 = local_res18 + 0xc;
      pfVar24 = pfVar24 + 0xc;
    } while (local_res18 != piVar14);
  }
  uVar27 = 0;
  puVar28 = puVar23;
  if (((char)param_1[0x73] == '\0') && ((int)puVar30 != 0)) {
    plVar22 = (longlong *)param_1[0xd];
    uVar25 = (longlong)(int)param_1[0xe] & 0x1fffffffffffffff;
    if (plVar22 + (int)param_1[0xe] < plVar22) {
      uVar25 = uVar27;
    }
    if (uVar25 != 0) {
      do {
        if ((longlong *)*plVar22 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar22 + 0x718))();
          uVar27 = local_res20;
        }
        uVar27 = uVar27 + 1;
        plVar22 = plVar22 + 1;
        local_res20 = uVar27;
      } while (uVar27 != uVar25);
    }
    if (0 < (int)puVar30) {
      do {
        if (((*(byte *)((longlong)param_1 + 0x39a) & 0x20) != 0) && (*(char *)(puVar23 + 3) != '\0')
           ) {
          uStack_78 = *(undefined4 *)(puVar23 + 3);
          iVar20 = (int)param_1[0x6d];
          local_80 = puVar23[2];
          uVar4 = *puVar23;
          uVar13 = puVar23[1];
          uStack_74 = 0xb;
          *(int *)(param_1 + 0x6d) = iVar20 + 1;
          if (*(int *)((longlong)param_1 + 0x36c) < iVar20 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
            ::ResizeGrow(param_1 + 0x6c,iVar20);
          }
          lVar18 = param_1[0x6c];
          puVar28 = (undefined8 *)((longlong)iVar20 * 0x20 + lVar18);
          *puVar28 = uVar4;
          puVar28[1] = uVar13;
          puVar16 = (undefined4 *)((longlong)iVar20 * 0x20 + 0x10 + lVar18);
          *puVar16 = (float)local_80;
          puVar16[1] = local_80._4_4_;
          puVar16[2] = uStack_78;
          puVar16[3] = uStack_74;
        }
        puVar23 = (undefined8 *)((longlong)puVar23 + 0x1c);
        puVar30 = (undefined8 *)((longlong)puVar30 + -1);
        puVar28 = local_a0;
      } while (puVar30 != (undefined8 *)0x0);
    }
  }
  if (puVar28 != (undefined8 *)0x0) {
    FMemory::Free(puVar28);
  }
  return;
}



// FUNCTION 142b934e0 FUN_142b934e0 body=113 status=ok
// SIG undefined FUN_142b934e0(void)

longlong * FUN_142b934e0(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_3 == 0) {
    *param_2 = param_1[2];
    return param_2;
  }
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))();
  if (*plVar2 != 0) {
    lVar3 = UNavAreaBase::GetPrivateStaticClass();
    lVar4 = *plVar2;
    for (lVar1 = lVar4; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar3) goto LAB_142b93530;
    }
  }
  lVar4 = 0;
LAB_142b93530:
  *param_2 = lVar4;
  return param_2;
}



// FUNCTION 142b93560 FUN_142b93560 body=579 status=ok
// SIG undefined FUN_142b93560(void)

longlong * FUN_142b93560(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 local_res10 [8];
  
  plVar2 = (longlong *)FUN_142ba9430();
  lVar5 = plVar2[0x1f];
  if (lVar5 == 0) {
    (**(code **)(*plVar2 + 0x368))(plVar2);
    lVar5 = plVar2[0x1f];
  }
  if (lVar5 != 0) {
    uVar7 = 0;
    uVar6 = 0;
    if (*(int *)(lVar5 + 0x58) < 2) {
LAB_142b936ab:
      switch(uVar6) {
      default:
        lVar5 = *(longlong *)(param_1 + 0x70);
        break;
      case 1:
        lVar5 = *(longlong *)(param_1 + 0x78);
        break;
      case 2:
        lVar5 = *(longlong *)(param_1 + 0x80);
        break;
      case 3:
        lVar5 = *(longlong *)(param_1 + 0x88);
        break;
      case 4:
        lVar5 = *(longlong *)(param_1 + 0x90);
        break;
      case 5:
        lVar5 = *(longlong *)(param_1 + 0x98);
        break;
      case 6:
        lVar5 = *(longlong *)(param_1 + 0xa0);
        break;
      case 7:
        lVar5 = *(longlong *)(param_1 + 0xa8);
        break;
      case 8:
        lVar5 = *(longlong *)(param_1 + 0xb0);
        break;
      case 9:
        lVar5 = *(longlong *)(param_1 + 0xb8);
        break;
      case 10:
        lVar5 = *(longlong *)(param_1 + 0xc0);
        break;
      case 0xb:
        lVar5 = *(longlong *)(param_1 + 200);
        break;
      case 0xc:
        lVar5 = *(longlong *)(param_1 + 0xd0);
        break;
      case 0xd:
        lVar5 = *(longlong *)(param_1 + 0xd8);
        break;
      case 0xe:
        lVar5 = *(longlong *)(param_1 + 0xe0);
        break;
      case 0xf:
        lVar5 = *(longlong *)(param_1 + 0xe8);
      }
      if (lVar5 != 0) {
        lVar3 = UAITask::GetPrivateStaticClass();
        lVar4 = lVar5;
        do {
          if (lVar4 == lVar3) {
            lVar3 = UAITask::GetPrivateStaticClass();
            lVar4 = lVar5;
            do {
              if (lVar4 == lVar3) {
                *param_2 = lVar5;
                return param_2;
              }
              lVar4 = *(longlong *)(lVar4 + 0x30);
            } while (lVar4 != 0);
            *param_2 = 0;
            return param_2;
          }
          lVar4 = *(longlong *)(lVar4 + 0x30);
        } while (lVar4 != 0);
      }
    }
    else {
      uVar8 = uVar7;
      if (0 < *(int *)(lVar5 + 0x58)) {
        do {
          lVar4 = *(longlong *)(lVar5 + 0x50) + uVar8;
          uVar6 = (uint)uVar7;
          if ((((ABS(*(float *)(lVar4 + 4) - *(float *)(param_4 + 4)) < 5.0) &&
               (ABS(*(float *)(lVar4 + 8) - *(float *)(param_4 + 8)) < 5.0)) &&
              ((*(float *)(lVar4 + 0xc) < 0.0 ||
               ((*(float *)(param_4 + 0xc) < 0.0 ||
                (ABS(*(float *)(lVar4 + 0xc) - *(float *)(param_4 + 0xc)) < 5.0)))))) &&
             (cVar1 = FNavAgentProperties::IsNavDataMatching(lVar4,param_4), cVar1 != '\0')) {
            if (uVar6 < 0x10) goto LAB_142b936ab;
            break;
          }
          uVar7 = (ulonglong)(uVar6 + 1);
          uVar8 = uVar8 + 0x68;
        } while ((int)(uVar6 + 1) < *(int *)(lVar5 + 0x58));
      }
    }
  }
  plVar2 = (longlong *)FNavigationSystem::GetDefaultWalkableArea(local_res10);
  *param_2 = *plVar2;
  return param_2;
}



// FUNCTION 142b937f0 FUN_142b937f0 body=182 status=ok
// SIG undefined FUN_142b937f0(void)

void FUN_142b937f0(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  
  FUN_1422383f0();
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar3 = iVar1 + uVar5;
    lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
            (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar4 = 0;
  }
  if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) {
    if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
      cVar2 = FUN_142b980d0(param_1);
      *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0x7f;
      *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | cVar2 << 7;
      FUN_142b96cd0(param_1);
      lVar4 = (**(code **)(*param_1 + 0x848))(param_1);
      param_1[0x8c] = lVar4;
    }
    else if (*(char *)((longlong)param_1 + 0x4d4) == '\x03') {
      *(byte *)((longlong)param_1 + 0x4d4) = ((byte)(*(uint *)(param_1 + 0x9a) >> 4) & 1) * '\x02';
      return;
    }
  }
  return;
}



// FUNCTION 142b938b0 PostLoad body=27 status=ok
// SIG undefined PostLoad(void)

void UNavArea::PostLoad(undefined8 param_1)

{
  FUN_1417931d0();
  RegisterArea(param_1);
  return;
}



// FUNCTION 142b938d0 FUN_142b938d0 body=1075 status=ok
// SIG undefined FUN_142b938d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b938d0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte bVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined2 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong local_res8 [2];
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  longlong local_e0 [2];
  longlong local_d0 [2];
  undefined8 local_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [32];
  longlong local_88;
  longlong local_50;
  
  uVar18 = 0;
  local_res8[0] = local_res8[0] & 0xffffffff00000000;
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    local_f8 = (undefined8 *)0x0;
    local_f0 = 0;
    uVar7 = UAITask::GetPrivateStaticClass();
    FUN_1417a5100(uVar7,&local_f8,1);
    uVar16 = (ulonglong)((longlong)(local_f8 + (int)local_f0) + (7 - (longlong)local_f8)) >> 3;
    if (local_f8 + (int)local_f0 < local_f8) {
      uVar16 = uVar18;
    }
    puVar13 = local_f8;
    uVar15 = uVar18;
    if (uVar16 != 0) {
      do {
        FUN_142b95360(param_1,*puVar13);
        uVar15 = uVar15 + 1;
        puVar13 = puVar13 + 1;
      } while (uVar15 != uVar16);
    }
    if (*(int *)(param_1 + 0x58) == 0) {
      uVar7 = FUN_142243f40(local_a8,0x420c0000,0x43100000);
      iVar1 = *(int *)(param_1 + 0x58);
      *(int *)(param_1 + 0x58) = iVar1 + 1;
      if (*(int *)(param_1 + 0x5c) < iVar1 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::
        ResizeGrow(param_1 + 0x50,iVar1);
      }
      FNavDataConfig::FNavDataConfig((longlong)iVar1 * 0x68 + *(longlong *)(param_1 + 0x50),uVar7);
      if (local_50 != 0) {
        FMemory::Free();
      }
      if (local_88 != 0) {
        FMemory::Free();
      }
    }
    else {
      uVar16 = uVar18;
      uVar15 = uVar18;
      uVar19 = uVar18;
      if (0 < *(int *)(param_1 + 0x58)) {
        do {
          lVar12 = *(longlong *)(param_1 + 0x50);
          if (*(longlong *)(uVar16 + 0x48 + lVar12) != 0) {
            lVar8 = FUN_1428dfc70();
            lVar2 = *(longlong *)(uVar16 + 0x48 + lVar12);
            lVar3 = lVar2;
joined_r0x000142b93a2b:
            if (lVar3 != 0) {
              if (lVar3 != lVar8) goto code_r0x000142b93a35;
              if (lVar2 != 0) {
                local_res8[0] = 0;
                if (*(longlong *)(uVar16 + lVar12 + 0x50) == 0) {
                  uVar10 = uVar18;
                  if (lVar2 != 0) {
                    uVar9 = FUN_1428dfc70();
                    uVar4 = *(ulonglong *)(uVar16 + 0x48 + lVar12);
                    for (uVar5 = uVar4;
                        (uVar10 = uVar18, uVar5 != 0 && (uVar10 = uVar4, uVar5 != uVar9));
                        uVar5 = *(ulonglong *)(uVar5 + 0x30)) {
                    }
                  }
                  FSoftObjectPath::FSoftObjectPath(&local_e8,uVar10);
                  local_c0 = local_e8;
                  FString::FString(local_b8,local_e0);
                  FSoftObjectPath::operator=(uVar16 + lVar12 + 0x50,&local_c0);
                  if (local_e0[0] != 0) {
                    FMemory::Free();
                  }
                  goto LAB_142b93b4a;
                }
              }
            }
          }
          local_res8[1] = 0;
          plVar11 = (longlong *)(lVar12 + 0x50 + uVar16);
          uVar10 = uVar18;
          if (*plVar11 != 0) {
            uVar19 = 1;
            puVar13 = (undefined8 *)FSoftObjectPath::ToString(plVar11,local_d0);
            if (*(int *)(puVar13 + 1) == 0) {
              puVar14 = &DAT_143f3eda8;
            }
            else {
              puVar14 = (undefined2 *)*puVar13;
            }
            uVar7 = FUN_142baab40();
            uVar10 = FUN_141799830(uVar7,0,puVar14,0,0,0);
          }
          if ((uVar19 != 0) && (uVar19 = 0, local_d0[0] != 0)) {
            FMemory::Free();
          }
          UNavigationSystemV1::SetSupportedAgentsNavigationClass(param_1,uVar15,uVar10);
LAB_142b93b4a:
          uVar17 = (int)uVar15 + 1;
          uVar16 = uVar16 + 0x68;
          uVar15 = (ulonglong)uVar17;
        } while ((int)uVar17 < *(int *)(param_1 + 0x58));
      }
    }
    bVar6 = *(byte *)(param_1 + 0x399);
    if ((*(byte *)(param_1 + 0x40) & 0x40) != 0) {
      bVar6 = bVar6 | 4;
      *(byte *)(param_1 + 0x399) = bVar6;
    }
    *(byte *)(param_1 + 0x398) = *(byte *)(param_1 + 0x398) | bVar6;
    plVar11 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar11 != (longlong *)0x0) {
      *plVar11 = (longlong)&PTR_FUN_143f4d290;
      FWeakObjectPtr::operator=(plVar11 + 1,param_1);
      plVar11[2] = (longlong)FUN_142b92280;
      lVar12 = FDelegateHandle::GenerateNewID();
      plVar11[4] = lVar12;
      *plVar11 = (longlong)&PTR_FUN_143f4d2d8;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464b57d0,1);
      (**(code **)(*plVar11 + 0x20))(plVar11,local_res8);
      iVar1 = DAT_1464b57d8;
      lVar12 = (longlong)DAT_1464b57d8;
      DAT_1464b57d8 = DAT_1464b57d8 + 1;
      if (DAT_1464b57dc < DAT_1464b57d8) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464b57d0,iVar1);
      }
      puVar13 = (undefined8 *)(lVar12 * 0x10 + DAT_1464b57d0);
      *puVar13 = plVar11;
      *(undefined4 *)(puVar13 + 1) = 3;
    }
    plVar11 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar11 != (longlong *)0x0) {
      *plVar11 = (longlong)&PTR_FUN_143f4d290;
      FWeakObjectPtr::operator=(plVar11 + 1,param_1);
      plVar11[2] = (longlong)UNavigationSystemV1::OnNavigationDirtied;
      lVar12 = FDelegateHandle::GenerateNewID();
      plVar11[4] = lVar12;
      *plVar11 = (longlong)&PTR_FUN_143f4d2d8;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1466879e0,1);
      (**(code **)(*plVar11 + 0x20))(plVar11,local_res8);
      iVar1 = DAT_1466879e8;
      lVar12 = (longlong)DAT_1466879e8;
      DAT_1466879e8 = DAT_1466879e8 + 1;
      if (DAT_1466879ec < DAT_1466879e8) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1466879e0,iVar1);
      }
      puVar13 = (undefined8 *)(lVar12 * 0x10 + _DAT_1466879e0);
      *puVar13 = plVar11;
      *(undefined4 *)(puVar13 + 1) = 3;
    }
    if (local_f8 != (undefined8 *)0x0) {
      FMemory::Free();
    }
  }
  return;
code_r0x000142b93a35:
  lVar3 = *(longlong *)(lVar3 + 0x30);
  goto joined_r0x000142b93a2b;
}



// FUNCTION 142b93d10 FUN_142b93d10 body=179 status=ok
// SIG undefined FUN_142b93d10(void)

void FUN_142b93d10(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_142238430();
  lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar3 == 0) goto LAB_142b93da7;
  lVar5 = *(longlong *)(lVar3 + 0x138);
  if (lVar5 == 0) {
LAB_142b93d7d:
    lVar5 = 0;
  }
  else {
    lVar4 = FUN_142ba9430();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_142b93d7d;
  }
  iVar2 = FUN_1428cf800(lVar3);
  if ((iVar2 == 3) || (lVar5 != 0)) {
    iVar2 = FUN_1428cf800(lVar3);
    if (iVar2 != 3) {
      return;
    }
    if ((char)param_1[0x12] < '\0') {
      return;
    }
  }
LAB_142b93da7:
  (**(code **)(*param_1 + 0x6f0))(param_1);
  return;
}



// FUNCTION 142b93dd0 FUN_142b93dd0 body=169 status=ok
// SIG undefined FUN_142b93dd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b93dd0(longlong param_1)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  FUN_1422384a0();
  iVar3 = UObjectBaseUtility::GetLinkerUE4Version(param_1);
  if ((iVar3 < 0x1ad) && (*(char *)(param_1 + 0x4d4) == '\x03')) {
    *(byte *)(param_1 + 0x4d4) = ((byte)(*(uint *)(param_1 + 0x4d0) >> 4) & 1) * '\x02';
  }
  cVar2 = FUN_142b980d0(param_1);
  *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) & 0x7f;
  *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) | cVar2 << 7;
  FUN_142b96cd0(param_1);
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x40;
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 < (int)DAT_1469e91c4) {
    uVar5 = iVar3 >> 0x1f & 0xffff;
    uVar4 = iVar3 + uVar5;
    puVar1 = (uint *)(*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) + 8 +
                     (longlong)(int)((uVar4 & 0xffff) - uVar5) * 0x18);
    *puVar1 = *puVar1 | 0x20000000;
    return;
  }
  _DAT_00000008 = _DAT_00000008 | 0x20000000;
  return;
}



// FUNCTION 142b93e80 FUN_142b93e80 body=94 status=ok
// SIG undefined FUN_142b93e80(void)

void FUN_142b93e80(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  FUN_1422384a0();
  iVar2 = UObjectBaseUtility::GetLinkerUE4Version(param_1);
  if ((iVar2 < 0x1ad) && (*(char *)(param_1 + 0x4d4) == '\x03')) {
    *(byte *)(param_1 + 0x4d4) = ((byte)(*(uint *)(param_1 + 0x4d0) >> 4) & 1) * '\x02';
  }
  cVar1 = FUN_142b980d0(param_1);
  *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) & 0x7f;
  *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) | cVar1 << 7;
  FUN_142b96cd0(param_1);
  return;
}



// FUNCTION 142b93ee0 PostLoad body=27 status=ok
// SIG undefined PostLoad(void)

void UNavArea::PostLoad(undefined8 param_1)

{
  UObject::PostLoad();
  RegisterArea(param_1);
  return;
}



// FUNCTION 142b93f00 FUN_142b93f00 body=119 status=ok
// SIG undefined FUN_142b93f00(void)

void FUN_142b93f00(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  UObject::PostLoad();
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    FUN_1417510e0(lVar1);
    lVar3 = UNodeMappingContainer::StaticClass();
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
      (**(code **)(*param_1 + 0x278))(param_1,*(undefined8 *)(lVar1 + 0xa0));
    }
  }
  return;
}



// FUNCTION 142b93f80 ProcessCustomLinkPendingRegistration body=638 status=ok
// SIG undefined ProcessCustomLinkPendingRegistration(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void UNavigationSystemV1::ProcessCustomLinkPendingRegistration(undefined8 param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  BOOL BVar6;
  int iVar7;
  longlong lVar8;
  uint *puVar9;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  uint uStack_e0;
  uint uStack_dc;
  undefined8 local_d8;
  uint uStack_d0;
  int iStack_cc;
  undefined1 local_c8 [16];
  longlong *local_b8;
  undefined2 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  longlong *local_a0;
  uint uStack_98;
  uint uStack_94;
  uint *puStack_90;
  undefined1 auStack_88 [16];
  undefined8 local_78;
  longlong local_68 [2];
  uint local_58 [4];
  uint *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b2ba88);
  if (BVar6 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b2ba88);
  }
  local_38 = 0xffffffff;
  local_68[0] = 0;
  local_68[1] = 0;
  local_48 = (uint *)0x0;
  local_40 = 0;
  local_34 = 0;
  local_28 = 0;
  local_20 = 0;
  TSet<TTuple<INavLinkCustomInterface_*,FWeakObjectPtr>,TDefaultMapHashableKeyFuncs<INavLinkCustomInterface_*,FWeakObjectPtr,0>,FDefaultSetAllocator>
  ::operator=(local_68,&DAT_146687a00);
  TSet<TTuple<UObject_*,FObjectGraphNode_*>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectGraphNode_*,0>,FDefaultSetAllocator>
  ::Empty(&DAT_146687a00,0);
  puStack_90 = local_58;
  local_e8._0_4_ = 0;
  local_e8._4_4_ = 1;
  local_d8._4_4_ = 0;
  uStack_d0 = 0;
  if ((int)local_40 != 0) {
    puVar9 = local_58;
    if (local_48 != (uint *)0x0) {
      puVar9 = local_48;
    }
    uVar1 = *puVar9;
    local_e8._0_4_ = 0;
    uStack_d0 = 0;
    while (uVar1 == 0) {
      uStack_d0 = uStack_d0 + 0x20;
      if ((int)((int)local_40 + -1 + ((int)local_40 + -1 >> 0x1f & 0x1fU)) >> 5 <=
          (int)(uint)local_e8) {
        local_d8._4_4_ = (int)local_40;
        local_e8._0_4_ = (uint)local_e8 + 1;
        goto LAB_142b940b9;
      }
      uVar1 = puVar9[(longlong)(int)(uint)local_e8 + 1];
      local_e8._0_4_ = (uint)local_e8 + 1;
    }
    local_e8._4_4_ = -uVar1 & uVar1;
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
    if ((int)local_40 < local_d8._4_4_) {
      local_d8._4_4_ = (int)local_40;
    }
  }
LAB_142b940b9:
  auStack_88._4_4_ = local_d8._4_4_;
  auStack_88._0_4_ = 0xffffffff;
  auStack_88._8_4_ = uStack_d0;
  auStack_88._12_4_ = iStack_cc;
  local_a0 = local_68;
  local_b0 = 0;
  uStack_98 = (uint)local_e8;
  uStack_94 = local_e8._4_4_;
  local_b8 = local_68;
  local_78._0_4_ = SUB84(local_68,0);
  local_78._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_e0 = (uint)local_e8;
  uStack_dc = local_e8._4_4_;
  uStack_d0 = 0xffffffff;
  iStack_cc = local_d8._4_4_;
  local_c8._8_4_ = (undefined4)local_78;
  local_c8._0_8_ = auStack_88._8_8_;
  local_c8._12_4_ = local_78._4_4_;
  bVar4 = local_d8._4_4_ < (int)local_40;
  local_e8 = local_a0;
  local_78 = local_68;
  local_d8 = puStack_90;
  if (bVar4) {
    do {
      lVar8 = (longlong)iStack_cc;
      lVar2 = *local_e8;
      local_a8 = *(undefined4 *)(lVar2 + 8 + lVar8 * 0x18);
      lVar3 = *(longlong *)(lVar2 + lVar8 * 0x18);
      local_a4 = *(undefined4 *)(lVar2 + 0xc + lVar8 * 0x18);
      cVar5 = FWeakObjectPtr::IsValid(&local_a8);
      if ((cVar5 != '\0') && (lVar3 != 0)) {
        FUN_142b94eb0(param_1,lVar3);
      }
      uStack_d0 = uStack_d0 & ~uStack_dc;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_e0);
    } while (iStack_cc < (int)local_d8[6]);
    if (((char)local_b0 != '\0') && (local_b0._1_1_ != '\0')) {
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_b8,(int)local_b8[1] - *(int *)((longlong)local_b8 + 0x34),1);
    }
  }
  local_20 = 0;
  if (local_28 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_68);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b2ba88);
  return;
}



// FUNCTION 142b94200 FUN_142b94200 body=572 status=ok
// SIG undefined FUN_142b94200(void)

void FUN_142b94200(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  int local_98;
  uint uStack_94;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int iStack_70;
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
  
  uVar2 = *(uint *)(param_2 + 5);
  puVar1 = (uint *)(param_2 + 2);
  uStack_94 = 1;
  local_98 = 0;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar2 != 0) {
    puVar9 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar3 = *puVar9;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar7 = local_98 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar7;
      if (bVar4) goto LAB_142b942de;
      uVar3 = puVar9[lVar5 + 1];
    }
    uStack_94 = -uVar3 & uVar3;
    iVar7 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_84 = (iStack_80 - iVar7) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_142b942de:
      uStack_84 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_2 + 5);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar8 = uVar3 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar1;
  local_50 = param_2;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar3;
  if (uVar3 != uVar2) {
    puVar9 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar6 = puVar9[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar7 = (int)uVar3 >> 5;
    while (uVar6 == 0) {
      uVar8 = uVar8 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_142b943b5;
      uVar6 = puVar9[(longlong)iVar7 + 1];
      iVar7 = iVar7 + 1;
    }
    uVar6 = -uVar6 & uVar6;
    iVar7 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar6 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_84 = (uVar8 - iVar7) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_142b943b5:
      uStack_84 = uVar2;
    }
  }
  while( true ) {
    if ((uStack_5c == uStack_84) && (local_68 == puVar1)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) break;
    (**(code **)(*param_1 + 0x820))
              (param_1,*(undefined8 *)(*param_2 + (longlong)(int)uStack_5c * 0x10),param_3);
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
                    /* WARNING: Could not recover jumptable at 0x000142b94435. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x830))(param_1);
  return;
}



// FUNCTION 142b94440 FUN_142b94440 body=43 status=ok
// SIG undefined FUN_142b94440(void)

void FUN_142b94440(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  
  if (*(int *)(param_3 + 8) != 0) {
    plVar1 = (longlong *)0x0;
    if (DAT_146b2bb28 != 0) {
      plVar1 = DAT_146b2bb20;
    }
                    /* WARNING: Could not recover jumptable at 0x000142b94466. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x38))(plVar1,param_1,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 142b94470 FUN_142b94470 body=172 status=ok
// SIG undefined FUN_142b94470(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b94470(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  ulonglong local_18;
  
  if (param_2 != 0) {
    local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
    local_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    lVar1 = *(longlong *)(param_2 + 0x168);
    local_28 = _DAT_146b2ba30 & _DAT_146b2ba40;
    uStack_24 = uRam0000000146b2ba34 & uRam0000000146b2ba44;
    uStack_20 = uRam0000000146b2ba38 & uRam0000000146b2ba48;
    uStack_1c = uRam0000000146b2ba3c & uRam0000000146b2ba4c;
    local_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = uRam0000000146b2ba3c;
    if (lVar1 != 0) {
      local_48 = *(undefined4 *)(lVar1 + 0x210);
      uStack_44 = *(undefined4 *)(lVar1 + 0x214);
      uStack_40 = *(undefined4 *)(lVar1 + 0x218);
      uStack_3c = *(uint *)(lVar1 + 0x21c);
      local_38 = *(undefined4 *)(lVar1 + 0x220);
      uStack_34 = *(undefined4 *)(lVar1 + 0x224);
      uStack_30 = *(undefined4 *)(lVar1 + 0x228);
      uStack_2c = *(undefined4 *)(lVar1 + 0x22c);
      local_28 = *(uint *)(lVar1 + 0x230);
      uStack_24 = *(uint *)(lVar1 + 0x234);
      uStack_20 = *(uint *)(lVar1 + 0x238);
      uStack_1c = *(uint *)(lVar1 + 0x23c);
    }
    if (*(int *)(param_3 + 8) != 0) {
      plVar2 = (longlong *)0x0;
      if (DAT_146b2bb28 != 0) {
        plVar2 = DAT_146b2bb20;
      }
      local_58[0] = param_2;
      (**(code **)(*plVar2 + 0x38))(0,param_1,local_58,param_3);
    }
  }
  return;
}



// FUNCTION 142b94520 FUN_142b94520 body=172 status=ok
// SIG undefined FUN_142b94520(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b94520(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  ulonglong local_18;
  
  if (param_2 != 0) {
    local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
    local_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    lVar1 = *(longlong *)(param_2 + 0x168);
    local_28 = _DAT_146b2ba30 & _DAT_146b2ba40;
    uStack_24 = uRam0000000146b2ba34 & uRam0000000146b2ba44;
    uStack_20 = uRam0000000146b2ba38 & uRam0000000146b2ba48;
    uStack_1c = uRam0000000146b2ba3c & uRam0000000146b2ba4c;
    local_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = uRam0000000146b2ba3c;
    if (lVar1 != 0) {
      local_48 = *(undefined4 *)(lVar1 + 0x210);
      uStack_44 = *(undefined4 *)(lVar1 + 0x214);
      uStack_40 = *(undefined4 *)(lVar1 + 0x218);
      uStack_3c = *(uint *)(lVar1 + 0x21c);
      local_38 = *(undefined4 *)(lVar1 + 0x220);
      uStack_34 = *(undefined4 *)(lVar1 + 0x224);
      uStack_30 = *(undefined4 *)(lVar1 + 0x228);
      uStack_2c = *(undefined4 *)(lVar1 + 0x22c);
      local_28 = *(uint *)(lVar1 + 0x230);
      uStack_24 = *(uint *)(lVar1 + 0x234);
      uStack_20 = *(uint *)(lVar1 + 0x238);
      uStack_1c = *(uint *)(lVar1 + 0x23c);
    }
    if (*(int *)(param_3 + 8) != 0) {
      plVar2 = (longlong *)0x0;
      if (DAT_146b2bb38 != 0) {
        plVar2 = DAT_146b2bb30;
      }
      local_58[0] = param_2;
      (**(code **)(*plVar2 + 0x38))(0,param_1,local_58,param_3);
    }
  }
  return;
}



// FUNCTION 142b945d0 FUN_142b945d0 body=232 status=ok
// SIG undefined FUN_142b945d0(void)

void FUN_142b945d0(longlong *param_1)

{
  uint uVar1;
  BOOL BVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6e));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6e));
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 != 0) {
    plVar6 = (longlong *)param_1[0xf];
    if (0 < (int)uVar1) {
      uVar5 = (ulonglong)uVar1;
      do {
        if (((*plVar6 != 0) &&
            (iVar3 = (**(code **)(*param_1 + 0x338))(param_1), (iVar3 - 1U & 0xfffffffb) != 0)) &&
           ((**(code **)(*(longlong *)*plVar6 + 0x6f0))(), *plVar6 == param_1[5])) {
          param_1[5] = 0;
        }
        plVar6 = plVar6 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    lVar4 = FUN_142b8e790(param_1,0);
    param_1[5] = lVar4;
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (0x7fffffff < *(uint *)((longlong)param_1 + 0x84)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xf,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142b946b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6e));
  return;
}



// FUNCTION 142b946c0 FUN_142b946c0 body=163 status=ok
// SIG undefined FUN_142b946c0(void)

ulonglong FUN_142b946c0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong in_stack_00000028;
  
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\navigationsystem\\public\\NavigationData.h",
             0x337,L"Pure virtual not implemented (%s)",L"ANavigationData::ProjectPoint");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\navigationsystem\\public\\NavigationData.h",
             0x337,L"Pure virtual not implemented (%s)",L"ANavigationData::ProjectPoint");
  plVar4 = *(longlong **)(in_stack_00000028 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    uVar6 = (int)lVar5 - 1;
    uVar7 = (ulonglong)uVar6;
    if (uVar6 == 0) {
      uVar7 = (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        uVar7 = (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
    return uVar7 & 0xffffffffffffff00;
  }
  return in_stack_00000028 & 0xffffffffffffff00;
}



// FUNCTION 142b94770 FUN_142b94770 body=254 status=ok
// SIG undefined FUN_142b94770(void)

undefined8
FUN_142b94770(longlong param_1,undefined8 param_2,undefined8 param_3,float *param_4,longlong param_5
             ,undefined8 *param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 local_18;
  longlong local_10;
  
  if ((param_5 != 0) || (param_5 = *(longlong *)(param_1 + 0x28), param_5 != 0)) {
    if ((DAT_1468b5d90 == *param_4) &&
       ((DAT_1468b5d94 == param_4[1] && (DAT_1468b5d98 == param_4[2])))) {
      param_4 = (float *)(param_5 + 0x4a4);
    }
    local_18 = *param_6;
    local_10 = param_6[1];
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    cVar6 = (**(code **)(*(longlong *)(param_5 + 0x458) + 0x10))
                      ((longlong *)(param_5 + 0x458),param_2,param_3,param_4,&local_18,0);
    if (cVar6 != '\0') {
      uVar7 = 1;
      goto LAB_142b9480e;
    }
  }
  uVar7 = 0;
LAB_142b9480e:
  plVar4 = (longlong *)param_6[1];
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
    return uVar7;
  }
  return uVar7;
}



// FUNCTION 142b94870 ProjectPointToNavigation body=406 status=ok
// SIG undefined ProjectPointToNavigation(void)

undefined8 *
UNavigationSystemV1::ProjectPointToNavigation
          (undefined8 *param_1,undefined8 param_2,undefined8 *param_3,longlong param_4,
          undefined8 param_5,float *param_6)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  
  local_38 = *param_3;
  local_30 = *(undefined4 *)(param_3 + 1);
  local_28 = 0;
  lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_2,1);
  if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x138), lVar2 != 0)) {
    lVar3 = FUN_142ba9430();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && ((param_4 != 0 || (param_4 = FUN_142b8e790(lVar2,0), param_4 != 0)))) {
      if ((0.0001 < ABS(*param_6)) || ((0.0001 < ABS(param_6[1]) || (0.0001 < ABS(param_6[2]))))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      uVar4 = FUN_142b90120(local_48,param_4,param_2,param_5);
      if (bVar1) {
        param_6 = (float *)&DAT_1468b5d90;
      }
      FUN_142b94770(lVar2,param_3,&local_38,param_6,param_4,uVar4);
    }
  }
  *param_1 = local_38;
  *(undefined4 *)(param_1 + 1) = local_30;
  return param_1;
}



// FUNCTION 142b94a10 FUN_142b94a10 body=104 status=ok
// SIG undefined FUN_142b94a10(void)

void FUN_142b94a10(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = DAT_146b2ba28;
  if (DAT_146b2ba28 != (longlong *)0x0) {
    uVar2 = FUN_1424c8610();
    lVar3 = FUN_14203b180(uVar2);
    if (lVar3 != 0) {
      lVar4 = *plVar1 + 0x18;
      if (*plVar1 == 0) {
        lVar4 = 0;
      }
      FUN_1437879f0(lVar3,lVar4);
    }
    FUN_14370c150(*plVar1);
    FMemory::operator_delete(plVar1,8);
    DAT_146b2ba28 = (longlong *)0x0;
  }
  return;
}



// FUNCTION 142b94a80 FUN_142b94a80 body=48 status=ok
// SIG undefined FUN_142b94a80(void)

void FUN_142b94a80(longlong *param_1)

{
  (**(code **)(*param_1 + 0x750))();
  if ((longlong *)param_1[0xa1] != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142b94aa6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1[0xa1] + 8))();
    return;
  }
  return;
}



// FUNCTION 142b94ab0 FUN_142b94ab0 body=544 status=ok
// SIG undefined FUN_142b94ab0(void)

void FUN_142b94ab0(longlong *param_1,char param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint *puVar12;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  uint local_58;
  undefined4 uStack_54;
  longlong *local_50;
  longlong *local_48;
  uint uStack_40;
  uint uStack_3c;
  uint *puStack_38;
  undefined4 uStack_30;
  int iStack_2c;
  uint uStack_28;
  undefined4 uStack_24;
  
  uVar7 = (**(code **)(*param_1 + 0x148))();
  cVar4 = UWorld::IsGameWorld(uVar7);
  (**(code **)(*param_1 + 0x2f8))(param_1);
  uVar9 = 0;
  plVar2 = param_1 + 0x11;
  iVar1 = (int)param_1[0x16];
  puStack_38 = (uint *)(param_1 + 0x13);
  local_78 = 0;
  uStack_74 = 1;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar1 != 0) {
    puVar12 = (uint *)param_1[0x15];
    if ((uint *)param_1[0x15] == (uint *)0x0) {
      puVar12 = puStack_38;
    }
    uVar10 = *puVar12;
    uVar8 = uVar9;
    uVar11 = uVar9;
    while (uVar10 == 0) {
      iVar6 = (int)uVar8;
      uStack_60 = (int)uVar11 + 0x20;
      uVar11 = (ulonglong)uStack_60;
      local_78 = iVar6 + 1;
      uVar8 = (ulonglong)local_78;
      if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_142b94b9f;
      uVar10 = puVar12[(longlong)iVar6 + 1];
    }
    uStack_74 = -uVar10 & uVar10;
    iVar6 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    local_68._4_4_ = (uStack_60 - iVar6) + 0x1f;
    if (iVar1 < local_68._4_4_) {
LAB_142b94b9f:
      local_68._4_4_ = iVar1;
    }
  }
  uStack_30 = 0xffffffff;
  iStack_2c = local_68._4_4_;
  uStack_28 = uStack_60;
  uStack_24 = iStack_5c;
  uStack_40 = local_78;
  uStack_3c = uStack_74;
  uStack_70 = local_78;
  uStack_6c = uStack_74;
  local_58 = uStack_60;
  uStack_54 = iStack_5c;
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  bVar3 = local_68._4_4_ < iVar1;
  local_50 = plVar2;
  local_48 = plVar2;
  local_68 = puStack_38;
  if (bVar3) {
    do {
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    } while (iStack_5c < (int)local_68[6]);
  }
  TSet<TTuple<FInputSignature,FName>,TDefaultMapHashableKeyFuncs<FInputSignature,FName,0>,FDefaultSetAllocator>
  ::Empty(plVar2,0x20);
  *(undefined4 *)(param_1 + 0x6d) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x36c)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x6c,0);
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if ((*(int *)((longlong)param_1 + 0xe4) < 0) && (*(int *)((longlong)param_1 + 0xe4) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 0x1b,0);
  }
  uVar8 = uVar9;
  if (0 < (int)param_1[0xe]) {
    do {
      plVar2 = *(longlong **)(uVar9 + param_1[0xd]);
      if ((plVar2 != (longlong *)0x0) &&
         ((param_2 == '\0' || ((*(uint *)(plVar2 + 0x9a) >> 1 & 1) != 0)))) {
        if (cVar4 != '\0') {
          cVar5 = (**(code **)(*plVar2 + 0x708))(plVar2);
          if (cVar5 == '\0') goto LAB_142b94c9f;
        }
        (**(code **)(*plVar2 + 0x758))(plVar2);
      }
LAB_142b94c9f:
      uVar10 = (int)uVar8 + 1;
      uVar9 = uVar9 + 8;
      uVar8 = (ulonglong)uVar10;
    } while ((int)uVar10 < (int)param_1[0xe]);
  }
  return;
}



// FUNCTION 142b94cf0 FUN_142b94cf0 body=176 status=ok
// SIG undefined FUN_142b94cf0(void)

void FUN_142b94cf0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  
  lVar4 = param_2[1];
  uVar5 = *param_2;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 0x520);
  *(int *)(param_1 + 0x520) = iVar3 + 1;
  if (*(int *)(param_1 + 0x524) < iVar3 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0x518),iVar3);
  }
  puVar7 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x518));
  *puVar7 = uVar5;
  puVar7[1] = lVar4;
  plVar6 = (longlong *)param_2[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return;
}



// FUNCTION 142b94da0 RegisterArea body=272 status=ok
// SIG undefined RegisterArea(void)

void UNavArea::RegisterArea(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong local_28;
  undefined8 local_20;
  int local_18;
  
  if ((*(uint *)(param_1 + 8) >> 4 & 1) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    local_28 = 0;
    local_20 = 0;
    local_18 = -1;
    uVar2 = FUN_142ba9430();
    FUN_1417a5560(uVar2,&local_28,1,0x10,0);
    do {
      local_18 = local_18 + 1;
      if ((int)local_20 <= local_18) break;
    } while (*(longlong *)(local_28 + (longlong)local_18 * 8) == 0);
    do {
      if ((local_18 < 0) || ((int)local_20 <= local_18)) goto LAB_142b94e79;
      FUN_142b95360(*(undefined8 *)(local_28 + (longlong)local_18 * 8),uVar1);
      do {
        local_18 = local_18 + 1;
        if ((int)local_20 <= local_18) break;
      } while (*(longlong *)(local_28 + (longlong)local_18 * 8) == 0);
    } while( true );
  }
LAB_142b94e8b:
  if (-1 < (int)*(uint *)(param_1 + 0x3c)) {
    *(uint *)(param_1 + 0x3c) =
         (uint)*(ushort *)(param_1 + 0x40) | *(uint *)(param_1 + 0x3c) & 0xffff0000 | 0x80000000;
  }
  return;
LAB_142b94e79:
  if (local_28 != 0) {
    FMemory::Free(local_28);
  }
  goto LAB_142b94e8b;
}



// FUNCTION 142b94eb0 FUN_142b94eb0 body=985 status=ok
// SIG undefined FUN_142b94eb0(void)

void FUN_142b94eb0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  float *pfVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int local_res8 [2];
  undefined4 local_res10 [2];
  float local_b8;
  float local_b4;
  float local_b0;
  float local_a8;
  float local_a4;
  longlong *local_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  undefined4 local_50;
  
  local_res8[0] = (**(code **)(*param_2 + 0x20))(param_2);
  iVar3 = DAT_146687970;
  if (*(int *)(param_1 + 0x318) != *(int *)(param_1 + 0x344)) {
    lVar11 = *(longlong *)(param_1 + 0x350);
    if (*(longlong *)(param_1 + 0x350) == 0) {
      lVar11 = param_1 + 0x348;
    }
    iVar10 = *(int *)(lVar11 + ((longlong)*(int *)(param_1 + 0x358) - 1U & (longlong)local_res8[0])
                               * 4);
    if (iVar10 != -1) {
      lVar11 = *(longlong *)(param_1 + 0x310);
      do {
        if (*(int *)((longlong)iVar10 * 0x20 + lVar11) == local_res8[0]) {
          if (iVar10 != -1) {
            local_res8[0] = DAT_146687970;
            DAT_146687970 = DAT_146687970 + 1;
            (**(code **)(*param_2 + 0x28))(param_2,iVar3);
            lVar11 = (**(code **)(*param_2 + 0x30))(param_2);
            if (lVar11 == 0) {
LAB_142b94fee:
              lVar11 = 0;
            }
            else {
              lVar12 = FUN_1428e7a40();
              if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
                bVar9 = false;
              }
              else {
                bVar9 = true;
              }
              if (bVar9) {
                lVar11 = *(longlong *)(lVar11 + 0x118);
              }
              else {
                lVar12 = FUN_1428dfc70();
                if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
                  bVar9 = false;
                }
                else {
                  bVar9 = true;
                }
                if (!bVar9) goto LAB_142b94fee;
              }
            }
            if (lVar11 != 0) {
              local_res10[0] = 0;
              (**(code **)(*param_2 + 0x10))(param_2,&local_b8,&local_a8,local_res10);
              if (*(longlong *)(lVar11 + 0x168) == 0) {
                pfVar13 = (float *)&DAT_1468b5b70;
              }
              else {
                pfVar13 = (float *)(*(longlong *)(lVar11 + 0x168) + 0x210);
              }
              fVar4 = *pfVar13;
              fVar5 = pfVar13[1];
              fVar6 = pfVar13[2];
              fVar7 = pfVar13[3];
              local_b8 = local_b8 * pfVar13[8];
              local_b4 = local_b4 * pfVar13[9];
              local_b0 = local_b0 * pfVar13[10];
              fVar19 = pfVar13[0xb] * 0.0;
              local_50 = CONCAT31(local_50._1_3_,1);
              fVar15 = local_b0 * fVar5 - local_b4 * fVar6;
              fVar16 = local_b8 * fVar6 - local_b0 * fVar4;
              fVar17 = local_b4 * fVar4 - local_b8 * fVar5;
              fVar18 = fVar19 * fVar7 - fVar19 * fVar7;
              fVar15 = fVar15 + fVar15;
              fVar16 = fVar16 + fVar16;
              fVar17 = fVar17 + fVar17;
              fVar18 = fVar18 + fVar18;
              local_a8 = local_a8 * pfVar13[8];
              local_a4 = local_a4 * pfVar13[9];
              local_a0._0_4_ = local_a0._0_4_ * pfVar13[10];
              fVar20 = pfVar13[0xb] * 0.0;
              local_98 = (fVar17 * fVar5 - fVar16 * fVar6) + fVar7 * fVar15 + local_b8 + pfVar13[4];
              fStack_94 = (fVar15 * fVar6 - fVar17 * fVar4) + fVar7 * fVar16 + local_b4 + pfVar13[5]
              ;
              fStack_90 = (fVar16 * fVar4 - fVar15 * fVar5) + fVar7 * fVar17 + local_b0 + pfVar13[6]
              ;
              fStack_8c = (fVar18 * fVar7 - fVar18 * fVar7) + fVar7 * fVar18 + fVar19 + pfVar13[7];
              fVar15 = local_a0._0_4_ * fVar5 - local_a4 * fVar6;
              fVar16 = local_a8 * fVar6 - local_a0._0_4_ * fVar4;
              fVar17 = local_a4 * fVar4 - local_a8 * fVar5;
              fVar18 = fVar20 * fVar7 - fVar20 * fVar7;
              fVar15 = fVar15 + fVar15;
              fVar16 = fVar16 + fVar16;
              fVar17 = fVar17 + fVar17;
              fVar18 = fVar18 + fVar18;
              fStack_5c = (fVar17 * fVar5 - fVar16 * fVar6) + fVar7 * fVar15 + local_a8 + pfVar13[4]
              ;
              local_58 = (fVar15 * fVar6 - fVar17 * fVar4) + fVar7 * fVar16 + local_a4 + pfVar13[5];
              fStack_54 = (fVar16 * fVar4 - fVar15 * fVar5) + fVar7 * fVar17 + local_a0._0_4_ +
                          pfVar13[6];
              local_88 = (int *)CONCAT44(local_58,fStack_5c);
              uStack_80 = (float *)CONCAT44((fVar18 * fVar7 - fVar18 * fVar7) +
                                            fVar7 * fVar18 + fVar20 + pfVar13[7],fStack_54);
              local_68 = fStack_5c;
              if (local_98 <= fStack_5c) {
                local_68 = local_98;
              }
              fStack_64 = local_58;
              if (fStack_94 <= local_58) {
                fStack_64 = fStack_94;
              }
              fStack_60 = fStack_54;
              if (fStack_90 <= fStack_54) {
                fStack_60 = fStack_90;
              }
              if (fStack_5c <= local_98) {
                fStack_5c = local_98;
              }
              if (local_58 <= fStack_94) {
                local_58 = fStack_94;
              }
              if (fStack_54 <= fStack_90) {
                fStack_54 = fStack_90;
              }
              if ((*(byte *)(param_1 + 0x39a) & 0x20) != 0) {
                iVar3 = *(int *)(param_1 + 0x368);
                local_78 = CONCAT44(fStack_54,local_58);
                uVar14 = CONCAT44(fStack_64,local_68);
                uVar8 = CONCAT44(fStack_5c,fStack_60);
                uStack_70 = local_50;
                uStack_6c = 2;
                *(int *)(param_1 + 0x368) = iVar3 + 1;
                if (*(int *)(param_1 + 0x36c) < iVar3 + 1) {
                  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
                  ::ResizeGrow((longlong *)(param_1 + 0x360),iVar3);
                }
                lVar11 = *(longlong *)(param_1 + 0x360);
                puVar1 = (undefined8 *)((longlong)iVar3 * 0x20 + lVar11);
                *puVar1 = uVar14;
                puVar1[1] = uVar8;
                puVar2 = (undefined4 *)((longlong)iVar3 * 0x20 + 0x10 + lVar11);
                *puVar2 = (undefined4)local_78;
                puVar2[1] = local_78._4_4_;
                puVar2[2] = uStack_70;
                puVar2[3] = uStack_6c;
              }
            }
          }
          break;
        }
        iVar10 = *(int *)((longlong)iVar10 * 0x20 + 0x18 + lVar11);
      } while (iVar10 != -1);
    }
  }
  local_a8 = -NAN;
  local_a4 = 0.0;
  local_a0 = param_2;
  uVar14 = (**(code **)(*param_2 + 0x30))(param_2);
  FWeakObjectPtr::operator=(&local_a8,uVar14);
  local_88 = local_res8;
  uStack_80 = &local_a8;
  FUN_142b7e440((longlong *)(param_1 + 0x310),local_res10,&local_88,0);
  return;
}



// FUNCTION 142b95290 RegisterInvoker body=194 status=ok
// SIG undefined RegisterInvoker(void)

void UNavigationSystemV1::RegisterInvoker
               (longlong param_1,undefined8 param_2,float param_3,float param_4)

{
  longlong *plVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  undefined8 local_res8;
  undefined8 *local_res10;
  int local_res18 [4];
  
  fVar3 = 0.0;
  if ((0.0 <= param_3) && (fVar3 = param_3, 3.4e+38 <= param_3)) {
    fVar3 = 3.4e+38;
  }
  fVar4 = fVar3;
  if ((fVar3 <= param_4) && (fVar4 = param_4, 3.4e+38 <= param_4)) {
    fVar4 = 3.4e+38;
  }
  plVar1 = (longlong *)(param_1 + 0x180);
  local_res8 = param_2;
  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
  ::FindId(plVar1,local_res18,param_2);
  if ((local_res18[0] == -1) || (lVar2 = (longlong)local_res18[0] * 0x20 + *plVar1, lVar2 == 0)) {
    local_res10 = &local_res8;
    FUN_142b7e020(plVar1,local_res18,&local_res10,0);
    lVar2 = (longlong)local_res18[0] * 0x20 + *plVar1;
  }
  FWeakObjectPtr::operator=(lVar2 + 8,param_2);
  *(float *)(lVar2 + 0x10) = fVar3;
  *(float *)(lVar2 + 0x14) = fVar4;
  return;
}



// FUNCTION 142b95360 FUN_142b95360 body=385 status=ok
// SIG undefined FUN_142b95360(void)

void FUN_142b95360(longlong param_1,longlong *param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  longlong *plVar5;
  bool bVar6;
  longlong *local_res10;
  ulonglong local_res18 [2];
  longlong local_28 [2];
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  bVar6 = false;
  local_res18[0] = local_res18[0] & 0xffffffff00000000;
  if ((*(byte *)((longlong)param_2 + 0xb4) & 1) != 0) {
    return;
  }
  local_res10 = param_2;
  if ((*(uint *)((longlong)param_2 + 0xb4) >> 0x12 & 1) == 0) goto LAB_142b9546c;
  local_res18[0] = param_2[3];
  FName::ToString(local_res18,local_28);
  iVar2 = FUN_141592950(local_28,L"SKEL_",1,0,0xffffffff);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (iVar2 != -1) {
    return;
  }
  lVar3 = UObjectBaseUtility::GetOutermost(param_2);
  if (lVar3 == 0) {
LAB_142b9544f:
    bVar1 = false;
  }
  else {
    local_res18[0] = *(ulonglong *)(lVar3 + 0x18);
    FName::ToString(local_res18,local_28);
    bVar6 = true;
    iVar2 = FUN_141592950(local_28,L"/Developers/",1,0,0xffffffff);
    if (iVar2 == -1) goto LAB_142b9544f;
    bVar1 = true;
  }
  if ((bVar6) && (local_28[0] != 0)) {
    FMemory::Free();
  }
  if (bVar1) {
    return;
  }
LAB_142b9546c:
  piVar4 = (int *)TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId
                            (param_1 + 0x3c0,local_res18,param_2);
  if (*piVar4 == -1) {
    plVar5 = (longlong *)param_2[0x1f];
    if (plVar5 == (longlong *)0x0) {
      (**(code **)(*param_2 + 0x368))(param_2);
      plVar5 = (longlong *)param_2[0x1f];
    }
    (**(code **)(*plVar5 + 0x290))();
    FUN_1417a2a90(param_1 + 0x3c0,local_res18,&local_res10,0);
    FUN_142b91c40(param_1,param_2,0);
  }
  return;
}



// FUNCTION 142b954f0 FUN_142b954f0 body=1320 status=ok
// SIG undefined FUN_142b954f0(void)

int FUN_142b954f0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  BOOL BVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  float fVar13;
  longlong *local_res10;
  byte local_res18;
  longlong *local_res20;
  undefined1 local_f8 [16];
  undefined1 local_e8 [4];
  float local_e4;
  float local_e0;
  float local_dc;
  longlong local_c8;
  longlong local_90;
  longlong local_78;
  undefined1 *local_70;
  
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  iVar12 = *(int *)((longlong)param_2 + 0xc);
  if (iVar12 < (int)DAT_1469e91c4) {
    uVar9 = iVar12 >> 0x1f & 0xffff;
    uVar4 = iVar12 + uVar9;
    lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
            (longlong)(int)((uVar4 & 0xffff) - uVar9) * 0x18;
  }
  else {
    lVar6 = 0;
  }
  if ((*(uint *)(lVar6 + 8) >> 0x1d & 1) != 0) {
    return 1;
  }
  if ((*(byte *)(param_2 + 0xc2) & 1) != 0) {
    return 5;
  }
  local_res10 = param_2;
  BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f8));
  if (BVar5 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f8));
  }
  FNavDataConfig::FNavDataConfig(local_e8,param_2 + 0x8d);
  if ((local_e4 < 0.0) || (local_e0 < 0.0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((!bVar3) && (*(int *)(param_1 + 0x58) == 1)) {
    FNavDataConfig::operator=(local_e8,*(undefined8 *)(param_1 + 0x50));
    (**(code **)(*param_2 + 0x730))(param_2,*(undefined8 *)(param_1 + 0x50));
    FUN_142b97e50(param_2,1);
    FUN_142b94200(param_2,param_1 + 0x3c0,0);
  }
  if ((local_e4 < 0.0) || (local_e0 < 0.0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    plVar7 = (longlong *)(param_1 + 0x220);
    if (*(int *)(param_1 + 0x228) != *(int *)(param_1 + 0x254)) {
      lVar6 = *(longlong *)(param_1 + 0x260);
      if (*(longlong *)(param_1 + 0x260) == 0) {
        lVar6 = param_1 + 600;
      }
      iVar12 = *(int *)(lVar6 + ((((longlong)((int)(short)(int)local_e4 << 0x10) |
                                  (longlong)(short)(int)local_e0) ^ (longlong)(int)local_dc) &
                                (longlong)*(int *)(param_1 + 0x268) - 1U) * 4);
      if (iVar12 != -1) {
        lVar6 = *plVar7;
        fVar13 = local_dc;
        do {
          lVar11 = (longlong)iVar12 * 0x40;
          lVar10 = lVar11 + lVar6;
          if ((((5.0 <= ABS(*(float *)(lVar11 + 4 + lVar6) - local_e4)) ||
               (5.0 <= ABS(*(float *)(lVar10 + 8) - local_e0))) ||
              ((0.0 <= *(float *)(lVar10 + 0xc) &&
               ((0.0 <= fVar13 && (5.0 <= ABS(*(float *)(lVar10 + 0xc) - fVar13))))))) ||
             (cVar2 = FNavAgentProperties::IsNavDataMatching(lVar10,local_e8), fVar13 = local_dc,
             cVar2 == '\0')) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            if ((((iVar12 != -1) && (*plVar7 + lVar11 != 0)) && (*plVar7 + lVar11 != -0x30)) &&
               (plVar7 = (longlong *)FWeakObjectPtr::Get(), plVar7 != (longlong *)0x0)) {
              iVar12 = 2;
              if (plVar7 == param_2) {
                iVar12 = 5;
              }
              goto LAB_142b959a7;
            }
            break;
          }
          lVar6 = *plVar7;
          iVar12 = *(int *)(lVar11 + 0x38 + lVar6);
        } while (iVar12 != -1);
      }
    }
    lVar6 = FUN_142ba6e70();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      (**(code **)(*param_2 + 0x6f8))(param_2);
      iVar12 = 5;
    }
    else {
      iVar12 = 0;
      local_res18 = 0;
      if (0 < *(int *)(param_1 + 0x58)) {
        lVar6 = 0;
        do {
          lVar10 = *(longlong *)(param_1 + 0x50);
          lVar11 = param_2[2];
          if (*(longlong *)(lVar10 + 0x48 + lVar6) != 0) {
            lVar8 = FUN_1428dfc70();
            lVar10 = *(longlong *)(lVar10 + 0x48 + lVar6);
            for (lVar1 = lVar10; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
              if (lVar1 == lVar8) goto LAB_142b95852;
            }
          }
          lVar10 = 0;
LAB_142b95852:
          if (lVar11 == lVar10) {
            lVar10 = lVar6 + *(longlong *)(param_1 + 0x50);
            if ((((5.0 <= ABS(*(float *)(lVar6 + 4 + *(longlong *)(param_1 + 0x50)) - local_e4)) ||
                 (5.0 <= ABS(*(float *)(lVar10 + 8) - local_e0))) ||
                ((fVar13 = *(float *)(lVar10 + 0xc), 0.0 <= fVar13 &&
                 ((0.0 <= local_dc && (5.0 <= ABS(fVar13 - local_dc))))))) ||
               (cVar2 = FNavAgentProperties::IsNavDataMatching(), cVar2 == '\0')) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              local_res18 = 1;
              (**(code **)(*param_2 + 0x730))
                        (param_2,*(longlong *)(param_1 + 0x50) + (longlong)iVar12 * 0x68);
              FWeakObjectPtr::operator=(local_f8,param_2);
              local_70 = local_f8;
              local_78 = *(longlong *)(param_1 + 0x50) + (longlong)iVar12 * 0x68;
              FUN_142b7e6c0(param_1 + 0x220,&local_res20,&local_78,0);
              FUN_142b97e50(param_2,iVar12 == 0);
              FUN_142b94200(param_2,param_1 + 0x3c0,iVar12);
              local_res20 = param_2;
              TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                        (param_1 + 0xe8,&local_res20);
              TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
              AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x68,&local_res10);
              (**(code **)(*param_2 + 0x6f8))(param_2);
              break;
            }
          }
          iVar12 = iVar12 + 1;
          lVar6 = lVar6 + 0x68;
        } while (iVar12 < *(int *)(param_1 + 0x58));
      }
      iVar12 = (uint)local_res18 * 2 + 3;
    }
  }
  else {
    iVar12 = 3;
  }
LAB_142b959a7:
  if (local_90 != 0) {
    FMemory::Free();
  }
  if (local_c8 != 0) {
    FMemory::Free();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f8));
  return iVar12;
}



// FUNCTION 142b95a20 FUN_142b95a20 body=921 status=ok
// SIG undefined FUN_142b95a20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142b95a20(longlong *param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  undefined1 auStack_d8 [32];
  char local_b8;
  longlong *local_b0;
  longlong local_a8;
  undefined8 local_a0;
  uint local_98 [2];
  longlong local_90;
  longlong local_88;
  int local_80;
  int local_78;
  char local_74;
  int local_70;
  longlong local_68;
  longlong local_60;
  int local_58;
  undefined8 local_48;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_b0 = param_1;
  uVar8 = (**(code **)(*param_1 + 0x148))();
  local_b8 = '\0';
  local_a8 = FUN_142baab40();
  if (local_a8 != 0) {
    lVar9 = FUN_142baab40();
    lVar10 = local_a8;
    do {
      if (lVar10 == lVar9) goto LAB_142b95a90;
      lVar10 = *(longlong *)(lVar10 + 0x30);
    } while (lVar10 != 0);
  }
  local_a8 = 0;
LAB_142b95a90:
  local_98[0] = 5;
  local_40 = '\0';
  local_a0 = uVar8;
  FUN_14044bc80(&local_90,&local_a0,&local_a8);
  FUN_14045a130(local_98);
  cVar6 = '\0';
  iVar18 = local_78;
  lVar10 = local_68;
joined_r0x000142b95ac1:
  local_68 = lVar10;
  local_78 = iVar18;
  if (local_74 == '\0') {
    if (local_68 != 0) {
      iVar18 = *(int *)(local_68 + 0xc);
      if (iVar18 < (int)DAT_1469e91c4) {
        uVar14 = iVar18 >> 0x1f & 0xffff;
        uVar7 = iVar18 + uVar14;
        lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                 (longlong)(int)((uVar7 & 0xffff) - uVar14) * 0x18;
      }
      else {
        lVar10 = 0;
      }
      if (((*(uint *)(lVar10 + 8) >> 0x1d & 1) == 0) && ((*(byte *)(local_68 + 0x610) & 1) == 0)) {
        (**(code **)(*param_1 + 0x2e8))(param_1,local_68,0);
        local_b8 = '\x01';
      }
    }
    lVar9 = local_90;
    iVar18 = local_78 + 1;
    if (iVar18 < local_58 + local_80) {
      lVar17 = (longlong)iVar18 * 8;
      iVar16 = local_58;
      iVar15 = local_80;
      do {
        if (iVar18 < iVar15) {
          lVar10 = *(longlong *)(local_88 + lVar17);
        }
        else {
          lVar10 = *(longlong *)(local_60 + (longlong)(iVar18 - iVar15) * 8);
        }
        local_70 = local_70 + 1;
        if ((lVar10 != 0) &&
           (lVar11 = AActor::GetLevel(lVar10), iVar16 = local_58, iVar15 = local_80, lVar11 != 0)) {
          if ((local_98[0] & 1) != 0) {
            iVar1 = *(int *)(lVar10 + 0xc);
            if (iVar1 < (int)DAT_1469e91c4) {
              uVar14 = iVar1 >> 0x1f & 0xffff;
              uVar7 = iVar1 + uVar14;
              lVar12 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                       (longlong)(int)((uVar7 & 0xffff) - uVar14) * 0x18;
            }
            else {
              lVar12 = 0;
            }
            if ((*(uint *)(lVar12 + 8) >> 0x1d & 1) != 0) goto LAB_142b95cea;
          }
          if (((local_98[0] >> 1 & 1) == 0) ||
             (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(lVar10), iVar16 = local_58,
             iVar15 = local_80, cVar6 != '\0')) {
            if ((local_98[0] >> 2 & 1) != 0) {
              if (((*(byte *)(lVar11 + 0x204) & 0x10) == 0) &&
                 ((*(byte *)(lVar11 + 0x205) & 0x10) == 0)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              piVar2 = *(int **)(lVar11 + 600);
              if (((*(longlong *)(lVar11 + 0xc0) == 0) ||
                  (piVar13 = (int *)UWorld::GetActiveLevelCollection(), piVar13 == (int *)0x0)) ||
                 (piVar2 == piVar13)) {
                bVar3 = true;
              }
              else {
                bVar3 = false;
              }
              if ((piVar2 == (int *)0x0) || (*piVar2 == 2)) {
                bVar4 = true;
              }
              else {
                bVar4 = false;
              }
              if ((bVar3) || (bVar3 = false, bVar4)) {
                bVar3 = true;
              }
              iVar16 = local_58;
              iVar15 = local_80;
              if ((!bVar5) || (!bVar3)) goto LAB_142b95cea;
            }
            lVar11 = ULevel::GetWorld(lVar11);
            iVar16 = local_58;
            iVar15 = local_80;
            if (lVar11 == lVar9) {
              lVar11 = AActor::GetLevel(lVar10);
              param_1 = local_b0;
              cVar6 = local_b8;
              if (lVar11 == *(longlong *)(lVar9 + 0x30)) goto joined_r0x000142b95ac1;
              lVar11 = UVoipListenerSynthComponent::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              iVar16 = local_58;
              iVar15 = local_80;
              param_1 = local_b0;
              cVar6 = local_b8;
              if (!bVar5) goto joined_r0x000142b95ac1;
            }
          }
        }
LAB_142b95cea:
        iVar18 = iVar18 + 1;
        lVar17 = lVar17 + 8;
        if (iVar16 + iVar15 <= iVar18) break;
      } while( true );
    }
    local_68 = 0;
    local_74 = '\x01';
    param_1 = local_b0;
    cVar6 = local_b8;
  }
  if (local_40 != '\0') {
    local_40 = '\0';
    UWorld::RemoveOnActorSpawnedHandler(local_90,local_48);
    if (local_60 != 0) {
      FMemory::Free();
    }
    if (local_88 != 0) {
      FMemory::Free();
    }
  }
  if (cVar6 == '\x01') {
    (**(code **)(*param_1 + 0x2f0))(param_1);
  }
  return;
}



// FUNCTION 142b95dc0 Rehash body=554 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
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
  uVar9 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar9 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar9) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar9;
      do {
        uVar8 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar8 * 4) = 0xffffffff;
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
      uVar9 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar9 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar4) goto LAB_142b95eff;
        uVar9 = puVar12[lVar5 + 1];
      }
      uStack_54 = -uVar9 & uVar9;
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
LAB_142b95eff:
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
        lVar5 = (longlong)iStack_1c * 0x40 + *param_1;
        uVar9 = (((int)(short)(int)*(float *)(lVar5 + 4) << 0x10 |
                 (int)(short)(int)*(float *)(lVar5 + 8)) ^ (int)*(float *)(lVar5 + 0xc)) &
                (int)*plVar2 - 1U;
        *(uint *)(lVar5 + 0x3c) = uVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar5 + 0x38) =
             *(undefined4 *)
              ((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 142b95ff0 Rehash body=516 status=ok
// SIG undefined Rehash(void)

void TSet<FNavigationBounds,DefaultKeyFuncs<FNavigationBounds,0>,FDefaultSetAllocator>::Rehash
               (longlong *param_1)

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
  uint *puVar11;
  ulonglong uVar12;
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
      uVar12 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar11 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar11 = puStack_28;
      }
      uVar5 = *puVar11;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_142b9612f;
        uVar5 = puVar11[lVar6 + 1];
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
LAB_142b9612f:
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
        puVar11 = (uint *)((longlong)iStack_1c * 0x34 + *param_1);
        uVar5 = (int)*plVar2 - 1U & *puVar11;
        puVar11[0xc] = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        puVar11[0xb] = *(uint *)((longlong)plVar7 +
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



// FUNCTION 142b96200 Rehash body=522 status=ok
// SIG undefined Rehash(void)

void TSet<FNavigationDirtyElement,DefaultKeyFuncs<FNavigationDirtyElement,0>,FDefaultSetAllocator>::
     Rehash(longlong *param_1)

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
  uint *puVar11;
  ulonglong uVar12;
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
      uVar12 = (ulonglong)uVar8;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar9 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar11 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar11 = puStack_28;
      }
      uVar8 = *puVar11;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar8 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar4) goto LAB_142b9633f;
        uVar8 = puVar11[lVar5 + 1];
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
LAB_142b9633f:
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
        puVar11 = (uint *)((longlong)iStack_1c * 0x40 + *param_1);
        uVar8 = (puVar11[1] ^ *puVar11) & (int)*plVar2 - 1U;
        puVar11[0xf] = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        puVar11[0xe] = *(uint *)((longlong)plVar6 +
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



// FUNCTION 142b96440 FUN_142b96440 body=297 status=ok
// SIG undefined FUN_142b96440(void)

undefined8 FUN_142b96440(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  int *piVar8;
  int iVar9;
  ulonglong uVar10;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  plVar7 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar7 = param_1 + 7;
  }
  uVar10 = (longlong)(int)param_1[9] - 1;
  iVar9 = *(int *)((longlong)plVar7 + ((longlong)param_2 & uVar10) * 4);
  if (iVar9 != -1) {
    lVar3 = *param_1;
    do {
      lVar6 = (longlong)iVar9 * 0x20;
      if (*(int *)(lVar6 + lVar3) == param_2) {
        lVar6 = (longlong)iVar9 * 0x20;
        piVar8 = (int *)((longlong)plVar7 + ((longlong)*(int *)(lVar6 + 0x1c + lVar3) & uVar10) * 4)
        ;
        iVar2 = *piVar8;
        goto joined_r0x000142b964cd;
      }
      iVar9 = *(int *)(lVar6 + 0x18 + lVar3);
    } while (iVar9 != -1);
  }
  return 0;
joined_r0x000142b964cd:
  if (iVar2 == -1) {
LAB_142b964ef:
    bVar4 = (byte)iVar9 & 0x1f;
    if (*(int *)((longlong)param_1 + 0x34) != 0) {
      *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar9;
    }
    lVar3 = *param_1;
    uVar5 = 0xffffffff;
    *(undefined4 *)(lVar3 + lVar6) = 0xffffffff;
    if (0 < *(int *)((longlong)param_1 + 0x34)) {
      uVar5 = (undefined4)param_1[6];
    }
    *(undefined4 *)(lVar3 + 4 + lVar6) = uVar5;
    *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
    *(int *)(param_1 + 6) = iVar9;
    plVar7 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar7 = param_1 + 2;
    }
    puVar1 = (uint *)((longlong)plVar7 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4
                     );
    *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
    return 1;
  }
  if (iVar2 == iVar9) {
    *piVar8 = *(int *)(lVar6 + lVar3 + 0x18);
    goto LAB_142b964ef;
  }
  piVar8 = (int *)(lVar3 + 0x18 + (longlong)iVar2 * 0x20);
  iVar2 = *piVar8;
  goto joined_r0x000142b964cd;
}



// FUNCTION 142b96570 Remove body=375 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  int *piVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar6 = (((longlong)((int)(short)(int)*(float *)(param_2 + 4) << 0x10) |
           (longlong)(short)(int)*(float *)(param_2 + 8)) ^ (longlong)(int)*(float *)(param_2 + 0xc)
          ) & (longlong)((int)param_1[9] + -1);
  plVar4 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar4 = param_1 + 7;
  }
  piVar5 = (int *)((longlong)plVar4 + uVar6 * 4);
  iVar1 = *(int *)((longlong)plVar4 + uVar6 * 4);
  while( true ) {
    if (iVar1 == -1) {
      return 0;
    }
    lVar8 = (longlong)iVar1 * 0x40 + *param_1;
    cVar3 = FNavAgentProperties::operator==(lVar8,param_2);
    if (cVar3 != '\0') break;
    iVar1 = *(int *)(lVar8 + 0x38);
    piVar5 = (int *)(lVar8 + 0x38);
  }
  iVar1 = *piVar5;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar8 = *param_1;
    lVar9 = (longlong)iVar1 * 0x40;
    lVar7 = (longlong)(int)(*(uint *)(lVar9 + 0x3c + lVar8) & (int)param_1[9] - 1U);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    piVar5 = (int *)((longlong)plVar4 + lVar7 * 4);
    iVar2 = *(int *)((longlong)plVar4 + lVar7 * 4);
    while (iVar2 != -1) {
      if (iVar2 == iVar1) {
        *piVar5 = *(int *)(lVar9 + 0x38 + lVar8);
        break;
      }
      piVar5 = (int *)(lVar8 + 0x38 + (longlong)iVar2 * 0x40);
      iVar2 = *piVar5;
    }
  }
  if (*(longlong *)((longlong)iVar1 * 0x40 + *param_1 + 0x20) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,FSocketSubsystemSteam::FSteamP2PConnectionInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar1,1);
  return 1;
}



// FUNCTION 142b966f0 RemoveAtUninitialized body=175 status=ok
// SIG undefined RemoveAtUninitialized(void)

void TSparseArray<TSetElement<FNavigationBounds>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::RemoveAtUninitialized(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  
  uVar10 = (ulonglong)param_2;
  if (param_3 != 0) {
    bVar3 = (byte)param_2 & 0x1f;
    uVar11 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    lVar8 = uVar10 * 0x34;
    do {
      iVar9 = (int)uVar10;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x34 + *param_1) = iVar9;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + lVar8) = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar2 + 4 + lVar8) = uVar4;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar9;
      plVar7 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      lVar8 = lVar8 + 0x34;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 142b967a0 FUN_142b967a0 body=148 status=ok
// SIG undefined FUN_142b967a0(void)

void FUN_142b967a0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (((DAT_146b2ba28 != (longlong *)0x0) && (lVar1 = *DAT_146b2ba28, lVar1 != 0)) && (param_1 != 0)
     ) {
    iVar6 = *(int *)(lVar1 + 0x70);
    iVar5 = 0;
    if (0 < iVar6) {
      plVar3 = *(longlong **)(lVar1 + 0x68);
      while (*plVar3 != param_1) {
        iVar5 = iVar5 + 1;
        plVar3 = plVar3 + 1;
        if (iVar6 <= iVar5) {
          return;
        }
      }
      if (iVar5 < iVar6) {
        lVar4 = (longlong)iVar5 * 8;
        lVar7 = lVar4;
        do {
          lVar2 = *(longlong *)(lVar4 + *(longlong *)(lVar1 + 0x68));
          if (lVar2 == param_1) {
            iVar6 = iVar6 + -1;
            *(int *)(lVar1 + 0x70) = iVar6;
          }
          else {
            *(longlong *)(lVar7 + *(longlong *)(lVar1 + 0x68)) = lVar2;
            iVar5 = iVar5 + 1;
            iVar6 = *(int *)(lVar1 + 0x70);
            lVar7 = lVar7 + 8;
          }
          lVar4 = lVar4 + 8;
        } while (iVar5 < iVar6);
      }
    }
  }
  return;
}



// FUNCTION 142b96840 FUN_142b96840 body=37 status=ok
// SIG undefined FUN_142b96840(void)

void FUN_142b96840(longlong param_1)

{
  if (((DAT_146b2ba28 != (longlong *)0x0) && (*DAT_146b2ba28 != 0)) && (param_1 != 0)) {
    FUN_1438daad0(*DAT_146b2ba28,param_1);
    return;
  }
  return;
}



// FUNCTION 142b96870 FUN_142b96870 body=457 status=ok
// SIG undefined FUN_142b96870(void)

void FUN_142b96870(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong local_38;
  ulonglong local_30;
  int local_28;
  
  uVar11 = 0;
  local_28 = -1;
  local_38 = 0;
  local_30 = 0;
  uVar5 = FUN_142ba9430();
  FUN_1417a5560(uVar5,&local_38,1,0x10,0);
  uVar10 = local_30 & 0xffffffff;
  do {
    local_28 = local_28 + 1;
    if ((int)local_30 <= local_28) break;
  } while (*(longlong *)(local_38 + (longlong)local_28 * 8) == 0);
  do {
    do {
      if ((local_28 < 0) || ((int)uVar10 <= local_28)) {
        if (local_38 != 0) {
          FMemory::Free(local_38);
        }
        return;
      }
      lVar1 = *(longlong *)(local_38 + (longlong)local_28 * 8);
      iVar3 = TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove
                        (lVar1 + 0x3c0,param_1);
      if (0 < iVar3) {
        plVar9 = *(longlong **)(lVar1 + 0x68);
        uVar10 = (longlong)*(int *)(lVar1 + 0x70) & 0x1fffffffffffffff;
        if (plVar9 + *(int *)(lVar1 + 0x70) < plVar9) {
          uVar10 = uVar11;
        }
        uVar8 = uVar11;
        if (uVar10 != 0) {
          do {
            plVar2 = (longlong *)*plVar9;
            if ((plVar2 != (longlong *)0x0) && ((*(byte *)((longlong)plVar2 + 0x94) & 2) == 0)) {
              uVar4 = *(uint *)((longlong)plVar2 + 0xc);
              uVar6 = uVar11;
              if ((int)uVar4 < (int)DAT_1469e91c4) {
                uVar7 = uVar4 & 0xffff;
                if ((int)uVar4 < 0) {
                  uVar4 = uVar4 + 0xffff;
                  uVar7 = uVar7 - 0x10000;
                }
                uVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                        (longlong)(int)uVar7 * 0x18;
              }
              if ((*(uint *)(uVar6 + 8) >> 0x1d & 1) == 0) {
                (**(code **)(*plVar2 + 0x828))(plVar2,param_1);
                (**(code **)(*plVar2 + 0x830))(plVar2);
              }
            }
            plVar9 = plVar9 + 1;
            uVar8 = uVar8 + 1;
          } while (uVar8 != uVar10);
        }
      }
      uVar10 = local_30 & 0xffffffff;
      local_28 = local_28 + 1;
    } while ((int)local_30 <= local_28);
    do {
      if (*(longlong *)(local_38 + (longlong)local_28 * 8) != 0) break;
      local_28 = local_28 + 1;
    } while (local_28 < (int)local_30);
  } while( true );
}



// FUNCTION 142b96a40 RequestCustomLinkRegistering body=167 status=ok
// SIG undefined RequestCustomLinkRegistering(void)

void UNavigationSystemV1::RequestCustomLinkRegistering(undefined8 param_1,undefined8 param_2)

{
  BOOL BVar1;
  longlong lVar2;
  undefined1 local_res18 [8];
  undefined8 local_res20;
  undefined1 local_28 [8];
  undefined8 *local_20;
  undefined1 *local_18;
  
  lVar2 = FNavigationSystem::GetCurrent<UNavigationSystemV1>(param_2);
  if (lVar2 != 0) {
    FUN_142b94eb0(lVar2,param_1);
    return;
  }
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b2ba88);
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b2ba88);
  }
  FWeakObjectPtr::operator=(local_28,param_2);
  local_20 = &local_res20;
  local_18 = local_28;
  local_res20 = param_1;
  TSet<TTuple<INavLinkCustomInterface_*,FWeakObjectPtr>,TDefaultMapHashableKeyFuncs<INavLinkCustomInterface_*,FWeakObjectPtr,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<INavLinkCustomInterface_*_&&,FWeakObjectPtr_&&>_>
            (&DAT_146687a00,local_res18,&local_20,0);
                    /* WARNING: Could not recover jumptable at 0x000142b96ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b2ba88);
  return;
}



// FUNCTION 142b96af0 FUN_142b96af0 body=131 status=ok
// SIG undefined FUN_142b96af0(void)

void FUN_142b96af0(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  BOOL BVar2;
  longlong lVar3;
  
  lVar3 = FNavigationSystem::GetCurrent<UNavigationSystemV1>(param_2);
  if (lVar3 != 0) {
    uVar1 = (**(code **)(*param_1 + 0x20))(param_1);
    FUN_142b96440(lVar3 + 0x310,uVar1);
    return;
  }
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b2ba88);
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b2ba88);
  }
  TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
  ::Remove(&DAT_146687a00,param_1);
                    /* WARNING: Could not recover jumptable at 0x000142b96b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b2ba88);
  return;
}



// FUNCTION 142b96b80 FUN_142b96b80 body=325 status=ok
// SIG undefined FUN_142b96b80(void)

void FUN_142b96b80(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined8 local_38;
  longlong *local_30;
  undefined4 local_28;
  
  plVar4 = (longlong *)param_2[1];
  local_38 = *param_2;
  local_30 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  plVar4 = (longlong *)(param_1 + 0x538);
  local_28 = param_3;
  iVar6 = FUN_142b8c530(plVar4,&local_38);
  if (iVar6 == -1) {
    iVar6 = *(int *)(param_1 + 0x540);
    *(int *)(param_1 + 0x540) = iVar6 + 1;
    if (*(int *)(param_1 + 0x544) < iVar6 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar4,iVar6);
    }
    puVar3 = (undefined8 *)(*plVar4 + (longlong)iVar6 * 0x18);
    *puVar3 = local_38;
    puVar3[1] = local_30;
    *(undefined4 *)(puVar3 + 2) = local_28;
  }
  else if (local_30 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_30 + 0xc);
    iVar6 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)(*local_30 + 8))(local_30,1);
    }
  }
  plVar4 = (longlong *)param_2[1];
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
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return;
}



// FUNCTION 142b96cd0 FUN_142b96cd0 body=142 status=ok
// SIG undefined FUN_142b96cd0(void)

void FUN_142b96cd0(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  if (((((*(byte *)(param_1 + 0xc2) & 1) == 0) && ((*(uint *)(param_1 + 1) >> 4 & 1) == 0)) &&
      (lVar3 = (**(code **)(*param_1 + 0x148))(), lVar3 != 0)) &&
     (plVar1 = *(longlong **)(lVar3 + 0x138), plVar1 != (longlong *)0x0)) {
    lVar3 = FUN_142ba9430();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x2e8))
                (plVar1,param_1,CONCAT71((int7)((ulonglong)(lVar3 + 0x88) >> 8),1));
    }
  }
  return;
}



// FUNCTION 142b96d60 FUN_142b96d60 body=424 status=ok
// SIG undefined FUN_142b96d60(void)

void FUN_142b96d60(longlong param_1,undefined8 param_2,char param_3)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  BOOL BVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong **pplVar10;
  undefined8 local_res10 [2];
  longlong local_res20;
  longlong *local_58 [2];
  undefined1 local_48 [32];
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x370);
  local_res10[0] = param_2;
  BVar6 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar6 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (((*(uint *)(param_1 + 0x80) < 0x10) &&
      (TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
       AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x78,local_res10), param_3 != '\0'
      )) && ((*(byte *)(param_1 + 0x39a) & 8) != 0)) {
    plVar7 = (longlong *)FMemory::Realloc(0,0x30);
    local_58[0] = plVar7;
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = (longlong)&PTR_FUN_143f4d170;
      FWeakObjectPtr::operator=(plVar7 + 1,param_1);
      plVar7[2] = (longlong)&LAB_1404c2114;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar7[4] = lVar8;
      *plVar7 = (longlong)&PTR_FUN_143f4d1b8;
    }
    plVar9 = (longlong *)FUN_141d29000(local_48,0,0xff);
    lVar8 = *plVar9;
    pplVar10 = (longlong **)(lVar8 + 0x10);
    *pplVar10 = (longlong *)0x0;
    *(undefined4 *)(lVar8 + 0x18) = 0;
    if ((local_58 != pplVar10) && (plVar7 != (longlong *)0x0)) {
      (**(code **)(*plVar7 + 0x30))(plVar7,pplVar10);
    }
    *(undefined4 *)(lVar8 + 0x20) = 2;
    lVar8 = *plVar9;
    lVar5 = plVar9[2];
    lVar3 = plVar9[1];
    lVar4 = *(longlong *)(lVar8 + 0x30);
    piVar1 = (int *)(lVar4 + 0x48);
    if (lVar4 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      plVar7 = local_58[0];
    }
    local_res20 = lVar4;
    FUN_1409691d0(lVar8,lVar3,(int)lVar5,1);
    if (lVar4 != 0) {
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar7 = local_58[0];
      if (iVar2 == 1) {
        FGraphEvent::Recycle(local_res20);
        plVar7 = local_58[0];
      }
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x28))(plVar7,0);
      lVar8 = FMemory::Realloc(plVar7,0,0);
      if (lVar8 != 0) {
        FMemory::Free(lVar8);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142b96f01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 142b96f20 ResizeGrow body=266 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FStaticMeshBatch_const_*,TInlineAllocator<256,FDefaultAllocator>_>::ResizeGrow
               (void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x808);
  if (uVar1 < 0x101) {
    uVar2 = 0x100;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x80c) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 * 8,0);
    uVar2 = (uint)(uVar3 >> 3);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x80c) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0x800);
  if (uVar2 < 0x101) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 3);
    pvVar4 = *(void **)((longlong)param_1 + 0x800);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar2 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar2 << 3,0);
        *(void **)((longlong)param_1 + 0x800) = pvVar4;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 3);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 3;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x800) = uVar5;
  return;
}



// FUNCTION 142b97030 FUN_142b97030 body=845 status=ok
// SIG undefined FUN_142b97030(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142b97030(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong **pplVar2;
  int iVar3;
  longlong *plVar4;
  double dVar5;
  bool bVar6;
  byte bVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  uint uVar11;
  longlong *plVar12;
  undefined4 uVar13;
  undefined1 auStack_1c8 [32];
  uint local_1a8;
  longlong *local_198;
  longlong *plStack_190;
  longlong *local_188;
  longlong *local_180;
  int local_178;
  longlong local_170;
  undefined4 local_168;
  LARGE_INTEGER local_160;
  LARGE_INTEGER local_158;
  undefined1 local_150 [8];
  undefined1 local_148 [128];
  undefined1 local_c8 [128];
  longlong *local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  if (param_2 == 0) {
    return;
  }
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  lVar8 = (**(code **)(*param_1 + 0x148))();
  if ((lVar8 != 0) && (lVar8 = *(longlong *)(lVar8 + 0x138), lVar8 != 0)) {
    lVar9 = FUN_142ba9430();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_142b970c3;
  }
  lVar8 = 0;
LAB_142b970c3:
  QueryPerformanceCounter(&local_160);
  dVar5 = (double)local_160.QuadPart * DAT_1468b02f8;
  (**(code **)(*param_1 + 0x6e8))(param_1,local_148,param_2);
  uVar11 = *(uint *)((longlong)param_1 + 0x4d4);
  uVar10 = FUN_142b80820(local_c8,local_148);
  local_1a8 = uVar11 >> 2 & 1;
  FUN_142b8c9f0(lVar8,&local_188,param_1 + 0x90,uVar10);
  QueryPerformanceCounter(&local_158);
  *(float *)(param_1 + 0x9d) = (float)((double)local_158.QuadPart * DAT_1468b02f8 - dVar5) * 1e+06;
  if (((local_178 == 1) || (local_188 == (longlong *)0x0)) ||
     ((*(uint *)(local_188 + 0x13) >> 2 & 1) == 0)) {
    uVar11 = 0;
  }
  else {
    uVar11 = 2;
  }
  *(uint *)((longlong)param_1 + 0x4e4) = *(uint *)((longlong)param_1 + 0x4e4) & 0xfffffffd;
  uVar11 = *(uint *)((longlong)param_1 + 0x4e4) & 0xfffffffe | uVar11 | (uint)(local_178 == 3);
  *(uint *)((longlong)param_1 + 0x4e4) = uVar11;
  if (local_178 == 3) {
    bVar7 = (byte)(*(uint *)(local_188 + 0x13) >> 3);
  }
  else {
    bVar7 = 0;
  }
  pplVar2 = (longlong **)(param_1 + 0xa4);
  local_198 = local_188;
  *(uint *)((longlong)param_1 + 0x4e4) = ((uint)bVar7 << 2 ^ uVar11) & 4 ^ uVar11;
  if (local_180 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_180 + 1) = (int)local_180[1] + 1;
    UNLOCK();
  }
  plVar12 = local_180;
  if (&local_198 != pplVar2) {
    local_198 = *pplVar2;
    plVar12 = (longlong *)param_1[0xa5];
    local_48 = local_188;
    plStack_40 = local_180;
    *pplVar2 = local_188;
    param_1[0xa5] = (longlong)local_180;
  }
  plStack_190 = plVar12;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar12 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_190 + 8))(plStack_190,1);
      }
    }
  }
  plVar12 = local_180;
  uVar11 = *(uint *)((longlong)param_1 + 0x4e4);
  if ((uVar11 & 1) == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = (**(code **)(*local_188 + 0x30))(local_188,0);
    uVar11 = *(uint *)((longlong)param_1 + 0x4e4);
  }
  *(undefined4 *)((longlong)param_1 + 0x4ec) = uVar13;
  if ((uVar11 & 1) != 0) {
    local_170 = 0;
    local_168 = 0;
    if (((param_1 + 0xa6 != &local_170) && ((int)param_1[0xa7] != 0)) &&
       (plVar4 = (longlong *)param_1[0xa6], plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x30))(plVar4,&local_170);
    }
    TBaseMulticastDelegate<void>::Add(*pplVar2 + 0x10,local_150,&local_170);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_170);
    if (0.0 < *(float *)((longlong)param_1 + 0x50c)) {
      FUN_142ba0fe0(*pplVar2);
    }
  }
  plVar4 = local_180;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar12 + 1;
    lVar8 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_180)(local_180);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_180 + 8))(local_180,1);
      }
    }
  }
  FPathFindingQuery::~FPathFindingQuery(local_148);
  return;
}



// FUNCTION 142b97380 FUN_142b97380 body=43 status=ok
// SIG undefined FUN_142b97380(void)

void FUN_142b97380(longlong param_1,undefined8 param_2)

{
  FUN_141763960();
  FUN_142b83740(param_2,param_1 + 0x28);
  return;
}



// FUNCTION 142b973b0 FUN_142b973b0 body=43 status=ok
// SIG undefined FUN_142b973b0(void)

void FUN_142b973b0(longlong param_1,undefined8 param_2)

{
  FUN_141763960();
  FUN_142b83da0(param_2,param_1 + 0x28);
  return;
}



// FUNCTION 142b973e0 Serialize body=34 status=ok
// SIG undefined Serialize(void)

void UNavArea::Serialize(longlong param_1,longlong param_2)

{
  if ((*(byte *)(param_2 + 0x28) & 2) != 0) {
    if (-1 < (int)*(uint *)(param_1 + 0x3c)) {
      *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 0x80000000;
    }
  }
  FUN_141763960();
  return;
}



// FUNCTION 142b97410 FUN_142b97410 body=751 status=ok
// SIG undefined FUN_142b97410(void)

void FUN_142b97410(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  char local_res8 [8];
  int local_res10 [2];
  int local_res18 [4];
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 **local_48;
  undefined8 ***local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  FUN_141763960();
  uVar5 = (**(code **)(*param_2 + 0x90))(param_2);
  plVar1 = (longlong *)param_2[1];
  local_res10[0] = 4;
  local_res18[0] = -0x5dc80dc9;
  if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_res18,4);
    }
  }
  else {
    local_res18[0] = *(int *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if (local_res18[0] == -0x5dc80dc9) {
    plVar1 = (longlong *)param_2[1];
    if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res10,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_res10,4);
      }
    }
    else {
      local_res10[0] = *(int *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
  }
  else {
    local_res10[0] = 1;
    (**(code **)(*param_2 + 0xa8))(param_2,uVar5);
  }
  local_38 = 0;
  local_30 = 0;
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(&local_58,param_2);
  local_48 = &local_58;
  local_40 = &local_48;
  FUN_141661f40(&local_48,&local_38);
  FBinaryArchiveFormatter::~FBinaryArchiveFormatter(&local_58);
  local_res8[0] = param_2[0xe] != 0;
  (**(code **)(*param_2 + 8))(param_2,local_res8);
  if ((local_res8[0] == '\0') && ((*(byte *)(param_2 + 5) & 1) != 0)) {
    puVar6 = (undefined8 *)UObjectBaseUtility::GetFullName(param_1,&local_58,0);
    puVar7 = &DAT_143f3eda8;
    if (*(int *)(puVar6 + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*puVar6;
    }
    LowLevelFatalErrorHandler
              ("Unknown",0x1bf,
               L"This platform requires cooked packages, and NavCollision data was not cooked into %s."
               ,puVar8);
    if (local_58 != (undefined8 *)0x0) {
      FMemory::Free();
    }
    puVar6 = (undefined8 *)UObjectBaseUtility::GetFullName(param_1,&local_58,0);
    if (*(int *)(puVar6 + 1) != 0) {
      puVar7 = (undefined2 *)*puVar6;
    }
    FDebug::AssertFailed
              (&DAT_1457c9e8a,"Unknown",0x1bf,
               L"This platform requires cooked packages, and NavCollision data was not cooked into %s."
               ,puVar7);
    if (local_58 != (undefined8 *)0x0) {
      FMemory::Free();
    }
  }
  uVar5 = DAT_146b2ba80;
  uVar4 = *(uint *)(param_1 + 0xa8) & 1;
  if ((uVar4 == 0) && ((*(int *)(param_1 + 0x88) != 0 || (*(int *)(param_1 + 0x98) != 0)))) {
    bVar2 = false;
LAB_142b97622:
    if ((*(int *)(param_1 + 0x98) < 1) && (*(int *)(param_1 + 0x88) < 1)) {
      bVar3 = false;
      goto LAB_142b9763a;
    }
  }
  else {
    bVar2 = true;
    if (uVar4 == 0) goto LAB_142b97622;
  }
  bVar3 = true;
LAB_142b9763a:
  if (local_res8[0] != '\0') {
    if (3 < local_res10[0]) {
      bVar2 = bVar3;
    }
    if (bVar2) {
      if (param_2[0xe] == 0) {
        FUN_141722260(param_1 + 0xc0,param_2,param_1,0,1,0);
      }
      else {
        FUN_142b8e470(param_1,DAT_146b2ba80);
        local_58 = (undefined8 *)0x0;
        local_50 = 1;
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_58,0);
        *local_58 = uVar5;
        FUN_141722260(param_1 + 0xc0,param_2,param_1,&local_58,1,0);
        if (local_58 != (undefined8 *)0x0) {
          FMemory::Free();
        }
      }
    }
  }
  if (1 < local_res10[0]) {
    (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0xa0);
  }
  return;
}



// FUNCTION 142b97700 SetCrowdManager body=225 status=ok
// SIG undefined SetCrowdManager(void)

void UNavigationSystemV1::SetCrowdManager(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  
  param_1 = param_1 + 0x120;
  lVar4 = FWeakObjectPtr::Get(param_1);
  if (param_2 != lVar4) {
    cVar2 = FWeakObjectPtr::IsValid(param_1);
    lVar4 = 0;
    if (cVar2 != '\0') {
      lVar5 = FWeakObjectPtr::Get(param_1);
      iVar1 = *(int *)(lVar5 + 0xc);
      lVar5 = lVar4;
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar6 = iVar1 >> 0x1f & 0xffff;
        uVar3 = iVar1 + uVar6;
        lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
      }
      *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) & 0xbfffffff;
    }
    FWeakObjectPtr::operator=(param_1,param_2);
    if (param_2 != 0) {
      lVar5 = FWeakObjectPtr::Get(param_1);
      iVar1 = *(int *)(lVar5 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar6 = iVar1 >> 0x1f & 0xffff;
        uVar3 = iVar1 + uVar6;
        lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
      }
      *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) | 0x40000000;
    }
  }
  return;
}



// FUNCTION 142b977f0 FUN_142b977f0 body=397 status=ok
// SIG undefined FUN_142b977f0(void)

void FUN_142b977f0(longlong param_1,longlong param_2,float param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 local_38 [8];
  longlong *local_30;
  
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x9c);
  if (cVar5 != '\0') {
    cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x40);
    FWeakObjectPtr::operator=(param_1 + 0x40,param_2);
    if (param_2 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = UNavAgentInterface::GetPrivateStaticClass();
      uVar6 = UObjectBaseUtility::GetInterfaceAddress(param_2,uVar6);
    }
    *(undefined8 *)(param_1 + 0x48) = uVar6;
    *(float *)(param_1 + 0xe4) = param_3 * param_3;
    FUN_142b9a660(param_1);
    if (cVar5 == '\0') {
      puVar7 = (undefined8 *)
               TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_38);
      plVar4 = (longlong *)puVar7[1];
      uVar6 = *puVar7;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      lVar8 = FWeakObjectPtr::Get(param_1 + 0x9c);
      if (*(int *)(lVar8 + 0x530) == 0) {
        *(undefined4 *)(lVar8 + 0x548) = *(undefined4 *)(lVar8 + 0x4d8);
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
      }
      iVar3 = *(int *)(lVar8 + 0x530);
      *(int *)(lVar8 + 0x530) = iVar3 + 1;
      if (*(int *)(lVar8 + 0x534) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(lVar8 + 0x528),iVar3);
      }
      puVar7 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar8 + 0x528));
      *puVar7 = uVar6;
      puVar7[1] = plVar4;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
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
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_30 + 1;
        lVar8 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
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
    }
  }
  return;
}



// FUNCTION 142b97980 FUN_142b97980 body=484 status=ok
// SIG undefined FUN_142b97980(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142b97980(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *plStack_50;
  longlong local_48;
  undefined4 local_40;
  undefined8 local_38;
  longlong local_30;
  longlong *plStack_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  lVar5 = *param_2;
  plVar1 = (longlong *)(param_1 + 0x60);
  lVar6 = *plVar1;
  if (lVar6 != lVar5) {
    lVar8 = lVar5;
    if (lVar6 != 0) {
      TBaseMulticastDelegate<void>::Remove(lVar6 + 0x80,*(undefined8 *)(param_1 + 0x80));
      lVar8 = *param_2;
    }
    plVar7 = (longlong *)param_2[1];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    local_58 = lVar8;
    plStack_50 = plVar7;
    if (&local_58 != plVar1) {
      local_58 = *plVar1;
      plStack_50 = *(longlong **)(param_1 + 0x68);
      *plVar1 = lVar8;
      *(longlong **)(param_1 + 0x68) = plVar7;
      local_30 = lVar8;
      plStack_28 = plVar7;
    }
    plVar1 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar7 = plStack_50 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    uVar9 = 0;
    if (lVar5 == 0) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      if (*(int *)(param_1 + 0x44) < 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                  (param_1 + 0x38,0);
      }
    }
    else {
      local_48 = 0;
      local_40 = 0;
      if ((((longlong *)(param_1 + 0x70) != &local_48) && (*(int *)(param_1 + 0x78) != 0)) &&
         (plVar1 = *(longlong **)(param_1 + 0x70), plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x30))(plVar1,&local_48);
      }
      TBaseMulticastDelegate<void>::Add(lVar5 + 0x80,&local_38,&local_48);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_48);
      cVar4 = *(char *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x80) = local_38;
      if (cVar4 != '\0') {
        *(uint *)(lVar5 + 0x98) = *(uint *)(lVar5 + 0x98) & 0xffffffef;
        if (cVar4 == '\x01') {
          uVar9 = 0x10;
        }
        *(uint *)(lVar5 + 0x98) = *(uint *)(lVar5 + 0x98) | uVar9;
      }
      UNavigationPath::SetPathPointsFromPath(param_1,lVar5);
    }
    UNavigationPath::OnPathEvent(param_1,lVar5,lVar5 != 0);
  }
  plVar1 = (longlong *)param_2[1];
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar1 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar1 + 8))(plVar1,1);
      }
    }
  }
  return;
}



// FUNCTION 142b97b70 SetPathPointsFromPath body=161 status=ok
// SIG undefined SetPathPointsFromPath(void)

void UNavigationPath::SetPathPointsFromPath(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = (longlong *)(param_1 + 0x38);
  iVar2 = *(int *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) < iVar2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (plVar1);
  }
  puVar5 = *(undefined8 **)(param_2 + 0x28);
  puVar4 = puVar5 + (longlong)*(int *)(param_2 + 0x30) * 4;
  for (; puVar5 != puVar4; puVar5 = puVar5 + 4) {
    iVar2 = *(int *)(param_1 + 0x40);
    *(int *)(param_1 + 0x40) = iVar2 + 1;
    if (*(int *)(param_1 + 0x44) < iVar2 + 1) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
    }
    lVar3 = *plVar1;
    *(undefined8 *)(lVar3 + (longlong)iVar2 * 0xc) = *puVar5;
    *(undefined4 *)(lVar3 + (longlong)iVar2 * 0xc + 8) = *(undefined4 *)(puVar5 + 1);
  }
  return;
}



// FUNCTION 142b97c20 SetSourceActor body=80 status=ok
// SIG undefined SetSourceActor(void)

void FNavigationPath::SetSourceActor(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FWeakObjectPtr::operator=(param_1 + 0x50);
  if (param_2 != 0) {
    uVar1 = UNavAgentInterface::GetPrivateStaticClass();
    uVar1 = UObjectBaseUtility::GetInterfaceAddress(param_2,uVar1);
    *(undefined8 *)(param_1 + 0x58) = uVar1;
    return;
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  return;
}



// FUNCTION 142b97c70 SetSupportedAgentsNavigationClass body=467 status=ok
// SIG undefined SetSupportedAgentsNavigationClass(void)

void UNavigationSystemV1::SetSupportedAgentsNavigationClass
               (longlong param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 local_48;
  longlong local_40 [2];
  undefined8 local_30;
  undefined1 local_28 [16];
  
  lVar6 = *(longlong *)(param_1 + 0x50);
  lVar7 = 0;
  lVar8 = (longlong)param_2 * 0x68;
  lVar4 = lVar7;
  if (param_3 != 0) {
    lVar1 = FUN_142baab40();
    lVar2 = param_3;
    do {
      lVar4 = param_3;
      if (lVar2 == lVar1) break;
      lVar2 = *(longlong *)(lVar2 + 0x30);
      lVar4 = lVar7;
    } while (lVar2 != 0);
  }
  *(longlong *)(lVar6 + 0x48 + lVar8) = lVar4;
  lVar6 = lVar7;
  if (param_3 != 0) {
    lVar2 = FUN_142baab40();
    lVar4 = param_3;
    do {
      lVar6 = param_3;
      if (lVar4 == lVar2) break;
      lVar4 = *(longlong *)(lVar4 + 0x30);
      lVar6 = lVar7;
    } while (lVar4 != 0);
  }
  lVar4 = *(longlong *)(param_1 + 0x50);
  lVar2 = lVar7;
  if (lVar6 != 0) {
    lVar3 = FUN_1428dfc70();
    lVar1 = lVar6;
    do {
      lVar2 = lVar6;
      if (lVar1 == lVar3) break;
      lVar1 = *(longlong *)(lVar1 + 0x30);
      lVar2 = lVar7;
    } while (lVar1 != 0);
  }
  FSoftObjectPath::FSoftObjectPath(&local_48,lVar2);
  local_30 = local_48;
  FString::FString(local_28,local_40);
  FSoftObjectPath::operator=(lVar4 + 0x18 + lVar8,&local_30);
  if (local_40[0] != 0) {
    FMemory::Free();
  }
  if (param_3 != 0) {
    lVar4 = FUN_142baab40();
    lVar6 = param_3;
    do {
      if (lVar6 == lVar4) {
        lVar4 = FUN_142baab40();
        lVar6 = param_3;
        goto LAB_142b97de0;
      }
      lVar6 = *(longlong *)(lVar6 + 0x30);
    } while (lVar6 != 0);
  }
  lVar6 = *(longlong *)(param_1 + 0x50) + lVar8;
  *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x50 + lVar8) = 0;
  *(undefined4 *)(lVar6 + 0x60) = 0;
  if (0x7fffffff < *(uint *)(lVar6 + 100)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(lVar6 + 0x58,0);
  }
  if (*(undefined2 **)(lVar6 + 0x58) == (undefined2 *)0x0) {
    return;
  }
  **(undefined2 **)(lVar6 + 0x58) = 0;
  return;
  while (lVar6 = *(longlong *)(lVar6 + 0x30), lVar2 = lVar7, lVar6 != 0) {
LAB_142b97de0:
    lVar2 = param_3;
    if (lVar6 == lVar4) break;
  }
  lVar6 = *(longlong *)(param_1 + 0x50);
  puVar5 = (undefined8 *)FSoftObjectPath::FSoftObjectPath(&local_48,lVar2);
  local_30 = *puVar5;
  FString::FString(local_28,puVar5 + 1);
  FSoftObjectPath::operator=(lVar6 + 0x50 + lVar8,&local_30);
  if (local_40[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142b97e50 FUN_142b97e50 body=55 status=ok
// SIG undefined FUN_142b97e50(void)

void FUN_142b97e50(longlong param_1,byte param_2)

{
  *(uint *)(param_1 + 0x610) = *(uint *)(param_1 + 0x610) & 0xfffffffd;
  *(uint *)(param_1 + 0x610) = *(uint *)(param_1 + 0x610) | (uint)param_2 + (uint)param_2;
  if ((*(uint *)(param_1 + 0x4d0) & 1) != (uint)param_2) {
    *(uint *)(param_1 + 0x4d0) = *(uint *)(param_1 + 0x4d0) & 0xfffffffe | (uint)param_2;
    FUN_142236cd0();
    return;
  }
  return;
}



// FUNCTION 142b97e90 FUN_142b97e90 body=564 status=ok
// SIG undefined FUN_142b97e90(void)

void FUN_142b97e90(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  byte bVar7;
  char local_res8 [8];
  undefined **local_d8;
  longlong *local_d0;
  byte local_af;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  char local_30;
  
  if ((((*(byte *)(param_1 + 0x28) & 2) == 0) && (param_2 != 0)) &&
     (((*(int *)(param_1 + 0xb8) != *(int *)(param_2 + 0xfc) ||
       *(int *)(param_1 + 0xb4) != *(int *)(param_2 + 0xf8)) ||
      *(int *)(param_1 + 0xb0) != *(int *)(param_2 + 0xf4)) ||
      *(int *)(param_1 + 0xac) != *(int *)(param_2 + 0xf0))) {
    uVar1 = *(undefined4 *)(param_2 + 0xf4);
    uVar2 = *(undefined4 *)(param_2 + 0xf8);
    uVar3 = *(undefined4 *)(param_2 + 0xfc);
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0xf0);
    *(undefined4 *)(param_1 + 0xb0) = uVar1;
    *(undefined4 *)(param_1 + 0xb4) = uVar2;
    *(undefined4 *)(param_1 + 0xb8) = uVar3;
    UNavCollision::ClearCollision(param_1);
    lVar5 = FUN_142b8e470(param_1,DAT_146b2ba80);
    if ((((*(byte *)(param_1 + 0xa8) & 2) == 0) && (lVar5 != 0)) && (*(int *)(lVar5 + 0x40) == 0)) {
      uVar6 = FUN_14171efb0(lVar5,1);
      iVar4 = FUntypedBulkData::GetBulkDataSize(lVar5);
      FArchive::FArchive(&local_d8);
      local_d8 = &PTR__scalar_deleting_destructor__143f600f0;
      local_40 = 0;
      bVar7 = 0;
      local_30 = '\0';
      local_48 = uVar6;
      local_38 = (longlong)iVar4;
      FArchive::SetIsLoading(&local_d8,1);
      FArchive::SetIsPersistent(&local_d8,0);
      local_d8 = &PTR__scalar_deleting_destructor__143f60308;
      local_res8[0] = '\x01';
      if ((char *)local_d0[1] < (char *)*local_d0 + 1) {
        FBufferReaderBase::Serialize(&local_d8,local_res8,1);
      }
      else {
        local_res8[0] = *(char *)*local_d0;
        *local_d0 = *local_d0 + 1;
      }
      if (local_res8[0] == '\0') {
        bVar7 = 0x10;
      }
      local_af = bVar7 | local_af & 0xef;
      FUN_1408bddc0(&local_d8,param_1 + 0x30);
      FUN_1408bda20(&local_d8,param_1 + 0x40);
      FUN_1408bddc0(&local_d8,param_1 + 0x50);
      FUN_1408bda20(&local_d8,param_1 + 0x60);
      FUN_1408bda20(&local_d8,param_1 + 0x70);
      FUntypedBulkData::Unlock(lVar5);
      local_d8 = &PTR__scalar_deleting_destructor__143f600f0;
      if (local_30 != '\0') {
        FMemory::Free(local_48);
        local_48 = 0;
      }
      FArchive::~FArchive(&local_d8);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 2;
    }
  }
  return;
}



// FUNCTION 142b980d0 FUN_142b980d0 body=294 status=ok
// SIG undefined FUN_142b980d0(void)

undefined8 FUN_142b980d0(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  lVar4 = (**(code **)(*param_1 + 0x148))();
  lVar5 = DAT_146b17150;
  if ((lVar4 == 0) || (plVar8 = *(longlong **)(lVar4 + 0x138), plVar8 == (longlong *)0x0)) {
    if (*(longlong *)(DAT_146b17150 + 0x1b0) == 0) {
      return 0;
    }
    lVar6 = FUN_1429c1c30();
    lVar1 = DAT_146b17150;
    lVar4 = *(longlong *)(lVar5 + 0x1b0);
    while( true ) {
      if (lVar4 == 0) {
        return 0;
      }
      if (lVar4 == lVar6) break;
      lVar4 = *(longlong *)(lVar4 + 0x30);
    }
    if (*(longlong *)(lVar5 + 0x1b0) == 0) {
      return 0;
    }
    if (*(longlong *)(DAT_146b17150 + 0x1b0) != 0) {
      plVar7 = (longlong *)FUN_1429c1c30();
      plVar9 = *(longlong **)(lVar1 + 0x1b0);
      for (plVar8 = plVar9; plVar8 != (longlong *)0x0; plVar8 = (longlong *)plVar8[6]) {
        if (plVar8 == plVar7) goto LAB_142b981b5;
      }
    }
    plVar9 = (longlong *)0x0;
LAB_142b981b5:
    plVar8 = (longlong *)plVar9[0x1f];
    if (plVar8 == (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x368))(plVar9);
      plVar8 = (longlong *)plVar9[0x1f];
      if (plVar8 == (longlong *)0x0) {
        return 0;
      }
    }
    lVar5 = *plVar8;
  }
  else {
    lVar5 = FUN_142ba9430();
    if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return 0;
    }
    lVar5 = *plVar8;
  }
  cVar3 = (**(code **)(lVar5 + 0x2d0))(plVar8,param_1);
  if (cVar3 == '\0') {
    return 0;
  }
  return 1;
}



// FUNCTION 142b98200 FUN_142b98200 body=1802 status=ok
// SIG undefined FUN_142b98200(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142b98200(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  int *piVar17;
  longlong lVar18;
  uint uVar19;
  longlong *plVar20;
  longlong *plVar21;
  byte bVar22;
  int iVar23;
  longlong lVar24;
  int iVar25;
  ulonglong uVar26;
  undefined1 auStack_118 [32];
  byte local_f8;
  longlong *local_f0;
  longlong *local_e8;
  ulonglong local_e0 [2];
  longlong *local_d0;
  ulonglong local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong local_b0 [2];
  longlong *local_a0;
  longlong local_98;
  uint local_90 [2];
  longlong local_88;
  longlong local_80;
  int local_78;
  int local_70;
  char local_6c;
  int local_68;
  longlong *local_60;
  longlong local_58;
  int local_50;
  undefined8 local_40;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  iVar25 = (int)param_1[0xb];
  uVar26 = (ulonglong)iVar25;
  plVar20 = (longlong *)0x0;
  local_e8 = (longlong *)0x0;
  local_a0 = (longlong *)0x0;
  local_98 = 0;
  uVar8 = (int)(iVar25 + 0x1f + (iVar25 + 0x1f >> 0x1f & 0x1fU)) >> 5;
  local_f0 = param_1;
  if ((uVar8 & 0x7ffffff) != 0) {
    local_98 = (ulonglong)(uVar8 << 5) << 0x20;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(local_b0);
  }
  if (iVar25 != 0) {
    local_98 = CONCAT44(local_98._4_4_,iVar25);
    plVar21 = local_b0;
    if (local_a0 != (longlong *)0x0) {
      plVar21 = plVar20;
    }
    local_e8 = local_a0;
    _guard_xfg_dispatch_icall_nop
              ((void *)((ulonglong)plVar21 | (ulonglong)local_a0),0,(longlong)(int)uVar8 << 2);
  }
  plVar21 = local_a0;
  local_f8 = 0;
  local_e8 = local_a0;
  uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
  local_c8 = uVar9;
  plVar10 = (longlong *)FUN_142baab40();
  local_d0 = plVar20;
  if (plVar10 != (longlong *)0x0) {
    plVar11 = (longlong *)FUN_142baab40();
    plVar15 = plVar10;
    do {
      local_d0 = plVar10;
      if (plVar15 == plVar11) break;
      plVar15 = (longlong *)plVar15[6];
      local_d0 = plVar20;
    } while (plVar15 != (longlong *)0x0);
  }
  local_90[0] = 5;
  local_38 = '\0';
  local_e0[0] = uVar9;
  FUN_14044bc80(&local_88,local_e0,&local_d0);
  FUN_14045a130(local_90);
  bVar22 = 0;
  local_e0[0] = uVar26;
  if (local_6c == '\0') {
LAB_142b98340:
    plVar20 = local_60;
    uVar9 = local_e0[0];
    plVar10 = (longlong *)0x0;
    iVar25 = (int)uVar26;
    if ((int)(uint)bVar22 < iVar25) {
      if (local_60 != (longlong *)0x0) {
        iVar25 = *(int *)((longlong)local_60 + 0xc);
        plVar15 = plVar10;
        if (iVar25 < (int)DAT_1469e91c4) {
          uVar19 = iVar25 >> 0x1f & 0xffff;
          uVar8 = iVar25 + uVar19;
          plVar15 = (longlong *)
                    (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                    (longlong)(int)((uVar8 & 0xffff) - uVar19) * 0x18);
        }
        if ((*(uint *)(plVar15 + 1) >> 0x1d & 1) == 0) {
          uVar12 = FUN_142a2f930();
          uVar13 = UObjectBaseUtility::GetTypedOuter(plVar20,uVar12);
          uVar26 = local_c8;
          if (uVar13 == local_c8) {
LAB_142b983f8:
            if (0 < (longlong)uVar9) {
              local_c0 = local_b0;
              if (plVar21 != (longlong *)0x0) {
                local_c0 = plVar10;
              }
              plVar21 = (longlong *)((ulonglong)plVar21 | (ulonglong)local_c0);
              plVar15 = plVar10;
              plVar11 = plVar10;
              local_d0 = plVar21;
              do {
                iVar25 = (int)plVar10;
                uVar8 = 1 << ((byte)plVar10 & 0x1f);
                local_b8 = (longlong)((int)(iVar25 + (iVar25 >> 0x1f & 0x1fU)) >> 5);
                if ((*(uint *)((longlong)plVar21 + local_b8 * 4) & uVar8) == 0) {
                  lVar14 = param_1[10];
                  lVar24 = plVar20[2];
                  if (*(longlong *)(lVar14 + 0x48 + (longlong)plVar11) != 0) {
                    lVar16 = FUN_1428dfc70();
                    lVar14 = *(longlong *)(lVar14 + 0x48 + (longlong)plVar11);
                    for (lVar18 = lVar14; lVar18 != 0; lVar18 = *(longlong *)(lVar18 + 0x30)) {
                      if (lVar18 == lVar16) goto LAB_142b98478;
                    }
                  }
                  lVar14 = 0;
LAB_142b98478:
                  param_1 = local_f0;
                  plVar21 = local_d0;
                  if ((lVar24 == lVar14) &&
                     (cVar7 = (**(code **)(*plVar20 + 0x738))
                                        (plVar20,(longlong)iVar25 * 0x68 + local_f0[10]),
                     plVar21 = local_d0, cVar7 == '\x01')) {
                    puVar1 = (uint *)(((ulonglong)local_e8 | (ulonglong)local_c0) + local_b8 * 4);
                    *puVar1 = *puVar1 | uVar8;
                    local_f8 = local_f8 + 1;
                    local_e8 = local_a0;
                    break;
                  }
                }
                plVar10 = (longlong *)(ulonglong)(iVar25 + 1);
                plVar15 = (longlong *)((longlong)plVar15 + 1);
                plVar11 = plVar11 + 0xd;
              } while ((longlong)plVar15 < (longlong)local_e0[0]);
            }
          }
          else {
            lVar14 = AActor::GetLevel(plVar20);
            plVar15 = (longlong *)UDynamicEntryBox::GetAllEntries(uVar26);
            plVar11 = (longlong *)*plVar15;
            plVar15 = plVar11 + (int)plVar15[1];
            for (; plVar11 != plVar15; plVar11 = plVar11 + 1) {
              param_1 = local_f0;
              if (*plVar11 == lVar14) goto LAB_142b983f8;
            }
          }
        }
      }
      lVar14 = local_88;
      iVar25 = local_70 + 1;
      if (iVar25 < local_50 + local_78) {
        lVar24 = (longlong)iVar25 * 8;
        iVar23 = local_78;
        do {
          lVar18 = 0;
          if (iVar25 < iVar23) {
            plVar20 = *(longlong **)(local_80 + lVar24);
          }
          else {
            plVar20 = *(longlong **)(local_58 + (longlong)(iVar25 - iVar23) * 8);
          }
          local_68 = local_68 + 1;
          if ((plVar20 != (longlong *)0x0) &&
             (lVar16 = AActor::GetLevel(plVar20), iVar23 = local_78, lVar16 != 0)) {
            if ((local_90[0] & 1) != 0) {
              iVar2 = *(int *)((longlong)plVar20 + 0xc);
              if (iVar2 < (int)DAT_1469e91c4) {
                uVar19 = iVar2 >> 0x1f & 0xffff;
                uVar8 = iVar2 + uVar19;
                lVar18 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                         (longlong)(int)((uVar8 & 0xffff) - uVar19) * 0x18;
              }
              if ((*(uint *)(lVar18 + 8) >> 0x1d & 1) != 0) goto LAB_142b98682;
            }
            if (((local_90[0] >> 1 & 1) == 0) ||
               (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(plVar20), iVar23 = local_78,
               cVar7 != '\0')) {
              if ((local_90[0] >> 2 & 1) != 0) {
                if (((*(byte *)(lVar16 + 0x204) & 0x10) == 0) &&
                   ((*(byte *)(lVar16 + 0x205) & 0x10) == 0)) {
                  bVar6 = false;
                }
                else {
                  bVar6 = true;
                }
                piVar3 = *(int **)(lVar16 + 600);
                if (((*(longlong *)(lVar16 + 0xc0) == 0) ||
                    (piVar17 = (int *)UWorld::GetActiveLevelCollection(), piVar17 == (int *)0x0)) ||
                   (piVar3 == piVar17)) {
                  bVar4 = true;
                }
                else {
                  bVar4 = false;
                }
                if ((piVar3 == (int *)0x0) || (*piVar3 == 2)) {
                  bVar5 = true;
                }
                else {
                  bVar5 = false;
                }
                if ((bVar4) || (bVar4 = false, bVar5)) {
                  bVar4 = true;
                }
                iVar23 = local_78;
                if ((!bVar6) || (!bVar4)) goto LAB_142b98682;
              }
              lVar18 = ULevel::GetWorld(lVar16);
              iVar23 = local_78;
              if (lVar18 == lVar14) {
                lVar18 = AActor::GetLevel(plVar20);
                if (lVar18 == *(longlong *)(lVar14 + 0x30)) goto LAB_142b98780;
                lVar18 = UVoipListenerSynthComponent::GetPrivateStaticClass();
                if ((*(int *)(plVar20[2] + 0x90) < *(int *)(lVar18 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(plVar20[2] + 0x88) + (longlong)*(int *)(lVar18 + 0x90) * 8) !=
                    lVar18 + 0x88)) {
                  bVar6 = false;
                }
                else {
                  bVar6 = true;
                }
                iVar23 = local_78;
                if (!bVar6) goto LAB_142b98780;
              }
            }
          }
LAB_142b98682:
          iVar25 = iVar25 + 1;
          lVar24 = lVar24 + 8;
          if (local_50 + iVar23 <= iVar25) break;
        } while( true );
      }
      iVar25 = (int)local_e0[0];
      local_60 = (longlong *)0x0;
      local_6c = '\x01';
      param_1 = local_f0;
      plVar21 = local_e8;
      bVar22 = local_f8;
    }
  }
LAB_142b986b9:
  uVar26 = local_e0[0];
  iVar23 = 0;
  if (local_38 != '\0') {
    local_38 = '\0';
    UWorld::RemoveOnActorSpawnedHandler(local_88,local_40);
    if (local_58 != 0) {
      FMemory::Free();
    }
    if (local_80 != 0) {
      FMemory::Free();
    }
  }
  if (((int)(uint)bVar22 < iVar25) && (0 < (longlong)uVar26)) {
    plVar20 = local_b0;
    if (plVar21 != (longlong *)0x0) {
      plVar20 = plVar21;
    }
    lVar14 = 0;
    uVar8 = 1;
LAB_142b98720:
    lVar24 = param_1[10] + lVar14;
    iVar25 = iVar23;
    if (iVar23 < 0) {
      iVar25 = iVar23 + 0x1f;
    }
    param_1 = local_f0;
    if (((*(uint *)((longlong)plVar20 + (longlong)(iVar25 >> 5) * 4) & uVar8) == 0) &&
       (*(longlong *)(lVar24 + 0x48) != 0)) {
      lVar16 = FUN_1428dfc70();
      for (lVar18 = *(longlong *)(lVar24 + 0x48); param_1 = local_f0, lVar18 != 0;
          lVar18 = *(longlong *)(lVar18 + 0x30)) {
        if (lVar18 == lVar16) {
          if (*(longlong *)(lVar24 + 0x48) != 0) {
            plVar15 = (longlong *)FUN_1428dfc70();
            plVar21 = *(longlong **)(lVar24 + 0x48);
            plVar10 = plVar21;
            goto joined_r0x000142b987c5;
          }
          break;
        }
      }
    }
    goto LAB_142b98765;
  }
LAB_142b98868:
  lVar14 = 0;
  lVar24 = param_1[5];
  if (lVar24 != 0) {
    if ((*(byte *)(lVar24 + 0x94) & 2) == 0) {
      iVar25 = *(int *)(lVar24 + 0xc);
      if (iVar25 < (int)DAT_1469e91c4) {
        uVar19 = iVar25 >> 0x1f & 0xffff;
        uVar8 = iVar25 + uVar19;
        lVar14 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                 (longlong)(int)((uVar8 & 0xffff) - uVar19) * 0x18;
      }
      if ((*(uint *)(lVar14 + 8) >> 0x1d & 1) != 0) goto LAB_142b988bc;
      bVar6 = false;
    }
    else {
LAB_142b988bc:
      bVar6 = true;
    }
    if (!bVar6) goto LAB_142b988d0;
  }
  lVar14 = FUN_142b8e790(param_1,0);
  param_1[5] = lVar14;
LAB_142b988d0:
  if (plVar21 != (longlong *)0x0) {
    FMemory::Free(plVar21);
  }
  return;
LAB_142b98780:
  local_70 = iVar25;
  uVar26 = local_e0[0] & 0xffffffff;
  iVar25 = (int)local_e0[0];
  local_60 = plVar20;
  param_1 = local_f0;
  plVar21 = local_e8;
  bVar22 = local_f8;
  if (local_6c != '\0') goto LAB_142b986b9;
  goto LAB_142b98340;
joined_r0x000142b987c5:
  if (plVar10 == (longlong *)0x0) goto LAB_142b987d5;
  if (plVar10 == plVar15) goto LAB_142b987d8;
  plVar10 = (longlong *)plVar10[6];
  goto joined_r0x000142b987c5;
LAB_142b987d5:
  plVar21 = (longlong *)0x0;
LAB_142b987d8:
  lVar18 = plVar21[0x1f];
  if (lVar18 == 0) {
    (**(code **)(*plVar21 + 0x368))(plVar21);
    lVar18 = plVar21[0x1f];
    param_1 = local_f0;
    if (lVar18 == 0) goto LAB_142b98765;
  }
  param_1 = local_f0;
  if (((*(uint *)(lVar18 + 0x4d0) >> 3 & 1) != 0) &&
     (((*(int *)(local_c8 + 0x708) == 2 || (*(char *)(lVar18 + 0x4d4) != '\0')) &&
      (lVar24 = (**(code **)(*local_f0 + 0x2c0))(local_f0,lVar24), lVar24 != 0)))) {
    (**(code **)(*param_1 + 0x2e8))(param_1,lVar24,1);
  }
LAB_142b98765:
  iVar23 = iVar23 + 1;
  uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
  lVar14 = lVar14 + 0x68;
  local_e0[0] = local_e0[0] - 1;
  if (local_e0[0] == 0) goto code_r0x000142b98776;
  goto LAB_142b98720;
code_r0x000142b98776:
  local_e0[0] = 0;
  plVar21 = local_e8;
  goto LAB_142b98868;
}



// FUNCTION 142b98910 FUN_142b98910 body=161 status=ok
// SIG undefined FUN_142b98910(void)

undefined1 FUN_142b98910(longlong param_1,longlong param_2,int param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  cVar1 = FWeakObjectPtr::IsValid(param_2 + 0x38);
  if (cVar1 == '\0') {
    FWeakObjectPtr::operator=(param_2 + 0x38,*(undefined8 *)(param_1 + 0x28));
  }
  uVar2 = 0;
  cVar1 = FWeakObjectPtr::IsValid(param_2 + 0x38);
  if (cVar1 != '\0') {
    lVar3 = FWeakObjectPtr::Get(param_2 + 0x38);
    if (param_3 == 1) {
      uVar2 = (**(code **)(lVar3 + 0x4f8))();
    }
    else {
      uVar2 = (**(code **)(lVar3 + 0x4f0))(param_2 + 0x50,param_2,param_4);
    }
  }
  FPathFindingQuery::~FPathFindingQuery(param_2);
  return uVar2;
}



// FUNCTION 142b989c0 FUN_142b989c0 body=1157 status=ok
// SIG undefined FUN_142b989c0(void)

void FUN_142b989c0(longlong *param_1,float param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint *puVar15;
  float fVar16;
  uint local_b8;
  uint uStack_b4;
  int iStack_a4;
  uint uStack_a0;
  undefined8 uStack_68;
  uint *local_60;
  undefined8 uStack_58;
  uint local_50;
  longlong *local_48;
  
  lVar9 = (**(code **)(*param_1 + 0x148))();
  if ((lVar9 != 0) &&
     (((*(byte *)(param_1 + 8) & 0x10) != 0 || (cVar6 = FUN_14254a160(lVar9), cVar6 == '\0')))) {
    cVar6 = UWorld::IsGameWorld(lVar9);
    if (DAT_146687a08 != DAT_146687a34) {
      UNavigationSystemV1::ProcessCustomLinkPendingRegistration(param_1);
    }
    uVar14 = 0;
    if (0 < (int)param_1[0x1c]) {
      FUN_142b92fc0(param_1,param_1 + 0x1b);
      *(undefined4 *)(param_1 + 0x1c) = 0;
      if ((*(int *)((longlong)param_1 + 0xe4) < 0) && (*(int *)((longlong)param_1 + 0xe4) != 0)) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeTo(param_1 + 0x1b,0);
      }
    }
    if (0 < (int)param_1[0x12] - *(int *)((longlong)param_1 + 0xbc)) {
      plVar10 = param_1 + 0x11;
      uStack_b4 = 1;
      iVar8 = (int)param_1[0x16];
      local_60 = (uint *)(param_1 + 0x13);
      local_b8 = 0;
      iStack_a4 = 0;
      uStack_a0 = 0;
      if (iVar8 != 0) {
        puVar15 = (uint *)param_1[0x15];
        if ((uint *)param_1[0x15] == (uint *)0x0) {
          puVar15 = local_60;
        }
        uVar12 = *puVar15;
        uVar11 = uVar14;
        uVar13 = uVar14;
        while (uVar12 == 0) {
          iVar7 = (int)uVar11;
          uStack_a0 = (int)uVar13 + 0x20;
          uVar13 = (ulonglong)uStack_a0;
          local_b8 = iVar7 + 1;
          uVar11 = (ulonglong)local_b8;
          if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_142b98b42;
          uVar12 = puVar15[(longlong)iVar7 + 1];
        }
        uStack_b4 = -uVar12 & uVar12;
        iVar7 = 0x1f;
        if (uStack_b4 != 0) {
          for (; uStack_b4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        if (uStack_b4 == 0) {
          iVar7 = 0x20;
        }
        else {
          iVar7 = 0x1f - iVar7;
        }
        iStack_a4 = (uStack_a0 - iVar7) + 0x1f;
        if (iVar8 < iStack_a4) {
LAB_142b98b42:
          iStack_a4 = iVar8;
        }
      }
      uStack_68 = CONCAT44(uStack_b4,local_b8);
      uStack_58 = CONCAT44(iStack_a4,0xffffffff);
      local_50 = uStack_a0;
      local_48 = plVar10;
      if (iStack_a4 < iVar8) {
        do {
          uStack_58 = CONCAT44(uStack_58._4_4_,(uint)uStack_58 & ~uStack_68._4_4_);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_68);
        } while (uStack_58._4_4_ < (int)local_60[6]);
      }
      TSet<TTuple<FInputSignature,FName>,TDefaultMapHashableKeyFuncs<FInputSignature,FName,0>,FDefaultSetAllocator>
      ::Empty(plVar10,0x20);
    }
    if ((*(byte *)(param_1 + 9) & 1) != 0) {
      FUN_142b9a340(param_1);
    }
    fVar16 = param_2 + *(float *)((longlong)param_1 + 0x3bc);
    *(float *)((longlong)param_1 + 0x3bc) = fVar16;
    if ((1.0 / *(float *)(param_1 + 0xc) <= fVar16) || (cVar6 == '\0')) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (((0 < (int)param_1[0x6d]) && (bVar4)) && ((char)param_1[0x73] == '\0')) {
      uVar11 = uVar14;
      uVar13 = uVar14;
      if (0 < (int)param_1[0xe]) {
        do {
          plVar10 = *(longlong **)(uVar13 + param_1[0xd]);
          if (plVar10 != (longlong *)0x0) {
            (**(code **)(*plVar10 + 0x778))(plVar10,param_1 + 0x6c);
          }
          uVar12 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar12;
          uVar13 = uVar13 + 8;
        } while ((int)uVar12 < (int)param_1[0xe]);
      }
      *(undefined4 *)((longlong)param_1 + 0x3bc) = 0;
      *(undefined4 *)(param_1 + 0x6d) = 0;
      if ((*(int *)((longlong)param_1 + 0x36c) < 0) && (*(int *)((longlong)param_1 + 0x36c) != 0)) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
                  (param_1 + 0x6c,0);
      }
    }
    if ((*(byte *)((longlong)param_1 + 0x39a) & 0x10) == 0) {
      plVar10 = (longlong *)param_1[0xd];
      uVar11 = (longlong)(int)param_1[0xe] & 0x1fffffffffffffff;
      if (plVar10 + (int)param_1[0xe] < plVar10) {
        uVar11 = uVar14;
      }
      if (uVar11 != 0) {
        do {
          plVar3 = (longlong *)*plVar10;
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x770))(plVar3,param_2);
          }
          plVar10 = plVar10 + 1;
          uVar14 = uVar14 + 1;
        } while (uVar14 != uVar11);
      }
    }
    if (0 < (int)param_1[0x3e]) {
      plVar10 = param_1 + 0x3d;
      FUN_142b99a30(param_1,plVar10);
      iVar8 = *(int *)((longlong)param_1 + 500);
      lVar9 = *plVar10;
      iVar7 = (int)param_1[0x3e];
      if (iVar8 < 0) {
        if (iVar7 != 0) {
          do {
            plVar3 = *(longlong **)(lVar9 + 0xa8);
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar3 + 1;
              lVar5 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)*plVar3)(plVar3);
                LOCK();
                piVar1 = (int *)((longlong)plVar3 + 0xc);
                iVar8 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar8 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                }
              }
            }
            TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar9 + 0x88);
            FPathFindingQuery::~FPathFindingQuery(lVar9);
            lVar9 = lVar9 + 0xb8;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          iVar8 = *(int *)((longlong)param_1 + 500);
        }
        *(undefined4 *)(param_1 + 0x3e) = 0;
        if (iVar8 != 0) {
          TArray<FOnlineSessionSearchResult,FDefaultAllocator>::ResizeTo(plVar10,0);
        }
      }
      else {
        for (; iVar7 != 0; iVar7 = iVar7 + -1) {
          plVar10 = *(longlong **)(lVar9 + 0xa8);
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar10 + 1;
            lVar5 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plVar10)(plVar10);
              LOCK();
              piVar1 = (int *)((longlong)plVar10 + 0xc);
              iVar8 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plVar10 + 8))(plVar10,1);
              }
            }
          }
          TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar9 + 0x88);
          FPathFindingQuery::~FPathFindingQuery(lVar9);
          lVar9 = lVar9 + 0xb8;
        }
        *(undefined4 *)(param_1 + 0x3e) = 0;
      }
    }
    cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x24);
    if (cVar6 != '\0') {
      plVar10 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x24);
      (**(code **)(*plVar10 + 0x278))(plVar10,param_2);
    }
  }
  return;
}



// FUNCTION 142b98e50 FUN_142b98e50 body=3000 status=ok
// SIG undefined FUN_142b98e50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b98e50(longlong *param_1,float param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  longlong *plVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *plVar17;
  int iVar18;
  longlong lVar19;
  int *piVar20;
  int iVar21;
  longlong lVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  undefined1 auStack_1e8 [32];
  longlong local_1c8;
  uint local_1c0;
  undefined4 local_1bc;
  longlong local_1b8;
  ulonglong local_1b0;
  float local_1a8;
  undefined1 local_1a0 [12];
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined8 local_184;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  longlong *local_168;
  longlong *local_160;
  longlong *local_158;
  longlong *local_150;
  undefined1 local_148 [16];
  undefined1 local_138 [8];
  longlong *local_130;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 local_108 [40];
  longlong *local_e0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [32];
  longlong local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  FUN_1422409a0();
  plVar17 = (longlong *)(param_1[0xa3] + -0x10 + (longlong)(int)param_1[0xa4] * 0x10);
  iVar18 = (int)param_1[0xa4] + -1;
  if (-1 < iVar18) {
    lVar15 = (longlong)iVar18 << 4;
    do {
      if ((*plVar17 == 0) || (plVar17[1] == 0)) {
LAB_142b98edd:
        plVar16 = *(longlong **)(lVar15 + 8 + param_1[0xa3]);
        if (plVar16 != (longlong *)0x0) {
          LOCK();
          piVar20 = (int *)((longlong)plVar16 + 0xc);
          iVar21 = *piVar20;
          *piVar20 = *piVar20 + -1;
          UNLOCK();
          if ((iVar21 == 1) && (plVar16 != (longlong *)0x0)) {
            (**(code **)(*plVar16 + 8))(plVar16,1);
          }
        }
        iVar21 = (int)param_1[0xa4];
        iVar10 = (iVar21 - iVar18) + -1;
        if (0 < iVar10) {
          iVar10 = 1;
        }
        if (iVar10 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(param_1[0xa3] + lVar15),
                     (void *)((longlong)(iVar21 - iVar10) * 0x10 + param_1[0xa3]),
                     (longlong)iVar10 << 4);
          iVar21 = (int)param_1[0xa4];
        }
        *(int *)(param_1 + 0xa4) = iVar21 + -1;
      }
      else {
        piVar20 = (int *)(plVar17[1] + 8);
        LOCK();
        iVar21 = *piVar20;
        if (iVar21 == 0) {
          *piVar20 = 0;
          iVar21 = 0;
        }
        UNLOCK();
        if (iVar21 < 1) goto LAB_142b98edd;
      }
      lVar15 = lVar15 + -0x10;
      plVar17 = plVar17 + -2;
      iVar18 = iVar18 + -1;
    } while (-1 < iVar18);
  }
  uVar26 = 0;
  if ((0.0 <= *(float *)(param_1 + 0xa9)) &&
     (param_2 = *(float *)(param_1 + 0xa9) - param_2, *(float *)(param_1 + 0xa9) = param_2,
     param_2 <= 0.0)) {
    iVar18 = (int)param_1[0xa6];
    if (*(int *)((longlong)param_1 + 0x544) < iVar18) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (param_1 + 0xa7,iVar18);
      iVar18 = (int)param_1[0xa6];
    }
    iVar21 = iVar18 + -1;
    if (-1 < iVar21) {
      lVar22 = (longlong)iVar21 << 4;
      lVar15 = lVar22;
      do {
        if ((*(longlong *)(lVar15 + param_1[0xa5]) == 0) ||
           (lVar19 = *(longlong *)(lVar15 + 8 + param_1[0xa5]), lVar19 == 0)) {
LAB_142b992a3:
          plVar17 = *(longlong **)(lVar22 + 8 + param_1[0xa5]);
          if (plVar17 != (longlong *)0x0) {
            LOCK();
            piVar20 = (int *)((longlong)plVar17 + 0xc);
            iVar18 = *piVar20;
            *piVar20 = *piVar20 + -1;
            UNLOCK();
            if ((iVar18 == 1) && (plVar17 != (longlong *)0x0)) {
              (**(code **)(*plVar17 + 8))(plVar17,1);
            }
          }
          iVar18 = (int)param_1[0xa6];
          iVar10 = (iVar18 - iVar21) + -1;
          if (0 < iVar10) {
            iVar10 = 1;
          }
          if (iVar10 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar22 + param_1[0xa5]),
                       (void *)((longlong)(iVar18 - iVar10) * 0x10 + param_1[0xa5]),
                       (longlong)iVar10 << 4);
            iVar18 = (int)param_1[0xa6];
          }
          *(int *)(param_1 + 0xa6) = iVar18 + -1;
        }
        else {
          piVar20 = (int *)(lVar19 + 8);
          LOCK();
          iVar18 = *piVar20;
          if (iVar18 == 0) {
            *piVar20 = 0;
            iVar18 = 0;
          }
          UNLOCK();
          if (iVar18 < 1) goto LAB_142b992a3;
          lVar19 = param_1[0xa5];
          plVar17 = *(longlong **)(lVar15 + 8 + lVar19);
          plVar16 = plVar17;
          plVar8 = (longlong *)0x0;
          if (plVar17 != (longlong *)0x0) {
            LOCK();
            iVar18 = (int)plVar17[1];
            bVar23 = iVar18 == 0;
            if (bVar23) {
              *(int *)(plVar17 + 1) = 0;
              iVar18 = 0;
            }
            UNLOCK();
            while (plVar16 = (longlong *)0x0, plVar8 = (longlong *)0x0, !bVar23) {
              LOCK();
              bVar23 = iVar18 == (int)plVar17[1];
              if (bVar23) {
                *(int *)(plVar17 + 1) = iVar18 + 1;
              }
              UNLOCK();
              if (bVar23) {
                plVar16 = plVar17;
                if (plVar17 != (longlong *)0x0) {
                  plVar8 = *(longlong **)(lVar15 + lVar19);
                }
                break;
              }
              LOCK();
              iVar18 = (int)plVar17[1];
              bVar23 = iVar18 == 0;
              if (bVar23) {
                *(int *)(plVar17 + 1) = 0;
                iVar18 = 0;
              }
              UNLOCK();
            }
          }
          cVar5 = FWeakObjectPtr::IsValid(plVar8 + 8);
          if (cVar5 == '\0') {
            plVar17 = *(longlong **)(lVar22 + 8 + param_1[0xa5]);
            if (plVar17 != (longlong *)0x0) {
              LOCK();
              piVar20 = (int *)((longlong)plVar17 + 0xc);
              iVar18 = *piVar20;
              *piVar20 = *piVar20 + -1;
              UNLOCK();
              if ((iVar18 == 1) && (plVar17 != (longlong *)0x0)) {
                (**(code **)(*plVar17 + 8))(plVar17,1);
              }
            }
            iVar18 = (int)param_1[0xa6];
            iVar10 = (iVar18 - iVar21) + -1;
            if (0 < iVar10) {
              iVar10 = 1;
            }
            if (iVar10 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(lVar22 + param_1[0xa5]),
                         (void *)((longlong)(iVar18 - iVar10) * 0x10 + param_1[0xa5]),
                         (longlong)iVar10 << 4);
              iVar18 = (int)param_1[0xa6];
            }
            *(int *)(param_1 + 0xa6) = iVar18 + -1;
          }
          else {
            plVar17 = (longlong *)plVar8[9];
            if (plVar17 == (longlong *)0x0) {
              lVar19 = FWeakObjectPtr::Get(plVar8 + 8);
              lVar19 = *(longlong *)(lVar19 + 0x168);
              if (lVar19 == 0) {
                local_17c = DAT_1468b5d98;
                puVar12 = &local_184;
                local_184 = _DAT_1468b5d90;
              }
              else {
                puVar12 = (undefined8 *)&local_190;
                local_190 = *(undefined4 *)(lVar19 + 0x220);
                local_118 = *(undefined4 *)(lVar19 + 0x220);
                uStack_114 = *(undefined4 *)(lVar19 + 0x224);
                uStack_110 = *(undefined4 *)(lVar19 + 0x228);
                uStack_10c = *(undefined4 *)(lVar19 + 0x22c);
                local_188 = *(undefined4 *)(lVar19 + 0x228);
                uStack_18c = *(undefined4 *)(lVar19 + 0x224);
              }
              local_170 = *(undefined4 *)(puVar12 + 1);
              puVar6 = &local_178;
              local_178 = *puVar12;
            }
            else {
              puVar6 = (undefined8 *)(**(code **)(*plVar17 + 0x18))(plVar17,local_148);
            }
            local_1b0 = *puVar6;
            local_1a8 = *(float *)(puVar6 + 1);
            fVar24 = *(float *)(plVar8 + 0x1d) - (float)local_1b0;
            fVar25 = *(float *)((longlong)plVar8 + 0xec) - (float)(local_1b0 >> 0x20);
            fVar24 = fVar25 * fVar25 + fVar24 * fVar24 +
                     (*(float *)(plVar8 + 0x1e) - local_1a8) *
                     (*(float *)(plVar8 + 0x1e) - local_1a8);
            if (*(float *)((longlong)plVar8 + 0xe4) <= fVar24 &&
                fVar24 != *(float *)((longlong)plVar8 + 0xe4)) {
              if (plVar16 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
                UNLOCK();
                LOCK();
                *(int *)((longlong)plVar16 + 0xc) = *(int *)((longlong)plVar16 + 0xc) + 1;
                UNLOCK();
                LOCK();
                plVar17 = plVar16 + 1;
                lVar19 = *plVar17;
                *(int *)plVar17 = (int)*plVar17 + -1;
                UNLOCK();
                if ((int)lVar19 == 1) {
                  (**(code **)*plVar16)(plVar16);
                  LOCK();
                  piVar20 = (int *)((longlong)plVar16 + 0xc);
                  iVar18 = *piVar20;
                  *piVar20 = *piVar20 + -1;
                  UNLOCK();
                  if (iVar18 == 1) {
                    (**(code **)(*plVar16 + 8))(plVar16,1);
                  }
                }
              }
              iVar18 = (int)param_1[0xa8];
              lVar19 = (longlong)iVar18;
              *(int *)(param_1 + 0xa8) = iVar18 + 1;
              if (*(int *)((longlong)param_1 + 0x544) < iVar18 + 1) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
                ResizeGrow(param_1 + 0xa7,iVar18);
              }
              lVar2 = param_1[0xa7];
              *(longlong **)(lVar2 + lVar19 * 0x18) = plVar8;
              *(longlong **)(lVar2 + 8 + lVar19 * 0x18) = plVar16;
              *(undefined4 *)(lVar2 + 0x10 + lVar19 * 0x18) = 0;
            }
          }
          if (plVar16 != (longlong *)0x0) {
            LOCK();
            plVar17 = plVar16 + 1;
            lVar19 = *plVar17;
            *(int *)plVar17 = (int)*plVar17 + -1;
            UNLOCK();
            if ((int)lVar19 == 1) {
              (**(code **)*plVar16)(plVar16);
              LOCK();
              piVar20 = (int *)((longlong)plVar16 + 0xc);
              iVar18 = *piVar20;
              *piVar20 = *piVar20 + -1;
              UNLOCK();
              if (iVar18 == 1) {
                (**(code **)(*plVar16 + 8))(plVar16,1);
              }
            }
          }
        }
        lVar22 = lVar22 + -0x10;
        lVar15 = lVar15 + -0x10;
        iVar21 = iVar21 + -1;
      } while (-1 < iVar21);
      iVar18 = (int)param_1[0xa6];
    }
    if (0 < iVar18) {
      *(int *)(param_1 + 0xa9) = (int)param_1[0x9b];
    }
  }
  if (0 < (int)param_1[0xa8]) {
    lVar15 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar15 != 0) {
      uVar26 = *(undefined4 *)(lVar15 + 0x790);
    }
    (**(code **)(*param_1 + 0x148))(param_1);
    plVar17 = param_1 + 0xa7;
    local_1c8 = 0;
    uVar14 = *(uint *)(param_1 + 0xa8);
    lVar15 = *plVar17;
    local_1c0 = uVar14;
    if (uVar14 == 0) {
      local_1bc = 0;
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(&local_1c8,uVar14,0);
      lVar15 = lVar15 - local_1c8;
      puVar11 = (undefined4 *)(local_1c8 + 0x10);
      do {
        *(undefined8 *)(puVar11 + -4) = *(undefined8 *)(lVar15 + -0x10 + (longlong)puVar11);
        lVar22 = *(longlong *)(lVar15 + -8 + (longlong)puVar11);
        *(longlong *)(puVar11 + -2) = lVar22;
        if (lVar22 != 0) {
          LOCK();
          *(int *)(lVar22 + 0xc) = *(int *)(lVar22 + 0xc) + 1;
          UNLOCK();
        }
        *puVar11 = *(undefined4 *)(lVar15 + (longlong)puVar11);
        puVar11 = puVar11 + 6;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    uVar14 = local_1c0;
    lVar15 = local_1c8;
    if ((int)local_1c0 < 0x3e9) {
      iVar18 = *(int *)((longlong)param_1 + 0x544);
      iVar21 = (int)param_1[0xa8];
      if (iVar18 < 0) {
        if (iVar21 != 0) {
          plVar16 = (longlong *)(*plVar17 + 8);
          do {
            plVar8 = (longlong *)*plVar16;
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              piVar20 = (int *)((longlong)plVar8 + 0xc);
              iVar18 = *piVar20;
              *piVar20 = *piVar20 + -1;
              UNLOCK();
              if ((iVar18 == 1) && (plVar8 != (longlong *)0x0)) {
                (**(code **)(*plVar8 + 8))(plVar8,1);
              }
            }
            plVar16 = plVar16 + 3;
            iVar21 = iVar21 + -1;
          } while (iVar21 != 0);
          iVar18 = *(int *)((longlong)param_1 + 0x544);
        }
        uVar14 = local_1c0;
        *(undefined4 *)(param_1 + 0xa8) = 0;
        if (iVar18 != 0) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeTo(plVar17,0);
        }
      }
      else {
        if (iVar21 != 0) {
          plVar17 = (longlong *)(*plVar17 + 8);
          do {
            plVar16 = (longlong *)*plVar17;
            if (plVar16 != (longlong *)0x0) {
              LOCK();
              piVar20 = (int *)((longlong)plVar16 + 0xc);
              iVar18 = *piVar20;
              *piVar20 = *piVar20 + -1;
              UNLOCK();
              if ((iVar18 == 1) && (plVar16 != (longlong *)0x0)) {
                (**(code **)(*plVar16 + 8))(plVar16,1);
              }
            }
            plVar17 = plVar17 + 3;
            iVar21 = iVar21 + -1;
          } while (iVar21 != 0);
        }
        *(undefined4 *)(param_1 + 0xa8) = 0;
        uVar14 = local_1c0;
      }
    }
    else {
      iVar18 = local_1c0 - 1000;
      if (iVar18 != 0) {
        plVar16 = (longlong *)(local_1c8 + 0x5dc8);
        iVar21 = iVar18;
        do {
          plVar8 = (longlong *)*plVar16;
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            piVar20 = (int *)((longlong)plVar8 + 0xc);
            iVar10 = *piVar20;
            *piVar20 = *piVar20 + -1;
            UNLOCK();
            if ((iVar10 == 1) && (plVar8 != (longlong *)0x0)) {
              (**(code **)(*plVar8 + 8))(plVar8,1);
            }
          }
          plVar16 = plVar16 + 3;
          iVar21 = iVar21 + -1;
        } while (iVar21 != 0);
        uVar13 = local_1c0 - iVar18;
        iVar18 = uVar13 - 1000;
        if (iVar18 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar15 + 24000),(void *)(local_1c8 + (longlong)(int)uVar14 * 0x18),
                     (longlong)iVar18 * 0x18);
        }
        local_1c0 = uVar13;
        TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(&local_1c8);
      }
      uVar14 = local_1c0;
      TArray<FNavPathRecalculationRequest,FDefaultAllocator>::RemoveAtImpl(plVar17,0,1000,1);
    }
    if (0 < (int)uVar14) {
      local_1b0 = (ulonglong)uVar14;
      piVar20 = (int *)(local_1c8 + 0x10);
      do {
        plVar17 = *(longlong **)(piVar20 + -2);
        if (plVar17 != (longlong *)0x0) {
          LOCK();
          iVar18 = (int)plVar17[1];
          bVar23 = iVar18 == 0;
          if (bVar23) {
            *(int *)(plVar17 + 1) = 0;
            iVar18 = 0;
          }
          UNLOCK();
          while (!bVar23) {
            LOCK();
            bVar23 = iVar18 == (int)plVar17[1];
            if (bVar23) {
              *(int *)(plVar17 + 1) = iVar18 + 1;
            }
            UNLOCK();
            if (bVar23) {
              plVar16 = *(longlong **)(piVar20 + -4);
              if (plVar16 == (longlong *)0x0) {
LAB_142b995c3:
                LOCK();
                plVar16 = plVar17 + 1;
                lVar15 = *plVar16;
                *(int *)plVar16 = (int)*plVar16 + -1;
                UNLOCK();
                if ((int)lVar15 == 1) {
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
              else {
                lVar15 = FWeakObjectPtr::Get(plVar16 + 0x15);
                if (lVar15 != 0) {
                  uVar7 = UNavAgentInterface::GetPrivateStaticClass();
                  plVar8 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar15,uVar7);
                  if ((plVar8 != (longlong *)0x0) &&
                     (cVar5 = (**(code **)(*plVar8 + 0x40))(plVar8), cVar5 != '\0')) {
                    iVar18 = (int)param_1[0xa8];
                    lVar15 = (longlong)iVar18;
                    *(int *)(param_1 + 0xa8) = iVar18 + 1;
                    if (*(int *)((longlong)param_1 + 0x544) < iVar18 + 1) {
                      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>
                      ::ResizeGrow(param_1 + 0xa7,iVar18);
                    }
                    lVar22 = param_1[0xa7];
                    *(undefined8 *)(lVar22 + lVar15 * 0x18) = *(undefined8 *)(piVar20 + -4);
                    lVar19 = *(longlong *)(piVar20 + -2);
                    *(longlong *)(lVar22 + 8 + lVar15 * 0x18) = lVar19;
                    if (lVar19 != 0) {
                      LOCK();
                      *(int *)(lVar19 + 0xc) = *(int *)(lVar19 + 0xc) + 1;
                      UNLOCK();
                    }
                    *(int *)(lVar22 + 0x10 + lVar15 * 0x18) = *piVar20;
                    goto LAB_142b995c3;
                  }
                }
                LOCK();
                *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
                UNLOCK();
                local_168 = plVar16;
                local_160 = plVar17;
                FUN_142b80ea0(local_108,&local_168,0);
                LOCK();
                *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
                UNLOCK();
                LOCK();
                *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
                UNLOCK();
                auVar3._4_4_ = uStack_c4;
                auVar3._0_4_ = local_c8;
                auVar3._8_4_ = uStack_c0;
                auVar3._12_4_ = uStack_bc;
                local_1a0._0_4_ = SUB84(plVar16,0);
                local_1a0._4_4_ = (undefined4)((ulonglong)plVar16 >> 0x20);
                local_1a0._8_4_ = SUB84(plVar17,0);
                uStack_194 = (undefined4)((ulonglong)plVar17 >> 0x20);
                puVar12 = auVar3._8_8_;
                local_88 = local_1a0._0_4_;
                uStack_84 = local_1a0._4_4_;
                uStack_80 = local_1a0._8_4_;
                uStack_7c = uStack_194;
                local_c8 = local_1a0._0_4_;
                uStack_c4 = local_1a0._4_4_;
                uStack_c0 = local_1a0._8_4_;
                uStack_bc = uStack_194;
                _local_1a0 = auVar3;
                if (puVar12 != (undefined8 *)0x0) {
                  LOCK();
                  piVar1 = (int *)(puVar12 + 1);
                  iVar18 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar18 == 1) {
                    (**(code **)*puVar12)(puVar12);
                    LOCK();
                    piVar1 = (int *)((longlong)puVar12 + 0xc);
                    iVar18 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar18 == 1) {
                      (**(code **)(*stack0xfffffffffffffe68 + 8))(stack0xfffffffffffffe68,1);
                    }
                  }
                }
                LOCK();
                plVar8 = plVar17 + 1;
                lVar15 = *plVar8;
                *(int *)plVar8 = (int)*plVar8 + -1;
                UNLOCK();
                if ((int)lVar15 == 1) {
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
                plVar9 = (longlong *)(*(code *)param_1[0x9c])(local_138,local_b8,local_108);
                plVar4 = local_130;
                local_1b8 = *plVar9;
                plVar8 = (longlong *)plVar9[1];
                plVar9[1] = 0;
                *plVar9 = 0;
                lVar15 = plVar9[2];
                if (local_130 != (longlong *)0x0) {
                  LOCK();
                  plVar9 = local_130 + 1;
                  lVar22 = *plVar9;
                  *(int *)plVar9 = (int)*plVar9 + -1;
                  UNLOCK();
                  if ((int)lVar22 == 1) {
                    (**(code **)*local_130)(local_130);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar4 + 0xc);
                    iVar18 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar18 == 1) {
                      (**(code **)(*plVar4 + 8))(plVar4,1);
                    }
                  }
                }
                *(undefined4 *)(plVar16 + 0x1c) = uVar26;
                if (((int)lVar15 == 3) ||
                   ((((int)lVar15 != 1 && (local_1b8 != 0)) &&
                    ((*(uint *)(local_1b8 + 0x98) >> 2 & 1) != 0)))) {
                  FUN_142b9a660(plVar16);
                  uVar14 = *(uint *)(plVar16 + 0x13);
                  iVar18 = *piVar20;
                  *(uint *)(plVar16 + 0x13) = uVar14 & 0xfffffeff | 1;
                  if ((uVar14 & 0x200) != 0) {
                    (**(code **)(*plVar16 + 0x60))(plVar16,iVar18);
                  }
                  TBaseMulticastDelegate<void,FPhysScene_*,enum_EPhysicsSceneType>::Broadcast
                            (plVar16 + 0x10,plVar16);
                  if (*piVar20 == 1) {
                    LOCK();
                    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
                    UNLOCK();
                    local_158 = plVar16;
                    local_150 = plVar17;
                    FUN_142b94cf0(param_1,&local_158);
                  }
                }
                else {
                  TBaseMulticastDelegate<void,FPhysScene_*,enum_EPhysicsSceneType>::Broadcast
                            (plVar16 + 0x10,plVar16);
                  *(uint *)(plVar16 + 0x13) = *(uint *)(plVar16 + 0x13) & 0xfffffeff;
                }
                if (plVar8 != (longlong *)0x0) {
                  LOCK();
                  plVar16 = plVar8 + 1;
                  lVar15 = *plVar16;
                  *(int *)plVar16 = (int)*plVar16 + -1;
                  UNLOCK();
                  if ((int)lVar15 == 1) {
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
                if (local_98 != 0) {
                  FMemory::Free();
                }
                plVar16 = (longlong *)CONCAT44(uStack_bc,uStack_c0);
                if (plVar16 != (longlong *)0x0) {
                  LOCK();
                  plVar8 = plVar16 + 1;
                  lVar15 = *plVar8;
                  *(int *)plVar8 = (int)*plVar8 + -1;
                  UNLOCK();
                  if ((int)lVar15 == 1) {
                    (**(code **)*plVar16)(plVar16);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar16 + 0xc);
                    iVar18 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar18 == 1) {
                      (**(code **)(*plVar16 + 8))(plVar16,1);
                    }
                  }
                }
                plVar16 = local_e0;
                if (local_e0 != (longlong *)0x0) {
                  LOCK();
                  plVar8 = local_e0 + 1;
                  lVar15 = *plVar8;
                  *(int *)plVar8 = (int)*plVar8 + -1;
                  UNLOCK();
                  if ((int)lVar15 == 1) {
                    (**(code **)*local_e0)(local_e0);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar16 + 0xc);
                    iVar18 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar18 == 1) {
                      (**(code **)(*plVar16 + 8))(plVar16,1);
                    }
                  }
                }
                LOCK();
                plVar16 = plVar17 + 1;
                lVar15 = *plVar16;
                *(int *)plVar16 = (int)*plVar16 + -1;
                UNLOCK();
                if ((int)lVar15 == 1) {
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
              break;
            }
            LOCK();
            iVar18 = (int)plVar17[1];
            bVar23 = iVar18 == 0;
            if (bVar23) {
              *(int *)(plVar17 + 1) = 0;
              iVar18 = 0;
            }
            UNLOCK();
          }
        }
        piVar20 = piVar20 + 6;
        local_1b0 = local_1b0 - 1;
      } while (local_1b0 != 0);
      local_1b0 = 0;
      uVar14 = local_1c0;
    }
    if (uVar14 != 0) {
      plVar17 = (longlong *)(local_1c8 + 8);
      do {
        plVar16 = (longlong *)*plVar17;
        if (plVar16 != (longlong *)0x0) {
          LOCK();
          piVar20 = (int *)((longlong)plVar16 + 0xc);
          iVar18 = *piVar20;
          *piVar20 = *piVar20 + -1;
          UNLOCK();
          if ((iVar18 == 1) && (plVar16 != (longlong *)0x0)) {
            (**(code **)(*plVar16 + 8))(plVar16,1);
          }
        }
        plVar17 = plVar17 + 3;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    if (local_1c8 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142b99a30 FUN_142b99a30 body=480 status=ok
// SIG undefined FUN_142b99a30(void)

void FUN_142b99a30(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  longlong **pplVar10;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  longlong *local_58 [2];
  undefined8 local_48 [2];
  undefined1 local_38 [32];
  
  iVar2 = DAT_1464a820c;
  if (((DAT_146b2bb10 != 0x800) && (iVar2 = DAT_1464a8208, DAT_146b2bb10 != 0x1000)) ||
     (uVar9 = DAT_146b2bb18, iVar2 != 0)) {
    uVar9 = DAT_146b2bb14 | DAT_146b2bb10;
  }
  local_68 = 0;
  FUN_142b7d670(&local_68,*param_2,*(undefined4 *)(param_2 + 1),0,0);
  local_78 = 0;
  FUN_142b7d670(&local_78,local_68,local_60,0,0);
  plVar6 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_58[0] = plVar6;
  if (plVar6 != (longlong *)0x0) {
    local_48[0] = 0;
    FUN_142b7d670(local_48,local_78,local_70,0,0);
    TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(void),TArray<FAsyncPathFindingQuery,FDefaultAllocator>_>
    ::
    TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(void),TArray<FAsyncPathFindingQuery,FDefaultAllocator>_>
              (plVar6,param_1,FUN_142b92ae0,local_48);
  }
  TArray<FAsyncPathFindingQuery,FDefaultAllocator>::
  ~TArray<FAsyncPathFindingQuery,FDefaultAllocator>(&local_78);
  TArray<FAsyncPathFindingQuery,FDefaultAllocator>::
  ~TArray<FAsyncPathFindingQuery,FDefaultAllocator>(&local_68);
  plVar7 = (longlong *)FUN_141d29000(local_38,0,0xff);
  lVar8 = *plVar7;
  pplVar10 = (longlong **)(lVar8 + 0x10);
  *pplVar10 = (longlong *)0x0;
  *(undefined4 *)(lVar8 + 0x18) = 0;
  if ((local_58 != pplVar10) && (plVar6 != (longlong *)0x0)) {
    (**(code **)(*plVar6 + 0x30))(plVar6,pplVar10);
  }
  *(uint *)(lVar8 + 0x20) = uVar9 | 0xff;
  lVar8 = *plVar7;
  lVar5 = plVar7[2];
  lVar3 = plVar7[1];
  lVar4 = *(longlong *)(lVar8 + 0x30);
  piVar1 = (int *)(lVar4 + 0x48);
  if (lVar4 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    plVar6 = local_58[0];
  }
  FUN_1409691d0(lVar8,lVar3,(int)lVar5,1);
  if (lVar4 != 0) {
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    plVar6 = local_58[0];
    if (iVar2 == 1) {
      FGraphEvent::Recycle(lVar4);
      plVar6 = local_58[0];
    }
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6,0);
    lVar8 = FMemory::Realloc(plVar6,0,0);
    if (lVar8 != 0) {
      FMemory::Free(lVar8);
    }
  }
  return;
}



// FUNCTION 142b99c10 FUN_142b99c10 body=161 status=ok
// SIG undefined FUN_142b99c10(void)

void FUN_142b99c10(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  if ((*(uint *)(param_1 + 0xc2) & 1) == 0) {
    return;
  }
  *(uint *)(param_1 + 0xc2) = *(uint *)(param_1 + 0xc2) & 0xfffffffe;
  lVar3 = (**(code **)(*param_1 + 0x148))();
  if ((lVar3 != 0) && (plVar1 = *(longlong **)(lVar3 + 0x138), plVar1 != (longlong *)0x0)) {
    lVar3 = FUN_142ba9430();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x2e0))(plVar1,param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142b99ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x6e8))(param_1);
  return;
}



// FUNCTION 142b99cc0 FUN_142b99cc0 body=157 status=ok
// SIG undefined FUN_142b99cc0(void)

void FUN_142b99cc0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  BOOL BVar3;
  longlong *plVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  
  plVar1 = *(longlong **)(param_1 + 0x68);
  plVar4 = plVar1;
  do {
    if (plVar4 == plVar1 + *(int *)(param_1 + 0x70)) {
LAB_142b99d20:
      if (param_2 != 0) {
        lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x1f8);
        BVar3 = TryEnterCriticalSection(lpCriticalSection);
        if (BVar3 == 0) {
          EnterCriticalSection(lpCriticalSection);
        }
        *(uint *)(param_2 + 0x610) = *(uint *)(param_2 + 0x610) & 0xfffffffe;
        LeaveCriticalSection(lpCriticalSection);
      }
      return;
    }
    if (*plVar4 == param_2) {
      iVar2 = (int)((longlong)plVar4 - (longlong)plVar1 >> 3);
      if (iVar2 != -1) {
        _guard_xfg_dispatch_icall_nop
                  (plVar1 + iVar2,plVar1 + iVar2 + 1,
                   (longlong)((*(int *)(param_1 + 0x70) - iVar2) + -1) << 3);
        *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + -1;
      }
      goto LAB_142b99d20;
    }
    plVar4 = plVar4 + 1;
  } while( true );
}



// FUNCTION 142b99d60 FUN_142b99d60 body=1057 status=ok
// SIG undefined FUN_142b99d60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142b99d60(longlong *param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  longlong local_c0;
  undefined8 local_b8 [2];
  uint local_a8 [2];
  longlong local_a0;
  longlong local_98;
  int local_90;
  int local_88;
  undefined4 uStack_84;
  int local_80;
  longlong local_78;
  longlong local_70;
  int local_68;
  undefined8 local_60;
  undefined8 local_58;
  char local_50;
  undefined7 uStack_4f;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if (param_1[6] != 0) {
    iVar18 = *(int *)(param_1[6] + 0xc);
    if (iVar18 < (int)DAT_1469e91c4) {
      uVar14 = iVar18 >> 0x1f & 0xffff;
      uVar7 = iVar18 + uVar14;
      lVar13 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
               (longlong)(int)((uVar7 & 0xffff) - uVar14) * 0x18;
    }
    else {
      lVar13 = 0;
    }
    if ((*(uint *)(lVar13 + 8) >> 0x1d & 1) == 0) {
      return;
    }
  }
  local_c8 = param_1;
  uVar8 = (**(code **)(*param_1 + 0x148))(param_1);
  local_c0 = FUN_142ba6e70();
  if (local_c0 != 0) {
    lVar9 = FUN_142ba6e70();
    lVar13 = local_c0;
    do {
      if (lVar13 == lVar9) goto LAB_142b99e18;
      lVar13 = *(longlong *)(lVar13 + 0x30);
    } while (lVar13 != 0);
  }
  local_c0 = 0;
LAB_142b99e18:
  local_a8[0] = 5;
  local_50 = '\0';
  local_b8[0] = uVar8;
  FUN_14044bc80(&local_a0,local_b8,&local_c0);
  FUN_14045a130(local_a8);
  lVar13 = local_a0;
joined_r0x000142b99e49:
  local_a0 = lVar13;
  if ((char)uStack_84 != '\0') {
LAB_142b9a0a0:
    if (local_50 != '\0') {
      local_50 = '\0';
      UWorld::RemoveOnActorSpawnedHandler(local_a0,local_58);
      if (local_70 != 0) {
        FMemory::Free();
      }
      if (local_98 != 0) {
        FMemory::Free();
      }
    }
    if (param_1[6] == 0) {
      FUN_142243f40(local_a8,0x420c0000,0x43100000);
      local_60 = FUN_142ba6e70();
      lVar13 = (**(code **)(*param_1 + 0x2c0))(param_1,local_a8);
      param_1[6] = lVar13;
      if (lVar13 != 0) {
        *(uint *)(lVar13 + 8) = *(uint *)(lVar13 + 8) | 0x40;
      }
      if (CONCAT71(uStack_4f,local_50) != 0) {
        FMemory::Free();
      }
      if (CONCAT44(uStack_84,local_88) != 0) {
        FMemory::Free();
      }
    }
    return;
  }
  if (local_78 != 0) {
    iVar18 = *(int *)(local_78 + 0xc);
    if (iVar18 < (int)DAT_1469e91c4) {
      uVar14 = iVar18 >> 0x1f & 0xffff;
      uVar7 = iVar18 + uVar14;
      lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
              (longlong)(int)((uVar7 & 0xffff) - uVar14) * 0x18;
    }
    else {
      lVar9 = 0;
    }
    if ((*(uint *)(lVar9 + 8) >> 0x1d & 1) == 0) {
      local_c8[6] = local_78;
      param_1 = local_c8;
      goto LAB_142b9a0a0;
    }
  }
  iVar18 = local_88 + 1;
  if (iVar18 < local_68 + local_90) {
    lVar9 = (longlong)iVar18 * 8;
    iVar17 = local_68;
    iVar15 = local_90;
    do {
      if (iVar18 < iVar15) {
        lVar16 = *(longlong *)(local_98 + lVar9);
      }
      else {
        lVar16 = *(longlong *)(local_70 + (longlong)(iVar18 - iVar15) * 8);
      }
      local_80 = local_80 + 1;
      if ((lVar16 != 0) &&
         (lVar10 = AActor::GetLevel(lVar16), iVar17 = local_68, iVar15 = local_90, lVar10 != 0)) {
        if ((local_a8[0] & 1) != 0) {
          iVar1 = *(int *)(lVar16 + 0xc);
          if (iVar1 < (int)DAT_1469e91c4) {
            uVar14 = iVar1 >> 0x1f & 0xffff;
            uVar7 = iVar1 + uVar14;
            lVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                     (longlong)(int)((uVar7 & 0xffff) - uVar14) * 0x18;
          }
          else {
            lVar11 = 0;
          }
          if ((*(uint *)(lVar11 + 8) >> 0x1d & 1) != 0) goto LAB_142b9a05c;
        }
        if (((local_a8[0] >> 1 & 1) == 0) ||
           (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(lVar16), iVar17 = local_68,
           iVar15 = local_90, cVar6 != '\0')) {
          if ((local_a8[0] >> 2 & 1) != 0) {
            if (((*(byte *)(lVar10 + 0x204) & 0x10) == 0) &&
               ((*(byte *)(lVar10 + 0x205) & 0x10) == 0)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            piVar2 = *(int **)(lVar10 + 600);
            if (((*(longlong *)(lVar10 + 0xc0) == 0) ||
                (piVar12 = (int *)UWorld::GetActiveLevelCollection(), piVar12 == (int *)0x0)) ||
               (piVar2 == piVar12)) {
              bVar3 = true;
            }
            else {
              bVar3 = false;
            }
            if ((piVar2 == (int *)0x0) || (*piVar2 == 2)) {
              bVar4 = true;
            }
            else {
              bVar4 = false;
            }
            if ((bVar3) || (bVar3 = false, bVar4)) {
              bVar3 = true;
            }
            iVar17 = local_68;
            iVar15 = local_90;
            if ((!bVar5) || (!bVar3)) goto LAB_142b9a05c;
          }
          lVar10 = ULevel::GetWorld(lVar10);
          iVar17 = local_68;
          iVar15 = local_90;
          if (lVar10 == lVar13) {
            lVar10 = AActor::GetLevel(lVar16);
            if (lVar10 == *(longlong *)(lVar13 + 0x30)) goto LAB_142b9a15d;
            lVar10 = UVoipListenerSynthComponent::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            iVar17 = local_68;
            iVar15 = local_90;
            if (!bVar5) goto LAB_142b9a15d;
          }
        }
      }
LAB_142b9a05c:
      iVar18 = iVar18 + 1;
      lVar9 = lVar9 + 8;
      if (iVar17 + iVar15 <= iVar18) break;
    } while( true );
  }
  local_78 = 0;
  uStack_84 = CONCAT31(uStack_84._1_3_,1);
  param_1 = local_c8;
  goto LAB_142b9a0a0;
LAB_142b9a15d:
  param_1 = local_c8;
  lVar13 = local_a0;
  local_88 = iVar18;
  local_78 = lVar16;
  goto joined_r0x000142b99e49;
}



// FUNCTION 142b9a190 FUN_142b9a190 body=431 status=ok
// SIG undefined FUN_142b9a190(void)

void FUN_142b9a190(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  uint uStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  plVar1 = (longlong *)(param_1 + 0x220);
  iVar2 = *(int *)(param_1 + 0x248);
  local_78 = 0;
  uStack_74 = 1;
  puStack_28 = (uint *)(param_1 + 0x230);
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar2 != 0) {
    puVar8 = *(uint **)(param_1 + 0x240);
    if (*(uint **)(param_1 + 0x240) == (uint *)0x0) {
      puVar8 = puStack_28;
    }
    uVar6 = *puVar8;
    local_78 = 0;
    uStack_60 = 0;
    while (uVar6 == 0) {
      lVar7 = (longlong)(int)local_78;
      uStack_60 = uStack_60 + 0x20;
      uVar6 = local_78 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_78;
      local_78 = uVar6;
      if (bVar3) goto LAB_142b9a25f;
      uVar6 = puVar8[lVar7 + 1];
    }
    uStack_74 = -uVar6 & uVar6;
    iVar4 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    local_68._4_4_ = (uStack_60 - iVar4) + 0x1f;
    if (iVar2 < local_68._4_4_) {
LAB_142b9a25f:
      local_68._4_4_ = iVar2;
    }
  }
  auStack_20._4_4_ = local_68._4_4_;
  auStack_20._0_4_ = 0xffffffff;
  auStack_20._8_4_ = uStack_60;
  auStack_20._12_4_ = iStack_5c;
  uStack_30 = local_78;
  uStack_2c = uStack_74;
  local_40 = 0;
  local_10._0_4_ = SUB84(plVar1,0);
  local_10._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  uStack_70 = local_78;
  uStack_6c = uStack_74;
  local_58._8_4_ = (undefined4)local_10;
  local_58._0_8_ = auStack_20._8_8_;
  local_58._12_4_ = local_10._4_4_;
  bVar3 = local_68._4_4_ < *(int *)(param_1 + 0x248);
  local_48 = plVar1;
  local_38 = plVar1;
  local_10 = plVar1;
  local_68 = puStack_28;
  if (bVar3) {
    do {
      plVar5 = (longlong *)FWeakObjectPtr::Get(*plVar1 + 0x30 + (longlong)iStack_5c * 0x40);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x840))(plVar5,param_2);
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    } while (iStack_5c < (int)local_68[6]);
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      TSet<TTuple<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 142b9a340 FUN_142b9a340 body=796 status=ok
// SIG undefined FUN_142b9a340(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b9a340(longlong *param_1)

{
  undefined4 *puVar1;
  float fVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint *puVar13;
  LARGE_INTEGER local_res8;
  ulonglong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  int iStack_c4;
  uint uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  longlong *local_a8;
  undefined8 uStack_a0;
  uint *local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  longlong *local_78;
  undefined2 local_70;
  undefined8 local_68;
  undefined4 local_60;
  longlong *local_58;
  undefined8 uStack_50;
  uint *puStack_48;
  undefined1 auStack_40 [16];
  undefined8 local_30;
  
  lVar7 = (**(code **)(*param_1 + 0x148))();
  fVar2 = *(float *)(lVar7 + 0x790);
  if (*(float *)(param_1 + 0x3a) <= fVar2) {
    uVar9 = 0;
    local_e8 = 0;
    local_e0 = 0;
    uVar12 = uVar9;
    if (0 < (int)param_1[0x31] - *(int *)((longlong)param_1 + 0x1b4)) {
      QueryPerformanceCounter(&local_res8);
      if (0 < (int)param_1[0x31] - *(int *)((longlong)param_1 + 0x1b4)) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeTo
                  (&local_e8);
        uVar12 = local_e8;
      }
      local_a8 = param_1 + 0x30;
      iVar6 = (int)param_1[0x35];
      uStack_d0 = (uint *)(param_1 + 0x32);
      local_d8 = 0x100000000;
      iStack_c4 = 0;
      uStack_c0 = 0;
      if (iVar6 != 0) {
        puVar13 = (uint *)param_1[0x34];
        if ((uint *)param_1[0x34] == (uint *)0x0) {
          puVar13 = uStack_d0;
        }
        uVar4 = *puVar13;
        uVar10 = uVar9;
        while (uVar4 == 0) {
          iVar5 = (int)uVar10;
          uStack_c0 = (int)uVar9 + 0x20;
          uVar9 = (ulonglong)uStack_c0;
          uVar10 = (ulonglong)(iVar5 + 1U);
          local_d8._4_4_ = (undefined4)((ulonglong)local_d8 >> 0x20);
          local_d8 = CONCAT44(local_d8._4_4_,iVar5 + 1U);
          if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_142b9a47b;
          uVar4 = puVar13[(longlong)iVar5 + 1];
        }
        uVar4 = -uVar4 & uVar4;
        iVar5 = 0x1f;
        if (uVar4 != 0) {
          for (; uVar4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        local_d8 = CONCAT44(uVar4,(undefined4)local_d8);
        if (uVar4 == 0) {
          iVar5 = 0x20;
        }
        else {
          iVar5 = 0x1f - iVar5;
        }
        iStack_c4 = (uStack_c0 - iVar5) + 0x1f;
        if (iVar6 < iStack_c4) {
LAB_142b9a47b:
          iStack_c4 = iVar6;
        }
      }
      local_c8 = 0xffffffff;
      uStack_90 = CONCAT44(iStack_c4,0xffffffff);
      auStack_40._8_4_ = uStack_c0;
      auStack_40._0_8_ = uStack_90;
      auStack_40._12_4_ = uStack_bc;
      uStack_50 = local_d8;
      local_70 = 0;
      local_30._0_4_ = SUB84(local_a8,0);
      local_30._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
      uStack_a0 = local_d8;
      local_88._8_4_ = (undefined4)local_30;
      local_88._0_8_ = auStack_40._8_8_;
      local_88._12_4_ = local_30._4_4_;
      iVar6 = iStack_c4;
      local_98 = uStack_d0;
      local_78 = local_a8;
      local_58 = local_a8;
      puStack_48 = uStack_d0;
      local_30 = local_a8;
      if (iStack_c4 < (int)param_1[0x35]) {
        do {
          plVar3 = local_a8;
          lVar11 = (longlong)iVar6 * 0x20;
          lVar7 = FWeakObjectPtr::Get(*local_a8 + 8 + lVar11);
          uVar9 = local_e0;
          if (lVar7 == 0) {
            TSet<TTuple<FPolygonID,FOctreeElementId>,TDefaultMapHashableKeyFuncs<FPolygonID,FOctreeElementId,0>,FDefaultSetAllocator>
            ::Remove(local_88._8_8_,iVar6);
            local_70 = CONCAT11(local_70._1_1_,1);
          }
          else {
            lVar7 = *(longlong *)(lVar7 + 0x168);
            if (lVar7 == 0) {
              local_60 = DAT_1468b5d98;
              puVar8 = &local_68;
              local_68 = _DAT_1468b5d90;
            }
            else {
              puVar8 = (undefined8 *)&local_b8;
              local_b8 = *(undefined4 *)(lVar7 + 0x220);
              local_b0 = *(undefined4 *)(lVar7 + 0x228);
              uStack_b4 = *(undefined4 *)(lVar7 + 0x224);
            }
            local_d8 = *puVar8;
            local_c8 = *(undefined4 *)(lVar11 + 0x14 + *plVar3);
            lVar7 = (longlong)(int)local_e0;
            uStack_d0 = (uint *)CONCAT44(*(undefined4 *)(lVar11 + 0x10 + *plVar3),
                                         *(undefined4 *)(puVar8 + 1));
            iVar6 = (int)local_e0 + 1;
            local_e0 = CONCAT44(local_e0._4_4_,iVar6);
            if (local_e0._4_4_ < iVar6) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
              ResizeGrow(&local_e8,uVar9 & 0xffffffff);
              uVar12 = local_e8;
            }
            puVar1 = (undefined4 *)(uVar12 + lVar7 * 0x14);
            *puVar1 = (undefined4)local_d8;
            puVar1[1] = local_d8._4_4_;
            puVar1[2] = (undefined4)uStack_d0;
            puVar1[3] = uStack_d0._4_4_;
            *(undefined4 *)(uVar12 + 0x10 + lVar7 * 0x14) = local_c8;
          }
          uStack_90 = CONCAT44(uStack_90._4_4_,(uint)uStack_90 & ~uStack_a0._4_4_);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
          iVar6 = uStack_90._4_4_;
        } while (uStack_90._4_4_ < (int)local_98[6]);
        if (((char)local_70 != '\0') && (local_70._1_1_ != '\0')) {
          TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34),1);
        }
      }
    }
    *(float *)(param_1 + 0x3a) = fVar2 + *(float *)((longlong)param_1 + 0x4c);
    if (uVar12 != 0) {
      FMemory::Free(uVar12);
    }
  }
  return;
}



// FUNCTION 142b9a660 FUN_142b9a660 body=194 status=ok
// SIG undefined FUN_142b9a660(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b9a660(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  undefined1 local_20 [24];
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x40);
  if (cVar2 != '\0') {
    plVar1 = *(longlong **)(param_1 + 0x48);
    if (plVar1 == (longlong *)0x0) {
      lVar4 = FWeakObjectPtr::Get(param_1 + 0x40);
      lVar4 = *(longlong *)(lVar4 + 0x168);
      if (lVar4 == 0) {
        local_38 = _DAT_1468b5d90;
        local_30 = DAT_1468b5d98;
      }
      else {
        local_38 = *(undefined8 *)(lVar4 + 0x220);
        local_30 = *(undefined4 *)(lVar4 + 0x228);
      }
      local_24 = local_30;
      puVar3 = &local_2c;
      local_2c = local_38;
    }
    else {
      puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x18))(plVar1,local_20);
    }
    *(undefined8 *)(param_1 + 0xe8) = *puVar3;
    *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(puVar3 + 1);
  }
  return;
}



// FUNCTION 142b9a730 FUN_142b9a730 body=1292 status=ok
// SIG undefined FUN_142b9a730(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142b9a730(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  longlong *plVar12;
  longlong *plVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  longlong *plStack_b0;
  longlong local_a8;
  longlong local_a0;
  uint local_98 [2];
  longlong local_90;
  longlong local_88;
  int local_80;
  int local_78;
  char local_74;
  int local_70;
  longlong *local_68;
  longlong local_60;
  int local_58;
  undefined8 local_48;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  *(uint *)((longlong)param_1 + 0x4e4) = *(uint *)((longlong)param_1 + 0x4e4) & 0xfffffff8;
  param_1[0x9d] = 0;
  local_b8 = (longlong *)0x0;
  plStack_b0 = (longlong *)0x0;
  if ((longlong **)(param_1 + 0xa4) != &local_b8) {
    param_1[0xa4] = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xa5,&plStack_b0);
    plVar12 = plStack_b0;
    if (plStack_b0 != (longlong *)0x0) {
      LOCK();
      plVar13 = plStack_b0 + 1;
      lVar8 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_b0)(plStack_b0);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar17 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar17 == 1) {
          (**(code **)(*plStack_b0 + 8))(plStack_b0,1);
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0xa1) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9e) = 0;
  if ((((param_1[0x98] == 0) && (lVar8 = (**(code **)(*param_1 + 0x148))(param_1), lVar8 != 0)) &&
      (lVar8 = (**(code **)(*param_1 + 0x148))(param_1), *(longlong *)(lVar8 + 0x138) != 0)) &&
     ((lVar8 = (**(code **)(*param_1 + 0x148))(param_1), lVar8 != 0 &&
      (lVar8 = *(longlong *)(lVar8 + 0x138), lVar8 != 0)))) {
    lVar9 = FUN_142ba9430();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar8 = FUN_142b8f070(lVar8,param_1 + 0x90);
      param_1[0x98] = lVar8;
    }
  }
  if (((*(byte *)((longlong)param_1 + 0x4d4) & 2) != 0) ||
     ((param_1[0x9f] != 0 && ((*(byte *)(param_1[0x9f] + 0x4d4) & 2) != 0)))) {
    plVar12 = (longlong *)param_1[0x9f];
    if (plVar12 == (longlong *)0x0) {
      local_b8 = (longlong *)0x0;
      lVar8 = ARemnantQuest::GetPrivateStaticClass();
      local_a8 = (**(code **)(*param_1 + 0x148))(param_1);
      if (lVar8 != 0) {
        lVar10 = ARemnantQuest::GetPrivateStaticClass();
        lVar9 = lVar8;
        do {
          if (lVar9 == lVar10) goto LAB_142b9a910;
          lVar9 = *(longlong *)(lVar9 + 0x30);
        } while (lVar9 != 0);
      }
      lVar8 = 0;
LAB_142b9a910:
      local_98[0] = 5;
      local_40 = '\0';
      local_a0 = lVar8;
      FUN_14044bc80(&local_90,&local_a8,&local_a0);
      FUN_14045a130(local_98);
      plVar12 = (longlong *)0x0;
      if (local_74 == '\0') {
LAB_142b9a967:
        if ((local_68 != (longlong *)0x0) && (local_68 != param_1)) {
          if ((longlong *)local_68[0x9f] == param_1) {
            param_1[0x9f] = (longlong)local_68;
            goto LAB_142b9ab71;
          }
          if (((*(byte *)((longlong)param_1 + 0x4d4) & 2) != 0) &&
             (local_b8 = plVar12, (longlong *)local_68[0x9f] == (longlong *)0x0)) {
            local_b8 = local_68;
          }
        }
        iVar17 = local_78 + 1;
        local_a8 = local_90;
        if (iVar17 < local_58 + local_80) {
          lVar8 = (longlong)iVar17 * 8;
          iVar16 = local_58;
          iVar14 = local_80;
          do {
            if (iVar17 < iVar14) {
              plVar13 = *(longlong **)(lVar8 + local_88);
            }
            else {
              plVar13 = *(longlong **)(local_60 + (longlong)(iVar17 - iVar14) * 8);
            }
            local_70 = local_70 + 1;
            if ((plVar13 != (longlong *)0x0) &&
               (lVar9 = AActor::GetLevel(plVar13), iVar16 = local_58, iVar14 = local_80, lVar9 != 0)
               ) {
              if ((local_98[0] & 1) != 0) {
                iVar2 = *(int *)((longlong)plVar13 + 0xc);
                if (iVar2 < (int)DAT_1469e91c4) {
                  uVar15 = iVar2 >> 0x1f & 0xffff;
                  uVar7 = iVar2 + uVar15;
                  lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                           (longlong)(int)((uVar7 & 0xffff) - uVar15) * 0x18;
                }
                else {
                  lVar10 = 0;
                }
                if ((*(uint *)(lVar10 + 8) >> 0x1d & 1) != 0) goto LAB_142b9ab39;
              }
              if (((local_98[0] >> 1 & 1) == 0) ||
                 (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(plVar13), iVar16 = local_58,
                 iVar14 = local_80, cVar6 != '\0')) {
                if ((local_98[0] >> 2 & 1) != 0) {
                  if (((*(byte *)(lVar9 + 0x204) & 0x10) == 0) &&
                     ((*(byte *)(lVar9 + 0x205) & 0x10) == 0)) {
                    bVar3 = false;
                  }
                  else {
                    bVar3 = true;
                  }
                  piVar1 = *(int **)(lVar9 + 600);
                  if (((*(longlong *)(lVar9 + 0xc0) == 0) ||
                      (piVar11 = (int *)UWorld::GetActiveLevelCollection(), piVar11 == (int *)0x0))
                     || (piVar1 == piVar11)) {
                    bVar4 = true;
                  }
                  else {
                    bVar4 = false;
                  }
                  if ((piVar1 == (int *)0x0) || (*piVar1 == 2)) {
                    bVar5 = true;
                  }
                  else {
                    bVar5 = false;
                  }
                  if ((bVar4) || (bVar4 = false, bVar5)) {
                    bVar4 = true;
                  }
                  iVar16 = local_58;
                  iVar14 = local_80;
                  if ((!bVar3) || (!bVar4)) goto LAB_142b9ab39;
                }
                lVar10 = ULevel::GetWorld(lVar9);
                lVar9 = local_a8;
                iVar16 = local_58;
                iVar14 = local_80;
                if (lVar10 == local_a8) {
                  lVar10 = AActor::GetLevel(plVar13);
                  if (lVar10 == *(longlong *)(lVar9 + 0x30)) goto LAB_142b9abf5;
                  lVar9 = UVoipListenerSynthComponent::GetPrivateStaticClass();
                  if ((*(int *)(plVar13[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(plVar13[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
                      lVar9 + 0x88)) {
                    bVar3 = false;
                  }
                  else {
                    bVar3 = true;
                  }
                  iVar16 = local_58;
                  iVar14 = local_80;
                  if (!bVar3) goto LAB_142b9abf5;
                }
              }
            }
LAB_142b9ab39:
            iVar17 = iVar17 + 1;
            lVar8 = lVar8 + 8;
            if (iVar16 + iVar14 <= iVar17) break;
          } while( true );
        }
        local_68 = (longlong *)0x0;
        local_74 = '\x01';
      }
LAB_142b9ab71:
      if (local_40 != '\0') {
        local_40 = '\0';
        UWorld::RemoveOnActorSpawnedHandler(local_90,local_48);
        if (local_60 != 0) {
          FMemory::Free();
        }
        if (local_88 != 0) {
          FMemory::Free();
        }
      }
      plVar12 = (longlong *)param_1[0x9f];
      if (plVar12 == (longlong *)0x0) {
        if (local_b8 != (longlong *)0x0) {
          param_1[0x9f] = (longlong)local_b8;
          local_b8[0x9f] = (longlong)param_1;
          plVar12 = (longlong *)param_1[0x9f];
        }
        if (plVar12 == (longlong *)0x0) {
          return;
        }
      }
    }
    plVar13 = plVar12;
    if ((*(byte *)((longlong)param_1 + 0x4d4) & 2) != 0) {
      plVar13 = param_1;
      param_1 = plVar12;
    }
    FUN_142b97030(plVar13,param_1);
  }
  return;
LAB_142b9abf5:
  plVar12 = local_b8;
  local_78 = iVar17;
  local_68 = plVar13;
  if (local_74 != '\0') goto LAB_142b9ab71;
  goto LAB_142b9a967;
}



// FUNCTION 142b9ac40 FUN_142b9ac40 body=22 status=ok
// SIG undefined FUN_142b9ac40(void)

void FUN_142b9ac40(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 + 1U;
  if (param_1 + 1U <= DAT_146687970) {
    uVar1 = DAT_146687970;
  }
  DAT_146687970 = uVar1;
  return;
}



// FUNCTION 142b9ac60 FUN_142b9ac60 body=2579 status=ok
// SIG undefined FUN_142b9ac60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142b9ac60(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  undefined8 uVar14;
  float *pfVar15;
  char cVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar23 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auStack_388 [32];
  float *local_368;
  float *local_360;
  longlong *local_358;
  longlong *local_350;
  char local_348;
  float local_340;
  longlong local_338;
  int local_330;
  uint local_32c;
  float local_328;
  float local_324;
  longlong local_320;
  int local_318;
  uint local_314;
  longlong local_310;
  undefined4 local_308;
  uint local_304;
  longlong local_300;
  undefined4 local_2f8;
  uint local_2f4;
  longlong local_2f0;
  undefined1 local_2e8 [16];
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  undefined1 local_288 [8];
  float fStack_280;
  float fStack_27c;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  uint local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined1 local_1b8;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined2 local_160;
  undefined2 local_15e;
  undefined1 local_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined1 local_148 [16];
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined1 local_108 [16];
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_388;
  lVar20 = *param_2;
  local_278 = *(float *)(lVar20 + 0x20);
  fStack_274 = *(float *)(lVar20 + 0x24);
  fStack_270 = *(float *)(lVar20 + 0x28);
  fStack_26c = *(float *)(lVar20 + 0x2c);
  FUN_1438ce9e0(&local_1e8);
  local_1e8 = CONCAT44(fStack_274,local_278);
  uStack_1e0 = CONCAT44(fStack_26c,fStack_270);
  local_1d4 = *(uint *)(param_1 + 0x30) ^ 0x80000000;
  local_1d8 = *(undefined4 *)(*param_2 + 0x30);
  local_1d0 = *(undefined4 *)(param_1 + 0x2c);
  local_1cc = *(undefined4 *)(param_1 + 0x38);
  local_1c8 = *(undefined4 *)(param_1 + 0x28);
  local_340 = *(float *)(param_1 + 0x18);
  _local_288 = ZEXT416((uint)local_340);
  local_1c4 = FUN_143716040(local_288);
  local_340 = *(float *)(param_1 + 0x18);
  _local_288 = ZEXT416((uint)local_340);
  local_1c0 = FUN_143716150(local_288);
  local_340 = *(float *)(param_1 + 0x1c);
  _local_288 = ZEXT416((uint)local_340);
  local_1bc = FUN_143716040(local_288);
  lVar20 = *param_2;
  fVar22 = *(float *)(param_1 + 0x34);
  lVar19 = 0;
  local_1b8 = 1;
  fVar40 = *(float *)(lVar20 + 0x38);
  local_1f8 = *(float *)(lVar20 + 0x3c);
  fVar21 = *(float *)(lVar20 + 0x38) * 0.9;
  local_320 = 0;
  local_318 = 0;
  local_314 = 0x80000000;
  local_338 = 0;
  local_330 = 0;
  local_32c = 0x80000000;
  local_340 = fVar21;
  local_2d8 = fVar21;
  fStack_2d4 = fVar21;
  fStack_2d0 = fVar21;
  fStack_2cc = fVar21;
  local_2c8 = fVar40;
  fStack_2c4 = fVar40;
  fStack_2c0 = fVar40;
  fStack_2bc = fVar40;
  local_2b8 = fVar22;
  fStack_2b4 = fVar22;
  fStack_2b0 = fVar22;
  fStack_2ac = fVar22;
  fStack_1f4 = local_1f8;
  fStack_1f0 = local_1f8;
  fStack_1ec = local_1f8;
  FUN_1438cf470(param_2[3],&local_1e8,&local_338);
  iVar13 = local_330 * 2;
  if ((int)(local_314 & 0x3fffffff) < iVar13) {
    iVar17 = (local_314 & 0x3fffffff) * 2;
    if (iVar13 < iVar17) {
      iVar13 = iVar17;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,&local_320,iVar13,0x50);
  }
  lVar18 = (longlong)local_330;
  lVar20 = lVar19;
  if (0 < local_330) {
    do {
      puVar1 = (undefined8 *)(local_338 + 0x10 + lVar20);
      local_268 = *puVar1;
      uStack_260 = puVar1[1];
      local_258 = *(undefined8 *)(local_338 + lVar20);
      uStack_250 = ((undefined8 *)(local_338 + lVar20))[1];
      pfVar15 = (float *)(local_338 + 0x30 + lVar20);
      local_248 = *pfVar15;
      fStack_244 = pfVar15[1];
      fStack_240 = pfVar15[2];
      fStack_23c = pfVar15[3];
      _local_288 = *(undefined1 (*) [16])(local_338 + 0x20 + lVar20);
      local_328 = *(float *)(local_338 + 0x48 + lVar20);
      local_324 = *(float *)(local_338 + 0x40 + lVar20);
      local_358 = &local_320;
      local_360 = &local_328;
      local_368 = &local_324;
      local_350 = param_2;
      FUN_1438d6900(&local_268,&local_258,&local_248,local_288);
      lVar18 = lVar18 + -1;
      lVar20 = lVar20 + 0x50;
    } while (lVar18 != 0);
  }
  local_330 = 0;
  if (-1 < (int)local_32c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_338,0x50,local_32c & 0x3fffffff);
  }
  lVar20 = (longlong)local_318;
  local_348 = fVar21 < fVar22;
  fVar24 = fVar22;
  fVar25 = fVar22;
  fVar26 = fVar22;
  fVar34 = fVar21;
  fVar35 = fVar21;
  fVar36 = fVar21;
  fVar37 = fVar40;
  fVar38 = fVar40;
  fVar39 = fVar40;
  local_2f0 = lVar20;
  cVar16 = local_348;
  if (0 < lVar20) {
    do {
      lVar18 = local_320;
      pfVar15 = (float *)(local_320 + lVar19);
      fVar4 = *pfVar15;
      fVar5 = pfVar15[1];
      fVar6 = pfVar15[2];
      fStack_22c = pfVar15[3];
      pfVar15 = (float *)(local_320 + 0x10 + lVar19);
      fVar41 = *pfVar15;
      fVar42 = pfVar15[1];
      fVar43 = pfVar15[2];
      fStack_21c = pfVar15[3];
      pfVar15 = (float *)(local_320 + 0x20 + lVar19);
      fVar7 = *pfVar15;
      fVar8 = pfVar15[1];
      fVar9 = pfVar15[2];
      fStack_20c = pfVar15[3];
      pfVar15 = (float *)(local_320 + 0x30 + lVar19);
      fVar10 = *pfVar15;
      fVar11 = pfVar15[1];
      fVar12 = pfVar15[2];
      fStack_1fc = pfVar15[3];
      local_2f0 = lVar20;
      local_238 = fVar4;
      fStack_234 = fVar5;
      fStack_230 = fVar6;
      local_228 = fVar41;
      fStack_224 = fVar42;
      fStack_220 = fVar43;
      local_218 = fVar7;
      fStack_214 = fVar8;
      fStack_210 = fVar9;
      local_208 = fVar10;
      fStack_204 = fVar11;
      fStack_200 = fVar12;
      iVar13 = FUN_1438d7180(&local_238,&local_228,param_2);
      if ((iVar13 != 0) && (iVar13 = FUN_1438d7180(&local_208,&local_218,param_2), iVar13 != 0)) {
        local_368 = &local_278;
        FUN_1438d5b00(&local_238,&local_228,&local_324,&local_1f8);
        local_368 = &local_278;
        FUN_1438d5b00(&local_218,&local_208,local_2e8,&local_1f8);
        lVar2 = *param_2;
        fVar22 = fVar22 * local_278;
        fVar24 = fVar24 * fStack_274;
        fVar25 = fVar25 * fStack_270;
        fVar26 = fVar26 * fStack_26c;
        local_258 = CONCAT44(fVar24 + fStack_234,fVar22 + local_238);
        uStack_250 = CONCAT44(fVar26 + fStack_22c,fVar25 + fStack_230);
        local_248 = fVar22 + local_208;
        fStack_244 = fVar24 + fStack_204;
        fStack_240 = fVar25 + fStack_200;
        fStack_23c = fVar26 + fStack_1fc;
        local_268 = CONCAT44(fVar24 + fStack_224,fVar22 + local_228);
        uStack_260 = CONCAT44(fVar26 + fStack_21c,fVar25 + fStack_220);
        local_288._4_4_ = fVar24 + fStack_214;
        local_288._0_4_ = fVar22 + local_218;
        fStack_280 = fVar25 + fStack_210;
        fStack_27c = fVar26 + fStack_20c;
        local_128 = (0.0 - fVar40) * *(float *)(lVar2 + 0x20);
        fStack_124 = (0.0 - fVar37) * *(float *)(lVar2 + 0x24);
        fStack_120 = (0.0 - fVar38) * *(float *)(lVar2 + 0x28);
        fStack_11c = (0.0 - fVar39) * *(float *)(lVar2 + 0x2c);
        FUN_1437f62c0(&local_338);
        local_358 = &local_338;
        local_360 = &local_128;
        local_368 = &local_248;
        FUN_1437f9c50(param_2[5],&local_258,&local_268,local_288);
        FUN_1437f6e60(&local_338,0);
        if (local_330 == 0) {
LAB_142b9b341:
          uVar14 = FUN_143703a50();
          local_330 = 0;
          if (-1 < (int)local_32c) {
            FUN_143702e10(uVar14,local_338,0x14,local_32c & 0x3fffffff);
          }
        }
        else {
          if (cVar16 != '\0') {
            FUN_1437f62c0(&local_310);
            lVar2 = *param_2;
            local_108._0_4_ = fVar21 * local_278 + local_228;
            local_108._4_4_ = fVar34 * fStack_274 + fStack_224;
            local_108._8_4_ = fVar35 * fStack_270 + fStack_220;
            local_108._12_4_ = fVar36 * fStack_26c + fStack_21c;
            local_f8 = fVar21 * local_278 + local_238;
            fStack_f4 = fVar34 * fStack_274 + fStack_234;
            fStack_f0 = fVar35 * fStack_270 + fStack_230;
            fStack_ec = fVar36 * fStack_26c + fStack_22c;
            local_358 = &local_310;
            local_360 = &local_118;
            local_368 = (float *)&local_268;
            fVar31 = (fStack_224 - fStack_234) * *(float *)(lVar2 + 0x20) -
                     *(float *)(lVar2 + 0x24) * (local_228 - local_238);
            fVar32 = (fStack_220 - fStack_230) * *(float *)(lVar2 + 0x24) -
                     *(float *)(lVar2 + 0x28) * (fStack_224 - fStack_234);
            fVar33 = (local_228 - local_238) * *(float *)(lVar2 + 0x28) -
                     *(float *)(lVar2 + 0x20) * (fStack_220 - fStack_230);
            fVar22 = fVar32 * fVar32;
            fVar24 = fVar33 * fVar33;
            fVar25 = fVar31 * fVar31;
            fVar28 = fVar24 + fVar22 + fVar25;
            fVar29 = fVar24 + fVar22 + fVar25;
            fVar30 = fVar24 + fVar22 + fVar25;
            fVar25 = fVar24 + fVar22 + fVar25;
            auVar23._4_4_ = fVar29;
            auVar23._0_4_ = fVar28;
            auVar23._8_4_ = fVar30;
            auVar23._12_4_ = fVar25;
            auVar23 = rsqrtps(local_108,auVar23);
            fVar22 = auVar23._0_4_;
            fVar24 = auVar23._4_4_;
            fVar26 = auVar23._8_4_;
            fVar27 = auVar23._12_4_;
            local_118 = (float)(~-(uint)(fVar28 <= 0.0) &
                               (uint)((3.0 - fVar22 * fVar28 * fVar22) * fVar22 * 0.5)) * fVar32 *
                        local_1f8;
            fStack_114 = (float)(~-(uint)(fVar29 <= 0.0) &
                                (uint)((3.0 - fVar24 * fVar29 * fVar24) * fVar24 * 0.5)) * fVar33 *
                         fStack_1f4;
            fStack_110 = (float)(~-(uint)(fVar30 <= 0.0) &
                                (uint)((3.0 - fVar26 * fVar30 * fVar26) * fVar26 * 0.5)) * fVar31 *
                         fStack_1f0;
            fStack_10c = (float)(~-(uint)(fVar25 <= 0.0) &
                                (uint)((3.0 - fVar27 * fVar25 * fVar27) * fVar27 * 0.5)) *
                         ((fStack_21c - fStack_22c) * *(float *)(lVar2 + 0x2c) -
                         *(float *)(lVar2 + 0x2c) * (fStack_21c - fStack_22c)) * fStack_1ec;
            FUN_1437f9c50(param_2[5],&local_f8,local_108,&local_258);
            FUN_1437f66a0(&local_338,&local_310);
            uVar14 = FUN_143703a50();
            local_308 = 0;
            if (-1 < (int)local_304) {
              FUN_143702e10(uVar14,local_310,0x14,local_304 & 0x3fffffff);
            }
            local_310 = 0;
            local_304 = 0x80000000;
            if (local_330 != 0) {
              FUN_1437f62c0(&local_300);
              lVar2 = *param_2;
              local_148._0_4_ = fVar21 * local_278 + local_208;
              local_148._4_4_ = fVar34 * fStack_274 + fStack_204;
              local_148._8_4_ = fVar35 * fStack_270 + fStack_200;
              local_148._12_4_ = fVar36 * fStack_26c + fStack_1fc;
              local_138 = fVar21 * local_278 + local_218;
              fStack_134 = fVar34 * fStack_274 + fStack_214;
              fStack_130 = fVar35 * fStack_270 + fStack_210;
              fStack_12c = fVar36 * fStack_26c + fStack_20c;
              local_358 = &local_300;
              local_360 = &local_158;
              local_368 = &local_248;
              fVar31 = *(float *)(lVar2 + 0x24) * (local_208 - local_218) -
                       (fStack_204 - fStack_214) * *(float *)(lVar2 + 0x20);
              fVar32 = *(float *)(lVar2 + 0x28) * (fStack_204 - fStack_214) -
                       (fStack_200 - fStack_210) * *(float *)(lVar2 + 0x24);
              fVar33 = *(float *)(lVar2 + 0x20) * (fStack_200 - fStack_210) -
                       (local_208 - local_218) * *(float *)(lVar2 + 0x28);
              fVar22 = fVar32 * fVar32;
              fVar24 = fVar33 * fVar33;
              fVar25 = fVar31 * fVar31;
              fVar28 = fVar24 + fVar22 + fVar25;
              fVar29 = fVar24 + fVar22 + fVar25;
              fVar30 = fVar24 + fVar22 + fVar25;
              fVar25 = fVar24 + fVar22 + fVar25;
              auVar3._4_4_ = fVar29;
              auVar3._0_4_ = fVar28;
              auVar3._8_4_ = fVar30;
              auVar3._12_4_ = fVar25;
              auVar23 = rsqrtps(local_148,auVar3);
              fVar22 = auVar23._0_4_;
              fVar24 = auVar23._4_4_;
              fVar26 = auVar23._8_4_;
              fVar27 = auVar23._12_4_;
              local_158 = (float)(~-(uint)(fVar28 <= 0.0) &
                                 (uint)((3.0 - fVar22 * fVar28 * fVar22) * fVar22 * 0.5)) * fVar32 *
                          local_1f8;
              fStack_154 = (float)(~-(uint)(fVar29 <= 0.0) &
                                  (uint)((3.0 - fVar24 * fVar29 * fVar24) * fVar24 * 0.5)) * fVar33
                           * fStack_1f4;
              fStack_150 = (float)(~-(uint)(fVar30 <= 0.0) &
                                  (uint)((3.0 - fVar26 * fVar30 * fVar26) * fVar26 * 0.5)) * fVar31
                           * fStack_1f0;
              fStack_14c = (float)(~-(uint)(fVar25 <= 0.0) &
                                  (uint)((3.0 - fVar27 * fVar25 * fVar27) * fVar27 * 0.5)) *
                           (*(float *)(lVar2 + 0x2c) * (fStack_1fc - fStack_20c) -
                           (fStack_1fc - fStack_20c) * *(float *)(lVar2 + 0x2c)) * fStack_1ec;
              FUN_1437f9c50(param_2[5],&local_138,local_148,local_288);
              FUN_1437f66a0(&local_338,&local_300);
              uVar14 = FUN_143703a50();
              local_2f8 = 0;
              if (-1 < (int)local_2f4) {
                FUN_143702e10(uVar14,local_300,0x14,local_2f4 & 0x3fffffff);
              }
              local_300 = 0;
              local_2f4 = 0x80000000;
              if (local_330 != 0) goto LAB_142b9b378;
            }
            goto LAB_142b9b341;
          }
LAB_142b9b378:
          fVar22 = *(float *)(*param_2 + 0x30);
          hkaiTraversalAnalysisUtils::contractIntervalPartitionByRadius(&local_338,local_324);
          iVar13 = local_330;
          iVar17 = 0;
          if (0 < local_330) {
            fVar41 = fVar41 - fVar4;
            fVar42 = fVar42 - fVar5;
            fVar43 = fVar43 - fVar6;
            do {
              pfVar15 = (float *)FUN_1437f7500(&local_338,iVar17);
              fVar40 = *pfVar15;
              fVar21 = pfVar15[1];
              fVar34 = fVar41 * fVar40 + fVar4;
              fVar35 = fVar42 * fVar40 + fVar5;
              fVar36 = fVar43 * fVar40 + fVar6;
              fVar37 = fVar41 * fVar21 + fVar4;
              fVar38 = fVar42 * fVar21 + fVar5;
              fVar39 = fVar43 * fVar21 + fVar6;
              fVar24 = fVar34 - fVar37;
              fVar25 = fVar35 - fVar38;
              fVar26 = fVar36 - fVar39;
              if (fVar22 * fVar22 <= fVar24 * fVar24 + fVar25 * fVar25 + fVar26 * fVar26) {
                FUN_143830830(&local_1a8);
                fVar24 = fVar10 - fVar7;
                fVar25 = fVar11 - fVar8;
                fVar26 = fVar12 - fVar9;
                fStack_19c = fVar24 * fVar40 + fVar7;
                fStack_18c = fVar25 * fVar40 + fVar8;
                fStack_17c = fVar26 * fVar40 + fVar9;
                fStack_1a0 = fVar24 * fVar21 + fVar7;
                fStack_190 = fVar25 * fVar21 + fVar8;
                fStack_180 = fVar26 * fVar21 + fVar9;
                local_178 = *(undefined4 *)(*(longlong *)(param_2[1] + 0x18) + 0x178);
                local_174 = *(undefined4 *)(*(longlong *)(param_2[2] + 0x18) + 0x178);
                local_170 = *(undefined4 *)(lVar18 + 0x40 + lVar19);
                local_16c = *(undefined4 *)(lVar18 + 0x44 + lVar19);
                local_15c = 1;
                local_1a8 = fVar34;
                fStack_1a4 = fVar37;
                local_198 = fVar35;
                fStack_194 = fVar38;
                local_188 = fVar36;
                fStack_184 = fVar39;
                FUN_143831c80(&local_328,&local_1a8);
                local_340 = *(float *)(param_1 + 0x24);
                if (*(float *)(param_1 + 0x24) <= (float)((int)local_328._0_2_ << 0x10)) {
                  local_340 = (float)((int)local_328._0_2_ << 0x10);
                }
                local_340 = local_340 * 1.0039062;
                local_15e = 0;
                local_160 = (undefined2)((uint)local_340 >> 0x10);
                FUN_1438d2240(param_2[8],&local_1a8,0,*(undefined4 *)(param_1 + 0x20));
              }
              iVar17 = iVar17 + 1;
              lVar20 = local_2f0;
              fVar21 = local_2d8;
              fVar34 = fStack_2d4;
              fVar35 = fStack_2d0;
              fVar36 = fStack_2cc;
              fVar40 = local_2c8;
              fVar37 = fStack_2c4;
              fVar38 = fStack_2c0;
              fVar39 = fStack_2bc;
            } while (iVar17 < iVar13);
          }
          uVar14 = FUN_143703a50();
          local_330 = 0;
          cVar16 = local_348;
          if (-1 < (int)local_32c) {
            FUN_143702e10(uVar14,local_338,0x14,local_32c & 0x3fffffff);
            cVar16 = local_348;
          }
        }
        local_338 = 0;
        local_32c = 0x80000000;
        fVar22 = local_2b8;
        fVar24 = fStack_2b4;
        fVar25 = fStack_2b0;
        fVar26 = fStack_2ac;
      }
      lVar19 = lVar19 + 0x50;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    local_2f0 = 0;
  }
  local_318 = 0;
  if (-1 < (int)local_314) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_320,0x50,local_314 & 0x3fffffff);
  }
  return;
}



// FUNCTION 142b9b730 FUN_142b9b730 body=235 status=ok
// SIG undefined FUN_142b9b730(void)

float * FUN_142b9b730(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar1 = *param_3;
  fVar2 = param_3[2];
  fVar3 = param_3[1];
  fVar4 = param_3[3];
  fVar5 = param_1[5];
  fVar6 = param_1[9];
  fVar7 = param_1[1];
  *param_2 = fVar3 * param_1[4] + fVar1 * *param_1 + fVar2 * param_1[8] + fVar4 * param_1[0xc];
  fVar8 = param_1[7];
  fVar9 = param_1[6];
  fVar10 = param_1[0xb];
  fVar11 = param_1[10];
  fVar12 = param_1[2];
  fVar13 = param_1[3];
  param_2[1] = fVar3 * fVar5 + fVar1 * fVar7 + fVar2 * fVar6 + fVar4 * param_1[0xd];
  fVar5 = param_1[0xf];
  param_2[2] = fVar3 * fVar9 + fVar1 * fVar12 + fVar2 * fVar11 + fVar4 * param_1[0xe];
  param_2[3] = fVar3 * fVar8 + fVar1 * fVar13 + fVar2 * fVar10 + fVar4 * fVar5;
  return param_2;
}



// FUNCTION 142b9b820 FUN_142b9b820 body=135 status=ok
// SIG undefined FUN_142b9b820(void)

undefined8 * FUN_142b9b820(undefined8 *param_1)

{
  FUN_1428c1a80();
  *param_1 = &PTR_FUN_1457d5168;
  FNavAgentSelector::FNavAgentSelector(param_1 + 0x92);
  (**(code **)(*(longlong *)param_1[0x8e] + 0x640))((longlong *)param_1[0x8e],DAT_146aefc58);
  *(undefined1 *)(param_1[0x8e] + 0x24e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x45c) = 0xffc8c8c8;
  *(uint *)(param_1 + 0x92) = *(uint *)(param_1 + 0x92) | 0x80000000;
  *(uint *)((longlong)param_1 + 0x464) = *(uint *)((longlong)param_1 + 0x464) | 1;
  return param_1;
}



// FUNCTION 142b9b8b0 FUN_142b9b8b0 body=74 status=ok
// SIG undefined FUN_142b9b8b0(void)

undefined8 * FUN_142b9b8b0(undefined8 *param_1)

{
  FUN_142b7efd0();
  *param_1 = &PTR_FUN_1457d48f0;
  param_1[0x8b] = &PTR_LAB_1457d5150;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 2;
  return param_1;
}



// FUNCTION 142b9b900 FUN_142b9b900 body=646 status=ok
// SIG undefined FUN_142b9b900(void)

undefined8 * FUN_142b9b900(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  uint uVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong local_78;
  undefined8 local_70;
  longlong local_68 [5];
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  plVar16 = (longlong *)0x0;
  FUN_14271d7c0(param_1,param_2,0);
  *param_1 = &PTR__scalar_deleting_destructor__1457d3948;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  lVar8 = *(longlong *)(param_2 + 0x118);
  param_1[0x74] = lVar8;
  lVar2 = *(longlong *)(param_2 + 0x118);
  plVar7 = plVar16;
  if (lVar2 != 0) {
    uVar6 = UNavLinkHostInterface::GetPrivateStaticClass();
    plVar7 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar6);
    lVar8 = param_1[0x74];
  }
  param_1[0x75] = plVar7;
  if ((lVar8 != 0) && (plVar7 != (longlong *)0x0)) {
    if (*(longlong *)(lVar8 + 0x168) == 0) {
      puVar9 = (undefined8 *)&DAT_1468b5b70;
    }
    else {
      puVar9 = (undefined8 *)(*(longlong *)(lVar8 + 0x168) + 0x210);
    }
    local_68[4] = *puVar9;
    uStack_40 = puVar9[1];
    local_38 = *(undefined4 *)(puVar9 + 2);
    uStack_34 = *(undefined4 *)((longlong)puVar9 + 0x14);
    uStack_30 = *(undefined4 *)(puVar9 + 3);
    uStack_2c = *(undefined4 *)((longlong)puVar9 + 0x1c);
    local_28 = *(undefined4 *)(puVar9 + 4);
    uStack_24 = *(undefined4 *)((longlong)puVar9 + 0x24);
    uStack_20 = *(undefined4 *)(puVar9 + 5);
    uStack_1c = *(undefined4 *)((longlong)puVar9 + 0x2c);
    local_78 = 0;
    local_70 = 0;
    (**(code **)(*plVar7 + 0x10))(local_28,&local_78);
    plVar7 = plVar16;
    plVar15 = plVar16;
    if (0 < (int)local_70) {
LAB_142b9ba10:
      lVar2 = local_78;
      if (*(longlong *)(local_78 + (longlong)plVar7) != 0) {
        lVar10 = UNavLinkDefinition::GetPrivateStaticClass();
        lVar4 = local_78;
        for (lVar8 = *(longlong *)(lVar2 + (longlong)plVar7); lVar8 != 0;
            lVar8 = *(longlong *)(lVar8 + 0x30)) {
          if (lVar8 == lVar10) {
            if (*(longlong *)(lVar2 + (longlong)plVar7) != 0) {
              plVar13 = plVar16;
              if (*(longlong *)(local_78 + (longlong)plVar7) == 0) goto LAB_142b9ba81;
              plVar11 = (longlong *)UNavLinkDefinition::GetPrivateStaticClass();
              plVar3 = *(longlong **)(lVar4 + (longlong)plVar7);
              plVar12 = plVar3;
              if (plVar3 == (longlong *)0x0) goto LAB_142b9ba81;
              goto LAB_142b9ba70;
            }
            break;
          }
        }
      }
      goto LAB_142b9badb;
    }
LAB_142b9baf4:
    local_68[2] = 0;
    local_68[3] = 0;
    local_68[0] = 0;
    local_68[1] = 0;
    cVar5 = (**(code **)(*(longlong *)param_1[0x75] + 0x18))
                      ((longlong *)param_1[0x75],local_68 + 2,local_68);
    if (cVar5 != '\0') {
      FUN_142ba2d60(param_1,local_68 + 4,local_68 + 2);
      FUN_142ba2fd0(param_1,local_68 + 4,local_68);
    }
    if (local_68[0] != 0) {
      FMemory::Free();
    }
    if (local_68[2] != 0) {
      FMemory::Free();
    }
    if (local_78 != 0) {
      FMemory::Free();
    }
  }
  return param_1;
  while (plVar1 = plVar12 + 6, plVar12 = (longlong *)*plVar1, plVar13 = plVar16,
        (longlong *)*plVar1 != (longlong *)0x0) {
LAB_142b9ba70:
    plVar13 = plVar3;
    if (plVar12 == plVar11) break;
  }
LAB_142b9ba81:
  uVar6 = FUN_1422324a0(plVar13);
  FUN_142ba2d60(param_1,local_68 + 4,uVar6);
  lVar2 = local_78;
  plVar13 = plVar16;
  if (*(longlong *)(local_78 + (longlong)plVar7) != 0) {
    plVar12 = (longlong *)UNavLinkDefinition::GetPrivateStaticClass();
    for (plVar3 = *(longlong **)(lVar2 + (longlong)plVar7);
        (plVar13 = plVar16, plVar3 != (longlong *)0x0 &&
        (plVar13 = *(longlong **)(lVar2 + (longlong)plVar7), plVar3 != plVar12));
        plVar3 = (longlong *)plVar3[6]) {
    }
  }
  uVar6 = FUN_142233900(plVar13);
  FUN_142ba2fd0(param_1,local_68 + 4,uVar6);
LAB_142b9badb:
  uVar14 = (int)plVar15 + 1;
  plVar7 = plVar7 + 1;
  plVar15 = (longlong *)(ulonglong)uVar14;
  if ((int)local_70 <= (int)uVar14) goto LAB_142b9baf4;
  goto LAB_142b9ba10;
}



// FUNCTION 142b9bb90 FUN_142b9bb90 body=789 status=ok
// SIG undefined FUN_142b9bb90(void)

/* WARNING: Removing unreachable block (ram,0x000142b9be5d) */

undefined8 * FUN_142b9bb90(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 local_38;
  undefined8 local_30;
  
  FUN_1423e4560();
  uVar11 = 0;
  plVar1 = param_1 + 0x99;
  plVar2 = param_1 + 0x9b;
  *param_1 = &PTR_FUN_1457d6170;
  param_1[0x93] = 0;
  *(undefined4 *)(param_1 + 0x94) = 0x41200000;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  *(undefined4 *)(param_1 + 0x97) = 0;
  param_1[0x98] = 0;
  *plVar1 = 0;
  param_1[0x9a] = 0;
  *plVar2 = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  *(undefined4 *)(param_1 + 0xab) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x55c) = 0;
  param_1[0xad] = 0;
  *(undefined4 *)(param_1 + 0xae) = 0;
  *(undefined4 *)(param_1 + 0xaf) = 0xffffffff;
  if (param_2 == 0) {
    return param_1;
  }
  uVar12 = *(ulonglong *)(param_2 + 0x118);
  if (uVar12 != 0) {
    lVar8 = ARemnantQuest::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(uVar12 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_142b9bcc8;
  }
  uVar12 = uVar11;
LAB_142b9bcc8:
  param_1[0x95] = uVar12;
  if (uVar12 != 0) {
    *(float *)(param_1 + 0x94) = *(float *)(uVar12 + 0x484) * 0.1 + *(float *)(param_1 + 0x94);
    *(uint *)(param_1 + 0xb1) =
         *(uint *)(param_1 + 0xb1) ^
         (*(uint *)(uVar12 + 0x4d4) >> 4 ^ *(uint *)(param_1 + 0xb1)) & 2;
    uVar10 = (*(uint *)(uVar12 + 0x4d4) >> 6 ^ *(uint *)(param_1 + 0xb1)) & 1 ^
             *(uint *)(param_1 + 0xb1);
    *(uint *)(param_1 + 0xb1) = uVar10;
    *(uint *)(param_1 + 0xb1) = (*(uint *)(uVar12 + 0x4d4) >> 5 ^ uVar10) & 4 ^ uVar10;
    puVar9 = (undefined8 *)(uVar12 + 0x510);
    if ((*(byte *)(uVar12 + 0x4d4) & 0x10) == 0) {
      puVar9 = &DAT_146687a50;
    }
    *(undefined8 *)((longlong)param_1 + 0x57c) = *puVar9;
    *(undefined4 *)((longlong)param_1 + 0x584) = *(undefined4 *)(puVar9 + 1);
    if ((*(longlong *)(uVar12 + 0x520) != 0) &&
       (uVar13 = uVar11, uVar6 = local_38, uVar7 = local_30,
       0 < *(int *)(*(longlong *)(uVar12 + 0x520) + 0x30))) {
      do {
        local_30 = uVar7;
        local_38 = uVar6;
        iVar3 = *(int *)(param_1 + 0x9a);
        lVar8 = *(longlong *)(*(longlong *)(uVar12 + 0x520) + 0x28);
        *(int *)(param_1 + 0x9a) = iVar3 + 1;
        if (*(int *)((longlong)param_1 + 0x4d4) < iVar3 + 1) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
        }
        lVar4 = *plVar1;
        *(undefined8 *)(lVar4 + (longlong)iVar3 * 0xc) = *(undefined8 *)(lVar8 + uVar13);
        *(undefined4 *)(lVar4 + 8 + (longlong)iVar3 * 0xc) = *(undefined4 *)(lVar8 + 8 + uVar13);
        FString::PrintfImpl(&local_38,L"%d-%d",uVar11,
                            *(undefined2 *)
                             (*(longlong *)(*(longlong *)(param_1[0x95] + 0x520) + 0x28) + 0x1a +
                             uVar13));
        iVar3 = *(int *)(param_1 + 0x9c);
        *(int *)(param_1 + 0x9c) = iVar3 + 1;
        if (*(int *)((longlong)param_1 + 0x4e4) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar3);
        }
        puVar9 = (undefined8 *)((longlong)iVar3 * 0x10 + *plVar2);
        *puVar9 = 0;
        *puVar9 = local_38;
        local_38 = 0;
        uVar6 = local_38;
        *(undefined4 *)(puVar9 + 1) = (undefined4)local_30;
        *(undefined4 *)((longlong)puVar9 + 0xc) = local_30._4_4_;
        local_30 = 0;
        uVar7 = local_30;
        local_30 = 0;
        local_38 = 0;
        uVar12 = param_1[0x95];
        uVar10 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar10;
        uVar13 = uVar13 + 0x20;
      } while ((int)uVar10 < *(int *)(*(longlong *)(uVar12 + 0x520) + 0x30));
    }
    FUN_142b9e290(param_1);
  }
  return param_1;
}



// FUNCTION 142b9beb0 FNavigationLinkBase body=495 status=ok
// SIG undefined FNavigationLinkBase(void)

undefined4 * FNavigationLinkBase::FNavigationLinkBase(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_1[7] ^ (param_1[7] ^ param_2[7]) & 1;
  uVar1 = (param_1[7] ^ param_2[7]) & 2 ^ param_1[7];
  param_1[7] = uVar1;
  uVar1 = (uVar1 ^ param_2[7]) & 4 ^ uVar1;
  param_1[7] = uVar1;
  uVar1 = (uVar1 ^ param_2[7]) & 8 ^ uVar1;
  param_1[7] = uVar1;
  uVar1 = (uVar1 ^ param_2[7]) & 0x10 ^ uVar1;
  param_1[7] = uVar1;
  uVar1 = (uVar1 ^ param_2[7]) & 0x20 ^ uVar1;
  param_1[7] = uVar1;
  uVar1 = (uVar1 ^ param_2[7]) & 0x40 ^ uVar1;
  param_1[7] = uVar1;
  uVar1 = (uVar1 ^ param_2[7]) & 0x80 ^ uVar1;
  param_1[7] = uVar1;
  uVar1 = (uVar1 ^ param_2[7]) & 0x100 ^ uVar1;
  param_1[7] = uVar1;
  uVar1 = (uVar1 ^ param_2[7]) & 0x200 ^ uVar1;
  param_1[7] = uVar1;
  uVar1 = (uVar1 ^ param_2[7]) & 0x400 ^ uVar1;
  param_1[7] = uVar1;
  uVar1 = (uVar1 ^ param_2[7]) & 0x800 ^ uVar1;
  param_1[7] = uVar1;
  uVar1 = (uVar1 ^ param_2[7]) & 0x1000 ^ uVar1;
  param_1[7] = uVar1;
  uVar1 = (uVar1 ^ param_2[7]) & 0x2000 ^ uVar1;
  param_1[7] = uVar1;
  uVar1 = (uVar1 ^ param_2[7]) & 0x4000 ^ uVar1;
  param_1[7] = uVar1;
  param_1[7] = (uVar1 ^ param_2[7]) & 0x8000 ^ uVar1;
  param_1[7] = param_2[7];
  param_1[8] = param_1[8] ^ (param_1[8] ^ param_2[8]) & 1;
  uVar1 = (param_2[8] ^ param_1[8]) & 2 ^ param_1[8];
  param_1[8] = uVar1;
  uVar1 = (uVar1 ^ param_2[8]) & 4 ^ uVar1;
  param_1[8] = uVar1;
  uVar1 = (uVar1 ^ param_2[8]) & 8 ^ uVar1;
  param_1[8] = uVar1;
  uVar1 = (uVar1 ^ param_2[8]) & 0x10 ^ uVar1;
  param_1[8] = uVar1;
  uVar1 = (uVar1 ^ param_2[8]) & 0x20 ^ uVar1;
  param_1[8] = uVar1;
  uVar1 = (uVar1 ^ param_2[8]) & 0x40 ^ uVar1;
  param_1[8] = uVar1;
  uVar1 = (uVar1 ^ param_2[8]) & 0x80 ^ uVar1;
  param_1[8] = uVar1;
  uVar1 = (uVar1 ^ param_2[8]) & 0x100 ^ uVar1;
  param_1[8] = uVar1;
  param_1[8] = (uVar1 ^ param_2[8]) & 0x200 ^ uVar1;
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  return param_1;
}



// FUNCTION 142b9c0a0 FUN_142b9c0a0 body=314 status=ok
// SIG undefined FUN_142b9c0a0(void)

undefined8 * FUN_142b9c0a0(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_58 [56];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_14237eb90();
  *param_1 = &PTR_FUN_1457d2fb8;
  plVar1 = param_1 + 0xdf;
  param_1[5] = &PTR_LAB_1457d38a0;
  param_1[0x5a] = &PTR_LAB_1457d38d0;
  param_1[0xde] = &PTR_LAB_1457d3928;
  *plVar1 = 0;
  param_1[0xe0] = 0;
  *(undefined1 *)((longlong)param_1 + 0x24e) = 1;
  FUN_1426a8ca0(param_1 + 0x76,DAT_146aefc58);
  FUN_1423974f0(param_1,0);
  *(undefined1 *)((longlong)param_1 + 0x301) = 2;
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 1;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 0x10;
  FNavigationLinkBase::FNavigationLinkBase(local_58);
  local_20 = 0;
  local_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0x42480000;
  uStack_c = 0;
  uStack_1c = 0xc2480000;
  uVar3 = UAITask_LockLogic::StaticClass();
  FNavigationLinkBase::SetAreaClass(local_58,uVar3);
  iVar2 = *(int *)(param_1 + 0xe0);
  *(int *)(param_1 + 0xe0) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x704) < iVar2 + 1) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  lVar4 = (longlong)iVar2 * 0x50 + *plVar1;
  FNavigationLinkBase::FNavigationLinkBase(lVar4,local_58);
  *(ulonglong *)(lVar4 + 0x38) = CONCAT44(uStack_1c,local_20);
  *(undefined4 *)(lVar4 + 0x40) = local_18;
  *(ulonglong *)(lVar4 + 0x44) = CONCAT44(uStack_10,uStack_14);
  *(undefined4 *)(lVar4 + 0x4c) = uStack_c;
  return param_1;
}



// FUNCTION 142b9c1e0 FUN_142b9c1e0 body=335 status=ok
// SIG undefined FUN_142b9c1e0(void)

undefined8 * FUN_142b9c1e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142ba3710();
  *param_1 = &PTR_FUN_1457d3b10;
  param_1[5] = &PTR_LAB_1457d3f18;
  param_1[0x2f] = &PTR_LAB_1457d3f48;
  param_1[0x35] = &PTR_LAB_1457d3fa0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x40] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x49] = 0;
  param_1[0x39] = 0x428c0000;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0xc28c0000;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  uVar1 = UAITask_LockLogic::StaticClass();
  param_1[0x37] = uVar1;
  uVar1 = UAITask_LockLogic::StaticClass();
  param_1[0x38] = uVar1;
  uVar1 = UAITask_LockLogic::StaticClass();
  param_1[0x40] = uVar1;
  param_1[0x41] = 0;
  *(undefined8 *)((longlong)param_1 + 500) = 0x4248000042480000;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0x42480000;
  *(uint *)((longlong)param_1 + 0x1e4) = *(uint *)((longlong)param_1 + 0x1e4) & 0xfffffff1 | 1;
  *(undefined1 *)(param_1 + 0x42) = 2;
  return param_1;
}



// FUNCTION 142b9c330 FUN_142b9c330 body=101 status=ok
// SIG undefined FUN_142b9c330(void)

undefined8 * FUN_142b9c330(undefined8 *param_1)

{
  FUN_14237eb90();
  *param_1 = &PTR__scalar_deleting_destructor__1457d4008;
  param_1[5] = &PTR_LAB_144280e10;
  param_1[0x5a] = &PTR_LAB_144280e40;
  *(undefined1 *)((longlong)param_1 + 0x24e) = 1;
  FUN_1426a8ca0(param_1 + 0x76,DAT_146aefc58);
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 4;
  FUN_1423974f0(param_1,0);
  return param_1;
}



// FUNCTION 142b9c3a0 UNavLinkTrivial body=254 status=ok
// SIG undefined UNavLinkTrivial(void)

undefined8 * UNavLinkTrivial::UNavLinkTrivial(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_80 [56];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  
  UNavLinkDefinition::UNavLinkDefinition();
  *param_1 = &PTR_FUN_1450103b8;
  FNavigationLinkBase::FNavigationLinkBase(local_80);
  iVar1 = *(int *)(param_1 + 6);
  local_40 = 0;
  local_48 = 0x42c8000000000000;
  local_34 = 0;
  local_3c = 0xc2c8000000000000;
  *(int *)(param_1 + 6) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar1 + 1) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1 + 5,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x50 + param_1[5];
  FNavigationLinkBase::FNavigationLinkBase(lVar2,local_80);
  *(undefined8 *)(lVar2 + 0x38) = local_48;
  *(undefined4 *)(lVar2 + 0x40) = local_40;
  *(undefined8 *)(lVar2 + 0x44) = local_3c;
  *(undefined4 *)(lVar2 + 0x4c) = local_34;
  return param_1;
}



// FUNCTION 142b9c4a0 FUN_142b9c4a0 body=105 status=ok
// SIG undefined FUN_142b9c4a0(void)

undefined8 * FUN_142b9c4a0(undefined8 *param_1)

{
  FUN_14237eb90();
  *param_1 = &PTR__scalar_deleting_destructor__1457d5888;
  param_1[5] = &PTR_LAB_1451ef040;
  param_1[0x5a] = &PTR_LAB_1451ef070;
  param_1[0xdf] = 0;
  FUN_142717130(param_1,DAT_146aefc58);
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 4;
  *(byte *)((longlong)param_1 + 0x2f1) = *(byte *)((longlong)param_1 + 0x2f1) & 0xfd;
  *(uint *)(param_1 + 0xde) = *(uint *)(param_1 + 0xde) & 0xfffffffe;
  return param_1;
}



// FUNCTION 142b9c510 FUN_142b9c510 body=58 status=ok
// SIG undefined FUN_142b9c510(void)

undefined8 * FUN_142b9c510(undefined8 *param_1)

{
  FUN_14237eb90();
  *param_1 = &PTR__scalar_deleting_destructor__1457d62e8;
  param_1[5] = &PTR_LAB_144280e10;
  param_1[0x5a] = &PTR_LAB_144280e40;
  return param_1;
}



// FUNCTION 142b9c550 URecastNavMeshDataChunk body=43 status=ok
// SIG undefined URecastNavMeshDataChunk(void)

undefined8 * URecastNavMeshDataChunk::URecastNavMeshDataChunk(undefined8 *param_1)

{
  UNavigationDataChunk::UNavigationDataChunk();
  *param_1 = &PTR_FUN_1457d6bd0;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 142b9c580 ~TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_> body=224 status=ok
// SIG undefined ~TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>(void)

void TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>::
     ~TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>(longlong *param_1)

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
      plVar4 = (longlong *)plVar7[3];
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
      plVar4 = (longlong *)*plVar7;
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



// FUNCTION 142b9c6c0 FUN_142b9c6c0 body=67 status=ok
// SIG undefined FUN_142b9c6c0(void)

longlong FUN_142b9c6c0(longlong param_1,ulonglong param_2)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x690);
  FUN_1409f5de0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x6a8);
  }
  return param_1;
}



// FUNCTION 142b9c710 `scalar_deleting_destructor' body=90 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong AUGFloorDamageTrap::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x3c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3b0) != 0) {
    FMemory::Free();
  }
  FUN_14271e9f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3d0);
  }
  return param_1;
}



// FUNCTION 142b9c770 FUN_142b9c770 body=317 status=ok
// SIG undefined FUN_142b9c770(void)

undefined8 * FUN_142b9c770(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1457d6170;
  *(undefined4 *)(param_1 + 0xae) = 0;
  if (param_1[0xad] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FNavTestSceneProxy::FNodeDebugData>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0xa5,0);
  if (param_1[0xa9] != 0) {
    FMemory::Free();
  }
  if (param_1[0xa5] != 0) {
    FMemory::Free();
  }
  if (param_1[0xa3] != 0) {
    FMemory::Free();
  }
  if (param_1[0xa1] != 0) {
    FMemory::Free();
  }
  if (param_1[0x9f] != 0) {
    FMemory::Free();
  }
  if (param_1[0x9d] != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x9c);
  plVar1 = (longlong *)param_1[0x9b];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[0x9b];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (param_1[0x99] != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x96);
  FUN_14074ee10(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x590);
  }
  return param_1;
}



// FUNCTION 142b9c8b0 FUN_142b9c8b0 body=43 status=ok
// SIG undefined FUN_142b9c8b0(void)

undefined8 * FUN_142b9c8b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1457d3ac0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 142b9c8e0 FUN_142b9c8e0 body=43 status=ok
// SIG undefined FUN_142b9c8e0(void)

undefined8 * FUN_142b9c8e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1457d2ec8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 142b9c910 FUN_142b9c910 body=87 status=ok
// SIG undefined FUN_142b9c910(void)

longlong FUN_142b9c910(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x6f8) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x6f0) = &PTR_FUN_1457d2ec8;
  FUN_14061f760(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x710);
  }
  return param_1;
}



// FUNCTION 142b9c970 FUN_142b9c970 body=125 status=ok
// SIG undefined FUN_142b9c970(void)

longlong FUN_142b9c970(longlong param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x238);
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x218);
  *(undefined ***)(param_1 + 0x1a8) = &PTR_FUN_1457d3ac0;
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_1440197d0;
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x250);
  }
  return param_1;
}



// FUNCTION 142b9c9f0 FUN_142b9c9f0 body=64 status=ok
// SIG undefined FUN_142b9c9f0(void)

longlong FUN_142b9c9f0(longlong param_1,ulonglong param_2)

{
  TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>::
  ~TArray<Metasound::TEnumEntry<int>,TSizedDefaultAllocator<32>_>(param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 142b9ca30 FUN_142b9ca30 body=586 status=ok
// SIG undefined FUN_142b9ca30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142b9ca30(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  float fVar6;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 local_d0;
  longlong local_c8 [2];
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  plVar3 = (longlong *)0x0;
  local_c8[0] = 0;
  local_c8[1] = 0;
  FUN_142b9db50(param_1,local_c8);
  if (((*(int *)(param_1 + 0x220) != 0) && (*(longlong **)(param_1 + 0x218) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x218) + 0x18))(), cVar1 != '\0')) {
    if (*(int *)(param_1 + 0x220) != 0) {
      plVar3 = *(longlong **)(param_1 + 0x218);
    }
    (**(code **)(*plVar3 + 0x40))(plVar3,param_1,local_c8);
  }
  fVar6 = *(float *)(param_1 + 0x20c);
  if (0.0 < fVar6) {
    local_b8 = FUN_142b9ca30;
    lVar2 = *(longlong *)(param_1 + 0x120);
    uStack_b0 = 0;
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0(param_1);
      fVar6 = *(float *)(param_1 + 0x20c);
    }
    if (*(longlong *)(lVar2 + 400) == 0) {
      uVar4 = *(undefined8 *)(lVar2 + 0x3f8);
    }
    else {
      uVar4 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
    }
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      *(undefined4 *)(plVar3 + 2) = (undefined4)local_b8;
      *(undefined4 *)((longlong)plVar3 + 0x14) = local_b8._4_4_;
      *(undefined4 *)(plVar3 + 3) = uStack_b0;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_ac;
      lVar2 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar2;
      *plVar3 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_a8 = 0;
    local_a0 = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_a8);
    }
    FWeakObjectPtr::operator=(local_98,0);
    local_d0 = 0xbf800000;
    local_d8 = 0;
    local_90 = 0;
    local_58 = (longlong *)0x0;
    local_48 = 0;
    local_88 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar4,param_1 + 0x248,&local_a8,fVar6);
    if (local_48 != 0) {
      plVar5 = local_78;
      if (local_58 != (longlong *)0x0) {
        plVar5 = local_58;
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,0);
      }
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      lVar2 = FMemory::Realloc(plVar3,0,0);
      if (lVar2 != 0) {
        FMemory::Free(lVar2);
      }
    }
  }
  if (local_c8[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142b9cc80 FUN_142b9cc80 body=985 status=ok
// SIG undefined FUN_142b9cc80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142b9cc80(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  float *pfVar4;
  undefined8 *puVar5;
  float fVar6;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  uint local_c0;
  undefined1 local_b8 [8];
  float local_b0;
  float local_a4;
  undefined1 local_a0 [40];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  fStack_d0 = (float)DAT_1468b5d98;
  uVar3 = DAT_1468b5d94;
  fStack_cc = (float)DAT_1468b5d90;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  fStack_c8 = (float)DAT_1468b5d94;
  fStack_c4 = (float)DAT_1468b5d98;
  local_c0 = local_c0 & 0xffffff00;
  *(undefined4 *)(param_1 + 0x180) = DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x184) = uVar3;
  *(float *)(param_1 + 0x188) = fStack_d0;
  *(float *)(param_1 + 0x18c) = fStack_cc;
  local_d8 = CONCAT44(uVar3,fStack_cc);
  *(ulonglong *)(param_1 + 400) = CONCAT44(fStack_d0,uVar3);
  *(uint *)(param_1 + 0x198) = local_c0;
  pfVar4 = (float *)FUN_142ba0d50(uVar3,local_b8);
  if (*(char *)(param_1 + 0x198) == '\0') {
    *(undefined8 *)(param_1 + 0x18c) = *(undefined8 *)pfVar4;
    fVar6 = pfVar4[2];
    *(float *)(param_1 + 0x194) = fVar6;
    *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_1 + 0x18c);
    *(float *)(param_1 + 0x188) = fVar6;
    *(undefined1 *)(param_1 + 0x198) = 1;
  }
  else {
    fVar6 = *(float *)(param_1 + 0x180);
    if (*pfVar4 <= *(float *)(param_1 + 0x180)) {
      fVar6 = *pfVar4;
    }
    *(float *)(param_1 + 0x180) = fVar6;
    fVar6 = *(float *)(param_1 + 0x184);
    if (pfVar4[1] <= *(float *)(param_1 + 0x184)) {
      fVar6 = pfVar4[1];
    }
    *(float *)(param_1 + 0x184) = fVar6;
    fVar6 = *(float *)(param_1 + 0x188);
    if (pfVar4[2] <= *(float *)(param_1 + 0x188)) {
      fVar6 = pfVar4[2];
    }
    *(float *)(param_1 + 0x188) = fVar6;
    fVar6 = *(float *)(param_1 + 0x18c);
    if (*(float *)(param_1 + 0x18c) <= *pfVar4) {
      fVar6 = *pfVar4;
    }
    *(float *)(param_1 + 0x18c) = fVar6;
    fVar6 = pfVar4[1];
    if (pfVar4[1] <= *(float *)(param_1 + 400)) {
      fVar6 = *(float *)(param_1 + 400);
    }
    *(float *)(param_1 + 400) = fVar6;
    fVar6 = pfVar4[2];
    if (pfVar4[2] <= *(float *)(param_1 + 0x194)) {
      fVar6 = *(float *)(param_1 + 0x194);
    }
    *(float *)(param_1 + 0x194) = fVar6;
  }
  pfVar4 = (float *)FUN_142b9f860(param_1,local_b8);
  if (*(char *)(param_1 + 0x198) == '\0') {
    *(undefined8 *)(param_1 + 0x18c) = *(undefined8 *)pfVar4;
    fVar6 = pfVar4[2];
    *(float *)(param_1 + 0x194) = fVar6;
    *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_1 + 0x18c);
    *(float *)(param_1 + 0x188) = fVar6;
    *(undefined1 *)(param_1 + 0x198) = 1;
  }
  else {
    fVar6 = *(float *)(param_1 + 0x180);
    if (*pfVar4 <= *(float *)(param_1 + 0x180)) {
      fVar6 = *pfVar4;
    }
    *(float *)(param_1 + 0x180) = fVar6;
    fVar6 = pfVar4[1];
    if (*(float *)(param_1 + 0x184) <= pfVar4[1]) {
      fVar6 = *(float *)(param_1 + 0x184);
    }
    *(float *)(param_1 + 0x184) = fVar6;
    fVar6 = pfVar4[2];
    if (*(float *)(param_1 + 0x188) <= pfVar4[2]) {
      fVar6 = *(float *)(param_1 + 0x188);
    }
    *(float *)(param_1 + 0x188) = fVar6;
    fVar6 = *(float *)(param_1 + 0x18c);
    if (*(float *)(param_1 + 0x18c) <= *pfVar4) {
      fVar6 = *pfVar4;
    }
    *(float *)(param_1 + 0x18c) = fVar6;
    fVar6 = pfVar4[1];
    if (pfVar4[1] <= *(float *)(param_1 + 400)) {
      fVar6 = *(float *)(param_1 + 400);
    }
    *(float *)(param_1 + 400) = fVar6;
    fVar6 = pfVar4[2];
    if (pfVar4[2] <= *(float *)(param_1 + 0x194)) {
      fVar6 = *(float *)(param_1 + 0x194);
    }
    *(float *)(param_1 + 0x194) = fVar6;
  }
  if ((*(byte *)(param_1 + 0x1e4) & 8) != 0) {
    fStack_c4 = *(float *)(param_1 + 0x1fc) + *(float *)(param_1 + 0x1f0);
    fStack_d0 = *(float *)(param_1 + 0x1f0) - *(float *)(param_1 + 0x1fc);
    fStack_c8 = *(float *)(param_1 + 0x1f8) + *(float *)(param_1 + 0x1ec);
    fStack_cc = *(float *)(param_1 + 500) + *(float *)(param_1 + 0x1e8);
    local_c0 = CONCAT31(local_c0._1_3_,1);
    local_d8 = CONCAT44(*(float *)(param_1 + 0x1ec) - *(float *)(param_1 + 0x1f8),
                        *(float *)(param_1 + 0x1e8) - *(float *)(param_1 + 500));
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x168);
    if (lVar1 == 0) {
      puVar5 = (undefined8 *)&DAT_1468b5b70;
    }
    else {
      puVar5 = (undefined8 *)(lVar1 + 0x210);
    }
    local_78 = *puVar5;
    uStack_70 = puVar5[1];
    local_68 = *(undefined4 *)(puVar5 + 2);
    uStack_64 = *(undefined4 *)((longlong)puVar5 + 0x14);
    uStack_60 = *(undefined4 *)(puVar5 + 3);
    uStack_5c = *(undefined4 *)((longlong)puVar5 + 0x1c);
    local_58 = *(undefined4 *)(puVar5 + 4);
    uStack_54 = *(undefined4 *)((longlong)puVar5 + 0x24);
    uStack_50 = *(undefined4 *)(puVar5 + 5);
    uStack_4c = *(undefined4 *)((longlong)puVar5 + 0x2c);
    local_b0 = fStack_c4;
    local_a4 = fStack_d0;
    pfVar4 = (float *)FBox::TransformBy(&local_d8,local_a0,&local_78);
    if (*(char *)(param_1 + 0x198) == '\0') {
      if (*(char *)(pfVar4 + 6) != '\0') {
        uVar2 = *(undefined8 *)(pfVar4 + 2);
        *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)pfVar4;
        *(undefined8 *)(param_1 + 0x188) = uVar2;
        *(undefined8 *)(param_1 + 400) = *(undefined8 *)(pfVar4 + 4);
        *(float *)(param_1 + 0x198) = pfVar4[6];
      }
    }
    else if (*(char *)(pfVar4 + 6) != '\0') {
      fVar6 = *(float *)(param_1 + 0x180);
      if (*pfVar4 <= *(float *)(param_1 + 0x180)) {
        fVar6 = *pfVar4;
      }
      *(float *)(param_1 + 0x180) = fVar6;
      fVar6 = pfVar4[1];
      if (*(float *)(param_1 + 0x184) <= pfVar4[1]) {
        fVar6 = *(float *)(param_1 + 0x184);
      }
      *(float *)(param_1 + 0x184) = fVar6;
      fVar6 = pfVar4[2];
      if (*(float *)(param_1 + 0x188) <= pfVar4[2]) {
        fVar6 = *(float *)(param_1 + 0x188);
      }
      *(float *)(param_1 + 0x188) = fVar6;
      fVar6 = pfVar4[3];
      if (pfVar4[3] <= *(float *)(param_1 + 0x18c)) {
        fVar6 = *(float *)(param_1 + 0x18c);
      }
      *(float *)(param_1 + 0x18c) = fVar6;
      fVar6 = pfVar4[4];
      if (pfVar4[4] <= *(float *)(param_1 + 400)) {
        fVar6 = *(float *)(param_1 + 400);
      }
      *(float *)(param_1 + 400) = fVar6;
      fVar6 = pfVar4[5];
      if (pfVar4[5] <= *(float *)(param_1 + 0x194)) {
        fVar6 = *(float *)(param_1 + 0x194);
      }
      *(float *)(param_1 + 0x194) = fVar6;
    }
  }
  return;
}



// FUNCTION 142b9d060 FUN_142b9d060 body=629 status=ok
// SIG undefined FUN_142b9d060(void)

undefined8 * FUN_142b9d060(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  float fVar1;
  undefined8 uVar2;
  bool bVar3;
  float *pfVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_58;
  float local_54;
  float local_50;
  undefined8 local_4c;
  float local_44;
  undefined1 local_40;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  
  bVar3 = false;
  lVar5 = (longlong)*(int *)(param_1 + 0x700);
  local_4c = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  local_44 = DAT_1468b5d98;
  local_58 = DAT_1468b5d90;
  local_54 = DAT_1468b5d94;
  local_50 = DAT_1468b5d98;
  local_40 = 0;
  if (0 < lVar5) {
    pfVar4 = (float *)(*(longlong *)(param_1 + 0x6f8) + 0x40);
    fVar7 = DAT_1468b5d94;
    fVar8 = DAT_1468b5d90;
    fVar9 = DAT_1468b5d90;
    fVar10 = DAT_1468b5d94;
    fVar11 = DAT_1468b5d98;
    fVar6 = DAT_1468b5d98;
    do {
      if (bVar3) {
        fVar1 = pfVar4[-2];
        if (fVar1 < fVar9) {
          fVar9 = fVar1;
          local_58 = fVar1;
        }
        fVar1 = pfVar4[-1];
        if (fVar1 < fVar10) {
          fVar10 = fVar1;
          local_54 = fVar1;
        }
        fVar1 = *pfVar4;
        if (fVar1 < fVar11) {
          fVar11 = fVar1;
          local_50 = fVar1;
        }
        fVar1 = pfVar4[-2];
        if (fVar8 < fVar1) {
          local_4c = CONCAT44(local_4c._4_4_,fVar1);
          fVar8 = fVar1;
        }
        fVar1 = pfVar4[-1];
        if (fVar7 < fVar1) {
          local_4c = CONCAT44(fVar1,(float)local_4c);
          fVar7 = fVar1;
        }
        fVar1 = *pfVar4;
        if (fVar6 < fVar1) {
          local_44 = fVar1;
          fVar6 = fVar1;
        }
      }
      else {
        uVar2 = *(undefined8 *)(pfVar4 + -2);
        bVar3 = true;
        fVar11 = *pfVar4;
        local_4c._0_4_ = (float)uVar2;
        local_4c._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
        local_58 = (float)local_4c;
        local_54 = local_4c._4_4_;
        local_40 = 1;
        fVar7 = local_4c._4_4_;
        fVar8 = (float)local_4c;
        fVar9 = (float)local_4c;
        fVar10 = local_4c._4_4_;
        local_50 = fVar11;
        local_4c = uVar2;
        local_44 = fVar11;
        fVar6 = fVar11;
      }
      fVar1 = pfVar4[1];
      if (fVar1 < fVar9) {
        fVar9 = fVar1;
        local_58 = fVar1;
      }
      fVar1 = pfVar4[2];
      if (fVar1 < fVar10) {
        fVar10 = fVar1;
        local_54 = fVar1;
      }
      fVar1 = pfVar4[3];
      if (fVar1 < fVar11) {
        fVar11 = fVar1;
        local_50 = fVar1;
      }
      fVar1 = pfVar4[1];
      if (fVar8 < fVar1) {
        local_4c = CONCAT44(local_4c._4_4_,fVar1);
        fVar8 = fVar1;
      }
      fVar1 = pfVar4[2];
      if (fVar7 < fVar1) {
        local_4c = CONCAT44(fVar1,(float)local_4c);
        fVar7 = fVar1;
      }
      fVar1 = pfVar4[3];
      if (fVar6 < fVar1) {
        local_44 = fVar1;
        fVar6 = fVar1;
      }
      pfVar4 = pfVar4 + 0x14;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  FBox::TransformBy(&local_58,&local_38,param_3);
  *(ulonglong *)((longlong)param_2 + 0xc) =
       CONCAT44((local_28 - local_34) * 0.5,(local_2c - local_38) * 0.5);
  *(float *)((longlong)param_2 + 0x14) = (local_24 - local_30) * 0.5;
  *param_2 = CONCAT44(local_34 + *(float *)(param_2 + 2),
                      local_38 + *(float *)((longlong)param_2 + 0xc));
  *(float *)(param_2 + 1) = local_30 + *(float *)((longlong)param_2 + 0x14);
  *(float *)(param_2 + 3) =
       SQRT(*(float *)((longlong)param_2 + 0xc) * *(float *)((longlong)param_2 + 0xc) +
            *(float *)(param_2 + 2) * *(float *)(param_2 + 2) +
            *(float *)((longlong)param_2 + 0x14) * *(float *)((longlong)param_2 + 0x14));
  return param_2;
}



// FUNCTION 142b9d2e0 FUN_142b9d2e0 body=1341 status=ok
// SIG undefined FUN_142b9d2e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_142b9d2e0(longlong param_1,undefined8 *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  char cVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  float *pfVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_158 [32];
  longlong local_138;
  undefined8 local_130;
  undefined8 local_128;
  float local_120;
  undefined8 local_11c;
  float local_114;
  float local_110;
  float *local_108;
  undefined8 local_100;
  float local_f0;
  longlong local_e8 [3];
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  ulonglong local_a8;
  
  local_a8 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  lVar17 = *(longlong *)(param_1 + 0x118);
  uVar20 = 0;
  if (lVar17 != 0) {
    uVar9 = UNavLinkHostInterface::GetPrivateStaticClass();
    plVar10 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar17,uVar9);
    fVar23 = DAT_1468b5d98;
    fVar24 = DAT_1468b5d94;
    fVar25 = DAT_1468b5d90;
    if (plVar10 != (longlong *)0x0) {
      bVar6 = false;
      if (*(longlong *)(lVar17 + 0x168) == 0) {
        puVar11 = (undefined8 *)&DAT_1468b5b70;
      }
      else {
        puVar11 = (undefined8 *)(*(longlong *)(lVar17 + 0x168) + 0x210);
      }
      local_e8[2] = *puVar11;
      uStack_d0 = puVar11[1];
      local_c8 = *(undefined4 *)(puVar11 + 2);
      uStack_c4 = *(undefined4 *)((longlong)puVar11 + 0x14);
      uStack_c0 = *(undefined4 *)(puVar11 + 3);
      uStack_bc = *(undefined4 *)((longlong)puVar11 + 0x1c);
      local_b8 = *(undefined4 *)(puVar11 + 4);
      uStack_b4 = *(undefined4 *)((longlong)puVar11 + 0x24);
      uStack_b0 = *(undefined4 *)(puVar11 + 5);
      uStack_ac = *(undefined4 *)((longlong)puVar11 + 0x2c);
      local_138 = 0;
      local_130 = 0;
      local_108 = (float *)0x0;
      local_100 = 0;
      local_e8[0] = 0;
      local_e8[1] = 0;
      cVar8 = (**(code **)(*plVar10 + 0x10))(plVar10,&local_138);
      fVar26 = fVar25;
      fVar27 = fVar24;
      fVar28 = fVar23;
      if ((cVar8 != '\0') && (uVar18 = uVar20, uVar22 = uVar20, 0 < (int)local_130)) {
        do {
          lVar17 = local_138;
          if (*(longlong *)(uVar18 + local_138) != 0) {
            lVar12 = UNavLinkDefinition::GetPrivateStaticClass();
            lVar7 = local_138;
            for (lVar19 = *(longlong *)(uVar18 + lVar17); lVar19 != 0;
                lVar19 = *(longlong *)(lVar19 + 0x30)) {
              if (lVar19 == lVar12) {
                if (*(longlong *)(uVar18 + lVar17) != 0) {
                  uVar16 = uVar20;
                  if (*(longlong *)(uVar18 + local_138) != 0) {
                    uVar13 = UNavLinkDefinition::GetPrivateStaticClass();
                    for (uVar5 = *(ulonglong *)(uVar18 + lVar7);
                        (uVar16 = uVar20, uVar5 != 0 &&
                        (uVar16 = *(ulonglong *)(uVar18 + lVar7), uVar5 != uVar13));
                        uVar5 = *(ulonglong *)(uVar5 + 0x30)) {
                    }
                  }
                  plVar14 = (longlong *)FUN_1422324a0(uVar16);
                  lVar17 = *plVar14;
                  lVar19 = (longlong)(int)plVar14[1] * 0x50 + lVar17;
                  if (lVar17 != lVar19) {
                    pfVar15 = (float *)(lVar17 + 0x40);
                    do {
                      if (bVar6) {
                        fVar2 = pfVar15[-2];
                        if (fVar2 < fVar26) {
                          fVar26 = fVar2;
                        }
                        fVar3 = pfVar15[-1];
                        if (fVar3 < fVar27) {
                          fVar27 = fVar3;
                        }
                        fVar4 = *pfVar15;
                        if (fVar4 < fVar28) {
                          fVar28 = fVar4;
                        }
                        if (fVar25 < fVar2) {
                          fVar25 = fVar2;
                        }
                        if (fVar24 < fVar3) {
                          fVar24 = fVar3;
                        }
                        if (fVar23 < fVar4) {
                          fVar23 = fVar4;
                        }
                      }
                      else {
                        uVar9 = *(undefined8 *)(pfVar15 + -2);
                        fVar25 = (float)uVar9;
                        bVar6 = true;
                        fVar23 = *pfVar15;
                        local_11c._4_4_ = (float)((ulonglong)uVar9 >> 0x20);
                        fVar24 = local_11c._4_4_;
                        fVar26 = fVar25;
                        fVar27 = local_11c._4_4_;
                        fVar28 = fVar23;
                        local_11c = uVar9;
                        local_114 = fVar23;
                      }
                      fVar2 = pfVar15[1];
                      if (fVar2 < fVar26) {
                        fVar26 = fVar2;
                      }
                      fVar3 = pfVar15[2];
                      if (fVar3 < fVar27) {
                        fVar27 = fVar3;
                      }
                      fVar4 = pfVar15[3];
                      if (fVar4 < fVar28) {
                        fVar28 = fVar4;
                      }
                      if (fVar25 < fVar2) {
                        fVar25 = fVar2;
                      }
                      if (fVar24 < fVar3) {
                        fVar24 = fVar3;
                      }
                      if (fVar23 < fVar4) {
                        fVar23 = fVar4;
                      }
                      lVar17 = lVar17 + 0x50;
                      pfVar15 = pfVar15 + 0x14;
                    } while (lVar17 != lVar19);
                  }
                }
                break;
              }
            }
          }
          uVar21 = (int)uVar22 + 1;
          uVar18 = uVar18 + 8;
          uVar22 = (ulonglong)uVar21;
        } while ((int)uVar21 < (int)local_130);
      }
      cVar8 = (**(code **)(*plVar10 + 0x18))(plVar10,&local_108,local_e8);
      if (cVar8 != '\0') {
        if (local_108 != local_108 + (longlong)(int)local_100 * 0x14) {
          pfVar15 = local_108 + 0x10;
          do {
            if (bVar6) {
              fVar2 = pfVar15[-2];
              if (fVar2 < fVar26) {
                fVar26 = fVar2;
              }
              fVar3 = pfVar15[-1];
              if (fVar3 < fVar27) {
                fVar27 = fVar3;
              }
              fVar4 = *pfVar15;
              if (fVar4 < fVar28) {
                fVar28 = fVar4;
              }
              if (fVar25 < fVar2) {
                fVar25 = fVar2;
              }
              local_11c._4_4_ = fVar24;
              if (fVar24 < fVar3) {
                local_11c._4_4_ = fVar3;
              }
              if (fVar23 < fVar4) {
                fVar23 = fVar4;
              }
            }
            else {
              fVar25 = (float)*(undefined8 *)(pfVar15 + -2);
              bVar6 = true;
              fVar23 = *pfVar15;
              local_11c._4_4_ = (float)((ulonglong)*(undefined8 *)(pfVar15 + -2) >> 0x20);
              fVar26 = fVar25;
              fVar27 = local_11c._4_4_;
              fVar28 = fVar23;
            }
            fVar24 = pfVar15[1];
            if (fVar24 < fVar26) {
              fVar26 = fVar24;
            }
            fVar2 = pfVar15[2];
            if (fVar2 < fVar27) {
              fVar27 = fVar2;
            }
            fVar3 = pfVar15[3];
            if (fVar3 < fVar28) {
              fVar28 = fVar3;
            }
            if (fVar25 < fVar24) {
              fVar25 = fVar24;
            }
            fVar24 = local_11c._4_4_;
            if (local_11c._4_4_ < fVar2) {
              fVar24 = fVar2;
            }
            if (fVar23 < fVar3) {
              fVar23 = fVar3;
            }
            pfVar1 = pfVar15 + 4;
            pfVar15 = pfVar15 + 0x14;
          } while (pfVar1 != local_108 + (longlong)(int)local_100 * 0x14);
        }
      }
      fVar25 = fVar25 - fVar26;
      fVar24 = fVar24 - fVar27;
      fVar23 = fVar23 - fVar28;
      local_114 = fVar23 * 0.5;
      local_11c = CONCAT44(fVar24 * 0.5,fVar25 * 0.5);
      local_120 = local_114 + fVar28;
      local_128 = CONCAT44(fVar24 * 0.5 + fVar27,fVar25 * 0.5 + fVar26);
      local_110 = SQRT((fVar25 * fVar25 + fVar24 * fVar24 + fVar23 * fVar23) * 0.25);
      local_f0 = local_120;
      FBoxSphereBounds::TransformBy(&local_128,param_2,local_e8 + 2);
      if (local_e8[0] != 0) {
        FMemory::Free();
      }
      if (local_108 != (float *)0x0) {
        FMemory::Free();
      }
      if (local_138 != 0) {
        FMemory::Free();
        return param_2;
      }
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  return param_2;
}



// FUNCTION 142b9d820 CalcBounds body=157 status=ok
// SIG undefined CalcBounds(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * UXNavPathsRenderingComponent::CalcBounds(undefined8 param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = DAT_1468b5d98;
  fVar3 = (float)_DAT_1468b5d90;
  uVar1 = (ulonglong)_DAT_1468b5d90 >> 0x20;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  *param_2 = CONCAT44((float)uVar1 + *(float *)(param_2 + 2),
                      fVar3 + *(float *)((longlong)param_2 + 0xc));
  *(float *)(param_2 + 1) = fVar2 + *(float *)((longlong)param_2 + 0x14);
  *(float *)(param_2 + 3) =
       SQRT(*(float *)((longlong)param_2 + 0xc) * *(float *)((longlong)param_2 + 0xc) +
            *(float *)(param_2 + 2) * *(float *)(param_2 + 2) +
            *(float *)((longlong)param_2 + 0x14) * *(float *)((longlong)param_2 + 0x14));
  return param_2;
}



// FUNCTION 142b9d8c0 FUN_142b9d8c0 body=645 status=ok
// SIG undefined FUN_142b9d8c0(void)

undefined8 * FUN_142b9d8c0(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong *plVar4;
  bool bVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  float *pfVar9;
  longlong lVar10;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined1 local_88 [128];
  
  fStack_94 = DAT_1468b5d98;
  fStack_98 = DAT_1468b5d94;
  fStack_9c = DAT_1468b5d90;
  plVar4 = *(longlong **)(param_1 + 0x118);
  local_a8 = fStack_9c;
  fStack_a4 = fStack_98;
  fStack_a0 = fStack_94;
  if (plVar4 != (longlong *)0x0) {
    lVar7 = ARemnantQuest::GetPrivateStaticClass();
    if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      puVar8 = (undefined8 *)
               (**(code **)(*plVar4 + 0x560))
                         (plVar4,local_88,CONCAT71((int7)((ulonglong)(lVar7 + 0x88) >> 8),1));
      lVar7 = plVar4[0xa4];
      fStack_98 = (float)puVar8[2];
      fStack_94 = (float)((ulonglong)puVar8[2] >> 0x20);
      uVar6 = *(undefined4 *)(puVar8 + 3);
      fStack_a0 = (float)puVar8[1];
      fStack_9c = (float)((ulonglong)puVar8[1] >> 0x20);
      local_a8 = (float)*puVar8;
      fStack_a4 = (float)((ulonglong)*puVar8 >> 0x20);
      if ((lVar7 != 0) && (lVar10 = (longlong)*(int *)(lVar7 + 0x30), 0 < lVar10)) {
        pfVar9 = *(float **)(lVar7 + 0x28);
        do {
          if ((char)uVar6 == '\0') {
            fStack_9c = (float)*(undefined8 *)pfVar9;
            fStack_94 = pfVar9[2];
            uVar6 = 1;
            fStack_98 = (float)((ulonglong)*(undefined8 *)pfVar9 >> 0x20);
            local_a8 = fStack_9c;
            fStack_a4 = fStack_98;
            fStack_a0 = fStack_94;
          }
          else {
            fVar1 = *pfVar9;
            if (fVar1 < local_a8) {
              local_a8 = fVar1;
            }
            fVar2 = pfVar9[1];
            if (fVar2 < fStack_a4) {
              fStack_a4 = fVar2;
            }
            fVar3 = pfVar9[2];
            if (fVar3 < fStack_a0) {
              fStack_a0 = fVar3;
            }
            if (fStack_9c < fVar1) {
              fStack_9c = fVar1;
            }
            if (fStack_98 < fVar2) {
              fStack_98 = fVar2;
            }
            if (fStack_94 < fVar3) {
              fStack_94 = fVar3;
            }
          }
          pfVar9 = pfVar9 + 8;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
    }
  }
  *(ulonglong *)((longlong)param_2 + 0xc) =
       CONCAT44((fStack_98 - fStack_a4) * 0.5,(fStack_9c - local_a8) * 0.5);
  *(float *)((longlong)param_2 + 0x14) = (fStack_94 - fStack_a0) * 0.5;
  *param_2 = CONCAT44(fStack_a4 + *(float *)(param_2 + 2),
                      local_a8 + *(float *)((longlong)param_2 + 0xc));
  *(float *)(param_2 + 1) = fStack_a0 + *(float *)((longlong)param_2 + 0x14);
  *(float *)(param_2 + 3) =
       SQRT(*(float *)((longlong)param_2 + 0xc) * *(float *)((longlong)param_2 + 0xc) +
            *(float *)(param_2 + 2) * *(float *)(param_2 + 2) +
            *(float *)((longlong)param_2 + 0x14) * *(float *)((longlong)param_2 + 0x14));
  return param_2;
}



// FUNCTION 142b9db50 FUN_142b9db50 body=1304 status=ok
// SIG undefined FUN_142b9db50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142b9db50(longlong param_1,longlong *param_2)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  float *pfVar11;
  longlong *plVar12;
  uint uVar13;
  longlong *plVar14;
  undefined1 auStack_178 [32];
  longlong local_158;
  undefined8 *local_150;
  undefined1 *local_148;
  undefined *local_140;
  undefined8 local_138;
  uint local_130;
  uint local_12c;
  undefined1 local_128 [8];
  float local_120;
  float local_11c;
  float local_118;
  longlong local_110;
  undefined8 local_108;
  undefined8 local_100;
  float local_f8;
  longlong local_f0;
  undefined8 local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  undefined1 local_c8 [72];
  longlong local_80;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  lVar5 = *(longlong *)(param_1 + 0x118);
  if ((0.0001 < *(float *)(param_1 + 0x208) || *(float *)(param_1 + 0x208) == 0.0001) &&
     (lVar5 != 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146b2bc68) &&
       (_Init_thread_header(&DAT_146b2bc68), DAT_146b2bc68 == -1)) {
      FName::FName(&DAT_146b2bc60,"SmartLinkBroadcastTrace",1);
      _Init_thread_footer(&DAT_146b2bc68);
    }
    local_158 = lVar5;
    FUN_1422ffb20(local_c8,DAT_146b2bc60,local_128,0);
    plVar10 = (longlong *)0x0;
    local_110 = 0;
    local_108 = 0;
    local_f0 = 0;
    local_e8 = 0;
    FUN_142ba0d50(param_1,&local_e0);
    FUN_142b9f860(param_1,&local_120);
    lVar5 = *(longlong *)(param_1 + 0x120);
    bVar2 = *(byte *)(param_1 + 0x210);
    fVar1 = *(float *)(param_1 + 0x208);
    local_138 = (longlong *)CONCAT44(fVar1,2);
    if ((local_dc - local_11c) * (local_dc - local_11c) +
        (local_e0 - local_120) * (local_e0 - local_120) +
        (local_d8 - local_118) * (local_d8 - local_118) <= fVar1 * fVar1 * 0.0625) {
      local_f8 = (local_d8 + local_118) * 0.5;
      local_100 = CONCAT44((local_dc + local_11c) * 0.5,(local_e0 + local_120) * 0.5);
      if (lVar5 == 0) {
        lVar5 = FUN_1423407b0(param_1);
      }
      pfVar11 = (float *)&local_100;
      plVar7 = &local_110;
    }
    else {
      if (lVar5 == 0) {
        lVar5 = FUN_1423407b0(param_1);
      }
      local_148 = local_c8;
      local_140 = &DAT_146aefe68;
      local_150 = &local_138;
      local_158 = CONCAT44(local_158._4_4_,(uint)bVar2);
      UWorld::OverlapMultiByChannel(lVar5,&local_110,&local_e0,&DAT_1464aa810);
      lVar5 = *(longlong *)(param_1 + 0x120);
      bVar2 = *(byte *)(param_1 + 0x210);
      local_138 = (longlong *)CONCAT44(*(undefined4 *)(param_1 + 0x208),2);
      if (lVar5 == 0) {
        lVar5 = FUN_1423407b0(param_1);
      }
      pfVar11 = &local_120;
      plVar7 = &local_f0;
    }
    local_140 = &DAT_146aefe68;
    local_148 = local_c8;
    local_150 = &local_138;
    local_158 = CONCAT44(local_158._4_4_,(uint)bVar2);
    UWorld::OverlapMultiByChannel(lVar5,plVar7,pfVar11,&DAT_1464aa810);
    local_138 = (longlong *)0x0;
    local_12c = 0;
    plVar7 = plVar10;
    plVar9 = plVar10;
    plVar12 = plVar10;
    plVar14 = plVar10;
    if (0 < (int)local_108) {
      do {
        lVar5 = FUN_1423111a0(local_110 + (longlong)(int)plVar14 * 0x18);
        if (lVar5 != 0) {
          lVar6 = FUN_1429d7ab0();
          if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if ((bVar4) && (local_100 = *(longlong *)(lVar5 + 0x490), local_100 != 0)) {
            iVar8 = (int)plVar7;
            local_130 = iVar8 + 1;
            if ((int)plVar12 < (int)local_130) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_138,plVar7);
              plVar12 = (longlong *)(ulonglong)local_12c;
              plVar9 = local_138;
            }
            plVar7 = (longlong *)(ulonglong)local_130;
            plVar9[iVar8] = local_100;
          }
        }
        uVar13 = (int)plVar14 + 1;
        plVar14 = (longlong *)(ulonglong)uVar13;
      } while ((int)uVar13 < (int)local_108);
    }
    iVar8 = (int)plVar7;
    if (0 < (int)local_e8) {
      do {
        lVar5 = FUN_1423111a0(local_f0 + (longlong)(int)plVar10 * 0x18);
        if (lVar5 != 0) {
          lVar6 = FUN_1429d7ab0();
          if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if ((bVar4) && (lVar5 = *(longlong *)(lVar5 + 0x490), lVar5 != 0)) {
            iVar8 = (int)plVar7;
            local_130 = iVar8 + 1;
            if ((int)plVar12 < (int)local_130) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_138,plVar7);
              plVar12 = (longlong *)(ulonglong)local_12c;
              plVar9 = local_138;
            }
            plVar7 = (longlong *)(ulonglong)local_130;
            plVar9[iVar8] = lVar5;
          }
        }
        iVar8 = (int)plVar7;
        uVar13 = (int)plVar10 + 1;
        plVar10 = (longlong *)(ulonglong)uVar13;
      } while ((int)uVar13 < (int)local_e8);
    }
    for (plVar10 = plVar9; plVar10 != plVar9 + iVar8; plVar10 = plVar10 + 1) {
      plVar7 = (longlong *)(**(code **)(*(longlong *)(*plVar10 + 0x458) + 0x50))();
      if (plVar7 != (longlong *)0x0) {
        lVar5 = (**(code **)(*plVar7 + 8))(plVar7);
        lVar6 = UObject::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          iVar3 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar3 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
          }
          *(longlong *)(*param_2 + (longlong)iVar3 * 8) = lVar5;
        }
      }
    }
    if (plVar9 != (longlong *)0x0) {
      FMemory::Free(plVar9);
    }
    if (local_f0 != 0) {
      FMemory::Free();
    }
    if (local_110 != 0) {
      FMemory::Free();
    }
    if (local_60 != 0) {
      FMemory::Free();
    }
    if (local_80 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142b9e080 CreateSceneProxy body=46 status=ok
// SIG undefined CreateSceneProxy(void)

void UModelComponent::CreateSceneProxy(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x3d0);
  if (lVar1 != 0) {
    FUN_142b9b900(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 142b9e0b0 FUN_142b9e0b0 body=46 status=ok
// SIG undefined FUN_142b9e0b0(void)

void FUN_142b9e0b0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x590);
  if (lVar1 != 0) {
    FUN_142b9bb90(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 142b9e0f0 Empty body=405 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<FNavTestSceneProxy::FNodeDebugData>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
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
    uVar4 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar3) goto LAB_142b9e1c1;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar4 & uVar4;
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
LAB_142b9e1c1:
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
      if (*(longlong *)((longlong)iStack_1c * 0x38 + *param_1 + 0x18) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 142b9e290 FUN_142b9e290 body=378 status=ok
// SIG undefined FUN_142b9e290(void)

void FUN_142b9e290(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar6 = 0;
  *(undefined4 *)(param_1 + 0x4f0) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x4f4)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<92,4>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 0x4e8,0);
  }
  *(undefined4 *)(param_1 + 0x510) = 0;
  if ((*(int *)(param_1 + 0x514) < 0) && (*(int *)(param_1 + 0x514) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<92,4>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 0x508,0);
  }
  *(undefined4 *)(param_1 + 0x500) = 0;
  if ((*(int *)(param_1 + 0x504) < 0) && (*(int *)(param_1 + 0x504) != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x4f8,0);
  }
  *(undefined4 *)(param_1 + 0x520) = 0;
  if ((*(int *)(param_1 + 0x524) < 0) && (*(int *)(param_1 + 0x524) != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x518,0);
  }
  uVar7 = *(int *)(param_1 + 0x530) - *(int *)(param_1 + 0x55c);
  TSparseArray<TSetElement<FNavTestSceneProxy::FNodeDebugData>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x528,uVar7);
  if (uVar7 < 4) {
    iVar2 = 1;
  }
  else {
    uVar1 = (uVar7 >> 1) + 8;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar4 = 0x20;
    if (uVar1 != 0) {
      iVar4 = 0x1f - iVar2;
    }
    uVar1 = (uVar7 >> 1) + 7;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 1 << (~(byte)((iVar4 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
    }
  }
  if (((int)uVar7 < 1) ||
     (((iVar4 = *(int *)(param_1 + 0x570), iVar4 != 0 && (iVar2 <= iVar4)) && (iVar4 <= iVar2)))) {
    if (0 < (int)*(uint *)(param_1 + 0x570)) {
      uVar8 = (ulonglong)*(uint *)(param_1 + 0x570);
      do {
        lVar5 = *(longlong *)(param_1 + 0x568);
        if (*(longlong *)(param_1 + 0x568) == 0) {
          lVar5 = param_1 + 0x560;
        }
        uVar3 = (longlong)*(int *)(param_1 + 0x570) - 1U & uVar6;
        uVar6 = uVar6 + 1;
        *(undefined4 *)(lVar5 + uVar3 * 4) = 0xffffffff;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  else {
    *(int *)(param_1 + 0x570) = iVar2;
    TSet<TTuple<int,FIndividualOcclusionHistory>,TDefaultMapHashableKeyFuncs<int,FIndividualOcclusionHistory,0>,FDefaultSetAllocator>
    ::Rehash(param_1 + 0x528);
  }
  *(undefined4 *)(param_1 + 0x578) = 0xffffffff;
  return;
}



// FUNCTION 142b9e410 FUN_142b9e410 body=488 status=ok
// SIG undefined FUN_142b9e410(void)

int FUN_142b9e410(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  int local_88;
  uint uStack_84;
  int iStack_80;
  uint uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  longlong *local_60;
  int iStack_58;
  uint uStack_54;
  uint *puStack_50;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  iVar15 = 0;
  plVar1 = (longlong *)(param_1 + 0x528);
  iVar2 = *(int *)(param_1 + 0x550);
  puStack_50 = (uint *)(param_1 + 0x538);
  iVar12 = 0;
  local_88 = 0;
  uStack_84 = 1;
  local_78._4_4_ = 0;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  if (iVar2 != 0) {
    puVar16 = *(uint **)(param_1 + 0x548);
    if (*(uint **)(param_1 + 0x548) == (uint *)0x0) {
      puVar16 = puStack_50;
    }
    uVar3 = *puVar16;
    local_88 = iVar15;
    while (uVar3 == 0) {
      lVar13 = (longlong)local_88;
      iVar12 = iVar12 + 0x20;
      iVar14 = local_88 + 1;
      uStack_70._4_4_ = (int)(uStack_70 >> 0x20);
      uStack_70 = CONCAT44(uStack_70._4_4_,iVar12);
      bVar9 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar14;
      if (bVar9) goto LAB_142b9e4dd;
      uVar3 = puVar16[lVar13 + 1];
    }
    uStack_84 = -uVar3 & uVar3;
    iVar14 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar14 = 0x20;
    }
    else {
      iVar14 = 0x1f - iVar14;
    }
    local_78._4_4_ = (iVar12 - iVar14) + 0x1f;
    if (iVar2 < local_78._4_4_) {
LAB_142b9e4dd:
      local_78._4_4_ = iVar2;
    }
  }
  uStack_48 = 0xffffffff;
  iStack_44 = local_78._4_4_;
  uStack_40 = (uint)uStack_70;
  uStack_3c = uStack_70._4_4_;
  iStack_58 = local_88;
  uStack_54 = uStack_84;
  iVar12 = local_78._4_4_;
  iStack_80 = local_88;
  uStack_7c = uStack_84;
  local_68 = (uint)uStack_70;
  uStack_64 = uStack_70._4_4_;
  bVar9 = local_78._4_4_ < iVar2;
  local_78 = puStack_50;
  local_60 = plVar1;
  uStack_70._0_4_ = 0xffffffff;
  uStack_70._4_4_ = iVar12;
  iVar2 = 0;
  if (bVar9) {
    do {
      iVar15 = iVar15 + *(int *)((longlong)uStack_70._4_4_ * 0x38 + 0x24 + *plVar1) * 2;
      uStack_70._0_4_ = (uint)uStack_70 & ~uStack_7c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
      iVar2 = iVar15;
    } while (uStack_70._4_4_ < (int)local_78[6]);
  }
  iVar12 = *(int *)(param_1 + 0x4d4);
  iVar15 = *(int *)(param_1 + 0x534);
  iVar14 = *(int *)(param_1 + 0x4e4);
  iVar4 = *(int *)(param_1 + 0x4f4);
  iVar5 = *(int *)(param_1 + 0x504);
  iVar6 = *(int *)(param_1 + 0x514);
  iVar10 = *(int *)(param_1 + 0x554) + 0x1f;
  iVar7 = *(int *)(param_1 + 0x524);
  iVar8 = *(int *)(param_1 + 0x570);
  iVar11 = FUN_1423ed7a0(param_1);
  return iVar11 + (iVar15 * 0xe + ((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) + iVar8) * 4 +
         ((iVar6 + iVar4) * 0x17 + iVar5 + iVar7) * 4 + iVar14 * 0x10 + iVar12 * 0xc + iVar2;
}



// FUNCTION 142b9e600 FUN_142b9e600 body=818 status=ok
// SIG undefined FUN_142b9e600(void)

void FUN_142b9e600(ulonglong param_1,longlong param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5)

{
  bool bVar1;
  ulonglong uVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined8 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  float fVar18;
  ulonglong local_res8;
  longlong local_res10;
  uint local_88;
  undefined *local_78;
  ulonglong *puStack_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong uVar12;
  
  if (*(longlong **)(param_1 + 0x3a0) == (longlong *)0x0) {
    return;
  }
  local_res8 = param_1;
  local_res10 = param_2;
  lVar5 = (**(code **)(**(longlong **)(param_1 + 0x3a0) + 0x148))();
  if (lVar5 == 0) {
    return;
  }
  lVar5 = (**(code **)(**(longlong **)(param_1 + 0x3a0) + 0x148))();
  uVar9 = 0;
  if ((lVar5 != 0) && (uVar17 = *(ulonglong *)(lVar5 + 0x138), uVar17 != 0)) {
    lVar5 = FUN_142ba9430();
    if ((*(int *)(*(longlong *)(uVar17 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar17 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142b9e6bf;
  }
  uVar17 = uVar9;
LAB_142b9e6bf:
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uVar14 = uVar9;
  if (((uVar17 != 0) && (0 < *(int *)(uVar17 + 0x70))) &&
     (TArray<float,FDefaultAllocator>::ResizeTo(&local_68,*(int *)(uVar17 + 0x70)),
     uVar14 = local_68, 0 < *(int *)(uVar17 + 0x70))) {
    uVar16 = 1;
    uVar12 = uVar9;
    uVar15 = uVar9;
    do {
      lVar5 = *(longlong *)(*(longlong *)(uVar17 + 0x68) + uVar15);
      if (lVar5 != 0) {
        lVar6 = FUN_142bac770();
        uVar2 = local_60;
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          bVar3 = *(byte *)(lVar5 + 0x4d0) & 1;
          if (bVar3 != 0) {
            local_88 = (uint)uVar9 | uVar16;
            uVar9 = (ulonglong)local_88;
          }
          fVar18 = *(float *)(lVar5 + 0x644);
          if ((0.0 < fVar18) && (bVar3 != 0)) {
            lVar6 = (longlong)(int)local_60;
            iVar4 = (int)local_60 + 1;
            local_60 = CONCAT44(local_60._4_4_,iVar4);
            if (local_60._4_4_ < iVar4) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_68,uVar2 & 0xffffffff);
              fVar18 = *(float *)(lVar5 + 0x644);
              uVar14 = local_68;
            }
            *(float *)(uVar14 + lVar6 * 4) = fVar18;
            uVar9 = (ulonglong)local_88;
          }
        }
      }
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
      uVar16 = uVar16 << 1 | (uint)((int)uVar16 < 0);
      uVar15 = uVar15 + 8;
      param_1 = local_res8;
    } while ((int)uVar11 < *(int *)(uVar17 + 0x70));
  }
  puVar13 = (undefined8 *)0x0;
  puStack_70 = &local_res8;
  local_res8 = local_res8 & 0xffffffffffffff00;
  local_78 = &DAT_14060d670;
  lVar5 = FUN_1415d8310(&local_78,&DAT_146216a38);
  puVar7 = (undefined8 *)operator_new(0x158,lVar5 + 0x18,1);
  puVar10 = puVar13;
  if (puVar7 != (undefined8 *)0x0) {
    FLinearColor::FLinearColor(&local_58,&DAT_146687a84);
    local_78 = (undefined *)0x3e;
    uVar8 = (**(code **)(**(longlong **)(DAT_146b17150 + 0x3c0) + 0x2a8))
                      (*(longlong **)(DAT_146b17150 + 0x3c0),0,0);
    FUN_14257dfd0(puVar7);
    puVar7[0x27] = uVar8;
    *puVar7 = &PTR__scalar_deleting_destructor__1440fad20;
    puVar7[0x2a] = local_78;
    *(undefined4 *)(puVar7 + 0x28) = local_58;
    *(undefined4 *)((longlong)puVar7 + 0x144) = uStack_54;
    *(undefined4 *)(puVar7 + 0x29) = uStack_50;
    *(undefined4 *)((longlong)puVar7 + 0x14c) = uStack_4c;
    puVar10 = puVar7;
  }
  lVar5 = local_res10;
  if (0 < *(int *)(local_res10 + 8)) {
    do {
      uVar16 = (uint)puVar13;
      if ((param_4 >> (uVar16 & 0x1f) & 1) != 0) {
        FUN_142b9f980(param_1 + 0x3b0,param_1 + 0x3c0,&local_68,puVar10,uVar16,param_5,local_88);
      }
      puVar13 = (undefined8 *)(ulonglong)(uVar16 + 1);
      uVar14 = local_68;
    } while ((int)(uVar16 + 1) < *(int *)(lVar5 + 8));
  }
  if (uVar14 != 0) {
    FMemory::Free(uVar14);
  }
  return;
}



// FUNCTION 142b9e940 FUN_142b9e940 body=3869 status=ok
// SIG undefined FUN_142b9e940(void)

void FUN_142b9e940(longlong param_1,longlong *param_2,undefined8 param_3,uint param_4,
                  ulonglong param_5)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  uint *puVar16;
  undefined1 *puVar17;
  uint uVar18;
  undefined8 *puVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  ulonglong in_stack_fffffffffffffc58;
  ulonglong uVar28;
  uint in_stack_fffffffffffffc60;
  uint uVar29;
  uint in_stack_fffffffffffffc68;
  ulonglong in_stack_fffffffffffffc70;
  undefined4 uVar31;
  ulonglong uVar30;
  undefined1 local_378;
  undefined1 local_377;
  undefined1 local_376 [2];
  undefined4 local_374;
  undefined4 local_370;
  undefined4 local_36c;
  undefined8 local_368;
  undefined8 uStack_360;
  float fStack_358;
  undefined8 uStack_354;
  undefined4 uStack_34c;
  undefined8 local_348;
  float local_340;
  undefined4 local_338;
  uint local_334;
  float local_330;
  float local_32c;
  float local_328;
  float local_320;
  float local_31c;
  float local_318;
  undefined4 local_310 [2];
  longlong local_308;
  float local_300;
  float local_2fc;
  float local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 local_2d0;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined4 local_2b8;
  undefined4 local_2b4;
  float local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  float local_2a4;
  longlong *local_2a0;
  undefined8 uStack_298;
  uint *local_290;
  undefined8 uStack_288;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined8 local_274;
  float local_26c;
  longlong *local_268;
  undefined8 uStack_260;
  uint *puStack_258;
  undefined4 uStack_250;
  int iStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined *local_238;
  undefined1 *puStack_230;
  undefined *local_228;
  undefined1 *puStack_220;
  undefined *local_218;
  undefined1 *puStack_210;
  float local_200;
  float local_1f4;
  float local_1e8;
  float local_1dc;
  float local_1d0;
  float local_1c4;
  undefined1 local_1c0 [32];
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined1 local_190 [16];
  undefined1 local_180 [16];
  undefined1 local_170 [16];
  undefined1 local_160 [16];
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [184];
  
  local_334 = 0;
  if (0 < (int)param_2[1]) {
    uVar18 = 1;
    local_308 = 0;
    do {
      uVar13 = local_334;
      if ((param_4 & uVar18) != 0) {
        lVar15 = *(longlong *)(*param_2 + local_308 * 8);
        lVar8 = *(longlong *)(param_5 + 0x88);
        if (*(longlong *)(param_5 + 0x88) == 0) {
          lVar8 = param_5 + 0x78;
        }
        lVar2 = *(longlong *)(param_1 + 0x4a8);
        plVar3 = *(longlong **)(lVar8 + local_308 * 8);
        if (lVar2 != 0) {
          lVar8 = *(longlong *)(lVar2 + 0x168);
          if (lVar8 == 0) {
            local_26c = DAT_1468b5d98;
            puVar10 = &local_274;
            local_274 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
          }
          else {
            puVar10 = (undefined8 *)&local_2d8;
            local_2d8 = *(undefined4 *)(lVar8 + 0x220);
            local_2d0 = *(undefined4 *)(lVar8 + 0x228);
            uStack_2d4 = *(undefined4 *)(lVar8 + 0x224);
          }
          local_348 = *puVar10;
          local_340 = *(float *)(puVar10 + 1);
          local_318 = *(float *)(param_1 + 0x4a0) + *(float *)(lVar2 + 0x4d0);
          local_31c = *(float *)(param_1 + 0x49c) + *(float *)(lVar2 + 0x4cc);
          local_320 = *(float *)(lVar2 + 0x4c8) + *(float *)(param_1 + 0x498);
          if ((*(byte *)(lVar2 + 0x4d4) & 1) == 0) {
            local_36c = 0x78ff0000;
            local_338 = local_36c;
          }
          else {
            local_370 = 0x7800ff00;
            local_338 = local_370;
          }
          local_310[0] = DAT_1464aa938;
          puStack_210 = &local_378;
          local_218 = &DAT_14060d670;
          local_368 = &DAT_14060d670;
          local_330 = 20.0;
          local_32c = 20.0;
          local_328 = 20.0;
          local_378 = 0;
          uStack_360 = (uint *)puStack_210;
          lVar8 = FUN_1415d8310(&local_368,&DAT_146216a38);
          uVar31 = (undefined4)(in_stack_fffffffffffffc70 >> 0x20);
          puVar19 = (undefined8 *)(*(longlong *)(lVar8 + 0x18) + 0xfU & 0xfffffffffffffff0);
          puVar1 = (ulonglong *)(lVar8 + 0x18);
          puVar10 = puVar19 + 0x2b;
          if (*(undefined8 **)(lVar8 + 0x20) < puVar10) {
            FMemStackBase::AllocateNewChunk(puVar1,0x168);
            puVar19 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
            puVar10 = puVar19 + 0x2b;
          }
          *puVar1 = (ulonglong)puVar10;
          if (puVar19 != (undefined8 *)0x0) {
            FLinearColor::FLinearColor(&local_1a0,&local_338);
            local_2f0 = 0x3e;
            uVar9 = (**(code **)(**(longlong **)(DAT_146b17150 + 0x3c0) + 0x2a8))
                              (*(longlong **)(DAT_146b17150 + 0x3c0),0,0);
            FUN_14257dfd0(puVar19);
            puVar19[0x27] = uVar9;
            *puVar19 = &PTR__scalar_deleting_destructor__1440fad20;
            puVar19[0x2a] = local_2f0;
            *(undefined4 *)(puVar19 + 0x28) = local_1a0;
            *(undefined4 *)((longlong)puVar19 + 0x144) = uStack_19c;
            *(undefined4 *)(puVar19 + 0x29) = uStack_198;
            *(undefined4 *)((longlong)puVar19 + 0x14c) = uStack_194;
          }
          uVar30 = CONCAT44(uVar31,uVar13);
          in_stack_fffffffffffffc68 = in_stack_fffffffffffffc68 & 0xffffff00;
          GetSphereMesh(&local_320,&local_330,10,7,puVar19,in_stack_fffffffffffffc60 & 0xffffff00,
                        in_stack_fffffffffffffc68,uVar30,param_5);
          FLinearColor::FLinearColor(local_190,&DAT_1464aa730);
          local_1f4 = local_340 + local_328;
          uStack_360._0_4_ = local_340 - local_328;
          uStack_360._4_4_ = (float)local_348 + local_330;
          fStack_358 = local_348._4_4_ + local_32c;
          local_368 = (undefined *)
                      CONCAT44(local_348._4_4_ - local_32c,(float)local_348 - local_330);
          uVar28 = (ulonglong)puVar19 & 0xffffffff00000000;
          uStack_354._0_5_ = CONCAT14(1,local_1f4);
          local_1dc = (float)uStack_360;
          FUN_1427055a0(plVar3,&local_368,local_190,0,uVar28,0,
                        in_stack_fffffffffffffc68 & 0xffffff00);
          fVar23 = local_320 - (float)local_348;
          fVar25 = local_31c - local_348._4_4_;
          fVar27 = local_318 - local_340;
          fVar20 = fVar25 * fVar25 + fVar23 * fVar23 + fVar27 * fVar27;
          fVar24 = fVar23;
          fVar26 = fVar25;
          fVar21 = fVar27;
          if ((fVar20 != 1.0) &&
             (fVar24 = DAT_1468b5d90, fVar26 = DAT_1468b5d94, fVar21 = DAT_1468b5d98,
             1e-08 <= fVar20)) {
            auVar22 = rsqrtss(ZEXT416((uint)fVar20),ZEXT416((uint)fVar20));
            fVar21 = auVar22._0_4_;
            fVar21 = fVar21 + fVar21 * (0.5 - fVar20 * 0.5 * fVar21 * fVar21);
            fVar21 = fVar21 + fVar21 * (0.5 - fVar20 * 0.5 * fVar21 * fVar21);
            fVar24 = fVar21 * fVar23;
            fVar26 = fVar21 * fVar25;
            fVar21 = fVar21 * fVar27;
          }
          local_300 = local_320 - fVar24 * local_330;
          local_2fc = local_31c - fVar26 * local_330;
          local_2f8 = local_318 - fVar21 * local_330;
          FLinearColor::FLinearColor(local_130,&local_338);
          uVar30 = uVar30 & 0xffffffffffffff00;
          uVar29 = 0x40200000;
          (**(code **)(*plVar3 + 0x38))
                    (plVar3,&local_300,&local_348,local_130,uVar28 & 0xffffffffffffff00,0x40200000,0
                     ,uVar30);
          FLinearColor::FLinearColor(local_180,&local_338);
          puVar17 = local_180;
          in_stack_fffffffffffffc70 = uVar30 & 0xffffffffffffff00;
          in_stack_fffffffffffffc68 = 0x40200000;
          FUN_14272a4d0(plVar3,&local_300,&local_348,0x41a00000,puVar17,uVar29 & 0xffffff00,
                        0x40200000,in_stack_fffffffffffffc70);
          FLinearColor::FLinearColor(local_170,&DAT_1464aa740);
          lVar8 = *(longlong *)(param_1 + 0x4a8);
          in_stack_fffffffffffffc68 = in_stack_fffffffffffffc68 & 0xffffff00;
          in_stack_fffffffffffffc60 = 0;
          in_stack_fffffffffffffc58 = (ulonglong)puVar17 & 0xffffffff00000000;
          local_1e8 = local_340 + *(float *)(lVar8 + 0x4b8);
          uStack_360._4_4_ = (float)local_348 + *(float *)(lVar8 + 0x4b0);
          uStack_360._0_4_ = local_340 - *(float *)(lVar8 + 0x4b8);
          fStack_358 = local_348._4_4_ + *(float *)(lVar8 + 0x4b4);
          local_368 = (undefined *)
                      CONCAT44(local_348._4_4_ - *(float *)(lVar8 + 0x4b4),
                               (float)local_348 - *(float *)(lVar8 + 0x4b0));
          uStack_354._0_5_ = CONCAT14(1,local_1e8);
          local_200 = (float)uStack_360;
          FUN_1427055a0(plVar3,&local_368,local_170,0,in_stack_fffffffffffffc58,0,
                        in_stack_fffffffffffffc68);
          if ((((float)DAT_146687a50 != *(float *)(param_1 + 0x57c)) ||
              (DAT_146687a50._4_4_ != *(float *)(param_1 + 0x580))) ||
             (DAT_146687a58 != *(float *)(param_1 + 0x584))) {
            FLinearColor::FLinearColor(local_160,local_310);
            in_stack_fffffffffffffc70 = in_stack_fffffffffffffc70 & 0xffffffffffffff00;
            in_stack_fffffffffffffc68 = 0;
            in_stack_fffffffffffffc60 = 0x40200000;
            in_stack_fffffffffffffc58 = in_stack_fffffffffffffc58 & 0xffffffffffffff00;
            (**(code **)(*plVar3 + 0x38))
                      (plVar3,param_1 + 0x57c,&local_348,local_160,in_stack_fffffffffffffc58,
                       0x40200000,0,in_stack_fffffffffffffc70);
          }
        }
        uVar29 = *(uint *)(param_1 + 0x588);
        if ((((uVar29 & 1) == 0) || (*(int *)(param_1 + 0x530) == *(int *)(param_1 + 0x55c))) &&
           (iVar14 = 1, 1 < *(int *)(param_1 + 0x4d0))) {
          do {
            in_stack_fffffffffffffc70 = CONCAT71((int7)(in_stack_fffffffffffffc70 >> 8),1);
            in_stack_fffffffffffffc68 = 0;
            in_stack_fffffffffffffc60 = 0x40000000;
            in_stack_fffffffffffffc58 = in_stack_fffffffffffffc58 & 0xffffffffffffff00;
            (**(code **)(*plVar3 + 0x38))
                      (plVar3,*(longlong *)(param_1 + 0x4c8) + (longlong)(iVar14 + -1) * 0xc,
                       *(longlong *)(param_1 + 0x4c8) + (longlong)iVar14 * 0xc,&DAT_1464aa6f0,
                       in_stack_fffffffffffffc58,0x40000000,0,in_stack_fffffffffffffc70);
            iVar14 = iVar14 + 1;
          } while (iVar14 < *(int *)(param_1 + 0x4d0));
          uVar29 = *(uint *)(param_1 + 0x588);
        }
        if ((uVar29 & 2) != 0) {
          if (*(int *)(param_1 + 0x520) != 0) {
            puStack_220 = &local_377;
            local_228 = &DAT_14060d670;
            local_368 = &DAT_14060d670;
            local_377 = 0;
            uStack_360 = (uint *)puStack_220;
            lVar8 = FUN_1415d8310(&local_368,&DAT_146216a38);
            puVar19 = (undefined8 *)(*(longlong *)(lVar8 + 0x18) + 0xfU & 0xfffffffffffffff0);
            puVar1 = (ulonglong *)(lVar8 + 0x18);
            puVar10 = puVar19 + 0x2b;
            if (*(undefined8 **)(lVar8 + 0x20) < puVar10) {
              FMemStackBase::AllocateNewChunk(puVar1,0x168);
              puVar19 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
              puVar10 = puVar19 + 0x2b;
            }
            *puVar1 = (ulonglong)puVar10;
            if (puVar19 != (undefined8 *)0x0) {
              FLinearColor::FLinearColor(&local_150,&DAT_146687a80);
              local_2e8 = 0x3e;
              uVar9 = (**(code **)(**(longlong **)(DAT_146b17150 + 0x3c0) + 0x2a8))
                                (*(longlong **)(DAT_146b17150 + 0x3c0),0,0);
              FUN_14257dfd0(puVar19);
              puVar19[0x27] = uVar9;
              *puVar19 = &PTR__scalar_deleting_destructor__1440fad20;
              puVar19[0x2a] = local_2e8;
              *(undefined4 *)(puVar19 + 0x28) = local_150;
              *(undefined4 *)((longlong)puVar19 + 0x144) = uStack_14c;
              *(undefined4 *)(puVar19 + 0x29) = uStack_148;
              *(undefined4 *)((longlong)puVar19 + 0x14c) = uStack_144;
            }
            uVar28 = in_stack_fffffffffffffc58 & 0xffffffffffffff00;
            FUN_1424290d0(local_1c0,*(undefined4 *)(lVar15 + 0x1a38),1,0,uVar28);
            FUN_14242c440(local_1c0,param_1 + 0x508);
            FUN_14242bfc0(local_1c0,param_1 + 0x518);
            uVar29 = *(uint *)(param_1 + 0x18);
            if ((uVar29 >> 0xb & 1) != 0) {
              plVar4 = *(longlong **)(param_1 + 0x120);
              for (plVar11 = plVar4; plVar11 != plVar4 + *(int *)(param_1 + 0x128);
                  plVar11 = plVar11 + 1) {
                if (*plVar11 == *(longlong *)(lVar15 + 0x350)) {
                  if ((int)((longlong)plVar11 - (longlong)plVar4 >> 3) != -1) {
                    bVar12 = (byte)(uVar29 >> 0x10);
                    goto LAB_142b9f1fa;
                  }
                  break;
                }
              }
            }
            bVar12 = (byte)(uVar29 >> 0xd);
LAB_142b9f1fa:
            in_stack_fffffffffffffc60 = in_stack_fffffffffffffc60 & 0xffffff00;
            in_stack_fffffffffffffc58 = uVar28 & 0xffffffffffffff00;
            in_stack_fffffffffffffc68 = uVar13;
            in_stack_fffffffffffffc70 = param_5;
            FDynamicMeshBuilder::GetMesh
                      (local_1c0,&DAT_1464aa7d0,puVar19,bVar12 & 7,in_stack_fffffffffffffc58,
                       in_stack_fffffffffffffc60,uVar13,param_5);
            FDynamicMeshBuilder::~FDynamicMeshBuilder();
          }
          if (*(int *)(param_1 + 0x500) != 0) {
            puStack_230 = local_376;
            local_376[0] = 0;
            local_238 = &DAT_14060d670;
            local_368 = &DAT_14060d670;
            uStack_360 = (uint *)puStack_230;
            lVar8 = FUN_1415d8310(&local_368,&DAT_146216a38);
            puVar19 = (undefined8 *)(*(longlong *)(lVar8 + 0x18) + 0xfU & 0xfffffffffffffff0);
            puVar1 = (ulonglong *)(lVar8 + 0x18);
            puVar10 = puVar19 + 0x2b;
            if (*(undefined8 **)(lVar8 + 0x20) < puVar10) {
              FMemStackBase::AllocateNewChunk(puVar1,0x168);
              puVar19 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
              puVar10 = puVar19 + 0x2b;
            }
            *puVar1 = (ulonglong)puVar10;
            if (puVar19 != (undefined8 *)0x0) {
              FLinearColor::FLinearColor(&local_140,&DAT_146687a7c);
              local_2e0 = 0x3e;
              uVar9 = (**(code **)(**(longlong **)(DAT_146b17150 + 0x3c0) + 0x2a8))
                                (*(longlong **)(DAT_146b17150 + 0x3c0),0,0);
              FUN_14257dfd0(puVar19);
              puVar19[0x27] = uVar9;
              *puVar19 = &PTR__scalar_deleting_destructor__1440fad20;
              puVar19[0x2a] = local_2e0;
              *(undefined4 *)(puVar19 + 0x28) = local_140;
              *(undefined4 *)((longlong)puVar19 + 0x144) = uStack_13c;
              *(undefined4 *)(puVar19 + 0x29) = uStack_138;
              *(undefined4 *)((longlong)puVar19 + 0x14c) = uStack_134;
            }
            uVar28 = in_stack_fffffffffffffc58 & 0xffffffffffffff00;
            FUN_1424290d0(&local_268,*(undefined4 *)(lVar15 + 0x1a38),1,0,uVar28);
            FUN_14242c440(&local_268,param_1 + 0x4e8);
            FUN_14242bfc0(&local_268,param_1 + 0x4f8);
            uVar29 = *(uint *)(param_1 + 0x18);
            if ((uVar29 >> 0xb & 1) != 0) {
              plVar4 = *(longlong **)(param_1 + 0x120);
              for (plVar11 = plVar4; plVar11 != plVar4 + *(int *)(param_1 + 0x128);
                  plVar11 = plVar11 + 1) {
                if (*plVar11 == *(longlong *)(lVar15 + 0x350)) {
                  if ((int)((longlong)plVar11 - (longlong)plVar4 >> 3) != -1) {
                    bVar12 = (byte)(uVar29 >> 0x10);
                    goto LAB_142b9f3b5;
                  }
                  break;
                }
              }
            }
            bVar12 = (byte)(uVar29 >> 0xd);
LAB_142b9f3b5:
            in_stack_fffffffffffffc60 = in_stack_fffffffffffffc60 & 0xffffff00;
            in_stack_fffffffffffffc58 = uVar28 & 0xffffffffffffff00;
            in_stack_fffffffffffffc68 = uVar13;
            in_stack_fffffffffffffc70 = param_5;
            FDynamicMeshBuilder::GetMesh
                      (&local_268,&DAT_1464aa7d0,puVar19,bVar12 & 7,in_stack_fffffffffffffc58,
                       in_stack_fffffffffffffc60,uVar13,param_5);
            FDynamicMeshBuilder::~FDynamicMeshBuilder();
          }
        }
        plVar4 = (longlong *)(param_1 + 0x528);
        local_368 = (undefined *)0x100000000;
        iVar14 = *(int *)(param_1 + 0x550);
        puStack_258 = (uint *)(param_1 + 0x538);
        uVar29 = 0;
        uStack_354 = 0;
        if (iVar14 != 0) {
          puVar16 = *(uint **)(param_1 + 0x548);
          if (*(uint **)(param_1 + 0x548) == (uint *)0x0) {
            puVar16 = puStack_258;
          }
          uVar6 = *puVar16;
          iVar7 = 0;
          while (uVar6 == 0) {
            uVar29 = uVar29 + 0x20;
            uStack_354 = (ulonglong)uVar29 << 0x20;
            uVar28 = (ulonglong)local_368 >> 0x20;
            local_368 = (undefined *)CONCAT44((int)uVar28,iVar7 + 1);
            if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar7)
            goto LAB_142b9f4e4;
            uVar6 = puVar16[(longlong)iVar7 + 1];
            iVar7 = iVar7 + 1;
          }
          uVar6 = -uVar6 & uVar6;
          iVar7 = 0x1f;
          if (uVar6 != 0) {
            for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
            }
          }
          local_368 = (undefined *)CONCAT44(uVar6,SUB84(local_368,0));
          if (uVar6 == 0) {
            iVar7 = 0x20;
          }
          else {
            iVar7 = 0x1f - iVar7;
          }
          iVar7 = (uVar29 - iVar7) + 0x1f;
          uStack_354._4_4_ = (undefined4)((ulonglong)uStack_354 >> 0x20);
          uStack_354 = CONCAT44(uStack_354._4_4_,iVar7);
          if (iVar14 < iVar7) {
LAB_142b9f4e4:
            uStack_354 = CONCAT44(uStack_354._4_4_,iVar14);
          }
        }
        fStack_358 = -NAN;
        uStack_250 = 0xffffffff;
        iStack_24c = (int)uStack_354;
        uStack_248 = uStack_354._4_4_;
        uStack_244 = uStack_34c;
        uStack_260 = local_368;
        local_2a0 = plVar4;
        uStack_298 = local_368;
        local_280 = uStack_354._4_4_;
        uStack_27c = uStack_34c;
        local_290 = puStack_258;
        uStack_288 = CONCAT44((int)uStack_354,0xffffffff);
        iVar7 = (int)uStack_354;
        local_268 = plVar4;
        uStack_360 = puStack_258;
        if ((int)uStack_354 < iVar14) {
          do {
            lVar15 = (longlong)iVar7 * 0x38 + *local_2a0;
            local_374 = DAT_1464aa740;
            if (((*(uint *)(param_1 + 0x588) & 1) != 0) && ((*(byte *)(lVar15 + 0x2c) & 2) != 0)) {
              local_374 = DAT_1464aa738;
            }
            uVar13 = *(uint *)(param_1 + 0x588) & 4;
            if (uVar13 != 0) {
              uVar5 = 0x40;
              if ((*(byte *)(lVar15 + 0x2c) & 4) != 0) {
                uVar5 = 0xff;
              }
              local_374 = CONCAT13(uVar5,(undefined3)local_374);
            }
            lVar8 = lVar15;
            if (*(int *)(lVar15 + 0x28) != -1) {
              lVar8 = (longlong)*(int *)(lVar15 + 0x28) * 0x38 + *plVar4;
            }
            local_2c8 = *(undefined8 *)(lVar8 + 8);
            local_2c0 = *(undefined4 *)(lVar8 + 0x10);
            if ((uVar13 == 0) || ((*(byte *)(lVar15 + 0x2c) & 4) != 0)) {
              FLinearColor::FLinearColor(local_120,&local_374);
              in_stack_fffffffffffffc70 = CONCAT71((int7)(in_stack_fffffffffffffc70 >> 8),1);
              puVar17 = local_120;
              in_stack_fffffffffffffc60 = 0x40000000;
            }
            else {
              FLinearColor::FLinearColor(local_f0,&local_374);
              in_stack_fffffffffffffc70 = in_stack_fffffffffffffc70 & 0xffffffffffffff00;
              puVar17 = local_f0;
              in_stack_fffffffffffffc60 = 0;
            }
            in_stack_fffffffffffffc68 = 0;
            in_stack_fffffffffffffc58 = in_stack_fffffffffffffc58 & 0xffffffffffffff00;
            (**(code **)(*plVar3 + 0x38))
                      (plVar3,lVar15 + 8,&local_2c8,puVar17,in_stack_fffffffffffffc58,
                       in_stack_fffffffffffffc60,0,in_stack_fffffffffffffc70);
            if ((*(byte *)(lVar15 + 0x2c) & 8) != 0) {
              FLinearColor::FLinearColor(local_110,&local_374);
              local_1c4 = *(float *)(lVar15 + 0x10) + 10.0;
              in_stack_fffffffffffffc68 = in_stack_fffffffffffffc68 & 0xffffff00;
              in_stack_fffffffffffffc60 = 0;
              in_stack_fffffffffffffc58 = in_stack_fffffffffffffc58 & 0xffffffff00000000;
              uStack_354 = CONCAT35(uStack_354._5_3_,0x100000000);
              uStack_360._4_4_ = *(float *)(lVar15 + 8) + 10.0;
              uStack_360._0_4_ = *(float *)(lVar15 + 0x10) - 10.0;
              fStack_358 = *(float *)(lVar15 + 0xc) + 10.0;
              local_368 = (undefined *)
                          CONCAT44(*(float *)(lVar15 + 0xc) - 10.0,*(float *)(lVar15 + 8) - 10.0);
              uStack_354 = CONCAT44(uStack_354._4_4_,local_1c4);
              local_1d0 = (float)uStack_360;
              FUN_1427055a0(plVar3,&local_368,local_110,0,in_stack_fffffffffffffc58,0,
                            in_stack_fffffffffffffc68);
            }
            if (((*(byte *)(param_1 + 0x588) & 4) != 0) && ((*(byte *)(lVar15 + 0x2c) & 4) != 0)) {
              FLinearColor::FLinearColor(local_100,&DAT_1464aa73c);
              local_2b8 = *(undefined4 *)(lVar15 + 8);
              local_2b4 = *(undefined4 *)(lVar15 + 0xc);
              in_stack_fffffffffffffc70 = in_stack_fffffffffffffc70 & 0xffffffffffffff00;
              local_2b0 = *(float *)(lVar15 + 0x10) + 100.0;
              local_2a4 = *(float *)(lVar15 + 0x10) + 10.0;
              in_stack_fffffffffffffc68 = 0;
              in_stack_fffffffffffffc60 = 0;
              in_stack_fffffffffffffc58 = in_stack_fffffffffffffc58 & 0xffffffffffffff00;
              local_2ac = local_2b8;
              local_2a8 = local_2b4;
              (**(code **)(*plVar3 + 0x38))
                        (plVar3,&local_2ac,&local_2b8,local_100,in_stack_fffffffffffffc58,0,0,
                         in_stack_fffffffffffffc70);
            }
            uStack_288 = CONCAT44(uStack_288._4_4_,(uint)uStack_288 & ~uStack_298._4_4_);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_298);
            uVar13 = local_334;
            iVar7 = uStack_288._4_4_;
          } while (uStack_288._4_4_ < (int)local_290[6]);
        }
      }
      local_334 = uVar13 + 1;
      uVar18 = uVar18 << 1 | (uint)((int)uVar18 < 0);
      local_308 = local_308 + 1;
    } while ((int)local_334 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 142b9f860 FUN_142b9f860 body=206 status=ok
// SIG undefined FUN_142b9f860(void)

float * FUN_142b9f860(longlong param_1,float *param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x168);
  if (lVar1 == 0) {
    pfVar8 = (float *)&DAT_1468b5b70;
  }
  else {
    pfVar8 = (float *)(lVar1 + 0x210);
  }
  fVar2 = *pfVar8;
  fVar3 = pfVar8[1];
  fVar4 = pfVar8[2];
  fVar5 = pfVar8[3];
  fVar12 = *(float *)(param_1 + 0x1d4) * pfVar8[8];
  fVar13 = *(float *)(param_1 + 0x1d8) * pfVar8[9];
  fVar14 = *(float *)(param_1 + 0x1dc) * pfVar8[10];
  fVar9 = fVar14 * fVar3 - fVar13 * fVar4;
  fVar10 = fVar12 * fVar4 - fVar14 * fVar2;
  fVar11 = fVar13 * fVar2 - fVar12 * fVar3;
  fVar9 = fVar9 + fVar9;
  fVar10 = fVar10 + fVar10;
  fVar11 = fVar11 + fVar11;
  fVar6 = pfVar8[5];
  fVar7 = pfVar8[6];
  *param_2 = (fVar11 * fVar3 - fVar10 * fVar4) + fVar5 * fVar9 + fVar12 + pfVar8[4];
  param_2[2] = (fVar10 * fVar2 - fVar9 * fVar3) + fVar5 * fVar11 + fVar14 + fVar7;
  param_2[1] = (fVar9 * fVar4 - fVar11 * fVar2) + fVar5 * fVar10 + fVar13 + fVar6;
  return param_2;
}



// FUNCTION 142b9f980 FUN_142b9f980 body=3815 status=ok
// SIG undefined FUN_142b9f980(void)

void FUN_142b9f980(longlong *param_1,longlong *param_2,longlong *param_3,ulonglong param_4,
                  int param_5,longlong param_6,uint param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  float *pfVar17;
  uint uVar18;
  int iVar19;
  float *pfVar20;
  float *pfVar21;
  float fVar22;
  longlong local_res8;
  undefined8 *in_stack_fffffffffffffcd8;
  undefined4 uVar24;
  undefined8 uVar23;
  undefined8 *puVar25;
  undefined1 *puVar26;
  ulonglong uVar27;
  uint in_stack_fffffffffffffce8;
  ulonglong in_stack_fffffffffffffcf0;
  undefined4 uVar30;
  ulonglong uVar28;
  undefined8 uVar29;
  undefined8 local_2e8;
  undefined4 local_2e0;
  float local_2dc;
  undefined8 local_2d8;
  undefined8 local_2d0;
  float local_2c8;
  undefined8 local_2c4;
  float local_2bc;
  float local_2b8;
  undefined8 local_2b4;
  undefined8 local_2ac;
  float local_2a4;
  undefined4 local_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 local_294;
  undefined4 uStack_290;
  undefined4 local_28c;
  undefined8 local_288;
  undefined4 local_280;
  float local_27c;
  undefined8 local_278;
  undefined8 local_270;
  float local_268;
  float local_264;
  undefined8 local_260;
  undefined8 local_258;
  float local_250;
  undefined8 local_24c;
  float local_244;
  float local_240;
  undefined8 local_23c;
  undefined8 local_234;
  float local_22c;
  longlong local_228;
  undefined4 local_220;
  undefined1 local_218 [16];
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e4;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1bc;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined8 local_1ac;
  undefined8 local_1a4;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_18c;
  undefined4 local_184;
  undefined4 local_180;
  undefined8 local_17c;
  undefined8 local_174;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined8 local_100 [2];
  undefined1 local_f0 [16];
  undefined8 local_e0 [2];
  undefined1 local_d0 [16];
  undefined8 local_c0 [17];
  
  lVar14 = param_6;
  iVar13 = param_5;
  if ((int)param_3[1] == 0) {
    *(undefined4 *)(param_3 + 1) = 1;
    if (*(int *)((longlong)param_3 + 0xc) < 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3);
    }
    *(undefined4 *)*param_3 = 0x42900000;
  }
  lVar16 = *(longlong *)(param_6 + 0x88);
  if (*(longlong *)(param_6 + 0x88) == 0) {
    lVar16 = param_6 + 0x78;
  }
  param_6._0_4_ = 0;
  uVar12 = *(undefined8 *)(lVar16 + (longlong)param_5 * 8);
  if (0 < (int)param_1[1]) {
    local_228 = 0;
    do {
      uVar24 = (undefined4)((ulonglong)in_stack_fffffffffffffcd8 >> 0x20);
      uVar30 = (undefined4)(in_stack_fffffffffffffcf0 >> 0x20);
      pfVar20 = (float *)(local_228 + *param_1);
      if (((uint)pfVar20[10] & param_7) != 0) {
        fVar22 = pfVar20[5];
        fVar1 = pfVar20[2];
        fVar2 = pfVar20[3];
        fVar3 = pfVar20[4];
        fVar4 = pfVar20[1];
        fVar5 = *pfVar20;
        FLinearColor::FLinearColor(&local_1d8,pfVar20 + 7);
        puVar25 = &local_1d8;
        uVar18 = (uint)(longlong)
                       (SQRT((fVar3 - fVar4) * (fVar3 - fVar4) + (fVar2 - fVar5) * (fVar2 - fVar5) +
                             (fVar22 - fVar1) * (fVar22 - fVar1)) * 0.04);
        uVar15 = 8;
        if (7 < uVar18) {
          uVar15 = uVar18;
        }
        uVar28 = CONCAT44(uVar30,0x40600000);
        FUN_14272a230(uVar12,pfVar20,pfVar20 + 3,0x3ecccccd,CONCAT44(uVar24,uVar15),puVar25,
                      in_stack_fffffffffffffce8 & 0xffffff00,uVar28,0);
        pfVar21 = pfVar20 + 7;
        fVar22 = SQRT((pfVar20[4] - pfVar20[1]) * (pfVar20[4] - pfVar20[1]) +
                      (pfVar20[3] - *pfVar20) * (pfVar20[3] - *pfVar20) +
                      (pfVar20[5] - pfVar20[2]) * (pfVar20[5] - pfVar20[2])) * 1.333;
        if (pfVar20[6] == 1.4013e-45) {
          FLinearColor::FLinearColor(local_218,pfVar21);
          local_2b8 = *pfVar20;
          in_stack_fffffffffffffcd8 = (undefined8 *)local_218;
          pfVar21 = &local_2b8;
          pfVar17 = pfVar20 + 3;
          local_2b4 = CONCAT44(fVar22 + pfVar20[2],pfVar20[1]);
        }
        else {
          pfVar17 = pfVar20;
          if (pfVar20[6] == 2.8026e-45) {
            FLinearColor::FLinearColor(&local_208,pfVar21);
            local_2bc = fVar22 + pfVar20[5];
            in_stack_fffffffffffffcd8 = &local_208;
            local_2c4 = *(undefined8 *)(pfVar20 + 3);
            pfVar21 = (float *)&local_2c4;
          }
          else {
            FLinearColor::FLinearColor(&local_1e8,pfVar21);
            local_2dc = *pfVar20;
            uVar28 = uVar28 & 0xffffffffffffff00;
            puVar25 = (undefined8 *)((ulonglong)puVar25 & 0xffffffffffffff00);
            local_2d8 = CONCAT44(fVar22 + pfVar20[2],pfVar20[1]);
            FUN_14272a4d0(uVar12,pfVar20 + 3,&local_2dc,0x41f00000,&local_1e8,puVar25,0x40600000,
                          uVar28);
            FLinearColor::FLinearColor(&local_1f8,pfVar20 + 7);
            local_2c8 = fVar22 + pfVar20[5];
            in_stack_fffffffffffffcd8 = &local_1f8;
            local_2d0 = *(undefined8 *)(pfVar20 + 3);
            pfVar21 = (float *)&local_2d0;
          }
        }
        in_stack_fffffffffffffcf0 = uVar28 & 0xffffffffffffff00;
        in_stack_fffffffffffffce8 = 0x40600000;
        FUN_14272a4d0(uVar12,pfVar17,pfVar21,0x41f00000,in_stack_fffffffffffffcd8,
                      (ulonglong)puVar25 & 0xffffffffffffff00,0x40600000,in_stack_fffffffffffffcf0);
        if (0.0 <= pfVar20[9]) {
          uVar23 = CONCAT44((int)((ulonglong)in_stack_fffffffffffffcd8 >> 0x20),pfVar20[8]);
          local_270 = 0;
          local_268 = 1.0;
          local_264 = 0.0;
          local_260 = 0x3f800000;
          local_258 = 0x3f800000;
          local_250 = 0.0;
          GetCylinderMesh(pfVar20 + 3,&local_258,&local_264,&local_270,uVar23,pfVar20[9],10,param_4,
                          0,iVar13,lVar14);
          in_stack_fffffffffffffce8 = 0;
          in_stack_fffffffffffffcd8 =
               (undefined8 *)CONCAT44((int)((ulonglong)uVar23 >> 0x20),pfVar20[8]);
          local_24c = 0;
          local_244 = 1.0;
          local_240 = 0.0;
          local_23c = 0x3f800000;
          local_234 = 0x3f800000;
          local_22c = 0.0;
          in_stack_fffffffffffffcf0 = param_4;
          GetCylinderMesh(pfVar20,&local_234,&local_240,&local_24c,in_stack_fffffffffffffcd8,
                          pfVar20[9],10,param_4,0,iVar13,lVar14);
        }
        else {
          param_5 = 0;
          if (0 < (int)param_3[1]) {
            lVar16 = 0;
            do {
              local_2e8 = 0;
              local_2e0 = 0x3f800000;
              local_2a0 = 0;
              uStack_29c = 0x3f800000;
              uStack_298 = 0;
              local_294 = 0x3f800000;
              uStack_290 = 0;
              local_28c = 0;
              uVar23 = CONCAT44((int)((ulonglong)in_stack_fffffffffffffcd8 >> 0x20),pfVar20[8]);
              GetCylinderMesh(pfVar20 + 3,&local_294,&local_2a0,&local_2e8,uVar23,
                              *(undefined4 *)(lVar16 + *param_3),10,param_4,0,iVar13,lVar14);
              local_288 = 0;
              local_280 = 0x3f800000;
              local_27c = 0.0;
              local_278 = 0x3f800000;
              local_2ac = 0x3f800000;
              local_2a4 = 0.0;
              in_stack_fffffffffffffce8 = 0;
              in_stack_fffffffffffffcd8 =
                   (undefined8 *)CONCAT44((int)((ulonglong)uVar23 >> 0x20),pfVar20[8]);
              in_stack_fffffffffffffcf0 = param_4;
              GetCylinderMesh(pfVar20,&local_2ac,&local_27c,&local_288,in_stack_fffffffffffffcd8,
                              *(undefined4 *)(lVar16 + *param_3),10,param_4,0,iVar13,lVar14);
              lVar16 = lVar16 + 4;
              param_5 = param_5 + 1;
            } while (param_5 < (int)param_3[1]);
          }
        }
      }
      param_6._0_4_ = (int)param_6 + 1;
      local_228 = local_228 + 0x2c;
    } while ((int)param_6 < (int)param_1[1]);
  }
  param_5 = 0;
  if (0 < (int)param_2[1]) {
    local_res8 = 0;
    do {
      uVar24 = (undefined4)((ulonglong)in_stack_fffffffffffffcd8 >> 0x20);
      uVar30 = (undefined4)(in_stack_fffffffffffffcf0 >> 0x20);
      pfVar20 = (float *)(local_res8 + *param_2);
      if (((uint)pfVar20[0x10] & param_7) != 0) {
        fVar22 = pfVar20[6];
        fVar1 = *pfVar20;
        fVar2 = pfVar20[7];
        fVar3 = pfVar20[1];
        fVar4 = pfVar20[8];
        fVar5 = pfVar20[2];
        fVar6 = pfVar20[9];
        fVar7 = pfVar20[3];
        fVar8 = pfVar20[10];
        fVar9 = pfVar20[4];
        fVar10 = pfVar20[0xb];
        fVar11 = pfVar20[5];
        FLinearColor::FLinearColor(local_150,pfVar20 + 0xd);
        uVar18 = (uint)(longlong)
                       (SQRT((fVar2 - fVar3) * (fVar2 - fVar3) + (fVar22 - fVar1) * (fVar22 - fVar1)
                             + (fVar4 - fVar5) * (fVar4 - fVar5)) * 0.025);
        uVar15 = 8;
        if (7 < uVar18) {
          uVar15 = uVar18;
        }
        uVar29 = CONCAT44(uVar30,0x40600000);
        in_stack_fffffffffffffce8 = in_stack_fffffffffffffce8 & 0xffffff00;
        uVar23 = CONCAT44(uVar24,uVar15);
        FUN_14272a230(uVar12,pfVar20,pfVar20 + 6,0x3e800000,uVar23,local_150,
                      in_stack_fffffffffffffce8,uVar29,0);
        uVar24 = (undefined4)((ulonglong)uVar23 >> 0x20);
        uVar30 = (undefined4)((ulonglong)uVar29 >> 0x20);
        FLinearColor::FLinearColor(local_140,pfVar20 + 0xd);
        puVar26 = local_140;
        uVar28 = CONCAT44(uVar30,0x40600000);
        uVar18 = (uint)(longlong)
                       (SQRT((fVar8 - fVar9) * (fVar8 - fVar9) + (fVar6 - fVar7) * (fVar6 - fVar7) +
                             (fVar10 - fVar11) * (fVar10 - fVar11)) * 0.025);
        uVar15 = 8;
        if (7 < uVar18) {
          uVar15 = uVar18;
        }
        FUN_14272a230(uVar12,pfVar20 + 3,pfVar20 + 9,0x3e800000,CONCAT44(uVar24,uVar15),puVar26,
                      in_stack_fffffffffffffce8 & 0xffffff00,uVar28,0);
        pfVar21 = pfVar20 + 0xd;
        fVar22 = SQRT((pfVar20[7] - pfVar20[1]) * (pfVar20[7] - pfVar20[1]) +
                      (pfVar20[6] - *pfVar20) * (pfVar20[6] - *pfVar20) +
                      (pfVar20[8] - pfVar20[2]) * (pfVar20[8] - pfVar20[2])) * 1.333;
        if (pfVar20[0xc] == 1.4013e-45) {
          FLinearColor::FLinearColor(local_d0,pfVar21);
          local_2ac = *(undefined8 *)pfVar20;
          uVar28 = uVar28 & 0xffffffffffffff00;
          local_2a4 = fVar22 + pfVar20[2];
          uVar27 = (ulonglong)puVar26 & 0xffffffffffffff00;
          FUN_14272a4d0(uVar12,pfVar20 + 6,&local_2ac,0x41f00000,local_d0,uVar27,0x40600000,uVar28);
          FLinearColor::FLinearColor(local_c0,pfVar20 + 0xd);
          local_27c = pfVar20[3];
          in_stack_fffffffffffffcd8 = local_c0;
          pfVar21 = &local_27c;
          pfVar17 = pfVar20 + 9;
          local_278 = CONCAT44(fVar22 + pfVar20[5],pfVar20[4]);
        }
        else if (pfVar20[0xc] == 2.8026e-45) {
          FLinearColor::FLinearColor(local_f0,pfVar21);
          local_264 = pfVar20[6];
          uVar28 = uVar28 & 0xffffffffffffff00;
          uVar27 = (ulonglong)puVar26 & 0xffffffffffffff00;
          local_260 = CONCAT44(fVar22 + pfVar20[8],pfVar20[7]);
          FUN_14272a4d0(uVar12,pfVar20,&local_264,0x41f00000,local_f0,uVar27,0x40600000,uVar28);
          FLinearColor::FLinearColor(local_e0,pfVar20 + 0xd);
          local_268 = fVar22 + pfVar20[0xb];
          in_stack_fffffffffffffcd8 = local_e0;
          local_270 = *(undefined8 *)(pfVar20 + 9);
          pfVar21 = (float *)&local_270;
          pfVar17 = pfVar20 + 3;
        }
        else {
          FLinearColor::FLinearColor(local_130,pfVar21);
          local_234 = *(undefined8 *)pfVar20;
          uVar28 = uVar28 & 0xffffffffffffff00;
          local_22c = fVar22 + pfVar20[2];
          uVar27 = (ulonglong)puVar26 & 0xffffffffffffff00;
          FUN_14272a4d0(uVar12,pfVar20 + 6,&local_234,0x41f00000,local_130,uVar27,0x40600000,uVar28)
          ;
          FLinearColor::FLinearColor(local_120,pfVar20 + 0xd);
          local_240 = pfVar20[3];
          uVar28 = uVar28 & 0xffffffffffffff00;
          uVar27 = uVar27 & 0xffffffffffffff00;
          local_23c = CONCAT44(fVar22 + pfVar20[5],pfVar20[4]);
          FUN_14272a4d0(uVar12,pfVar20 + 9,&local_240,0x41f00000,local_120,uVar27,0x40600000,uVar28)
          ;
          FLinearColor::FLinearColor(local_110,pfVar20 + 0xd);
          local_24c = *(undefined8 *)(pfVar20 + 6);
          uVar28 = uVar28 & 0xffffffffffffff00;
          local_244 = fVar22 + pfVar20[8];
          uVar27 = uVar27 & 0xffffffffffffff00;
          FUN_14272a4d0(uVar12,pfVar20,&local_24c,0x41f00000,local_110,uVar27,0x40600000,uVar28);
          FLinearColor::FLinearColor(local_100,pfVar20 + 0xd);
          local_250 = fVar22 + pfVar20[0xb];
          in_stack_fffffffffffffcd8 = local_100;
          local_258 = *(undefined8 *)(pfVar20 + 9);
          pfVar21 = (float *)&local_258;
          pfVar17 = pfVar20 + 3;
        }
        in_stack_fffffffffffffcf0 = uVar28 & 0xffffffffffffff00;
        in_stack_fffffffffffffce8 = 0x40600000;
        FUN_14272a4d0(uVar12,pfVar17,pfVar21,0x41f00000,in_stack_fffffffffffffcd8,
                      uVar27 & 0xffffffffffffff00,0x40600000,in_stack_fffffffffffffcf0);
        if (0.0 <= pfVar20[0xf]) {
          uVar23 = CONCAT44((int)((ulonglong)in_stack_fffffffffffffcd8 >> 0x20),pfVar20[0xe]);
          local_168 = 0;
          local_160 = 0x3f800000;
          local_15c = 0;
          local_158 = 0x3f800000;
          local_1c8 = 0x3f800000;
          local_1c0 = 0;
          GetCylinderMesh(pfVar20 + 6,&local_1c8,&local_15c,&local_168,uVar23,pfVar20[0xf],10,
                          param_4,0,iVar13,lVar14);
          uVar23 = CONCAT44((int)((ulonglong)uVar23 >> 0x20),pfVar20[0xe]);
          local_1bc = 0;
          local_1b4 = 0x3f800000;
          local_1b0 = 0;
          local_1ac = 0x3f800000;
          local_1a4 = 0x3f800000;
          local_19c = 0;
          GetCylinderMesh(pfVar20 + 9,&local_1a4,&local_1b0,&local_1bc,uVar23,pfVar20[0xf],10,
                          param_4,0,iVar13,lVar14);
          uVar23 = CONCAT44((int)((ulonglong)uVar23 >> 0x20),pfVar20[0xe]);
          local_198 = 0;
          local_190 = 0x3f800000;
          local_218._0_4_ = 0;
          local_218._4_8_ = 0x3f800000;
          local_208 = 0x3f800000;
          local_200 = 0;
          GetCylinderMesh(pfVar20,&local_208,local_218,&local_198,uVar23,pfVar20[0xf],10,param_4,0,
                          iVar13,lVar14);
          in_stack_fffffffffffffce8 = 0;
          in_stack_fffffffffffffcd8 =
               (undefined8 *)CONCAT44((int)((ulonglong)uVar23 >> 0x20),pfVar20[0xe]);
          local_1f8 = 0;
          local_1f0 = 0x3f800000;
          local_1e8 = 0;
          local_1e4 = 0x3f800000;
          local_1d8 = 0x3f800000;
          local_1d0 = 0;
          in_stack_fffffffffffffcf0 = param_4;
          GetCylinderMesh(pfVar20 + 3,&local_1d8,&local_1e8,&local_1f8,in_stack_fffffffffffffcd8,
                          pfVar20[0xf],10,param_4,0,iVar13,lVar14);
        }
        else {
          iVar19 = 0;
          if (0 < (int)param_3[1]) {
            lVar16 = 0;
            do {
              local_288 = 0;
              local_280 = 0x3f800000;
              local_294 = 0;
              uStack_290 = 0x3f800000;
              local_28c = 0;
              local_2a0 = 0x3f800000;
              uStack_29c = 0;
              uStack_298 = 0;
              uVar23 = CONCAT44((int)((ulonglong)in_stack_fffffffffffffcd8 >> 0x20),pfVar20[0xe]);
              GetCylinderMesh(pfVar20 + 6,&local_2a0,&local_294,&local_288,uVar23,
                              *(undefined4 *)(lVar16 + *param_3),10,param_4,0,iVar13,lVar14);
              local_2e8 = 0;
              local_2e0 = 0x3f800000;
              local_2b8 = 0.0;
              local_2b4 = 0x3f800000;
              local_2c4 = 0x3f800000;
              local_2bc = 0.0;
              uVar23 = CONCAT44((int)((ulonglong)uVar23 >> 0x20),pfVar20[0xe]);
              GetCylinderMesh(pfVar20 + 9,&local_2c4,&local_2b8,&local_2e8,uVar23,
                              *(undefined4 *)(lVar16 + *param_3),10,param_4,0,iVar13,lVar14);
              local_2d0 = 0;
              local_2c8 = 1.0;
              local_2dc = 0.0;
              local_2d8 = 0x3f800000;
              local_228 = 0x3f800000;
              local_220 = 0;
              uVar23 = CONCAT44((int)((ulonglong)uVar23 >> 0x20),pfVar20[0xe]);
              GetCylinderMesh(pfVar20,&local_228,&local_2dc,&local_2d0,uVar23,
                              *(undefined4 *)(lVar16 + *param_3),10,param_4,0,iVar13,lVar14);
              in_stack_fffffffffffffce8 = 0;
              local_18c = 0;
              local_184 = 0x3f800000;
              local_180 = 0;
              local_17c = 0x3f800000;
              local_174 = 0x3f800000;
              local_16c = 0;
              in_stack_fffffffffffffcd8 =
                   (undefined8 *)CONCAT44((int)((ulonglong)uVar23 >> 0x20),pfVar20[0xe]);
              in_stack_fffffffffffffcf0 = param_4;
              GetCylinderMesh(pfVar20 + 3,&local_174,&local_180,&local_18c,in_stack_fffffffffffffcd8
                              ,*(undefined4 *)(lVar16 + *param_3),10,param_4,0,iVar13,lVar14);
              iVar19 = iVar19 + 1;
              lVar16 = lVar16 + 4;
            } while (iVar19 < (int)param_3[1]);
          }
        }
      }
      param_5 = param_5 + 1;
      local_res8 = local_res8 + 0x44;
    } while (param_5 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 142ba0870 FUN_142ba0870 body=42 status=ok
// SIG undefined FUN_142ba0870(void)

undefined8 FUN_142ba0870(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = param_1 + 0x1a8;
  if (param_1 == 0) {
    lVar1 = 0;
  }
  FUN_142b8eee0(param_2,lVar1);
  return param_2;
}



// FUNCTION 142ba08c0 FUN_142ba08c0 body=19 status=ok
// SIG undefined FUN_142ba08c0(void)

int FUN_142ba08c0(void)

{
  int iVar1;
  
  iVar1 = FUN_142b9e410();
  return iVar1 + 0x590;
}



// FUNCTION 142ba08e0 FUN_142ba08e0 body=94 status=ok
// SIG undefined FUN_142ba08e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ba08e0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  uVar1 = FUN_142b80660(local_58,param_1 + -0x2d0);
  FUN_142b94440(param_2 + 0x70,uVar1,param_1 + 0x428);
  return;
}



// FUNCTION 142ba0940 FUN_142ba0940 body=720 status=ok
// SIG undefined FUN_142ba0940(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ba0940(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 auStack_198 [32];
  longlong local_178;
  undefined8 local_170;
  undefined8 local_168;
  float local_160;
  undefined8 local_15c;
  float local_154;
  undefined1 local_150;
  float local_144;
  float local_138;
  undefined8 local_128 [7];
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined1 local_d8 [56];
  longlong local_a0;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  local_178 = 0;
  local_170 = 0;
  (**(code **)(*(longlong *)(param_1 + -0x178) + 0x400))((longlong *)(param_1 + -0x178),local_128);
  uVar3 = local_170;
  lVar9 = (longlong)(int)local_170;
  local_128[0] = 0;
  iVar4 = (int)local_170 + 1;
  local_170 = CONCAT44(local_170._4_4_,iVar4);
  if (local_170._4_4_ < iVar4) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(&local_178,uVar3 & 0xffffffff);
  }
  lVar9 = lVar9 * 0x50 + local_178;
  FNavigationLinkBase::FNavigationLinkBase(lVar9,local_128);
  *(undefined8 *)(lVar9 + 0x38) = local_f0;
  *(undefined4 *)(lVar9 + 0x40) = local_e8;
  *(undefined8 *)(lVar9 + 0x44) = local_e4;
  *(undefined4 *)(lVar9 + 0x4c) = local_dc;
  FUN_142b94470(param_2 + 0x70,*(undefined8 *)(param_1 + -0x60),&local_178);
  if ((*(byte *)(param_1 + 0x6c) & 8) != 0) {
    lVar9 = 0;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      lVar5 = UAITask::GetPrivateStaticClass();
      for (lVar2 = *(longlong *)(param_1 + 0x88);
          (lVar9 = 0, lVar2 != 0 && (lVar9 = *(longlong *)(param_1 + 0x88), lVar2 != lVar5));
          lVar2 = *(longlong *)(lVar2 + 0x30)) {
      }
    }
    lVar2 = *(longlong *)(*(longlong *)(param_1 + -0x60) + 0x168);
    if (lVar2 == 0) {
      puVar8 = (undefined8 *)&DAT_1468b5b70;
    }
    else {
      puVar8 = (undefined8 *)(lVar2 + 0x210);
    }
    local_88 = *puVar8;
    uStack_80 = puVar8[1];
    local_78 = puVar8[2];
    uStack_70 = puVar8[3];
    local_68 = puVar8[4];
    uStack_60 = puVar8[5];
    local_154 = *(float *)(param_1 + 0x78) + *(float *)(param_1 + 0x84);
    local_150 = 1;
    local_160 = *(float *)(param_1 + 0x78) - *(float *)(param_1 + 0x84);
    local_168 = CONCAT44(*(float *)(param_1 + 0x74) - *(float *)(param_1 + 0x80),
                         *(float *)(param_1 + 0x70) - *(float *)(param_1 + 0x7c));
    local_15c = CONCAT44(*(float *)(param_1 + 0x74) + *(float *)(param_1 + 0x80),
                         *(float *)(param_1 + 0x7c) + *(float *)(param_1 + 0x70));
    local_144 = local_160;
    local_138 = local_154;
    puVar6 = (uint *)FAreaNavModifier::FAreaNavModifier(local_d8,&local_168,&local_88,lVar9);
    iVar4 = *(int *)(param_2 + 0x90);
    *(int *)(param_2 + 0x90) = iVar4 + 1;
    if (*(int *)(param_2 + 0x94) < iVar4 + 1) {
      TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_2 + 0x88,iVar4);
    }
    FAreaNavModifier::FAreaNavModifier
              ((longlong)iVar4 * 0x50 + *(longlong *)(param_2 + 0x88),puVar6);
    uVar1 = *(uint *)(param_2 + 0x70);
    uVar7 = *(uint *)(param_2 + 0xb8);
    *(uint *)(param_2 + 0x70) = ((*puVar6 | uVar1) ^ uVar1) & 1 ^ uVar1;
    uVar7 = (((uint)*(byte *)((longlong)puVar6 + 0x4a) * 2 | uVar7) ^ uVar7) & 2 ^ uVar7;
    *(uint *)(param_2 + 0xb8) = uVar7;
    *(uint *)(param_2 + 0xb8) =
         (((uint)*(byte *)((longlong)puVar6 + 0x4a) * 2 | uVar7) ^ uVar7) & 4 ^ uVar7;
    if (local_a0 != 0) {
      FMemory::Free();
    }
  }
  if (local_178 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142ba0c10 GetNavigationLinksArray body=210 status=ok
// SIG undefined GetNavigationLinksArray(void)

undefined4 UNavLinkComponent::GetNavigationLinksArray(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar5 = (int)param_2[1];
  if (iVar1 != 0) {
    if (*(int *)((longlong)param_2 + 0xc) < iVar5 + iVar1) {
      TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(param_2);
      iVar5 = (int)param_2[1];
    }
    lVar6 = *(longlong *)(param_1 + 8);
    lVar3 = (longlong)iVar5 * 0x50 + *param_2;
    puVar2 = (undefined8 *)(lVar3 + 0x44);
    puVar4 = (undefined8 *)(lVar6 + 0x44);
    iVar5 = iVar1;
    do {
      FNavigationLinkBase::FNavigationLinkBase(lVar3,lVar6);
      lVar3 = lVar3 + 0x50;
      *(undefined8 *)((longlong)puVar2 + -0xc) = *(undefined8 *)((longlong)puVar4 + -0xc);
      *(undefined4 *)((longlong)puVar2 + -4) = *(undefined4 *)((longlong)puVar4 + -4);
      lVar6 = lVar6 + 0x50;
      *puVar2 = *puVar4;
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar4 + 1);
      iVar5 = iVar5 + -1;
      puVar2 = puVar2 + 10;
      puVar4 = puVar4 + 10;
    } while (iVar5 != 0);
    iVar5 = (int)param_2[1] + iVar1;
    *(int *)(param_2 + 1) = iVar5;
  }
  return CONCAT31((int3)((uint)iVar5 >> 8),0 < iVar5);
}



// FUNCTION 142ba0cf0 GetNavigationLinksClasses body=85 status=ok
// SIG undefined GetNavigationLinksClasses(void)

undefined1 INavLinkHostInterface::GetNavigationLinksClasses(void)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\navigationsystem\\public\\NavLinkHostInterface.h"
             ,0x19,L"Pure virtual not implemented (%s)",
             L"INavLinkHostInterface::GetNavigationLinksClasses");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\navigationsystem\\public\\NavLinkHostInterface.h"
             ,0x19,L"Pure virtual not implemented (%s)",
             L"INavLinkHostInterface::GetNavigationLinksClasses");
  return 0;
}



// FUNCTION 142ba0d50 FUN_142ba0d50 body=206 status=ok
// SIG undefined FUN_142ba0d50(void)

float * FUN_142ba0d50(longlong param_1,float *param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x168);
  if (lVar1 == 0) {
    pfVar8 = (float *)&DAT_1468b5b70;
  }
  else {
    pfVar8 = (float *)(lVar1 + 0x210);
  }
  fVar2 = *pfVar8;
  fVar3 = pfVar8[1];
  fVar4 = pfVar8[2];
  fVar5 = pfVar8[3];
  fVar12 = *(float *)(param_1 + 0x1c8) * pfVar8[8];
  fVar13 = *(float *)(param_1 + 0x1cc) * pfVar8[9];
  fVar14 = *(float *)(param_1 + 0x1d0) * pfVar8[10];
  fVar9 = fVar14 * fVar3 - fVar13 * fVar4;
  fVar10 = fVar12 * fVar4 - fVar14 * fVar2;
  fVar11 = fVar13 * fVar2 - fVar12 * fVar3;
  fVar9 = fVar9 + fVar9;
  fVar10 = fVar10 + fVar10;
  fVar11 = fVar11 + fVar11;
  fVar6 = pfVar8[5];
  fVar7 = pfVar8[6];
  *param_2 = (fVar11 * fVar3 - fVar10 * fVar4) + fVar5 * fVar9 + fVar12 + pfVar8[4];
  param_2[2] = (fVar10 * fVar2 - fVar9 * fVar3) + fVar5 * fVar11 + fVar14 + fVar7;
  param_2[1] = (fVar9 * fVar4 - fVar11 * fVar2) + fVar5 * fVar10 + fVar13 + fVar6;
  return param_2;
}


