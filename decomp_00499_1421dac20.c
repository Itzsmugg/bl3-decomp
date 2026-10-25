// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1421dac20 FUN_1421dac20 body=578 status=ok
// SIG undefined FUN_1421dac20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1421dac20(longlong *param_1,ushort *param_2,int param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_128 [32];
  uint local_108;
  uint local_104 [3];
  undefined4 local_f8;
  uint local_f4 [19];
  uint local_a8 [20];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  lVar3 = (longlong)param_3;
  if ((param_3 < 1) || (param_4 <= param_3)) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      *param_2 = 0;
    }
    (**(code **)(*param_1 + 0x58))(param_1,param_2,(longlong)param_4);
  }
  else {
    local_a8[0] = 0;
    local_a8[1] = 1;
    local_a8[2] = 3;
    local_a8[3] = 7;
    local_a8[4] = 0xf;
    local_a8[5] = 0x1f;
    local_a8[6] = 0x3f;
    local_a8[7] = 0x7f;
    local_a8[8] = 0xff;
    local_a8[9] = 0x1ff;
    local_a8[10] = 0x3ff;
    local_a8[0xb] = 0x7ff;
    local_a8[0xc] = 0xfff;
    local_a8[0xd] = 0x1fff;
    local_a8[0xe] = 0x3fff;
    local_a8[0xf] = 0x7fff;
    local_a8[0x10] = 0xffff;
    local_f8 = 0;
    local_f4[0] = 1;
    local_f4[1] = 2;
    local_f4[2] = 4;
    local_f4[3] = 8;
    local_f4[4] = 0x10;
    local_f4[5] = 0x20;
    local_f4[6] = 0x40;
    local_f4[7] = 0x80;
    local_f4[8] = 0x100;
    local_f4[9] = 0x200;
    local_f4[10] = 0x400;
    local_f4[0xb] = 0x800;
    local_f4[0xc] = 0x1000;
    local_f4[0xd] = 0x2000;
    local_f4[0xe] = 0x4000;
    local_f4[0xf] = 0x8000;
    if ((*(byte *)(param_1 + 5) & 2) == 0) {
      local_104[0] = 0;
      (**(code **)(*param_1 + 0x58))(param_1,local_104,lVar3 + 1);
      if ((local_f4[lVar3] & local_104[0]) == 0) {
        *param_2 = (ushort)local_104[0];
      }
      else {
        local_108 = 0;
        (**(code **)(*param_1 + 0x58))(param_1,&local_108,(longlong)(param_4 - param_3));
        *param_2 = (ushort)local_a8[lVar3] & (ushort)local_104[0] |
                   (short)local_108 << ((byte)param_3 & 0x1f);
      }
    }
    else {
      uVar1 = *param_2;
      iVar2 = param_3 + 1;
      local_108 = (uint)uVar1;
      if (local_a8[lVar3] < (uint)uVar1) {
        local_108 = (uint)(uVar1 >> ((byte)param_3 & 0x1f)) << ((byte)iVar2 & 0x1f) |
                    local_f4[lVar3] | local_108 & local_a8[lVar3];
        iVar2 = param_4 + 1;
      }
      (**(code **)(*param_1 + 0x58))(param_1,&local_108,(longlong)iVar2);
    }
  }
  return;
}



// FUNCTION 1421dae70 FUN_1421dae70 body=211 status=ok
// SIG undefined FUN_1421dae70(void)

char FUN_1421dae70(void)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined2 *puVar5;
  char local_res10 [24];
  longlong local_28 [2];
  longlong local_18 [2];
  
  plVar2 = (longlong *)UGameplayTagsSettings::GetPrivateStaticClass();
  lVar4 = plVar2[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar2 + 0x368))(plVar2);
    lVar4 = plVar2[0x1f];
  }
  puVar3 = (undefined8 *)FPaths::ProjectConfigDir(local_18);
  if (*(int *)(puVar3 + 1) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = (undefined2 *)*puVar3;
  }
  FString::PrintfImpl(local_28,L"%sDefaultEngine.ini",puVar5);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_res10[0] = '\0';
  cVar1 = FConfigCacheIni::GetBool
                    (DAT_1468b6148,L"GameplayTags",L"ImportTagsFromConfig",local_res10,local_28);
  if (cVar1 == '\0') {
    cVar1 = *(char *)(lVar4 + 0x48);
  }
  else {
    cVar1 = local_res10[0];
    if (local_res10[0] != '\0') {
      *(char *)(lVar4 + 0x48) = local_res10[0];
    }
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return cVar1;
}



// FUNCTION 1421daf70 FUN_1421daf70 body=47 status=ok
// SIG undefined FUN_1421daf70(void)

longlong FUN_1421daf70(void)

{
  if (DAT_146aed890 == 0) {
    FUN_141786440(&DAT_146aed890,&PTR_GetPrivateStaticClass_144fe8890);
  }
  return DAT_146aed890;
}



// FUNCTION 1421dafa0 FUN_1421dafa0 body=47 status=ok
// SIG undefined FUN_1421dafa0(void)

longlong FUN_1421dafa0(void)

{
  if (DAT_146aed870 == 0) {
    FUN_141786a30(&DAT_146aed870,&PTR_FUN_14652bdf0);
  }
  return DAT_146aed870;
}



// FUNCTION 1421dafd0 FUN_1421dafd0 body=47 status=ok
// SIG undefined FUN_1421dafd0(void)

longlong FUN_1421dafd0(void)

{
  if (DAT_146aed878 == 0) {
    FUN_141786a30(&DAT_146aed878,&PTR_FUN_14652bee0);
  }
  return DAT_146aed878;
}



// FUNCTION 1421db000 FUN_1421db000 body=47 status=ok
// SIG undefined FUN_1421db000(void)

longlong FUN_1421db000(void)

{
  if (DAT_146aed880 == 0) {
    FUN_141786a30(&DAT_146aed880,&PTR_FUN_14652bfe0);
  }
  return DAT_146aed880;
}



// FUNCTION 1421db030 FUN_1421db030 body=47 status=ok
// SIG undefined FUN_1421db030(void)

longlong FUN_1421db030(void)

{
  if (DAT_146aed888 == 0) {
    FUN_141786a30(&DAT_146aed888,&PTR_FUN_14652c0d0);
  }
  return DAT_146aed888;
}



// FUNCTION 1421db070 FUN_1421db070 body=47 status=ok
// SIG undefined FUN_1421db070(void)

longlong FUN_1421db070(void)

{
  if (DAT_146aed918 == 0) {
    FUN_141786440(&DAT_146aed918,&PTR_StaticClass_144fe98a0);
  }
  return DAT_146aed918;
}



// FUNCTION 1421db0a0 FUN_1421db0a0 body=53 status=ok
// SIG undefined FUN_1421db0a0(void)

void FUN_1421db0a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &PTR_FUN_144fec810;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1421db0e0 FUN_1421db0e0 body=47 status=ok
// SIG undefined FUN_1421db0e0(void)

longlong FUN_1421db0e0(void)

{
  if (DAT_146aed9d0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aed9d0,&PTR_FUN_14652c970);
  }
  return DAT_146aed9d0;
}



// FUNCTION 1421db110 FUN_1421db110 body=53 status=ok
// SIG undefined FUN_1421db110(void)

