// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1408b7e60 FUN_1408b7e60 body=53 status=ok
// SIG undefined FUN_1408b7e60(void)

void FUN_1408b7e60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_144128ba0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 1408b7ea0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UDatasmithStaticMeshTemplate::GetPrivateStaticClass(void)

{
  if (DAT_146861318 == 0) {
    FUN_14171ccd0(L"/Script/DatasmithContent",L"DatasmithStaticMeshTemplate",&DAT_146861318,
                  FUN_140447710,0xa0,0x10000000,0,L"Engine",
                  InternalConstructor<UDatasmithStaticMeshTemplate>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDatasmithObjectTemplate::StaticClass,&LAB_140447700,0);
  }
  return DAT_146861318;
}



// FUNCTION 1408b7f50 FUN_1408b7f50 body=53 status=ok
// SIG undefined FUN_1408b7f50(void)

void FUN_1408b7f50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &PTR_FUN_144128cb8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1408b7fa0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UDatasmithContentBlueprintLibrary::GetPrivateStaticClass(void)

{
  if (DAT_146861198 == 0) {
    FUN_14171ccd0(L"/Script/DatasmithContent",L"DatasmithContentBlueprintLibrary",&DAT_146861198,
                  StaticRegisterNativesUDatasmithContentBlueprintLibrary,0x28,0x10000000,0,L"Engine"
                  ,FUN_1405d87d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_146861198;
}



// FUNCTION 1408b8050 FUN_1408b8050 body=612 status=ok
// SIG undefined FUN_1408b8050(void)

int * FUN_1408b8050(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  bool bVar16;
  
  iVar15 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar10 = *(int *)(*param_1 + 4 + (longlong)iVar11 * 0x10);
    iVar13 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar10;
    *(int *)((longlong)param_1 + 0x34) = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar10 * 0x10) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar11;
  lVar6 = (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar14 = (uint *)((longlong)plVar7 + lVar6);
  *puVar14 = *puVar14 | 1 << ((byte)iVar11 & 0x1f);
  uVar1 = *param_3;
  bVar16 = false;
  lVar8 = (longlong)iVar11 * 0x10;
  puVar14 = (uint *)(*param_1 + lVar8);
  *(undefined8 *)puVar14 = uVar1;
  puVar14[2] = 0xffffffff;
  iVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar13 != 1) {
    iVar5 = (int)uVar1;
    iVar10 = iVar15;
    if (iVar13 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar5) * 4);
      if (iVar9 != -1) {
        do {
          iVar10 = iVar9;
          if (*(int *)(*param_1 + (longlong)iVar9 * 0x10) == iVar5) break;
          iVar9 = *(int *)(*param_1 + 8 + (longlong)iVar9 * 0x10);
          iVar10 = iVar15;
        } while (iVar9 != -1);
      }
    }
    bVar16 = iVar10 != -1;
    if (bVar16) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar10 * 0x10 + *param_1),puVar14,8);
      bVar3 = (byte)iVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x10) = iVar11;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar8 + lVar2) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar15 = (int)param_1[6];
      }
      *(int *)(lVar8 + 4 + lVar2) = iVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar11;
      plVar7 = (longlong *)param_1[4];
      *param_2 = iVar10;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar14 = (uint *)((longlong)plVar7 + lVar6);
      *puVar14 = *puVar14 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_1408b828a;
    }
  }
  cVar4 = TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
          ConditionalRehash(param_1,iVar13,0);
  if (cVar4 == '\0') {
    uVar12 = (int)param_1[9] - 1U & *puVar14;
    puVar14[3] = uVar12;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    puVar14[2] = *(uint *)((longlong)plVar7 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         *param_2;
  }
LAB_1408b828a:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar16;
  }
  return param_2;
}



// FUNCTION 1408b82c0 FUN_1408b82c0 body=41 status=ok
// SIG undefined FUN_1408b82c0(void)

void FUN_1408b82c0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14221fbd0(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__1441277b0;
  }
  return;
}



// FUNCTION 1408b82f0 FUN_1408b82f0 body=100 status=ok
// SIG undefined FUN_1408b82f0(void)

void FUN_1408b82f0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14221fbd0(puVar1,param_1);
    *puVar1 = &PTR_FUN_1441296f8;
    puVar1[0x8c] = 0;
    puVar1[0x8d] = 0;
    puVar1[0x90] = 0;
    puVar1[0x91] = 0;
    *(undefined4 *)(puVar1 + 0x92) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x494) = 0;
    puVar1[0x94] = 0;
    *(undefined4 *)(puVar1 + 0x95) = 0;
  }
  return;
}



// FUNCTION 1408b8360 FUN_1408b8360 body=41 status=ok
// SIG undefined FUN_1408b8360(void)

void FUN_1408b8360(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_144128190;
  }
  return;
}



// FUNCTION 1408b8390 FUN_1408b8390 body=41 status=ok
// SIG undefined FUN_1408b8390(void)

void FUN_1408b8390(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14242a1b0(puVar1,param_1);
    *puVar1 = &PTR_FUN_144128420;
  }
  return;
}



// FUNCTION 1408b83c0 InternalConstructor<UDatasmithAssetUserData> body=76 status=ok
// SIG undefined InternalConstructor<UDatasmithAssetUserData>(void)

void InternalConstructor<UDatasmithAssetUserData>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UAssetUserData::UAssetUserData(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144127f10;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    *(undefined4 *)(puVar1 + 0xb) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x5c) = 0;
    puVar1[0xd] = 0;
    *(undefined4 *)(puVar1 + 0xe) = 0;
  }
  return;
}



// FUNCTION 1408b8410 FUN_1408b8410 body=55 status=ok
// SIG undefined FUN_1408b8410(void)

void FUN_1408b8410(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_144128910;
    FUN_1408b56c0(puVar1 + 8);
    return;
  }
  return;
}



// FUNCTION 1408b8480 FUN_1408b8480 body=41 status=ok
// SIG undefined FUN_1408b8480(void)

void FUN_1408b8480(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_144121e58;
  }
  return;
}



// FUNCTION 1408b84c0 FUN_1408b84c0 body=41 status=ok
// SIG undefined FUN_1408b84c0(void)

void FUN_1408b84c0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_144129480;
  }
  return;
}



// FUNCTION 1408b84f0 FUN_1408b84f0 body=87 status=ok
// SIG undefined FUN_1408b84f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408b84f0(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_144129de0;
    uVar2 = uRam000000014686107c;
    *(undefined4 *)(puVar1 + 6) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    *(undefined4 *)(puVar1 + 7) = 0;
    *(uint *)((longlong)puVar1 + 0x3c) = uVar2;
    puVar1[8] = 0;
    puVar1[9] = 0;
    uVar2 = uRam0000000146861074 & uRam0000000146861084;
    uVar3 = uRam0000000146861078 & uRam0000000146861088;
    uVar4 = uRam000000014686107c & uRam000000014686108c;
    *(uint *)(puVar1 + 10) = _DAT_146861070 & _DAT_146861080;
    *(uint *)((longlong)puVar1 + 0x54) = uVar2;
    *(uint *)(puVar1 + 0xb) = uVar3;
    *(uint *)((longlong)puVar1 + 0x5c) = uVar4;
  }
  return;
}



// FUNCTION 1408b8570 FUN_1408b8570 body=41 status=ok
// SIG undefined FUN_1408b8570(void)

void FUN_1408b8570(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14242a1b0(puVar1,param_1);
    *puVar1 = &PTR_FUN_144128698;
  }
  return;
}



// FUNCTION 1408b85a0 FUN_1408b85a0 body=110 status=ok
// SIG undefined FUN_1408b85a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408b85a0(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_144129de0;
    uVar2 = uRam000000014686107c;
    puVar1[8] = 0;
    puVar1[9] = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    *(undefined4 *)(puVar1 + 7) = 0;
    *(uint *)((longlong)puVar1 + 0x3c) = uVar2;
    uVar2 = uRam0000000146861074 & uRam0000000146861084;
    uVar3 = uRam0000000146861078 & uRam0000000146861088;
    uVar4 = uRam000000014686107c & uRam000000014686108c;
    *(uint *)(puVar1 + 10) = _DAT_146861070 & _DAT_146861080;
    *(uint *)((longlong)puVar1 + 0x54) = uVar2;
    *(uint *)(puVar1 + 0xb) = uVar3;
    *(uint *)((longlong)puVar1 + 0x5c) = uVar4;
    *puVar1 = &PTR__scalar_deleting_destructor__14412a070;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
  }
  return;
}



// FUNCTION 1408b8610 InternalConstructor<UDatasmithStaticMeshTemplate> body=104 status=ok
// SIG undefined InternalConstructor<UDatasmithStaticMeshTemplate>(void)

void InternalConstructor<UDatasmithStaticMeshTemplate>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__14412a300;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    *(undefined4 *)(puVar1 + 0xb) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x5c) = 0;
    puVar1[0xd] = 0;
    *(undefined4 *)(puVar1 + 0xe) = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
  }
  return;
}



// FUNCTION 1408b8680 operator= body=502 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<unsigned_int,FDatasmithMeshSectionInfoTemplate>,TDefaultMapHashableKeyFuncs<unsigned_int,FDatasmithMeshSectionInfoTemplate,0>,FDefaultSetAllocator>
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
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1,iVar9);
    }
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    uVar3 = iVar9 + 0x1f + (iVar9 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
    if (*(uint *)((longlong)param_1 + 0x2c) != uVar3) {
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
    }
    cVar2 = TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
            ConditionalRehash(param_1,iVar9,1);
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
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1408b87db;
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
LAB_1408b87db:
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
        FUN_1408b8050(param_1,local_res8,(longlong)iStack_4c * 0x10 + *param_2,0);
        uStack_50 = uStack_50 & ~uStack_5c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
      } while (iStack_4c < (int)local_58[6]);
    }
  }
  return param_1;
}



// FUNCTION 1408b8880 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FHyperlinkStyle::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1404571d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x478);
  }
  return param_1;
}



// FUNCTION 1408b88c0 FUN_1408b88c0 body=105 status=ok
// SIG undefined FUN_1408b88c0(void)

longlong FUN_1408b88c0(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x4a8) = 0;
  if (*(longlong *)(param_1 + 0x4a0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSoftObjectPtr<AActor>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FName,TSoftObjectPtr<AActor>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x460);
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4b0);
  }
  return param_1;
}



// FUNCTION 1408b8930 `scalar_deleting_destructor' body=96 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UDatasmithAssetUserData::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 1408b8990 FUN_1408b8990 body=52 status=ok
// SIG undefined FUN_1408b8990(void)

undefined8 FUN_1408b8990(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 1408b89d0 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FAssetNameToken::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 1408b8a20 `scalar_deleting_destructor' body=130 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UDatasmithStaticMeshTemplate::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FObjectReplicator_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FObjectReplicator_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 1408b8b30 Copy body=71 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FDatasmithMeshSectionInfoMapTemplate>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      TSet<TTuple<unsigned_int,FDatasmithMeshSectionInfoTemplate>,TDefaultMapHashableKeyFuncs<unsigned_int,FDatasmithMeshSectionInfoTemplate,0>,FDefaultSetAllocator>
      ::operator=(param_2 + param_3,param_3);
      param_3 = param_3 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1408b8c40 FUN_1408b8c40 body=43 status=ok
// SIG undefined FUN_1408b8c40(void)

void FUN_1408b8c40(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FObjectReplicator_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FObjectReplicator_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_2);
  return;
}



// FUNCTION 1408b8c70 EDatasmithAreaLightActorShape_StaticEnum body=85 status=ok
// SIG undefined EDatasmithAreaLightActorShape_StaticEnum(void)

void EDatasmithAreaLightActorShape_StaticEnum(void)

{
  if (DAT_146861030 == 0) {
    if (DAT_146861170 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146861170,&PTR_s__Script_DatasmithContent_144128dd0);
    }
    DAT_146861030 = GetStaticEnum(FUN_1408b9c40,DAT_146861170,L"EDatasmithAreaLightActorShape");
  }
  return;
}



// FUNCTION 1408b8cd0 EDatasmithImportActorPolicy_StaticEnum body=85 status=ok
// SIG undefined EDatasmithImportActorPolicy_StaticEnum(void)

void EDatasmithImportActorPolicy_StaticEnum(void)

{
  if (DAT_146861018 == 0) {
    if (DAT_146861170 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146861170,&PTR_s__Script_DatasmithContent_144128dd0);
    }
    DAT_146861018 = GetStaticEnum(FUN_1408b9c70,DAT_146861170,L"EDatasmithImportActorPolicy");
  }
  return;
}



// FUNCTION 1408b8d30 EDatasmithImportAssetConflictPolicy_StaticEnum body=85 status=ok
// SIG undefined EDatasmithImportAssetConflictPolicy_StaticEnum(void)

void EDatasmithImportAssetConflictPolicy_StaticEnum(void)

{
  if (DAT_146861020 == 0) {
    if (DAT_146861170 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146861170,&PTR_s__Script_DatasmithContent_144128dd0);
    }
    DAT_146861020 =
         GetStaticEnum(FUN_1408b9ca0,DAT_146861170,L"EDatasmithImportAssetConflictPolicy");
  }
  return;
}



// FUNCTION 1408b8d90 EDatasmithImportHierarchy_StaticEnum body=85 status=ok
// SIG undefined EDatasmithImportHierarchy_StaticEnum(void)

void EDatasmithImportHierarchy_StaticEnum(void)

{
  if (DAT_146860ff0 == 0) {
    if (DAT_146861170 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146861170,&PTR_s__Script_DatasmithContent_144128dd0);
    }
    DAT_146860ff0 = GetStaticEnum(FUN_1408b9cd0,DAT_146861170,L"EDatasmithImportHierarchy");
  }
  return;
}



// FUNCTION 1408b8df0 EDatasmithImportLightmapMax_StaticEnum body=85 status=ok
// SIG undefined EDatasmithImportLightmapMax_StaticEnum(void)

void EDatasmithImportLightmapMax_StaticEnum(void)

{
  if (DAT_146861000 == 0) {
    if (DAT_146861170 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146861170,&PTR_s__Script_DatasmithContent_144128dd0);
    }
    DAT_146861000 = GetStaticEnum(FUN_1408b9d00,DAT_146861170,L"EDatasmithImportLightmapMax");
  }
  return;
}



// FUNCTION 1408b8e50 EDatasmithImportLightmapMin_StaticEnum body=85 status=ok
// SIG undefined EDatasmithImportLightmapMin_StaticEnum(void)

void EDatasmithImportLightmapMin_StaticEnum(void)

{
  if (DAT_146861008 == 0) {
    if (DAT_146861170 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146861170,&PTR_s__Script_DatasmithContent_144128dd0);
    }
    DAT_146861008 = GetStaticEnum(FUN_1408b9d30,DAT_146861170,L"EDatasmithImportLightmapMin");
  }
  return;
}



// FUNCTION 1408b8eb0 EDatasmithImportMaterialQuality_StaticEnum body=85 status=ok
// SIG undefined EDatasmithImportMaterialQuality_StaticEnum(void)

void EDatasmithImportMaterialQuality_StaticEnum(void)

{
  if (DAT_146861010 == 0) {
    if (DAT_146861170 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146861170,&PTR_s__Script_DatasmithContent_144128dd0);
    }
    DAT_146861010 = GetStaticEnum(FUN_1408b9d60,DAT_146861170,L"EDatasmithImportMaterialQuality");
  }
  return;
}



// FUNCTION 1408b8f10 EDatasmithImportScene_StaticEnum body=85 status=ok
// SIG undefined EDatasmithImportScene_StaticEnum(void)

void EDatasmithImportScene_StaticEnum(void)

{
  if (DAT_146860ff8 == 0) {
    if (DAT_146861170 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146861170,&PTR_s__Script_DatasmithContent_144128dd0);
    }
    DAT_146860ff8 = GetStaticEnum(FUN_1408b9d90,DAT_146861170,L"EDatasmithImportScene");
  }
  return;
}



// FUNCTION 1408b8f70 EDatasmithImportSearchPackagePolicy_StaticEnum body=85 status=ok
// SIG undefined EDatasmithImportSearchPackagePolicy_StaticEnum(void)

void EDatasmithImportSearchPackagePolicy_StaticEnum(void)

{
  if (DAT_146861028 == 0) {
    if (DAT_146861170 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146861170,&PTR_s__Script_DatasmithContent_144128dd0);
    }
    DAT_146861028 =
         GetStaticEnum(FUN_1408b9dc0,DAT_146861170,L"EDatasmithImportSearchPackagePolicy");
  }
  return;
}



// FUNCTION 1408b8fd0 Get_Z_Construct_UScriptStruct_FDatasmithAssetImportOptions_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FDatasmithAssetImportOptions_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FDatasmithAssetImportOptions_CRC(void)

{
  return 0xcbc71624;
}



// FUNCTION 1408b8fe0 Get_Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate_CRC(void)

{
  return 0x32343c43;
}



// FUNCTION 1408b8ff0 FUN_1408b8ff0 body=6 status=ok
// SIG undefined FUN_1408b8ff0(void)

undefined8 FUN_1408b8ff0(void)

{
  return 0xfc7aa0ea;
}



// FUNCTION 1408b9000 Get_Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate_CRC(void)

{
  return 0xdb88d729;
}



// FUNCTION 1408b9010 Get_Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_CRC(void)

{
  return 0x6bc88b83;
}



// FUNCTION 1408b9020 Get_Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_CRC(void)

{
  return 0x5a215b00;
}



// FUNCTION 1408b9030 Get_Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate_CRC(void)

{
  return 0x3b02c56c;
}



// FUNCTION 1408b9040 Get_Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate_CRC(void)

{
  return 0xbedfe45d;
}



// FUNCTION 1408b9050 Get_Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_CRC(void)

{
  return 0xed598b73;
}



// FUNCTION 1408b9060 Get_Z_Construct_UScriptStruct_FDatasmithReimportOptions_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FDatasmithReimportOptions_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FDatasmithReimportOptions_CRC(void)

{
  return 0x3d7bd70d;
}



// FUNCTION 1408b9070 Get_Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate_CRC(void)

{
  return 0x1c1ff35a;
}



// FUNCTION 1408b9080 Get_Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_CRC(void)

{
  return 0x224b9be2;
}



// FUNCTION 1408b9090 Get_Z_Construct_UScriptStruct_FDatasmithTessellationOptions_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FDatasmithTessellationOptions_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FDatasmithTessellationOptions_CRC(void)

{
  return 0x91d96b81;
}



// FUNCTION 1408b9170 FUN_1408b9170 body=38 status=ok
// SIG undefined FUN_1408b9170(void)

void FUN_1408b9170(longlong param_1)

{
  FUN_141763960();
  if ((*(uint *)(param_1 + 8) >> 3 & 1) != 0) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffff7;
  }
  return;
}



// FUNCTION 1408b91a0 FUN_1408b91a0 body=130 status=ok
// SIG undefined FUN_1408b91a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1408b91a0(longlong param_1)

{
  undefined1 auStack_1e8 [32];
  undefined **local_1c8 [53];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  FUN_1416880d0(local_1c8);
  local_20 = 0;
  local_1c8[0] = &PTR__scalar_deleting_destructor__143fd6160;
  FUN_141763960(param_1,local_1c8);
  if ((*(uint *)(param_1 + 8) >> 3 & 1) != 0) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffff7;
  }
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 1408b9230 Serialize body=112 status=ok
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
  UDatasmithScene::Serialize(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 1408b92a0 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UAssetImportData::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 1408b92b0 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UAssetUserData::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 1408b92c0 StaticRegisterNativesUDatasmithContentBlueprintLibrary body=34 status=ok
// SIG undefined StaticRegisterNativesUDatasmithContentBlueprintLibrary(void)

void UDatasmithContentBlueprintLibrary::StaticRegisterNativesUDatasmithContentBlueprintLibrary(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetDatasmithUserData_144128df8,3);
  return;
}



// FUNCTION 1408b92f0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FDatasmithAssetImportOptions::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146861220 == 0) {
    if (DAT_146861170 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146861170,&PTR_s__Script_DatasmithContent_144128dd0);
    }
    lVar1 = DAT_146861170;
    uVar2 = Get_Z_Construct_UScriptStruct_FDatasmithAssetImportOptions_CRC();
    DAT_146861220 = GetStaticStruct(FUN_1408b9df0,lVar1,L"DatasmithAssetImportOptions",8,uVar2);
  }
  return;
}



// FUNCTION 1408b9370 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FDatasmithCameraFilmbackSettingsTemplate::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146861150 == 0) {
    if (DAT_146861170 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146861170,&PTR_s__Script_DatasmithContent_144128dd0);
    }
    lVar1 = DAT_146861170;
    uVar2 = Get_Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate_CRC();
    DAT_146861150 =
         GetStaticStruct(FUN_1408b9e20,lVar1,L"DatasmithCameraFilmbackSettingsTemplate",8,uVar2);
  }
  return;
}



// FUNCTION 1408b93f0 FUN_1408b93f0 body=113 status=ok
// SIG undefined FUN_1408b93f0(void)

void FUN_1408b93f0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146861130 == 0) {
    if (DAT_146861170 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146861170,&PTR_s__Script_DatasmithContent_144128dd0);
    }
    lVar1 = DAT_146861170;
    uVar2 = FUN_1408b8ff0();
    DAT_146861130 =
         GetStaticStruct(FUN_1408b9e50,lVar1,L"DatasmithCameraFocusSettingsTemplate",4,uVar2);
  }
  return;
}



// FUNCTION 1408b9470 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FDatasmithCameraLensSettingsTemplate::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146861140 == 0) {
    if (DAT_146861170 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146861170,&PTR_s__Script_DatasmithContent_144128dd0);
    }
    lVar1 = DAT_146861170;
    uVar2 = Get_Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate_CRC();
    DAT_146861140 =
         GetStaticStruct(FUN_1408b9e80,lVar1,L"DatasmithCameraLensSettingsTemplate",4,uVar2);
  }
  return;
}



// FUNCTION 1408b94f0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FDatasmithImportBaseOptions::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1468611f0 == 0) {
    if (DAT_146861170 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146861170,&PTR_s__Script_DatasmithContent_144128dd0);
    }
    lVar1 = DAT_146861170;
    uVar2 = Get_Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_CRC();
    DAT_1468611f0 = GetStaticStruct(FUN_1408b9eb0,lVar1,L"DatasmithImportBaseOptions",0x18,uVar2);
  }
  return;
}



// FUNCTION 1408b9570 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FDatasmithMeshBuildSettingsTemplate::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146861300 == 0) {
    if (DAT_146861170 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146861170,&PTR_s__Script_DatasmithContent_144128dd0);
    }
    lVar1 = DAT_146861170;
    uVar2 = Get_Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_CRC();
    DAT_146861300 =
         GetStaticStruct(FUN_1408b9ee0,lVar1,L"DatasmithMeshBuildSettingsTemplate",0x10,uVar2);
  }
  return;
}



// FUNCTION 1408b95f0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FDatasmithMeshSectionInfoMapTemplate::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1468612d0 == 0) {
    if (DAT_146861170 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146861170,&PTR_s__Script_DatasmithContent_144128dd0);
    }
    lVar1 = DAT_146861170;
    uVar2 = Get_Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate_CRC();
    DAT_1468612d0 =
         GetStaticStruct(FUN_1408b9f10,lVar1,L"DatasmithMeshSectionInfoMapTemplate",0x50,uVar2);
  }
  return;
}



// FUNCTION 1408b9670 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FDatasmithMeshSectionInfoTemplate::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1468612e0 == 0) {
    if (DAT_146861170 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146861170,&PTR_s__Script_DatasmithContent_144128dd0);
    }
    lVar1 = DAT_146861170;
    uVar2 = Get_Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate_CRC();
    DAT_1468612e0 = GetStaticStruct(FUN_1408b9f40,lVar1,L"DatasmithMeshSectionInfoTemplate",4,uVar2)
    ;
  }
  return;
}



// FUNCTION 1408b96f0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FDatasmithPostProcessSettingsTemplate::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146861120 == 0) {
    if (DAT_146861170 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146861170,&PTR_s__Script_DatasmithContent_144128dd0);
    }
    lVar1 = DAT_146861170;
    uVar2 = Get_Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_CRC();
    DAT_146861120 =
         GetStaticStruct(FUN_1408b9f70,lVar1,L"DatasmithPostProcessSettingsTemplate",0x40,uVar2);
  }
  return;
}



// FUNCTION 1408b9770 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FDatasmithReimportOptions::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146861200 == 0) {
    if (DAT_146861170 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146861170,&PTR_s__Script_DatasmithContent_144128dd0);
    }
    lVar1 = DAT_146861170;
    uVar2 = Get_Z_Construct_UScriptStruct_FDatasmithReimportOptions_CRC();
    DAT_146861200 = GetStaticStruct(FUN_1408b9fa0,lVar1,L"DatasmithReimportOptions",2,uVar2);
  }
  return;
}



// FUNCTION 1408b97f0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FDatasmithStaticMaterialTemplate::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1468612f0 == 0) {
    if (DAT_146861170 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146861170,&PTR_s__Script_DatasmithContent_144128dd0);
    }
    lVar1 = DAT_146861170;
    uVar2 = Get_Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate_CRC();
    DAT_1468612f0 =
         GetStaticStruct(FUN_1408b9fd0,lVar1,L"DatasmithStaticMaterialTemplate",0x10,uVar2);
  }
  return;
}



// FUNCTION 1408b9870 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FDatasmithStaticMeshImportOptions::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146861210 == 0) {
    if (DAT_146861170 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146861170,&PTR_s__Script_DatasmithContent_144128dd0);
    }
    lVar1 = DAT_146861170;
    uVar2 = Get_Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_CRC();
    DAT_146861210 = GetStaticStruct(FUN_1408ba000,lVar1,L"DatasmithStaticMeshImportOptions",4,uVar2)
    ;
  }
  return;
}



// FUNCTION 1408b98f0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FDatasmithTessellationOptions::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1468611e0 == 0) {
    if (DAT_146861170 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146861170,&PTR_s__Script_DatasmithContent_144128dd0);
    }
    lVar1 = DAT_146861170;
    uVar2 = Get_Z_Construct_UScriptStruct_FDatasmithTessellationOptions_CRC();
    DAT_1468611e0 = GetStaticStruct(FUN_1408ba030,lVar1,L"DatasmithTessellationOptions",0xc,uVar2);
  }
  return;
}



// FUNCTION 1408b9970 FUN_1408b9970 body=47 status=ok
// SIG undefined FUN_1408b9970(void)

longlong FUN_1408b9970(void)

{
  if (DAT_1468610a0 == 0) {
    FUN_141786440(&DAT_1468610a0,&PTR_GetPrivateStaticClass_1441250c0);
  }
  return DAT_1468610a0;
}



// FUNCTION 1408b99a0 FUN_1408b99a0 body=47 status=ok
// SIG undefined FUN_1408b99a0(void)

longlong FUN_1408b99a0(void)

{
  if (DAT_146861280 == 0) {
    FUN_141786440(&DAT_146861280,&PTR_GetPrivateStaticClass_144125a10);
  }
  return DAT_146861280;
}



// FUNCTION 1408b99d0 FUN_1408b99d0 body=47 status=ok
// SIG undefined FUN_1408b99d0(void)

longlong FUN_1408b99d0(void)

{
  if (DAT_1468610b0 == 0) {
    FUN_141786440(&DAT_1468610b0,&PTR_GetPrivateStaticClass_1441256e0);
  }
  return DAT_1468610b0;
}



// FUNCTION 1408b9a00 FUN_1408b9a00 body=47 status=ok
// SIG undefined FUN_1408b9a00(void)

longlong FUN_1408b9a00(void)

{
  if (DAT_146861110 == 0) {
    FUN_141786440(&DAT_146861110,&PTR_GetPrivateStaticClass_144126970);
  }
  return DAT_146861110;
}



// FUNCTION 1408b9a30 FUN_1408b9a30 body=47 status=ok
// SIG undefined FUN_1408b9a30(void)

longlong FUN_1408b9a30(void)

{
  if (DAT_146861100 == 0) {
    FUN_141786440(&DAT_146861100,&PTR_StaticClass_1441267c0);
  }
  return DAT_146861100;
}



// FUNCTION 1408b9a60 FUN_1408b9a60 body=47 status=ok
// SIG undefined FUN_1408b9a60(void)

longlong FUN_1408b9a60(void)

{
  if (DAT_146861160 == 0) {
    FUN_141786440(&DAT_146861160,&PTR_GetPrivateStaticClass_1441270a0);
  }
  return DAT_146861160;
}



// FUNCTION 1408b9a90 FUN_1408b9a90 body=47 status=ok
// SIG undefined FUN_1408b9a90(void)

longlong FUN_1408b9a90(void)

{
  if (DAT_146861230 == 0) {
    FUN_141786440(&DAT_146861230,&PTR_StaticClass_144124af0);
  }
  return DAT_146861230;
}



// FUNCTION 1408b9ac0 FUN_1408b9ac0 body=47 status=ok
// SIG undefined FUN_1408b9ac0(void)

longlong FUN_1408b9ac0(void)

{
  if (DAT_146861240 == 0) {
    FUN_141786440(&DAT_146861240,&PTR_GetPrivateStaticClass_144124df0);
  }
  return DAT_146861240;
}



// FUNCTION 1408b9af0 FUN_1408b9af0 body=47 status=ok
// SIG undefined FUN_1408b9af0(void)

longlong FUN_1408b9af0(void)

{
  if (DAT_146861260 == 0) {
    FUN_141786440(&DAT_146861260,&PTR_GetPrivateStaticClass_1441254e0);
  }
  return DAT_146861260;
}



// FUNCTION 1408b9b20 FUN_1408b9b20 body=47 status=ok
// SIG undefined FUN_1408b9b20(void)

longlong FUN_1408b9b20(void)

{
  if (DAT_146861270 == 0) {
    FUN_141786440(&DAT_146861270,&PTR_StaticClass_144125760);
  }
  return DAT_146861270;
}



// FUNCTION 1408b9b50 FUN_1408b9b50 body=47 status=ok
// SIG undefined FUN_1408b9b50(void)

longlong FUN_1408b9b50(void)

{
  if (DAT_1468612a0 == 0) {
    FUN_141786440(&DAT_1468612a0,&PTR_GetPrivateStaticClass_144125d10);
  }
  return DAT_1468612a0;
}



// FUNCTION 1408b9b80 FUN_1408b9b80 body=47 status=ok
// SIG undefined FUN_1408b9b80(void)

longlong FUN_1408b9b80(void)

{
  if (DAT_1468612b0 == 0) {
    FUN_141786440(&DAT_1468612b0,&PTR_GetPrivateStaticClass_144125f10);
  }
  return DAT_1468612b0;
}



// FUNCTION 1408b9bb0 FUN_1408b9bb0 body=47 status=ok
// SIG undefined FUN_1408b9bb0(void)

longlong FUN_1408b9bb0(void)

{
  if (DAT_1468610e0 == 0) {
    FUN_141786440(&DAT_1468610e0,&PTR_StaticClass_144126500);
  }
  return DAT_1468610e0;
}



// FUNCTION 1408b9be0 FUN_1408b9be0 body=47 status=ok
// SIG undefined FUN_1408b9be0(void)

longlong FUN_1408b9be0(void)

{
  if (DAT_1468612c0 == 0) {
    FUN_141786440(&DAT_1468612c0,&PTR_GetPrivateStaticClass_144126140);
  }
  return DAT_1468612c0;
}



// FUNCTION 1408b9c10 FUN_1408b9c10 body=47 status=ok
// SIG undefined FUN_1408b9c10(void)

longlong FUN_1408b9c10(void)

{
  if (DAT_146861310 == 0) {
    FUN_141786440(&DAT_146861310,&PTR_GetPrivateStaticClass_144124690);
  }
  return DAT_146861310;
}



// FUNCTION 1408b9c40 FUN_1408b9c40 body=47 status=ok
// SIG undefined FUN_1408b9c40(void)

longlong FUN_1408b9c40(void)

{
  if (DAT_146861098 == 0) {
    FUN_1417866a0(&DAT_146861098,&PTR_FUN_14627b080);
  }
  return DAT_146861098;
}



// FUNCTION 1408b9c70 FUN_1408b9c70 body=47 status=ok
// SIG undefined FUN_1408b9c70(void)

longlong FUN_1408b9c70(void)

{
  if (DAT_1468611c8 == 0) {
    FUN_1417866a0(&DAT_1468611c8,&PTR_FUN_14627dc90);
  }
  return DAT_1468611c8;
}



// FUNCTION 1408b9ca0 FUN_1408b9ca0 body=47 status=ok
// SIG undefined FUN_1408b9ca0(void)

longlong FUN_1408b9ca0(void)

{
  if (DAT_1468611d0 == 0) {
    FUN_1417866a0(&DAT_1468611d0,&PTR_FUN_14627dce0);
  }
  return DAT_1468611d0;
}



// FUNCTION 1408b9cd0 FUN_1408b9cd0 body=47 status=ok
// SIG undefined FUN_1408b9cd0(void)

longlong FUN_1408b9cd0(void)

{
  if (DAT_1468611a0 == 0) {
    FUN_1417866a0(&DAT_1468611a0,&PTR_FUN_14627db00);
  }
  return DAT_1468611a0;
}



// FUNCTION 1408b9d00 FUN_1408b9d00 body=47 status=ok
// SIG undefined FUN_1408b9d00(void)

longlong FUN_1408b9d00(void)

{
  if (DAT_1468611b0 == 0) {
    FUN_1417866a0(&DAT_1468611b0,&PTR_FUN_14627dba0);
  }
  return DAT_1468611b0;
}



// FUNCTION 1408b9d30 FUN_1408b9d30 body=47 status=ok
// SIG undefined FUN_1408b9d30(void)

longlong FUN_1408b9d30(void)

{
  if (DAT_1468611b8 == 0) {
    FUN_1417866a0(&DAT_1468611b8,&PTR_FUN_14627dbf0);
  }
  return DAT_1468611b8;
}



// FUNCTION 1408b9d60 FUN_1408b9d60 body=47 status=ok
// SIG undefined FUN_1408b9d60(void)

longlong FUN_1408b9d60(void)

{
  if (DAT_1468611c0 == 0) {
    FUN_1417866a0(&DAT_1468611c0,&PTR_FUN_14627dc40);
  }
  return DAT_1468611c0;
}



// FUNCTION 1408b9d90 FUN_1408b9d90 body=47 status=ok
// SIG undefined FUN_1408b9d90(void)

longlong FUN_1408b9d90(void)

{
  if (DAT_1468611a8 == 0) {
    FUN_1417866a0(&DAT_1468611a8,&PTR_FUN_14627db50);
  }
  return DAT_1468611a8;
}



// FUNCTION 1408b9dc0 FUN_1408b9dc0 body=47 status=ok
// SIG undefined FUN_1408b9dc0(void)

longlong FUN_1408b9dc0(void)

{
  if (DAT_1468611d8 == 0) {
    FUN_1417866a0(&DAT_1468611d8,&PTR_FUN_14627dd30);
  }
  return DAT_1468611d8;
}



// FUNCTION 1408b9df0 FUN_1408b9df0 body=47 status=ok
// SIG undefined FUN_1408b9df0(void)

longlong FUN_1408b9df0(void)

{
  if (DAT_146861228 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146861228,&PTR_FUN_14627c820);
  }
  return DAT_146861228;
}



// FUNCTION 1408b9e20 FUN_1408b9e20 body=47 status=ok
// SIG undefined FUN_1408b9e20(void)

longlong FUN_1408b9e20(void)

{
  if (DAT_146861158 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146861158,&PTR_FUN_14627bb80);
  }
  return DAT_146861158;
}



// FUNCTION 1408b9e50 FUN_1408b9e50 body=47 status=ok
// SIG undefined FUN_1408b9e50(void)

longlong FUN_1408b9e50(void)

{
  if (DAT_146861138 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146861138,&PTR_FUN_14627ba80);
  }
  return DAT_146861138;
}



// FUNCTION 1408b9e80 FUN_1408b9e80 body=47 status=ok
// SIG undefined FUN_1408b9e80(void)

longlong FUN_1408b9e80(void)

{
  if (DAT_146861148 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146861148,&PTR_FUN_14627bb00);
  }
  return DAT_146861148;
}



// FUNCTION 1408b9eb0 FUN_1408b9eb0 body=47 status=ok
// SIG undefined FUN_1408b9eb0(void)

longlong FUN_1408b9eb0(void)

{
  if (DAT_1468611f8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1468611f8,&PTR_FUN_14627c3d0);
  }
  return DAT_1468611f8;
}



// FUNCTION 1408b9ee0 FUN_1408b9ee0 body=47 status=ok
// SIG undefined FUN_1408b9ee0(void)

longlong FUN_1408b9ee0(void)

{
  if (DAT_146861308 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146861308,&PTR_FUN_14627d9f0);
  }
  return DAT_146861308;
}



// FUNCTION 1408b9f10 FUN_1408b9f10 body=47 status=ok
// SIG undefined FUN_1408b9f10(void)

longlong FUN_1408b9f10(void)

{
  if (DAT_1468612d8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1468612d8,&PTR_FUN_14627d490);
  }
  return DAT_1468612d8;
}



// FUNCTION 1408b9f40 FUN_1408b9f40 body=47 status=ok
// SIG undefined FUN_1408b9f40(void)

longlong FUN_1408b9f40(void)

{
  if (DAT_1468612e8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1468612e8,&PTR_FUN_14627d510);
  }
  return DAT_1468612e8;
}



// FUNCTION 1408b9f70 FUN_1408b9f70 body=47 status=ok
// SIG undefined FUN_1408b9f70(void)

longlong FUN_1408b9f70(void)

{
  if (DAT_146861128 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146861128,&PTR_FUN_14627ba00);
  }
  return DAT_146861128;
}



// FUNCTION 1408b9fa0 FUN_1408b9fa0 body=47 status=ok
// SIG undefined FUN_1408b9fa0(void)

longlong FUN_1408b9fa0(void)

{
  if (DAT_146861208 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146861208,&PTR_FUN_14627c540);
  }
  return DAT_146861208;
}



// FUNCTION 1408b9fd0 FUN_1408b9fd0 body=47 status=ok
// SIG undefined FUN_1408b9fd0(void)

longlong FUN_1408b9fd0(void)

{
  if (DAT_1468612f8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1468612f8,&PTR_FUN_14627d5d0);
  }
  return DAT_1468612f8;
}



// FUNCTION 1408ba000 FUN_1408ba000 body=47 status=ok
// SIG undefined FUN_1408ba000(void)

longlong FUN_1408ba000(void)

{
  if (DAT_146861218 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146861218,&PTR_FUN_14627c7a0);
  }
  return DAT_146861218;
}



// FUNCTION 1408ba030 FUN_1408ba030 body=47 status=ok
// SIG undefined FUN_1408ba030(void)

longlong FUN_1408ba030(void)

{
  if (DAT_1468611e8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1468611e8,&PTR_FUN_14627c070);
  }
  return DAT_1468611e8;
}



// FUNCTION 1408ba060 FUN_1408ba060 body=128 status=ok
// SIG undefined FUN_1408ba060(void)

void FUN_1408ba060(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  uVar1 = FUN_1408b6630(local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1408ba0e0 execGetDatasmithUserDataKeysAndValuesForValue body=431 status=ok
// SIG undefined execGetDatasmithUserDataKeysAndValuesForValue(void)

void UDatasmithContentBlueprintLibrary::execGetDatasmithUserDataKeysAndValuesForValue
               (undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong **pplVar3;
  undefined8 local_res10;
  longlong *local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_18 = 0;
  local_10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_28 = 0;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_38 = (longlong *)0x0;
  local_30 = 0;
  plVar1 = &local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  pplVar3 = &local_38;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar3 = *(longlong ***)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  GetDatasmithUserDataKeysAndValuesForValue(local_res10,&local_18,plVar1,pplVar3);
  plVar1 = local_38;
  for (iVar2 = (int)local_30; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1408ba290 execGetDatasmithUserDataValueForKey body=256 status=ok
// SIG undefined execGetDatasmithUserDataValueForKey(void)

void UDatasmithContentBlueprintLibrary::execGetDatasmithUserDataValueForKey
               (undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  longlong local_18 [2];
  
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
  plVar1 = (longlong *)GetDatasmithUserDataValueForKey(local_18,local_res18,local_res10);
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



// FUNCTION 1408ba390 FUN_1408ba390 body=677 status=ok
// SIG undefined FUN_1408ba390(void)

int * FUN_1408ba390(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

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
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar11 = *(int *)(*param_1 + 4 + (longlong)iVar10 * 0x28);
    *(int *)(param_1 + 6) = iVar11;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar11 * 0x28) = 0xffffffff;
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
  lVar1 = (longlong)iVar10 * 0x28;
  puVar12 = (uint *)(*param_1 + lVar1);
  bVar14 = false;
  uVar6 = *(uint *)*param_3;
  puVar12[2] = 0;
  puVar12[3] = 0;
  puVar12[4] = 0;
  puVar12[5] = 0;
  *puVar12 = uVar6;
  puVar12[6] = 0;
  puVar12[7] = 0;
  puVar12[8] = 0xffffffff;
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
          if (*(uint *)(*param_1 + (longlong)iVar9 * 0x28) == *puVar12) break;
          iVar9 = *(int *)(*param_1 + 0x20 + (longlong)iVar9 * 0x28);
          iVar5 = iVar13;
        } while (iVar9 != -1);
      }
    }
    bVar14 = iVar5 != -1;
    if (bVar14) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar5 * 0x28),puVar12,0x20);
      bVar3 = (byte)iVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = iVar10;
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
      goto LAB_1408ba60b;
    }
  }
  cVar4 = TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar11,0);
  if (cVar4 == '\0') {
    uVar6 = (int)param_1[9] - 1U & *puVar12;
    puVar12[9] = uVar6;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    puVar12[8] = *(uint *)((longlong)plVar8 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         *param_2;
  }
LAB_1408ba60b:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar14;
  }
  return param_2;
}



// FUNCTION 1408ba640 FUN_1408ba640 body=577 status=ok
// SIG undefined FUN_1408ba640(void)

int * FUN_1408ba640(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  ulonglong *_Src;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  int local_res8 [2];
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar6);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar6 = (int)param_1[6];
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar9 = *(int *)(*param_1 + 4 + (longlong)iVar6 * 0x18);
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar9 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar6;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  bVar11 = false;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  _Src = (ulonglong *)(*param_1 + (longlong)iVar6 * 0x18);
  uVar2 = *(ulonglong *)*param_3;
  *_Src = uVar2;
  _Src[1] = 0;
  *(undefined4 *)(_Src + 2) = 0xffffffff;
  iVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar9 != 1) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar2);
    bVar11 = local_res8[0] != -1;
    if (bVar11) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)local_res8[0] * 0x18),_Src,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar6,1);
      *param_2 = local_res8[0];
      goto LAB_1408ba858;
    }
  }
  cVar3 = TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar9,0);
  if (cVar3 == '\0') {
    iVar6 = (int)(*_Src >> 4);
    uVar8 = 0x9e3779b9U - iVar6 ^ iVar6 << 8;
    uVar10 = -(uVar8 + iVar6) ^ uVar8 >> 0xd;
    uVar7 = (iVar6 - uVar8) - uVar10 ^ uVar10 >> 0xc;
    uVar8 = (uVar8 - uVar7) - uVar10 ^ uVar7 << 0x10;
    uVar10 = (uVar10 - uVar8) - uVar7 ^ uVar8 >> 5;
    uVar7 = (uVar7 - uVar8) - uVar10 ^ uVar10 >> 3;
    uVar8 = (uVar8 - uVar7) - uVar10 ^ uVar7 << 10;
    uVar7 = ((uVar10 - uVar8) - uVar7 ^ uVar8 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x14) = uVar7;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
         *param_2;
  }
LAB_1408ba858:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 1408ba890 FUN_1408ba890 body=119 status=ok
// SIG undefined FUN_1408ba890(void)

undefined8 * FUN_1408ba890(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_144088fb8;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GeometryCacheComponent",1);
  uVar3 = *puVar1;
  uVar2 = UCheckBox::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8b] = uVar3;
  param_1[0x2d] = uVar3;
  return param_1;
}



// FUNCTION 1408ba910 FCodecV1DecodingContext body=324 status=ok
// SIG undefined FCodecV1DecodingContext(void)

longlong FCodecV1DecodingContext::FCodecV1DecodingContext(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x9e8) = 0;
  *(undefined8 *)(param_1 + 0x9f0) = 0;
  *(undefined8 *)(param_1 + 0x9f8) = 0;
  *(undefined8 *)(param_1 + 0xa00) = 0;
  *(undefined8 *)(param_1 + 0xa08) = 0;
  *(undefined8 *)(param_1 + 0xa10) = 0;
  *(undefined8 *)(param_1 + 0x13c0) = 0;
  *(undefined8 *)(param_1 + 0x13c8) = 0;
  *(undefined8 *)(param_1 + 0x13d0) = 0;
  *(undefined8 *)(param_1 + 0x13d8) = 0;
  *(undefined8 *)(param_1 + 0x13e0) = 0;
  *(undefined8 *)(param_1 + 0x13e8) = 0;
  *(undefined8 *)(param_1 + 0x1d98) = 0;
  *(undefined8 *)(param_1 + 0x1da0) = 0;
  *(undefined8 *)(param_1 + 0x1da8) = 0;
  *(undefined8 *)(param_1 + 0x1db0) = 0;
  *(undefined8 *)(param_1 + 0x1db8) = 0;
  *(undefined8 *)(param_1 + 0x1dc0) = 0;
  *(undefined8 *)(param_1 + 0x2770) = 0;
  *(undefined8 *)(param_1 + 0x2778) = 0;
  *(undefined8 *)(param_1 + 0x2780) = 0;
  *(undefined8 *)(param_1 + 0x2788) = 0;
  *(undefined8 *)(param_1 + 0x2790) = 0;
  *(undefined8 *)(param_1 + 0x2798) = 0;
  *(undefined8 *)(param_1 + 0x3148) = 0;
  *(undefined8 *)(param_1 + 0x3150) = 0;
  *(undefined8 *)(param_1 + 0x3158) = 0;
  *(undefined8 *)(param_1 + 0x3160) = 0;
  *(undefined8 *)(param_1 + 0x3168) = 0;
  *(undefined8 *)(param_1 + 0x3170) = 0;
  *(undefined8 *)(param_1 + 0x3b20) = 0;
  *(undefined8 *)(param_1 + 0x3b28) = 0;
  *(undefined8 *)(param_1 + 0x3b30) = 0;
  *(undefined8 *)(param_1 + 0x3b38) = 0;
  *(undefined8 *)(param_1 + 0x3b40) = 0;
  *(undefined8 *)(param_1 + 0x3b48) = 0;
  *(undefined8 *)(param_1 + 0x44f8) = 0;
  *(undefined8 *)(param_1 + 0x4500) = 0;
  *(undefined8 *)(param_1 + 0x4508) = 0;
  *(undefined8 *)(param_1 + 0x4510) = 0;
  *(undefined8 *)(param_1 + 0x4518) = 0;
  *(undefined8 *)(param_1 + 0x4520) = 0;
  return param_1;
}



// FUNCTION 1408baa60 FUN_1408baa60 body=549 status=ok
// SIG undefined FUN_1408baa60(void)

longlong FUN_1408baa60(longlong param_1,undefined4 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x30) = 4;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_14412e048;
  *(undefined4 *)(param_1 + 0x70) = 4;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined ***)(param_1 + 0x68) = &PTR_FUN_14412e048;
  *(undefined4 *)(param_1 + 200) = 4;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined1 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined ***)(param_1 + 0xc0) = &PTR_FUN_14412e048;
  *(undefined4 *)(param_1 + 0x108) = 4;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined1 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined ***)(param_1 + 0x100) = &PTR_FUN_14412e048;
  *(undefined4 *)(param_1 + 0x148) = 4;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined1 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined ***)(param_1 + 0x140) = &PTR_FUN_14412e048;
  *(undefined4 *)(param_1 + 0x188) = 4;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined1 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined ***)(param_1 + 0x180) = &PTR_FUN_14412e048;
  *(undefined4 *)(param_1 + 0x1c8) = 4;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined1 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined ***)(param_1 + 0x1c0) = &PTR_FUN_14412e0b8;
  *(undefined4 *)(param_1 + 0x210) = param_2;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined1 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x538) = 0;
  *(undefined2 *)(param_1 + 0x540) = 1;
  *(undefined1 *)(param_1 + 0x542) = 0;
  *(undefined8 *)(param_1 + 0x848) = 0;
  *(undefined8 *)(param_1 + 0x850) = 0;
  *(undefined8 *)(param_1 + 0x858) = 0;
  *(undefined4 *)(param_1 + 0x868) = 4;
  *(undefined8 *)(param_1 + 0x870) = 0;
  *(undefined8 *)(param_1 + 0x878) = 0;
  *(undefined ***)(param_1 + 0x860) = &PTR_FUN_143f48ad0;
  *(undefined1 *)(param_1 + 0x888) = 0;
  *(undefined8 *)(param_1 + 0x890) = 0;
  *(undefined8 *)(param_1 + 0x898) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x8a0) = 0;
  *(undefined8 *)(param_1 + 0x8a8) = 0;
  *(undefined8 *)(param_1 + 0x8b0) = 0;
  *(undefined8 *)(param_1 + 0x8b8) = 0;
  *(undefined8 *)(param_1 + 0x8c0) = 0;
  *(undefined8 *)(param_1 + 0x8c8) = 0;
  *(undefined8 *)(param_1 + 0x910) = 0;
  *(undefined8 *)(param_1 + 0x918) = 0;
  *(undefined8 *)(param_1 + 0x920) = 0;
  *(undefined8 *)(param_1 + 0x928) = 0;
  *(undefined8 *)(param_1 + 0x930) = 0;
  *(undefined ***)(param_1 + 0x208) = &PTR_FUN_14412e0f8;
  return param_1;
}



// FUNCTION 1408bac90 FGeometryCacheCodecRenderStateBase body=115 status=ok
// SIG undefined FGeometryCacheCodecRenderStateBase(void)

undefined8 *
FGeometryCacheCodecRenderStateBase::FGeometryCacheCodecRenderStateBase
          (undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = &PTR_FUN_14412bec0;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(param_1 + 1,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[1],_Src,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 1408bad10 FGeometryCacheMeshData body=606 status=ok
// SIG undefined FGeometryCacheMeshData(void)

undefined8 * FGeometryCacheMeshData::FGeometryCacheMeshData(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    TArray<FVector,FDefaultAllocator>::ResizeForCopy(param_1,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)*param_1,pvVar2,(longlong)iVar1 * 0xc);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 2,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[2],pvVar2,(longlong)iVar1 << 3);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(param_1 + 4,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[4],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  pvVar2 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(param_1 + 6,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[6],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 9);
  pvVar2 = (void *)param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(param_1 + 8,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[8],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[10] = 0;
  iVar1 = *(int *)(param_2 + 0xb);
  pvVar2 = (void *)param_2[10];
  *(int *)(param_1 + 0xb) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    TArray<FVector,FDefaultAllocator>::ResizeForCopy(param_1 + 10,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[10],pvVar2,(longlong)iVar1 * 0xc);
  }
  param_1[0xc] = 0;
  iVar1 = *(int *)(param_2 + 0xd);
  pvVar2 = (void *)param_2[0xc];
  *(int *)(param_1 + 0xd) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    TArray<FVector,FDefaultAllocator>::ResizeForCopy(param_1 + 0xc,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[0xc],pvVar2,(longlong)iVar1 * 0xc);
  }
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x74);
  uVar4 = *(undefined4 *)(param_2 + 0xf);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar3;
  *(undefined4 *)(param_1 + 0xf) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar5;
  param_1[0x10] = param_2[0x10];
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  param_1[0x12] = 0;
  iVar1 = *(int *)(param_2 + 0x13);
  pvVar2 = (void *)param_2[0x12];
  *(int *)(param_1 + 0x13) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(param_1 + 0x12,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[0x12],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[0x14] = param_2[0x14];
  return param_1;
}



// FUNCTION 1408baf70 FUN_1408baf70 body=1927 status=ok
// SIG undefined FUN_1408baf70(void)

undefined8 * FUN_1408baf70(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 uVar8;
  longlong lVar9;
  float *pfVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar15;
  char cVar16;
  int iVar17;
  int iVar18;
  DWORD DVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong *plVar23;
  longlong *plVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  longlong *plVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  float fVar32;
  float fVar33;
  longlong local_res18;
  longlong local_res20;
  longlong local_90;
  longlong local_88;
  int local_80;
  undefined8 *local_78;
  undefined1 local_70 [48];
  
  FUN_14271d7c0(param_1,param_2,0);
  *param_1 = &PTR_FUN_14412e168;
  FUN_14236ce60(param_2,param_1 + 0x74,*(undefined4 *)(param_1[0x26] + 8));
  plVar2 = param_1 + 0x77;
  *plVar2 = 0;
  param_1[0x78] = 0;
  fVar33 = *(float *)((longlong)param_2 + 0x724);
  fVar32 = -14400.0;
  if ((-14400.0 <= fVar33) && (fVar32 = fVar33, 14400.0 <= fVar33)) {
    fVar32 = 14400.0;
  }
  *(float *)(param_1 + 0x75) = fVar32 + *(float *)(param_2 + 0xe6);
  uVar8 = *(undefined1 *)((longlong)param_2 + 0x721);
  *(uint *)((longlong)param_1 + 0x1c) = *(uint *)((longlong)param_1 + 0x1c) | 0x80000;
  *(undefined1 *)((longlong)param_1 + 0x3ac) = uVar8;
  fVar33 = 0.0;
  if ((((char)param_2[0xe4] != '\0') && (fVar32 = *(float *)(param_2 + 0xe5), 0.0 <= fVar32)) &&
     (fVar33 = fVar32, 512.0 <= fVar32)) {
    fVar33 = 512.0;
  }
  *(float *)(param_1 + 0x76) = fVar33;
  lVar31 = (longlong)(int)param_2[0xeb];
  iVar18 = *(int *)(param_1 + 0x78);
  iVar17 = iVar18 + (int)param_2[0xeb];
  *(int *)(param_1 + 0x78) = iVar17;
  if (*(int *)((longlong)param_1 + 0x3c4) < iVar17) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*plVar2 + (longlong)iVar18 * 8),0,lVar31 * 8);
  local_res18 = 0;
  if (0 < lVar31) {
    local_res20 = 0;
    do {
      lVar9 = param_2[0xea];
      lVar30 = *(longlong *)(*(longlong *)(param_2[0xe3] + 0x40) + local_res18 * 8);
      if (lVar30 == 0) {
LAB_1408bb111:
        lVar30 = 0;
      }
      else {
        lVar21 = UGeometryCacheTrackStreamable::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar30 + 0x10) + 0x90) < *(int *)(lVar21 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar30 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar21 + 0x90) * 8) != lVar21 + 0x88)) {
          bVar15 = false;
        }
        else {
          bVar15 = true;
        }
        if (!bVar15) goto LAB_1408bb111;
      }
      iVar18 = UGeometryCacheTrackStreamable::FindSampleIndexFromTime
                         (lVar30,*(undefined4 *)(param_1 + 0x75),
                          *(undefined1 *)((longlong)param_1 + 0x3ac));
      lVar21 = *(longlong *)(lVar30 + 0x78);
      lVar29 = (longlong)iVar18;
      if (0 < *(int *)(lVar21 + 0x20 + lVar29 * 0x28)) {
        lVar22 = operator_new(0x990);
        if (lVar22 == 0) {
          plVar23 = (longlong *)0x0;
        }
        else {
          plVar23 = (longlong *)FUN_1408baa60(lVar22,*(undefined4 *)(param_1[0x26] + 8));
        }
        plVar23[0x130] = lVar30 + 0x140;
        plVar5 = plVar23 + 0x18;
        plVar28 = plVar23 + 0xd;
        lVar30 = ((longlong *)(lVar9 + local_res20))[1];
        plVar23[0x128] = *(longlong *)(lVar9 + local_res20);
        plVar23[0x129] = lVar30;
        plVar3 = (longlong *)(lVar9 + 0x10 + local_res20);
        lVar30 = plVar3[1];
        plVar23[0x12a] = *plVar3;
        plVar23[299] = lVar30;
        plVar3 = (longlong *)(lVar9 + 0x20 + local_res20);
        lVar30 = plVar3[1];
        plVar23[300] = *plVar3;
        plVar23[0x12d] = lVar30;
        puVar4 = (undefined4 *)(lVar9 + 0x30 + local_res20);
        uVar11 = *puVar4;
        uVar12 = puVar4[1];
        uVar13 = puVar4[2];
        uVar14 = puVar4[3];
        plVar23[2] = -1;
        plVar3 = plVar23 + 0x20;
        *(undefined4 *)(plVar23 + 0x131) = 0xffffffff;
        *(undefined4 *)(plVar23 + 0x12e) = uVar11;
        *(undefined4 *)((longlong)plVar23 + 0x974) = uVar12;
        *(undefined4 *)(plVar23 + 0x12f) = uVar13;
        *(undefined4 *)((longlong)plVar23 + 0x97c) = uVar14;
        plVar23[1] = 0;
        *(int *)(plVar23 + 0x1f) = *(int *)(lVar21 + 0x20 + lVar29 * 0x28) << 2;
        *(int *)(plVar23 + 0x27) = *(int *)(lVar21 + 0x20 + lVar29 * 0x28) << 2;
        *(int *)(plVar23 + 0x2f) = *(int *)(lVar21 + 0x20 + lVar29 * 0x28) << 3;
        *(int *)(plVar23 + 0x37) = *(int *)(lVar21 + 0x20 + lVar29 * 0x28) << 2;
        *(int *)(plVar23 + 0xc) = *(int *)(lVar21 + 0x20 + lVar29 * 0x28) * 0xc;
        iVar18 = *(int *)(lVar21 + 0x20 + lVar29 * 0x28);
        *(undefined8 *)((longlong)plVar23 + 0xb4) = 0xffffffffbf800000;
        plVar23[0x15] = -1;
        *(undefined4 *)(plVar23 + 0x16) = 0xbf800000;
        *(int *)(plVar23 + 0x14) = iVar18 * 0xc;
        plVar6 = plVar23 + 0x30;
        *(undefined4 *)(plVar23 + 0x40) = *(undefined4 *)(lVar21 + 0x24 + lVar29 * 0x28);
        plVar7 = plVar23 + 0x28;
        cVar16 = IsInRenderingThread();
        if (cVar16 == '\0') {
          if ((DAT_146ac3ac6 == '\0') || (cVar16 = IsInRenderingThread(), cVar16 == '\0')) {
            if (DAT_146ac3ac5 == '\0') {
              cVar16 = FUN_1415ad720(&DAT_1468e2448);
              if ((cVar16 == '\0') && (DAT_1468c21ae != '\0')) {
                DVar19 = GetCurrentThreadId();
                bVar15 = false;
                if (DVar19 == DAT_1468c21c0) goto LAB_1408bb32d;
              }
              else {
LAB_1408bb32d:
                bVar15 = true;
              }
              if (bVar15) goto LAB_1408bb333;
            }
            plVar24 = (longlong *)FUN_1408bff10(local_70,0,0xff);
            lVar9 = *plVar24;
            *(longlong **)(lVar9 + 0x10) = plVar23 + 0x41;
            *(longlong **)(lVar9 + 0x18) = plVar23 + 5;
            *(longlong **)(lVar9 + 0x20) = plVar28;
            *(longlong **)(lVar9 + 0x28) = plVar5;
            *(longlong **)(lVar9 + 0x30) = plVar3;
            *(longlong **)(lVar9 + 0x38) = plVar7;
            *(longlong **)(lVar9 + 0x40) = plVar6;
            lVar9 = *plVar24;
            lVar29 = plVar24[2];
            lVar30 = plVar24[1];
            lVar21 = *(longlong *)(lVar9 + 0x50);
            if (lVar21 != 0) {
              LOCK();
              *(int *)(lVar21 + 0x48) = *(int *)(lVar21 + 0x48) + 1;
              UNLOCK();
            }
            FUN_1408cb090(lVar9,lVar30,(int)lVar29,1);
            if (lVar21 != 0) {
              LOCK();
              piVar1 = (int *)(lVar21 + 0x48);
              iVar18 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar18 == 1) {
                FGraphEvent::Recycle(lVar21);
              }
            }
          }
          else {
LAB_1408bb333:
            FBaseGraphTask::GetSmallTaskAllocator();
            FGeomCacheVertexFactory::Init_RenderThread
                      (plVar23 + 0x41,plVar23 + 5,plVar28,plVar5,plVar3,plVar7,plVar6);
          }
          FUN_141ee24f0(0);
        }
        else {
          FGeomCacheVertexFactory::Init_RenderThread
                    (plVar23 + 0x41,plVar23 + 5,plVar28,plVar5,plVar3,plVar7,plVar6);
        }
        FUN_141edf270(plVar23 + 5);
        FUN_141edf270(plVar23 + 0xd);
        FUN_141edf270(plVar5);
        FUN_141edf270(plVar3);
        FUN_141edf270(plVar7);
        FUN_141edf270(plVar6);
        FUN_141edf270(plVar23 + 0x38);
        FUN_141edf270(plVar23 + 0x41);
        puVar25 = (undefined8 *)operator_new(0xa8);
        puVar27 = (undefined8 *)0x0;
        puVar26 = puVar27;
        if (puVar25 != (undefined8 *)0x0) {
          *puVar25 = 0;
          puVar25[1] = 0;
          puVar25[2] = 0;
          puVar25[3] = 0;
          puVar25[4] = 0;
          puVar25[5] = 0;
          puVar25[6] = 0;
          puVar25[7] = 0;
          puVar25[8] = 0;
          puVar25[9] = 0;
          puVar25[10] = 0;
          puVar25[0xb] = 0;
          puVar25[0xc] = 0;
          puVar25[0xd] = 0;
          puVar25[0x12] = 0;
          puVar25[0x13] = 0;
          puVar25[0x14] = 0;
          puVar26 = puVar25;
        }
        lVar9 = plVar23[0x130];
        *plVar23 = (longlong)puVar26;
        lVar30 = *(longlong *)(lVar9 + 0x38);
        fVar33 = *(float *)(param_1 + 0x75);
        iVar18 = 0;
        if (*(uint *)(lVar30 + 0x80) < 2) {
LAB_1408bb55e:
          plVar28 = *(longlong **)(lVar9 + 0x30);
          if (plVar28 != (longlong *)0x0) {
            local_88 = lVar30 + 0x68;
            local_90 = lVar9;
            local_80 = iVar18;
            local_78 = puVar26;
            (**(code **)(*plVar28 + 0x10))(plVar28,&local_90);
          }
        }
        else {
          if (*(char *)((longlong)param_1 + 0x3ac) != '\0') {
            fVar32 = fVar33 / *(float *)(lVar30 + 0x28);
            fVar33 = fVar33 - (float)((int)ROUND((fVar32 + fVar32) - 0.5) >> 1) *
                              *(float *)(lVar30 + 0x28);
          }
          fVar33 = fVar33 + *(float *)(lVar30 + 0x188);
          pfVar10 = *(float **)(lVar30 + 0x78);
          iVar17 = *(uint *)(lVar30 + 0x80) - 1;
          if (fVar33 < pfVar10[(longlong)iVar17 * 10]) {
            puVar25 = puVar27;
            if (fVar33 < *pfVar10 || fVar33 == *pfVar10) goto LAB_1408bb55e;
            while ((iVar18 = iVar17, iVar17 = (int)puVar25, 0 < iVar18 && (iVar17 < iVar18))) {
              uVar20 = (iVar18 + 1 + iVar17) / 2;
              iVar17 = uVar20 - 1;
              if (pfVar10[(longlong)(int)uVar20 * 10] <= fVar33) {
                puVar25 = (undefined8 *)(ulonglong)uVar20;
                iVar17 = iVar18;
              }
            }
          }
          iVar18 = iVar17;
          if (iVar17 != -1) goto LAB_1408bb55e;
        }
        puVar26 = (undefined8 *)operator_new(0xa8);
        if (puVar26 != (undefined8 *)0x0) {
          *puVar26 = 0;
          puVar26[1] = 0;
          puVar26[2] = 0;
          puVar26[3] = 0;
          puVar26[4] = 0;
          puVar26[5] = 0;
          puVar26[6] = 0;
          puVar26[7] = 0;
          puVar26[8] = 0;
          puVar26[9] = 0;
          puVar26[10] = 0;
          puVar26[0xb] = 0;
          puVar26[0xc] = 0;
          puVar26[0xd] = 0;
          puVar26[0x12] = 0;
          puVar26[0x13] = 0;
          puVar26[0x14] = 0;
          puVar27 = puVar26;
        }
        plVar23[1] = (longlong)puVar27;
        lVar30 = *(longlong *)(*plVar23 + 0x60);
        lVar9 = lVar30 + (longlong)*(int *)(*plVar23 + 0x68) * 0xc;
        for (; lVar30 != lVar9; lVar30 = lVar30 + 0xc) {
          plVar28 = (longlong *)(**(code **)(*param_2 + 0x560))(param_2,*(undefined4 *)(lVar30 + 8))
          ;
          if ((plVar28 == (longlong *)0x0) ||
             (cVar16 = (**(code **)(*plVar28 + 0x2f0))(plVar28,0xc), cVar16 == '\0')) {
            plVar28 = (longlong *)UMaterial::GetDefaultMaterial(0);
          }
          iVar18 = (int)plVar23[4];
          *(int *)(plVar23 + 4) = iVar18 + 1;
          if (*(int *)((longlong)plVar23 + 0x24) < iVar18 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar23 + 3,iVar18);
          }
          *(longlong **)(plVar23[3] + (longlong)iVar18 * 8) = plVar28;
        }
        *(longlong **)(*plVar2 + local_res18 * 8) = plVar23;
      }
      local_res18 = local_res18 + 1;
      local_res20 = local_res20 + 0x70;
    } while (local_res18 < lVar31);
  }
  return param_1;
}



// FUNCTION 1408bb700 FUN_1408bb700 body=246 status=ok
// SIG undefined FUN_1408bb700(void)

longlong FUN_1408bb700(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined2 *)(param_1 + 0x88) = 0xffff;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(uint *)(param_1 + 0x8c) = *(uint *)(param_1 + 0x8c) & 0xf98000e0 | 0x18000e0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  iVar1 = *(int *)(param_1 + 0x80);
  *(int *)(param_1 + 0x80) = iVar1 + 1;
  if (*(int *)(param_1 + 0x84) < iVar1 + 1) {
    FUN_1408ca0e0(param_1,iVar1);
  }
  lVar3 = *(longlong *)(param_1 + 0x78);
  if (*(longlong *)(param_1 + 0x78) == 0) {
    lVar3 = param_1;
  }
  puVar2 = (undefined8 *)((longlong)iVar1 * 0x78 + lVar3);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 1;
    puVar2[10] = 0;
    *(undefined4 *)(puVar2 + 0xb) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x5c) = 0;
    puVar2[0xc] = 0x3f800000;
    *(undefined2 *)(puVar2 + 0xd) = 0;
    puVar2[0xe] = 0;
  }
  return param_1;
}



// FUNCTION 1408bb800 UDEPRECATED_GeometryCacheTrack_FlipbookAnimation body=76 status=ok
// SIG undefined UDEPRECATED_GeometryCacheTrack_FlipbookAnimation(void)

undefined8 *
UDEPRECATED_GeometryCacheTrack_FlipbookAnimation::UDEPRECATED_GeometryCacheTrack_FlipbookAnimation
          (undefined8 *param_1)

{
  FUN_141781840();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__14412ce10;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  return param_1;
}



// FUNCTION 1408bb850 UDEPRECATED_GeometryCacheTrack_TransformAnimation body=161 status=ok
// SIG undefined UDEPRECATED_GeometryCacheTrack_TransformAnimation(void)

undefined8 *
UDEPRECATED_GeometryCacheTrack_TransformAnimation::UDEPRECATED_GeometryCacheTrack_TransformAnimation
          (undefined8 *param_1)

{
  FUN_141781840();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__14412cb58;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
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
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  return param_1;
}



// FUNCTION 1408bb900 UGeometryCache body=70 status=ok
// SIG undefined UGeometryCache(void)

undefined8 * UGeometryCache::UGeometryCache(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__14412c8b0;
  param_1[5] = &PTR_LAB_14412cb28;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 1408bb950 FUN_1408bb950 body=43 status=ok
// SIG undefined FUN_1408bb950(void)

undefined8 * FUN_1408bb950(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__14412bee0;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 1408bb980 UInputVectorAxisDelegateBinding body=43 status=ok
// SIG undefined UInputVectorAxisDelegateBinding(void)

undefined8 * UInputVectorAxisDelegateBinding::UInputVectorAxisDelegateBinding(undefined8 *param_1)

{
  FUN_141781840();
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__14412db08;
  return param_1;
}



// FUNCTION 1408bb9b0 UGeometryCacheCodecV1 body=126 status=ok
// SIG undefined UGeometryCacheCodecV1(void)

undefined8 * UGeometryCacheCodecV1::UGeometryCacheCodecV1(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  FUN_141781840();
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__14412ddb8;
  puVar1 = (undefined8 *)operator_new(0x4ed8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR__scalar_deleting_destructor__14412c170;
    FCodecV1DecodingContext::FCodecV1DecodingContext(puVar1 + 1);
    param_1[7] = puVar1;
    return param_1;
  }
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 1408bba30 FUN_1408bba30 body=126 status=ok
// SIG undefined FUN_1408bba30(void)

undefined8 * FUN_1408bba30(undefined8 *param_1)

{
  FUN_14235ed30();
  *param_1 = &PTR_FUN_14412d138;
  param_1[5] = &PTR_LAB_14412da60;
  param_1[0x5a] = &PTR_LAB_14412da90;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *(undefined4 *)(param_1 + 0xe6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x724) = 0;
  *(undefined1 *)(param_1 + 0xed) = 0;
  *(undefined2 *)(param_1 + 0xe4) = 0x101;
  param_1[0xec] = 0x3f800000;
  *(undefined4 *)(param_1 + 0xe5) = 0x3f800000;
  return param_1;
}



// FUNCTION 1408bbab0 UGeometryCacheTrack body=57 status=ok
// SIG undefined UGeometryCacheTrack(void)

undefined8 * UGeometryCacheTrack::UGeometryCacheTrack(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__14412c300;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



// FUNCTION 1408bbaf0 FUN_1408bbaf0 body=278 status=ok
// SIG undefined FUN_1408bbaf0(void)

undefined8 * FUN_1408bbaf0(undefined8 *param_1)

{
  FUN_141781840();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__14412c5f8;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
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
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x29) = 4;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = &PTR_FUN_14412c5b8;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 1408bbc10 ~TArray<FGeometryCacheMeshData,FDefaultAllocator> body=400 status=ok
// SIG undefined ~TArray<FGeometryCacheMeshData,FDefaultAllocator>(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TArray<FGeometryCacheMeshData,FDefaultAllocator>::
     ~TArray<FGeometryCacheMeshData,FDefaultAllocator>(longlong *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)*param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    piVar2 = (int *)((longlong)plVar4 + 0x1c);
    do {
      piVar2[-5] = 0;
      if (piVar2[-4] != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                  (plVar4,0);
      }
      piVar2[-1] = 0;
      if (*piVar2 != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(piVar2 + -3);
      }
      piVar2[3] = 0;
      if (piVar2[4] != 0) {
        TArray<float,FDefaultAllocator>::ResizeTo(piVar2 + 1);
      }
      piVar2[7] = 0;
      if (piVar2[8] != 0) {
        TArray<float,FDefaultAllocator>::ResizeTo(piVar2 + 5);
      }
      piVar2[0xb] = 0;
      if (piVar2[0xc] != 0) {
        TArray<float,FDefaultAllocator>::ResizeTo(piVar2 + 9);
      }
      piVar2[0xf] = 0;
      if (piVar2[0x10] != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                  (piVar2 + 0xd,0);
      }
      piVar2[0x13] = 0;
      if (piVar2[0x14] != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                  (piVar2 + 0x11,0);
      }
      *(undefined8 *)(piVar2 + 0x18) = _DAT_1468b5d90;
      iVar1 = DAT_1468b5d98;
      piVar2[0x1a] = DAT_1468b5d98;
      *(undefined8 *)(piVar2 + 0x15) = *(undefined8 *)(piVar2 + 0x18);
      piVar2[0x17] = iVar1;
      *(undefined1 *)(piVar2 + 0x1b) = 0;
      if (*(longlong *)(piVar2 + 0x1d) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(piVar2 + 0x11) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(piVar2 + 0xd) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(piVar2 + 9) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(piVar2 + 5) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(piVar2 + 1) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(piVar2 + -3) != 0) {
        FMemory::Free();
      }
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 0x15;
      piVar2 = piVar2 + 0x2a;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    plVar4 = (longlong *)*param_1;
  }
  if (plVar4 != (longlong *)0x0) {
    FMemory::Free(plVar4);
    return;
  }
  return;
}



// FUNCTION 1408bbda0 FUN_1408bbda0 body=109 status=ok
// SIG undefined FUN_1408bbda0(void)

void FUN_1408bbda0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x78);
  iVar3 = *(int *)(param_1 + 0x80);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = param_1;
  }
  if (iVar3 != 0) {
    lVar2 = lVar2 + 8;
    do {
      if (*(longlong *)(lVar2 + 0x28) != 0) {
        FMemory::Free();
      }
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar2);
      lVar2 = lVar2 + 0x78;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *(longlong *)(param_1 + 0x78);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1408bbe10 FUN_1408bbe10 body=233 status=ok
// SIG undefined FUN_1408bbe10(void)

void FUN_1408bbe10(longlong *param_1)

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
    plVar7 = (longlong *)(lVar5 + 0x20);
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(plVar7 + 2);
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
      plVar4 = (longlong *)plVar7[-3];
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
      plVar7 = plVar7 + 9;
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



// FUNCTION 1408bbf00 ~FCodecV1DecodingContext body=419 status=ok
// SIG undefined ~FCodecV1DecodingContext(void)

void FCodecV1DecodingContext::~FCodecV1DecodingContext(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x4518) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4508) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x44f8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3b40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3b30) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3b20) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3168) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3158) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3148) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2790) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2780) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2770) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1db8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1da8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1d98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x13e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x13d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x13c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa08) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x9f8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x9e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1408bc0b0 ~FGeometryCacheMeshData body=365 status=ok
// SIG undefined ~FGeometryCacheMeshData(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FGeometryCacheMeshData::~FGeometryCacheMeshData(longlong *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 2,0);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 4,0);
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if (*(int *)((longlong)param_1 + 0x3c) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 6,0);
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if (*(int *)((longlong)param_1 + 0x4c) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 8,0);
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (*(int *)((longlong)param_1 + 0x5c) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 10,0);
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (*(int *)((longlong)param_1 + 0x6c) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0xc,0);
  }
  *(undefined8 *)((longlong)param_1 + 0x7c) = _DAT_1468b5d90;
  uVar1 = DAT_1468b5d98;
  *(undefined4 *)((longlong)param_1 + 0x84) = DAT_1468b5d98;
  param_1[0xe] = *(longlong *)((longlong)param_1 + 0x7c);
  *(undefined4 *)(param_1 + 0xf) = uVar1;
  *(undefined1 *)(param_1 + 0x11) = 0;
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1408bc220 FUN_1408bc220 body=713 status=ok
// SIG undefined FUN_1408bc220(void)

void FUN_1408bc220(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar5;
  
  plVar1 = param_1 + 0x77;
  *param_1 = &PTR_FUN_14412e168;
  plVar7 = (longlong *)*plVar1;
  plVar2 = plVar7 + *(int *)(param_1 + 0x78);
  for (; plVar7 != plVar2; plVar7 = plVar7 + 1) {
    plVar3 = (longlong *)*plVar7;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(plVar3[0x18] + 0x30))();
      (**(code **)(plVar3[0x20] + 0x30))(plVar3 + 0x20);
      (**(code **)(plVar3[0x28] + 0x30))(plVar3 + 0x28);
      (**(code **)(plVar3[0x30] + 0x30))(plVar3 + 0x30);
      plVar4 = plVar3 + 0x38;
      (**(code **)(*plVar4 + 0x30))(plVar4);
      plVar5 = plVar3 + 0x41;
      (**(code **)(*plVar5 + 0x30))(plVar5);
      (**(code **)(plVar3[5] + 0x30))(plVar3 + 5);
      (**(code **)(plVar3[0xd] + 0x30))(plVar3 + 0xd);
      lVar6 = *plVar3;
      if (lVar6 != 0) {
        FGeometryCacheMeshData::~FGeometryCacheMeshData(lVar6);
        FMemory::operator_delete(lVar6,0xa8);
      }
      lVar6 = plVar3[1];
      if (lVar6 != 0) {
        FGeometryCacheMeshData::~FGeometryCacheMeshData(lVar6);
        FMemory::operator_delete(lVar6,0xa8);
      }
      plVar3[0x10c] = (longlong)&PTR_FUN_143f48ad0;
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(plVar3 + 0x112);
      FUN_141edd2d0(plVar3 + 0x10c);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(plVar3 + 0x10b);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(plVar3 + 0x10a);
      FUN_141edd2d0(plVar5);
      *plVar4 = (longlong)&PTR__scalar_deleting_destructor__143f48b30;
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(plVar3 + 0x3f);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(plVar3 + 0x3e);
      FUN_141edd2d0(plVar4);
      plVar3[0x30] = (longlong)&PTR_FUN_143f48ad0;
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(plVar3 + 0x36);
      FUN_141edd2d0(plVar3 + 0x30);
      plVar3[0x28] = (longlong)&PTR_FUN_143f48ad0;
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(plVar3 + 0x2e);
      FUN_141edd2d0(plVar3 + 0x28);
      plVar3[0x20] = (longlong)&PTR_FUN_143f48ad0;
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(plVar3 + 0x26);
      FUN_141edd2d0(plVar3 + 0x20);
      plVar3[0x18] = (longlong)&PTR_FUN_143f48ad0;
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(plVar3 + 0x1e);
      FUN_141edd2d0(plVar3 + 0x18);
      lVar6 = 2;
      plVar4 = plVar3 + 0x15;
      do {
        plVar5 = plVar4 + -8;
        *plVar5 = (longlong)&PTR_FUN_143f48ad0;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(plVar4 + -2);
        FUN_141edd2d0(plVar5);
        lVar6 = lVar6 + -1;
        plVar4 = plVar5;
      } while (lVar6 != 0);
      if (plVar3[3] != 0) {
        FMemory::Free();
      }
      FMemory::operator_delete(plVar3,0x990);
    }
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)((longlong)param_1 + 0x3c4) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  if (*plVar1 != 0) {
    FMemory::Free();
  }
  FUN_14271e9f0(param_1);
  return;
}



// FUNCTION 1408bc4f0 FUN_1408bc4f0 body=321 status=ok
// SIG undefined FUN_1408bc4f0(void)

void FUN_1408bc4f0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xe0);
  plVar4 = *(longlong **)(param_1 + 200);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xb0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xa0);
  plVar4 = *(longlong **)(param_1 + 0x88);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x70);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x60);
  FUN_1408bbe10(param_1 + 0x28);
  plVar4 = *(longlong **)(param_1 + 0x18);
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



// FUNCTION 1408bc640 ~FStreamingGeometryCacheData body=686 status=ok
// SIG undefined ~FStreamingGeometryCacheData(void)

void FStreamingGeometryCacheData::~FStreamingGeometryCacheData(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  uint *puVar9;
  int local_a8;
  uint uStack_a4;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_80;
  uint *local_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  longlong *local_58;
  undefined2 local_50;
  longlong *local_48;
  undefined8 uStack_40;
  uint *puStack_38;
  undefined1 auStack_30 [16];
  undefined8 local_20;
  
  FUN_141ee24f0(0);
  FUN_1408bf800(param_1,0);
  uStack_a4 = 1;
  plVar1 = (longlong *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x58);
  local_78 = (uint *)(param_1 + 0x40);
  local_a8 = 0;
  iStack_94 = 0;
  iStack_90 = 0;
  if (iVar2 != 0) {
    puVar9 = *(uint **)(param_1 + 0x50);
    if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
      puVar9 = local_78;
    }
    uVar3 = *puVar9;
    local_a8 = 0;
    iStack_90 = 0;
    while (uVar3 == 0) {
      lVar8 = (longlong)local_a8;
      iStack_90 = iStack_90 + 0x20;
      iVar7 = local_a8 + 1;
      bVar5 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_a8;
      local_a8 = iVar7;
      if (bVar5) goto LAB_1408bc71f;
      uVar3 = puVar9[lVar8 + 1];
    }
    uStack_a4 = -uVar3 & uVar3;
    iVar7 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    iStack_94 = (iStack_90 - iVar7) + 0x1f;
    if (iVar2 < iStack_94) {
LAB_1408bc71f:
      iStack_94 = iVar2;
    }
  }
  uStack_70 = CONCAT44(iStack_94,0xffffffff);
  auStack_30._8_4_ = iStack_90;
  auStack_30._0_8_ = uStack_70;
  auStack_30._12_4_ = uStack_8c;
  uStack_80 = CONCAT44(uStack_a4,local_a8);
  local_50 = 0;
  local_20._0_4_ = SUB84(plVar1,0);
  local_20._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  local_68._8_4_ = (undefined4)local_20;
  local_68._0_8_ = auStack_30._8_8_;
  local_68._12_4_ = local_20._4_4_;
  local_58 = plVar1;
  local_48 = plVar1;
  uStack_40 = uStack_80;
  puStack_38 = local_78;
  local_20 = plVar1;
  if (iStack_94 < *(int *)(param_1 + 0x58)) {
    do {
      lVar6 = (longlong)iStack_94;
      lVar8 = *plVar1;
      if (*(longlong *)(lVar8 + 8 + lVar6 * 0x28) != 0) {
        FMemory::Free();
      }
      *(undefined8 *)(lVar8 + 8 + lVar6 * 0x28) = 0;
      uStack_70 = CONCAT44(uStack_70._4_4_,(uint)uStack_70 & ~uStack_80._4_4_);
      *(undefined8 *)(lVar8 + 0x18 + lVar6 * 0x28) = 0;
      *(undefined8 *)(lVar8 + 0x10 + lVar6 * 0x28) = 0;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
      iStack_94 = uStack_70._4_4_;
    } while (uStack_70._4_4_ < (int)local_78[6]);
    if (((char)local_50 != '\0') && (local_50._1_1_ != '\0')) {
      TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_58,(int)local_58[1] - *(int *)((longlong)local_58 + 0x34),1);
    }
  }
  TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
  ::Empty(plVar1,0);
  puVar4 = *(undefined8 **)(param_1 + 8);
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc0));
  lVar8 = *(longlong *)(param_1 + 0xb8);
  while (lVar8 != 0) {
    puVar4 = *(undefined8 **)(param_1 + 0xb8);
    *(undefined8 *)(param_1 + 0xb8) = *puVar4;
    FMemory::operator_delete(puVar4,0x18);
    lVar8 = *(longlong *)(param_1 + 0xb8);
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (plVar1);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1408bc8f0 ~UGeometryCacheTrack body=127 status=ok
// SIG undefined ~UGeometryCacheTrack(void)

void UGeometryCacheTrack::~UGeometryCacheTrack(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__14412c300;
  *(undefined4 *)(param_1 + 7) = 0;
  if (*(int *)((longlong)param_1 + 0x3c) != 0) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1 + 6,0);
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if (*(int *)((longlong)param_1 + 0x4c) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 8,0);
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  return;
}



// FUNCTION 1408bc970 operator= body=390 status=ok
// SIG undefined operator=(void)

longlong FGeometryCacheMeshData::operator=(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  TArray<FVector,FDefaultAllocator>::operator=();
  puVar1 = (undefined8 *)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)(param_2 + 0x10)) {
    iVar2 = *(int *)(param_2 + 0x18);
    pvVar3 = *(void **)(param_2 + 0x10);
    *(int *)(param_1 + 0x18) = iVar2;
    if ((iVar2 == 0) && (*(int *)(param_1 + 0x1c) == 0)) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar2);
      ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar3,(longlong)iVar2 << 3);
    }
  }
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_1 + 0x20,param_2 + 0x20);
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_1 + 0x30,param_2 + 0x30);
  puVar1 = (undefined8 *)(param_1 + 0x40);
  if (puVar1 != (undefined8 *)(param_2 + 0x40)) {
    iVar2 = *(int *)(param_2 + 0x48);
    pvVar3 = *(void **)(param_2 + 0x40);
    *(int *)(param_1 + 0x48) = iVar2;
    if ((iVar2 == 0) && (*(int *)(param_1 + 0x4c) == 0)) {
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
    else {
      TArray<int,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
      ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar3,(longlong)iVar2 << 2);
    }
  }
  TArray<FVector,FDefaultAllocator>::operator=(param_1 + 0x50,param_2 + 0x50);
  puVar1 = (undefined8 *)(param_1 + 0x60);
  if (puVar1 != (undefined8 *)(param_2 + 0x60)) {
    iVar2 = *(int *)(param_2 + 0x68);
    pvVar3 = *(void **)(param_2 + 0x60);
    *(int *)(param_1 + 0x68) = iVar2;
    if ((iVar2 == 0) && (*(int *)(param_1 + 0x6c) == 0)) {
      *(undefined4 *)(param_1 + 0x6c) = 0;
    }
    else {
      TArray<FVector,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
      ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar3,(longlong)iVar2 * 0xc);
    }
  }
  uVar4 = *(undefined4 *)(param_2 + 0x74);
  uVar5 = *(undefined4 *)(param_2 + 0x78);
  uVar6 = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = uVar4;
  *(undefined4 *)(param_1 + 0x78) = uVar5;
  *(undefined4 *)(param_1 + 0x7c) = uVar6;
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_1 + 0x90,param_2 + 0x90);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  return param_1;
}



// FUNCTION 1408bcb00 operator= body=1217 status=ok
// SIG undefined operator=(void)

longlong * FHuffmanTable::operator=(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  plVar2 = param_2 + 2;
  plVar1 = param_1 + 2;
  if (plVar1 != plVar2) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = *plVar2;
    *plVar2 = 0;
    *(int *)(param_1 + 3) = (int)param_2[3];
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
  }
  plVar2 = param_2 + 4;
  plVar1 = param_1 + 4;
  if (plVar1 != plVar2) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = *plVar2;
    *plVar2 = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
  }
  *(int *)(param_1 + 6) = (int)param_2[6];
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  *(int *)(param_1 + 7) = (int)param_2[7];
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(int *)(param_1 + 8) = (int)param_2[8];
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
  *(int *)(param_1 + 9) = (int)param_2[9];
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  *(int *)(param_1 + 10) = (int)param_2[10];
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
  *(int *)(param_1 + 0xb) = (int)param_2[0xb];
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
  *(int *)(param_1 + 0xc) = (int)param_2[0xc];
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 100);
  *(int *)(param_1 + 0xd) = (int)param_2[0xd];
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
  *(int *)(param_1 + 0xe) = (int)param_2[0xe];
  *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)((longlong)param_2 + 0x74);
  *(int *)(param_1 + 0xf) = (int)param_2[0xf];
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_2 + 0x7c);
  *(int *)(param_1 + 0x10) = (int)param_2[0x10];
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_2 + 0x84);
  *(int *)(param_1 + 0x11) = (int)param_2[0x11];
  *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)((longlong)param_2 + 0x8c);
  *(int *)(param_1 + 0x12) = (int)param_2[0x12];
  *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)((longlong)param_2 + 0x94);
  param_1[0x13] = param_2[0x13];
  *(int *)(param_1 + 0x14) = (int)param_2[0x14];
  *(undefined8 *)((longlong)param_1 + 0xa4) = *(undefined8 *)((longlong)param_2 + 0xa4);
  *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)((longlong)param_2 + 0xac);
  param_1[0x16] = param_2[0x16];
  *(int *)(param_1 + 0x17) = (int)param_2[0x17];
  *(undefined8 *)((longlong)param_1 + 0xbc) = *(undefined8 *)((longlong)param_2 + 0xbc);
  *(undefined4 *)((longlong)param_1 + 0xc4) = *(undefined4 *)((longlong)param_2 + 0xc4);
  param_1[0x19] = param_2[0x19];
  *(int *)(param_1 + 0x1a) = (int)param_2[0x1a];
  *(undefined8 *)((longlong)param_1 + 0xd4) = *(undefined8 *)((longlong)param_2 + 0xd4);
  *(undefined4 *)((longlong)param_1 + 0xdc) = *(undefined4 *)((longlong)param_2 + 0xdc);
  param_1[0x1c] = param_2[0x1c];
  *(int *)(param_1 + 0x1d) = (int)param_2[0x1d];
  *(undefined8 *)((longlong)param_1 + 0xec) = *(undefined8 *)((longlong)param_2 + 0xec);
  *(undefined4 *)((longlong)param_1 + 0xf4) = *(undefined4 *)((longlong)param_2 + 0xf4);
  lVar3 = 0x80;
  param_1[0x1f] = param_2[0x1f];
  *(int *)(param_1 + 0x20) = (int)param_2[0x20];
  *(undefined8 *)((longlong)param_1 + 0x104) = *(undefined8 *)((longlong)param_2 + 0x104);
  *(undefined4 *)((longlong)param_1 + 0x10c) = *(undefined4 *)((longlong)param_2 + 0x10c);
  param_1[0x22] = param_2[0x22];
  *(int *)(param_1 + 0x23) = (int)param_2[0x23];
  *(undefined8 *)((longlong)param_1 + 0x11c) = *(undefined8 *)((longlong)param_2 + 0x11c);
  *(undefined4 *)((longlong)param_1 + 0x124) = *(undefined4 *)((longlong)param_2 + 0x124);
  param_1[0x25] = param_2[0x25];
  *(int *)(param_1 + 0x26) = (int)param_2[0x26];
  *(undefined8 *)((longlong)param_1 + 0x134) = *(undefined8 *)((longlong)param_2 + 0x134);
  *(undefined4 *)((longlong)param_1 + 0x13c) = *(undefined4 *)((longlong)param_2 + 0x13c);
  param_1[0x28] = param_2[0x28];
  *(int *)(param_1 + 0x29) = (int)param_2[0x29];
  *(undefined8 *)((longlong)param_1 + 0x14c) = *(undefined8 *)((longlong)param_2 + 0x14c);
  *(undefined4 *)((longlong)param_1 + 0x154) = *(undefined4 *)((longlong)param_2 + 0x154);
  param_1[0x2b] = param_2[0x2b];
  *(int *)(param_1 + 0x2c) = (int)param_2[0x2c];
  *(undefined8 *)((longlong)param_1 + 0x164) = *(undefined8 *)((longlong)param_2 + 0x164);
  *(undefined4 *)((longlong)param_1 + 0x16c) = *(undefined4 *)((longlong)param_2 + 0x16c);
  param_1[0x2e] = param_2[0x2e];
  *(int *)(param_1 + 0x2f) = (int)param_2[0x2f];
  *(undefined8 *)((longlong)param_1 + 0x17c) = *(undefined8 *)((longlong)param_2 + 0x17c);
  *(undefined4 *)((longlong)param_1 + 0x184) = *(undefined4 *)((longlong)param_2 + 0x184);
  param_1[0x31] = param_2[0x31];
  *(int *)(param_1 + 0x32) = (int)param_2[0x32];
  *(undefined8 *)((longlong)param_1 + 0x194) = *(undefined8 *)((longlong)param_2 + 0x194);
  *(undefined4 *)((longlong)param_1 + 0x19c) = *(undefined4 *)((longlong)param_2 + 0x19c);
  param_1[0x34] = param_2[0x34];
  *(int *)(param_1 + 0x35) = (int)param_2[0x35];
  *(undefined8 *)((longlong)param_1 + 0x1ac) = *(undefined8 *)((longlong)param_2 + 0x1ac);
  *(undefined4 *)((longlong)param_1 + 0x1b4) = *(undefined4 *)((longlong)param_2 + 0x1b4);
  param_1[0x37] = param_2[0x37];
  *(int *)(param_1 + 0x38) = (int)param_2[0x38];
  *(undefined8 *)((longlong)param_1 + 0x1c4) = *(undefined8 *)((longlong)param_2 + 0x1c4);
  *(undefined4 *)((longlong)param_1 + 0x1cc) = *(undefined4 *)((longlong)param_2 + 0x1cc);
  plVar2 = param_1 + 0x3a;
  do {
    *plVar2 = *(longlong *)(((longlong)param_2 - (longlong)param_1) + (longlong)plVar2);
    plVar2[1] = *(longlong *)(((longlong)param_2 - (longlong)param_1) + 8 + (longlong)plVar2);
    plVar2 = plVar2 + 2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *(int *)(param_1 + 0x13a) = (int)param_2[0x13a];
  *(undefined1 *)((longlong)param_1 + 0x9d4) = *(undefined1 *)((longlong)param_2 + 0x9d4);
  return param_1;
}



// FUNCTION 1408bcfd0 FUN_1408bcfd0 body=112 status=ok
// SIG undefined FUN_1408bcfd0(void)

longlong * FUN_1408bcfd0(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  uVar2 = FUN_1406da970();
  plVar3 = (longlong *)FUN_1406da970(uVar2,param_2 + 0xc);
  puVar1 = *(undefined1 **)plVar3[1];
  if (puVar1 + 1 <= (undefined1 *)((undefined8 *)plVar3[1])[1]) {
    *(undefined1 *)(param_2 + 0x18) = *puVar1;
    *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 1;
    return plVar3;
  }
  (**(code **)(*plVar3 + 0x50))(plVar3,(undefined1 *)(param_2 + 0x18),1);
  return plVar3;
}



// FUNCTION 1408bd040 FUN_1408bd040 body=963 status=ok
// SIG undefined FUN_1408bd040(void)

longlong * FUN_1408bd040(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  int local_res8 [2];
  int local_res10 [2];
  
  FArchive::UsingCustomVersion(param_1,&DAT_1464b0118);
  iVar3 = 0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 2) != 0) {
    local_res8[0] = *(int *)(param_2 + 1);
  }
  FUN_1408bcfd0(param_1,param_2 + 0xe);
  FUN_1408bddc0(param_1,param_2 + 0xc);
  (**(code **)(*param_1 + 8))(param_1,param_2 + 0x14);
  (**(code **)(*param_1 + 8))(param_1,(longlong)param_2 + 0xa1);
  (**(code **)(*param_1 + 8))(param_1,(longlong)param_2 + 0xa2);
  (**(code **)(*param_1 + 8))(param_1,(longlong)param_2 + 0xa3);
  (**(code **)(*param_1 + 8))(param_1,(longlong)param_2 + 0xa4);
  (**(code **)(*param_1 + 8))(param_1,(longlong)param_2 + 0xa5);
  (**(code **)(*param_1 + 8))(param_1,(longlong)param_2 + 0xa6);
  (**(code **)(*param_1 + 8))(param_1,(longlong)param_2 + 0xa7);
  plVar2 = (longlong *)param_1[1];
  if ((int *)plVar2[1] < (int *)*plVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    iVar1 = *(int *)(param_2 + 1);
    if (iVar1 < local_res8[0]) {
      *(int *)(param_2 + 1) = local_res8[0];
      if (*(int *)((longlong)param_2 + 0xc) < local_res8[0]) {
        TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
    }
    else if ((local_res8[0] < iVar1) && (iVar1 - local_res8[0] != 0)) {
      *(int *)(param_2 + 1) = iVar1 - (iVar1 - local_res8[0]);
      TArray<FVector,FDefaultAllocator>::ResizeShrink(param_2);
    }
    iVar1 = *(int *)(param_2 + 3);
    if (iVar1 < local_res8[0]) {
      *(int *)(param_2 + 3) = local_res8[0];
      if (*(int *)((longlong)param_2 + 0x1c) < local_res8[0]) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow();
      }
    }
    else if ((local_res8[0] < iVar1) && (iVar1 - local_res8[0] != 0)) {
      *(int *)(param_2 + 3) = iVar1 - (iVar1 - local_res8[0]);
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink();
    }
    iVar1 = *(int *)(param_2 + 5);
    if (iVar1 < local_res8[0]) {
      *(int *)(param_2 + 5) = local_res8[0];
      if (*(int *)((longlong)param_2 + 0x2c) < local_res8[0]) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow();
      }
    }
    else if ((local_res8[0] < iVar1) && (iVar1 - local_res8[0] != 0)) {
      *(int *)(param_2 + 5) = iVar1 - (iVar1 - local_res8[0]);
      TArray<enum_EJson,FDefaultAllocator>::ResizeShrink();
    }
    iVar1 = *(int *)(param_2 + 7);
    if (iVar1 < local_res8[0]) {
      *(int *)(param_2 + 7) = local_res8[0];
      if (*(int *)((longlong)param_2 + 0x3c) < local_res8[0]) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow();
      }
    }
    else if ((local_res8[0] < iVar1) && (iVar1 - local_res8[0] != 0)) {
      *(int *)(param_2 + 7) = iVar1 - (iVar1 - local_res8[0]);
      TArray<enum_EJson,FDefaultAllocator>::ResizeShrink();
    }
    iVar1 = *(int *)(param_2 + 9);
    if (iVar1 < local_res8[0]) {
      *(int *)(param_2 + 9) = local_res8[0];
      if (*(int *)((longlong)param_2 + 0x4c) < local_res8[0]) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow();
      }
    }
    else if ((local_res8[0] < iVar1) && (iVar1 - local_res8[0] != 0)) {
      *(int *)(param_2 + 9) = iVar1 - (iVar1 - local_res8[0]);
      TArray<enum_EJson,FDefaultAllocator>::ResizeShrink();
    }
    if (*(char *)((longlong)param_2 + 0xa4) == '\0') {
      *(undefined4 *)(param_2 + 0xb) = 0;
      if (*(int *)((longlong)param_2 + 0x5c) != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                  (param_2 + 10,0);
      }
    }
    else {
      iVar1 = *(int *)(param_2 + 0xb);
      if (iVar1 < local_res8[0]) {
        *(int *)(param_2 + 0xb) = local_res8[0];
        if (*(int *)((longlong)param_2 + 0x5c) < local_res8[0]) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow();
        }
      }
      else if ((local_res8[0] < iVar1) && (iVar1 - local_res8[0] != 0)) {
        *(int *)(param_2 + 0xb) = iVar1 - (iVar1 - local_res8[0]);
        TArray<FVector,FDefaultAllocator>::ResizeShrink();
      }
    }
  }
  if (0 < *(int *)(param_2 + 1)) {
    (**(code **)(*param_1 + 0x50))(param_1,*param_2,*(int *)(param_2 + 1) * 0xc);
    (**(code **)(*param_1 + 0x50))(param_1,param_2[2],*(int *)(param_2 + 3) << 3);
    (**(code **)(*param_1 + 0x50))(param_1,param_2[4],*(int *)(param_2 + 5) << 2);
    (**(code **)(*param_1 + 0x50))(param_1,param_2[6],*(int *)(param_2 + 7) << 2);
    (**(code **)(*param_1 + 0x50))(param_1,param_2[8],*(int *)(param_2 + 9) << 2);
    if (*(char *)((longlong)param_2 + 0xa4) != '\0') {
      (**(code **)(*param_1 + 0x50))(param_1,param_2[10],*(int *)(param_2 + 0xb) * 0xc);
    }
  }
  plVar2 = (longlong *)param_1[1];
  local_res10[0] = *(int *)(param_2 + 0x13);
  if ((int *)plVar2[1] < (int *)*plVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res10,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res10,4);
    }
  }
  else {
    local_res10[0] = *(int *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    *(undefined4 *)(param_2 + 0x13) = 0;
    if (*(int *)((longlong)param_2 + 0x9c) != local_res10[0]) {
      TArray<float,FDefaultAllocator>::ResizeTo(param_2 + 0x12,local_res10[0]);
      iVar3 = *(int *)(param_2 + 0x13);
    }
    *(int *)(param_2 + 0x13) = local_res10[0] + iVar3;
    if (*(int *)((longlong)param_2 + 0x9c) < local_res10[0] + iVar3) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2 + 0x12,iVar3);
    }
  }
  if (0 < *(int *)(param_2 + 0x13)) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2[0x12],(longlong)*(int *)(param_2 + 0x13) << 2);
  }
  return param_1;
}



// FUNCTION 1408bd410 FUN_1408bd410 body=288 status=ok
// SIG undefined FUN_1408bd410(void)

longlong * FUN_1408bd410(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2,4);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_1408bcfd0(param_1,param_2 + 1);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 8,4);
    }
  }
  else {
    param_2[8] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_1[1])[1]) {
    param_2[9] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2 + 9,4);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,param_2 + 9,4);
  }
  return param_1;
}



// FUNCTION 1408bd530 FUN_1408bd530 body=1251 status=ok
// SIG undefined FUN_1408bd530(void)

longlong * FUN_1408bd530(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2,4);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 1,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 1,4);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 2,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 2,4);
    }
  }
  else {
    param_2[2] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 3,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 3,4);
    }
  }
  else {
    param_2[3] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 4,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 4,4);
    }
  }
  else {
    param_2[4] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 5,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 5,4);
    }
  }
  else {
    param_2[5] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 6,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 6,4);
    }
  }
  else {
    param_2[6] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 7,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 7,4);
    }
  }
  else {
    param_2[7] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 8,4);
    }
  }
  else {
    param_2[8] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 9,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 9,4);
    }
  }
  else {
    param_2[9] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 10,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 10,4);
    }
  }
  else {
    param_2[10] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0xb,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0xb,4);
    }
  }
  else {
    param_2[0xb] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0xc,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0xc,4);
    }
  }
  else {
    param_2[0xc] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0xd,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0xd,4);
    }
  }
  else {
    param_2[0xd] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0xe,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0xe,4);
    }
  }
  else {
    param_2[0xe] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_1[1])[1]) {
    param_2[0xf] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0xf,4);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,param_2 + 0xf,4);
  }
  return param_1;
}



// FUNCTION 1408bda20 FUN_1408bda20 body=528 status=ok
// SIG undefined FUN_1408bda20(void)

longlong * FUN_1408bda20(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 2,(longlong)*(int *)((longlong)param_2 + 0xc) << 2
            );
  uVar6 = 0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar4 = (longlong *)param_1[1];
  if ((int *)plVar4[1] < (int *)*plVar4 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  bVar2 = *(byte *)(param_1 + 5);
  if (((-1 < (char)bVar2) && (-1 < local_res8[0])) &&
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0x400001)))) {
    if ((bVar2 & 1) == 0) {
      *(int *)(param_2 + 1) = local_res8[0];
      uVar7 = uVar6;
      if (0 < local_res8[0]) {
        do {
          puVar8 = (undefined4 *)(*param_2 + uVar7);
          puVar1 = *(undefined4 **)param_1[1];
          if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
            (**(code **)(*param_1 + 0x50))(param_1,puVar8,4);
            if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
              FArchive::ByteSwap(param_1,puVar8,4);
            }
          }
          else {
            *puVar8 = *puVar1;
            *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
          }
          uVar5 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar5;
          uVar7 = uVar7 + 4;
        } while ((int)uVar5 < (int)param_2[1]);
        return param_1;
      }
    }
    else {
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
        TArray<float,FDefaultAllocator>::ResizeTo(param_2,local_res8[0]);
      }
      if (0 < local_res8[0]) {
        do {
          iVar3 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar3 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
          }
          puVar8 = *(undefined4 **)param_1[1];
          puVar1 = (undefined4 *)(*param_2 + (longlong)iVar3 * 4);
          if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar8 + 1) {
            (**(code **)(*param_1 + 0x50))(param_1,puVar1,4);
            if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
              FArchive::ByteSwap(param_1,puVar1,4);
            }
          }
          else {
            *puVar1 = *puVar8;
            *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
          }
          uVar5 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar5;
        } while ((int)uVar5 < local_res8[0]);
        return param_1;
      }
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar2 | 0x80;
  return param_1;
}



// FUNCTION 1408bdc30 FUN_1408bdc30 body=391 status=ok
// SIG undefined FUN_1408bdc30(void)

longlong * FUN_1408bdc30(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  iVar4 = 0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar3 = (longlong *)param_1[1];
  if ((int *)plVar3[1] < (int *)*plVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  bVar1 = *(byte *)(param_1 + 5);
  if ((((char)bVar1 < '\0') || (local_res8[0] < 0)) ||
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x200000 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
  }
  else if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        (**(code **)(*param_1 + 0x30))(param_1,*param_2 + (longlong)iVar4 * 8);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_2[1]);
      return param_1;
    }
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,local_res8[0]);
    }
    if (0 < local_res8[0]) {
      do {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
        }
        (**(code **)(*param_1 + 0x30))(param_1,*param_2 + (longlong)iVar2 * 8);
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_res8[0]);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 1408bddc0 FUN_1408bddc0 body=393 status=ok
// SIG undefined FUN_1408bddc0(void)

longlong * FUN_1408bddc0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0xc,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xc);
  iVar4 = 0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar3 = (longlong *)param_1[1];
  if ((int *)plVar3[1] < (int *)*plVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  bVar1 = *(byte *)(param_1 + 5);
  if ((((char)bVar1 < '\0') || (local_res8[0] < 0)) ||
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x155555 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
  }
  else if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_1406da970(param_1,*param_2 + (longlong)iVar4 * 0xc);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_2[1]);
      return param_1;
    }
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                (param_2,local_res8[0]);
    }
    if (0 < local_res8[0]) {
      do {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
        }
        FUN_1406da970(param_1,*param_2 + (longlong)iVar2 * 0xc);
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_res8[0]);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 1408bdf50 FUN_1408bdf50 body=409 status=ok
// SIG undefined FUN_1408bdf50(void)

longlong * FUN_1408bdf50(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x28,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x28);
  puVar6 = (undefined4 *)0x0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar4 = (longlong *)param_1[1];
  if ((int *)plVar4[1] < (int *)*plVar4 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  bVar2 = *(byte *)(param_1 + 5);
  if ((((char)bVar2 < '\0') || (local_res8[0] < 0)) ||
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x66666 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar2 | 0x80;
    return param_1;
  }
  if ((bVar2 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_1408bd410(param_1,*param_2 + (longlong)(int)puVar6 * 0x28);
        uVar7 = (int)puVar6 + 1;
        puVar6 = (undefined4 *)(ulonglong)uVar7;
      } while ((int)uVar7 < (int)param_2[1]);
    }
    return param_1;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_2,local_res8[0]);
  }
  puVar8 = puVar6;
  if (local_res8[0] < 1) {
    return param_1;
  }
  do {
    iVar3 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar3 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
    }
    puVar1 = (undefined4 *)(*param_2 + (longlong)iVar3 * 0x28);
    puVar5 = puVar6;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      *(undefined8 *)(puVar1 + 8) = 0;
      puVar5 = puVar1;
    }
    FUN_1408bd410(param_1,puVar5);
    uVar7 = (int)puVar8 + 1;
    puVar8 = (undefined4 *)(ulonglong)uVar7;
  } while ((int)uVar7 < local_res8[0]);
  return param_1;
}



// FUNCTION 1408be0f0 FUN_1408be0f0 body=375 status=ok
// SIG undefined FUN_1408be0f0(void)

longlong * FUN_1408be0f0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 6,(longlong)*(int *)((longlong)param_2 + 0xc) << 6
            );
  iVar4 = 0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar3 = (longlong *)param_1[1];
  if ((int *)plVar3[1] < (int *)*plVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  bVar1 = *(byte *)(param_1 + 5);
  if ((((char)bVar1 < '\0') || (local_res8[0] < 0)) ||
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x40000 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
  }
  else if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_1408bd530(param_1,(longlong)iVar4 * 0x40 + *param_2);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_2[1]);
      return param_1;
    }
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
      TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_2,local_res8[0]);
    }
    if (0 < local_res8[0]) {
      do {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
          ResizeGrow(param_2,iVar2);
        }
        FUN_1408bd530(param_1,(longlong)iVar2 * 0x40 + *param_2);
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_res8[0]);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 1408be270 FUN_1408be270 body=465 status=ok
// SIG undefined FUN_1408be270(void)

longlong * FUN_1408be270(longlong *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x14,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x14);
  puVar7 = (undefined1 *)0x0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar5 = (longlong *)param_1[1];
  if ((int *)plVar5[1] < (int *)*plVar5 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar5;
    *plVar5 = *plVar5 + 4;
  }
  bVar3 = *(byte *)(param_1 + 5);
  if (((-1 < (char)bVar3) && (-1 < local_res8[0])) &&
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0xccccd)))) {
    if ((bVar3 & 1) == 0) {
      *(int *)(param_2 + 1) = local_res8[0];
      if (0 < local_res8[0]) {
        do {
          lVar2 = *param_2 + (longlong)(int)puVar7 * 0x14;
          uVar6 = FUN_1408be450(param_1,lVar2);
          FUN_1408be450(uVar6,lVar2 + 8);
          (**(code **)(*param_1 + 8))(param_1,lVar2 + 0x10);
          uVar9 = (int)puVar7 + 1;
          puVar7 = (undefined1 *)(ulonglong)uVar9;
        } while ((int)uVar9 < (int)param_2[1]);
      }
    }
    else {
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeTo
                  (param_2,local_res8[0]);
      }
      puVar10 = puVar7;
      if (0 < local_res8[0]) {
        do {
          iVar4 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar4 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
            ResizeGrow(param_2,iVar4);
          }
          puVar1 = (undefined1 *)(*param_2 + (longlong)iVar4 * 0x14);
          puVar8 = puVar7;
          if (puVar1 != (undefined1 *)0x0) {
            *puVar1 = 2;
            *(undefined4 *)(puVar1 + 4) = 0;
            puVar1[8] = 2;
            *(undefined4 *)(puVar1 + 0xc) = 0;
            puVar8 = puVar1;
          }
          uVar6 = FUN_1408be450(param_1,puVar8);
          FUN_1408be450(uVar6,puVar8 + 8);
          (**(code **)(*param_1 + 8))(param_1,puVar8 + 0x10);
          uVar9 = (int)puVar10 + 1;
          puVar10 = (undefined1 *)(ulonglong)uVar9;
        } while ((int)uVar9 < local_res8[0]);
      }
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar3 | 0x80;
  return param_1;
}



// FUNCTION 1408be450 FUN_1408be450 body=163 status=ok
// SIG undefined FUN_1408be450(void)

longlong * FUN_1408be450(longlong *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,1);
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if (puVar2 + 1 <= (undefined4 *)((undefined8 *)param_1[1])[1]) {
    *(undefined4 *)(param_2 + 4) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2 + 4,4);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,param_2 + 4,4);
  }
  return param_1;
}



// FUNCTION 1408be520 FUN_1408be520 body=97 status=ok
// SIG undefined FUN_1408be520(void)

undefined8 * FUN_1408be520(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14412e3e0;
  if (param_1[10] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[10] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1408be590 FUN_1408be590 body=97 status=ok
// SIG undefined FUN_1408be590(void)

undefined8 * FUN_1408be590(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14412e2e0;
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1408be600 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FCodecV1Decoder::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FCodecV1DecodingContext::~FCodecV1DecodingContext(param_1 + 1);
  *param_1 = &PTR_FUN_143f47c98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4ed8);
  }
  return param_1;
}



// FUNCTION 1408be650 FUN_1408be650 body=128 status=ok
// SIG undefined FUN_1408be650(void)

longlong FUN_1408be650(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x658) = &PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x688);
  FUN_141edd2d0(param_1 + 0x658);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x650);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x648);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x730);
  }
  return param_1;
}



// FUNCTION 1408be6d0 FUN_1408be6d0 body=72 status=ok
// SIG undefined FUN_1408be6d0(void)

undefined8 * FUN_1408be6d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14412bec0;
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1408be720 `scalar_deleting_destructor' body=109 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FGeometryCacheCodecRenderStateV1::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__14412dd98;
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14412bec0;
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1408be790 FUN_1408be790 body=52 status=ok
// SIG undefined FUN_1408be790(void)

undefined8 FUN_1408be790(undefined8 param_1,ulonglong param_2)

{
  FUN_1408bc220();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3d0);
  }
  return param_1;
}



// FUNCTION 1408be7d0 `scalar_deleting_destructor' body=148 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FGeometryCacheStreamingManager::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__14412e2f8;
  uVar1 = IStreamingManager::Get();
  FStreamingManagerCollection::RemoveStreamingManager(uVar1,param_1);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if (param_1[0xd] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 3);
  *param_1 = &PTR_FUN_14412c180;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 1408be870 FUN_1408be870 body=52 status=ok
// SIG undefined FUN_1408be870(void)

undefined8 FUN_1408be870(undefined8 param_1,ulonglong param_2)

{
  FUN_141edd2d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1408be8b0 FUN_1408be8b0 body=43 status=ok
// SIG undefined FUN_1408be8b0(void)

undefined8 * FUN_1408be8b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143fcdb88;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1408be8e0 FUN_1408be8e0 body=43 status=ok
// SIG undefined FUN_1408be8e0(void)

undefined8 * FUN_1408be8e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14412c180;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1408be910 FUN_1408be910 body=43 status=ok
// SIG undefined FUN_1408be910(void)

undefined8 * FUN_1408be910(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14412c180;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1408be940 `scalar_deleting_destructor' body=151 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UDEPRECATED_GeometryCacheTrack_FlipbookAnimation::_scalar_deleting_destructor_
          (undefined8 *param_1,uint param_2)

{
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__14412ce10;
  TArray<FGeometryCacheMeshData,FDefaultAllocator>::Empty(param_1 + 0xc,0);
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (*(int *)((longlong)param_1 + 0x7c) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0xe,0);
  }
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  TArray<FGeometryCacheMeshData,FDefaultAllocator>::
  ~TArray<FGeometryCacheMeshData,FDefaultAllocator>(param_1 + 0xc);
  UGeometryCacheTrack::~UGeometryCacheTrack(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 1408be9e0 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UDEPRECATED_GeometryCacheTrack_TransformAnimation::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  FGeometryCacheMeshData::~FGeometryCacheMeshData(param_1 + 0x58);
  UGeometryCacheTrack::~UGeometryCacheTrack(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 1408bea20 `scalar_deleting_destructor' body=124 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UGeometryCache::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x50) + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_143f47c68;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1408beaa0 `scalar_deleting_destructor' body=80 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FInterstitialAdListener::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__14412bee0;
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1408beaf0 `scalar_deleting_destructor' body=80 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UGeometryCacheCodecRaw::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__14412bee0;
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1408beb40 `scalar_deleting_destructor' body=117 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * UGeometryCacheCodecV1::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__14412ddb8;
  puVar1 = (undefined8 *)param_1[7];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[7] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__14412bee0;
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1408bebc0 FUN_1408bebc0 body=73 status=ok
// SIG undefined FUN_1408bebc0(void)

longlong FUN_1408bebc0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x750) != 0) {
    FMemory::Free();
  }
  FUN_14080d1e0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x770);
  }
  return param_1;
}



// FUNCTION 1408bec10 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UGeometryCacheTrack::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~UGeometryCacheTrack();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1408bec50 `scalar_deleting_destructor' body=293 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UGeometryCacheTrackStreamable::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  
  *param_1 = &PTR__scalar_deleting_destructor__14412c5f8;
  iVar3 = *(int *)(param_1 + 0xe);
  if (iVar3 != 0) {
    lVar2 = param_1[0xd] + 0x10;
    do {
      FUntypedBulkData::~FUntypedBulkData(lVar2);
      lVar2 = lVar2 + 0x80;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (*(int *)((longlong)param_1 + 0x74) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<128,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0xd,0);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)((longlong)param_1 + 0x84) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0xf,0);
  }
  if (param_1[0x30] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x30] + 0x48);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      FGraphEvent::Recycle();
    }
  }
  FUN_141edd2d0(param_1 + 0x28);
  FGeometryCacheMeshData::~FGeometryCacheMeshData(param_1 + 0x13);
  if (param_1[0x11] != 0) {
    FMemory::Free();
  }
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  iVar3 = *(int *)(param_1 + 0xe);
  lVar2 = param_1[0xd];
  if (iVar3 != 0) {
    lVar2 = lVar2 + 0x10;
    do {
      FUntypedBulkData::~FUntypedBulkData(lVar2);
      lVar2 = lVar2 + 0x80;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar2 = param_1[0xd];
  }
  if (lVar2 != 0) {
    FMemory::Free();
  }
  UGeometryCacheTrack::~UGeometryCacheTrack(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,400);
  }
  return param_1;
}



// FUNCTION 1408bed80 FUN_1408bed80 body=464 status=ok
// SIG undefined FUN_1408bed80(void)

int FUN_1408bed80(longlong *param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  lVar1 = param_1[2];
  if (0 < (int)param_2) {
    uVar7 = (ulonglong)param_2;
    iVar3 = (int)lVar1;
    do {
      if (iVar3 == (iVar3 / 0x59) * 0x59) {
        uVar2 = FMemory::Malloc(0x3ff8,0);
        iVar3 = (int)param_1[1];
        *(int *)(param_1 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
        }
        *(undefined8 *)(*param_1 + (longlong)iVar3 * 8) = uVar2;
        lVar6 = *(longlong *)(*param_1 + (longlong)iVar3 * 8);
        if (lVar6 != 0) {
          lVar8 = 0x59;
          do {
            *(undefined8 *)(lVar6 + 0x78) = 0;
            lVar8 = lVar8 + -1;
            *(undefined8 *)(lVar6 + 0x80) = 0;
            *(undefined2 *)(lVar6 + 0x88) = 0xffff;
            *(undefined4 *)(lVar6 + 0x90) = 0;
            *(uint *)(lVar6 + 0x8c) = *(uint *)(lVar6 + 0x8c) & 0xf98000e0 | 0x18000e0;
            *(undefined8 *)(lVar6 + 0x98) = 0;
            *(undefined8 *)(lVar6 + 0xa0) = 0;
            *(undefined8 *)(lVar6 + 0xa8) = 0;
            *(undefined4 *)(lVar6 + 0xb0) = 0xffffffff;
            *(undefined4 *)(lVar6 + 0xb4) = 0;
            iVar3 = *(int *)(lVar6 + 0x80);
            *(int *)(lVar6 + 0x80) = iVar3 + 1;
            if (*(int *)(lVar6 + 0x84) < iVar3 + 1) {
              FUN_1408ca0e0(lVar6,iVar3);
            }
            lVar4 = *(longlong *)(lVar6 + 0x78);
            if (*(longlong *)(lVar6 + 0x78) == 0) {
              lVar4 = lVar6;
            }
            puVar5 = (undefined8 *)(lVar4 + (longlong)iVar3 * 0x78);
            if (puVar5 != (undefined8 *)0x0) {
              *puVar5 = 0;
              puVar5[1] = 0;
              puVar5[2] = 0;
              puVar5[3] = 0;
              puVar5[4] = 0;
              puVar5[6] = 0;
              puVar5[7] = 0;
              puVar5[8] = 1;
              puVar5[10] = 0;
              *(undefined4 *)(puVar5 + 0xb) = 0xffffffff;
              *(undefined4 *)((longlong)puVar5 + 0x5c) = 0;
              puVar5[0xc] = 0x3f800000;
              *(undefined2 *)(puVar5 + 0xd) = 0;
              puVar5[0xe] = 0;
            }
            lVar6 = lVar6 + 0xb8;
          } while (lVar8 != 0);
        }
      }
      *(int *)(param_1 + 2) = (int)param_1[2] + 1;
      iVar3 = (int)param_1[2];
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return (int)lVar1;
}



// FUNCTION 1408bef50 AddGeometryCache body=355 status=ok
// SIG undefined AddGeometryCache(void)

void FGeometryCacheStreamingManager::AddGeometryCache(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int local_res8 [2];
  undefined8 local_res10;
  int local_res18 [2];
  undefined8 *local_res20;
  
  plVar1 = (longlong *)(param_1 + 0x18);
  local_res10 = param_2;
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(plVar1,local_res8,param_2);
  if ((local_res8[0] == -1) || (lVar5 = *plVar1 + (longlong)local_res8[0] * 0x18, lVar5 == 0)) {
    local_res20 = &local_res10;
    FUN_1408ba640(plVar1,local_res18,&local_res20,0);
    lVar5 = *plVar1 + (longlong)local_res18[0] * 0x18;
  }
  if (*(longlong *)(lVar5 + 8) == 0) {
    puVar2 = (undefined8 *)operator_new(0xf0);
    puVar4 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = local_res10;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      *(undefined4 *)(puVar2 + 0xc) = 0xffffffff;
      *(undefined4 *)((longlong)puVar2 + 100) = 0;
      puVar2[0xe] = 0;
      *(undefined4 *)(puVar2 + 0xf) = 0;
      puVar2[0x10] = 0;
      puVar2[0x11] = 0;
      puVar2[0x12] = 0;
      puVar2[0x13] = 0;
      puVar2[0x14] = 0;
      puVar2[0x15] = 0;
      puVar3 = (undefined8 *)operator_new(0x18);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = 0;
        puVar3[1] = 0;
        *(undefined4 *)(puVar3 + 2) = 0;
        puVar4 = puVar3;
      }
      puVar2[0x17] = puVar4;
      puVar2[0x16] = puVar4;
      InitializeCriticalSection((LPCRITICAL_SECTION)(puVar2 + 0x18));
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar2 + 0x18),4000);
      *(undefined8 **)(lVar5 + 8) = puVar2;
      return;
    }
    *(undefined8 *)(lVar5 + 8) = 0;
  }
  return;
}



// FUNCTION 1408bf0c0 AddMatrixSample body=181 status=ok
// SIG undefined AddMatrixSample(void)

void UGeometryCacheTrack::AddMatrixSample(longlong param_1,undefined8 *param_2,float param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  float fVar10;
  
  iVar3 = *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x38) = iVar3 + 1;
  if (*(int *)(param_1 + 0x3c) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0x30,iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x30);
  uVar8 = param_2[1];
  lVar9 = (longlong)iVar3 * 0x40;
  *(undefined8 *)(lVar9 + lVar4) = *param_2;
  ((undefined8 *)(lVar9 + lVar4))[1] = uVar8;
  uVar8 = param_2[3];
  puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar4);
  *puVar1 = param_2[2];
  puVar1[1] = uVar8;
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar6 = *(undefined4 *)(param_2 + 5);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x2c);
  puVar2 = (undefined4 *)(lVar9 + 0x20 + lVar4);
  *puVar2 = *(undefined4 *)(param_2 + 4);
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar6 = *(undefined4 *)(param_2 + 7);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x3c);
  puVar2 = (undefined4 *)(lVar9 + 0x30 + lVar4);
  *puVar2 = *(undefined4 *)(param_2 + 6);
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  iVar3 = *(int *)(param_1 + 0x48);
  *(int *)(param_1 + 0x48) = iVar3 + 1;
  if (*(int *)(param_1 + 0x4c) < iVar3 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x40,iVar3);
  }
  *(float *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar3 * 4) = param_3;
  fVar10 = *(float *)(param_1 + 0x28);
  if (*(float *)(param_1 + 0x28) <= param_3) {
    fVar10 = param_3;
  }
  *(float *)(param_1 + 0x28) = fVar10;
  return;
}



// FUNCTION 1408bf180 AddMeshSample body=154 status=ok
// SIG undefined AddMeshSample(void)

void UDEPRECATED_GeometryCacheTrack_FlipbookAnimation::AddMeshSample
               (longlong param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x68) = iVar1 + 1;
  if (*(int *)(param_1 + 0x6c) < iVar1 + 1) {
    TArray<FGeometryCacheMeshData,FDefaultAllocator>::ResizeGrow(param_1 + 0x60,iVar1);
  }
  FGeometryCacheMeshData::FGeometryCacheMeshData
            ((longlong)iVar1 * 0xa8 + *(longlong *)(param_1 + 0x60),param_2);
  iVar1 = *(int *)(param_1 + 0x78);
  *(int *)(param_1 + 0x78) = iVar1 + 1;
  if (*(int *)(param_1 + 0x7c) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x70,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar1 * 4) = param_3;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  if (*(int *)(param_1 + 0x50) < *(int *)(param_2 + 0x68)) {
    *(int *)(param_1 + 0x50) = *(int *)(param_2 + 0x68);
  }
  return;
}



// FUNCTION 1408bf220 AddResidentChunk body=100 status=ok
// SIG undefined AddResidentChunk(void)

void FStreamingGeometryCacheData::AddResidentChunk
               (longlong param_1,undefined4 param_2,undefined4 *param_3)

{
  longlong lVar1;
  int local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 *local_res18;
  
  local_res18 = local_res10;
  local_res10[0] = param_2;
  FUN_1408ba390((longlong *)(param_1 + 0x30),local_res8,&local_res18,0);
  lVar1 = *(longlong *)(param_1 + 0x30) + (longlong)local_res8[0] * 0x28;
  *(undefined4 *)(lVar1 + 0x14) = 0;
  *(undefined8 *)(lVar1 + 8) = 0;
  *(undefined4 *)(lVar1 + 0x10) = *param_3;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  return;
}



// FUNCTION 1408bf290 AddStreamingComponent body=61 status=ok
// SIG undefined AddStreamingComponent(void)

void FGeometryCacheStreamingManager::AddStreamingComponent(longlong *param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
  AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0xd,local_res10);
                    /* WARNING: Could not recover jumptable at 0x0001408bf2c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 200))(param_1,param_2);
  return;
}



// FUNCTION 1408bf2d0 BeginDestroy body=67 status=ok
// SIG undefined BeginDestroy(void)

void UDEPRECATED_GeometryCacheTrack_FlipbookAnimation::BeginDestroy(longlong param_1)

{
  FUN_1417502d0();
  *(undefined4 *)(param_1 + 0x58) = 0;
  TArray<FGeometryCacheMeshData,FDefaultAllocator>::Empty(param_1 + 0x60,0);
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x70,0);
    return;
  }
  return;
}



// FUNCTION 1408bf320 BeginDestroy body=30 status=ok
// SIG undefined BeginDestroy(void)

void UGeometryCache::BeginDestroy(longlong param_1)

{
  FUN_1417502d0();
  FUN_141edede0(param_1 + 0x50,0);
  return;
}



// FUNCTION 1408bf340 FUN_1408bf340 body=70 status=ok
// SIG undefined FUN_1408bf340(void)

void FUN_1408bf340(longlong param_1)

{
  FUN_142384dc0();
  *(undefined8 *)(param_1 + 0x718) = 0;
  *(undefined4 *)(param_1 + 0x72c) = 0;
  *(undefined4 *)(param_1 + 0x758) = 0;
  if (*(int *)(param_1 + 0x75c) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x750,0);
  }
  FUN_141edede0(param_1 + 0x648,0);
  return;
}



// FUNCTION 1408bf390 FUN_1408bf390 body=166 status=ok
// SIG undefined FUN_1408bf390(void)

void FUN_1408bf390(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  FUN_1417502d0();
  FUN_141edf360(param_1 + 0x140);
  FUN_141edede0(param_1 + 0x180,0);
  *(undefined8 *)(param_1 + 0x58) = 0;
  iVar2 = *(int *)(param_1 + 0x70);
  if (iVar2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x68) + 0x10;
    do {
      FUntypedBulkData::~FUntypedBulkData(lVar1);
      lVar1 = lVar1 + 0x80;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(int *)(param_1 + 0x74) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<128,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x68,0);
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(int *)(param_1 + 0x84) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x78,0);
  }
  return;
}



// FUNCTION 1408bf440 BlockTillAllRequestsFinished body=955 status=ok
// SIG undefined BlockTillAllRequestsFinished(void)

uint FGeometryCacheStreamingManager::BlockTillAllRequestsFinished(longlong param_1,float param_2)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  double dVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  LARGE_INTEGER local_res20;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  uint uStack_90;
  int iStack_8c;
  undefined1 local_88 [16];
  longlong *local_78;
  undefined2 local_70;
  longlong *local_68;
  uint uStack_60;
  uint uStack_5c;
  uint *puStack_58;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  
  plVar1 = (longlong *)(param_1 + 0x18);
  uVar9 = 0;
  local_40._0_4_ = SUB84(plVar1,0);
  local_40._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  local_78 = plVar1;
  local_68 = plVar1;
  local_40 = plVar1;
  if (param_2 == 0.0) {
    iVar2 = *(int *)(param_1 + 0x40);
    puStack_58 = (uint *)(param_1 + 0x28);
    local_a8 = 0;
    uStack_a4 = 1;
    local_98._4_4_ = 0;
    uStack_90 = 0;
    if (iVar2 != 0) {
      puVar10 = *(uint **)(param_1 + 0x38);
      if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
        puVar10 = puStack_58;
      }
      uVar8 = *puVar10;
      local_a8 = uVar9;
      uStack_90 = uVar9;
      while (uVar8 == 0) {
        lVar7 = (longlong)(int)local_a8;
        uStack_90 = uStack_90 + 0x20;
        uVar8 = local_a8 + 1;
        bVar3 = (int)((iVar2 + -1 >> 0x1f & 0x1fU) + iVar2 + -1) >> 5 <= (int)local_a8;
        local_a8 = uVar8;
        if (bVar3) goto LAB_1408bf520;
        uVar8 = puVar10[lVar7 + 1];
      }
      uStack_a4 = -uVar8 & uVar8;
      iVar6 = 0x1f;
      if (uStack_a4 != 0) {
        for (; uStack_a4 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      if (uStack_a4 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      local_98._4_4_ = (uStack_90 - iVar6) + 0x1f;
      if (iVar2 < local_98._4_4_) {
LAB_1408bf520:
        local_98._4_4_ = iVar2;
      }
    }
    auStack_50._4_4_ = local_98._4_4_;
    auStack_50._0_4_ = 0xffffffff;
    auStack_50._8_4_ = uStack_90;
    auStack_50._12_4_ = iStack_8c;
    uStack_60 = local_a8;
    uStack_5c = uStack_a4;
    local_70 = 0;
    uStack_90 = 0xffffffff;
    iStack_8c = local_98._4_4_;
    uStack_a0 = local_a8;
    uStack_9c = uStack_a4;
    local_88._8_4_ = (undefined4)local_40;
    local_88._0_8_ = auStack_50._8_8_;
    local_88._12_4_ = local_40._4_4_;
    bVar3 = local_98._4_4_ < *(int *)(param_1 + 0x40);
    local_98 = puStack_58;
    if (bVar3) {
      do {
        FUN_1408bf800(*(undefined8 *)(*plVar1 + 8 + (longlong)iStack_8c * 0x18),0);
        uStack_90 = uStack_90 & ~uStack_9c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
      } while (iStack_8c < (int)local_98[6]);
      if (((char)local_70 != '\0') && (local_70._1_1_ != '\0')) {
        TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34),1);
        uVar9 = 0;
      }
    }
  }
  else {
    QueryPerformanceCounter(&local_res20);
    puStack_58 = (uint *)(param_1 + 0x28);
    iVar2 = *(int *)(param_1 + 0x40);
    local_a8 = 0;
    uStack_a4 = 1;
    local_98._4_4_ = 0;
    uStack_90 = 0;
    dVar4 = (double)local_res20.QuadPart * DAT_1468b02f8;
    if (iVar2 != 0) {
      puVar10 = *(uint **)(param_1 + 0x38);
      if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
        puVar10 = puStack_58;
      }
      uVar8 = *puVar10;
      local_a8 = uVar9;
      uStack_90 = uVar9;
      while (uVar8 == 0) {
        lVar7 = (longlong)(int)local_a8;
        uStack_90 = uStack_90 + 0x20;
        uVar8 = local_a8 + 1;
        bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_a8;
        local_a8 = uVar8;
        if (bVar3) goto LAB_1408bf6cf;
        uVar8 = puVar10[lVar7 + 1];
      }
      uStack_a4 = -uVar8 & uVar8;
      iVar6 = 0x1f;
      if (uStack_a4 != 0) {
        for (; uStack_a4 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      if (uStack_a4 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      local_98._4_4_ = (uStack_90 - iVar6) + 0x1f;
      if (iVar2 < local_98._4_4_) {
LAB_1408bf6cf:
        local_98._4_4_ = iVar2;
      }
    }
    auStack_50._4_4_ = local_98._4_4_;
    auStack_50._0_4_ = 0xffffffff;
    auStack_50._8_4_ = uStack_90;
    auStack_50._12_4_ = iStack_8c;
    uStack_60 = local_a8;
    uStack_5c = uStack_a4;
    local_70 = 0;
    uStack_90 = 0xffffffff;
    iStack_8c = local_98._4_4_;
    uStack_a0 = local_a8;
    uStack_9c = uStack_a4;
    local_88._8_4_ = (undefined4)local_40;
    local_88._0_8_ = auStack_50._8_8_;
    local_88._12_4_ = local_40._4_4_;
    bVar3 = local_98._4_4_ < *(int *)(param_1 + 0x40);
    local_98 = puStack_58;
    if (bVar3) {
      do {
        iVar2 = iStack_8c;
        QueryPerformanceCounter(&local_res20);
        if ((float)((dVar4 + 16777216.0 + (double)param_2) -
                   ((double)local_res20.QuadPart * DAT_1468b02f8 + 16777216.0)) < 0.001) {
LAB_1408bf7ae:
          uVar9 = 1;
          break;
        }
        cVar5 = FUN_1408bf800(*(undefined8 *)(*plVar1 + 8 + (longlong)iVar2 * 0x18));
        if (cVar5 == '\0') goto LAB_1408bf7ae;
        uStack_90 = uStack_90 & ~uStack_9c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
      } while (iStack_8c < (int)local_98[6]);
      if (((char)local_70 != '\0') && (local_70._1_1_ != '\0')) {
        TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34),1);
      }
    }
  }
  return uVar9;
}



// FUNCTION 1408bf800 FUN_1408bf800 body=1066 status=ok
// SIG undefined FUN_1408bf800(void)

undefined8 FUN_1408bf800(longlong param_1,float param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  double dVar5;
  BOOL BVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 uVar10;
  uint *puVar11;
  LARGE_INTEGER local_res8;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  undefined8 local_a8;
  uint uStack_a0;
  int iStack_9c;
  undefined1 local_98 [16];
  longlong *local_88;
  undefined2 local_80;
  longlong *local_78;
  uint uStack_70;
  uint uStack_6c;
  uint *puStack_68;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  
  BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc0));
  if (BVar6 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc0));
  }
  plVar1 = (longlong *)(param_1 + 0x30);
  local_50._0_4_ = SUB84(plVar1,0);
  local_50._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  local_88 = plVar1;
  local_78 = plVar1;
  local_50 = plVar1;
  if (param_2 == 0.0) {
    iVar2 = *(int *)(param_1 + 0x58);
    puStack_68 = (uint *)(param_1 + 0x40);
    local_b8 = 0;
    uStack_b4 = 1;
    local_a8._4_4_ = 0;
    uStack_a0 = 0;
    if (iVar2 != 0) {
      puVar11 = *(uint **)(param_1 + 0x50);
      if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
        puVar11 = puStack_68;
      }
      uVar8 = *puVar11;
      local_b8 = 0;
      uStack_a0 = 0;
      while (uVar8 == 0) {
        lVar9 = (longlong)(int)local_b8;
        uStack_a0 = uStack_a0 + 0x20;
        uVar8 = local_b8 + 1;
        bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_b8;
        local_b8 = uVar8;
        if (bVar4) goto LAB_1408bf90f;
        uVar8 = puVar11[lVar9 + 1];
      }
      uStack_b4 = -uVar8 & uVar8;
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
      local_a8._4_4_ = (uStack_a0 - iVar7) + 0x1f;
      if (iVar2 < local_a8._4_4_) {
LAB_1408bf90f:
        local_a8._4_4_ = iVar2;
      }
    }
    auStack_60._4_4_ = local_a8._4_4_;
    auStack_60._0_4_ = 0xffffffff;
    auStack_60._8_4_ = uStack_a0;
    auStack_60._12_4_ = iStack_9c;
    uStack_70 = local_b8;
    uStack_6c = uStack_b4;
    local_80 = 0;
    uStack_a0 = 0xffffffff;
    iStack_9c = local_a8._4_4_;
    uStack_b0 = local_b8;
    uStack_ac = uStack_b4;
    local_98._8_4_ = (undefined4)local_50;
    local_98._0_8_ = auStack_60._8_8_;
    local_98._12_4_ = local_50._4_4_;
    bVar4 = *(int *)(param_1 + 0x58) <= local_a8._4_4_;
    local_a8 = puStack_68;
    if (bVar4) goto LAB_1408bf9da;
    do {
      plVar3 = *(longlong **)(*plVar1 + 0x18 + (longlong)iStack_9c * 0x28);
      if (plVar3 != (longlong *)0x0) {
        if (*(char *)((longlong)plVar3 + 0x71) == '\0') {
          (**(code **)(*plVar3 + 8))(plVar3,0);
        }
        FUN_1408c9410(param_1);
      }
      uStack_a0 = uStack_a0 & ~uStack_ac;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_b0);
    } while (iStack_9c < (int)local_a8[6]);
  }
  else {
    QueryPerformanceCounter(&local_res8);
    puStack_68 = (uint *)(param_1 + 0x40);
    iVar2 = *(int *)(param_1 + 0x58);
    local_b8 = 0;
    uStack_b4 = 1;
    dVar5 = (double)local_res8.QuadPart * DAT_1468b02f8;
    local_a8._4_4_ = 0;
    uStack_a0 = 0;
    if (iVar2 != 0) {
      puVar11 = *(uint **)(param_1 + 0x50);
      if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
        puVar11 = puStack_68;
      }
      uVar8 = *puVar11;
      local_b8 = 0;
      uStack_a0 = 0;
      while (uVar8 == 0) {
        lVar9 = (longlong)(int)local_b8;
        uStack_a0 = uStack_a0 + 0x20;
        uVar8 = local_b8 + 1;
        bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_b8;
        local_b8 = uVar8;
        if (bVar4) goto LAB_1408bfaff;
        uVar8 = puVar11[lVar9 + 1];
      }
      uStack_b4 = -uVar8 & uVar8;
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
      local_a8._4_4_ = (uStack_a0 - iVar7) + 0x1f;
      if (iVar2 < local_a8._4_4_) {
LAB_1408bfaff:
        local_a8._4_4_ = iVar2;
      }
    }
    auStack_60._4_4_ = local_a8._4_4_;
    auStack_60._0_4_ = 0xffffffff;
    auStack_60._8_4_ = uStack_a0;
    auStack_60._12_4_ = iStack_9c;
    uStack_70 = local_b8;
    uStack_6c = uStack_b4;
    local_80 = 0;
    uStack_b0 = local_b8;
    uStack_ac = uStack_b4;
    uStack_a0 = 0xffffffff;
    iStack_9c = local_a8._4_4_;
    local_98._8_4_ = (undefined4)local_50;
    local_98._0_8_ = auStack_60._8_8_;
    local_98._12_4_ = local_50._4_4_;
    bVar4 = *(int *)(param_1 + 0x58) <= local_a8._4_4_;
    local_a8 = puStack_68;
    if (bVar4) goto LAB_1408bf9da;
    do {
      lVar9 = (longlong)iStack_9c;
      if (*(longlong *)(*plVar1 + 0x18 + lVar9 * 0x28) != 0) {
        QueryPerformanceCounter(&local_res8);
        if ((float)((dVar5 + 16777216.0 + (double)param_2) -
                   ((double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0)) < 0.001) {
LAB_1408bfc04:
          if (((char)local_80 != '\0') && (local_80._1_1_ != '\0')) {
            TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
            ::ConditionalRehash(local_88,(int)local_88[1] - *(int *)((longlong)local_88 + 0x34),1);
          }
          uVar10 = 0;
          goto LAB_1408bf9dd;
        }
        plVar3 = *(longlong **)(*plVar1 + 0x18 + lVar9 * 0x28);
        if (*(char *)((longlong)plVar3 + 0x71) == '\0') {
          (**(code **)(*plVar3 + 8))(plVar3);
          if (*(char *)((longlong)plVar3 + 0x71) == '\0') goto LAB_1408bfc04;
        }
        FUN_1408c9410(param_1);
      }
      uStack_a0 = uStack_a0 & ~uStack_ac;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_b0);
    } while (iStack_9c < (int)local_a8[6]);
  }
  if (((char)local_80 != '\0') && (local_80._1_1_ != '\0')) {
    TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
    ::ConditionalRehash(local_88,(int)local_88[1] - *(int *)((longlong)local_88 + 0x34),1);
    local_a8 = local_a8;
  }
LAB_1408bf9da:
  uVar10 = 1;
LAB_1408bf9dd:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc0));
  return uVar10;
}



// FUNCTION 1408bfc30 FUN_1408bfc30 body=30 status=ok
// SIG undefined FUN_1408bfc30(void)

undefined8 FUN_1408bfc30(longlong param_1,undefined8 param_2)

{
  FBoxSphereBounds::TransformBy(param_1 + 0x734);
  return param_2;
}



// FUNCTION 1408bfc50 FUN_1408bfc50 body=74 status=ok
// SIG undefined FUN_1408bfc50(void)

undefined8 FUN_1408bfc50(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 uStack_c;
  
  uVar2 = *param_3;
  lVar3 = *param_1;
  lVar4 = param_1[1];
  puVar5 = (undefined8 *)operator_new(0x18);
  uVar6 = 0;
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = 0;
    puVar5[1] = uVar2;
    puVar5[2] = CONCAT44(uStack_c,(int)lVar4);
    LOCK();
    puVar1 = *(undefined8 **)(lVar3 + 0xb0);
    *(undefined8 **)(lVar3 + 0xb0) = puVar5;
    UNLOCK();
    LOCK();
    uVar6 = *puVar1;
    *puVar1 = puVar5;
    UNLOCK();
  }
  return uVar6;
}



// FUNCTION 1408bfcb0 CountTotalCodewords body=322 status=ok
// SIG undefined CountTotalCodewords(void)

void FHuffmanTable::CountTotalCodewords(longlong param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x9d0) = 0;
  *(int *)(param_1 + 0x9d0) = *(int *)(param_1 + 0x34);
  iVar1 = *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x34);
  *(int *)(param_1 + 0x9d0) = iVar1;
  iVar1 = *(int *)(param_1 + 0x3c) + iVar1;
  *(int *)(param_1 + 0x9d0) = iVar1;
  iVar1 = *(int *)(param_1 + 0x40) + iVar1;
  *(int *)(param_1 + 0x9d0) = iVar1;
  iVar1 = *(int *)(param_1 + 0x44) + iVar1;
  *(int *)(param_1 + 0x9d0) = iVar1;
  iVar1 = *(int *)(param_1 + 0x48) + iVar1;
  *(int *)(param_1 + 0x9d0) = iVar1;
  iVar1 = *(int *)(param_1 + 0x4c) + iVar1;
  *(int *)(param_1 + 0x9d0) = iVar1;
  iVar1 = *(int *)(param_1 + 0x50) + iVar1;
  *(int *)(param_1 + 0x9d0) = iVar1;
  iVar1 = *(int *)(param_1 + 0x54) + iVar1;
  *(int *)(param_1 + 0x9d0) = iVar1;
  iVar1 = *(int *)(param_1 + 0x58) + iVar1;
  *(int *)(param_1 + 0x9d0) = iVar1;
  iVar1 = *(int *)(param_1 + 0x5c) + iVar1;
  *(int *)(param_1 + 0x9d0) = iVar1;
  iVar1 = *(int *)(param_1 + 0x60) + iVar1;
  *(int *)(param_1 + 0x9d0) = iVar1;
  iVar1 = *(int *)(param_1 + 100) + iVar1;
  *(int *)(param_1 + 0x9d0) = iVar1;
  iVar1 = *(int *)(param_1 + 0x68) + iVar1;
  *(int *)(param_1 + 0x9d0) = iVar1;
  iVar1 = *(int *)(param_1 + 0x6c) + iVar1;
  *(int *)(param_1 + 0x9d0) = iVar1;
  iVar1 = *(int *)(param_1 + 0x70) + iVar1;
  *(int *)(param_1 + 0x9d0) = iVar1;
  iVar1 = *(int *)(param_1 + 0x74) + iVar1;
  *(int *)(param_1 + 0x9d0) = iVar1;
  iVar1 = *(int *)(param_1 + 0x78) + iVar1;
  *(int *)(param_1 + 0x9d0) = iVar1;
  iVar1 = *(int *)(param_1 + 0x7c) + iVar1;
  *(int *)(param_1 + 0x9d0) = iVar1;
  iVar1 = *(int *)(param_1 + 0x80) + iVar1;
  *(int *)(param_1 + 0x9d0) = iVar1;
  iVar1 = *(int *)(param_1 + 0x84) + iVar1;
  *(int *)(param_1 + 0x9d0) = iVar1;
  iVar1 = *(int *)(param_1 + 0x88) + iVar1;
  *(int *)(param_1 + 0x9d0) = iVar1;
  *(int *)(param_1 + 0x9d0) = *(int *)(param_1 + 0x8c) + iVar1;
  return;
}



// FUNCTION 1408bfe00 FUN_1408bfe00 body=78 status=ok
// SIG undefined FUN_1408bfe00(void)

undefined8 * FUN_1408bfe00(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    FGeometryCacheCodecRenderStateBase::FGeometryCacheCodecRenderStateBase(puVar1,param_1 + 0x28);
    *puVar1 = &PTR_FUN_14412dae8;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1408bfe50 CreateRenderState body=139 status=ok
// SIG undefined CreateRenderState(void)

undefined8 * UGeometryCacheCodecV1::CreateRenderState(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  FGeometryCacheCodecRenderStateBase::FGeometryCacheCodecRenderStateBase(puVar1,param_1 + 0x28);
  *puVar1 = &PTR__scalar_deleting_destructor__14412dd98;
  puVar2 = (undefined8 *)operator_new(0x4ed8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR__scalar_deleting_destructor__14412c170;
    FCodecV1DecodingContext::FCodecV1DecodingContext(puVar2 + 1);
    puVar1[3] = puVar2;
    return puVar1;
  }
  puVar1[3] = 0;
  return puVar1;
}



// FUNCTION 1408bfee0 CreateSceneProxy body=46 status=ok
// SIG undefined CreateSceneProxy(void)

void UModelComponent::CreateSceneProxy(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x3d0);
  if (lVar1 != 0) {
    FUN_1408baf70(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 1408bff10 FUN_1408bff10 body=332 status=ok
// SIG undefined FUN_1408bff10(void)

undefined8 * FUN_1408bff10(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_14412e3e0;
  *(undefined1 *)(plVar6 + 9) = 0;
  plVar6[10] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 1408c0060 Decode body=266 status=ok
// SIG undefined Decode(void)

ulonglong FHuffmanTable::Decode(longlong param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  lVar6 = (longlong)(int)param_2[2];
  uVar4 = *(uint *)((longlong)param_2 + 0x14);
  uVar7 = 8;
  uVar8 = 0;
  uVar10 = uVar4;
  do {
    lVar3 = lVar6 + 1;
    uVar2 = 8;
    if (uVar10 != 0) {
      lVar3 = lVar6;
      uVar2 = uVar10;
    }
    lVar6 = lVar3;
    uVar1 = uVar7;
    if (uVar2 <= uVar7) {
      uVar1 = uVar2;
    }
    if (lVar6 < (int)param_2[1]) {
      uVar9 = (uint)*(byte *)(lVar6 + *param_2);
    }
    else {
      uVar9 = 0;
    }
    uVar10 = uVar2 - uVar1;
    uVar8 = uVar8 << ((byte)uVar1 & 0x1f) |
            (1 << ((byte)uVar1 & 0x1f)) - 1U & uVar9 >> ((byte)uVar10 & 0x1f);
    uVar7 = uVar7 - uVar1;
  } while (uVar7 != 0);
  uVar10 = *(uint *)(param_1 + 0x1d0 + (longlong)(int)uVar8 * 8);
  if (uVar10 == 0) {
    uVar5 = LongDecode(param_1,param_2,9);
  }
  else {
    do {
      if (uVar4 == 0) {
        *(int *)(param_2 + 2) = (int)param_2[2] + 1;
        uVar4 = 8;
      }
      uVar7 = uVar10;
      if (uVar4 <= uVar10) {
        uVar7 = uVar4;
      }
      uVar4 = uVar4 - uVar7;
      uVar10 = uVar10 - uVar7;
    } while (uVar10 != 0);
    *(uint *)((longlong)param_2 + 0x14) = uVar4;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x1d4 + (longlong)(int)uVar8 * 8);
  }
  return uVar5;
}



// FUNCTION 1408c0170 DecodeColorStream body=1866 status=ok
// SIG undefined DecodeColorStream(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FCodecV1Decoder::DecodeColorStream
               (longlong param_1,undefined1 *param_2,longlong param_3,uint param_4)

{
  longlong lVar1;
  int *piVar2;
  byte bVar3;
  longlong *plVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auStack_128 [32];
  longlong local_108;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  undefined1 *local_f0;
  ulonglong local_e8;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  longlong local_d0;
  undefined1 local_c8 [80];
  undefined1 *local_78;
  uint local_70;
  undefined8 local_6c;
  uint local_64;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  lVar12 = 5;
  local_78 = (undefined1 *)0x0;
  local_6c = 0;
  local_64 = 0;
  local_70 = 0;
  local_108 = param_1;
  local_f0 = param_2;
  local_d0 = param_3;
  TArray<FIntVector4,TInlineAllocator<5,FDefaultAllocator>_>::ResizeTo(local_c8,5);
  puVar8 = local_78;
  uVar17 = local_70;
  do {
    local_70 = uVar17 + 1;
    if ((int)local_6c < (int)(uVar17 + 1)) {
      TArray<FIntVector4,TInlineAllocator<5,FDefaultAllocator>_>::ResizeGrow(local_c8,uVar17);
      puVar8 = local_78;
    }
    puVar7 = local_c8;
    if (puVar8 != (undefined1 *)0x0) {
      puVar7 = puVar8;
    }
    puVar9 = (undefined8 *)(puVar7 + (longlong)(int)uVar17 * 0x10);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = 0x8000000080;
      puVar9[1] = User32Reserved;
      puVar8 = local_78;
    }
    lVar12 = lVar12 + -1;
    uVar17 = local_70;
  } while (lVar12 != 0);
  uVar5 = (ulonglong)param_4;
  if (param_4 != 0) {
    do {
      local_e8 = uVar5;
      lVar12 = local_108;
      uVar17 = 0;
      iVar16 = 0;
      iVar6 = iVar16;
      if (local_70 == 0) {
        iVar6 = -1;
      }
      plVar4 = *(longlong **)(param_1 + 0x10);
      iVar11 = 0;
      uVar13 = *(uint *)((longlong)plVar4 + 0x14);
      iVar15 = (int)plVar4[2];
      uVar18 = 1;
      puVar7 = local_c8;
      if (puVar8 != (undefined1 *)0x0) {
        puVar7 = puVar8;
      }
      piVar2 = (int *)(puVar7 + (longlong)(int)((uint)(local_6c._4_4_ + iVar6) % local_70) * 0x10);
      local_e0 = *piVar2;
      iStack_dc = piVar2[1];
      iStack_d8 = piVar2[2];
      iStack_d4 = piVar2[3];
      do {
        if (uVar13 == 0) {
          iVar15 = iVar15 + 1;
          *(undefined4 *)((longlong)plVar4 + 0x14) = 8;
          *(int *)(plVar4 + 2) = iVar15;
          uVar13 = 8;
        }
        uVar10 = uVar18;
        if (uVar13 <= uVar18) {
          uVar10 = uVar13;
        }
        uVar13 = uVar13 - uVar10;
        bVar3 = *(byte *)((longlong)iVar15 + *plVar4);
        *(uint *)((longlong)plVar4 + 0x14) = uVar13;
        uVar17 = (uint)(bVar3 >> ((byte)uVar13 & 0x1f)) & (1 << ((byte)uVar10 & 0x1f)) - 1U |
                 uVar17 << ((byte)uVar10 & 0x1f);
        uVar18 = uVar18 - uVar10;
      } while (uVar18 != 0);
      iVar6 = iVar11;
      iVar15 = iVar11;
      if (uVar17 != 1) {
        lVar1 = local_108 + 0x13c8;
        iVar6 = FHuffmanTable::Decode(lVar1,*(undefined8 *)(local_108 + 0x10));
        if (iVar6 == 0x20) {
          iVar16 = 0;
        }
        else {
          plVar4 = *(longlong **)(lVar12 + 0x10);
          if (iVar6 < 0x21) {
            uVar13 = 0;
            uVar17 = 0x1f - iVar6;
            if (uVar17 != 0) {
              uVar18 = *(uint *)((longlong)plVar4 + 0x14);
              iVar6 = (int)plVar4[2];
              uVar10 = uVar17;
              do {
                if (uVar18 == 0) {
                  iVar6 = iVar6 + 1;
                  *(undefined4 *)((longlong)plVar4 + 0x14) = 8;
                  *(int *)(plVar4 + 2) = iVar6;
                  uVar18 = 8;
                }
                uVar14 = uVar10;
                if (uVar18 <= uVar10) {
                  uVar14 = uVar18;
                }
                uVar18 = uVar18 - uVar14;
                bVar3 = *(byte *)((longlong)iVar6 + *plVar4);
                *(uint *)((longlong)plVar4 + 0x14) = uVar18;
                uVar13 = (uint)(bVar3 >> ((byte)uVar18 & 0x1f)) & (1 << ((byte)uVar14 & 0x1f)) - 1U
                         | uVar13 << ((byte)uVar14 & 0x1f);
                uVar10 = uVar10 - uVar14;
              } while (uVar10 != 0);
            }
            iVar16 = -(1 << ((byte)uVar17 & 0x1f)) - uVar13;
          }
          else {
            uVar13 = iVar6 - 0x21;
            uVar17 = 0;
            if (uVar13 != 0) {
              uVar18 = *(uint *)((longlong)plVar4 + 0x14);
              iVar6 = (int)plVar4[2];
              uVar10 = uVar13;
              do {
                if (uVar18 == 0) {
                  iVar6 = iVar6 + 1;
                  *(undefined4 *)((longlong)plVar4 + 0x14) = 8;
                  *(int *)(plVar4 + 2) = iVar6;
                  uVar18 = 8;
                }
                uVar14 = uVar10;
                if (uVar18 <= uVar10) {
                  uVar14 = uVar18;
                }
                uVar18 = uVar18 - uVar14;
                bVar3 = *(byte *)((longlong)iVar6 + *plVar4);
                *(uint *)((longlong)plVar4 + 0x14) = uVar18;
                uVar17 = (uint)(bVar3 >> ((byte)uVar18 & 0x1f)) & (1 << ((byte)uVar14 & 0x1f)) - 1U
                         | uVar17 << ((byte)uVar14 & 0x1f);
                uVar10 = uVar10 - uVar14;
              } while (uVar10 != 0);
            }
            iVar16 = (1 << ((byte)uVar13 & 0x1f)) + uVar17;
          }
        }
        iVar6 = FHuffmanTable::Decode(lVar1,*(undefined8 *)(lVar12 + 0x10));
        if (iVar6 == 0x20) {
          iVar11 = 0;
        }
        else {
          plVar4 = *(longlong **)(lVar12 + 0x10);
          if (iVar6 < 0x21) {
            uVar17 = 0;
            uVar13 = 0x1f - iVar6;
            if (uVar13 != 0) {
              uVar18 = *(uint *)((longlong)plVar4 + 0x14);
              iVar6 = (int)plVar4[2];
              uVar10 = uVar13;
              do {
                if (uVar18 == 0) {
                  iVar6 = iVar6 + 1;
                  *(undefined4 *)((longlong)plVar4 + 0x14) = 8;
                  *(int *)(plVar4 + 2) = iVar6;
                  uVar18 = 8;
                }
                uVar14 = uVar10;
                if (uVar18 <= uVar10) {
                  uVar14 = uVar18;
                }
                uVar18 = uVar18 - uVar14;
                bVar3 = *(byte *)((longlong)iVar6 + *plVar4);
                *(uint *)((longlong)plVar4 + 0x14) = uVar18;
                uVar17 = (uint)(bVar3 >> ((byte)uVar18 & 0x1f)) & (1 << ((byte)uVar14 & 0x1f)) - 1U
                         | uVar17 << ((byte)uVar14 & 0x1f);
                uVar10 = uVar10 - uVar14;
              } while (uVar10 != 0);
            }
            iVar11 = -(1 << ((byte)uVar13 & 0x1f)) - uVar17;
          }
          else {
            uVar13 = iVar6 - 0x21;
            uVar17 = 0;
            if (uVar13 != 0) {
              uVar18 = *(uint *)((longlong)plVar4 + 0x14);
              iVar6 = (int)plVar4[2];
              uVar10 = uVar13;
              do {
                if (uVar18 == 0) {
                  iVar6 = iVar6 + 1;
                  *(undefined4 *)((longlong)plVar4 + 0x14) = 8;
                  *(int *)(plVar4 + 2) = iVar6;
                  uVar18 = 8;
                }
                uVar14 = uVar10;
                if (uVar18 <= uVar10) {
                  uVar14 = uVar18;
                }
                uVar18 = uVar18 - uVar14;
                bVar3 = *(byte *)((longlong)iVar6 + *plVar4);
                *(uint *)((longlong)plVar4 + 0x14) = uVar18;
                uVar17 = (uint)(bVar3 >> ((byte)uVar18 & 0x1f)) & (1 << ((byte)uVar14 & 0x1f)) - 1U
                         | uVar17 << ((byte)uVar14 & 0x1f);
                uVar10 = uVar10 - uVar14;
              } while (uVar10 != 0);
            }
            iVar11 = (1 << ((byte)uVar13 & 0x1f)) + uVar17;
          }
        }
        iVar6 = FHuffmanTable::Decode(lVar1,*(undefined8 *)(lVar12 + 0x10));
        if (iVar6 == 0x20) {
          iVar6 = 0;
        }
        else {
          plVar4 = *(longlong **)(lVar12 + 0x10);
          if (iVar6 < 0x21) {
            uVar17 = 0;
            uVar13 = 0x1f - iVar6;
            if (uVar13 != 0) {
              uVar18 = *(uint *)((longlong)plVar4 + 0x14);
              iVar6 = (int)plVar4[2];
              uVar10 = uVar13;
              do {
                if (uVar18 == 0) {
                  iVar6 = iVar6 + 1;
                  *(undefined4 *)((longlong)plVar4 + 0x14) = 8;
                  *(int *)(plVar4 + 2) = iVar6;
                  uVar18 = 8;
                }
                uVar14 = uVar10;
                if (uVar18 <= uVar10) {
                  uVar14 = uVar18;
                }
                uVar18 = uVar18 - uVar14;
                bVar3 = *(byte *)((longlong)iVar6 + *plVar4);
                *(uint *)((longlong)plVar4 + 0x14) = uVar18;
                uVar17 = (uint)(bVar3 >> ((byte)uVar18 & 0x1f)) & (1 << ((byte)uVar14 & 0x1f)) - 1U
                         | uVar17 << ((byte)uVar14 & 0x1f);
                uVar10 = uVar10 - uVar14;
                lVar12 = local_108;
              } while (uVar10 != 0);
            }
            iVar6 = -(1 << ((byte)uVar13 & 0x1f)) - uVar17;
          }
          else {
            uVar13 = iVar6 - 0x21;
            uVar17 = 0;
            if (uVar13 != 0) {
              uVar18 = *(uint *)((longlong)plVar4 + 0x14);
              iVar6 = (int)plVar4[2];
              uVar10 = uVar13;
              do {
                if (uVar18 == 0) {
                  iVar6 = iVar6 + 1;
                  *(undefined4 *)((longlong)plVar4 + 0x14) = 8;
                  *(int *)(plVar4 + 2) = iVar6;
                  uVar18 = 8;
                }
                uVar14 = uVar10;
                if (uVar18 <= uVar10) {
                  uVar14 = uVar18;
                }
                uVar18 = uVar18 - uVar14;
                bVar3 = *(byte *)((longlong)iVar6 + *plVar4);
                *(uint *)((longlong)plVar4 + 0x14) = uVar18;
                uVar17 = (uint)(bVar3 >> ((byte)uVar18 & 0x1f)) & (1 << ((byte)uVar14 & 0x1f)) - 1U
                         | uVar17 << ((byte)uVar14 & 0x1f);
                uVar10 = uVar10 - uVar14;
                lVar12 = local_108;
              } while (uVar10 != 0);
            }
            iVar6 = (1 << ((byte)uVar13 & 0x1f)) + uVar17;
          }
        }
        iVar15 = FHuffmanTable::Decode(lVar1);
        if (iVar15 == 0x20) {
          iVar15 = 0;
        }
        else {
          plVar4 = *(longlong **)(lVar12 + 0x10);
          if (iVar15 < 0x21) {
            uVar17 = 0;
            uVar13 = 0x1f - iVar15;
            if (uVar13 != 0) {
              uVar18 = *(uint *)((longlong)plVar4 + 0x14);
              iVar15 = (int)plVar4[2];
              uVar10 = uVar13;
              do {
                if (uVar18 == 0) {
                  iVar15 = iVar15 + 1;
                  *(undefined4 *)((longlong)plVar4 + 0x14) = 8;
                  *(int *)(plVar4 + 2) = iVar15;
                  uVar18 = 8;
                }
                uVar14 = uVar10;
                if (uVar18 <= uVar10) {
                  uVar14 = uVar18;
                }
                uVar18 = uVar18 - uVar14;
                bVar3 = *(byte *)((longlong)iVar15 + *plVar4);
                *(uint *)((longlong)plVar4 + 0x14) = uVar18;
                uVar17 = (uint)(bVar3 >> ((byte)uVar18 & 0x1f)) & (1 << ((byte)uVar14 & 0x1f)) - 1U
                         | uVar17 << ((byte)uVar14 & 0x1f);
                uVar10 = uVar10 - uVar14;
              } while (uVar10 != 0);
            }
            iVar15 = -(1 << ((byte)uVar13 & 0x1f)) - uVar17;
          }
          else {
            uVar13 = iVar15 - 0x21;
            uVar17 = 0;
            if (uVar13 != 0) {
              uVar18 = *(uint *)((longlong)plVar4 + 0x14);
              iVar15 = (int)plVar4[2];
              uVar10 = uVar13;
              do {
                if (uVar18 == 0) {
                  iVar15 = iVar15 + 1;
                  *(undefined4 *)((longlong)plVar4 + 0x14) = 8;
                  *(int *)(plVar4 + 2) = iVar15;
                  uVar18 = 8;
                }
                uVar14 = uVar10;
                if (uVar18 <= uVar10) {
                  uVar14 = uVar18;
                }
                uVar18 = uVar18 - uVar14;
                bVar3 = *(byte *)((longlong)iVar15 + *plVar4);
                *(uint *)((longlong)plVar4 + 0x14) = uVar18;
                uVar17 = (uint)(bVar3 >> ((byte)uVar18 & 0x1f)) & (1 << ((byte)uVar14 & 0x1f)) - 1U
                         | uVar17 << ((byte)uVar14 & 0x1f);
                uVar10 = uVar10 - uVar14;
              } while (uVar10 != 0);
            }
            iVar15 = (1 << ((byte)uVar13 & 0x1f)) + uVar17;
          }
        }
      }
      local_100 = local_e0 + iVar16;
      local_f0[2] = (undefined1)local_100;
      iStack_fc = iStack_dc + iVar11;
      local_f0[1] = (undefined1)iStack_fc;
      iStack_f8 = iStack_d8 + iVar6;
      *local_f0 = (undefined1)iStack_f8;
      iStack_f4 = iStack_d4 + iVar15;
      local_f0[3] = (char)iStack_f4;
      local_64 = (local_64 + 1) % local_70;
      uVar17 = (local_6c._4_4_ + -1 + local_70) % local_70;
      local_6c = CONCAT44(uVar17,(int)local_6c);
      puVar8 = local_c8;
      if (local_78 != (undefined1 *)0x0) {
        puVar8 = local_78;
      }
      local_f0 = local_f0 + local_d0;
      piVar2 = (int *)(puVar8 + (longlong)(int)uVar17 * 0x10);
      *piVar2 = local_100;
      piVar2[1] = iStack_fc;
      piVar2[2] = iStack_f8;
      piVar2[3] = iStack_f4;
      puVar8 = local_78;
      param_1 = local_108;
      uVar5 = local_e8 - 1;
    } while (local_e8 - 1 != 0);
    local_e8 = 0;
  }
  if (puVar8 != (undefined1 *)0x0) {
    FMemory::Free(puVar8);
  }
  return;
}



// FUNCTION 1408c08c0 FUN_1408c08c0 body=1956 status=ok
// SIG undefined FUN_1408c08c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1408c08c0(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  DWORD DVar7;
  longlong lVar8;
  LARGE_INTEGER _Src;
  size_t _Size;
  longlong lVar9;
  undefined1 auStack_4f98 [32];
  longlong local_4f78;
  undefined8 local_4f70;
  int local_4f68;
  LARGE_INTEGER local_4f58;
  int local_4f50;
  int local_4f4c;
  void *local_4f48;
  int local_4f40;
  undefined4 local_4f3c;
  undefined4 local_4f38;
  undefined4 local_4f34;
  undefined1 local_4f30 [16];
  undefined8 local_4f18;
  undefined8 local_4f10;
  undefined8 local_4f08;
  undefined8 local_4f00;
  undefined8 local_4ef8;
  undefined8 local_4ef0;
  undefined8 local_4ee8;
  undefined8 local_4ee0;
  undefined8 local_4530;
  undefined8 local_4528;
  undefined8 local_4520;
  undefined8 local_4518;
  undefined8 local_4510;
  undefined8 local_4508;
  undefined8 local_3b58;
  undefined8 local_3b50;
  undefined8 local_3b48;
  undefined8 local_3b40;
  undefined8 local_3b38;
  undefined8 local_3b30;
  undefined8 local_3180;
  undefined8 local_3178;
  undefined8 local_3170;
  undefined8 local_3168;
  undefined8 local_3160;
  undefined8 local_3158;
  undefined8 local_27a8;
  undefined8 local_27a0;
  undefined8 local_2798;
  undefined8 local_2790;
  undefined8 local_2788;
  undefined8 local_2780;
  undefined8 local_1dd0;
  undefined8 local_1dc8;
  undefined8 local_1dc0;
  undefined8 local_1db8;
  undefined8 local_1db0;
  undefined8 local_1da8;
  undefined8 local_13f8;
  undefined8 local_13f0;
  undefined8 local_13e8;
  undefined8 local_13e0;
  undefined8 local_13d8;
  undefined8 local_13d0;
  undefined8 local_a20;
  undefined8 local_a18;
  undefined8 local_a10;
  undefined8 local_a08;
  undefined8 local_a00;
  undefined8 local_9f8;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_4f98;
  QueryPerformanceCounter(&local_4f58);
  local_4f30 = *(undefined1 (*) [16])(*(longlong *)(param_2 + 0x98) + *(longlong *)(param_2 + 0x90))
  ;
  *(longlong *)(param_2 + 0x98) = *(longlong *)(param_2 + 0x98) + 0x10;
  if (local_4f30._0_4_ != 0x7b) {
    return 0;
  }
  FUN_1408bddc0(param_2,param_3 + 0xc);
  FUN_1408bcfd0(param_2,param_3 + 0xe);
  local_4f08 = 0;
  local_4f18 = 0;
  local_4f10 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  local_4f00 = 0;
  local_4ef8 = 0;
  local_4ef0 = 0;
  local_4ee8 = 0;
  local_4ee0 = 0;
  local_4530 = 0;
  local_4528 = 0;
  local_4520 = 0;
  local_4518 = 0;
  local_4510 = 0;
  local_4508 = 0;
  local_3b58 = 0;
  local_3b50 = 0;
  local_3b48 = 0;
  local_3b40 = 0;
  local_3b38 = 0;
  local_3b30 = 0;
  local_3180 = 0;
  local_3178 = 0;
  local_3170 = 0;
  local_3168 = 0;
  local_3160 = 0;
  local_3158 = 0;
  local_27a8 = 0;
  local_27a0 = 0;
  local_2798 = 0;
  local_2790 = 0;
  local_2788 = 0;
  local_2780 = 0;
  local_1dd0 = 0;
  local_1dc8 = 0;
  local_1dc0 = 0;
  local_1db8 = 0;
  local_1db0 = 0;
  local_1da8 = 0;
  local_13f8 = 0;
  local_13f0 = 0;
  local_13e8 = 0;
  local_13e0 = 0;
  local_13d8 = 0;
  local_13d0 = 0;
  local_a20 = 0;
  local_a18 = 0;
  local_a10 = 0;
  local_a08 = 0;
  local_a00 = 0;
  local_9f8 = 0;
  FHuffmanTable::operator=(param_1 + 0x18,&local_4f08);
  FHuffmanTable::operator=(param_1 + 0x9f0,&local_4530);
  FHuffmanTable::operator=(param_1 + 0x13c8,&local_3b58);
  FHuffmanTable::operator=(param_1 + 0x1da0,&local_3180);
  FHuffmanTable::operator=(param_1 + 0x2778,&local_27a8);
  FHuffmanTable::operator=(param_1 + 0x3150,&local_1dd0);
  FHuffmanTable::operator=(param_1 + 0x3b28,&local_13f8);
  FHuffmanTable::operator=(param_1 + 0x4500,&local_a20);
  FCodecV1DecodingContext::~FCodecV1DecodingContext(&local_4f18);
  local_4f58.QuadPart = 0;
  local_4f4c = 0;
  *(longlong **)(param_1 + 8) = param_3;
  local_4f50 = local_4f30._4_4_;
  if (0 < (int)local_4f30._4_4_) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_4f58,0);
  }
  iVar3 = local_4f4c;
  iVar6 = local_4f50;
  _Src = local_4f58;
  _Size = (size_t)local_4f50;
  _guard_xfg_dispatch_icall_nop
            ((void *)local_4f58,
             (void *)(*(longlong *)(param_2 + 0x90) + *(longlong *)(param_2 + 0x98)),_Size);
  *(longlong *)(param_2 + 0x98) = *(longlong *)(param_2 + 0x98) + _Size;
  local_4f48 = (void *)0x0;
  local_4f3c = 0;
  local_4f40 = iVar6;
  if (iVar6 != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_4f48,iVar6,0);
    _guard_xfg_dispatch_icall_nop(local_4f48,(void *)_Src,_Size);
  }
  local_4f38 = 0xffffffff;
  local_4f34 = 0;
  local_4f50 = 0;
  if (iVar3 != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(&local_4f58,0);
    _Src = local_4f58;
  }
  *(void ***)(param_1 + 0x10) = &local_4f48;
  FCodecV1Decoder::ReadCodedStreamDescription(param_1);
  lVar9 = *(longlong *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  if (*(char *)(lVar9 + 0xa7) == '\0') {
    FHuffmanTable::Initialize(param_1 + 0x18,uVar2);
  }
  FHuffmanTable::Initialize(param_1 + 0x9f0,uVar2);
  FHuffmanTable::Initialize(param_1 + 0x3b28);
  if (*(char *)(lVar9 + 0xa3) != '\0') {
    FHuffmanTable::Initialize(param_1 + 0x13c8);
  }
  if (*(char *)(lVar9 + 0xa0) != '\0') {
    FHuffmanTable::Initialize(param_1 + 0x1da0);
  }
  if (*(char *)(lVar9 + 0xa1) != '\0') {
    FHuffmanTable::Initialize(param_1 + 0x2778);
  }
  if (*(char *)(lVar9 + 0xa2) != '\0') {
    FHuffmanTable::Initialize(param_1 + 0x3150);
  }
  if (*(char *)(lVar9 + 0xa4) != '\0') {
    FHuffmanTable::Initialize(param_1 + 0x4500);
  }
  plVar1 = param_3 + 0x12;
  lVar9 = 4;
  if (*(char *)((longlong)param_3 + 0xa7) == '\0') {
    uVar4 = local_4f30._8_4_;
    iVar6 = 0;
    *(undefined4 *)(param_3 + 0x13) = 0;
    if (*(int *)((longlong)param_3 + 0x9c) != local_4f30._8_4_) {
      TArray<float,FDefaultAllocator>::ResizeTo(plVar1,local_4f30._8_4_);
      iVar6 = (int)param_3[0x13];
    }
    iVar6 = iVar6 + uVar4;
    *(int *)(param_3 + 0x13) = iVar6;
    if (*(int *)((longlong)param_3 + 0x9c) < iVar6) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1);
    }
    FCodecV1Decoder::DecodeIndexStream(param_1,*plVar1,4,uVar4);
  }
  uVar4 = local_4f30._12_4_;
  lVar8 = (longlong)(int)local_4f30._12_4_;
  iVar6 = 0;
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) != local_4f30._12_4_) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_3);
    iVar6 = (int)param_3[1];
  }
  *(int *)(param_3 + 1) = iVar6 + uVar4;
  if (*(int *)((longlong)param_3 + 0xc) < iVar6 + uVar4) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_3);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*param_3 + (longlong)iVar6 * 0xc),0,lVar8 * 0xc);
  local_4f78 = *param_3;
  local_4f68 = uVar4;
  local_4f70 = 0xc;
  FCodecV1Decoder::DecodePositionStream(param_1,*plVar1,4,(int)param_3[0x13]);
  iVar6 = 0;
  *(undefined4 *)(param_3 + 9) = 0;
  if (*(int *)((longlong)param_3 + 0x4c) != uVar4) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_3 + 8);
    iVar6 = (int)param_3[9];
  }
  *(int *)(param_3 + 9) = uVar4 + iVar6;
  if (*(int *)((longlong)param_3 + 0x4c) < uVar4 + iVar6) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3 + 8);
  }
  _guard_xfg_dispatch_icall_nop((void *)(param_3[8] + (longlong)iVar6 * 4),0,lVar8 * 4);
  if (*(char *)((longlong)param_3 + 0xa3) != '\0') {
    FCodecV1Decoder::DecodeColorStream(param_1,param_3[8],4,uVar4);
  }
  iVar6 = 0;
  *(undefined4 *)(param_3 + 5) = 0;
  if (*(int *)((longlong)param_3 + 0x2c) != uVar4) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_3 + 4);
    iVar6 = (int)param_3[5];
  }
  *(int *)(param_3 + 5) = iVar6 + uVar4;
  if (*(int *)((longlong)param_3 + 0x2c) < iVar6 + uVar4) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3 + 4);
  }
  _guard_xfg_dispatch_icall_nop((void *)(param_3[4] + (longlong)iVar6 * 4),0,lVar8 * 4);
  if ((char)param_3[0x14] != '\0') {
    local_4f78 = param_1 + 0x1da0;
    FCodecV1Decoder::DecodeNormalStream(param_1,param_3[4],4,uVar4);
  }
  iVar6 = 0;
  *(undefined4 *)(param_3 + 7) = 0;
  if (*(int *)((longlong)param_3 + 0x3c) != uVar4) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_3 + 6);
    iVar6 = (int)param_3[7];
  }
  *(int *)(param_3 + 7) = iVar6 + uVar4;
  if (*(int *)((longlong)param_3 + 0x3c) < iVar6 + uVar4) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3 + 6);
  }
  _guard_xfg_dispatch_icall_nop((void *)(param_3[6] + (longlong)iVar6 * 4),0,lVar8 * 4);
  if (*(char *)((longlong)param_3 + 0xa1) != '\0') {
    local_4f78 = param_1 + 0x2778;
    FCodecV1Decoder::DecodeNormalStream(param_1,param_3[6],4,uVar4);
  }
  iVar6 = 0;
  *(undefined4 *)(param_3 + 3) = 0;
  if (*(int *)((longlong)param_3 + 0x1c) != uVar4) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_3 + 2);
    iVar6 = (int)param_3[3];
  }
  *(int *)(param_3 + 3) = iVar6 + uVar4;
  if (*(int *)((longlong)param_3 + 0x1c) < iVar6 + uVar4) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3 + 2);
  }
  _guard_xfg_dispatch_icall_nop((void *)(param_3[2] + (longlong)iVar6 * 8),0,lVar8 * 8);
  if (*(char *)((longlong)param_3 + 0xa2) != '\0') {
    FCodecV1Decoder::DecodeUVStream(param_1,param_3[2],8,uVar4);
  }
  *(undefined4 *)(param_3 + 0xb) = 0;
  if (*(int *)((longlong)param_3 + 0x5c) != uVar4) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_3 + 10,uVar4);
  }
  if (*(char *)((longlong)param_3 + 0xa4) != '\0') {
    iVar6 = (int)param_3[0xb] + uVar4;
    *(int *)(param_3 + 0xb) = iVar6;
    if (*(int *)((longlong)param_3 + 0x5c) < iVar6) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_3 + 10);
    }
    FCodecV1Decoder::DecodeMotionVectorStream(param_1,param_3[10],0xc,uVar4);
  }
  lVar8 = DAT_146861400;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar5 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar7 = GetCurrentThreadId();
    if (DVar7 != DAT_1468c21c0) goto LAB_1408c1009;
  }
  lVar9 = 0;
LAB_1408c1009:
  if (*(int *)(lVar8 + lVar9) == 1) {
    QueryPerformanceCounter(&local_4f58);
  }
  if (local_4f48 != (void *)0x0) {
    FMemory::Free();
  }
  if ((void *)_Src.QuadPart != (void *)0x0) {
    FMemory::Free(_Src.QuadPart);
  }
  return 1;
}



// FUNCTION 1408c1070 DecodeIndexStream body=647 status=ok
// SIG undefined DecodeIndexStream(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FCodecV1Decoder::DecodeIndexStream(longlong param_1,int *param_2,longlong param_3,uint param_4)

{
  byte bVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 local_70 [3];
  undefined8 *local_58;
  uint local_50;
  undefined8 local_4c;
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_58 = (undefined8 *)0x0;
  local_4c = 0;
  local_44 = 0;
  local_50 = 5;
  local_78 = param_3;
  TArray<unsigned_int,TInlineAllocator<5,FDefaultAllocator>_>::ResizeGrow(local_70,0);
  puVar4 = local_70;
  if (local_58 != (undefined8 *)0x0) {
    puVar4 = local_58;
  }
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined4 *)(puVar4 + 2) = 0;
  if (param_4 != 0) {
    uVar10 = (ulonglong)param_4;
    do {
      iVar3 = FHuffmanTable::Decode(param_1 + 0x18);
      uVar5 = 0;
      if (iVar3 != 0x20) {
        plVar2 = *(longlong **)(param_1 + 0x10);
        param_3 = local_78;
        if (iVar3 < 0x21) {
          uVar7 = 0x1f - iVar3;
          if (uVar7 != 0) {
            uVar9 = *(uint *)((longlong)plVar2 + 0x14);
            iVar3 = (int)plVar2[2];
            uVar6 = uVar7;
            uVar5 = 0;
            do {
              if (uVar9 == 0) {
                iVar3 = iVar3 + 1;
                *(undefined4 *)((longlong)plVar2 + 0x14) = 8;
                *(int *)(plVar2 + 2) = iVar3;
                uVar9 = 8;
              }
              uVar8 = uVar6;
              if (uVar9 <= uVar6) {
                uVar8 = uVar9;
              }
              uVar9 = uVar9 - uVar8;
              bVar1 = *(byte *)((longlong)iVar3 + *plVar2);
              *(uint *)((longlong)plVar2 + 0x14) = uVar9;
              uVar5 = (uint)(bVar1 >> ((byte)uVar9 & 0x1f)) & (1 << ((byte)uVar8 & 0x1f)) - 1U |
                      uVar5 << ((byte)uVar8 & 0x1f);
              uVar6 = uVar6 - uVar8;
            } while (uVar6 != 0);
          }
          uVar5 = -(1 << ((byte)uVar7 & 0x1f)) - uVar5;
        }
        else {
          uVar7 = iVar3 - 0x21;
          if (uVar7 != 0) {
            uVar9 = *(uint *)((longlong)plVar2 + 0x14);
            iVar3 = (int)plVar2[2];
            uVar6 = uVar7;
            uVar5 = 0;
            do {
              if (uVar9 == 0) {
                iVar3 = iVar3 + 1;
                *(undefined4 *)((longlong)plVar2 + 0x14) = 8;
                *(int *)(plVar2 + 2) = iVar3;
                uVar9 = 8;
              }
              uVar8 = uVar6;
              if (uVar9 <= uVar6) {
                uVar8 = uVar9;
              }
              uVar9 = uVar9 - uVar8;
              bVar1 = *(byte *)((longlong)iVar3 + *plVar2);
              *(uint *)((longlong)plVar2 + 0x14) = uVar9;
              uVar5 = (uint)(bVar1 >> ((byte)uVar9 & 0x1f)) & (1 << ((byte)uVar8 & 0x1f)) - 1U |
                      uVar5 << ((byte)uVar8 & 0x1f);
              uVar6 = uVar6 - uVar8;
            } while (uVar6 != 0);
          }
          uVar5 = (1 << ((byte)uVar7 & 0x1f)) + uVar5;
        }
      }
      iVar3 = 0;
      if (local_50 == 0) {
        iVar3 = -1;
      }
      puVar4 = local_70;
      if (local_58 != (undefined8 *)0x0) {
        puVar4 = local_58;
      }
      iVar3 = *(int *)((longlong)puVar4 +
                      (longlong)(int)((uint)(local_4c._4_4_ + iVar3) % local_50) * 4) + uVar5;
      *param_2 = iVar3;
      local_44 = (local_44 + 1) % local_50;
      param_2 = (int *)((longlong)param_2 + param_3);
      uVar5 = (local_4c._4_4_ + -1 + local_50) % local_50;
      local_4c = CONCAT44(uVar5,(undefined4)local_4c);
      *(int *)((longlong)puVar4 + (longlong)(int)uVar5 * 4) = iVar3;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  if (local_58 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1408c1300 DecodeMotionVectorStream body=1908 status=ok
// SIG undefined DecodeMotionVectorStream(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FCodecV1Decoder::DecodeMotionVectorStream
               (longlong param_1,undefined8 *param_2,longlong param_3,uint param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  longlong *plVar3;
  float fVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 *puVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 *local_128;
  longlong local_120;
  undefined8 local_118;
  float local_100;
  undefined1 local_f8 [112];
  undefined1 *local_88;
  uint local_80;
  undefined8 local_7c;
  uint local_74;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  uVar9 = 0;
  uVar14 = 8;
  plVar3 = *(longlong **)(param_1 + 0x10);
  uVar17 = *(uint *)((longlong)plVar3 + 0x14);
  iVar18 = (int)plVar3[2];
  do {
    if (uVar17 == 0) {
      iVar18 = iVar18 + 1;
      *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
      *(int *)(plVar3 + 2) = iVar18;
      uVar17 = 8;
    }
    uVar10 = uVar14;
    if (uVar17 <= uVar14) {
      uVar10 = uVar17;
    }
    uVar17 = uVar17 - uVar10;
    bVar2 = *(byte *)((longlong)iVar18 + *plVar3);
    *(uint *)((longlong)plVar3 + 0x14) = uVar17;
    uVar9 = (uint)(bVar2 >> ((byte)uVar17 & 0x1f)) & (1 << ((byte)uVar10 & 0x1f)) - 1U |
            uVar9 << ((byte)uVar10 & 0x1f);
    uVar14 = uVar14 - uVar10;
  } while (uVar14 != 0);
  plVar3 = *(longlong **)(param_1 + 0x10);
  uVar19 = 0;
  uVar10 = 8;
  uVar17 = *(uint *)((longlong)plVar3 + 0x14);
  uVar14 = uVar19;
  do {
    if (uVar17 == 0) {
      *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
      uVar17 = 8;
      *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
    }
    uVar11 = uVar10;
    if (uVar17 <= uVar10) {
      uVar11 = uVar17;
    }
    uVar17 = uVar17 - uVar11;
    bVar2 = *(byte *)((longlong)(int)plVar3[2] + *plVar3);
    *(uint *)((longlong)plVar3 + 0x14) = uVar17;
    uVar14 = (uint)(bVar2 >> ((byte)uVar17 & 0x1f)) & (1 << ((byte)uVar11 & 0x1f)) - 1U |
             uVar14 << ((byte)uVar11 & 0x1f);
    uVar10 = uVar10 - uVar11;
  } while (uVar10 != 0);
  plVar3 = *(longlong **)(param_1 + 0x10);
  uVar11 = 8;
  uVar17 = *(uint *)((longlong)plVar3 + 0x14);
  uVar10 = uVar19;
  do {
    if (uVar17 == 0) {
      *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
      uVar17 = 8;
      *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
    }
    uVar16 = uVar11;
    if (uVar17 <= uVar11) {
      uVar16 = uVar17;
    }
    uVar17 = uVar17 - uVar16;
    bVar2 = *(byte *)((longlong)(int)plVar3[2] + *plVar3);
    *(uint *)((longlong)plVar3 + 0x14) = uVar17;
    uVar10 = (uint)(bVar2 >> ((byte)uVar17 & 0x1f)) & (1 << ((byte)uVar16 & 0x1f)) - 1U |
             uVar10 << ((byte)uVar16 & 0x1f);
    uVar11 = uVar11 - uVar16;
  } while (uVar11 != 0);
  plVar3 = *(longlong **)(param_1 + 0x10);
  uVar11 = 8;
  uVar17 = *(uint *)((longlong)plVar3 + 0x14);
  do {
    if (uVar17 == 0) {
      *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
      uVar17 = 8;
      *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
    }
    uVar16 = uVar11;
    if (uVar17 <= uVar11) {
      uVar16 = uVar17;
    }
    uVar17 = uVar17 - uVar16;
    bVar2 = *(byte *)((longlong)(int)plVar3[2] + *plVar3);
    *(uint *)((longlong)plVar3 + 0x14) = uVar17;
    uVar19 = (uint)(bVar2 >> ((byte)uVar17 & 0x1f)) & (1 << ((byte)uVar16 & 0x1f)) - 1U |
             uVar19 << ((byte)uVar16 & 0x1f);
    uVar11 = uVar11 - uVar16;
  } while (uVar11 != 0);
  local_138._0_4_ =
       (float)CONCAT13((char)uVar19,CONCAT12((char)uVar10,CONCAT11((char)uVar14,(char)uVar9)));
  fVar4 = (float)local_138;
  lVar15 = 9;
  local_138 = 0;
  local_88 = (undefined1 *)0x0;
  local_7c = 0;
  local_74 = 0;
  local_80 = 0;
  local_128 = param_2;
  local_120 = param_3;
  TArray<FIntVector,TInlineAllocator<9,FDefaultAllocator>_>::ResizeTo(local_f8,9);
  uVar5 = local_138;
  puVar13 = local_88;
  do {
    uVar17 = local_80;
    lVar12 = (longlong)(int)local_80;
    local_80 = local_80 + 1;
    if ((int)local_7c < (int)local_80) {
      TArray<FIntVector,TInlineAllocator<9,FDefaultAllocator>_>::ResizeGrow(local_f8,uVar17);
      puVar13 = local_88;
    }
    puVar8 = local_f8;
    if (puVar13 != (undefined1 *)0x0) {
      puVar8 = puVar13;
    }
    puVar1 = (undefined8 *)(puVar8 + lVar12 * 0xc);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = uVar5;
      *(undefined4 *)(puVar1 + 1) = 0;
      puVar13 = local_88;
    }
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  uVar6 = (ulonglong)param_4;
  if (param_4 != 0) {
    do {
      local_138 = uVar6;
      uVar20 = local_138;
      uVar17 = 0;
      iVar18 = FHuffmanTable::Decode(param_1 + 0x4500,*(undefined8 *)(param_1 + 0x10));
      if (iVar18 != 0x20) {
        plVar3 = *(longlong **)(param_1 + 0x10);
        if (iVar18 < 0x21) {
          uVar9 = 0x1f - iVar18;
          if (uVar9 != 0) {
            uVar14 = *(uint *)((longlong)plVar3 + 0x14);
            iVar18 = (int)plVar3[2];
            uVar10 = uVar9;
            do {
              if (uVar14 == 0) {
                iVar18 = iVar18 + 1;
                *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
                *(int *)(plVar3 + 2) = iVar18;
                uVar14 = 8;
              }
              uVar19 = uVar10;
              if (uVar14 <= uVar10) {
                uVar19 = uVar14;
              }
              uVar14 = uVar14 - uVar19;
              bVar2 = *(byte *)((longlong)iVar18 + *plVar3);
              *(uint *)((longlong)plVar3 + 0x14) = uVar14;
              uVar17 = (uint)(bVar2 >> ((byte)uVar14 & 0x1f)) & (1 << ((byte)uVar19 & 0x1f)) - 1U |
                       uVar17 << ((byte)uVar19 & 0x1f);
              uVar10 = uVar10 - uVar19;
            } while (uVar10 != 0);
          }
          uVar17 = -(1 << ((byte)uVar9 & 0x1f)) - uVar17;
        }
        else {
          uVar9 = iVar18 - 0x21;
          uVar17 = 0;
          if (uVar9 != 0) {
            uVar14 = *(uint *)((longlong)plVar3 + 0x14);
            iVar18 = (int)plVar3[2];
            uVar10 = uVar9;
            do {
              if (uVar14 == 0) {
                iVar18 = iVar18 + 1;
                *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
                *(int *)(plVar3 + 2) = iVar18;
                uVar14 = 8;
              }
              uVar19 = uVar10;
              if (uVar14 <= uVar10) {
                uVar19 = uVar14;
              }
              uVar14 = uVar14 - uVar19;
              bVar2 = *(byte *)((longlong)iVar18 + *plVar3);
              *(uint *)((longlong)plVar3 + 0x14) = uVar14;
              uVar17 = (uint)(bVar2 >> ((byte)uVar14 & 0x1f)) & (1 << ((byte)uVar19 & 0x1f)) - 1U |
                       uVar17 << ((byte)uVar19 & 0x1f);
              uVar10 = uVar10 - uVar19;
            } while (uVar10 != 0);
          }
          uVar17 = (1 << ((byte)uVar9 & 0x1f)) + uVar17;
        }
      }
      iVar18 = FHuffmanTable::Decode(param_1 + 0x4500,*(undefined8 *)(param_1 + 0x10));
      if (iVar18 == 0x20) {
        iVar18 = 0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x10);
        if (iVar18 < 0x21) {
          uVar9 = 0;
          uVar14 = 0x1f - iVar18;
          if (uVar14 != 0) {
            uVar10 = *(uint *)((longlong)plVar3 + 0x14);
            iVar18 = (int)plVar3[2];
            uVar19 = uVar14;
            do {
              if (uVar10 == 0) {
                iVar18 = iVar18 + 1;
                *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
                *(int *)(plVar3 + 2) = iVar18;
                uVar10 = 8;
              }
              uVar11 = uVar19;
              if (uVar10 <= uVar19) {
                uVar11 = uVar10;
              }
              uVar10 = uVar10 - uVar11;
              bVar2 = *(byte *)((longlong)iVar18 + *plVar3);
              *(uint *)((longlong)plVar3 + 0x14) = uVar10;
              uVar9 = (uint)(bVar2 >> ((byte)uVar10 & 0x1f)) & (1 << ((byte)uVar11 & 0x1f)) - 1U |
                      uVar9 << ((byte)uVar11 & 0x1f);
              uVar19 = uVar19 - uVar11;
            } while (uVar19 != 0);
          }
          iVar18 = -(1 << ((byte)uVar14 & 0x1f)) - uVar9;
        }
        else {
          uVar14 = iVar18 - 0x21;
          uVar9 = 0;
          if (uVar14 != 0) {
            uVar10 = *(uint *)((longlong)plVar3 + 0x14);
            iVar18 = (int)plVar3[2];
            uVar19 = uVar14;
            do {
              if (uVar10 == 0) {
                iVar18 = iVar18 + 1;
                *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
                *(int *)(plVar3 + 2) = iVar18;
                uVar10 = 8;
              }
              uVar11 = uVar19;
              if (uVar10 <= uVar19) {
                uVar11 = uVar10;
              }
              uVar10 = uVar10 - uVar11;
              bVar2 = *(byte *)((longlong)iVar18 + *plVar3);
              *(uint *)((longlong)plVar3 + 0x14) = uVar10;
              uVar9 = (uint)(bVar2 >> ((byte)uVar10 & 0x1f)) & (1 << ((byte)uVar11 & 0x1f)) - 1U |
                      uVar9 << ((byte)uVar11 & 0x1f);
              uVar19 = uVar19 - uVar11;
            } while (uVar19 != 0);
          }
          iVar18 = (1 << ((byte)uVar14 & 0x1f)) + uVar9;
        }
      }
      uVar9 = 0;
      iVar7 = FHuffmanTable::Decode(param_1 + 0x4500);
      if (iVar7 != 0x20) {
        plVar3 = *(longlong **)(param_1 + 0x10);
        if (iVar7 < 0x21) {
          uVar14 = 0x1f - iVar7;
          if (uVar14 != 0) {
            uVar10 = *(uint *)((longlong)plVar3 + 0x14);
            iVar7 = (int)plVar3[2];
            uVar19 = uVar14;
            do {
              if (uVar10 == 0) {
                iVar7 = iVar7 + 1;
                *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
                *(int *)(plVar3 + 2) = iVar7;
                uVar10 = 8;
              }
              uVar11 = uVar19;
              if (uVar10 <= uVar19) {
                uVar11 = uVar10;
              }
              uVar10 = uVar10 - uVar11;
              bVar2 = *(byte *)((longlong)iVar7 + *plVar3);
              *(uint *)((longlong)plVar3 + 0x14) = uVar10;
              uVar9 = (uint)(bVar2 >> ((byte)uVar10 & 0x1f)) & (1 << ((byte)uVar11 & 0x1f)) - 1U |
                      uVar9 << ((byte)uVar11 & 0x1f);
              uVar19 = uVar19 - uVar11;
              uVar20 = local_138;
            } while (uVar19 != 0);
          }
          uVar9 = -(1 << ((byte)uVar14 & 0x1f)) - uVar9;
        }
        else {
          uVar14 = iVar7 - 0x21;
          uVar9 = 0;
          if (uVar14 != 0) {
            uVar10 = *(uint *)((longlong)plVar3 + 0x14);
            iVar7 = (int)plVar3[2];
            uVar19 = uVar14;
            do {
              if (uVar10 == 0) {
                iVar7 = iVar7 + 1;
                *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
                *(int *)(plVar3 + 2) = iVar7;
                uVar10 = 8;
              }
              uVar11 = uVar19;
              if (uVar10 <= uVar19) {
                uVar11 = uVar10;
              }
              uVar10 = uVar10 - uVar11;
              bVar2 = *(byte *)((longlong)iVar7 + *plVar3);
              *(uint *)((longlong)plVar3 + 0x14) = uVar10;
              uVar9 = (uint)(bVar2 >> ((byte)uVar10 & 0x1f)) & (1 << ((byte)uVar11 & 0x1f)) - 1U |
                      uVar9 << ((byte)uVar11 & 0x1f);
              uVar19 = uVar19 - uVar11;
              uVar20 = local_138;
            } while (uVar19 != 0);
          }
          uVar9 = (1 << ((byte)uVar14 & 0x1f)) + uVar9;
        }
      }
      iVar7 = 0;
      if (local_80 == 0) {
        iVar7 = -1;
      }
      puVar13 = local_f8;
      if (local_88 != (undefined1 *)0x0) {
        puVar13 = local_88;
      }
      lVar15 = (longlong)(int)((uint)(local_7c._4_4_ + iVar7) % local_80);
      local_118 = *(undefined8 *)(puVar13 + lVar15 * 0xc);
      iVar7 = *(int *)(puVar13 + lVar15 * 0xc + 8);
      iVar18 = (int)((ulonglong)local_118 >> 0x20) + iVar18;
      local_100 = (float)(int)(iVar7 + uVar9) * fVar4;
      *local_128 = CONCAT44((float)iVar18 * fVar4,(float)(int)((int)local_118 + uVar17) * fVar4);
      *(float *)(local_128 + 1) = local_100;
      local_128 = (undefined8 *)((longlong)local_128 + local_120);
      local_74 = (local_74 + 1) % local_80;
      uVar14 = (local_7c._4_4_ + -1 + local_80) % local_80;
      local_7c = CONCAT44(uVar14,(int)local_7c);
      lVar15 = (longlong)(int)uVar14;
      *(uint *)(puVar13 + lVar15 * 0xc) = (int)local_118 + uVar17;
      *(int *)(puVar13 + lVar15 * 0xc + 4) = iVar18;
      *(uint *)(puVar13 + lVar15 * 0xc + 8) = iVar7 + uVar9;
      uVar6 = uVar20 - 1;
    } while (uVar20 - 1 != 0);
    local_138 = 0;
    puVar13 = local_88;
  }
  if (puVar13 != (undefined1 *)0x0) {
    FMemory::Free(puVar13);
  }
  return;
}



// FUNCTION 1408c1a80 DecodeNormalStream body=1750 status=ok
// SIG undefined DecodeNormalStream(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FCodecV1Decoder::DecodeNormalStream
               (longlong param_1,undefined1 *param_2,longlong param_3,uint param_4,
               undefined8 param_5)

{
  int *piVar1;
  byte bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  longlong local_f0;
  undefined1 *local_e8;
  ulonglong local_e0;
  longlong local_d8;
  undefined1 local_c8 [80];
  undefined1 *local_78;
  uint local_70;
  undefined8 local_6c;
  uint local_64;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  lVar14 = 5;
  local_78 = (undefined1 *)0x0;
  local_6c = 0;
  local_64 = 0;
  local_70 = 0;
  local_108 = param_5;
  local_f0 = param_1;
  local_e8 = param_2;
  local_d8 = param_3;
  TArray<FIntVector4,TInlineAllocator<5,FDefaultAllocator>_>::ResizeTo(local_c8,5);
  puVar9 = local_78;
  do {
    uVar8 = local_70;
    lVar11 = (longlong)(int)local_70;
    local_70 = local_70 + 1;
    if ((int)local_6c < (int)local_70) {
      TArray<FIntVector4,TInlineAllocator<5,FDefaultAllocator>_>::ResizeGrow(local_c8,uVar8);
      puVar9 = local_78;
    }
    puVar6 = local_c8;
    if (puVar9 != (undefined1 *)0x0) {
      puVar6 = puVar9;
    }
    puVar7 = (undefined8 *)(puVar6 + lVar11 * 0x10);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = 0x8000000080;
      puVar7[1] = 0x8000000080;
      puVar9 = local_78;
    }
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  uVar4 = (ulonglong)param_4;
  if (param_4 != 0) {
    do {
      local_e0 = uVar4;
      uVar10 = 0;
      iVar5 = FHuffmanTable::Decode(param_5,*(undefined8 *)(param_1 + 0x10));
      uVar12 = 0;
      uVar8 = uVar10;
      if (iVar5 != 0x20) {
        plVar3 = *(longlong **)(param_1 + 0x10);
        if (iVar5 < 0x21) {
          uVar17 = 0x1f - iVar5;
          uVar8 = uVar12;
          if (uVar17 != 0) {
            uVar16 = *(uint *)((longlong)plVar3 + 0x14);
            iVar5 = (int)plVar3[2];
            uVar8 = uVar10;
            uVar18 = uVar17;
            do {
              if (uVar16 == 0) {
                iVar5 = iVar5 + 1;
                *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
                *(int *)(plVar3 + 2) = iVar5;
                uVar16 = 8;
              }
              uVar15 = uVar18;
              if (uVar16 <= uVar18) {
                uVar15 = uVar16;
              }
              uVar16 = uVar16 - uVar15;
              bVar2 = *(byte *)((longlong)iVar5 + *plVar3);
              *(uint *)((longlong)plVar3 + 0x14) = uVar16;
              uVar8 = (uint)(bVar2 >> ((byte)uVar16 & 0x1f)) & (1 << ((byte)uVar15 & 0x1f)) - 1U |
                      uVar8 << ((byte)uVar15 & 0x1f);
              uVar18 = uVar18 - uVar15;
            } while (uVar18 != 0);
          }
          uVar8 = -(1 << ((byte)uVar17 & 0x1f)) - uVar8;
        }
        else {
          uVar17 = iVar5 - 0x21;
          if (uVar17 != 0) {
            uVar16 = *(uint *)((longlong)plVar3 + 0x14);
            iVar5 = (int)plVar3[2];
            uVar18 = uVar17;
            do {
              if (uVar16 == 0) {
                iVar5 = iVar5 + 1;
                *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
                *(int *)(plVar3 + 2) = iVar5;
                uVar16 = 8;
              }
              uVar15 = uVar18;
              if (uVar16 <= uVar18) {
                uVar15 = uVar16;
              }
              uVar16 = uVar16 - uVar15;
              bVar2 = *(byte *)((longlong)iVar5 + *plVar3);
              *(uint *)((longlong)plVar3 + 0x14) = uVar16;
              uVar8 = (uint)(bVar2 >> ((byte)uVar16 & 0x1f)) & (1 << ((byte)uVar15 & 0x1f)) - 1U |
                      uVar8 << ((byte)uVar15 & 0x1f);
              uVar18 = uVar18 - uVar15;
            } while (uVar18 != 0);
          }
          uVar8 = (1 << ((byte)uVar17 & 0x1f)) + uVar8;
        }
      }
      iVar5 = FHuffmanTable::Decode(param_5,*(undefined8 *)(param_1 + 0x10));
      if (iVar5 != 0x20) {
        plVar3 = *(longlong **)(param_1 + 0x10);
        if (iVar5 < 0x21) {
          uVar17 = 0x1f - iVar5;
          if (uVar17 != 0) {
            uVar16 = *(uint *)((longlong)plVar3 + 0x14);
            iVar5 = (int)plVar3[2];
            uVar12 = uVar10;
            uVar10 = uVar17;
            do {
              if (uVar16 == 0) {
                iVar5 = iVar5 + 1;
                *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
                *(int *)(plVar3 + 2) = iVar5;
                uVar16 = 8;
              }
              uVar18 = uVar10;
              if (uVar16 <= uVar10) {
                uVar18 = uVar16;
              }
              uVar16 = uVar16 - uVar18;
              bVar2 = *(byte *)((longlong)iVar5 + *plVar3);
              *(uint *)((longlong)plVar3 + 0x14) = uVar16;
              uVar12 = (uint)(bVar2 >> ((byte)uVar16 & 0x1f)) & (1 << ((byte)uVar18 & 0x1f)) - 1U |
                       uVar12 << ((byte)uVar18 & 0x1f);
              uVar10 = uVar10 - uVar18;
            } while (uVar10 != 0);
          }
          uVar12 = -(1 << ((byte)uVar17 & 0x1f)) - uVar12;
        }
        else {
          uVar12 = iVar5 - 0x21;
          if (uVar12 != 0) {
            uVar17 = *(uint *)((longlong)plVar3 + 0x14);
            iVar5 = (int)plVar3[2];
            uVar16 = uVar12;
            do {
              if (uVar17 == 0) {
                iVar5 = iVar5 + 1;
                *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
                *(int *)(plVar3 + 2) = iVar5;
                uVar17 = 8;
              }
              uVar18 = uVar16;
              if (uVar17 <= uVar16) {
                uVar18 = uVar17;
              }
              uVar17 = uVar17 - uVar18;
              bVar2 = *(byte *)((longlong)iVar5 + *plVar3);
              *(uint *)((longlong)plVar3 + 0x14) = uVar17;
              uVar10 = (uint)(bVar2 >> ((byte)uVar17 & 0x1f)) & (1 << ((byte)uVar18 & 0x1f)) - 1U |
                       uVar10 << ((byte)uVar18 & 0x1f);
              uVar16 = uVar16 - uVar18;
            } while (uVar16 != 0);
          }
          uVar12 = (1 << ((byte)uVar12 & 0x1f)) + uVar10;
        }
      }
      iVar13 = 0;
      iVar5 = FHuffmanTable::Decode(param_5,*(undefined8 *)(param_1 + 0x10));
      if (iVar5 != 0x20) {
        plVar3 = *(longlong **)(param_1 + 0x10);
        if (iVar5 < 0x21) {
          uVar10 = 0;
          uVar17 = 0x1f - iVar5;
          if (uVar17 != 0) {
            uVar16 = *(uint *)((longlong)plVar3 + 0x14);
            iVar5 = (int)plVar3[2];
            uVar18 = uVar17;
            do {
              if (uVar16 == 0) {
                iVar5 = iVar5 + 1;
                *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
                *(int *)(plVar3 + 2) = iVar5;
                uVar16 = 8;
              }
              uVar15 = uVar18;
              if (uVar16 <= uVar18) {
                uVar15 = uVar16;
              }
              uVar16 = uVar16 - uVar15;
              bVar2 = *(byte *)((longlong)iVar5 + *plVar3);
              *(uint *)((longlong)plVar3 + 0x14) = uVar16;
              uVar10 = (uint)(bVar2 >> ((byte)uVar16 & 0x1f)) & (1 << ((byte)uVar15 & 0x1f)) - 1U |
                       uVar10 << ((byte)uVar15 & 0x1f);
              uVar18 = uVar18 - uVar15;
              param_5 = local_108;
            } while (uVar18 != 0);
          }
          iVar13 = -(1 << ((byte)uVar17 & 0x1f)) - uVar10;
        }
        else {
          uVar17 = iVar5 - 0x21;
          uVar10 = 0;
          if (uVar17 != 0) {
            uVar16 = *(uint *)((longlong)plVar3 + 0x14);
            iVar5 = (int)plVar3[2];
            uVar18 = uVar17;
            do {
              if (uVar16 == 0) {
                iVar5 = iVar5 + 1;
                *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
                *(int *)(plVar3 + 2) = iVar5;
                uVar16 = 8;
              }
              uVar15 = uVar18;
              if (uVar16 <= uVar18) {
                uVar15 = uVar16;
              }
              uVar16 = uVar16 - uVar15;
              bVar2 = *(byte *)((longlong)iVar5 + *plVar3);
              *(uint *)((longlong)plVar3 + 0x14) = uVar16;
              uVar10 = (uint)(bVar2 >> ((byte)uVar16 & 0x1f)) & (1 << ((byte)uVar15 & 0x1f)) - 1U |
                       uVar10 << ((byte)uVar15 & 0x1f);
              uVar18 = uVar18 - uVar15;
              param_5 = local_108;
            } while (uVar18 != 0);
          }
          iVar13 = (1 << ((byte)uVar17 & 0x1f)) + uVar10;
        }
      }
      iVar5 = FHuffmanTable::Decode(param_5);
      if (iVar5 == 0x20) {
        iStack_f4 = 0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x10);
        param_5 = local_108;
        if (iVar5 < 0x21) {
          uVar10 = 0;
          uVar17 = 0x1f - iVar5;
          if (uVar17 != 0) {
            uVar16 = *(uint *)((longlong)plVar3 + 0x14);
            iVar5 = (int)plVar3[2];
            uVar18 = uVar17;
            do {
              if (uVar16 == 0) {
                iVar5 = iVar5 + 1;
                *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
                *(int *)(plVar3 + 2) = iVar5;
                uVar16 = 8;
              }
              uVar15 = uVar18;
              if (uVar16 <= uVar18) {
                uVar15 = uVar16;
              }
              uVar16 = uVar16 - uVar15;
              bVar2 = *(byte *)((longlong)iVar5 + *plVar3);
              *(uint *)((longlong)plVar3 + 0x14) = uVar16;
              uVar10 = (uint)(bVar2 >> ((byte)uVar16 & 0x1f)) & (1 << ((byte)uVar15 & 0x1f)) - 1U |
                       uVar10 << ((byte)uVar15 & 0x1f);
              uVar18 = uVar18 - uVar15;
              param_1 = local_f0;
            } while (uVar18 != 0);
          }
          iStack_f4 = -(1 << ((byte)uVar17 & 0x1f)) - uVar10;
        }
        else {
          uVar17 = iVar5 - 0x21;
          uVar10 = 0;
          if (uVar17 != 0) {
            uVar16 = *(uint *)((longlong)plVar3 + 0x14);
            iVar5 = (int)plVar3[2];
            uVar18 = uVar17;
            do {
              if (uVar16 == 0) {
                iVar5 = iVar5 + 1;
                *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
                *(int *)(plVar3 + 2) = iVar5;
                uVar16 = 8;
              }
              uVar15 = uVar18;
              if (uVar16 <= uVar18) {
                uVar15 = uVar16;
              }
              uVar16 = uVar16 - uVar15;
              bVar2 = *(byte *)((longlong)iVar5 + *plVar3);
              *(uint *)((longlong)plVar3 + 0x14) = uVar16;
              uVar10 = (uint)(bVar2 >> ((byte)uVar16 & 0x1f)) & (1 << ((byte)uVar15 & 0x1f)) - 1U |
                       uVar10 << ((byte)uVar15 & 0x1f);
              uVar18 = uVar18 - uVar15;
              param_1 = local_f0;
            } while (uVar18 != 0);
          }
          iStack_f4 = (1 << ((byte)uVar17 & 0x1f)) + uVar10;
        }
      }
      iVar5 = 0;
      if (local_70 == 0) {
        iVar5 = -1;
      }
      puVar9 = local_c8;
      if (local_78 != (undefined1 *)0x0) {
        puVar9 = local_78;
      }
      piVar1 = (int *)(puVar9 + (longlong)(int)((uint)(local_6c._4_4_ + iVar5) % local_70) * 0x10);
      local_100 = *piVar1 + uVar8;
      iStack_fc = piVar1[1] + uVar12;
      iStack_f8 = piVar1[2] + iVar13;
      iStack_f4 = piVar1[3] + iStack_f4;
      *local_e8 = (undefined1)local_100;
      local_e8[1] = (undefined1)iStack_fc;
      local_e8[2] = (undefined1)iStack_f8;
      local_e8[3] = (char)iStack_f4;
      local_e8 = local_e8 + local_d8;
      local_64 = (local_64 + 1) % local_70;
      uVar8 = (local_6c._4_4_ + -1 + local_70) % local_70;
      local_6c = CONCAT44(uVar8,(int)local_6c);
      *(ulonglong *)(puVar9 + (longlong)(int)uVar8 * 0x10) = CONCAT44(iStack_fc,local_100);
      *(ulonglong *)((longlong)(puVar9 + (longlong)(int)uVar8 * 0x10) + 8) =
           CONCAT44(iStack_f4,iStack_f8);
      uVar4 = local_e0 - 1;
    } while (local_e0 - 1 != 0);
    local_e0 = 0;
    puVar9 = local_78;
  }
  if (puVar9 != (undefined1 *)0x0) {
    FMemory::Free(puVar9);
  }
  return;
}



// FUNCTION 1408c2160 DecodePositionStream body=3600 status=ok
// SIG undefined DecodePositionStream(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FCodecV1Decoder::DecodePositionStream
               (longlong param_1,int *param_2,longlong param_3,uint param_4,undefined8 *param_5,
               longlong param_6)

{
  undefined8 uVar1;
  byte bVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined1 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  int iVar23;
  int *piVar24;
  undefined4 uVar25;
  longlong lVar26;
  ulonglong uVar27;
  undefined1 auStack_228 [32];
  uint local_208;
  int local_204;
  int local_200;
  int local_1fc;
  longlong local_1f8;
  uint local_1f0;
  int *local_1e8;
  int local_1e0;
  int local_1dc;
  uint local_1d8;
  int local_1d4;
  int local_1d0;
  int local_1cc;
  uint local_1c8;
  undefined8 local_1c4;
  undefined8 local_1b8;
  undefined8 *local_1a8;
  uint *local_1a0;
  longlong local_198;
  longlong local_190;
  ulonglong local_188;
  undefined4 local_180;
  undefined4 local_17c;
  int local_178;
  int local_174;
  undefined8 local_170;
  undefined8 local_160;
  undefined8 local_150;
  float local_13c;
  undefined8 local_138 [5];
  undefined8 *local_110;
  uint local_108;
  undefined8 local_104;
  uint local_fc;
  undefined1 local_f8 [112];
  undefined1 *local_88;
  uint local_80;
  undefined8 local_7c;
  uint local_74;
  undefined8 local_68;
  int local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  puVar17 = (undefined1 *)((longlong)&local_180 + 2);
  local_1a8 = param_5;
  lVar26 = 2;
  do {
    plVar3 = *(longlong **)(param_1 + 0x10);
    uVar18 = 8;
    uVar14 = 0;
    uVar21 = *(uint *)((longlong)plVar3 + 0x14);
    iVar23 = (int)plVar3[2];
    do {
      if (uVar21 == 0) {
        iVar23 = iVar23 + 1;
        *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
        *(int *)(plVar3 + 2) = iVar23;
        uVar21 = 8;
      }
      uVar15 = uVar18;
      if (uVar21 <= uVar18) {
        uVar15 = uVar21;
      }
      uVar21 = uVar21 - uVar15;
      bVar2 = *(byte *)((longlong)iVar23 + *plVar3);
      *(uint *)((longlong)plVar3 + 0x14) = uVar21;
      uVar14 = (uint)(bVar2 >> ((byte)uVar21 & 0x1f)) & (1 << ((byte)uVar15 & 0x1f)) - 1U |
               uVar14 << ((byte)uVar15 & 0x1f);
      uVar18 = uVar18 - uVar15;
    } while (uVar18 != 0);
    uVar18 = 0;
    puVar17[-2] = (char)uVar14;
    uVar14 = 8;
    plVar3 = *(longlong **)(param_1 + 0x10);
    uVar21 = *(uint *)((longlong)plVar3 + 0x14);
    do {
      if (uVar21 == 0) {
        *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
        uVar21 = 8;
        *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
      }
      uVar15 = uVar14;
      if (uVar21 <= uVar14) {
        uVar15 = uVar21;
      }
      uVar21 = uVar21 - uVar15;
      bVar2 = *(byte *)((longlong)(int)plVar3[2] + *plVar3);
      *(uint *)((longlong)plVar3 + 0x14) = uVar21;
      uVar18 = (uint)(bVar2 >> ((byte)uVar21 & 0x1f)) & (1 << ((byte)uVar15 & 0x1f)) - 1U |
               uVar18 << ((byte)uVar15 & 0x1f);
      uVar14 = uVar14 - uVar15;
    } while (uVar14 != 0);
    plVar3 = *(longlong **)(param_1 + 0x10);
    uVar14 = 8;
    puVar17[-1] = (char)uVar18;
    uVar18 = 0;
    uVar21 = *(uint *)((longlong)plVar3 + 0x14);
    do {
      if (uVar21 == 0) {
        *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
        uVar21 = 8;
        *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
      }
      uVar15 = uVar14;
      if (uVar21 <= uVar14) {
        uVar15 = uVar21;
      }
      uVar21 = uVar21 - uVar15;
      bVar2 = *(byte *)((longlong)(int)plVar3[2] + *plVar3);
      *(uint *)((longlong)plVar3 + 0x14) = uVar21;
      uVar18 = (uint)(bVar2 >> ((byte)uVar21 & 0x1f)) & (1 << ((byte)uVar15 & 0x1f)) - 1U |
               uVar18 << ((byte)uVar15 & 0x1f);
      uVar14 = uVar14 - uVar15;
    } while (uVar14 != 0);
    plVar3 = *(longlong **)(param_1 + 0x10);
    uVar14 = 8;
    *puVar17 = (char)uVar18;
    uVar18 = 0;
    uVar21 = *(uint *)((longlong)plVar3 + 0x14);
    do {
      if (uVar21 == 0) {
        *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
        uVar21 = 8;
        *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
      }
      uVar15 = uVar14;
      if (uVar21 <= uVar14) {
        uVar15 = uVar21;
      }
      uVar21 = uVar21 - uVar15;
      bVar2 = *(byte *)((longlong)(int)plVar3[2] + *plVar3);
      *(uint *)((longlong)plVar3 + 0x14) = uVar21;
      uVar18 = (uint)(bVar2 >> ((byte)uVar21 & 0x1f)) & (1 << ((byte)uVar15 & 0x1f)) - 1U |
               uVar18 << ((byte)uVar15 & 0x1f);
      uVar14 = uVar14 - uVar15;
    } while (uVar14 != 0);
    plVar3 = *(longlong **)(param_1 + 0x10);
    uVar14 = 8;
    puVar17[1] = (char)uVar18;
    uVar18 = 0;
    uVar21 = *(uint *)((longlong)plVar3 + 0x14);
    do {
      if (uVar21 == 0) {
        *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
        uVar21 = 8;
        *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
      }
      uVar15 = uVar14;
      if (uVar21 <= uVar14) {
        uVar15 = uVar21;
      }
      uVar21 = uVar21 - uVar15;
      bVar2 = *(byte *)((longlong)(int)plVar3[2] + *plVar3);
      *(uint *)((longlong)plVar3 + 0x14) = uVar21;
      uVar18 = (uint)(bVar2 >> ((byte)uVar21 & 0x1f)) & (1 << ((byte)uVar15 & 0x1f)) - 1U |
               uVar18 << ((byte)uVar15 & 0x1f);
      uVar14 = uVar14 - uVar15;
    } while (uVar14 != 0);
    plVar3 = *(longlong **)(param_1 + 0x10);
    uVar14 = 8;
    puVar17[2] = (char)uVar18;
    uVar18 = 0;
    uVar21 = *(uint *)((longlong)plVar3 + 0x14);
    do {
      if (uVar21 == 0) {
        *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
        uVar21 = 8;
        *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
      }
      uVar15 = uVar14;
      if (uVar21 <= uVar14) {
        uVar15 = uVar21;
      }
      uVar21 = uVar21 - uVar15;
      bVar2 = *(byte *)((longlong)(int)plVar3[2] + *plVar3);
      *(uint *)((longlong)plVar3 + 0x14) = uVar21;
      uVar18 = (uint)(bVar2 >> ((byte)uVar21 & 0x1f)) & (1 << ((byte)uVar15 & 0x1f)) - 1U |
               uVar18 << ((byte)uVar15 & 0x1f);
      uVar14 = uVar14 - uVar15;
    } while (uVar14 != 0);
    plVar3 = *(longlong **)(param_1 + 0x10);
    uVar14 = 8;
    puVar17[3] = (char)uVar18;
    uVar18 = 0;
    uVar21 = *(uint *)((longlong)plVar3 + 0x14);
    do {
      if (uVar21 == 0) {
        *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
        uVar21 = 8;
        *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
      }
      uVar15 = uVar14;
      if (uVar21 <= uVar14) {
        uVar15 = uVar21;
      }
      uVar21 = uVar21 - uVar15;
      bVar2 = *(byte *)((longlong)(int)plVar3[2] + *plVar3);
      *(uint *)((longlong)plVar3 + 0x14) = uVar21;
      uVar18 = (uint)(bVar2 >> ((byte)uVar21 & 0x1f)) & (1 << ((byte)uVar15 & 0x1f)) - 1U |
               uVar18 << ((byte)uVar15 & 0x1f);
      uVar14 = uVar14 - uVar15;
    } while (uVar14 != 0);
    plVar3 = *(longlong **)(param_1 + 0x10);
    uVar14 = 8;
    puVar17[4] = (char)uVar18;
    uVar18 = 0;
    uVar21 = *(uint *)((longlong)plVar3 + 0x14);
    do {
      if (uVar21 == 0) {
        *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
        uVar21 = 8;
        *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
      }
      uVar15 = uVar14;
      if (uVar21 <= uVar14) {
        uVar15 = uVar21;
      }
      uVar21 = uVar21 - uVar15;
      bVar2 = *(byte *)((longlong)(int)plVar3[2] + *plVar3);
      *(uint *)((longlong)plVar3 + 0x14) = uVar21;
      uVar18 = (uint)(bVar2 >> ((byte)uVar21 & 0x1f)) & (1 << ((byte)uVar15 & 0x1f)) - 1U |
               uVar18 << ((byte)uVar15 & 0x1f);
      uVar14 = uVar14 - uVar15;
    } while (uVar14 != 0);
    puVar17[5] = (char)uVar18;
    puVar17 = puVar17 + 8;
    lVar26 = lVar26 + -1;
  } while (lVar26 != 0);
  iVar23 = 0;
  lVar26 = 9;
  local_110 = (undefined8 *)0x0;
  local_104 = 0;
  local_fc = 0;
  local_108 = 9;
  local_1f8 = param_1;
  local_1e8 = param_2;
  local_190 = param_3;
  TArray<unsigned_int,TInlineAllocator<9,FDefaultAllocator>_>::ResizeGrow(local_138,0);
  local_68 = 0;
  puVar11 = local_138;
  if (local_110 != (undefined8 *)0x0) {
    puVar11 = local_110;
  }
  *puVar11 = 0;
  puVar11[1] = 0;
  puVar11[2] = 0;
  puVar11[3] = 0;
  *(undefined4 *)(puVar11 + 4) = 0;
  local_88 = (undefined1 *)0x0;
  local_7c = 0;
  local_74 = 0;
  local_80 = 0;
  TArray<FIntVector,TInlineAllocator<9,FDefaultAllocator>_>::ResizeTo(local_f8,9);
  uVar1 = local_68;
  piVar24 = local_1e8;
  uVar22 = (ulonglong)local_80;
  puVar17 = local_88;
  do {
    local_80 = (int)uVar22 + 1;
    if ((int)local_7c < (int)local_80) {
      TArray<FIntVector,TInlineAllocator<9,FDefaultAllocator>_>::ResizeGrow(local_f8,uVar22);
      puVar17 = local_88;
    }
    puVar13 = local_f8;
    if (puVar17 != (undefined1 *)0x0) {
      puVar13 = puVar17;
    }
    puVar11 = (undefined8 *)(puVar13 + (longlong)(int)uVar22 * 0xc);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = uVar1;
      *(undefined4 *)(puVar11 + 1) = 0;
      puVar17 = local_88;
    }
    uVar22 = (ulonglong)local_80;
    lVar26 = lVar26 + -1;
  } while (lVar26 != 0);
  local_1f0 = 0;
  uVar19 = 0xffffffffffffffff;
  local_1c8 = param_4 / 3;
  iVar7 = iVar23;
  iVar8 = iVar23;
  if (local_1c8 == 0) {
LAB_1408c2f1b:
    if (puVar17 != (undefined1 *)0x0) {
      FMemory::Free(puVar17);
    }
    if (local_110 != (undefined8 *)0x0) {
      FMemory::Free();
    }
    return;
  }
LAB_1408c2690:
  local_1d4 = *piVar24;
  local_1dc = 0;
  local_1d0 = *(int *)(local_190 + (longlong)piVar24);
  local_1cc = *(int *)((longlong)piVar24 + local_190 * 2);
  iVar12 = 0;
  local_68 = CONCAT44(local_1d0,local_1d4);
  local_60 = local_1cc;
  if (((iVar23 == local_1d4) || (iVar23 == local_1d0)) || (iVar23 == local_1cc)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if (((iVar7 == local_1d4) || (iVar7 == local_1d0)) || (iVar7 == local_1cc)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (((iVar8 == local_1d4) || (iVar8 == local_1d0)) || (iVar8 == local_1cc)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  local_1e0 = local_1dc;
  if (bVar4) {
    if (bVar5) {
      local_1dc = 1;
      local_1e0 = 2;
      iVar12 = 0;
    }
    else {
      iVar12 = local_1dc;
      if (bVar6) {
        iVar12 = 1;
        local_1dc = 2;
        local_1e0 = 0;
      }
    }
  }
  else if ((bVar6) && (bVar5)) {
    iVar12 = 2;
    local_1dc = 0;
    local_1e0 = 1;
  }
  local_198 = 3;
  local_1dc = local_1e0 - local_1dc;
  local_1a0 = (uint *)&local_68;
  local_208 = 2 - local_1e0;
  local_1e0 = local_1e0 - iVar12;
  local_188 = uVar19;
  do {
    uVar21 = 0;
    local_1d8 = *local_1a0;
    uVar27 = (ulonglong)local_1d8;
    uVar19 = local_188;
    if ((longlong)local_188 <= (longlong)uVar27) {
      uVar19 = uVar27;
    }
    if ((longlong)local_188 < (longlong)uVar27) {
      local_188 = uVar19;
      iVar23 = FHuffmanTable::Decode(param_1 + 0x3b28,*(undefined8 *)(param_1 + 0x10));
      lVar26 = param_1 + 0x9f0;
      iVar7 = FHuffmanTable::Decode(lVar26,*(undefined8 *)(param_1 + 0x10));
      if (iVar7 != 0x20) {
        plVar3 = *(longlong **)(param_1 + 0x10);
        if (iVar7 < 0x21) {
          uVar14 = 0x1f - iVar7;
          if (uVar14 != 0) {
            uVar18 = *(uint *)((longlong)plVar3 + 0x14);
            iVar7 = (int)plVar3[2];
            uVar15 = uVar14;
            do {
              if (uVar18 == 0) {
                iVar7 = iVar7 + 1;
                *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
                *(int *)(plVar3 + 2) = iVar7;
                uVar18 = 8;
              }
              uVar16 = uVar15;
              if (uVar18 <= uVar15) {
                uVar16 = uVar18;
              }
              uVar18 = uVar18 - uVar16;
              bVar2 = *(byte *)((longlong)iVar7 + *plVar3);
              *(uint *)((longlong)plVar3 + 0x14) = uVar18;
              uVar21 = (uint)(bVar2 >> ((byte)uVar18 & 0x1f)) & (1 << ((byte)uVar16 & 0x1f)) - 1U |
                       uVar21 << ((byte)uVar16 & 0x1f);
              uVar15 = uVar15 - uVar16;
            } while (uVar15 != 0);
          }
          uVar21 = -(1 << ((byte)uVar14 & 0x1f)) - uVar21;
        }
        else {
          uVar14 = iVar7 - 0x21;
          if (uVar14 != 0) {
            uVar18 = *(uint *)((longlong)plVar3 + 0x14);
            iVar7 = (int)plVar3[2];
            uVar15 = uVar14;
            do {
              if (uVar18 == 0) {
                iVar7 = iVar7 + 1;
                *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
                *(int *)(plVar3 + 2) = iVar7;
                uVar18 = 8;
              }
              uVar16 = uVar15;
              if (uVar18 <= uVar15) {
                uVar16 = uVar18;
              }
              uVar18 = uVar18 - uVar16;
              bVar2 = *(byte *)((longlong)iVar7 + *plVar3);
              *(uint *)((longlong)plVar3 + 0x14) = uVar18;
              uVar21 = (uint)(bVar2 >> ((byte)uVar18 & 0x1f)) & (1 << ((byte)uVar16 & 0x1f)) - 1U |
                       uVar21 << ((byte)uVar16 & 0x1f);
              uVar15 = uVar15 - uVar16;
              param_1 = local_1f8;
            } while (uVar15 != 0);
          }
          uVar21 = (1 << ((byte)uVar14 & 0x1f)) + uVar21;
        }
      }
      iVar7 = FHuffmanTable::Decode(lVar26,*(undefined8 *)(param_1 + 0x10));
      if (iVar7 == 0x20) {
        iVar7 = 0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x10);
        if (iVar7 < 0x21) {
          uVar14 = 0;
          uVar18 = 0x1f - iVar7;
          if (uVar18 != 0) {
            uVar15 = *(uint *)((longlong)plVar3 + 0x14);
            iVar7 = (int)plVar3[2];
            uVar16 = uVar18;
            do {
              if (uVar15 == 0) {
                iVar7 = iVar7 + 1;
                *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
                *(int *)(plVar3 + 2) = iVar7;
                uVar15 = 8;
              }
              uVar20 = uVar16;
              if (uVar15 <= uVar16) {
                uVar20 = uVar15;
              }
              uVar15 = uVar15 - uVar20;
              bVar2 = *(byte *)((longlong)iVar7 + *plVar3);
              *(uint *)((longlong)plVar3 + 0x14) = uVar15;
              uVar14 = (uint)(bVar2 >> ((byte)uVar15 & 0x1f)) & (1 << ((byte)uVar20 & 0x1f)) - 1U |
                       uVar14 << ((byte)uVar20 & 0x1f);
              uVar16 = uVar16 - uVar20;
              param_1 = local_1f8;
            } while (uVar16 != 0);
          }
          iVar7 = -(1 << ((byte)uVar18 & 0x1f)) - uVar14;
        }
        else {
          uVar14 = iVar7 - 0x21;
          uVar18 = 0;
          if (uVar14 != 0) {
            uVar15 = *(uint *)((longlong)plVar3 + 0x14);
            iVar7 = (int)plVar3[2];
            uVar16 = uVar14;
            do {
              if (uVar15 == 0) {
                iVar7 = iVar7 + 1;
                *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
                *(int *)(plVar3 + 2) = iVar7;
                uVar15 = 8;
              }
              uVar20 = uVar16;
              if (uVar15 <= uVar16) {
                uVar20 = uVar15;
              }
              uVar15 = uVar15 - uVar20;
              bVar2 = *(byte *)((longlong)iVar7 + *plVar3);
              *(uint *)((longlong)plVar3 + 0x14) = uVar15;
              uVar18 = (uint)(bVar2 >> ((byte)uVar15 & 0x1f)) & (1 << ((byte)uVar20 & 0x1f)) - 1U |
                       uVar18 << ((byte)uVar20 & 0x1f);
              uVar16 = uVar16 - uVar20;
              param_1 = local_1f8;
            } while (uVar16 != 0);
          }
          iVar7 = (1 << ((byte)uVar14 & 0x1f)) + uVar18;
        }
      }
      iVar8 = FHuffmanTable::Decode(lVar26);
      if (iVar8 == 0x20) {
        iVar8 = 0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x10);
        if (iVar8 < 0x21) {
          uVar18 = 0x1f - iVar8;
          uVar14 = 0;
          if (uVar18 != 0) {
            uVar15 = *(uint *)((longlong)plVar3 + 0x14);
            iVar8 = (int)plVar3[2];
            uVar16 = uVar18;
            do {
              if (uVar15 == 0) {
                iVar8 = iVar8 + 1;
                *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
                *(int *)(plVar3 + 2) = iVar8;
                uVar15 = 8;
              }
              uVar20 = uVar16;
              if (uVar15 <= uVar16) {
                uVar20 = uVar15;
              }
              uVar15 = uVar15 - uVar20;
              bVar2 = *(byte *)((longlong)iVar8 + *plVar3);
              *(uint *)((longlong)plVar3 + 0x14) = uVar15;
              uVar14 = (uint)(bVar2 >> ((byte)uVar15 & 0x1f)) & (1 << ((byte)uVar20 & 0x1f)) - 1U |
                       uVar14 << ((byte)uVar20 & 0x1f);
              uVar16 = uVar16 - uVar20;
            } while (uVar16 != 0);
          }
          iVar8 = -(1 << ((byte)uVar18 & 0x1f)) - uVar14;
        }
        else {
          uVar18 = iVar8 - 0x21;
          uVar14 = 0;
          if (uVar18 != 0) {
            uVar15 = *(uint *)((longlong)plVar3 + 0x14);
            iVar8 = (int)plVar3[2];
            uVar16 = uVar18;
            uVar14 = 0;
            do {
              if (uVar15 == 0) {
                iVar8 = iVar8 + 1;
                *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
                *(int *)(plVar3 + 2) = iVar8;
                uVar15 = 8;
              }
              uVar20 = uVar16;
              if (uVar15 <= uVar16) {
                uVar20 = uVar15;
              }
              uVar15 = uVar15 - uVar20;
              bVar2 = *(byte *)((longlong)iVar8 + *plVar3);
              *(uint *)((longlong)plVar3 + 0x14) = uVar15;
              uVar14 = (uint)(bVar2 >> ((byte)uVar15 & 0x1f)) & (1 << ((byte)uVar20 & 0x1f)) - 1U |
                       uVar14 << ((byte)uVar20 & 0x1f);
              uVar16 = uVar16 - uVar20;
            } while (uVar16 != 0);
          }
          iVar8 = (1 << ((byte)uVar18 & 0x1f)) + uVar14;
        }
      }
      if (iVar23 == 0) {
        uVar14 = 0;
        if (local_80 == 0) {
LAB_1408c2c55:
          uVar14 = local_80 - 1;
        }
LAB_1408c2c59:
        lVar26 = (longlong)(int)((uVar14 + local_7c._4_4_) % local_80);
        puVar17 = local_f8;
        if (local_88 != (undefined1 *)0x0) {
          puVar17 = local_88;
        }
        local_204 = *(int *)(puVar17 + lVar26 * 0xc);
        local_1fc = *(int *)(puVar17 + lVar26 * 0xc + 4);
        local_200 = *(int *)(puVar17 + lVar26 * 0xc + 8);
      }
      else {
        if (iVar23 == 1) {
          uVar14 = 1;
LAB_1408c2c50:
          if (local_80 <= uVar14) goto LAB_1408c2c55;
          goto LAB_1408c2c59;
        }
        if (iVar23 == 2) {
          uVar14 = 2;
          goto LAB_1408c2c50;
        }
        if (iVar23 == 3) {
          uVar14 = local_1e0 + local_208;
          if (local_80 <= uVar14) {
            uVar14 = local_80 - 1;
          }
          puVar17 = local_f8;
          if (local_88 != (undefined1 *)0x0) {
            puVar17 = local_88;
          }
          lVar26 = (longlong)(int)((uVar14 + local_7c._4_4_) % local_80);
          uVar14 = local_1dc + local_208;
          if (local_80 <= uVar14) {
            uVar14 = local_80 - 1;
          }
          lVar9 = (longlong)(int)((uVar14 + local_7c._4_4_) % local_80);
          local_170 = *(undefined8 *)(puVar17 + lVar9 * 0xc);
          uVar14 = local_208;
          if (local_80 <= local_208) {
            uVar14 = local_80 - 1;
          }
          lVar10 = (longlong)(int)((uVar14 + local_7c._4_4_) % local_80);
          local_160 = *(undefined8 *)(puVar17 + lVar10 * 0xc);
          local_1c4._0_4_ = (int)*(undefined8 *)(puVar17 + lVar26 * 0xc);
          local_1c4._0_4_ = (int)local_1c4 + (int)local_170;
          local_1c4._4_4_ = (int)((ulonglong)*(undefined8 *)(puVar17 + lVar26 * 0xc) >> 0x20);
          local_1c4._4_4_ = local_1c4._4_4_ + (int)((ulonglong)local_170 >> 0x20);
          local_204 = (int)local_1c4 - (int)local_160;
          local_150 = local_1c4;
          local_1fc = local_1c4._4_4_ - (int)((ulonglong)local_160 >> 0x20);
          local_200 = (*(int *)(puVar17 + lVar26 * 0xc + 8) + *(int *)(puVar17 + lVar9 * 0xc + 8)) -
                      *(int *)(puVar17 + lVar10 * 0xc + 8);
        }
      }
      local_74 = (local_74 + 1) % local_80;
      uVar14 = (local_7c._4_4_ + -1 + local_80) % local_80;
      local_7c = CONCAT44(uVar14,(int)local_7c);
      puVar17 = local_f8;
      if (local_88 != (undefined1 *)0x0) {
        puVar17 = local_88;
      }
      lVar26 = (longlong)(int)uVar14;
      *(uint *)(puVar17 + lVar26 * 0xc) = local_204 + uVar21;
      *(int *)(puVar17 + lVar26 * 0xc + 4) = local_1fc + iVar7;
      *(int *)(puVar17 + lVar26 * 0xc + 8) = local_200 + iVar8;
      local_13c = (float)(local_174 + local_200 + iVar8) * local_180;
      *local_1a8 = CONCAT44((float)(local_178 + local_1fc + iVar7) * local_180,
                            (float)(int)(local_17c + local_204 + uVar21) * local_180);
      *(float *)(local_1a8 + 1) = local_13c;
      local_1a8 = (undefined8 *)((longlong)local_1a8 + param_6);
    }
    else {
      iVar23 = 0;
      uVar14 = (uint)uVar22;
      if (uVar14 == 0) {
        iVar23 = -1;
      }
      puVar13 = local_f8;
      if (puVar17 != (undefined1 *)0x0) {
        puVar13 = puVar17;
      }
      lVar26 = (longlong)(int)((ulonglong)(uint)(iVar23 + local_7c._4_4_) % uVar22);
      uVar1 = *(undefined8 *)(puVar13 + lVar26 * 0xc);
      uVar25 = *(undefined4 *)(puVar13 + lVar26 * 0xc + 8);
      if (local_fc != 0) {
        puVar11 = local_138;
        if (local_110 != (undefined8 *)0x0) {
          puVar11 = local_110;
        }
        do {
          uVar18 = uVar21;
          if (local_108 <= uVar21) {
            uVar18 = local_108 - 1;
          }
          if (*(uint *)((longlong)puVar11 +
                       (longlong)(int)((uVar18 + local_104._4_4_) % local_108) * 4) == local_1d8) {
            if (uVar14 <= uVar21) {
              uVar21 = uVar14 - 1;
            }
            lVar26 = (longlong)(int)((ulonglong)(local_7c._4_4_ + uVar21) % uVar22);
            local_1b8._0_4_ = *(undefined4 *)(puVar13 + lVar26 * 0xc);
            local_1b8._4_4_ = *(undefined4 *)(puVar13 + lVar26 * 0xc + 4);
            uVar25 = *(undefined4 *)(puVar13 + lVar26 * 0xc + 8);
            goto LAB_1408c2dff;
          }
          uVar21 = uVar21 + 1;
        } while (uVar21 < local_fc);
      }
      local_1b8._0_4_ = (undefined4)uVar1;
      local_1b8._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
LAB_1408c2dff:
      local_74 = (uint)((ulonglong)(local_74 + 1) % uVar22);
      iVar23 = (int)((ulonglong)(local_7c._4_4_ + -1 + uVar14) % uVar22);
      local_7c = CONCAT44(iVar23,(int)local_7c);
      lVar26 = (longlong)iVar23;
      *(undefined4 *)(puVar13 + lVar26 * 0xc) = (undefined4)local_1b8;
      *(undefined4 *)(puVar13 + lVar26 * 0xc + 4) = local_1b8._4_4_;
      *(undefined4 *)(puVar13 + lVar26 * 0xc + 8) = uVar25;
      local_1b8 = uVar1;
      local_188 = uVar19;
    }
    local_fc = (local_fc + 1) % local_108;
    uVar21 = (local_104._4_4_ + -1 + local_108) % local_108;
    local_104 = CONCAT44(uVar21,(undefined4)local_104);
    puVar11 = local_138;
    if (local_110 != (undefined8 *)0x0) {
      puVar11 = local_110;
    }
    local_208 = local_208 + 1;
    *(uint *)((longlong)puVar11 + (longlong)(int)uVar21 * 4) = local_1d8;
    local_1a0 = local_1a0 + 1;
    local_198 = local_198 + -1;
    puVar17 = local_88;
    param_1 = local_1f8;
    if (local_198 == 0) break;
    uVar22 = (ulonglong)local_80;
  } while( true );
  local_1f0 = local_1f0 + 1;
  piVar24 = (int *)((longlong)local_1e8 + local_190 * 3);
  local_198 = 0;
  local_1e8 = piVar24;
  if (local_1c8 <= local_1f0) goto LAB_1408c2f1b;
  uVar22 = (ulonglong)local_80;
  uVar19 = local_188;
  iVar23 = local_1d4;
  iVar7 = local_1d0;
  iVar8 = local_1cc;
  goto LAB_1408c2690;
}



// FUNCTION 1408c2f70 FUN_1408c2f70 body=334 status=ok
// SIG undefined FUN_1408c2f70(void)

undefined8 FUN_1408c2f70(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint local_res10 [2];
  undefined **local_b8 [18];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  char local_10;
  
  local_res10[0] = 0;
  plVar1 = (longlong *)IGeometryCacheStreamingManager::Get();
  local_28 = (**(code **)(*plVar1 + 0xd8))
                       (plVar1,*(undefined8 *)(*param_2 + 0x38),(int)param_2[2],local_res10);
  if (local_28 == 0) {
    return 0;
  }
  uVar2 = (ulonglong)local_res10[0];
  FArchive::FArchive(local_b8);
  local_b8[0] = &PTR__scalar_deleting_destructor__143f600f0;
  local_20 = 0;
  local_10 = '\0';
  local_18 = uVar2;
  FArchive::SetIsLoading(local_b8,1);
  FArchive::SetIsPersistent(local_b8,1);
  local_b8[0] = &PTR__scalar_deleting_destructor__143f60308;
  FUN_1408bd040(local_b8,param_2[3]);
  plVar1 = (longlong *)IGeometryCacheStreamingManager::Get();
  (**(code **)(*plVar1 + 0xe0))(plVar1,*(undefined8 *)(*param_2 + 0x38),(int)param_2[2]);
  local_b8[0] = &PTR__scalar_deleting_destructor__143f600f0;
  if (local_10 != '\0') {
    FMemory::Free(local_28);
    local_28 = 0;
  }
  FArchive::~FArchive(local_b8);
  return 1;
}



// FUNCTION 1408c30c0 FUN_1408c30c0 body=328 status=ok
// SIG undefined FUN_1408c30c0(void)

undefined8 FUN_1408c30c0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint local_res10 [2];
  undefined **local_c8 [18];
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  char local_20;
  
  local_res10[0] = 0;
  plVar1 = (longlong *)IGeometryCacheStreamingManager::Get();
  local_38 = (**(code **)(*plVar1 + 0xd8))
                       (plVar1,*(undefined8 *)(*param_2 + 0x38),(int)param_2[2],local_res10);
  if (local_38 == 0) {
    return 0;
  }
  uVar2 = (ulonglong)local_res10[0];
  FArchive::FArchive(local_c8);
  local_c8[0] = &PTR__scalar_deleting_destructor__143f600f0;
  local_30 = 0;
  local_20 = '\0';
  local_28 = uVar2;
  FArchive::SetIsLoading(local_c8,1);
  FArchive::SetIsPersistent(local_c8,1);
  local_c8[0] = &PTR__scalar_deleting_destructor__143f60308;
  (**(code **)(**(longlong **)(param_1 + 0x18) + 8))
            (*(longlong **)(param_1 + 0x18),local_c8,param_2[3]);
  plVar1 = (longlong *)IGeometryCacheStreamingManager::Get();
  (**(code **)(*plVar1 + 0xe0))(plVar1,*(undefined8 *)(*param_2 + 0x38),(int)param_2[2]);
  local_c8[0] = &PTR__scalar_deleting_destructor__143f600f0;
  if (local_20 != '\0') {
    FMemory::Free(local_38);
    local_38 = 0;
  }
  FArchive::~FArchive(local_c8);
  return 1;
}



// FUNCTION 1408c3210 FUN_1408c3210 body=420 status=ok
// SIG undefined FUN_1408c3210(void)

undefined8 FUN_1408c3210(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  void *pvVar5;
  uint local_res8 [2];
  void *local_e0;
  int local_d8;
  undefined **local_c8 [18];
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  char local_20;
  
  local_d8 = *(int *)(param_1 + 0x30);
  lVar2 = (longlong)local_d8;
  _Src = *(void **)(param_1 + 0x28);
  pvVar5 = (void *)0x0;
  local_e0 = (void *)0x0;
  if (local_d8 != 0) {
    TArray<int,FDefaultAllocator>::ResizeForCopy(&local_e0,local_d8,0,param_4,&PTR_FUN_14412bec0);
    pvVar5 = local_e0;
    _guard_xfg_dispatch_icall_nop(local_e0,_Src,lVar2 << 2);
  }
  local_res8[0] = 0;
  plVar1 = (longlong *)IGeometryCacheStreamingManager::Get();
  lVar2 = (**(code **)(*plVar1 + 0xd8))
                    (plVar1,*(undefined8 *)(*param_2 + 0x38),(int)param_2[2],local_res8);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = (ulonglong)local_res8[0];
    FArchive::FArchive(local_c8);
    local_c8[0] = &PTR__scalar_deleting_destructor__143f600f0;
    local_30 = 0;
    local_20 = '\0';
    local_38 = lVar2;
    local_28 = uVar4;
    FArchive::SetIsLoading(local_c8,1);
    FArchive::SetIsPersistent(local_c8,1);
    local_c8[0] = &PTR__scalar_deleting_destructor__143f60308;
    FUN_1408bd040(local_c8,param_2[3]);
    plVar1 = (longlong *)IGeometryCacheStreamingManager::Get();
    (**(code **)(*plVar1 + 0xe0))(plVar1,*(undefined8 *)(*param_2 + 0x38),(int)param_2[2]);
    local_c8[0] = &PTR__scalar_deleting_destructor__143f600f0;
    if (local_20 != '\0') {
      FMemory::Free(local_38);
      local_38 = 0;
    }
    FArchive::~FArchive(local_c8);
    uVar3 = 1;
  }
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  return uVar3;
}



// FUNCTION 1408c33c0 FUN_1408c33c0 body=328 status=ok
// SIG undefined FUN_1408c33c0(void)

undefined8 FUN_1408c33c0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint local_res10 [2];
  undefined **local_c8 [18];
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  char local_20;
  
  local_res10[0] = 0;
  plVar1 = (longlong *)IGeometryCacheStreamingManager::Get();
  local_38 = (**(code **)(*plVar1 + 0xd8))
                       (plVar1,*(undefined8 *)(*param_2 + 0x38),(int)param_2[2],local_res10);
  if (local_38 == 0) {
    return 0;
  }
  uVar2 = (ulonglong)local_res10[0];
  FArchive::FArchive(local_c8);
  local_c8[0] = &PTR__scalar_deleting_destructor__143f600f0;
  local_30 = 0;
  local_20 = '\0';
  local_28 = uVar2;
  FArchive::SetIsLoading(local_c8,1);
  FArchive::SetIsPersistent(local_c8,1);
  local_c8[0] = &PTR__scalar_deleting_destructor__143f60308;
  (**(code **)(**(longlong **)(param_1 + 0x38) + 8))
            (*(longlong **)(param_1 + 0x38),local_c8,param_2[3]);
  plVar1 = (longlong *)IGeometryCacheStreamingManager::Get();
  (**(code **)(*plVar1 + 0xe0))(plVar1,*(undefined8 *)(*param_2 + 0x38),(int)param_2[2]);
  local_c8[0] = &PTR__scalar_deleting_destructor__143f600f0;
  if (local_20 != '\0') {
    FMemory::Free(local_38);
    local_38 = 0;
  }
  FArchive::~FArchive(local_c8);
  return 1;
}



// FUNCTION 1408c3510 DecodeUVStream body=1896 status=ok
// SIG undefined DecodeUVStream(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FCodecV1Decoder::DecodeUVStream
               (longlong param_1,float *param_2,longlong param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  float local_140;
  ulonglong local_138;
  undefined8 local_130;
  float *local_120;
  longlong local_118;
  undefined8 local_110;
  undefined1 local_f8 [112];
  undefined1 *local_88;
  uint local_80;
  undefined8 local_7c;
  uint local_74;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  local_138 = CONCAT44(local_138._4_4_,param_4);
  puVar11 = (undefined1 *)((longlong)&local_148 + 2);
  lVar17 = 2;
  uVar7 = 0;
  local_130 = param_1;
  local_120 = param_2;
  local_118 = param_3;
  do {
    plVar3 = *(longlong **)(param_1 + 0x10);
    uVar12 = 8;
    uVar14 = *(uint *)((longlong)plVar3 + 0x14);
    iVar15 = (int)plVar3[2];
    uVar9 = uVar7;
    do {
      if (uVar14 == 0) {
        iVar15 = iVar15 + 1;
        *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
        *(int *)(plVar3 + 2) = iVar15;
        uVar14 = 8;
      }
      uVar13 = uVar12;
      if (uVar14 <= uVar12) {
        uVar13 = uVar14;
      }
      uVar14 = uVar14 - uVar13;
      bVar2 = *(byte *)((longlong)iVar15 + *plVar3);
      *(uint *)((longlong)plVar3 + 0x14) = uVar14;
      uVar9 = (uint)(bVar2 >> ((byte)uVar14 & 0x1f)) & (1 << ((byte)uVar13 & 0x1f)) - 1U |
              uVar9 << ((byte)uVar13 & 0x1f);
      uVar12 = uVar12 - uVar13;
    } while (uVar12 != 0);
    plVar3 = *(longlong **)(param_1 + 0x10);
    puVar11[-2] = (char)uVar9;
    uVar12 = 8;
    uVar14 = *(uint *)((longlong)plVar3 + 0x14);
    uVar9 = uVar7;
    do {
      if (uVar14 == 0) {
        *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
        uVar14 = 8;
        *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
      }
      uVar13 = uVar12;
      if (uVar14 <= uVar12) {
        uVar13 = uVar14;
      }
      uVar14 = uVar14 - uVar13;
      bVar2 = *(byte *)((longlong)(int)plVar3[2] + *plVar3);
      *(uint *)((longlong)plVar3 + 0x14) = uVar14;
      uVar9 = (uint)(bVar2 >> ((byte)uVar14 & 0x1f)) & (1 << ((byte)uVar13 & 0x1f)) - 1U |
              uVar9 << ((byte)uVar13 & 0x1f);
      uVar12 = uVar12 - uVar13;
    } while (uVar12 != 0);
    plVar3 = *(longlong **)(param_1 + 0x10);
    uVar12 = 8;
    puVar11[-1] = (char)uVar9;
    uVar14 = *(uint *)((longlong)plVar3 + 0x14);
    uVar9 = uVar7;
    do {
      if (uVar14 == 0) {
        *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
        uVar14 = 8;
        *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
      }
      uVar13 = uVar12;
      if (uVar14 <= uVar12) {
        uVar13 = uVar14;
      }
      uVar14 = uVar14 - uVar13;
      bVar2 = *(byte *)((longlong)(int)plVar3[2] + *plVar3);
      *(uint *)((longlong)plVar3 + 0x14) = uVar14;
      uVar9 = (uint)(bVar2 >> ((byte)uVar14 & 0x1f)) & (1 << ((byte)uVar13 & 0x1f)) - 1U |
              uVar9 << ((byte)uVar13 & 0x1f);
      uVar12 = uVar12 - uVar13;
    } while (uVar12 != 0);
    plVar3 = *(longlong **)(param_1 + 0x10);
    uVar12 = 8;
    *puVar11 = (char)uVar9;
    uVar14 = *(uint *)((longlong)plVar3 + 0x14);
    uVar9 = uVar7;
    do {
      if (uVar14 == 0) {
        *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
        uVar14 = 8;
        *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
      }
      uVar13 = uVar12;
      if (uVar14 <= uVar12) {
        uVar13 = uVar14;
      }
      uVar14 = uVar14 - uVar13;
      bVar2 = *(byte *)((longlong)(int)plVar3[2] + *plVar3);
      *(uint *)((longlong)plVar3 + 0x14) = uVar14;
      uVar9 = (uint)(bVar2 >> ((byte)uVar14 & 0x1f)) & (1 << ((byte)uVar13 & 0x1f)) - 1U |
              uVar9 << ((byte)uVar13 & 0x1f);
      uVar12 = uVar12 - uVar13;
    } while (uVar12 != 0);
    plVar3 = *(longlong **)(param_1 + 0x10);
    uVar12 = 8;
    puVar11[1] = (char)uVar9;
    uVar14 = *(uint *)((longlong)plVar3 + 0x14);
    uVar9 = uVar7;
    do {
      if (uVar14 == 0) {
        *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
        uVar14 = 8;
        *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
      }
      uVar13 = uVar12;
      if (uVar14 <= uVar12) {
        uVar13 = uVar14;
      }
      uVar14 = uVar14 - uVar13;
      bVar2 = *(byte *)((longlong)(int)plVar3[2] + *plVar3);
      *(uint *)((longlong)plVar3 + 0x14) = uVar14;
      uVar9 = (uint)(bVar2 >> ((byte)uVar14 & 0x1f)) & (1 << ((byte)uVar13 & 0x1f)) - 1U |
              uVar9 << ((byte)uVar13 & 0x1f);
      uVar12 = uVar12 - uVar13;
    } while (uVar12 != 0);
    plVar3 = *(longlong **)(param_1 + 0x10);
    uVar12 = 8;
    puVar11[2] = (char)uVar9;
    uVar14 = *(uint *)((longlong)plVar3 + 0x14);
    uVar9 = uVar7;
    do {
      if (uVar14 == 0) {
        *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
        uVar14 = 8;
        *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
      }
      uVar13 = uVar12;
      if (uVar14 <= uVar12) {
        uVar13 = uVar14;
      }
      uVar14 = uVar14 - uVar13;
      bVar2 = *(byte *)((longlong)(int)plVar3[2] + *plVar3);
      *(uint *)((longlong)plVar3 + 0x14) = uVar14;
      uVar9 = (uint)(bVar2 >> ((byte)uVar14 & 0x1f)) & (1 << ((byte)uVar13 & 0x1f)) - 1U |
              uVar9 << ((byte)uVar13 & 0x1f);
      uVar12 = uVar12 - uVar13;
    } while (uVar12 != 0);
    puVar11[3] = (char)uVar9;
    puVar11 = puVar11 + 6;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  fVar20 = local_148._4_4_;
  if (local_148._4_4_ <= local_140) {
    fVar20 = local_140;
  }
  fVar19 = ::_guard_xfg_dispatch_icall_nop(2.0,(float)(int)local_148);
  lVar17 = 9;
  local_148 = 0;
  local_88 = (undefined1 *)0x0;
  local_7c = 0;
  local_74 = 0;
  local_80 = 0;
  TArray<FIntVector,TInlineAllocator<9,FDefaultAllocator>_>::ResizeTo(local_f8,9);
  uVar4 = local_148;
  iVar15 = (int)local_138;
  uVar18 = local_138 & 0xffffffff;
  puVar11 = local_88;
  do {
    uVar7 = local_80;
    lVar10 = (longlong)(int)local_80;
    local_80 = local_80 + 1;
    if ((int)local_7c < (int)local_80) {
      TArray<FIntVector,TInlineAllocator<9,FDefaultAllocator>_>::ResizeGrow(local_f8,uVar7);
      puVar11 = local_88;
    }
    lVar5 = local_130;
    puVar8 = local_f8;
    if (puVar11 != (undefined1 *)0x0) {
      puVar8 = puVar11;
    }
    puVar1 = (undefined8 *)(puVar8 + lVar10 * 0xc);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = uVar4;
      *(undefined4 *)(puVar1 + 1) = 0;
      puVar11 = local_88;
    }
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  if (iVar15 != 0) {
    do {
      uVar7 = 0;
      local_138 = uVar18;
      iVar15 = FHuffmanTable::Decode(lVar5 + 0x3150,*(undefined8 *)(lVar5 + 0x10));
      if (iVar15 == 0x20) {
        iVar15 = 0;
      }
      else {
        plVar3 = *(longlong **)(lVar5 + 0x10);
        if (iVar15 < 0x21) {
          uVar14 = 0x1f - iVar15;
          if (uVar14 != 0) {
            uVar9 = *(uint *)((longlong)plVar3 + 0x14);
            iVar15 = (int)plVar3[2];
            uVar12 = uVar14;
            uVar7 = 0;
            do {
              if (uVar9 == 0) {
                iVar15 = iVar15 + 1;
                *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
                *(int *)(plVar3 + 2) = iVar15;
                uVar9 = 8;
              }
              uVar13 = uVar12;
              if (uVar9 <= uVar12) {
                uVar13 = uVar9;
              }
              uVar9 = uVar9 - uVar13;
              bVar2 = *(byte *)((longlong)iVar15 + *plVar3);
              *(uint *)((longlong)plVar3 + 0x14) = uVar9;
              uVar7 = (uint)(bVar2 >> ((byte)uVar9 & 0x1f)) & (1 << ((byte)uVar13 & 0x1f)) - 1U |
                      uVar7 << ((byte)uVar13 & 0x1f);
              uVar12 = uVar12 - uVar13;
            } while (uVar12 != 0);
          }
          iVar15 = -(1 << ((byte)uVar14 & 0x1f)) - uVar7;
        }
        else {
          uVar14 = iVar15 - 0x21;
          if (uVar14 != 0) {
            uVar9 = *(uint *)((longlong)plVar3 + 0x14);
            iVar15 = (int)plVar3[2];
            uVar12 = uVar14;
            uVar7 = 0;
            do {
              if (uVar9 == 0) {
                iVar15 = iVar15 + 1;
                *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
                *(int *)(plVar3 + 2) = iVar15;
                uVar9 = 8;
              }
              uVar13 = uVar12;
              if (uVar9 <= uVar12) {
                uVar13 = uVar9;
              }
              uVar9 = uVar9 - uVar13;
              bVar2 = *(byte *)((longlong)iVar15 + *plVar3);
              *(uint *)((longlong)plVar3 + 0x14) = uVar9;
              uVar7 = (uint)(bVar2 >> ((byte)uVar9 & 0x1f)) & (1 << ((byte)uVar13 & 0x1f)) - 1U |
                      uVar7 << ((byte)uVar13 & 0x1f);
              uVar12 = uVar12 - uVar13;
            } while (uVar12 != 0);
          }
          iVar15 = (1 << ((byte)uVar14 & 0x1f)) + uVar7;
        }
      }
      uVar7 = 0;
      local_148 = CONCAT44(local_148._4_4_,iVar15);
      iVar6 = FHuffmanTable::Decode(lVar5 + 0x3150);
      if (iVar6 == 0x20) {
        iVar6 = 0;
      }
      else {
        plVar3 = *(longlong **)(lVar5 + 0x10);
        if (iVar6 < 0x21) {
          uVar7 = 0;
          uVar14 = 0x1f - iVar6;
          if (uVar14 != 0) {
            uVar9 = *(uint *)((longlong)plVar3 + 0x14);
            iVar6 = (int)plVar3[2];
            uVar12 = uVar14;
            uVar7 = 0;
            do {
              if (uVar9 == 0) {
                iVar6 = iVar6 + 1;
                *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
                *(int *)(plVar3 + 2) = iVar6;
                uVar9 = 8;
              }
              uVar13 = uVar12;
              if (uVar9 <= uVar12) {
                uVar13 = uVar9;
              }
              uVar9 = uVar9 - uVar13;
              bVar2 = *(byte *)((longlong)iVar6 + *plVar3);
              *(uint *)((longlong)plVar3 + 0x14) = uVar9;
              uVar7 = (uint)(bVar2 >> ((byte)uVar9 & 0x1f)) & (1 << ((byte)uVar13 & 0x1f)) - 1U |
                      uVar7 << ((byte)uVar13 & 0x1f);
              uVar12 = uVar12 - uVar13;
              uVar18 = local_138;
            } while (uVar12 != 0);
          }
          iVar6 = -(1 << ((byte)uVar14 & 0x1f)) - uVar7;
        }
        else {
          uVar14 = iVar6 - 0x21;
          if (uVar14 != 0) {
            uVar9 = *(uint *)((longlong)plVar3 + 0x14);
            iVar6 = (int)plVar3[2];
            uVar12 = uVar14;
            do {
              if (uVar9 == 0) {
                iVar6 = iVar6 + 1;
                *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
                *(int *)(plVar3 + 2) = iVar6;
                uVar9 = 8;
              }
              uVar13 = uVar12;
              if (uVar9 <= uVar12) {
                uVar13 = uVar9;
              }
              uVar9 = uVar9 - uVar13;
              bVar2 = *(byte *)((longlong)iVar6 + *plVar3);
              *(uint *)((longlong)plVar3 + 0x14) = uVar9;
              uVar7 = (uint)(bVar2 >> ((byte)uVar9 & 0x1f)) & (1 << ((byte)uVar13 & 0x1f)) - 1U |
                      uVar7 << ((byte)uVar13 & 0x1f);
              uVar12 = uVar12 - uVar13;
              uVar18 = local_138;
            } while (uVar12 != 0);
          }
          iVar6 = (1 << ((byte)uVar14 & 0x1f)) + uVar7;
        }
      }
      iVar16 = 0;
      local_148 = CONCAT44(iVar6,(int)local_148);
      if (local_80 == 0) {
        iVar16 = -1;
      }
      puVar11 = local_f8;
      if (local_88 != (undefined1 *)0x0) {
        puVar11 = local_88;
      }
      lVar17 = (longlong)(int)((uint)(local_7c._4_4_ + iVar16) % local_80);
      local_110 = *(undefined8 *)(puVar11 + lVar17 * 0xc);
      iVar16 = *(int *)(puVar11 + lVar17 * 0xc + 8);
      iVar15 = (int)local_110 + iVar15;
      iVar6 = iVar6 + (int)((ulonglong)local_110 >> 0x20);
      local_130 = CONCAT44(iVar6,iVar15);
      local_74 = (local_74 + 1) % local_80;
      uVar7 = (local_7c._4_4_ + -1 + local_80) % local_80;
      local_7c = CONCAT44(uVar7,(int)local_7c);
      lVar17 = (longlong)(int)uVar7;
      *local_120 = (float)iVar15 * (fVar20 / (float)(int)fVar19);
      local_120[1] = (float)iVar6 * (fVar20 / (float)(int)fVar19);
      local_120 = (float *)((longlong)local_120 + local_118);
      uVar18 = uVar18 - 1;
      *(int *)(puVar11 + lVar17 * 0xc) = iVar15;
      *(int *)(puVar11 + lVar17 * 0xc + 4) = iVar6;
      *(int *)(puVar11 + lVar17 * 0xc + 8) = (int)local_140 + iVar16;
    } while (uVar18 != 0);
    local_138 = 0;
    puVar11 = local_88;
  }
  if (puVar11 != (undefined1 *)0x0) {
    FMemory::Free(puVar11);
  }
  return;
}



// FUNCTION 1408c3c80 FUN_1408c3c80 body=106 status=ok
// SIG undefined FUN_1408c3c80(void)

void FUN_1408c3c80(longlong *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  LARGE_INTEGER local_res8 [3];
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  lVar3 = *param_1;
  uVar1 = *(undefined1 *)((longlong)param_1 + 0xd);
  uVar2 = *(undefined1 *)((longlong)param_1 + 0xc);
  lVar4 = param_1[1];
  *(int *)(lVar3 + 0x3b0) = (int)param_1[2];
  *(int *)(lVar3 + 0x3a8) = (int)lVar4;
  *(undefined1 *)(lVar3 + 0x3ac) = uVar2;
  *(undefined1 *)(lVar3 + 0x3ad) = uVar1;
  QueryPerformanceCounter(local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8[0].s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 1408c3cf0 Empty body=427 status=ok
// SIG undefined Empty(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TArray<FGeometryCacheMeshData,FDefaultAllocator>::Empty(longlong *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  
  iVar3 = (int)param_1[1];
  plVar4 = (longlong *)*param_1;
  if (iVar3 != 0) {
    piVar2 = (int *)((longlong)plVar4 + 0x1c);
    do {
      piVar2[-5] = 0;
      if (piVar2[-4] != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                  (plVar4,0);
      }
      piVar2[-1] = 0;
      if (*piVar2 != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(piVar2 + -3);
      }
      piVar2[3] = 0;
      if (piVar2[4] != 0) {
        TArray<float,FDefaultAllocator>::ResizeTo(piVar2 + 1);
      }
      piVar2[7] = 0;
      if (piVar2[8] != 0) {
        TArray<float,FDefaultAllocator>::ResizeTo(piVar2 + 5);
      }
      piVar2[0xb] = 0;
      if (piVar2[0xc] != 0) {
        TArray<float,FDefaultAllocator>::ResizeTo(piVar2 + 9);
      }
      piVar2[0xf] = 0;
      if (piVar2[0x10] != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                  (piVar2 + 0xd,0);
      }
      piVar2[0x13] = 0;
      if (piVar2[0x14] != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                  (piVar2 + 0x11,0);
      }
      *(undefined8 *)(piVar2 + 0x18) = _DAT_1468b5d90;
      iVar1 = DAT_1468b5d98;
      piVar2[0x1a] = DAT_1468b5d98;
      *(undefined8 *)(piVar2 + 0x15) = *(undefined8 *)(piVar2 + 0x18);
      piVar2[0x17] = iVar1;
      *(undefined1 *)(piVar2 + 0x1b) = 0;
      if (*(longlong *)(piVar2 + 0x1d) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(piVar2 + 0x11) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(piVar2 + 0xd) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(piVar2 + 9) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(piVar2 + 5) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(piVar2 + 1) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(piVar2 + -3) != 0) {
        FMemory::Free();
      }
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 0x15;
      piVar2 = piVar2 + 0x2a;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  TArray<FDragonData_SpineFeetPair,FDefaultAllocator>::ResizeTo(param_1,param_2);
  return;
}



// FUNCTION 1408c3ea0 Empty body=181 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo();
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar2 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar2) {
    *(uint *)(param_1 + 0x2c) = uVar2;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  cVar1 = ConditionalRehash(param_1,param_2,1);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar5 = 0;
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar5;
      uVar5 = uVar5 + 1;
      *(undefined4 *)(lVar4 + uVar3 * 4) = 0xffffffff;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 1408c3f60 FUN_1408c3f60 body=274 status=ok
// SIG undefined FUN_1408c3f60(void)

void FUN_1408c3f60(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  FGeomCacheVertexFactory::Init_RenderThread
            (param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],param_1[7],param_1[8]);
  *(undefined1 *)(param_1 + 9) = 0;
  *param_1 = &PTR_FUN_14412e3e0;
  if (param_1[10] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[10] + 0x48);
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



// FUNCTION 1408c4080 FUN_1408c4080 body=237 status=ok
// SIG undefined FUN_1408c4080(void)

void FUN_1408c4080(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_1408c3c80(param_1 + 2,param_3,param_1 + 6);
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_14412e2e0;
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x48);
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



// FUNCTION 1408c4170 FindSampleIndexFromTime body=146 status=ok
// SIG undefined FindSampleIndexFromTime(void)

uint UGeometryCacheTrack::FindSampleIndexFromTime
               (longlong param_1,undefined8 *param_2,float param_3,char param_4)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  
  if (1 < *(uint *)(param_2 + 1)) {
    if (param_4 != '\0') {
      fVar6 = param_3 / *(float *)(param_1 + 0x28);
      param_3 = param_3 - (float)((int)ROUND((fVar6 + fVar6) - 0.5) >> 1) *
                          *(float *)(param_1 + 0x28);
    }
    pfVar1 = (float *)*param_2;
    uVar5 = *(uint *)(param_2 + 1) - 1;
    if (pfVar1[(int)uVar5] <= param_3) {
      return uVar5;
    }
    uVar3 = 0;
    if (*pfVar1 <= param_3 && param_3 != *pfVar1) {
      while ((uVar2 = uVar3, uVar5 != 0 && (uVar2 <= uVar5))) {
        uVar4 = uVar5 + uVar2 >> 1;
        uVar3 = uVar4 + 1;
        if (param_3 <= pfVar1[uVar4]) {
          uVar5 = uVar4 - 1;
          uVar3 = uVar2;
        }
      }
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1408c4210 FindSampleIndexFromTime body=172 status=ok
// SIG undefined FindSampleIndexFromTime(void)

int UGeometryCacheTrackStreamable::FindSampleIndexFromTime
              (longlong param_1,float param_2,char param_3)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  
  if (1 < *(uint *)(param_1 + 0x80)) {
    if (param_3 != '\0') {
      fVar6 = param_2 / *(float *)(param_1 + 0x28);
      param_2 = param_2 - (float)((int)ROUND((fVar6 + fVar6) - 0.5) >> 1) *
                          *(float *)(param_1 + 0x28);
    }
    param_2 = param_2 + *(float *)(param_1 + 0x188);
    pfVar1 = *(float **)(param_1 + 0x78);
    iVar5 = *(uint *)(param_1 + 0x80) - 1;
    if (pfVar1[(longlong)iVar5 * 10] <= param_2) {
      return iVar5;
    }
    iVar3 = 0;
    if (*pfVar1 <= param_2 && param_2 != *pfVar1) {
      while ((iVar2 = iVar5, 0 < iVar2 && (iVar3 < iVar2))) {
        iVar4 = (iVar3 + 1 + iVar2) / 2;
        iVar5 = iVar4 + -1;
        if (pfVar1[(longlong)iVar4 * 10] <= param_2) {
          iVar5 = iVar2;
          iVar3 = iVar4;
        }
      }
      return iVar3;
    }
  }
  return 0;
}



// FUNCTION 1408c42c0 FindSampleIndexesFromTime body=335 status=ok
// SIG undefined FindSampleIndexesFromTime(void)

void UGeometryCacheTrackStreamable::FindSampleIndexesFromTime
               (longlong param_1,float param_2,char param_3,char param_4,int *param_5,int *param_6,
               float *param_7)

{
  float fVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  if (*(uint *)(param_1 + 0x80) < 2) {
    *param_5 = 0;
    *param_6 = 0;
    *param_7 = 0.0;
  }
  else {
    iVar3 = FindSampleIndexFromTime();
    *param_5 = iVar3;
    iVar3 = iVar3 + 1;
    if (param_3 == '\0') {
      iVar4 = *(int *)(param_1 + 0x80) + -1;
      if (iVar3 <= iVar4) {
        iVar4 = iVar3;
      }
    }
    else {
      iVar4 = iVar3 % *(int *)(param_1 + 0x80);
    }
    *param_6 = iVar4;
    lVar2 = *(longlong *)(param_1 + 0x78);
    fVar1 = *(float *)(lVar2 + (longlong)*param_5 * 0x28);
    fVar6 = *(float *)(lVar2 + (longlong)iVar4 * 0x28) - fVar1;
    if (1e-08 < ABS(fVar6)) {
      if (param_3 == '\0') {
        if (0.0 <= param_2) {
          fVar5 = *(float *)(lVar2 + -0x28 + (longlong)*(int *)(param_1 + 0x80) * 0x28);
          if (param_2 <= fVar5) {
            fVar5 = param_2;
          }
        }
        else {
          fVar5 = 0.0;
        }
      }
      else {
        fVar5 = param_2 / *(float *)(param_1 + 0x28);
        fVar5 = param_2 - (float)((int)ROUND((fVar5 + fVar5) - 0.5) >> 1) *
                          *(float *)(param_1 + 0x28);
      }
      fVar6 = (fVar5 - fVar1) / fVar6;
    }
    else {
      fVar6 = 0.0;
    }
    *param_7 = fVar6;
    if (param_4 != '\0') {
      iVar3 = *param_5;
      *param_5 = *param_6;
      *param_6 = iVar3;
      *param_7 = 1.0 - *param_7;
    }
  }
  return;
}



// FUNCTION 1408c4420 FinishDestroy body=43 status=ok
// SIG undefined FinishDestroy(void)

void UGeometryCacheTrackStreamable::FinishDestroy(undefined8 param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)IGeometryCacheStreamingManager::Get();
  (**(code **)(*plVar1 + 0xa0))(plVar1,param_1);
  FUN_141755460(param_1);
  return;
}



// FUNCTION 1408c4450 GenerateCodewords body=1348 status=ok
// SIG undefined GenerateCodewords(void)

void FHuffmanTable::GenerateCodewords(longlong param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  longlong lVar6;
  int *piVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  int *piVar14;
  ulonglong uVar15;
  int iVar16;
  char *pcVar17;
  char *pcVar18;
  int *piVar19;
  char *local_28;
  undefined8 local_20;
  
  uVar8 = 0;
  local_28 = (char *)0x0;
  local_20 = 0;
  uVar11 = *(int *)(param_1 + 0x94) + 1;
  if (uVar11 != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(&local_28,uVar11);
  }
  pcVar18 = local_28;
  if (0 < (int)uVar11) {
    uVar10 = (ulonglong)uVar11;
    do {
      uVar15 = local_20;
      lVar12 = (longlong)(int)local_20;
      iVar3 = (int)local_20 + 1;
      local_20 = CONCAT44(local_20._4_4_,iVar3);
      if (local_20._4_4_ < iVar3) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_28,uVar15 & 0xffffffff);
        pcVar18 = local_28;
      }
      if (pcVar18 + lVar12 != (char *)0x0) {
        pcVar18[lVar12] = '\0';
      }
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  local_28 = (char *)0x0;
  local_20 = 0;
  uVar11 = *(int *)(param_1 + 0x94) + 1;
  if (uVar11 != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(&local_28,uVar11);
  }
  pcVar17 = local_28;
  if (0 < (int)uVar11) {
    uVar10 = (ulonglong)uVar11;
    do {
      uVar15 = local_20;
      lVar12 = (longlong)(int)local_20;
      iVar3 = (int)local_20 + 1;
      local_20 = CONCAT44(local_20._4_4_,iVar3);
      if (local_20._4_4_ < iVar3) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_28,uVar15 & 0xffffffff);
        pcVar17 = local_28;
      }
      pcVar1 = pcVar17 + lVar12 * 4;
      if (pcVar1 != (char *)0x0) {
        pcVar1[0] = '\0';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
      }
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  piVar19 = (int *)(param_1 + 0x34);
  iVar3 = 1;
  uVar10 = uVar8;
  uVar15 = uVar8;
  piVar14 = piVar19;
  do {
    iVar4 = 1;
    if (0 < *piVar14) {
      do {
        pcVar18[uVar10] = (char)iVar3;
        uVar15 = (ulonglong)((int)uVar15 + 1);
        uVar10 = uVar10 + 1;
        iVar4 = iVar4 + 1;
      } while (iVar4 <= *piVar14);
    }
    iVar3 = iVar3 + 1;
    piVar14 = piVar14 + 1;
  } while (iVar3 < 0x19);
  lVar12 = (longlong)(int)uVar15;
  pcVar18[lVar12] = '\0';
  iVar3 = (int)*pcVar18;
  cVar2 = *pcVar18;
  iVar4 = iVar3;
  uVar10 = uVar8;
  uVar15 = uVar8;
  while (cVar2 != '\0') {
    uVar11 = (uint)uVar15;
    while (iVar4 == iVar3) {
      *(int *)(pcVar17 + uVar10 * 4) = (int)uVar15;
      uVar10 = uVar10 + 1;
      uVar11 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar11;
      iVar4 = (int)pcVar18[uVar10];
    }
    uVar15 = (ulonglong)(uVar11 * 2);
    iVar3 = iVar3 + 1;
    cVar2 = pcVar18[uVar10];
  }
  uVar10 = uVar8;
  uVar15 = uVar8;
  if (0 < *(int *)(param_1 + 0x94)) {
    do {
      uVar11 = (int)uVar15 + 1;
      *(undefined4 *)(uVar10 + *(longlong *)(param_1 + 0x20)) = 0;
      *(undefined4 *)(uVar10 + 4 + *(longlong *)(param_1 + 0x20)) = 0;
      uVar10 = uVar10 + 8;
      uVar15 = (ulonglong)uVar11;
    } while ((int)uVar11 < *(int *)(param_1 + 0x94));
  }
  uVar10 = uVar8;
  if (0 < lVar12) {
    do {
      *(undefined4 *)
       (*(longlong *)(param_1 + 0x20) +
       (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + uVar10 * 4) * 8) =
           *(undefined4 *)(pcVar17 + uVar10 * 4);
      uVar15 = uVar10 + 1;
      *(int *)(*(longlong *)(param_1 + 0x20) + 4 +
              (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + uVar10 * 4) * 8) =
           (int)pcVar18[uVar10];
      uVar10 = uVar15;
    } while ((longlong)uVar15 < lVar12);
  }
  *(undefined8 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  piVar14 = (int *)(param_1 + 0x38);
  piVar7 = (int *)(param_1 + 0xac);
  lVar12 = 2;
  uVar10 = uVar8;
  do {
    if (piVar14[-1] == 0) {
      piVar7[-2] = 0;
      iVar3 = -1;
      *piVar7 = 0;
    }
    else {
      iVar3 = (int)uVar10;
      *piVar7 = iVar3;
      piVar7[-2] = *(int *)(pcVar17 + (longlong)iVar3 * 4);
      uVar10 = (ulonglong)(uint)(iVar3 + piVar14[-1]);
      iVar3 = *(int *)(pcVar17 + (longlong)(iVar3 + piVar14[-1]) * 4 + -4);
    }
    piVar7[-1] = iVar3;
    if (*piVar14 == 0) {
      piVar7[2] = -1;
      piVar7[1] = 0;
      piVar7[3] = 0;
    }
    else {
      iVar3 = (int)uVar10;
      piVar7[3] = iVar3;
      piVar7[1] = *(int *)(pcVar17 + (longlong)iVar3 * 4);
      uVar10 = (ulonglong)(uint)(iVar3 + *piVar14);
      piVar7[2] = *(int *)(pcVar17 + (longlong)(iVar3 + *piVar14) * 4 + -4);
    }
    if (piVar14[1] == 0) {
      piVar7[5] = -1;
      piVar7[4] = 0;
      piVar7[6] = 0;
    }
    else {
      iVar3 = (int)uVar10;
      piVar7[6] = iVar3;
      piVar7[4] = *(int *)(pcVar17 + (longlong)iVar3 * 4);
      uVar10 = (ulonglong)(uint)(iVar3 + piVar14[1]);
      piVar7[5] = *(int *)(pcVar17 + (longlong)(iVar3 + piVar14[1]) * 4 + -4);
    }
    if (piVar14[2] == 0) {
      piVar7[8] = -1;
      piVar7[7] = 0;
      piVar7[9] = 0;
    }
    else {
      iVar3 = (int)uVar10;
      piVar7[9] = iVar3;
      piVar7[7] = *(int *)(pcVar17 + (longlong)iVar3 * 4);
      uVar10 = (ulonglong)(uint)(iVar3 + piVar14[2]);
      piVar7[8] = *(int *)(pcVar17 + (longlong)(iVar3 + piVar14[2]) * 4 + -4);
    }
    if (piVar14[3] == 0) {
      piVar7[0xb] = -1;
      piVar7[10] = 0;
      piVar7[0xc] = 0;
    }
    else {
      iVar3 = (int)uVar10;
      piVar7[0xc] = iVar3;
      piVar7[10] = *(int *)(pcVar17 + (longlong)iVar3 * 4);
      uVar10 = (ulonglong)(uint)(iVar3 + piVar14[3]);
      piVar7[0xb] = *(int *)(pcVar17 + (longlong)(iVar3 + piVar14[3]) * 4 + -4);
    }
    if (piVar14[4] == 0) {
      piVar7[0xe] = -1;
      piVar7[0xd] = 0;
      piVar7[0xf] = 0;
    }
    else {
      iVar3 = (int)uVar10;
      piVar7[0xf] = iVar3;
      piVar7[0xd] = *(int *)(pcVar17 + (longlong)iVar3 * 4);
      uVar10 = (ulonglong)(uint)(iVar3 + piVar14[4]);
      piVar7[0xe] = *(int *)(pcVar17 + (longlong)(iVar3 + piVar14[4]) * 4 + -4);
    }
    if (piVar14[5] == 0) {
      piVar7[0x11] = -1;
      piVar7[0x10] = 0;
      piVar7[0x12] = 0;
    }
    else {
      iVar3 = (int)uVar10;
      piVar7[0x12] = iVar3;
      piVar7[0x10] = *(int *)(pcVar17 + (longlong)iVar3 * 4);
      uVar10 = (ulonglong)(uint)(iVar3 + piVar14[5]);
      piVar7[0x11] = *(int *)(pcVar17 + (longlong)(iVar3 + piVar14[5]) * 4 + -4);
    }
    if (piVar14[6] == 0) {
      piVar7[0x14] = -1;
      piVar7[0x13] = 0;
      piVar7[0x15] = 0;
    }
    else {
      iVar3 = (int)uVar10;
      piVar7[0x15] = iVar3;
      piVar7[0x13] = *(int *)(pcVar17 + (longlong)iVar3 * 4);
      uVar10 = (ulonglong)(uint)(iVar3 + piVar14[6]);
      piVar7[0x14] = *(int *)(pcVar17 + (longlong)(iVar3 + piVar14[6]) * 4 + -4);
    }
    if (piVar14[7] == 0) {
      piVar7[0x17] = -1;
      piVar7[0x16] = 0;
      piVar7[0x18] = 0;
    }
    else {
      iVar3 = (int)uVar10;
      piVar7[0x18] = iVar3;
      piVar7[0x16] = *(int *)(pcVar17 + (longlong)iVar3 * 4);
      uVar10 = (ulonglong)(uint)(iVar3 + piVar14[7]);
      piVar7[0x17] = *(int *)(pcVar17 + (longlong)(iVar3 + piVar14[7]) * 4 + -4);
    }
    if (piVar14[8] == 0) {
      piVar7[0x1a] = -1;
      piVar7[0x19] = 0;
      piVar7[0x1b] = 0;
    }
    else {
      iVar3 = (int)uVar10;
      piVar7[0x1b] = iVar3;
      piVar7[0x19] = *(int *)(pcVar17 + (longlong)iVar3 * 4);
      uVar10 = (ulonglong)(uint)(iVar3 + piVar14[8]);
      piVar7[0x1a] = *(int *)(pcVar17 + (longlong)(iVar3 + piVar14[8]) * 4 + -4);
    }
    if (piVar14[9] == 0) {
      piVar7[0x1d] = -1;
      piVar7[0x1c] = 0;
      piVar7[0x1e] = 0;
    }
    else {
      iVar3 = (int)uVar10;
      piVar7[0x1e] = iVar3;
      piVar7[0x1c] = *(int *)(pcVar17 + (longlong)iVar3 * 4);
      uVar10 = (ulonglong)(uint)(iVar3 + piVar14[9]);
      piVar7[0x1d] = *(int *)(pcVar17 + (longlong)(iVar3 + piVar14[9]) * 4 + -4);
    }
    if (piVar14[10] == 0) {
      piVar7[0x20] = -1;
      piVar7[0x1f] = 0;
      piVar7[0x21] = 0;
    }
    else {
      iVar3 = (int)uVar10;
      piVar7[0x21] = iVar3;
      piVar7[0x1f] = *(int *)(pcVar17 + (longlong)iVar3 * 4);
      uVar10 = (ulonglong)(uint)(iVar3 + piVar14[10]);
      piVar7[0x20] = *(int *)(pcVar17 + (longlong)(iVar3 + piVar14[10]) * 4 + -4);
    }
    piVar14 = piVar14 + 0xc;
    piVar7 = piVar7 + 0x24;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  *(undefined4 *)(param_1 + 0x1c8) = 0xffffff;
  lVar12 = param_1 + 0x1d4;
  lVar6 = 0x100;
  do {
    *(undefined8 *)(lVar12 + -4) = 0;
    lVar12 = lVar12 + 8;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  iVar3 = 7;
  iVar4 = 1;
  do {
    iVar16 = 1;
    if (0 < *piVar19) {
      iVar9 = 1 << ((byte)iVar3 & 0x1f);
      do {
        if (0 < iVar9) {
          puVar5 = (undefined4 *)
                   (param_1 + 0x1d4 +
                   (longlong)(*(int *)(pcVar17 + uVar8 * 4) << ((byte)iVar3 & 0x1f)) * 8);
          iVar13 = iVar9;
          do {
            puVar5[-1] = iVar4;
            iVar13 = iVar13 + -1;
            *puVar5 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + uVar8 * 4);
            puVar5 = puVar5 + 2;
          } while (0 < iVar13);
        }
        iVar16 = iVar16 + 1;
        uVar8 = uVar8 + 1;
      } while (iVar16 <= *piVar19);
    }
    iVar4 = iVar4 + 1;
    piVar19 = piVar19 + 1;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  if (pcVar17 != (char *)0x0) {
    FMemory::Free(pcVar17);
  }
  if (pcVar18 != (char *)0x0) {
    FMemory::Free(pcVar18);
  }
  return;
}



// FUNCTION 1408c49a0 Get body=208 status=ok
// SIG undefined Get(void)

undefined8 * IGeometryCacheStreamingManager::Get(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (DAT_146861488 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)operator_new(0xa8);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = 0;
      *puVar1 = &PTR_FUN_14412c218;
      *(undefined4 *)(puVar1 + 2) = 0;
      *puVar1 = &PTR__scalar_deleting_destructor__14412e2f8;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[7] = 0;
      puVar1[8] = 0;
      *(undefined4 *)(puVar1 + 9) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x4c) = 0;
      puVar1[0xb] = 0;
      *(undefined4 *)(puVar1 + 0xc) = 0;
      puVar1[0xd] = 0;
      puVar1[0xe] = 0;
      InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 0xf));
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar1 + 0xf),4000);
      uVar2 = IStreamingManager::Get();
      FUObjectSerializeContext::AddLoadedObject(uVar2,puVar1);
      DAT_146861488 = puVar1;
      return puVar1;
    }
    DAT_146861488 = (undefined8 *)0x0;
  }
  return DAT_146861488;
}



// FUNCTION 1408c4a70 FUN_1408c4a70 body=41 status=ok
// SIG undefined FUN_1408c4a70(void)

float FUN_1408c4a70(longlong param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_1 + 0x724);
  fVar2 = -14400.0;
  if ((-14400.0 <= fVar1) && (fVar2 = fVar1, 14400.0 <= fVar1)) {
    fVar2 = 14400.0;
  }
  return fVar2 + *(float *)(param_1 + 0x730);
}



// FUNCTION 1408c4aa0 GetAssetRegistryTags body=287 status=ok
// SIG undefined GetAssetRegistryTags(void)

void UGeometryCache::GetAssetRegistryTags(longlong param_1,longlong *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  void *pvVar6;
  undefined1 local_res8 [8];
  void *local_58;
  ulonglong local_50;
  undefined8 local_48;
  void *local_40;
  int local_38;
  undefined4 local_34;
  
  pvVar6 = (void *)0x0;
  local_58 = (void *)0x0;
  local_50 = 0;
  FString::AppendInt(&local_58,*(undefined4 *)(param_1 + 0x48));
  puVar4 = (undefined8 *)FName::FName(local_res8,"Total Tracks",1);
  _Src = local_58;
  lVar5 = (longlong)(int)local_50;
  local_40 = (void *)0x0;
  local_48 = *puVar4;
  local_38 = (int)local_50;
  if ((int)local_50 == 0) {
    local_34 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_40,local_50 & 0xffffffff,0);
    pvVar6 = local_40;
    ::_guard_xfg_dispatch_icall_nop(local_40,_Src,lVar5 * 2);
  }
  iVar3 = local_38;
  uVar2 = local_48;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_2,iVar1);
  }
  puVar4 = (undefined8 *)((longlong)iVar1 * 0x20 + *param_2);
  *puVar4 = uVar2;
  puVar4[1] = pvVar6;
  *(int *)(puVar4 + 2) = iVar3;
  *(undefined4 *)((longlong)puVar4 + 0x14) = local_34;
  puVar4[3] = 2;
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  FUN_1417557f0(param_1,param_2);
  return;
}



// FUNCTION 1408c4bc0 FUN_1408c4bc0 body=709 status=ok
// SIG undefined FUN_1408c4bc0(void)

void FUN_1408c4bc0(longlong param_1,float param_2,float param_3,char param_4,longlong *param_5)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  while( true ) {
    uVar8 = *(uint *)(param_1 + 0x80);
    fVar1 = param_3;
    if ((uVar8 != 0) &&
       (fVar1 = **(float **)(param_1 + 0x78), **(float **)(param_1 + 0x78) <= param_3)) {
      fVar1 = param_3;
    }
    param_3 = fVar1;
    if (param_4 == '\0') break;
    fVar1 = *(float *)(param_1 + 0x28);
    if (fVar1 <= param_3 - param_2) {
      iVar7 = 0;
      if (*(int *)(param_1 + 0x70) < 1) {
        return;
      }
      do {
        iVar2 = (int)param_5[1];
        *(int *)(param_5 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_5 + 0xc) < iVar2 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_5,iVar2);
        }
        *(int *)(*param_5 + (longlong)iVar2 * 4) = iVar7;
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(param_1 + 0x70));
      return;
    }
    param_2 = param_2 - (float)((int)ROUND((1.0 / fVar1) * param_2 * 2.0 - 0.5) >> 1) * fVar1;
    param_3 = param_3 - (float)((int)ROUND((1.0 / fVar1) * 2.0 * param_3 - 0.5) >> 1) * fVar1;
    if (param_2 <= param_3) break;
    FUN_1408c4bc0(param_1,param_2,fVar1,0,param_5);
    param_4 = '\0';
    param_2 = 0.0;
  }
  uVar9 = 0;
  if (uVar8 < 2) {
LAB_1408c4d65:
    uVar10 = 0;
  }
  else {
    param_2 = param_2 + *(float *)(param_1 + 0x188);
    pfVar3 = *(float **)(param_1 + 0x78);
    uVar11 = uVar8 - 1;
    uVar10 = (ulonglong)uVar11;
    if (param_2 < pfVar3[(longlong)(int)uVar11 * 10]) {
      uVar13 = uVar9;
      uVar12 = uVar10;
      if (param_2 < *pfVar3 || param_2 == *pfVar3) goto LAB_1408c4d65;
      while (uVar10 = uVar13, 0 < (int)uVar11) {
        uVar6 = (uint)uVar12;
        if ((int)uVar6 <= (int)uVar10) break;
        uVar5 = (int)((int)uVar10 + 1 + uVar6) / 2;
        uVar11 = uVar5 - 1;
        if (pfVar3[(longlong)(int)uVar5 * 10] <= param_2) {
          uVar10 = (ulonglong)uVar5;
          uVar11 = uVar6;
        }
        uVar13 = uVar10;
        uVar12 = (ulonglong)uVar11;
      }
    }
  }
  if (1 < uVar8) {
    param_3 = param_3 + *(float *)(param_1 + 0x188);
    uVar8 = uVar8 - 1;
    uVar12 = (ulonglong)uVar8;
    pfVar3 = *(float **)(param_1 + 0x78);
    if (pfVar3[(longlong)(int)uVar8 * 10] <= param_3) goto LAB_1408c4ddb;
    uVar4 = uVar9;
    uVar13 = uVar12;
    if (*pfVar3 <= param_3 && param_3 != *pfVar3) {
      while (uVar12 = uVar4, 0 < (int)uVar8) {
        uVar11 = (uint)uVar13;
        if ((int)uVar11 <= (int)uVar12) break;
        uVar6 = (int)((int)uVar12 + 1 + uVar11) / 2;
        uVar8 = uVar6 - 1;
        if (pfVar3[(longlong)(int)uVar6 * 10] <= param_3) {
          uVar12 = (ulonglong)uVar6;
          uVar8 = uVar11;
        }
        uVar4 = uVar12;
        uVar13 = (ulonglong)uVar8;
      }
      goto LAB_1408c4ddb;
    }
  }
  uVar12 = 0;
LAB_1408c4ddb:
  if (0 < *(int *)(param_1 + 0x70)) {
    uVar13 = uVar9;
    do {
      if ((*(float *)(*(longlong *)(param_1 + 0x68) + 4 + uVar13) <= (float)uVar12) &&
         (pfVar3 = (float *)(*(longlong *)(param_1 + 0x68) + 8 + uVar13),
         (float)uVar10 < *pfVar3 || (float)uVar10 == *pfVar3)) {
        iVar7 = (int)param_5[1];
        *(int *)(param_5 + 1) = iVar7 + 1;
        if (*(int *)((longlong)param_5 + 0xc) < iVar7 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_5,iVar7);
        }
        *(int *)(*param_5 + (longlong)iVar7 * 4) = (int)uVar9;
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
      uVar13 = uVar13 + 0x80;
    } while ((int)uVar8 < *(int *)(param_1 + 0x70));
  }
  return;
}



// FUNCTION 1408c4e90 GetDesc body=162 status=ok
// SIG undefined GetDesc(void)

undefined8 * UGeometryCache::GetDesc(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 local_18;
  undefined8 local_10;
  
  iVar1 = *(int *)(param_1 + 0x48);
  iVar3 = 0;
  local_10 = 10;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  uVar2 = local_18;
  FGenericPlatformString::Convert<char,wchar_t>(local_18,10,"%d Tracks",10,0x3f);
  if (((int)local_10 == 0) && (iVar1 != 0)) {
    iVar3 = 1;
  }
  *param_2 = uVar2;
  *(int *)(param_2 + 1) = (int)local_10;
  *(int *)((longlong)param_2 + 0xc) = local_10._4_4_;
  if (local_10._4_4_ < iVar3 + (int)local_10 + iVar1) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2);
  }
  return param_2;
}



// FUNCTION 1408c4f40 GetBoundaryMin body=9 status=ok
// SIG undefined GetBoundaryMin(void)

undefined4 USplineMeshComponent::GetBoundaryMin(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x764);
}



// FUNCTION 1408c4f60 FUN_1408c4f60 body=8438 status=ok
// SIG undefined FUN_1408c4f60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408c4f60(longlong *param_1,longlong param_2,undefined8 param_3,uint param_4,
                  longlong *param_5)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  double dVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
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
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  bool bVar27;
  bool bVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  char cVar32;
  char cVar33;
  uint uVar34;
  int iVar35;
  int iVar36;
  longlong lVar37;
  longlong *plVar38;
  undefined8 uVar39;
  undefined8 *puVar40;
  longlong lVar41;
  int iVar42;
  uint uVar43;
  longlong *plVar44;
  undefined8 *puVar45;
  char cVar46;
  longlong lVar47;
  longlong lVar48;
  longlong lVar49;
  longlong lVar50;
  float *pfVar51;
  longlong lVar52;
  longlong lVar53;
  undefined4 *puVar54;
  longlong lVar55;
  undefined4 uVar56;
  double dVar57;
  double dVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar61;
  float fVar62;
  float fVar63;
  undefined1 auStack_4f8 [32];
  longlong local_4d8;
  undefined1 local_4d0;
  undefined1 local_4c8;
  undefined1 local_4c0;
  undefined1 local_4b8;
  undefined1 local_4b0;
  undefined1 local_4a8;
  byte local_4a0;
  undefined4 local_498;
  undefined4 local_490;
  undefined8 *local_488;
  char local_478;
  undefined8 local_470;
  undefined1 local_468 [4];
  undefined4 local_464;
  undefined4 local_460;
  undefined8 local_458;
  float local_450;
  longlong *local_448;
  longlong local_438;
  float local_430;
  longlong *local_428;
  longlong local_420;
  uint local_418;
  undefined4 local_414;
  uint local_410;
  longlong *local_408;
  longlong *local_400;
  undefined *local_3f8;
  undefined1 *puStack_3f0;
  longlong local_3e8;
  uint local_3e0;
  undefined4 local_3dc;
  longlong local_3d8;
  uint local_3d0;
  undefined4 local_3cc;
  longlong local_3c8;
  ulonglong local_3c0;
  longlong *local_3b8;
  longlong *local_3b0;
  longlong local_3a8;
  uint local_3a0;
  undefined4 local_39c;
  longlong local_398;
  uint local_390;
  undefined4 local_38c;
  undefined *local_388;
  undefined1 *puStack_380;
  undefined4 *local_378;
  float local_370;
  longlong local_368;
  longlong local_360;
  longlong local_358;
  int local_350;
  longlong local_348;
  longlong local_340;
  longlong local_338;
  int local_330;
  longlong local_328;
  longlong local_320;
  longlong local_318;
  int local_310;
  longlong local_308;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  uint local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  uint local_294;
  undefined4 local_290;
  undefined4 local_28c;
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  undefined1 local_248 [416];
  ulonglong local_a8;
  
  local_a8 = DAT_1468387a8 ^ (ulonglong)auStack_4f8;
  uVar34 = 0;
  if (0 < *(int *)(param_2 + 8)) {
    do {
      if ((param_4 >> (uVar34 & 0x1f) & 1) != 0) {
        iVar36 = (int)param_1[0x78];
        plVar44 = (longlong *)param_1[0x77];
        plVar38 = plVar44 + iVar36;
        local_448 = param_1;
        local_428 = plVar38;
        local_410 = param_4;
        local_400 = plVar44;
        local_368 = param_2;
        if (plVar44 != plVar38) {
          do {
            plVar6 = (longlong *)*plVar44;
            if ((plVar6 != (longlong *)0x0) &&
               (local_400 = plVar44,
               lVar37 = UGeometryCacheTrackStreamable::GetVisibilitySample
                                  (*(undefined8 *)(plVar6[0x130] + 0x38),(int)param_1[0x75],
                                   *(undefined1 *)((longlong)param_1 + 0x3ac)), plVar38 = local_428,
               *(char *)(lVar37 + 0x10) != '\0')) {
              local_408 = *(longlong **)(*plVar6 + 0x60);
              local_3b0 = (longlong *)
                          ((longlong)local_408 + (longlong)*(int *)(*plVar6 + 0x68) * 0xc);
              if (local_408 != local_3b0) {
                do {
                  (**(code **)(**(longlong **)plVar6[3] + 0x2a8))
                            (*(longlong **)plVar6[3],(*(uint *)(param_1 + 3) & 0x300) != 0,0);
                  lVar37 = plVar6[0x130];
                  fVar63 = *(float *)(param_1 + 0x75);
                  lVar47 = *(longlong *)(lVar37 + 0x38);
                  uVar34 = *(uint *)(lVar47 + 0x80);
                  if (uVar34 < 2) {
                    iVar35 = 0;
                    fVar62 = 0.0;
                    iVar36 = 0;
                  }
                  else {
                    cVar33 = *(char *)((longlong)param_1 + 0x3ac);
                    iVar35 = UGeometryCacheTrackStreamable::FindSampleIndexFromTime
                                       (lVar47,fVar63,cVar33);
                    iVar36 = iVar35 + 1;
                    if (cVar33 == '\0') {
                      iVar42 = uVar34 - 1;
                      if (iVar36 <= (int)(uVar34 - 1)) {
                        iVar42 = iVar36;
                      }
                    }
                    else {
                      iVar42 = iVar36 % (int)uVar34;
                    }
                    lVar53 = *(longlong *)(lVar47 + 0x78);
                    fVar4 = *(float *)(lVar53 + (longlong)iVar35 * 0x28);
                    fVar62 = *(float *)(lVar53 + (longlong)iVar42 * 0x28) - fVar4;
                    if (1e-08 < ABS(fVar62)) {
                      if (*(char *)((longlong)param_1 + 0x3ac) == '\0') {
                        if (0.0 <= fVar63) {
                          fVar61 = *(float *)(lVar53 + -0x28 + (longlong)(int)uVar34 * 0x28);
                          if (fVar63 <= fVar61) {
                            fVar61 = fVar63;
                          }
                        }
                        else {
                          fVar61 = 0.0;
                        }
                      }
                      else {
                        fVar61 = fVar63 / *(float *)(lVar47 + 0x28);
                        fVar61 = fVar63 - (float)((int)ROUND((fVar61 + fVar61) - 0.5) >> 1) *
                                          *(float *)(lVar47 + 0x28);
                      }
                      fVar62 = (fVar61 - fVar4) / fVar62;
                    }
                    else {
                      fVar62 = 0.0;
                    }
                    iVar36 = iVar42;
                    if (*(char *)((longlong)param_1 + 0x3ad) != '\0') {
                      fVar62 = 1.0 - fVar62;
                      iVar36 = iVar35;
                      iVar35 = iVar42;
                    }
                  }
                  lVar47 = plVar6[2];
                  bVar28 = false;
                  iVar42 = *(int *)((longlong)plVar6 + 0x14);
                  bVar27 = false;
                  local_478 = '\0';
                  if (((int)lVar47 != iVar35) || (cVar33 = local_478, iVar42 != iVar36)) {
                    if (iVar42 == iVar35) {
                      local_348 = *plVar6;
                      *plVar6 = plVar6[1];
                      *(int *)(plVar6 + 2) = iVar42;
                      plVar6[1] = local_348;
                      *(int *)((longlong)plVar6 + 0x14) = (int)lVar47;
                      local_358 = *(longlong *)(lVar37 + 0x38) + 0x68;
                      local_360 = lVar37;
                      local_350 = iVar36;
                      cVar32 = (**(code **)(**(longlong **)(lVar37 + 0x30) + 0x10))
                                         (*(longlong **)(lVar37 + 0x30),&local_360);
                      cVar33 = local_478;
                      if (cVar32 == '\0') {
                        bVar27 = true;
                        *(undefined4 *)((longlong)plVar6 + 0x14) = 0xffffffff;
                      }
                      else {
                        bVar28 = true;
                        *(int *)((longlong)plVar6 + 0x14) = iVar36;
                      }
                    }
                    else {
                      local_338 = *(longlong *)(lVar37 + 0x38) + 0x68;
                      local_328 = *plVar6;
                      local_340 = lVar37;
                      local_330 = iVar35;
                      cVar33 = (**(code **)(**(longlong **)(lVar37 + 0x30) + 0x10))
                                         (*(longlong **)(lVar37 + 0x30),&local_340);
                      if (cVar33 == '\0') {
                        *(undefined4 *)(plVar6 + 2) = 0xffffffff;
                        bVar27 = true;
                        cVar33 = local_478;
                      }
                      else {
                        TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=
                                  (plVar6[1] + 0x90,*plVar6 + 0x90);
                        local_320 = plVar6[0x130];
                        local_318 = *(longlong *)(local_320 + 0x38) + 0x68;
                        local_308 = plVar6[1];
                        local_310 = iVar36;
                        cVar33 = (**(code **)(**(longlong **)(local_320 + 0x30) + 0x10))
                                           (*(longlong **)(local_320 + 0x30),&local_320);
                        if (cVar33 == '\0') {
                          bVar27 = true;
                          *(undefined4 *)((longlong)plVar6 + 0x14) = 0xffffffff;
                          cVar33 = '\0';
                        }
                        else {
                          *(int *)(plVar6 + 2) = iVar35;
                          bVar28 = true;
                          *(int *)((longlong)plVar6 + 0x14) = iVar36;
                          cVar33 = '\x01';
                          bVar27 = false;
                        }
                      }
                    }
                  }
                  cVar32 = (**(code **)(**(longlong **)(plVar6[0x130] + 0x30) + 0x18))
                                     (*(longlong **)(plVar6[0x130] + 0x30),(int)plVar6[2]);
                  lVar37 = *plVar6;
                  if ((((*(char *)(lVar37 + 0xa4) == '\0') ||
                       (lVar47 = plVar6[1], *(char *)(lVar47 + 0xa4) == '\0')) ||
                      (*(int *)(lVar37 + 8) != *(int *)(lVar37 + 0x58))) ||
                     (*(int *)(lVar47 + 8) != *(int *)(lVar47 + 0x58))) {
                    cVar46 = '\0';
                  }
                  else {
                    cVar46 = '\x01';
                  }
                  local_478 = cVar46;
                  if (((cVar32 == '\0') || (bVar27)) || (*(int *)(DAT_146861440 + 4) == 0)) {
                    if ((bVar28) || (bVar27)) {
                      if (*(char *)(lVar37 + 0xa0) != '\0') {
                        local_4d8 = CONCAT44(local_4d8._4_4_,1);
                        FUN_1408cc5c0(plVar6 + 0x18,*(undefined8 *)(lVar37 + 0x20),
                                      *(int *)(lVar37 + 0x28) << 2,1);
                        lVar37 = *plVar6;
                      }
                      if (*(char *)(lVar37 + 0xa1) != '\0') {
                        local_4d8 = CONCAT44(local_4d8._4_4_,1);
                        FUN_1408cc5c0(plVar6 + 0x20,*(undefined8 *)(lVar37 + 0x30),
                                      *(int *)(lVar37 + 0x38) << 2,1);
                        lVar37 = *plVar6;
                      }
                      if (*(char *)(lVar37 + 0xa7) == '\0') {
                        FUN_1408cbf20(plVar6 + 0x38,lVar37 + 0x90);
                        lVar37 = *plVar6;
                      }
                      if (*(char *)(lVar37 + 0xa2) != '\0') {
                        local_4d8 = CONCAT44(local_4d8._4_4_,1);
                        FUN_1408cc5c0(plVar6 + 0x28,*(undefined8 *)(lVar37 + 0x10),
                                      *(int *)(lVar37 + 0x18) << 3,1);
                        lVar37 = *plVar6;
                      }
                      if (*(char *)(lVar37 + 0xa3) != '\0') {
                        local_4d8 = CONCAT44(local_4d8._4_4_,1);
                        FUN_1408cc5c0(plVar6 + 0x30,*(undefined8 *)(lVar37 + 0x40),
                                      *(int *)(lVar37 + 0x48) << 2,1);
                      }
                      cVar32 = (**(code **)(**(longlong **)(plVar6[0x130] + 0x30) + 0x18))
                                         (*(longlong **)(plVar6[0x130] + 0x30),
                                          *(undefined4 *)
                                           ((longlong)plVar6 +
                                           (ulonglong)(*(uint *)(plVar6 + 0x17) & 1) * 4 + 0xa8),
                                          (int)plVar6[2]);
                      if (cVar46 == '\0') {
                        if ((((int)plVar6[0x17] == -1) || (cVar32 == '\0')) || (cVar33 != '\0')) {
                          local_4d8._0_4_ = 1;
                          FUN_1408cc5c0(plVar6 + 5,*(undefined8 *)*plVar6,
                                        *(int *)((undefined8 *)*plVar6 + 1) * 0xc,1);
                          local_4d8 = CONCAT44(local_4d8._4_4_,1);
                          FUN_1408cc5c0(plVar6 + 0xd,*(undefined8 *)*plVar6);
                          *(undefined4 *)(plVar6 + 0x17) = 0;
                          *(int *)(plVar6 + 0x15) = (int)plVar6[2];
                          *(int *)((longlong)plVar6 + 0xac) = (int)plVar6[2];
                        }
                        else {
                          uVar34 = (int)plVar6[0x17] + 1;
                          *(uint *)(plVar6 + 0x17) = uVar34;
                          local_4d8 = CONCAT44(local_4d8._4_4_,1);
                          FUN_1408cc5c0(plVar6 + (ulonglong)(uVar34 & 1) * 8 + 5,
                                        *(undefined8 *)*plVar6);
                          *(int *)((longlong)plVar6 +
                                  (ulonglong)(*(uint *)(plVar6 + 0x17) & 1) * 4 + 0xa8) =
                               (int)plVar6[2];
                        }
                      }
                      else {
                        *(undefined4 *)(plVar6 + 0x17) = 0;
                        local_4d8._0_4_ = 1;
                        FUN_1408cc5c0(plVar6 + 5,*(undefined8 *)*plVar6,
                                      *(int *)((undefined8 *)*plVar6 + 1) * 0xc,1);
                        local_4d8 = CONCAT44(local_4d8._4_4_,1);
                        FUN_1408cc5c0(plVar6 + 0xd,*(undefined8 *)(*plVar6 + 0x50));
                        *(int *)(plVar6 + 0x15) = (int)plVar6[2];
                        *(undefined4 *)((longlong)plVar6 + 0xac) = 0xffffffff;
                        *(int *)(plVar6 + 0x16) = (int)param_1[0x75];
                        *(int *)((longlong)plVar6 + 0xb4) = (int)param_1[0x75];
                      }
                    }
                  }
                  else if (*(float *)(param_1 + 0x75) !=
                           *(float *)((longlong)plVar6 +
                                     (ulonglong)(*(uint *)(plVar6 + 0x17) & 1) * 4 + 0xb0)) {
                    uVar34 = *(uint *)(lVar37 + 8);
                    lVar53 = (longlong)(int)uVar34;
                    local_420 = 0;
                    local_414 = 0;
                    lVar37 = 0;
                    local_398 = 0;
                    local_38c = 0;
                    local_3a8 = 0;
                    local_39c = 0;
                    local_3e8 = 0;
                    local_3dc = 0;
                    local_3d8 = 0;
                    local_3cc = 0;
                    local_418 = uVar34;
                    uVar43 = uVar34;
                    uVar29 = uVar34;
                    uVar30 = uVar34;
                    uVar31 = uVar34;
                    lVar47 = local_420;
                    if (0 < (int)uVar34) {
                      TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_420,0);
                      lVar47 = local_420;
                      local_390 = uVar34;
                      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_398,0);
                      local_3a0 = uVar34;
                      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_3a8,0);
                      local_3e0 = uVar34;
                      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                (&local_3e8,0);
                      lVar37 = local_3e8;
                      local_3d0 = uVar34;
                      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_3d8,0);
                      uVar43 = local_3e0;
                      uVar29 = local_3d0;
                      uVar30 = local_3a0;
                      uVar31 = local_390;
                    }
                    local_390 = uVar31;
                    local_3a0 = uVar30;
                    local_3d0 = uVar29;
                    local_3e0 = uVar43;
                    local_3c8 = 0;
                    local_3c0 = 0;
                    if ((cVar46 != '\0') && (local_3c0 = (ulonglong)uVar34, 0 < (int)uVar34)) {
                      TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_3c8,0);
                    }
                    lVar41 = local_3c8;
                    cVar33 = local_478;
                    lVar49 = 0;
                    fVar63 = 1.0 - fVar62;
                    iVar35 = (int)(fVar62 * 255.0);
                    iVar36 = 0xff - iVar35;
                    if (3 < lVar53) {
                      local_388 = (undefined *)-lVar47;
                      puVar40 = (undefined8 *)(lVar47 + 0x18);
                      lVar48 = -lVar47;
                      lVar55 = -lVar47;
                      lVar52 = lVar55 + -0x18;
                      lVar50 = (lVar53 - 4U >> 2) + 1;
                      lVar49 = lVar50 * 4;
                      do {
                        lVar37 = *(longlong *)*plVar6;
                        lVar47 = *(longlong *)plVar6[1];
                        fVar4 = *(float *)((longlong)puVar40 + lVar37 + lVar55 + -0x10);
                        fVar61 = *(float *)((longlong)puVar40 + lVar47 + lVar55 + -0x10);
                        puVar40[-3] = CONCAT44(fVar63 * *(float *)((longlong)puVar40 +
                                                                  lVar37 + lVar55 + -0x14) +
                                               fVar62 * *(float *)((longlong)puVar40 +
                                                                  lVar47 + lVar55 + -0x14),
                                               fVar63 * *(float *)((longlong)puVar40 +
                                                                  lVar37 + lVar52) +
                                               fVar62 * *(float *)((longlong)puVar40 +
                                                                  lVar47 + lVar52));
                        *(float *)(puVar40 + -2) = fVar63 * fVar4 + fVar62 * fVar61;
                        lVar37 = *(longlong *)*plVar6;
                        lVar47 = *(longlong *)plVar6[1];
                        fVar4 = *(float *)((longlong)puVar40 + lVar37 + 0x14 + lVar52);
                        fVar61 = *(float *)((longlong)puVar40 + lVar47 + 0x14 + lVar52);
                        *(ulonglong *)((longlong)puVar40 + -0xc) =
                             CONCAT44(fVar63 * *(float *)((longlong)puVar40 + lVar37 + 0x10 + lVar52
                                                         ) +
                                      fVar62 * *(float *)((longlong)puVar40 + lVar47 + 0x10 + lVar52
                                                         ),
                                      fVar63 * *(float *)((longlong)puVar40 + lVar37 + 0xc + lVar52)
                                      + fVar62 * *(float *)((longlong)puVar40 +
                                                           lVar47 + 0xc + lVar52));
                        *(float *)((longlong)puVar40 + -4) = fVar63 * fVar4 + fVar62 * fVar61;
                        lVar37 = *(longlong *)*plVar6;
                        lVar47 = *(longlong *)plVar6[1];
                        fVar4 = *(float *)((longlong)puVar40 + (longlong)(local_388 + lVar37 + 8));
                        fVar61 = *(float *)((longlong)puVar40 + (longlong)(local_388 + lVar47 + 8));
                        *puVar40 = CONCAT44(fVar63 * *(float *)((longlong)puVar40 +
                                                               (longlong)(local_388 + lVar37 + 4)) +
                                            fVar62 * *(float *)((longlong)puVar40 +
                                                               (longlong)(local_388 + lVar47 + 4)),
                                            fVar63 * *(float *)((longlong)puVar40 +
                                                               (longlong)(local_388 + lVar37)) +
                                            fVar62 * *(float *)((longlong)puVar40 +
                                                               (longlong)(local_388 + lVar47)));
                        *(float *)(puVar40 + 1) = fVar63 * fVar4 + fVar62 * fVar61;
                        lVar37 = *(longlong *)*plVar6;
                        lVar47 = *(longlong *)plVar6[1];
                        local_430 = fVar63 * *(float *)((longlong)puVar40 + lVar37 + lVar48 + 0x14)
                                    + fVar62 * *(float *)((longlong)puVar40 + lVar47 + lVar48 + 0x14
                                                         );
                        *(ulonglong *)((longlong)puVar40 + 0xc) =
                             CONCAT44(fVar63 * *(float *)((longlong)puVar40 + lVar37 + lVar48 + 0x10
                                                         ) +
                                      fVar62 * *(float *)((longlong)puVar40 + lVar47 + lVar48 + 0x10
                                                         ),
                                      fVar63 * *(float *)((longlong)puVar40 + lVar37 + lVar48 + 0xc)
                                      + fVar62 * *(float *)((longlong)puVar40 +
                                                           lVar47 + lVar48 + 0xc));
                        *(float *)((longlong)puVar40 + 0x14) = local_430;
                        puVar40 = puVar40 + 6;
                        lVar50 = lVar50 + -1;
                        lVar37 = local_3e8;
                        lVar47 = local_420;
                      } while (lVar50 != 0);
                    }
                    if (lVar49 < lVar53) {
                      lVar48 = lVar49 * 0xc;
                      lVar49 = lVar53 - lVar49;
                      do {
                        lVar55 = *(longlong *)*plVar6;
                        lVar50 = *(longlong *)plVar6[1];
                        local_430 = fVar63 * *(float *)(lVar48 + 8 + lVar55) +
                                    fVar62 * *(float *)(lVar48 + 8 + lVar50);
                        *(ulonglong *)(lVar47 + lVar48) =
                             CONCAT44(fVar63 * *(float *)(lVar48 + 4 + lVar55) +
                                      fVar62 * *(float *)(lVar48 + 4 + lVar50),
                                      fVar63 * *(float *)(lVar48 + lVar55) +
                                      fVar62 * *(float *)(lVar48 + lVar50));
                        *(float *)(lVar47 + 8 + lVar48) = local_430;
                        lVar48 = lVar48 + 0xc;
                        lVar49 = lVar49 + -1;
                      } while (lVar49 != 0);
                    }
                    fVar4 = DAT_14627de0c;
                    lVar49 = 0;
                    if (0 < lVar53) {
                      do {
                        lVar7 = *(longlong *)(*plVar6 + 0x30);
                        lVar37 = *(longlong *)(*plVar6 + 0x20);
                        lVar47 = *(longlong *)(plVar6[1] + 0x20);
                        lVar8 = *(longlong *)(plVar6[1] + 0x30);
                        puVar54 = (undefined4 *)(local_3a8 + lVar49 * 4);
                        local_464 = CONCAT13((char)(int)((float)(*(char *)(lVar37 + 3 + lVar49 * 4)
                                                                 * iVar36 +
                                                                *(char *)(lVar47 + 3 + lVar49 * 4) *
                                                                iVar35) * fVar4),
                                             CONCAT12((char)(int)((float)(*(char *)(lVar37 + 2 +
                                                                                   lVar49 * 4) *
                                                                          iVar36 + *(char *)(lVar47 
                                                  + 2 + lVar49 * 4) * iVar35) * fVar4),
                                                  CONCAT11((char)(int)((float)(*(char *)(lVar37 + 1
                                                                                        + lVar49 * 4
                                                                                        ) * iVar36 +
                                                                              *(char *)(lVar47 + 1 +
                                                                                       lVar49 * 4) *
                                                                              iVar35) * fVar4),
                                                           (char)(int)((float)(*(char *)(lVar37 + 
                                                  lVar49 * 4) * iVar36 +
                                                  *(char *)(lVar47 + lVar49 * 4) * iVar35) * fVar4))
                                                  ));
                        *(undefined4 *)((longlong)puVar54 + (local_398 - local_3a8)) = local_464;
                        lVar37 = lVar49 * 4;
                        lVar47 = lVar49 * 4;
                        lVar48 = lVar49 * 4;
                        lVar55 = lVar49 * 4;
                        lVar50 = lVar49 * 4;
                        lVar52 = lVar49 * 4;
                        lVar2 = lVar49 * 4;
                        lVar3 = lVar49 * 4;
                        lVar49 = lVar49 + 1;
                        local_460 = CONCAT13((char)(int)((float)(*(char *)(lVar7 + 3 + lVar2) *
                                                                 iVar36 + *(char *)(lVar8 + 3 +
                                                                                   lVar3) * iVar35)
                                                        * fVar4),
                                             CONCAT12((char)(int)((float)(*(char *)(lVar7 + 2 +
                                                                                   lVar50) * iVar36
                                                                         + *(char *)(lVar8 + 2 +
                                                                                    lVar52) * iVar35
                                                                         ) * fVar4),
                                                      CONCAT11((char)(int)((float)(*(char *)(lVar7 +
                                                                                             1 + 
                                                  lVar48) * iVar36 +
                                                  *(char *)(lVar8 + 1 + lVar55) * iVar35) * fVar4),
                                                  (char)(int)((float)(*(char *)(lVar8 + lVar37) *
                                                                      iVar35 + *(char *)(lVar7 + 
                                                  lVar47) * iVar36) * fVar4))));
                        *puVar54 = local_460;
                        lVar37 = local_3e8;
                        lVar47 = local_420;
                      } while (lVar49 < lVar53);
                    }
                    lVar49 = *plVar6;
                    if (*(char *)(lVar49 + 0xa3) != '\0') {
                      lVar48 = 0;
                      if (3 < lVar53) {
                        lVar37 = -local_3d8;
                        lVar55 = lVar37 + -8;
                        local_378 = (undefined4 *)(local_3d8 + 8);
                        local_3f8 = (undefined *)-local_3d8;
                        lVar47 = -local_3d8;
                        lVar49 = (lVar53 - 4U >> 2) + 1;
                        lVar48 = lVar49 * 4;
                        puVar54 = local_378;
                        do {
                          lVar50 = *(longlong *)(*plVar6 + 0x40);
                          lVar52 = *(longlong *)(plVar6[1] + 0x40);
                          local_470._0_4_ =
                               CONCAT13((char)(int)((float)(int)((uint)*(byte *)((longlong)puVar54 +
                                                                                lVar50 + lVar37 + -5
                                                                                ) * iVar36 +
                                                                (uint)*(byte *)((longlong)puVar54 +
                                                                               lVar52 + lVar37 + -5)
                                                                * iVar35) * fVar4),
                                        CONCAT21(CONCAT11((char)(int)((float)(int)((uint)*(byte *)((
                                                  longlong)puVar54 + lVar50 + lVar37 + -6) * iVar36
                                                  + (uint)*(byte *)((longlong)puVar54 +
                                                                   lVar52 + lVar37 + -6) * iVar35) *
                                                  fVar4),(char)(int)((float)(int)((uint)*(byte *)((
                                                  longlong)puVar54 + lVar50 + lVar37 + -7) * iVar36
                                                  + (uint)*(byte *)((longlong)puVar54 +
                                                                   lVar52 + lVar37 + -7) * iVar35) *
                                                  fVar4)),(char)(int)((float)(int)((uint)*(byte *)((
                                                  longlong)puVar54 + lVar52 + lVar55) * iVar35 +
                                                  (uint)*(byte *)((longlong)puVar54 +
                                                                 lVar50 + lVar55) * iVar36) * fVar4)
                                                ));
                          puVar54[-2] = (undefined4)local_470;
                          lVar50 = *(longlong *)(*plVar6 + 0x40);
                          lVar52 = *(longlong *)(plVar6[1] + 0x40);
                          local_470._0_4_ =
                               CONCAT13((char)(int)((float)(int)((uint)*(byte *)((longlong)puVar54 +
                                                                                lVar50 + 7 + lVar55)
                                                                 * iVar36 +
                                                                (uint)*(byte *)((longlong)puVar54 +
                                                                               lVar52 + 7 + lVar55)
                                                                * iVar35) * fVar4),
                                        CONCAT21(CONCAT11((char)(int)((float)(int)((uint)*(byte *)((
                                                  longlong)puVar54 + lVar50 + 6 + lVar55) * iVar36 +
                                                  (uint)*(byte *)((longlong)puVar54 +
                                                                 lVar52 + 6 + lVar55) * iVar35) *
                                                  fVar4),(char)(int)((float)(int)((uint)*(byte *)((
                                                  longlong)puVar54 + lVar50 + 5 + lVar55) * iVar36 +
                                                  (uint)*(byte *)((longlong)puVar54 +
                                                                 lVar52 + 5 + lVar55) * iVar35) *
                                                  fVar4)),(char)(int)((float)(int)((uint)*(byte *)((
                                                  longlong)puVar54 + lVar52 + 4 + lVar55) * iVar35 +
                                                  (uint)*(byte *)((longlong)puVar54 +
                                                                 lVar50 + 4 + lVar55) * iVar36) *
                                                  fVar4)));
                          puVar54[-1] = (undefined4)local_470;
                          lVar50 = *(longlong *)(*plVar6 + 0x40);
                          lVar52 = *(longlong *)(plVar6[1] + 0x40);
                          local_470._0_4_ =
                               CONCAT13((char)(int)((float)(int)((uint)*(byte *)((longlong)puVar54 +
                                                                                (longlong)
                                                                                (local_3f8 +
                                                                                lVar50 + 3)) *
                                                                 iVar36 + (uint)*(byte *)((longlong)
                                                                                          puVar54 +
                                                                                         (longlong)
                                                                                         (local_3f8
                                                                                         + lVar52 + 
                                                  3)) * iVar35) * fVar4),
                                        CONCAT21(CONCAT11((char)(int)((float)(int)((uint)*(byte *)((
                                                  longlong)puVar54 +
                                                  (longlong)(local_3f8 + lVar50 + 2)) * iVar36 +
                                                  (uint)*(byte *)((longlong)puVar54 +
                                                                 (longlong)(local_3f8 + lVar52 + 2))
                                                  * iVar35) * fVar4),
                                                  (char)(int)((float)(int)((uint)*(byte *)((longlong
                                                  )puVar54 + (longlong)(local_3f8 + lVar50 + 1)) *
                                                  iVar36 + (uint)*(byte *)((longlong)puVar54 +
                                                                          (longlong)
                                                                          (local_3f8 + lVar52 + 1))
                                                           * iVar35) * fVar4)),
                                                 (char)(int)((float)(int)((uint)*(byte *)((longlong)
                                                                                          puVar54 +
                                                                                         (longlong)
                                                                                         (local_3f8
                                                                                         + lVar52))
                                                                          * iVar35 +
                                                                         (uint)*(byte *)((longlong)
                                                                                         puVar54 +
                                                                                        (longlong)
                                                                                        (local_3f8 +
                                                                                        lVar50)) *
                                                                         iVar36) * fVar4)));
                          *puVar54 = (undefined4)local_470;
                          lVar50 = *(longlong *)(*plVar6 + 0x40);
                          lVar52 = *(longlong *)(plVar6[1] + 0x40);
                          local_470._0_4_ =
                               CONCAT13((char)(int)((float)(int)((uint)*(byte *)((longlong)puVar54 +
                                                                                lVar50 + lVar47 + 7)
                                                                 * iVar36 +
                                                                (uint)*(byte *)((longlong)puVar54 +
                                                                               lVar52 + lVar47 + 7)
                                                                * iVar35) * fVar4),
                                        CONCAT21(CONCAT11((char)(int)((float)(int)((uint)*(byte *)((
                                                  longlong)puVar54 + lVar50 + lVar47 + 6) * iVar36 +
                                                  (uint)*(byte *)((longlong)puVar54 +
                                                                 lVar52 + lVar47 + 6) * iVar35) *
                                                  fVar4),(char)(int)((float)(int)((uint)*(byte *)((
                                                  longlong)puVar54 + lVar50 + lVar47 + 5) * iVar36 +
                                                  (uint)*(byte *)((longlong)puVar54 +
                                                                 lVar52 + lVar47 + 5) * iVar35) *
                                                  fVar4)),(char)(int)((float)(int)((uint)*(byte *)((
                                                  longlong)puVar54 + lVar52 + lVar47 + 4) * iVar35 +
                                                  (uint)*(byte *)((longlong)puVar54 +
                                                                 lVar50 + lVar47 + 4) * iVar36) *
                                                  fVar4)));
                          puVar54[1] = (undefined4)local_470;
                          lVar49 = lVar49 + -1;
                          puVar54 = puVar54 + 4;
                        } while (lVar49 != 0);
                        lVar49 = *plVar6;
                        lVar37 = local_3e8;
                        lVar47 = local_420;
                      }
                      if (lVar48 < lVar53) {
                        do {
                          lVar49 = *(longlong *)(*plVar6 + 0x40);
                          lVar55 = *(longlong *)(plVar6[1] + 0x40);
                          local_470._0_4_ =
                               CONCAT13((char)(int)((float)(int)((uint)*(byte *)(lVar49 + 3 +
                                                                                lVar48 * 4) * iVar36
                                                                + (uint)*(byte *)(lVar55 + 3 +
                                                                                 lVar48 * 4) *
                                                                  iVar35) * fVar4),
                                        CONCAT21(CONCAT11((char)(int)((float)(int)((uint)*(byte *)(
                                                  lVar49 + 2 + lVar48 * 4) * iVar36 +
                                                  (uint)*(byte *)(lVar55 + 2 + lVar48 * 4) * iVar35)
                                                  * fVar4),(char)(int)((float)(int)((uint)*(byte *)(
                                                  lVar49 + 1 + lVar48 * 4) * iVar36 +
                                                  (uint)*(byte *)(lVar55 + 1 + lVar48 * 4) * iVar35)
                                                  * fVar4)),
                                                 (char)(int)((float)(int)((uint)*(byte *)(lVar55 + 
                                                  lVar48 * 4) * iVar35 +
                                                  (uint)*(byte *)(lVar49 + lVar48 * 4) * iVar36) *
                                                  fVar4)));
                          *(undefined4 *)(local_3d8 + lVar48 * 4) = (undefined4)local_470;
                          lVar48 = lVar48 + 1;
                        } while (lVar48 < lVar53);
                        lVar49 = *plVar6;
                      }
                    }
                    if (*(char *)(lVar49 + 0xa2) != '\0') {
                      lVar48 = 0;
                      if (3 < lVar53) {
                        pfVar51 = (float *)(lVar37 + 0x14);
                        lVar47 = -lVar37;
                        lVar49 = -lVar37;
                        lVar55 = -lVar37;
                        lVar52 = lVar55 + -0x14;
                        lVar50 = (lVar53 - 4U >> 2) + 1;
                        lVar48 = lVar50 * 4;
                        do {
                          fVar4 = *(float *)((longlong)pfVar51 +
                                            *(longlong *)(*plVar6 + 0x10) + lVar55 + -0x10);
                          fVar61 = *(float *)((longlong)pfVar51 +
                                             *(longlong *)(plVar6[1] + 0x10) + lVar55 + -0x10);
                          pfVar51[-5] = fVar62 * *(float *)((longlong)pfVar51 +
                                                           *(longlong *)(plVar6[1] + 0x10) + lVar52)
                                        + fVar63 * *(float *)((longlong)pfVar51 +
                                                             *(longlong *)(*plVar6 + 0x10) + lVar52)
                          ;
                          pfVar51[-4] = fVar63 * fVar4 + fVar62 * fVar61;
                          fVar4 = *(float *)((longlong)pfVar51 +
                                            *(longlong *)(*plVar6 + 0x10) + 0xc + lVar52);
                          fVar61 = *(float *)((longlong)pfVar51 +
                                             *(longlong *)(plVar6[1] + 0x10) + 0xc + lVar52);
                          pfVar51[-3] = fVar62 * *(float *)((longlong)pfVar51 +
                                                           *(longlong *)(plVar6[1] + 0x10) + 8 +
                                                           lVar52) +
                                        fVar63 * *(float *)((longlong)pfVar51 +
                                                           *(longlong *)(*plVar6 + 0x10) + 8 +
                                                           lVar52);
                          pfVar51[-2] = fVar63 * fVar4 + fVar62 * fVar61;
                          fVar4 = *(float *)((longlong)pfVar51 +
                                            *(longlong *)(*plVar6 + 0x10) + lVar47);
                          fVar61 = *(float *)((longlong)pfVar51 +
                                             *(longlong *)(plVar6[1] + 0x10) + lVar47);
                          pfVar51[-1] = fVar62 * *(float *)((longlong)pfVar51 +
                                                           *(longlong *)(plVar6[1] + 0x10) +
                                                           lVar47 + -4) +
                                        fVar63 * *(float *)((longlong)pfVar51 +
                                                           *(longlong *)(*plVar6 + 0x10) +
                                                           lVar47 + -4);
                          *pfVar51 = fVar63 * fVar4 + fVar62 * fVar61;
                          fVar4 = *(float *)((longlong)pfVar51 +
                                            *(longlong *)(*plVar6 + 0x10) + lVar49 + 8);
                          fVar61 = *(float *)((longlong)pfVar51 +
                                             *(longlong *)(plVar6[1] + 0x10) + lVar49 + 8);
                          pfVar51[1] = fVar62 * *(float *)((longlong)pfVar51 +
                                                          *(longlong *)(plVar6[1] + 0x10) +
                                                          lVar49 + 4) +
                                       fVar63 * *(float *)((longlong)pfVar51 +
                                                          *(longlong *)(*plVar6 + 0x10) + lVar49 + 4
                                                          );
                          pfVar51[2] = fVar63 * fVar4 + fVar62 * fVar61;
                          pfVar51 = pfVar51 + 8;
                          lVar50 = lVar50 + -1;
                        } while (lVar50 != 0);
                        lVar49 = *plVar6;
                        lVar47 = local_420;
                      }
                      if (lVar48 < lVar53) {
                        do {
                          fVar4 = *(float *)(*(longlong *)(*plVar6 + 0x10) + 4 + lVar48 * 8);
                          fVar61 = *(float *)(*(longlong *)(plVar6[1] + 0x10) + 4 + lVar48 * 8);
                          *(float *)(lVar37 + lVar48 * 8) =
                               fVar62 * *(float *)(*(longlong *)(plVar6[1] + 0x10) + lVar48 * 8) +
                               fVar63 * *(float *)(*(longlong *)(*plVar6 + 0x10) + lVar48 * 8);
                          *(float *)(lVar37 + 4 + lVar48 * 8) = fVar63 * fVar4 + fVar62 * fVar61;
                          lVar48 = lVar48 + 1;
                        } while (lVar48 < lVar53);
                        lVar49 = *plVar6;
                      }
                    }
                    if (local_478 != '\0') {
                      lVar48 = 0;
                      if (3 < lVar53) {
                        puVar40 = (undefined8 *)(local_3c8 + 0x18);
                        lVar47 = -local_3c8;
                        lVar49 = -local_3c8;
                        lVar50 = lVar49 + -0x18;
                        lVar55 = (lVar53 - 4U >> 2) + 1;
                        lVar48 = lVar55 * 4;
                        do {
                          lVar52 = *(longlong *)(plVar6[1] + 0x50);
                          lVar2 = *(longlong *)(*plVar6 + 0x50);
                          fVar4 = *(float *)((longlong)puVar40 + lVar52 + lVar49 + -0x10);
                          fVar61 = *(float *)((longlong)puVar40 + lVar2 + lVar49 + -0x10);
                          puVar40[-3] = CONCAT44(fVar62 * *(float *)((longlong)puVar40 +
                                                                    lVar52 + lVar49 + -0x14) +
                                                 fVar63 * *(float *)((longlong)puVar40 +
                                                                    lVar2 + lVar49 + -0x14),
                                                 fVar62 * *(float *)((longlong)puVar40 +
                                                                    lVar52 + lVar50) +
                                                 fVar63 * *(float *)((longlong)puVar40 +
                                                                    lVar2 + lVar50));
                          *(float *)(puVar40 + -2) = fVar62 * fVar4 + fVar63 * fVar61;
                          lVar52 = *(longlong *)(plVar6[1] + 0x50);
                          lVar2 = *(longlong *)(*plVar6 + 0x50);
                          fVar4 = *(float *)((longlong)puVar40 + lVar52 + 0x14 + lVar50);
                          fVar61 = *(float *)((longlong)puVar40 + lVar2 + 0x14 + lVar50);
                          *(ulonglong *)((longlong)puVar40 + -0xc) =
                               CONCAT44(fVar62 * *(float *)((longlong)puVar40 +
                                                           lVar52 + 0x10 + lVar50) +
                                        fVar63 * *(float *)((longlong)puVar40 +
                                                           lVar2 + 0x10 + lVar50),
                                        fVar62 * *(float *)((longlong)puVar40 +
                                                           lVar52 + 0xc + lVar50) +
                                        fVar63 * *(float *)((longlong)puVar40 + lVar2 + 0xc + lVar50
                                                           ));
                          *(float *)((longlong)puVar40 + -4) = fVar62 * fVar4 + fVar63 * fVar61;
                          lVar52 = *(longlong *)(plVar6[1] + 0x50);
                          lVar2 = *(longlong *)(*plVar6 + 0x50);
                          fVar4 = *(float *)((longlong)puVar40 + lVar52 + (8 - local_3c8));
                          fVar61 = *(float *)((longlong)puVar40 + lVar2 + (8 - local_3c8));
                          *puVar40 = CONCAT44(fVar62 * *(float *)((longlong)puVar40 +
                                                                 lVar52 + (4 - local_3c8)) +
                                              fVar63 * *(float *)((longlong)puVar40 +
                                                                 lVar2 + (4 - local_3c8)),
                                              fVar62 * *(float *)((longlong)puVar40 +
                                                                 (lVar52 - local_3c8)) +
                                              fVar63 * *(float *)((longlong)puVar40 +
                                                                 (lVar2 - local_3c8)));
                          *(float *)(puVar40 + 1) = fVar62 * fVar4 + fVar63 * fVar61;
                          lVar52 = *(longlong *)(plVar6[1] + 0x50);
                          lVar2 = *(longlong *)(*plVar6 + 0x50);
                          local_450 = fVar62 * *(float *)((longlong)puVar40 + lVar52 + lVar47 + 0x14
                                                         ) +
                                      fVar63 * *(float *)((longlong)puVar40 + lVar2 + lVar47 + 0x14)
                          ;
                          *(ulonglong *)((longlong)puVar40 + 0xc) =
                               CONCAT44(fVar62 * *(float *)((longlong)puVar40 +
                                                           lVar52 + lVar47 + 0x10) +
                                        fVar63 * *(float *)((longlong)puVar40 +
                                                           lVar2 + lVar47 + 0x10),
                                        fVar62 * *(float *)((longlong)puVar40 +
                                                           lVar52 + lVar47 + 0xc) +
                                        fVar63 * *(float *)((longlong)puVar40 + lVar2 + lVar47 + 0xc
                                                           ));
                          *(float *)((longlong)puVar40 + 0x14) = local_450;
                          puVar40 = puVar40 + 6;
                          lVar55 = lVar55 + -1;
                        } while (lVar55 != 0);
                        lVar49 = *plVar6;
                        lVar47 = local_420;
                      }
                      if (lVar48 < lVar53) {
                        lVar49 = lVar48 * 0xc;
                        lVar48 = lVar53 - lVar48;
                        do {
                          lVar55 = *(longlong *)(plVar6[1] + 0x50);
                          lVar50 = *(longlong *)(*plVar6 + 0x50);
                          local_450 = fVar62 * *(float *)(lVar49 + 8 + lVar55) +
                                      fVar63 * *(float *)(lVar49 + 8 + lVar50);
                          *(ulonglong *)(lVar49 + local_3c8) =
                               CONCAT44(fVar62 * *(float *)(lVar49 + 4 + lVar55) +
                                        fVar63 * *(float *)(lVar49 + 4 + lVar50),
                                        fVar62 * *(float *)(lVar49 + lVar55) +
                                        fVar63 * *(float *)(lVar49 + lVar50));
                          *(float *)(lVar49 + 8 + local_3c8) = local_450;
                          lVar49 = lVar49 + 0xc;
                          lVar48 = lVar48 + -1;
                        } while (lVar48 != 0);
                        lVar49 = *plVar6;
                      }
                    }
                    local_3b8 = (longlong *)lVar53;
                    if (*(char *)(lVar49 + 0xa7) == '\0') {
                      FUN_1408cbf20(plVar6 + 0x38,lVar49 + 0x90);
                      lVar49 = *plVar6;
                    }
                    if (*(char *)(lVar49 + 0xa0) != '\0') {
                      local_4d8 = CONCAT44(local_4d8._4_4_,1);
                      FUN_1408cc5c0(plVar6 + 0x18,local_398,local_390 * 4,1);
                      lVar49 = *plVar6;
                    }
                    lVar53 = local_3a8;
                    if (*(char *)(lVar49 + 0xa1) != '\0') {
                      local_4d8 = CONCAT44(local_4d8._4_4_,1);
                      FUN_1408cc5c0(plVar6 + 0x20,local_3a8,local_3a0 * 4,1);
                      lVar49 = *plVar6;
                    }
                    if (*(char *)(lVar49 + 0xa2) != '\0') {
                      local_4d8 = CONCAT44(local_4d8._4_4_,1);
                      FUN_1408cc5c0(plVar6 + 0x28,lVar37,local_3e0 * 8,1);
                      lVar49 = *plVar6;
                    }
                    lVar48 = local_3d8;
                    if (*(char *)(lVar49 + 0xa3) != '\0') {
                      local_4d8 = CONCAT44(local_4d8._4_4_,1);
                      FUN_1408cc5c0(plVar6 + 0x30,local_3d8,local_3d0 * 4,1);
                    }
                    cVar32 = (**(code **)(**(longlong **)(plVar6[0x130] + 0x30) + 0x18))
                                       (*(longlong **)(plVar6[0x130] + 0x30),
                                        *(undefined4 *)
                                         ((longlong)plVar6 +
                                         (ulonglong)(*(uint *)(plVar6 + 0x17) & 1) * 4 + 0xa8),
                                        (int)plVar6[2]);
                    if (cVar33 == '\0') {
                      if (((int)plVar6[0x17] == -1) || (cVar32 == '\0')) {
                        local_4d8._0_4_ = 1;
                        FUN_1408cc5c0(plVar6 + 5,lVar47,local_418 * 0xc,1);
                        local_4d8 = CONCAT44(local_4d8._4_4_,1);
                        FUN_1408cc5c0(plVar6 + 0xd,lVar47);
                        *(undefined4 *)(plVar6 + 0x17) = 0;
                        *(int *)(plVar6 + 0x16) = (int)local_448[0x75];
                        *(int *)((longlong)plVar6 + 0xb4) = (int)local_448[0x75];
                        *(undefined4 *)(plVar6 + 0x15) = *(undefined4 *)((longlong)plVar6 + 0x14);
                        *(undefined4 *)((longlong)plVar6 + 0xac) =
                             *(undefined4 *)((longlong)plVar6 + 0x14);
                      }
                      else {
                        uVar34 = (int)plVar6[0x17] + 1;
                        local_4d8 = CONCAT44(local_4d8._4_4_,1);
                        *(uint *)(plVar6 + 0x17) = uVar34;
                        FUN_1408cc5c0(plVar6 + (ulonglong)(uVar34 & 1) * 8 + 5,lVar47);
                        *(int *)((longlong)plVar6 +
                                (ulonglong)(*(uint *)(plVar6 + 0x17) & 1) * 4 + 0xb0) =
                             (int)local_448[0x75];
                        *(undefined4 *)
                         ((longlong)plVar6 + (ulonglong)(*(uint *)(plVar6 + 0x17) & 1) * 4 + 0xa8) =
                             *(undefined4 *)((longlong)plVar6 + 0x14);
                      }
                    }
                    else {
                      *(undefined4 *)(plVar6 + 0x17) = 0;
                      local_4d8._0_4_ = 1;
                      FUN_1408cc5c0(plVar6 + 5,lVar47,local_418 * 0xc,1);
                      local_4d8 = CONCAT44(local_4d8._4_4_,1);
                      FUN_1408cc5c0(plVar6 + 0xd,lVar41);
                      *(int *)(plVar6 + 0x15) = (int)plVar6[2];
                      *(undefined4 *)((longlong)plVar6 + 0xac) = 0xffffffff;
                      *(int *)(plVar6 + 0x16) = (int)local_448[0x75];
                      *(int *)((longlong)plVar6 + 0xb4) = (int)local_448[0x75];
                    }
                    if (lVar41 != 0) {
                      FMemory::Free(lVar41);
                    }
                    if (lVar48 != 0) {
                      FMemory::Free(lVar48);
                    }
                    if (lVar37 != 0) {
                      FMemory::Free(lVar37);
                    }
                    if (lVar53 != 0) {
                      FMemory::Free(lVar53);
                    }
                    if (local_398 != 0) {
                      FMemory::Free(local_398);
                    }
                    param_1 = local_448;
                    if (lVar47 != 0) {
                      FMemory::Free(lVar47);
                      param_1 = local_448;
                    }
                  }
                  local_408 = (longlong *)((longlong)local_408 + 0xc);
                  plVar38 = local_428;
                  plVar44 = local_400;
                } while (local_408 != local_3b0);
              }
            }
            plVar44 = plVar44 + 1;
          } while (plVar44 != plVar38);
          iVar36 = (int)param_1[0x78];
          local_400 = plVar44;
        }
        local_470 = (longlong *)param_1[0x77];
        local_3b8 = local_470 + iVar36;
        if (local_470 == local_3b8) {
          return;
        }
        do {
          plVar38 = (longlong *)*local_470;
          lVar37 = UGeometryCacheTrackStreamable::GetVisibilitySample
                             (*(undefined8 *)(plVar38[0x130] + 0x38),(int)param_1[0x75],
                              *(undefined1 *)((longlong)param_1 + 0x3ac));
          if (*(char *)(lVar37 + 0x10) != '\0') {
            lVar37 = *plVar38;
            local_3b0 = (longlong *)(longlong)*(int *)(lVar37 + 0x68);
            if ((((*(char *)(lVar37 + 0xa4) == '\0') ||
                 (lVar47 = plVar38[1], *(char *)(lVar47 + 0xa4) == '\0')) ||
                (*(int *)(lVar37 + 8) != *(int *)(lVar37 + 0x58))) ||
               (local_478 = '\x01', *(int *)(lVar47 + 8) != *(int *)(lVar47 + 0x58))) {
              local_478 = '\0';
            }
            local_428 = (longlong *)0x0;
            if (0 < *(int *)(lVar37 + 0x68)) {
              local_448 = (longlong *)0x0;
              do {
                plVar6 = local_448;
                plVar44 = *(longlong **)(plVar38[3] + (longlong)local_428 * 8);
                uVar39 = (**(code **)(*plVar44 + 0x2a8))
                                   (plVar44,(*(uint *)(param_1 + 3) & 0x300) != 0,0);
                puStack_3f0 = local_468;
                local_3f8 = &DAT_14060d670;
                local_468[0] = 0;
                local_458 = *(undefined8 *)(*(longlong *)(*plVar38 + 0x60) + (longlong)plVar6);
                local_388 = &DAT_14060d670;
                puStack_380 = puStack_3f0;
                lVar37 = FUN_1415d8310(&local_388,&DAT_146216a38);
                puVar45 = (undefined8 *)(*(longlong *)(lVar37 + 0x18) + 0xfU & 0xfffffffffffffff0);
                puVar1 = (ulonglong *)(lVar37 + 0x18);
                puVar40 = puVar45 + 10;
                if (*(undefined8 **)(lVar37 + 0x20) < puVar40) {
                  FMemStackBase::AllocateNewChunk(puVar1,0x60);
                  puVar45 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
                  puVar40 = puVar45 + 10;
                }
                *puVar1 = (ulonglong)puVar40;
                if (puVar45 != (undefined8 *)0x0) {
                  puVar45[1] = 0;
                  puVar45[2] = 0;
                  puVar45[3] = 0;
                  puVar45[4] = 0;
                  puVar45[5] = 0;
                  puVar45[6] = 0;
                  puVar45[7] = 0;
                  puVar45[8] = 0;
                  puVar45[9] = 0;
                  *puVar45 = &PTR_FUN_14412e2f0;
                }
                iVar36 = (int)param_5[0x1a];
                *(int *)(param_5 + 0x1a) = iVar36 + 1;
                if (*(int *)((longlong)param_5 + 0xd4) < iVar36 + 1) {
                  FUN_140822430(param_5 + 0x19,iVar36);
                }
                *(undefined8 **)(param_5[0x19] + (longlong)iVar36 * 8) = puVar45;
                *(ulonglong *)((longlong)puVar45 + 0x24) =
                     CONCAT44(DAT_1464aa788._4_4_,(float)DAT_1464aa788);
                *(float *)((longlong)puVar45 + 0x2c) = DAT_1464aa790;
                puVar45[3] = _DAT_1468b5d90;
                *(undefined4 *)(puVar45 + 4) = DAT_1468b5d98;
                if (local_478 == '\0') {
                  *(ulonglong *)((longlong)puVar45 + 0x3c) =
                       CONCAT44(DAT_1464aa788._4_4_,(float)DAT_1464aa788);
                  *(float *)((longlong)puVar45 + 0x44) = DAT_1464aa790;
                  puVar45[6] = _DAT_1468b5d90;
                  uVar56 = 0;
                }
                else {
                  fVar63 = *(float *)(param_1 + 0x76);
                  local_370 = fVar63 * DAT_1464aa790;
                  *(ulonglong *)((longlong)puVar45 + 0x3c) =
                       CONCAT44(fVar63 * DAT_1464aa788._4_4_,fVar63 * (float)DAT_1464aa788);
                  *(float *)((longlong)puVar45 + 0x44) = local_370;
                  puVar45[6] = _DAT_1468b5d90;
                  uVar56 = 0x3f800000;
                }
                *(undefined4 *)(puVar45 + 7) = DAT_1468b5d98;
                *(undefined4 *)(puVar45 + 9) = uVar56;
                puVar45[1] = plVar38 + (ulonglong)(*(uint *)(plVar38 + 0x17) & 1) * 8 + 5;
                puVar45[2] = plVar38 + (ulonglong)((int)plVar38[0x17] - 1U & 1) * 8 + 5;
                iVar36 = FUN_1408bed80(param_5,1);
                lVar47 = *(longlong *)(*param_5 + (longlong)(iVar36 / 0x59) * 8) +
                         (ulonglong)(uint)(iVar36 % 0x59) * 0xb8;
                lVar37 = *(longlong *)(lVar47 + 0x78);
                if (*(longlong *)(lVar47 + 0x78) == 0) {
                  lVar37 = lVar47;
                }
                *(longlong **)(lVar37 + 0x10) = plVar38 + 0x38;
                *(uint *)(lVar47 + 0x8c) = *(uint *)(lVar47 + 0x8c) & 0xfffffeff;
                *(longlong **)(lVar47 + 0xa0) = plVar38 + 0x41;
                *(undefined8 *)(lVar47 + 0xa8) = uVar39;
                uVar56 = *(undefined4 *)((longlong)param_1 + 0x37c);
                lVar53 = param_1[0x6f];
                cVar33 = (**(code **)(*param_1 + 0x18))(param_1);
                dVar5 = (double)param_1[0x72];
                local_2f8 = _DAT_1464aa7d0;
                uStack_2f0 = _DAT_1464aa7d8;
                local_2e8 = _DAT_1464aa7e0;
                uStack_2e0 = _DAT_1464aa7e8;
                local_2d8 = _DAT_1464aa7f0;
                uStack_2d0 = _DAT_1464aa7f8;
                local_2c8 = _DAT_1464aa800;
                uStack_2c0 = uRam00000001464aa808;
                dVar58 = (double)param_1[0x71];
                lVar49 = (longlong)dVar58;
                uVar34 = (uint)(cVar33 != '\0');
                local_29c = 0;
                local_2a8 = (uint)(cVar33 != '\0');
                local_2b8 = 0x3f80000000000000;
                uStack_2b0 = 0x3f8000003f800000;
                dVar57 = dVar58;
                if ((lVar49 != -0x8000000000000000) && ((double)lVar49 != dVar58)) {
                  auVar59._8_8_ = dVar58;
                  auVar59._0_8_ = dVar58;
                  uVar34 = movmskpd(local_2a8,auVar59);
                  uVar34 = uVar34 & 1;
                  dVar57 = (double)(longlong)(lVar49 - (ulonglong)uVar34);
                }
                lVar41 = (longlong)dVar57;
                dVar58 = (dVar58 - (double)lVar41) * 2147483647.0;
                lVar49 = (longlong)dVar58;
                if ((lVar49 != -0x8000000000000000) && ((double)lVar49 != dVar58)) {
                  auVar9._8_4_ = SUB84(dVar58,0);
                  auVar9._0_8_ = dVar58;
                  auVar9._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
                  uVar34 = movmskpd(uVar34,auVar9);
                  dVar58 = (double)(longlong)(lVar49 - (ulonglong)(uVar34 & 1));
                }
                lVar49 = (longlong)dVar58;
                if (lVar41 < 0) {
                  lVar48 = 0;
                }
                else {
                  lVar48 = 0x7fffffff;
                  if (lVar41 < 0x7fffffff) {
                    lVar48 = lVar41;
                  }
                }
                local_298 = (undefined4)lVar48;
                if (lVar49 < 0) {
                  lVar41 = 0;
                }
                else {
                  lVar41 = 0x7fffffff;
                  if (lVar49 < 0x7fffffff) {
                    lVar41 = lVar49;
                  }
                }
                lVar49 = (longlong)dVar5;
                local_294 = (uint)lVar41;
                uVar34 = local_294;
                dVar58 = dVar5;
                if ((lVar49 != -0x8000000000000000) && ((double)lVar49 != dVar5)) {
                  auVar60._8_8_ = dVar5;
                  auVar60._0_8_ = dVar5;
                  uVar34 = movmskpd(local_294,auVar60);
                  uVar34 = uVar34 & 1;
                  dVar58 = (double)(longlong)(lVar49 - (ulonglong)uVar34);
                }
                lVar41 = (longlong)dVar58;
                dVar5 = (dVar5 - (double)lVar41) * 2147483647.0;
                lVar49 = (longlong)dVar5;
                if ((lVar49 != -0x8000000000000000) && ((double)lVar49 != dVar5)) {
                  auVar10._8_4_ = SUB84(dVar5,0);
                  auVar10._0_8_ = dVar5;
                  auVar10._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
                  uVar34 = movmskpd(uVar34,auVar10);
                  dVar5 = (double)(longlong)(lVar49 - (ulonglong)(uVar34 & 1));
                }
                lVar49 = (longlong)dVar5;
                if (lVar41 < 0) {
                  lVar48 = 0;
                }
                else {
                  lVar48 = 0x7fffffff;
                  if (lVar41 < 0x7fffffff) {
                    lVar48 = lVar41;
                  }
                }
                local_290 = (undefined4)lVar48;
                if (lVar49 < 0) {
                  lVar41 = 0;
                }
                else {
                  lVar41 = 0x7fffffff;
                  if (lVar49 < 0x7fffffff) {
                    lVar41 = lVar49;
                  }
                }
                fVar63 = *(float *)(plVar38 + 0x128);
                fVar62 = *(float *)((longlong)plVar38 + 0x944);
                fVar4 = *(float *)(plVar38 + 0x129);
                fVar61 = *(float *)((longlong)plVar38 + 0x94c);
                fVar11 = *(float *)(param_1 + 0x12);
                fVar12 = *(float *)((longlong)param_1 + 0x94);
                fVar13 = *(float *)(param_1 + 0x13);
                fVar14 = *(float *)((longlong)param_1 + 0x9c);
                fVar15 = *(float *)(param_1 + 0x10);
                fVar16 = *(float *)((longlong)param_1 + 0x84);
                fVar17 = *(float *)(param_1 + 0x11);
                fVar18 = *(float *)((longlong)param_1 + 0x8c);
                fVar19 = *(float *)(param_1 + 0x14);
                fVar20 = *(float *)((longlong)param_1 + 0xa4);
                fVar21 = *(float *)(param_1 + 0x15);
                fVar22 = *(float *)((longlong)param_1 + 0xac);
                fVar23 = *(float *)(param_1 + 0x16);
                fVar24 = *(float *)((longlong)param_1 + 0xb4);
                fVar25 = *(float *)(param_1 + 0x17);
                fVar26 = *(float *)((longlong)param_1 + 0xbc);
                local_28c = (undefined4)lVar41;
                local_430 = *(float *)(param_1 + 0x19);
                local_488 = &local_2f8;
                local_490 = 0x3f800000;
                local_4a0 = (byte)(*(uint *)((longlong)param_1 + 0x1c) >> 0x14) & 1;
                local_498 = 1;
                local_288 = fVar63 * fVar15 + fVar62 * fVar11 + fVar4 * fVar19 + fVar61 * fVar23;
                fStack_284 = fVar63 * fVar16 + fVar62 * fVar12 + fVar4 * fVar20 + fVar61 * fVar24;
                fStack_280 = fVar63 * fVar17 + fVar62 * fVar13 + fVar4 * fVar21 + fVar61 * fVar25;
                fStack_27c = fVar63 * fVar18 + fVar62 * fVar14 + fVar4 * fVar22 + fVar61 * fVar26;
                fVar63 = *(float *)(plVar38 + 0x12a);
                fVar62 = *(float *)((longlong)plVar38 + 0x954);
                fVar4 = *(float *)(plVar38 + 299);
                fVar61 = *(float *)((longlong)plVar38 + 0x95c);
                local_278 = fVar63 * fVar15 + fVar62 * fVar11 + fVar4 * fVar19 + fVar61 * fVar23;
                fStack_274 = fVar63 * fVar16 + fVar62 * fVar12 + fVar4 * fVar20 + fVar61 * fVar24;
                fStack_270 = fVar63 * fVar17 + fVar62 * fVar13 + fVar4 * fVar21 + fVar61 * fVar25;
                fStack_26c = fVar63 * fVar18 + fVar62 * fVar14 + fVar4 * fVar22 + fVar61 * fVar26;
                fVar63 = *(float *)(plVar38 + 300);
                fVar62 = *(float *)((longlong)plVar38 + 0x964);
                fVar4 = *(float *)(plVar38 + 0x12d);
                fVar61 = *(float *)((longlong)plVar38 + 0x96c);
                local_268 = fVar63 * fVar15 + fVar62 * fVar11 + fVar4 * fVar19 + fVar61 * fVar23;
                fStack_264 = fVar63 * fVar16 + fVar62 * fVar12 + fVar4 * fVar20 + fVar61 * fVar24;
                fStack_260 = fVar63 * fVar17 + fVar62 * fVar13 + fVar4 * fVar21 + fVar61 * fVar25;
                fStack_25c = fVar63 * fVar18 + fVar62 * fVar14 + fVar4 * fVar22 + fVar61 * fVar26;
                fVar63 = *(float *)(plVar38 + 0x12e);
                fVar62 = *(float *)((longlong)plVar38 + 0x974);
                fVar4 = *(float *)(plVar38 + 0x12f);
                fVar61 = *(float *)((longlong)plVar38 + 0x97c);
                local_438 = param_1[0x18];
                local_258 = fVar63 * fVar15 + fVar62 * fVar11 + fVar4 * fVar19 + fVar61 * fVar23;
                fStack_254 = fVar63 * fVar16 + fVar62 * fVar12 + fVar4 * fVar20 + fVar61 * fVar24;
                fStack_250 = fVar63 * fVar17 + fVar62 * fVar13 + fVar4 * fVar21 + fVar61 * fVar25;
                fStack_24c = fVar63 * fVar18 + fVar62 * fVar14 + fVar4 * fVar22 + fVar61 * fVar26;
                local_4a8 = 0;
                local_4d8 = (longlong)param_1 + 0xdc;
                local_4b0 = 0;
                local_4b8 = 0;
                local_4c0 = 0;
                local_4c8 = 0;
                local_4d0 = 1;
                local_2a4 = (int)lVar53;
                local_2a0 = uVar56;
                uVar39 = FUN_1408c7250(local_248,&local_288,&local_438,param_1 + 0x18);
                local_4d8 = CONCAT44(local_4d8._4_4_,2);
                (**(code **)(*DAT_146ab6358 + 0x110))
                          (DAT_146ab6358,&local_400,uVar39,&DAT_146b09668);
                local_408 = local_400;
                if (local_400 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_400 + 1) = (int)local_400[1] + 1;
                  UNLOCK();
                }
                TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_400);
                TRefCountPtr<FRHIIndexBuffer>::operator=(lVar37 + 8);
                TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_408);
                iVar36 = *(int *)(lVar37 + 0x38);
                *(int *)(lVar37 + 0x38) = iVar36 + 1;
                if (*(int *)(lVar37 + 0x3c) < iVar36 + 1) {
                  TArray<TWeakObjectPtr<UPersistenceComponent,FWeakObjectPtr>,TInlineAllocator<1,FDefaultAllocator>_>
                  ::ResizeGrow(lVar37 + 0x28);
                }
                lVar53 = local_368;
                lVar49 = *(longlong *)(lVar37 + 0x30);
                if (*(longlong *)(lVar37 + 0x30) == 0) {
                  lVar49 = lVar37 + 0x28;
                }
                uVar43 = 0;
                *(undefined4 *)(lVar49 + (longlong)iVar36 * 8) = (undefined4)local_458;
                *(undefined4 *)(lVar49 + (longlong)iVar36 * 8 + 4) = local_458._4_4_;
                *(undefined4 *)(lVar37 + 0x48) = 0;
                iVar36 = *(int *)(*plVar38 + 8);
                *(undefined8 **)(lVar37 + 0x50) = puVar45 + 1;
                *(int *)(lVar37 + 0x4c) = iVar36 + -1;
                *(uint *)(lVar47 + 0x8c) =
                     (*(byte *)(param_1 + 3) & 1) << 3 | *(uint *)(lVar47 + 0x8c) & 0xffc00ff7;
                uVar34 = local_410;
                if (0 < *(int *)(local_368 + 8)) {
                  do {
                    if ((uVar34 >> (uVar43 & 0x1f) & 1) != 0) {
                      FUN_142747330(param_5,uVar43);
                      uVar34 = local_410;
                    }
                    uVar43 = uVar43 + 1;
                  } while ((int)uVar43 < *(int *)(lVar53 + 8));
                }
                local_428 = (longlong *)((longlong)local_428 + 1);
                local_448 = (longlong *)((longlong)local_448 + 0xc);
              } while ((longlong)local_428 < (longlong)local_3b0);
            }
          }
          local_470 = local_470 + 1;
        } while (local_470 != local_3b8);
        return;
      }
      uVar34 = uVar34 + 1;
    } while ((int)uVar34 < *(int *)(param_2 + 8));
  }
  return;
}



// FUNCTION 1408c7060 GetFriendlyName body=62 status=ok
// SIG undefined GetFriendlyName(void)

undefined8 * FGeomCacheVertexBuffer::GetFriendlyName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x17;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FGeomCacheVertexBuffer",0x2e);
  return param_2;
}



// FUNCTION 1408c70a0 FUN_1408c70a0 body=8 status=ok
// SIG undefined FUN_1408c70a0(void)

undefined8 FUN_1408c70a0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x458);
}



// FUNCTION 1408c70b0 FUN_1408c70b0 body=8 status=ok
// SIG undefined FUN_1408c70b0(void)

undefined1 FUN_1408c70b0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x768);
}



// FUNCTION 1408c71e0 GetNumWantingResources body=4 status=ok
// SIG undefined GetNumWantingResources(void)

undefined4 IStreamingManager::GetNumWantingResources(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



// FUNCTION 1408c71f0 GetNumWantingResourcesID body=4 status=ok
// SIG undefined GetNumWantingResourcesID(void)

undefined4 IStreamingManager::GetNumWantingResourcesID(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// FUNCTION 1408c7200 FUN_1408c7200 body=24 status=ok
// SIG undefined FUN_1408c7200(void)

int FUN_1408c7200(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x718);
  if (lVar1 != 0) {
    return (*(int *)(lVar1 + 0x5c) - *(int *)(lVar1 + 0x58)) + 1;
  }
  return 0;
}



// FUNCTION 1408c7220 GetPlayRate body=9 status=ok
// SIG undefined GetPlayRate(void)

undefined4 UPaperFlipbookComponent::GetPlayRate(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x760);
}



// FUNCTION 1408c7230 FUN_1408c7230 body=29 status=ok
// SIG undefined FUN_1408c7230(void)

float FUN_1408c7230(longlong param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x728);
  if (fVar1 < 0.0) {
    return 0.0;
  }
  if (512.0 <= fVar1) {
    fVar1 = 512.0;
  }
  return fVar1;
}



// FUNCTION 1408c7250 FUN_1408c7250 body=1656 status=ok
// SIG undefined FUN_1408c7250(void)

undefined8 *
FUN_1408c7250(undefined8 *param_1,float *param_2,undefined8 *param_3,undefined4 *param_4,
             float *param_5,byte param_6,byte param_7,byte param_8,byte param_9,char param_10,
             char param_11,byte param_12,undefined4 param_13,undefined4 param_14,
             undefined8 *param_15)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined1 local_b8 [160];
  
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x3f800000;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x3f800000;
  uVar3 = *(undefined8 *)(param_2 + 2);
  *param_1 = *(undefined8 *)param_2;
  param_1[1] = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 6);
  param_1[2] = *(undefined8 *)(param_2 + 4);
  param_1[3] = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 10);
  param_1[4] = *(undefined8 *)(param_2 + 8);
  param_1[5] = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0xe);
  param_1[6] = *(undefined8 *)(param_2 + 0xc);
  param_1[7] = uVar3;
  puVar4 = (undefined8 *)FMatrix::Inverse(param_2,local_b8);
  uVar3 = puVar4[1];
  param_1[8] = *puVar4;
  param_1[9] = uVar3;
  uVar3 = puVar4[3];
  param_1[10] = puVar4[2];
  param_1[0xb] = uVar3;
  uVar3 = puVar4[5];
  param_1[0xc] = puVar4[4];
  param_1[0xd] = uVar3;
  uVar3 = puVar4[7];
  param_1[0xe] = puVar4[6];
  param_1[0xf] = uVar3;
  uVar6 = param_4[6];
  uVar14 = param_4[1];
  uVar2 = param_4[2];
  *(undefined4 *)(param_1 + 0x10) = *param_4;
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar14;
  *(undefined4 *)(param_1 + 0x11) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar6;
  param_1[0x12] = *(undefined8 *)(param_4 + 3);
  *(undefined4 *)(param_1 + 0x13) = param_4[5];
  fVar7 = param_5[2];
  fVar15 = param_5[5];
  param_1[0x22] = CONCAT44(param_5[1] - param_5[4],*param_5 - param_5[3]);
  *(float *)(param_1 + 0x23) = fVar7 - fVar15;
  fVar7 = param_5[5];
  fVar15 = param_5[2];
  param_1[0x24] = CONCAT44(param_5[4] + param_5[1],param_5[3] + *param_5);
  *(float *)(param_1 + 0x25) = fVar7 + fVar15;
  fVar7 = param_2[8];
  fVar15 = param_2[9];
  fVar9 = param_2[10];
  fVar8 = fVar15 * fVar15 + fVar7 * fVar7 + fVar9 * fVar9;
  fVar12 = fVar9;
  fVar13 = fVar7;
  fVar10 = fVar15;
  if ((fVar8 != 1.0) &&
     (fVar12 = DAT_1468b5d98, fVar13 = DAT_1468b5d90, fVar10 = DAT_1468b5d94, 1e-08 <= fVar8)) {
    auVar11 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
    fVar10 = auVar11._0_4_;
    fVar10 = fVar10 + fVar10 * (0.5 - fVar8 * 0.5 * fVar10 * fVar10);
    fVar10 = fVar10 + fVar10 * (0.5 - fVar8 * 0.5 * fVar10 * fVar10);
    fVar12 = fVar9 * fVar10;
    fVar13 = fVar7 * fVar10;
    fVar10 = fVar15 * fVar10;
  }
  uVar14 = 0;
  uVar6 = *(undefined4 *)(param_3 + 1);
  *(float *)(param_1 + 0x1c) = fVar13;
  *(float *)((longlong)param_1 + 0xe4) = fVar10;
  *(float *)(param_1 + 0x1d) = fVar12;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x3f800000;
  param_1[0x14] = *param_3;
  *(undefined4 *)(param_1 + 0x26) = param_14;
  *(undefined4 *)(param_1 + 0x15) = uVar6;
  *(undefined4 *)((longlong)param_1 + 300) = param_13;
  *(undefined4 *)(param_1 + 0x27) = *(undefined4 *)((longlong)param_15 + 0x54);
  fVar7 = *(float *)(param_15 + 0xb);
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  *(float *)((longlong)param_1 + 0x13c) = fVar7;
  fVar15 = SQRT(param_2[1] * param_2[1] + *param_2 * *param_2 + param_2[2] * param_2[2]);
  fVar7 = SQRT(param_2[5] * param_2[5] + param_2[4] * param_2[4] + param_2[6] * param_2[6]);
  fVar9 = SQRT(param_2[9] * param_2[9] + param_2[8] * param_2[8] + param_2[10] * param_2[10]);
  *(float *)(param_1 + 0x1e) = fVar15;
  *(float *)((longlong)param_1 + 0xf4) = fVar7;
  *(float *)(param_1 + 0x1f) = fVar9;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  if (fVar9 <= 0.0001) {
    fVar9 = 0.0;
  }
  else {
    fVar9 = 1.0 / fVar9;
  }
  if (fVar7 <= 0.0001) {
    fVar7 = 0.0;
  }
  else {
    fVar7 = 1.0 / fVar7;
  }
  if (fVar15 <= 0.0001) {
    fVar15 = 0.0;
  }
  else {
    fVar15 = 1.0 / fVar15;
  }
  *(float *)(param_1 + 0x20) = fVar15;
  *(float *)((longlong)param_1 + 0x104) = fVar7;
  *(float *)(param_1 + 0x21) = fVar9;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  if (((param_2[5] * param_2[10] - param_2[6] * param_2[9]) * *param_2 -
      (param_2[1] * param_2[10] - param_2[2] * param_2[9]) * param_2[4]) +
      (param_2[1] * param_2[6] - param_2[2] * param_2[5]) * param_2[8] < 0.0) {
    uVar6 = 0xbf800000;
  }
  else {
    uVar6 = 0x3f800000;
  }
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar6;
  *(float *)((longlong)param_1 + 0xac) = (float)param_6;
  *(float *)(param_1 + 0x16) = (float)param_7;
  *(float *)((longlong)param_1 + 0xb4) = (float)((uint)param_8 + (uint)param_9 * 2) * 0.33333334;
  if (param_10 == '\0') {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x3f800000;
  }
  *(undefined4 *)(param_1 + 0x17) = uVar6;
  if ((param_11 != '\0') && (param_10 != '\0')) {
    uVar14 = 0x3f800000;
  }
  *(undefined4 *)((longlong)param_1 + 0xbc) = uVar14;
  *(float *)(param_1 + 0x18) = (float)param_12;
  fVar7 = *(float *)(param_15 + 8);
  fVar15 = *(float *)((longlong)param_15 + 0x44);
  fVar9 = *(float *)(param_15 + 9);
  fVar12 = *(float *)((longlong)param_15 + 0x4c);
  *(float *)((longlong)param_1 + 0xdc) = fVar9;
  fVar15 = 1.0 / (fVar15 - fVar7);
  *(float *)(param_1 + 0x1b) = fVar12 - fVar9;
  *(float *)(param_1 + 0x1a) = fVar15;
  *(float *)((longlong)param_1 + 0xd4) = -(fVar15 * fVar7);
  iVar1 = *(int *)(param_15 + 10);
  iVar5 = 0;
  if ((-1 < iVar1) && (iVar5 = 1, iVar1 < 1)) {
    iVar5 = iVar1;
  }
  *(int *)((longlong)param_1 + 0x134) = iVar5;
  uVar3 = param_15[1];
  param_1[0x28] = *param_15;
  param_1[0x29] = uVar3;
  uVar3 = param_15[3];
  param_1[0x2a] = param_15[2];
  param_1[0x2b] = uVar3;
  uVar3 = param_15[5];
  param_1[0x2c] = param_15[4];
  param_1[0x2d] = uVar3;
  uVar3 = param_15[7];
  param_1[0x2e] = param_15[6];
  param_1[0x2f] = uVar3;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)((longlong)param_15 + 0x5c);
  *(undefined4 *)(param_1 + 0x31) = *(undefined4 *)(param_15 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x18c) = *(undefined4 *)((longlong)param_15 + 100);
  *(undefined4 *)(param_1 + 0x32) = *(undefined4 *)(param_15 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x194) = *(undefined4 *)((longlong)param_15 + 0x6c);
  return param_1;
}



// FUNCTION 1408c78d0 GetResourceSizeEx body=257 status=ok
// SIG undefined GetResourceSizeEx(void)

void UDEPRECATED_GeometryCacheTrack_FlipbookAnimation::GetResourceSizeEx
               (longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  FUN_141758340();
  iVar3 = 0;
  *(longlong *)(param_2 + 8) =
       *(longlong *)(param_2 + 8) + (longlong)*(int *)(param_1 + 0x38) * 0x40;
  lVar1 = *(longlong *)(param_2 + 8) + (longlong)*(int *)(param_1 + 0x48) * 4;
  *(longlong *)(param_2 + 8) = lVar1;
  if (0 < *(int *)(param_1 + 0x68)) {
    lVar1 = *(longlong *)(param_2 + 0x28);
    lVar4 = 0;
    do {
      iVar3 = iVar3 + 1;
      lVar2 = *(longlong *)(param_1 + 0x60) + lVar4;
      lVar4 = lVar4 + 0xa8;
      lVar1 = lVar1 + (longlong)*(int *)(lVar2 + 8) * 0xc;
      *(longlong *)(param_2 + 0x28) = lVar1;
      lVar1 = lVar1 + (longlong)*(int *)(lVar2 + 0x18) * 8;
      *(longlong *)(param_2 + 0x28) = lVar1;
      lVar1 = lVar1 + (longlong)*(int *)(lVar2 + 0x28) * 4;
      *(longlong *)(param_2 + 0x28) = lVar1;
      lVar1 = lVar1 + (longlong)*(int *)(lVar2 + 0x38) * 4;
      *(longlong *)(param_2 + 0x28) = lVar1;
      lVar1 = lVar1 + (longlong)*(int *)(lVar2 + 0x48) * 4;
      *(longlong *)(param_2 + 0x28) = lVar1;
      lVar1 = lVar1 + (longlong)*(int *)(lVar2 + 0x58) * 0xc;
      *(longlong *)(param_2 + 0x28) = lVar1;
      lVar1 = lVar1 + ((longlong)*(int *)(lVar2 + 0x68) * 3 + 0x1f) * 4;
      *(longlong *)(param_2 + 0x28) = lVar1;
      lVar1 = lVar1 + (longlong)*(int *)(lVar2 + 0x98) * 4 + 0x18;
      *(longlong *)(param_2 + 0x28) = lVar1;
    } while (iVar3 < *(int *)(param_1 + 0x68));
    lVar1 = *(longlong *)(param_2 + 8);
  }
  *(longlong *)(param_2 + 8) = lVar1 + 0x10;
  *(longlong *)(param_2 + 8) = lVar1 + 0x10 + (longlong)*(int *)(param_1 + 0x78) * 4 + 0x14;
  return;
}



// FUNCTION 1408c79e0 GetResourceSizeEx body=201 status=ok
// SIG undefined GetResourceSizeEx(void)

void UDEPRECATED_GeometryCacheTrack_TransformAnimation::GetResourceSizeEx
               (longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_141758340();
  *(longlong *)(param_2 + 8) =
       *(longlong *)(param_2 + 8) + (longlong)*(int *)(param_1 + 0x38) * 0x40;
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (longlong)*(int *)(param_1 + 0x48) * 4;
  *(longlong *)(param_2 + 0x28) =
       *(longlong *)(param_2 + 0x28) + (longlong)*(int *)(param_1 + 0x60) * 0xc;
  lVar1 = *(longlong *)(param_2 + 0x28) + (longlong)*(int *)(param_1 + 0x70) * 8;
  *(longlong *)(param_2 + 0x28) = lVar1;
  lVar1 = lVar1 + (longlong)*(int *)(param_1 + 0x80) * 4;
  *(longlong *)(param_2 + 0x28) = lVar1;
  lVar1 = lVar1 + (longlong)*(int *)(param_1 + 0x90) * 4;
  *(longlong *)(param_2 + 0x28) = lVar1;
  lVar1 = lVar1 + (longlong)*(int *)(param_1 + 0xa0) * 4;
  *(longlong *)(param_2 + 0x28) = lVar1;
  lVar1 = lVar1 + (longlong)*(int *)(param_1 + 0xb0) * 0xc;
  *(longlong *)(param_2 + 0x28) = lVar1;
  lVar1 = lVar1 + ((longlong)*(int *)(param_1 + 0xc0) * 3 + 0x1f) * 4;
  *(longlong *)(param_2 + 0x28) = lVar1;
  *(longlong *)(param_2 + 0x28) = lVar1 + (longlong)*(int *)(param_1 + 0xf0) * 4 + 0x18;
  return;
}



// FUNCTION 1408c7ab0 GetResourceSizeEx body=60 status=ok
// SIG undefined GetResourceSizeEx(void)

void UGeometryCacheTrack::GetResourceSizeEx(longlong param_1,longlong param_2)

{
  FUN_141758340();
  *(longlong *)(param_2 + 8) =
       *(longlong *)(param_2 + 8) + (longlong)*(int *)(param_1 + 0x38) * 0x40;
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (longlong)*(int *)(param_1 + 0x48) * 4;
  return;
}



// FUNCTION 1408c7af0 GetResourceSizeEx body=121 status=ok
// SIG undefined GetResourceSizeEx(void)

void UGeometryCacheTrackStreamable::GetResourceSizeEx(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  FUN_141758340();
  iVar2 = 0;
  *(longlong *)(param_2 + 8) =
       *(longlong *)(param_2 + 8) + (longlong)*(int *)(param_1 + 0x38) * 0x40;
  lVar1 = *(longlong *)(param_2 + 8) + (longlong)*(int *)(param_1 + 0x48) * 4;
  *(longlong *)(param_2 + 8) = lVar1;
  if (0 < *(int *)(param_1 + 0x70)) {
    do {
      lVar1 = lVar1 + 4;
      iVar2 = iVar2 + 1;
      *(longlong *)(param_2 + 8) = lVar1;
    } while (iVar2 < *(int *)(param_1 + 0x70));
  }
  *(longlong *)(param_2 + 8) = lVar1 + 0x10;
  *(longlong *)(param_2 + 8) = lVar1 + 0x10 + ((longlong)*(int *)(param_1 + 0x80) * 5 + 2) * 8;
  return;
}



// FUNCTION 1408c7b70 GetSlopeValue body=9 status=ok
// SIG undefined GetSlopeValue(void)

undefined4 USystemAnimInstance::GetSlopeValue(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x724);
}



// FUNCTION 1408c7b90 FUN_1408c7b90 body=127 status=ok
// SIG undefined FUN_1408c7b90(void)

undefined8 * FUN_1408c7b90(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  
  *param_2 = 0;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | 0x2001;
  bVar1 = FUN_142730ad0(param_1,param_3);
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) & 0xfffffbff;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | (uint)bVar1 << 10;
  bVar1 = FUN_142730880(param_1,param_3);
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) & 0xfffff7ff;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | (uint)bVar1 << 0xb | 0x200;
  FUN_1425a2630(param_1 + 0x3a0,param_2);
  return param_2;
}



// FUNCTION 1408c7c10 GetVisibilitySample body=298 status=ok
// SIG undefined GetVisibilitySample(void)

char * UGeometryCacheTrackStreamable::GetVisibilitySample
                 (longlong param_1,float param_2,char param_3)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char cVar6;
  int iVar7;
  float fVar8;
  char local_res8 [4];
  float local_resc;
  char local_res20 [4];
  float local_res24;
  
  if (param_3 != '\0') {
    fVar8 = param_2 / *(float *)(param_1 + 0x28);
    param_2 = param_2 - (float)((int)ROUND((fVar8 + fVar8) - 0.5) >> 1) * *(float *)(param_1 + 0x28)
    ;
  }
  pcVar5 = *(char **)(param_1 + 0x88);
  iVar7 = *(int *)(param_1 + 0x90);
  pcVar1 = pcVar5 + (longlong)iVar7 * 0x14;
  if (pcVar5 != pcVar1) {
    pcVar4 = pcVar5 + 8;
    do {
      cVar2 = *pcVar5;
      local_resc = param_2;
      pcVar3 = pcVar5;
      cVar6 = cVar2;
      if ((cVar2 != '\x02') && (param_2 <= *(float *)(pcVar4 + -4))) {
        if ((param_2 < *(float *)(pcVar4 + -4)) || (cVar2 != '\x01')) {
          pcVar3 = local_res8;
        }
        cVar6 = '\x01';
      }
      if ((cVar6 != cVar2) ||
         ((cVar6 != '\x02' && (*(float *)(pcVar4 + -4) != *(float *)(pcVar3 + 4)))))
      goto LAB_1408c7d07;
      cVar2 = *pcVar4;
      local_res24 = param_2;
      local_res20[0] = '\x01';
      if (cVar2 == '\x02') {
        return pcVar5;
      }
      fVar8 = *(float *)(pcVar4 + 4);
      pcVar3 = pcVar4;
      if (fVar8 <= param_2) {
        if (fVar8 < param_2) {
          if (cVar2 == '\x01') {
            pcVar3 = local_res20;
            goto LAB_1408c7d01;
          }
        }
        else if (cVar2 == '\x01') goto LAB_1408c7d01;
      }
      else {
LAB_1408c7d01:
        if (fVar8 == *(float *)(pcVar3 + 4)) {
          return pcVar5;
        }
      }
LAB_1408c7d07:
      pcVar5 = pcVar5 + 0x14;
      pcVar4 = pcVar4 + 0x14;
    } while (pcVar5 != pcVar1);
    iVar7 = *(int *)(param_1 + 0x90);
  }
  return (char *)(*(longlong *)(param_1 + 0x88) + (longlong)(iVar7 + -1) * 0x14);
}



// FUNCTION 1408c7d40 FUN_1408c7d40 body=228 status=ok
// SIG undefined FUN_1408c7d40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408c7d40(longlong param_1)

{
  undefined1 auStack_a8 [32];
  int local_88;
  undefined4 local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_48 = 1;
  local_34 = 0;
  local_70 = &local_60;
  local_60 = 0;
  local_78 = &local_58;
  local_58 = 0;
  uStack_50 = 0;
  local_80 = 1;
  local_44 = _DAT_1468b5d78;
  uStack_40 = uRam00000001468b5d7c;
  uStack_3c = uRam00000001468b5d80;
  uStack_38 = uRam00000001468b5d84;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_88 = *(int *)(param_1 + 0x40) << 2;
  (**(code **)(*DAT_146ab6358 + 0x488))(DAT_146ab6358,local_68,&DAT_146ab6e78,4);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  (**(code **)(*DAT_146ab6358 + 0x500))
            (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x30));
  return;
}



// FUNCTION 1408c7e30 FUN_1408c7e30 body=215 status=ok
// SIG undefined FUN_1408c7e30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408c7e30(longlong param_1)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_48 = 1;
  local_34 = 0;
  local_78 = &local_60;
  local_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_80 = &local_58;
  local_44 = _DAT_1468b5d78;
  uStack_40 = uRam00000001468b5d7c;
  uStack_3c = uRam00000001468b5d80;
  uStack_38 = uRam00000001468b5d84;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_88 = 1;
  (**(code **)(*DAT_146ab6358 + 0x480))
            (DAT_146ab6358,local_68,&DAT_146ab6e78,*(undefined4 *)(param_1 + 0x38));
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  (**(code **)(*DAT_146ab6358 + 0x4b8))
            (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x30));
  return;
}



// FUNCTION 1408c7f20 Init_RenderThread body=221 status=ok
// SIG undefined Init_RenderThread(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FGeomCacheVertexFactory::Init_RenderThread
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_48 = 1;
  local_b0 = 0;
  local_ac = 0x30c00;
  local_b8 = param_2;
  TArray<FVertexStreamComponent,TFixedAllocator<4>_>::ResizeGrow(&local_88,0);
  local_88 = param_6;
  local_98 = param_5;
  local_40 = param_7;
  local_80 = 0;
  local_7c = 0x20800;
  local_a0 = 0;
  local_9c = 0x50400;
  local_90 = 0;
  local_8c = 0x50400;
  local_38 = 0;
  local_34 = 0x80400;
  local_28 = 0;
  local_24 = 0x30c00;
  local_a8 = param_4;
  local_30 = param_3;
  FUN_1424d1020(param_1,&local_b8);
  return;
}



// FUNCTION 1408c8000 Initialize body=1470 status=ok
// SIG undefined Initialize(void)

void FHuffmanTable::Initialize(longlong param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  
  uVar6 = *(uint *)((longlong)param_2 + 0x14);
  iVar7 = (int)param_2[2];
  uVar4 = 0x20;
  uVar8 = 0;
  do {
    if (uVar6 == 0) {
      iVar7 = iVar7 + 1;
      *(undefined4 *)((longlong)param_2 + 0x14) = 8;
      *(int *)(param_2 + 2) = iVar7;
      uVar6 = 8;
    }
    uVar5 = uVar4;
    if (uVar6 <= uVar4) {
      uVar5 = uVar6;
    }
    uVar6 = uVar6 - uVar5;
    bVar1 = *(byte *)((longlong)iVar7 + *param_2);
    *(uint *)((longlong)param_2 + 0x14) = uVar6;
    uVar8 = (uint)(bVar1 >> ((byte)uVar6 & 0x1f)) & (1 << ((byte)uVar5 & 0x1f)) - 1U |
            uVar8 << ((byte)uVar5 & 0x1f);
    uVar4 = uVar4 - uVar5;
  } while (uVar4 != 0);
  *(uint *)(param_1 + 0x94) = uVar8;
  uVar8 = uVar8 - 1;
  iVar7 = 0x1f;
  if (uVar8 != 0) {
    for (; uVar8 >> iVar7 == 0; iVar7 = iVar7 + -1) {
    }
  }
  *(undefined4 *)(param_1 + 8) = 0;
  iVar9 = 0;
  if (uVar8 != 0) {
    iVar9 = iVar7;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  iVar7 = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x94) + 1) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x10);
    iVar7 = *(int *)(param_1 + 0x18);
  }
  iVar2 = *(int *)(param_1 + 0x94) + 1;
  if (iVar7 < iVar2) {
    *(int *)(param_1 + 0x18) = iVar2;
    if (*(int *)(param_1 + 0x1c) < iVar2) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x10);
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar7 * 4),0,
               (longlong)(iVar2 - iVar7) << 2);
  }
  else if ((iVar2 < iVar7) && (iVar2 != iVar7)) {
    *(int *)(param_1 + 0x18) = iVar2;
    TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(param_1 + 0x10);
  }
  iVar7 = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x94)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x20,*(int *)(param_1 + 0x94));
    iVar7 = *(int *)(param_1 + 0x28);
  }
  iVar7 = *(int *)(param_1 + 0x94) + iVar7;
  *(int *)(param_1 + 0x28) = iVar7;
  if (*(int *)(param_1 + 0x2c) < iVar7) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x20);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  puVar10 = (uint *)(param_1 + 0x38);
  lVar3 = 3;
  do {
    uVar8 = 0x20;
    uVar6 = *(uint *)((longlong)param_2 + 0x14);
    uVar4 = 0;
    iVar7 = (int)param_2[2];
    do {
      if (uVar6 == 0) {
        iVar7 = iVar7 + 1;
        *(undefined4 *)((longlong)param_2 + 0x14) = 8;
        *(int *)(param_2 + 2) = iVar7;
        uVar6 = 8;
      }
      uVar5 = uVar8;
      if (uVar6 <= uVar8) {
        uVar5 = uVar6;
      }
      uVar6 = uVar6 - uVar5;
      bVar1 = *(byte *)((longlong)iVar7 + *param_2);
      *(uint *)((longlong)param_2 + 0x14) = uVar6;
      uVar4 = (uint)(bVar1 >> ((byte)uVar6 & 0x1f)) & (1 << ((byte)uVar5 & 0x1f)) - 1U |
              uVar4 << ((byte)uVar5 & 0x1f);
      uVar8 = uVar8 - uVar5;
    } while (uVar8 != 0);
    puVar10[-1] = uVar4;
    uVar8 = 0;
    uVar4 = 0x20;
    uVar6 = *(uint *)((longlong)param_2 + 0x14);
    do {
      if (uVar6 == 0) {
        *(int *)(param_2 + 2) = (int)param_2[2] + 1;
        uVar6 = 8;
        *(undefined4 *)((longlong)param_2 + 0x14) = 8;
      }
      uVar5 = uVar4;
      if (uVar6 <= uVar4) {
        uVar5 = uVar6;
      }
      uVar6 = uVar6 - uVar5;
      bVar1 = *(byte *)((longlong)(int)param_2[2] + *param_2);
      *(uint *)((longlong)param_2 + 0x14) = uVar6;
      uVar8 = (uint)(bVar1 >> ((byte)uVar6 & 0x1f)) & (1 << ((byte)uVar5 & 0x1f)) - 1U |
              uVar8 << ((byte)uVar5 & 0x1f);
      uVar4 = uVar4 - uVar5;
    } while (uVar4 != 0);
    *puVar10 = uVar8;
    uVar4 = 0x20;
    uVar8 = 0;
    uVar6 = *(uint *)((longlong)param_2 + 0x14);
    do {
      if (uVar6 == 0) {
        *(int *)(param_2 + 2) = (int)param_2[2] + 1;
        uVar6 = 8;
        *(undefined4 *)((longlong)param_2 + 0x14) = 8;
      }
      uVar5 = uVar4;
      if (uVar6 <= uVar4) {
        uVar5 = uVar6;
      }
      uVar6 = uVar6 - uVar5;
      bVar1 = *(byte *)((longlong)(int)param_2[2] + *param_2);
      *(uint *)((longlong)param_2 + 0x14) = uVar6;
      uVar8 = (uint)(bVar1 >> ((byte)uVar6 & 0x1f)) & (1 << ((byte)uVar5 & 0x1f)) - 1U |
              uVar8 << ((byte)uVar5 & 0x1f);
      uVar4 = uVar4 - uVar5;
    } while (uVar4 != 0);
    puVar10[1] = uVar8;
    uVar4 = 0x20;
    uVar8 = 0;
    uVar6 = *(uint *)((longlong)param_2 + 0x14);
    do {
      if (uVar6 == 0) {
        *(int *)(param_2 + 2) = (int)param_2[2] + 1;
        uVar6 = 8;
        *(undefined4 *)((longlong)param_2 + 0x14) = 8;
      }
      uVar5 = uVar4;
      if (uVar6 <= uVar4) {
        uVar5 = uVar6;
      }
      uVar6 = uVar6 - uVar5;
      bVar1 = *(byte *)((longlong)(int)param_2[2] + *param_2);
      *(uint *)((longlong)param_2 + 0x14) = uVar6;
      uVar8 = (uint)(bVar1 >> ((byte)uVar6 & 0x1f)) & (1 << ((byte)uVar5 & 0x1f)) - 1U |
              uVar8 << ((byte)uVar5 & 0x1f);
      uVar4 = uVar4 - uVar5;
    } while (uVar4 != 0);
    puVar10[2] = uVar8;
    uVar4 = 0x20;
    uVar8 = 0;
    uVar6 = *(uint *)((longlong)param_2 + 0x14);
    do {
      if (uVar6 == 0) {
        *(int *)(param_2 + 2) = (int)param_2[2] + 1;
        uVar6 = 8;
        *(undefined4 *)((longlong)param_2 + 0x14) = 8;
      }
      uVar5 = uVar4;
      if (uVar6 <= uVar4) {
        uVar5 = uVar6;
      }
      uVar6 = uVar6 - uVar5;
      bVar1 = *(byte *)((longlong)(int)param_2[2] + *param_2);
      *(uint *)((longlong)param_2 + 0x14) = uVar6;
      uVar8 = (uint)(bVar1 >> ((byte)uVar6 & 0x1f)) & (1 << ((byte)uVar5 & 0x1f)) - 1U |
              uVar8 << ((byte)uVar5 & 0x1f);
      uVar4 = uVar4 - uVar5;
    } while (uVar4 != 0);
    puVar10[3] = uVar8;
    uVar4 = 0x20;
    uVar8 = 0;
    uVar6 = *(uint *)((longlong)param_2 + 0x14);
    do {
      if (uVar6 == 0) {
        *(int *)(param_2 + 2) = (int)param_2[2] + 1;
        uVar6 = 8;
        *(undefined4 *)((longlong)param_2 + 0x14) = 8;
      }
      uVar5 = uVar4;
      if (uVar6 <= uVar4) {
        uVar5 = uVar6;
      }
      uVar6 = uVar6 - uVar5;
      bVar1 = *(byte *)((longlong)(int)param_2[2] + *param_2);
      *(uint *)((longlong)param_2 + 0x14) = uVar6;
      uVar8 = (uint)(bVar1 >> ((byte)uVar6 & 0x1f)) & (1 << ((byte)uVar5 & 0x1f)) - 1U |
              uVar8 << ((byte)uVar5 & 0x1f);
      uVar4 = uVar4 - uVar5;
    } while (uVar4 != 0);
    puVar10[4] = uVar8;
    uVar4 = 0x20;
    uVar8 = 0;
    uVar6 = *(uint *)((longlong)param_2 + 0x14);
    do {
      if (uVar6 == 0) {
        *(int *)(param_2 + 2) = (int)param_2[2] + 1;
        uVar6 = 8;
        *(undefined4 *)((longlong)param_2 + 0x14) = 8;
      }
      uVar5 = uVar4;
      if (uVar6 <= uVar4) {
        uVar5 = uVar6;
      }
      uVar6 = uVar6 - uVar5;
      bVar1 = *(byte *)((longlong)(int)param_2[2] + *param_2);
      *(uint *)((longlong)param_2 + 0x14) = uVar6;
      uVar8 = (uint)(bVar1 >> ((byte)uVar6 & 0x1f)) & (1 << ((byte)uVar5 & 0x1f)) - 1U |
              uVar8 << ((byte)uVar5 & 0x1f);
      uVar4 = uVar4 - uVar5;
    } while (uVar4 != 0);
    puVar10[5] = uVar8;
    uVar4 = 0x20;
    uVar8 = 0;
    uVar6 = *(uint *)((longlong)param_2 + 0x14);
    do {
      if (uVar6 == 0) {
        *(int *)(param_2 + 2) = (int)param_2[2] + 1;
        uVar6 = 8;
        *(undefined4 *)((longlong)param_2 + 0x14) = 8;
      }
      uVar5 = uVar4;
      if (uVar6 <= uVar4) {
        uVar5 = uVar6;
      }
      uVar6 = uVar6 - uVar5;
      bVar1 = *(byte *)((longlong)(int)param_2[2] + *param_2);
      *(uint *)((longlong)param_2 + 0x14) = uVar6;
      uVar8 = (uint)(bVar1 >> ((byte)uVar6 & 0x1f)) & (1 << ((byte)uVar5 & 0x1f)) - 1U |
              uVar8 << ((byte)uVar5 & 0x1f);
      uVar4 = uVar4 - uVar5;
    } while (uVar4 != 0);
    puVar10[6] = uVar8;
    puVar10 = puVar10 + 8;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  CountTotalCodewords(param_1);
  if (0 < *(int *)(param_1 + 0x9d0)) {
    lVar3 = 0;
    iVar7 = 0;
    do {
      uVar6 = 0;
      *(undefined4 *)(lVar3 + *(longlong *)(param_1 + 0x10)) = 0;
      if (iVar9 + 1U != 0) {
        uVar8 = *(uint *)((longlong)param_2 + 0x14);
        iVar2 = (int)param_2[2];
        uVar4 = iVar9 + 1U;
        do {
          if (uVar8 == 0) {
            iVar2 = iVar2 + 1;
            *(undefined4 *)((longlong)param_2 + 0x14) = 8;
            *(int *)(param_2 + 2) = iVar2;
            uVar8 = 8;
          }
          uVar5 = uVar4;
          if (uVar8 <= uVar4) {
            uVar5 = uVar8;
          }
          uVar8 = uVar8 - uVar5;
          bVar1 = *(byte *)((longlong)iVar2 + *param_2);
          *(uint *)((longlong)param_2 + 0x14) = uVar8;
          uVar6 = (uint)(bVar1 >> ((byte)uVar8 & 0x1f)) & (1 << ((byte)uVar5 & 0x1f)) - 1U |
                  uVar6 << ((byte)uVar5 & 0x1f);
          uVar4 = uVar4 - uVar5;
        } while (uVar4 != 0);
      }
      iVar7 = iVar7 + 1;
      *(uint *)(lVar3 + *(longlong *)(param_1 + 0x10)) = uVar6;
      lVar3 = lVar3 + 4;
    } while (iVar7 < *(int *)(param_1 + 0x9d0));
  }
  GenerateCodewords(param_1);
  *(undefined1 *)(param_1 + 0x9d4) = 0;
  return;
}



// FUNCTION 1408c85c0 FUN_1408c85c0 body=8 status=ok
// SIG undefined FUN_1408c85c0(void)

undefined1 FUN_1408c85c0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x721);
}



// FUNCTION 1408c8600 IsManagedGeometryCache body=32 status=ok
// SIG undefined IsManagedGeometryCache(void)

bool FGeometryCacheStreamingManager::IsManagedGeometryCache(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined1 local_res8 [32];
  
  piVar1 = (int *)TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
                  ::FindId(param_1 + 0x18,local_res8,param_2);
  return *piVar1 != -1;
}



// FUNCTION 1408c8620 SupportsKeyboardFocus body=8 status=ok
// SIG undefined SupportsKeyboardFocus(void)

undefined1 SCheckBox::SupportsKeyboardFocus(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x720);
}



// FUNCTION 1408c8630 FUN_1408c8630 body=34 status=ok
// SIG undefined FUN_1408c8630(void)

bool FUN_1408c8630(longlong param_1)

{
  return ABS(*(float *)(param_1 + 0x760) - -1.0) <= 1e-08;
}



// FUNCTION 1408c8680 IsSameTopology body=209 status=ok
// SIG undefined IsSameTopology(void)

bool UGeometryCacheCodecBase::IsSameTopology(longlong *param_1,int param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  
  if ((int)param_1[1] == 0) {
    if (*param_1 == 0) {
      return true;
    }
    FMemory::Free();
    return true;
  }
  piVar1 = (int *)*param_1;
  uVar6 = (int)param_1[1] - 1;
  if (param_2 < piVar1[(int)uVar6]) {
    uVar3 = 0;
    if (*piVar1 <= param_2) {
      while ((uVar2 = uVar6, uVar2 != 0 && (uVar3 < uVar2))) {
        uVar4 = uVar3 + 1 + uVar2 >> 1;
        uVar6 = uVar4 - 1;
        if (piVar1[uVar4] <= param_2) {
          uVar6 = uVar2;
          uVar3 = uVar4;
        }
      }
      if ((piVar1[(int)uVar3] <= param_3) && (param_3 < piVar1[(longlong)(int)uVar3 + 1])) {
        if (piVar1 == (int *)0x0) {
          return true;
        }
        FMemory::Free(piVar1);
        return true;
      }
      if (piVar1 != (int *)0x0) {
        FMemory::Free(piVar1);
      }
      return false;
    }
    bVar5 = param_3 < *piVar1;
  }
  else {
    bVar5 = piVar1[(int)uVar6] <= param_3;
  }
  if (piVar1 != (int *)0x0) {
    FMemory::Free(piVar1);
  }
  return bVar5;
}



// FUNCTION 1408c8760 IsSameTopology body=125 status=ok
// SIG undefined IsSameTopology(void)

void UGeometryCacheCodecBase::IsSameTopology(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  void *_Src;
  longlong lVar1;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  local_10 = *(int *)(param_1 + 0x30);
  lVar1 = (longlong)local_10;
  _Src = *(void **)(param_1 + 0x28);
  local_18 = (void *)0x0;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(&local_18,local_10,0);
    ::_guard_xfg_dispatch_icall_nop(local_18,_Src,lVar1 << 2);
  }
  IsSameTopology(&local_18,param_2,param_3);
  return;
}



// FUNCTION 1408c87e0 IsStreamingInProgress body=145 status=ok
// SIG undefined IsStreamingInProgress(void)

bool FGeometryCacheStreamingManager::IsStreamingInProgress(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  longlong lVar2;
  BOOL BVar3;
  longlong *plVar4;
  longlong *plVar5;
  int local_res8 [2];
  
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x18),local_res8);
  plVar5 = (longlong *)0x0;
  if (local_res8[0] != -1) {
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)local_res8[0] * 0x18);
  }
  plVar4 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  if (plVar4 == (longlong *)0x0) {
    return false;
  }
  lVar2 = *plVar4;
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar2 + 0xc0);
  BVar3 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar3 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar1 = *(int *)(lVar2 + 0x88);
  LeaveCriticalSection(lpCriticalSection);
  return 0 < iVar1;
}



// FUNCTION 1408c8880 IsTopologyCompatible body=125 status=ok
// SIG undefined IsTopologyCompatible(void)

void FGeometryCacheCodecRenderStateBase::IsTopologyCompatible
               (longlong param_1,undefined4 param_2,undefined4 param_3)

{
  void *_Src;
  longlong lVar1;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  local_10 = *(int *)(param_1 + 0x10);
  lVar1 = (longlong)local_10;
  _Src = *(void **)(param_1 + 8);
  local_18 = (void *)0x0;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(&local_18,local_10,0);
    ::_guard_xfg_dispatch_icall_nop(local_18,_Src,lVar1 << 2);
  }
  UGeometryCacheCodecBase::IsSameTopology(&local_18,param_2,param_3);
  return;
}



// FUNCTION 1408c8900 LongDecode body=390 status=ok
// SIG undefined LongDecode(void)

undefined4 FHuffmanTable::LongDecode(longlong param_1,longlong *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  int *piVar11;
  
  uVar2 = 0;
  uVar3 = (ulonglong)(int)param_3;
  if (param_3 != 0) {
    uVar7 = *(uint *)((longlong)param_2 + 0x14);
    iVar9 = (int)param_2[2];
    uVar5 = param_3;
    do {
      if (uVar7 == 0) {
        iVar9 = iVar9 + 1;
        *(undefined4 *)((longlong)param_2 + 0x14) = 8;
        *(int *)(param_2 + 2) = iVar9;
        uVar7 = 8;
      }
      uVar4 = uVar5;
      if (uVar7 <= uVar5) {
        uVar4 = uVar7;
      }
      uVar7 = uVar7 - uVar4;
      bVar1 = *(byte *)((longlong)iVar9 + *param_2);
      *(uint *)((longlong)param_2 + 0x14) = uVar7;
      uVar2 = (uint)(bVar1 >> ((byte)uVar7 & 0x1f)) & (1 << ((byte)uVar4 & 0x1f)) - 1U |
              uVar2 << ((byte)uVar4 & 0x1f);
      uVar5 = uVar5 - uVar4;
    } while (uVar5 != 0);
  }
  if ((int)param_3 < 0x19) {
    piVar11 = (int *)(param_1 + 0x9c + uVar3 * 0xc);
    uVar10 = uVar3;
    do {
      uVar7 = (uint)uVar3;
      if ((int)uVar2 <= *piVar11) break;
      uVar5 = *(uint *)((longlong)param_2 + 0x14);
      uVar6 = 0;
      iVar9 = (int)param_2[2];
      uVar4 = 1;
      do {
        if (uVar5 == 0) {
          iVar9 = iVar9 + 1;
          *(undefined4 *)((longlong)param_2 + 0x14) = 8;
          *(int *)(param_2 + 2) = iVar9;
          uVar5 = 8;
        }
        uVar8 = uVar4;
        if (uVar5 <= uVar4) {
          uVar8 = uVar5;
        }
        uVar5 = uVar5 - uVar8;
        bVar1 = *(byte *)((longlong)iVar9 + *param_2);
        *(uint *)((longlong)param_2 + 0x14) = uVar5;
        uVar6 = (uint)(bVar1 >> ((byte)uVar5 & 0x1f)) & (1 << ((byte)uVar8 & 0x1f)) - 1U |
                uVar6 << ((byte)uVar8 & 0x1f);
        uVar4 = uVar4 - uVar8;
      } while (uVar4 != 0);
      uVar2 = uVar2 * 2 | uVar6;
      uVar7 = uVar7 + 1;
      uVar3 = (ulonglong)uVar7;
      uVar10 = uVar10 + 1;
      piVar11 = piVar11 + 3;
    } while ((longlong)uVar10 < 0x19);
    if ((int)uVar7 < 0x19) {
      return *(undefined4 *)
              (*(longlong *)(param_1 + 0x10) +
              (longlong)
              (int)((*(int *)(param_1 + 0xa0 + (longlong)(int)uVar7 * 0xc) -
                    *(int *)(param_1 + 0x98 + (longlong)(int)uVar7 * 0xc)) + uVar2) * 4);
    }
  }
  return 0;
}



// FUNCTION 1408c8a90 MapChunk body=409 status=ok
// SIG undefined MapChunk(void)

longlong *
FGeometryCacheStreamingManager::MapChunk
          (longlong param_1,undefined8 param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  longlong lVar2;
  BOOL BVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  int local_res8 [2];
  
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x18),local_res8,param_2);
  plVar9 = (longlong *)0x0;
  plVar7 = plVar9;
  if (local_res8[0] != -1) {
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)local_res8[0] * 0x18);
  }
  plVar8 = plVar7 + 1;
  if (plVar7 == (longlong *)0x0) {
    plVar8 = plVar9;
  }
  if (plVar8 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  lVar2 = *plVar8;
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0xc0));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0xc0));
  }
  FUN_1408c9410(lVar2);
  piVar6 = *(int **)(lVar2 + 0x20);
  piVar1 = piVar6 + *(int *)(lVar2 + 0x28);
  for (; piVar6 != piVar1; piVar6 = piVar6 + 1) {
    if (*piVar6 == param_3) {
      if (*(int *)(lVar2 + 0x38) == *(int *)(lVar2 + 100)) goto LAB_1408c8bf0;
      lVar5 = *(longlong *)(lVar2 + 0x70);
      if (*(longlong *)(lVar2 + 0x70) == 0) {
        lVar5 = lVar2 + 0x68;
      }
      iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(lVar2 + 0x78) - 1U & (longlong)param_3) * 4);
      if (iVar4 == -1) goto LAB_1408c8bf0;
      goto LAB_1408c8bd0;
    }
  }
  piVar6 = *(int **)(lVar2 + 0x80);
  piVar1 = piVar6 + *(int *)(lVar2 + 0x88);
  for (; piVar6 != piVar1; piVar6 = piVar6 + 1) {
    plVar8 = plVar9;
    if (*piVar6 == param_3) goto LAB_1408c8b81;
  }
  piVar6 = *(int **)(lVar2 + 0x90);
  piVar1 = piVar6 + *(int *)(lVar2 + 0x98);
  for (; (plVar8 = (longlong *)0x0, piVar6 != piVar1 && (plVar8 = plVar9, *piVar6 != param_3));
      piVar6 = piVar6 + 1) {
  }
LAB_1408c8b81:
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0xc0));
  return plVar8;
  while (iVar4 = (int)plVar7[4], iVar4 != -1) {
LAB_1408c8bd0:
    plVar7 = (longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar4 * 0x28);
    if (*(int *)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar4 * 0x28) == param_3) {
      if (iVar4 != -1) goto LAB_1408c8bf3;
      break;
    }
  }
LAB_1408c8bf0:
  plVar7 = plVar9;
LAB_1408c8bf3:
  plVar8 = plVar7 + 1;
  if (plVar7 == (longlong *)0x0) {
    plVar8 = plVar9;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = (int)plVar8[1];
  }
  *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
  plVar8 = (longlong *)*plVar8;
  goto LAB_1408c8b81;
}



// FUNCTION 1408c8c30 FUN_1408c8c30 body=81 status=ok
// SIG undefined FUN_1408c8c30(void)

void FUN_1408c8c30(longlong param_1)

{
  longlong *plVar1;
  
  *(undefined4 *)(param_1 + 0x72c) = 0;
  *(undefined4 *)(param_1 + 0x758) = 0;
  if (*(int *)(param_1 + 0x75c) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x750,0);
  }
  FUN_1408cb300(param_1);
  plVar1 = (longlong *)IGeometryCacheStreamingManager::Get();
  (**(code **)(*plVar1 + 0xb8))(plVar1,param_1);
  FUN_1423937b0(param_1);
  return;
}



// FUNCTION 1408c8c90 FUN_1408c8c90 body=79 status=ok
// SIG undefined FUN_1408c8c90(void)

void FUN_1408c8c90(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)IGeometryCacheStreamingManager::Get();
  (**(code **)(*plVar1 + 0xc0))(plVar1,param_1);
  FUN_142393f60(param_1);
  *(undefined4 *)(param_1 + 0x72c) = 0;
  *(undefined4 *)(param_1 + 0x758) = 0;
  if (*(int *)(param_1 + 0x75c) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x750,0);
    return;
  }
  return;
}



// FUNCTION 1408c8d00 FUN_1408c8d00 body=52 status=ok
// SIG undefined FUN_1408c8d00(void)

void FUN_1408c8d00(longlong param_1)

{
  longlong *plVar1;
  
  *(undefined1 *)(param_1 + 0x720) = 1;
  *(undefined4 *)(param_1 + 0x760) = 0x3f800000;
  plVar1 = (longlong *)IGeometryCacheStreamingManager::Get();
                    /* WARNING: Could not recover jumptable at 0x0001408c8d2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 200))(plVar1,param_1);
  return;
}



// FUNCTION 1408c8d40 FUN_1408c8d40 body=62 status=ok
// SIG undefined FUN_1408c8d40(void)

void FUN_1408c8d40(longlong param_1)

{
  longlong *plVar1;
  
  *(undefined4 *)(param_1 + 0x730) = 0;
  *(undefined1 *)(param_1 + 0x720) = 1;
  *(undefined4 *)(param_1 + 0x760) = 0x3f800000;
  plVar1 = (longlong *)IGeometryCacheStreamingManager::Get();
                    /* WARNING: Could not recover jumptable at 0x0001408c8d77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 200))(plVar1,param_1);
  return;
}


