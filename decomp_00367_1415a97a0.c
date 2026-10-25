// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1415a97a0 GetEngineMode body=26 status=ok
// SIG undefined GetEngineMode(void)

wchar_t * FGenericPlatformMisc::GetEngineMode(void)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"Commandlet";
  if (DAT_1468b616c == '\0') {
    pwVar1 = L"Game";
  }
  return pwVar1;
}



// FUNCTION 1415a97c0 FUN_1415a97c0 body=157 status=ok
// SIG undefined FUN_1415a97c0(void)

undefined8 FUN_1415a97c0(undefined8 param_1,char param_2)

{
  BOOL BVar1;
  longlong lVar2;
  
  if (DAT_1468b02d8 == 0) {
    FUN_14159fa40();
    return param_1;
  }
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0c08);
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0c08);
  }
  if (param_2 == '\0') {
    lVar2 = *(longlong *)
             (*(longlong *)(DAT_1468b02d8 + 0x460) + -8 +
             (longlong)*(int *)(DAT_1468b02d8 + 0x468) * 8);
  }
  else {
    lVar2 = DAT_1468b02d8 + 0x240;
  }
  FUN_14159f990(param_1,lVar2);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0c08);
  return param_1;
}



// FUNCTION 1415a9860 GetHashedMacAddressString body=650 status=ok
// SIG undefined GetHashedMacAddressString(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FGenericPlatformMisc::GetHashedMacAddressString(longlong *param_1)

{
  void *pvVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined1 auStack_198 [32];
  undefined2 *local_178;
  uint local_170;
  uint local_16c;
  void *local_168;
  int local_160;
  longlong local_158;
  int local_150;
  undefined1 local_148 [96];
  undefined1 local_e8 [128];
  longlong local_68;
  undefined8 local_60;
  longlong *local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  local_48[0] = param_1;
  FWindowsPlatformMisc::GetMacAddress(&local_158);
  puVar3 = (undefined2 *)0x0;
  local_178 = (undefined2 *)0x0;
  local_16c = 0;
  puVar10 = puVar3;
  puVar8 = puVar3;
  puVar11 = puVar3;
  while( true ) {
    plVar2 = local_48[0];
    iVar6 = (int)puVar3;
    iVar9 = (int)puVar10;
    if ((iVar6 < 0) || (local_150 <= iVar6)) break;
    FString::PrintfImpl(&local_168,L"%02x",*(undefined1 *)(iVar6 + local_158));
    pvVar1 = local_168;
    if (local_160 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = local_160 + -1;
    }
    if (iVar4 != 0) {
      local_170 = iVar9 + (uint)(iVar9 == 0) + iVar4;
      if ((int)puVar8 < (int)local_170) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,puVar10);
        puVar8 = (undefined2 *)(ulonglong)local_16c;
        puVar11 = local_178;
      }
      puVar10 = (undefined2 *)(ulonglong)local_170;
      ::_guard_xfg_dispatch_icall_nop
                (puVar11 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)),pvVar1,(longlong)iVar4 * 2);
      (puVar11 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)))[iVar4] = 0;
    }
    if (local_168 != (void *)0x0) {
      FMemory::Free(local_168);
    }
    puVar3 = (undefined2 *)(ulonglong)(iVar6 + 1);
  }
  if (local_158 != 0) {
    FMemory::Free();
  }
  puVar10 = local_178;
  puVar8 = &DAT_143f3eda8;
  if (iVar9 != 0) {
    puVar8 = local_178;
  }
  FMD5::FMD5(local_148);
  uVar5 = 0xffffffffffffffff;
  do {
    uVar5 = uVar5 + 1;
  } while (puVar8[uVar5] != 0);
  TStringConversion<TStringConvert<wchar_t,char>,128>::
  TStringConversion<TStringConvert<wchar_t,char>,128>(local_e8,puVar8);
  FMD5::Update(local_148,local_60,uVar5 & 0xffffffff);
  if (local_68 != 0) {
    FMemory::Free();
  }
  FMD5::Final(local_148,local_48);
  lVar7 = 0;
  *plVar2 = 0;
  plVar2[1] = 0;
  do {
    FString::PrintfImpl(&local_178,L"%02x",*(undefined1 *)((longlong)local_48 + lVar7));
    puVar8 = local_178;
    iVar6 = 0;
    if (local_170 != 0) {
      iVar6 = local_170 - 1;
    }
    if (iVar6 != 0) {
      iVar9 = (int)plVar2[1];
      iVar4 = (uint)(iVar9 == 0) + iVar9 + iVar6;
      *(int *)(plVar2 + 1) = iVar4;
      if (*(int *)((longlong)plVar2 + 0xc) < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar2,iVar9);
      }
      pvVar1 = (void *)(*plVar2 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(pvVar1,puVar8,(longlong)iVar6 * 2);
      *(undefined2 *)((longlong)iVar6 * 2 + (longlong)pvVar1) = 0;
    }
    if (local_178 != (undefined2 *)0x0) {
      FMemory::Free(local_178);
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 < 0x10);
  AK::MemoryMgr::StartProfileThreadUsage((long)local_148);
  if (puVar10 != (undefined2 *)0x0) {
    FMemory::Free(puVar10);
  }
  return plVar2;
}



// FUNCTION 1415a9af0 FUN_1415a9af0 body=123 status=ok
// SIG undefined FUN_1415a9af0(void)

undefined * FUN_1415a9af0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b12e0) {
    _Init_thread_header(&DAT_1468b12e0);
    if (DAT_1468b12e0 == -1) {
      FUN_1415a0910(&DAT_1468b11e0);
      atexit(FUN_143e762d0);
      _Init_thread_footer(&DAT_1468b12e0);
      return &DAT_1468b11e0;
    }
  }
  return &DAT_1468b11e0;
}



// FUNCTION 1415a9b70 FUN_1415a9b70 body=351 status=ok
// SIG undefined FUN_1415a9b70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415a9b70(void)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468b1324) && (_Init_thread_header(&DAT_1468b1324), DAT_1468b1324 == -1))
  {
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_1464a8c90);
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_1464a8c90,4000);
    DAT_1464a8cb8 = 0;
    _DAT_1464a8cc0 = 0;
    if (DAT_1464a8c88 != '\0') {
      plVar2 = (longlong *)FMemory::Realloc(0,0x30,0);
      if (plVar2 != (longlong *)0x0) {
        plVar2[1] = (longlong)&DAT_1464a8c70;
        *plVar2 = (longlong)&PTR_GetPoolName_144ca0b48;
        plVar2[2] = (longlong)FUN_1415af1d0;
        lVar3 = FDelegateHandle::GenerateNewID();
        plVar2[4] = lVar3;
        *plVar2 = (longlong)&PTR_GetPoolName_144ca0b90;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464a8c70,1);
        (**(code **)(*plVar2 + 0x20))(plVar2,local_res8);
        iVar1 = DAT_1464a8c78;
        lVar3 = (longlong)DAT_1464a8c78;
        DAT_1464a8c78 = DAT_1464a8c78 + 1;
        if (DAT_1464a8c7c < DAT_1464a8c78) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464a8c70,iVar1);
        }
        puVar4 = (undefined8 *)(lVar3 * 0x10 + _DAT_1464a8c70);
        *puVar4 = plVar2;
        *(undefined4 *)(puVar4 + 1) = 3;
      }
    }
    atexit(FUN_143e760c0);
    _Init_thread_footer(&DAT_1468b1324);
    return &DAT_1464a8c70;
  }
  return &DAT_1464a8c70;
}



// FUNCTION 1415a9cd0 FUN_1415a9cd0 body=114 status=ok
// SIG undefined FUN_1415a9cd0(void)

ulonglong FUN_1415a9cd0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  uVar4 = uVar3;
  while( true ) {
    param_1 = param_1 + 4;
    if (*param_1 == 0) {
      return 0xffffffff;
    }
    if (*(int *)(param_2 + 1) == 0) {
      puVar2 = &DAT_143f3eda8;
    }
    else {
      puVar2 = (undefined2 *)*param_2;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar2);
    if (iVar1 == 0) break;
    uVar4 = (ulonglong)((int)uVar4 + 1);
    uVar3 = uVar3 + 1;
    if (0x17 < (longlong)uVar3) {
      return 0xffffffff;
    }
  }
  return uVar4;
}



// FUNCTION 1415a9d50 FUN_1415a9d50 body=243 status=ok
// SIG undefined FUN_1415a9d50(void)

undefined8 * FUN_1415a9d50(longlong param_1,undefined8 *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  longlong lVar8;
  
  iVar4 = *(int *)(param_1 + 0x20);
  if (iVar4 == 0) {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    return param_2;
  }
  pfVar5 = *(float **)(param_1 + 0x18);
  if (*pfVar5 <= param_3 && param_3 != *pfVar5) {
    lVar8 = (longlong)(*(int *)(param_1 + 0x10) + 1);
    pfVar6 = pfVar5;
    if (pfVar5 < pfVar5 + (iVar4 - lVar8)) {
      pfVar7 = pfVar5 + lVar8;
    }
    else {
      pfVar7 = (float *)0x0;
    }
    while ((pfVar7 != (float *)0x0 && (pfVar7 < pfVar5 + iVar4))) {
      fVar1 = *pfVar7;
      if (param_3 <= fVar1) {
        fVar2 = *pfVar6;
        fVar3 = *pfVar6;
        *param_2 = pfVar7;
        *(float *)(param_2 + 1) = (param_3 - fVar2) / (fVar1 - fVar3);
        return param_2;
      }
      pfVar6 = pfVar7;
      if ((pfVar7 < pfVar5) || (pfVar5 + (*(int *)(param_1 + 0x20) - lVar8) <= pfVar7)) {
        pfVar7 = (float *)0x0;
      }
      else {
        pfVar7 = pfVar7 + lVar8;
      }
    }
    *param_2 = pfVar6;
    *(undefined4 *)(param_2 + 1) = 0x3f800000;
    return param_2;
  }
  *param_2 = pfVar5;
  *(undefined4 *)(param_2 + 1) = 0x3f800000;
  return param_2;
}



// FUNCTION 1415a9e50 FUN_1415a9e50 body=166 status=ok
// SIG undefined FUN_1415a9e50(void)

int FUN_1415a9e50(longlong *param_1,float param_2,char param_3)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  longlong lVar4;
  
  if ((param_3 != '\0') && ((longlong *)*param_1 != (longlong *)0x0)) {
    param_1 = (longlong *)*param_1;
  }
  if ((int)param_1[4] == 0) {
    return -1;
  }
  iVar3 = 0;
  pfVar1 = (float *)param_1[3];
  pfVar2 = pfVar1;
  if (pfVar1 != (float *)0x0) {
    while (pfVar2 < pfVar1 + (int)param_1[4]) {
      if (param_2 < *pfVar2 || param_2 == *pfVar2) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      if (((pfVar2 < pfVar1) ||
          (lVar4 = (longlong)((int)param_1[2] + 1), pfVar1 + ((int)param_1[4] - lVar4) <= pfVar2))
         || (pfVar2 = pfVar2 + lVar4, pfVar2 == (float *)0x0)) break;
    }
  }
  return iVar3 + -1;
}



// FUNCTION 1415a9f00 FUN_1415a9f00 body=104 status=ok
// SIG undefined FUN_1415a9f00(void)

undefined8 FUN_1415a9f00(undefined8 param_1)

{
  BOOL BVar1;
  
  if (DAT_1468b02d8 == 0) {
    FUN_14159fa40();
    return param_1;
  }
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0c08);
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0c08);
  }
  FUN_14159f990(param_1,DAT_1468b02d8 + 0x20);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0c08);
  return param_1;
}



// FUNCTION 1415a9f70 GetLoginId body=108 status=ok
// SIG undefined GetLoginId(void)

undefined8 * FGenericPlatformMisc::GetLoginId(undefined8 *param_1)

{
  undefined8 uVar1;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  longlong local_18 [2];
  
  GetMachineId(&local_28);
  if (((local_28 == 0 && local_24 == 0) && local_20 == 0) && local_1c == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return param_1;
  }
  uVar1 = FUN_141682af0(&local_28,local_18,0);
  FString::ToLower(uVar1,param_1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1415a9fe0 GetMachineId body=785 status=ok
// SIG undefined GetMachineId(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FGenericPlatformMisc::GetMachineId(undefined4 *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong local_58;
  longlong local_50;
  wchar_t *local_48;
  undefined8 local_40;
  wchar_t *local_38;
  undefined8 local_30;
  wchar_t *local_28;
  undefined8 uStack_20;
  
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  local_58 = 0;
  local_50 = 0;
  if (((DAT_1468b14d4 == 0 && _DAT_1468b14d0 == 0) && _DAT_1468b14cc == 0) && _DAT_1468b14c8 == 0) {
    local_28 = (wchar_t *)0x0;
    uStack_20 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    builtin_wcsncpy(local_28,L"MachineId",10);
    local_38 = (wchar_t *)0x0;
    local_30 = 0x1a;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    builtin_wcsncpy(local_38,L"Unreal Engine/Identifiers",0x1a);
    local_48 = (wchar_t *)0x0;
    local_40 = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    builtin_wcsncpy(local_48,L"Epic Games",0xb);
    cVar8 = FWindowsPlatformMisc::GetStoredValue(&local_48,&local_38,&local_28,&local_58);
    bVar3 = true;
    bVar2 = true;
    bVar1 = true;
    if (cVar8 != '\0') {
      cVar8 = FUN_141678c50(&local_58,&DAT_1468b14c8);
      if (cVar8 != '\0') goto LAB_1415aa108;
    }
    bVar4 = true;
  }
  else {
LAB_1415aa108:
    bVar4 = false;
  }
  if (bVar1) {
    if (local_48 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  if (bVar2) {
    if (local_38 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  if ((bVar3) && (local_28 != (wchar_t *)0x0)) {
    FMemory::Free();
  }
  if (bVar4) {
    puVar9 = (undefined8 *)FGuid::NewGuid(&local_28);
    _DAT_1468b14c8 = *puVar9;
    _DAT_1468b14d0 = puVar9[1];
    plVar10 = (longlong *)FUN_141682af0(&DAT_1468b14c8,&local_28,0);
    if (&local_58 != plVar10) {
      if (local_58 != 0) {
        FMemory::Free();
      }
      local_58 = *plVar10;
      *plVar10 = 0;
      local_50 = plVar10[1];
      plVar10[1] = 0;
    }
    if (local_28 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    local_48 = (wchar_t *)0x0;
    local_40 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    builtin_wcsncpy(local_48,L"MachineId",10);
    local_38 = (wchar_t *)0x0;
    local_30 = 0x1a;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    builtin_wcsncpy(local_38,L"Unreal Engine/Identifiers",0x1a);
    local_28 = (wchar_t *)0x0;
    uStack_20 = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    builtin_wcsncpy(local_28,L"Epic Games",0xb);
    cVar8 = FWindowsPlatformMisc::SetStoredValue(&local_28,&local_38,&local_48,&local_58);
    if (local_28 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    if (local_38 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    if (local_48 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    if (cVar8 == '\0') {
      local_28 = (wchar_t *)0x0;
      uStack_20 = 0;
      _DAT_1468b14c8 = 0;
      _DAT_1468b14d0 = 0;
    }
  }
  uVar5 = _DAT_1468b14cc;
  uVar6 = _DAT_1468b14d0;
  uVar7 = DAT_1468b14d4;
  *param_1 = _DAT_1468b14c8;
  param_1[1] = uVar5;
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  if (local_58 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1415aa300 FUN_1415aa300 body=568 status=ok
// SIG undefined FUN_1415aa300(void)

/* WARNING: Type propagation algorithm not settling */

int FUN_1415aa300(void)

{
  char cVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  int local_b8;
  int local_b4 [3];
  longlong local_a8 [6];
  longlong local_78;
  
  if (DAT_1468b1438 != '\0') {
    return DAT_1464a8d40;
  }
  DAT_1468b1438 = 1;
  local_b8 = 0;
  local_res20[0] = 0;
  local_res18[0] = 0;
  local_res8[0] = 0;
  local_res10[0] = 0;
  local_b4[1] = 0;
  FConfigCacheIni::GetInt
            (DAT_1468b6148,L"PlatformMemoryBuckets",L"LargestMemoryBucket_MinGB",&local_b8,
             &DAT_1468e2360);
  FConfigCacheIni::GetInt
            (DAT_1468b6148,L"PlatformMemoryBuckets",L"LargerMemoryBucket_MinGB",local_res20,
             &DAT_1468e2360);
  FConfigCacheIni::GetInt
            (DAT_1468b6148,L"PlatformMemoryBuckets",L"DefaultMemoryBucket_MinGB",local_res18,
             &DAT_1468e2360);
  FConfigCacheIni::GetInt
            (DAT_1468b6148,L"PlatformMemoryBuckets",L"SmallerMemoryBucket_MinGB",local_res8,
             &DAT_1468e2360);
  FConfigCacheIni::GetInt
            (DAT_1468b6148,L"PlatformMemoryBuckets",L"SmallestMemoryBucket_MinGB",local_res10,
             &DAT_1468e2360);
  FConfigCacheIni::GetInt
            (DAT_1468b6148,L"PlatformMemoryBuckets",L"TiniestMemoryBucket_MinGB",local_b4 + 1,
             &DAT_1468e2360);
  FUN_1416a13c0(local_a8);
  uVar4 = (uint)(local_78 + 0x3fffffffU >> 0x1e);
  uVar3 = (uint)(local_a8[0] + 0x3fffffffU >> 0x1e);
  if (uVar3 <= uVar4) {
    uVar4 = uVar3;
  }
  if (0 < local_res8[0]) {
    if ((int)uVar4 < local_res8[0]) {
      DAT_1464a8d40 = ((int)uVar4 < local_res10[0]) + 4;
    }
    else {
      DAT_1464a8d40 = 3;
    }
  }
  if ((0 < local_res18[0]) && (local_res18[0] <= (int)uVar4)) {
    DAT_1464a8d40 = 2;
  }
  if ((0 < local_res20[0]) && (local_res20[0] <= (int)uVar4)) {
    DAT_1464a8d40 = 1;
  }
  if ((0 < local_b8) && (local_b8 <= (int)uVar4)) {
    DAT_1464a8d40 = 0;
  }
  local_b4[0] = -1;
  uVar2 = FCommandLine::Get();
  cVar1 = FParse::Value(uVar2,L"MemBucket=",local_b4);
  if (cVar1 != '\0') {
    DAT_1464a8d40 = local_b4[0];
  }
  return DAT_1464a8d40;
}



// FUNCTION 1415aa540 GetNullRHIShaderFormat body=8 status=ok
// SIG undefined GetNullRHIShaderFormat(void)

wchar_t * FGenericPlatformMisc::GetNullRHIShaderFormat(void)

{
  return L"PCD3D_SM5";
}



// FUNCTION 1415aa550 FUN_1415aa550 body=176 status=ok
// SIG undefined FUN_1415aa550(void)

uint FUN_1415aa550(uint param_1)

{
  uint uVar1;
  BOOL BVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)param_1;
  if ((DAT_1468b02d8 != 0) && (param_1 != 0)) {
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0c08);
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0c08);
    }
    uVar3 = 0;
    if (1 < param_1 + 1) {
      iVar4 = *(int *)(DAT_1468b02d8 + 0x468);
      do {
        iVar4 = iVar4 + -1;
        uVar1 = *(uint *)(*(longlong *)(*(longlong *)(DAT_1468b02d8 + 0x460) + (longlong)iVar4 * 8)
                         + 0x218);
        if (uVar3 <= uVar1) {
          uVar3 = uVar1;
        }
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0c08);
    return uVar3;
  }
  return 0;
}



// FUNCTION 1415aa600 FUN_1415aa600 body=1464 status=ok
// SIG undefined FUN_1415aa600(void)

void FUN_1415aa600(longlong *param_1)

{
  uint uVar1;
  void *pvVar2;
  bool bVar3;
  wchar_t *pwVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  undefined2 *puVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong *plVar20;
  wchar_t *pwVar21;
  undefined4 *puVar22;
  uint uVar23;
  longlong *plVar24;
  undefined2 *puVar25;
  wchar_t *local_res10;
  longlong local_f8;
  longlong local_f0;
  wchar_t *local_e8;
  ulonglong local_e0;
  wchar_t *local_d8;
  ulonglong local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  ulonglong local_a0;
  undefined2 *local_98;
  int local_90;
  undefined4 local_8c;
  undefined4 *local_88;
  undefined8 local_80;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined1 local_68 [8];
  longlong local_60 [4];
  
  local_f8 = 0;
  local_f0 = 0;
  uVar9 = FCommandLine::Get();
  cVar5 = FParse::Value(uVar9,L"logcategoryfiles=",&local_f8,1);
  if (cVar5 != '\0') {
    plVar10 = (longlong *)FUN_14159cee0(&local_f8,&local_98,0);
    if (&local_f8 != plVar10) {
      if (local_f8 != 0) {
        FMemory::Free();
      }
      local_f8 = *plVar10;
      *plVar10 = 0;
      local_f0 = plVar10[1];
      plVar10[1] = 0;
    }
    if (local_98 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_a8 = (longlong *)0x0;
    local_a0 = 0;
    FUN_141594550(&local_f8,&local_a8,&DAT_144c991fc,1);
    uVar18 = (ulonglong)(int)local_a0;
    plVar11 = local_a8 + uVar18 * 2;
    plVar10 = local_a8;
    if (local_a8 != plVar11) {
      do {
        local_70 = (int)plVar10[1];
        lVar19 = (longlong)local_70;
        pvVar2 = (void *)*plVar10;
        local_78 = (void *)0x0;
        uVar17 = 0;
        if (local_70 == 0) {
          local_6c = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,local_70,0);
          _guard_xfg_dispatch_icall_nop(local_78,pvVar2,lVar19 * 2);
        }
        local_res10 = (wchar_t *)0x0;
        local_b8 = (wchar_t *)0x0;
        local_b0 = 0;
        local_88 = (undefined4 *)0x0;
        local_80 = 2;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
        puVar22 = local_88;
        *local_88 = 0x3d;
        puVar12 = (undefined8 *)FString::TrimStartAndEnd(&local_78,local_60);
        iVar8 = (int)local_80;
        puVar13 = (undefined4 *)&DAT_143f3eda8;
        if ((int)local_80 != 0) {
          puVar13 = puVar22;
        }
        iVar6 = FUN_141592950(puVar12,puVar13,1,0,0xffffffff);
        if (iVar6 < 0) {
          bVar3 = false;
        }
        else {
          iVar15 = *(int *)(puVar12 + 1) + -1;
          if (*(int *)(puVar12 + 1) == 0) {
            pwVar21 = L"";
            iVar15 = 0;
          }
          else {
            pwVar21 = (wchar_t *)*puVar12;
          }
          local_res10 = (wchar_t *)0x0;
          if (iVar6 < iVar15) {
            iVar15 = iVar6;
          }
          local_d8 = (wchar_t *)0x0;
          uVar17 = iVar15 + 1;
          if (iVar15 == 0) {
            uVar17 = 0;
          }
          local_d0 = (ulonglong)uVar17;
          if (0 < (int)uVar17) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
            pwVar4 = local_d8;
            uVar17 = (uint)local_d0;
            if ((int)(uint)local_d0 < 1) {
              local_res10 = local_d8;
            }
            else {
              local_res10 = local_d8;
              wcsncpy(local_d8,pwVar21,(longlong)iVar15);
              pwVar4[iVar15] = L'\0';
            }
          }
          local_d8 = (wchar_t *)0x0;
          local_d0 = 0;
          iVar15 = iVar8 + -1;
          if (iVar8 == 0) {
            iVar15 = 0;
          }
          iVar8 = *(int *)(puVar12 + 1);
          uVar7 = iVar15 + iVar6;
          uVar1 = uVar7 + 0x7fffffff;
          uVar18 = (ulonglong)(iVar8 - 1);
          if (iVar8 == 0) {
            uVar18 = 0;
          }
          uVar16 = iVar8 - 1;
          uVar23 = (uint)uVar18;
          if (uVar7 < (uint)uVar18) {
            uVar23 = uVar7;
          }
          if (iVar8 == 0) {
            uVar16 = 0;
          }
          uVar7 = uVar23;
          if ((uVar23 <= uVar1) && (uVar7 = uVar16, uVar1 < uVar16)) {
            uVar7 = uVar1;
          }
          if (iVar8 == 0) {
            puVar25 = &DAT_143f3eda8;
          }
          else {
            puVar25 = (undefined2 *)*puVar12;
          }
          iVar8 = uVar7 - uVar23;
          local_e8 = (wchar_t *)0x0;
          local_e0 = (ulonglong)(iVar8 + 1);
          if (iVar8 == 0) {
            local_e0 = 0;
          }
          iVar6 = (int)local_e0;
          pwVar21 = local_e8;
          if (0 < iVar6) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
            pwVar21 = local_e8;
            iVar6 = (int)local_e0;
            if (0 < (int)local_e0) {
              wcsncpy(local_e8,puVar25 + (int)uVar23,(longlong)iVar8);
              pwVar21[iVar8] = L'\0';
            }
          }
          if (local_b8 != (wchar_t *)0x0) {
            FMemory::Free();
          }
          bVar3 = true;
          uVar18 = local_e0 >> 0x20;
          local_e0 = 0;
          local_e8 = (wchar_t *)0x0;
          local_b0 = CONCAT44((int)uVar18,iVar6);
          puVar22 = local_88;
          local_b8 = pwVar21;
        }
        if (local_60[0] != 0) {
          FMemory::Free();
        }
        if (puVar22 != (undefined4 *)0x0) {
          FMemory::Free(puVar22);
        }
        if (bVar3) {
          lVar19 = operator_new(0x838);
          if (lVar19 == 0) {
            uVar9 = 0;
          }
          else {
            pwVar21 = L"";
            if (uVar17 != 0) {
              pwVar21 = local_res10;
            }
            uVar9 = FOutputDeviceFile::FOutputDeviceFile(lVar19,pwVar21,0,0);
          }
          local_c8 = (longlong *)0x0;
          local_c0 = 0;
          FUN_141594550(&local_b8);
          plVar24 = local_c8 + (longlong)(int)local_c0 * 2;
          if (local_c8 != plVar24) {
            plVar20 = local_c8;
            do {
              local_90 = (int)plVar20[1];
              lVar19 = (longlong)local_90;
              pvVar2 = (void *)*plVar20;
              local_98 = (undefined2 *)0x0;
              if (local_90 == 0) {
                local_8c = 0;
                puVar25 = (undefined2 *)0x0;
              }
              else {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_98,local_90,0);
                puVar25 = local_98;
                _guard_xfg_dispatch_icall_nop(local_98,pvVar2,lVar19 * 2);
              }
              puVar14 = &DAT_143f3eda8;
              if (local_90 != 0) {
                puVar14 = puVar25;
              }
              FName::FName(local_68,puVar14);
              FOutputDeviceFile::IncludeCategory(uVar9);
              if (puVar25 != (undefined2 *)0x0) {
                FMemory::Free(puVar25);
              }
              plVar20 = plVar20 + 2;
            } while (plVar20 != plVar24);
          }
          lVar19 = param_1[1];
          iVar8 = (int)lVar19 + 1;
          *(int *)(param_1 + 1) = iVar8;
          if (*(int *)((longlong)param_1 + 0xc) < iVar8) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1);
          }
          *(undefined8 *)(*param_1 + (longlong)(int)lVar19 * 8) = uVar9;
          plVar24 = local_c8;
          for (iVar8 = (int)local_c0; iVar8 != 0; iVar8 = iVar8 + -1) {
            if (*plVar24 != 0) {
              FMemory::Free();
            }
            plVar24 = plVar24 + 2;
          }
          if (local_c8 != (longlong *)0x0) {
            FMemory::Free(local_c8);
          }
        }
        if (local_b8 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        if (local_res10 != (wchar_t *)0x0) {
          FMemory::Free(local_res10);
        }
        if (local_78 != (void *)0x0) {
          FMemory::Free();
        }
        plVar10 = plVar10 + 2;
      } while (plVar10 != plVar11);
      uVar18 = local_a0 & 0xffffffff;
    }
    uVar17 = (uint)uVar18;
    plVar10 = local_a8;
    while (uVar17 != 0) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
      uVar17 = (int)uVar18 - 1;
      uVar18 = (ulonglong)uVar17;
    }
    if (local_a8 != (longlong *)0x0) {
      FMemory::Free(local_a8);
    }
  }
  if (local_f8 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1415aabd0 FUN_1415aabd0 body=108 status=ok
// SIG undefined FUN_1415aabd0(void)

undefined ** FUN_1415aabd0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b1488) {
    _Init_thread_header(&DAT_1468b1488);
    if (DAT_1468b1488 == -1) {
      atexit(`FGenericPlatformMisc::GetPlatformChunkInstall'::`2'::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&DAT_1468b1488);
      return &PTR_PTR_1464a8d48;
    }
  }
  return &PTR_PTR_1464a8d48;
}



// FUNCTION 1415aac40 FUN_1415aac40 body=108 status=ok
// SIG undefined FUN_1415aac40(void)

undefined ** FUN_1415aac40(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b148c) {
    _Init_thread_header(&DAT_1468b148c);
    if (DAT_1468b148c == -1) {
      atexit((_func_5014 *)&LAB_143e76270);
      _Init_thread_footer(&DAT_1468b148c);
      return &PTR_PTR_1464a8d68;
    }
  }
  return &PTR_PTR_1464a8d68;
}



// FUNCTION 1415aacb0 GetPreferredLanguages body=142 status=ok
// SIG undefined GetPreferredLanguages(void)

undefined8 FGenericPlatformMisc::GetPreferredLanguages(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  lVar5 = FInternationalization::Get();
  plVar4 = *(longlong **)(lVar5 + 0x30);
  uVar6 = *(undefined8 *)(lVar5 + 0x28);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  uVar6 = FCulture::GetName(uVar6);
  FInternationalization::GetPrioritizedCultureNames(lVar5,param_1,uVar6);
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
  return param_1;
}



// FUNCTION 1415aad40 GetPrimaryGPUBrand body=62 status=ok
// SIG undefined GetPrimaryGPUBrand(void)

undefined8 * FGenericPlatformMisc::GetPrimaryGPUBrand(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
  builtin_wcsncpy((wchar_t *)*param_1,L"GenericGPUBrand",0x10);
  return param_1;
}



// FUNCTION 1415aad80 FUN_1415aad80 body=7 status=ok
// SIG undefined FUN_1415aad80(void)

undefined4 FUN_1415aad80(void)

{
  return DAT_1468b1114;
}



// FUNCTION 1415aad90 FUN_1415aad90 body=415 status=ok
// SIG undefined FUN_1415aad90(void)

longlong FUN_1415aad90(undefined8 param_1,longlong param_2,short *param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  
  plVar6 = *(longlong **)(param_2 + 0x38);
  plVar1 = plVar6 + *(int *)(param_2 + 0x40);
  while( true ) {
    if (plVar6 == plVar1) {
      puVar3 = (undefined8 *)operator_new(0x88);
      iVar2 = 0;
      if (puVar3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)0x0;
      }
      else {
        puVar3[8] = 0;
        puVar3[9] = 0;
        puVar3[10] = 0;
        puVar3[0xb] = 0;
        puVar3[0xc] = param_2;
        *puVar3 = 0;
        *(undefined4 *)(puVar3 + 1) = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        lVar8 = puVar3[8];
        lVar7 = lVar8 + (longlong)*(int *)(puVar3 + 9) * 0x18;
        for (; lVar8 != lVar7; lVar8 = lVar8 + 0x18) {
          *(undefined8 *)(lVar8 + 0x10) = 0;
        }
        puVar3[0xd] = 0;
        puVar3[0xe] = 0;
        puVar3[0x10] = 0;
        puVar3[0xf] = 0;
        if (param_3 != (short *)0x0) {
          iVar5 = iVar2;
          if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
            lVar7 = -1;
            do {
              lVar7 = lVar7 + 1;
            } while (param_3[lVar7] != 0);
            iVar5 = (int)lVar7 + 1;
          }
          *(undefined4 *)(puVar3 + 0xb) = 0;
          if (*(int *)((longlong)puVar3 + 0x5c) != iVar5) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar3 + 10,iVar5);
            iVar2 = *(int *)(puVar3 + 0xb);
          }
          *(int *)(puVar3 + 0xb) = iVar2 + iVar5;
          if (*(int *)((longlong)puVar3 + 0x5c) < iVar2 + iVar5) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar3 + 10);
          }
          if (iVar5 != 0) {
            _guard_xfg_dispatch_icall_nop((void *)puVar3[10],param_3,(longlong)iVar5 * 2);
          }
        }
      }
      iVar2 = *(int *)(param_2 + 0x40);
      *(int *)(param_2 + 0x40) = iVar2 + 1;
      if (*(int *)(param_2 + 0x44) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2 + 0x38,iVar2);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x38) + (longlong)iVar2 * 8) = puVar3;
      return *(longlong *)(*(longlong *)(param_2 + 0x38) + (longlong)iVar2 * 8);
    }
    lVar7 = *plVar6;
    if (*(int *)(lVar7 + 0x58) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = *(undefined2 **)(lVar7 + 0x50);
    }
    iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4);
    if (iVar2 == 0) break;
    plVar6 = plVar6 + 1;
  }
  return lVar7;
}



// FUNCTION 1415aaf30 GetSecondsPerCycle64 body=9 status=ok
// SIG undefined GetSecondsPerCycle64(void)

undefined8 FGenericPlatformTime::GetSecondsPerCycle64(void)

{
  return DAT_1468b0300;
}



// FUNCTION 1415aaf40 FUN_1415aaf40 body=328 status=ok
// SIG undefined FUN_1415aaf40(void)

void FUN_1415aaf40(void)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_98 [152];
  
  if (DAT_1468b1434 == 0) {
    DAT_1468b1434 =
         (DAT_1464a8d38 + 0x10) * DAT_1464a8d3c + (DAT_1464a8d30 + 0x10) * DAT_1464a8d34 +
         (DAT_1464a8d28 + 0x10) * DAT_1464a8d2c + (DAT_1464a8d20 + 0x10) * DAT_1464a8d24 +
         (DAT_1464a8d18 + 0x10) * DAT_1464a8d1c + (DAT_1464a8d10 + 0x10) * DAT_1464a8d14 +
         (DAT_1464a8d08 + 0x10) * DAT_1464a8d0c + (DAT_1464a8d00 + 0x10) * DAT_1464a8d04 +
         (DAT_1464a8cf8 + 0x10) * DAT_1464a8cfc + (DAT_1464a8cf0 + 0x10) * DAT_1464a8cf4 +
         (DAT_1464a8ce8 + 0x10) * DAT_1464a8cec + (DAT_1464a8ce0 + 0x10) * DAT_1464a8ce4 +
         (DAT_1464a8cd8 + 0x10) * DAT_1464a8cdc + (DAT_1464a8cd0 + 0x10) * DAT_1464a8cd4;
    lVar2 = FUN_1416a13c0(local_98);
    iVar1 = *(int *)(lVar2 + 0x10);
    if (*(int *)(lVar2 + 0x10) == 0) {
      iVar1 = 0x10000;
    }
    DAT_1468b1434 = DAT_1468b1434 + -1 + iVar1 & -iVar1;
  }
  return;
}



// FUNCTION 1415ab090 FUN_1415ab090 body=382 status=ok
// SIG undefined FUN_1415ab090(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1415ab090(longlong *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  char *_Dest;
  undefined8 *puVar4;
  undefined1 auStack_388 [32];
  undefined8 local_368 [100];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
  *param_1 = 0;
  param_1[1] = 0;
  _guard_xfg_dispatch_icall_nop(local_368,0,800);
  if (99 < param_3) {
    param_3 = 100;
  }
  uVar2 = FWindowsPlatformStackWalk::CaptureStackBackTrace(local_368,param_3,param_4);
  if (uVar2 != 0) {
    puVar4 = local_368;
    uVar3 = (ulonglong)uVar2;
    do {
      iVar1 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
        TArray<FProgramCounterSymbolInfo,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
      }
      _Dest = (char *)(*param_1 + (longlong)iVar1 * 0xc18);
      _Dest[0xc00] = '\0';
      _Dest[0xc01] = '\0';
      _Dest[0xc02] = '\0';
      _Dest[0xc03] = '\0';
      _Dest[0xc04] = '\0';
      _Dest[0xc05] = '\0';
      _Dest[0xc06] = '\0';
      _Dest[0xc07] = '\0';
      _Dest[0xc08] = '\0';
      _Dest[0xc09] = '\0';
      _Dest[0xc0a] = '\0';
      _Dest[0xc0b] = '\0';
      _Dest[0xc0c] = '\0';
      _Dest[0xc0d] = '\0';
      _Dest[0xc0e] = '\0';
      _Dest[0xc0f] = '\0';
      _Dest[0xc10] = '\0';
      _Dest[0xc11] = '\0';
      _Dest[0xc12] = '\0';
      _Dest[0xc13] = '\0';
      _Dest[0xc14] = '\0';
      _Dest[0xc15] = '\0';
      _Dest[0xc16] = '\0';
      _Dest[0xc17] = '\0';
      strncpy(_Dest,(char *)((longlong)
                             L"FGenericPlatformProcess::GetApplicationName not implemented on this platform"
                            + 0x9b),0x400);
      _Dest[0x3ff] = '\0';
      strncpy(_Dest + 0x400,"",0x400);
      _Dest[0x7ff] = '\0';
      strncpy(_Dest + 0x800,"",0x400);
      _Dest[0xbff] = '\0';
      FWindowsPlatformStackWalk::ProgramCounterToSymbolInfo
                (*puVar4,*param_1 + (longlong)iVar1 * 0xc18);
      puVar4 = puVar4 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return param_1;
}



// FUNCTION 1415ab210 FUN_1415ab210 body=94 status=ok
// SIG undefined FUN_1415ab210(void)

bool FUN_1415ab210(void)

{
  longlong lVar1;
  DWORD DVar2;
  LPVOID pvVar3;
  longlong lVar4;
  
  lVar1 = DAT_1468b0da0;
  if (DAT_1468e2448 == 0) {
LAB_1415ab237:
    if (DAT_1468c21ae != '\0') {
      DVar2 = GetCurrentThreadId();
      lVar4 = 4;
      if (DVar2 != DAT_1468c21c0) goto LAB_1415ab25a;
    }
  }
  else {
    pvVar3 = TlsGetValue(DAT_1468e2448);
    if ((int)pvVar3 == 0) goto LAB_1415ab237;
  }
  lVar4 = 0;
LAB_1415ab25a:
  return *(int *)(lVar4 + lVar1) != 1;
}



// FUNCTION 1415ab270 FUN_1415ab270 body=239 status=ok
// SIG undefined FUN_1415ab270(void)

void FUN_1415ab270(char param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if (param_1 == '\0') {
    uVar2 = FUN_1415a8b50();
    uVar1 = FUN_141594c40(uVar2);
    lVar3 = 0;
    if (uVar1 != 0) {
      lVar3 = *(longlong *)((&DAT_1468a81f8)[uVar1 >> 0xe] + 8 + (ulonglong)(uVar1 & 0x3fff) * 0x18)
      ;
      FLockFreeLinkPolicy::FreeLockFreeLink(uVar1);
    }
    if (lVar3 != 0) goto LAB_1415ab316;
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1415a8ad0();
    uVar1 = FUN_141594c40(uVar2);
    lVar3 = 0;
    if (uVar1 != 0) {
      lVar3 = *(longlong *)((&DAT_1468a81f8)[uVar1 >> 0xe] + 8 + (ulonglong)(uVar1 & 0x3fff) * 0x18)
      ;
      FLockFreeLinkPolicy::FreeLockFreeLink(uVar1);
    }
    if (lVar3 != 0) goto LAB_1415ab316;
    uVar2 = 1;
  }
  lVar3 = FWindowsPlatformProcess::CreateSynchEvent(uVar2);
LAB_1415ab316:
  AK::MemoryMgr::StartProfileThreadUsage((long)lVar3);
  puVar4 = (undefined8 *)operator_new(0x18);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR__purecall_144ca0288;
    *(undefined4 *)(puVar4 + 1) = 0;
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    puVar4[2] = lVar3;
    *puVar4 = &PTR_LAB_144ca09f0;
    return;
  }
  return;
}



// FUNCTION 1415ab360 GetTimeStampLocal body=68 status=ok
// SIG undefined GetTimeStampLocal(void)

longlong * IPlatformFile::GetTimeStampLocal(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  (**(code **)(*param_1 + 0x98))();
  plVar1 = (longlong *)FDateTime::UtcNow(local_res8);
  plVar2 = (longlong *)FDateTime::Now(local_res10);
  *param_2 = *param_2 + (*plVar2 - *plVar1);
  return param_2;
}



// FUNCTION 1415ab3b0 FUN_1415ab3b0 body=160 status=ok
// SIG undefined FUN_1415ab3b0(void)

void FUN_1415ab3b0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  
  lVar1 = (**(code **)(*param_1 + 0x50))();
  if (lVar1 == 0) {
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x98))(param_1,local_res8,param_2);
    *param_4 = *puVar3;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x98))(param_1,local_res8,param_3);
    *param_5 = *puVar3;
  }
  else {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x50))();
    (**(code **)(*plVar2 + 0x118))(plVar2,param_2,param_3,param_4,param_5);
  }
  return;
}



// FUNCTION 1415ab450 FUN_1415ab450 body=839 status=ok
// SIG undefined FUN_1415ab450(void)

void FUN_1415ab450(longlong param_1,longlong param_2)

{
  uint uVar1;
  bool bVar2;
  double dVar3;
  bool bVar4;
  BOOL BVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  uint *puVar10;
  float fVar11;
  double dVar12;
  int local_b8;
  uint uStack_b4;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_90;
  undefined *local_88;
  uint uStack_80;
  int iStack_7c;
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  uint uStack_58;
  int iStack_54;
  undefined8 uStack_50;
  
  dVar3 = 0.0;
  BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0da8);
  if (BVar5 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0da8);
  }
  uStack_b4 = 1;
  local_b8 = 0;
  iStack_a4 = 0;
  iStack_a0 = 0;
  iVar6 = (int)DAT_1464a8488;
  if (iVar6 != 0) {
    puVar10 = DAT_1464a8480;
    if (DAT_1464a8480 == (uint *)0x0) {
      puVar10 = (uint *)&DAT_1464a8470;
    }
    uVar1 = *puVar10;
    iStack_a0 = 0;
    local_b8 = 0;
    while (uVar1 == 0) {
      lVar8 = (longlong)local_b8;
      iStack_a0 = iStack_a0 + 0x20;
      iVar7 = local_b8 + 1;
      bVar2 = (int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_b8;
      local_b8 = iVar7;
      if (bVar2) goto LAB_1415ab54c;
      uVar1 = puVar10[lVar8 + 1];
    }
    uStack_b4 = -uVar1 & uVar1;
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
    iStack_a4 = (iStack_a0 - iVar7) + 0x1f;
    if (iVar6 < iStack_a4) {
LAB_1415ab54c:
      iStack_a4 = iVar6;
    }
  }
  uStack_80 = 0xffffffff;
  iStack_7c = iStack_a4;
  local_78 = CONCAT44(uStack_9c,iStack_a0);
  uStack_90 = CONCAT44(uStack_b4,local_b8);
  puStack_60 = &DAT_1464a8470;
  local_70 = &DAT_1464a8460;
  local_88 = &DAT_1464a8470;
  uStack_68 = uStack_90;
  uStack_50 = local_78;
  uStack_58 = uStack_80;
  iStack_54 = iStack_7c;
  while ((iStack_7c != iVar6 || (local_88 != &DAT_1464a8470))) {
    lVar8 = *(longlong *)(DAT_1464a8460 + 8 + (longlong)iStack_7c * 0x18);
    iVar7 = *(int *)(DAT_1464a8460 + (longlong)iStack_7c * 0x18);
    BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x18));
    if (BVar5 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x18));
    }
    uVar1 = *(uint *)(lVar8 + 0x50);
    dVar12 = DAT_1468b02f8 * 1000.0;
    *(undefined4 *)(lVar8 + 0x50) = 0;
    dVar3 = dVar3 + (double)(float)(dVar12 * (double)uVar1);
    if ((DAT_1468b4ff8 == 0) || (iVar7 != *(int *)(DAT_1468b4ff8 + 0x44))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((DAT_1468b4fe4 == 0) || (iVar7 != DAT_1468b4fe4)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar2) || (bVar4)) {
      *(undefined4 *)(lVar8 + 0x58) = 0x800;
      iVar7 = 0x800;
    }
    else {
      iVar7 = *(int *)(lVar8 + 0x58);
    }
    if ((iVar7 < 0x800) && ((iVar7 < *(int *)(lVar8 + 0x48) || (0 < *(int *)(lVar8 + 0x5c))))) {
      iVar9 = 0x800;
      if (iVar7 + 0x10 < 0x801) {
        iVar9 = iVar7 + 0x10;
      }
      if (iVar7 < iVar9) {
        *(int *)(lVar8 + 0x58) = iVar9;
        iVar7 = iVar9;
      }
    }
    *(undefined4 *)(lVar8 + 0x48) = 0;
    if (*(int *)(lVar8 + 0x4c) != iVar7) {
      TArray<void_*,FDefaultAllocator>::ResizeTo();
    }
    *(undefined8 *)(lVar8 + 0x60) = *(undefined8 *)(param_1 + 0x18);
    *(undefined4 *)(lVar8 + 0x5c) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x18));
    uStack_80 = uStack_80 & ~uStack_90._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
  }
  iVar6 = FUN_1416a5660();
  *(double *)(param_2 + 0x20) = dVar3;
  fVar11 = (float)((double)iVar6 * *(double *)(param_2 + 8));
  if (fVar11 <= 0.1) {
    fVar11 = 0.1;
  }
  *(double *)(param_2 + 0x10) = (dVar3 / (double)fVar11) * 100.0;
  *(double *)(param_2 + 0x18) = (dVar3 / (double)(iVar6 * 0x21)) * 100.0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0da8);
  return;
}



// FUNCTION 1415ab7a0 GetUBTPlatform body=8 status=ok
// SIG undefined GetUBTPlatform(void)

wchar_t * FGenericPlatformMisc::GetUBTPlatform(void)

{
  return L"Win64";
}



// FUNCTION 1415ab7b0 GetUBTTarget body=8 status=ok
// SIG undefined GetUBTTarget(void)

wchar_t * FGenericPlatformMisc::GetUBTTarget(void)

{
  return L"Game";
}



// FUNCTION 1415ab7c0 GetUniqueCrashName body=62 status=ok
// SIG undefined GetUniqueCrashName(void)

void FGenericCrashContext::GetUniqueCrashName
               (longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  
  puVar1 = &DAT_143f3eda8;
  if (DAT_1468b1048 != 0) {
    puVar1 = DAT_1468b1040;
  }
  TCString<wchar_t>::SnprintfImpl(param_2,param_3,L"%s_%04i",puVar1,*(undefined4 *)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 1415ab800 FUN_1415ab800 body=139 status=ok
// SIG undefined FUN_1415ab800(void)

undefined8 * FUN_1415ab800(void)

{
  undefined8 uVar1;
  undefined1 local_18 [16];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b14e8) {
    _Init_thread_header(&DAT_1468b14e8);
    if (DAT_1468b14e8 == -1) {
      uVar1 = FGuid::NewGuid(local_18);
      FUN_141682af0(uVar1,&DAT_1468b14d8,0);
      atexit((_func_5014 *)&LAB_143e76320);
      _Init_thread_footer(&DAT_1468b14e8);
      return &DAT_1468b14d8;
    }
  }
  return &DAT_1468b14d8;
}



// FUNCTION 1415ab890 FUN_1415ab890 body=108 status=ok
// SIG undefined FUN_1415ab890(void)

undefined8 * FUN_1415ab890(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b1480) {
    _Init_thread_header(&DAT_1468b1480);
    if (DAT_1468b1480 == -1) {
      atexit((_func_5014 *)&LAB_143e75e00);
      _Init_thread_footer(&DAT_1468b1480);
      return &DAT_1468b1470;
    }
  }
  return &DAT_1468b1470;
}



// FUNCTION 1415ab910 FUN_1415ab910 body=559 status=ok
// SIG undefined FUN_1415ab910(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1415ab910(void)

{
  float fVar1;
  bool bVar2;
  DWORD DVar3;
  LPVOID pvVar4;
  ulonglong *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  lVar7 = DAT_1468b0bd0;
  if (DAT_1464a837c == -1) {
    uVar10 = 0;
    DAT_1464a837c = 0;
    uVar9 = 4;
    if ((((DAT_1468e2448 != 0) && (pvVar4 = TlsGetValue(DAT_1468e2448), (int)pvVar4 != 0)) ||
        (DAT_1468c21ae == '\0')) ||
       (DVar3 = GetCurrentThreadId(), uVar11 = uVar9, DVar3 == DAT_1468c21c0)) {
      uVar11 = uVar10;
    }
    DAT_1468b0308 = (longlong)*(int *)(uVar11 + lVar7) << 0x14;
    if (DAT_1468b0308 != 0) {
      puVar5 = (ulonglong *)FUN_14169dad0();
      lVar7 = DAT_1468b0b28;
      uVar11 = *puVar5 - DAT_1468b0308;
      bVar2 = DAT_1468b0308 < *puVar5;
      DAT_1468b0308 = uVar10;
      if (bVar2) {
        DAT_1468b0308 = uVar11;
      }
      if (0x3ffffff < DAT_1468b0308) {
        if (((DAT_1468e2448 != 0) && (pvVar4 = TlsGetValue(DAT_1468e2448), (int)pvVar4 != 0)) ||
           ((DAT_1468c21ae == '\0' ||
            (DVar3 = GetCurrentThreadId(), uVar11 = uVar9, DVar3 == DAT_1468c21c0)))) {
          uVar11 = uVar10;
        }
        fVar1 = *(float *)(uVar11 + lVar7);
        if (0.1 < fVar1) {
          local_28 = (longlong *)0x0;
          plVar6 = (longlong *)FMemory::Realloc(0,0x20);
          local_20 = 2;
          local_28 = plVar6;
          if (plVar6 != (longlong *)0x0) {
            *plVar6 = (longlong)&PTR_GetPoolName_144ca0a20;
            lVar7 = FDelegateHandle::GenerateNewID();
            plVar6[2] = lVar7;
          }
          uVar8 = FUN_14164ab60();
          FUN_14158f860(uVar8,local_res8,&local_28,L"FExpandedMemoryUtil_Lambda",fVar1);
          if (local_20 != 0) {
            if (local_28 == (longlong *)0x0) goto LAB_1415abac2;
            (**(code **)(*local_28 + 0x28))(local_28,0);
            if (local_28 != (longlong *)0x0) {
              local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
            }
            local_20 = 0;
          }
          if (local_28 != (longlong *)0x0) {
            FMemory::Free(local_28);
          }
        }
LAB_1415abac2:
        lVar7 = DAT_1468b0be8;
        if (((DAT_1468e2448 != 0) && (pvVar4 = TlsGetValue(DAT_1468e2448), (int)pvVar4 != 0)) ||
           ((DAT_1468c21ae == '\0' || (DVar3 = GetCurrentThreadId(), DVar3 == DAT_1468c21c0)))) {
          uVar9 = uVar10;
        }
        _DAT_1468b0b10 = (longlong)*(int *)(uVar9 + lVar7) << 0x14;
        return;
      }
      DAT_1468b0308 = 0;
    }
  }
  return;
}



// FUNCTION 1415abb40 FUN_1415abb40 body=50 status=ok
// SIG undefined FUN_1415abb40(void)

void FUN_1415abb40(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = operator_new(0x608);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_14159f7d0(lVar1);
  }
  DAT_1468b02d8 = uVar2;
  TBaseMulticastDelegate<void>::Broadcast(&DAT_1464a84b0);
  return;
}



// FUNCTION 1415abb80 Init body=26 status=ok
// SIG undefined Init(void)

void FGenericPlatformMemory::Init(void)

{
  DAT_1468b02d0 = FWindowsPlatformMemory::BinnedAllocFromOS(0x2000000);
  return;
}



// FUNCTION 1415abba0 Init body=54 status=ok
// SIG undefined Init(void)

void FGenericPlatformStackWalk::Init(void)

{
  FConfigCacheIni::GetBool
            (DAT_1468b6148,L"Core.System",L"DetailedCallstacksInNonMonolithicBuilds",&DAT_1464a8ba8,
             &DAT_1468e2360);
  return;
}



// FUNCTION 1415abbe0 FUN_1415abbe0 body=1168 status=ok
// SIG undefined FUN_1415abbe0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_1415abbe0(undefined8 param_1,longlong *param_2)

{
  uint *puVar1;
  wchar_t *pwVar2;
  longlong *plVar3;
  uint uVar4;
  bool bVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  char cVar8;
  undefined1 uVar9;
  wchar_t _C;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  wchar_t *pwVar18;
  longlong *plVar19;
  ulonglong uVar20;
  uint uVar21;
  uint *puVar22;
  double dVar23;
  undefined1 auStack_3b8 [32];
  undefined8 local_398;
  uint *puStack_390;
  uint local_388;
  uint uStack_384;
  uint uStack_380;
  undefined4 uStack_37c;
  longlong *local_378;
  undefined8 local_370;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  uint uStack_35c;
  uint *local_358;
  uint uStack_350;
  uint uStack_34c;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 uStack_338;
  uint *puStack_330;
  uint uStack_328;
  uint uStack_324;
  undefined8 uStack_320;
  longlong local_318 [24];
  longlong *local_258;
  ulonglong local_250;
  wchar_t local_248;
  wchar_t local_246 [255];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_3b8;
  uVar17 = 0;
  puVar1 = (uint *)(param_2 + 2);
  local_258 = (longlong *)0x0;
  local_250 = 0;
  uVar4 = *(uint *)(param_2 + 5);
  local_398 = (longlong *)0x100000000;
  uStack_384 = 0;
  uStack_380 = 0;
  if (uVar4 != 0) {
    puVar22 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar22 = puVar1;
    }
    uVar10 = *puVar22;
    uVar15 = uVar17;
    uVar20 = uVar17;
    while (uVar10 == 0) {
      iVar11 = (int)uVar15;
      uStack_380 = (int)uVar20 + 0x20;
      uVar20 = (ulonglong)uStack_380;
      uVar15 = (ulonglong)(iVar11 + 1U);
      uVar6 = (ulonglong)local_398 >> 0x20;
      local_398 = (longlong *)CONCAT44((int)uVar6,iVar11 + 1U);
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar11)
      goto LAB_1415abce0;
      uVar10 = puVar22[(longlong)iVar11 + 1];
    }
    uVar10 = -uVar10 & uVar10;
    iVar11 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    local_398 = (longlong *)CONCAT44(uVar10,SUB84(local_398,0));
    if (uVar10 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    uStack_384 = (uStack_380 - iVar11) + 0x1f;
    if ((int)uVar4 < (int)uStack_384) {
LAB_1415abce0:
      uStack_384 = uVar4;
    }
  }
  uVar10 = *(uint *)(param_2 + 5);
  uStack_350 = 0xffffffff;
  uStack_34c = uStack_384;
  local_348 = CONCAT44(uStack_37c,uStack_380);
  local_388 = -1 << ((byte)uVar10 & 0x1f);
  uStack_338 = (undefined2 *)local_398;
  puVar7 = uStack_338;
  uVar21 = uVar10 & 0xffffffe0;
  local_340._0_4_ = SUB84(param_2,0);
  local_340._4_4_ = (undefined4)((ulonglong)param_2 >> 0x20);
  uStack_338._0_4_ = SUB84(local_398,0);
  uStack_338._4_4_ = (uint)((ulonglong)local_398 >> 0x20);
  local_368 = (undefined4)local_340;
  uStack_364 = local_340._4_4_;
  uStack_360 = (undefined4)uStack_338;
  uStack_35c = uStack_338._4_4_;
  uVar15 = uVar17;
  puStack_390 = puVar1;
  uStack_384 = uVar10;
  local_378 = param_2;
  local_370 = param_1;
  local_358 = puVar1;
  local_340 = param_2;
  uStack_338 = puVar7;
  puStack_330 = puVar1;
  uStack_320 = local_348;
  uStack_328 = uStack_350;
  uStack_324 = uStack_34c;
  if (uVar10 != uVar4) {
    puVar22 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar22 = puVar1;
    }
    uVar16 = puVar22[(int)uVar10 >> 5] & local_388;
    iVar11 = (int)uVar10 >> 5;
    while (uVar16 == 0) {
      uVar21 = uVar21 + 0x20;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar11)
      goto LAB_1415abdb2;
      uVar16 = puVar22[(longlong)iVar11 + 1];
      local_388 = 0xffffffff;
      iVar11 = iVar11 + 1;
    }
    uVar16 = -uVar16 & uVar16;
    iVar11 = 0x1f;
    if (uVar16 != 0) {
      for (; uVar16 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uVar16 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    uStack_384 = (uVar21 - iVar11) + 0x1f;
    uVar10 = uStack_384;
    if ((int)uVar4 < (int)uStack_384) {
LAB_1415abdb2:
      uStack_384 = uVar4;
      uVar10 = uVar4;
    }
  }
  do {
    iVar11 = (int)uVar15;
    if (((uStack_34c == uVar10) && (local_358 == puVar1)) &&
       ((longlong *)CONCAT44(uStack_364,local_368) == local_378)) {
      local_398 = local_318;
      if (local_258 != (longlong *)0x0) {
        local_398 = local_258;
      }
      puStack_390 = (uint *)CONCAT44(puStack_390._4_4_,iVar11);
      uVar9 = FUN_1415ac070(local_370,&local_398);
      plVar13 = local_318;
      if (local_258 != (longlong *)0x0) {
        plVar13 = local_258;
      }
      if ((int)local_250 != 0) {
        plVar13 = plVar13 + 1;
        iVar11 = (int)local_250;
        do {
          if (*plVar13 != 0) {
            FMemory::Free();
          }
          plVar13 = plVar13 + 3;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      if (local_258 != (longlong *)0x0) {
        FMemory::Free();
      }
      return uVar9;
    }
    plVar19 = (longlong *)
              ((longlong)(int)uStack_34c * 0x30 + *(longlong *)CONCAT44(uStack_364,local_368));
    plVar13 = local_318;
    if (local_258 != (longlong *)0x0) {
      plVar13 = local_258;
    }
    lVar14 = *plVar19;
    plVar3 = plVar13 + (longlong)iVar11 * 3;
    for (; plVar13 != plVar3; plVar13 = plVar13 + 3) {
      if (*plVar13 == lVar14) goto LAB_1415abe97;
    }
    local_250 = CONCAT44(local_250._4_4_,iVar11 + 1);
    if ((int)uVar17 < iVar11 + 1) {
      TArray<FLandscapeTextureAtlas::FPendingUpload,TInlineAllocator<8,TSizedDefaultAllocator<32>_>_>
      ::ResizeGrow(local_318);
    }
    lVar12 = (longlong)iVar11;
    plVar13 = local_318;
    if (local_258 != (longlong *)0x0) {
      plVar13 = local_258;
    }
    plVar13[lVar12 * 3] = 0;
    plVar13[lVar12 * 3 + 1] = 0;
    plVar13[lVar12 * 3 + 2] = 0;
    plVar13 = local_318;
    if (local_258 != (longlong *)0x0) {
      plVar13 = local_258;
    }
    plVar13 = plVar13 + lVar12 * 3;
    *plVar13 = lVar14;
LAB_1415abe97:
    iVar11 = (int)plVar19[4] + -1;
    if ((int)plVar19[4] == 0) {
      iVar11 = 0;
    }
    lVar14 = 0x18;
    if (iVar11 < 1) {
      lVar14 = 8;
    }
    if (*(int *)(lVar14 + 8 + (longlong)plVar19) == 0) {
      local_398 = (longlong *)&DAT_143f3eda8;
    }
    else {
      local_398 = *(longlong **)(lVar14 + (longlong)plVar19);
    }
    cVar8 = FParse::Token(&local_398,&local_248,0x100,0);
    while (cVar8 != '\0') {
      pwVar18 = &local_248;
      if ((local_248 == L'-') || (_C = local_248, local_248 == L'+')) {
        pwVar18 = local_246;
        _C = local_246[0];
      }
      bVar5 = false;
      while (_C != L'\0') {
        if (_C == L'.') {
          if (bVar5) goto LAB_1415abf72;
          bVar5 = true;
        }
        else {
          iVar11 = iswdigit(_C);
          if (iVar11 == 0) goto LAB_1415abf72;
        }
        pwVar2 = pwVar18 + 1;
        pwVar18 = pwVar18 + 1;
        _C = *pwVar2;
      }
      dVar23 = _wtof(&local_248);
      iVar11 = (int)plVar13[2];
      *(int *)(plVar13 + 2) = iVar11 + 1;
      if (*(int *)((longlong)plVar13 + 0x14) < iVar11 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar13 + 1,iVar11);
      }
      *(float *)(plVar13[1] + (longlong)iVar11 * 4) = (float)dVar23;
LAB_1415abf72:
      cVar8 = FParse::Token(&local_398,&local_248,0x100,0);
    }
    uStack_350 = uStack_350 & ~uStack_35c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_360);
    uVar17 = local_250 >> 0x20;
    uVar15 = local_250 & 0xffffffff;
  } while( true );
}



// FUNCTION 1415ac070 FUN_1415ac070 body=537 status=ok
// SIG undefined FUN_1415ac070(void)

undefined8 FUN_1415ac070(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  float *pfVar11;
  longlong lVar12;
  bool bVar13;
  longlong local_res18;
  longlong *local_res20;
  longlong local_58;
  longlong local_50;
  
  iVar6 = (int)param_2[1];
  if (iVar6 != 0) {
    FName::FName(&local_58,L"Keys",1);
    FName::FName(&local_res18,L"RelKeys",1);
    lVar4 = local_res18;
    param_2 = (longlong *)*param_2;
    local_50 = (longlong)iVar6 * 3;
    plVar9 = (longlong *)0x0;
    iVar2 = (int)param_2[2];
    plVar8 = param_2 + (longlong)iVar6 * 3;
    local_res20 = param_2;
    if (param_2 != plVar8) {
      do {
        if ((int)param_2[2] != iVar2) {
          return 0;
        }
        lVar12 = *param_2;
        if ((lVar12 == local_58) || (lVar12 == lVar4)) {
          bVar13 = plVar9 != (longlong *)0x0;
          plVar9 = param_2;
          if (bVar13) {
            return 0;
          }
        }
        else {
          plVar7 = *(longlong **)(param_1 + 8);
          iVar3 = *(int *)(param_1 + 0x10);
          plVar1 = plVar7 + iVar3;
          for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
            if (*plVar7 == lVar12) {
              return 0;
            }
          }
          *(int *)(param_1 + 0x10) = iVar3 + 1;
          if (*(int *)(param_1 + 0x14) < iVar3 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                      ((longlong *)(param_1 + 8));
          }
          *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar3 * 8) = *param_2;
        }
        param_2 = param_2 + 3;
      } while (param_2 != plVar8);
      if (plVar9 != (longlong *)0x0) {
        lVar4 = *plVar9;
        iVar3 = *(int *)(param_1 + 0x20);
        iVar10 = 0;
        iVar5 = iVar3 + iVar6 * iVar2;
        *(int *)(param_1 + 0x20) = iVar5;
        if (*(int *)(param_1 + 0x24) < iVar5) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x18);
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar3 * 4),0,
                   (longlong)(iVar6 * iVar2) << 2);
        pfVar11 = *(float **)(param_1 + 0x18);
        if (0 < iVar2) {
          lVar12 = 0;
          do {
            iVar6 = 0;
            if (lVar4 == local_res18) {
              iVar6 = iVar10;
            }
            iVar10 = (int)((float)iVar6 + *(float *)(plVar9[1] + lVar12 * 4));
            *pfVar11 = (float)iVar10;
            pfVar11 = pfVar11 + 1;
            for (plVar8 = local_res20; plVar8 != local_res20 + local_50; plVar8 = plVar8 + 3) {
              if (plVar8 != plVar9) {
                *pfVar11 = *(float *)(plVar8[1] + lVar12 * 4);
                pfVar11 = pfVar11 + 1;
              }
            }
            lVar12 = lVar12 + 1;
          } while (lVar12 < iVar2);
        }
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1415ac290 FUN_1415ac290 body=35 status=ok
// SIG undefined FUN_1415ac290(void)

void FUN_1415ac290(DWORD *param_1,DWORD param_2)

{
  DWORD DVar1;
  
  if (param_2 == 0) {
    DVar1 = TlsAlloc();
    *param_1 = DVar1;
    return;
  }
  *param_1 = param_2;
  return;
}



// FUNCTION 1415ac2c0 FUN_1415ac2c0 body=288 status=ok
// SIG undefined FUN_1415ac2c0(void)

void FUN_1415ac2c0(int param_1,undefined4 param_2,longlong *param_3)

{
  int iVar1;
  BOOL BVar2;
  longlong lVar3;
  undefined4 local_res10 [2];
  undefined1 local_res20 [8];
  undefined4 *local_28;
  longlong *local_20;
  undefined4 *local_18;
  undefined4 **local_10;
  
  lVar3 = (longlong)param_1;
  local_res10[0] = param_2;
  if (DAT_1468b02d8 == 0) {
    lVar3 = *param_3;
  }
  else {
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0c08);
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0c08);
    }
    local_28 = local_res10;
    local_20 = param_3;
    FUN_14159e4e0(lVar3 * 0x50 + DAT_1468b02d8 + 0x470,local_res20,&local_28,0);
    local_18 = local_res10;
    local_10 = &local_28;
    local_28 = (undefined4 *)0x0;
    TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,unsigned___int64_const_&>_>
              (lVar3 * 0x78 + DAT_1468b02d8 + 0x2a0,local_res20,&local_18,0);
    lVar3 = lVar3 * 0x10;
    iVar1 = *(int *)(&DAT_1468b0c38 + lVar3);
    *(int *)(&DAT_1468b0c38 + lVar3) = iVar1 + 1;
    if (*(int *)(&DAT_1468b0c3c + lVar3) < iVar1 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_1468b0c30 + lVar3,iVar1);
    }
    *(undefined4 *)(*(longlong *)(&DAT_1468b0c30 + lVar3) + (longlong)iVar1 * 4) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0c08);
    lVar3 = *param_3;
  }
  if (lVar3 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1415ac3e0 FUN_1415ac3e0 body=3672 status=ok
// SIG undefined FUN_1415ac3e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1415ac3e0(void)

{
  int *piVar1;
  char cVar2;
  short *psVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  int iVar13;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined4 uVar14;
  longlong *local_1c8;
  int local_1c0;
  longlong *local_1b8;
  int local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined2 *local_198;
  undefined8 local_190;
  wchar_t *local_188;
  undefined8 local_180;
  wchar_t *local_178;
  undefined8 local_170;
  wchar_t *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 *local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  longlong *local_108;
  int local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  longlong local_d8;
  longlong *local_d0;
  undefined1 local_c8 [8];
  undefined1 local_c0 [8];
  undefined1 local_b8 [8];
  longlong local_b0 [2];
  longlong local_a0 [2];
  longlong local_90 [2];
  longlong local_80 [2];
  longlong local_70 [2];
  undefined1 local_60 [16];
  longlong local_50 [4];
  
  DAT_1468b0ded = FUN_1416514f0();
  DAT_1468b0dee = FUN_141651660();
  DAT_1468b0def = FUN_1416517b0();
  DAT_1468b0f3a = FApp::IsEngineInstalled();
  FString::PrintfImpl(&local_e8,L"UE4-%s",&DAT_146299580);
  if (DAT_1468b0f40 != 0) {
    FMemory::Free();
  }
  DAT_1468b0f40 = local_e8;
  DAT_1468b0f48._0_4_ = local_e0;
  DAT_1468b0f48._4_4_ = local_dc;
  psVar3 = (short *)FWindowsPlatformProcess::ExecutableName(1);
  iVar13 = 0;
  if (DAT_1468b0f50 != psVar3) {
    iVar9 = iVar13;
    if ((psVar3 != (short *)0x0) && (*psVar3 != 0)) {
      lVar10 = -1;
      do {
        lVar10 = lVar10 + 1;
      } while (psVar3[lVar10] != 0);
      iVar9 = (int)lVar10 + 1;
    }
    DAT_1468b0f58 = 0;
    iVar8 = iVar13;
    if (DAT_1468b0f5c != iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&DAT_1468b0f50,iVar9);
      iVar8 = DAT_1468b0f58;
    }
    DAT_1468b0f58 = iVar8 + iVar9;
    if (DAT_1468b0f5c < DAT_1468b0f58) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1468b0f50);
    }
    if (iVar9 != 0) {
      _guard_xfg_dispatch_icall_nop(DAT_1468b0f50,psVar3,(longlong)iVar9 * 2);
    }
  }
  local_1a8 = 0;
  local_1a0 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a8,0);
  uVar5 = local_1a8;
  FGenericPlatformString::Convert<char,wchar_t>(local_1a8,0x10,"WindowsNoEditor",0x10,0x3f);
  if (DAT_1468b0f60 != 0) {
    FMemory::Free();
  }
  DAT_1468b0f68 = (undefined4)local_1a0;
  _DAT_1468b0f6c = local_1a0._4_4_;
  DAT_1468b0f60 = uVar5;
  local_198 = (undefined2 *)0x0;
  local_190 = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,0);
  puVar7 = local_198;
  FGenericPlatformString::Convert<char,wchar_t>(local_198,8,"Windows",8,0x3f);
  if (DAT_1468b0f70 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  DAT_1468b0f78 = (int)local_190;
  _DAT_1468b0f7c = local_190._4_4_;
  DAT_1468b0f70 = puVar7;
  psVar3 = (short *)FApp::GetDeploymentName();
  if (DAT_1468b0f80 != psVar3) {
    iVar9 = iVar13;
    if ((psVar3 != (short *)0x0) && (*psVar3 != 0)) {
      lVar10 = -1;
      do {
        lVar10 = lVar10 + 1;
      } while (psVar3[lVar10] != 0);
      iVar9 = (int)lVar10 + 1;
    }
    DAT_1468b0f88 = 0;
    iVar8 = iVar13;
    if (DAT_1468b0f8c != iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&DAT_1468b0f80,iVar9);
      iVar8 = DAT_1468b0f88;
    }
    DAT_1468b0f88 = iVar8 + iVar9;
    if (DAT_1468b0f8c < DAT_1468b0f88) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1468b0f80);
    }
    if (iVar9 != 0) {
      _guard_xfg_dispatch_icall_nop(DAT_1468b0f80,psVar3,(longlong)iVar9 * 2);
    }
  }
  psVar3 = (short *)FUN_1416ac480();
  if (DAT_1468b0f90 != psVar3) {
    iVar9 = iVar13;
    if ((psVar3 != (short *)0x0) && (*psVar3 != 0)) {
      lVar10 = -1;
      do {
        lVar10 = lVar10 + 1;
      } while (psVar3[lVar10] != 0);
      iVar9 = (int)lVar10 + 1;
    }
    DAT_1468b0f98 = 0;
    iVar8 = iVar13;
    if (DAT_1468b0f9c != iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&DAT_1468b0f90,iVar9);
      iVar8 = DAT_1468b0f98;
    }
    DAT_1468b0f98 = iVar9 + iVar8;
    if (DAT_1468b0f9c < DAT_1468b0f98) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1468b0f90);
    }
    if (iVar9 != 0) {
      _guard_xfg_dispatch_icall_nop(DAT_1468b0f90,psVar3,(longlong)iVar9 * 2);
    }
  }
  psVar3 = (short *)FUN_1415b59d0();
  if (DAT_1468b0fa0 != psVar3) {
    iVar9 = iVar13;
    if ((psVar3 != (short *)0x0) && (*psVar3 != 0)) {
      lVar10 = -1;
      do {
        lVar10 = lVar10 + 1;
      } while (psVar3[lVar10] != 0);
      iVar9 = (int)lVar10 + 1;
    }
    DAT_1468b0fa8 = 0;
    iVar8 = iVar13;
    if (DAT_1468b0fac != iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&DAT_1468b0fa0,iVar9);
      iVar8 = DAT_1468b0fa8;
    }
    DAT_1468b0fa8 = iVar9 + iVar8;
    if (DAT_1468b0fac < DAT_1468b0fa8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1468b0fa0);
    }
    if (iVar9 != 0) {
      _guard_xfg_dispatch_icall_nop(DAT_1468b0fa0,psVar3,(longlong)iVar9 * 2);
    }
  }
  local_158 = 0;
  local_150 = 0;
  local_168 = (wchar_t *)0x0;
  local_160 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,0);
  builtin_wcsncpy(local_168,L"AccountId",10);
  local_178 = (wchar_t *)0x0;
  local_170 = 0x1a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,0);
  builtin_wcsncpy(local_178,L"Unreal Engine/Identifiers",0x1a);
  local_188 = (wchar_t *)0x0;
  local_180 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,0);
  builtin_wcsncpy(local_188,L"Epic Games",0xb);
  FWindowsPlatformMisc::GetStoredValue(&local_188,&local_178,&local_168,&local_158);
  if (local_188 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (local_178 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (local_168 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (DAT_1468b0fb0 != 0) {
    FMemory::Free();
  }
  DAT_1468b0fb0 = local_158;
  DAT_1468b0fb8 = (undefined4)local_150;
  _DAT_1468b0fbc = local_150._4_4_;
  FGenericPlatformMisc::GetMachineId(&local_118);
  if (((local_118 == 0 && local_110 == 0) && local_114 == 0) && local_10c == 0) {
    local_148 = 0;
    local_140 = 0;
  }
  else {
    uVar5 = FUN_141682af0(&local_118,local_b0,0);
    FString::ToLower(uVar5,&local_148);
    if (local_b0[0] != 0) {
      FMemory::Free();
    }
  }
  if (DAT_1468b0fc0 != 0) {
    FMemory::Free();
  }
  DAT_1468b0fc0 = local_148;
  DAT_1468b0fc8 = (undefined4)local_140;
  _DAT_1468b0fcc = local_140._4_4_;
  FUN_1416a0990(&DAT_1468b0fd0,&DAT_1468b0fe0);
  DAT_1468b1100 = FUN_1416a5660();
  DAT_1468b1104 = FUN_1416a5810();
  plVar4 = (longlong *)FUN_14169da10(local_a0);
  if (plVar4 != &DAT_1468b0ff0) {
    if (DAT_1468b0ff0 != 0) {
      FMemory::Free();
    }
    DAT_1468b0ff0 = *plVar4;
    *plVar4 = 0;
    DAT_1468b0ff8 = (undefined4)plVar4[1];
    _DAT_1468b0ffc = *(undefined4 *)((longlong)plVar4 + 0xc);
    plVar4[1] = 0;
  }
  if (local_a0[0] != 0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)FUN_14169d9a0(local_90);
  if (plVar4 != &DAT_1468b1000) {
    if (DAT_1468b1000 != 0) {
      FMemory::Free();
    }
    DAT_1468b1000 = *plVar4;
    *plVar4 = 0;
    DAT_1468b1008 = (undefined4)plVar4[1];
    _DAT_1468b100c = *(undefined4 *)((longlong)plVar4 + 0xc);
    plVar4[1] = 0;
  }
  if (local_90[0] != 0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)FUN_1416a0f20(local_80);
  if (plVar4 != &DAT_1468b1010) {
    if (DAT_1468b1010 != 0) {
      FMemory::Free();
    }
    DAT_1468b1010 = *plVar4;
    *plVar4 = 0;
    DAT_1468b1018 = (undefined4)plVar4[1];
    _DAT_1468b101c = *(undefined4 *)((longlong)plVar4 + 0xc);
    plVar4[1] = 0;
  }
  if (local_80[0] != 0) {
    FMemory::Free();
  }
  psVar3 = (short *)FWindowsPlatformProcess::UserName(1);
  if (DAT_1468b1020 != psVar3) {
    iVar9 = iVar13;
    if ((psVar3 != (short *)0x0) && (*psVar3 != 0)) {
      lVar10 = -1;
      do {
        lVar10 = lVar10 + 1;
      } while (psVar3[lVar10] != 0);
      iVar9 = (int)lVar10 + 1;
    }
    DAT_1468b1028 = 0;
    iVar8 = iVar13;
    if (DAT_1468b102c != iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&DAT_1468b1020,iVar9);
      iVar8 = DAT_1468b1028;
    }
    DAT_1468b1028 = iVar9 + iVar8;
    if (DAT_1468b102c < DAT_1468b1028) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1468b1020);
    }
    if (iVar9 != 0) {
      _guard_xfg_dispatch_icall_nop(DAT_1468b1020,psVar3,(longlong)iVar9 * 2);
    }
  }
  plVar4 = (longlong *)FWindowsPlatformMisc::GetDefaultLocale(local_70);
  if (plVar4 != &DAT_1468b1030) {
    if (DAT_1468b1030 != 0) {
      FMemory::Free();
    }
    DAT_1468b1030 = *plVar4;
    *plVar4 = 0;
    DAT_1468b1038 = (undefined4)plVar4[1];
    _DAT_1468b103c = *(undefined4 *)((longlong)plVar4 + 0xc);
    plVar4[1] = 0;
  }
  if (local_70[0] != 0) {
    FMemory::Free();
  }
  cVar2 = FUN_1416514e0();
  if (cVar2 == '\0') {
    psVar3 = &DAT_144c96694;
  }
  else {
    psVar3 = (short *)FCommandLine::GetOriginalForLogging();
  }
  if (DAT_1468b1070 != psVar3) {
    iVar9 = iVar13;
    if ((psVar3 != (short *)0x0) && (*psVar3 != 0)) {
      lVar10 = -1;
      do {
        lVar10 = lVar10 + 1;
      } while (psVar3[lVar10] != 0);
      iVar9 = (int)lVar10 + 1;
    }
    DAT_1468b1078 = 0;
    if (DAT_1468b107c != iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&DAT_1468b1070,iVar9);
      iVar13 = DAT_1468b1078;
    }
    DAT_1468b1078 = iVar9 + iVar13;
    if (DAT_1468b107c < DAT_1468b1078) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1468b1070);
    }
    if (iVar9 != 0) {
      _guard_xfg_dispatch_icall_nop(DAT_1468b1070,psVar3,(longlong)iVar9 * 2);
    }
  }
  cVar2 = FInternationalization::IsAvailable();
  if (cVar2 == '\0') {
    local_138 = (undefined4 *)0x0;
    local_130 = 3;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
    *local_138 = 0x6e0065;
    *(undefined2 *)(local_138 + 1) = 0;
    uVar5 = FInternationalization::Get();
    FInternationalization::GetCulture(uVar5,&local_d8,&local_138);
    if (local_138 != (undefined4 *)0x0) {
      FMemory::Free();
    }
    if (local_d8 == 0) {
      DAT_1468b1110 = 0x409;
    }
    else {
      DAT_1468b1110 = FSlateTextBlockLayout::SetDebugSourceInfo();
    }
  }
  else {
    lVar10 = FInternationalization::Get();
    local_d0 = *(longlong **)(lVar10 + 0x30);
    uVar5 = *(undefined8 *)(lVar10 + 0x28);
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
      UNLOCK();
    }
    DAT_1468b1110 = FSlateTextBlockLayout::SetDebugSourceInfo(uVar5);
  }
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_d0 + 1;
    lVar10 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar1 = (int *)((longlong)local_d0 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_d0 + 8))(local_d0,1);
      }
    }
  }
  DAT_1468b1108 = 0;
  cVar2 = FUN_1416514e0();
  if (cVar2 != '\0') {
    uVar5 = FCommandLine::Get();
    cVar2 = FParse::Param(uVar5,L"fullcrashdumpalways");
    if (cVar2 == '\0') {
      cVar2 = FParse::Param(uVar5,L"fullcrashdump");
      if (cVar2 != '\0') {
        DAT_1468b1108 = 1;
      }
    }
    else {
      DAT_1468b1108 = 2;
    }
  }
  FGuid::NewGuid(local_60);
  puVar6 = (undefined8 *)FUN_141682af0(local_60,local_50,0);
  if (*(int *)(puVar6 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*puVar6;
  }
  puVar12 = &DAT_143f3eda8;
  if (DAT_1468b0f78 != 0) {
    puVar12 = DAT_1468b0f70;
  }
  puVar11 = &DAT_143f3eda8;
  if (DAT_1464a8668 != 0) {
    puVar11 = DAT_1464a8660;
  }
  FString::PrintfImpl(&local_128,L"%s%s-%s",puVar11,puVar12,puVar7);
  uVar14 = (undefined4)((ulonglong)puVar7 >> 0x20);
  if (DAT_1468b1040 != 0) {
    FMemory::Free();
  }
  DAT_1468b1040 = local_128;
  DAT_1468b1048 = (undefined4)local_120;
  _DAT_1468b104c = local_120._4_4_;
  local_120 = 0;
  local_128 = 0;
  if (local_50[0] != 0) {
    FMemory::Free();
  }
  local_1c8 = (longlong *)0x0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x20);
  local_1c0 = 2;
  local_1c8 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_GetPoolName_144ca0b08;
    lVar10 = FDelegateHandle::GenerateNewID();
    plVar4[2] = lVar10;
  }
  uVar5 = FUN_14164ab60();
  FUN_14158f860(uVar5,local_res8,&local_1c8,L"FGenericCrashContext_Lambda",
                CONCAT44(uVar14,0x3f800000));
  if (local_1c0 != 0) {
    if (local_1c8 == (longlong *)0x0) goto LAB_1415ace8f;
    (**(code **)(*local_1c8 + 0x28))(local_1c8,0);
    if (local_1c8 != (longlong *)0x0) {
      local_1c8 = (longlong *)FMemory::Realloc(local_1c8,0,0);
    }
    local_1c0 = 0;
  }
  if (local_1c8 != (longlong *)0x0) {
    FMemory::Free(local_1c8);
  }
LAB_1415ace8f:
  plVar4 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_GetPoolName_144ca0bd8;
    lVar10 = FDelegateHandle::GenerateNewID();
    plVar4[2] = lVar10;
    *plVar4 = (longlong)&PTR_GetPoolName_144ca0c20;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af628,1);
    (**(code **)(*plVar4 + 0x20))(plVar4,local_res10);
    iVar13 = DAT_1464af630;
    lVar10 = (longlong)DAT_1464af630;
    DAT_1464af630 = DAT_1464af630 + 1;
    if (DAT_1464af634 < DAT_1464af630) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af628,iVar13);
    }
    puVar6 = (undefined8 *)(lVar10 * 0x10 + _DAT_1464af628);
    *puVar6 = plVar4;
    *(undefined4 *)(puVar6 + 1) = 2;
  }
  plVar4 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_GetPoolName_144ca0c68;
    lVar10 = FDelegateHandle::GenerateNewID();
    plVar4[2] = lVar10;
    *plVar4 = (longlong)&PTR_GetPoolName_144ca0cb0;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af640,1);
    (**(code **)(*plVar4 + 0x20))(plVar4,local_res18);
    iVar13 = DAT_1464af648;
    lVar10 = (longlong)DAT_1464af648;
    DAT_1464af648 = DAT_1464af648 + 1;
    if (DAT_1464af64c < DAT_1464af648) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af640,iVar13);
    }
    puVar6 = (undefined8 *)(lVar10 * 0x10 + _DAT_1464af640);
    *puVar6 = plVar4;
    *(undefined4 *)(puVar6 + 1) = 2;
  }
  plVar4 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_GetPoolName_144ca0cf8;
    lVar10 = FDelegateHandle::GenerateNewID();
    plVar4[2] = lVar10;
    *plVar4 = (longlong)&PTR_GetPoolName_144ca0d40;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af658,1);
    (**(code **)(*plVar4 + 0x20))(plVar4,local_res20);
    iVar13 = DAT_1464af660;
    lVar10 = (longlong)DAT_1464af660;
    DAT_1464af660 = DAT_1464af660 + 1;
    if (DAT_1464af664 < DAT_1464af660) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af658,iVar13);
    }
    puVar6 = (undefined8 *)(lVar10 * 0x10 + DAT_1464af658);
    *puVar6 = plVar4;
    *(undefined4 *)(puVar6 + 1) = 2;
  }
  local_108 = (longlong *)0x0;
  local_100 = 0;
  puVar6 = (undefined8 *)operator_new(0x18,&local_108);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_GetPoolName_144ca0d88;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar5;
    *puVar6 = &PTR_GetPoolName_144ca0dd0;
  }
  iVar13 = local_100;
  plVar4 = local_108;
  if (local_100 == 0) {
    if (local_108 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  else if (local_108 != (longlong *)0x0) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af670,1);
    (**(code **)(*plVar4 + 0x20))(plVar4,local_c8);
    iVar9 = DAT_1464af678;
    lVar10 = (longlong)DAT_1464af678;
    DAT_1464af678 = DAT_1464af678 + 1;
    if (DAT_1464af67c < DAT_1464af678) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af670,iVar9);
    }
    puVar6 = (undefined8 *)(lVar10 * 0x10 + _DAT_1464af670);
    *puVar6 = plVar4;
    *(int *)(puVar6 + 1) = iVar13;
  }
  local_1b8 = (longlong *)0x0;
  local_1b0 = 0;
  puVar6 = (undefined8 *)operator_new(0x18,&local_1b8);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_GetPoolName_144ca0e18;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar5;
    *puVar6 = &PTR_GetPoolName_144ca0e60;
  }
  iVar13 = local_1b0;
  plVar4 = local_1b8;
  if ((local_1b0 != 0) && (local_1b8 != (longlong *)0x0)) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af688,1);
    (**(code **)(*plVar4 + 0x20))(plVar4,local_c0);
    iVar9 = DAT_1464af690;
    lVar10 = (longlong)DAT_1464af690;
    DAT_1464af690 = DAT_1464af690 + 1;
    if (DAT_1464af694 < DAT_1464af690) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af688,iVar9);
    }
    local_1b8 = (longlong *)0x0;
    puVar6 = (undefined8 *)(lVar10 * 0x10 + _DAT_1464af688);
    local_1b0 = 0;
    *puVar6 = plVar4;
    *(int *)(puVar6 + 1) = iVar13;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1b8);
  local_f8 = 0;
  local_f0 = 0;
  puVar6 = (undefined8 *)operator_new(0x20,&local_f8);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_GetPoolName_143f3f048;
    puVar6[1] = FUN_1415ad240;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar6[3] = uVar5;
    *puVar6 = &PTR_GetPoolName_143f3f090;
  }
  TBaseMulticastDelegate<void>::Add(&DAT_1464af6a0,local_b8,&local_f8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_f8);
  DAT_1468b02a0 = 1;
  return;
}



// FUNCTION 1415ad240 FUN_1415ad240 body=884 status=ok
// SIG undefined FUN_1415ad240(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1415ad240(void)

{
  longlong lVar1;
  int iVar2;
  undefined2 *puVar3;
  short *_Src;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_258 [32];
  undefined8 *local_238;
  short *local_228;
  undefined8 local_220;
  void *local_218;
  ulonglong local_210;
  undefined8 *local_208;
  longlong *local_200;
  undefined1 local_1f8 [16];
  longlong local_1e8 [4];
  longlong local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  longlong local_1a8;
  undefined4 local_1a0;
  longlong local_198 [4];
  longlong local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 local_164;
  longlong local_158;
  undefined4 local_150;
  undefined1 local_148 [80];
  undefined1 local_f8;
  undefined8 local_28;
  undefined2 *local_20;
  undefined *local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  FGenericCrashContext::PurgeOldCrashConfig();
  local_238 = &DAT_1468e2360;
  puVar3 = &DAT_143f3eda8;
  if (DAT_1464a8648 != 0) {
    puVar3 = DAT_1464a8640;
  }
  lVar1 = FConfigCacheIni::GetSectionPrivate(DAT_1468b6148,puVar3,0,1);
  if (lVar1 != 0) {
    FConfigFile::FConfigFile(local_148);
    lVar5 = -1;
    local_1e8[0] = 0;
    local_1e8[1] = 0;
    local_1c8 = 0;
    local_1c0 = 0;
    local_1b8 = 0xffffffff;
    local_1b4 = 0;
    local_1a8 = 0;
    local_1a0 = 0;
    TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
    ::operator=(local_1e8,lVar1);
    local_198[0] = 0;
    local_198[1] = 0;
    local_178 = 0;
    local_170 = 0;
    local_168 = 0xffffffff;
    local_164 = 0;
    local_158 = 0;
    local_150 = 0;
    TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
    operator=(local_198,lVar1 + 0x50);
    local_208 = &DAT_1464a8640;
    local_200 = local_1e8;
    TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FConfigSection_const_&>_>
              (local_148,local_1f8,&local_208,0);
    local_f8 = 1;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_1468b1338) &&
       (_Init_thread_header(&DAT_1468b1338), DAT_1468b1338 == -1)) {
      DAT_1468b1328 = (short *)0x0;
      _DAT_1468b1330 = 0;
      atexit((_func_5014 *)&LAB_143e75ac0);
      _Init_thread_footer(&DAT_1468b1338);
    }
    iVar2 = DAT_1468b1330;
    if (DAT_1468b1330 < 2) {
      puVar3 = &DAT_143f3eda8;
      if (DAT_1468b1048 != 0) {
        puVar3 = DAT_1468b1040;
      }
      local_28 = FUN_1415a9460();
      local_18 = PTR_u_CrashReportClient_ini_1464a8350;
      local_228 = (short *)0x0;
      local_220 = 0;
      local_20 = puVar3;
      FPaths::CombineInternal(&local_228,&local_28,3);
      if (DAT_1468b1328 != (short *)0x0) {
        FMemory::Free();
      }
      iVar2 = (int)local_220;
      DAT_1468b1328 = local_228;
      local_228 = (short *)0x0;
      _DAT_1468b1330 = local_220;
      local_220 = 0;
    }
    local_210 = 0;
    _Src = &DAT_143f3eda8;
    if (iVar2 != 0) {
      _Src = DAT_1468b1328;
    }
    local_218 = (void *)0x0;
    if ((_Src != (short *)0x0) && (*_Src != 0)) {
      do {
        lVar5 = lVar5 + 1;
      } while (_Src[lVar5] != 0);
      uVar4 = (int)lVar5 + 1;
      local_210 = (ulonglong)uVar4;
      if (0 < (int)uVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_218,0);
      }
      _guard_xfg_dispatch_icall_nop(local_218,_Src,(longlong)(int)uVar4 * 2);
    }
    local_208 = (undefined8 *)0x0;
    local_200 = (longlong *)0x0;
    FConfigFile::Write(local_148,&local_218,1,&local_208);
    if (local_208 != (undefined8 *)0x0) {
      FMemory::Free();
    }
    if (local_218 != (void *)0x0) {
      FMemory::Free();
    }
    local_150 = 0;
    if (local_158 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(local_198,0);
    if (local_178 != 0) {
      FMemory::Free();
    }
    if (local_198[0] != 0) {
      FMemory::Free();
    }
    local_1a0 = 0;
    if (local_1a8 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FName,FRetargetSourceCachedData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(local_1e8,0);
    if (local_1c8 != 0) {
      FMemory::Free();
    }
    if (local_1e8[0] != 0) {
      FMemory::Free();
    }
    FConfigFile::~FConfigFile(local_148);
  }
  return;
}



// FUNCTION 1415ad5c0 FUN_1415ad5c0 body=96 status=ok
// SIG undefined FUN_1415ad5c0(void)

ulonglong FUN_1415ad5c0(void)

{
  byte bVar1;
  BOOL BVar2;
  ulonglong in_RAX;
  
  if (DAT_1468b02d8 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0c08);
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0c08);
  }
  bVar1 = *(byte *)(DAT_1468b02d8 + 0x601);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0c08);
  return (ulonglong)bVar1;
}



// FUNCTION 1415ad620 IsFullCrashDump body=15 status=ok
// SIG undefined IsFullCrashDump(void)

undefined4 FGenericCrashContext::IsFullCrashDump(void)

{
  return CONCAT31((int3)(DAT_1468b1108 - 1U >> 8),DAT_1468b1108 - 1U < 2);
}



// FUNCTION 1415ad630 IsFullCrashDumpOnEnsure body=11 status=ok
// SIG undefined IsFullCrashDumpOnEnsure(void)

bool FGenericCrashContext::IsFullCrashDumpOnEnsure(void)

{
  return DAT_1468b1108 == 2;
}



// FUNCTION 1415ad640 FUN_1415ad640 body=11 status=ok
// SIG undefined FUN_1415ad640(void)

void FUN_1415ad640(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001415ad647. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
  return;
}



// FUNCTION 1415ad650 IsNumeric body=116 status=ok
// SIG undefined IsNumeric(void)

ulonglong TCString<wchar_t>::IsNumeric(wint_t *param_1)

{
  wint_t _C;
  bool bVar1;
  int iVar2;
  undefined4 extraout_var;
  ulonglong uVar3;
  
  _C = *param_1;
  if ((_C == 0x2d) || (_C == 0x2b)) {
    _C = param_1[1];
    param_1 = param_1 + 1;
  }
  bVar1 = false;
  do {
    if (_C == 0) {
      return 1;
    }
    if (_C == 0x2e) {
      uVar3 = 0;
      if (bVar1) {
LAB_1415ad6b7:
        return uVar3 & 0xffffffffffffff00;
      }
      bVar1 = true;
    }
    else {
      iVar2 = iswdigit(_C);
      uVar3 = CONCAT44(extraout_var,iVar2);
      if (iVar2 == 0) goto LAB_1415ad6b7;
    }
    _C = param_1[1];
    param_1 = param_1 + 1;
  } while( true );
}



// FUNCTION 1415ad6d0 IsPtrInSmallPool body=67 status=ok
// SIG undefined IsPtrInSmallPool(void)

ulonglong FGenericPlatformMallocCrash::IsPtrInSmallPool(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  ulonglong in_RAX;
  
  if (*(ulonglong *)(param_1 + 0x48) <= param_2) {
    uVar1 = FUN_1415aaf40();
    in_RAX = *(ulonglong *)(param_1 + 0x48);
    if (param_2 < uVar1 + in_RAX) {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1415ad720 FUN_1415ad720 body=38 status=ok
// SIG undefined FUN_1415ad720(void)

bool FUN_1415ad720(DWORD *param_1)

{
  LPVOID pvVar1;
  
  if (*param_1 != 0) {
    pvVar1 = TlsGetValue(*param_1);
    return (int)pvVar1 != 0;
  }
  return false;
}



// FUNCTION 1415ad750 FUN_1415ad750 body=45 status=ok
// SIG undefined FUN_1415ad750(void)

void FUN_1415ad750(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **local_28;
  longlong *local_20;
  undefined8 local_18;
  
  local_28 = &PTR_FUN_144ca07c8;
  local_20 = param_1;
  local_18 = param_3;
  (**(code **)(*param_1 + 0xf0))(param_1,param_2,&local_28);
  return;
}



// FUNCTION 1415ad780 FUN_1415ad780 body=45 status=ok
// SIG undefined FUN_1415ad780(void)

void FUN_1415ad780(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **local_28;
  longlong *local_20;
  undefined8 local_18;
  
  local_28 = &PTR_FUN_144ca07d8;
  local_20 = param_1;
  local_18 = param_3;
  (**(code **)(*param_1 + 0xf8))(param_1,param_2,&local_28);
  return;
}



// FUNCTION 1415ad7b0 FUN_1415ad7b0 body=639 status=ok
// SIG undefined FUN_1415ad7b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1415ad7b0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined1 local_78 [24];
  longlong local_60 [4];
  longlong *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  lVar4 = *(longlong *)(param_1 + 0x40);
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 0xc);
    iVar7 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      puVar8 = (undefined8 *)FTaskGraphInterface::Get();
      (**(code **)*puVar8)(puVar8,lVar4,*(undefined4 *)(lVar4 + 8),2);
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    plVar2 = (longlong *)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 8) = 1;
    plVar9 = (longlong *)TGraphTask<FNullGraphTask>::CreateTask(local_78,plVar2,2);
    *(undefined4 *)(*plVar9 + 0x10) = 0xaff;
    lVar4 = *plVar9;
    lVar6 = plVar9[2];
    lVar5 = plVar9[1];
    lVar11 = *(longlong *)(lVar4 + 0x18);
    piVar1 = (int *)(lVar11 + 0x48);
    if (lVar11 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_80 = lVar11;
    FUN_141599db0(lVar4,lVar5,(int)lVar6,1);
    plVar10 = (longlong *)FTaskGraphInterface::Get();
    local_40 = (longlong *)0x0;
    local_38 = 1;
    TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(local_60,0)
    ;
    plVar9 = local_60;
    if (local_40 != (longlong *)0x0) {
      plVar9 = local_40;
    }
    *plVar9 = lVar11;
    if (lVar11 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      lVar11 = local_80;
    }
    (**(code **)(*plVar10 + 0x48))(plVar10,local_60,0x102);
    plVar9 = local_60;
    iVar7 = (int)local_38;
    if (local_40 != (longlong *)0x0) {
      plVar9 = local_40;
    }
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar9 != 0) {
        LOCK();
        piVar3 = (int *)(*plVar9 + 0x48);
        iVar12 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          FGraphEvent::Recycle();
        }
      }
      lVar11 = local_80;
      plVar9 = plVar9 + 1;
    }
    if (local_40 != (longlong *)0x0) {
      FMemory::Free();
    }
    iVar7 = *(int *)(param_1 + 0x3c);
    plVar9 = *(longlong **)(param_1 + 0x30);
    iVar12 = *(int *)(param_1 + 0x38);
    if (iVar7 < 0) {
      if (plVar9 == (longlong *)0x0) {
        plVar9 = plVar2;
      }
      if (iVar12 != 0) {
        do {
          if (*plVar9 != 0) {
            LOCK();
            piVar3 = (int *)(*plVar9 + 0x48);
            iVar7 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              FGraphEvent::Recycle();
            }
          }
          plVar9 = plVar9 + 1;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
        iVar7 = *(int *)(param_1 + 0x3c);
        lVar11 = local_80;
      }
      *(undefined4 *)(param_1 + 0x38) = 0;
      if (iVar7 != 0) {
        TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeTo(plVar2,0)
        ;
      }
    }
    else {
      if (plVar9 == (longlong *)0x0) {
        plVar9 = plVar2;
      }
      for (; iVar12 != 0; iVar12 = iVar12 + -1) {
        if (*plVar9 != 0) {
          LOCK();
          piVar3 = (int *)(*plVar9 + 0x48);
          iVar7 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            FGraphEvent::Recycle();
          }
        }
        lVar11 = local_80;
        plVar9 = plVar9 + 1;
      }
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    *(undefined1 *)(param_1 + 8) = 0;
    if (lVar11 != 0) {
      LOCK();
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        FGraphEvent::Recycle(local_80);
      }
    }
  }
  FUN_1415bb7c0(param_1);
  return;
}



// FUNCTION 1415ada30 FUN_1415ada30 body=516 status=ok
// SIG undefined FUN_1415ada30(void)

ulonglong FUN_1415ada30(longlong *param_1,undefined4 param_2,longlong *param_3,char param_4)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  float *pfVar4;
  undefined8 in_RDX;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  undefined4 local_28;
  undefined4 uStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  
  if ((param_4 != '\0') && (*param_1 != 0)) {
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    fStack_20 = (float)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    uVar1 = FUN_1415ada30(*param_1,in_RDX,&local_28,0);
    return uVar1;
  }
  lVar2 = param_1[2];
  lVar7 = (longlong)(int)param_3[1];
  if ((int)param_3[1] == (int)lVar2) {
    in_RAX = FUN_1415a9d50(param_1,&local_28,param_2);
    uVar1 = CONCAT44(uStack_24,local_28);
    if (uVar1 != 0) {
      lVar3 = (longlong)((int)lVar2 + 1);
      lVar2 = param_1[3];
      lVar5 = 0;
      lVar6 = uVar1 + lVar3 * -4;
      if (uVar1 < (ulonglong)(lVar3 * 4 + lVar2)) {
        lVar6 = lVar5;
      }
      if (3 < lVar7) {
        pfVar4 = (float *)(uVar1 + 8);
        lVar3 = *param_3;
        lVar9 = lVar3 - uVar1;
        lVar8 = lVar6 - uVar1;
        lVar10 = (lVar7 - 4U >> 2) + 1;
        lVar5 = lVar10 * 4;
        do {
          fVar11 = pfVar4[-1];
          if (uVar1 != param_1[3]) {
            lVar2 = (longlong)pfVar4 + (-8 - uVar1);
            fVar11 = (fVar11 - *(float *)(lVar2 + 4 + lVar6)) * fStack_20 +
                     *(float *)(lVar2 + 4 + lVar6);
          }
          *(float *)((longlong)pfVar4 + lVar9 + -8) = fVar11;
          fVar11 = *pfVar4;
          if (uVar1 != param_1[3]) {
            fVar11 = (fVar11 - *(float *)(lVar8 + (longlong)pfVar4)) * fStack_20 +
                     *(float *)(lVar8 + (longlong)pfVar4);
          }
          *(float *)((lVar3 - uVar1) + -4 + (longlong)pfVar4) = fVar11;
          fVar11 = pfVar4[1];
          if (uVar1 != param_1[3]) {
            fVar11 = (fVar11 - *(float *)((longlong)pfVar4 + lVar8 + 4)) * fStack_20 +
                     *(float *)((longlong)pfVar4 + lVar8 + 4);
          }
          *(float *)(lVar9 + (longlong)pfVar4) = fVar11;
          fVar11 = pfVar4[2];
          if (uVar1 != param_1[3]) {
            fVar11 = (fVar11 - *(float *)((longlong)pfVar4 + lVar8 + 8)) * fStack_20 +
                     *(float *)((longlong)pfVar4 + lVar8 + 8);
          }
          *(float *)(lVar9 + 4 + (longlong)pfVar4) = fVar11;
          pfVar4 = pfVar4 + 4;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      if (lVar5 < lVar7) {
        lVar3 = *param_3;
        lVar7 = lVar7 - lVar5;
        pfVar4 = (float *)(lVar3 + lVar5 * 4);
        do {
          fVar11 = *(float *)((uVar1 - lVar3) + 4 + (longlong)pfVar4);
          if (uVar1 != param_1[3]) {
            lVar2 = (longlong)pfVar4 - lVar3;
            fVar11 = (fVar11 - *(float *)(lVar2 + 4 + lVar6)) * fStack_20 +
                     *(float *)(lVar2 + 4 + lVar6);
          }
          *pfVar4 = fVar11;
          pfVar4 = pfVar4 + 1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1415adc40 FUN_1415adc40 body=1010 status=ok
// SIG undefined FUN_1415adc40(void)

void FUN_1415adc40(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  uVar1 = *param_1;
  puVar3 = param_1 + 200;
  *param_1 = 0;
  iVar4 = 0;
  do {
    uVar2 = FUN_1416ab990(iVar4);
    iVar4 = iVar4 + 1;
    *puVar3 = uVar2;
    puVar3 = puVar3 + 1;
  } while (iVar4 < 7);
  *(undefined8 *)(param_1 + 0xc) = 0xffffffffffffffff;
  if (0 < DAT_1464a8740) {
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  *(undefined8 *)(param_1 + 0x14) = 0xffffffffffffffff;
  if (0 < DAT_1464a8740) {
    *(undefined1 *)(param_1 + 0x16) = 1;
  }
  *(undefined8 *)(param_1 + 0x1c) = 0xffffffffffffffff;
  if (0 < DAT_1464a8740) {
    *(undefined1 *)(param_1 + 0x1e) = 1;
  }
  *(undefined8 *)(param_1 + 0x24) = 0xffffffffffffffff;
  if (0 < DAT_1464a8740) {
    *(undefined1 *)(param_1 + 0x26) = 1;
  }
  *(undefined8 *)(param_1 + 0x2c) = 0xffffffffffffffff;
  if (0 < DAT_1464a8740) {
    *(undefined1 *)(param_1 + 0x2e) = 1;
  }
  *(undefined8 *)(param_1 + 0x34) = 0xffffffffffffffff;
  if (0 < DAT_1464a8740) {
    *(undefined1 *)(param_1 + 0x36) = 1;
  }
  *(undefined8 *)(param_1 + 0x3c) = 0xffffffffffffffff;
  if (0 < DAT_1464a8740) {
    *(undefined1 *)(param_1 + 0x3e) = 1;
  }
  *(undefined8 *)(param_1 + 0x44) = 0xffffffffffffffff;
  if (0 < DAT_1464a8740) {
    *(undefined1 *)(param_1 + 0x46) = 1;
  }
  *(undefined8 *)(param_1 + 0x4c) = 0xffffffffffffffff;
  if (0 < DAT_1464a8740) {
    *(undefined1 *)(param_1 + 0x4e) = 1;
  }
  *(undefined8 *)(param_1 + 0x54) = 0xffffffffffffffff;
  if (0 < DAT_1464a8740) {
    *(undefined1 *)(param_1 + 0x56) = 1;
  }
  *(undefined8 *)(param_1 + 0x5c) = 0xffffffffffffffff;
  if (0 < DAT_1464a8740) {
    *(undefined1 *)(param_1 + 0x5e) = 1;
  }
  *(undefined8 *)(param_1 + 100) = 0xffffffffffffffff;
  if (0 < DAT_1464a8740) {
    *(undefined1 *)(param_1 + 0x66) = 1;
  }
  *(undefined8 *)(param_1 + 0x6c) = 0xffffffffffffffff;
  if (0 < DAT_1464a8740) {
    *(undefined1 *)(param_1 + 0x6e) = 1;
  }
  *(undefined8 *)(param_1 + 0x74) = 0xffffffffffffffff;
  if (0 < DAT_1464a8740) {
    *(undefined1 *)(param_1 + 0x76) = 1;
  }
  *(undefined8 *)(param_1 + 0x7c) = 0xffffffffffffffff;
  if (0 < DAT_1464a8740) {
    *(undefined1 *)(param_1 + 0x7e) = 1;
  }
  *(undefined8 *)(param_1 + 0x84) = 0xffffffffffffffff;
  if (0 < DAT_1464a8740) {
    *(undefined1 *)(param_1 + 0x86) = 1;
  }
  *(undefined8 *)(param_1 + 0x8c) = 0xffffffffffffffff;
  if (0 < DAT_1464a8740) {
    *(undefined1 *)(param_1 + 0x8e) = 1;
  }
  *(undefined8 *)(param_1 + 0x94) = 0xffffffffffffffff;
  if (0 < DAT_1464a8740) {
    *(undefined1 *)(param_1 + 0x96) = 1;
  }
  param_1[10] = 5;
  if (0 < DAT_1464a8740) {
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  param_1[0x1a] = 0;
  if (0 < DAT_1464a8740) {
    *(undefined1 *)(param_1 + 0x1e) = 1;
  }
  param_1[0x22] = 0;
  if (0 < DAT_1464a8740) {
    *(undefined1 *)(param_1 + 0x26) = 1;
  }
  param_1[0x2a] = 2;
  if (0 < DAT_1464a8740) {
    *(undefined1 *)(param_1 + 0x2e) = 1;
  }
  param_1[0x32] = 5;
  if (0 < DAT_1464a8740) {
    *(undefined1 *)(param_1 + 0x36) = 1;
  }
  param_1[0x3a] = 4;
  if (0 < DAT_1464a8740) {
    *(undefined1 *)(param_1 + 0x3e) = 1;
  }
  param_1[0x42] = 1;
  if (0 < DAT_1464a8740) {
    *(undefined1 *)(param_1 + 0x46) = 1;
  }
  param_1[0x4a] = 1;
  if (0 < DAT_1464a8740) {
    *(undefined1 *)(param_1 + 0x4e) = 1;
  }
  param_1[0x52] = 5;
  if (0 < DAT_1464a8740) {
    *(undefined1 *)(param_1 + 0x56) = 1;
  }
  param_1[0x5a] = 4;
  if (0 < DAT_1464a8740) {
    *(undefined1 *)(param_1 + 0x5e) = 1;
  }
  param_1[0x62] = 5;
  if (0 < DAT_1464a8740) {
    *(undefined1 *)(param_1 + 0x66) = 1;
  }
  param_1[0x6a] = 2;
  if (0 < DAT_1464a8740) {
    *(undefined1 *)(param_1 + 0x6e) = 1;
  }
  param_1[0x72] = 1;
  if (0 < DAT_1464a8740) {
    *(undefined1 *)(param_1 + 0x76) = 1;
  }
  param_1[0x7a] = 3;
  if (0 < DAT_1464a8740) {
    *(undefined1 *)(param_1 + 0x7e) = 1;
  }
  param_1[0x82] = 5;
  if (0 < DAT_1464a8740) {
    *(undefined1 *)(param_1 + 0x86) = 1;
  }
  param_1[0x8a] = 2;
  if (0 < DAT_1464a8740) {
    *(undefined1 *)(param_1 + 0x8e) = 1;
  }
  param_1[0x92] = 5;
  if (0 < DAT_1464a8740) {
    *(undefined1 *)(param_1 + 0x96) = 1;
  }
  param_1[4] = 0;
  if (param_1[5] != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 2,0);
  }
  *param_1 = uVar1;
  return;
}



// FUNCTION 1415ae040 FUN_1415ae040 body=953 status=ok
// SIG undefined FUN_1415ae040(void)

void FUN_1415ae040(void)

{
  char cVar1;
  int iVar2;
  BOOL BVar3;
  int extraout_EAX;
  int extraout_EAX_00;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined2 *puVar7;
  wchar_t *pwVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  int local_res8 [2];
  undefined4 local_res10 [2];
  undefined1 local_res18 [8];
  undefined8 *puVar13;
  longlong *local_58;
  ulonglong local_50;
  undefined2 *local_48;
  int local_40;
  int *local_38;
  undefined4 *local_30;
  longlong lVar6;
  
  FConfigCacheIni::GetBool
            (DAT_1468b6148,L"CallstackReporting",L"bSaveReportedStacks",&DAT_1464a8331,
             &DAT_1468e2360);
  FConfigCacheIni::GetInt
            (DAT_1468b6148,L"CallstackReporting",L"LoggedErrorsPerHash",&DAT_1468b02a8,
             &DAT_1468e2360);
  puVar13 = &DAT_1468e2360;
  FConfigCacheIni::GetInt
            (DAT_1468b6148,L"CallstackReporting",L"ReportedErrorsPerHash",&DAT_1468b02ac,
             &DAT_1468e2360);
  if ((DAT_1464a8331 != '\0') && (cVar1 = FUN_1415b84f0(), cVar1 != '\0')) {
    puVar4 = (undefined8 *)FPaths::GeneratedConfigDir(&local_38);
    if (*(int *)(puVar4 + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*puVar4;
    }
    FConfigCacheIni::LoadGlobalIniFile
              (&DAT_1468b0e28,L"GbxCallstackReporting",0,0,(ulonglong)puVar13 & 0xffffffffffffff00,1
               ,puVar7);
    if (local_38 != (int *)0x0) {
      FMemory::Free();
    }
    FConfigCacheIni::GetStr
              (DAT_1468b6148,&local_48,PTR_u_GbxCallstackReporting_1464a8380,L"BuildVersion",
               &DAT_1468b0e28);
    uVar5 = FUN_14162b4e0();
    puVar7 = &DAT_143f3eda8;
    if (local_40 != 0) {
      puVar7 = local_48;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,uVar5);
    if (iVar2 != 0) {
      FConfigCacheIni::EmptySection
                (DAT_1468b6148,PTR_u_GbxCallstackReporting_1464a8380,&DAT_1468b0e28);
    }
    local_58 = (longlong *)0x0;
    local_50 = 0;
    iVar2 = FConfigCacheIni::GetSingleLineArray
                      (DAT_1468b6148,PTR_u_GbxCallstackReporting_1464a8380,L"StackHashes",&local_58,
                       &DAT_1468b0e28);
    if (iVar2 != 0) {
      BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0df0);
      if (BVar3 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0df0);
      }
      uVar12 = (ulonglong)(int)local_50;
      plVar10 = local_58 + uVar12 * 2;
      plVar9 = local_58;
      if (local_58 != plVar10) {
        do {
          if ((int)plVar9[1] == 0) {
            pwVar8 = L"";
          }
          else {
            pwVar8 = (wchar_t *)*plVar9;
          }
          lVar6 = _wtoi64(pwVar8);
          extraout_EAX = (int)lVar6;
          local_res8[0] = extraout_EAX;
          if (extraout_EAX != 0) {
            FUN_14044be50(&DAT_1464a8590,local_res10,local_res8,0);
          }
          plVar9 = plVar9 + 2;
        } while (plVar9 != plVar10);
        uVar12 = local_50 & 0xffffffff;
      }
      uVar11 = (uint)uVar12;
      plVar9 = local_58;
      while (uVar11 != 0) {
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        plVar9 = plVar9 + 2;
        uVar11 = (int)uVar12 - 1;
        uVar12 = (ulonglong)uVar11;
      }
      uVar12 = local_50 >> 0x20;
      local_50 = local_50 & 0xffffffff00000000;
      if ((int)uVar12 != 0) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_58,0);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0df0);
    }
    iVar2 = FConfigCacheIni::GetSingleLineArray
                      (DAT_1468b6148,PTR_u_GbxCallstackReporting_1464a8380,L"ScriptHashes",&local_58
                       ,&DAT_1468b0e28);
    if (iVar2 != 0) {
      BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0df0);
      if (BVar3 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0df0);
      }
      uVar12 = (ulonglong)(int)local_50;
      plVar10 = local_58 + uVar12 * 2;
      plVar9 = local_58;
      if (local_58 != plVar10) {
        do {
          local_res8[0] = 0;
          if ((int)plVar9[1] == 0) {
            pwVar8 = L"";
          }
          else {
            pwVar8 = (wchar_t *)*plVar9;
          }
          lVar6 = _wtoi64(pwVar8);
          extraout_EAX_00 = (int)lVar6;
          local_res8[0] = extraout_EAX_00;
          if (extraout_EAX_00 != 0) {
            local_38 = local_res8;
            local_res10[0] = 0;
            local_30 = local_res10;
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
            Emplace<TPairInitializer<int_const_&,int_&&>_>(&DAT_1464a85e0,local_res18,&local_38,0);
          }
          plVar9 = plVar9 + 2;
        } while (plVar9 != plVar10);
        uVar12 = local_50 & 0xffffffff;
      }
      uVar11 = (uint)uVar12;
      plVar9 = local_58;
      while (uVar11 != 0) {
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        plVar9 = plVar9 + 2;
        uVar11 = (int)uVar12 - 1;
        uVar12 = (ulonglong)uVar11;
      }
      uVar12 = local_50 >> 0x20;
      local_50 = local_50 & 0xffffffff00000000;
      if ((int)uVar12 != 0) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_58,0);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0df0);
    }
    plVar9 = local_58;
    for (iVar2 = (int)local_50; iVar2 != 0; iVar2 = iVar2 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free(local_58);
    }
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1415ae400 FUN_1415ae400 body=1866 status=ok
// SIG undefined FUN_1415ae400(void)

undefined8 FUN_1415ae400(longlong *param_1,byte param_2,undefined4 param_3,undefined8 *param_4)

{
  char *pcVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  void *pvVar11;
  longlong lVar12;
  char *pcVar13;
  char *pcVar14;
  uint uVar15;
  char *pcVar16;
  undefined2 *local_b8;
  undefined8 local_b0;
  ulonglong local_a8;
  void *local_a0;
  ulonglong local_98;
  void *local_90;
  ulonglong local_88;
  void *local_80;
  int local_78;
  undefined4 local_74;
  void *local_70;
  int local_68;
  void *local_60;
  int local_58;
  void *local_50;
  int local_48;
  
  if ((((*param_1 != 0) && (param_2 != 0)) && (*(int *)(param_4 + 1) != 0)) && (-1 < DAT_1468b02a8))
  {
    uVar7 = 2;
    if (param_2 != 1) {
      uVar7 = (uint)param_2;
    }
    local_a8 = (ulonglong)uVar7;
    local_b8 = (undefined2 *)0x0;
    local_b0 = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_b8,0x801);
    pcVar14 = (char *)*param_4;
    pcVar13 = pcVar14 + (longlong)*(int *)(param_4 + 1) * 0xc18;
    if (pcVar14 != pcVar13) {
      pcVar16 = pcVar14 + 0x800;
      do {
        uVar9 = local_b0;
        uVar7 = local_b0._4_4_;
        iVar10 = 0;
        local_b0 = (ulonglong)local_b0._4_4_ << 0x20;
        if (((longlong)uVar9 < 0) && (uVar7 != 0)) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_b8,0);
        }
        if (local_b8 != (undefined2 *)0x0) {
          *local_b8 = 0;
        }
        FString::PrintfImpl(&local_70,L"[0x%08x] : ",param_3);
        pvVar11 = local_70;
        uVar9 = local_b0;
        if (local_68 != 0) {
          iVar10 = local_68 + -1;
        }
        if (iVar10 != 0) {
          iVar8 = (int)local_b0;
          lVar12 = (longlong)(int)local_b0;
          iVar5 = (uint)((int)local_b0 == 0) + (int)local_b0 + iVar10;
          local_b0 = CONCAT44(local_b0._4_4_,iVar5);
          if ((int)local_b0._4_4_ < iVar5) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,uVar9 & 0xffffffff);
          }
          puVar2 = local_b8 + (lVar12 - (ulonglong)(iVar8 != 0));
          _guard_xfg_dispatch_icall_nop(puVar2,pvVar11,(longlong)iVar10 * 2);
          puVar2[iVar10] = 0;
        }
        if (local_70 != (void *)0x0) {
          FMemory::Free();
        }
        if (*pcVar14 != '\0') {
          local_80 = (void *)0x0;
          local_74 = 0;
          lVar12 = -1;
          do {
            lVar4 = lVar12 + 1;
            lVar12 = lVar12 + 1;
          } while (pcVar14[lVar4] != '\0');
          iVar10 = (int)lVar12 + 1;
          local_78 = iVar10;
          if (0 < iVar10) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_80,0);
          }
          iVar8 = local_78;
          pvVar11 = local_80;
          FGenericPlatformString::Convert<char,wchar_t>(local_80,iVar10,pcVar14,iVar10,0x3f);
          uVar9 = local_b0;
          if ((iVar8 != 0) && (iVar8 = iVar8 + -1, iVar8 != 0)) {
            iVar10 = (int)local_b0;
            lVar12 = (longlong)(int)local_b0;
            iVar5 = (uint)((int)local_b0 == 0) + (int)local_b0 + iVar8;
            local_b0 = CONCAT44(local_b0._4_4_,iVar5);
            if ((int)local_b0._4_4_ < iVar5) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,uVar9 & 0xffffffff);
            }
            puVar2 = local_b8 + (lVar12 - (ulonglong)(iVar10 != 0));
            _guard_xfg_dispatch_icall_nop(puVar2,pvVar11,(longlong)iVar8 * 2);
            puVar2[iVar8] = 0;
          }
          if (pvVar11 != (void *)0x0) {
            FMemory::Free();
          }
          if (*(longlong *)(pcVar16 + 0x408) != 0) {
            FString::PrintfImpl(&local_60,L"+0x%016llx");
            pvVar11 = local_60;
            uVar9 = local_b0;
            iVar10 = 0;
            if (local_58 != 0) {
              iVar10 = local_58 + -1;
            }
            if (iVar10 != 0) {
              iVar8 = (int)local_b0;
              lVar12 = (longlong)(int)local_b0;
              iVar5 = (uint)((int)local_b0 == 0) + (int)local_b0 + iVar10;
              local_b0 = CONCAT44(local_b0._4_4_,iVar5);
              if ((int)local_b0._4_4_ < iVar5) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,uVar9 & 0xffffffff);
              }
              puVar2 = local_b8 + (lVar12 - (ulonglong)(iVar8 != 0));
              _guard_xfg_dispatch_icall_nop(puVar2,pvVar11,(longlong)iVar10 * 2);
              puVar2[iVar10] = 0;
            }
            if (local_60 != (void *)0x0) {
              FMemory::Free();
            }
          }
          uVar9 = local_b0;
          iVar10 = (int)local_b0;
          lVar12 = (longlong)(int)local_b0;
          iVar8 = (2 - (uint)((int)local_b0 != 0)) + (int)local_b0;
          local_b0 = CONCAT44(local_b0._4_4_,iVar8);
          if ((int)local_b0._4_4_ < iVar8) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,uVar9 & 0xffffffff);
          }
          local_b8[lVar12 - (ulonglong)(iVar10 != 0)] = 0x21;
          (local_b8 + (lVar12 - (ulonglong)(iVar10 != 0)))[1] = 0;
        }
        uVar9 = local_b0;
        pvVar11 = (void *)0x0;
        pcVar1 = pcVar16 + -0x400;
        if (*pcVar1 == '\0') {
          iVar10 = (int)local_b0;
          lVar12 = (longlong)(int)local_b0;
          iVar8 = (4 - (uint)((int)local_b0 != 0)) + (int)local_b0;
          local_b0 = CONCAT44(local_b0._4_4_,iVar8);
          if ((int)local_b0._4_4_ < iVar8) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,uVar9 & 0xffffffff);
          }
          puVar3 = (undefined4 *)(local_b8 + (lVar12 - (ulonglong)(iVar10 != 0)));
          *puVar3 = 0x3f003f;
          *(undefined2 *)(puVar3 + 1) = 0x3f;
          *(undefined2 *)((longlong)puVar3 + 6) = 0;
        }
        else {
          local_a0 = (void *)0x0;
          local_98 = 0;
          if (pcVar1 != (char *)0x0) {
            lVar12 = -1;
            do {
              lVar4 = lVar12 + -0x3ff;
              lVar12 = lVar12 + 1;
            } while (pcVar16[lVar4] != '\0');
            uVar15 = (int)lVar12 + 1;
            local_98 = (ulonglong)uVar15;
            uVar7 = uVar15;
            if (0 < (int)uVar15) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a0,0);
              uVar7 = (uint)local_98;
            }
            pvVar11 = local_a0;
            FGenericPlatformString::Convert<char,wchar_t>(local_a0,uVar15,pcVar1,uVar15,0x3f);
            uVar9 = local_b0;
            if ((uVar7 != 0) && (iVar10 = uVar7 - 1, iVar10 != 0)) {
              iVar8 = (int)local_b0;
              lVar12 = (longlong)(int)local_b0;
              iVar5 = (uint)((int)local_b0 == 0) + iVar10 + (int)local_b0;
              local_b0 = CONCAT44(local_b0._4_4_,iVar5);
              if ((int)local_b0._4_4_ < iVar5) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,uVar9 & 0xffffffff);
              }
              puVar2 = local_b8 + (lVar12 - (ulonglong)(iVar8 != 0));
              _guard_xfg_dispatch_icall_nop(puVar2,pvVar11,(longlong)iVar10 * 2);
              puVar2[iVar10] = 0;
            }
          }
          if (pvVar11 != (void *)0x0) {
            FMemory::Free();
          }
        }
        uVar9 = local_b0;
        pvVar11 = (void *)0x0;
        if ((*pcVar16 != '\0') && (0 < *(int *)(pcVar16 + 0x400))) {
          iVar10 = (int)local_b0;
          lVar12 = (longlong)(int)local_b0;
          iVar8 = (3 - (uint)((int)local_b0 != 0)) + (int)local_b0;
          local_b0 = CONCAT44(local_b0._4_4_,iVar8);
          if ((int)local_b0._4_4_ < iVar8) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,uVar9 & 0xffffffff);
          }
          local_90 = (void *)0x0;
          local_88 = 0;
          *(undefined4 *)(local_b8 + (lVar12 - (ulonglong)(iVar10 != 0))) = 0x5b0020;
          *(undefined2 *)((longlong)(local_b8 + (lVar12 - (ulonglong)(iVar10 != 0))) + 4) = 0;
          if ((pcVar16 != (char *)0x0) && (*pcVar16 != '\0')) {
            lVar12 = -1;
            do {
              lVar4 = lVar12 + 1;
              lVar12 = lVar12 + 1;
            } while (pcVar16[lVar4] != '\0');
            uVar15 = (int)lVar12 + 1;
            local_88 = (ulonglong)uVar15;
            uVar7 = uVar15;
            if (0 < (int)uVar15) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_90,0);
              uVar7 = (uint)local_88;
            }
            pvVar11 = local_90;
            FGenericPlatformString::Convert<char,wchar_t>(local_90,uVar15,pcVar16,uVar15,0x3f);
            uVar9 = local_b0;
            if ((uVar7 != 0) && (iVar10 = uVar7 - 1, iVar10 != 0)) {
              iVar8 = (int)local_b0;
              lVar12 = (longlong)(int)local_b0;
              iVar5 = (uint)((int)local_b0 == 0) + iVar10 + (int)local_b0;
              local_b0 = CONCAT44(local_b0._4_4_,iVar5);
              if ((int)local_b0._4_4_ < iVar5) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,uVar9 & 0xffffffff);
              }
              puVar2 = local_b8 + (lVar12 - (ulonglong)(iVar8 != 0));
              _guard_xfg_dispatch_icall_nop(puVar2,pvVar11,(longlong)iVar10 * 2);
              puVar2[iVar10] = 0;
            }
          }
          if (pvVar11 != (void *)0x0) {
            FMemory::Free();
          }
          iVar10 = (int)local_b0;
          lVar12 = (longlong)(int)local_b0;
          iVar8 = (2 - (uint)((int)local_b0 != 0)) + (int)local_b0;
          if ((int)local_b0._4_4_ < iVar8) {
            uVar9 = local_b0 & 0xffffffff;
            local_b0._0_4_ = iVar8;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,uVar9);
            iVar8 = (int)local_b0;
          }
          local_b0._0_4_ = iVar8;
          local_b8[lVar12 - (ulonglong)(iVar10 != 0)] = 0x3a;
          (local_b8 + (lVar12 - (ulonglong)(iVar10 != 0)))[1] = 0;
          FString::PrintfImpl(&local_50,&DAT_1440da628,*(undefined4 *)(pcVar16 + 0x400));
          pvVar11 = local_50;
          iVar10 = (int)local_b0;
          iVar8 = 0;
          if (local_48 != 0) {
            iVar8 = local_48 + -1;
          }
          if (iVar8 != 0) {
            lVar12 = (longlong)(int)local_b0;
            local_b0._0_4_ = (uint)((int)local_b0 == 0) + iVar8 + (int)local_b0;
            if ((int)local_b0._4_4_ < (int)local_b0) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,iVar10);
            }
            puVar2 = local_b8 + (lVar12 - (ulonglong)(iVar10 != 0));
            _guard_xfg_dispatch_icall_nop(puVar2,pvVar11,(longlong)iVar8 * 2);
            puVar2[iVar8] = 0;
          }
          if (local_50 != (void *)0x0) {
            FMemory::Free();
          }
          iVar10 = (int)local_b0;
          lVar12 = (longlong)(int)local_b0;
          local_b0._0_4_ = (2 - (uint)((int)local_b0 != 0)) + (int)local_b0;
          if ((int)local_b0._4_4_ < (int)local_b0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,iVar10);
          }
          local_b8[lVar12 - (ulonglong)(iVar10 != 0)] = 0x5d;
          (local_b8 + (lVar12 - (ulonglong)(iVar10 != 0)))[1] = 0;
        }
        uVar6 = FUN_141672640();
        FOutputDevice::Log(uVar6,param_1,local_a8 & 0xff,&local_b8);
        pcVar14 = pcVar14 + 0xc18;
        pcVar16 = pcVar16 + 0xc18;
      } while (pcVar14 != pcVar13);
    }
    if (local_b8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1415aeb50 LocalPrint body=5 status=ok
// SIG void LocalPrint(LPCWSTR lpOutputString)

void __stdcall FWindowsPlatformMisc::LocalPrint(LPCWSTR lpOutputString)

{
                    /* WARNING: Could not recover jumptable at 0x0001416a3f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OutputDebugStringW(lpOutputString);
  return;
}



// FUNCTION 1415aeb60 LowLevelOutputDebugStringf body=294 status=ok
// SIG undefined LowLevelOutputDebugStringf(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FGenericPlatformMisc::LowLevelOutputDebugStringf
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  LPCWSTR pWVar1;
  uint uVar2;
  ulonglong *puVar3;
  LPCWSTR lpOutputString;
  LPCWSTR _Memory;
  int iVar4;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_478 [32];
  undefined8 local_458;
  undefined8 *local_450;
  WCHAR local_448 [512];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_478;
  _Memory = (LPCWSTR)0x0;
  lpOutputString = local_448;
  iVar4 = 0x400;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  puVar3 = (ulonglong *)__local_stdio_printf_options();
  local_458 = 0;
  local_450 = &local_res10;
  uVar2 = __stdio_common_vswprintf(*puVar3 | 1,local_448,0x1ff,param_1);
  if ((int)uVar2 < 0) {
    uVar2 = 0xffffffff;
  }
  pWVar1 = (LPCWSTR)0x0;
  if (0x1ff < uVar2) goto LAB_1415aebf0;
  while (_Memory = pWVar1, uVar2 == 0xffffffff) {
LAB_1415aebf0:
    free(_Memory);
    lpOutputString = malloc((longlong)iVar4 * 2);
    local_450 = &local_res10;
    local_458 = 0;
    uVar2 = __stdio_common_vswprintf(*puVar3 | 1,lpOutputString,(longlong)(iVar4 + -1),param_1);
    if ((int)uVar2 < 0) {
      uVar2 = 0xffffffff;
    }
    if (iVar4 <= (int)uVar2) {
      uVar2 = 0xffffffff;
    }
    iVar4 = iVar4 * 2;
    pWVar1 = lpOutputString;
  }
  lpOutputString[(int)uVar2] = L'\0';
  FWindowsPlatformMisc::LocalPrint(lpOutputString);
  free(_Memory);
  return;
}



// FUNCTION 1415aec90 Malloc body=373 status=ok
// SIG undefined Malloc(void)

ulonglong FGenericPlatformMallocCrash::Malloc(longlong param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  DWORD DVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong *puVar7;
  undefined8 *puVar8;
  ulonglong uVar6;
  
  if (0x10 < param_3) {
    FWindowsPlatformMisc::LocalPrint(L"Alignment > 16 is not supported\n");
  }
  DVar2 = GetCurrentThreadId();
  if (*(DWORD *)(param_1 + 0x30) != DVar2) {
    FWindowsPlatformProcess::SleepInfinite();
    return 0;
  }
  uVar3 = 0;
  puVar8 = (undefined8 *)(param_1 + 0x60);
  uVar6 = uVar3;
  do {
    puVar1 = (uint *)*puVar8;
    if (param_2 <= puVar1[4] - 0x10) {
      if (puVar1[0x1006] != 0) {
        do {
          uVar4 = (uint)uVar3;
          puVar7 = *(ulonglong **)(puVar1 + uVar3 * 2 + 6);
          if (*puVar7 == 0) {
            if (uVar4 <= puVar1[1]) {
              uVar4 = puVar1[1];
            }
            *puVar1 = *puVar1 + 1;
            puVar1[3] = puVar1[3] + 1;
            puVar1[1] = uVar4;
            uVar4 = *puVar1;
            if (*puVar1 <= puVar1[2]) {
              uVar4 = puVar1[2];
            }
            puVar1[2] = uVar4;
            *puVar7 = (ulonglong)param_2;
            ::_guard_xfg_dispatch_icall_nop((void *)puVar7[1],0xfe,(ulonglong)param_2);
            return puVar7[1];
          }
          uVar3 = (ulonglong)(uVar4 + 1);
        } while (uVar4 + 1 < puVar1[0x1006]);
      }
      FGenericPlatformMisc::LowLevelOutputDebugStringf
                (L"AllocateFromPool run out of memory allocating %u bytes for %u allocations\n",
                 param_2);
      FWindowsPlatformMisc::LocalPrint
                (L"Please increase MaxNumAllocations for that pool, exiting...\n");
      FUN_1416a8180(1);
      return 0;
    }
    uVar4 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar4;
    puVar8 = puVar8 + 1;
  } while (uVar4 < 0xe);
  uVar4 = *(int *)(param_1 + 0x40) + 0xfU & 0xfffffff0;
  uVar5 = param_2 + 0x10 + uVar4;
  *(uint *)(param_1 + 0x40) = uVar4;
  if (uVar5 < 0x200001) {
    *(uint *)(param_1 + 0x40) = uVar5;
    puVar7 = (ulonglong *)(*(longlong *)(param_1 + 0x38) + (ulonglong)uVar4);
    *puVar7 = (ulonglong)param_2;
    puVar7[1] = (ulonglong)uVar4 + *(longlong *)(param_1 + 0x38) + 0x10;
    FGenericPlatformMisc::LowLevelOutputDebugStringf
              (L"Malloc Size=%u LargeMemoryPoolOffset=%u \n",param_2,*(undefined4 *)(param_1 + 0x40)
              );
    return puVar7[1];
  }
  FGenericPlatformMisc::LowLevelOutputDebugStringf
            (L"MallocCrash run out of memory allocating %u bytes, free %u bytes\n",param_2,
             0x200000 - uVar4);
  FWindowsPlatformMisc::LocalPrint(L"Please increase LARGE_MEMORYPOOL_SIZE, exiting...\n");
  FUN_1416a8180(1);
  return 0;
}



// FUNCTION 1415aee10 Memcpy body=23 status=ok
// SIG undefined Memcpy(void)

void * FGenericPlatformString::Memcpy(void *param_1,void *param_2,size_t param_3)

{
  ::_guard_xfg_dispatch_icall_nop(param_1,param_2,param_3);
  return param_1;
}



// FUNCTION 1415aee30 MemswapGreaterThan8 body=329 status=ok
// SIG undefined MemswapGreaterThan8(void)

void FGenericPlatformMemory::MemswapGreaterThan8
               (undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  
  if (((ulonglong)param_1 & 1) != 0) {
    uVar1 = *(undefined1 *)param_1;
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    param_1 = (undefined8 *)((longlong)param_1 + 1);
    *(undefined1 *)param_2 = uVar1;
    param_2 = (undefined8 *)((longlong)param_2 + 1);
    param_3 = param_3 - 1;
  }
  if (((ulonglong)param_1 & 2) != 0) {
    uVar2 = *(undefined2 *)param_1;
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    param_1 = (undefined8 *)((longlong)param_1 + 2);
    *(undefined2 *)param_2 = uVar2;
    param_2 = (undefined8 *)((longlong)param_2 + 2);
    param_3 = param_3 - 2;
  }
  if (((ulonglong)param_1 & 4) != 0) {
    uVar3 = *(undefined4 *)param_1;
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    param_1 = (undefined8 *)((longlong)param_1 + 4);
    *(undefined4 *)param_2 = uVar3;
    param_2 = (undefined8 *)((longlong)param_2 + 4);
    param_3 = param_3 - 4;
  }
  uVar7 = 0x20;
  uVar5 = (int)param_1 - (int)param_2;
  if ((uVar5 != 0) && (uVar7 = 0, uVar5 != 0)) {
    for (; (uVar5 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
    }
  }
  uVar5 = 3;
  if (uVar7 < 4) {
    uVar5 = uVar7;
  }
  if (uVar5 != 0) {
    if (uVar5 != 1) {
      if ((uVar5 != 2) && (7 < param_3)) {
        uVar8 = param_3 >> 3;
        param_3 = param_3 + uVar8 * -8;
        do {
          uVar4 = *param_1;
          *param_1 = *param_2;
          param_1 = param_1 + 1;
          *param_2 = uVar4;
          param_2 = param_2 + 1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      if (3 < param_3) {
        uVar8 = param_3 >> 2;
        param_3 = param_3 + uVar8 * -4;
        do {
          uVar3 = *(undefined4 *)param_1;
          *(undefined4 *)param_1 = *(undefined4 *)param_2;
          param_1 = (undefined8 *)((longlong)param_1 + 4);
          *(undefined4 *)param_2 = uVar3;
          param_2 = (undefined8 *)((longlong)param_2 + 4);
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
    }
    if (1 < param_3) {
      uVar8 = param_3 >> 1;
      param_3 = param_3 + uVar8 * -2;
      do {
        uVar2 = *(undefined2 *)param_1;
        *(undefined2 *)param_1 = *(undefined2 *)param_2;
        param_1 = (undefined8 *)((longlong)param_1 + 2);
        *(undefined2 *)param_2 = uVar2;
        param_2 = (undefined8 *)((longlong)param_2 + 2);
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined1 *)param_1;
      *(undefined1 *)param_1 = *(undefined1 *)(lVar6 + (longlong)param_1);
      *(undefined1 *)(lVar6 + (longlong)param_1) = uVar1;
      param_1 = (undefined8 *)((longlong)param_1 + 1);
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1415aef80 OnAddCPUTime body=75 status=ok
// SIG undefined OnAddCPUTime(void)

undefined8 FCPUTimeDump::OnAddCPUTime(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_res8;
  
  FWindowsPlatformTime::GetCPUTime(&local_res8);
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 8) = local_res8;
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}



// FUNCTION 1415aefd0 OnCPUTimeDump body=34 status=ok
// SIG undefined OnCPUTimeDump(void)

undefined8 FCPUTimeDump::OnCPUTimeDump(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if ((*(int *)(param_1 + 0xc) < 0) && (*(int *)(param_1 + 0xc) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  return 1;
}



// FUNCTION 1415af000 FUN_1415af000 body=233 status=ok
// SIG undefined FUN_1415af000(void)

void FUN_1415af000(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong *puVar12;
  
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x68))();
  if (*(int *)(param_1 + 0x30) != iVar2) {
    *(int *)(param_1 + 0x30) = iVar2;
    puVar12 = *(ulonglong **)(param_1 + 0x18);
    puVar7 = puVar12 + (longlong)*(int *)(param_1 + 0x20) * 2;
    if (puVar12 != puVar7) {
      puVar8 = (undefined8 *)0x0;
      do {
        uVar3 = (ulonglong)(int)puVar12[1];
        if (1 < (int)puVar12[1]) {
          plVar9 = (longlong *)*puVar12;
          if (*(uint *)(param_1 + 0x30) < 0x80000000) {
            for (plVar4 = plVar9; plVar4 != plVar9 + uVar3; plVar4 = plVar4 + 1) {
              puVar6 = (undefined8 *)*plVar4;
              if (*(int *)(puVar6 + 6) <= (int)*(uint *)(param_1 + 0x30)) goto LAB_1415af08a;
            }
            puVar6 = (undefined8 *)plVar9[uVar3 - 1];
          }
          else {
            puVar6 = (undefined8 *)plVar9[uVar3 - 1];
          }
LAB_1415af08a:
          puVar11 = (undefined8 *)(uVar3 & 0x1fffffffffffffff);
          if (plVar9 + uVar3 < plVar9) {
            puVar11 = puVar8;
          }
          puVar10 = puVar8;
          if (puVar11 != (undefined8 *)0x0) {
            do {
              puVar1 = (undefined8 *)*plVar9;
              plVar9 = plVar9 + 1;
              puVar5 = puVar8;
              if (puVar6 != puVar1) {
                puVar5 = puVar6;
              }
              puVar10 = (undefined8 *)((longlong)puVar10 + 1);
              *puVar1 = puVar5;
            } while (puVar10 != puVar11);
          }
        }
        puVar12 = puVar12 + 2;
      } while (puVar12 != puVar7);
    }
  }
  return;
}



// FUNCTION 1415af0f0 FUN_1415af0f0 body=210 status=ok
// SIG undefined FUN_1415af0f0(void)

void FUN_1415af0f0(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar2;
  undefined1 local_98 [144];
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  DAT_1468b02c0 = param_1;
  DAT_1468b02c8 = param_2;
  if (DAT_1468b02a1 == '\0') {
    DAT_1468b02a1 = '\x01';
    FUN_1416a13c0(local_98);
    if (DAT_1468b02d0 != 0) {
      FUN_14169c490(DAT_1468b02d0,0x2000000);
    }
    if (DAT_1468b6160 != 0) {
      (**(code **)(*DAT_1468c2208 + 0x68))();
    }
    uVar1 = FUN_14164bd40();
    TBaseMulticastDelegate<void>::Broadcast(uVar1);
    LowLevelFatalErrorHandler
              ("Unknown",0xc2,L"Ran out of memory allocating %llu bytes with alignment %u",param_1,
               CONCAT44(uVar2,param_2));
    FDebug::AssertFailed
              (&DAT_144c961fb,"Unknown",0xc2,
               L"Ran out of memory allocating %llu bytes with alignment %u",param_1,param_2);
  }
  return;
}



// FUNCTION 1415af1d0 FUN_1415af1d0 body=327 status=ok
// SIG undefined FUN_1415af1d0(void)

void FUN_1415af1d0(longlong param_1,int *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  char cVar1;
  BOOL BVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong local_48;
  undefined4 uStack_40;
  longlong local_38;
  longlong lStack_30;
  ulonglong local_28;
  ulonglong uStack_20;
  
  if (*(int *)(param_1 + 0x50) != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x20);
    BVar2 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar2 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    plVar8 = *(longlong **)(param_1 + 0x48);
    plVar7 = plVar8 + (longlong)*(int *)(param_1 + 0x50) * 6;
    if (plVar8 != plVar7) {
      plVar9 = plVar8 + 5;
      do {
        if (*plVar8 != 0) {
          local_48 = 0;
          uStack_40 = 2;
          if ((char)plVar9[-2] == '\0') {
            puVar3 = &local_48;
          }
          else {
            if ((((int)*plVar9 != 0) && ((longlong *)plVar9[-1] != (longlong *)0x0)) &&
               (cVar1 = (**(code **)(*(longlong *)plVar9[-1] + 0x18))(), cVar1 != '\0')) {
              plVar5 = (longlong *)0x0;
              if ((int)*plVar9 != 0) {
                plVar5 = (longlong *)plVar9[-1];
              }
              (**(code **)(*plVar5 + 0x38))(plVar5,&local_38);
              plVar9[-4] = local_38;
              plVar9[-3] = lStack_30;
            }
            puVar3 = (ulonglong *)(plVar9 + -4);
          }
          local_28 = *puVar3;
          uStack_20 = puVar3[1];
          if (local_28 != 0) {
            uStack_20._0_4_ = (int)puVar3[1];
            uVar6 = local_28;
            if (*param_2 < (int)uStack_20) {
              uVar4 = ~*(ulonglong *)(param_2 + 2) & local_28;
              uVar6 = ~*(ulonglong *)(param_2 + 2);
              if (uVar4 != 0) {
                uVar6 = uVar4;
              }
            }
            if (uVar6 != 0) {
              (**(code **)(*(longlong *)*plVar8 + 8))();
            }
          }
        }
        plVar8 = plVar8 + 6;
        plVar9 = plVar9 + 6;
      } while (plVar8 != plVar7);
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}



// FUNCTION 1415af320 FUN_1415af320 body=1296 status=ok
// SIG undefined FUN_1415af320(void)

void FUN_1415af320(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  void *pvVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  void *pvVar13;
  void *pvVar14;
  void *pvVar15;
  longlong *local_res8;
  undefined8 *local_res10;
  void *local_78;
  int local_70;
  int local_6c;
  undefined1 local_68 [8];
  longlong local_60;
  longlong local_58;
  undefined8 *local_50;
  code *local_48;
  longlong **local_40;
  
  local_res8 = param_1 + 8;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  lVar11 = *local_res8;
  lVar12 = lVar11 + (longlong)*(int *)(param_1 + 9) * 0x18;
  for (; lVar11 != lVar12; lVar11 = lVar11 + 0x18) {
    *(undefined8 *)(lVar11 + 0x10) = 0;
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = param_2;
  param_1[0x10] = param_2;
  local_60 = param_1[0xc] + 8;
  local_68[0] = 1;
  local_58 = param_1[0xc] + 0x18;
  local_res10 = param_1 + 10;
  local_40 = &local_res8;
  local_48 = FUN_1415a3f00;
  local_50 = local_res10;
  plVar9 = (longlong *)FUN_1415a90b0();
  bVar3 = false;
  *(int *)((longlong)plVar9 + 0x14) = *(int *)((longlong)plVar9 + 0x14) + 1;
  iVar8 = *(int *)((longlong)plVar9 + 0x14);
  iVar7 = (int)plVar9[1] + -1;
  lVar12 = (longlong)iVar7;
  if (-1 < iVar7) {
    lVar11 = lVar12 << 4;
    bVar3 = false;
    do {
      if (((*(int *)(lVar11 + 8 + *plVar9) == 0) ||
          (plVar1 = *(longlong **)(lVar11 + *plVar9), plVar1 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar1 + 0x40))(plVar1,local_68), cVar6 == '\0')) {
        bVar3 = true;
      }
      lVar11 = lVar11 + -0x10;
      lVar12 = lVar12 + -1;
    } while (-1 < lVar12);
    iVar8 = *(int *)((longlong)plVar9 + 0x14);
  }
  *(int *)((longlong)plVar9 + 0x14) = iVar8 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar9,0);
  }
  local_78 = (void *)0x0;
  local_70 = *(int *)(param_1[0xc] + 0x10);
  lVar12 = (longlong)local_70;
  pvVar15 = *(void **)(param_1[0xc] + 8);
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
            (&local_78,(2 - (uint)(local_70 != 0)) + local_70,0);
  pvVar14 = local_78;
  _guard_xfg_dispatch_icall_nop(local_78,pvVar15,lVar12 * 2);
  iVar8 = local_70;
  lVar12 = (longlong)local_70;
  local_70 = (2 - (uint)(local_70 != 0)) + local_70;
  if (local_6c < local_70) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,iVar8);
    pvVar14 = local_78;
  }
  lVar12 = lVar12 - (ulonglong)(iVar8 != 0);
  *(undefined2 *)((longlong)pvVar14 + lVar12 * 2) = 0x3a;
  *(undefined2 *)((longlong)pvVar14 + lVar12 * 2 + 2) = 0;
  lVar12 = param_1[0xc];
  iVar8 = *(int *)(lVar12 + 0x20);
  if (local_70 < 2) {
    pvVar13 = *(void **)(lVar12 + 0x18);
    local_78 = (void *)0x0;
    pvVar15 = pvVar14;
    if (iVar8 == 0) {
      local_6c = 0;
      local_78 = (void *)0x0;
      local_70 = 0;
    }
    else {
      local_70 = iVar8;
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,iVar8,0);
      pvVar14 = local_78;
      _guard_xfg_dispatch_icall_nop(local_78,pvVar13,(longlong)iVar8 * 2);
      local_78 = pvVar14;
    }
  }
  else {
    iVar7 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar7 = 0;
    }
    if ((local_70 != 0) || (iVar8 = 1, iVar7 == 0)) {
      iVar8 = 0;
    }
    pvVar15 = (void *)0x0;
    iVar10 = local_70;
    local_78 = pvVar14;
    if (local_6c < local_70 + iVar7 + iVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_78);
      iVar10 = local_70;
    }
    pvVar14 = *(void **)(lVar12 + 0x18);
    local_70 = iVar10;
    if (iVar7 != 0) {
      local_70 = iVar10 + (uint)(iVar10 == 0) + iVar7;
      if (local_6c < local_70) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,iVar10);
      }
      iVar8 = local_70;
      pvVar2 = local_78;
      pvVar13 = (void *)((longlong)local_78 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar13,pvVar14,(longlong)iVar7 * 2);
      *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar13) = 0;
      local_78 = pvVar2;
      local_70 = iVar8;
    }
  }
  iVar8 = local_70;
  if (local_6c < (int)(local_70 + 1 + (uint)(local_70 == 0))) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_78);
    iVar8 = local_70;
  }
  local_70 = (2 - (uint)(iVar8 != 0)) + iVar8;
  pvVar14 = local_78;
  if (local_6c < local_70) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,iVar8);
    pvVar14 = local_78;
  }
  puVar4 = local_res10;
  pvVar13 = (void *)0x0;
  iVar7 = 0;
  lVar12 = (longlong)iVar8 - (ulonglong)(iVar8 != 0);
  *(undefined2 *)((longlong)pvVar14 + lVar12 * 2) = 0x3a;
  *(undefined2 *)((longlong)pvVar14 + lVar12 * 2 + 2) = 0;
  iVar8 = *(int *)(local_res10 + 1);
  if (local_70 < 2) {
    pvVar2 = (void *)*local_res10;
    local_78 = (void *)0x0;
    if (iVar8 == 0) {
      local_70 = 0;
    }
    else {
      local_70 = iVar8;
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,iVar8);
      pvVar13 = local_78;
      _guard_xfg_dispatch_icall_nop(local_78,pvVar2,(longlong)iVar8 * 2);
      iVar7 = local_6c;
    }
  }
  else {
    iVar10 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar10 = iVar7;
    }
    if ((local_70 != 0) || (iVar8 = 1, iVar10 == 0)) {
      iVar8 = iVar7;
    }
    iVar7 = iVar8 + iVar10 + local_70;
    iVar8 = local_70;
    local_78 = pvVar14;
    if (local_6c < iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_78,iVar7);
      iVar8 = local_70;
    }
    local_res8 = (longlong *)*puVar4;
    pvVar14 = pvVar13;
    pvVar13 = local_78;
    iVar7 = local_6c;
    local_70 = iVar8;
    if (iVar10 != 0) {
      local_70 = iVar8 + (uint)(iVar8 == 0) + iVar10;
      if (local_6c < local_70) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,iVar8,0);
      }
      iVar7 = local_6c;
      iVar5 = local_70;
      pvVar13 = local_78;
      pvVar2 = (void *)((longlong)local_78 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar2,local_res8,(longlong)iVar10 * 2);
      *(undefined2 *)((longlong)iVar10 * 2 + (longlong)pvVar2) = 0;
      local_70 = iVar5;
    }
  }
  iVar10 = (local_70 == 0) + 6 + local_70;
  local_78 = pvVar13;
  local_6c = iVar7;
  iVar8 = local_70;
  if (iVar7 < iVar10) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_78,iVar10,0);
    iVar8 = local_70;
  }
  local_70 = (7 - (uint)(iVar8 != 0)) + iVar8;
  if (local_6c < local_70) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,iVar8);
  }
  lVar12 = (longlong)iVar8 - (ulonglong)(iVar8 != 0);
  builtin_wcsncpy((wchar_t *)((longlong)local_78 + lVar12 * 2),L":Sta",4);
  *(undefined4 *)((longlong)local_78 + lVar12 * 2 + 8) = 0x740072;
  *(undefined2 *)((longlong)local_78 + lVar12 * 2 + 0xc) = 0;
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if (pvVar14 != (void *)0x0) {
    FMemory::Free(pvVar14);
  }
  if (pvVar15 != (void *)0x0) {
    FMemory::Free(pvVar15);
  }
  return;
}



// FUNCTION 1415af830 OpenAsyncRead body=313 status=ok
// SIG undefined OpenAsyncRead(void)

undefined8 * IPlatformFile::OpenAsyncRead(undefined8 param_1,short *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  
  puVar2 = (undefined8 *)operator_new(0xa8);
  puVar3 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = param_1;
    *puVar2 = &PTR__scalar_deleting_destructor__144ca0790;
    puVar2[2] = 0;
    puVar2[3] = 0;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (param_2[lVar5] != 0);
      iVar4 = (int)lVar5 + 1;
      *(int *)(puVar2 + 3) = iVar4;
      if (0 < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2 + 2,0);
      }
      ::_guard_xfg_dispatch_icall_nop((void *)puVar2[2],param_2,(longlong)iVar4 * 2);
    }
    puVar2[4] = 0;
    puVar2[5] = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar2 + 6));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar2 + 6),4000);
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar2 + 0xb));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar2 + 0xb),4000);
    *(undefined2 *)(puVar2 + 0x14) = 0;
    cVar1 = FString::EndsWith(puVar2 + 2,L".pak",1);
    if (cVar1 == '\0') {
      *(undefined1 *)((longlong)puVar2 + 0xa1) = 1;
    }
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    puVar2[0x12] = 0;
    puVar2[0x13] = 0;
    puVar3 = puVar2;
  }
  return puVar3;
}



// FUNCTION 1415af970 FUN_1415af970 body=430 status=ok
// SIG undefined FUN_1415af970(void)

void FUN_1415af970(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  BOOL BVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  LARGE_INTEGER local_res20;
  
  plVar4 = (longlong *)FUN_1415a9af0();
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0e88);
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0e88);
  }
  lVar6 = *plVar4;
  if (lVar6 != 0) {
    puVar9 = &DAT_143f3eda8;
    if (*(int *)(*(longlong *)(lVar6 + 0x60) + 0x10) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = *(undefined2 **)(*(longlong *)(lVar6 + 0x60) + 8);
    }
    iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,param_1);
    if (iVar3 == 0) {
      if (*(int *)(lVar6 + 0x58) != 0) {
        puVar9 = *(undefined2 **)(lVar6 + 0x50);
      }
      iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,param_3);
      if (iVar3 != 0) {
        plVar5 = (longlong *)FUN_1415a9af0();
        BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0e88);
        if (BVar2 == 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0e88);
        }
        lVar6 = *plVar5;
        if (lVar6 != 0) {
          FUN_1415a48a0();
          lVar6 = FUN_1415aad90(plVar5,*(undefined8 *)(lVar6 + 0x60),param_3);
          *plVar5 = lVar6;
          QueryPerformanceCounter(&local_res20);
          FUN_1415af320(*plVar5,(double)local_res20.QuadPart * DAT_1468b02f8 + 16777216.0);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0e88);
      }
    }
    else {
      FUN_1415a46c0();
    }
    if (*plVar4 != 0) goto LAB_1415afafd;
  }
  QueryPerformanceCounter(&local_res20);
  dVar1 = (double)local_res20.QuadPart * DAT_1468b02f8;
  uVar7 = FUN_1415a9130(plVar4,param_1,param_2);
  lVar6 = FUN_1415aad90(plVar4,uVar7,param_3);
  *plVar4 = lVar6;
  **(undefined4 **)(lVar6 + 0x60) = 0xffffffff;
  FUN_1415af320(*plVar4,dVar1 + 16777216.0);
LAB_1415afafd:
                    /* WARNING: Could not recover jumptable at 0x0001415afb17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0e88);
  return;
}



// FUNCTION 1415afb20 FUN_1415afb20 body=161 status=ok
// SIG undefined FUN_1415afb20(void)

void FUN_1415afb20(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  BOOL BVar3;
  LARGE_INTEGER local_res10;
  
  plVar2 = (longlong *)FUN_1415a9af0();
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0e88);
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0e88);
  }
  lVar1 = *plVar2;
  if (lVar1 != 0) {
    FUN_1415a48a0();
    lVar1 = FUN_1415aad90(plVar2,*(undefined8 *)(lVar1 + 0x60),param_1);
    *plVar2 = lVar1;
    QueryPerformanceCounter(&local_res10);
    FUN_1415af320(*plVar2,(double)local_res10.QuadPart * DAT_1468b02f8 + 16777216.0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001415afbba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0e88);
  return;
}



// FUNCTION 1415afbd0 FUN_1415afbd0 body=704 status=ok
// SIG undefined FUN_1415afbd0(void)

void FUN_1415afbd0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
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
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
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
  longlong lVar39;
  int iVar40;
  undefined8 uVar41;
  float *pfVar42;
  float *pfVar43;
  longlong lVar44;
  int iVar45;
  int iVar46;
  
  if (DAT_1468b02e0 == 0) {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (longlong)DAT_1464a8378;
    uVar41 = SUB168(ZEXT816(0x40) * auVar4,0);
    if (SUB168(ZEXT816(0x40) * auVar4,8) != 0) {
      uVar41 = 0xffffffffffffffff;
    }
    DAT_1468b02e0 = operator_new(uVar41);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (longlong)DAT_1464a8378;
    uVar41 = SUB168(ZEXT816(0x40) * auVar5,0);
    if (SUB168(ZEXT816(0x40) * auVar5,8) != 0) {
      uVar41 = 0xffffffffffffffff;
    }
    DAT_1468b02e8 = operator_new(uVar41);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (longlong)DAT_1464a8378;
    uVar41 = SUB168(ZEXT816(0x40) * auVar6,0);
    if (SUB168(ZEXT816(0x40) * auVar6,8) != 0) {
      uVar41 = 0xffffffffffffffff;
    }
    DAT_1468b02f0 = operator_new(uVar41);
    iVar45 = 0;
    if (0 < DAT_1464a8378) {
      do {
        FUN_1415b1d50(DAT_1468b02e0 + (longlong)iVar45 * 0x40);
        FUN_1415b1d50(DAT_1468b02e8 + (longlong)iVar45 * 0x40);
        iVar45 = iVar45 + 1;
      } while (iVar45 < DAT_1464a8378);
    }
  }
  iVar45 = 0;
  if (0 < DAT_1464a835c) {
    do {
      iVar40 = rand();
      lVar1 = (longlong)iVar40 % (longlong)DAT_1464a8378;
      iVar40 = rand();
      lVar2 = (longlong)iVar40 % (longlong)DAT_1464a8378;
      iVar40 = rand();
      iVar46 = 0;
      lVar3 = (longlong)iVar40 % (longlong)DAT_1464a8378;
      if (0 < DAT_1464a8378) {
        do {
          lVar39 = DAT_1468b02f0;
          pfVar43 = (float *)((longlong)(int)lVar1 * 0x40 + DAT_1468b02e0);
          pfVar42 = (float *)((longlong)(int)lVar2 * 0x40 + DAT_1468b02e8);
          fVar7 = *pfVar43;
          fVar8 = pfVar43[1];
          fVar9 = pfVar43[2];
          fVar10 = pfVar43[3];
          fVar11 = pfVar42[4];
          fVar12 = pfVar42[5];
          fVar13 = pfVar42[6];
          fVar14 = pfVar42[7];
          fVar15 = *pfVar42;
          fVar16 = pfVar42[1];
          fVar17 = pfVar42[2];
          fVar18 = pfVar42[3];
          fVar19 = pfVar42[8];
          fVar20 = pfVar42[9];
          fVar21 = pfVar42[10];
          fVar22 = pfVar42[0xb];
          fVar23 = pfVar42[0xc];
          fVar24 = pfVar42[0xd];
          fVar25 = pfVar42[0xe];
          fVar26 = pfVar42[0xf];
          fVar27 = pfVar43[4];
          fVar28 = pfVar43[5];
          fVar29 = pfVar43[6];
          fVar30 = pfVar43[7];
          fVar31 = pfVar43[8];
          fVar32 = pfVar43[9];
          fVar33 = pfVar43[10];
          fVar34 = pfVar43[0xb];
          fVar35 = pfVar43[0xc];
          fVar36 = pfVar43[0xd];
          fVar37 = pfVar43[0xe];
          fVar38 = pfVar43[0xf];
          lVar44 = (longlong)(int)lVar3 * 0x40;
          pfVar42 = (float *)(lVar44 + DAT_1468b02f0);
          *pfVar42 = fVar7 * fVar15 + fVar8 * fVar11 + fVar9 * fVar19 + fVar10 * fVar23;
          pfVar42[1] = fVar7 * fVar16 + fVar8 * fVar12 + fVar9 * fVar20 + fVar10 * fVar24;
          pfVar42[2] = fVar7 * fVar17 + fVar8 * fVar13 + fVar9 * fVar21 + fVar10 * fVar25;
          pfVar42[3] = fVar7 * fVar18 + fVar8 * fVar14 + fVar9 * fVar22 + fVar10 * fVar26;
          pfVar42 = (float *)(lVar44 + 0x10 + lVar39);
          *pfVar42 = fVar27 * fVar15 + fVar28 * fVar11 + fVar29 * fVar19 + fVar30 * fVar23;
          pfVar42[1] = fVar27 * fVar16 + fVar28 * fVar12 + fVar29 * fVar20 + fVar30 * fVar24;
          pfVar42[2] = fVar27 * fVar17 + fVar28 * fVar13 + fVar29 * fVar21 + fVar30 * fVar25;
          pfVar42[3] = fVar27 * fVar18 + fVar28 * fVar14 + fVar29 * fVar22 + fVar30 * fVar26;
          pfVar42 = (float *)(lVar44 + 0x20 + lVar39);
          *pfVar42 = fVar31 * fVar15 + fVar32 * fVar11 + fVar33 * fVar19 + fVar34 * fVar23;
          pfVar42[1] = fVar31 * fVar16 + fVar32 * fVar12 + fVar33 * fVar20 + fVar34 * fVar24;
          pfVar42[2] = fVar31 * fVar17 + fVar32 * fVar13 + fVar33 * fVar21 + fVar34 * fVar25;
          pfVar42[3] = fVar31 * fVar18 + fVar32 * fVar14 + fVar33 * fVar22 + fVar34 * fVar26;
          pfVar42 = (float *)(lVar44 + 0x30 + lVar39);
          *pfVar42 = fVar35 * fVar15 + fVar36 * fVar11 + fVar37 * fVar19 + fVar38 * fVar23;
          pfVar42[1] = fVar35 * fVar16 + fVar36 * fVar12 + fVar37 * fVar20 + fVar38 * fVar24;
          pfVar42[2] = fVar35 * fVar17 + fVar36 * fVar13 + fVar37 * fVar21 + fVar38 * fVar25;
          pfVar42[3] = fVar35 * fVar18 + fVar36 * fVar14 + fVar37 * fVar22 + fVar38 * fVar26;
          lVar1 = (longlong)((int)lVar1 + 1) % (longlong)DAT_1464a8378;
          iVar46 = iVar46 + 1;
          lVar2 = (longlong)((int)lVar2 + 1) % (longlong)DAT_1464a8378;
          lVar3 = (longlong)((int)lVar3 + 1) % (longlong)DAT_1464a8378;
        } while (iVar46 < DAT_1464a8378);
      }
      iVar45 = iVar45 + 1;
    } while (iVar45 < DAT_1464a835c);
  }
  return;
}



// FUNCTION 1415afe90 FUN_1415afe90 body=2249 status=ok
// SIG undefined FUN_1415afe90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char FUN_1415afe90(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  short *_Src;
  void *_Dst;
  wchar_t wVar2;
  void *_Src_00;
  short *psVar3;
  longlong lVar4;
  undefined4 *puVar5;
  wchar_t *pwVar6;
  char cVar7;
  char cVar8;
  wint_t wVar9;
  wint_t wVar10;
  int iVar11;
  undefined8 *puVar12;
  short **ppsVar13;
  wchar_t *pwVar14;
  longlong lVar15;
  int *piVar16;
  wchar_t *pwVar17;
  undefined1 *puVar18;
  wint_t *pwVar19;
  longlong *plVar20;
  uint uVar21;
  undefined2 *puVar22;
  wchar_t *_Str;
  undefined **ppuVar24;
  int iVar25;
  undefined1 *puVar26;
  undefined2 *puVar27;
  longlong lVar28;
  int iVar29;
  short *psVar30;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  int local_c8;
  longlong local_c0;
  int local_b8;
  longlong *local_b0;
  short *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined1 *local_90;
  ulonglong local_88;
  undefined1 *local_80;
  ulonglong local_78;
  undefined4 *local_70;
  undefined8 local_68;
  short *local_60;
  undefined8 local_58;
  int local_50 [2];
  ulonglong local_48;
  undefined1 *puVar23;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  cVar7 = '\0';
  if ((int)param_2[1] == 0) {
    return '\0';
  }
  puVar27 = &DAT_143f3eda8;
  if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
    puVar22 = &DAT_143f3eda8;
  }
  else {
    puVar22 = *(undefined2 **)*param_2;
  }
  pwVar17 = L"default";
  local_c0 = param_1;
  local_b0 = param_2;
  do {
    wVar2 = *(wchar_t *)((longlong)pwVar17 + (longlong)(puVar22 + -0xa264ee44));
    if ((wVar2 == L'\0') && (*pwVar17 == L'\0')) goto LAB_1415aff2e;
    if (wVar2 != *pwVar17) {
      wVar9 = towlower(wVar2);
      wVar10 = towlower(*pwVar17);
      if (wVar9 != wVar10) break;
    }
    pwVar17 = pwVar17 + 1;
  } while( true );
  if (wVar9 == wVar10) {
LAB_1415aff2e:
    FUN_1415adc40(param_1);
    FUN_1415a3970(param_1);
    return '\x01';
  }
  if (1 < (int)local_b0[1]) {
    if (*(int *)((undefined8 *)*local_b0 + 1) == 0) {
      puVar22 = &DAT_143f3eda8;
    }
    else {
      puVar22 = *(undefined2 **)*local_b0;
    }
    pwVar17 = L"config";
    do {
      wVar2 = *(wchar_t *)((longlong)pwVar17 + (longlong)(puVar22 + -0xa264eea4));
      if ((wVar2 == L'\0') && (*pwVar17 == L'\0')) goto LAB_1415affae;
      if (wVar2 != *pwVar17) {
        wVar9 = towlower(wVar2);
        wVar10 = towlower(*pwVar17);
        if (wVar9 != wVar10) goto LAB_1415affa0;
      }
      pwVar17 = pwVar17 + 1;
    } while( true );
  }
LAB_1415b00b2:
  puVar26 = (undefined1 *)0x0;
  iVar25 = 0;
  local_b8 = 0;
  if ((int)local_b0[1] < 2) {
    return '\0';
  }
  iVar29 = 1;
  local_98 = 0;
  plVar20 = local_b0;
LAB_1415b00e0:
  lVar4 = local_98;
  lVar15 = *plVar20;
  puVar18 = puVar26;
  puVar23 = puVar26;
  do {
    if (*(int *)(lVar15 + 8 + lVar4 * 0x10) == 0) {
      puVar27 = &DAT_143f3eda8;
    }
    else {
      puVar27 = *(undefined2 **)(lVar15 + lVar4 * 0x10);
    }
    iVar11 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>
                       (puVar27,(&PTR_u_Normal_1464a8388)[(longlong)puVar18]);
    plVar20 = local_b0;
    lVar28 = local_c0;
    if (iVar11 == 0) goto LAB_1415b0129;
    uVar21 = (int)puVar23 + 1;
    puVar23 = (undefined1 *)(ulonglong)uVar21;
    puVar18 = puVar18 + 1;
  } while (uVar21 < 7);
  puVar18 = &DAT_ffffffffffffffff;
LAB_1415b0129:
  lVar15 = *local_b0;
  if (puVar18 == &DAT_ffffffffffffffff) {
    local_c8 = FUN_1415a9cd0(local_c0,(longlong)local_b8 * 0x10 + lVar15);
    if (local_c8 == -1) goto LAB_1415b0674;
    local_a8 = (short *)0x0;
    local_a0 = 0;
    local_60 = (short *)0x0;
    local_58 = 0;
    local_70 = (undefined4 *)0x0;
    local_68 = 2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_70,0);
    puVar5 = local_70;
    local_d0 = 0;
    *local_70 = 0x40;
    local_d8 = 1;
    cVar8 = FUN_1404e14f0((longlong)iVar29 * 0x10 + *plVar20,&local_70,&local_a8,&local_60);
    if (puVar5 != (undefined4 *)0x0) {
      FMemory::Free(puVar5);
    }
    psVar30 = local_a8;
    if ((cVar8 == '\0') &&
       (ppsVar13 = (short **)((local_98 + 1) * 0x10 + *plVar20), &local_a8 != ppsVar13)) {
      iVar29 = *(int *)(ppsVar13 + 1);
      psVar3 = *ppsVar13;
      local_a0 = CONCAT44(local_a0._4_4_,iVar29);
      if ((iVar29 == 0) && (local_a0._4_4_ == 0)) {
        local_a0 = 0;
        local_a0._0_4_ = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a8,iVar29);
        psVar30 = local_a8;
        _guard_xfg_dispatch_icall_nop(local_a8,psVar3,(longlong)iVar29 * 2);
      }
    }
    else {
    }
    if (((int)local_a0 != 0) && (iVar29 = (int)local_a0 + -1, lVar28 = local_c0, iVar29 != 0)) {
      pwVar17 = L"unrestricted";
      do {
        wVar2 = *(wchar_t *)((longlong)pwVar17 + (longlong)(psVar30 + -0xa264ef40));
        if ((wVar2 == L'\0') && (*pwVar17 == L'\0')) goto LAB_1415b0515;
        if (wVar2 != *pwVar17) {
          wVar9 = towlower(wVar2);
          wVar10 = towlower(*pwVar17);
          if (wVar9 != wVar10) goto LAB_1415b02f8;
        }
        pwVar17 = pwVar17 + 1;
      } while( true );
    }
    goto LAB_1415b0545;
  }
  iVar29 = *(int *)(lVar15 + 0x18 + lVar4 * 0x10);
  iVar11 = iVar29 + -1;
  if (iVar29 == 0) {
    iVar11 = 0;
  }
  if (iVar11 != 0) {
    if (iVar29 == 0) {
      puVar27 = &DAT_143f3eda8;
    }
    else {
      puVar27 = *(undefined2 **)(lVar15 + lVar4 * 0x10 + 0x10);
    }
    cVar8 = TCString<wchar_t>::IsNumeric(puVar27);
    lVar28 = local_c0;
    if (cVar8 != '\0') {
      puVar12 = (undefined8 *)((local_98 + 1) * 0x10 + *plVar20);
      if (*(int *)(puVar12 + 1) == 0) {
        pwVar17 = L"";
      }
      else {
        pwVar17 = (wchar_t *)*puVar12;
      }
      iVar29 = _wtoi(pwVar17);
      cVar7 = '\x01';
      *(int *)(local_c0 + 800 + (longlong)puVar18 * 4) = iVar29;
      lVar28 = local_c0;
    }
  }
  goto LAB_1415b0674;
LAB_1415affa0:
  if (wVar9 == wVar10) {
LAB_1415affae:
    plVar20 = local_b0;
    if (*(int *)(*local_b0 + 0x18) != 0) {
      puVar27 = *(undefined2 **)(*local_b0 + 0x10);
    }
    cVar7 = FUN_1415a37c0(param_1,puVar27);
    if (cVar7 == '\0') {
      return '\0';
    }
    plVar1 = (longlong *)(param_1 + 8);
    iVar25 = 0;
    if ((wchar_t *)*plVar1 != L"THREADSETUP:") {
      *(undefined4 *)(param_1 + 0x10) = 0;
      if (*(int *)(param_1 + 0x14) != 0xd) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar1,0xd);
        iVar25 = *(int *)(param_1 + 0x10);
      }
      *(int *)(param_1 + 0x10) = iVar25 + 0xd;
      if (*(int *)(param_1 + 0x14) < iVar25 + 0xd) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1);
      }
      builtin_wcsncpy((wchar_t *)*plVar1,L"THREADSETUP:",0xd);
    }
    iVar25 = *(int *)(*plVar20 + 0x18);
    _Src_00 = *(void **)(*plVar20 + 0x10);
    iVar29 = iVar25 + -1;
    if (iVar25 == 0) {
      iVar29 = 0;
    }
    if (iVar29 == 0) {
      return cVar7;
    }
    iVar25 = *(int *)(param_1 + 0x10);
    iVar11 = (uint)(iVar25 == 0) + iVar29 + iVar25;
    *(int *)(param_1 + 0x10) = iVar11;
    if (*(int *)(param_1 + 0x14) < iVar11) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1,iVar25);
    }
    _Dst = (void *)(*plVar1 + ((longlong)iVar25 - (ulonglong)(iVar25 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(_Dst,_Src_00,(longlong)iVar29 * 2);
    *(undefined2 *)((longlong)_Dst + (longlong)iVar29 * 2) = 0;
    return cVar7;
  }
  goto LAB_1415b00b2;
LAB_1415b02f8:
  if (wVar9 != wVar10) {
    pwVar19 = &DAT_144c9998c;
    do {
      wVar9 = *(wint_t *)((longlong)pwVar19 + (longlong)(psVar30 + -0xa264ccc6));
      if ((wVar9 == 0) && (*pwVar19 == 0)) break;
      if (wVar9 != *pwVar19) {
        wVar9 = towlower(wVar9);
        wVar10 = towlower(*pwVar19);
        if (wVar9 != wVar10) goto LAB_1415b034b;
      }
      pwVar19 = pwVar19 + 1;
    } while( true );
  }
  goto LAB_1415b0515;
LAB_1415b034b:
  if (wVar9 != wVar10) {
    pwVar19 = &DAT_144c9dea0;
    do {
      wVar9 = *(wint_t *)((longlong)pwVar19 + (longlong)(psVar30 + -0xa264ef50));
      if ((wVar9 == 0) && (*pwVar19 == 0)) break;
      if (wVar9 != *pwVar19) {
        wVar9 = towlower(wVar9);
        wVar10 = towlower(*pwVar19);
        if (wVar9 != wVar10) goto LAB_1415b03a5;
      }
      pwVar19 = pwVar19 + 1;
    } while( true );
  }
LAB_1415b0515:
  puVar18 = &DAT_ffffffffffffffff;
LAB_1415b051c:
  *(undefined1 **)((longlong)local_c8 * 0x20 + 0x30 + local_c0) = puVar18;
  if (0 < DAT_1464a8740) {
    *(undefined1 *)((longlong)local_c8 * 0x20 + 0x38 + local_c0) = 1;
  }
  cVar7 = '\x01';
  lVar28 = local_c0;
LAB_1415b0545:
  psVar3 = local_60;
  if (((int)local_58 != 0) && ((int)local_58 != 1)) {
    ppuVar24 = &PTR_u_Normal_1464a8388;
    puVar18 = puVar26;
    do {
      iVar11 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(psVar3,*ppuVar24);
      iVar29 = (int)puVar18;
      if (iVar11 == 0) {
        if (iVar29 != -1) goto LAB_1415b0637;
        break;
      }
      puVar18 = (undefined1 *)(ulonglong)(iVar29 + 1U);
      ppuVar24 = ppuVar24 + 1;
    } while (iVar29 + 1U < 7);
    if (*psVar3 == 0x3d) {
      _Src = psVar3 + 1;
      local_80 = (undefined1 *)0x0;
      local_78 = 0;
      puVar18 = puVar26;
      if ((_Src != (short *)0x0) && (*_Src != 0)) {
        lVar15 = -1;
        do {
          lVar4 = lVar15 + 2;
          lVar15 = lVar15 + 1;
        } while (psVar3[lVar4] != 0);
        uVar21 = (int)lVar15 + 1;
        local_78 = (ulonglong)uVar21;
        if (0 < (int)uVar21) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_80,0);
        }
        puVar18 = local_80;
        _guard_xfg_dispatch_icall_nop(local_80,_Src,(longlong)(int)uVar21 * 2);
        lVar28 = local_c0;
      }
      iVar29 = FUN_1415a9cd0(lVar28,&local_80);
      if (puVar18 != (undefined1 *)0x0) {
        FMemory::Free(puVar18);
      }
      if ((iVar29 != -1) &&
         (piVar16 = (int *)((longlong)iVar29 * 0x20 + 0x28 + lVar28), piVar16 != local_50)) {
        iVar29 = *piVar16;
LAB_1415b0637:
        *(int *)((longlong)local_c8 * 0x20 + 0x28 + lVar28) = iVar29;
        if (0 < DAT_1464a8740) {
          *(undefined1 *)((longlong)local_c8 * 0x20 + 0x38 + lVar28) = 1;
        }
        cVar7 = '\x01';
      }
    }
  }
  if (psVar3 != (short *)0x0) {
    FMemory::Free(psVar3);
  }
  plVar20 = local_b0;
  if (psVar30 != (short *)0x0) {
    FMemory::Free(psVar30);
    plVar20 = local_b0;
  }
LAB_1415b0674:
  iVar11 = local_b8 + 2;
  local_98 = local_98 + 2;
  iVar29 = local_b8 + 3;
  local_b8 = iVar11;
  if ((int)plVar20[1] <= iVar29) {
    if (cVar7 == '\0') {
      return '\0';
    }
    if ((*(int *)(lVar28 + 0x10) != 0) && (*(int *)(lVar28 + 0x10) != 1)) {
      return cVar7;
    }
    if (*(undefined **)(lVar28 + 8) == &DAT_144c9e248) {
      return cVar7;
    }
    *(undefined4 *)(lVar28 + 0x10) = 0;
    if (*(int *)(lVar28 + 0x14) != 0x13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(lVar28 + 8,0x13);
      iVar25 = *(int *)(lVar28 + 0x10);
    }
    *(int *)(lVar28 + 0x10) = iVar25 + 0x13;
    if (*(int *)(lVar28 + 0x14) < iVar25 + 0x13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(lVar28 + 8,iVar25);
    }
    puVar12 = *(undefined8 **)(lVar28 + 8);
    *puVar12 = 0x45005200480054;
    puVar12[1] = 0x45005300440041;
    puVar12[2] = 0x3a005000550054;
    puVar12[3] = 0x74007300750043;
    *(undefined4 *)(puVar12 + 4) = 0x6d006f;
    *(undefined2 *)((longlong)puVar12 + 0x24) = 0;
    return cVar7;
  }
  goto LAB_1415b00e0;
LAB_1415b03a5:
  if (wVar9 != wVar10) {
    if (*psVar30 == 0x2b) {
      pwVar17 = psVar30 + iVar29;
      for (pwVar14 = psVar30 + 1; pwVar6 = psVar30 + 1, puVar18 = puVar26, pwVar14 != pwVar17;
          pwVar14 = pwVar14 + 1) {
        if (*pwVar14 == L'+') {
          *pwVar14 = L'\0';
        }
      }
      while (_Str = pwVar6, uVar21 = (uint)puVar18, pwVar14 = _Str, _Str != pwVar17) {
        while (*pwVar14 != L'\0') {
          pwVar14 = pwVar14 + 1;
          if (pwVar14 == pwVar17) goto LAB_1415b0407;
        }
        if (pwVar14 == pwVar17) break;
        cVar7 = TCString<wchar_t>::IsNumeric(_Str);
        pwVar6 = pwVar14 + 1;
        if (cVar7 != '\0') {
          iVar29 = _wtoi(_Str);
          puVar18 = (undefined1 *)(ulonglong)(uVar21 | 1 << ((byte)iVar29 & 0x1f));
        }
      }
LAB_1415b0407:
      cVar7 = TCString<wchar_t>::IsNumeric(_Str);
      if (cVar7 != '\0') {
        iVar29 = _wtoi(_Str);
        uVar21 = uVar21 | 1 << ((byte)iVar29 & 0x1f);
      }
      puVar18 = (undefined1 *)(ulonglong)uVar21;
      if (uVar21 == 0) {
        puVar18 = puVar26;
      }
LAB_1415b0510:
      if (puVar18 != (undefined1 *)0x0) goto LAB_1415b051c;
    }
    else if (*psVar30 == 0x3d) {
      psVar3 = psVar30 + 1;
      local_90 = (undefined1 *)0x0;
      local_88 = 0;
      puVar18 = puVar26;
      if ((psVar3 != (short *)0x0) && (*psVar3 != 0)) {
        lVar15 = -1;
        do {
          lVar4 = lVar15 + 2;
          lVar15 = lVar15 + 1;
        } while (psVar30[lVar4] != 0);
        uVar21 = (int)lVar15 + 1;
        local_88 = (ulonglong)uVar21;
        if (0 < (int)uVar21) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_90,0);
        }
        puVar18 = local_90;
        _guard_xfg_dispatch_icall_nop(local_90,psVar3,(longlong)(int)uVar21 * 2);
      }
      lVar15 = local_c0;
      iVar29 = FUN_1415a9cd0(local_c0,&local_90);
      if (puVar18 != (undefined1 *)0x0) {
        FMemory::Free(puVar18);
      }
      if (iVar29 != -1) {
        puVar18 = *(undefined1 **)((longlong)iVar29 * 0x20 + 0x30 + lVar15);
        goto LAB_1415b0510;
      }
    }
    else {
      cVar7 = TCString<wchar_t>::IsNumeric(psVar30);
      if (cVar7 != '\0') {
        uVar21 = FParse::HexNumber(psVar30);
        puVar18 = (undefined1 *)(ulonglong)uVar21;
        goto LAB_1415b0510;
      }
    }
  }
  goto LAB_1415b0515;
}



// FUNCTION 1415b0760 FUN_1415b0760 body=421 status=ok
// SIG undefined FUN_1415b0760(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1415b0760(undefined8 param_1,longlong param_2)

{
  char cVar1;
  wint_t wVar2;
  wint_t wVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_858 [48];
  wchar_t local_828;
  undefined1 local_826 [2046];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_858;
  cVar1 = FParse::Param();
  if (cVar1 != '\0') {
    return 1;
  }
  _guard_xfg_dispatch_icall_nop(local_826,0,0x7fe);
  lVar5 = 0;
  local_828 = L'\0';
  FWindowsPlatformMisc::GetEnvironmentVariable(*(undefined8 *)(param_2 + 8),&local_828,0x3ff);
  lVar6 = lVar5;
  if (local_828 == L'\0') {
    return 0;
  }
  do {
    wVar2 = *(wint_t *)(local_826 + lVar6 + -2);
    if ((wVar2 == 0) && (*(short *)((longlong)&DAT_144c97cf0 + lVar6) == 0)) {
      return 1;
    }
    if (wVar2 != *(wint_t *)((longlong)&DAT_144c97cf0 + lVar6)) {
      wVar2 = towlower(wVar2);
      wVar3 = towlower(*(wint_t *)((longlong)&DAT_144c97cf0 + lVar6));
      if (wVar2 != wVar3) {
        lVar6 = lVar5;
        if (wVar2 == wVar3) {
          return 1;
        }
        do {
          wVar2 = *(wint_t *)(local_826 + lVar6 + -2);
          if ((wVar2 == 0) && (*(short *)((longlong)&DAT_144c97d00 + lVar6) == 0)) {
            return 1;
          }
          if (wVar2 != *(wint_t *)((longlong)&DAT_144c97d00 + lVar6)) {
            wVar2 = towlower(wVar2);
            wVar3 = towlower(*(wint_t *)((longlong)&DAT_144c97d00 + lVar6));
            if (wVar2 != wVar3) {
              if (wVar2 == wVar3) {
                return 1;
              }
              do {
                wVar2 = *(wint_t *)(local_826 + lVar5 + -2);
                if ((wVar2 == 0) && (*(short *)((longlong)&DAT_144c961f4 + lVar5) == 0)) {
                  return 1;
                }
                if (wVar2 != *(wint_t *)((longlong)&DAT_144c961f4 + lVar5)) {
                  wVar2 = towlower(wVar2);
                  wVar3 = towlower(*(wint_t *)((longlong)&DAT_144c961f4 + lVar5));
                  if (wVar2 != wVar3) {
                    if (wVar2 == wVar3) {
                      return 1;
                    }
                    iVar4 = _wtoi(&local_828);
                    if (0 < iVar4) {
                      return 1;
                    }
                    return 0;
                  }
                }
                lVar5 = lVar5 + 2;
              } while( true );
            }
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
    }
    lVar6 = lVar6 + 2;
  } while( true );
}



// FUNCTION 1415b0910 FUN_1415b0910 body=35 status=ok
// SIG undefined FUN_1415b0910(void)

void FUN_1415b0910(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_1;
  uStack_14 = param_1[1];
  uStack_10 = param_1[2];
  uStack_c = param_1[3];
  uVar1 = FCommandLine::Get();
  FUN_1415b0760(uVar1,&local_18);
  return;
}



// FUNCTION 1415b0940 FUN_1415b0940 body=550 status=ok
// SIG undefined FUN_1415b0940(void)

void FUN_1415b0940(longlong param_1)

{
  char cVar1;
  BOOL BVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  
  if (*(char *)(param_1 + 0x73) == '\0') {
    lVar4 = *(longlong *)(param_1 + 0x90);
    plVar8 = (longlong *)0x0;
    cVar1 = *(char *)(param_1 + 0x75);
    if (*(char *)(lVar4 + 0xa1) == '\0') {
      BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x58));
      if (BVar2 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x58));
      }
      plVar6 = (longlong *)(lVar4 + 0x80);
      plVar7 = plVar8;
      plVar10 = plVar8;
      do {
        plVar3 = (longlong *)*plVar6;
        if (plVar3 != (longlong *)0x0) {
          *(undefined8 *)(lVar4 + 0x80 + (longlong)(int)plVar10 * 8) = 0;
          if (plVar3 != (longlong *)0x0) goto LAB_1415b0a3a;
          break;
        }
        plVar10 = (longlong *)(ulonglong)((int)plVar10 + 1);
        plVar7 = (longlong *)((longlong)plVar7 + 1);
        plVar6 = plVar6 + 1;
        plVar3 = plVar8;
      } while ((longlong)plVar7 < 4);
      if (*(char *)(lVar4 + 0xa0) == '\0') {
        if (*(int *)(lVar4 + 0x18) == 0) {
          puVar9 = &DAT_143f3eda8;
        }
        else {
          puVar9 = *(undefined2 **)(lVar4 + 0x10);
        }
        plVar3 = (longlong *)
                 (**(code **)(**(longlong **)(lVar4 + 8) + 0xc0))
                           (*(longlong **)(lVar4 + 8),puVar9,0);
        *(bool *)(lVar4 + 0xa0) = plVar3 == (longlong *)0x0;
      }
LAB_1415b0a3a:
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x58));
    }
    else {
      if (*(int *)(lVar4 + 0x18) == 0) {
        puVar9 = &DAT_143f3eda8;
      }
      else {
        puVar9 = *(undefined2 **)(lVar4 + 0x10);
      }
      plVar3 = (longlong *)
               (**(code **)(**(longlong **)(lVar4 + 8) + 0xc0))(*(longlong **)(lVar4 + 8),puVar9,0);
    }
    if (plVar3 == (longlong *)0x0) {
      if ((*(char *)(param_1 + 0x75) == '\0') && (cVar1 != '\0')) {
        FMemory::Free(*(undefined8 *)(param_1 + 0x10));
        *(undefined8 *)(param_1 + 0x10) = 0;
      }
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0xa0);
      if (lVar4 == 0x7fffffffffffffff) {
        lVar4 = (**(code **)(*plVar3 + 0x40))(plVar3);
        lVar4 = lVar4 - *(longlong *)(param_1 + 0x98);
        *(longlong *)(param_1 + 0xa0) = lVar4;
      }
      if (cVar1 == '\0') {
        uVar5 = FMemory::Malloc(lVar4,0);
        *(undefined8 *)(param_1 + 0x10) = uVar5;
      }
      (**(code **)(*plVar3 + 0x10))(plVar3,*(undefined8 *)(param_1 + 0x98));
      (**(code **)(*plVar3 + 0x20))
                (plVar3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0xa0));
      lVar4 = *(longlong *)(param_1 + 0x90);
      if (*(char *)(lVar4 + 0xa1) == '\0') {
        BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x58));
        if (BVar2 == 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x58));
        }
        plVar6 = (longlong *)(lVar4 + 0x80);
        plVar7 = plVar8;
        do {
          if (*plVar6 == 0) {
            *(longlong **)(lVar4 + 0x80 + (longlong)(int)plVar7 * 8) = plVar3;
            LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x58));
            goto LAB_1415b0b59;
          }
          plVar7 = (longlong *)(ulonglong)((int)plVar7 + 1);
          plVar8 = (longlong *)((longlong)plVar8 + 1);
          plVar6 = plVar6 + 1;
        } while ((longlong)plVar8 < 4);
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x58));
      }
      (**(code **)*plVar3)(plVar3,1);
    }
  }
LAB_1415b0b59:
  IAsyncReadRequest::SetComplete(param_1);
  return;
}



// FUNCTION 1415b0b70 PerformRequest body=52 status=ok
// SIG undefined PerformRequest(void)

void FGenericSizeRequest::PerformRequest(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x73) == '\0') {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x70))
                      (*(longlong **)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88));
    *(undefined8 *)(param_1 + 0x10) = uVar1;
  }
  IAsyncReadRequest::SetComplete(param_1);
  return;
}



// FUNCTION 1415b0bb0 thunk_FUN_1415ac3e0 body=5 status=ok
// SIG undefined thunk_FUN_1415ac3e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_1415ac3e0(void)

{
  int *piVar1;
  char cVar2;
  short *psVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  int iVar13;
  undefined1 auStackX_8 [8];
  undefined1 auStackX_10 [8];
  undefined1 auStackX_18 [8];
  undefined1 auStackX_20 [8];
  undefined4 uVar14;
  longlong *plStack_1c8;
  int iStack_1c0;
  longlong *plStack_1b8;
  int iStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined2 *puStack_198;
  undefined8 uStack_190;
  wchar_t *pwStack_188;
  undefined8 uStack_180;
  wchar_t *pwStack_178;
  undefined8 uStack_170;
  wchar_t *pwStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  longlong *plStack_108;
  int iStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong lStack_d8;
  longlong *plStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  longlong alStack_b0 [2];
  longlong alStack_a0 [2];
  longlong alStack_90 [2];
  longlong alStack_80 [2];
  longlong alStack_70 [2];
  undefined1 auStack_60 [16];
  longlong alStack_50 [4];
  
  DAT_1468b0ded = FUN_1416514f0();
  DAT_1468b0dee = FUN_141651660();
  DAT_1468b0def = FUN_1416517b0();
  DAT_1468b0f3a = FApp::IsEngineInstalled();
  FString::PrintfImpl(&uStack_e8,L"UE4-%s",&DAT_146299580);
  if (DAT_1468b0f40 != 0) {
    FMemory::Free();
  }
  DAT_1468b0f40 = uStack_e8;
  DAT_1468b0f48._0_4_ = uStack_e0;
  DAT_1468b0f48._4_4_ = uStack_dc;
  psVar3 = (short *)FWindowsPlatformProcess::ExecutableName(1);
  iVar13 = 0;
  if (DAT_1468b0f50 != psVar3) {
    iVar9 = iVar13;
    if ((psVar3 != (short *)0x0) && (*psVar3 != 0)) {
      lVar10 = -1;
      do {
        lVar10 = lVar10 + 1;
      } while (psVar3[lVar10] != 0);
      iVar9 = (int)lVar10 + 1;
    }
    DAT_1468b0f58 = 0;
    iVar8 = iVar13;
    if (DAT_1468b0f5c != iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&DAT_1468b0f50,iVar9);
      iVar8 = DAT_1468b0f58;
    }
    DAT_1468b0f58 = iVar8 + iVar9;
    if (DAT_1468b0f5c < DAT_1468b0f58) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1468b0f50);
    }
    if (iVar9 != 0) {
      _guard_xfg_dispatch_icall_nop(DAT_1468b0f50,psVar3,(longlong)iVar9 * 2);
    }
  }
  uStack_1a8 = 0;
  uStack_1a0 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&uStack_1a8,0);
  uVar5 = uStack_1a8;
  FGenericPlatformString::Convert<char,wchar_t>(uStack_1a8,0x10,"WindowsNoEditor",0x10,0x3f);
  if (DAT_1468b0f60 != 0) {
    FMemory::Free();
  }
  DAT_1468b0f68 = (undefined4)uStack_1a0;
  _DAT_1468b0f6c = uStack_1a0._4_4_;
  DAT_1468b0f60 = uVar5;
  puStack_198 = (undefined2 *)0x0;
  uStack_190 = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&puStack_198,0);
  puVar7 = puStack_198;
  FGenericPlatformString::Convert<char,wchar_t>(puStack_198,8,"Windows",8,0x3f);
  if (DAT_1468b0f70 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  DAT_1468b0f78 = (int)uStack_190;
  _DAT_1468b0f7c = uStack_190._4_4_;
  DAT_1468b0f70 = puVar7;
  psVar3 = (short *)FApp::GetDeploymentName();
  if (DAT_1468b0f80 != psVar3) {
    iVar9 = iVar13;
    if ((psVar3 != (short *)0x0) && (*psVar3 != 0)) {
      lVar10 = -1;
      do {
        lVar10 = lVar10 + 1;
      } while (psVar3[lVar10] != 0);
      iVar9 = (int)lVar10 + 1;
    }
    DAT_1468b0f88 = 0;
    iVar8 = iVar13;
    if (DAT_1468b0f8c != iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&DAT_1468b0f80,iVar9);
      iVar8 = DAT_1468b0f88;
    }
    DAT_1468b0f88 = iVar8 + iVar9;
    if (DAT_1468b0f8c < DAT_1468b0f88) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1468b0f80);
    }
    if (iVar9 != 0) {
      _guard_xfg_dispatch_icall_nop(DAT_1468b0f80,psVar3,(longlong)iVar9 * 2);
    }
  }
  psVar3 = (short *)FUN_1416ac480();
  if (DAT_1468b0f90 != psVar3) {
    iVar9 = iVar13;
    if ((psVar3 != (short *)0x0) && (*psVar3 != 0)) {
      lVar10 = -1;
      do {
        lVar10 = lVar10 + 1;
      } while (psVar3[lVar10] != 0);
      iVar9 = (int)lVar10 + 1;
    }
    DAT_1468b0f98 = 0;
    iVar8 = iVar13;
    if (DAT_1468b0f9c != iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&DAT_1468b0f90,iVar9);
      iVar8 = DAT_1468b0f98;
    }
    DAT_1468b0f98 = iVar9 + iVar8;
    if (DAT_1468b0f9c < DAT_1468b0f98) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1468b0f90);
    }
    if (iVar9 != 0) {
      _guard_xfg_dispatch_icall_nop(DAT_1468b0f90,psVar3,(longlong)iVar9 * 2);
    }
  }
  psVar3 = (short *)FUN_1415b59d0();
  if (DAT_1468b0fa0 != psVar3) {
    iVar9 = iVar13;
    if ((psVar3 != (short *)0x0) && (*psVar3 != 0)) {
      lVar10 = -1;
      do {
        lVar10 = lVar10 + 1;
      } while (psVar3[lVar10] != 0);
      iVar9 = (int)lVar10 + 1;
    }
    DAT_1468b0fa8 = 0;
    iVar8 = iVar13;
    if (DAT_1468b0fac != iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&DAT_1468b0fa0,iVar9);
      iVar8 = DAT_1468b0fa8;
    }
    DAT_1468b0fa8 = iVar9 + iVar8;
    if (DAT_1468b0fac < DAT_1468b0fa8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1468b0fa0);
    }
    if (iVar9 != 0) {
      _guard_xfg_dispatch_icall_nop(DAT_1468b0fa0,psVar3,(longlong)iVar9 * 2);
    }
  }
  uStack_158 = 0;
  uStack_150 = 0;
  pwStack_168 = (wchar_t *)0x0;
  uStack_160 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&pwStack_168,0);
  builtin_wcsncpy(pwStack_168,L"AccountId",10);
  pwStack_178 = (wchar_t *)0x0;
  uStack_170 = 0x1a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&pwStack_178,0);
  builtin_wcsncpy(pwStack_178,L"Unreal Engine/Identifiers",0x1a);
  pwStack_188 = (wchar_t *)0x0;
  uStack_180 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&pwStack_188,0);
  builtin_wcsncpy(pwStack_188,L"Epic Games",0xb);
  FWindowsPlatformMisc::GetStoredValue(&pwStack_188,&pwStack_178,&pwStack_168,&uStack_158);
  if (pwStack_188 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (pwStack_178 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (pwStack_168 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (DAT_1468b0fb0 != 0) {
    FMemory::Free();
  }
  DAT_1468b0fb0 = uStack_158;
  DAT_1468b0fb8 = (undefined4)uStack_150;
  _DAT_1468b0fbc = uStack_150._4_4_;
  FGenericPlatformMisc::GetMachineId(&iStack_118);
  if (((iStack_118 == 0 && iStack_110 == 0) && iStack_114 == 0) && iStack_10c == 0) {
    uStack_148 = 0;
    uStack_140 = 0;
  }
  else {
    uVar5 = FUN_141682af0(&iStack_118,alStack_b0,0);
    FString::ToLower(uVar5,&uStack_148);
    if (alStack_b0[0] != 0) {
      FMemory::Free();
    }
  }
  if (DAT_1468b0fc0 != 0) {
    FMemory::Free();
  }
  DAT_1468b0fc0 = uStack_148;
  DAT_1468b0fc8 = (undefined4)uStack_140;
  _DAT_1468b0fcc = uStack_140._4_4_;
  FUN_1416a0990(&DAT_1468b0fd0,&DAT_1468b0fe0);
  DAT_1468b1100 = FUN_1416a5660();
  DAT_1468b1104 = FUN_1416a5810();
  plVar4 = (longlong *)FUN_14169da10(alStack_a0);
  if (plVar4 != &DAT_1468b0ff0) {
    if (DAT_1468b0ff0 != 0) {
      FMemory::Free();
    }
    DAT_1468b0ff0 = *plVar4;
    *plVar4 = 0;
    DAT_1468b0ff8 = (undefined4)plVar4[1];
    _DAT_1468b0ffc = *(undefined4 *)((longlong)plVar4 + 0xc);
    plVar4[1] = 0;
  }
  if (alStack_a0[0] != 0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)FUN_14169d9a0(alStack_90);
  if (plVar4 != &DAT_1468b1000) {
    if (DAT_1468b1000 != 0) {
      FMemory::Free();
    }
    DAT_1468b1000 = *plVar4;
    *plVar4 = 0;
    DAT_1468b1008 = (undefined4)plVar4[1];
    _DAT_1468b100c = *(undefined4 *)((longlong)plVar4 + 0xc);
    plVar4[1] = 0;
  }
  if (alStack_90[0] != 0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)FUN_1416a0f20(alStack_80);
  if (plVar4 != &DAT_1468b1010) {
    if (DAT_1468b1010 != 0) {
      FMemory::Free();
    }
    DAT_1468b1010 = *plVar4;
    *plVar4 = 0;
    DAT_1468b1018 = (undefined4)plVar4[1];
    _DAT_1468b101c = *(undefined4 *)((longlong)plVar4 + 0xc);
    plVar4[1] = 0;
  }
  if (alStack_80[0] != 0) {
    FMemory::Free();
  }
  psVar3 = (short *)FWindowsPlatformProcess::UserName(1);
  if (DAT_1468b1020 != psVar3) {
    iVar9 = iVar13;
    if ((psVar3 != (short *)0x0) && (*psVar3 != 0)) {
      lVar10 = -1;
      do {
        lVar10 = lVar10 + 1;
      } while (psVar3[lVar10] != 0);
      iVar9 = (int)lVar10 + 1;
    }
    DAT_1468b1028 = 0;
    iVar8 = iVar13;
    if (DAT_1468b102c != iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&DAT_1468b1020,iVar9);
      iVar8 = DAT_1468b1028;
    }
    DAT_1468b1028 = iVar9 + iVar8;
    if (DAT_1468b102c < DAT_1468b1028) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1468b1020);
    }
    if (iVar9 != 0) {
      _guard_xfg_dispatch_icall_nop(DAT_1468b1020,psVar3,(longlong)iVar9 * 2);
    }
  }
  plVar4 = (longlong *)FWindowsPlatformMisc::GetDefaultLocale(alStack_70);
  if (plVar4 != &DAT_1468b1030) {
    if (DAT_1468b1030 != 0) {
      FMemory::Free();
    }
    DAT_1468b1030 = *plVar4;
    *plVar4 = 0;
    DAT_1468b1038 = (undefined4)plVar4[1];
    _DAT_1468b103c = *(undefined4 *)((longlong)plVar4 + 0xc);
    plVar4[1] = 0;
  }
  if (alStack_70[0] != 0) {
    FMemory::Free();
  }
  cVar2 = FUN_1416514e0();
  if (cVar2 == '\0') {
    psVar3 = &DAT_144c96694;
  }
  else {
    psVar3 = (short *)FCommandLine::GetOriginalForLogging();
  }
  if (DAT_1468b1070 != psVar3) {
    iVar9 = iVar13;
    if ((psVar3 != (short *)0x0) && (*psVar3 != 0)) {
      lVar10 = -1;
      do {
        lVar10 = lVar10 + 1;
      } while (psVar3[lVar10] != 0);
      iVar9 = (int)lVar10 + 1;
    }
    DAT_1468b1078 = 0;
    if (DAT_1468b107c != iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&DAT_1468b1070,iVar9);
      iVar13 = DAT_1468b1078;
    }
    DAT_1468b1078 = iVar9 + iVar13;
    if (DAT_1468b107c < DAT_1468b1078) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1468b1070);
    }
    if (iVar9 != 0) {
      _guard_xfg_dispatch_icall_nop(DAT_1468b1070,psVar3,(longlong)iVar9 * 2);
    }
  }
  cVar2 = FInternationalization::IsAvailable();
  if (cVar2 == '\0') {
    puStack_138 = (undefined4 *)0x0;
    uStack_130 = 3;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&puStack_138,0);
    *puStack_138 = 0x6e0065;
    *(undefined2 *)(puStack_138 + 1) = 0;
    uVar5 = FInternationalization::Get();
    FInternationalization::GetCulture(uVar5,&lStack_d8,&puStack_138);
    if (puStack_138 != (undefined4 *)0x0) {
      FMemory::Free();
    }
    if (lStack_d8 == 0) {
      DAT_1468b1110 = 0x409;
    }
    else {
      DAT_1468b1110 = FSlateTextBlockLayout::SetDebugSourceInfo();
    }
  }
  else {
    lVar10 = FInternationalization::Get();
    plStack_d0 = *(longlong **)(lVar10 + 0x30);
    uVar5 = *(undefined8 *)(lVar10 + 0x28);
    if (plStack_d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_d0 + 1) = (int)plStack_d0[1] + 1;
      UNLOCK();
    }
    DAT_1468b1110 = FSlateTextBlockLayout::SetDebugSourceInfo(uVar5);
  }
  if (plStack_d0 != (longlong *)0x0) {
    LOCK();
    plVar4 = plStack_d0 + 1;
    lVar10 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_d0)(plStack_d0);
      LOCK();
      piVar1 = (int *)((longlong)plStack_d0 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*plStack_d0 + 8))(plStack_d0,1);
      }
    }
  }
  DAT_1468b1108 = 0;
  cVar2 = FUN_1416514e0();
  if (cVar2 != '\0') {
    uVar5 = FCommandLine::Get();
    cVar2 = FParse::Param(uVar5,L"fullcrashdumpalways");
    if (cVar2 == '\0') {
      cVar2 = FParse::Param(uVar5,L"fullcrashdump");
      if (cVar2 != '\0') {
        DAT_1468b1108 = 1;
      }
    }
    else {
      DAT_1468b1108 = 2;
    }
  }
  FGuid::NewGuid(auStack_60);
  puVar6 = (undefined8 *)FUN_141682af0(auStack_60,alStack_50,0);
  if (*(int *)(puVar6 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*puVar6;
  }
  puVar12 = &DAT_143f3eda8;
  if (DAT_1468b0f78 != 0) {
    puVar12 = DAT_1468b0f70;
  }
  puVar11 = &DAT_143f3eda8;
  if (DAT_1464a8668 != 0) {
    puVar11 = DAT_1464a8660;
  }
  FString::PrintfImpl(&uStack_128,L"%s%s-%s",puVar11,puVar12,puVar7);
  uVar14 = (undefined4)((ulonglong)puVar7 >> 0x20);
  if (DAT_1468b1040 != 0) {
    FMemory::Free();
  }
  DAT_1468b1040 = uStack_128;
  DAT_1468b1048 = (undefined4)uStack_120;
  _DAT_1468b104c = uStack_120._4_4_;
  uStack_120 = 0;
  uStack_128 = 0;
  if (alStack_50[0] != 0) {
    FMemory::Free();
  }
  plStack_1c8 = (longlong *)0x0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x20);
  iStack_1c0 = 2;
  plStack_1c8 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_GetPoolName_144ca0b08;
    lVar10 = FDelegateHandle::GenerateNewID();
    plVar4[2] = lVar10;
  }
  uVar5 = FUN_14164ab60();
  FUN_14158f860(uVar5,auStackX_8,&plStack_1c8,L"FGenericCrashContext_Lambda",
                CONCAT44(uVar14,0x3f800000));
  if (iStack_1c0 != 0) {
    if (plStack_1c8 == (longlong *)0x0) goto LAB_1415ace8f;
    (**(code **)(*plStack_1c8 + 0x28))(plStack_1c8,0);
    if (plStack_1c8 != (longlong *)0x0) {
      plStack_1c8 = (longlong *)FMemory::Realloc(plStack_1c8,0,0);
    }
    iStack_1c0 = 0;
  }
  if (plStack_1c8 != (longlong *)0x0) {
    FMemory::Free(plStack_1c8);
  }
LAB_1415ace8f:
  plVar4 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_GetPoolName_144ca0bd8;
    lVar10 = FDelegateHandle::GenerateNewID();
    plVar4[2] = lVar10;
    *plVar4 = (longlong)&PTR_GetPoolName_144ca0c20;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af628,1);
    (**(code **)(*plVar4 + 0x20))(plVar4,auStackX_10);
    iVar13 = DAT_1464af630;
    lVar10 = (longlong)DAT_1464af630;
    DAT_1464af630 = DAT_1464af630 + 1;
    if (DAT_1464af634 < DAT_1464af630) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af628,iVar13);
    }
    puVar6 = (undefined8 *)(lVar10 * 0x10 + _DAT_1464af628);
    *puVar6 = plVar4;
    *(undefined4 *)(puVar6 + 1) = 2;
  }
  plVar4 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_GetPoolName_144ca0c68;
    lVar10 = FDelegateHandle::GenerateNewID();
    plVar4[2] = lVar10;
    *plVar4 = (longlong)&PTR_GetPoolName_144ca0cb0;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af640,1);
    (**(code **)(*plVar4 + 0x20))(plVar4,auStackX_18);
    iVar13 = DAT_1464af648;
    lVar10 = (longlong)DAT_1464af648;
    DAT_1464af648 = DAT_1464af648 + 1;
    if (DAT_1464af64c < DAT_1464af648) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af640,iVar13);
    }
    puVar6 = (undefined8 *)(lVar10 * 0x10 + _DAT_1464af640);
    *puVar6 = plVar4;
    *(undefined4 *)(puVar6 + 1) = 2;
  }
  plVar4 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_GetPoolName_144ca0cf8;
    lVar10 = FDelegateHandle::GenerateNewID();
    plVar4[2] = lVar10;
    *plVar4 = (longlong)&PTR_GetPoolName_144ca0d40;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af658,1);
    (**(code **)(*plVar4 + 0x20))(plVar4,auStackX_20);
    iVar13 = DAT_1464af660;
    lVar10 = (longlong)DAT_1464af660;
    DAT_1464af660 = DAT_1464af660 + 1;
    if (DAT_1464af664 < DAT_1464af660) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af658,iVar13);
    }
    puVar6 = (undefined8 *)(lVar10 * 0x10 + DAT_1464af658);
    *puVar6 = plVar4;
    *(undefined4 *)(puVar6 + 1) = 2;
  }
  plStack_108 = (longlong *)0x0;
  iStack_100 = 0;
  puVar6 = (undefined8 *)operator_new(0x18,&plStack_108);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_GetPoolName_144ca0d88;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar5;
    *puVar6 = &PTR_GetPoolName_144ca0dd0;
  }
  iVar13 = iStack_100;
  plVar4 = plStack_108;
  if (iStack_100 == 0) {
    if (plStack_108 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  else if (plStack_108 != (longlong *)0x0) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af670,1);
    (**(code **)(*plVar4 + 0x20))(plVar4,auStack_c8);
    iVar9 = DAT_1464af678;
    lVar10 = (longlong)DAT_1464af678;
    DAT_1464af678 = DAT_1464af678 + 1;
    if (DAT_1464af67c < DAT_1464af678) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af670,iVar9);
    }
    puVar6 = (undefined8 *)(lVar10 * 0x10 + _DAT_1464af670);
    *puVar6 = plVar4;
    *(int *)(puVar6 + 1) = iVar13;
  }
  plStack_1b8 = (longlong *)0x0;
  iStack_1b0 = 0;
  puVar6 = (undefined8 *)operator_new(0x18,&plStack_1b8);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_GetPoolName_144ca0e18;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar5;
    *puVar6 = &PTR_GetPoolName_144ca0e60;
  }
  iVar13 = iStack_1b0;
  plVar4 = plStack_1b8;
  if ((iStack_1b0 != 0) && (plStack_1b8 != (longlong *)0x0)) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af688,1);
    (**(code **)(*plVar4 + 0x20))(plVar4,auStack_c0);
    iVar9 = DAT_1464af690;
    lVar10 = (longlong)DAT_1464af690;
    DAT_1464af690 = DAT_1464af690 + 1;
    if (DAT_1464af694 < DAT_1464af690) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af688,iVar9);
    }
    plStack_1b8 = (longlong *)0x0;
    puVar6 = (undefined8 *)(lVar10 * 0x10 + _DAT_1464af688);
    iStack_1b0 = 0;
    *puVar6 = plVar4;
    *(int *)(puVar6 + 1) = iVar13;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&plStack_1b8);
  uStack_f8 = 0;
  uStack_f0 = 0;
  puVar6 = (undefined8 *)operator_new(0x20,&uStack_f8);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_GetPoolName_143f3f048;
    puVar6[1] = FUN_1415ad240;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar6[3] = uVar5;
    *puVar6 = &PTR_GetPoolName_143f3f090;
  }
  TBaseMulticastDelegate<void>::Add(&DAT_1464af6a0,auStack_b8,&uStack_f8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&uStack_f8);
  DAT_1468b02a0 = 1;
  return;
}



// FUNCTION 1415b0bc0 FUN_1415b0bc0 body=858 status=ok
// SIG undefined FUN_1415b0bc0(void)

undefined8 FUN_1415b0bc0(undefined8 *param_1)

{
  void *_Dst;
  void *pvVar1;
  undefined *_Src;
  char cVar2;
  wint_t wVar3;
  wint_t wVar4;
  longlong *plVar5;
  int iVar6;
  wint_t *pwVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined2 *puVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined **ppuVar17;
  ulonglong uVar18;
  undefined8 *local_res10;
  ulonglong local_38;
  uint local_30;
  uint local_2c;
  ulonglong uVar16;
  
  if (0 < DAT_1464a8740) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      puVar13 = &DAT_143f3eda8;
    }
    else {
      puVar13 = *(undefined2 **)*param_1;
    }
    pwVar7 = &DAT_144c9e980;
    do {
      wVar3 = *(wint_t *)((longlong)(puVar13 + -0xa264f4c0) + (longlong)pwVar7);
      if ((wVar3 == 0) && (*pwVar7 == 0)) goto LAB_1415b0c3a;
      if (wVar3 != *pwVar7) {
        wVar3 = towlower(wVar3);
        wVar4 = towlower(*pwVar7);
        if (wVar3 != wVar4) goto LAB_1415b0c30;
      }
      pwVar7 = pwVar7 + 1;
    } while( true );
  }
LAB_1415b0cb3:
  uVar12 = 0;
  local_38 = 0;
  local_2c = 0;
  local_res10 = &DAT_1464a8760;
  uVar14 = uVar12;
  uVar16 = uVar12;
  uVar18 = uVar12;
  do {
    pvVar1 = (void *)*local_res10;
    if (pvVar1 == (void *)0x0) break;
    iVar6 = (int)uVar12;
    if ((iVar6 != 0) && (iVar6 != 1)) {
      local_30 = iVar6 + 1;
      if ((int)uVar18 < (int)local_30) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,uVar12);
        uVar18 = (ulonglong)local_2c;
        uVar14 = local_38;
      }
      uVar12 = (ulonglong)local_30;
      puVar13 = (undefined2 *)(uVar14 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
      *puVar13 = 0x2c;
      puVar13[1] = 0;
    }
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (*(short *)((longlong)pvVar1 + lVar8 * 2) != 0);
    iVar6 = (int)lVar8;
    if (iVar6 != 0) {
      iVar9 = (int)uVar12;
      local_30 = iVar9 + (uint)(iVar9 == 0) + iVar6;
      if ((int)uVar18 < (int)local_30) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,uVar12);
        uVar18 = (ulonglong)local_2c;
        uVar14 = local_38;
      }
      uVar12 = (ulonglong)local_30;
      _Dst = (void *)(uVar14 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(_Dst,pvVar1,(longlong)iVar6 * 2);
      *(undefined2 *)((longlong)iVar6 * 2 + (longlong)_Dst) = 0;
    }
    local_res10 = local_res10 + 4;
    uVar15 = (int)uVar16 + 1;
    uVar16 = (ulonglong)uVar15;
  } while ((int)uVar15 < 0x18);
  uVar15 = 0;
  local_30 = 0;
  if ((int)uVar18 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_38,0);
    uVar18 = (ulonglong)local_2c;
    uVar14 = local_38;
  }
  ppuVar17 = &PTR_u_Normal_1464a8388;
  uVar10 = local_30;
  do {
    _Src = *ppuVar17;
    if (_Src != (undefined *)0x0) {
      uVar11 = uVar10;
      if ((uVar10 != 0) && (uVar10 != 1)) {
        local_30 = uVar10 + 1;
        if ((int)uVar18 < (int)local_30) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,uVar10);
          uVar18 = (ulonglong)local_2c;
          uVar14 = local_38;
        }
        puVar13 = (undefined2 *)(uVar14 + ((longlong)(int)uVar10 - (ulonglong)(uVar10 != 0)) * 2);
        *puVar13 = 0x2c;
        puVar13[1] = 0;
        uVar11 = local_30;
      }
      lVar8 = -1;
      do {
        lVar8 = lVar8 + 1;
      } while (*(short *)(_Src + lVar8 * 2) != 0);
      iVar6 = (int)lVar8;
      uVar10 = uVar11;
      if (iVar6 != 0) {
        local_30 = iVar6 + (uint)(uVar11 == 0) + uVar11;
        if ((int)uVar18 < (int)local_30) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,uVar11);
          uVar18 = (ulonglong)local_2c;
          uVar14 = local_38;
        }
        uVar10 = local_30;
        pvVar1 = (void *)(uVar14 + ((longlong)(int)uVar11 - (ulonglong)(uVar11 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,_Src,(longlong)iVar6 * 2);
        *(undefined2 *)((longlong)iVar6 * 2 + (longlong)pvVar1) = 0;
      }
    }
    uVar15 = uVar15 + 1;
    ppuVar17 = ppuVar17 + 1;
  } while (uVar15 < 7);
  if (uVar14 != 0) {
    FMemory::Free(uVar14);
  }
  return 0;
LAB_1415b0c30:
  if (wVar3 == wVar4) {
LAB_1415b0c3a:
    plVar5 = &DAT_1464a8780;
    do {
      if ((((plVar5[-4] == 0) || (*plVar5 == 0)) || (plVar5[4] == 0)) ||
         ((plVar5[8] == 0 || (plVar5[0xc] == 0)))) {
        return 1;
      }
      if (plVar5[0x10] == 0) {
        return 1;
      }
      plVar5 = plVar5 + 0x18;
    } while ((longlong)plVar5 < 0x1464a8a80);
    return 1;
  }
  cVar2 = FUN_1415afe90(&DAT_1464a8740,param_1);
  if (cVar2 != '\0') {
    FUN_1415a3420(1);
    return 1;
  }
  goto LAB_1415b0cb3;
}



// FUNCTION 1415b0f20 FUN_1415b0f20 body=188 status=ok
// SIG undefined FUN_1415b0f20(void)

void FUN_1415b0f20(void)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_res10 [24];
  
  if (DAT_1468b616c == '\0') {
    plVar2 = (longlong *)FMemory::Realloc(0,0x20);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_GetPoolName_144ca0ea8;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[2] = lVar3;
      *plVar2 = (longlong)&PTR_GetPoolName_144ca0ef0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af6a0,1);
      (**(code **)(*plVar2 + 0x20))(plVar2,local_res10);
      iVar1 = DAT_1464af6a8;
      lVar3 = (longlong)DAT_1464af6a8;
      DAT_1464af6a8 = DAT_1464af6a8 + 1;
      if (DAT_1464af6ac < DAT_1464af6a8) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af6a0,iVar1);
      }
      puVar4 = (undefined8 *)(lVar3 * 0x10 + DAT_1464af6a0);
      *puVar4 = plVar2;
      *(undefined4 *)(puVar4 + 1) = 2;
    }
  }
  return;
}



// FUNCTION 1415b0fe0 FUN_1415b0fe0 body=1889 status=ok
// SIG undefined FUN_1415b0fe0(void)

undefined8 * FUN_1415b0fe0(void)

{
  void *pvVar1;
  char cVar2;
  char cVar3;
  wint_t wVar4;
  wint_t wVar5;
  int iVar6;
  short *_Src;
  undefined8 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  undefined2 *puVar13;
  undefined2 *local_88;
  int local_80;
  int local_7c;
  undefined2 *local_78;
  int local_70;
  int local_6c;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  void *local_38;
  ulonglong local_30;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468b14a0) && (_Init_thread_header(&DAT_1468b14a0), DAT_1468b14a0 == -1))
  {
    atexit((_func_5014 *)&LAB_143e75fe0);
    _Init_thread_footer(&DAT_1468b14a0);
  }
  if ((DAT_1468b6148 == 0) || (*(char *)(DAT_1468b6148 + 0x59) == '\0')) {
    cVar3 = '\0';
  }
  else {
    cVar3 = '\x01';
  }
  puVar13 = (undefined2 *)0x0;
  iVar12 = 0;
  cVar2 = DAT_1468b14a4;
  if ((DAT_1468b14a4 != cVar3) && (cVar2 = cVar3, DAT_1468b1490 != (undefined8 *)&DAT_144c97f64)) {
    DAT_1468b1498 = 0;
    if (DAT_1468b149c != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&DAT_1468b1490,0);
    }
    if (DAT_1468b149c < (int)DAT_1468b1498) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1468b1490,DAT_1468b1498);
    }
  }
  DAT_1468b14a4 = cVar2;
  pvVar1 = DAT_1468b10c0;
  if ((DAT_1468b1498 == 0) || (DAT_1468b1498 == 1)) {
    iVar6 = (int)DAT_1468b10c8;
    DAT_1468b1498 = iVar6;
    if ((iVar6 == 0) && (DAT_1468b149c == 0)) {
      DAT_1468b149c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                (&DAT_1468b1490,DAT_1468b10c8 & 0xffffffff,DAT_1468b149c);
      _guard_xfg_dispatch_icall_nop(DAT_1468b1490,pvVar1,(longlong)iVar6 * 2);
    }
  }
  if ((DAT_1468b1498 != 0) && (DAT_1468b1498 != 1)) goto LAB_1415b16d9;
  cVar3 = FUN_1416755d0();
  if (cVar3 != '\0') {
    GenericPlatformMisc_GetProjectFilePathProjectDir(&DAT_1468b1490);
    goto LAB_1415b16d9;
  }
  puVar9 = puVar13;
  if (DAT_146299580 != 0) {
    do {
      wVar4 = puVar9[0xa314cac0];
      if ((wVar4 == 0) && (puVar9[0xa1f9f6e4] == 0)) break;
      if (wVar4 != puVar9[0xa1f9f6e4]) {
        wVar4 = towlower(wVar4);
        wVar5 = towlower(puVar9[0xa1f9f6e4]);
        if (wVar4 != wVar5) goto LAB_1415b11a8;
      }
      puVar9 = puVar9 + 1;
    } while( true );
  }
LAB_1415b15a5:
  puVar7 = (undefined8 *)FPaths::EngineUserDir(&local_38);
  if ((undefined8 **)puVar7 != &DAT_1468b1490) {
    if (DAT_1468b1490 != (undefined8 *)0x0) {
      FMemory::Free();
    }
    DAT_1468b1490 = (undefined8 *)*puVar7;
    *puVar7 = 0;
    DAT_1468b1498 = *(uint *)(puVar7 + 1);
    DAT_1468b149c = *(int *)((longlong)puVar7 + 0xc);
    puVar7[1] = 0;
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  FPaths::NormalizeFilename(&DAT_1468b1490);
  puVar7 = (undefined8 *)&DAT_143f3eda8;
  if (DAT_1468b1498 != 0) {
    puVar7 = DAT_1468b1490;
  }
  puVar7 = (undefined8 *)FUN_1415c0f30(&local_38,puVar7);
  if ((undefined8 **)puVar7 != &DAT_1468b1490) {
    if (DAT_1468b1490 != (undefined8 *)0x0) {
      FMemory::Free();
    }
    DAT_1468b1490 = (undefined8 *)*puVar7;
    *puVar7 = 0;
    DAT_1468b1498 = *(uint *)(puVar7 + 1);
    DAT_1468b149c = *(int *)((longlong)puVar7 + 0xc);
    puVar7[1] = 0;
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  cVar3 = FString::EndsWith(&DAT_1468b1490,&DAT_144c98f04,1);
  iVar12 = DAT_1468b1498;
  if (cVar3 == '\0') {
    lVar11 = (longlong)(int)DAT_1468b1498;
    DAT_1468b1498 = (2 - (uint)(DAT_1468b1498 != 0)) + DAT_1468b1498;
    if (DAT_1468b149c < (int)DAT_1468b1498) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1468b1490,iVar12);
    }
    puVar13 = (undefined2 *)((longlong)DAT_1468b1490 + (lVar11 - (ulonglong)(iVar12 != 0)) * 2);
    *puVar13 = 0x2f;
    puVar13[1] = 0;
  }
LAB_1415b16d9:
  puVar7 = (undefined8 *)&DAT_143f3eda8;
  if (DAT_1468b1498 != 0) {
    puVar7 = DAT_1468b1490;
  }
  return puVar7;
LAB_1415b11a8:
  if (wVar4 != wVar5) {
    if (DAT_1468b1490 != (undefined8 *)&DAT_144c9c658) {
      DAT_1468b1498 = 0;
      puVar9 = puVar13;
      if (DAT_1468b149c != 7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&DAT_1468b1490,7);
        puVar9 = (undefined2 *)(ulonglong)DAT_1468b1498;
      }
      DAT_1468b1498 = (int)puVar9 + 7;
      if (DAT_1468b149c < (int)DAT_1468b1498) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1468b1490);
      }
      puVar7 = DAT_1468b1490;
      *DAT_1468b1490 = 0x2e002f002e002e;
      *(undefined4 *)(puVar7 + 1) = 0x2f002e;
      *(undefined2 *)((longlong)puVar7 + 0xc) = 0;
    }
    _Src = (short *)FUN_1416ac480();
    local_78 = (undefined2 *)0x0;
    local_6c = 0;
    iVar6 = 0;
    if ((_Src != (short *)0x0) && (*_Src != 0)) {
      lVar11 = -1;
      do {
        lVar11 = lVar11 + 1;
      } while (_Src[lVar11] != 0);
      iVar10 = (int)lVar11 + 1;
      local_70 = iVar10;
      if (0 < iVar10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
      }
      iVar6 = local_70;
      puVar13 = local_78;
      _guard_xfg_dispatch_icall_nop(local_78,_Src,(longlong)iVar10 * 2);
    }
    FPaths::RootDir(&local_38);
    pvVar1 = local_38;
    local_68 = (void *)0x0;
    iVar10 = (int)local_30;
    local_60 = iVar10;
    if (iVar10 == 0) {
      local_5c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,local_30 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop(local_68,pvVar1,(longlong)iVar10 * 2);
    }
    puVar9 = &DAT_143f3eda8;
    if (iVar6 != 0) {
      puVar9 = puVar13;
    }
    FUN_141677bd0(&local_68,puVar9);
    local_88 = (undefined2 *)0x0;
    local_80 = iVar6;
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_88,(8 - (uint)(iVar6 != 0)) + iVar6,0);
    _guard_xfg_dispatch_icall_nop(local_88,puVar13,(longlong)iVar6 * 2);
    FString::PathAppend(&local_88,L"../../",6);
    FPaths::CollapseRelativeDirectories(&local_88);
    puVar7 = (undefined8 *)FPaths::RootDir(&local_78);
    if (*(int *)(puVar7 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*puVar7;
    }
    FUN_141677bd0(&local_88,puVar9);
    if (local_78 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    pvVar1 = local_68;
    if (local_80 != 0) {
      iVar12 = local_80 + -1;
    }
    lVar11 = (longlong)local_60;
    if ((local_60 != 0) || (iVar6 = 2, iVar12 == -1)) {
      iVar6 = 1;
    }
    local_78 = (undefined2 *)0x0;
    local_70 = local_60;
    if ((local_60 == 0) && (iVar6 + iVar12 == 0)) {
      local_6c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,local_60 + iVar6 + iVar12,0);
      _guard_xfg_dispatch_icall_nop(local_78,pvVar1,lVar11 * 2);
    }
    FString::PathAppend(&local_78,local_88,iVar12);
    if (local_88 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_88 = local_78;
    local_80 = local_70;
    local_7c = local_6c;
    cVar3 = FString::EndsWith(&local_88,&DAT_144c9853c,1);
    iVar12 = local_80;
    if (cVar3 == '\0') {
      lVar11 = (longlong)local_80;
      local_80 = (2 - (uint)(local_80 != 0)) + local_80;
      if (local_7c < local_80) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,iVar12);
      }
      local_88[lVar11 - (ulonglong)(iVar12 != 0)] = 0x2f;
      (local_88 + (lVar11 - (ulonglong)(iVar12 != 0)))[1] = 0;
    }
    FPaths::ConvertRelativePathToFull(&local_48,&local_88);
    FPaths::ConvertRelativePathToFull(&local_58,&DAT_1468b1490);
    puVar9 = &DAT_143f3eda8;
    if (local_50 != 0) {
      puVar9 = local_58;
    }
    puVar8 = &DAT_143f3eda8;
    if (local_40 != 0) {
      puVar8 = local_48;
    }
    iVar12 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar9);
    puVar9 = local_88;
    if (iVar12 == 0) {
      lVar11 = (longlong)local_80;
      DAT_1468b1498 = local_80;
      if ((local_80 == 0) && (DAT_1468b149c == 0)) {
        DAT_1468b149c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&DAT_1468b1490,local_80);
        _guard_xfg_dispatch_icall_nop(DAT_1468b1490,puVar9,lVar11 * 2);
      }
    }
    cVar3 = FString::EndsWith(&DAT_1468b1490,&DAT_144c98de4,1);
    iVar12 = DAT_1468b1498;
    if (cVar3 == '\0') {
      lVar11 = (longlong)(int)DAT_1468b1498;
      DAT_1468b1498 = (2 - (uint)(DAT_1468b1498 != 0)) + DAT_1468b1498;
      if (DAT_1468b149c < (int)DAT_1468b1498) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1468b1490,iVar12);
      }
      puVar9 = (undefined2 *)((longlong)DAT_1468b1490 + (lVar11 - (ulonglong)(iVar12 != 0)) * 2);
      *puVar9 = 0x2f;
      puVar9[1] = 0;
    }
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_88 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_68 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_38 != (void *)0x0) {
      FMemory::Free();
    }
    if (puVar13 != (undefined2 *)0x0) {
      FMemory::Free(puVar13);
    }
    goto LAB_1415b16d9;
  }
  goto LAB_1415b15a5;
}



// FUNCTION 1415b1750 PurgeOldCrashConfig body=944 status=ok
// SIG undefined PurgeOldCrashConfig(void)

void FGenericCrashContext::PurgeOldCrashConfig(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined2 *puVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined2 *puVar12;
  bool bVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  int local_res8 [2];
  longlong local_res10 [3];
  undefined2 *local_b8;
  int local_b0;
  int local_ac;
  undefined2 *local_a8;
  undefined8 local_a0;
  longlong *local_98;
  ulonglong local_90;
  undefined8 local_88;
  undefined2 *local_80;
  
  puVar12 = &DAT_143f3eda8;
  if (DAT_1464a8658 != 0) {
    puVar12 = DAT_1464a8650;
  }
  local_res8[0] = 2;
  puVar7 = &DAT_143f3eda8;
  if (DAT_1464a8648 != 0) {
    puVar7 = DAT_1464a8640;
  }
  FConfigCacheIni::GetInt(DAT_1468b6148,puVar7,puVar12,local_res8,&DAT_1468e2360);
  if (0 < local_res8[0]) {
    plVar4 = (longlong *)FUN_1415c3d50();
    local_98 = (longlong *)0x0;
    local_80 = &DAT_143f3eda8;
    if (DAT_1464a8668 != 0) {
      local_80 = DAT_1464a8660;
    }
    local_90 = 0;
    local_88 = FUN_1415a9460();
    local_a8 = (undefined2 *)0x0;
    local_a0 = 0;
    FPaths::CombineInternal(&local_a8,&local_88,2);
    iVar8 = (int)local_a0;
    iVar1 = local_a0._4_4_;
    bVar13 = (int)local_a0 != 0;
    local_b8 = local_a8;
    local_a8 = (undefined2 *)0x0;
    local_b0 = (int)local_a0;
    local_ac = local_a0._4_4_;
    local_a0 = 0;
    if (iVar1 < (int)((2 - (uint)bVar13) + iVar8)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_b8);
      iVar8 = local_b0;
    }
    local_b0 = (2 - (uint)(iVar8 != 0)) + iVar8;
    if (local_ac < local_b0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,iVar8);
    }
    puVar12 = local_b8;
    lVar6 = (longlong)iVar8 - (ulonglong)(iVar8 != 0);
    puVar7 = &DAT_143f3eda8;
    if (local_b0 != 0) {
      puVar7 = local_b8;
    }
    local_b8[lVar6] = 0x2a;
    local_b8[lVar6 + 1] = 0;
    (**(code **)(*plVar4 + 0x78))(plVar4,&local_98,puVar7,0,1);
    if (puVar12 != (undefined2 *)0x0) {
      FMemory::Free(puVar12);
    }
    if (local_a8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    uVar11 = (ulonglong)(int)local_90;
    plVar10 = local_98 + uVar11 * 2;
    plVar9 = local_98;
    if (local_98 != plVar10) {
      do {
        if ((int)plVar9[1] == 0) {
          puVar12 = &DAT_143f3eda8;
        }
        else {
          puVar12 = (undefined2 *)*plVar9;
        }
        local_88 = FUN_1415a9460();
        local_a8 = (undefined2 *)0x0;
        local_a0 = 0;
        local_80 = puVar12;
        FPaths::CombineInternal(&local_a8,&local_88,2);
        puVar12 = &DAT_143f3eda8;
        if ((int)local_a0 != 0) {
          puVar12 = local_a8;
        }
        uVar2 = (**(code **)(*plVar4 + 0xb0))(plVar4,local_res10,puVar12);
        dVar14 = 0.0;
        auVar15._0_8_ = (double)local_res8[0] * 864000000000.0 + 0.5;
        lVar6 = (longlong)auVar15._0_8_;
        if (0.0 <= auVar15._0_8_) {
          if ((lVar6 != -0x8000000000000000) && (dVar14 = (double)lVar6, dVar14 != auVar15._0_8_)) {
            auVar16._8_8_ = auVar15._0_8_;
            auVar16._0_8_ = auVar15._0_8_;
            uVar3 = movmskpd(uVar2,auVar16);
            uVar11 = -(ulonglong)(uVar3 & 1);
            goto LAB_1415b1a17;
          }
        }
        else if ((lVar6 != -0x8000000000000000) && (dVar14 = (double)lVar6, dVar14 != auVar15._0_8_)
                ) {
          auVar15._8_8_ = auVar15._0_8_;
          uVar3 = movmskpd(uVar2,auVar15);
          uVar11 = (ulonglong)(uVar3 & 1 ^ 1);
LAB_1415b1a17:
          dVar14 = (double)lVar6;
          auVar15._0_8_ = (double)(longlong)(lVar6 + uVar11);
        }
        plVar5 = (longlong *)FDateTime::Now(dVar14);
        if ((longlong)auVar15._0_8_ < *plVar5 - local_res10[0]) {
          puVar12 = &DAT_143f3eda8;
          if ((int)local_a0 != 0) {
            puVar12 = local_a8;
          }
          (**(code **)(*plVar4 + 0x60))(plVar4,puVar12,0,1);
        }
        if (local_a8 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        plVar9 = plVar9 + 2;
      } while (plVar9 != plVar10);
      uVar11 = local_90 & 0xffffffff;
    }
    uVar3 = (uint)uVar11;
    plVar4 = local_98;
    while (uVar3 != 0) {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
      uVar3 = (int)uVar11 - 1;
      uVar11 = (ulonglong)uVar3;
    }
    if (local_98 != (longlong *)0x0) {
      FMemory::Free(local_98);
    }
  }
  return;
}



// FUNCTION 1415b1b00 FUN_1415b1b00 body=241 status=ok
// SIG undefined FUN_1415b1b00(void)

void FUN_1415b1b00(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  
  uVar1 = FLockFreeLinkPolicy::AllocLockFreeLink();
  lVar2 = 0;
  if (uVar1 != 0) {
    lVar2 = (&DAT_1468a81f8)[uVar1 >> 0xe] + (ulonglong)(uVar1 & 0x3fff) * 0x18;
  }
  *(undefined8 *)(lVar2 + 8) = param_2;
  do {
    LOCK();
    uVar3 = *(ulonglong *)(param_1 + 8);
    if (uVar3 == 0) {
      *(ulonglong *)(param_1 + 8) = 0;
      uVar3 = 0;
    }
    UNLOCK();
    uVar4 = (uVar3 & 0xfffffffffc000000) + 0x4000000;
    if (uVar4 < (uVar3 & 0xfffffffffc000000)) {
      LockFreeTagCounterHasOverflowed();
    }
    lVar2 = 0;
    if (uVar1 != 0) {
      lVar2 = (&DAT_1468a81f8)[uVar1 >> 0xe] + (ulonglong)(uVar1 & 0x3fff) * 0x18;
    }
    *(uint *)(lVar2 + 0x10) = (uint)uVar3 & 0x3ffffff;
    LOCK();
    bVar5 = uVar3 == *(ulonglong *)(param_1 + 8);
    if (bVar5) {
      *(ulonglong *)(param_1 + 8) = uVar4 | uVar1;
    }
    UNLOCK();
  } while (!bVar5);
  return;
}



// FUNCTION 1415b1c00 FUN_1415b1c00 body=328 status=ok
// SIG undefined FUN_1415b1c00(void)

void FUN_1415b1c00(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 local_78 [32];
  code *local_58 [2];
  longlong local_48 [4];
  longlong *local_28;
  int local_18;
  
  iVar2 = DAT_1468b0de8;
  if ((DAT_1468b0e30 != 0) && (DAT_1468b0e30 != 1)) {
    LOCK();
    DAT_1468b0de8 = 1;
    UNLOCK();
    if (iVar2 == 0) {
      local_28 = (longlong *)0x0;
      local_18 = 0;
      puVar7 = (undefined8 *)FUN_140438ef0(0x10,local_48);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &PTR_FUN_143f3f130;
      }
      local_58[0] = FUN_1415a4050;
      plVar8 = (longlong *)FUN_140596960(local_78,0,0xff);
      lVar3 = *plVar8;
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(lVar3 + 0x10,local_58);
      *(undefined4 *)(lVar3 + 0x60) = 2;
      lVar3 = *plVar8;
      lVar6 = plVar8[2];
      lVar4 = plVar8[1];
      lVar5 = *(longlong *)(lVar3 + 0x78);
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + 1;
        UNLOCK();
      }
      FUN_1405ab110(lVar3,lVar4,(int)lVar6,1);
      if (local_18 != 0) {
        plVar8 = local_48;
        if (local_28 != (longlong *)0x0) {
          plVar8 = local_28;
        }
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x10))(plVar8,0);
        }
      }
      if (local_28 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (lVar5 != 0) {
        LOCK();
        piVar1 = (int *)(lVar5 + 0x48);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FGraphEvent::Recycle(lVar5);
        }
      }
    }
  }
  return;
}



// FUNCTION 1415b1d50 FUN_1415b1d50 body=131 status=ok
// SIG undefined FUN_1415b1d50(void)

void FUN_1415b1d50(float *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = 4;
  do {
    lVar4 = 4;
    do {
      iVar1 = rand();
      iVar2 = (int)((float)iVar1 * 3.051851e-05 + (float)iVar1 * 3.051851e-05);
      iVar1 = 1;
      if (iVar2 < 2) {
        iVar1 = iVar2;
      }
      *param_1 = (float)iVar1;
      param_1 = param_1 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}



// FUNCTION 1415b1de0 ReadRequest body=224 status=ok
// SIG undefined ReadRequest(void)

undefined8
FGenericAsyncReadFileHandle::ReadRequest
          (longlong param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5,
          undefined8 param_6)

{
  int iVar1;
  BOOL BVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  
  lVar3 = operator_new(0xb0);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x18) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = *(undefined2 **)(param_1 + 0x10);
    }
    uVar4 = FUN_14159feb0(lVar3,param_1,*(undefined8 *)(param_1 + 8),puVar5,param_5,param_6,param_2,
                          param_3,param_4);
  }
  if (param_4 == 0) {
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
    }
    iVar1 = *(int *)(param_1 + 0x28);
    *(int *)(param_1 + 0x28) = iVar1 + 1;
    if (*(int *)(param_1 + 0x2c) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x20,iVar1);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 8) = uVar4;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  }
  return uVar4;
}



// FUNCTION 1415b1ec0 FUN_1415b1ec0 body=337 status=ok
// SIG undefined FUN_1415b1ec0(void)

void * FUN_1415b1ec0(longlong param_1,void *param_2,ulonglong param_3)

{
  char cVar1;
  DWORD DVar2;
  void *pvVar3;
  ulonglong _Size;
  ulonglong local_res8;
  
  DVar2 = GetCurrentThreadId();
  if (*(DWORD *)(param_1 + 0x30) != DVar2) {
    FWindowsPlatformProcess::SleepInfinite();
    return (void *)0x0;
  }
  if (param_2 != (void *)0x0) {
    if (param_3 != 0) {
      local_res8 = 0;
      if ((param_3 == 0) ||
         (((*(void **)(param_1 + 0x38) <= param_2 &&
           (param_2 < (void *)((longlong)*(void **)(param_1 + 0x38) + 0x200000U))) ||
          (cVar1 = FGenericPlatformMallocCrash::IsPtrInSmallPool(param_1,param_2), cVar1 != '\0'))))
      {
        local_res8 = (ulonglong)*(uint *)((longlong)param_2 + -0x10);
      }
      else {
        cVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x88))
                          (*(longlong **)(param_1 + 0x58),param_2,&local_res8);
        if ((cVar1 == '\0') || (local_res8 == 0)) {
          FWindowsPlatformMisc::LocalPrint
                    (
                    L"Realloc from previous malloc - we were not able to get correct allocation size, exiting...\n"
                    );
          FUN_1416a8180(1);
        }
      }
      pvVar3 = (void *)FGenericPlatformMallocCrash::Malloc(param_1,param_3,0x10);
      _Size = local_res8;
      if (param_3 <= local_res8) {
        _Size = param_3;
      }
      _guard_xfg_dispatch_icall_nop(pvVar3,param_2,_Size);
      if (0x8000 < local_res8) {
        FGenericPlatformMisc::LowLevelOutputDebugStringf
                  (L"Realloc PtrSize=%u NewSize=%u PooledPtr=0x%016llx\n",local_res8 & 0xffffffff,
                   param_3 & 0xffffffff,param_2);
      }
      FGenericPlatformMallocCrash::Free(param_1,param_2);
      return pvVar3;
    }
    FGenericPlatformMallocCrash::Free(param_1,param_2);
    return (void *)0x0;
  }
  pvVar3 = (void *)FGenericPlatformMallocCrash::Malloc(param_1,param_3,0x10);
  return pvVar3;
}



// FUNCTION 1415b2020 FUN_1415b2020 body=29 status=ok
// SIG undefined FUN_1415b2020(void)

void FUN_1415b2020(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if (1 < DAT_1464a8360) {
    FUN_1415b2870(3,param_1,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 1415b2040 FUN_1415b2040 body=927 status=ok
// SIG undefined FUN_1415b2040(void)

void FUN_1415b2040(uint param_1,undefined4 param_2,undefined4 param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  char cVar3;
  BOOL BVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  int iVar11;
  longlong *plVar12;
  ulonglong *puVar13;
  int local_res20 [2];
  undefined8 *local_28;
  undefined8 local_20;
  
  if ((DAT_1468b02d8 != 0) && (DAT_1464aaa8c != 1)) {
    BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0c08);
    if (BVar4 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0c08);
    }
    puVar13 = (ulonglong *)0x0;
    plVar12 = (longlong *)(DAT_1468b02d8 + 0x5b0);
    iVar5 = (int)(DAT_1464a8360 >> 0x20);
    if (*(int *)(DAT_1468b02d8 + 0x5b8) != *(int *)(DAT_1468b02d8 + 0x5e4)) {
      lVar7 = *(longlong *)(DAT_1468b02d8 + 0x5f0);
      if (*(longlong *)(DAT_1468b02d8 + 0x5f0) == 0) {
        lVar7 = DAT_1468b02d8 + 0x5e8;
      }
      iVar11 = *(int *)(lVar7 + ((longlong)(iVar5 * 0x17 + (int)DAT_1464a8360) &
                                (longlong)*(int *)(DAT_1468b02d8 + 0x5f8) - 1U) * 4);
      if (iVar11 != -1) {
        do {
          puVar9 = (ulonglong *)((longlong)iVar11 * 0x230 + *plVar12);
          if (*puVar9 == DAT_1464a8360) {
            if (iVar11 != -1) goto LAB_1415b2117;
            break;
          }
          iVar11 = (int)puVar9[0x45];
        } while (iVar11 != -1);
      }
    }
    puVar9 = puVar13;
LAB_1415b2117:
    puVar10 = puVar9 + 1;
    if (puVar9 == (ulonglong *)0x0) {
      puVar10 = puVar13;
    }
    if (puVar10 == (ulonglong *)0x0) {
      local_28 = &DAT_1464a8360;
      FUN_14159e050(plVar12,local_res20,&local_28,0);
      lVar7 = *plVar12;
      *(ulonglong *)((longlong)local_res20[0] * 0x230 + 8 + lVar7) = DAT_1464a8360;
      *(double *)((longlong)local_res20[0] * 0x230 + 0x10 + lVar7) =
           (double)(float)(DAT_1468b02f8 * 1000.0 * (double)param_1);
    }
    else {
      if (*(int *)(DAT_1468b02d8 + 0x5b8) != *(int *)(DAT_1468b02d8 + 0x5e4)) {
        lVar7 = *(longlong *)(DAT_1468b02d8 + 0x5f0);
        if (*(longlong *)(DAT_1468b02d8 + 0x5f0) == 0) {
          lVar7 = DAT_1468b02d8 + 0x5e8;
        }
        iVar5 = *(int *)(lVar7 + ((longlong)(iVar5 * 0x17 + (int)DAT_1464a8360) &
                                 (longlong)*(int *)(DAT_1468b02d8 + 0x5f8) - 1U) * 4);
        if (iVar5 != -1) {
          do {
            puVar9 = (ulonglong *)((longlong)iVar5 * 0x230 + *plVar12);
            if (*puVar9 == DAT_1464a8360) {
              if (iVar5 != -1) goto LAB_1415b21f7;
              break;
            }
            iVar5 = (int)puVar9[0x45];
          } while (iVar5 != -1);
        }
      }
      puVar9 = puVar13;
LAB_1415b21f7:
      puVar9[2] = (ulonglong)
                  ((double)(float)(DAT_1468b02f8 * 1000.0 * (double)param_1) + (double)puVar9[2]);
    }
    cVar3 = FUN_1415b2870(0,param_1,param_2,param_3);
    lVar7 = DAT_1468b02d8;
    if ((cVar3 != '\0') && ((DAT_1468b1168 == 0 || (DAT_1468b1168 < DAT_1468c21b0)))) {
      DAT_1468b1168 = DAT_1468c21b0;
      if (1 < DAT_1464a8360) {
        BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0c08);
        if (BVar4 == 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0c08);
        }
        local_28 = (undefined8 *)0x0;
        local_20 = 0;
        FUN_14159e960((longlong *)(lVar7 + 0x5b0),&local_28);
        puVar2 = local_28;
        iVar5 = (int)local_20;
        puVar9 = puVar13;
        while ((iVar11 = (int)puVar9, -1 < iVar11 && (iVar11 < iVar5))) {
          uVar1 = puVar2[iVar11];
          if (*(int *)(lVar7 + 0x5b8) != *(int *)(lVar7 + 0x5e4)) {
            lVar8 = *(longlong *)(lVar7 + 0x5f0);
            if (*(longlong *)(lVar7 + 0x5f0) == 0) {
              lVar8 = lVar7 + 0x5e8;
            }
            iVar6 = *(int *)(lVar8 + ((longlong)((int)(uVar1 >> 0x20) * 0x17 + (int)uVar1) &
                                     (longlong)*(int *)(lVar7 + 0x5f8) - 1U) * 4);
            if (iVar6 != -1) {
              do {
                puVar9 = (ulonglong *)((longlong)iVar6 * 0x230 + *(longlong *)(lVar7 + 0x5b0));
                if (*puVar9 == uVar1) {
                  if (iVar6 != -1) goto LAB_1415b2347;
                  break;
                }
                iVar6 = (int)puVar9[0x45];
              } while (iVar6 != -1);
            }
          }
          puVar9 = puVar13;
LAB_1415b2347:
          puVar9 = puVar9 + 0xb;
          puVar10 = puVar13;
          do {
            if ((int)*puVar9 == 0) goto LAB_1415b236c;
            puVar10 = (ulonglong *)((longlong)puVar10 + 1);
            puVar9 = puVar9 + 0xf;
          } while ((longlong)puVar10 < 4);
          FUN_1415a7410(lVar7);
LAB_1415b236c:
          puVar9 = (ulonglong *)(ulonglong)(iVar11 + 1);
        }
        if (puVar2 != (undefined8 *)0x0) {
          FMemory::Free(puVar2);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0c08);
      }
      DAT_1464a8360 = DAT_1464a8360 + 1;
      if (3 < *(int *)(DAT_1468b02d8 + 0x5b8) - *(int *)(DAT_1468b02d8 + 0x5e4)) {
        FUN_1415b4f00();
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0c08);
  }
  return;
}



// FUNCTION 1415b23e0 FUN_1415b23e0 body=48 status=ok
// SIG undefined FUN_1415b23e0(void)

void FUN_1415b23e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  if (1 < DAT_1464a8360) {
    cVar1 = FUN_1415b2870(2,param_1,param_2,param_3);
    if (cVar1 != '\0') {
      DAT_1464a8370 = DAT_1464a8370 + 1;
    }
  }
  return;
}



// FUNCTION 1415b2410 FUN_1415b2410 body=48 status=ok
// SIG undefined FUN_1415b2410(void)

void FUN_1415b2410(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  if (1 < DAT_1464a8360) {
    cVar1 = FUN_1415b2870(1,param_1,param_2,param_3);
    if (cVar1 != '\0') {
      DAT_1464a8368 = DAT_1464a8368 + 1;
    }
  }
  return;
}



// FUNCTION 1415b2440 FUN_1415b2440 body=255 status=ok
// SIG undefined FUN_1415b2440(void)

void FUN_1415b2440(longlong param_1,longlong *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  longlong lVar6;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  piVar1 = (int *)(param_1 + 0x340);
  iVar3 = *(int *)(param_1 + 0x448);
  piVar5 = *(int **)(param_1 + 0x440);
  if (*(int **)(param_1 + 0x440) == (int *)0x0) {
    piVar5 = piVar1;
  }
  piVar2 = piVar5 + (longlong)iVar3 * 4;
  for (; piVar5 != piVar2; piVar5 = piVar5 + 4) {
    if (*(longlong **)(piVar5 + 2) == param_2) goto LAB_1415b24e3;
  }
  *(int *)(param_1 + 0x448) = iVar3 + 1;
  if (*(int *)(param_1 + 0x44c) < iVar3 + 1) {
    TArray<FNiagaraRendererVariableInfo,TInlineAllocator<16,TSizedDefaultAllocator<32>_>_>::
    ResizeGrow(piVar1);
  }
  iStack_10 = (int)param_2;
  iStack_c = (int)((ulonglong)param_2 >> 0x20);
  piVar5 = *(int **)(param_1 + 0x440);
  if (*(int **)(param_1 + 0x440) == (int *)0x0) {
    piVar5 = piVar1;
  }
  piVar5 = piVar5 + (longlong)iVar3 * 4;
  *piVar5 = param_3;
  piVar5[1] = iStack_14;
  piVar5[2] = iStack_10;
  piVar5[3] = iStack_c;
LAB_1415b24e3:
  *piVar5 = param_3;
  if (*(char *)(param_1 + 0x18) != '\0') {
    lVar6 = (longlong)param_3 * 0x20;
    cVar4 = FUN_1415b7db0(param_2,*(undefined8 *)(&DAT_1464a8770 + lVar6));
    if (cVar4 == '\0') {
      (**(code **)(*param_2 + 8))(param_2,*(undefined8 *)(&DAT_1464a8770 + lVar6));
    }
    (**(code **)*param_2)(param_2,*(undefined4 *)(&DAT_1464a8768 + lVar6));
  }
  return;
}



// FUNCTION 1415b2540 FUN_1415b2540 body=19 status=ok
// SIG undefined FUN_1415b2540(void)

void FUN_1415b2540(undefined8 param_1,int param_2)

{
  FUN_1415b2440(&DAT_1464a8740,param_1,param_2 + 7);
  return;
}



// FUNCTION 1415b2560 FUN_1415b2560 body=265 status=ok
// SIG undefined FUN_1415b2560(void)

void FUN_1415b2560(void)

{
  BOOL BVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if ((DAT_1468b02d8 == 0) || (DAT_1464a8360 < 2)) {
    return;
  }
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0c08);
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0c08);
  }
  if (*(int *)(DAT_1468b02d8 + 0x5b8) != *(int *)(DAT_1468b02d8 + 0x5e4)) {
    lVar3 = *(longlong *)(DAT_1468b02d8 + 0x5f0);
    if (*(longlong *)(DAT_1468b02d8 + 0x5f0) == 0) {
      lVar3 = DAT_1468b02d8 + 0x5e8;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)
                              ((int)((ulonglong)DAT_1464a8368 >> 0x20) * 0x17 + (int)DAT_1464a8368)
                             & (longlong)*(int *)(DAT_1468b02d8 + 0x5f8) - 1U) * 4);
    if (iVar2 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar2 * 0x230 + *(longlong *)(DAT_1468b02d8 + 0x5b0));
        if (*plVar5 == DAT_1464a8368) {
          if (iVar2 != -1) goto LAB_1415b2637;
          break;
        }
        iVar2 = (int)plVar5[0x45];
      } while (iVar2 != -1);
    }
  }
  plVar5 = (longlong *)0x0;
LAB_1415b2637:
  plVar4 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  if (plVar4 != (longlong *)0x0) {
    *(int *)(plVar4 + 0x43) = (int)plVar4[0x43] + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001415b265d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0c08);
  return;
}



// FUNCTION 1415b2670 FUN_1415b2670 body=437 status=ok
// SIG undefined FUN_1415b2670(void)

void FUN_1415b2670(longlong param_1,longlong param_2,undefined4 *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  char cVar2;
  BOOL BVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong local_58;
  undefined4 uStack_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 local_20;
  longlong *local_18;
  int local_10;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x20);
  BVar3 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar3 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  local_20 = *(undefined1 *)(param_3 + 4);
  local_30 = *param_3;
  uStack_2c = param_3[1];
  uStack_28 = param_3[2];
  uStack_24 = param_3[3];
  plVar5 = (longlong *)0x0;
  local_18 = (longlong *)0x0;
  local_10 = 0;
  local_38 = param_2;
  if ((((longlong **)(param_3 + 6) != &local_18) && (param_3[8] != 0)) &&
     (plVar6 = *(longlong **)(param_3 + 6), plVar6 != (longlong *)0x0)) {
    (**(code **)(*plVar6 + 0x30))(plVar6,&local_18);
  }
  iVar1 = *(int *)(param_1 + 0x50);
  *(int *)(param_1 + 0x50) = iVar1 + 1;
  if (*(int *)(param_1 + 0x54) < iVar1 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 0x48),iVar1);
  }
  plVar7 = (longlong *)((longlong)iVar1 * 0x30 + *(longlong *)(param_1 + 0x48));
  *plVar7 = local_38;
  plVar6 = plVar7 + 1;
  *(undefined4 *)plVar6 = local_30;
  *(undefined4 *)((longlong)plVar7 + 0xc) = uStack_2c;
  *(undefined4 *)(plVar7 + 2) = uStack_28;
  *(undefined4 *)((longlong)plVar7 + 0x14) = uStack_24;
  *(undefined1 *)(plVar7 + 3) = local_20;
  plVar7[4] = 0;
  *(undefined4 *)(plVar7 + 5) = 0;
  if (((&local_18 != (longlong **)(plVar7 + 4)) && (local_10 != 0)) && (local_18 != (longlong *)0x0)
     ) {
    (**(code **)(*local_18 + 0x30))();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
  if (*plVar7 != 0) {
    local_58 = 0;
    uStack_50 = 2;
    if ((char)plVar7[3] == '\0') {
      plVar6 = &local_58;
    }
    else if ((((int)plVar7[5] != 0) && ((longlong *)plVar7[4] != (longlong *)0x0)) &&
            (cVar2 = (**(code **)(*(longlong *)plVar7[4] + 0x18))(), cVar2 != '\0')) {
      if ((int)plVar7[5] != 0) {
        plVar5 = (longlong *)plVar7[4];
      }
      (**(code **)(*plVar5 + 0x38))(plVar5,&local_48);
      *plVar6 = local_48;
      plVar7[2] = lStack_40;
    }
    local_48 = *plVar6;
    lStack_40 = plVar6[1];
    if (local_48 != 0) {
      if (((int)lStack_40 < 1) || (local_48 != 0)) {
        lVar4 = local_48;
        if (local_48 == 0) goto LAB_1415b2801;
      }
      else {
        lVar4 = -1;
      }
      (**(code **)(*(longlong *)*plVar7 + 8))((longlong *)*plVar7,lVar4);
    }
  }
LAB_1415b2801:
                    /* WARNING: Could not recover jumptable at 0x0001415b281e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 1415b2830 FUN_1415b2830 body=57 status=ok
// SIG undefined FUN_1415b2830(void)

void FUN_1415b2830(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if ((param_1 != 0) && (lVar1 = FUN_1415a9b70(), *(char *)(lVar1 + 0x18) != '\0')) {
    FUN_1415b2670(lVar1,param_1,param_2);
  }
  return;
}



// FUNCTION 1415b2870 FUN_1415b2870 body=1040 status=ok
// SIG undefined FUN_1415b2870(void)

ulonglong FUN_1415b2870(int param_1,uint param_2,uint param_3,uint param_4)

{
  double dVar1;
  BOOL BVar2;
  int iVar3;
  int iVar4;
  ulonglong in_RAX;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar12;
  longlong *plVar13;
  int local_78 [2];
  int local_70 [2];
  int *local_68 [8];
  longlong *plVar11;
  
  lVar12 = (longlong)param_1;
  if (DAT_1468b02d8 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0c08);
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0c08);
  }
  plVar11 = (longlong *)0x0;
  if ((param_1 == 0) ||
     ((((plVar13 = DAT_1464a8368, param_1 != 1 && (plVar13 = DAT_1464a8370, param_1 != 2)) &&
       (plVar13 = DAT_1464a8370, param_1 != 3)) && (plVar13 = plVar11, param_1 == 4)))) {
    plVar13 = DAT_1464a8360;
  }
  iVar4 = (int)((ulonglong)plVar13 >> 0x20);
  if (*(int *)(DAT_1468b02d8 + 0x5b8) != *(int *)(DAT_1468b02d8 + 0x5e4)) {
    lVar6 = *(longlong *)(DAT_1468b02d8 + 0x5f0);
    if (*(longlong *)(DAT_1468b02d8 + 0x5f0) == 0) {
      lVar6 = DAT_1468b02d8 + 0x5e8;
    }
    iVar3 = *(int *)(lVar6 + ((longlong)(iVar4 * 0x17 + (int)plVar13) &
                             (longlong)*(int *)(DAT_1468b02d8 + 0x5f8) - 1U) * 4);
    if (iVar3 != -1) {
      do {
        plVar8 = (longlong *)((longlong)iVar3 * 0x230 + *(longlong *)(DAT_1468b02d8 + 0x5b0));
        if ((longlong *)*plVar8 == plVar13) {
          if (iVar3 != -1) goto LAB_1415b2987;
          break;
        }
        iVar3 = (int)plVar8[0x45];
      } while (iVar3 != -1);
    }
  }
  plVar8 = plVar11;
LAB_1415b2987:
  plVar5 = plVar8 + 1;
  if (plVar8 == (longlong *)0x0) {
    plVar5 = plVar11;
  }
  if (plVar5 == (longlong *)0x0) {
    uVar9 = 0;
  }
  else {
    if (*(int *)(DAT_1468b02d8 + 0x5b8) != *(int *)(DAT_1468b02d8 + 0x5e4)) {
      lVar6 = *(longlong *)(DAT_1468b02d8 + 0x5f0);
      if (*(longlong *)(DAT_1468b02d8 + 0x5f0) == 0) {
        lVar6 = DAT_1468b02d8 + 0x5e8;
      }
      iVar4 = *(int *)(lVar6 + ((longlong)(iVar4 * 0x17 + (int)plVar13) &
                               (longlong)*(int *)(DAT_1468b02d8 + 0x5f8) - 1U) * 4);
      if (iVar4 != -1) {
        do {
          plVar8 = (longlong *)((longlong)iVar4 * 0x230 + *(longlong *)(DAT_1468b02d8 + 0x5b0));
          if ((longlong *)*plVar8 == plVar13) {
            if (iVar4 != -1) goto LAB_1415b2a27;
            break;
          }
          iVar4 = (int)plVar8[0x45];
        } while (iVar4 != -1);
      }
    }
    plVar8 = plVar11;
LAB_1415b2a27:
    plVar8[lVar12 * 0xf + 8] =
         (longlong)
         ((double)(float)(DAT_1468b02f8 * 1000.0 * (double)param_2) +
         (double)plVar8[lVar12 * 0xf + 8]);
    plVar8[lVar12 * 0xf + 9] =
         (longlong)
         ((double)(float)(DAT_1468b02f8 * 1000.0 * (double)param_3) +
         (double)plVar8[lVar12 * 0xf + 9]);
    dVar1 = DAT_1468b02f8;
    *(int *)(plVar8 + lVar12 * 0xf + 0xb) = (int)plVar8[lVar12 * 0xf + 0xb] + 1;
    plVar8[lVar12 * 0xf + 10] =
         (longlong)
         ((double)(float)(dVar1 * 1000.0 * (double)param_4) + (double)plVar8[lVar12 * 0xf + 10]);
    plVar13 = plVar11;
    if (0 < *(int *)(&DAT_1468b0c38 + lVar12 * 0x10)) {
      do {
        lVar6 = *(longlong *)(&DAT_1468b0c30 + lVar12 * 0x10);
        dVar1 = (double)(float)((double)*(uint *)((longlong)plVar13 + lVar6) *
                               DAT_1468b02f8 * 1000.0);
        if (0.009999999776482582 <= dVar1) {
          local_78[0] = (int)plVar11;
          BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0c08);
          if (BVar2 == 0) {
            EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0c08);
          }
          plVar5 = plVar8 + lVar12 * 0xf + 0xd;
          if ((int)plVar8[lVar12 * 0xf + 0xe] != *(int *)((longlong)plVar8 + lVar12 * 0x78 + 0x9c))
          {
            plVar7 = (longlong *)plVar8[lVar12 * 0xf + 0x15];
            if ((longlong *)plVar8[lVar12 * 0xf + 0x15] == (longlong *)0x0) {
              plVar7 = plVar8 + lVar12 * 0xf + 0x14;
            }
            iVar4 = *(int *)((longlong)plVar7 +
                            ((longlong)(int)plVar8[lVar12 * 0xf + 0x16] - 1U & (longlong)local_78[0]
                            ) * 4);
            if (iVar4 != -1) {
              do {
                lVar6 = *plVar5 + (longlong)iVar4 * 0x18;
                if (*(int *)(*plVar5 + (longlong)iVar4 * 0x18) == local_78[0]) {
                  if ((iVar4 != -1) && (lVar6 != 0)) goto LAB_1415b2bf4;
                  break;
                }
                iVar4 = *(int *)(lVar6 + 0x10);
              } while (iVar4 != -1);
            }
          }
          local_68[0] = local_78;
          TSet<TTuple<int,FVisitedCoordinates_*>,TDefaultMapHashableKeyFuncs<int,FVisitedCoordinates_*,0>,FDefaultSetAllocator>
          ::Emplace<TKeyInitializer<int_const_&>_>(plVar5,local_70,local_68,0);
          lVar6 = *plVar5 + (longlong)local_70[0] * 0x18;
LAB_1415b2bf4:
          *(double *)(lVar6 + 8) = dVar1 + *(double *)(lVar6 + 8);
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0c08);
          lVar6 = *(longlong *)(&DAT_1468b0c30 + lVar12 * 0x10);
        }
        *(undefined4 *)((longlong)plVar13 + lVar6) = 0;
        uVar10 = (int)plVar11 + 1;
        plVar11 = (longlong *)(ulonglong)uVar10;
        plVar13 = (longlong *)((longlong)plVar13 + 4);
      } while ((int)uVar10 < *(int *)(&DAT_1468b0c38 + lVar12 * 0x10));
    }
    uVar9 = 1;
    *(undefined4 *)(&DAT_1468b0290 + lVar12 * 4) = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0c08);
  return uVar9;
}



// FUNCTION 1415b2c80 FUN_1415b2c80 body=519 status=ok
// SIG undefined FUN_1415b2c80(void)

void FUN_1415b2c80(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
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
      uVar11 = 0;
      uVar12 = (ulonglong)uVar5;
      do {
        uVar10 = (longlong)(int)*plVar2 - 1U & uVar11;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar11 = uVar11 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar10 * 4) = 0xffffffff;
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
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = puStack_28;
      }
      uVar5 = *puVar13;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar9 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar9;
        if (bVar4) goto LAB_1415b2dbf;
        uVar5 = puVar13[lVar6 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
      iVar9 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      iStack_44 = (iStack_40 - iVar9) + 0x1f;
      if (iVar3 < iStack_44) {
LAB_1415b2dbf:
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
        lVar6 = *param_1;
        lVar8 = (longlong)iStack_1c;
        uVar5 = (int)*plVar2 - 1U & *(uint *)(lVar6 + lVar8 * 0x18);
        *(uint *)(lVar6 + 0x14 + lVar8 * 0x18) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x10 + lVar8 * 0x18) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
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



// FUNCTION 1415b2e90 Rehash body=552 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
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
  undefined2 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint *puVar14;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
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
      uVar12 = 0;
      uVar13 = (ulonglong)uVar5;
      do {
        uVar10 = (longlong)(int)*plVar2 - 1U & uVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar12 = uVar12 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar10 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = puStack_38;
      }
      uVar5 = *puVar14;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_1415b2fbf;
        uVar5 = puVar14[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_54 = (iStack_50 - iVar8) + 0x1f;
      if (iVar3 < iStack_54) {
LAB_1415b2fbf:
        iStack_54 = iVar3;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar3) {
      do {
        iVar3 = iStack_2c;
        puVar11 = (undefined8 *)((longlong)iStack_2c * 0xb8 + *param_1);
        if (*(int *)(puVar11 + 1) == 0) {
          puVar9 = &DAT_143f3eda8;
        }
        else {
          puVar9 = (undefined2 *)*puVar11;
        }
        uVar5 = FUN_140438070(puVar9);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)((longlong)puVar11 + 0xb4) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(puVar11 + 0x16) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 1415b30c0 FUN_1415b30c0 body=542 status=ok
// SIG undefined FUN_1415b30c0(void)

void FUN_1415b30c0(longlong *param_1)

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
  undefined8 *puVar13;
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
        if (bVar4) goto LAB_1415b31ff;
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
LAB_1415b31ff:
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
        puVar13 = (undefined8 *)((longlong)iStack_1c * 0x230 + *param_1);
        uVar8 = (int)((ulonglong)*puVar13 >> 0x20) * 0x17 + (int)*puVar13 & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar13 + 0x22c) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar13 + 0x45) =
             *(undefined4 *)
              ((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4);
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



// FUNCTION 1415b32e0 FUN_1415b32e0 body=533 status=ok
// SIG undefined FUN_1415b32e0(void)

void FUN_1415b32e0(longlong *param_1)

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
  undefined8 *puVar13;
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
        if (bVar4) goto LAB_1415b341f;
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
LAB_1415b341f:
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
        puVar13 = (undefined8 *)((longlong)iStack_1c * 0x10 + *param_1);
        uVar8 = (int)((ulonglong)*puVar13 >> 0x20) * 0x17 + (int)*puVar13 & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar13 + 0xc) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar13 + 1) =
             *(undefined4 *)
              ((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4);
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



// FUNCTION 1415b3500 Remove body=360 status=ok
// SIG undefined Remove(void)

int TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
    ::Remove(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int *piVar10;
  
  iVar9 = 0;
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  lVar4 = (longlong)(int)((int)((ulonglong)param_2 >> 0x20) + (int)param_2 & (int)param_1[9] - 1U);
  plVar3 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar3 = param_1 + 7;
  }
  iVar7 = *(int *)((longlong)plVar3 + lVar4 * 4);
  piVar10 = (int *)((longlong)plVar3 + lVar4 * 4);
  if (iVar7 == -1) {
    iVar9 = 0;
  }
  else {
    do {
      lVar2 = *param_1;
      lVar8 = (longlong)iVar7 * 0x30;
      lVar4 = lVar8 + lVar2;
      if (*(longlong *)(lVar8 + lVar2) == param_2) {
        if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
          lVar5 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar4 + 0x2c));
          plVar3 = (longlong *)param_1[8];
          if ((longlong *)param_1[8] == (longlong *)0x0) {
            plVar3 = param_1 + 7;
          }
          piVar6 = (int *)((longlong)plVar3 + lVar5 * 4);
          iVar1 = *(int *)((longlong)plVar3 + lVar5 * 4);
          while (iVar1 != -1) {
            if (iVar1 == iVar7) {
              *piVar6 = *(int *)(lVar4 + 0x28);
              break;
            }
            piVar6 = (int *)(lVar2 + 0x28 + (longlong)iVar1 * 0x30);
            iVar1 = *piVar6;
          }
        }
        lVar4 = *param_1;
        if (*(longlong *)(lVar4 + lVar8 + 0x18) != 0) {
          FMemory::Free();
        }
        if (*(longlong *)(lVar4 + lVar8 + 8) != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::RemoveAtUninitialized(param_1,iVar7,1);
        iVar9 = iVar9 + 1;
      }
      else {
        piVar10 = (int *)(lVar4 + 0x28);
      }
      iVar7 = *piVar10;
    } while (iVar7 != -1);
  }
  return iVar9;
}



// FUNCTION 1415b3670 FUN_1415b3670 body=367 status=ok
// SIG undefined FUN_1415b3670(void)

undefined4 FUN_1415b3670(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar8 = (longlong)(int)param_1[9] - 1;
  plVar4 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar4 = param_1 + 7;
  }
  iVar5 = *(int *)((longlong)plVar4 +
                  ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) & uVar8) * 4)
  ;
  if (iVar5 != -1) {
    lVar6 = *param_1;
    do {
      lVar2 = (longlong)iVar5 * 0x230;
      if (*(longlong *)(lVar2 + lVar6) == param_2) {
        lVar7 = (longlong)iVar5 * 0x230;
        lVar2 = lVar7 + lVar6;
        uVar8 = (longlong)*(int *)(lVar2 + 0x22c) & uVar8;
        piVar3 = (int *)((longlong)plVar4 + uVar8 * 4);
        iVar1 = *(int *)((longlong)plVar4 + uVar8 * 4);
        goto joined_r0x0001415b372a;
      }
      iVar5 = *(int *)(lVar2 + 0x228 + lVar6);
    } while (iVar5 != -1);
  }
  return 0;
joined_r0x0001415b372a:
  if (iVar1 == -1) {
LAB_1415b3760:
    lVar6 = 4;
    plVar4 = (longlong *)(*param_1 + 0x288 + lVar7);
    do {
      lVar6 = lVar6 + -1;
      *(undefined4 *)(plVar4 + -0xe) = 0;
      if (plVar4[-0xf] != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (plVar4 + -0x17);
      plVar4 = plVar4 + -0xf;
    } while (lVar6 != 0);
    FUN_1415b38a0(param_1,iVar5,1);
    return 1;
  }
  if (iVar1 == iVar5) {
    *piVar3 = *(int *)(lVar2 + 0x228);
    goto LAB_1415b3760;
  }
  piVar3 = (int *)((longlong)iVar1 * 0x230 + 0x228 + lVar6);
  iVar1 = *piVar3;
  goto joined_r0x0001415b372a;
}



// FUNCTION 1415b37e0 RemoveAtUninitialized body=181 status=ok
// SIG undefined RemoveAtUninitialized(void)

void TSparseArray<TSetElement<TTuple<FString,FConfigSection>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
    lVar8 = uVar10 * 0xb8;
    do {
      iVar9 = (int)uVar10;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0xb8 + *param_1) = iVar9;
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
      lVar8 = lVar8 + 0xb8;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1415b38a0 FUN_1415b38a0 body=181 status=ok
// SIG undefined FUN_1415b38a0(void)

void FUN_1415b38a0(longlong *param_1,int param_2,int param_3)

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
    lVar8 = uVar10 * 0x230;
    do {
      iVar9 = (int)uVar10;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x230 + *param_1) = iVar9;
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
      lVar8 = lVar8 + 0x230;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1415b3960 FUN_1415b3960 body=256 status=ok
// SIG undefined FUN_1415b3960(void)

void FUN_1415b3960(longlong param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong local_38;
  longlong local_30;
  
  puVar7 = *(undefined8 **)(param_1 + 0x70);
  uVar6 = 0;
  uVar8 = (longlong)*(int *)(param_1 + 0x78) & 0x1fffffffffffffff;
  if (puVar7 + *(int *)(param_1 + 0x78) < puVar7) {
    uVar8 = uVar6;
  }
  if (uVar8 == 0) {
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x68);
    return;
  }
  do {
    piVar2 = (int *)*puVar7;
    iVar1 = piVar2[0x10];
    if (((iVar1 != 0) && (*piVar2 != -1)) && (*(int *)(param_2 + 4) < *piVar2)) {
      lVar3 = *(longlong *)(piVar2 + 0xe);
      if (((*(int *)(param_2 + 0x10) != 0) && (*(longlong **)(param_2 + 8) != (longlong *)0x0)) &&
         (cVar4 = (**(code **)(**(longlong **)(param_2 + 8) + 0x18))(), cVar4 != '\0')) {
        if (*(int *)(param_2 + 0x10) == 0) {
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = *(longlong **)(param_2 + 8);
        }
        local_38 = lVar3;
        local_30 = lVar3 + (longlong)iVar1 * 8;
        (**(code **)(*plVar5 + 0x40))(plVar5,piVar2 + 2,piVar2 + 6,piVar2 + 10,&local_38);
      }
    }
    puVar7 = puVar7 + 1;
    uVar6 = uVar6 + 1;
  } while (uVar6 != uVar8);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x68);
  return;
}



// FUNCTION 1415b3a60 FUN_1415b3a60 body=2744 status=ok
// SIG undefined FUN_1415b3a60(void)

ulonglong FUN_1415b3a60(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                       void *param_5)

{
  void *_Src;
  bool bVar1;
  char cVar2;
  BOOL BVar3;
  undefined4 uVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined2 *puVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  ulonglong uVar15;
  int iVar16;
  wchar_t *pwVar17;
  wchar_t *pwVar18;
  int iVar19;
  longlong local_res8;
  longlong local_res10;
  longlong local_res18;
  ulonglong in_stack_ffffffffffffff28;
  wchar_t **ppwVar20;
  undefined8 uVar21;
  int local_a8 [2];
  wchar_t *local_a0;
  undefined8 local_98;
  wchar_t *local_90;
  wchar_t *pwStack_88;
  undefined2 *local_80;
  int local_78;
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  wchar_t *local_50;
  wchar_t *local_48;
  
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  pwVar5 = (wchar_t *)FUN_1415b84f0();
  if ((char)pwVar5 != '\0') {
    pwVar17 = (wchar_t *)0x0;
    iVar16 = 0;
    pwVar5 = pwVar17;
    if (((local_res8 != 0) && (local_90 = (wchar_t *)0x0, pwVar5 = (wchar_t *)0x0, local_res10 != 0)
        ) && (param_5 != (void *)0x0)) {
      piVar14 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38);
      if ((*piVar14 < DAT_1468b11a8) && (_Init_thread_header(&DAT_1468b11a8), DAT_1468b11a8 == -1))
      {
        DAT_1468b11a4 =
             FUN_14164aa30(DAT_1468b6148,L"ScriptErrorReporting",L"bHashObjectName",&DAT_1468e2360,
                           in_stack_ffffffffffffff28 & 0xffffffffffffff00);
        _Init_thread_footer(&DAT_1468b11a8);
      }
      if ((*piVar14 < DAT_1468b11b0) && (_Init_thread_header(&DAT_1468b11b0), DAT_1468b11b0 == -1))
      {
        DAT_1468b11ac =
             FUN_14164aa30(DAT_1468b6148,L"ScriptErrorReporting",L"bHashProperty",&DAT_1468e2360,1);
        _Init_thread_footer(&DAT_1468b11b0);
      }
      if ((*piVar14 < DAT_1468b11b8) && (_Init_thread_header(&DAT_1468b11b8), DAT_1468b11b8 == -1))
      {
        DAT_1468b11b4 =
             FUN_14164aa30(DAT_1468b6148,L"ScriptErrorReporting",L"bHashOuter",&DAT_1468e2360,1);
        _Init_thread_footer(&DAT_1468b11b8);
      }
      if ((*piVar14 < DAT_1468b11c0) && (_Init_thread_header(&DAT_1468b11c0), DAT_1468b11c0 == -1))
      {
        DAT_1468b11bc =
             FUN_14164aa30(DAT_1468b6148,L"ScriptErrorReporting",L"bHashStack",&DAT_1468e2360,1);
        _Init_thread_footer(&DAT_1468b11c0);
      }
      if ((*piVar14 < DAT_1468b11c8) && (_Init_thread_header(&DAT_1468b11c8), DAT_1468b11c8 == -1))
      {
        cVar2 = FUN_14164aa30(DAT_1468b6148,L"ScriptErrorReporting",L"bEnableDefaultHandling",
                              &DAT_1468e2360,1);
        DAT_1468b11c4 = cVar2 == '\0';
        _Init_thread_footer(&DAT_1468b11c8);
      }
      lVar6 = FUN_1415dcd20();
      if (lVar6 != 0) {
        FUN_1415e70c0(lVar6);
      }
      BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0df0);
      if (BVar3 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0df0);
      }
      local_a8[0] = 0;
      FName::ToString(&local_res8,&local_60);
      FName::ToString(&local_res10,&local_70);
      FName::ToString(&local_res18,&local_80);
      puVar11 = &DAT_143f3eda8;
      if (local_58 != 0) {
        puVar11 = local_60;
      }
      uVar4 = FUN_140438070(puVar11);
      local_a8[0] = HashCombine(local_a8[0],uVar4);
      if (DAT_1468b11a4 != '\0') {
        puVar11 = &DAT_143f3eda8;
        if (local_68 != 0) {
          puVar11 = local_70;
        }
        uVar4 = FUN_140438070(puVar11);
        local_a8[0] = HashCombine(local_a8[0],uVar4);
      }
      if ((DAT_1468b11ac != '\0') && (local_90 = (wchar_t *)0x0, local_res18 != 0)) {
        puVar11 = &DAT_143f3eda8;
        if (local_78 != 0) {
          puVar11 = local_80;
        }
        uVar4 = FUN_140438070(puVar11);
        local_a8[0] = HashCombine(local_a8[0],uVar4);
      }
      if (DAT_1468b11b4 != '\0') {
        iVar10 = *(int *)(param_4 + 1);
        iVar19 = iVar10 + -1;
        if (iVar10 == 0) {
          iVar19 = iVar16;
        }
        if (iVar19 != 0) {
          if (iVar10 == 0) {
            puVar11 = &DAT_143f3eda8;
          }
          else {
            puVar11 = (undefined2 *)*param_4;
          }
          uVar4 = FUN_140438070(puVar11);
          local_a8[0] = HashCombine(local_a8[0],uVar4);
        }
      }
      DAT_1468b0e20 = 0;
      if (DAT_1468b0e24 != 0x40) {
        TArray<TAttributeArrayContainer<int>::FChunk,TSizedDefaultAllocator<32>_>::ResizeTo
                  (&DAT_1468b0e18,0x40);
      }
      iVar10 = local_a8[0];
      if (DAT_1468b11bc != '\0') {
        pwVar18 = DAT_1468b0e18 + (longlong)DAT_1468b0e20 * 0x60c;
        for (pwVar5 = DAT_1468b0e18; pwVar5 != pwVar18; pwVar5 = pwVar5 + 0x60c) {
          if ((char)pwVar5[0x200] != '\0') {
            local_a8[0] = FCrc::StrCrc32<char>(pwVar5 + 0x200,iVar10);
            iVar10 = local_a8[0];
          }
        }
      }
      if (iVar10 == 0) {
        uVar15 = 0;
      }
      else {
        iVar10 = *(int *)(param_4 + 1);
        _Src = (void *)*param_4;
        local_a0 = (wchar_t *)0x0;
        local_98 = (wchar_t *)CONCAT44(local_98._4_4_,iVar10);
        if (iVar10 == 0) {
          local_98 = (wchar_t *)0x0;
          uVar15 = 0;
          iVar10 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a0,iVar10,0);
          pwVar17 = local_a0;
          _guard_xfg_dispatch_icall_nop(local_a0,_Src,(longlong)iVar10 * 2);
          uVar15 = (ulonglong)local_98 & 0xffffffff;
          iVar10 = local_98._4_4_;
        }
        iVar12 = (int)uVar15;
        iVar19 = (2 - (uint)(iVar12 != 0)) + iVar12;
        if (iVar10 < iVar19) {
          local_98._0_4_ = iVar19;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a0,uVar15);
          pwVar17 = local_a0;
          iVar19 = (int)local_98;
          iVar10 = local_98._4_4_;
        }
        puVar11 = local_60;
        pwVar17[(longlong)iVar12 - (ulonglong)(iVar12 != 0)] = L'.';
        (pwVar17 + ((longlong)iVar12 - (ulonglong)(iVar12 != 0)))[1] = L'\0';
        iVar12 = iVar16;
        if (local_58 != 0) {
          iVar12 = local_58 + -1;
        }
        iVar13 = iVar19;
        if (iVar12 != 0) {
          local_98._0_4_ = iVar19 + (uint)(iVar19 == 0) + iVar12;
          if (iVar10 < (int)local_98) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a0,iVar19);
            pwVar17 = local_a0;
            iVar10 = local_98._4_4_;
          }
          iVar13 = (int)local_98;
          _guard_xfg_dispatch_icall_nop
                    (pwVar17 + ((longlong)iVar19 - (ulonglong)(iVar19 != 0)),puVar11,
                     (longlong)iVar12 * 2);
          (pwVar17 + ((longlong)iVar19 - (ulonglong)(iVar19 != 0)))[iVar12] = L'\0';
        }
        local_98._0_4_ = (2 - (uint)(iVar13 != 0)) + iVar13;
        iVar19 = (int)local_98;
        if (iVar10 < (int)local_98) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a0,iVar13);
          pwVar17 = local_a0;
          iVar19 = (int)local_98;
          iVar10 = local_98._4_4_;
        }
        puVar11 = local_70;
        pwVar17[(longlong)iVar13 - (ulonglong)(iVar13 != 0)] = L'.';
        (pwVar17 + ((longlong)iVar13 - (ulonglong)(iVar13 != 0)))[1] = L'\0';
        iVar12 = iVar16;
        if (local_68 != 0) {
          iVar12 = local_68 + -1;
        }
        iVar13 = iVar19;
        if (iVar12 != 0) {
          local_98._0_4_ = iVar19 + (uint)(iVar19 == 0) + iVar12;
          if (iVar10 < (int)local_98) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a0,iVar19);
            pwVar17 = local_a0;
            iVar10 = local_98._4_4_;
          }
          iVar13 = (int)local_98;
          _guard_xfg_dispatch_icall_nop
                    (pwVar17 + ((longlong)iVar19 - (ulonglong)(iVar19 != 0)),puVar11,
                     (longlong)iVar12 * 2);
          (pwVar17 + ((longlong)iVar19 - (ulonglong)(iVar19 != 0)))[iVar12] = L'\0';
        }
        local_98._0_4_ = (2 - (uint)(iVar13 != 0)) + iVar13;
        iVar19 = (int)local_98;
        if (iVar10 < (int)local_98) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a0,iVar13);
          pwVar17 = local_a0;
          iVar19 = (int)local_98;
          iVar10 = local_98._4_4_;
        }
        puVar11 = local_80;
        pwVar17[(longlong)iVar13 - (ulonglong)(iVar13 != 0)] = L'.';
        (pwVar17 + ((longlong)iVar13 - (ulonglong)(iVar13 != 0)))[1] = L'\0';
        iVar12 = iVar16;
        if (local_78 != 0) {
          iVar12 = local_78 + -1;
        }
        iVar13 = iVar19;
        if (iVar12 != 0) {
          local_98._0_4_ = iVar12 + (uint)(iVar19 == 0) + iVar19;
          if (iVar10 < (int)local_98) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a0,iVar19);
            pwVar17 = local_a0;
            iVar10 = local_98._4_4_;
          }
          iVar13 = (int)local_98;
          _guard_xfg_dispatch_icall_nop
                    (pwVar17 + ((longlong)iVar19 - (ulonglong)(iVar19 != 0)),puVar11,
                     (longlong)iVar12 * 2);
          (pwVar17 + ((longlong)iVar19 - (ulonglong)(iVar19 != 0)))[iVar12] = L'\0';
        }
        local_98._0_4_ = (4 - (uint)(iVar13 != 0)) + iVar13;
        if (iVar10 < (int)local_98) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a0,iVar13);
          pwVar17 = local_a0;
          iVar10 = local_98._4_4_;
        }
        iVar19 = (int)local_98;
        lVar6 = -1;
        builtin_wcsncpy(pwVar17 + ((longlong)iVar13 - (ulonglong)(iVar13 != 0)),L" : ",4);
        do {
          lVar6 = lVar6 + 1;
        } while (*(short *)((longlong)param_5 + lVar6 * 2) != 0);
        iVar13 = (int)lVar6;
        iVar12 = (int)local_98;
        if (iVar13 != 0) {
          lVar6 = (longlong)(int)local_98;
          local_98._0_4_ = (int)local_98 + (uint)((int)local_98 == 0) + iVar13;
          if (iVar10 < (int)local_98) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a0,iVar19);
            pwVar17 = local_a0;
          }
          iVar12 = (int)local_98;
          _guard_xfg_dispatch_icall_nop
                    (pwVar17 + (lVar6 - (ulonglong)(iVar19 != 0)),param_5,(longlong)iVar13 * 2);
          (pwVar17 + (lVar6 - (ulonglong)(iVar19 != 0)))[iVar13] = L'\0';
        }
        cVar2 = '\0';
        if (DAT_1464a85e8 != DAT_1464a8614) {
          puVar7 = DAT_1464a8620;
          if (DAT_1464a8620 == (undefined *)0x0) {
            puVar7 = &DAT_1464a8618;
          }
          iVar10 = *(int *)(puVar7 + ((longlong)DAT_1464a8628 - 1U & (longlong)local_a8[0]) * 4);
          while (iVar10 != -1) {
            lVar6 = (longlong)iVar10;
            if (*(int *)(DAT_1464a85e0 + lVar6 * 0x10) == local_a8[0]) {
              if ((iVar10 != -1) && (lVar6 = DAT_1464a85e0 + lVar6 * 0x10, lVar6 != 0))
              goto LAB_1415b40e6;
              break;
            }
            iVar10 = *(int *)(DAT_1464a85e0 + lVar6 * 0x10 + 8);
          }
        }
        local_a0 = (wchar_t *)local_a8;
        FUN_14058d450(&DAT_1464a85e0,&local_90,&local_a0,0);
        lVar6 = (longlong)(int)local_90 * 0x10 + DAT_1464a85e0;
LAB_1415b40e6:
        iVar19 = *(int *)(lVar6 + 4);
        iVar10 = iVar19 + 1;
        *(int *)(lVar6 + 4) = iVar10;
        if (iVar19 == 0) {
          bVar1 = true;
          FUN_1415b1c00();
          local_a0 = DAT_1468b0e18;
          local_98 = DAT_1468b0e18 + (longlong)DAT_1468b0e20 * 0x60c;
          if (iVar12 != 0) {
            iVar16 = iVar12 + -1;
          }
          pwStack_88 = pwVar17 + iVar16;
          local_50 = L"ScriptError";
          local_48 = L"";
          ppwVar20 = &local_a0;
          local_90 = pwVar17;
          FUN_1415b4520(&local_50,&local_90,local_a8[0],*(undefined4 *)(lVar6 + 4),ppwVar20);
          uVar4 = (undefined4)((ulonglong)ppwVar20 >> 0x20);
          uVar8 = FName::FName(&local_a0,L"LogScript",1);
          cVar2 = FUN_1415ae400(uVar8,3,local_a8[0],&DAT_1468b0e18);
        }
        else {
          bVar1 = false;
          local_90 = (wchar_t *)0x0;
          pwStack_88 = (wchar_t *)0x0;
          if (iVar12 != 0) {
            iVar16 = iVar12 + -1;
          }
          local_48 = pwVar17 + iVar16;
          local_a0 = L"ScriptError";
          local_98 = L"";
          ppwVar20 = &local_90;
          local_50 = pwVar17;
          FUN_1415b4520(&local_a0,&local_50,local_a8[0],iVar10,ppwVar20);
          uVar4 = (undefined4)((ulonglong)ppwVar20 >> 0x20);
        }
        iVar10 = local_a8[0];
        iVar16 = *(int *)(lVar6 + 4);
        pwVar5 = L"";
        if (iVar12 != 0) {
          pwVar5 = pwVar17;
        }
        uVar8 = FName::FName(&local_a0,L"LogScript",1);
        if ((DAT_1468b02a8 == 0) || (iVar16 <= DAT_1468b02a8)) {
          uVar9 = FUN_141672640();
          puVar7 = &DAT_144c997c4;
          if (cVar2 != '\0') {
            puVar7 = &DAT_144c9dc50;
          }
          uVar21 = CONCAT44(uVar4,iVar10);
          FOutputDevice::CategorizedLogfImpl
                    (uVar9,uVar8,3,L"[0x%08x] %s (%d): %s%s",uVar21,L"ScriptError",iVar16,pwVar5,
                     puVar7);
          uVar4 = (undefined4)((ulonglong)uVar21 >> 0x20);
          if (iVar16 == DAT_1468b02a8) {
            uVar9 = FUN_141672640();
            FOutputDevice::CategorizedLogfImpl
                      (uVar9,uVar8,3,
                       L"[0x%08x] %s (%d): LoggedErrorsPerHash reached, further instances are suppressed."
                       ,CONCAT44(uVar4,iVar10),L"ScriptError",iVar16,pwVar5,puVar7);
          }
        }
        if ((DAT_1468b11c4 == '\0') || (bVar1)) {
          uVar15 = 0;
        }
        else {
          uVar15 = 1;
        }
        if (pwVar17 != (wchar_t *)0x0) {
          FMemory::Free(pwVar17);
        }
      }
      if (local_80 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_70 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_60 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0df0);
      lVar6 = FUN_1415dcd20();
      if (lVar6 != 0) {
        FUN_1415e5410(lVar6);
      }
      return uVar15;
    }
  }
  return (ulonglong)pwVar5 & 0xffffffffffffff00;
}



// FUNCTION 1415b4520 FUN_1415b4520 body=486 status=ok
// SIG undefined FUN_1415b4520(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1415b4520(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,int param_4,
                  undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int *piVar6;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if ((DAT_1468b02ac == 0) || (param_4 <= DAT_1468b02ac)) {
    piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x38);
    if (*piVar6 < DAT_1468b1178) {
      _Init_thread_header(&DAT_1468b1178);
      if (DAT_1468b1178 == -1) {
        FName::FName(&DAT_1468b1170,L"GbxPerfAnalytics",1);
        _Init_thread_footer(&DAT_1468b1178);
      }
    }
    uVar2 = DAT_1468b1170;
    uVar4 = FUN_14168dc80();
    cVar3 = FModuleManager::IsModuleLoaded(uVar4,uVar2);
    iVar1 = *piVar6;
    if (cVar3 == '\0') {
      if (iVar1 < DAT_1468b1198) {
        _Init_thread_header(&DAT_1468b1198);
        if (DAT_1468b1198 == -1) {
          _DAT_1468b1180 = &PTR_FUN_143f3ee80;
          DAT_1468b1188 = 0;
          _DAT_1468b1190 = 0;
          atexit(FUN_143e75ea0);
          _Init_thread_footer(&DAT_1468b1198);
        }
      }
      plVar5 = (longlong *)&DAT_1468b1180;
    }
    else {
      if (iVar1 < DAT_1468b1178) {
        _Init_thread_header(&DAT_1468b1178);
        if (DAT_1468b1178 == -1) {
          FName::FName(&DAT_1468b1170,L"GbxPerfAnalytics",1);
          _Init_thread_footer(&DAT_1468b1178);
        }
      }
      uVar2 = DAT_1468b1170;
      uVar4 = FUN_14168dc80();
      plVar5 = (longlong *)FModuleManager::GetModule(uVar4,uVar2);
    }
    local_38 = *param_5;
    local_30 = param_5[1];
    local_28 = *param_2;
    local_20 = param_2[1];
    local_18 = *param_1;
    local_10 = param_1[1];
    (**(code **)(*plVar5 + 0x70))(plVar5,&local_18,&local_28,param_3,&local_38);
  }
  return;
}



// FUNCTION 1415b4710 FUN_1415b4710 body=1150 status=ok
// SIG undefined FUN_1415b4710(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1415b4710(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  double dVar6;
  DWORD DVar7;
  LPVOID pvVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  double dVar16;
  double dVar17;
  
  lVar1 = DAT_1468b0e70;
  if ((((DAT_1468e2448 == 0) || (pvVar8 = TlsGetValue(DAT_1468e2448), (int)pvVar8 == 0)) &&
      (DAT_1468c21ae != '\0')) && (DVar7 = GetCurrentThreadId(), DVar7 != DAT_1468c21c0)) {
    lVar9 = 4;
  }
  else {
    lVar9 = 0;
  }
  if (*(int *)(lVar9 + lVar1) != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_1468b11d8) &&
       (_Init_thread_header(&DAT_1468b11d8), DAT_1468b11d8 == -1)) {
      FGenericPlatformMisc::LowLevelOutputDebugStringf
                (
                L"TimingBlock:,Target,Context,Scope,LastTarget, Utilization%%, ReadSize(MB), ScopeTime(s), ReadTime(s), IdleTime(s), IdleTimeMax(s), ReadBW(MB/s), ActBW(MB/s), Reads, Seeks, Seeks(Cross-File), AvgReadSize(KB), AvgSeek(KB)"
                );
      puVar12 = DAT_1468b0e78 + (longlong)DAT_1468b0e80 * 2;
      for (puVar11 = DAT_1468b0e78; puVar11 != puVar12; puVar11 = puVar11 + 2) {
        if (*(int *)(puVar11 + 1) == 0) {
          puVar15 = &DAT_143f3eda8;
        }
        else {
          puVar15 = (undefined2 *)*puVar11;
        }
        FGenericPlatformMisc::LowLevelOutputDebugStringf(&DAT_144ca05f8,puVar15);
      }
      FWindowsPlatformMisc::LocalPrint(L"\n");
      _DAT_1468b11d4 = 0;
      _Init_thread_footer(&DAT_1468b11d8);
    }
    puVar11 = (undefined8 *)param_4[1];
    for (param_4 = (undefined8 *)*param_4; param_4 != puVar11; param_4 = param_4 + 1) {
      puVar5 = (uint *)*param_4;
      dVar2 = *(double *)(puVar5 + 6);
      dVar17 = dVar2 + *(double *)(puVar5 + 8);
      if (dVar17 <= 0.0) {
LAB_1415b49cb:
        if (*(int *)(param_3 + 1) == 0) {
          puVar15 = &DAT_143f3eda8;
        }
        else {
          puVar15 = (undefined2 *)*param_3;
        }
        if (puVar5[0x16] == 0) {
          puVar14 = &DAT_143f3eda8;
        }
        else {
          puVar14 = *(undefined2 **)(puVar5 + 0x14);
        }
        if (*(int *)(param_2 + 1) == 0) {
          puVar13 = &DAT_143f3eda8;
        }
        else {
          puVar13 = (undefined2 *)*param_2;
        }
        if (*(int *)(param_1 + 1) == 0) {
          puVar10 = &DAT_143f3eda8;
        }
        else {
          puVar10 = (undefined2 *)*param_1;
        }
        FGenericPlatformMisc::LowLevelOutputDebugStringf
                  (L"TimingBlock:,%s,%s,%s,%s, 0.00, 0.00, %6.2f, 0.00, 0.00, 0.00, 0.00, 0.00, 0, 0, 0, 0.00, 0.00"
                   ,puVar10,puVar13,puVar14,puVar15,*(undefined8 *)(puVar5 + 4));
      }
      else {
        uVar3 = *puVar5;
        if (uVar3 == 0) goto LAB_1415b49cb;
        uVar4 = puVar5[2];
        if (uVar4 == 0) {
          dVar16 = 0.0;
        }
        else {
          dVar16 = (double)*(longlong *)(puVar5 + 0xe);
          if (*(longlong *)(puVar5 + 0xe) < 0) {
            dVar16 = dVar16 + 1.8446744073709552e+19;
          }
          dVar16 = (0.0009765625 / (double)uVar4) * dVar16;
        }
        if (*(int *)(param_3 + 1) == 0) {
          puVar15 = &DAT_143f3eda8;
        }
        else {
          puVar15 = (undefined2 *)*param_3;
        }
        if (puVar5[0x16] == 0) {
          puVar14 = &DAT_143f3eda8;
        }
        else {
          puVar14 = *(undefined2 **)(puVar5 + 0x14);
        }
        if (*(int *)(param_2 + 1) == 0) {
          puVar13 = &DAT_143f3eda8;
        }
        else {
          puVar13 = (undefined2 *)*param_2;
        }
        if (*(int *)(param_1 + 1) == 0) {
          puVar10 = &DAT_143f3eda8;
        }
        else {
          puVar10 = (undefined2 *)*param_1;
        }
        dVar6 = (double)*(longlong *)(puVar5 + 0xc);
        if (*(longlong *)(puVar5 + 0xc) < 0) {
          dVar6 = dVar6 + 1.8446744073709552e+19;
        }
        dVar17 = 1.0 / dVar17;
        FGenericPlatformMisc::LowLevelOutputDebugStringf
                  (L"TimingBlock:,%s,%s,%s,%s, %5.2f%%, %.2f, %6.2f, %6.2f, %6.2f, %6.2f, %.2f, %.2f, %d, %d, %d, %.2f, %.2f"
                   ,puVar10,puVar13,puVar14,puVar15,dVar2 * 100.0 * dVar17,
                   dVar6 * 9.5367431640625e-07,*(undefined8 *)(puVar5 + 4),dVar2,
                   *(double *)(puVar5 + 8),*(undefined8 *)(puVar5 + 10),
                   (dVar6 / dVar2) * 9.5367431640625e-07,dVar17 * dVar6 * 9.5367431640625e-07,uVar3,
                   uVar4,puVar5[1],(0.0009765625 / (double)uVar3) * dVar6,dVar16);
      }
      lVar9 = *(longlong *)(puVar5 + 0x10);
      lVar1 = lVar9 + (longlong)(int)puVar5[0x12] * 0x18;
      for (; lVar9 != lVar1; lVar9 = lVar9 + 0x18) {
        FGenericPlatformMisc::LowLevelOutputDebugStringf(L",%.2f",*(undefined8 *)(lVar9 + 0x10));
      }
      FWindowsPlatformMisc::LocalPrint(L"\n");
    }
  }
  return;
}



// FUNCTION 1415b4b90 Reset body=294 status=ok
// SIG undefined Reset(void)

void TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
     ::Reset(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  void *_Dst;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      lVar2 = (longlong)local_1c;
      lVar4 = *local_38;
      if (*(longlong *)(lVar4 + 0x10 + lVar2 * 0x28) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar4 + lVar2 * 0x28) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  uVar5 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar1 = *(int *)(param_1 + 0x28) + 0x1f;
  _Dst = *(void **)(param_1 + 0x20);
  if (*(void **)(param_1 + 0x20) == (void *)0x0) {
    _Dst = (void *)(param_1 + 0x10);
  }
  ::_guard_xfg_dispatch_icall_nop
            (_Dst,0,(longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) << 2);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
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



// FUNCTION 1415b4cc0 FUN_1415b4cc0 body=358 status=ok
// SIG undefined FUN_1415b4cc0(void)

void FUN_1415b4cc0(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  void *_Dst;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  uVar3 = 0;
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      lVar5 = 4;
      plVar4 = (longlong *)(*local_38 + 0x288 + (longlong)local_1c * 0x230);
      do {
        lVar5 = lVar5 + -1;
        *(undefined4 *)(plVar4 + -0xe) = 0;
        if (plVar4[-0xf] != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (plVar4 + -0x17);
        plVar4 = plVar4 + -0xf;
      } while (lVar5 != 0);
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<560,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar1 = *(int *)(param_1 + 0x28) + 0x1f;
  _Dst = *(void **)(param_1 + 0x20);
  if (*(void **)(param_1 + 0x20) == (void *)0x0) {
    _Dst = (void *)(param_1 + 0x10);
  }
  _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) << 2)
  ;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      uVar2 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar3;
      uVar3 = uVar3 + 1;
      *(undefined4 *)(lVar5 + uVar2 * 4) = 0xffffffff;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 1415b4e30 FUN_1415b4e30 body=123 status=ok
// SIG undefined FUN_1415b4e30(void)

void FUN_1415b4e30(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *(undefined1 *)(param_1 + 5) = 0;
  lVar2 = 4;
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 4;
  puVar1 = param_1 + 8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  do {
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[3] = 0;
    TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>
    ::Empty(puVar1 + 4,*(int *)(puVar1 + 5) - *(int *)((longlong)puVar1 + 0x54));
    puVar1 = puVar1 + 0xf;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 1415b4eb0 Reset body=11 status=ok
// SIG undefined Reset(void)

void FSafeRecyclableEvent::Reset(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001415b4eb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
  return;
}



// FUNCTION 1415b4ec0 FUN_1415b4ec0 body=61 status=ok
// SIG undefined FUN_1415b4ec0(void)

int FUN_1415b4ec0(DWORD *param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    pvVar1 = TlsGetValue(*param_1);
    iVar2 = (int)pvVar1 + -1;
    TlsSetValue(*param_1,(LPVOID)(longlong)iVar2);
    return iVar2;
  }
  return 0;
}



// FUNCTION 1415b4f00 FUN_1415b4f00 body=660 status=ok
// SIG undefined FUN_1415b4f00(void)

void FUN_1415b4f00(void)

{
  uint uVar1;
  bool bVar2;
  BOOL BVar3;
  int iVar4;
  longlong lVar5;
  uint *puVar6;
  int iVar7;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  int iStack_60;
  uint uStack_5c;
  undefined *local_58;
  uint uStack_50;
  int iStack_4c;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  uint uStack_28;
  int iStack_24;
  undefined8 uStack_20;
  
  if (DAT_1468b02d8 != 0) {
    BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0c08);
    if (BVar3 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0c08);
    }
    DAT_1464a8330 = 1;
    FUN_1415b4e30(DAT_1468b02d8 + 0x240);
    FUN_1415b4cc0(DAT_1468b02d8 + 0x5b0);
    DAT_1464a8360 = DAT_1464a8360 + 1;
    DAT_1464a8368 = DAT_1464a8360;
    DAT_1464a8370 = DAT_1464a8360;
    BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0da8);
    if (BVar3 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0da8);
    }
    uStack_84 = 1;
    local_88 = 0;
    iStack_74 = 0;
    iStack_70 = 0;
    iVar7 = (int)DAT_1464a8488;
    if (iVar7 != 0) {
      puVar6 = DAT_1464a8480;
      if (DAT_1464a8480 == (uint *)0x0) {
        puVar6 = (uint *)&DAT_1464a8470;
      }
      uVar1 = *puVar6;
      iStack_70 = 0;
      local_88 = 0;
      while (uVar1 == 0) {
        lVar5 = (longlong)local_88;
        iStack_70 = iStack_70 + 0x20;
        iVar4 = local_88 + 1;
        bVar2 = (int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_88;
        local_88 = iVar4;
        if (bVar2) goto LAB_1415b506c;
        uVar1 = puVar6[lVar5 + 1];
      }
      uStack_84 = -uVar1 & uVar1;
      iVar4 = 0x1f;
      if (uStack_84 != 0) {
        for (; uStack_84 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_84 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      iStack_74 = (iStack_70 - iVar4) + 0x1f;
      if (iVar7 < iStack_74) {
LAB_1415b506c:
        iStack_74 = iVar7;
      }
    }
    uStack_50 = 0xffffffff;
    iStack_4c = iStack_74;
    local_48 = CONCAT44(uStack_6c,iStack_70);
    uStack_38 = CONCAT44(uStack_84,local_88);
    local_40 = &DAT_1464a8460;
    puStack_30 = &DAT_1464a8470;
    iStack_60 = local_88;
    uStack_5c = uStack_84;
    local_58 = &DAT_1464a8470;
    uStack_20 = local_48;
    uStack_28 = uStack_50;
    iStack_24 = iStack_4c;
    while ((iStack_4c != iVar7 || (local_58 != &DAT_1464a8470))) {
      lVar5 = *(longlong *)(DAT_1464a8460 + 8 + (longlong)iStack_4c * 0x18);
      BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x18));
      if (BVar3 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x18));
      }
      *(undefined4 *)(lVar5 + 0x50) = 0;
      *(undefined4 *)(lVar5 + 0x48) = 0;
      if (*(int *)(lVar5 + 0x4c) != *(int *)(lVar5 + 0x58)) {
        TArray<void_*,FDefaultAllocator>::ResizeTo();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x18));
      uStack_50 = uStack_50 & ~uStack_5c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0da8);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0c08);
  }
  return;
}



// FUNCTION 1415b51a0 FUN_1415b51a0 body=306 status=ok
// SIG undefined FUN_1415b51a0(void)

void FUN_1415b51a0(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_1415b4e30();
  uVar4 = 0;
  uVar5 = 0x100000;
  uVar2 = uVar4;
  uVar3 = uVar5;
  if (param_2 == '\0') {
    uVar2 = 0xffffffff;
    uVar3 = 0x7fefffff;
  }
  *(ulonglong *)(param_1 + 8) = CONCAT44(uVar3,uVar2);
  uVar2 = uVar4;
  uVar3 = uVar5;
  if (param_2 == '\0') {
    uVar2 = 0xffffffff;
    uVar3 = 0x7fefffff;
  }
  *(ulonglong *)(param_1 + 0x10) = CONCAT44(uVar3,uVar2);
  uVar2 = uVar4;
  uVar3 = uVar5;
  if (param_2 == '\0') {
    uVar2 = 0xffffffff;
    uVar3 = 0x7fefffff;
  }
  *(ulonglong *)(param_1 + 0x18) = CONCAT44(uVar3,uVar2);
  uVar2 = uVar4;
  uVar3 = uVar5;
  if (param_2 == '\0') {
    uVar2 = 0xffffffff;
    uVar3 = 0x7fefffff;
  }
  *(ulonglong *)(param_1 + 0x20) = CONCAT44(uVar3,uVar2);
  uVar2 = 0x7fffffff;
  if (param_2 != '\0') {
    uVar2 = 0;
  }
  *(undefined4 *)(param_1 + 0x218) = uVar2;
  lVar1 = 4;
  param_1 = param_1 + 0x60;
  do {
    *(undefined4 *)(param_1 + -0x10) = 0;
    *(undefined8 *)(param_1 + -0x28) = 0;
    *(undefined8 *)(param_1 + -0x20) = 0;
    *(undefined8 *)(param_1 + -0x18) = 0;
    *(undefined8 *)(param_1 + -8) = 0;
    TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>
    ::Empty(param_1,*(int *)(param_1 + 8) - *(int *)(param_1 + 0x34));
    uVar2 = uVar4;
    uVar3 = uVar5;
    if (param_2 == '\0') {
      uVar2 = 0xffffffff;
      uVar3 = 0x7fefffff;
    }
    *(ulonglong *)(param_1 + -0x28) = CONCAT44(uVar3,uVar2);
    uVar2 = uVar4;
    uVar3 = uVar5;
    if (param_2 == '\0') {
      uVar2 = 0xffffffff;
      uVar3 = 0x7fefffff;
    }
    *(ulonglong *)(param_1 + -0x20) = CONCAT44(uVar3,uVar2);
    uVar2 = uVar4;
    uVar3 = uVar5;
    if (param_2 == '\0') {
      uVar2 = 0xffffffff;
      uVar3 = 0x7fefffff;
    }
    *(ulonglong *)(param_1 + -0x18) = CONCAT44(uVar3,uVar2);
    uVar2 = uVar4;
    uVar3 = uVar5;
    if (param_2 == '\0') {
      uVar2 = 0xffffffff;
      uVar3 = 0x7fefffff;
    }
    *(ulonglong *)(param_1 + -8) = CONCAT44(uVar3,uVar2);
    param_1 = param_1 + 0x78;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1415b52e0 FUN_1415b52e0 body=8 status=ok
// SIG undefined FUN_1415b52e0(void)

void FUN_1415b52e0(void)

{
  DAT_1468b02a2 = 0;
  return;
}



// FUNCTION 1415b52f0 ResizeAllocation body=151 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<4,FDefaultAllocator>::ForElementType<FCompactPose>::ResizeAllocation
               (void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x60);
  if (param_3 < 5) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0x18);
    pvVar1 = *(void **)((longlong)param_1 + 0x60);
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
        *(void **)((longlong)param_1 + 0x60) = pvVar1;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0x18);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x60) = uVar2;
  return;
}



// FUNCTION 1415b5390 FUN_1415b5390 body=148 status=ok
// SIG undefined FUN_1415b5390(void)

void FUN_1415b5390(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x41) {
      uVar2 = 0x40;
    }
    else {
      uVar3 = FMemory::QuantizeSize((longlong)(int)param_2 << 2,0);
      uVar2 = (uint)(uVar3 >> 2);
      if ((int)uVar2 < (int)param_2) {
        uVar2 = 0x7fffffff;
      }
    }
  }
  if (uVar2 != param_3) {
    lVar1 = *(longlong *)(param_1 + 0x100);
    if (uVar2 < 0x41) {
      if (lVar1 == 0) goto LAB_1415b540e;
      lVar5 = 0;
    }
    else {
      if ((lVar1 == 0) && (uVar2 == 0)) goto LAB_1415b540e;
      lVar5 = (longlong)(int)uVar2 << 2;
    }
    uVar4 = FMemory::Realloc(lVar1,lVar5,0);
    *(undefined8 *)(param_1 + 0x100) = uVar4;
  }
LAB_1415b540e:
  *(uint *)(param_1 + 0x10c) = uVar2;
  return;
}



// FUNCTION 1415b5430 ResizeGrow body=138 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FPrimitiveUniformShaderParameters,TSizedDefaultAllocator<32>_>::ResizeGrow
               (longlong *param_1)

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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x230,0);
  iVar4 = (int)(uVar3 / 0x230);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x230,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 1415b54c0 ResizeGrow body=291 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FLandscapeTextureAtlas::FPendingUpload,TInlineAllocator<8,TSizedDefaultAllocator<32>_>_>
     ::ResizeGrow(void *param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 200);
  if (uVar1 < 9) {
    uVar5 = 8;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0xcc) != 0) || (4 < uVar1)) {
      lVar6 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar2 = FMemory::QuantizeSize(lVar6 * 0x18,0);
    uVar5 = (uint)(uVar2 / 0x18);
    if ((int)uVar5 < (int)uVar1) {
      uVar5 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0xcc) = uVar5;
  pvVar3 = *(void **)((longlong)param_1 + 0xc0);
  if (uVar5 < 9) {
    if (pvVar3 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar3,(longlong)param_2 * 0x18);
    pvVar3 = *(void **)((longlong)param_1 + 0xc0);
    if (pvVar3 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
      if (uVar5 != 0) {
        pvVar3 = (void *)FMemory::Realloc(0,(longlong)(int)uVar5 * 0x18,0);
        *(void **)((longlong)param_1 + 0xc0) = pvVar3;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar3,param_1,(longlong)param_2 * 0x18);
      return;
    }
    lVar6 = (longlong)(int)uVar5 * 0x18;
  }
  uVar4 = FMemory::Realloc(pvVar3,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0xc0) = uVar4;
  return;
}



// FUNCTION 1415b55f0 ResizeGrow body=140 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FCompactPose,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x68);
  uVar3 = 4;
  if (4 < uVar1) {
    if ((*(int *)(param_1 + 0x6c) != 0) || (4 < uVar1)) {
      uVar3 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar2 = FMemory::QuantizeSize(uVar3 * 0x18,0);
    uVar3 = uVar2 / 0x18 & 0xffffffff;
    if ((int)(uVar2 / 0x18) < (int)uVar1) {
      uVar3 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x6c) = (int)uVar3;
  TInlineAllocator<4,FDefaultAllocator>::ForElementType<FCompactPose>::ResizeAllocation
            (param_1,param_2,uVar3,0x18);
  return;
}



// FUNCTION 1415b5680 ResizeGrow body=138 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FProgramCounterSymbolInfo,FDefaultAllocator>::ResizeGrow(longlong *param_1)

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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0xc18,0);
  iVar4 = (int)(uVar3 / 0xc18);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0xc18,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 1415b5710 ResizeGrow body=138 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FStackWalkModuleInfo,FDefaultAllocator>::ResizeGrow(longlong *param_1)

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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x468,0);
  iVar4 = (int)(uVar3 / 0x468);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x468,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 1415b57a0 ResizeTo body=101 status=ok
// SIG undefined ResizeTo(void)

void TArray<FMovieSceneSequenceID,TInlineAllocator<16,FDefaultAllocator>_>::ResizeTo
               (longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x11) {
      iVar1 = 0x10;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 2,0);
      iVar1 = (int)(uVar2 >> 2);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *(int *)(param_1 + 0x4c)) {
    *(int *)(param_1 + 0x4c) = iVar1;
    FUN_140717b50(param_1,*(undefined4 *)(param_1 + 0x48),iVar1,4);
  }
  return;
}



// FUNCTION 1415b5810 ResizeTo body=118 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<560,8>_>,FDefaultAllocator>::ResizeTo
               (longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x230,0);
    iVar3 = (int)(uVar1 / 0x230);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x230,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 1415b5890 ResizeTo body=118 status=ok
// SIG undefined ResizeTo(void)

void TArray<TAttributeArrayContainer<int>::FChunk,TSizedDefaultAllocator<32>_>::ResizeTo
               (longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0xc18,0);
    iVar3 = (int)(uVar1 / 0xc18);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0xc18,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 1415b5910 FUN_1415b5910 body=178 status=ok
// SIG undefined FUN_1415b5910(void)

void FUN_1415b5910(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (param_1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*param_1 + 8))();
    if (cVar2 == '\0') {
      uVar4 = FUN_1415a8b50();
    }
    else {
      uVar4 = FUN_1415a8ad0();
    }
    plVar1 = (longlong *)param_1[2];
    lVar5 = 0;
    param_1[2] = 0;
    *param_1 = (longlong)&PTR__purecall_144ca0288;
    FMemory::operator_delete(param_1,0x18);
    (**(code **)(*plVar1 + 0x18))(plVar1);
    uVar3 = FLockFreeLinkPolicy::AllocLockFreeLink();
    if (uVar3 != 0) {
      lVar5 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
    }
    *(longlong **)(lVar5 + 8) = plVar1;
    FLockFreePointerListLIFORoot<128,1>::Push(uVar4);
  }
  return;
}



// FUNCTION 1415b59d0 FUN_1415b59d0 body=1927 status=ok
// SIG undefined FUN_1415b59d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 * FUN_1415b59d0(void)

{
  bool bVar1;
  longlong lVar2;
  wint_t wVar3;
  wint_t wVar4;
  int iVar5;
  int iVar6;
  wchar_t *pwVar7;
  undefined8 *puVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  wint_t *pwVar12;
  wchar_t *pwVar13;
  undefined2 *puVar14;
  int iVar15;
  uint uVar16;
  wchar_t *pwVar17;
  wchar_t *pwVar18;
  wchar_t *local_58;
  uint local_50;
  int local_4c;
  wchar_t *local_48;
  undefined8 local_40;
  wchar_t *local_38;
  ulonglong local_30;
  
  pwVar18 = (wchar_t *)0x0;
  iVar9 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468b1450) && (_Init_thread_header(&DAT_1468b1450), DAT_1468b1450 == -1))
  {
    atexit((_func_5014 *)&LAB_143e75f60);
    _Init_thread_footer(&DAT_1468b1450);
  }
  if ((DAT_1468b1448 != 0) && (DAT_1468b1448 != 1)) goto LAB_1415b6108;
  FPaths::EngineDir(&local_58);
  iVar5 = FUN_141592950(&local_58,L"/Engine",1,1,0xffffffff);
  iVar15 = 0;
  if (iVar5 == -1) {
    pwVar7 = (wchar_t *)FUN_1416ac480();
    if (local_58 != pwVar7) {
      pwVar17 = pwVar18;
      if ((pwVar7 != (wchar_t *)0x0) && (*pwVar7 != L'\0')) {
        lVar11 = -1;
        do {
          lVar11 = lVar11 + 1;
        } while (pwVar7[lVar11] != L'\0');
        pwVar17 = (wchar_t *)(ulonglong)((int)lVar11 + 1);
      }
      local_50 = 0;
      iVar5 = (int)pwVar17;
      pwVar13 = pwVar18;
      if (local_4c != iVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58,pwVar17);
        pwVar13 = (wchar_t *)(ulonglong)local_50;
      }
      local_50 = iVar5 + (int)pwVar13;
      if (local_4c < (int)local_50) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58);
      }
      if (iVar5 != 0) {
        _guard_xfg_dispatch_icall_nop(local_58,pwVar7,(longlong)iVar5 * 2);
      }
    }
    if (local_50 == 0) {
      pwVar7 = L"";
      iVar5 = iVar9;
    }
    else {
      pwVar7 = local_58;
      iVar5 = local_50 - 1;
    }
    local_38 = (wchar_t *)0x0;
    local_30 = 0;
    iVar6 = iVar5;
    if (1 < iVar5) {
      iVar6 = 1;
    }
    pwVar7 = pwVar7 + ((longlong)iVar5 - (longlong)iVar6);
    pwVar17 = pwVar18;
    if ((pwVar7 != (wchar_t *)0x0) && (*pwVar7 != L'\0')) {
      lVar11 = -1;
      do {
        lVar11 = lVar11 + 1;
      } while (pwVar7[lVar11] != L'\0');
      uVar10 = (int)lVar11 + 1;
      local_30 = (ulonglong)uVar10;
      uVar16 = uVar10;
      if (0 < (int)uVar10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
        uVar16 = (uint)local_30;
      }
      pwVar13 = local_38;
      _guard_xfg_dispatch_icall_nop(local_38,pwVar7,(longlong)(int)uVar10 * 2);
      pwVar17 = pwVar13;
      if (uVar16 != 0) goto LAB_1415b5b94;
    }
    pwVar13 = L"";
LAB_1415b5b94:
    pwVar12 = &DAT_144c97364;
    do {
      wVar3 = *(wint_t *)((longlong)(pwVar13 + -0xa264b9b2) + (longlong)pwVar12);
      if ((wVar3 == 0) && (iVar5 = iVar15, *pwVar12 == 0)) goto LAB_1415b5bde;
      if (wVar3 != *pwVar12) {
        wVar3 = towlower(wVar3);
        wVar4 = towlower(*pwVar12);
        if (wVar3 != wVar4) goto LAB_1415b5bd6;
      }
      pwVar12 = pwVar12 + 1;
    } while( true );
  }
  iVar5 = iVar5 + 1;
  if (local_50 == 0) goto LAB_1415b5ce4;
  iVar9 = local_50 - 1;
  pwVar7 = local_58;
LAB_1415b5cea:
  if ((-1 < iVar5) && (iVar15 = iVar9, iVar5 < iVar9)) {
    iVar15 = iVar5;
  }
  local_48 = (wchar_t *)0x0;
  uVar16 = iVar15 + 1;
  if (iVar15 == 0) {
    uVar16 = 0;
  }
  local_40 = (wchar_t *)(ulonglong)uVar16;
  if (0 < (int)uVar16) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    pwVar18 = local_48;
    uVar16 = (uint)local_40;
    if (0 < (int)(uint)local_40) {
      wcsncpy(local_48,pwVar7,(longlong)iVar15);
      pwVar18[iVar15] = L'\0';
    }
  }
  if (local_58 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  local_4c = local_40._4_4_;
  pwVar17 = pwVar18;
  iVar9 = local_4c;
  goto LAB_1415b606d;
LAB_1415b5f92:
  if (wVar3 == wVar4) {
LAB_1415b5fa6:
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((pwVar18 != (wchar_t *)0x0) && (pwVar18 = (wchar_t *)0x0, pwVar7 != (wchar_t *)0x0)) {
    FMemory::Free();
  }
  pwVar17 = local_58;
  uVar16 = local_50;
  iVar9 = local_4c;
  if (!bVar1) goto LAB_1415b606d;
  if (local_50 == 0) {
    pwVar17 = L"";
    uVar16 = 0;
  }
  else {
    uVar16 = local_50 - 1;
  }
  local_48 = (wchar_t *)0x0;
  iVar9 = 0;
  if (-1 < (int)(uVar16 - 1)) {
    iVar9 = uVar16 - 1;
  }
  uVar16 = iVar9 + 1;
  if (iVar9 == 0) {
    uVar16 = 0;
  }
  local_40 = (wchar_t *)(ulonglong)uVar16;
  pwVar13 = local_48;
  if (0 < (int)uVar16) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    pwVar13 = local_48;
    uVar16 = (uint)local_40;
    if (0 < (int)(uint)local_40) {
      wcsncpy(local_48,pwVar17,(longlong)iVar9);
      pwVar13[iVar9] = L'\0';
    }
  }
  if (local_58 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  local_4c = local_40._4_4_;
  local_40 = (wchar_t *)0x0;
  local_48 = (wchar_t *)0x0;
  local_58 = pwVar13;
  local_50 = uVar16;
  goto LAB_1415b5ec0;
LAB_1415b5bd6:
  iVar5 = (uint)wVar3 - (uint)wVar4;
LAB_1415b5bde:
  if (pwVar17 != (wchar_t *)0x0) {
    FMemory::Free(pwVar17);
  }
  if (iVar5 == 0) {
    if (local_50 == 0) {
      pwVar7 = L"";
      iVar5 = iVar9;
    }
    else {
      pwVar7 = local_58;
      iVar5 = local_50 - 1;
    }
    local_48 = (wchar_t *)0x0;
    iVar6 = iVar15;
    if (-1 < iVar5 + -1) {
      iVar6 = iVar5 + -1;
    }
    uVar16 = iVar6 + 1;
    if (iVar6 == 0) {
      uVar16 = 0;
    }
    local_40 = (wchar_t *)(ulonglong)uVar16;
    pwVar17 = pwVar18;
    if (0 < (int)uVar16) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      pwVar17 = local_48;
      uVar16 = (uint)local_40;
      if (0 < (int)(uint)local_40) {
        wcsncpy(local_48,pwVar7,(longlong)iVar6);
        pwVar17[iVar6] = L'\0';
      }
    }
    if (local_58 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    local_4c = local_40._4_4_;
    local_58 = pwVar17;
    local_50 = uVar16;
  }
  FString::PrintfImpl(&local_38,L"/%s/Binaries",&DAT_146299580);
  pwVar7 = L"";
  if ((uint)local_30 != 0) {
    pwVar7 = local_38;
  }
  iVar5 = FUN_141592950(&local_58,pwVar7,1,0,0xffffffff);
  if (local_38 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (iVar5 != -1) {
    iVar5 = iVar5 + 1;
    if (local_50 == 0) {
LAB_1415b5ce4:
      pwVar7 = L"";
    }
    else {
      iVar9 = local_50 - 1;
      pwVar7 = local_58;
    }
    goto LAB_1415b5cea;
  }
  iVar9 = FUN_141592950(&local_58,L"/../Binaries",1,1,0xffffffff);
  pwVar7 = local_38;
  if (iVar9 == -1) {
LAB_1415b5ec0:
    if ((local_50 != 0) && (iVar9 = local_50 - 1, iVar9 != 0)) {
      local_38 = (wchar_t *)0x0;
      pwVar18 = (wchar_t *)0x1;
      local_30 = 0;
      lVar11 = (longlong)iVar9;
      if (1 < iVar9) {
        iVar9 = 1;
      }
      pwVar17 = local_58 + (lVar11 - iVar9);
      pwVar7 = (wchar_t *)0x0;
      if ((pwVar17 != (wchar_t *)0x0) && (*pwVar17 != L'\0')) {
        lVar11 = -1;
        do {
          lVar2 = lVar11 + 1;
          lVar11 = lVar11 + 1;
        } while (pwVar17[lVar2] != L'\0');
        uVar10 = (int)lVar11 + 1;
        local_30 = (ulonglong)uVar10;
        uVar16 = uVar10;
        if (0 < (int)uVar10) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
          uVar16 = (uint)local_30;
        }
        pwVar13 = local_38;
        _guard_xfg_dispatch_icall_nop(local_38,pwVar17,(longlong)(int)uVar10 * 2);
        pwVar7 = pwVar13;
        if (uVar16 != 0) goto LAB_1415b5f55;
      }
      pwVar13 = L"";
LAB_1415b5f55:
      pwVar12 = &DAT_144c97694;
      do {
        wVar3 = *(wint_t *)((longlong)(pwVar13 + -0xa264bb4a) + (longlong)pwVar12);
        if ((wVar3 == 0) && (*pwVar12 == 0)) break;
        if (wVar3 != *pwVar12) {
          wVar3 = towlower(wVar3);
          wVar4 = towlower(*pwVar12);
          if (wVar3 != wVar4) goto LAB_1415b5f92;
        }
        pwVar12 = pwVar12 + 1;
      } while( true );
    }
    goto LAB_1415b5fa6;
  }
  iVar9 = iVar9 + 1;
  if (local_50 == 0) {
    pwVar18 = L"";
    iVar15 = 0;
  }
  else {
    iVar15 = local_50 - 1;
    pwVar18 = local_58;
  }
  local_40 = (wchar_t *)0x0;
  iVar5 = 0;
  if ((-1 < iVar9) && (iVar5 = iVar15, iVar9 < iVar15)) {
    iVar5 = iVar9;
  }
  local_48 = (wchar_t *)0x0;
  pwVar7 = (wchar_t *)(ulonglong)(iVar5 + 1);
  if (iVar5 == 0) {
    pwVar7 = local_40;
  }
  pwVar17 = local_40;
  if ((int)pwVar7 < 1) {
LAB_1415b5e0a:
    local_40._4_4_ = (int)local_40;
  }
  else {
    local_40 = pwVar7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    pwVar17 = local_48;
    pwVar7 = (wchar_t *)((ulonglong)local_40 & 0xffffffff);
    if ((int)(uint)local_40 < 1) {
      local_40 = (wchar_t *)((ulonglong)local_40 >> 0x20);
      goto LAB_1415b5e0a;
    }
    wcsncpy(local_48,pwVar18,(longlong)iVar5);
    pwVar17[iVar5] = L'\0';
  }
  local_40._0_4_ = (uint)pwVar7;
  local_48 = pwVar17;
  if (local_40._4_4_ < (int)((uint)local_40 + 6 + (uint)((uint)local_40 == 0))) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48);
    pwVar7 = (wchar_t *)(ulonglong)(uint)local_40;
  }
  iVar15 = (int)pwVar7;
  uVar16 = (7 - (uint)(iVar15 != 0)) + iVar15;
  local_40 = (wchar_t *)CONCAT44(local_40._4_4_,uVar16);
  iVar9 = local_40._4_4_;
  if (local_40._4_4_ < (int)uVar16) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,pwVar7);
    uVar16 = (uint)local_40;
    iVar9 = local_40._4_4_;
  }
  pwVar17 = local_48;
  builtin_wcsncpy(local_48 + ((longlong)iVar15 - (ulonglong)(iVar15 != 0)),L"../../",7);
  if (local_58 != (wchar_t *)0x0) {
    FMemory::Free();
  }
LAB_1415b606d:
  local_4c = iVar9;
  local_50 = uVar16;
  local_58 = pwVar17;
  puVar8 = (undefined8 *)FPaths::ConvertRelativePathToFull(&local_38,&local_58);
  if ((undefined2 **)puVar8 != &DAT_1468b1440) {
    if (DAT_1468b1440 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    DAT_1468b1440 = (undefined2 *)*puVar8;
    *puVar8 = 0;
    DAT_1468b1448 = *(int *)(puVar8 + 1);
    _DAT_1468b144c = *(undefined4 *)((longlong)puVar8 + 0xc);
    puVar8[1] = 0;
  }
  if (local_38 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  FPaths::RemoveDuplicateSlashes(&DAT_1468b1440);
  if (local_58 != (wchar_t *)0x0) {
    FMemory::Free();
  }
LAB_1415b6108:
  puVar14 = &DAT_143f3eda8;
  if (DAT_1468b1448 != 0) {
    puVar14 = DAT_1468b1440;
  }
  return puVar14;
}



// FUNCTION 1415b6160 SRand body=57 status=ok
// SIG undefined SRand(void)

float FGenericPlatformMath::SRand(void)

{
  float fVar1;
  
  DAT_1468b1114 = DAT_1468b1114 * 0xbb38435 + 0x3619636b;
  fVar1 = (float)(DAT_1468b1114 & 0x7fffff | 0x3f800000);
  return fVar1 - (float)(int)fVar1;
}



// FUNCTION 1415b61a0 FUN_1415b61a0 body=7 status=ok
// SIG undefined FUN_1415b61a0(void)

void FUN_1415b61a0(undefined4 param_1)

{
  DAT_1468b1114 = param_1;
  return;
}



// FUNCTION 1415b61b0 FUN_1415b61b0 body=1728 status=ok
// SIG undefined FUN_1415b61b0(void)

/* WARNING: Removing unreachable block (ram,0x0001415b670d) */
/* WARNING: Removing unreachable block (ram,0x0001415b652f) */

void FUN_1415b61b0(void)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  DWORD DVar8;
  BOOL BVar9;
  LPVOID pvVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint *puVar18;
  longlong *local_1b8;
  undefined8 local_1b0;
  longlong *local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  undefined8 local_190;
  longlong local_188;
  undefined8 local_180;
  int local_178;
  uint uStack_174;
  undefined *puStack_170;
  undefined4 local_168;
  int iStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  int local_158;
  uint uStack_154;
  undefined *puStack_150;
  undefined4 local_148;
  int iStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  longlong *local_138;
  undefined8 uStack_130;
  undefined *local_128;
  uint uStack_120;
  int iStack_11c;
  undefined8 local_118;
  longlong *local_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  uint uStack_f8;
  int iStack_f4;
  undefined8 uStack_f0;
  undefined1 *local_e8 [2];
  longlong local_d8 [4];
  longlong *local_b8;
  int local_a8;
  int local_88;
  int iStack_84;
  int local_68;
  int iStack_64;
  undefined1 local_58 [32];
  
  if ((DAT_1464a8598 != DAT_1464a85c4) || (DAT_1464a85e8 != DAT_1464a8614)) {
    if (((DAT_1468e2448 == 0) || (pvVar10 = TlsGetValue(DAT_1468e2448), (int)pvVar10 == 0)) &&
       ((DAT_1468c21ae != '\0' && (DVar8 = GetCurrentThreadId(), DVar8 != DAT_1468c21c0)))) {
      local_b8 = (longlong *)0x0;
      local_a8 = 0;
      puVar11 = (undefined8 *)FUN_140438ef0(0x10,local_d8);
      if (puVar11 != (undefined8 *)0x0) {
        *puVar11 = &PTR_FUN_143f3f130;
      }
      local_e8[0] = &LAB_1415a4070;
      plVar12 = (longlong *)FUN_140596960(local_58,0,0xff);
      lVar13 = *plVar12;
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(lVar13 + 0x10,local_e8);
      *(undefined4 *)(lVar13 + 0x60) = 2;
      lVar13 = *plVar12;
      lVar6 = plVar12[2];
      lVar3 = plVar12[1];
      lVar4 = *(longlong *)(lVar13 + 0x78);
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
        UNLOCK();
      }
      FUN_1405ab110(lVar13,lVar3,(int)lVar6,1);
      if (local_a8 != 0) {
        plVar12 = local_d8;
        if (local_b8 != (longlong *)0x0) {
          plVar12 = local_b8;
        }
        if (plVar12 != (longlong *)0x0) {
          (**(code **)(*plVar12 + 0x10))(plVar12,0);
        }
      }
      if (local_b8 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (lVar4 != 0) {
        LOCK();
        piVar1 = (int *)(lVar4 + 0x48);
        iVar16 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar16 == 1) {
          FGraphEvent::Recycle(lVar4);
        }
      }
    }
    else {
      lVar13 = FUN_1415dcd20();
      if (lVar13 != 0) {
        FUN_1415e70c0(lVar13);
      }
      BVar9 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0df0);
      if (BVar9 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0df0);
      }
      iVar16 = 0;
      local_1a8 = (longlong *)0x0;
      local_1a0 = 0;
      if (0 < DAT_1464a8598 - DAT_1464a85c4) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_1a8);
      }
      uStack_174 = 1;
      local_178 = 0;
      puStack_170 = &DAT_1464a85a0;
      iStack_164 = 0;
      iStack_160 = 0;
      iVar17 = (int)DAT_1464a85b8;
      if (iVar17 != 0) {
        puVar18 = DAT_1464a85b0;
        if (DAT_1464a85b0 == (uint *)0x0) {
          puVar18 = (uint *)&DAT_1464a85a0;
        }
        uVar2 = *puVar18;
        iStack_160 = iVar16;
        local_178 = iVar16;
        while (uVar2 == 0) {
          lVar13 = (longlong)local_178;
          iStack_160 = iStack_160 + 0x20;
          iVar15 = local_178 + 1;
          bVar5 = (int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_178;
          local_178 = iVar15;
          if (bVar5) goto LAB_1415b644b;
          uVar2 = puVar18[lVar13 + 1];
        }
        uStack_174 = -uVar2 & uVar2;
        iVar15 = 0x1f;
        if (uStack_174 != 0) {
          for (; uStack_174 >> iVar15 == 0; iVar15 = iVar15 + -1) {
          }
        }
        if (uStack_174 == 0) {
          iVar15 = 0x20;
        }
        else {
          iVar15 = 0x1f - iVar15;
        }
        iStack_164 = (iStack_160 - iVar15) + 0x1f;
        if (iVar17 < iStack_164) {
LAB_1415b644b:
          iStack_164 = iVar17;
        }
      }
      local_168 = 0xffffffff;
      uStack_108 = CONCAT44(uStack_174,local_178);
      uStack_120 = 0xffffffff;
      iStack_11c = iStack_164;
      local_118 = CONCAT44(uStack_15c,iStack_160);
      local_110 = (longlong *)&DAT_1464a8590;
      puStack_100 = &DAT_1464a85a0;
      local_88 = -1 << ((byte)DAT_1464a85b8 & 0x1f);
      local_138 = (longlong *)&DAT_1464a8590;
      uStack_130 = CONCAT44(uStack_174,local_178);
      local_128 = &DAT_1464a85a0;
      uStack_f0 = local_118;
      iStack_84 = iVar17;
      uStack_f8 = uStack_120;
      iStack_f4 = iStack_11c;
      while (((iStack_11c != iVar17 || (local_128 != &DAT_1464a85a0)) ||
             (local_138 != (longlong *)&DAT_1464a8590))) {
        FString::PrintfImpl(&local_198,&DAT_144ca0198,
                            *(undefined4 *)(*local_138 + (longlong)iStack_11c * 0xc));
        uVar7 = local_1a0;
        lVar13 = (longlong)(int)local_1a0;
        iVar15 = (int)local_1a0 + 1;
        local_1a0 = CONCAT44(local_1a0._4_4_,iVar15);
        if (local_1a0._4_4_ < iVar15) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_1a8,uVar7 & 0xffffffff);
        }
        plVar12 = local_1a8 + lVar13 * 2;
        *plVar12 = 0;
        *plVar12 = local_198;
        *(undefined4 *)(plVar12 + 1) = (undefined4)local_190;
        *(undefined4 *)((longlong)plVar12 + 0xc) = local_190._4_4_;
        local_190 = 0;
        local_198 = 0;
        uStack_120 = uStack_120 & ~uStack_130._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_130);
      }
      local_1b8 = (longlong *)0x0;
      local_1b0 = 0;
      if (0 < DAT_1464a85e8 - DAT_1464a8614) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_1b8);
      }
      uStack_154 = 1;
      local_158 = 0;
      puStack_150 = &DAT_1464a85f0;
      iStack_144 = 0;
      iStack_140 = 0;
      iVar17 = (int)DAT_1464a8608;
      if (iVar17 != 0) {
        puVar18 = DAT_1464a8600;
        if (DAT_1464a8600 == (uint *)0x0) {
          puVar18 = (uint *)&DAT_1464a85f0;
        }
        uVar2 = *puVar18;
        iStack_140 = iVar16;
        local_158 = iVar16;
        while (uVar2 == 0) {
          lVar13 = (longlong)local_158;
          iStack_140 = iStack_140 + 0x20;
          iVar16 = local_158 + 1;
          bVar5 = (int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_158;
          local_158 = iVar16;
          if (bVar5) goto LAB_1415b6618;
          uVar2 = puVar18[lVar13 + 1];
        }
        uStack_154 = -uVar2 & uVar2;
        iVar16 = 0x1f;
        if (uStack_154 != 0) {
          for (; uStack_154 >> iVar16 == 0; iVar16 = iVar16 + -1) {
          }
        }
        if (uStack_154 == 0) {
          iVar16 = 0x20;
        }
        else {
          iVar16 = 0x1f - iVar16;
        }
        iStack_144 = (iStack_140 - iVar16) + 0x1f;
        if (iVar17 < iStack_144) {
LAB_1415b6618:
          iStack_144 = iVar17;
        }
      }
      local_148 = 0xffffffff;
      uStack_130 = CONCAT44(uStack_154,local_158);
      uStack_f8 = 0xffffffff;
      iStack_f4 = iStack_144;
      local_118 = CONCAT44(uStack_13c,iStack_140);
      local_68 = -1 << ((byte)DAT_1464a8608 & 0x1f);
      local_128 = &DAT_1464a85f0;
      local_138 = &DAT_1464a85e0;
      local_110 = &DAT_1464a85e0;
      uStack_108 = CONCAT44(uStack_154,local_158);
      puStack_100 = &DAT_1464a85f0;
      uStack_f0 = local_118;
      iStack_64 = iVar17;
      uStack_120 = uStack_f8;
      iStack_11c = iStack_f4;
      while (((iStack_f4 != iVar17 || (puStack_100 != &DAT_1464a85f0)) ||
             (local_110 != &DAT_1464a85e0))) {
        FString::PrintfImpl(&local_188,&DAT_144ca0198,
                            *(undefined4 *)(*local_110 + (longlong)iStack_f4 * 0x10));
        uVar7 = local_1b0;
        lVar13 = (longlong)(int)local_1b0;
        iVar16 = (int)local_1b0 + 1;
        local_1b0 = CONCAT44(local_1b0._4_4_,iVar16);
        if (local_1b0._4_4_ < iVar16) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_1b8,uVar7 & 0xffffffff);
        }
        plVar12 = local_1b8 + lVar13 * 2;
        *plVar12 = 0;
        *plVar12 = local_188;
        *(undefined4 *)(plVar12 + 1) = (undefined4)local_180;
        *(undefined4 *)((longlong)plVar12 + 0xc) = local_180._4_4_;
        local_180 = 0;
        local_188 = 0;
        uStack_f8 = uStack_f8 & ~uStack_108._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_108);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0df0);
      uVar14 = FUN_14162b4e0();
      FConfigCacheIni::SetString
                (DAT_1468b6148,PTR_u_GbxCallstackReporting_1464a8380,L"BuildVersion",uVar14,
                 &DAT_1468b0e28);
      FUN_1416595e0(DAT_1468b6148,PTR_u_GbxCallstackReporting_1464a8380,L"StackHashes",&local_1a8,
                    &DAT_1468b0e28);
      FUN_1416595e0(DAT_1468b6148,PTR_u_GbxCallstackReporting_1464a8380,L"ScriptHashes",&local_1b8,
                    &DAT_1468b0e28);
      FConfigCacheIni::Flush(DAT_1468b6148,0,&DAT_1468b0e28);
      plVar12 = local_1b8;
      for (iVar16 = (int)local_1b0; iVar16 != 0; iVar16 = iVar16 + -1) {
        if (*plVar12 != 0) {
          FMemory::Free();
        }
        plVar12 = plVar12 + 2;
      }
      if (local_1b8 != (longlong *)0x0) {
        FMemory::Free(local_1b8);
      }
      plVar12 = local_1a8;
      for (iVar16 = (int)local_1a0; iVar16 != 0; iVar16 = iVar16 + -1) {
        if (*plVar12 != 0) {
          FMemory::Free();
        }
        plVar12 = plVar12 + 2;
      }
      if (local_1a8 != (longlong *)0x0) {
        FMemory::Free(local_1a8);
      }
      lVar13 = FUN_1415dcd20();
      if (lVar13 != 0) {
        FUN_1415e5410(lVar13);
      }
    }
  }
  return;
}



// FUNCTION 1415b6870 SerializeAsXML body=63 status=ok
// SIG undefined SerializeAsXML(void)

void FGenericCrashContext::SerializeAsXML(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1415b68b0();
  uVar1 = FUN_1415c3d50();
  FUN_14167efa0(param_1 + 0x10,param_2,0,uVar1,0);
  return;
}



// FUNCTION 1415b68b0 FUN_1415b68b0 body=4342 status=ok
// SIG undefined FUN_1415b68b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1415b68b0(longlong *param_1)

{
  void *_Src;
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  DWORD DVar5;
  AKRESULT AVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  ErrorLevel EVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  undefined2 *puVar18;
  wchar_t *_Src_00;
  wchar_t *pwVar19;
  uint uVar20;
  longlong lVar21;
  undefined8 *puVar22;
  undefined1 auStackY_198 [32];
  ulong uVar23;
  undefined1 in_stack_fffffffffffffe90;
  undefined2 *local_168;
  ulonglong local_160;
  uint local_158;
  undefined1 local_154 [28];
  undefined1 local_138 [256];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStackY_198;
  uVar23 = *(ulong *)(param_1 + 4);
  puVar18 = (undefined2 *)0x0;
  local_158 = 0;
  puVar17 = &DAT_143f3eda8;
  if (DAT_1468b1048 != 0) {
    puVar17 = DAT_1468b1040;
  }
  TCString<wchar_t>::SnprintfImpl(local_138,0x80,L"%s_%04i");
  iVar13 = (int)param_1[3];
  iVar4 = (0x29 - (uint)(iVar13 != 0)) + iVar13;
  *(int *)(param_1 + 3) = iVar4;
  if (*(int *)((longlong)param_1 + 0x1c) < iVar4) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar13);
  }
  lVar21 = param_1[2];
  lVar7 = (longlong)iVar13 - (ulonglong)(iVar13 != 0);
  builtin_wcsncpy((wchar_t *)(lVar21 + lVar7 * 2),L"<?xml ve",8);
  builtin_wcsncpy((wchar_t *)(lVar21 + 0x10 + lVar7 * 2),L"rsion=\"1",8);
  builtin_wcsncpy((wchar_t *)(lVar21 + 0x20 + lVar7 * 2),L".0\" enco",8);
  builtin_wcsncpy((wchar_t *)(lVar21 + 0x30 + lVar7 * 2),L"ding=\"UT",8);
  builtin_wcsncpy((wchar_t *)(lVar21 + 0x40 + lVar7 * 2),L"F-8\"?>\r\n",8);
  *(undefined2 *)(lVar21 + 0x50 + lVar7 * 2) = 0;
  FUN_1415a3bc0(param_1,L"FGenericCrashContext");
  puVar16 = &DAT_143f3eda8;
  if (DAT_1464a8688 != 0) {
    puVar16 = DAT_1464a8680;
  }
  FUN_1415a3bc0(param_1,puVar16);
  FString::PrintfImpl(&local_168,&DAT_1440da628,3);
  puVar16 = &DAT_143f3eda8;
  if ((uint)local_160 != 0) {
    puVar16 = local_168;
  }
  FUN_1415a2820(param_1,L"CrashVersion",puVar16);
  if (local_168 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FUN_1415a2820(param_1,L"CrashGUID",local_138);
  DVar5 = FWindowsPlatformProcess::GetCurrentProcessId();
  FString::PrintfImpl(&local_168,&DAT_144ca0198,DVar5);
  puVar16 = &DAT_143f3eda8;
  if ((uint)local_160 != 0) {
    puVar16 = local_168;
  }
  FUN_1415a2820(param_1,L"ProcessId",puVar16);
  if (local_168 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  _Src_00 = L"false";
  pwVar19 = L"false";
  local_160 = 0;
  if (DAT_1468b0ded != '\0') {
    pwVar19 = L"true";
  }
  local_168 = (undefined2 *)0x0;
  lVar21 = -1;
  puVar16 = puVar18;
  if (*pwVar19 == L'\0') {
LAB_1415b6ae1:
    puVar15 = &DAT_143f3eda8;
  }
  else {
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (pwVar19[lVar7] != L'\0');
    uVar12 = (int)lVar7 + 1;
    local_160 = (ulonglong)uVar12;
    if (0 < (int)uVar12) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,0);
    }
    puVar16 = local_168;
    _guard_xfg_dispatch_icall_nop(local_168,pwVar19,(longlong)(int)uVar12 * 2);
    puVar15 = puVar16;
    if ((uint)local_160 == 0) goto LAB_1415b6ae1;
  }
  FUN_1415a2820(param_1,L"IsInternalBuild",puVar15);
  if (puVar16 != (undefined2 *)0x0) {
    FMemory::Free(puVar16);
  }
  pwVar19 = L"false";
  local_160 = 0;
  if (DAT_1468b0dee != '\0') {
    pwVar19 = L"true";
  }
  local_168 = (undefined2 *)0x0;
  puVar16 = puVar18;
  if (*pwVar19 == L'\0') {
LAB_1415b6b71:
    puVar15 = &DAT_143f3eda8;
  }
  else {
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (pwVar19[lVar7] != L'\0');
    uVar12 = (int)lVar7 + 1;
    local_160 = (ulonglong)uVar12;
    if (0 < (int)uVar12) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,0);
    }
    puVar16 = local_168;
    _guard_xfg_dispatch_icall_nop(local_168,pwVar19,(longlong)(int)uVar12 * 2);
    puVar15 = puVar16;
    if ((uint)local_160 == 0) goto LAB_1415b6b71;
  }
  FUN_1415a2820(param_1,L"IsPerforceBuild",puVar15);
  if (puVar16 != (undefined2 *)0x0) {
    FMemory::Free(puVar16);
  }
  pwVar19 = L"false";
  local_160 = 0;
  if (DAT_1468b0def != '\0') {
    pwVar19 = L"true";
  }
  local_168 = (undefined2 *)0x0;
  puVar16 = puVar18;
  if (*pwVar19 == L'\0') {
LAB_1415b6c01:
    puVar15 = &DAT_143f3eda8;
  }
  else {
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (pwVar19[lVar7] != L'\0');
    uVar12 = (int)lVar7 + 1;
    local_160 = (ulonglong)uVar12;
    if (0 < (int)uVar12) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,0);
    }
    puVar16 = local_168;
    _guard_xfg_dispatch_icall_nop(local_168,pwVar19,(longlong)(int)uVar12 * 2);
    puVar15 = puVar16;
    if ((uint)local_160 == 0) goto LAB_1415b6c01;
  }
  FUN_1415a2820(param_1,L"IsSourceDistribution",puVar15);
  if (puVar16 != (undefined2 *)0x0) {
    FMemory::Free(puVar16);
  }
  FGenericCrashContext::AddCrashProperty<bool>(param_1,L"IsEnsure",param_1 + 1);
  cVar1 = FUN_14162d250();
  local_160 = 0;
  pwVar19 = L"false";
  if (cVar1 != '\0') {
    pwVar19 = L"true";
  }
  local_168 = (undefined2 *)0x0;
  puVar16 = puVar18;
  if (*pwVar19 == L'\0') {
LAB_1415b6ca1:
    puVar15 = &DAT_143f3eda8;
  }
  else {
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (pwVar19[lVar7] != L'\0');
    uVar12 = (int)lVar7 + 1;
    local_160 = (ulonglong)uVar12;
    if (0 < (int)uVar12) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,0);
    }
    puVar16 = local_168;
    _guard_xfg_dispatch_icall_nop(local_168,pwVar19,(longlong)(int)uVar12 * 2);
    puVar15 = puVar16;
    if ((uint)local_160 == 0) goto LAB_1415b6ca1;
  }
  FUN_1415a2820(param_1,L"IsAssert",puVar15);
  if (puVar16 != (undefined2 *)0x0) {
    FMemory::Free(puVar16);
  }
  cVar1 = DAT_1468e222a;
  cVar2 = FUN_14162d250();
  puVar16 = &DAT_143f3eda8;
  if (cVar1 == '\0') {
    if ((char)param_1[1] == '\0') {
      if (cVar2 == '\0') {
        if (DAT_1464a86d8 != 0) {
          puVar16 = DAT_1464a86d0;
        }
      }
      else if (DAT_1464a86e8 != 0) {
        puVar16 = DAT_1464a86e0;
      }
    }
    else if (DAT_1464a86f8 != 0) {
      puVar16 = DAT_1464a86f0;
    }
  }
  else if (DAT_1464a8708 != 0) {
    puVar16 = DAT_1464a8700;
  }
  FUN_1415a2820(param_1,L"CrashType",puVar16);
  FString::PrintfImpl(&local_168,&DAT_1440da628,DAT_1468b110c);
  puVar16 = &DAT_143f3eda8;
  if ((uint)local_160 != 0) {
    puVar16 = local_168;
  }
  FUN_1415a2820(param_1,L"SecondsSinceStart",puVar16);
  if (local_168 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  puVar16 = &DAT_143f3eda8;
  if ((int)DAT_1468b0f48 != 0) {
    puVar16 = DAT_1468b0f40;
  }
  FUN_1415a2820(param_1,L"GameName",puVar16);
  EVar11 = 0x44c9b4f8;
  puVar16 = &DAT_143f3eda8;
  if (DAT_1468b0f58 != 0) {
    puVar16 = DAT_1468b0f50;
  }
  uVar14 = (ulong)puVar16;
  plVar10 = param_1;
  FUN_1415a2820();
  AVar6 = AK::Monitor::PostCode
                    ((ErrorCode)plVar10,EVar11,uVar14,(__uint64)puVar17,uVar23,
                     (bool)in_stack_fffffffffffffe90);
  switch(AVar6) {
  case 1:
    pwVar19 = L"Debug";
    break;
  case 2:
    pwVar19 = L"DebugGame";
    break;
  case 3:
    pwVar19 = L"Development";
    break;
  case 4:
    pwVar19 = L"Shipping";
    break;
  case 5:
    pwVar19 = L"Test";
    break;
  case 6:
    pwVar19 = L"Diagnostic";
    break;
  default:
    pwVar19 = L"Unknown";
  }
  FUN_1415a2820(param_1,L"BuildConfiguration",pwVar19);
  puVar17 = &DAT_143f3eda8;
  if (DAT_1468b1068 != 0) {
    puVar17 = DAT_1468b1060;
  }
  FUN_1415a2820(param_1,L"GameSessionID",puVar17);
  puVar17 = &DAT_143f3eda8;
  if (DAT_1468b0f68 != 0) {
    puVar17 = DAT_1468b0f60;
  }
  FUN_1415a2820(param_1,L"PlatformName",puVar17);
  puVar17 = &DAT_143f3eda8;
  if (DAT_1468b0f78 != 0) {
    puVar17 = DAT_1468b0f70;
  }
  FUN_1415a2820(param_1,L"PlatformNameIni",puVar17);
  pwVar19 = L"Commandlet";
  if (DAT_1468b616c == '\0') {
    pwVar19 = L"Game";
  }
  FUN_1415a2820(param_1,L"EngineMode",pwVar19);
  puVar17 = &DAT_143f3eda8;
  if (DAT_1468b0f39 == '\0') {
    if (DAT_1464a8718 != 0) {
      puVar17 = DAT_1464a8710;
    }
  }
  else if (DAT_1468b0f38 == '\0') {
    if (DAT_1464a8728 != 0) {
      puVar17 = DAT_1464a8720;
    }
  }
  else if (DAT_1464a8738 != 0) {
    puVar17 = DAT_1464a8730;
  }
  FUN_1415a2820(param_1,L"EngineModeEx",puVar17);
  puVar17 = &DAT_143f3eda8;
  if (DAT_1468b0f88 != 0) {
    puVar17 = DAT_1468b0f80;
  }
  FUN_1415a2820(param_1,L"DeploymentName",puVar17);
  uVar8 = FEngineVersion::Current();
  puVar9 = (undefined8 *)FEngineVersion::ToString(uVar8,&local_168,4);
  if (*(int *)(puVar9 + 1) == 0) {
    puVar17 = &DAT_143f3eda8;
  }
  else {
    puVar17 = (undefined2 *)*puVar9;
  }
  FUN_1415a2820(param_1,L"EngineVersion",puVar17);
  if (local_168 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  puVar17 = &DAT_143f3eda8;
  if (DAT_1468b1078 != 0) {
    puVar17 = DAT_1468b1070;
  }
  FUN_1415a2820(param_1,L"CommandLine",puVar17);
  FString::PrintfImpl(&local_168,&DAT_1440da628,DAT_1468b1110);
  puVar17 = &DAT_143f3eda8;
  if ((uint)local_160 != 0) {
    puVar17 = local_168;
  }
  FUN_1415a2820(param_1,L"LanguageLCID",puVar17);
  if (local_168 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  puVar17 = &DAT_143f3eda8;
  if (DAT_1468b1038 != 0) {
    puVar17 = DAT_1468b1030;
  }
  FUN_1415a2820(param_1,L"AppDefaultLocale",puVar17);
  uVar8 = FUN_14162b4e0();
  FUN_1415a2820(param_1,L"BuildVersion",uVar8);
  local_160 = 0;
  if (DAT_1468b0f3a != '\0') {
    _Src_00 = L"true";
  }
  local_168 = (undefined2 *)0x0;
  puVar17 = puVar18;
  if (*_Src_00 != L'\0') {
    do {
      lVar21 = lVar21 + 1;
    } while (_Src_00[lVar21] != L'\0');
    uVar20 = (int)lVar21 + 1;
    local_160 = (ulonglong)uVar20;
    uVar12 = uVar20;
    if (0 < (int)uVar20) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,0);
      uVar12 = (uint)local_160;
    }
    puVar17 = local_168;
    _guard_xfg_dispatch_icall_nop(local_168,_Src_00,(longlong)(int)uVar20 * 2);
    puVar16 = puVar17;
    if (uVar12 != 0) goto LAB_1415b707c;
  }
  puVar16 = &DAT_143f3eda8;
LAB_1415b707c:
  FUN_1415a2820(param_1,L"IsUE4Release",puVar16);
  if (puVar17 != (undefined2 *)0x0) {
    FMemory::Free(puVar17);
  }
  if (DAT_1468b0ded == '\0') {
    puVar17 = (undefined2 *)&DAT_144c96b7c;
  }
  else {
    local_158 = 1;
    puVar9 = (undefined8 *)FString::Replace(&DAT_1468b1020,&local_168,&DAT_144c9698c,&DAT_144c968fc)
    ;
    if (*(int *)(puVar9 + 1) == 0) {
      puVar17 = &DAT_143f3eda8;
    }
    else {
      puVar17 = (undefined2 *)*puVar9;
    }
  }
  FUN_1415a2820(param_1,L"UserName",puVar17);
  if (((local_158 & 1) != 0) && (local_168 != (undefined2 *)0x0)) {
    FMemory::Free();
  }
  puVar17 = &DAT_143f3eda8;
  if (DAT_1468b0f98 != 0) {
    puVar17 = DAT_1468b0f90;
  }
  FUN_1415a2820(param_1,L"BaseDir",puVar17);
  puVar17 = &DAT_143f3eda8;
  if (DAT_1468b0fa8 != 0) {
    puVar17 = DAT_1468b0fa0;
  }
  FUN_1415a2820(param_1,L"RootDir",puVar17);
  puVar9 = (undefined8 *)FString::ToUpper(&DAT_1468b0fc0,&local_168);
  if (*(int *)(puVar9 + 1) == 0) {
    puVar17 = &DAT_143f3eda8;
  }
  else {
    puVar17 = (undefined2 *)*puVar9;
  }
  FUN_1415a2820(param_1,L"MachineId",puVar17);
  if (local_168 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  puVar17 = &DAT_143f3eda8;
  if (DAT_1468b0fc8 != 0) {
    puVar17 = DAT_1468b0fc0;
  }
  FUN_1415a2820(param_1,L"LoginId",puVar17);
  puVar17 = &DAT_143f3eda8;
  if (DAT_1468b0fb8 != 0) {
    puVar17 = DAT_1468b0fb0;
  }
  FUN_1415a2820(param_1,L"EpicAccountId",puVar17);
  FUN_1415a2820(param_1,L"CallStack",&DAT_144c96c14);
  FUN_1415a2c10(param_1);
  FUN_1415a2820(param_1,L"SourceContext",&DAT_144c96cbc);
  FUN_1415a2820(param_1,L"UserDescription",&DAT_144c96dac);
  puVar17 = &DAT_143f3eda8;
  if (DAT_1468b1058 != 0) {
    puVar17 = DAT_1468b1050;
  }
  FUN_1415a2820(param_1,L"UserActivityHint",puVar17);
  FUN_1415a2820(param_1,L"ErrorMessage",&DAT_1468c0170);
  FString::PrintfImpl(&local_168,&DAT_1440da628,DAT_1468b1108);
  puVar17 = &DAT_143f3eda8;
  if ((uint)local_160 != 0) {
    puVar17 = local_168;
  }
  FUN_1415a2820(param_1,L"CrashDumpMode",puVar17);
  if (local_168 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  puVar17 = &DAT_143f3eda8;
  if (DAT_1468b1088 != 0) {
    puVar17 = DAT_1468b1080;
  }
  FUN_1415a2820(param_1,L"CrashReporterMessage",puVar17);
  FString::PrintfImpl(&local_168,&DAT_1440da628,DAT_1468b1100);
  puVar17 = &DAT_143f3eda8;
  if ((uint)local_160 != 0) {
    puVar17 = local_168;
  }
  FUN_1415a2820(param_1,L"Misc.NumberOfCores",puVar17);
  if (local_168 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_168,&DAT_1440da628,DAT_1468b1104);
  puVar17 = &DAT_143f3eda8;
  if ((uint)local_160 != 0) {
    puVar17 = local_168;
  }
  FUN_1415a2820(param_1,L"Misc.NumberOfCoresIncludingHyperthreads",puVar17);
  if (local_168 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  uVar3 = BuildSettings::IsPromotedBuild();
  FString::PrintfImpl(&local_168,&DAT_1440da628,uVar3);
  puVar17 = &DAT_143f3eda8;
  if ((uint)local_160 != 0) {
    puVar17 = local_168;
  }
  FUN_1415a2820(param_1,L"Misc.Is64bitOperatingSystem",puVar17);
  if (local_168 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  puVar17 = &DAT_143f3eda8;
  if (DAT_1468b0ff8 != 0) {
    puVar17 = DAT_1468b0ff0;
  }
  FUN_1415a2820(param_1,L"Misc.CPUVendor",puVar17);
  puVar17 = &DAT_143f3eda8;
  if (DAT_1468b1008 != 0) {
    puVar17 = DAT_1468b1000;
  }
  FUN_1415a2820(param_1,L"Misc.CPUBrand",puVar17);
  puVar17 = &DAT_143f3eda8;
  if (DAT_1468b1018 != 0) {
    puVar17 = DAT_1468b1010;
  }
  FUN_1415a2820(param_1,L"Misc.PrimaryGPUBrand",puVar17);
  puVar17 = &DAT_143f3eda8;
  if (DAT_1468b0fd8 != 0) {
    puVar17 = DAT_1468b0fd0;
  }
  FUN_1415a2820(param_1,L"Misc.OSVersionMajor",puVar17);
  puVar17 = &DAT_143f3eda8;
  if (DAT_1468b0fe8 != 0) {
    puVar17 = DAT_1468b0fe0;
  }
  FUN_1415a2820(param_1,L"Misc.OSVersionMinor",puVar17);
  puVar17 = &DAT_143f3eda8;
  if (DAT_1468b1098 != 0) {
    puVar17 = DAT_1468b1090;
  }
  FUN_1415a2820(param_1,L"GameStateName",puVar17);
  puVar9 = (undefined8 *)FUN_14169dad0();
  FString::PrintfImpl(&local_168,L"%llu",*puVar9);
  puVar17 = &DAT_143f3eda8;
  if ((uint)local_160 != 0) {
    puVar17 = local_168;
  }
  FUN_1415a2820(param_1,L"MemoryStats.TotalPhysical",puVar17);
  if (local_168 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_168,L"%llu",puVar9[1]);
  puVar17 = &DAT_143f3eda8;
  if ((uint)local_160 != 0) {
    puVar17 = local_168;
  }
  FUN_1415a2820(param_1,L"MemoryStats.TotalVirtual",puVar17);
  if (local_168 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_168,L"%llu",puVar9[2]);
  puVar17 = &DAT_143f3eda8;
  if ((uint)local_160 != 0) {
    puVar17 = local_168;
  }
  FUN_1415a2820(param_1,L"MemoryStats.PageSize",puVar17);
  if (local_168 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_168,&DAT_144ca0198,*(undefined4 *)(puVar9 + 7));
  puVar17 = &DAT_143f3eda8;
  if ((uint)local_160 != 0) {
    puVar17 = local_168;
  }
  FUN_1415a2820(param_1,L"MemoryStats.TotalPhysicalGB",puVar17);
  if (local_168 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_168,L"%llu",DAT_1468b0ef0);
  puVar17 = &DAT_143f3eda8;
  if ((uint)local_160 != 0) {
    puVar17 = local_168;
  }
  FUN_1415a2820(param_1,L"MemoryStats.AvailablePhysical",puVar17);
  if (local_168 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_168,L"%llu",DAT_1468b0ef8);
  puVar17 = &DAT_143f3eda8;
  if ((uint)local_160 != 0) {
    puVar17 = local_168;
  }
  FUN_1415a2820(param_1,L"MemoryStats.AvailableVirtual",puVar17);
  if (local_168 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_168,L"%llu",DAT_1468b0f00);
  puVar17 = &DAT_143f3eda8;
  if ((uint)local_160 != 0) {
    puVar17 = local_168;
  }
  FUN_1415a2820(param_1,L"MemoryStats.UsedPhysical",puVar17);
  if (local_168 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_168,L"%llu",DAT_1468b0f08);
  puVar17 = &DAT_143f3eda8;
  if ((uint)local_160 != 0) {
    puVar17 = local_168;
  }
  FUN_1415a2820(param_1,L"MemoryStats.PeakUsedPhysical",puVar17);
  if (local_168 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_168,L"%llu",DAT_1468b0f10);
  puVar17 = &DAT_143f3eda8;
  if ((uint)local_160 != 0) {
    puVar17 = local_168;
  }
  FUN_1415a2820(param_1,L"MemoryStats.UsedVirtual",puVar17);
  if (local_168 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_168,L"%llu",DAT_1468b0f18);
  puVar17 = &DAT_143f3eda8;
  if ((uint)local_160 != 0) {
    puVar17 = local_168;
  }
  FUN_1415a2820(param_1,L"MemoryStats.PeakUsedVirtual",puVar17);
  if (local_168 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_168,&DAT_1440da628,DAT_1468b02a1);
  puVar17 = &DAT_143f3eda8;
  if ((uint)local_160 != 0) {
    puVar17 = local_168;
  }
  FUN_1415a2820(param_1,L"MemoryStats.bIsOOM",puVar17);
  if (local_168 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_168,L"%llu",DAT_1468b02c0);
  puVar17 = &DAT_143f3eda8;
  if ((uint)local_160 != 0) {
    puVar17 = local_168;
  }
  FUN_1415a2820(param_1,L"MemoryStats.OOMAllocationSize",puVar17);
  if (local_168 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_168,&DAT_1440da628,DAT_1468b02c8);
  puVar17 = &DAT_143f3eda8;
  if ((uint)local_160 != 0) {
    puVar17 = local_168;
  }
  FUN_1415a2820(param_1,L"MemoryStats.OOMAllocationAlignment",puVar17);
  if (local_168 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468b14e8) && (_Init_thread_header(&DAT_1468b14e8), DAT_1468b14e8 == -1))
  {
    uVar8 = FGuid::NewGuid(local_154);
    FUN_141682af0(uVar8,&DAT_1468b14d8,0);
    atexit((_func_5014 *)&LAB_143e76320);
    _Init_thread_footer(&DAT_1468b14e8);
  }
  _Src = DAT_1468b14d8;
  local_168 = (undefined2 *)0x0;
  iVar4 = (int)DAT_1468b14e0;
  local_160 = CONCAT44(local_160._4_4_,iVar4);
  iVar13 = 0;
  if (iVar4 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_168,DAT_1468b14e0 & 0xffffffff,0);
    puVar18 = local_168;
    _guard_xfg_dispatch_icall_nop(local_168,_Src,(longlong)iVar4 * 2);
    iVar13 = (uint)local_160;
  }
  puVar17 = &DAT_143f3eda8;
  if (iVar13 != 0) {
    puVar17 = puVar18;
  }
  FUN_1415a2820(param_1,L"execution_guid",puVar17);
  if (puVar18 != (undefined2 *)0x0) {
    FMemory::Free(puVar18);
  }
  puVar18 = &DAT_143f3eda8;
  if (DAT_1464a8688 != 0) {
    puVar18 = DAT_1464a8680;
  }
  FUN_1415a6440(param_1,puVar18);
  puVar18 = &DAT_143f3eda8;
  if (DAT_1464a8698 != 0) {
    puVar18 = DAT_1464a8690;
  }
  FUN_1415a3bc0(param_1,puVar18);
  (**(code **)(*param_1 + 0x10))(param_1);
  puVar18 = &DAT_143f3eda8;
  if (DAT_1464a8698 != 0) {
    puVar18 = DAT_1464a8690;
  }
  FUN_1415a6440(param_1,puVar18);
  if (0 < DAT_1468b10a8) {
    puVar18 = &DAT_143f3eda8;
    if (DAT_1464a86a8 != 0) {
      puVar18 = DAT_1464a86a0;
    }
    FUN_1415a3bc0(param_1,puVar18);
    puVar22 = DAT_1468b10a0 + (longlong)DAT_1468b10a8 * 2;
    for (puVar9 = DAT_1468b10a0; puVar9 != puVar22; puVar9 = puVar9 + 2) {
      if (*(int *)(puVar9 + 1) == 0) {
        puVar18 = &DAT_143f3eda8;
      }
      else {
        puVar18 = (undefined2 *)*puVar9;
      }
      FUN_1415a2820(param_1,L"Plugin",puVar18);
    }
    puVar18 = &DAT_143f3eda8;
    if (DAT_1464a86a8 != 0) {
      puVar18 = DAT_1464a86a0;
    }
    FUN_1415a6440(param_1,puVar18);
  }
  FUN_1415a6440(param_1,L"FGenericCrashContext");
  return;
}



// FUNCTION 1415b79c0 FUN_1415b79c0 body=50 status=ok
// SIG undefined FUN_1415b79c0(void)

ulonglong FUN_1415b79c0(DWORD *param_1)

{
  BOOL BVar1;
  ulonglong in_RAX;
  LPVOID pvVar2;
  undefined4 extraout_var;
  
  if (*param_1 != 0) {
    pvVar2 = TlsGetValue(*param_1);
    BVar1 = TlsSetValue(*param_1,(LPVOID)(longlong)((int)pvVar2 + 1));
    return CONCAT71((int7)(CONCAT44(extraout_var,BVar1) >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1415b7a00 FUN_1415b7a00 body=61 status=ok
// SIG undefined FUN_1415b7a00(void)

int FUN_1415b7a00(DWORD *param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    pvVar1 = TlsGetValue(*param_1);
    iVar2 = (int)pvVar1 + 1;
    TlsSetValue(*param_1,(LPVOID)(longlong)iVar2);
    return iVar2;
  }
  return 0;
}



// FUNCTION 1415b7a40 SetAsGMalloc body=64 status=ok
// SIG undefined SetAsGMalloc(void)

void FGenericPlatformMallocCrash::SetAsGMalloc(longlong param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  DAT_1468c2208 = param_1;
  DVar2 = GetCurrentThreadId();
  *(DWORD *)(param_1 + 0x30) = DVar2;
  return;
}



// FUNCTION 1415b7a80 FUN_1415b7a80 body=31 status=ok
// SIG undefined FUN_1415b7a80(void)

void FUN_1415b7a80(longlong param_1)

{
  DWORD DVar1;
  
  DAT_1468c2208 = param_1;
  DVar1 = GetCurrentThreadId();
  *(DWORD *)(param_1 + 0x30) = DVar1;
  return;
}



// FUNCTION 1415b7aa0 FUN_1415b7aa0 body=538 status=ok
// SIG undefined FUN_1415b7aa0(void)

void FUN_1415b7aa0(undefined1 param_1)

{
  uint uVar1;
  bool bVar2;
  BOOL BVar3;
  int iVar4;
  longlong lVar5;
  uint *puVar6;
  int iVar7;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  int iStack_60;
  uint uStack_5c;
  undefined *local_58;
  uint uStack_50;
  int iStack_4c;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  uint uStack_28;
  int iStack_24;
  undefined8 uStack_20;
  
  if (DAT_1468b02d8 != 0) {
    BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0da8);
    if (BVar3 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0da8);
    }
    local_88 = 0;
    uStack_84 = 1;
    iStack_74 = 0;
    iStack_70 = 0;
    iVar7 = (int)DAT_1464a8488;
    if (iVar7 != 0) {
      puVar6 = DAT_1464a8480;
      if (DAT_1464a8480 == (uint *)0x0) {
        puVar6 = (uint *)&DAT_1464a8470;
      }
      uVar1 = *puVar6;
      iStack_70 = 0;
      local_88 = 0;
      while (uVar1 == 0) {
        lVar5 = (longlong)local_88;
        iStack_70 = iStack_70 + 0x20;
        iVar4 = local_88 + 1;
        bVar2 = (int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_88;
        local_88 = iVar4;
        if (bVar2) goto LAB_1415b7bac;
        uVar1 = puVar6[lVar5 + 1];
      }
      uStack_84 = -uVar1 & uVar1;
      iVar4 = 0x1f;
      if (uStack_84 != 0) {
        for (; uStack_84 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_84 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      iStack_74 = (iStack_70 - iVar4) + 0x1f;
      if (iVar7 < iStack_74) {
LAB_1415b7bac:
        iStack_74 = iVar7;
      }
    }
    uStack_50 = 0xffffffff;
    iStack_4c = iStack_74;
    local_48 = CONCAT44(uStack_6c,iStack_70);
    uStack_38 = CONCAT44(uStack_84,local_88);
    local_40 = &DAT_1464a8460;
    puStack_30 = &DAT_1464a8470;
    iStack_60 = local_88;
    uStack_5c = uStack_84;
    local_58 = &DAT_1464a8470;
    uStack_20 = local_48;
    uStack_28 = uStack_50;
    iStack_24 = iStack_4c;
    while ((iStack_4c != iVar7 || (local_58 != &DAT_1464a8470))) {
      lVar5 = *(longlong *)(DAT_1464a8460 + 8 + (longlong)iStack_4c * 0x18);
      BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x18));
      if (BVar3 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x18));
      }
      *(undefined1 *)(lVar5 + 0x55) = param_1;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x18));
      uStack_50 = uStack_50 & ~uStack_5c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
    }
    *(undefined1 *)(DAT_1468b02d8 + 0x600) = param_1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0da8);
  }
  return;
}



// FUNCTION 1415b7cc0 SetComplete body=131 status=ok
// SIG undefined SetComplete(void)

void IAsyncReadRequest::SetComplete(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  longlong local_res10 [3];
  
  *(undefined1 *)(param_1 + 0x70) = 1;
  if (*(int *)(param_1 + 0x60) != 0) {
    lVar2 = 0;
    lVar1 = lVar2;
    if (*(longlong *)(param_1 + 0x50) == 0) {
      lVar1 = param_1 + 0x30;
    }
    if (lVar1 != 0 || *(longlong *)(param_1 + 0x50) != 0) {
      local_res8[0] = *(undefined1 *)(param_1 + 0x73);
      local_res10[0] = param_1;
      if (*(int *)(param_1 + 0x60) != 0) {
        plVar3 = *(longlong **)(param_1 + 0x50);
        if (*(longlong **)(param_1 + 0x50) == (longlong *)0x0) {
          plVar3 = (longlong *)(param_1 + 0x30);
        }
        if (plVar3 != (longlong *)0x0) {
          lVar2 = (**(code **)(*plVar3 + 8))();
        }
      }
      (**(code **)(param_1 + 0x20))(lVar2,local_res8,local_res10);
    }
  }
  *(undefined1 *)(param_1 + 0x71) = 1;
  return;
}



// FUNCTION 1415b7d50 FUN_1415b7d50 body=87 status=ok
// SIG undefined FUN_1415b7d50(void)

void FUN_1415b7d50(undefined1 param_1)

{
  BOOL BVar1;
  
  if (DAT_1468b02d8 != 0) {
    BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0c08);
    if (BVar1 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0c08);
    }
    *(undefined1 *)(DAT_1468b02d8 + 0x601) = param_1;
                    /* WARNING: Could not recover jumptable at 0x0001415b7d9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0c08);
    return;
  }
  return;
}



// FUNCTION 1415b7db0 FUN_1415b7db0 body=207 status=ok
// SIG undefined FUN_1415b7db0(void)

undefined8 FUN_1415b7db0(longlong param_1,undefined8 param_2)

{
  BOOL BVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 local_18 [2];
  undefined8 local_10;
  
  if ((param_1 != 0) && (lVar2 = FUN_1415a9b70(), *(char *)(lVar2 + 0x18) != '\0')) {
    BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x20));
    if (BVar1 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x20));
    }
    plVar4 = *(longlong **)(lVar2 + 0x48);
    plVar3 = plVar4 + (longlong)*(int *)(lVar2 + 0x50) * 6;
    while( true ) {
      if (plVar4 == plVar3) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x20));
        return 0;
      }
      if (*plVar4 == param_1) break;
      plVar4 = plVar4 + 6;
    }
    local_18[0] = 0;
    local_10 = 0;
    FUN_1415a36e0(lVar2,plVar4,local_18,param_2);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x20));
    return 1;
  }
  return 0;
}



// FUNCTION 1415b7e80 FUN_1415b7e80 body=104 status=ok
// SIG undefined FUN_1415b7e80(void)

void FUN_1415b7e80(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  void *_Src;
  
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 != 0) {
    _Src = (void *)*param_2;
    iVar2 = *(int *)(param_1 + 0x10);
    *(int *)(param_1 + 0x10) = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x14) < iVar2 + iVar1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                ((longlong *)(param_1 + 8),iVar2);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 8),_Src,(longlong)iVar1 << 3)
    ;
  }
  return;
}



// FUNCTION 1415b7ef0 FUN_1415b7ef0 body=383 status=ok
// SIG undefined FUN_1415b7ef0(void)

void FUN_1415b7ef0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *local_18;
  undefined8 local_10;
  
  uVar7 = 0;
  DAT_1468b0310 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468b14f8) && (_Init_thread_header(&DAT_1468b14f8), DAT_1468b14f8 == -1))
  {
    DAT_1468b14f0 = (undefined8 *)0x0;
    lVar5 = operator_new(0x838);
    uVar6 = uVar7;
    if (lVar5 != 0) {
      uVar6 = FOutputDeviceFile::FOutputDeviceFile(lVar5,0,0,0);
    }
    puVar3 = DAT_1468b14f0;
    if (DAT_1468b14f0 != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)*DAT_1468b14f0;
      DAT_1468b14f0 = (undefined8 *)uVar6;
      (*(code *)*puVar1)(puVar3,1);
      uVar6 = (ulonglong)DAT_1468b14f0;
    }
    DAT_1468b14f0 = (undefined8 *)uVar6;
    atexit((_func_5014 *)&LAB_143e76220);
    _Init_thread_footer(&DAT_1468b14f8);
  }
  uVar6 = (ulonglong)DAT_1468b14f0;
  uVar2 = FUN_141672640();
  FOutputDeviceRedirector::AddOutputDevice(uVar2,uVar6);
  local_18 = (undefined8 *)0x0;
  local_10 = 0;
  FUN_1415aa600(&local_18);
  puVar1 = local_18;
  puVar3 = local_18 + (int)local_10;
  uVar6 = (ulonglong)((longlong)puVar3 + (7 - (longlong)local_18)) >> 3;
  if (puVar3 < local_18) {
    uVar6 = uVar7;
  }
  puVar8 = local_18;
  if (uVar6 != 0) {
    do {
      uVar2 = *puVar8;
      puVar3 = (undefined8 *)FUN_141672640();
      FOutputDeviceRedirector::AddOutputDevice(puVar3,uVar2);
      uVar7 = uVar7 + 1;
      puVar8 = puVar8 + 1;
    } while (uVar7 != uVar6);
  }
  pwVar4 = AK::MemoryMgr::GetPoolName((long)puVar3);
  uVar2 = FUN_141672640();
  FOutputDeviceRedirector::AddOutputDevice(uVar2,pwVar4);
  if (puVar1 != (undefined8 *)0x0) {
    FMemory::Free(puVar1);
  }
  return;
}



// FUNCTION 1415b8070 FUN_1415b8070 body=691 status=ok
// SIG undefined FUN_1415b8070(void)

void FUN_1415b8070(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_a8 [2];
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  longlong local_60;
  int *local_58;
  
  *(undefined1 *)(param_1 + 0x11) = 1;
  iVar4 = DAT_1464a820c;
  if (((DAT_1468b0d80 != 0x800) && (iVar4 = DAT_1464a8208, DAT_1468b0d80 != 0x1000)) ||
     (uVar3 = DAT_1468b0d88, iVar4 != 0)) {
    uVar3 = DAT_1468b0d84 | DAT_1468b0d80;
  }
  iVar11 = 0;
  *(uint *)(param_1 + 8) = uVar3 | 0xff;
  iVar4 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar4 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_80 = local_res8;
    local_88 = &LAB_14043a650;
    local_98 = 0;
    iVar12 = iVar11;
    do {
      local_68 = &local_78;
      local_58 = local_a8;
      lVar5 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar5 = local_res10;
      }
      local_res8[0] = 0;
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = (undefined4)uStack_80;
      uStack_6c = uStack_80._4_4_;
      local_a8[0] = 0;
      lVar5 = *(longlong *)(lVar5 + local_98);
      LOCK();
      uVar6 = *(ulonglong *)(lVar5 + 8);
      if (uVar6 == 0) {
        *(ulonglong *)(lVar5 + 8) = 0;
        uVar6 = 0;
      }
      UNLOCK();
      uVar9 = uVar6 >> 0x1a;
      local_a0 = (ulonglong)((uint)uVar9 & 1);
      local_60 = param_1;
      uVar3 = FUN_14043a6c0(&local_68);
      while (uVar3 != 0) {
        uVar8 = (ulonglong)uVar3;
        uVar10 = (uVar6 & 0xfffffffffc000000) + 0x8000000;
        if (uVar10 >> 0x1a < uVar9) {
          LockFreeTagCounterHasOverflowed();
        }
        if (uVar3 == 0) {
          uVar9 = 0;
          uVar8 = uVar9;
        }
        else {
          uVar9 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar9 + 0x10) = (uint)uVar6 & 0x3ffffff;
        LOCK();
        bVar13 = uVar6 == *(ulonglong *)(lVar5 + 8);
        if (bVar13) {
          *(ulonglong *)(lVar5 + 8) = uVar10 | uVar8;
        }
        UNLOCK();
        if (bVar13) {
          bVar13 = true;
          goto LAB_1415b8277;
        }
        LOCK();
        uVar6 = *(ulonglong *)(lVar5 + 8);
        if (uVar6 == 0) {
          *(ulonglong *)(lVar5 + 8) = 0;
          uVar6 = 0;
        }
        UNLOCK();
        uVar9 = uVar6 >> 0x1a;
        local_a0 = (ulonglong)((uint)uVar9 & 1);
        uVar3 = FUN_14043a6c0(&local_68);
      }
      if (local_a8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar13 = false;
LAB_1415b8277:
      iVar4 = iVar12 + 1;
      if (bVar13) {
        iVar4 = iVar12;
      }
      local_98 = local_98 + 8;
      iVar11 = iVar11 + 1;
      iVar12 = iVar4;
    } while (iVar11 < *(int *)(local_res10 + 0x28));
  }
  uVar2 = local_res18;
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar11 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar4);
  UNLOCK();
  if (iVar11 == (uint)local_res20 + iVar4) {
    puVar7 = (undefined8 *)FTaskGraphInterface::Get();
    (**(code **)*puVar7)(puVar7,param_1,*(undefined4 *)(param_1 + 8),uVar2);
  }
  return;
}



// FUNCTION 1415b8330 FUN_1415b8330 body=445 status=ok
// SIG undefined FUN_1415b8330(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 * FUN_1415b8330(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined2 *local_38;
  undefined8 local_30;
  undefined2 *local_28;
  wchar_t *local_20;
  longlong local_18 [2];
  
  if ((DAT_1468b10d8 != 0) && (DAT_1468b10d8 != 1)) goto LAB_1415b84d5;
  puVar4 = (undefined8 *)FPaths::EngineDir(local_18);
  if (*(int *)(puVar4 + 1) == 0) {
    local_28 = &DAT_143f3eda8;
  }
  else {
    local_28 = (undefined2 *)*puVar4;
  }
  local_38 = (undefined2 *)0x0;
  local_20 = L"Shaders";
  local_30 = 0;
  FPaths::CombineInternal(&local_38,&local_28,2);
  if (DAT_1468b10d0 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  DAT_1468b10d0 = local_38;
  DAT_1468b10d8 = (int)local_30;
  _DAT_1468b10dc = local_30._4_4_;
  local_30 = 0;
  local_38 = (undefined2 *)0x0;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  uVar5 = FCommandLine::Get();
  cVar2 = FParse::Param(uVar5,L"pubshaders");
  if (cVar2 == '\0') {
    uVar5 = FEngineVersion::Current();
    iVar3 = FEngineVersionBase::GetChangelist(uVar5);
    if (iVar3 != 0) goto LAB_1415b8416;
    bVar1 = false;
  }
  else {
LAB_1415b8416:
    bVar1 = true;
  }
  uVar5 = FCommandLine::Get();
  cVar2 = FParse::Param(uVar5,L"devshaders");
  if ((bVar1) && (cVar2 == '\0')) {
    puVar4 = (undefined8 *)FPaths::EngineDir(local_18);
    if (*(int *)(puVar4 + 1) == 0) {
      local_28 = &DAT_143f3eda8;
    }
    else {
      local_28 = (undefined2 *)*puVar4;
    }
    local_20 = L"PublishedShaders";
    local_38 = (undefined2 *)0x0;
    local_30 = 0;
    FPaths::CombineInternal(&local_38,&local_28,2);
    if (DAT_1468b10d0 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    DAT_1468b10d0 = local_38;
    _DAT_1468b10dc = local_30._4_4_;
    local_38 = (undefined2 *)0x0;
    DAT_1468b10d8 = (int)local_30;
    local_30 = 0;
    if (local_18[0] != 0) {
      FMemory::Free(local_18[0]);
    }
  }
LAB_1415b84d5:
  puVar6 = &DAT_143f3eda8;
  if (DAT_1468b10d8 != 0) {
    puVar6 = DAT_1468b10d0;
  }
  return puVar6;
}



// FUNCTION 1415b84f0 FUN_1415b84f0 body=124 status=ok
// SIG undefined FUN_1415b84f0(void)

ulonglong FUN_1415b84f0(void)

{
  ulonglong in_RAX;
  
  if (DAT_1468b6148 != 0) {
    in_RAX = FUN_1416514e0();
    if ((char)in_RAX != '\0') {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38) < DAT_1468b11a0) {
        _Init_thread_header(&DAT_1468b11a0);
        if (DAT_1468b11a0 == -1) {
          FApp::GetEngineIsPromotedBuild();
          DAT_1468b119c = 0;
          _Init_thread_footer(&DAT_1468b11a0);
        }
      }
      return (ulonglong)DAT_1468b119c;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1415b8570 FUN_1415b8570 body=1261 status=ok
// SIG undefined FUN_1415b8570(void)

void FUN_1415b8570(float *param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
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
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_res8;
  float local_res10;
  float local_res20;
  float local_d8;
  
  fVar10 = 0.0;
  fVar17 = *param_1;
  fVar20 = param_1[1];
  fVar4 = (fVar17 + fVar20) * 0.3660254;
  fVar5 = fVar17 + fVar4;
  fVar4 = fVar20 + fVar4;
  uVar2 = (uint)fVar5;
  uVar1 = (uint)fVar4;
  if (fVar5 <= 0.0) {
    uVar2 = uVar2 - 1;
  }
  uVar3 = uVar2 & 0xff;
  if (fVar4 <= 0.0) {
    uVar1 = uVar1 - 1;
  }
  fVar4 = (float)(int)(uVar1 + uVar2) * 0.21132487;
  fVar17 = fVar17 - ((float)(int)uVar2 - fVar4);
  fVar20 = fVar20 - ((float)(int)uVar1 - fVar4);
  fVar15 = fVar17 - 0.57735026;
  fVar4 = fVar20 - 0.57735026;
  fVar5 = (fVar17 - (float)(fVar20 < fVar17)) + 0.21132487;
  fVar11 = (fVar20 - (float)(fVar17 <= fVar20)) + 0.21132487;
  fVar19 = (0.6 - fVar17 * fVar17) - fVar20 * fVar20;
  if (0.0 <= fVar19) {
    fVar8 = fVar19 * fVar19;
    fVar14 = fVar8 * fVar8;
    local_res8 = *(float *)(&DAT_144c9fb10 +
                           (ulonglong)
                           ((byte)(&DAT_144c9f910)[(byte)(&DAT_144c9f910)[(byte)uVar1] + uVar3] & 7)
                           * 8);
    local_res10 = *(float *)(&DAT_144c9fb14 +
                            (ulonglong)
                            ((byte)(&DAT_144c9f910)[(byte)(&DAT_144c9f910)[(byte)uVar1] + uVar3] & 7
                            ) * 8);
  }
  else {
    local_res10 = 0.0;
    local_res8 = 0.0;
    fVar19 = 0.0;
    fVar8 = 0.0;
    fVar14 = 0.0;
  }
  fVar6 = (0.6 - fVar5 * fVar5) - fVar11 * fVar11;
  if (0.0 <= fVar6) {
    fVar13 = fVar6 * fVar6;
    fVar18 = fVar13 * fVar13;
    local_res20 = *(float *)(&DAT_144c9fb10 +
                            (ulonglong)
                            ((byte)(&DAT_144c9f910)
                                   [(uint)(byte)(&DAT_144c9f910)
                                                [(uint)(fVar17 <= fVar20) + (uVar1 & 0xff)] +
                                    (uint)(fVar20 < fVar17) + uVar3] & 7) * 8);
    fVar21 = *(float *)(&DAT_144c9fb14 +
                       (ulonglong)
                       ((byte)(&DAT_144c9f910)
                              [(uint)(byte)(&DAT_144c9f910)
                                           [(uint)(fVar17 <= fVar20) + (uVar1 & 0xff)] +
                               (uint)(fVar20 < fVar17) + uVar3] & 7) * 8);
  }
  else {
    fVar21 = 0.0;
    local_res20 = 0.0;
    fVar6 = 0.0;
    fVar18 = 0.0;
    fVar13 = 0.0;
  }
  fVar7 = (0.6 - fVar15 * fVar15) - fVar4 * fVar4;
  if (0.0 <= fVar7) {
    fVar12 = fVar7 * fVar7;
    fVar16 = fVar12 * fVar12;
    local_d8 = *(float *)(&DAT_144c9fb10 +
                         (ulonglong)
                         ((byte)(&DAT_144c9f911)[(byte)(&DAT_144c9f911)[(byte)uVar1] + uVar3] & 7) *
                         8);
    fVar10 = *(float *)(&DAT_144c9fb14 +
                       (ulonglong)
                       ((byte)(&DAT_144c9f911)[(byte)(&DAT_144c9f911)[(byte)uVar1] + uVar3] & 7) * 8
                       );
  }
  else {
    local_d8 = 0.0;
    fVar7 = 0.0;
    fVar12 = 0.0;
    fVar16 = 0.0;
  }
  if (param_2 != (float *)0x0) {
    fVar9 = (local_res10 * fVar20 + local_res8 * fVar17) * fVar8 * fVar19;
    fVar8 = (fVar21 * fVar11 + local_res20 * fVar5) * fVar13 * fVar6;
    fVar19 = (fVar10 * fVar4 + local_d8 * fVar15) * fVar12 * fVar7;
    *param_2 = ((local_res20 * fVar18 + local_res8 * fVar14 + local_d8 * fVar16) -
               (fVar8 * fVar5 + fVar9 * fVar17 + fVar19 * fVar15) * 8.0) * 40.0;
    param_2[1] = ((fVar21 * fVar18 + local_res10 * fVar14 + fVar10 * fVar16) -
                 (fVar8 * fVar11 + fVar9 * fVar20 + fVar19 * fVar4) * 8.0) * 40.0;
  }
  return;
}



// FUNCTION 1415b8a60 FUN_1415b8a60 body=3992 status=ok
// SIG undefined FUN_1415b8a60(void)

void FUN_1415b8a60(float *param_1,float *param_2)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
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
  float fVar44;
  float fVar45;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_180;
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
  float local_12c;
  float local_128;
  float local_124;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  
  fVar28 = *param_1;
  fVar30 = param_1[1];
  fVar36 = 0.0;
  fVar37 = param_1[2];
  fVar38 = param_1[3];
  fVar15 = (fVar28 + fVar30 + fVar37 + fVar38) * 0.309017;
  uVar11 = (uint)(fVar28 + fVar15);
  uVar10 = (uint)(fVar30 + fVar15);
  if (fVar28 + fVar15 <= 0.0) {
    uVar11 = uVar11 - 1;
  }
  uVar14 = (uint)(fVar37 + fVar15);
  if (fVar30 + fVar15 <= 0.0) {
    uVar10 = uVar10 - 1;
  }
  if (fVar37 + fVar15 <= 0.0) {
    uVar14 = uVar14 - 1;
  }
  uVar13 = (uint)(fVar38 + fVar15);
  if (fVar38 + fVar15 <= 0.0) {
    uVar13 = uVar13 - 1;
  }
  uVar12 = 0;
  fVar15 = (float)(int)(uVar10 + uVar11 + uVar13 + uVar14) * 0.1381966;
  fVar28 = fVar28 - ((float)(int)uVar11 - fVar15);
  fVar30 = fVar30 - ((float)(int)uVar10 - fVar15);
  fVar37 = fVar37 - ((float)(int)uVar14 - fVar15);
  fVar38 = fVar38 - ((float)(int)uVar13 - fVar15);
  uVar6 = uVar12;
  if (fVar38 < fVar30) {
    uVar6 = 2;
  }
  uVar7 = uVar12;
  if (fVar38 < fVar28) {
    uVar7 = 4;
  }
  uVar8 = uVar12;
  if (fVar37 < fVar30) {
    uVar8 = 8;
  }
  uVar9 = uVar12;
  if (fVar37 < fVar28) {
    uVar9 = 0x10;
  }
  if (fVar30 < fVar28) {
    uVar12 = 0x20;
  }
  uVar12 = fVar38 < fVar37 | uVar6 | uVar7 | uVar8 | uVar9 | uVar12;
  bVar2 = (&DAT_144c9fe10)[uVar12 * 4];
  bVar3 = (&DAT_144c9fe11)[uVar12 * 4];
  bVar4 = (&DAT_144c9fe12)[uVar12 * 4];
  bVar5 = (&DAT_144c9fe13)[uVar12 * 4];
  local_1a4 = (float)(uint)(1 < bVar4);
  local_1a8 = (float)(uint)(1 < bVar5);
  fVar32 = (fVar28 - (float)(2 < bVar2)) + 0.1381966;
  fVar34 = (fVar30 - (float)(2 < bVar3)) + 0.1381966;
  fVar40 = (fVar37 - (float)(2 < bVar4)) + 0.1381966;
  fVar42 = (fVar38 - (float)(2 < bVar5)) + 0.1381966;
  uVar14 = uVar14 & 0xff;
  fVar26 = (fVar28 - (float)(1 < bVar2)) + 0.2763932;
  fVar44 = (fVar30 - (float)(1 < bVar3)) + 0.2763932;
  fVar31 = (fVar37 - (float)(int)local_1a4) + 0.2763932;
  fVar19 = (fVar38 - (float)(int)local_1a8) + 0.2763932;
  uVar11 = uVar11 & 0xff;
  fVar20 = (fVar28 - (float)(bVar2 != 0)) + 0.41458982;
  fVar21 = (fVar30 - (float)(bVar3 != 0)) + 0.41458982;
  fVar22 = (fVar37 - (float)(bVar4 != 0)) + 0.41458982;
  fVar23 = (fVar38 - (float)(bVar5 != 0)) + 0.41458982;
  fVar15 = fVar28 - 0.4472136;
  fVar16 = fVar30 - 0.4472136;
  fVar17 = fVar37 - 0.4472136;
  fVar18 = fVar38 - 0.4472136;
  local_104 = (((0.6 - fVar28 * fVar28) - fVar30 * fVar30) - fVar37 * fVar37) - fVar38 * fVar38;
  uVar10 = uVar10 & 0xff;
  if (0.0 <= local_104) {
    fVar39 = local_104 * local_104;
    local_10c = fVar39 * fVar39;
    uVar6 = (ulonglong)
            ((byte)(&DAT_144c9f910)
                   [(byte)(&DAT_144c9f910)
                          [(byte)(&DAT_144c9f910)[(byte)(&DAT_144c9f910)[(byte)uVar13] + uVar14] +
                           uVar10] + uVar11] & 0x1f);
    local_158 = *(float *)(&DAT_144c9fc14 + uVar6 * 0x10);
    local_160 = *(float *)(&DAT_144c9fc10 + uVar6 * 0x10);
    local_14c = *(float *)(&DAT_144c9fc18 + uVar6 * 0x10);
    local_13c = *(float *)(&DAT_144c9fc1c + uVar6 * 0x10);
  }
  else {
    local_13c = 0.0;
    fVar39 = 0.0;
    local_14c = 0.0;
    local_158 = 0.0;
    local_160 = 0.0;
    local_10c = 0.0;
    local_104 = 0.0;
  }
  fVar25 = (((0.6 - fVar32 * fVar32) - fVar34 * fVar34) - fVar40 * fVar40) - fVar42 * fVar42;
  if (0.0 <= fVar25) {
    local_12c = fVar25 * fVar25;
    local_110 = local_12c * local_12c;
    uVar6 = (ulonglong)
            ((byte)(&DAT_144c9f910)
                   [(byte)(&DAT_144c9f910)
                          [(byte)(&DAT_144c9f910)
                                 [(byte)(&DAT_144c9f910)[(uVar13 & 0xff) + (uint)(2 < bVar5)] +
                                  uVar14 + (uint)(2 < bVar4)] + uVar10 + (uint)(2 < bVar3)] + uVar11
                    + (uint)(2 < bVar2)] & 0x1f);
    fVar1 = *(float *)(&DAT_144c9fc10 + uVar6 * 0x10);
    local_15c = *(float *)(&DAT_144c9fc14 + uVar6 * 0x10);
    local_150 = *(float *)(&DAT_144c9fc18 + uVar6 * 0x10);
    local_140 = *(float *)(&DAT_144c9fc1c + uVar6 * 0x10);
  }
  else {
    local_140 = 0.0;
    fVar1 = 0.0;
    fVar25 = 0.0;
    local_150 = 0.0;
    local_15c = 0.0;
    local_110 = 0.0;
    local_12c = 0.0;
  }
  fVar27 = (((0.6 - fVar26 * fVar26) - fVar44 * fVar44) - fVar31 * fVar31) - fVar19 * fVar19;
  if (0.0 <= fVar27) {
    fVar45 = fVar27 * fVar27;
    local_108 = fVar45 * fVar45;
    uVar6 = (ulonglong)
            ((byte)(&DAT_144c9f910)
                   [(byte)(&DAT_144c9f910)
                          [(byte)(&DAT_144c9f910)
                                 [(byte)(&DAT_144c9f910)[(int)local_1a8 + (uVar13 & 0xff)] + uVar14
                                  + (int)local_1a4] + uVar10 + (uint)(1 < bVar3)] + uVar11 +
                    (uint)(1 < bVar2)] & 0x1f);
    local_1a8 = *(float *)(&DAT_144c9fc14 + uVar6 * 0x10);
    local_1a4 = *(float *)(&DAT_144c9fc10 + uVar6 * 0x10);
    local_148 = *(float *)(&DAT_144c9fc18 + uVar6 * 0x10);
    local_138 = *(float *)(&DAT_144c9fc1c + uVar6 * 0x10);
  }
  else {
    local_138 = 0.0;
    fVar45 = 0.0;
    local_148 = 0.0;
    fVar27 = 0.0;
    local_1a8 = 0.0;
    local_1a4 = 0.0;
    local_108 = 0.0;
  }
  fVar29 = (((0.6 - fVar20 * fVar20) - fVar21 * fVar21) - fVar22 * fVar22) - fVar23 * fVar23;
  if (0.0 <= fVar29) {
    fVar43 = fVar29 * fVar29;
    local_180 = fVar43 * fVar43;
    uVar6 = (ulonglong)
            ((byte)(&DAT_144c9f910)
                   [(byte)(&DAT_144c9f910)
                          [(byte)(&DAT_144c9f910)
                                 [(byte)(&DAT_144c9f910)[(uVar13 & 0xff) + (uint)(bVar5 != 0)] +
                                  uVar14 + (uint)(bVar4 != 0)] + uVar10 + (uint)(bVar3 != 0)] +
                    uVar11 + (uint)(bVar2 != 0)] & 0x1f);
    local_198 = *(float *)(&DAT_144c9fc10 + uVar6 * 0x10);
    local_154 = *(float *)(&DAT_144c9fc14 + uVar6 * 0x10);
    local_144 = *(float *)(&DAT_144c9fc18 + uVar6 * 0x10);
    local_134 = *(float *)(&DAT_144c9fc1c + uVar6 * 0x10);
  }
  else {
    local_134 = 0.0;
    fVar43 = 0.0;
    local_144 = 0.0;
    fVar29 = 0.0;
    local_154 = 0.0;
    local_198 = 0.0;
    local_180 = 0.0;
  }
  fVar24 = (((0.6 - fVar15 * fVar15) - fVar16 * fVar16) - fVar17 * fVar17) - fVar18 * fVar18;
  if (0.0 <= fVar24) {
    fVar41 = fVar24 * fVar24;
    local_19c = fVar41 * fVar41;
    uVar6 = (ulonglong)
            ((byte)(&DAT_144c9f911)
                   [(byte)(&DAT_144c9f911)
                          [(byte)(&DAT_144c9f911)[(byte)(&DAT_144c9f911)[(byte)uVar13] + uVar14] +
                           uVar10] + uVar11] & 0x1f);
    local_1a0 = *(float *)(&DAT_144c9fc10 + uVar6 * 0x10);
    local_128 = *(float *)(&DAT_144c9fc14 + uVar6 * 0x10);
    local_124 = *(float *)(&DAT_144c9fc18 + uVar6 * 0x10);
    fVar36 = *(float *)(&DAT_144c9fc1c + uVar6 * 0x10);
  }
  else {
    local_1a0 = 0.0;
    local_124 = 0.0;
    local_128 = 0.0;
    local_19c = 0.0;
    fVar41 = 0.0;
    fVar24 = 0.0;
  }
  if (param_2 != (float *)0x0) {
    fVar33 = (local_158 * fVar30 + local_160 * fVar28 + local_14c * fVar37 + local_13c * fVar38) *
             fVar39 * local_104;
    fVar35 = (local_15c * fVar34 + fVar1 * fVar32 + local_150 * fVar40 + local_140 * fVar42) *
             local_12c * fVar25;
    fVar27 = (local_1a8 * fVar44 + local_1a4 * fVar26 + local_148 * fVar31 + local_138 * fVar19) *
             fVar45 * fVar27;
    fVar25 = (local_154 * fVar21 + local_198 * fVar20 + local_144 * fVar22 + local_134 * fVar23) *
             fVar43 * fVar29;
    fVar39 = (local_128 * fVar16 + local_1a0 * fVar15 + local_124 * fVar17 + fVar36 * fVar18) *
             fVar41 * fVar24;
    *param_2 = (fVar1 * local_110 + local_160 * local_10c + local_1a4 * local_108 +
                local_198 * local_180 + local_1a0 * local_19c +
               (fVar35 * fVar32 + fVar33 * fVar28 + fVar27 * fVar26 + fVar25 * fVar20 +
               fVar39 * fVar15) * -8.0) * 28.0;
    param_2[1] = (local_15c * local_110 + local_158 * local_10c + local_1a8 * local_108 +
                  local_154 * local_180 + local_128 * local_19c +
                 (fVar35 * fVar34 + fVar33 * fVar30 + fVar27 * fVar44 + fVar25 * fVar21 +
                 fVar39 * fVar16) * -8.0) * 28.0;
    param_2[2] = (local_150 * local_110 + local_14c * local_10c + local_148 * local_108 +
                  local_144 * local_180 + local_124 * local_19c +
                 (fVar35 * fVar40 + fVar33 * fVar37 + fVar27 * fVar31 + fVar25 * fVar22 +
                 fVar39 * fVar17) * -8.0) * 28.0;
    param_2[3] = (local_140 * local_110 + local_13c * local_10c + local_138 * local_108 +
                  local_134 * local_180 + fVar36 * local_19c +
                 (fVar35 * fVar42 + fVar33 * fVar38 + fVar27 * fVar19 + fVar25 * fVar23 +
                 fVar39 * fVar18) * -8.0) * 28.0;
  }
  return;
}



// FUNCTION 1415b9a00 FUN_1415b9a00 body=2477 status=ok
// SIG undefined FUN_1415b9a00(void)

float FUN_1415b9a00(float *param_1,float *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
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
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float local_res8;
  float local_res10;
  float local_res18;
  float local_res20;
  float local_134;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  
  fVar25 = 0.0;
  fVar27 = param_1[2];
  fVar28 = *param_1;
  fVar29 = param_1[1];
  fVar11 = (fVar28 + fVar29 + fVar27) * 0.33333334;
  uVar8 = (uint)(fVar28 + fVar11);
  uVar7 = (uint)(fVar29 + fVar11);
  if (fVar28 + fVar11 <= 0.0) {
    uVar8 = uVar8 - 1;
  }
  if (fVar29 + fVar11 <= 0.0) {
    uVar7 = uVar7 - 1;
  }
  uVar2 = (uint)(fVar27 + fVar11);
  if (fVar27 + fVar11 <= 0.0) {
    uVar2 = uVar2 - 1;
  }
  fVar11 = (float)(int)(uVar2 + uVar7 + uVar8) * 0.16666667;
  fVar28 = fVar28 - ((float)(int)uVar8 - fVar11);
  fVar29 = fVar29 - ((float)(int)uVar7 - fVar11);
  fVar27 = fVar27 - ((float)(int)uVar2 - fVar11);
  if (fVar28 < fVar29) {
    iVar5 = 0;
    if (fVar27 <= fVar29) {
      iVar9 = 0;
      iVar10 = 1;
      if (fVar27 <= fVar28) {
        iVar6 = 1;
        iVar4 = 0;
        iVar3 = 1;
      }
      else {
        iVar6 = 0;
        iVar3 = 1;
        iVar4 = 1;
      }
    }
    else {
      iVar9 = 1;
      iVar10 = 0;
      iVar6 = 0;
      iVar3 = 1;
      iVar4 = 1;
      iVar5 = 0;
    }
  }
  else if (fVar29 < fVar27) {
    if (fVar28 < fVar27) {
      iVar9 = 1;
      iVar3 = 0;
      iVar4 = 1;
      iVar10 = 0;
      iVar6 = 1;
      iVar5 = 0;
    }
    else {
      iVar9 = 0;
      iVar3 = 0;
      iVar4 = 1;
      iVar10 = 0;
      iVar6 = 1;
      iVar5 = 1;
    }
  }
  else {
    iVar9 = 0;
    iVar4 = 0;
    iVar3 = 1;
    iVar10 = 0;
    iVar6 = iVar3;
    iVar5 = 1;
  }
  fVar32 = (fVar28 - (float)iVar5) + 0.16666667;
  fVar33 = (fVar29 - (float)iVar10) + 0.16666667;
  fVar17 = (fVar27 - (float)iVar9) + 0.16666667;
  fVar22 = (fVar28 - (float)iVar6) + 0.33333334;
  fVar30 = (fVar29 - (float)iVar3) + 0.33333334;
  fVar11 = (fVar27 - (float)iVar4) + 0.33333334;
  fVar12 = fVar28 - 0.5;
  fVar13 = fVar29 - 0.5;
  fVar14 = fVar27 - 0.5;
  fVar20 = ((0.6 - fVar28 * fVar28) - fVar29 * fVar29) - fVar27 * fVar27;
  uVar7 = uVar7 & 0xff;
  uVar8 = uVar8 & 0xff;
  if (0.0 <= fVar20) {
    local_f8 = fVar20 * fVar20;
    local_118 = local_f8 * local_f8;
    uVar1 = (ulonglong)
            ((byte)(&DAT_144c9f910)
                   [(byte)(&DAT_144c9f910)[(byte)(&DAT_144c9f910)[(byte)uVar2] + uVar7] + uVar8] &
            0xf);
    local_124 = *(float *)(&DAT_144c9fb50 + uVar1 * 0xc);
    local_100 = *(float *)(&DAT_144c9fb58 + uVar1 * 0xc);
    local_114 = *(float *)(&DAT_144c9fb54 + uVar1 * 0xc);
    fVar19 = (local_114 * fVar29 + *(float *)(&DAT_144c9fb50 + uVar1 * 0xc) * fVar28 +
             local_100 * fVar27) * local_118;
  }
  else {
    local_100 = 0.0;
    fVar20 = 0.0;
    local_114 = 0.0;
    fVar19 = 0.0;
    local_124 = 0.0;
    local_118 = 0.0;
    local_f8 = 0.0;
  }
  fVar16 = ((0.6 - fVar32 * fVar32) - fVar33 * fVar33) - fVar17 * fVar17;
  if (0.0 <= fVar16) {
    uVar1 = (ulonglong)
            ((byte)(&DAT_144c9f910)
                   [(byte)(&DAT_144c9f910)
                          [(byte)(&DAT_144c9f910)[(uVar2 & 0xff) + iVar9] + uVar7 + iVar10] + uVar8
                    + iVar5] & 0xf);
    local_res8 = *(float *)(&DAT_144c9fb50 + uVar1 * 0xc);
    local_res10 = *(float *)(&DAT_144c9fb54 + uVar1 * 0xc);
    local_104 = *(float *)(&DAT_144c9fb58 + uVar1 * 0xc);
    local_f4 = fVar16 * fVar16;
    local_res18 = local_f4 * local_f4;
    fVar26 = (local_res10 * fVar33 + *(float *)(&DAT_144c9fb50 + uVar1 * 0xc) * fVar32 +
             *(float *)(&DAT_144c9fb58 + uVar1 * 0xc) * fVar17) * local_res18;
  }
  else {
    local_104 = 0.0;
    fVar16 = 0.0;
    local_res10 = 0.0;
    fVar26 = 0.0;
    local_res8 = 0.0;
    local_res18 = 0.0;
    local_f4 = 0.0;
  }
  fVar18 = ((0.6 - fVar22 * fVar22) - fVar30 * fVar30) - fVar11 * fVar11;
  if (0.0 <= fVar18) {
    uVar1 = (ulonglong)
            ((byte)(&DAT_144c9f910)
                   [(byte)(&DAT_144c9f910)
                          [(byte)(&DAT_144c9f910)[(uVar2 & 0xff) + iVar4] + uVar7 + iVar3] + uVar8 +
                    iVar6] & 0xf);
    local_120 = *(float *)(&DAT_144c9fb50 + uVar1 * 0xc);
    local_110 = *(float *)(&DAT_144c9fb54 + uVar1 * 0xc);
    local_fc = *(float *)(&DAT_144c9fb58 + uVar1 * 0xc);
    local_f0 = fVar18 * fVar18;
    local_res20 = local_f0 * local_f0;
    fVar31 = (local_110 * fVar30 + *(float *)(&DAT_144c9fb50 + uVar1 * 0xc) * fVar22 +
             *(float *)(&DAT_144c9fb58 + uVar1 * 0xc) * fVar11) * local_res20;
  }
  else {
    local_fc = 0.0;
    fVar18 = 0.0;
    local_110 = 0.0;
    fVar31 = 0.0;
    local_120 = 0.0;
    local_res20 = 0.0;
    local_f0 = 0.0;
  }
  fVar15 = ((0.6 - fVar12 * fVar12) - fVar13 * fVar13) - fVar14 * fVar14;
  if (0.0 <= fVar15) {
    uVar1 = (ulonglong)
            ((byte)(&DAT_144c9f911)
                   [(byte)(&DAT_144c9f911)[(byte)(&DAT_144c9f911)[(byte)uVar2] + uVar7] + uVar8] &
            0xf);
    local_11c = *(float *)(&DAT_144c9fb50 + uVar1 * 0xc);
    local_10c = *(float *)(&DAT_144c9fb54 + uVar1 * 0xc);
    fVar25 = *(float *)(&DAT_144c9fb58 + uVar1 * 0xc);
    local_ec = fVar15 * fVar15;
    local_134 = local_ec * local_ec;
    fVar23 = (local_10c * fVar13 + *(float *)(&DAT_144c9fb50 + uVar1 * 0xc) * fVar12 +
             fVar25 * fVar14) * local_134;
  }
  else {
    local_10c = 0.0;
    fVar15 = 0.0;
    local_11c = 0.0;
    fVar23 = 0.0;
    local_134 = 0.0;
    local_ec = 0.0;
  }
  if (param_2 != (float *)0x0) {
    fVar24 = (local_114 * fVar29 + local_124 * fVar28 + local_100 * fVar27) * local_f8 * fVar20;
    fVar21 = (local_res10 * fVar33 + local_res8 * fVar32 + local_104 * fVar17) * local_f4 * fVar16;
    fVar16 = (local_110 * fVar30 + local_120 * fVar22 + local_fc * fVar11) * local_f0 * fVar18;
    fVar20 = (local_10c * fVar13 + local_11c * fVar12 + fVar25 * fVar14) * local_ec * fVar15;
    *param_2 = ((local_res8 * local_res18 + local_124 * local_118 + local_120 * local_res20 +
                local_11c * local_134) -
               (fVar21 * fVar32 + fVar24 * fVar28 + fVar16 * fVar22 + fVar20 * fVar12) * 8.0) * 28.0
    ;
    param_2[1] = ((local_res10 * local_res18 + local_114 * local_118 + local_110 * local_res20 +
                  local_10c * local_134) -
                 (fVar21 * fVar33 + fVar24 * fVar29 + fVar16 * fVar30 + fVar20 * fVar13) * 8.0) *
                 28.0;
    param_2[2] = ((local_104 * local_res18 + local_100 * local_118 + local_fc * local_res20 +
                  fVar25 * local_134) -
                 (fVar21 * fVar17 + fVar24 * fVar27 + fVar16 * fVar11 + fVar20 * fVar14) * 8.0) *
                 28.0;
  }
  return (fVar26 + fVar19 + fVar31 + fVar23) * 28.0;
}



// FUNCTION 1415ba3b0 FUN_1415ba3b0 body=431 status=ok
// SIG undefined FUN_1415ba3b0(void)

float FUN_1415ba3b0(float param_1,float *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  iVar1 = (int)param_1;
  if (param_1 <= 0.0) {
    iVar1 = (int)param_1 + -1;
  }
  param_1 = param_1 - (float)iVar1;
  fVar7 = param_1 - 1.0;
  fVar5 = (float)((&DAT_144c9f910)[(longlong)iVar1 & 0xff] & 7) + 1.0;
  fVar10 = 1.0 - param_1 * param_1;
  fVar6 = fVar10 * fVar10;
  if (((&DAT_144c9f910)[(longlong)iVar1 & 0xff] & 8) != 0) {
    fVar5 = -fVar5;
  }
  fVar9 = fVar5 * fVar6 * fVar6;
  fVar8 = 1.0 - fVar7 * fVar7;
  fVar2 = fVar8 * fVar8;
  fVar4 = (float)((&DAT_144c9f910)[(longlong)iVar1 + 1U & 0xff] & 7) + 1.0;
  if (((&DAT_144c9f910)[(longlong)iVar1 + 1U & 0xff] & 8) != 0) {
    fVar4 = -fVar4;
  }
  fVar3 = fVar4 * fVar2 * fVar2;
  if (param_2 != (float *)0x0) {
    *param_2 = ((fVar3 + fVar9) -
               (fVar2 * fVar8 * fVar4 * fVar7 * fVar7 + fVar6 * fVar10 * fVar5 * param_1 * param_1)
               * 8.0) * 0.25;
  }
  return (fVar3 * fVar7 + fVar9 * param_1) * 0.25;
}



// FUNCTION 1415ba560 Size body=83 status=ok
// SIG undefined Size(void)

undefined8 IFileHandle::Size(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  (**(code **)(*param_1 + 0x18))(param_1,0);
  uVar2 = (**(code **)(*param_1 + 8))(param_1);
  (**(code **)(*param_1 + 0x10))(param_1,uVar1);
  return uVar2;
}



// FUNCTION 1415ba5c0 SizeRequest body=264 status=ok
// SIG undefined SizeRequest(void)

longlong * FGenericAsyncReadFileHandle::SizeRequest(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  
  plVar2 = (longlong *)operator_new(0x90);
  if (plVar2 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 0x10);
  }
  FUN_14159faf0(plVar2,*(undefined8 *)(param_1 + 8),puVar4,param_2,1,0);
  *plVar2 = (longlong)&PTR__scalar_deleting_destructor__144ca0750;
  puVar3 = (undefined8 *)operator_new(0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_Abandon_144ca0738;
    puVar3[1] = plVar2;
    *(undefined4 *)(puVar3 + 2) = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
  }
  plVar2[0xf] = (longlong)puVar3;
  cVar1 = FUN_1415bac00();
  if (cVar1 != '\0') {
    FAsyncTask<FGenericReadRequestWorker>::Start(plVar2[0xf],0,DAT_1468b5018);
    return plVar2;
  }
  FAsyncTask<FGenericReadRequestWorker>::Start(plVar2[0xf],1,DAT_1468b5010);
  (**(code **)(*plVar2 + 8))(plVar2,0);
  return plVar2;
}



// FUNCTION 1415ba6d0 SnprintfImpl body=106 status=ok
// SIG undefined SnprintfImpl(void)

int TCString<char>::SnprintfImpl
              (undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong *puVar2;
  undefined8 local_res20;
  
  local_res20 = param_4;
  puVar2 = (ulonglong *)__local_stdio_printf_options();
  iVar1 = __stdio_common_vsprintf
                    (*puVar2 | 1,param_1,(longlong)(param_2 + -1),param_3,0,&local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  if (param_2 <= iVar1) {
    iVar1 = -1;
  }
  return iVar1;
}



// FUNCTION 1415ba740 SnprintfImpl body=106 status=ok
// SIG undefined SnprintfImpl(void)

int TCString<wchar_t>::SnprintfImpl
              (undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong *puVar2;
  undefined8 local_res20;
  
  local_res20 = param_4;
  puVar2 = (ulonglong *)__local_stdio_printf_options();
  iVar1 = __stdio_common_vswprintf
                    (*puVar2 | 1,param_1,(longlong)(param_2 + -1),param_3,0,&local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  if (param_2 <= iVar1) {
    iVar1 = -1;
  }
  return iVar1;
}



// FUNCTION 1415ba7b0 StackWalkAndDump body=445 status=ok
// SIG undefined StackWalkAndDump(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FGenericPlatformStackWalk::StackWalkAndDump
               (longlong param_1,longlong param_2,uint param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  char *_Dest;
  undefined8 *puVar6;
  undefined1 auStack_fa8 [32];
  char local_f88 [1023];
  undefined1 local_b89;
  char local_b88 [1023];
  undefined1 local_789;
  char local_788 [1023];
  undefined1 local_389;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_368 [100];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_fa8;
  ::_guard_xfg_dispatch_icall_nop(local_368,0,800);
  uVar2 = FWindowsPlatformStackWalk::CaptureStackBackTrace(local_368,100,param_4);
  if (param_3 < uVar2) {
    puVar6 = local_368 + param_3;
    uVar5 = (ulonglong)(uVar2 - param_3);
    do {
      uVar1 = *puVar6;
      if ((param_1 != 0) && (param_2 != 0)) {
        local_388 = 0;
        local_380 = 0;
        local_378 = 0;
        strncpy(local_f88,
                (char *)((longlong)
                         L"FGenericPlatformProcess::GetApplicationName not implemented on this platform"
                        + 0x9b),0x400);
        local_b89 = 0;
        strncpy(local_b88,"",0x400);
        local_789 = 0;
        strncpy(local_788,"",0x400);
        local_389 = 0;
        FWindowsPlatformStackWalk::ProgramCounterToSymbolInfo(uVar1,local_f88);
        SymbolInfoToHumanReadableString(local_f88,param_1,param_2);
      }
      lVar3 = -1;
      do {
        lVar3 = lVar3 + 1;
      } while (*(char *)(param_1 + lVar3) != '\0');
      _Dest = (char *)((int)lVar3 + param_1);
      iVar4 = (int)param_2 - (int)lVar3;
      if (0 < iVar4) {
        strncpy(_Dest,"\r\n",(longlong)iVar4);
        _Dest[(longlong)iVar4 - 1] = '\0';
      }
      puVar6 = puVar6 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 1415ba970 Start body=274 status=ok
// SIG undefined Start(void)

void FAsyncTask<FGenericReadRequestWorker>::Start(longlong param_1,char param_2,longlong *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  LOCK();
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  UNLOCK();
  plVar5 = (longlong *)0x0;
  *(longlong **)(param_1 + 0x20) = param_3;
  if (param_2 != '\0') {
    *(undefined8 *)(param_1 + 0x20) = 0;
    param_3 = plVar5;
  }
  if (param_3 == (longlong *)0x0) {
    FUN_1415b5910();
    *(undefined8 *)(param_1 + 0x18) = 0;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
    LOCK();
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    UNLOCK();
    return;
  }
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (*(longlong **)(param_1 + 0x18) == (longlong *)0x0) {
    uVar2 = FUN_1415a8ad0();
    uVar1 = FUN_141594c40(uVar2);
    plVar3 = plVar5;
    if (uVar1 != 0) {
      plVar3 = *(longlong **)
                ((&DAT_1468a81f8)[uVar1 >> 0xe] + 8 + (ulonglong)(uVar1 & 0x3fff) * 0x18);
      FLockFreeLinkPolicy::FreeLockFreeLink(uVar1);
    }
    if (plVar3 == (longlong *)0x0) {
      plVar3 = (longlong *)FWindowsPlatformProcess::CreateSynchEvent(1);
    }
    AK::MemoryMgr::StartProfileThreadUsage((long)plVar3);
    plVar4 = (longlong *)operator_new(0x18);
    if (plVar4 != (longlong *)0x0) {
      *(undefined4 *)(plVar4 + 1) = 0;
      *plVar4 = (longlong)&PTR__purecall_144ca0288;
      *(undefined4 *)((longlong)plVar4 + 0xc) = 0;
      *plVar4 = (longlong)&PTR_LAB_144ca09f0;
      plVar4[2] = (longlong)plVar3;
      plVar5 = plVar4;
    }
    *(longlong **)(param_1 + 0x18) = plVar5;
    plVar3 = plVar5;
  }
  (**(code **)(*plVar3 + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x0001415baa5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))(*(longlong **)(param_1 + 0x20),param_1);
  return;
}



// FUNCTION 1415baa90 StrTimestamp body=353 status=ok
// SIG undefined StrTimestamp(void)

undefined2 * FGenericPlatformTime::StrTimestamp(void)

{
  short *psVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined1 local_res20 [8];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined1 local_2c [12];
  
  DAT_1468b1510 = 0;
  FWindowsPlatformTime::SystemTime
            (local_res8,local_res18,local_2c,local_res10,local_30,local_34,local_38,local_res20);
  TCString<wchar_t>::SnprintfImpl
            (&DAT_1468b1510,0x400,L"%02d/%02d/%02d",local_res18[0],local_res10[0],
             local_res8[0] % 100);
  puVar2 = (undefined4 *)&DAT_1468b150e;
  do {
    psVar1 = (short *)((longlong)puVar2 + 2);
    puVar2 = (undefined4 *)((longlong)puVar2 + 2);
  } while (*psVar1 != 0);
  lVar3 = -1;
  *puVar2 = 0x20;
  do {
    lVar3 = lVar3 + 1;
  } while ((&DAT_1468b1510)[lVar3] != 0);
  FWindowsPlatformTime::SystemTime
            (local_38,local_34,local_30,local_2c,local_res18,local_res10,local_res8,local_res20);
  TCString<wchar_t>::SnprintfImpl
            (&DAT_1468b1510 + (int)lVar3,0x400 - (int)lVar3,L"%02d:%02d:%02d",local_res18[0],
             local_res10[0],local_res8[0]);
  return &DAT_1468b1510;
}



// FUNCTION 1415bac00 FUN_1415bac00 body=115 status=ok
// SIG undefined FUN_1415bac00(void)

undefined1 FUN_1415bac00(void)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b1500) {
    _Init_thread_header(&DAT_1468b1500);
    if (DAT_1468b1500 == -1) {
      uVar2 = FCommandLine::Get();
      cVar1 = FParse::Param(uVar2,L"nothreading");
      DAT_1468b14fc = cVar1 == '\0';
      _Init_thread_footer(&DAT_1468b1500);
    }
  }
  return DAT_1468b14fc;
}



// FUNCTION 1415bac80 SymbolInfoToHumanReadableString body=871 status=ok
// SIG undefined SymbolInfoToHumanReadableString(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FGenericPlatformStackWalk::SymbolInfoToHumanReadableString
                    (char *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_678 [32];
  int local_658;
  char acStack_649 [1025];
  char local_248 [256];
  char local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_678;
  if ((param_2 == 0) || (param_3 == 0)) {
    return local_48 & 0xffffffffffffff00;
  }
  ::_guard_xfg_dispatch_icall_nop(acStack_649 + 1,0,0x400);
  pcVar3 = ::_guard_xfg_dispatch_icall_nop(param_1,0x5c);
  pcVar4 = ::_guard_xfg_dispatch_icall_nop(param_1,0x2f);
  if (pcVar4 <= pcVar3) {
    pcVar4 = pcVar3;
  }
  pcVar3 = pcVar4 + 1;
  if (pcVar4 == (char *)0x0) {
    pcVar3 = param_1;
  }
  ::_guard_xfg_dispatch_icall_nop(local_248,0,0x100);
  TCString<char>::SnprintfImpl(local_248,0x100,"0x%016llx ",*(undefined8 *)(param_1 + 0xc10));
  lVar9 = -1;
  lVar5 = -1;
  do {
    lVar7 = lVar5 + 1;
    lVar6 = lVar5 + 2;
    lVar5 = lVar7;
  } while (acStack_649[lVar6] != '\0');
  iVar2 = (int)lVar7;
  iVar1 = 0x400 - iVar2;
  if (0 < iVar1) {
    strncpy(acStack_649 + (longlong)iVar2 + 1,local_248,(longlong)iVar1);
    (acStack_649 + (longlong)iVar2 + 1)[(longlong)iVar1 - 1] = '\0';
  }
  lVar5 = -1;
  do {
    lVar5 = lVar5 + 1;
  } while (pcVar3[lVar5] != '\0');
  if (0 < (int)lVar5) {
    lVar5 = -1;
    do {
      lVar7 = lVar5 + 1;
      lVar6 = lVar5 + 2;
      lVar5 = lVar7;
    } while (acStack_649[lVar6] != '\0');
    iVar2 = (int)lVar7;
    iVar1 = 0x400 - iVar2;
    if (0 < iVar1) {
      strncpy(acStack_649 + (longlong)iVar2 + 1,pcVar3,(longlong)iVar1);
      (acStack_649 + (longlong)iVar2 + 1)[(longlong)iVar1 - 1] = '\0';
    }
    lVar5 = -1;
    do {
      lVar7 = lVar5 + 1;
      lVar6 = lVar5 + 2;
      lVar5 = lVar7;
    } while (acStack_649[lVar6] != '\0');
    iVar2 = (int)lVar7;
    iVar1 = 0x400 - iVar2;
    if (0 < iVar1) {
      strncpy(acStack_649 + (longlong)iVar2 + 1,"!",(longlong)iVar1);
      (acStack_649 + (longlong)iVar2 + 1)[(longlong)iVar1 - 1] = '\0';
    }
  }
  pcVar4 = param_1 + 0x400;
  lVar5 = -1;
  do {
    lVar5 = lVar5 + 1;
  } while (pcVar4[lVar5] != '\0');
  lVar6 = -1;
  do {
    lVar8 = lVar6 + 1;
    lVar7 = lVar6 + 2;
    lVar6 = lVar8;
  } while (acStack_649[lVar7] != '\0');
  iVar1 = (int)lVar8;
  if ((int)lVar5 < 1) {
    iVar2 = 0x400 - iVar1;
    if (0 < iVar2) {
      pcVar4 = "UnknownFunction";
      goto LAB_1415bae85;
    }
  }
  else {
    iVar2 = 0x400 - iVar1;
    if (0 < iVar2) {
LAB_1415bae85:
      strncpy(acStack_649 + (longlong)iVar1 + 1,pcVar4,(longlong)iVar2);
      (acStack_649 + (longlong)iVar1 + 1)[(longlong)iVar2 - 1] = '\0';
    }
  }
  lVar6 = -1;
  do {
    lVar8 = lVar6 + 1;
    lVar7 = lVar6 + 0x801;
    lVar6 = lVar8;
  } while (param_1[lVar7] != '\0');
  if (((int)lVar8 < 1) || (iVar1 = *(int *)(param_1 + 0xc00), iVar1 < 1)) {
    lVar6 = -1;
    do {
      lVar8 = lVar6 + 1;
      lVar7 = lVar6 + 2;
      lVar6 = lVar8;
    } while (acStack_649[lVar7] != '\0');
    iVar1 = (int)lVar8;
    pcVar4 = acStack_649 + (longlong)iVar1 + 1;
    iVar1 = 0x400 - iVar1;
    if (iVar1 < 1) goto LAB_1415baf70;
    pcVar3 = " []";
  }
  else {
    ::_guard_xfg_dispatch_icall_nop(local_148,0,0x100);
    local_658 = iVar1;
    TCString<char>::SnprintfImpl(local_148,0x100," [%s:%i]",param_1 + 0x800);
    lVar6 = -1;
    do {
      lVar8 = lVar6 + 1;
      lVar7 = lVar6 + 2;
      lVar6 = lVar8;
    } while (acStack_649[lVar7] != '\0');
    iVar1 = (int)lVar8;
    pcVar4 = acStack_649 + (longlong)iVar1 + 1;
    iVar1 = 0x400 - iVar1;
    if (iVar1 < 1) goto LAB_1415baf70;
    pcVar3 = local_148;
  }
  strncpy(pcVar4,pcVar3,(longlong)iVar1);
  pcVar4[(longlong)iVar1 - 1] = '\0';
LAB_1415baf70:
  do {
    lVar9 = lVar9 + 1;
  } while (*(char *)(param_2 + lVar9) != '\0');
  iVar1 = (int)param_3 - (int)lVar9;
  pcVar4 = (char *)((int)lVar9 + param_2);
  if (0 < iVar1) {
    strncpy(pcVar4,acStack_649 + 1,(longlong)iVar1);
    pcVar4[(longlong)iVar1 - 1] = '\0';
  }
  return (ulonglong)(0 < (int)lVar5);
}



// FUNCTION 1415baff0 FUN_1415baff0 body=321 status=ok
// SIG undefined FUN_1415baff0(void)

undefined8 * FUN_1415baff0(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 1) = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    puVar1 = (undefined8 *)*param_1;
    *puVar1 = 0x65006d00610047;
    *(undefined2 *)(puVar1 + 1) = 0;
    return param_1;
  }
  if (param_2 == 1) {
    *(undefined4 *)(param_1 + 1) = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    builtin_wcsncpy((wchar_t *)*param_1,L"Render",7);
    return param_1;
  }
  if (param_2 == 2) {
    *(undefined4 *)(param_1 + 1) = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    *(undefined8 *)*param_1 = 0x4900480052;
    return param_1;
  }
  if (param_2 != 3) {
    if (param_2 != 4) {
      *(undefined4 *)(param_1 + 1) = 4;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      *(undefined8 *)*param_1 = 0x3f003f003f;
      return param_1;
    }
    *(undefined4 *)(param_1 + 1) = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    puVar1 = (undefined8 *)*param_1;
    *puVar1 = 0x6b007300610054;
    *(undefined4 *)(puVar1 + 1) = 0x73;
    return param_1;
  }
  *(undefined4 *)(param_1 + 1) = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
  *(undefined8 *)*param_1 = 0x5500500047;
  return param_1;
}



// FUNCTION 1415bb140 FUN_1415bb140 body=656 status=ok
// SIG undefined FUN_1415bb140(void)

undefined8 FUN_1415bb140(void)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  DWORD *pDVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar13;
  longlong local_res20;
  undefined8 uVar14;
  longlong local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  longlong *plVar12;
  
  plVar13 = (longlong *)0x0;
  if (((5 < DAT_1464aaa8c) &&
      (uVar11 = *DAT_1468b0c90, (int)DAT_1468b0280 - (int)DAT_1468b0288 < (int)(10000 - uVar11))) &&
     (0 < (int)uVar11)) {
    uVar10 = (ulonglong)uVar11;
    plVar12 = plVar13;
    do {
      pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar5 = TlsGetValue(*pDVar4);
      if (plVar5 == (longlong *)0x0) {
        plVar6 = (longlong *)operator_new(0x18);
        plVar5 = plVar13;
        if (plVar6 != (longlong *)0x0) {
          *plVar6 = 0;
          plVar6[1] = 0;
          *(undefined4 *)(plVar6 + 2) = 0;
          plVar5 = plVar6;
        }
        TlsSetValue(*pDVar4,plVar5);
      }
      plVar6 = (longlong *)plVar5[1];
      if (plVar6 == (longlong *)0x0) {
        if (*plVar5 == 0) {
          lVar7 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar4 + 2);
          plVar5[1] = lVar7;
          if (lVar7 == 0) {
            puVar8 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar5[1] = (longlong)puVar8;
            lVar7 = 0x1f;
            do {
              puVar2 = puVar8 + 0x20;
              *puVar8 = puVar2;
              lVar7 = lVar7 + -1;
              puVar8 = puVar2;
            } while (lVar7 != 0);
            *puVar2 = 0;
          }
        }
        else {
          plVar5[1] = *plVar5;
          *plVar5 = 0;
        }
        plVar6 = (longlong *)plVar5[1];
        iVar3 = 0x20;
        *(undefined4 *)(plVar5 + 2) = 0x20;
      }
      else {
        iVar3 = (int)plVar5[2];
      }
      plVar5[1] = *plVar6;
      *(int *)(plVar5 + 2) = iVar3 + -1;
      iVar3 = FUN_1415ab210();
      if (iVar3 == 1) {
        uVar11 = (uint)plVar12 | 1;
        plVar5 = &local_res20;
        plVar9 = plVar13;
      }
      else {
        uVar11 = (uint)plVar12 | 2;
        plVar5 = (longlong *)FUN_1415914c0(&local_58);
        plVar9 = (longlong *)*plVar5;
      }
      plVar12 = (longlong *)(ulonglong)uVar11;
      *plVar5 = 0;
      *plVar6 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar6 + 1) = 0xff;
      *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
      *plVar6 = (longlong)&PTR_FUN_144ca0408;
      *(undefined1 *)((longlong)plVar6 + 0x11) = 0;
      plVar6[3] = (longlong)plVar9;
      uVar14 = 0;
      local_48 = 0;
      local_40 = 2;
      local_50 = plVar6;
      if (((uVar11 & 2) != 0) &&
         (plVar12 = (longlong *)(ulonglong)(uVar11 & 0xfffffffd), local_58 != 0)) {
        LOCK();
        piVar1 = (int *)(local_58 + 0x48);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          FGraphEvent::Recycle();
        }
      }
      if ((((ulonglong)plVar12 & 1) != 0) &&
         (plVar12 = (longlong *)(ulonglong)((uint)plVar12 & 0xfffffffe), local_res20 != 0)) {
        LOCK();
        piVar1 = (int *)(local_res20 + 0x48);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          FGraphEvent::Recycle(local_res20);
        }
      }
      lVar7 = plVar6[3];
      piVar1 = (int *)(lVar7 + 0x48);
      if (lVar7 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      FUN_1415b8070(plVar6,0,2,1,lVar7,uVar14);
      DAT_1468b0280 = DAT_1468b0280 + 1;
      if (lVar7 != 0) {
        LOCK();
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          FGraphEvent::Recycle(lVar7);
        }
      }
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return 1;
}



// FUNCTION 1415bb3d0 FUN_1415bb3d0 body=85 status=ok
// SIG undefined FUN_1415bb3d0(void)

wchar_t * FUN_1415bb3d0(undefined4 param_1)

{
  switch(param_1) {
  case 1:
    return L"Debug";
  case 2:
    return L"DebugGame";
  case 3:
    return L"Development";
  case 4:
    return L"Shipping";
  case 5:
    return L"Test";
  case 6:
    return L"Diagnostic";
  default:
    return L"Unknown";
  }
}



// FUNCTION 1415bb440 FUN_1415bb440 body=384 status=ok
// SIG undefined FUN_1415bb440(void)

void FUN_1415bb440(longlong param_1,longlong param_2,ulonglong param_3,double param_4)

{
  int *piVar1;
  BOOL BVar2;
  longlong *plVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  LARGE_INTEGER local_28 [4];
  
  plVar3 = (longlong *)FUN_1415a9af0();
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0e88);
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0e88);
  }
  if (*plVar3 != 0) {
    QueryPerformanceCounter(local_28);
    dVar7 = (double)local_28[0].QuadPart * DAT_1468b02f8 + 16777216.0;
    if ((param_4 != 0.0) && (param_4 <= dVar7)) {
      piVar1 = (int *)*plVar3;
      dVar5 = *(double *)(piVar1 + 0x1e);
      if ((dVar5 <= 0.0) || (param_4 < dVar5)) {
        *(double *)(piVar1 + 0x1e) = param_4;
        dVar5 = param_4;
      }
      uVar4 = 0;
      dVar5 = param_4 - dVar5;
      if (*(longlong *)(piVar1 + 0x1a) == param_1) {
        if (param_3 < *(ulonglong *)(piVar1 + 0x1c)) {
          piVar1[2] = piVar1[2] + 1;
          *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
          uVar4 = *(longlong *)(piVar1 + 0x1c) - param_3;
        }
      }
      else {
        piVar1[1] = piVar1[1] + 1;
        piVar1[2] = piVar1[2] + 1;
        *(longlong *)(piVar1 + 0x1a) = param_1;
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
        uVar4 = param_3;
      }
      plVar3[8] = plVar3[8] + uVar4;
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      plVar3[7] = plVar3[7] + param_2;
      plVar3[4] = (longlong)((dVar7 - param_4) + (double)plVar3[4]);
      plVar3[5] = (longlong)(dVar5 + (double)plVar3[5]);
      dVar6 = (double)plVar3[6];
      if ((double)plVar3[6] <= dVar5) {
        dVar6 = dVar5;
      }
      plVar3[6] = (longlong)dVar6;
      *piVar1 = *piVar1 + 1;
      dVar6 = *(double *)(piVar1 + 10);
      if (*(double *)(piVar1 + 10) <= dVar5) {
        dVar6 = dVar5;
      }
      *(longlong *)(piVar1 + 0xc) = *(longlong *)(piVar1 + 0xc) + param_2;
      *(ulonglong *)(piVar1 + 0xe) = *(longlong *)(piVar1 + 0xe) + uVar4;
      *(double *)(piVar1 + 8) = dVar5 + *(double *)(piVar1 + 8);
      *(double *)(piVar1 + 6) = (dVar7 - param_4) + *(double *)(piVar1 + 6);
      *(double *)(piVar1 + 10) = dVar6;
      *(double *)(piVar1 + 0x1e) = dVar7;
      *(ulonglong *)(piVar1 + 0x1c) = param_2 + param_3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001415bb5b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0e88);
  return;
}



// FUNCTION 1415bb5c0 Trigger body=11 status=ok
// SIG undefined Trigger(void)

void FSafeRecyclableEvent::Trigger(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001415bb5c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
  return;
}



// FUNCTION 1415bb5d0 FUN_1415bb5d0 body=187 status=ok
// SIG undefined FUN_1415bb5d0(void)

void FUN_1415bb5d0(longlong param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  
  puVar4 = DAT_1464a8b80;
  if (DAT_1464a8b80 == (undefined *)0x0) {
    puVar4 = &DAT_1464a8a80;
  }
  puVar2 = puVar4;
  if (puVar4 != puVar4 + (longlong)DAT_1464a8b88 * 0x10) {
    while (*(longlong *)(puVar2 + 8) != param_1) {
      puVar2 = puVar2 + 0x10;
      if (puVar2 == puVar4 + (longlong)DAT_1464a8b88 * 0x10) {
        return;
      }
    }
    iVar1 = (int)((longlong)puVar2 - (longlong)puVar4 >> 4);
    if (iVar1 != -1) {
      iVar3 = (DAT_1464a8b88 - iVar1) + -1;
      if (0 < iVar3) {
        iVar3 = 1;
      }
      if (iVar3 != 0) {
        _guard_xfg_dispatch_icall_nop
                  (puVar4 + (longlong)iVar1 * 0x10,puVar4 + (longlong)(DAT_1464a8b88 - iVar3) * 0x10
                   ,(longlong)iVar3 << 4);
      }
      DAT_1464a8b88 = DAT_1464a8b88 + -1;
      TArray<D3D12_STATE_SUBOBJECT,TInlineAllocator<16,FDefaultAllocator>_>::ResizeShrink
                (&DAT_1464a8a80);
      return;
    }
  }
  return;
}



// FUNCTION 1415bb690 FUN_1415bb690 body=296 status=ok
// SIG undefined FUN_1415bb690(void)

void FUN_1415bb690(longlong param_1)

{
  longlong *plVar1;
  BOOL BVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  
  if ((param_1 != 0) && (lVar3 = FUN_1415a9b70(), *(char *)(lVar3 + 0x18) != '\0')) {
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x20));
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x20));
    }
    plVar1 = *(longlong **)(lVar3 + 0x48);
    for (plVar4 = plVar1; plVar4 != plVar1 + (longlong)*(int *)(lVar3 + 0x50) * 6;
        plVar4 = plVar4 + 6) {
      if (*plVar4 == param_1) {
        lVar6 = ((longlong)plVar4 - (longlong)plVar1) / 6 +
                ((longlong)plVar4 - (longlong)plVar1 >> 0x3f);
        iVar7 = (int)(lVar6 >> 3) - (int)(lVar6 >> 0x3f);
        if ((-1 < iVar7) && (iVar7 < *(int *)(lVar3 + 0x50))) {
          TBaseDelegate<FText>::~TBaseDelegate<FText>(plVar1 + (longlong)iVar7 * 6 + 4);
          iVar8 = *(int *)(lVar3 + 0x50);
          iVar5 = (iVar8 - iVar7) + -1;
          if (0 < iVar5) {
            iVar5 = 1;
          }
          if (iVar5 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(lVar3 + 0x48) + (longlong)iVar7 * 0x30),
                       (void *)((longlong)(iVar8 - iVar5) * 0x30 + *(longlong *)(lVar3 + 0x48)),
                       (longlong)iVar5 * 0x30);
            iVar8 = *(int *)(lVar3 + 0x50);
          }
          *(int *)(lVar3 + 0x50) = iVar8 + -1;
        }
        break;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x20));
  }
  return;
}



// FUNCTION 1415bb7c0 FUN_1415bb7c0 body=160 status=ok
// SIG undefined FUN_1415bb7c0(void)

void FUN_1415bb7c0(int *param_1)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  LPVOID pvVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 local_28 [32];
  
  lVar2 = DAT_1468b0e58;
  if (DAT_1468e2448 == 0) {
LAB_1415bb7e8:
    if (DAT_1468c21ae != '\0') {
      DVar3 = GetCurrentThreadId();
      if (DVar3 != DAT_1468c21c0) {
        lVar5 = 4;
        goto LAB_1415bb80d;
      }
    }
  }
  else {
    pvVar4 = TlsGetValue(DAT_1468e2448);
    if ((int)pvVar4 == 0) goto LAB_1415bb7e8;
  }
  lVar5 = 0;
LAB_1415bb80d:
  iVar1 = *(int *)(lVar5 + lVar2);
  *(bool *)((longlong)param_1 + 9) = iVar1 != 0;
  if ((iVar1 != 0) && (*param_1 == 1)) {
    plVar6 = (longlong *)TGraphTask<FNullGraphTask>::CreateTask(local_28,0,2);
    *(undefined4 *)(*plVar6 + 0x10) = 0xaff;
    lVar2 = *plVar6;
    FUN_141599db0(lVar2,plVar6[1],(int)plVar6[2],0);
    *(longlong *)(param_1 + 0x10) = lVar2;
  }
  return;
}



// FUNCTION 1415bb860 UseRenderThread body=85 status=ok
// SIG undefined UseRenderThread(void)

undefined4 FGenericPlatformMisc::UseRenderThread(void)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  
  uVar1 = FCommandLine::Get();
  cVar2 = FParse::Param(uVar1,L"norenderthread");
  if (cVar2 == '\0') {
    uVar1 = FCommandLine::Get();
    cVar2 = FParse::Param(uVar1,L"onethread");
    if (cVar2 == '\0') {
      iVar3 = FUN_1416a5810();
      if (1 < iVar3) {
        cVar2 = FUN_1415bac00();
        if (cVar2 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1415bb8c0 FUN_1415bb8c0 body=426 status=ok
// SIG undefined FUN_1415bb8c0(void)

undefined8 FUN_1415bb8c0(longlong param_1,short *param_2,char param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined2 **ppuVar3;
  undefined2 *puVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined2 *local_38;
  void *local_30;
  longlong local_28 [2];
  
  local_30 = (undefined2 *)0x0;
  local_38 = (undefined2 *)0x0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (param_2[lVar6] != 0);
    uVar5 = (int)lVar6 + 1;
    local_30 = (void *)(ulonglong)uVar5;
    if (0 < (int)uVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    _guard_xfg_dispatch_icall_nop(local_38,param_2,(longlong)(int)uVar5 * 2);
  }
  uVar5 = 0;
  ppuVar3 = (undefined2 **)
            FString::Replace(&local_38,local_28,*(undefined8 *)(param_1 + 0x10),
                             *(undefined8 *)(param_1 + 0x18),1);
  if (&local_38 != ppuVar3) {
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_38 = *ppuVar3;
    *ppuVar3 = (undefined2 *)0x0;
    local_30 = ppuVar3[1];
    ppuVar3[1] = (undefined2 *)0x0;
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  plVar1 = *(longlong **)(param_1 + 8);
  if (param_3 == '\0') {
    puVar4 = &DAT_143f3eda8;
    if ((int)local_30 != 0) {
      puVar4 = local_38;
    }
    cVar2 = (**(code **)(*plVar1 + 0x68))(plVar1,puVar4);
    if ((cVar2 != '\0') && (*(char *)(param_1 + 0x20) != '\0')) {
      puVar4 = &DAT_143f3eda8;
      if ((int)local_30 != 0) {
        puVar4 = local_38;
      }
      (**(code **)(**(longlong **)(param_1 + 8) + 0x78))(*(longlong **)(param_1 + 8),puVar4);
    }
    puVar4 = &DAT_143f3eda8;
    if ((int)local_30 != 0) {
      puVar4 = local_38;
    }
    cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x158))
                      (*(longlong **)(param_1 + 8),puVar4,param_2,0,uVar5 & 0xffffff00);
joined_r0x0001415bba5d:
    if (cVar2 == '\0') {
      uVar7 = 0;
      goto LAB_1415bb9de;
    }
  }
  else {
    puVar4 = &DAT_143f3eda8;
    if ((int)local_30 != 0) {
      puVar4 = local_38;
    }
    cVar2 = (**(code **)(*plVar1 + 0x150))(plVar1,puVar4);
    if (cVar2 == '\0') {
      puVar4 = &DAT_143f3eda8;
      if ((int)local_30 != 0) {
        puVar4 = local_38;
      }
      cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xd0))(*(longlong **)(param_1 + 8),puVar4)
      ;
      goto joined_r0x0001415bba5d;
    }
  }
  uVar7 = 1;
LAB_1415bb9de:
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return uVar7;
}



// FUNCTION 1415bba70 Visit body=313 status=ok
// SIG undefined Visit(void)

undefined8 FFindFilesVisitor::Visit(longlong param_1,short *param_2,char param_3)

{
  short sVar1;
  short sVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  short *psVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  void *pvVar10;
  int iVar11;
  void *local_28;
  int local_20;
  int local_1c;
  
  if (param_3 != '\0') {
    return 1;
  }
  iVar9 = *(int *)(param_1 + 0x20);
  lVar8 = -1;
  if (0 < iVar9) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (param_2[lVar4] != 0);
    if (iVar9 <= (int)lVar4) {
      psVar6 = param_2 + ((int)lVar4 - iVar9);
      lVar4 = *(longlong *)(param_1 + 0x18) - (longlong)psVar6;
      do {
        sVar1 = *psVar6;
        sVar2 = *(short *)((longlong)psVar6 + lVar4);
        if (sVar1 != sVar2) break;
        psVar6 = psVar6 + 1;
      } while (sVar2 != 0);
      if (sVar1 == sVar2) goto LAB_1415bbae7;
    }
    return 1;
  }
LAB_1415bbae7:
  pvVar10 = (void *)0x0;
  iVar9 = 0;
  local_28 = (void *)0x0;
  local_1c = 0;
  iVar11 = iVar9;
  if ((param_2 != (short *)0x0) && (iVar11 = 0, *param_2 != 0)) {
    do {
      lVar8 = lVar8 + 1;
    } while (param_2[lVar8] != 0);
    iVar7 = (int)lVar8 + 1;
    local_20 = iVar7;
    if (0 < iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    iVar11 = local_1c;
    iVar9 = local_20;
    pvVar10 = local_28;
    ::_guard_xfg_dispatch_icall_nop(local_28,param_2,(longlong)iVar7 * 2);
  }
  plVar3 = *(longlong **)(param_1 + 0x10);
  iVar7 = (int)plVar3[1];
  *(int *)(plVar3 + 1) = iVar7 + 1;
  if (*(int *)((longlong)plVar3 + 0xc) < iVar7 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar3,iVar7);
  }
  puVar5 = (undefined8 *)((longlong)iVar7 * 0x10 + *plVar3);
  *puVar5 = pvVar10;
  *(int *)(puVar5 + 1) = iVar9;
  *(int *)((longlong)puVar5 + 0xc) = iVar11;
  return 1;
}



// FUNCTION 1415bbbb0 Visit body=101 status=ok
// SIG undefined Visit(void)

undefined8
`IPlatformFile::DeleteDirectoryRecursively'::`2'::FRecurse::Visit
          (longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 8);
  if (param_3 != '\0') {
    (**(code **)(*plVar1 + 0xf0))(plVar1,param_2,param_1);
    (**(code **)(**(longlong **)(param_1 + 8) + 0xe0))(*(longlong **)(param_1 + 8),param_2);
    return 1;
  }
  (**(code **)(*plVar1 + 0x90))(plVar1,param_2,0);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x78))(*(longlong **)(param_1 + 8),param_2);
  return 1;
}



// FUNCTION 1415bbc20 Visit body=79 status=ok
// SIG undefined Visit(void)

void `IPlatformFile::IterateDirectoryRecursively'::`2'::FRecurse::Visit
               (longlong param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
  if ((cVar1 != '\0') && (param_3 != '\0')) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0xf0))(*(longlong **)(param_1 + 8),param_2,param_1);
  }
  return;
}



// FUNCTION 1415bbc70 Visit body=79 status=ok
// SIG undefined Visit(void)

void `IPlatformFile::IterateDirectoryStatRecursively'::`2'::FStatRecurse::Visit
               (longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
  if ((cVar1 != '\0') && ((*(byte *)(param_3 + 0x20) & 1) != 0)) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0xf8))(*(longlong **)(param_1 + 8),param_2,param_1);
  }
  return;
}



// FUNCTION 1415bbcc0 Wait body=11 status=ok
// SIG undefined Wait(void)

void FSafeRecyclableEvent::Wait(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001415bbcc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))();
  return;
}



// FUNCTION 1415bbcd0 WaitCompletionImpl body=132 status=ok
// SIG undefined WaitCompletionImpl(void)

void FGenericBaseRequest::WaitCompletionImpl(longlong param_1,float param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x78);
  if (lVar1 != 0) {
    if (0.0 < param_2) {
      if (*(longlong *)(lVar1 + 0x20) != 0) {
        cVar3 = (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x20))
                          (*(longlong **)(lVar1 + 0x18),(int)(longlong)(param_2 * 1000.0) + 1,0);
        if (cVar3 == '\0') {
          return;
        }
        *(undefined8 *)(lVar1 + 0x20) = 0;
      }
    }
    else {
      FAsyncTask<FGenericReadRequestWorker>::EnsureCompletion(lVar1,1);
    }
    plVar2 = *(longlong **)(param_1 + 0x78);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,1);
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  return;
}



// FUNCTION 1415bbd60 FUN_1415bbd60 body=528 status=ok
// SIG undefined FUN_1415bbd60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1415bbd60(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_f8 [32];
  longlong local_d8 [6];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  longlong local_98;
  ulonglong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  param_1 = (undefined8 *)*param_1;
  *param_2 = 0;
  local_d8[2] = 0;
  local_d8[3] = 0;
  local_a0 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_50 = 0;
  local_40 = 0;
  local_d8[0] = 0;
  local_d8[1] = 0;
  local_d8[4] = 0;
  local_d8[5] = 0;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_98 = 0;
  local_88 = 0;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = 0;
  *param_2 = *param_1;
  *param_1 = 0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 8) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x44) = 0;
  param_2[10] = 0;
  *(undefined4 *)(param_2 + 0xb) = 0;
  TSparseArray<TSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::operator=(param_2 + 2,local_d8);
  lVar1 = local_98;
  if (local_98 == 0) {
    _guard_xfg_dispatch_icall_nop(param_2 + 9,&local_a0,4);
  }
  if (param_2[10] != 0) {
    FMemory::Free();
    lVar1 = local_98;
  }
  param_2[10] = lVar1;
  *(undefined4 *)(param_2 + 0xb) = (undefined4)local_90;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined4 *)(param_2 + 0x12) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x94) = 0;
  param_2[0x14] = 0;
  *(undefined4 *)(param_2 + 0x15) = 0;
  local_98 = 0;
  local_90 = local_90 & 0xffffffff00000000;
  TSparseArray<TSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::operator=(param_2 + 0xc,&local_88);
  lVar1 = local_48;
  if (local_48 == 0) {
    _guard_xfg_dispatch_icall_nop(param_2 + 0x13,&local_50,4);
  }
  if (param_2[0x14] != 0) {
    FMemory::Free();
    lVar1 = local_48;
  }
  param_2[0x14] = lVar1;
  *(undefined4 *)(param_2 + 0x15) = (undefined4)local_40;
  local_40 = local_40 & 0xffffffff00000000;
  local_48 = 0;
  TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_88);
  local_90 = local_90 & 0xffffffff00000000;
  if (local_98 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FRetargetSourceCachedData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(local_d8,0);
  if (local_d8[4] != 0) {
    FMemory::Free();
  }
  if (local_d8[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1415bbf70 Emplace<FString_const_&> body=340 status=ok
// SIG undefined Emplace<FString_const_&>(void)

longlong TMapBase<FString,TArray<FString,FDefaultAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,FDefaultAllocator>,0>_>
         ::Emplace<FString_const_&>(longlong *param_1,undefined8 param_2)

{
  void *_Dst;
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  int local_res8 [2];
  int local_28 [2];
  undefined8 *local_20;
  
  TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_28);
  FString::FString(local_20,param_2);
  local_20[2] = 0;
  local_20[3] = 0;
  *(undefined4 *)(local_20 + 4) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,local_20);
    if (local_res8[0] != -1) {
      _Dst = (void *)(*param_1 + (longlong)local_res8[0] * 0x28);
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>
                (_Dst);
      ::_guard_xfg_dispatch_icall_nop(_Dst,local_20,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_28[0],1);
      goto LAB_1415bc09e;
    }
  }
  cVar1 = TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  local_res8[0] = local_28[0];
  if (cVar1 == '\0') {
    if (*(int *)(local_20 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*local_20;
    }
    uVar2 = FUN_140438070(puVar4);
    uVar2 = (int)param_1[9] - 1U & uVar2;
    *(uint *)((longlong)local_20 + 0x24) = uVar2;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(undefined4 *)(local_20 + 4) =
         *(undefined4 *)
          ((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar2) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar2) * 4) =
         local_28[0];
  }
LAB_1415bc09e:
  return *param_1 + (longlong)local_res8[0] * 0x28 + 0x10;
}



// FUNCTION 1415bc0d0 Emplace<TKeyInitializer<FString_&&>_> body=380 status=ok
// SIG undefined Emplace<TKeyInitializer<FString_&&>_>(void)

int * TSet<TTuple<FString,TArray<FString,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,FDefaultAllocator>,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<FString_&&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  void *_Dst;
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  bool bVar6;
  int local_res8 [2];
  int local_38 [2];
  undefined8 *local_30;
  
  TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  param_3 = (undefined8 *)*param_3;
  bVar6 = false;
  *param_2 = local_38[0];
  *local_30 = 0;
  *local_30 = *param_3;
  *param_3 = 0;
  *(undefined4 *)(local_30 + 1) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)((longlong)local_30 + 0xc) = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  *(undefined4 *)(local_30 + 4) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,local_30);
    bVar6 = local_res8[0] != -1;
    if (bVar6) {
      _Dst = (void *)(*param_1 + (longlong)local_res8[0] * 0x28);
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>
                (_Dst);
      ::_guard_xfg_dispatch_icall_nop(_Dst,local_30,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_1415bc229;
    }
  }
  cVar2 = TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar2 == '\0') {
    iVar1 = *param_2;
    if (*(int *)(local_30 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*local_30;
    }
    uVar3 = FUN_140438070(puVar5);
    uVar3 = (int)param_1[9] - 1U & uVar3;
    *(uint *)((longlong)local_30 + 0x24) = uVar3;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 4) =
         *(undefined4 *)
          ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4) = iVar1
    ;
  }
LAB_1415bc229:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar6;
  }
  return param_2;
}



// FUNCTION 1415bc250 FUN_1415bc250 body=838 status=ok
// SIG undefined FUN_1415bc250(void)

int * FUN_1415bc250(longlong *param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  int iVar11;
  undefined8 *_Src;
  uint uVar12;
  char cVar13;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined2 *puVar17;
  bool local_res8;
  
  iVar7 = 1;
  iVar14 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<184,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar4 = *(int *)((longlong)iVar11 * 0xb8 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar4;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)((longlong)iVar4 * 0xb8 + *param_1) = 0xffffffff;
    }
  }
  plVar16 = (longlong *)param_1[4];
  *param_2 = iVar11;
  if (plVar16 == (longlong *)0x0) {
    plVar16 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar16 +
                   (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  _Src = (undefined8 *)((longlong)iVar11 * 0xb8 + *param_1);
  FUN_1415bbd60(param_3,_Src);
  *(undefined4 *)(_Src + 0x16) = 0xffffffff;
  puVar17 = &DAT_143f3eda8;
  local_res8 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar11 = iVar14;
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      if (*(int *)(_Src + 1) == 0) {
        puVar10 = &DAT_143f3eda8;
      }
      else {
        puVar10 = (undefined2 *)*_Src;
      }
      iVar3 = FUN_140438070(puVar10);
      plVar16 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar16 = param_1 + 7;
      }
      iVar3 = *(int *)((longlong)plVar16 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar3) * 4);
      if (iVar3 != -1) {
        lVar8 = *param_1;
        do {
          lVar15 = (longlong)iVar3 * 0xb8;
          if (*(int *)(_Src + 1) == 0) {
            puVar10 = &DAT_143f3eda8;
          }
          else {
            puVar10 = (undefined2 *)*_Src;
          }
          if (*(int *)(lVar15 + 8 + lVar8) == 0) {
            puVar9 = &DAT_143f3eda8;
          }
          else {
            puVar9 = *(undefined2 **)(lVar15 + lVar8);
          }
          iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar10);
          iVar11 = iVar3;
          if (iVar4 == 0) break;
          lVar8 = *param_1;
          iVar3 = *(int *)(lVar8 + 0xb0 + lVar15);
          iVar11 = iVar14;
        } while (iVar3 != -1);
      }
    }
    local_res8 = iVar11 != -1;
    if (local_res8) {
      plVar16 = (longlong *)((longlong)iVar11 * 0xb8 + *param_1);
      FConfigSection::~FConfigSection(plVar16 + 2);
      if (*plVar16 != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(plVar16,_Src,0xb0);
      iVar7 = *param_2;
      bVar2 = (byte)iVar7 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0xb8 + *param_1) = iVar7;
      }
      puVar6 = (undefined4 *)((longlong)iVar7 * 0xb8 + *param_1);
      *puVar6 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar14 = (int)param_1[6];
      }
      puVar6[1] = iVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar7;
      plVar16 = (longlong *)param_1[4];
      *param_2 = iVar11;
      if (plVar16 == (longlong *)0x0) {
        plVar16 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar16 +
                       (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_1415bc56d;
    }
  }
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar12) {
    uVar5 = (uVar12 >> 1) + 8;
    iVar14 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar7 = 0x20;
    cVar13 = '\0';
    if (uVar5 != 0) {
      iVar7 = 0x1f - iVar14;
    }
    uVar5 = (uVar12 >> 1) + 7;
    iVar14 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar13 = '\x1f' - (char)iVar14;
    }
    iVar7 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar13 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar7 <= (int)param_1[9])))) {
    iVar14 = *param_2;
    if (*(int *)(_Src + 1) != 0) {
      puVar17 = (undefined2 *)*_Src;
    }
    uVar12 = FUN_140438070(puVar17);
    uVar12 = (int)param_1[9] - 1U & uVar12;
    *(uint *)((longlong)_Src + 0xb4) = uVar12;
    plVar16 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar16 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0x16) =
         *(undefined4 *)
          ((longlong)plVar16 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar16 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar16 = param_1 + 7;
    }
    *(int *)((longlong)plVar16 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         iVar14;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1415bc56d:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1415bc5a0 FUN_1415bc5a0 body=515 status=ok
// SIG undefined FUN_1415bc5a0(void)

int * FUN_1415bc5a0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  undefined8 *puVar11;
  
  iVar8 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar7 * 0x30);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x30) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar6 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar7 & 0x1f);
  lVar3 = param_3[1];
  puVar11 = (undefined8 *)((longlong)iVar7 * 0x30 + *param_1);
  *puVar11 = *(undefined8 *)*param_3;
  FString::FString(puVar11 + 1,lVar3);
  FString::FString(puVar11 + 3,lVar3 + 0x10);
  *(undefined4 *)(puVar11 + 5) = 0xffffffff;
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar10) {
    iVar7 = 0x20;
    cVar9 = '\0';
    uVar5 = (uVar10 >> 1) + 8;
    iVar8 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar5 != 0) {
      iVar7 = 0x1f - iVar8;
    }
    uVar5 = (uVar10 >> 1) + 7;
    iVar8 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar9 = '\x1f' - (char)iVar8;
    }
    iVar8 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar9 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar10 = (int)((ulonglong)*puVar11 >> 0x20) + (int)*puVar11 & (int)param_1[9] - 1U;
    *(uint *)((longlong)puVar11 + 0x2c) = uVar10;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(puVar11 + 5) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  return param_2;
}



// FUNCTION 1415bc7b0 FUN_1415bc7b0 body=160 status=ok
// SIG undefined FUN_1415bc7b0(void)

void FUN_1415bc7b0(undefined4 *param_1,undefined4 *param_2,ulonglong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  DWORD DVar4;
  
  if (DAT_1468b1f88 == 0) {
    IConsoleManager::SetupSingleton();
  }
  lVar2 = DAT_1468b1f88;
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    if (DVar4 != DAT_1468c21c0) goto LAB_1415bc834;
  }
  if (((param_3 & 0x20) == 0) || (plVar1 = *(longlong **)(lVar2 + 0xc0), plVar1 == (longlong *)0x0))
  {
    *param_1 = *param_2;
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_1,*param_2);
  }
LAB_1415bc834:
  *(undefined1 *)(lVar2 + 0xcc) = 1;
  return;
}



// FUNCTION 1415bc850 FUN_1415bc850 body=161 status=ok
// SIG undefined FUN_1415bc850(void)

void FUN_1415bc850(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  DWORD DVar4;
  
  if (DAT_1468b1f88 == 0) {
    IConsoleManager::SetupSingleton();
  }
  lVar2 = DAT_1468b1f88;
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    if (DVar4 != DAT_1468c21c0) goto LAB_1415bc8d5;
  }
  if (((param_3 & 0x20) == 0) || (plVar1 = *(longlong **)(lVar2 + 0xc0), plVar1 == (longlong *)0x0))
  {
    *param_1 = *param_2;
  }
  else {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1,*param_2);
  }
LAB_1415bc8d5:
  *(undefined1 *)(lVar2 + 0xcc) = 1;
  return;
}



// FUNCTION 1415bc900 FUN_1415bc900 body=371 status=ok
// SIG undefined FUN_1415bc900(void)

int FUN_1415bc900(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  byte local_res8 [8];
  longlong *local_res10;
  undefined1 local_res20 [8];
  
  iVar1 = (int)param_1[1];
  lVar10 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  lVar11 = 0;
  iVar12 = 0;
  local_res10 = param_2;
  if (((int)((longlong *)*param_1)[1] != 0) &&
     (plVar4 = *(longlong **)*param_1, plVar4 != (longlong *)0x0)) {
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
    lVar11 = *plVar4;
  }
  local_res8[0] = lVar11 != *param_2;
  lVar11 = 0;
  iVar7 = 0;
  do {
    bVar3 = local_res8[0];
    lVar11 = lVar11 + 1;
    iVar8 = iVar7 + 1;
    if (lVar11 < lVar10) {
      lVar6 = lVar11 * 0x10;
      plVar4 = local_res10;
      do {
        lVar5 = 0;
        if ((*(int *)(*param_1 + 8 + lVar6) != 0) &&
           (plVar2 = *(longlong **)(*param_1 + lVar6), plVar2 != (longlong *)0x0)) {
          plVar4 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res20);
          lVar5 = *plVar4;
          plVar4 = local_res10;
        }
        if ((bool)bVar3 != (lVar5 != *plVar4)) break;
        iVar8 = iVar8 + 1;
        lVar11 = lVar11 + 1;
        lVar6 = lVar6 + 0x10;
      } while (lVar11 < lVar10);
    }
    iVar9 = iVar8 - iVar7;
    if (local_res8[0] == 0) {
      lVar6 = (longlong)iVar7 * 0x10 + *param_1;
      for (; iVar9 != 0; iVar9 = iVar9 + -1) {
        TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar6);
        lVar6 = lVar6 + 0x10;
      }
    }
    else {
      if (iVar12 != iVar7) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar12 * 0x10 + *param_1),
                   (void *)((longlong)iVar7 * 0x10 + *param_1),(longlong)iVar9 << 4);
      }
      iVar12 = iVar12 + iVar9;
    }
    local_res8[0] = local_res8[0] ^ 1;
    iVar7 = iVar8;
    if (lVar10 <= lVar11) {
      *(int *)(param_1 + 1) = iVar12;
      return iVar1 - iVar12;
    }
  } while( true );
}



// FUNCTION 1415bca80 TCachedOSPageAllocator<64,67108864> body=860 status=ok
// SIG undefined TCachedOSPageAllocator<64,67108864>(void)

undefined8 *
TCachedOSPageAllocator<64,67108864>::TCachedOSPageAllocator<64,67108864>(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
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
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  return param_1;
}



// FUNCTION 1415bcde0 FUN_1415bcde0 body=242 status=ok
// SIG undefined FUN_1415bcde0(void)

undefined8 * FUN_1415bcde0(undefined8 *param_1,undefined8 param_2,short *param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  
  FArchive::FArchive();
  *param_1 = &PTR__scalar_deleting_destructor__144cad960;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (param_3[lVar2] != 0);
    iVar1 = (int)lVar2 + 1;
    *(int *)(param_1 + 0x13) = iVar1;
    if (0 < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x12,0);
    }
    FGenericPlatformString::Memcpy(param_1[0x12],param_3,(longlong)iVar1 * 2);
  }
  param_1[0x14] = param_4;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = param_2;
  FArchive::SetIsLoading(param_1,1);
  FArchive::SetIsPersistent(param_1,1);
  return param_1;
}



// FUNCTION 1415bcee0 FConsoleCommandBase body=165 status=ok
// SIG undefined FConsoleCommandBase(void)

undefined8 *
FConsoleCommandBase::FConsoleCommandBase(undefined8 *param_1,short *param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_144cad060;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((param_2 == (short *)0x0) || (*param_2 == 0)) {
    *(undefined4 *)(param_1 + 3) = param_3;
  }
  else {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (param_2[lVar2] != 0);
    iVar1 = (int)lVar2 + 1;
    *(int *)(param_1 + 2) = iVar1;
    if (0 < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 1,0);
    }
    FGenericPlatformString::Memcpy(param_1[1],param_2,(longlong)iVar1 * 2);
    *(undefined4 *)(param_1 + 3) = param_3;
  }
  return param_1;
}



// FUNCTION 1415bcf90 FConsoleVariableBase body=223 status=ok
// SIG undefined FConsoleVariableBase(void)

undefined8 *
FConsoleVariableBase::FConsoleVariableBase(undefined8 *param_1,short *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144cacea8;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = param_3;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  if ((short *)param_1[1] == param_2) {
    return param_1;
  }
  iVar2 = iVar1;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (param_2[lVar3] != 0);
    iVar2 = (int)lVar3 + 1;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if (*(int *)((longlong)param_1 + 0x14) != iVar2) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 1,iVar2);
    iVar1 = *(int *)(param_1 + 2);
  }
  *(int *)(param_1 + 2) = iVar1 + iVar2;
  if (*(int *)((longlong)param_1 + 0x14) < iVar1 + iVar2) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 1);
  }
  if (iVar2 != 0) {
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[1],param_2,(longlong)iVar2 * 2);
  }
  return param_1;
}



// FUNCTION 1415bda40 FLoggedFileHandle body=142 status=ok
// SIG undefined FLoggedFileHandle(void)

undefined8 *
FLoggedFileHandle::FLoggedFileHandle(undefined8 *param_1,undefined8 param_2,short *param_3)

{
  int iVar1;
  longlong lVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__144cadfa0;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (param_3[lVar2] != 0);
    iVar1 = (int)lVar2 + 1;
    *(int *)(param_1 + 3) = iVar1;
    if (0 < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 2,0);
    }
    FGenericPlatformString::Memcpy(param_1[2],param_3,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 1415bdad0 FMallocBinned2 body=3197 status=ok
// SIG undefined FMallocBinned2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FMallocBinned2::FMallocBinned2(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined1 *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  
  *param_1 = &PTR__scalar_deleting_destructor__144cadfe8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  *(undefined4 *)(param_1 + 0x73) = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  *(undefined4 *)(param_1 + 0x76) = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x79) = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  *(undefined4 *)(param_1 + 0x85) = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  *(undefined4 *)(param_1 + 0x8b) = 0;
  param_1[0x8d] = 0;
  TCachedOSPageAllocator<64,67108864>::TCachedOSPageAllocator<64,67108864>(param_1 + 0x8f);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x110));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x110),4000);
  _DAT_1468b1f90 = DAT_1464a8de8;
  _DAT_1468b1f92 = DAT_1464a8de6;
  _DAT_1468b1f94 = DAT_1464a8de4;
  _DAT_1468b1f96 = DAT_1464a8de2;
  _DAT_1468b1f98 = DAT_1464a8de0;
  DAT_1468b4fd4 = 1;
  _DAT_1468b1f9a = DAT_1464a8dde;
  _DAT_1468b1f9c = DAT_1464a8ddc;
  _DAT_1468b1f9e = DAT_1464a8dda;
  _DAT_1468b1fa0 = DAT_1464a8dd8;
  _DAT_1468b1fa2 = DAT_1464a8dd6;
  _DAT_1468b1fa4 = DAT_1464a8dd4;
  _DAT_1468b1fa6 = DAT_1464a8dd2;
  _DAT_1468b1fa8 = DAT_1464a8dd0;
  _DAT_1468b1faa = DAT_1464a8dce;
  _DAT_1468b1fac = DAT_1464a8dcc;
  _DAT_1468b1fae = DAT_1464a8dca;
  _DAT_1468b1fb0 = DAT_1464a8dc8;
  _DAT_1468b1fb2 = DAT_1464a8dc6;
  _DAT_1468b1fb4 = DAT_1464a8dc4;
  _DAT_1468b1fb6 = DAT_1464a8dc2;
  _DAT_1468b1fb8 = DAT_1464a8dc0;
  _DAT_1468b1fba = DAT_1464a8dbe;
  _DAT_1468b1fbc = DAT_1464a8dbc;
  _DAT_1468b1fbe = DAT_1464a8dba;
  _DAT_1468b1fc0 = DAT_1464a8db8;
  _DAT_1468b1fc2 = DAT_1464a8db6;
  _DAT_1468b1fc4 = DAT_1464a8db4;
  _DAT_1468b1fc6 = DAT_1464a8db2;
  _DAT_1468b1fc8 = DAT_1464a8db0;
  _DAT_1468b1fca = DAT_1464a8dae;
  _DAT_1468b1fcc = DAT_1464a8dac;
  _DAT_1468b1fce = DAT_1464a8daa;
  _DAT_1468b1fd0 = DAT_1464a8da8;
  _DAT_1468b1fd2 = DAT_1464a8da6;
  _DAT_1468b1fd4 = DAT_1464a8da4;
  _DAT_1468b1fd6 = DAT_1464a8da2;
  _DAT_1468b1fd8 = DAT_1464a8da0;
  _DAT_1468b1fda = DAT_1464a8d9e;
  _DAT_1468b1fdc = DAT_1464a8d9c;
  _DAT_1468b1fde = DAT_1464a8d9a;
  _DAT_1468b1fe0 = DAT_1464a8d98;
  _DAT_1468b1fe2 = DAT_1464a8d96;
  _DAT_1468b1fe4 = DAT_1464a8d94;
  _DAT_1468b1fe6 = DAT_1464a8d92;
  _DAT_1468b1fe8 = DAT_1464a8d90;
  lVar3 = FUN_14169dad0();
  uVar7 = *(ulonglong *)(lVar3 + 0x30);
  DAT_1468b1ff8 = (uint)*(ulonglong *)(lVar3 + 0x20);
  DAT_1468b1ffc = (uint)*(longlong *)(lVar3 + 0x28);
  if (*(longlong *)(lVar3 + 0x28) == 0) {
    DAT_1468b1ffc = DAT_1468b1ff8;
  }
  uVar4 = (*(ulonglong *)(lVar3 + 0x20) & 0xffffffff) >> 5;
  iVar13 = 0x1f;
  uVar1 = (uint)uVar4;
  if (uVar1 != 0) {
    for (; uVar1 >> iVar13 == 0; iVar13 = iVar13 + -1) {
    }
  }
  param_1[0x8e] = uVar4;
  _DAT_1468b1fda = DAT_1464a8d9e;
  _DAT_1468b1fdc = DAT_1464a8d9c;
  _DAT_1468b1fde = DAT_1464a8d9a;
  _DAT_1468b1fe0 = DAT_1464a8d98;
  _DAT_1468b1fe2 = DAT_1464a8d96;
  _DAT_1468b1fe4 = DAT_1464a8d94;
  iVar11 = 0x20;
  iVar6 = iVar11;
  if (uVar1 != 0) {
    iVar6 = 0x1f - iVar13;
  }
  uVar1 = uVar1 - 1;
  iVar13 = 0x1f;
  if (uVar1 != 0) {
    for (; uVar1 >> iVar13 == 0; iVar13 = iVar13 + -1) {
    }
  }
  iVar12 = iVar11;
  if (uVar1 != 0) {
    iVar12 = 0x1f - iVar13;
  }
  uVar1 = 0x20U - iVar12 & ~((iVar6 << 0x1a) >> 0x1f);
  iVar13 = 0x1f;
  if (DAT_1468b1ff8 != 0) {
    for (; DAT_1468b1ff8 >> iVar13 == 0; iVar13 = iVar13 + -1) {
    }
  }
  iVar6 = iVar11;
  if (DAT_1468b1ff8 != 0) {
    iVar6 = 0x1f - iVar13;
  }
  uVar2 = DAT_1468b1ff8 - 1;
  iVar13 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar13 == 0; iVar13 = iVar13 + -1) {
    }
  }
  if (uVar2 != 0) {
    iVar11 = 0x1f - iVar13;
  }
  uVar9 = (uint)DAT_1464a8d94;
  uVar8 = (uint)DAT_1464a8d96;
  uVar17 = (uint)DAT_1464a8d98;
  uVar18 = (uint)DAT_1464a8d9a;
  uVar15 = (uint)DAT_1464a8d9c;
  uVar16 = (uint)DAT_1464a8d9e;
  uVar4 = (ulonglong)(0x20U - iVar11 & ~((iVar6 << 0x1a) >> 0x1f));
  param_1[1] = uVar4;
  param_1[3] = (1L << ((byte)uVar1 & 0x3f)) + -1;
  lVar3 = uVar4 + uVar1;
  uVar2 = (uint)DAT_1464a8da0;
  uVar1 = (uint)DAT_1464a8d90;
  param_1[2] = lVar3;
  param_1[4] = uVar7 >> ((byte)lVar3 & 0x3f);
  _DAT_1468b1fe6 = DAT_1464a8d92;
  uVar10 = (uint)DAT_1464a8d92;
  *(uint *)(param_1 + 7) = uVar1;
  *(uint *)(param_1 + 10) = uVar10;
  *(uint *)(param_1 + 0xd) = uVar9;
  *(uint *)(param_1 + 0x10) = uVar8;
  *(uint *)(param_1 + 0x13) = uVar17;
  *(uint *)(param_1 + 0x16) = uVar18;
  *(uint *)(param_1 + 0x19) = uVar15;
  *(uint *)(param_1 + 0x1c) = uVar16;
  *(uint *)(param_1 + 0x1f) = uVar2;
  *(uint *)(param_1 + 0x22) = (uint)DAT_1464a8da2;
  *(uint *)(param_1 + 0x25) = (uint)DAT_1464a8da4;
  *(uint *)(param_1 + 0x28) = (uint)DAT_1464a8da6;
  *(uint *)(param_1 + 0x2b) = (uint)DAT_1464a8da8;
  *(uint *)(param_1 + 0x2e) = (uint)DAT_1464a8daa;
  *(uint *)(param_1 + 0x31) = (uint)DAT_1464a8dac;
  *(uint *)(param_1 + 0x34) = (uint)DAT_1464a8dae;
  *(uint *)(param_1 + 0x37) = (uint)DAT_1464a8db0;
  *(uint *)(param_1 + 0x3a) = (uint)DAT_1464a8db2;
  *(uint *)(param_1 + 0x3d) = (uint)DAT_1464a8db4;
  *(uint *)(param_1 + 0x40) = (uint)DAT_1464a8db6;
  *(uint *)(param_1 + 0x43) = (uint)DAT_1464a8db8;
  *(uint *)(param_1 + 0x46) = (uint)DAT_1464a8dba;
  *(uint *)(param_1 + 0x49) = (uint)DAT_1464a8dbc;
  *(uint *)(param_1 + 0x4c) = (uint)DAT_1464a8dbe;
  *(uint *)(param_1 + 0x4f) = (uint)DAT_1464a8dc0;
  *(uint *)(param_1 + 0x52) = (uint)DAT_1464a8dc2;
  *(uint *)(param_1 + 0x55) = (uint)DAT_1464a8dc4;
  *(uint *)(param_1 + 0x58) = (uint)DAT_1464a8dc6;
  *(uint *)(param_1 + 0x5b) = (uint)DAT_1464a8dc8;
  *(uint *)(param_1 + 0x5e) = (uint)DAT_1464a8dca;
  *(uint *)(param_1 + 0x61) = (uint)DAT_1464a8dcc;
  *(uint *)(param_1 + 100) = (uint)DAT_1464a8dce;
  *(uint *)(param_1 + 0x67) = (uint)DAT_1464a8dd0;
  puVar14 = &DAT_1468b2000;
  *(uint *)(param_1 + 0x6a) = (uint)DAT_1464a8dd2;
  uVar7 = 0;
  iVar13 = 0;
  *(uint *)(param_1 + 0x6d) = (uint)DAT_1464a8dd4;
  *(uint *)(param_1 + 0x70) = (uint)DAT_1464a8dd6;
  *(uint *)(param_1 + 0x73) = (uint)DAT_1464a8dd8;
  *(uint *)(param_1 + 0x76) = (uint)DAT_1464a8dda;
  *(uint *)(param_1 + 0x79) = (uint)DAT_1464a8ddc;
  *(uint *)(param_1 + 0x7c) = (uint)DAT_1464a8dde;
  *(uint *)(param_1 + 0x7f) = (uint)DAT_1464a8de0;
  *(uint *)(param_1 + 0x82) = (uint)DAT_1464a8de2;
  *(uint *)(param_1 + 0x85) = (uint)DAT_1464a8de4;
  *(uint *)(param_1 + 0x88) = (uint)DAT_1464a8de6;
  *(uint *)(param_1 + 0x8b) = (uint)DAT_1464a8de8;
  do {
    while (uVar1 < (uint)(iVar13 << 4)) {
      uVar7 = (ulonglong)((int)uVar7 + 1);
      uVar1 = (uint)(&DAT_1464a8d90)[uVar7];
    }
    *puVar14 = (char)uVar7;
    iVar13 = iVar13 + 1;
    puVar14 = puVar14 + 1;
  } while (iVar13 != 0x800);
  _DAT_1468b1f90 = DAT_1464a8de8;
  _DAT_1468b1f92 = DAT_1464a8de6;
  _DAT_1468b1f94 = DAT_1464a8de4;
  _DAT_1468b1f96 = DAT_1464a8de2;
  _DAT_1468b1f98 = DAT_1464a8de0;
  _DAT_1468b1f9a = DAT_1464a8dde;
  _DAT_1468b1f9c = DAT_1464a8ddc;
  _DAT_1468b1f9e = DAT_1464a8dda;
  _DAT_1468b1fa0 = DAT_1464a8dd8;
  _DAT_1468b1fa2 = DAT_1464a8dd6;
  _DAT_1468b1fa4 = DAT_1464a8dd4;
  _DAT_1468b1fa6 = DAT_1464a8dd2;
  _DAT_1468b1fa8 = DAT_1464a8dd0;
  _DAT_1468b1faa = DAT_1464a8dce;
  _DAT_1468b1fac = DAT_1464a8dcc;
  _DAT_1468b1fae = DAT_1464a8dca;
  _DAT_1468b1fb0 = DAT_1464a8dc8;
  _DAT_1468b1fb2 = DAT_1464a8dc6;
  _DAT_1468b1fb4 = DAT_1464a8dc4;
  _DAT_1468b1fb6 = DAT_1464a8dc2;
  _DAT_1468b1fb8 = DAT_1464a8dc0;
  _DAT_1468b1fba = DAT_1464a8dbe;
  _DAT_1468b1fbc = DAT_1464a8dbc;
  _DAT_1468b1fbe = DAT_1464a8dba;
  _DAT_1468b1fc0 = DAT_1464a8db8;
  _DAT_1468b1fc2 = DAT_1464a8db6;
  _DAT_1468b1fc4 = DAT_1464a8db4;
  _DAT_1468b1fc6 = DAT_1464a8db2;
  _DAT_1468b1fc8 = DAT_1464a8db0;
  _DAT_1468b1fca = DAT_1464a8dae;
  _DAT_1468b1fcc = DAT_1464a8dac;
  _DAT_1468b1fce = DAT_1464a8daa;
  _DAT_1468b1fd0 = DAT_1464a8da8;
  _DAT_1468b1fd2 = DAT_1464a8da6;
  _DAT_1468b1fd4 = DAT_1464a8da4;
  _DAT_1468b1fd6 = DAT_1464a8da2;
  _DAT_1468b1fd8 = DAT_1464a8da0;
  _DAT_1468b1fe8 = DAT_1464a8d90;
  uVar7 = param_1[4];
  puVar5 = (undefined8 *)FWindowsPlatformMemory::BinnedAllocFromOS();
  param_1[0x8c] = puVar5;
  uVar1 = (uint)uVar7;
  while (uVar1 != 0) {
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = puVar5;
    puVar5[3] = puVar5;
    puVar5 = puVar5 + 4;
    uVar1 = (int)uVar7 - 1;
    uVar7 = (ulonglong)uVar1;
  }
  _DAT_1468e2210 = &DAT_1468b1ff0;
  _DAT_1468b1ff0 = param_1;
  return param_1;
}



// FUNCTION 1415be750 FPerThreadFreeBlockLists body=1127 status=ok
// SIG undefined FPerThreadFreeBlockLists(void)

undefined8 * FMallocBinned2::FPerThreadFreeBlockLists::FPerThreadFreeBlockLists(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  param_1[0x62] = 0;
  *(undefined4 *)(param_1 + 99) = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0;
  param_1[0x70] = 0;
  *(undefined4 *)(param_1 + 0x71) = 0;
  param_1[0x72] = 0;
  *(undefined4 *)(param_1 + 0x73) = 0;
  param_1[0x74] = 0;
  *(undefined4 *)(param_1 + 0x75) = 0;
  param_1[0x76] = 0;
  *(undefined4 *)(param_1 + 0x77) = 0;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x79) = 0;
  param_1[0x7a] = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  param_1[0x7c] = 0;
  *(undefined4 *)(param_1 + 0x7d) = 0;
  param_1[0x7e] = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  param_1[0x80] = 0;
  *(undefined4 *)(param_1 + 0x81) = 0;
  param_1[0x82] = 0;
  *(undefined4 *)(param_1 + 0x83) = 0;
  param_1[0x84] = 0;
  *(undefined4 *)(param_1 + 0x85) = 0;
  param_1[0x86] = 0;
  *(undefined4 *)(param_1 + 0x87) = 0;
  param_1[0x88] = 0;
  *(undefined4 *)(param_1 + 0x89) = 0;
  param_1[0x8a] = 0;
  *(undefined4 *)(param_1 + 0x8b) = 0;
  param_1[0x8c] = 0;
  *(undefined4 *)(param_1 + 0x8d) = 0;
  param_1[0x8e] = 0;
  *(undefined4 *)(param_1 + 0x8f) = 0;
  param_1[0x90] = 0;
  *(undefined4 *)(param_1 + 0x91) = 0;
  param_1[0x92] = 0;
  *(undefined4 *)(param_1 + 0x93) = 0;
  param_1[0x94] = 0;
  *(undefined4 *)(param_1 + 0x95) = 0;
  param_1[0x96] = 0;
  *(undefined4 *)(param_1 + 0x97) = 0;
  param_1[0x98] = 0;
  *(undefined4 *)(param_1 + 0x99) = 0;
  param_1[0x9a] = 0;
  *(undefined4 *)(param_1 + 0x9b) = 0;
  param_1[0x9c] = 0;
  *(undefined4 *)(param_1 + 0x9d) = 0;
  param_1[0x9e] = 0;
  *(undefined4 *)(param_1 + 0x9f) = 0;
  param_1[0xa0] = 0;
  *(undefined4 *)(param_1 + 0xa1) = 0;
  param_1[0xa2] = 0;
  *(undefined4 *)(param_1 + 0xa3) = 0;
  param_1[0xa4] = 0;
  *(undefined4 *)(param_1 + 0xa5) = 0;
  param_1[0xa6] = 0;
  *(undefined4 *)(param_1 + 0xa7) = 0;
  param_1[0xa8] = 0;
  *(undefined4 *)(param_1 + 0xa9) = 0;
  param_1[0xaa] = 0;
  *(undefined4 *)(param_1 + 0xab) = 0;
  param_1[0xac] = 0;
  *(undefined4 *)(param_1 + 0xad) = 0;
  param_1[0xae] = 0;
  *(undefined4 *)(param_1 + 0xaf) = 0;
  param_1[0xb0] = 0;
  *(undefined4 *)(param_1 + 0xb1) = 0;
  param_1[0xb2] = 0;
  *(undefined4 *)(param_1 + 0xb3) = 0;
  return param_1;
}



// FUNCTION 1415bebc0 ~TSparseArray<TSetElement<TTuple<FString,TArray<FString,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=196 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FString,TArray<FString,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FString,TArray<FString,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FString,TArray<FString,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>
                (*local_38 + (longlong)local_1c * 0x28);
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1415bec90 ~FConsoleManager body=507 status=ok
// SIG undefined ~FConsoleManager(void)

void FConsoleManager::~FConsoleManager(undefined8 *param_1)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int local_58;
  uint uStack_54;
  int iStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  int local_38;
  longlong *local_30;
  int iStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  
  plVar1 = param_1 + 1;
  local_58 = 0;
  uStack_54 = 1;
  puStack_20 = (uint *)(param_1 + 3);
  *param_1 = &PTR_RegisterConsoleVariable_144cacdc0;
  iVar6 = *(int *)(param_1 + 6);
  local_48._4_4_ = 0;
  uStack_40 = 0;
  if (iVar6 != 0) {
    puVar8 = (uint *)param_1[5];
    if ((uint *)param_1[5] == (uint *)0x0) {
      puVar8 = puStack_20;
    }
    uVar2 = *puVar8;
    uStack_40 = 0;
    local_58 = 0;
    while (uVar2 == 0) {
      lVar5 = (longlong)local_58;
      uStack_40 = uStack_40 + 0x20;
      iVar7 = local_58 + 1;
      bVar4 = (int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar7;
      if (bVar4) goto LAB_1415bed5d;
      uVar2 = puVar8[lVar5 + 1];
    }
    uStack_54 = -uVar2 & uVar2;
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
    local_48._4_4_ = (uStack_40 - iVar7) + 0x1f;
    if (iVar6 < local_48._4_4_) {
LAB_1415bed5d:
      local_48._4_4_ = iVar6;
    }
  }
  uStack_18 = 0xffffffff;
  iStack_14 = local_48._4_4_;
  iStack_10 = uStack_40;
  iStack_28 = local_58;
  uStack_24 = uStack_54;
  iStack_50 = local_58;
  uStack_4c = uStack_54;
  local_38 = uStack_40;
  uStack_40 = 0xffffffff;
  iStack_3c = local_48._4_4_;
  bVar4 = local_48._4_4_ < iVar6;
  local_30 = plVar1;
  local_48 = puStack_20;
  if (bVar4) {
    do {
      puVar3 = *(undefined8 **)((longlong)iStack_3c * 0x20 + 0x10 + *plVar1);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      uStack_40 = uStack_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
    } while (iStack_3c < (int)local_48[6]);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1a));
  iVar6 = *(int *)(param_1 + 0x17);
  lVar5 = param_1[0x16];
  if (iVar6 != 0) {
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar5);
      lVar5 = lVar5 + 0x10;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = param_1[0x16];
  }
  if (lVar5 != 0) {
    FMemory::Free(lVar5);
  }
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,TArray<FString,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,TArray<FString,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xc);
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (plVar1);
  *param_1 = &PTR__purecall_144caccd8;
  return;
}



// FUNCTION 1415bee90 `scalar_deleting_destructor' body=81 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FConsoleVariable<int>::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 4);
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144cacc78;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1415beef0 `scalar_deleting_destructor' body=156 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FConsoleVariable<FString>::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = param_1 + 0xb;
  lVar2 = 2;
  do {
    plVar1 = puVar3 + -2;
    puVar3 = puVar3 + -2;
    lVar2 = lVar2 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar2 != 0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 4);
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144cacc78;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1415bef90 `scalar_deleting_destructor' body=81 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FConsoleVariableRef<int>::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 4);
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144cacc78;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1415beff0 `scalar_deleting_destructor' body=110 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FArchiveFileReaderGeneric::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__144cad960;
  CloseLowLevel();
  puVar1 = (undefined8 *)param_1[0x18];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4c8);
  }
  return param_1;
}



// FUNCTION 1415bf060 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FArchiveFileWriterDummy::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144cadd70;
  FArchive::~FArchive();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 1415bf0a0 FUN_1415bf0a0 body=144 status=ok
// SIG undefined FUN_1415bf0a0(void)

longlong * FUN_1415bf0a0(longlong *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  
  *param_1 = (longlong)&PTR_FUN_144cadb68;
  FUN_1415c2db0();
  cVar2 = (**(code **)(*param_1 + 0x1f8))(param_1);
  if ((cVar2 == '\0') &&
     (*(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 0x80, (char)param_1[0x217] == '\0')) {
    *(undefined1 *)(param_1 + 0x217) = 0;
  }
  puVar1 = (undefined8 *)param_1[0x16];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10c0);
  }
  return param_1;
}



// FUNCTION 1415bf130 `scalar_deleting_destructor' body=130 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FBufferedOutputDevice::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int iVar2;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  iVar2 = *(int *)(param_1 + 0x18);
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 5;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x10);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1415bf1c0 `scalar_deleting_destructor' body=81 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FPurchaseReceipt::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 4);
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144cacc78;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1415bf220 FUN_1415bf220 body=72 status=ok
// SIG undefined FUN_1415bf220(void)

undefined8 * FUN_1415bf220(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144cacc78;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1415bf270 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FConsoleManager::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FConsoleManager();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 1415bf2b0 `scalar_deleting_destructor' body=81 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FConsoleVariableBase::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 4);
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144cacc78;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1415bf310 `scalar_deleting_destructor' body=81 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FConsoleVariableBitRef::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 4);
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144cacc78;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1415bf370 FUN_1415bf370 body=43 status=ok
// SIG undefined FUN_1415bf370(void)

undefined8 * FUN_1415bf370(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_StartProfileThreadUsage_144cad850;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1415bf3a0 FUN_1415bf3a0 body=72 status=ok
// SIG undefined FUN_1415bf3a0(void)

undefined8 * FUN_1415bf3a0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143f47c98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1415bf3f0 `scalar_deleting_destructor' body=101 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FLoggedFileHandle::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__144cadfa0;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *param_1 = &PTR_FUN_144cacc30;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1415bf460 `scalar_deleting_destructor' body=104 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FMallocBinned2::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144cadfe8;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x110));
  FExec::~FExec(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FUseSystemMallocForNew::operator_delete(param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x8a8);
  }
  return param_1;
}



// FUNCTION 1415bf4d0 FUN_1415bf4d0 body=43 status=ok
// SIG undefined FUN_1415bf4d0(void)

undefined8 * FUN_1415bf4d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_144caccd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1415bf500 FUN_1415bf500 body=43 status=ok
// SIG undefined FUN_1415bf500(void)

undefined8 * FUN_1415bf500(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144cacc78;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1415bf530 FUN_1415bf530 body=43 status=ok
// SIG undefined FUN_1415bf530(void)

undefined8 * FUN_1415bf530(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144cacc30;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1415bf560 AddConsoleHistoryEntry body=537 status=ok
// SIG undefined AddConsoleHistoryEntry(void)

void FConsoleManager::AddConsoleHistoryEntry(longlong param_1,short *param_2,short *param_3)

{
  longlong *plVar1;
  void *_Src;
  int iVar2;
  longlong *_Dst;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  void **local_res8;
  longlong *local_res10;
  void *local_48;
  ulonglong local_40;
  longlong local_38;
  ulonglong local_30;
  
  FUN_1415c50a0();
  local_30 = 0;
  local_38 = 0;
  lVar5 = -1;
  if ((param_2 != (short *)0x0) && (lVar4 = lVar5, *param_2 != 0)) {
    do {
      lVar4 = lVar4 + 1;
    } while (param_2[lVar4] != 0);
    uVar3 = (int)lVar4 + 1;
    local_30 = (ulonglong)uVar3;
    if (0 < (int)uVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    FGenericPlatformString::Memcpy(local_38,param_2,(longlong)(int)uVar3 * 2);
  }
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x60,&local_res8,&local_38);
  if (((int)local_res8 == -1) ||
     (lVar4 = *(longlong *)(param_1 + 0x60) + (longlong)(int)local_res8 * 0x28, lVar4 == 0)) {
    local_res10 = &local_38;
    TSet<TTuple<FString,TArray<FString,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<FString_&&>_>(param_1 + 0x60,&local_res8,&local_res10,0);
    lVar4 = *(longlong *)(param_1 + 0x60) + (longlong)(int)local_res8 * 0x28;
  }
  plVar1 = (longlong *)(lVar4 + 0x10);
  if (local_38 != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(lVar4 + 0x18);
  while (0x40 < iVar2) {
    _Dst = (longlong *)*plVar1;
    if (*_Dst != 0) {
      FMemory::Free(*_Dst);
      iVar2 = *(int *)(lVar4 + 0x18);
      _Dst = (longlong *)*plVar1;
    }
    if (iVar2 + -1 != 0) {
      ::_guard_xfg_dispatch_icall_nop(_Dst,_Dst + 2,(longlong)(iVar2 + -1) << 4);
      iVar2 = *(int *)(lVar4 + 0x18);
    }
    *(int *)(lVar4 + 0x18) = iVar2 + -1;
    TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar1);
    iVar2 = *(int *)(lVar4 + 0x18);
  }
  local_40 = 0;
  local_48 = (void *)0x0;
  if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
    do {
      lVar5 = lVar5 + 1;
    } while (param_3[lVar5] != 0);
    uVar3 = (int)lVar5 + 1;
    local_40 = (ulonglong)uVar3;
    if (0 < (int)uVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    }
    FGenericPlatformString::Memcpy(local_48,param_3,(longlong)(int)uVar3 * 2);
  }
  local_res8 = &local_48;
  TArray<FString,FDefaultAllocator>::RemoveAll<<lambda_0089088ead215b5f35713e72b81bce1f>_>
            (plVar1,&local_res8);
  iVar2 = *(int *)(lVar4 + 0x18);
  *(int *)(lVar4 + 0x18) = iVar2 + 1;
  if (*(int *)(lVar4 + 0x1c) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
  }
  _Src = local_48;
  puVar6 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
  *puVar6 = 0;
  lVar5 = (longlong)(int)local_40;
  *(int *)(puVar6 + 1) = (int)local_40;
  if ((int)local_40 == 0) {
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar6,local_40 & 0xffffffff,0);
    ::_guard_xfg_dispatch_icall_nop((void *)*puVar6,_Src,lVar5 * 2);
  }
  FUN_1415c7a80(param_1);
  if (local_48 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1415bf780 FUN_1415bf780 body=1285 status=ok
// SIG undefined FUN_1415bf780(void)

longlong *** FUN_1415bf780(longlong param_1,short *param_2,longlong ***param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong **pplVar1;
  BOOL BVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  longlong ***ppplVar8;
  longlong ***ppplVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined2 *puVar12;
  uint uVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong lVar18;
  uint uVar19;
  longlong local_res8;
  undefined8 local_res10;
  longlong **local_res18;
  longlong *local_res20;
  longlong ***local_78;
  undefined8 *local_70;
  longlong **local_68;
  ulonglong local_60;
  longlong ***local_58;
  longlong ***local_50;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xd0);
  local_res8 = param_1;
  local_res18 = (longlong **)param_3;
  BVar2 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar2 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  uVar5 = local_res10._4_4_;
  plVar15 = (longlong *)0x0;
  uVar19 = 0;
  local_res10 = (longlong ***)((ulonglong)local_res10._4_4_ << 0x20);
  local_68 = (longlong **)0x0;
  local_60 = (ulonglong)(uint)local_60;
  lVar16 = -1;
  if ((param_2 != (short *)0x0) && (lVar14 = lVar16, *param_2 != 0)) {
    do {
      lVar14 = lVar14 + 1;
    } while (param_2[lVar14] != 0);
    uVar13 = (int)lVar14 + 1;
    local_res10 = (longlong ***)CONCAT44(uVar5,uVar13);
    local_60 = (ulonglong)uVar13;
    uVar19 = uVar13;
    if (0 < (int)uVar13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68);
      local_res10 = (longlong ***)CONCAT44(local_res10._4_4_,(uint)local_60);
      uVar19 = (uint)local_60;
    }
    FGenericPlatformString::Memcpy(local_68,param_2,(longlong)(int)uVar13 * 2);
  }
  plVar17 = (longlong *)(param_1 + 8);
  local_78 = (longlong ***)&DAT_143f3eda8;
  local_res20 = plVar17;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    ppplVar8 = (longlong ***)&DAT_143f3eda8;
    if (uVar19 != 0) {
      ppplVar8 = (longlong ***)local_68;
    }
    iVar3 = FUN_140438070(ppplVar8);
    lVar14 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar14 = param_1 + 0x40;
    }
    iVar3 = *(int *)(lVar14 + ((longlong)*(int *)(param_1 + 0x50) - 1U & (longlong)iVar3) * 4);
    if (iVar3 != -1) {
      lVar14 = *plVar17;
      do {
        puVar12 = &DAT_143f3eda8;
        lVar18 = (longlong)iVar3 * 0x20;
        ppplVar8 = (longlong ***)&DAT_143f3eda8;
        if ((int)local_res10 != 0) {
          ppplVar8 = (longlong ***)local_68;
        }
        if (*(int *)(lVar18 + 8 + lVar14) != 0) {
          puVar12 = *(undefined2 **)(lVar18 + lVar14);
        }
        iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar12,ppplVar8);
        plVar17 = local_res20;
        if (iVar4 == 0) {
          if ((iVar3 != -1) && (lVar14 = (longlong)iVar3 * 0x20 + *local_res20, lVar14 != 0)) {
            plVar15 = *(longlong **)(lVar14 + 0x10);
          }
          break;
        }
        lVar14 = *(longlong *)(local_res8 + 8);
        iVar3 = *(int *)(lVar18 + 0x18 + lVar14);
      } while (iVar3 != -1);
    }
  }
  if ((longlong ***)local_68 != (longlong ***)0x0) {
    FMemory::Free(local_68);
  }
  (*(code *)(*local_res18)[3])();
  uVar7 = (*(code *)(*local_res18)[3])();
  if ((uVar7 & 0x20) != 0) {
    (*(code *)(*local_res18)[10])();
  }
  if (plVar15 == (longlong *)0x0) {
    local_68 = (longlong **)0x0;
    local_60 = 0;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      do {
        lVar16 = lVar16 + 1;
      } while (param_2[lVar16] != 0);
      uVar5 = (int)lVar16 + 1;
      local_60 = (ulonglong)uVar5;
      if (0 < (int)uVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
      }
      FGenericPlatformString::Memcpy(local_68,param_2,(longlong)(int)uVar5 * 2);
    }
    local_58 = &local_68;
    local_50 = &local_res18;
    FUN_140dd96a0(plVar17,&local_res8,&local_58,0);
    ppplVar8 = (longlong ***)local_res18;
    if ((longlong ***)local_68 != (longlong ***)0x0) {
      FMemory::Free();
      ppplVar8 = (longlong ***)local_res18;
    }
  }
  else {
    lVar14 = (**(code **)(*plVar15 + 0x28))(plVar15);
    if (lVar14 != 0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
    ppplVar8 = (longlong ***)(**(code **)(*plVar15 + 0x28))(plVar15);
    local_68 = (longlong **)(**(code **)(*plVar15 + 0x50))(plVar15);
    iVar3 = 1;
    if (ppplVar8 == (longlong ***)0x0) {
      local_res8 = CONCAT44(local_res8._4_4_,1);
    }
    else {
      local_res8 = CONCAT44(local_res8._4_4_,((longlong ***)local_68 != (longlong ***)0x0) + 2);
    }
    ppplVar9 = (longlong ***)(*(code *)(*local_res18)[5])();
    local_res10 = (longlong ***)(*(code *)(*local_res18)[10])();
    if (ppplVar9 != (longlong ***)0x0) {
      iVar3 = (local_res10 != (longlong ***)0x0) + 2;
    }
    if ((int)local_res8 != iVar3) {
      LowLevelFatalErrorHandler
                ("Unknown",0x568,
                 L"Console object named \'%s\' can\'t be replaced with the new one of different type!"
                 ,param_2);
      FDebug::AssertFailed
                (&DAT_144ca10ca,"Unknown",0x568,
                 L"Console object named \'%s\' can\'t be replaced with the new one of different type!"
                 ,param_2);
    }
    pplVar1 = local_68;
    if ((ppplVar8 == (longlong ***)0x0) || (ppplVar9 == (longlong ***)0x0)) {
      if ((longlong ***)local_68 == (longlong ***)0x0) {
        ppplVar8 = (longlong ***)0x0;
      }
      else {
        local_78 = (longlong ***)0x0;
        local_70 = (undefined8 *)0x0;
        local_68 = (longlong **)local_res10;
        if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
          do {
            lVar16 = lVar16 + 1;
          } while (param_2[lVar16] != 0);
          uVar5 = (int)lVar16 + 1;
          local_70 = (undefined8 *)(ulonglong)uVar5;
          if (0 < (int)uVar5) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
          }
          FGenericPlatformString::Memcpy(local_78,param_2,(longlong)(int)uVar5 * 2);
        }
        local_58 = (longlong ***)&local_78;
        local_50 = &local_68;
        FUN_140dd96a0(local_res20,&local_res8,&local_58,0);
        if (local_78 != (longlong ***)0x0) {
          FMemory::Free();
        }
        (*(code *)(*pplVar1)[0xb])(pplVar1);
        ppplVar8 = local_res10;
      }
    }
    else {
      uVar5 = (*(code *)(*ppplVar8)[3])(ppplVar8);
      if ((uVar5 >> 4 & 1) == 0) {
        pplVar1 = *ppplVar8;
        uVar6 = (*(code *)(*ppplVar9)[3])(ppplVar9);
        (*(code *)pplVar1[4])(ppplVar8,uVar6);
        pplVar1 = *ppplVar8;
        uVar11 = (*(code *)(*ppplVar9)[1])(ppplVar9);
        (*(code *)pplVar1[2])(ppplVar8,uVar11);
        (*(code *)(*ppplVar9)[0xb])(ppplVar9);
      }
      else {
        uVar7 = (*(code *)(*ppplVar9)[3])();
        if ((uVar7 & 1) == 0) {
          puVar10 = (undefined8 *)(*(code *)(*ppplVar8)[0xf])(ppplVar8,&local_58);
          if (*(int *)(puVar10 + 1) != 0) {
            local_78 = (longlong ***)*puVar10;
          }
          pplVar1 = *ppplVar9;
          uVar5 = (*(code *)(*ppplVar8)[3])(ppplVar8);
          (*(code *)pplVar1[0xc])(ppplVar9,local_78,uVar5 & 0xff000000);
          if ((longlong ****)local_58 != (longlong ****)0x0) {
            FMemory::Free();
          }
        }
        (*(code *)(*ppplVar8)[0xb])(ppplVar8);
        local_68 = (longlong **)0x0;
        local_60 = 0;
        local_res10 = ppplVar9;
        if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
          do {
            lVar16 = lVar16 + 1;
          } while (param_2[lVar16] != 0);
          uVar5 = (int)lVar16 + 1;
          local_60 = (ulonglong)uVar5;
          if (0 < (int)uVar5) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
          }
          FGenericPlatformString::Memcpy(local_68,param_2,(longlong)(int)uVar5 * 2);
        }
        local_78 = &local_68;
        local_70 = &local_res10;
        FUN_140dd96a0(local_res20,&local_res8,&local_78,0);
        ppplVar8 = ppplVar9;
        if ((longlong ***)local_68 != (longlong ***)0x0) {
          FMemory::Free();
        }
      }
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  return ppplVar8;
}



// FUNCTION 1415bfc90 FUN_1415bfc90 body=83 status=ok
// SIG undefined FUN_1415bfc90(void)

void FUN_1415bfc90(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = DAT_1468b38f8;
  lVar2 = (longlong)DAT_1468b38f8;
  DAT_1468b38f8 = DAT_1468b38f8 + 1;
  if (DAT_1468b38fc < DAT_1468b38f8) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1468b38f0,iVar1);
  }
  FString::FString(lVar2 * 0x10 + DAT_1468b38f0,param_1);
  return;
}



// FUNCTION 1415bfcf0 AllocateImpl body=272 status=ok
// SIG undefined AllocateImpl(void)

longlong FCachedOSPageAllocator::AllocateImpl
                   (undefined8 param_1,ulonglong param_2,ulonglong param_3,longlong *param_4,
                   longlong *param_5,int *param_6,int *param_7)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *_Dst;
  
  if ((param_2 <= (param_3 & 0xffffffff) >> 2) && (_Dst = param_4, param_4 != param_5)) {
    do {
      uVar2 = _Dst[1];
      if (uVar2 == param_2) {
        lVar1 = *_Dst;
        if (lVar1 == 0) {
          LowLevelFatalErrorHandler
                    ("Unknown",0x30,L"OS memory allocation cache has been corrupted!");
          FDebug::AssertFailed(L"","Unknown",0x30,L"OS memory allocation cache has been corrupted!")
          ;
          uVar2 = (ulonglong)*(uint *)(_Dst + 1);
        }
        *param_7 = *param_7 - (int)uVar2;
        if (_Dst + 2 != param_5) {
          ::_guard_xfg_dispatch_icall_nop
                    (_Dst,_Dst + 2,(((longlong)param_5 - (longlong)_Dst >> 4) + -1) * 0x10);
        }
        *param_6 = *param_6 + -1;
        return lVar1;
      }
      _Dst = _Dst + 2;
    } while (_Dst != param_5);
    lVar1 = FWindowsPlatformMemory::BinnedAllocFromOS(param_2);
    if (lVar1 != 0) {
      return lVar1;
    }
    do {
      FUN_14169c490(*param_4,param_4[1]);
      *param_4 = 0;
      param_4[1] = 0;
      param_4 = param_4 + 2;
    } while (param_4 != param_5);
    *param_6 = 0;
    *param_7 = 0;
  }
  lVar1 = FWindowsPlatformMemory::BinnedAllocFromOS(param_2);
  return lVar1;
}



// FUNCTION 1415bfe00 AllocateRegularBlock body=78 status=ok
// SIG undefined AllocateRegularBlock(void)

longlong FMallocBinned2::FPoolInfo::AllocateRegularBlock(short *param_1)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  ulonglong uVar4;
  
  puVar3 = *(ushort **)(param_1 + 4);
  *param_1 = *param_1 + 1;
  iVar2 = *(int *)(puVar3 + 2);
  iVar1 = iVar2 + -1;
  *(int *)(puVar3 + 2) = iVar1;
  if ((short)puVar3 == 0) {
    uVar4 = 0x10000 - (ulonglong)((uint)*puVar3 * iVar2);
  }
  else {
    uVar4 = (ulonglong)(iVar1 * (uint)*puVar3);
  }
  if (*(int *)(*(longlong *)(param_1 + 4) + 4) == 0) {
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(*(longlong *)(param_1 + 4) + 8);
  }
  return (longlong)puVar3 + uVar4;
}



// FUNCTION 1415bfe60 CallAllConsoleVariableSinks body=138 status=ok
// SIG undefined CallAllConsoleVariableSinks(void)

void FConsoleManager::CallAllConsoleVariableSinks(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 0xcc) != '\0') {
    uVar3 = 0;
    if (*(int *)(param_1 + 0xb8) != 0) {
      do {
        plVar2 = (longlong *)((longlong)(int)uVar3 * 0x10 + *(longlong *)(param_1 + 0xb0));
        if ((((int)plVar2[1] != 0) && ((longlong *)*plVar2 != (longlong *)0x0)) &&
           (cVar1 = (**(code **)(*(longlong *)*plVar2 + 0x18))(), cVar1 != '\0')) {
          if ((int)plVar2[1] == 0) {
            plVar2 = (longlong *)0x0;
          }
          else {
            plVar2 = (longlong *)*plVar2;
          }
          (**(code **)(*plVar2 + 0x40))();
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0xb8));
    }
    *(undefined1 *)(param_1 + 0xcc) = 0;
  }
  return;
}



// FUNCTION 1415bfef0 CanChange body=290 status=ok
// SIG undefined CanChange(void)

bool FConsoleVariableBase::CanChange(longlong *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  wchar_t *pwVar5;
  undefined2 *puVar6;
  wchar_t *local_48;
  int local_40;
  longlong local_38 [2];
  longlong local_28 [2];
  
  uVar4 = *(uint *)(param_1 + 3) & 0xff000000;
  param_2 = param_2 & 0xff000000;
  if (uVar4 > param_2) {
    if (DAT_1468b1f88 == 0) {
      IConsoleManager::SetupSingleton();
    }
    FConsoleManager::FindConsoleObjectName(DAT_1468b1f88,&local_48,param_1);
    puVar6 = &DAT_143f3eda8;
    if (local_40 < 2) {
      pwVar5 = L"unknown?";
    }
    else {
      pwVar5 = L"";
      if (local_40 != 0) {
        pwVar5 = local_48;
      }
    }
    puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x78))(param_1,local_38);
    if (*(int *)(puVar1 + 1) != 0) {
      puVar6 = (undefined2 *)*puVar1;
    }
    uVar2 = GetSetByTCHAR(uVar4);
    uVar3 = GetSetByTCHAR(param_2);
    FString::PrintfImpl(local_28,
                        L"Setting the console variable \'%s\' with \'SetBy%s\' was ignored as it is lower priority than the previous \'SetBy%s\'. Value remains \'%s\'"
                        ,pwVar5,uVar3,uVar2,puVar6);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    if (local_48 != (wchar_t *)0x0) {
      FMemory::Free(local_48);
    }
  }
  return uVar4 <= param_2;
}



// FUNCTION 1415c0020 FUN_1415c0020 body=111 status=ok
// SIG undefined FUN_1415c0020(void)

void FUN_1415c0020(longlong param_1)

{
  LowLevelFatalErrorHandler
            ("Unknown",0x4a0,
             L"FMallocBinned2 Attempt to realloc an unrecognized block %p   canary == 0x%x != 0x%x",
             param_1,*(undefined1 *)(param_1 + 3),0xe3);
  FDebug::AssertFailed
            (&DAT_144ca113b,"Unknown",0x4a0,
             L"FMallocBinned2 Attempt to realloc an unrecognized block %p   canary == 0x%x != 0x%x",
             param_1,*(undefined1 *)(param_1 + 3),0xe3);
  return;
}



// FUNCTION 1415c0090 FUN_1415c0090 body=113 status=ok
// SIG undefined FUN_1415c0090(void)

void FUN_1415c0090(longlong param_1,short param_2)

{
  if (*(short *)(param_1 + 2) != param_2) {
    LowLevelFatalErrorHandler
              ("Unknown",0x8a,L"MallocBinned2 Corruption Canary was 0x%x, should be 0x%x",
               *(short *)(param_1 + 2),param_2);
    FDebug::AssertFailed
              (&DAT_143f3f584,"Unknown",0x8a,
               L"MallocBinned2 Corruption Canary was 0x%x, should be 0x%x",
               *(undefined2 *)(param_1 + 2),param_2);
  }
  return;
}



// FUNCTION 1415c0110 ClearAndDisableTLSCachesOnCurrentThread body=330 status=ok
// SIG undefined ClearAndDisableTLSCachesOnCurrentThread(void)

void FMallocBinned2::ClearAndDisableTLSCachesOnCurrentThread(void)

{
  BOOL BVar1;
  LPVOID pvVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
  
  FlushCurrentThreadCache();
  pvVar2 = TlsGetValue(DAT_1468b1f84);
  if (pvVar2 != (LPVOID)0x0) {
    lpCriticalSection = (LPCRITICAL_SECTION)FUN_1415c44b0();
    BVar1 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar1 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    plVar3 = (longlong *)FUN_1415c4960();
    lVar5 = (longlong)(int)plVar3[1];
    if ((int)plVar3[1] != 0) {
      iVar9 = 0;
      bVar10 = *(LPVOID *)*plVar3 != pvVar2;
      lVar8 = 0;
      iVar6 = 0;
      do {
        lVar8 = lVar8 + 1;
        iVar7 = iVar6 + 1;
        if (lVar8 < lVar5) {
          plVar4 = (longlong *)(*plVar3 + lVar8 * 8);
          do {
            if (bVar10 != ((LPVOID)*plVar4 != pvVar2)) break;
            iVar7 = iVar7 + 1;
            lVar8 = lVar8 + 1;
            plVar4 = plVar4 + 1;
          } while (lVar8 < lVar5);
        }
        if (bVar10 != false) {
          if (iVar9 != iVar6) {
            ::_guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar3 + (longlong)iVar9 * 8),
                       (void *)(*plVar3 + (longlong)iVar6 * 8),(longlong)(iVar7 - iVar6) << 3);
          }
          iVar9 = iVar9 + (iVar7 - iVar6);
        }
        bVar10 = (bool)(bVar10 ^ 1);
        iVar6 = iVar7;
      } while (lVar8 < lVar5);
      *(int *)(plVar3 + 1) = iVar9;
    }
    LeaveCriticalSection(lpCriticalSection);
  }
                    /* WARNING: Could not recover jumptable at 0x0001415c0253. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsSetValue(DAT_1468b1f84,(LPVOID)0x0);
  return;
}



// FUNCTION 1415c0260 FUN_1415c0260 body=33 status=ok
// SIG undefined FUN_1415c0260(void)

byte FUN_1415c0260(longlong *param_1)

{
  (**(code **)(*param_1 + 0x1f8))();
  return (byte)~*(byte *)(param_1 + 5) >> 7;
}



// FUNCTION 1415c0290 FUN_1415c0290 body=63 status=ok
// SIG undefined FUN_1415c0290(void)

byte FUN_1415c0290(longlong *param_1)

{
  char cVar1;
  
  FUN_1415c2db0();
  cVar1 = (**(code **)(*param_1 + 0x1f8))(param_1);
  if ((cVar1 == '\0') &&
     (*(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 0x80, (char)param_1[0x217] == '\0')) {
    *(undefined1 *)(param_1 + 0x217) = 0;
  }
  return (byte)~*(byte *)(param_1 + 5) >> 7;
}



// FUNCTION 1415c02d0 CloseLowLevel body=38 status=ok
// SIG undefined CloseLowLevel(void)

void FArchiveFileReaderGeneric::CloseLowLevel(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001415c02f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1415c0300 CloseLowLevel body=47 status=ok
// SIG undefined CloseLowLevel(void)

undefined8 FArchiveFileWriterGeneric::CloseLowLevel(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return 1;
}



// FUNCTION 1415c0330 ConvertToAbsolutePathForExternalAppForWrite body=62 status=ok
// SIG undefined ConvertToAbsolutePathForExternalAppForWrite(void)

undefined8
FFileManagerGeneric::ConvertToAbsolutePathForExternalAppForWrite
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = FPlatformFileManager::Get();
  plVar2 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar1);
  (**(code **)(*plVar2 + 0x168))(plVar2,param_2,param_3);
  return param_2;
}



// FUNCTION 1415c0370 FUN_1415c0370 body=62 status=ok
// SIG undefined FUN_1415c0370(void)

undefined8 FUN_1415c0370(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = FPlatformFileManager::Get();
  plVar2 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar1);
  (**(code **)(*plVar2 + 0x170))(plVar2,param_2,param_3);
  return param_2;
}



// FUNCTION 1415c03b0 FUN_1415c03b0 body=29 status=ok
// SIG undefined FUN_1415c03b0(void)

undefined8 FUN_1415c03b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1415c0f30(param_2,param_3);
  return param_2;
}



// FUNCTION 1415c03d0 FUN_1415c03d0 body=814 status=ok
// SIG undefined FUN_1415c03d0(void)

ulonglong FUN_1415c03d0(longlong *param_1,short *param_2,short *param_3,uint param_4,char param_5,
                       char param_6,longlong param_7,uint param_8,uint param_9)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 extraout_var;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  uint uVar13;
  longlong lVar14;
  undefined2 *puVar15;
  longlong lVar16;
  short *aj;
  uint cpt;
  longlong local_68;
  ulonglong local_60;
  tagPOINT local_58;
  ulonglong local_50;
  longlong local_48 [2];
  longlong local_38 [2];
  
  uVar6 = 0;
  local_50 = 0;
  local_58.x = 0;
  local_58.y = 0;
  lVar16 = -1;
  aj = param_3;
  cpt = param_4;
  if ((param_3 != (short *)0x0) && (lVar14 = lVar16, *param_3 != 0)) {
    do {
      lVar14 = lVar14 + 1;
    } while (param_3[lVar14] != 0);
    uVar13 = (int)lVar14 + 1;
    local_50 = (ulonglong)uVar13;
    if (0 < (int)uVar13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    }
    aj = (short *)((longlong)(int)uVar13 * 2);
    FGenericPlatformString::Memcpy(local_58,param_3);
  }
  local_60 = 0;
  local_68 = 0;
  if ((param_2 != (short *)0x0) && (lVar14 = lVar16, *param_2 != 0)) {
    do {
      lVar14 = lVar14 + 1;
    } while (param_2[lVar14] != 0);
    uVar13 = (int)lVar14 + 1;
    local_60 = (ulonglong)uVar13;
    if (0 < (int)uVar13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    }
    aj = (short *)((longlong)(int)uVar13 * 2);
    FGenericPlatformString::Memcpy(local_68,param_2);
  }
  puVar4 = (undefined8 *)FPaths::ConvertRelativePathToFull(local_38,&local_58);
  puVar5 = (undefined8 *)FPaths::ConvertRelativePathToFull(local_48,&local_68);
  puVar15 = &DAT_143f3eda8;
  if (*(int *)(puVar4 + 1) == 0) {
    puVar12 = &DAT_143f3eda8;
  }
  else {
    puVar12 = (undefined2 *)*puVar4;
  }
  if (*(int *)(puVar5 + 1) == 0) {
    puVar11 = &DAT_143f3eda8;
  }
  else {
    puVar11 = (undefined2 *)*puVar5;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar12);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  if (local_58 != (tagPOINT)0x0) {
    FMemory::Free();
  }
  if (iVar3 == 0) {
LAB_1415c0526:
    uVar6 = 1;
  }
  else {
    if (param_7 == 0) {
      if ((char)param_4 == '\0') {
        uVar8 = FPlatformFileManager::Get();
        puVar4 = (undefined8 *)FPlatformFileManager::GetPlatformFile(uVar8);
        aj = (short *)*puVar4;
        cVar1 = (**(code **)(aj + 0x34))(puVar4,param_2);
        if (cVar1 != '\0') goto LAB_1415c0526;
      }
      if (param_5 != '\0') {
        uVar8 = FPlatformFileManager::Get();
        plVar9 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar8);
        aj = (short *)0x0;
        lVar14 = *plVar9;
        (**(code **)(lVar14 + 0x90))(plVar9,param_2);
        cpt = (uint)lVar14;
      }
      local_50 = 0;
      local_58.x = 0;
      local_58.y = 0;
      if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
        do {
          lVar16 = lVar16 + 1;
        } while (param_2[lVar16] != 0);
        uVar13 = (int)lVar16 + 1;
        local_50 = (ulonglong)uVar13;
        if (0 < (int)uVar13) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
        }
        aj = (short *)((longlong)(int)uVar13 * 2);
        FGenericPlatformString::Memcpy(local_58,param_2);
      }
      iVar3 = FPaths::GetPath((HDC)local_38,&local_58,(LPBYTE)aj,cpt);
      if (*(int *)((undefined8 *)CONCAT44(extraout_var,iVar3) + 1) != 0) {
        puVar15 = *(undefined2 **)CONCAT44(extraout_var,iVar3);
      }
      (**(code **)(*param_1 + 0x58))(param_1,puVar15,1);
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      if (local_58 != (tagPOINT)0x0) {
        FMemory::Free();
      }
      uVar8 = FPlatformFileManager::Get();
      plVar9 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar8);
      cVar1 = (**(code **)(*plVar9 + 0x158))
                        (plVar9,param_2,param_3,param_8 >> 2 & 0xffffff01,(byte)(param_9 >> 4) & 1);
      if (cVar1 == '\0') goto LAB_1415c0526;
    }
    else {
      uVar7 = FUN_1415c0700(param_1,param_2,param_3,param_4 & 0xff,param_5,param_6,param_7,param_8,
                            param_9);
      uVar6 = uVar7 & 0xffffffff;
      if ((int)uVar7 != 0) {
        return uVar7;
      }
    }
    if (param_6 != '\0') {
      uVar8 = FPlatformFileManager::Get();
      plVar9 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar8);
      uVar8 = FPlatformFileManager::Get();
      plVar10 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar8);
      lVar16 = *plVar10;
      uVar2 = (**(code **)(*plVar9 + 0x80))(plVar9,param_3);
      (**(code **)(lVar16 + 0x90))(plVar10,param_2,uVar2);
    }
  }
  return uVar6;
}



// FUNCTION 1415c0700 FUN_1415c0700 body=937 status=ok
// SIG undefined FUN_1415c0700(void)

undefined2 *
FUN_1415c0700(longlong *param_1,short *param_2,short *param_3,byte param_4,byte param_5,
             undefined8 param_6,undefined8 *param_7,undefined4 param_8,uint param_9)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int local_78;
  longlong local_68;
  undefined2 *local_58;
  int local_50;
  undefined4 local_4c;
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  
  puVar9 = (undefined2 *)0x0;
  cVar1 = (**(code **)*param_7)(param_7,0);
  if (cVar1 == '\0') {
    return (undefined2 *)0x2;
  }
  iVar8 = 0;
  lVar13 = -1;
  local_48 = (undefined2 *)0x0;
  local_3c = 0;
  puVar7 = puVar9;
  if ((param_3 != (short *)0x0) && (puVar7 = (undefined2 *)0x0, lVar12 = lVar13, *param_3 != 0)) {
    do {
      lVar12 = lVar12 + 1;
    } while (param_3[lVar12] != 0);
    iVar11 = (int)lVar12 + 1;
    local_40 = iVar11;
    if (0 < iVar11) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    }
    iVar8 = local_40;
    puVar7 = local_48;
    FGenericPlatformString::Memcpy(local_48,param_3,(longlong)iVar11 * 2);
  }
  local_58 = (undefined2 *)0x0;
  local_78 = 0;
  local_4c = 0;
  puVar10 = puVar9;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    do {
      lVar13 = lVar13 + 1;
    } while (param_2[lVar13] != 0);
    iVar11 = (int)lVar13 + 1;
    local_50 = iVar11;
    if (0 < iVar11) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    }
    local_78 = local_50;
    puVar10 = local_58;
    FGenericPlatformString::Memcpy(local_58,param_2,(longlong)iVar11 * 2);
  }
  puVar6 = &DAT_143f3eda8;
  if (iVar8 != 0) {
    puVar6 = puVar7;
  }
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x18))(param_1,puVar6,param_8);
  if (plVar2 == (longlong *)0x0) {
    puVar9 = (undefined2 *)0x1;
  }
  else {
    puVar6 = &DAT_143f3eda8;
    if (local_78 != 0) {
      puVar6 = puVar10;
    }
    plVar3 = (longlong *)
             (**(code **)(*param_1 + 0x20))
                       (param_1,puVar6,(param_4 ^ 1) * 2 | (uint)param_5 << 2 | param_9);
    if (plVar3 == (longlong *)0x0) {
      puVar9 = (undefined2 *)0x1;
    }
    else {
      lVar12 = (**(code **)(*plVar2 + 0x98))(plVar2);
      local_68 = 0;
      uVar4 = operator_new(0x8000);
      lVar13 = lVar12;
      puVar7 = puVar9;
      puVar6 = puVar9;
      if (0 < lVar12) {
        do {
          lVar5 = 8;
          if (lVar13 < 9) {
            lVar5 = lVar13;
          }
          (**(code **)(*plVar2 + 0x50))(plVar2,uVar4,lVar5);
          if (((char)plVar2[5] < '\0') ||
             ((**(code **)(*plVar3 + 0x50))(plVar3,uVar4,lVar5), (char)plVar3[5] < '\0')) {
            puVar9 = (undefined2 *)0x1;
            puVar10 = local_58;
            break;
          }
          lVar5 = (longlong)puVar6 / lVar12;
          if ((local_68 != lVar5) &&
             (cVar1 = (**(code **)*param_7)(param_7,(float)lVar5 * 0.01), cVar1 == '\0')) {
            puVar9 = (undefined2 *)0x2;
            puVar10 = local_58;
            break;
          }
          puVar7 = puVar7 + 4;
          lVar13 = lVar13 + -8;
          puVar6 = puVar6 + 400;
          puVar10 = local_58;
          local_68 = lVar5;
        } while ((longlong)puVar7 < lVar12);
      }
      FMemory::operator_delete(uVar4);
      if (((int)puVar9 == 0) && (cVar1 = (**(code **)(*plVar3 + 0xe8))(plVar3), cVar1 == '\0')) {
        puVar9 = (undefined2 *)0x1;
      }
      (**(code **)*plVar3)(plVar3,1);
      if ((int)puVar9 == 0) {
        cVar1 = (**(code **)(*plVar2 + 0xe8))(plVar2);
        puVar7 = local_48;
        if (cVar1 == '\0') {
          puVar9 = (undefined2 *)0x1;
        }
      }
      else {
        puVar7 = &DAT_143f3eda8;
        if (local_78 != 0) {
          puVar7 = puVar10;
        }
        (**(code **)(*param_1 + 0x30))(param_1,puVar7,0,0,0);
        puVar7 = local_48;
      }
    }
    (**(code **)*plVar2)(plVar2,1);
    if (((int)puVar9 == 0) && (cVar1 = (**(code **)*param_7)(param_7,0x3f800000), cVar1 == '\0')) {
      puVar9 = (undefined2 *)0x2;
    }
  }
  if (puVar10 != (undefined2 *)0x0) {
    FMemory::Free(puVar10);
  }
  if (puVar7 != (undefined2 *)0x0) {
    FMemory::Free(puVar7);
  }
  return puVar9;
}



// FUNCTION 1415c0ab0 FUN_1415c0ab0 body=395 status=ok
// SIG undefined FUN_1415c0ab0(void)

undefined8 * FUN_1415c0ab0(undefined8 param_1,short *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  
  uVar1 = FPlatformFileManager::Get();
  plVar2 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar1);
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0xb8))(plVar2,param_2,param_3 >> 2 & 0x3fffff01);
  if (plVar2 == (longlong *)0x0) {
    if ((param_3 & 1) != 0) {
      LowLevelFatalErrorHandler("Unknown",0x35,L"Failed to read file: %s",param_2);
      FDebug::AssertFailed(&DAT_144ca113e,"Unknown",0x35,L"Failed to read file: %s",param_2);
    }
    return (undefined8 *)0x0;
  }
  puVar3 = (undefined8 *)operator_new(0x4c8);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    uVar1 = (**(code **)(*plVar2 + 0x40))(plVar2);
    FArchive::FArchive(puVar3);
    *puVar3 = &PTR__scalar_deleting_destructor__144cad960;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (param_2[lVar5] != 0);
      iVar4 = (int)lVar5 + 1;
      *(int *)(puVar3 + 0x13) = iVar4;
      if (0 < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar3 + 0x12,0);
      }
      FGenericPlatformString::Memcpy(puVar3[0x12],param_2,(longlong)iVar4 * 2);
    }
    puVar3[0x14] = uVar1;
    puVar3[0x15] = 0;
    puVar3[0x16] = 0;
    puVar3[0x17] = 0;
    puVar3[0x18] = plVar2;
    FArchive::SetIsLoading(puVar3,1);
    FArchive::SetIsPersistent(puVar3,1);
  }
  return puVar3;
}



// FUNCTION 1415c0c40 FUN_1415c0c40 body=744 status=ok
// SIG undefined FUN_1415c0c40(void)

undefined8 * FUN_1415c0c40(longlong *param_1,short *param_2,ulonglong param_3,int param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined4 extraout_var;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  uint uVar9;
  longlong lVar10;
  LPBYTE aj;
  tagPOINT local_38;
  ulonglong local_30;
  longlong local_28 [2];
  
  aj = (LPBYTE)CONCAT71((int7)(param_3 >> 8),1);
  cVar1 = FSHA1::GetFileSHAHash(param_2,0);
  if ((cVar1 != '\0') && (lVar3 = (**(code **)(*param_1 + 0xe8))(param_1,param_2), lVar3 != -1)) {
    puVar4 = (undefined8 *)operator_new(0x98);
    if (puVar4 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    FArchive::FArchive(puVar4);
    *puVar4 = &PTR__scalar_deleting_destructor__144cadd70;
    puVar4[0x12] = 0;
    FArchive::SetIsSaving(puVar4,1);
    FArchive::SetIsPersistent(puVar4,1);
    return puVar4;
  }
  puVar4 = (undefined8 *)0x0;
  local_38.x = 0;
  local_38.y = 0;
  local_30 = 0;
  lVar3 = -1;
  if ((param_2 != (short *)0x0) && (lVar10 = lVar3, *param_2 != 0)) {
    do {
      lVar10 = lVar10 + 1;
    } while (param_2[lVar10] != 0);
    uVar9 = (int)lVar10 + 1;
    local_30 = (ulonglong)uVar9;
    if (0 < (int)uVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    aj = (LPBYTE)((longlong)(int)uVar9 * 2);
    FGenericPlatformString::Memcpy(local_38,param_2);
  }
  iVar2 = FPaths::GetPath((HDC)local_28,&local_38,aj,param_4);
  if (*(int *)((undefined8 *)CONCAT44(extraout_var,iVar2) + 1) == 0) {
    puVar8 = &DAT_143f3eda8;
  }
  else {
    puVar8 = *(undefined2 **)CONCAT44(extraout_var,iVar2);
  }
  (**(code **)(*param_1 + 0x58))(param_1,puVar8,1);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_38 != (tagPOINT)0x0) {
    FMemory::Free();
  }
  if ((param_3 & 4) != 0) {
    uVar5 = FPlatformFileManager::Get();
    plVar6 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar5);
    (**(code **)(*plVar6 + 0x90))(plVar6,param_2,0);
  }
  uVar5 = FPlatformFileManager::Get();
  plVar6 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar5);
  plVar6 = (longlong *)
           (**(code **)(*plVar6 + 200))
                     (plVar6,param_2,param_3 >> 3 & 0x1fffff01,
                      (param_3 & 0xffffffff) >> 4 & 0xfffff01);
  if (plVar6 == (longlong *)0x0) {
    if ((param_3 & 1) != 0) {
      LowLevelFatalErrorHandler("Unknown",0x73,L"Failed to create file: %s",param_2);
      FDebug::AssertFailed(&DAT_144ca114e,"Unknown",0x73,L"Failed to create file: %s",param_2);
    }
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar7 = (undefined8 *)operator_new(0x10c0);
    if (puVar7 != (undefined8 *)0x0) {
      uVar5 = (**(code **)(*plVar6 + 8))(plVar6);
      FArchive::FArchive(puVar7);
      *puVar7 = &PTR_FUN_144cadb68;
      puVar7[0x12] = 0;
      puVar7[0x13] = 0;
      if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
        do {
          lVar3 = lVar3 + 1;
        } while (param_2[lVar3] != 0);
        iVar2 = (int)lVar3 + 1;
        *(int *)(puVar7 + 0x13) = iVar2;
        if (0 < iVar2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar7 + 0x12,0);
        }
        FGenericPlatformString::Memcpy(puVar7[0x12],param_2,(longlong)iVar2 * 2);
      }
      puVar7[0x14] = uVar5;
      puVar7[0x15] = 0;
      puVar7[0x16] = plVar6;
      *(undefined1 *)(puVar7 + 0x217) = 0;
      FArchive::SetIsSaving(puVar7,1);
      FArchive::SetIsPersistent(puVar7,1);
      puVar4 = puVar7;
    }
  }
  return puVar4;
}



// FUNCTION 1415c0f30 FUN_1415c0f30 body=738 status=ok
// SIG undefined FUN_1415c0f30(void)

undefined8 * FUN_1415c0f30(undefined8 *param_1,short *param_2)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  uint uVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  wchar_t *local_48;
  undefined8 local_40;
  wchar_t *local_38;
  undefined8 local_30;
  
  pwVar9 = (wchar_t *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  lVar12 = -1;
  if ((param_2 != (short *)0x0) && (lVar8 = lVar12, *param_2 != 0)) {
    do {
      lVar8 = lVar8 + 1;
    } while (param_2[lVar8] != 0);
    iVar5 = (int)lVar8 + 1;
    *(int *)(param_1 + 1) = iVar5;
    if (0 < iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,param_2,(longlong)iVar5 * 2);
  }
  FPaths::NormalizeFilename(param_1);
  psVar4 = (short *)FUN_1415b59d0();
  local_40 = 0;
  local_48 = (wchar_t *)0x0;
  if ((psVar4 != (short *)0x0) && (lVar8 = lVar12, *psVar4 != 0)) {
    do {
      lVar8 = lVar8 + 1;
    } while (psVar4[lVar8] != 0);
    uVar6 = (int)lVar8 + 1;
    local_40 = (ulonglong)uVar6;
    if (0 < (int)uVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    }
    FGenericPlatformString::Memcpy(local_48,psVar4,(longlong)(int)uVar6 * 2);
  }
  FPaths::NormalizeFilename(&local_48);
  iVar5 = FUN_141592950(&local_48,&DAT_144ca33f4,0,1,0xffffffff);
  while( true ) {
    if (iVar5 == -1) goto LAB_1415c11dc;
    cVar2 = FString::StartsWith(param_1,&local_48,1);
    if (cVar2 != '\0') break;
    iVar3 = FUN_141592950(&local_48,&DAT_144ca3a04,0,1,iVar5);
    iVar5 = 0;
    if (iVar3 == -1) {
      uVar1 = local_40 >> 0x20;
      local_40 = local_40 & 0xffffffff00000000;
      if ((int)uVar1 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48,0);
      }
    }
    else {
      iVar3 = iVar3 + 1;
      if ((int)local_40 == 0) {
        pwVar10 = L"";
        iVar7 = iVar5;
      }
      else {
        pwVar10 = local_48;
        iVar7 = (int)local_40 + -1;
      }
      if ((-1 < iVar3) && (iVar5 = iVar7, iVar3 < iVar7)) {
        iVar5 = iVar3;
      }
      local_38 = (wchar_t *)0x0;
      uVar6 = iVar5 + 1;
      if (iVar5 == 0) {
        uVar6 = 0;
      }
      local_30 = (ulonglong)uVar6;
      pwVar13 = pwVar9;
      if (0 < (int)uVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
        pwVar13 = local_38;
        uVar6 = (uint)local_30;
        if (0 < (int)(uint)local_30) {
          wcsncpy(local_38,pwVar10,(longlong)iVar5);
          pwVar13[iVar5] = L'\0';
        }
      }
      if (local_48 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      local_40 = CONCAT44(local_30._4_4_,uVar6);
      local_30 = 0;
      local_38 = (wchar_t *)0x0;
      local_48 = pwVar13;
    }
    iVar5 = FUN_141592950(&local_48,&DAT_144ca33f4,0,1,0xffffffff);
  }
  psVar4 = (short *)FUN_1416ac480();
  local_38 = (wchar_t *)0x0;
  local_30 = 0;
  pwVar10 = L"";
  if ((psVar4 != (short *)0x0) && (*psVar4 != 0)) {
    do {
      lVar12 = lVar12 + 1;
    } while (psVar4[lVar12] != 0);
    uVar11 = (int)lVar12 + 1;
    local_30 = (ulonglong)uVar11;
    uVar6 = uVar11;
    if (0 < (int)uVar11) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      uVar6 = (uint)local_30;
    }
    pwVar9 = local_38;
    FGenericPlatformString::Memcpy(local_38,psVar4,(longlong)(int)uVar11 * 2);
    pwVar10 = pwVar9;
    if (uVar6 == 0) {
      pwVar10 = L"";
    }
  }
  FUN_141677bd0(param_1,pwVar10);
  if (pwVar9 != (wchar_t *)0x0) {
    FMemory::Free(pwVar9);
  }
LAB_1415c11dc:
  if (local_48 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1415c1220 Delete body=185 status=ok
// SIG undefined Delete(void)

undefined1
FFileManagerGeneric::Delete(undefined8 param_1,undefined8 param_2,char param_3,char param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong *plVar3;
  
  cVar2 = FSHA1::GetFileSHAHash(param_2,0,1);
  if (cVar2 == '\0') {
    uVar1 = FPlatformFileManager::Get();
    plVar3 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar1);
    cVar2 = (**(code **)(*plVar3 + 0x68))(plVar3,param_2);
    if (param_3 == '\0') {
      if (cVar2 == '\0') {
        return 1;
      }
    }
    else if (cVar2 == '\0') {
      return 0;
    }
    if (param_4 != '\0') {
      uVar1 = FPlatformFileManager::Get();
      plVar3 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar1);
      (**(code **)(*plVar3 + 0x90))(plVar3,param_2,0);
    }
    uVar1 = FPlatformFileManager::Get();
    plVar3 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar1);
    cVar2 = (**(code **)(*plVar3 + 0x78))(plVar3,param_2);
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1415c12e0 FUN_1415c12e0 body=146 status=ok
// SIG undefined FUN_1415c12e0(void)

undefined1 FUN_1415c12e0(undefined8 param_1,undefined8 param_2,char param_3,char param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong *plVar3;
  
  uVar1 = FPlatformFileManager::Get();
  plVar3 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar1);
  if (param_4 == '\0') {
    cVar2 = (**(code **)(*plVar3 + 0xe0))(plVar3,param_2);
  }
  else {
    cVar2 = (**(code **)(*plVar3 + 0x148))();
  }
  if (cVar2 != '\0') {
    return 1;
  }
  if (param_3 == '\0') {
    uVar1 = FPlatformFileManager::Get();
    plVar3 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar1);
    cVar2 = (**(code **)(*plVar3 + 0xd0))(plVar3,param_2);
    if (cVar2 == '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1415c1380 DirectoryExists body=43 status=ok
// SIG undefined DirectoryExists(void)

void FFileManagerGeneric::DirectoryExists(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = FPlatformFileManager::Get();
  plVar2 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001415c13a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xd0))(plVar2,param_2);
  return;
}



// FUNCTION 1415c13c0 Execute body=78 status=ok
// SIG undefined Execute(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FConsoleCommand::Execute(longlong param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if ((*(int *)(param_1 + 0x28) != 0) && (*(longlong **)(param_1 + 0x20) != (longlong *)0x0)) {
    in_RAX = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))();
    if ((char)in_RAX != '\0') {
      if (*(int *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001415c13f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x40))();
        return uVar1;
      }
                    /* WARNING: Could not recover jumptable at 0x0001415c1402. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(_DAT_00000000 + 0x40))();
      return uVar1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1415c1410 Execute body=106 status=ok
// SIG undefined Execute(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FConsoleCommandWithArgs::Execute(longlong param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if ((*(int *)(param_1 + 0x28) != 0) && (*(longlong **)(param_1 + 0x20) != (longlong *)0x0)) {
    in_RAX = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))();
    if ((char)in_RAX != '\0') {
      if (*(int *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001415c1453. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x40))
                          (*(longlong **)(param_1 + 0x20),param_2);
        return uVar1;
      }
                    /* WARNING: Could not recover jumptable at 0x0001415c1469. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(_DAT_00000000 + 0x40))(0,param_2);
      return uVar1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1415c1480 Execute body=106 status=ok
// SIG undefined Execute(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FConsoleCommandWithOutputDevice::Execute
                    (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if ((*(int *)(param_1 + 0x28) != 0) && (*(longlong **)(param_1 + 0x20) != (longlong *)0x0)) {
    in_RAX = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))();
    if ((char)in_RAX != '\0') {
      if (*(int *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001415c14c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x40))
                          (*(longlong **)(param_1 + 0x20),param_4);
        return uVar1;
      }
                    /* WARNING: Could not recover jumptable at 0x0001415c14d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(_DAT_00000000 + 0x40))(0,param_4);
      return uVar1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1415c14f0 FUN_1415c14f0 body=135 status=ok
// SIG undefined FUN_1415c14f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1415c14f0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if ((*(int *)(param_1 + 0x28) != 0) && (*(longlong **)(param_1 + 0x20) != (longlong *)0x0)) {
    in_RAX = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))();
    if ((char)in_RAX != '\0') {
      if (*(int *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001415c1543. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x40))
                          (*(longlong **)(param_1 + 0x20),param_3,param_2);
        return uVar1;
      }
                    /* WARNING: Could not recover jumptable at 0x0001415c1561. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(_DAT_00000000 + 0x40))(0,param_3,param_2);
      return uVar1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1415c1580 Execute body=106 status=ok
// SIG undefined Execute(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FConsoleCommandWithWorld::Execute(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if ((*(int *)(param_1 + 0x28) != 0) && (*(longlong **)(param_1 + 0x20) != (longlong *)0x0)) {
    in_RAX = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))();
    if ((char)in_RAX != '\0') {
      if (*(int *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001415c15c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x40))
                          (*(longlong **)(param_1 + 0x20),param_3);
        return uVar1;
      }
                    /* WARNING: Could not recover jumptable at 0x0001415c15d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(_DAT_00000000 + 0x40))(0,param_3);
      return uVar1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1415c15f0 Execute body=135 status=ok
// SIG undefined Execute(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FConsoleCommandWithWorldAndArgs::Execute
                    (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if ((*(int *)(param_1 + 0x28) != 0) && (*(longlong **)(param_1 + 0x20) != (longlong *)0x0)) {
    in_RAX = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))();
    if ((char)in_RAX != '\0') {
      if (*(int *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001415c1643. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x40))
                          (*(longlong **)(param_1 + 0x20),param_2,param_3);
        return uVar1;
      }
                    /* WARNING: Could not recover jumptable at 0x0001415c1661. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(_DAT_00000000 + 0x40))(0,param_2,param_3);
      return uVar1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1415c1680 Execute body=126 status=ok
// SIG undefined Execute(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FConsoleCommandWithWorldArgsAndOutputDevice::Execute
                    (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (((*(int *)(param_1 + 0x28) != 0) && (*(longlong **)(param_1 + 0x20) != (longlong *)0x0)) &&
     (in_RAX = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))(), (char)in_RAX != '\0')) {
    if (*(int *)(param_1 + 0x28) != 0) {
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x40))
                        (*(longlong **)(param_1 + 0x20),param_2,param_3,param_4);
      return uVar1;
    }
    uVar1 = (**(code **)(_DAT_00000000 + 0x40))(0,param_2,param_3,param_4);
    return uVar1;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1415c1700 FileExists body=40 status=ok
// SIG undefined FileExists(void)

void FFileManagerGeneric::FileExists(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = FPlatformFileManager::Get();
  plVar2 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001415c1724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x68))(plVar2,param_2);
  return;
}



// FUNCTION 1415c1730 FUN_1415c1730 body=58 status=ok
// SIG undefined FUN_1415c1730(void)

void FUN_1415c1730(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = FPlatformFileManager::Get();
  plVar2 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001415c1763. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x180))(plVar2,param_2,param_3);
  return;
}



// FUNCTION 1415c1770 FUN_1415c1770 body=40 status=ok
// SIG undefined FUN_1415c1770(void)

void FUN_1415c1770(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = FPlatformFileManager::Get();
  plVar2 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001415c1794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x70))(plVar2,param_2);
  return;
}



// FUNCTION 1415c17a0 FindConsoleObject body=52 status=ok
// SIG undefined FindConsoleObject(void)

longlong * FConsoleManager::FindConsoleObject(void)

{
  uint uVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FindConsoleObjectUnfiltered();
  if (plVar2 != (longlong *)0x0) {
    uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2);
    if ((uVar1 >> 4 & 1) != 0) {
      return (longlong *)0x0;
    }
  }
  return plVar2;
}



// FUNCTION 1415c17e0 FindConsoleObjectName body=435 status=ok
// SIG undefined FindConsoleObjectName(void)

undefined8 *
FConsoleManager::FindConsoleObjectName(longlong param_1,undefined8 *param_2,longlong param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  uint uVar2;
  bool bVar3;
  BOOL BVar4;
  int iVar5;
  longlong lVar6;
  uint *puVar7;
  longlong *plVar8;
  int local_68;
  uint uStack_64;
  int iStack_60;
  uint uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  int local_48;
  undefined4 uStack_44;
  longlong *local_40;
  int iStack_38;
  uint uStack_34;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xd0);
  BVar4 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar4 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  plVar8 = (longlong *)(param_1 + 8);
  iVar1 = *(int *)(param_1 + 0x30);
  puStack_30 = (uint *)(param_1 + 0x18);
  local_68 = 0;
  uStack_64 = 1;
  local_58._4_4_ = 0;
  uStack_50 = 0;
  if (iVar1 != 0) {
    puVar7 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar7 = puStack_30;
    }
    uVar2 = *puVar7;
    uStack_50 = 0;
    local_68 = 0;
    while (uVar2 == 0) {
      lVar6 = (longlong)local_68;
      uStack_50 = uStack_50 + 0x20;
      iVar5 = local_68 + 1;
      bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar5;
      if (bVar3) goto LAB_1415c18cf;
      uVar2 = puVar7[lVar6 + 1];
    }
    uStack_64 = -uVar2 & uVar2;
    iVar5 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    local_58._4_4_ = (uStack_50 - iVar5) + 0x1f;
    if (iVar1 < local_58._4_4_) {
LAB_1415c18cf:
      local_58._4_4_ = iVar1;
    }
  }
  uStack_28 = 0xffffffff;
  iStack_24 = local_58._4_4_;
  iStack_20 = uStack_50;
  uStack_1c = iStack_4c;
  iStack_38 = local_68;
  uStack_34 = uStack_64;
  iStack_60 = local_68;
  uStack_5c = uStack_64;
  local_48 = uStack_50;
  uStack_44 = iStack_4c;
  uStack_50 = 0xffffffff;
  iStack_4c = local_58._4_4_;
  bVar3 = local_58._4_4_ < iVar1;
  local_40 = plVar8;
  local_58 = puStack_30;
  if (bVar3) {
    do {
      if (*(longlong *)((longlong)iStack_4c * 0x20 + 0x10 + *plVar8) == param_3) {
        FString::FString(param_2,(longlong)iStack_4c * 0x20 + *plVar8);
        goto LAB_1415c1959;
      }
      uStack_50 = uStack_50 & ~uStack_5c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
    } while (iStack_4c < (int)local_58[6]);
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_1415c1959:
  LeaveCriticalSection(lpCriticalSection);
  return param_2;
}