void FUN_1421db110(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_144fec928;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1421db150 FUN_1421db150 body=53 status=ok
// SIG undefined FUN_1421db150(void)

void FUN_1421db150(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &PTR_FUN_144fecd00;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1421db190 FUN_1421db190 body=53 status=ok
// SIG undefined FUN_1421db190(void)

void FUN_1421db190(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_144feca40;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1421db1d0 FUN_1421db1d0 body=53 status=ok
// SIG undefined FUN_1421db1d0(void)

void FUN_1421db1d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_144fece18;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1421db210 FUN_1421db210 body=53 status=ok
// SIG undefined FUN_1421db210(void)

void FUN_1421db210(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &PTR_FUN_144fecb58;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1421db260 FUN_1421db260 body=53 status=ok
// SIG undefined FUN_1421db260(void)

void FUN_1421db260(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_144fecf30;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1421db2b0 FUN_1421db2b0 body=53 status=ok
// SIG undefined FUN_1421db2b0(void)

void FUN_1421db2b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_144fed048;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1421db330 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGameplayTagsList::GetPrivateStaticClass(void)

{
  if (DAT_146aeda20 == 0) {
    FUN_14171ccd0(L"/Script/GameplayTags",L"GameplayTagsList",&DAT_146aeda20,FUN_140447710,0x48,
                  0x10000004,0,L"GameplayTagsList",&LAB_1421dc480,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146aeda20;
}



// FUNCTION 1421db400 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong URestrictedGameplayTagsList::GetPrivateStaticClass(void)

{
  if (DAT_146aeda30 == 0) {
    FUN_14171ccd0(L"/Script/GameplayTags",L"RestrictedGameplayTagsList",&DAT_146aeda30,FUN_140447710
                  ,0x48,0x10000004,0,L"GameplayTags",&LAB_1421dc4e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146aeda30;
}



// FUNCTION 1421db4a0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGameplayTagsSettings::GetPrivateStaticClass(void)

{
  if (DAT_146aeda40 == 0) {
    FUN_14171ccd0(L"/Script/GameplayTags",L"GameplayTagsSettings",&DAT_146aeda40,FUN_140447710,0xb0,
                  0x10000006,0,L"GameplayTags",&LAB_1421dc4c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UGameplayTagsList::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146aeda40;
}



// FUNCTION 1421db550 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong UEditableGameplayTagQuery::StaticClass(void)

{
  if (DAT_146aed910 == 0) {
    FUN_14171ccd0(L"/Script/GameplayTags",L"EditableGameplayTagQuery",&DAT_146aed910,FUN_140447710,
                  0x98,0x10000008,0,L"Engine",InternalConstructor<UEditableGameplayTagQuery>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146aed910;
}



// FUNCTION 1421db5f0 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong UEditableGameplayTagQueryExpression::StaticClass(void)

{
  if (DAT_146aed920 == 0) {
    FUN_14171ccd0(L"/Script/GameplayTags",L"EditableGameplayTagQueryExpression",&DAT_146aed920,
                  FUN_140447710,0x28,0x10000009,0,L"Engine",FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146aed920;
}



// FUNCTION 1421db690 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UEditableGameplayTagQueryExpression_AnyTagsMatch::StaticClass(void)

{
  if (DAT_146aed930 == 0) {
    FUN_14171ccd0(L"/Script/GameplayTags",L"EditableGameplayTagQueryExpression_AnyTagsMatch",
                  &DAT_146aed930,FUN_140447710,0x48,0x10000008,0,L"Engine",FUN_1421dc420,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UEditableGameplayTagQueryExpression::StaticClass,&LAB_140447700,0);
  }
  return DAT_146aed930;
}



// FUNCTION 1421db740 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UEditableGameplayTagQueryExpression_AllTagsMatch::StaticClass(void)

{
  if (DAT_146aed940 == 0) {
    FUN_14171ccd0(L"/Script/GameplayTags",L"EditableGameplayTagQueryExpression_AllTagsMatch",
                  &DAT_146aed940,FUN_140447710,0x48,0x10000008,0,L"Engine",FUN_1421dc420,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UEditableGameplayTagQueryExpression::StaticClass,&LAB_140447700,0);
  }
  return DAT_146aed940;
}



// FUNCTION 1421db7f0 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong UGameplayTagsDeveloperSettings::StaticClass(void)

{
  if (DAT_146aeda50 == 0) {
    FUN_14171ccd0(L"/Script/GameplayTags",L"GameplayTagsDeveloperSettings",&DAT_146aeda50,
                  FUN_140447710,0x38,0x10000004,0,L"GameplayTags",&LAB_1421dc460,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146aeda50;
}



// FUNCTION 1421db890 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UEditableGameplayTagQueryExpression_NoTagsMatch::StaticClass(void)

{
  if (DAT_146aed950 == 0) {
    FUN_14171ccd0(L"/Script/GameplayTags",L"EditableGameplayTagQueryExpression_NoTagsMatch",
                  &DAT_146aed950,FUN_140447710,0x48,0x10000008,0,L"Engine",FUN_1421dc420,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UEditableGameplayTagQueryExpression::StaticClass,&LAB_140447700,0);
  }
  return DAT_146aed950;
}



// FUNCTION 1421db940 FUN_1421db940 body=47 status=ok
// SIG undefined FUN_1421db940(void)

longlong FUN_1421db940(void)

{
  if (DAT_146aeda18 == 0) {
    FUN_141786440(&DAT_146aeda18,&PTR_GetPrivateStaticClass_144feab20);
  }
  return DAT_146aeda18;
}



// FUNCTION 1421db970 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UEditableGameplayTagQueryExpression_AnyExprMatch::StaticClass(void)

{
  if (DAT_146aed960 == 0) {
    FUN_14171ccd0(L"/Script/GameplayTags",L"EditableGameplayTagQueryExpression_AnyExprMatch",
                  &DAT_146aed960,FUN_140447710,0x38,0x10000008,0,L"Engine",FUN_1408e0a20,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UEditableGameplayTagQueryExpression::StaticClass,&LAB_140447700,0);
  }
  return DAT_146aed960;
}



// FUNCTION 1421dba20 FUN_1421dba20 body=53 status=ok
// SIG undefined FUN_1421dba20(void)

void FUN_1421dba20(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_144fed1a8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1421dba60 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UEditableGameplayTagQueryExpression_AllExprMatch::StaticClass(void)

{
  if (DAT_146aed970 == 0) {
    FUN_14171ccd0(L"/Script/GameplayTags",L"EditableGameplayTagQueryExpression_AllExprMatch",
                  &DAT_146aed970,FUN_140447710,0x38,0x10000008,0,L"Engine",FUN_1408e0a20,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UEditableGameplayTagQueryExpression::StaticClass,&LAB_140447700,0);
  }
  return DAT_146aed970;
}



// FUNCTION 1421dbb10 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UEditableGameplayTagQueryExpression_NoExprMatch::StaticClass(void)

{
  if (DAT_146aed980 == 0) {
    FUN_14171ccd0(L"/Script/GameplayTags",L"EditableGameplayTagQueryExpression_NoExprMatch",
                  &DAT_146aed980,FUN_140447710,0x38,0x10000008,0,L"Engine",FUN_1408e0a20,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UEditableGameplayTagQueryExpression::StaticClass,&LAB_140447700,0);
  }
  return DAT_146aed980;
}



// FUNCTION 1421dbbd0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGameplayTagAssetInterface::GetPrivateStaticClass(void)

{
  if (DAT_146aed898 == 0) {
    FUN_14171ccd0(L"/Script/GameplayTags",L"GameplayTagAssetInterface",&DAT_146aed898,
                  StaticRegisterNativesUGameplayTagAssetInterface,0x28,0x10004001,0,L"Engine",
                  &LAB_140492380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146aed898;
}



// FUNCTION 1421dbc90 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGameplayTagsManager::GetPrivateStaticClass(void)

{
  if (DAT_146aed9e0 == 0) {
    FUN_14171ccd0(L"/Script/GameplayTags",L"GameplayTagsManager",&DAT_146aed9e0,FUN_140447710,400,
                  0x10000000,0,L"Engine",&LAB_1421dc4a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146aed9e0;
}



// FUNCTION 1421dbd30 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UBlueprintGameplayTagLibrary::GetPrivateStaticClass(void)

{
  if (DAT_146aed838 == 0) {
    FUN_14171ccd0(L"/Script/GameplayTags",L"BlueprintGameplayTagLibrary",&DAT_146aed838,
                  StaticRegisterNativesUBlueprintGameplayTagLibrary,0x28,0x10000000,0,L"Engine",
                  &LAB_140492340,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_146aed838;
}



// FUNCTION 1421dbe00 FUN_1421dbe00 body=47 status=ok
// SIG undefined FUN_1421dbe00(void)

longlong FUN_1421dbe00(void)

{
  if (DAT_146aed830 == 0) {
    FUN_141786440(&DAT_146aed830,&PTR_GetPrivateStaticClass_144fe8250);
  }
  return DAT_146aed830;
}



// FUNCTION 1421dbe30 FUN_1421dbe30 body=47 status=ok
// SIG undefined FUN_1421dbe30(void)

longlong FUN_1421dbe30(void)

{
  if (DAT_146aed988 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146aed988,&PTR_s__Script_GameplayTags_144fecc70);
  }
  return DAT_146aed988;
}



// FUNCTION 1421dbe60 FUN_1421dbe60 body=47 status=ok
// SIG undefined FUN_1421dbe60(void)

longlong FUN_1421dbe60(void)

{
  if (DAT_146aed748 == 0) {
    FUN_141786a30(&DAT_146aed748,&PTR_FUN_146529ee0);
  }
  return DAT_146aed748;
}



// FUNCTION 1421dbe90 FUN_1421dbe90 body=47 status=ok
// SIG undefined FUN_1421dbe90(void)

longlong FUN_1421dbe90(void)

{
  if (DAT_146aed750 == 0) {
    FUN_141786a30(&DAT_146aed750,&PTR_FUN_146529fa0);
  }
  return DAT_146aed750;
}



// FUNCTION 1421dbec0 FUN_1421dbec0 body=47 status=ok
// SIG undefined FUN_1421dbec0(void)

longlong FUN_1421dbec0(void)

{
  if (DAT_146aed758 == 0) {
    FUN_141786a30(&DAT_146aed758,&PTR_FUN_14652a0d0);
  }
  return DAT_146aed758;
}



// FUNCTION 1421dbef0 FUN_1421dbef0 body=47 status=ok
// SIG undefined FUN_1421dbef0(void)

longlong FUN_1421dbef0(void)

{
  if (DAT_146aed760 == 0) {
    FUN_141786a30(&DAT_146aed760,&PTR_FUN_14652a210);
  }
  return DAT_146aed760;
}



// FUNCTION 1421dbf20 FUN_1421dbf20 body=47 status=ok
// SIG undefined FUN_1421dbf20(void)

longlong FUN_1421dbf20(void)

{
  if (DAT_146aed768 == 0) {
    FUN_141786a30(&DAT_146aed768,&PTR_FUN_14652a350);
  }
  return DAT_146aed768;
}



// FUNCTION 1421dbf50 FUN_1421dbf50 body=47 status=ok
// SIG undefined FUN_1421dbf50(void)

longlong FUN_1421dbf50(void)

{
  if (DAT_146aed770 == 0) {
    FUN_141786a30(&DAT_146aed770,&PTR_FUN_14652a490);
  }
  return DAT_146aed770;
}



// FUNCTION 1421dbf80 FUN_1421dbf80 body=47 status=ok
// SIG undefined FUN_1421dbf80(void)

longlong FUN_1421dbf80(void)

{
  if (DAT_146aed778 == 0) {
    FUN_141786a30(&DAT_146aed778,&PTR_FUN_14652a5d0);
  }
  return DAT_146aed778;
}



// FUNCTION 1421dbfb0 FUN_1421dbfb0 body=47 status=ok
// SIG undefined FUN_1421dbfb0(void)

longlong FUN_1421dbfb0(void)

{
  if (DAT_146aed780 == 0) {
    FUN_141786a30(&DAT_146aed780,&PTR_FUN_14652a750);
  }
  return DAT_146aed780;
}



// FUNCTION 1421dbfe0 FUN_1421dbfe0 body=47 status=ok
// SIG undefined FUN_1421dbfe0(void)

longlong FUN_1421dbfe0(void)

{
  if (DAT_146aed788 == 0) {
    FUN_141786a30(&DAT_146aed788,&PTR_FUN_14652a7d0);
  }
  return DAT_146aed788;
}



// FUNCTION 1421dc010 FUN_1421dc010 body=47 status=ok
// SIG undefined FUN_1421dc010(void)

longlong FUN_1421dc010(void)

{
  if (DAT_146aed790 == 0) {
    FUN_141786a30(&DAT_146aed790,&PTR_FUN_14652a850);
  }
  return DAT_146aed790;
}



// FUNCTION 1421dc040 FUN_1421dc040 body=47 status=ok
// SIG undefined FUN_1421dc040(void)

longlong FUN_1421dc040(void)

{
  if (DAT_146aed798 == 0) {
    FUN_141786a30(&DAT_146aed798,&PTR_FUN_14652a8d0);
  }
  return DAT_146aed798;
}



// FUNCTION 1421dc070 FUN_1421dc070 body=47 status=ok
// SIG undefined FUN_1421dc070(void)

longlong FUN_1421dc070(void)

{
  if (DAT_146aed7a0 == 0) {
    FUN_141786a30(&DAT_146aed7a0,&PTR_FUN_14652a950);
  }
  return DAT_146aed7a0;
}



// FUNCTION 1421dc0a0 FUN_1421dc0a0 body=47 status=ok
// SIG undefined FUN_1421dc0a0(void)

longlong FUN_1421dc0a0(void)

{
  if (DAT_146aed7a8 == 0) {
    FUN_141786a30(&DAT_146aed7a8,&PTR_FUN_14652aa90);
  }
  return DAT_146aed7a8;
}



// FUNCTION 1421dc0d0 FUN_1421dc0d0 body=47 status=ok
// SIG undefined FUN_1421dc0d0(void)

longlong FUN_1421dc0d0(void)

{
  if (DAT_146aed7b0 == 0) {
    FUN_141786a30(&DAT_146aed7b0,&PTR_FUN_14652ac40);
  }
  return DAT_146aed7b0;
}



// FUNCTION 1421dc100 FUN_1421dc100 body=47 status=ok
// SIG undefined FUN_1421dc100(void)

longlong FUN_1421dc100(void)

{
  if (DAT_146aed7b8 == 0) {
    FUN_141786a30(&DAT_146aed7b8,&PTR_FUN_14652adf0);
  }
  return DAT_146aed7b8;
}



// FUNCTION 1421dc130 FUN_1421dc130 body=47 status=ok
// SIG undefined FUN_1421dc130(void)

longlong FUN_1421dc130(void)

{
  if (DAT_146aed7c0 == 0) {
    FUN_141786a30(&DAT_146aed7c0,&PTR_FUN_14652afb0);
  }
  return DAT_146aed7c0;
}



// FUNCTION 1421dc160 FUN_1421dc160 body=47 status=ok
// SIG undefined FUN_1421dc160(void)

longlong FUN_1421dc160(void)

{
  if (DAT_146aed7c8 == 0) {
    FUN_141786a30(&DAT_146aed7c8,&PTR_FUN_14652b0b0);
  }
  return DAT_146aed7c8;
}



// FUNCTION 1421dc190 FUN_1421dc190 body=47 status=ok
// SIG undefined FUN_1421dc190(void)

longlong FUN_1421dc190(void)

{
  if (DAT_146aed7d0 == 0) {
    FUN_141786a30(&DAT_146aed7d0,&PTR_FUN_14652b170);
  }
  return DAT_146aed7d0;
}



// FUNCTION 1421dc1c0 FUN_1421dc1c0 body=47 status=ok
// SIG undefined FUN_1421dc1c0(void)

longlong FUN_1421dc1c0(void)

{
  if (DAT_146aed7d8 == 0) {
    FUN_141786a30(&DAT_146aed7d8,&PTR_FUN_14652b230);
  }
  return DAT_146aed7d8;
}



// FUNCTION 1421dc1f0 FUN_1421dc1f0 body=47 status=ok
// SIG undefined FUN_1421dc1f0(void)

longlong FUN_1421dc1f0(void)

{
  if (DAT_146aed7e0 == 0) {
    FUN_141786a30(&DAT_146aed7e0,&PTR_FUN_14652b2f0);
  }
  return DAT_146aed7e0;
}



// FUNCTION 1421dc220 FUN_1421dc220 body=47 status=ok
// SIG undefined FUN_1421dc220(void)

longlong FUN_1421dc220(void)

{
  if (DAT_146aed7e8 == 0) {
    FUN_141786a30(&DAT_146aed7e8,&PTR_FUN_14652b3b0);
  }
  return DAT_146aed7e8;
}



// FUNCTION 1421dc250 FUN_1421dc250 body=47 status=ok
// SIG undefined FUN_1421dc250(void)

longlong FUN_1421dc250(void)

{
  if (DAT_146aed7f0 == 0) {
    FUN_141786a30(&DAT_146aed7f0,&PTR_FUN_14652b470);
  }
  return DAT_146aed7f0;
}



// FUNCTION 1421dc280 FUN_1421dc280 body=47 status=ok
// SIG undefined FUN_1421dc280(void)

longlong FUN_1421dc280(void)

{
  if (DAT_146aed7f8 == 0) {
    FUN_141786a30(&DAT_146aed7f8,&PTR_FUN_14652b630);
  }
  return DAT_146aed7f8;
}



// FUNCTION 1421dc2b0 FUN_1421dc2b0 body=47 status=ok
// SIG undefined FUN_1421dc2b0(void)

longlong FUN_1421dc2b0(void)

{
  if (DAT_146aed800 == 0) {
    FUN_141786a30(&DAT_146aed800,&PTR_FUN_14652b7f0);
  }
  return DAT_146aed800;
}



// FUNCTION 1421dc2e0 FUN_1421dc2e0 body=47 status=ok
// SIG undefined FUN_1421dc2e0(void)

longlong FUN_1421dc2e0(void)

{
  if (DAT_146aed808 == 0) {
    FUN_141786a30(&DAT_146aed808,&PTR_FUN_14652b930);
  }
  return DAT_146aed808;
}



// FUNCTION 1421dc310 FUN_1421dc310 body=47 status=ok
// SIG undefined FUN_1421dc310(void)

longlong FUN_1421dc310(void)

{
  if (DAT_146aed810 == 0) {
    FUN_141786a30(&DAT_146aed810,&PTR_FUN_14652ba60);
  }
  return DAT_146aed810;
}



// FUNCTION 1421dc340 FUN_1421dc340 body=47 status=ok
// SIG undefined FUN_1421dc340(void)

longlong FUN_1421dc340(void)

{
  if (DAT_146aed818 == 0) {
    FUN_141786a30(&DAT_146aed818,&PTR_FUN_14652bb50);
  }
  return DAT_146aed818;
}



// FUNCTION 1421dc370 FUN_1421dc370 body=47 status=ok
// SIG undefined FUN_1421dc370(void)

longlong FUN_1421dc370(void)

{
  if (DAT_146aed820 == 0) {
    FUN_141786a30(&DAT_146aed820,&PTR_FUN_14652bc40);
  }
  return DAT_146aed820;
}



// FUNCTION 1421dc3a0 FUN_1421dc3a0 body=47 status=ok
// SIG undefined FUN_1421dc3a0(void)

longlong FUN_1421dc3a0(void)

{
  if (DAT_146aed828 == 0) {
    FUN_141786a30(&DAT_146aed828,&PTR_FUN_14652bd70);
  }
  return DAT_146aed828;
}



// FUNCTION 1421dc3d0 InternalConstructor<UEditableGameplayTagQuery> body=73 status=ok
// SIG undefined InternalConstructor<UEditableGameplayTagQuery>(void)

void InternalConstructor<UEditableGameplayTagQuery>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144fec030;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    FGameplayTagQuery::FGameplayTagQuery(puVar1 + 10);
    return;
  }
  return;
}



// FUNCTION 1421dc420 FUN_1421dc420 body=59 status=ok
// SIG undefined FUN_1421dc420(void)

void FUN_1421dc420(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_144fec2d8;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
  }
  return;
}



// FUNCTION 1421dc500 ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_> body=100 status=ok
// SIG undefined ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>(void)

void UE4Tuple_Private::
     TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>::
     ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>
               (longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = (int)param_1[3];
  plVar1 = (longlong *)param_1[2];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[2];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1421dc570 `scalar_deleting_destructor' body=143 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UEditableGameplayTagQuery::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 1421dc600 FUN_1421dc600 body=84 status=ok
// SIG undefined FUN_1421dc600(void)

longlong FUN_1421dc600(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1421dc6d0 Copy body=87 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FGameplayTagCategoryRemap>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    do {
      FString::operator=(param_2,param_3 + param_2);
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                (param_2 + 0x10,param_3 + 0x10 + param_2);
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1421dc730 Copy body=537 status=ok
// SIG undefined Copy(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
UScriptStruct::TCppStructOps<FGameplayTagNode>::Copy
          (undefined8 param_1,longlong *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *plStack_60;
  longlong *local_58;
  longlong local_50;
  longlong *plStack_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  if (param_4 != 0) {
    plVar11 = (longlong *)(param_3 + 0x40);
    do {
      local_58 = param_2 + 10;
      *param_2 = plVar11[-8];
      FGameplayTagContainer::operator=(param_2 + 1,plVar11 + -7);
      plVar3 = param_2 + 5;
      if (plVar3 != plVar11 + -3) {
        iVar9 = (int)param_2[6];
        if (iVar9 != 0) {
          plVar10 = (longlong *)(*plVar3 + 8);
          do {
            plVar5 = (longlong *)*plVar10;
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
                iVar4 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5,1);
                }
              }
            }
            plVar10 = plVar10 + 2;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
        iVar9 = (int)plVar11[-2];
        puVar8 = (undefined8 *)plVar11[-3];
        *(int *)(param_2 + 6) = iVar9;
        if ((iVar9 == 0) && (*(int *)((longlong)param_2 + 0x34) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x34) = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar3,iVar9);
          puVar7 = (undefined8 *)*plVar3;
          for (; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar7 = *puVar8;
            lVar6 = puVar8[1];
            puVar7[1] = lVar6;
            if (lVar6 != 0) {
              LOCK();
              *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
              UNLOCK();
            }
            puVar7 = puVar7 + 2;
            puVar8 = puVar8 + 2;
          }
        }
      }
      plVar10 = (longlong *)*plVar11;
      plVar3 = param_2 + 7;
      lVar6 = plVar11[-1];
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
      }
      local_68 = lVar6;
      plStack_60 = plVar10;
      if (&local_68 != plVar3) {
        local_68 = *plVar3;
        plStack_60 = (longlong *)param_2[8];
        *plVar3 = lVar6;
        param_2[8] = (longlong)plVar10;
        local_50 = lVar6;
        plStack_48 = plVar10;
      }
      plVar3 = plStack_60;
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        plVar10 = plStack_60 + 1;
        lVar6 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_60)(plStack_60);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar9 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plStack_60 + 8))(plStack_60,1);
          }
        }
      }
      plVar3 = plVar11 + 1;
      plVar11 = plVar11 + 10;
      *(short *)(param_2 + 9) = (short)*plVar3;
      param_4 = param_4 + -1;
      param_2 = local_58;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1421dc950 Copy body=71 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FGameplayTagQuery>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FGameplayTagQuery::operator=(param_2 + param_3,param_3);
      param_3 = param_3 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1421dc9a0 FUN_1421dc9a0 body=169 status=ok
// SIG undefined FUN_1421dc9a0(void)

undefined8 FUN_1421dc9a0(undefined8 param_1,longlong *param_2,longlong *param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_3 != param_2) {
      if (((int)param_3[1] == 0) || ((longlong *)*param_3 == (longlong *)0x0)) {
        if (((int)param_2[1] != 0) && (plVar1 = (longlong *)*param_2, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x28))(plVar1,0);
          if (*param_2 != 0) {
            lVar2 = FMemory::Realloc(*param_2,0,0);
            *param_2 = lVar2;
          }
          *(undefined4 *)(param_2 + 1) = 0;
        }
      }
      else {
        (**(code **)(*(longlong *)*param_3 + 0x30))();
      }
    }
    param_3 = param_3 + 2;
    param_2 = param_2 + 2;
  }
  return 1;
}



// FUNCTION 1421dca50 Copy body=71 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FGameplayTagTableRow>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FGameplayTagTableRow::operator=(param_2 + param_3,param_3);
      param_3 = param_3 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1421dcaa0 Copy body=71 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FRestrictedGameplayTagTableRow>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FRestrictedGameplayTagTableRow::operator=(param_2 + param_3,param_3);
      param_3 = param_3 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1421dcb00 Destruct body=138 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FGameplayTagNode>::Destruct(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_2 + 0x40);
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
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_2 + 0x28);
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 8) == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 1421dcba0 EGameplayContainerMatchType_StaticEnum body=85 status=ok
// SIG undefined EGameplayContainerMatchType_StaticEnum(void)

void EGameplayContainerMatchType_StaticEnum(void)

{
  if (DAT_146aed730 == 0) {
    if (DAT_146aed988 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aed988,&PTR_s__Script_GameplayTags_144fecc70);
    }
    DAT_146aed730 = GetStaticEnum(FUN_1421dd710,DAT_146aed988,L"EGameplayContainerMatchType");
  }
  return;
}



// FUNCTION 1421dcc00 EGameplayTagMatchType_StaticEnum body=85 status=ok
// SIG undefined EGameplayTagMatchType_StaticEnum(void)

void EGameplayTagMatchType_StaticEnum(void)

{
  if (DAT_146aed738 == 0) {
    if (DAT_146aed988 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aed988,&PTR_s__Script_GameplayTags_144fecc70);
    }
    DAT_146aed738 = GetStaticEnum(FUN_1421dd740,DAT_146aed988,L"EGameplayTagMatchType");
  }
  return;
}



// FUNCTION 1421dcc60 EGameplayTagQueryExprType_StaticEnum body=85 status=ok
// SIG undefined EGameplayTagQueryExprType_StaticEnum(void)

void EGameplayTagQueryExprType_StaticEnum(void)

{
  if (DAT_146aed728 == 0) {
    if (DAT_146aed988 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aed988,&PTR_s__Script_GameplayTags_144fecc70);
    }
    DAT_146aed728 = GetStaticEnum(FUN_1421dd770,DAT_146aed988,L"EGameplayTagQueryExprType");
  }
  return;
}



// FUNCTION 1421dccc0 EGameplayTagSourceType_StaticEnum body=85 status=ok
// SIG undefined EGameplayTagSourceType_StaticEnum(void)

void EGameplayTagSourceType_StaticEnum(void)

{
  if (DAT_146aed740 == 0) {
    if (DAT_146aed988 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aed988,&PTR_s__Script_GameplayTags_144fecc70);
    }
    DAT_146aed740 = GetStaticEnum(FUN_1421dd7a0,DAT_146aed988,L"EGameplayTagSourceType");
  }
  return;
}



// FUNCTION 1421dcd20 Get_Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_CRC(void)

{
  return 0xbbac6680;
}



// FUNCTION 1421dcd30 Get_Z_Construct_UScriptStruct_FGameplayTagContainer_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FGameplayTagContainer_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FGameplayTagContainer_CRC(void)

{
  return 0x119942c6;
}



// FUNCTION 1421dcd40 Get_Z_Construct_UScriptStruct_FGameplayTagCreationWidgetHelper_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FGameplayTagCreationWidgetHelper_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FGameplayTagCreationWidgetHelper_CRC(void)

{
  return 0xd2521e7b;
}



// FUNCTION 1421dcd50 Get_Z_Construct_UScriptStruct_FGameplayTagNode_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FGameplayTagNode_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FGameplayTagNode_CRC(void)

{
  return 0x1205bd52;
}



// FUNCTION 1421dcd60 Get_Z_Construct_UScriptStruct_FGameplayTagQuery_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FGameplayTagQuery_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FGameplayTagQuery_CRC(void)

{
  return 0xa52a78cb;
}



// FUNCTION 1421dcd70 Get_Z_Construct_UScriptStruct_FGameplayTagRedirect_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FGameplayTagRedirect_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FGameplayTagRedirect_CRC(void)

{
  return 0x99ac8089;
}



// FUNCTION 1421dcd80 Get_Z_Construct_UScriptStruct_FGameplayTagReferenceHelper_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FGameplayTagReferenceHelper_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FGameplayTagReferenceHelper_CRC(void)

{
  return 0x668786a5;
}



// FUNCTION 1421dcd90 Get_Z_Construct_UScriptStruct_FGameplayTagSource_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FGameplayTagSource_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FGameplayTagSource_CRC(void)

{
  return 0x1f681a57;
}



// FUNCTION 1421dcda0 Get_Z_Construct_UScriptStruct_FGameplayTagTableRow_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FGameplayTagTableRow_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FGameplayTagTableRow_CRC(void)

{
  return 0xe4b639cf;
}



// FUNCTION 1421dcdb0 Get_Z_Construct_UScriptStruct_FGameplayTag_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FGameplayTag_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FGameplayTag_CRC(void)

{
  return 0x74d8e3cc;
}



// FUNCTION 1421dcdc0 Get_Z_Construct_UScriptStruct_FRestrictedConfigInfo_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FRestrictedConfigInfo_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FRestrictedConfigInfo_CRC(void)

{
  return 0x31ef6cd5;
}



// FUNCTION 1421dcdd0 Get_Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_CRC(void)

{
  return 0x50e171d7;
}



// FUNCTION 1421dcde0 Identical body=29 status=ok
// SIG undefined Identical(void)

undefined1
UScriptStruct::TCppStructOps<FGameplayTagContainer>::Identical
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FGameplayTagContainer::operator==(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 1421dcea0 StaticRegisterNativesUBlueprintGameplayTagLibrary body=34 status=ok
// SIG undefined StaticRegisterNativesUBlueprintGameplayTagLibrary(void)

void UBlueprintGameplayTagLibrary::StaticRegisterNativesUBlueprintGameplayTagLibrary(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AddGameplayTag_144fec550,0x1d);
  return;
}



// FUNCTION 1421dced0 StaticRegisterNativesUGameplayTagAssetInterface body=34 status=ok
// SIG undefined StaticRegisterNativesUGameplayTagAssetInterface(void)

void UGameplayTagAssetInterface::StaticRegisterNativesUGameplayTagAssetInterface(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetOwnedGameplayTags_144fec720,4);
  return;
}



// FUNCTION 1421dcf00 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FGameplayTag::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aed8f8 == 0) {
    if (DAT_146aed988 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aed988,&PTR_s__Script_GameplayTags_144fecc70);
    }
    lVar1 = DAT_146aed988;
    uVar2 = Get_Z_Construct_UScriptStruct_FGameplayTag_CRC();
    DAT_146aed8f8 = GetStaticStruct(FUN_1421dd7d0,lVar1,L"GameplayTag",8,uVar2);
  }
  return;
}



// FUNCTION 1421dcf80 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FGameplayTagCategoryRemap::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aed9f8 == 0) {
    if (DAT_146aed988 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aed988,&PTR_s__Script_GameplayTags_144fecc70);
    }
    lVar1 = DAT_146aed988;
    uVar2 = Get_Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_CRC();
    DAT_146aed9f8 = GetStaticStruct(FUN_1421dd800,lVar1,L"GameplayTagCategoryRemap",0x20,uVar2);
  }
  return;
}



// FUNCTION 1421dd000 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FGameplayTagContainer::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aed8e8 == 0) {
    if (DAT_146aed988 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aed988,&PTR_s__Script_GameplayTags_144fecc70);
    }
    lVar1 = DAT_146aed988;
    uVar2 = Get_Z_Construct_UScriptStruct_FGameplayTagContainer_CRC();
    DAT_146aed8e8 = GetStaticStruct(FUN_1421dd830,lVar1,L"GameplayTagContainer",0x20,uVar2);
  }
  return;
}



// FUNCTION 1421dd080 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FGameplayTagCreationWidgetHelper::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aed8c8 == 0) {
    if (DAT_146aed988 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aed988,&PTR_s__Script_GameplayTags_144fecc70);
    }
    lVar1 = DAT_146aed988;
    uVar2 = Get_Z_Construct_UScriptStruct_FGameplayTagCreationWidgetHelper_CRC();
    DAT_146aed8c8 = GetStaticStruct(FUN_1421dd860,lVar1,L"GameplayTagCreationWidgetHelper",1,uVar2);
  }
  return;
}



// FUNCTION 1421dd100 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FGameplayTagNode::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aed998 == 0) {
    if (DAT_146aed988 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aed988,&PTR_s__Script_GameplayTags_144fecc70);
    }
    lVar1 = DAT_146aed988;
    uVar2 = Get_Z_Construct_UScriptStruct_FGameplayTagNode_CRC();
    DAT_146aed998 = GetStaticStruct(FUN_1421dd890,lVar1,L"GameplayTagNode",0x50,uVar2);
  }
  return;
}



// FUNCTION 1421dd180 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FGameplayTagQuery::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aed8b8 == 0) {
    if (DAT_146aed988 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aed988,&PTR_s__Script_GameplayTags_144fecc70);
    }
    lVar1 = DAT_146aed988;
    uVar2 = Get_Z_Construct_UScriptStruct_FGameplayTagQuery_CRC();
    DAT_146aed8b8 = GetStaticStruct(FUN_1421dd8c0,lVar1,L"GameplayTagQuery",0x48,uVar2);
  }
  return;
}



// FUNCTION 1421dd200 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FGameplayTagRedirect::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aeda08 == 0) {
    if (DAT_146aed988 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aed988,&PTR_s__Script_GameplayTags_144fecc70);
    }
    lVar1 = DAT_146aed988;
    uVar2 = Get_Z_Construct_UScriptStruct_FGameplayTagRedirect_CRC();
    DAT_146aeda08 = GetStaticStruct(FUN_1421dd8f0,lVar1,L"GameplayTagRedirect",0x10,uVar2);
  }
  return;
}



// FUNCTION 1421dd280 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FGameplayTagReferenceHelper::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aed8d8 == 0) {
    if (DAT_146aed988 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aed988,&PTR_s__Script_GameplayTags_144fecc70);
    }
    lVar1 = DAT_146aed988;
    uVar2 = Get_Z_Construct_UScriptStruct_FGameplayTagReferenceHelper_CRC();
    DAT_146aed8d8 = GetStaticStruct(FUN_1421dd920,lVar1,L"GameplayTagReferenceHelper",0x10,uVar2);
  }
  return;
}



// FUNCTION 1421dd300 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FGameplayTagSource::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aed9a8 == 0) {
    if (DAT_146aed988 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aed988,&PTR_s__Script_GameplayTags_144fecc70);
    }
    lVar1 = DAT_146aed988;
    uVar2 = Get_Z_Construct_UScriptStruct_FGameplayTagSource_CRC();
    DAT_146aed9a8 = GetStaticStruct(FUN_1421dd950,lVar1,L"GameplayTagSource",0x20,uVar2);
  }
  return;
}



// FUNCTION 1421dd380 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FGameplayTagTableRow::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aed9c8 == 0) {
    if (DAT_146aed988 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aed988,&PTR_s__Script_GameplayTags_144fecc70);
    }
    lVar1 = DAT_146aed988;
    uVar2 = Get_Z_Construct_UScriptStruct_FGameplayTagTableRow_CRC();
    DAT_146aed9c8 = GetStaticStruct(FUN_1421db0e0,lVar1,L"GameplayTagTableRow",0x20,uVar2);
  }
  return;
}



// FUNCTION 1421dd400 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FRestrictedConfigInfo::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aed9e8 == 0) {
    if (DAT_146aed988 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aed988,&PTR_s__Script_GameplayTags_144fecc70);
    }
    lVar1 = DAT_146aed988;
    uVar2 = Get_Z_Construct_UScriptStruct_FRestrictedConfigInfo_CRC();
    DAT_146aed9e8 = GetStaticStruct(FUN_1421dd980,lVar1,L"RestrictedConfigInfo",0x20,uVar2);
  }
  return;
}



// FUNCTION 1421dd480 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FRestrictedGameplayTagTableRow::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aed9b8 == 0) {
    if (DAT_146aed988 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aed988,&PTR_s__Script_GameplayTags_144fecc70);
    }
    lVar1 = DAT_146aed988;
    uVar2 = Get_Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_CRC();
    DAT_146aed9b8 = GetStaticStruct(FUN_1421dd9b0,lVar1,L"RestrictedGameplayTagTableRow",0x28,uVar2)
    ;
  }
  return;
}



// FUNCTION 1421dd500 FUN_1421dd500 body=47 status=ok
// SIG undefined FUN_1421dd500(void)

longlong FUN_1421dd500(void)

{
  if (DAT_146aed908 == 0) {
    FUN_141786440(&DAT_146aed908,&PTR_StaticClass_144fe9710);
  }
  return DAT_146aed908;
}



// FUNCTION 1421dd530 FUN_1421dd530 body=47 status=ok
// SIG undefined FUN_1421dd530(void)

longlong FUN_1421dd530(void)

{
  if (DAT_146aed968 == 0) {
    FUN_141786440(&DAT_146aed968,&PTR_StaticClass_144fea510);
  }
  return DAT_146aed968;
}



// FUNCTION 1421dd560 FUN_1421dd560 body=47 status=ok
// SIG undefined FUN_1421dd560(void)

longlong FUN_1421dd560(void)

{
  if (DAT_146aed938 == 0) {
    FUN_141786440(&DAT_146aed938,&PTR_StaticClass_144fe9db0);
  }
  return DAT_146aed938;
}



// FUNCTION 1421dd590 FUN_1421dd590 body=47 status=ok
// SIG undefined FUN_1421dd590(void)

longlong FUN_1421dd590(void)

{
  if (DAT_146aed958 == 0) {
    FUN_141786440(&DAT_146aed958,&PTR_StaticClass_144fea2b0);
  }
  return DAT_146aed958;
}



// FUNCTION 1421dd5c0 FUN_1421dd5c0 body=47 status=ok
// SIG undefined FUN_1421dd5c0(void)

longlong FUN_1421dd5c0(void)

{
  if (DAT_146aed928 == 0) {
    FUN_141786440(&DAT_146aed928,&PTR_StaticClass_144fe9ae0);
  }
  return DAT_146aed928;
}



// FUNCTION 1421dd5f0 FUN_1421dd5f0 body=47 status=ok
// SIG undefined FUN_1421dd5f0(void)

longlong FUN_1421dd5f0(void)

{
  if (DAT_146aed978 == 0) {
    FUN_141786440(&DAT_146aed978,&PTR_StaticClass_144fea7a0);
  }
  return DAT_146aed978;
}



// FUNCTION 1421dd620 FUN_1421dd620 body=47 status=ok
// SIG undefined FUN_1421dd620(void)

longlong FUN_1421dd620(void)

{
  if (DAT_146aed948 == 0) {
    FUN_141786440(&DAT_146aed948,&PTR_StaticClass_144fea0f0);
  }
  return DAT_146aed948;
}



// FUNCTION 1421dd650 FUN_1421dd650 body=47 status=ok
// SIG undefined FUN_1421dd650(void)

longlong FUN_1421dd650(void)

{
  if (DAT_146aeda48 == 0) {
    FUN_141786440(&DAT_146aeda48,&PTR_StaticClass_144feb160);
  }
  return DAT_146aeda48;
}



// FUNCTION 1421dd680 FUN_1421dd680 body=47 status=ok
// SIG undefined FUN_1421dd680(void)

longlong FUN_1421dd680(void)

{
  if (DAT_146aed9d8 == 0) {
    FUN_141786440(&DAT_146aed9d8,&PTR_GetPrivateStaticClass_144fe9c90);
  }
  return DAT_146aed9d8;
}



// FUNCTION 1421dd6b0 FUN_1421dd6b0 body=47 status=ok
// SIG undefined FUN_1421dd6b0(void)

longlong FUN_1421dd6b0(void)

{
  if (DAT_146aeda38 == 0) {
    FUN_141786440(&DAT_146aeda38,&PTR_GetPrivateStaticClass_144feaec0);
  }
  return DAT_146aeda38;
}



// FUNCTION 1421dd6e0 FUN_1421dd6e0 body=47 status=ok
// SIG undefined FUN_1421dd6e0(void)

longlong FUN_1421dd6e0(void)

{
  if (DAT_146aeda28 == 0) {
    FUN_141786440(&DAT_146aeda28,&PTR_GetPrivateStaticClass_144feac90);
  }
  return DAT_146aeda28;
}



// FUNCTION 1421dd710 FUN_1421dd710 body=47 status=ok
// SIG undefined FUN_1421dd710(void)

longlong FUN_1421dd710(void)

{
  if (DAT_146aed8a8 == 0) {
    FUN_1417866a0(&DAT_146aed8a8,&PTR_FUN_14652d390);
  }
  return DAT_146aed8a8;
}



// FUNCTION 1421dd740 FUN_1421dd740 body=47 status=ok
// SIG undefined FUN_1421dd740(void)

longlong FUN_1421dd740(void)

{
  if (DAT_146aed8b0 == 0) {
    FUN_1417866a0(&DAT_146aed8b0,&PTR_FUN_14652d3e0);
  }
  return DAT_146aed8b0;
}



// FUNCTION 1421dd770 FUN_1421dd770 body=47 status=ok
// SIG undefined FUN_1421dd770(void)

longlong FUN_1421dd770(void)

{
  if (DAT_146aed8a0 == 0) {
    FUN_1417866a0(&DAT_146aed8a0,&PTR_FUN_14652d340);
  }
  return DAT_146aed8a0;
}



// FUNCTION 1421dd7a0 FUN_1421dd7a0 body=47 status=ok
// SIG undefined FUN_1421dd7a0(void)

longlong FUN_1421dd7a0(void)

{
  if (DAT_146aed990 == 0) {
    FUN_1417866a0(&DAT_146aed990,&PTR_FUN_14652d430);
  }
  return DAT_146aed990;
}



// FUNCTION 1421dd7d0 FUN_1421dd7d0 body=47 status=ok
// SIG undefined FUN_1421dd7d0(void)

longlong FUN_1421dd7d0(void)

{
  if (DAT_146aed900 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aed900,&PTR_FUN_14652c3f0);
  }
  return DAT_146aed900;
}



// FUNCTION 1421dd800 FUN_1421dd800 body=47 status=ok
// SIG undefined FUN_1421dd800(void)

longlong FUN_1421dd800(void)

{
  if (DAT_146aeda00 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aeda00,&PTR_FUN_14652cc70);
  }
  return DAT_146aeda00;
}



// FUNCTION 1421dd830 FUN_1421dd830 body=47 status=ok
// SIG undefined FUN_1421dd830(void)

longlong FUN_1421dd830(void)

{
  if (DAT_146aed8f0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aed8f0,&PTR_FUN_14652c380);
  }
  return DAT_146aed8f0;
}



// FUNCTION 1421dd860 FUN_1421dd860 body=47 status=ok
// SIG undefined FUN_1421dd860(void)

longlong FUN_1421dd860(void)

{
  if (DAT_146aed8d0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aed8d0,&PTR_FUN_14652c210);
  }
  return DAT_146aed8d0;
}



// FUNCTION 1421dd890 FUN_1421dd890 body=47 status=ok
// SIG undefined FUN_1421dd890(void)

longlong FUN_1421dd890(void)

{
  if (DAT_146aed9a0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aed9a0,&PTR_FUN_14652c670);
  }
  return DAT_146aed9a0;
}



// FUNCTION 1421dd8c0 FUN_1421dd8c0 body=47 status=ok
// SIG undefined FUN_1421dd8c0(void)

longlong FUN_1421dd8c0(void)

{
  if (DAT_146aed8c0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aed8c0,&PTR_FUN_14652c190);
  }
  return DAT_146aed8c0;
}



// FUNCTION 1421dd8f0 FUN_1421dd8f0 body=47 status=ok
// SIG undefined FUN_1421dd8f0(void)

longlong FUN_1421dd8f0(void)

{
  if (DAT_146aeda10 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aeda10,&PTR_FUN_14652cd60);
  }
  return DAT_146aeda10;
}



// FUNCTION 1421dd920 FUN_1421dd920 body=47 status=ok
// SIG undefined FUN_1421dd920(void)

longlong FUN_1421dd920(void)

{
  if (DAT_146aed8e0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aed8e0,&PTR_FUN_14652c280);
  }
  return DAT_146aed8e0;
}



// FUNCTION 1421dd950 FUN_1421dd950 body=47 status=ok
// SIG undefined FUN_1421dd950(void)

longlong FUN_1421dd950(void)

{
  if (DAT_146aed9b0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aed9b0,&PTR_FUN_14652c7f0);
  }
  return DAT_146aed9b0;
}



// FUNCTION 1421dd980 FUN_1421dd980 body=47 status=ok
// SIG undefined FUN_1421dd980(void)

longlong FUN_1421dd980(void)

{
  if (DAT_146aed9f0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aed9f0,&PTR_FUN_14652cb80);
  }
  return DAT_146aed9f0;
}



// FUNCTION 1421dd9b0 FUN_1421dd9b0 body=47 status=ok
// SIG undefined FUN_1421dd9b0(void)

longlong FUN_1421dd9b0(void)

{
  if (DAT_146aed9c0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aed9c0,&PTR_FUN_14652c8f0);
  }
  return DAT_146aed9c0;
}



// FUNCTION 1421dd9e0 execAddGameplayTag body=244 status=ok
// SIG undefined execAddGameplayTag(void)

void UBlueprintGameplayTagLibrary::execAddGameplayTag(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 local_res10;
  longlong local_28 [4];
  
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_res10 = 0;
  plVar1 = local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  AddGameplayTag(plVar1,local_res10);
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1421ddae0 execAppendGameplayTagContainers body=303 status=ok
// SIG undefined execAppendGameplayTagContainers(void)

void UBlueprintGameplayTagLibrary::execAppendGameplayTagContainers
               (undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong local_48 [8];
  
  local_48[4] = 0;
  local_48[5] = 0;
  local_48[6] = 0;
  local_48[7] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48 + 4);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 4);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  plVar2 = local_48 + 4;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_48[2] = 0;
  local_48[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar1 = local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  AppendGameplayTagContainers(plVar2,plVar1);
  if (local_48[2] != 0) {
    FMemory::Free();
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (local_48[6] != 0) {
    FMemory::Free();
  }
  if (local_48[4] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1421ddc10 execBreakGameplayTagContainer body=279 status=ok
// SIG undefined execBreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::execBreakGameplayTagContainer
               (undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong local_38 [6];
  
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[4] = 0;
  local_38[5] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  plVar2 = local_38 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  BreakGameplayTagContainer(plVar2,plVar1);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_38[4] != 0) {
    FMemory::Free();
  }
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1421ddd30 execDoesContainerMatchTagQuery body=348 status=ok
// SIG undefined execDoesContainerMatchTagQuery(void)

void UBlueprintGameplayTagLibrary::execDoesContainerMatchTagQuery
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  longlong local_78 [4];
  undefined1 local_58 [8];
  longlong local_50;
  longlong local_40;
  longlong local_30;
  longlong local_20;
  
  local_78[0] = 0;
  local_78[1] = 0;
  local_78[2] = 0;
  local_78[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  plVar3 = local_78;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  FGameplayTagQuery::FGameplayTagQuery(local_58);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar2 = local_58;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = DoesContainerMatchTagQuery(plVar3,puVar2);
  *param_3 = uVar1;
  if (local_20 != 0) {
    FMemory::Free();
  }
  if (local_30 != 0) {
    FMemory::Free();
  }
  if (local_40 != 0) {
    FMemory::Free();
  }
  if (local_50 != 0) {
    FMemory::Free();
  }
  if (local_78[2] != 0) {
    FMemory::Free();
  }
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1421dde90 execDoesTagAssetInterfaceHaveTag body=221 status=ok
// SIG undefined execDoesTagAssetInterfaceHaveTag(void)

void UBlueprintGameplayTagLibrary::execDoesTagAssetInterfaceHaveTag
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 local_res10;
  longlong local_28;
  undefined8 uStack_20;
  longlong local_18;
  undefined8 local_10;
  
  local_28 = 0;
  uStack_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
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
  local_18 = local_28;
  local_10 = 0;
  if (local_28 != 0) {
    local_10 = uStack_20;
  }
  uVar1 = DoesTagAssetInterfaceHaveTag(&local_18,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1421ddf70 execEqualEqual_GameplayTag body=190 status=ok
// SIG undefined execEqualEqual_GameplayTag(void)

void UBlueprintGameplayTagLibrary::execEqualEqual_GameplayTag
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  
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
  uVar1 = EqualEqual_GameplayTag(local_res18,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1421de030 execEqualEqual_GameplayTagContainer body=323 status=ok
// SIG undefined execEqualEqual_GameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::execEqualEqual_GameplayTagContainer
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong local_48 [8];
  
  local_48[4] = 0;
  local_48[5] = 0;
  local_48[6] = 0;
  local_48[7] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48 + 4);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 4);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  plVar3 = local_48 + 4;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_48[2] = 0;
  local_48[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar2 = local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = EqualEqual_GameplayTagContainer(plVar3,plVar2);
  *param_3 = uVar1;
  if (local_48[2] != 0) {
    FMemory::Free();
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (local_48[6] != 0) {
    FMemory::Free();
  }
  if (local_48[4] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1421de180 execGetAllActorsOfClassMatchingTagQuery body=454 status=ok
// SIG undefined execGetAllActorsOfClassMatchingTagQuery(void)

void UBlueprintGameplayTagLibrary::execGetAllActorsOfClassMatchingTagQuery
               (undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  longlong *plVar2;
  undefined8 local_res10;
  undefined8 local_res20;
  longlong local_68 [2];
  undefined1 local_58 [8];
  longlong local_50;
  longlong local_40;
  longlong local_30;
  longlong local_20;
  
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
  FGameplayTagQuery::FGameplayTagQuery(local_58);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  puVar1 = local_58;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  plVar2 = local_68;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1421d6280(local_res20,local_res10,puVar1,plVar2);
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  if (local_20 != 0) {
    FMemory::Free();
  }
  if (local_30 != 0) {
    FMemory::Free();
  }
  if (local_40 != 0) {
    FMemory::Free();
  }
  if (local_50 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1421de350 execGetDebugStringFromGameplayTag body=193 status=ok
// SIG undefined execGetDebugStringFromGameplayTag(void)

void UBlueprintGameplayTagLibrary::execGetDebugStringFromGameplayTag
               (undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 local_res10;
  longlong local_18 [2];
  
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
  plVar1 = (longlong *)GetDebugStringFromGameplayTag(local_18,local_res10);
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



// FUNCTION 1421de420 execGetDebugStringFromGameplayTagContainer body=249 status=ok
// SIG undefined execGetDebugStringFromGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::execGetDebugStringFromGameplayTagContainer
               (undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong local_38 [2];
  longlong local_28 [4];
  
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  plVar1 = local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  plVar1 = (longlong *)GetDebugStringFromGameplayTagContainer(local_38,plVar1);
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
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1421de520 execGetNumGameplayTagsInContainer body=182 status=ok
// SIG undefined execGetNumGameplayTagsInContainer(void)

void UBlueprintGameplayTagLibrary::execGetNumGameplayTagsInContainer
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong local_28 [4];
  
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  plVar2 = local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = IStreamingManager::GetNumWantingResources(plVar2);
  *param_3 = uVar1;
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1421de5e0 execGetOwnedGameplayTags body=184 status=ok
// SIG undefined execGetOwnedGameplayTags(void)

void IGameplayTagAssetInterface::execGetOwnedGameplayTags(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong local_28 [4];
  
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  plVar1 = local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x10))(param_1,plVar1);
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1421de6a0 execGetTagName body=151 status=ok
// SIG undefined execGetTagName(void)

void UBlueprintGameplayTagLibrary::execGetTagName
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_res10;
  undefined1 local_res18 [8];
  
  local_res10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  puVar1 = &local_res10;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FCachedTypefaceData::FCachedFontData::BinarySearchKey(local_res18,puVar1);
  *param_3 = *puVar1;
  return;
}



// FUNCTION 1421de740 execHasAllMatchingGameplayTags body=201 status=ok
// SIG undefined execHasAllMatchingGameplayTags(void)

void IGameplayTagAssetInterface::execHasAllMatchingGameplayTags
               (longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong local_28 [4];
  
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  plVar2 = local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x20))(param_1,plVar2);
  *param_3 = uVar1;
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1421de810 execHasAllMatchingGameplayTags body=281 status=ok
// SIG undefined execHasAllMatchingGameplayTags(void)

void UBlueprintGameplayTagLibrary::execHasAllMatchingGameplayTags
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 local_30;
  longlong local_28 [4];
  
  local_48 = 0;
  uStack_40 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  plVar2 = local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_38 = local_48;
  local_30 = 0;
  if (local_48 != 0) {
    local_30 = uStack_40;
  }
  uVar1 = HasAllMatchingGameplayTags(&local_38,plVar2);
  *param_3 = uVar1;
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1421de930 execHasAllTags body=382 status=ok
// SIG undefined execHasAllTags(void)

void UBlueprintGameplayTagLibrary::execHasAllTags
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  int local_res10 [2];
  longlong local_58 [8];
  
  local_58[4] = 0;
  local_58[5] = 0;
  local_58[6] = 0;
  local_58[7] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_58 + 4);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 4);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  plVar3 = local_58 + 4;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_58[2] = 0;
  local_58[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  local_res10[0] = 0;
  plVar2 = local_58;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
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
  uVar1 = HasAllTags(plVar3,plVar2,local_res10[0] != 0);
  *param_3 = uVar1;
  if (local_58[2] != 0) {
    FMemory::Free();
  }
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  if (local_58[6] != 0) {
    FMemory::Free();
  }
  if (local_58[4] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1421deab0 execHasAnyMatchingGameplayTags body=201 status=ok
// SIG undefined execHasAnyMatchingGameplayTags(void)

void IGameplayTagAssetInterface::execHasAnyMatchingGameplayTags
               (longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong local_28 [4];
  
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  plVar2 = local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x28))(param_1,plVar2);
  *param_3 = uVar1;
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1421deb80 execHasAnyTags body=382 status=ok
// SIG undefined execHasAnyTags(void)

void UBlueprintGameplayTagLibrary::execHasAnyTags
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  int local_res10 [2];
  longlong local_58 [8];
  
  local_58[4] = 0;
  local_58[5] = 0;
  local_58[6] = 0;
  local_58[7] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_58 + 4);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 4);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  plVar3 = local_58 + 4;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_58[2] = 0;
  local_58[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  local_res10[0] = 0;
  plVar2 = local_58;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
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
  uVar1 = HasAnyTags(plVar3,plVar2,local_res10[0] != 0);
  *param_3 = uVar1;
  if (local_58[2] != 0) {
    FMemory::Free();
  }
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  if (local_58[6] != 0) {
    FMemory::Free();
  }
  if (local_58[4] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1421ded00 execHasMatchingGameplayTag body=147 status=ok
// SIG undefined execHasMatchingGameplayTag(void)

void IGameplayTagAssetInterface::execHasMatchingGameplayTag
               (longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = (**(code **)(*param_1 + 0x18))(param_1,local_res8);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1421deda0 execHasTag body=315 status=ok
// SIG undefined execHasTag(void)

void UBlueprintGameplayTagLibrary::execHasTag
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  int local_res10 [2];
  undefined8 local_res18 [2];
  longlong local_38 [4];
  
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_res18[0] = 0;
  plVar2 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
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
  uVar1 = HasTag(plVar2,local_res18[0],local_res10[0] != 0);
  *param_3 = uVar1;
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1421deee0 execIsGameplayTagValid body=127 status=ok
// SIG undefined execIsGameplayTagValid(void)

void UBlueprintGameplayTagLibrary::execIsGameplayTagValid
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = IsGameplayTagValid(local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1421def60 execMakeGameplayTagContainerFromArray body=206 status=ok
// SIG undefined execMakeGameplayTagContainerFromArray(void)

void UBlueprintGameplayTagLibrary::execMakeGameplayTagContainerFromArray
               (undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong local_38 [4];
  longlong local_18;
  
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar2 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = MakeGameplayTagContainerFromArray(local_38 + 2,plVar2);
  FUN_1421d27f0(param_3,uVar1);
  if (local_18 != 0) {
    FMemory::Free();
  }
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1421df030 execMakeGameplayTagContainerFromTag body=171 status=ok
// SIG undefined execMakeGameplayTagContainerFromTag(void)

void UBlueprintGameplayTagLibrary::execMakeGameplayTagContainerFromTag
               (undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_res10;
  longlong local_28 [2];
  longlong local_18;
  
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
  uVar1 = MakeGameplayTagContainerFromTag(local_28,local_res10);
  FUN_1421d27f0(param_3,uVar1);
  if (local_18 != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1421df0e0 execMakeGameplayTagQuery body=290 status=ok
// SIG undefined execMakeGameplayTagQuery(void)

void UBlueprintGameplayTagLibrary::execMakeGameplayTagQuery
               (undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_e8 [8];
  longlong local_e0;
  longlong local_d0;
  longlong local_c0;
  longlong local_b0;
  undefined1 local_98 [8];
  longlong local_90;
  longlong local_80;
  longlong local_70;
  longlong local_60;
  undefined1 local_50 [72];
  
  FGameplayTagQuery::FGameplayTagQuery(local_e8);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_e8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_e8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FGameplayTagQuery::FGameplayTagQuery(local_50,local_e8);
  uVar1 = MakeGameplayTagQuery(local_98,uVar1);
  FGameplayTagQuery::operator=(param_3,uVar1);
  if (local_60 != 0) {
    FMemory::Free();
  }
  if (local_70 != 0) {
    FMemory::Free();
  }
  if (local_80 != 0) {
    FMemory::Free();
  }
  if (local_90 != 0) {
    FMemory::Free();
  }
  if (local_b0 != 0) {
    FMemory::Free();
  }
  if (local_c0 != 0) {
    FMemory::Free();
  }
  if (local_d0 != 0) {
    FMemory::Free();
  }
  if (local_e0 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1421df210 execMakeLiteralGameplayTag body=136 status=ok
// SIG undefined execMakeLiteralGameplayTag(void)

void UBlueprintGameplayTagLibrary::execMakeLiteralGameplayTag
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_res10;
  undefined1 local_res18 [8];
  
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
  puVar1 = (undefined8 *)
           SharedPointerInternals::FSharedReferencer<0>::FSharedReferencer<0>
                     (local_res18,local_res10);
  *param_3 = *puVar1;
  return;
}



// FUNCTION 1421df2a0 execMakeLiteralGameplayTagContainer body=257 status=ok
// SIG undefined execMakeLiteralGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::execMakeLiteralGameplayTagContainer
               (undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong local_68 [10];
  longlong local_18;
  
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  local_68[4] = 0;
  local_68[5] = 0;
  local_68[6] = 0;
  local_68[7] = 0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FGameplayTagContainer::operator=(local_68 + 4,local_68);
  uVar1 = MakeLiteralGameplayTagContainer(local_68 + 8,local_68 + 4);
  FUN_1421d27f0(param_3,uVar1);
  if (local_18 != 0) {
    FMemory::Free();
  }
  if (local_68[8] != 0) {
    FMemory::Free();
  }
  if (local_68[2] != 0) {
    FMemory::Free();
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1421df3b0 execMatchesAnyTags body=315 status=ok
// SIG undefined execMatchesAnyTags(void)

void UBlueprintGameplayTagLibrary::execMatchesAnyTags
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  int local_res10 [2];
  undefined8 local_res18 [2];
  longlong local_38 [4];
  
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_res10[0] = 0;
  plVar2 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
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
  uVar1 = MatchesAnyTags(local_res18[0],plVar2,local_res10[0] != 0);
  *param_3 = uVar1;
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1421df4f0 execMatchesTag body=240 status=ok
// SIG undefined execMatchesTag(void)

void UBlueprintGameplayTagLibrary::execMatchesTag
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  int local_res10 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = MatchesTag(local_res20,local_res18,local_res10[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1421df5e0 execNotEqual_GameplayTag body=190 status=ok
// SIG undefined execNotEqual_GameplayTag(void)

void UBlueprintGameplayTagLibrary::execNotEqual_GameplayTag
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  
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
  uVar1 = NotEqual_GameplayTag(local_res18,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1421df6a0 execNotEqual_GameplayTagContainer body=323 status=ok
// SIG undefined execNotEqual_GameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::execNotEqual_GameplayTagContainer
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong local_48 [8];
  
  local_48[4] = 0;
  local_48[5] = 0;
  local_48[6] = 0;
  local_48[7] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48 + 4);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 4);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  plVar3 = local_48 + 4;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_48[2] = 0;
  local_48[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar2 = local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = NotEqual_GameplayTagContainer(plVar3,plVar2);
  *param_3 = uVar1;
  if (local_48[2] != 0) {
    FMemory::Free();
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (local_48[6] != 0) {
    FMemory::Free();
  }
  if (local_48[4] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1421df7f0 execNotEqual_TagContainerTagContainer body=358 status=ok
// SIG undefined execNotEqual_TagContainerTagContainer(void)

void UBlueprintGameplayTagLibrary::execNotEqual_TagContainerTagContainer
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  void *_Src;
  undefined1 uVar1;
  longlong lVar2;
  void *local_68;
  ulonglong local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48 [8];
  
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  local_68 = (void *)0x0;
  local_60 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  _Src = local_68;
  local_58 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar2 = (longlong)(int)local_60;
  local_50 = (int)local_60;
  if ((int)local_60 == 0) {
    local_4c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,local_60 & 0xffffffff,0);
    ::_guard_xfg_dispatch_icall_nop(local_58,_Src,lVar2 * 2);
  }
  local_48[4] = 0;
  local_48[5] = 0;
  local_48[6] = 0;
  local_48[7] = 0;
  FGameplayTagContainer::operator=(local_48 + 4,local_48);
  uVar1 = FUN_1421d8b10(local_48 + 4,&local_58);
  *param_3 = uVar1;
  if (local_68 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_48[2] != 0) {
    FMemory::Free();
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1421df960 execNotEqual_TagTag body=285 status=ok
// SIG undefined execNotEqual_TagTag(void)

void UBlueprintGameplayTagLibrary::execNotEqual_TagTag
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  void *_Src;
  undefined1 uVar1;
  longlong lVar2;
  undefined8 local_res10;
  void *local_28;
  ulonglong local_20;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_28 = (void *)0x0;
  local_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  _Src = local_28;
  local_18 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar2 = (longlong)(int)local_20;
  local_10 = (int)local_20;
  if ((int)local_20 == 0) {
    local_c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_20 & 0xffffffff,0);
    ::_guard_xfg_dispatch_icall_nop(local_18,_Src,lVar2 * 2);
  }
  uVar1 = NotEqual_TagTag(local_res10,&local_18);
  *param_3 = uVar1;
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1421dfa80 execRemoveGameplayTag body=261 status=ok
// SIG undefined execRemoveGameplayTag(void)

void UBlueprintGameplayTagLibrary::execRemoveGameplayTag
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined8 local_res10;
  longlong local_28 [4];
  
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_res10 = 0;
  plVar2 = local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = RemoveGameplayTag(plVar2,local_res10);
  *param_3 = uVar1;
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1421dfb90 CreateComponentInstance body=107 status=ok
// SIG undefined CreateComponentInstance(void)

undefined8 *
FPacketHandlerComponentModuleInterface::CreateComponentInstance
          (undefined8 param_1,undefined8 *param_2)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Public\\PacketHandler.h"
             ,0x2e8,L"Pure virtual not implemented (%s)",
             L"FPacketHandlerModuleInterface::CreateComponentInstance");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Public\\PacketHandler.h"
             ,0x2e8,L"Pure virtual not implemented (%s)",
             L"FPacketHandlerModuleInterface::CreateComponentInstance");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1421dfc00 FUN_1421dfc00 body=204 status=ok
// SIG undefined FUN_1421dfc00(void)

undefined8 * FUN_1421dfc00(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 local_res10 [8];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)FName::FName(local_res10,L"ReliabilityHandlerComponent",1);
    HandlerComponent::HandlerComponent(puVar1,*puVar2);
    *puVar1 = &PTR__scalar_deleting_destructor__144fed838;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 1;
    puVar1[8] = 0;
    puVar1[9] = 0x3dcccccd;
  }
  puVar2 = (undefined8 *)0x0;
  puVar3 = (undefined8 *)operator_new(0x18);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    puVar3[2] = puVar1;
    puVar2 = puVar3;
  }
  *param_2 = puVar1;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar1,puVar1);
  return param_2;
}



// FUNCTION 1421dfcd0 ReliabilityHandlerComponent body=92 status=ok
// SIG undefined ReliabilityHandlerComponent(void)

undefined8 * ReliabilityHandlerComponent::ReliabilityHandlerComponent(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ReliabilityHandlerComponent",1);
  HandlerComponent::HandlerComponent(param_1,*puVar1);
  *param_1 = &PTR__scalar_deleting_destructor__144fed838;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[7] = 1;
  param_1[9] = 0x3dcccccd;
  return param_1;
}



// FUNCTION 1421dfd30 FUN_1421dfd30 body=43 status=ok
// SIG undefined FUN_1421dfd30(void)

undefined8 * FUN_1421dfd30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144fed5c0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1421dfd60 `scalar_deleting_destructor' body=72 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
ReliabilityHandlerComponent::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144fed5c0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1421dfdb0 GetReservedPacketBits body=88 status=ok
// SIG undefined GetReservedPacketBits(void)

undefined8 HandlerComponent::GetReservedPacketBits(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Public\\PacketHandler.h"
             ,0x2aa,L"Pure virtual not implemented (%s)",
             L"Handler::Component::GetReservedPacketBits");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Public\\PacketHandler.h"
             ,0x2aa,L"Pure virtual not implemented (%s)",
             L"Handler::Component::GetReservedPacketBits");
  return 0xffffffff;
}



// FUNCTION 1421dfe10 Incoming body=83 status=ok
// SIG undefined Incoming(void)

void HandlerComponent::Incoming(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Public\\PacketHandler.h"
             ,0x262,L"Pure virtual not implemented (%s)",L"HandlerComponent::Incoming");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Public\\PacketHandler.h"
             ,0x262,L"Pure virtual not implemented (%s)",L"HandlerComponent::Incoming");
  return;
}



// FUNCTION 1421dfe70 FUN_1421dfe70 body=332 status=ok
// SIG undefined FUN_1421dfe70(void)

void FUN_1421dfe70(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int local_res8 [2];
  undefined4 local_res18 [4];
  longlong local_c8 [2];
  undefined1 local_b8 [144];
  longlong local_28 [2];
  longlong local_18;
  longlong local_10;
  
  if ((int)param_1[2] == 3) {
    cVar1 = (**(code **)(*param_1 + 8))();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*param_1 + 0x10))(param_1);
      if (cVar1 != '\0') {
        local_c8[1] = 0x10;
        local_c8[0] = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c8,0);
        FGenericPlatformString::Memcpy(local_c8[0],L"PostReliability",0x20);
        if (local_c8[0] != 0) {
          FMemory::Free(local_c8[0]);
        }
        (**(code **)(*param_2 + 0x68))(param_2,local_res18);
        (**(code **)(*param_2 + 0x68))(param_2,local_res8);
        if ((int)param_1[8] + 1 != local_res8[0]) {
          FUN_1416883a0(local_b8,0,0);
          FArchive::operator=(param_2,local_b8);
          TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=
                    (param_2 + 0x12,local_28);
          param_2[0x14] = local_18;
          param_2[0x15] = local_10;
          if (local_28[0] != 0) {
            FMemory::Free();
          }
          FArchive::~FArchive(local_b8);
          return;
        }
        *(undefined4 *)((longlong)param_1 + 0x3c) = local_res18[0];
        *(int *)(param_1 + 8) = local_res8[0];
      }
    }
  }
  return;
}



// FUNCTION 1421dffc0 IncomingConnectionless body=108 status=ok
// SIG undefined IncomingConnectionless(void)

void HandlerComponent::IncomingConnectionless(undefined8 param_1,longlong *param_2)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Public\\PacketHandler.h"
             ,0x271,L"Pure virtual not implemented (%s)",L"HandlerComponent::IncomingConnectionless"
            );
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Public\\PacketHandler.h"
             ,0x271,L"Pure virtual not implemented (%s)",L"HandlerComponent::IncomingConnectionless"
            );
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1421e0030 Initialize body=83 status=ok
// SIG undefined Initialize(void)

void HandlerComponent::Initialize(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Public\\PacketHandler.h"
             ,0x28b,L"Pure virtual not implemented (%s)",L"HandlerComponent::Initialize");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Public\\PacketHandler.h"
             ,0x28b,L"Pure virtual not implemented (%s)",L"HandlerComponent::Initialize");
  return;
}



// FUNCTION 1421e0090 Initialize body=38 status=ok
// SIG undefined Initialize(void)

void ReliabilityHandlerComponent::Initialize(longlong *param_1)

{
  (**(code **)(*param_1 + 0x58))(param_1,1);
  FUN_1421e2680(param_1);
  *(undefined4 *)(param_1 + 2) = 3;
  return;
}



// FUNCTION 1421e00c0 FUN_1421e00c0 body=39 status=ok
// SIG undefined FUN_1421e00c0(void)

void FUN_1421e00c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144fed4e0;
    return;
  }
  return;
}



// FUNCTION 1421e00f0 IsValid body=85 status=ok
// SIG undefined IsValid(void)

undefined1 HandlerComponent::IsValid(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Public\\PacketHandler.h"
             ,0x250,L"Pure virtual not implemented (%s)",L"Handler::Component::IsValid");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Public\\PacketHandler.h"
             ,0x250,L"Pure virtual not implemented (%s)",L"Handler::Component::IsValid");
  return 0;
}



// FUNCTION 1421e0150 Outgoing body=83 status=ok
// SIG undefined Outgoing(void)

void HandlerComponent::Outgoing(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Public\\PacketHandler.h"
             ,0x269,L"Pure virtual not implemented (%s)",L"HandlerComponent::Outgoing");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Public\\PacketHandler.h"
             ,0x269,L"Pure virtual not implemented (%s)",L"HandlerComponent::Outgoing");
  return;
}



// FUNCTION 1421e01b0 Outgoing body=397 status=ok
// SIG undefined Outgoing(void)

void ReliabilityHandlerComponent::Outgoing(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_d8 [2];
  undefined1 local_c8 [144];
  longlong local_38;
  int local_30;
  int local_2c;
  longlong local_28;
  longlong local_20;
  char local_18;
  undefined1 local_17;
  
  if (*(int *)(param_1 + 0x10) == 3) {
    FUN_141688470(local_c8);
    lVar4 = local_28 + 1;
    if ((local_20 < lVar4) && (local_18 != '\0')) {
      lVar1 = local_20 * 2;
      lVar3 = (longlong)local_30;
      local_20 = lVar4;
      if (lVar4 <= lVar1) {
        local_20 = lVar1;
      }
      iVar2 = (int)(local_20 + 7 >> 3) - local_30;
      local_30 = local_30 + iVar2;
      if (local_2c < local_30) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_38);
      }
      ::_guard_xfg_dispatch_icall_nop((void *)(lVar3 + local_38),0,(longlong)iVar2);
    }
    local_18 = 1;
    FUN_141694b60(local_c8,param_1 + 0x40);
    FUN_141694b60(local_c8,param_1 + 0x38);
    FBitWriter::SerializeBits
              (local_c8,*(undefined8 *)(param_2 + 0x90),*(undefined8 *)(param_2 + 0xa0));
    FArchive::operator=(param_2,local_c8);
    TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=(param_2 + 0x90,&local_38);
    *(longlong *)(param_2 + 0xa0) = local_28;
    *(longlong *)(param_2 + 0xa8) = local_20;
    *(char *)(param_2 + 0xb0) = local_18;
    *(undefined1 *)(param_2 + 0xb1) = local_17;
    local_d8[0] = 0;
    local_d8[1] = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8,0);
    lVar4 = local_d8[0];
    FGenericPlatformString::Memcpy(local_d8[0],L"PostReliability",0x20);
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
    if (local_38 != 0) {
      FMemory::Free();
    }
    FArchive::~FArchive(local_c8);
  }
  return;
}



// FUNCTION 1421e0340 OutgoingConnectionless body=108 status=ok
// SIG undefined OutgoingConnectionless(void)

void HandlerComponent::OutgoingConnectionless(undefined8 param_1,longlong *param_2)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Public\\PacketHandler.h"
             ,0x279,L"Pure virtual not implemented (%s)",L"HandlerComponent::OutgoingConnectionless"
            );
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Public\\PacketHandler.h"
             ,0x279,L"Pure virtual not implemented (%s)",L"HandlerComponent::OutgoingConnectionless"
            );
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1421e03b0 FUN_1421e03b0 body=192 status=ok
// SIG undefined FUN_1421e03b0(void)

void FUN_1421e03b0(longlong param_1,void *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined8 *puVar4;
  void *_Dst;
  ulonglong _Size;
  
  puVar4 = (undefined8 *)operator_new(0x30);
  if (puVar4 != (undefined8 *)0x0) {
    iVar3 = *(int *)(param_1 + 0x38);
    *(int *)(param_1 + 0x38) = iVar3 + 1;
    fVar1 = *(float *)(*(longlong *)(param_1 + 8) + 0x14);
    fVar2 = *(float *)(param_1 + 0x48);
    *(int *)(puVar4 + 1) = param_3;
    *(int *)(puVar4 + 2) = iVar3;
    _Size = (ulonglong)(param_3 + 7U >> 3);
    *(float *)((longlong)puVar4 + 0xc) = fVar1 + fVar2;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    _Dst = (void *)operator_new(_Size);
    *puVar4 = _Dst;
    _guard_xfg_dispatch_icall_nop(_Dst,param_2,_Size);
  }
  iVar3 = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x30) = iVar3 + 1;
  if (*(int *)(param_1 + 0x34) < iVar3 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
              ((longlong *)(param_1 + 0x28),iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x28) + (longlong)iVar3 * 8) = puVar4;
  return;
}



// FUNCTION 1421e0470 Tick body=331 status=ok
// SIG undefined Tick(void)

void ReliabilityHandlerComponent::Tick(longlong param_1)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  
  fVar1 = *(float *)(*(longlong *)(param_1 + 8) + 0x14);
  if (*(float *)(param_1 + 0x48) <= fVar1 - *(float *)(param_1 + 0x4c)) {
    uVar9 = 0;
    *(float *)(param_1 + 0x4c) = fVar1;
    if (0 < *(int *)(param_1 + 0x30)) {
      iVar11 = 0;
      uVar12 = uVar9;
      do {
        iVar10 = iVar11 + 1;
        iVar8 = (int)uVar9;
        lVar3 = *(longlong *)(param_1 + 0x28);
        plVar4 = *(longlong **)(uVar12 + lVar3);
        if (*(uint *)(param_1 + 0x3c) < *(uint *)(plVar4 + 2)) {
          lVar3 = *(longlong *)(param_1 + 8);
          puVar7 = (undefined8 *)operator_new(0x10);
          iVar11 = iVar10;
          if (puVar7 != (undefined8 *)0x0) {
            *puVar7 = 0;
            puVar7[1] = plVar4;
            puVar5 = *(undefined8 **)(lVar3 + 0x1f0);
            *(undefined8 **)(lVar3 + 0x1f0) = puVar7;
            *puVar5 = puVar7;
          }
        }
        else {
          iVar2 = *(int *)(param_1 + 0x30);
          iVar6 = (iVar2 - iVar8) + -1;
          if (iVar6 != 0) {
            ::_guard_xfg_dispatch_icall_nop
                      ((void *)(lVar3 + (longlong)iVar8 * 8),(void *)(lVar3 + (longlong)iVar10 * 8),
                       (longlong)iVar6 << 3);
            iVar2 = *(int *)(param_1 + 0x30);
          }
          *(int *)(param_1 + 0x30) = iVar2 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x28);
          iVar8 = iVar8 + -1;
          uVar12 = uVar12 - 8;
          if (*plVar4 != 0) {
            FMemory::operator_delete(*plVar4,1);
          }
          if (plVar4[3] != 0) {
            FMemory::Free();
          }
          FMemory::operator_delete(plVar4,0x30);
        }
        uVar9 = (ulonglong)(iVar8 + 1U);
        uVar12 = uVar12 + 8;
      } while ((int)(iVar8 + 1U) < *(int *)(param_1 + 0x30));
    }
  }
  return;
}



// FUNCTION 1421e05c0 FUN_1421e05c0 body=202 status=ok
// SIG undefined FUN_1421e05c0(void)

longlong * FUN_1421e05c0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar5 = (longlong *)*param_1;
  plVar6 = plVar5 + (longlong)(int)param_1[1] * 2;
  if (plVar5 != plVar6) {
    do {
      if (*(longlong *)(*plVar5 + 0x20) == *(longlong *)(*param_2 + 0x20)) {
        plVar6 = (longlong *)param_2[1];
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar6 + 1;
          lVar4 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
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
        return plVar5;
      }
      plVar5 = plVar5 + 2;
    } while (plVar5 != plVar6);
  }
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar5 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 1421e0690 BufferedPacket body=103 status=ok
// SIG undefined BufferedPacket(void)

undefined8 *
BufferedPacket::BufferedPacket
          (undefined8 *param_1,void *param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  void *_Dst;
  ulonglong _Size;
  
  *(undefined4 *)(param_1 + 2) = param_5;
  *(undefined4 *)((longlong)param_1 + 0xc) = param_4;
  *(int *)(param_1 + 1) = param_3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  _Size = (ulonglong)(param_3 + 7U >> 3);
  _Dst = (void *)operator_new(_Size);
  *param_1 = _Dst;
  ::_guard_xfg_dispatch_icall_nop(_Dst,param_2,_Size);
  return param_1;
}



// FUNCTION 1421e0700 HandlerComponent body=31 status=ok
// SIG undefined HandlerComponent(void)

undefined8 * HandlerComponent::HandlerComponent(undefined8 *param_1,undefined8 param_2)

{
  param_1[4] = param_2;
  *param_1 = &PTR_FUN_144fed5c0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}



// FUNCTION 1421e0720 FUN_1421e0720 body=478 status=ok
// SIG undefined FUN_1421e0720(void)

undefined8 * FUN_1421e0720(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  
  puVar6 = (undefined8 *)0x0;
  *param_1 = &PTR_FUN_144fef148;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  FUN_141688470(param_1 + 8);
  FUN_1416883a0(param_1 + 0x1f,0,0);
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  puVar4 = (undefined8 *)operator_new(0x10);
  puVar5 = puVar6;
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 0;
    puVar5 = puVar4;
  }
  param_1[0x3d] = puVar5;
  param_1[0x3c] = puVar5;
  puVar4 = (undefined8 *)operator_new(0x10);
  puVar5 = puVar6;
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 0;
    puVar5 = puVar4;
  }
  param_1[0x3f] = puVar5;
  param_1[0x3e] = puVar5;
  puVar4 = (undefined8 *)operator_new(0x10);
  puVar5 = puVar6;
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 0;
    puVar5 = puVar4;
  }
  param_1[0x41] = puVar5;
  param_1[0x40] = puVar5;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  puVar5 = (undefined8 *)operator_new(0x10);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = 0;
    puVar6 = puVar5;
  }
  param_1[0x45] = puVar6;
  param_1[0x44] = puVar6;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(undefined1 *)(param_1 + 0x4b) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 1;
  lVar7 = param_1[0x1c] + 1;
  if ((longlong)param_1[0x1d] < lVar7) {
    lVar2 = param_1[0x1d] * 2;
    if (lVar7 <= lVar2) {
      lVar7 = lVar2;
    }
    param_1[0x1d] = lVar7;
    iVar1 = *(int *)(param_1 + 0x1b);
    iVar8 = (int)(lVar7 + 7 >> 3) - *(int *)(param_1 + 0x1b);
    iVar3 = iVar1 + iVar8;
    *(int *)(param_1 + 0x1b) = iVar3;
    if (*(int *)((longlong)param_1 + 0xdc) < iVar3) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0x1a);
    }
    _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar1 + param_1[0x1a]),0,(longlong)iVar8);
  }
  return param_1;
}



// FUNCTION 1421e0900 FUN_1421e0900 body=33 status=ok
// SIG undefined FUN_1421e0900(void)

undefined8 * FUN_1421e0900(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_144feede8;
  return param_1;
}



// FUNCTION 1421e0930 FUN_1421e0930 body=527 status=ok
// SIG undefined FUN_1421e0930(void)

void FUN_1421e0930(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  *param_1 = &PTR_FUN_144fef148;
  plVar4 = (longlong *)param_1[0x4a];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  plVar4 = (longlong *)param_1[0x47];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  lVar6 = param_1[0x45];
  while (lVar6 != 0) {
    puVar5 = (undefined8 *)param_1[0x45];
    param_1[0x45] = *puVar5;
    FMemory::operator_delete(puVar5,0x10);
    lVar6 = param_1[0x45];
  }
  if (param_1[0x42] != 0) {
    FMemory::Free();
  }
  lVar6 = param_1[0x41];
  while (lVar6 != 0) {
    puVar5 = (undefined8 *)param_1[0x41];
    param_1[0x41] = *puVar5;
    FMemory::operator_delete(puVar5,0x10);
    lVar6 = param_1[0x41];
  }
  lVar6 = param_1[0x3f];
  while (lVar6 != 0) {
    puVar5 = (undefined8 *)param_1[0x3f];
    param_1[0x3f] = *puVar5;
    FMemory::operator_delete(puVar5,0x10);
    lVar6 = param_1[0x3f];
  }
  lVar6 = param_1[0x3d];
  while (lVar6 != 0) {
    puVar5 = (undefined8 *)param_1[0x3d];
    param_1[0x3d] = *puVar5;
    FMemory::operator_delete(puVar5,0x10);
    lVar6 = param_1[0x3d];
  }
  if (param_1[0x3a] != 0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)param_1[0x38];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x35);
  if (param_1[0x31] != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(param_1 + 0x1f);
  if (param_1[0x1a] != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(param_1 + 8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 6);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 4);
  return;
}



// FUNCTION 1421e0b40 operator= body=164 status=ok
// SIG undefined operator=(void)

longlong FBitReader::operator=(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  FArchive::operator=();
  puVar1 = (undefined8 *)(param_1 + 0x90);
  if (puVar1 != (undefined8 *)(param_2 + 0x90)) {
    iVar2 = *(int *)(param_2 + 0x98);
    _Src = *(void **)(param_2 + 0x90);
    *(int *)(param_1 + 0x98) = iVar2;
    if ((iVar2 == 0) && (*(int *)(param_1 + 0x9c) == 0)) {
      *(undefined4 *)(param_1 + 0x9c) = 0;
    }
    else {
      TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
      ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2);
    }
  }
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  return param_1;
}



// FUNCTION 1421e0bf0 FUN_1421e0bf0 body=52 status=ok
// SIG undefined FUN_1421e0bf0(void)

undefined8 FUN_1421e0bf0(undefined8 param_1,ulonglong param_2)

{
  FUN_1421e0930();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x260);
  }
  return param_1;
}



// FUNCTION 1421e0c30 FUN_1421e0c30 body=1561 status=ok
// SIG undefined FUN_1421e0c30(void)

longlong * FUN_1421e0c30(undefined8 param_1,longlong *param_2,longlong *param_3,undefined1 param_4)

{
  int *piVar1;
  wchar_t wVar2;
  short sVar3;
  wint_t wVar4;
  wint_t wVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  wchar_t *pwVar19;
  wchar_t *pwVar20;
  wchar_t *pwVar21;
  uint uVar22;
  uint uVar24;
  wchar_t *local_res18;
  undefined1 local_res20;
  wchar_t *local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  uint local_b0;
  int local_ac;
  longlong local_a8;
  uint local_a0;
  int local_9c;
  wchar_t *local_98;
  uint local_90;
  int local_8c;
  longlong local_88;
  longlong local_80;
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  ulonglong uVar23;
  
  uVar14 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  local_res20 = param_4;
  if (1 < (int)param_3[1]) {
    iVar7 = 0;
    local_c8 = (wchar_t *)0x0;
    local_c0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 0;
    uVar18 = uVar14;
    uVar23 = uVar14;
    uVar17 = uVar14;
    while( true ) {
      iVar13 = (int)param_3[1] + -1;
      if ((int)param_3[1] == 0) {
        iVar13 = iVar7;
      }
      iVar6 = (int)uVar17;
      if (iVar13 <= (int)uVar23) break;
      wVar2 = *(wchar_t *)(*param_3 + uVar18 * 2);
      if (wVar2 == L'(') {
        while( true ) {
          iVar6 = (int)uVar23;
          uVar22 = iVar6 + 1;
          uVar23 = (ulonglong)uVar22;
          uVar17 = uVar18 + 1;
          iVar13 = (int)param_3[1] + -1;
          if ((int)param_3[1] == 0) {
            iVar13 = 0;
          }
          if ((iVar13 <= (int)uVar22) || (sVar3 = *(short *)(*param_3 + uVar17 * 2), sVar3 == 0x29))
          break;
          uVar18 = uVar17;
          if (sVar3 != 0) {
            iVar13 = (int)uVar14;
            iVar6 = iVar13 + -1;
            if (iVar13 < 1) {
              iVar6 = iVar7;
            }
            local_a0 = (iVar13 < 1) + 1 + iVar13;
            if (local_9c < (int)local_a0) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8);
            }
            *(short *)(local_a8 + (longlong)iVar6 * 2) = sVar3;
            *(undefined2 *)(local_a8 + 2 + (longlong)iVar6 * 2) = 0;
            uVar14 = (ulonglong)local_a0;
          }
        }
        uVar17 = local_c0 & 0xffffffff;
        uVar23 = (ulonglong)(iVar6 + 2);
        uVar18 = uVar18 + 2;
      }
      else {
        if ((wVar2 & 0xffdfU) != 0) {
          iVar13 = iVar6 + -1;
          if (iVar6 < 1) {
            iVar13 = iVar7;
          }
          iVar6 = (iVar6 < 1) + 1 + iVar6;
          local_c0 = CONCAT44(local_c0._4_4_,iVar6);
          if (local_c0._4_4_ < iVar6) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,uVar17);
          }
          local_c8[iVar13] = wVar2;
          local_c8[(longlong)iVar13 + 1] = L'\0';
          uVar14 = (ulonglong)local_a0;
          uVar17 = local_c0 & 0xffffffff;
        }
        uVar23 = (ulonglong)((int)uVar23 + 1);
        uVar18 = uVar18 + 1;
      }
    }
    pwVar19 = L"ReliabilityHandlerComponent";
    pwVar21 = L"";
    if (iVar6 != 0) {
      pwVar21 = local_c8;
    }
    do {
      wVar2 = *(wchar_t *)((longlong)(pwVar21 + -0xa27f6f8c) + (longlong)pwVar19);
      if ((wVar2 == L'\0') && (*pwVar19 == L'\0')) goto LAB_1421e11e0;
      if (wVar2 != *pwVar19) {
        wVar4 = towlower(wVar2);
        wVar5 = towlower(*pwVar19);
        if (wVar4 != wVar5) goto LAB_1421e0e14;
      }
      pwVar19 = pwVar19 + 1;
    } while( true );
  }
  goto LAB_1421e1216;
LAB_1421e0e14:
  if (wVar4 != wVar5) {
    iVar7 = FUN_141592950(&local_c8,&DAT_144fedc1c,1,0,0xffffffff);
    if (iVar7 == -1) {
      FUN_14168dc80();
      pwVar21 = L"";
      if ((int)local_c0 != 0) {
        pwVar21 = local_c8;
      }
      puVar11 = (undefined8 *)FName::FName(&local_res18,pwVar21,1);
      uVar9 = *puVar11;
      uVar12 = FUN_14168dc80();
      plVar10 = (longlong *)FUN_141690010(uVar12,uVar9);
      if (plVar10 != (longlong *)0x0) {
        plVar10 = (longlong *)(**(code **)(*plVar10 + 0x40))(plVar10,local_60,&local_a8);
        if (param_2 != plVar10) {
          *param_2 = *plVar10;
          *plVar10 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,plVar10 + 1);
        }
        if (local_58 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_58 + 1;
          lVar8 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_58)(local_58);
            LOCK();
            piVar1 = (int *)((longlong)local_58 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*local_58 + 8))(local_58,1);
            }
          }
        }
      }
    }
    else {
      local_b8 = (wchar_t *)0x0;
      uVar22 = iVar7 + 0x80000000;
      uVar24 = (int)local_c0 - 1;
      if ((int)local_c0 == 0) {
        uVar24 = 0;
      }
      if (iVar7 + 1U < uVar24) {
        uVar24 = iVar7 + 1U;
      }
      uVar15 = (int)local_c0 - 1;
      if ((int)local_c0 == 0) {
        uVar15 = 0;
      }
      uVar16 = uVar24;
      if ((uVar24 <= uVar22) && (uVar16 = uVar15, uVar22 < uVar15)) {
        uVar16 = uVar22;
      }
      local_98 = (wchar_t *)0x0;
      local_res18 = L"";
      if ((int)local_c0 != 0) {
        local_res18 = local_c8;
      }
      iVar7 = uVar16 - uVar24;
      local_8c = 0;
      pwVar21 = (wchar_t *)(ulonglong)(iVar7 + 1);
      if (iVar7 == 0) {
        pwVar21 = local_b8;
      }
      local_90 = (uint)pwVar21;
      if (0 < (int)local_90) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
        local_b8 = local_98;
        pwVar21 = (wchar_t *)(ulonglong)local_90;
        if (0 < (int)local_90) {
          wcsncpy(local_98,local_res18 + (int)uVar24,(longlong)iVar7);
          local_b8[iVar7] = L'\0';
        }
      }
      local_b0 = (uint)pwVar21;
      iVar7 = local_b0 + 10 + (uint)(local_b0 == 0);
      local_ac = local_8c;
      if (local_8c < iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_b8,iVar7,0);
        pwVar21 = (wchar_t *)(ulonglong)local_b0;
      }
      iVar7 = (int)pwVar21;
      local_b0 = (0xb - (uint)(iVar7 != 0)) + iVar7;
      if (local_ac < (int)local_b0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,pwVar21);
      }
      uVar22 = local_b0;
      pwVar19 = local_b8;
      lVar8 = (longlong)iVar7 - (ulonglong)(iVar7 != 0);
      pwVar21 = local_b8 + lVar8;
      builtin_wcsncpy(local_b8 + lVar8,L"_Singlet",8);
      pwVar20 = L"";
      if (local_b0 != 0) {
        pwVar20 = local_b8;
      }
      pwVar21[8] = L'o';
      pwVar21[9] = L'n';
      pwVar21[10] = L'\0';
      uVar9 = UHandlerComponentFactory::GetPrivateStaticClass();
      plVar10 = (longlong *)FUN_141799410(uVar9,0xffffffffffffffff,pwVar20,0);
      if (plVar10 == (longlong *)0x0) {
        pwVar21 = L"";
        if ((int)local_c0 != 0) {
          pwVar21 = local_c8;
        }
        uVar9 = UHandlerComponentFactory::GetPrivateStaticClass();
        local_88 = FUN_141799830(uVar9,0,pwVar21,0,0,0);
        if (local_88 != 0) {
          pwVar21 = L"";
          if (uVar22 != 0) {
            pwVar21 = pwVar19;
          }
          plVar10 = (longlong *)FName::FName(local_78,pwVar21,1);
          lVar8 = *plVar10;
          uVar9 = GetTransientPackage();
          local_res18 = (wchar_t *)0x0;
          if (lVar8 == 0) {
            FUN_1417846f0(uVar9,
                          L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                         );
          }
          plVar10 = (longlong *)FUN_1417985e0(local_88,uVar9,lVar8,0,0,0,0,0,0);
          if (plVar10 != (longlong *)0x0) goto LAB_1421e10b2;
        }
      }
      else {
LAB_1421e10b2:
        plVar10 = (longlong *)(**(code **)(*plVar10 + 0x278))(plVar10,local_70,&local_a8);
        if (param_2 != plVar10) {
          *param_2 = *plVar10;
          *plVar10 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,plVar10 + 1);
        }
        if (local_68 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_68 + 1;
          lVar8 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          pwVar19 = local_b8;
          if ((int)lVar8 == 1) {
            (**(code **)*local_68)(local_68);
            LOCK();
            piVar1 = (int *)((longlong)local_68 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            pwVar19 = local_b8;
            if (iVar7 == 1) {
              (**(code **)(*local_68 + 8))(local_68,1);
              pwVar19 = local_b8;
            }
          }
        }
      }
      if (pwVar19 != (wchar_t *)0x0) {
        FMemory::Free(pwVar19);
      }
    }
    lVar8 = *param_2;
    if (lVar8 != 0) {
      local_80 = param_2[1];
      if (local_80 != 0) {
        LOCK();
        *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
        UNLOCK();
      }
      local_88 = lVar8;
      FUN_1421e1250(param_1,&local_88,local_res20);
    }
  }
LAB_1421e11e0:
  if (local_a8 != 0) {
    FMemory::Free();
  }
  if (local_c8 != (wchar_t *)0x0) {
    FMemory::Free();
  }
LAB_1421e1216:
  if (*param_3 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1421e1250 FUN_1421e1250 body=563 status=ok
// SIG undefined FUN_1421e1250(void)

void FUN_1421e1250(longlong param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong local_38;
  longlong *local_30;
  
  if (*(int *)(param_1 + 0x1cc) == 0) {
    local_38 = *param_2;
    if (local_38 == 0) {
      LowLevelFatalErrorHandler
                ("D:\\Oak\\main\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Private\\PacketHandler.cpp"
                 ,0xbe,L"Failed to add handler - invalid instance.");
      FDebug::AssertFailed
                (&DAT_144fed8d6,
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Private\\PacketHandler.cpp"
                 ,0xbe,L"Failed to add handler - invalid instance.");
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
      return;
    }
    plVar7 = (longlong *)param_2[1];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    plVar3 = (longlong *)(param_1 + 0x1a8);
    local_30 = plVar7;
    lVar6 = FUN_1421e05c0(plVar3,&local_38);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar7 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar7 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    if (lVar6 == 0) {
      iVar4 = *(int *)(param_1 + 0x1b0);
      *(int *)(param_1 + 0x1b0) = iVar4 + 1;
      if (*(int *)(param_1 + 0x1b4) < iVar4 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar3,iVar4);
      }
      plVar7 = (longlong *)((longlong)iVar4 * 0x10 + *plVar3);
      *plVar7 = *param_2;
      lVar6 = param_2[1];
      plVar7[1] = lVar6;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
        UNLOCK();
      }
      *(longlong *)(*param_2 + 8) = param_1;
      if (param_3 == '\0') {
        (**(code **)(*(longlong *)*param_2 + 0x40))();
      }
    }
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
  }
  else {
    LowLevelFatalErrorHandler
              ("D:\\Oak\\main\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Private\\PacketHandler.cpp"
               ,0xb7,L"Handler added during runtime.");
    FDebug::AssertFailed
              (&DAT_144fed8bf,
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Private\\PacketHandler.cpp"
               ,0xb7,L"Handler added during runtime.");
    plVar7 = (longlong *)param_2[1];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar7 + 1;
      lVar6 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001421e12f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar7 + 8))(plVar7,1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1421e1490 FUN_1421e1490 body=200 status=ok
// SIG undefined FUN_1421e1490(void)

void FUN_1421e1490(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = (longlong *)(param_1 + 0x30);
  *(undefined1 *)(param_1 + 600) = 1;
  if (param_2 != plVar3) {
    if (((int)param_2[1] == 0) || (plVar1 = (longlong *)*param_2, plVar1 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x38) != 0) &&
         (plVar1 = (longlong *)*plVar3, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x28))(plVar1,0);
        if (*plVar3 != 0) {
          lVar4 = FMemory::Realloc(*plVar3,0,0);
          *plVar3 = lVar4;
        }
        *(undefined4 *)(param_1 + 0x38) = 0;
      }
    }
    else {
      (**(code **)(*plVar1 + 0x30))(plVar1,plVar3);
    }
  }
  iVar2 = *(int *)(param_1 + 0x1b0) + -1;
  if (-1 < iVar2) {
    lVar4 = (longlong)iVar2;
    plVar3 = (longlong *)(lVar4 * 0x10 + *(longlong *)(param_1 + 0x1a8));
    do {
      plVar1 = (longlong *)*plVar3;
      if (((char)plVar1[3] != '\0') && (*(char *)((longlong)plVar1 + 0x1b) == '\0')) {
        (**(code **)(*plVar1 + 0x48))();
        break;
      }
      plVar3 = plVar3 + -2;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2);
  return;
}



// FUNCTION 1421e1560 CreateComponentInstance body=107 status=ok
// SIG undefined CreateComponentInstance(void)

undefined8 *
UHandlerComponentFactory::CreateComponentInstance(undefined8 param_1,undefined8 *param_2)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Classes\\HandlerComponentFactory.h"
             ,0x17,L"Pure virtual not implemented (%s)",
             L"UHandlerComponentFactory::CreateComponentInstance");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Classes\\HandlerComponentFactory.h"
             ,0x17,L"Pure virtual not implemented (%s)",
             L"UHandlerComponentFactory::CreateComponentInstance");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1421e15d0 FUN_1421e15d0 body=34 status=ok
// SIG undefined FUN_1421e15d0(void)

undefined8 * FUN_1421e15d0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = *(undefined8 *)(param_1 + 0x1b8);
  lVar1 = *(longlong *)(param_1 + 0x1c0);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1421e1600 GetQueuedConnectionlessPacket body=83 status=ok
// SIG undefined GetQueuedConnectionlessPacket(void)

undefined8 PacketHandler::GetQueuedConnectionlessPacket(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = **(longlong **)(param_1 + 0x228);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x228);
    uVar3 = *(undefined8 *)(lVar1 + 8);
    *(longlong *)(param_1 + 0x228) = lVar1;
    *(undefined8 *)(lVar1 + 8) = 0;
    FMemory::operator_delete(uVar2,0x10);
    return uVar3;
  }
  return 0;
}



// FUNCTION 1421e1660 GetQueuedPacket body=83 status=ok
// SIG undefined GetQueuedPacket(void)

undefined8 PacketHandler::GetQueuedPacket(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = **(longlong **)(param_1 + 0x1e8);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x1e8);
    uVar3 = *(undefined8 *)(lVar1 + 8);
    *(longlong *)(param_1 + 0x1e8) = lVar1;
    *(undefined8 *)(lVar1 + 8) = 0;
    FMemory::operator_delete(uVar2,0x10);
    return uVar3;
  }
  return 0;
}



// FUNCTION 1421e16c0 GetQueuedPacket body=83 status=ok
// SIG undefined GetQueuedPacket(void)

undefined8 PacketHandler::GetQueuedPacket(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = **(longlong **)(param_1 + 0x1f8);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x1f8);
    uVar3 = *(undefined8 *)(lVar1 + 8);
    *(longlong *)(param_1 + 0x1f8) = lVar1;
    *(undefined8 *)(lVar1 + 8) = 0;
    FMemory::operator_delete(uVar2,0x10);
    return uVar3;
  }
  return 0;
}



// FUNCTION 1421e1720 GetTotalReservedPacketBits body=207 status=ok
// SIG undefined GetTotalReservedPacketBits(void)

int PacketHandler::GetTotalReservedPacketBits(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  
  iVar2 = *(int *)(param_1 + 0x1b0);
  iVar6 = 0;
  iVar4 = *(int *)(param_1 + 0x1c8);
  lVar3 = (longlong)(iVar2 + -1);
  if (-1 < iVar2 + -1) {
    lVar5 = lVar3 << 4;
    do {
      plVar1 = *(longlong **)(lVar5 + *(longlong *)(param_1 + 0x1a8));
      iVar2 = (**(code **)(*plVar1 + 0x60))(plVar1);
      if (iVar2 == -1) {
        LowLevelFatalErrorHandler
                  ("D:\\Oak\\main\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Private\\PacketHandler.cpp"
                   ,0x32c,L"Handler returned invalid \'GetReservedPacketBits\' value.");
        FDebug::AssertFailed
                  (&DAT_144fedcbc,
                   "D:\\Oak\\main\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Private\\PacketHandler.cpp"
                   ,0x32c,L"Handler returned invalid \'GetReservedPacketBits\' value.");
      }
      else {
        *(int *)((longlong)plVar1 + 0x14) = iVar4;
        iVar4 = iVar4 - iVar2;
        iVar6 = iVar6 + iVar2;
      }
      lVar5 = lVar5 + -0x10;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
    iVar2 = *(int *)(param_1 + 0x1b0);
  }
  iVar4 = iVar6 + 1;
  if (iVar2 < 1) {
    iVar4 = iVar6;
  }
  return iVar4;
}



// FUNCTION 1421e17f0 FUN_1421e17f0 body=527 status=ok
// SIG undefined FUN_1421e17f0(void)

void FUN_1421e17f0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar6;
  
  plVar8 = (longlong *)0x0;
  if ((*(longlong *)(param_1 + 0x230) == 0) && (0 < *(int *)(param_1 + 0x1b0))) {
    plVar7 = *(longlong **)(param_1 + 0x1a8);
    plVar6 = plVar8;
    do {
      if (*(char *)(*plVar7 + 0x19) != '\0') {
        LowLevelFatalErrorHandler
                  ("Unknown",0x2b7,L"Some HandlerComponents require bEnableReliability!!!");
        FDebug::AssertFailed
                  (&DAT_144fedc7f,"Unknown",0x2b7,
                   L"Some HandlerComponents require bEnableReliability!!!");
        break;
      }
      uVar5 = (int)plVar6 + 1;
      plVar6 = (longlong *)(ulonglong)uVar5;
      plVar7 = plVar7 + 2;
    } while ((int)uVar5 < *(int *)(param_1 + 0x1b0));
  }
  plVar7 = plVar8;
  plVar6 = plVar8;
  if (0 < *(int *)(param_1 + 0x1d8)) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x1d0);
      puVar4 = (undefined8 *)operator_new(0x10);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = 0;
        puVar4[1] = *(undefined8 *)((longlong)plVar6 + lVar1);
        puVar2 = *(undefined8 **)(param_1 + 0x1e0);
        *(undefined8 **)(param_1 + 0x1e0) = puVar4;
        *puVar2 = puVar4;
      }
      uVar5 = (int)plVar7 + 1;
      *(undefined8 *)((longlong)plVar6 + *(longlong *)(param_1 + 0x1d0)) = 0;
      plVar7 = (longlong *)(ulonglong)uVar5;
      plVar6 = plVar6 + 1;
    } while ((int)uVar5 < *(int *)(param_1 + 0x1d8));
  }
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  if (*(int *)(param_1 + 0x1dc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x1d0,0);
  }
  plVar7 = plVar8;
  plVar6 = plVar8;
  if (0 < *(int *)(param_1 + 0x218)) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x210);
      puVar4 = (undefined8 *)operator_new(0x10);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = 0;
        puVar4[1] = *(undefined8 *)((longlong)plVar6 + lVar1);
        puVar2 = *(undefined8 **)(param_1 + 0x220);
        *(undefined8 **)(param_1 + 0x220) = puVar4;
        *puVar2 = puVar4;
      }
      uVar5 = (int)plVar7 + 1;
      *(undefined8 *)((longlong)plVar6 + *(longlong *)(param_1 + 0x210)) = 0;
      plVar7 = (longlong *)(ulonglong)uVar5;
      plVar6 = plVar6 + 1;
    } while ((int)uVar5 < *(int *)(param_1 + 0x218));
  }
  *(undefined4 *)(param_1 + 0x218) = 0;
  if (*(int *)(param_1 + 0x21c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x210,0);
  }
  if (*(int *)(param_1 + 0x1cc) == 2) {
    LowLevelFatalErrorHandler
              ("D:\\Oak\\main\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Private\\PacketHandler.cpp"
               ,0x294,L"Set new Packet Processor State to the state it is currently in.");
    FDebug::AssertFailed
              (&DAT_144fedc7e,
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Private\\PacketHandler.cpp"
               ,0x294,L"Set new Packet Processor State to the state it is currently in.");
  }
  else {
    *(undefined4 *)(param_1 + 0x1cc) = 2;
  }
  if ((((*(char *)(param_1 + 600) != '\0') && (*(int *)(param_1 + 0x38) != 0)) &&
      (*(longlong **)(param_1 + 0x30) != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))(), cVar3 != '\0')) {
    if (*(int *)(param_1 + 0x38) != 0) {
      plVar8 = *(longlong **)(param_1 + 0x30);
    }
    (**(code **)(*plVar8 + 0x40))(plVar8);
  }
  return;
}



// FUNCTION 1421e1a00 FUN_1421e1a00 body=1265 status=ok
// SIG undefined FUN_1421e1a00(void)

undefined8 *
FUN_1421e1a00(longlong param_1,undefined8 *param_2,longlong param_3,int param_4,char param_5,
             longlong *param_6)

{
  void **ppvVar1;
  longlong *plVar2;
  longlong lVar3;
  void *pvVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  size_t _Size;
  longlong lVar10;
  longlong local_1b8;
  ulonglong local_1b0;
  longlong local_1a8 [5];
  byte local_180;
  void *local_118;
  int local_110;
  int local_10c;
  longlong local_108;
  longlong local_100;
  undefined1 local_f8 [144];
  void *local_68;
  int local_60;
  longlong local_58;
  longlong local_50;
  undefined1 local_48 [16];
  
  iVar8 = param_4 * 8;
  if (0 < *(int *)(param_1 + 0x1b0)) {
    cVar5 = *(char *)((longlong)param_4 + -1 + param_3);
    if (cVar5 == '\0') {
      *param_2 = 0;
      *(undefined4 *)(param_2 + 1) = 0;
      *(undefined1 *)((longlong)param_2 + 0xc) = 1;
      if (*param_6 == 0) {
        return param_2;
      }
      FMemory::Free();
      return param_2;
    }
    for (; iVar8 = iVar8 + -1, -1 < cVar5; cVar5 = cVar5 * '\x02') {
    }
  }
  FUN_1416883a0(local_1a8,param_3,(longlong)iVar8);
  local_1b0 = 0x12;
  local_1b8 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,0);
  lVar9 = local_1b8;
  FGenericPlatformString::Memcpy(local_1b8,L"PostPacketHandler",0x24);
  if (lVar9 != 0) {
    FMemory::Free(lVar9);
  }
  if (*(int *)(param_1 + 0x1cc) == 0) {
    FUN_1421e2e60(param_1);
  }
  iVar8 = *(int *)(param_1 + 0x1b0) + -1;
  lVar9 = (longlong)iVar8;
  if (-1 < iVar8) {
    lVar10 = lVar9 << 4;
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x1a8) + lVar10);
      cVar5 = (**(code **)(*plVar2 + 8))(plVar2);
      if ((cVar5 != '\0') && ((local_180 & 0x80) == 0)) {
        if ((int)local_108 != (int)local_100) {
          if (((local_100 != 0) && (cVar5 = (**(code **)(*plVar2 + 0x38))(plVar2), cVar5 == '\0'))
             && (local_100 != 0)) {
            iVar8 = (int)local_108 - (int)local_100;
            if (iVar8 != 0) {
              local_1b8 = 0;
              local_1b0 = (local_108 - local_100) + 7 >> 3;
              iVar6 = (int)local_1b0;
              local_1b0 = local_1b0 & 0xffffffff;
              if (0 < iVar6) {
                TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_1b8,0);
                iVar6 = (int)local_1b0;
              }
              lVar3 = local_1b8;
              *(undefined1 *)((iVar6 + -1) + local_1b8) = 0;
              (**(code **)(local_1a8[0] + 0x58))(local_1a8,local_1b8,(longlong)iVar8);
              FUN_1416883a0(local_f8,lVar3,(longlong)iVar8);
              FArchive::operator=(local_1a8,local_f8);
              iVar8 = local_60;
              pvVar4 = local_68;
              local_110 = local_60;
              if ((local_60 == 0) && (local_10c == 0)) {
                local_10c = 0;
              }
              else {
                TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_118,local_60);
                _guard_xfg_dispatch_icall_nop(local_118,pvVar4,(longlong)iVar8);
              }
              local_108 = local_58;
              local_100 = local_50;
              if (local_68 != (void *)0x0) {
                FMemory::Free(local_68);
              }
              FArchive::~FArchive(local_f8);
              if (lVar3 != 0) {
                FMemory::Free(lVar3);
              }
            }
          }
          if (param_5 == '\0') {
            (**(code **)(*plVar2 + 0x18))(plVar2);
          }
          else {
            lVar3 = *plVar2;
            uVar7 = FString::FString(local_48,param_6);
            (**(code **)(lVar3 + 0x28))(plVar2,uVar7,local_1a8);
          }
        }
      }
      lVar10 = lVar10 + -0x10;
      lVar9 = lVar9 + -1;
    } while (-1 < lVar9);
  }
  if ((local_180 & 0x80) != 0) {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    *(undefined1 *)((longlong)param_2 + 0xc) = 1;
    goto LAB_1421e1e94;
  }
  if (local_100 == 0) {
LAB_1421e1da9:
    FArchive::operator=(param_1 + 0xf8,local_1a8);
    pvVar4 = local_118;
    ppvVar1 = (void **)(param_1 + 0x188);
    if (ppvVar1 != &local_118) {
      _Size = (size_t)local_110;
      *(int *)(param_1 + 400) = local_110;
      if ((local_110 == 0) && (*(int *)(param_1 + 0x194) == 0)) {
        *(undefined4 *)(param_1 + 0x194) = 0;
      }
      else {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(ppvVar1,local_110);
        _guard_xfg_dispatch_icall_nop(*ppvVar1,pvVar4,_Size);
      }
    }
    *(longlong *)(param_1 + 0x198) = local_108;
    *(longlong *)(param_1 + 0x1a0) = local_100;
  }
  else {
    iVar8 = (int)local_108 - (int)local_100;
    if (iVar8 == 0) goto LAB_1421e1da9;
    local_1b8 = 0;
    local_1b0 = (local_108 - local_100) + 7 >> 3;
    iVar6 = (int)local_1b0;
    local_1b0 = local_1b0 & 0xffffffff;
    if (0 < iVar6) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_1b8,0);
      iVar6 = (int)local_1b0;
    }
    lVar9 = local_1b8;
    *(undefined1 *)((iVar6 + -1) + local_1b8) = 0;
    (**(code **)(local_1a8[0] + 0x58))(local_1a8,local_1b8,(longlong)iVar8);
    FUN_1416883a0(local_f8,lVar9,(longlong)iVar8);
    FBitReader::operator=(param_1 + 0xf8,local_f8);
    if (local_68 != (void *)0x0) {
      FMemory::Free();
    }
    FArchive::~FArchive(local_f8);
    if (lVar9 != 0) {
      FMemory::Free(lVar9);
    }
  }
  if (*(int *)(param_1 + 0x198) != *(int *)(param_1 + 0x1a0)) {
    local_1b8 = 0;
    local_1b0 = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,0);
    lVar9 = local_1b8;
    FGenericPlatformString::Memcpy(local_1b8,L"PrePacketHandler",0x22);
    if (lVar9 != 0) {
      FMemory::Free(lVar9);
    }
  }
  *param_2 = *(undefined8 *)(param_1 + 0x188);
  *(int *)(param_2 + 1) = *(int *)(param_1 + 0x198) - *(int *)(param_1 + 0x1a0);
  *(undefined1 *)((longlong)param_2 + 0xc) = 0;
LAB_1421e1e94:
  if (local_118 != (void *)0x0) {
    FMemory::Free();
  }
  FArchive::~FArchive(local_1a8);
  if (*param_6 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1421e1f00 FUN_1421e1f00 body=1543 status=ok
// SIG undefined FUN_1421e1f00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1421e1f00(longlong param_1,undefined4 param_2,undefined4 param_3,char param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  void *pvVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  void *_Src;
  longlong lVar13;
  longlong *plVar14;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  char local_108 [8];
  void *local_100;
  undefined8 local_f8;
  longlong *local_f0;
  ulonglong local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  longlong *plStack_c8;
  void *local_c0;
  int local_b8;
  undefined4 local_b4;
  longlong local_b0;
  longlong *local_a8;
  void *local_a0;
  int local_98;
  undefined4 local_94;
  void *local_90;
  int local_88;
  undefined4 local_84;
  undefined8 *local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_80 = param_5;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x1c8) = param_3;
  if (param_4 == '\0') {
    local_f0 = (longlong *)0x0;
    local_e8 = 0;
    local_118 = &DAT_1468e2360;
    FConfigCacheIni::GetArray(DAT_1468b6148,L"PacketHandlerComponents",L"Components",&local_f0);
    uVar12 = (ulonglong)(int)local_e8;
    plVar10 = local_f0 + uVar12 * 2;
    plVar14 = local_f0;
    if (local_f0 != plVar10) {
      do {
        pvVar4 = (void *)*plVar14;
        local_b8 = (int)plVar14[1];
        lVar13 = (longlong)local_b8;
        local_c0 = (void *)0x0;
        if (local_b8 == 0) {
          _Src = (void *)0x0;
          local_b4 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_c0,local_b8,0);
          _Src = local_c0;
          _guard_xfg_dispatch_icall_nop(local_c0,pvVar4,lVar13 * 2);
        }
        iVar7 = local_b8;
        local_a0 = (void *)0x0;
        local_98 = local_b8;
        if (local_b8 == 0) {
          local_94 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a0,local_b8,0);
          _guard_xfg_dispatch_icall_nop(local_a0,_Src,(longlong)iVar7 * 2);
        }
        FUN_1421e0c30(param_1,local_78,&local_a0,1);
        plVar3 = local_70;
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_70 + 1;
          lVar13 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          _Src = local_c0;
          if ((int)lVar13 == 1) {
            (**(code **)*local_70)(local_70);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            iVar7 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            _Src = local_c0;
            if (iVar7 == 1) {
              (**(code **)(*local_70 + 8))(local_70,1);
              _Src = local_c0;
            }
          }
        }
        if (_Src != (void *)0x0) {
          FMemory::Free(_Src);
        }
        plVar14 = plVar14 + 2;
      } while (plVar14 != plVar10);
      uVar12 = local_e8 & 0xffffffff;
      param_5 = local_80;
    }
    uVar11 = (uint)uVar12;
    plVar14 = local_f0;
    while (uVar11 != 0) {
      if (*plVar14 != 0) {
        FMemory::Free();
      }
      plVar14 = plVar14 + 2;
      uVar11 = (int)uVar12 - 1;
      uVar12 = (ulonglong)uVar11;
    }
    if (local_f0 != (longlong *)0x0) {
      FMemory::Free(local_f0);
    }
  }
  lVar13 = 0;
  local_100 = (void *)0x0;
  local_f8 = 0;
  local_118 = &DAT_1468e2360;
  cVar6 = FConfigCacheIni::GetString
                    (DAT_1468b6148,L"PacketHandlerComponents",L"EncryptionComponent",&local_100);
  if ((cVar6 != '\0') && (1 < (int)local_f8)) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146aeda68) {
      _Init_thread_header(&DAT_146aeda68);
      if (DAT_146aeda68 == -1) {
        if (DAT_1468b1f88 == (longlong *)0x0) {
          IConsoleManager::SetupSingleton();
        }
        DAT_146aeda60 =
             (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"net.AllowEncryption");
        _Init_thread_footer(&DAT_146aeda68);
      }
    }
    iVar7 = (int)local_f8;
    if (DAT_146aeda60 != (longlong *)0x0) {
      iVar7 = (**(code **)(*DAT_146aeda60 + 0x68))();
      if (iVar7 == 0) goto LAB_1421e227b;
      iVar7 = (int)local_f8;
    }
    pvVar4 = local_100;
    local_90 = (void *)0x0;
    local_88 = iVar7;
    if (iVar7 == 0) {
      local_84 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_90,iVar7,0);
      _guard_xfg_dispatch_icall_nop(local_90,pvVar4,(longlong)iVar7 * 2);
    }
    puVar8 = (undefined8 *)FUN_1421e0c30(param_1,local_58,&local_90,1);
    local_d8 = (longlong *)puVar8[1];
    local_e0 = *puVar8;
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
      UNLOCK();
    }
    if ((undefined8 *)(param_1 + 0x1b8) != &local_e0) {
      *(undefined8 *)(param_1 + 0x1b8) = local_e0;
      local_e0 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x1c0,&local_d8);
    }
    plVar14 = local_d8;
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_d8 + 1;
      lVar9 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_d8)(local_d8);
        LOCK();
        piVar2 = (int *)((longlong)plVar14 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_d8 + 8))(local_d8,1);
        }
      }
    }
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_50 + 1;
      lVar9 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
  }
LAB_1421e227b:
  local_108[0] = '\0';
  local_118 = &DAT_1468e2360;
  FConfigCacheIni::GetBool(DAT_1468b6148,L"PacketHandlerComponents",L"bEnableReliability",local_108)
  ;
  if ((local_108[0] != '\0') && (plVar14 = (longlong *)(param_1 + 0x230), *plVar14 == 0)) {
    lVar9 = operator_new(0x50);
    if (lVar9 != 0) {
      lVar13 = ReliabilityHandlerComponent::ReliabilityHandlerComponent(lVar9);
    }
    plVar10 = (longlong *)operator_new(0x18);
    if (plVar10 == (longlong *)0x0) {
      plVar10 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar10 + 1) = 1;
      *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
      *plVar10 = (longlong)&PTR_FUN_143f3f2e0;
      plVar10[2] = lVar13;
    }
    local_b0 = lVar13;
    local_a8 = plVar10;
    SharedPointerInternals::EnableSharedFromThis(&local_b0,lVar13,lVar13);
    if (plVar14 != &local_b0) {
      *plVar14 = lVar13;
      local_b0 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x238,&local_a8);
      plVar10 = local_a8;
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar10 + 1;
      lVar13 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
    local_68 = *plVar14;
    local_60 = *(longlong *)(param_1 + 0x238);
    if (local_60 != 0) {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
    }
    FUN_1421e1250(param_1,&local_68,1);
  }
  plVar14 = (longlong *)param_5[1];
  puVar8 = (undefined8 *)(param_1 + 0x248);
  uVar5 = *param_5;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
  }
  local_d0 = uVar5;
  plStack_c8 = plVar14;
  if (&local_d0 != puVar8) {
    local_d0 = *puVar8;
    plStack_c8 = *(longlong **)(param_1 + 0x250);
    *puVar8 = uVar5;
    *(longlong **)(param_1 + 0x250) = plVar14;
    local_48 = uVar5;
    plStack_40 = plVar14;
  }
  plVar14 = plStack_c8;
  if (plStack_c8 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_c8 + 1;
    lVar13 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plStack_c8)(plStack_c8);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plStack_c8 + 8))(plStack_c8,1);
      }
    }
  }
  if (local_100 != (void *)0x0) {
    FMemory::Free();
  }
  plVar14 = (longlong *)param_5[1];
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar14 + 1;
    lVar13 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  return;
}



// FUNCTION 1421e2510 FUN_1421e2510 body=317 status=ok
// SIG undefined FUN_1421e2510(void)

void FUN_1421e2510(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_18;
  longlong local_10;
  
  if (*(int *)(param_1 + 0x1cc) == 0) {
    if (*(int *)(param_1 + 0x1b0) < 1) {
      FUN_1421e17f0();
    }
    else {
      *(undefined4 *)(param_1 + 0x1cc) = 1;
    }
  }
  iVar2 = *(int *)(param_1 + 0x1b0);
  iVar3 = 0;
  if (0 < iVar2) {
    lVar5 = 0;
    do {
      plVar1 = *(longlong **)(lVar5 + *(longlong *)(param_1 + 0x1a8));
      if (*(char *)((longlong)plVar1 + 0x1b) == '\0') {
        (**(code **)(*plVar1 + 0x40))(plVar1);
        local_18 = *(undefined8 *)(param_1 + 0x248);
        local_10 = *(longlong *)(param_1 + 0x250);
        if (local_10 != 0) {
          LOCK();
          *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
          UNLOCK();
        }
        (**(code **)(*plVar1 + 0x68))(plVar1,&local_18);
      }
      iVar2 = *(int *)(param_1 + 0x1b0);
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar3 < iVar2);
  }
  iVar3 = *(int *)(param_1 + 0x1c8);
  lVar5 = (longlong)(iVar2 + -1);
  if (-1 < iVar2 + -1) {
    lVar4 = lVar5 << 4;
    do {
      plVar1 = *(longlong **)(lVar4 + *(longlong *)(param_1 + 0x1a8));
      iVar2 = (**(code **)(*plVar1 + 0x60))(plVar1);
      if (iVar2 == -1) {
        LowLevelFatalErrorHandler
                  ("D:\\Oak\\main\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Private\\PacketHandler.cpp"
                   ,0x32c,L"Handler returned invalid \'GetReservedPacketBits\' value.");
        FDebug::AssertFailed
                  (&DAT_144fedcbc,
                   "D:\\Oak\\main\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Private\\PacketHandler.cpp"
                   ,0x32c,L"Handler returned invalid \'GetReservedPacketBits\' value.");
      }
      else {
        *(int *)((longlong)plVar1 + 0x14) = iVar3;
        iVar3 = iVar3 - iVar2;
      }
      lVar4 = lVar4 + -0x10;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  return;
}



// FUNCTION 1421e2650 FUN_1421e2650 body=39 status=ok
// SIG undefined FUN_1421e2650(void)

void FUN_1421e2650(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144fed428;
    return;
  }
  return;
}



// FUNCTION 1421e2680 FUN_1421e2680 body=220 status=ok
// SIG undefined FUN_1421e2680(void)

void FUN_1421e2680(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  
  lVar1 = param_1[1];
  *(undefined1 *)((longlong)param_1 + 0x1b) = 1;
  if (*(int *)(lVar1 + 0x1cc) != 2) {
    bVar3 = false;
    bVar9 = false;
    iVar6 = *(int *)(lVar1 + 0x1b0) + -1;
    lVar7 = (longlong)iVar6;
    if (-1 < iVar6) {
      lVar8 = lVar7 << 4;
      bVar5 = true;
      do {
        plVar2 = *(longlong **)(lVar8 + *(longlong *)(lVar1 + 0x1a8));
        bVar4 = false;
        if (*(char *)((longlong)plVar2 + 0x1b) != '\0') {
          bVar4 = bVar5;
        }
        if (bVar9) {
          if ((((*(char *)(lVar1 + 600) != '\0') && (*(char *)((longlong)plVar2 + 0x1b) == '\0')) &&
              ((char)param_1[3] != '\0')) && ((!bVar3 && ((char)plVar2[3] != '\0')))) {
            (**(code **)(*plVar2 + 0x48))();
            bVar3 = true;
          }
        }
        else {
          bVar9 = plVar2 == param_1;
        }
        lVar8 = lVar8 + -0x10;
        lVar7 = lVar7 + -1;
        bVar5 = bVar4;
      } while (-1 < lVar7);
      if (!bVar4) {
        return;
      }
    }
    FUN_1421e17f0(lVar1);
  }
  return;
}



// FUNCTION 1421e2770 FUN_1421e2770 body=937 status=ok
// SIG undefined FUN_1421e2770(void)

undefined8 *
FUN_1421e2770(longlong param_1,undefined8 *param_2,void *param_3,int param_4,char param_5,
             longlong *param_6)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  void *_Dst;
  ulonglong _Size;
  int iVar7;
  longlong lVar8;
  longlong local_38 [2];
  
  if (*(char *)(param_1 + 0x240) != '\0') {
    *param_2 = param_3;
    *(int *)(param_2 + 1) = param_4;
    *(undefined1 *)((longlong)param_2 + 0xc) = 0;
    if (*param_6 != 0) {
      FMemory::Free();
    }
    return param_2;
  }
  (**(code **)(*(longlong *)(param_1 + 0x40) + 0x168))(param_1 + 0x40);
  iVar3 = *(int *)(param_1 + 0x1cc);
  if (iVar3 == 0) {
    FUN_1421e2e60(param_1);
    iVar3 = *(int *)(param_1 + 0x1cc);
  }
  if (iVar3 == 2) {
    (**(code **)(*(longlong *)(param_1 + 0x40) + 0x58))(param_1 + 0x40,param_3,(longlong)param_4);
    local_38[0] = 0;
    local_38[1] = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
    lVar8 = local_38[0];
    FGenericPlatformString::Memcpy(local_38[0],L"PrePacketHandler",0x22);
    if (lVar8 != 0) {
      FMemory::Free(lVar8);
    }
    iVar3 = *(int *)(param_1 + 0x1b0);
    iVar7 = 0;
    if (0 < iVar3) {
      lVar8 = 0;
      do {
        if (*(char *)(param_1 + 0x68) < '\0') break;
        plVar6 = *(longlong **)(lVar8 + *(longlong *)(param_1 + 0x1a8));
        cVar2 = (**(code **)(*plVar6 + 8))(plVar6);
        if (cVar2 != '\0') {
          if ((longlong)(ulonglong)*(uint *)((longlong)plVar6 + 0x14) <
              *(longlong *)(param_1 + 0xe0)) {
            *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) | 0x80;
            iVar3 = *(int *)(param_1 + 0x1b0);
            break;
          }
          lVar1 = *plVar6;
          if (param_5 == '\0') {
            (**(code **)(lVar1 + 0x20))(plVar6,param_1 + 0x40);
          }
          else {
            uVar4 = FString::FString(local_38,param_6);
            (**(code **)(lVar1 + 0x30))(plVar6,uVar4,param_1 + 0x40);
          }
        }
        iVar3 = *(int *)(param_1 + 0x1b0);
        iVar7 = iVar7 + 1;
        lVar8 = lVar8 + 0x10;
      } while (iVar7 < iVar3);
      if ((0 < iVar3) && (0 < *(longlong *)(param_1 + 0xe0))) {
        local_38[0] = 0;
        local_38[1] = 0x12;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
        lVar8 = local_38[0];
        FGenericPlatformString::Memcpy(local_38[0],L"PostPacketHandler",0x24);
        if (lVar8 != 0) {
          FMemory::Free(lVar8);
        }
        FBitWriter::WriteBit(param_1 + 0x40,1);
      }
    }
    if (((param_5 == '\0') && (*(longlong *)(param_1 + 0x230) != 0)) &&
       (0 < (longlong)*(ulonglong *)(param_1 + 0xe0))) {
      FUN_1421e03b0(*(longlong *)(param_1 + 0x230),*(undefined8 *)(param_1 + 0xd0),
                    *(ulonglong *)(param_1 + 0xe0) & 0xffffffff);
    }
  }
  else if ((iVar3 == 1) && (0 < param_4)) {
    puVar5 = (undefined8 *)operator_new(0x30);
    if (param_5 == '\0') {
      if (puVar5 == (undefined8 *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = BufferedPacket::BufferedPacket(puVar5,param_3,param_4,0,0);
      }
      iVar3 = *(int *)(param_1 + 0x1d8);
      *(int *)(param_1 + 0x1d8) = iVar3 + 1;
      if (*(int *)(param_1 + 0x1dc) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x1d0,iVar3);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x1d0) + (longlong)iVar3 * 8) = uVar4;
    }
    else {
      if (puVar5 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)0x0;
      }
      else {
        plVar6 = (longlong *)FString::FString(local_38,param_6);
        *(int *)(puVar5 + 1) = param_4;
        *(undefined8 *)((longlong)puVar5 + 0xc) = 0;
        puVar5[3] = 0;
        puVar5[4] = 0;
        _Size = (ulonglong)(param_4 + 7U >> 3);
        puVar5[5] = 0;
        _Dst = (void *)operator_new(_Size);
        *puVar5 = _Dst;
        _guard_xfg_dispatch_icall_nop(_Dst,param_3,_Size);
        FString::operator=(puVar5 + 3,plVar6);
        if (*plVar6 != 0) {
          FMemory::Free();
        }
      }
      iVar3 = *(int *)(param_1 + 0x218);
      *(int *)(param_1 + 0x218) = iVar3 + 1;
      if (*(int *)(param_1 + 0x21c) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x210,iVar3);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x210) + (longlong)iVar3 * 8) = puVar5;
    }
  }
  lVar8 = *param_6;
  if (*(char *)(param_1 + 0x68) < '\0') {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    *(undefined1 *)((longlong)param_2 + 0xc) = 1;
  }
  else {
    *param_2 = *(undefined8 *)(param_1 + 0xd0);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0xe0);
    *(undefined1 *)((longlong)param_2 + 0xc) = 0;
  }
  if (lVar8 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1421e2b20 FUN_1421e2b20 body=505 status=ok
// SIG undefined FUN_1421e2b20(void)

void FUN_1421e2b20(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong local_38 [2];
  
  if (((*(int *)(param_1 + 0x28) == 0) || (*(longlong **)(param_1 + 0x20) == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))(), cVar5 == '\0')) {
    LowLevelFatalErrorHandler
              ("D:\\Oak\\main\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Private\\PacketHandler.cpp"
               ,0x28c,L"Called SendHandlerPacket when no LowLevelSend delegate is bound");
    FDebug::AssertFailed
              (&DAT_144fedc7d,
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Private\\PacketHandler.cpp"
               ,0x28c,L"Called SendHandlerPacket when no LowLevelSend delegate is bound");
    return;
  }
  plVar8 = (longlong *)0x0;
  bVar4 = false;
  plVar7 = plVar8;
  plVar9 = plVar8;
  if (0 < *(int *)(param_1 + 0x1b0)) {
    do {
      if (*(char *)(param_3 + 0x28) < '\0') break;
      plVar2 = *(longlong **)((longlong)plVar9 + *(longlong *)(param_1 + 0x1a8));
      if (bVar4) {
        cVar5 = (**(code **)(*plVar2 + 8))(plVar2);
        if (cVar5 != '\0') {
          if ((longlong)(ulonglong)*(uint *)((longlong)plVar2 + 0x14) <
              *(longlong *)(param_3 + 0xa0)) {
            *(byte *)(param_3 + 0x28) = *(byte *)(param_3 + 0x28) | 0x80;
            break;
          }
          (**(code **)(*plVar2 + 0x20))(plVar2,param_3);
        }
      }
      else if (plVar2 == param_2) {
        bVar4 = true;
      }
      uVar6 = (int)plVar7 + 1;
      plVar7 = (longlong *)(ulonglong)uVar6;
      plVar9 = plVar9 + 2;
    } while ((int)uVar6 < *(int *)(param_1 + 0x1b0));
  }
  if ((-1 < *(char *)(param_3 + 0x28)) && (0 < *(longlong *)(param_3 + 0xa0))) {
    local_38[0] = 0;
    local_38[1] = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
    lVar3 = local_38[0];
    FGenericPlatformString::Memcpy(local_38[0],&DAT_144fee600,0x24);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
    FBitWriter::WriteBit(param_3,1);
    lVar3 = *(longlong *)(param_1 + 0x230);
    if (lVar3 != 0) {
      FUN_1421e03b0(lVar3,*(undefined8 *)(param_3 + 0x90),*(undefined4 *)(param_3 + 0xa0));
      *(longlong **)
       (*(longlong *)(*(longlong *)(lVar3 + 0x28) + -8 + (longlong)*(int *)(lVar3 + 0x30) * 8) +
       0x28) = param_2;
    }
    uVar1 = *(undefined1 *)(param_1 + 0x240);
    *(undefined1 *)(param_1 + 0x240) = 1;
    if (*(int *)(param_1 + 0x28) != 0) {
      plVar8 = *(longlong **)(param_1 + 0x20);
    }
    (**(code **)(*plVar8 + 0x38))
              (plVar8,*(undefined8 *)(param_3 + 0x90),
               (longlong)(*(ulonglong *)(param_3 + 0xa0) + 7) >> 3 & 0xffffffff,
               *(ulonglong *)(param_3 + 0xa0) & 0xffffffff);
    *(undefined1 *)(param_1 + 0x240) = uVar1;
  }
  return;
}



// FUNCTION 1421e2d20 SetActive body=4 status=ok
// SIG undefined SetActive(void)

void HandlerComponent::SetActive(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x1a) = param_2;
  return;
}



// FUNCTION 1421e2d30 FUN_1421e2d30 body=4 status=ok
// SIG undefined FUN_1421e2d30(void)

void FUN_1421e2d30(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// FUNCTION 1421e2d40 Tick body=276 status=ok
// SIG undefined Tick(void)

void PacketHandler::Tick(longlong param_1,float param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 local_d8 [144];
  longlong local_48;
  
  uVar5 = 0;
  *(float *)(param_1 + 0x14) = param_2 + *(float *)(param_1 + 0x14);
  uVar7 = uVar5;
  if (0 < *(int *)(param_1 + 0x1b0)) {
    do {
      plVar1 = *(longlong **)(uVar7 + *(longlong *)(param_1 + 0x1a8));
      (**(code **)(*plVar1 + 0x50))(plVar1,param_2);
      uVar6 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar6;
      uVar7 = uVar7 + 0x10;
    } while ((int)uVar6 < *(int *)(param_1 + 0x1b0));
  }
  while (lVar2 = **(longlong **)(param_1 + 0x208), lVar2 != 0) {
    puVar3 = *(undefined8 **)(lVar2 + 8);
    uVar4 = *(undefined8 *)(param_1 + 0x208);
    *(longlong *)(param_1 + 0x208) = lVar2;
    *(undefined8 *)(lVar2 + 8) = 0;
    FMemory::operator_delete(uVar4,0x10);
    FUN_141688470(local_d8);
    FBitWriter::SerializeBits(local_d8,*puVar3,*(undefined4 *)(puVar3 + 1));
    FUN_1421e2b20(param_1,puVar3[5],local_d8);
    if (local_48 != 0) {
      FMemory::Free();
    }
    FArchive::~FArchive(local_d8);
  }
  return;
}



// FUNCTION 1421e2e60 FUN_1421e2e60 body=327 status=ok
// SIG undefined FUN_1421e2e60(void)

void FUN_1421e2e60(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_18;
  longlong local_10;
  
  if (*(int *)(param_1 + 0x1cc) == 0) {
    if (*(int *)(param_1 + 0x1b0) < 1) {
      FUN_1421e17f0();
      return;
    }
    iVar3 = 0;
    lVar5 = 0;
    *(undefined4 *)(param_1 + 0x1cc) = 1;
    do {
      plVar1 = *(longlong **)(lVar5 + *(longlong *)(param_1 + 0x1a8));
      if (*(char *)((longlong)plVar1 + 0x1b) == '\0') {
        (**(code **)(*plVar1 + 0x40))(plVar1);
        local_18 = *(undefined8 *)(param_1 + 0x248);
        local_10 = *(longlong *)(param_1 + 0x250);
        if (local_10 != 0) {
          LOCK();
          *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
          UNLOCK();
        }
        (**(code **)(*plVar1 + 0x68))(plVar1,&local_18);
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0x1b0));
    iVar3 = *(int *)(param_1 + 0x1c8);
    iVar2 = *(int *)(param_1 + 0x1b0) + -1;
    lVar5 = (longlong)iVar2;
    if (-1 < iVar2) {
      lVar4 = lVar5 << 4;
      do {
        plVar1 = *(longlong **)(lVar4 + *(longlong *)(param_1 + 0x1a8));
        iVar2 = (**(code **)(*plVar1 + 0x60))(plVar1);
        if (iVar2 == -1) {
          LowLevelFatalErrorHandler
                    ("D:\\Oak\\main\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Private\\PacketHandler.cpp"
                     ,0x32c,L"Handler returned invalid \'GetReservedPacketBits\' value.");
          FDebug::AssertFailed
                    (&DAT_144fedcbc,
                     "D:\\Oak\\main\\Engine\\Source\\Runtime\\PacketHandlers\\PacketHandler\\Private\\PacketHandler.cpp"
                     ,0x32c,L"Handler returned invalid \'GetReservedPacketBits\' value.");
        }
        else {
          *(int *)((longlong)plVar1 + 0x14) = iVar3;
          iVar3 = iVar3 - iVar2;
        }
        lVar4 = lVar4 + -0x10;
        lVar5 = lVar5 + -1;
      } while (-1 < lVar5);
    }
  }
  return;
}



// FUNCTION 1421e2fb0 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UHandlerComponentFactory::GetPrivateStaticClass(void)

{
  if (DAT_146aeda78 == 0) {
    FUN_14171ccd0(L"/Script/PacketHandler",L"HandlerComponentFactory",&DAT_146aeda78,FUN_140447710,
                  0x28,0x10000000,0,L"Engine",&LAB_1421e30a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146aeda78;
}



// FUNCTION 1421e3050 FUN_1421e3050 body=47 status=ok
// SIG undefined FUN_1421e3050(void)

longlong FUN_1421e3050(void)

{
  if (DAT_146aeda88 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146aeda88,&PTR_s__Script_PacketHandler_144fef2f8);
  }
  return DAT_146aeda88;
}



// FUNCTION 1421e30c0 FUN_1421e30c0 body=47 status=ok
// SIG undefined FUN_1421e30c0(void)

longlong FUN_1421e30c0(void)

{
  if (DAT_146aeda70 == 0) {
    FUN_141786440(&DAT_146aeda70,&PTR_GetPrivateStaticClass_144fef170);
  }
  return DAT_146aeda70;
}



// FUNCTION 1421e3110 FUN_1421e3110 body=47 status=ok
// SIG undefined FUN_1421e3110(void)

longlong FUN_1421e3110(void)

{
  if (DAT_146aedac8 == 0) {
    UE4CodeGen_Private::ConstructUPackage
              (&DAT_146aedac8,&PTR_s__Script_AudioPlatformConfigurati_144fefc58);
  }
  return DAT_146aedac8;
}



// FUNCTION 1421e3140 FUN_1421e3140 body=53 status=ok
// SIG undefined FUN_1421e3140(void)

void FUN_1421e3140(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_144fefb40;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1421e3190 ESoundwaveSampleRateSettings_StaticEnum body=85 status=ok
// SIG undefined ESoundwaveSampleRateSettings_StaticEnum(void)

void ESoundwaveSampleRateSettings_StaticEnum(void)

{
  if (DAT_146aedaa0 == 0) {
    if (DAT_146aedac8 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146aedac8,&PTR_s__Script_AudioPlatformConfigurati_144fefc58);
    }
    DAT_146aedaa0 = GetStaticEnum(FUN_1421e3280,DAT_146aedac8,L"ESoundwaveSampleRateSettings");
  }
  return;
}



// FUNCTION 1421e31f0 Get_Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_CRC(void)

{
  return 0x79114803;
}



// FUNCTION 1421e3200 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FPlatformRuntimeAudioCompressionOverrides::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aedab8 == 0) {
    if (DAT_146aedac8 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146aedac8,&PTR_s__Script_AudioPlatformConfigurati_144fefc58);
    }
    lVar1 = DAT_146aedac8;
    uVar2 = Get_Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_CRC();
    DAT_146aedab8 =
         GetStaticStruct(FUN_1421e32b0,lVar1,L"PlatformRuntimeAudioCompressionOverrides",0x10,uVar2)
    ;
  }
  return;
}



// FUNCTION 1421e3280 FUN_1421e3280 body=47 status=ok
// SIG undefined FUN_1421e3280(void)

longlong FUN_1421e3280(void)

{
  if (DAT_146aedab0 == 0) {
    FUN_1417866a0(&DAT_146aedab0,&PTR_FUN_14652d4a0);
  }
  return DAT_146aedab0;
}



// FUNCTION 1421e32b0 FUN_1421e32b0 body=47 status=ok
// SIG undefined FUN_1421e32b0(void)

longlong FUN_1421e32b0(void)

{
  if (DAT_146aedac0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aedac0,&PTR_FUN_14652d5f0);
  }
  return DAT_146aedac0;
}



// FUNCTION 1421e32e0 FUN_1421e32e0 body=162 status=ok
// SIG undefined FUN_1421e32e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1421e32e0(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(int *)(param_1 + 0xc0) != *(int *)(param_1 + 0xec)) {
    lVar2 = *(longlong *)(param_1 + 0xf8);
    if (*(longlong *)(param_1 + 0xf8) == 0) {
      lVar2 = param_1 + 0xf0;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x100) - 1U) * 4);
    if (iVar1 != -1) {
      while (plVar3 = (longlong *)((longlong)iVar1 * 0x38 + *(longlong *)(param_1 + 0xb8)),
            *plVar3 != param_2) {
        iVar1 = (int)plVar3[6];
        if (iVar1 == -1) {
          return (longlong)param_3 * 0x10 + _DAT_00000010;
        }
      }
      if (iVar1 != -1) goto LAB_1421e3371;
    }
  }
  plVar3 = (longlong *)0x0;
LAB_1421e3371:
  return (longlong)param_3 * 0x10 + plVar3[2];
}



// FUNCTION 1421e3390 FUN_1421e3390 body=421 status=ok
// SIG undefined FUN_1421e3390(void)

longlong * FUN_1421e3390(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  int local_res8 [2];
  undefined8 *puVar9;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  puVar5 = (undefined8 *)0x0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar8 = (longlong *)param_1[1];
  if ((int *)plVar8[1] < (int *)*plVar8 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar8;
    *plVar8 = *plVar8 + 4;
  }
  iVar2 = local_res8[0];
  bVar1 = *(byte *)(param_1 + 5);
  if (((-1 < (char)bVar1) && (-1 < local_res8[0])) &&
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0x100001)))) {
    if ((bVar1 & 1) != 0) {
      plVar8 = (longlong *)*param_2;
      for (iVar6 = (int)param_2[1]; iVar6 != 0; iVar6 = iVar6 + -1) {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 2;
      }
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != iVar2) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,iVar2);
      }
      puVar9 = puVar5;
      if (0 < local_res8[0]) {
        do {
          iVar2 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar2 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
          }
          puVar3 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_2);
          puVar4 = puVar5;
          if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = 0;
            puVar3[1] = 0;
            puVar4 = puVar3;
          }
          FUN_140871d30(param_1,puVar4);
          uVar7 = (int)puVar9 + 1;
          puVar9 = (undefined8 *)(ulonglong)uVar7;
        } while ((int)uVar7 < local_res8[0]);
      }
      return param_1;
    }
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_140871d30(param_1,(longlong)(int)puVar5 * 0x10 + *param_2);
        uVar7 = (int)puVar5 + 1;
        puVar5 = (undefined8 *)(ulonglong)uVar7;
      } while ((int)uVar7 < (int)param_2[1]);
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar1 | 0x80;
  return param_1;
}



// FUNCTION 1421e3540 FUN_1421e3540 body=459 status=ok
// SIG undefined FUN_1421e3540(void)

longlong * FUN_1421e3540(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int local_res8 [2];
  undefined4 *puVar9;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0xc,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xc);
  puVar7 = (undefined4 *)0x0;
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
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0x155556)))) {
    if ((bVar3 & 1) == 0) {
      *(int *)(param_2 + 1) = local_res8[0];
      if (0 < local_res8[0]) {
        do {
          lVar2 = *param_2 + (longlong)(int)puVar7 * 0xc;
          FUN_140871cc0(param_1,lVar2);
          FUN_140871cc0(param_1,lVar2 + 4);
          FUN_140871cc0(param_1,lVar2 + 8);
          uVar8 = (int)puVar7 + 1;
          puVar7 = (undefined4 *)(ulonglong)uVar8;
        } while ((int)uVar8 < (int)param_2[1]);
      }
      return param_1;
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                (param_2,local_res8[0]);
    }
    puVar9 = puVar7;
    if (0 < local_res8[0]) {
      do {
        iVar4 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar4 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
        }
        puVar1 = (undefined4 *)(*param_2 + (longlong)iVar4 * 0xc);
        puVar6 = puVar7;
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = DAT_14652d640;
          puVar1[1] = DAT_14652d640;
          puVar1[2] = DAT_14652d640;
          puVar6 = puVar1;
        }
        FUN_140871cc0(param_1,puVar6);
        FUN_140871cc0(param_1,puVar6 + 1);
        FUN_140871cc0(param_1,puVar6 + 2);
        uVar8 = (int)puVar9 + 1;
        puVar9 = (undefined4 *)(ulonglong)uVar8;
      } while ((int)uVar8 < local_res8[0]);
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar3 | 0x80;
  return param_1;
}



// FUNCTION 1421e3710 FUN_1421e3710 body=373 status=ok
// SIG undefined FUN_1421e3710(void)

longlong * FUN_1421e3710(longlong *param_1,longlong *param_2)

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
        FUN_140d66f10(param_1,*param_2 + (longlong)iVar4 * 8);
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
        FUN_140d66f10(param_1,*param_2 + (longlong)iVar2 * 8);
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_res8[0]);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 1421e3890 FUN_1421e3890 body=522 status=ok
// SIG undefined FUN_1421e3890(void)

longlong * FUN_1421e3890(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int local_res8 [2];
  undefined8 *puVar5;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  puVar6 = (undefined8 *)0x0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar7 = (longlong *)param_1[1];
  if ((int *)plVar7[1] < (int *)*plVar7 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar7;
    *plVar7 = *plVar7 + 4;
  }
  iVar2 = local_res8[0];
  bVar1 = *(byte *)(param_1 + 5);
  if (((-1 < (char)bVar1) && (-1 < local_res8[0])) &&
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0x100001)))) {
    if ((bVar1 & 1) == 0) {
      *(int *)(param_2 + 1) = local_res8[0];
      if (0 < local_res8[0]) {
        do {
          lVar10 = (longlong)(int)puVar6 * 0x10 + *param_2;
          if (((*(byte *)(param_1 + 5) & 1) == 0) ||
             (iVar2 = FArchive::CustomVer(param_1,&DAT_1464af950), 0x10 < iVar2)) {
            FUN_141f115c0(lVar10,param_1,0);
          }
          else {
            FUN_1408bda20(param_1,lVar10);
          }
          uVar4 = (int)puVar6 + 1;
          puVar6 = (undefined8 *)(ulonglong)uVar4;
        } while ((int)uVar4 < (int)param_2[1]);
      }
      return param_1;
    }
    plVar7 = (longlong *)*param_2;
    for (iVar3 = (int)param_2[1]; iVar3 != 0; iVar3 = iVar3 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != iVar2) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,iVar2);
    }
    puVar5 = puVar6;
    if (0 < local_res8[0]) {
      do {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
        }
        puVar8 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_2);
        puVar9 = puVar6;
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar9 = puVar8;
        }
        if (((*(byte *)(param_1 + 5) & 1) == 0) ||
           (iVar2 = FArchive::CustomVer(param_1,&DAT_1464af950), 0x10 < iVar2)) {
          FUN_141f115c0(puVar9,param_1,0);
        }
        else {
          FUN_1408bda20(param_1,puVar9);
        }
        uVar4 = (int)puVar5 + 1;
        puVar5 = (undefined8 *)(ulonglong)uVar4;
      } while ((int)uVar4 < local_res8[0]);
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar1 | 0x80;
  return param_1;
}



// FUNCTION 1421e3aa0 FUN_1421e3aa0 body=522 status=ok
// SIG undefined FUN_1421e3aa0(void)

longlong * FUN_1421e3aa0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int local_res8 [2];
  undefined8 *puVar5;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  puVar6 = (undefined8 *)0x0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar7 = (longlong *)param_1[1];
  if ((int *)plVar7[1] < (int *)*plVar7 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar7;
    *plVar7 = *plVar7 + 4;
  }
  iVar2 = local_res8[0];
  bVar1 = *(byte *)(param_1 + 5);
  if (((-1 < (char)bVar1) && (-1 < local_res8[0])) &&
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0x100001)))) {
    if ((bVar1 & 1) == 0) {
      *(int *)(param_2 + 1) = local_res8[0];
      if (0 < local_res8[0]) {
        do {
          lVar10 = (longlong)(int)puVar6 * 0x10 + *param_2;
          if (((*(byte *)(param_1 + 5) & 1) == 0) ||
             (iVar2 = FArchive::CustomVer(param_1,&DAT_1464af950), 0x10 < iVar2)) {
            FUN_1421e8110(lVar10,param_1,0);
          }
          else {
            FUN_1421e3710(param_1,lVar10);
          }
          uVar4 = (int)puVar6 + 1;
          puVar6 = (undefined8 *)(ulonglong)uVar4;
        } while ((int)uVar4 < (int)param_2[1]);
      }
      return param_1;
    }
    plVar7 = (longlong *)*param_2;
    for (iVar3 = (int)param_2[1]; iVar3 != 0; iVar3 = iVar3 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != iVar2) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,iVar2);
    }
    puVar5 = puVar6;
    if (0 < local_res8[0]) {
      do {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
        }
        puVar8 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_2);
        puVar9 = puVar6;
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar9 = puVar8;
        }
        if (((*(byte *)(param_1 + 5) & 1) == 0) ||
           (iVar2 = FArchive::CustomVer(param_1,&DAT_1464af950), 0x10 < iVar2)) {
          FUN_1421e8110(puVar9,param_1,0);
        }
        else {
          FUN_1421e3710(param_1,puVar9);
        }
        uVar4 = (int)puVar5 + 1;
        puVar5 = (undefined8 *)(ulonglong)uVar4;
      } while ((int)uVar4 < local_res8[0]);
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar1 | 0x80;
  return param_1;
}



// FUNCTION 1421e3cb0 FUN_1421e3cb0 body=522 status=ok
// SIG undefined FUN_1421e3cb0(void)

longlong * FUN_1421e3cb0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int local_res8 [2];
  undefined8 *puVar5;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  puVar6 = (undefined8 *)0x0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar7 = (longlong *)param_1[1];
  if ((int *)plVar7[1] < (int *)*plVar7 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar7;
    *plVar7 = *plVar7 + 4;
  }
  iVar2 = local_res8[0];
  bVar1 = *(byte *)(param_1 + 5);
  if (((-1 < (char)bVar1) && (-1 < local_res8[0])) &&
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0x100001)))) {
    if ((bVar1 & 1) == 0) {
      *(int *)(param_2 + 1) = local_res8[0];
      if (0 < local_res8[0]) {
        do {
          lVar10 = (longlong)(int)puVar6 * 0x10 + *param_2;
          if (((*(byte *)(param_1 + 5) & 1) == 0) ||
             (iVar2 = FArchive::CustomVer(param_1,&DAT_1464af950), 0x10 < iVar2)) {
            FUN_141f02ea0(lVar10,param_1,0);
          }
          else {
            FUN_141efdc20(param_1,lVar10);
          }
          uVar4 = (int)puVar6 + 1;
          puVar6 = (undefined8 *)(ulonglong)uVar4;
        } while ((int)uVar4 < (int)param_2[1]);
      }
      return param_1;
    }
    plVar7 = (longlong *)*param_2;
    for (iVar3 = (int)param_2[1]; iVar3 != 0; iVar3 = iVar3 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != iVar2) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,iVar2);
    }
    puVar5 = puVar6;
    if (0 < local_res8[0]) {
      do {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
        }
        puVar8 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_2);
        puVar9 = puVar6;
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar9 = puVar8;
        }
        if (((*(byte *)(param_1 + 5) & 1) == 0) ||
           (iVar2 = FArchive::CustomVer(param_1,&DAT_1464af950), 0x10 < iVar2)) {
          FUN_141f02ea0(puVar9,param_1,0);
        }
        else {
          FUN_141efdc20(param_1,puVar9);
        }
        uVar4 = (int)puVar5 + 1;
        puVar5 = (undefined8 *)(ulonglong)uVar4;
      } while ((int)uVar4 < local_res8[0]);
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar1 | 0x80;
  return param_1;
}



// FUNCTION 1421e3ec0 FUN_1421e3ec0 body=522 status=ok
// SIG undefined FUN_1421e3ec0(void)

longlong * FUN_1421e3ec0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int local_res8 [2];
  undefined8 *puVar5;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  puVar6 = (undefined8 *)0x0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar7 = (longlong *)param_1[1];
  if ((int *)plVar7[1] < (int *)*plVar7 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar7;
    *plVar7 = *plVar7 + 4;
  }
  iVar2 = local_res8[0];
  bVar1 = *(byte *)(param_1 + 5);
  if (((-1 < (char)bVar1) && (-1 < local_res8[0])) &&
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0x100001)))) {
    if ((bVar1 & 1) == 0) {
      *(int *)(param_2 + 1) = local_res8[0];
      if (0 < local_res8[0]) {
        do {
          lVar10 = (longlong)(int)puVar6 * 0x10 + *param_2;
          if (((*(byte *)(param_1 + 5) & 1) == 0) ||
             (iVar2 = FArchive::CustomVer(param_1,&DAT_1464af950), 0x10 < iVar2)) {
            FUN_1421e8310(lVar10,param_1,0);
          }
          else {
            FUN_1408bddc0(param_1,lVar10);
          }
          uVar4 = (int)puVar6 + 1;
          puVar6 = (undefined8 *)(ulonglong)uVar4;
        } while ((int)uVar4 < (int)param_2[1]);
      }
      return param_1;
    }
    plVar7 = (longlong *)*param_2;
    for (iVar3 = (int)param_2[1]; iVar3 != 0; iVar3 = iVar3 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != iVar2) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,iVar2);
    }
    puVar5 = puVar6;
    if (0 < local_res8[0]) {
      do {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
        }
        puVar8 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_2);
        puVar9 = puVar6;
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar9 = puVar8;
        }
        if (((*(byte *)(param_1 + 5) & 1) == 0) ||
           (iVar2 = FArchive::CustomVer(param_1,&DAT_1464af950), 0x10 < iVar2)) {
          FUN_1421e8310(puVar9,param_1,0);
        }
        else {
          FUN_1408bddc0(param_1,puVar9);
        }
        uVar4 = (int)puVar5 + 1;
        puVar5 = (undefined8 *)(ulonglong)uVar4;
      } while ((int)uVar4 < local_res8[0]);
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar1 | 0x80;
  return param_1;
}



// FUNCTION 1421e40d0 FUN_1421e40d0 body=421 status=ok
// SIG undefined FUN_1421e40d0(void)

longlong * FUN_1421e40d0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  int local_res8 [2];
  undefined8 *puVar9;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  puVar5 = (undefined8 *)0x0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar8 = (longlong *)param_1[1];
  if ((int *)plVar8[1] < (int *)*plVar8 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar8;
    *plVar8 = *plVar8 + 4;
  }
  iVar2 = local_res8[0];
  bVar1 = *(byte *)(param_1 + 5);
  if (((-1 < (char)bVar1) && (-1 < local_res8[0])) &&
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0x100001)))) {
    if ((bVar1 & 1) != 0) {
      plVar8 = (longlong *)*param_2;
      for (iVar6 = (int)param_2[1]; iVar6 != 0; iVar6 = iVar6 + -1) {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 2;
      }
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != iVar2) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,iVar2);
      }
      puVar9 = puVar5;
      if (0 < local_res8[0]) {
        do {
          iVar2 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar2 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
          }
          puVar3 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_2);
          puVar4 = puVar5;
          if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = 0;
            puVar3[1] = 0;
            puVar4 = puVar3;
          }
          FUN_14172b230(param_1,puVar4);
          uVar7 = (int)puVar9 + 1;
          puVar9 = (undefined8 *)(ulonglong)uVar7;
        } while ((int)uVar7 < local_res8[0]);
      }
      return param_1;
    }
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_14172b230(param_1,(longlong)(int)puVar5 * 0x10 + *param_2);
        uVar7 = (int)puVar5 + 1;
        puVar5 = (undefined8 *)(ulonglong)uVar7;
      } while ((int)uVar7 < (int)param_2[1]);
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar1 | 0x80;
  return param_1;
}



// FUNCTION 1421e4280 FUN_1421e4280 body=522 status=ok
// SIG undefined FUN_1421e4280(void)

longlong * FUN_1421e4280(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int local_res8 [2];
  undefined8 *puVar5;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  puVar6 = (undefined8 *)0x0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar7 = (longlong *)param_1[1];
  if ((int *)plVar7[1] < (int *)*plVar7 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar7;
    *plVar7 = *plVar7 + 4;
  }
  iVar2 = local_res8[0];
  bVar1 = *(byte *)(param_1 + 5);
  if (((-1 < (char)bVar1) && (-1 < local_res8[0])) &&
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0x100001)))) {
    if ((bVar1 & 1) == 0) {
      *(int *)(param_2 + 1) = local_res8[0];
      if (0 < local_res8[0]) {
        do {
          lVar10 = (longlong)(int)puVar6 * 0x10 + *param_2;
          if (((*(byte *)(param_1 + 5) & 1) == 0) ||
             (iVar2 = FArchive::CustomVer(param_1,&DAT_1464af950), 0x10 < iVar2)) {
            FUN_141ef6e70(lVar10,param_1,0);
          }
          else {
            FUN_140d25120(param_1,lVar10);
          }
          uVar4 = (int)puVar6 + 1;
          puVar6 = (undefined8 *)(ulonglong)uVar4;
        } while ((int)uVar4 < (int)param_2[1]);
      }
      return param_1;
    }
    plVar7 = (longlong *)*param_2;
    for (iVar3 = (int)param_2[1]; iVar3 != 0; iVar3 = iVar3 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != iVar2) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,iVar2);
    }
    puVar5 = puVar6;
    if (0 < local_res8[0]) {
      do {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
        }
        puVar8 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_2);
        puVar9 = puVar6;
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar9 = puVar8;
        }
        if (((*(byte *)(param_1 + 5) & 1) == 0) ||
           (iVar2 = FArchive::CustomVer(param_1,&DAT_1464af950), 0x10 < iVar2)) {
          FUN_141ef6e70(puVar9,param_1,0);
        }
        else {
          FUN_140d25120(param_1,puVar9);
        }
        uVar4 = (int)puVar5 + 1;
        puVar5 = (undefined8 *)(ulonglong)uVar4;
      } while ((int)uVar4 < local_res8[0]);
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar1 | 0x80;
  return param_1;
}



// FUNCTION 1421e4490 FUN_1421e4490 body=288 status=ok
// SIG undefined FUN_1421e4490(void)

longlong * FUN_1421e4490(longlong *param_1,undefined4 *param_2)

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
  FUN_1421e3890(param_1,param_2 + 2);
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
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_1[1])[1]) {
    param_2[7] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2 + 7,4);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,param_2 + 7,4);
  }
  return param_1;
}



// FUNCTION 1421e45b0 FUN_1421e45b0 body=210 status=ok
// SIG undefined FUN_1421e45b0(void)

longlong * FUN_1421e45b0(longlong *param_1,undefined4 *param_2)

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
  FUN_1421e3aa0(param_1,param_2 + 2);
  FUN_140d66f10(param_1,param_2 + 6);
  puVar1 = *(undefined4 **)param_1[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_1[1])[1]) {
    param_2[8] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2 + 8,4);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,param_2 + 8,4);
  }
  return param_1;
}



// FUNCTION 1421e4690 FUN_1421e4690 body=210 status=ok
// SIG undefined FUN_1421e4690(void)

longlong * FUN_1421e4690(longlong *param_1,undefined4 *param_2)

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
  FUN_1421e3cb0(param_1,param_2 + 2);
  FUN_140da9f70(param_1,param_2 + 8);
  puVar1 = *(undefined4 **)param_1[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_1[1])[1]) {
    param_2[0xc] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0xc,4);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,param_2 + 0xc,4);
  }
  return param_1;
}



// FUNCTION 1421e4770 FUN_1421e4770 body=210 status=ok
// SIG undefined FUN_1421e4770(void)

longlong * FUN_1421e4770(longlong *param_1,undefined4 *param_2)

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
  FUN_1421e3ec0(param_1,param_2 + 2);
  FUN_1406da970(param_1,param_2 + 6);
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



// FUNCTION 1421e4850 FUN_1421e4850 body=211 status=ok
// SIG undefined FUN_1421e4850(void)

longlong * FUN_1421e4850(longlong *param_1,undefined4 *param_2)

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
  FUN_1421e40d0(param_1,param_2 + 2);
  (**(code **)(*param_1 + 0x40))(param_1,param_2 + 6);
  puVar1 = *(undefined4 **)param_1[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_1[1])[1]) {
    param_2[8] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2 + 8,4);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,param_2 + 8,4);
  }
  return param_1;
}



// FUNCTION 1421e4930 FUN_1421e4930 body=211 status=ok
// SIG undefined FUN_1421e4930(void)

longlong * FUN_1421e4930(longlong *param_1,undefined4 *param_2)

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
  FUN_1421e4280(param_1,param_2 + 2);
  (**(code **)(*param_1 + 8))(param_1,param_2 + 6);
  puVar1 = *(undefined4 **)param_1[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_1[1])[1]) {
    param_2[7] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2 + 7,4);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,param_2 + 7,4);
  }
  return param_1;
}



// FUNCTION 1421e4a10 FUN_1421e4a10 body=1001 status=ok
// SIG undefined FUN_1421e4a10(void)

longlong * FUN_1421e4a10(longlong *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int local_res8 [2];
  
  local_res8[0] = 7;
  plVar1 = (longlong *)param_1[1];
  if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  iVar3 = local_res8[0];
  uVar5 = 0;
  if (local_res8[0] < 1) {
    FUN_1421ea530(param_2,0);
  }
  else {
    puVar4 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,param_2,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,param_2,4);
      }
      operator<<(param_1,param_2 + 2);
      uVar5 = *param_2;
    }
    else {
      *param_2 = *puVar4;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      operator<<(param_1,param_2 + 2);
      uVar5 = *param_2;
    }
  }
  if (iVar3 < 2) {
    FUN_1421ea790(param_2 + 0x16,uVar5);
  }
  else {
    puVar4 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x16,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,param_2 + 0x16,4);
      }
      operator<<(param_1,param_2 + 0x18);
      uVar5 = param_2[0x16];
    }
    else {
      param_2[0x16] = *puVar4;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      operator<<(param_1,param_2 + 0x18);
      uVar5 = param_2[0x16];
    }
  }
  puVar4 = param_2 + 0x2c;
  if (iVar3 < 3) {
    FUN_1421ea2d0(puVar4,uVar5);
  }
  else {
    puVar2 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,puVar4,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,puVar4,4);
      }
      operator<<(param_1,param_2 + 0x2e);
      uVar5 = *puVar4;
    }
    else {
      *puVar4 = *puVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      operator<<(param_1,param_2 + 0x2e);
      uVar5 = *puVar4;
    }
  }
  puVar4 = param_2 + 0x42;
  if (iVar3 < 4) {
    FUN_1421ea070(puVar4,uVar5);
  }
  else {
    puVar2 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,puVar4,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,puVar4,4);
      }
      operator<<(param_1,param_2 + 0x44);
      uVar5 = *puVar4;
    }
    else {
      *puVar4 = *puVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      operator<<(param_1,param_2 + 0x44);
      uVar5 = *puVar4;
    }
  }
  puVar4 = param_2 + 0x58;
  if (iVar3 < 5) {
    FUN_1421e9e10(puVar4,uVar5);
  }
  else {
    puVar2 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,puVar4,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,puVar4,4);
      }
      operator<<(param_1,param_2 + 0x5a);
      uVar5 = *puVar4;
    }
    else {
      *puVar4 = *puVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      operator<<(param_1,param_2 + 0x5a);
      uVar5 = *puVar4;
    }
  }
  puVar4 = param_2 + 0x6e;
  if (iVar3 < 6) {
    FUN_1421eac50(puVar4,uVar5);
  }
  else {
    puVar2 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,puVar4,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,puVar4,4);
      }
      operator<<(param_1,param_2 + 0x70);
      uVar5 = *puVar4;
    }
    else {
      *puVar4 = *puVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      operator<<(param_1,param_2 + 0x70);
      uVar5 = *puVar4;
    }
  }
  puVar4 = param_2 + 0x84;
  if (iVar3 < 7) {
    FUN_1421ea9f0(puVar4,uVar5);
  }
  else {
    puVar2 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,puVar4,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,puVar4,4);
      }
      operator<<(param_1,param_2 + 0x86);
    }
    else {
      *puVar4 = *puVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      operator<<(param_1,param_2 + 0x86);
    }
  }
  return param_1;
}



// FUNCTION 1421e4e00 FUN_1421e4e00 body=956 status=ok
// SIG undefined FUN_1421e4e00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1421e4e00(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong **pplVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  longlong **pplVar12;
  uint uVar13;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [16];
  uint local_a8;
  uint local_a4;
  longlong **local_a0;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  int iStack_8c;
  longlong *local_88;
  undefined1 local_80 [4];
  uint local_7c;
  longlong **local_78;
  undefined8 local_70;
  undefined4 local_60;
  undefined4 uStack_5c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
  iVar3 = *(int *)((longlong)param_2 + 0x2c) + 0x1f;
  iVar4 = (int)param_2[5] + 0x1f;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) << 2);
  puVar9 = (uint *)0x0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    uVar13 = *(uint *)(param_2 + 1);
    local_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    iStack_8c = 0;
    uVar5 = (int)(uVar13 + 0x1f + ((int)(uVar13 + 0x1f) >> 0x1f & 0x1fU)) >> 5;
    puVar11 = puVar9;
    if ((uVar5 & 0x7ffffff) != 0) {
      iStack_8c = uVar5 << 5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_a8);
      puVar11 = (uint *)CONCAT44(uStack_94,local_98);
    }
    if (uVar13 != 0) {
      puVar8 = &local_a8;
      if (puVar11 != (uint *)0x0) {
        puVar8 = puVar9;
      }
      uStack_90 = uVar13;
      _guard_xfg_dispatch_icall_nop
                ((void *)((ulonglong)puVar8 | (ulonglong)puVar11),0,(longlong)(int)uVar5 << 2);
      puVar11 = (uint *)CONCAT44(uStack_94,local_98);
    }
    if (0 < (int)uVar13) {
      uVar5 = 1;
      do {
        plVar7 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar7 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar7 + ((ulonglong)puVar9 >> 5) * 4) & uVar5) != 0) {
          puVar8 = &local_a8;
          if (puVar11 != (uint *)0x0) {
            puVar8 = puVar11;
          }
          puVar8[(ulonglong)puVar9 >> 5] = puVar8[(ulonglong)puVar9 >> 5] | uVar5;
          puVar11 = (uint *)CONCAT44(uStack_94,local_98);
        }
        uVar10 = (int)puVar9 + 1;
        puVar9 = (uint *)(ulonglong)uVar10;
        uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
      } while ((int)uVar10 < (int)uVar13);
    }
    FUN_140871eb0(param_1,&local_a8);
    TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
              (&local_88,param_2);
    if (local_70._4_4_ < (int)*(uint *)(local_78 + 3)) {
      do {
        lVar6 = *local_88 + (longlong)local_70._4_4_ * 0x18;
        FUN_140871cc0(param_1,lVar6);
        FUN_140871cc0(param_1,lVar6 + 4);
        if (((*(byte *)(param_1 + 5) & 1) != 0) &&
           (iVar3 = FArchive::CustomVer(param_1,&DAT_1464af950), iVar3 < 0x11)) {
          FUN_140871d30(param_1,lVar6 + 8);
        }
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_7c);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_80);
      } while (local_70._4_4_ < (int)*(uint *)(local_78 + 3));
    }
    pplVar2 = (longlong **)CONCAT44(uStack_94,local_98);
  }
  else {
    local_78 = (longlong **)0x0;
    local_70 = 0;
    FUN_140871eb0(param_1,&local_88);
    TSparseArray<FRenderingPolygon,FDefaultSparseArrayAllocator>::Empty
              (param_2,local_70 & 0xffffffff);
    local_a8 = 0;
    local_a0 = &local_88;
    local_a4 = 1;
    uStack_94 = 0;
    uStack_90 = 0;
    pplVar2 = local_78;
    if ((uint)local_70 != 0) {
      pplVar12 = &local_88;
      if (local_78 != (longlong **)0x0) {
        pplVar12 = local_78;
      }
      uVar13 = *(uint *)pplVar12;
      puVar11 = puVar9;
      while (uVar13 == 0) {
        iVar3 = (int)puVar9;
        uStack_90 = (int)puVar11 + 0x20;
        puVar11 = (uint *)(ulonglong)uStack_90;
        puVar9 = (uint *)(ulonglong)(iVar3 + 1U);
        local_a8 = iVar3 + 1U;
        if ((int)((uint)local_70 + -1 + ((int)((uint)local_70 + -1) >> 0x1f & 0x1fU)) >> 5 <= iVar3)
        goto joined_r0x0001421e5194;
        uVar13 = *(uint *)((longlong)pplVar12 + ((longlong)iVar3 + 1) * 4);
      }
      local_a4 = uVar13 - 1 & uVar13 ^ uVar13;
      iVar3 = 0x1f;
      if (local_a4 != 0) {
        for (; local_a4 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      if (local_a4 == 0) {
        iVar3 = 0x20;
      }
      else {
        iVar3 = 0x1f - iVar3;
      }
      uStack_94 = (uStack_90 - iVar3) + 0x1f;
      puVar9 = (uint *)(ulonglong)uStack_94;
      if ((int)(uint)local_70 < (int)uStack_94) goto joined_r0x0001421e5194;
    }
    uVar13 = 0xffffffff;
    if ((int)puVar9 < (int)(uint)local_70) {
      do {
        uVar5 = local_a4;
        local_60 = DAT_14652d63c;
        uStack_5c = DAT_14652d63c;
        lVar6 = FUN_14088e510(param_2,local_b8,puVar9);
        puVar1 = *(undefined8 **)(lVar6 + 8);
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = CONCAT44(uStack_5c,local_60);
          puVar1[1] = 0;
          puVar1[2] = 0;
        }
        lVar6 = *param_2 + (longlong)(int)puVar9 * 0x18;
        FUN_140871cc0(param_1,lVar6);
        FUN_140871cc0(param_1,lVar6 + 4);
        if (((*(byte *)(param_1 + 5) & 1) != 0) &&
           (iVar3 = FArchive::CustomVer(param_1,&DAT_1464af950), iVar3 < 0x11)) {
          FUN_140871d30(param_1,lVar6 + 8);
        }
        local_98 = uVar13 & ~uVar5;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_a8);
        puVar9 = (uint *)(ulonglong)uStack_94;
        uVar13 = local_98;
        pplVar2 = local_78;
      } while ((int)uStack_94 < *(int *)(local_a0 + 3));
    }
  }
joined_r0x0001421e5194:
  if (pplVar2 != (longlong **)0x0) {
    FMemory::Free(pplVar2);
  }
  return param_1;
}



// FUNCTION 1421e51c0 FUN_1421e51c0 body=1076 status=ok
// SIG undefined FUN_1421e51c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1421e51c0(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong **pplVar6;
  uint *puVar7;
  longlong *plVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  longlong **pplVar13;
  undefined1 auStack_108 [32];
  uint local_e8;
  uint *local_e0;
  undefined8 local_d8;
  uint *local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  longlong *local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  longlong **local_88;
  undefined8 local_80;
  uint local_78;
  int iStack_74;
  longlong *local_70;
  undefined1 local_68 [4];
  uint local_64;
  longlong **local_60;
  undefined8 local_58;
  ulonglong local_48;
  uint *puVar12;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_a8 = param_2;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x38,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x38);
  iVar2 = *(int *)((longlong)param_2 + 0x2c) + 0x1f;
  iVar3 = (int)param_2[5] + 0x1f;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) << 2);
  puVar12 = (uint *)0x0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    uVar1 = *(uint *)(param_2 + 1);
    local_80 = (longlong **)0x0;
    local_78 = 0;
    iStack_74 = 0;
    uVar4 = (int)(uVar1 + 0x1f + ((int)(uVar1 + 0x1f) >> 0x1f & 0x1fU)) >> 5;
    if ((uVar4 & 0x7ffffff) != 0) {
      local_78 = 0;
      iStack_74 = uVar4 << 5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_90);
    }
    if (uVar1 != 0) {
      puVar7 = (uint *)&local_90;
      if (local_80 != (longlong **)0x0) {
        puVar7 = puVar12;
      }
      local_78 = uVar1;
      _guard_xfg_dispatch_icall_nop
                ((void *)((ulonglong)puVar7 | (ulonglong)local_80),0,(longlong)(int)uVar4 << 2);
    }
    if (0 < (int)uVar1) {
      uVar4 = 1;
      pplVar13 = local_80;
      do {
        plVar8 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar8 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar8 + ((ulonglong)puVar12 >> 5) * 4) & uVar4) != 0) {
          pplVar6 = (longlong **)&local_90;
          if (pplVar13 != (longlong **)0x0) {
            pplVar6 = pplVar13;
          }
          puVar7 = (uint *)((longlong)pplVar6 + ((ulonglong)puVar12 >> 5) * 4);
          *puVar7 = *puVar7 | uVar4;
          pplVar13 = local_80;
        }
        uVar10 = (int)puVar12 + 1;
        puVar12 = (uint *)(ulonglong)uVar10;
        uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      } while ((int)uVar10 < (int)uVar1);
    }
    FUN_140871eb0(param_1,&local_90);
    TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
              (&local_70,param_2);
    pplVar13 = local_80;
    if (local_58._4_4_ < (int)*(uint *)(local_60 + 3)) {
      do {
        lVar5 = (longlong)local_58._4_4_ * 0x38 + *local_70;
        FUN_140871d30(param_1,lVar5);
        FUN_1421e3390(param_1,lVar5 + 0x10);
        if (((*(byte *)(param_1 + 5) & 1) != 0) &&
           (iVar2 = FArchive::CustomVer(param_1,&DAT_1464af950), iVar2 < 0x11)) {
          FUN_1421e3540(param_1,lVar5 + 0x20);
        }
        FUN_140871cc0(param_1,lVar5 + 0x30);
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_64);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_68);
        pplVar13 = local_80;
      } while (local_58._4_4_ < (int)*(uint *)(local_60 + 3));
    }
  }
  else {
    local_60 = (longlong **)0x0;
    local_58 = 0;
    FUN_140871eb0(param_1,&local_70);
    TSparseArray<FMeshPolygon,FDefaultSparseArrayAllocator>::Empty(param_2,local_58 & 0xffffffff);
    uVar1 = (uint)local_80;
    local_88 = &local_70;
    local_90._0_4_ = 0;
    local_90._4_4_ = 1;
    local_80 = (longlong **)(ulonglong)(uint)local_80;
    local_78 = 0;
    puVar7 = puVar12;
    pplVar13 = local_60;
    if ((uint)local_58 != 0) {
      pplVar6 = &local_70;
      if (local_60 != (longlong **)0x0) {
        pplVar6 = local_60;
      }
      uVar4 = *(uint *)pplVar6;
      puVar11 = puVar12;
      while (uVar4 == 0) {
        local_e8 = 0xffffffff;
        iVar2 = (int)puVar7;
        local_78 = (int)puVar11 + 0x20;
        puVar11 = (uint *)(ulonglong)local_78;
        puVar7 = (uint *)(ulonglong)(iVar2 + 1U);
        local_90._0_4_ = iVar2 + 1U;
        if ((int)((uint)local_58 + -1 + ((int)((uint)local_58 + -1) >> 0x1f & 0x1fU)) >> 5 <= iVar2)
        goto joined_r0x0001421e55cc;
        uVar4 = *(uint *)((longlong)pplVar6 + ((longlong)iVar2 + 1) * 4);
      }
      local_e8 = 0xffffffff;
      local_90._4_4_ = uVar4 - 1 & uVar4 ^ uVar4;
      iVar2 = 0x1f;
      if (local_90._4_4_ != 0) {
        for (; local_90._4_4_ >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      if (local_90._4_4_ == 0) {
        iVar2 = 0x20;
      }
      else {
        iVar2 = 0x1f - iVar2;
      }
      uVar4 = (local_78 - iVar2) + 0x1f;
      puVar7 = (uint *)(ulonglong)uVar4;
      local_80 = (longlong **)CONCAT44(uVar4,uVar1);
      if ((int)(uint)local_58 < (int)uVar4) goto joined_r0x0001421e55cc;
    }
    local_e8 = 0xffffffff;
    if ((int)puVar7 < (int)(uint)local_58) {
      while( true ) {
        uVar1 = local_90._4_4_;
        local_e0 = (uint *)0x0;
        local_d8 = 0;
        local_d0 = (uint *)0x0;
        local_c8 = 0;
        local_c0 = 0;
        local_b8 = 0;
        local_b0 = DAT_14652d648;
        lVar5 = FUN_14088e710(param_2,local_a0,puVar7);
        puVar7 = puVar12;
        puVar11 = puVar12;
        if ((*(longlong *)(lVar5 + 8) != 0) &&
           (FMeshPolygon::FMeshPolygon(*(longlong *)(lVar5 + 8),&local_e0), puVar7 = local_d0,
           puVar11 = local_e0, local_c0 != 0)) {
          FMemory::Free();
          puVar7 = local_d0;
          puVar11 = local_e0;
        }
        puVar9 = puVar7;
        for (iVar2 = (int)local_c8; iVar2 != 0; iVar2 = iVar2 + -1) {
          if (*(longlong *)puVar9 != 0) {
            FMemory::Free();
          }
          puVar9 = puVar9 + 4;
        }
        if (puVar7 != (uint *)0x0) {
          FMemory::Free(puVar7);
        }
        if (puVar11 != (uint *)0x0) {
          FMemory::Free(puVar11);
        }
        param_2 = local_a8;
        lVar5 = (longlong)(int)local_80._4_4_ * 0x38 + *local_a8;
        FUN_140871d30(param_1,lVar5);
        FUN_1421e3390(param_1,lVar5 + 0x10);
        if (((*(byte *)(param_1 + 5) & 1) != 0) &&
           (iVar2 = FArchive::CustomVer(param_1,&DAT_1464af950), iVar2 < 0x11)) {
          FUN_1421e3540(param_1,lVar5 + 0x20);
        }
        FUN_140871cc0(param_1,lVar5 + 0x30);
        local_80 = (longlong **)CONCAT44(local_80._4_4_,local_e8 & ~uVar1);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_90);
        puVar7 = (uint *)(ulonglong)local_80._4_4_;
        pplVar13 = local_60;
        if (*(int *)(local_88 + 3) <= (int)local_80._4_4_) break;
        local_e8 = (uint)local_80;
      }
    }
  }
joined_r0x0001421e55cc:
  if (pplVar13 != (longlong **)0x0) {
    FMemory::Free(pplVar13);
  }
  return param_1;
}



// FUNCTION 1421e5600 FUN_1421e5600 body=864 status=ok
// SIG undefined FUN_1421e5600(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1421e5600(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong **pplVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  uint *puVar8;
  longlong *plVar9;
  uint uVar10;
  uint *puVar11;
  longlong **pplVar12;
  uint uVar13;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [16];
  uint local_88;
  uint local_84;
  longlong **local_80;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  int iStack_6c;
  longlong *local_68;
  undefined1 local_60 [4];
  uint local_5c;
  longlong **local_58;
  undefined8 local_50;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  iVar3 = *(int *)((longlong)param_2 + 0x2c) + 0x1f;
  iVar4 = (int)param_2[5] + 0x1f;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) << 2);
  puVar8 = (uint *)0x0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    uVar13 = *(uint *)(param_2 + 1);
    local_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    iStack_6c = 0;
    uVar5 = (int)(uVar13 + 0x1f + ((int)(uVar13 + 0x1f) >> 0x1f & 0x1fU)) >> 5;
    puVar11 = puVar8;
    if ((uVar5 & 0x7ffffff) != 0) {
      iStack_6c = uVar5 << 5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_88);
      puVar11 = (uint *)CONCAT44(uStack_74,local_78);
    }
    if (uVar13 != 0) {
      puVar7 = &local_88;
      if (puVar11 != (uint *)0x0) {
        puVar7 = puVar8;
      }
      uStack_70 = uVar13;
      _guard_xfg_dispatch_icall_nop
                ((void *)((ulonglong)puVar7 | (ulonglong)puVar11),0,(longlong)(int)uVar5 << 2);
      puVar11 = (uint *)CONCAT44(uStack_74,local_78);
    }
    if (0 < (int)uVar13) {
      uVar5 = 1;
      do {
        plVar9 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar9 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar9 + ((ulonglong)puVar8 >> 5) * 4) & uVar5) != 0) {
          puVar7 = &local_88;
          if (puVar11 != (uint *)0x0) {
            puVar7 = puVar11;
          }
          puVar7[(ulonglong)puVar8 >> 5] = puVar7[(ulonglong)puVar8 >> 5] | uVar5;
          puVar11 = (uint *)CONCAT44(uStack_74,local_78);
        }
        uVar10 = (int)puVar8 + 1;
        puVar8 = (uint *)(ulonglong)uVar10;
        uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
      } while ((int)uVar10 < (int)uVar13);
    }
    FUN_140871eb0(param_1,&local_88);
    TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
              (&local_68,param_2);
    iVar3 = local_50._4_4_;
    if (local_50._4_4_ < (int)*(uint *)(local_58 + 3)) {
      do {
        lVar6 = *local_68;
        if (((*(byte *)(param_1 + 5) & 1) != 0) &&
           (iVar4 = FArchive::CustomVer(param_1,&DAT_1464af950), iVar4 < 0x11)) {
          FUN_140871d30(param_1,(longlong)iVar3 * 0x10 + lVar6);
        }
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_5c);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_60);
        iVar3 = local_50._4_4_;
      } while (local_50._4_4_ < (int)*(uint *)(local_58 + 3));
    }
    pplVar2 = (longlong **)CONCAT44(uStack_74,local_78);
  }
  else {
    local_58 = (longlong **)0x0;
    local_50 = 0;
    FUN_140871eb0(param_1,&local_68);
    TSparseArray<FMeshPolygonGroup,FDefaultSparseArrayAllocator>::Empty
              (param_2,local_50 & 0xffffffff);
    local_88 = 0;
    local_80 = &local_68;
    local_84 = 1;
    uStack_74 = 0;
    uStack_70 = 0;
    pplVar2 = local_58;
    if ((uint)local_50 != 0) {
      pplVar12 = &local_68;
      if (local_58 != (longlong **)0x0) {
        pplVar12 = local_58;
      }
      uVar13 = *(uint *)pplVar12;
      puVar11 = puVar8;
      while (uVar13 == 0) {
        iVar3 = (int)puVar8;
        uStack_70 = (int)puVar11 + 0x20;
        puVar11 = (uint *)(ulonglong)uStack_70;
        puVar8 = (uint *)(ulonglong)(iVar3 + 1U);
        local_88 = iVar3 + 1U;
        if ((int)((uint)local_50 + -1 + ((int)((uint)local_50 + -1) >> 0x1f & 0x1fU)) >> 5 <= iVar3)
        goto joined_r0x0001421e5938;
        uVar13 = *(uint *)((longlong)pplVar12 + ((longlong)iVar3 + 1) * 4);
      }
      local_84 = uVar13 - 1 & uVar13 ^ uVar13;
      iVar3 = 0x1f;
      if (local_84 != 0) {
        for (; local_84 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      if (local_84 == 0) {
        iVar3 = 0x20;
      }
      else {
        iVar3 = 0x1f - iVar3;
      }
      uStack_74 = (uStack_70 - iVar3) + 0x1f;
      puVar8 = (uint *)(ulonglong)uStack_74;
      if ((int)(uint)local_50 < (int)uStack_74) goto joined_r0x0001421e5938;
    }
    uVar13 = 0xffffffff;
    if ((int)puVar8 < (int)(uint)local_50) {
      do {
        uVar5 = local_84;
        lVar6 = FUN_14088e900(param_2,local_98,puVar8);
        puVar1 = *(undefined8 **)(lVar6 + 8);
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        lVar6 = *param_2;
        if (((*(byte *)(param_1 + 5) & 1) != 0) &&
           (iVar3 = FArchive::CustomVer(param_1,&DAT_1464af950), iVar3 < 0x11)) {
          FUN_140871d30(param_1,(longlong)(int)puVar8 * 0x10 + lVar6);
        }
        local_78 = uVar13 & ~uVar5;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_88);
        puVar8 = (uint *)(ulonglong)uStack_74;
        uVar13 = local_78;
        pplVar2 = local_58;
      } while ((int)uStack_74 < *(int *)(local_80 + 3));
    }
  }
joined_r0x0001421e5938:
  if (pplVar2 != (longlong **)0x0) {
    FMemory::Free(pplVar2);
  }
  return param_1;
}



// FUNCTION 1421e5960 FUN_1421e5960 body=939 status=ok
// SIG undefined FUN_1421e5960(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1421e5960(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  uint *puVar6;
  longlong *plVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined1 local_90 [16];
  uint local_80;
  uint local_7c;
  uint *local_78;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  int iStack_64;
  uint local_60 [4];
  uint *local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 5,(longlong)*(int *)((longlong)param_2 + 0xc) << 5
            );
  iVar1 = *(int *)((longlong)param_2 + 0x2c) + 0x1f;
  iVar2 = (int)param_2[5] + 0x1f;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) << 2);
  puVar6 = (uint *)0x0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    uVar11 = *(uint *)(param_2 + 1);
    local_70 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    iStack_64 = 0;
    uVar3 = (int)(uVar11 + 0x1f + ((int)(uVar11 + 0x1f) >> 0x1f & 0x1fU)) >> 5;
    puVar10 = puVar6;
    if ((uVar3 & 0x7ffffff) != 0) {
      iStack_64 = uVar3 << 5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_80);
      puVar10 = (uint *)CONCAT44(uStack_6c,local_70);
    }
    if (uVar11 != 0) {
      puVar5 = &local_80;
      if (puVar10 != (uint *)0x0) {
        puVar5 = puVar6;
      }
      uStack_68 = uVar11;
      _guard_xfg_dispatch_icall_nop
                ((void *)((ulonglong)puVar5 | (ulonglong)puVar10),0,(longlong)(int)uVar3 << 2);
      puVar10 = (uint *)CONCAT44(uStack_6c,local_70);
    }
    if (0 < (int)uVar11) {
      uVar3 = 1;
      do {
        plVar7 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar7 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar7 + ((ulonglong)puVar6 >> 5) * 4) & uVar3) != 0) {
          puVar5 = &local_80;
          if (puVar10 != (uint *)0x0) {
            puVar5 = puVar10;
          }
          puVar5[(ulonglong)puVar6 >> 5] = puVar5[(ulonglong)puVar6 >> 5] | uVar3;
          puVar10 = (uint *)CONCAT44(uStack_6c,local_70);
        }
        uVar8 = (int)puVar6 + 1;
        puVar6 = (uint *)(ulonglong)uVar8;
        uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
      } while ((int)uVar8 < (int)uVar11);
    }
    FUN_140871eb0(param_1,&local_80);
    TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
              (&local_b8,param_2);
    if (local_a0._4_4_ < *(int *)(local_a8 + 0x18)) {
      do {
        lVar4 = (longlong)local_a0._4_4_ * 0x20 + *local_b8;
        if (((*(byte *)(param_1 + 5) & 1) != 0) &&
           (iVar1 = FArchive::CustomVer(param_1,&DAT_1464af950), iVar1 < 0x11)) {
          FUN_140871d30(param_1,lVar4);
          FUN_140871d30(param_1,lVar4 + 0x10);
        }
        local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0 & ~local_b0._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b0);
      } while (local_a0._4_4_ < *(int *)(local_a8 + 0x18));
    }
    puVar10 = (uint *)CONCAT44(uStack_6c,local_70);
  }
  else {
    local_50 = (uint *)0x0;
    local_48 = 0;
    FUN_140871eb0(param_1,local_60);
    TSparseArray<FMeshVertex,FDefaultSparseArrayAllocator>::Empty(param_2,local_48 & 0xffffffff);
    local_80 = 0;
    local_78 = local_60;
    local_7c = 1;
    uStack_6c = 0;
    uStack_68 = 0;
    puVar10 = local_50;
    if ((int)local_48 != 0) {
      puVar5 = local_60;
      if (local_50 != (uint *)0x0) {
        puVar5 = local_50;
      }
      uVar11 = *puVar5;
      puVar9 = puVar6;
      while (uVar11 == 0) {
        iVar1 = (int)puVar6;
        uStack_68 = (int)puVar9 + 0x20;
        puVar9 = (uint *)(ulonglong)uStack_68;
        puVar6 = (uint *)(ulonglong)(iVar1 + 1U);
        local_80 = iVar1 + 1U;
        if ((int)((int)local_48 + -1 + ((int)local_48 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar1)
        goto joined_r0x0001421e5ce3;
        uVar11 = puVar5[(longlong)iVar1 + 1];
      }
      local_7c = uVar11 - 1 & uVar11 ^ uVar11;
      iVar1 = 0x1f;
      if (local_7c != 0) {
        for (; local_7c >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      if (local_7c == 0) {
        iVar1 = 0x20;
      }
      else {
        iVar1 = 0x1f - iVar1;
      }
      uStack_6c = (uStack_68 - iVar1) + 0x1f;
      puVar6 = (uint *)(ulonglong)uStack_6c;
      if ((int)local_48 < (int)uStack_6c) goto joined_r0x0001421e5ce3;
    }
    uVar11 = 0xffffffff;
    if ((int)puVar6 < (int)local_48) {
      do {
        uVar3 = local_7c;
        local_b8 = (longlong *)0x0;
        local_b0 = 0;
        local_a8 = 0;
        local_a0 = 0;
        lVar4 = FUN_14088ecf0(param_2,local_90,puVar6);
        if (*(longlong *)(lVar4 + 8) != 0) {
          FUN_140870120(*(longlong *)(lVar4 + 8),&local_b8);
          if (local_a8 != 0) {
            FMemory::Free();
          }
          if (local_b8 != (longlong *)0x0) {
            FMemory::Free();
          }
        }
        lVar4 = (longlong)(int)puVar6 * 0x20 + *param_2;
        if (((*(byte *)(param_1 + 5) & 1) != 0) &&
           (iVar1 = FArchive::CustomVer(param_1,&DAT_1464af950), iVar1 < 0x11)) {
          FUN_140871d30(param_1,lVar4);
          FUN_140871d30(param_1,lVar4 + 0x10);
        }
        local_70 = uVar11 & ~uVar3;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_80);
        puVar6 = (uint *)(ulonglong)uStack_6c;
        uVar11 = local_70;
        puVar10 = local_50;
      } while ((int)uStack_6c < (int)local_78[6]);
    }
  }
joined_r0x0001421e5ce3:
  if (puVar10 != (uint *)0x0) {
    FMemory::Free(puVar10);
  }
  return param_1;
}



// FUNCTION 1421e5d10 FUN_1421e5d10 body=911 status=ok
// SIG undefined FUN_1421e5d10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1421e5d10(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong **pplVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  uint *puVar9;
  longlong *plVar10;
  uint uVar11;
  uint *puVar12;
  longlong **pplVar13;
  uint uVar14;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [16];
  uint local_88;
  uint local_84;
  longlong **local_80;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  int iStack_6c;
  longlong *local_68;
  undefined1 local_60 [4];
  uint local_5c;
  longlong **local_58;
  undefined8 local_50;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
  iVar4 = *(int *)((longlong)param_2 + 0x2c) + 0x1f;
  iVar5 = (int)param_2[5] + 0x1f;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) << 2);
  puVar9 = (uint *)0x0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    uVar14 = *(uint *)(param_2 + 1);
    local_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    iStack_6c = 0;
    uVar6 = (int)(uVar14 + 0x1f + ((int)(uVar14 + 0x1f) >> 0x1f & 0x1fU)) >> 5;
    puVar12 = puVar9;
    if ((uVar6 & 0x7ffffff) != 0) {
      iStack_6c = uVar6 << 5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_88);
      puVar12 = (uint *)CONCAT44(uStack_74,local_78);
    }
    if (uVar14 != 0) {
      puVar8 = &local_88;
      if (puVar12 != (uint *)0x0) {
        puVar8 = puVar9;
      }
      uStack_70 = uVar14;
      _guard_xfg_dispatch_icall_nop
                ((void *)((ulonglong)puVar8 | (ulonglong)puVar12),0,(longlong)(int)uVar6 << 2);
      puVar12 = (uint *)CONCAT44(uStack_74,local_78);
    }
    if (0 < (int)uVar14) {
      uVar6 = 1;
      do {
        plVar10 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar10 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar10 + ((ulonglong)puVar9 >> 5) * 4) & uVar6) != 0) {
          puVar8 = &local_88;
          if (puVar12 != (uint *)0x0) {
            puVar8 = puVar12;
          }
          puVar8[(ulonglong)puVar9 >> 5] = puVar8[(ulonglong)puVar9 >> 5] | uVar6;
          puVar12 = (uint *)CONCAT44(uStack_74,local_78);
        }
        uVar11 = (int)puVar9 + 1;
        puVar9 = (uint *)(ulonglong)uVar11;
        uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
      } while ((int)uVar11 < (int)uVar14);
    }
    FUN_140871eb0(param_1,&local_88);
    TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
              (&local_68,param_2);
    if (local_50._4_4_ < (int)*(uint *)(local_58 + 3)) {
      do {
        lVar7 = *local_68 + (longlong)local_50._4_4_ * 0x18;
        FUN_140871cc0(param_1,lVar7);
        if (((*(byte *)(param_1 + 5) & 1) != 0) &&
           (iVar4 = FArchive::CustomVer(param_1,&DAT_1464af950), iVar4 < 0x11)) {
          FUN_140871d30(param_1,lVar7 + 8);
        }
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_5c);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_60);
      } while (local_50._4_4_ < (int)*(uint *)(local_58 + 3));
    }
    pplVar2 = (longlong **)CONCAT44(uStack_74,local_78);
  }
  else {
    local_58 = (longlong **)0x0;
    local_50 = 0;
    FUN_140871eb0(param_1,&local_68);
    TSparseArray<FRenderingPolygon,FDefaultSparseArrayAllocator>::Empty
              (param_2,local_50 & 0xffffffff);
    local_88 = 0;
    local_80 = &local_68;
    local_84 = 1;
    uStack_74 = 0;
    uStack_70 = 0;
    pplVar2 = local_58;
    if ((uint)local_50 != 0) {
      pplVar13 = &local_68;
      if (local_58 != (longlong **)0x0) {
        pplVar13 = local_58;
      }
      uVar14 = *(uint *)pplVar13;
      puVar12 = puVar9;
      while (uVar14 == 0) {
        iVar4 = (int)puVar9;
        uStack_70 = (int)puVar12 + 0x20;
        puVar12 = (uint *)(ulonglong)uStack_70;
        puVar9 = (uint *)(ulonglong)(iVar4 + 1U);
        local_88 = iVar4 + 1U;
        if ((int)((uint)local_50 + -1 + ((int)((uint)local_50 + -1) >> 0x1f & 0x1fU)) >> 5 <= iVar4)
        goto joined_r0x0001421e6077;
        uVar14 = *(uint *)((longlong)pplVar13 + ((longlong)iVar4 + 1) * 4);
      }
      local_84 = uVar14 - 1 & uVar14 ^ uVar14;
      iVar4 = 0x1f;
      if (local_84 != 0) {
        for (; local_84 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (local_84 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_74 = (uStack_70 - iVar4) + 0x1f;
      puVar9 = (uint *)(ulonglong)uStack_74;
      if ((int)(uint)local_50 < (int)uStack_74) goto joined_r0x0001421e6077;
    }
    uVar14 = 0xffffffff;
    if ((int)puVar9 < (int)(uint)local_50) {
      do {
        uVar6 = local_84;
        uVar3 = DAT_14652d63c;
        lVar7 = FUN_14088e510(param_2,local_98,puVar9);
        puVar1 = *(undefined4 **)(lVar7 + 8);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = uVar3;
          *(undefined8 *)(puVar1 + 2) = 0;
          *(undefined8 *)(puVar1 + 4) = 0;
        }
        lVar7 = *param_2 + (longlong)(int)puVar9 * 0x18;
        FUN_140871cc0(param_1,lVar7);
        if (((*(byte *)(param_1 + 5) & 1) != 0) &&
           (iVar4 = FArchive::CustomVer(param_1,&DAT_1464af950), iVar4 < 0x11)) {
          FUN_140871d30(param_1,lVar7 + 8);
        }
        local_78 = uVar14 & ~uVar6;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_88);
        puVar9 = (uint *)(ulonglong)uStack_74;
        uVar14 = local_78;
        pplVar2 = local_58;
      } while ((int)uStack_74 < *(int *)(local_80 + 3));
    }
  }
joined_r0x0001421e6077:
  if (pplVar2 != (longlong **)0x0) {
    FMemory::Free(pplVar2);
  }
  return param_1;
}



// FUNCTION 1421e60a0 operator<< body=194 status=ok
// SIG undefined operator<<(void)

longlong operator<<(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  
  FUN_1421e6580();
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      uVar3 = FMemory::Realloc(*(longlong *)(param_2 + 0x40),0,0);
      *(undefined8 *)(param_2 + 0x40) = uVar3;
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar5 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    if (uVar5 < 4) {
      iVar2 = 1;
    }
    else {
      uVar1 = (uVar5 >> 1) + 8;
      iVar2 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar4 = 0x20;
      if (uVar1 != 0) {
        iVar4 = 0x1f - iVar2;
      }
      uVar1 = (uVar5 >> 1) + 7;
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
    if (0 < (int)uVar5) {
      *(int *)(param_2 + 0x48) = iVar2;
      TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
      ::Rehash(param_2);
    }
  }
  return param_1;
}



// FUNCTION 1421e6170 operator<< body=194 status=ok
// SIG undefined operator<<(void)

longlong operator<<(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  
  FUN_1421e6850();
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      uVar3 = FMemory::Realloc(*(longlong *)(param_2 + 0x40),0,0);
      *(undefined8 *)(param_2 + 0x40) = uVar3;
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar5 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    if (uVar5 < 4) {
      iVar2 = 1;
    }
    else {
      uVar1 = (uVar5 >> 1) + 8;
      iVar2 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar4 = 0x20;
      if (uVar1 != 0) {
        iVar4 = 0x1f - iVar2;
      }
      uVar1 = (uVar5 >> 1) + 7;
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
    if (0 < (int)uVar5) {
      *(int *)(param_2 + 0x48) = iVar2;
      TSet<TTuple<FName,FSlateColor>,TDefaultMapHashableKeyFuncs<FName,FSlateColor,0>,FDefaultSetAllocator>
      ::Rehash(param_2);
    }
  }
  return param_1;
}



// FUNCTION 1421e6240 operator<< body=194 status=ok
// SIG undefined operator<<(void)

longlong operator<<(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  
  FUN_1421e6b10();
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      uVar3 = FMemory::Realloc(*(longlong *)(param_2 + 0x40),0,0);
      *(undefined8 *)(param_2 + 0x40) = uVar3;
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar5 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    if (uVar5 < 4) {
      iVar2 = 1;
    }
    else {
      uVar1 = (uVar5 >> 1) + 8;
      iVar2 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar4 = 0x20;
      if (uVar1 != 0) {
        iVar4 = 0x1f - iVar2;
      }
      uVar1 = (uVar5 >> 1) + 7;
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
    if (0 < (int)uVar5) {
      *(int *)(param_2 + 0x48) = iVar2;
      TSet<TTuple<FName,TMeshAttributeArraySet<FVector4>_>,TDefaultMapHashableKeyFuncs<FName,TMeshAttributeArraySet<FVector4>,0>,FDefaultSetAllocator>
      ::Rehash(param_2);
    }
  }
  return param_1;
}



// FUNCTION 1421e6310 operator<< body=194 status=ok
// SIG undefined operator<<(void)

longlong operator<<(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  
  FUN_1421e6e00();
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      uVar3 = FMemory::Realloc(*(longlong *)(param_2 + 0x40),0,0);
      *(undefined8 *)(param_2 + 0x40) = uVar3;
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar5 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    if (uVar5 < 4) {
      iVar2 = 1;
    }
    else {
      uVar1 = (uVar5 >> 1) + 8;
      iVar2 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar4 = 0x20;
      if (uVar1 != 0) {
        iVar4 = 0x1f - iVar2;
      }
      uVar1 = (uVar5 >> 1) + 7;
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
    if (0 < (int)uVar5) {
      *(int *)(param_2 + 0x48) = iVar2;
      TSet<TTuple<FName,FSlateColor>,TDefaultMapHashableKeyFuncs<FName,FSlateColor,0>,FDefaultSetAllocator>
      ::Rehash(param_2);
    }
  }
  return param_1;
}


